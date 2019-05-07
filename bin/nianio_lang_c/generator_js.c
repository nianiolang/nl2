
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
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(127), ___nl__im__5, ___get_global_string_const(128), ___nl__im__7, ___get_global_string_const(168), ___nl__im__9));
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
#line 22
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(66), ___nl__im__2, ___get_global_string_const(726), ___nl__im__3, ___get_global_string_const(213), ___nl__im__10));
#line 22
c_rt_lib0clear(&___nl__im__2);
#line 22
c_rt_lib0clear(&___nl__im__3);
#line 22
c_rt_lib0clear(&___nl__im__10);
#line 22
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
return ___nl__im__0;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
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
#line 27
c_rt_lib0move(&___nl__im__0,___get_global_string_const(727));
#line 27
return ___nl__im__0;
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
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
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
#line 32
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 33
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 33
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 33
c_rt_lib0move(&___nl__im__7,___get_global_string_const(728));
#line 33
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(127), ___nl__im__5, ___get_global_string_const(128), ___nl__im__6, ___get_global_string_const(168), ___nl__im__7));
#line 33
c_rt_lib0clear(&___nl__im__5);
#line 33
c_rt_lib0clear(&___nl__im__6);
#line 33
c_rt_lib0clear(&___nl__im__7);
#line 34
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 34
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(66), ___nl__im__3, ___get_global_string_const(726), ___nl__im__4, ___get_global_string_const(213), ___nl__im__8));
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 34
c_rt_lib0clear(&___nl__im__8);
#line 37
c_rt_lib0delete(generator_js_priv0print_module_prolog(___nl__im__1, &___nl__im__2));
#line 38
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 38
___nl__int__11 = 0;
#line 38
___nl__int__12 = 1;
#line 38
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 38
label_18:
;
#line 38
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 38
if(___nl__bool__14){ goto label_27;}
#line 38
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 38
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 39
c_rt_lib0delete(generator_js_priv0print_function_or_singleton(___nl__im__10, &___nl__im__2));
#line 39
c_rt_lib0clear(&___nl__im__10);
#line 40
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 40
goto label_18;
#line 40
label_27:
;
#line 41
c_rt_lib0delete(generator_js_priv0print_consts(&___nl__im__2));
#line 42
c_rt_lib0delete(generator_js_priv0print_module_epilog(___nl__im__1, &___nl__im__2));
#line 44
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(66)));
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
c_rt_lib0clear(&___nl__im__9);
#line 44
c_rt_lib0clear(&___nl__im__10);
#line 44
//clear ___nl__int__11;
#line 44
//clear ___nl__int__12;
#line 44
//clear ___nl__int__13;
#line 44
//clear ___nl__bool__14;
#line 44
c_rt_lib0clear(&___nl__im__15);
#line 44
return ___nl__im__16;
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
#line 48
c_rt_lib0move(&___nl__im__4,___get_global_string_const(729));
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0move(&___nl__im__5,___get_global_string_const(442));
#line 48
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 49
c_rt_lib0move(&___nl__im__8,___get_global_string_const(730));
#line 49
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 49
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 49
c_rt_lib0clear(&___nl__im__8);
#line 49
c_rt_lib0clear(&___nl__im__9);
#line 49
c_rt_lib0move(&___nl__im__10,___get_global_string_const(731));
#line 49
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 49
c_rt_lib0clear(&___nl__im__7);
#line 49
c_rt_lib0clear(&___nl__im__10);
#line 49
c_rt_lib0delete(generator_js_priv0println(___nl__im__6, ___ref___im__1));
#line 49
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 50
c_rt_lib0move(&___nl__im__15,___get_global_string_const(110));
#line 50
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 50
c_rt_lib0clear(&___nl__im__14);
#line 50
c_rt_lib0clear(&___nl__im__15);
#line 50
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 50
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 50
c_rt_lib0clear(&___nl__im__13);
#line 50
c_rt_lib0clear(&___nl__im__16);
#line 50
c_rt_lib0move(&___nl__im__17,___get_global_string_const(732));
#line 50
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 50
c_rt_lib0clear(&___nl__im__12);
#line 50
c_rt_lib0clear(&___nl__im__17);
#line 50
c_rt_lib0delete(generator_js_priv0println(___nl__im__11, ___ref___im__1));
#line 50
c_rt_lib0clear(&___nl__im__11);
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
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
#line 54
c_rt_lib0move(&___nl__im__7,___get_global_string_const(733));
#line 54
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0move(&___nl__im__8,___get_global_string_const(504));
#line 54
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 54
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__9));
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0move(&___nl__im__10,___get_global_string_const(734));
#line 54
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__10));
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
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
#line 58
c_rt_lib0move(&___nl__im__3,___get_global_string_const(729));
#line 58
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(726)));
#line 58
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(168)));
#line 58
c_rt_lib0clear(&___nl__im__5);
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 58
c_rt_lib0clear(&___nl__im__3);
#line 58
c_rt_lib0clear(&___nl__im__4);
#line 58
c_rt_lib0move(&___nl__im__6,___get_global_string_const(735));
#line 58
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__6));
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
c_rt_lib0clear(&___nl__im__6);
#line 58
c_rt_lib0delete(generator_js_priv0println(___nl__im__1, ___ref___im__0));
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 59
___nl__int__7 = 0;
#line 60
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(726)));
#line 60
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(127)));
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
___nl__int__11 = 0;
#line 60
___nl__int__12 = 1;
#line 60
___nl__int__13 = c_rt_lib0array_len(___nl__im__8);
#line 60
label_20:
;
#line 60
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 60
if(___nl__bool__14){ goto label_56;}
#line 60
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__11));
#line 60
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 61
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(726)));
#line 61
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(168)));
#line 61
c_rt_lib0clear(&___nl__im__22);
#line 61
c_rt_lib0move(&___nl__im__23,___get_global_string_const(316));
#line 61
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 61
c_rt_lib0clear(&___nl__im__21);
#line 61
c_rt_lib0clear(&___nl__im__23);
#line 61
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__7));
#line 61
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__string__24));
#line 61
c_rt_lib0clear(&___nl__im__20);
#line 61
c_rt_lib0clear(&___nl__string__24);
#line 61
c_rt_lib0move(&___nl__im__25,___get_global_string_const(518));
#line 61
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__25));
#line 61
c_rt_lib0clear(&___nl__im__19);
#line 61
c_rt_lib0clear(&___nl__im__25);
#line 61
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_const_value(___nl__im__10));
#line 61
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__26));
#line 61
c_rt_lib0clear(&___nl__im__18);
#line 61
c_rt_lib0clear(&___nl__im__26);
#line 61
c_rt_lib0move(&___nl__im__27,___get_global_string_const(442));
#line 61
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__27));
#line 61
c_rt_lib0clear(&___nl__im__17);
#line 61
c_rt_lib0clear(&___nl__im__27);
#line 61
c_rt_lib0delete(generator_js_priv0print(___nl__im__16, ___ref___im__0));
#line 61
c_rt_lib0clear(&___nl__im__16);
#line 62
___nl__int__28 = 1;
#line 62
___nl__int__7 = ___nl__int__7 + ___nl__int__28;
#line 62
//clear ___nl__int__28;
#line 62
c_rt_lib0clear(&___nl__im__10);
#line 63
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 63
goto label_20;
#line 63
label_56:
;
#line 63
//clear ___nl__int__7;
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 63
c_rt_lib0clear(&___nl__im__10);
#line 63
//clear ___nl__int__11;
#line 63
//clear ___nl__int__12;
#line 63
//clear ___nl__int__13;
#line 63
//clear ___nl__bool__14;
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
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
#line 68
___nl__bool__3 = nl0is_string(___nl__im__0);
#line 68
___nl__bool__3 = !___nl__bool__3;
#line 68
if(___nl__bool__3){ goto label_61;}
#line 69
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 69
c_rt_lib0move(&___nl__im__4, ptd0ensure(___nl__im__5, ___nl__im__0));
#line 69
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 70
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(128)));
#line 70
c_rt_lib0clear(&___nl__im__8);
#line 70
___nl__bool__6 = hash0has_key(___nl__im__7, ___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 70
___nl__bool__6 = !___nl__bool__6;
#line 70
if(___nl__bool__6){ goto label_21;}
#line 71
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 71
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(128)));
#line 71
c_rt_lib0clear(&___nl__im__10);
#line 71
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__4));
#line 71
___nl__int__2 = getIntFromImm(___nl__im__11);
#line 71
c_rt_lib0clear(&___nl__im__9);
#line 71
c_rt_lib0clear(&___nl__im__11);
#line 72
goto label_58;
#line 72
label_21:
;
#line 73
c_rt_lib0move(&___nl__im__12,___get_global_string_const(726));
#line 73
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__12));
#line 73
c_rt_lib0move(&___nl__im__13,___get_global_string_const(127));
#line 73
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__13));
#line 73
c_rt_lib0array_push(&___nl__im__13, ___nl__im__0);
#line 73
c_rt_lib0move(&___nl__string__14,___get_global_string_const(127));
#line 73
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__14, ___nl__im__13));
#line 73
c_rt_lib0move(&___nl__string__14,___get_global_string_const(726));
#line 73
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__14, ___nl__im__12));
#line 73
c_rt_lib0clear(&___nl__im__12);
#line 73
c_rt_lib0clear(&___nl__im__13);
#line 73
c_rt_lib0clear(&___nl__string__14);
#line 74
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 74
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(127)));
#line 74
c_rt_lib0clear(&___nl__im__17);
#line 74
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 74
c_rt_lib0clear(&___nl__im__16);
#line 74
___nl__int__18 = 1;
#line 74
___nl__int__2 = ___nl__int__15 - ___nl__int__18;
#line 74
//clear ___nl__int__15;
#line 74
//clear ___nl__int__18;
#line 75
c_rt_lib0move(&___nl__im__19,___get_global_string_const(726));
#line 75
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__19));
#line 75
c_rt_lib0move(&___nl__im__20,___get_global_string_const(128));
#line 75
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 75
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__2));
#line 75
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__20, ___nl__im__4, ___nl__im__21));
#line 75
c_rt_lib0move(&___nl__string__22,___get_global_string_const(128));
#line 75
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__22, ___nl__im__20));
#line 75
c_rt_lib0move(&___nl__string__22,___get_global_string_const(726));
#line 75
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__22, ___nl__im__19));
#line 75
c_rt_lib0clear(&___nl__im__19);
#line 75
c_rt_lib0clear(&___nl__im__20);
#line 75
c_rt_lib0clear(&___nl__im__21);
#line 75
c_rt_lib0clear(&___nl__string__22);
#line 76
goto label_58;
#line 76
label_58:
;
#line 76
//clear ___nl__bool__6;
#line 77
goto label_84;
#line 77
label_61:
;
#line 78
c_rt_lib0move(&___nl__im__23,___get_global_string_const(726));
#line 78
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__23));
#line 78
c_rt_lib0move(&___nl__im__24,___get_global_string_const(127));
#line 78
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash(___nl__im__23, ___nl__im__24));
#line 78
c_rt_lib0array_push(&___nl__im__24, ___nl__im__0);
#line 78
c_rt_lib0move(&___nl__string__25,___get_global_string_const(127));
#line 78
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__23, ___nl__string__25, ___nl__im__24));
#line 78
c_rt_lib0move(&___nl__string__25,___get_global_string_const(726));
#line 78
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__25, ___nl__im__23));
#line 78
c_rt_lib0clear(&___nl__im__23);
#line 78
c_rt_lib0clear(&___nl__im__24);
#line 78
c_rt_lib0clear(&___nl__string__25);
#line 79
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 79
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(127)));
#line 79
c_rt_lib0clear(&___nl__im__28);
#line 79
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 79
c_rt_lib0clear(&___nl__im__27);
#line 79
___nl__int__29 = 1;
#line 79
___nl__int__2 = ___nl__int__26 - ___nl__int__29;
#line 79
//clear ___nl__int__26;
#line 79
//clear ___nl__int__29;
#line 80
goto label_84;
#line 80
label_84:
;
#line 80
//clear ___nl__bool__3;
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 81
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(726)));
#line 81
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(168)));
#line 81
c_rt_lib0clear(&___nl__im__34);
#line 81
c_rt_lib0move(&___nl__im__35,___get_global_string_const(316));
#line 81
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 81
c_rt_lib0clear(&___nl__im__33);
#line 81
c_rt_lib0clear(&___nl__im__35);
#line 81
c_rt_lib0move(&___nl__string__36, c_rt_lib0int_to_string(___nl__int__2));
#line 81
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__36));
#line 81
c_rt_lib0clear(&___nl__im__32);
#line 81
c_rt_lib0clear(&___nl__string__36);
#line 81
c_rt_lib0move(&___nl__im__37,___get_global_string_const(317));
#line 81
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__37));
#line 81
c_rt_lib0clear(&___nl__im__31);
#line 81
c_rt_lib0clear(&___nl__im__37);
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
//clear ___nl__int__2;
#line 81
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
#line 85
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 85
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(211));
#line 85
if(___nl__bool__3){ goto label_8;}
#line 87
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(467));
#line 87
if(___nl__bool__3){ goto label_23;}
#line 87
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 87
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 87
nl_die_arg(___nl__im__4);
#line 85
label_8:
;
#line 86
c_rt_lib0move(&___nl__im__7,___get_global_string_const(110));
#line 86
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 86
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 86
c_rt_lib0clear(&___nl__im__6);
#line 86
c_rt_lib0clear(&___nl__im__8);
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
//clear ___nl__bool__3;
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
return ___nl__im__5;
#line 87
goto label_37;
#line 87
label_23:
;
#line 88
c_rt_lib0move(&___nl__im__10,___get_global_string_const(736));
#line 88
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 88
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 88
c_rt_lib0clear(&___nl__im__10);
#line 88
c_rt_lib0clear(&___nl__im__11);
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__1);
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
//clear ___nl__bool__3;
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
c_rt_lib0clear(&___nl__im__5);
#line 88
return ___nl__im__9;
#line 89
goto label_37;
#line 89
label_37:
;
#line 89
c_rt_lib0clear(&___nl__im__0);
#line 89
c_rt_lib0clear(&___nl__im__1);
#line 89
c_rt_lib0clear(&___nl__im__2);
#line 89
//clear ___nl__bool__3;
#line 89
c_rt_lib0clear(&___nl__im__4);
#line 89
c_rt_lib0clear(&___nl__im__5);
#line 89
c_rt_lib0clear(&___nl__im__9);
#line 89
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
#line 93
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 93
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 93
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(211));
#line 93
if(___nl__bool__4){ goto label_9;}
#line 95
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(467));
#line 95
if(___nl__bool__4){ goto label_12;}
#line 95
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 95
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 95
nl_die_arg(___nl__im__5);
#line 93
label_9:
;
#line 94
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 95
goto label_15;
#line 95
label_12:
;
#line 96
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 97
goto label_15;
#line 97
label_15:
;
#line 98
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 98
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_call_name_raw(___nl__im__7, ___nl__im__2));
#line 98
c_rt_lib0clear(&___nl__im__7);
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
c_rt_lib0clear(&___nl__im__2);
#line 98
c_rt_lib0clear(&___nl__im__3);
#line 98
//clear ___nl__bool__4;
#line 98
c_rt_lib0clear(&___nl__im__5);
#line 98
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
#line 102
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 102
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 102
c_rt_lib0clear(&___nl__im__3);
#line 102
___nl__bool__2 = !___nl__bool__2;
#line 102
if(___nl__bool__2){ goto label_13;}
#line 103
c_rt_lib0move(&___nl__im__5,___get_global_string_const(736));
#line 103
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 103
c_rt_lib0clear(&___nl__im__5);
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
//clear ___nl__bool__2;
#line 103
return ___nl__im__4;
#line 104
goto label_33;
#line 104
label_13:
;
#line 105
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 105
c_rt_lib0move(&___nl__im__11,___get_global_string_const(110));
#line 105
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 105
c_rt_lib0clear(&___nl__im__10);
#line 105
c_rt_lib0clear(&___nl__im__11);
#line 105
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 105
c_rt_lib0clear(&___nl__im__9);
#line 105
c_rt_lib0move(&___nl__im__12,___get_global_string_const(110));
#line 105
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 105
c_rt_lib0clear(&___nl__im__8);
#line 105
c_rt_lib0clear(&___nl__im__12);
#line 105
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 105
c_rt_lib0clear(&___nl__im__7);
#line 105
c_rt_lib0clear(&___nl__im__0);
#line 105
c_rt_lib0clear(&___nl__im__1);
#line 105
//clear ___nl__bool__2;
#line 105
c_rt_lib0clear(&___nl__im__4);
#line 105
return ___nl__im__6;
#line 106
goto label_33;
#line 106
label_33:
;
#line 106
//clear ___nl__bool__2;
#line 106
c_rt_lib0clear(&___nl__im__4);
#line 106
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
#line 110
c_rt_lib0move(&___nl__im__1,___get_global_string_const(109));
#line 110
c_rt_lib0move(&___nl__im__2,___get_global_string_const(325));
#line 110
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 111
c_rt_lib0move(&___nl__im__3,___get_global_string_const(281));
#line 111
c_rt_lib0move(&___nl__im__4,___get_global_string_const(326));
#line 111
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 111
c_rt_lib0clear(&___nl__im__3);
#line 111
c_rt_lib0clear(&___nl__im__4);
#line 112
c_rt_lib0move(&___nl__im__5, string0lf());
#line 112
c_rt_lib0move(&___nl__im__6,___get_global_string_const(329));
#line 112
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 112
c_rt_lib0clear(&___nl__im__5);
#line 112
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0move(&___nl__im__7, string0r());
#line 113
c_rt_lib0move(&___nl__im__8,___get_global_string_const(330));
#line 113
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 114
___nl__int__10 = 0;
#line 114
c_rt_lib0move(&___nl__im__9, string0chr(___nl__int__10));
#line 114
//clear ___nl__int__10;
#line 114
c_rt_lib0move(&___nl__im__11,___get_global_string_const(619));
#line 114
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 114
c_rt_lib0clear(&___nl__im__9);
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 115
c_rt_lib0move(&___nl__im__12, string0tab());
#line 115
c_rt_lib0move(&___nl__im__13,___get_global_string_const(613));
#line 115
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 115
c_rt_lib0clear(&___nl__im__12);
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 117
c_rt_lib0move(&___nl__im__16,___get_global_string_const(281));
#line 117
c_rt_lib0move(&___nl__im__18, string0lf());
#line 117
c_rt_lib0move(&___nl__im__19,___get_global_string_const(329));
#line 117
c_rt_lib0move(&___nl__im__17, string0replace(___nl__im__0, ___nl__im__18, ___nl__im__19));
#line 117
c_rt_lib0clear(&___nl__im__18);
#line 117
c_rt_lib0clear(&___nl__im__19);
#line 117
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 117
c_rt_lib0clear(&___nl__im__16);
#line 117
c_rt_lib0clear(&___nl__im__17);
#line 117
c_rt_lib0move(&___nl__im__20,___get_global_string_const(281));
#line 117
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 117
c_rt_lib0clear(&___nl__im__15);
#line 117
c_rt_lib0clear(&___nl__im__20);
#line 117
c_rt_lib0clear(&___nl__im__0);
#line 117
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0get_str_imm(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 121
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_const_value_aggr(___nl__im__0, ___ref___im__1));
#line 121
c_rt_lib0clear(&___nl__im__0);
#line 121
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
#line 125
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 125
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
___nl__int__4 = 0;
#line 125
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 125
//clear ___nl__int__2;
#line 125
//clear ___nl__int__4;
#line 125
___nl__bool__1 = !___nl__bool__1;
#line 125
if(___nl__bool__1){ goto label_14;}
#line 125
___nl__bool__5 = false;
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
//clear ___nl__bool__1;
#line 125
return ___nl__bool__5;
#line 125
goto label_14;
#line 125
label_14:
;
#line 125
//clear ___nl__bool__1;
#line 125
//clear ___nl__bool__5;
#line 126
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(227)));
#line 126
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(194));
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
___nl__bool__6 = !___nl__bool__6;
#line 126
if(___nl__bool__6){ goto label_27;}
#line 126
___nl__bool__8 = true;
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
//clear ___nl__bool__6;
#line 126
return ___nl__bool__8;
#line 126
goto label_27;
#line 126
label_27:
;
#line 126
//clear ___nl__bool__6;
#line 126
//clear ___nl__bool__8;
#line 127
___nl__bool__9 = false;
#line 128
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 128
___nl__int__12 = 1;
#line 128
___nl__int__12 = -___nl__int__12;
#line 128
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 128
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 128
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__11, ___get_global_string_const(219), ___nl__im__13, ___get_global_string_const(353), ___nl__im__14));
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 128
//clear ___nl__int__12;
#line 128
c_rt_lib0clear(&___nl__im__13);
#line 128
c_rt_lib0clear(&___nl__im__14);
#line 129
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 129
___nl__int__17 = 0;
#line 129
___nl__int__18 = 1;
#line 129
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 129
label_45:
;
#line 129
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 129
if(___nl__bool__20){ goto label_209;}
#line 129
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 129
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 130
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(228)));
#line 131
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(234));
#line 131
___nl__bool__23 = !___nl__bool__23;
#line 131
if(___nl__bool__23){ goto label_90;}
#line 132
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(234)));
#line 133
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(270)));
#line 133
c_rt_lib0move(&___nl__im__27,___get_global_string_const(541));
#line 133
___nl__bool__25 = c_rt_lib0eq(___nl__im__26, ___nl__im__27);
#line 133
c_rt_lib0clear(&___nl__im__26);
#line 133
c_rt_lib0clear(&___nl__im__27);
#line 133
___nl__bool__25 = !___nl__bool__25;
#line 133
___nl__bool__25 = !___nl__bool__25;
#line 133
if(___nl__bool__25){ goto label_69;}
#line 133
c_rt_lib0clear(&___nl__im__22);
#line 133
//clear ___nl__bool__23;
#line 133
c_rt_lib0clear(&___nl__im__24);
#line 133
//clear ___nl__bool__25;
#line 133
goto label_206;
#line 133
goto label_69;
#line 133
label_69:
;
#line 133
//clear ___nl__bool__25;
#line 134
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(268)));
#line 134
c_rt_lib0move(&___nl__im__30,___get_global_string_const(407));
#line 134
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 134
c_rt_lib0clear(&___nl__im__29);
#line 134
c_rt_lib0clear(&___nl__im__30);
#line 134
___nl__bool__28 = !___nl__bool__28;
#line 134
___nl__bool__28 = !___nl__bool__28;
#line 134
if(___nl__bool__28){ goto label_85;}
#line 134
c_rt_lib0clear(&___nl__im__22);
#line 134
//clear ___nl__bool__23;
#line 134
c_rt_lib0clear(&___nl__im__24);
#line 134
//clear ___nl__bool__28;
#line 134
goto label_206;
#line 134
goto label_85;
#line 134
label_85:
;
#line 134
//clear ___nl__bool__28;
#line 135
___nl__bool__9 = true;
#line 136
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 137
goto label_200;
#line 137
label_90:
;
#line 137
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(248));
#line 137
___nl__bool__23 = !___nl__bool__23;
#line 137
if(___nl__bool__23){ goto label_163;}
#line 138
___nl__bool__31 = ___nl__bool__9;
#line 138
___nl__bool__31 = !___nl__bool__31;
#line 138
___nl__bool__31 = !___nl__bool__31;
#line 138
if(___nl__bool__31){ goto label_115;}
#line 138
___nl__bool__32 = false;
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
//clear ___nl__bool__9;
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__15);
#line 138
c_rt_lib0clear(&___nl__im__16);
#line 138
//clear ___nl__int__17;
#line 138
//clear ___nl__int__18;
#line 138
//clear ___nl__int__19;
#line 138
//clear ___nl__bool__20;
#line 138
c_rt_lib0clear(&___nl__im__21);
#line 138
c_rt_lib0clear(&___nl__im__22);
#line 138
//clear ___nl__bool__23;
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
//clear ___nl__bool__31;
#line 138
return ___nl__bool__32;
#line 138
goto label_115;
#line 138
label_115:
;
#line 138
//clear ___nl__bool__31;
#line 138
//clear ___nl__bool__32;
#line 139
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(248)));
#line 140
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(225));
#line 140
___nl__bool__34 = !___nl__bool__34;
#line 140
___nl__bool__34 = !___nl__bool__34;
#line 140
if(___nl__bool__34){ goto label_141;}
#line 140
___nl__bool__35 = false;
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
//clear ___nl__bool__9;
#line 140
c_rt_lib0clear(&___nl__im__10);
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
c_rt_lib0clear(&___nl__im__16);
#line 140
//clear ___nl__int__17;
#line 140
//clear ___nl__int__18;
#line 140
//clear ___nl__int__19;
#line 140
//clear ___nl__bool__20;
#line 140
c_rt_lib0clear(&___nl__im__21);
#line 140
c_rt_lib0clear(&___nl__im__22);
#line 140
//clear ___nl__bool__23;
#line 140
c_rt_lib0clear(&___nl__im__24);
#line 140
c_rt_lib0clear(&___nl__im__33);
#line 140
//clear ___nl__bool__34;
#line 140
return ___nl__bool__35;
#line 140
goto label_141;
#line 140
label_141:
;
#line 140
//clear ___nl__bool__34;
#line 140
//clear ___nl__bool__35;
#line 141
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(225)));
#line 141
___nl__bool__36 = nlasm0eq_reg(___nl__im__37, ___nl__im__10);
#line 141
c_rt_lib0clear(&___nl__im__37);
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
//clear ___nl__bool__9;
#line 141
c_rt_lib0clear(&___nl__im__10);
#line 141
c_rt_lib0clear(&___nl__im__15);
#line 141
c_rt_lib0clear(&___nl__im__16);
#line 141
//clear ___nl__int__17;
#line 141
//clear ___nl__int__18;
#line 141
//clear ___nl__int__19;
#line 141
//clear ___nl__bool__20;
#line 141
c_rt_lib0clear(&___nl__im__21);
#line 141
c_rt_lib0clear(&___nl__im__22);
#line 141
//clear ___nl__bool__23;
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0clear(&___nl__im__33);
#line 141
return ___nl__bool__36;
#line 142
goto label_200;
#line 142
label_163:
;
#line 142
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(250));
#line 142
___nl__bool__23 = !___nl__bool__23;
#line 142
if(___nl__bool__23){ goto label_168;}
#line 143
goto label_200;
#line 143
label_168:
;
#line 143
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(253));
#line 143
___nl__bool__23 = !___nl__bool__23;
#line 143
if(___nl__bool__23){ goto label_173;}
#line 144
goto label_200;
#line 144
label_173:
;
#line 145
___nl__bool__38 = ___nl__bool__9;
#line 145
___nl__bool__38 = !___nl__bool__38;
#line 145
if(___nl__bool__38){ goto label_196;}
#line 145
___nl__bool__39 = false;
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
//clear ___nl__bool__9;
#line 145
c_rt_lib0clear(&___nl__im__10);
#line 145
c_rt_lib0clear(&___nl__im__15);
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
//clear ___nl__int__17;
#line 145
//clear ___nl__int__18;
#line 145
//clear ___nl__int__19;
#line 145
//clear ___nl__bool__20;
#line 145
c_rt_lib0clear(&___nl__im__21);
#line 145
c_rt_lib0clear(&___nl__im__22);
#line 145
//clear ___nl__bool__23;
#line 145
c_rt_lib0clear(&___nl__im__24);
#line 145
c_rt_lib0clear(&___nl__im__33);
#line 145
//clear ___nl__bool__36;
#line 145
//clear ___nl__bool__38;
#line 145
return ___nl__bool__39;
#line 145
goto label_196;
#line 145
label_196:
;
#line 145
//clear ___nl__bool__38;
#line 145
//clear ___nl__bool__39;
#line 146
goto label_200;
#line 146
label_200:
;
#line 146
//clear ___nl__bool__23;
#line 146
c_rt_lib0clear(&___nl__im__24);
#line 146
c_rt_lib0clear(&___nl__im__33);
#line 146
//clear ___nl__bool__36;
#line 146
c_rt_lib0clear(&___nl__im__16);
#line 146
label_206:
;
#line 147
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 147
goto label_45;
#line 147
label_209:
;
#line 148
___nl__bool__40 = false;
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
//clear ___nl__bool__9;
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
c_rt_lib0clear(&___nl__im__15);
#line 148
c_rt_lib0clear(&___nl__im__16);
#line 148
//clear ___nl__int__17;
#line 148
//clear ___nl__int__18;
#line 148
//clear ___nl__int__19;
#line 148
//clear ___nl__bool__20;
#line 148
c_rt_lib0clear(&___nl__im__21);
#line 148
c_rt_lib0clear(&___nl__im__22);
#line 148
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
#line 152
___nl__bool__2 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 152
___nl__bool__2 = !___nl__bool__2;
#line 152
if(___nl__bool__2){ goto label_5;}
#line 153
c_rt_lib0delete(generator_js_priv0print_singleton(___nl__im__0, ___ref___im__1));
#line 154
goto label_8;
#line 154
label_5:
;
#line 155
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__0, ___ref___im__1));
#line 156
goto label_8;
#line 156
label_8:
;
#line 156
//clear ___nl__bool__2;
#line 158
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 158
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(211));
#line 158
c_rt_lib0clear(&___nl__im__5);
#line 158
___nl__bool__4 = !___nl__bool__3;
#line 158
if(___nl__bool__4){ goto label_17;}
#line 158
___nl__bool__3 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 158
___nl__bool__3 = !___nl__bool__3;
#line 158
label_17:
;
#line 158
//clear ___nl__bool__4;
#line 158
___nl__bool__3 = !___nl__bool__3;
#line 158
if(___nl__bool__3){ goto label_23;}
#line 159
c_rt_lib0delete(generator_js_priv0print_dyn_function_wrapper(___nl__im__0, ___ref___im__1));
#line 160
goto label_23;
#line 160
label_23:
;
#line 160
//clear ___nl__bool__3;
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
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
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 164
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__3));
#line 164
c_rt_lib0clear(&___nl__im__3);
#line 165
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 166
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(210)));
#line 166
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(467));
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
___nl__bool__5 = !___nl__bool__5;
#line 166
if(___nl__bool__5){ goto label_19;}
#line 167
c_rt_lib0move(&___nl__im__8,___get_global_string_const(737));
#line 167
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 167
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 167
c_rt_lib0clear(&___nl__im__8);
#line 167
c_rt_lib0clear(&___nl__im__9);
#line 167
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 167
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(168), ___nl__im__10);
#line 167
c_rt_lib0clear(&___nl__im__7);
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 168
goto label_30;
#line 168
label_19:
;
#line 169
c_rt_lib0move(&___nl__im__12,___get_global_string_const(738));
#line 169
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 169
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 169
c_rt_lib0clear(&___nl__im__12);
#line 169
c_rt_lib0clear(&___nl__im__13);
#line 169
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 169
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(168), ___nl__im__14);
#line 169
c_rt_lib0clear(&___nl__im__11);
#line 169
c_rt_lib0clear(&___nl__im__14);
#line 170
goto label_30;
#line 170
label_30:
;
#line 170
//clear ___nl__bool__5;
#line 171
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(467)));
#line 171
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 171
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(210), ___nl__im__16);
#line 171
c_rt_lib0clear(&___nl__im__15);
#line 171
c_rt_lib0clear(&___nl__im__16);
#line 172
c_rt_lib0move(&___nl__im__18,___get_global_string_const(739));
#line 172
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 172
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_function_name(___nl__im__4, ___nl__im__20));
#line 172
c_rt_lib0clear(&___nl__im__20);
#line 172
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 172
c_rt_lib0clear(&___nl__im__18);
#line 172
c_rt_lib0clear(&___nl__im__19);
#line 174
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__4, ___ref___im__1));
#line 175
c_rt_lib0move(&___nl__im__23,___get_global_string_const(729));
#line 175
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__17));
#line 175
c_rt_lib0clear(&___nl__im__23);
#line 175
c_rt_lib0move(&___nl__im__24,___get_global_string_const(442));
#line 175
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 175
c_rt_lib0clear(&___nl__im__22);
#line 175
c_rt_lib0clear(&___nl__im__24);
#line 175
c_rt_lib0delete(generator_js_priv0println(___nl__im__21, ___ref___im__1));
#line 175
c_rt_lib0clear(&___nl__im__21);
#line 176
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 176
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(211));
#line 176
if(___nl__bool__26){ goto label_62;}
#line 178
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(467));
#line 178
if(___nl__bool__26){ goto label_77;}
#line 178
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 178
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 178
nl_die_arg(___nl__im__27);
#line 176
label_62:
;
#line 177
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_namespace_name());
#line 177
c_rt_lib0move(&___nl__im__32,___get_global_string_const(110));
#line 177
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 177
c_rt_lib0clear(&___nl__im__31);
#line 177
c_rt_lib0clear(&___nl__im__32);
#line 177
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__2));
#line 177
c_rt_lib0clear(&___nl__im__30);
#line 177
c_rt_lib0move(&___nl__im__33,___get_global_string_const(740));
#line 177
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 177
c_rt_lib0clear(&___nl__im__29);
#line 177
c_rt_lib0clear(&___nl__im__33);
#line 177
c_rt_lib0delete(generator_js_priv0println(___nl__im__28, ___ref___im__1));
#line 177
c_rt_lib0clear(&___nl__im__28);
#line 178
goto label_88;
#line 178
label_77:
;
#line 179
c_rt_lib0move(&___nl__im__36,___get_global_string_const(741));
#line 179
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__2));
#line 179
c_rt_lib0clear(&___nl__im__36);
#line 179
c_rt_lib0move(&___nl__im__37,___get_global_string_const(742));
#line 179
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__37));
#line 179
c_rt_lib0clear(&___nl__im__35);
#line 179
c_rt_lib0clear(&___nl__im__37);
#line 179
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 179
c_rt_lib0clear(&___nl__im__34);
#line 180
goto label_88;
#line 180
label_88:
;
#line 181
c_rt_lib0move(&___nl__im__40,___get_global_string_const(607));
#line 181
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__17));
#line 181
c_rt_lib0clear(&___nl__im__40);
#line 181
c_rt_lib0move(&___nl__im__41,___get_global_string_const(743));
#line 181
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 181
c_rt_lib0clear(&___nl__im__39);
#line 181
c_rt_lib0clear(&___nl__im__41);
#line 181
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 181
c_rt_lib0clear(&___nl__im__38);
#line 182
c_rt_lib0move(&___nl__im__45,___get_global_string_const(504));
#line 182
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__17, ___nl__im__45));
#line 182
c_rt_lib0clear(&___nl__im__45);
#line 182
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 182
c_rt_lib0move(&___nl__im__46, generator_js_priv0get_function_call_name(___nl__im__4, ___nl__im__47));
#line 182
c_rt_lib0clear(&___nl__im__47);
#line 182
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 182
c_rt_lib0clear(&___nl__im__44);
#line 182
c_rt_lib0clear(&___nl__im__46);
#line 182
c_rt_lib0move(&___nl__im__48,___get_global_string_const(486));
#line 182
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__48));
#line 182
c_rt_lib0clear(&___nl__im__43);
#line 182
c_rt_lib0clear(&___nl__im__48);
#line 182
c_rt_lib0delete(generator_js_priv0println(___nl__im__42, ___ref___im__1));
#line 182
c_rt_lib0clear(&___nl__im__42);
#line 183
c_rt_lib0move(&___nl__im__49,___get_global_string_const(307));
#line 183
c_rt_lib0delete(generator_js_priv0println(___nl__im__49, ___ref___im__1));
#line 183
c_rt_lib0clear(&___nl__im__49);
#line 184
c_rt_lib0move(&___nl__im__52,___get_global_string_const(510));
#line 184
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__17));
#line 184
c_rt_lib0clear(&___nl__im__52);
#line 184
c_rt_lib0move(&___nl__im__53,___get_global_string_const(442));
#line 184
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 184
c_rt_lib0clear(&___nl__im__51);
#line 184
c_rt_lib0clear(&___nl__im__53);
#line 184
c_rt_lib0delete(generator_js_priv0println(___nl__im__50, ___ref___im__1));
#line 184
c_rt_lib0clear(&___nl__im__50);
#line 185
c_rt_lib0move(&___nl__im__54,___get_global_string_const(307));
#line 185
c_rt_lib0delete(generator_js_priv0println(___nl__im__54, ___ref___im__1));
#line 185
c_rt_lib0clear(&___nl__im__54);
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
c_rt_lib0clear(&___nl__im__4);
#line 185
c_rt_lib0clear(&___nl__im__17);
#line 185
c_rt_lib0clear(&___nl__im__25);
#line 185
//clear ___nl__bool__26;
#line 185
c_rt_lib0clear(&___nl__im__27);
#line 185
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
#line 189
___nl__int__2 = 0;
#line 190
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 191
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 192
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 193
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 193
___nl__int__8 = 0;
#line 193
___nl__int__9 = 1;
#line 193
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 193
label_8:
;
#line 193
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 193
if(___nl__bool__11){ goto label_132;}
#line 193
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 193
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 194
___nl__int__14 = 0;
#line 194
___nl__bool__13 = ___nl__int__2 == ___nl__int__14;
#line 194
//clear ___nl__int__14;
#line 194
___nl__bool__13 = !___nl__bool__13;
#line 194
___nl__bool__13 = !___nl__bool__13;
#line 194
if(___nl__bool__13){ goto label_23;}
#line 194
c_rt_lib0move(&___nl__im__15,___get_global_string_const(328));
#line 194
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__15));
#line 194
c_rt_lib0clear(&___nl__im__15);
#line 194
goto label_23;
#line 194
label_23:
;
#line 194
//clear ___nl__bool__13;
#line 195
c_rt_lib0move(&___nl__im__17,___get_global_string_const(279));
#line 195
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__2));
#line 195
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 195
c_rt_lib0clear(&___nl__im__17);
#line 195
c_rt_lib0clear(&___nl__string__18);
#line 195
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__16));
#line 195
c_rt_lib0clear(&___nl__im__16);
#line 196
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(471)));
#line 196
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 196
c_rt_lib0clear(&___nl__im__21);
#line 196
c_rt_lib0move(&___nl__im__24,___get_global_string_const(744));
#line 196
c_rt_lib0move(&___nl__string__25, c_rt_lib0int_to_string(___nl__int__2));
#line 196
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__string__25));
#line 196
c_rt_lib0clear(&___nl__im__24);
#line 196
c_rt_lib0clear(&___nl__string__25);
#line 196
c_rt_lib0move(&___nl__im__26,___get_global_string_const(322));
#line 196
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 196
c_rt_lib0clear(&___nl__im__23);
#line 196
c_rt_lib0clear(&___nl__im__26);
#line 196
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_value_from_im(___nl__im__20, ___nl__im__22));
#line 196
c_rt_lib0clear(&___nl__im__20);
#line 196
c_rt_lib0clear(&___nl__im__22);
#line 197
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(355)));
#line 197
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(39));
#line 197
if(___nl__bool__28){ goto label_55;}
#line 201
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(225));
#line 201
if(___nl__bool__28){ goto label_106;}
#line 201
c_rt_lib0move(&___nl__im__29,___get_global_string_const(15));
#line 201
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 201
nl_die_arg(___nl__im__29);
#line 197
label_55:
;
#line 198
c_rt_lib0move(&___nl__im__33,___get_global_string_const(745));
#line 198
c_rt_lib0move(&___nl__im__35,___get_global_string_const(39));
#line 198
c_rt_lib0move(&___nl__im__34, generator_js_priv0imm_call(___nl__im__35));
#line 198
c_rt_lib0clear(&___nl__im__35);
#line 198
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 198
c_rt_lib0clear(&___nl__im__33);
#line 198
c_rt_lib0clear(&___nl__im__34);
#line 198
c_rt_lib0move(&___nl__im__36,___get_global_string_const(457));
#line 198
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 198
c_rt_lib0clear(&___nl__im__32);
#line 198
c_rt_lib0clear(&___nl__im__36);
#line 198
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__19));
#line 198
c_rt_lib0clear(&___nl__im__31);
#line 198
c_rt_lib0move(&___nl__im__37,___get_global_string_const(508));
#line 198
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 198
c_rt_lib0clear(&___nl__im__30);
#line 198
c_rt_lib0clear(&___nl__im__37);
#line 199
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(471)));
#line 199
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(206)));
#line 199
c_rt_lib0clear(&___nl__im__40);
#line 199
c_rt_lib0move(&___nl__im__43,___get_global_string_const(279));
#line 199
c_rt_lib0move(&___nl__string__44, c_rt_lib0int_to_string(___nl__int__2));
#line 199
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__string__44));
#line 199
c_rt_lib0clear(&___nl__im__43);
#line 199
c_rt_lib0clear(&___nl__string__44);
#line 199
c_rt_lib0move(&___nl__im__45,___get_global_string_const(746));
#line 199
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 199
c_rt_lib0clear(&___nl__im__42);
#line 199
c_rt_lib0clear(&___nl__im__45);
#line 199
c_rt_lib0move(&___nl__im__38, generator_js_priv0get_im_from_value(___nl__im__39, ___nl__im__41));
#line 199
c_rt_lib0clear(&___nl__im__39);
#line 199
c_rt_lib0clear(&___nl__im__41);
#line 200
c_rt_lib0move(&___nl__im__50,___get_global_string_const(747));
#line 200
c_rt_lib0move(&___nl__string__51, c_rt_lib0int_to_string(___nl__int__2));
#line 200
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__string__51));
#line 200
c_rt_lib0clear(&___nl__im__50);
#line 200
c_rt_lib0clear(&___nl__string__51);
#line 200
c_rt_lib0move(&___nl__im__52,___get_global_string_const(328));
#line 200
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 200
c_rt_lib0clear(&___nl__im__49);
#line 200
c_rt_lib0clear(&___nl__im__52);
#line 200
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__38));
#line 200
c_rt_lib0clear(&___nl__im__48);
#line 200
c_rt_lib0move(&___nl__im__53,___get_global_string_const(508));
#line 200
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__53));
#line 200
c_rt_lib0clear(&___nl__im__47);
#line 200
c_rt_lib0clear(&___nl__im__53);
#line 200
c_rt_lib0array_push(&___nl__im__5, ___nl__im__46);
#line 200
c_rt_lib0clear(&___nl__im__46);
#line 201
goto label_108;
#line 201
label_106:
;
#line 202
goto label_108;
#line 202
label_108:
;
#line 203
c_rt_lib0move(&___nl__im__58,___get_global_string_const(748));
#line 203
c_rt_lib0move(&___nl__string__59, c_rt_lib0int_to_string(___nl__int__2));
#line 203
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__string__59));
#line 203
c_rt_lib0clear(&___nl__im__58);
#line 203
c_rt_lib0clear(&___nl__string__59);
#line 203
c_rt_lib0move(&___nl__im__60,___get_global_string_const(504));
#line 203
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 203
c_rt_lib0clear(&___nl__im__57);
#line 203
c_rt_lib0clear(&___nl__im__60);
#line 203
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__19));
#line 203
c_rt_lib0clear(&___nl__im__56);
#line 203
c_rt_lib0move(&___nl__im__61,___get_global_string_const(442));
#line 203
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__61));
#line 203
c_rt_lib0clear(&___nl__im__55);
#line 203
c_rt_lib0clear(&___nl__im__61);
#line 203
c_rt_lib0array_push(&___nl__im__4, ___nl__im__54);
#line 203
c_rt_lib0clear(&___nl__im__54);
#line 204
___nl__int__62 = 1;
#line 204
___nl__int__2 = ___nl__int__2 + ___nl__int__62;
#line 204
//clear ___nl__int__62;
#line 204
c_rt_lib0clear(&___nl__im__7);
#line 205
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 205
goto label_8;
#line 205
label_132:
;
#line 206
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 206
c_rt_lib0move(&___nl__im__66,___get_global_string_const(749));
#line 206
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 206
c_rt_lib0clear(&___nl__im__65);
#line 206
c_rt_lib0clear(&___nl__im__66);
#line 206
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 206
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__67));
#line 206
c_rt_lib0clear(&___nl__im__64);
#line 206
c_rt_lib0clear(&___nl__im__67);
#line 207
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 207
c_rt_lib0move(&___nl__im__71, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__72));
#line 207
c_rt_lib0clear(&___nl__im__72);
#line 207
c_rt_lib0move(&___nl__im__73,___get_global_string_const(457));
#line 207
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 207
c_rt_lib0clear(&___nl__im__71);
#line 207
c_rt_lib0clear(&___nl__im__73);
#line 207
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__3));
#line 207
c_rt_lib0clear(&___nl__im__70);
#line 207
c_rt_lib0move(&___nl__im__74,___get_global_string_const(322));
#line 207
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 207
c_rt_lib0clear(&___nl__im__69);
#line 207
c_rt_lib0clear(&___nl__im__74);
#line 209
c_rt_lib0move(&___nl__im__75,___get_global_string_const(36));
#line 209
c_rt_lib0delete(generator_js_priv0println(___nl__im__75, ___ref___im__1));
#line 209
c_rt_lib0clear(&___nl__im__75);
#line 210
c_rt_lib0move(&___nl__im__79, generator_js_priv0get_namespace_name());
#line 210
c_rt_lib0move(&___nl__im__80,___get_global_string_const(110));
#line 210
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__80));
#line 210
c_rt_lib0clear(&___nl__im__79);
#line 210
c_rt_lib0clear(&___nl__im__80);
#line 210
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__63));
#line 210
c_rt_lib0clear(&___nl__im__78);
#line 210
c_rt_lib0move(&___nl__im__81,___get_global_string_const(750));
#line 210
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__81));
#line 210
c_rt_lib0clear(&___nl__im__77);
#line 210
c_rt_lib0clear(&___nl__im__81);
#line 210
c_rt_lib0delete(generator_js_priv0println(___nl__im__76, ___ref___im__1));
#line 210
c_rt_lib0clear(&___nl__im__76);
#line 211
___nl__int__83 = 0;
#line 211
___nl__int__84 = 1;
#line 211
___nl__int__85 = c_rt_lib0array_len(___nl__im__4);
#line 211
label_174:
;
#line 211
___nl__bool__86 = ___nl__int__83 >= ___nl__int__85;
#line 211
if(___nl__bool__86){ goto label_183;}
#line 211
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__4, ___nl__int__83));
#line 211
c_rt_lib0copy(&___nl__im__82, ___nl__im__87);
#line 212
c_rt_lib0delete(generator_js_priv0println(___nl__im__82, ___ref___im__1));
#line 212
c_rt_lib0clear(&___nl__im__82);
#line 213
___nl__int__83 = ___nl__int__83 + ___nl__int__84;
#line 213
goto label_174;
#line 213
label_183:
;
#line 214
c_rt_lib0move(&___nl__im__89,___get_global_string_const(751));
#line 214
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(417)));
#line 214
c_rt_lib0move(&___nl__im__90, generator_js_priv0get_im_from_value(___nl__im__91, ___nl__im__68));
#line 214
c_rt_lib0clear(&___nl__im__91);
#line 214
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 214
c_rt_lib0clear(&___nl__im__89);
#line 214
c_rt_lib0clear(&___nl__im__90);
#line 214
c_rt_lib0delete(generator_js_priv0println(___nl__im__88, ___ref___im__1));
#line 214
c_rt_lib0clear(&___nl__im__88);
#line 215
___nl__int__93 = 0;
#line 215
___nl__int__94 = 1;
#line 215
___nl__int__95 = c_rt_lib0array_len(___nl__im__5);
#line 215
label_196:
;
#line 215
___nl__bool__96 = ___nl__int__93 >= ___nl__int__95;
#line 215
if(___nl__bool__96){ goto label_205;}
#line 215
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__5, ___nl__int__93));
#line 215
c_rt_lib0copy(&___nl__im__92, ___nl__im__97);
#line 216
c_rt_lib0delete(generator_js_priv0println(___nl__im__92, ___ref___im__1));
#line 216
c_rt_lib0clear(&___nl__im__92);
#line 217
___nl__int__93 = ___nl__int__93 + ___nl__int__94;
#line 217
goto label_196;
#line 217
label_205:
;
#line 218
c_rt_lib0move(&___nl__im__98,___get_global_string_const(752));
#line 218
c_rt_lib0delete(generator_js_priv0println(___nl__im__98, ___ref___im__1));
#line 218
c_rt_lib0clear(&___nl__im__98);
#line 219
c_rt_lib0move(&___nl__im__99,___get_global_string_const(307));
#line 219
c_rt_lib0delete(generator_js_priv0println(___nl__im__99, ___ref___im__1));
#line 219
c_rt_lib0clear(&___nl__im__99);
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
//clear ___nl__int__2;
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 219
c_rt_lib0clear(&___nl__im__4);
#line 219
c_rt_lib0clear(&___nl__im__5);
#line 219
c_rt_lib0clear(&___nl__im__6);
#line 219
c_rt_lib0clear(&___nl__im__7);
#line 219
//clear ___nl__int__8;
#line 219
//clear ___nl__int__9;
#line 219
//clear ___nl__int__10;
#line 219
//clear ___nl__bool__11;
#line 219
c_rt_lib0clear(&___nl__im__12);
#line 219
c_rt_lib0clear(&___nl__im__19);
#line 219
c_rt_lib0clear(&___nl__im__27);
#line 219
//clear ___nl__bool__28;
#line 219
c_rt_lib0clear(&___nl__im__29);
#line 219
c_rt_lib0clear(&___nl__im__38);
#line 219
c_rt_lib0clear(&___nl__im__63);
#line 219
c_rt_lib0clear(&___nl__im__68);
#line 219
c_rt_lib0clear(&___nl__im__82);
#line 219
//clear ___nl__int__83;
#line 219
//clear ___nl__int__84;
#line 219
//clear ___nl__int__85;
#line 219
//clear ___nl__bool__86;
#line 219
c_rt_lib0clear(&___nl__im__87);
#line 219
c_rt_lib0clear(&___nl__im__92);
#line 219
//clear ___nl__int__93;
#line 219
//clear ___nl__int__94;
#line 219
//clear ___nl__int__95;
#line 219
//clear ___nl__bool__96;
#line 219
c_rt_lib0clear(&___nl__im__97);
#line 219
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
#line 223
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 223
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 224
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(213)));
#line 224
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_function_header(___nl__im__0, ___nl__im__5));
#line 224
c_rt_lib0clear(&___nl__im__5);
#line 224
c_rt_lib0move(&___nl__im__6,___get_global_string_const(536));
#line 224
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 224
c_rt_lib0clear(&___nl__im__4);
#line 224
c_rt_lib0clear(&___nl__im__6);
#line 224
c_rt_lib0delete(generator_js_priv0println(___nl__im__3, ___ref___im__1));
#line 224
c_rt_lib0clear(&___nl__im__3);
#line 225
c_rt_lib0delete(generator_js_priv0print_function_registers(___nl__im__0, ___ref___im__1));
#line 226
c_rt_lib0move(&___nl__im__7,___get_global_string_const(753));
#line 226
c_rt_lib0delete(generator_js_priv0println(___nl__im__7, ___ref___im__1));
#line 226
c_rt_lib0clear(&___nl__im__7);
#line 227
c_rt_lib0move(&___nl__im__8,___get_global_string_const(754));
#line 227
c_rt_lib0delete(generator_js_priv0println(___nl__im__8, ___ref___im__1));
#line 227
c_rt_lib0clear(&___nl__im__8);
#line 228
c_rt_lib0move(&___nl__im__9,___get_global_string_const(755));
#line 228
c_rt_lib0delete(generator_js_priv0println(___nl__im__9, ___ref___im__1));
#line 228
c_rt_lib0clear(&___nl__im__9);
#line 229
___nl__int__10 = 0;
#line 230
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 230
___nl__int__13 = 0;
#line 230
___nl__int__14 = 1;
#line 230
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 230
label_27:
;
#line 230
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 230
if(___nl__bool__16){ goto label_38;}
#line 230
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 230
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 231
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 231
c_rt_lib0delete(generator_js_priv0print_command(___nl__im__12, ___nl__im__18, &___nl__int__10, ___ref___im__1));
#line 231
c_rt_lib0clear(&___nl__im__18);
#line 231
c_rt_lib0clear(&___nl__im__12);
#line 232
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 232
goto label_27;
#line 232
label_38:
;
#line 233
c_rt_lib0move(&___nl__im__19,___get_global_string_const(756));
#line 233
c_rt_lib0delete(generator_js_priv0println(___nl__im__19, ___ref___im__1));
#line 233
c_rt_lib0clear(&___nl__im__19);
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
//clear ___nl__int__10;
#line 233
c_rt_lib0clear(&___nl__im__11);
#line 233
c_rt_lib0clear(&___nl__im__12);
#line 233
//clear ___nl__int__13;
#line 233
//clear ___nl__int__14;
#line 233
//clear ___nl__int__15;
#line 233
//clear ___nl__bool__16;
#line 233
c_rt_lib0clear(&___nl__im__17);
#line 233
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
#line 238
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 238
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(211));
#line 238
if(___nl__bool__4){ goto label_8;}
#line 240
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(467));
#line 240
if(___nl__bool__4){ goto label_23;}
#line 240
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 240
nl_die_arg(___nl__im__5);
#line 238
label_8:
;
#line 239
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_namespace_name());
#line 239
c_rt_lib0move(&___nl__im__9,___get_global_string_const(110));
#line 239
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
c_rt_lib0clear(&___nl__im__9);
#line 239
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 239
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 239
c_rt_lib0clear(&___nl__im__7);
#line 239
c_rt_lib0clear(&___nl__im__10);
#line 239
c_rt_lib0move(&___nl__im__11,___get_global_string_const(757));
#line 239
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 239
c_rt_lib0clear(&___nl__im__6);
#line 239
c_rt_lib0clear(&___nl__im__11);
#line 240
goto label_34;
#line 240
label_23:
;
#line 241
c_rt_lib0move(&___nl__im__13,___get_global_string_const(741));
#line 241
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 241
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 241
c_rt_lib0clear(&___nl__im__13);
#line 241
c_rt_lib0clear(&___nl__im__14);
#line 241
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 241
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 241
c_rt_lib0clear(&___nl__im__12);
#line 241
c_rt_lib0clear(&___nl__im__15);
#line 242
goto label_34;
#line 242
label_34:
;
#line 243
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 243
___nl__int__16 = c_rt_lib0array_len(___nl__im__17);
#line 243
c_rt_lib0clear(&___nl__im__17);
#line 243
___nl__int__18 = 0;
#line 243
___nl__int__19 = 1;
#line 243
label_40:
;
#line 243
___nl__bool__20 = ___nl__int__18 >= ___nl__int__16;
#line 243
if(___nl__bool__20){ goto label_64;}
#line 244
___nl__int__22 = 0;
#line 244
___nl__bool__21 = ___nl__int__18 == ___nl__int__22;
#line 244
//clear ___nl__int__22;
#line 244
___nl__bool__21 = !___nl__bool__21;
#line 244
___nl__bool__21 = !___nl__bool__21;
#line 244
if(___nl__bool__21){ goto label_53;}
#line 244
c_rt_lib0move(&___nl__im__23,___get_global_string_const(328));
#line 244
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 244
c_rt_lib0clear(&___nl__im__23);
#line 244
goto label_53;
#line 244
label_53:
;
#line 244
//clear ___nl__bool__21;
#line 245
c_rt_lib0move(&___nl__im__25,___get_global_string_const(758));
#line 245
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__18));
#line 245
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__26));
#line 245
c_rt_lib0clear(&___nl__im__25);
#line 245
c_rt_lib0clear(&___nl__string__26);
#line 245
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__24));
#line 245
c_rt_lib0clear(&___nl__im__24);
#line 246
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 246
goto label_40;
#line 246
label_64:
;
#line 247
c_rt_lib0move(&___nl__im__27,___get_global_string_const(322));
#line 247
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 247
c_rt_lib0clear(&___nl__im__27);
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
//clear ___nl__bool__4;
#line 248
c_rt_lib0clear(&___nl__im__5);
#line 248
//clear ___nl__int__16;
#line 248
//clear ___nl__int__18;
#line 248
//clear ___nl__int__19;
#line 248
//clear ___nl__bool__20;
#line 248
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
#line 252
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 252
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 252
___nl__int__4 = 0;
#line 252
___nl__int__5 = 1;
#line 252
label_5:
;
#line 252
___nl__bool__6 = ___nl__int__4 >= ___nl__int__2;
#line 252
if(___nl__bool__6){ goto label_95;}
#line 253
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 253
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__9, ___nl__int__4));
#line 253
c_rt_lib0clear(&___nl__im__9);
#line 253
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(355)));
#line 253
c_rt_lib0clear(&___nl__im__8);
#line 253
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(225));
#line 253
if(___nl__bool__10){ goto label_20;}
#line 255
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(39));
#line 255
if(___nl__bool__10){ goto label_45;}
#line 255
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 255
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__7));
#line 255
nl_die_arg(___nl__im__11);
#line 253
label_20:
;
#line 254
c_rt_lib0move(&___nl__im__16,___get_global_string_const(729));
#line 254
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 254
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__4));
#line 254
c_rt_lib0clear(&___nl__im__19);
#line 254
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register(___nl__im__18));
#line 254
c_rt_lib0clear(&___nl__im__18);
#line 254
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 254
c_rt_lib0clear(&___nl__im__16);
#line 254
c_rt_lib0clear(&___nl__im__17);
#line 254
c_rt_lib0move(&___nl__im__20,___get_global_string_const(759));
#line 254
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 254
c_rt_lib0clear(&___nl__im__15);
#line 254
c_rt_lib0clear(&___nl__im__20);
#line 254
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__4));
#line 254
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__string__21));
#line 254
c_rt_lib0clear(&___nl__im__14);
#line 254
c_rt_lib0clear(&___nl__string__21);
#line 254
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 254
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 254
c_rt_lib0clear(&___nl__im__13);
#line 254
c_rt_lib0clear(&___nl__im__22);
#line 254
c_rt_lib0delete(generator_js_priv0println(___nl__im__12, ___ref___im__1));
#line 254
c_rt_lib0clear(&___nl__im__12);
#line 255
goto label_70;
#line 255
label_45:
;
#line 256
c_rt_lib0move(&___nl__im__27,___get_global_string_const(729));
#line 256
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 256
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__30, ___nl__int__4));
#line 256
c_rt_lib0clear(&___nl__im__30);
#line 256
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register(___nl__im__29));
#line 256
c_rt_lib0clear(&___nl__im__29);
#line 256
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 256
c_rt_lib0clear(&___nl__im__27);
#line 256
c_rt_lib0clear(&___nl__im__28);
#line 256
c_rt_lib0move(&___nl__im__31,___get_global_string_const(759));
#line 256
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 256
c_rt_lib0clear(&___nl__im__26);
#line 256
c_rt_lib0clear(&___nl__im__31);
#line 256
c_rt_lib0move(&___nl__string__32, c_rt_lib0int_to_string(___nl__int__4));
#line 256
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__32));
#line 256
c_rt_lib0clear(&___nl__im__25);
#line 256
c_rt_lib0clear(&___nl__string__32);
#line 256
c_rt_lib0move(&___nl__im__33,___get_global_string_const(760));
#line 256
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__33));
#line 256
c_rt_lib0clear(&___nl__im__24);
#line 256
c_rt_lib0clear(&___nl__im__33);
#line 256
c_rt_lib0delete(generator_js_priv0println(___nl__im__23, ___ref___im__1));
#line 256
c_rt_lib0clear(&___nl__im__23);
#line 257
goto label_70;
#line 257
label_70:
;
#line 258
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_namespace_name());
#line 258
c_rt_lib0move(&___nl__im__38,___get_global_string_const(761));
#line 258
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 258
c_rt_lib0clear(&___nl__im__37);
#line 258
c_rt_lib0clear(&___nl__im__38);
#line 258
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 258
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__41, ___nl__int__4));
#line 258
c_rt_lib0clear(&___nl__im__41);
#line 258
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value(___nl__im__40));
#line 258
c_rt_lib0clear(&___nl__im__40);
#line 258
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__39));
#line 258
c_rt_lib0clear(&___nl__im__36);
#line 258
c_rt_lib0clear(&___nl__im__39);
#line 258
c_rt_lib0move(&___nl__im__42,___get_global_string_const(508));
#line 258
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__42));
#line 258
c_rt_lib0clear(&___nl__im__35);
#line 258
c_rt_lib0clear(&___nl__im__42);
#line 258
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 258
c_rt_lib0clear(&___nl__im__34);
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
//clear ___nl__bool__10;
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 259
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 259
goto label_5;
#line 259
label_95:
;
#line 260
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 260
___nl__int__43 = c_rt_lib0array_len(___nl__im__44);
#line 260
c_rt_lib0clear(&___nl__im__44);
#line 260
label_99:
;
#line 260
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 260
___nl__int__46 = c_rt_lib0array_len(___nl__im__47);
#line 260
c_rt_lib0clear(&___nl__im__47);
#line 260
___nl__bool__45 = ___nl__int__43 < ___nl__int__46;
#line 260
//clear ___nl__int__46;
#line 260
___nl__bool__45 = !___nl__bool__45;
#line 260
if(___nl__bool__45){ goto label_126;}
#line 261
c_rt_lib0move(&___nl__im__50,___get_global_string_const(729));
#line 261
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 261
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__53, ___nl__int__43));
#line 261
c_rt_lib0clear(&___nl__im__53);
#line 261
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register(___nl__im__52));
#line 261
c_rt_lib0clear(&___nl__im__52);
#line 261
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 261
c_rt_lib0clear(&___nl__im__50);
#line 261
c_rt_lib0clear(&___nl__im__51);
#line 261
c_rt_lib0move(&___nl__im__54,___get_global_string_const(762));
#line 261
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__54));
#line 261
c_rt_lib0clear(&___nl__im__49);
#line 261
c_rt_lib0clear(&___nl__im__54);
#line 261
c_rt_lib0delete(generator_js_priv0println(___nl__im__48, ___ref___im__1));
#line 261
c_rt_lib0clear(&___nl__im__48);
#line 260
___nl__int__55 = 1;
#line 260
___nl__int__43 = ___nl__int__43 + ___nl__int__55;
#line 260
//clear ___nl__int__55;
#line 262
goto label_99;
#line 262
label_126:
;
#line 262
c_rt_lib0clear(&___nl__im__0);
#line 262
//clear ___nl__int__2;
#line 262
//clear ___nl__int__4;
#line 262
//clear ___nl__int__5;
#line 262
//clear ___nl__bool__6;
#line 262
c_rt_lib0clear(&___nl__im__7);
#line 262
//clear ___nl__bool__10;
#line 262
c_rt_lib0clear(&___nl__im__11);
#line 262
//clear ___nl__int__43;
#line 262
//clear ___nl__bool__45;
#line 262
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
#line 267
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 268
c_rt_lib0move(&___nl__im__6,___get_global_string_const(763));
#line 268
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 268
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(551)));
#line 268
c_rt_lib0clear(&___nl__im__10);
#line 268
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(552)));
#line 268
c_rt_lib0clear(&___nl__im__9);
#line 268
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(154)));
#line 268
___nl__int__7 = getIntFromImm(___nl__im__11);
#line 268
c_rt_lib0clear(&___nl__im__8);
#line 268
c_rt_lib0clear(&___nl__im__11);
#line 268
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__7));
#line 268
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__12));
#line 268
c_rt_lib0clear(&___nl__im__6);
#line 268
//clear ___nl__int__7;
#line 268
c_rt_lib0clear(&___nl__string__12);
#line 268
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__3));
#line 268
c_rt_lib0clear(&___nl__im__5);
#line 269
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 269
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(231));
#line 269
if(___nl__bool__14){ goto label_96;}
#line 271
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(232));
#line 271
if(___nl__bool__14){ goto label_117;}
#line 273
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(233));
#line 273
if(___nl__bool__14){ goto label_138;}
#line 276
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(234));
#line 276
if(___nl__bool__14){ goto label_159;}
#line 278
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(239));
#line 278
if(___nl__bool__14){ goto label_172;}
#line 281
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(235));
#line 281
if(___nl__bool__14){ goto label_193;}
#line 283
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(236));
#line 283
if(___nl__bool__14){ goto label_198;}
#line 285
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(237));
#line 285
if(___nl__bool__14){ goto label_203;}
#line 287
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(238));
#line 287
if(___nl__bool__14){ goto label_218;}
#line 290
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(248));
#line 290
if(___nl__bool__14){ goto label_249;}
#line 292
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(249));
#line 292
if(___nl__bool__14){ goto label_254;}
#line 294
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(240));
#line 294
if(___nl__bool__14){ goto label_263;}
#line 296
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(226));
#line 296
if(___nl__bool__14){ goto label_272;}
#line 298
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(241));
#line 298
if(___nl__bool__14){ goto label_281;}
#line 301
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(242));
#line 301
if(___nl__bool__14){ goto label_308;}
#line 305
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(243));
#line 305
if(___nl__bool__14){ goto label_339;}
#line 307
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(244));
#line 307
if(___nl__bool__14){ goto label_348;}
#line 309
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(245));
#line 309
if(___nl__bool__14){ goto label_357;}
#line 313
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(246));
#line 313
if(___nl__bool__14){ goto label_390;}
#line 317
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(247));
#line 317
if(___nl__bool__14){ goto label_421;}
#line 319
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(250));
#line 319
if(___nl__bool__14){ goto label_426;}
#line 321
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(251));
#line 321
if(___nl__bool__14){ goto label_439;}
#line 324
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(252));
#line 324
if(___nl__bool__14){ goto label_466;}
#line 326
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(253));
#line 326
if(___nl__bool__14){ goto label_471;}
#line 328
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(254));
#line 328
if(___nl__bool__14){ goto label_480;}
#line 329
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(255));
#line 329
if(___nl__bool__14){ goto label_484;}
#line 332
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(256));
#line 332
if(___nl__bool__14){ goto label_509;}
#line 334
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(257));
#line 334
if(___nl__bool__14){ goto label_520;}
#line 336
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(258));
#line 336
if(___nl__bool__14){ goto label_525;}
#line 338
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(259));
#line 338
if(___nl__bool__14){ goto label_536;}
#line 340
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(260));
#line 340
if(___nl__bool__14){ goto label_541;}
#line 342
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(261));
#line 342
if(___nl__bool__14){ goto label_552;}
#line 347
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(262));
#line 347
if(___nl__bool__14){ goto label_604;}
#line 349
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(263));
#line 349
if(___nl__bool__14){ goto label_615;}
#line 351
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(264));
#line 351
if(___nl__bool__14){ goto label_620;}
#line 353
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(265));
#line 353
if(___nl__bool__14){ goto label_625;}
#line 355
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(266));
#line 355
if(___nl__bool__14){ goto label_630;}
#line 355
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 355
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 355
nl_die_arg(___nl__im__15);
#line 269
label_96:
;
#line 269
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(231)));
#line 269
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 270
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(224)));
#line 270
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 270
c_rt_lib0clear(&___nl__im__20);
#line 270
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(73)));
#line 270
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(224)));
#line 270
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(206)));
#line 270
c_rt_lib0clear(&___nl__im__24);
#line 270
c_rt_lib0move(&___nl__im__21, generator_js_priv0get_arr(___nl__im__22, ___nl__im__23));
#line 270
c_rt_lib0clear(&___nl__im__22);
#line 270
c_rt_lib0clear(&___nl__im__23);
#line 270
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 270
c_rt_lib0clear(&___nl__im__19);
#line 270
c_rt_lib0clear(&___nl__im__21);
#line 270
c_rt_lib0move(&___nl__im__25,___get_global_string_const(442));
#line 270
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 270
c_rt_lib0clear(&___nl__im__18);
#line 270
c_rt_lib0clear(&___nl__im__25);
#line 271
goto label_635;
#line 271
label_117:
;
#line 271
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(232)));
#line 271
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 272
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(224)));
#line 272
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value_to_assign(___nl__im__30));
#line 272
c_rt_lib0clear(&___nl__im__30);
#line 272
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(73)));
#line 272
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(224)));
#line 272
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(206)));
#line 272
c_rt_lib0clear(&___nl__im__34);
#line 272
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_hash(___nl__im__32, ___nl__im__33));
#line 272
c_rt_lib0clear(&___nl__im__32);
#line 272
c_rt_lib0clear(&___nl__im__33);
#line 272
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__31));
#line 272
c_rt_lib0clear(&___nl__im__29);
#line 272
c_rt_lib0clear(&___nl__im__31);
#line 272
c_rt_lib0move(&___nl__im__35,___get_global_string_const(442));
#line 272
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__28, ___nl__im__35));
#line 272
c_rt_lib0clear(&___nl__im__28);
#line 272
c_rt_lib0clear(&___nl__im__35);
#line 273
goto label_635;
#line 273
label_138:
;
#line 273
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(233)));
#line 273
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 274
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(224)));
#line 274
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value_to_assign(___nl__im__40));
#line 274
c_rt_lib0clear(&___nl__im__40);
#line 275
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(764)));
#line 275
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(224)));
#line 275
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(206)));
#line 275
c_rt_lib0clear(&___nl__im__44);
#line 275
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_empty_hash(___nl__im__42, ___nl__im__43));
#line 275
c_rt_lib0clear(&___nl__im__42);
#line 275
c_rt_lib0clear(&___nl__im__43);
#line 275
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 275
c_rt_lib0clear(&___nl__im__39);
#line 275
c_rt_lib0clear(&___nl__im__41);
#line 275
c_rt_lib0move(&___nl__im__45,___get_global_string_const(442));
#line 275
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__45));
#line 275
c_rt_lib0clear(&___nl__im__38);
#line 275
c_rt_lib0clear(&___nl__im__45);
#line 276
goto label_635;
#line 276
label_159:
;
#line 276
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(234)));
#line 276
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 277
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(268)));
#line 277
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(270)));
#line 277
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(267)));
#line 277
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(224)));
#line 277
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_call(___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___ref___int__2));
#line 277
c_rt_lib0clear(&___nl__im__48);
#line 277
c_rt_lib0clear(&___nl__im__49);
#line 277
c_rt_lib0clear(&___nl__im__50);
#line 277
c_rt_lib0clear(&___nl__im__51);
#line 278
goto label_635;
#line 278
label_172:
;
#line 278
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(239)));
#line 278
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 279
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(224)));
#line 279
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value_to_assign(___nl__im__56));
#line 279
c_rt_lib0clear(&___nl__im__56);
#line 280
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(152)));
#line 280
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(168)));
#line 280
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(152), ___nl__im__59, ___get_global_string_const(168), ___nl__im__60));
#line 280
c_rt_lib0clear(&___nl__im__59);
#line 280
c_rt_lib0clear(&___nl__im__60);
#line 280
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_const_hash(___nl__im__58));
#line 280
c_rt_lib0clear(&___nl__im__58);
#line 280
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__57));
#line 280
c_rt_lib0clear(&___nl__im__55);
#line 280
c_rt_lib0clear(&___nl__im__57);
#line 280
c_rt_lib0move(&___nl__im__61,___get_global_string_const(442));
#line 280
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 280
c_rt_lib0clear(&___nl__im__54);
#line 280
c_rt_lib0clear(&___nl__im__61);
#line 281
goto label_635;
#line 281
label_193:
;
#line 281
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(235)));
#line 281
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 282
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_una_op(___nl__im__62));
#line 283
goto label_635;
#line 283
label_198:
;
#line 283
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(236)));
#line 283
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 284
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_bin_op(___nl__im__64, ___ref___int__2));
#line 285
goto label_635;
#line 285
label_203:
;
#line 285
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(237)));
#line 285
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 286
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(224)));
#line 286
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(73)));
#line 286
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(562)));
#line 286
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(567)));
#line 286
___nl__int__71 = getIntFromImm(___nl__im__72);
#line 286
c_rt_lib0clear(&___nl__im__72);
#line 286
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_is(___nl__im__68, ___nl__im__69, ___nl__im__70, ___nl__int__71, ___ref___int__2, ___ref___im__3));
#line 286
c_rt_lib0clear(&___nl__im__68);
#line 286
c_rt_lib0clear(&___nl__im__69);
#line 286
c_rt_lib0clear(&___nl__im__70);
#line 286
//clear ___nl__int__71;
#line 287
goto label_635;
#line 287
label_218:
;
#line 287
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(238)));
#line 287
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 288
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(224)));
#line 288
c_rt_lib0move(&___nl__im__76, generator_js_priv0get_register_value_to_assign(___nl__im__77));
#line 288
c_rt_lib0clear(&___nl__im__77);
#line 288
c_rt_lib0move(&___nl__im__79,___get_global_string_const(271));
#line 288
c_rt_lib0move(&___nl__im__80,___get_global_string_const(238));
#line 289
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(73)));
#line 289
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__83));
#line 289
c_rt_lib0clear(&___nl__im__83);
#line 289
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(562)));
#line 289
c_rt_lib0move(&___nl__im__85, generator_js_priv0get_str_imm(___nl__im__86, ___ref___im__3));
#line 289
c_rt_lib0clear(&___nl__im__86);
#line 289
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__85));
#line 289
c_rt_lib0clear(&___nl__im__85);
#line 289
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(2, ___nl__im__82, ___nl__im__84));
#line 289
c_rt_lib0clear(&___nl__im__82);
#line 289
c_rt_lib0clear(&___nl__im__84);
#line 289
c_rt_lib0move(&___nl__im__78, generator_js_priv0get_internal_call(___nl__im__79, ___nl__im__80, ___nl__im__81, ___ref___int__2));
#line 289
c_rt_lib0clear(&___nl__im__79);
#line 289
c_rt_lib0clear(&___nl__im__80);
#line 289
c_rt_lib0clear(&___nl__im__81);
#line 289
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 289
c_rt_lib0clear(&___nl__im__76);
#line 289
c_rt_lib0clear(&___nl__im__78);
#line 289
c_rt_lib0move(&___nl__im__87,___get_global_string_const(442));
#line 289
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__75, ___nl__im__87));
#line 289
c_rt_lib0clear(&___nl__im__75);
#line 289
c_rt_lib0clear(&___nl__im__87);
#line 290
goto label_635;
#line 290
label_249:
;
#line 290
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(248)));
#line 290
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 291
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_return(___nl__im__88, ___nl__im__1));
#line 292
goto label_635;
#line 292
label_254:
;
#line 292
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(249)));
#line 292
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 293
c_rt_lib0move(&___nl__im__92, generator_js_priv0get_namespace_name());
#line 293
c_rt_lib0move(&___nl__im__93,___get_global_string_const(765));
#line 293
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__92, ___nl__im__93));
#line 293
c_rt_lib0clear(&___nl__im__92);
#line 293
c_rt_lib0clear(&___nl__im__93);
#line 294
goto label_635;
#line 294
label_263:
;
#line 294
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(240)));
#line 294
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 295
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(224)));
#line 295
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(73)));
#line 295
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_move(___nl__im__96, ___nl__im__97, ___ref___int__2));
#line 295
c_rt_lib0clear(&___nl__im__96);
#line 295
c_rt_lib0clear(&___nl__im__97);
#line 296
goto label_635;
#line 296
label_272:
;
#line 296
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(226)));
#line 296
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 297
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(224)));
#line 297
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(225)));
#line 297
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_load_const(___nl__im__100, ___nl__im__101, ___ref___im__3));
#line 297
c_rt_lib0clear(&___nl__im__100);
#line 297
c_rt_lib0clear(&___nl__im__101);
#line 298
goto label_635;
#line 298
label_281:
;
#line 298
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(241)));
#line 298
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 299
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(224)));
#line 299
c_rt_lib0move(&___nl__im__107, generator_js_priv0get_register_value_to_assign(___nl__im__108));
#line 299
c_rt_lib0clear(&___nl__im__108);
#line 300
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(73)));
#line 300
c_rt_lib0move(&___nl__im__109, generator_js_priv0get_register_value(___nl__im__110));
#line 300
c_rt_lib0clear(&___nl__im__110);
#line 300
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 300
c_rt_lib0clear(&___nl__im__107);
#line 300
c_rt_lib0clear(&___nl__im__109);
#line 300
c_rt_lib0move(&___nl__im__111,___get_global_string_const(766));
#line 300
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__111));
#line 300
c_rt_lib0clear(&___nl__im__106);
#line 300
c_rt_lib0clear(&___nl__im__111);
#line 300
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(278)));
#line 300
c_rt_lib0move(&___nl__im__112, generator_js_priv0get_register_value(___nl__im__113));
#line 300
c_rt_lib0clear(&___nl__im__113);
#line 300
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__112));
#line 300
c_rt_lib0clear(&___nl__im__105);
#line 300
c_rt_lib0clear(&___nl__im__112);
#line 300
c_rt_lib0move(&___nl__im__114,___get_global_string_const(508));
#line 300
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__104, ___nl__im__114));
#line 300
c_rt_lib0clear(&___nl__im__104);
#line 300
c_rt_lib0clear(&___nl__im__114);
#line 301
goto label_635;
#line 301
label_308:
;
#line 301
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(242)));
#line 301
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 302
c_rt_lib0move(&___nl__im__118,___get_global_string_const(271));
#line 302
c_rt_lib0move(&___nl__im__119,___get_global_string_const(767));
#line 302
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(73)));
#line 302
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__122));
#line 302
c_rt_lib0clear(&___nl__im__122);
#line 303
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(278)));
#line 303
c_rt_lib0move(&___nl__im__124, generator_js_priv0get_register_value(___nl__im__125));
#line 303
c_rt_lib0clear(&___nl__im__125);
#line 303
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__124));
#line 303
c_rt_lib0clear(&___nl__im__124);
#line 304
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(225)));
#line 304
c_rt_lib0move(&___nl__im__127, generator_js_priv0get_register_value(___nl__im__128));
#line 304
c_rt_lib0clear(&___nl__im__128);
#line 304
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__127));
#line 304
c_rt_lib0clear(&___nl__im__127);
#line 304
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(3, ___nl__im__121, ___nl__im__123, ___nl__im__126));
#line 304
c_rt_lib0clear(&___nl__im__121);
#line 304
c_rt_lib0clear(&___nl__im__123);
#line 304
c_rt_lib0clear(&___nl__im__126);
#line 304
c_rt_lib0move(&___nl__im__117, generator_js_priv0get_internal_call(___nl__im__118, ___nl__im__119, ___nl__im__120, ___ref___int__2));
#line 304
c_rt_lib0clear(&___nl__im__118);
#line 304
c_rt_lib0clear(&___nl__im__119);
#line 304
c_rt_lib0clear(&___nl__im__120);
#line 304
c_rt_lib0move(&___nl__im__129,___get_global_string_const(442));
#line 304
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__117, ___nl__im__129));
#line 304
c_rt_lib0clear(&___nl__im__117);
#line 304
c_rt_lib0clear(&___nl__im__129);
#line 305
goto label_635;
#line 305
label_339:
;
#line 305
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(243)));
#line 305
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 306
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(224)));
#line 306
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(225)));
#line 306
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_push(___nl__im__132, ___nl__im__133, ___ref___int__2));
#line 306
c_rt_lib0clear(&___nl__im__132);
#line 306
c_rt_lib0clear(&___nl__im__133);
#line 307
goto label_635;
#line 307
label_348:
;
#line 307
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(244)));
#line 307
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 308
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(224)));
#line 308
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(73)));
#line 308
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_len(___nl__im__136, ___nl__im__137, ___ref___int__2));
#line 308
c_rt_lib0clear(&___nl__im__136);
#line 308
c_rt_lib0clear(&___nl__im__137);
#line 309
goto label_635;
#line 309
label_357:
;
#line 309
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(245)));
#line 309
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 310
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(224)));
#line 310
c_rt_lib0move(&___nl__im__141, generator_js_priv0get_register_value_to_assign(___nl__im__142));
#line 310
c_rt_lib0clear(&___nl__im__142);
#line 310
c_rt_lib0move(&___nl__im__144,___get_global_string_const(271));
#line 310
c_rt_lib0move(&___nl__im__145,___get_global_string_const(768));
#line 311
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(73)));
#line 311
c_rt_lib0move(&___nl__im__148, generator_js_priv0get_register_value(___nl__im__149));
#line 311
c_rt_lib0clear(&___nl__im__149);
#line 311
c_rt_lib0move(&___nl__im__147, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__148));
#line 311
c_rt_lib0clear(&___nl__im__148);
#line 311
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(577)));
#line 311
c_rt_lib0move(&___nl__im__151, generator_js_priv0get_str_imm(___nl__im__152, ___ref___im__3));
#line 311
c_rt_lib0clear(&___nl__im__152);
#line 311
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__151));
#line 311
c_rt_lib0clear(&___nl__im__151);
#line 311
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_mk(2, ___nl__im__147, ___nl__im__150));
#line 311
c_rt_lib0clear(&___nl__im__147);
#line 311
c_rt_lib0clear(&___nl__im__150);
#line 311
c_rt_lib0move(&___nl__im__143, generator_js_priv0get_internal_call(___nl__im__144, ___nl__im__145, ___nl__im__146, ___ref___int__2));
#line 311
c_rt_lib0clear(&___nl__im__144);
#line 311
c_rt_lib0clear(&___nl__im__145);
#line 311
c_rt_lib0clear(&___nl__im__146);
#line 311
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__143));
#line 311
c_rt_lib0clear(&___nl__im__141);
#line 311
c_rt_lib0clear(&___nl__im__143);
#line 312
c_rt_lib0move(&___nl__im__153,___get_global_string_const(442));
#line 312
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__140, ___nl__im__153));
#line 312
c_rt_lib0clear(&___nl__im__140);
#line 312
c_rt_lib0clear(&___nl__im__153);
#line 313
goto label_635;
#line 313
label_390:
;
#line 313
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(246)));
#line 313
c_rt_lib0copy(&___nl__im__154, ___nl__im__155);
#line 314
c_rt_lib0move(&___nl__im__157,___get_global_string_const(271));
#line 314
c_rt_lib0move(&___nl__im__158,___get_global_string_const(769));
#line 314
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(73)));
#line 314
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__161));
#line 314
c_rt_lib0clear(&___nl__im__161);
#line 315
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(577)));
#line 315
c_rt_lib0move(&___nl__im__163, generator_js_priv0get_str_imm(___nl__im__164, ___ref___im__3));
#line 315
c_rt_lib0clear(&___nl__im__164);
#line 315
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__163));
#line 315
c_rt_lib0clear(&___nl__im__163);
#line 315
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(225)));
#line 315
c_rt_lib0move(&___nl__im__166, generator_js_priv0get_register_value(___nl__im__167));
#line 315
c_rt_lib0clear(&___nl__im__167);
#line 315
c_rt_lib0move(&___nl__im__165, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__166));
#line 315
c_rt_lib0clear(&___nl__im__166);
#line 315
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(3, ___nl__im__160, ___nl__im__162, ___nl__im__165));
#line 315
c_rt_lib0clear(&___nl__im__160);
#line 315
c_rt_lib0clear(&___nl__im__162);
#line 315
c_rt_lib0clear(&___nl__im__165);
#line 315
c_rt_lib0move(&___nl__im__156, generator_js_priv0get_internal_call(___nl__im__157, ___nl__im__158, ___nl__im__159, ___ref___int__2));
#line 315
c_rt_lib0clear(&___nl__im__157);
#line 315
c_rt_lib0clear(&___nl__im__158);
#line 315
c_rt_lib0clear(&___nl__im__159);
#line 316
c_rt_lib0move(&___nl__im__168,___get_global_string_const(442));
#line 316
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__156, ___nl__im__168));
#line 316
c_rt_lib0clear(&___nl__im__156);
#line 316
c_rt_lib0clear(&___nl__im__168);
#line 317
goto label_635;
#line 317
label_421:
;
#line 317
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(247)));
#line 317
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 318
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_mk(___nl__im__169, ___ref___im__3, ___ref___int__2));
#line 319
goto label_635;
#line 319
label_426:
;
#line 319
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(250)));
#line 319
___nl__int__171 = getIntFromImm(___nl__im__172);
#line 320
c_rt_lib0move(&___nl__im__174,___get_global_string_const(529));
#line 320
c_rt_lib0move(&___nl__string__175, c_rt_lib0int_to_string(___nl__int__171));
#line 320
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__string__175));
#line 320
c_rt_lib0clear(&___nl__im__174);
#line 320
c_rt_lib0clear(&___nl__string__175);
#line 320
c_rt_lib0move(&___nl__im__176,___get_global_string_const(530));
#line 320
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__173, ___nl__im__176));
#line 320
c_rt_lib0clear(&___nl__im__173);
#line 320
c_rt_lib0clear(&___nl__im__176);
#line 321
goto label_635;
#line 321
label_439:
;
#line 321
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(251)));
#line 321
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 322
c_rt_lib0move(&___nl__im__182,___get_global_string_const(607));
#line 322
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(73)));
#line 322
c_rt_lib0move(&___nl__im__183, generator_js_priv0get_register_value(___nl__im__184));
#line 322
c_rt_lib0clear(&___nl__im__184);
#line 322
c_rt_lib0move(&___nl__im__181, c_rt_lib0concat_new(___nl__im__182, ___nl__im__183));
#line 322
c_rt_lib0clear(&___nl__im__182);
#line 322
c_rt_lib0clear(&___nl__im__183);
#line 322
c_rt_lib0move(&___nl__im__185,___get_global_string_const(770));
#line 322
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__185));
#line 322
c_rt_lib0clear(&___nl__im__181);
#line 322
c_rt_lib0clear(&___nl__im__185);
#line 322
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(224)));
#line 322
___nl__int__187 = getIntFromImm(___nl__im__188);
#line 322
c_rt_lib0clear(&___nl__im__188);
#line 322
c_rt_lib0move(&___nl__im__186, generator_js_priv0get_goto(___nl__int__187));
#line 322
//clear ___nl__int__187;
#line 322
c_rt_lib0move(&___nl__im__179, c_rt_lib0concat_new(___nl__im__180, ___nl__im__186));
#line 322
c_rt_lib0clear(&___nl__im__180);
#line 322
c_rt_lib0clear(&___nl__im__186);
#line 323
c_rt_lib0move(&___nl__im__189,___get_global_string_const(307));
#line 323
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__179, ___nl__im__189));
#line 323
c_rt_lib0clear(&___nl__im__179);
#line 323
c_rt_lib0clear(&___nl__im__189);
#line 324
goto label_635;
#line 324
label_466:
;
#line 324
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(252)));
#line 324
___nl__int__190 = getIntFromImm(___nl__im__191);
#line 325
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_goto(___nl__int__190));
#line 326
goto label_635;
#line 326
label_471:
;
#line 326
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(253)));
#line 326
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 327
c_rt_lib0move(&___nl__im__194, generator_js_priv0get_register_to_assign(___nl__im__192));
#line 327
c_rt_lib0move(&___nl__im__195,___get_global_string_const(771));
#line 327
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__194, ___nl__im__195));
#line 327
c_rt_lib0clear(&___nl__im__194);
#line 327
c_rt_lib0clear(&___nl__im__195);
#line 328
goto label_635;
#line 328
label_480:
;
#line 328
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(254)));
#line 328
c_rt_lib0copy(&___nl__im__196, ___nl__im__197);
#line 329
goto label_635;
#line 329
label_484:
;
#line 329
c_rt_lib0move(&___nl__im__199, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(255)));
#line 329
c_rt_lib0copy(&___nl__im__198, ___nl__im__199);
#line 330
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(361)));
#line 330
c_rt_lib0move(&___nl__im__203, generator_js_priv0get_register_to_assign(___nl__im__204));
#line 330
c_rt_lib0clear(&___nl__im__204);
#line 331
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(360)));
#line 331
c_rt_lib0move(&___nl__im__205, generator_js_priv0get_register_value(___nl__im__206));
#line 331
c_rt_lib0clear(&___nl__im__206);
#line 331
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__205));
#line 331
c_rt_lib0clear(&___nl__im__203);
#line 331
c_rt_lib0clear(&___nl__im__205);
#line 331
c_rt_lib0move(&___nl__im__207,___get_global_string_const(110));
#line 331
c_rt_lib0move(&___nl__im__201, c_rt_lib0concat_new(___nl__im__202, ___nl__im__207));
#line 331
c_rt_lib0clear(&___nl__im__202);
#line 331
c_rt_lib0clear(&___nl__im__207);
#line 331
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(605)));
#line 331
c_rt_lib0move(&___nl__im__200, c_rt_lib0concat_new(___nl__im__201, ___nl__im__208));
#line 331
c_rt_lib0clear(&___nl__im__201);
#line 331
c_rt_lib0clear(&___nl__im__208);
#line 331
c_rt_lib0move(&___nl__im__209,___get_global_string_const(442));
#line 331
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__200, ___nl__im__209));
#line 331
c_rt_lib0clear(&___nl__im__200);
#line 331
c_rt_lib0clear(&___nl__im__209);
#line 332
goto label_635;
#line 332
label_509:
;
#line 332
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(256)));
#line 332
c_rt_lib0copy(&___nl__im__210, ___nl__im__211);
#line 333
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__210, ___get_global_string_const(362)));
#line 333
c_rt_lib0move(&___nl__im__212, generator_js_priv0get_register_to_assign(___nl__im__213));
#line 333
c_rt_lib0clear(&___nl__im__213);
#line 333
c_rt_lib0move(&___nl__im__214,___get_global_string_const(772));
#line 333
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__212, ___nl__im__214));
#line 333
c_rt_lib0clear(&___nl__im__212);
#line 333
c_rt_lib0clear(&___nl__im__214);
#line 334
goto label_635;
#line 334
label_520:
;
#line 334
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(257)));
#line 334
c_rt_lib0copy(&___nl__im__215, ___nl__im__216);
#line 335
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_index(___nl__im__215));
#line 336
goto label_635;
#line 336
label_525:
;
#line 336
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(258)));
#line 336
c_rt_lib0copy(&___nl__im__217, ___nl__im__218);
#line 337
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(362)));
#line 337
c_rt_lib0move(&___nl__im__219, generator_js_priv0get_register_to_assign(___nl__im__220));
#line 337
c_rt_lib0clear(&___nl__im__220);
#line 337
c_rt_lib0move(&___nl__im__221,___get_global_string_const(772));
#line 337
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__219, ___nl__im__221));
#line 337
c_rt_lib0clear(&___nl__im__219);
#line 337
c_rt_lib0clear(&___nl__im__221);
#line 338
goto label_635;
#line 338
label_536:
;
#line 338
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(259)));
#line 338
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 339
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_hash_index(___nl__im__222));
#line 340
goto label_635;
#line 340
label_541:
;
#line 340
c_rt_lib0move(&___nl__im__225, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(260)));
#line 340
c_rt_lib0copy(&___nl__im__224, ___nl__im__225);
#line 341
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_string_const(362)));
#line 341
c_rt_lib0move(&___nl__im__226, generator_js_priv0get_register_to_assign(___nl__im__227));
#line 341
c_rt_lib0clear(&___nl__im__227);
#line 341
c_rt_lib0move(&___nl__im__228,___get_global_string_const(772));
#line 341
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__226, ___nl__im__228));
#line 341
c_rt_lib0clear(&___nl__im__226);
#line 341
c_rt_lib0clear(&___nl__im__228);
#line 342
goto label_635;
#line 342
label_552:
;
#line 342
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(261)));
#line 342
c_rt_lib0copy(&___nl__im__229, ___nl__im__230);
#line 343
c_rt_lib0move(&___nl__im__237,___get_global_string_const(607));
#line 343
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(360)));
#line 343
c_rt_lib0move(&___nl__im__238, generator_js_priv0get_register_value(___nl__im__239));
#line 343
c_rt_lib0clear(&___nl__im__239);
#line 343
c_rt_lib0move(&___nl__im__236, c_rt_lib0concat_new(___nl__im__237, ___nl__im__238));
#line 343
c_rt_lib0clear(&___nl__im__237);
#line 343
c_rt_lib0clear(&___nl__im__238);
#line 343
c_rt_lib0move(&___nl__im__240,___get_global_string_const(773));
#line 343
c_rt_lib0move(&___nl__im__235, c_rt_lib0concat_new(___nl__im__236, ___nl__im__240));
#line 343
c_rt_lib0clear(&___nl__im__236);
#line 343
c_rt_lib0clear(&___nl__im__240);
#line 343
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(567)));
#line 343
___nl__int__241 = getIntFromImm(___nl__im__242);
#line 343
c_rt_lib0clear(&___nl__im__242);
#line 343
c_rt_lib0move(&___nl__string__243, c_rt_lib0int_to_string(___nl__int__241));
#line 343
c_rt_lib0move(&___nl__im__234, c_rt_lib0concat_new(___nl__im__235, ___nl__string__243));
#line 343
c_rt_lib0clear(&___nl__im__235);
#line 343
//clear ___nl__int__241;
#line 343
c_rt_lib0clear(&___nl__string__243);
#line 343
c_rt_lib0move(&___nl__im__244,___get_global_string_const(322));
#line 343
c_rt_lib0move(&___nl__im__233, c_rt_lib0concat_new(___nl__im__234, ___nl__im__244));
#line 343
c_rt_lib0clear(&___nl__im__234);
#line 343
c_rt_lib0clear(&___nl__im__244);
#line 344
c_rt_lib0move(&___nl__im__245, generator_js_priv0get_namespace_name());
#line 344
c_rt_lib0move(&___nl__im__232, c_rt_lib0concat_new(___nl__im__233, ___nl__im__245));
#line 344
c_rt_lib0clear(&___nl__im__233);
#line 344
c_rt_lib0clear(&___nl__im__245);
#line 344
c_rt_lib0move(&___nl__im__246,___get_global_string_const(765));
#line 344
c_rt_lib0move(&___nl__im__231, c_rt_lib0concat_new(___nl__im__232, ___nl__im__246));
#line 344
c_rt_lib0clear(&___nl__im__232);
#line 344
c_rt_lib0clear(&___nl__im__246);
#line 344
c_rt_lib0delete(generator_js_priv0println(___nl__im__231, ___ref___im__3));
#line 344
c_rt_lib0clear(&___nl__im__231);
#line 345
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(361)));
#line 345
c_rt_lib0move(&___nl__im__249, generator_js_priv0get_register_to_assign(___nl__im__250));
#line 345
c_rt_lib0clear(&___nl__im__250);
#line 346
c_rt_lib0move(&___nl__im__252, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(360)));
#line 346
c_rt_lib0move(&___nl__im__251, generator_js_priv0get_register_value(___nl__im__252));
#line 346
c_rt_lib0clear(&___nl__im__252);
#line 346
c_rt_lib0move(&___nl__im__248, c_rt_lib0concat_new(___nl__im__249, ___nl__im__251));
#line 346
c_rt_lib0clear(&___nl__im__249);
#line 346
c_rt_lib0clear(&___nl__im__251);
#line 346
c_rt_lib0move(&___nl__im__253,___get_global_string_const(774));
#line 346
c_rt_lib0move(&___nl__im__247, c_rt_lib0concat_new(___nl__im__248, ___nl__im__253));
#line 346
c_rt_lib0clear(&___nl__im__248);
#line 346
c_rt_lib0clear(&___nl__im__253);
#line 346
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__247));
#line 346
c_rt_lib0clear(&___nl__im__247);
#line 347
goto label_635;
#line 347
label_604:
;
#line 347
c_rt_lib0move(&___nl__im__255, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(262)));
#line 347
c_rt_lib0copy(&___nl__im__254, ___nl__im__255);
#line 348
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__254, ___get_global_string_const(362)));
#line 348
c_rt_lib0move(&___nl__im__256, generator_js_priv0get_register_to_assign(___nl__im__257));
#line 348
c_rt_lib0clear(&___nl__im__257);
#line 348
c_rt_lib0move(&___nl__im__258,___get_global_string_const(772));
#line 348
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__256, ___nl__im__258));
#line 348
c_rt_lib0clear(&___nl__im__256);
#line 348
c_rt_lib0clear(&___nl__im__258);
#line 349
goto label_635;
#line 349
label_615:
;
#line 349
c_rt_lib0move(&___nl__im__260, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(263)));
#line 349
c_rt_lib0copy(&___nl__im__259, ___nl__im__260);
#line 350
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_init_iter(___nl__im__259, ___ref___int__2));
#line 351
goto label_635;
#line 351
label_620:
;
#line 351
c_rt_lib0move(&___nl__im__262, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(264)));
#line 351
c_rt_lib0copy(&___nl__im__261, ___nl__im__262);
#line 352
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_next_iter(___nl__im__261, ___ref___int__2));
#line 353
goto label_635;
#line 353
label_625:
;
#line 353
c_rt_lib0move(&___nl__im__264, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(265)));
#line 353
c_rt_lib0copy(&___nl__im__263, ___nl__im__264);
#line 354
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_get_key_iter(___nl__im__263, ___ref___int__2));
#line 355
goto label_635;
#line 355
label_630:
;
#line 355
c_rt_lib0move(&___nl__im__266, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(266)));
#line 355
c_rt_lib0copy(&___nl__im__265, ___nl__im__266);
#line 356
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_is_end(___nl__im__265, ___ref___int__2));
#line 357
goto label_635;
#line 357
label_635:
;
#line 358
c_rt_lib0delete(generator_js_priv0println(___nl__im__4, ___ref___im__3));
#line 358
c_rt_lib0clear(&___nl__im__0);
#line 358
c_rt_lib0clear(&___nl__im__1);
#line 358
c_rt_lib0clear(&___nl__im__4);
#line 358
c_rt_lib0clear(&___nl__im__13);
#line 358
//clear ___nl__bool__14;
#line 358
c_rt_lib0clear(&___nl__im__15);
#line 358
c_rt_lib0clear(&___nl__im__16);
#line 358
c_rt_lib0clear(&___nl__im__17);
#line 358
c_rt_lib0clear(&___nl__im__26);
#line 358
c_rt_lib0clear(&___nl__im__27);
#line 358
c_rt_lib0clear(&___nl__im__36);
#line 358
c_rt_lib0clear(&___nl__im__37);
#line 358
c_rt_lib0clear(&___nl__im__46);
#line 358
c_rt_lib0clear(&___nl__im__47);
#line 358
c_rt_lib0clear(&___nl__im__52);
#line 358
c_rt_lib0clear(&___nl__im__53);
#line 358
c_rt_lib0clear(&___nl__im__62);
#line 358
c_rt_lib0clear(&___nl__im__63);
#line 358
c_rt_lib0clear(&___nl__im__64);
#line 358
c_rt_lib0clear(&___nl__im__65);
#line 358
c_rt_lib0clear(&___nl__im__66);
#line 358
c_rt_lib0clear(&___nl__im__67);
#line 358
c_rt_lib0clear(&___nl__im__73);
#line 358
c_rt_lib0clear(&___nl__im__74);
#line 358
c_rt_lib0clear(&___nl__im__88);
#line 358
c_rt_lib0clear(&___nl__im__89);
#line 358
c_rt_lib0clear(&___nl__im__90);
#line 358
c_rt_lib0clear(&___nl__im__91);
#line 358
c_rt_lib0clear(&___nl__im__94);
#line 358
c_rt_lib0clear(&___nl__im__95);
#line 358
c_rt_lib0clear(&___nl__im__98);
#line 358
c_rt_lib0clear(&___nl__im__99);
#line 358
c_rt_lib0clear(&___nl__im__102);
#line 358
c_rt_lib0clear(&___nl__im__103);
#line 358
c_rt_lib0clear(&___nl__im__115);
#line 358
c_rt_lib0clear(&___nl__im__116);
#line 358
c_rt_lib0clear(&___nl__im__130);
#line 358
c_rt_lib0clear(&___nl__im__131);
#line 358
c_rt_lib0clear(&___nl__im__134);
#line 358
c_rt_lib0clear(&___nl__im__135);
#line 358
c_rt_lib0clear(&___nl__im__138);
#line 358
c_rt_lib0clear(&___nl__im__139);
#line 358
c_rt_lib0clear(&___nl__im__154);
#line 358
c_rt_lib0clear(&___nl__im__155);
#line 358
c_rt_lib0clear(&___nl__im__169);
#line 358
c_rt_lib0clear(&___nl__im__170);
#line 358
//clear ___nl__int__171;
#line 358
c_rt_lib0clear(&___nl__im__172);
#line 358
c_rt_lib0clear(&___nl__im__177);
#line 358
c_rt_lib0clear(&___nl__im__178);
#line 358
//clear ___nl__int__190;
#line 358
c_rt_lib0clear(&___nl__im__191);
#line 358
c_rt_lib0clear(&___nl__im__192);
#line 358
c_rt_lib0clear(&___nl__im__193);
#line 358
c_rt_lib0clear(&___nl__im__196);
#line 358
c_rt_lib0clear(&___nl__im__197);
#line 358
c_rt_lib0clear(&___nl__im__198);
#line 358
c_rt_lib0clear(&___nl__im__199);
#line 358
c_rt_lib0clear(&___nl__im__210);
#line 358
c_rt_lib0clear(&___nl__im__211);
#line 358
c_rt_lib0clear(&___nl__im__215);
#line 358
c_rt_lib0clear(&___nl__im__216);
#line 358
c_rt_lib0clear(&___nl__im__217);
#line 358
c_rt_lib0clear(&___nl__im__218);
#line 358
c_rt_lib0clear(&___nl__im__222);
#line 358
c_rt_lib0clear(&___nl__im__223);
#line 358
c_rt_lib0clear(&___nl__im__224);
#line 358
c_rt_lib0clear(&___nl__im__225);
#line 358
c_rt_lib0clear(&___nl__im__229);
#line 358
c_rt_lib0clear(&___nl__im__230);
#line 358
c_rt_lib0clear(&___nl__im__254);
#line 358
c_rt_lib0clear(&___nl__im__255);
#line 358
c_rt_lib0clear(&___nl__im__259);
#line 358
c_rt_lib0clear(&___nl__im__260);
#line 358
c_rt_lib0clear(&___nl__im__261);
#line 358
c_rt_lib0clear(&___nl__im__262);
#line 358
c_rt_lib0clear(&___nl__im__263);
#line 358
c_rt_lib0clear(&___nl__im__264);
#line 358
c_rt_lib0clear(&___nl__im__265);
#line 358
c_rt_lib0clear(&___nl__im__266);
#line 358
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
#line 362
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 362
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 362
c_rt_lib0clear(&___nl__im__4);
#line 362
___nl__bool__3 = !___nl__bool__3;
#line 362
if(___nl__bool__3){ goto label_11;}
#line 362
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 362
c_rt_lib0clear(&___nl__im__0);
#line 362
c_rt_lib0clear(&___nl__im__1);
#line 362
//clear ___nl__bool__3;
#line 362
return ___nl__im__5;
#line 362
goto label_11;
#line 362
label_11:
;
#line 362
//clear ___nl__bool__3;
#line 362
c_rt_lib0clear(&___nl__im__5);
#line 363
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 363
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(422));
#line 363
c_rt_lib0clear(&___nl__im__8);
#line 363
___nl__bool__7 = !___nl__bool__6;
#line 363
if(___nl__bool__7){ goto label_22;}
#line 363
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 363
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(422));
#line 363
c_rt_lib0clear(&___nl__im__9);
#line 363
label_22:
;
#line 363
//clear ___nl__bool__7;
#line 363
___nl__bool__6 = !___nl__bool__6;
#line 363
if(___nl__bool__6){ goto label_40;}
#line 364
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_to_assign(___nl__im__0));
#line 364
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register(___nl__im__1));
#line 364
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 364
c_rt_lib0clear(&___nl__im__12);
#line 364
c_rt_lib0clear(&___nl__im__13);
#line 364
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 364
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 364
c_rt_lib0clear(&___nl__im__11);
#line 364
c_rt_lib0clear(&___nl__im__14);
#line 364
c_rt_lib0clear(&___nl__im__0);
#line 364
c_rt_lib0clear(&___nl__im__1);
#line 364
//clear ___nl__bool__6;
#line 364
return ___nl__im__10;
#line 365
goto label_40;
#line 365
label_40:
;
#line 365
//clear ___nl__bool__6;
#line 365
c_rt_lib0clear(&___nl__im__10);
#line 366
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 366
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(131));
#line 366
if(___nl__bool__16){ goto label_63;}
#line 368
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(405));
#line 368
if(___nl__bool__16){ goto label_80;}
#line 374
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(406));
#line 374
if(___nl__bool__16){ goto label_125;}
#line 376
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 376
if(___nl__bool__16){ goto label_143;}
#line 382
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(559));
#line 382
if(___nl__bool__16){ goto label_198;}
#line 388
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 388
if(___nl__bool__16){ goto label_232;}
#line 394
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(563));
#line 394
if(___nl__bool__16){ goto label_268;}
#line 396
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(128));
#line 396
if(___nl__bool__16){ goto label_274;}
#line 396
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 396
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 396
nl_die_arg(___nl__im__17);
#line 366
label_63:
;
#line 367
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 367
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 367
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__1));
#line 367
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 367
c_rt_lib0clear(&___nl__im__21);
#line 367
c_rt_lib0clear(&___nl__im__22);
#line 367
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 367
c_rt_lib0clear(&___nl__im__19);
#line 367
c_rt_lib0clear(&___nl__im__20);
#line 367
c_rt_lib0clear(&___nl__im__0);
#line 367
c_rt_lib0clear(&___nl__im__1);
#line 367
c_rt_lib0clear(&___nl__im__15);
#line 367
//clear ___nl__bool__16;
#line 367
c_rt_lib0clear(&___nl__im__17);
#line 367
return ___nl__im__18;
#line 368
goto label_280;
#line 368
label_80:
;
#line 369
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 369
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(131));
#line 369
c_rt_lib0clear(&___nl__im__24);
#line 369
___nl__bool__23 = !___nl__bool__23;
#line 369
if(___nl__bool__23){ goto label_104;}
#line 370
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 370
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value(___nl__im__1));
#line 370
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 370
c_rt_lib0clear(&___nl__im__27);
#line 370
c_rt_lib0clear(&___nl__im__28);
#line 370
c_rt_lib0move(&___nl__im__29,___get_global_string_const(775));
#line 370
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 370
c_rt_lib0clear(&___nl__im__26);
#line 370
c_rt_lib0clear(&___nl__im__29);
#line 370
c_rt_lib0clear(&___nl__im__0);
#line 370
c_rt_lib0clear(&___nl__im__1);
#line 370
c_rt_lib0clear(&___nl__im__15);
#line 370
//clear ___nl__bool__16;
#line 370
c_rt_lib0clear(&___nl__im__17);
#line 370
c_rt_lib0clear(&___nl__im__18);
#line 370
//clear ___nl__bool__23;
#line 370
return ___nl__im__25;
#line 371
goto label_120;
#line 371
label_104:
;
#line 372
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 372
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__1));
#line 372
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 372
c_rt_lib0clear(&___nl__im__31);
#line 372
c_rt_lib0clear(&___nl__im__32);
#line 372
c_rt_lib0clear(&___nl__im__0);
#line 372
c_rt_lib0clear(&___nl__im__1);
#line 372
c_rt_lib0clear(&___nl__im__15);
#line 372
//clear ___nl__bool__16;
#line 372
c_rt_lib0clear(&___nl__im__17);
#line 372
c_rt_lib0clear(&___nl__im__18);
#line 372
//clear ___nl__bool__23;
#line 372
c_rt_lib0clear(&___nl__im__25);
#line 372
return ___nl__im__30;
#line 373
goto label_120;
#line 373
label_120:
;
#line 373
//clear ___nl__bool__23;
#line 373
c_rt_lib0clear(&___nl__im__25);
#line 373
c_rt_lib0clear(&___nl__im__30);
#line 374
goto label_280;
#line 374
label_125:
;
#line 375
c_rt_lib0move(&___nl__im__34, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 375
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 375
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_register_value(___nl__im__1));
#line 375
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 375
c_rt_lib0clear(&___nl__im__36);
#line 375
c_rt_lib0clear(&___nl__im__37);
#line 375
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 375
c_rt_lib0clear(&___nl__im__34);
#line 375
c_rt_lib0clear(&___nl__im__35);
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
return ___nl__im__33;
#line 376
goto label_280;
#line 376
label_143:
;
#line 377
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 377
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(131));
#line 377
c_rt_lib0clear(&___nl__im__39);
#line 377
___nl__bool__38 = !___nl__bool__38;
#line 377
if(___nl__bool__38){ goto label_176;}
#line 378
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 378
c_rt_lib0move(&___nl__im__44,___get_global_string_const(271));
#line 378
c_rt_lib0move(&___nl__im__45,___get_global_string_const(601));
#line 378
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 378
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 378
c_rt_lib0clear(&___nl__im__47);
#line 378
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 378
c_rt_lib0clear(&___nl__im__44);
#line 378
c_rt_lib0clear(&___nl__im__45);
#line 378
c_rt_lib0clear(&___nl__im__46);
#line 378
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 378
c_rt_lib0clear(&___nl__im__42);
#line 378
c_rt_lib0clear(&___nl__im__43);
#line 378
c_rt_lib0move(&___nl__im__48,___get_global_string_const(442));
#line 378
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 378
c_rt_lib0clear(&___nl__im__41);
#line 378
c_rt_lib0clear(&___nl__im__48);
#line 378
c_rt_lib0clear(&___nl__im__0);
#line 378
c_rt_lib0clear(&___nl__im__1);
#line 378
c_rt_lib0clear(&___nl__im__15);
#line 378
//clear ___nl__bool__16;
#line 378
c_rt_lib0clear(&___nl__im__17);
#line 378
c_rt_lib0clear(&___nl__im__18);
#line 378
c_rt_lib0clear(&___nl__im__33);
#line 378
//clear ___nl__bool__38;
#line 378
return ___nl__im__40;
#line 379
goto label_193;
#line 379
label_176:
;
#line 380
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 380
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register_value(___nl__im__1));
#line 380
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 380
c_rt_lib0clear(&___nl__im__50);
#line 380
c_rt_lib0clear(&___nl__im__51);
#line 380
c_rt_lib0clear(&___nl__im__0);
#line 380
c_rt_lib0clear(&___nl__im__1);
#line 380
c_rt_lib0clear(&___nl__im__15);
#line 380
//clear ___nl__bool__16;
#line 380
c_rt_lib0clear(&___nl__im__17);
#line 380
c_rt_lib0clear(&___nl__im__18);
#line 380
c_rt_lib0clear(&___nl__im__33);
#line 380
//clear ___nl__bool__38;
#line 380
c_rt_lib0clear(&___nl__im__40);
#line 380
return ___nl__im__49;
#line 381
goto label_193;
#line 381
label_193:
;
#line 381
//clear ___nl__bool__38;
#line 381
c_rt_lib0clear(&___nl__im__40);
#line 381
c_rt_lib0clear(&___nl__im__49);
#line 382
goto label_280;
#line 382
label_198:
;
#line 382
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(559)));
#line 382
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 383
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 383
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(559));
#line 383
c_rt_lib0clear(&___nl__im__55);
#line 383
___nl__bool__54 = !___nl__bool__54;
#line 383
if(___nl__bool__54){ goto label_223;}
#line 384
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 384
c_rt_lib0move(&___nl__im__58, generator_js_priv0get_register_value(___nl__im__1));
#line 384
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 384
c_rt_lib0clear(&___nl__im__57);
#line 384
c_rt_lib0clear(&___nl__im__58);
#line 384
c_rt_lib0clear(&___nl__im__0);
#line 384
c_rt_lib0clear(&___nl__im__1);
#line 384
c_rt_lib0clear(&___nl__im__15);
#line 384
//clear ___nl__bool__16;
#line 384
c_rt_lib0clear(&___nl__im__17);
#line 384
c_rt_lib0clear(&___nl__im__18);
#line 384
c_rt_lib0clear(&___nl__im__33);
#line 384
c_rt_lib0clear(&___nl__im__52);
#line 384
c_rt_lib0clear(&___nl__im__53);
#line 384
//clear ___nl__bool__54;
#line 384
return ___nl__im__56;
#line 385
goto label_227;
#line 385
label_223:
;
#line 386
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 386
nl_die_arg(___nl__im__59);
#line 387
goto label_227;
#line 387
label_227:
;
#line 387
//clear ___nl__bool__54;
#line 387
c_rt_lib0clear(&___nl__im__56);
#line 387
c_rt_lib0clear(&___nl__im__59);
#line 388
goto label_280;
#line 388
label_232:
;
#line 388
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(127)));
#line 388
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 389
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 389
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(127));
#line 389
c_rt_lib0clear(&___nl__im__63);
#line 389
___nl__bool__62 = !___nl__bool__62;
#line 389
if(___nl__bool__62){ goto label_259;}
#line 390
c_rt_lib0move(&___nl__im__65, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 390
c_rt_lib0move(&___nl__im__66, generator_js_priv0get_register_value(___nl__im__1));
#line 390
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 390
c_rt_lib0clear(&___nl__im__65);
#line 390
c_rt_lib0clear(&___nl__im__66);
#line 390
c_rt_lib0clear(&___nl__im__0);
#line 390
c_rt_lib0clear(&___nl__im__1);
#line 390
c_rt_lib0clear(&___nl__im__15);
#line 390
//clear ___nl__bool__16;
#line 390
c_rt_lib0clear(&___nl__im__17);
#line 390
c_rt_lib0clear(&___nl__im__18);
#line 390
c_rt_lib0clear(&___nl__im__33);
#line 390
c_rt_lib0clear(&___nl__im__52);
#line 390
c_rt_lib0clear(&___nl__im__53);
#line 390
c_rt_lib0clear(&___nl__im__60);
#line 390
c_rt_lib0clear(&___nl__im__61);
#line 390
//clear ___nl__bool__62;
#line 390
return ___nl__im__64;
#line 391
goto label_263;
#line 391
label_259:
;
#line 392
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 392
nl_die_arg(___nl__im__67);
#line 393
goto label_263;
#line 393
label_263:
;
#line 393
//clear ___nl__bool__62;
#line 393
c_rt_lib0clear(&___nl__im__64);
#line 393
c_rt_lib0clear(&___nl__im__67);
#line 394
goto label_280;
#line 394
label_268:
;
#line 394
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(563)));
#line 394
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 395
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 395
nl_die_arg(___nl__im__70);
#line 396
goto label_280;
#line 396
label_274:
;
#line 396
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(128)));
#line 396
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 397
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 397
nl_die_arg(___nl__im__73);
#line 398
goto label_280;
#line 398
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
#line 402
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 402
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 402
if(___nl__bool__4){ goto label_20;}
#line 404
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(405));
#line 404
if(___nl__bool__4){ goto label_37;}
#line 406
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(406));
#line 406
if(___nl__bool__4){ goto label_53;}
#line 408
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 408
if(___nl__bool__4){ goto label_72;}
#line 410
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 410
if(___nl__bool__4){ goto label_99;}
#line 412
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 412
if(___nl__bool__4){ goto label_105;}
#line 414
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(563));
#line 414
if(___nl__bool__4){ goto label_111;}
#line 416
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 416
if(___nl__bool__4){ goto label_117;}
#line 416
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 416
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 416
nl_die_arg(___nl__im__5);
#line 402
label_20:
;
#line 403
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 403
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 403
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 403
c_rt_lib0clear(&___nl__im__8);
#line 403
c_rt_lib0clear(&___nl__im__9);
#line 403
c_rt_lib0move(&___nl__im__10,___get_global_string_const(442));
#line 403
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 403
c_rt_lib0clear(&___nl__im__7);
#line 403
c_rt_lib0clear(&___nl__im__10);
#line 403
c_rt_lib0clear(&___nl__im__0);
#line 403
c_rt_lib0clear(&___nl__im__1);
#line 403
c_rt_lib0clear(&___nl__im__3);
#line 403
//clear ___nl__bool__4;
#line 403
c_rt_lib0clear(&___nl__im__5);
#line 403
return ___nl__im__6;
#line 404
goto label_123;
#line 404
label_37:
;
#line 405
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 405
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 405
c_rt_lib0clear(&___nl__im__13);
#line 405
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 405
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 405
c_rt_lib0clear(&___nl__im__12);
#line 405
c_rt_lib0clear(&___nl__im__14);
#line 405
c_rt_lib0clear(&___nl__im__0);
#line 405
c_rt_lib0clear(&___nl__im__1);
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
//clear ___nl__bool__4;
#line 405
c_rt_lib0clear(&___nl__im__5);
#line 405
c_rt_lib0clear(&___nl__im__6);
#line 405
return ___nl__im__11;
#line 406
goto label_123;
#line 406
label_53:
;
#line 407
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 407
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 407
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 407
c_rt_lib0clear(&___nl__im__17);
#line 407
c_rt_lib0clear(&___nl__im__18);
#line 407
c_rt_lib0move(&___nl__im__19,___get_global_string_const(442));
#line 407
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 407
c_rt_lib0clear(&___nl__im__16);
#line 407
c_rt_lib0clear(&___nl__im__19);
#line 407
c_rt_lib0clear(&___nl__im__0);
#line 407
c_rt_lib0clear(&___nl__im__1);
#line 407
c_rt_lib0clear(&___nl__im__3);
#line 407
//clear ___nl__bool__4;
#line 407
c_rt_lib0clear(&___nl__im__5);
#line 407
c_rt_lib0clear(&___nl__im__6);
#line 407
c_rt_lib0clear(&___nl__im__11);
#line 407
return ___nl__im__15;
#line 408
goto label_123;
#line 408
label_72:
;
#line 409
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 409
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 409
if(___nl__bool__24){ goto label_78;}
#line 409
c_rt_lib0move(&___nl__im__23,___get_global_string_const(572));
#line 409
goto label_80;
#line 409
label_78:
;
#line 409
c_rt_lib0move(&___nl__im__23,___get_global_string_const(573));
#line 409
label_80:
;
#line 409
//clear ___nl__bool__24;
#line 409
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 409
c_rt_lib0clear(&___nl__im__22);
#line 409
c_rt_lib0clear(&___nl__im__23);
#line 409
c_rt_lib0move(&___nl__im__25,___get_global_string_const(442));
#line 409
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 409
c_rt_lib0clear(&___nl__im__21);
#line 409
c_rt_lib0clear(&___nl__im__25);
#line 409
c_rt_lib0clear(&___nl__im__0);
#line 409
c_rt_lib0clear(&___nl__im__1);
#line 409
c_rt_lib0clear(&___nl__im__3);
#line 409
//clear ___nl__bool__4;
#line 409
c_rt_lib0clear(&___nl__im__5);
#line 409
c_rt_lib0clear(&___nl__im__6);
#line 409
c_rt_lib0clear(&___nl__im__11);
#line 409
c_rt_lib0clear(&___nl__im__15);
#line 409
return ___nl__im__20;
#line 410
goto label_123;
#line 410
label_99:
;
#line 410
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(559)));
#line 410
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 411
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 411
nl_die_arg(___nl__im__28);
#line 412
goto label_123;
#line 412
label_105:
;
#line 412
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(127)));
#line 412
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 413
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 413
nl_die_arg(___nl__im__31);
#line 414
goto label_123;
#line 414
label_111:
;
#line 414
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(563)));
#line 414
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 415
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 415
nl_die_arg(___nl__im__34);
#line 416
goto label_123;
#line 416
label_117:
;
#line 416
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 416
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 417
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 417
nl_die_arg(___nl__im__37);
#line 418
goto label_123;
#line 418
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
#line 422
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 422
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 422
c_rt_lib0clear(&___nl__im__4);
#line 422
___nl__bool__3 = !___nl__bool__3;
#line 422
if(___nl__bool__3){ goto label_25;}
#line 423
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 423
c_rt_lib0move(&___nl__im__8,___get_global_string_const(243));
#line 424
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 424
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 424
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 424
c_rt_lib0clear(&___nl__im__10);
#line 424
c_rt_lib0clear(&___nl__im__11);
#line 424
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 424
c_rt_lib0clear(&___nl__im__7);
#line 424
c_rt_lib0clear(&___nl__im__8);
#line 424
c_rt_lib0clear(&___nl__im__9);
#line 424
c_rt_lib0move(&___nl__im__12,___get_global_string_const(442));
#line 424
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 424
c_rt_lib0clear(&___nl__im__6);
#line 424
c_rt_lib0clear(&___nl__im__12);
#line 424
c_rt_lib0clear(&___nl__im__0);
#line 424
c_rt_lib0clear(&___nl__im__1);
#line 424
//clear ___nl__bool__3;
#line 424
return ___nl__im__5;
#line 425
goto label_54;
#line 425
label_25:
;
#line 425
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 425
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(127));
#line 425
c_rt_lib0clear(&___nl__im__13);
#line 425
___nl__bool__3 = !___nl__bool__3;
#line 425
if(___nl__bool__3){ goto label_50;}
#line 426
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__0));
#line 426
c_rt_lib0move(&___nl__im__18,___get_global_string_const(776));
#line 426
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 426
c_rt_lib0clear(&___nl__im__17);
#line 426
c_rt_lib0clear(&___nl__im__18);
#line 426
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_reference(___nl__im__1));
#line 426
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 426
c_rt_lib0clear(&___nl__im__16);
#line 426
c_rt_lib0clear(&___nl__im__19);
#line 426
c_rt_lib0move(&___nl__im__20,___get_global_string_const(508));
#line 426
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 426
c_rt_lib0clear(&___nl__im__15);
#line 426
c_rt_lib0clear(&___nl__im__20);
#line 426
c_rt_lib0clear(&___nl__im__0);
#line 426
c_rt_lib0clear(&___nl__im__1);
#line 426
//clear ___nl__bool__3;
#line 426
c_rt_lib0clear(&___nl__im__5);
#line 426
return ___nl__im__14;
#line 427
goto label_54;
#line 427
label_50:
;
#line 428
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 428
nl_die_arg(___nl__im__21);
#line 429
goto label_54;
#line 429
label_54:
;
#line 429
//clear ___nl__bool__3;
#line 429
c_rt_lib0clear(&___nl__im__5);
#line 429
c_rt_lib0clear(&___nl__im__14);
#line 429
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
#line 433
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 433
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 433
c_rt_lib0clear(&___nl__im__4);
#line 433
___nl__bool__3 = !___nl__bool__3;
#line 433
if(___nl__bool__3){ goto label_29;}
#line 434
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 434
c_rt_lib0move(&___nl__im__9,___get_global_string_const(271));
#line 434
c_rt_lib0move(&___nl__im__10,___get_global_string_const(244));
#line 435
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__1));
#line 435
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__13));
#line 435
c_rt_lib0clear(&___nl__im__13);
#line 435
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 435
c_rt_lib0clear(&___nl__im__12);
#line 435
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 435
c_rt_lib0clear(&___nl__im__9);
#line 435
c_rt_lib0clear(&___nl__im__10);
#line 435
c_rt_lib0clear(&___nl__im__11);
#line 435
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 435
c_rt_lib0clear(&___nl__im__7);
#line 435
c_rt_lib0clear(&___nl__im__8);
#line 435
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 435
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 435
c_rt_lib0clear(&___nl__im__6);
#line 435
c_rt_lib0clear(&___nl__im__14);
#line 435
c_rt_lib0clear(&___nl__im__0);
#line 435
c_rt_lib0clear(&___nl__im__1);
#line 435
//clear ___nl__bool__3;
#line 435
return ___nl__im__5;
#line 436
goto label_54;
#line 436
label_29:
;
#line 436
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 436
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 436
c_rt_lib0clear(&___nl__im__15);
#line 436
___nl__bool__3 = !___nl__bool__3;
#line 436
if(___nl__bool__3){ goto label_50;}
#line 437
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 437
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__1));
#line 437
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 437
c_rt_lib0clear(&___nl__im__18);
#line 437
c_rt_lib0clear(&___nl__im__19);
#line 437
c_rt_lib0move(&___nl__im__20,___get_global_string_const(777));
#line 437
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 437
c_rt_lib0clear(&___nl__im__17);
#line 437
c_rt_lib0clear(&___nl__im__20);
#line 437
c_rt_lib0clear(&___nl__im__0);
#line 437
c_rt_lib0clear(&___nl__im__1);
#line 437
//clear ___nl__bool__3;
#line 437
c_rt_lib0clear(&___nl__im__5);
#line 437
return ___nl__im__16;
#line 438
goto label_54;
#line 438
label_50:
;
#line 439
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 439
nl_die_arg(___nl__im__21);
#line 440
goto label_54;
#line 440
label_54:
;
#line 440
//clear ___nl__bool__3;
#line 440
c_rt_lib0clear(&___nl__im__5);
#line 440
c_rt_lib0clear(&___nl__im__16);
#line 440
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
#line 444
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 444
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(206)));
#line 444
c_rt_lib0clear(&___nl__im__3);
#line 444
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 444
c_rt_lib0clear(&___nl__im__2);
#line 444
___nl__bool__1 = !___nl__bool__1;
#line 444
if(___nl__bool__1){ goto label_34;}
#line 445
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 445
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_to_assign(___nl__im__9));
#line 445
c_rt_lib0clear(&___nl__im__9);
#line 445
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 445
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__11));
#line 445
c_rt_lib0clear(&___nl__im__11);
#line 445
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 445
c_rt_lib0clear(&___nl__im__8);
#line 445
c_rt_lib0clear(&___nl__im__10);
#line 445
c_rt_lib0move(&___nl__im__12,___get_global_string_const(316));
#line 445
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 445
c_rt_lib0clear(&___nl__im__7);
#line 445
c_rt_lib0clear(&___nl__im__12);
#line 446
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 446
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__14));
#line 446
c_rt_lib0clear(&___nl__im__14);
#line 446
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 446
c_rt_lib0clear(&___nl__im__6);
#line 446
c_rt_lib0clear(&___nl__im__13);
#line 446
c_rt_lib0move(&___nl__im__15,___get_global_string_const(778));
#line 446
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 446
c_rt_lib0clear(&___nl__im__5);
#line 446
c_rt_lib0clear(&___nl__im__15);
#line 446
c_rt_lib0clear(&___nl__im__0);
#line 446
//clear ___nl__bool__1;
#line 446
return ___nl__im__4;
#line 447
goto label_74;
#line 447
label_34:
;
#line 447
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 447
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 447
c_rt_lib0clear(&___nl__im__17);
#line 447
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(131));
#line 447
c_rt_lib0clear(&___nl__im__16);
#line 447
___nl__bool__1 = !___nl__bool__1;
#line 447
if(___nl__bool__1){ goto label_70;}
#line 448
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 448
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_to_assign(___nl__im__23));
#line 448
c_rt_lib0clear(&___nl__im__23);
#line 448
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 448
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 448
c_rt_lib0clear(&___nl__im__25);
#line 448
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 448
c_rt_lib0clear(&___nl__im__22);
#line 448
c_rt_lib0clear(&___nl__im__24);
#line 449
c_rt_lib0move(&___nl__im__26,___get_global_string_const(766));
#line 449
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 449
c_rt_lib0clear(&___nl__im__21);
#line 449
c_rt_lib0clear(&___nl__im__26);
#line 449
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 449
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 449
c_rt_lib0clear(&___nl__im__28);
#line 449
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 449
c_rt_lib0clear(&___nl__im__20);
#line 449
c_rt_lib0clear(&___nl__im__27);
#line 449
c_rt_lib0move(&___nl__im__29,___get_global_string_const(508));
#line 449
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 449
c_rt_lib0clear(&___nl__im__19);
#line 449
c_rt_lib0clear(&___nl__im__29);
#line 449
c_rt_lib0clear(&___nl__im__0);
#line 449
//clear ___nl__bool__1;
#line 449
c_rt_lib0clear(&___nl__im__4);
#line 449
return ___nl__im__18;
#line 450
goto label_74;
#line 450
label_70:
;
#line 451
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 451
nl_die_arg(___nl__im__30);
#line 452
goto label_74;
#line 452
label_74:
;
#line 452
//clear ___nl__bool__1;
#line 452
c_rt_lib0clear(&___nl__im__4);
#line 452
c_rt_lib0clear(&___nl__im__18);
#line 452
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
#line 456
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 457
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 457
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value(___nl__im__4));
#line 457
c_rt_lib0clear(&___nl__im__4);
#line 457
c_rt_lib0move(&___nl__im__5,___get_global_string_const(779));
#line 457
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 457
c_rt_lib0clear(&___nl__im__3);
#line 457
c_rt_lib0clear(&___nl__im__5);
#line 458
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 458
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_to_assign(___nl__im__11));
#line 458
c_rt_lib0clear(&___nl__im__11);
#line 459
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 459
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_value(___nl__im__13));
#line 459
c_rt_lib0clear(&___nl__im__13);
#line 459
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 459
c_rt_lib0clear(&___nl__im__10);
#line 459
c_rt_lib0clear(&___nl__im__12);
#line 459
c_rt_lib0move(&___nl__im__14,___get_global_string_const(316));
#line 459
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 459
c_rt_lib0clear(&___nl__im__9);
#line 459
c_rt_lib0clear(&___nl__im__14);
#line 459
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__2));
#line 459
c_rt_lib0clear(&___nl__im__8);
#line 459
c_rt_lib0move(&___nl__im__15,___get_global_string_const(317));
#line 459
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 459
c_rt_lib0clear(&___nl__im__7);
#line 459
c_rt_lib0clear(&___nl__im__15);
#line 459
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 459
c_rt_lib0clear(&___nl__im__6);
#line 460
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(606)));
#line 460
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 460
c_rt_lib0clear(&___nl__im__17);
#line 460
___nl__bool__16 = !___nl__bool__16;
#line 460
if(___nl__bool__16){ goto label_38;}
#line 461
c_rt_lib0move(&___nl__im__18,___get_global_string_const(780));
#line 461
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__18));
#line 461
c_rt_lib0clear(&___nl__im__18);
#line 462
goto label_38;
#line 462
label_38:
;
#line 462
//clear ___nl__bool__16;
#line 463
c_rt_lib0move(&___nl__im__19,___get_global_string_const(442));
#line 463
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 463
c_rt_lib0clear(&___nl__im__19);
#line 464
c_rt_lib0clear(&___nl__im__0);
#line 464
c_rt_lib0clear(&___nl__im__2);
#line 464
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
#line 468
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 468
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 468
c_rt_lib0clear(&___nl__im__4);
#line 468
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 468
c_rt_lib0clear(&___nl__im__3);
#line 468
___nl__bool__2 = !___nl__bool__2;
#line 468
if(___nl__bool__2){ goto label_32;}
#line 469
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 469
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__8));
#line 469
c_rt_lib0clear(&___nl__im__8);
#line 470
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 470
c_rt_lib0move(&___nl__im__11,___get_global_string_const(272));
#line 470
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 470
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 470
c_rt_lib0clear(&___nl__im__14);
#line 470
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 470
c_rt_lib0clear(&___nl__im__13);
#line 470
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 470
c_rt_lib0clear(&___nl__im__10);
#line 470
c_rt_lib0clear(&___nl__im__11);
#line 470
c_rt_lib0clear(&___nl__im__12);
#line 470
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 470
c_rt_lib0clear(&___nl__im__7);
#line 470
c_rt_lib0clear(&___nl__im__9);
#line 470
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 470
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 470
c_rt_lib0clear(&___nl__im__6);
#line 470
c_rt_lib0clear(&___nl__im__15);
#line 470
c_rt_lib0clear(&___nl__im__0);
#line 470
//clear ___nl__bool__2;
#line 470
return ___nl__im__5;
#line 471
goto label_56;
#line 471
label_32:
;
#line 471
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 471
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 471
c_rt_lib0clear(&___nl__im__17);
#line 471
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 471
c_rt_lib0clear(&___nl__im__16);
#line 471
___nl__bool__2 = !___nl__bool__2;
#line 471
if(___nl__bool__2){ goto label_52;}
#line 472
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 472
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 472
c_rt_lib0clear(&___nl__im__20);
#line 472
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 472
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 472
c_rt_lib0clear(&___nl__im__19);
#line 472
c_rt_lib0clear(&___nl__im__21);
#line 472
c_rt_lib0clear(&___nl__im__0);
#line 472
//clear ___nl__bool__2;
#line 472
c_rt_lib0clear(&___nl__im__5);
#line 472
return ___nl__im__18;
#line 473
goto label_56;
#line 473
label_52:
;
#line 474
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 474
nl_die_arg(___nl__im__22);
#line 475
goto label_56;
#line 475
label_56:
;
#line 475
//clear ___nl__bool__2;
#line 475
c_rt_lib0clear(&___nl__im__5);
#line 475
c_rt_lib0clear(&___nl__im__18);
#line 475
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
#line 479
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 479
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 479
c_rt_lib0clear(&___nl__im__4);
#line 479
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 479
c_rt_lib0clear(&___nl__im__3);
#line 479
___nl__bool__2 = !___nl__bool__2;
#line 479
if(___nl__bool__2){ goto label_32;}
#line 480
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 480
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 480
c_rt_lib0clear(&___nl__im__8);
#line 481
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 481
c_rt_lib0move(&___nl__im__11,___get_global_string_const(275));
#line 481
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 481
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 481
c_rt_lib0clear(&___nl__im__14);
#line 481
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 481
c_rt_lib0clear(&___nl__im__13);
#line 481
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 481
c_rt_lib0clear(&___nl__im__10);
#line 481
c_rt_lib0clear(&___nl__im__11);
#line 481
c_rt_lib0clear(&___nl__im__12);
#line 481
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 481
c_rt_lib0clear(&___nl__im__7);
#line 481
c_rt_lib0clear(&___nl__im__9);
#line 481
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 481
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 481
c_rt_lib0clear(&___nl__im__6);
#line 481
c_rt_lib0clear(&___nl__im__15);
#line 481
c_rt_lib0clear(&___nl__im__0);
#line 481
//clear ___nl__bool__2;
#line 481
return ___nl__im__5;
#line 482
goto label_56;
#line 482
label_32:
;
#line 482
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 482
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 482
c_rt_lib0clear(&___nl__im__17);
#line 482
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 482
c_rt_lib0clear(&___nl__im__16);
#line 482
___nl__bool__2 = !___nl__bool__2;
#line 482
if(___nl__bool__2){ goto label_52;}
#line 483
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 483
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 483
c_rt_lib0clear(&___nl__im__20);
#line 483
c_rt_lib0move(&___nl__im__21,___get_global_string_const(781));
#line 483
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 483
c_rt_lib0clear(&___nl__im__19);
#line 483
c_rt_lib0clear(&___nl__im__21);
#line 483
c_rt_lib0clear(&___nl__im__0);
#line 483
//clear ___nl__bool__2;
#line 483
c_rt_lib0clear(&___nl__im__5);
#line 483
return ___nl__im__18;
#line 484
goto label_56;
#line 484
label_52:
;
#line 485
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 485
nl_die_arg(___nl__im__22);
#line 486
goto label_56;
#line 486
label_56:
;
#line 486
//clear ___nl__bool__2;
#line 486
c_rt_lib0clear(&___nl__im__5);
#line 486
c_rt_lib0clear(&___nl__im__18);
#line 486
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
#line 490
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 490
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 490
c_rt_lib0clear(&___nl__im__4);
#line 490
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 490
c_rt_lib0clear(&___nl__im__3);
#line 490
___nl__bool__2 = !___nl__bool__2;
#line 490
if(___nl__bool__2){ goto label_32;}
#line 491
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 491
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 491
c_rt_lib0clear(&___nl__im__8);
#line 492
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 492
c_rt_lib0move(&___nl__im__11,___get_global_string_const(274));
#line 492
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 492
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 492
c_rt_lib0clear(&___nl__im__14);
#line 492
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 492
c_rt_lib0clear(&___nl__im__13);
#line 492
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 492
c_rt_lib0clear(&___nl__im__10);
#line 492
c_rt_lib0clear(&___nl__im__11);
#line 492
c_rt_lib0clear(&___nl__im__12);
#line 492
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 492
c_rt_lib0clear(&___nl__im__7);
#line 492
c_rt_lib0clear(&___nl__im__9);
#line 492
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 492
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 492
c_rt_lib0clear(&___nl__im__6);
#line 492
c_rt_lib0clear(&___nl__im__15);
#line 492
c_rt_lib0clear(&___nl__im__0);
#line 492
//clear ___nl__bool__2;
#line 492
return ___nl__im__5;
#line 493
goto label_82;
#line 493
label_32:
;
#line 493
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 493
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 493
c_rt_lib0clear(&___nl__im__17);
#line 493
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 493
c_rt_lib0clear(&___nl__im__16);
#line 493
___nl__bool__2 = !___nl__bool__2;
#line 493
if(___nl__bool__2){ goto label_78;}
#line 494
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 494
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value(___nl__im__19));
#line 494
c_rt_lib0clear(&___nl__im__19);
#line 495
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 495
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_value_to_assign(___nl__im__27));
#line 495
c_rt_lib0clear(&___nl__im__27);
#line 496
c_rt_lib0move(&___nl__im__29,___get_global_string_const(282));
#line 496
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 496
c_rt_lib0clear(&___nl__im__29);
#line 496
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 496
c_rt_lib0clear(&___nl__im__26);
#line 496
c_rt_lib0clear(&___nl__im__28);
#line 496
c_rt_lib0move(&___nl__im__30,___get_global_string_const(782));
#line 496
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 496
c_rt_lib0clear(&___nl__im__25);
#line 496
c_rt_lib0clear(&___nl__im__30);
#line 496
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 496
c_rt_lib0clear(&___nl__im__24);
#line 496
c_rt_lib0move(&___nl__im__31,___get_global_string_const(783));
#line 496
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 496
c_rt_lib0clear(&___nl__im__23);
#line 496
c_rt_lib0clear(&___nl__im__31);
#line 496
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 496
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__33));
#line 496
c_rt_lib0clear(&___nl__im__33);
#line 496
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 496
c_rt_lib0clear(&___nl__im__22);
#line 496
c_rt_lib0clear(&___nl__im__32);
#line 496
c_rt_lib0move(&___nl__im__34,___get_global_string_const(784));
#line 496
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 496
c_rt_lib0clear(&___nl__im__21);
#line 496
c_rt_lib0clear(&___nl__im__34);
#line 496
c_rt_lib0clear(&___nl__im__0);
#line 496
//clear ___nl__bool__2;
#line 496
c_rt_lib0clear(&___nl__im__5);
#line 496
c_rt_lib0clear(&___nl__im__18);
#line 496
return ___nl__im__20;
#line 497
goto label_82;
#line 497
label_78:
;
#line 498
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 498
nl_die_arg(___nl__im__35);
#line 499
goto label_82;
#line 499
label_82:
;
#line 499
//clear ___nl__bool__2;
#line 499
c_rt_lib0clear(&___nl__im__5);
#line 499
c_rt_lib0clear(&___nl__im__18);
#line 499
c_rt_lib0clear(&___nl__im__20);
#line 499
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
#line 503
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 503
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 503
c_rt_lib0clear(&___nl__im__4);
#line 503
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 503
c_rt_lib0clear(&___nl__im__3);
#line 503
___nl__bool__2 = !___nl__bool__2;
#line 503
if(___nl__bool__2){ goto label_32;}
#line 504
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 504
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 504
c_rt_lib0clear(&___nl__im__8);
#line 505
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 505
c_rt_lib0move(&___nl__im__11,___get_global_string_const(273));
#line 505
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 505
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 505
c_rt_lib0clear(&___nl__im__14);
#line 505
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 505
c_rt_lib0clear(&___nl__im__13);
#line 505
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 505
c_rt_lib0clear(&___nl__im__10);
#line 505
c_rt_lib0clear(&___nl__im__11);
#line 505
c_rt_lib0clear(&___nl__im__12);
#line 505
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 505
c_rt_lib0clear(&___nl__im__7);
#line 505
c_rt_lib0clear(&___nl__im__9);
#line 505
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 505
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 505
c_rt_lib0clear(&___nl__im__6);
#line 505
c_rt_lib0clear(&___nl__im__15);
#line 505
c_rt_lib0clear(&___nl__im__0);
#line 505
//clear ___nl__bool__2;
#line 505
return ___nl__im__5;
#line 506
goto label_72;
#line 506
label_32:
;
#line 506
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 506
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 506
c_rt_lib0clear(&___nl__im__17);
#line 506
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 506
c_rt_lib0clear(&___nl__im__16);
#line 506
___nl__bool__2 = !___nl__bool__2;
#line 506
if(___nl__bool__2){ goto label_68;}
#line 507
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 507
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__23));
#line 507
c_rt_lib0clear(&___nl__im__23);
#line 508
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 508
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 508
c_rt_lib0clear(&___nl__im__25);
#line 508
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 508
c_rt_lib0clear(&___nl__im__22);
#line 508
c_rt_lib0clear(&___nl__im__24);
#line 508
c_rt_lib0move(&___nl__im__26,___get_global_string_const(785));
#line 508
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 508
c_rt_lib0clear(&___nl__im__21);
#line 508
c_rt_lib0clear(&___nl__im__26);
#line 508
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 508
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 508
c_rt_lib0clear(&___nl__im__28);
#line 508
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 508
c_rt_lib0clear(&___nl__im__20);
#line 508
c_rt_lib0clear(&___nl__im__27);
#line 508
c_rt_lib0move(&___nl__im__29,___get_global_string_const(786));
#line 508
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 508
c_rt_lib0clear(&___nl__im__19);
#line 508
c_rt_lib0clear(&___nl__im__29);
#line 508
c_rt_lib0clear(&___nl__im__0);
#line 508
//clear ___nl__bool__2;
#line 508
c_rt_lib0clear(&___nl__im__5);
#line 508
return ___nl__im__18;
#line 509
goto label_72;
#line 509
label_68:
;
#line 510
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 510
nl_die_arg(___nl__im__30);
#line 511
goto label_72;
#line 511
label_72:
;
#line 511
//clear ___nl__bool__2;
#line 511
c_rt_lib0clear(&___nl__im__5);
#line 511
c_rt_lib0clear(&___nl__im__18);
#line 511
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
#line 515
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 516
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 516
___nl__bool__3 = !___nl__bool__3;
#line 516
if(___nl__bool__3){ goto label_36;}
#line 517
c_rt_lib0move(&___nl__im__6,___get_global_string_const(127));
#line 517
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 517
c_rt_lib0clear(&___nl__im__6);
#line 517
c_rt_lib0move(&___nl__im__7,___get_global_string_const(787));
#line 517
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 517
c_rt_lib0clear(&___nl__im__5);
#line 517
c_rt_lib0clear(&___nl__im__7);
#line 517
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 517
c_rt_lib0clear(&___nl__im__4);
#line 518
___nl__int__9 = 0;
#line 518
___nl__int__10 = 1;
#line 518
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 518
label_16:
;
#line 518
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 518
if(___nl__bool__12){ goto label_31;}
#line 518
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 518
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 518
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_register_value(___nl__im__8));
#line 518
c_rt_lib0move(&___nl__im__16,___get_global_string_const(314));
#line 518
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 518
c_rt_lib0clear(&___nl__im__15);
#line 518
c_rt_lib0clear(&___nl__im__16);
#line 518
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 518
c_rt_lib0clear(&___nl__im__14);
#line 518
c_rt_lib0clear(&___nl__im__8);
#line 518
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 518
goto label_16;
#line 518
label_31:
;
#line 519
c_rt_lib0move(&___nl__im__17,___get_global_string_const(500));
#line 519
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 519
c_rt_lib0clear(&___nl__im__17);
#line 520
goto label_70;
#line 520
label_36:
;
#line 520
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(127));
#line 520
___nl__bool__3 = !___nl__bool__3;
#line 520
if(___nl__bool__3){ goto label_66;}
#line 521
c_rt_lib0move(&___nl__im__18,___get_global_string_const(316));
#line 521
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 521
c_rt_lib0clear(&___nl__im__18);
#line 522
___nl__int__20 = 0;
#line 522
___nl__int__21 = 1;
#line 522
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 522
label_46:
;
#line 522
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 522
if(___nl__bool__23){ goto label_61;}
#line 522
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 522
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 522
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_reference(___nl__im__19));
#line 522
c_rt_lib0move(&___nl__im__27,___get_global_string_const(314));
#line 522
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 522
c_rt_lib0clear(&___nl__im__26);
#line 522
c_rt_lib0clear(&___nl__im__27);
#line 522
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 522
c_rt_lib0clear(&___nl__im__25);
#line 522
c_rt_lib0clear(&___nl__im__19);
#line 522
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 522
goto label_46;
#line 522
label_61:
;
#line 523
c_rt_lib0move(&___nl__im__28,___get_global_string_const(317));
#line 523
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 523
c_rt_lib0clear(&___nl__im__28);
#line 524
goto label_70;
#line 524
label_66:
;
#line 525
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 525
nl_die_arg(___nl__im__29);
#line 526
goto label_70;
#line 526
label_70:
;
#line 526
//clear ___nl__bool__3;
#line 526
c_rt_lib0clear(&___nl__im__8);
#line 526
//clear ___nl__int__9;
#line 526
//clear ___nl__int__10;
#line 526
//clear ___nl__int__11;
#line 526
//clear ___nl__bool__12;
#line 526
c_rt_lib0clear(&___nl__im__13);
#line 526
c_rt_lib0clear(&___nl__im__19);
#line 526
//clear ___nl__int__20;
#line 526
//clear ___nl__int__21;
#line 526
//clear ___nl__int__22;
#line 526
//clear ___nl__bool__23;
#line 526
c_rt_lib0clear(&___nl__im__24);
#line 526
c_rt_lib0clear(&___nl__im__29);
#line 527
c_rt_lib0clear(&___nl__im__0);
#line 527
c_rt_lib0clear(&___nl__im__1);
#line 527
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
#line 531
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 531
c_rt_lib0move(&___nl__im__4,___get_global_string_const(788));
#line 531
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 531
c_rt_lib0clear(&___nl__im__3);
#line 531
c_rt_lib0clear(&___nl__im__4);
#line 531
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 531
c_rt_lib0clear(&___nl__im__2);
#line 531
c_rt_lib0clear(&___nl__im__0);
#line 531
return ___nl__im__1;
#line 531
c_rt_lib0clear(&___nl__im__0);
#line 531
c_rt_lib0clear(&___nl__im__1);
#line 531
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
#line 535
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 535
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 535
c_rt_lib0clear(&___nl__im__3);
#line 536
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 536
c_rt_lib0move(&___nl__im__6,___get_global_string_const(389));
#line 536
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 536
c_rt_lib0clear(&___nl__im__5);
#line 536
c_rt_lib0clear(&___nl__im__6);
#line 536
if(___nl__bool__4){ goto label_14;}
#line 536
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 536
c_rt_lib0move(&___nl__im__8,___get_global_string_const(379));
#line 536
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 536
c_rt_lib0clear(&___nl__im__7);
#line 536
c_rt_lib0clear(&___nl__im__8);
#line 536
label_14:
;
#line 536
if(___nl__bool__4){ goto label_21;}
#line 536
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 536
c_rt_lib0move(&___nl__im__10,___get_global_string_const(381));
#line 536
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 536
c_rt_lib0clear(&___nl__im__9);
#line 536
c_rt_lib0clear(&___nl__im__10);
#line 536
label_21:
;
#line 536
if(___nl__bool__4){ goto label_28;}
#line 536
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 536
c_rt_lib0move(&___nl__im__12,___get_global_string_const(387));
#line 536
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 536
c_rt_lib0clear(&___nl__im__11);
#line 536
c_rt_lib0clear(&___nl__im__12);
#line 536
label_28:
;
#line 536
if(___nl__bool__4){ goto label_35;}
#line 536
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 536
c_rt_lib0move(&___nl__im__14,___get_global_string_const(383));
#line 536
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 536
c_rt_lib0clear(&___nl__im__13);
#line 536
c_rt_lib0clear(&___nl__im__14);
#line 536
label_35:
;
#line 536
if(___nl__bool__4){ goto label_42;}
#line 537
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 537
c_rt_lib0move(&___nl__im__16,___get_global_string_const(385));
#line 537
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 537
c_rt_lib0clear(&___nl__im__15);
#line 537
c_rt_lib0clear(&___nl__im__16);
#line 537
label_42:
;
#line 537
___nl__bool__4 = !___nl__bool__4;
#line 537
if(___nl__bool__4){ goto label_69;}
#line 538
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 538
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__18));
#line 538
c_rt_lib0clear(&___nl__im__18);
#line 539
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 539
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 539
c_rt_lib0clear(&___nl__im__20);
#line 540
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 540
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 540
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 540
c_rt_lib0clear(&___nl__im__24);
#line 540
c_rt_lib0clear(&___nl__im__25);
#line 540
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 540
c_rt_lib0clear(&___nl__im__23);
#line 540
c_rt_lib0move(&___nl__im__26,___get_global_string_const(442));
#line 540
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 540
c_rt_lib0clear(&___nl__im__22);
#line 540
c_rt_lib0clear(&___nl__im__26);
#line 540
c_rt_lib0clear(&___nl__im__0);
#line 540
c_rt_lib0clear(&___nl__im__2);
#line 540
//clear ___nl__bool__4;
#line 540
c_rt_lib0clear(&___nl__im__17);
#line 540
c_rt_lib0clear(&___nl__im__19);
#line 540
return ___nl__im__21;
#line 541
goto label_181;
#line 541
label_69:
;
#line 541
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 541
c_rt_lib0move(&___nl__im__28,___get_global_string_const(371));
#line 541
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 541
c_rt_lib0clear(&___nl__im__27);
#line 541
c_rt_lib0clear(&___nl__im__28);
#line 541
if(___nl__bool__4){ goto label_81;}
#line 541
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 541
c_rt_lib0move(&___nl__im__30,___get_global_string_const(372));
#line 541
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 541
c_rt_lib0clear(&___nl__im__29);
#line 541
c_rt_lib0clear(&___nl__im__30);
#line 541
label_81:
;
#line 541
___nl__bool__4 = !___nl__bool__4;
#line 541
if(___nl__bool__4){ goto label_105;}
#line 542
c_rt_lib0move(&___nl__im__33,___get_global_string_const(271));
#line 542
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 542
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 542
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 542
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 542
c_rt_lib0clear(&___nl__im__36);
#line 542
c_rt_lib0clear(&___nl__im__37);
#line 542
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 542
c_rt_lib0clear(&___nl__im__33);
#line 542
c_rt_lib0clear(&___nl__im__34);
#line 542
c_rt_lib0clear(&___nl__im__35);
#line 542
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 542
c_rt_lib0clear(&___nl__im__32);
#line 542
c_rt_lib0clear(&___nl__im__0);
#line 542
c_rt_lib0clear(&___nl__im__2);
#line 542
//clear ___nl__bool__4;
#line 542
c_rt_lib0clear(&___nl__im__17);
#line 542
c_rt_lib0clear(&___nl__im__19);
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 542
return ___nl__im__31;
#line 543
goto label_181;
#line 543
label_105:
;
#line 543
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 543
c_rt_lib0move(&___nl__im__39,___get_global_string_const(110));
#line 543
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 543
c_rt_lib0clear(&___nl__im__38);
#line 543
c_rt_lib0clear(&___nl__im__39);
#line 543
___nl__bool__4 = !___nl__bool__4;
#line 543
if(___nl__bool__4){ goto label_147;}
#line 544
c_rt_lib0move(&___nl__im__43,___get_global_string_const(271));
#line 544
c_rt_lib0move(&___nl__im__44,___get_global_string_const(789));
#line 545
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 545
c_rt_lib0move(&___nl__im__47, generator_js_priv0get_register_value(___nl__im__48));
#line 545
c_rt_lib0clear(&___nl__im__48);
#line 545
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__47));
#line 545
c_rt_lib0clear(&___nl__im__47);
#line 545
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 545
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value(___nl__im__51));
#line 545
c_rt_lib0clear(&___nl__im__51);
#line 545
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__50));
#line 545
c_rt_lib0clear(&___nl__im__50);
#line 545
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 545
c_rt_lib0clear(&___nl__im__46);
#line 545
c_rt_lib0clear(&___nl__im__49);
#line 545
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 545
c_rt_lib0clear(&___nl__im__43);
#line 545
c_rt_lib0clear(&___nl__im__44);
#line 545
c_rt_lib0clear(&___nl__im__45);
#line 545
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 545
c_rt_lib0clear(&___nl__im__42);
#line 545
c_rt_lib0move(&___nl__im__52,___get_global_string_const(442));
#line 545
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 545
c_rt_lib0clear(&___nl__im__41);
#line 545
c_rt_lib0clear(&___nl__im__52);
#line 545
c_rt_lib0clear(&___nl__im__0);
#line 545
c_rt_lib0clear(&___nl__im__2);
#line 545
//clear ___nl__bool__4;
#line 545
c_rt_lib0clear(&___nl__im__17);
#line 545
c_rt_lib0clear(&___nl__im__19);
#line 545
c_rt_lib0clear(&___nl__im__21);
#line 545
c_rt_lib0clear(&___nl__im__31);
#line 545
return ___nl__im__40;
#line 546
goto label_181;
#line 546
label_147:
;
#line 547
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 547
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register_value(___nl__im__54));
#line 547
c_rt_lib0clear(&___nl__im__54);
#line 548
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 548
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value(___nl__im__56));
#line 548
c_rt_lib0clear(&___nl__im__56);
#line 549
c_rt_lib0move(&___nl__im__62,___get_global_string_const(790));
#line 549
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 549
c_rt_lib0clear(&___nl__im__62);
#line 549
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 549
c_rt_lib0clear(&___nl__im__61);
#line 549
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 549
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 549
c_rt_lib0clear(&___nl__im__60);
#line 549
c_rt_lib0clear(&___nl__im__63);
#line 549
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 549
c_rt_lib0clear(&___nl__im__59);
#line 549
c_rt_lib0move(&___nl__im__64,___get_global_string_const(508));
#line 549
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 549
c_rt_lib0clear(&___nl__im__58);
#line 549
c_rt_lib0clear(&___nl__im__64);
#line 549
c_rt_lib0clear(&___nl__im__0);
#line 549
c_rt_lib0clear(&___nl__im__2);
#line 549
//clear ___nl__bool__4;
#line 549
c_rt_lib0clear(&___nl__im__17);
#line 549
c_rt_lib0clear(&___nl__im__19);
#line 549
c_rt_lib0clear(&___nl__im__21);
#line 549
c_rt_lib0clear(&___nl__im__31);
#line 549
c_rt_lib0clear(&___nl__im__40);
#line 549
c_rt_lib0clear(&___nl__im__53);
#line 549
c_rt_lib0clear(&___nl__im__55);
#line 549
return ___nl__im__57;
#line 550
goto label_181;
#line 550
label_181:
;
#line 550
//clear ___nl__bool__4;
#line 550
c_rt_lib0clear(&___nl__im__17);
#line 550
c_rt_lib0clear(&___nl__im__19);
#line 550
c_rt_lib0clear(&___nl__im__21);
#line 550
c_rt_lib0clear(&___nl__im__31);
#line 550
c_rt_lib0clear(&___nl__im__40);
#line 550
c_rt_lib0clear(&___nl__im__53);
#line 550
c_rt_lib0clear(&___nl__im__55);
#line 550
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
#line 556
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 556
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 556
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 556
c_rt_lib0clear(&___nl__im__7);
#line 556
c_rt_lib0clear(&___nl__im__8);
#line 556
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 556
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 556
c_rt_lib0clear(&___nl__im__6);
#line 556
c_rt_lib0clear(&___nl__im__9);
#line 557
___nl__int__10 = 0;
#line 558
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 559
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 560
___nl__int__14 = 0;
#line 560
___nl__int__15 = 1;
#line 560
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 560
label_15:
;
#line 560
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 560
if(___nl__bool__17){ goto label_58;}
#line 560
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 560
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 561
___nl__int__20 = 0;
#line 561
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 561
//clear ___nl__int__20;
#line 561
___nl__bool__19 = !___nl__bool__19;
#line 561
___nl__bool__19 = !___nl__bool__19;
#line 561
if(___nl__bool__19){ goto label_30;}
#line 561
c_rt_lib0move(&___nl__im__21,___get_global_string_const(314));
#line 561
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 561
c_rt_lib0clear(&___nl__im__21);
#line 561
goto label_30;
#line 561
label_30:
;
#line 561
//clear ___nl__bool__19;
#line 562
___nl__int__22 = 1;
#line 562
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 562
//clear ___nl__int__22;
#line 563
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 563
if(___nl__bool__23){ goto label_42;}
#line 565
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(225));
#line 565
if(___nl__bool__23){ goto label_47;}
#line 565
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 565
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 565
nl_die_arg(___nl__im__24);
#line 563
label_42:
;
#line 563
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 563
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 564
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 565
goto label_54;
#line 565
label_47:
;
#line 565
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(225)));
#line 565
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 566
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value(___nl__im__27));
#line 566
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 566
c_rt_lib0clear(&___nl__im__29);
#line 567
goto label_54;
#line 567
label_54:
;
#line 567
c_rt_lib0clear(&___nl__im__13);
#line 568
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 568
goto label_15;
#line 568
label_58:
;
#line 569
___nl__int__30 = 1;
#line 569
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 569
//clear ___nl__int__30;
#line 570
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 570
c_rt_lib0move(&___nl__im__34,___get_global_string_const(508));
#line 570
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 570
c_rt_lib0clear(&___nl__im__33);
#line 570
c_rt_lib0clear(&___nl__im__34);
#line 570
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 570
c_rt_lib0clear(&___nl__im__32);
#line 570
c_rt_lib0clear(&___nl__im__0);
#line 570
c_rt_lib0clear(&___nl__im__1);
#line 570
c_rt_lib0clear(&___nl__im__2);
#line 570
c_rt_lib0clear(&___nl__im__3);
#line 570
c_rt_lib0clear(&___nl__im__5);
#line 570
//clear ___nl__int__10;
#line 570
c_rt_lib0clear(&___nl__im__11);
#line 570
c_rt_lib0clear(&___nl__im__12);
#line 570
c_rt_lib0clear(&___nl__im__13);
#line 570
//clear ___nl__int__14;
#line 570
//clear ___nl__int__15;
#line 570
//clear ___nl__int__16;
#line 570
//clear ___nl__bool__17;
#line 570
c_rt_lib0clear(&___nl__im__18);
#line 570
//clear ___nl__bool__23;
#line 570
c_rt_lib0clear(&___nl__im__24);
#line 570
c_rt_lib0clear(&___nl__im__25);
#line 570
c_rt_lib0clear(&___nl__im__26);
#line 570
c_rt_lib0clear(&___nl__im__27);
#line 570
c_rt_lib0clear(&___nl__im__28);
#line 570
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
#line 575
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 575
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value_to_assign(___nl__im__4));
#line 575
c_rt_lib0clear(&___nl__im__4);
#line 576
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 576
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(206)));
#line 576
c_rt_lib0clear(&___nl__im__7);
#line 576
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 576
c_rt_lib0clear(&___nl__im__6);
#line 576
___nl__bool__5 = !___nl__bool__5;
#line 576
if(___nl__bool__5){ goto label_73;}
#line 577
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 577
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(279));
#line 577
if(___nl__bool__9){ goto label_18;}
#line 580
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(352));
#line 580
if(___nl__bool__9){ goto label_52;}
#line 580
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 580
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 580
nl_die_arg(___nl__im__10);
#line 577
label_18:
;
#line 577
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(279)));
#line 577
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 578
c_rt_lib0move(&___nl__im__16,___get_global_string_const(271));
#line 578
c_rt_lib0move(&___nl__im__17,___get_global_string_const(580));
#line 579
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 579
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 579
c_rt_lib0clear(&___nl__im__21);
#line 579
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__20));
#line 579
c_rt_lib0clear(&___nl__im__20);
#line 579
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__11));
#line 579
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 579
c_rt_lib0clear(&___nl__im__19);
#line 579
c_rt_lib0clear(&___nl__im__22);
#line 579
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 579
c_rt_lib0clear(&___nl__im__16);
#line 579
c_rt_lib0clear(&___nl__im__17);
#line 579
c_rt_lib0clear(&___nl__im__18);
#line 579
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 579
c_rt_lib0clear(&___nl__im__15);
#line 579
c_rt_lib0move(&___nl__im__23,___get_global_string_const(442));
#line 579
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 579
c_rt_lib0clear(&___nl__im__14);
#line 579
c_rt_lib0clear(&___nl__im__23);
#line 579
c_rt_lib0clear(&___nl__im__0);
#line 579
c_rt_lib0clear(&___nl__im__3);
#line 579
//clear ___nl__bool__5;
#line 579
c_rt_lib0clear(&___nl__im__8);
#line 579
//clear ___nl__bool__9;
#line 579
c_rt_lib0clear(&___nl__im__10);
#line 579
c_rt_lib0clear(&___nl__im__11);
#line 579
c_rt_lib0clear(&___nl__im__12);
#line 579
return ___nl__im__13;
#line 580
goto label_71;
#line 580
label_52:
;
#line 581
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 581
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 581
c_rt_lib0clear(&___nl__im__27);
#line 581
c_rt_lib0move(&___nl__im__25, generator_js_priv0get_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 581
c_rt_lib0clear(&___nl__im__26);
#line 581
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 581
c_rt_lib0clear(&___nl__im__25);
#line 581
c_rt_lib0clear(&___nl__im__0);
#line 581
c_rt_lib0clear(&___nl__im__3);
#line 581
//clear ___nl__bool__5;
#line 581
c_rt_lib0clear(&___nl__im__8);
#line 581
//clear ___nl__bool__9;
#line 581
c_rt_lib0clear(&___nl__im__10);
#line 581
c_rt_lib0clear(&___nl__im__11);
#line 581
c_rt_lib0clear(&___nl__im__12);
#line 581
c_rt_lib0clear(&___nl__im__13);
#line 581
return ___nl__im__24;
#line 582
goto label_71;
#line 582
label_71:
;
#line 583
goto label_137;
#line 583
label_73:
;
#line 583
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 583
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(206)));
#line 583
c_rt_lib0clear(&___nl__im__29);
#line 583
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(563));
#line 583
c_rt_lib0clear(&___nl__im__28);
#line 583
___nl__bool__5 = !___nl__bool__5;
#line 583
if(___nl__bool__5){ goto label_133;}
#line 584
c_rt_lib0move(&___nl__im__31,___get_global_string_const(791));
#line 584
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(567)));
#line 584
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 584
c_rt_lib0clear(&___nl__im__33);
#line 584
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 584
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 584
c_rt_lib0clear(&___nl__im__31);
#line 584
//clear ___nl__int__32;
#line 584
c_rt_lib0clear(&___nl__string__34);
#line 584
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 584
c_rt_lib0clear(&___nl__im__30);
#line 585
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 585
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(279));
#line 585
if(___nl__bool__36){ goto label_100;}
#line 587
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(352));
#line 587
if(___nl__bool__36){ goto label_111;}
#line 587
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 587
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 587
nl_die_arg(___nl__im__37);
#line 585
label_100:
;
#line 585
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(279)));
#line 585
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 586
c_rt_lib0move(&___nl__im__41,___get_global_string_const(792));
#line 586
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_reference(___nl__im__38));
#line 586
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 586
c_rt_lib0clear(&___nl__im__41);
#line 586
c_rt_lib0clear(&___nl__im__42);
#line 586
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 586
c_rt_lib0clear(&___nl__im__40);
#line 587
goto label_113;
#line 587
label_111:
;
#line 588
goto label_113;
#line 588
label_113:
;
#line 589
c_rt_lib0move(&___nl__im__43,___get_global_string_const(307));
#line 589
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 589
c_rt_lib0clear(&___nl__im__43);
#line 590
c_rt_lib0clear(&___nl__im__0);
#line 590
//clear ___nl__bool__5;
#line 590
c_rt_lib0clear(&___nl__im__8);
#line 590
//clear ___nl__bool__9;
#line 590
c_rt_lib0clear(&___nl__im__10);
#line 590
c_rt_lib0clear(&___nl__im__11);
#line 590
c_rt_lib0clear(&___nl__im__12);
#line 590
c_rt_lib0clear(&___nl__im__13);
#line 590
c_rt_lib0clear(&___nl__im__24);
#line 590
c_rt_lib0clear(&___nl__im__35);
#line 590
//clear ___nl__bool__36;
#line 590
c_rt_lib0clear(&___nl__im__37);
#line 590
c_rt_lib0clear(&___nl__im__38);
#line 590
c_rt_lib0clear(&___nl__im__39);
#line 590
return ___nl__im__3;
#line 591
goto label_137;
#line 591
label_133:
;
#line 592
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 592
nl_die_arg(___nl__im__44);
#line 593
goto label_137;
#line 593
label_137:
;
#line 593
//clear ___nl__bool__5;
#line 593
c_rt_lib0clear(&___nl__im__8);
#line 593
//clear ___nl__bool__9;
#line 593
c_rt_lib0clear(&___nl__im__10);
#line 593
c_rt_lib0clear(&___nl__im__11);
#line 593
c_rt_lib0clear(&___nl__im__12);
#line 593
c_rt_lib0clear(&___nl__im__13);
#line 593
c_rt_lib0clear(&___nl__im__24);
#line 593
c_rt_lib0clear(&___nl__im__35);
#line 593
//clear ___nl__bool__36;
#line 593
c_rt_lib0clear(&___nl__im__37);
#line 593
c_rt_lib0clear(&___nl__im__38);
#line 593
c_rt_lib0clear(&___nl__im__39);
#line 593
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
#line 598
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 598
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(131));
#line 598
c_rt_lib0clear(&___nl__im__7);
#line 598
___nl__bool__6 = !___nl__bool__6;
#line 598
if(___nl__bool__6){ goto label_33;}
#line 599
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 599
c_rt_lib0move(&___nl__im__12,___get_global_string_const(271));
#line 599
c_rt_lib0move(&___nl__im__13,___get_global_string_const(237));
#line 600
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 600
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_str_imm(___nl__im__2, ___ref___im__5));
#line 600
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__17));
#line 600
c_rt_lib0clear(&___nl__im__17);
#line 600
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 600
c_rt_lib0clear(&___nl__im__15);
#line 600
c_rt_lib0clear(&___nl__im__16);
#line 600
c_rt_lib0move(&___nl__im__11, generator_js_priv0get_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 600
c_rt_lib0clear(&___nl__im__12);
#line 600
c_rt_lib0clear(&___nl__im__13);
#line 600
c_rt_lib0clear(&___nl__im__14);
#line 600
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 600
c_rt_lib0clear(&___nl__im__10);
#line 600
c_rt_lib0clear(&___nl__im__11);
#line 600
c_rt_lib0move(&___nl__im__18,___get_global_string_const(442));
#line 600
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 600
c_rt_lib0clear(&___nl__im__9);
#line 600
c_rt_lib0clear(&___nl__im__18);
#line 600
c_rt_lib0clear(&___nl__im__0);
#line 600
c_rt_lib0clear(&___nl__im__1);
#line 600
c_rt_lib0clear(&___nl__im__2);
#line 600
//clear ___nl__int__3;
#line 600
//clear ___nl__bool__6;
#line 600
return ___nl__im__8;
#line 601
goto label_64;
#line 601
label_33:
;
#line 601
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 601
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(563));
#line 601
c_rt_lib0clear(&___nl__im__19);
#line 601
___nl__bool__6 = !___nl__bool__6;
#line 601
if(___nl__bool__6){ goto label_60;}
#line 602
c_rt_lib0move(&___nl__im__23, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 602
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__1));
#line 602
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 602
c_rt_lib0clear(&___nl__im__23);
#line 602
c_rt_lib0clear(&___nl__im__24);
#line 602
c_rt_lib0move(&___nl__im__25,___get_global_string_const(793));
#line 602
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 602
c_rt_lib0clear(&___nl__im__22);
#line 602
c_rt_lib0clear(&___nl__im__25);
#line 602
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 602
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 602
c_rt_lib0clear(&___nl__im__21);
#line 602
c_rt_lib0clear(&___nl__string__26);
#line 602
c_rt_lib0clear(&___nl__im__0);
#line 602
c_rt_lib0clear(&___nl__im__1);
#line 602
c_rt_lib0clear(&___nl__im__2);
#line 602
//clear ___nl__int__3;
#line 602
//clear ___nl__bool__6;
#line 602
c_rt_lib0clear(&___nl__im__8);
#line 602
return ___nl__im__20;
#line 603
goto label_64;
#line 603
label_60:
;
#line 604
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 604
nl_die_arg(___nl__im__27);
#line 605
goto label_64;
#line 605
label_64:
;
#line 605
//clear ___nl__bool__6;
#line 605
c_rt_lib0clear(&___nl__im__8);
#line 605
c_rt_lib0clear(&___nl__im__20);
#line 605
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
#line 610
c_rt_lib0move(&___nl__im__9,___get_global_string_const(794));
#line 610
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 610
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 610
c_rt_lib0clear(&___nl__im__9);
#line 610
c_rt_lib0clear(&___nl__string__10);
#line 610
c_rt_lib0move(&___nl__im__11,___get_global_string_const(107));
#line 610
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 610
c_rt_lib0clear(&___nl__im__8);
#line 610
c_rt_lib0clear(&___nl__im__11);
#line 610
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 610
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 610
c_rt_lib0clear(&___nl__im__7);
#line 610
c_rt_lib0clear(&___nl__string__12);
#line 611
c_rt_lib0move(&___nl__im__19,___get_global_string_const(729));
#line 611
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 611
c_rt_lib0clear(&___nl__im__19);
#line 611
c_rt_lib0move(&___nl__im__20,___get_global_string_const(795));
#line 611
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 611
c_rt_lib0clear(&___nl__im__18);
#line 611
c_rt_lib0clear(&___nl__im__20);
#line 611
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 611
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 611
c_rt_lib0clear(&___nl__im__22);
#line 611
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 611
c_rt_lib0clear(&___nl__im__17);
#line 611
c_rt_lib0clear(&___nl__im__21);
#line 611
c_rt_lib0move(&___nl__im__23,___get_global_string_const(457));
#line 611
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 611
c_rt_lib0clear(&___nl__im__16);
#line 611
c_rt_lib0clear(&___nl__im__23);
#line 611
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__3));
#line 611
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 611
c_rt_lib0clear(&___nl__im__15);
#line 611
c_rt_lib0clear(&___nl__im__24);
#line 611
c_rt_lib0move(&___nl__im__25,___get_global_string_const(508));
#line 611
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 611
c_rt_lib0clear(&___nl__im__14);
#line 611
c_rt_lib0clear(&___nl__im__25);
#line 611
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 611
c_rt_lib0clear(&___nl__im__13);
#line 612
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 613
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 613
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 613
c_rt_lib0clear(&___nl__im__28);
#line 613
c_rt_lib0move(&___nl__im__29,___get_global_string_const(760));
#line 613
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 613
c_rt_lib0clear(&___nl__im__27);
#line 613
c_rt_lib0clear(&___nl__im__29);
#line 613
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 613
c_rt_lib0clear(&___nl__im__26);
#line 614
c_rt_lib0move(&___nl__im__31,___get_global_string_const(762));
#line 614
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 614
c_rt_lib0clear(&___nl__im__31);
#line 614
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 614
c_rt_lib0clear(&___nl__im__30);
#line 614
c_rt_lib0clear(&___nl__im__3);
#line 614
//clear ___nl__int__4;
#line 614
//clear ___nl__int__5;
#line 614
c_rt_lib0clear(&___nl__im__6);
#line 614
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
#line 620
___nl__int__4 = 0;
#line 621
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 622
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 623
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 623
c_rt_lib0move(&___nl__im__13,___get_global_string_const(110));
#line 623
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 623
c_rt_lib0clear(&___nl__im__12);
#line 623
c_rt_lib0clear(&___nl__im__13);
#line 623
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 623
c_rt_lib0clear(&___nl__im__11);
#line 623
c_rt_lib0move(&___nl__im__14,___get_global_string_const(110));
#line 623
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 623
c_rt_lib0clear(&___nl__im__10);
#line 623
c_rt_lib0clear(&___nl__im__14);
#line 623
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 623
c_rt_lib0clear(&___nl__im__9);
#line 623
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 623
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 623
c_rt_lib0clear(&___nl__im__8);
#line 623
c_rt_lib0clear(&___nl__im__15);
#line 624
___nl__int__17 = 0;
#line 624
___nl__int__18 = 1;
#line 624
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 624
label_23:
;
#line 624
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 624
if(___nl__bool__20){ goto label_73;}
#line 624
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 624
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 625
___nl__int__23 = 0;
#line 625
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 625
//clear ___nl__int__23;
#line 625
___nl__bool__22 = !___nl__bool__22;
#line 625
___nl__bool__22 = !___nl__bool__22;
#line 625
if(___nl__bool__22){ goto label_38;}
#line 625
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 625
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 625
c_rt_lib0clear(&___nl__im__24);
#line 625
goto label_38;
#line 625
label_38:
;
#line 625
//clear ___nl__bool__22;
#line 626
___nl__int__25 = 1;
#line 626
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 626
//clear ___nl__int__25;
#line 627
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 627
if(___nl__bool__26){ goto label_52;}
#line 629
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(347));
#line 629
if(___nl__bool__26){ goto label_57;}
#line 631
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(282));
#line 631
if(___nl__bool__26){ goto label_64;}
#line 631
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 631
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 631
nl_die_arg(___nl__im__27);
#line 627
label_52:
;
#line 627
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 627
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 628
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 629
goto label_69;
#line 629
label_57:
;
#line 629
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(347)));
#line 629
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 630
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__30));
#line 630
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 630
c_rt_lib0clear(&___nl__im__32);
#line 631
goto label_69;
#line 631
label_64:
;
#line 631
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(282)));
#line 631
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 632
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 633
goto label_69;
#line 633
label_69:
;
#line 633
c_rt_lib0clear(&___nl__im__16);
#line 634
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 634
goto label_23;
#line 634
label_73:
;
#line 635
___nl__int__35 = 1;
#line 635
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 635
//clear ___nl__int__35;
#line 636
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 636
c_rt_lib0move(&___nl__im__39,___get_global_string_const(508));
#line 636
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 636
c_rt_lib0clear(&___nl__im__38);
#line 636
c_rt_lib0clear(&___nl__im__39);
#line 636
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 636
c_rt_lib0clear(&___nl__im__37);
#line 636
c_rt_lib0clear(&___nl__im__0);
#line 636
c_rt_lib0clear(&___nl__im__1);
#line 636
c_rt_lib0clear(&___nl__im__2);
#line 636
//clear ___nl__int__4;
#line 636
c_rt_lib0clear(&___nl__im__5);
#line 636
c_rt_lib0clear(&___nl__im__6);
#line 636
c_rt_lib0clear(&___nl__im__7);
#line 636
c_rt_lib0clear(&___nl__im__16);
#line 636
//clear ___nl__int__17;
#line 636
//clear ___nl__int__18;
#line 636
//clear ___nl__int__19;
#line 636
//clear ___nl__bool__20;
#line 636
c_rt_lib0clear(&___nl__im__21);
#line 636
//clear ___nl__bool__26;
#line 636
c_rt_lib0clear(&___nl__im__27);
#line 636
c_rt_lib0clear(&___nl__im__28);
#line 636
c_rt_lib0clear(&___nl__im__29);
#line 636
c_rt_lib0clear(&___nl__im__30);
#line 636
c_rt_lib0clear(&___nl__im__31);
#line 636
c_rt_lib0clear(&___nl__im__33);
#line 636
c_rt_lib0clear(&___nl__im__34);
#line 636
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
#line 640
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 641
___nl__int__5 = 0;
#line 641
___nl__int__6 = 1;
#line 641
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 641
label_4:
;
#line 641
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 641
if(___nl__bool__8){ goto label_15;}
#line 641
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 641
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 642
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__4));
#line 642
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 642
c_rt_lib0clear(&___nl__im__10);
#line 642
c_rt_lib0clear(&___nl__im__4);
#line 643
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 643
goto label_4;
#line 643
label_15:
;
#line 644
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 644
c_rt_lib0move(&___nl__im__19,___get_global_string_const(110));
#line 644
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 644
c_rt_lib0clear(&___nl__im__18);
#line 644
c_rt_lib0clear(&___nl__im__19);
#line 644
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 644
c_rt_lib0clear(&___nl__im__17);
#line 644
c_rt_lib0move(&___nl__im__20,___get_global_string_const(110));
#line 644
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 644
c_rt_lib0clear(&___nl__im__16);
#line 644
c_rt_lib0clear(&___nl__im__20);
#line 644
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 644
c_rt_lib0clear(&___nl__im__15);
#line 644
c_rt_lib0move(&___nl__im__21,___get_global_string_const(457));
#line 644
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 644
c_rt_lib0clear(&___nl__im__14);
#line 644
c_rt_lib0clear(&___nl__im__21);
#line 644
c_rt_lib0move(&___nl__im__23,___get_global_string_const(328));
#line 644
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 644
c_rt_lib0clear(&___nl__im__23);
#line 644
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 644
c_rt_lib0clear(&___nl__im__13);
#line 644
c_rt_lib0clear(&___nl__im__22);
#line 644
c_rt_lib0move(&___nl__im__24,___get_global_string_const(322));
#line 644
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 644
c_rt_lib0clear(&___nl__im__12);
#line 644
c_rt_lib0clear(&___nl__im__24);
#line 644
c_rt_lib0clear(&___nl__im__0);
#line 644
c_rt_lib0clear(&___nl__im__1);
#line 644
c_rt_lib0clear(&___nl__im__2);
#line 644
c_rt_lib0clear(&___nl__im__3);
#line 644
c_rt_lib0clear(&___nl__im__4);
#line 644
//clear ___nl__int__5;
#line 644
//clear ___nl__int__6;
#line 644
//clear ___nl__int__7;
#line 644
//clear ___nl__bool__8;
#line 644
c_rt_lib0clear(&___nl__im__9);
#line 644
return ___nl__im__11;
#line 644
c_rt_lib0clear(&___nl__im__0);
#line 644
c_rt_lib0clear(&___nl__im__1);
#line 644
c_rt_lib0clear(&___nl__im__2);
#line 644
c_rt_lib0clear(&___nl__im__3);
#line 644
c_rt_lib0clear(&___nl__im__4);
#line 644
//clear ___nl__int__5;
#line 644
//clear ___nl__int__6;
#line 644
//clear ___nl__int__7;
#line 644
//clear ___nl__bool__8;
#line 644
c_rt_lib0clear(&___nl__im__9);
#line 644
c_rt_lib0clear(&___nl__im__11);
#line 644
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
#line 648
c_rt_lib0move(&___nl__im__3,___get_global_string_const(127));
#line 648
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 648
c_rt_lib0clear(&___nl__im__3);
#line 648
c_rt_lib0move(&___nl__im__4,___get_global_string_const(787));
#line 648
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 648
c_rt_lib0clear(&___nl__im__2);
#line 648
c_rt_lib0clear(&___nl__im__4);
#line 649
___nl__int__6 = 0;
#line 649
___nl__int__7 = 1;
#line 649
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 649
label_10:
;
#line 649
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 649
if(___nl__bool__9){ goto label_25;}
#line 649
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 649
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 649
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_const_value(___nl__im__5));
#line 649
c_rt_lib0move(&___nl__im__13,___get_global_string_const(314));
#line 649
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 649
c_rt_lib0clear(&___nl__im__13);
#line 649
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 649
c_rt_lib0clear(&___nl__im__11);
#line 649
c_rt_lib0clear(&___nl__im__5);
#line 649
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 649
goto label_10;
#line 649
label_25:
;
#line 650
c_rt_lib0move(&___nl__im__15,___get_global_string_const(500));
#line 650
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 650
c_rt_lib0clear(&___nl__im__15);
#line 650
c_rt_lib0clear(&___nl__im__0);
#line 650
c_rt_lib0clear(&___nl__im__1);
#line 650
c_rt_lib0clear(&___nl__im__5);
#line 650
//clear ___nl__int__6;
#line 650
//clear ___nl__int__7;
#line 650
//clear ___nl__int__8;
#line 650
//clear ___nl__bool__9;
#line 650
c_rt_lib0clear(&___nl__im__10);
#line 650
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
#line 654
c_rt_lib0move(&___nl__im__3,___get_global_string_const(128));
#line 654
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 654
c_rt_lib0clear(&___nl__im__3);
#line 654
c_rt_lib0move(&___nl__im__4,___get_global_string_const(796));
#line 654
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 654
c_rt_lib0clear(&___nl__im__2);
#line 654
c_rt_lib0clear(&___nl__im__4);
#line 655
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 655
label_8:
;
#line 655
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 655
if(___nl__bool__6){ goto label_34;}
#line 655
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 655
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 655
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 655
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 655
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 655
c_rt_lib0clear(&___nl__im__13);
#line 655
c_rt_lib0clear(&___nl__im__14);
#line 655
c_rt_lib0move(&___nl__im__15,___get_global_string_const(530));
#line 655
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 655
c_rt_lib0clear(&___nl__im__12);
#line 655
c_rt_lib0clear(&___nl__im__15);
#line 655
c_rt_lib0move(&___nl__im__16, generator_js_priv0get_const_value(___nl__im__7));
#line 655
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 655
c_rt_lib0clear(&___nl__im__11);
#line 655
c_rt_lib0clear(&___nl__im__16);
#line 655
c_rt_lib0move(&___nl__im__17,___get_global_string_const(314));
#line 655
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 655
c_rt_lib0clear(&___nl__im__10);
#line 655
c_rt_lib0clear(&___nl__im__17);
#line 655
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 655
c_rt_lib0clear(&___nl__im__9);
#line 655
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 655
goto label_8;
#line 655
label_34:
;
#line 656
c_rt_lib0move(&___nl__im__19,___get_global_string_const(797));
#line 656
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 656
c_rt_lib0clear(&___nl__im__19);
#line 656
c_rt_lib0clear(&___nl__im__0);
#line 656
c_rt_lib0clear(&___nl__im__1);
#line 656
c_rt_lib0clear(&___nl__im__5);
#line 656
//clear ___nl__bool__6;
#line 656
c_rt_lib0clear(&___nl__im__7);
#line 656
c_rt_lib0clear(&___nl__im__8);
#line 656
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
#line 660
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 660
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 660
c_rt_lib0clear(&___nl__im__2);
#line 660
___nl__bool__1 = !___nl__bool__1;
#line 660
if(___nl__bool__1){ goto label_36;}
#line 661
c_rt_lib0move(&___nl__im__9,___get_global_string_const(798));
#line 661
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 661
c_rt_lib0clear(&___nl__im__9);
#line 661
c_rt_lib0move(&___nl__im__10,___get_global_string_const(457));
#line 661
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 661
c_rt_lib0clear(&___nl__im__8);
#line 661
c_rt_lib0clear(&___nl__im__10);
#line 661
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 661
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 661
c_rt_lib0clear(&___nl__im__12);
#line 661
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 661
c_rt_lib0clear(&___nl__im__7);
#line 661
c_rt_lib0clear(&___nl__im__11);
#line 661
c_rt_lib0move(&___nl__im__13,___get_global_string_const(328));
#line 661
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 661
c_rt_lib0clear(&___nl__im__6);
#line 661
c_rt_lib0clear(&___nl__im__13);
#line 662
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 662
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_const_value(___nl__im__15));
#line 662
c_rt_lib0clear(&___nl__im__15);
#line 662
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 662
c_rt_lib0clear(&___nl__im__5);
#line 662
c_rt_lib0clear(&___nl__im__14);
#line 662
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 662
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 662
c_rt_lib0clear(&___nl__im__4);
#line 662
c_rt_lib0clear(&___nl__im__16);
#line 662
c_rt_lib0clear(&___nl__im__0);
#line 662
//clear ___nl__bool__1;
#line 662
return ___nl__im__3;
#line 663
goto label_59;
#line 663
label_36:
;
#line 664
c_rt_lib0move(&___nl__im__21,___get_global_string_const(798));
#line 664
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 664
c_rt_lib0clear(&___nl__im__21);
#line 664
c_rt_lib0move(&___nl__im__22,___get_global_string_const(457));
#line 664
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 664
c_rt_lib0clear(&___nl__im__20);
#line 664
c_rt_lib0clear(&___nl__im__22);
#line 664
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 664
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 664
c_rt_lib0clear(&___nl__im__24);
#line 664
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 664
c_rt_lib0clear(&___nl__im__19);
#line 664
c_rt_lib0clear(&___nl__im__23);
#line 664
c_rt_lib0move(&___nl__im__25,___get_global_string_const(799));
#line 664
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 664
c_rt_lib0clear(&___nl__im__18);
#line 664
c_rt_lib0clear(&___nl__im__25);
#line 664
c_rt_lib0clear(&___nl__im__0);
#line 664
//clear ___nl__bool__1;
#line 664
c_rt_lib0clear(&___nl__im__3);
#line 664
return ___nl__im__17;
#line 665
goto label_59;
#line 665
label_59:
;
#line 665
//clear ___nl__bool__1;
#line 665
c_rt_lib0clear(&___nl__im__3);
#line 665
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
#line 669
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 669
___nl__bool__1 = !___nl__bool__1;
#line 669
if(___nl__bool__1){ goto label_20;}
#line 670
c_rt_lib0move(&___nl__im__6,___get_global_string_const(405));
#line 670
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 670
c_rt_lib0clear(&___nl__im__6);
#line 670
c_rt_lib0move(&___nl__im__7,___get_global_string_const(457));
#line 670
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 670
c_rt_lib0clear(&___nl__im__5);
#line 670
c_rt_lib0clear(&___nl__im__7);
#line 670
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 670
c_rt_lib0clear(&___nl__im__4);
#line 670
c_rt_lib0move(&___nl__im__8,___get_global_string_const(322));
#line 670
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 670
c_rt_lib0clear(&___nl__im__3);
#line 670
c_rt_lib0clear(&___nl__im__8);
#line 670
c_rt_lib0clear(&___nl__im__0);
#line 670
//clear ___nl__bool__1;
#line 670
return ___nl__im__2;
#line 671
goto label_130;
#line 671
label_20:
;
#line 671
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 671
___nl__bool__1 = !___nl__bool__1;
#line 671
if(___nl__bool__1){ goto label_44;}
#line 672
c_rt_lib0move(&___nl__im__13,___get_global_string_const(282));
#line 672
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 672
c_rt_lib0clear(&___nl__im__13);
#line 672
c_rt_lib0move(&___nl__im__14,___get_global_string_const(457));
#line 672
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 672
c_rt_lib0clear(&___nl__im__12);
#line 672
c_rt_lib0clear(&___nl__im__14);
#line 672
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 672
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 672
c_rt_lib0clear(&___nl__im__11);
#line 672
c_rt_lib0clear(&___nl__im__15);
#line 672
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 672
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 672
c_rt_lib0clear(&___nl__im__10);
#line 672
c_rt_lib0clear(&___nl__im__16);
#line 672
c_rt_lib0clear(&___nl__im__0);
#line 672
//clear ___nl__bool__1;
#line 672
c_rt_lib0clear(&___nl__im__2);
#line 672
return ___nl__im__9;
#line 673
goto label_130;
#line 673
label_44:
;
#line 673
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 673
___nl__bool__1 = !___nl__bool__1;
#line 673
if(___nl__bool__1){ goto label_55;}
#line 674
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_const_arr(___nl__im__0));
#line 674
c_rt_lib0clear(&___nl__im__0);
#line 674
//clear ___nl__bool__1;
#line 674
c_rt_lib0clear(&___nl__im__2);
#line 674
c_rt_lib0clear(&___nl__im__9);
#line 674
return ___nl__im__17;
#line 675
goto label_130;
#line 675
label_55:
;
#line 675
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 675
___nl__bool__1 = !___nl__bool__1;
#line 675
if(___nl__bool__1){ goto label_67;}
#line 676
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_hash(___nl__im__0));
#line 676
c_rt_lib0clear(&___nl__im__0);
#line 676
//clear ___nl__bool__1;
#line 676
c_rt_lib0clear(&___nl__im__2);
#line 676
c_rt_lib0clear(&___nl__im__9);
#line 676
c_rt_lib0clear(&___nl__im__17);
#line 676
return ___nl__im__18;
#line 677
goto label_130;
#line 677
label_67:
;
#line 677
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 677
___nl__bool__1 = !___nl__bool__1;
#line 677
if(___nl__bool__1){ goto label_113;}
#line 678
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 678
___nl__bool__19 = !___nl__bool__19;
#line 678
if(___nl__bool__19){ goto label_90;}
#line 679
c_rt_lib0move(&___nl__im__21,___get_global_string_const(271));
#line 679
c_rt_lib0move(&___nl__im__22,___get_global_string_const(800));
#line 679
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 679
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 679
c_rt_lib0clear(&___nl__im__21);
#line 679
c_rt_lib0clear(&___nl__im__22);
#line 679
c_rt_lib0clear(&___nl__im__23);
#line 679
c_rt_lib0clear(&___nl__im__0);
#line 679
//clear ___nl__bool__1;
#line 679
c_rt_lib0clear(&___nl__im__2);
#line 679
c_rt_lib0clear(&___nl__im__9);
#line 679
c_rt_lib0clear(&___nl__im__17);
#line 679
c_rt_lib0clear(&___nl__im__18);
#line 679
//clear ___nl__bool__19;
#line 679
return ___nl__im__20;
#line 680
goto label_108;
#line 680
label_90:
;
#line 681
c_rt_lib0move(&___nl__im__25,___get_global_string_const(271));
#line 681
c_rt_lib0move(&___nl__im__26,___get_global_string_const(801));
#line 681
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 681
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 681
c_rt_lib0clear(&___nl__im__25);
#line 681
c_rt_lib0clear(&___nl__im__26);
#line 681
c_rt_lib0clear(&___nl__im__27);
#line 681
c_rt_lib0clear(&___nl__im__0);
#line 681
//clear ___nl__bool__1;
#line 681
c_rt_lib0clear(&___nl__im__2);
#line 681
c_rt_lib0clear(&___nl__im__9);
#line 681
c_rt_lib0clear(&___nl__im__17);
#line 681
c_rt_lib0clear(&___nl__im__18);
#line 681
//clear ___nl__bool__19;
#line 681
c_rt_lib0clear(&___nl__im__20);
#line 681
return ___nl__im__24;
#line 682
goto label_108;
#line 682
label_108:
;
#line 682
//clear ___nl__bool__19;
#line 682
c_rt_lib0clear(&___nl__im__20);
#line 682
c_rt_lib0clear(&___nl__im__24);
#line 683
goto label_130;
#line 683
label_113:
;
#line 683
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 683
___nl__bool__1 = !___nl__bool__1;
#line 683
if(___nl__bool__1){ goto label_126;}
#line 684
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_const_ov(___nl__im__0));
#line 684
c_rt_lib0clear(&___nl__im__0);
#line 684
//clear ___nl__bool__1;
#line 684
c_rt_lib0clear(&___nl__im__2);
#line 684
c_rt_lib0clear(&___nl__im__9);
#line 684
c_rt_lib0clear(&___nl__im__17);
#line 684
c_rt_lib0clear(&___nl__im__18);
#line 684
return ___nl__im__28;
#line 685
goto label_130;
#line 685
label_126:
;
#line 686
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 686
nl_die_arg(___nl__im__29);
#line 687
goto label_130;
#line 687
label_130:
;
#line 687
//clear ___nl__bool__1;
#line 687
c_rt_lib0clear(&___nl__im__2);
#line 687
c_rt_lib0clear(&___nl__im__9);
#line 687
c_rt_lib0clear(&___nl__im__17);
#line 687
c_rt_lib0clear(&___nl__im__18);
#line 687
c_rt_lib0clear(&___nl__im__28);
#line 687
c_rt_lib0clear(&___nl__im__29);
#line 687
c_rt_lib0clear(&___nl__im__0);
#line 687
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
#line 691
c_rt_lib0move(&___nl__im__3,___get_global_string_const(802));
#line 691
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 691
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 691
c_rt_lib0clear(&___nl__im__3);
#line 691
c_rt_lib0clear(&___nl__string__4);
#line 691
c_rt_lib0move(&___nl__im__5,___get_global_string_const(803));
#line 691
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 691
c_rt_lib0clear(&___nl__im__2);
#line 691
c_rt_lib0clear(&___nl__im__5);
#line 691
//clear ___nl__int__0;
#line 691
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
#line 696
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 697
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 697
___nl__bool__3 = !___nl__bool__3;
#line 697
if(___nl__bool__3){ goto label_14;}
#line 698
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 698
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 698
c_rt_lib0clear(&___nl__im__6);
#line 698
c_rt_lib0move(&___nl__im__7,___get_global_string_const(796));
#line 698
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 698
c_rt_lib0clear(&___nl__im__5);
#line 698
c_rt_lib0clear(&___nl__im__7);
#line 698
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 698
c_rt_lib0clear(&___nl__im__4);
#line 699
goto label_26;
#line 699
label_14:
;
#line 699
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 699
___nl__bool__3 = !___nl__bool__3;
#line 699
if(___nl__bool__3){ goto label_22;}
#line 700
c_rt_lib0move(&___nl__im__8,___get_global_string_const(306));
#line 700
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 700
c_rt_lib0clear(&___nl__im__8);
#line 701
goto label_26;
#line 701
label_22:
;
#line 702
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 702
nl_die_arg(___nl__im__9);
#line 703
goto label_26;
#line 703
label_26:
;
#line 703
//clear ___nl__bool__3;
#line 703
c_rt_lib0clear(&___nl__im__9);
#line 704
___nl__int__11 = 0;
#line 704
___nl__int__12 = 1;
#line 704
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 704
label_32:
;
#line 704
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 704
if(___nl__bool__14){ goto label_59;}
#line 704
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 704
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 704
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(577)));
#line 704
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 704
c_rt_lib0clear(&___nl__im__20);
#line 704
c_rt_lib0move(&___nl__im__21,___get_global_string_const(530));
#line 704
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 704
c_rt_lib0clear(&___nl__im__19);
#line 704
c_rt_lib0clear(&___nl__im__21);
#line 704
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(225)));
#line 704
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__23));
#line 704
c_rt_lib0clear(&___nl__im__23);
#line 704
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 704
c_rt_lib0clear(&___nl__im__18);
#line 704
c_rt_lib0clear(&___nl__im__22);
#line 704
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 704
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 704
c_rt_lib0clear(&___nl__im__17);
#line 704
c_rt_lib0clear(&___nl__im__24);
#line 704
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 704
c_rt_lib0clear(&___nl__im__16);
#line 704
c_rt_lib0clear(&___nl__im__10);
#line 704
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 704
goto label_32;
#line 704
label_59:
;
#line 705
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 705
___nl__bool__25 = !___nl__bool__25;
#line 705
if(___nl__bool__25){ goto label_67;}
#line 706
c_rt_lib0move(&___nl__im__26,___get_global_string_const(797));
#line 706
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 706
c_rt_lib0clear(&___nl__im__26);
#line 707
goto label_79;
#line 707
label_67:
;
#line 707
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 707
___nl__bool__25 = !___nl__bool__25;
#line 707
if(___nl__bool__25){ goto label_75;}
#line 708
c_rt_lib0move(&___nl__im__27,___get_global_string_const(307));
#line 708
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 708
c_rt_lib0clear(&___nl__im__27);
#line 709
goto label_79;
#line 709
label_75:
;
#line 710
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 710
nl_die_arg(___nl__im__28);
#line 711
goto label_79;
#line 711
label_79:
;
#line 711
//clear ___nl__bool__25;
#line 711
c_rt_lib0clear(&___nl__im__28);
#line 712
c_rt_lib0clear(&___nl__im__0);
#line 712
c_rt_lib0clear(&___nl__im__1);
#line 712
c_rt_lib0clear(&___nl__im__10);
#line 712
//clear ___nl__int__11;
#line 712
//clear ___nl__int__12;
#line 712
//clear ___nl__int__13;
#line 712
//clear ___nl__bool__14;
#line 712
c_rt_lib0clear(&___nl__im__15);
#line 712
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
#line 716
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 717
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 717
___nl__bool__3 = !___nl__bool__3;
#line 717
if(___nl__bool__3){ goto label_36;}
#line 718
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 718
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 718
c_rt_lib0clear(&___nl__im__6);
#line 718
c_rt_lib0move(&___nl__im__7,___get_global_string_const(796));
#line 718
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 718
c_rt_lib0clear(&___nl__im__5);
#line 718
c_rt_lib0clear(&___nl__im__7);
#line 718
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 718
c_rt_lib0clear(&___nl__im__4);
#line 719
___nl__int__9 = 0;
#line 719
___nl__int__10 = 1;
#line 719
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 719
label_16:
;
#line 719
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 719
if(___nl__bool__12){ goto label_31;}
#line 719
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 719
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 719
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 719
c_rt_lib0move(&___nl__im__16,___get_global_string_const(804));
#line 719
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 719
c_rt_lib0clear(&___nl__im__15);
#line 719
c_rt_lib0clear(&___nl__im__16);
#line 719
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 719
c_rt_lib0clear(&___nl__im__14);
#line 719
c_rt_lib0clear(&___nl__im__8);
#line 719
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 719
goto label_16;
#line 719
label_31:
;
#line 720
c_rt_lib0move(&___nl__im__17,___get_global_string_const(797));
#line 720
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 720
c_rt_lib0clear(&___nl__im__17);
#line 721
goto label_70;
#line 721
label_36:
;
#line 721
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(559));
#line 721
___nl__bool__3 = !___nl__bool__3;
#line 721
if(___nl__bool__3){ goto label_66;}
#line 722
c_rt_lib0move(&___nl__im__18,___get_global_string_const(306));
#line 722
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 722
c_rt_lib0clear(&___nl__im__18);
#line 723
___nl__int__20 = 0;
#line 723
___nl__int__21 = 1;
#line 723
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 723
label_46:
;
#line 723
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 723
if(___nl__bool__23){ goto label_61;}
#line 723
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 723
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 723
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 723
c_rt_lib0move(&___nl__im__27,___get_global_string_const(805));
#line 723
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 723
c_rt_lib0clear(&___nl__im__26);
#line 723
c_rt_lib0clear(&___nl__im__27);
#line 723
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 723
c_rt_lib0clear(&___nl__im__25);
#line 723
c_rt_lib0clear(&___nl__im__19);
#line 723
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 723
goto label_46;
#line 723
label_61:
;
#line 724
c_rt_lib0move(&___nl__im__28,___get_global_string_const(307));
#line 724
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 724
c_rt_lib0clear(&___nl__im__28);
#line 725
goto label_70;
#line 725
label_66:
;
#line 726
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 726
nl_die_arg(___nl__im__29);
#line 727
goto label_70;
#line 727
label_70:
;
#line 727
//clear ___nl__bool__3;
#line 727
c_rt_lib0clear(&___nl__im__8);
#line 727
//clear ___nl__int__9;
#line 727
//clear ___nl__int__10;
#line 727
//clear ___nl__int__11;
#line 727
//clear ___nl__bool__12;
#line 727
c_rt_lib0clear(&___nl__im__13);
#line 727
c_rt_lib0clear(&___nl__im__19);
#line 727
//clear ___nl__int__20;
#line 727
//clear ___nl__int__21;
#line 727
//clear ___nl__int__22;
#line 727
//clear ___nl__bool__23;
#line 727
c_rt_lib0clear(&___nl__im__24);
#line 727
c_rt_lib0clear(&___nl__im__29);
#line 728
c_rt_lib0clear(&___nl__im__0);
#line 728
c_rt_lib0clear(&___nl__im__1);
#line 728
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0get_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 732
c_rt_lib0move(&___nl__im__2,___get_global_string_const(425));
#line 732
c_rt_lib0move(&___nl__im__3, generator_js_priv0reg_suffix(___nl__im__0));
#line 732
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__3));
#line 732
c_rt_lib0clear(&___nl__im__2);
#line 732
c_rt_lib0clear(&___nl__im__3);
#line 732
c_rt_lib0clear(&___nl__im__0);
#line 732
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
#line 736
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 737
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 737
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 737
if(___nl__bool__3){ goto label_9;}
#line 738
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 738
if(___nl__bool__3){ goto label_11;}
#line 738
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 738
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 738
nl_die_arg(___nl__im__4);
#line 737
label_9:
;
#line 738
goto label_16;
#line 738
label_11:
;
#line 739
c_rt_lib0move(&___nl__im__5,___get_global_string_const(746));
#line 739
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 739
c_rt_lib0clear(&___nl__im__5);
#line 740
goto label_16;
#line 740
label_16:
;
#line 741
c_rt_lib0clear(&___nl__im__0);
#line 741
c_rt_lib0clear(&___nl__im__2);
#line 741
//clear ___nl__bool__3;
#line 741
c_rt_lib0clear(&___nl__im__4);
#line 741
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
#line 745
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 746
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 746
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 746
if(___nl__bool__3){ goto label_9;}
#line 748
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 748
if(___nl__bool__3){ goto label_18;}
#line 748
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 748
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 748
nl_die_arg(___nl__im__4);
#line 746
label_9:
;
#line 747
c_rt_lib0move(&___nl__im__6,___get_global_string_const(806));
#line 747
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 747
c_rt_lib0clear(&___nl__im__6);
#line 747
c_rt_lib0move(&___nl__im__7,___get_global_string_const(307));
#line 747
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 747
c_rt_lib0clear(&___nl__im__5);
#line 747
c_rt_lib0clear(&___nl__im__7);
#line 748
goto label_20;
#line 748
label_18:
;
#line 749
goto label_20;
#line 749
label_20:
;
#line 750
c_rt_lib0clear(&___nl__im__0);
#line 750
c_rt_lib0clear(&___nl__im__2);
#line 750
//clear ___nl__bool__3;
#line 750
c_rt_lib0clear(&___nl__im__4);
#line 750
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
#line 755
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 755
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(131));
#line 755
if(___nl__bool__3){ goto label_20;}
#line 757
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(405));
#line 757
if(___nl__bool__3){ goto label_23;}
#line 759
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 759
if(___nl__bool__3){ goto label_26;}
#line 761
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(406));
#line 761
if(___nl__bool__3){ goto label_29;}
#line 763
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(559));
#line 763
if(___nl__bool__3){ goto label_32;}
#line 765
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 765
if(___nl__bool__3){ goto label_37;}
#line 767
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(563));
#line 767
if(___nl__bool__3){ goto label_42;}
#line 769
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 769
if(___nl__bool__3){ goto label_47;}
#line 769
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 769
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 769
nl_die_arg(___nl__im__4);
#line 755
label_20:
;
#line 756
c_rt_lib0move(&___nl__im__1,___get_global_string_const(131));
#line 757
goto label_52;
#line 757
label_23:
;
#line 758
c_rt_lib0move(&___nl__im__1,___get_global_string_const(405));
#line 759
goto label_52;
#line 759
label_26:
;
#line 760
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 761
goto label_52;
#line 761
label_29:
;
#line 762
c_rt_lib0move(&___nl__im__1,___get_global_string_const(406));
#line 763
goto label_52;
#line 763
label_32:
;
#line 763
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(559)));
#line 763
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 764
c_rt_lib0move(&___nl__im__1,___get_global_string_const(559));
#line 765
goto label_52;
#line 765
label_37:
;
#line 765
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(127)));
#line 765
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 766
c_rt_lib0move(&___nl__im__1,___get_global_string_const(127));
#line 767
goto label_52;
#line 767
label_42:
;
#line 767
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(563)));
#line 767
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 768
c_rt_lib0move(&___nl__im__1,___get_global_string_const(507));
#line 769
goto label_52;
#line 769
label_47:
;
#line 769
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 769
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 770
c_rt_lib0move(&___nl__im__1,___get_global_string_const(128));
#line 771
goto label_52;
#line 771
label_52:
;
#line 772
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 772
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(220));
#line 772
if(___nl__bool__14){ goto label_61;}
#line 773
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(422));
#line 773
if(___nl__bool__14){ goto label_63;}
#line 773
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 773
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 773
nl_die_arg(___nl__im__15);
#line 772
label_61:
;
#line 773
goto label_68;
#line 773
label_63:
;
#line 774
c_rt_lib0move(&___nl__im__16,___get_global_string_const(641));
#line 774
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 774
c_rt_lib0clear(&___nl__im__16);
#line 775
goto label_68;
#line 775
label_68:
;
#line 776
c_rt_lib0move(&___nl__im__18,___get_global_string_const(642));
#line 776
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 776
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 776
c_rt_lib0clear(&___nl__im__20);
#line 776
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 776
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 776
c_rt_lib0clear(&___nl__im__18);
#line 776
//clear ___nl__int__19;
#line 776
c_rt_lib0clear(&___nl__string__21);
#line 776
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 776
c_rt_lib0clear(&___nl__im__17);
#line 777
c_rt_lib0clear(&___nl__im__0);
#line 777
c_rt_lib0clear(&___nl__im__2);
#line 777
//clear ___nl__bool__3;
#line 777
c_rt_lib0clear(&___nl__im__4);
#line 777
c_rt_lib0clear(&___nl__im__5);
#line 777
c_rt_lib0clear(&___nl__im__6);
#line 777
c_rt_lib0clear(&___nl__im__7);
#line 777
c_rt_lib0clear(&___nl__im__8);
#line 777
c_rt_lib0clear(&___nl__im__9);
#line 777
c_rt_lib0clear(&___nl__im__10);
#line 777
c_rt_lib0clear(&___nl__im__11);
#line 777
c_rt_lib0clear(&___nl__im__12);
#line 777
c_rt_lib0clear(&___nl__im__13);
#line 777
//clear ___nl__bool__14;
#line 777
c_rt_lib0clear(&___nl__im__15);
#line 777
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
#line 782
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 782
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 782
c_rt_lib0clear(&___nl__im__2);
#line 782
___nl__bool__1 = !___nl__bool__1;
#line 782
if(___nl__bool__1){ goto label_10;}
#line 782
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 782
c_rt_lib0clear(&___nl__im__0);
#line 782
//clear ___nl__bool__1;
#line 782
return ___nl__im__3;
#line 782
goto label_10;
#line 782
label_10:
;
#line 782
//clear ___nl__bool__1;
#line 782
c_rt_lib0clear(&___nl__im__3);
#line 783
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register(___nl__im__0));
#line 783
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 783
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 783
c_rt_lib0clear(&___nl__im__5);
#line 783
c_rt_lib0clear(&___nl__im__6);
#line 783
c_rt_lib0clear(&___nl__im__0);
#line 783
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
#line 787
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 787
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 787
c_rt_lib0clear(&___nl__im__2);
#line 787
___nl__bool__1 = !___nl__bool__1;
#line 787
if(___nl__bool__1){ goto label_10;}
#line 787
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 787
c_rt_lib0clear(&___nl__im__0);
#line 787
//clear ___nl__bool__1;
#line 787
return ___nl__im__3;
#line 787
goto label_10;
#line 787
label_10:
;
#line 787
//clear ___nl__bool__1;
#line 787
c_rt_lib0clear(&___nl__im__3);
#line 788
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register_value(___nl__im__0));
#line 788
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 788
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 788
c_rt_lib0clear(&___nl__im__5);
#line 788
c_rt_lib0clear(&___nl__im__6);
#line 788
c_rt_lib0clear(&___nl__im__0);
#line 788
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
#line 792
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 793
___nl__int__3 = 0;
#line 794
___nl__int__5 = 0;
#line 794
___nl__int__6 = 1;
#line 794
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 794
label_5:
;
#line 794
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 794
if(___nl__bool__8){ goto label_50;}
#line 794
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 794
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 795
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(355)));
#line 795
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 795
if(___nl__bool__11){ goto label_18;}
#line 797
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(225));
#line 797
if(___nl__bool__11){ goto label_41;}
#line 797
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 797
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 797
nl_die_arg(___nl__im__12);
#line 795
label_18:
;
#line 796
c_rt_lib0move(&___nl__im__17,___get_global_string_const(758));
#line 796
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 796
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 796
c_rt_lib0clear(&___nl__im__17);
#line 796
c_rt_lib0clear(&___nl__string__18);
#line 796
c_rt_lib0move(&___nl__im__19,___get_global_string_const(807));
#line 796
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 796
c_rt_lib0clear(&___nl__im__16);
#line 796
c_rt_lib0clear(&___nl__im__19);
#line 796
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(471)));
#line 796
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_register_value(___nl__im__21));
#line 796
c_rt_lib0clear(&___nl__im__21);
#line 796
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 796
c_rt_lib0clear(&___nl__im__15);
#line 796
c_rt_lib0clear(&___nl__im__20);
#line 796
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 796
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 796
c_rt_lib0clear(&___nl__im__14);
#line 796
c_rt_lib0clear(&___nl__im__22);
#line 796
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 796
c_rt_lib0clear(&___nl__im__13);
#line 797
goto label_43;
#line 797
label_41:
;
#line 798
goto label_43;
#line 798
label_43:
;
#line 799
___nl__int__23 = 1;
#line 799
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 799
//clear ___nl__int__23;
#line 799
c_rt_lib0clear(&___nl__im__4);
#line 800
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 800
goto label_5;
#line 800
label_50:
;
#line 801
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(225));
#line 801
if(___nl__bool__24){ goto label_58;}
#line 803
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(352));
#line 803
if(___nl__bool__24){ goto label_91;}
#line 803
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 803
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 803
nl_die_arg(___nl__im__25);
#line 801
label_58:
;
#line 801
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(225)));
#line 801
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 802
c_rt_lib0move(&___nl__im__31,___get_global_string_const(510));
#line 802
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__2, ___nl__im__31));
#line 802
c_rt_lib0clear(&___nl__im__31);
#line 802
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__26));
#line 802
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 802
c_rt_lib0clear(&___nl__im__30);
#line 802
c_rt_lib0clear(&___nl__im__32);
#line 802
c_rt_lib0move(&___nl__im__33,___get_global_string_const(442));
#line 802
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 802
c_rt_lib0clear(&___nl__im__29);
#line 802
c_rt_lib0clear(&___nl__im__33);
#line 802
c_rt_lib0clear(&___nl__im__0);
#line 802
c_rt_lib0clear(&___nl__im__1);
#line 802
c_rt_lib0clear(&___nl__im__2);
#line 802
//clear ___nl__int__3;
#line 802
c_rt_lib0clear(&___nl__im__4);
#line 802
//clear ___nl__int__5;
#line 802
//clear ___nl__int__6;
#line 802
//clear ___nl__int__7;
#line 802
//clear ___nl__bool__8;
#line 802
c_rt_lib0clear(&___nl__im__9);
#line 802
c_rt_lib0clear(&___nl__im__10);
#line 802
//clear ___nl__bool__11;
#line 802
c_rt_lib0clear(&___nl__im__12);
#line 802
//clear ___nl__bool__24;
#line 802
c_rt_lib0clear(&___nl__im__25);
#line 802
c_rt_lib0clear(&___nl__im__26);
#line 802
c_rt_lib0clear(&___nl__im__27);
#line 802
return ___nl__im__28;
#line 803
goto label_115;
#line 803
label_91:
;
#line 804
c_rt_lib0move(&___nl__im__35,___get_global_string_const(808));
#line 804
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__35));
#line 804
c_rt_lib0clear(&___nl__im__35);
#line 804
c_rt_lib0clear(&___nl__im__0);
#line 804
c_rt_lib0clear(&___nl__im__1);
#line 804
c_rt_lib0clear(&___nl__im__2);
#line 804
//clear ___nl__int__3;
#line 804
c_rt_lib0clear(&___nl__im__4);
#line 804
//clear ___nl__int__5;
#line 804
//clear ___nl__int__6;
#line 804
//clear ___nl__int__7;
#line 804
//clear ___nl__bool__8;
#line 804
c_rt_lib0clear(&___nl__im__9);
#line 804
c_rt_lib0clear(&___nl__im__10);
#line 804
//clear ___nl__bool__11;
#line 804
c_rt_lib0clear(&___nl__im__12);
#line 804
//clear ___nl__bool__24;
#line 804
c_rt_lib0clear(&___nl__im__25);
#line 804
c_rt_lib0clear(&___nl__im__26);
#line 804
c_rt_lib0clear(&___nl__im__27);
#line 804
c_rt_lib0clear(&___nl__im__28);
#line 804
return ___nl__im__34;
#line 805
goto label_115;
#line 805
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
#line 809
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 809
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register_value_to_assign(___nl__im__2));
#line 809
c_rt_lib0clear(&___nl__im__2);
#line 810
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 810
c_rt_lib0move(&___nl__im__5,___get_global_string_const(365));
#line 810
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 810
c_rt_lib0clear(&___nl__im__4);
#line 810
c_rt_lib0clear(&___nl__im__5);
#line 810
___nl__bool__3 = !___nl__bool__3;
#line 810
if(___nl__bool__3){ goto label_24;}
#line 811
c_rt_lib0move(&___nl__im__8,___get_global_string_const(365));
#line 811
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 811
c_rt_lib0clear(&___nl__im__8);
#line 811
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 811
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_register_value(___nl__im__10));
#line 811
c_rt_lib0clear(&___nl__im__10);
#line 811
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 811
c_rt_lib0clear(&___nl__im__7);
#line 811
c_rt_lib0clear(&___nl__im__9);
#line 811
c_rt_lib0clear(&___nl__im__0);
#line 811
c_rt_lib0clear(&___nl__im__1);
#line 811
//clear ___nl__bool__3;
#line 811
return ___nl__im__6;
#line 812
goto label_40;
#line 812
label_24:
;
#line 813
c_rt_lib0move(&___nl__im__13,___get_global_string_const(367));
#line 813
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 813
c_rt_lib0clear(&___nl__im__13);
#line 813
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 813
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_register_value(___nl__im__15));
#line 813
c_rt_lib0clear(&___nl__im__15);
#line 813
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 813
c_rt_lib0clear(&___nl__im__12);
#line 813
c_rt_lib0clear(&___nl__im__14);
#line 813
c_rt_lib0clear(&___nl__im__0);
#line 813
c_rt_lib0clear(&___nl__im__1);
#line 813
//clear ___nl__bool__3;
#line 813
c_rt_lib0clear(&___nl__im__6);
#line 813
return ___nl__im__11;
#line 814
goto label_40;
#line 814
label_40:
;
#line 814
//clear ___nl__bool__3;
#line 814
c_rt_lib0clear(&___nl__im__6);
#line 814
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
#line 818
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 818
if(___nl__bool__2){ goto label_19;}
#line 820
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 820
if(___nl__bool__2){ goto label_25;}
#line 822
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 822
if(___nl__bool__2){ goto label_45;}
#line 824
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 824
if(___nl__bool__2){ goto label_64;}
#line 826
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 826
if(___nl__bool__2){ goto label_72;}
#line 828
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 828
if(___nl__bool__2){ goto label_78;}
#line 830
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 830
if(___nl__bool__2){ goto label_84;}
#line 832
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 832
if(___nl__bool__2){ goto label_90;}
#line 832
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 832
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 832
nl_die_arg(___nl__im__3);
#line 818
label_19:
;
#line 819
c_rt_lib0clear(&___nl__im__0);
#line 819
//clear ___nl__bool__2;
#line 819
c_rt_lib0clear(&___nl__im__3);
#line 819
return ___nl__im__1;
#line 820
goto label_96;
#line 820
label_25:
;
#line 821
c_rt_lib0move(&___nl__im__8,___get_global_string_const(405));
#line 821
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 821
c_rt_lib0clear(&___nl__im__8);
#line 821
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 821
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 821
c_rt_lib0clear(&___nl__im__7);
#line 821
c_rt_lib0clear(&___nl__im__9);
#line 821
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 821
c_rt_lib0clear(&___nl__im__6);
#line 821
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 821
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 821
c_rt_lib0clear(&___nl__im__5);
#line 821
c_rt_lib0clear(&___nl__im__10);
#line 821
c_rt_lib0clear(&___nl__im__0);
#line 821
c_rt_lib0clear(&___nl__im__1);
#line 821
//clear ___nl__bool__2;
#line 821
c_rt_lib0clear(&___nl__im__3);
#line 821
return ___nl__im__4;
#line 822
goto label_96;
#line 822
label_45:
;
#line 823
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 823
c_rt_lib0move(&___nl__im__15,___get_global_string_const(809));
#line 823
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 823
c_rt_lib0clear(&___nl__im__14);
#line 823
c_rt_lib0clear(&___nl__im__15);
#line 823
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 823
c_rt_lib0clear(&___nl__im__13);
#line 823
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 823
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 823
c_rt_lib0clear(&___nl__im__12);
#line 823
c_rt_lib0clear(&___nl__im__16);
#line 823
c_rt_lib0clear(&___nl__im__0);
#line 823
c_rt_lib0clear(&___nl__im__1);
#line 823
//clear ___nl__bool__2;
#line 823
c_rt_lib0clear(&___nl__im__3);
#line 823
c_rt_lib0clear(&___nl__im__4);
#line 823
return ___nl__im__11;
#line 824
goto label_96;
#line 824
label_64:
;
#line 825
c_rt_lib0clear(&___nl__im__0);
#line 825
//clear ___nl__bool__2;
#line 825
c_rt_lib0clear(&___nl__im__3);
#line 825
c_rt_lib0clear(&___nl__im__4);
#line 825
c_rt_lib0clear(&___nl__im__11);
#line 825
return ___nl__im__1;
#line 826
goto label_96;
#line 826
label_72:
;
#line 826
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 826
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 827
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 827
nl_die_arg(___nl__im__19);
#line 828
goto label_96;
#line 828
label_78:
;
#line 828
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 828
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 829
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 829
nl_die_arg(___nl__im__22);
#line 830
goto label_96;
#line 830
label_84:
;
#line 830
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 830
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 831
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 831
nl_die_arg(___nl__im__25);
#line 832
goto label_96;
#line 832
label_90:
;
#line 832
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 832
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 833
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 833
nl_die_arg(___nl__im__28);
#line 834
goto label_96;
#line 834
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
#line 838
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 838
if(___nl__bool__2){ goto label_19;}
#line 840
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 840
if(___nl__bool__2){ goto label_25;}
#line 842
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 842
if(___nl__bool__2){ goto label_35;}
#line 844
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 844
if(___nl__bool__2){ goto label_54;}
#line 846
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 846
if(___nl__bool__2){ goto label_62;}
#line 848
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 848
if(___nl__bool__2){ goto label_68;}
#line 850
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 850
if(___nl__bool__2){ goto label_74;}
#line 852
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 852
if(___nl__bool__2){ goto label_80;}
#line 852
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 852
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 852
nl_die_arg(___nl__im__3);
#line 838
label_19:
;
#line 839
c_rt_lib0clear(&___nl__im__0);
#line 839
//clear ___nl__bool__2;
#line 839
c_rt_lib0clear(&___nl__im__3);
#line 839
return ___nl__im__1;
#line 840
goto label_86;
#line 840
label_25:
;
#line 841
c_rt_lib0move(&___nl__im__5,___get_global_string_const(810));
#line 841
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 841
c_rt_lib0clear(&___nl__im__5);
#line 841
c_rt_lib0clear(&___nl__im__0);
#line 841
c_rt_lib0clear(&___nl__im__1);
#line 841
//clear ___nl__bool__2;
#line 841
c_rt_lib0clear(&___nl__im__3);
#line 841
return ___nl__im__4;
#line 842
goto label_86;
#line 842
label_35:
;
#line 843
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 843
c_rt_lib0move(&___nl__im__10,___get_global_string_const(811));
#line 843
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 843
c_rt_lib0clear(&___nl__im__9);
#line 843
c_rt_lib0clear(&___nl__im__10);
#line 843
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 843
c_rt_lib0clear(&___nl__im__8);
#line 843
c_rt_lib0move(&___nl__im__11,___get_global_string_const(322));
#line 843
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 843
c_rt_lib0clear(&___nl__im__7);
#line 843
c_rt_lib0clear(&___nl__im__11);
#line 843
c_rt_lib0clear(&___nl__im__0);
#line 843
c_rt_lib0clear(&___nl__im__1);
#line 843
//clear ___nl__bool__2;
#line 843
c_rt_lib0clear(&___nl__im__3);
#line 843
c_rt_lib0clear(&___nl__im__4);
#line 843
return ___nl__im__6;
#line 844
goto label_86;
#line 844
label_54:
;
#line 845
c_rt_lib0clear(&___nl__im__0);
#line 845
//clear ___nl__bool__2;
#line 845
c_rt_lib0clear(&___nl__im__3);
#line 845
c_rt_lib0clear(&___nl__im__4);
#line 845
c_rt_lib0clear(&___nl__im__6);
#line 845
return ___nl__im__1;
#line 846
goto label_86;
#line 846
label_62:
;
#line 846
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 846
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 847
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 847
nl_die_arg(___nl__im__14);
#line 848
goto label_86;
#line 848
label_68:
;
#line 848
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 848
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 849
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 849
nl_die_arg(___nl__im__17);
#line 850
goto label_86;
#line 850
label_74:
;
#line 850
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 850
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 851
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 851
nl_die_arg(___nl__im__20);
#line 852
goto label_86;
#line 852
label_80:
;
#line 852
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 852
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 853
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 853
nl_die_arg(___nl__im__23);
#line 854
goto label_86;
#line 854
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
#line 858
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 858
___nl__int__3 = 0;
#line 858
___nl__int__4 = 1;
#line 858
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 858
label_4:
;
#line 858
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 858
if(___nl__bool__6){ goto label_34;}
#line 858
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 858
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 859
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(471)));
#line 859
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 859
c_rt_lib0clear(&___nl__im__10);
#line 859
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 859
c_rt_lib0clear(&___nl__im__9);
#line 859
___nl__bool__8 = !___nl__bool__8;
#line 859
if(___nl__bool__8){ goto label_28;}
#line 859
___nl__bool__11 = true;
#line 859
c_rt_lib0clear(&___nl__im__0);
#line 859
c_rt_lib0clear(&___nl__im__1);
#line 859
c_rt_lib0clear(&___nl__im__2);
#line 859
//clear ___nl__int__3;
#line 859
//clear ___nl__int__4;
#line 859
//clear ___nl__int__5;
#line 859
//clear ___nl__bool__6;
#line 859
c_rt_lib0clear(&___nl__im__7);
#line 859
//clear ___nl__bool__8;
#line 859
return ___nl__bool__11;
#line 859
goto label_28;
#line 859
label_28:
;
#line 859
//clear ___nl__bool__8;
#line 859
//clear ___nl__bool__11;
#line 859
c_rt_lib0clear(&___nl__im__2);
#line 860
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 860
goto label_4;
#line 860
label_34:
;
#line 861
___nl__bool__12 = false;
#line 861
c_rt_lib0clear(&___nl__im__0);
#line 861
c_rt_lib0clear(&___nl__im__1);
#line 861
c_rt_lib0clear(&___nl__im__2);
#line 861
//clear ___nl__int__3;
#line 861
//clear ___nl__int__4;
#line 861
//clear ___nl__int__5;
#line 861
//clear ___nl__bool__6;
#line 861
c_rt_lib0clear(&___nl__im__7);
#line 861
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
#line 865
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 865
___nl__bool__1 = !___nl__bool__1;
#line 865
if(___nl__bool__1){ goto label_8;}
#line 865
___nl__bool__2 = false;
#line 865
c_rt_lib0clear(&___nl__im__0);
#line 865
//clear ___nl__bool__1;
#line 865
return ___nl__bool__2;
#line 865
goto label_8;
#line 865
label_8:
;
#line 865
//clear ___nl__bool__1;
#line 865
//clear ___nl__bool__2;
#line 866
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 866
___nl__bool__3 = !___nl__bool__3;
#line 866
if(___nl__bool__3){ goto label_19;}
#line 866
___nl__bool__4 = false;
#line 866
c_rt_lib0clear(&___nl__im__0);
#line 866
//clear ___nl__bool__3;
#line 866
return ___nl__bool__4;
#line 866
goto label_19;
#line 866
label_19:
;
#line 866
//clear ___nl__bool__3;
#line 866
//clear ___nl__bool__4;
#line 867
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 867
___nl__bool__5 = !___nl__bool__5;
#line 867
if(___nl__bool__5){ goto label_30;}
#line 867
___nl__bool__6 = false;
#line 867
c_rt_lib0clear(&___nl__im__0);
#line 867
//clear ___nl__bool__5;
#line 867
return ___nl__bool__6;
#line 867
goto label_30;
#line 867
label_30:
;
#line 867
//clear ___nl__bool__5;
#line 867
//clear ___nl__bool__6;
#line 868
___nl__bool__7 = true;
#line 868
c_rt_lib0clear(&___nl__im__0);
#line 868
return ___nl__bool__7;
return false;

}

ImmT  generator_js_priv0print(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 872
c_rt_lib0move(&___nl__im__2,___get_global_string_const(66));
#line 872
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 872
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 872
c_rt_lib0move(&___nl__string__3,___get_global_string_const(66));
#line 872
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 872
c_rt_lib0clear(&___nl__im__2);
#line 872
c_rt_lib0clear(&___nl__string__3);
#line 872
c_rt_lib0clear(&___nl__im__0);
#line 872
return NULL;
return NULL;

}

ImmT  generator_js_priv0println(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 876
c_rt_lib0move(&___nl__im__3, string0lf());
#line 876
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 876
c_rt_lib0clear(&___nl__im__3);
#line 876
c_rt_lib0delete(generator_js_priv0print(___nl__im__2, ___ref___im__1));
#line 876
c_rt_lib0clear(&___nl__im__2);
#line 876
c_rt_lib0clear(&___nl__im__0);
#line 876
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
