
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
#line 1 "generator_js.nl"

static ImmT *__const__f = NULL;
void generator_js_priv0__const__init();
ImmT generator_js_priv0__const__sim(int __nr);
ImmT generator_js_priv0__const__sing(int __nr);

ImmT  generator_js_priv0get_namespace_name();
ImmT  generator_js_priv0print_module_prolog(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_module_epilog(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
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
#line 15
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 17
c_rt_lib0move(&___nl__im__6, ptd0ptd_im());
#line 17
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 17
c_rt_lib0clear(&___nl__im__6);
#line 18
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 18
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__5, ___get_global_string_const(168), ___nl__im__7));
#line 18
c_rt_lib0clear(&___nl__im__5);
#line 18
c_rt_lib0clear(&___nl__im__7);
#line 18
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 18
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(66), ___nl__im__2, ___get_global_string_const(726), ___nl__im__3, ___get_global_string_const(213), ___nl__im__8));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__8);
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

ImmT generator_js_priv0get_namespace_name(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(1);
}
ImmT generator_js_priv0get_namespace_name0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 25
c_rt_lib0move(&___nl__im__0,___get_global_string_const(727));
#line 25
return ___nl__im__0;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return NULL;
return NULL;

}

ImmT  generator_js0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_js0generate");
nlasm0result_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = generator_js0generate(*var0, *var1);
return res;
}
ImmT  generator_js0generate(nlasm0result_t0type ___nl__im__0,ImmT  ___nl__im__1) {
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
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 30
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 31
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 31
c_rt_lib0move(&___nl__im__6,___get_global_string_const(728));
#line 31
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__5, ___get_global_string_const(168), ___nl__im__6));
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 32
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(66), ___nl__im__3, ___get_global_string_const(726), ___nl__im__4, ___get_global_string_const(213), ___nl__im__7));
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0delete(generator_js_priv0print_module_prolog(___nl__im__1, &___nl__im__2));
#line 36
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 36
___nl__int__10 = 0;
#line 36
___nl__int__11 = 1;
#line 36
___nl__int__12 = c_rt_lib0array_len(___nl__im__8);
#line 36
label_16:
;
#line 36
___nl__bool__13 = ___nl__int__10 >= ___nl__int__12;
#line 36
if(___nl__bool__13){ goto label_25;}
#line 36
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__8, ___nl__int__10));
#line 36
c_rt_lib0copy(&___nl__im__9, ___nl__im__14);
#line 37
c_rt_lib0delete(generator_js_priv0print_function_or_singleton(___nl__im__9, &___nl__im__2));
#line 37
c_rt_lib0clear(&___nl__im__9);
#line 38
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 38
goto label_16;
#line 38
label_25:
;
#line 39
c_rt_lib0delete(generator_js_priv0print_consts(&___nl__im__2));
#line 40
c_rt_lib0delete(generator_js_priv0print_module_epilog(___nl__im__1, &___nl__im__2));
#line 42
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(66)));
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
c_rt_lib0clear(&___nl__im__9);
#line 42
//clear ___nl__int__10;
#line 42
//clear ___nl__int__11;
#line 42
//clear ___nl__int__12;
#line 42
//clear ___nl__bool__13;
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
return ___nl__im__15;
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
#line 46
c_rt_lib0move(&___nl__im__4,___get_global_string_const(729));
#line 46
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 46
c_rt_lib0clear(&___nl__im__4);
#line 46
c_rt_lib0move(&___nl__im__5,___get_global_string_const(442));
#line 46
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 46
c_rt_lib0clear(&___nl__im__3);
#line 46
c_rt_lib0clear(&___nl__im__5);
#line 46
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 46
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0move(&___nl__im__8,___get_global_string_const(730));
#line 47
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 47
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 47
c_rt_lib0clear(&___nl__im__8);
#line 47
c_rt_lib0clear(&___nl__im__9);
#line 47
c_rt_lib0move(&___nl__im__10,___get_global_string_const(731));
#line 47
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 47
c_rt_lib0clear(&___nl__im__7);
#line 47
c_rt_lib0clear(&___nl__im__10);
#line 47
c_rt_lib0delete(generator_js_priv0println(___nl__im__6, ___ref___im__1));
#line 47
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 48
c_rt_lib0move(&___nl__im__15,___get_global_string_const(110));
#line 48
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 48
c_rt_lib0clear(&___nl__im__14);
#line 48
c_rt_lib0clear(&___nl__im__15);
#line 48
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 48
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 48
c_rt_lib0clear(&___nl__im__13);
#line 48
c_rt_lib0clear(&___nl__im__16);
#line 48
c_rt_lib0move(&___nl__im__17,___get_global_string_const(732));
#line 48
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 48
c_rt_lib0clear(&___nl__im__12);
#line 48
c_rt_lib0clear(&___nl__im__17);
#line 48
c_rt_lib0delete(generator_js_priv0println(___nl__im__11, ___ref___im__1));
#line 48
c_rt_lib0clear(&___nl__im__11);
#line 48
c_rt_lib0clear(&___nl__im__0);
#line 48
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_module_epilog(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
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
#line 52
c_rt_lib0move(&___nl__im__7,___get_global_string_const(733));
#line 52
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 52
c_rt_lib0clear(&___nl__im__7);
#line 52
c_rt_lib0move(&___nl__im__8,___get_global_string_const(504));
#line 52
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 52
c_rt_lib0clear(&___nl__im__6);
#line 52
c_rt_lib0clear(&___nl__im__8);
#line 52
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 52
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__9));
#line 52
c_rt_lib0clear(&___nl__im__5);
#line 52
c_rt_lib0clear(&___nl__im__9);
#line 52
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 52
c_rt_lib0clear(&___nl__im__4);
#line 52
c_rt_lib0move(&___nl__im__10,___get_global_string_const(734));
#line 52
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__10));
#line 52
c_rt_lib0clear(&___nl__im__3);
#line 52
c_rt_lib0clear(&___nl__im__10);
#line 52
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 52
c_rt_lib0clear(&___nl__im__2);
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
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
#line 56
c_rt_lib0move(&___nl__im__3,___get_global_string_const(729));
#line 56
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(726)));
#line 56
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(168)));
#line 56
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0move(&___nl__im__6,___get_global_string_const(735));
#line 56
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__6));
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0delete(generator_js_priv0println(___nl__im__1, ___ref___im__0));
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 57
___nl__int__7 = 0;
#line 58
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(726)));
#line 58
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(127)));
#line 58
c_rt_lib0clear(&___nl__im__9);
#line 58
___nl__int__11 = 0;
#line 58
___nl__int__12 = 1;
#line 58
___nl__int__13 = c_rt_lib0array_len(___nl__im__8);
#line 58
label_20:
;
#line 58
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 58
if(___nl__bool__14){ goto label_56;}
#line 58
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__11));
#line 58
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 59
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(726)));
#line 59
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(168)));
#line 59
c_rt_lib0clear(&___nl__im__22);
#line 59
c_rt_lib0move(&___nl__im__23,___get_global_string_const(316));
#line 59
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 59
c_rt_lib0clear(&___nl__im__21);
#line 59
c_rt_lib0clear(&___nl__im__23);
#line 59
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__7));
#line 59
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__string__24));
#line 59
c_rt_lib0clear(&___nl__im__20);
#line 59
c_rt_lib0clear(&___nl__string__24);
#line 59
c_rt_lib0move(&___nl__im__25,___get_global_string_const(518));
#line 59
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__25));
#line 59
c_rt_lib0clear(&___nl__im__19);
#line 59
c_rt_lib0clear(&___nl__im__25);
#line 59
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_const_value(___nl__im__10));
#line 59
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__26));
#line 59
c_rt_lib0clear(&___nl__im__18);
#line 59
c_rt_lib0clear(&___nl__im__26);
#line 59
c_rt_lib0move(&___nl__im__27,___get_global_string_const(442));
#line 59
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__27));
#line 59
c_rt_lib0clear(&___nl__im__17);
#line 59
c_rt_lib0clear(&___nl__im__27);
#line 59
c_rt_lib0delete(generator_js_priv0print(___nl__im__16, ___ref___im__0));
#line 59
c_rt_lib0clear(&___nl__im__16);
#line 60
___nl__int__28 = 1;
#line 60
___nl__int__7 = ___nl__int__7 + ___nl__int__28;
#line 60
//clear ___nl__int__28;
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 61
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 61
goto label_20;
#line 61
label_56:
;
#line 61
//clear ___nl__int__7;
#line 61
c_rt_lib0clear(&___nl__im__8);
#line 61
c_rt_lib0clear(&___nl__im__10);
#line 61
//clear ___nl__int__11;
#line 61
//clear ___nl__int__12;
#line 61
//clear ___nl__int__13;
#line 61
//clear ___nl__bool__14;
#line 61
c_rt_lib0clear(&___nl__im__15);
#line 61
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_const_value_aggr(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 65
c_rt_lib0move(&___nl__im__2,___get_global_string_const(726));
#line 65
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 65
c_rt_lib0move(&___nl__im__3,___get_global_string_const(127));
#line 65
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__3));
#line 65
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__0));
#line 65
c_rt_lib0move(&___nl__string__4,___get_global_string_const(127));
#line 65
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__4, ___nl__im__3));
#line 65
c_rt_lib0move(&___nl__string__4,___get_global_string_const(726));
#line 65
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__4, ___nl__im__2));
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__string__4);
#line 66
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 66
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(168)));
#line 66
c_rt_lib0clear(&___nl__im__9);
#line 66
c_rt_lib0move(&___nl__im__10,___get_global_string_const(316));
#line 66
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 66
c_rt_lib0clear(&___nl__im__10);
#line 66
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 66
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(127)));
#line 66
c_rt_lib0clear(&___nl__im__14);
#line 66
___nl__int__12 = c_rt_lib0array_len(___nl__im__13);
#line 66
c_rt_lib0clear(&___nl__im__13);
#line 66
___nl__int__15 = 1;
#line 66
___nl__int__11 = ___nl__int__12 - ___nl__int__15;
#line 66
//clear ___nl__int__12;
#line 66
//clear ___nl__int__15;
#line 66
c_rt_lib0move(&___nl__string__16, c_rt_lib0int_to_string(___nl__int__11));
#line 66
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__16));
#line 66
c_rt_lib0clear(&___nl__im__7);
#line 66
//clear ___nl__int__11;
#line 66
c_rt_lib0clear(&___nl__string__16);
#line 66
c_rt_lib0move(&___nl__im__17,___get_global_string_const(317));
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__17));
#line 66
c_rt_lib0clear(&___nl__im__6);
#line 66
c_rt_lib0clear(&___nl__im__17);
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
return ___nl__im__5;
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
#line 70
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 70
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(211));
#line 70
if(___nl__bool__3){ goto label_8;}
#line 72
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(467));
#line 72
if(___nl__bool__3){ goto label_23;}
#line 72
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 72
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 72
nl_die_arg(___nl__im__4);
#line 70
label_8:
;
#line 71
c_rt_lib0move(&___nl__im__7,___get_global_string_const(110));
#line 71
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 71
c_rt_lib0clear(&___nl__im__7);
#line 71
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 71
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 71
c_rt_lib0clear(&___nl__im__6);
#line 71
c_rt_lib0clear(&___nl__im__8);
#line 71
c_rt_lib0clear(&___nl__im__0);
#line 71
c_rt_lib0clear(&___nl__im__1);
#line 71
c_rt_lib0clear(&___nl__im__2);
#line 71
//clear ___nl__bool__3;
#line 71
c_rt_lib0clear(&___nl__im__4);
#line 71
return ___nl__im__5;
#line 72
goto label_37;
#line 72
label_23:
;
#line 73
c_rt_lib0move(&___nl__im__10,___get_global_string_const(736));
#line 73
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 73
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 73
c_rt_lib0clear(&___nl__im__10);
#line 73
c_rt_lib0clear(&___nl__im__11);
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
c_rt_lib0clear(&___nl__im__2);
#line 73
//clear ___nl__bool__3;
#line 73
c_rt_lib0clear(&___nl__im__4);
#line 73
c_rt_lib0clear(&___nl__im__5);
#line 73
return ___nl__im__9;
#line 74
goto label_37;
#line 74
label_37:
;
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
c_rt_lib0clear(&___nl__im__2);
#line 74
//clear ___nl__bool__3;
#line 74
c_rt_lib0clear(&___nl__im__4);
#line 74
c_rt_lib0clear(&___nl__im__5);
#line 74
c_rt_lib0clear(&___nl__im__9);
#line 74
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
#line 78
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 78
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 78
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(211));
#line 78
if(___nl__bool__4){ goto label_9;}
#line 80
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(467));
#line 80
if(___nl__bool__4){ goto label_12;}
#line 80
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 80
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 80
nl_die_arg(___nl__im__5);
#line 78
label_9:
;
#line 79
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 80
goto label_15;
#line 80
label_12:
;
#line 81
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 82
goto label_15;
#line 82
label_15:
;
#line 83
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 83
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_call_name_raw(___nl__im__7, ___nl__im__2));
#line 83
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
c_rt_lib0clear(&___nl__im__2);
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
//clear ___nl__bool__4;
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
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
#line 87
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 87
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 87
c_rt_lib0clear(&___nl__im__3);
#line 87
___nl__bool__2 = !___nl__bool__2;
#line 87
if(___nl__bool__2){ goto label_13;}
#line 88
c_rt_lib0move(&___nl__im__5,___get_global_string_const(736));
#line 88
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 88
c_rt_lib0clear(&___nl__im__5);
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__1);
#line 88
//clear ___nl__bool__2;
#line 88
return ___nl__im__4;
#line 89
goto label_33;
#line 89
label_13:
;
#line 90
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 90
c_rt_lib0move(&___nl__im__11,___get_global_string_const(110));
#line 90
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 90
c_rt_lib0clear(&___nl__im__10);
#line 90
c_rt_lib0clear(&___nl__im__11);
#line 90
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 90
c_rt_lib0clear(&___nl__im__9);
#line 90
c_rt_lib0move(&___nl__im__12,___get_global_string_const(110));
#line 90
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0clear(&___nl__im__12);
#line 90
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 90
c_rt_lib0clear(&___nl__im__7);
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
c_rt_lib0clear(&___nl__im__1);
#line 90
//clear ___nl__bool__2;
#line 90
c_rt_lib0clear(&___nl__im__4);
#line 90
return ___nl__im__6;
#line 91
goto label_33;
#line 91
label_33:
;
#line 91
//clear ___nl__bool__2;
#line 91
c_rt_lib0clear(&___nl__im__4);
#line 91
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
#line 95
c_rt_lib0move(&___nl__im__1,___get_global_string_const(109));
#line 95
c_rt_lib0move(&___nl__im__2,___get_global_string_const(325));
#line 95
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 96
c_rt_lib0move(&___nl__im__3,___get_global_string_const(281));
#line 96
c_rt_lib0move(&___nl__im__4,___get_global_string_const(326));
#line 96
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 96
c_rt_lib0clear(&___nl__im__3);
#line 96
c_rt_lib0clear(&___nl__im__4);
#line 97
c_rt_lib0move(&___nl__im__5, string0lf());
#line 97
c_rt_lib0move(&___nl__im__6,___get_global_string_const(329));
#line 97
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 97
c_rt_lib0clear(&___nl__im__5);
#line 97
c_rt_lib0clear(&___nl__im__6);
#line 98
c_rt_lib0move(&___nl__im__7, string0r());
#line 98
c_rt_lib0move(&___nl__im__8,___get_global_string_const(330));
#line 98
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 98
c_rt_lib0clear(&___nl__im__7);
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 99
___nl__int__10 = 0;
#line 99
c_rt_lib0move(&___nl__im__9, string0chr(___nl__int__10));
#line 99
//clear ___nl__int__10;
#line 99
c_rt_lib0move(&___nl__im__11,___get_global_string_const(619));
#line 99
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 99
c_rt_lib0clear(&___nl__im__9);
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 100
c_rt_lib0move(&___nl__im__12, string0tab());
#line 100
c_rt_lib0move(&___nl__im__13,___get_global_string_const(613));
#line 100
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 100
c_rt_lib0clear(&___nl__im__12);
#line 100
c_rt_lib0clear(&___nl__im__13);
#line 102
c_rt_lib0move(&___nl__im__16,___get_global_string_const(281));
#line 102
c_rt_lib0move(&___nl__im__18, string0lf());
#line 102
c_rt_lib0move(&___nl__im__19,___get_global_string_const(329));
#line 102
c_rt_lib0move(&___nl__im__17, string0replace(___nl__im__0, ___nl__im__18, ___nl__im__19));
#line 102
c_rt_lib0clear(&___nl__im__18);
#line 102
c_rt_lib0clear(&___nl__im__19);
#line 102
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 102
c_rt_lib0clear(&___nl__im__16);
#line 102
c_rt_lib0clear(&___nl__im__17);
#line 102
c_rt_lib0move(&___nl__im__20,___get_global_string_const(281));
#line 102
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 102
c_rt_lib0clear(&___nl__im__15);
#line 102
c_rt_lib0clear(&___nl__im__20);
#line 102
c_rt_lib0clear(&___nl__im__0);
#line 102
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0get_str_imm(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 106
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_const_value_aggr(___nl__im__0, ___ref___im__1));
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
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
#line 110
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 110
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 110
c_rt_lib0clear(&___nl__im__3);
#line 110
___nl__int__4 = 0;
#line 110
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 110
//clear ___nl__int__2;
#line 110
//clear ___nl__int__4;
#line 110
___nl__bool__1 = !___nl__bool__1;
#line 110
if(___nl__bool__1){ goto label_14;}
#line 110
___nl__bool__5 = false;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
//clear ___nl__bool__1;
#line 110
return ___nl__bool__5;
#line 110
goto label_14;
#line 110
label_14:
;
#line 110
//clear ___nl__bool__1;
#line 110
//clear ___nl__bool__5;
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(227)));
#line 111
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(194));
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
___nl__bool__6 = !___nl__bool__6;
#line 111
if(___nl__bool__6){ goto label_27;}
#line 111
___nl__bool__8 = true;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
//clear ___nl__bool__6;
#line 111
return ___nl__bool__8;
#line 111
goto label_27;
#line 111
label_27:
;
#line 111
//clear ___nl__bool__6;
#line 111
//clear ___nl__bool__8;
#line 112
___nl__bool__9 = false;
#line 113
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 113
___nl__int__12 = 1;
#line 113
___nl__int__12 = -___nl__int__12;
#line 113
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 113
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 113
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__11, ___get_global_string_const(219), ___nl__im__13, ___get_global_string_const(353), ___nl__im__14));
#line 113
c_rt_lib0clear(&___nl__im__11);
#line 113
//clear ___nl__int__12;
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 114
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 114
___nl__int__17 = 0;
#line 114
___nl__int__18 = 1;
#line 114
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 114
label_45:
;
#line 114
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 114
if(___nl__bool__20){ goto label_209;}
#line 114
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 114
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 115
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(228)));
#line 116
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(234));
#line 116
___nl__bool__23 = !___nl__bool__23;
#line 116
if(___nl__bool__23){ goto label_90;}
#line 117
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(234)));
#line 118
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(270)));
#line 118
c_rt_lib0move(&___nl__im__27,___get_global_string_const(541));
#line 118
___nl__bool__25 = c_rt_lib0eq(___nl__im__26, ___nl__im__27);
#line 118
c_rt_lib0clear(&___nl__im__26);
#line 118
c_rt_lib0clear(&___nl__im__27);
#line 118
___nl__bool__25 = !___nl__bool__25;
#line 118
___nl__bool__25 = !___nl__bool__25;
#line 118
if(___nl__bool__25){ goto label_69;}
#line 118
c_rt_lib0clear(&___nl__im__22);
#line 118
//clear ___nl__bool__23;
#line 118
c_rt_lib0clear(&___nl__im__24);
#line 118
//clear ___nl__bool__25;
#line 118
goto label_206;
#line 118
goto label_69;
#line 118
label_69:
;
#line 118
//clear ___nl__bool__25;
#line 119
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(268)));
#line 119
c_rt_lib0move(&___nl__im__30,___get_global_string_const(407));
#line 119
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 119
c_rt_lib0clear(&___nl__im__29);
#line 119
c_rt_lib0clear(&___nl__im__30);
#line 119
___nl__bool__28 = !___nl__bool__28;
#line 119
___nl__bool__28 = !___nl__bool__28;
#line 119
if(___nl__bool__28){ goto label_85;}
#line 119
c_rt_lib0clear(&___nl__im__22);
#line 119
//clear ___nl__bool__23;
#line 119
c_rt_lib0clear(&___nl__im__24);
#line 119
//clear ___nl__bool__28;
#line 119
goto label_206;
#line 119
goto label_85;
#line 119
label_85:
;
#line 119
//clear ___nl__bool__28;
#line 120
___nl__bool__9 = true;
#line 121
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 122
goto label_200;
#line 122
label_90:
;
#line 122
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(248));
#line 122
___nl__bool__23 = !___nl__bool__23;
#line 122
if(___nl__bool__23){ goto label_163;}
#line 123
___nl__bool__31 = ___nl__bool__9;
#line 123
___nl__bool__31 = !___nl__bool__31;
#line 123
___nl__bool__31 = !___nl__bool__31;
#line 123
if(___nl__bool__31){ goto label_115;}
#line 123
___nl__bool__32 = false;
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
//clear ___nl__bool__9;
#line 123
c_rt_lib0clear(&___nl__im__10);
#line 123
c_rt_lib0clear(&___nl__im__15);
#line 123
c_rt_lib0clear(&___nl__im__16);
#line 123
//clear ___nl__int__17;
#line 123
//clear ___nl__int__18;
#line 123
//clear ___nl__int__19;
#line 123
//clear ___nl__bool__20;
#line 123
c_rt_lib0clear(&___nl__im__21);
#line 123
c_rt_lib0clear(&___nl__im__22);
#line 123
//clear ___nl__bool__23;
#line 123
c_rt_lib0clear(&___nl__im__24);
#line 123
//clear ___nl__bool__31;
#line 123
return ___nl__bool__32;
#line 123
goto label_115;
#line 123
label_115:
;
#line 123
//clear ___nl__bool__31;
#line 123
//clear ___nl__bool__32;
#line 124
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(248)));
#line 125
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(225));
#line 125
___nl__bool__34 = !___nl__bool__34;
#line 125
___nl__bool__34 = !___nl__bool__34;
#line 125
if(___nl__bool__34){ goto label_141;}
#line 125
___nl__bool__35 = false;
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
//clear ___nl__bool__9;
#line 125
c_rt_lib0clear(&___nl__im__10);
#line 125
c_rt_lib0clear(&___nl__im__15);
#line 125
c_rt_lib0clear(&___nl__im__16);
#line 125
//clear ___nl__int__17;
#line 125
//clear ___nl__int__18;
#line 125
//clear ___nl__int__19;
#line 125
//clear ___nl__bool__20;
#line 125
c_rt_lib0clear(&___nl__im__21);
#line 125
c_rt_lib0clear(&___nl__im__22);
#line 125
//clear ___nl__bool__23;
#line 125
c_rt_lib0clear(&___nl__im__24);
#line 125
c_rt_lib0clear(&___nl__im__33);
#line 125
//clear ___nl__bool__34;
#line 125
return ___nl__bool__35;
#line 125
goto label_141;
#line 125
label_141:
;
#line 125
//clear ___nl__bool__34;
#line 125
//clear ___nl__bool__35;
#line 126
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(225)));
#line 126
___nl__bool__36 = nlasm0eq_reg(___nl__im__37, ___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__37);
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
//clear ___nl__bool__9;
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__15);
#line 126
c_rt_lib0clear(&___nl__im__16);
#line 126
//clear ___nl__int__17;
#line 126
//clear ___nl__int__18;
#line 126
//clear ___nl__int__19;
#line 126
//clear ___nl__bool__20;
#line 126
c_rt_lib0clear(&___nl__im__21);
#line 126
c_rt_lib0clear(&___nl__im__22);
#line 126
//clear ___nl__bool__23;
#line 126
c_rt_lib0clear(&___nl__im__24);
#line 126
c_rt_lib0clear(&___nl__im__33);
#line 126
return ___nl__bool__36;
#line 127
goto label_200;
#line 127
label_163:
;
#line 127
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(250));
#line 127
___nl__bool__23 = !___nl__bool__23;
#line 127
if(___nl__bool__23){ goto label_168;}
#line 128
goto label_200;
#line 128
label_168:
;
#line 128
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(253));
#line 128
___nl__bool__23 = !___nl__bool__23;
#line 128
if(___nl__bool__23){ goto label_173;}
#line 129
goto label_200;
#line 129
label_173:
;
#line 130
___nl__bool__38 = ___nl__bool__9;
#line 130
___nl__bool__38 = !___nl__bool__38;
#line 130
if(___nl__bool__38){ goto label_196;}
#line 130
___nl__bool__39 = false;
#line 130
c_rt_lib0clear(&___nl__im__0);
#line 130
//clear ___nl__bool__9;
#line 130
c_rt_lib0clear(&___nl__im__10);
#line 130
c_rt_lib0clear(&___nl__im__15);
#line 130
c_rt_lib0clear(&___nl__im__16);
#line 130
//clear ___nl__int__17;
#line 130
//clear ___nl__int__18;
#line 130
//clear ___nl__int__19;
#line 130
//clear ___nl__bool__20;
#line 130
c_rt_lib0clear(&___nl__im__21);
#line 130
c_rt_lib0clear(&___nl__im__22);
#line 130
//clear ___nl__bool__23;
#line 130
c_rt_lib0clear(&___nl__im__24);
#line 130
c_rt_lib0clear(&___nl__im__33);
#line 130
//clear ___nl__bool__36;
#line 130
//clear ___nl__bool__38;
#line 130
return ___nl__bool__39;
#line 130
goto label_196;
#line 130
label_196:
;
#line 130
//clear ___nl__bool__38;
#line 130
//clear ___nl__bool__39;
#line 131
goto label_200;
#line 131
label_200:
;
#line 131
//clear ___nl__bool__23;
#line 131
c_rt_lib0clear(&___nl__im__24);
#line 131
c_rt_lib0clear(&___nl__im__33);
#line 131
//clear ___nl__bool__36;
#line 131
c_rt_lib0clear(&___nl__im__16);
#line 131
label_206:
;
#line 132
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 132
goto label_45;
#line 132
label_209:
;
#line 133
___nl__bool__40 = false;
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
//clear ___nl__bool__9;
#line 133
c_rt_lib0clear(&___nl__im__10);
#line 133
c_rt_lib0clear(&___nl__im__15);
#line 133
c_rt_lib0clear(&___nl__im__16);
#line 133
//clear ___nl__int__17;
#line 133
//clear ___nl__int__18;
#line 133
//clear ___nl__int__19;
#line 133
//clear ___nl__bool__20;
#line 133
c_rt_lib0clear(&___nl__im__21);
#line 133
c_rt_lib0clear(&___nl__im__22);
#line 133
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
#line 137
___nl__bool__2 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 137
___nl__bool__2 = !___nl__bool__2;
#line 137
if(___nl__bool__2){ goto label_5;}
#line 138
c_rt_lib0delete(generator_js_priv0print_singleton(___nl__im__0, ___ref___im__1));
#line 139
goto label_8;
#line 139
label_5:
;
#line 140
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__0, ___ref___im__1));
#line 141
goto label_8;
#line 141
label_8:
;
#line 141
//clear ___nl__bool__2;
#line 143
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 143
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(211));
#line 143
c_rt_lib0clear(&___nl__im__5);
#line 143
___nl__bool__4 = !___nl__bool__3;
#line 143
if(___nl__bool__4){ goto label_17;}
#line 143
___nl__bool__3 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 143
___nl__bool__3 = !___nl__bool__3;
#line 143
label_17:
;
#line 143
//clear ___nl__bool__4;
#line 143
___nl__bool__3 = !___nl__bool__3;
#line 143
if(___nl__bool__3){ goto label_23;}
#line 144
c_rt_lib0delete(generator_js_priv0print_dyn_function_wrapper(___nl__im__0, ___ref___im__1));
#line 145
goto label_23;
#line 145
label_23:
;
#line 145
//clear ___nl__bool__3;
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
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
#line 149
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 149
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__3));
#line 149
c_rt_lib0clear(&___nl__im__3);
#line 150
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 151
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(210)));
#line 151
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(467));
#line 151
c_rt_lib0clear(&___nl__im__6);
#line 151
___nl__bool__5 = !___nl__bool__5;
#line 151
if(___nl__bool__5){ goto label_19;}
#line 152
c_rt_lib0move(&___nl__im__8,___get_global_string_const(737));
#line 152
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 152
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 152
c_rt_lib0clear(&___nl__im__8);
#line 152
c_rt_lib0clear(&___nl__im__9);
#line 152
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 152
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(168), ___nl__im__10);
#line 152
c_rt_lib0clear(&___nl__im__7);
#line 152
c_rt_lib0clear(&___nl__im__10);
#line 153
goto label_30;
#line 153
label_19:
;
#line 154
c_rt_lib0move(&___nl__im__12,___get_global_string_const(738));
#line 154
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 154
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 154
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 154
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(168), ___nl__im__14);
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
c_rt_lib0clear(&___nl__im__14);
#line 155
goto label_30;
#line 155
label_30:
;
#line 155
//clear ___nl__bool__5;
#line 156
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(467)));
#line 156
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 156
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(210), ___nl__im__16);
#line 156
c_rt_lib0clear(&___nl__im__15);
#line 156
c_rt_lib0clear(&___nl__im__16);
#line 157
c_rt_lib0move(&___nl__im__18,___get_global_string_const(739));
#line 157
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 157
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_function_name(___nl__im__4, ___nl__im__20));
#line 157
c_rt_lib0clear(&___nl__im__20);
#line 157
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 157
c_rt_lib0clear(&___nl__im__18);
#line 157
c_rt_lib0clear(&___nl__im__19);
#line 159
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__4, ___ref___im__1));
#line 160
c_rt_lib0move(&___nl__im__23,___get_global_string_const(729));
#line 160
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__17));
#line 160
c_rt_lib0clear(&___nl__im__23);
#line 160
c_rt_lib0move(&___nl__im__24,___get_global_string_const(442));
#line 160
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 160
c_rt_lib0clear(&___nl__im__22);
#line 160
c_rt_lib0clear(&___nl__im__24);
#line 160
c_rt_lib0delete(generator_js_priv0println(___nl__im__21, ___ref___im__1));
#line 160
c_rt_lib0clear(&___nl__im__21);
#line 161
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 161
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(211));
#line 161
if(___nl__bool__26){ goto label_62;}
#line 163
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(467));
#line 163
if(___nl__bool__26){ goto label_77;}
#line 163
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 163
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 163
nl_die_arg(___nl__im__27);
#line 161
label_62:
;
#line 162
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_namespace_name());
#line 162
c_rt_lib0move(&___nl__im__32,___get_global_string_const(110));
#line 162
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 162
c_rt_lib0clear(&___nl__im__31);
#line 162
c_rt_lib0clear(&___nl__im__32);
#line 162
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__2));
#line 162
c_rt_lib0clear(&___nl__im__30);
#line 162
c_rt_lib0move(&___nl__im__33,___get_global_string_const(740));
#line 162
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 162
c_rt_lib0clear(&___nl__im__29);
#line 162
c_rt_lib0clear(&___nl__im__33);
#line 162
c_rt_lib0delete(generator_js_priv0println(___nl__im__28, ___ref___im__1));
#line 162
c_rt_lib0clear(&___nl__im__28);
#line 163
goto label_88;
#line 163
label_77:
;
#line 164
c_rt_lib0move(&___nl__im__36,___get_global_string_const(741));
#line 164
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__2));
#line 164
c_rt_lib0clear(&___nl__im__36);
#line 164
c_rt_lib0move(&___nl__im__37,___get_global_string_const(742));
#line 164
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__37));
#line 164
c_rt_lib0clear(&___nl__im__35);
#line 164
c_rt_lib0clear(&___nl__im__37);
#line 164
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 165
goto label_88;
#line 165
label_88:
;
#line 166
c_rt_lib0move(&___nl__im__40,___get_global_string_const(607));
#line 166
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__17));
#line 166
c_rt_lib0clear(&___nl__im__40);
#line 166
c_rt_lib0move(&___nl__im__41,___get_global_string_const(743));
#line 166
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 166
c_rt_lib0clear(&___nl__im__39);
#line 166
c_rt_lib0clear(&___nl__im__41);
#line 166
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 166
c_rt_lib0clear(&___nl__im__38);
#line 167
c_rt_lib0move(&___nl__im__45,___get_global_string_const(504));
#line 167
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__17, ___nl__im__45));
#line 167
c_rt_lib0clear(&___nl__im__45);
#line 167
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 167
c_rt_lib0move(&___nl__im__46, generator_js_priv0get_function_call_name(___nl__im__4, ___nl__im__47));
#line 167
c_rt_lib0clear(&___nl__im__47);
#line 167
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 167
c_rt_lib0clear(&___nl__im__44);
#line 167
c_rt_lib0clear(&___nl__im__46);
#line 167
c_rt_lib0move(&___nl__im__48,___get_global_string_const(486));
#line 167
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__48));
#line 167
c_rt_lib0clear(&___nl__im__43);
#line 167
c_rt_lib0clear(&___nl__im__48);
#line 167
c_rt_lib0delete(generator_js_priv0println(___nl__im__42, ___ref___im__1));
#line 167
c_rt_lib0clear(&___nl__im__42);
#line 168
c_rt_lib0move(&___nl__im__49,___get_global_string_const(307));
#line 168
c_rt_lib0delete(generator_js_priv0println(___nl__im__49, ___ref___im__1));
#line 168
c_rt_lib0clear(&___nl__im__49);
#line 169
c_rt_lib0move(&___nl__im__52,___get_global_string_const(510));
#line 169
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__17));
#line 169
c_rt_lib0clear(&___nl__im__52);
#line 169
c_rt_lib0move(&___nl__im__53,___get_global_string_const(442));
#line 169
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 169
c_rt_lib0clear(&___nl__im__51);
#line 169
c_rt_lib0clear(&___nl__im__53);
#line 169
c_rt_lib0delete(generator_js_priv0println(___nl__im__50, ___ref___im__1));
#line 169
c_rt_lib0clear(&___nl__im__50);
#line 170
c_rt_lib0move(&___nl__im__54,___get_global_string_const(307));
#line 170
c_rt_lib0delete(generator_js_priv0println(___nl__im__54, ___ref___im__1));
#line 170
c_rt_lib0clear(&___nl__im__54);
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
c_rt_lib0clear(&___nl__im__4);
#line 170
c_rt_lib0clear(&___nl__im__17);
#line 170
c_rt_lib0clear(&___nl__im__25);
#line 170
//clear ___nl__bool__26;
#line 170
c_rt_lib0clear(&___nl__im__27);
#line 170
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
#line 174
___nl__int__2 = 0;
#line 175
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 176
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 177
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 178
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 178
___nl__int__8 = 0;
#line 178
___nl__int__9 = 1;
#line 178
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 178
label_8:
;
#line 178
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 178
if(___nl__bool__11){ goto label_132;}
#line 178
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 178
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 179
___nl__int__14 = 0;
#line 179
___nl__bool__13 = ___nl__int__2 == ___nl__int__14;
#line 179
//clear ___nl__int__14;
#line 179
___nl__bool__13 = !___nl__bool__13;
#line 179
___nl__bool__13 = !___nl__bool__13;
#line 179
if(___nl__bool__13){ goto label_23;}
#line 179
c_rt_lib0move(&___nl__im__15,___get_global_string_const(328));
#line 179
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__15));
#line 179
c_rt_lib0clear(&___nl__im__15);
#line 179
goto label_23;
#line 179
label_23:
;
#line 179
//clear ___nl__bool__13;
#line 180
c_rt_lib0move(&___nl__im__17,___get_global_string_const(279));
#line 180
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__2));
#line 180
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 180
c_rt_lib0clear(&___nl__im__17);
#line 180
c_rt_lib0clear(&___nl__string__18);
#line 180
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__16));
#line 180
c_rt_lib0clear(&___nl__im__16);
#line 181
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(471)));
#line 181
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 181
c_rt_lib0clear(&___nl__im__21);
#line 181
c_rt_lib0move(&___nl__im__24,___get_global_string_const(744));
#line 181
c_rt_lib0move(&___nl__string__25, c_rt_lib0int_to_string(___nl__int__2));
#line 181
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__string__25));
#line 181
c_rt_lib0clear(&___nl__im__24);
#line 181
c_rt_lib0clear(&___nl__string__25);
#line 181
c_rt_lib0move(&___nl__im__26,___get_global_string_const(322));
#line 181
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 181
c_rt_lib0clear(&___nl__im__23);
#line 181
c_rt_lib0clear(&___nl__im__26);
#line 181
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_value_from_im(___nl__im__20, ___nl__im__22));
#line 181
c_rt_lib0clear(&___nl__im__20);
#line 181
c_rt_lib0clear(&___nl__im__22);
#line 182
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(355)));
#line 182
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(39));
#line 182
if(___nl__bool__28){ goto label_55;}
#line 186
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(225));
#line 186
if(___nl__bool__28){ goto label_106;}
#line 186
c_rt_lib0move(&___nl__im__29,___get_global_string_const(15));
#line 186
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 186
nl_die_arg(___nl__im__29);
#line 182
label_55:
;
#line 183
c_rt_lib0move(&___nl__im__33,___get_global_string_const(745));
#line 183
c_rt_lib0move(&___nl__im__35,___get_global_string_const(39));
#line 183
c_rt_lib0move(&___nl__im__34, generator_js_priv0imm_call(___nl__im__35));
#line 183
c_rt_lib0clear(&___nl__im__35);
#line 183
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 183
c_rt_lib0clear(&___nl__im__33);
#line 183
c_rt_lib0clear(&___nl__im__34);
#line 183
c_rt_lib0move(&___nl__im__36,___get_global_string_const(457));
#line 183
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 183
c_rt_lib0clear(&___nl__im__32);
#line 183
c_rt_lib0clear(&___nl__im__36);
#line 183
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__19));
#line 183
c_rt_lib0clear(&___nl__im__31);
#line 183
c_rt_lib0move(&___nl__im__37,___get_global_string_const(508));
#line 183
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 183
c_rt_lib0clear(&___nl__im__30);
#line 183
c_rt_lib0clear(&___nl__im__37);
#line 184
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(471)));
#line 184
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(206)));
#line 184
c_rt_lib0clear(&___nl__im__40);
#line 184
c_rt_lib0move(&___nl__im__43,___get_global_string_const(279));
#line 184
c_rt_lib0move(&___nl__string__44, c_rt_lib0int_to_string(___nl__int__2));
#line 184
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__string__44));
#line 184
c_rt_lib0clear(&___nl__im__43);
#line 184
c_rt_lib0clear(&___nl__string__44);
#line 184
c_rt_lib0move(&___nl__im__45,___get_global_string_const(746));
#line 184
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 184
c_rt_lib0clear(&___nl__im__42);
#line 184
c_rt_lib0clear(&___nl__im__45);
#line 184
c_rt_lib0move(&___nl__im__38, generator_js_priv0get_im_from_value(___nl__im__39, ___nl__im__41));
#line 184
c_rt_lib0clear(&___nl__im__39);
#line 184
c_rt_lib0clear(&___nl__im__41);
#line 185
c_rt_lib0move(&___nl__im__50,___get_global_string_const(747));
#line 185
c_rt_lib0move(&___nl__string__51, c_rt_lib0int_to_string(___nl__int__2));
#line 185
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__string__51));
#line 185
c_rt_lib0clear(&___nl__im__50);
#line 185
c_rt_lib0clear(&___nl__string__51);
#line 185
c_rt_lib0move(&___nl__im__52,___get_global_string_const(328));
#line 185
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 185
c_rt_lib0clear(&___nl__im__49);
#line 185
c_rt_lib0clear(&___nl__im__52);
#line 185
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__38));
#line 185
c_rt_lib0clear(&___nl__im__48);
#line 185
c_rt_lib0move(&___nl__im__53,___get_global_string_const(508));
#line 185
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__53));
#line 185
c_rt_lib0clear(&___nl__im__47);
#line 185
c_rt_lib0clear(&___nl__im__53);
#line 185
c_rt_lib0array_push(&___nl__im__5, ___nl__im__46);
#line 185
c_rt_lib0clear(&___nl__im__46);
#line 186
goto label_108;
#line 186
label_106:
;
#line 187
goto label_108;
#line 187
label_108:
;
#line 188
c_rt_lib0move(&___nl__im__58,___get_global_string_const(748));
#line 188
c_rt_lib0move(&___nl__string__59, c_rt_lib0int_to_string(___nl__int__2));
#line 188
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__string__59));
#line 188
c_rt_lib0clear(&___nl__im__58);
#line 188
c_rt_lib0clear(&___nl__string__59);
#line 188
c_rt_lib0move(&___nl__im__60,___get_global_string_const(504));
#line 188
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 188
c_rt_lib0clear(&___nl__im__57);
#line 188
c_rt_lib0clear(&___nl__im__60);
#line 188
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__19));
#line 188
c_rt_lib0clear(&___nl__im__56);
#line 188
c_rt_lib0move(&___nl__im__61,___get_global_string_const(442));
#line 188
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__61));
#line 188
c_rt_lib0clear(&___nl__im__55);
#line 188
c_rt_lib0clear(&___nl__im__61);
#line 188
c_rt_lib0array_push(&___nl__im__4, ___nl__im__54);
#line 188
c_rt_lib0clear(&___nl__im__54);
#line 189
___nl__int__62 = 1;
#line 189
___nl__int__2 = ___nl__int__2 + ___nl__int__62;
#line 189
//clear ___nl__int__62;
#line 189
c_rt_lib0clear(&___nl__im__7);
#line 190
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 190
goto label_8;
#line 190
label_132:
;
#line 191
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 191
c_rt_lib0move(&___nl__im__66,___get_global_string_const(749));
#line 191
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 191
c_rt_lib0clear(&___nl__im__65);
#line 191
c_rt_lib0clear(&___nl__im__66);
#line 191
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 191
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__67));
#line 191
c_rt_lib0clear(&___nl__im__64);
#line 191
c_rt_lib0clear(&___nl__im__67);
#line 192
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 192
c_rt_lib0move(&___nl__im__71, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__72));
#line 192
c_rt_lib0clear(&___nl__im__72);
#line 192
c_rt_lib0move(&___nl__im__73,___get_global_string_const(457));
#line 192
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 192
c_rt_lib0clear(&___nl__im__71);
#line 192
c_rt_lib0clear(&___nl__im__73);
#line 192
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__3));
#line 192
c_rt_lib0clear(&___nl__im__70);
#line 192
c_rt_lib0move(&___nl__im__74,___get_global_string_const(322));
#line 192
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 192
c_rt_lib0clear(&___nl__im__69);
#line 192
c_rt_lib0clear(&___nl__im__74);
#line 194
c_rt_lib0move(&___nl__im__75,___get_global_string_const(36));
#line 194
c_rt_lib0delete(generator_js_priv0println(___nl__im__75, ___ref___im__1));
#line 194
c_rt_lib0clear(&___nl__im__75);
#line 195
c_rt_lib0move(&___nl__im__79, generator_js_priv0get_namespace_name());
#line 195
c_rt_lib0move(&___nl__im__80,___get_global_string_const(110));
#line 195
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__80));
#line 195
c_rt_lib0clear(&___nl__im__79);
#line 195
c_rt_lib0clear(&___nl__im__80);
#line 195
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__63));
#line 195
c_rt_lib0clear(&___nl__im__78);
#line 195
c_rt_lib0move(&___nl__im__81,___get_global_string_const(750));
#line 195
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__81));
#line 195
c_rt_lib0clear(&___nl__im__77);
#line 195
c_rt_lib0clear(&___nl__im__81);
#line 195
c_rt_lib0delete(generator_js_priv0println(___nl__im__76, ___ref___im__1));
#line 195
c_rt_lib0clear(&___nl__im__76);
#line 196
___nl__int__83 = 0;
#line 196
___nl__int__84 = 1;
#line 196
___nl__int__85 = c_rt_lib0array_len(___nl__im__4);
#line 196
label_174:
;
#line 196
___nl__bool__86 = ___nl__int__83 >= ___nl__int__85;
#line 196
if(___nl__bool__86){ goto label_183;}
#line 196
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__4, ___nl__int__83));
#line 196
c_rt_lib0copy(&___nl__im__82, ___nl__im__87);
#line 197
c_rt_lib0delete(generator_js_priv0println(___nl__im__82, ___ref___im__1));
#line 197
c_rt_lib0clear(&___nl__im__82);
#line 198
___nl__int__83 = ___nl__int__83 + ___nl__int__84;
#line 198
goto label_174;
#line 198
label_183:
;
#line 199
c_rt_lib0move(&___nl__im__89,___get_global_string_const(751));
#line 199
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(417)));
#line 199
c_rt_lib0move(&___nl__im__90, generator_js_priv0get_im_from_value(___nl__im__91, ___nl__im__68));
#line 199
c_rt_lib0clear(&___nl__im__91);
#line 199
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 199
c_rt_lib0clear(&___nl__im__89);
#line 199
c_rt_lib0clear(&___nl__im__90);
#line 199
c_rt_lib0delete(generator_js_priv0println(___nl__im__88, ___ref___im__1));
#line 199
c_rt_lib0clear(&___nl__im__88);
#line 200
___nl__int__93 = 0;
#line 200
___nl__int__94 = 1;
#line 200
___nl__int__95 = c_rt_lib0array_len(___nl__im__5);
#line 200
label_196:
;
#line 200
___nl__bool__96 = ___nl__int__93 >= ___nl__int__95;
#line 200
if(___nl__bool__96){ goto label_205;}
#line 200
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__5, ___nl__int__93));
#line 200
c_rt_lib0copy(&___nl__im__92, ___nl__im__97);
#line 201
c_rt_lib0delete(generator_js_priv0println(___nl__im__92, ___ref___im__1));
#line 201
c_rt_lib0clear(&___nl__im__92);
#line 202
___nl__int__93 = ___nl__int__93 + ___nl__int__94;
#line 202
goto label_196;
#line 202
label_205:
;
#line 203
c_rt_lib0move(&___nl__im__98,___get_global_string_const(752));
#line 203
c_rt_lib0delete(generator_js_priv0println(___nl__im__98, ___ref___im__1));
#line 203
c_rt_lib0clear(&___nl__im__98);
#line 204
c_rt_lib0move(&___nl__im__99,___get_global_string_const(307));
#line 204
c_rt_lib0delete(generator_js_priv0println(___nl__im__99, ___ref___im__1));
#line 204
c_rt_lib0clear(&___nl__im__99);
#line 204
c_rt_lib0clear(&___nl__im__0);
#line 204
//clear ___nl__int__2;
#line 204
c_rt_lib0clear(&___nl__im__3);
#line 204
c_rt_lib0clear(&___nl__im__4);
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 204
c_rt_lib0clear(&___nl__im__6);
#line 204
c_rt_lib0clear(&___nl__im__7);
#line 204
//clear ___nl__int__8;
#line 204
//clear ___nl__int__9;
#line 204
//clear ___nl__int__10;
#line 204
//clear ___nl__bool__11;
#line 204
c_rt_lib0clear(&___nl__im__12);
#line 204
c_rt_lib0clear(&___nl__im__19);
#line 204
c_rt_lib0clear(&___nl__im__27);
#line 204
//clear ___nl__bool__28;
#line 204
c_rt_lib0clear(&___nl__im__29);
#line 204
c_rt_lib0clear(&___nl__im__38);
#line 204
c_rt_lib0clear(&___nl__im__63);
#line 204
c_rt_lib0clear(&___nl__im__68);
#line 204
c_rt_lib0clear(&___nl__im__82);
#line 204
//clear ___nl__int__83;
#line 204
//clear ___nl__int__84;
#line 204
//clear ___nl__int__85;
#line 204
//clear ___nl__bool__86;
#line 204
c_rt_lib0clear(&___nl__im__87);
#line 204
c_rt_lib0clear(&___nl__im__92);
#line 204
//clear ___nl__int__93;
#line 204
//clear ___nl__int__94;
#line 204
//clear ___nl__int__95;
#line 204
//clear ___nl__bool__96;
#line 204
c_rt_lib0clear(&___nl__im__97);
#line 204
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
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 208
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 208
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 209
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 209
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_function_header(___nl__im__0, ___nl__im__5));
#line 209
c_rt_lib0clear(&___nl__im__5);
#line 209
c_rt_lib0move(&___nl__im__6,___get_global_string_const(536));
#line 209
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 209
c_rt_lib0clear(&___nl__im__4);
#line 209
c_rt_lib0clear(&___nl__im__6);
#line 209
c_rt_lib0delete(generator_js_priv0println(___nl__im__3, ___ref___im__1));
#line 209
c_rt_lib0clear(&___nl__im__3);
#line 210
c_rt_lib0delete(generator_js_priv0print_function_registers(___nl__im__0, ___ref___im__1));
#line 211
c_rt_lib0move(&___nl__im__7,___get_global_string_const(753));
#line 211
c_rt_lib0delete(generator_js_priv0println(___nl__im__7, ___ref___im__1));
#line 211
c_rt_lib0clear(&___nl__im__7);
#line 212
c_rt_lib0move(&___nl__im__8,___get_global_string_const(754));
#line 212
c_rt_lib0delete(generator_js_priv0println(___nl__im__8, ___ref___im__1));
#line 212
c_rt_lib0clear(&___nl__im__8);
#line 213
c_rt_lib0move(&___nl__im__9,___get_global_string_const(755));
#line 213
c_rt_lib0delete(generator_js_priv0println(___nl__im__9, ___ref___im__1));
#line 213
c_rt_lib0clear(&___nl__im__9);
#line 214
___nl__int__10 = 0;
#line 215
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 215
___nl__int__13 = 0;
#line 215
___nl__int__14 = 1;
#line 215
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 215
label_27:
;
#line 215
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 215
if(___nl__bool__16){ goto label_38;}
#line 215
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 215
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 216
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 216
c_rt_lib0delete(generator_js_priv0print_command(___nl__im__12, ___nl__im__18, &___nl__int__10, ___ref___im__1));
#line 216
c_rt_lib0clear(&___nl__im__18);
#line 216
c_rt_lib0clear(&___nl__im__12);
#line 217
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 217
goto label_27;
#line 217
label_38:
;
#line 218
c_rt_lib0move(&___nl__im__19,___get_global_string_const(756));
#line 218
c_rt_lib0delete(generator_js_priv0println(___nl__im__19, ___ref___im__1));
#line 218
c_rt_lib0clear(&___nl__im__19);
#line 218
c_rt_lib0clear(&___nl__im__0);
#line 218
//clear ___nl__int__10;
#line 218
c_rt_lib0clear(&___nl__im__11);
#line 218
c_rt_lib0clear(&___nl__im__12);
#line 218
//clear ___nl__int__13;
#line 218
//clear ___nl__int__14;
#line 218
//clear ___nl__int__15;
#line 218
//clear ___nl__bool__16;
#line 218
c_rt_lib0clear(&___nl__im__17);
#line 218
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
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 223
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(211));
#line 223
if(___nl__bool__4){ goto label_8;}
#line 225
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(467));
#line 225
if(___nl__bool__4){ goto label_23;}
#line 225
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 225
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 225
nl_die_arg(___nl__im__5);
#line 223
label_8:
;
#line 224
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_namespace_name());
#line 224
c_rt_lib0move(&___nl__im__9,___get_global_string_const(110));
#line 224
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 224
c_rt_lib0clear(&___nl__im__8);
#line 224
c_rt_lib0clear(&___nl__im__9);
#line 224
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 224
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 224
c_rt_lib0clear(&___nl__im__7);
#line 224
c_rt_lib0clear(&___nl__im__10);
#line 224
c_rt_lib0move(&___nl__im__11,___get_global_string_const(757));
#line 224
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 224
c_rt_lib0clear(&___nl__im__6);
#line 224
c_rt_lib0clear(&___nl__im__11);
#line 225
goto label_34;
#line 225
label_23:
;
#line 226
c_rt_lib0move(&___nl__im__13,___get_global_string_const(741));
#line 226
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 226
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
c_rt_lib0clear(&___nl__im__14);
#line 226
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 226
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 226
c_rt_lib0clear(&___nl__im__12);
#line 226
c_rt_lib0clear(&___nl__im__15);
#line 227
goto label_34;
#line 227
label_34:
;
#line 228
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 228
___nl__int__16 = c_rt_lib0array_len(___nl__im__17);
#line 228
c_rt_lib0clear(&___nl__im__17);
#line 228
___nl__int__18 = 0;
#line 228
___nl__int__19 = 1;
#line 228
label_40:
;
#line 228
___nl__bool__20 = ___nl__int__18 >= ___nl__int__16;
#line 228
if(___nl__bool__20){ goto label_64;}
#line 229
___nl__int__22 = 0;
#line 229
___nl__bool__21 = ___nl__int__18 == ___nl__int__22;
#line 229
//clear ___nl__int__22;
#line 229
___nl__bool__21 = !___nl__bool__21;
#line 229
___nl__bool__21 = !___nl__bool__21;
#line 229
if(___nl__bool__21){ goto label_53;}
#line 229
c_rt_lib0move(&___nl__im__23,___get_global_string_const(328));
#line 229
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 229
c_rt_lib0clear(&___nl__im__23);
#line 229
goto label_53;
#line 229
label_53:
;
#line 229
//clear ___nl__bool__21;
#line 230
c_rt_lib0move(&___nl__im__25,___get_global_string_const(758));
#line 230
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__18));
#line 230
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__26));
#line 230
c_rt_lib0clear(&___nl__im__25);
#line 230
c_rt_lib0clear(&___nl__string__26);
#line 230
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__24));
#line 230
c_rt_lib0clear(&___nl__im__24);
#line 231
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 231
goto label_40;
#line 231
label_64:
;
#line 232
c_rt_lib0move(&___nl__im__27,___get_global_string_const(322));
#line 232
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 232
c_rt_lib0clear(&___nl__im__27);
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
c_rt_lib0clear(&___nl__im__1);
#line 233
c_rt_lib0clear(&___nl__im__3);
#line 233
//clear ___nl__bool__4;
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
//clear ___nl__int__16;
#line 233
//clear ___nl__int__18;
#line 233
//clear ___nl__int__19;
#line 233
//clear ___nl__bool__20;
#line 233
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
#line 237
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 237
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 237
c_rt_lib0clear(&___nl__im__3);
#line 237
___nl__int__4 = 0;
#line 237
___nl__int__5 = 1;
#line 237
label_5:
;
#line 237
___nl__bool__6 = ___nl__int__4 >= ___nl__int__2;
#line 237
if(___nl__bool__6){ goto label_95;}
#line 238
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 238
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__9, ___nl__int__4));
#line 238
c_rt_lib0clear(&___nl__im__9);
#line 238
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(355)));
#line 238
c_rt_lib0clear(&___nl__im__8);
#line 238
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(225));
#line 238
if(___nl__bool__10){ goto label_20;}
#line 240
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(39));
#line 240
if(___nl__bool__10){ goto label_45;}
#line 240
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 240
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__7));
#line 240
nl_die_arg(___nl__im__11);
#line 238
label_20:
;
#line 239
c_rt_lib0move(&___nl__im__16,___get_global_string_const(729));
#line 239
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 239
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__4));
#line 239
c_rt_lib0clear(&___nl__im__19);
#line 239
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register(___nl__im__18));
#line 239
c_rt_lib0clear(&___nl__im__18);
#line 239
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 239
c_rt_lib0clear(&___nl__im__16);
#line 239
c_rt_lib0clear(&___nl__im__17);
#line 239
c_rt_lib0move(&___nl__im__20,___get_global_string_const(759));
#line 239
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 239
c_rt_lib0clear(&___nl__im__15);
#line 239
c_rt_lib0clear(&___nl__im__20);
#line 239
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__4));
#line 239
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__string__21));
#line 239
c_rt_lib0clear(&___nl__im__14);
#line 239
c_rt_lib0clear(&___nl__string__21);
#line 239
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 239
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 239
c_rt_lib0clear(&___nl__im__13);
#line 239
c_rt_lib0clear(&___nl__im__22);
#line 239
c_rt_lib0delete(generator_js_priv0println(___nl__im__12, ___ref___im__1));
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 240
goto label_70;
#line 240
label_45:
;
#line 241
c_rt_lib0move(&___nl__im__27,___get_global_string_const(729));
#line 241
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 241
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__30, ___nl__int__4));
#line 241
c_rt_lib0clear(&___nl__im__30);
#line 241
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register(___nl__im__29));
#line 241
c_rt_lib0clear(&___nl__im__29);
#line 241
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 241
c_rt_lib0clear(&___nl__im__27);
#line 241
c_rt_lib0clear(&___nl__im__28);
#line 241
c_rt_lib0move(&___nl__im__31,___get_global_string_const(759));
#line 241
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 241
c_rt_lib0clear(&___nl__im__26);
#line 241
c_rt_lib0clear(&___nl__im__31);
#line 241
c_rt_lib0move(&___nl__string__32, c_rt_lib0int_to_string(___nl__int__4));
#line 241
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__32));
#line 241
c_rt_lib0clear(&___nl__im__25);
#line 241
c_rt_lib0clear(&___nl__string__32);
#line 241
c_rt_lib0move(&___nl__im__33,___get_global_string_const(760));
#line 241
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__33));
#line 241
c_rt_lib0clear(&___nl__im__24);
#line 241
c_rt_lib0clear(&___nl__im__33);
#line 241
c_rt_lib0delete(generator_js_priv0println(___nl__im__23, ___ref___im__1));
#line 241
c_rt_lib0clear(&___nl__im__23);
#line 242
goto label_70;
#line 242
label_70:
;
#line 243
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_namespace_name());
#line 243
c_rt_lib0move(&___nl__im__38,___get_global_string_const(761));
#line 243
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 243
c_rt_lib0clear(&___nl__im__37);
#line 243
c_rt_lib0clear(&___nl__im__38);
#line 243
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 243
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__41, ___nl__int__4));
#line 243
c_rt_lib0clear(&___nl__im__41);
#line 243
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value(___nl__im__40));
#line 243
c_rt_lib0clear(&___nl__im__40);
#line 243
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__39));
#line 243
c_rt_lib0clear(&___nl__im__36);
#line 243
c_rt_lib0clear(&___nl__im__39);
#line 243
c_rt_lib0move(&___nl__im__42,___get_global_string_const(508));
#line 243
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__42));
#line 243
c_rt_lib0clear(&___nl__im__35);
#line 243
c_rt_lib0clear(&___nl__im__42);
#line 243
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 243
c_rt_lib0clear(&___nl__im__34);
#line 243
c_rt_lib0clear(&___nl__im__7);
#line 243
//clear ___nl__bool__10;
#line 243
c_rt_lib0clear(&___nl__im__11);
#line 244
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 244
goto label_5;
#line 244
label_95:
;
#line 245
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 245
___nl__int__43 = c_rt_lib0array_len(___nl__im__44);
#line 245
c_rt_lib0clear(&___nl__im__44);
#line 245
label_99:
;
#line 245
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 245
___nl__int__46 = c_rt_lib0array_len(___nl__im__47);
#line 245
c_rt_lib0clear(&___nl__im__47);
#line 245
___nl__bool__45 = ___nl__int__43 < ___nl__int__46;
#line 245
//clear ___nl__int__46;
#line 245
___nl__bool__45 = !___nl__bool__45;
#line 245
if(___nl__bool__45){ goto label_126;}
#line 246
c_rt_lib0move(&___nl__im__50,___get_global_string_const(729));
#line 246
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 246
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__53, ___nl__int__43));
#line 246
c_rt_lib0clear(&___nl__im__53);
#line 246
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register(___nl__im__52));
#line 246
c_rt_lib0clear(&___nl__im__52);
#line 246
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 246
c_rt_lib0clear(&___nl__im__50);
#line 246
c_rt_lib0clear(&___nl__im__51);
#line 246
c_rt_lib0move(&___nl__im__54,___get_global_string_const(762));
#line 246
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__54));
#line 246
c_rt_lib0clear(&___nl__im__49);
#line 246
c_rt_lib0clear(&___nl__im__54);
#line 246
c_rt_lib0delete(generator_js_priv0println(___nl__im__48, ___ref___im__1));
#line 246
c_rt_lib0clear(&___nl__im__48);
#line 245
___nl__int__55 = 1;
#line 245
___nl__int__43 = ___nl__int__43 + ___nl__int__55;
#line 245
//clear ___nl__int__55;
#line 247
goto label_99;
#line 247
label_126:
;
#line 247
c_rt_lib0clear(&___nl__im__0);
#line 247
//clear ___nl__int__2;
#line 247
//clear ___nl__int__4;
#line 247
//clear ___nl__int__5;
#line 247
//clear ___nl__bool__6;
#line 247
c_rt_lib0clear(&___nl__im__7);
#line 247
//clear ___nl__bool__10;
#line 247
c_rt_lib0clear(&___nl__im__11);
#line 247
//clear ___nl__int__43;
#line 247
//clear ___nl__bool__45;
#line 247
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
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
INT  ___nl__int__241 = 0;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__string__243 = NULL;
ImmT  ___nl__im__244 = NULL;
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
#line 252
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 253
c_rt_lib0move(&___nl__im__6,___get_global_string_const(763));
#line 253
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 253
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(551)));
#line 253
c_rt_lib0clear(&___nl__im__10);
#line 253
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(552)));
#line 253
c_rt_lib0clear(&___nl__im__9);
#line 253
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(154)));
#line 253
___nl__int__7 = getIntFromImm(___nl__im__11);
#line 253
c_rt_lib0clear(&___nl__im__8);
#line 253
c_rt_lib0clear(&___nl__im__11);
#line 253
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__7));
#line 253
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__12));
#line 253
c_rt_lib0clear(&___nl__im__6);
#line 253
//clear ___nl__int__7;
#line 253
c_rt_lib0clear(&___nl__string__12);
#line 253
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__3));
#line 253
c_rt_lib0clear(&___nl__im__5);
#line 254
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 254
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(231));
#line 254
if(___nl__bool__14){ goto label_96;}
#line 256
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(232));
#line 256
if(___nl__bool__14){ goto label_117;}
#line 258
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(233));
#line 258
if(___nl__bool__14){ goto label_138;}
#line 261
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(234));
#line 261
if(___nl__bool__14){ goto label_159;}
#line 263
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(239));
#line 263
if(___nl__bool__14){ goto label_172;}
#line 266
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(235));
#line 266
if(___nl__bool__14){ goto label_193;}
#line 268
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(236));
#line 268
if(___nl__bool__14){ goto label_198;}
#line 270
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(237));
#line 270
if(___nl__bool__14){ goto label_203;}
#line 272
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(238));
#line 272
if(___nl__bool__14){ goto label_218;}
#line 275
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(248));
#line 275
if(___nl__bool__14){ goto label_249;}
#line 277
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(249));
#line 277
if(___nl__bool__14){ goto label_254;}
#line 279
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(240));
#line 279
if(___nl__bool__14){ goto label_263;}
#line 281
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(226));
#line 281
if(___nl__bool__14){ goto label_272;}
#line 283
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(241));
#line 283
if(___nl__bool__14){ goto label_281;}
#line 286
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(242));
#line 286
if(___nl__bool__14){ goto label_308;}
#line 290
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(243));
#line 290
if(___nl__bool__14){ goto label_339;}
#line 292
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(244));
#line 292
if(___nl__bool__14){ goto label_348;}
#line 294
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(245));
#line 294
if(___nl__bool__14){ goto label_357;}
#line 298
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(246));
#line 298
if(___nl__bool__14){ goto label_390;}
#line 302
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(247));
#line 302
if(___nl__bool__14){ goto label_421;}
#line 304
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(250));
#line 304
if(___nl__bool__14){ goto label_426;}
#line 306
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(251));
#line 306
if(___nl__bool__14){ goto label_439;}
#line 309
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(252));
#line 309
if(___nl__bool__14){ goto label_466;}
#line 311
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(253));
#line 311
if(___nl__bool__14){ goto label_471;}
#line 313
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(254));
#line 313
if(___nl__bool__14){ goto label_480;}
#line 314
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(255));
#line 314
if(___nl__bool__14){ goto label_484;}
#line 317
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(256));
#line 317
if(___nl__bool__14){ goto label_509;}
#line 319
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(257));
#line 319
if(___nl__bool__14){ goto label_520;}
#line 321
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(258));
#line 321
if(___nl__bool__14){ goto label_525;}
#line 323
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(259));
#line 323
if(___nl__bool__14){ goto label_536;}
#line 325
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(260));
#line 325
if(___nl__bool__14){ goto label_541;}
#line 327
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(261));
#line 327
if(___nl__bool__14){ goto label_552;}
#line 332
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(262));
#line 332
if(___nl__bool__14){ goto label_604;}
#line 334
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(263));
#line 334
if(___nl__bool__14){ goto label_615;}
#line 336
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(264));
#line 336
if(___nl__bool__14){ goto label_620;}
#line 338
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(265));
#line 338
if(___nl__bool__14){ goto label_625;}
#line 340
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(266));
#line 340
if(___nl__bool__14){ goto label_630;}
#line 340
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 340
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 340
nl_die_arg(___nl__im__15);
#line 254
label_96:
;
#line 254
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(231)));
#line 254
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 255
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(224)));
#line 255
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 255
c_rt_lib0clear(&___nl__im__20);
#line 255
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(73)));
#line 255
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(224)));
#line 255
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(206)));
#line 255
c_rt_lib0clear(&___nl__im__24);
#line 255
c_rt_lib0move(&___nl__im__21, generator_js_priv0get_arr(___nl__im__22, ___nl__im__23));
#line 255
c_rt_lib0clear(&___nl__im__22);
#line 255
c_rt_lib0clear(&___nl__im__23);
#line 255
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 255
c_rt_lib0clear(&___nl__im__19);
#line 255
c_rt_lib0clear(&___nl__im__21);
#line 255
c_rt_lib0move(&___nl__im__25,___get_global_string_const(442));
#line 255
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 255
c_rt_lib0clear(&___nl__im__18);
#line 255
c_rt_lib0clear(&___nl__im__25);
#line 256
goto label_635;
#line 256
label_117:
;
#line 256
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(232)));
#line 256
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 257
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(224)));
#line 257
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value_to_assign(___nl__im__30));
#line 257
c_rt_lib0clear(&___nl__im__30);
#line 257
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(73)));
#line 257
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(224)));
#line 257
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(206)));
#line 257
c_rt_lib0clear(&___nl__im__34);
#line 257
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_hash(___nl__im__32, ___nl__im__33));
#line 257
c_rt_lib0clear(&___nl__im__32);
#line 257
c_rt_lib0clear(&___nl__im__33);
#line 257
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__31));
#line 257
c_rt_lib0clear(&___nl__im__29);
#line 257
c_rt_lib0clear(&___nl__im__31);
#line 257
c_rt_lib0move(&___nl__im__35,___get_global_string_const(442));
#line 257
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__28, ___nl__im__35));
#line 257
c_rt_lib0clear(&___nl__im__28);
#line 257
c_rt_lib0clear(&___nl__im__35);
#line 258
goto label_635;
#line 258
label_138:
;
#line 258
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(233)));
#line 258
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 259
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(224)));
#line 259
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value_to_assign(___nl__im__40));
#line 259
c_rt_lib0clear(&___nl__im__40);
#line 260
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(764)));
#line 260
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(224)));
#line 260
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(206)));
#line 260
c_rt_lib0clear(&___nl__im__44);
#line 260
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_empty_hash(___nl__im__42, ___nl__im__43));
#line 260
c_rt_lib0clear(&___nl__im__42);
#line 260
c_rt_lib0clear(&___nl__im__43);
#line 260
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 260
c_rt_lib0clear(&___nl__im__39);
#line 260
c_rt_lib0clear(&___nl__im__41);
#line 260
c_rt_lib0move(&___nl__im__45,___get_global_string_const(442));
#line 260
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__45));
#line 260
c_rt_lib0clear(&___nl__im__38);
#line 260
c_rt_lib0clear(&___nl__im__45);
#line 261
goto label_635;
#line 261
label_159:
;
#line 261
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(234)));
#line 261
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 262
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(268)));
#line 262
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(270)));
#line 262
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(267)));
#line 262
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(224)));
#line 262
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_call(___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___ref___int__2));
#line 262
c_rt_lib0clear(&___nl__im__48);
#line 262
c_rt_lib0clear(&___nl__im__49);
#line 262
c_rt_lib0clear(&___nl__im__50);
#line 262
c_rt_lib0clear(&___nl__im__51);
#line 263
goto label_635;
#line 263
label_172:
;
#line 263
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(239)));
#line 263
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 264
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(224)));
#line 264
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value_to_assign(___nl__im__56));
#line 264
c_rt_lib0clear(&___nl__im__56);
#line 265
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(152)));
#line 265
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(168)));
#line 265
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(152), ___nl__im__59, ___get_global_string_const(168), ___nl__im__60));
#line 265
c_rt_lib0clear(&___nl__im__59);
#line 265
c_rt_lib0clear(&___nl__im__60);
#line 265
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_const_hash(___nl__im__58));
#line 265
c_rt_lib0clear(&___nl__im__58);
#line 265
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__57));
#line 265
c_rt_lib0clear(&___nl__im__55);
#line 265
c_rt_lib0clear(&___nl__im__57);
#line 265
c_rt_lib0move(&___nl__im__61,___get_global_string_const(442));
#line 265
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 265
c_rt_lib0clear(&___nl__im__54);
#line 265
c_rt_lib0clear(&___nl__im__61);
#line 266
goto label_635;
#line 266
label_193:
;
#line 266
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(235)));
#line 266
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 267
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_una_op(___nl__im__62));
#line 268
goto label_635;
#line 268
label_198:
;
#line 268
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(236)));
#line 268
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 269
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_bin_op(___nl__im__64, ___ref___int__2));
#line 270
goto label_635;
#line 270
label_203:
;
#line 270
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(237)));
#line 270
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 271
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(224)));
#line 271
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(73)));
#line 271
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(562)));
#line 271
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(567)));
#line 271
___nl__int__71 = getIntFromImm(___nl__im__72);
#line 271
c_rt_lib0clear(&___nl__im__72);
#line 271
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_is(___nl__im__68, ___nl__im__69, ___nl__im__70, ___nl__int__71, ___ref___int__2, ___ref___im__3));
#line 271
c_rt_lib0clear(&___nl__im__68);
#line 271
c_rt_lib0clear(&___nl__im__69);
#line 271
c_rt_lib0clear(&___nl__im__70);
#line 271
//clear ___nl__int__71;
#line 272
goto label_635;
#line 272
label_218:
;
#line 272
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(238)));
#line 272
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 273
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(224)));
#line 273
c_rt_lib0move(&___nl__im__76, generator_js_priv0get_register_value_to_assign(___nl__im__77));
#line 273
c_rt_lib0clear(&___nl__im__77);
#line 273
c_rt_lib0move(&___nl__im__79,___get_global_string_const(271));
#line 273
c_rt_lib0move(&___nl__im__80,___get_global_string_const(238));
#line 274
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(73)));
#line 274
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__83));
#line 274
c_rt_lib0clear(&___nl__im__83);
#line 274
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(562)));
#line 274
c_rt_lib0move(&___nl__im__85, generator_js_priv0get_str_imm(___nl__im__86, ___ref___im__3));
#line 274
c_rt_lib0clear(&___nl__im__86);
#line 274
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__85));
#line 274
c_rt_lib0clear(&___nl__im__85);
#line 274
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(2, ___nl__im__82, ___nl__im__84));
#line 274
c_rt_lib0clear(&___nl__im__82);
#line 274
c_rt_lib0clear(&___nl__im__84);
#line 274
c_rt_lib0move(&___nl__im__78, generator_js_priv0get_internal_call(___nl__im__79, ___nl__im__80, ___nl__im__81, ___ref___int__2));
#line 274
c_rt_lib0clear(&___nl__im__79);
#line 274
c_rt_lib0clear(&___nl__im__80);
#line 274
c_rt_lib0clear(&___nl__im__81);
#line 274
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 274
c_rt_lib0clear(&___nl__im__76);
#line 274
c_rt_lib0clear(&___nl__im__78);
#line 274
c_rt_lib0move(&___nl__im__87,___get_global_string_const(442));
#line 274
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__75, ___nl__im__87));
#line 274
c_rt_lib0clear(&___nl__im__75);
#line 274
c_rt_lib0clear(&___nl__im__87);
#line 275
goto label_635;
#line 275
label_249:
;
#line 275
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(248)));
#line 275
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 276
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_return(___nl__im__88, ___nl__im__1));
#line 277
goto label_635;
#line 277
label_254:
;
#line 277
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(249)));
#line 277
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 278
c_rt_lib0move(&___nl__im__92, generator_js_priv0get_namespace_name());
#line 278
c_rt_lib0move(&___nl__im__93,___get_global_string_const(765));
#line 278
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__92, ___nl__im__93));
#line 278
c_rt_lib0clear(&___nl__im__92);
#line 278
c_rt_lib0clear(&___nl__im__93);
#line 279
goto label_635;
#line 279
label_263:
;
#line 279
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(240)));
#line 279
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 280
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(224)));
#line 280
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(73)));
#line 280
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_move(___nl__im__96, ___nl__im__97, ___ref___int__2));
#line 280
c_rt_lib0clear(&___nl__im__96);
#line 280
c_rt_lib0clear(&___nl__im__97);
#line 281
goto label_635;
#line 281
label_272:
;
#line 281
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(226)));
#line 281
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 282
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(224)));
#line 282
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(225)));
#line 282
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_load_const(___nl__im__100, ___nl__im__101, ___ref___im__3));
#line 282
c_rt_lib0clear(&___nl__im__100);
#line 282
c_rt_lib0clear(&___nl__im__101);
#line 283
goto label_635;
#line 283
label_281:
;
#line 283
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(241)));
#line 283
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 284
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(224)));
#line 284
c_rt_lib0move(&___nl__im__107, generator_js_priv0get_register_value_to_assign(___nl__im__108));
#line 284
c_rt_lib0clear(&___nl__im__108);
#line 285
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(73)));
#line 285
c_rt_lib0move(&___nl__im__109, generator_js_priv0get_register_value(___nl__im__110));
#line 285
c_rt_lib0clear(&___nl__im__110);
#line 285
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 285
c_rt_lib0clear(&___nl__im__107);
#line 285
c_rt_lib0clear(&___nl__im__109);
#line 285
c_rt_lib0move(&___nl__im__111,___get_global_string_const(766));
#line 285
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__111));
#line 285
c_rt_lib0clear(&___nl__im__106);
#line 285
c_rt_lib0clear(&___nl__im__111);
#line 285
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(278)));
#line 285
c_rt_lib0move(&___nl__im__112, generator_js_priv0get_register_value(___nl__im__113));
#line 285
c_rt_lib0clear(&___nl__im__113);
#line 285
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__112));
#line 285
c_rt_lib0clear(&___nl__im__105);
#line 285
c_rt_lib0clear(&___nl__im__112);
#line 285
c_rt_lib0move(&___nl__im__114,___get_global_string_const(508));
#line 285
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__104, ___nl__im__114));
#line 285
c_rt_lib0clear(&___nl__im__104);
#line 285
c_rt_lib0clear(&___nl__im__114);
#line 286
goto label_635;
#line 286
label_308:
;
#line 286
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(242)));
#line 286
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 287
c_rt_lib0move(&___nl__im__118,___get_global_string_const(271));
#line 287
c_rt_lib0move(&___nl__im__119,___get_global_string_const(767));
#line 287
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(73)));
#line 287
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__122));
#line 287
c_rt_lib0clear(&___nl__im__122);
#line 288
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(278)));
#line 288
c_rt_lib0move(&___nl__im__124, generator_js_priv0get_register_value(___nl__im__125));
#line 288
c_rt_lib0clear(&___nl__im__125);
#line 288
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__124));
#line 288
c_rt_lib0clear(&___nl__im__124);
#line 289
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(225)));
#line 289
c_rt_lib0move(&___nl__im__127, generator_js_priv0get_register_value(___nl__im__128));
#line 289
c_rt_lib0clear(&___nl__im__128);
#line 289
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__127));
#line 289
c_rt_lib0clear(&___nl__im__127);
#line 289
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(3, ___nl__im__121, ___nl__im__123, ___nl__im__126));
#line 289
c_rt_lib0clear(&___nl__im__121);
#line 289
c_rt_lib0clear(&___nl__im__123);
#line 289
c_rt_lib0clear(&___nl__im__126);
#line 289
c_rt_lib0move(&___nl__im__117, generator_js_priv0get_internal_call(___nl__im__118, ___nl__im__119, ___nl__im__120, ___ref___int__2));
#line 289
c_rt_lib0clear(&___nl__im__118);
#line 289
c_rt_lib0clear(&___nl__im__119);
#line 289
c_rt_lib0clear(&___nl__im__120);
#line 289
c_rt_lib0move(&___nl__im__129,___get_global_string_const(442));
#line 289
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__117, ___nl__im__129));
#line 289
c_rt_lib0clear(&___nl__im__117);
#line 289
c_rt_lib0clear(&___nl__im__129);
#line 290
goto label_635;
#line 290
label_339:
;
#line 290
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(243)));
#line 290
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 291
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(224)));
#line 291
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(225)));
#line 291
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_push(___nl__im__132, ___nl__im__133, ___ref___int__2));
#line 291
c_rt_lib0clear(&___nl__im__132);
#line 291
c_rt_lib0clear(&___nl__im__133);
#line 292
goto label_635;
#line 292
label_348:
;
#line 292
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(244)));
#line 292
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 293
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(224)));
#line 293
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(73)));
#line 293
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_len(___nl__im__136, ___nl__im__137, ___ref___int__2));
#line 293
c_rt_lib0clear(&___nl__im__136);
#line 293
c_rt_lib0clear(&___nl__im__137);
#line 294
goto label_635;
#line 294
label_357:
;
#line 294
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(245)));
#line 294
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 295
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(224)));
#line 295
c_rt_lib0move(&___nl__im__141, generator_js_priv0get_register_value_to_assign(___nl__im__142));
#line 295
c_rt_lib0clear(&___nl__im__142);
#line 295
c_rt_lib0move(&___nl__im__144,___get_global_string_const(271));
#line 295
c_rt_lib0move(&___nl__im__145,___get_global_string_const(768));
#line 296
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(73)));
#line 296
c_rt_lib0move(&___nl__im__148, generator_js_priv0get_register_value(___nl__im__149));
#line 296
c_rt_lib0clear(&___nl__im__149);
#line 296
c_rt_lib0move(&___nl__im__147, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__148));
#line 296
c_rt_lib0clear(&___nl__im__148);
#line 296
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(577)));
#line 296
c_rt_lib0move(&___nl__im__151, generator_js_priv0get_str_imm(___nl__im__152, ___ref___im__3));
#line 296
c_rt_lib0clear(&___nl__im__152);
#line 296
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__151));
#line 296
c_rt_lib0clear(&___nl__im__151);
#line 296
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_mk(2, ___nl__im__147, ___nl__im__150));
#line 296
c_rt_lib0clear(&___nl__im__147);
#line 296
c_rt_lib0clear(&___nl__im__150);
#line 296
c_rt_lib0move(&___nl__im__143, generator_js_priv0get_internal_call(___nl__im__144, ___nl__im__145, ___nl__im__146, ___ref___int__2));
#line 296
c_rt_lib0clear(&___nl__im__144);
#line 296
c_rt_lib0clear(&___nl__im__145);
#line 296
c_rt_lib0clear(&___nl__im__146);
#line 296
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__143));
#line 296
c_rt_lib0clear(&___nl__im__141);
#line 296
c_rt_lib0clear(&___nl__im__143);
#line 297
c_rt_lib0move(&___nl__im__153,___get_global_string_const(442));
#line 297
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__140, ___nl__im__153));
#line 297
c_rt_lib0clear(&___nl__im__140);
#line 297
c_rt_lib0clear(&___nl__im__153);
#line 298
goto label_635;
#line 298
label_390:
;
#line 298
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(246)));
#line 298
c_rt_lib0copy(&___nl__im__154, ___nl__im__155);
#line 299
c_rt_lib0move(&___nl__im__157,___get_global_string_const(271));
#line 299
c_rt_lib0move(&___nl__im__158,___get_global_string_const(769));
#line 299
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(73)));
#line 299
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__161));
#line 299
c_rt_lib0clear(&___nl__im__161);
#line 300
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(577)));
#line 300
c_rt_lib0move(&___nl__im__163, generator_js_priv0get_str_imm(___nl__im__164, ___ref___im__3));
#line 300
c_rt_lib0clear(&___nl__im__164);
#line 300
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__163));
#line 300
c_rt_lib0clear(&___nl__im__163);
#line 300
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(225)));
#line 300
c_rt_lib0move(&___nl__im__166, generator_js_priv0get_register_value(___nl__im__167));
#line 300
c_rt_lib0clear(&___nl__im__167);
#line 300
c_rt_lib0move(&___nl__im__165, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__166));
#line 300
c_rt_lib0clear(&___nl__im__166);
#line 300
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(3, ___nl__im__160, ___nl__im__162, ___nl__im__165));
#line 300
c_rt_lib0clear(&___nl__im__160);
#line 300
c_rt_lib0clear(&___nl__im__162);
#line 300
c_rt_lib0clear(&___nl__im__165);
#line 300
c_rt_lib0move(&___nl__im__156, generator_js_priv0get_internal_call(___nl__im__157, ___nl__im__158, ___nl__im__159, ___ref___int__2));
#line 300
c_rt_lib0clear(&___nl__im__157);
#line 300
c_rt_lib0clear(&___nl__im__158);
#line 300
c_rt_lib0clear(&___nl__im__159);
#line 301
c_rt_lib0move(&___nl__im__168,___get_global_string_const(442));
#line 301
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__156, ___nl__im__168));
#line 301
c_rt_lib0clear(&___nl__im__156);
#line 301
c_rt_lib0clear(&___nl__im__168);
#line 302
goto label_635;
#line 302
label_421:
;
#line 302
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(247)));
#line 302
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 303
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_mk(___nl__im__169, ___ref___im__3, ___ref___int__2));
#line 304
goto label_635;
#line 304
label_426:
;
#line 304
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(250)));
#line 304
___nl__int__171 = getIntFromImm(___nl__im__172);
#line 305
c_rt_lib0move(&___nl__im__174,___get_global_string_const(529));
#line 305
c_rt_lib0move(&___nl__string__175, c_rt_lib0int_to_string(___nl__int__171));
#line 305
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__string__175));
#line 305
c_rt_lib0clear(&___nl__im__174);
#line 305
c_rt_lib0clear(&___nl__string__175);
#line 305
c_rt_lib0move(&___nl__im__176,___get_global_string_const(530));
#line 305
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__173, ___nl__im__176));
#line 305
c_rt_lib0clear(&___nl__im__173);
#line 305
c_rt_lib0clear(&___nl__im__176);
#line 306
goto label_635;
#line 306
label_439:
;
#line 306
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(251)));
#line 306
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 307
c_rt_lib0move(&___nl__im__182,___get_global_string_const(607));
#line 307
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(73)));
#line 307
c_rt_lib0move(&___nl__im__183, generator_js_priv0get_register_value(___nl__im__184));
#line 307
c_rt_lib0clear(&___nl__im__184);
#line 307
c_rt_lib0move(&___nl__im__181, c_rt_lib0concat_new(___nl__im__182, ___nl__im__183));
#line 307
c_rt_lib0clear(&___nl__im__182);
#line 307
c_rt_lib0clear(&___nl__im__183);
#line 307
c_rt_lib0move(&___nl__im__185,___get_global_string_const(770));
#line 307
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__185));
#line 307
c_rt_lib0clear(&___nl__im__181);
#line 307
c_rt_lib0clear(&___nl__im__185);
#line 307
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(224)));
#line 307
___nl__int__187 = getIntFromImm(___nl__im__188);
#line 307
c_rt_lib0clear(&___nl__im__188);
#line 307
c_rt_lib0move(&___nl__im__186, generator_js_priv0get_goto(___nl__int__187));
#line 307
//clear ___nl__int__187;
#line 307
c_rt_lib0move(&___nl__im__179, c_rt_lib0concat_new(___nl__im__180, ___nl__im__186));
#line 307
c_rt_lib0clear(&___nl__im__180);
#line 307
c_rt_lib0clear(&___nl__im__186);
#line 308
c_rt_lib0move(&___nl__im__189,___get_global_string_const(307));
#line 308
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__179, ___nl__im__189));
#line 308
c_rt_lib0clear(&___nl__im__179);
#line 308
c_rt_lib0clear(&___nl__im__189);
#line 309
goto label_635;
#line 309
label_466:
;
#line 309
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(252)));
#line 309
___nl__int__190 = getIntFromImm(___nl__im__191);
#line 310
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_goto(___nl__int__190));
#line 311
goto label_635;
#line 311
label_471:
;
#line 311
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(253)));
#line 311
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 312
c_rt_lib0move(&___nl__im__194, generator_js_priv0get_register_to_assign(___nl__im__192));
#line 312
c_rt_lib0move(&___nl__im__195,___get_global_string_const(771));
#line 312
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__194, ___nl__im__195));
#line 312
c_rt_lib0clear(&___nl__im__194);
#line 312
c_rt_lib0clear(&___nl__im__195);
#line 313
goto label_635;
#line 313
label_480:
;
#line 313
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(254)));
#line 313
c_rt_lib0copy(&___nl__im__196, ___nl__im__197);
#line 314
goto label_635;
#line 314
label_484:
;
#line 314
c_rt_lib0move(&___nl__im__199, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(255)));
#line 314
c_rt_lib0copy(&___nl__im__198, ___nl__im__199);
#line 315
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(361)));
#line 315
c_rt_lib0move(&___nl__im__203, generator_js_priv0get_register_to_assign(___nl__im__204));
#line 315
c_rt_lib0clear(&___nl__im__204);
#line 316
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(360)));
#line 316
c_rt_lib0move(&___nl__im__205, generator_js_priv0get_register_value(___nl__im__206));
#line 316
c_rt_lib0clear(&___nl__im__206);
#line 316
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__205));
#line 316
c_rt_lib0clear(&___nl__im__203);
#line 316
c_rt_lib0clear(&___nl__im__205);
#line 316
c_rt_lib0move(&___nl__im__207,___get_global_string_const(110));
#line 316
c_rt_lib0move(&___nl__im__201, c_rt_lib0concat_new(___nl__im__202, ___nl__im__207));
#line 316
c_rt_lib0clear(&___nl__im__202);
#line 316
c_rt_lib0clear(&___nl__im__207);
#line 316
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(605)));
#line 316
c_rt_lib0move(&___nl__im__200, c_rt_lib0concat_new(___nl__im__201, ___nl__im__208));
#line 316
c_rt_lib0clear(&___nl__im__201);
#line 316
c_rt_lib0clear(&___nl__im__208);
#line 316
c_rt_lib0move(&___nl__im__209,___get_global_string_const(442));
#line 316
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__200, ___nl__im__209));
#line 316
c_rt_lib0clear(&___nl__im__200);
#line 316
c_rt_lib0clear(&___nl__im__209);
#line 317
goto label_635;
#line 317
label_509:
;
#line 317
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(256)));
#line 317
c_rt_lib0copy(&___nl__im__210, ___nl__im__211);
#line 318
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__210, ___get_global_string_const(362)));
#line 318
c_rt_lib0move(&___nl__im__212, generator_js_priv0get_register_to_assign(___nl__im__213));
#line 318
c_rt_lib0clear(&___nl__im__213);
#line 318
c_rt_lib0move(&___nl__im__214,___get_global_string_const(772));
#line 318
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__212, ___nl__im__214));
#line 318
c_rt_lib0clear(&___nl__im__212);
#line 318
c_rt_lib0clear(&___nl__im__214);
#line 319
goto label_635;
#line 319
label_520:
;
#line 319
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(257)));
#line 319
c_rt_lib0copy(&___nl__im__215, ___nl__im__216);
#line 320
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_index(___nl__im__215));
#line 321
goto label_635;
#line 321
label_525:
;
#line 321
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(258)));
#line 321
c_rt_lib0copy(&___nl__im__217, ___nl__im__218);
#line 322
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(362)));
#line 322
c_rt_lib0move(&___nl__im__219, generator_js_priv0get_register_to_assign(___nl__im__220));
#line 322
c_rt_lib0clear(&___nl__im__220);
#line 322
c_rt_lib0move(&___nl__im__221,___get_global_string_const(772));
#line 322
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__219, ___nl__im__221));
#line 322
c_rt_lib0clear(&___nl__im__219);
#line 322
c_rt_lib0clear(&___nl__im__221);
#line 323
goto label_635;
#line 323
label_536:
;
#line 323
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(259)));
#line 323
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 324
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_hash_index(___nl__im__222));
#line 325
goto label_635;
#line 325
label_541:
;
#line 325
c_rt_lib0move(&___nl__im__225, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(260)));
#line 325
c_rt_lib0copy(&___nl__im__224, ___nl__im__225);
#line 326
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_string_const(362)));
#line 326
c_rt_lib0move(&___nl__im__226, generator_js_priv0get_register_to_assign(___nl__im__227));
#line 326
c_rt_lib0clear(&___nl__im__227);
#line 326
c_rt_lib0move(&___nl__im__228,___get_global_string_const(772));
#line 326
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__226, ___nl__im__228));
#line 326
c_rt_lib0clear(&___nl__im__226);
#line 326
c_rt_lib0clear(&___nl__im__228);
#line 327
goto label_635;
#line 327
label_552:
;
#line 327
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(261)));
#line 327
c_rt_lib0copy(&___nl__im__229, ___nl__im__230);
#line 328
c_rt_lib0move(&___nl__im__237,___get_global_string_const(607));
#line 328
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(360)));
#line 328
c_rt_lib0move(&___nl__im__238, generator_js_priv0get_register_value(___nl__im__239));
#line 328
c_rt_lib0clear(&___nl__im__239);
#line 328
c_rt_lib0move(&___nl__im__236, c_rt_lib0concat_new(___nl__im__237, ___nl__im__238));
#line 328
c_rt_lib0clear(&___nl__im__237);
#line 328
c_rt_lib0clear(&___nl__im__238);
#line 328
c_rt_lib0move(&___nl__im__240,___get_global_string_const(773));
#line 328
c_rt_lib0move(&___nl__im__235, c_rt_lib0concat_new(___nl__im__236, ___nl__im__240));
#line 328
c_rt_lib0clear(&___nl__im__236);
#line 328
c_rt_lib0clear(&___nl__im__240);
#line 328
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(567)));
#line 328
___nl__int__241 = getIntFromImm(___nl__im__242);
#line 328
c_rt_lib0clear(&___nl__im__242);
#line 328
c_rt_lib0move(&___nl__string__243, c_rt_lib0int_to_string(___nl__int__241));
#line 328
c_rt_lib0move(&___nl__im__234, c_rt_lib0concat_new(___nl__im__235, ___nl__string__243));
#line 328
c_rt_lib0clear(&___nl__im__235);
#line 328
//clear ___nl__int__241;
#line 328
c_rt_lib0clear(&___nl__string__243);
#line 328
c_rt_lib0move(&___nl__im__244,___get_global_string_const(322));
#line 328
c_rt_lib0move(&___nl__im__233, c_rt_lib0concat_new(___nl__im__234, ___nl__im__244));
#line 328
c_rt_lib0clear(&___nl__im__234);
#line 328
c_rt_lib0clear(&___nl__im__244);
#line 329
c_rt_lib0move(&___nl__im__245, generator_js_priv0get_namespace_name());
#line 329
c_rt_lib0move(&___nl__im__232, c_rt_lib0concat_new(___nl__im__233, ___nl__im__245));
#line 329
c_rt_lib0clear(&___nl__im__233);
#line 329
c_rt_lib0clear(&___nl__im__245);
#line 329
c_rt_lib0move(&___nl__im__246,___get_global_string_const(765));
#line 329
c_rt_lib0move(&___nl__im__231, c_rt_lib0concat_new(___nl__im__232, ___nl__im__246));
#line 329
c_rt_lib0clear(&___nl__im__232);
#line 329
c_rt_lib0clear(&___nl__im__246);
#line 329
c_rt_lib0delete(generator_js_priv0println(___nl__im__231, ___ref___im__3));
#line 329
c_rt_lib0clear(&___nl__im__231);
#line 330
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(361)));
#line 330
c_rt_lib0move(&___nl__im__249, generator_js_priv0get_register_to_assign(___nl__im__250));
#line 330
c_rt_lib0clear(&___nl__im__250);
#line 331
c_rt_lib0move(&___nl__im__252, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(360)));
#line 331
c_rt_lib0move(&___nl__im__251, generator_js_priv0get_register_value(___nl__im__252));
#line 331
c_rt_lib0clear(&___nl__im__252);
#line 331
c_rt_lib0move(&___nl__im__248, c_rt_lib0concat_new(___nl__im__249, ___nl__im__251));
#line 331
c_rt_lib0clear(&___nl__im__249);
#line 331
c_rt_lib0clear(&___nl__im__251);
#line 331
c_rt_lib0move(&___nl__im__253,___get_global_string_const(774));
#line 331
c_rt_lib0move(&___nl__im__247, c_rt_lib0concat_new(___nl__im__248, ___nl__im__253));
#line 331
c_rt_lib0clear(&___nl__im__248);
#line 331
c_rt_lib0clear(&___nl__im__253);
#line 331
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__247));
#line 331
c_rt_lib0clear(&___nl__im__247);
#line 332
goto label_635;
#line 332
label_604:
;
#line 332
c_rt_lib0move(&___nl__im__255, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(262)));
#line 332
c_rt_lib0copy(&___nl__im__254, ___nl__im__255);
#line 333
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__254, ___get_global_string_const(362)));
#line 333
c_rt_lib0move(&___nl__im__256, generator_js_priv0get_register_to_assign(___nl__im__257));
#line 333
c_rt_lib0clear(&___nl__im__257);
#line 333
c_rt_lib0move(&___nl__im__258,___get_global_string_const(772));
#line 333
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__256, ___nl__im__258));
#line 333
c_rt_lib0clear(&___nl__im__256);
#line 333
c_rt_lib0clear(&___nl__im__258);
#line 334
goto label_635;
#line 334
label_615:
;
#line 334
c_rt_lib0move(&___nl__im__260, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(263)));
#line 334
c_rt_lib0copy(&___nl__im__259, ___nl__im__260);
#line 335
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_init_iter(___nl__im__259, ___ref___int__2));
#line 336
goto label_635;
#line 336
label_620:
;
#line 336
c_rt_lib0move(&___nl__im__262, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(264)));
#line 336
c_rt_lib0copy(&___nl__im__261, ___nl__im__262);
#line 337
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_next_iter(___nl__im__261, ___ref___int__2));
#line 338
goto label_635;
#line 338
label_625:
;
#line 338
c_rt_lib0move(&___nl__im__264, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(265)));
#line 338
c_rt_lib0copy(&___nl__im__263, ___nl__im__264);
#line 339
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_get_key_iter(___nl__im__263, ___ref___int__2));
#line 340
goto label_635;
#line 340
label_630:
;
#line 340
c_rt_lib0move(&___nl__im__266, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(266)));
#line 340
c_rt_lib0copy(&___nl__im__265, ___nl__im__266);
#line 341
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_is_end(___nl__im__265, ___ref___int__2));
#line 342
goto label_635;
#line 342
label_635:
;
#line 343
c_rt_lib0delete(generator_js_priv0println(___nl__im__4, ___ref___im__3));
#line 343
c_rt_lib0clear(&___nl__im__0);
#line 343
c_rt_lib0clear(&___nl__im__1);
#line 343
c_rt_lib0clear(&___nl__im__4);
#line 343
c_rt_lib0clear(&___nl__im__13);
#line 343
//clear ___nl__bool__14;
#line 343
c_rt_lib0clear(&___nl__im__15);
#line 343
c_rt_lib0clear(&___nl__im__16);
#line 343
c_rt_lib0clear(&___nl__im__17);
#line 343
c_rt_lib0clear(&___nl__im__26);
#line 343
c_rt_lib0clear(&___nl__im__27);
#line 343
c_rt_lib0clear(&___nl__im__36);
#line 343
c_rt_lib0clear(&___nl__im__37);
#line 343
c_rt_lib0clear(&___nl__im__46);
#line 343
c_rt_lib0clear(&___nl__im__47);
#line 343
c_rt_lib0clear(&___nl__im__52);
#line 343
c_rt_lib0clear(&___nl__im__53);
#line 343
c_rt_lib0clear(&___nl__im__62);
#line 343
c_rt_lib0clear(&___nl__im__63);
#line 343
c_rt_lib0clear(&___nl__im__64);
#line 343
c_rt_lib0clear(&___nl__im__65);
#line 343
c_rt_lib0clear(&___nl__im__66);
#line 343
c_rt_lib0clear(&___nl__im__67);
#line 343
c_rt_lib0clear(&___nl__im__73);
#line 343
c_rt_lib0clear(&___nl__im__74);
#line 343
c_rt_lib0clear(&___nl__im__88);
#line 343
c_rt_lib0clear(&___nl__im__89);
#line 343
c_rt_lib0clear(&___nl__im__90);
#line 343
c_rt_lib0clear(&___nl__im__91);
#line 343
c_rt_lib0clear(&___nl__im__94);
#line 343
c_rt_lib0clear(&___nl__im__95);
#line 343
c_rt_lib0clear(&___nl__im__98);
#line 343
c_rt_lib0clear(&___nl__im__99);
#line 343
c_rt_lib0clear(&___nl__im__102);
#line 343
c_rt_lib0clear(&___nl__im__103);
#line 343
c_rt_lib0clear(&___nl__im__115);
#line 343
c_rt_lib0clear(&___nl__im__116);
#line 343
c_rt_lib0clear(&___nl__im__130);
#line 343
c_rt_lib0clear(&___nl__im__131);
#line 343
c_rt_lib0clear(&___nl__im__134);
#line 343
c_rt_lib0clear(&___nl__im__135);
#line 343
c_rt_lib0clear(&___nl__im__138);
#line 343
c_rt_lib0clear(&___nl__im__139);
#line 343
c_rt_lib0clear(&___nl__im__154);
#line 343
c_rt_lib0clear(&___nl__im__155);
#line 343
c_rt_lib0clear(&___nl__im__169);
#line 343
c_rt_lib0clear(&___nl__im__170);
#line 343
//clear ___nl__int__171;
#line 343
c_rt_lib0clear(&___nl__im__172);
#line 343
c_rt_lib0clear(&___nl__im__177);
#line 343
c_rt_lib0clear(&___nl__im__178);
#line 343
//clear ___nl__int__190;
#line 343
c_rt_lib0clear(&___nl__im__191);
#line 343
c_rt_lib0clear(&___nl__im__192);
#line 343
c_rt_lib0clear(&___nl__im__193);
#line 343
c_rt_lib0clear(&___nl__im__196);
#line 343
c_rt_lib0clear(&___nl__im__197);
#line 343
c_rt_lib0clear(&___nl__im__198);
#line 343
c_rt_lib0clear(&___nl__im__199);
#line 343
c_rt_lib0clear(&___nl__im__210);
#line 343
c_rt_lib0clear(&___nl__im__211);
#line 343
c_rt_lib0clear(&___nl__im__215);
#line 343
c_rt_lib0clear(&___nl__im__216);
#line 343
c_rt_lib0clear(&___nl__im__217);
#line 343
c_rt_lib0clear(&___nl__im__218);
#line 343
c_rt_lib0clear(&___nl__im__222);
#line 343
c_rt_lib0clear(&___nl__im__223);
#line 343
c_rt_lib0clear(&___nl__im__224);
#line 343
c_rt_lib0clear(&___nl__im__225);
#line 343
c_rt_lib0clear(&___nl__im__229);
#line 343
c_rt_lib0clear(&___nl__im__230);
#line 343
c_rt_lib0clear(&___nl__im__254);
#line 343
c_rt_lib0clear(&___nl__im__255);
#line 343
c_rt_lib0clear(&___nl__im__259);
#line 343
c_rt_lib0clear(&___nl__im__260);
#line 343
c_rt_lib0clear(&___nl__im__261);
#line 343
c_rt_lib0clear(&___nl__im__262);
#line 343
c_rt_lib0clear(&___nl__im__263);
#line 343
c_rt_lib0clear(&___nl__im__264);
#line 343
c_rt_lib0clear(&___nl__im__265);
#line 343
c_rt_lib0clear(&___nl__im__266);
#line 343
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
#line 347
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 347
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 347
c_rt_lib0clear(&___nl__im__4);
#line 347
___nl__bool__3 = !___nl__bool__3;
#line 347
if(___nl__bool__3){ goto label_11;}
#line 347
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 347
c_rt_lib0clear(&___nl__im__0);
#line 347
c_rt_lib0clear(&___nl__im__1);
#line 347
//clear ___nl__bool__3;
#line 347
return ___nl__im__5;
#line 347
goto label_11;
#line 347
label_11:
;
#line 347
//clear ___nl__bool__3;
#line 347
c_rt_lib0clear(&___nl__im__5);
#line 348
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 348
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(422));
#line 348
c_rt_lib0clear(&___nl__im__8);
#line 348
___nl__bool__7 = !___nl__bool__6;
#line 348
if(___nl__bool__7){ goto label_22;}
#line 348
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 348
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(422));
#line 348
c_rt_lib0clear(&___nl__im__9);
#line 348
label_22:
;
#line 348
//clear ___nl__bool__7;
#line 348
___nl__bool__6 = !___nl__bool__6;
#line 348
if(___nl__bool__6){ goto label_40;}
#line 349
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_to_assign(___nl__im__0));
#line 349
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register(___nl__im__1));
#line 349
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 349
c_rt_lib0clear(&___nl__im__12);
#line 349
c_rt_lib0clear(&___nl__im__13);
#line 349
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 349
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 349
c_rt_lib0clear(&___nl__im__11);
#line 349
c_rt_lib0clear(&___nl__im__14);
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
c_rt_lib0clear(&___nl__im__1);
#line 349
//clear ___nl__bool__6;
#line 349
return ___nl__im__10;
#line 350
goto label_40;
#line 350
label_40:
;
#line 350
//clear ___nl__bool__6;
#line 350
c_rt_lib0clear(&___nl__im__10);
#line 351
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 351
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(131));
#line 351
if(___nl__bool__16){ goto label_63;}
#line 353
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(405));
#line 353
if(___nl__bool__16){ goto label_80;}
#line 359
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(406));
#line 359
if(___nl__bool__16){ goto label_125;}
#line 361
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 361
if(___nl__bool__16){ goto label_143;}
#line 367
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(559));
#line 367
if(___nl__bool__16){ goto label_198;}
#line 373
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 373
if(___nl__bool__16){ goto label_232;}
#line 379
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(563));
#line 379
if(___nl__bool__16){ goto label_268;}
#line 381
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(128));
#line 381
if(___nl__bool__16){ goto label_274;}
#line 381
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 381
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 381
nl_die_arg(___nl__im__17);
#line 351
label_63:
;
#line 352
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 352
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 352
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__1));
#line 352
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 352
c_rt_lib0clear(&___nl__im__21);
#line 352
c_rt_lib0clear(&___nl__im__22);
#line 352
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 352
c_rt_lib0clear(&___nl__im__19);
#line 352
c_rt_lib0clear(&___nl__im__20);
#line 352
c_rt_lib0clear(&___nl__im__0);
#line 352
c_rt_lib0clear(&___nl__im__1);
#line 352
c_rt_lib0clear(&___nl__im__15);
#line 352
//clear ___nl__bool__16;
#line 352
c_rt_lib0clear(&___nl__im__17);
#line 352
return ___nl__im__18;
#line 353
goto label_280;
#line 353
label_80:
;
#line 354
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 354
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(131));
#line 354
c_rt_lib0clear(&___nl__im__24);
#line 354
___nl__bool__23 = !___nl__bool__23;
#line 354
if(___nl__bool__23){ goto label_104;}
#line 355
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 355
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value(___nl__im__1));
#line 355
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 355
c_rt_lib0clear(&___nl__im__27);
#line 355
c_rt_lib0clear(&___nl__im__28);
#line 355
c_rt_lib0move(&___nl__im__29,___get_global_string_const(775));
#line 355
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 355
c_rt_lib0clear(&___nl__im__26);
#line 355
c_rt_lib0clear(&___nl__im__29);
#line 355
c_rt_lib0clear(&___nl__im__0);
#line 355
c_rt_lib0clear(&___nl__im__1);
#line 355
c_rt_lib0clear(&___nl__im__15);
#line 355
//clear ___nl__bool__16;
#line 355
c_rt_lib0clear(&___nl__im__17);
#line 355
c_rt_lib0clear(&___nl__im__18);
#line 355
//clear ___nl__bool__23;
#line 355
return ___nl__im__25;
#line 356
goto label_120;
#line 356
label_104:
;
#line 357
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 357
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__1));
#line 357
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 357
c_rt_lib0clear(&___nl__im__31);
#line 357
c_rt_lib0clear(&___nl__im__32);
#line 357
c_rt_lib0clear(&___nl__im__0);
#line 357
c_rt_lib0clear(&___nl__im__1);
#line 357
c_rt_lib0clear(&___nl__im__15);
#line 357
//clear ___nl__bool__16;
#line 357
c_rt_lib0clear(&___nl__im__17);
#line 357
c_rt_lib0clear(&___nl__im__18);
#line 357
//clear ___nl__bool__23;
#line 357
c_rt_lib0clear(&___nl__im__25);
#line 357
return ___nl__im__30;
#line 358
goto label_120;
#line 358
label_120:
;
#line 358
//clear ___nl__bool__23;
#line 358
c_rt_lib0clear(&___nl__im__25);
#line 358
c_rt_lib0clear(&___nl__im__30);
#line 359
goto label_280;
#line 359
label_125:
;
#line 360
c_rt_lib0move(&___nl__im__34, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 360
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 360
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_register_value(___nl__im__1));
#line 360
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 360
c_rt_lib0clear(&___nl__im__36);
#line 360
c_rt_lib0clear(&___nl__im__37);
#line 360
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 360
c_rt_lib0clear(&___nl__im__34);
#line 360
c_rt_lib0clear(&___nl__im__35);
#line 360
c_rt_lib0clear(&___nl__im__0);
#line 360
c_rt_lib0clear(&___nl__im__1);
#line 360
c_rt_lib0clear(&___nl__im__15);
#line 360
//clear ___nl__bool__16;
#line 360
c_rt_lib0clear(&___nl__im__17);
#line 360
c_rt_lib0clear(&___nl__im__18);
#line 360
return ___nl__im__33;
#line 361
goto label_280;
#line 361
label_143:
;
#line 362
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 362
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(131));
#line 362
c_rt_lib0clear(&___nl__im__39);
#line 362
___nl__bool__38 = !___nl__bool__38;
#line 362
if(___nl__bool__38){ goto label_176;}
#line 363
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 363
c_rt_lib0move(&___nl__im__44,___get_global_string_const(271));
#line 363
c_rt_lib0move(&___nl__im__45,___get_global_string_const(601));
#line 363
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 363
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 363
c_rt_lib0clear(&___nl__im__47);
#line 363
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 363
c_rt_lib0clear(&___nl__im__44);
#line 363
c_rt_lib0clear(&___nl__im__45);
#line 363
c_rt_lib0clear(&___nl__im__46);
#line 363
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 363
c_rt_lib0clear(&___nl__im__42);
#line 363
c_rt_lib0clear(&___nl__im__43);
#line 363
c_rt_lib0move(&___nl__im__48,___get_global_string_const(442));
#line 363
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 363
c_rt_lib0clear(&___nl__im__41);
#line 363
c_rt_lib0clear(&___nl__im__48);
#line 363
c_rt_lib0clear(&___nl__im__0);
#line 363
c_rt_lib0clear(&___nl__im__1);
#line 363
c_rt_lib0clear(&___nl__im__15);
#line 363
//clear ___nl__bool__16;
#line 363
c_rt_lib0clear(&___nl__im__17);
#line 363
c_rt_lib0clear(&___nl__im__18);
#line 363
c_rt_lib0clear(&___nl__im__33);
#line 363
//clear ___nl__bool__38;
#line 363
return ___nl__im__40;
#line 364
goto label_193;
#line 364
label_176:
;
#line 365
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 365
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register_value(___nl__im__1));
#line 365
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 365
c_rt_lib0clear(&___nl__im__50);
#line 365
c_rt_lib0clear(&___nl__im__51);
#line 365
c_rt_lib0clear(&___nl__im__0);
#line 365
c_rt_lib0clear(&___nl__im__1);
#line 365
c_rt_lib0clear(&___nl__im__15);
#line 365
//clear ___nl__bool__16;
#line 365
c_rt_lib0clear(&___nl__im__17);
#line 365
c_rt_lib0clear(&___nl__im__18);
#line 365
c_rt_lib0clear(&___nl__im__33);
#line 365
//clear ___nl__bool__38;
#line 365
c_rt_lib0clear(&___nl__im__40);
#line 365
return ___nl__im__49;
#line 366
goto label_193;
#line 366
label_193:
;
#line 366
//clear ___nl__bool__38;
#line 366
c_rt_lib0clear(&___nl__im__40);
#line 366
c_rt_lib0clear(&___nl__im__49);
#line 367
goto label_280;
#line 367
label_198:
;
#line 367
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(559)));
#line 367
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 368
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 368
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(559));
#line 368
c_rt_lib0clear(&___nl__im__55);
#line 368
___nl__bool__54 = !___nl__bool__54;
#line 368
if(___nl__bool__54){ goto label_223;}
#line 369
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 369
c_rt_lib0move(&___nl__im__58, generator_js_priv0get_register_value(___nl__im__1));
#line 369
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 369
c_rt_lib0clear(&___nl__im__57);
#line 369
c_rt_lib0clear(&___nl__im__58);
#line 369
c_rt_lib0clear(&___nl__im__0);
#line 369
c_rt_lib0clear(&___nl__im__1);
#line 369
c_rt_lib0clear(&___nl__im__15);
#line 369
//clear ___nl__bool__16;
#line 369
c_rt_lib0clear(&___nl__im__17);
#line 369
c_rt_lib0clear(&___nl__im__18);
#line 369
c_rt_lib0clear(&___nl__im__33);
#line 369
c_rt_lib0clear(&___nl__im__52);
#line 369
c_rt_lib0clear(&___nl__im__53);
#line 369
//clear ___nl__bool__54;
#line 369
return ___nl__im__56;
#line 370
goto label_227;
#line 370
label_223:
;
#line 371
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 371
nl_die_arg(___nl__im__59);
#line 372
goto label_227;
#line 372
label_227:
;
#line 372
//clear ___nl__bool__54;
#line 372
c_rt_lib0clear(&___nl__im__56);
#line 372
c_rt_lib0clear(&___nl__im__59);
#line 373
goto label_280;
#line 373
label_232:
;
#line 373
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(127)));
#line 373
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 374
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 374
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(127));
#line 374
c_rt_lib0clear(&___nl__im__63);
#line 374
___nl__bool__62 = !___nl__bool__62;
#line 374
if(___nl__bool__62){ goto label_259;}
#line 375
c_rt_lib0move(&___nl__im__65, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 375
c_rt_lib0move(&___nl__im__66, generator_js_priv0get_register_value(___nl__im__1));
#line 375
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 375
c_rt_lib0clear(&___nl__im__65);
#line 375
c_rt_lib0clear(&___nl__im__66);
#line 375
c_rt_lib0clear(&___nl__im__0);
#line 375
c_rt_lib0clear(&___nl__im__1);
#line 375
c_rt_lib0clear(&___nl__im__15);
#line 375
//clear ___nl__bool__16;
#line 375
c_rt_lib0clear(&___nl__im__17);
#line 375
c_rt_lib0clear(&___nl__im__18);
#line 375
c_rt_lib0clear(&___nl__im__33);
#line 375
c_rt_lib0clear(&___nl__im__52);
#line 375
c_rt_lib0clear(&___nl__im__53);
#line 375
c_rt_lib0clear(&___nl__im__60);
#line 375
c_rt_lib0clear(&___nl__im__61);
#line 375
//clear ___nl__bool__62;
#line 375
return ___nl__im__64;
#line 376
goto label_263;
#line 376
label_259:
;
#line 377
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 377
nl_die_arg(___nl__im__67);
#line 378
goto label_263;
#line 378
label_263:
;
#line 378
//clear ___nl__bool__62;
#line 378
c_rt_lib0clear(&___nl__im__64);
#line 378
c_rt_lib0clear(&___nl__im__67);
#line 379
goto label_280;
#line 379
label_268:
;
#line 379
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(563)));
#line 379
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 380
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 380
nl_die_arg(___nl__im__70);
#line 381
goto label_280;
#line 381
label_274:
;
#line 381
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(128)));
#line 381
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 382
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 382
nl_die_arg(___nl__im__73);
#line 383
goto label_280;
#line 383
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
#line 387
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 387
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 387
if(___nl__bool__4){ goto label_20;}
#line 389
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(405));
#line 389
if(___nl__bool__4){ goto label_37;}
#line 391
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(406));
#line 391
if(___nl__bool__4){ goto label_53;}
#line 393
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 393
if(___nl__bool__4){ goto label_72;}
#line 395
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 395
if(___nl__bool__4){ goto label_99;}
#line 397
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 397
if(___nl__bool__4){ goto label_105;}
#line 399
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(563));
#line 399
if(___nl__bool__4){ goto label_111;}
#line 401
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 401
if(___nl__bool__4){ goto label_117;}
#line 401
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 401
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 401
nl_die_arg(___nl__im__5);
#line 387
label_20:
;
#line 388
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 388
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 388
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 388
c_rt_lib0clear(&___nl__im__8);
#line 388
c_rt_lib0clear(&___nl__im__9);
#line 388
c_rt_lib0move(&___nl__im__10,___get_global_string_const(442));
#line 388
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 388
c_rt_lib0clear(&___nl__im__7);
#line 388
c_rt_lib0clear(&___nl__im__10);
#line 388
c_rt_lib0clear(&___nl__im__0);
#line 388
c_rt_lib0clear(&___nl__im__1);
#line 388
c_rt_lib0clear(&___nl__im__3);
#line 388
//clear ___nl__bool__4;
#line 388
c_rt_lib0clear(&___nl__im__5);
#line 388
return ___nl__im__6;
#line 389
goto label_123;
#line 389
label_37:
;
#line 390
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 390
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 390
c_rt_lib0clear(&___nl__im__13);
#line 390
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 390
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 390
c_rt_lib0clear(&___nl__im__12);
#line 390
c_rt_lib0clear(&___nl__im__14);
#line 390
c_rt_lib0clear(&___nl__im__0);
#line 390
c_rt_lib0clear(&___nl__im__1);
#line 390
c_rt_lib0clear(&___nl__im__3);
#line 390
//clear ___nl__bool__4;
#line 390
c_rt_lib0clear(&___nl__im__5);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
return ___nl__im__11;
#line 391
goto label_123;
#line 391
label_53:
;
#line 392
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 392
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 392
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 392
c_rt_lib0clear(&___nl__im__17);
#line 392
c_rt_lib0clear(&___nl__im__18);
#line 392
c_rt_lib0move(&___nl__im__19,___get_global_string_const(442));
#line 392
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 392
c_rt_lib0clear(&___nl__im__16);
#line 392
c_rt_lib0clear(&___nl__im__19);
#line 392
c_rt_lib0clear(&___nl__im__0);
#line 392
c_rt_lib0clear(&___nl__im__1);
#line 392
c_rt_lib0clear(&___nl__im__3);
#line 392
//clear ___nl__bool__4;
#line 392
c_rt_lib0clear(&___nl__im__5);
#line 392
c_rt_lib0clear(&___nl__im__6);
#line 392
c_rt_lib0clear(&___nl__im__11);
#line 392
return ___nl__im__15;
#line 393
goto label_123;
#line 393
label_72:
;
#line 394
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 394
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 394
if(___nl__bool__24){ goto label_78;}
#line 394
c_rt_lib0move(&___nl__im__23,___get_global_string_const(572));
#line 394
goto label_80;
#line 394
label_78:
;
#line 394
c_rt_lib0move(&___nl__im__23,___get_global_string_const(573));
#line 394
label_80:
;
#line 394
//clear ___nl__bool__24;
#line 394
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 394
c_rt_lib0clear(&___nl__im__22);
#line 394
c_rt_lib0clear(&___nl__im__23);
#line 394
c_rt_lib0move(&___nl__im__25,___get_global_string_const(442));
#line 394
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 394
c_rt_lib0clear(&___nl__im__21);
#line 394
c_rt_lib0clear(&___nl__im__25);
#line 394
c_rt_lib0clear(&___nl__im__0);
#line 394
c_rt_lib0clear(&___nl__im__1);
#line 394
c_rt_lib0clear(&___nl__im__3);
#line 394
//clear ___nl__bool__4;
#line 394
c_rt_lib0clear(&___nl__im__5);
#line 394
c_rt_lib0clear(&___nl__im__6);
#line 394
c_rt_lib0clear(&___nl__im__11);
#line 394
c_rt_lib0clear(&___nl__im__15);
#line 394
return ___nl__im__20;
#line 395
goto label_123;
#line 395
label_99:
;
#line 395
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(559)));
#line 395
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 396
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 396
nl_die_arg(___nl__im__28);
#line 397
goto label_123;
#line 397
label_105:
;
#line 397
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(127)));
#line 397
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 398
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 398
nl_die_arg(___nl__im__31);
#line 399
goto label_123;
#line 399
label_111:
;
#line 399
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(563)));
#line 399
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 400
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 400
nl_die_arg(___nl__im__34);
#line 401
goto label_123;
#line 401
label_117:
;
#line 401
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 401
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 402
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 402
nl_die_arg(___nl__im__37);
#line 403
goto label_123;
#line 403
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
#line 407
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 407
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 407
c_rt_lib0clear(&___nl__im__4);
#line 407
___nl__bool__3 = !___nl__bool__3;
#line 407
if(___nl__bool__3){ goto label_25;}
#line 408
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 408
c_rt_lib0move(&___nl__im__8,___get_global_string_const(243));
#line 409
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 409
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 409
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 409
c_rt_lib0clear(&___nl__im__10);
#line 409
c_rt_lib0clear(&___nl__im__11);
#line 409
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 409
c_rt_lib0clear(&___nl__im__7);
#line 409
c_rt_lib0clear(&___nl__im__8);
#line 409
c_rt_lib0clear(&___nl__im__9);
#line 409
c_rt_lib0move(&___nl__im__12,___get_global_string_const(442));
#line 409
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 409
c_rt_lib0clear(&___nl__im__6);
#line 409
c_rt_lib0clear(&___nl__im__12);
#line 409
c_rt_lib0clear(&___nl__im__0);
#line 409
c_rt_lib0clear(&___nl__im__1);
#line 409
//clear ___nl__bool__3;
#line 409
return ___nl__im__5;
#line 410
goto label_54;
#line 410
label_25:
;
#line 410
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 410
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(127));
#line 410
c_rt_lib0clear(&___nl__im__13);
#line 410
___nl__bool__3 = !___nl__bool__3;
#line 410
if(___nl__bool__3){ goto label_50;}
#line 411
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__0));
#line 411
c_rt_lib0move(&___nl__im__18,___get_global_string_const(776));
#line 411
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 411
c_rt_lib0clear(&___nl__im__17);
#line 411
c_rt_lib0clear(&___nl__im__18);
#line 411
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_reference(___nl__im__1));
#line 411
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 411
c_rt_lib0clear(&___nl__im__16);
#line 411
c_rt_lib0clear(&___nl__im__19);
#line 411
c_rt_lib0move(&___nl__im__20,___get_global_string_const(508));
#line 411
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 411
c_rt_lib0clear(&___nl__im__15);
#line 411
c_rt_lib0clear(&___nl__im__20);
#line 411
c_rt_lib0clear(&___nl__im__0);
#line 411
c_rt_lib0clear(&___nl__im__1);
#line 411
//clear ___nl__bool__3;
#line 411
c_rt_lib0clear(&___nl__im__5);
#line 411
return ___nl__im__14;
#line 412
goto label_54;
#line 412
label_50:
;
#line 413
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 413
nl_die_arg(___nl__im__21);
#line 414
goto label_54;
#line 414
label_54:
;
#line 414
//clear ___nl__bool__3;
#line 414
c_rt_lib0clear(&___nl__im__5);
#line 414
c_rt_lib0clear(&___nl__im__14);
#line 414
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
#line 418
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 418
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 418
c_rt_lib0clear(&___nl__im__4);
#line 418
___nl__bool__3 = !___nl__bool__3;
#line 418
if(___nl__bool__3){ goto label_29;}
#line 419
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 419
c_rt_lib0move(&___nl__im__9,___get_global_string_const(271));
#line 419
c_rt_lib0move(&___nl__im__10,___get_global_string_const(244));
#line 420
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__1));
#line 420
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__13));
#line 420
c_rt_lib0clear(&___nl__im__13);
#line 420
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 420
c_rt_lib0clear(&___nl__im__12);
#line 420
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 420
c_rt_lib0clear(&___nl__im__9);
#line 420
c_rt_lib0clear(&___nl__im__10);
#line 420
c_rt_lib0clear(&___nl__im__11);
#line 420
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 420
c_rt_lib0clear(&___nl__im__7);
#line 420
c_rt_lib0clear(&___nl__im__8);
#line 420
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 420
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 420
c_rt_lib0clear(&___nl__im__6);
#line 420
c_rt_lib0clear(&___nl__im__14);
#line 420
c_rt_lib0clear(&___nl__im__0);
#line 420
c_rt_lib0clear(&___nl__im__1);
#line 420
//clear ___nl__bool__3;
#line 420
return ___nl__im__5;
#line 421
goto label_54;
#line 421
label_29:
;
#line 421
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 421
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 421
c_rt_lib0clear(&___nl__im__15);
#line 421
___nl__bool__3 = !___nl__bool__3;
#line 421
if(___nl__bool__3){ goto label_50;}
#line 422
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 422
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__1));
#line 422
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 422
c_rt_lib0clear(&___nl__im__18);
#line 422
c_rt_lib0clear(&___nl__im__19);
#line 422
c_rt_lib0move(&___nl__im__20,___get_global_string_const(777));
#line 422
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 422
c_rt_lib0clear(&___nl__im__17);
#line 422
c_rt_lib0clear(&___nl__im__20);
#line 422
c_rt_lib0clear(&___nl__im__0);
#line 422
c_rt_lib0clear(&___nl__im__1);
#line 422
//clear ___nl__bool__3;
#line 422
c_rt_lib0clear(&___nl__im__5);
#line 422
return ___nl__im__16;
#line 423
goto label_54;
#line 423
label_50:
;
#line 424
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 424
nl_die_arg(___nl__im__21);
#line 425
goto label_54;
#line 425
label_54:
;
#line 425
//clear ___nl__bool__3;
#line 425
c_rt_lib0clear(&___nl__im__5);
#line 425
c_rt_lib0clear(&___nl__im__16);
#line 425
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
#line 429
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 429
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(206)));
#line 429
c_rt_lib0clear(&___nl__im__3);
#line 429
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 429
c_rt_lib0clear(&___nl__im__2);
#line 429
___nl__bool__1 = !___nl__bool__1;
#line 429
if(___nl__bool__1){ goto label_34;}
#line 430
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 430
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_to_assign(___nl__im__9));
#line 430
c_rt_lib0clear(&___nl__im__9);
#line 430
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 430
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__11));
#line 430
c_rt_lib0clear(&___nl__im__11);
#line 430
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 430
c_rt_lib0clear(&___nl__im__8);
#line 430
c_rt_lib0clear(&___nl__im__10);
#line 430
c_rt_lib0move(&___nl__im__12,___get_global_string_const(316));
#line 430
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 430
c_rt_lib0clear(&___nl__im__7);
#line 430
c_rt_lib0clear(&___nl__im__12);
#line 431
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 431
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__14));
#line 431
c_rt_lib0clear(&___nl__im__14);
#line 431
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 431
c_rt_lib0clear(&___nl__im__6);
#line 431
c_rt_lib0clear(&___nl__im__13);
#line 431
c_rt_lib0move(&___nl__im__15,___get_global_string_const(778));
#line 431
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 431
c_rt_lib0clear(&___nl__im__5);
#line 431
c_rt_lib0clear(&___nl__im__15);
#line 431
c_rt_lib0clear(&___nl__im__0);
#line 431
//clear ___nl__bool__1;
#line 431
return ___nl__im__4;
#line 432
goto label_74;
#line 432
label_34:
;
#line 432
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 432
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 432
c_rt_lib0clear(&___nl__im__17);
#line 432
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(131));
#line 432
c_rt_lib0clear(&___nl__im__16);
#line 432
___nl__bool__1 = !___nl__bool__1;
#line 432
if(___nl__bool__1){ goto label_70;}
#line 433
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 433
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_to_assign(___nl__im__23));
#line 433
c_rt_lib0clear(&___nl__im__23);
#line 433
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 433
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 433
c_rt_lib0clear(&___nl__im__25);
#line 433
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 433
c_rt_lib0clear(&___nl__im__22);
#line 433
c_rt_lib0clear(&___nl__im__24);
#line 434
c_rt_lib0move(&___nl__im__26,___get_global_string_const(766));
#line 434
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 434
c_rt_lib0clear(&___nl__im__21);
#line 434
c_rt_lib0clear(&___nl__im__26);
#line 434
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 434
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 434
c_rt_lib0clear(&___nl__im__28);
#line 434
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 434
c_rt_lib0clear(&___nl__im__20);
#line 434
c_rt_lib0clear(&___nl__im__27);
#line 434
c_rt_lib0move(&___nl__im__29,___get_global_string_const(508));
#line 434
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 434
c_rt_lib0clear(&___nl__im__19);
#line 434
c_rt_lib0clear(&___nl__im__29);
#line 434
c_rt_lib0clear(&___nl__im__0);
#line 434
//clear ___nl__bool__1;
#line 434
c_rt_lib0clear(&___nl__im__4);
#line 434
return ___nl__im__18;
#line 435
goto label_74;
#line 435
label_70:
;
#line 436
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 436
nl_die_arg(___nl__im__30);
#line 437
goto label_74;
#line 437
label_74:
;
#line 437
//clear ___nl__bool__1;
#line 437
c_rt_lib0clear(&___nl__im__4);
#line 437
c_rt_lib0clear(&___nl__im__18);
#line 437
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
#line 441
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 442
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 442
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value(___nl__im__4));
#line 442
c_rt_lib0clear(&___nl__im__4);
#line 442
c_rt_lib0move(&___nl__im__5,___get_global_string_const(779));
#line 442
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 442
c_rt_lib0clear(&___nl__im__3);
#line 442
c_rt_lib0clear(&___nl__im__5);
#line 443
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 443
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_to_assign(___nl__im__11));
#line 443
c_rt_lib0clear(&___nl__im__11);
#line 444
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 444
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_value(___nl__im__13));
#line 444
c_rt_lib0clear(&___nl__im__13);
#line 444
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 444
c_rt_lib0clear(&___nl__im__10);
#line 444
c_rt_lib0clear(&___nl__im__12);
#line 444
c_rt_lib0move(&___nl__im__14,___get_global_string_const(316));
#line 444
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 444
c_rt_lib0clear(&___nl__im__9);
#line 444
c_rt_lib0clear(&___nl__im__14);
#line 444
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__2));
#line 444
c_rt_lib0clear(&___nl__im__8);
#line 444
c_rt_lib0move(&___nl__im__15,___get_global_string_const(317));
#line 444
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 444
c_rt_lib0clear(&___nl__im__7);
#line 444
c_rt_lib0clear(&___nl__im__15);
#line 444
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 444
c_rt_lib0clear(&___nl__im__6);
#line 445
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(606)));
#line 445
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 445
c_rt_lib0clear(&___nl__im__17);
#line 445
___nl__bool__16 = !___nl__bool__16;
#line 445
if(___nl__bool__16){ goto label_38;}
#line 446
c_rt_lib0move(&___nl__im__18,___get_global_string_const(780));
#line 446
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__18));
#line 446
c_rt_lib0clear(&___nl__im__18);
#line 447
goto label_38;
#line 447
label_38:
;
#line 447
//clear ___nl__bool__16;
#line 448
c_rt_lib0move(&___nl__im__19,___get_global_string_const(442));
#line 448
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 448
c_rt_lib0clear(&___nl__im__19);
#line 449
c_rt_lib0clear(&___nl__im__0);
#line 449
c_rt_lib0clear(&___nl__im__2);
#line 449
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
#line 453
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 453
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 453
c_rt_lib0clear(&___nl__im__4);
#line 453
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 453
c_rt_lib0clear(&___nl__im__3);
#line 453
___nl__bool__2 = !___nl__bool__2;
#line 453
if(___nl__bool__2){ goto label_32;}
#line 454
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 454
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__8));
#line 454
c_rt_lib0clear(&___nl__im__8);
#line 455
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 455
c_rt_lib0move(&___nl__im__11,___get_global_string_const(272));
#line 455
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 455
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 455
c_rt_lib0clear(&___nl__im__14);
#line 455
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 455
c_rt_lib0clear(&___nl__im__13);
#line 455
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 455
c_rt_lib0clear(&___nl__im__10);
#line 455
c_rt_lib0clear(&___nl__im__11);
#line 455
c_rt_lib0clear(&___nl__im__12);
#line 455
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 455
c_rt_lib0clear(&___nl__im__7);
#line 455
c_rt_lib0clear(&___nl__im__9);
#line 455
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 455
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 455
c_rt_lib0clear(&___nl__im__6);
#line 455
c_rt_lib0clear(&___nl__im__15);
#line 455
c_rt_lib0clear(&___nl__im__0);
#line 455
//clear ___nl__bool__2;
#line 455
return ___nl__im__5;
#line 456
goto label_56;
#line 456
label_32:
;
#line 456
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 456
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 456
c_rt_lib0clear(&___nl__im__17);
#line 456
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 456
c_rt_lib0clear(&___nl__im__16);
#line 456
___nl__bool__2 = !___nl__bool__2;
#line 456
if(___nl__bool__2){ goto label_52;}
#line 457
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 457
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 457
c_rt_lib0clear(&___nl__im__20);
#line 457
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 457
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 457
c_rt_lib0clear(&___nl__im__19);
#line 457
c_rt_lib0clear(&___nl__im__21);
#line 457
c_rt_lib0clear(&___nl__im__0);
#line 457
//clear ___nl__bool__2;
#line 457
c_rt_lib0clear(&___nl__im__5);
#line 457
return ___nl__im__18;
#line 458
goto label_56;
#line 458
label_52:
;
#line 459
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 459
nl_die_arg(___nl__im__22);
#line 460
goto label_56;
#line 460
label_56:
;
#line 460
//clear ___nl__bool__2;
#line 460
c_rt_lib0clear(&___nl__im__5);
#line 460
c_rt_lib0clear(&___nl__im__18);
#line 460
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
#line 464
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 464
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 464
c_rt_lib0clear(&___nl__im__4);
#line 464
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 464
c_rt_lib0clear(&___nl__im__3);
#line 464
___nl__bool__2 = !___nl__bool__2;
#line 464
if(___nl__bool__2){ goto label_32;}
#line 465
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 465
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 465
c_rt_lib0clear(&___nl__im__8);
#line 466
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 466
c_rt_lib0move(&___nl__im__11,___get_global_string_const(275));
#line 466
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 466
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 466
c_rt_lib0clear(&___nl__im__14);
#line 466
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 466
c_rt_lib0clear(&___nl__im__13);
#line 466
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 466
c_rt_lib0clear(&___nl__im__10);
#line 466
c_rt_lib0clear(&___nl__im__11);
#line 466
c_rt_lib0clear(&___nl__im__12);
#line 466
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 466
c_rt_lib0clear(&___nl__im__7);
#line 466
c_rt_lib0clear(&___nl__im__9);
#line 466
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 466
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 466
c_rt_lib0clear(&___nl__im__6);
#line 466
c_rt_lib0clear(&___nl__im__15);
#line 466
c_rt_lib0clear(&___nl__im__0);
#line 466
//clear ___nl__bool__2;
#line 466
return ___nl__im__5;
#line 467
goto label_56;
#line 467
label_32:
;
#line 467
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 467
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 467
c_rt_lib0clear(&___nl__im__17);
#line 467
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 467
c_rt_lib0clear(&___nl__im__16);
#line 467
___nl__bool__2 = !___nl__bool__2;
#line 467
if(___nl__bool__2){ goto label_52;}
#line 468
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 468
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 468
c_rt_lib0clear(&___nl__im__20);
#line 468
c_rt_lib0move(&___nl__im__21,___get_global_string_const(781));
#line 468
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 468
c_rt_lib0clear(&___nl__im__19);
#line 468
c_rt_lib0clear(&___nl__im__21);
#line 468
c_rt_lib0clear(&___nl__im__0);
#line 468
//clear ___nl__bool__2;
#line 468
c_rt_lib0clear(&___nl__im__5);
#line 468
return ___nl__im__18;
#line 469
goto label_56;
#line 469
label_52:
;
#line 470
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 470
nl_die_arg(___nl__im__22);
#line 471
goto label_56;
#line 471
label_56:
;
#line 471
//clear ___nl__bool__2;
#line 471
c_rt_lib0clear(&___nl__im__5);
#line 471
c_rt_lib0clear(&___nl__im__18);
#line 471
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
#line 475
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 475
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 475
c_rt_lib0clear(&___nl__im__4);
#line 475
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 475
c_rt_lib0clear(&___nl__im__3);
#line 475
___nl__bool__2 = !___nl__bool__2;
#line 475
if(___nl__bool__2){ goto label_32;}
#line 476
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 476
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 476
c_rt_lib0clear(&___nl__im__8);
#line 477
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 477
c_rt_lib0move(&___nl__im__11,___get_global_string_const(274));
#line 477
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 477
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 477
c_rt_lib0clear(&___nl__im__14);
#line 477
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 477
c_rt_lib0clear(&___nl__im__13);
#line 477
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 477
c_rt_lib0clear(&___nl__im__10);
#line 477
c_rt_lib0clear(&___nl__im__11);
#line 477
c_rt_lib0clear(&___nl__im__12);
#line 477
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 477
c_rt_lib0clear(&___nl__im__7);
#line 477
c_rt_lib0clear(&___nl__im__9);
#line 477
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 477
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 477
c_rt_lib0clear(&___nl__im__6);
#line 477
c_rt_lib0clear(&___nl__im__15);
#line 477
c_rt_lib0clear(&___nl__im__0);
#line 477
//clear ___nl__bool__2;
#line 477
return ___nl__im__5;
#line 478
goto label_82;
#line 478
label_32:
;
#line 478
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 478
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 478
c_rt_lib0clear(&___nl__im__17);
#line 478
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 478
c_rt_lib0clear(&___nl__im__16);
#line 478
___nl__bool__2 = !___nl__bool__2;
#line 478
if(___nl__bool__2){ goto label_78;}
#line 479
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 479
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value(___nl__im__19));
#line 479
c_rt_lib0clear(&___nl__im__19);
#line 480
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 480
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_value_to_assign(___nl__im__27));
#line 480
c_rt_lib0clear(&___nl__im__27);
#line 481
c_rt_lib0move(&___nl__im__29,___get_global_string_const(282));
#line 481
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 481
c_rt_lib0clear(&___nl__im__29);
#line 481
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 481
c_rt_lib0clear(&___nl__im__26);
#line 481
c_rt_lib0clear(&___nl__im__28);
#line 481
c_rt_lib0move(&___nl__im__30,___get_global_string_const(782));
#line 481
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 481
c_rt_lib0clear(&___nl__im__25);
#line 481
c_rt_lib0clear(&___nl__im__30);
#line 481
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 481
c_rt_lib0clear(&___nl__im__24);
#line 481
c_rt_lib0move(&___nl__im__31,___get_global_string_const(783));
#line 481
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 481
c_rt_lib0clear(&___nl__im__23);
#line 481
c_rt_lib0clear(&___nl__im__31);
#line 481
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 481
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__33));
#line 481
c_rt_lib0clear(&___nl__im__33);
#line 481
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 481
c_rt_lib0clear(&___nl__im__22);
#line 481
c_rt_lib0clear(&___nl__im__32);
#line 481
c_rt_lib0move(&___nl__im__34,___get_global_string_const(784));
#line 481
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 481
c_rt_lib0clear(&___nl__im__21);
#line 481
c_rt_lib0clear(&___nl__im__34);
#line 481
c_rt_lib0clear(&___nl__im__0);
#line 481
//clear ___nl__bool__2;
#line 481
c_rt_lib0clear(&___nl__im__5);
#line 481
c_rt_lib0clear(&___nl__im__18);
#line 481
return ___nl__im__20;
#line 482
goto label_82;
#line 482
label_78:
;
#line 483
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 483
nl_die_arg(___nl__im__35);
#line 484
goto label_82;
#line 484
label_82:
;
#line 484
//clear ___nl__bool__2;
#line 484
c_rt_lib0clear(&___nl__im__5);
#line 484
c_rt_lib0clear(&___nl__im__18);
#line 484
c_rt_lib0clear(&___nl__im__20);
#line 484
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
#line 488
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 488
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 488
c_rt_lib0clear(&___nl__im__4);
#line 488
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 488
c_rt_lib0clear(&___nl__im__3);
#line 488
___nl__bool__2 = !___nl__bool__2;
#line 488
if(___nl__bool__2){ goto label_32;}
#line 489
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 489
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 489
c_rt_lib0clear(&___nl__im__8);
#line 490
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 490
c_rt_lib0move(&___nl__im__11,___get_global_string_const(273));
#line 490
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 490
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 490
c_rt_lib0clear(&___nl__im__14);
#line 490
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 490
c_rt_lib0clear(&___nl__im__13);
#line 490
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 490
c_rt_lib0clear(&___nl__im__10);
#line 490
c_rt_lib0clear(&___nl__im__11);
#line 490
c_rt_lib0clear(&___nl__im__12);
#line 490
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 490
c_rt_lib0clear(&___nl__im__7);
#line 490
c_rt_lib0clear(&___nl__im__9);
#line 490
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 490
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 490
c_rt_lib0clear(&___nl__im__6);
#line 490
c_rt_lib0clear(&___nl__im__15);
#line 490
c_rt_lib0clear(&___nl__im__0);
#line 490
//clear ___nl__bool__2;
#line 490
return ___nl__im__5;
#line 491
goto label_72;
#line 491
label_32:
;
#line 491
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 491
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 491
c_rt_lib0clear(&___nl__im__17);
#line 491
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 491
c_rt_lib0clear(&___nl__im__16);
#line 491
___nl__bool__2 = !___nl__bool__2;
#line 491
if(___nl__bool__2){ goto label_68;}
#line 492
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 492
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__23));
#line 492
c_rt_lib0clear(&___nl__im__23);
#line 493
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 493
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 493
c_rt_lib0clear(&___nl__im__25);
#line 493
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 493
c_rt_lib0clear(&___nl__im__22);
#line 493
c_rt_lib0clear(&___nl__im__24);
#line 493
c_rt_lib0move(&___nl__im__26,___get_global_string_const(785));
#line 493
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 493
c_rt_lib0clear(&___nl__im__21);
#line 493
c_rt_lib0clear(&___nl__im__26);
#line 493
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 493
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 493
c_rt_lib0clear(&___nl__im__28);
#line 493
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 493
c_rt_lib0clear(&___nl__im__20);
#line 493
c_rt_lib0clear(&___nl__im__27);
#line 493
c_rt_lib0move(&___nl__im__29,___get_global_string_const(786));
#line 493
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 493
c_rt_lib0clear(&___nl__im__19);
#line 493
c_rt_lib0clear(&___nl__im__29);
#line 493
c_rt_lib0clear(&___nl__im__0);
#line 493
//clear ___nl__bool__2;
#line 493
c_rt_lib0clear(&___nl__im__5);
#line 493
return ___nl__im__18;
#line 494
goto label_72;
#line 494
label_68:
;
#line 495
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 495
nl_die_arg(___nl__im__30);
#line 496
goto label_72;
#line 496
label_72:
;
#line 496
//clear ___nl__bool__2;
#line 496
c_rt_lib0clear(&___nl__im__5);
#line 496
c_rt_lib0clear(&___nl__im__18);
#line 496
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
#line 500
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 501
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 501
___nl__bool__3 = !___nl__bool__3;
#line 501
if(___nl__bool__3){ goto label_36;}
#line 502
c_rt_lib0move(&___nl__im__6,___get_global_string_const(127));
#line 502
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 502
c_rt_lib0clear(&___nl__im__6);
#line 502
c_rt_lib0move(&___nl__im__7,___get_global_string_const(787));
#line 502
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 502
c_rt_lib0clear(&___nl__im__5);
#line 502
c_rt_lib0clear(&___nl__im__7);
#line 502
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 502
c_rt_lib0clear(&___nl__im__4);
#line 503
___nl__int__9 = 0;
#line 503
___nl__int__10 = 1;
#line 503
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 503
label_16:
;
#line 503
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 503
if(___nl__bool__12){ goto label_31;}
#line 503
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 503
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 503
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_register_value(___nl__im__8));
#line 503
c_rt_lib0move(&___nl__im__16,___get_global_string_const(314));
#line 503
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 503
c_rt_lib0clear(&___nl__im__15);
#line 503
c_rt_lib0clear(&___nl__im__16);
#line 503
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 503
c_rt_lib0clear(&___nl__im__14);
#line 503
c_rt_lib0clear(&___nl__im__8);
#line 503
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 503
goto label_16;
#line 503
label_31:
;
#line 504
c_rt_lib0move(&___nl__im__17,___get_global_string_const(500));
#line 504
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 504
c_rt_lib0clear(&___nl__im__17);
#line 505
goto label_70;
#line 505
label_36:
;
#line 505
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(127));
#line 505
___nl__bool__3 = !___nl__bool__3;
#line 505
if(___nl__bool__3){ goto label_66;}
#line 506
c_rt_lib0move(&___nl__im__18,___get_global_string_const(316));
#line 506
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 506
c_rt_lib0clear(&___nl__im__18);
#line 507
___nl__int__20 = 0;
#line 507
___nl__int__21 = 1;
#line 507
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 507
label_46:
;
#line 507
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 507
if(___nl__bool__23){ goto label_61;}
#line 507
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 507
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 507
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_reference(___nl__im__19));
#line 507
c_rt_lib0move(&___nl__im__27,___get_global_string_const(314));
#line 507
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 507
c_rt_lib0clear(&___nl__im__26);
#line 507
c_rt_lib0clear(&___nl__im__27);
#line 507
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 507
c_rt_lib0clear(&___nl__im__25);
#line 507
c_rt_lib0clear(&___nl__im__19);
#line 507
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 507
goto label_46;
#line 507
label_61:
;
#line 508
c_rt_lib0move(&___nl__im__28,___get_global_string_const(317));
#line 508
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 508
c_rt_lib0clear(&___nl__im__28);
#line 509
goto label_70;
#line 509
label_66:
;
#line 510
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 510
nl_die_arg(___nl__im__29);
#line 511
goto label_70;
#line 511
label_70:
;
#line 511
//clear ___nl__bool__3;
#line 511
c_rt_lib0clear(&___nl__im__8);
#line 511
//clear ___nl__int__9;
#line 511
//clear ___nl__int__10;
#line 511
//clear ___nl__int__11;
#line 511
//clear ___nl__bool__12;
#line 511
c_rt_lib0clear(&___nl__im__13);
#line 511
c_rt_lib0clear(&___nl__im__19);
#line 511
//clear ___nl__int__20;
#line 511
//clear ___nl__int__21;
#line 511
//clear ___nl__int__22;
#line 511
//clear ___nl__bool__23;
#line 511
c_rt_lib0clear(&___nl__im__24);
#line 511
c_rt_lib0clear(&___nl__im__29);
#line 512
c_rt_lib0clear(&___nl__im__0);
#line 512
c_rt_lib0clear(&___nl__im__1);
#line 512
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
#line 516
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 516
c_rt_lib0move(&___nl__im__4,___get_global_string_const(788));
#line 516
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 516
c_rt_lib0clear(&___nl__im__3);
#line 516
c_rt_lib0clear(&___nl__im__4);
#line 516
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 516
c_rt_lib0clear(&___nl__im__2);
#line 516
c_rt_lib0clear(&___nl__im__0);
#line 516
return ___nl__im__1;
#line 516
c_rt_lib0clear(&___nl__im__0);
#line 516
c_rt_lib0clear(&___nl__im__1);
#line 516
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
#line 520
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 520
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 520
c_rt_lib0clear(&___nl__im__3);
#line 521
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 521
c_rt_lib0move(&___nl__im__6,___get_global_string_const(389));
#line 521
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 521
c_rt_lib0clear(&___nl__im__5);
#line 521
c_rt_lib0clear(&___nl__im__6);
#line 521
if(___nl__bool__4){ goto label_14;}
#line 521
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 521
c_rt_lib0move(&___nl__im__8,___get_global_string_const(379));
#line 521
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 521
c_rt_lib0clear(&___nl__im__7);
#line 521
c_rt_lib0clear(&___nl__im__8);
#line 521
label_14:
;
#line 521
if(___nl__bool__4){ goto label_21;}
#line 521
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 521
c_rt_lib0move(&___nl__im__10,___get_global_string_const(381));
#line 521
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 521
c_rt_lib0clear(&___nl__im__9);
#line 521
c_rt_lib0clear(&___nl__im__10);
#line 521
label_21:
;
#line 521
if(___nl__bool__4){ goto label_28;}
#line 521
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 521
c_rt_lib0move(&___nl__im__12,___get_global_string_const(387));
#line 521
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 521
c_rt_lib0clear(&___nl__im__11);
#line 521
c_rt_lib0clear(&___nl__im__12);
#line 521
label_28:
;
#line 521
if(___nl__bool__4){ goto label_35;}
#line 521
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 521
c_rt_lib0move(&___nl__im__14,___get_global_string_const(383));
#line 521
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 521
c_rt_lib0clear(&___nl__im__13);
#line 521
c_rt_lib0clear(&___nl__im__14);
#line 521
label_35:
;
#line 521
if(___nl__bool__4){ goto label_42;}
#line 522
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 522
c_rt_lib0move(&___nl__im__16,___get_global_string_const(385));
#line 522
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 522
c_rt_lib0clear(&___nl__im__15);
#line 522
c_rt_lib0clear(&___nl__im__16);
#line 522
label_42:
;
#line 522
___nl__bool__4 = !___nl__bool__4;
#line 522
if(___nl__bool__4){ goto label_69;}
#line 523
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 523
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__18));
#line 523
c_rt_lib0clear(&___nl__im__18);
#line 524
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 524
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 524
c_rt_lib0clear(&___nl__im__20);
#line 525
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 525
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 525
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 525
c_rt_lib0clear(&___nl__im__24);
#line 525
c_rt_lib0clear(&___nl__im__25);
#line 525
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 525
c_rt_lib0clear(&___nl__im__23);
#line 525
c_rt_lib0move(&___nl__im__26,___get_global_string_const(442));
#line 525
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 525
c_rt_lib0clear(&___nl__im__22);
#line 525
c_rt_lib0clear(&___nl__im__26);
#line 525
c_rt_lib0clear(&___nl__im__0);
#line 525
c_rt_lib0clear(&___nl__im__2);
#line 525
//clear ___nl__bool__4;
#line 525
c_rt_lib0clear(&___nl__im__17);
#line 525
c_rt_lib0clear(&___nl__im__19);
#line 525
return ___nl__im__21;
#line 526
goto label_181;
#line 526
label_69:
;
#line 526
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 526
c_rt_lib0move(&___nl__im__28,___get_global_string_const(371));
#line 526
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 526
c_rt_lib0clear(&___nl__im__27);
#line 526
c_rt_lib0clear(&___nl__im__28);
#line 526
if(___nl__bool__4){ goto label_81;}
#line 526
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 526
c_rt_lib0move(&___nl__im__30,___get_global_string_const(372));
#line 526
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 526
c_rt_lib0clear(&___nl__im__29);
#line 526
c_rt_lib0clear(&___nl__im__30);
#line 526
label_81:
;
#line 526
___nl__bool__4 = !___nl__bool__4;
#line 526
if(___nl__bool__4){ goto label_105;}
#line 527
c_rt_lib0move(&___nl__im__33,___get_global_string_const(271));
#line 527
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 527
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 527
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 527
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 527
c_rt_lib0clear(&___nl__im__36);
#line 527
c_rt_lib0clear(&___nl__im__37);
#line 527
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 527
c_rt_lib0clear(&___nl__im__33);
#line 527
c_rt_lib0clear(&___nl__im__34);
#line 527
c_rt_lib0clear(&___nl__im__35);
#line 527
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 527
c_rt_lib0clear(&___nl__im__32);
#line 527
c_rt_lib0clear(&___nl__im__0);
#line 527
c_rt_lib0clear(&___nl__im__2);
#line 527
//clear ___nl__bool__4;
#line 527
c_rt_lib0clear(&___nl__im__17);
#line 527
c_rt_lib0clear(&___nl__im__19);
#line 527
c_rt_lib0clear(&___nl__im__21);
#line 527
return ___nl__im__31;
#line 528
goto label_181;
#line 528
label_105:
;
#line 528
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 528
c_rt_lib0move(&___nl__im__39,___get_global_string_const(110));
#line 528
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 528
c_rt_lib0clear(&___nl__im__38);
#line 528
c_rt_lib0clear(&___nl__im__39);
#line 528
___nl__bool__4 = !___nl__bool__4;
#line 528
if(___nl__bool__4){ goto label_147;}
#line 529
c_rt_lib0move(&___nl__im__43,___get_global_string_const(271));
#line 529
c_rt_lib0move(&___nl__im__44,___get_global_string_const(789));
#line 530
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 530
c_rt_lib0move(&___nl__im__47, generator_js_priv0get_register_value(___nl__im__48));
#line 530
c_rt_lib0clear(&___nl__im__48);
#line 530
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__47));
#line 530
c_rt_lib0clear(&___nl__im__47);
#line 530
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 530
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value(___nl__im__51));
#line 530
c_rt_lib0clear(&___nl__im__51);
#line 530
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__50));
#line 530
c_rt_lib0clear(&___nl__im__50);
#line 530
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 530
c_rt_lib0clear(&___nl__im__46);
#line 530
c_rt_lib0clear(&___nl__im__49);
#line 530
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 530
c_rt_lib0clear(&___nl__im__43);
#line 530
c_rt_lib0clear(&___nl__im__44);
#line 530
c_rt_lib0clear(&___nl__im__45);
#line 530
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 530
c_rt_lib0clear(&___nl__im__42);
#line 530
c_rt_lib0move(&___nl__im__52,___get_global_string_const(442));
#line 530
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 530
c_rt_lib0clear(&___nl__im__41);
#line 530
c_rt_lib0clear(&___nl__im__52);
#line 530
c_rt_lib0clear(&___nl__im__0);
#line 530
c_rt_lib0clear(&___nl__im__2);
#line 530
//clear ___nl__bool__4;
#line 530
c_rt_lib0clear(&___nl__im__17);
#line 530
c_rt_lib0clear(&___nl__im__19);
#line 530
c_rt_lib0clear(&___nl__im__21);
#line 530
c_rt_lib0clear(&___nl__im__31);
#line 530
return ___nl__im__40;
#line 531
goto label_181;
#line 531
label_147:
;
#line 532
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 532
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register_value(___nl__im__54));
#line 532
c_rt_lib0clear(&___nl__im__54);
#line 533
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 533
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value(___nl__im__56));
#line 533
c_rt_lib0clear(&___nl__im__56);
#line 534
c_rt_lib0move(&___nl__im__62,___get_global_string_const(790));
#line 534
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 534
c_rt_lib0clear(&___nl__im__62);
#line 534
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 534
c_rt_lib0clear(&___nl__im__61);
#line 534
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 534
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 534
c_rt_lib0clear(&___nl__im__60);
#line 534
c_rt_lib0clear(&___nl__im__63);
#line 534
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 534
c_rt_lib0clear(&___nl__im__59);
#line 534
c_rt_lib0move(&___nl__im__64,___get_global_string_const(508));
#line 534
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 534
c_rt_lib0clear(&___nl__im__58);
#line 534
c_rt_lib0clear(&___nl__im__64);
#line 534
c_rt_lib0clear(&___nl__im__0);
#line 534
c_rt_lib0clear(&___nl__im__2);
#line 534
//clear ___nl__bool__4;
#line 534
c_rt_lib0clear(&___nl__im__17);
#line 534
c_rt_lib0clear(&___nl__im__19);
#line 534
c_rt_lib0clear(&___nl__im__21);
#line 534
c_rt_lib0clear(&___nl__im__31);
#line 534
c_rt_lib0clear(&___nl__im__40);
#line 534
c_rt_lib0clear(&___nl__im__53);
#line 534
c_rt_lib0clear(&___nl__im__55);
#line 534
return ___nl__im__57;
#line 535
goto label_181;
#line 535
label_181:
;
#line 535
//clear ___nl__bool__4;
#line 535
c_rt_lib0clear(&___nl__im__17);
#line 535
c_rt_lib0clear(&___nl__im__19);
#line 535
c_rt_lib0clear(&___nl__im__21);
#line 535
c_rt_lib0clear(&___nl__im__31);
#line 535
c_rt_lib0clear(&___nl__im__40);
#line 535
c_rt_lib0clear(&___nl__im__53);
#line 535
c_rt_lib0clear(&___nl__im__55);
#line 535
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
#line 541
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 541
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 541
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 541
c_rt_lib0clear(&___nl__im__7);
#line 541
c_rt_lib0clear(&___nl__im__8);
#line 541
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 541
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 541
c_rt_lib0clear(&___nl__im__6);
#line 541
c_rt_lib0clear(&___nl__im__9);
#line 542
___nl__int__10 = 0;
#line 543
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 544
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 545
___nl__int__14 = 0;
#line 545
___nl__int__15 = 1;
#line 545
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 545
label_15:
;
#line 545
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 545
if(___nl__bool__17){ goto label_58;}
#line 545
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 545
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 546
___nl__int__20 = 0;
#line 546
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 546
//clear ___nl__int__20;
#line 546
___nl__bool__19 = !___nl__bool__19;
#line 546
___nl__bool__19 = !___nl__bool__19;
#line 546
if(___nl__bool__19){ goto label_30;}
#line 546
c_rt_lib0move(&___nl__im__21,___get_global_string_const(314));
#line 546
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 546
c_rt_lib0clear(&___nl__im__21);
#line 546
goto label_30;
#line 546
label_30:
;
#line 546
//clear ___nl__bool__19;
#line 547
___nl__int__22 = 1;
#line 547
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 547
//clear ___nl__int__22;
#line 548
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 548
if(___nl__bool__23){ goto label_42;}
#line 550
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(225));
#line 550
if(___nl__bool__23){ goto label_47;}
#line 550
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 550
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 550
nl_die_arg(___nl__im__24);
#line 548
label_42:
;
#line 548
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 548
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 549
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 550
goto label_54;
#line 550
label_47:
;
#line 550
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(225)));
#line 550
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 551
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value(___nl__im__27));
#line 551
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 551
c_rt_lib0clear(&___nl__im__29);
#line 552
goto label_54;
#line 552
label_54:
;
#line 552
c_rt_lib0clear(&___nl__im__13);
#line 553
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 553
goto label_15;
#line 553
label_58:
;
#line 554
___nl__int__30 = 1;
#line 554
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 554
//clear ___nl__int__30;
#line 555
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 555
c_rt_lib0move(&___nl__im__34,___get_global_string_const(508));
#line 555
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 555
c_rt_lib0clear(&___nl__im__33);
#line 555
c_rt_lib0clear(&___nl__im__34);
#line 555
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 555
c_rt_lib0clear(&___nl__im__32);
#line 555
c_rt_lib0clear(&___nl__im__0);
#line 555
c_rt_lib0clear(&___nl__im__1);
#line 555
c_rt_lib0clear(&___nl__im__2);
#line 555
c_rt_lib0clear(&___nl__im__3);
#line 555
c_rt_lib0clear(&___nl__im__5);
#line 555
//clear ___nl__int__10;
#line 555
c_rt_lib0clear(&___nl__im__11);
#line 555
c_rt_lib0clear(&___nl__im__12);
#line 555
c_rt_lib0clear(&___nl__im__13);
#line 555
//clear ___nl__int__14;
#line 555
//clear ___nl__int__15;
#line 555
//clear ___nl__int__16;
#line 555
//clear ___nl__bool__17;
#line 555
c_rt_lib0clear(&___nl__im__18);
#line 555
//clear ___nl__bool__23;
#line 555
c_rt_lib0clear(&___nl__im__24);
#line 555
c_rt_lib0clear(&___nl__im__25);
#line 555
c_rt_lib0clear(&___nl__im__26);
#line 555
c_rt_lib0clear(&___nl__im__27);
#line 555
c_rt_lib0clear(&___nl__im__28);
#line 555
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
#line 560
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 560
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value_to_assign(___nl__im__4));
#line 560
c_rt_lib0clear(&___nl__im__4);
#line 561
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 561
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(206)));
#line 561
c_rt_lib0clear(&___nl__im__7);
#line 561
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 561
c_rt_lib0clear(&___nl__im__6);
#line 561
___nl__bool__5 = !___nl__bool__5;
#line 561
if(___nl__bool__5){ goto label_73;}
#line 562
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 562
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(279));
#line 562
if(___nl__bool__9){ goto label_18;}
#line 565
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(352));
#line 565
if(___nl__bool__9){ goto label_52;}
#line 565
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 565
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 565
nl_die_arg(___nl__im__10);
#line 562
label_18:
;
#line 562
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(279)));
#line 562
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 563
c_rt_lib0move(&___nl__im__16,___get_global_string_const(271));
#line 563
c_rt_lib0move(&___nl__im__17,___get_global_string_const(580));
#line 564
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 564
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 564
c_rt_lib0clear(&___nl__im__21);
#line 564
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__20));
#line 564
c_rt_lib0clear(&___nl__im__20);
#line 564
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__11));
#line 564
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 564
c_rt_lib0clear(&___nl__im__19);
#line 564
c_rt_lib0clear(&___nl__im__22);
#line 564
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 564
c_rt_lib0clear(&___nl__im__16);
#line 564
c_rt_lib0clear(&___nl__im__17);
#line 564
c_rt_lib0clear(&___nl__im__18);
#line 564
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 564
c_rt_lib0clear(&___nl__im__15);
#line 564
c_rt_lib0move(&___nl__im__23,___get_global_string_const(442));
#line 564
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 564
c_rt_lib0clear(&___nl__im__14);
#line 564
c_rt_lib0clear(&___nl__im__23);
#line 564
c_rt_lib0clear(&___nl__im__0);
#line 564
c_rt_lib0clear(&___nl__im__3);
#line 564
//clear ___nl__bool__5;
#line 564
c_rt_lib0clear(&___nl__im__8);
#line 564
//clear ___nl__bool__9;
#line 564
c_rt_lib0clear(&___nl__im__10);
#line 564
c_rt_lib0clear(&___nl__im__11);
#line 564
c_rt_lib0clear(&___nl__im__12);
#line 564
return ___nl__im__13;
#line 565
goto label_71;
#line 565
label_52:
;
#line 566
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 566
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 566
c_rt_lib0clear(&___nl__im__27);
#line 566
c_rt_lib0move(&___nl__im__25, generator_js_priv0get_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 566
c_rt_lib0clear(&___nl__im__26);
#line 566
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 566
c_rt_lib0clear(&___nl__im__25);
#line 566
c_rt_lib0clear(&___nl__im__0);
#line 566
c_rt_lib0clear(&___nl__im__3);
#line 566
//clear ___nl__bool__5;
#line 566
c_rt_lib0clear(&___nl__im__8);
#line 566
//clear ___nl__bool__9;
#line 566
c_rt_lib0clear(&___nl__im__10);
#line 566
c_rt_lib0clear(&___nl__im__11);
#line 566
c_rt_lib0clear(&___nl__im__12);
#line 566
c_rt_lib0clear(&___nl__im__13);
#line 566
return ___nl__im__24;
#line 567
goto label_71;
#line 567
label_71:
;
#line 568
goto label_137;
#line 568
label_73:
;
#line 568
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 568
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(206)));
#line 568
c_rt_lib0clear(&___nl__im__29);
#line 568
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(563));
#line 568
c_rt_lib0clear(&___nl__im__28);
#line 568
___nl__bool__5 = !___nl__bool__5;
#line 568
if(___nl__bool__5){ goto label_133;}
#line 569
c_rt_lib0move(&___nl__im__31,___get_global_string_const(791));
#line 569
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(567)));
#line 569
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 569
c_rt_lib0clear(&___nl__im__33);
#line 569
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 569
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 569
c_rt_lib0clear(&___nl__im__31);
#line 569
//clear ___nl__int__32;
#line 569
c_rt_lib0clear(&___nl__string__34);
#line 569
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 569
c_rt_lib0clear(&___nl__im__30);
#line 570
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 570
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(279));
#line 570
if(___nl__bool__36){ goto label_100;}
#line 572
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(352));
#line 572
if(___nl__bool__36){ goto label_111;}
#line 572
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 572
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 572
nl_die_arg(___nl__im__37);
#line 570
label_100:
;
#line 570
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(279)));
#line 570
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 571
c_rt_lib0move(&___nl__im__41,___get_global_string_const(792));
#line 571
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_reference(___nl__im__38));
#line 571
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 571
c_rt_lib0clear(&___nl__im__41);
#line 571
c_rt_lib0clear(&___nl__im__42);
#line 571
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 571
c_rt_lib0clear(&___nl__im__40);
#line 572
goto label_113;
#line 572
label_111:
;
#line 573
goto label_113;
#line 573
label_113:
;
#line 574
c_rt_lib0move(&___nl__im__43,___get_global_string_const(307));
#line 574
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 574
c_rt_lib0clear(&___nl__im__43);
#line 575
c_rt_lib0clear(&___nl__im__0);
#line 575
//clear ___nl__bool__5;
#line 575
c_rt_lib0clear(&___nl__im__8);
#line 575
//clear ___nl__bool__9;
#line 575
c_rt_lib0clear(&___nl__im__10);
#line 575
c_rt_lib0clear(&___nl__im__11);
#line 575
c_rt_lib0clear(&___nl__im__12);
#line 575
c_rt_lib0clear(&___nl__im__13);
#line 575
c_rt_lib0clear(&___nl__im__24);
#line 575
c_rt_lib0clear(&___nl__im__35);
#line 575
//clear ___nl__bool__36;
#line 575
c_rt_lib0clear(&___nl__im__37);
#line 575
c_rt_lib0clear(&___nl__im__38);
#line 575
c_rt_lib0clear(&___nl__im__39);
#line 575
return ___nl__im__3;
#line 576
goto label_137;
#line 576
label_133:
;
#line 577
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 577
nl_die_arg(___nl__im__44);
#line 578
goto label_137;
#line 578
label_137:
;
#line 578
//clear ___nl__bool__5;
#line 578
c_rt_lib0clear(&___nl__im__8);
#line 578
//clear ___nl__bool__9;
#line 578
c_rt_lib0clear(&___nl__im__10);
#line 578
c_rt_lib0clear(&___nl__im__11);
#line 578
c_rt_lib0clear(&___nl__im__12);
#line 578
c_rt_lib0clear(&___nl__im__13);
#line 578
c_rt_lib0clear(&___nl__im__24);
#line 578
c_rt_lib0clear(&___nl__im__35);
#line 578
//clear ___nl__bool__36;
#line 578
c_rt_lib0clear(&___nl__im__37);
#line 578
c_rt_lib0clear(&___nl__im__38);
#line 578
c_rt_lib0clear(&___nl__im__39);
#line 578
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
#line 583
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 583
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(131));
#line 583
c_rt_lib0clear(&___nl__im__7);
#line 583
___nl__bool__6 = !___nl__bool__6;
#line 583
if(___nl__bool__6){ goto label_33;}
#line 584
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 584
c_rt_lib0move(&___nl__im__12,___get_global_string_const(271));
#line 584
c_rt_lib0move(&___nl__im__13,___get_global_string_const(237));
#line 585
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 585
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_str_imm(___nl__im__2, ___ref___im__5));
#line 585
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__17));
#line 585
c_rt_lib0clear(&___nl__im__17);
#line 585
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 585
c_rt_lib0clear(&___nl__im__15);
#line 585
c_rt_lib0clear(&___nl__im__16);
#line 585
c_rt_lib0move(&___nl__im__11, generator_js_priv0get_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 585
c_rt_lib0clear(&___nl__im__12);
#line 585
c_rt_lib0clear(&___nl__im__13);
#line 585
c_rt_lib0clear(&___nl__im__14);
#line 585
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 585
c_rt_lib0clear(&___nl__im__10);
#line 585
c_rt_lib0clear(&___nl__im__11);
#line 585
c_rt_lib0move(&___nl__im__18,___get_global_string_const(442));
#line 585
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 585
c_rt_lib0clear(&___nl__im__9);
#line 585
c_rt_lib0clear(&___nl__im__18);
#line 585
c_rt_lib0clear(&___nl__im__0);
#line 585
c_rt_lib0clear(&___nl__im__1);
#line 585
c_rt_lib0clear(&___nl__im__2);
#line 585
//clear ___nl__int__3;
#line 585
//clear ___nl__bool__6;
#line 585
return ___nl__im__8;
#line 586
goto label_64;
#line 586
label_33:
;
#line 586
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 586
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(563));
#line 586
c_rt_lib0clear(&___nl__im__19);
#line 586
___nl__bool__6 = !___nl__bool__6;
#line 586
if(___nl__bool__6){ goto label_60;}
#line 587
c_rt_lib0move(&___nl__im__23, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 587
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__1));
#line 587
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 587
c_rt_lib0clear(&___nl__im__23);
#line 587
c_rt_lib0clear(&___nl__im__24);
#line 587
c_rt_lib0move(&___nl__im__25,___get_global_string_const(793));
#line 587
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 587
c_rt_lib0clear(&___nl__im__22);
#line 587
c_rt_lib0clear(&___nl__im__25);
#line 587
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 587
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 587
c_rt_lib0clear(&___nl__im__21);
#line 587
c_rt_lib0clear(&___nl__string__26);
#line 587
c_rt_lib0clear(&___nl__im__0);
#line 587
c_rt_lib0clear(&___nl__im__1);
#line 587
c_rt_lib0clear(&___nl__im__2);
#line 587
//clear ___nl__int__3;
#line 587
//clear ___nl__bool__6;
#line 587
c_rt_lib0clear(&___nl__im__8);
#line 587
return ___nl__im__20;
#line 588
goto label_64;
#line 588
label_60:
;
#line 589
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 589
nl_die_arg(___nl__im__27);
#line 590
goto label_64;
#line 590
label_64:
;
#line 590
//clear ___nl__bool__6;
#line 590
c_rt_lib0clear(&___nl__im__8);
#line 590
c_rt_lib0clear(&___nl__im__20);
#line 590
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
#line 595
c_rt_lib0move(&___nl__im__9,___get_global_string_const(794));
#line 595
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 595
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 595
c_rt_lib0clear(&___nl__im__9);
#line 595
c_rt_lib0clear(&___nl__string__10);
#line 595
c_rt_lib0move(&___nl__im__11,___get_global_string_const(107));
#line 595
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 595
c_rt_lib0clear(&___nl__im__8);
#line 595
c_rt_lib0clear(&___nl__im__11);
#line 595
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 595
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 595
c_rt_lib0clear(&___nl__im__7);
#line 595
c_rt_lib0clear(&___nl__string__12);
#line 596
c_rt_lib0move(&___nl__im__19,___get_global_string_const(729));
#line 596
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 596
c_rt_lib0clear(&___nl__im__19);
#line 596
c_rt_lib0move(&___nl__im__20,___get_global_string_const(795));
#line 596
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 596
c_rt_lib0clear(&___nl__im__18);
#line 596
c_rt_lib0clear(&___nl__im__20);
#line 596
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 596
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 596
c_rt_lib0clear(&___nl__im__22);
#line 596
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 596
c_rt_lib0clear(&___nl__im__17);
#line 596
c_rt_lib0clear(&___nl__im__21);
#line 596
c_rt_lib0move(&___nl__im__23,___get_global_string_const(457));
#line 596
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 596
c_rt_lib0clear(&___nl__im__16);
#line 596
c_rt_lib0clear(&___nl__im__23);
#line 596
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__3));
#line 596
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 596
c_rt_lib0clear(&___nl__im__15);
#line 596
c_rt_lib0clear(&___nl__im__24);
#line 596
c_rt_lib0move(&___nl__im__25,___get_global_string_const(508));
#line 596
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 596
c_rt_lib0clear(&___nl__im__14);
#line 596
c_rt_lib0clear(&___nl__im__25);
#line 596
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 596
c_rt_lib0clear(&___nl__im__13);
#line 597
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 598
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 598
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 598
c_rt_lib0clear(&___nl__im__28);
#line 598
c_rt_lib0move(&___nl__im__29,___get_global_string_const(760));
#line 598
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 598
c_rt_lib0clear(&___nl__im__27);
#line 598
c_rt_lib0clear(&___nl__im__29);
#line 598
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 598
c_rt_lib0clear(&___nl__im__26);
#line 599
c_rt_lib0move(&___nl__im__31,___get_global_string_const(762));
#line 599
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 599
c_rt_lib0clear(&___nl__im__31);
#line 599
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 599
c_rt_lib0clear(&___nl__im__30);
#line 599
c_rt_lib0clear(&___nl__im__3);
#line 599
//clear ___nl__int__4;
#line 599
//clear ___nl__int__5;
#line 599
c_rt_lib0clear(&___nl__im__6);
#line 599
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
#line 605
___nl__int__4 = 0;
#line 606
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 607
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 608
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 608
c_rt_lib0move(&___nl__im__13,___get_global_string_const(110));
#line 608
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 608
c_rt_lib0clear(&___nl__im__12);
#line 608
c_rt_lib0clear(&___nl__im__13);
#line 608
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 608
c_rt_lib0clear(&___nl__im__11);
#line 608
c_rt_lib0move(&___nl__im__14,___get_global_string_const(110));
#line 608
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 608
c_rt_lib0clear(&___nl__im__10);
#line 608
c_rt_lib0clear(&___nl__im__14);
#line 608
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 608
c_rt_lib0clear(&___nl__im__9);
#line 608
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 608
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 608
c_rt_lib0clear(&___nl__im__8);
#line 608
c_rt_lib0clear(&___nl__im__15);
#line 609
___nl__int__17 = 0;
#line 609
___nl__int__18 = 1;
#line 609
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 609
label_23:
;
#line 609
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 609
if(___nl__bool__20){ goto label_73;}
#line 609
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 609
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 610
___nl__int__23 = 0;
#line 610
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 610
//clear ___nl__int__23;
#line 610
___nl__bool__22 = !___nl__bool__22;
#line 610
___nl__bool__22 = !___nl__bool__22;
#line 610
if(___nl__bool__22){ goto label_38;}
#line 610
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 610
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 610
c_rt_lib0clear(&___nl__im__24);
#line 610
goto label_38;
#line 610
label_38:
;
#line 610
//clear ___nl__bool__22;
#line 611
___nl__int__25 = 1;
#line 611
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 611
//clear ___nl__int__25;
#line 612
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 612
if(___nl__bool__26){ goto label_52;}
#line 614
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(347));
#line 614
if(___nl__bool__26){ goto label_57;}
#line 616
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(282));
#line 616
if(___nl__bool__26){ goto label_64;}
#line 616
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 616
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 616
nl_die_arg(___nl__im__27);
#line 612
label_52:
;
#line 612
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 612
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 613
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 614
goto label_69;
#line 614
label_57:
;
#line 614
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(347)));
#line 614
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 615
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__30));
#line 615
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 615
c_rt_lib0clear(&___nl__im__32);
#line 616
goto label_69;
#line 616
label_64:
;
#line 616
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(282)));
#line 616
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 617
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 618
goto label_69;
#line 618
label_69:
;
#line 618
c_rt_lib0clear(&___nl__im__16);
#line 619
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 619
goto label_23;
#line 619
label_73:
;
#line 620
___nl__int__35 = 1;
#line 620
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 620
//clear ___nl__int__35;
#line 621
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 621
c_rt_lib0move(&___nl__im__39,___get_global_string_const(508));
#line 621
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 621
c_rt_lib0clear(&___nl__im__38);
#line 621
c_rt_lib0clear(&___nl__im__39);
#line 621
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 621
c_rt_lib0clear(&___nl__im__37);
#line 621
c_rt_lib0clear(&___nl__im__0);
#line 621
c_rt_lib0clear(&___nl__im__1);
#line 621
c_rt_lib0clear(&___nl__im__2);
#line 621
//clear ___nl__int__4;
#line 621
c_rt_lib0clear(&___nl__im__5);
#line 621
c_rt_lib0clear(&___nl__im__6);
#line 621
c_rt_lib0clear(&___nl__im__7);
#line 621
c_rt_lib0clear(&___nl__im__16);
#line 621
//clear ___nl__int__17;
#line 621
//clear ___nl__int__18;
#line 621
//clear ___nl__int__19;
#line 621
//clear ___nl__bool__20;
#line 621
c_rt_lib0clear(&___nl__im__21);
#line 621
//clear ___nl__bool__26;
#line 621
c_rt_lib0clear(&___nl__im__27);
#line 621
c_rt_lib0clear(&___nl__im__28);
#line 621
c_rt_lib0clear(&___nl__im__29);
#line 621
c_rt_lib0clear(&___nl__im__30);
#line 621
c_rt_lib0clear(&___nl__im__31);
#line 621
c_rt_lib0clear(&___nl__im__33);
#line 621
c_rt_lib0clear(&___nl__im__34);
#line 621
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
#line 625
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 626
___nl__int__5 = 0;
#line 626
___nl__int__6 = 1;
#line 626
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 626
label_4:
;
#line 626
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 626
if(___nl__bool__8){ goto label_15;}
#line 626
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 626
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 627
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__4));
#line 627
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 627
c_rt_lib0clear(&___nl__im__10);
#line 627
c_rt_lib0clear(&___nl__im__4);
#line 628
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 628
goto label_4;
#line 628
label_15:
;
#line 629
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 629
c_rt_lib0move(&___nl__im__19,___get_global_string_const(110));
#line 629
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 629
c_rt_lib0clear(&___nl__im__18);
#line 629
c_rt_lib0clear(&___nl__im__19);
#line 629
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 629
c_rt_lib0clear(&___nl__im__17);
#line 629
c_rt_lib0move(&___nl__im__20,___get_global_string_const(110));
#line 629
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 629
c_rt_lib0clear(&___nl__im__16);
#line 629
c_rt_lib0clear(&___nl__im__20);
#line 629
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 629
c_rt_lib0clear(&___nl__im__15);
#line 629
c_rt_lib0move(&___nl__im__21,___get_global_string_const(457));
#line 629
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 629
c_rt_lib0clear(&___nl__im__14);
#line 629
c_rt_lib0clear(&___nl__im__21);
#line 629
c_rt_lib0move(&___nl__im__23,___get_global_string_const(328));
#line 629
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 629
c_rt_lib0clear(&___nl__im__23);
#line 629
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 629
c_rt_lib0clear(&___nl__im__13);
#line 629
c_rt_lib0clear(&___nl__im__22);
#line 629
c_rt_lib0move(&___nl__im__24,___get_global_string_const(322));
#line 629
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 629
c_rt_lib0clear(&___nl__im__12);
#line 629
c_rt_lib0clear(&___nl__im__24);
#line 629
c_rt_lib0clear(&___nl__im__0);
#line 629
c_rt_lib0clear(&___nl__im__1);
#line 629
c_rt_lib0clear(&___nl__im__2);
#line 629
c_rt_lib0clear(&___nl__im__3);
#line 629
c_rt_lib0clear(&___nl__im__4);
#line 629
//clear ___nl__int__5;
#line 629
//clear ___nl__int__6;
#line 629
//clear ___nl__int__7;
#line 629
//clear ___nl__bool__8;
#line 629
c_rt_lib0clear(&___nl__im__9);
#line 629
return ___nl__im__11;
#line 629
c_rt_lib0clear(&___nl__im__0);
#line 629
c_rt_lib0clear(&___nl__im__1);
#line 629
c_rt_lib0clear(&___nl__im__2);
#line 629
c_rt_lib0clear(&___nl__im__3);
#line 629
c_rt_lib0clear(&___nl__im__4);
#line 629
//clear ___nl__int__5;
#line 629
//clear ___nl__int__6;
#line 629
//clear ___nl__int__7;
#line 629
//clear ___nl__bool__8;
#line 629
c_rt_lib0clear(&___nl__im__9);
#line 629
c_rt_lib0clear(&___nl__im__11);
#line 629
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
#line 633
c_rt_lib0move(&___nl__im__3,___get_global_string_const(127));
#line 633
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 633
c_rt_lib0clear(&___nl__im__3);
#line 633
c_rt_lib0move(&___nl__im__4,___get_global_string_const(787));
#line 633
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 633
c_rt_lib0clear(&___nl__im__2);
#line 633
c_rt_lib0clear(&___nl__im__4);
#line 634
___nl__int__6 = 0;
#line 634
___nl__int__7 = 1;
#line 634
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 634
label_10:
;
#line 634
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 634
if(___nl__bool__9){ goto label_25;}
#line 634
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 634
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 634
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_const_value(___nl__im__5));
#line 634
c_rt_lib0move(&___nl__im__13,___get_global_string_const(314));
#line 634
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 634
c_rt_lib0clear(&___nl__im__12);
#line 634
c_rt_lib0clear(&___nl__im__13);
#line 634
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 634
c_rt_lib0clear(&___nl__im__11);
#line 634
c_rt_lib0clear(&___nl__im__5);
#line 634
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 634
goto label_10;
#line 634
label_25:
;
#line 635
c_rt_lib0move(&___nl__im__15,___get_global_string_const(500));
#line 635
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 635
c_rt_lib0clear(&___nl__im__15);
#line 635
c_rt_lib0clear(&___nl__im__0);
#line 635
c_rt_lib0clear(&___nl__im__1);
#line 635
c_rt_lib0clear(&___nl__im__5);
#line 635
//clear ___nl__int__6;
#line 635
//clear ___nl__int__7;
#line 635
//clear ___nl__int__8;
#line 635
//clear ___nl__bool__9;
#line 635
c_rt_lib0clear(&___nl__im__10);
#line 635
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
#line 639
c_rt_lib0move(&___nl__im__3,___get_global_string_const(128));
#line 639
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 639
c_rt_lib0clear(&___nl__im__3);
#line 639
c_rt_lib0move(&___nl__im__4,___get_global_string_const(796));
#line 639
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 639
c_rt_lib0clear(&___nl__im__2);
#line 639
c_rt_lib0clear(&___nl__im__4);
#line 640
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 640
label_8:
;
#line 640
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 640
if(___nl__bool__6){ goto label_34;}
#line 640
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 640
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 640
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 640
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 640
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 640
c_rt_lib0clear(&___nl__im__13);
#line 640
c_rt_lib0clear(&___nl__im__14);
#line 640
c_rt_lib0move(&___nl__im__15,___get_global_string_const(530));
#line 640
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 640
c_rt_lib0clear(&___nl__im__12);
#line 640
c_rt_lib0clear(&___nl__im__15);
#line 640
c_rt_lib0move(&___nl__im__16, generator_js_priv0get_const_value(___nl__im__7));
#line 640
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 640
c_rt_lib0clear(&___nl__im__11);
#line 640
c_rt_lib0clear(&___nl__im__16);
#line 640
c_rt_lib0move(&___nl__im__17,___get_global_string_const(314));
#line 640
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 640
c_rt_lib0clear(&___nl__im__10);
#line 640
c_rt_lib0clear(&___nl__im__17);
#line 640
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 640
c_rt_lib0clear(&___nl__im__9);
#line 640
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 640
goto label_8;
#line 640
label_34:
;
#line 641
c_rt_lib0move(&___nl__im__19,___get_global_string_const(797));
#line 641
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 641
c_rt_lib0clear(&___nl__im__19);
#line 641
c_rt_lib0clear(&___nl__im__0);
#line 641
c_rt_lib0clear(&___nl__im__1);
#line 641
c_rt_lib0clear(&___nl__im__5);
#line 641
//clear ___nl__bool__6;
#line 641
c_rt_lib0clear(&___nl__im__7);
#line 641
c_rt_lib0clear(&___nl__im__8);
#line 641
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
#line 645
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 645
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 645
c_rt_lib0clear(&___nl__im__2);
#line 645
___nl__bool__1 = !___nl__bool__1;
#line 645
if(___nl__bool__1){ goto label_36;}
#line 646
c_rt_lib0move(&___nl__im__9,___get_global_string_const(798));
#line 646
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 646
c_rt_lib0clear(&___nl__im__9);
#line 646
c_rt_lib0move(&___nl__im__10,___get_global_string_const(457));
#line 646
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 646
c_rt_lib0clear(&___nl__im__8);
#line 646
c_rt_lib0clear(&___nl__im__10);
#line 646
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 646
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 646
c_rt_lib0clear(&___nl__im__12);
#line 646
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 646
c_rt_lib0clear(&___nl__im__7);
#line 646
c_rt_lib0clear(&___nl__im__11);
#line 646
c_rt_lib0move(&___nl__im__13,___get_global_string_const(328));
#line 646
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 646
c_rt_lib0clear(&___nl__im__6);
#line 646
c_rt_lib0clear(&___nl__im__13);
#line 647
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 647
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_const_value(___nl__im__15));
#line 647
c_rt_lib0clear(&___nl__im__15);
#line 647
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 647
c_rt_lib0clear(&___nl__im__5);
#line 647
c_rt_lib0clear(&___nl__im__14);
#line 647
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 647
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 647
c_rt_lib0clear(&___nl__im__4);
#line 647
c_rt_lib0clear(&___nl__im__16);
#line 647
c_rt_lib0clear(&___nl__im__0);
#line 647
//clear ___nl__bool__1;
#line 647
return ___nl__im__3;
#line 648
goto label_59;
#line 648
label_36:
;
#line 649
c_rt_lib0move(&___nl__im__21,___get_global_string_const(798));
#line 649
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 649
c_rt_lib0clear(&___nl__im__21);
#line 649
c_rt_lib0move(&___nl__im__22,___get_global_string_const(457));
#line 649
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 649
c_rt_lib0clear(&___nl__im__20);
#line 649
c_rt_lib0clear(&___nl__im__22);
#line 649
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 649
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 649
c_rt_lib0clear(&___nl__im__24);
#line 649
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 649
c_rt_lib0clear(&___nl__im__19);
#line 649
c_rt_lib0clear(&___nl__im__23);
#line 649
c_rt_lib0move(&___nl__im__25,___get_global_string_const(799));
#line 649
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 649
c_rt_lib0clear(&___nl__im__18);
#line 649
c_rt_lib0clear(&___nl__im__25);
#line 649
c_rt_lib0clear(&___nl__im__0);
#line 649
//clear ___nl__bool__1;
#line 649
c_rt_lib0clear(&___nl__im__3);
#line 649
return ___nl__im__17;
#line 650
goto label_59;
#line 650
label_59:
;
#line 650
//clear ___nl__bool__1;
#line 650
c_rt_lib0clear(&___nl__im__3);
#line 650
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
#line 654
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 654
___nl__bool__1 = !___nl__bool__1;
#line 654
if(___nl__bool__1){ goto label_20;}
#line 655
c_rt_lib0move(&___nl__im__6,___get_global_string_const(405));
#line 655
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 655
c_rt_lib0clear(&___nl__im__6);
#line 655
c_rt_lib0move(&___nl__im__7,___get_global_string_const(457));
#line 655
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 655
c_rt_lib0clear(&___nl__im__5);
#line 655
c_rt_lib0clear(&___nl__im__7);
#line 655
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 655
c_rt_lib0clear(&___nl__im__4);
#line 655
c_rt_lib0move(&___nl__im__8,___get_global_string_const(322));
#line 655
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 655
c_rt_lib0clear(&___nl__im__3);
#line 655
c_rt_lib0clear(&___nl__im__8);
#line 655
c_rt_lib0clear(&___nl__im__0);
#line 655
//clear ___nl__bool__1;
#line 655
return ___nl__im__2;
#line 656
goto label_130;
#line 656
label_20:
;
#line 656
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 656
___nl__bool__1 = !___nl__bool__1;
#line 656
if(___nl__bool__1){ goto label_44;}
#line 657
c_rt_lib0move(&___nl__im__13,___get_global_string_const(282));
#line 657
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 657
c_rt_lib0clear(&___nl__im__13);
#line 657
c_rt_lib0move(&___nl__im__14,___get_global_string_const(457));
#line 657
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 657
c_rt_lib0clear(&___nl__im__12);
#line 657
c_rt_lib0clear(&___nl__im__14);
#line 657
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 657
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 657
c_rt_lib0clear(&___nl__im__11);
#line 657
c_rt_lib0clear(&___nl__im__15);
#line 657
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 657
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 657
c_rt_lib0clear(&___nl__im__10);
#line 657
c_rt_lib0clear(&___nl__im__16);
#line 657
c_rt_lib0clear(&___nl__im__0);
#line 657
//clear ___nl__bool__1;
#line 657
c_rt_lib0clear(&___nl__im__2);
#line 657
return ___nl__im__9;
#line 658
goto label_130;
#line 658
label_44:
;
#line 658
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 658
___nl__bool__1 = !___nl__bool__1;
#line 658
if(___nl__bool__1){ goto label_55;}
#line 659
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_const_arr(___nl__im__0));
#line 659
c_rt_lib0clear(&___nl__im__0);
#line 659
//clear ___nl__bool__1;
#line 659
c_rt_lib0clear(&___nl__im__2);
#line 659
c_rt_lib0clear(&___nl__im__9);
#line 659
return ___nl__im__17;
#line 660
goto label_130;
#line 660
label_55:
;
#line 660
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 660
___nl__bool__1 = !___nl__bool__1;
#line 660
if(___nl__bool__1){ goto label_67;}
#line 661
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_hash(___nl__im__0));
#line 661
c_rt_lib0clear(&___nl__im__0);
#line 661
//clear ___nl__bool__1;
#line 661
c_rt_lib0clear(&___nl__im__2);
#line 661
c_rt_lib0clear(&___nl__im__9);
#line 661
c_rt_lib0clear(&___nl__im__17);
#line 661
return ___nl__im__18;
#line 662
goto label_130;
#line 662
label_67:
;
#line 662
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 662
___nl__bool__1 = !___nl__bool__1;
#line 662
if(___nl__bool__1){ goto label_113;}
#line 663
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 663
___nl__bool__19 = !___nl__bool__19;
#line 663
if(___nl__bool__19){ goto label_90;}
#line 664
c_rt_lib0move(&___nl__im__21,___get_global_string_const(271));
#line 664
c_rt_lib0move(&___nl__im__22,___get_global_string_const(800));
#line 664
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 664
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 664
c_rt_lib0clear(&___nl__im__21);
#line 664
c_rt_lib0clear(&___nl__im__22);
#line 664
c_rt_lib0clear(&___nl__im__23);
#line 664
c_rt_lib0clear(&___nl__im__0);
#line 664
//clear ___nl__bool__1;
#line 664
c_rt_lib0clear(&___nl__im__2);
#line 664
c_rt_lib0clear(&___nl__im__9);
#line 664
c_rt_lib0clear(&___nl__im__17);
#line 664
c_rt_lib0clear(&___nl__im__18);
#line 664
//clear ___nl__bool__19;
#line 664
return ___nl__im__20;
#line 665
goto label_108;
#line 665
label_90:
;
#line 666
c_rt_lib0move(&___nl__im__25,___get_global_string_const(271));
#line 666
c_rt_lib0move(&___nl__im__26,___get_global_string_const(801));
#line 666
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 666
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 666
c_rt_lib0clear(&___nl__im__25);
#line 666
c_rt_lib0clear(&___nl__im__26);
#line 666
c_rt_lib0clear(&___nl__im__27);
#line 666
c_rt_lib0clear(&___nl__im__0);
#line 666
//clear ___nl__bool__1;
#line 666
c_rt_lib0clear(&___nl__im__2);
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
c_rt_lib0clear(&___nl__im__17);
#line 666
c_rt_lib0clear(&___nl__im__18);
#line 666
//clear ___nl__bool__19;
#line 666
c_rt_lib0clear(&___nl__im__20);
#line 666
return ___nl__im__24;
#line 667
goto label_108;
#line 667
label_108:
;
#line 667
//clear ___nl__bool__19;
#line 667
c_rt_lib0clear(&___nl__im__20);
#line 667
c_rt_lib0clear(&___nl__im__24);
#line 668
goto label_130;
#line 668
label_113:
;
#line 668
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 668
___nl__bool__1 = !___nl__bool__1;
#line 668
if(___nl__bool__1){ goto label_126;}
#line 669
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_const_ov(___nl__im__0));
#line 669
c_rt_lib0clear(&___nl__im__0);
#line 669
//clear ___nl__bool__1;
#line 669
c_rt_lib0clear(&___nl__im__2);
#line 669
c_rt_lib0clear(&___nl__im__9);
#line 669
c_rt_lib0clear(&___nl__im__17);
#line 669
c_rt_lib0clear(&___nl__im__18);
#line 669
return ___nl__im__28;
#line 670
goto label_130;
#line 670
label_126:
;
#line 671
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 671
nl_die_arg(___nl__im__29);
#line 672
goto label_130;
#line 672
label_130:
;
#line 672
//clear ___nl__bool__1;
#line 672
c_rt_lib0clear(&___nl__im__2);
#line 672
c_rt_lib0clear(&___nl__im__9);
#line 672
c_rt_lib0clear(&___nl__im__17);
#line 672
c_rt_lib0clear(&___nl__im__18);
#line 672
c_rt_lib0clear(&___nl__im__28);
#line 672
c_rt_lib0clear(&___nl__im__29);
#line 672
c_rt_lib0clear(&___nl__im__0);
#line 672
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
#line 676
c_rt_lib0move(&___nl__im__3,___get_global_string_const(802));
#line 676
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 676
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 676
c_rt_lib0clear(&___nl__im__3);
#line 676
c_rt_lib0clear(&___nl__string__4);
#line 676
c_rt_lib0move(&___nl__im__5,___get_global_string_const(803));
#line 676
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 676
c_rt_lib0clear(&___nl__im__2);
#line 676
c_rt_lib0clear(&___nl__im__5);
#line 676
//clear ___nl__int__0;
#line 676
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
#line 681
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 682
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 682
___nl__bool__3 = !___nl__bool__3;
#line 682
if(___nl__bool__3){ goto label_14;}
#line 683
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 683
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 683
c_rt_lib0clear(&___nl__im__6);
#line 683
c_rt_lib0move(&___nl__im__7,___get_global_string_const(796));
#line 683
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 683
c_rt_lib0clear(&___nl__im__5);
#line 683
c_rt_lib0clear(&___nl__im__7);
#line 683
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 683
c_rt_lib0clear(&___nl__im__4);
#line 684
goto label_26;
#line 684
label_14:
;
#line 684
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 684
___nl__bool__3 = !___nl__bool__3;
#line 684
if(___nl__bool__3){ goto label_22;}
#line 685
c_rt_lib0move(&___nl__im__8,___get_global_string_const(306));
#line 685
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 685
c_rt_lib0clear(&___nl__im__8);
#line 686
goto label_26;
#line 686
label_22:
;
#line 687
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 687
nl_die_arg(___nl__im__9);
#line 688
goto label_26;
#line 688
label_26:
;
#line 688
//clear ___nl__bool__3;
#line 688
c_rt_lib0clear(&___nl__im__9);
#line 689
___nl__int__11 = 0;
#line 689
___nl__int__12 = 1;
#line 689
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 689
label_32:
;
#line 689
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 689
if(___nl__bool__14){ goto label_59;}
#line 689
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 689
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 689
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(577)));
#line 689
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 689
c_rt_lib0clear(&___nl__im__20);
#line 689
c_rt_lib0move(&___nl__im__21,___get_global_string_const(530));
#line 689
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 689
c_rt_lib0clear(&___nl__im__19);
#line 689
c_rt_lib0clear(&___nl__im__21);
#line 689
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(225)));
#line 689
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__23));
#line 689
c_rt_lib0clear(&___nl__im__23);
#line 689
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 689
c_rt_lib0clear(&___nl__im__18);
#line 689
c_rt_lib0clear(&___nl__im__22);
#line 689
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 689
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 689
c_rt_lib0clear(&___nl__im__17);
#line 689
c_rt_lib0clear(&___nl__im__24);
#line 689
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 689
c_rt_lib0clear(&___nl__im__16);
#line 689
c_rt_lib0clear(&___nl__im__10);
#line 689
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 689
goto label_32;
#line 689
label_59:
;
#line 690
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 690
___nl__bool__25 = !___nl__bool__25;
#line 690
if(___nl__bool__25){ goto label_67;}
#line 691
c_rt_lib0move(&___nl__im__26,___get_global_string_const(797));
#line 691
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 691
c_rt_lib0clear(&___nl__im__26);
#line 692
goto label_79;
#line 692
label_67:
;
#line 692
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 692
___nl__bool__25 = !___nl__bool__25;
#line 692
if(___nl__bool__25){ goto label_75;}
#line 693
c_rt_lib0move(&___nl__im__27,___get_global_string_const(307));
#line 693
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 693
c_rt_lib0clear(&___nl__im__27);
#line 694
goto label_79;
#line 694
label_75:
;
#line 695
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 695
nl_die_arg(___nl__im__28);
#line 696
goto label_79;
#line 696
label_79:
;
#line 696
//clear ___nl__bool__25;
#line 696
c_rt_lib0clear(&___nl__im__28);
#line 697
c_rt_lib0clear(&___nl__im__0);
#line 697
c_rt_lib0clear(&___nl__im__1);
#line 697
c_rt_lib0clear(&___nl__im__10);
#line 697
//clear ___nl__int__11;
#line 697
//clear ___nl__int__12;
#line 697
//clear ___nl__int__13;
#line 697
//clear ___nl__bool__14;
#line 697
c_rt_lib0clear(&___nl__im__15);
#line 697
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
#line 701
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 702
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 702
___nl__bool__3 = !___nl__bool__3;
#line 702
if(___nl__bool__3){ goto label_36;}
#line 703
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 703
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 703
c_rt_lib0clear(&___nl__im__6);
#line 703
c_rt_lib0move(&___nl__im__7,___get_global_string_const(796));
#line 703
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 703
c_rt_lib0clear(&___nl__im__5);
#line 703
c_rt_lib0clear(&___nl__im__7);
#line 703
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 703
c_rt_lib0clear(&___nl__im__4);
#line 704
___nl__int__9 = 0;
#line 704
___nl__int__10 = 1;
#line 704
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 704
label_16:
;
#line 704
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 704
if(___nl__bool__12){ goto label_31;}
#line 704
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 704
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 704
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 704
c_rt_lib0move(&___nl__im__16,___get_global_string_const(804));
#line 704
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 704
c_rt_lib0clear(&___nl__im__15);
#line 704
c_rt_lib0clear(&___nl__im__16);
#line 704
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 704
c_rt_lib0clear(&___nl__im__14);
#line 704
c_rt_lib0clear(&___nl__im__8);
#line 704
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 704
goto label_16;
#line 704
label_31:
;
#line 705
c_rt_lib0move(&___nl__im__17,___get_global_string_const(797));
#line 705
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 705
c_rt_lib0clear(&___nl__im__17);
#line 706
goto label_70;
#line 706
label_36:
;
#line 706
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(559));
#line 706
___nl__bool__3 = !___nl__bool__3;
#line 706
if(___nl__bool__3){ goto label_66;}
#line 707
c_rt_lib0move(&___nl__im__18,___get_global_string_const(306));
#line 707
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 707
c_rt_lib0clear(&___nl__im__18);
#line 708
___nl__int__20 = 0;
#line 708
___nl__int__21 = 1;
#line 708
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 708
label_46:
;
#line 708
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 708
if(___nl__bool__23){ goto label_61;}
#line 708
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 708
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 708
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 708
c_rt_lib0move(&___nl__im__27,___get_global_string_const(805));
#line 708
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 708
c_rt_lib0clear(&___nl__im__26);
#line 708
c_rt_lib0clear(&___nl__im__27);
#line 708
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 708
c_rt_lib0clear(&___nl__im__25);
#line 708
c_rt_lib0clear(&___nl__im__19);
#line 708
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 708
goto label_46;
#line 708
label_61:
;
#line 709
c_rt_lib0move(&___nl__im__28,___get_global_string_const(307));
#line 709
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 709
c_rt_lib0clear(&___nl__im__28);
#line 710
goto label_70;
#line 710
label_66:
;
#line 711
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 711
nl_die_arg(___nl__im__29);
#line 712
goto label_70;
#line 712
label_70:
;
#line 712
//clear ___nl__bool__3;
#line 712
c_rt_lib0clear(&___nl__im__8);
#line 712
//clear ___nl__int__9;
#line 712
//clear ___nl__int__10;
#line 712
//clear ___nl__int__11;
#line 712
//clear ___nl__bool__12;
#line 712
c_rt_lib0clear(&___nl__im__13);
#line 712
c_rt_lib0clear(&___nl__im__19);
#line 712
//clear ___nl__int__20;
#line 712
//clear ___nl__int__21;
#line 712
//clear ___nl__int__22;
#line 712
//clear ___nl__bool__23;
#line 712
c_rt_lib0clear(&___nl__im__24);
#line 712
c_rt_lib0clear(&___nl__im__29);
#line 713
c_rt_lib0clear(&___nl__im__0);
#line 713
c_rt_lib0clear(&___nl__im__1);
#line 713
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0get_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 717
c_rt_lib0move(&___nl__im__2,___get_global_string_const(425));
#line 717
c_rt_lib0move(&___nl__im__3, generator_js_priv0reg_suffix(___nl__im__0));
#line 717
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__3));
#line 717
c_rt_lib0clear(&___nl__im__2);
#line 717
c_rt_lib0clear(&___nl__im__3);
#line 717
c_rt_lib0clear(&___nl__im__0);
#line 717
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
#line 721
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 722
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 722
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 722
if(___nl__bool__3){ goto label_9;}
#line 723
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 723
if(___nl__bool__3){ goto label_11;}
#line 723
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 723
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 723
nl_die_arg(___nl__im__4);
#line 722
label_9:
;
#line 723
goto label_16;
#line 723
label_11:
;
#line 724
c_rt_lib0move(&___nl__im__5,___get_global_string_const(746));
#line 724
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 724
c_rt_lib0clear(&___nl__im__5);
#line 725
goto label_16;
#line 725
label_16:
;
#line 726
c_rt_lib0clear(&___nl__im__0);
#line 726
c_rt_lib0clear(&___nl__im__2);
#line 726
//clear ___nl__bool__3;
#line 726
c_rt_lib0clear(&___nl__im__4);
#line 726
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
#line 730
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 731
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 731
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 731
if(___nl__bool__3){ goto label_9;}
#line 733
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 733
if(___nl__bool__3){ goto label_18;}
#line 733
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 733
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 733
nl_die_arg(___nl__im__4);
#line 731
label_9:
;
#line 732
c_rt_lib0move(&___nl__im__6,___get_global_string_const(806));
#line 732
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 732
c_rt_lib0clear(&___nl__im__6);
#line 732
c_rt_lib0move(&___nl__im__7,___get_global_string_const(307));
#line 732
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 732
c_rt_lib0clear(&___nl__im__5);
#line 732
c_rt_lib0clear(&___nl__im__7);
#line 733
goto label_20;
#line 733
label_18:
;
#line 734
goto label_20;
#line 734
label_20:
;
#line 735
c_rt_lib0clear(&___nl__im__0);
#line 735
c_rt_lib0clear(&___nl__im__2);
#line 735
//clear ___nl__bool__3;
#line 735
c_rt_lib0clear(&___nl__im__4);
#line 735
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
#line 740
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 740
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(131));
#line 740
if(___nl__bool__3){ goto label_20;}
#line 742
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(405));
#line 742
if(___nl__bool__3){ goto label_23;}
#line 744
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 744
if(___nl__bool__3){ goto label_26;}
#line 746
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(406));
#line 746
if(___nl__bool__3){ goto label_29;}
#line 748
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(559));
#line 748
if(___nl__bool__3){ goto label_32;}
#line 750
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 750
if(___nl__bool__3){ goto label_37;}
#line 752
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(563));
#line 752
if(___nl__bool__3){ goto label_42;}
#line 754
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 754
if(___nl__bool__3){ goto label_47;}
#line 754
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 754
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 754
nl_die_arg(___nl__im__4);
#line 740
label_20:
;
#line 741
c_rt_lib0move(&___nl__im__1,___get_global_string_const(131));
#line 742
goto label_52;
#line 742
label_23:
;
#line 743
c_rt_lib0move(&___nl__im__1,___get_global_string_const(405));
#line 744
goto label_52;
#line 744
label_26:
;
#line 745
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 746
goto label_52;
#line 746
label_29:
;
#line 747
c_rt_lib0move(&___nl__im__1,___get_global_string_const(406));
#line 748
goto label_52;
#line 748
label_32:
;
#line 748
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(559)));
#line 748
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 749
c_rt_lib0move(&___nl__im__1,___get_global_string_const(559));
#line 750
goto label_52;
#line 750
label_37:
;
#line 750
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(127)));
#line 750
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 751
c_rt_lib0move(&___nl__im__1,___get_global_string_const(127));
#line 752
goto label_52;
#line 752
label_42:
;
#line 752
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(563)));
#line 752
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 753
c_rt_lib0move(&___nl__im__1,___get_global_string_const(507));
#line 754
goto label_52;
#line 754
label_47:
;
#line 754
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 754
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 755
c_rt_lib0move(&___nl__im__1,___get_global_string_const(128));
#line 756
goto label_52;
#line 756
label_52:
;
#line 757
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 757
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(220));
#line 757
if(___nl__bool__14){ goto label_61;}
#line 758
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(422));
#line 758
if(___nl__bool__14){ goto label_63;}
#line 758
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 758
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 758
nl_die_arg(___nl__im__15);
#line 757
label_61:
;
#line 758
goto label_68;
#line 758
label_63:
;
#line 759
c_rt_lib0move(&___nl__im__16,___get_global_string_const(641));
#line 759
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 759
c_rt_lib0clear(&___nl__im__16);
#line 760
goto label_68;
#line 760
label_68:
;
#line 761
c_rt_lib0move(&___nl__im__18,___get_global_string_const(642));
#line 761
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 761
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 761
c_rt_lib0clear(&___nl__im__20);
#line 761
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 761
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 761
c_rt_lib0clear(&___nl__im__18);
#line 761
//clear ___nl__int__19;
#line 761
c_rt_lib0clear(&___nl__string__21);
#line 761
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 761
c_rt_lib0clear(&___nl__im__17);
#line 762
c_rt_lib0clear(&___nl__im__0);
#line 762
c_rt_lib0clear(&___nl__im__2);
#line 762
//clear ___nl__bool__3;
#line 762
c_rt_lib0clear(&___nl__im__4);
#line 762
c_rt_lib0clear(&___nl__im__5);
#line 762
c_rt_lib0clear(&___nl__im__6);
#line 762
c_rt_lib0clear(&___nl__im__7);
#line 762
c_rt_lib0clear(&___nl__im__8);
#line 762
c_rt_lib0clear(&___nl__im__9);
#line 762
c_rt_lib0clear(&___nl__im__10);
#line 762
c_rt_lib0clear(&___nl__im__11);
#line 762
c_rt_lib0clear(&___nl__im__12);
#line 762
c_rt_lib0clear(&___nl__im__13);
#line 762
//clear ___nl__bool__14;
#line 762
c_rt_lib0clear(&___nl__im__15);
#line 762
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
#line 767
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 767
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 767
c_rt_lib0clear(&___nl__im__2);
#line 767
___nl__bool__1 = !___nl__bool__1;
#line 767
if(___nl__bool__1){ goto label_10;}
#line 767
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 767
c_rt_lib0clear(&___nl__im__0);
#line 767
//clear ___nl__bool__1;
#line 767
return ___nl__im__3;
#line 767
goto label_10;
#line 767
label_10:
;
#line 767
//clear ___nl__bool__1;
#line 767
c_rt_lib0clear(&___nl__im__3);
#line 768
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register(___nl__im__0));
#line 768
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 768
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 768
c_rt_lib0clear(&___nl__im__5);
#line 768
c_rt_lib0clear(&___nl__im__6);
#line 768
c_rt_lib0clear(&___nl__im__0);
#line 768
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
#line 772
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 772
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 772
c_rt_lib0clear(&___nl__im__2);
#line 772
___nl__bool__1 = !___nl__bool__1;
#line 772
if(___nl__bool__1){ goto label_10;}
#line 772
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 772
c_rt_lib0clear(&___nl__im__0);
#line 772
//clear ___nl__bool__1;
#line 772
return ___nl__im__3;
#line 772
goto label_10;
#line 772
label_10:
;
#line 772
//clear ___nl__bool__1;
#line 772
c_rt_lib0clear(&___nl__im__3);
#line 773
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register_value(___nl__im__0));
#line 773
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 773
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 773
c_rt_lib0clear(&___nl__im__5);
#line 773
c_rt_lib0clear(&___nl__im__6);
#line 773
c_rt_lib0clear(&___nl__im__0);
#line 773
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
#line 777
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 778
___nl__int__3 = 0;
#line 779
___nl__int__5 = 0;
#line 779
___nl__int__6 = 1;
#line 779
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 779
label_5:
;
#line 779
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 779
if(___nl__bool__8){ goto label_50;}
#line 779
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 779
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 780
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(355)));
#line 780
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 780
if(___nl__bool__11){ goto label_18;}
#line 782
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(225));
#line 782
if(___nl__bool__11){ goto label_41;}
#line 782
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 782
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 782
nl_die_arg(___nl__im__12);
#line 780
label_18:
;
#line 781
c_rt_lib0move(&___nl__im__17,___get_global_string_const(758));
#line 781
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 781
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 781
c_rt_lib0clear(&___nl__im__17);
#line 781
c_rt_lib0clear(&___nl__string__18);
#line 781
c_rt_lib0move(&___nl__im__19,___get_global_string_const(807));
#line 781
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 781
c_rt_lib0clear(&___nl__im__16);
#line 781
c_rt_lib0clear(&___nl__im__19);
#line 781
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(471)));
#line 781
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_register_value(___nl__im__21));
#line 781
c_rt_lib0clear(&___nl__im__21);
#line 781
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 781
c_rt_lib0clear(&___nl__im__15);
#line 781
c_rt_lib0clear(&___nl__im__20);
#line 781
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 781
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 781
c_rt_lib0clear(&___nl__im__14);
#line 781
c_rt_lib0clear(&___nl__im__22);
#line 781
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 781
c_rt_lib0clear(&___nl__im__13);
#line 782
goto label_43;
#line 782
label_41:
;
#line 783
goto label_43;
#line 783
label_43:
;
#line 784
___nl__int__23 = 1;
#line 784
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 784
//clear ___nl__int__23;
#line 784
c_rt_lib0clear(&___nl__im__4);
#line 785
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 785
goto label_5;
#line 785
label_50:
;
#line 786
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(225));
#line 786
if(___nl__bool__24){ goto label_58;}
#line 788
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(352));
#line 788
if(___nl__bool__24){ goto label_91;}
#line 788
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 788
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 788
nl_die_arg(___nl__im__25);
#line 786
label_58:
;
#line 786
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(225)));
#line 786
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 787
c_rt_lib0move(&___nl__im__31,___get_global_string_const(510));
#line 787
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__2, ___nl__im__31));
#line 787
c_rt_lib0clear(&___nl__im__31);
#line 787
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__26));
#line 787
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 787
c_rt_lib0clear(&___nl__im__30);
#line 787
c_rt_lib0clear(&___nl__im__32);
#line 787
c_rt_lib0move(&___nl__im__33,___get_global_string_const(442));
#line 787
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 787
c_rt_lib0clear(&___nl__im__29);
#line 787
c_rt_lib0clear(&___nl__im__33);
#line 787
c_rt_lib0clear(&___nl__im__0);
#line 787
c_rt_lib0clear(&___nl__im__1);
#line 787
c_rt_lib0clear(&___nl__im__2);
#line 787
//clear ___nl__int__3;
#line 787
c_rt_lib0clear(&___nl__im__4);
#line 787
//clear ___nl__int__5;
#line 787
//clear ___nl__int__6;
#line 787
//clear ___nl__int__7;
#line 787
//clear ___nl__bool__8;
#line 787
c_rt_lib0clear(&___nl__im__9);
#line 787
c_rt_lib0clear(&___nl__im__10);
#line 787
//clear ___nl__bool__11;
#line 787
c_rt_lib0clear(&___nl__im__12);
#line 787
//clear ___nl__bool__24;
#line 787
c_rt_lib0clear(&___nl__im__25);
#line 787
c_rt_lib0clear(&___nl__im__26);
#line 787
c_rt_lib0clear(&___nl__im__27);
#line 787
return ___nl__im__28;
#line 788
goto label_115;
#line 788
label_91:
;
#line 789
c_rt_lib0move(&___nl__im__35,___get_global_string_const(808));
#line 789
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__35));
#line 789
c_rt_lib0clear(&___nl__im__35);
#line 789
c_rt_lib0clear(&___nl__im__0);
#line 789
c_rt_lib0clear(&___nl__im__1);
#line 789
c_rt_lib0clear(&___nl__im__2);
#line 789
//clear ___nl__int__3;
#line 789
c_rt_lib0clear(&___nl__im__4);
#line 789
//clear ___nl__int__5;
#line 789
//clear ___nl__int__6;
#line 789
//clear ___nl__int__7;
#line 789
//clear ___nl__bool__8;
#line 789
c_rt_lib0clear(&___nl__im__9);
#line 789
c_rt_lib0clear(&___nl__im__10);
#line 789
//clear ___nl__bool__11;
#line 789
c_rt_lib0clear(&___nl__im__12);
#line 789
//clear ___nl__bool__24;
#line 789
c_rt_lib0clear(&___nl__im__25);
#line 789
c_rt_lib0clear(&___nl__im__26);
#line 789
c_rt_lib0clear(&___nl__im__27);
#line 789
c_rt_lib0clear(&___nl__im__28);
#line 789
return ___nl__im__34;
#line 790
goto label_115;
#line 790
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
#line 794
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 794
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register_value_to_assign(___nl__im__2));
#line 794
c_rt_lib0clear(&___nl__im__2);
#line 795
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 795
c_rt_lib0move(&___nl__im__5,___get_global_string_const(365));
#line 795
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 795
c_rt_lib0clear(&___nl__im__4);
#line 795
c_rt_lib0clear(&___nl__im__5);
#line 795
___nl__bool__3 = !___nl__bool__3;
#line 795
if(___nl__bool__3){ goto label_24;}
#line 796
c_rt_lib0move(&___nl__im__8,___get_global_string_const(365));
#line 796
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 796
c_rt_lib0clear(&___nl__im__8);
#line 796
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 796
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_register_value(___nl__im__10));
#line 796
c_rt_lib0clear(&___nl__im__10);
#line 796
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 796
c_rt_lib0clear(&___nl__im__7);
#line 796
c_rt_lib0clear(&___nl__im__9);
#line 796
c_rt_lib0clear(&___nl__im__0);
#line 796
c_rt_lib0clear(&___nl__im__1);
#line 796
//clear ___nl__bool__3;
#line 796
return ___nl__im__6;
#line 797
goto label_40;
#line 797
label_24:
;
#line 798
c_rt_lib0move(&___nl__im__13,___get_global_string_const(367));
#line 798
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 798
c_rt_lib0clear(&___nl__im__13);
#line 798
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 798
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_register_value(___nl__im__15));
#line 798
c_rt_lib0clear(&___nl__im__15);
#line 798
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 798
c_rt_lib0clear(&___nl__im__12);
#line 798
c_rt_lib0clear(&___nl__im__14);
#line 798
c_rt_lib0clear(&___nl__im__0);
#line 798
c_rt_lib0clear(&___nl__im__1);
#line 798
//clear ___nl__bool__3;
#line 798
c_rt_lib0clear(&___nl__im__6);
#line 798
return ___nl__im__11;
#line 799
goto label_40;
#line 799
label_40:
;
#line 799
//clear ___nl__bool__3;
#line 799
c_rt_lib0clear(&___nl__im__6);
#line 799
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
#line 803
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 803
if(___nl__bool__2){ goto label_19;}
#line 805
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 805
if(___nl__bool__2){ goto label_25;}
#line 807
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 807
if(___nl__bool__2){ goto label_45;}
#line 809
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 809
if(___nl__bool__2){ goto label_64;}
#line 811
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 811
if(___nl__bool__2){ goto label_72;}
#line 813
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 813
if(___nl__bool__2){ goto label_78;}
#line 815
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 815
if(___nl__bool__2){ goto label_84;}
#line 817
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 817
if(___nl__bool__2){ goto label_90;}
#line 817
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 817
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 817
nl_die_arg(___nl__im__3);
#line 803
label_19:
;
#line 804
c_rt_lib0clear(&___nl__im__0);
#line 804
//clear ___nl__bool__2;
#line 804
c_rt_lib0clear(&___nl__im__3);
#line 804
return ___nl__im__1;
#line 805
goto label_96;
#line 805
label_25:
;
#line 806
c_rt_lib0move(&___nl__im__8,___get_global_string_const(405));
#line 806
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 806
c_rt_lib0clear(&___nl__im__8);
#line 806
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 806
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 806
c_rt_lib0clear(&___nl__im__7);
#line 806
c_rt_lib0clear(&___nl__im__9);
#line 806
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 806
c_rt_lib0clear(&___nl__im__6);
#line 806
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 806
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 806
c_rt_lib0clear(&___nl__im__5);
#line 806
c_rt_lib0clear(&___nl__im__10);
#line 806
c_rt_lib0clear(&___nl__im__0);
#line 806
c_rt_lib0clear(&___nl__im__1);
#line 806
//clear ___nl__bool__2;
#line 806
c_rt_lib0clear(&___nl__im__3);
#line 806
return ___nl__im__4;
#line 807
goto label_96;
#line 807
label_45:
;
#line 808
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 808
c_rt_lib0move(&___nl__im__15,___get_global_string_const(809));
#line 808
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 808
c_rt_lib0clear(&___nl__im__14);
#line 808
c_rt_lib0clear(&___nl__im__15);
#line 808
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 808
c_rt_lib0clear(&___nl__im__13);
#line 808
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 808
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 808
c_rt_lib0clear(&___nl__im__12);
#line 808
c_rt_lib0clear(&___nl__im__16);
#line 808
c_rt_lib0clear(&___nl__im__0);
#line 808
c_rt_lib0clear(&___nl__im__1);
#line 808
//clear ___nl__bool__2;
#line 808
c_rt_lib0clear(&___nl__im__3);
#line 808
c_rt_lib0clear(&___nl__im__4);
#line 808
return ___nl__im__11;
#line 809
goto label_96;
#line 809
label_64:
;
#line 810
c_rt_lib0clear(&___nl__im__0);
#line 810
//clear ___nl__bool__2;
#line 810
c_rt_lib0clear(&___nl__im__3);
#line 810
c_rt_lib0clear(&___nl__im__4);
#line 810
c_rt_lib0clear(&___nl__im__11);
#line 810
return ___nl__im__1;
#line 811
goto label_96;
#line 811
label_72:
;
#line 811
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 811
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 812
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 812
nl_die_arg(___nl__im__19);
#line 813
goto label_96;
#line 813
label_78:
;
#line 813
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 813
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 814
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 814
nl_die_arg(___nl__im__22);
#line 815
goto label_96;
#line 815
label_84:
;
#line 815
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 815
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 816
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 816
nl_die_arg(___nl__im__25);
#line 817
goto label_96;
#line 817
label_90:
;
#line 817
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 817
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 818
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 818
nl_die_arg(___nl__im__28);
#line 819
goto label_96;
#line 819
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
#line 823
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 823
if(___nl__bool__2){ goto label_19;}
#line 825
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 825
if(___nl__bool__2){ goto label_25;}
#line 827
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 827
if(___nl__bool__2){ goto label_35;}
#line 829
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 829
if(___nl__bool__2){ goto label_54;}
#line 831
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 831
if(___nl__bool__2){ goto label_62;}
#line 833
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 833
if(___nl__bool__2){ goto label_68;}
#line 835
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 835
if(___nl__bool__2){ goto label_74;}
#line 837
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 837
if(___nl__bool__2){ goto label_80;}
#line 837
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 837
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 837
nl_die_arg(___nl__im__3);
#line 823
label_19:
;
#line 824
c_rt_lib0clear(&___nl__im__0);
#line 824
//clear ___nl__bool__2;
#line 824
c_rt_lib0clear(&___nl__im__3);
#line 824
return ___nl__im__1;
#line 825
goto label_86;
#line 825
label_25:
;
#line 826
c_rt_lib0move(&___nl__im__5,___get_global_string_const(810));
#line 826
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 826
c_rt_lib0clear(&___nl__im__5);
#line 826
c_rt_lib0clear(&___nl__im__0);
#line 826
c_rt_lib0clear(&___nl__im__1);
#line 826
//clear ___nl__bool__2;
#line 826
c_rt_lib0clear(&___nl__im__3);
#line 826
return ___nl__im__4;
#line 827
goto label_86;
#line 827
label_35:
;
#line 828
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 828
c_rt_lib0move(&___nl__im__10,___get_global_string_const(811));
#line 828
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 828
c_rt_lib0clear(&___nl__im__9);
#line 828
c_rt_lib0clear(&___nl__im__10);
#line 828
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 828
c_rt_lib0clear(&___nl__im__8);
#line 828
c_rt_lib0move(&___nl__im__11,___get_global_string_const(322));
#line 828
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 828
c_rt_lib0clear(&___nl__im__7);
#line 828
c_rt_lib0clear(&___nl__im__11);
#line 828
c_rt_lib0clear(&___nl__im__0);
#line 828
c_rt_lib0clear(&___nl__im__1);
#line 828
//clear ___nl__bool__2;
#line 828
c_rt_lib0clear(&___nl__im__3);
#line 828
c_rt_lib0clear(&___nl__im__4);
#line 828
return ___nl__im__6;
#line 829
goto label_86;
#line 829
label_54:
;
#line 830
c_rt_lib0clear(&___nl__im__0);
#line 830
//clear ___nl__bool__2;
#line 830
c_rt_lib0clear(&___nl__im__3);
#line 830
c_rt_lib0clear(&___nl__im__4);
#line 830
c_rt_lib0clear(&___nl__im__6);
#line 830
return ___nl__im__1;
#line 831
goto label_86;
#line 831
label_62:
;
#line 831
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 831
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 832
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 832
nl_die_arg(___nl__im__14);
#line 833
goto label_86;
#line 833
label_68:
;
#line 833
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 833
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 834
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 834
nl_die_arg(___nl__im__17);
#line 835
goto label_86;
#line 835
label_74:
;
#line 835
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 835
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 836
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 836
nl_die_arg(___nl__im__20);
#line 837
goto label_86;
#line 837
label_80:
;
#line 837
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 837
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 838
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 838
nl_die_arg(___nl__im__23);
#line 839
goto label_86;
#line 839
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
#line 843
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 843
___nl__int__3 = 0;
#line 843
___nl__int__4 = 1;
#line 843
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 843
label_4:
;
#line 843
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 843
if(___nl__bool__6){ goto label_34;}
#line 843
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 843
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 844
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(471)));
#line 844
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 844
c_rt_lib0clear(&___nl__im__10);
#line 844
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 844
c_rt_lib0clear(&___nl__im__9);
#line 844
___nl__bool__8 = !___nl__bool__8;
#line 844
if(___nl__bool__8){ goto label_28;}
#line 844
___nl__bool__11 = true;
#line 844
c_rt_lib0clear(&___nl__im__0);
#line 844
c_rt_lib0clear(&___nl__im__1);
#line 844
c_rt_lib0clear(&___nl__im__2);
#line 844
//clear ___nl__int__3;
#line 844
//clear ___nl__int__4;
#line 844
//clear ___nl__int__5;
#line 844
//clear ___nl__bool__6;
#line 844
c_rt_lib0clear(&___nl__im__7);
#line 844
//clear ___nl__bool__8;
#line 844
return ___nl__bool__11;
#line 844
goto label_28;
#line 844
label_28:
;
#line 844
//clear ___nl__bool__8;
#line 844
//clear ___nl__bool__11;
#line 844
c_rt_lib0clear(&___nl__im__2);
#line 845
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 845
goto label_4;
#line 845
label_34:
;
#line 846
___nl__bool__12 = false;
#line 846
c_rt_lib0clear(&___nl__im__0);
#line 846
c_rt_lib0clear(&___nl__im__1);
#line 846
c_rt_lib0clear(&___nl__im__2);
#line 846
//clear ___nl__int__3;
#line 846
//clear ___nl__int__4;
#line 846
//clear ___nl__int__5;
#line 846
//clear ___nl__bool__6;
#line 846
c_rt_lib0clear(&___nl__im__7);
#line 846
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
#line 850
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 850
___nl__bool__1 = !___nl__bool__1;
#line 850
if(___nl__bool__1){ goto label_8;}
#line 850
___nl__bool__2 = false;
#line 850
c_rt_lib0clear(&___nl__im__0);
#line 850
//clear ___nl__bool__1;
#line 850
return ___nl__bool__2;
#line 850
goto label_8;
#line 850
label_8:
;
#line 850
//clear ___nl__bool__1;
#line 850
//clear ___nl__bool__2;
#line 851
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 851
___nl__bool__3 = !___nl__bool__3;
#line 851
if(___nl__bool__3){ goto label_19;}
#line 851
___nl__bool__4 = false;
#line 851
c_rt_lib0clear(&___nl__im__0);
#line 851
//clear ___nl__bool__3;
#line 851
return ___nl__bool__4;
#line 851
goto label_19;
#line 851
label_19:
;
#line 851
//clear ___nl__bool__3;
#line 851
//clear ___nl__bool__4;
#line 852
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 852
___nl__bool__5 = !___nl__bool__5;
#line 852
if(___nl__bool__5){ goto label_30;}
#line 852
___nl__bool__6 = false;
#line 852
c_rt_lib0clear(&___nl__im__0);
#line 852
//clear ___nl__bool__5;
#line 852
return ___nl__bool__6;
#line 852
goto label_30;
#line 852
label_30:
;
#line 852
//clear ___nl__bool__5;
#line 852
//clear ___nl__bool__6;
#line 853
___nl__bool__7 = true;
#line 853
c_rt_lib0clear(&___nl__im__0);
#line 853
return ___nl__bool__7;
return false;

}

ImmT  generator_js_priv0print(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 857
c_rt_lib0move(&___nl__im__2,___get_global_string_const(66));
#line 857
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 857
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 857
c_rt_lib0move(&___nl__string__3,___get_global_string_const(66));
#line 857
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 857
c_rt_lib0clear(&___nl__im__2);
#line 857
c_rt_lib0clear(&___nl__string__3);
#line 857
c_rt_lib0clear(&___nl__im__0);
#line 857
return NULL;
return NULL;

}

ImmT  generator_js_priv0println(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 861
c_rt_lib0move(&___nl__im__3, string0lf());
#line 861
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 861
c_rt_lib0clear(&___nl__im__3);
#line 861
c_rt_lib0delete(generator_js_priv0print(___nl__im__2, ___ref___im__1));
#line 861
c_rt_lib0clear(&___nl__im__2);
#line 861
c_rt_lib0clear(&___nl__im__0);
#line 861
return NULL;
return NULL;

}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void generator_js_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
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
	___const__[1] = generator_js_priv0get_namespace_name0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
