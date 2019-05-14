
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(generator_js0sourcemap_t0ptr, ___get_global_string_const(734), ___get_global_string_const(735)));
#line 23
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 24
c_rt_lib0move(&___nl__im__12, ptd0int());
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__2, ___get_global_string_const(736), ___nl__im__3, ___get_global_string_const(222), ___nl__im__10, ___get_global_string_const(71), ___nl__im__11, ___get_global_string_const(737), ___nl__im__12));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(generator_js0sourcemap_entry_t0ptr, ___get_global_string_const(734), ___get_global_string_const(738)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__6, ptd0arr(___nl__im__7));
#line 39
c_rt_lib0clear(&___nl__im__7);
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(739), ___nl__im__2, ___get_global_string_const(740), ___nl__im__4, ___get_global_string_const(741), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(560), ___nl__im__8, ___get_global_string_const(742), ___nl__im__9, ___get_global_string_const(743), ___nl__im__10));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(744), ___nl__im__2, ___get_global_string_const(745), ___nl__im__3, ___get_global_string_const(746), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(306));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(134), ___nl__im__6, ___get_global_string_const(135), ___nl__im__7, ___get_global_string_const(175), ___nl__im__8));
#line 66
c_rt_lib0clear(&___nl__im__6);
#line 66
c_rt_lib0clear(&___nl__im__7);
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 67
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 68
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(0));
#line 68
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(739), ___nl__im__11, ___get_global_string_const(740), ___nl__im__12, ___get_global_string_const(741), ___nl__im__13));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__4, ___get_global_string_const(736), ___nl__im__5, ___get_global_string_const(222), ___nl__im__9, ___get_global_string_const(71), ___nl__im__10, ___get_global_string_const(737), ___nl__im__15));
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
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
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
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(222)));
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
#line 86
c_rt_lib0move(&___nl__im__4,___get_global_string_const(747));
#line 86
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
c_rt_lib0move(&___nl__im__5,___get_global_string_const(450));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(748));
#line 87
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 87
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 87
c_rt_lib0clear(&___nl__im__8);
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 87
c_rt_lib0move(&___nl__im__10,___get_global_string_const(749));
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
c_rt_lib0move(&___nl__im__15,___get_global_string_const(115));
#line 88
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 88
c_rt_lib0clear(&___nl__im__14);
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 88
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 88
c_rt_lib0clear(&___nl__im__13);
#line 88
c_rt_lib0clear(&___nl__im__16);
#line 88
c_rt_lib0move(&___nl__im__17,___get_global_string_const(750));
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
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
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
#line 93
c_rt_lib0move(&___nl__im__7,___get_global_string_const(751));
#line 93
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 93
c_rt_lib0clear(&___nl__im__7);
#line 93
c_rt_lib0move(&___nl__im__8,___get_global_string_const(752));
#line 93
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
c_rt_lib0move(&___nl__im__9,___get_global_string_const(753));
#line 93
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0delete(generator_js_priv0println(___nl__im__3, ___ref___im__2));
#line 93
c_rt_lib0clear(&___nl__im__3);
#line 94
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(80));
#line 94
if(___nl__bool__10){ goto label_22;}
#line 96
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(81));
#line 96
if(___nl__bool__10){ goto label_31;}
#line 96
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 96
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__1));
#line 96
nl_die_arg(___nl__im__11);
#line 94
label_22:
;
#line 94
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(80)));
#line 94
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 95
c_rt_lib0move(&___nl__im__15,___get_global_string_const(754));
#line 95
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__12));
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0delete(generator_js_priv0println(___nl__im__14, ___ref___im__2));
#line 95
c_rt_lib0clear(&___nl__im__14);
#line 96
goto label_33;
#line 96
label_31:
;
#line 97
goto label_33;
#line 97
label_33:
;
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__bool__10;
#line 97
c_rt_lib0clear(&___nl__im__11);
#line 97
c_rt_lib0clear(&___nl__im__12);
#line 97
c_rt_lib0clear(&___nl__im__13);
#line 97
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
#line 101
c_rt_lib0move(&___nl__im__3,___get_global_string_const(747));
#line 101
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(736)));
#line 101
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(175)));
#line 101
c_rt_lib0clear(&___nl__im__5);
#line 101
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 101
c_rt_lib0clear(&___nl__im__3);
#line 101
c_rt_lib0clear(&___nl__im__4);
#line 101
c_rt_lib0move(&___nl__im__6,___get_global_string_const(755));
#line 101
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__6));
#line 101
c_rt_lib0clear(&___nl__im__2);
#line 101
c_rt_lib0clear(&___nl__im__6);
#line 101
c_rt_lib0delete(generator_js_priv0println(___nl__im__1, ___ref___im__0));
#line 101
c_rt_lib0clear(&___nl__im__1);
#line 102
___nl__int__7 = 0;
#line 103
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(736)));
#line 103
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(134)));
#line 103
c_rt_lib0clear(&___nl__im__9);
#line 103
___nl__int__11 = 0;
#line 103
___nl__int__12 = 1;
#line 103
___nl__int__13 = c_rt_lib0array_len(___nl__im__8);
#line 103
label_20:
;
#line 103
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 103
if(___nl__bool__14){ goto label_56;}
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__11));
#line 103
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 104
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(736)));
#line 104
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(175)));
#line 104
c_rt_lib0clear(&___nl__im__22);
#line 104
c_rt_lib0move(&___nl__im__23,___get_global_string_const(325));
#line 104
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 104
c_rt_lib0clear(&___nl__im__21);
#line 104
c_rt_lib0clear(&___nl__im__23);
#line 104
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__7));
#line 104
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__string__24));
#line 104
c_rt_lib0clear(&___nl__im__20);
#line 104
c_rt_lib0clear(&___nl__string__24);
#line 104
c_rt_lib0move(&___nl__im__25,___get_global_string_const(526));
#line 104
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__25));
#line 104
c_rt_lib0clear(&___nl__im__19);
#line 104
c_rt_lib0clear(&___nl__im__25);
#line 104
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_const_value(___nl__im__10));
#line 104
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__26));
#line 104
c_rt_lib0clear(&___nl__im__18);
#line 104
c_rt_lib0clear(&___nl__im__26);
#line 104
c_rt_lib0move(&___nl__im__27,___get_global_string_const(450));
#line 104
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__27));
#line 104
c_rt_lib0clear(&___nl__im__17);
#line 104
c_rt_lib0clear(&___nl__im__27);
#line 104
c_rt_lib0delete(generator_js_priv0print(___nl__im__16, ___ref___im__0));
#line 104
c_rt_lib0clear(&___nl__im__16);
#line 105
___nl__int__28 = 1;
#line 105
___nl__int__7 = ___nl__int__7 + ___nl__int__28;
#line 105
//clear ___nl__int__28;
#line 105
c_rt_lib0clear(&___nl__im__10);
#line 106
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 106
goto label_20;
#line 106
label_56:
;
#line 106
//clear ___nl__int__7;
#line 106
c_rt_lib0clear(&___nl__im__8);
#line 106
c_rt_lib0clear(&___nl__im__10);
#line 106
//clear ___nl__int__11;
#line 106
//clear ___nl__int__12;
#line 106
//clear ___nl__int__13;
#line 106
//clear ___nl__bool__14;
#line 106
c_rt_lib0clear(&___nl__im__15);
#line 106
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
#line 111
___nl__bool__3 = nl0is_string(___nl__im__0);
#line 111
___nl__bool__3 = !___nl__bool__3;
#line 111
if(___nl__bool__3){ goto label_61;}
#line 112
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 112
c_rt_lib0move(&___nl__im__4, ptd0ensure(___nl__im__5, ___nl__im__0));
#line 112
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 113
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(135)));
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
___nl__bool__6 = hash0has_key(___nl__im__7, ___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
___nl__bool__6 = !___nl__bool__6;
#line 113
if(___nl__bool__6){ goto label_21;}
#line 114
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 114
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(135)));
#line 114
c_rt_lib0clear(&___nl__im__10);
#line 114
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__4));
#line 114
___nl__int__2 = getIntFromImm(___nl__im__11);
#line 114
c_rt_lib0clear(&___nl__im__9);
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 115
goto label_58;
#line 115
label_21:
;
#line 116
c_rt_lib0move(&___nl__im__12,___get_global_string_const(736));
#line 116
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__12));
#line 116
c_rt_lib0move(&___nl__im__13,___get_global_string_const(134));
#line 116
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__13));
#line 116
c_rt_lib0array_push(&___nl__im__13, ___nl__im__0);
#line 116
c_rt_lib0move(&___nl__string__14,___get_global_string_const(134));
#line 116
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__14, ___nl__im__13));
#line 116
c_rt_lib0move(&___nl__string__14,___get_global_string_const(736));
#line 116
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__14, ___nl__im__12));
#line 116
c_rt_lib0clear(&___nl__im__12);
#line 116
c_rt_lib0clear(&___nl__im__13);
#line 116
c_rt_lib0clear(&___nl__string__14);
#line 117
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 117
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(134)));
#line 117
c_rt_lib0clear(&___nl__im__17);
#line 117
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 117
c_rt_lib0clear(&___nl__im__16);
#line 117
___nl__int__18 = 1;
#line 117
___nl__int__2 = ___nl__int__15 - ___nl__int__18;
#line 117
//clear ___nl__int__15;
#line 117
//clear ___nl__int__18;
#line 118
c_rt_lib0move(&___nl__im__19,___get_global_string_const(736));
#line 118
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__19));
#line 118
c_rt_lib0move(&___nl__im__20,___get_global_string_const(135));
#line 118
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 118
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__2));
#line 118
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__20, ___nl__im__4, ___nl__im__21));
#line 118
c_rt_lib0move(&___nl__string__22,___get_global_string_const(135));
#line 118
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__22, ___nl__im__20));
#line 118
c_rt_lib0move(&___nl__string__22,___get_global_string_const(736));
#line 118
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__22, ___nl__im__19));
#line 118
c_rt_lib0clear(&___nl__im__19);
#line 118
c_rt_lib0clear(&___nl__im__20);
#line 118
c_rt_lib0clear(&___nl__im__21);
#line 118
c_rt_lib0clear(&___nl__string__22);
#line 119
goto label_58;
#line 119
label_58:
;
#line 119
//clear ___nl__bool__6;
#line 120
goto label_84;
#line 120
label_61:
;
#line 121
c_rt_lib0move(&___nl__im__23,___get_global_string_const(736));
#line 121
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__23));
#line 121
c_rt_lib0move(&___nl__im__24,___get_global_string_const(134));
#line 121
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash(___nl__im__23, ___nl__im__24));
#line 121
c_rt_lib0array_push(&___nl__im__24, ___nl__im__0);
#line 121
c_rt_lib0move(&___nl__string__25,___get_global_string_const(134));
#line 121
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__23, ___nl__string__25, ___nl__im__24));
#line 121
c_rt_lib0move(&___nl__string__25,___get_global_string_const(736));
#line 121
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__25, ___nl__im__23));
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0clear(&___nl__string__25);
#line 122
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 122
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(134)));
#line 122
c_rt_lib0clear(&___nl__im__28);
#line 122
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 122
c_rt_lib0clear(&___nl__im__27);
#line 122
___nl__int__29 = 1;
#line 122
___nl__int__2 = ___nl__int__26 - ___nl__int__29;
#line 122
//clear ___nl__int__26;
#line 122
//clear ___nl__int__29;
#line 123
goto label_84;
#line 123
label_84:
;
#line 123
//clear ___nl__bool__3;
#line 123
c_rt_lib0clear(&___nl__im__4);
#line 124
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 124
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(175)));
#line 124
c_rt_lib0clear(&___nl__im__34);
#line 124
c_rt_lib0move(&___nl__im__35,___get_global_string_const(325));
#line 124
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 124
c_rt_lib0clear(&___nl__im__33);
#line 124
c_rt_lib0clear(&___nl__im__35);
#line 124
c_rt_lib0move(&___nl__string__36, c_rt_lib0int_to_string(___nl__int__2));
#line 124
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__36));
#line 124
c_rt_lib0clear(&___nl__im__32);
#line 124
c_rt_lib0clear(&___nl__string__36);
#line 124
c_rt_lib0move(&___nl__im__37,___get_global_string_const(326));
#line 124
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__37));
#line 124
c_rt_lib0clear(&___nl__im__31);
#line 124
c_rt_lib0clear(&___nl__im__37);
#line 124
c_rt_lib0clear(&___nl__im__0);
#line 124
//clear ___nl__int__2;
#line 124
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
#line 128
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 128
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 128
if(___nl__bool__3){ goto label_8;}
#line 130
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(475));
#line 130
if(___nl__bool__3){ goto label_23;}
#line 130
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 130
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 130
nl_die_arg(___nl__im__4);
#line 128
label_8:
;
#line 129
c_rt_lib0move(&___nl__im__7,___get_global_string_const(115));
#line 129
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 129
c_rt_lib0clear(&___nl__im__7);
#line 129
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 129
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 129
c_rt_lib0clear(&___nl__im__6);
#line 129
c_rt_lib0clear(&___nl__im__8);
#line 129
c_rt_lib0clear(&___nl__im__0);
#line 129
c_rt_lib0clear(&___nl__im__1);
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
//clear ___nl__bool__3;
#line 129
c_rt_lib0clear(&___nl__im__4);
#line 129
return ___nl__im__5;
#line 130
goto label_37;
#line 130
label_23:
;
#line 131
c_rt_lib0move(&___nl__im__10,___get_global_string_const(756));
#line 131
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 131
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 131
c_rt_lib0clear(&___nl__im__10);
#line 131
c_rt_lib0clear(&___nl__im__11);
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
c_rt_lib0clear(&___nl__im__1);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
//clear ___nl__bool__3;
#line 131
c_rt_lib0clear(&___nl__im__4);
#line 131
c_rt_lib0clear(&___nl__im__5);
#line 131
return ___nl__im__9;
#line 132
goto label_37;
#line 132
label_37:
;
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
c_rt_lib0clear(&___nl__im__1);
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
//clear ___nl__bool__3;
#line 132
c_rt_lib0clear(&___nl__im__4);
#line 132
c_rt_lib0clear(&___nl__im__5);
#line 132
c_rt_lib0clear(&___nl__im__9);
#line 132
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
#line 136
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 136
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 136
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(220));
#line 136
if(___nl__bool__4){ goto label_9;}
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(475));
#line 138
if(___nl__bool__4){ goto label_12;}
#line 138
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 138
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 138
nl_die_arg(___nl__im__5);
#line 136
label_9:
;
#line 137
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 138
goto label_15;
#line 138
label_12:
;
#line 139
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 140
goto label_15;
#line 140
label_15:
;
#line 141
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 141
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_call_name_raw(___nl__im__7, ___nl__im__2));
#line 141
c_rt_lib0clear(&___nl__im__7);
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
c_rt_lib0clear(&___nl__im__2);
#line 141
c_rt_lib0clear(&___nl__im__3);
#line 141
//clear ___nl__bool__4;
#line 141
c_rt_lib0clear(&___nl__im__5);
#line 141
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
#line 145
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 145
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 145
c_rt_lib0clear(&___nl__im__3);
#line 145
___nl__bool__2 = !___nl__bool__2;
#line 145
if(___nl__bool__2){ goto label_13;}
#line 146
c_rt_lib0move(&___nl__im__5,___get_global_string_const(756));
#line 146
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 146
c_rt_lib0clear(&___nl__im__5);
#line 146
c_rt_lib0clear(&___nl__im__0);
#line 146
c_rt_lib0clear(&___nl__im__1);
#line 146
//clear ___nl__bool__2;
#line 146
return ___nl__im__4;
#line 147
goto label_33;
#line 147
label_13:
;
#line 148
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 148
c_rt_lib0move(&___nl__im__11,___get_global_string_const(115));
#line 148
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
c_rt_lib0clear(&___nl__im__11);
#line 148
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0move(&___nl__im__12,___get_global_string_const(115));
#line 148
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
c_rt_lib0clear(&___nl__im__12);
#line 148
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 148
c_rt_lib0clear(&___nl__im__7);
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
//clear ___nl__bool__2;
#line 148
c_rt_lib0clear(&___nl__im__4);
#line 148
return ___nl__im__6;
#line 149
goto label_33;
#line 149
label_33:
;
#line 149
//clear ___nl__bool__2;
#line 149
c_rt_lib0clear(&___nl__im__4);
#line 149
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
#line 153
c_rt_lib0move(&___nl__im__1,___get_global_string_const(114));
#line 153
c_rt_lib0move(&___nl__im__2,___get_global_string_const(334));
#line 153
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 154
c_rt_lib0move(&___nl__im__3,___get_global_string_const(290));
#line 154
c_rt_lib0move(&___nl__im__4,___get_global_string_const(335));
#line 154
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 154
c_rt_lib0clear(&___nl__im__3);
#line 154
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0move(&___nl__im__5, string0lf());
#line 155
c_rt_lib0move(&___nl__im__6,___get_global_string_const(338));
#line 155
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
c_rt_lib0clear(&___nl__im__6);
#line 156
c_rt_lib0move(&___nl__im__7, string0r());
#line 156
c_rt_lib0move(&___nl__im__8,___get_global_string_const(339));
#line 156
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 156
c_rt_lib0clear(&___nl__im__7);
#line 156
c_rt_lib0clear(&___nl__im__8);
#line 157
___nl__int__10 = 0;
#line 157
c_rt_lib0move(&___nl__im__9, string0chr(___nl__int__10));
#line 157
//clear ___nl__int__10;
#line 157
c_rt_lib0move(&___nl__im__11,___get_global_string_const(627));
#line 157
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 157
c_rt_lib0clear(&___nl__im__9);
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 158
c_rt_lib0move(&___nl__im__12, string0tab());
#line 158
c_rt_lib0move(&___nl__im__13,___get_global_string_const(621));
#line 158
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 158
c_rt_lib0clear(&___nl__im__12);
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 160
c_rt_lib0move(&___nl__im__16,___get_global_string_const(290));
#line 160
c_rt_lib0move(&___nl__im__18, string0lf());
#line 160
c_rt_lib0move(&___nl__im__19,___get_global_string_const(338));
#line 160
c_rt_lib0move(&___nl__im__17, string0replace(___nl__im__0, ___nl__im__18, ___nl__im__19));
#line 160
c_rt_lib0clear(&___nl__im__18);
#line 160
c_rt_lib0clear(&___nl__im__19);
#line 160
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 160
c_rt_lib0clear(&___nl__im__16);
#line 160
c_rt_lib0clear(&___nl__im__17);
#line 160
c_rt_lib0move(&___nl__im__20,___get_global_string_const(290));
#line 160
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 160
c_rt_lib0clear(&___nl__im__15);
#line 160
c_rt_lib0clear(&___nl__im__20);
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0get_str_imm(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 164
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_const_value_aggr(___nl__im__0, ___ref___im__1));
#line 164
c_rt_lib0clear(&___nl__im__0);
#line 164
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
#line 168
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 168
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 168
c_rt_lib0clear(&___nl__im__3);
#line 168
___nl__int__4 = 0;
#line 168
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 168
//clear ___nl__int__2;
#line 168
//clear ___nl__int__4;
#line 168
___nl__bool__1 = !___nl__bool__1;
#line 168
if(___nl__bool__1){ goto label_14;}
#line 168
___nl__bool__5 = false;
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
//clear ___nl__bool__1;
#line 168
return ___nl__bool__5;
#line 168
goto label_14;
#line 168
label_14:
;
#line 168
//clear ___nl__bool__1;
#line 168
//clear ___nl__bool__5;
#line 169
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 169
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(203));
#line 169
c_rt_lib0clear(&___nl__im__7);
#line 169
___nl__bool__6 = !___nl__bool__6;
#line 169
if(___nl__bool__6){ goto label_27;}
#line 169
___nl__bool__8 = true;
#line 169
c_rt_lib0clear(&___nl__im__0);
#line 169
//clear ___nl__bool__6;
#line 169
return ___nl__bool__8;
#line 169
goto label_27;
#line 169
label_27:
;
#line 169
//clear ___nl__bool__6;
#line 169
//clear ___nl__bool__8;
#line 170
___nl__bool__9 = false;
#line 171
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(138)));
#line 171
___nl__int__12 = 1;
#line 171
___nl__int__12 = -___nl__int__12;
#line 171
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 171
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(229)));
#line 171
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(215), ___nl__im__11, ___get_global_string_const(228), ___nl__im__13, ___get_global_string_const(361), ___nl__im__14));
#line 171
c_rt_lib0clear(&___nl__im__11);
#line 171
//clear ___nl__int__12;
#line 171
c_rt_lib0clear(&___nl__im__13);
#line 171
c_rt_lib0clear(&___nl__im__14);
#line 172
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 172
___nl__int__17 = 0;
#line 172
___nl__int__18 = 1;
#line 172
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 172
label_45:
;
#line 172
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 172
if(___nl__bool__20){ goto label_209;}
#line 172
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 172
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 173
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(237)));
#line 174
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(243));
#line 174
___nl__bool__23 = !___nl__bool__23;
#line 174
if(___nl__bool__23){ goto label_90;}
#line 175
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(243)));
#line 176
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(279)));
#line 176
c_rt_lib0move(&___nl__im__27,___get_global_string_const(549));
#line 176
___nl__bool__25 = c_rt_lib0eq(___nl__im__26, ___nl__im__27);
#line 176
c_rt_lib0clear(&___nl__im__26);
#line 176
c_rt_lib0clear(&___nl__im__27);
#line 176
___nl__bool__25 = !___nl__bool__25;
#line 176
___nl__bool__25 = !___nl__bool__25;
#line 176
if(___nl__bool__25){ goto label_69;}
#line 176
c_rt_lib0clear(&___nl__im__22);
#line 176
//clear ___nl__bool__23;
#line 176
c_rt_lib0clear(&___nl__im__24);
#line 176
//clear ___nl__bool__25;
#line 176
goto label_206;
#line 176
goto label_69;
#line 176
label_69:
;
#line 176
//clear ___nl__bool__25;
#line 177
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(277)));
#line 177
c_rt_lib0move(&___nl__im__30,___get_global_string_const(415));
#line 177
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 177
c_rt_lib0clear(&___nl__im__29);
#line 177
c_rt_lib0clear(&___nl__im__30);
#line 177
___nl__bool__28 = !___nl__bool__28;
#line 177
___nl__bool__28 = !___nl__bool__28;
#line 177
if(___nl__bool__28){ goto label_85;}
#line 177
c_rt_lib0clear(&___nl__im__22);
#line 177
//clear ___nl__bool__23;
#line 177
c_rt_lib0clear(&___nl__im__24);
#line 177
//clear ___nl__bool__28;
#line 177
goto label_206;
#line 177
goto label_85;
#line 177
label_85:
;
#line 177
//clear ___nl__bool__28;
#line 178
___nl__bool__9 = true;
#line 179
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(233)));
#line 180
goto label_200;
#line 180
label_90:
;
#line 180
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(257));
#line 180
___nl__bool__23 = !___nl__bool__23;
#line 180
if(___nl__bool__23){ goto label_163;}
#line 181
___nl__bool__31 = ___nl__bool__9;
#line 181
___nl__bool__31 = !___nl__bool__31;
#line 181
___nl__bool__31 = !___nl__bool__31;
#line 181
if(___nl__bool__31){ goto label_115;}
#line 181
___nl__bool__32 = false;
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
//clear ___nl__bool__9;
#line 181
c_rt_lib0clear(&___nl__im__10);
#line 181
c_rt_lib0clear(&___nl__im__15);
#line 181
c_rt_lib0clear(&___nl__im__16);
#line 181
//clear ___nl__int__17;
#line 181
//clear ___nl__int__18;
#line 181
//clear ___nl__int__19;
#line 181
//clear ___nl__bool__20;
#line 181
c_rt_lib0clear(&___nl__im__21);
#line 181
c_rt_lib0clear(&___nl__im__22);
#line 181
//clear ___nl__bool__23;
#line 181
c_rt_lib0clear(&___nl__im__24);
#line 181
//clear ___nl__bool__31;
#line 181
return ___nl__bool__32;
#line 181
goto label_115;
#line 181
label_115:
;
#line 181
//clear ___nl__bool__31;
#line 181
//clear ___nl__bool__32;
#line 182
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(257)));
#line 183
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(234));
#line 183
___nl__bool__34 = !___nl__bool__34;
#line 183
___nl__bool__34 = !___nl__bool__34;
#line 183
if(___nl__bool__34){ goto label_141;}
#line 183
___nl__bool__35 = false;
#line 183
c_rt_lib0clear(&___nl__im__0);
#line 183
//clear ___nl__bool__9;
#line 183
c_rt_lib0clear(&___nl__im__10);
#line 183
c_rt_lib0clear(&___nl__im__15);
#line 183
c_rt_lib0clear(&___nl__im__16);
#line 183
//clear ___nl__int__17;
#line 183
//clear ___nl__int__18;
#line 183
//clear ___nl__int__19;
#line 183
//clear ___nl__bool__20;
#line 183
c_rt_lib0clear(&___nl__im__21);
#line 183
c_rt_lib0clear(&___nl__im__22);
#line 183
//clear ___nl__bool__23;
#line 183
c_rt_lib0clear(&___nl__im__24);
#line 183
c_rt_lib0clear(&___nl__im__33);
#line 183
//clear ___nl__bool__34;
#line 183
return ___nl__bool__35;
#line 183
goto label_141;
#line 183
label_141:
;
#line 183
//clear ___nl__bool__34;
#line 183
//clear ___nl__bool__35;
#line 184
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(234)));
#line 184
___nl__bool__36 = nlasm0eq_reg(___nl__im__37, ___nl__im__10);
#line 184
c_rt_lib0clear(&___nl__im__37);
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
//clear ___nl__bool__9;
#line 184
c_rt_lib0clear(&___nl__im__10);
#line 184
c_rt_lib0clear(&___nl__im__15);
#line 184
c_rt_lib0clear(&___nl__im__16);
#line 184
//clear ___nl__int__17;
#line 184
//clear ___nl__int__18;
#line 184
//clear ___nl__int__19;
#line 184
//clear ___nl__bool__20;
#line 184
c_rt_lib0clear(&___nl__im__21);
#line 184
c_rt_lib0clear(&___nl__im__22);
#line 184
//clear ___nl__bool__23;
#line 184
c_rt_lib0clear(&___nl__im__24);
#line 184
c_rt_lib0clear(&___nl__im__33);
#line 184
return ___nl__bool__36;
#line 185
goto label_200;
#line 185
label_163:
;
#line 185
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(259));
#line 185
___nl__bool__23 = !___nl__bool__23;
#line 185
if(___nl__bool__23){ goto label_168;}
#line 186
goto label_200;
#line 186
label_168:
;
#line 186
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(262));
#line 186
___nl__bool__23 = !___nl__bool__23;
#line 186
if(___nl__bool__23){ goto label_173;}
#line 187
goto label_200;
#line 187
label_173:
;
#line 188
___nl__bool__38 = ___nl__bool__9;
#line 188
___nl__bool__38 = !___nl__bool__38;
#line 188
if(___nl__bool__38){ goto label_196;}
#line 188
___nl__bool__39 = false;
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
//clear ___nl__bool__36;
#line 188
//clear ___nl__bool__38;
#line 188
return ___nl__bool__39;
#line 188
goto label_196;
#line 188
label_196:
;
#line 188
//clear ___nl__bool__38;
#line 188
//clear ___nl__bool__39;
#line 189
goto label_200;
#line 189
label_200:
;
#line 189
//clear ___nl__bool__23;
#line 189
c_rt_lib0clear(&___nl__im__24);
#line 189
c_rt_lib0clear(&___nl__im__33);
#line 189
//clear ___nl__bool__36;
#line 189
c_rt_lib0clear(&___nl__im__16);
#line 189
label_206:
;
#line 190
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 190
goto label_45;
#line 190
label_209:
;
#line 191
___nl__bool__40 = false;
#line 191
c_rt_lib0clear(&___nl__im__0);
#line 191
//clear ___nl__bool__9;
#line 191
c_rt_lib0clear(&___nl__im__10);
#line 191
c_rt_lib0clear(&___nl__im__15);
#line 191
c_rt_lib0clear(&___nl__im__16);
#line 191
//clear ___nl__int__17;
#line 191
//clear ___nl__int__18;
#line 191
//clear ___nl__int__19;
#line 191
//clear ___nl__bool__20;
#line 191
c_rt_lib0clear(&___nl__im__21);
#line 191
c_rt_lib0clear(&___nl__im__22);
#line 191
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
#line 195
___nl__bool__2 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 195
___nl__bool__2 = !___nl__bool__2;
#line 195
if(___nl__bool__2){ goto label_5;}
#line 196
c_rt_lib0delete(generator_js_priv0print_singleton(___nl__im__0, ___ref___im__1));
#line 197
goto label_8;
#line 197
label_5:
;
#line 198
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__0, ___ref___im__1));
#line 199
goto label_8;
#line 199
label_8:
;
#line 199
//clear ___nl__bool__2;
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 201
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(220));
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
___nl__bool__4 = !___nl__bool__3;
#line 201
if(___nl__bool__4){ goto label_17;}
#line 201
___nl__bool__3 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 201
___nl__bool__3 = !___nl__bool__3;
#line 201
label_17:
;
#line 201
//clear ___nl__bool__4;
#line 201
___nl__bool__3 = !___nl__bool__3;
#line 201
if(___nl__bool__3){ goto label_23;}
#line 202
c_rt_lib0delete(generator_js_priv0print_dyn_function_wrapper(___nl__im__0, ___ref___im__1));
#line 203
goto label_23;
#line 203
label_23:
;
#line 203
//clear ___nl__bool__3;
#line 203
c_rt_lib0clear(&___nl__im__0);
#line 203
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
#line 207
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 207
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__3));
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 209
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(219)));
#line 209
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(475));
#line 209
c_rt_lib0clear(&___nl__im__6);
#line 209
___nl__bool__5 = !___nl__bool__5;
#line 209
if(___nl__bool__5){ goto label_19;}
#line 210
c_rt_lib0move(&___nl__im__8,___get_global_string_const(757));
#line 210
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 210
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 210
c_rt_lib0clear(&___nl__im__8);
#line 210
c_rt_lib0clear(&___nl__im__9);
#line 210
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 210
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(175), ___nl__im__10);
#line 210
c_rt_lib0clear(&___nl__im__7);
#line 210
c_rt_lib0clear(&___nl__im__10);
#line 211
goto label_30;
#line 211
label_19:
;
#line 212
c_rt_lib0move(&___nl__im__12,___get_global_string_const(758));
#line 212
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 212
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 212
c_rt_lib0clear(&___nl__im__12);
#line 212
c_rt_lib0clear(&___nl__im__13);
#line 212
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 212
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(175), ___nl__im__14);
#line 212
c_rt_lib0clear(&___nl__im__11);
#line 212
c_rt_lib0clear(&___nl__im__14);
#line 213
goto label_30;
#line 213
label_30:
;
#line 213
//clear ___nl__bool__5;
#line 214
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(475)));
#line 214
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 214
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(219), ___nl__im__16);
#line 214
c_rt_lib0clear(&___nl__im__15);
#line 214
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0move(&___nl__im__18,___get_global_string_const(759));
#line 215
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 215
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_function_name(___nl__im__4, ___nl__im__20));
#line 215
c_rt_lib0clear(&___nl__im__20);
#line 215
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 215
c_rt_lib0clear(&___nl__im__18);
#line 215
c_rt_lib0clear(&___nl__im__19);
#line 217
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__4, ___ref___im__1));
#line 218
c_rt_lib0move(&___nl__im__23,___get_global_string_const(747));
#line 218
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__17));
#line 218
c_rt_lib0clear(&___nl__im__23);
#line 218
c_rt_lib0move(&___nl__im__24,___get_global_string_const(450));
#line 218
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 218
c_rt_lib0clear(&___nl__im__22);
#line 218
c_rt_lib0clear(&___nl__im__24);
#line 218
c_rt_lib0delete(generator_js_priv0println(___nl__im__21, ___ref___im__1));
#line 218
c_rt_lib0clear(&___nl__im__21);
#line 219
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 219
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(220));
#line 219
if(___nl__bool__26){ goto label_62;}
#line 221
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(475));
#line 221
if(___nl__bool__26){ goto label_77;}
#line 221
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 221
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 221
nl_die_arg(___nl__im__27);
#line 219
label_62:
;
#line 220
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_namespace_name());
#line 220
c_rt_lib0move(&___nl__im__32,___get_global_string_const(115));
#line 220
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 220
c_rt_lib0clear(&___nl__im__31);
#line 220
c_rt_lib0clear(&___nl__im__32);
#line 220
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__2));
#line 220
c_rt_lib0clear(&___nl__im__30);
#line 220
c_rt_lib0move(&___nl__im__33,___get_global_string_const(760));
#line 220
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 220
c_rt_lib0clear(&___nl__im__29);
#line 220
c_rt_lib0clear(&___nl__im__33);
#line 220
c_rt_lib0delete(generator_js_priv0println(___nl__im__28, ___ref___im__1));
#line 220
c_rt_lib0clear(&___nl__im__28);
#line 221
goto label_88;
#line 221
label_77:
;
#line 222
c_rt_lib0move(&___nl__im__36,___get_global_string_const(761));
#line 222
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__2));
#line 222
c_rt_lib0clear(&___nl__im__36);
#line 222
c_rt_lib0move(&___nl__im__37,___get_global_string_const(762));
#line 222
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__37));
#line 222
c_rt_lib0clear(&___nl__im__35);
#line 222
c_rt_lib0clear(&___nl__im__37);
#line 222
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 222
c_rt_lib0clear(&___nl__im__34);
#line 223
goto label_88;
#line 223
label_88:
;
#line 224
c_rt_lib0move(&___nl__im__40,___get_global_string_const(615));
#line 224
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__17));
#line 224
c_rt_lib0clear(&___nl__im__40);
#line 224
c_rt_lib0move(&___nl__im__41,___get_global_string_const(763));
#line 224
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 224
c_rt_lib0clear(&___nl__im__39);
#line 224
c_rt_lib0clear(&___nl__im__41);
#line 224
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 224
c_rt_lib0clear(&___nl__im__38);
#line 225
c_rt_lib0move(&___nl__im__45,___get_global_string_const(752));
#line 225
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__17, ___nl__im__45));
#line 225
c_rt_lib0clear(&___nl__im__45);
#line 225
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 225
c_rt_lib0move(&___nl__im__46, generator_js_priv0get_function_call_name(___nl__im__4, ___nl__im__47));
#line 225
c_rt_lib0clear(&___nl__im__47);
#line 225
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 225
c_rt_lib0clear(&___nl__im__44);
#line 225
c_rt_lib0clear(&___nl__im__46);
#line 225
c_rt_lib0move(&___nl__im__48,___get_global_string_const(494));
#line 225
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__48));
#line 225
c_rt_lib0clear(&___nl__im__43);
#line 225
c_rt_lib0clear(&___nl__im__48);
#line 225
c_rt_lib0delete(generator_js_priv0println(___nl__im__42, ___ref___im__1));
#line 225
c_rt_lib0clear(&___nl__im__42);
#line 226
c_rt_lib0move(&___nl__im__49,___get_global_string_const(316));
#line 226
c_rt_lib0delete(generator_js_priv0println(___nl__im__49, ___ref___im__1));
#line 226
c_rt_lib0clear(&___nl__im__49);
#line 227
c_rt_lib0move(&___nl__im__52,___get_global_string_const(518));
#line 227
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__17));
#line 227
c_rt_lib0clear(&___nl__im__52);
#line 227
c_rt_lib0move(&___nl__im__53,___get_global_string_const(450));
#line 227
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 227
c_rt_lib0clear(&___nl__im__51);
#line 227
c_rt_lib0clear(&___nl__im__53);
#line 227
c_rt_lib0delete(generator_js_priv0println(___nl__im__50, ___ref___im__1));
#line 227
c_rt_lib0clear(&___nl__im__50);
#line 228
c_rt_lib0move(&___nl__im__54,___get_global_string_const(316));
#line 228
c_rt_lib0delete(generator_js_priv0println(___nl__im__54, ___ref___im__1));
#line 228
c_rt_lib0clear(&___nl__im__54);
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
c_rt_lib0clear(&___nl__im__2);
#line 228
c_rt_lib0clear(&___nl__im__4);
#line 228
c_rt_lib0clear(&___nl__im__17);
#line 228
c_rt_lib0clear(&___nl__im__25);
#line 228
//clear ___nl__bool__26;
#line 228
c_rt_lib0clear(&___nl__im__27);
#line 228
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
#line 232
___nl__int__2 = 0;
#line 233
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 234
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 235
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 236
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 236
___nl__int__8 = 0;
#line 236
___nl__int__9 = 1;
#line 236
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 236
label_8:
;
#line 236
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 236
if(___nl__bool__11){ goto label_132;}
#line 236
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 236
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 237
___nl__int__14 = 0;
#line 237
___nl__bool__13 = ___nl__int__2 == ___nl__int__14;
#line 237
//clear ___nl__int__14;
#line 237
___nl__bool__13 = !___nl__bool__13;
#line 237
___nl__bool__13 = !___nl__bool__13;
#line 237
if(___nl__bool__13){ goto label_23;}
#line 237
c_rt_lib0move(&___nl__im__15,___get_global_string_const(337));
#line 237
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__15));
#line 237
c_rt_lib0clear(&___nl__im__15);
#line 237
goto label_23;
#line 237
label_23:
;
#line 237
//clear ___nl__bool__13;
#line 238
c_rt_lib0move(&___nl__im__17,___get_global_string_const(288));
#line 238
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__2));
#line 238
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 238
c_rt_lib0clear(&___nl__im__17);
#line 238
c_rt_lib0clear(&___nl__string__18);
#line 238
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__16));
#line 238
c_rt_lib0clear(&___nl__im__16);
#line 239
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(479)));
#line 239
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(215)));
#line 239
c_rt_lib0clear(&___nl__im__21);
#line 239
c_rt_lib0move(&___nl__im__24,___get_global_string_const(764));
#line 239
c_rt_lib0move(&___nl__string__25, c_rt_lib0int_to_string(___nl__int__2));
#line 239
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__string__25));
#line 239
c_rt_lib0clear(&___nl__im__24);
#line 239
c_rt_lib0clear(&___nl__string__25);
#line 239
c_rt_lib0move(&___nl__im__26,___get_global_string_const(331));
#line 239
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 239
c_rt_lib0clear(&___nl__im__23);
#line 239
c_rt_lib0clear(&___nl__im__26);
#line 239
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_value_from_im(___nl__im__20, ___nl__im__22));
#line 239
c_rt_lib0clear(&___nl__im__20);
#line 239
c_rt_lib0clear(&___nl__im__22);
#line 240
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(363)));
#line 240
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(39));
#line 240
if(___nl__bool__28){ goto label_55;}
#line 244
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(234));
#line 244
if(___nl__bool__28){ goto label_106;}
#line 244
c_rt_lib0move(&___nl__im__29,___get_global_string_const(15));
#line 244
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 244
nl_die_arg(___nl__im__29);
#line 240
label_55:
;
#line 241
c_rt_lib0move(&___nl__im__33,___get_global_string_const(765));
#line 241
c_rt_lib0move(&___nl__im__35,___get_global_string_const(39));
#line 241
c_rt_lib0move(&___nl__im__34, generator_js_priv0imm_call(___nl__im__35));
#line 241
c_rt_lib0clear(&___nl__im__35);
#line 241
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 241
c_rt_lib0clear(&___nl__im__33);
#line 241
c_rt_lib0clear(&___nl__im__34);
#line 241
c_rt_lib0move(&___nl__im__36,___get_global_string_const(465));
#line 241
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 241
c_rt_lib0clear(&___nl__im__32);
#line 241
c_rt_lib0clear(&___nl__im__36);
#line 241
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__19));
#line 241
c_rt_lib0clear(&___nl__im__31);
#line 241
c_rt_lib0move(&___nl__im__37,___get_global_string_const(516));
#line 241
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 241
c_rt_lib0clear(&___nl__im__30);
#line 241
c_rt_lib0clear(&___nl__im__37);
#line 242
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(479)));
#line 242
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(215)));
#line 242
c_rt_lib0clear(&___nl__im__40);
#line 242
c_rt_lib0move(&___nl__im__43,___get_global_string_const(288));
#line 242
c_rt_lib0move(&___nl__string__44, c_rt_lib0int_to_string(___nl__int__2));
#line 242
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__string__44));
#line 242
c_rt_lib0clear(&___nl__im__43);
#line 242
c_rt_lib0clear(&___nl__string__44);
#line 242
c_rt_lib0move(&___nl__im__45,___get_global_string_const(766));
#line 242
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 242
c_rt_lib0clear(&___nl__im__42);
#line 242
c_rt_lib0clear(&___nl__im__45);
#line 242
c_rt_lib0move(&___nl__im__38, generator_js_priv0get_im_from_value(___nl__im__39, ___nl__im__41));
#line 242
c_rt_lib0clear(&___nl__im__39);
#line 242
c_rt_lib0clear(&___nl__im__41);
#line 243
c_rt_lib0move(&___nl__im__50,___get_global_string_const(767));
#line 243
c_rt_lib0move(&___nl__string__51, c_rt_lib0int_to_string(___nl__int__2));
#line 243
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__string__51));
#line 243
c_rt_lib0clear(&___nl__im__50);
#line 243
c_rt_lib0clear(&___nl__string__51);
#line 243
c_rt_lib0move(&___nl__im__52,___get_global_string_const(337));
#line 243
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 243
c_rt_lib0clear(&___nl__im__49);
#line 243
c_rt_lib0clear(&___nl__im__52);
#line 243
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__38));
#line 243
c_rt_lib0clear(&___nl__im__48);
#line 243
c_rt_lib0move(&___nl__im__53,___get_global_string_const(516));
#line 243
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__53));
#line 243
c_rt_lib0clear(&___nl__im__47);
#line 243
c_rt_lib0clear(&___nl__im__53);
#line 243
c_rt_lib0array_push(&___nl__im__5, ___nl__im__46);
#line 243
c_rt_lib0clear(&___nl__im__46);
#line 244
goto label_108;
#line 244
label_106:
;
#line 245
goto label_108;
#line 245
label_108:
;
#line 246
c_rt_lib0move(&___nl__im__58,___get_global_string_const(768));
#line 246
c_rt_lib0move(&___nl__string__59, c_rt_lib0int_to_string(___nl__int__2));
#line 246
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__string__59));
#line 246
c_rt_lib0clear(&___nl__im__58);
#line 246
c_rt_lib0clear(&___nl__string__59);
#line 246
c_rt_lib0move(&___nl__im__60,___get_global_string_const(752));
#line 246
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 246
c_rt_lib0clear(&___nl__im__57);
#line 246
c_rt_lib0clear(&___nl__im__60);
#line 246
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__19));
#line 246
c_rt_lib0clear(&___nl__im__56);
#line 246
c_rt_lib0move(&___nl__im__61,___get_global_string_const(450));
#line 246
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__61));
#line 246
c_rt_lib0clear(&___nl__im__55);
#line 246
c_rt_lib0clear(&___nl__im__61);
#line 246
c_rt_lib0array_push(&___nl__im__4, ___nl__im__54);
#line 246
c_rt_lib0clear(&___nl__im__54);
#line 247
___nl__int__62 = 1;
#line 247
___nl__int__2 = ___nl__int__2 + ___nl__int__62;
#line 247
//clear ___nl__int__62;
#line 247
c_rt_lib0clear(&___nl__im__7);
#line 248
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 248
goto label_8;
#line 248
label_132:
;
#line 249
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 249
c_rt_lib0move(&___nl__im__66,___get_global_string_const(769));
#line 249
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 249
c_rt_lib0clear(&___nl__im__65);
#line 249
c_rt_lib0clear(&___nl__im__66);
#line 249
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 249
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__67));
#line 249
c_rt_lib0clear(&___nl__im__64);
#line 249
c_rt_lib0clear(&___nl__im__67);
#line 250
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 250
c_rt_lib0move(&___nl__im__71, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__72));
#line 250
c_rt_lib0clear(&___nl__im__72);
#line 250
c_rt_lib0move(&___nl__im__73,___get_global_string_const(465));
#line 250
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 250
c_rt_lib0clear(&___nl__im__71);
#line 250
c_rt_lib0clear(&___nl__im__73);
#line 250
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__3));
#line 250
c_rt_lib0clear(&___nl__im__70);
#line 250
c_rt_lib0move(&___nl__im__74,___get_global_string_const(331));
#line 250
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 250
c_rt_lib0clear(&___nl__im__69);
#line 250
c_rt_lib0clear(&___nl__im__74);
#line 252
c_rt_lib0move(&___nl__im__75,___get_global_string_const(36));
#line 252
c_rt_lib0delete(generator_js_priv0println(___nl__im__75, ___ref___im__1));
#line 252
c_rt_lib0clear(&___nl__im__75);
#line 253
c_rt_lib0move(&___nl__im__79, generator_js_priv0get_namespace_name());
#line 253
c_rt_lib0move(&___nl__im__80,___get_global_string_const(115));
#line 253
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__80));
#line 253
c_rt_lib0clear(&___nl__im__79);
#line 253
c_rt_lib0clear(&___nl__im__80);
#line 253
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__63));
#line 253
c_rt_lib0clear(&___nl__im__78);
#line 253
c_rt_lib0move(&___nl__im__81,___get_global_string_const(770));
#line 253
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__81));
#line 253
c_rt_lib0clear(&___nl__im__77);
#line 253
c_rt_lib0clear(&___nl__im__81);
#line 253
c_rt_lib0delete(generator_js_priv0println(___nl__im__76, ___ref___im__1));
#line 253
c_rt_lib0clear(&___nl__im__76);
#line 254
___nl__int__83 = 0;
#line 254
___nl__int__84 = 1;
#line 254
___nl__int__85 = c_rt_lib0array_len(___nl__im__4);
#line 254
label_174:
;
#line 254
___nl__bool__86 = ___nl__int__83 >= ___nl__int__85;
#line 254
if(___nl__bool__86){ goto label_183;}
#line 254
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__4, ___nl__int__83));
#line 254
c_rt_lib0copy(&___nl__im__82, ___nl__im__87);
#line 255
c_rt_lib0delete(generator_js_priv0println(___nl__im__82, ___ref___im__1));
#line 255
c_rt_lib0clear(&___nl__im__82);
#line 256
___nl__int__83 = ___nl__int__83 + ___nl__int__84;
#line 256
goto label_174;
#line 256
label_183:
;
#line 257
c_rt_lib0move(&___nl__im__89,___get_global_string_const(771));
#line 257
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(425)));
#line 257
c_rt_lib0move(&___nl__im__90, generator_js_priv0get_im_from_value(___nl__im__91, ___nl__im__68));
#line 257
c_rt_lib0clear(&___nl__im__91);
#line 257
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 257
c_rt_lib0clear(&___nl__im__89);
#line 257
c_rt_lib0clear(&___nl__im__90);
#line 257
c_rt_lib0delete(generator_js_priv0println(___nl__im__88, ___ref___im__1));
#line 257
c_rt_lib0clear(&___nl__im__88);
#line 258
___nl__int__93 = 0;
#line 258
___nl__int__94 = 1;
#line 258
___nl__int__95 = c_rt_lib0array_len(___nl__im__5);
#line 258
label_196:
;
#line 258
___nl__bool__96 = ___nl__int__93 >= ___nl__int__95;
#line 258
if(___nl__bool__96){ goto label_205;}
#line 258
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__5, ___nl__int__93));
#line 258
c_rt_lib0copy(&___nl__im__92, ___nl__im__97);
#line 259
c_rt_lib0delete(generator_js_priv0println(___nl__im__92, ___ref___im__1));
#line 259
c_rt_lib0clear(&___nl__im__92);
#line 260
___nl__int__93 = ___nl__int__93 + ___nl__int__94;
#line 260
goto label_196;
#line 260
label_205:
;
#line 261
c_rt_lib0move(&___nl__im__98,___get_global_string_const(772));
#line 261
c_rt_lib0delete(generator_js_priv0println(___nl__im__98, ___ref___im__1));
#line 261
c_rt_lib0clear(&___nl__im__98);
#line 262
c_rt_lib0move(&___nl__im__99,___get_global_string_const(316));
#line 262
c_rt_lib0delete(generator_js_priv0println(___nl__im__99, ___ref___im__1));
#line 262
c_rt_lib0clear(&___nl__im__99);
#line 262
c_rt_lib0clear(&___nl__im__0);
#line 262
//clear ___nl__int__2;
#line 262
c_rt_lib0clear(&___nl__im__3);
#line 262
c_rt_lib0clear(&___nl__im__4);
#line 262
c_rt_lib0clear(&___nl__im__5);
#line 262
c_rt_lib0clear(&___nl__im__6);
#line 262
c_rt_lib0clear(&___nl__im__7);
#line 262
//clear ___nl__int__8;
#line 262
//clear ___nl__int__9;
#line 262
//clear ___nl__int__10;
#line 262
//clear ___nl__bool__11;
#line 262
c_rt_lib0clear(&___nl__im__12);
#line 262
c_rt_lib0clear(&___nl__im__19);
#line 262
c_rt_lib0clear(&___nl__im__27);
#line 262
//clear ___nl__bool__28;
#line 262
c_rt_lib0clear(&___nl__im__29);
#line 262
c_rt_lib0clear(&___nl__im__38);
#line 262
c_rt_lib0clear(&___nl__im__63);
#line 262
c_rt_lib0clear(&___nl__im__68);
#line 262
c_rt_lib0clear(&___nl__im__82);
#line 262
//clear ___nl__int__83;
#line 262
//clear ___nl__int__84;
#line 262
//clear ___nl__int__85;
#line 262
//clear ___nl__bool__86;
#line 262
c_rt_lib0clear(&___nl__im__87);
#line 262
c_rt_lib0clear(&___nl__im__92);
#line 262
//clear ___nl__int__93;
#line 262
//clear ___nl__int__94;
#line 262
//clear ___nl__int__95;
#line 262
//clear ___nl__bool__96;
#line 262
c_rt_lib0clear(&___nl__im__97);
#line 262
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
#line 266
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 266
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 266
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 267
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 267
c_rt_lib0clear(&___nl__im__4);
#line 267
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__3, ___ref___im__1));
#line 267
//clear ___nl__int__3;
#line 268
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 268
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_header(___nl__im__0, ___nl__im__7));
#line 268
c_rt_lib0clear(&___nl__im__7);
#line 268
c_rt_lib0move(&___nl__im__8,___get_global_string_const(544));
#line 268
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 268
c_rt_lib0clear(&___nl__im__6);
#line 268
c_rt_lib0clear(&___nl__im__8);
#line 268
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__1));
#line 268
c_rt_lib0clear(&___nl__im__5);
#line 269
c_rt_lib0delete(generator_js_priv0print_function_registers(___nl__im__0, ___ref___im__1));
#line 270
c_rt_lib0move(&___nl__im__9,___get_global_string_const(773));
#line 270
c_rt_lib0delete(generator_js_priv0println(___nl__im__9, ___ref___im__1));
#line 270
c_rt_lib0clear(&___nl__im__9);
#line 271
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 271
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 271
c_rt_lib0clear(&___nl__im__11);
#line 271
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__10, ___ref___im__1));
#line 271
//clear ___nl__int__10;
#line 272
c_rt_lib0move(&___nl__im__12,___get_global_string_const(774));
#line 272
c_rt_lib0delete(generator_js_priv0println(___nl__im__12, ___ref___im__1));
#line 272
c_rt_lib0clear(&___nl__im__12);
#line 273
c_rt_lib0move(&___nl__im__13,___get_global_string_const(775));
#line 273
c_rt_lib0delete(generator_js_priv0println(___nl__im__13, ___ref___im__1));
#line 273
c_rt_lib0clear(&___nl__im__13);
#line 274
___nl__int__14 = 0;
#line 275
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 275
___nl__int__17 = 0;
#line 275
___nl__int__18 = 1;
#line 275
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 275
label_37:
;
#line 275
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 275
if(___nl__bool__20){ goto label_48;}
#line 275
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 275
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 276
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 276
c_rt_lib0delete(generator_js_priv0print_command(___nl__im__16, ___nl__im__22, &___nl__int__14, ___ref___im__1));
#line 276
c_rt_lib0clear(&___nl__im__22);
#line 276
c_rt_lib0clear(&___nl__im__16);
#line 277
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 277
goto label_37;
#line 277
label_48:
;
#line 278
c_rt_lib0move(&___nl__im__23,___get_global_string_const(776));
#line 278
c_rt_lib0delete(generator_js_priv0println(___nl__im__23, ___ref___im__1));
#line 278
c_rt_lib0clear(&___nl__im__23);
#line 278
c_rt_lib0clear(&___nl__im__0);
#line 278
//clear ___nl__int__14;
#line 278
c_rt_lib0clear(&___nl__im__15);
#line 278
c_rt_lib0clear(&___nl__im__16);
#line 278
//clear ___nl__int__17;
#line 278
//clear ___nl__int__18;
#line 278
//clear ___nl__int__19;
#line 278
//clear ___nl__bool__20;
#line 278
c_rt_lib0clear(&___nl__im__21);
#line 278
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
#line 283
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 283
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(220));
#line 283
if(___nl__bool__4){ goto label_8;}
#line 285
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(475));
#line 285
if(___nl__bool__4){ goto label_23;}
#line 285
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 285
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 285
nl_die_arg(___nl__im__5);
#line 283
label_8:
;
#line 284
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_namespace_name());
#line 284
c_rt_lib0move(&___nl__im__9,___get_global_string_const(115));
#line 284
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 284
c_rt_lib0clear(&___nl__im__8);
#line 284
c_rt_lib0clear(&___nl__im__9);
#line 284
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 284
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 284
c_rt_lib0clear(&___nl__im__7);
#line 284
c_rt_lib0clear(&___nl__im__10);
#line 284
c_rt_lib0move(&___nl__im__11,___get_global_string_const(777));
#line 284
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 284
c_rt_lib0clear(&___nl__im__6);
#line 284
c_rt_lib0clear(&___nl__im__11);
#line 285
goto label_34;
#line 285
label_23:
;
#line 286
c_rt_lib0move(&___nl__im__13,___get_global_string_const(761));
#line 286
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 286
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 286
c_rt_lib0clear(&___nl__im__13);
#line 286
c_rt_lib0clear(&___nl__im__14);
#line 286
c_rt_lib0move(&___nl__im__15,___get_global_string_const(465));
#line 286
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 286
c_rt_lib0clear(&___nl__im__12);
#line 286
c_rt_lib0clear(&___nl__im__15);
#line 287
goto label_34;
#line 287
label_34:
;
#line 288
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 288
___nl__int__16 = c_rt_lib0array_len(___nl__im__17);
#line 288
c_rt_lib0clear(&___nl__im__17);
#line 288
___nl__int__18 = 0;
#line 288
___nl__int__19 = 1;
#line 288
label_40:
;
#line 288
___nl__bool__20 = ___nl__int__18 >= ___nl__int__16;
#line 288
if(___nl__bool__20){ goto label_64;}
#line 289
___nl__int__22 = 0;
#line 289
___nl__bool__21 = ___nl__int__18 == ___nl__int__22;
#line 289
//clear ___nl__int__22;
#line 289
___nl__bool__21 = !___nl__bool__21;
#line 289
___nl__bool__21 = !___nl__bool__21;
#line 289
if(___nl__bool__21){ goto label_53;}
#line 289
c_rt_lib0move(&___nl__im__23,___get_global_string_const(337));
#line 289
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 289
c_rt_lib0clear(&___nl__im__23);
#line 289
goto label_53;
#line 289
label_53:
;
#line 289
//clear ___nl__bool__21;
#line 290
c_rt_lib0move(&___nl__im__25,___get_global_string_const(778));
#line 290
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__18));
#line 290
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__26));
#line 290
c_rt_lib0clear(&___nl__im__25);
#line 290
c_rt_lib0clear(&___nl__string__26);
#line 290
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__24));
#line 290
c_rt_lib0clear(&___nl__im__24);
#line 291
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 291
goto label_40;
#line 291
label_64:
;
#line 292
c_rt_lib0move(&___nl__im__27,___get_global_string_const(331));
#line 292
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 292
c_rt_lib0clear(&___nl__im__27);
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
c_rt_lib0clear(&___nl__im__1);
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 293
//clear ___nl__bool__4;
#line 293
c_rt_lib0clear(&___nl__im__5);
#line 293
//clear ___nl__int__16;
#line 293
//clear ___nl__int__18;
#line 293
//clear ___nl__int__19;
#line 293
//clear ___nl__bool__20;
#line 293
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
#line 297
c_rt_lib0move(&___nl__im__2,___get_global_string_const(747));
#line 298
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 298
___nl__int__3 = c_rt_lib0array_len(___nl__im__4);
#line 298
c_rt_lib0clear(&___nl__im__4);
#line 298
___nl__int__5 = 0;
#line 298
___nl__int__6 = 1;
#line 298
label_6:
;
#line 298
___nl__bool__7 = ___nl__int__5 >= ___nl__int__3;
#line 298
if(___nl__bool__7){ goto label_103;}
#line 299
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 299
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__5));
#line 299
c_rt_lib0clear(&___nl__im__10);
#line 299
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register(___nl__im__9));
#line 299
c_rt_lib0clear(&___nl__im__9);
#line 301
___nl__int__11 = string0length(___nl__im__2);
#line 302
___nl__int__13 = string0length(___nl__im__8);
#line 302
___nl__int__12 = ___nl__int__11 + ___nl__int__13;
#line 302
//clear ___nl__int__13;
#line 303
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 303
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 303
c_rt_lib0clear(&___nl__im__15);
#line 304
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 304
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__5));
#line 304
c_rt_lib0clear(&___nl__im__18);
#line 304
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(175)));
#line 304
c_rt_lib0clear(&___nl__im__17);
#line 304
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker_with_symbol(___nl__int__14, ___nl__int__11, ___nl__int__12, ___nl__im__16, ___ref___im__1));
#line 304
//clear ___nl__int__14;
#line 304
c_rt_lib0clear(&___nl__im__16);
#line 306
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 306
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__21, ___nl__int__5));
#line 306
c_rt_lib0clear(&___nl__im__21);
#line 306
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(363)));
#line 306
c_rt_lib0clear(&___nl__im__20);
#line 306
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(234));
#line 306
if(___nl__bool__22){ goto label_41;}
#line 308
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(39));
#line 308
if(___nl__bool__22){ goto label_58;}
#line 308
c_rt_lib0move(&___nl__im__23,___get_global_string_const(15));
#line 308
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__19));
#line 308
nl_die_arg(___nl__im__23);
#line 306
label_41:
;
#line 307
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 307
c_rt_lib0move(&___nl__im__28,___get_global_string_const(779));
#line 307
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 307
c_rt_lib0clear(&___nl__im__27);
#line 307
c_rt_lib0clear(&___nl__im__28);
#line 307
c_rt_lib0move(&___nl__string__29, c_rt_lib0int_to_string(___nl__int__5));
#line 307
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__string__29));
#line 307
c_rt_lib0clear(&___nl__im__26);
#line 307
c_rt_lib0clear(&___nl__string__29);
#line 307
c_rt_lib0move(&___nl__im__30,___get_global_string_const(450));
#line 307
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 307
c_rt_lib0clear(&___nl__im__25);
#line 307
c_rt_lib0clear(&___nl__im__30);
#line 307
c_rt_lib0delete(generator_js_priv0println(___nl__im__24, ___ref___im__1));
#line 307
c_rt_lib0clear(&___nl__im__24);
#line 308
goto label_75;
#line 308
label_58:
;
#line 309
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 309
c_rt_lib0move(&___nl__im__35,___get_global_string_const(779));
#line 309
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 309
c_rt_lib0clear(&___nl__im__34);
#line 309
c_rt_lib0clear(&___nl__im__35);
#line 309
c_rt_lib0move(&___nl__string__36, c_rt_lib0int_to_string(___nl__int__5));
#line 309
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__string__36));
#line 309
c_rt_lib0clear(&___nl__im__33);
#line 309
c_rt_lib0clear(&___nl__string__36);
#line 309
c_rt_lib0move(&___nl__im__37,___get_global_string_const(780));
#line 309
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__37));
#line 309
c_rt_lib0clear(&___nl__im__32);
#line 309
c_rt_lib0clear(&___nl__im__37);
#line 309
c_rt_lib0delete(generator_js_priv0println(___nl__im__31, ___ref___im__1));
#line 309
c_rt_lib0clear(&___nl__im__31);
#line 310
goto label_75;
#line 310
label_75:
;
#line 311
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_namespace_name());
#line 311
c_rt_lib0move(&___nl__im__42,___get_global_string_const(781));
#line 311
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 311
c_rt_lib0clear(&___nl__im__41);
#line 311
c_rt_lib0clear(&___nl__im__42);
#line 311
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 311
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__45, ___nl__int__5));
#line 311
c_rt_lib0clear(&___nl__im__45);
#line 311
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_register_value(___nl__im__44));
#line 311
c_rt_lib0clear(&___nl__im__44);
#line 311
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__43));
#line 311
c_rt_lib0clear(&___nl__im__40);
#line 311
c_rt_lib0clear(&___nl__im__43);
#line 311
c_rt_lib0move(&___nl__im__46,___get_global_string_const(516));
#line 311
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__46));
#line 311
c_rt_lib0clear(&___nl__im__39);
#line 311
c_rt_lib0clear(&___nl__im__46);
#line 311
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 311
c_rt_lib0clear(&___nl__im__38);
#line 311
c_rt_lib0clear(&___nl__im__8);
#line 311
//clear ___nl__int__11;
#line 311
//clear ___nl__int__12;
#line 311
c_rt_lib0clear(&___nl__im__19);
#line 311
//clear ___nl__bool__22;
#line 311
c_rt_lib0clear(&___nl__im__23);
#line 312
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 312
goto label_6;
#line 312
label_103:
;
#line 313
___nl__int__47 = 0;
#line 314
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 314
___nl__int__48 = c_rt_lib0array_len(___nl__im__49);
#line 314
c_rt_lib0clear(&___nl__im__49);
#line 314
label_108:
;
#line 314
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 314
___nl__int__51 = c_rt_lib0array_len(___nl__im__52);
#line 314
c_rt_lib0clear(&___nl__im__52);
#line 314
___nl__bool__50 = ___nl__int__48 < ___nl__int__51;
#line 314
//clear ___nl__int__51;
#line 314
___nl__bool__50 = !___nl__bool__50;
#line 314
if(___nl__bool__50){ goto label_178;}
#line 315
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 315
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__55, ___nl__int__48));
#line 315
c_rt_lib0clear(&___nl__im__55);
#line 315
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register(___nl__im__54));
#line 315
c_rt_lib0clear(&___nl__im__54);
#line 317
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(782)));
#line 317
___nl__int__58 = c_rt_lib0array_len(___nl__im__59);
#line 317
c_rt_lib0clear(&___nl__im__59);
#line 317
___nl__bool__56 = ___nl__int__47 < ___nl__int__58;
#line 317
//clear ___nl__int__58;
#line 317
___nl__bool__57 = !___nl__bool__56;
#line 317
if(___nl__bool__57){ goto label_139;}
#line 318
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 318
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__61, ___nl__int__48));
#line 318
c_rt_lib0clear(&___nl__im__61);
#line 318
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(782)));
#line 318
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_get(___nl__im__64, ___nl__int__47));
#line 318
c_rt_lib0clear(&___nl__im__64);
#line 318
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(479)));
#line 318
c_rt_lib0clear(&___nl__im__63);
#line 318
___nl__bool__56 = nlasm0eq_reg(___nl__im__60, ___nl__im__62);
#line 318
c_rt_lib0clear(&___nl__im__60);
#line 318
c_rt_lib0clear(&___nl__im__62);
#line 318
label_139:
;
#line 318
//clear ___nl__bool__57;
#line 318
___nl__bool__56 = !___nl__bool__56;
#line 318
if(___nl__bool__56){ goto label_162;}
#line 319
___nl__int__65 = string0length(___nl__im__2);
#line 320
___nl__int__67 = string0length(___nl__im__53);
#line 320
___nl__int__66 = ___nl__int__65 + ___nl__int__67;
#line 320
//clear ___nl__int__67;
#line 321
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 321
___nl__int__68 = getIntFromImm(___nl__im__69);
#line 321
c_rt_lib0clear(&___nl__im__69);
#line 322
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(782)));
#line 322
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get(___nl__im__72, ___nl__int__47));
#line 322
c_rt_lib0clear(&___nl__im__72);
#line 322
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(175)));
#line 322
c_rt_lib0clear(&___nl__im__71);
#line 322
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker_with_symbol(___nl__int__68, ___nl__int__65, ___nl__int__66, ___nl__im__70, ___ref___im__1));
#line 322
//clear ___nl__int__68;
#line 322
c_rt_lib0clear(&___nl__im__70);
#line 323
___nl__int__73 = 1;
#line 323
___nl__int__47 = ___nl__int__47 + ___nl__int__73;
#line 323
//clear ___nl__int__73;
#line 324
goto label_162;
#line 324
label_162:
;
#line 324
//clear ___nl__bool__56;
#line 324
//clear ___nl__int__65;
#line 324
//clear ___nl__int__66;
#line 325
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__2, ___nl__im__53));
#line 325
c_rt_lib0move(&___nl__im__76,___get_global_string_const(783));
#line 325
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__76));
#line 325
c_rt_lib0clear(&___nl__im__75);
#line 325
c_rt_lib0clear(&___nl__im__76);
#line 325
c_rt_lib0delete(generator_js_priv0println(___nl__im__74, ___ref___im__1));
#line 325
c_rt_lib0clear(&___nl__im__74);
#line 325
c_rt_lib0clear(&___nl__im__53);
#line 314
___nl__int__77 = 1;
#line 314
___nl__int__48 = ___nl__int__48 + ___nl__int__77;
#line 314
//clear ___nl__int__77;
#line 326
goto label_108;
#line 326
label_178:
;
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
c_rt_lib0clear(&___nl__im__2);
#line 326
//clear ___nl__int__3;
#line 326
//clear ___nl__int__5;
#line 326
//clear ___nl__int__6;
#line 326
//clear ___nl__bool__7;
#line 326
c_rt_lib0clear(&___nl__im__8);
#line 326
//clear ___nl__int__11;
#line 326
//clear ___nl__int__12;
#line 326
c_rt_lib0clear(&___nl__im__19);
#line 326
//clear ___nl__bool__22;
#line 326
c_rt_lib0clear(&___nl__im__23);
#line 326
//clear ___nl__int__47;
#line 326
//clear ___nl__int__48;
#line 326
//clear ___nl__bool__50;
#line 326
c_rt_lib0clear(&___nl__im__53);
#line 326
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
#line 331
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 332
c_rt_lib0move(&___nl__im__6,___get_global_string_const(784));
#line 332
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(231)));
#line 332
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(559)));
#line 332
c_rt_lib0clear(&___nl__im__10);
#line 332
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(560)));
#line 332
c_rt_lib0clear(&___nl__im__9);
#line 332
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(161)));
#line 332
___nl__int__7 = getIntFromImm(___nl__im__11);
#line 332
c_rt_lib0clear(&___nl__im__8);
#line 332
c_rt_lib0clear(&___nl__im__11);
#line 332
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__7));
#line 332
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__12));
#line 332
c_rt_lib0clear(&___nl__im__6);
#line 332
//clear ___nl__int__7;
#line 332
c_rt_lib0clear(&___nl__string__12);
#line 332
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__3));
#line 332
c_rt_lib0clear(&___nl__im__5);
#line 333
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 333
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(240));
#line 333
if(___nl__bool__14){ goto label_96;}
#line 335
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(241));
#line 335
if(___nl__bool__14){ goto label_117;}
#line 337
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(242));
#line 337
if(___nl__bool__14){ goto label_138;}
#line 340
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(243));
#line 340
if(___nl__bool__14){ goto label_159;}
#line 342
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(248));
#line 342
if(___nl__bool__14){ goto label_172;}
#line 345
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(244));
#line 345
if(___nl__bool__14){ goto label_193;}
#line 347
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(245));
#line 347
if(___nl__bool__14){ goto label_198;}
#line 349
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(246));
#line 349
if(___nl__bool__14){ goto label_203;}
#line 351
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(247));
#line 351
if(___nl__bool__14){ goto label_218;}
#line 354
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(257));
#line 354
if(___nl__bool__14){ goto label_249;}
#line 356
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(258));
#line 356
if(___nl__bool__14){ goto label_254;}
#line 358
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(249));
#line 358
if(___nl__bool__14){ goto label_263;}
#line 360
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(235));
#line 360
if(___nl__bool__14){ goto label_272;}
#line 362
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(250));
#line 362
if(___nl__bool__14){ goto label_281;}
#line 365
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(251));
#line 365
if(___nl__bool__14){ goto label_308;}
#line 369
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(252));
#line 369
if(___nl__bool__14){ goto label_339;}
#line 371
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(253));
#line 371
if(___nl__bool__14){ goto label_348;}
#line 373
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(254));
#line 373
if(___nl__bool__14){ goto label_357;}
#line 377
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(255));
#line 377
if(___nl__bool__14){ goto label_390;}
#line 381
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(256));
#line 381
if(___nl__bool__14){ goto label_421;}
#line 383
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(259));
#line 383
if(___nl__bool__14){ goto label_426;}
#line 385
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(260));
#line 385
if(___nl__bool__14){ goto label_439;}
#line 388
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(261));
#line 388
if(___nl__bool__14){ goto label_466;}
#line 390
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(262));
#line 390
if(___nl__bool__14){ goto label_471;}
#line 392
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(263));
#line 392
if(___nl__bool__14){ goto label_480;}
#line 393
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(264));
#line 393
if(___nl__bool__14){ goto label_484;}
#line 396
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(265));
#line 396
if(___nl__bool__14){ goto label_509;}
#line 398
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(266));
#line 398
if(___nl__bool__14){ goto label_520;}
#line 400
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(267));
#line 400
if(___nl__bool__14){ goto label_525;}
#line 402
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(268));
#line 402
if(___nl__bool__14){ goto label_536;}
#line 404
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(269));
#line 404
if(___nl__bool__14){ goto label_541;}
#line 406
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(270));
#line 406
if(___nl__bool__14){ goto label_552;}
#line 412
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(271));
#line 412
if(___nl__bool__14){ goto label_615;}
#line 414
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(272));
#line 414
if(___nl__bool__14){ goto label_626;}
#line 416
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(273));
#line 416
if(___nl__bool__14){ goto label_631;}
#line 418
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(274));
#line 418
if(___nl__bool__14){ goto label_636;}
#line 420
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(275));
#line 420
if(___nl__bool__14){ goto label_641;}
#line 420
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 420
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 420
nl_die_arg(___nl__im__15);
#line 333
label_96:
;
#line 333
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(240)));
#line 333
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 334
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(233)));
#line 334
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 334
c_rt_lib0clear(&___nl__im__20);
#line 334
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(78)));
#line 334
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(233)));
#line 334
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(215)));
#line 334
c_rt_lib0clear(&___nl__im__24);
#line 334
c_rt_lib0move(&___nl__im__21, generator_js_priv0get_arr(___nl__im__22, ___nl__im__23));
#line 334
c_rt_lib0clear(&___nl__im__22);
#line 334
c_rt_lib0clear(&___nl__im__23);
#line 334
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 334
c_rt_lib0clear(&___nl__im__19);
#line 334
c_rt_lib0clear(&___nl__im__21);
#line 334
c_rt_lib0move(&___nl__im__25,___get_global_string_const(450));
#line 334
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 334
c_rt_lib0clear(&___nl__im__18);
#line 334
c_rt_lib0clear(&___nl__im__25);
#line 335
goto label_646;
#line 335
label_117:
;
#line 335
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(241)));
#line 335
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 336
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(233)));
#line 336
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value_to_assign(___nl__im__30));
#line 336
c_rt_lib0clear(&___nl__im__30);
#line 336
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(78)));
#line 336
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(233)));
#line 336
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(215)));
#line 336
c_rt_lib0clear(&___nl__im__34);
#line 336
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_hash(___nl__im__32, ___nl__im__33));
#line 336
c_rt_lib0clear(&___nl__im__32);
#line 336
c_rt_lib0clear(&___nl__im__33);
#line 336
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__31));
#line 336
c_rt_lib0clear(&___nl__im__29);
#line 336
c_rt_lib0clear(&___nl__im__31);
#line 336
c_rt_lib0move(&___nl__im__35,___get_global_string_const(450));
#line 336
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__28, ___nl__im__35));
#line 336
c_rt_lib0clear(&___nl__im__28);
#line 336
c_rt_lib0clear(&___nl__im__35);
#line 337
goto label_646;
#line 337
label_138:
;
#line 337
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(242)));
#line 337
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 338
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(233)));
#line 338
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value_to_assign(___nl__im__40));
#line 338
c_rt_lib0clear(&___nl__im__40);
#line 339
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(785)));
#line 339
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(233)));
#line 339
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(215)));
#line 339
c_rt_lib0clear(&___nl__im__44);
#line 339
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_empty_hash(___nl__im__42, ___nl__im__43));
#line 339
c_rt_lib0clear(&___nl__im__42);
#line 339
c_rt_lib0clear(&___nl__im__43);
#line 339
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 339
c_rt_lib0clear(&___nl__im__39);
#line 339
c_rt_lib0clear(&___nl__im__41);
#line 339
c_rt_lib0move(&___nl__im__45,___get_global_string_const(450));
#line 339
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__45));
#line 339
c_rt_lib0clear(&___nl__im__38);
#line 339
c_rt_lib0clear(&___nl__im__45);
#line 340
goto label_646;
#line 340
label_159:
;
#line 340
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(243)));
#line 340
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 341
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(277)));
#line 341
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(279)));
#line 341
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(276)));
#line 341
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(233)));
#line 341
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_call(___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___ref___int__2));
#line 341
c_rt_lib0clear(&___nl__im__48);
#line 341
c_rt_lib0clear(&___nl__im__49);
#line 341
c_rt_lib0clear(&___nl__im__50);
#line 341
c_rt_lib0clear(&___nl__im__51);
#line 342
goto label_646;
#line 342
label_172:
;
#line 342
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(248)));
#line 342
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 343
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(233)));
#line 343
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value_to_assign(___nl__im__56));
#line 343
c_rt_lib0clear(&___nl__im__56);
#line 344
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(159)));
#line 344
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(175)));
#line 344
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__59, ___get_global_string_const(175), ___nl__im__60));
#line 344
c_rt_lib0clear(&___nl__im__59);
#line 344
c_rt_lib0clear(&___nl__im__60);
#line 344
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_const_hash(___nl__im__58));
#line 344
c_rt_lib0clear(&___nl__im__58);
#line 344
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__57));
#line 344
c_rt_lib0clear(&___nl__im__55);
#line 344
c_rt_lib0clear(&___nl__im__57);
#line 344
c_rt_lib0move(&___nl__im__61,___get_global_string_const(450));
#line 344
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 344
c_rt_lib0clear(&___nl__im__54);
#line 344
c_rt_lib0clear(&___nl__im__61);
#line 345
goto label_646;
#line 345
label_193:
;
#line 345
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(244)));
#line 345
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 346
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_una_op(___nl__im__62));
#line 347
goto label_646;
#line 347
label_198:
;
#line 347
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(245)));
#line 347
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 348
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_bin_op(___nl__im__64, ___ref___int__2));
#line 349
goto label_646;
#line 349
label_203:
;
#line 349
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(246)));
#line 349
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 350
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(233)));
#line 350
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(78)));
#line 350
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(570)));
#line 350
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(575)));
#line 350
___nl__int__71 = getIntFromImm(___nl__im__72);
#line 350
c_rt_lib0clear(&___nl__im__72);
#line 350
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_is(___nl__im__68, ___nl__im__69, ___nl__im__70, ___nl__int__71, ___ref___int__2, ___ref___im__3));
#line 350
c_rt_lib0clear(&___nl__im__68);
#line 350
c_rt_lib0clear(&___nl__im__69);
#line 350
c_rt_lib0clear(&___nl__im__70);
#line 350
//clear ___nl__int__71;
#line 351
goto label_646;
#line 351
label_218:
;
#line 351
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(247)));
#line 351
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 352
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(233)));
#line 352
c_rt_lib0move(&___nl__im__76, generator_js_priv0get_register_value_to_assign(___nl__im__77));
#line 352
c_rt_lib0clear(&___nl__im__77);
#line 352
c_rt_lib0move(&___nl__im__79,___get_global_string_const(280));
#line 352
c_rt_lib0move(&___nl__im__80,___get_global_string_const(247));
#line 353
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(78)));
#line 353
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__83));
#line 353
c_rt_lib0clear(&___nl__im__83);
#line 353
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(570)));
#line 353
c_rt_lib0move(&___nl__im__85, generator_js_priv0get_str_imm(___nl__im__86, ___ref___im__3));
#line 353
c_rt_lib0clear(&___nl__im__86);
#line 353
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__85));
#line 353
c_rt_lib0clear(&___nl__im__85);
#line 353
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(2, ___nl__im__82, ___nl__im__84));
#line 353
c_rt_lib0clear(&___nl__im__82);
#line 353
c_rt_lib0clear(&___nl__im__84);
#line 353
c_rt_lib0move(&___nl__im__78, generator_js_priv0get_internal_call(___nl__im__79, ___nl__im__80, ___nl__im__81, ___ref___int__2));
#line 353
c_rt_lib0clear(&___nl__im__79);
#line 353
c_rt_lib0clear(&___nl__im__80);
#line 353
c_rt_lib0clear(&___nl__im__81);
#line 353
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 353
c_rt_lib0clear(&___nl__im__76);
#line 353
c_rt_lib0clear(&___nl__im__78);
#line 353
c_rt_lib0move(&___nl__im__87,___get_global_string_const(450));
#line 353
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__75, ___nl__im__87));
#line 353
c_rt_lib0clear(&___nl__im__75);
#line 353
c_rt_lib0clear(&___nl__im__87);
#line 354
goto label_646;
#line 354
label_249:
;
#line 354
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(257)));
#line 354
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 355
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_return(___nl__im__88, ___nl__im__1));
#line 356
goto label_646;
#line 356
label_254:
;
#line 356
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(258)));
#line 356
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 357
c_rt_lib0move(&___nl__im__92, generator_js_priv0get_namespace_name());
#line 357
c_rt_lib0move(&___nl__im__93,___get_global_string_const(786));
#line 357
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__92, ___nl__im__93));
#line 357
c_rt_lib0clear(&___nl__im__92);
#line 357
c_rt_lib0clear(&___nl__im__93);
#line 358
goto label_646;
#line 358
label_263:
;
#line 358
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(249)));
#line 358
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 359
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(233)));
#line 359
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(78)));
#line 359
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_move(___nl__im__96, ___nl__im__97, ___ref___int__2));
#line 359
c_rt_lib0clear(&___nl__im__96);
#line 359
c_rt_lib0clear(&___nl__im__97);
#line 360
goto label_646;
#line 360
label_272:
;
#line 360
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(235)));
#line 360
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 361
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(233)));
#line 361
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(234)));
#line 361
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_load_const(___nl__im__100, ___nl__im__101, ___ref___im__3));
#line 361
c_rt_lib0clear(&___nl__im__100);
#line 361
c_rt_lib0clear(&___nl__im__101);
#line 362
goto label_646;
#line 362
label_281:
;
#line 362
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(250)));
#line 362
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 363
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(233)));
#line 363
c_rt_lib0move(&___nl__im__107, generator_js_priv0get_register_value_to_assign(___nl__im__108));
#line 363
c_rt_lib0clear(&___nl__im__108);
#line 364
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(78)));
#line 364
c_rt_lib0move(&___nl__im__109, generator_js_priv0get_register_value(___nl__im__110));
#line 364
c_rt_lib0clear(&___nl__im__110);
#line 364
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 364
c_rt_lib0clear(&___nl__im__107);
#line 364
c_rt_lib0clear(&___nl__im__109);
#line 364
c_rt_lib0move(&___nl__im__111,___get_global_string_const(787));
#line 364
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__111));
#line 364
c_rt_lib0clear(&___nl__im__106);
#line 364
c_rt_lib0clear(&___nl__im__111);
#line 364
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(287)));
#line 364
c_rt_lib0move(&___nl__im__112, generator_js_priv0get_register_value(___nl__im__113));
#line 364
c_rt_lib0clear(&___nl__im__113);
#line 364
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__112));
#line 364
c_rt_lib0clear(&___nl__im__105);
#line 364
c_rt_lib0clear(&___nl__im__112);
#line 364
c_rt_lib0move(&___nl__im__114,___get_global_string_const(516));
#line 364
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__104, ___nl__im__114));
#line 364
c_rt_lib0clear(&___nl__im__104);
#line 364
c_rt_lib0clear(&___nl__im__114);
#line 365
goto label_646;
#line 365
label_308:
;
#line 365
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(251)));
#line 365
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 366
c_rt_lib0move(&___nl__im__118,___get_global_string_const(280));
#line 366
c_rt_lib0move(&___nl__im__119,___get_global_string_const(788));
#line 366
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(78)));
#line 366
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__122));
#line 366
c_rt_lib0clear(&___nl__im__122);
#line 367
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(287)));
#line 367
c_rt_lib0move(&___nl__im__124, generator_js_priv0get_register_value(___nl__im__125));
#line 367
c_rt_lib0clear(&___nl__im__125);
#line 367
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__124));
#line 367
c_rt_lib0clear(&___nl__im__124);
#line 368
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(234)));
#line 368
c_rt_lib0move(&___nl__im__127, generator_js_priv0get_register_value(___nl__im__128));
#line 368
c_rt_lib0clear(&___nl__im__128);
#line 368
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__127));
#line 368
c_rt_lib0clear(&___nl__im__127);
#line 368
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(3, ___nl__im__121, ___nl__im__123, ___nl__im__126));
#line 368
c_rt_lib0clear(&___nl__im__121);
#line 368
c_rt_lib0clear(&___nl__im__123);
#line 368
c_rt_lib0clear(&___nl__im__126);
#line 368
c_rt_lib0move(&___nl__im__117, generator_js_priv0get_internal_call(___nl__im__118, ___nl__im__119, ___nl__im__120, ___ref___int__2));
#line 368
c_rt_lib0clear(&___nl__im__118);
#line 368
c_rt_lib0clear(&___nl__im__119);
#line 368
c_rt_lib0clear(&___nl__im__120);
#line 368
c_rt_lib0move(&___nl__im__129,___get_global_string_const(450));
#line 368
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__117, ___nl__im__129));
#line 368
c_rt_lib0clear(&___nl__im__117);
#line 368
c_rt_lib0clear(&___nl__im__129);
#line 369
goto label_646;
#line 369
label_339:
;
#line 369
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(252)));
#line 369
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 370
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(233)));
#line 370
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(234)));
#line 370
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_push(___nl__im__132, ___nl__im__133, ___ref___int__2));
#line 370
c_rt_lib0clear(&___nl__im__132);
#line 370
c_rt_lib0clear(&___nl__im__133);
#line 371
goto label_646;
#line 371
label_348:
;
#line 371
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(253)));
#line 371
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 372
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(233)));
#line 372
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(78)));
#line 372
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_len(___nl__im__136, ___nl__im__137, ___ref___int__2));
#line 372
c_rt_lib0clear(&___nl__im__136);
#line 372
c_rt_lib0clear(&___nl__im__137);
#line 373
goto label_646;
#line 373
label_357:
;
#line 373
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(254)));
#line 373
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 374
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(233)));
#line 374
c_rt_lib0move(&___nl__im__141, generator_js_priv0get_register_value_to_assign(___nl__im__142));
#line 374
c_rt_lib0clear(&___nl__im__142);
#line 374
c_rt_lib0move(&___nl__im__144,___get_global_string_const(280));
#line 374
c_rt_lib0move(&___nl__im__145,___get_global_string_const(789));
#line 375
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(78)));
#line 375
c_rt_lib0move(&___nl__im__148, generator_js_priv0get_register_value(___nl__im__149));
#line 375
c_rt_lib0clear(&___nl__im__149);
#line 375
c_rt_lib0move(&___nl__im__147, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__148));
#line 375
c_rt_lib0clear(&___nl__im__148);
#line 375
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(585)));
#line 375
c_rt_lib0move(&___nl__im__151, generator_js_priv0get_str_imm(___nl__im__152, ___ref___im__3));
#line 375
c_rt_lib0clear(&___nl__im__152);
#line 375
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__151));
#line 375
c_rt_lib0clear(&___nl__im__151);
#line 375
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_mk(2, ___nl__im__147, ___nl__im__150));
#line 375
c_rt_lib0clear(&___nl__im__147);
#line 375
c_rt_lib0clear(&___nl__im__150);
#line 375
c_rt_lib0move(&___nl__im__143, generator_js_priv0get_internal_call(___nl__im__144, ___nl__im__145, ___nl__im__146, ___ref___int__2));
#line 375
c_rt_lib0clear(&___nl__im__144);
#line 375
c_rt_lib0clear(&___nl__im__145);
#line 375
c_rt_lib0clear(&___nl__im__146);
#line 375
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__143));
#line 375
c_rt_lib0clear(&___nl__im__141);
#line 375
c_rt_lib0clear(&___nl__im__143);
#line 376
c_rt_lib0move(&___nl__im__153,___get_global_string_const(450));
#line 376
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__140, ___nl__im__153));
#line 376
c_rt_lib0clear(&___nl__im__140);
#line 376
c_rt_lib0clear(&___nl__im__153);
#line 377
goto label_646;
#line 377
label_390:
;
#line 377
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(255)));
#line 377
c_rt_lib0copy(&___nl__im__154, ___nl__im__155);
#line 378
c_rt_lib0move(&___nl__im__157,___get_global_string_const(280));
#line 378
c_rt_lib0move(&___nl__im__158,___get_global_string_const(790));
#line 378
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(78)));
#line 378
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__161));
#line 378
c_rt_lib0clear(&___nl__im__161);
#line 379
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(585)));
#line 379
c_rt_lib0move(&___nl__im__163, generator_js_priv0get_str_imm(___nl__im__164, ___ref___im__3));
#line 379
c_rt_lib0clear(&___nl__im__164);
#line 379
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__163));
#line 379
c_rt_lib0clear(&___nl__im__163);
#line 379
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(234)));
#line 379
c_rt_lib0move(&___nl__im__166, generator_js_priv0get_register_value(___nl__im__167));
#line 379
c_rt_lib0clear(&___nl__im__167);
#line 379
c_rt_lib0move(&___nl__im__165, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__166));
#line 379
c_rt_lib0clear(&___nl__im__166);
#line 379
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(3, ___nl__im__160, ___nl__im__162, ___nl__im__165));
#line 379
c_rt_lib0clear(&___nl__im__160);
#line 379
c_rt_lib0clear(&___nl__im__162);
#line 379
c_rt_lib0clear(&___nl__im__165);
#line 379
c_rt_lib0move(&___nl__im__156, generator_js_priv0get_internal_call(___nl__im__157, ___nl__im__158, ___nl__im__159, ___ref___int__2));
#line 379
c_rt_lib0clear(&___nl__im__157);
#line 379
c_rt_lib0clear(&___nl__im__158);
#line 379
c_rt_lib0clear(&___nl__im__159);
#line 380
c_rt_lib0move(&___nl__im__168,___get_global_string_const(450));
#line 380
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__156, ___nl__im__168));
#line 380
c_rt_lib0clear(&___nl__im__156);
#line 380
c_rt_lib0clear(&___nl__im__168);
#line 381
goto label_646;
#line 381
label_421:
;
#line 381
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(256)));
#line 381
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 382
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_mk(___nl__im__169, ___ref___im__3, ___ref___int__2));
#line 383
goto label_646;
#line 383
label_426:
;
#line 383
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(259)));
#line 383
___nl__int__171 = getIntFromImm(___nl__im__172);
#line 384
c_rt_lib0move(&___nl__im__174,___get_global_string_const(537));
#line 384
c_rt_lib0move(&___nl__string__175, c_rt_lib0int_to_string(___nl__int__171));
#line 384
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__string__175));
#line 384
c_rt_lib0clear(&___nl__im__174);
#line 384
c_rt_lib0clear(&___nl__string__175);
#line 384
c_rt_lib0move(&___nl__im__176,___get_global_string_const(538));
#line 384
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__173, ___nl__im__176));
#line 384
c_rt_lib0clear(&___nl__im__173);
#line 384
c_rt_lib0clear(&___nl__im__176);
#line 385
goto label_646;
#line 385
label_439:
;
#line 385
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(260)));
#line 385
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 386
c_rt_lib0move(&___nl__im__182,___get_global_string_const(615));
#line 386
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(78)));
#line 386
c_rt_lib0move(&___nl__im__183, generator_js_priv0get_register_value(___nl__im__184));
#line 386
c_rt_lib0clear(&___nl__im__184);
#line 386
c_rt_lib0move(&___nl__im__181, c_rt_lib0concat_new(___nl__im__182, ___nl__im__183));
#line 386
c_rt_lib0clear(&___nl__im__182);
#line 386
c_rt_lib0clear(&___nl__im__183);
#line 386
c_rt_lib0move(&___nl__im__185,___get_global_string_const(791));
#line 386
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__185));
#line 386
c_rt_lib0clear(&___nl__im__181);
#line 386
c_rt_lib0clear(&___nl__im__185);
#line 386
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(233)));
#line 386
___nl__int__187 = getIntFromImm(___nl__im__188);
#line 386
c_rt_lib0clear(&___nl__im__188);
#line 386
c_rt_lib0move(&___nl__im__186, generator_js_priv0get_goto(___nl__int__187));
#line 386
//clear ___nl__int__187;
#line 386
c_rt_lib0move(&___nl__im__179, c_rt_lib0concat_new(___nl__im__180, ___nl__im__186));
#line 386
c_rt_lib0clear(&___nl__im__180);
#line 386
c_rt_lib0clear(&___nl__im__186);
#line 387
c_rt_lib0move(&___nl__im__189,___get_global_string_const(316));
#line 387
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__179, ___nl__im__189));
#line 387
c_rt_lib0clear(&___nl__im__179);
#line 387
c_rt_lib0clear(&___nl__im__189);
#line 388
goto label_646;
#line 388
label_466:
;
#line 388
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(261)));
#line 388
___nl__int__190 = getIntFromImm(___nl__im__191);
#line 389
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_goto(___nl__int__190));
#line 390
goto label_646;
#line 390
label_471:
;
#line 390
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(262)));
#line 390
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 391
c_rt_lib0move(&___nl__im__194, generator_js_priv0get_register_to_assign(___nl__im__192));
#line 391
c_rt_lib0move(&___nl__im__195,___get_global_string_const(792));
#line 391
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__194, ___nl__im__195));
#line 391
c_rt_lib0clear(&___nl__im__194);
#line 391
c_rt_lib0clear(&___nl__im__195);
#line 392
goto label_646;
#line 392
label_480:
;
#line 392
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(263)));
#line 392
c_rt_lib0copy(&___nl__im__196, ___nl__im__197);
#line 393
goto label_646;
#line 393
label_484:
;
#line 393
c_rt_lib0move(&___nl__im__199, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(264)));
#line 393
c_rt_lib0copy(&___nl__im__198, ___nl__im__199);
#line 394
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(369)));
#line 394
c_rt_lib0move(&___nl__im__203, generator_js_priv0get_register_to_assign(___nl__im__204));
#line 394
c_rt_lib0clear(&___nl__im__204);
#line 395
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(368)));
#line 395
c_rt_lib0move(&___nl__im__205, generator_js_priv0get_register_value(___nl__im__206));
#line 395
c_rt_lib0clear(&___nl__im__206);
#line 395
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__205));
#line 395
c_rt_lib0clear(&___nl__im__203);
#line 395
c_rt_lib0clear(&___nl__im__205);
#line 395
c_rt_lib0move(&___nl__im__207,___get_global_string_const(115));
#line 395
c_rt_lib0move(&___nl__im__201, c_rt_lib0concat_new(___nl__im__202, ___nl__im__207));
#line 395
c_rt_lib0clear(&___nl__im__202);
#line 395
c_rt_lib0clear(&___nl__im__207);
#line 395
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(613)));
#line 395
c_rt_lib0move(&___nl__im__200, c_rt_lib0concat_new(___nl__im__201, ___nl__im__208));
#line 395
c_rt_lib0clear(&___nl__im__201);
#line 395
c_rt_lib0clear(&___nl__im__208);
#line 395
c_rt_lib0move(&___nl__im__209,___get_global_string_const(450));
#line 395
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__200, ___nl__im__209));
#line 395
c_rt_lib0clear(&___nl__im__200);
#line 395
c_rt_lib0clear(&___nl__im__209);
#line 396
goto label_646;
#line 396
label_509:
;
#line 396
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(265)));
#line 396
c_rt_lib0copy(&___nl__im__210, ___nl__im__211);
#line 397
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__210, ___get_global_string_const(370)));
#line 397
c_rt_lib0move(&___nl__im__212, generator_js_priv0get_register_to_assign(___nl__im__213));
#line 397
c_rt_lib0clear(&___nl__im__213);
#line 397
c_rt_lib0move(&___nl__im__214,___get_global_string_const(792));
#line 397
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__212, ___nl__im__214));
#line 397
c_rt_lib0clear(&___nl__im__212);
#line 397
c_rt_lib0clear(&___nl__im__214);
#line 398
goto label_646;
#line 398
label_520:
;
#line 398
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(266)));
#line 398
c_rt_lib0copy(&___nl__im__215, ___nl__im__216);
#line 399
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_index(___nl__im__215));
#line 400
goto label_646;
#line 400
label_525:
;
#line 400
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(267)));
#line 400
c_rt_lib0copy(&___nl__im__217, ___nl__im__218);
#line 401
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(370)));
#line 401
c_rt_lib0move(&___nl__im__219, generator_js_priv0get_register_to_assign(___nl__im__220));
#line 401
c_rt_lib0clear(&___nl__im__220);
#line 401
c_rt_lib0move(&___nl__im__221,___get_global_string_const(792));
#line 401
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__219, ___nl__im__221));
#line 401
c_rt_lib0clear(&___nl__im__219);
#line 401
c_rt_lib0clear(&___nl__im__221);
#line 402
goto label_646;
#line 402
label_536:
;
#line 402
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(268)));
#line 402
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 403
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_hash_index(___nl__im__222));
#line 404
goto label_646;
#line 404
label_541:
;
#line 404
c_rt_lib0move(&___nl__im__225, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(269)));
#line 404
c_rt_lib0copy(&___nl__im__224, ___nl__im__225);
#line 405
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_string_const(370)));
#line 405
c_rt_lib0move(&___nl__im__226, generator_js_priv0get_register_to_assign(___nl__im__227));
#line 405
c_rt_lib0clear(&___nl__im__227);
#line 405
c_rt_lib0move(&___nl__im__228,___get_global_string_const(792));
#line 405
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__226, ___nl__im__228));
#line 405
c_rt_lib0clear(&___nl__im__226);
#line 405
c_rt_lib0clear(&___nl__im__228);
#line 406
goto label_646;
#line 406
label_552:
;
#line 406
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(270)));
#line 406
c_rt_lib0copy(&___nl__im__229, ___nl__im__230);
#line 407
c_rt_lib0move(&___nl__im__234, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(231)));
#line 407
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__234, ___get_global_string_const(559)));
#line 407
c_rt_lib0clear(&___nl__im__234);
#line 407
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__233, ___get_global_string_const(560)));
#line 407
c_rt_lib0clear(&___nl__im__233);
#line 407
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__232, ___get_global_string_const(161)));
#line 407
___nl__int__231 = getIntFromImm(___nl__im__235);
#line 407
c_rt_lib0clear(&___nl__im__232);
#line 407
c_rt_lib0clear(&___nl__im__235);
#line 407
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__231, ___ref___im__3));
#line 407
//clear ___nl__int__231;
#line 408
c_rt_lib0move(&___nl__im__242,___get_global_string_const(615));
#line 408
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(368)));
#line 408
c_rt_lib0move(&___nl__im__243, generator_js_priv0get_register_value(___nl__im__244));
#line 408
c_rt_lib0clear(&___nl__im__244);
#line 408
c_rt_lib0move(&___nl__im__241, c_rt_lib0concat_new(___nl__im__242, ___nl__im__243));
#line 408
c_rt_lib0clear(&___nl__im__242);
#line 408
c_rt_lib0clear(&___nl__im__243);
#line 408
c_rt_lib0move(&___nl__im__245,___get_global_string_const(793));
#line 408
c_rt_lib0move(&___nl__im__240, c_rt_lib0concat_new(___nl__im__241, ___nl__im__245));
#line 408
c_rt_lib0clear(&___nl__im__241);
#line 408
c_rt_lib0clear(&___nl__im__245);
#line 408
c_rt_lib0move(&___nl__im__247, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(575)));
#line 408
___nl__int__246 = getIntFromImm(___nl__im__247);
#line 408
c_rt_lib0clear(&___nl__im__247);
#line 408
c_rt_lib0move(&___nl__string__248, c_rt_lib0int_to_string(___nl__int__246));
#line 408
c_rt_lib0move(&___nl__im__239, c_rt_lib0concat_new(___nl__im__240, ___nl__string__248));
#line 408
c_rt_lib0clear(&___nl__im__240);
#line 408
//clear ___nl__int__246;
#line 408
c_rt_lib0clear(&___nl__string__248);
#line 408
c_rt_lib0move(&___nl__im__249,___get_global_string_const(331));
#line 408
c_rt_lib0move(&___nl__im__238, c_rt_lib0concat_new(___nl__im__239, ___nl__im__249));
#line 408
c_rt_lib0clear(&___nl__im__239);
#line 408
c_rt_lib0clear(&___nl__im__249);
#line 409
c_rt_lib0move(&___nl__im__250, generator_js_priv0get_namespace_name());
#line 409
c_rt_lib0move(&___nl__im__237, c_rt_lib0concat_new(___nl__im__238, ___nl__im__250));
#line 409
c_rt_lib0clear(&___nl__im__238);
#line 409
c_rt_lib0clear(&___nl__im__250);
#line 409
c_rt_lib0move(&___nl__im__251,___get_global_string_const(786));
#line 409
c_rt_lib0move(&___nl__im__236, c_rt_lib0concat_new(___nl__im__237, ___nl__im__251));
#line 409
c_rt_lib0clear(&___nl__im__237);
#line 409
c_rt_lib0clear(&___nl__im__251);
#line 409
c_rt_lib0delete(generator_js_priv0println(___nl__im__236, ___ref___im__3));
#line 409
c_rt_lib0clear(&___nl__im__236);
#line 410
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(369)));
#line 410
c_rt_lib0move(&___nl__im__254, generator_js_priv0get_register_to_assign(___nl__im__255));
#line 410
c_rt_lib0clear(&___nl__im__255);
#line 411
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(368)));
#line 411
c_rt_lib0move(&___nl__im__256, generator_js_priv0get_register_value(___nl__im__257));
#line 411
c_rt_lib0clear(&___nl__im__257);
#line 411
c_rt_lib0move(&___nl__im__253, c_rt_lib0concat_new(___nl__im__254, ___nl__im__256));
#line 411
c_rt_lib0clear(&___nl__im__254);
#line 411
c_rt_lib0clear(&___nl__im__256);
#line 411
c_rt_lib0move(&___nl__im__258,___get_global_string_const(794));
#line 411
c_rt_lib0move(&___nl__im__252, c_rt_lib0concat_new(___nl__im__253, ___nl__im__258));
#line 411
c_rt_lib0clear(&___nl__im__253);
#line 411
c_rt_lib0clear(&___nl__im__258);
#line 411
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__252));
#line 411
c_rt_lib0clear(&___nl__im__252);
#line 412
goto label_646;
#line 412
label_615:
;
#line 412
c_rt_lib0move(&___nl__im__260, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(271)));
#line 412
c_rt_lib0copy(&___nl__im__259, ___nl__im__260);
#line 413
c_rt_lib0move(&___nl__im__262, c_rt_lib0hash_get_value_dec(___nl__im__259, ___get_global_string_const(370)));
#line 413
c_rt_lib0move(&___nl__im__261, generator_js_priv0get_register_to_assign(___nl__im__262));
#line 413
c_rt_lib0clear(&___nl__im__262);
#line 413
c_rt_lib0move(&___nl__im__263,___get_global_string_const(792));
#line 413
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__261, ___nl__im__263));
#line 413
c_rt_lib0clear(&___nl__im__261);
#line 413
c_rt_lib0clear(&___nl__im__263);
#line 414
goto label_646;
#line 414
label_626:
;
#line 414
c_rt_lib0move(&___nl__im__265, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(272)));
#line 414
c_rt_lib0copy(&___nl__im__264, ___nl__im__265);
#line 415
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_init_iter(___nl__im__264, ___ref___int__2));
#line 416
goto label_646;
#line 416
label_631:
;
#line 416
c_rt_lib0move(&___nl__im__267, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(273)));
#line 416
c_rt_lib0copy(&___nl__im__266, ___nl__im__267);
#line 417
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_next_iter(___nl__im__266, ___ref___int__2));
#line 418
goto label_646;
#line 418
label_636:
;
#line 418
c_rt_lib0move(&___nl__im__269, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(274)));
#line 418
c_rt_lib0copy(&___nl__im__268, ___nl__im__269);
#line 419
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_get_key_iter(___nl__im__268, ___ref___int__2));
#line 420
goto label_646;
#line 420
label_641:
;
#line 420
c_rt_lib0move(&___nl__im__271, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(275)));
#line 420
c_rt_lib0copy(&___nl__im__270, ___nl__im__271);
#line 421
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_is_end(___nl__im__270, ___ref___int__2));
#line 422
goto label_646;
#line 422
label_646:
;
#line 423
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(231)));
#line 423
c_rt_lib0move(&___nl__im__274, c_rt_lib0hash_get_value_dec(___nl__im__275, ___get_global_string_const(559)));
#line 423
c_rt_lib0clear(&___nl__im__275);
#line 423
c_rt_lib0move(&___nl__im__273, c_rt_lib0hash_get_value_dec(___nl__im__274, ___get_global_string_const(560)));
#line 423
c_rt_lib0clear(&___nl__im__274);
#line 423
c_rt_lib0move(&___nl__im__276, c_rt_lib0hash_get_value_dec(___nl__im__273, ___get_global_string_const(161)));
#line 423
___nl__int__272 = getIntFromImm(___nl__im__276);
#line 423
c_rt_lib0clear(&___nl__im__273);
#line 423
c_rt_lib0clear(&___nl__im__276);
#line 423
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__272, ___ref___im__3));
#line 423
//clear ___nl__int__272;
#line 424
c_rt_lib0delete(generator_js_priv0println(___nl__im__4, ___ref___im__3));
#line 424
c_rt_lib0clear(&___nl__im__0);
#line 424
c_rt_lib0clear(&___nl__im__1);
#line 424
c_rt_lib0clear(&___nl__im__4);
#line 424
c_rt_lib0clear(&___nl__im__13);
#line 424
//clear ___nl__bool__14;
#line 424
c_rt_lib0clear(&___nl__im__15);
#line 424
c_rt_lib0clear(&___nl__im__16);
#line 424
c_rt_lib0clear(&___nl__im__17);
#line 424
c_rt_lib0clear(&___nl__im__26);
#line 424
c_rt_lib0clear(&___nl__im__27);
#line 424
c_rt_lib0clear(&___nl__im__36);
#line 424
c_rt_lib0clear(&___nl__im__37);
#line 424
c_rt_lib0clear(&___nl__im__46);
#line 424
c_rt_lib0clear(&___nl__im__47);
#line 424
c_rt_lib0clear(&___nl__im__52);
#line 424
c_rt_lib0clear(&___nl__im__53);
#line 424
c_rt_lib0clear(&___nl__im__62);
#line 424
c_rt_lib0clear(&___nl__im__63);
#line 424
c_rt_lib0clear(&___nl__im__64);
#line 424
c_rt_lib0clear(&___nl__im__65);
#line 424
c_rt_lib0clear(&___nl__im__66);
#line 424
c_rt_lib0clear(&___nl__im__67);
#line 424
c_rt_lib0clear(&___nl__im__73);
#line 424
c_rt_lib0clear(&___nl__im__74);
#line 424
c_rt_lib0clear(&___nl__im__88);
#line 424
c_rt_lib0clear(&___nl__im__89);
#line 424
c_rt_lib0clear(&___nl__im__90);
#line 424
c_rt_lib0clear(&___nl__im__91);
#line 424
c_rt_lib0clear(&___nl__im__94);
#line 424
c_rt_lib0clear(&___nl__im__95);
#line 424
c_rt_lib0clear(&___nl__im__98);
#line 424
c_rt_lib0clear(&___nl__im__99);
#line 424
c_rt_lib0clear(&___nl__im__102);
#line 424
c_rt_lib0clear(&___nl__im__103);
#line 424
c_rt_lib0clear(&___nl__im__115);
#line 424
c_rt_lib0clear(&___nl__im__116);
#line 424
c_rt_lib0clear(&___nl__im__130);
#line 424
c_rt_lib0clear(&___nl__im__131);
#line 424
c_rt_lib0clear(&___nl__im__134);
#line 424
c_rt_lib0clear(&___nl__im__135);
#line 424
c_rt_lib0clear(&___nl__im__138);
#line 424
c_rt_lib0clear(&___nl__im__139);
#line 424
c_rt_lib0clear(&___nl__im__154);
#line 424
c_rt_lib0clear(&___nl__im__155);
#line 424
c_rt_lib0clear(&___nl__im__169);
#line 424
c_rt_lib0clear(&___nl__im__170);
#line 424
//clear ___nl__int__171;
#line 424
c_rt_lib0clear(&___nl__im__172);
#line 424
c_rt_lib0clear(&___nl__im__177);
#line 424
c_rt_lib0clear(&___nl__im__178);
#line 424
//clear ___nl__int__190;
#line 424
c_rt_lib0clear(&___nl__im__191);
#line 424
c_rt_lib0clear(&___nl__im__192);
#line 424
c_rt_lib0clear(&___nl__im__193);
#line 424
c_rt_lib0clear(&___nl__im__196);
#line 424
c_rt_lib0clear(&___nl__im__197);
#line 424
c_rt_lib0clear(&___nl__im__198);
#line 424
c_rt_lib0clear(&___nl__im__199);
#line 424
c_rt_lib0clear(&___nl__im__210);
#line 424
c_rt_lib0clear(&___nl__im__211);
#line 424
c_rt_lib0clear(&___nl__im__215);
#line 424
c_rt_lib0clear(&___nl__im__216);
#line 424
c_rt_lib0clear(&___nl__im__217);
#line 424
c_rt_lib0clear(&___nl__im__218);
#line 424
c_rt_lib0clear(&___nl__im__222);
#line 424
c_rt_lib0clear(&___nl__im__223);
#line 424
c_rt_lib0clear(&___nl__im__224);
#line 424
c_rt_lib0clear(&___nl__im__225);
#line 424
c_rt_lib0clear(&___nl__im__229);
#line 424
c_rt_lib0clear(&___nl__im__230);
#line 424
c_rt_lib0clear(&___nl__im__259);
#line 424
c_rt_lib0clear(&___nl__im__260);
#line 424
c_rt_lib0clear(&___nl__im__264);
#line 424
c_rt_lib0clear(&___nl__im__265);
#line 424
c_rt_lib0clear(&___nl__im__266);
#line 424
c_rt_lib0clear(&___nl__im__267);
#line 424
c_rt_lib0clear(&___nl__im__268);
#line 424
c_rt_lib0clear(&___nl__im__269);
#line 424
c_rt_lib0clear(&___nl__im__270);
#line 424
c_rt_lib0clear(&___nl__im__271);
#line 424
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
#line 428
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 428
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 428
c_rt_lib0clear(&___nl__im__4);
#line 428
___nl__bool__3 = !___nl__bool__3;
#line 428
if(___nl__bool__3){ goto label_11;}
#line 428
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 428
c_rt_lib0clear(&___nl__im__0);
#line 428
c_rt_lib0clear(&___nl__im__1);
#line 428
//clear ___nl__bool__3;
#line 428
return ___nl__im__5;
#line 428
goto label_11;
#line 428
label_11:
;
#line 428
//clear ___nl__bool__3;
#line 428
c_rt_lib0clear(&___nl__im__5);
#line 429
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 429
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(430));
#line 429
c_rt_lib0clear(&___nl__im__8);
#line 429
___nl__bool__7 = !___nl__bool__6;
#line 429
if(___nl__bool__7){ goto label_22;}
#line 429
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 429
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(430));
#line 429
c_rt_lib0clear(&___nl__im__9);
#line 429
label_22:
;
#line 429
//clear ___nl__bool__7;
#line 429
___nl__bool__6 = !___nl__bool__6;
#line 429
if(___nl__bool__6){ goto label_40;}
#line 430
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_to_assign(___nl__im__0));
#line 430
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register(___nl__im__1));
#line 430
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 430
c_rt_lib0clear(&___nl__im__12);
#line 430
c_rt_lib0clear(&___nl__im__13);
#line 430
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 430
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 430
c_rt_lib0clear(&___nl__im__11);
#line 430
c_rt_lib0clear(&___nl__im__14);
#line 430
c_rt_lib0clear(&___nl__im__0);
#line 430
c_rt_lib0clear(&___nl__im__1);
#line 430
//clear ___nl__bool__6;
#line 430
return ___nl__im__10;
#line 431
goto label_40;
#line 431
label_40:
;
#line 431
//clear ___nl__bool__6;
#line 431
c_rt_lib0clear(&___nl__im__10);
#line 432
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 432
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(138));
#line 432
if(___nl__bool__16){ goto label_63;}
#line 434
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(413));
#line 434
if(___nl__bool__16){ goto label_80;}
#line 440
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(414));
#line 440
if(___nl__bool__16){ goto label_125;}
#line 442
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 442
if(___nl__bool__16){ goto label_143;}
#line 448
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(567));
#line 448
if(___nl__bool__16){ goto label_198;}
#line 454
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(134));
#line 454
if(___nl__bool__16){ goto label_232;}
#line 460
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(571));
#line 460
if(___nl__bool__16){ goto label_268;}
#line 462
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(135));
#line 462
if(___nl__bool__16){ goto label_274;}
#line 462
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 462
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 462
nl_die_arg(___nl__im__17);
#line 432
label_63:
;
#line 433
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 433
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 433
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__1));
#line 433
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 433
c_rt_lib0clear(&___nl__im__21);
#line 433
c_rt_lib0clear(&___nl__im__22);
#line 433
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 433
c_rt_lib0clear(&___nl__im__19);
#line 433
c_rt_lib0clear(&___nl__im__20);
#line 433
c_rt_lib0clear(&___nl__im__0);
#line 433
c_rt_lib0clear(&___nl__im__1);
#line 433
c_rt_lib0clear(&___nl__im__15);
#line 433
//clear ___nl__bool__16;
#line 433
c_rt_lib0clear(&___nl__im__17);
#line 433
return ___nl__im__18;
#line 434
goto label_280;
#line 434
label_80:
;
#line 435
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 435
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(138));
#line 435
c_rt_lib0clear(&___nl__im__24);
#line 435
___nl__bool__23 = !___nl__bool__23;
#line 435
if(___nl__bool__23){ goto label_104;}
#line 436
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 436
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value(___nl__im__1));
#line 436
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 436
c_rt_lib0clear(&___nl__im__27);
#line 436
c_rt_lib0clear(&___nl__im__28);
#line 436
c_rt_lib0move(&___nl__im__29,___get_global_string_const(795));
#line 436
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 436
c_rt_lib0clear(&___nl__im__26);
#line 436
c_rt_lib0clear(&___nl__im__29);
#line 436
c_rt_lib0clear(&___nl__im__0);
#line 436
c_rt_lib0clear(&___nl__im__1);
#line 436
c_rt_lib0clear(&___nl__im__15);
#line 436
//clear ___nl__bool__16;
#line 436
c_rt_lib0clear(&___nl__im__17);
#line 436
c_rt_lib0clear(&___nl__im__18);
#line 436
//clear ___nl__bool__23;
#line 436
return ___nl__im__25;
#line 437
goto label_120;
#line 437
label_104:
;
#line 438
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 438
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__1));
#line 438
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 438
c_rt_lib0clear(&___nl__im__31);
#line 438
c_rt_lib0clear(&___nl__im__32);
#line 438
c_rt_lib0clear(&___nl__im__0);
#line 438
c_rt_lib0clear(&___nl__im__1);
#line 438
c_rt_lib0clear(&___nl__im__15);
#line 438
//clear ___nl__bool__16;
#line 438
c_rt_lib0clear(&___nl__im__17);
#line 438
c_rt_lib0clear(&___nl__im__18);
#line 438
//clear ___nl__bool__23;
#line 438
c_rt_lib0clear(&___nl__im__25);
#line 438
return ___nl__im__30;
#line 439
goto label_120;
#line 439
label_120:
;
#line 439
//clear ___nl__bool__23;
#line 439
c_rt_lib0clear(&___nl__im__25);
#line 439
c_rt_lib0clear(&___nl__im__30);
#line 440
goto label_280;
#line 440
label_125:
;
#line 441
c_rt_lib0move(&___nl__im__34, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 441
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 441
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_register_value(___nl__im__1));
#line 441
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 441
c_rt_lib0clear(&___nl__im__36);
#line 441
c_rt_lib0clear(&___nl__im__37);
#line 441
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 441
c_rt_lib0clear(&___nl__im__34);
#line 441
c_rt_lib0clear(&___nl__im__35);
#line 441
c_rt_lib0clear(&___nl__im__0);
#line 441
c_rt_lib0clear(&___nl__im__1);
#line 441
c_rt_lib0clear(&___nl__im__15);
#line 441
//clear ___nl__bool__16;
#line 441
c_rt_lib0clear(&___nl__im__17);
#line 441
c_rt_lib0clear(&___nl__im__18);
#line 441
return ___nl__im__33;
#line 442
goto label_280;
#line 442
label_143:
;
#line 443
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 443
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(138));
#line 443
c_rt_lib0clear(&___nl__im__39);
#line 443
___nl__bool__38 = !___nl__bool__38;
#line 443
if(___nl__bool__38){ goto label_176;}
#line 444
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 444
c_rt_lib0move(&___nl__im__44,___get_global_string_const(280));
#line 444
c_rt_lib0move(&___nl__im__45,___get_global_string_const(609));
#line 444
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__1));
#line 444
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 444
c_rt_lib0clear(&___nl__im__47);
#line 444
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 444
c_rt_lib0clear(&___nl__im__44);
#line 444
c_rt_lib0clear(&___nl__im__45);
#line 444
c_rt_lib0clear(&___nl__im__46);
#line 444
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 444
c_rt_lib0clear(&___nl__im__42);
#line 444
c_rt_lib0clear(&___nl__im__43);
#line 444
c_rt_lib0move(&___nl__im__48,___get_global_string_const(450));
#line 444
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 444
c_rt_lib0clear(&___nl__im__41);
#line 444
c_rt_lib0clear(&___nl__im__48);
#line 444
c_rt_lib0clear(&___nl__im__0);
#line 444
c_rt_lib0clear(&___nl__im__1);
#line 444
c_rt_lib0clear(&___nl__im__15);
#line 444
//clear ___nl__bool__16;
#line 444
c_rt_lib0clear(&___nl__im__17);
#line 444
c_rt_lib0clear(&___nl__im__18);
#line 444
c_rt_lib0clear(&___nl__im__33);
#line 444
//clear ___nl__bool__38;
#line 444
return ___nl__im__40;
#line 445
goto label_193;
#line 445
label_176:
;
#line 446
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 446
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register_value(___nl__im__1));
#line 446
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 446
c_rt_lib0clear(&___nl__im__50);
#line 446
c_rt_lib0clear(&___nl__im__51);
#line 446
c_rt_lib0clear(&___nl__im__0);
#line 446
c_rt_lib0clear(&___nl__im__1);
#line 446
c_rt_lib0clear(&___nl__im__15);
#line 446
//clear ___nl__bool__16;
#line 446
c_rt_lib0clear(&___nl__im__17);
#line 446
c_rt_lib0clear(&___nl__im__18);
#line 446
c_rt_lib0clear(&___nl__im__33);
#line 446
//clear ___nl__bool__38;
#line 446
c_rt_lib0clear(&___nl__im__40);
#line 446
return ___nl__im__49;
#line 447
goto label_193;
#line 447
label_193:
;
#line 447
//clear ___nl__bool__38;
#line 447
c_rt_lib0clear(&___nl__im__40);
#line 447
c_rt_lib0clear(&___nl__im__49);
#line 448
goto label_280;
#line 448
label_198:
;
#line 448
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(567)));
#line 448
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 449
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 449
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(567));
#line 449
c_rt_lib0clear(&___nl__im__55);
#line 449
___nl__bool__54 = !___nl__bool__54;
#line 449
if(___nl__bool__54){ goto label_223;}
#line 450
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 450
c_rt_lib0move(&___nl__im__58, generator_js_priv0get_register_value(___nl__im__1));
#line 450
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 450
c_rt_lib0clear(&___nl__im__57);
#line 450
c_rt_lib0clear(&___nl__im__58);
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
c_rt_lib0clear(&___nl__im__52);
#line 450
c_rt_lib0clear(&___nl__im__53);
#line 450
//clear ___nl__bool__54;
#line 450
return ___nl__im__56;
#line 451
goto label_227;
#line 451
label_223:
;
#line 452
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 452
nl_die_arg(___nl__im__59);
#line 453
goto label_227;
#line 453
label_227:
;
#line 453
//clear ___nl__bool__54;
#line 453
c_rt_lib0clear(&___nl__im__56);
#line 453
c_rt_lib0clear(&___nl__im__59);
#line 454
goto label_280;
#line 454
label_232:
;
#line 454
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(134)));
#line 454
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 455
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 455
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(134));
#line 455
c_rt_lib0clear(&___nl__im__63);
#line 455
___nl__bool__62 = !___nl__bool__62;
#line 455
if(___nl__bool__62){ goto label_259;}
#line 456
c_rt_lib0move(&___nl__im__65, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 456
c_rt_lib0move(&___nl__im__66, generator_js_priv0get_register_value(___nl__im__1));
#line 456
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 456
c_rt_lib0clear(&___nl__im__65);
#line 456
c_rt_lib0clear(&___nl__im__66);
#line 456
c_rt_lib0clear(&___nl__im__0);
#line 456
c_rt_lib0clear(&___nl__im__1);
#line 456
c_rt_lib0clear(&___nl__im__15);
#line 456
//clear ___nl__bool__16;
#line 456
c_rt_lib0clear(&___nl__im__17);
#line 456
c_rt_lib0clear(&___nl__im__18);
#line 456
c_rt_lib0clear(&___nl__im__33);
#line 456
c_rt_lib0clear(&___nl__im__52);
#line 456
c_rt_lib0clear(&___nl__im__53);
#line 456
c_rt_lib0clear(&___nl__im__60);
#line 456
c_rt_lib0clear(&___nl__im__61);
#line 456
//clear ___nl__bool__62;
#line 456
return ___nl__im__64;
#line 457
goto label_263;
#line 457
label_259:
;
#line 458
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 458
nl_die_arg(___nl__im__67);
#line 459
goto label_263;
#line 459
label_263:
;
#line 459
//clear ___nl__bool__62;
#line 459
c_rt_lib0clear(&___nl__im__64);
#line 459
c_rt_lib0clear(&___nl__im__67);
#line 460
goto label_280;
#line 460
label_268:
;
#line 460
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(571)));
#line 460
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 461
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 461
nl_die_arg(___nl__im__70);
#line 462
goto label_280;
#line 462
label_274:
;
#line 462
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(135)));
#line 462
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 463
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 463
nl_die_arg(___nl__im__73);
#line 464
goto label_280;
#line 464
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
#line 468
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 468
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 468
if(___nl__bool__4){ goto label_20;}
#line 470
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(413));
#line 470
if(___nl__bool__4){ goto label_37;}
#line 472
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(414));
#line 472
if(___nl__bool__4){ goto label_53;}
#line 474
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 474
if(___nl__bool__4){ goto label_72;}
#line 476
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(567));
#line 476
if(___nl__bool__4){ goto label_99;}
#line 478
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(134));
#line 478
if(___nl__bool__4){ goto label_105;}
#line 480
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(571));
#line 480
if(___nl__bool__4){ goto label_111;}
#line 482
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(135));
#line 482
if(___nl__bool__4){ goto label_117;}
#line 482
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 482
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 482
nl_die_arg(___nl__im__5);
#line 468
label_20:
;
#line 469
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 469
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 469
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 469
c_rt_lib0clear(&___nl__im__8);
#line 469
c_rt_lib0clear(&___nl__im__9);
#line 469
c_rt_lib0move(&___nl__im__10,___get_global_string_const(450));
#line 469
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 469
c_rt_lib0clear(&___nl__im__7);
#line 469
c_rt_lib0clear(&___nl__im__10);
#line 469
c_rt_lib0clear(&___nl__im__0);
#line 469
c_rt_lib0clear(&___nl__im__1);
#line 469
c_rt_lib0clear(&___nl__im__3);
#line 469
//clear ___nl__bool__4;
#line 469
c_rt_lib0clear(&___nl__im__5);
#line 469
return ___nl__im__6;
#line 470
goto label_123;
#line 470
label_37:
;
#line 471
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 471
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 471
c_rt_lib0clear(&___nl__im__13);
#line 471
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 471
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 471
c_rt_lib0clear(&___nl__im__12);
#line 471
c_rt_lib0clear(&___nl__im__14);
#line 471
c_rt_lib0clear(&___nl__im__0);
#line 471
c_rt_lib0clear(&___nl__im__1);
#line 471
c_rt_lib0clear(&___nl__im__3);
#line 471
//clear ___nl__bool__4;
#line 471
c_rt_lib0clear(&___nl__im__5);
#line 471
c_rt_lib0clear(&___nl__im__6);
#line 471
return ___nl__im__11;
#line 472
goto label_123;
#line 472
label_53:
;
#line 473
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 473
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 473
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 473
c_rt_lib0clear(&___nl__im__17);
#line 473
c_rt_lib0clear(&___nl__im__18);
#line 473
c_rt_lib0move(&___nl__im__19,___get_global_string_const(450));
#line 473
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 473
c_rt_lib0clear(&___nl__im__16);
#line 473
c_rt_lib0clear(&___nl__im__19);
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
c_rt_lib0clear(&___nl__im__6);
#line 473
c_rt_lib0clear(&___nl__im__11);
#line 473
return ___nl__im__15;
#line 474
goto label_123;
#line 474
label_72:
;
#line 475
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 475
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 475
if(___nl__bool__24){ goto label_78;}
#line 475
c_rt_lib0move(&___nl__im__23,___get_global_string_const(580));
#line 475
goto label_80;
#line 475
label_78:
;
#line 475
c_rt_lib0move(&___nl__im__23,___get_global_string_const(581));
#line 475
label_80:
;
#line 475
//clear ___nl__bool__24;
#line 475
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 475
c_rt_lib0clear(&___nl__im__22);
#line 475
c_rt_lib0clear(&___nl__im__23);
#line 475
c_rt_lib0move(&___nl__im__25,___get_global_string_const(450));
#line 475
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 475
c_rt_lib0clear(&___nl__im__21);
#line 475
c_rt_lib0clear(&___nl__im__25);
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
c_rt_lib0clear(&___nl__im__11);
#line 475
c_rt_lib0clear(&___nl__im__15);
#line 475
return ___nl__im__20;
#line 476
goto label_123;
#line 476
label_99:
;
#line 476
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(567)));
#line 476
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 477
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 477
nl_die_arg(___nl__im__28);
#line 478
goto label_123;
#line 478
label_105:
;
#line 478
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(134)));
#line 478
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 479
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 479
nl_die_arg(___nl__im__31);
#line 480
goto label_123;
#line 480
label_111:
;
#line 480
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(571)));
#line 480
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 481
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 481
nl_die_arg(___nl__im__34);
#line 482
goto label_123;
#line 482
label_117:
;
#line 482
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(135)));
#line 482
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 483
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 483
nl_die_arg(___nl__im__37);
#line 484
goto label_123;
#line 484
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
#line 488
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 488
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(138));
#line 488
c_rt_lib0clear(&___nl__im__4);
#line 488
___nl__bool__3 = !___nl__bool__3;
#line 488
if(___nl__bool__3){ goto label_25;}
#line 489
c_rt_lib0move(&___nl__im__7,___get_global_string_const(280));
#line 489
c_rt_lib0move(&___nl__im__8,___get_global_string_const(252));
#line 490
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 490
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__1));
#line 490
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 490
c_rt_lib0clear(&___nl__im__10);
#line 490
c_rt_lib0clear(&___nl__im__11);
#line 490
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 490
c_rt_lib0clear(&___nl__im__7);
#line 490
c_rt_lib0clear(&___nl__im__8);
#line 490
c_rt_lib0clear(&___nl__im__9);
#line 490
c_rt_lib0move(&___nl__im__12,___get_global_string_const(450));
#line 490
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 490
c_rt_lib0clear(&___nl__im__6);
#line 490
c_rt_lib0clear(&___nl__im__12);
#line 490
c_rt_lib0clear(&___nl__im__0);
#line 490
c_rt_lib0clear(&___nl__im__1);
#line 490
//clear ___nl__bool__3;
#line 490
return ___nl__im__5;
#line 491
goto label_54;
#line 491
label_25:
;
#line 491
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 491
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(134));
#line 491
c_rt_lib0clear(&___nl__im__13);
#line 491
___nl__bool__3 = !___nl__bool__3;
#line 491
if(___nl__bool__3){ goto label_50;}
#line 492
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__0));
#line 492
c_rt_lib0move(&___nl__im__18,___get_global_string_const(796));
#line 492
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 492
c_rt_lib0clear(&___nl__im__17);
#line 492
c_rt_lib0clear(&___nl__im__18);
#line 492
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_reference(___nl__im__1));
#line 492
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 492
c_rt_lib0clear(&___nl__im__16);
#line 492
c_rt_lib0clear(&___nl__im__19);
#line 492
c_rt_lib0move(&___nl__im__20,___get_global_string_const(516));
#line 492
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 492
c_rt_lib0clear(&___nl__im__15);
#line 492
c_rt_lib0clear(&___nl__im__20);
#line 492
c_rt_lib0clear(&___nl__im__0);
#line 492
c_rt_lib0clear(&___nl__im__1);
#line 492
//clear ___nl__bool__3;
#line 492
c_rt_lib0clear(&___nl__im__5);
#line 492
return ___nl__im__14;
#line 493
goto label_54;
#line 493
label_50:
;
#line 494
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 494
nl_die_arg(___nl__im__21);
#line 495
goto label_54;
#line 495
label_54:
;
#line 495
//clear ___nl__bool__3;
#line 495
c_rt_lib0clear(&___nl__im__5);
#line 495
c_rt_lib0clear(&___nl__im__14);
#line 495
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
#line 499
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 499
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(138));
#line 499
c_rt_lib0clear(&___nl__im__4);
#line 499
___nl__bool__3 = !___nl__bool__3;
#line 499
if(___nl__bool__3){ goto label_29;}
#line 500
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 500
c_rt_lib0move(&___nl__im__9,___get_global_string_const(280));
#line 500
c_rt_lib0move(&___nl__im__10,___get_global_string_const(253));
#line 501
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__1));
#line 501
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__13));
#line 501
c_rt_lib0clear(&___nl__im__13);
#line 501
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 501
c_rt_lib0clear(&___nl__im__12);
#line 501
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 501
c_rt_lib0clear(&___nl__im__9);
#line 501
c_rt_lib0clear(&___nl__im__10);
#line 501
c_rt_lib0clear(&___nl__im__11);
#line 501
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 501
c_rt_lib0clear(&___nl__im__7);
#line 501
c_rt_lib0clear(&___nl__im__8);
#line 501
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 501
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 501
c_rt_lib0clear(&___nl__im__6);
#line 501
c_rt_lib0clear(&___nl__im__14);
#line 501
c_rt_lib0clear(&___nl__im__0);
#line 501
c_rt_lib0clear(&___nl__im__1);
#line 501
//clear ___nl__bool__3;
#line 501
return ___nl__im__5;
#line 502
goto label_54;
#line 502
label_29:
;
#line 502
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 502
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(134));
#line 502
c_rt_lib0clear(&___nl__im__15);
#line 502
___nl__bool__3 = !___nl__bool__3;
#line 502
if(___nl__bool__3){ goto label_50;}
#line 503
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 503
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__1));
#line 503
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 503
c_rt_lib0clear(&___nl__im__18);
#line 503
c_rt_lib0clear(&___nl__im__19);
#line 503
c_rt_lib0move(&___nl__im__20,___get_global_string_const(797));
#line 503
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 503
c_rt_lib0clear(&___nl__im__17);
#line 503
c_rt_lib0clear(&___nl__im__20);
#line 503
c_rt_lib0clear(&___nl__im__0);
#line 503
c_rt_lib0clear(&___nl__im__1);
#line 503
//clear ___nl__bool__3;
#line 503
c_rt_lib0clear(&___nl__im__5);
#line 503
return ___nl__im__16;
#line 504
goto label_54;
#line 504
label_50:
;
#line 505
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 505
nl_die_arg(___nl__im__21);
#line 506
goto label_54;
#line 506
label_54:
;
#line 506
//clear ___nl__bool__3;
#line 506
c_rt_lib0clear(&___nl__im__5);
#line 506
c_rt_lib0clear(&___nl__im__16);
#line 506
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
#line 510
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 510
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(215)));
#line 510
c_rt_lib0clear(&___nl__im__3);
#line 510
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(134));
#line 510
c_rt_lib0clear(&___nl__im__2);
#line 510
___nl__bool__1 = !___nl__bool__1;
#line 510
if(___nl__bool__1){ goto label_34;}
#line 511
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(369)));
#line 511
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_to_assign(___nl__im__9));
#line 511
c_rt_lib0clear(&___nl__im__9);
#line 511
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 511
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__11));
#line 511
c_rt_lib0clear(&___nl__im__11);
#line 511
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 511
c_rt_lib0clear(&___nl__im__8);
#line 511
c_rt_lib0clear(&___nl__im__10);
#line 511
c_rt_lib0move(&___nl__im__12,___get_global_string_const(325));
#line 511
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 511
c_rt_lib0clear(&___nl__im__7);
#line 511
c_rt_lib0clear(&___nl__im__12);
#line 512
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(371)));
#line 512
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__14));
#line 512
c_rt_lib0clear(&___nl__im__14);
#line 512
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 512
c_rt_lib0clear(&___nl__im__6);
#line 512
c_rt_lib0clear(&___nl__im__13);
#line 512
c_rt_lib0move(&___nl__im__15,___get_global_string_const(798));
#line 512
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 512
c_rt_lib0clear(&___nl__im__5);
#line 512
c_rt_lib0clear(&___nl__im__15);
#line 512
c_rt_lib0clear(&___nl__im__0);
#line 512
//clear ___nl__bool__1;
#line 512
return ___nl__im__4;
#line 513
goto label_74;
#line 513
label_34:
;
#line 513
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 513
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 513
c_rt_lib0clear(&___nl__im__17);
#line 513
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(138));
#line 513
c_rt_lib0clear(&___nl__im__16);
#line 513
___nl__bool__1 = !___nl__bool__1;
#line 513
if(___nl__bool__1){ goto label_70;}
#line 514
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(369)));
#line 514
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_to_assign(___nl__im__23));
#line 514
c_rt_lib0clear(&___nl__im__23);
#line 514
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 514
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 514
c_rt_lib0clear(&___nl__im__25);
#line 514
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 514
c_rt_lib0clear(&___nl__im__22);
#line 514
c_rt_lib0clear(&___nl__im__24);
#line 515
c_rt_lib0move(&___nl__im__26,___get_global_string_const(787));
#line 515
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 515
c_rt_lib0clear(&___nl__im__21);
#line 515
c_rt_lib0clear(&___nl__im__26);
#line 515
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(371)));
#line 515
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 515
c_rt_lib0clear(&___nl__im__28);
#line 515
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 515
c_rt_lib0clear(&___nl__im__20);
#line 515
c_rt_lib0clear(&___nl__im__27);
#line 515
c_rt_lib0move(&___nl__im__29,___get_global_string_const(516));
#line 515
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 515
c_rt_lib0clear(&___nl__im__19);
#line 515
c_rt_lib0clear(&___nl__im__29);
#line 515
c_rt_lib0clear(&___nl__im__0);
#line 515
//clear ___nl__bool__1;
#line 515
c_rt_lib0clear(&___nl__im__4);
#line 515
return ___nl__im__18;
#line 516
goto label_74;
#line 516
label_70:
;
#line 517
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 517
nl_die_arg(___nl__im__30);
#line 518
goto label_74;
#line 518
label_74:
;
#line 518
//clear ___nl__bool__1;
#line 518
c_rt_lib0clear(&___nl__im__4);
#line 518
c_rt_lib0clear(&___nl__im__18);
#line 518
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
#line 522
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 523
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(371)));
#line 523
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value(___nl__im__4));
#line 523
c_rt_lib0clear(&___nl__im__4);
#line 523
c_rt_lib0move(&___nl__im__5,___get_global_string_const(799));
#line 523
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 523
c_rt_lib0clear(&___nl__im__3);
#line 523
c_rt_lib0clear(&___nl__im__5);
#line 524
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(369)));
#line 524
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_to_assign(___nl__im__11));
#line 524
c_rt_lib0clear(&___nl__im__11);
#line 525
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 525
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_value(___nl__im__13));
#line 525
c_rt_lib0clear(&___nl__im__13);
#line 525
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 525
c_rt_lib0clear(&___nl__im__10);
#line 525
c_rt_lib0clear(&___nl__im__12);
#line 525
c_rt_lib0move(&___nl__im__14,___get_global_string_const(325));
#line 525
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 525
c_rt_lib0clear(&___nl__im__9);
#line 525
c_rt_lib0clear(&___nl__im__14);
#line 525
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__2));
#line 525
c_rt_lib0clear(&___nl__im__8);
#line 525
c_rt_lib0move(&___nl__im__15,___get_global_string_const(326));
#line 525
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 525
c_rt_lib0clear(&___nl__im__7);
#line 525
c_rt_lib0clear(&___nl__im__15);
#line 525
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 525
c_rt_lib0clear(&___nl__im__6);
#line 526
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(614)));
#line 526
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 526
c_rt_lib0clear(&___nl__im__17);
#line 526
___nl__bool__16 = !___nl__bool__16;
#line 526
if(___nl__bool__16){ goto label_38;}
#line 527
c_rt_lib0move(&___nl__im__18,___get_global_string_const(800));
#line 527
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__18));
#line 527
c_rt_lib0clear(&___nl__im__18);
#line 528
goto label_38;
#line 528
label_38:
;
#line 528
//clear ___nl__bool__16;
#line 529
c_rt_lib0move(&___nl__im__19,___get_global_string_const(450));
#line 529
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 529
c_rt_lib0clear(&___nl__im__19);
#line 530
c_rt_lib0clear(&___nl__im__0);
#line 530
c_rt_lib0clear(&___nl__im__2);
#line 530
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
#line 534
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 534
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 534
c_rt_lib0clear(&___nl__im__4);
#line 534
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 534
c_rt_lib0clear(&___nl__im__3);
#line 534
___nl__bool__2 = !___nl__bool__2;
#line 534
if(___nl__bool__2){ goto label_32;}
#line 535
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 535
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__8));
#line 535
c_rt_lib0clear(&___nl__im__8);
#line 536
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 536
c_rt_lib0move(&___nl__im__11,___get_global_string_const(281));
#line 536
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 536
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 536
c_rt_lib0clear(&___nl__im__14);
#line 536
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 536
c_rt_lib0clear(&___nl__im__13);
#line 536
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 536
c_rt_lib0clear(&___nl__im__10);
#line 536
c_rt_lib0clear(&___nl__im__11);
#line 536
c_rt_lib0clear(&___nl__im__12);
#line 536
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 536
c_rt_lib0clear(&___nl__im__7);
#line 536
c_rt_lib0clear(&___nl__im__9);
#line 536
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 536
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 536
c_rt_lib0clear(&___nl__im__6);
#line 536
c_rt_lib0clear(&___nl__im__15);
#line 536
c_rt_lib0clear(&___nl__im__0);
#line 536
//clear ___nl__bool__2;
#line 536
return ___nl__im__5;
#line 537
goto label_56;
#line 537
label_32:
;
#line 537
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 537
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 537
c_rt_lib0clear(&___nl__im__17);
#line 537
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 537
c_rt_lib0clear(&___nl__im__16);
#line 537
___nl__bool__2 = !___nl__bool__2;
#line 537
if(___nl__bool__2){ goto label_52;}
#line 538
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 538
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 538
c_rt_lib0clear(&___nl__im__20);
#line 538
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 538
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 538
c_rt_lib0clear(&___nl__im__19);
#line 538
c_rt_lib0clear(&___nl__im__21);
#line 538
c_rt_lib0clear(&___nl__im__0);
#line 538
//clear ___nl__bool__2;
#line 538
c_rt_lib0clear(&___nl__im__5);
#line 538
return ___nl__im__18;
#line 539
goto label_56;
#line 539
label_52:
;
#line 540
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 540
nl_die_arg(___nl__im__22);
#line 541
goto label_56;
#line 541
label_56:
;
#line 541
//clear ___nl__bool__2;
#line 541
c_rt_lib0clear(&___nl__im__5);
#line 541
c_rt_lib0clear(&___nl__im__18);
#line 541
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
#line 545
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 545
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 545
c_rt_lib0clear(&___nl__im__4);
#line 545
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 545
c_rt_lib0clear(&___nl__im__3);
#line 545
___nl__bool__2 = !___nl__bool__2;
#line 545
if(___nl__bool__2){ goto label_32;}
#line 546
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 546
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 546
c_rt_lib0clear(&___nl__im__8);
#line 547
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 547
c_rt_lib0move(&___nl__im__11,___get_global_string_const(284));
#line 547
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 547
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 547
c_rt_lib0clear(&___nl__im__14);
#line 547
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 547
c_rt_lib0clear(&___nl__im__13);
#line 547
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 547
c_rt_lib0clear(&___nl__im__10);
#line 547
c_rt_lib0clear(&___nl__im__11);
#line 547
c_rt_lib0clear(&___nl__im__12);
#line 547
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 547
c_rt_lib0clear(&___nl__im__7);
#line 547
c_rt_lib0clear(&___nl__im__9);
#line 547
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 547
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 547
c_rt_lib0clear(&___nl__im__6);
#line 547
c_rt_lib0clear(&___nl__im__15);
#line 547
c_rt_lib0clear(&___nl__im__0);
#line 547
//clear ___nl__bool__2;
#line 547
return ___nl__im__5;
#line 548
goto label_56;
#line 548
label_32:
;
#line 548
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 548
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 548
c_rt_lib0clear(&___nl__im__17);
#line 548
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 548
c_rt_lib0clear(&___nl__im__16);
#line 548
___nl__bool__2 = !___nl__bool__2;
#line 548
if(___nl__bool__2){ goto label_52;}
#line 549
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 549
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 549
c_rt_lib0clear(&___nl__im__20);
#line 549
c_rt_lib0move(&___nl__im__21,___get_global_string_const(801));
#line 549
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 549
c_rt_lib0clear(&___nl__im__19);
#line 549
c_rt_lib0clear(&___nl__im__21);
#line 549
c_rt_lib0clear(&___nl__im__0);
#line 549
//clear ___nl__bool__2;
#line 549
c_rt_lib0clear(&___nl__im__5);
#line 549
return ___nl__im__18;
#line 550
goto label_56;
#line 550
label_52:
;
#line 551
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 551
nl_die_arg(___nl__im__22);
#line 552
goto label_56;
#line 552
label_56:
;
#line 552
//clear ___nl__bool__2;
#line 552
c_rt_lib0clear(&___nl__im__5);
#line 552
c_rt_lib0clear(&___nl__im__18);
#line 552
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
#line 556
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 556
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 556
c_rt_lib0clear(&___nl__im__4);
#line 556
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 556
c_rt_lib0clear(&___nl__im__3);
#line 556
___nl__bool__2 = !___nl__bool__2;
#line 556
if(___nl__bool__2){ goto label_32;}
#line 557
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 557
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 557
c_rt_lib0clear(&___nl__im__8);
#line 558
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 558
c_rt_lib0move(&___nl__im__11,___get_global_string_const(283));
#line 558
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 558
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 558
c_rt_lib0clear(&___nl__im__14);
#line 558
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 558
c_rt_lib0clear(&___nl__im__13);
#line 558
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 558
c_rt_lib0clear(&___nl__im__10);
#line 558
c_rt_lib0clear(&___nl__im__11);
#line 558
c_rt_lib0clear(&___nl__im__12);
#line 558
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 558
c_rt_lib0clear(&___nl__im__7);
#line 558
c_rt_lib0clear(&___nl__im__9);
#line 558
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 558
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 558
c_rt_lib0clear(&___nl__im__6);
#line 558
c_rt_lib0clear(&___nl__im__15);
#line 558
c_rt_lib0clear(&___nl__im__0);
#line 558
//clear ___nl__bool__2;
#line 558
return ___nl__im__5;
#line 559
goto label_82;
#line 559
label_32:
;
#line 559
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 559
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 559
c_rt_lib0clear(&___nl__im__17);
#line 559
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 559
c_rt_lib0clear(&___nl__im__16);
#line 559
___nl__bool__2 = !___nl__bool__2;
#line 559
if(___nl__bool__2){ goto label_78;}
#line 560
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 560
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value(___nl__im__19));
#line 560
c_rt_lib0clear(&___nl__im__19);
#line 561
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 561
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_value_to_assign(___nl__im__27));
#line 561
c_rt_lib0clear(&___nl__im__27);
#line 562
c_rt_lib0move(&___nl__im__29,___get_global_string_const(291));
#line 562
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 562
c_rt_lib0clear(&___nl__im__29);
#line 562
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 562
c_rt_lib0clear(&___nl__im__26);
#line 562
c_rt_lib0clear(&___nl__im__28);
#line 562
c_rt_lib0move(&___nl__im__30,___get_global_string_const(802));
#line 562
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 562
c_rt_lib0clear(&___nl__im__25);
#line 562
c_rt_lib0clear(&___nl__im__30);
#line 562
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 562
c_rt_lib0clear(&___nl__im__24);
#line 562
c_rt_lib0move(&___nl__im__31,___get_global_string_const(803));
#line 562
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 562
c_rt_lib0clear(&___nl__im__23);
#line 562
c_rt_lib0clear(&___nl__im__31);
#line 562
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 562
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__33));
#line 562
c_rt_lib0clear(&___nl__im__33);
#line 562
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 562
c_rt_lib0clear(&___nl__im__22);
#line 562
c_rt_lib0clear(&___nl__im__32);
#line 562
c_rt_lib0move(&___nl__im__34,___get_global_string_const(804));
#line 562
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 562
c_rt_lib0clear(&___nl__im__21);
#line 562
c_rt_lib0clear(&___nl__im__34);
#line 562
c_rt_lib0clear(&___nl__im__0);
#line 562
//clear ___nl__bool__2;
#line 562
c_rt_lib0clear(&___nl__im__5);
#line 562
c_rt_lib0clear(&___nl__im__18);
#line 562
return ___nl__im__20;
#line 563
goto label_82;
#line 563
label_78:
;
#line 564
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 564
nl_die_arg(___nl__im__35);
#line 565
goto label_82;
#line 565
label_82:
;
#line 565
//clear ___nl__bool__2;
#line 565
c_rt_lib0clear(&___nl__im__5);
#line 565
c_rt_lib0clear(&___nl__im__18);
#line 565
c_rt_lib0clear(&___nl__im__20);
#line 565
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
#line 569
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 569
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 569
c_rt_lib0clear(&___nl__im__4);
#line 569
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 569
c_rt_lib0clear(&___nl__im__3);
#line 569
___nl__bool__2 = !___nl__bool__2;
#line 569
if(___nl__bool__2){ goto label_32;}
#line 570
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 570
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 570
c_rt_lib0clear(&___nl__im__8);
#line 571
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 571
c_rt_lib0move(&___nl__im__11,___get_global_string_const(282));
#line 571
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 571
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 571
c_rt_lib0clear(&___nl__im__14);
#line 571
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 571
c_rt_lib0clear(&___nl__im__13);
#line 571
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 571
c_rt_lib0clear(&___nl__im__10);
#line 571
c_rt_lib0clear(&___nl__im__11);
#line 571
c_rt_lib0clear(&___nl__im__12);
#line 571
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 571
c_rt_lib0clear(&___nl__im__7);
#line 571
c_rt_lib0clear(&___nl__im__9);
#line 571
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 571
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 571
c_rt_lib0clear(&___nl__im__6);
#line 571
c_rt_lib0clear(&___nl__im__15);
#line 571
c_rt_lib0clear(&___nl__im__0);
#line 571
//clear ___nl__bool__2;
#line 571
return ___nl__im__5;
#line 572
goto label_72;
#line 572
label_32:
;
#line 572
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 572
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 572
c_rt_lib0clear(&___nl__im__17);
#line 572
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 572
c_rt_lib0clear(&___nl__im__16);
#line 572
___nl__bool__2 = !___nl__bool__2;
#line 572
if(___nl__bool__2){ goto label_68;}
#line 573
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 573
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__23));
#line 573
c_rt_lib0clear(&___nl__im__23);
#line 574
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 574
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 574
c_rt_lib0clear(&___nl__im__25);
#line 574
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 574
c_rt_lib0clear(&___nl__im__22);
#line 574
c_rt_lib0clear(&___nl__im__24);
#line 574
c_rt_lib0move(&___nl__im__26,___get_global_string_const(805));
#line 574
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 574
c_rt_lib0clear(&___nl__im__21);
#line 574
c_rt_lib0clear(&___nl__im__26);
#line 574
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 574
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 574
c_rt_lib0clear(&___nl__im__28);
#line 574
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 574
c_rt_lib0clear(&___nl__im__20);
#line 574
c_rt_lib0clear(&___nl__im__27);
#line 574
c_rt_lib0move(&___nl__im__29,___get_global_string_const(806));
#line 574
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 574
c_rt_lib0clear(&___nl__im__19);
#line 574
c_rt_lib0clear(&___nl__im__29);
#line 574
c_rt_lib0clear(&___nl__im__0);
#line 574
//clear ___nl__bool__2;
#line 574
c_rt_lib0clear(&___nl__im__5);
#line 574
return ___nl__im__18;
#line 575
goto label_72;
#line 575
label_68:
;
#line 576
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 576
nl_die_arg(___nl__im__30);
#line 577
goto label_72;
#line 577
label_72:
;
#line 577
//clear ___nl__bool__2;
#line 577
c_rt_lib0clear(&___nl__im__5);
#line 577
c_rt_lib0clear(&___nl__im__18);
#line 577
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
#line 581
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 582
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 582
___nl__bool__3 = !___nl__bool__3;
#line 582
if(___nl__bool__3){ goto label_36;}
#line 583
c_rt_lib0move(&___nl__im__6,___get_global_string_const(134));
#line 583
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 583
c_rt_lib0clear(&___nl__im__6);
#line 583
c_rt_lib0move(&___nl__im__7,___get_global_string_const(807));
#line 583
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 583
c_rt_lib0clear(&___nl__im__5);
#line 583
c_rt_lib0clear(&___nl__im__7);
#line 583
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 583
c_rt_lib0clear(&___nl__im__4);
#line 584
___nl__int__9 = 0;
#line 584
___nl__int__10 = 1;
#line 584
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 584
label_16:
;
#line 584
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 584
if(___nl__bool__12){ goto label_31;}
#line 584
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 584
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 584
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_register_value(___nl__im__8));
#line 584
c_rt_lib0move(&___nl__im__16,___get_global_string_const(323));
#line 584
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 584
c_rt_lib0clear(&___nl__im__15);
#line 584
c_rt_lib0clear(&___nl__im__16);
#line 584
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 584
c_rt_lib0clear(&___nl__im__14);
#line 584
c_rt_lib0clear(&___nl__im__8);
#line 584
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 584
goto label_16;
#line 584
label_31:
;
#line 585
c_rt_lib0move(&___nl__im__17,___get_global_string_const(508));
#line 585
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 585
c_rt_lib0clear(&___nl__im__17);
#line 586
goto label_70;
#line 586
label_36:
;
#line 586
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(134));
#line 586
___nl__bool__3 = !___nl__bool__3;
#line 586
if(___nl__bool__3){ goto label_66;}
#line 587
c_rt_lib0move(&___nl__im__18,___get_global_string_const(325));
#line 587
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 587
c_rt_lib0clear(&___nl__im__18);
#line 588
___nl__int__20 = 0;
#line 588
___nl__int__21 = 1;
#line 588
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 588
label_46:
;
#line 588
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 588
if(___nl__bool__23){ goto label_61;}
#line 588
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 588
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 588
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_reference(___nl__im__19));
#line 588
c_rt_lib0move(&___nl__im__27,___get_global_string_const(323));
#line 588
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 588
c_rt_lib0clear(&___nl__im__26);
#line 588
c_rt_lib0clear(&___nl__im__27);
#line 588
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 588
c_rt_lib0clear(&___nl__im__25);
#line 588
c_rt_lib0clear(&___nl__im__19);
#line 588
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 588
goto label_46;
#line 588
label_61:
;
#line 589
c_rt_lib0move(&___nl__im__28,___get_global_string_const(326));
#line 589
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 589
c_rt_lib0clear(&___nl__im__28);
#line 590
goto label_70;
#line 590
label_66:
;
#line 591
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 591
nl_die_arg(___nl__im__29);
#line 592
goto label_70;
#line 592
label_70:
;
#line 592
//clear ___nl__bool__3;
#line 592
c_rt_lib0clear(&___nl__im__8);
#line 592
//clear ___nl__int__9;
#line 592
//clear ___nl__int__10;
#line 592
//clear ___nl__int__11;
#line 592
//clear ___nl__bool__12;
#line 592
c_rt_lib0clear(&___nl__im__13);
#line 592
c_rt_lib0clear(&___nl__im__19);
#line 592
//clear ___nl__int__20;
#line 592
//clear ___nl__int__21;
#line 592
//clear ___nl__int__22;
#line 592
//clear ___nl__bool__23;
#line 592
c_rt_lib0clear(&___nl__im__24);
#line 592
c_rt_lib0clear(&___nl__im__29);
#line 593
c_rt_lib0clear(&___nl__im__0);
#line 593
c_rt_lib0clear(&___nl__im__1);
#line 593
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
#line 597
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 597
c_rt_lib0move(&___nl__im__4,___get_global_string_const(808));
#line 597
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 597
c_rt_lib0clear(&___nl__im__3);
#line 597
c_rt_lib0clear(&___nl__im__4);
#line 597
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 597
c_rt_lib0clear(&___nl__im__2);
#line 597
c_rt_lib0clear(&___nl__im__0);
#line 597
return ___nl__im__1;
#line 597
c_rt_lib0clear(&___nl__im__0);
#line 597
c_rt_lib0clear(&___nl__im__1);
#line 597
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
#line 601
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 601
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 601
c_rt_lib0clear(&___nl__im__3);
#line 602
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 602
c_rt_lib0move(&___nl__im__6,___get_global_string_const(397));
#line 602
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 602
c_rt_lib0clear(&___nl__im__5);
#line 602
c_rt_lib0clear(&___nl__im__6);
#line 602
if(___nl__bool__4){ goto label_14;}
#line 602
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 602
c_rt_lib0move(&___nl__im__8,___get_global_string_const(387));
#line 602
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 602
c_rt_lib0clear(&___nl__im__7);
#line 602
c_rt_lib0clear(&___nl__im__8);
#line 602
label_14:
;
#line 602
if(___nl__bool__4){ goto label_21;}
#line 602
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 602
c_rt_lib0move(&___nl__im__10,___get_global_string_const(389));
#line 602
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 602
c_rt_lib0clear(&___nl__im__9);
#line 602
c_rt_lib0clear(&___nl__im__10);
#line 602
label_21:
;
#line 602
if(___nl__bool__4){ goto label_28;}
#line 602
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 602
c_rt_lib0move(&___nl__im__12,___get_global_string_const(395));
#line 602
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 602
c_rt_lib0clear(&___nl__im__11);
#line 602
c_rt_lib0clear(&___nl__im__12);
#line 602
label_28:
;
#line 602
if(___nl__bool__4){ goto label_35;}
#line 602
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 602
c_rt_lib0move(&___nl__im__14,___get_global_string_const(391));
#line 602
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 602
c_rt_lib0clear(&___nl__im__13);
#line 602
c_rt_lib0clear(&___nl__im__14);
#line 602
label_35:
;
#line 602
if(___nl__bool__4){ goto label_42;}
#line 603
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 603
c_rt_lib0move(&___nl__im__16,___get_global_string_const(393));
#line 603
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 603
c_rt_lib0clear(&___nl__im__15);
#line 603
c_rt_lib0clear(&___nl__im__16);
#line 603
label_42:
;
#line 603
___nl__bool__4 = !___nl__bool__4;
#line 603
if(___nl__bool__4){ goto label_69;}
#line 604
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 604
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__18));
#line 604
c_rt_lib0clear(&___nl__im__18);
#line 605
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 605
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 605
c_rt_lib0clear(&___nl__im__20);
#line 606
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 606
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 606
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 606
c_rt_lib0clear(&___nl__im__24);
#line 606
c_rt_lib0clear(&___nl__im__25);
#line 606
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 606
c_rt_lib0clear(&___nl__im__23);
#line 606
c_rt_lib0move(&___nl__im__26,___get_global_string_const(450));
#line 606
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 606
c_rt_lib0clear(&___nl__im__22);
#line 606
c_rt_lib0clear(&___nl__im__26);
#line 606
c_rt_lib0clear(&___nl__im__0);
#line 606
c_rt_lib0clear(&___nl__im__2);
#line 606
//clear ___nl__bool__4;
#line 606
c_rt_lib0clear(&___nl__im__17);
#line 606
c_rt_lib0clear(&___nl__im__19);
#line 606
return ___nl__im__21;
#line 607
goto label_181;
#line 607
label_69:
;
#line 607
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 607
c_rt_lib0move(&___nl__im__28,___get_global_string_const(379));
#line 607
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 607
c_rt_lib0clear(&___nl__im__27);
#line 607
c_rt_lib0clear(&___nl__im__28);
#line 607
if(___nl__bool__4){ goto label_81;}
#line 607
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 607
c_rt_lib0move(&___nl__im__30,___get_global_string_const(380));
#line 607
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 607
c_rt_lib0clear(&___nl__im__29);
#line 607
c_rt_lib0clear(&___nl__im__30);
#line 607
label_81:
;
#line 607
___nl__bool__4 = !___nl__bool__4;
#line 607
if(___nl__bool__4){ goto label_105;}
#line 608
c_rt_lib0move(&___nl__im__33,___get_global_string_const(280));
#line 608
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 608
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 608
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 608
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 608
c_rt_lib0clear(&___nl__im__36);
#line 608
c_rt_lib0clear(&___nl__im__37);
#line 608
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 608
c_rt_lib0clear(&___nl__im__33);
#line 608
c_rt_lib0clear(&___nl__im__34);
#line 608
c_rt_lib0clear(&___nl__im__35);
#line 608
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 608
c_rt_lib0clear(&___nl__im__32);
#line 608
c_rt_lib0clear(&___nl__im__0);
#line 608
c_rt_lib0clear(&___nl__im__2);
#line 608
//clear ___nl__bool__4;
#line 608
c_rt_lib0clear(&___nl__im__17);
#line 608
c_rt_lib0clear(&___nl__im__19);
#line 608
c_rt_lib0clear(&___nl__im__21);
#line 608
return ___nl__im__31;
#line 609
goto label_181;
#line 609
label_105:
;
#line 609
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 609
c_rt_lib0move(&___nl__im__39,___get_global_string_const(115));
#line 609
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 609
c_rt_lib0clear(&___nl__im__38);
#line 609
c_rt_lib0clear(&___nl__im__39);
#line 609
___nl__bool__4 = !___nl__bool__4;
#line 609
if(___nl__bool__4){ goto label_147;}
#line 610
c_rt_lib0move(&___nl__im__43,___get_global_string_const(280));
#line 610
c_rt_lib0move(&___nl__im__44,___get_global_string_const(809));
#line 611
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 611
c_rt_lib0move(&___nl__im__47, generator_js_priv0get_register_value(___nl__im__48));
#line 611
c_rt_lib0clear(&___nl__im__48);
#line 611
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__47));
#line 611
c_rt_lib0clear(&___nl__im__47);
#line 611
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 611
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value(___nl__im__51));
#line 611
c_rt_lib0clear(&___nl__im__51);
#line 611
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__50));
#line 611
c_rt_lib0clear(&___nl__im__50);
#line 611
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 611
c_rt_lib0clear(&___nl__im__46);
#line 611
c_rt_lib0clear(&___nl__im__49);
#line 611
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 611
c_rt_lib0clear(&___nl__im__43);
#line 611
c_rt_lib0clear(&___nl__im__44);
#line 611
c_rt_lib0clear(&___nl__im__45);
#line 611
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 611
c_rt_lib0clear(&___nl__im__42);
#line 611
c_rt_lib0move(&___nl__im__52,___get_global_string_const(450));
#line 611
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 611
c_rt_lib0clear(&___nl__im__41);
#line 611
c_rt_lib0clear(&___nl__im__52);
#line 611
c_rt_lib0clear(&___nl__im__0);
#line 611
c_rt_lib0clear(&___nl__im__2);
#line 611
//clear ___nl__bool__4;
#line 611
c_rt_lib0clear(&___nl__im__17);
#line 611
c_rt_lib0clear(&___nl__im__19);
#line 611
c_rt_lib0clear(&___nl__im__21);
#line 611
c_rt_lib0clear(&___nl__im__31);
#line 611
return ___nl__im__40;
#line 612
goto label_181;
#line 612
label_147:
;
#line 613
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 613
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register_value(___nl__im__54));
#line 613
c_rt_lib0clear(&___nl__im__54);
#line 614
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 614
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value(___nl__im__56));
#line 614
c_rt_lib0clear(&___nl__im__56);
#line 615
c_rt_lib0move(&___nl__im__62,___get_global_string_const(810));
#line 615
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 615
c_rt_lib0clear(&___nl__im__62);
#line 615
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 615
c_rt_lib0clear(&___nl__im__61);
#line 615
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 615
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 615
c_rt_lib0clear(&___nl__im__60);
#line 615
c_rt_lib0clear(&___nl__im__63);
#line 615
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 615
c_rt_lib0clear(&___nl__im__59);
#line 615
c_rt_lib0move(&___nl__im__64,___get_global_string_const(516));
#line 615
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 615
c_rt_lib0clear(&___nl__im__58);
#line 615
c_rt_lib0clear(&___nl__im__64);
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
c_rt_lib0clear(&___nl__im__40);
#line 615
c_rt_lib0clear(&___nl__im__53);
#line 615
c_rt_lib0clear(&___nl__im__55);
#line 615
return ___nl__im__57;
#line 616
goto label_181;
#line 616
label_181:
;
#line 616
//clear ___nl__bool__4;
#line 616
c_rt_lib0clear(&___nl__im__17);
#line 616
c_rt_lib0clear(&___nl__im__19);
#line 616
c_rt_lib0clear(&___nl__im__21);
#line 616
c_rt_lib0clear(&___nl__im__31);
#line 616
c_rt_lib0clear(&___nl__im__40);
#line 616
c_rt_lib0clear(&___nl__im__53);
#line 616
c_rt_lib0clear(&___nl__im__55);
#line 616
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
#line 622
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 622
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 622
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 622
c_rt_lib0clear(&___nl__im__7);
#line 622
c_rt_lib0clear(&___nl__im__8);
#line 622
c_rt_lib0move(&___nl__im__9,___get_global_string_const(465));
#line 622
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 622
c_rt_lib0clear(&___nl__im__6);
#line 622
c_rt_lib0clear(&___nl__im__9);
#line 623
___nl__int__10 = 0;
#line 624
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 625
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 626
___nl__int__14 = 0;
#line 626
___nl__int__15 = 1;
#line 626
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 626
label_15:
;
#line 626
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 626
if(___nl__bool__17){ goto label_58;}
#line 626
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 626
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 627
___nl__int__20 = 0;
#line 627
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 627
//clear ___nl__int__20;
#line 627
___nl__bool__19 = !___nl__bool__19;
#line 627
___nl__bool__19 = !___nl__bool__19;
#line 627
if(___nl__bool__19){ goto label_30;}
#line 627
c_rt_lib0move(&___nl__im__21,___get_global_string_const(323));
#line 627
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 627
c_rt_lib0clear(&___nl__im__21);
#line 627
goto label_30;
#line 627
label_30:
;
#line 627
//clear ___nl__bool__19;
#line 628
___nl__int__22 = 1;
#line 628
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 628
//clear ___nl__int__22;
#line 629
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 629
if(___nl__bool__23){ goto label_42;}
#line 631
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(234));
#line 631
if(___nl__bool__23){ goto label_47;}
#line 631
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 631
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 631
nl_die_arg(___nl__im__24);
#line 629
label_42:
;
#line 629
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 629
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 630
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 631
goto label_54;
#line 631
label_47:
;
#line 631
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(234)));
#line 631
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 632
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value(___nl__im__27));
#line 632
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 632
c_rt_lib0clear(&___nl__im__29);
#line 633
goto label_54;
#line 633
label_54:
;
#line 633
c_rt_lib0clear(&___nl__im__13);
#line 634
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 634
goto label_15;
#line 634
label_58:
;
#line 635
___nl__int__30 = 1;
#line 635
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 635
//clear ___nl__int__30;
#line 636
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 636
c_rt_lib0move(&___nl__im__34,___get_global_string_const(516));
#line 636
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 636
c_rt_lib0clear(&___nl__im__33);
#line 636
c_rt_lib0clear(&___nl__im__34);
#line 636
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 636
c_rt_lib0clear(&___nl__im__32);
#line 636
c_rt_lib0clear(&___nl__im__0);
#line 636
c_rt_lib0clear(&___nl__im__1);
#line 636
c_rt_lib0clear(&___nl__im__2);
#line 636
c_rt_lib0clear(&___nl__im__3);
#line 636
c_rt_lib0clear(&___nl__im__5);
#line 636
//clear ___nl__int__10;
#line 636
c_rt_lib0clear(&___nl__im__11);
#line 636
c_rt_lib0clear(&___nl__im__12);
#line 636
c_rt_lib0clear(&___nl__im__13);
#line 636
//clear ___nl__int__14;
#line 636
//clear ___nl__int__15;
#line 636
//clear ___nl__int__16;
#line 636
//clear ___nl__bool__17;
#line 636
c_rt_lib0clear(&___nl__im__18);
#line 636
//clear ___nl__bool__23;
#line 636
c_rt_lib0clear(&___nl__im__24);
#line 636
c_rt_lib0clear(&___nl__im__25);
#line 636
c_rt_lib0clear(&___nl__im__26);
#line 636
c_rt_lib0clear(&___nl__im__27);
#line 636
c_rt_lib0clear(&___nl__im__28);
#line 636
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
#line 641
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 641
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value_to_assign(___nl__im__4));
#line 641
c_rt_lib0clear(&___nl__im__4);
#line 642
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 642
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(215)));
#line 642
c_rt_lib0clear(&___nl__im__7);
#line 642
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(138));
#line 642
c_rt_lib0clear(&___nl__im__6);
#line 642
___nl__bool__5 = !___nl__bool__5;
#line 642
if(___nl__bool__5){ goto label_73;}
#line 643
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 643
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(288));
#line 643
if(___nl__bool__9){ goto label_18;}
#line 646
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(360));
#line 646
if(___nl__bool__9){ goto label_52;}
#line 646
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 646
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 646
nl_die_arg(___nl__im__10);
#line 643
label_18:
;
#line 643
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(288)));
#line 643
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 644
c_rt_lib0move(&___nl__im__16,___get_global_string_const(280));
#line 644
c_rt_lib0move(&___nl__im__17,___get_global_string_const(588));
#line 645
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 645
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 645
c_rt_lib0clear(&___nl__im__21);
#line 645
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__20));
#line 645
c_rt_lib0clear(&___nl__im__20);
#line 645
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__11));
#line 645
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 645
c_rt_lib0clear(&___nl__im__19);
#line 645
c_rt_lib0clear(&___nl__im__22);
#line 645
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 645
c_rt_lib0clear(&___nl__im__16);
#line 645
c_rt_lib0clear(&___nl__im__17);
#line 645
c_rt_lib0clear(&___nl__im__18);
#line 645
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 645
c_rt_lib0clear(&___nl__im__15);
#line 645
c_rt_lib0move(&___nl__im__23,___get_global_string_const(450));
#line 645
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 645
c_rt_lib0clear(&___nl__im__14);
#line 645
c_rt_lib0clear(&___nl__im__23);
#line 645
c_rt_lib0clear(&___nl__im__0);
#line 645
c_rt_lib0clear(&___nl__im__3);
#line 645
//clear ___nl__bool__5;
#line 645
c_rt_lib0clear(&___nl__im__8);
#line 645
//clear ___nl__bool__9;
#line 645
c_rt_lib0clear(&___nl__im__10);
#line 645
c_rt_lib0clear(&___nl__im__11);
#line 645
c_rt_lib0clear(&___nl__im__12);
#line 645
return ___nl__im__13;
#line 646
goto label_71;
#line 646
label_52:
;
#line 647
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 647
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 647
c_rt_lib0clear(&___nl__im__27);
#line 647
c_rt_lib0move(&___nl__im__25, generator_js_priv0get_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 647
c_rt_lib0clear(&___nl__im__26);
#line 647
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 647
c_rt_lib0clear(&___nl__im__25);
#line 647
c_rt_lib0clear(&___nl__im__0);
#line 647
c_rt_lib0clear(&___nl__im__3);
#line 647
//clear ___nl__bool__5;
#line 647
c_rt_lib0clear(&___nl__im__8);
#line 647
//clear ___nl__bool__9;
#line 647
c_rt_lib0clear(&___nl__im__10);
#line 647
c_rt_lib0clear(&___nl__im__11);
#line 647
c_rt_lib0clear(&___nl__im__12);
#line 647
c_rt_lib0clear(&___nl__im__13);
#line 647
return ___nl__im__24;
#line 648
goto label_71;
#line 648
label_71:
;
#line 649
goto label_137;
#line 649
label_73:
;
#line 649
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 649
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(215)));
#line 649
c_rt_lib0clear(&___nl__im__29);
#line 649
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(571));
#line 649
c_rt_lib0clear(&___nl__im__28);
#line 649
___nl__bool__5 = !___nl__bool__5;
#line 649
if(___nl__bool__5){ goto label_133;}
#line 650
c_rt_lib0move(&___nl__im__31,___get_global_string_const(811));
#line 650
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
#line 650
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 650
c_rt_lib0clear(&___nl__im__33);
#line 650
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 650
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 650
c_rt_lib0clear(&___nl__im__31);
#line 650
//clear ___nl__int__32;
#line 650
c_rt_lib0clear(&___nl__string__34);
#line 650
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 650
c_rt_lib0clear(&___nl__im__30);
#line 651
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 651
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(288));
#line 651
if(___nl__bool__36){ goto label_100;}
#line 653
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(360));
#line 653
if(___nl__bool__36){ goto label_111;}
#line 653
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 653
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 653
nl_die_arg(___nl__im__37);
#line 651
label_100:
;
#line 651
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(288)));
#line 651
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 652
c_rt_lib0move(&___nl__im__41,___get_global_string_const(812));
#line 652
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_reference(___nl__im__38));
#line 652
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 652
c_rt_lib0clear(&___nl__im__41);
#line 652
c_rt_lib0clear(&___nl__im__42);
#line 652
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 652
c_rt_lib0clear(&___nl__im__40);
#line 653
goto label_113;
#line 653
label_111:
;
#line 654
goto label_113;
#line 654
label_113:
;
#line 655
c_rt_lib0move(&___nl__im__43,___get_global_string_const(316));
#line 655
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 655
c_rt_lib0clear(&___nl__im__43);
#line 656
c_rt_lib0clear(&___nl__im__0);
#line 656
//clear ___nl__bool__5;
#line 656
c_rt_lib0clear(&___nl__im__8);
#line 656
//clear ___nl__bool__9;
#line 656
c_rt_lib0clear(&___nl__im__10);
#line 656
c_rt_lib0clear(&___nl__im__11);
#line 656
c_rt_lib0clear(&___nl__im__12);
#line 656
c_rt_lib0clear(&___nl__im__13);
#line 656
c_rt_lib0clear(&___nl__im__24);
#line 656
c_rt_lib0clear(&___nl__im__35);
#line 656
//clear ___nl__bool__36;
#line 656
c_rt_lib0clear(&___nl__im__37);
#line 656
c_rt_lib0clear(&___nl__im__38);
#line 656
c_rt_lib0clear(&___nl__im__39);
#line 656
return ___nl__im__3;
#line 657
goto label_137;
#line 657
label_133:
;
#line 658
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 658
nl_die_arg(___nl__im__44);
#line 659
goto label_137;
#line 659
label_137:
;
#line 659
//clear ___nl__bool__5;
#line 659
c_rt_lib0clear(&___nl__im__8);
#line 659
//clear ___nl__bool__9;
#line 659
c_rt_lib0clear(&___nl__im__10);
#line 659
c_rt_lib0clear(&___nl__im__11);
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
c_rt_lib0clear(&___nl__im__13);
#line 659
c_rt_lib0clear(&___nl__im__24);
#line 659
c_rt_lib0clear(&___nl__im__35);
#line 659
//clear ___nl__bool__36;
#line 659
c_rt_lib0clear(&___nl__im__37);
#line 659
c_rt_lib0clear(&___nl__im__38);
#line 659
c_rt_lib0clear(&___nl__im__39);
#line 659
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
#line 664
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 664
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(138));
#line 664
c_rt_lib0clear(&___nl__im__7);
#line 664
___nl__bool__6 = !___nl__bool__6;
#line 664
if(___nl__bool__6){ goto label_33;}
#line 665
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 665
c_rt_lib0move(&___nl__im__12,___get_global_string_const(280));
#line 665
c_rt_lib0move(&___nl__im__13,___get_global_string_const(246));
#line 666
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__1));
#line 666
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_str_imm(___nl__im__2, ___ref___im__5));
#line 666
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__17));
#line 666
c_rt_lib0clear(&___nl__im__17);
#line 666
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 666
c_rt_lib0clear(&___nl__im__15);
#line 666
c_rt_lib0clear(&___nl__im__16);
#line 666
c_rt_lib0move(&___nl__im__11, generator_js_priv0get_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 666
c_rt_lib0clear(&___nl__im__12);
#line 666
c_rt_lib0clear(&___nl__im__13);
#line 666
c_rt_lib0clear(&___nl__im__14);
#line 666
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 666
c_rt_lib0clear(&___nl__im__10);
#line 666
c_rt_lib0clear(&___nl__im__11);
#line 666
c_rt_lib0move(&___nl__im__18,___get_global_string_const(450));
#line 666
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
c_rt_lib0clear(&___nl__im__18);
#line 666
c_rt_lib0clear(&___nl__im__0);
#line 666
c_rt_lib0clear(&___nl__im__1);
#line 666
c_rt_lib0clear(&___nl__im__2);
#line 666
//clear ___nl__int__3;
#line 666
//clear ___nl__bool__6;
#line 666
return ___nl__im__8;
#line 667
goto label_64;
#line 667
label_33:
;
#line 667
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 667
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(571));
#line 667
c_rt_lib0clear(&___nl__im__19);
#line 667
___nl__bool__6 = !___nl__bool__6;
#line 667
if(___nl__bool__6){ goto label_60;}
#line 668
c_rt_lib0move(&___nl__im__23, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 668
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__1));
#line 668
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 668
c_rt_lib0clear(&___nl__im__23);
#line 668
c_rt_lib0clear(&___nl__im__24);
#line 668
c_rt_lib0move(&___nl__im__25,___get_global_string_const(813));
#line 668
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 668
c_rt_lib0clear(&___nl__im__22);
#line 668
c_rt_lib0clear(&___nl__im__25);
#line 668
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 668
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 668
c_rt_lib0clear(&___nl__im__21);
#line 668
c_rt_lib0clear(&___nl__string__26);
#line 668
c_rt_lib0clear(&___nl__im__0);
#line 668
c_rt_lib0clear(&___nl__im__1);
#line 668
c_rt_lib0clear(&___nl__im__2);
#line 668
//clear ___nl__int__3;
#line 668
//clear ___nl__bool__6;
#line 668
c_rt_lib0clear(&___nl__im__8);
#line 668
return ___nl__im__20;
#line 669
goto label_64;
#line 669
label_60:
;
#line 670
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 670
nl_die_arg(___nl__im__27);
#line 671
goto label_64;
#line 671
label_64:
;
#line 671
//clear ___nl__bool__6;
#line 671
c_rt_lib0clear(&___nl__im__8);
#line 671
c_rt_lib0clear(&___nl__im__20);
#line 671
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
#line 676
c_rt_lib0move(&___nl__im__9,___get_global_string_const(814));
#line 676
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 676
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 676
c_rt_lib0clear(&___nl__im__9);
#line 676
c_rt_lib0clear(&___nl__string__10);
#line 676
c_rt_lib0move(&___nl__im__11,___get_global_string_const(112));
#line 676
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 676
c_rt_lib0clear(&___nl__im__8);
#line 676
c_rt_lib0clear(&___nl__im__11);
#line 676
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 676
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 676
c_rt_lib0clear(&___nl__im__7);
#line 676
c_rt_lib0clear(&___nl__string__12);
#line 677
c_rt_lib0move(&___nl__im__19,___get_global_string_const(747));
#line 677
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 677
c_rt_lib0clear(&___nl__im__19);
#line 677
c_rt_lib0move(&___nl__im__20,___get_global_string_const(815));
#line 677
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 677
c_rt_lib0clear(&___nl__im__18);
#line 677
c_rt_lib0clear(&___nl__im__20);
#line 677
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 677
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 677
c_rt_lib0clear(&___nl__im__22);
#line 677
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 677
c_rt_lib0clear(&___nl__im__17);
#line 677
c_rt_lib0clear(&___nl__im__21);
#line 677
c_rt_lib0move(&___nl__im__23,___get_global_string_const(465));
#line 677
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 677
c_rt_lib0clear(&___nl__im__16);
#line 677
c_rt_lib0clear(&___nl__im__23);
#line 677
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__3));
#line 677
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 677
c_rt_lib0clear(&___nl__im__15);
#line 677
c_rt_lib0clear(&___nl__im__24);
#line 677
c_rt_lib0move(&___nl__im__25,___get_global_string_const(516));
#line 677
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 677
c_rt_lib0clear(&___nl__im__14);
#line 677
c_rt_lib0clear(&___nl__im__25);
#line 677
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 677
c_rt_lib0clear(&___nl__im__13);
#line 678
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 679
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 679
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 679
c_rt_lib0clear(&___nl__im__28);
#line 679
c_rt_lib0move(&___nl__im__29,___get_global_string_const(780));
#line 679
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 679
c_rt_lib0clear(&___nl__im__27);
#line 679
c_rt_lib0clear(&___nl__im__29);
#line 679
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 679
c_rt_lib0clear(&___nl__im__26);
#line 680
c_rt_lib0move(&___nl__im__31,___get_global_string_const(783));
#line 680
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 680
c_rt_lib0clear(&___nl__im__31);
#line 680
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 680
c_rt_lib0clear(&___nl__im__30);
#line 680
c_rt_lib0clear(&___nl__im__3);
#line 680
//clear ___nl__int__4;
#line 680
//clear ___nl__int__5;
#line 680
c_rt_lib0clear(&___nl__im__6);
#line 680
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
#line 686
___nl__int__4 = 0;
#line 687
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 688
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 689
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 689
c_rt_lib0move(&___nl__im__13,___get_global_string_const(115));
#line 689
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 689
c_rt_lib0clear(&___nl__im__12);
#line 689
c_rt_lib0clear(&___nl__im__13);
#line 689
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 689
c_rt_lib0clear(&___nl__im__11);
#line 689
c_rt_lib0move(&___nl__im__14,___get_global_string_const(115));
#line 689
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 689
c_rt_lib0clear(&___nl__im__10);
#line 689
c_rt_lib0clear(&___nl__im__14);
#line 689
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 689
c_rt_lib0clear(&___nl__im__9);
#line 689
c_rt_lib0move(&___nl__im__15,___get_global_string_const(465));
#line 689
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 689
c_rt_lib0clear(&___nl__im__8);
#line 689
c_rt_lib0clear(&___nl__im__15);
#line 690
___nl__int__17 = 0;
#line 690
___nl__int__18 = 1;
#line 690
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 690
label_23:
;
#line 690
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 690
if(___nl__bool__20){ goto label_73;}
#line 690
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 690
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 691
___nl__int__23 = 0;
#line 691
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 691
//clear ___nl__int__23;
#line 691
___nl__bool__22 = !___nl__bool__22;
#line 691
___nl__bool__22 = !___nl__bool__22;
#line 691
if(___nl__bool__22){ goto label_38;}
#line 691
c_rt_lib0move(&___nl__im__24,___get_global_string_const(323));
#line 691
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 691
c_rt_lib0clear(&___nl__im__24);
#line 691
goto label_38;
#line 691
label_38:
;
#line 691
//clear ___nl__bool__22;
#line 692
___nl__int__25 = 1;
#line 692
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 692
//clear ___nl__int__25;
#line 693
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 693
if(___nl__bool__26){ goto label_52;}
#line 695
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(356));
#line 695
if(___nl__bool__26){ goto label_57;}
#line 697
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(291));
#line 697
if(___nl__bool__26){ goto label_64;}
#line 697
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 697
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 697
nl_die_arg(___nl__im__27);
#line 693
label_52:
;
#line 693
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 693
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 694
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 695
goto label_69;
#line 695
label_57:
;
#line 695
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(356)));
#line 695
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 696
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__30));
#line 696
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 696
c_rt_lib0clear(&___nl__im__32);
#line 697
goto label_69;
#line 697
label_64:
;
#line 697
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(291)));
#line 697
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 698
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 699
goto label_69;
#line 699
label_69:
;
#line 699
c_rt_lib0clear(&___nl__im__16);
#line 700
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 700
goto label_23;
#line 700
label_73:
;
#line 701
___nl__int__35 = 1;
#line 701
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 701
//clear ___nl__int__35;
#line 702
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 702
c_rt_lib0move(&___nl__im__39,___get_global_string_const(516));
#line 702
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 702
c_rt_lib0clear(&___nl__im__38);
#line 702
c_rt_lib0clear(&___nl__im__39);
#line 702
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 702
c_rt_lib0clear(&___nl__im__37);
#line 702
c_rt_lib0clear(&___nl__im__0);
#line 702
c_rt_lib0clear(&___nl__im__1);
#line 702
c_rt_lib0clear(&___nl__im__2);
#line 702
//clear ___nl__int__4;
#line 702
c_rt_lib0clear(&___nl__im__5);
#line 702
c_rt_lib0clear(&___nl__im__6);
#line 702
c_rt_lib0clear(&___nl__im__7);
#line 702
c_rt_lib0clear(&___nl__im__16);
#line 702
//clear ___nl__int__17;
#line 702
//clear ___nl__int__18;
#line 702
//clear ___nl__int__19;
#line 702
//clear ___nl__bool__20;
#line 702
c_rt_lib0clear(&___nl__im__21);
#line 702
//clear ___nl__bool__26;
#line 702
c_rt_lib0clear(&___nl__im__27);
#line 702
c_rt_lib0clear(&___nl__im__28);
#line 702
c_rt_lib0clear(&___nl__im__29);
#line 702
c_rt_lib0clear(&___nl__im__30);
#line 702
c_rt_lib0clear(&___nl__im__31);
#line 702
c_rt_lib0clear(&___nl__im__33);
#line 702
c_rt_lib0clear(&___nl__im__34);
#line 702
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
#line 706
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 707
___nl__int__5 = 0;
#line 707
___nl__int__6 = 1;
#line 707
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 707
label_4:
;
#line 707
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 707
if(___nl__bool__8){ goto label_15;}
#line 707
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 707
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 708
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__4));
#line 708
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 708
c_rt_lib0clear(&___nl__im__10);
#line 708
c_rt_lib0clear(&___nl__im__4);
#line 709
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 709
goto label_4;
#line 709
label_15:
;
#line 710
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 710
c_rt_lib0move(&___nl__im__19,___get_global_string_const(115));
#line 710
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 710
c_rt_lib0clear(&___nl__im__18);
#line 710
c_rt_lib0clear(&___nl__im__19);
#line 710
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 710
c_rt_lib0clear(&___nl__im__17);
#line 710
c_rt_lib0move(&___nl__im__20,___get_global_string_const(115));
#line 710
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 710
c_rt_lib0clear(&___nl__im__16);
#line 710
c_rt_lib0clear(&___nl__im__20);
#line 710
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 710
c_rt_lib0clear(&___nl__im__15);
#line 710
c_rt_lib0move(&___nl__im__21,___get_global_string_const(465));
#line 710
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 710
c_rt_lib0clear(&___nl__im__14);
#line 710
c_rt_lib0clear(&___nl__im__21);
#line 710
c_rt_lib0move(&___nl__im__23,___get_global_string_const(337));
#line 710
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 710
c_rt_lib0clear(&___nl__im__23);
#line 710
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 710
c_rt_lib0clear(&___nl__im__13);
#line 710
c_rt_lib0clear(&___nl__im__22);
#line 710
c_rt_lib0move(&___nl__im__24,___get_global_string_const(331));
#line 710
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 710
c_rt_lib0clear(&___nl__im__12);
#line 710
c_rt_lib0clear(&___nl__im__24);
#line 710
c_rt_lib0clear(&___nl__im__0);
#line 710
c_rt_lib0clear(&___nl__im__1);
#line 710
c_rt_lib0clear(&___nl__im__2);
#line 710
c_rt_lib0clear(&___nl__im__3);
#line 710
c_rt_lib0clear(&___nl__im__4);
#line 710
//clear ___nl__int__5;
#line 710
//clear ___nl__int__6;
#line 710
//clear ___nl__int__7;
#line 710
//clear ___nl__bool__8;
#line 710
c_rt_lib0clear(&___nl__im__9);
#line 710
return ___nl__im__11;
#line 710
c_rt_lib0clear(&___nl__im__0);
#line 710
c_rt_lib0clear(&___nl__im__1);
#line 710
c_rt_lib0clear(&___nl__im__2);
#line 710
c_rt_lib0clear(&___nl__im__3);
#line 710
c_rt_lib0clear(&___nl__im__4);
#line 710
//clear ___nl__int__5;
#line 710
//clear ___nl__int__6;
#line 710
//clear ___nl__int__7;
#line 710
//clear ___nl__bool__8;
#line 710
c_rt_lib0clear(&___nl__im__9);
#line 710
c_rt_lib0clear(&___nl__im__11);
#line 710
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
#line 714
c_rt_lib0move(&___nl__im__3,___get_global_string_const(134));
#line 714
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 714
c_rt_lib0clear(&___nl__im__3);
#line 714
c_rt_lib0move(&___nl__im__4,___get_global_string_const(807));
#line 714
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 714
c_rt_lib0clear(&___nl__im__2);
#line 714
c_rt_lib0clear(&___nl__im__4);
#line 715
___nl__int__6 = 0;
#line 715
___nl__int__7 = 1;
#line 715
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 715
label_10:
;
#line 715
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 715
if(___nl__bool__9){ goto label_25;}
#line 715
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 715
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 715
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_const_value(___nl__im__5));
#line 715
c_rt_lib0move(&___nl__im__13,___get_global_string_const(323));
#line 715
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 715
c_rt_lib0clear(&___nl__im__12);
#line 715
c_rt_lib0clear(&___nl__im__13);
#line 715
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 715
c_rt_lib0clear(&___nl__im__11);
#line 715
c_rt_lib0clear(&___nl__im__5);
#line 715
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 715
goto label_10;
#line 715
label_25:
;
#line 716
c_rt_lib0move(&___nl__im__15,___get_global_string_const(508));
#line 716
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 716
c_rt_lib0clear(&___nl__im__15);
#line 716
c_rt_lib0clear(&___nl__im__0);
#line 716
c_rt_lib0clear(&___nl__im__1);
#line 716
c_rt_lib0clear(&___nl__im__5);
#line 716
//clear ___nl__int__6;
#line 716
//clear ___nl__int__7;
#line 716
//clear ___nl__int__8;
#line 716
//clear ___nl__bool__9;
#line 716
c_rt_lib0clear(&___nl__im__10);
#line 716
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
#line 720
c_rt_lib0move(&___nl__im__3,___get_global_string_const(135));
#line 720
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 720
c_rt_lib0clear(&___nl__im__3);
#line 720
c_rt_lib0move(&___nl__im__4,___get_global_string_const(816));
#line 720
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 720
c_rt_lib0clear(&___nl__im__2);
#line 720
c_rt_lib0clear(&___nl__im__4);
#line 721
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 721
label_8:
;
#line 721
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 721
if(___nl__bool__6){ goto label_34;}
#line 721
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 721
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 721
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 721
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 721
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 721
c_rt_lib0clear(&___nl__im__13);
#line 721
c_rt_lib0clear(&___nl__im__14);
#line 721
c_rt_lib0move(&___nl__im__15,___get_global_string_const(538));
#line 721
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 721
c_rt_lib0clear(&___nl__im__12);
#line 721
c_rt_lib0clear(&___nl__im__15);
#line 721
c_rt_lib0move(&___nl__im__16, generator_js_priv0get_const_value(___nl__im__7));
#line 721
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 721
c_rt_lib0clear(&___nl__im__11);
#line 721
c_rt_lib0clear(&___nl__im__16);
#line 721
c_rt_lib0move(&___nl__im__17,___get_global_string_const(323));
#line 721
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 721
c_rt_lib0clear(&___nl__im__10);
#line 721
c_rt_lib0clear(&___nl__im__17);
#line 721
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 721
c_rt_lib0clear(&___nl__im__9);
#line 721
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 721
goto label_8;
#line 721
label_34:
;
#line 722
c_rt_lib0move(&___nl__im__19,___get_global_string_const(817));
#line 722
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 722
c_rt_lib0clear(&___nl__im__19);
#line 722
c_rt_lib0clear(&___nl__im__0);
#line 722
c_rt_lib0clear(&___nl__im__1);
#line 722
c_rt_lib0clear(&___nl__im__5);
#line 722
//clear ___nl__bool__6;
#line 722
c_rt_lib0clear(&___nl__im__7);
#line 722
c_rt_lib0clear(&___nl__im__8);
#line 722
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
#line 726
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 726
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 726
c_rt_lib0clear(&___nl__im__2);
#line 726
___nl__bool__1 = !___nl__bool__1;
#line 726
if(___nl__bool__1){ goto label_36;}
#line 727
c_rt_lib0move(&___nl__im__9,___get_global_string_const(818));
#line 727
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 727
c_rt_lib0clear(&___nl__im__9);
#line 727
c_rt_lib0move(&___nl__im__10,___get_global_string_const(465));
#line 727
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 727
c_rt_lib0clear(&___nl__im__8);
#line 727
c_rt_lib0clear(&___nl__im__10);
#line 727
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 727
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 727
c_rt_lib0clear(&___nl__im__12);
#line 727
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 727
c_rt_lib0clear(&___nl__im__7);
#line 727
c_rt_lib0clear(&___nl__im__11);
#line 727
c_rt_lib0move(&___nl__im__13,___get_global_string_const(337));
#line 727
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 727
c_rt_lib0clear(&___nl__im__6);
#line 727
c_rt_lib0clear(&___nl__im__13);
#line 728
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 728
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_const_value(___nl__im__15));
#line 728
c_rt_lib0clear(&___nl__im__15);
#line 728
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 728
c_rt_lib0clear(&___nl__im__5);
#line 728
c_rt_lib0clear(&___nl__im__14);
#line 728
c_rt_lib0move(&___nl__im__16,___get_global_string_const(331));
#line 728
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 728
c_rt_lib0clear(&___nl__im__4);
#line 728
c_rt_lib0clear(&___nl__im__16);
#line 728
c_rt_lib0clear(&___nl__im__0);
#line 728
//clear ___nl__bool__1;
#line 728
return ___nl__im__3;
#line 729
goto label_59;
#line 729
label_36:
;
#line 730
c_rt_lib0move(&___nl__im__21,___get_global_string_const(818));
#line 730
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 730
c_rt_lib0clear(&___nl__im__21);
#line 730
c_rt_lib0move(&___nl__im__22,___get_global_string_const(465));
#line 730
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 730
c_rt_lib0clear(&___nl__im__20);
#line 730
c_rt_lib0clear(&___nl__im__22);
#line 730
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 730
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 730
c_rt_lib0clear(&___nl__im__24);
#line 730
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 730
c_rt_lib0clear(&___nl__im__19);
#line 730
c_rt_lib0clear(&___nl__im__23);
#line 730
c_rt_lib0move(&___nl__im__25,___get_global_string_const(819));
#line 730
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 730
c_rt_lib0clear(&___nl__im__18);
#line 730
c_rt_lib0clear(&___nl__im__25);
#line 730
c_rt_lib0clear(&___nl__im__0);
#line 730
//clear ___nl__bool__1;
#line 730
c_rt_lib0clear(&___nl__im__3);
#line 730
return ___nl__im__17;
#line 731
goto label_59;
#line 731
label_59:
;
#line 731
//clear ___nl__bool__1;
#line 731
c_rt_lib0clear(&___nl__im__3);
#line 731
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
#line 735
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 735
___nl__bool__1 = !___nl__bool__1;
#line 735
if(___nl__bool__1){ goto label_20;}
#line 736
c_rt_lib0move(&___nl__im__6,___get_global_string_const(413));
#line 736
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 736
c_rt_lib0clear(&___nl__im__6);
#line 736
c_rt_lib0move(&___nl__im__7,___get_global_string_const(465));
#line 736
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 736
c_rt_lib0clear(&___nl__im__5);
#line 736
c_rt_lib0clear(&___nl__im__7);
#line 736
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 736
c_rt_lib0clear(&___nl__im__4);
#line 736
c_rt_lib0move(&___nl__im__8,___get_global_string_const(331));
#line 736
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 736
c_rt_lib0clear(&___nl__im__3);
#line 736
c_rt_lib0clear(&___nl__im__8);
#line 736
c_rt_lib0clear(&___nl__im__0);
#line 736
//clear ___nl__bool__1;
#line 736
return ___nl__im__2;
#line 737
goto label_130;
#line 737
label_20:
;
#line 737
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 737
___nl__bool__1 = !___nl__bool__1;
#line 737
if(___nl__bool__1){ goto label_44;}
#line 738
c_rt_lib0move(&___nl__im__13,___get_global_string_const(291));
#line 738
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 738
c_rt_lib0clear(&___nl__im__13);
#line 738
c_rt_lib0move(&___nl__im__14,___get_global_string_const(465));
#line 738
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 738
c_rt_lib0clear(&___nl__im__12);
#line 738
c_rt_lib0clear(&___nl__im__14);
#line 738
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 738
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 738
c_rt_lib0clear(&___nl__im__11);
#line 738
c_rt_lib0clear(&___nl__im__15);
#line 738
c_rt_lib0move(&___nl__im__16,___get_global_string_const(331));
#line 738
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 738
c_rt_lib0clear(&___nl__im__10);
#line 738
c_rt_lib0clear(&___nl__im__16);
#line 738
c_rt_lib0clear(&___nl__im__0);
#line 738
//clear ___nl__bool__1;
#line 738
c_rt_lib0clear(&___nl__im__2);
#line 738
return ___nl__im__9;
#line 739
goto label_130;
#line 739
label_44:
;
#line 739
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 739
___nl__bool__1 = !___nl__bool__1;
#line 739
if(___nl__bool__1){ goto label_55;}
#line 740
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_const_arr(___nl__im__0));
#line 740
c_rt_lib0clear(&___nl__im__0);
#line 740
//clear ___nl__bool__1;
#line 740
c_rt_lib0clear(&___nl__im__2);
#line 740
c_rt_lib0clear(&___nl__im__9);
#line 740
return ___nl__im__17;
#line 741
goto label_130;
#line 741
label_55:
;
#line 741
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 741
___nl__bool__1 = !___nl__bool__1;
#line 741
if(___nl__bool__1){ goto label_67;}
#line 742
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_hash(___nl__im__0));
#line 742
c_rt_lib0clear(&___nl__im__0);
#line 742
//clear ___nl__bool__1;
#line 742
c_rt_lib0clear(&___nl__im__2);
#line 742
c_rt_lib0clear(&___nl__im__9);
#line 742
c_rt_lib0clear(&___nl__im__17);
#line 742
return ___nl__im__18;
#line 743
goto label_130;
#line 743
label_67:
;
#line 743
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 743
___nl__bool__1 = !___nl__bool__1;
#line 743
if(___nl__bool__1){ goto label_113;}
#line 744
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 744
___nl__bool__19 = !___nl__bool__19;
#line 744
if(___nl__bool__19){ goto label_90;}
#line 745
c_rt_lib0move(&___nl__im__21,___get_global_string_const(280));
#line 745
c_rt_lib0move(&___nl__im__22,___get_global_string_const(820));
#line 745
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 745
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 745
c_rt_lib0clear(&___nl__im__21);
#line 745
c_rt_lib0clear(&___nl__im__22);
#line 745
c_rt_lib0clear(&___nl__im__23);
#line 745
c_rt_lib0clear(&___nl__im__0);
#line 745
//clear ___nl__bool__1;
#line 745
c_rt_lib0clear(&___nl__im__2);
#line 745
c_rt_lib0clear(&___nl__im__9);
#line 745
c_rt_lib0clear(&___nl__im__17);
#line 745
c_rt_lib0clear(&___nl__im__18);
#line 745
//clear ___nl__bool__19;
#line 745
return ___nl__im__20;
#line 746
goto label_108;
#line 746
label_90:
;
#line 747
c_rt_lib0move(&___nl__im__25,___get_global_string_const(280));
#line 747
c_rt_lib0move(&___nl__im__26,___get_global_string_const(821));
#line 747
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 747
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 747
c_rt_lib0clear(&___nl__im__25);
#line 747
c_rt_lib0clear(&___nl__im__26);
#line 747
c_rt_lib0clear(&___nl__im__27);
#line 747
c_rt_lib0clear(&___nl__im__0);
#line 747
//clear ___nl__bool__1;
#line 747
c_rt_lib0clear(&___nl__im__2);
#line 747
c_rt_lib0clear(&___nl__im__9);
#line 747
c_rt_lib0clear(&___nl__im__17);
#line 747
c_rt_lib0clear(&___nl__im__18);
#line 747
//clear ___nl__bool__19;
#line 747
c_rt_lib0clear(&___nl__im__20);
#line 747
return ___nl__im__24;
#line 748
goto label_108;
#line 748
label_108:
;
#line 748
//clear ___nl__bool__19;
#line 748
c_rt_lib0clear(&___nl__im__20);
#line 748
c_rt_lib0clear(&___nl__im__24);
#line 749
goto label_130;
#line 749
label_113:
;
#line 749
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 749
___nl__bool__1 = !___nl__bool__1;
#line 749
if(___nl__bool__1){ goto label_126;}
#line 750
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_const_ov(___nl__im__0));
#line 750
c_rt_lib0clear(&___nl__im__0);
#line 750
//clear ___nl__bool__1;
#line 750
c_rt_lib0clear(&___nl__im__2);
#line 750
c_rt_lib0clear(&___nl__im__9);
#line 750
c_rt_lib0clear(&___nl__im__17);
#line 750
c_rt_lib0clear(&___nl__im__18);
#line 750
return ___nl__im__28;
#line 751
goto label_130;
#line 751
label_126:
;
#line 752
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 752
nl_die_arg(___nl__im__29);
#line 753
goto label_130;
#line 753
label_130:
;
#line 753
//clear ___nl__bool__1;
#line 753
c_rt_lib0clear(&___nl__im__2);
#line 753
c_rt_lib0clear(&___nl__im__9);
#line 753
c_rt_lib0clear(&___nl__im__17);
#line 753
c_rt_lib0clear(&___nl__im__18);
#line 753
c_rt_lib0clear(&___nl__im__28);
#line 753
c_rt_lib0clear(&___nl__im__29);
#line 753
c_rt_lib0clear(&___nl__im__0);
#line 753
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
#line 757
c_rt_lib0move(&___nl__im__3,___get_global_string_const(822));
#line 757
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 757
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 757
c_rt_lib0clear(&___nl__im__3);
#line 757
c_rt_lib0clear(&___nl__string__4);
#line 757
c_rt_lib0move(&___nl__im__5,___get_global_string_const(823));
#line 757
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 757
c_rt_lib0clear(&___nl__im__2);
#line 757
c_rt_lib0clear(&___nl__im__5);
#line 757
//clear ___nl__int__0;
#line 757
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
#line 762
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 763
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 763
___nl__bool__3 = !___nl__bool__3;
#line 763
if(___nl__bool__3){ goto label_14;}
#line 764
c_rt_lib0move(&___nl__im__6,___get_global_string_const(135));
#line 764
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 764
c_rt_lib0clear(&___nl__im__6);
#line 764
c_rt_lib0move(&___nl__im__7,___get_global_string_const(816));
#line 764
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 764
c_rt_lib0clear(&___nl__im__5);
#line 764
c_rt_lib0clear(&___nl__im__7);
#line 764
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 764
c_rt_lib0clear(&___nl__im__4);
#line 765
goto label_26;
#line 765
label_14:
;
#line 765
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(135));
#line 765
___nl__bool__3 = !___nl__bool__3;
#line 765
if(___nl__bool__3){ goto label_22;}
#line 766
c_rt_lib0move(&___nl__im__8,___get_global_string_const(315));
#line 766
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 766
c_rt_lib0clear(&___nl__im__8);
#line 767
goto label_26;
#line 767
label_22:
;
#line 768
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 768
nl_die_arg(___nl__im__9);
#line 769
goto label_26;
#line 769
label_26:
;
#line 769
//clear ___nl__bool__3;
#line 769
c_rt_lib0clear(&___nl__im__9);
#line 770
___nl__int__11 = 0;
#line 770
___nl__int__12 = 1;
#line 770
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 770
label_32:
;
#line 770
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 770
if(___nl__bool__14){ goto label_59;}
#line 770
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 770
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 770
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(585)));
#line 770
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 770
c_rt_lib0clear(&___nl__im__20);
#line 770
c_rt_lib0move(&___nl__im__21,___get_global_string_const(538));
#line 770
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 770
c_rt_lib0clear(&___nl__im__19);
#line 770
c_rt_lib0clear(&___nl__im__21);
#line 770
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(234)));
#line 770
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__23));
#line 770
c_rt_lib0clear(&___nl__im__23);
#line 770
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 770
c_rt_lib0clear(&___nl__im__18);
#line 770
c_rt_lib0clear(&___nl__im__22);
#line 770
c_rt_lib0move(&___nl__im__24,___get_global_string_const(323));
#line 770
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 770
c_rt_lib0clear(&___nl__im__17);
#line 770
c_rt_lib0clear(&___nl__im__24);
#line 770
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 770
c_rt_lib0clear(&___nl__im__16);
#line 770
c_rt_lib0clear(&___nl__im__10);
#line 770
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 770
goto label_32;
#line 770
label_59:
;
#line 771
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 771
___nl__bool__25 = !___nl__bool__25;
#line 771
if(___nl__bool__25){ goto label_67;}
#line 772
c_rt_lib0move(&___nl__im__26,___get_global_string_const(817));
#line 772
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 772
c_rt_lib0clear(&___nl__im__26);
#line 773
goto label_79;
#line 773
label_67:
;
#line 773
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(135));
#line 773
___nl__bool__25 = !___nl__bool__25;
#line 773
if(___nl__bool__25){ goto label_75;}
#line 774
c_rt_lib0move(&___nl__im__27,___get_global_string_const(316));
#line 774
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 774
c_rt_lib0clear(&___nl__im__27);
#line 775
goto label_79;
#line 775
label_75:
;
#line 776
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 776
nl_die_arg(___nl__im__28);
#line 777
goto label_79;
#line 777
label_79:
;
#line 777
//clear ___nl__bool__25;
#line 777
c_rt_lib0clear(&___nl__im__28);
#line 778
c_rt_lib0clear(&___nl__im__0);
#line 778
c_rt_lib0clear(&___nl__im__1);
#line 778
c_rt_lib0clear(&___nl__im__10);
#line 778
//clear ___nl__int__11;
#line 778
//clear ___nl__int__12;
#line 778
//clear ___nl__int__13;
#line 778
//clear ___nl__bool__14;
#line 778
c_rt_lib0clear(&___nl__im__15);
#line 778
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
#line 782
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 783
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 783
___nl__bool__3 = !___nl__bool__3;
#line 783
if(___nl__bool__3){ goto label_36;}
#line 784
c_rt_lib0move(&___nl__im__6,___get_global_string_const(135));
#line 784
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 784
c_rt_lib0clear(&___nl__im__6);
#line 784
c_rt_lib0move(&___nl__im__7,___get_global_string_const(816));
#line 784
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 784
c_rt_lib0clear(&___nl__im__5);
#line 784
c_rt_lib0clear(&___nl__im__7);
#line 784
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 784
c_rt_lib0clear(&___nl__im__4);
#line 785
___nl__int__9 = 0;
#line 785
___nl__int__10 = 1;
#line 785
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 785
label_16:
;
#line 785
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 785
if(___nl__bool__12){ goto label_31;}
#line 785
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 785
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 785
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 785
c_rt_lib0move(&___nl__im__16,___get_global_string_const(824));
#line 785
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 785
c_rt_lib0clear(&___nl__im__15);
#line 785
c_rt_lib0clear(&___nl__im__16);
#line 785
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 785
c_rt_lib0clear(&___nl__im__14);
#line 785
c_rt_lib0clear(&___nl__im__8);
#line 785
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 785
goto label_16;
#line 785
label_31:
;
#line 786
c_rt_lib0move(&___nl__im__17,___get_global_string_const(817));
#line 786
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 786
c_rt_lib0clear(&___nl__im__17);
#line 787
goto label_70;
#line 787
label_36:
;
#line 787
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(567));
#line 787
___nl__bool__3 = !___nl__bool__3;
#line 787
if(___nl__bool__3){ goto label_66;}
#line 788
c_rt_lib0move(&___nl__im__18,___get_global_string_const(315));
#line 788
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 788
c_rt_lib0clear(&___nl__im__18);
#line 789
___nl__int__20 = 0;
#line 789
___nl__int__21 = 1;
#line 789
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 789
label_46:
;
#line 789
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 789
if(___nl__bool__23){ goto label_61;}
#line 789
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 789
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 789
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 789
c_rt_lib0move(&___nl__im__27,___get_global_string_const(825));
#line 789
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 789
c_rt_lib0clear(&___nl__im__26);
#line 789
c_rt_lib0clear(&___nl__im__27);
#line 789
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 789
c_rt_lib0clear(&___nl__im__25);
#line 789
c_rt_lib0clear(&___nl__im__19);
#line 789
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 789
goto label_46;
#line 789
label_61:
;
#line 790
c_rt_lib0move(&___nl__im__28,___get_global_string_const(316));
#line 790
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 790
c_rt_lib0clear(&___nl__im__28);
#line 791
goto label_70;
#line 791
label_66:
;
#line 792
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 792
nl_die_arg(___nl__im__29);
#line 793
goto label_70;
#line 793
label_70:
;
#line 793
//clear ___nl__bool__3;
#line 793
c_rt_lib0clear(&___nl__im__8);
#line 793
//clear ___nl__int__9;
#line 793
//clear ___nl__int__10;
#line 793
//clear ___nl__int__11;
#line 793
//clear ___nl__bool__12;
#line 793
c_rt_lib0clear(&___nl__im__13);
#line 793
c_rt_lib0clear(&___nl__im__19);
#line 793
//clear ___nl__int__20;
#line 793
//clear ___nl__int__21;
#line 793
//clear ___nl__int__22;
#line 793
//clear ___nl__bool__23;
#line 793
c_rt_lib0clear(&___nl__im__24);
#line 793
c_rt_lib0clear(&___nl__im__29);
#line 794
c_rt_lib0clear(&___nl__im__0);
#line 794
c_rt_lib0clear(&___nl__im__1);
#line 794
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0get_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 798
c_rt_lib0move(&___nl__im__1, generator_js_priv0reg_suffix(___nl__im__0));
#line 798
c_rt_lib0clear(&___nl__im__0);
#line 798
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
#line 802
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 803
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 803
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(229));
#line 803
if(___nl__bool__3){ goto label_9;}
#line 804
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(430));
#line 804
if(___nl__bool__3){ goto label_11;}
#line 804
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 804
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 804
nl_die_arg(___nl__im__4);
#line 803
label_9:
;
#line 804
goto label_16;
#line 804
label_11:
;
#line 805
c_rt_lib0move(&___nl__im__5,___get_global_string_const(766));
#line 805
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 805
c_rt_lib0clear(&___nl__im__5);
#line 806
goto label_16;
#line 806
label_16:
;
#line 807
c_rt_lib0clear(&___nl__im__0);
#line 807
c_rt_lib0clear(&___nl__im__2);
#line 807
//clear ___nl__bool__3;
#line 807
c_rt_lib0clear(&___nl__im__4);
#line 807
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
#line 811
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 812
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 812
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(229));
#line 812
if(___nl__bool__3){ goto label_9;}
#line 814
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(430));
#line 814
if(___nl__bool__3){ goto label_18;}
#line 814
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 814
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 814
nl_die_arg(___nl__im__4);
#line 812
label_9:
;
#line 813
c_rt_lib0move(&___nl__im__6,___get_global_string_const(826));
#line 813
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 813
c_rt_lib0clear(&___nl__im__6);
#line 813
c_rt_lib0move(&___nl__im__7,___get_global_string_const(316));
#line 813
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 813
c_rt_lib0clear(&___nl__im__5);
#line 813
c_rt_lib0clear(&___nl__im__7);
#line 814
goto label_20;
#line 814
label_18:
;
#line 815
goto label_20;
#line 815
label_20:
;
#line 816
c_rt_lib0clear(&___nl__im__0);
#line 816
c_rt_lib0clear(&___nl__im__2);
#line 816
//clear ___nl__bool__3;
#line 816
c_rt_lib0clear(&___nl__im__4);
#line 816
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
ImmT  ___nl__im__20 = NULL;
#line 821
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 821
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(138));
#line 821
if(___nl__bool__3){ goto label_20;}
#line 823
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(413));
#line 823
if(___nl__bool__3){ goto label_23;}
#line 825
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 825
if(___nl__bool__3){ goto label_26;}
#line 827
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(414));
#line 827
if(___nl__bool__3){ goto label_29;}
#line 829
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(567));
#line 829
if(___nl__bool__3){ goto label_32;}
#line 831
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(134));
#line 831
if(___nl__bool__3){ goto label_37;}
#line 833
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(571));
#line 833
if(___nl__bool__3){ goto label_42;}
#line 835
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(135));
#line 835
if(___nl__bool__3){ goto label_47;}
#line 835
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 835
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 835
nl_die_arg(___nl__im__4);
#line 821
label_20:
;
#line 822
c_rt_lib0move(&___nl__im__1,___get_global_string_const(138));
#line 823
goto label_52;
#line 823
label_23:
;
#line 824
c_rt_lib0move(&___nl__im__1,___get_global_string_const(413));
#line 825
goto label_52;
#line 825
label_26:
;
#line 826
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 827
goto label_52;
#line 827
label_29:
;
#line 828
c_rt_lib0move(&___nl__im__1,___get_global_string_const(414));
#line 829
goto label_52;
#line 829
label_32:
;
#line 829
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(567)));
#line 829
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 830
c_rt_lib0move(&___nl__im__1,___get_global_string_const(567));
#line 831
goto label_52;
#line 831
label_37:
;
#line 831
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(134)));
#line 831
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 832
c_rt_lib0move(&___nl__im__1,___get_global_string_const(134));
#line 833
goto label_52;
#line 833
label_42:
;
#line 833
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(571)));
#line 833
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 834
c_rt_lib0move(&___nl__im__1,___get_global_string_const(515));
#line 835
goto label_52;
#line 835
label_47:
;
#line 835
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(135)));
#line 835
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 836
c_rt_lib0move(&___nl__im__1,___get_global_string_const(135));
#line 837
goto label_52;
#line 837
label_52:
;
#line 838
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 838
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(229));
#line 838
if(___nl__bool__14){ goto label_61;}
#line 839
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(430));
#line 839
if(___nl__bool__14){ goto label_63;}
#line 839
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 839
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 839
nl_die_arg(___nl__im__15);
#line 838
label_61:
;
#line 839
goto label_68;
#line 839
label_63:
;
#line 840
c_rt_lib0move(&___nl__im__16,___get_global_string_const(649));
#line 840
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 840
c_rt_lib0clear(&___nl__im__16);
#line 841
goto label_68;
#line 841
label_68:
;
#line 842
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 842
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 842
c_rt_lib0clear(&___nl__im__19);
#line 842
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__18));
#line 842
c_rt_lib0move(&___nl__im__17, ptd0int_to_string(___nl__im__20));
#line 842
//clear ___nl__int__18;
#line 842
c_rt_lib0clear(&___nl__im__20);
#line 842
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 842
c_rt_lib0clear(&___nl__im__17);
#line 843
c_rt_lib0clear(&___nl__im__0);
#line 843
c_rt_lib0clear(&___nl__im__2);
#line 843
//clear ___nl__bool__3;
#line 843
c_rt_lib0clear(&___nl__im__4);
#line 843
c_rt_lib0clear(&___nl__im__5);
#line 843
c_rt_lib0clear(&___nl__im__6);
#line 843
c_rt_lib0clear(&___nl__im__7);
#line 843
c_rt_lib0clear(&___nl__im__8);
#line 843
c_rt_lib0clear(&___nl__im__9);
#line 843
c_rt_lib0clear(&___nl__im__10);
#line 843
c_rt_lib0clear(&___nl__im__11);
#line 843
c_rt_lib0clear(&___nl__im__12);
#line 843
c_rt_lib0clear(&___nl__im__13);
#line 843
//clear ___nl__bool__14;
#line 843
c_rt_lib0clear(&___nl__im__15);
#line 843
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
#line 848
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 848
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 848
c_rt_lib0clear(&___nl__im__2);
#line 848
___nl__bool__1 = !___nl__bool__1;
#line 848
if(___nl__bool__1){ goto label_10;}
#line 848
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 848
c_rt_lib0clear(&___nl__im__0);
#line 848
//clear ___nl__bool__1;
#line 848
return ___nl__im__3;
#line 848
goto label_10;
#line 848
label_10:
;
#line 848
//clear ___nl__bool__1;
#line 848
c_rt_lib0clear(&___nl__im__3);
#line 849
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register(___nl__im__0));
#line 849
c_rt_lib0move(&___nl__im__6,___get_global_string_const(752));
#line 849
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 849
c_rt_lib0clear(&___nl__im__5);
#line 849
c_rt_lib0clear(&___nl__im__6);
#line 849
c_rt_lib0clear(&___nl__im__0);
#line 849
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
#line 853
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 853
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 853
c_rt_lib0clear(&___nl__im__2);
#line 853
___nl__bool__1 = !___nl__bool__1;
#line 853
if(___nl__bool__1){ goto label_10;}
#line 853
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 853
c_rt_lib0clear(&___nl__im__0);
#line 853
//clear ___nl__bool__1;
#line 853
return ___nl__im__3;
#line 853
goto label_10;
#line 853
label_10:
;
#line 853
//clear ___nl__bool__1;
#line 853
c_rt_lib0clear(&___nl__im__3);
#line 854
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register_value(___nl__im__0));
#line 854
c_rt_lib0move(&___nl__im__6,___get_global_string_const(752));
#line 854
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 854
c_rt_lib0clear(&___nl__im__5);
#line 854
c_rt_lib0clear(&___nl__im__6);
#line 854
c_rt_lib0clear(&___nl__im__0);
#line 854
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
#line 858
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 859
___nl__int__3 = 0;
#line 860
___nl__int__5 = 0;
#line 860
___nl__int__6 = 1;
#line 860
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 860
label_5:
;
#line 860
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 860
if(___nl__bool__8){ goto label_50;}
#line 860
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 860
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 861
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(363)));
#line 861
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 861
if(___nl__bool__11){ goto label_18;}
#line 863
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(234));
#line 863
if(___nl__bool__11){ goto label_41;}
#line 863
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 863
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 863
nl_die_arg(___nl__im__12);
#line 861
label_18:
;
#line 862
c_rt_lib0move(&___nl__im__17,___get_global_string_const(778));
#line 862
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 862
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 862
c_rt_lib0clear(&___nl__im__17);
#line 862
c_rt_lib0clear(&___nl__string__18);
#line 862
c_rt_lib0move(&___nl__im__19,___get_global_string_const(827));
#line 862
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 862
c_rt_lib0clear(&___nl__im__16);
#line 862
c_rt_lib0clear(&___nl__im__19);
#line 862
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(479)));
#line 862
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_register_value(___nl__im__21));
#line 862
c_rt_lib0clear(&___nl__im__21);
#line 862
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 862
c_rt_lib0clear(&___nl__im__15);
#line 862
c_rt_lib0clear(&___nl__im__20);
#line 862
c_rt_lib0move(&___nl__im__22,___get_global_string_const(450));
#line 862
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 862
c_rt_lib0clear(&___nl__im__14);
#line 862
c_rt_lib0clear(&___nl__im__22);
#line 862
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 862
c_rt_lib0clear(&___nl__im__13);
#line 863
goto label_43;
#line 863
label_41:
;
#line 864
goto label_43;
#line 864
label_43:
;
#line 865
___nl__int__23 = 1;
#line 865
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 865
//clear ___nl__int__23;
#line 865
c_rt_lib0clear(&___nl__im__4);
#line 866
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 866
goto label_5;
#line 866
label_50:
;
#line 867
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(234));
#line 867
if(___nl__bool__24){ goto label_58;}
#line 869
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(360));
#line 869
if(___nl__bool__24){ goto label_91;}
#line 869
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 869
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 869
nl_die_arg(___nl__im__25);
#line 867
label_58:
;
#line 867
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(234)));
#line 867
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 868
c_rt_lib0move(&___nl__im__31,___get_global_string_const(518));
#line 868
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__2, ___nl__im__31));
#line 868
c_rt_lib0clear(&___nl__im__31);
#line 868
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__26));
#line 868
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 868
c_rt_lib0clear(&___nl__im__30);
#line 868
c_rt_lib0clear(&___nl__im__32);
#line 868
c_rt_lib0move(&___nl__im__33,___get_global_string_const(450));
#line 868
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 868
c_rt_lib0clear(&___nl__im__29);
#line 868
c_rt_lib0clear(&___nl__im__33);
#line 868
c_rt_lib0clear(&___nl__im__0);
#line 868
c_rt_lib0clear(&___nl__im__1);
#line 868
c_rt_lib0clear(&___nl__im__2);
#line 868
//clear ___nl__int__3;
#line 868
c_rt_lib0clear(&___nl__im__4);
#line 868
//clear ___nl__int__5;
#line 868
//clear ___nl__int__6;
#line 868
//clear ___nl__int__7;
#line 868
//clear ___nl__bool__8;
#line 868
c_rt_lib0clear(&___nl__im__9);
#line 868
c_rt_lib0clear(&___nl__im__10);
#line 868
//clear ___nl__bool__11;
#line 868
c_rt_lib0clear(&___nl__im__12);
#line 868
//clear ___nl__bool__24;
#line 868
c_rt_lib0clear(&___nl__im__25);
#line 868
c_rt_lib0clear(&___nl__im__26);
#line 868
c_rt_lib0clear(&___nl__im__27);
#line 868
return ___nl__im__28;
#line 869
goto label_115;
#line 869
label_91:
;
#line 870
c_rt_lib0move(&___nl__im__35,___get_global_string_const(828));
#line 870
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__35));
#line 870
c_rt_lib0clear(&___nl__im__35);
#line 870
c_rt_lib0clear(&___nl__im__0);
#line 870
c_rt_lib0clear(&___nl__im__1);
#line 870
c_rt_lib0clear(&___nl__im__2);
#line 870
//clear ___nl__int__3;
#line 870
c_rt_lib0clear(&___nl__im__4);
#line 870
//clear ___nl__int__5;
#line 870
//clear ___nl__int__6;
#line 870
//clear ___nl__int__7;
#line 870
//clear ___nl__bool__8;
#line 870
c_rt_lib0clear(&___nl__im__9);
#line 870
c_rt_lib0clear(&___nl__im__10);
#line 870
//clear ___nl__bool__11;
#line 870
c_rt_lib0clear(&___nl__im__12);
#line 870
//clear ___nl__bool__24;
#line 870
c_rt_lib0clear(&___nl__im__25);
#line 870
c_rt_lib0clear(&___nl__im__26);
#line 870
c_rt_lib0clear(&___nl__im__27);
#line 870
c_rt_lib0clear(&___nl__im__28);
#line 870
return ___nl__im__34;
#line 871
goto label_115;
#line 871
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
#line 875
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 875
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register_value_to_assign(___nl__im__2));
#line 875
c_rt_lib0clear(&___nl__im__2);
#line 876
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 876
c_rt_lib0move(&___nl__im__5,___get_global_string_const(373));
#line 876
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 876
c_rt_lib0clear(&___nl__im__4);
#line 876
c_rt_lib0clear(&___nl__im__5);
#line 876
___nl__bool__3 = !___nl__bool__3;
#line 876
if(___nl__bool__3){ goto label_24;}
#line 877
c_rt_lib0move(&___nl__im__8,___get_global_string_const(373));
#line 877
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 877
c_rt_lib0clear(&___nl__im__8);
#line 877
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 877
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_register_value(___nl__im__10));
#line 877
c_rt_lib0clear(&___nl__im__10);
#line 877
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 877
c_rt_lib0clear(&___nl__im__7);
#line 877
c_rt_lib0clear(&___nl__im__9);
#line 877
c_rt_lib0clear(&___nl__im__0);
#line 877
c_rt_lib0clear(&___nl__im__1);
#line 877
//clear ___nl__bool__3;
#line 877
return ___nl__im__6;
#line 878
goto label_40;
#line 878
label_24:
;
#line 879
c_rt_lib0move(&___nl__im__13,___get_global_string_const(375));
#line 879
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 879
c_rt_lib0clear(&___nl__im__13);
#line 879
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 879
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_register_value(___nl__im__15));
#line 879
c_rt_lib0clear(&___nl__im__15);
#line 879
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 879
c_rt_lib0clear(&___nl__im__12);
#line 879
c_rt_lib0clear(&___nl__im__14);
#line 879
c_rt_lib0clear(&___nl__im__0);
#line 879
c_rt_lib0clear(&___nl__im__1);
#line 879
//clear ___nl__bool__3;
#line 879
c_rt_lib0clear(&___nl__im__6);
#line 879
return ___nl__im__11;
#line 880
goto label_40;
#line 880
label_40:
;
#line 880
//clear ___nl__bool__3;
#line 880
c_rt_lib0clear(&___nl__im__6);
#line 880
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
#line 884
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(138));
#line 884
if(___nl__bool__2){ goto label_19;}
#line 886
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(413));
#line 886
if(___nl__bool__2){ goto label_25;}
#line 888
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 888
if(___nl__bool__2){ goto label_45;}
#line 890
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(414));
#line 890
if(___nl__bool__2){ goto label_64;}
#line 892
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(567));
#line 892
if(___nl__bool__2){ goto label_72;}
#line 894
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(134));
#line 894
if(___nl__bool__2){ goto label_78;}
#line 896
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(571));
#line 896
if(___nl__bool__2){ goto label_84;}
#line 898
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(135));
#line 898
if(___nl__bool__2){ goto label_90;}
#line 898
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 898
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 898
nl_die_arg(___nl__im__3);
#line 884
label_19:
;
#line 885
c_rt_lib0clear(&___nl__im__0);
#line 885
//clear ___nl__bool__2;
#line 885
c_rt_lib0clear(&___nl__im__3);
#line 885
return ___nl__im__1;
#line 886
goto label_96;
#line 886
label_25:
;
#line 887
c_rt_lib0move(&___nl__im__8,___get_global_string_const(413));
#line 887
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 887
c_rt_lib0clear(&___nl__im__8);
#line 887
c_rt_lib0move(&___nl__im__9,___get_global_string_const(465));
#line 887
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 887
c_rt_lib0clear(&___nl__im__7);
#line 887
c_rt_lib0clear(&___nl__im__9);
#line 887
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 887
c_rt_lib0clear(&___nl__im__6);
#line 887
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 887
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 887
c_rt_lib0clear(&___nl__im__5);
#line 887
c_rt_lib0clear(&___nl__im__10);
#line 887
c_rt_lib0clear(&___nl__im__0);
#line 887
c_rt_lib0clear(&___nl__im__1);
#line 887
//clear ___nl__bool__2;
#line 887
c_rt_lib0clear(&___nl__im__3);
#line 887
return ___nl__im__4;
#line 888
goto label_96;
#line 888
label_45:
;
#line 889
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 889
c_rt_lib0move(&___nl__im__15,___get_global_string_const(829));
#line 889
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 889
c_rt_lib0clear(&___nl__im__14);
#line 889
c_rt_lib0clear(&___nl__im__15);
#line 889
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 889
c_rt_lib0clear(&___nl__im__13);
#line 889
c_rt_lib0move(&___nl__im__16,___get_global_string_const(331));
#line 889
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 889
c_rt_lib0clear(&___nl__im__12);
#line 889
c_rt_lib0clear(&___nl__im__16);
#line 889
c_rt_lib0clear(&___nl__im__0);
#line 889
c_rt_lib0clear(&___nl__im__1);
#line 889
//clear ___nl__bool__2;
#line 889
c_rt_lib0clear(&___nl__im__3);
#line 889
c_rt_lib0clear(&___nl__im__4);
#line 889
return ___nl__im__11;
#line 890
goto label_96;
#line 890
label_64:
;
#line 891
c_rt_lib0clear(&___nl__im__0);
#line 891
//clear ___nl__bool__2;
#line 891
c_rt_lib0clear(&___nl__im__3);
#line 891
c_rt_lib0clear(&___nl__im__4);
#line 891
c_rt_lib0clear(&___nl__im__11);
#line 891
return ___nl__im__1;
#line 892
goto label_96;
#line 892
label_72:
;
#line 892
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(567)));
#line 892
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 893
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 893
nl_die_arg(___nl__im__19);
#line 894
goto label_96;
#line 894
label_78:
;
#line 894
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(134)));
#line 894
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 895
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 895
nl_die_arg(___nl__im__22);
#line 896
goto label_96;
#line 896
label_84:
;
#line 896
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(571)));
#line 896
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 897
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 897
nl_die_arg(___nl__im__25);
#line 898
goto label_96;
#line 898
label_90:
;
#line 898
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(135)));
#line 898
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 899
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 899
nl_die_arg(___nl__im__28);
#line 900
goto label_96;
#line 900
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
#line 904
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(138));
#line 904
if(___nl__bool__2){ goto label_19;}
#line 906
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(413));
#line 906
if(___nl__bool__2){ goto label_25;}
#line 908
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 908
if(___nl__bool__2){ goto label_35;}
#line 910
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(414));
#line 910
if(___nl__bool__2){ goto label_54;}
#line 912
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(567));
#line 912
if(___nl__bool__2){ goto label_62;}
#line 914
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(134));
#line 914
if(___nl__bool__2){ goto label_68;}
#line 916
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(571));
#line 916
if(___nl__bool__2){ goto label_74;}
#line 918
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(135));
#line 918
if(___nl__bool__2){ goto label_80;}
#line 918
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 918
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 918
nl_die_arg(___nl__im__3);
#line 904
label_19:
;
#line 905
c_rt_lib0clear(&___nl__im__0);
#line 905
//clear ___nl__bool__2;
#line 905
c_rt_lib0clear(&___nl__im__3);
#line 905
return ___nl__im__1;
#line 906
goto label_86;
#line 906
label_25:
;
#line 907
c_rt_lib0move(&___nl__im__5,___get_global_string_const(830));
#line 907
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 907
c_rt_lib0clear(&___nl__im__5);
#line 907
c_rt_lib0clear(&___nl__im__0);
#line 907
c_rt_lib0clear(&___nl__im__1);
#line 907
//clear ___nl__bool__2;
#line 907
c_rt_lib0clear(&___nl__im__3);
#line 907
return ___nl__im__4;
#line 908
goto label_86;
#line 908
label_35:
;
#line 909
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 909
c_rt_lib0move(&___nl__im__10,___get_global_string_const(831));
#line 909
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 909
c_rt_lib0clear(&___nl__im__9);
#line 909
c_rt_lib0clear(&___nl__im__10);
#line 909
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 909
c_rt_lib0clear(&___nl__im__8);
#line 909
c_rt_lib0move(&___nl__im__11,___get_global_string_const(331));
#line 909
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 909
c_rt_lib0clear(&___nl__im__7);
#line 909
c_rt_lib0clear(&___nl__im__11);
#line 909
c_rt_lib0clear(&___nl__im__0);
#line 909
c_rt_lib0clear(&___nl__im__1);
#line 909
//clear ___nl__bool__2;
#line 909
c_rt_lib0clear(&___nl__im__3);
#line 909
c_rt_lib0clear(&___nl__im__4);
#line 909
return ___nl__im__6;
#line 910
goto label_86;
#line 910
label_54:
;
#line 911
c_rt_lib0clear(&___nl__im__0);
#line 911
//clear ___nl__bool__2;
#line 911
c_rt_lib0clear(&___nl__im__3);
#line 911
c_rt_lib0clear(&___nl__im__4);
#line 911
c_rt_lib0clear(&___nl__im__6);
#line 911
return ___nl__im__1;
#line 912
goto label_86;
#line 912
label_62:
;
#line 912
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(567)));
#line 912
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 913
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 913
nl_die_arg(___nl__im__14);
#line 914
goto label_86;
#line 914
label_68:
;
#line 914
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(134)));
#line 914
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 915
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 915
nl_die_arg(___nl__im__17);
#line 916
goto label_86;
#line 916
label_74:
;
#line 916
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(571)));
#line 916
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 917
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 917
nl_die_arg(___nl__im__20);
#line 918
goto label_86;
#line 918
label_80:
;
#line 918
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(135)));
#line 918
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 919
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 919
nl_die_arg(___nl__im__23);
#line 920
goto label_86;
#line 920
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
#line 924
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 924
___nl__int__3 = 0;
#line 924
___nl__int__4 = 1;
#line 924
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 924
label_4:
;
#line 924
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 924
if(___nl__bool__6){ goto label_34;}
#line 924
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 924
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 925
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(479)));
#line 925
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(215)));
#line 925
c_rt_lib0clear(&___nl__im__10);
#line 925
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 925
c_rt_lib0clear(&___nl__im__9);
#line 925
___nl__bool__8 = !___nl__bool__8;
#line 925
if(___nl__bool__8){ goto label_28;}
#line 925
___nl__bool__11 = true;
#line 925
c_rt_lib0clear(&___nl__im__0);
#line 925
c_rt_lib0clear(&___nl__im__1);
#line 925
c_rt_lib0clear(&___nl__im__2);
#line 925
//clear ___nl__int__3;
#line 925
//clear ___nl__int__4;
#line 925
//clear ___nl__int__5;
#line 925
//clear ___nl__bool__6;
#line 925
c_rt_lib0clear(&___nl__im__7);
#line 925
//clear ___nl__bool__8;
#line 925
return ___nl__bool__11;
#line 925
goto label_28;
#line 925
label_28:
;
#line 925
//clear ___nl__bool__8;
#line 925
//clear ___nl__bool__11;
#line 925
c_rt_lib0clear(&___nl__im__2);
#line 926
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 926
goto label_4;
#line 926
label_34:
;
#line 927
___nl__bool__12 = false;
#line 927
c_rt_lib0clear(&___nl__im__0);
#line 927
c_rt_lib0clear(&___nl__im__1);
#line 927
c_rt_lib0clear(&___nl__im__2);
#line 927
//clear ___nl__int__3;
#line 927
//clear ___nl__int__4;
#line 927
//clear ___nl__int__5;
#line 927
//clear ___nl__bool__6;
#line 927
c_rt_lib0clear(&___nl__im__7);
#line 927
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
#line 931
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(138));
#line 931
___nl__bool__1 = !___nl__bool__1;
#line 931
if(___nl__bool__1){ goto label_8;}
#line 931
___nl__bool__2 = false;
#line 931
c_rt_lib0clear(&___nl__im__0);
#line 931
//clear ___nl__bool__1;
#line 931
return ___nl__bool__2;
#line 931
goto label_8;
#line 931
label_8:
;
#line 931
//clear ___nl__bool__1;
#line 931
//clear ___nl__bool__2;
#line 932
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(413));
#line 932
___nl__bool__3 = !___nl__bool__3;
#line 932
if(___nl__bool__3){ goto label_19;}
#line 932
___nl__bool__4 = false;
#line 932
c_rt_lib0clear(&___nl__im__0);
#line 932
//clear ___nl__bool__3;
#line 932
return ___nl__bool__4;
#line 932
goto label_19;
#line 932
label_19:
;
#line 932
//clear ___nl__bool__3;
#line 932
//clear ___nl__bool__4;
#line 933
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 933
___nl__bool__5 = !___nl__bool__5;
#line 933
if(___nl__bool__5){ goto label_30;}
#line 933
___nl__bool__6 = false;
#line 933
c_rt_lib0clear(&___nl__im__0);
#line 933
//clear ___nl__bool__5;
#line 933
return ___nl__bool__6;
#line 933
goto label_30;
#line 933
label_30:
;
#line 933
//clear ___nl__bool__5;
#line 933
//clear ___nl__bool__6;
#line 934
___nl__bool__7 = true;
#line 934
c_rt_lib0clear(&___nl__im__0);
#line 934
return ___nl__bool__7;
return false;

}

