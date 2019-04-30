
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
ImmT  generator_js_priv0print_const_value_aggr(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
ImmT  generator_js_priv0get_function_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0get_function_call_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0get_function_call_name_raw(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0escape_string(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_str_imm(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
bool  generator_js_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0);
ImmT  generator_js_priv0print_function_or_singleton(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  generator_js_priv0print_function(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  generator_js_priv0print_command(nlasm0cmd_t0type ___nl__im__0,nlasm0args_type0type ___nl__im__1,INT * ___ref___int__2,ImmT * ___ref___im__3);
ImmT  generator_js_priv0print_move(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0print_load_const(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  generator_js_priv0print_array_push(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0print_array_len(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0print_use_index(nlasm0use_index_t0type ___nl__im__0);
ImmT  generator_js_priv0print_use_hash_index(nlasm0use_hash_index_t0type ___nl__im__0);
ImmT  generator_js_priv0print_hash_init_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0print_hash_next_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0print_hash_get_key_iter(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0print_hash_is_end(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0print_arr(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
ImmT  generator_js_priv0imm_call(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_bin_op(nlasm0bin_op0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0print_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,nlasm0reg_t0type ___nl__im__3,INT * ___ref___int__4);
ImmT  generator_js_priv0print_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,ImmT * ___ref___im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0print_ov_is(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,INT  ___nl__int__3,INT * ___ref___int__4,ImmT * ___ref___im__5);
ImmT  generator_js_priv0process_ref_reg(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,nlasm0reg_t0type ___nl__im__3,INT  ___nl__int__4,INT  ___nl__int__5);
ImmT  generator_js_priv0print_internal_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,INT * ___ref___int__3);
ImmT  generator_js_priv0print_int_call_sim(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_js_priv0print_const_arr(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_const_hash(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_const_ov(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_const_value(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_goto(INT  ___nl__int__0);
ImmT  generator_js_priv0print_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
ImmT  generator_js_priv0print_empty_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
ImmT  generator_js_priv0print_register(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_register_value(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_register_reference(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0reg_suffix(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_register_to_assign(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_register_value_to_assign(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_return(nlasm0return0type ___nl__im__0,nlasm0args_type0type ___nl__im__1);
ImmT  generator_js_priv0print_una_op(nlasm0una_op_t0type ___nl__im__0);
ImmT  generator_js_priv0get_im_from_value(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0get_value_from_im(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1);
bool  generator_js_priv0takes_own_arg(nlasm0function_t0type ___nl__im__0);
bool  generator_js_priv0is_own(nlasm0reg_type0type ___nl__im__0);


ImmT generator_js_priv0get_namespace_name(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(0);
}
ImmT generator_js_priv0get_namespace_name0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 14
c_rt_lib0move(&___nl__im__0,___get_global_string_const(726));
#line 14
return ___nl__im__0;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
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
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
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
ImmT  ___nl__string__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
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
#line 18
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 19
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_string_const(727));
#line 19
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__4, ___get_global_string_const(168), ___nl__im__5));
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 20
___nl__int__8 = 0;
#line 20
___nl__int__9 = 1;
#line 20
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 20
label_10:
;
#line 20
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 20
if(___nl__bool__11){ goto label_23;}
#line 20
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 20
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 20
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 20
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_function_or_singleton(___nl__im__7, ___nl__im__14, &___nl__im__3));
#line 20
c_rt_lib0clear(&___nl__im__14);
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 20
c_rt_lib0clear(&___nl__im__13);
#line 20
c_rt_lib0clear(&___nl__im__7);
#line 20
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 20
goto label_10;
#line 20
label_23:
;
#line 21
c_rt_lib0move(&___nl__im__17,___get_global_string_const(728));
#line 21
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(168)));
#line 21
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 21
c_rt_lib0clear(&___nl__im__17);
#line 21
c_rt_lib0clear(&___nl__im__18);
#line 21
c_rt_lib0move(&___nl__im__19,___get_global_string_const(729));
#line 21
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 21
c_rt_lib0clear(&___nl__im__16);
#line 21
c_rt_lib0clear(&___nl__im__19);
#line 21
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 21
c_rt_lib0clear(&___nl__im__15);
#line 22
___nl__int__20 = 0;
#line 23
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(127)));
#line 23
___nl__int__23 = 0;
#line 23
___nl__int__24 = 1;
#line 23
___nl__int__25 = c_rt_lib0array_len(___nl__im__21);
#line 23
label_40:
;
#line 23
___nl__bool__26 = ___nl__int__23 >= ___nl__int__25;
#line 23
if(___nl__bool__26){ goto label_74;}
#line 23
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__21, ___nl__int__23));
#line 23
c_rt_lib0copy(&___nl__im__22, ___nl__im__27);
#line 24
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(168)));
#line 24
c_rt_lib0move(&___nl__im__34,___get_global_string_const(316));
#line 24
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 24
c_rt_lib0clear(&___nl__im__34);
#line 24
c_rt_lib0move(&___nl__string__35, c_rt_lib0int_to_string(___nl__int__20));
#line 24
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__35));
#line 24
c_rt_lib0clear(&___nl__im__32);
#line 24
c_rt_lib0clear(&___nl__string__35);
#line 24
c_rt_lib0move(&___nl__im__36,___get_global_string_const(518));
#line 24
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__36));
#line 24
c_rt_lib0clear(&___nl__im__31);
#line 24
c_rt_lib0clear(&___nl__im__36);
#line 24
c_rt_lib0move(&___nl__im__37, generator_js_priv0print_const_value(___nl__im__22));
#line 24
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 24
c_rt_lib0clear(&___nl__im__30);
#line 24
c_rt_lib0clear(&___nl__im__37);
#line 24
c_rt_lib0move(&___nl__im__38,___get_global_string_const(442));
#line 24
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__38));
#line 24
c_rt_lib0clear(&___nl__im__29);
#line 24
c_rt_lib0clear(&___nl__im__38);
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 24
c_rt_lib0clear(&___nl__im__28);
#line 25
___nl__int__39 = 1;
#line 25
___nl__int__20 = ___nl__int__20 + ___nl__int__39;
#line 25
//clear ___nl__int__39;
#line 25
c_rt_lib0clear(&___nl__im__22);
#line 26
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 26
goto label_40;
#line 26
label_74:
;
#line 27
c_rt_lib0move(&___nl__im__55,___get_global_string_const(728));
#line 27
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__1));
#line 27
c_rt_lib0clear(&___nl__im__55);
#line 27
c_rt_lib0move(&___nl__im__56,___get_global_string_const(730));
#line 27
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__56));
#line 27
c_rt_lib0clear(&___nl__im__54);
#line 27
c_rt_lib0clear(&___nl__im__56);
#line 28
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_namespace_name());
#line 28
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__57));
#line 28
c_rt_lib0clear(&___nl__im__53);
#line 28
c_rt_lib0clear(&___nl__im__57);
#line 28
c_rt_lib0move(&___nl__im__58,___get_global_string_const(731));
#line 28
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__58));
#line 28
c_rt_lib0clear(&___nl__im__52);
#line 28
c_rt_lib0clear(&___nl__im__58);
#line 29
c_rt_lib0move(&___nl__im__59, generator_js_priv0get_namespace_name());
#line 29
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__59));
#line 29
c_rt_lib0clear(&___nl__im__51);
#line 29
c_rt_lib0clear(&___nl__im__59);
#line 29
c_rt_lib0move(&___nl__im__60,___get_global_string_const(110));
#line 29
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__60));
#line 29
c_rt_lib0clear(&___nl__im__50);
#line 29
c_rt_lib0clear(&___nl__im__60);
#line 29
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 29
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__61));
#line 29
c_rt_lib0clear(&___nl__im__49);
#line 29
c_rt_lib0clear(&___nl__im__61);
#line 29
c_rt_lib0move(&___nl__im__62,___get_global_string_const(732));
#line 29
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__62));
#line 29
c_rt_lib0clear(&___nl__im__48);
#line 29
c_rt_lib0clear(&___nl__im__62);
#line 29
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__2));
#line 29
c_rt_lib0clear(&___nl__im__47);
#line 30
c_rt_lib0move(&___nl__im__63,___get_global_string_const(733));
#line 30
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__63));
#line 30
c_rt_lib0clear(&___nl__im__46);
#line 30
c_rt_lib0clear(&___nl__im__63);
#line 30
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__1));
#line 30
c_rt_lib0clear(&___nl__im__45);
#line 31
c_rt_lib0move(&___nl__im__64,___get_global_string_const(504));
#line 31
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__64));
#line 31
c_rt_lib0clear(&___nl__im__44);
#line 31
c_rt_lib0clear(&___nl__im__64);
#line 31
c_rt_lib0move(&___nl__im__65,___get_global_string_const(469));
#line 31
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__65));
#line 31
c_rt_lib0clear(&___nl__im__43);
#line 31
c_rt_lib0clear(&___nl__im__65);
#line 31
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__1));
#line 31
c_rt_lib0clear(&___nl__im__42);
#line 31
c_rt_lib0move(&___nl__im__66,___get_global_string_const(734));
#line 31
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__66));
#line 31
c_rt_lib0clear(&___nl__im__41);
#line 31
c_rt_lib0clear(&___nl__im__66);
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
//clear ___nl__int__8;
#line 31
//clear ___nl__int__9;
#line 31
//clear ___nl__int__10;
#line 31
//clear ___nl__bool__11;
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
//clear ___nl__int__20;
#line 31
c_rt_lib0clear(&___nl__im__21);
#line 31
c_rt_lib0clear(&___nl__im__22);
#line 31
//clear ___nl__int__23;
#line 31
//clear ___nl__int__24;
#line 31
//clear ___nl__int__25;
#line 31
//clear ___nl__bool__26;
#line 31
c_rt_lib0clear(&___nl__im__27);
#line 31
return ___nl__im__40;
return NULL;

}

ImmT  generator_js_priv0print_const_value_aggr(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 35
c_rt_lib0move(&___nl__im__2,___get_global_string_const(127));
#line 35
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 35
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__0));
#line 35
c_rt_lib0move(&___nl__string__3,___get_global_string_const(127));
#line 35
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__string__3);
#line 36
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(168)));
#line 36
c_rt_lib0move(&___nl__im__8,___get_global_string_const(316));
#line 36
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0clear(&___nl__im__8);
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(127)));
#line 36
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 36
c_rt_lib0clear(&___nl__im__11);
#line 36
___nl__int__12 = 1;
#line 36
___nl__int__9 = ___nl__int__10 - ___nl__int__12;
#line 36
//clear ___nl__int__10;
#line 36
//clear ___nl__int__12;
#line 36
c_rt_lib0move(&___nl__string__13, c_rt_lib0int_to_string(___nl__int__9));
#line 36
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__13));
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
//clear ___nl__int__9;
#line 36
c_rt_lib0clear(&___nl__string__13);
#line 36
c_rt_lib0move(&___nl__im__14,___get_global_string_const(317));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__14);
#line 36
c_rt_lib0clear(&___nl__im__0);
#line 36
return ___nl__im__4;
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
#line 40
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 40
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(211));
#line 40
if(___nl__bool__3){ goto label_8;}
#line 42
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(467));
#line 42
if(___nl__bool__3){ goto label_23;}
#line 42
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 42
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 42
nl_die_arg(___nl__im__4);
#line 40
label_8:
;
#line 41
c_rt_lib0move(&___nl__im__7,___get_global_string_const(110));
#line 41
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 41
c_rt_lib0clear(&___nl__im__7);
#line 41
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 41
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 41
c_rt_lib0clear(&___nl__im__6);
#line 41
c_rt_lib0clear(&___nl__im__8);
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
//clear ___nl__bool__3;
#line 41
c_rt_lib0clear(&___nl__im__4);
#line 41
return ___nl__im__5;
#line 42
goto label_37;
#line 42
label_23:
;
#line 43
c_rt_lib0move(&___nl__im__10,___get_global_string_const(735));
#line 43
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 43
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 43
c_rt_lib0clear(&___nl__im__10);
#line 43
c_rt_lib0clear(&___nl__im__11);
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
c_rt_lib0clear(&___nl__im__1);
#line 43
c_rt_lib0clear(&___nl__im__2);
#line 43
//clear ___nl__bool__3;
#line 43
c_rt_lib0clear(&___nl__im__4);
#line 43
c_rt_lib0clear(&___nl__im__5);
#line 43
return ___nl__im__9;
#line 44
goto label_37;
#line 44
label_37:
;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
//clear ___nl__bool__3;
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__9);
#line 44
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
#line 48
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 48
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(211));
#line 48
if(___nl__bool__4){ goto label_9;}
#line 50
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(467));
#line 50
if(___nl__bool__4){ goto label_12;}
#line 50
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 50
nl_die_arg(___nl__im__5);
#line 48
label_9:
;
#line 49
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 50
goto label_15;
#line 50
label_12:
;
#line 51
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 52
goto label_15;
#line 52
label_15:
;
#line 53
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 53
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_call_name_raw(___nl__im__7, ___nl__im__2));
#line 53
c_rt_lib0clear(&___nl__im__7);
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
c_rt_lib0clear(&___nl__im__3);
#line 53
//clear ___nl__bool__4;
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
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
#line 57
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 57
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 57
c_rt_lib0clear(&___nl__im__3);
#line 57
___nl__bool__2 = !___nl__bool__2;
#line 57
if(___nl__bool__2){ goto label_13;}
#line 58
c_rt_lib0move(&___nl__im__5,___get_global_string_const(735));
#line 58
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 58
c_rt_lib0clear(&___nl__im__5);
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
//clear ___nl__bool__2;
#line 58
return ___nl__im__4;
#line 59
goto label_33;
#line 59
label_13:
;
#line 60
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 60
c_rt_lib0move(&___nl__im__11,___get_global_string_const(110));
#line 60
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 60
c_rt_lib0clear(&___nl__im__11);
#line 60
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0move(&___nl__im__12,___get_global_string_const(110));
#line 60
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__12);
#line 60
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
c_rt_lib0clear(&___nl__im__0);
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
//clear ___nl__bool__2;
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
return ___nl__im__6;
#line 61
goto label_33;
#line 61
label_33:
;
#line 61
//clear ___nl__bool__2;
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
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
#line 65
c_rt_lib0move(&___nl__im__1,___get_global_string_const(109));
#line 65
c_rt_lib0move(&___nl__im__2,___get_global_string_const(325));
#line 65
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0move(&___nl__im__3,___get_global_string_const(281));
#line 66
c_rt_lib0move(&___nl__im__4,___get_global_string_const(326));
#line 66
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 67
c_rt_lib0move(&___nl__im__5, string0lf());
#line 67
c_rt_lib0move(&___nl__im__6,___get_global_string_const(329));
#line 67
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 68
c_rt_lib0move(&___nl__im__7, string0r());
#line 68
c_rt_lib0move(&___nl__im__8,___get_global_string_const(330));
#line 68
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 68
c_rt_lib0clear(&___nl__im__7);
#line 68
c_rt_lib0clear(&___nl__im__8);
#line 69
___nl__int__10 = 0;
#line 69
c_rt_lib0move(&___nl__im__9, string0chr(___nl__int__10));
#line 69
//clear ___nl__int__10;
#line 69
c_rt_lib0move(&___nl__im__11,___get_global_string_const(619));
#line 69
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 69
c_rt_lib0clear(&___nl__im__9);
#line 69
c_rt_lib0clear(&___nl__im__11);
#line 70
c_rt_lib0move(&___nl__im__12, string0tab());
#line 70
c_rt_lib0move(&___nl__im__13,___get_global_string_const(613));
#line 70
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 70
c_rt_lib0clear(&___nl__im__12);
#line 70
c_rt_lib0clear(&___nl__im__13);
#line 72
c_rt_lib0move(&___nl__im__16,___get_global_string_const(281));
#line 72
c_rt_lib0move(&___nl__im__18, string0lf());
#line 72
c_rt_lib0move(&___nl__im__19,___get_global_string_const(329));
#line 72
c_rt_lib0move(&___nl__im__17, string0replace(___nl__im__0, ___nl__im__18, ___nl__im__19));
#line 72
c_rt_lib0clear(&___nl__im__18);
#line 72
c_rt_lib0clear(&___nl__im__19);
#line 72
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 72
c_rt_lib0clear(&___nl__im__16);
#line 72
c_rt_lib0clear(&___nl__im__17);
#line 72
c_rt_lib0move(&___nl__im__20,___get_global_string_const(281));
#line 72
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 72
c_rt_lib0clear(&___nl__im__15);
#line 72
c_rt_lib0clear(&___nl__im__20);
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0print_str_imm(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 76
c_rt_lib0move(&___nl__im__2, generator_js_priv0print_const_value_aggr(___nl__im__0, ___ref___im__1));
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
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
#line 80
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 80
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 80
c_rt_lib0clear(&___nl__im__3);
#line 80
___nl__int__4 = 0;
#line 80
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 80
//clear ___nl__int__2;
#line 80
//clear ___nl__int__4;
#line 80
___nl__bool__1 = !___nl__bool__1;
#line 80
if(___nl__bool__1){ goto label_14;}
#line 80
___nl__bool__5 = false;
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
//clear ___nl__bool__1;
#line 80
return ___nl__bool__5;
#line 80
goto label_14;
#line 80
label_14:
;
#line 80
//clear ___nl__bool__1;
#line 80
//clear ___nl__bool__5;
#line 81
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(227)));
#line 81
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(194));
#line 81
c_rt_lib0clear(&___nl__im__7);
#line 81
___nl__bool__6 = !___nl__bool__6;
#line 81
if(___nl__bool__6){ goto label_27;}
#line 81
___nl__bool__8 = true;
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
//clear ___nl__bool__6;
#line 81
return ___nl__bool__8;
#line 81
goto label_27;
#line 81
label_27:
;
#line 81
//clear ___nl__bool__6;
#line 81
//clear ___nl__bool__8;
#line 82
___nl__bool__9 = false;
#line 83
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 83
___nl__int__12 = 1;
#line 83
___nl__int__12 = -___nl__int__12;
#line 83
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 83
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 83
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__11, ___get_global_string_const(219), ___nl__im__13, ___get_global_string_const(353), ___nl__im__14));
#line 83
c_rt_lib0clear(&___nl__im__11);
#line 83
//clear ___nl__int__12;
#line 83
c_rt_lib0clear(&___nl__im__13);
#line 83
c_rt_lib0clear(&___nl__im__14);
#line 84
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 84
___nl__int__17 = 0;
#line 84
___nl__int__18 = 1;
#line 84
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 84
label_45:
;
#line 84
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 84
if(___nl__bool__20){ goto label_209;}
#line 84
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 84
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 85
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(228)));
#line 86
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(234));
#line 86
___nl__bool__23 = !___nl__bool__23;
#line 86
if(___nl__bool__23){ goto label_90;}
#line 87
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(234)));
#line 88
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(270)));
#line 88
c_rt_lib0move(&___nl__im__27,___get_global_string_const(541));
#line 88
___nl__bool__25 = c_rt_lib0eq(___nl__im__26, ___nl__im__27);
#line 88
c_rt_lib0clear(&___nl__im__26);
#line 88
c_rt_lib0clear(&___nl__im__27);
#line 88
___nl__bool__25 = !___nl__bool__25;
#line 88
___nl__bool__25 = !___nl__bool__25;
#line 88
if(___nl__bool__25){ goto label_69;}
#line 88
c_rt_lib0clear(&___nl__im__22);
#line 88
//clear ___nl__bool__23;
#line 88
c_rt_lib0clear(&___nl__im__24);
#line 88
//clear ___nl__bool__25;
#line 88
goto label_206;
#line 88
goto label_69;
#line 88
label_69:
;
#line 88
//clear ___nl__bool__25;
#line 89
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(268)));
#line 89
c_rt_lib0move(&___nl__im__30,___get_global_string_const(407));
#line 89
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 89
c_rt_lib0clear(&___nl__im__29);
#line 89
c_rt_lib0clear(&___nl__im__30);
#line 89
___nl__bool__28 = !___nl__bool__28;
#line 89
___nl__bool__28 = !___nl__bool__28;
#line 89
if(___nl__bool__28){ goto label_85;}
#line 89
c_rt_lib0clear(&___nl__im__22);
#line 89
//clear ___nl__bool__23;
#line 89
c_rt_lib0clear(&___nl__im__24);
#line 89
//clear ___nl__bool__28;
#line 89
goto label_206;
#line 89
goto label_85;
#line 89
label_85:
;
#line 89
//clear ___nl__bool__28;
#line 90
___nl__bool__9 = true;
#line 91
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 92
goto label_200;
#line 92
label_90:
;
#line 92
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(248));
#line 92
___nl__bool__23 = !___nl__bool__23;
#line 92
if(___nl__bool__23){ goto label_163;}
#line 93
___nl__bool__31 = ___nl__bool__9;
#line 93
___nl__bool__31 = !___nl__bool__31;
#line 93
___nl__bool__31 = !___nl__bool__31;
#line 93
if(___nl__bool__31){ goto label_115;}
#line 93
___nl__bool__32 = false;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
//clear ___nl__bool__9;
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
c_rt_lib0clear(&___nl__im__15);
#line 93
c_rt_lib0clear(&___nl__im__16);
#line 93
//clear ___nl__int__17;
#line 93
//clear ___nl__int__18;
#line 93
//clear ___nl__int__19;
#line 93
//clear ___nl__bool__20;
#line 93
c_rt_lib0clear(&___nl__im__21);
#line 93
c_rt_lib0clear(&___nl__im__22);
#line 93
//clear ___nl__bool__23;
#line 93
c_rt_lib0clear(&___nl__im__24);
#line 93
//clear ___nl__bool__31;
#line 93
return ___nl__bool__32;
#line 93
goto label_115;
#line 93
label_115:
;
#line 93
//clear ___nl__bool__31;
#line 93
//clear ___nl__bool__32;
#line 94
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(248)));
#line 95
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(225));
#line 95
___nl__bool__34 = !___nl__bool__34;
#line 95
___nl__bool__34 = !___nl__bool__34;
#line 95
if(___nl__bool__34){ goto label_141;}
#line 95
___nl__bool__35 = false;
#line 95
c_rt_lib0clear(&___nl__im__0);
#line 95
//clear ___nl__bool__9;
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
//clear ___nl__int__17;
#line 95
//clear ___nl__int__18;
#line 95
//clear ___nl__int__19;
#line 95
//clear ___nl__bool__20;
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
//clear ___nl__bool__23;
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
c_rt_lib0clear(&___nl__im__33);
#line 95
//clear ___nl__bool__34;
#line 95
return ___nl__bool__35;
#line 95
goto label_141;
#line 95
label_141:
;
#line 95
//clear ___nl__bool__34;
#line 95
//clear ___nl__bool__35;
#line 96
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(225)));
#line 96
___nl__bool__36 = nlasm0eq_reg(___nl__im__37, ___nl__im__10);
#line 96
c_rt_lib0clear(&___nl__im__37);
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
//clear ___nl__bool__9;
#line 96
c_rt_lib0clear(&___nl__im__10);
#line 96
c_rt_lib0clear(&___nl__im__15);
#line 96
c_rt_lib0clear(&___nl__im__16);
#line 96
//clear ___nl__int__17;
#line 96
//clear ___nl__int__18;
#line 96
//clear ___nl__int__19;
#line 96
//clear ___nl__bool__20;
#line 96
c_rt_lib0clear(&___nl__im__21);
#line 96
c_rt_lib0clear(&___nl__im__22);
#line 96
//clear ___nl__bool__23;
#line 96
c_rt_lib0clear(&___nl__im__24);
#line 96
c_rt_lib0clear(&___nl__im__33);
#line 96
return ___nl__bool__36;
#line 97
goto label_200;
#line 97
label_163:
;
#line 97
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(250));
#line 97
___nl__bool__23 = !___nl__bool__23;
#line 97
if(___nl__bool__23){ goto label_168;}
#line 98
goto label_200;
#line 98
label_168:
;
#line 98
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(253));
#line 98
___nl__bool__23 = !___nl__bool__23;
#line 98
if(___nl__bool__23){ goto label_173;}
#line 99
goto label_200;
#line 99
label_173:
;
#line 100
___nl__bool__38 = ___nl__bool__9;
#line 100
___nl__bool__38 = !___nl__bool__38;
#line 100
if(___nl__bool__38){ goto label_196;}
#line 100
___nl__bool__39 = false;
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
//clear ___nl__bool__9;
#line 100
c_rt_lib0clear(&___nl__im__10);
#line 100
c_rt_lib0clear(&___nl__im__15);
#line 100
c_rt_lib0clear(&___nl__im__16);
#line 100
//clear ___nl__int__17;
#line 100
//clear ___nl__int__18;
#line 100
//clear ___nl__int__19;
#line 100
//clear ___nl__bool__20;
#line 100
c_rt_lib0clear(&___nl__im__21);
#line 100
c_rt_lib0clear(&___nl__im__22);
#line 100
//clear ___nl__bool__23;
#line 100
c_rt_lib0clear(&___nl__im__24);
#line 100
c_rt_lib0clear(&___nl__im__33);
#line 100
//clear ___nl__bool__36;
#line 100
//clear ___nl__bool__38;
#line 100
return ___nl__bool__39;
#line 100
goto label_196;
#line 100
label_196:
;
#line 100
//clear ___nl__bool__38;
#line 100
//clear ___nl__bool__39;
#line 101
goto label_200;
#line 101
label_200:
;
#line 101
//clear ___nl__bool__23;
#line 101
c_rt_lib0clear(&___nl__im__24);
#line 101
c_rt_lib0clear(&___nl__im__33);
#line 101
//clear ___nl__bool__36;
#line 101
c_rt_lib0clear(&___nl__im__16);
#line 101
label_206:
;
#line 102
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 102
goto label_45;
#line 102
label_209:
;
#line 103
___nl__bool__40 = false;
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
//clear ___nl__bool__9;
#line 103
c_rt_lib0clear(&___nl__im__10);
#line 103
c_rt_lib0clear(&___nl__im__15);
#line 103
c_rt_lib0clear(&___nl__im__16);
#line 103
//clear ___nl__int__17;
#line 103
//clear ___nl__int__18;
#line 103
//clear ___nl__int__19;
#line 103
//clear ___nl__bool__20;
#line 103
c_rt_lib0clear(&___nl__im__21);
#line 103
c_rt_lib0clear(&___nl__im__22);
#line 103
return ___nl__bool__40;
return false;

}

