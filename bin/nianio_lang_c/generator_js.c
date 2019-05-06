
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
bool  ___nl__bool__56 = false;
bool  ___nl__bool__57 = false;
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
INT  ___nl__int__76 = 0;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
bool  ___nl__bool__81 = false;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__string__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__string__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__string__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
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
ImmT  ___nl__string__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__string__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__string__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
INT  ___nl__int__136 = 0;
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
#line 107
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 108
___nl__bool__4 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 108
___nl__bool__4 = !___nl__bool__4;
#line 108
if(___nl__bool__4){ goto label_123;}
#line 109
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 110
c_rt_lib0copy(&___nl__im__6, ___nl__im__0);
#line 111
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(210)));
#line 111
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(467));
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
___nl__bool__7 = !___nl__bool__7;
#line 111
if(___nl__bool__7){ goto label_21;}
#line 112
c_rt_lib0move(&___nl__im__10,___get_global_string_const(736));
#line 112
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 112
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 112
c_rt_lib0clear(&___nl__im__10);
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 112
c_rt_lib0copy(&___nl__im__12, ___nl__im__9);
#line 112
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(168), ___nl__im__12);
#line 112
c_rt_lib0clear(&___nl__im__9);
#line 112
c_rt_lib0clear(&___nl__im__12);
#line 113
goto label_32;
#line 113
label_21:
;
#line 114
c_rt_lib0move(&___nl__im__14,___get_global_string_const(737));
#line 114
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 114
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 114
c_rt_lib0clear(&___nl__im__14);
#line 114
c_rt_lib0clear(&___nl__im__15);
#line 114
c_rt_lib0copy(&___nl__im__16, ___nl__im__13);
#line 114
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(168), ___nl__im__16);
#line 114
c_rt_lib0clear(&___nl__im__13);
#line 114
c_rt_lib0clear(&___nl__im__16);
#line 115
goto label_32;
#line 115
label_32:
;
#line 115
//clear ___nl__bool__7;
#line 116
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(467)));
#line 116
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 116
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(210), ___nl__im__18);
#line 116
c_rt_lib0clear(&___nl__im__17);
#line 116
c_rt_lib0clear(&___nl__im__18);
#line 117
c_rt_lib0move(&___nl__im__20,___get_global_string_const(738));
#line 117
c_rt_lib0move(&___nl__im__21, generator_js_priv0get_function_name(___nl__im__6, ___nl__im__1));
#line 117
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__21));
#line 117
c_rt_lib0clear(&___nl__im__20);
#line 117
c_rt_lib0clear(&___nl__im__21);
#line 118
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_function(___nl__im__6, ___nl__im__1, ___ref___im__2));
#line 119
c_rt_lib0move(&___nl__im__25,___get_global_string_const(728));
#line 119
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__19));
#line 119
c_rt_lib0clear(&___nl__im__25);
#line 119
c_rt_lib0move(&___nl__im__26,___get_global_string_const(442));
#line 119
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__26));
#line 119
c_rt_lib0clear(&___nl__im__24);
#line 119
c_rt_lib0clear(&___nl__im__26);
#line 119
c_rt_lib0move(&___nl__im__27, string0lf());
#line 119
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__27));
#line 119
c_rt_lib0clear(&___nl__im__23);
#line 119
c_rt_lib0clear(&___nl__im__27);
#line 119
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__22));
#line 119
c_rt_lib0clear(&___nl__im__22);
#line 120
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 120
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(211));
#line 120
if(___nl__bool__29){ goto label_66;}
#line 122
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(467));
#line 122
if(___nl__bool__29){ goto label_81;}
#line 122
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 122
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__28));
#line 122
nl_die_arg(___nl__im__30);
#line 120
label_66:
;
#line 121
c_rt_lib0move(&___nl__im__34, generator_js_priv0get_namespace_name());
#line 121
c_rt_lib0move(&___nl__im__35,___get_global_string_const(110));
#line 121
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 121
c_rt_lib0clear(&___nl__im__34);
#line 121
c_rt_lib0clear(&___nl__im__35);
#line 121
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__5));
#line 121
c_rt_lib0clear(&___nl__im__33);
#line 121
c_rt_lib0move(&___nl__im__36,___get_global_string_const(739));
#line 121
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 121
c_rt_lib0clear(&___nl__im__32);
#line 121
c_rt_lib0clear(&___nl__im__36);
#line 121
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__31));
#line 121
c_rt_lib0clear(&___nl__im__31);
#line 122
goto label_92;
#line 122
label_81:
;
#line 123
c_rt_lib0move(&___nl__im__39,___get_global_string_const(740));
#line 123
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__5));
#line 123
c_rt_lib0clear(&___nl__im__39);
#line 123
c_rt_lib0move(&___nl__im__40,___get_global_string_const(741));
#line 123
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__40));
#line 123
c_rt_lib0clear(&___nl__im__38);
#line 123
c_rt_lib0clear(&___nl__im__40);
#line 123
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__37));
#line 123
c_rt_lib0clear(&___nl__im__37);
#line 124
goto label_92;
#line 124
label_92:
;
#line 126
c_rt_lib0move(&___nl__im__49,___get_global_string_const(742));
#line 126
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__19));
#line 126
c_rt_lib0clear(&___nl__im__49);
#line 126
c_rt_lib0move(&___nl__im__50,___get_global_string_const(743));
#line 126
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__50));
#line 126
c_rt_lib0clear(&___nl__im__48);
#line 126
c_rt_lib0clear(&___nl__im__50);
#line 126
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__19));
#line 126
c_rt_lib0clear(&___nl__im__47);
#line 127
c_rt_lib0move(&___nl__im__51,___get_global_string_const(504));
#line 127
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__51));
#line 127
c_rt_lib0clear(&___nl__im__46);
#line 127
c_rt_lib0clear(&___nl__im__51);
#line 127
c_rt_lib0move(&___nl__im__52, generator_js_priv0get_function_call_name(___nl__im__6, ___nl__im__1));
#line 127
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__52));
#line 127
c_rt_lib0clear(&___nl__im__45);
#line 127
c_rt_lib0clear(&___nl__im__52);
#line 127
c_rt_lib0move(&___nl__im__53,___get_global_string_const(744));
#line 127
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__53));
#line 127
c_rt_lib0clear(&___nl__im__44);
#line 127
c_rt_lib0clear(&___nl__im__53);
#line 127
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__19));
#line 127
c_rt_lib0clear(&___nl__im__43);
#line 129
c_rt_lib0move(&___nl__im__54,___get_global_string_const(745));
#line 129
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__54));
#line 129
c_rt_lib0clear(&___nl__im__42);
#line 129
c_rt_lib0clear(&___nl__im__54);
#line 129
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__41));
#line 129
c_rt_lib0clear(&___nl__im__41);
#line 131
goto label_126;
#line 131
label_123:
;
#line 132
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_function(___nl__im__0, ___nl__im__1, ___ref___im__2));
#line 133
goto label_126;
#line 133
label_126:
;
#line 133
//clear ___nl__bool__4;
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
c_rt_lib0clear(&___nl__im__19);
#line 133
c_rt_lib0clear(&___nl__im__28);
#line 133
//clear ___nl__bool__29;
#line 133
c_rt_lib0clear(&___nl__im__30);
#line 135
c_rt_lib0move(&___nl__im__55, string0lf());
#line 135
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__55));
#line 135
c_rt_lib0clear(&___nl__im__55);
#line 136
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 136
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__58, ___get_global_string_const(211));
#line 136
c_rt_lib0clear(&___nl__im__58);
#line 136
___nl__bool__57 = !___nl__bool__56;
#line 136
if(___nl__bool__57){ goto label_144;}
#line 136
___nl__bool__56 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 136
___nl__bool__56 = !___nl__bool__56;
#line 136
label_144:
;
#line 136
//clear ___nl__bool__57;
#line 136
___nl__bool__56 = !___nl__bool__56;
#line 136
if(___nl__bool__56){ goto label_360;}
#line 137
c_rt_lib0move(&___nl__im__65, generator_js_priv0get_namespace_name());
#line 137
c_rt_lib0move(&___nl__im__66,___get_global_string_const(110));
#line 137
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 137
c_rt_lib0clear(&___nl__im__65);
#line 137
c_rt_lib0clear(&___nl__im__66);
#line 137
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__1));
#line 137
c_rt_lib0clear(&___nl__im__64);
#line 137
c_rt_lib0move(&___nl__im__67,___get_global_string_const(746));
#line 137
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__67));
#line 137
c_rt_lib0clear(&___nl__im__63);
#line 137
c_rt_lib0clear(&___nl__im__67);
#line 137
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 137
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__68));
#line 137
c_rt_lib0clear(&___nl__im__62);
#line 137
c_rt_lib0clear(&___nl__im__68);
#line 137
c_rt_lib0move(&___nl__im__69,___get_global_string_const(747));
#line 137
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__69));
#line 137
c_rt_lib0clear(&___nl__im__61);
#line 137
c_rt_lib0clear(&___nl__im__69);
#line 137
c_rt_lib0move(&___nl__im__70, string0lf());
#line 137
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__70));
#line 137
c_rt_lib0clear(&___nl__im__60);
#line 137
c_rt_lib0clear(&___nl__im__70);
#line 137
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__59));
#line 137
c_rt_lib0clear(&___nl__im__59);
#line 138
___nl__int__71 = 0;
#line 139
c_rt_lib0move(&___nl__im__72,___get_global_string_const(36));
#line 140
c_rt_lib0move(&___nl__im__73,___get_global_string_const(36));
#line 141
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 141
___nl__int__76 = 0;
#line 141
___nl__int__77 = 1;
#line 141
___nl__int__78 = c_rt_lib0array_len(___nl__im__74);
#line 141
label_180:
;
#line 141
___nl__bool__79 = ___nl__int__76 >= ___nl__int__78;
#line 141
if(___nl__bool__79){ goto label_318;}
#line 141
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_get(___nl__im__74, ___nl__int__76));
#line 141
c_rt_lib0copy(&___nl__im__75, ___nl__im__80);
#line 142
___nl__int__82 = 0;
#line 142
___nl__bool__81 = ___nl__int__71 == ___nl__int__82;
#line 142
//clear ___nl__int__82;
#line 142
___nl__bool__81 = !___nl__bool__81;
#line 142
___nl__bool__81 = !___nl__bool__81;
#line 142
if(___nl__bool__81){ goto label_195;}
#line 142
c_rt_lib0move(&___nl__im__83,___get_global_string_const(328));
#line 142
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_add(___nl__im__72, ___nl__im__83));
#line 142
c_rt_lib0clear(&___nl__im__83);
#line 142
goto label_195;
#line 142
label_195:
;
#line 142
//clear ___nl__bool__81;
#line 143
c_rt_lib0move(&___nl__im__85,___get_global_string_const(279));
#line 143
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__71));
#line 143
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 143
c_rt_lib0clear(&___nl__im__85);
#line 143
c_rt_lib0clear(&___nl__string__86);
#line 143
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_add(___nl__im__72, ___nl__im__84));
#line 143
c_rt_lib0clear(&___nl__im__84);
#line 144
c_rt_lib0move(&___nl__im__89,___get_global_string_const(748));
#line 144
c_rt_lib0move(&___nl__string__90, c_rt_lib0int_to_string(___nl__int__71));
#line 144
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__string__90));
#line 144
c_rt_lib0clear(&___nl__im__89);
#line 144
c_rt_lib0clear(&___nl__string__90);
#line 144
c_rt_lib0move(&___nl__im__91,___get_global_string_const(504));
#line 144
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__91));
#line 144
c_rt_lib0clear(&___nl__im__88);
#line 144
c_rt_lib0clear(&___nl__im__91);
#line 144
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__87));
#line 144
c_rt_lib0clear(&___nl__im__87);
#line 145
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(471)));
#line 145
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(206)));
#line 145
c_rt_lib0clear(&___nl__im__94);
#line 145
c_rt_lib0move(&___nl__im__97,___get_global_string_const(749));
#line 145
c_rt_lib0move(&___nl__string__98, c_rt_lib0int_to_string(___nl__int__71));
#line 145
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__string__98));
#line 145
c_rt_lib0clear(&___nl__im__97);
#line 145
c_rt_lib0clear(&___nl__string__98);
#line 145
c_rt_lib0move(&___nl__im__99,___get_global_string_const(322));
#line 145
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__99));
#line 145
c_rt_lib0clear(&___nl__im__96);
#line 145
c_rt_lib0clear(&___nl__im__99);
#line 145
c_rt_lib0move(&___nl__im__92, generator_js_priv0get_value_from_im(___nl__im__93, ___nl__im__95));
#line 145
c_rt_lib0clear(&___nl__im__93);
#line 145
c_rt_lib0clear(&___nl__im__95);
#line 146
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(355)));
#line 146
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(39));
#line 146
if(___nl__bool__101){ goto label_238;}
#line 150
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(225));
#line 150
if(___nl__bool__101){ goto label_295;}
#line 150
c_rt_lib0move(&___nl__im__102,___get_global_string_const(15));
#line 150
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(2, ___nl__im__102, ___nl__im__100));
#line 150
nl_die_arg(___nl__im__102);
#line 146
label_238:
;
#line 147
c_rt_lib0move(&___nl__im__107,___get_global_string_const(750));
#line 147
c_rt_lib0move(&___nl__im__109,___get_global_string_const(39));
#line 147
c_rt_lib0move(&___nl__im__108, generator_js_priv0imm_call(___nl__im__109));
#line 147
c_rt_lib0clear(&___nl__im__109);
#line 147
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__108));
#line 147
c_rt_lib0clear(&___nl__im__107);
#line 147
c_rt_lib0clear(&___nl__im__108);
#line 147
c_rt_lib0move(&___nl__im__110,___get_global_string_const(457));
#line 147
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__110));
#line 147
c_rt_lib0clear(&___nl__im__106);
#line 147
c_rt_lib0clear(&___nl__im__110);
#line 147
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__92));
#line 147
c_rt_lib0clear(&___nl__im__105);
#line 147
c_rt_lib0move(&___nl__im__111,___get_global_string_const(508));
#line 147
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__111));
#line 147
c_rt_lib0clear(&___nl__im__104);
#line 147
c_rt_lib0clear(&___nl__im__111);
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__103));
#line 147
c_rt_lib0clear(&___nl__im__103);
#line 148
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(471)));
#line 148
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__114, ___get_global_string_const(206)));
#line 148
c_rt_lib0clear(&___nl__im__114);
#line 148
c_rt_lib0move(&___nl__im__117,___get_global_string_const(279));
#line 148
c_rt_lib0move(&___nl__string__118, c_rt_lib0int_to_string(___nl__int__71));
#line 148
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__string__118));
#line 148
c_rt_lib0clear(&___nl__im__117);
#line 148
c_rt_lib0clear(&___nl__string__118);
#line 148
c_rt_lib0move(&___nl__im__119,___get_global_string_const(751));
#line 148
c_rt_lib0move(&___nl__im__115, c_rt_lib0concat_new(___nl__im__116, ___nl__im__119));
#line 148
c_rt_lib0clear(&___nl__im__116);
#line 148
c_rt_lib0clear(&___nl__im__119);
#line 148
c_rt_lib0move(&___nl__im__112, generator_js_priv0get_im_from_value(___nl__im__113, ___nl__im__115));
#line 148
c_rt_lib0clear(&___nl__im__113);
#line 148
c_rt_lib0clear(&___nl__im__115);
#line 149
c_rt_lib0move(&___nl__im__125,___get_global_string_const(752));
#line 149
c_rt_lib0move(&___nl__string__126, c_rt_lib0int_to_string(___nl__int__71));
#line 149
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__125, ___nl__string__126));
#line 149
c_rt_lib0clear(&___nl__im__125);
#line 149
c_rt_lib0clear(&___nl__string__126);
#line 149
c_rt_lib0move(&___nl__im__127,___get_global_string_const(328));
#line 149
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__127));
#line 149
c_rt_lib0clear(&___nl__im__124);
#line 149
c_rt_lib0clear(&___nl__im__127);
#line 149
c_rt_lib0move(&___nl__im__122, c_rt_lib0concat_new(___nl__im__123, ___nl__im__112));
#line 149
c_rt_lib0clear(&___nl__im__123);
#line 149
c_rt_lib0move(&___nl__im__128,___get_global_string_const(508));
#line 149
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__im__128));
#line 149
c_rt_lib0clear(&___nl__im__122);
#line 149
c_rt_lib0clear(&___nl__im__128);
#line 149
c_rt_lib0move(&___nl__im__129, string0lf());
#line 149
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__129));
#line 149
c_rt_lib0clear(&___nl__im__121);
#line 149
c_rt_lib0clear(&___nl__im__129);
#line 149
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_add(___nl__im__73, ___nl__im__120));
#line 149
c_rt_lib0clear(&___nl__im__120);
#line 150
goto label_308;
#line 150
label_295:
;
#line 151
c_rt_lib0move(&___nl__im__132,___get_global_string_const(749));
#line 151
c_rt_lib0move(&___nl__string__133, c_rt_lib0int_to_string(___nl__int__71));
#line 151
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__string__133));
#line 151
c_rt_lib0clear(&___nl__im__132);
#line 151
c_rt_lib0clear(&___nl__string__133);
#line 151
c_rt_lib0move(&___nl__im__134,___get_global_string_const(508));
#line 151
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__131, ___nl__im__134));
#line 151
c_rt_lib0clear(&___nl__im__131);
#line 151
c_rt_lib0clear(&___nl__im__134);
#line 151
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__130));
#line 151
c_rt_lib0clear(&___nl__im__130);
#line 152
goto label_308;
#line 152
label_308:
;
#line 153
c_rt_lib0move(&___nl__im__135, string0lf());
#line 153
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__135));
#line 153
c_rt_lib0clear(&___nl__im__135);
#line 154
___nl__int__136 = 1;
#line 154
___nl__int__71 = ___nl__int__71 + ___nl__int__136;
#line 154
//clear ___nl__int__136;
#line 154
c_rt_lib0clear(&___nl__im__75);
#line 155
___nl__int__76 = ___nl__int__76 + ___nl__int__77;
#line 155
goto label_180;
#line 155
label_318:
;
#line 156
c_rt_lib0move(&___nl__im__139,___get_global_string_const(753));
#line 156
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(417)));
#line 157
c_rt_lib0move(&___nl__im__145, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__1));
#line 157
c_rt_lib0move(&___nl__im__146,___get_global_string_const(457));
#line 157
c_rt_lib0move(&___nl__im__144, c_rt_lib0concat_new(___nl__im__145, ___nl__im__146));
#line 157
c_rt_lib0clear(&___nl__im__145);
#line 157
c_rt_lib0clear(&___nl__im__146);
#line 157
c_rt_lib0move(&___nl__im__143, c_rt_lib0concat_new(___nl__im__144, ___nl__im__72));
#line 157
c_rt_lib0clear(&___nl__im__144);
#line 157
c_rt_lib0move(&___nl__im__147,___get_global_string_const(322));
#line 157
c_rt_lib0move(&___nl__im__142, c_rt_lib0concat_new(___nl__im__143, ___nl__im__147));
#line 157
c_rt_lib0clear(&___nl__im__143);
#line 157
c_rt_lib0clear(&___nl__im__147);
#line 157
c_rt_lib0move(&___nl__im__140, generator_js_priv0get_im_from_value(___nl__im__141, ___nl__im__142));
#line 157
c_rt_lib0clear(&___nl__im__141);
#line 157
c_rt_lib0clear(&___nl__im__142);
#line 157
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__140));
#line 157
c_rt_lib0clear(&___nl__im__139);
#line 157
c_rt_lib0clear(&___nl__im__140);
#line 157
c_rt_lib0move(&___nl__im__148, string0lf());
#line 157
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__148));
#line 157
c_rt_lib0clear(&___nl__im__138);
#line 157
c_rt_lib0clear(&___nl__im__148);
#line 157
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__137));
#line 157
c_rt_lib0clear(&___nl__im__137);
#line 158
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__73));
#line 159
c_rt_lib0move(&___nl__im__150,___get_global_string_const(754));
#line 159
c_rt_lib0move(&___nl__im__151, string0lf());
#line 159
c_rt_lib0move(&___nl__im__149, c_rt_lib0concat_new(___nl__im__150, ___nl__im__151));
#line 159
c_rt_lib0clear(&___nl__im__150);
#line 159
c_rt_lib0clear(&___nl__im__151);
#line 159
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__149));
#line 159
c_rt_lib0clear(&___nl__im__149);
#line 160
c_rt_lib0move(&___nl__im__153,___get_global_string_const(307));
#line 160
c_rt_lib0move(&___nl__im__154, string0lf());
#line 160
c_rt_lib0move(&___nl__im__152, c_rt_lib0concat_new(___nl__im__153, ___nl__im__154));
#line 160
c_rt_lib0clear(&___nl__im__153);
#line 160
c_rt_lib0clear(&___nl__im__154);
#line 160
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__152));
#line 160
c_rt_lib0clear(&___nl__im__152);
#line 161
goto label_360;
#line 161
label_360:
;
#line 161
//clear ___nl__bool__56;
#line 161
//clear ___nl__int__71;
#line 161
c_rt_lib0clear(&___nl__im__72);
#line 161
c_rt_lib0clear(&___nl__im__73);
#line 161
c_rt_lib0clear(&___nl__im__74);
#line 161
c_rt_lib0clear(&___nl__im__75);
#line 161
//clear ___nl__int__76;
#line 161
//clear ___nl__int__77;
#line 161
//clear ___nl__int__78;
#line 161
//clear ___nl__bool__79;
#line 161
c_rt_lib0clear(&___nl__im__80);
#line 161
c_rt_lib0clear(&___nl__im__92);
#line 161
c_rt_lib0clear(&___nl__im__100);
#line 161
//clear ___nl__bool__101;
#line 161
c_rt_lib0clear(&___nl__im__102);
#line 161
c_rt_lib0clear(&___nl__im__112);
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
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
#line 166
c_rt_lib0move(&___nl__im__3, string0lf());
#line 167
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 167
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(211));
#line 167
if(___nl__bool__5){ goto label_9;}
#line 169
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(467));
#line 169
if(___nl__bool__5){ goto label_26;}
#line 169
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 169
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 169
nl_die_arg(___nl__im__6);
#line 167
label_9:
;
#line 168
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 168
c_rt_lib0move(&___nl__im__11,___get_global_string_const(110));
#line 168
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 168
c_rt_lib0clear(&___nl__im__10);
#line 168
c_rt_lib0clear(&___nl__im__11);
#line 168
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 168
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 168
c_rt_lib0clear(&___nl__im__9);
#line 168
c_rt_lib0clear(&___nl__im__12);
#line 168
c_rt_lib0move(&___nl__im__13,___get_global_string_const(755));
#line 168
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 168
c_rt_lib0clear(&___nl__im__8);
#line 168
c_rt_lib0clear(&___nl__im__13);
#line 168
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__7));
#line 168
c_rt_lib0clear(&___nl__im__7);
#line 169
goto label_39;
#line 169
label_26:
;
#line 170
c_rt_lib0move(&___nl__im__16,___get_global_string_const(740));
#line 170
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 170
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 170
c_rt_lib0clear(&___nl__im__16);
#line 170
c_rt_lib0clear(&___nl__im__17);
#line 170
c_rt_lib0move(&___nl__im__18,___get_global_string_const(457));
#line 170
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 170
c_rt_lib0clear(&___nl__im__15);
#line 170
c_rt_lib0clear(&___nl__im__18);
#line 170
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__14));
#line 170
c_rt_lib0clear(&___nl__im__14);
#line 171
goto label_39;
#line 171
label_39:
;
#line 172
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 172
___nl__int__19 = c_rt_lib0array_len(___nl__im__20);
#line 172
c_rt_lib0clear(&___nl__im__20);
#line 172
___nl__int__21 = 0;
#line 172
___nl__int__22 = 1;
#line 172
label_45:
;
#line 172
___nl__bool__23 = ___nl__int__21 >= ___nl__int__19;
#line 172
if(___nl__bool__23){ goto label_69;}
#line 173
___nl__int__25 = 0;
#line 173
___nl__bool__24 = ___nl__int__21 == ___nl__int__25;
#line 173
//clear ___nl__int__25;
#line 173
___nl__bool__24 = !___nl__bool__24;
#line 173
___nl__bool__24 = !___nl__bool__24;
#line 173
if(___nl__bool__24){ goto label_58;}
#line 173
c_rt_lib0move(&___nl__im__26,___get_global_string_const(328));
#line 173
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__26));
#line 173
c_rt_lib0clear(&___nl__im__26);
#line 173
goto label_58;
#line 173
label_58:
;
#line 173
//clear ___nl__bool__24;
#line 174
c_rt_lib0move(&___nl__im__28,___get_global_string_const(756));
#line 174
c_rt_lib0move(&___nl__string__29, c_rt_lib0int_to_string(___nl__int__21));
#line 174
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__string__29));
#line 174
c_rt_lib0clear(&___nl__im__28);
#line 174
c_rt_lib0clear(&___nl__string__29);
#line 174
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__27));
#line 174
c_rt_lib0clear(&___nl__im__27);
#line 175
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 175
goto label_45;
#line 175
label_69:
;
#line 176
c_rt_lib0move(&___nl__im__31,___get_global_string_const(757));
#line 176
c_rt_lib0move(&___nl__im__32, string0lf());
#line 176
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 176
c_rt_lib0clear(&___nl__im__31);
#line 176
c_rt_lib0clear(&___nl__im__32);
#line 176
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 176
c_rt_lib0clear(&___nl__im__30);
#line 177
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 177
___nl__int__33 = c_rt_lib0array_len(___nl__im__34);
#line 177
c_rt_lib0clear(&___nl__im__34);
#line 177
___nl__int__35 = 0;
#line 177
___nl__int__36 = 1;
#line 177
label_82:
;
#line 177
___nl__bool__37 = ___nl__int__35 >= ___nl__int__33;
#line 177
if(___nl__bool__37){ goto label_172;}
#line 178
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 178
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_get(___nl__im__40, ___nl__int__35));
#line 178
c_rt_lib0clear(&___nl__im__40);
#line 178
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(355)));
#line 178
c_rt_lib0clear(&___nl__im__39);
#line 178
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(225));
#line 178
if(___nl__bool__41){ goto label_97;}
#line 180
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(39));
#line 180
if(___nl__bool__41){ goto label_122;}
#line 180
c_rt_lib0move(&___nl__im__42,___get_global_string_const(15));
#line 180
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(2, ___nl__im__42, ___nl__im__38));
#line 180
nl_die_arg(___nl__im__42);
#line 178
label_97:
;
#line 179
c_rt_lib0move(&___nl__im__47,___get_global_string_const(728));
#line 179
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 179
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__50, ___nl__int__35));
#line 179
c_rt_lib0clear(&___nl__im__50);
#line 179
c_rt_lib0move(&___nl__im__48, generator_js_priv0print_register(___nl__im__49));
#line 179
c_rt_lib0clear(&___nl__im__49);
#line 179
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 179
c_rt_lib0clear(&___nl__im__47);
#line 179
c_rt_lib0clear(&___nl__im__48);
#line 179
c_rt_lib0move(&___nl__im__51,___get_global_string_const(758));
#line 179
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__51));
#line 179
c_rt_lib0clear(&___nl__im__46);
#line 179
c_rt_lib0clear(&___nl__im__51);
#line 179
c_rt_lib0move(&___nl__string__52, c_rt_lib0int_to_string(___nl__int__35));
#line 179
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__string__52));
#line 179
c_rt_lib0clear(&___nl__im__45);
#line 179
c_rt_lib0clear(&___nl__string__52);
#line 179
c_rt_lib0move(&___nl__im__53,___get_global_string_const(442));
#line 179
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__53));
#line 179
c_rt_lib0clear(&___nl__im__44);
#line 179
c_rt_lib0clear(&___nl__im__53);
#line 179
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 179
c_rt_lib0clear(&___nl__im__43);
#line 180
goto label_147;
#line 180
label_122:
;
#line 181
c_rt_lib0move(&___nl__im__58,___get_global_string_const(728));
#line 181
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 181
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__61, ___nl__int__35));
#line 181
c_rt_lib0clear(&___nl__im__61);
#line 181
c_rt_lib0move(&___nl__im__59, generator_js_priv0print_register(___nl__im__60));
#line 181
c_rt_lib0clear(&___nl__im__60);
#line 181
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 181
c_rt_lib0clear(&___nl__im__58);
#line 181
c_rt_lib0clear(&___nl__im__59);
#line 181
c_rt_lib0move(&___nl__im__62,___get_global_string_const(758));
#line 181
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__62));
#line 181
c_rt_lib0clear(&___nl__im__57);
#line 181
c_rt_lib0clear(&___nl__im__62);
#line 181
c_rt_lib0move(&___nl__string__63, c_rt_lib0int_to_string(___nl__int__35));
#line 181
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__string__63));
#line 181
c_rt_lib0clear(&___nl__im__56);
#line 181
c_rt_lib0clear(&___nl__string__63);
#line 181
c_rt_lib0move(&___nl__im__64,___get_global_string_const(759));
#line 181
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__64));
#line 181
c_rt_lib0clear(&___nl__im__55);
#line 181
c_rt_lib0clear(&___nl__im__64);
#line 181
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__54));
#line 181
c_rt_lib0clear(&___nl__im__54);
#line 182
goto label_147;
#line 182
label_147:
;
#line 183
c_rt_lib0move(&___nl__im__68, generator_js_priv0get_namespace_name());
#line 183
c_rt_lib0move(&___nl__im__69,___get_global_string_const(760));
#line 183
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__69));
#line 183
c_rt_lib0clear(&___nl__im__68);
#line 183
c_rt_lib0clear(&___nl__im__69);
#line 183
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 183
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get(___nl__im__72, ___nl__int__35));
#line 183
c_rt_lib0clear(&___nl__im__72);
#line 183
c_rt_lib0move(&___nl__im__70, generator_js_priv0print_register_value(___nl__im__71));
#line 183
c_rt_lib0clear(&___nl__im__71);
#line 183
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__70));
#line 183
c_rt_lib0clear(&___nl__im__67);
#line 183
c_rt_lib0clear(&___nl__im__70);
#line 183
c_rt_lib0move(&___nl__im__73,___get_global_string_const(508));
#line 183
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__73));
#line 183
c_rt_lib0clear(&___nl__im__66);
#line 183
c_rt_lib0clear(&___nl__im__73);
#line 183
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__65));
#line 183
c_rt_lib0clear(&___nl__im__65);
#line 183
c_rt_lib0clear(&___nl__im__38);
#line 183
//clear ___nl__bool__41;
#line 183
c_rt_lib0clear(&___nl__im__42);
#line 184
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 184
goto label_82;
#line 184
label_172:
;
#line 185
c_rt_lib0move(&___nl__im__74, string0lf());
#line 185
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__74));
#line 185
c_rt_lib0clear(&___nl__im__74);
#line 186
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 186
___nl__int__75 = c_rt_lib0array_len(___nl__im__76);
#line 186
c_rt_lib0clear(&___nl__im__76);
#line 186
label_179:
;
#line 186
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 186
___nl__int__78 = c_rt_lib0array_len(___nl__im__79);
#line 186
c_rt_lib0clear(&___nl__im__79);
#line 186
___nl__bool__77 = ___nl__int__75 < ___nl__int__78;
#line 186
//clear ___nl__int__78;
#line 186
___nl__bool__77 = !___nl__bool__77;
#line 186
if(___nl__bool__77){ goto label_210;}
#line 187
c_rt_lib0move(&___nl__im__83,___get_global_string_const(728));
#line 187
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 187
c_rt_lib0move(&___nl__im__85, c_rt_lib0array_get(___nl__im__86, ___nl__int__75));
#line 187
c_rt_lib0clear(&___nl__im__86);
#line 187
c_rt_lib0move(&___nl__im__84, generator_js_priv0print_register(___nl__im__85));
#line 187
c_rt_lib0clear(&___nl__im__85);
#line 187
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 187
c_rt_lib0clear(&___nl__im__83);
#line 187
c_rt_lib0clear(&___nl__im__84);
#line 187
c_rt_lib0move(&___nl__im__87,___get_global_string_const(761));
#line 187
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__87));
#line 187
c_rt_lib0clear(&___nl__im__82);
#line 187
c_rt_lib0clear(&___nl__im__87);
#line 187
c_rt_lib0move(&___nl__im__88, string0lf());
#line 187
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__88));
#line 187
c_rt_lib0clear(&___nl__im__81);
#line 187
c_rt_lib0clear(&___nl__im__88);
#line 187
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__80));
#line 187
c_rt_lib0clear(&___nl__im__80);
#line 186
___nl__int__89 = 1;
#line 186
___nl__int__75 = ___nl__int__75 + ___nl__int__89;
#line 186
//clear ___nl__int__89;
#line 188
goto label_179;
#line 188
label_210:
;
#line 189
c_rt_lib0move(&___nl__im__91,___get_global_string_const(762));
#line 189
c_rt_lib0move(&___nl__im__92, string0lf());
#line 189
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__92));
#line 189
c_rt_lib0clear(&___nl__im__91);
#line 189
c_rt_lib0clear(&___nl__im__92);
#line 189
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__90));
#line 189
c_rt_lib0clear(&___nl__im__90);
#line 190
___nl__int__93 = 0;
#line 192
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 192
___nl__int__96 = 0;
#line 192
___nl__int__97 = 1;
#line 192
___nl__int__98 = c_rt_lib0array_len(___nl__im__94);
#line 192
label_223:
;
#line 192
___nl__bool__99 = ___nl__int__96 >= ___nl__int__98;
#line 192
if(___nl__bool__99){ goto label_236;}
#line 192
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_get(___nl__im__94, ___nl__int__96));
#line 192
c_rt_lib0copy(&___nl__im__95, ___nl__im__100);
#line 191
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 191
c_rt_lib0move(&___nl__im__101, generator_js_priv0print_command(___nl__im__95, ___nl__im__102, &___nl__int__93, ___ref___im__2));
#line 191
c_rt_lib0clear(&___nl__im__102);
#line 191
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__101));
#line 191
c_rt_lib0clear(&___nl__im__101);
#line 191
c_rt_lib0clear(&___nl__im__95);
#line 191
___nl__int__96 = ___nl__int__96 + ___nl__int__97;
#line 191
goto label_223;
#line 191
label_236:
;
#line 193
c_rt_lib0move(&___nl__im__105,___get_global_string_const(763));
#line 193
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__3, ___nl__im__105));
#line 193
c_rt_lib0clear(&___nl__im__105);
#line 193
c_rt_lib0move(&___nl__im__106, string0lf());
#line 193
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__106));
#line 193
c_rt_lib0clear(&___nl__im__104);
#line 193
c_rt_lib0clear(&___nl__im__106);
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
c_rt_lib0clear(&___nl__im__3);
#line 193
c_rt_lib0clear(&___nl__im__4);
#line 193
//clear ___nl__bool__5;
#line 193
c_rt_lib0clear(&___nl__im__6);
#line 193
//clear ___nl__int__19;
#line 193
//clear ___nl__int__21;
#line 193
//clear ___nl__int__22;
#line 193
//clear ___nl__bool__23;
#line 193
//clear ___nl__int__33;
#line 193
//clear ___nl__int__35;
#line 193
//clear ___nl__int__36;
#line 193
//clear ___nl__bool__37;
#line 193
c_rt_lib0clear(&___nl__im__38);
#line 193
//clear ___nl__bool__41;
#line 193
c_rt_lib0clear(&___nl__im__42);
#line 193
//clear ___nl__int__75;
#line 193
//clear ___nl__bool__77;
#line 193
//clear ___nl__int__93;
#line 193
c_rt_lib0clear(&___nl__im__94);
#line 193
c_rt_lib0clear(&___nl__im__95);
#line 193
//clear ___nl__int__96;
#line 193
//clear ___nl__int__97;
#line 193
//clear ___nl__int__98;
#line 193
//clear ___nl__bool__99;
#line 193
c_rt_lib0clear(&___nl__im__100);
#line 193
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
#line 197
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 198
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 198
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(231));
#line 198
if(___nl__bool__6){ goto label_79;}
#line 200
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(232));
#line 200
if(___nl__bool__6){ goto label_100;}
#line 202
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(233));
#line 202
if(___nl__bool__6){ goto label_121;}
#line 205
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(234));
#line 205
if(___nl__bool__6){ goto label_142;}
#line 207
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(239));
#line 207
if(___nl__bool__6){ goto label_155;}
#line 210
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(235));
#line 210
if(___nl__bool__6){ goto label_176;}
#line 212
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(236));
#line 212
if(___nl__bool__6){ goto label_181;}
#line 214
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(237));
#line 214
if(___nl__bool__6){ goto label_186;}
#line 216
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(238));
#line 216
if(___nl__bool__6){ goto label_201;}
#line 219
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(248));
#line 219
if(___nl__bool__6){ goto label_232;}
#line 221
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(249));
#line 221
if(___nl__bool__6){ goto label_237;}
#line 223
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(240));
#line 223
if(___nl__bool__6){ goto label_246;}
#line 225
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(226));
#line 225
if(___nl__bool__6){ goto label_255;}
#line 227
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(241));
#line 227
if(___nl__bool__6){ goto label_264;}
#line 230
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(242));
#line 230
if(___nl__bool__6){ goto label_291;}
#line 234
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(243));
#line 234
if(___nl__bool__6){ goto label_322;}
#line 236
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(244));
#line 236
if(___nl__bool__6){ goto label_331;}
#line 238
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(245));
#line 238
if(___nl__bool__6){ goto label_340;}
#line 242
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(246));
#line 242
if(___nl__bool__6){ goto label_373;}
#line 246
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(247));
#line 246
if(___nl__bool__6){ goto label_404;}
#line 248
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(250));
#line 248
if(___nl__bool__6){ goto label_409;}
#line 250
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(251));
#line 250
if(___nl__bool__6){ goto label_422;}
#line 253
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(252));
#line 253
if(___nl__bool__6){ goto label_449;}
#line 255
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(253));
#line 255
if(___nl__bool__6){ goto label_454;}
#line 257
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(254));
#line 257
if(___nl__bool__6){ goto label_463;}
#line 258
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(255));
#line 258
if(___nl__bool__6){ goto label_467;}
#line 261
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(256));
#line 261
if(___nl__bool__6){ goto label_492;}
#line 263
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(257));
#line 263
if(___nl__bool__6){ goto label_503;}
#line 265
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(258));
#line 265
if(___nl__bool__6){ goto label_508;}
#line 267
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(259));
#line 267
if(___nl__bool__6){ goto label_519;}
#line 269
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(260));
#line 269
if(___nl__bool__6){ goto label_524;}
#line 271
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(261));
#line 271
if(___nl__bool__6){ goto label_535;}
#line 276
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(262));
#line 276
if(___nl__bool__6){ goto label_591;}
#line 278
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(263));
#line 278
if(___nl__bool__6){ goto label_602;}
#line 280
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(264));
#line 280
if(___nl__bool__6){ goto label_607;}
#line 282
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(265));
#line 282
if(___nl__bool__6){ goto label_612;}
#line 284
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(266));
#line 284
if(___nl__bool__6){ goto label_617;}
#line 284
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 284
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 284
nl_die_arg(___nl__im__7);
#line 198
label_79:
;
#line 198
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(231)));
#line 198
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 199
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(224)));
#line 199
c_rt_lib0move(&___nl__im__11, generator_js_priv0print_register_value_to_assign(___nl__im__12));
#line 199
c_rt_lib0clear(&___nl__im__12);
#line 199
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(73)));
#line 199
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(224)));
#line 199
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(206)));
#line 199
c_rt_lib0clear(&___nl__im__16);
#line 199
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_arr(___nl__im__14, ___nl__im__15));
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
c_rt_lib0clear(&___nl__im__15);
#line 199
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__13));
#line 199
c_rt_lib0clear(&___nl__im__11);
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0move(&___nl__im__17,___get_global_string_const(442));
#line 199
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 199
c_rt_lib0clear(&___nl__im__10);
#line 199
c_rt_lib0clear(&___nl__im__17);
#line 200
goto label_622;
#line 200
label_100:
;
#line 200
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(232)));
#line 200
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 201
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(224)));
#line 201
c_rt_lib0move(&___nl__im__21, generator_js_priv0print_register_value_to_assign(___nl__im__22));
#line 201
c_rt_lib0clear(&___nl__im__22);
#line 201
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(73)));
#line 201
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(224)));
#line 201
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(206)));
#line 201
c_rt_lib0clear(&___nl__im__26);
#line 201
c_rt_lib0move(&___nl__im__23, generator_js_priv0print_hash(___nl__im__24, ___nl__im__25));
#line 201
c_rt_lib0clear(&___nl__im__24);
#line 201
c_rt_lib0clear(&___nl__im__25);
#line 201
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 201
c_rt_lib0clear(&___nl__im__21);
#line 201
c_rt_lib0clear(&___nl__im__23);
#line 201
c_rt_lib0move(&___nl__im__27,___get_global_string_const(442));
#line 201
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 201
c_rt_lib0clear(&___nl__im__20);
#line 201
c_rt_lib0clear(&___nl__im__27);
#line 202
goto label_622;
#line 202
label_121:
;
#line 202
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(233)));
#line 202
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 203
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(224)));
#line 203
c_rt_lib0move(&___nl__im__31, generator_js_priv0print_register_value_to_assign(___nl__im__32));
#line 203
c_rt_lib0clear(&___nl__im__32);
#line 204
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(764)));
#line 204
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(224)));
#line 204
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(206)));
#line 204
c_rt_lib0clear(&___nl__im__36);
#line 204
c_rt_lib0move(&___nl__im__33, generator_js_priv0print_empty_hash(___nl__im__34, ___nl__im__35));
#line 204
c_rt_lib0clear(&___nl__im__34);
#line 204
c_rt_lib0clear(&___nl__im__35);
#line 204
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__33));
#line 204
c_rt_lib0clear(&___nl__im__31);
#line 204
c_rt_lib0clear(&___nl__im__33);
#line 204
c_rt_lib0move(&___nl__im__37,___get_global_string_const(442));
#line 204
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 204
c_rt_lib0clear(&___nl__im__30);
#line 204
c_rt_lib0clear(&___nl__im__37);
#line 205
goto label_622;
#line 205
label_142:
;
#line 205
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(234)));
#line 205
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 206
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(268)));
#line 206
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(270)));
#line 206
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(267)));
#line 206
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(224)));
#line 206
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_call(___nl__im__40, ___nl__im__41, ___nl__im__42, ___nl__im__43, ___ref___int__2));
#line 206
c_rt_lib0clear(&___nl__im__40);
#line 206
c_rt_lib0clear(&___nl__im__41);
#line 206
c_rt_lib0clear(&___nl__im__42);
#line 206
c_rt_lib0clear(&___nl__im__43);
#line 207
goto label_622;
#line 207
label_155:
;
#line 207
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(239)));
#line 207
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 208
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(224)));
#line 208
c_rt_lib0move(&___nl__im__47, generator_js_priv0print_register_value_to_assign(___nl__im__48));
#line 208
c_rt_lib0clear(&___nl__im__48);
#line 209
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(152)));
#line 209
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(168)));
#line 209
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(2, ___get_global_string_const(152), ___nl__im__51, ___get_global_string_const(168), ___nl__im__52));
#line 209
c_rt_lib0clear(&___nl__im__51);
#line 209
c_rt_lib0clear(&___nl__im__52);
#line 209
c_rt_lib0move(&___nl__im__49, generator_js_priv0print_const_hash(___nl__im__50));
#line 209
c_rt_lib0clear(&___nl__im__50);
#line 209
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__49));
#line 209
c_rt_lib0clear(&___nl__im__47);
#line 209
c_rt_lib0clear(&___nl__im__49);
#line 209
c_rt_lib0move(&___nl__im__53,___get_global_string_const(442));
#line 209
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__46, ___nl__im__53));
#line 209
c_rt_lib0clear(&___nl__im__46);
#line 209
c_rt_lib0clear(&___nl__im__53);
#line 210
goto label_622;
#line 210
label_176:
;
#line 210
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(235)));
#line 210
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 211
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_una_op(___nl__im__54));
#line 212
goto label_622;
#line 212
label_181:
;
#line 212
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(236)));
#line 212
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 213
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_bin_op(___nl__im__56, ___ref___int__2));
#line 214
goto label_622;
#line 214
label_186:
;
#line 214
c_rt_lib0move(&___nl__im__59, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(237)));
#line 214
c_rt_lib0copy(&___nl__im__58, ___nl__im__59);
#line 215
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(224)));
#line 215
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(73)));
#line 215
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(562)));
#line 215
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(567)));
#line 215
___nl__int__63 = getIntFromImm(___nl__im__64);
#line 215
c_rt_lib0clear(&___nl__im__64);
#line 215
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_ov_is(___nl__im__60, ___nl__im__61, ___nl__im__62, ___nl__int__63, ___ref___int__2, ___ref___im__3));
#line 215
c_rt_lib0clear(&___nl__im__60);
#line 215
c_rt_lib0clear(&___nl__im__61);
#line 215
c_rt_lib0clear(&___nl__im__62);
#line 215
//clear ___nl__int__63;
#line 216
goto label_622;
#line 216
label_201:
;
#line 216
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(238)));
#line 216
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 217
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(224)));
#line 217
c_rt_lib0move(&___nl__im__68, generator_js_priv0print_register_value_to_assign(___nl__im__69));
#line 217
c_rt_lib0clear(&___nl__im__69);
#line 217
c_rt_lib0move(&___nl__im__71,___get_global_string_const(271));
#line 217
c_rt_lib0move(&___nl__im__72,___get_global_string_const(238));
#line 218
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(73)));
#line 218
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__75));
#line 218
c_rt_lib0clear(&___nl__im__75);
#line 218
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(562)));
#line 218
c_rt_lib0move(&___nl__im__77, generator_js_priv0print_str_imm(___nl__im__78, ___ref___im__3));
#line 218
c_rt_lib0clear(&___nl__im__78);
#line 218
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__77));
#line 218
c_rt_lib0clear(&___nl__im__77);
#line 218
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(2, ___nl__im__74, ___nl__im__76));
#line 218
c_rt_lib0clear(&___nl__im__74);
#line 218
c_rt_lib0clear(&___nl__im__76);
#line 218
c_rt_lib0move(&___nl__im__70, generator_js_priv0print_internal_call(___nl__im__71, ___nl__im__72, ___nl__im__73, ___ref___int__2));
#line 218
c_rt_lib0clear(&___nl__im__71);
#line 218
c_rt_lib0clear(&___nl__im__72);
#line 218
c_rt_lib0clear(&___nl__im__73);
#line 218
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__70));
#line 218
c_rt_lib0clear(&___nl__im__68);
#line 218
c_rt_lib0clear(&___nl__im__70);
#line 218
c_rt_lib0move(&___nl__im__79,___get_global_string_const(442));
#line 218
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__67, ___nl__im__79));
#line 218
c_rt_lib0clear(&___nl__im__67);
#line 218
c_rt_lib0clear(&___nl__im__79);
#line 219
goto label_622;
#line 219
label_232:
;
#line 219
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(248)));
#line 219
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 220
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_return(___nl__im__80, ___nl__im__1));
#line 221
goto label_622;
#line 221
label_237:
;
#line 221
c_rt_lib0move(&___nl__im__83, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(249)));
#line 221
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 222
c_rt_lib0move(&___nl__im__84, generator_js_priv0get_namespace_name());
#line 222
c_rt_lib0move(&___nl__im__85,___get_global_string_const(765));
#line 222
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 222
c_rt_lib0clear(&___nl__im__84);
#line 222
c_rt_lib0clear(&___nl__im__85);
#line 223
goto label_622;
#line 223
label_246:
;
#line 223
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(240)));
#line 223
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 224
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(224)));
#line 224
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(73)));
#line 224
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_move(___nl__im__88, ___nl__im__89, ___ref___int__2));
#line 224
c_rt_lib0clear(&___nl__im__88);
#line 224
c_rt_lib0clear(&___nl__im__89);
#line 225
goto label_622;
#line 225
label_255:
;
#line 225
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(226)));
#line 225
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 226
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(224)));
#line 226
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(225)));
#line 226
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_load_const(___nl__im__92, ___nl__im__93, ___ref___im__3));
#line 226
c_rt_lib0clear(&___nl__im__92);
#line 226
c_rt_lib0clear(&___nl__im__93);
#line 227
goto label_622;
#line 227
label_264:
;
#line 227
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(241)));
#line 227
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 228
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(224)));
#line 228
c_rt_lib0move(&___nl__im__99, generator_js_priv0print_register_value_to_assign(___nl__im__100));
#line 228
c_rt_lib0clear(&___nl__im__100);
#line 229
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(73)));
#line 229
c_rt_lib0move(&___nl__im__101, generator_js_priv0print_register_value(___nl__im__102));
#line 229
c_rt_lib0clear(&___nl__im__102);
#line 229
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__101));
#line 229
c_rt_lib0clear(&___nl__im__99);
#line 229
c_rt_lib0clear(&___nl__im__101);
#line 229
c_rt_lib0move(&___nl__im__103,___get_global_string_const(766));
#line 229
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__103));
#line 229
c_rt_lib0clear(&___nl__im__98);
#line 229
c_rt_lib0clear(&___nl__im__103);
#line 229
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(278)));
#line 229
c_rt_lib0move(&___nl__im__104, generator_js_priv0print_register_value(___nl__im__105));
#line 229
c_rt_lib0clear(&___nl__im__105);
#line 229
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__104));
#line 229
c_rt_lib0clear(&___nl__im__97);
#line 229
c_rt_lib0clear(&___nl__im__104);
#line 229
c_rt_lib0move(&___nl__im__106,___get_global_string_const(508));
#line 229
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__96, ___nl__im__106));
#line 229
c_rt_lib0clear(&___nl__im__96);
#line 229
c_rt_lib0clear(&___nl__im__106);
#line 230
goto label_622;
#line 230
label_291:
;
#line 230
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(242)));
#line 230
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 231
c_rt_lib0move(&___nl__im__110,___get_global_string_const(271));
#line 231
c_rt_lib0move(&___nl__im__111,___get_global_string_const(767));
#line 231
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(73)));
#line 231
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__114));
#line 231
c_rt_lib0clear(&___nl__im__114);
#line 232
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(278)));
#line 232
c_rt_lib0move(&___nl__im__116, generator_js_priv0print_register_value(___nl__im__117));
#line 232
c_rt_lib0clear(&___nl__im__117);
#line 232
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__116));
#line 232
c_rt_lib0clear(&___nl__im__116);
#line 233
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(225)));
#line 233
c_rt_lib0move(&___nl__im__119, generator_js_priv0print_register_value(___nl__im__120));
#line 233
c_rt_lib0clear(&___nl__im__120);
#line 233
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__119));
#line 233
c_rt_lib0clear(&___nl__im__119);
#line 233
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_mk(3, ___nl__im__113, ___nl__im__115, ___nl__im__118));
#line 233
c_rt_lib0clear(&___nl__im__113);
#line 233
c_rt_lib0clear(&___nl__im__115);
#line 233
c_rt_lib0clear(&___nl__im__118);
#line 233
c_rt_lib0move(&___nl__im__109, generator_js_priv0print_internal_call(___nl__im__110, ___nl__im__111, ___nl__im__112, ___ref___int__2));
#line 233
c_rt_lib0clear(&___nl__im__110);
#line 233
c_rt_lib0clear(&___nl__im__111);
#line 233
c_rt_lib0clear(&___nl__im__112);
#line 233
c_rt_lib0move(&___nl__im__121,___get_global_string_const(442));
#line 233
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__109, ___nl__im__121));
#line 233
c_rt_lib0clear(&___nl__im__109);
#line 233
c_rt_lib0clear(&___nl__im__121);
#line 234
goto label_622;
#line 234
label_322:
;
#line 234
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(243)));
#line 234
c_rt_lib0copy(&___nl__im__122, ___nl__im__123);
#line 235
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(224)));
#line 235
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(225)));
#line 235
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_array_push(___nl__im__124, ___nl__im__125, ___ref___int__2));
#line 235
c_rt_lib0clear(&___nl__im__124);
#line 235
c_rt_lib0clear(&___nl__im__125);
#line 236
goto label_622;
#line 236
label_331:
;
#line 236
c_rt_lib0move(&___nl__im__127, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(244)));
#line 236
c_rt_lib0copy(&___nl__im__126, ___nl__im__127);
#line 237
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(224)));
#line 237
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(73)));
#line 237
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_array_len(___nl__im__128, ___nl__im__129, ___ref___int__2));
#line 237
c_rt_lib0clear(&___nl__im__128);
#line 237
c_rt_lib0clear(&___nl__im__129);
#line 238
goto label_622;
#line 238
label_340:
;
#line 238
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(245)));
#line 238
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 239
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(224)));
#line 239
c_rt_lib0move(&___nl__im__133, generator_js_priv0print_register_value_to_assign(___nl__im__134));
#line 239
c_rt_lib0clear(&___nl__im__134);
#line 239
c_rt_lib0move(&___nl__im__136,___get_global_string_const(271));
#line 239
c_rt_lib0move(&___nl__im__137,___get_global_string_const(768));
#line 240
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(73)));
#line 240
c_rt_lib0move(&___nl__im__140, generator_js_priv0print_register_value(___nl__im__141));
#line 240
c_rt_lib0clear(&___nl__im__141);
#line 240
c_rt_lib0move(&___nl__im__139, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__140));
#line 240
c_rt_lib0clear(&___nl__im__140);
#line 240
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(577)));
#line 240
c_rt_lib0move(&___nl__im__143, generator_js_priv0print_str_imm(___nl__im__144, ___ref___im__3));
#line 240
c_rt_lib0clear(&___nl__im__144);
#line 240
c_rt_lib0move(&___nl__im__142, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__143));
#line 240
c_rt_lib0clear(&___nl__im__143);
#line 240
c_rt_lib0move(&___nl__im__138, c_rt_lib0array_mk(2, ___nl__im__139, ___nl__im__142));
#line 240
c_rt_lib0clear(&___nl__im__139);
#line 240
c_rt_lib0clear(&___nl__im__142);
#line 240
c_rt_lib0move(&___nl__im__135, generator_js_priv0print_internal_call(___nl__im__136, ___nl__im__137, ___nl__im__138, ___ref___int__2));
#line 240
c_rt_lib0clear(&___nl__im__136);
#line 240
c_rt_lib0clear(&___nl__im__137);
#line 240
c_rt_lib0clear(&___nl__im__138);
#line 240
c_rt_lib0move(&___nl__im__132, c_rt_lib0concat_new(___nl__im__133, ___nl__im__135));
#line 240
c_rt_lib0clear(&___nl__im__133);
#line 240
c_rt_lib0clear(&___nl__im__135);
#line 241
c_rt_lib0move(&___nl__im__145,___get_global_string_const(442));
#line 241
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__132, ___nl__im__145));
#line 241
c_rt_lib0clear(&___nl__im__132);
#line 241
c_rt_lib0clear(&___nl__im__145);
#line 242
goto label_622;
#line 242
label_373:
;
#line 242
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(246)));
#line 242
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 243
c_rt_lib0move(&___nl__im__149,___get_global_string_const(271));
#line 243
c_rt_lib0move(&___nl__im__150,___get_global_string_const(769));
#line 243
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(73)));
#line 243
c_rt_lib0move(&___nl__im__152, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__153));
#line 243
c_rt_lib0clear(&___nl__im__153);
#line 244
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(577)));
#line 244
c_rt_lib0move(&___nl__im__155, generator_js_priv0print_str_imm(___nl__im__156, ___ref___im__3));
#line 244
c_rt_lib0clear(&___nl__im__156);
#line 244
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__155));
#line 244
c_rt_lib0clear(&___nl__im__155);
#line 244
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(225)));
#line 244
c_rt_lib0move(&___nl__im__158, generator_js_priv0print_register_value(___nl__im__159));
#line 244
c_rt_lib0clear(&___nl__im__159);
#line 244
c_rt_lib0move(&___nl__im__157, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__158));
#line 244
c_rt_lib0clear(&___nl__im__158);
#line 244
c_rt_lib0move(&___nl__im__151, c_rt_lib0array_mk(3, ___nl__im__152, ___nl__im__154, ___nl__im__157));
#line 244
c_rt_lib0clear(&___nl__im__152);
#line 244
c_rt_lib0clear(&___nl__im__154);
#line 244
c_rt_lib0clear(&___nl__im__157);
#line 244
c_rt_lib0move(&___nl__im__148, generator_js_priv0print_internal_call(___nl__im__149, ___nl__im__150, ___nl__im__151, ___ref___int__2));
#line 244
c_rt_lib0clear(&___nl__im__149);
#line 244
c_rt_lib0clear(&___nl__im__150);
#line 244
c_rt_lib0clear(&___nl__im__151);
#line 245
c_rt_lib0move(&___nl__im__160,___get_global_string_const(442));
#line 245
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__148, ___nl__im__160));
#line 245
c_rt_lib0clear(&___nl__im__148);
#line 245
c_rt_lib0clear(&___nl__im__160);
#line 246
goto label_622;
#line 246
label_404:
;
#line 246
c_rt_lib0move(&___nl__im__162, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(247)));
#line 246
c_rt_lib0copy(&___nl__im__161, ___nl__im__162);
#line 247
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_ov_mk(___nl__im__161, ___ref___im__3, ___ref___int__2));
#line 248
goto label_622;
#line 248
label_409:
;
#line 248
c_rt_lib0move(&___nl__im__164, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(250)));
#line 248
___nl__int__163 = getIntFromImm(___nl__im__164);
#line 249
c_rt_lib0move(&___nl__im__166,___get_global_string_const(529));
#line 249
c_rt_lib0move(&___nl__string__167, c_rt_lib0int_to_string(___nl__int__163));
#line 249
c_rt_lib0move(&___nl__im__165, c_rt_lib0concat_new(___nl__im__166, ___nl__string__167));
#line 249
c_rt_lib0clear(&___nl__im__166);
#line 249
c_rt_lib0clear(&___nl__string__167);
#line 249
c_rt_lib0move(&___nl__im__168,___get_global_string_const(530));
#line 249
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__165, ___nl__im__168));
#line 249
c_rt_lib0clear(&___nl__im__165);
#line 249
c_rt_lib0clear(&___nl__im__168);
#line 250
goto label_622;
#line 250
label_422:
;
#line 250
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(251)));
#line 250
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 251
c_rt_lib0move(&___nl__im__174,___get_global_string_const(607));
#line 251
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_string_const(73)));
#line 251
c_rt_lib0move(&___nl__im__175, generator_js_priv0print_register_value(___nl__im__176));
#line 251
c_rt_lib0clear(&___nl__im__176);
#line 251
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__im__175));
#line 251
c_rt_lib0clear(&___nl__im__174);
#line 251
c_rt_lib0clear(&___nl__im__175);
#line 251
c_rt_lib0move(&___nl__im__177,___get_global_string_const(757));
#line 251
c_rt_lib0move(&___nl__im__172, c_rt_lib0concat_new(___nl__im__173, ___nl__im__177));
#line 251
c_rt_lib0clear(&___nl__im__173);
#line 251
c_rt_lib0clear(&___nl__im__177);
#line 251
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_string_const(224)));
#line 251
___nl__int__179 = getIntFromImm(___nl__im__180);
#line 251
c_rt_lib0clear(&___nl__im__180);
#line 251
c_rt_lib0move(&___nl__im__178, generator_js_priv0print_goto(___nl__int__179));
#line 251
//clear ___nl__int__179;
#line 251
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__178));
#line 251
c_rt_lib0clear(&___nl__im__172);
#line 251
c_rt_lib0clear(&___nl__im__178);
#line 252
c_rt_lib0move(&___nl__im__181,___get_global_string_const(307));
#line 252
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__171, ___nl__im__181));
#line 252
c_rt_lib0clear(&___nl__im__171);
#line 252
c_rt_lib0clear(&___nl__im__181);
#line 253
goto label_622;
#line 253
label_449:
;
#line 253
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(252)));
#line 253
___nl__int__182 = getIntFromImm(___nl__im__183);
#line 254
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_goto(___nl__int__182));
#line 255
goto label_622;
#line 255
label_454:
;
#line 255
c_rt_lib0move(&___nl__im__185, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(253)));
#line 255
c_rt_lib0copy(&___nl__im__184, ___nl__im__185);
#line 256
c_rt_lib0move(&___nl__im__186, generator_js_priv0print_register_to_assign(___nl__im__184));
#line 256
c_rt_lib0move(&___nl__im__187,___get_global_string_const(770));
#line 256
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__186, ___nl__im__187));
#line 256
c_rt_lib0clear(&___nl__im__186);
#line 256
c_rt_lib0clear(&___nl__im__187);
#line 257
goto label_622;
#line 257
label_463:
;
#line 257
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(254)));
#line 257
c_rt_lib0copy(&___nl__im__188, ___nl__im__189);
#line 258
goto label_622;
#line 258
label_467:
;
#line 258
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(255)));
#line 258
c_rt_lib0copy(&___nl__im__190, ___nl__im__191);
#line 259
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(361)));
#line 259
c_rt_lib0move(&___nl__im__195, generator_js_priv0print_register_to_assign(___nl__im__196));
#line 259
c_rt_lib0clear(&___nl__im__196);
#line 260
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(360)));
#line 260
c_rt_lib0move(&___nl__im__197, generator_js_priv0print_register_value(___nl__im__198));
#line 260
c_rt_lib0clear(&___nl__im__198);
#line 260
c_rt_lib0move(&___nl__im__194, c_rt_lib0concat_new(___nl__im__195, ___nl__im__197));
#line 260
c_rt_lib0clear(&___nl__im__195);
#line 260
c_rt_lib0clear(&___nl__im__197);
#line 260
c_rt_lib0move(&___nl__im__199,___get_global_string_const(110));
#line 260
c_rt_lib0move(&___nl__im__193, c_rt_lib0concat_new(___nl__im__194, ___nl__im__199));
#line 260
c_rt_lib0clear(&___nl__im__194);
#line 260
c_rt_lib0clear(&___nl__im__199);
#line 260
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(605)));
#line 260
c_rt_lib0move(&___nl__im__192, c_rt_lib0concat_new(___nl__im__193, ___nl__im__200));
#line 260
c_rt_lib0clear(&___nl__im__193);
#line 260
c_rt_lib0clear(&___nl__im__200);
#line 260
c_rt_lib0move(&___nl__im__201,___get_global_string_const(442));
#line 260
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__192, ___nl__im__201));
#line 260
c_rt_lib0clear(&___nl__im__192);
#line 260
c_rt_lib0clear(&___nl__im__201);
#line 261
goto label_622;
#line 261
label_492:
;
#line 261
c_rt_lib0move(&___nl__im__203, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(256)));
#line 261
c_rt_lib0copy(&___nl__im__202, ___nl__im__203);
#line 262
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__202, ___get_global_string_const(362)));
#line 262
c_rt_lib0move(&___nl__im__204, generator_js_priv0print_register_to_assign(___nl__im__205));
#line 262
c_rt_lib0clear(&___nl__im__205);
#line 262
c_rt_lib0move(&___nl__im__206,___get_global_string_const(771));
#line 262
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__204, ___nl__im__206));
#line 262
c_rt_lib0clear(&___nl__im__204);
#line 262
c_rt_lib0clear(&___nl__im__206);
#line 263
goto label_622;
#line 263
label_503:
;
#line 263
c_rt_lib0move(&___nl__im__208, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(257)));
#line 263
c_rt_lib0copy(&___nl__im__207, ___nl__im__208);
#line 264
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_use_index(___nl__im__207));
#line 265
goto label_622;
#line 265
label_508:
;
#line 265
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(258)));
#line 265
c_rt_lib0copy(&___nl__im__209, ___nl__im__210);
#line 266
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__209, ___get_global_string_const(362)));
#line 266
c_rt_lib0move(&___nl__im__211, generator_js_priv0print_register_to_assign(___nl__im__212));
#line 266
c_rt_lib0clear(&___nl__im__212);
#line 266
c_rt_lib0move(&___nl__im__213,___get_global_string_const(771));
#line 266
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__211, ___nl__im__213));
#line 266
c_rt_lib0clear(&___nl__im__211);
#line 266
c_rt_lib0clear(&___nl__im__213);
#line 267
goto label_622;
#line 267
label_519:
;
#line 267
c_rt_lib0move(&___nl__im__215, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(259)));
#line 267
c_rt_lib0copy(&___nl__im__214, ___nl__im__215);
#line 268
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_use_hash_index(___nl__im__214));
#line 269
goto label_622;
#line 269
label_524:
;
#line 269
c_rt_lib0move(&___nl__im__217, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(260)));
#line 269
c_rt_lib0copy(&___nl__im__216, ___nl__im__217);
#line 270
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__216, ___get_global_string_const(362)));
#line 270
c_rt_lib0move(&___nl__im__218, generator_js_priv0print_register_to_assign(___nl__im__219));
#line 270
c_rt_lib0clear(&___nl__im__219);
#line 270
c_rt_lib0move(&___nl__im__220,___get_global_string_const(771));
#line 270
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__218, ___nl__im__220));
#line 270
c_rt_lib0clear(&___nl__im__218);
#line 270
c_rt_lib0clear(&___nl__im__220);
#line 271
goto label_622;
#line 271
label_535:
;
#line 271
c_rt_lib0move(&___nl__im__222, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(261)));
#line 271
c_rt_lib0copy(&___nl__im__221, ___nl__im__222);
#line 272
c_rt_lib0move(&___nl__im__230,___get_global_string_const(607));
#line 272
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(360)));
#line 272
c_rt_lib0move(&___nl__im__231, generator_js_priv0print_register_value(___nl__im__232));
#line 272
c_rt_lib0clear(&___nl__im__232);
#line 272
c_rt_lib0move(&___nl__im__229, c_rt_lib0concat_new(___nl__im__230, ___nl__im__231));
#line 272
c_rt_lib0clear(&___nl__im__230);
#line 272
c_rt_lib0clear(&___nl__im__231);
#line 272
c_rt_lib0move(&___nl__im__233,___get_global_string_const(772));
#line 272
c_rt_lib0move(&___nl__im__228, c_rt_lib0concat_new(___nl__im__229, ___nl__im__233));
#line 272
c_rt_lib0clear(&___nl__im__229);
#line 272
c_rt_lib0clear(&___nl__im__233);
#line 272
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(567)));
#line 272
___nl__int__234 = getIntFromImm(___nl__im__235);
#line 272
c_rt_lib0clear(&___nl__im__235);
#line 272
c_rt_lib0move(&___nl__string__236, c_rt_lib0int_to_string(___nl__int__234));
#line 272
c_rt_lib0move(&___nl__im__227, c_rt_lib0concat_new(___nl__im__228, ___nl__string__236));
#line 272
c_rt_lib0clear(&___nl__im__228);
#line 272
//clear ___nl__int__234;
#line 272
c_rt_lib0clear(&___nl__string__236);
#line 272
c_rt_lib0move(&___nl__im__237,___get_global_string_const(322));
#line 272
c_rt_lib0move(&___nl__im__226, c_rt_lib0concat_new(___nl__im__227, ___nl__im__237));
#line 272
c_rt_lib0clear(&___nl__im__227);
#line 272
c_rt_lib0clear(&___nl__im__237);
#line 273
c_rt_lib0move(&___nl__im__238, generator_js_priv0get_namespace_name());
#line 273
c_rt_lib0move(&___nl__im__225, c_rt_lib0concat_new(___nl__im__226, ___nl__im__238));
#line 273
c_rt_lib0clear(&___nl__im__226);
#line 273
c_rt_lib0clear(&___nl__im__238);
#line 273
c_rt_lib0move(&___nl__im__239,___get_global_string_const(765));
#line 273
c_rt_lib0move(&___nl__im__224, c_rt_lib0concat_new(___nl__im__225, ___nl__im__239));
#line 273
c_rt_lib0clear(&___nl__im__225);
#line 273
c_rt_lib0clear(&___nl__im__239);
#line 273
c_rt_lib0move(&___nl__im__240, string0lf());
#line 273
c_rt_lib0move(&___nl__im__223, c_rt_lib0concat_new(___nl__im__224, ___nl__im__240));
#line 273
c_rt_lib0clear(&___nl__im__224);
#line 273
c_rt_lib0clear(&___nl__im__240);
#line 273
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__223));
#line 273
c_rt_lib0clear(&___nl__im__223);
#line 274
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(361)));
#line 274
c_rt_lib0move(&___nl__im__243, generator_js_priv0print_register_to_assign(___nl__im__244));
#line 274
c_rt_lib0clear(&___nl__im__244);
#line 275
c_rt_lib0move(&___nl__im__246, c_rt_lib0hash_get_value_dec(___nl__im__221, ___get_global_string_const(360)));
#line 275
c_rt_lib0move(&___nl__im__245, generator_js_priv0print_register_value(___nl__im__246));
#line 275
c_rt_lib0clear(&___nl__im__246);
#line 275
c_rt_lib0move(&___nl__im__242, c_rt_lib0concat_new(___nl__im__243, ___nl__im__245));
#line 275
c_rt_lib0clear(&___nl__im__243);
#line 275
c_rt_lib0clear(&___nl__im__245);
#line 275
c_rt_lib0move(&___nl__im__247,___get_global_string_const(773));
#line 275
c_rt_lib0move(&___nl__im__241, c_rt_lib0concat_new(___nl__im__242, ___nl__im__247));
#line 275
c_rt_lib0clear(&___nl__im__242);
#line 275
c_rt_lib0clear(&___nl__im__247);
#line 275
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__241));
#line 275
c_rt_lib0clear(&___nl__im__241);
#line 276
goto label_622;
#line 276
label_591:
;
#line 276
c_rt_lib0move(&___nl__im__249, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(262)));
#line 276
c_rt_lib0copy(&___nl__im__248, ___nl__im__249);
#line 277
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__248, ___get_global_string_const(362)));
#line 277
c_rt_lib0move(&___nl__im__250, generator_js_priv0print_register_to_assign(___nl__im__251));
#line 277
c_rt_lib0clear(&___nl__im__251);
#line 277
c_rt_lib0move(&___nl__im__252,___get_global_string_const(771));
#line 277
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__250, ___nl__im__252));
#line 277
c_rt_lib0clear(&___nl__im__250);
#line 277
c_rt_lib0clear(&___nl__im__252);
#line 278
goto label_622;
#line 278
label_602:
;
#line 278
c_rt_lib0move(&___nl__im__254, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(263)));
#line 278
c_rt_lib0copy(&___nl__im__253, ___nl__im__254);
#line 279
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_init_iter(___nl__im__253, ___ref___int__2));
#line 280
goto label_622;
#line 280
label_607:
;
#line 280
c_rt_lib0move(&___nl__im__256, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(264)));
#line 280
c_rt_lib0copy(&___nl__im__255, ___nl__im__256);
#line 281
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_next_iter(___nl__im__255, ___ref___int__2));
#line 282
goto label_622;
#line 282
label_612:
;
#line 282
c_rt_lib0move(&___nl__im__258, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(265)));
#line 282
c_rt_lib0copy(&___nl__im__257, ___nl__im__258);
#line 283
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_get_key_iter(___nl__im__257, ___ref___int__2));
#line 284
goto label_622;
#line 284
label_617:
;
#line 284
c_rt_lib0move(&___nl__im__260, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(266)));
#line 284
c_rt_lib0copy(&___nl__im__259, ___nl__im__260);
#line 285
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_hash_is_end(___nl__im__259, ___ref___int__2));
#line 286
goto label_622;
#line 286
label_622:
;
#line 287
c_rt_lib0move(&___nl__im__265,___get_global_string_const(774));
#line 287
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 287
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_get_value_dec(___nl__im__269, ___get_global_string_const(551)));
#line 287
c_rt_lib0clear(&___nl__im__269);
#line 287
c_rt_lib0move(&___nl__im__267, c_rt_lib0hash_get_value_dec(___nl__im__268, ___get_global_string_const(552)));
#line 287
c_rt_lib0clear(&___nl__im__268);
#line 287
c_rt_lib0move(&___nl__im__270, c_rt_lib0hash_get_value_dec(___nl__im__267, ___get_global_string_const(154)));
#line 287
___nl__int__266 = getIntFromImm(___nl__im__270);
#line 287
c_rt_lib0clear(&___nl__im__267);
#line 287
c_rt_lib0clear(&___nl__im__270);
#line 287
c_rt_lib0move(&___nl__string__271, c_rt_lib0int_to_string(___nl__int__266));
#line 287
c_rt_lib0move(&___nl__im__264, c_rt_lib0concat_new(___nl__im__265, ___nl__string__271));
#line 287
c_rt_lib0clear(&___nl__im__265);
#line 287
//clear ___nl__int__266;
#line 287
c_rt_lib0clear(&___nl__string__271);
#line 287
c_rt_lib0move(&___nl__im__272, string0lf());
#line 287
c_rt_lib0move(&___nl__im__263, c_rt_lib0concat_new(___nl__im__264, ___nl__im__272));
#line 287
c_rt_lib0clear(&___nl__im__264);
#line 287
c_rt_lib0clear(&___nl__im__272);
#line 287
c_rt_lib0move(&___nl__im__262, c_rt_lib0concat_new(___nl__im__263, ___nl__im__4));
#line 287
c_rt_lib0clear(&___nl__im__263);
#line 287
c_rt_lib0move(&___nl__im__273, string0lf());
#line 287
c_rt_lib0move(&___nl__im__261, c_rt_lib0concat_new(___nl__im__262, ___nl__im__273));
#line 287
c_rt_lib0clear(&___nl__im__262);
#line 287
c_rt_lib0clear(&___nl__im__273);
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
c_rt_lib0clear(&___nl__im__4);
#line 287
c_rt_lib0clear(&___nl__im__5);
#line 287
//clear ___nl__bool__6;
#line 287
c_rt_lib0clear(&___nl__im__7);
#line 287
c_rt_lib0clear(&___nl__im__8);
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__18);
#line 287
c_rt_lib0clear(&___nl__im__19);
#line 287
c_rt_lib0clear(&___nl__im__28);
#line 287
c_rt_lib0clear(&___nl__im__29);
#line 287
c_rt_lib0clear(&___nl__im__38);
#line 287
c_rt_lib0clear(&___nl__im__39);
#line 287
c_rt_lib0clear(&___nl__im__44);
#line 287
c_rt_lib0clear(&___nl__im__45);
#line 287
c_rt_lib0clear(&___nl__im__54);
#line 287
c_rt_lib0clear(&___nl__im__55);
#line 287
c_rt_lib0clear(&___nl__im__56);
#line 287
c_rt_lib0clear(&___nl__im__57);
#line 287
c_rt_lib0clear(&___nl__im__58);
#line 287
c_rt_lib0clear(&___nl__im__59);
#line 287
c_rt_lib0clear(&___nl__im__65);
#line 287
c_rt_lib0clear(&___nl__im__66);
#line 287
c_rt_lib0clear(&___nl__im__80);
#line 287
c_rt_lib0clear(&___nl__im__81);
#line 287
c_rt_lib0clear(&___nl__im__82);
#line 287
c_rt_lib0clear(&___nl__im__83);
#line 287
c_rt_lib0clear(&___nl__im__86);
#line 287
c_rt_lib0clear(&___nl__im__87);
#line 287
c_rt_lib0clear(&___nl__im__90);
#line 287
c_rt_lib0clear(&___nl__im__91);
#line 287
c_rt_lib0clear(&___nl__im__94);
#line 287
c_rt_lib0clear(&___nl__im__95);
#line 287
c_rt_lib0clear(&___nl__im__107);
#line 287
c_rt_lib0clear(&___nl__im__108);
#line 287
c_rt_lib0clear(&___nl__im__122);
#line 287
c_rt_lib0clear(&___nl__im__123);
#line 287
c_rt_lib0clear(&___nl__im__126);
#line 287
c_rt_lib0clear(&___nl__im__127);
#line 287
c_rt_lib0clear(&___nl__im__130);
#line 287
c_rt_lib0clear(&___nl__im__131);
#line 287
c_rt_lib0clear(&___nl__im__146);
#line 287
c_rt_lib0clear(&___nl__im__147);
#line 287
c_rt_lib0clear(&___nl__im__161);
#line 287
c_rt_lib0clear(&___nl__im__162);
#line 287
//clear ___nl__int__163;
#line 287
c_rt_lib0clear(&___nl__im__164);
#line 287
c_rt_lib0clear(&___nl__im__169);
#line 287
c_rt_lib0clear(&___nl__im__170);
#line 287
//clear ___nl__int__182;
#line 287
c_rt_lib0clear(&___nl__im__183);
#line 287
c_rt_lib0clear(&___nl__im__184);
#line 287
c_rt_lib0clear(&___nl__im__185);
#line 287
c_rt_lib0clear(&___nl__im__188);
#line 287
c_rt_lib0clear(&___nl__im__189);
#line 287
c_rt_lib0clear(&___nl__im__190);
#line 287
c_rt_lib0clear(&___nl__im__191);
#line 287
c_rt_lib0clear(&___nl__im__202);
#line 287
c_rt_lib0clear(&___nl__im__203);
#line 287
c_rt_lib0clear(&___nl__im__207);
#line 287
c_rt_lib0clear(&___nl__im__208);
#line 287
c_rt_lib0clear(&___nl__im__209);
#line 287
c_rt_lib0clear(&___nl__im__210);
#line 287
c_rt_lib0clear(&___nl__im__214);
#line 287
c_rt_lib0clear(&___nl__im__215);
#line 287
c_rt_lib0clear(&___nl__im__216);
#line 287
c_rt_lib0clear(&___nl__im__217);
#line 287
c_rt_lib0clear(&___nl__im__221);
#line 287
c_rt_lib0clear(&___nl__im__222);
#line 287
c_rt_lib0clear(&___nl__im__248);
#line 287
c_rt_lib0clear(&___nl__im__249);
#line 287
c_rt_lib0clear(&___nl__im__253);
#line 287
c_rt_lib0clear(&___nl__im__254);
#line 287
c_rt_lib0clear(&___nl__im__255);
#line 287
c_rt_lib0clear(&___nl__im__256);
#line 287
c_rt_lib0clear(&___nl__im__257);
#line 287
c_rt_lib0clear(&___nl__im__258);
#line 287
c_rt_lib0clear(&___nl__im__259);
#line 287
c_rt_lib0clear(&___nl__im__260);
#line 287
return ___nl__im__261;
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
c_rt_lib0clear(&___nl__im__4);
#line 287
c_rt_lib0clear(&___nl__im__5);
#line 287
//clear ___nl__bool__6;
#line 287
c_rt_lib0clear(&___nl__im__7);
#line 287
c_rt_lib0clear(&___nl__im__8);
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__18);
#line 287
c_rt_lib0clear(&___nl__im__19);
#line 287
c_rt_lib0clear(&___nl__im__28);
#line 287
c_rt_lib0clear(&___nl__im__29);
#line 287
c_rt_lib0clear(&___nl__im__38);
#line 287
c_rt_lib0clear(&___nl__im__39);
#line 287
c_rt_lib0clear(&___nl__im__44);
#line 287
c_rt_lib0clear(&___nl__im__45);
#line 287
c_rt_lib0clear(&___nl__im__54);
#line 287
c_rt_lib0clear(&___nl__im__55);
#line 287
c_rt_lib0clear(&___nl__im__56);
#line 287
c_rt_lib0clear(&___nl__im__57);
#line 287
c_rt_lib0clear(&___nl__im__58);
#line 287
c_rt_lib0clear(&___nl__im__59);
#line 287
c_rt_lib0clear(&___nl__im__65);
#line 287
c_rt_lib0clear(&___nl__im__66);
#line 287
c_rt_lib0clear(&___nl__im__80);
#line 287
c_rt_lib0clear(&___nl__im__81);
#line 287
c_rt_lib0clear(&___nl__im__82);
#line 287
c_rt_lib0clear(&___nl__im__83);
#line 287
c_rt_lib0clear(&___nl__im__86);
#line 287
c_rt_lib0clear(&___nl__im__87);
#line 287
c_rt_lib0clear(&___nl__im__90);
#line 287
c_rt_lib0clear(&___nl__im__91);
#line 287
c_rt_lib0clear(&___nl__im__94);
#line 287
c_rt_lib0clear(&___nl__im__95);
#line 287
c_rt_lib0clear(&___nl__im__107);
#line 287
c_rt_lib0clear(&___nl__im__108);
#line 287
c_rt_lib0clear(&___nl__im__122);
#line 287
c_rt_lib0clear(&___nl__im__123);
#line 287
c_rt_lib0clear(&___nl__im__126);
#line 287
c_rt_lib0clear(&___nl__im__127);
#line 287
c_rt_lib0clear(&___nl__im__130);
#line 287
c_rt_lib0clear(&___nl__im__131);
#line 287
c_rt_lib0clear(&___nl__im__146);
#line 287
c_rt_lib0clear(&___nl__im__147);
#line 287
c_rt_lib0clear(&___nl__im__161);
#line 287
c_rt_lib0clear(&___nl__im__162);
#line 287
//clear ___nl__int__163;
#line 287
c_rt_lib0clear(&___nl__im__164);
#line 287
c_rt_lib0clear(&___nl__im__169);
#line 287
c_rt_lib0clear(&___nl__im__170);
#line 287
//clear ___nl__int__182;
#line 287
c_rt_lib0clear(&___nl__im__183);
#line 287
c_rt_lib0clear(&___nl__im__184);
#line 287
c_rt_lib0clear(&___nl__im__185);
#line 287
c_rt_lib0clear(&___nl__im__188);
#line 287
c_rt_lib0clear(&___nl__im__189);
#line 287
c_rt_lib0clear(&___nl__im__190);
#line 287
c_rt_lib0clear(&___nl__im__191);
#line 287
c_rt_lib0clear(&___nl__im__202);
#line 287
c_rt_lib0clear(&___nl__im__203);
#line 287
c_rt_lib0clear(&___nl__im__207);
#line 287
c_rt_lib0clear(&___nl__im__208);
#line 287
c_rt_lib0clear(&___nl__im__209);
#line 287
c_rt_lib0clear(&___nl__im__210);
#line 287
c_rt_lib0clear(&___nl__im__214);
#line 287
c_rt_lib0clear(&___nl__im__215);
#line 287
c_rt_lib0clear(&___nl__im__216);
#line 287
c_rt_lib0clear(&___nl__im__217);
#line 287
c_rt_lib0clear(&___nl__im__221);
#line 287
c_rt_lib0clear(&___nl__im__222);
#line 287
c_rt_lib0clear(&___nl__im__248);
#line 287
c_rt_lib0clear(&___nl__im__249);
#line 287
c_rt_lib0clear(&___nl__im__253);
#line 287
c_rt_lib0clear(&___nl__im__254);
#line 287
c_rt_lib0clear(&___nl__im__255);
#line 287
c_rt_lib0clear(&___nl__im__256);
#line 287
c_rt_lib0clear(&___nl__im__257);
#line 287
c_rt_lib0clear(&___nl__im__258);
#line 287
c_rt_lib0clear(&___nl__im__259);
#line 287
c_rt_lib0clear(&___nl__im__260);
#line 287
c_rt_lib0clear(&___nl__im__261);
#line 287
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
#line 291
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 291
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 291
c_rt_lib0clear(&___nl__im__4);
#line 291
___nl__bool__3 = !___nl__bool__3;
#line 291
if(___nl__bool__3){ goto label_11;}
#line 291
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__3;
#line 291
return ___nl__im__5;
#line 291
goto label_11;
#line 291
label_11:
;
#line 291
//clear ___nl__bool__3;
#line 291
c_rt_lib0clear(&___nl__im__5);
#line 292
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 292
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(422));
#line 292
c_rt_lib0clear(&___nl__im__8);
#line 292
___nl__bool__7 = !___nl__bool__6;
#line 292
if(___nl__bool__7){ goto label_22;}
#line 292
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 292
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(422));
#line 292
c_rt_lib0clear(&___nl__im__9);
#line 292
label_22:
;
#line 292
//clear ___nl__bool__7;
#line 292
___nl__bool__6 = !___nl__bool__6;
#line 292
if(___nl__bool__6){ goto label_40;}
#line 293
c_rt_lib0move(&___nl__im__12, generator_js_priv0print_register_to_assign(___nl__im__0));
#line 293
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register(___nl__im__1));
#line 293
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 293
c_rt_lib0clear(&___nl__im__12);
#line 293
c_rt_lib0clear(&___nl__im__13);
#line 293
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 293
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 293
c_rt_lib0clear(&___nl__im__11);
#line 293
c_rt_lib0clear(&___nl__im__14);
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
c_rt_lib0clear(&___nl__im__1);
#line 293
//clear ___nl__bool__6;
#line 293
return ___nl__im__10;
#line 294
goto label_40;
#line 294
label_40:
;
#line 294
//clear ___nl__bool__6;
#line 294
c_rt_lib0clear(&___nl__im__10);
#line 295
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 295
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(131));
#line 295
if(___nl__bool__16){ goto label_63;}
#line 297
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(405));
#line 297
if(___nl__bool__16){ goto label_80;}
#line 303
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(406));
#line 303
if(___nl__bool__16){ goto label_125;}
#line 305
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 305
if(___nl__bool__16){ goto label_143;}
#line 311
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(559));
#line 311
if(___nl__bool__16){ goto label_198;}
#line 317
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 317
if(___nl__bool__16){ goto label_232;}
#line 323
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(563));
#line 323
if(___nl__bool__16){ goto label_268;}
#line 325
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(128));
#line 325
if(___nl__bool__16){ goto label_274;}
#line 325
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 325
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 325
nl_die_arg(___nl__im__17);
#line 295
label_63:
;
#line 296
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 296
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 296
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value(___nl__im__1));
#line 296
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 296
c_rt_lib0clear(&___nl__im__21);
#line 296
c_rt_lib0clear(&___nl__im__22);
#line 296
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 296
c_rt_lib0clear(&___nl__im__19);
#line 296
c_rt_lib0clear(&___nl__im__20);
#line 296
c_rt_lib0clear(&___nl__im__0);
#line 296
c_rt_lib0clear(&___nl__im__1);
#line 296
c_rt_lib0clear(&___nl__im__15);
#line 296
//clear ___nl__bool__16;
#line 296
c_rt_lib0clear(&___nl__im__17);
#line 296
return ___nl__im__18;
#line 297
goto label_280;
#line 297
label_80:
;
#line 298
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 298
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(131));
#line 298
c_rt_lib0clear(&___nl__im__24);
#line 298
___nl__bool__23 = !___nl__bool__23;
#line 298
if(___nl__bool__23){ goto label_104;}
#line 299
c_rt_lib0move(&___nl__im__27, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 299
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_register_value(___nl__im__1));
#line 299
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 299
c_rt_lib0clear(&___nl__im__27);
#line 299
c_rt_lib0clear(&___nl__im__28);
#line 299
c_rt_lib0move(&___nl__im__29,___get_global_string_const(775));
#line 299
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 299
c_rt_lib0clear(&___nl__im__26);
#line 299
c_rt_lib0clear(&___nl__im__29);
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
c_rt_lib0clear(&___nl__im__15);
#line 299
//clear ___nl__bool__16;
#line 299
c_rt_lib0clear(&___nl__im__17);
#line 299
c_rt_lib0clear(&___nl__im__18);
#line 299
//clear ___nl__bool__23;
#line 299
return ___nl__im__25;
#line 300
goto label_120;
#line 300
label_104:
;
#line 301
c_rt_lib0move(&___nl__im__31, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 301
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_register_value(___nl__im__1));
#line 301
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 301
c_rt_lib0clear(&___nl__im__31);
#line 301
c_rt_lib0clear(&___nl__im__32);
#line 301
c_rt_lib0clear(&___nl__im__0);
#line 301
c_rt_lib0clear(&___nl__im__1);
#line 301
c_rt_lib0clear(&___nl__im__15);
#line 301
//clear ___nl__bool__16;
#line 301
c_rt_lib0clear(&___nl__im__17);
#line 301
c_rt_lib0clear(&___nl__im__18);
#line 301
//clear ___nl__bool__23;
#line 301
c_rt_lib0clear(&___nl__im__25);
#line 301
return ___nl__im__30;
#line 302
goto label_120;
#line 302
label_120:
;
#line 302
//clear ___nl__bool__23;
#line 302
c_rt_lib0clear(&___nl__im__25);
#line 302
c_rt_lib0clear(&___nl__im__30);
#line 303
goto label_280;
#line 303
label_125:
;
#line 304
c_rt_lib0move(&___nl__im__34, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 304
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 304
c_rt_lib0move(&___nl__im__37, generator_js_priv0print_register_value(___nl__im__1));
#line 304
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 304
c_rt_lib0clear(&___nl__im__36);
#line 304
c_rt_lib0clear(&___nl__im__37);
#line 304
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 304
c_rt_lib0clear(&___nl__im__34);
#line 304
c_rt_lib0clear(&___nl__im__35);
#line 304
c_rt_lib0clear(&___nl__im__0);
#line 304
c_rt_lib0clear(&___nl__im__1);
#line 304
c_rt_lib0clear(&___nl__im__15);
#line 304
//clear ___nl__bool__16;
#line 304
c_rt_lib0clear(&___nl__im__17);
#line 304
c_rt_lib0clear(&___nl__im__18);
#line 304
return ___nl__im__33;
#line 305
goto label_280;
#line 305
label_143:
;
#line 306
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 306
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(131));
#line 306
c_rt_lib0clear(&___nl__im__39);
#line 306
___nl__bool__38 = !___nl__bool__38;
#line 306
if(___nl__bool__38){ goto label_176;}
#line 307
c_rt_lib0move(&___nl__im__42, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 307
c_rt_lib0move(&___nl__im__44,___get_global_string_const(271));
#line 307
c_rt_lib0move(&___nl__im__45,___get_global_string_const(601));
#line 307
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 307
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 307
c_rt_lib0clear(&___nl__im__47);
#line 307
c_rt_lib0move(&___nl__im__43, generator_js_priv0print_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 307
c_rt_lib0clear(&___nl__im__44);
#line 307
c_rt_lib0clear(&___nl__im__45);
#line 307
c_rt_lib0clear(&___nl__im__46);
#line 307
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 307
c_rt_lib0clear(&___nl__im__42);
#line 307
c_rt_lib0clear(&___nl__im__43);
#line 307
c_rt_lib0move(&___nl__im__48,___get_global_string_const(442));
#line 307
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 307
c_rt_lib0clear(&___nl__im__41);
#line 307
c_rt_lib0clear(&___nl__im__48);
#line 307
c_rt_lib0clear(&___nl__im__0);
#line 307
c_rt_lib0clear(&___nl__im__1);
#line 307
c_rt_lib0clear(&___nl__im__15);
#line 307
//clear ___nl__bool__16;
#line 307
c_rt_lib0clear(&___nl__im__17);
#line 307
c_rt_lib0clear(&___nl__im__18);
#line 307
c_rt_lib0clear(&___nl__im__33);
#line 307
//clear ___nl__bool__38;
#line 307
return ___nl__im__40;
#line 308
goto label_193;
#line 308
label_176:
;
#line 309
c_rt_lib0move(&___nl__im__50, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 309
c_rt_lib0move(&___nl__im__51, generator_js_priv0print_register_value(___nl__im__1));
#line 309
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 309
c_rt_lib0clear(&___nl__im__50);
#line 309
c_rt_lib0clear(&___nl__im__51);
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
//clear ___nl__bool__38;
#line 309
c_rt_lib0clear(&___nl__im__40);
#line 309
return ___nl__im__49;
#line 310
goto label_193;
#line 310
label_193:
;
#line 310
//clear ___nl__bool__38;
#line 310
c_rt_lib0clear(&___nl__im__40);
#line 310
c_rt_lib0clear(&___nl__im__49);
#line 311
goto label_280;
#line 311
label_198:
;
#line 311
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(559)));
#line 311
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 312
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 312
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(559));
#line 312
c_rt_lib0clear(&___nl__im__55);
#line 312
___nl__bool__54 = !___nl__bool__54;
#line 312
if(___nl__bool__54){ goto label_223;}
#line 313
c_rt_lib0move(&___nl__im__57, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 313
c_rt_lib0move(&___nl__im__58, generator_js_priv0print_register_value(___nl__im__1));
#line 313
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 313
c_rt_lib0clear(&___nl__im__57);
#line 313
c_rt_lib0clear(&___nl__im__58);
#line 313
c_rt_lib0clear(&___nl__im__0);
#line 313
c_rt_lib0clear(&___nl__im__1);
#line 313
c_rt_lib0clear(&___nl__im__15);
#line 313
//clear ___nl__bool__16;
#line 313
c_rt_lib0clear(&___nl__im__17);
#line 313
c_rt_lib0clear(&___nl__im__18);
#line 313
c_rt_lib0clear(&___nl__im__33);
#line 313
c_rt_lib0clear(&___nl__im__52);
#line 313
c_rt_lib0clear(&___nl__im__53);
#line 313
//clear ___nl__bool__54;
#line 313
return ___nl__im__56;
#line 314
goto label_227;
#line 314
label_223:
;
#line 315
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 315
nl_die_arg(___nl__im__59);
#line 316
goto label_227;
#line 316
label_227:
;
#line 316
//clear ___nl__bool__54;
#line 316
c_rt_lib0clear(&___nl__im__56);
#line 316
c_rt_lib0clear(&___nl__im__59);
#line 317
goto label_280;
#line 317
label_232:
;
#line 317
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(127)));
#line 317
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 318
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 318
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(127));
#line 318
c_rt_lib0clear(&___nl__im__63);
#line 318
___nl__bool__62 = !___nl__bool__62;
#line 318
if(___nl__bool__62){ goto label_259;}
#line 319
c_rt_lib0move(&___nl__im__65, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 319
c_rt_lib0move(&___nl__im__66, generator_js_priv0print_register_value(___nl__im__1));
#line 319
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 319
c_rt_lib0clear(&___nl__im__65);
#line 319
c_rt_lib0clear(&___nl__im__66);
#line 319
c_rt_lib0clear(&___nl__im__0);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
c_rt_lib0clear(&___nl__im__15);
#line 319
//clear ___nl__bool__16;
#line 319
c_rt_lib0clear(&___nl__im__17);
#line 319
c_rt_lib0clear(&___nl__im__18);
#line 319
c_rt_lib0clear(&___nl__im__33);
#line 319
c_rt_lib0clear(&___nl__im__52);
#line 319
c_rt_lib0clear(&___nl__im__53);
#line 319
c_rt_lib0clear(&___nl__im__60);
#line 319
c_rt_lib0clear(&___nl__im__61);
#line 319
//clear ___nl__bool__62;
#line 319
return ___nl__im__64;
#line 320
goto label_263;
#line 320
label_259:
;
#line 321
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 321
nl_die_arg(___nl__im__67);
#line 322
goto label_263;
#line 322
label_263:
;
#line 322
//clear ___nl__bool__62;
#line 322
c_rt_lib0clear(&___nl__im__64);
#line 322
c_rt_lib0clear(&___nl__im__67);
#line 323
goto label_280;
#line 323
label_268:
;
#line 323
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(563)));
#line 323
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 324
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 324
nl_die_arg(___nl__im__70);
#line 325
goto label_280;
#line 325
label_274:
;
#line 325
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(128)));
#line 325
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 326
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 326
nl_die_arg(___nl__im__73);
#line 327
goto label_280;
#line 327
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
#line 331
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 331
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 331
if(___nl__bool__4){ goto label_20;}
#line 333
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(405));
#line 333
if(___nl__bool__4){ goto label_37;}
#line 335
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(406));
#line 335
if(___nl__bool__4){ goto label_53;}
#line 337
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 337
if(___nl__bool__4){ goto label_72;}
#line 339
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 339
if(___nl__bool__4){ goto label_99;}
#line 341
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 341
if(___nl__bool__4){ goto label_105;}
#line 343
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(563));
#line 343
if(___nl__bool__4){ goto label_111;}
#line 345
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 345
if(___nl__bool__4){ goto label_117;}
#line 345
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 345
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 345
nl_die_arg(___nl__im__5);
#line 331
label_20:
;
#line 332
c_rt_lib0move(&___nl__im__8, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 332
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 332
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 332
c_rt_lib0clear(&___nl__im__8);
#line 332
c_rt_lib0clear(&___nl__im__9);
#line 332
c_rt_lib0move(&___nl__im__10,___get_global_string_const(442));
#line 332
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 332
c_rt_lib0clear(&___nl__im__7);
#line 332
c_rt_lib0clear(&___nl__im__10);
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
return ___nl__im__6;
#line 333
goto label_123;
#line 333
label_37:
;
#line 334
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 334
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 334
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__14);
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
return ___nl__im__11;
#line 335
goto label_123;
#line 335
label_53:
;
#line 336
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 336
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 336
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 336
c_rt_lib0clear(&___nl__im__17);
#line 336
c_rt_lib0clear(&___nl__im__18);
#line 336
c_rt_lib0move(&___nl__im__19,___get_global_string_const(442));
#line 336
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 336
c_rt_lib0clear(&___nl__im__16);
#line 336
c_rt_lib0clear(&___nl__im__19);
#line 336
c_rt_lib0clear(&___nl__im__0);
#line 336
c_rt_lib0clear(&___nl__im__1);
#line 336
c_rt_lib0clear(&___nl__im__3);
#line 336
//clear ___nl__bool__4;
#line 336
c_rt_lib0clear(&___nl__im__5);
#line 336
c_rt_lib0clear(&___nl__im__6);
#line 336
c_rt_lib0clear(&___nl__im__11);
#line 336
return ___nl__im__15;
#line 337
goto label_123;
#line 337
label_72:
;
#line 338
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 338
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 338
if(___nl__bool__24){ goto label_78;}
#line 338
c_rt_lib0move(&___nl__im__23,___get_global_string_const(572));
#line 338
goto label_80;
#line 338
label_78:
;
#line 338
c_rt_lib0move(&___nl__im__23,___get_global_string_const(573));
#line 338
label_80:
;
#line 338
//clear ___nl__bool__24;
#line 338
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 338
c_rt_lib0clear(&___nl__im__22);
#line 338
c_rt_lib0clear(&___nl__im__23);
#line 338
c_rt_lib0move(&___nl__im__25,___get_global_string_const(442));
#line 338
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 338
c_rt_lib0clear(&___nl__im__21);
#line 338
c_rt_lib0clear(&___nl__im__25);
#line 338
c_rt_lib0clear(&___nl__im__0);
#line 338
c_rt_lib0clear(&___nl__im__1);
#line 338
c_rt_lib0clear(&___nl__im__3);
#line 338
//clear ___nl__bool__4;
#line 338
c_rt_lib0clear(&___nl__im__5);
#line 338
c_rt_lib0clear(&___nl__im__6);
#line 338
c_rt_lib0clear(&___nl__im__11);
#line 338
c_rt_lib0clear(&___nl__im__15);
#line 338
return ___nl__im__20;
#line 339
goto label_123;
#line 339
label_99:
;
#line 339
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(559)));
#line 339
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 340
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 340
nl_die_arg(___nl__im__28);
#line 341
goto label_123;
#line 341
label_105:
;
#line 341
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(127)));
#line 341
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 342
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 342
nl_die_arg(___nl__im__31);
#line 343
goto label_123;
#line 343
label_111:
;
#line 343
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(563)));
#line 343
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 344
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 344
nl_die_arg(___nl__im__34);
#line 345
goto label_123;
#line 345
label_117:
;
#line 345
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 345
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 346
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 346
nl_die_arg(___nl__im__37);
#line 347
goto label_123;
#line 347
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
#line 351
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 351
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 351
c_rt_lib0clear(&___nl__im__4);
#line 351
___nl__bool__3 = !___nl__bool__3;
#line 351
if(___nl__bool__3){ goto label_25;}
#line 352
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 352
c_rt_lib0move(&___nl__im__8,___get_global_string_const(243));
#line 353
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 353
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 353
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 353
c_rt_lib0clear(&___nl__im__10);
#line 353
c_rt_lib0clear(&___nl__im__11);
#line 353
c_rt_lib0move(&___nl__im__6, generator_js_priv0print_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 353
c_rt_lib0clear(&___nl__im__7);
#line 353
c_rt_lib0clear(&___nl__im__8);
#line 353
c_rt_lib0clear(&___nl__im__9);
#line 353
c_rt_lib0move(&___nl__im__12,___get_global_string_const(442));
#line 353
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 353
c_rt_lib0clear(&___nl__im__6);
#line 353
c_rt_lib0clear(&___nl__im__12);
#line 353
c_rt_lib0clear(&___nl__im__0);
#line 353
c_rt_lib0clear(&___nl__im__1);
#line 353
//clear ___nl__bool__3;
#line 353
return ___nl__im__5;
#line 354
goto label_54;
#line 354
label_25:
;
#line 354
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 354
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(127));
#line 354
c_rt_lib0clear(&___nl__im__13);
#line 354
___nl__bool__3 = !___nl__bool__3;
#line 354
if(___nl__bool__3){ goto label_50;}
#line 355
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_register_value(___nl__im__0));
#line 355
c_rt_lib0move(&___nl__im__18,___get_global_string_const(776));
#line 355
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 355
c_rt_lib0clear(&___nl__im__17);
#line 355
c_rt_lib0clear(&___nl__im__18);
#line 355
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_reference(___nl__im__1));
#line 355
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 355
c_rt_lib0clear(&___nl__im__16);
#line 355
c_rt_lib0clear(&___nl__im__19);
#line 355
c_rt_lib0move(&___nl__im__20,___get_global_string_const(508));
#line 355
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 355
c_rt_lib0clear(&___nl__im__15);
#line 355
c_rt_lib0clear(&___nl__im__20);
#line 355
c_rt_lib0clear(&___nl__im__0);
#line 355
c_rt_lib0clear(&___nl__im__1);
#line 355
//clear ___nl__bool__3;
#line 355
c_rt_lib0clear(&___nl__im__5);
#line 355
return ___nl__im__14;
#line 356
goto label_54;
#line 356
label_50:
;
#line 357
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 357
nl_die_arg(___nl__im__21);
#line 358
goto label_54;
#line 358
label_54:
;
#line 358
//clear ___nl__bool__3;
#line 358
c_rt_lib0clear(&___nl__im__5);
#line 358
c_rt_lib0clear(&___nl__im__14);
#line 358
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
#line 362
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 362
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 362
c_rt_lib0clear(&___nl__im__4);
#line 362
___nl__bool__3 = !___nl__bool__3;
#line 362
if(___nl__bool__3){ goto label_29;}
#line 363
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 363
c_rt_lib0move(&___nl__im__9,___get_global_string_const(271));
#line 363
c_rt_lib0move(&___nl__im__10,___get_global_string_const(244));
#line 364
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value(___nl__im__1));
#line 364
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__13));
#line 364
c_rt_lib0clear(&___nl__im__13);
#line 364
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 364
c_rt_lib0clear(&___nl__im__12);
#line 364
c_rt_lib0move(&___nl__im__8, generator_js_priv0print_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 364
c_rt_lib0clear(&___nl__im__9);
#line 364
c_rt_lib0clear(&___nl__im__10);
#line 364
c_rt_lib0clear(&___nl__im__11);
#line 364
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 364
c_rt_lib0clear(&___nl__im__7);
#line 364
c_rt_lib0clear(&___nl__im__8);
#line 364
c_rt_lib0move(&___nl__im__14,___get_global_string_const(442));
#line 364
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 364
c_rt_lib0clear(&___nl__im__6);
#line 364
c_rt_lib0clear(&___nl__im__14);
#line 364
c_rt_lib0clear(&___nl__im__0);
#line 364
c_rt_lib0clear(&___nl__im__1);
#line 364
//clear ___nl__bool__3;
#line 364
return ___nl__im__5;
#line 365
goto label_54;
#line 365
label_29:
;
#line 365
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 365
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 365
c_rt_lib0clear(&___nl__im__15);
#line 365
___nl__bool__3 = !___nl__bool__3;
#line 365
if(___nl__bool__3){ goto label_50;}
#line 366
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 366
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value(___nl__im__1));
#line 366
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 366
c_rt_lib0clear(&___nl__im__18);
#line 366
c_rt_lib0clear(&___nl__im__19);
#line 366
c_rt_lib0move(&___nl__im__20,___get_global_string_const(777));
#line 366
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 366
c_rt_lib0clear(&___nl__im__17);
#line 366
c_rt_lib0clear(&___nl__im__20);
#line 366
c_rt_lib0clear(&___nl__im__0);
#line 366
c_rt_lib0clear(&___nl__im__1);
#line 366
//clear ___nl__bool__3;
#line 366
c_rt_lib0clear(&___nl__im__5);
#line 366
return ___nl__im__16;
#line 367
goto label_54;
#line 367
label_50:
;
#line 368
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 368
nl_die_arg(___nl__im__21);
#line 369
goto label_54;
#line 369
label_54:
;
#line 369
//clear ___nl__bool__3;
#line 369
c_rt_lib0clear(&___nl__im__5);
#line 369
c_rt_lib0clear(&___nl__im__16);
#line 369
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
#line 373
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 373
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(206)));
#line 373
c_rt_lib0clear(&___nl__im__3);
#line 373
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 373
c_rt_lib0clear(&___nl__im__2);
#line 373
___nl__bool__1 = !___nl__bool__1;
#line 373
if(___nl__bool__1){ goto label_34;}
#line 374
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 374
c_rt_lib0move(&___nl__im__8, generator_js_priv0print_register_to_assign(___nl__im__9));
#line 374
c_rt_lib0clear(&___nl__im__9);
#line 374
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 374
c_rt_lib0move(&___nl__im__10, generator_js_priv0print_register_value(___nl__im__11));
#line 374
c_rt_lib0clear(&___nl__im__11);
#line 374
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 374
c_rt_lib0clear(&___nl__im__8);
#line 374
c_rt_lib0clear(&___nl__im__10);
#line 374
c_rt_lib0move(&___nl__im__12,___get_global_string_const(316));
#line 374
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 374
c_rt_lib0clear(&___nl__im__7);
#line 374
c_rt_lib0clear(&___nl__im__12);
#line 375
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 375
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value(___nl__im__14));
#line 375
c_rt_lib0clear(&___nl__im__14);
#line 375
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 375
c_rt_lib0clear(&___nl__im__6);
#line 375
c_rt_lib0clear(&___nl__im__13);
#line 375
c_rt_lib0move(&___nl__im__15,___get_global_string_const(778));
#line 375
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 375
c_rt_lib0clear(&___nl__im__5);
#line 375
c_rt_lib0clear(&___nl__im__15);
#line 375
c_rt_lib0clear(&___nl__im__0);
#line 375
//clear ___nl__bool__1;
#line 375
return ___nl__im__4;
#line 376
goto label_74;
#line 376
label_34:
;
#line 376
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 376
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 376
c_rt_lib0clear(&___nl__im__17);
#line 376
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(131));
#line 376
c_rt_lib0clear(&___nl__im__16);
#line 376
___nl__bool__1 = !___nl__bool__1;
#line 376
if(___nl__bool__1){ goto label_70;}
#line 377
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 377
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_to_assign(___nl__im__23));
#line 377
c_rt_lib0clear(&___nl__im__23);
#line 377
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 377
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__25));
#line 377
c_rt_lib0clear(&___nl__im__25);
#line 377
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 377
c_rt_lib0clear(&___nl__im__22);
#line 377
c_rt_lib0clear(&___nl__im__24);
#line 378
c_rt_lib0move(&___nl__im__26,___get_global_string_const(766));
#line 378
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 378
c_rt_lib0clear(&___nl__im__21);
#line 378
c_rt_lib0clear(&___nl__im__26);
#line 378
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 378
c_rt_lib0move(&___nl__im__27, generator_js_priv0print_register_value(___nl__im__28));
#line 378
c_rt_lib0clear(&___nl__im__28);
#line 378
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 378
c_rt_lib0clear(&___nl__im__20);
#line 378
c_rt_lib0clear(&___nl__im__27);
#line 378
c_rt_lib0move(&___nl__im__29,___get_global_string_const(508));
#line 378
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 378
c_rt_lib0clear(&___nl__im__19);
#line 378
c_rt_lib0clear(&___nl__im__29);
#line 378
c_rt_lib0clear(&___nl__im__0);
#line 378
//clear ___nl__bool__1;
#line 378
c_rt_lib0clear(&___nl__im__4);
#line 378
return ___nl__im__18;
#line 379
goto label_74;
#line 379
label_70:
;
#line 380
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 380
nl_die_arg(___nl__im__30);
#line 381
goto label_74;
#line 381
label_74:
;
#line 381
//clear ___nl__bool__1;
#line 381
c_rt_lib0clear(&___nl__im__4);
#line 381
c_rt_lib0clear(&___nl__im__18);
#line 381
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
#line 385
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 386
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(363)));
#line 386
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_register_value(___nl__im__4));
#line 386
c_rt_lib0clear(&___nl__im__4);
#line 386
c_rt_lib0move(&___nl__im__5,___get_global_string_const(779));
#line 386
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 386
c_rt_lib0clear(&___nl__im__3);
#line 386
c_rt_lib0clear(&___nl__im__5);
#line 387
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(606)));
#line 387
___nl__bool__6 = c_rt_lib0check_true_native(___nl__im__7);
#line 387
c_rt_lib0clear(&___nl__im__7);
#line 387
___nl__bool__6 = !___nl__bool__6;
#line 387
if(___nl__bool__6){ goto label_37;}
#line 388
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 388
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register_value(___nl__im__14));
#line 388
c_rt_lib0clear(&___nl__im__14);
#line 388
c_rt_lib0move(&___nl__im__15,___get_global_string_const(316));
#line 388
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 388
c_rt_lib0clear(&___nl__im__13);
#line 388
c_rt_lib0clear(&___nl__im__15);
#line 388
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__2));
#line 388
c_rt_lib0clear(&___nl__im__12);
#line 388
c_rt_lib0move(&___nl__im__16,___get_global_string_const(518));
#line 388
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 388
c_rt_lib0clear(&___nl__im__11);
#line 388
c_rt_lib0clear(&___nl__im__16);
#line 389
c_rt_lib0move(&___nl__im__17,___get_global_string_const(780));
#line 389
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 389
c_rt_lib0clear(&___nl__im__10);
#line 389
c_rt_lib0clear(&___nl__im__17);
#line 389
c_rt_lib0move(&___nl__im__18, string0lf());
#line 389
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 389
c_rt_lib0clear(&___nl__im__9);
#line 389
c_rt_lib0clear(&___nl__im__18);
#line 389
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__8));
#line 389
c_rt_lib0clear(&___nl__im__8);
#line 390
goto label_37;
#line 390
label_37:
;
#line 390
//clear ___nl__bool__6;
#line 391
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 391
c_rt_lib0move(&___nl__im__23, generator_js_priv0print_register_to_assign(___nl__im__24));
#line 391
c_rt_lib0clear(&___nl__im__24);
#line 392
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(360)));
#line 392
c_rt_lib0move(&___nl__im__25, generator_js_priv0print_register_value(___nl__im__26));
#line 392
c_rt_lib0clear(&___nl__im__26);
#line 392
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 392
c_rt_lib0clear(&___nl__im__23);
#line 392
c_rt_lib0clear(&___nl__im__25);
#line 392
c_rt_lib0move(&___nl__im__27,___get_global_string_const(316));
#line 392
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__27));
#line 392
c_rt_lib0clear(&___nl__im__22);
#line 392
c_rt_lib0clear(&___nl__im__27);
#line 392
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__2));
#line 392
c_rt_lib0clear(&___nl__im__21);
#line 392
c_rt_lib0move(&___nl__im__28,___get_global_string_const(778));
#line 392
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__28));
#line 392
c_rt_lib0clear(&___nl__im__20);
#line 392
c_rt_lib0clear(&___nl__im__28);
#line 392
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 392
c_rt_lib0clear(&___nl__im__19);
#line 393
c_rt_lib0clear(&___nl__im__0);
#line 393
c_rt_lib0clear(&___nl__im__2);
#line 393
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
#line 397
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 397
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 397
c_rt_lib0clear(&___nl__im__4);
#line 397
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 397
c_rt_lib0clear(&___nl__im__3);
#line 397
___nl__bool__2 = !___nl__bool__2;
#line 397
if(___nl__bool__2){ goto label_32;}
#line 398
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 398
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_value_to_assign(___nl__im__8));
#line 398
c_rt_lib0clear(&___nl__im__8);
#line 399
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 399
c_rt_lib0move(&___nl__im__11,___get_global_string_const(272));
#line 399
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 399
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 399
c_rt_lib0clear(&___nl__im__14);
#line 399
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 399
c_rt_lib0clear(&___nl__im__13);
#line 399
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 399
c_rt_lib0clear(&___nl__im__10);
#line 399
c_rt_lib0clear(&___nl__im__11);
#line 399
c_rt_lib0clear(&___nl__im__12);
#line 399
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 399
c_rt_lib0clear(&___nl__im__7);
#line 399
c_rt_lib0clear(&___nl__im__9);
#line 399
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 399
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 399
c_rt_lib0clear(&___nl__im__6);
#line 399
c_rt_lib0clear(&___nl__im__15);
#line 399
c_rt_lib0clear(&___nl__im__0);
#line 399
//clear ___nl__bool__2;
#line 399
return ___nl__im__5;
#line 400
goto label_56;
#line 400
label_32:
;
#line 400
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 400
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 400
c_rt_lib0clear(&___nl__im__17);
#line 400
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 400
c_rt_lib0clear(&___nl__im__16);
#line 400
___nl__bool__2 = !___nl__bool__2;
#line 400
if(___nl__bool__2){ goto label_52;}
#line 401
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 401
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value_to_assign(___nl__im__20));
#line 401
c_rt_lib0clear(&___nl__im__20);
#line 401
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 401
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 401
c_rt_lib0clear(&___nl__im__19);
#line 401
c_rt_lib0clear(&___nl__im__21);
#line 401
c_rt_lib0clear(&___nl__im__0);
#line 401
//clear ___nl__bool__2;
#line 401
c_rt_lib0clear(&___nl__im__5);
#line 401
return ___nl__im__18;
#line 402
goto label_56;
#line 402
label_52:
;
#line 403
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 403
nl_die_arg(___nl__im__22);
#line 404
goto label_56;
#line 404
label_56:
;
#line 404
//clear ___nl__bool__2;
#line 404
c_rt_lib0clear(&___nl__im__5);
#line 404
c_rt_lib0clear(&___nl__im__18);
#line 404
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
#line 408
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 408
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 408
c_rt_lib0clear(&___nl__im__4);
#line 408
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 408
c_rt_lib0clear(&___nl__im__3);
#line 408
___nl__bool__2 = !___nl__bool__2;
#line 408
if(___nl__bool__2){ goto label_32;}
#line 409
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 409
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__8));
#line 409
c_rt_lib0clear(&___nl__im__8);
#line 410
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 410
c_rt_lib0move(&___nl__im__11,___get_global_string_const(275));
#line 410
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 410
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 410
c_rt_lib0clear(&___nl__im__14);
#line 410
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 410
c_rt_lib0clear(&___nl__im__13);
#line 410
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 410
c_rt_lib0clear(&___nl__im__10);
#line 410
c_rt_lib0clear(&___nl__im__11);
#line 410
c_rt_lib0clear(&___nl__im__12);
#line 410
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 410
c_rt_lib0clear(&___nl__im__7);
#line 410
c_rt_lib0clear(&___nl__im__9);
#line 410
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 410
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 410
c_rt_lib0clear(&___nl__im__6);
#line 410
c_rt_lib0clear(&___nl__im__15);
#line 410
c_rt_lib0clear(&___nl__im__0);
#line 410
//clear ___nl__bool__2;
#line 410
return ___nl__im__5;
#line 411
goto label_56;
#line 411
label_32:
;
#line 411
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 411
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 411
c_rt_lib0clear(&___nl__im__17);
#line 411
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 411
c_rt_lib0clear(&___nl__im__16);
#line 411
___nl__bool__2 = !___nl__bool__2;
#line 411
if(___nl__bool__2){ goto label_52;}
#line 412
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 412
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value(___nl__im__20));
#line 412
c_rt_lib0clear(&___nl__im__20);
#line 412
c_rt_lib0move(&___nl__im__21,___get_global_string_const(781));
#line 412
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 412
c_rt_lib0clear(&___nl__im__19);
#line 412
c_rt_lib0clear(&___nl__im__21);
#line 412
c_rt_lib0clear(&___nl__im__0);
#line 412
//clear ___nl__bool__2;
#line 412
c_rt_lib0clear(&___nl__im__5);
#line 412
return ___nl__im__18;
#line 413
goto label_56;
#line 413
label_52:
;
#line 414
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 414
nl_die_arg(___nl__im__22);
#line 415
goto label_56;
#line 415
label_56:
;
#line 415
//clear ___nl__bool__2;
#line 415
c_rt_lib0clear(&___nl__im__5);
#line 415
c_rt_lib0clear(&___nl__im__18);
#line 415
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
#line 419
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 419
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 419
c_rt_lib0clear(&___nl__im__4);
#line 419
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 419
c_rt_lib0clear(&___nl__im__3);
#line 419
___nl__bool__2 = !___nl__bool__2;
#line 419
if(___nl__bool__2){ goto label_32;}
#line 420
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 420
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__8));
#line 420
c_rt_lib0clear(&___nl__im__8);
#line 421
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 421
c_rt_lib0move(&___nl__im__11,___get_global_string_const(274));
#line 421
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 421
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 421
c_rt_lib0clear(&___nl__im__14);
#line 421
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 421
c_rt_lib0clear(&___nl__im__13);
#line 421
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 421
c_rt_lib0clear(&___nl__im__10);
#line 421
c_rt_lib0clear(&___nl__im__11);
#line 421
c_rt_lib0clear(&___nl__im__12);
#line 421
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 421
c_rt_lib0clear(&___nl__im__7);
#line 421
c_rt_lib0clear(&___nl__im__9);
#line 421
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 421
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 421
c_rt_lib0clear(&___nl__im__6);
#line 421
c_rt_lib0clear(&___nl__im__15);
#line 421
c_rt_lib0clear(&___nl__im__0);
#line 421
//clear ___nl__bool__2;
#line 421
return ___nl__im__5;
#line 422
goto label_82;
#line 422
label_32:
;
#line 422
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 422
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 422
c_rt_lib0clear(&___nl__im__17);
#line 422
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 422
c_rt_lib0clear(&___nl__im__16);
#line 422
___nl__bool__2 = !___nl__bool__2;
#line 422
if(___nl__bool__2){ goto label_78;}
#line 423
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 423
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_register_value(___nl__im__19));
#line 423
c_rt_lib0clear(&___nl__im__19);
#line 424
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 424
c_rt_lib0move(&___nl__im__26, generator_js_priv0print_register_value_to_assign(___nl__im__27));
#line 424
c_rt_lib0clear(&___nl__im__27);
#line 425
c_rt_lib0move(&___nl__im__29,___get_global_string_const(282));
#line 425
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 425
c_rt_lib0clear(&___nl__im__29);
#line 425
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 425
c_rt_lib0clear(&___nl__im__26);
#line 425
c_rt_lib0clear(&___nl__im__28);
#line 425
c_rt_lib0move(&___nl__im__30,___get_global_string_const(782));
#line 425
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 425
c_rt_lib0clear(&___nl__im__25);
#line 425
c_rt_lib0clear(&___nl__im__30);
#line 425
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 425
c_rt_lib0clear(&___nl__im__24);
#line 425
c_rt_lib0move(&___nl__im__31,___get_global_string_const(783));
#line 425
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 425
c_rt_lib0clear(&___nl__im__23);
#line 425
c_rt_lib0clear(&___nl__im__31);
#line 425
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 425
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_register_value(___nl__im__33));
#line 425
c_rt_lib0clear(&___nl__im__33);
#line 425
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 425
c_rt_lib0clear(&___nl__im__22);
#line 425
c_rt_lib0clear(&___nl__im__32);
#line 425
c_rt_lib0move(&___nl__im__34,___get_global_string_const(784));
#line 425
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 425
c_rt_lib0clear(&___nl__im__21);
#line 425
c_rt_lib0clear(&___nl__im__34);
#line 425
c_rt_lib0clear(&___nl__im__0);
#line 425
//clear ___nl__bool__2;
#line 425
c_rt_lib0clear(&___nl__im__5);
#line 425
c_rt_lib0clear(&___nl__im__18);
#line 425
return ___nl__im__20;
#line 426
goto label_82;
#line 426
label_78:
;
#line 427
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 427
nl_die_arg(___nl__im__35);
#line 428
goto label_82;
#line 428
label_82:
;
#line 428
//clear ___nl__bool__2;
#line 428
c_rt_lib0clear(&___nl__im__5);
#line 428
c_rt_lib0clear(&___nl__im__18);
#line 428
c_rt_lib0clear(&___nl__im__20);
#line 428
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
#line 432
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 432
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 432
c_rt_lib0clear(&___nl__im__4);
#line 432
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 432
c_rt_lib0clear(&___nl__im__3);
#line 432
___nl__bool__2 = !___nl__bool__2;
#line 432
if(___nl__bool__2){ goto label_32;}
#line 433
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 433
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__8));
#line 433
c_rt_lib0clear(&___nl__im__8);
#line 434
c_rt_lib0move(&___nl__im__10,___get_global_string_const(271));
#line 434
c_rt_lib0move(&___nl__im__11,___get_global_string_const(273));
#line 434
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 434
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__14));
#line 434
c_rt_lib0clear(&___nl__im__14);
#line 434
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 434
c_rt_lib0clear(&___nl__im__13);
#line 434
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 434
c_rt_lib0clear(&___nl__im__10);
#line 434
c_rt_lib0clear(&___nl__im__11);
#line 434
c_rt_lib0clear(&___nl__im__12);
#line 434
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 434
c_rt_lib0clear(&___nl__im__7);
#line 434
c_rt_lib0clear(&___nl__im__9);
#line 434
c_rt_lib0move(&___nl__im__15,___get_global_string_const(442));
#line 434
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 434
c_rt_lib0clear(&___nl__im__6);
#line 434
c_rt_lib0clear(&___nl__im__15);
#line 434
c_rt_lib0clear(&___nl__im__0);
#line 434
//clear ___nl__bool__2;
#line 434
return ___nl__im__5;
#line 435
goto label_72;
#line 435
label_32:
;
#line 435
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 435
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 435
c_rt_lib0clear(&___nl__im__17);
#line 435
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(128));
#line 435
c_rt_lib0clear(&___nl__im__16);
#line 435
___nl__bool__2 = !___nl__bool__2;
#line 435
if(___nl__bool__2){ goto label_68;}
#line 436
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 436
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value_to_assign(___nl__im__23));
#line 436
c_rt_lib0clear(&___nl__im__23);
#line 437
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 437
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__25));
#line 437
c_rt_lib0clear(&___nl__im__25);
#line 437
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 437
c_rt_lib0clear(&___nl__im__22);
#line 437
c_rt_lib0clear(&___nl__im__24);
#line 437
c_rt_lib0move(&___nl__im__26,___get_global_string_const(785));
#line 437
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 437
c_rt_lib0clear(&___nl__im__21);
#line 437
c_rt_lib0clear(&___nl__im__26);
#line 437
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 437
c_rt_lib0move(&___nl__im__27, generator_js_priv0print_register_value(___nl__im__28));
#line 437
c_rt_lib0clear(&___nl__im__28);
#line 437
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 437
c_rt_lib0clear(&___nl__im__20);
#line 437
c_rt_lib0clear(&___nl__im__27);
#line 437
c_rt_lib0move(&___nl__im__29,___get_global_string_const(786));
#line 437
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 437
c_rt_lib0clear(&___nl__im__19);
#line 437
c_rt_lib0clear(&___nl__im__29);
#line 437
c_rt_lib0clear(&___nl__im__0);
#line 437
//clear ___nl__bool__2;
#line 437
c_rt_lib0clear(&___nl__im__5);
#line 437
return ___nl__im__18;
#line 438
goto label_72;
#line 438
label_68:
;
#line 439
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 439
nl_die_arg(___nl__im__30);
#line 440
goto label_72;
#line 440
label_72:
;
#line 440
//clear ___nl__bool__2;
#line 440
c_rt_lib0clear(&___nl__im__5);
#line 440
c_rt_lib0clear(&___nl__im__18);
#line 440
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
#line 444
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 445
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 445
___nl__bool__3 = !___nl__bool__3;
#line 445
if(___nl__bool__3){ goto label_36;}
#line 446
c_rt_lib0move(&___nl__im__6,___get_global_string_const(127));
#line 446
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 446
c_rt_lib0clear(&___nl__im__6);
#line 446
c_rt_lib0move(&___nl__im__7,___get_global_string_const(787));
#line 446
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 446
c_rt_lib0clear(&___nl__im__5);
#line 446
c_rt_lib0clear(&___nl__im__7);
#line 446
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 446
c_rt_lib0clear(&___nl__im__4);
#line 447
___nl__int__9 = 0;
#line 447
___nl__int__10 = 1;
#line 447
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 447
label_16:
;
#line 447
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 447
if(___nl__bool__12){ goto label_31;}
#line 447
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 447
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 447
c_rt_lib0move(&___nl__im__15, generator_js_priv0print_register_value(___nl__im__8));
#line 447
c_rt_lib0move(&___nl__im__16,___get_global_string_const(314));
#line 447
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 447
c_rt_lib0clear(&___nl__im__15);
#line 447
c_rt_lib0clear(&___nl__im__16);
#line 447
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 447
c_rt_lib0clear(&___nl__im__14);
#line 447
c_rt_lib0clear(&___nl__im__8);
#line 447
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 447
goto label_16;
#line 447
label_31:
;
#line 448
c_rt_lib0move(&___nl__im__17,___get_global_string_const(500));
#line 448
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 448
c_rt_lib0clear(&___nl__im__17);
#line 449
goto label_70;
#line 449
label_36:
;
#line 449
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(127));
#line 449
___nl__bool__3 = !___nl__bool__3;
#line 449
if(___nl__bool__3){ goto label_66;}
#line 450
c_rt_lib0move(&___nl__im__18,___get_global_string_const(316));
#line 450
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 450
c_rt_lib0clear(&___nl__im__18);
#line 451
___nl__int__20 = 0;
#line 451
___nl__int__21 = 1;
#line 451
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 451
label_46:
;
#line 451
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 451
if(___nl__bool__23){ goto label_61;}
#line 451
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 451
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 451
c_rt_lib0move(&___nl__im__26, generator_js_priv0print_register_reference(___nl__im__19));
#line 451
c_rt_lib0move(&___nl__im__27,___get_global_string_const(314));
#line 451
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 451
c_rt_lib0clear(&___nl__im__26);
#line 451
c_rt_lib0clear(&___nl__im__27);
#line 451
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 451
c_rt_lib0clear(&___nl__im__25);
#line 451
c_rt_lib0clear(&___nl__im__19);
#line 451
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 451
goto label_46;
#line 451
label_61:
;
#line 452
c_rt_lib0move(&___nl__im__28,___get_global_string_const(317));
#line 452
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 452
c_rt_lib0clear(&___nl__im__28);
#line 453
goto label_70;
#line 453
label_66:
;
#line 454
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 454
nl_die_arg(___nl__im__29);
#line 455
goto label_70;
#line 455
label_70:
;
#line 455
//clear ___nl__bool__3;
#line 455
c_rt_lib0clear(&___nl__im__8);
#line 455
//clear ___nl__int__9;
#line 455
//clear ___nl__int__10;
#line 455
//clear ___nl__int__11;
#line 455
//clear ___nl__bool__12;
#line 455
c_rt_lib0clear(&___nl__im__13);
#line 455
c_rt_lib0clear(&___nl__im__19);
#line 455
//clear ___nl__int__20;
#line 455
//clear ___nl__int__21;
#line 455
//clear ___nl__int__22;
#line 455
//clear ___nl__bool__23;
#line 455
c_rt_lib0clear(&___nl__im__24);
#line 455
c_rt_lib0clear(&___nl__im__29);
#line 456
c_rt_lib0clear(&___nl__im__0);
#line 456
c_rt_lib0clear(&___nl__im__1);
#line 456
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
#line 460
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 460
c_rt_lib0move(&___nl__im__4,___get_global_string_const(788));
#line 460
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 460
c_rt_lib0clear(&___nl__im__3);
#line 460
c_rt_lib0clear(&___nl__im__4);
#line 460
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 460
c_rt_lib0clear(&___nl__im__2);
#line 460
c_rt_lib0clear(&___nl__im__0);
#line 460
return ___nl__im__1;
#line 460
c_rt_lib0clear(&___nl__im__0);
#line 460
c_rt_lib0clear(&___nl__im__1);
#line 460
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
#line 464
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 464
c_rt_lib0move(&___nl__im__2, generator_js_priv0print_register_value_to_assign(___nl__im__3));
#line 464
c_rt_lib0clear(&___nl__im__3);
#line 465
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 465
c_rt_lib0move(&___nl__im__6,___get_global_string_const(389));
#line 465
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 465
c_rt_lib0clear(&___nl__im__5);
#line 465
c_rt_lib0clear(&___nl__im__6);
#line 465
if(___nl__bool__4){ goto label_14;}
#line 465
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 465
c_rt_lib0move(&___nl__im__8,___get_global_string_const(379));
#line 465
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 465
c_rt_lib0clear(&___nl__im__7);
#line 465
c_rt_lib0clear(&___nl__im__8);
#line 465
label_14:
;
#line 465
if(___nl__bool__4){ goto label_21;}
#line 465
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 465
c_rt_lib0move(&___nl__im__10,___get_global_string_const(381));
#line 465
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 465
c_rt_lib0clear(&___nl__im__9);
#line 465
c_rt_lib0clear(&___nl__im__10);
#line 465
label_21:
;
#line 465
if(___nl__bool__4){ goto label_28;}
#line 465
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 465
c_rt_lib0move(&___nl__im__12,___get_global_string_const(387));
#line 465
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 465
c_rt_lib0clear(&___nl__im__11);
#line 465
c_rt_lib0clear(&___nl__im__12);
#line 465
label_28:
;
#line 465
if(___nl__bool__4){ goto label_35;}
#line 465
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 465
c_rt_lib0move(&___nl__im__14,___get_global_string_const(383));
#line 465
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 465
c_rt_lib0clear(&___nl__im__13);
#line 465
c_rt_lib0clear(&___nl__im__14);
#line 465
label_35:
;
#line 465
if(___nl__bool__4){ goto label_42;}
#line 466
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 466
c_rt_lib0move(&___nl__im__16,___get_global_string_const(385));
#line 466
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 466
c_rt_lib0clear(&___nl__im__15);
#line 466
c_rt_lib0clear(&___nl__im__16);
#line 466
label_42:
;
#line 466
___nl__bool__4 = !___nl__bool__4;
#line 466
if(___nl__bool__4){ goto label_69;}
#line 467
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 467
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_register_value(___nl__im__18));
#line 467
c_rt_lib0clear(&___nl__im__18);
#line 468
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 468
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_value(___nl__im__20));
#line 468
c_rt_lib0clear(&___nl__im__20);
#line 469
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 469
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 469
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 469
c_rt_lib0clear(&___nl__im__24);
#line 469
c_rt_lib0clear(&___nl__im__25);
#line 469
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 469
c_rt_lib0clear(&___nl__im__23);
#line 469
c_rt_lib0move(&___nl__im__26,___get_global_string_const(442));
#line 469
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 469
c_rt_lib0clear(&___nl__im__22);
#line 469
c_rt_lib0clear(&___nl__im__26);
#line 469
c_rt_lib0clear(&___nl__im__0);
#line 469
c_rt_lib0clear(&___nl__im__2);
#line 469
//clear ___nl__bool__4;
#line 469
c_rt_lib0clear(&___nl__im__17);
#line 469
c_rt_lib0clear(&___nl__im__19);
#line 469
return ___nl__im__21;
#line 470
goto label_181;
#line 470
label_69:
;
#line 470
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 470
c_rt_lib0move(&___nl__im__28,___get_global_string_const(371));
#line 470
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 470
c_rt_lib0clear(&___nl__im__27);
#line 470
c_rt_lib0clear(&___nl__im__28);
#line 470
if(___nl__bool__4){ goto label_81;}
#line 470
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 470
c_rt_lib0move(&___nl__im__30,___get_global_string_const(372));
#line 470
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 470
c_rt_lib0clear(&___nl__im__29);
#line 470
c_rt_lib0clear(&___nl__im__30);
#line 470
label_81:
;
#line 470
___nl__bool__4 = !___nl__bool__4;
#line 470
if(___nl__bool__4){ goto label_105;}
#line 471
c_rt_lib0move(&___nl__im__33,___get_global_string_const(271));
#line 471
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 471
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 471
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 471
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 471
c_rt_lib0clear(&___nl__im__36);
#line 471
c_rt_lib0clear(&___nl__im__37);
#line 471
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 471
c_rt_lib0clear(&___nl__im__33);
#line 471
c_rt_lib0clear(&___nl__im__34);
#line 471
c_rt_lib0clear(&___nl__im__35);
#line 471
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 471
c_rt_lib0clear(&___nl__im__32);
#line 471
c_rt_lib0clear(&___nl__im__0);
#line 471
c_rt_lib0clear(&___nl__im__2);
#line 471
//clear ___nl__bool__4;
#line 471
c_rt_lib0clear(&___nl__im__17);
#line 471
c_rt_lib0clear(&___nl__im__19);
#line 471
c_rt_lib0clear(&___nl__im__21);
#line 471
return ___nl__im__31;
#line 472
goto label_181;
#line 472
label_105:
;
#line 472
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 472
c_rt_lib0move(&___nl__im__39,___get_global_string_const(110));
#line 472
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 472
c_rt_lib0clear(&___nl__im__38);
#line 472
c_rt_lib0clear(&___nl__im__39);
#line 472
___nl__bool__4 = !___nl__bool__4;
#line 472
if(___nl__bool__4){ goto label_147;}
#line 473
c_rt_lib0move(&___nl__im__43,___get_global_string_const(271));
#line 473
c_rt_lib0move(&___nl__im__44,___get_global_string_const(789));
#line 474
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 474
c_rt_lib0move(&___nl__im__47, generator_js_priv0print_register_value(___nl__im__48));
#line 474
c_rt_lib0clear(&___nl__im__48);
#line 474
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__47));
#line 474
c_rt_lib0clear(&___nl__im__47);
#line 474
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 474
c_rt_lib0move(&___nl__im__50, generator_js_priv0print_register_value(___nl__im__51));
#line 474
c_rt_lib0clear(&___nl__im__51);
#line 474
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__50));
#line 474
c_rt_lib0clear(&___nl__im__50);
#line 474
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 474
c_rt_lib0clear(&___nl__im__46);
#line 474
c_rt_lib0clear(&___nl__im__49);
#line 474
c_rt_lib0move(&___nl__im__42, generator_js_priv0print_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 474
c_rt_lib0clear(&___nl__im__43);
#line 474
c_rt_lib0clear(&___nl__im__44);
#line 474
c_rt_lib0clear(&___nl__im__45);
#line 474
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 474
c_rt_lib0clear(&___nl__im__42);
#line 474
c_rt_lib0move(&___nl__im__52,___get_global_string_const(442));
#line 474
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 474
c_rt_lib0clear(&___nl__im__41);
#line 474
c_rt_lib0clear(&___nl__im__52);
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
return ___nl__im__40;
#line 475
goto label_181;
#line 475
label_147:
;
#line 476
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(276)));
#line 476
c_rt_lib0move(&___nl__im__53, generator_js_priv0print_register_value(___nl__im__54));
#line 476
c_rt_lib0clear(&___nl__im__54);
#line 477
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 477
c_rt_lib0move(&___nl__im__55, generator_js_priv0print_register_value(___nl__im__56));
#line 477
c_rt_lib0clear(&___nl__im__56);
#line 478
c_rt_lib0move(&___nl__im__62,___get_global_string_const(790));
#line 478
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 478
c_rt_lib0clear(&___nl__im__62);
#line 478
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 478
c_rt_lib0clear(&___nl__im__61);
#line 478
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 478
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 478
c_rt_lib0clear(&___nl__im__60);
#line 478
c_rt_lib0clear(&___nl__im__63);
#line 478
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 478
c_rt_lib0clear(&___nl__im__59);
#line 478
c_rt_lib0move(&___nl__im__64,___get_global_string_const(508));
#line 478
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 478
c_rt_lib0clear(&___nl__im__58);
#line 478
c_rt_lib0clear(&___nl__im__64);
#line 478
c_rt_lib0clear(&___nl__im__0);
#line 478
c_rt_lib0clear(&___nl__im__2);
#line 478
//clear ___nl__bool__4;
#line 478
c_rt_lib0clear(&___nl__im__17);
#line 478
c_rt_lib0clear(&___nl__im__19);
#line 478
c_rt_lib0clear(&___nl__im__21);
#line 478
c_rt_lib0clear(&___nl__im__31);
#line 478
c_rt_lib0clear(&___nl__im__40);
#line 478
c_rt_lib0clear(&___nl__im__53);
#line 478
c_rt_lib0clear(&___nl__im__55);
#line 478
return ___nl__im__57;
#line 479
goto label_181;
#line 479
label_181:
;
#line 479
//clear ___nl__bool__4;
#line 479
c_rt_lib0clear(&___nl__im__17);
#line 479
c_rt_lib0clear(&___nl__im__19);
#line 479
c_rt_lib0clear(&___nl__im__21);
#line 479
c_rt_lib0clear(&___nl__im__31);
#line 479
c_rt_lib0clear(&___nl__im__40);
#line 479
c_rt_lib0clear(&___nl__im__53);
#line 479
c_rt_lib0clear(&___nl__im__55);
#line 479
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
#line 485
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_value_to_assign(___nl__im__3));
#line 485
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 485
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 485
c_rt_lib0clear(&___nl__im__7);
#line 485
c_rt_lib0clear(&___nl__im__8);
#line 485
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 485
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 485
c_rt_lib0clear(&___nl__im__6);
#line 485
c_rt_lib0clear(&___nl__im__9);
#line 486
___nl__int__10 = 0;
#line 487
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 488
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 489
___nl__int__14 = 0;
#line 489
___nl__int__15 = 1;
#line 489
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 489
label_15:
;
#line 489
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 489
if(___nl__bool__17){ goto label_58;}
#line 489
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 489
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 490
___nl__int__20 = 0;
#line 490
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 490
//clear ___nl__int__20;
#line 490
___nl__bool__19 = !___nl__bool__19;
#line 490
___nl__bool__19 = !___nl__bool__19;
#line 490
if(___nl__bool__19){ goto label_30;}
#line 490
c_rt_lib0move(&___nl__im__21,___get_global_string_const(314));
#line 490
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 490
c_rt_lib0clear(&___nl__im__21);
#line 490
goto label_30;
#line 490
label_30:
;
#line 490
//clear ___nl__bool__19;
#line 491
___nl__int__22 = 1;
#line 491
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 491
//clear ___nl__int__22;
#line 492
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 492
if(___nl__bool__23){ goto label_42;}
#line 494
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(225));
#line 494
if(___nl__bool__23){ goto label_47;}
#line 494
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 494
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 494
nl_die_arg(___nl__im__24);
#line 492
label_42:
;
#line 492
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 492
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 493
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 494
goto label_54;
#line 494
label_47:
;
#line 494
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(225)));
#line 494
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 495
c_rt_lib0move(&___nl__im__29, generator_js_priv0print_register_value(___nl__im__27));
#line 495
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 495
c_rt_lib0clear(&___nl__im__29);
#line 496
goto label_54;
#line 496
label_54:
;
#line 496
c_rt_lib0clear(&___nl__im__13);
#line 497
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 497
goto label_15;
#line 497
label_58:
;
#line 498
___nl__int__30 = 1;
#line 498
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 498
//clear ___nl__int__30;
#line 499
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 499
c_rt_lib0move(&___nl__im__34,___get_global_string_const(508));
#line 499
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 499
c_rt_lib0clear(&___nl__im__33);
#line 499
c_rt_lib0clear(&___nl__im__34);
#line 499
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 499
c_rt_lib0clear(&___nl__im__32);
#line 499
c_rt_lib0clear(&___nl__im__0);
#line 499
c_rt_lib0clear(&___nl__im__1);
#line 499
c_rt_lib0clear(&___nl__im__2);
#line 499
c_rt_lib0clear(&___nl__im__3);
#line 499
c_rt_lib0clear(&___nl__im__5);
#line 499
//clear ___nl__int__10;
#line 499
c_rt_lib0clear(&___nl__im__11);
#line 499
c_rt_lib0clear(&___nl__im__12);
#line 499
c_rt_lib0clear(&___nl__im__13);
#line 499
//clear ___nl__int__14;
#line 499
//clear ___nl__int__15;
#line 499
//clear ___nl__int__16;
#line 499
//clear ___nl__bool__17;
#line 499
c_rt_lib0clear(&___nl__im__18);
#line 499
//clear ___nl__bool__23;
#line 499
c_rt_lib0clear(&___nl__im__24);
#line 499
c_rt_lib0clear(&___nl__im__25);
#line 499
c_rt_lib0clear(&___nl__im__26);
#line 499
c_rt_lib0clear(&___nl__im__27);
#line 499
c_rt_lib0clear(&___nl__im__28);
#line 499
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
#line 503
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 503
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_register_value_to_assign(___nl__im__4));
#line 503
c_rt_lib0clear(&___nl__im__4);
#line 504
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 504
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(206)));
#line 504
c_rt_lib0clear(&___nl__im__7);
#line 504
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 504
c_rt_lib0clear(&___nl__im__6);
#line 504
___nl__bool__5 = !___nl__bool__5;
#line 504
if(___nl__bool__5){ goto label_73;}
#line 505
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 505
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(279));
#line 505
if(___nl__bool__9){ goto label_18;}
#line 508
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(352));
#line 508
if(___nl__bool__9){ goto label_52;}
#line 508
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 508
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 508
nl_die_arg(___nl__im__10);
#line 505
label_18:
;
#line 505
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(279)));
#line 505
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 506
c_rt_lib0move(&___nl__im__16,___get_global_string_const(271));
#line 506
c_rt_lib0move(&___nl__im__17,___get_global_string_const(580));
#line 507
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 507
c_rt_lib0move(&___nl__im__20, generator_js_priv0print_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 507
c_rt_lib0clear(&___nl__im__21);
#line 507
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__20));
#line 507
c_rt_lib0clear(&___nl__im__20);
#line 507
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__11));
#line 507
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 507
c_rt_lib0clear(&___nl__im__19);
#line 507
c_rt_lib0clear(&___nl__im__22);
#line 507
c_rt_lib0move(&___nl__im__15, generator_js_priv0print_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 507
c_rt_lib0clear(&___nl__im__16);
#line 507
c_rt_lib0clear(&___nl__im__17);
#line 507
c_rt_lib0clear(&___nl__im__18);
#line 507
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 507
c_rt_lib0clear(&___nl__im__15);
#line 507
c_rt_lib0move(&___nl__im__23,___get_global_string_const(442));
#line 507
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 507
c_rt_lib0clear(&___nl__im__14);
#line 507
c_rt_lib0clear(&___nl__im__23);
#line 507
c_rt_lib0clear(&___nl__im__0);
#line 507
c_rt_lib0clear(&___nl__im__3);
#line 507
//clear ___nl__bool__5;
#line 507
c_rt_lib0clear(&___nl__im__8);
#line 507
//clear ___nl__bool__9;
#line 507
c_rt_lib0clear(&___nl__im__10);
#line 507
c_rt_lib0clear(&___nl__im__11);
#line 507
c_rt_lib0clear(&___nl__im__12);
#line 507
return ___nl__im__13;
#line 508
goto label_71;
#line 508
label_52:
;
#line 509
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(562)));
#line 509
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 509
c_rt_lib0clear(&___nl__im__27);
#line 509
c_rt_lib0move(&___nl__im__25, generator_js_priv0print_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 509
c_rt_lib0clear(&___nl__im__26);
#line 509
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 509
c_rt_lib0clear(&___nl__im__25);
#line 509
c_rt_lib0clear(&___nl__im__0);
#line 509
c_rt_lib0clear(&___nl__im__3);
#line 509
//clear ___nl__bool__5;
#line 509
c_rt_lib0clear(&___nl__im__8);
#line 509
//clear ___nl__bool__9;
#line 509
c_rt_lib0clear(&___nl__im__10);
#line 509
c_rt_lib0clear(&___nl__im__11);
#line 509
c_rt_lib0clear(&___nl__im__12);
#line 509
c_rt_lib0clear(&___nl__im__13);
#line 509
return ___nl__im__24;
#line 510
goto label_71;
#line 510
label_71:
;
#line 511
goto label_137;
#line 511
label_73:
;
#line 511
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 511
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(206)));
#line 511
c_rt_lib0clear(&___nl__im__29);
#line 511
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(563));
#line 511
c_rt_lib0clear(&___nl__im__28);
#line 511
___nl__bool__5 = !___nl__bool__5;
#line 511
if(___nl__bool__5){ goto label_133;}
#line 512
c_rt_lib0move(&___nl__im__31,___get_global_string_const(791));
#line 512
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(567)));
#line 512
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 512
c_rt_lib0clear(&___nl__im__33);
#line 512
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 512
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 512
c_rt_lib0clear(&___nl__im__31);
#line 512
//clear ___nl__int__32;
#line 512
c_rt_lib0clear(&___nl__string__34);
#line 512
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 512
c_rt_lib0clear(&___nl__im__30);
#line 513
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 513
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(279));
#line 513
if(___nl__bool__36){ goto label_100;}
#line 515
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(352));
#line 515
if(___nl__bool__36){ goto label_111;}
#line 515
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 515
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 515
nl_die_arg(___nl__im__37);
#line 513
label_100:
;
#line 513
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(279)));
#line 513
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 514
c_rt_lib0move(&___nl__im__41,___get_global_string_const(792));
#line 514
c_rt_lib0move(&___nl__im__42, generator_js_priv0print_register_reference(___nl__im__38));
#line 514
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 514
c_rt_lib0clear(&___nl__im__41);
#line 514
c_rt_lib0clear(&___nl__im__42);
#line 514
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 514
c_rt_lib0clear(&___nl__im__40);
#line 515
goto label_113;
#line 515
label_111:
;
#line 516
goto label_113;
#line 516
label_113:
;
#line 517
c_rt_lib0move(&___nl__im__43,___get_global_string_const(307));
#line 517
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 517
c_rt_lib0clear(&___nl__im__43);
#line 518
c_rt_lib0clear(&___nl__im__0);
#line 518
//clear ___nl__bool__5;
#line 518
c_rt_lib0clear(&___nl__im__8);
#line 518
//clear ___nl__bool__9;
#line 518
c_rt_lib0clear(&___nl__im__10);
#line 518
c_rt_lib0clear(&___nl__im__11);
#line 518
c_rt_lib0clear(&___nl__im__12);
#line 518
c_rt_lib0clear(&___nl__im__13);
#line 518
c_rt_lib0clear(&___nl__im__24);
#line 518
c_rt_lib0clear(&___nl__im__35);
#line 518
//clear ___nl__bool__36;
#line 518
c_rt_lib0clear(&___nl__im__37);
#line 518
c_rt_lib0clear(&___nl__im__38);
#line 518
c_rt_lib0clear(&___nl__im__39);
#line 518
return ___nl__im__3;
#line 519
goto label_137;
#line 519
label_133:
;
#line 520
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 520
nl_die_arg(___nl__im__44);
#line 521
goto label_137;
#line 521
label_137:
;
#line 521
//clear ___nl__bool__5;
#line 521
c_rt_lib0clear(&___nl__im__8);
#line 521
//clear ___nl__bool__9;
#line 521
c_rt_lib0clear(&___nl__im__10);
#line 521
c_rt_lib0clear(&___nl__im__11);
#line 521
c_rt_lib0clear(&___nl__im__12);
#line 521
c_rt_lib0clear(&___nl__im__13);
#line 521
c_rt_lib0clear(&___nl__im__24);
#line 521
c_rt_lib0clear(&___nl__im__35);
#line 521
//clear ___nl__bool__36;
#line 521
c_rt_lib0clear(&___nl__im__37);
#line 521
c_rt_lib0clear(&___nl__im__38);
#line 521
c_rt_lib0clear(&___nl__im__39);
#line 521
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
#line 526
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 526
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(131));
#line 526
c_rt_lib0clear(&___nl__im__7);
#line 526
___nl__bool__6 = !___nl__bool__6;
#line 526
if(___nl__bool__6){ goto label_33;}
#line 527
c_rt_lib0move(&___nl__im__10, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 527
c_rt_lib0move(&___nl__im__12,___get_global_string_const(271));
#line 527
c_rt_lib0move(&___nl__im__13,___get_global_string_const(237));
#line 528
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(347), ___nl__im__1));
#line 528
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_str_imm(___nl__im__2, ___ref___im__5));
#line 528
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__17));
#line 528
c_rt_lib0clear(&___nl__im__17);
#line 528
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 528
c_rt_lib0clear(&___nl__im__15);
#line 528
c_rt_lib0clear(&___nl__im__16);
#line 528
c_rt_lib0move(&___nl__im__11, generator_js_priv0print_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 528
c_rt_lib0clear(&___nl__im__12);
#line 528
c_rt_lib0clear(&___nl__im__13);
#line 528
c_rt_lib0clear(&___nl__im__14);
#line 528
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 528
c_rt_lib0clear(&___nl__im__10);
#line 528
c_rt_lib0clear(&___nl__im__11);
#line 528
c_rt_lib0move(&___nl__im__18,___get_global_string_const(442));
#line 528
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 528
c_rt_lib0clear(&___nl__im__9);
#line 528
c_rt_lib0clear(&___nl__im__18);
#line 528
c_rt_lib0clear(&___nl__im__0);
#line 528
c_rt_lib0clear(&___nl__im__1);
#line 528
c_rt_lib0clear(&___nl__im__2);
#line 528
//clear ___nl__int__3;
#line 528
//clear ___nl__bool__6;
#line 528
return ___nl__im__8;
#line 529
goto label_64;
#line 529
label_33:
;
#line 529
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 529
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(563));
#line 529
c_rt_lib0clear(&___nl__im__19);
#line 529
___nl__bool__6 = !___nl__bool__6;
#line 529
if(___nl__bool__6){ goto label_60;}
#line 530
c_rt_lib0move(&___nl__im__23, generator_js_priv0print_register_value_to_assign(___nl__im__0));
#line 530
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__1));
#line 530
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 530
c_rt_lib0clear(&___nl__im__23);
#line 530
c_rt_lib0clear(&___nl__im__24);
#line 530
c_rt_lib0move(&___nl__im__25,___get_global_string_const(793));
#line 530
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 530
c_rt_lib0clear(&___nl__im__22);
#line 530
c_rt_lib0clear(&___nl__im__25);
#line 530
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 530
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 530
c_rt_lib0clear(&___nl__im__21);
#line 530
c_rt_lib0clear(&___nl__string__26);
#line 530
c_rt_lib0clear(&___nl__im__0);
#line 530
c_rt_lib0clear(&___nl__im__1);
#line 530
c_rt_lib0clear(&___nl__im__2);
#line 530
//clear ___nl__int__3;
#line 530
//clear ___nl__bool__6;
#line 530
c_rt_lib0clear(&___nl__im__8);
#line 530
return ___nl__im__20;
#line 531
goto label_64;
#line 531
label_60:
;
#line 532
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 532
nl_die_arg(___nl__im__27);
#line 533
goto label_64;
#line 533
label_64:
;
#line 533
//clear ___nl__bool__6;
#line 533
c_rt_lib0clear(&___nl__im__8);
#line 533
c_rt_lib0clear(&___nl__im__20);
#line 533
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
#line 538
c_rt_lib0move(&___nl__im__9,___get_global_string_const(794));
#line 538
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 538
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 538
c_rt_lib0clear(&___nl__im__9);
#line 538
c_rt_lib0clear(&___nl__string__10);
#line 538
c_rt_lib0move(&___nl__im__11,___get_global_string_const(107));
#line 538
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 538
c_rt_lib0clear(&___nl__im__8);
#line 538
c_rt_lib0clear(&___nl__im__11);
#line 538
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 538
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 538
c_rt_lib0clear(&___nl__im__7);
#line 538
c_rt_lib0clear(&___nl__string__12);
#line 539
c_rt_lib0move(&___nl__im__19,___get_global_string_const(728));
#line 539
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 539
c_rt_lib0clear(&___nl__im__19);
#line 539
c_rt_lib0move(&___nl__im__20,___get_global_string_const(795));
#line 539
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 539
c_rt_lib0clear(&___nl__im__18);
#line 539
c_rt_lib0clear(&___nl__im__20);
#line 539
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 539
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 539
c_rt_lib0clear(&___nl__im__22);
#line 539
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 539
c_rt_lib0clear(&___nl__im__17);
#line 539
c_rt_lib0clear(&___nl__im__21);
#line 539
c_rt_lib0move(&___nl__im__23,___get_global_string_const(457));
#line 539
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 539
c_rt_lib0clear(&___nl__im__16);
#line 539
c_rt_lib0clear(&___nl__im__23);
#line 539
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register_value(___nl__im__3));
#line 539
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 539
c_rt_lib0clear(&___nl__im__15);
#line 539
c_rt_lib0clear(&___nl__im__24);
#line 539
c_rt_lib0move(&___nl__im__25,___get_global_string_const(508));
#line 539
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 539
c_rt_lib0clear(&___nl__im__14);
#line 539
c_rt_lib0clear(&___nl__im__25);
#line 539
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 539
c_rt_lib0clear(&___nl__im__13);
#line 540
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 541
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_register_value_to_assign(___nl__im__3));
#line 541
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 541
c_rt_lib0clear(&___nl__im__28);
#line 541
c_rt_lib0move(&___nl__im__29,___get_global_string_const(759));
#line 541
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 541
c_rt_lib0clear(&___nl__im__27);
#line 541
c_rt_lib0clear(&___nl__im__29);
#line 541
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 541
c_rt_lib0clear(&___nl__im__26);
#line 542
c_rt_lib0move(&___nl__im__31,___get_global_string_const(761));
#line 542
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 542
c_rt_lib0clear(&___nl__im__31);
#line 542
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 542
c_rt_lib0clear(&___nl__im__30);
#line 542
c_rt_lib0clear(&___nl__im__3);
#line 542
//clear ___nl__int__4;
#line 542
//clear ___nl__int__5;
#line 542
c_rt_lib0clear(&___nl__im__6);
#line 542
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
#line 548
___nl__int__4 = 0;
#line 549
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 550
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 551
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 551
c_rt_lib0move(&___nl__im__13,___get_global_string_const(110));
#line 551
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 551
c_rt_lib0clear(&___nl__im__12);
#line 551
c_rt_lib0clear(&___nl__im__13);
#line 551
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 551
c_rt_lib0clear(&___nl__im__11);
#line 551
c_rt_lib0move(&___nl__im__14,___get_global_string_const(110));
#line 551
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 551
c_rt_lib0clear(&___nl__im__10);
#line 551
c_rt_lib0clear(&___nl__im__14);
#line 551
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 551
c_rt_lib0clear(&___nl__im__9);
#line 551
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 551
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 551
c_rt_lib0clear(&___nl__im__8);
#line 551
c_rt_lib0clear(&___nl__im__15);
#line 552
___nl__int__17 = 0;
#line 552
___nl__int__18 = 1;
#line 552
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 552
label_23:
;
#line 552
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 552
if(___nl__bool__20){ goto label_73;}
#line 552
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 552
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 553
___nl__int__23 = 0;
#line 553
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 553
//clear ___nl__int__23;
#line 553
___nl__bool__22 = !___nl__bool__22;
#line 553
___nl__bool__22 = !___nl__bool__22;
#line 553
if(___nl__bool__22){ goto label_38;}
#line 553
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 553
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 553
c_rt_lib0clear(&___nl__im__24);
#line 553
goto label_38;
#line 553
label_38:
;
#line 553
//clear ___nl__bool__22;
#line 554
___nl__int__25 = 1;
#line 554
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 554
//clear ___nl__int__25;
#line 555
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 555
if(___nl__bool__26){ goto label_52;}
#line 557
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(347));
#line 557
if(___nl__bool__26){ goto label_57;}
#line 559
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(282));
#line 559
if(___nl__bool__26){ goto label_64;}
#line 559
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 559
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 559
nl_die_arg(___nl__im__27);
#line 555
label_52:
;
#line 555
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 555
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 556
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 557
goto label_69;
#line 557
label_57:
;
#line 557
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(347)));
#line 557
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 558
c_rt_lib0move(&___nl__im__32, generator_js_priv0print_register_value(___nl__im__30));
#line 558
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 558
c_rt_lib0clear(&___nl__im__32);
#line 559
goto label_69;
#line 559
label_64:
;
#line 559
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(282)));
#line 559
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 560
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 561
goto label_69;
#line 561
label_69:
;
#line 561
c_rt_lib0clear(&___nl__im__16);
#line 562
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 562
goto label_23;
#line 562
label_73:
;
#line 563
___nl__int__35 = 1;
#line 563
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 563
//clear ___nl__int__35;
#line 564
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 564
c_rt_lib0move(&___nl__im__39,___get_global_string_const(508));
#line 564
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 564
c_rt_lib0clear(&___nl__im__38);
#line 564
c_rt_lib0clear(&___nl__im__39);
#line 564
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 564
c_rt_lib0clear(&___nl__im__37);
#line 564
c_rt_lib0clear(&___nl__im__0);
#line 564
c_rt_lib0clear(&___nl__im__1);
#line 564
c_rt_lib0clear(&___nl__im__2);
#line 564
//clear ___nl__int__4;
#line 564
c_rt_lib0clear(&___nl__im__5);
#line 564
c_rt_lib0clear(&___nl__im__6);
#line 564
c_rt_lib0clear(&___nl__im__7);
#line 564
c_rt_lib0clear(&___nl__im__16);
#line 564
//clear ___nl__int__17;
#line 564
//clear ___nl__int__18;
#line 564
//clear ___nl__int__19;
#line 564
//clear ___nl__bool__20;
#line 564
c_rt_lib0clear(&___nl__im__21);
#line 564
//clear ___nl__bool__26;
#line 564
c_rt_lib0clear(&___nl__im__27);
#line 564
c_rt_lib0clear(&___nl__im__28);
#line 564
c_rt_lib0clear(&___nl__im__29);
#line 564
c_rt_lib0clear(&___nl__im__30);
#line 564
c_rt_lib0clear(&___nl__im__31);
#line 564
c_rt_lib0clear(&___nl__im__33);
#line 564
c_rt_lib0clear(&___nl__im__34);
#line 564
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
#line 568
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 569
___nl__int__5 = 0;
#line 569
___nl__int__6 = 1;
#line 569
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 569
label_4:
;
#line 569
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 569
if(___nl__bool__8){ goto label_15;}
#line 569
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 569
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 570
c_rt_lib0move(&___nl__im__10, generator_js_priv0print_register_value(___nl__im__4));
#line 570
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 570
c_rt_lib0clear(&___nl__im__10);
#line 570
c_rt_lib0clear(&___nl__im__4);
#line 571
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 571
goto label_4;
#line 571
label_15:
;
#line 572
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 572
c_rt_lib0move(&___nl__im__19,___get_global_string_const(110));
#line 572
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 572
c_rt_lib0clear(&___nl__im__18);
#line 572
c_rt_lib0clear(&___nl__im__19);
#line 572
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 572
c_rt_lib0clear(&___nl__im__17);
#line 572
c_rt_lib0move(&___nl__im__20,___get_global_string_const(110));
#line 572
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 572
c_rt_lib0clear(&___nl__im__16);
#line 572
c_rt_lib0clear(&___nl__im__20);
#line 572
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 572
c_rt_lib0clear(&___nl__im__15);
#line 572
c_rt_lib0move(&___nl__im__21,___get_global_string_const(457));
#line 572
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 572
c_rt_lib0clear(&___nl__im__14);
#line 572
c_rt_lib0clear(&___nl__im__21);
#line 572
c_rt_lib0move(&___nl__im__23,___get_global_string_const(328));
#line 572
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 572
c_rt_lib0clear(&___nl__im__23);
#line 572
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 572
c_rt_lib0clear(&___nl__im__13);
#line 572
c_rt_lib0clear(&___nl__im__22);
#line 572
c_rt_lib0move(&___nl__im__24,___get_global_string_const(322));
#line 572
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 572
c_rt_lib0clear(&___nl__im__12);
#line 572
c_rt_lib0clear(&___nl__im__24);
#line 572
c_rt_lib0clear(&___nl__im__0);
#line 572
c_rt_lib0clear(&___nl__im__1);
#line 572
c_rt_lib0clear(&___nl__im__2);
#line 572
c_rt_lib0clear(&___nl__im__3);
#line 572
c_rt_lib0clear(&___nl__im__4);
#line 572
//clear ___nl__int__5;
#line 572
//clear ___nl__int__6;
#line 572
//clear ___nl__int__7;
#line 572
//clear ___nl__bool__8;
#line 572
c_rt_lib0clear(&___nl__im__9);
#line 572
return ___nl__im__11;
#line 572
c_rt_lib0clear(&___nl__im__0);
#line 572
c_rt_lib0clear(&___nl__im__1);
#line 572
c_rt_lib0clear(&___nl__im__2);
#line 572
c_rt_lib0clear(&___nl__im__3);
#line 572
c_rt_lib0clear(&___nl__im__4);
#line 572
//clear ___nl__int__5;
#line 572
//clear ___nl__int__6;
#line 572
//clear ___nl__int__7;
#line 572
//clear ___nl__bool__8;
#line 572
c_rt_lib0clear(&___nl__im__9);
#line 572
c_rt_lib0clear(&___nl__im__11);
#line 572
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
#line 576
c_rt_lib0move(&___nl__im__3,___get_global_string_const(127));
#line 576
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 576
c_rt_lib0clear(&___nl__im__3);
#line 576
c_rt_lib0move(&___nl__im__4,___get_global_string_const(787));
#line 576
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 576
c_rt_lib0clear(&___nl__im__2);
#line 576
c_rt_lib0clear(&___nl__im__4);
#line 577
___nl__int__6 = 0;
#line 577
___nl__int__7 = 1;
#line 577
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 577
label_10:
;
#line 577
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 577
if(___nl__bool__9){ goto label_25;}
#line 577
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 577
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 577
c_rt_lib0move(&___nl__im__12, generator_js_priv0print_const_value(___nl__im__5));
#line 577
c_rt_lib0move(&___nl__im__13,___get_global_string_const(314));
#line 577
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 577
c_rt_lib0clear(&___nl__im__12);
#line 577
c_rt_lib0clear(&___nl__im__13);
#line 577
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 577
c_rt_lib0clear(&___nl__im__11);
#line 577
c_rt_lib0clear(&___nl__im__5);
#line 577
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 577
goto label_10;
#line 577
label_25:
;
#line 578
c_rt_lib0move(&___nl__im__15,___get_global_string_const(500));
#line 578
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 578
c_rt_lib0clear(&___nl__im__15);
#line 578
c_rt_lib0clear(&___nl__im__0);
#line 578
c_rt_lib0clear(&___nl__im__1);
#line 578
c_rt_lib0clear(&___nl__im__5);
#line 578
//clear ___nl__int__6;
#line 578
//clear ___nl__int__7;
#line 578
//clear ___nl__int__8;
#line 578
//clear ___nl__bool__9;
#line 578
c_rt_lib0clear(&___nl__im__10);
#line 578
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
#line 582
c_rt_lib0move(&___nl__im__3,___get_global_string_const(128));
#line 582
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 582
c_rt_lib0clear(&___nl__im__3);
#line 582
c_rt_lib0move(&___nl__im__4,___get_global_string_const(796));
#line 582
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 582
c_rt_lib0clear(&___nl__im__2);
#line 582
c_rt_lib0clear(&___nl__im__4);
#line 583
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 583
label_8:
;
#line 583
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 583
if(___nl__bool__6){ goto label_34;}
#line 583
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 583
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 583
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 583
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 583
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 583
c_rt_lib0clear(&___nl__im__13);
#line 583
c_rt_lib0clear(&___nl__im__14);
#line 583
c_rt_lib0move(&___nl__im__15,___get_global_string_const(530));
#line 583
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 583
c_rt_lib0clear(&___nl__im__12);
#line 583
c_rt_lib0clear(&___nl__im__15);
#line 583
c_rt_lib0move(&___nl__im__16, generator_js_priv0print_const_value(___nl__im__7));
#line 583
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 583
c_rt_lib0clear(&___nl__im__11);
#line 583
c_rt_lib0clear(&___nl__im__16);
#line 583
c_rt_lib0move(&___nl__im__17,___get_global_string_const(314));
#line 583
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 583
c_rt_lib0clear(&___nl__im__10);
#line 583
c_rt_lib0clear(&___nl__im__17);
#line 583
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 583
c_rt_lib0clear(&___nl__im__9);
#line 583
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 583
goto label_8;
#line 583
label_34:
;
#line 584
c_rt_lib0move(&___nl__im__19,___get_global_string_const(797));
#line 584
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 584
c_rt_lib0clear(&___nl__im__19);
#line 584
c_rt_lib0clear(&___nl__im__0);
#line 584
c_rt_lib0clear(&___nl__im__1);
#line 584
c_rt_lib0clear(&___nl__im__5);
#line 584
//clear ___nl__bool__6;
#line 584
c_rt_lib0clear(&___nl__im__7);
#line 584
c_rt_lib0clear(&___nl__im__8);
#line 584
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
#line 588
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 588
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 588
c_rt_lib0clear(&___nl__im__2);
#line 588
___nl__bool__1 = !___nl__bool__1;
#line 588
if(___nl__bool__1){ goto label_36;}
#line 589
c_rt_lib0move(&___nl__im__9,___get_global_string_const(798));
#line 589
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 589
c_rt_lib0clear(&___nl__im__9);
#line 589
c_rt_lib0move(&___nl__im__10,___get_global_string_const(457));
#line 589
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 589
c_rt_lib0clear(&___nl__im__8);
#line 589
c_rt_lib0clear(&___nl__im__10);
#line 589
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 589
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 589
c_rt_lib0clear(&___nl__im__12);
#line 589
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 589
c_rt_lib0clear(&___nl__im__7);
#line 589
c_rt_lib0clear(&___nl__im__11);
#line 589
c_rt_lib0move(&___nl__im__13,___get_global_string_const(328));
#line 589
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 589
c_rt_lib0clear(&___nl__im__6);
#line 589
c_rt_lib0clear(&___nl__im__13);
#line 590
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 590
c_rt_lib0move(&___nl__im__14, generator_js_priv0print_const_value(___nl__im__15));
#line 590
c_rt_lib0clear(&___nl__im__15);
#line 590
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 590
c_rt_lib0clear(&___nl__im__5);
#line 590
c_rt_lib0clear(&___nl__im__14);
#line 590
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 590
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 590
c_rt_lib0clear(&___nl__im__4);
#line 590
c_rt_lib0clear(&___nl__im__16);
#line 590
c_rt_lib0clear(&___nl__im__0);
#line 590
//clear ___nl__bool__1;
#line 590
return ___nl__im__3;
#line 591
goto label_59;
#line 591
label_36:
;
#line 592
c_rt_lib0move(&___nl__im__21,___get_global_string_const(798));
#line 592
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 592
c_rt_lib0clear(&___nl__im__21);
#line 592
c_rt_lib0move(&___nl__im__22,___get_global_string_const(457));
#line 592
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 592
c_rt_lib0clear(&___nl__im__20);
#line 592
c_rt_lib0clear(&___nl__im__22);
#line 592
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 592
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 592
c_rt_lib0clear(&___nl__im__24);
#line 592
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 592
c_rt_lib0clear(&___nl__im__19);
#line 592
c_rt_lib0clear(&___nl__im__23);
#line 592
c_rt_lib0move(&___nl__im__25,___get_global_string_const(799));
#line 592
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 592
c_rt_lib0clear(&___nl__im__18);
#line 592
c_rt_lib0clear(&___nl__im__25);
#line 592
c_rt_lib0clear(&___nl__im__0);
#line 592
//clear ___nl__bool__1;
#line 592
c_rt_lib0clear(&___nl__im__3);
#line 592
return ___nl__im__17;
#line 593
goto label_59;
#line 593
label_59:
;
#line 593
//clear ___nl__bool__1;
#line 593
c_rt_lib0clear(&___nl__im__3);
#line 593
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
#line 597
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 597
___nl__bool__1 = !___nl__bool__1;
#line 597
if(___nl__bool__1){ goto label_20;}
#line 598
c_rt_lib0move(&___nl__im__6,___get_global_string_const(405));
#line 598
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 598
c_rt_lib0clear(&___nl__im__6);
#line 598
c_rt_lib0move(&___nl__im__7,___get_global_string_const(457));
#line 598
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 598
c_rt_lib0clear(&___nl__im__5);
#line 598
c_rt_lib0clear(&___nl__im__7);
#line 598
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 598
c_rt_lib0clear(&___nl__im__4);
#line 598
c_rt_lib0move(&___nl__im__8,___get_global_string_const(322));
#line 598
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 598
c_rt_lib0clear(&___nl__im__3);
#line 598
c_rt_lib0clear(&___nl__im__8);
#line 598
c_rt_lib0clear(&___nl__im__0);
#line 598
//clear ___nl__bool__1;
#line 598
return ___nl__im__2;
#line 599
goto label_130;
#line 599
label_20:
;
#line 599
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 599
___nl__bool__1 = !___nl__bool__1;
#line 599
if(___nl__bool__1){ goto label_44;}
#line 600
c_rt_lib0move(&___nl__im__13,___get_global_string_const(282));
#line 600
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 600
c_rt_lib0clear(&___nl__im__13);
#line 600
c_rt_lib0move(&___nl__im__14,___get_global_string_const(457));
#line 600
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 600
c_rt_lib0clear(&___nl__im__12);
#line 600
c_rt_lib0clear(&___nl__im__14);
#line 600
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 600
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 600
c_rt_lib0clear(&___nl__im__11);
#line 600
c_rt_lib0clear(&___nl__im__15);
#line 600
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 600
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 600
c_rt_lib0clear(&___nl__im__10);
#line 600
c_rt_lib0clear(&___nl__im__16);
#line 600
c_rt_lib0clear(&___nl__im__0);
#line 600
//clear ___nl__bool__1;
#line 600
c_rt_lib0clear(&___nl__im__2);
#line 600
return ___nl__im__9;
#line 601
goto label_130;
#line 601
label_44:
;
#line 601
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 601
___nl__bool__1 = !___nl__bool__1;
#line 601
if(___nl__bool__1){ goto label_55;}
#line 602
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_const_arr(___nl__im__0));
#line 602
c_rt_lib0clear(&___nl__im__0);
#line 602
//clear ___nl__bool__1;
#line 602
c_rt_lib0clear(&___nl__im__2);
#line 602
c_rt_lib0clear(&___nl__im__9);
#line 602
return ___nl__im__17;
#line 603
goto label_130;
#line 603
label_55:
;
#line 603
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 603
___nl__bool__1 = !___nl__bool__1;
#line 603
if(___nl__bool__1){ goto label_67;}
#line 604
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_const_hash(___nl__im__0));
#line 604
c_rt_lib0clear(&___nl__im__0);
#line 604
//clear ___nl__bool__1;
#line 604
c_rt_lib0clear(&___nl__im__2);
#line 604
c_rt_lib0clear(&___nl__im__9);
#line 604
c_rt_lib0clear(&___nl__im__17);
#line 604
return ___nl__im__18;
#line 605
goto label_130;
#line 605
label_67:
;
#line 605
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 605
___nl__bool__1 = !___nl__bool__1;
#line 605
if(___nl__bool__1){ goto label_113;}
#line 606
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 606
___nl__bool__19 = !___nl__bool__19;
#line 606
if(___nl__bool__19){ goto label_90;}
#line 607
c_rt_lib0move(&___nl__im__21,___get_global_string_const(271));
#line 607
c_rt_lib0move(&___nl__im__22,___get_global_string_const(800));
#line 607
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 607
c_rt_lib0move(&___nl__im__20, generator_js_priv0print_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 607
c_rt_lib0clear(&___nl__im__21);
#line 607
c_rt_lib0clear(&___nl__im__22);
#line 607
c_rt_lib0clear(&___nl__im__23);
#line 607
c_rt_lib0clear(&___nl__im__0);
#line 607
//clear ___nl__bool__1;
#line 607
c_rt_lib0clear(&___nl__im__2);
#line 607
c_rt_lib0clear(&___nl__im__9);
#line 607
c_rt_lib0clear(&___nl__im__17);
#line 607
c_rt_lib0clear(&___nl__im__18);
#line 607
//clear ___nl__bool__19;
#line 607
return ___nl__im__20;
#line 608
goto label_108;
#line 608
label_90:
;
#line 609
c_rt_lib0move(&___nl__im__25,___get_global_string_const(271));
#line 609
c_rt_lib0move(&___nl__im__26,___get_global_string_const(801));
#line 609
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 609
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 609
c_rt_lib0clear(&___nl__im__25);
#line 609
c_rt_lib0clear(&___nl__im__26);
#line 609
c_rt_lib0clear(&___nl__im__27);
#line 609
c_rt_lib0clear(&___nl__im__0);
#line 609
//clear ___nl__bool__1;
#line 609
c_rt_lib0clear(&___nl__im__2);
#line 609
c_rt_lib0clear(&___nl__im__9);
#line 609
c_rt_lib0clear(&___nl__im__17);
#line 609
c_rt_lib0clear(&___nl__im__18);
#line 609
//clear ___nl__bool__19;
#line 609
c_rt_lib0clear(&___nl__im__20);
#line 609
return ___nl__im__24;
#line 610
goto label_108;
#line 610
label_108:
;
#line 610
//clear ___nl__bool__19;
#line 610
c_rt_lib0clear(&___nl__im__20);
#line 610
c_rt_lib0clear(&___nl__im__24);
#line 611
goto label_130;
#line 611
label_113:
;
#line 611
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 611
___nl__bool__1 = !___nl__bool__1;
#line 611
if(___nl__bool__1){ goto label_126;}
#line 612
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_const_ov(___nl__im__0));
#line 612
c_rt_lib0clear(&___nl__im__0);
#line 612
//clear ___nl__bool__1;
#line 612
c_rt_lib0clear(&___nl__im__2);
#line 612
c_rt_lib0clear(&___nl__im__9);
#line 612
c_rt_lib0clear(&___nl__im__17);
#line 612
c_rt_lib0clear(&___nl__im__18);
#line 612
return ___nl__im__28;
#line 613
goto label_130;
#line 613
label_126:
;
#line 614
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 614
nl_die_arg(___nl__im__29);
#line 615
goto label_130;
#line 615
label_130:
;
#line 615
//clear ___nl__bool__1;
#line 615
c_rt_lib0clear(&___nl__im__2);
#line 615
c_rt_lib0clear(&___nl__im__9);
#line 615
c_rt_lib0clear(&___nl__im__17);
#line 615
c_rt_lib0clear(&___nl__im__18);
#line 615
c_rt_lib0clear(&___nl__im__28);
#line 615
c_rt_lib0clear(&___nl__im__29);
#line 615
c_rt_lib0clear(&___nl__im__0);
#line 615
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
#line 619
c_rt_lib0move(&___nl__im__3,___get_global_string_const(802));
#line 619
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 619
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 619
c_rt_lib0clear(&___nl__im__3);
#line 619
c_rt_lib0clear(&___nl__string__4);
#line 619
c_rt_lib0move(&___nl__im__5,___get_global_string_const(803));
#line 619
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 619
c_rt_lib0clear(&___nl__im__2);
#line 619
c_rt_lib0clear(&___nl__im__5);
#line 619
//clear ___nl__int__0;
#line 619
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
#line 624
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 625
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 625
___nl__bool__3 = !___nl__bool__3;
#line 625
if(___nl__bool__3){ goto label_14;}
#line 626
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 626
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 626
c_rt_lib0clear(&___nl__im__6);
#line 626
c_rt_lib0move(&___nl__im__7,___get_global_string_const(796));
#line 626
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 626
c_rt_lib0clear(&___nl__im__5);
#line 626
c_rt_lib0clear(&___nl__im__7);
#line 626
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 626
c_rt_lib0clear(&___nl__im__4);
#line 627
goto label_26;
#line 627
label_14:
;
#line 627
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 627
___nl__bool__3 = !___nl__bool__3;
#line 627
if(___nl__bool__3){ goto label_22;}
#line 628
c_rt_lib0move(&___nl__im__8,___get_global_string_const(306));
#line 628
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 628
c_rt_lib0clear(&___nl__im__8);
#line 629
goto label_26;
#line 629
label_22:
;
#line 630
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 630
nl_die_arg(___nl__im__9);
#line 631
goto label_26;
#line 631
label_26:
;
#line 631
//clear ___nl__bool__3;
#line 631
c_rt_lib0clear(&___nl__im__9);
#line 632
___nl__int__11 = 0;
#line 632
___nl__int__12 = 1;
#line 632
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 632
label_32:
;
#line 632
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 632
if(___nl__bool__14){ goto label_59;}
#line 632
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 632
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 632
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(577)));
#line 632
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 632
c_rt_lib0clear(&___nl__im__20);
#line 632
c_rt_lib0move(&___nl__im__21,___get_global_string_const(530));
#line 632
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 632
c_rt_lib0clear(&___nl__im__19);
#line 632
c_rt_lib0clear(&___nl__im__21);
#line 632
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(225)));
#line 632
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_register_value(___nl__im__23));
#line 632
c_rt_lib0clear(&___nl__im__23);
#line 632
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 632
c_rt_lib0clear(&___nl__im__18);
#line 632
c_rt_lib0clear(&___nl__im__22);
#line 632
c_rt_lib0move(&___nl__im__24,___get_global_string_const(314));
#line 632
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 632
c_rt_lib0clear(&___nl__im__17);
#line 632
c_rt_lib0clear(&___nl__im__24);
#line 632
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 632
c_rt_lib0clear(&___nl__im__16);
#line 632
c_rt_lib0clear(&___nl__im__10);
#line 632
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 632
goto label_32;
#line 632
label_59:
;
#line 633
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 633
___nl__bool__25 = !___nl__bool__25;
#line 633
if(___nl__bool__25){ goto label_67;}
#line 634
c_rt_lib0move(&___nl__im__26,___get_global_string_const(797));
#line 634
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 634
c_rt_lib0clear(&___nl__im__26);
#line 635
goto label_79;
#line 635
label_67:
;
#line 635
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 635
___nl__bool__25 = !___nl__bool__25;
#line 635
if(___nl__bool__25){ goto label_75;}
#line 636
c_rt_lib0move(&___nl__im__27,___get_global_string_const(307));
#line 636
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 636
c_rt_lib0clear(&___nl__im__27);
#line 637
goto label_79;
#line 637
label_75:
;
#line 638
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 638
nl_die_arg(___nl__im__28);
#line 639
goto label_79;
#line 639
label_79:
;
#line 639
//clear ___nl__bool__25;
#line 639
c_rt_lib0clear(&___nl__im__28);
#line 640
c_rt_lib0clear(&___nl__im__0);
#line 640
c_rt_lib0clear(&___nl__im__1);
#line 640
c_rt_lib0clear(&___nl__im__10);
#line 640
//clear ___nl__int__11;
#line 640
//clear ___nl__int__12;
#line 640
//clear ___nl__int__13;
#line 640
//clear ___nl__bool__14;
#line 640
c_rt_lib0clear(&___nl__im__15);
#line 640
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
#line 644
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 645
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 645
___nl__bool__3 = !___nl__bool__3;
#line 645
if(___nl__bool__3){ goto label_36;}
#line 646
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 646
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 646
c_rt_lib0clear(&___nl__im__6);
#line 646
c_rt_lib0move(&___nl__im__7,___get_global_string_const(796));
#line 646
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 646
c_rt_lib0clear(&___nl__im__5);
#line 646
c_rt_lib0clear(&___nl__im__7);
#line 646
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 646
c_rt_lib0clear(&___nl__im__4);
#line 647
___nl__int__9 = 0;
#line 647
___nl__int__10 = 1;
#line 647
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 647
label_16:
;
#line 647
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 647
if(___nl__bool__12){ goto label_31;}
#line 647
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 647
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 647
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 647
c_rt_lib0move(&___nl__im__16,___get_global_string_const(804));
#line 647
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 647
c_rt_lib0clear(&___nl__im__15);
#line 647
c_rt_lib0clear(&___nl__im__16);
#line 647
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 647
c_rt_lib0clear(&___nl__im__14);
#line 647
c_rt_lib0clear(&___nl__im__8);
#line 647
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 647
goto label_16;
#line 647
label_31:
;
#line 648
c_rt_lib0move(&___nl__im__17,___get_global_string_const(797));
#line 648
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 648
c_rt_lib0clear(&___nl__im__17);
#line 649
goto label_70;
#line 649
label_36:
;
#line 649
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(559));
#line 649
___nl__bool__3 = !___nl__bool__3;
#line 649
if(___nl__bool__3){ goto label_66;}
#line 650
c_rt_lib0move(&___nl__im__18,___get_global_string_const(306));
#line 650
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 650
c_rt_lib0clear(&___nl__im__18);
#line 651
___nl__int__20 = 0;
#line 651
___nl__int__21 = 1;
#line 651
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 651
label_46:
;
#line 651
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 651
if(___nl__bool__23){ goto label_61;}
#line 651
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 651
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 651
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 651
c_rt_lib0move(&___nl__im__27,___get_global_string_const(805));
#line 651
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 651
c_rt_lib0clear(&___nl__im__26);
#line 651
c_rt_lib0clear(&___nl__im__27);
#line 651
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 651
c_rt_lib0clear(&___nl__im__25);
#line 651
c_rt_lib0clear(&___nl__im__19);
#line 651
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 651
goto label_46;
#line 651
label_61:
;
#line 652
c_rt_lib0move(&___nl__im__28,___get_global_string_const(307));
#line 652
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 652
c_rt_lib0clear(&___nl__im__28);
#line 653
goto label_70;
#line 653
label_66:
;
#line 654
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 654
nl_die_arg(___nl__im__29);
#line 655
goto label_70;
#line 655
label_70:
;
#line 655
//clear ___nl__bool__3;
#line 655
c_rt_lib0clear(&___nl__im__8);
#line 655
//clear ___nl__int__9;
#line 655
//clear ___nl__int__10;
#line 655
//clear ___nl__int__11;
#line 655
//clear ___nl__bool__12;
#line 655
c_rt_lib0clear(&___nl__im__13);
#line 655
c_rt_lib0clear(&___nl__im__19);
#line 655
//clear ___nl__int__20;
#line 655
//clear ___nl__int__21;
#line 655
//clear ___nl__int__22;
#line 655
//clear ___nl__bool__23;
#line 655
c_rt_lib0clear(&___nl__im__24);
#line 655
c_rt_lib0clear(&___nl__im__29);
#line 656
c_rt_lib0clear(&___nl__im__0);
#line 656
c_rt_lib0clear(&___nl__im__1);
#line 656
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0print_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 660
c_rt_lib0move(&___nl__im__2,___get_global_string_const(425));
#line 660
c_rt_lib0move(&___nl__im__3, generator_js_priv0reg_suffix(___nl__im__0));
#line 660
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__3));
#line 660
c_rt_lib0clear(&___nl__im__2);
#line 660
c_rt_lib0clear(&___nl__im__3);
#line 660
c_rt_lib0clear(&___nl__im__0);
#line 660
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
#line 664
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register(___nl__im__0));
#line 665
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 665
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 665
if(___nl__bool__3){ goto label_9;}
#line 666
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 666
if(___nl__bool__3){ goto label_11;}
#line 666
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 666
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 666
nl_die_arg(___nl__im__4);
#line 665
label_9:
;
#line 666
goto label_16;
#line 666
label_11:
;
#line 667
c_rt_lib0move(&___nl__im__5,___get_global_string_const(751));
#line 667
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 667
c_rt_lib0clear(&___nl__im__5);
#line 668
goto label_16;
#line 668
label_16:
;
#line 669
c_rt_lib0clear(&___nl__im__0);
#line 669
c_rt_lib0clear(&___nl__im__2);
#line 669
//clear ___nl__bool__3;
#line 669
c_rt_lib0clear(&___nl__im__4);
#line 669
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
#line 673
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register(___nl__im__0));
#line 674
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 674
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 674
if(___nl__bool__3){ goto label_9;}
#line 676
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 676
if(___nl__bool__3){ goto label_18;}
#line 676
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 676
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 676
nl_die_arg(___nl__im__4);
#line 674
label_9:
;
#line 675
c_rt_lib0move(&___nl__im__6,___get_global_string_const(806));
#line 675
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 675
c_rt_lib0clear(&___nl__im__6);
#line 675
c_rt_lib0move(&___nl__im__7,___get_global_string_const(307));
#line 675
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 675
c_rt_lib0clear(&___nl__im__5);
#line 675
c_rt_lib0clear(&___nl__im__7);
#line 676
goto label_20;
#line 676
label_18:
;
#line 677
goto label_20;
#line 677
label_20:
;
#line 678
c_rt_lib0clear(&___nl__im__0);
#line 678
c_rt_lib0clear(&___nl__im__2);
#line 678
//clear ___nl__bool__3;
#line 678
c_rt_lib0clear(&___nl__im__4);
#line 678
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
#line 683
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 683
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(131));
#line 683
if(___nl__bool__3){ goto label_20;}
#line 685
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(405));
#line 685
if(___nl__bool__3){ goto label_23;}
#line 687
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 687
if(___nl__bool__3){ goto label_26;}
#line 689
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(406));
#line 689
if(___nl__bool__3){ goto label_29;}
#line 691
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(559));
#line 691
if(___nl__bool__3){ goto label_32;}
#line 693
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 693
if(___nl__bool__3){ goto label_37;}
#line 695
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(563));
#line 695
if(___nl__bool__3){ goto label_42;}
#line 697
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 697
if(___nl__bool__3){ goto label_47;}
#line 697
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 697
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 697
nl_die_arg(___nl__im__4);
#line 683
label_20:
;
#line 684
c_rt_lib0move(&___nl__im__1,___get_global_string_const(131));
#line 685
goto label_52;
#line 685
label_23:
;
#line 686
c_rt_lib0move(&___nl__im__1,___get_global_string_const(405));
#line 687
goto label_52;
#line 687
label_26:
;
#line 688
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 689
goto label_52;
#line 689
label_29:
;
#line 690
c_rt_lib0move(&___nl__im__1,___get_global_string_const(406));
#line 691
goto label_52;
#line 691
label_32:
;
#line 691
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(559)));
#line 691
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 692
c_rt_lib0move(&___nl__im__1,___get_global_string_const(559));
#line 693
goto label_52;
#line 693
label_37:
;
#line 693
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(127)));
#line 693
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 694
c_rt_lib0move(&___nl__im__1,___get_global_string_const(127));
#line 695
goto label_52;
#line 695
label_42:
;
#line 695
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(563)));
#line 695
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 696
c_rt_lib0move(&___nl__im__1,___get_global_string_const(507));
#line 697
goto label_52;
#line 697
label_47:
;
#line 697
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 697
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 698
c_rt_lib0move(&___nl__im__1,___get_global_string_const(128));
#line 699
goto label_52;
#line 699
label_52:
;
#line 700
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 700
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(220));
#line 700
if(___nl__bool__14){ goto label_61;}
#line 701
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(422));
#line 701
if(___nl__bool__14){ goto label_63;}
#line 701
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 701
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 701
nl_die_arg(___nl__im__15);
#line 700
label_61:
;
#line 701
goto label_68;
#line 701
label_63:
;
#line 702
c_rt_lib0move(&___nl__im__16,___get_global_string_const(641));
#line 702
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 702
c_rt_lib0clear(&___nl__im__16);
#line 703
goto label_68;
#line 703
label_68:
;
#line 704
c_rt_lib0move(&___nl__im__18,___get_global_string_const(642));
#line 704
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 704
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 704
c_rt_lib0clear(&___nl__im__20);
#line 704
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 704
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 704
c_rt_lib0clear(&___nl__im__18);
#line 704
//clear ___nl__int__19;
#line 704
c_rt_lib0clear(&___nl__string__21);
#line 704
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 704
c_rt_lib0clear(&___nl__im__17);
#line 705
c_rt_lib0clear(&___nl__im__0);
#line 705
c_rt_lib0clear(&___nl__im__2);
#line 705
//clear ___nl__bool__3;
#line 705
c_rt_lib0clear(&___nl__im__4);
#line 705
c_rt_lib0clear(&___nl__im__5);
#line 705
c_rt_lib0clear(&___nl__im__6);
#line 705
c_rt_lib0clear(&___nl__im__7);
#line 705
c_rt_lib0clear(&___nl__im__8);
#line 705
c_rt_lib0clear(&___nl__im__9);
#line 705
c_rt_lib0clear(&___nl__im__10);
#line 705
c_rt_lib0clear(&___nl__im__11);
#line 705
c_rt_lib0clear(&___nl__im__12);
#line 705
c_rt_lib0clear(&___nl__im__13);
#line 705
//clear ___nl__bool__14;
#line 705
c_rt_lib0clear(&___nl__im__15);
#line 705
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
#line 710
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 710
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 710
c_rt_lib0clear(&___nl__im__2);
#line 710
___nl__bool__1 = !___nl__bool__1;
#line 710
if(___nl__bool__1){ goto label_10;}
#line 710
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 710
c_rt_lib0clear(&___nl__im__0);
#line 710
//clear ___nl__bool__1;
#line 710
return ___nl__im__3;
#line 710
goto label_10;
#line 710
label_10:
;
#line 710
//clear ___nl__bool__1;
#line 710
c_rt_lib0clear(&___nl__im__3);
#line 711
c_rt_lib0move(&___nl__im__5, generator_js_priv0print_register(___nl__im__0));
#line 711
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 711
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 711
c_rt_lib0clear(&___nl__im__5);
#line 711
c_rt_lib0clear(&___nl__im__6);
#line 711
c_rt_lib0clear(&___nl__im__0);
#line 711
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
#line 715
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 715
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 715
c_rt_lib0clear(&___nl__im__2);
#line 715
___nl__bool__1 = !___nl__bool__1;
#line 715
if(___nl__bool__1){ goto label_10;}
#line 715
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 715
c_rt_lib0clear(&___nl__im__0);
#line 715
//clear ___nl__bool__1;
#line 715
return ___nl__im__3;
#line 715
goto label_10;
#line 715
label_10:
;
#line 715
//clear ___nl__bool__1;
#line 715
c_rt_lib0clear(&___nl__im__3);
#line 716
c_rt_lib0move(&___nl__im__5, generator_js_priv0print_register_value(___nl__im__0));
#line 716
c_rt_lib0move(&___nl__im__6,___get_global_string_const(504));
#line 716
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 716
c_rt_lib0clear(&___nl__im__5);
#line 716
c_rt_lib0clear(&___nl__im__6);
#line 716
c_rt_lib0clear(&___nl__im__0);
#line 716
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
#line 720
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 721
___nl__int__3 = 0;
#line 722
___nl__int__5 = 0;
#line 722
___nl__int__6 = 1;
#line 722
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 722
label_5:
;
#line 722
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 722
if(___nl__bool__8){ goto label_50;}
#line 722
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 722
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 723
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(355)));
#line 723
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 723
if(___nl__bool__11){ goto label_18;}
#line 725
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(225));
#line 725
if(___nl__bool__11){ goto label_41;}
#line 725
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 725
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 725
nl_die_arg(___nl__im__12);
#line 723
label_18:
;
#line 724
c_rt_lib0move(&___nl__im__17,___get_global_string_const(756));
#line 724
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 724
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 724
c_rt_lib0clear(&___nl__im__17);
#line 724
c_rt_lib0clear(&___nl__string__18);
#line 724
c_rt_lib0move(&___nl__im__19,___get_global_string_const(807));
#line 724
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 724
c_rt_lib0clear(&___nl__im__16);
#line 724
c_rt_lib0clear(&___nl__im__19);
#line 724
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(471)));
#line 724
c_rt_lib0move(&___nl__im__20, generator_js_priv0print_register_value(___nl__im__21));
#line 724
c_rt_lib0clear(&___nl__im__21);
#line 724
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 724
c_rt_lib0clear(&___nl__im__15);
#line 724
c_rt_lib0clear(&___nl__im__20);
#line 724
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 724
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 724
c_rt_lib0clear(&___nl__im__14);
#line 724
c_rt_lib0clear(&___nl__im__22);
#line 724
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 724
c_rt_lib0clear(&___nl__im__13);
#line 725
goto label_43;
#line 725
label_41:
;
#line 726
goto label_43;
#line 726
label_43:
;
#line 727
___nl__int__23 = 1;
#line 727
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 727
//clear ___nl__int__23;
#line 727
c_rt_lib0clear(&___nl__im__4);
#line 728
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 728
goto label_5;
#line 728
label_50:
;
#line 729
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(225));
#line 729
if(___nl__bool__24){ goto label_58;}
#line 731
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(352));
#line 731
if(___nl__bool__24){ goto label_95;}
#line 731
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 731
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 731
nl_die_arg(___nl__im__25);
#line 729
label_58:
;
#line 729
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(225)));
#line 729
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 730
c_rt_lib0move(&___nl__im__32, string0lf());
#line 730
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 730
c_rt_lib0clear(&___nl__im__32);
#line 730
c_rt_lib0move(&___nl__im__33,___get_global_string_const(510));
#line 730
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__33));
#line 730
c_rt_lib0clear(&___nl__im__31);
#line 730
c_rt_lib0clear(&___nl__im__33);
#line 730
c_rt_lib0move(&___nl__im__34, generator_js_priv0print_register_value(___nl__im__26));
#line 730
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__34));
#line 730
c_rt_lib0clear(&___nl__im__30);
#line 730
c_rt_lib0clear(&___nl__im__34);
#line 730
c_rt_lib0move(&___nl__im__35,___get_global_string_const(442));
#line 730
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__35));
#line 730
c_rt_lib0clear(&___nl__im__29);
#line 730
c_rt_lib0clear(&___nl__im__35);
#line 730
c_rt_lib0clear(&___nl__im__0);
#line 730
c_rt_lib0clear(&___nl__im__1);
#line 730
c_rt_lib0clear(&___nl__im__2);
#line 730
//clear ___nl__int__3;
#line 730
c_rt_lib0clear(&___nl__im__4);
#line 730
//clear ___nl__int__5;
#line 730
//clear ___nl__int__6;
#line 730
//clear ___nl__int__7;
#line 730
//clear ___nl__bool__8;
#line 730
c_rt_lib0clear(&___nl__im__9);
#line 730
c_rt_lib0clear(&___nl__im__10);
#line 730
//clear ___nl__bool__11;
#line 730
c_rt_lib0clear(&___nl__im__12);
#line 730
//clear ___nl__bool__24;
#line 730
c_rt_lib0clear(&___nl__im__25);
#line 730
c_rt_lib0clear(&___nl__im__26);
#line 730
c_rt_lib0clear(&___nl__im__27);
#line 730
return ___nl__im__28;
#line 731
goto label_123;
#line 731
label_95:
;
#line 732
c_rt_lib0move(&___nl__im__38, string0lf());
#line 732
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__2, ___nl__im__38));
#line 732
c_rt_lib0clear(&___nl__im__38);
#line 732
c_rt_lib0move(&___nl__im__39,___get_global_string_const(808));
#line 732
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 732
c_rt_lib0clear(&___nl__im__37);
#line 732
c_rt_lib0clear(&___nl__im__39);
#line 732
c_rt_lib0clear(&___nl__im__0);
#line 732
c_rt_lib0clear(&___nl__im__1);
#line 732
c_rt_lib0clear(&___nl__im__2);
#line 732
//clear ___nl__int__3;
#line 732
c_rt_lib0clear(&___nl__im__4);
#line 732
//clear ___nl__int__5;
#line 732
//clear ___nl__int__6;
#line 732
//clear ___nl__int__7;
#line 732
//clear ___nl__bool__8;
#line 732
c_rt_lib0clear(&___nl__im__9);
#line 732
c_rt_lib0clear(&___nl__im__10);
#line 732
//clear ___nl__bool__11;
#line 732
c_rt_lib0clear(&___nl__im__12);
#line 732
//clear ___nl__bool__24;
#line 732
c_rt_lib0clear(&___nl__im__25);
#line 732
c_rt_lib0clear(&___nl__im__26);
#line 732
c_rt_lib0clear(&___nl__im__27);
#line 732
c_rt_lib0clear(&___nl__im__28);
#line 732
return ___nl__im__36;
#line 733
goto label_123;
#line 733
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
#line 737
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 737
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register_value_to_assign(___nl__im__2));
#line 737
c_rt_lib0clear(&___nl__im__2);
#line 738
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 738
c_rt_lib0move(&___nl__im__5,___get_global_string_const(365));
#line 738
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 738
c_rt_lib0clear(&___nl__im__4);
#line 738
c_rt_lib0clear(&___nl__im__5);
#line 738
___nl__bool__3 = !___nl__bool__3;
#line 738
if(___nl__bool__3){ goto label_24;}
#line 739
c_rt_lib0move(&___nl__im__8,___get_global_string_const(365));
#line 739
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 739
c_rt_lib0clear(&___nl__im__8);
#line 739
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 739
c_rt_lib0move(&___nl__im__9, generator_js_priv0print_register_value(___nl__im__10));
#line 739
c_rt_lib0clear(&___nl__im__10);
#line 739
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 739
c_rt_lib0clear(&___nl__im__7);
#line 739
c_rt_lib0clear(&___nl__im__9);
#line 739
c_rt_lib0clear(&___nl__im__0);
#line 739
c_rt_lib0clear(&___nl__im__1);
#line 739
//clear ___nl__bool__3;
#line 739
return ___nl__im__6;
#line 740
goto label_40;
#line 740
label_24:
;
#line 741
c_rt_lib0move(&___nl__im__13,___get_global_string_const(367));
#line 741
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 741
c_rt_lib0clear(&___nl__im__13);
#line 741
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(73)));
#line 741
c_rt_lib0move(&___nl__im__14, generator_js_priv0print_register_value(___nl__im__15));
#line 741
c_rt_lib0clear(&___nl__im__15);
#line 741
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 741
c_rt_lib0clear(&___nl__im__12);
#line 741
c_rt_lib0clear(&___nl__im__14);
#line 741
c_rt_lib0clear(&___nl__im__0);
#line 741
c_rt_lib0clear(&___nl__im__1);
#line 741
//clear ___nl__bool__3;
#line 741
c_rt_lib0clear(&___nl__im__6);
#line 741
return ___nl__im__11;
#line 742
goto label_40;
#line 742
label_40:
;
#line 742
//clear ___nl__bool__3;
#line 742
c_rt_lib0clear(&___nl__im__6);
#line 742
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
#line 746
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 746
if(___nl__bool__2){ goto label_19;}
#line 748
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 748
if(___nl__bool__2){ goto label_25;}
#line 750
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 750
if(___nl__bool__2){ goto label_45;}
#line 752
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 752
if(___nl__bool__2){ goto label_64;}
#line 754
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 754
if(___nl__bool__2){ goto label_72;}
#line 756
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 756
if(___nl__bool__2){ goto label_78;}
#line 758
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 758
if(___nl__bool__2){ goto label_84;}
#line 760
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 760
if(___nl__bool__2){ goto label_90;}
#line 760
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 760
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 760
nl_die_arg(___nl__im__3);
#line 746
label_19:
;
#line 747
c_rt_lib0clear(&___nl__im__0);
#line 747
//clear ___nl__bool__2;
#line 747
c_rt_lib0clear(&___nl__im__3);
#line 747
return ___nl__im__1;
#line 748
goto label_96;
#line 748
label_25:
;
#line 749
c_rt_lib0move(&___nl__im__8,___get_global_string_const(405));
#line 749
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 749
c_rt_lib0clear(&___nl__im__8);
#line 749
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 749
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 749
c_rt_lib0clear(&___nl__im__7);
#line 749
c_rt_lib0clear(&___nl__im__9);
#line 749
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 749
c_rt_lib0clear(&___nl__im__6);
#line 749
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 749
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 749
c_rt_lib0clear(&___nl__im__5);
#line 749
c_rt_lib0clear(&___nl__im__10);
#line 749
c_rt_lib0clear(&___nl__im__0);
#line 749
c_rt_lib0clear(&___nl__im__1);
#line 749
//clear ___nl__bool__2;
#line 749
c_rt_lib0clear(&___nl__im__3);
#line 749
return ___nl__im__4;
#line 750
goto label_96;
#line 750
label_45:
;
#line 751
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 751
c_rt_lib0move(&___nl__im__15,___get_global_string_const(809));
#line 751
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 751
c_rt_lib0clear(&___nl__im__14);
#line 751
c_rt_lib0clear(&___nl__im__15);
#line 751
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 751
c_rt_lib0clear(&___nl__im__13);
#line 751
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 751
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 751
c_rt_lib0clear(&___nl__im__12);
#line 751
c_rt_lib0clear(&___nl__im__16);
#line 751
c_rt_lib0clear(&___nl__im__0);
#line 751
c_rt_lib0clear(&___nl__im__1);
#line 751
//clear ___nl__bool__2;
#line 751
c_rt_lib0clear(&___nl__im__3);
#line 751
c_rt_lib0clear(&___nl__im__4);
#line 751
return ___nl__im__11;
#line 752
goto label_96;
#line 752
label_64:
;
#line 753
c_rt_lib0clear(&___nl__im__0);
#line 753
//clear ___nl__bool__2;
#line 753
c_rt_lib0clear(&___nl__im__3);
#line 753
c_rt_lib0clear(&___nl__im__4);
#line 753
c_rt_lib0clear(&___nl__im__11);
#line 753
return ___nl__im__1;
#line 754
goto label_96;
#line 754
label_72:
;
#line 754
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 754
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 755
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 755
nl_die_arg(___nl__im__19);
#line 756
goto label_96;
#line 756
label_78:
;
#line 756
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 756
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 757
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 757
nl_die_arg(___nl__im__22);
#line 758
goto label_96;
#line 758
label_84:
;
#line 758
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 758
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 759
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 759
nl_die_arg(___nl__im__25);
#line 760
goto label_96;
#line 760
label_90:
;
#line 760
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 760
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 761
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 761
nl_die_arg(___nl__im__28);
#line 762
goto label_96;
#line 762
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
#line 766
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 766
if(___nl__bool__2){ goto label_19;}
#line 768
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 768
if(___nl__bool__2){ goto label_25;}
#line 770
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 770
if(___nl__bool__2){ goto label_35;}
#line 772
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 772
if(___nl__bool__2){ goto label_54;}
#line 774
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 774
if(___nl__bool__2){ goto label_62;}
#line 776
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 776
if(___nl__bool__2){ goto label_68;}
#line 778
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 778
if(___nl__bool__2){ goto label_74;}
#line 780
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 780
if(___nl__bool__2){ goto label_80;}
#line 780
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 780
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 780
nl_die_arg(___nl__im__3);
#line 766
label_19:
;
#line 767
c_rt_lib0clear(&___nl__im__0);
#line 767
//clear ___nl__bool__2;
#line 767
c_rt_lib0clear(&___nl__im__3);
#line 767
return ___nl__im__1;
#line 768
goto label_86;
#line 768
label_25:
;
#line 769
c_rt_lib0move(&___nl__im__5,___get_global_string_const(810));
#line 769
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 769
c_rt_lib0clear(&___nl__im__5);
#line 769
c_rt_lib0clear(&___nl__im__0);
#line 769
c_rt_lib0clear(&___nl__im__1);
#line 769
//clear ___nl__bool__2;
#line 769
c_rt_lib0clear(&___nl__im__3);
#line 769
return ___nl__im__4;
#line 770
goto label_86;
#line 770
label_35:
;
#line 771
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 771
c_rt_lib0move(&___nl__im__10,___get_global_string_const(811));
#line 771
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 771
c_rt_lib0clear(&___nl__im__9);
#line 771
c_rt_lib0clear(&___nl__im__10);
#line 771
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 771
c_rt_lib0clear(&___nl__im__8);
#line 771
c_rt_lib0move(&___nl__im__11,___get_global_string_const(322));
#line 771
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 771
c_rt_lib0clear(&___nl__im__7);
#line 771
c_rt_lib0clear(&___nl__im__11);
#line 771
c_rt_lib0clear(&___nl__im__0);
#line 771
c_rt_lib0clear(&___nl__im__1);
#line 771
//clear ___nl__bool__2;
#line 771
c_rt_lib0clear(&___nl__im__3);
#line 771
c_rt_lib0clear(&___nl__im__4);
#line 771
return ___nl__im__6;
#line 772
goto label_86;
#line 772
label_54:
;
#line 773
c_rt_lib0clear(&___nl__im__0);
#line 773
//clear ___nl__bool__2;
#line 773
c_rt_lib0clear(&___nl__im__3);
#line 773
c_rt_lib0clear(&___nl__im__4);
#line 773
c_rt_lib0clear(&___nl__im__6);
#line 773
return ___nl__im__1;
#line 774
goto label_86;
#line 774
label_62:
;
#line 774
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 774
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 775
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 775
nl_die_arg(___nl__im__14);
#line 776
goto label_86;
#line 776
label_68:
;
#line 776
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 776
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 777
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 777
nl_die_arg(___nl__im__17);
#line 778
goto label_86;
#line 778
label_74:
;
#line 778
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 778
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 779
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 779
nl_die_arg(___nl__im__20);
#line 780
goto label_86;
#line 780
label_80:
;
#line 780
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 780
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 781
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 781
nl_die_arg(___nl__im__23);
#line 782
goto label_86;
#line 782
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
#line 786
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 786
___nl__int__3 = 0;
#line 786
___nl__int__4 = 1;
#line 786
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 786
label_4:
;
#line 786
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 786
if(___nl__bool__6){ goto label_34;}
#line 786
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 786
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 787
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(471)));
#line 787
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 787
c_rt_lib0clear(&___nl__im__10);
#line 787
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 787
c_rt_lib0clear(&___nl__im__9);
#line 787
___nl__bool__8 = !___nl__bool__8;
#line 787
if(___nl__bool__8){ goto label_28;}
#line 787
___nl__bool__11 = true;
#line 787
c_rt_lib0clear(&___nl__im__0);
#line 787
c_rt_lib0clear(&___nl__im__1);
#line 787
c_rt_lib0clear(&___nl__im__2);
#line 787
//clear ___nl__int__3;
#line 787
//clear ___nl__int__4;
#line 787
//clear ___nl__int__5;
#line 787
//clear ___nl__bool__6;
#line 787
c_rt_lib0clear(&___nl__im__7);
#line 787
//clear ___nl__bool__8;
#line 787
return ___nl__bool__11;
#line 787
goto label_28;
#line 787
label_28:
;
#line 787
//clear ___nl__bool__8;
#line 787
//clear ___nl__bool__11;
#line 787
c_rt_lib0clear(&___nl__im__2);
#line 788
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 788
goto label_4;
#line 788
label_34:
;
#line 789
___nl__bool__12 = false;
#line 789
c_rt_lib0clear(&___nl__im__0);
#line 789
c_rt_lib0clear(&___nl__im__1);
#line 789
c_rt_lib0clear(&___nl__im__2);
#line 789
//clear ___nl__int__3;
#line 789
//clear ___nl__int__4;
#line 789
//clear ___nl__int__5;
#line 789
//clear ___nl__bool__6;
#line 789
c_rt_lib0clear(&___nl__im__7);
#line 789
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
#line 793
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 793
___nl__bool__1 = !___nl__bool__1;
#line 793
if(___nl__bool__1){ goto label_8;}
#line 793
___nl__bool__2 = false;
#line 793
c_rt_lib0clear(&___nl__im__0);
#line 793
//clear ___nl__bool__1;
#line 793
return ___nl__bool__2;
#line 793
goto label_8;
#line 793
label_8:
;
#line 793
//clear ___nl__bool__1;
#line 793
//clear ___nl__bool__2;
#line 794
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 794
___nl__bool__3 = !___nl__bool__3;
#line 794
if(___nl__bool__3){ goto label_19;}
#line 794
___nl__bool__4 = false;
#line 794
c_rt_lib0clear(&___nl__im__0);
#line 794
//clear ___nl__bool__3;
#line 794
return ___nl__bool__4;
#line 794
goto label_19;
#line 794
label_19:
;
#line 794
//clear ___nl__bool__3;
#line 794
//clear ___nl__bool__4;
#line 795
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 795
___nl__bool__5 = !___nl__bool__5;
#line 795
if(___nl__bool__5){ goto label_30;}
#line 795
___nl__bool__6 = false;
#line 795
c_rt_lib0clear(&___nl__im__0);
#line 795
//clear ___nl__bool__5;
#line 795
return ___nl__bool__6;
#line 795
goto label_30;
#line 795
label_30:
;
#line 795
//clear ___nl__bool__5;
#line 795
//clear ___nl__bool__6;
#line 796
___nl__bool__7 = true;
#line 796
c_rt_lib0clear(&___nl__im__0);
#line 796
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