ImmT  generator_js_priv0print(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 938
c_rt_lib0move(&___nl__im__2,___get_global_string_const(66));
#line 938
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 938
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 938
c_rt_lib0move(&___nl__string__3,___get_global_string_const(66));
#line 938
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 938
c_rt_lib0clear(&___nl__im__2);
#line 938
c_rt_lib0clear(&___nl__string__3);
#line 938
c_rt_lib0clear(&___nl__im__0);
#line 938
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
#line 942
c_rt_lib0move(&___nl__im__3, string0lf());
#line 942
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 942
c_rt_lib0clear(&___nl__im__3);
#line 942
c_rt_lib0delete(generator_js_priv0print(___nl__im__2, ___ref___im__1));
#line 942
c_rt_lib0clear(&___nl__im__2);
#line 943
c_rt_lib0move(&___nl__im__4,___get_global_string_const(737));
#line 943
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__4));
#line 943
___nl__int__5 = 1;
#line 943
___nl__int__6 = getIntFromImm(___nl__im__4);
#line 943
___nl__int__7 = ___nl__int__6 + ___nl__int__5;
#line 943
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__7));
#line 943
c_rt_lib0move(&___nl__string__8,___get_global_string_const(737));
#line 943
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__8, ___nl__im__4));
#line 943
c_rt_lib0clear(&___nl__im__4);
#line 943
//clear ___nl__int__5;
#line 943
//clear ___nl__int__6;
#line 943
//clear ___nl__int__7;
#line 943
c_rt_lib0clear(&___nl__string__8);
#line 943
c_rt_lib0clear(&___nl__im__0);
#line 943
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
#line 947
c_rt_lib0move(&___nl__im__2,___get_global_string_const(71));
#line 947
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 947
c_rt_lib0move(&___nl__im__3,___get_global_string_const(741));
#line 947
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__3));
#line 947
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(737)));
#line 947
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 947
c_rt_lib0clear(&___nl__im__7);
#line 947
___nl__int__8 = 1;
#line 947
___nl__int__5 = ___nl__int__6 + ___nl__int__8;
#line 947
//clear ___nl__int__6;
#line 947
//clear ___nl__int__8;
#line 947
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__5));
#line 947
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__0));
#line 947
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 947
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(744), ___nl__im__9, ___get_global_string_const(745), ___nl__im__10, ___get_global_string_const(746), ___nl__im__11));
#line 947
//clear ___nl__int__5;
#line 947
c_rt_lib0clear(&___nl__im__9);
#line 947
c_rt_lib0clear(&___nl__im__10);
#line 947
c_rt_lib0clear(&___nl__im__11);
#line 947
c_rt_lib0array_push(&___nl__im__3, ___nl__im__4);
#line 947
c_rt_lib0move(&___nl__string__12,___get_global_string_const(741));
#line 947
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__12, ___nl__im__3));
#line 947
c_rt_lib0move(&___nl__string__12,___get_global_string_const(71));
#line 947
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__12, ___nl__im__2));
#line 947
c_rt_lib0clear(&___nl__im__2);
#line 947
c_rt_lib0clear(&___nl__im__3);
#line 947
c_rt_lib0clear(&___nl__im__4);
#line 947
c_rt_lib0clear(&___nl__string__12);
#line 947
//clear ___nl__int__0;
#line 947
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
#line 953
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(71)));
#line 953
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(740)));
#line 953
c_rt_lib0clear(&___nl__im__8);
#line 953
___nl__bool__6 = hash0has_key(___nl__im__7, ___nl__im__3);
#line 953
c_rt_lib0clear(&___nl__im__7);
#line 953
___nl__bool__6 = !___nl__bool__6;
#line 953
if(___nl__bool__6){ goto label_15;}
#line 954
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(71)));
#line 954
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(740)));
#line 954
c_rt_lib0clear(&___nl__im__10);
#line 954
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__3));
#line 954
___nl__int__5 = getIntFromImm(___nl__im__11);
#line 954
c_rt_lib0clear(&___nl__im__9);
#line 954
c_rt_lib0clear(&___nl__im__11);
#line 955
goto label_52;
#line 955
label_15:
;
#line 956
c_rt_lib0move(&___nl__im__12,___get_global_string_const(71));
#line 956
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__12));
#line 956
c_rt_lib0move(&___nl__im__13,___get_global_string_const(739));
#line 956
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__13));
#line 956
c_rt_lib0array_push(&___nl__im__13, ___nl__im__3);
#line 956
c_rt_lib0move(&___nl__string__14,___get_global_string_const(739));
#line 956
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__14, ___nl__im__13));
#line 956
c_rt_lib0move(&___nl__string__14,___get_global_string_const(71));
#line 956
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__14, ___nl__im__12));
#line 956
c_rt_lib0clear(&___nl__im__12);
#line 956
c_rt_lib0clear(&___nl__im__13);
#line 956
c_rt_lib0clear(&___nl__string__14);
#line 957
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(71)));
#line 957
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(739)));
#line 957
c_rt_lib0clear(&___nl__im__17);
#line 957
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 957
c_rt_lib0clear(&___nl__im__16);
#line 957
___nl__int__18 = 1;
#line 957
___nl__int__5 = ___nl__int__15 - ___nl__int__18;
#line 957
//clear ___nl__int__15;
#line 957
//clear ___nl__int__18;
#line 958
c_rt_lib0move(&___nl__im__19,___get_global_string_const(71));
#line 958
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__19));
#line 958
c_rt_lib0move(&___nl__im__20,___get_global_string_const(740));
#line 958
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 958
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__5));
#line 958
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__20, ___nl__im__3, ___nl__im__21));
#line 958
c_rt_lib0move(&___nl__string__22,___get_global_string_const(740));
#line 958
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__22, ___nl__im__20));
#line 958
c_rt_lib0move(&___nl__string__22,___get_global_string_const(71));
#line 958
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__22, ___nl__im__19));
#line 958
c_rt_lib0clear(&___nl__im__19);
#line 958
c_rt_lib0clear(&___nl__im__20);
#line 958
c_rt_lib0clear(&___nl__im__21);
#line 958
c_rt_lib0clear(&___nl__string__22);
#line 959
goto label_52;
#line 959
label_52:
;
#line 959
//clear ___nl__bool__6;
#line 960
c_rt_lib0move(&___nl__im__23,___get_global_string_const(71));
#line 960
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__23));
#line 960
c_rt_lib0move(&___nl__im__24,___get_global_string_const(741));
#line 960
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash(___nl__im__23, ___nl__im__24));
#line 961
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(737)));
#line 961
___nl__int__27 = getIntFromImm(___nl__im__28);
#line 961
c_rt_lib0clear(&___nl__im__28);
#line 961
___nl__int__29 = 1;
#line 961
___nl__int__26 = ___nl__int__27 + ___nl__int__29;
#line 961
//clear ___nl__int__27;
#line 961
//clear ___nl__int__29;
#line 961
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__26));
#line 961
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__0));
#line 963
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__1));
#line 963
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__2));
#line 963
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__5));
#line 963
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(560), ___nl__im__34, ___get_global_string_const(742), ___nl__im__35, ___get_global_string_const(743), ___nl__im__36));
#line 963
c_rt_lib0clear(&___nl__im__34);
#line 963
c_rt_lib0clear(&___nl__im__35);
#line 963
c_rt_lib0clear(&___nl__im__36);
#line 963
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__33));
#line 963
c_rt_lib0clear(&___nl__im__33);
#line 963
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(744), ___nl__im__30, ___get_global_string_const(745), ___nl__im__31, ___get_global_string_const(746), ___nl__im__32));
#line 963
//clear ___nl__int__26;
#line 963
c_rt_lib0clear(&___nl__im__30);
#line 963
c_rt_lib0clear(&___nl__im__31);
#line 963
c_rt_lib0clear(&___nl__im__32);
#line 963
c_rt_lib0array_push(&___nl__im__24, ___nl__im__25);
#line 963
c_rt_lib0move(&___nl__string__37,___get_global_string_const(741));
#line 963
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__23, ___nl__string__37, ___nl__im__24));
#line 963
c_rt_lib0move(&___nl__string__37,___get_global_string_const(71));
#line 963
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__37, ___nl__im__23));
#line 963
c_rt_lib0clear(&___nl__im__23);
#line 963
c_rt_lib0clear(&___nl__im__24);
#line 963
c_rt_lib0clear(&___nl__im__25);
#line 963
c_rt_lib0clear(&___nl__string__37);
#line 963
//clear ___nl__int__0;
#line 963
//clear ___nl__int__1;
#line 963
//clear ___nl__int__2;
#line 963
c_rt_lib0clear(&___nl__im__3);
#line 963
//clear ___nl__int__5;
#line 963
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
#line 972
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(741)));
#line 972
c_rt_lib0move(&___nl__im__2, generator_js_priv0generate_sourcemap_mappings(___nl__im__3));
#line 972
c_rt_lib0clear(&___nl__im__3);
#line 973
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 974
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(739)));
#line 974
___nl__int__5 = c_rt_lib0array_len(___nl__im__6);
#line 974
c_rt_lib0clear(&___nl__im__6);
#line 974
___nl__int__7 = 0;
#line 974
___nl__int__8 = 1;
#line 974
label_9:
;
#line 974
___nl__bool__9 = ___nl__int__7 >= ___nl__int__5;
#line 974
if(___nl__bool__9){ goto label_38;}
#line 975
___nl__int__11 = 0;
#line 975
___nl__bool__10 = ___nl__int__7 != ___nl__int__11;
#line 975
//clear ___nl__int__11;
#line 975
___nl__bool__10 = !___nl__bool__10;
#line 975
if(___nl__bool__10){ goto label_21;}
#line 976
c_rt_lib0move(&___nl__im__12,___get_global_string_const(323));
#line 976
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 976
c_rt_lib0clear(&___nl__im__12);
#line 977
goto label_21;
#line 977
label_21:
;
#line 977
//clear ___nl__bool__10;
#line 978
c_rt_lib0move(&___nl__im__15,___get_global_string_const(290));
#line 978
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(739)));
#line 978
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__17, ___nl__int__7));
#line 978
c_rt_lib0clear(&___nl__im__17);
#line 978
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 978
c_rt_lib0clear(&___nl__im__15);
#line 978
c_rt_lib0clear(&___nl__im__16);
#line 978
c_rt_lib0move(&___nl__im__18,___get_global_string_const(290));
#line 978
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__18));
#line 978
c_rt_lib0clear(&___nl__im__14);
#line 978
c_rt_lib0clear(&___nl__im__18);
#line 978
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__13));
#line 978
c_rt_lib0clear(&___nl__im__13);
#line 979
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 979
goto label_9;
#line 979
label_38:
;
#line 980
c_rt_lib0move(&___nl__im__27,___get_global_string_const(832));
#line 980
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__1));
#line 980
c_rt_lib0clear(&___nl__im__27);
#line 982
c_rt_lib0move(&___nl__im__28,___get_global_string_const(833));
#line 982
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 982
c_rt_lib0clear(&___nl__im__26);
#line 982
c_rt_lib0clear(&___nl__im__28);
#line 982
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__1));
#line 982
c_rt_lib0clear(&___nl__im__25);
#line 983
c_rt_lib0move(&___nl__im__29,___get_global_string_const(834));
#line 983
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__29));
#line 983
c_rt_lib0clear(&___nl__im__24);
#line 983
c_rt_lib0clear(&___nl__im__29);
#line 983
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__4));
#line 983
c_rt_lib0clear(&___nl__im__23);
#line 984
c_rt_lib0move(&___nl__im__30,___get_global_string_const(835));
#line 984
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__30));
#line 984
c_rt_lib0clear(&___nl__im__22);
#line 984
c_rt_lib0clear(&___nl__im__30);
#line 984
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__2));
#line 984
c_rt_lib0clear(&___nl__im__21);
#line 985
c_rt_lib0move(&___nl__im__31,___get_global_string_const(836));
#line 985
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__31));
#line 985
c_rt_lib0clear(&___nl__im__20);
#line 985
c_rt_lib0clear(&___nl__im__31);
#line 985
c_rt_lib0clear(&___nl__im__0);
#line 985
c_rt_lib0clear(&___nl__im__1);
#line 985
c_rt_lib0clear(&___nl__im__2);
#line 985
c_rt_lib0clear(&___nl__im__4);
#line 985
//clear ___nl__int__5;
#line 985
//clear ___nl__int__7;
#line 985
//clear ___nl__int__8;
#line 985
//clear ___nl__bool__9;
#line 985
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
#line 990
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 991
___nl__int__2 = 1;
#line 992
___nl__int__3 = 1;
#line 993
___nl__int__4 = 0;
#line 994
___nl__int__6 = 0;
#line 994
___nl__int__7 = 1;
#line 994
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 994
label_7:
;
#line 994
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 994
if(___nl__bool__9){ goto label_98;}
#line 994
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 994
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 995
label_12:
;
#line 995
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(744)));
#line 995
___nl__int__12 = getIntFromImm(___nl__im__13);
#line 995
c_rt_lib0clear(&___nl__im__13);
#line 995
___nl__bool__11 = ___nl__int__2 < ___nl__int__12;
#line 995
//clear ___nl__int__12;
#line 995
___nl__bool__11 = !___nl__bool__11;
#line 995
if(___nl__bool__11){ goto label_27;}
#line 996
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 996
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__14));
#line 996
c_rt_lib0clear(&___nl__im__14);
#line 997
___nl__int__15 = 1;
#line 997
___nl__int__2 = ___nl__int__2 + ___nl__int__15;
#line 997
//clear ___nl__int__15;
#line 998
goto label_12;
#line 998
label_27:
;
#line 999
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(745)));
#line 999
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 999
c_rt_lib0clear(&___nl__im__18);
#line 999
___nl__int__16 = ___nl__int__17 - ___nl__int__3;
#line 999
//clear ___nl__int__17;
#line 1000
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(746)));
#line 1000
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(81));
#line 1000
if(___nl__bool__20){ goto label_41;}
#line 1002
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(80));
#line 1002
if(___nl__bool__20){ goto label_50;}
#line 1002
c_rt_lib0move(&___nl__im__21,___get_global_string_const(15));
#line 1002
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__19));
#line 1002
nl_die_arg(___nl__im__21);
#line 1000
label_41:
;
#line 1001
___nl__int__23 = 0;
#line 1001
___nl__int__24 = 0;
#line 1001
c_rt_lib0move(&___nl__im__22, generator_js_priv0mapping_to_base64_vlq(___nl__int__23, ___nl__int__16, ___nl__int__24));
#line 1001
//clear ___nl__int__23;
#line 1001
//clear ___nl__int__24;
#line 1001
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__22));
#line 1001
c_rt_lib0clear(&___nl__im__22);
#line 1002
goto label_91;
#line 1002
label_50:
;
#line 1002
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(80)));
#line 1002
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1003
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(743)));
#line 1003
___nl__int__28 = getIntFromImm(___nl__im__29);
#line 1003
c_rt_lib0clear(&___nl__im__29);
#line 1003
___nl__int__27 = ___nl__int__28 - ___nl__int__4;
#line 1003
//clear ___nl__int__28;
#line 1004
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(560)));
#line 1004
___nl__int__31 = getIntFromImm(___nl__im__32);
#line 1004
c_rt_lib0clear(&___nl__im__32);
#line 1004
___nl__int__33 = 0;
#line 1004
c_rt_lib0move(&___nl__im__30, generator_js_priv0mapping_with_name_to_base64_vlq(___nl__int__31, ___nl__int__16, ___nl__int__33, ___nl__int__27));
#line 1004
//clear ___nl__int__31;
#line 1004
//clear ___nl__int__33;
#line 1005
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(742)));
#line 1005
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 1005
c_rt_lib0clear(&___nl__im__37);
#line 1005
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(560)));
#line 1005
___nl__int__38 = getIntFromImm(___nl__im__39);
#line 1005
c_rt_lib0clear(&___nl__im__39);
#line 1005
___nl__int__35 = ___nl__int__36 - ___nl__int__38;
#line 1005
//clear ___nl__int__36;
#line 1005
//clear ___nl__int__38;
#line 1005
___nl__int__40 = 0;
#line 1005
___nl__int__41 = 0;
#line 1005
c_rt_lib0move(&___nl__im__34, generator_js_priv0mapping_to_base64_vlq(___nl__int__35, ___nl__int__40, ___nl__int__41));
#line 1005
//clear ___nl__int__35;
#line 1005
//clear ___nl__int__40;
#line 1005
//clear ___nl__int__41;
#line 1006
c_rt_lib0move(&___nl__im__44,___get_global_string_const(323));
#line 1006
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__30, ___nl__im__44));
#line 1006
c_rt_lib0clear(&___nl__im__44);
#line 1006
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__34));
#line 1006
c_rt_lib0clear(&___nl__im__43);
#line 1006
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__42));
#line 1006
c_rt_lib0clear(&___nl__im__42);
#line 1007
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(743)));
#line 1007
___nl__int__4 = getIntFromImm(___nl__im__45);
#line 1007
c_rt_lib0clear(&___nl__im__45);
#line 1008
goto label_91;
#line 1008
label_91:
;
#line 1009
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(745)));
#line 1009
___nl__int__3 = getIntFromImm(___nl__im__46);
#line 1009
c_rt_lib0clear(&___nl__im__46);
#line 1009
c_rt_lib0clear(&___nl__im__5);
#line 1010
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1010
goto label_7;
#line 1010
label_98:
;
#line 1011
c_rt_lib0clear(&___nl__im__0);
#line 1011
//clear ___nl__int__2;
#line 1011
//clear ___nl__int__3;
#line 1011
//clear ___nl__int__4;
#line 1011
c_rt_lib0clear(&___nl__im__5);
#line 1011
//clear ___nl__int__6;
#line 1011
//clear ___nl__int__7;
#line 1011
//clear ___nl__int__8;
#line 1011
//clear ___nl__bool__9;
#line 1011
c_rt_lib0clear(&___nl__im__10);
#line 1011
//clear ___nl__bool__11;
#line 1011
//clear ___nl__int__16;
#line 1011
c_rt_lib0clear(&___nl__im__19);
#line 1011
//clear ___nl__bool__20;
#line 1011
c_rt_lib0clear(&___nl__im__21);
#line 1011
c_rt_lib0clear(&___nl__im__25);
#line 1011
c_rt_lib0clear(&___nl__im__26);
#line 1011
//clear ___nl__int__27;
#line 1011
c_rt_lib0clear(&___nl__im__30);
#line 1011
c_rt_lib0clear(&___nl__im__34);
#line 1011
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
#line 1015
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1015
___nl__int__6 = 0;
#line 1015
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 1015
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__1));
#line 1015
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 1015
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(4, ___nl__im__5, ___nl__im__7, ___nl__im__8, ___nl__im__9));
#line 1015
c_rt_lib0clear(&___nl__im__5);
#line 1015
//clear ___nl__int__6;
#line 1015
c_rt_lib0clear(&___nl__im__7);
#line 1015
c_rt_lib0clear(&___nl__im__8);
#line 1015
c_rt_lib0clear(&___nl__im__9);
#line 1015
c_rt_lib0move(&___nl__im__3, generator_js_priv0numbers_to_base64_vlq(___nl__im__4));
#line 1015
c_rt_lib0clear(&___nl__im__4);
#line 1015
//clear ___nl__int__0;
#line 1015
//clear ___nl__int__1;
#line 1015
//clear ___nl__int__2;
#line 1015
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
#line 1020
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__0));
#line 1020
___nl__int__7 = 0;
#line 1020
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 1020
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__1));
#line 1020
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__2));
#line 1020
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__3));
#line 1020
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(5, ___nl__im__6, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 1020
c_rt_lib0clear(&___nl__im__6);
#line 1020
//clear ___nl__int__7;
#line 1020
c_rt_lib0clear(&___nl__im__8);
#line 1020
c_rt_lib0clear(&___nl__im__9);
#line 1020
c_rt_lib0clear(&___nl__im__10);
#line 1020
c_rt_lib0clear(&___nl__im__11);
#line 1020
c_rt_lib0move(&___nl__im__4, generator_js_priv0numbers_to_base64_vlq(___nl__im__5));
#line 1020
c_rt_lib0clear(&___nl__im__5);
#line 1020
//clear ___nl__int__0;
#line 1020
//clear ___nl__int__1;
#line 1020
//clear ___nl__int__2;
#line 1020
//clear ___nl__int__3;
#line 1020
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
#line 1024
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 1025
___nl__int__3 = 0;
#line 1025
___nl__int__4 = 1;
#line 1025
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 1025
label_4:
;
#line 1025
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 1025
if(___nl__bool__6){ goto label_15;}
#line 1025
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 1025
___nl__int__2 = getIntFromImm(___nl__im__7);
#line 1026
c_rt_lib0move(&___nl__im__8, generator_js_priv0number_to_base64_vlq(___nl__int__2));
#line 1026
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__8));
#line 1026
c_rt_lib0clear(&___nl__im__8);
#line 1026
//clear ___nl__int__2;
#line 1027
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 1027
goto label_4;
#line 1027
label_15:
;
#line 1028
c_rt_lib0clear(&___nl__im__0);
#line 1028
//clear ___nl__int__2;
#line 1028
//clear ___nl__int__3;
#line 1028
//clear ___nl__int__4;
#line 1028
//clear ___nl__int__5;
#line 1028
//clear ___nl__bool__6;
#line 1028
c_rt_lib0clear(&___nl__im__7);
#line 1028
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
#line 1032
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 1033
___nl__bool__3 = true;
#line 1033
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_base64_vlq_digit(&___nl__int__0, ___nl__bool__3));
#line 1033
//clear ___nl__bool__3;
#line 1033
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 1033
c_rt_lib0clear(&___nl__im__2);
#line 1034
label_6:
;
#line 1034
___nl__int__5 = 0;
#line 1034
___nl__bool__4 = ___nl__int__0 > ___nl__int__5;
#line 1034
//clear ___nl__int__5;
#line 1034
___nl__bool__4 = !___nl__bool__4;
#line 1034
if(___nl__bool__4){ goto label_18;}
#line 1035
___nl__bool__7 = false;
#line 1035
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_base64_vlq_digit(&___nl__int__0, ___nl__bool__7));
#line 1035
//clear ___nl__bool__7;
#line 1035
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 1035
c_rt_lib0clear(&___nl__im__6);
#line 1036
goto label_6;
#line 1036
label_18:
;
#line 1037
//clear ___nl__int__0;
#line 1037
//clear ___nl__bool__4;
#line 1037
return ___nl__im__1;
#line 1037
//clear ___nl__int__0;
#line 1037
c_rt_lib0clear(&___nl__im__1);
#line 1037
//clear ___nl__bool__4;
#line 1037
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
#line 1043
___nl__int__2 = 0;
#line 1046
___nl__bool__3 = ___nl__bool__1;
#line 1046
___nl__bool__4 = !___nl__bool__3;
#line 1046
if(___nl__bool__4){ goto label_7;}
#line 1046
___nl__int__5 = 0;
#line 1046
___nl__bool__3 = (*___ref___int__0) < ___nl__int__5;
#line 1046
//clear ___nl__int__5;
#line 1046
label_7:
;
#line 1046
//clear ___nl__bool__4;
#line 1046
___nl__bool__3 = !___nl__bool__3;
#line 1046
if(___nl__bool__3){ goto label_17;}
#line 1047
___nl__int__6 = 1;
#line 1047
___nl__int__2 = ___nl__int__2 + ___nl__int__6;
#line 1047
//clear ___nl__int__6;
#line 1048
(*___ref___int__0) = (*___ref___int__0);
#line 1048
(*___ref___int__0) = -(*___ref___int__0);
#line 1049
goto label_17;
#line 1049
label_17:
;
#line 1049
//clear ___nl__bool__3;
#line 1052
___nl__bool__7 = ___nl__bool__1;
#line 1052
___nl__bool__7 = !___nl__bool__7;
#line 1052
if(___nl__bool__7){ goto label_35;}
#line 1053
___nl__int__9 = 2;
#line 1053
___nl__int__11 = 16;
#line 1053
___nl__int__10 = (*___ref___int__0) % ___nl__int__11;
#line 1053
//clear ___nl__int__11;
#line 1053
___nl__int__8 = ___nl__int__9 * ___nl__int__10;
#line 1053
//clear ___nl__int__9;
#line 1053
//clear ___nl__int__10;
#line 1053
___nl__int__2 = ___nl__int__2 + ___nl__int__8;
#line 1053
//clear ___nl__int__8;
#line 1054
___nl__int__12 = 16;
#line 1054
(*___ref___int__0) = (*___ref___int__0) / ___nl__int__12;
#line 1054
//clear ___nl__int__12;
#line 1055
goto label_45;
#line 1055
label_35:
;
#line 1056
___nl__int__14 = 32;
#line 1056
___nl__int__13 = (*___ref___int__0) % ___nl__int__14;
#line 1056
//clear ___nl__int__14;
#line 1056
___nl__int__2 = ___nl__int__2 + ___nl__int__13;
#line 1056
//clear ___nl__int__13;
#line 1057
___nl__int__15 = 32;
#line 1057
(*___ref___int__0) = (*___ref___int__0) / ___nl__int__15;
#line 1057
//clear ___nl__int__15;
#line 1058
goto label_45;
#line 1058
label_45:
;
#line 1058
//clear ___nl__bool__7;
#line 1061
___nl__int__17 = 0;
#line 1061
___nl__bool__16 = (*___ref___int__0) > ___nl__int__17;
#line 1061
//clear ___nl__int__17;
#line 1061
___nl__bool__16 = !___nl__bool__16;
#line 1061
if(___nl__bool__16){ goto label_56;}
#line 1062
___nl__int__18 = 32;
#line 1062
___nl__int__2 = ___nl__int__2 + ___nl__int__18;
#line 1062
//clear ___nl__int__18;
#line 1063
goto label_56;
#line 1063
label_56:
;
#line 1063
//clear ___nl__bool__16;
#line 1065
c_rt_lib0move(&___nl__im__20, generator_js_priv0base64_table());
#line 1065
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__20, ___nl__int__2));
#line 1065
c_rt_lib0clear(&___nl__im__20);
#line 1065
//clear ___nl__bool__1;
#line 1065
//clear ___nl__int__2;
#line 1065
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
#line 1069
c_rt_lib0move(&___nl__im__1,___get_global_string_const(837));
#line 1069
c_rt_lib0move(&___nl__im__2,___get_global_string_const(838));
#line 1069
c_rt_lib0move(&___nl__im__3,___get_global_string_const(839));
#line 1069
c_rt_lib0move(&___nl__im__4,___get_global_string_const(840));
#line 1069
c_rt_lib0move(&___nl__im__5,___get_global_string_const(841));
#line 1069
c_rt_lib0move(&___nl__im__6,___get_global_string_const(842));
#line 1069
c_rt_lib0move(&___nl__im__7,___get_global_string_const(843));
#line 1069
c_rt_lib0move(&___nl__im__8,___get_global_string_const(844));
#line 1069
c_rt_lib0move(&___nl__im__9,___get_global_string_const(845));
#line 1069
c_rt_lib0move(&___nl__im__10,___get_global_string_const(846));
#line 1069
c_rt_lib0move(&___nl__im__11,___get_global_string_const(847));
#line 1069
c_rt_lib0move(&___nl__im__12,___get_global_string_const(848));
#line 1069
c_rt_lib0move(&___nl__im__13,___get_global_string_const(849));
#line 1069
c_rt_lib0move(&___nl__im__14,___get_global_string_const(850));
#line 1069
c_rt_lib0move(&___nl__im__15,___get_global_string_const(851));
#line 1069
c_rt_lib0move(&___nl__im__16,___get_global_string_const(852));
#line 1069
c_rt_lib0move(&___nl__im__17,___get_global_string_const(853));
#line 1069
c_rt_lib0move(&___nl__im__18,___get_global_string_const(854));
#line 1069
c_rt_lib0move(&___nl__im__19,___get_global_string_const(855));
#line 1069
c_rt_lib0move(&___nl__im__20,___get_global_string_const(856));
#line 1069
c_rt_lib0move(&___nl__im__21,___get_global_string_const(857));
#line 1069
c_rt_lib0move(&___nl__im__22,___get_global_string_const(858));
#line 1069
c_rt_lib0move(&___nl__im__23,___get_global_string_const(859));
#line 1069
c_rt_lib0move(&___nl__im__24,___get_global_string_const(860));
#line 1069
c_rt_lib0move(&___nl__im__25,___get_global_string_const(861));
#line 1069
c_rt_lib0move(&___nl__im__26,___get_global_string_const(862));
#line 1070
c_rt_lib0move(&___nl__im__27,___get_global_string_const(863));
#line 1070
c_rt_lib0move(&___nl__im__28,___get_global_string_const(864));
#line 1070
c_rt_lib0move(&___nl__im__29,___get_global_string_const(65));
#line 1070
c_rt_lib0move(&___nl__im__30,___get_global_string_const(865));
#line 1070
c_rt_lib0move(&___nl__im__31,___get_global_string_const(866));
#line 1070
c_rt_lib0move(&___nl__im__32,___get_global_string_const(867));
#line 1070
c_rt_lib0move(&___nl__im__33,___get_global_string_const(868));
#line 1070
c_rt_lib0move(&___nl__im__34,___get_global_string_const(72));
#line 1070
c_rt_lib0move(&___nl__im__35,___get_global_string_const(869));
#line 1070
c_rt_lib0move(&___nl__im__36,___get_global_string_const(870));
#line 1070
c_rt_lib0move(&___nl__im__37,___get_global_string_const(871));
#line 1070
c_rt_lib0move(&___nl__im__38,___get_global_string_const(872));
#line 1070
c_rt_lib0move(&___nl__im__39,___get_global_string_const(873));
#line 1070
c_rt_lib0move(&___nl__im__40,___get_global_string_const(306));
#line 1070
c_rt_lib0move(&___nl__im__41,___get_global_string_const(201));
#line 1070
c_rt_lib0move(&___nl__im__42,___get_global_string_const(874));
#line 1070
c_rt_lib0move(&___nl__im__43,___get_global_string_const(875));
#line 1070
c_rt_lib0move(&___nl__im__44,___get_global_string_const(307));
#line 1070
c_rt_lib0move(&___nl__im__45,___get_global_string_const(876));
#line 1070
c_rt_lib0move(&___nl__im__46,___get_global_string_const(308));
#line 1070
c_rt_lib0move(&___nl__im__47,___get_global_string_const(877));
#line 1070
c_rt_lib0move(&___nl__im__48,___get_global_string_const(878));
#line 1070
c_rt_lib0move(&___nl__im__49,___get_global_string_const(879));
#line 1070
c_rt_lib0move(&___nl__im__50,___get_global_string_const(311));
#line 1070
c_rt_lib0move(&___nl__im__51,___get_global_string_const(880));
#line 1070
c_rt_lib0move(&___nl__im__52,___get_global_string_const(881));
#line 1071
c_rt_lib0move(&___nl__im__53,___get_global_string_const(20));
#line 1071
c_rt_lib0move(&___nl__im__54,___get_global_string_const(40));
#line 1071
c_rt_lib0move(&___nl__im__55,___get_global_string_const(882));
#line 1071
c_rt_lib0move(&___nl__im__56,___get_global_string_const(883));
#line 1071
c_rt_lib0move(&___nl__im__57,___get_global_string_const(884));
#line 1071
c_rt_lib0move(&___nl__im__58,___get_global_string_const(885));
#line 1071
c_rt_lib0move(&___nl__im__59,___get_global_string_const(886));
#line 1071
c_rt_lib0move(&___nl__im__60,___get_global_string_const(887));
#line 1071
c_rt_lib0move(&___nl__im__61,___get_global_string_const(888));
#line 1071
c_rt_lib0move(&___nl__im__62,___get_global_string_const(889));
#line 1071
c_rt_lib0move(&___nl__im__63,___get_global_string_const(377));
#line 1071
c_rt_lib0move(&___nl__im__64,___get_global_string_const(110));
#line 1071
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(64, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17, ___nl__im__18, ___nl__im__19, ___nl__im__20, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__im__25, ___nl__im__26, ___nl__im__27, ___nl__im__28, ___nl__im__29, ___nl__im__30, ___nl__im__31, ___nl__im__32, ___nl__im__33, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__im__38, ___nl__im__39, ___nl__im__40, ___nl__im__41, ___nl__im__42, ___nl__im__43, ___nl__im__44, ___nl__im__45, ___nl__im__46, ___nl__im__47, ___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___nl__im__52, ___nl__im__53, ___nl__im__54, ___nl__im__55, ___nl__im__56, ___nl__im__57, ___nl__im__58, ___nl__im__59, ___nl__im__60, ___nl__im__61, ___nl__im__62, ___nl__im__63, ___nl__im__64));
#line 1071
c_rt_lib0clear(&___nl__im__1);
#line 1071
c_rt_lib0clear(&___nl__im__2);
#line 1071
c_rt_lib0clear(&___nl__im__3);
#line 1071
c_rt_lib0clear(&___nl__im__4);
#line 1071
c_rt_lib0clear(&___nl__im__5);
#line 1071
c_rt_lib0clear(&___nl__im__6);
#line 1071
c_rt_lib0clear(&___nl__im__7);
#line 1071
c_rt_lib0clear(&___nl__im__8);
#line 1071
c_rt_lib0clear(&___nl__im__9);
#line 1071
c_rt_lib0clear(&___nl__im__10);
#line 1071
c_rt_lib0clear(&___nl__im__11);
#line 1071
c_rt_lib0clear(&___nl__im__12);
#line 1071
c_rt_lib0clear(&___nl__im__13);
#line 1071
c_rt_lib0clear(&___nl__im__14);
#line 1071
c_rt_lib0clear(&___nl__im__15);
#line 1071
c_rt_lib0clear(&___nl__im__16);
#line 1071
c_rt_lib0clear(&___nl__im__17);
#line 1071
c_rt_lib0clear(&___nl__im__18);
#line 1071
c_rt_lib0clear(&___nl__im__19);
#line 1071
c_rt_lib0clear(&___nl__im__20);
#line 1071
c_rt_lib0clear(&___nl__im__21);
#line 1071
c_rt_lib0clear(&___nl__im__22);
#line 1071
c_rt_lib0clear(&___nl__im__23);
#line 1071
c_rt_lib0clear(&___nl__im__24);
#line 1071
c_rt_lib0clear(&___nl__im__25);
#line 1071
c_rt_lib0clear(&___nl__im__26);
#line 1071
c_rt_lib0clear(&___nl__im__27);
#line 1071
c_rt_lib0clear(&___nl__im__28);
#line 1071
c_rt_lib0clear(&___nl__im__29);
#line 1071
c_rt_lib0clear(&___nl__im__30);
#line 1071
c_rt_lib0clear(&___nl__im__31);
#line 1071
c_rt_lib0clear(&___nl__im__32);
#line 1071
c_rt_lib0clear(&___nl__im__33);
#line 1071
c_rt_lib0clear(&___nl__im__34);
#line 1071
c_rt_lib0clear(&___nl__im__35);
#line 1071
c_rt_lib0clear(&___nl__im__36);
#line 1071
c_rt_lib0clear(&___nl__im__37);
#line 1071
c_rt_lib0clear(&___nl__im__38);
#line 1071
c_rt_lib0clear(&___nl__im__39);
#line 1071
c_rt_lib0clear(&___nl__im__40);
#line 1071
c_rt_lib0clear(&___nl__im__41);
#line 1071
c_rt_lib0clear(&___nl__im__42);
#line 1071
c_rt_lib0clear(&___nl__im__43);
#line 1071
c_rt_lib0clear(&___nl__im__44);
#line 1071
c_rt_lib0clear(&___nl__im__45);
#line 1071
c_rt_lib0clear(&___nl__im__46);
#line 1071
c_rt_lib0clear(&___nl__im__47);
#line 1071
c_rt_lib0clear(&___nl__im__48);
#line 1071
c_rt_lib0clear(&___nl__im__49);
#line 1071
c_rt_lib0clear(&___nl__im__50);
#line 1071
c_rt_lib0clear(&___nl__im__51);
#line 1071
c_rt_lib0clear(&___nl__im__52);
#line 1071
c_rt_lib0clear(&___nl__im__53);
#line 1071
c_rt_lib0clear(&___nl__im__54);
#line 1071
c_rt_lib0clear(&___nl__im__55);
#line 1071
c_rt_lib0clear(&___nl__im__56);
#line 1071
c_rt_lib0clear(&___nl__im__57);
#line 1071
c_rt_lib0clear(&___nl__im__58);
#line 1071
c_rt_lib0clear(&___nl__im__59);
#line 1071
c_rt_lib0clear(&___nl__im__60);
#line 1071
c_rt_lib0clear(&___nl__im__61);
#line 1071
c_rt_lib0clear(&___nl__im__62);
#line 1071
c_rt_lib0clear(&___nl__im__63);
#line 1071
c_rt_lib0clear(&___nl__im__64);
#line 1071
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