ImmT  generator_js_priv0print_function_or_singleton(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
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
bool  ___nl__bool__50 = false;
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
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
bool  ___nl__bool__73 = false;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__string__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__string__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__string__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
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
ImmT  ___nl__string__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__string__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__string__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
INT  ___nl__int__130 = 0;
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
#line 107
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 108
___nl__bool__4 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 108
___nl__bool__4 = !___nl__bool__4;
#line 108
if(___nl__bool__4){ goto label_104;}
#line 109
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 110
c_rt_lib0copy(&___nl__im__6, ___nl__im__0);
#line 111
c_rt_lib0move(&___nl__im__8,___get_global_string_const(736));
#line 111
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 111
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(168), ___nl__im__10);
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
c_rt_lib0clear(&___nl__im__10);
#line 112
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(467)));
#line 112
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 112
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(210), ___nl__im__12);
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 112
c_rt_lib0clear(&___nl__im__12);
#line 113
c_rt_lib0move(&___nl__im__14,___get_global_string_const(737));
#line 113
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_function_name(___nl__im__6, ___nl__im__1));
#line 113
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0clear(&___nl__im__15);
#line 114
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_function(___nl__im__6, ___nl__im__1, ___ref___im__2));
#line 115
c_rt_lib0move(&___nl__im__19,___get_global_string_const(728));
#line 115
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__13));
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0move(&___nl__im__20,___get_global_string_const(442));
#line 115
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 115
c_rt_lib0clear(&___nl__im__18);
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
c_rt_lib0move(&___nl__im__21, string0lf());
#line 115
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 115
c_rt_lib0clear(&___nl__im__17);
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__16));
#line 115
c_rt_lib0clear(&___nl__im__16);
#line 116
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 116
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(211));
#line 116
if(___nl__bool__23){ goto label_47;}
#line 118
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(467));
#line 118
if(___nl__bool__23){ goto label_62;}
#line 118
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 118
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__22));
#line 118
nl_die_arg(___nl__im__24);
#line 116
label_47:
;
#line 117
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_namespace_name());
#line 117
c_rt_lib0move(&___nl__im__29,___get_global_string_const(110));
#line 117
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 117
c_rt_lib0clear(&___nl__im__28);
#line 117
c_rt_lib0clear(&___nl__im__29);
#line 117
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__5));
#line 117
c_rt_lib0clear(&___nl__im__27);
#line 117
c_rt_lib0move(&___nl__im__30,___get_global_string_const(738));
#line 117
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 117
c_rt_lib0clear(&___nl__im__26);
#line 117
c_rt_lib0clear(&___nl__im__30);
#line 117
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__25));
#line 117
c_rt_lib0clear(&___nl__im__25);
#line 118
goto label_73;
#line 118
label_62:
;
#line 119
c_rt_lib0move(&___nl__im__33,___get_global_string_const(739));
#line 119
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__5));
#line 119
c_rt_lib0clear(&___nl__im__33);
#line 119
c_rt_lib0move(&___nl__im__34,___get_global_string_const(740));
#line 119
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__34));
#line 119
c_rt_lib0clear(&___nl__im__32);
#line 119
c_rt_lib0clear(&___nl__im__34);
#line 119
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__31));
#line 119
c_rt_lib0clear(&___nl__im__31);
#line 120
goto label_73;
#line 120
label_73:
;
#line 122
c_rt_lib0move(&___nl__im__43,___get_global_string_const(741));
#line 122
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__13));
#line 122
c_rt_lib0clear(&___nl__im__43);
#line 122
c_rt_lib0move(&___nl__im__44,___get_global_string_const(742));
#line 122
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__44));
#line 122
c_rt_lib0clear(&___nl__im__42);
#line 122
c_rt_lib0clear(&___nl__im__44);
#line 122
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__13));
#line 122
c_rt_lib0clear(&___nl__im__41);
#line 123
c_rt_lib0move(&___nl__im__45,___get_global_string_const(504));
#line 123
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__45));
#line 123
c_rt_lib0clear(&___nl__im__40);
#line 123
c_rt_lib0clear(&___nl__im__45);
#line 123
c_rt_lib0move(&___nl__im__46, generator_js_priv0get_function_call_name(___nl__im__6, ___nl__im__1));
#line 123
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__46));
#line 123
c_rt_lib0clear(&___nl__im__39);
#line 123
c_rt_lib0clear(&___nl__im__46);
#line 123
c_rt_lib0move(&___nl__im__47,___get_global_string_const(743));
#line 123
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__47));
#line 123
c_rt_lib0clear(&___nl__im__38);
#line 123
c_rt_lib0clear(&___nl__im__47);
#line 123
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__13));
#line 123
c_rt_lib0clear(&___nl__im__37);
#line 125
c_rt_lib0move(&___nl__im__48,___get_global_string_const(744));
#line 125
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__48));
#line 125
c_rt_lib0clear(&___nl__im__36);
#line 125
c_rt_lib0clear(&___nl__im__48);
#line 125
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__35));
#line 125
c_rt_lib0clear(&___nl__im__35);
#line 127
goto label_107;
#line 127
label_104:
;
#line 128
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_function(___nl__im__0, ___nl__im__1, ___ref___im__2));
#line 129
goto label_107;
#line 129
label_107:
;
#line 129
//clear ___nl__bool__4;
#line 129
c_rt_lib0clear(&___nl__im__5);
#line 129
c_rt_lib0clear(&___nl__im__6);
#line 129
c_rt_lib0clear(&___nl__im__13);
#line 129
c_rt_lib0clear(&___nl__im__22);
#line 129
//clear ___nl__bool__23;
#line 129
c_rt_lib0clear(&___nl__im__24);
#line 131
c_rt_lib0move(&___nl__im__49, string0lf());
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__49));
#line 131
c_rt_lib0clear(&___nl__im__49);
#line 132
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 132
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__52, ___get_global_string_const(211));
#line 132
c_rt_lib0clear(&___nl__im__52);
#line 132
___nl__bool__51 = !___nl__bool__50;
#line 132
if(___nl__bool__51){ goto label_125;}
#line 132
___nl__bool__50 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 132
___nl__bool__50 = !___nl__bool__50;
#line 132
label_125:
;
#line 132
//clear ___nl__bool__51;
#line 132
___nl__bool__50 = !___nl__bool__50;
#line 132
if(___nl__bool__50){ goto label_341;}
#line 133
c_rt_lib0move(&___nl__im__59, generator_js_priv0get_namespace_name());
#line 133
c_rt_lib0move(&___nl__im__60,___get_global_string_const(110));
#line 133
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__60));
#line 133
c_rt_lib0clear(&___nl__im__59);
#line 133
c_rt_lib0clear(&___nl__im__60);
#line 133
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__1));
#line 133
c_rt_lib0clear(&___nl__im__58);
#line 133
c_rt_lib0move(&___nl__im__61,___get_global_string_const(745));
#line 133
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__61));
#line 133
c_rt_lib0clear(&___nl__im__57);
#line 133
c_rt_lib0clear(&___nl__im__61);
#line 133
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 133
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__62));
#line 133
c_rt_lib0clear(&___nl__im__56);
#line 133
c_rt_lib0clear(&___nl__im__62);
#line 133
c_rt_lib0move(&___nl__im__63,___get_global_string_const(746));
#line 133
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__63));
#line 133
c_rt_lib0clear(&___nl__im__55);
#line 133
c_rt_lib0clear(&___nl__im__63);
#line 133
c_rt_lib0move(&___nl__im__64, string0lf());
#line 133
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__64));
#line 133
c_rt_lib0clear(&___nl__im__54);
#line 133
c_rt_lib0clear(&___nl__im__64);
#line 133
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__53));
#line 133
c_rt_lib0clear(&___nl__im__53);
#line 134
___nl__int__65 = 0;
#line 135
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 136
c_rt_lib0move(&___nl__im__67,___get_global_string_const(36));
#line 137
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 137
___nl__int__70 = 0;
#line 137
___nl__int__71 = 1;
#line 137
___nl__int__72 = c_rt_lib0array_len(___nl__im__68);
#line 137
label_161:
;
#line 137
___nl__bool__73 = ___nl__int__70 >= ___nl__int__72;
#line 137
if(___nl__bool__73){ goto label_299;}
#line 137
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_get(___nl__im__68, ___nl__int__70));
#line 137
c_rt_lib0copy(&___nl__im__69, ___nl__im__74);
#line 138
___nl__int__76 = 0;
#line 138
___nl__bool__75 = ___nl__int__65 == ___nl__int__76;
#line 138
//clear ___nl__int__76;
#line 138
___nl__bool__75 = !___nl__bool__75;
#line 138
___nl__bool__75 = !___nl__bool__75;
#line 138
if(___nl__bool__75){ goto label_176;}
#line 138
c_rt_lib0move(&___nl__im__77,___get_global_string_const(328));
#line 138
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__77));
#line 138
c_rt_lib0clear(&___nl__im__77);
#line 138
goto label_176;
#line 138
label_176:
;
#line 138
//clear ___nl__bool__75;
#line 139
c_rt_lib0move(&___nl__im__79,___get_global_string_const(279));
#line 139
c_rt_lib0move(&___nl__string__80, c_rt_lib0int_to_string(___nl__int__65));
#line 139
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__string__80));
#line 139
c_rt_lib0clear(&___nl__im__79);
#line 139
c_rt_lib0clear(&___nl__string__80);
#line 139
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__78));
#line 139
c_rt_lib0clear(&___nl__im__78);
#line 140
c_rt_lib0move(&___nl__im__83,___get_global_string_const(747));
#line 140
c_rt_lib0move(&___nl__string__84, c_rt_lib0int_to_string(___nl__int__65));
#line 140
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__string__84));
#line 140
c_rt_lib0clear(&___nl__im__83);
#line 140
c_rt_lib0clear(&___nl__string__84);
#line 140
c_rt_lib0move(&___nl__im__85,___get_global_string_const(504));
#line 140
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__85));
#line 140
c_rt_lib0clear(&___nl__im__82);
#line 140
c_rt_lib0clear(&___nl__im__85);
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__81));
#line 140
c_rt_lib0clear(&___nl__im__81);
#line 141
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(471)));
#line 141
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(206)));
#line 141
c_rt_lib0clear(&___nl__im__88);
#line 141
c_rt_lib0move(&___nl__im__91,___get_global_string_const(748));
#line 141
c_rt_lib0move(&___nl__string__92, c_rt_lib0int_to_string(___nl__int__65));
#line 141
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__string__92));
#line 141
c_rt_lib0clear(&___nl__im__91);
#line 141
c_rt_lib0clear(&___nl__string__92);
#line 141
c_rt_lib0move(&___nl__im__93,___get_global_string_const(322));
#line 141
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__93));
#line 141
c_rt_lib0clear(&___nl__im__90);
#line 141
c_rt_lib0clear(&___nl__im__93);
#line 141
c_rt_lib0move(&___nl__im__86, generator_js_priv0get_value_from_im(___nl__im__87, ___nl__im__89));
#line 141
c_rt_lib0clear(&___nl__im__87);
#line 141
c_rt_lib0clear(&___nl__im__89);
#line 142
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(355)));
#line 142
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(39));
#line 142
if(___nl__bool__95){ goto label_219;}
#line 146
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(225));
#line 146
if(___nl__bool__95){ goto label_276;}
#line 146
c_rt_lib0move(&___nl__im__96,___get_global_string_const(15));
#line 146
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_mk(2, ___nl__im__96, ___nl__im__94));
#line 146
nl_die_arg(___nl__im__96);
#line 142
label_219:
;
#line 143
c_rt_lib0move(&___nl__im__101,___get_global_string_const(749));
#line 143
c_rt_lib0move(&___nl__im__103,___get_global_string_const(39));
#line 143
c_rt_lib0move(&___nl__im__102, generator_js_priv0imm_call(___nl__im__103));
#line 143
c_rt_lib0clear(&___nl__im__103);
#line 143
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__102));
#line 143
c_rt_lib0clear(&___nl__im__101);
#line 143
c_rt_lib0clear(&___nl__im__102);
#line 143
c_rt_lib0move(&___nl__im__104,___get_global_string_const(457));
#line 143
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__im__104));
#line 143
c_rt_lib0clear(&___nl__im__100);
#line 143
c_rt_lib0clear(&___nl__im__104);
#line 143
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__86));
#line 143
c_rt_lib0clear(&___nl__im__99);
#line 143
c_rt_lib0move(&___nl__im__105,___get_global_string_const(508));
#line 143
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__105));
#line 143
c_rt_lib0clear(&___nl__im__98);
#line 143
c_rt_lib0clear(&___nl__im__105);
#line 143
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__97));
#line 143
c_rt_lib0clear(&___nl__im__97);
#line 144
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(471)));
#line 144
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(206)));
#line 144
c_rt_lib0clear(&___nl__im__108);
#line 144
c_rt_lib0move(&___nl__im__111,___get_global_string_const(279));
#line 144
c_rt_lib0move(&___nl__string__112, c_rt_lib0int_to_string(___nl__int__65));
#line 144
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__string__112));
#line 144
c_rt_lib0clear(&___nl__im__111);
#line 144
c_rt_lib0clear(&___nl__string__112);
#line 144
c_rt_lib0move(&___nl__im__113,___get_global_string_const(750));
#line 144
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__113));
#line 144
c_rt_lib0clear(&___nl__im__110);
#line 144
c_rt_lib0clear(&___nl__im__113);
#line 144
c_rt_lib0move(&___nl__im__106, generator_js_priv0get_im_from_value(___nl__im__107, ___nl__im__109));
#line 144
c_rt_lib0clear(&___nl__im__107);
#line 144
c_rt_lib0clear(&___nl__im__109);
#line 145
c_rt_lib0move(&___nl__im__119,___get_global_string_const(751));
#line 145
c_rt_lib0move(&___nl__string__120, c_rt_lib0int_to_string(___nl__int__65));
#line 145
c_rt_lib0move(&___nl__im__118, c_rt_lib0concat_new(___nl__im__119, ___nl__string__120));
#line 145
c_rt_lib0clear(&___nl__im__119);
#line 145
c_rt_lib0clear(&___nl__string__120);
#line 145
c_rt_lib0move(&___nl__im__121,___get_global_string_const(328));
#line 145
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__121));
#line 145
c_rt_lib0clear(&___nl__im__118);
#line 145
c_rt_lib0clear(&___nl__im__121);
#line 145
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__106));
#line 145
c_rt_lib0clear(&___nl__im__117);
#line 145
c_rt_lib0move(&___nl__im__122,___get_global_string_const(508));
#line 145
c_rt_lib0move(&___nl__im__115, c_rt_lib0concat_new(___nl__im__116, ___nl__im__122));
#line 145
c_rt_lib0clear(&___nl__im__116);
#line 145
c_rt_lib0clear(&___nl__im__122);
#line 145
c_rt_lib0move(&___nl__im__123, string0lf());
#line 145
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__115, ___nl__im__123));
#line 145
c_rt_lib0clear(&___nl__im__115);
#line 145
c_rt_lib0clear(&___nl__im__123);
#line 145
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_add(___nl__im__67, ___nl__im__114));
#line 145
c_rt_lib0clear(&___nl__im__114);
#line 146
goto label_289;
#line 146
label_276:
;
#line 147
c_rt_lib0move(&___nl__im__126,___get_global_string_const(748));
#line 147
c_rt_lib0move(&___nl__string__127, c_rt_lib0int_to_string(___nl__int__65));
#line 147
c_rt_lib0move(&___nl__im__125, c_rt_lib0concat_new(___nl__im__126, ___nl__string__127));
#line 147
c_rt_lib0clear(&___nl__im__126);
#line 147
c_rt_lib0clear(&___nl__string__127);
#line 147
c_rt_lib0move(&___nl__im__128,___get_global_string_const(508));
#line 147
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__125, ___nl__im__128));
#line 147
c_rt_lib0clear(&___nl__im__125);
#line 147
c_rt_lib0clear(&___nl__im__128);
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__124));
#line 147
c_rt_lib0clear(&___nl__im__124);
#line 148
goto label_289;
#line 148
label_289:
;
#line 149
c_rt_lib0move(&___nl__im__129, string0lf());
#line 149
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__129));
#line 149
c_rt_lib0clear(&___nl__im__129);
#line 150
___nl__int__130 = 1;
#line 150
___nl__int__65 = ___nl__int__65 + ___nl__int__130;
#line 150
//clear ___nl__int__130;
#line 150
c_rt_lib0clear(&___nl__im__69);
#line 151
___nl__int__70 = ___nl__int__70 + ___nl__int__71;
#line 151
goto label_161;
#line 151
label_299:
;
#line 152
c_rt_lib0move(&___nl__im__133,___get_global_string_const(752));
#line 152
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(417)));
#line 153
c_rt_lib0move(&___nl__im__139, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__1));
#line 153
c_rt_lib0move(&___nl__im__140,___get_global_string_const(457));
#line 153
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__140));
#line 153
c_rt_lib0clear(&___nl__im__139);
#line 153
c_rt_lib0clear(&___nl__im__140);
#line 153
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__66));
#line 153
c_rt_lib0clear(&___nl__im__138);
#line 153
c_rt_lib0move(&___nl__im__141,___get_global_string_const(322));
#line 153
c_rt_lib0move(&___nl__im__136, c_rt_lib0concat_new(___nl__im__137, ___nl__im__141));
#line 153
c_rt_lib0clear(&___nl__im__137);
#line 153
c_rt_lib0clear(&___nl__im__141);
#line 153
c_rt_lib0move(&___nl__im__134, generator_js_priv0get_im_from_value(___nl__im__135, ___nl__im__136));
#line 153
c_rt_lib0clear(&___nl__im__135);
#line 153
c_rt_lib0clear(&___nl__im__136);
#line 153
c_rt_lib0move(&___nl__im__132, c_rt_lib0concat_new(___nl__im__133, ___nl__im__134));
#line 153
c_rt_lib0clear(&___nl__im__133);
#line 153
c_rt_lib0clear(&___nl__im__134);
#line 153
c_rt_lib0move(&___nl__im__142, string0lf());
#line 153
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__im__142));
#line 153
c_rt_lib0clear(&___nl__im__132);
#line 153
c_rt_lib0clear(&___nl__im__142);
#line 153
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__131));
#line 153
c_rt_lib0clear(&___nl__im__131);
#line 154
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__67));
#line 155
c_rt_lib0move(&___nl__im__144,___get_global_string_const(753));
#line 155
c_rt_lib0move(&___nl__im__145, string0lf());
#line 155
c_rt_lib0move(&___nl__im__143, c_rt_lib0concat_new(___nl__im__144, ___nl__im__145));
#line 155
c_rt_lib0clear(&___nl__im__144);
#line 155
c_rt_lib0clear(&___nl__im__145);
#line 155
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__143));
#line 155
c_rt_lib0clear(&___nl__im__143);
#line 156
c_rt_lib0move(&___nl__im__147,___get_global_string_const(307));
#line 156
c_rt_lib0move(&___nl__im__148, string0lf());
#line 156
c_rt_lib0move(&___nl__im__146, c_rt_lib0concat_new(___nl__im__147, ___nl__im__148));
#line 156
c_rt_lib0clear(&___nl__im__147);
#line 156
c_rt_lib0clear(&___nl__im__148);
#line 156
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__146));
#line 156
c_rt_lib0clear(&___nl__im__146);
#line 157
goto label_341;
#line 157
label_341:
;
#line 157
//clear ___nl__bool__50;
#line 157
//clear ___nl__int__65;
#line 157
c_rt_lib0clear(&___nl__im__66);
#line 157
c_rt_lib0clear(&___nl__im__67);
#line 157
c_rt_lib0clear(&___nl__im__68);
#line 157
c_rt_lib0clear(&___nl__im__69);
#line 157
//clear ___nl__int__70;
#line 157
//clear ___nl__int__71;
#line 157
//clear ___nl__int__72;
#line 157
//clear ___nl__bool__73;
#line 157
c_rt_lib0clear(&___nl__im__74);
#line 157
c_rt_lib0clear(&___nl__im__86);
#line 157
c_rt_lib0clear(&___nl__im__94);
#line 157
//clear ___nl__bool__95;
#line 157
c_rt_lib0clear(&___nl__im__96);
#line 157
c_rt_lib0clear(&___nl__im__106);
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
return ___nl__im__3;
return NULL;

}

ImmT  generator_js_priv0print_function(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__string__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
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
ImmT  ___nl__string__52 = NULL;
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
ImmT  ___nl__string__63 = NULL;
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
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
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
INT  ___nl__int__89 = 0;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
INT  ___nl__int__93 = 0;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
INT  ___nl__int__96 = 0;
INT  ___nl__int__97 = 0;
INT  ___nl__int__98 = 0;
bool  ___nl__bool__99 = false;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
#line 162
c_rt_lib0move(&___nl__im__3, string0lf());
#line 163
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 163
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(211));
#line 163
if(___nl__bool__5){ goto label_9;}
#line 165
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(467));
#line 165
if(___nl__bool__5){ goto label_26;}
#line 165
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 165
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 165
nl_die_arg(___nl__im__6);
#line 163
label_9:
;
#line 164
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 164
c_rt_lib0move(&___nl__im__11,___get_global_string_const(110));
#line 164
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 164
c_rt_lib0clear(&___nl__im__10);
#line 164
c_rt_lib0clear(&___nl__im__11);
#line 164
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 164
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 164
c_rt_lib0clear(&___nl__im__9);
#line 164
c_rt_lib0clear(&___nl__im__12);
#line 164
c_rt_lib0move(&___nl__im__13,___get_global_string_const(754));
#line 164
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 164
c_rt_lib0clear(&___nl__im__8);
#line 164
c_rt_lib0clear(&___nl__im__13);
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__7));
#line 164
c_rt_lib0clear(&___nl__im__7);
#line 165
goto label_39;
#line 165
label_26:
;
#line 166
c_rt_lib0move(&___nl__im__16,___get_global_string_const(739));
#line 166
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 166
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 166
c_rt_lib0clear(&___nl__im__16);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0move(&___nl__im__18,___get_global_string_const(457));
#line 166
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 166
c_rt_lib0clear(&___nl__im__15);
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 166
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__14));
#line 166
c_rt_lib0clear(&___nl__im__14);
#line 167
goto label_39;
#line 167
label_39:
;
#line 168
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 168
___nl__int__19 = c_rt_lib0array_len(___nl__im__20);
#line 168
c_rt_lib0clear(&___nl__im__20);
#line 168
___nl__int__21 = 0;
#line 168
___nl__int__22 = 1;
#line 168
label_45:
;
#line 168
___nl__bool__23 = ___nl__int__21 >= ___nl__int__19;
#line 168
if(___nl__bool__23){ goto label_69;}
#line 169
___nl__int__25 = 0;
#line 169
___nl__bool__24 = ___nl__int__21 == ___nl__int__25;
#line 169
//clear ___nl__int__25;
#line 169
___nl__bool__24 = !___nl__bool__24;
#line 169
___nl__bool__24 = !___nl__bool__24;
#line 169
if(___nl__bool__24){ goto label_58;}
#line 169
c_rt_lib0move(&___nl__im__26,___get_global_string_const(328));
#line 169
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__26));
#line 169
c_rt_lib0clear(&___nl__im__26);
#line 169
goto label_58;
#line 169
label_58:
;
#line 169
//clear ___nl__bool__24;
#line 170
c_rt_lib0move(&___nl__im__28,___get_global_string_const(755));
#line 170
c_rt_lib0move(&___nl__string__29, c_rt_lib0int_to_string(___nl__int__21));
#line 170
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__string__29));
#line 170
c_rt_lib0clear(&___nl__im__28);
#line 170
c_rt_lib0clear(&___nl__string__29);
#line 170
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__27));
#line 170
c_rt_lib0clear(&___nl__im__27);
#line 171
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 171
goto label_45;
#line 171
label_69:
;
#line 172
c_rt_lib0move(&___nl__im__31,___get_global_string_const(756));
#line 172
c_rt_lib0move(&___nl__im__32, string0lf());
#line 172
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 172
c_rt_lib0clear(&___nl__im__31);
#line 172
c_rt_lib0clear(&___nl__im__32);
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 172
c_rt_lib0clear(&___nl__im__30);
#line 173
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 173
___nl__int__33 = c_rt_lib0array_len(___nl__im__34);
#line 173
c_rt_lib0clear(&___nl__im__34);
#line 173
___nl__int__35 = 0;
#line 173
___nl__int__36 = 1;
#line 173
label_82:
;
#line 173
___nl__bool__37 = ___nl__int__35 >= ___nl__int__33;
#line 173
if(___nl__bool__37){ goto label_172;}
#line 174
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 174
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_get(___nl__im__40, ___nl__int__35));
#line 174
c_rt_lib0clear(&___nl__im__40);
#line 174
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(355)));
#line 174
c_rt_lib0clear(&___nl__im__39);
#line 174
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(225));
#line 174
if(___nl__bool__41){ goto label_97;}
#line 176
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(39));
#line 176
if(___nl__bool__41){ goto label_122;}
#line 176
c_rt_lib0move(&___nl__im__42,___get_global_string_const(15));
#line 176
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(2, ___nl__im__42, ___nl__im__38));
#line 176
nl_die_arg(___nl__im__42);
#line 174
label_97:
;
#line 175
c_rt_lib0move(&___nl__im__47,___get_global_string_const(728));
#line 175
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 175
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__50, ___nl__int__35));
#line 175
c_rt_lib0clear(&___nl__im__50);
#line 175
c_rt_lib0move(&___nl__im__48, generator_js_priv0print_register(___nl__im__49));
#line 175
c_rt_lib0clear(&___nl__im__49);
#line 175
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 175
c_rt_lib0clear(&___nl__im__47);
#line 175
c_rt_lib0clear(&___nl__im__48);
#line 175
c_rt_lib0move(&___nl__im__51,___get_global_string_const(757));
#line 175
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__51));
#line 175
c_rt_lib0clear(&___nl__im__46);
#line 175
c_rt_lib0clear(&___nl__im__51);
#line 175
c_rt_lib0move(&___nl__string__52, c_rt_lib0int_to_string(___nl__int__35));
#line 175
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__string__52));
#line 175
c_rt_lib0clear(&___nl__im__45);
#line 175
c_rt_lib0clear(&___nl__string__52);
#line 175
c_rt_lib0move(&___nl__im__53,___get_global_string_const(442));
#line 175
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__53));
#line 175
c_rt_lib0clear(&___nl__im__44);
#line 175
c_rt_lib0clear(&___nl__im__53);
#line 175
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 175
c_rt_lib0clear(&___nl__im__43);
#line 176
goto label_147;
#line 176
label_122:
;
#line 177
c_rt_lib0move(&___nl__im__58,___get_global_string_const(728));
#line 177
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 177
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__61, ___nl__int__35));
#line 177
c_rt_lib0clear(&___nl__im__61);
#line 177
c_rt_lib0move(&___nl__im__59, generator_js_priv0print_register(___nl__im__60));
#line 177
c_rt_lib0clear(&___nl__im__60);
#line 177
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 177
c_rt_lib0clear(&___nl__im__58);
#line 177
c_rt_lib0clear(&___nl__im__59);
#line 177
c_rt_lib0move(&___nl__im__62,___get_global_string_const(757));
#line 177
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__62));
#line 177
c_rt_lib0clear(&___nl__im__57);
#line 177
c_rt_lib0clear(&___nl__im__62);
#line 177
c_rt_lib0move(&___nl__string__63, c_rt_lib0int_to_string(___nl__int__35));
#line 177
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__string__63));
#line 177
c_rt_lib0clear(&___nl__im__56);
#line 177
c_rt_lib0clear(&___nl__string__63);
#line 177
c_rt_lib0move(&___nl__im__64,___get_global_string_const(758));
#line 177
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__64));
#line 177
c_rt_lib0clear(&___nl__im__55);
#line 177
c_rt_lib0clear(&___nl__im__64);
#line 177
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__54));
#line 177
c_rt_lib0clear(&___nl__im__54);
#line 178
goto label_147;
#line 178
label_147:
;
#line 179
c_rt_lib0move(&___nl__im__68, generator_js_priv0get_namespace_name());
#line 179
c_rt_lib0move(&___nl__im__69,___get_global_string_const(759));
#line 179
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__69));
#line 179
c_rt_lib0clear(&___nl__im__68);
#line 179
c_rt_lib0clear(&___nl__im__69);
#line 179
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 179
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get(___nl__im__72, ___nl__int__35));
#line 179
c_rt_lib0clear(&___nl__im__72);
#line 179
c_rt_lib0move(&___nl__im__70, generator_js_priv0print_register_value(___nl__im__71));
#line 179
c_rt_lib0clear(&___nl__im__71);
#line 179
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__70));
#line 179
c_rt_lib0clear(&___nl__im__67);
#line 179
c_rt_lib0clear(&___nl__im__70);
#line 179
c_rt_lib0move(&___nl__im__73,___get_global_string_const(508));
#line 179
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__73));
#line 179
c_rt_lib0clear(&___nl__im__66);
#line 179
c_rt_lib0clear(&___nl__im__73);
#line 179
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__65));
#line 179
c_rt_lib0clear(&___nl__im__65);
#line 179
c_rt_lib0clear(&___nl__im__38);
#line 179
//clear ___nl__bool__41;
#line 179
c_rt_lib0clear(&___nl__im__42);
#line 180
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 180
goto label_82;
#line 180
label_172:
;
#line 181
c_rt_lib0move(&___nl__im__74, string0lf());
#line 181
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__74));
#line 181
c_rt_lib0clear(&___nl__im__74);
#line 182
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 182
___nl__int__75 = c_rt_lib0array_len(___nl__im__76);
#line 182
c_rt_lib0clear(&___nl__im__76);
#line 182
label_179:
;
#line 182
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 182
___nl__int__78 = c_rt_lib0array_len(___nl__im__79);
#line 182
c_rt_lib0clear(&___nl__im__79);
#line 182
___nl__bool__77 = ___nl__int__75 < ___nl__int__78;
#line 182
//clear ___nl__int__78;
#line 182
___nl__bool__77 = !___nl__bool__77;
#line 182
if(___nl__bool__77){ goto label_210;}
#line 183
c_rt_lib0move(&___nl__im__83,___get_global_string_const(728));
#line 183
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 183
c_rt_lib0move(&___nl__im__85, c_rt_lib0array_get(___nl__im__86, ___nl__int__75));
#line 183
c_rt_lib0clear(&___nl__im__86);
#line 183
c_rt_lib0move(&___nl__im__84, generator_js_priv0print_register(___nl__im__85));
#line 183
c_rt_lib0clear(&___nl__im__85);
#line 183
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 183
c_rt_lib0clear(&___nl__im__83);
#line 183
c_rt_lib0clear(&___nl__im__84);
#line 183
c_rt_lib0move(&___nl__im__87,___get_global_string_const(760));
#line 183
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__87));
#line 183
c_rt_lib0clear(&___nl__im__82);
#line 183
c_rt_lib0clear(&___nl__im__87);
#line 183
c_rt_lib0move(&___nl__im__88, string0lf());
#line 183
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__88));
#line 183
c_rt_lib0clear(&___nl__im__81);
#line 183
c_rt_lib0clear(&___nl__im__88);
#line 183
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__80));
#line 183
c_rt_lib0clear(&___nl__im__80);
#line 182
___nl__int__89 = 1;
#line 182
___nl__int__75 = ___nl__int__75 + ___nl__int__89;
#line 182
//clear ___nl__int__89;
#line 184
goto label_179;
#line 184
label_210:
;
#line 185
c_rt_lib0move(&___nl__im__91,___get_global_string_const(761));
#line 185
c_rt_lib0move(&___nl__im__92, string0lf());
#line 185
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__92));
#line 185
c_rt_lib0clear(&___nl__im__91);
#line 185
c_rt_lib0clear(&___nl__im__92);
#line 185
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__90));
#line 185
c_rt_lib0clear(&___nl__im__90);
#line 186
___nl__int__93 = 0;
#line 188
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 188
___nl__int__96 = 0;
#line 188
___nl__int__97 = 1;
#line 188
___nl__int__98 = c_rt_lib0array_len(___nl__im__94);
#line 188
label_223:
;
#line 188
___nl__bool__99 = ___nl__int__96 >= ___nl__int__98;
#line 188
if(___nl__bool__99){ goto label_236;}
#line 188
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_get(___nl__im__94, ___nl__int__96));
#line 188
c_rt_lib0copy(&___nl__im__95, ___nl__im__100);
#line 187
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 187
c_rt_lib0move(&___nl__im__101, generator_js_priv0print_command(___nl__im__95, ___nl__im__102, &___nl__int__93, ___ref___im__2));
#line 187
c_rt_lib0clear(&___nl__im__102);
#line 187
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__101));
#line 187
c_rt_lib0clear(&___nl__im__101);
#line 187
c_rt_lib0clear(&___nl__im__95);
#line 187
___nl__int__96 = ___nl__int__96 + ___nl__int__97;
#line 187
goto label_223;
#line 187
label_236:
;
#line 189
c_rt_lib0move(&___nl__im__105,___get_global_string_const(762));
#line 189
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__3, ___nl__im__105));
#line 189
c_rt_lib0clear(&___nl__im__105);
#line 189
c_rt_lib0move(&___nl__im__106, string0lf());
#line 189
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__106));
#line 189
c_rt_lib0clear(&___nl__im__104);
#line 189
c_rt_lib0clear(&___nl__im__106);
#line 189
c_rt_lib0clear(&___nl__im__0);
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
c_rt_lib0clear(&___nl__im__3);
#line 189
c_rt_lib0clear(&___nl__im__4);
#line 189
//clear ___nl__bool__5;
#line 189
c_rt_lib0clear(&___nl__im__6);
#line 189
//clear ___nl__int__19;
#line 189
//clear ___nl__int__21;
#line 189
//clear ___nl__int__22;
#line 189
//clear ___nl__bool__23;
#line 189
//clear ___nl__int__33;
#line 189
//clear ___nl__int__35;
#line 189
//clear ___nl__int__36;
#line 189
//clear ___nl__bool__37;
#line 189
c_rt_lib0clear(&___nl__im__38);
#line 189
//clear ___nl__bool__41;
#line 189
c_rt_lib0clear(&___nl__im__42);
#line 189
//clear ___nl__int__75;
#line 189
//clear ___nl__bool__77;
#line 189
//clear ___nl__int__93;
#line 189
c_rt_lib0clear(&___nl__im__94);
#line 189
c_rt_lib0clear(&___nl__im__95);
#line 189
//clear ___nl__int__96;
#line 189
//clear ___nl__int__97;
#line 189
//clear ___nl__int__98;
#line 189
//clear ___nl__bool__99;
#line 189
c_rt_lib0clear(&___nl__im__100);
#line 189
return ___nl__im__103;
return NULL;

}

ImmT  generator_js_priv0print_command(nlasm0cmd_t0type ___nl__im__0,nlasm0args_type0type ___nl__im__1,INT * ___ref___int__2,ImmT * ___ref___im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
INT  ___nl__int__63 = 0;
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
INT  ___nl__int__163 = 0;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__string__167 = NULL;
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
INT  ___nl__int__179 = 0;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
INT  ___nl__int__182 = 0;
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
INT  ___nl__int__234 = 0;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__string__236 = NULL;
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
INT  ___nl__int__266 = 0;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__string__271 = NULL;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
#line 193
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 194
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 194
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(231));
#line 194
if(___nl__bool__6){ goto label_79;}
#line 196
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(232));
#line 196
if(___nl__bool__6){ goto label_100;}
#line 198
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(233));
#line 198
if(___nl__bool__6){ goto label_121;}
#line 201
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(234));
#line 201
if(___nl__bool__6){ goto label_142;}
#line 203
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(239));
#line 203
if(___nl__bool__6){ goto label_155;}
#line 206
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(235));
#line 206
if(___nl__bool__6){ goto label_176;}
#line 208
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(236));
#line 208
if(___nl__bool__6){ goto label_181;}
#line 210
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(237));
#line 210
if(___nl__bool__6){ goto label_186;}
#line 212
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(238));
#line 212
if(___nl__bool__6){ goto label_201;}
#line 215
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(248));
#line 215
if(___nl__bool__6){ goto label_232;}
#line 217
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(249));
#line 217
if(___nl__bool__6){ goto label_237;}
#line 219
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(240));
#line 219
if(___nl__bool__6){ goto label_246;}
#line 221
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(226));
#line 221
if(___nl__bool__6){ goto label_255;}
#line 223
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(241));
#line 223
if(___nl__bool__6){ goto label_264;}
#line 226
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(242));
#line 226
if(___nl__bool__6){ goto label_291;}
#line 230
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(243));
#line 230
if(___nl__bool__6){ goto label_322;}
#line 232
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(244));
#line 232
if(___nl__bool__6){ goto label_331;}
#line 234
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(245));
#line 234
if(___nl__bool__6){ goto label_340;}
#line 238
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(246));
#line 238
if(___nl__bool__6){ goto label_373;}
#line 242
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(247));
#line 242
if(___nl__bool__6){ goto label_404;}
#line 244
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(250));
#line 244
if(___nl__bool__6){ goto label_409;}
#line 246
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(251));
#line 246
if(___nl__bool__6){ goto label_422;}
#line 249
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(252));
#line 249
if(___nl__bool__6){ goto label_449;}
#line 251
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(253));
#line 251
if(___nl__bool__6){ goto label_454;}
#line 253
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(254));
#line 253
if(___nl__bool__6){ goto label_463;}
#line 254
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(255));
#line 254
if(___nl__bool__6){ goto label_467;}
#line 257
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(256));
#line 257
if(___nl__bool__6){ goto label_492;}
#line 259
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(257));
#line 259
if(___nl__bool__6){ goto label_503;}
#line 261
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(258));
#line 261
if(___nl__bool__6){ goto label_508;}
#line 263
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(259));
#line 263
if(___nl__bool__6){ goto label_519;}
#line 265
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(260));
#line 265
if(___nl__bool__6){ goto label_524;}
#line 267
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(261));
#line 267
if(___nl__bool__6){ goto label_535;}
#line 272
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(262));
#line 272
if(___nl__bool__6){ goto label_591;}
#line 274
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(263));
#line 274
if(___nl__bool__6){ goto label_602;}
#line 276
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(264));
#line 276
if(___nl__bool__6){ goto label_607;}
#line 278
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(265));
#line 278
if(___nl__bool__6){ goto label_612;}
#line 280
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(266));
#line 280
if(___nl__bool__6){ goto label_617;}
#line 280
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 280
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 280
nl_die_arg(___nl__im__7);
#line 194
label_79:
;
#line 194
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(231)));
#line 194
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 195
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(224)));
#line 195
c_rt_lib0move(&___nl__im__11, generator_js_priv0print_register_value_to_assign(___nl__im__12));
#line 195
c_rt_lib0clear(&___nl__im__12);
#line 195
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(73)));
#line 195
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(224)));
#line 195
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(206)));
#line 195
c_rt_lib0clear(&___nl__im__16);
#line 195
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_arr(___nl__im__14, ___nl__im__15));
#line 195
c_rt_lib0clear(&___nl__im__14);
#line 195
c_rt_lib0clear(&___nl__im__15);
#line 195
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__13));
#line 195
c_rt_lib0clear(&___nl__im__11);
#line 195
c_rt_lib0clear(&___nl__im__13);
#line 195
c_rt_lib0move(&___nl__im__17,___get_global_string_const(442));
#line 195
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 195
c_rt_lib0clear(&___nl__im__10);
#line 195
c_rt_lib0clear(&___nl__im__17);
#line 196
goto label_622;
#line 196
label_100:
;
#line 196
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(232)));
#line 196
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 197
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(224)));
#line 197
c_rt_lib0move(&___nl__im__21, generator_js_priv0print_register_value_to_assign(___nl__im__22));
#line 197
c_rt_lib0clear(&___nl__im__22);
#line 197
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(73)));
#line 197
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(224)));
#line 197
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(206)));
#line 197
c_rt_lib0clear(&___nl__im__26);
#line 197
c_rt_lib0move(&___nl__im__23, generator_js_priv0print_hash(___nl__im__24, ___nl__im__25));
#line 197
c_rt_lib0clear(&___nl__im__24);
#line 197
c_rt_lib0clear(&___nl__im__25);
#line 197
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 197
c_rt_lib0clear(&___nl__im__21);
#line 197
c_rt_lib0clear(&___nl__im__23);
#line 197
c_rt_lib0move(&___nl__im__27,___get_global_string_const(442));
#line 197
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 197
c_rt_lib0clear(&___nl__im__20);
#line 197
c_rt_lib0clear(&___nl__im__27);
#line 198
goto label_622;
#line 198
label_121:
;
#line 198
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(233)));
#line 198
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 199
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(224)));
#line 199
c_rt_lib0move(&___nl__im__31, generator_js_priv0print_register_value_to_assign(___nl__im__32));
#line 199
c_rt_lib0clear(&___nl__im__32);
#line 200
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(763)));
#line 200
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(224)));
#line 200
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(206)));
#line 200
c_rt_lib0clear(&___nl__im__36);
#line 200
c_rt_lib0move(&___nl__im__33, generator_js_priv0print_empty_hash(___nl__im__34, ___nl__im__35));
#line 200
c_rt_lib0clear(&___nl__im__34);
#line 200
c_rt_lib0clear(&___nl__im__35);
#line 200
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__33));
#line 200
c_rt_lib0clear(&___nl__im__31);
#line 200
c_rt_lib0clear(&___nl__im__33);
#line 200
c_rt_lib0move(&___nl__im__37,___get_global_string_const(442));
#line 200
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 200
c_rt_lib0clear(&___nl__im__30);
#line 200
c_rt_lib0clear(&___nl__im__37);
#line 201
goto label_622;
#line 201
label_142:
;
#line 201
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(234)));
#line 201
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 202
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(268)));
#line 202
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(270)));
#line 202
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(267)));
#line 202
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(224)));
#line 202
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_call(___nl__im__40, ___nl__im__41, ___nl__im__42, ___nl__im__43, ___ref___int__2));
#line 202
c_rt_lib0clear(&___nl__im__40);
#line 202
c_rt_lib0clear(&___nl__im__41);
#line 202
c_rt_lib0clear(&___nl__im__42);
#line 202
c_rt_lib0clear(&___nl__im__43);
#line 203
goto label_622;
#line 203
label_155:
;
#line 203
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(239)));
#line 203
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 204
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(224)));
#line 204
c_rt_lib0move(&___nl__im__47, generator_js_priv0print_register_value_to_assign(___nl__im__48));
#line 204
c_rt_lib0clear(&___nl__im__48);
#line 205
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(152)));
#line 205
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(168)));
#line 205
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(2, ___get_global_string_const(152), ___nl__im__51, ___get_global_string_const(168), ___nl__im__52));
#line 205
c_rt_lib0clear(&___nl__im__51);
#line 205
c_rt_lib0clear(&___nl__im__52);
#line 205
c_rt_lib0move(&___nl__im__49, generator_js_priv0print_const_hash(___nl__im__50));
#line 205
c_rt_lib0clear(&___nl__im__50);
#line 205
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__49));
#line 205
c_rt_lib0clear(&___nl__im__47);
#line 205
c_rt_lib0clear(&___nl__im__49);
#line 205
c_rt_lib0move(&___nl__im__53,___get_global_string_const(442));
#line 205
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__46, ___nl__im__53));
#line 205
c_rt_lib0clear(&___nl__im__46);
#line 205
c_rt_lib0clear(&___nl__im__53);
#line 206
goto label_622;
#line 206
label_176:
;
#line 206
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(235)));
#line 206
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 207
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_una_op(___nl__im__54));
#line 208
goto label_622;
#line 208
label_181:
;
#line 208
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(236)));
#line 208
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 209
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_bin_op(___nl__im__56, ___ref___int__2));
#line 210
goto label_622;
#line 210
label_186:
;
#line 210
c_rt_lib0move(&___nl__im__59, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(237)));
#line 210
c_rt_lib0copy(&___nl__im__58, ___nl__im__59);
#line 211
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(224)));
#line 211
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(73)));
#line 211
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(562)));
#line 211
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(567)));
#line 211
___nl__int__63 = getIntFromImm(___nl__im__64);
#line 211
c_rt_lib0clear(&___nl__im__64);
#line 211
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_ov_is(___nl__im__60, ___nl__im__61, ___nl__im__62, ___nl__int__63, ___ref___int__2, ___ref___im__3));
#line 211
c_rt_lib0clear(&___nl__im__60);
#line 211
c_rt_lib0clear(&___nl__im__61);
#line 211
c_rt_lib0clear(&___nl__im__62);
#line 211
//clear ___nl__int__63;
#line 212
goto label_622;
#line 212
label_201:
;
#line 212
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(238)));
#line 212
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 213
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(224)));
#line 213
c_rt_lib0move(&___nl__im__68, generator_js_priv0print_register_value_to_assign(___nl__im__69));
#line 213
c_rt_lib0clear(&___nl__im__69);
#line 213
c_rt_lib0move(&___nl__im__71,___get_global_string_const(271));
#line 213
c_rt_lib0move(&___nl__im__72,___get_global_string_const(238));
#line 214
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(73)));
#line 214
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__75));
#line 214
c_rt_lib0clear(&___nl__im__75);
#line 214
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(562)));
#line 214
c_rt_lib0move(&___nl__im__77, generator_js_priv0print_str_imm(___nl__im__78, ___ref___im__3));
#line 214
c_rt_lib0clear(&___nl__im__78);
#line 214
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__77));
#line 214
c_rt_lib0clear(&___nl__im__77);
#line 214
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(2, ___nl__im__74, ___nl__im__76));
#line 214
c_rt_lib0clear(&___nl__im__74);
#line 214
c_rt_lib0clear(&___nl__im__76);
#line 214
c_rt_lib0move(&___nl__im__70, generator_js_priv0print_internal_call(___nl__im__71, ___nl__im__72, ___nl__im__73, ___ref___int__2));
#line 214
c_rt_lib0clear(&___nl__im__71);
#line 214
c_rt_lib0clear(&___nl__im__72);
#line 214
c_rt_lib0clear(&___nl__im__73);
#line 214
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__70));
#line 214
c_rt_lib0clear(&___nl__im__68);
#line 214
c_rt_lib0clear(&___nl__im__70);
#line 214
c_rt_lib0move(&___nl__im__79,___get_global_string_const(442));
#line 214
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__67, ___nl__im__79));
#line 214
c_rt_lib0clear(&___nl__im__67);
#line 214
c_rt_lib0clear(&___nl__im__79);
#line 215
goto label_622;
#line 215
label_232:
;
#line 215
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(248)));
#line 215
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 216
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_return(___nl__im__80, ___nl__im__1));
#line 217
goto label_622;
#line 217
label_237:
;
#line 217
c_rt_lib0move(&___nl__im__83, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(249)));
#line 217
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 218
c_rt_lib0move(&___nl__im__84, generator_js_priv0get_namespace_name());
#line 218
c_rt_lib0move(&___nl__im__85,___get_global_string_const(764));
#line 218
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 218
c_rt_lib0clear(&___nl__im__84);
#line 218
c_rt_lib0clear(&___nl__im__85);
#line 219
goto label_622;
#line 219
label_246:
;
#line 219
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(240)));
#line 219
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 220
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(224)));
#line 220
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(73)));
#line 220
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_move(___nl__im__88, ___nl__im__89, ___ref___int__2));
#line 220
c_rt_lib0clear(&___nl__im__88);
#line 220
c_rt_lib0clear(&___nl__im__89);
#line 221
goto label_622;
#line 221
label_255:
;
#line 221
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(226)));
#line 221
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 222
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(224)));
#line 222
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(225)));
#line 222
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_load_const(___nl__im__92, ___nl__im__93, ___ref___im__3));
#line 222
c_rt_lib0clear(&___nl__im__92);
#line 222
c_rt_lib0clear(&___nl__im__93);
#line 223
goto label_622;
#line 223
label_264:
;
#line 223
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(241)));
#line 223
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 224
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(224)));
#line 224
c_rt_lib0move(&___nl__im__99, generator_js_priv0print_register_value_to_assign(___nl__im__100));
#line 224
c_rt_lib0clear(&___nl__im__100);
#line 225
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(73)));
#line 225
c_rt_lib0move(&___nl__im__101, generator_js_priv0print_register_value(___nl__im__102));
#line 225
c_rt_lib0clear(&___nl__im__102);
#line 225
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__101));
#line 225
c_rt_lib0clear(&___nl__im__99);
#line 225
c_rt_lib0clear(&___nl__im__101);
#line 225
c_rt_lib0move(&___nl__im__103,___get_global_string_const(765));
#line 225
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__103));
#line 225
c_rt_lib0clear(&___nl__im__98);
#line 225
c_rt_lib0clear(&___nl__im__103);
#line 225
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(278)));
#line 225
c_rt_lib0move(&___nl__im__104, generator_js_priv0print_register_value(___nl__im__105));
#line 225
c_rt_lib0clear(&___nl__im__105);
#line 225
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__104));
#line 225
c_rt_lib0clear(&___nl__im__97);
#line 225
c_rt_lib0clear(&___nl__im__104);
#line 225
c_rt_lib0move(&___nl__im__106,___get_global_string_const(508));
#line 225
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__96, ___nl__im__106));
#line 225
c_rt_lib0clear(&___nl__im__96);
#line 225
c_rt_lib0clear(&___nl__im__106);
#line 226
goto label_622;
#line 226
label_291:
;
#line 226
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(242)));
#line 226
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 227
c_rt_lib0move(&___nl__im__110,___get_global_string_const(271));
#line 227
c_rt_lib0move(&___nl__im__111,___get_global_string_const(766));
#line 227
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(73)));
#line 227
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__114));
#line 227
c_rt_lib0clear(&___nl__im__114);
#line 228
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(278)));
#line 228
c_rt_lib0move(&___nl__im__116, generator_js_priv0print_register_value(___nl__im__117));
#line 228
c_rt_lib0clear(&___nl__im__117);
#line 228
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__116));
#line 228
c_rt_lib0clear(&___nl__im__116);
#line 229
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(225)));
#line 229
c_rt_lib0move(&___nl__im__119, generator_js_priv0print_register_value(___nl__im__120));
#line 229
c_rt_lib0clear(&___nl__im__120);
#line 229
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__119));
#line 229
c_rt_lib0clear(&___nl__im__119);
#line 229
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_mk(3, ___nl__im__113, ___nl__im__115, ___nl__im__118));
#line 229
c_rt_lib0clear(&___nl__im__113);
#line 229
c_rt_lib0clear(&___nl__im__115);
#line 229
c_rt_lib0clear(&___nl__im__118);
#line 229
c_rt_lib0move(&___nl__im__109, generator_js_priv0print_internal_call(___nl__im__110, ___nl__im__111, ___nl__im__112, ___ref___int__2));
#line 229
c_rt_lib0clear(&___nl__im__110);
#line 229
c_rt_lib0clear(&___nl__im__111);
#line 229
c_rt_lib0clear(&___nl__im__112);
#line 229
c_rt_lib0move(&___nl__im__121,___get_global_string_const(442));
#line 229
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__109, ___nl__im__121));
#line 229
c_rt_lib0clear(&___nl__im__109);
#line 229
c_rt_lib0clear(&___nl__im__121);
#line 230
goto label_622;
#line 230
label_322:
;
#line 230
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(243)));
#line 230
c_rt_lib0copy(&___nl__im__122, ___nl__im__123);
#line 231
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(224)));
#line 231
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(225)));
#line 231
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_array_push(___nl__im__124, ___nl__im__125, ___ref___int__2));
#line 231
c_rt_lib0clear(&___nl__im__124);
#line 231
c_rt_lib0clear(&___nl__im__125);
#line 232
goto label_622;
#line 232
label_331:
;
#line 232
c_rt_lib0move(&___nl__im__127, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(244)));
#line 232
c_rt_lib0copy(&___nl__im__126, ___nl__im__127);
#line 233
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(224)));
#line 233
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(73)));
#line 233
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_array_len(___nl__im__128, ___nl__im__129, ___ref___int__2));
#line 233
c_rt_lib0clear(&___nl__im__128);
#line 233
c_rt_lib0clear(&___nl__im__129);
#line 234
goto label_622;
#line 234
label_340:
;
#line 234
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(245)));
#line 234
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 235
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(224)));
#line 235
c_rt_lib0move(&___nl__im__133, generator_js_priv0print_register_value_to_assign(___nl__im__134));
#line 235
c_rt_lib0clear(&___nl__im__134);
#line 235
c_rt_lib0move(&___nl__im__136,___get_global_string_const(271));
#line 235
c_rt_lib0move(&___nl__im__137,___get_global_string_const(767));
#line 236
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(73)));
#line 236
c_rt_lib0move(&___nl__im__140, generator_js_priv0print_register_value(___nl__im__141));
#line 236
c_rt_lib0clear(&___nl__im__141);
#line 236
c_rt_lib0move(&___nl__im__139, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__140));
#line 236
c_rt_lib0clear(&___nl__im__140);
#line 236
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(577)));
#line 236
c_rt_lib0move(&___nl__im__143, generator_js_priv0print_str_imm(___nl__im__144, ___ref___im__3));
#line 236
c_rt_lib0clear(&___nl__im__144);
#line 236
c_rt_lib0move(&___nl__im__142, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__143));
#line 236
c_rt_lib0clear(&___nl__im__143);
#line 236
c_rt_lib0move(&___nl__im__138, c_rt_lib0array_mk(2, ___nl__im__139, ___nl__im__142));
#line 236
c_rt_lib0clear(&___nl__im__139);
#line 236
c_rt_lib0clear(&___nl__im__142);
#line 236
c_rt_lib0move(&___nl__im__135, generator_js_priv0print_internal_call(___nl__im__136, ___nl__im__137, ___nl__im__138, ___ref___int__2));
#line 236
c_rt_lib0clear(&___nl__im__136);
#line 236
c_rt_lib0clear(&___nl__im__137);
#line 236
c_rt_lib0clear(&___nl__im__138);
#line 236
c_rt_lib0move(&___nl__im__132, c_rt_lib0concat_new(___nl__im__133, ___nl__im__135));
#line 236
c_rt_lib0clear(&___nl__im__133);
#line 236
c_rt_lib0clear(&___nl__im__135);
#line 237
c_rt_lib0move(&___nl__im__145,___get_global_string_const(442));
#line 237
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__132, ___nl__im__145));
#line 237
c_rt_lib0clear(&___nl__im__132);
#line 237
c_rt_lib0clear(&___nl__im__145);
#line 238
goto label_622;
#line 238
label_373:
;
#line 238
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(246)));
#line 238
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 239
c_rt_lib0move(&___nl__im__149,___get_global_string_const(271));
#line 239
c_rt_lib0move(&___nl__im__150,___get_global_string_const(768));
#line 239
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(73)));
#line 239
c_rt_lib0move(&___nl__im__152, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__153));
#line 239
c_rt_lib0clear(&___nl__im__153);
#line 240
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(577)));
#line 240
c_rt_lib0move(&___nl__im__155, generator_js_priv0print_str_imm(___nl__im__156, ___ref___im__3));
#line 240
c_rt_lib0clear(&___nl__im__156);
#line 240
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__155));
#line 240
c_rt_lib0clear(&___nl__im__155);
#line 240
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(225)));
#line 240
c_rt_lib0move(&___nl__im__158, generator_js_priv0print_register_value(___nl__im__159));
#line 240
c_rt_lib0clear(&___nl__im__159);
#line 240
c_rt_lib0move(&___nl__im__157, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__158));
#line 240
c_rt_lib0clear(&___nl__im__158);
#line 240
c_rt_lib0move(&___nl__im__151, c_rt_lib0array_mk(3, ___nl__im__152, ___nl__im__154, ___nl__im__157));
#line 240
c_rt_lib0clear(&___nl__im__152);
#line 240
c_rt_lib0clear(&___nl__im__154);
#line 240
c_rt_lib0clear(&___nl__im__157);
#line 240
c_rt_lib0move(&___nl__im__148, generator_js_priv0print_internal_call(___nl__im__149, ___nl__im__150, ___nl__im__151, ___ref___int__2));
#line 240
c_rt_lib0clear(&___nl__im__149);
#line 240
c_rt_lib0clear(&___nl__im__150);
#line 240
c_rt_lib0clear(&___nl__im__151);
#line 241
c_rt_lib0move(&___nl__im__160,___get_global_string_const(442));
#line 241
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__148, ___nl__im__160));
#line 241
c_rt_lib0clear(&___nl__im__148);
#line 241
c_rt_lib0clear(&___nl__im__160);
#line 242
goto label_622;
#line 242
label_404:
;
#line 242
c_rt_lib0move(&___nl__im__162, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(247)));
#line 242
c_rt_lib0copy(&___nl__im__161, ___nl__im__162);
#line 243
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_ov_mk(___nl__im__161, ___ref___im__3, ___ref___int__2));
#line 244
goto label_622;
#line 244
label_409:
;
#line 244
c_rt_lib0move(&___nl__im__164, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(250)));
#line 244
___nl__int__163 = getIntFromImm(___nl__im__164);
#line 245
c_rt_lib0move(&___nl__im__166,___get_global_string_const(529));
#line 245
c_rt_lib0move(&___nl__string__167, c_rt_lib0int_to_string(___nl__int__163));
#line 245
c_rt_lib0move(&___nl__im__165, c_rt_lib0concat_new(___nl__im__166, ___nl__string__167));
#line 245
c_rt_lib0clear(&___nl__im__166);
#line 245
c_rt_lib0clear(&___nl__string__167);
#line 245
c_rt_lib0move(&___nl__im__168,___get_global_string_const(530));
#line 245
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__165, ___nl__im__168));
#line 245
c_rt_lib0clear(&___nl__im__165);
#line 245
c_rt_lib0clear(&___nl__im__168);
#line 246
goto label_622;
#line 246
label_422:
;
#line 246
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(251)));
#line 246
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 247
c_rt_lib0move(&___nl__im__174,___get_global_string_const(607));
#line 247
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_string_const(73)));
#line 247
c_rt_lib0move(&___nl__im__175, generator_js_priv0print_register_value(___nl__im__176));
#line 247
c_rt_lib0clear(&___nl__im__176);
#line 247
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__im__175));
#line 247
c_rt_lib0clear(&___nl__im__174);
#line 247
c_rt_lib0clear(&___nl__im__175);
#line 247
c_rt_lib0move(&___nl__im__177,___get_global_string_const(756));
#line 247
c_rt_lib0move(&___nl__im__172, c_rt_lib0concat_new(___nl__im__173, ___nl__im__177));
#line 247
c_rt_lib0clear(&___nl__im__173);
#line 247
c_rt_lib0clear(&___nl__im__177);
#line 247
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_string_const(224)));
#line 247
___nl__int__179 = getIntFromImm(___nl__im__180);
#line 247
c_rt_lib0clear(&___nl__im__180);
#line 247
c_rt_lib0move(&___nl__im__178, generator_js_priv0print_goto(___nl__int__179));
#line 247
//clear ___nl__int__179;
#line 247
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__178));
#line 247
c_rt_lib0clear(&___nl__im__172);
#line 247
c_rt_lib0clear(&___nl__im__178);
#line 248
c_rt_lib0move(&___nl__im__181,___get_global_string_const(307));
#line 248
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__171, ___nl__im__181));
#line 248
c_rt_lib0clear(&___nl__im__171);
#line 248
c_rt_lib0clear(&___nl__im__181);
#line 249
goto label_622;
#line 249
label_449:
;
#line 249
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(252)));
#line 249
___nl__int__182 = getIntFromImm(___nl__im__183);
#line 250
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_goto(___nl__int__182));
#line 251
goto label_622;
#line 251
label_454:
;
#line 251
c_rt_lib0move(&___nl__im__185, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(253)));
#line 251
c_rt_lib0copy(&___nl__im__184, ___nl__im__185);
#line 252
c_rt_lib0move(&___nl__im__186, generator_js_priv0print_register_to_assign(___nl__im__184));
#line 252
c_rt_lib0move(&___nl__im__187,___get_global_string_const(769));
#line 252
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__186, ___nl__im__187));
#line 252
c_rt_lib0clear(&___nl__im__186);
#line 252
c_rt_lib0clear(&___nl__im__187);
#line 253
goto label_622;
#line 253
label_463:
;
#line 253
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(254)));
#line 253
c_rt_lib0copy(&___nl__im__188, ___nl__im__189);
#line 254
goto label_622;
#line 254
label_467:
;
#line 254
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(255)));
#line 254
c_rt_lib0copy(&___nl__im__190, ___nl__im__191);
#line 255
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(361)));
#line 255
c_rt_lib0move(&___nl__im__195, generator_js_priv0print_register_to_assign(___nl__im__196));
#line 255
c_rt_lib0clear(&___nl__im__196);
#line 256
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(360)));
#line 256
c_rt_lib0move(&___nl__im__197, generator_js_priv0print_register_value(___nl__im__198));
#line 256
c_rt_lib0clear(&___nl__im__198);
#line 256
c_rt_lib0move(&___nl__im__194, c_rt_lib0concat_new(___nl__im__195, ___nl__im__197));
#line 256
c_rt_lib0clear(&___nl__im__195);
#line 256
c_rt_lib0clear(&___nl__im__197);
#line 256
c_rt_lib0move(&___nl__im__199,___get_global_string_const(110));
#line 256
c_rt_lib0move(&___nl__im__193, c_rt_lib0concat_new(___nl__im__194, ___nl__im__199));
#line 256
c_rt_lib0clear(&___nl__im__194);
#line 256
c_rt_lib0clear(&___nl__im__199);
#line 256
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(605)));
#line 256
c_rt_lib0move(&___nl__im__192, c_rt_lib0concat_new(___nl__im__193, ___nl__im__200));
#line 256
c_rt_lib0clear(&___nl__im__193);
#line 256
c_rt_lib0clear(&___nl__im__200);
#line 256
c_rt_lib0move(&___nl__im__201,___get_global_string_const(442));
#line 256
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__192, ___nl__im__201));
#line 256
c_rt_lib0clear(&___nl__im__192);
#line 256
c_rt_lib0clear(&___nl__im__201);
#line 257
goto label_622;
#line 257
label_492:
;
#line 257
c_rt_lib0move(&___nl__im__203, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(256)));
#line 257
c_rt_lib0copy(&___nl__im__202, ___nl__im__203);
#line 258
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__202, ___get_global_string_const(362)));
#line 258
c_rt_lib0move(&___nl__im__204, generator_js_priv0print_register_to_assign(___nl__im__205));
#line 258
c_rt_lib0clear(&___nl__im__205);
#line 258
c_rt_lib0move(&___nl__im__206,___get_global_string_const(770));
#line 258
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__204, ___nl__im__206));
#line 258
c_rt_lib0clear(&___nl__im__204);
#line 258
c_rt_lib0clear(&___nl__im__206);
#line 259
goto label_622;
#line 259
label_503:
;
#line 259
c_rt_lib0move(&___nl__im__208, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(257)));
#line 259
c_rt_lib0copy(&___nl__im__207, ___nl__im__208);
#line 260
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_use_index(___nl__im__207));
#line 261
goto label_622;
#line 261
label_508:
;
#line 261
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(258)));
#line 261
c_rt_lib0copy(&___nl__im__209, ___nl__im__210);
#line 262
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__209, ___get_global_string_const(362)));
#line 262
c_rt_lib0move(&___nl__im__211, generator_js_priv0print_register_to_assign(___nl__im__212));
#line 262
c_rt_lib0clear(&___nl__im__212);
#line 262
c_rt_lib0move(&___nl__im__213,___get_global_string_const(770));
#line 262
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__211, ___nl__im__213));
#line 262
c_rt_lib0clear(&___nl__im__211);
#line 262
c_rt_lib0clear(&___nl__im__213);
#line 263
goto label_622;
#line 263
label_519:
;
#line 263
c_rt_lib0move(&___nl__im__215, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(259)));
#line 263
c_rt_lib0copy(&___nl__im__214, ___nl__im__215);
#line 264
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_use_hash_index(___nl__im__214));
#line 265
goto label_622;
#line 265
label_524:
;
#line 265
c_rt_lib0move(&___nl__im__217, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(260)));
#line 265
c_rt_lib0copy(&___nl__im__216, ___nl__im__217);
#line 266
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__216, ___get_global_string_const(362)));
#line 266
c_rt_lib0move(&___nl__im__218, generator_js_priv0print_register_to_assign(___nl__im__219));
#line 266
c_rt_lib0clear(&___nl__im__219);
#line 266
c_rt_lib0move(&___nl__im__220,___get_global_string_const(770));
#line 266
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__218, ___nl__im__220));
#line 266
c_rt_lib0clear(&___nl__im__218);
#line 266
c_rt_lib0clear(&___nl__im__220);
#line 267
goto label_622;
#line 267
label_535:
;
#line 267
c_rt_lib0move(&___nl__im__222, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(261)));
#line 267
c_rt_lib0copy(&___nl__im__221, ___nl__im__222);
#line 268
c_rt_lib0move(&___nl__im__230,___get_global_string_const(607));
#line 268
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(360)));
#line 268
c_rt_lib0move(&___nl__im__231, generator_js_priv0print_register_value(___nl__im__232));
#line 268
c_rt_lib0clear(&___nl__im__232);
#line 268
c_rt_lib0move(&___nl__im__229, c_rt_lib0concat_new(___nl__im__230, ___nl__im__231));
#line 268
c_rt_lib0clear(&___nl__im__230);
#line 268
c_rt_lib0clear(&___nl__im__231);
#line 268
c_rt_lib0move(&___nl__im__233,___get_global_string_const(771));
#line 268
c_rt_lib0move(&___nl__im__228, c_rt_lib0concat_new(___nl__im__229, ___nl__im__233));
#line 268
c_rt_lib0clear(&___nl__im__229);
#line 268
c_rt_lib0clear(&___nl__im__233);
#line 268
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(567)));
#line 268
___nl__int__234 = getIntFromImm(___nl__im__235);
#line 268
c_rt_lib0clear(&___nl__im__235);
#line 268
c_rt_lib0move(&___nl__string__236, c_rt_lib0int_to_string(___nl__int__234));
#line 268
c_rt_lib0move(&___nl__im__227, c_rt_lib0concat_new(___nl__im__228, ___nl__string__236));
#line 268
c_rt_lib0clear(&___nl__im__228);
#line 268
//clear ___nl__int__234;
#line 268
c_rt_lib0clear(&___nl__string__236);
#line 268
c_rt_lib0move(&___nl__im__237,___get_global_string_const(322));
#line 268
c_rt_lib0move(&___nl__im__226, c_rt_lib0concat_new(___nl__im__227, ___nl__im__237));
#line 268
c_rt_lib0clear(&___nl__im__227);
#line 268
c_rt_lib0clear(&___nl__im__237);
#line 269
c_rt_lib0move(&___nl__im__238, generator_js_priv0get_namespace_name());
#line 269
c_rt_lib0move(&___nl__im__225, c_rt_lib0concat_new(___nl__im__226, ___nl__im__238));
#line 269
c_rt_lib0clear(&___nl__im__226);
#line 269
c_rt_lib0clear(&___nl__im__238);
#line 269
c_rt_lib0move(&___nl__im__239,___get_global_string_const(764));
#line 269
c_rt_lib0move(&___nl__im__224, c_rt_lib0concat_new(___nl__im__225, ___nl__im__239));
#line 269
c_rt_lib0clear(&___nl__im__225);
#line 269
c_rt_lib0clear(&___nl__im__239);
#line 269
c_rt_lib0move(&___nl__im__240, string0lf());
#line 269
c_rt_lib0move(&___nl__im__223, c_rt_lib0concat_new(___nl__im__224, ___nl__im__240));
#line 269
c_rt_lib0clear(&___nl__im__224);
#line 269
c_rt_lib0clear(&___nl__im__240);
#line 269
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__223));
#line 269
c_rt_lib0clear(&___nl__im__223);
#line 270
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(361)));
#line 270
c_rt_lib0move(&___nl__im__243, generator_js_priv0print_register_to_assign(___nl__im__244));
#line 270
c_rt_lib0clear(&___nl__im__244);
#line 271
c_rt_lib0move(&___nl__im__246, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(360)));
#line 271
c_rt_lib0move(&___nl__im__245, generator_js_priv0print_register_value(___nl__im__246));
#line 271
c_rt_lib0clear(&___nl__im__246);
#line 271
c_rt_lib0move(&___nl__im__242, c_rt_lib0concat_new(___nl__im__243, ___nl__im__245));
#line 271
c_rt_lib0clear(&___nl__im__243);
#line 271
c_rt_lib0clear(&___nl__im__245);
#line 271
c_rt_lib0move(&___nl__im__247,___get_global_string_const(772));
#line 271
c_rt_lib0move(&___nl__im__241, c_rt_lib0concat_new(___nl__im__242, ___nl__im__247));
#line 271
c_rt_lib0clear(&___nl__im__242);
#line 271
c_rt_lib0clear(&___nl__im__247);
#line 271
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__241));
#line 271
c_rt_lib0clear(&___nl__im__241);
#line 272
goto label_622;
#line 272
label_591:
;
#line 272
c_rt_lib0move(&___nl__im__249, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(262)));
#line 272
c_rt_lib0copy(&___nl__im__248, ___nl__im__249);
#line 273
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__248, ___get_global_string_const(362)));
#line 273
c_rt_lib0move(&___nl__im__250, generator_js_priv0print_register_to_assign(___nl__im__251));
#line 273
c_rt_lib0clear(&___nl__im__251);
#line 273
c_rt_lib0move(&___nl__im__252,___get_global_string_const(770));
#line 273
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__250, ___nl__im__252));
#line 273
c_rt_lib0clear(&___nl__im__250);
#line 273
c_rt_lib0clear(&___nl__im__252);
#line 274
goto label_622;
#line 274
label_602:
;
#line 274
c_rt_lib0move(&___nl__im__254, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(263)));
#line 274
c_rt_lib0copy(&___nl__im__253, ___nl__im__254);
#line 275
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_init_iter(___nl__im__253, ___ref___int__2));
#line 276
goto label_622;
#line 276
label_607:
;
#line 276
c_rt_lib0move(&___nl__im__256, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(264)));
#line 276
c_rt_lib0copy(&___nl__im__255, ___nl__im__256);
#line 277
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_next_iter(___nl__im__255, ___ref___int__2));
#line 278
goto label_622;
#line 278
label_612:
;
#line 278
c_rt_lib0move(&___nl__im__258, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(265)));
#line 278
c_rt_lib0copy(&___nl__im__257, ___nl__im__258);
#line 279
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_get_key_iter(___nl__im__257, ___ref___int__2));
#line 280
goto label_622;
#line 280
label_617:
;
#line 280
c_rt_lib0move(&___nl__im__260, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(266)));
#line 280
c_rt_lib0copy(&___nl__im__259, ___nl__im__260);
#line 281
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_is_end(___nl__im__259, ___ref___int__2));
#line 282
goto label_622;
#line 282
label_622:
;
#line 283
c_rt_lib0move(&___nl__im__265,___get_global_string_const(773));
#line 283
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 283
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_get_value_dec(___nl__im__269, ___get_global_string_const(551)));
#line 283
c_rt_lib0clear(&___nl__im__269);
#line 283
c_rt_lib0move(&___nl__im__267, c_rt_lib0hash_get_value_dec(___nl__im__268, ___get_global_string_const(552)));
#line 283
c_rt_lib0clear(&___nl__im__268);
#line 283
c_rt_lib0move(&___nl__im__270, c_rt_lib0hash_get_value_dec(___nl__im__267, ___get_global_string_const(154)));
#line 283
___nl__int__266 = getIntFromImm(___nl__im__270);
#line 283
c_rt_lib0clear(&___nl__im__267);
#line 283
c_rt_lib0clear(&___nl__im__270);
#line 283
c_rt_lib0move(&___nl__string__271, c_rt_lib0int_to_string(___nl__int__266));
#line 283
c_rt_lib0move(&___nl__im__264, c_rt_lib0concat_new(___nl__im__265, ___nl__string__271));
#line 283
c_rt_lib0clear(&___nl__im__265);
#line 283
//clear ___nl__int__266;
#line 283
c_rt_lib0clear(&___nl__string__271);
#line 283
c_rt_lib0move(&___nl__im__272, string0lf());
#line 283
c_rt_lib0move(&___nl__im__263, c_rt_lib0concat_new(___nl__im__264, ___nl__im__272));
#line 283
c_rt_lib0clear(&___nl__im__264);
#line 283
c_rt_lib0clear(&___nl__im__272);
#line 283
c_rt_lib0move(&___nl__im__262, c_rt_lib0concat_new(___nl__im__263, ___nl__im__4));
#line 283
c_rt_lib0clear(&___nl__im__263);
#line 283
c_rt_lib0move(&___nl__im__273, string0lf());
#line 283
c_rt_lib0move(&___nl__im__261, c_rt_lib0concat_new(___nl__im__262, ___nl__im__273));
#line 283
c_rt_lib0clear(&___nl__im__262);
#line 283
c_rt_lib0clear(&___nl__im__273);
#line 283
c_rt_lib0clear(&___nl__im__0);
#line 283
c_rt_lib0clear(&___nl__im__1);
#line 283
c_rt_lib0clear(&___nl__im__4);
#line 283
c_rt_lib0clear(&___nl__im__5);
#line 283
//clear ___nl__bool__6;
#line 283
c_rt_lib0clear(&___nl__im__7);
#line 283
c_rt_lib0clear(&___nl__im__8);
#line 283
c_rt_lib0clear(&___nl__im__9);
#line 283
c_rt_lib0clear(&___nl__im__18);
#line 283
c_rt_lib0clear(&___nl__im__19);
#line 283
c_rt_lib0clear(&___nl__im__28);
#line 283
c_rt_lib0clear(&___nl__im__29);
#line 283
c_rt_lib0clear(&___nl__im__38);
#line 283
c_rt_lib0clear(&___nl__im__39);
#line 283
c_rt_lib0clear(&___nl__im__44);
#line 283
c_rt_lib0clear(&___nl__im__45);
#line 283
c_rt_lib0clear(&___nl__im__54);
#line 283
c_rt_lib0clear(&___nl__im__55);
#line 283
c_rt_lib0clear(&___nl__im__56);
#line 283
c_rt_lib0clear(&___nl__im__57);
#line 283
c_rt_lib0clear(&___nl__im__58);
#line 283
c_rt_lib0clear(&___nl__im__59);
#line 283
c_rt_lib0clear(&___nl__im__65);
#line 283
c_rt_lib0clear(&___nl__im__66);
#line 283
c_rt_lib0clear(&___nl__im__80);
#line 283
c_rt_lib0clear(&___nl__im__81);
#line 283
c_rt_lib0clear(&___nl__im__82);
#line 283
c_rt_lib0clear(&___nl__im__83);
#line 283
c_rt_lib0clear(&___nl__im__86);
#line 283
c_rt_lib0clear(&___nl__im__87);
#line 283
c_rt_lib0clear(&___nl__im__90);
#line 283
c_rt_lib0clear(&___nl__im__91);
#line 283
c_rt_lib0clear(&___nl__im__94);
#line 283
c_rt_lib0clear(&___nl__im__95);
#line 283
c_rt_lib0clear(&___nl__im__107);
#line 283
c_rt_lib0clear(&___nl__im__108);
#line 283
c_rt_lib0clear(&___nl__im__122);
#line 283
c_rt_lib0clear(&___nl__im__123);
#line 283
c_rt_lib0clear(&___nl__im__126);
#line 283
c_rt_lib0clear(&___nl__im__127);
#line 283
c_rt_lib0clear(&___nl__im__130);
#line 283
c_rt_lib0clear(&___nl__im__131);
#line 283
c_rt_lib0clear(&___nl__im__146);
#line 283
c_rt_lib0clear(&___nl__im__147);
#line 283
c_rt_lib0clear(&___nl__im__161);
#line 283
c_rt_lib0clear(&___nl__im__162);
#line 283
//clear ___nl__int__163;
#line 283
c_rt_lib0clear(&___nl__im__164);
#line 283
c_rt_lib0clear(&___nl__im__169);
#line 283
c_rt_lib0clear(&___nl__im__170);
#line 283
//clear ___nl__int__182;
#line 283
c_rt_lib0clear(&___nl__im__183);
#line 283
c_rt_lib0clear(&___nl__im__184);
#line 283
c_rt_lib0clear(&___nl__im__185);
#line 283
c_rt_lib0clear(&___nl__im__188);
#line 283
c_rt_lib0clear(&___nl__im__189);
#line 283
c_rt_lib0clear(&___nl__im__190);
#line 283
c_rt_lib0clear(&___nl__im__191);
#line 283
c_rt_lib0clear(&___nl__im__202);
#line 283
c_rt_lib0clear(&___nl__im__203);
#line 283
c_rt_lib0clear(&___nl__im__207);
#line 283
c_rt_lib0clear(&___nl__im__208);
#line 283
c_rt_lib0clear(&___nl__im__209);
#line 283
c_rt_lib0clear(&___nl__im__210);
#line 283
c_rt_lib0clear(&___nl__im__214);
#line 283
c_rt_lib0clear(&___nl__im__215);
#line 283
c_rt_lib0clear(&___nl__im__216);
#line 283
c_rt_lib0clear(&___nl__im__217);
#line 283
c_rt_lib0clear(&___nl__im__221);
#line 283
c_rt_lib0clear(&___nl__im__222);
#line 283
c_rt_lib0clear(&___nl__im__248);
#line 283
c_rt_lib0clear(&___nl__im__249);
#line 283
c_rt_lib0clear(&___nl__im__253);
#line 283
c_rt_lib0clear(&___nl__im__254);
#line 283
c_rt_lib0clear(&___nl__im__255);
#line 283
c_rt_lib0clear(&___nl__im__256);
#line 283
c_rt_lib0clear(&___nl__im__257);
#line 283
c_rt_lib0clear(&___nl__im__258);
#line 283
c_rt_lib0clear(&___nl__im__259);
#line 283
c_rt_lib0clear(&___nl__im__260);
#line 283
return ___nl__im__261;
#line 283
c_rt_lib0clear(&___nl__im__0);
#line 283
c_rt_lib0clear(&___nl__im__1);
#line 283
c_rt_lib0clear(&___nl__im__4);
#line 283
c_rt_lib0clear(&___nl__im__5);
#line 283
//clear ___nl__bool__6;
#line 283
c_rt_lib0clear(&___nl__im__7);
#line 283
c_rt_lib0clear(&___nl__im__8);
#line 283
c_rt_lib0clear(&___nl__im__9);
#line 283
c_rt_lib0clear(&___nl__im__18);
#line 283
c_rt_lib0clear(&___nl__im__19);
#line 283
c_rt_lib0clear(&___nl__im__28);
#line 283
c_rt_lib0clear(&___nl__im__29);
#line 283
c_rt_lib0clear(&___nl__im__38);
#line 283
c_rt_lib0clear(&___nl__im__39);
#line 283
c_rt_lib0clear(&___nl__im__44);
#line 283
c_rt_lib0clear(&___nl__im__45);
#line 283
c_rt_lib0clear(&___nl__im__54);
#line 283
c_rt_lib0clear(&___nl__im__55);
#line 283
c_rt_lib0clear(&___nl__im__56);
#line 283
c_rt_lib0clear(&___nl__im__57);
#line 283
c_rt_lib0clear(&___nl__im__58);
#line 283
c_rt_lib0clear(&___nl__im__59);
#line 283
c_rt_lib0clear(&___nl__im__65);
#line 283
c_rt_lib0clear(&___nl__im__66);
#line 283
c_rt_lib0clear(&___nl__im__80);
#line 283
c_rt_lib0clear(&___nl__im__81);
#line 283
c_rt_lib0clear(&___nl__im__82);
#line 283
c_rt_lib0clear(&___nl__im__83);
#line 283
c_rt_lib0clear(&___nl__im__86);
#line 283
c_rt_lib0clear(&___nl__im__87);
#line 283
c_rt_lib0clear(&___nl__im__90);
#line 283
c_rt_lib0clear(&___nl__im__91);
#line 283
c_rt_lib0clear(&___nl__im__94);
#line 283
c_rt_lib0clear(&___nl__im__95);
#line 283
c_rt_lib0clear(&___nl__im__107);
#line 283
c_rt_lib0clear(&___nl__im__108);
#line 283
c_rt_lib0clear(&___nl__im__122);
#line 283
c_rt_lib0clear(&___nl__im__123);
#line 283
c_rt_lib0clear(&___nl__im__126);
#line 283
c_rt_lib0clear(&___nl__im__127);
#line 283
c_rt_lib0clear(&___nl__im__130);
#line 283
c_rt_lib0clear(&___nl__im__131);
#line 283
c_rt_lib0clear(&___nl__im__146);
#line 283
c_rt_lib0clear(&___nl__im__147);
#line 283
c_rt_lib0clear(&___nl__im__161);
#line 283
c_rt_lib0clear(&___nl__im__162);
#line 283
//clear ___nl__int__163;
#line 283
c_rt_lib0clear(&___nl__im__164);
#line 283
c_rt_lib0clear(&___nl__im__169);
#line 283
c_rt_lib0clear(&___nl__im__170);
#line 283
//clear ___nl__int__182;
#line 283
c_rt_lib0clear(&___nl__im__183);
#line 283
c_rt_lib0clear(&___nl__im__184);
#line 283
c_rt_lib0clear(&___nl__im__185);
#line 283
c_rt_lib0clear(&___nl__im__188);
#line 283
c_rt_lib0clear(&___nl__im__189);
#line 283
c_rt_lib0clear(&___nl__im__190);
#line 283
c_rt_lib0clear(&___nl__im__191);
#line 283
c_rt_lib0clear(&___nl__im__202);
#line 283
c_rt_lib0clear(&___nl__im__203);
#line 283
c_rt_lib0clear(&___nl__im__207);
#line 283
c_rt_lib0clear(&___nl__im__208);
#line 283
c_rt_lib0clear(&___nl__im__209);
#line 283
c_rt_lib0clear(&___nl__im__210);
#line 283
c_rt_lib0clear(&___nl__im__214);
#line 283
c_rt_lib0clear(&___nl__im__215);
#line 283
c_rt_lib0clear(&___nl__im__216);
#line 283
c_rt_lib0clear(&___nl__im__217);
#line 283
c_rt_lib0clear(&___nl__im__221);
#line 283
c_rt_lib0clear(&___nl__im__222);
#line 283
c_rt_lib0clear(&___nl__im__248);
#line 283
c_rt_lib0clear(&___nl__im__249);
#line 283
c_rt_lib0clear(&___nl__im__253);
#line 283
c_rt_lib0clear(&___nl__im__254);
#line 283
c_rt_lib0clear(&___nl__im__255);
#line 283
c_rt_lib0clear(&___nl__im__256);
#line 283
c_rt_lib0clear(&___nl__im__257);
#line 283
c_rt_lib0clear(&___nl__im__258);
#line 283
c_rt_lib0clear(&___nl__im__259);
#line 283
c_rt_lib0clear(&___nl__im__260);
#line 283
c_rt_lib0clear(&___nl__im__261);
#line 283
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_move(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2) {
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
#line 287
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 287
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 287
c_rt_lib0clear(&___nl__im__4);
#line 287
___nl__bool__3 = !___nl__bool__3;
#line 287
if(___nl__bool__3){ goto label_11;}
#line 287
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
//clear ___nl__bool__3;
#line 287
return ___nl__im__5;
#line 287
goto label_11;
#line 287
label_11:
;
#line 287
//clear ___nl__bool__3;
#line 287
c_rt_lib0clear(&___nl__im__5);
#line 288
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 288
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(422));
#line 288
c_rt_lib0clear(&___nl__im__8);
#line 288
___nl__bool__7 = !___nl__bool__6;
#line 288
if(___nl__bool__7){ goto label_22;}
#line 288
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 288
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(422));
#line 288
c_rt_lib0clear(&___nl__im__9);
#line 288
label_22:
;
#line 288
//clear ___nl__bool__7;
#line 288
___nl__bool__6 = !___nl__bool__6;
#line 288
if(___nl__bool__6){ goto label_40;}
#line 289
c_rt_lib0move(&___nl__im__12, generator_js_priv0print_register_to_assign(___nl__im__0));
#line 289
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register(___nl__im__1));
#line 289
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 289
c_rt_lib0clear(&___nl__im__12);
#line 289
c_rt_lib0clear(&___nl__im__13);
#line 289
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 289
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 289
c_rt_lib0clear(&___nl__im__11);
#line 289
c_rt_lib0clear(&___nl__im__14);
#line 289
c_rt_lib0clear(&___nl__im__0);
#line 289
c_rt_lib0clear(&___nl__im__1);
#line 289
//clear ___nl__bool__6;
#line 289
return ___nl__im__10;
#line 290
goto label_40;
#line 290
label_40:
;
#line 290
//clear ___nl__bool__6;
#line 290
c_rt_lib0clear(&___nl__im__10);
#line 291
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 291
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(131));
#line 291
if(___nl__bool__16){ goto label_63;}
#line 293
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(405));
#line 293
if(___nl__bool__16){ goto label_80;}
#line 299
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(406));
#line 299
if(___nl__bool__16){ goto label_125;}
#line 301
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 301
if(___nl__bool__16){ goto label_143;}
#line 307
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(559));
#line 307
if(___nl__bool__16){ goto label_198;}
#line 313
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 313
if(___nl__bool__16){ goto label_232;}
#line 319
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(563));
#line 319
if(___nl__bool__16){ goto label_268;}
#line 321
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(128));
#line 321
if(___nl__bool__16){ goto label_274;}
#line 321
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 321
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 321
nl_die_arg(___nl__im__17);
#line 291
label_63:
;
#line 292
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 292
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 292
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value(___nl__im__1));
#line 292
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 292
c_rt_lib0clear(&___nl__im__21);
#line 292
c_rt_lib0clear(&___nl__im__22);
#line 292
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 292
c_rt_lib0clear(&___nl__im__19);
#line 292
c_rt_lib0clear(&___nl__im__20);
#line 292
c_rt_lib0clear(&___nl__im__0);
#line 292
c_rt_lib0clear(&___nl__im__1);
#line 292
c_rt_lib0clear(&___nl__im__15);
#line 292
//clear ___nl__bool__16;
#line 292
c_rt_lib0clear(&___nl__im__17);
#line 292
return ___nl__im__18;
#line 293
goto label_280;
#line 293
label_80:
;
#line 294
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 294
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(131));
#line 294
c_rt_lib0clear(&___nl__im__24);
#line 294
___nl__bool__23 = !___nl__bool__23;
#line 294
if(___nl__bool__23){ goto label_104;}
#line 295
c_rt_lib0move(&___nl__im__27, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 295
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_register_value(___nl__im__1));
#line 295
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 295
c_rt_lib0clear(&___nl__im__27);
#line 295
c_rt_lib0clear(&___nl__im__28);
#line 295
c_rt_lib0move(&___nl__im__29,___get_global_string_const(774));
#line 295
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 295
c_rt_lib0clear(&___nl__im__26);
#line 295
c_rt_lib0clear(&___nl__im__29);
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
c_rt_lib0clear(&___nl__im__15);
#line 295
//clear ___nl__bool__16;
#line 295
c_rt_lib0clear(&___nl__im__17);
#line 295
c_rt_lib0clear(&___nl__im__18);
#line 295
//clear ___nl__bool__23;
#line 295
return ___nl__im__25;
#line 296
goto label_120;
#line 296
label_104:
;
#line 297
c_rt_lib0move(&___nl__im__31, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 297
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_register_value(___nl__im__1));
#line 297
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 297
c_rt_lib0clear(&___nl__im__31);
#line 297
c_rt_lib0clear(&___nl__im__32);
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
c_rt_lib0clear(&___nl__im__15);
#line 297
//clear ___nl__bool__16;
#line 297
c_rt_lib0clear(&___nl__im__17);
#line 297
c_rt_lib0clear(&___nl__im__18);
#line 297
//clear ___nl__bool__23;
#line 297
c_rt_lib0clear(&___nl__im__25);
#line 297
return ___nl__im__30;
#line 298
goto label_120;
#line 298
label_120:
;
#line 298
//clear ___nl__bool__23;
#line 298
c_rt_lib0clear(&___nl__im__25);
#line 298
c_rt_lib0clear(&___nl__im__30);
#line 299
goto label_280;
#line 299
label_125:
;
#line 300
c_rt_lib0move(&___nl__im__34, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 300
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 300
c_rt_lib0move(&___nl__im__37, generator_js_priv0print_register_value(___nl__im__1));
#line 300
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 300
c_rt_lib0clear(&___nl__im__36);
#line 300
c_rt_lib0clear(&___nl__im__37);
#line 300
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 300
c_rt_lib0clear(&___nl__im__34);
#line 300
c_rt_lib0clear(&___nl__im__35);
#line 300
c_rt_lib0clear(&___nl__im__0);
#line 300
c_rt_lib0clear(&___nl__im__1);
#line 300
c_rt_lib0clear(&___nl__im__15);
#line 300
//clear ___nl__bool__16;
#line 300
c_rt_lib0clear(&___nl__im__17);
#line 300
c_rt_lib0clear(&___nl__im__18);
#line 300
return ___nl__im__33;
#line 301
goto label_280;
#line 301
label_143:
;
#line 302
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 302
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(131));
#line 302
c_rt_lib0clear(&___nl__im__39);
#line 302
___nl__bool__38 = !___nl__bool__38;
#line 302
if(___nl__bool__38){ goto label_176;}
#line 303
c_rt_lib0move(&___nl__im__42, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 303
c_rt_lib0move(&___nl__im__44,___get_global_string_const(271));
#line 303
c_rt_lib0move(&___nl__im__45,___get_global_string_const(601));
#line 303
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 303
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 303
c_rt_lib0clear(&___nl__im__47);
#line 303
c_rt_lib0move(&___nl__im__43, generator_js_priv0print_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 303
c_rt_lib0clear(&___nl__im__44);
#line 303
c_rt_lib0clear(&___nl__im__45);
#line 303
c_rt_lib0clear(&___nl__im__46);
#line 303
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 303
c_rt_lib0clear(&___nl__im__42);
#line 303
c_rt_lib0clear(&___nl__im__43);
#line 303
c_rt_lib0move(&___nl__im__48,___get_global_string_const(442));
#line 303
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 303
c_rt_lib0clear(&___nl__im__41);
#line 303
c_rt_lib0clear(&___nl__im__48);
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
c_rt_lib0clear(&___nl__im__15);
#line 303
//clear ___nl__bool__16;
#line 303
c_rt_lib0clear(&___nl__im__17);
#line 303
c_rt_lib0clear(&___nl__im__18);
#line 303
c_rt_lib0clear(&___nl__im__33);
#line 303
//clear ___nl__bool__38;
#line 303
return ___nl__im__40;
#line 304
goto label_193;
#line 304
label_176:
;
#line 305
c_rt_lib0move(&___nl__im__50, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 305
c_rt_lib0move(&___nl__im__51, generator_js_priv0print_register_value(___nl__im__1));
#line 305
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 305
c_rt_lib0clear(&___nl__im__50);
#line 305
c_rt_lib0clear(&___nl__im__51);
#line 305
c_rt_lib0clear(&___nl__im__0);
#line 305
c_rt_lib0clear(&___nl__im__1);
#line 305
c_rt_lib0clear(&___nl__im__15);
#line 305
//clear ___nl__bool__16;
#line 305
c_rt_lib0clear(&___nl__im__17);
#line 305
c_rt_lib0clear(&___nl__im__18);
#line 305
c_rt_lib0clear(&___nl__im__33);
#line 305
//clear ___nl__bool__38;
#line 305
c_rt_lib0clear(&___nl__im__40);
#line 305
return ___nl__im__49;
#line 306
goto label_193;
#line 306
label_193:
;
#line 306
//clear ___nl__bool__38;
#line 306
c_rt_lib0clear(&___nl__im__40);
#line 306
c_rt_lib0clear(&___nl__im__49);
#line 307
goto label_280;
#line 307
label_198:
;
#line 307
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(559)));
#line 307
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 308
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 308
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(559));
#line 308
c_rt_lib0clear(&___nl__im__55);
#line 308
___nl__bool__54 = !___nl__bool__54;
#line 308
if(___nl__bool__54){ goto label_223;}
#line 309
c_rt_lib0move(&___nl__im__57, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 309
c_rt_lib0move(&___nl__im__58, generator_js_priv0print_register_value(___nl__im__1));
#line 309
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 309
c_rt_lib0clear(&___nl__im__57);
#line 309
c_rt_lib0clear(&___nl__im__58);
#line 309
c_rt_lib0clear(&___nl__im__0);
#line 309
c_rt_lib0clear(&___nl__im__1);
#line 309
c_rt_lib0clear(&___nl__im__15);
#line 309
//clear ___nl__bool__16;
#line 309
c_rt_lib0clear(&___nl__im__17);
#line 309
c_rt_lib0clear(&___nl__im__18);
#line 309
c_rt_lib0clear(&___nl__im__33);
#line 309
c_rt_lib0clear(&___nl__im__52);
#line 309
c_rt_lib0clear(&___nl__im__53);
#line 309
//clear ___nl__bool__54;
#line 309
return ___nl__im__56;
#line 310
goto label_227;
#line 310
label_223:
;
#line 311
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 311
nl_die_arg(___nl__im__59);
#line 312
goto label_227;
#line 312
label_227:
;
#line 312
//clear ___nl__bool__54;
#line 312
c_rt_lib0clear(&___nl__im__56);
#line 312
c_rt_lib0clear(&___nl__im__59);
#line 313
goto label_280;
#line 313
label_232:
;
#line 313
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(127)));
#line 313
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 314
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 314
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(127));
#line 314
c_rt_lib0clear(&___nl__im__63);
#line 314
___nl__bool__62 = !___nl__bool__62;
#line 314
if(___nl__bool__62){ goto label_259;}
#line 315
c_rt_lib0move(&___nl__im__65, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 315
c_rt_lib0move(&___nl__im__66, generator_js_priv0print_register_value(___nl__im__1));
#line 315
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 315
c_rt_lib0clear(&___nl__im__65);
#line 315
c_rt_lib0clear(&___nl__im__66);
#line 315
c_rt_lib0clear(&___nl__im__0);
#line 315
c_rt_lib0clear(&___nl__im__1);
#line 315
c_rt_lib0clear(&___nl__im__15);
#line 315
//clear ___nl__bool__16;
#line 315
c_rt_lib0clear(&___nl__im__17);
#line 315
c_rt_lib0clear(&___nl__im__18);
#line 315
c_rt_lib0clear(&___nl__im__33);
#line 315
c_rt_lib0clear(&___nl__im__52);
#line 315
c_rt_lib0clear(&___nl__im__53);
#line 315
c_rt_lib0clear(&___nl__im__60);
#line 315
c_rt_lib0clear(&___nl__im__61);
#line 315
//clear ___nl__bool__62;
#line 315
return ___nl__im__64;
#line 316
goto label_263;
#line 316
label_259:
;
#line 317
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 317
nl_die_arg(___nl__im__67);
#line 318
goto label_263;
#line 318
label_263:
;
#line 318
//clear ___nl__bool__62;
#line 318
c_rt_lib0clear(&___nl__im__64);
#line 318
c_rt_lib0clear(&___nl__im__67);
#line 319
goto label_280;
#line 319
label_268:
;
#line 319
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(563)));
#line 319
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 320
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 320
nl_die_arg(___nl__im__70);
#line 321
goto label_280;
#line 321
label_274:
;
#line 321
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(128)));
#line 321
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 322
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 322
nl_die_arg(___nl__im__73);
#line 323
goto label_280;
#line 323
label_280:
;
return NULL;

}

ImmT  generator_js_priv0print_load_const(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
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
#line 327
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 327
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 327
if(___nl__bool__4){ goto label_20;}
#line 329
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(405));
#line 329
if(___nl__bool__4){ goto label_37;}
#line 331
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(406));
#line 331
if(___nl__bool__4){ goto label_53;}
#line 333
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 333
if(___nl__bool__4){ goto label_72;}
#line 335
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 335
if(___nl__bool__4){ goto label_99;}
#line 337
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 337
if(___nl__bool__4){ goto label_105;}
#line 339
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(563));
#line 339
if(___nl__bool__4){ goto label_111;}
#line 341
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 341
if(___nl__bool__4){ goto label_117;}
#line 341
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 341
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 341
nl_die_arg(___nl__im__5);
#line 327
label_20:
;
#line 328
c_rt_lib0move(&___nl__im__8, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 328
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 328
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 328
c_rt_lib0clear(&___nl__im__8);
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
c_rt_lib0move(&___nl__im__10,___get_global_string_const(442));
#line 328
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 328
c_rt_lib0clear(&___nl__im__7);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 328
c_rt_lib0clear(&___nl__im__0);
#line 328
c_rt_lib0clear(&___nl__im__1);
#line 328
c_rt_lib0clear(&___nl__im__3);
#line 328
//clear ___nl__bool__4;
#line 328
c_rt_lib0clear(&___nl__im__5);
#line 328
return ___nl__im__6;
#line 329
goto label_123;
#line 329
label_37:
;
#line 330
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 330
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 330
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 330
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 330
c_rt_lib0clear(&___nl__im__12);
#line 330
c_rt_lib0clear(&___nl__im__14);
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
//clear ___nl__bool__4;
#line 330
c_rt_lib0clear(&___nl__im__5);
#line 330
c_rt_lib0clear(&___nl__im__6);
#line 330
return ___nl__im__11;
#line 331
goto label_123;
#line 331
label_53:
;
#line 332
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 332
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 332
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 332
c_rt_lib0clear(&___nl__im__17);
#line 332
c_rt_lib0clear(&___nl__im__18);
#line 332
c_rt_lib0move(&___nl__im__19,___get_global_string_const(442));
#line 332
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 332
c_rt_lib0clear(&___nl__im__16);
#line 332
c_rt_lib0clear(&___nl__im__19);
#line 332
c_rt_lib0clear(&___nl__im__0);
#line 332
c_rt_lib0clear(&___nl__im__1);
#line 332
c_rt_lib0clear(&___nl__im__3);
#line 332
//clear ___nl__bool__4;
#line 332
c_rt_lib0clear(&___nl__im__5);
#line 332
c_rt_lib0clear(&___nl__im__6);
#line 332
c_rt_lib0clear(&___nl__im__11);
#line 332
return ___nl__im__15;
#line 333
goto label_123;
#line 333
label_72:
;
#line 334
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 334
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 334
if(___nl__bool__24){ goto label_78;}
#line 334
c_rt_lib0move(&___nl__im__23,___get_global_string_const(572));
#line 334
goto label_80;
#line 334
label_78:
;
#line 334
c_rt_lib0move(&___nl__im__23,___get_global_string_const(573));
#line 334
label_80:
;
#line 334
//clear ___nl__bool__24;
#line 334
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 334
c_rt_lib0clear(&___nl__im__22);
#line 334
c_rt_lib0clear(&___nl__im__23);
#line 334
c_rt_lib0move(&___nl__im__25,___get_global_string_const(442));
#line 334
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 334
c_rt_lib0clear(&___nl__im__21);
#line 334
c_rt_lib0clear(&___nl__im__25);
#line 334
c_rt_lib0clear(&___nl__im__0);
#line 334
c_rt_lib0clear(&___nl__im__1);
#line 334
c_rt_lib0clear(&___nl__im__3);
#line 334
//clear ___nl__bool__4;
#line 334
c_rt_lib0clear(&___nl__im__5);
#line 334
c_rt_lib0clear(&___nl__im__6);
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0clear(&___nl__im__15);
#line 334
return ___nl__im__20;
#line 335
goto label_123;
#line 335
label_99:
;
#line 335
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(559)));
#line 335
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 336
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 336
nl_die_arg(___nl__im__28);
#line 337
goto label_123;
#line 337
label_105:
;
#line 337
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(127)));
#line 337
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 338
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 338
nl_die_arg(___nl__im__31);
#line 339
goto label_123;
#line 339
label_111:
;
#line 339
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(563)));
#line 339
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 340
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 340
nl_die_arg(___nl__im__34);
#line 341
goto label_123;
#line 341
label_117:
;
#line 341
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 341
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 342
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 342
nl_die_arg(___nl__im__37);
#line 343
goto label_123;
#line 343
label_123:
;
return NULL;

}

ImmT  generator_js_priv0print_array_push(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2) {
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
#line 347
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 347
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 347
c_rt_lib0clear(&___nl__im__4);
#line 347
___nl__bool__3 = !___nl__bool__3;
#line 347
if(___nl__bool__3){ goto label_25;}
#line 348
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 348
c_rt_lib0move(&___nl__im__8,___get_global_string_const(243));
#line 349
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 349
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 349
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 349
c_rt_lib0clear(&___nl__im__10);
#line 349
c_rt_lib0clear(&___nl__im__11);
#line 349
c_rt_lib0move(&___nl__im__6, generator_js_priv0print_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 349
c_rt_lib0clear(&___nl__im__7);
#line 349
c_rt_lib0clear(&___nl__im__8);
#line 349
c_rt_lib0clear(&___nl__im__9);
#line 349
c_rt_lib0move(&___nl__im__12,___get_global_string_const(442));
#line 349
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 349
c_rt_lib0clear(&___nl__im__6);
#line 349
c_rt_lib0clear(&___nl__im__12);
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
c_rt_lib0clear(&___nl__im__1);
#line 349
//clear ___nl__bool__3;
#line 349
return ___nl__im__5;
#line 350
goto label_54;
#line 350
label_25:
;
#line 350
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 350
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(127));
#line 350
c_rt_lib0clear(&___nl__im__13);
#line 350
___nl__bool__3 = !___nl__bool__3;
#line 350
if(___nl__bool__3){ goto label_50;}
#line 351
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_register_value(___nl__im__0));
#line 351
c_rt_lib0move(&___nl__im__18,___get_global_string_const(775));
#line 351
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 351
c_rt_lib0clear(&___nl__im__17);
#line 351
c_rt_lib0clear(&___nl__im__18);
#line 351
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_reference(___nl__im__1));
#line 351
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 351
c_rt_lib0clear(&___nl__im__16);
#line 351
c_rt_lib0clear(&___nl__im__19);
#line 351
c_rt_lib0move(&___nl__im__20,___get_global_string_const(508));
#line 351
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 351
c_rt_lib0clear(&___nl__im__15);
#line 351
c_rt_lib0clear(&___nl__im__20);
#line 351
c_rt_lib0clear(&___nl__im__0);
#line 351
c_rt_lib0clear(&___nl__im__1);
#line 351
//clear ___nl__bool__3;
#line 351
c_rt_lib0clear(&___nl__im__5);
#line 351
return ___nl__im__14;
#line 352
goto label_54;
#line 352
label_50:
;
#line 353
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 353
nl_die_arg(___nl__im__21);
#line 354
goto label_54;
#line 354
label_54:
;
#line 354
//clear ___nl__bool__3;
#line 354
c_rt_lib0clear(&___nl__im__5);
#line 354
c_rt_lib0clear(&___nl__im__14);
#line 354
c_rt_lib0clear(&___nl__im__21);
return NULL;

}

ImmT  generator_js_priv0print_array_len(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2) {
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
#line 358
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 358
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 358
c_rt_lib0clear(&___nl__im__4);
#line 358
___nl__bool__3 = !___nl__bool__3;
#line 358
if(___nl__bool__3){ goto label_29;}
#line 359
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 359
c_rt_lib0move(&___nl__im__9,___get_global_string_const(271));
#line 359
c_rt_lib0move(&___nl__im__10,___get_global_string_const(244));
#line 360
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value(___nl__im__1));
#line 360
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__13));
#line 360
c_rt_lib0clear(&___nl__im__13);
#line 360
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 360
c_rt_lib0clear(&___nl__im__12);
#line 360
c_rt_lib0move(&___nl__im__8, generator_js_priv0print_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 360
c_rt_lib0clear(&___nl__im__9);
#line 360
c_rt_lib0clear(&___nl__im__10);
#line 360
c_rt_lib0clear(&___nl__im__11);
#line 360
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 360
c_rt_lib0clear(&___nl__im__7);
#line 360
c_rt_lib0clear(&___nl__im__8);
#line 360
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 360
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 360
c_rt_lib0clear(&___nl__im__6);
#line 360
c_rt_lib0clear(&___nl__im__14);
#line 360
c_rt_lib0clear(&___nl__im__0);
#line 360
c_rt_lib0clear(&___nl__im__1);
#line 360
//clear ___nl__bool__3;
#line 360
return ___nl__im__5;
#line 361
goto label_54;
#line 361
label_29:
;
#line 361
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 361
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 361
c_rt_lib0clear(&___nl__im__15);
#line 361
___nl__bool__3 = !___nl__bool__3;
#line 361
if(___nl__bool__3){ goto label_50;}
#line 362
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 362
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value(___nl__im__1));
#line 362
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 362
c_rt_lib0clear(&___nl__im__18);
#line 362
c_rt_lib0clear(&___nl__im__19);
#line 362
c_rt_lib0move(&___nl__im__20,___get_global_string_const(776));
#line 362
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 362
c_rt_lib0clear(&___nl__im__17);
#line 362
c_rt_lib0clear(&___nl__im__20);
#line 362
c_rt_lib0clear(&___nl__im__0);
#line 362
c_rt_lib0clear(&___nl__im__1);
#line 362
//clear ___nl__bool__3;
#line 362
c_rt_lib0clear(&___nl__im__5);
#line 362
return ___nl__im__16;
#line 363
goto label_54;
#line 363
label_50:
;
#line 364
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 364
nl_die_arg(___nl__im__21);
#line 365
goto label_54;
#line 365
label_54:
;
#line 365
//clear ___nl__bool__3;
#line 365
c_rt_lib0clear(&___nl__im__5);
#line 365
c_rt_lib0clear(&___nl__im__16);
#line 365
c_rt_lib0clear(&___nl__im__21);
return NULL;

}

ImmT  generator_js_priv0print_use_index(nlasm0use_index_t0type ___nl__im__0) {
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
#line 369
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 369
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(206)));
#line 369
c_rt_lib0clear(&___nl__im__3);
#line 369
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 369
c_rt_lib0clear(&___nl__im__2);
#line 369
___nl__bool__1 = !___nl__bool__1;
#line 369
if(___nl__bool__1){ goto label_34;}
#line 370
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 370
c_rt_lib0move(&___nl__im__8, generator_js_priv0print_register_to_assign(___nl__im__9));
#line 370
c_rt_lib0clear(&___nl__im__9);
#line 370
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 370
c_rt_lib0move(&___nl__im__10, generator_js_priv0print_register_value(___nl__im__11));
#line 370
c_rt_lib0clear(&___nl__im__11);
#line 370
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 370
c_rt_lib0clear(&___nl__im__8);
#line 370
c_rt_lib0clear(&___nl__im__10);
#line 370
c_rt_lib0move(&___nl__im__12,___get_global_string_const(316));
#line 370
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 370
c_rt_lib0clear(&___nl__im__7);
#line 370
c_rt_lib0clear(&___nl__im__12);
#line 371
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 371
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value(___nl__im__14));
#line 371
c_rt_lib0clear(&___nl__im__14);
#line 371
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 371
c_rt_lib0clear(&___nl__im__6);
#line 371
c_rt_lib0clear(&___nl__im__13);
#line 371
c_rt_lib0move(&___nl__im__15,___get_global_string_const(777));
#line 371
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 371
c_rt_lib0clear(&___nl__im__5);
#line 371
c_rt_lib0clear(&___nl__im__15);
#line 371
c_rt_lib0clear(&___nl__im__0);
#line 371
//clear ___nl__bool__1;
#line 371
return ___nl__im__4;
#line 372
goto label_74;
#line 372
label_34:
;
#line 372
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 372
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 372
c_rt_lib0clear(&___nl__im__17);
#line 372
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(131));
#line 372
c_rt_lib0clear(&___nl__im__16);
#line 372
___nl__bool__1 = !___nl__bool__1;
#line 372
if(___nl__bool__1){ goto label_70;}
#line 373
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 373
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_to_assign(___nl__im__23));
#line 373
c_rt_lib0clear(&___nl__im__23);
#line 373
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 373
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__25));
#line 373
c_rt_lib0clear(&___nl__im__25);
#line 373
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 373
c_rt_lib0clear(&___nl__im__22);
#line 373
c_rt_lib0clear(&___nl__im__24);
#line 374
c_rt_lib0move(&___nl__im__26,___get_global_string_const(765));
#line 374
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 374
c_rt_lib0clear(&___nl__im__21);
#line 374
c_rt_lib0clear(&___nl__im__26);
#line 374
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 374
c_rt_lib0move(&___nl__im__27, generator_js_priv0print_register_value(___nl__im__28));
#line 374
c_rt_lib0clear(&___nl__im__28);
#line 374
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 374
c_rt_lib0clear(&___nl__im__20);
#line 374
c_rt_lib0clear(&___nl__im__27);
#line 374
c_rt_lib0move(&___nl__im__29,___get_global_string_const(508));
#line 374
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 374
c_rt_lib0clear(&___nl__im__19);
#line 374
c_rt_lib0clear(&___nl__im__29);
#line 374
c_rt_lib0clear(&___nl__im__0);
#line 374
//clear ___nl__bool__1;
#line 374
c_rt_lib0clear(&___nl__im__4);
#line 374
return ___nl__im__18;
#line 375
goto label_74;
#line 375
label_70:
;
#line 376
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 376
nl_die_arg(___nl__im__30);
#line 377
goto label_74;
#line 377
label_74:
;
#line 377
//clear ___nl__bool__1;
#line 377
c_rt_lib0clear(&___nl__im__4);
#line 377
c_rt_lib0clear(&___nl__im__18);
#line 377
c_rt_lib0clear(&___nl__im__30);
return NULL;

}

ImmT  generator_js_priv0print_use_hash_index(nlasm0use_hash_index_t0type ___nl__im__0) {
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
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 381
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 382
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 382
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_register_value(___nl__im__4));
#line 382
c_rt_lib0clear(&___nl__im__4);
#line 382
c_rt_lib0move(&___nl__im__5,___get_global_string_const(778));
#line 382
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 382
c_rt_lib0clear(&___nl__im__3);
#line 382
c_rt_lib0clear(&___nl__im__5);
#line 383
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(606)));
#line 383
___nl__bool__6 = c_rt_lib0check_true_native(___nl__im__7);
#line 383
c_rt_lib0clear(&___nl__im__7);
#line 383
___nl__bool__6 = !___nl__bool__6;
#line 383
if(___nl__bool__6){ goto label_37;}
#line 384
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 384
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value(___nl__im__14));
#line 384
c_rt_lib0clear(&___nl__im__14);
#line 384
c_rt_lib0move(&___nl__im__15,___get_global_string_const(316));
#line 384
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 384
c_rt_lib0clear(&___nl__im__13);
#line 384
c_rt_lib0clear(&___nl__im__15);
#line 384
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__2));
#line 384
c_rt_lib0clear(&___nl__im__12);
#line 384
c_rt_lib0move(&___nl__im__16,___get_global_string_const(518));
#line 384
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 384
c_rt_lib0clear(&___nl__im__11);
#line 384
c_rt_lib0clear(&___nl__im__16);
#line 385
c_rt_lib0move(&___nl__im__17,___get_global_string_const(779));
#line 385
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 385
c_rt_lib0clear(&___nl__im__10);
#line 385
c_rt_lib0clear(&___nl__im__17);
#line 385
c_rt_lib0move(&___nl__im__18, string0lf());
#line 385
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 385
c_rt_lib0clear(&___nl__im__9);
#line 385
c_rt_lib0clear(&___nl__im__18);
#line 385
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__8));
#line 385
c_rt_lib0clear(&___nl__im__8);
#line 386
goto label_37;
#line 386
label_37:
;
#line 386
//clear ___nl__bool__6;
#line 387
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 387
c_rt_lib0move(&___nl__im__23, generator_js_priv0print_register_to_assign(___nl__im__24));
#line 387
c_rt_lib0clear(&___nl__im__24);
#line 388
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 388
c_rt_lib0move(&___nl__im__25, generator_js_priv0print_register_value(___nl__im__26));
#line 388
c_rt_lib0clear(&___nl__im__26);
#line 388
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 388
c_rt_lib0clear(&___nl__im__23);
#line 388
c_rt_lib0clear(&___nl__im__25);
#line 388
c_rt_lib0move(&___nl__im__27,___get_global_string_const(316));
#line 388
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__27));
#line 388
c_rt_lib0clear(&___nl__im__22);
#line 388
c_rt_lib0clear(&___nl__im__27);
#line 388
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__2));
#line 388
c_rt_lib0clear(&___nl__im__21);
#line 388
c_rt_lib0move(&___nl__im__28,___get_global_string_const(777));
#line 388
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__28));
#line 388
c_rt_lib0clear(&___nl__im__20);
#line 388
c_rt_lib0clear(&___nl__im__28);
#line 388
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 388
c_rt_lib0clear(&___nl__im__19);
#line 389
c_rt_lib0clear(&___nl__im__0);
#line 389
c_rt_lib0clear(&___nl__im__2);
#line 389
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0print_hash_init_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
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
#line 393
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 393
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 393
c_rt_lib0clear(&___nl__im__4);
#line 393
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 393
c_rt_lib0clear(&___nl__im__3);
#line 393
___nl__bool__2 = !___nl__bool__2;
#line 393
if(___nl__bool__2){ goto label_32;}
#line 394
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 394
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_value_to_assign(___nl__im__8));
#line 394
c_rt_lib0clear(&___nl__im__8);
#line 395
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 395
c_rt_lib0move(&___nl__im__11,___get_global_string_const(272));
#line 395
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 395
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 395
c_rt_lib0clear(&___nl__im__14);
#line 395
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 395
c_rt_lib0clear(&___nl__im__13);
#line 395
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 395
c_rt_lib0clear(&___nl__im__10);
#line 395
c_rt_lib0clear(&___nl__im__11);
#line 395
c_rt_lib0clear(&___nl__im__12);
#line 395
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 395
c_rt_lib0clear(&___nl__im__7);
#line 395
c_rt_lib0clear(&___nl__im__9);
#line 395
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 395
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 395
c_rt_lib0clear(&___nl__im__6);
#line 395
c_rt_lib0clear(&___nl__im__15);
#line 395
c_rt_lib0clear(&___nl__im__0);
#line 395
//clear ___nl__bool__2;
#line 395
return ___nl__im__5;
#line 396
goto label_56;
#line 396
label_32:
;
#line 396
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 396
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 396
c_rt_lib0clear(&___nl__im__17);
#line 396
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 396
c_rt_lib0clear(&___nl__im__16);
#line 396
___nl__bool__2 = !___nl__bool__2;
#line 396
if(___nl__bool__2){ goto label_52;}
#line 397
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 397
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value_to_assign(___nl__im__20));
#line 397
c_rt_lib0clear(&___nl__im__20);
#line 397
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 397
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 397
c_rt_lib0clear(&___nl__im__19);
#line 397
c_rt_lib0clear(&___nl__im__21);
#line 397
c_rt_lib0clear(&___nl__im__0);
#line 397
//clear ___nl__bool__2;
#line 397
c_rt_lib0clear(&___nl__im__5);
#line 397
return ___nl__im__18;
#line 398
goto label_56;
#line 398
label_52:
;
#line 399
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 399
nl_die_arg(___nl__im__22);
#line 400
goto label_56;
#line 400
label_56:
;
#line 400
//clear ___nl__bool__2;
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0clear(&___nl__im__18);
#line 400
c_rt_lib0clear(&___nl__im__22);
return NULL;

}

ImmT  generator_js_priv0print_hash_next_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
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
#line 404
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 404
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 404
c_rt_lib0clear(&___nl__im__4);
#line 404
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 404
c_rt_lib0clear(&___nl__im__3);
#line 404
___nl__bool__2 = !___nl__bool__2;
#line 404
if(___nl__bool__2){ goto label_32;}
#line 405
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 405
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__8));
#line 405
c_rt_lib0clear(&___nl__im__8);
#line 406
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 406
c_rt_lib0move(&___nl__im__11,___get_global_string_const(275));
#line 406
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 406
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 406
c_rt_lib0clear(&___nl__im__14);
#line 406
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 406
c_rt_lib0clear(&___nl__im__13);
#line 406
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 406
c_rt_lib0clear(&___nl__im__10);
#line 406
c_rt_lib0clear(&___nl__im__11);
#line 406
c_rt_lib0clear(&___nl__im__12);
#line 406
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 406
c_rt_lib0clear(&___nl__im__7);
#line 406
c_rt_lib0clear(&___nl__im__9);
#line 406
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 406
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 406
c_rt_lib0clear(&___nl__im__6);
#line 406
c_rt_lib0clear(&___nl__im__15);
#line 406
c_rt_lib0clear(&___nl__im__0);
#line 406
//clear ___nl__bool__2;
#line 406
return ___nl__im__5;
#line 407
goto label_56;
#line 407
label_32:
;
#line 407
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 407
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 407
c_rt_lib0clear(&___nl__im__17);
#line 407
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 407
c_rt_lib0clear(&___nl__im__16);
#line 407
___nl__bool__2 = !___nl__bool__2;
#line 407
if(___nl__bool__2){ goto label_52;}
#line 408
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 408
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value(___nl__im__20));
#line 408
c_rt_lib0clear(&___nl__im__20);
#line 408
c_rt_lib0move(&___nl__im__21,___get_global_string_const(780));
#line 408
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 408
c_rt_lib0clear(&___nl__im__19);
#line 408
c_rt_lib0clear(&___nl__im__21);
#line 408
c_rt_lib0clear(&___nl__im__0);
#line 408
//clear ___nl__bool__2;
#line 408
c_rt_lib0clear(&___nl__im__5);
#line 408
return ___nl__im__18;
#line 409
goto label_56;
#line 409
label_52:
;
#line 410
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 410
nl_die_arg(___nl__im__22);
#line 411
goto label_56;
#line 411
label_56:
;
#line 411
//clear ___nl__bool__2;
#line 411
c_rt_lib0clear(&___nl__im__5);
#line 411
c_rt_lib0clear(&___nl__im__18);
#line 411
c_rt_lib0clear(&___nl__im__22);
return NULL;

}

ImmT  generator_js_priv0print_hash_get_key_iter(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
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
#line 415
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 415
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 415
c_rt_lib0clear(&___nl__im__4);
#line 415
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 415
c_rt_lib0clear(&___nl__im__3);
#line 415
___nl__bool__2 = !___nl__bool__2;
#line 415
if(___nl__bool__2){ goto label_32;}
#line 416
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 416
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__8));
#line 416
c_rt_lib0clear(&___nl__im__8);
#line 417
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 417
c_rt_lib0move(&___nl__im__11,___get_global_string_const(274));
#line 417
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 417
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 417
c_rt_lib0clear(&___nl__im__14);
#line 417
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 417
c_rt_lib0clear(&___nl__im__13);
#line 417
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 417
c_rt_lib0clear(&___nl__im__10);
#line 417
c_rt_lib0clear(&___nl__im__11);
#line 417
c_rt_lib0clear(&___nl__im__12);
#line 417
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 417
c_rt_lib0clear(&___nl__im__7);
#line 417
c_rt_lib0clear(&___nl__im__9);
#line 417
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 417
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 417
c_rt_lib0clear(&___nl__im__6);
#line 417
c_rt_lib0clear(&___nl__im__15);
#line 417
c_rt_lib0clear(&___nl__im__0);
#line 417
//clear ___nl__bool__2;
#line 417
return ___nl__im__5;
#line 418
goto label_82;
#line 418
label_32:
;
#line 418
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 418
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 418
c_rt_lib0clear(&___nl__im__17);
#line 418
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 418
c_rt_lib0clear(&___nl__im__16);
#line 418
___nl__bool__2 = !___nl__bool__2;
#line 418
if(___nl__bool__2){ goto label_78;}
#line 419
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 419
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_register_value(___nl__im__19));
#line 419
c_rt_lib0clear(&___nl__im__19);
#line 420
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 420
c_rt_lib0move(&___nl__im__26, generator_js_priv0print_register_value_to_assign(___nl__im__27));
#line 420
c_rt_lib0clear(&___nl__im__27);
#line 421
c_rt_lib0move(&___nl__im__29,___get_global_string_const(282));
#line 421
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 421
c_rt_lib0clear(&___nl__im__29);
#line 421
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 421
c_rt_lib0clear(&___nl__im__26);
#line 421
c_rt_lib0clear(&___nl__im__28);
#line 421
c_rt_lib0move(&___nl__im__30,___get_global_string_const(781));
#line 421
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 421
c_rt_lib0clear(&___nl__im__25);
#line 421
c_rt_lib0clear(&___nl__im__30);
#line 421
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 421
c_rt_lib0clear(&___nl__im__24);
#line 421
c_rt_lib0move(&___nl__im__31,___get_global_string_const(782));
#line 421
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 421
c_rt_lib0clear(&___nl__im__23);
#line 421
c_rt_lib0clear(&___nl__im__31);
#line 421
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 421
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_register_value(___nl__im__33));
#line 421
c_rt_lib0clear(&___nl__im__33);
#line 421
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 421
c_rt_lib0clear(&___nl__im__22);
#line 421
c_rt_lib0clear(&___nl__im__32);
#line 421
c_rt_lib0move(&___nl__im__34,___get_global_string_const(783));
#line 421
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 421
c_rt_lib0clear(&___nl__im__21);
#line 421
c_rt_lib0clear(&___nl__im__34);
#line 421
c_rt_lib0clear(&___nl__im__0);
#line 421
//clear ___nl__bool__2;
#line 421
c_rt_lib0clear(&___nl__im__5);
#line 421
c_rt_lib0clear(&___nl__im__18);
#line 421
return ___nl__im__20;
#line 422
goto label_82;
#line 422
label_78:
;
#line 423
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 423
nl_die_arg(___nl__im__35);
#line 424
goto label_82;
#line 424
label_82:
;
#line 424
//clear ___nl__bool__2;
#line 424
c_rt_lib0clear(&___nl__im__5);
#line 424
c_rt_lib0clear(&___nl__im__18);
#line 424
c_rt_lib0clear(&___nl__im__20);
#line 424
c_rt_lib0clear(&___nl__im__35);
return NULL;

}

ImmT  generator_js_priv0print_hash_is_end(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
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
#line 428
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 428
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 428
c_rt_lib0clear(&___nl__im__4);
#line 428
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 428
c_rt_lib0clear(&___nl__im__3);
#line 428
___nl__bool__2 = !___nl__bool__2;
#line 428
if(___nl__bool__2){ goto label_32;}
#line 429
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 429
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__8));
#line 429
c_rt_lib0clear(&___nl__im__8);
#line 430
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 430
c_rt_lib0move(&___nl__im__11,___get_global_string_const(273));
#line 430
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 430
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 430
c_rt_lib0clear(&___nl__im__14);
#line 430
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 430
c_rt_lib0clear(&___nl__im__13);
#line 430
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 430
c_rt_lib0clear(&___nl__im__10);
#line 430
c_rt_lib0clear(&___nl__im__11);
#line 430
c_rt_lib0clear(&___nl__im__12);
#line 430
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 430
c_rt_lib0clear(&___nl__im__7);
#line 430
c_rt_lib0clear(&___nl__im__9);
#line 430
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 430
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 430
c_rt_lib0clear(&___nl__im__6);
#line 430
c_rt_lib0clear(&___nl__im__15);
#line 430
c_rt_lib0clear(&___nl__im__0);
#line 430
//clear ___nl__bool__2;
#line 430
return ___nl__im__5;
#line 431
goto label_72;
#line 431
label_32:
;
#line 431
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 431
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 431
c_rt_lib0clear(&___nl__im__17);
#line 431
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 431
c_rt_lib0clear(&___nl__im__16);
#line 431
___nl__bool__2 = !___nl__bool__2;
#line 431
if(___nl__bool__2){ goto label_68;}
#line 432
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 432
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value_to_assign(___nl__im__23));
#line 432
c_rt_lib0clear(&___nl__im__23);
#line 433
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 433
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__25));
#line 433
c_rt_lib0clear(&___nl__im__25);
#line 433
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 433
c_rt_lib0clear(&___nl__im__22);
#line 433
c_rt_lib0clear(&___nl__im__24);
#line 433
c_rt_lib0move(&___nl__im__26,___get_global_string_const(784));
#line 433
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 433
c_rt_lib0clear(&___nl__im__21);
#line 433
c_rt_lib0clear(&___nl__im__26);
#line 433
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 433
c_rt_lib0move(&___nl__im__27, generator_js_priv0print_register_value(___nl__im__28));
#line 433
c_rt_lib0clear(&___nl__im__28);
#line 433
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 433
c_rt_lib0clear(&___nl__im__20);
#line 433
c_rt_lib0clear(&___nl__im__27);
#line 433
c_rt_lib0move(&___nl__im__29,___get_global_string_const(785));
#line 433
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 433
c_rt_lib0clear(&___nl__im__19);
#line 433
c_rt_lib0clear(&___nl__im__29);
#line 433
c_rt_lib0clear(&___nl__im__0);
#line 433
//clear ___nl__bool__2;
#line 433
c_rt_lib0clear(&___nl__im__5);
#line 433
return ___nl__im__18;
#line 434
goto label_72;
#line 434
label_68:
;
#line 435
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 435
nl_die_arg(___nl__im__30);
#line 436
goto label_72;
#line 436
label_72:
;
#line 436
//clear ___nl__bool__2;
#line 436
c_rt_lib0clear(&___nl__im__5);
#line 436
c_rt_lib0clear(&___nl__im__18);
#line 436
c_rt_lib0clear(&___nl__im__30);
return NULL;

}

ImmT  generator_js_priv0print_arr(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
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
#line 440
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 441
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 441
___nl__bool__3 = !___nl__bool__3;
#line 441
if(___nl__bool__3){ goto label_36;}
#line 442
c_rt_lib0move(&___nl__im__6,___get_global_string_const(127));
#line 442
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 442
c_rt_lib0clear(&___nl__im__6);
#line 442
c_rt_lib0move(&___nl__im__7,___get_global_string_const(786));
#line 442
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 442
c_rt_lib0clear(&___nl__im__5);
#line 442
c_rt_lib0clear(&___nl__im__7);
#line 442
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 442
c_rt_lib0clear(&___nl__im__4);
#line 443
___nl__int__9 = 0;
#line 443
___nl__int__10 = 1;
#line 443
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 443
label_16:
;
#line 443
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 443
if(___nl__bool__12){ goto label_31;}
#line 443
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 443
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 443
c_rt_lib0move(&___nl__im__15, generator_js_priv0print_register_value(___nl__im__8));
#line 443
c_rt_lib0move(&___nl__im__16,___get_global_string_const(314));
#line 443
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 443
c_rt_lib0clear(&___nl__im__15);
#line 443
c_rt_lib0clear(&___nl__im__16);
#line 443
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 443
c_rt_lib0clear(&___nl__im__14);
#line 443
c_rt_lib0clear(&___nl__im__8);
#line 443
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 443
goto label_16;
#line 443
label_31:
;
#line 444
c_rt_lib0move(&___nl__im__17,___get_global_string_const(500));
#line 444
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 444
c_rt_lib0clear(&___nl__im__17);
#line 445
goto label_70;
#line 445
label_36:
;
#line 445
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(127));
#line 445
___nl__bool__3 = !___nl__bool__3;
#line 445
if(___nl__bool__3){ goto label_66;}
#line 446
c_rt_lib0move(&___nl__im__18,___get_global_string_const(316));
#line 446
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 446
c_rt_lib0clear(&___nl__im__18);
#line 447
___nl__int__20 = 0;
#line 447
___nl__int__21 = 1;
#line 447
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 447
label_46:
;
#line 447
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 447
if(___nl__bool__23){ goto label_61;}
#line 447
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 447
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 447
c_rt_lib0move(&___nl__im__26, generator_js_priv0print_register_reference(___nl__im__19));
#line 447
c_rt_lib0move(&___nl__im__27,___get_global_string_const(314));
#line 447
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 447
c_rt_lib0clear(&___nl__im__26);
#line 447
c_rt_lib0clear(&___nl__im__27);
#line 447
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 447
c_rt_lib0clear(&___nl__im__25);
#line 447
c_rt_lib0clear(&___nl__im__19);
#line 447
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 447
goto label_46;
#line 447
label_61:
;
#line 448
c_rt_lib0move(&___nl__im__28,___get_global_string_const(317));
#line 448
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 448
c_rt_lib0clear(&___nl__im__28);
#line 449
goto label_70;
#line 449
label_66:
;
#line 450
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 450
nl_die_arg(___nl__im__29);
#line 451
goto label_70;
#line 451
label_70:
;
#line 451
//clear ___nl__bool__3;
#line 451
c_rt_lib0clear(&___nl__im__8);
#line 451
//clear ___nl__int__9;
#line 451
//clear ___nl__int__10;
#line 451
//clear ___nl__int__11;
#line 451
//clear ___nl__bool__12;
#line 451
c_rt_lib0clear(&___nl__im__13);
#line 451
c_rt_lib0clear(&___nl__im__19);
#line 451
//clear ___nl__int__20;
#line 451
//clear ___nl__int__21;
#line 451
//clear ___nl__int__22;
#line 451
//clear ___nl__bool__23;
#line 451
c_rt_lib0clear(&___nl__im__24);
#line 451
c_rt_lib0clear(&___nl__im__29);
#line 452
c_rt_lib0clear(&___nl__im__0);
#line 452
c_rt_lib0clear(&___nl__im__1);
#line 452
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
#line 456
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 456
c_rt_lib0move(&___nl__im__4,___get_global_string_const(787));
#line 456
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 456
c_rt_lib0clear(&___nl__im__3);
#line 456
c_rt_lib0clear(&___nl__im__4);
#line 456
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 456
c_rt_lib0clear(&___nl__im__2);
#line 456
c_rt_lib0clear(&___nl__im__0);
#line 456
return ___nl__im__1;
#line 456
c_rt_lib0clear(&___nl__im__0);
#line 456
c_rt_lib0clear(&___nl__im__1);
#line 456
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_bin_op(nlasm0bin_op0type ___nl__im__0,INT * ___ref___int__1) {
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
#line 460
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 460
c_rt_lib0move(&___nl__im__2, generator_js_priv0print_register_value_to_assign(___nl__im__3));
#line 460
c_rt_lib0clear(&___nl__im__3);
#line 461
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 461
c_rt_lib0move(&___nl__im__6,___get_global_string_const(389));
#line 461
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 461
c_rt_lib0clear(&___nl__im__5);
#line 461
c_rt_lib0clear(&___nl__im__6);
#line 461
if(___nl__bool__4){ goto label_14;}
#line 461
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 461
c_rt_lib0move(&___nl__im__8,___get_global_string_const(379));
#line 461
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 461
c_rt_lib0clear(&___nl__im__7);
#line 461
c_rt_lib0clear(&___nl__im__8);
#line 461
label_14:
;
#line 461
if(___nl__bool__4){ goto label_21;}
#line 461
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 461
c_rt_lib0move(&___nl__im__10,___get_global_string_const(381));
#line 461
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 461
c_rt_lib0clear(&___nl__im__9);
#line 461
c_rt_lib0clear(&___nl__im__10);
#line 461
label_21:
;
#line 461
if(___nl__bool__4){ goto label_28;}
#line 461
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 461
c_rt_lib0move(&___nl__im__12,___get_global_string_const(387));
#line 461
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 461
c_rt_lib0clear(&___nl__im__11);
#line 461
c_rt_lib0clear(&___nl__im__12);
#line 461
label_28:
;
#line 461
if(___nl__bool__4){ goto label_35;}
#line 461
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 461
c_rt_lib0move(&___nl__im__14,___get_global_string_const(383));
#line 461
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 461
c_rt_lib0clear(&___nl__im__13);
#line 461
c_rt_lib0clear(&___nl__im__14);
#line 461
label_35:
;
#line 461
if(___nl__bool__4){ goto label_42;}
#line 462
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 462
c_rt_lib0move(&___nl__im__16,___get_global_string_const(385));
#line 462
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 462
c_rt_lib0clear(&___nl__im__15);
#line 462
c_rt_lib0clear(&___nl__im__16);
#line 462
label_42:
;
#line 462
___nl__bool__4 = !___nl__bool__4;
#line 462
if(___nl__bool__4){ goto label_69;}
#line 463
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 463
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_register_value(___nl__im__18));
#line 463
c_rt_lib0clear(&___nl__im__18);
#line 464
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 464
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value(___nl__im__20));
#line 464
c_rt_lib0clear(&___nl__im__20);
#line 465
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 465
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 465
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 465
c_rt_lib0clear(&___nl__im__24);
#line 465
c_rt_lib0clear(&___nl__im__25);
#line 465
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 465
c_rt_lib0clear(&___nl__im__23);
#line 465
c_rt_lib0move(&___nl__im__26,___get_global_string_const(442));
#line 465
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 465
c_rt_lib0clear(&___nl__im__22);
#line 465
c_rt_lib0clear(&___nl__im__26);
#line 465
c_rt_lib0clear(&___nl__im__0);
#line 465
c_rt_lib0clear(&___nl__im__2);
#line 465
//clear ___nl__bool__4;
#line 465
c_rt_lib0clear(&___nl__im__17);
#line 465
c_rt_lib0clear(&___nl__im__19);
#line 465
return ___nl__im__21;
#line 466
goto label_181;
#line 466
label_69:
;
#line 466
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 466
c_rt_lib0move(&___nl__im__28,___get_global_string_const(371));
#line 466
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 466
c_rt_lib0clear(&___nl__im__27);
#line 466
c_rt_lib0clear(&___nl__im__28);
#line 466
if(___nl__bool__4){ goto label_81;}
#line 466
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 466
c_rt_lib0move(&___nl__im__30,___get_global_string_const(372));
#line 466
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 466
c_rt_lib0clear(&___nl__im__29);
#line 466
c_rt_lib0clear(&___nl__im__30);
#line 466
label_81:
;
#line 466
___nl__bool__4 = !___nl__bool__4;
#line 466
if(___nl__bool__4){ goto label_105;}
#line 467
c_rt_lib0move(&___nl__im__33,___get_global_string_const(271));
#line 467
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 467
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 467
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 467
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 467
c_rt_lib0clear(&___nl__im__36);
#line 467
c_rt_lib0clear(&___nl__im__37);
#line 467
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 467
c_rt_lib0clear(&___nl__im__33);
#line 467
c_rt_lib0clear(&___nl__im__34);
#line 467
c_rt_lib0clear(&___nl__im__35);
#line 467
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 467
c_rt_lib0clear(&___nl__im__32);
#line 467
c_rt_lib0clear(&___nl__im__0);
#line 467
c_rt_lib0clear(&___nl__im__2);
#line 467
//clear ___nl__bool__4;
#line 467
c_rt_lib0clear(&___nl__im__17);
#line 467
c_rt_lib0clear(&___nl__im__19);
#line 467
c_rt_lib0clear(&___nl__im__21);
#line 467
return ___nl__im__31;
#line 468
goto label_181;
#line 468
label_105:
;
#line 468
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 468
c_rt_lib0move(&___nl__im__39,___get_global_string_const(110));
#line 468
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 468
c_rt_lib0clear(&___nl__im__38);
#line 468
c_rt_lib0clear(&___nl__im__39);
#line 468
___nl__bool__4 = !___nl__bool__4;
#line 468
if(___nl__bool__4){ goto label_147;}
#line 469
c_rt_lib0move(&___nl__im__43,___get_global_string_const(271));
#line 469
c_rt_lib0move(&___nl__im__44,___get_global_string_const(788));
#line 470
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 470
c_rt_lib0move(&___nl__im__47, generator_js_priv0print_register_value(___nl__im__48));
#line 470
c_rt_lib0clear(&___nl__im__48);
#line 470
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__47));
#line 470
c_rt_lib0clear(&___nl__im__47);
#line 470
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 470
c_rt_lib0move(&___nl__im__50, generator_js_priv0print_register_value(___nl__im__51));
#line 470
c_rt_lib0clear(&___nl__im__51);
#line 470
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__50));
#line 470
c_rt_lib0clear(&___nl__im__50);
#line 470
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 470
c_rt_lib0clear(&___nl__im__46);
#line 470
c_rt_lib0clear(&___nl__im__49);
#line 470
c_rt_lib0move(&___nl__im__42, generator_js_priv0print_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 470
c_rt_lib0clear(&___nl__im__43);
#line 470
c_rt_lib0clear(&___nl__im__44);
#line 470
c_rt_lib0clear(&___nl__im__45);
#line 470
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 470
c_rt_lib0clear(&___nl__im__42);
#line 470
c_rt_lib0move(&___nl__im__52,___get_global_string_const(442));
#line 470
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 470
c_rt_lib0clear(&___nl__im__41);
#line 470
c_rt_lib0clear(&___nl__im__52);
#line 470
c_rt_lib0clear(&___nl__im__0);
#line 470
c_rt_lib0clear(&___nl__im__2);
#line 470
//clear ___nl__bool__4;
#line 470
c_rt_lib0clear(&___nl__im__17);
#line 470
c_rt_lib0clear(&___nl__im__19);
#line 470
c_rt_lib0clear(&___nl__im__21);
#line 470
c_rt_lib0clear(&___nl__im__31);
#line 470
return ___nl__im__40;
#line 471
goto label_181;
#line 471
label_147:
;
#line 472
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 472
c_rt_lib0move(&___nl__im__53, generator_js_priv0print_register_value(___nl__im__54));
#line 472
c_rt_lib0clear(&___nl__im__54);
#line 473
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 473
c_rt_lib0move(&___nl__im__55, generator_js_priv0print_register_value(___nl__im__56));
#line 473
c_rt_lib0clear(&___nl__im__56);
#line 474
c_rt_lib0move(&___nl__im__62,___get_global_string_const(789));
#line 474
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 474
c_rt_lib0clear(&___nl__im__62);
#line 474
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 474
c_rt_lib0clear(&___nl__im__61);
#line 474
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 474
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 474
c_rt_lib0clear(&___nl__im__60);
#line 474
c_rt_lib0clear(&___nl__im__63);
#line 474
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 474
c_rt_lib0clear(&___nl__im__59);
#line 474
c_rt_lib0move(&___nl__im__64,___get_global_string_const(508));
#line 474
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 474
c_rt_lib0clear(&___nl__im__58);
#line 474
c_rt_lib0clear(&___nl__im__64);
#line 474
c_rt_lib0clear(&___nl__im__0);
#line 474
c_rt_lib0clear(&___nl__im__2);
#line 474
//clear ___nl__bool__4;
#line 474
c_rt_lib0clear(&___nl__im__17);
#line 474
c_rt_lib0clear(&___nl__im__19);
#line 474
c_rt_lib0clear(&___nl__im__21);
#line 474
c_rt_lib0clear(&___nl__im__31);
#line 474
c_rt_lib0clear(&___nl__im__40);
#line 474
c_rt_lib0clear(&___nl__im__53);
#line 474
c_rt_lib0clear(&___nl__im__55);
#line 474
return ___nl__im__57;
#line 475
goto label_181;
#line 475
label_181:
;
#line 475
//clear ___nl__bool__4;
#line 475
c_rt_lib0clear(&___nl__im__17);
#line 475
c_rt_lib0clear(&___nl__im__19);
#line 475
c_rt_lib0clear(&___nl__im__21);
#line 475
c_rt_lib0clear(&___nl__im__31);
#line 475
c_rt_lib0clear(&___nl__im__40);
#line 475
c_rt_lib0clear(&___nl__im__53);
#line 475
c_rt_lib0clear(&___nl__im__55);
#line 475
c_rt_lib0clear(&___nl__im__57);
return NULL;

}

ImmT  generator_js_priv0print_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,nlasm0reg_t0type ___nl__im__3,INT * ___ref___int__4) {
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
#line 481
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_value_to_assign(___nl__im__3));
#line 481
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 481
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 481
c_rt_lib0clear(&___nl__im__7);
#line 481
c_rt_lib0clear(&___nl__im__8);
#line 481
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 481
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 481
c_rt_lib0clear(&___nl__im__6);
#line 481
c_rt_lib0clear(&___nl__im__9);
#line 482
___nl__int__10 = 0;
#line 483
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 484
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 485
___nl__int__14 = 0;
#line 485
___nl__int__15 = 1;
#line 485
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 485
label_15:
;
#line 485
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 485
if(___nl__bool__17){ goto label_58;}
#line 485
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 485
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 486
___nl__int__20 = 0;
#line 486
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 486
//clear ___nl__int__20;
#line 486
___nl__bool__19 = !___nl__bool__19;
#line 486
___nl__bool__19 = !___nl__bool__19;
#line 486
if(___nl__bool__19){ goto label_30;}
#line 486
c_rt_lib0move(&___nl__im__21,___get_global_string_const(314));
#line 486
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 486
c_rt_lib0clear(&___nl__im__21);
#line 486
goto label_30;
#line 486
label_30:
;
#line 486
//clear ___nl__bool__19;
#line 487
___nl__int__22 = 1;
#line 487
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 487
//clear ___nl__int__22;
#line 488
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 488
if(___nl__bool__23){ goto label_42;}
#line 490
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(225));
#line 490
if(___nl__bool__23){ goto label_47;}
#line 490
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 490
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 490
nl_die_arg(___nl__im__24);
#line 488
label_42:
;
#line 488
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 488
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 489
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 490
goto label_54;
#line 490
label_47:
;
#line 490
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(225)));
#line 490
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 491
c_rt_lib0move(&___nl__im__29, generator_js_priv0print_register_value(___nl__im__27));
#line 491
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 491
c_rt_lib0clear(&___nl__im__29);
#line 492
goto label_54;
#line 492
label_54:
;
#line 492
c_rt_lib0clear(&___nl__im__13);
#line 493
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 493
goto label_15;
#line 493
label_58:
;
#line 494
___nl__int__30 = 1;
#line 494
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 494
//clear ___nl__int__30;
#line 495
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 495
c_rt_lib0move(&___nl__im__34,___get_global_string_const(508));
#line 495
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 495
c_rt_lib0clear(&___nl__im__33);
#line 495
c_rt_lib0clear(&___nl__im__34);
#line 495
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 495
c_rt_lib0clear(&___nl__im__32);
#line 495
c_rt_lib0clear(&___nl__im__0);
#line 495
c_rt_lib0clear(&___nl__im__1);
#line 495
c_rt_lib0clear(&___nl__im__2);
#line 495
c_rt_lib0clear(&___nl__im__3);
#line 495
c_rt_lib0clear(&___nl__im__5);
#line 495
//clear ___nl__int__10;
#line 495
c_rt_lib0clear(&___nl__im__11);
#line 495
c_rt_lib0clear(&___nl__im__12);
#line 495
c_rt_lib0clear(&___nl__im__13);
#line 495
//clear ___nl__int__14;
#line 495
//clear ___nl__int__15;
#line 495
//clear ___nl__int__16;
#line 495
//clear ___nl__bool__17;
#line 495
c_rt_lib0clear(&___nl__im__18);
#line 495
//clear ___nl__bool__23;
#line 495
c_rt_lib0clear(&___nl__im__24);
#line 495
c_rt_lib0clear(&___nl__im__25);
#line 495
c_rt_lib0clear(&___nl__im__26);
#line 495
c_rt_lib0clear(&___nl__im__27);
#line 495
c_rt_lib0clear(&___nl__im__28);
#line 495
return ___nl__im__31;
return NULL;

}

ImmT  generator_js_priv0print_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,ImmT * ___ref___im__1,INT * ___ref___int__2) {
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
#line 499
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 499
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_register_value_to_assign(___nl__im__4));
#line 499
c_rt_lib0clear(&___nl__im__4);
#line 500
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 500
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(206)));
#line 500
c_rt_lib0clear(&___nl__im__7);
#line 500
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 500
c_rt_lib0clear(&___nl__im__6);
#line 500
___nl__bool__5 = !___nl__bool__5;
#line 500
if(___nl__bool__5){ goto label_73;}
#line 501
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 501
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(279));
#line 501
if(___nl__bool__9){ goto label_18;}
#line 504
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(352));
#line 504
if(___nl__bool__9){ goto label_52;}
#line 504
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 504
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 504
nl_die_arg(___nl__im__10);
#line 501
label_18:
;
#line 501
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(279)));
#line 501
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 502
c_rt_lib0move(&___nl__im__16,___get_global_string_const(271));
#line 502
c_rt_lib0move(&___nl__im__17,___get_global_string_const(580));
#line 503
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 503
c_rt_lib0move(&___nl__im__20, generator_js_priv0print_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 503
c_rt_lib0clear(&___nl__im__21);
#line 503
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__20));
#line 503
c_rt_lib0clear(&___nl__im__20);
#line 503
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__11));
#line 503
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 503
c_rt_lib0clear(&___nl__im__19);
#line 503
c_rt_lib0clear(&___nl__im__22);
#line 503
c_rt_lib0move(&___nl__im__15, generator_js_priv0print_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 503
c_rt_lib0clear(&___nl__im__16);
#line 503
c_rt_lib0clear(&___nl__im__17);
#line 503
c_rt_lib0clear(&___nl__im__18);
#line 503
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 503
c_rt_lib0clear(&___nl__im__15);
#line 503
c_rt_lib0move(&___nl__im__23,___get_global_string_const(442));
#line 503
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 503
c_rt_lib0clear(&___nl__im__14);
#line 503
c_rt_lib0clear(&___nl__im__23);
#line 503
c_rt_lib0clear(&___nl__im__0);
#line 503
c_rt_lib0clear(&___nl__im__3);
#line 503
//clear ___nl__bool__5;
#line 503
c_rt_lib0clear(&___nl__im__8);
#line 503
//clear ___nl__bool__9;
#line 503
c_rt_lib0clear(&___nl__im__10);
#line 503
c_rt_lib0clear(&___nl__im__11);
#line 503
c_rt_lib0clear(&___nl__im__12);
#line 503
return ___nl__im__13;
#line 504
goto label_71;
#line 504
label_52:
;
#line 505
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 505
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 505
c_rt_lib0clear(&___nl__im__27);
#line 505
c_rt_lib0move(&___nl__im__25, generator_js_priv0print_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 505
c_rt_lib0clear(&___nl__im__26);
#line 505
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 505
c_rt_lib0clear(&___nl__im__25);
#line 505
c_rt_lib0clear(&___nl__im__0);
#line 505
c_rt_lib0clear(&___nl__im__3);
#line 505
//clear ___nl__bool__5;
#line 505
c_rt_lib0clear(&___nl__im__8);
#line 505
//clear ___nl__bool__9;
#line 505
c_rt_lib0clear(&___nl__im__10);
#line 505
c_rt_lib0clear(&___nl__im__11);
#line 505
c_rt_lib0clear(&___nl__im__12);
#line 505
c_rt_lib0clear(&___nl__im__13);
#line 505
return ___nl__im__24;
#line 506
goto label_71;
#line 506
label_71:
;
#line 507
goto label_137;
#line 507
label_73:
;
#line 507
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 507
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(206)));
#line 507
c_rt_lib0clear(&___nl__im__29);
#line 507
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(563));
#line 507
c_rt_lib0clear(&___nl__im__28);
#line 507
___nl__bool__5 = !___nl__bool__5;
#line 507
if(___nl__bool__5){ goto label_133;}
#line 508
c_rt_lib0move(&___nl__im__31,___get_global_string_const(790));
#line 508
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(567)));
#line 508
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 508
c_rt_lib0clear(&___nl__im__33);
#line 508
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 508
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 508
c_rt_lib0clear(&___nl__im__31);
#line 508
//clear ___nl__int__32;
#line 508
c_rt_lib0clear(&___nl__string__34);
#line 508
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 508
c_rt_lib0clear(&___nl__im__30);
#line 509
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 509
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(279));
#line 509
if(___nl__bool__36){ goto label_100;}
#line 511
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(352));
#line 511
if(___nl__bool__36){ goto label_111;}
#line 511
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 511
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 511
nl_die_arg(___nl__im__37);
#line 509
label_100:
;
#line 509
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(279)));
#line 509
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 510
c_rt_lib0move(&___nl__im__41,___get_global_string_const(791));
#line 510
c_rt_lib0move(&___nl__im__42, generator_js_priv0print_register_reference(___nl__im__38));
#line 510
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 510
c_rt_lib0clear(&___nl__im__41);
#line 510
c_rt_lib0clear(&___nl__im__42);
#line 510
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 510
c_rt_lib0clear(&___nl__im__40);
#line 511
goto label_113;
#line 511
label_111:
;
#line 512
goto label_113;
#line 512
label_113:
;
#line 513
c_rt_lib0move(&___nl__im__43,___get_global_string_const(307));
#line 513
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 513
c_rt_lib0clear(&___nl__im__43);
#line 514
c_rt_lib0clear(&___nl__im__0);
#line 514
//clear ___nl__bool__5;
#line 514
c_rt_lib0clear(&___nl__im__8);
#line 514
//clear ___nl__bool__9;
#line 514
c_rt_lib0clear(&___nl__im__10);
#line 514
c_rt_lib0clear(&___nl__im__11);
#line 514
c_rt_lib0clear(&___nl__im__12);
#line 514
c_rt_lib0clear(&___nl__im__13);
#line 514
c_rt_lib0clear(&___nl__im__24);
#line 514
c_rt_lib0clear(&___nl__im__35);
#line 514
//clear ___nl__bool__36;
#line 514
c_rt_lib0clear(&___nl__im__37);
#line 514
c_rt_lib0clear(&___nl__im__38);
#line 514
c_rt_lib0clear(&___nl__im__39);
#line 514
return ___nl__im__3;
#line 515
goto label_137;
#line 515
label_133:
;
#line 516
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 516
nl_die_arg(___nl__im__44);
#line 517
goto label_137;
#line 517
label_137:
;
#line 517
//clear ___nl__bool__5;
#line 517
c_rt_lib0clear(&___nl__im__8);
#line 517
//clear ___nl__bool__9;
#line 517
c_rt_lib0clear(&___nl__im__10);
#line 517
c_rt_lib0clear(&___nl__im__11);
#line 517
c_rt_lib0clear(&___nl__im__12);
#line 517
c_rt_lib0clear(&___nl__im__13);
#line 517
c_rt_lib0clear(&___nl__im__24);
#line 517
c_rt_lib0clear(&___nl__im__35);
#line 517
//clear ___nl__bool__36;
#line 517
c_rt_lib0clear(&___nl__im__37);
#line 517
c_rt_lib0clear(&___nl__im__38);
#line 517
c_rt_lib0clear(&___nl__im__39);
#line 517
c_rt_lib0clear(&___nl__im__44);
return NULL;

}

ImmT  generator_js_priv0print_ov_is(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,INT  ___nl__int__3,INT * ___ref___int__4,ImmT * ___ref___im__5) {
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
#line 522
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 522
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(131));
#line 522
c_rt_lib0clear(&___nl__im__7);
#line 522
___nl__bool__6 = !___nl__bool__6;
#line 522
if(___nl__bool__6){ goto label_33;}
#line 523
c_rt_lib0move(&___nl__im__10, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 523
c_rt_lib0move(&___nl__im__12,___get_global_string_const(271));
#line 523
c_rt_lib0move(&___nl__im__13,___get_global_string_const(237));
#line 524
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 524
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_str_imm(___nl__im__2, ___ref___im__5));
#line 524
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__17));
#line 524
c_rt_lib0clear(&___nl__im__17);
#line 524
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 524
c_rt_lib0clear(&___nl__im__15);
#line 524
c_rt_lib0clear(&___nl__im__16);
#line 524
c_rt_lib0move(&___nl__im__11, generator_js_priv0print_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 524
c_rt_lib0clear(&___nl__im__12);
#line 524
c_rt_lib0clear(&___nl__im__13);
#line 524
c_rt_lib0clear(&___nl__im__14);
#line 524
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 524
c_rt_lib0clear(&___nl__im__10);
#line 524
c_rt_lib0clear(&___nl__im__11);
#line 524
c_rt_lib0move(&___nl__im__18,___get_global_string_const(442));
#line 524
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 524
c_rt_lib0clear(&___nl__im__9);
#line 524
c_rt_lib0clear(&___nl__im__18);
#line 524
c_rt_lib0clear(&___nl__im__0);
#line 524
c_rt_lib0clear(&___nl__im__1);
#line 524
c_rt_lib0clear(&___nl__im__2);
#line 524
//clear ___nl__int__3;
#line 524
//clear ___nl__bool__6;
#line 524
return ___nl__im__8;
#line 525
goto label_64;
#line 525
label_33:
;
#line 525
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 525
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(563));
#line 525
c_rt_lib0clear(&___nl__im__19);
#line 525
___nl__bool__6 = !___nl__bool__6;
#line 525
if(___nl__bool__6){ goto label_60;}
#line 526
c_rt_lib0move(&___nl__im__23, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 526
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__1));
#line 526
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 526
c_rt_lib0clear(&___nl__im__23);
#line 526
c_rt_lib0clear(&___nl__im__24);
#line 526
c_rt_lib0move(&___nl__im__25,___get_global_string_const(792));
#line 526
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 526
c_rt_lib0clear(&___nl__im__22);
#line 526
c_rt_lib0clear(&___nl__im__25);
#line 526
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 526
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 526
c_rt_lib0clear(&___nl__im__21);
#line 526
c_rt_lib0clear(&___nl__string__26);
#line 526
c_rt_lib0clear(&___nl__im__0);
#line 526
c_rt_lib0clear(&___nl__im__1);
#line 526
c_rt_lib0clear(&___nl__im__2);
#line 526
//clear ___nl__int__3;
#line 526
//clear ___nl__bool__6;
#line 526
c_rt_lib0clear(&___nl__im__8);
#line 526
return ___nl__im__20;
#line 527
goto label_64;
#line 527
label_60:
;
#line 528
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 528
nl_die_arg(___nl__im__27);
#line 529
goto label_64;
#line 529
label_64:
;
#line 529
//clear ___nl__bool__6;
#line 529
c_rt_lib0clear(&___nl__im__8);
#line 529
c_rt_lib0clear(&___nl__im__20);
#line 529
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
#line 534
c_rt_lib0move(&___nl__im__9,___get_global_string_const(793));
#line 534
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 534
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 534
c_rt_lib0clear(&___nl__im__9);
#line 534
c_rt_lib0clear(&___nl__string__10);
#line 534
c_rt_lib0move(&___nl__im__11,___get_global_string_const(107));
#line 534
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 534
c_rt_lib0clear(&___nl__im__8);
#line 534
c_rt_lib0clear(&___nl__im__11);
#line 534
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 534
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 534
c_rt_lib0clear(&___nl__im__7);
#line 534
c_rt_lib0clear(&___nl__string__12);
#line 535
c_rt_lib0move(&___nl__im__19,___get_global_string_const(728));
#line 535
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 535
c_rt_lib0clear(&___nl__im__19);
#line 535
c_rt_lib0move(&___nl__im__20,___get_global_string_const(794));
#line 535
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 535
c_rt_lib0clear(&___nl__im__18);
#line 535
c_rt_lib0clear(&___nl__im__20);
#line 535
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 535
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 535
c_rt_lib0clear(&___nl__im__22);
#line 535
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 535
c_rt_lib0clear(&___nl__im__17);
#line 535
c_rt_lib0clear(&___nl__im__21);
#line 535
c_rt_lib0move(&___nl__im__23,___get_global_string_const(457));
#line 535
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 535
c_rt_lib0clear(&___nl__im__16);
#line 535
c_rt_lib0clear(&___nl__im__23);
#line 535
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__3));
#line 535
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 535
c_rt_lib0clear(&___nl__im__15);
#line 535
c_rt_lib0clear(&___nl__im__24);
#line 535
c_rt_lib0move(&___nl__im__25,___get_global_string_const(508));
#line 535
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 535
c_rt_lib0clear(&___nl__im__14);
#line 535
c_rt_lib0clear(&___nl__im__25);
#line 535
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 535
c_rt_lib0clear(&___nl__im__13);
#line 536
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 537
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_register_value_to_assign(___nl__im__3));
#line 537
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 537
c_rt_lib0clear(&___nl__im__28);
#line 537
c_rt_lib0move(&___nl__im__29,___get_global_string_const(758));
#line 537
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 537
c_rt_lib0clear(&___nl__im__27);
#line 537
c_rt_lib0clear(&___nl__im__29);
#line 537
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 537
c_rt_lib0clear(&___nl__im__26);
#line 538
c_rt_lib0move(&___nl__im__31,___get_global_string_const(760));
#line 538
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 538
c_rt_lib0clear(&___nl__im__31);
#line 538
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 538
c_rt_lib0clear(&___nl__im__30);
#line 538
c_rt_lib0clear(&___nl__im__3);
#line 538
//clear ___nl__int__4;
#line 538
//clear ___nl__int__5;
#line 538
c_rt_lib0clear(&___nl__im__6);
#line 538
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_internal_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,INT * ___ref___int__3) {
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
#line 544
___nl__int__4 = 0;
#line 545
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 546
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 547
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 547
c_rt_lib0move(&___nl__im__13,___get_global_string_const(110));
#line 547
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 547
c_rt_lib0clear(&___nl__im__12);
#line 547
c_rt_lib0clear(&___nl__im__13);
#line 547
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 547
c_rt_lib0clear(&___nl__im__11);
#line 547
c_rt_lib0move(&___nl__im__14,___get_global_string_const(110));
#line 547
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 547
c_rt_lib0clear(&___nl__im__10);
#line 547
c_rt_lib0clear(&___nl__im__14);
#line 547
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 547
c_rt_lib0clear(&___nl__im__9);
#line 547
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 547
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 547
c_rt_lib0clear(&___nl__im__8);
#line 547
c_rt_lib0clear(&___nl__im__15);
#line 548
___nl__int__17 = 0;
#line 548
___nl__int__18 = 1;
#line 548
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 548
label_23:
;
#line 548
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 548
if(___nl__bool__20){ goto label_73;}
#line 548
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 548
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 549
___nl__int__23 = 0;
#line 549
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 549
//clear ___nl__int__23;
#line 549
___nl__bool__22 = !___nl__bool__22;
#line 549
___nl__bool__22 = !___nl__bool__22;
#line 549
if(___nl__bool__22){ goto label_38;}
#line 549
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 549
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 549
c_rt_lib0clear(&___nl__im__24);
#line 549
goto label_38;
#line 549
label_38:
;
#line 549
//clear ___nl__bool__22;
#line 550
___nl__int__25 = 1;
#line 550
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 550
//clear ___nl__int__25;
#line 551
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 551
if(___nl__bool__26){ goto label_52;}
#line 553
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(347));
#line 553
if(___nl__bool__26){ goto label_57;}
#line 555
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(282));
#line 555
if(___nl__bool__26){ goto label_64;}
#line 555
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 555
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 555
nl_die_arg(___nl__im__27);
#line 551
label_52:
;
#line 551
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 551
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 552
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 553
goto label_69;
#line 553
label_57:
;
#line 553
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(347)));
#line 553
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 554
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_register_value(___nl__im__30));
#line 554
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 554
c_rt_lib0clear(&___nl__im__32);
#line 555
goto label_69;
#line 555
label_64:
;
#line 555
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(282)));
#line 555
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 556
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 557
goto label_69;
#line 557
label_69:
;
#line 557
c_rt_lib0clear(&___nl__im__16);
#line 558
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 558
goto label_23;
#line 558
label_73:
;
#line 559
___nl__int__35 = 1;
#line 559
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 559
//clear ___nl__int__35;
#line 560
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 560
c_rt_lib0move(&___nl__im__39,___get_global_string_const(508));
#line 560
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 560
c_rt_lib0clear(&___nl__im__38);
#line 560
c_rt_lib0clear(&___nl__im__39);
#line 560
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 560
c_rt_lib0clear(&___nl__im__37);
#line 560
c_rt_lib0clear(&___nl__im__0);
#line 560
c_rt_lib0clear(&___nl__im__1);
#line 560
c_rt_lib0clear(&___nl__im__2);
#line 560
//clear ___nl__int__4;
#line 560
c_rt_lib0clear(&___nl__im__5);
#line 560
c_rt_lib0clear(&___nl__im__6);
#line 560
c_rt_lib0clear(&___nl__im__7);
#line 560
c_rt_lib0clear(&___nl__im__16);
#line 560
//clear ___nl__int__17;
#line 560
//clear ___nl__int__18;
#line 560
//clear ___nl__int__19;
#line 560
//clear ___nl__bool__20;
#line 560
c_rt_lib0clear(&___nl__im__21);
#line 560
//clear ___nl__bool__26;
#line 560
c_rt_lib0clear(&___nl__im__27);
#line 560
c_rt_lib0clear(&___nl__im__28);
#line 560
c_rt_lib0clear(&___nl__im__29);
#line 560
c_rt_lib0clear(&___nl__im__30);
#line 560
c_rt_lib0clear(&___nl__im__31);
#line 560
c_rt_lib0clear(&___nl__im__33);
#line 560
c_rt_lib0clear(&___nl__im__34);
#line 560
return ___nl__im__36;
return NULL;

}

ImmT  generator_js_priv0print_int_call_sim(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
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
#line 564
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 565
___nl__int__5 = 0;
#line 565
___nl__int__6 = 1;
#line 565
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 565
label_4:
;
#line 565
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 565
if(___nl__bool__8){ goto label_15;}
#line 565
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 565
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 566
c_rt_lib0move(&___nl__im__10, generator_js_priv0print_register_value(___nl__im__4));
#line 566
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 566
c_rt_lib0clear(&___nl__im__10);
#line 566
c_rt_lib0clear(&___nl__im__4);
#line 567
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 567
goto label_4;
#line 567
label_15:
;
#line 568
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 568
c_rt_lib0move(&___nl__im__19,___get_global_string_const(110));
#line 568
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 568
c_rt_lib0clear(&___nl__im__18);
#line 568
c_rt_lib0clear(&___nl__im__19);
#line 568
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 568
c_rt_lib0clear(&___nl__im__17);
#line 568
c_rt_lib0move(&___nl__im__20,___get_global_string_const(110));
#line 568
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 568
c_rt_lib0clear(&___nl__im__16);
#line 568
c_rt_lib0clear(&___nl__im__20);
#line 568
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 568
c_rt_lib0clear(&___nl__im__15);
#line 568
c_rt_lib0move(&___nl__im__21,___get_global_string_const(457));
#line 568
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 568
c_rt_lib0clear(&___nl__im__14);
#line 568
c_rt_lib0clear(&___nl__im__21);
#line 568
c_rt_lib0move(&___nl__im__23,___get_global_string_const(328));
#line 568
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 568
c_rt_lib0clear(&___nl__im__23);
#line 568
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 568
c_rt_lib0clear(&___nl__im__13);
#line 568
c_rt_lib0clear(&___nl__im__22);
#line 568
c_rt_lib0move(&___nl__im__24,___get_global_string_const(322));
#line 568
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 568
c_rt_lib0clear(&___nl__im__12);
#line 568
c_rt_lib0clear(&___nl__im__24);
#line 568
c_rt_lib0clear(&___nl__im__0);
#line 568
c_rt_lib0clear(&___nl__im__1);
#line 568
c_rt_lib0clear(&___nl__im__2);
#line 568
c_rt_lib0clear(&___nl__im__3);
#line 568
c_rt_lib0clear(&___nl__im__4);
#line 568
//clear ___nl__int__5;
#line 568
//clear ___nl__int__6;
#line 568
//clear ___nl__int__7;
#line 568
//clear ___nl__bool__8;
#line 568
c_rt_lib0clear(&___nl__im__9);
#line 568
return ___nl__im__11;
#line 568
c_rt_lib0clear(&___nl__im__0);
#line 568
c_rt_lib0clear(&___nl__im__1);
#line 568
c_rt_lib0clear(&___nl__im__2);
#line 568
c_rt_lib0clear(&___nl__im__3);
#line 568
c_rt_lib0clear(&___nl__im__4);
#line 568
//clear ___nl__int__5;
#line 568
//clear ___nl__int__6;
#line 568
//clear ___nl__int__7;
#line 568
//clear ___nl__bool__8;
#line 568
c_rt_lib0clear(&___nl__im__9);
#line 568
c_rt_lib0clear(&___nl__im__11);
#line 568
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_const_arr(ImmT  ___nl__im__0) {
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
#line 572
c_rt_lib0move(&___nl__im__3,___get_global_string_const(127));
#line 572
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 572
c_rt_lib0clear(&___nl__im__3);
#line 572
c_rt_lib0move(&___nl__im__4,___get_global_string_const(786));
#line 572
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 572
c_rt_lib0clear(&___nl__im__2);
#line 572
c_rt_lib0clear(&___nl__im__4);
#line 573
___nl__int__6 = 0;
#line 573
___nl__int__7 = 1;
#line 573
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 573
label_10:
;
#line 573
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 573
if(___nl__bool__9){ goto label_25;}
#line 573
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 573
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 573
c_rt_lib0move(&___nl__im__12, generator_js_priv0print_const_value(___nl__im__5));
#line 573
c_rt_lib0move(&___nl__im__13,___get_global_string_const(314));
#line 573
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 573
c_rt_lib0clear(&___nl__im__12);
#line 573
c_rt_lib0clear(&___nl__im__13);
#line 573
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 573
c_rt_lib0clear(&___nl__im__11);
#line 573
c_rt_lib0clear(&___nl__im__5);
#line 573
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 573
goto label_10;
#line 573
label_25:
;
#line 574
c_rt_lib0move(&___nl__im__15,___get_global_string_const(500));
#line 574
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 574
c_rt_lib0clear(&___nl__im__15);
#line 574
c_rt_lib0clear(&___nl__im__0);
#line 574
c_rt_lib0clear(&___nl__im__1);
#line 574
c_rt_lib0clear(&___nl__im__5);
#line 574
//clear ___nl__int__6;
#line 574
//clear ___nl__int__7;
#line 574
//clear ___nl__int__8;
#line 574
//clear ___nl__bool__9;
#line 574
c_rt_lib0clear(&___nl__im__10);
#line 574
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0print_const_hash(ImmT  ___nl__im__0) {
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
#line 578
c_rt_lib0move(&___nl__im__3,___get_global_string_const(128));
#line 578
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 578
c_rt_lib0clear(&___nl__im__3);
#line 578
c_rt_lib0move(&___nl__im__4,___get_global_string_const(795));
#line 578
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 578
c_rt_lib0clear(&___nl__im__2);
#line 578
c_rt_lib0clear(&___nl__im__4);
#line 579
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 579
label_8:
;
#line 579
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 579
if(___nl__bool__6){ goto label_34;}
#line 579
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 579
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 579
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 579
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 579
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 579
c_rt_lib0clear(&___nl__im__13);
#line 579
c_rt_lib0clear(&___nl__im__14);
#line 579
c_rt_lib0move(&___nl__im__15,___get_global_string_const(530));
#line 579
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 579
c_rt_lib0clear(&___nl__im__12);
#line 579
c_rt_lib0clear(&___nl__im__15);
#line 579
c_rt_lib0move(&___nl__im__16, generator_js_priv0print_const_value(___nl__im__7));
#line 579
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 579
c_rt_lib0clear(&___nl__im__11);
#line 579
c_rt_lib0clear(&___nl__im__16);
#line 579
c_rt_lib0move(&___nl__im__17,___get_global_string_const(314));
#line 579
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 579
c_rt_lib0clear(&___nl__im__10);
#line 579
c_rt_lib0clear(&___nl__im__17);
#line 579
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 579
c_rt_lib0clear(&___nl__im__9);
#line 579
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 579
goto label_8;
#line 579
label_34:
;
#line 580
c_rt_lib0move(&___nl__im__19,___get_global_string_const(796));
#line 580
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 580
c_rt_lib0clear(&___nl__im__19);
#line 580
c_rt_lib0clear(&___nl__im__0);
#line 580
c_rt_lib0clear(&___nl__im__1);
#line 580
c_rt_lib0clear(&___nl__im__5);
#line 580
//clear ___nl__bool__6;
#line 580
c_rt_lib0clear(&___nl__im__7);
#line 580
c_rt_lib0clear(&___nl__im__8);
#line 580
return ___nl__im__18;
return NULL;

}

ImmT  generator_js_priv0print_const_ov(ImmT  ___nl__im__0) {
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
#line 584
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 584
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 584
c_rt_lib0clear(&___nl__im__2);
#line 584
___nl__bool__1 = !___nl__bool__1;
#line 584
if(___nl__bool__1){ goto label_36;}
#line 585
c_rt_lib0move(&___nl__im__9,___get_global_string_const(797));
#line 585
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 585
c_rt_lib0clear(&___nl__im__9);
#line 585
c_rt_lib0move(&___nl__im__10,___get_global_string_const(457));
#line 585
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 585
c_rt_lib0clear(&___nl__im__8);
#line 585
c_rt_lib0clear(&___nl__im__10);
#line 585
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 585
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 585
c_rt_lib0clear(&___nl__im__12);
#line 585
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 585
c_rt_lib0clear(&___nl__im__7);
#line 585
c_rt_lib0clear(&___nl__im__11);
#line 585
c_rt_lib0move(&___nl__im__13,___get_global_string_const(328));
#line 585
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 585
c_rt_lib0clear(&___nl__im__6);
#line 585
c_rt_lib0clear(&___nl__im__13);
#line 586
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 586
c_rt_lib0move(&___nl__im__14, generator_js_priv0print_const_value(___nl__im__15));
#line 586
c_rt_lib0clear(&___nl__im__15);
#line 586
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 586
c_rt_lib0clear(&___nl__im__5);
#line 586
c_rt_lib0clear(&___nl__im__14);
#line 586
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 586
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 586
c_rt_lib0clear(&___nl__im__4);
#line 586
c_rt_lib0clear(&___nl__im__16);
#line 586
c_rt_lib0clear(&___nl__im__0);
#line 586
//clear ___nl__bool__1;
#line 586
return ___nl__im__3;
#line 587
goto label_59;
#line 587
label_36:
;
#line 588
c_rt_lib0move(&___nl__im__21,___get_global_string_const(797));
#line 588
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 588
c_rt_lib0clear(&___nl__im__21);
#line 588
c_rt_lib0move(&___nl__im__22,___get_global_string_const(457));
#line 588
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 588
c_rt_lib0clear(&___nl__im__20);
#line 588
c_rt_lib0clear(&___nl__im__22);
#line 588
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 588
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 588
c_rt_lib0clear(&___nl__im__24);
#line 588
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 588
c_rt_lib0clear(&___nl__im__19);
#line 588
c_rt_lib0clear(&___nl__im__23);
#line 588
c_rt_lib0move(&___nl__im__25,___get_global_string_const(798));
#line 588
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 588
c_rt_lib0clear(&___nl__im__18);
#line 588
c_rt_lib0clear(&___nl__im__25);
#line 588
c_rt_lib0clear(&___nl__im__0);
#line 588
//clear ___nl__bool__1;
#line 588
c_rt_lib0clear(&___nl__im__3);
#line 588
return ___nl__im__17;
#line 589
goto label_59;
#line 589
label_59:
;
#line 589
//clear ___nl__bool__1;
#line 589
c_rt_lib0clear(&___nl__im__3);
#line 589
c_rt_lib0clear(&___nl__im__17);
return NULL;

}

ImmT  generator_js_priv0print_const_value(ImmT  ___nl__im__0) {
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
#line 593
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 593
___nl__bool__1 = !___nl__bool__1;
#line 593
if(___nl__bool__1){ goto label_20;}
#line 594
c_rt_lib0move(&___nl__im__6,___get_global_string_const(405));
#line 594
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 594
c_rt_lib0clear(&___nl__im__6);
#line 594
c_rt_lib0move(&___nl__im__7,___get_global_string_const(457));
#line 594
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 594
c_rt_lib0clear(&___nl__im__5);
#line 594
c_rt_lib0clear(&___nl__im__7);
#line 594
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 594
c_rt_lib0clear(&___nl__im__4);
#line 594
c_rt_lib0move(&___nl__im__8,___get_global_string_const(322));
#line 594
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 594
c_rt_lib0clear(&___nl__im__3);
#line 594
c_rt_lib0clear(&___nl__im__8);
#line 594
c_rt_lib0clear(&___nl__im__0);
#line 594
//clear ___nl__bool__1;
#line 594
return ___nl__im__2;
#line 595
goto label_130;
#line 595
label_20:
;
#line 595
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 595
___nl__bool__1 = !___nl__bool__1;
#line 595
if(___nl__bool__1){ goto label_44;}
#line 596
c_rt_lib0move(&___nl__im__13,___get_global_string_const(282));
#line 596
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 596
c_rt_lib0clear(&___nl__im__13);
#line 596
c_rt_lib0move(&___nl__im__14,___get_global_string_const(457));
#line 596
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 596
c_rt_lib0clear(&___nl__im__12);
#line 596
c_rt_lib0clear(&___nl__im__14);
#line 596
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 596
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 596
c_rt_lib0clear(&___nl__im__11);
#line 596
c_rt_lib0clear(&___nl__im__15);
#line 596
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 596
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 596
c_rt_lib0clear(&___nl__im__10);
#line 596
c_rt_lib0clear(&___nl__im__16);
#line 596
c_rt_lib0clear(&___nl__im__0);
#line 596
//clear ___nl__bool__1;
#line 596
c_rt_lib0clear(&___nl__im__2);
#line 596
return ___nl__im__9;
#line 597
goto label_130;
#line 597
label_44:
;
#line 597
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 597
___nl__bool__1 = !___nl__bool__1;
#line 597
if(___nl__bool__1){ goto label_55;}
#line 598
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_const_arr(___nl__im__0));
#line 598
c_rt_lib0clear(&___nl__im__0);
#line 598
//clear ___nl__bool__1;
#line 598
c_rt_lib0clear(&___nl__im__2);
#line 598
c_rt_lib0clear(&___nl__im__9);
#line 598
return ___nl__im__17;
#line 599
goto label_130;
#line 599
label_55:
;
#line 599
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 599
___nl__bool__1 = !___nl__bool__1;
#line 599
if(___nl__bool__1){ goto label_67;}
#line 600
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_const_hash(___nl__im__0));
#line 600
c_rt_lib0clear(&___nl__im__0);
#line 600
//clear ___nl__bool__1;
#line 600
c_rt_lib0clear(&___nl__im__2);
#line 600
c_rt_lib0clear(&___nl__im__9);
#line 600
c_rt_lib0clear(&___nl__im__17);
#line 600
return ___nl__im__18;
#line 601
goto label_130;
#line 601
label_67:
;
#line 601
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 601
___nl__bool__1 = !___nl__bool__1;
#line 601
if(___nl__bool__1){ goto label_113;}
#line 602
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 602
___nl__bool__19 = !___nl__bool__19;
#line 602
if(___nl__bool__19){ goto label_90;}
#line 603
c_rt_lib0move(&___nl__im__21,___get_global_string_const(271));
#line 603
c_rt_lib0move(&___nl__im__22,___get_global_string_const(799));
#line 603
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 603
c_rt_lib0move(&___nl__im__20, generator_js_priv0print_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 603
c_rt_lib0clear(&___nl__im__21);
#line 603
c_rt_lib0clear(&___nl__im__22);
#line 603
c_rt_lib0clear(&___nl__im__23);
#line 603
c_rt_lib0clear(&___nl__im__0);
#line 603
//clear ___nl__bool__1;
#line 603
c_rt_lib0clear(&___nl__im__2);
#line 603
c_rt_lib0clear(&___nl__im__9);
#line 603
c_rt_lib0clear(&___nl__im__17);
#line 603
c_rt_lib0clear(&___nl__im__18);
#line 603
//clear ___nl__bool__19;
#line 603
return ___nl__im__20;
#line 604
goto label_108;
#line 604
label_90:
;
#line 605
c_rt_lib0move(&___nl__im__25,___get_global_string_const(271));
#line 605
c_rt_lib0move(&___nl__im__26,___get_global_string_const(800));
#line 605
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 605
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 605
c_rt_lib0clear(&___nl__im__25);
#line 605
c_rt_lib0clear(&___nl__im__26);
#line 605
c_rt_lib0clear(&___nl__im__27);
#line 605
c_rt_lib0clear(&___nl__im__0);
#line 605
//clear ___nl__bool__1;
#line 605
c_rt_lib0clear(&___nl__im__2);
#line 605
c_rt_lib0clear(&___nl__im__9);
#line 605
c_rt_lib0clear(&___nl__im__17);
#line 605
c_rt_lib0clear(&___nl__im__18);
#line 605
//clear ___nl__bool__19;
#line 605
c_rt_lib0clear(&___nl__im__20);
#line 605
return ___nl__im__24;
#line 606
goto label_108;
#line 606
label_108:
;
#line 606
//clear ___nl__bool__19;
#line 606
c_rt_lib0clear(&___nl__im__20);
#line 606
c_rt_lib0clear(&___nl__im__24);
#line 607
goto label_130;
#line 607
label_113:
;
#line 607
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 607
___nl__bool__1 = !___nl__bool__1;
#line 607
if(___nl__bool__1){ goto label_126;}
#line 608
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_const_ov(___nl__im__0));
#line 608
c_rt_lib0clear(&___nl__im__0);
#line 608
//clear ___nl__bool__1;
#line 608
c_rt_lib0clear(&___nl__im__2);
#line 608
c_rt_lib0clear(&___nl__im__9);
#line 608
c_rt_lib0clear(&___nl__im__17);
#line 608
c_rt_lib0clear(&___nl__im__18);
#line 608
return ___nl__im__28;
#line 609
goto label_130;
#line 609
label_126:
;
#line 610
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 610
nl_die_arg(___nl__im__29);
#line 611
goto label_130;
#line 611
label_130:
;
#line 611
//clear ___nl__bool__1;
#line 611
c_rt_lib0clear(&___nl__im__2);
#line 611
c_rt_lib0clear(&___nl__im__9);
#line 611
c_rt_lib0clear(&___nl__im__17);
#line 611
c_rt_lib0clear(&___nl__im__18);
#line 611
c_rt_lib0clear(&___nl__im__28);
#line 611
c_rt_lib0clear(&___nl__im__29);
#line 611
c_rt_lib0clear(&___nl__im__0);
#line 611
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_goto(INT  ___nl__int__0) {
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 615
c_rt_lib0move(&___nl__im__3,___get_global_string_const(801));
#line 615
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 615
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 615
c_rt_lib0clear(&___nl__im__3);
#line 615
c_rt_lib0clear(&___nl__string__4);
#line 615
c_rt_lib0move(&___nl__im__5,___get_global_string_const(802));
#line 615
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 615
c_rt_lib0clear(&___nl__im__2);
#line 615
c_rt_lib0clear(&___nl__im__5);
#line 615
//clear ___nl__int__0;
#line 615
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0print_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
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
#line 620
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 621
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 621
___nl__bool__3 = !___nl__bool__3;
#line 621
if(___nl__bool__3){ goto label_14;}
#line 622
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 622
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 622
c_rt_lib0clear(&___nl__im__6);
#line 622
c_rt_lib0move(&___nl__im__7,___get_global_string_const(795));
#line 622
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 622
c_rt_lib0clear(&___nl__im__5);
#line 622
c_rt_lib0clear(&___nl__im__7);
#line 622
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 622
c_rt_lib0clear(&___nl__im__4);
#line 623
goto label_26;
#line 623
label_14:
;
#line 623
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 623
___nl__bool__3 = !___nl__bool__3;
#line 623
if(___nl__bool__3){ goto label_22;}
#line 624
c_rt_lib0move(&___nl__im__8,___get_global_string_const(306));
#line 624
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 624
c_rt_lib0clear(&___nl__im__8);
#line 625
goto label_26;
#line 625
label_22:
;
#line 626
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 626
nl_die_arg(___nl__im__9);
#line 627
goto label_26;
#line 627
label_26:
;
#line 627
//clear ___nl__bool__3;
#line 627
c_rt_lib0clear(&___nl__im__9);
#line 628
___nl__int__11 = 0;
#line 628
___nl__int__12 = 1;
#line 628
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 628
label_32:
;
#line 628
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 628
if(___nl__bool__14){ goto label_59;}
#line 628
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 628
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 628
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(577)));
#line 628
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 628
c_rt_lib0clear(&___nl__im__20);
#line 628
c_rt_lib0move(&___nl__im__21,___get_global_string_const(530));
#line 628
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 628
c_rt_lib0clear(&___nl__im__19);
#line 628
c_rt_lib0clear(&___nl__im__21);
#line 628
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(225)));
#line 628
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value(___nl__im__23));
#line 628
c_rt_lib0clear(&___nl__im__23);
#line 628
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 628
c_rt_lib0clear(&___nl__im__18);
#line 628
c_rt_lib0clear(&___nl__im__22);
#line 628
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 628
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 628
c_rt_lib0clear(&___nl__im__17);
#line 628
c_rt_lib0clear(&___nl__im__24);
#line 628
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 628
c_rt_lib0clear(&___nl__im__16);
#line 628
c_rt_lib0clear(&___nl__im__10);
#line 628
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 628
goto label_32;
#line 628
label_59:
;
#line 629
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 629
___nl__bool__25 = !___nl__bool__25;
#line 629
if(___nl__bool__25){ goto label_67;}
#line 630
c_rt_lib0move(&___nl__im__26,___get_global_string_const(796));
#line 630
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 630
c_rt_lib0clear(&___nl__im__26);
#line 631
goto label_79;
#line 631
label_67:
;
#line 631
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 631
___nl__bool__25 = !___nl__bool__25;
#line 631
if(___nl__bool__25){ goto label_75;}
#line 632
c_rt_lib0move(&___nl__im__27,___get_global_string_const(307));
#line 632
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 632
c_rt_lib0clear(&___nl__im__27);
#line 633
goto label_79;
#line 633
label_75:
;
#line 634
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 634
nl_die_arg(___nl__im__28);
#line 635
goto label_79;
#line 635
label_79:
;
#line 635
//clear ___nl__bool__25;
#line 635
c_rt_lib0clear(&___nl__im__28);
#line 636
c_rt_lib0clear(&___nl__im__0);
#line 636
c_rt_lib0clear(&___nl__im__1);
#line 636
c_rt_lib0clear(&___nl__im__10);
#line 636
//clear ___nl__int__11;
#line 636
//clear ___nl__int__12;
#line 636
//clear ___nl__int__13;
#line 636
//clear ___nl__bool__14;
#line 636
c_rt_lib0clear(&___nl__im__15);
#line 636
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0print_empty_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
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
#line 640
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 641
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 641
___nl__bool__3 = !___nl__bool__3;
#line 641
if(___nl__bool__3){ goto label_36;}
#line 642
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 642
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 642
c_rt_lib0clear(&___nl__im__6);
#line 642
c_rt_lib0move(&___nl__im__7,___get_global_string_const(795));
#line 642
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 642
c_rt_lib0clear(&___nl__im__5);
#line 642
c_rt_lib0clear(&___nl__im__7);
#line 642
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 642
c_rt_lib0clear(&___nl__im__4);
#line 643
___nl__int__9 = 0;
#line 643
___nl__int__10 = 1;
#line 643
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 643
label_16:
;
#line 643
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 643
if(___nl__bool__12){ goto label_31;}
#line 643
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 643
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 643
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 643
c_rt_lib0move(&___nl__im__16,___get_global_string_const(803));
#line 643
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 643
c_rt_lib0clear(&___nl__im__15);
#line 643
c_rt_lib0clear(&___nl__im__16);
#line 643
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 643
c_rt_lib0clear(&___nl__im__14);
#line 643
c_rt_lib0clear(&___nl__im__8);
#line 643
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 643
goto label_16;
#line 643
label_31:
;
#line 644
c_rt_lib0move(&___nl__im__17,___get_global_string_const(796));
#line 644
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 644
c_rt_lib0clear(&___nl__im__17);
#line 645
goto label_70;
#line 645
label_36:
;
#line 645
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(559));
#line 645
___nl__bool__3 = !___nl__bool__3;
#line 645
if(___nl__bool__3){ goto label_66;}
#line 646
c_rt_lib0move(&___nl__im__18,___get_global_string_const(306));
#line 646
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 646
c_rt_lib0clear(&___nl__im__18);
#line 647
___nl__int__20 = 0;
#line 647
___nl__int__21 = 1;
#line 647
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 647
label_46:
;
#line 647
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 647
if(___nl__bool__23){ goto label_61;}
#line 647
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 647
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 647
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 647
c_rt_lib0move(&___nl__im__27,___get_global_string_const(804));
#line 647
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 647
c_rt_lib0clear(&___nl__im__26);
#line 647
c_rt_lib0clear(&___nl__im__27);
#line 647
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 647
c_rt_lib0clear(&___nl__im__25);
#line 647
c_rt_lib0clear(&___nl__im__19);
#line 647
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 647
goto label_46;
#line 647
label_61:
;
#line 648
c_rt_lib0move(&___nl__im__28,___get_global_string_const(307));
#line 648
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 648
c_rt_lib0clear(&___nl__im__28);
#line 649
goto label_70;
#line 649
label_66:
;
#line 650
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 650
nl_die_arg(___nl__im__29);
#line 651
goto label_70;
#line 651
label_70:
;
#line 651
//clear ___nl__bool__3;
#line 651
c_rt_lib0clear(&___nl__im__8);
#line 651
//clear ___nl__int__9;
#line 651
//clear ___nl__int__10;
#line 651
//clear ___nl__int__11;
#line 651
//clear ___nl__bool__12;
#line 651
c_rt_lib0clear(&___nl__im__13);
#line 651
c_rt_lib0clear(&___nl__im__19);
#line 651
//clear ___nl__int__20;
#line 651
//clear ___nl__int__21;
#line 651
//clear ___nl__int__22;
#line 651
//clear ___nl__bool__23;
#line 651
c_rt_lib0clear(&___nl__im__24);
#line 651
c_rt_lib0clear(&___nl__im__29);
#line 652
c_rt_lib0clear(&___nl__im__0);
#line 652
c_rt_lib0clear(&___nl__im__1);
#line 652
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0print_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 656
c_rt_lib0move(&___nl__im__2,___get_global_string_const(425));
#line 656
c_rt_lib0move(&___nl__im__3, generator_js_priv0reg_suffix(___nl__im__0));
#line 656
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__3));
#line 656
c_rt_lib0clear(&___nl__im__2);
#line 656
c_rt_lib0clear(&___nl__im__3);
#line 656
c_rt_lib0clear(&___nl__im__0);
#line 656
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0print_register_value(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 660
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register(___nl__im__0));
#line 661
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 661
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 661
if(___nl__bool__3){ goto label_9;}
#line 662
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 662
if(___nl__bool__3){ goto label_11;}
#line 662
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 662
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 662
nl_die_arg(___nl__im__4);
#line 661
label_9:
;
#line 662
goto label_16;
#line 662
label_11:
;
#line 663
c_rt_lib0move(&___nl__im__5,___get_global_string_const(750));
#line 663
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 663
c_rt_lib0clear(&___nl__im__5);
#line 664
goto label_16;
#line 664
label_16:
;
#line 665
c_rt_lib0clear(&___nl__im__0);
#line 665
c_rt_lib0clear(&___nl__im__2);
#line 665
//clear ___nl__bool__3;
#line 665
c_rt_lib0clear(&___nl__im__4);
#line 665
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0print_register_reference(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 669
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register(___nl__im__0));
#line 670
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 670
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 670
if(___nl__bool__3){ goto label_9;}
#line 672
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 672
if(___nl__bool__3){ goto label_18;}
#line 672
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 672
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 672
nl_die_arg(___nl__im__4);
#line 670
label_9:
;
#line 671
c_rt_lib0move(&___nl__im__6,___get_global_string_const(805));
#line 671
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 671
c_rt_lib0clear(&___nl__im__6);
#line 671
c_rt_lib0move(&___nl__im__7,___get_global_string_const(307));
#line 671
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 671
c_rt_lib0clear(&___nl__im__5);
#line 671
c_rt_lib0clear(&___nl__im__7);
#line 672
goto label_20;
#line 672
label_18:
;
#line 673
goto label_20;
#line 673
label_20:
;
#line 674
c_rt_lib0clear(&___nl__im__0);
#line 674
c_rt_lib0clear(&___nl__im__2);
#line 674
//clear ___nl__bool__3;
#line 674
c_rt_lib0clear(&___nl__im__4);
#line 674
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
#line 679
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 679
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(131));
#line 679
if(___nl__bool__3){ goto label_20;}
#line 681
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(405));
#line 681
if(___nl__bool__3){ goto label_23;}
#line 683
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 683
if(___nl__bool__3){ goto label_26;}
#line 685
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(406));
#line 685
if(___nl__bool__3){ goto label_29;}
#line 687
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(559));
#line 687
if(___nl__bool__3){ goto label_32;}
#line 689
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 689
if(___nl__bool__3){ goto label_37;}
#line 691
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(563));
#line 691
if(___nl__bool__3){ goto label_42;}
#line 693
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 693
if(___nl__bool__3){ goto label_47;}
#line 693
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 693
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 693
nl_die_arg(___nl__im__4);
#line 679
label_20:
;
#line 680
c_rt_lib0move(&___nl__im__1,___get_global_string_const(131));
#line 681
goto label_52;
#line 681
label_23:
;
#line 682
c_rt_lib0move(&___nl__im__1,___get_global_string_const(405));
#line 683
goto label_52;
#line 683
label_26:
;
#line 684
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 685
goto label_52;
#line 685
label_29:
;
#line 686
c_rt_lib0move(&___nl__im__1,___get_global_string_const(406));
#line 687
goto label_52;
#line 687
label_32:
;
#line 687
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(559)));
#line 687
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 688
c_rt_lib0move(&___nl__im__1,___get_global_string_const(559));
#line 689
goto label_52;
#line 689
label_37:
;
#line 689
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(127)));
#line 689
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 690
c_rt_lib0move(&___nl__im__1,___get_global_string_const(127));
#line 691
goto label_52;
#line 691
label_42:
;
#line 691
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(563)));
#line 691
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 692
c_rt_lib0move(&___nl__im__1,___get_global_string_const(507));
#line 693
goto label_52;
#line 693
label_47:
;
#line 693
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 693
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 694
c_rt_lib0move(&___nl__im__1,___get_global_string_const(128));
#line 695
goto label_52;
#line 695
label_52:
;
#line 696
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 696
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(220));
#line 696
if(___nl__bool__14){ goto label_61;}
#line 697
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(422));
#line 697
if(___nl__bool__14){ goto label_63;}
#line 697
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 697
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 697
nl_die_arg(___nl__im__15);
#line 696
label_61:
;
#line 697
goto label_68;
#line 697
label_63:
;
#line 698
c_rt_lib0move(&___nl__im__16,___get_global_string_const(641));
#line 698
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 698
c_rt_lib0clear(&___nl__im__16);
#line 699
goto label_68;
#line 699
label_68:
;
#line 700
c_rt_lib0move(&___nl__im__18,___get_global_string_const(642));
#line 700
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 700
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 700
c_rt_lib0clear(&___nl__im__20);
#line 700
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 700
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 700
c_rt_lib0clear(&___nl__im__18);
#line 700
//clear ___nl__int__19;
#line 700
c_rt_lib0clear(&___nl__string__21);
#line 700
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 700
c_rt_lib0clear(&___nl__im__17);
#line 701
c_rt_lib0clear(&___nl__im__0);
#line 701
c_rt_lib0clear(&___nl__im__2);
#line 701
//clear ___nl__bool__3;
#line 701
c_rt_lib0clear(&___nl__im__4);
#line 701
c_rt_lib0clear(&___nl__im__5);
#line 701
c_rt_lib0clear(&___nl__im__6);
#line 701
c_rt_lib0clear(&___nl__im__7);
#line 701
c_rt_lib0clear(&___nl__im__8);
#line 701
c_rt_lib0clear(&___nl__im__9);
#line 701
c_rt_lib0clear(&___nl__im__10);
#line 701
c_rt_lib0clear(&___nl__im__11);
#line 701
c_rt_lib0clear(&___nl__im__12);
#line 701
c_rt_lib0clear(&___nl__im__13);
#line 701
//clear ___nl__bool__14;
#line 701
c_rt_lib0clear(&___nl__im__15);
#line 701
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0print_register_to_assign(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 706
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 706
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 706
c_rt_lib0clear(&___nl__im__2);
#line 706
___nl__bool__1 = !___nl__bool__1;
#line 706
if(___nl__bool__1){ goto label_10;}
#line 706
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 706
c_rt_lib0clear(&___nl__im__0);
#line 706
//clear ___nl__bool__1;
#line 706
return ___nl__im__3;
#line 706
goto label_10;
#line 706
label_10:
;
#line 706
//clear ___nl__bool__1;
#line 706
c_rt_lib0clear(&___nl__im__3);
#line 707
c_rt_lib0move(&___nl__im__5, generator_js_priv0print_register(___nl__im__0));
#line 707
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 707
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 707
c_rt_lib0clear(&___nl__im__5);
#line 707
c_rt_lib0clear(&___nl__im__6);
#line 707
c_rt_lib0clear(&___nl__im__0);
#line 707
return ___nl__im__4;
return NULL;

}

ImmT  generator_js_priv0print_register_value_to_assign(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 711
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 711
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 711
c_rt_lib0clear(&___nl__im__2);
#line 711
___nl__bool__1 = !___nl__bool__1;
#line 711
if(___nl__bool__1){ goto label_10;}
#line 711
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 711
c_rt_lib0clear(&___nl__im__0);
#line 711
//clear ___nl__bool__1;
#line 711
return ___nl__im__3;
#line 711
goto label_10;
#line 711
label_10:
;
#line 711
//clear ___nl__bool__1;
#line 711
c_rt_lib0clear(&___nl__im__3);
#line 712
c_rt_lib0move(&___nl__im__5, generator_js_priv0print_register_value(___nl__im__0));
#line 712
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 712
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 712
c_rt_lib0clear(&___nl__im__5);
#line 712
c_rt_lib0clear(&___nl__im__6);
#line 712
c_rt_lib0clear(&___nl__im__0);
#line 712
return ___nl__im__4;
return NULL;

}

ImmT  generator_js_priv0print_return(nlasm0return0type ___nl__im__0,nlasm0args_type0type ___nl__im__1) {
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
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
#line 716
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 717
___nl__int__3 = 0;
#line 718
___nl__int__5 = 0;
#line 718
___nl__int__6 = 1;
#line 718
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 718
label_5:
;
#line 718
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 718
if(___nl__bool__8){ goto label_50;}
#line 718
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 718
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 719
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(355)));
#line 719
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 719
if(___nl__bool__11){ goto label_18;}
#line 721
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(225));
#line 721
if(___nl__bool__11){ goto label_41;}
#line 721
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 721
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 721
nl_die_arg(___nl__im__12);
#line 719
label_18:
;
#line 720
c_rt_lib0move(&___nl__im__17,___get_global_string_const(755));
#line 720
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 720
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 720
c_rt_lib0clear(&___nl__im__17);
#line 720
c_rt_lib0clear(&___nl__string__18);
#line 720
c_rt_lib0move(&___nl__im__19,___get_global_string_const(806));
#line 720
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 720
c_rt_lib0clear(&___nl__im__16);
#line 720
c_rt_lib0clear(&___nl__im__19);
#line 720
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(471)));
#line 720
c_rt_lib0move(&___nl__im__20, generator_js_priv0print_register_value(___nl__im__21));
#line 720
c_rt_lib0clear(&___nl__im__21);
#line 720
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 720
c_rt_lib0clear(&___nl__im__15);
#line 720
c_rt_lib0clear(&___nl__im__20);
#line 720
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 720
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 720
c_rt_lib0clear(&___nl__im__14);
#line 720
c_rt_lib0clear(&___nl__im__22);
#line 720
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 720
c_rt_lib0clear(&___nl__im__13);
#line 721
goto label_43;
#line 721
label_41:
;
#line 722
goto label_43;
#line 722
label_43:
;
#line 723
___nl__int__23 = 1;
#line 723
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 723
//clear ___nl__int__23;
#line 723
c_rt_lib0clear(&___nl__im__4);
#line 724
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 724
goto label_5;
#line 724
label_50:
;
#line 725
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(225));
#line 725
if(___nl__bool__24){ goto label_58;}
#line 727
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(352));
#line 727
if(___nl__bool__24){ goto label_95;}
#line 727
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 727
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 727
nl_die_arg(___nl__im__25);
#line 725
label_58:
;
#line 725
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(225)));
#line 725
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 726
c_rt_lib0move(&___nl__im__32, string0lf());
#line 726
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 726
c_rt_lib0clear(&___nl__im__32);
#line 726
c_rt_lib0move(&___nl__im__33,___get_global_string_const(510));
#line 726
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__33));
#line 726
c_rt_lib0clear(&___nl__im__31);
#line 726
c_rt_lib0clear(&___nl__im__33);
#line 726
c_rt_lib0move(&___nl__im__34, generator_js_priv0print_register_value(___nl__im__26));
#line 726
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__34));
#line 726
c_rt_lib0clear(&___nl__im__30);
#line 726
c_rt_lib0clear(&___nl__im__34);
#line 726
c_rt_lib0move(&___nl__im__35,___get_global_string_const(442));
#line 726
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__35));
#line 726
c_rt_lib0clear(&___nl__im__29);
#line 726
c_rt_lib0clear(&___nl__im__35);
#line 726
c_rt_lib0clear(&___nl__im__0);
#line 726
c_rt_lib0clear(&___nl__im__1);
#line 726
c_rt_lib0clear(&___nl__im__2);
#line 726
//clear ___nl__int__3;
#line 726
c_rt_lib0clear(&___nl__im__4);
#line 726
//clear ___nl__int__5;
#line 726
//clear ___nl__int__6;
#line 726
//clear ___nl__int__7;
#line 726
//clear ___nl__bool__8;
#line 726
c_rt_lib0clear(&___nl__im__9);
#line 726
c_rt_lib0clear(&___nl__im__10);
#line 726
//clear ___nl__bool__11;
#line 726
c_rt_lib0clear(&___nl__im__12);
#line 726
//clear ___nl__bool__24;
#line 726
c_rt_lib0clear(&___nl__im__25);
#line 726
c_rt_lib0clear(&___nl__im__26);
#line 726
c_rt_lib0clear(&___nl__im__27);
#line 726
return ___nl__im__28;
#line 727
goto label_123;
#line 727
label_95:
;
#line 728
c_rt_lib0move(&___nl__im__38, string0lf());
#line 728
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__2, ___nl__im__38));
#line 728
c_rt_lib0clear(&___nl__im__38);
#line 728
c_rt_lib0move(&___nl__im__39,___get_global_string_const(807));
#line 728
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 728
c_rt_lib0clear(&___nl__im__37);
#line 728
c_rt_lib0clear(&___nl__im__39);
#line 728
c_rt_lib0clear(&___nl__im__0);
#line 728
c_rt_lib0clear(&___nl__im__1);
#line 728
c_rt_lib0clear(&___nl__im__2);
#line 728
//clear ___nl__int__3;
#line 728
c_rt_lib0clear(&___nl__im__4);
#line 728
//clear ___nl__int__5;
#line 728
//clear ___nl__int__6;
#line 728
//clear ___nl__int__7;
#line 728
//clear ___nl__bool__8;
#line 728
c_rt_lib0clear(&___nl__im__9);
#line 728
c_rt_lib0clear(&___nl__im__10);
#line 728
//clear ___nl__bool__11;
#line 728
c_rt_lib0clear(&___nl__im__12);
#line 728
//clear ___nl__bool__24;
#line 728
c_rt_lib0clear(&___nl__im__25);
#line 728
c_rt_lib0clear(&___nl__im__26);
#line 728
c_rt_lib0clear(&___nl__im__27);
#line 728
c_rt_lib0clear(&___nl__im__28);
#line 728
return ___nl__im__36;
#line 729
goto label_123;
#line 729
label_123:
;
return NULL;

}

ImmT  generator_js_priv0print_una_op(nlasm0una_op_t0type ___nl__im__0) {
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
#line 733
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 733
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register_value_to_assign(___nl__im__2));
#line 733
c_rt_lib0clear(&___nl__im__2);
#line 734
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 734
c_rt_lib0move(&___nl__im__5,___get_global_string_const(365));
#line 734
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 734
c_rt_lib0clear(&___nl__im__4);
#line 734
c_rt_lib0clear(&___nl__im__5);
#line 734
___nl__bool__3 = !___nl__bool__3;
#line 734
if(___nl__bool__3){ goto label_24;}
#line 735
c_rt_lib0move(&___nl__im__8,___get_global_string_const(365));
#line 735
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 735
c_rt_lib0clear(&___nl__im__8);
#line 735
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 735
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_register_value(___nl__im__10));
#line 735
c_rt_lib0clear(&___nl__im__10);
#line 735
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 735
c_rt_lib0clear(&___nl__im__7);
#line 735
c_rt_lib0clear(&___nl__im__9);
#line 735
c_rt_lib0clear(&___nl__im__0);
#line 735
c_rt_lib0clear(&___nl__im__1);
#line 735
//clear ___nl__bool__3;
#line 735
return ___nl__im__6;
#line 736
goto label_40;
#line 736
label_24:
;
#line 737
c_rt_lib0move(&___nl__im__13,___get_global_string_const(367));
#line 737
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 737
c_rt_lib0clear(&___nl__im__13);
#line 737
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 737
c_rt_lib0move(&___nl__im__14, generator_js_priv0print_register_value(___nl__im__15));
#line 737
c_rt_lib0clear(&___nl__im__15);
#line 737
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 737
c_rt_lib0clear(&___nl__im__12);
#line 737
c_rt_lib0clear(&___nl__im__14);
#line 737
c_rt_lib0clear(&___nl__im__0);
#line 737
c_rt_lib0clear(&___nl__im__1);
#line 737
//clear ___nl__bool__3;
#line 737
c_rt_lib0clear(&___nl__im__6);
#line 737
return ___nl__im__11;
#line 738
goto label_40;
#line 738
label_40:
;
#line 738
//clear ___nl__bool__3;
#line 738
c_rt_lib0clear(&___nl__im__6);
#line 738
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
#line 742
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 742
if(___nl__bool__2){ goto label_19;}
#line 744
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 744
if(___nl__bool__2){ goto label_25;}
#line 746
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 746
if(___nl__bool__2){ goto label_45;}
#line 748
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 748
if(___nl__bool__2){ goto label_64;}
#line 750
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 750
if(___nl__bool__2){ goto label_72;}
#line 752
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 752
if(___nl__bool__2){ goto label_78;}
#line 754
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 754
if(___nl__bool__2){ goto label_84;}
#line 756
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 756
if(___nl__bool__2){ goto label_90;}
#line 756
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 756
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 756
nl_die_arg(___nl__im__3);
#line 742
label_19:
;
#line 743
c_rt_lib0clear(&___nl__im__0);
#line 743
//clear ___nl__bool__2;
#line 743
c_rt_lib0clear(&___nl__im__3);
#line 743
return ___nl__im__1;
#line 744
goto label_96;
#line 744
label_25:
;
#line 745
c_rt_lib0move(&___nl__im__8,___get_global_string_const(405));
#line 745
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 745
c_rt_lib0clear(&___nl__im__8);
#line 745
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 745
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 745
c_rt_lib0clear(&___nl__im__7);
#line 745
c_rt_lib0clear(&___nl__im__9);
#line 745
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 745
c_rt_lib0clear(&___nl__im__6);
#line 745
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 745
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 745
c_rt_lib0clear(&___nl__im__5);
#line 745
c_rt_lib0clear(&___nl__im__10);
#line 745
c_rt_lib0clear(&___nl__im__0);
#line 745
c_rt_lib0clear(&___nl__im__1);
#line 745
//clear ___nl__bool__2;
#line 745
c_rt_lib0clear(&___nl__im__3);
#line 745
return ___nl__im__4;
#line 746
goto label_96;
#line 746
label_45:
;
#line 747
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 747
c_rt_lib0move(&___nl__im__15,___get_global_string_const(808));
#line 747
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 747
c_rt_lib0clear(&___nl__im__14);
#line 747
c_rt_lib0clear(&___nl__im__15);
#line 747
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 747
c_rt_lib0clear(&___nl__im__13);
#line 747
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 747
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 747
c_rt_lib0clear(&___nl__im__12);
#line 747
c_rt_lib0clear(&___nl__im__16);
#line 747
c_rt_lib0clear(&___nl__im__0);
#line 747
c_rt_lib0clear(&___nl__im__1);
#line 747
//clear ___nl__bool__2;
#line 747
c_rt_lib0clear(&___nl__im__3);
#line 747
c_rt_lib0clear(&___nl__im__4);
#line 747
return ___nl__im__11;
#line 748
goto label_96;
#line 748
label_64:
;
#line 749
c_rt_lib0clear(&___nl__im__0);
#line 749
//clear ___nl__bool__2;
#line 749
c_rt_lib0clear(&___nl__im__3);
#line 749
c_rt_lib0clear(&___nl__im__4);
#line 749
c_rt_lib0clear(&___nl__im__11);
#line 749
return ___nl__im__1;
#line 750
goto label_96;
#line 750
label_72:
;
#line 750
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 750
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 751
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 751
nl_die_arg(___nl__im__19);
#line 752
goto label_96;
#line 752
label_78:
;
#line 752
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 752
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 753
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 753
nl_die_arg(___nl__im__22);
#line 754
goto label_96;
#line 754
label_84:
;
#line 754
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 754
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 755
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 755
nl_die_arg(___nl__im__25);
#line 756
goto label_96;
#line 756
label_90:
;
#line 756
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 756
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 757
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 757
nl_die_arg(___nl__im__28);
#line 758
goto label_96;
#line 758
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
#line 762
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 762
if(___nl__bool__2){ goto label_19;}
#line 764
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 764
if(___nl__bool__2){ goto label_25;}
#line 766
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 766
if(___nl__bool__2){ goto label_35;}
#line 768
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 768
if(___nl__bool__2){ goto label_54;}
#line 770
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 770
if(___nl__bool__2){ goto label_62;}
#line 772
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 772
if(___nl__bool__2){ goto label_68;}
#line 774
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 774
if(___nl__bool__2){ goto label_74;}
#line 776
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 776
if(___nl__bool__2){ goto label_80;}
#line 776
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 776
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 776
nl_die_arg(___nl__im__3);
#line 762
label_19:
;
#line 763
c_rt_lib0clear(&___nl__im__0);
#line 763
//clear ___nl__bool__2;
#line 763
c_rt_lib0clear(&___nl__im__3);
#line 763
return ___nl__im__1;
#line 764
goto label_86;
#line 764
label_25:
;
#line 765
c_rt_lib0move(&___nl__im__5,___get_global_string_const(809));
#line 765
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 765
c_rt_lib0clear(&___nl__im__5);
#line 765
c_rt_lib0clear(&___nl__im__0);
#line 765
c_rt_lib0clear(&___nl__im__1);
#line 765
//clear ___nl__bool__2;
#line 765
c_rt_lib0clear(&___nl__im__3);
#line 765
return ___nl__im__4;
#line 766
goto label_86;
#line 766
label_35:
;
#line 767
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 767
c_rt_lib0move(&___nl__im__10,___get_global_string_const(810));
#line 767
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 767
c_rt_lib0clear(&___nl__im__9);
#line 767
c_rt_lib0clear(&___nl__im__10);
#line 767
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 767
c_rt_lib0clear(&___nl__im__8);
#line 767
c_rt_lib0move(&___nl__im__11,___get_global_string_const(322));
#line 767
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 767
c_rt_lib0clear(&___nl__im__7);
#line 767
c_rt_lib0clear(&___nl__im__11);
#line 767
c_rt_lib0clear(&___nl__im__0);
#line 767
c_rt_lib0clear(&___nl__im__1);
#line 767
//clear ___nl__bool__2;
#line 767
c_rt_lib0clear(&___nl__im__3);
#line 767
c_rt_lib0clear(&___nl__im__4);
#line 767
return ___nl__im__6;
#line 768
goto label_86;
#line 768
label_54:
;
#line 769
c_rt_lib0clear(&___nl__im__0);
#line 769
//clear ___nl__bool__2;
#line 769
c_rt_lib0clear(&___nl__im__3);
#line 769
c_rt_lib0clear(&___nl__im__4);
#line 769
c_rt_lib0clear(&___nl__im__6);
#line 769
return ___nl__im__1;
#line 770
goto label_86;
#line 770
label_62:
;
#line 770
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 770
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 771
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 771
nl_die_arg(___nl__im__14);
#line 772
goto label_86;
#line 772
label_68:
;
#line 772
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 772
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 773
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 773
nl_die_arg(___nl__im__17);
#line 774
goto label_86;
#line 774
label_74:
;
#line 774
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 774
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 775
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 775
nl_die_arg(___nl__im__20);
#line 776
goto label_86;
#line 776
label_80:
;
#line 776
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 776
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 777
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 777
nl_die_arg(___nl__im__23);
#line 778
goto label_86;
#line 778
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
#line 782
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 782
___nl__int__3 = 0;
#line 782
___nl__int__4 = 1;
#line 782
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 782
label_4:
;
#line 782
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 782
if(___nl__bool__6){ goto label_34;}
#line 782
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 782
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 783
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(471)));
#line 783
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 783
c_rt_lib0clear(&___nl__im__10);
#line 783
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 783
c_rt_lib0clear(&___nl__im__9);
#line 783
___nl__bool__8 = !___nl__bool__8;
#line 783
if(___nl__bool__8){ goto label_28;}
#line 783
___nl__bool__11 = true;
#line 783
c_rt_lib0clear(&___nl__im__0);
#line 783
c_rt_lib0clear(&___nl__im__1);
#line 783
c_rt_lib0clear(&___nl__im__2);
#line 783
//clear ___nl__int__3;
#line 783
//clear ___nl__int__4;
#line 783
//clear ___nl__int__5;
#line 783
//clear ___nl__bool__6;
#line 783
c_rt_lib0clear(&___nl__im__7);
#line 783
//clear ___nl__bool__8;
#line 783
return ___nl__bool__11;
#line 783
goto label_28;
#line 783
label_28:
;
#line 783
//clear ___nl__bool__8;
#line 783
//clear ___nl__bool__11;
#line 783
c_rt_lib0clear(&___nl__im__2);
#line 784
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 784
goto label_4;
#line 784
label_34:
;
#line 785
___nl__bool__12 = false;
#line 785
c_rt_lib0clear(&___nl__im__0);
#line 785
c_rt_lib0clear(&___nl__im__1);
#line 785
c_rt_lib0clear(&___nl__im__2);
#line 785
//clear ___nl__int__3;
#line 785
//clear ___nl__int__4;
#line 785
//clear ___nl__int__5;
#line 785
//clear ___nl__bool__6;
#line 785
c_rt_lib0clear(&___nl__im__7);
#line 785
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
#line 789
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 789
___nl__bool__1 = !___nl__bool__1;
#line 789
if(___nl__bool__1){ goto label_8;}
#line 789
___nl__bool__2 = false;
#line 789
c_rt_lib0clear(&___nl__im__0);
#line 789
//clear ___nl__bool__1;
#line 789
return ___nl__bool__2;
#line 789
goto label_8;
#line 789
label_8:
;
#line 789
//clear ___nl__bool__1;
#line 789
//clear ___nl__bool__2;
#line 790
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 790
___nl__bool__3 = !___nl__bool__3;
#line 790
if(___nl__bool__3){ goto label_19;}
#line 790
___nl__bool__4 = false;
#line 790
c_rt_lib0clear(&___nl__im__0);
#line 790
//clear ___nl__bool__3;
#line 790
return ___nl__bool__4;
#line 790
goto label_19;
#line 790
label_19:
;
#line 790
//clear ___nl__bool__3;
#line 790
//clear ___nl__bool__4;
#line 791
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 791
___nl__bool__5 = !___nl__bool__5;
#line 791
if(___nl__bool__5){ goto label_30;}
#line 791
___nl__bool__6 = false;
#line 791
c_rt_lib0clear(&___nl__im__0);
#line 791
//clear ___nl__bool__5;
#line 791
return ___nl__bool__6;
#line 791
goto label_30;
#line 791
label_30:
;
#line 791
//clear ___nl__bool__5;
#line 791
//clear ___nl__bool__6;
#line 792
___nl__bool__7 = true;
#line 792
c_rt_lib0clear(&___nl__im__0);
#line 792
return ___nl__bool__7;
return false;

}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void generator_js_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
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
	___const__[0] = generator_js_priv0get_namespace_name0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
