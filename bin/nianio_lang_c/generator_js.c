
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
ImmT  generator_js_priv0print_arr(ImmT  ___nl__im__0);
ImmT  generator_js_priv0imm_call(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_bin_op(nlasm0bin_op0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0print_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,nlasm0reg_t0type ___nl__im__3,INT * ___ref___int__4);
ImmT  generator_js_priv0process_ref_reg(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,nlasm0reg_t0type ___nl__im__3,INT  ___nl__int__4,INT  ___nl__int__5);
ImmT  generator_js_priv0print_internal_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,INT * ___ref___int__3);
ImmT  generator_js_priv0print_int_call_sim(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_js_priv0print_const_arr(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_const_hash(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_const_ov(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_const_value(ImmT  ___nl__im__0);
ImmT  generator_js_priv0is_true(ImmT  ___nl__im__0);
ImmT  generator_js_priv0is_false(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_goto(INT  ___nl__int__0);
ImmT  generator_js_priv0print_hash(ImmT  ___nl__im__0);
ImmT  generator_js_priv0print_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,ImmT * ___ref___im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0print_register(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_register_to_assign(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0print_return(nlasm0return0type ___nl__im__0,nlasm0args_type0type ___nl__im__1);
ImmT  generator_js_priv0print_una_op(nlasm0una_op_t0type ___nl__im__0);


ImmT generator_js_priv0get_namespace_name(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(0);
}
ImmT generator_js_priv0get_namespace_name0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 14
c_rt_lib0move(&___nl__im__0,___get_global_string_const(721));
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
return generator_js0generate(*var0, *var1);
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__string__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
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
#line 18
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 19
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_string_const(722));
#line 19
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(128), ___nl__im__4, ___get_global_string_const(167), ___nl__im__5));
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(208)));
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
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 20
___nl__bool__11 = ___nl__int__12;
#line 20
if(___nl__bool__11){ goto label_24;}
#line 20
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 20
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 20
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(212)));
#line 20
c_rt_lib0move(&___nl__im__14, generator_js_priv0print_function_or_singleton(___nl__im__7, ___nl__im__15, &___nl__im__3));
#line 20
c_rt_lib0clear(&___nl__im__15);
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 20
c_rt_lib0clear(&___nl__im__14);
#line 20
c_rt_lib0clear(&___nl__im__7);
#line 20
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 20
goto label_10;
#line 20
label_24:
;
#line 21
c_rt_lib0move(&___nl__im__18,___get_global_string_const(723));
#line 21
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(167)));
#line 21
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 21
c_rt_lib0clear(&___nl__im__18);
#line 21
c_rt_lib0clear(&___nl__im__19);
#line 21
c_rt_lib0move(&___nl__im__20,___get_global_string_const(724));
#line 21
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 21
c_rt_lib0clear(&___nl__im__17);
#line 21
c_rt_lib0clear(&___nl__im__20);
#line 21
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 21
c_rt_lib0clear(&___nl__im__16);
#line 22
___nl__int__21 = 0;
#line 23
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(128)));
#line 23
___nl__int__24 = 0;
#line 23
___nl__int__25 = 1;
#line 23
___nl__int__26 = c_rt_lib0array_len(___nl__im__22);
#line 23
label_41:
;
#line 23
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 23
___nl__bool__27 = ___nl__int__28;
#line 23
if(___nl__bool__27){ goto label_76;}
#line 23
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__22, ___nl__int__24));
#line 23
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 24
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(167)));
#line 24
c_rt_lib0move(&___nl__im__36,___get_global_string_const(314));
#line 24
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 24
c_rt_lib0clear(&___nl__im__35);
#line 24
c_rt_lib0clear(&___nl__im__36);
#line 24
c_rt_lib0move(&___nl__string__37, c_rt_lib0int_to_string(___nl__int__21));
#line 24
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__string__37));
#line 24
c_rt_lib0clear(&___nl__im__34);
#line 24
c_rt_lib0clear(&___nl__string__37);
#line 24
c_rt_lib0move(&___nl__im__38,___get_global_string_const(510));
#line 24
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__38));
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 24
c_rt_lib0clear(&___nl__im__38);
#line 24
c_rt_lib0move(&___nl__im__39, generator_js_priv0print_const_value(___nl__im__23));
#line 24
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 24
c_rt_lib0clear(&___nl__im__32);
#line 24
c_rt_lib0clear(&___nl__im__39);
#line 24
c_rt_lib0move(&___nl__im__40,___get_global_string_const(440));
#line 24
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__40));
#line 24
c_rt_lib0clear(&___nl__im__31);
#line 24
c_rt_lib0clear(&___nl__im__40);
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__30));
#line 24
c_rt_lib0clear(&___nl__im__30);
#line 25
___nl__int__41 = 1;
#line 25
___nl__int__21 = ___nl__int__21 + ___nl__int__41;
#line 25
//clear ___nl__int__41;
#line 25
c_rt_lib0clear(&___nl__im__23);
#line 26
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 26
goto label_41;
#line 26
label_76:
;
#line 27
c_rt_lib0move(&___nl__im__57,___get_global_string_const(723));
#line 27
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__1));
#line 27
c_rt_lib0clear(&___nl__im__57);
#line 27
c_rt_lib0move(&___nl__im__58,___get_global_string_const(725));
#line 27
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__58));
#line 27
c_rt_lib0clear(&___nl__im__56);
#line 27
c_rt_lib0clear(&___nl__im__58);
#line 28
c_rt_lib0move(&___nl__im__59, generator_js_priv0get_namespace_name());
#line 28
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__59));
#line 28
c_rt_lib0clear(&___nl__im__55);
#line 28
c_rt_lib0clear(&___nl__im__59);
#line 28
c_rt_lib0move(&___nl__im__60,___get_global_string_const(726));
#line 28
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__60));
#line 28
c_rt_lib0clear(&___nl__im__54);
#line 28
c_rt_lib0clear(&___nl__im__60);
#line 29
c_rt_lib0move(&___nl__im__61, generator_js_priv0get_namespace_name());
#line 29
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__61));
#line 29
c_rt_lib0clear(&___nl__im__53);
#line 29
c_rt_lib0clear(&___nl__im__61);
#line 29
c_rt_lib0move(&___nl__im__62,___get_global_string_const(111));
#line 29
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__62));
#line 29
c_rt_lib0clear(&___nl__im__52);
#line 29
c_rt_lib0clear(&___nl__im__62);
#line 29
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(212)));
#line 29
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__63));
#line 29
c_rt_lib0clear(&___nl__im__51);
#line 29
c_rt_lib0clear(&___nl__im__63);
#line 29
c_rt_lib0move(&___nl__im__64,___get_global_string_const(727));
#line 29
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__64));
#line 29
c_rt_lib0clear(&___nl__im__50);
#line 29
c_rt_lib0clear(&___nl__im__64);
#line 29
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__2));
#line 29
c_rt_lib0clear(&___nl__im__49);
#line 30
c_rt_lib0move(&___nl__im__65,___get_global_string_const(728));
#line 30
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__65));
#line 30
c_rt_lib0clear(&___nl__im__48);
#line 30
c_rt_lib0clear(&___nl__im__65);
#line 30
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__1));
#line 30
c_rt_lib0clear(&___nl__im__47);
#line 31
c_rt_lib0move(&___nl__im__66,___get_global_string_const(562));
#line 31
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__66));
#line 31
c_rt_lib0clear(&___nl__im__46);
#line 31
c_rt_lib0clear(&___nl__im__66);
#line 31
c_rt_lib0move(&___nl__im__67,___get_global_string_const(467));
#line 31
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__67));
#line 31
c_rt_lib0clear(&___nl__im__45);
#line 31
c_rt_lib0clear(&___nl__im__67);
#line 31
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__1));
#line 31
c_rt_lib0clear(&___nl__im__44);
#line 31
c_rt_lib0move(&___nl__im__68,___get_global_string_const(729));
#line 31
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__68));
#line 31
c_rt_lib0clear(&___nl__im__43);
#line 31
c_rt_lib0clear(&___nl__im__68);
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
//clear ___nl__int__12;
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
//clear ___nl__int__21;
#line 31
c_rt_lib0clear(&___nl__im__22);
#line 31
c_rt_lib0clear(&___nl__im__23);
#line 31
//clear ___nl__int__24;
#line 31
//clear ___nl__int__25;
#line 31
//clear ___nl__int__26;
#line 31
//clear ___nl__bool__27;
#line 31
//clear ___nl__int__28;
#line 31
c_rt_lib0clear(&___nl__im__29);
#line 31
return ___nl__im__42;
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(128));
#line 35
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 35
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__0));
#line 35
c_rt_lib0move(&___nl__string__3,___get_global_string_const(128));
#line 35
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__string__3);
#line 36
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(167)));
#line 36
c_rt_lib0move(&___nl__im__8,___get_global_string_const(314));
#line 36
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0clear(&___nl__im__8);
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(128)));
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
c_rt_lib0move(&___nl__im__14,___get_global_string_const(315));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 40
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(210));
#line 40
if(___nl__bool__3){ goto label_8;}
#line 42
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(465));
#line 42
if(___nl__bool__3){ goto label_23;}
#line 42
c_rt_lib0move(&___nl__im__4,___get_global_string_const(16));
#line 42
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 42
nl_die_arg(___nl__im__4);
#line 40
label_8:
;
#line 41
c_rt_lib0move(&___nl__im__7,___get_global_string_const(111));
#line 41
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 41
c_rt_lib0clear(&___nl__im__7);
#line 41
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
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
c_rt_lib0move(&___nl__im__10,___get_global_string_const(730));
#line 43
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 48
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(210));
#line 48
if(___nl__bool__4){ goto label_9;}
#line 50
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(465));
#line 50
if(___nl__bool__4){ goto label_12;}
#line 50
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 52
goto label_15;
#line 52
label_15:
;
#line 53
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
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
c_rt_lib0clear(&___nl__im__6);
#line 53
return NULL;
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 57
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 57
c_rt_lib0clear(&___nl__im__3);
#line 57
___nl__bool__2 = !___nl__bool__2;
#line 57
if(___nl__bool__2){ goto label_13;}
#line 58
c_rt_lib0move(&___nl__im__5,___get_global_string_const(730));
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
c_rt_lib0move(&___nl__im__11,___get_global_string_const(111));
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
c_rt_lib0move(&___nl__im__12,___get_global_string_const(111));
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
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
return NULL;
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(110));
#line 65
c_rt_lib0move(&___nl__im__2,___get_global_string_const(323));
#line 65
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0move(&___nl__im__3,___get_global_string_const(279));
#line 66
c_rt_lib0move(&___nl__im__4,___get_global_string_const(324));
#line 66
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 67
c_rt_lib0move(&___nl__im__5, string0lf());
#line 67
c_rt_lib0move(&___nl__im__6,___get_global_string_const(327));
#line 67
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 68
c_rt_lib0move(&___nl__im__7, string0r());
#line 68
c_rt_lib0move(&___nl__im__8,___get_global_string_const(328));
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
c_rt_lib0move(&___nl__im__11,___get_global_string_const(614));
#line 69
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 69
c_rt_lib0clear(&___nl__im__9);
#line 69
c_rt_lib0clear(&___nl__im__11);
#line 70
c_rt_lib0move(&___nl__im__12, string0tab());
#line 70
c_rt_lib0move(&___nl__im__13,___get_global_string_const(607));
#line 70
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 70
c_rt_lib0clear(&___nl__im__12);
#line 70
c_rt_lib0clear(&___nl__im__13);
#line 72
c_rt_lib0move(&___nl__im__16,___get_global_string_const(279));
#line 72
c_rt_lib0move(&___nl__im__18, string0lf());
#line 72
c_rt_lib0move(&___nl__im__19,___get_global_string_const(327));
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
c_rt_lib0move(&___nl__im__20,___get_global_string_const(279));
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
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
bool  ___nl__bool__37 = false;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
#line 80
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 80
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 80
c_rt_lib0clear(&___nl__im__3);
#line 80
___nl__int__4 = 0;
#line 80
___nl__int__5 = ___nl__int__2 > ___nl__int__4;
#line 80
___nl__bool__1 = ___nl__int__5;
#line 80
//clear ___nl__int__2;
#line 80
//clear ___nl__int__4;
#line 80
//clear ___nl__int__5;
#line 80
___nl__bool__1 = !___nl__bool__1;
#line 80
if(___nl__bool__1){ goto label_16;}
#line 80
___nl__bool__6 = false;
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
//clear ___nl__bool__1;
#line 80
return ___nl__bool__6;
#line 80
goto label_16;
#line 80
label_16:
;
#line 80
//clear ___nl__bool__1;
#line 80
//clear ___nl__bool__6;
#line 81
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 81
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(193));
#line 81
c_rt_lib0clear(&___nl__im__8);
#line 81
___nl__bool__7 = !___nl__bool__7;
#line 81
if(___nl__bool__7){ goto label_29;}
#line 81
___nl__bool__9 = true;
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
//clear ___nl__bool__7;
#line 81
return ___nl__bool__9;
#line 81
goto label_29;
#line 81
label_29:
;
#line 81
//clear ___nl__bool__7;
#line 81
//clear ___nl__bool__9;
#line 82
___nl__bool__10 = false;
#line 83
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(132)));
#line 83
___nl__int__13 = 1;
#line 83
___nl__int__13 = -___nl__int__13;
#line 83
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 83
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(219)));
#line 83
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_string_const(205), ___nl__im__12, ___get_global_string_const(218), ___nl__im__14, ___get_global_string_const(351), ___nl__im__15));
#line 83
c_rt_lib0clear(&___nl__im__12);
#line 83
//clear ___nl__int__13;
#line 83
c_rt_lib0clear(&___nl__im__14);
#line 83
c_rt_lib0clear(&___nl__im__15);
#line 84
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 84
___nl__int__18 = 0;
#line 84
___nl__int__19 = 1;
#line 84
___nl__int__20 = c_rt_lib0array_len(___nl__im__16);
#line 84
label_47:
;
#line 84
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 84
___nl__bool__21 = ___nl__int__22;
#line 84
if(___nl__bool__21){ goto label_216;}
#line 84
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__16, ___nl__int__18));
#line 84
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 85
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(227)));
#line 86
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(232));
#line 86
___nl__bool__25 = !___nl__bool__25;
#line 86
if(___nl__bool__25){ goto label_93;}
#line 87
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(232)));
#line 88
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(268)));
#line 88
c_rt_lib0move(&___nl__im__29,___get_global_string_const(533));
#line 88
___nl__bool__27 = c_rt_lib0eq(___nl__im__28, ___nl__im__29);
#line 88
c_rt_lib0clear(&___nl__im__28);
#line 88
c_rt_lib0clear(&___nl__im__29);
#line 88
___nl__bool__27 = !___nl__bool__27;
#line 88
___nl__bool__27 = !___nl__bool__27;
#line 88
if(___nl__bool__27){ goto label_72;}
#line 88
c_rt_lib0clear(&___nl__im__24);
#line 88
//clear ___nl__bool__25;
#line 88
c_rt_lib0clear(&___nl__im__26);
#line 88
//clear ___nl__bool__27;
#line 88
goto label_213;
#line 88
goto label_72;
#line 88
label_72:
;
#line 88
//clear ___nl__bool__27;
#line 89
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(266)));
#line 89
c_rt_lib0move(&___nl__im__32,___get_global_string_const(405));
#line 89
___nl__bool__30 = c_rt_lib0eq(___nl__im__31, ___nl__im__32);
#line 89
c_rt_lib0clear(&___nl__im__31);
#line 89
c_rt_lib0clear(&___nl__im__32);
#line 89
___nl__bool__30 = !___nl__bool__30;
#line 89
___nl__bool__30 = !___nl__bool__30;
#line 89
if(___nl__bool__30){ goto label_88;}
#line 89
c_rt_lib0clear(&___nl__im__24);
#line 89
//clear ___nl__bool__25;
#line 89
c_rt_lib0clear(&___nl__im__26);
#line 89
//clear ___nl__bool__30;
#line 89
goto label_213;
#line 89
goto label_88;
#line 89
label_88:
;
#line 89
//clear ___nl__bool__30;
#line 90
___nl__bool__10 = true;
#line 91
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(223)));
#line 92
goto label_207;
#line 92
label_93:
;
#line 92
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(246));
#line 92
___nl__bool__25 = !___nl__bool__25;
#line 92
if(___nl__bool__25){ goto label_169;}
#line 93
___nl__bool__33 = ___nl__bool__10;
#line 93
___nl__bool__33 = !___nl__bool__33;
#line 93
___nl__bool__33 = !___nl__bool__33;
#line 93
if(___nl__bool__33){ goto label_119;}
#line 93
___nl__bool__34 = false;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
//clear ___nl__bool__10;
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__16);
#line 93
c_rt_lib0clear(&___nl__im__17);
#line 93
//clear ___nl__int__18;
#line 93
//clear ___nl__int__19;
#line 93
//clear ___nl__int__20;
#line 93
//clear ___nl__bool__21;
#line 93
//clear ___nl__int__22;
#line 93
c_rt_lib0clear(&___nl__im__23);
#line 93
c_rt_lib0clear(&___nl__im__24);
#line 93
//clear ___nl__bool__25;
#line 93
c_rt_lib0clear(&___nl__im__26);
#line 93
//clear ___nl__bool__33;
#line 93
return ___nl__bool__34;
#line 93
goto label_119;
#line 93
label_119:
;
#line 93
//clear ___nl__bool__33;
#line 93
//clear ___nl__bool__34;
#line 94
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(246)));
#line 95
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(224));
#line 95
___nl__bool__36 = !___nl__bool__36;
#line 95
___nl__bool__36 = !___nl__bool__36;
#line 95
if(___nl__bool__36){ goto label_146;}
#line 95
___nl__bool__37 = false;
#line 95
c_rt_lib0clear(&___nl__im__0);
#line 95
//clear ___nl__bool__10;
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 95
//clear ___nl__int__18;
#line 95
//clear ___nl__int__19;
#line 95
//clear ___nl__int__20;
#line 95
//clear ___nl__bool__21;
#line 95
//clear ___nl__int__22;
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
//clear ___nl__bool__25;
#line 95
c_rt_lib0clear(&___nl__im__26);
#line 95
c_rt_lib0clear(&___nl__im__35);
#line 95
//clear ___nl__bool__36;
#line 95
return ___nl__bool__37;
#line 95
goto label_146;
#line 95
label_146:
;
#line 95
//clear ___nl__bool__36;
#line 95
//clear ___nl__bool__37;
#line 96
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(224)));
#line 96
___nl__bool__38 = nlasm0eq_reg(___nl__im__39, ___nl__im__11);
#line 96
c_rt_lib0clear(&___nl__im__39);
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
//clear ___nl__bool__10;
#line 96
c_rt_lib0clear(&___nl__im__11);
#line 96
c_rt_lib0clear(&___nl__im__16);
#line 96
c_rt_lib0clear(&___nl__im__17);
#line 96
//clear ___nl__int__18;
#line 96
//clear ___nl__int__19;
#line 96
//clear ___nl__int__20;
#line 96
//clear ___nl__bool__21;
#line 96
//clear ___nl__int__22;
#line 96
c_rt_lib0clear(&___nl__im__23);
#line 96
c_rt_lib0clear(&___nl__im__24);
#line 96
//clear ___nl__bool__25;
#line 96
c_rt_lib0clear(&___nl__im__26);
#line 96
c_rt_lib0clear(&___nl__im__35);
#line 96
return ___nl__bool__38;
#line 97
goto label_207;
#line 97
label_169:
;
#line 97
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(248));
#line 97
___nl__bool__25 = !___nl__bool__25;
#line 97
if(___nl__bool__25){ goto label_174;}
#line 98
goto label_207;
#line 98
label_174:
;
#line 98
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(251));
#line 98
___nl__bool__25 = !___nl__bool__25;
#line 98
if(___nl__bool__25){ goto label_179;}
#line 99
goto label_207;
#line 99
label_179:
;
#line 100
___nl__bool__40 = ___nl__bool__10;
#line 100
___nl__bool__40 = !___nl__bool__40;
#line 100
if(___nl__bool__40){ goto label_203;}
#line 100
___nl__bool__41 = false;
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
//clear ___nl__bool__10;
#line 100
c_rt_lib0clear(&___nl__im__11);
#line 100
c_rt_lib0clear(&___nl__im__16);
#line 100
c_rt_lib0clear(&___nl__im__17);
#line 100
//clear ___nl__int__18;
#line 100
//clear ___nl__int__19;
#line 100
//clear ___nl__int__20;
#line 100
//clear ___nl__bool__21;
#line 100
//clear ___nl__int__22;
#line 100
c_rt_lib0clear(&___nl__im__23);
#line 100
c_rt_lib0clear(&___nl__im__24);
#line 100
//clear ___nl__bool__25;
#line 100
c_rt_lib0clear(&___nl__im__26);
#line 100
c_rt_lib0clear(&___nl__im__35);
#line 100
//clear ___nl__bool__38;
#line 100
//clear ___nl__bool__40;
#line 100
return ___nl__bool__41;
#line 100
goto label_203;
#line 100
label_203:
;
#line 100
//clear ___nl__bool__40;
#line 100
//clear ___nl__bool__41;
#line 101
goto label_207;
#line 101
label_207:
;
#line 101
//clear ___nl__bool__25;
#line 101
c_rt_lib0clear(&___nl__im__26);
#line 101
c_rt_lib0clear(&___nl__im__35);
#line 101
//clear ___nl__bool__38;
#line 101
c_rt_lib0clear(&___nl__im__17);
#line 101
label_213:
;
#line 102
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 102
goto label_47;
#line 102
label_216:
;
#line 103
___nl__bool__42 = false;
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
//clear ___nl__bool__10;
#line 103
c_rt_lib0clear(&___nl__im__11);
#line 103
c_rt_lib0clear(&___nl__im__16);
#line 103
c_rt_lib0clear(&___nl__im__17);
#line 103
//clear ___nl__int__18;
#line 103
//clear ___nl__int__19;
#line 103
//clear ___nl__int__20;
#line 103
//clear ___nl__bool__21;
#line 103
//clear ___nl__int__22;
#line 103
c_rt_lib0clear(&___nl__im__23);
#line 103
c_rt_lib0clear(&___nl__im__24);
#line 103
return ___nl__bool__42;
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
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__string__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__string__86 = NULL;
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
ImmT  ___nl__string__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__string__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__string__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__string__117 = NULL;
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
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
#line 107
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(731));
#line 111
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 111
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(167), ___nl__im__10);
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
c_rt_lib0clear(&___nl__im__10);
#line 112
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(465)));
#line 112
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 112
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(209), ___nl__im__12);
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 112
c_rt_lib0clear(&___nl__im__12);
#line 113
c_rt_lib0move(&___nl__im__14,___get_global_string_const(732));
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
c_rt_lib0move(&___nl__im__19,___get_global_string_const(723));
#line 115
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__13));
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0move(&___nl__im__20,___get_global_string_const(440));
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
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 116
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(210));
#line 116
if(___nl__bool__23){ goto label_47;}
#line 118
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(465));
#line 118
if(___nl__bool__23){ goto label_62;}
#line 118
c_rt_lib0move(&___nl__im__24,___get_global_string_const(16));
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
c_rt_lib0move(&___nl__im__29,___get_global_string_const(111));
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
c_rt_lib0move(&___nl__im__30,___get_global_string_const(733));
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
c_rt_lib0move(&___nl__im__33,___get_global_string_const(734));
#line 119
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__5));
#line 119
c_rt_lib0clear(&___nl__im__33);
#line 119
c_rt_lib0move(&___nl__im__34,___get_global_string_const(735));
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
c_rt_lib0move(&___nl__im__43,___get_global_string_const(736));
#line 122
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__13));
#line 122
c_rt_lib0clear(&___nl__im__43);
#line 122
c_rt_lib0move(&___nl__im__44,___get_global_string_const(737));
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
c_rt_lib0move(&___nl__im__45,___get_global_string_const(562));
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
c_rt_lib0move(&___nl__im__47,___get_global_string_const(738));
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
c_rt_lib0move(&___nl__im__48,___get_global_string_const(739));
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
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 132
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(210));
#line 132
if(___nl__bool__51){ goto label_126;}
#line 154
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(465));
#line 154
if(___nl__bool__51){ goto label_316;}
#line 154
c_rt_lib0move(&___nl__im__52,___get_global_string_const(16));
#line 154
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__50));
#line 154
nl_die_arg(___nl__im__52);
#line 132
label_126:
;
#line 133
c_rt_lib0move(&___nl__im__59, generator_js_priv0get_namespace_name());
#line 133
c_rt_lib0move(&___nl__im__60,___get_global_string_const(111));
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
c_rt_lib0move(&___nl__im__61,___get_global_string_const(740));
#line 133
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__61));
#line 133
c_rt_lib0clear(&___nl__im__57);
#line 133
c_rt_lib0clear(&___nl__im__61);
#line 133
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
#line 133
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__62));
#line 133
c_rt_lib0clear(&___nl__im__56);
#line 133
c_rt_lib0clear(&___nl__im__62);
#line 133
c_rt_lib0move(&___nl__im__63,___get_global_string_const(741));
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
c_rt_lib0move(&___nl__im__66,___get_global_string_const(37));
#line 136
c_rt_lib0move(&___nl__im__67,___get_global_string_const(37));
#line 137
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 137
___nl__int__70 = 0;
#line 137
___nl__int__71 = 1;
#line 137
___nl__int__72 = c_rt_lib0array_len(___nl__im__68);
#line 137
label_159:
;
#line 137
___nl__int__74 = ___nl__int__70 >= ___nl__int__72;
#line 137
___nl__bool__73 = ___nl__int__74;
#line 137
if(___nl__bool__73){ goto label_278;}
#line 137
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_get(___nl__im__68, ___nl__int__70));
#line 137
c_rt_lib0copy(&___nl__im__69, ___nl__im__75);
#line 138
___nl__int__77 = 0;
#line 138
___nl__int__78 = ___nl__int__65 == ___nl__int__77;
#line 138
___nl__bool__76 = ___nl__int__78;
#line 138
//clear ___nl__int__77;
#line 138
//clear ___nl__int__78;
#line 138
___nl__bool__76 = !___nl__bool__76;
#line 138
___nl__bool__76 = !___nl__bool__76;
#line 138
if(___nl__bool__76){ goto label_177;}
#line 138
c_rt_lib0move(&___nl__im__79,___get_global_string_const(326));
#line 138
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__79));
#line 138
c_rt_lib0clear(&___nl__im__79);
#line 138
goto label_177;
#line 138
label_177:
;
#line 138
//clear ___nl__bool__76;
#line 139
c_rt_lib0move(&___nl__im__81,___get_global_string_const(277));
#line 139
c_rt_lib0move(&___nl__string__82, c_rt_lib0int_to_string(___nl__int__65));
#line 139
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__string__82));
#line 139
c_rt_lib0clear(&___nl__im__81);
#line 139
c_rt_lib0clear(&___nl__string__82);
#line 139
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__80));
#line 139
c_rt_lib0clear(&___nl__im__80);
#line 140
c_rt_lib0move(&___nl__im__85,___get_global_string_const(742));
#line 140
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__65));
#line 140
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 140
c_rt_lib0clear(&___nl__im__85);
#line 140
c_rt_lib0clear(&___nl__string__86);
#line 140
c_rt_lib0move(&___nl__im__87,___get_global_string_const(562));
#line 140
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 140
c_rt_lib0clear(&___nl__im__84);
#line 140
c_rt_lib0clear(&___nl__im__87);
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__83));
#line 140
c_rt_lib0clear(&___nl__im__83);
#line 141
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(353)));
#line 141
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__88, ___get_global_string_const(40));
#line 141
if(___nl__bool__89){ goto label_205;}
#line 144
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__88, ___get_global_string_const(224));
#line 144
if(___nl__bool__89){ goto label_255;}
#line 144
c_rt_lib0move(&___nl__im__90,___get_global_string_const(16));
#line 144
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__90, ___nl__im__88));
#line 144
nl_die_arg(___nl__im__90);
#line 141
label_205:
;
#line 142
c_rt_lib0move(&___nl__im__96,___get_global_string_const(743));
#line 142
c_rt_lib0move(&___nl__im__98,___get_global_string_const(40));
#line 142
c_rt_lib0move(&___nl__im__97, generator_js_priv0imm_call(___nl__im__98));
#line 142
c_rt_lib0clear(&___nl__im__98);
#line 142
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__97));
#line 142
c_rt_lib0clear(&___nl__im__96);
#line 142
c_rt_lib0clear(&___nl__im__97);
#line 142
c_rt_lib0move(&___nl__im__99,___get_global_string_const(455));
#line 142
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__99));
#line 142
c_rt_lib0clear(&___nl__im__95);
#line 142
c_rt_lib0clear(&___nl__im__99);
#line 142
c_rt_lib0move(&___nl__im__100,___get_global_string_const(744));
#line 142
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__100));
#line 142
c_rt_lib0clear(&___nl__im__94);
#line 142
c_rt_lib0clear(&___nl__im__100);
#line 142
c_rt_lib0move(&___nl__string__101, c_rt_lib0int_to_string(___nl__int__65));
#line 142
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__string__101));
#line 142
c_rt_lib0clear(&___nl__im__93);
#line 142
c_rt_lib0clear(&___nl__string__101);
#line 142
c_rt_lib0move(&___nl__im__102,___get_global_string_const(745));
#line 142
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__102));
#line 142
c_rt_lib0clear(&___nl__im__92);
#line 142
c_rt_lib0clear(&___nl__im__102);
#line 142
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__91));
#line 142
c_rt_lib0clear(&___nl__im__91);
#line 143
c_rt_lib0move(&___nl__im__108,___get_global_string_const(746));
#line 143
c_rt_lib0move(&___nl__string__109, c_rt_lib0int_to_string(___nl__int__65));
#line 143
c_rt_lib0move(&___nl__im__107, c_rt_lib0concat_new(___nl__im__108, ___nl__string__109));
#line 143
c_rt_lib0clear(&___nl__im__108);
#line 143
c_rt_lib0clear(&___nl__string__109);
#line 143
c_rt_lib0move(&___nl__im__110,___get_global_string_const(747));
#line 143
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__110));
#line 143
c_rt_lib0clear(&___nl__im__107);
#line 143
c_rt_lib0clear(&___nl__im__110);
#line 143
c_rt_lib0move(&___nl__string__111, c_rt_lib0int_to_string(___nl__int__65));
#line 143
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__string__111));
#line 143
c_rt_lib0clear(&___nl__im__106);
#line 143
c_rt_lib0clear(&___nl__string__111);
#line 143
c_rt_lib0move(&___nl__im__112,___get_global_string_const(748));
#line 143
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__112));
#line 143
c_rt_lib0clear(&___nl__im__105);
#line 143
c_rt_lib0clear(&___nl__im__112);
#line 143
c_rt_lib0move(&___nl__im__113, string0lf());
#line 143
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__113));
#line 143
c_rt_lib0clear(&___nl__im__104);
#line 143
c_rt_lib0clear(&___nl__im__113);
#line 143
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_add(___nl__im__67, ___nl__im__103));
#line 143
c_rt_lib0clear(&___nl__im__103);
#line 144
goto label_268;
#line 144
label_255:
;
#line 145
c_rt_lib0move(&___nl__im__116,___get_global_string_const(744));
#line 145
c_rt_lib0move(&___nl__string__117, c_rt_lib0int_to_string(___nl__int__65));
#line 145
c_rt_lib0move(&___nl__im__115, c_rt_lib0concat_new(___nl__im__116, ___nl__string__117));
#line 145
c_rt_lib0clear(&___nl__im__116);
#line 145
c_rt_lib0clear(&___nl__string__117);
#line 145
c_rt_lib0move(&___nl__im__118,___get_global_string_const(503));
#line 145
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__115, ___nl__im__118));
#line 145
c_rt_lib0clear(&___nl__im__115);
#line 145
c_rt_lib0clear(&___nl__im__118);
#line 145
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__114));
#line 145
c_rt_lib0clear(&___nl__im__114);
#line 146
goto label_268;
#line 146
label_268:
;
#line 147
c_rt_lib0move(&___nl__im__119, string0lf());
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__119));
#line 147
c_rt_lib0clear(&___nl__im__119);
#line 148
___nl__int__120 = 1;
#line 148
___nl__int__65 = ___nl__int__65 + ___nl__int__120;
#line 148
//clear ___nl__int__120;
#line 148
c_rt_lib0clear(&___nl__im__69);
#line 149
___nl__int__70 = ___nl__int__70 + ___nl__int__71;
#line 149
goto label_159;
#line 149
label_278:
;
#line 150
c_rt_lib0move(&___nl__im__126,___get_global_string_const(749));
#line 150
c_rt_lib0move(&___nl__im__127, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__1));
#line 150
c_rt_lib0move(&___nl__im__125, c_rt_lib0concat_new(___nl__im__126, ___nl__im__127));
#line 150
c_rt_lib0clear(&___nl__im__126);
#line 150
c_rt_lib0clear(&___nl__im__127);
#line 150
c_rt_lib0move(&___nl__im__128,___get_global_string_const(455));
#line 150
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__125, ___nl__im__128));
#line 150
c_rt_lib0clear(&___nl__im__125);
#line 150
c_rt_lib0clear(&___nl__im__128);
#line 150
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__66));
#line 150
c_rt_lib0clear(&___nl__im__124);
#line 150
c_rt_lib0move(&___nl__im__129,___get_global_string_const(320));
#line 150
c_rt_lib0move(&___nl__im__122, c_rt_lib0concat_new(___nl__im__123, ___nl__im__129));
#line 150
c_rt_lib0clear(&___nl__im__123);
#line 150
c_rt_lib0clear(&___nl__im__129);
#line 150
c_rt_lib0move(&___nl__im__130, string0lf());
#line 150
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__im__130));
#line 150
c_rt_lib0clear(&___nl__im__122);
#line 150
c_rt_lib0clear(&___nl__im__130);
#line 150
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__121));
#line 150
c_rt_lib0clear(&___nl__im__121);
#line 151
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__67));
#line 152
c_rt_lib0move(&___nl__im__132,___get_global_string_const(750));
#line 152
c_rt_lib0move(&___nl__im__133, string0lf());
#line 152
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__im__133));
#line 152
c_rt_lib0clear(&___nl__im__132);
#line 152
c_rt_lib0clear(&___nl__im__133);
#line 152
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__131));
#line 152
c_rt_lib0clear(&___nl__im__131);
#line 153
c_rt_lib0move(&___nl__im__135,___get_global_string_const(305));
#line 153
c_rt_lib0move(&___nl__im__136, string0lf());
#line 153
c_rt_lib0move(&___nl__im__134, c_rt_lib0concat_new(___nl__im__135, ___nl__im__136));
#line 153
c_rt_lib0clear(&___nl__im__135);
#line 153
c_rt_lib0clear(&___nl__im__136);
#line 153
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__134));
#line 153
c_rt_lib0clear(&___nl__im__134);
#line 154
goto label_321;
#line 154
label_316:
;
#line 155
c_rt_lib0move(&___nl__im__137, string0lf());
#line 155
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__137));
#line 155
c_rt_lib0clear(&___nl__im__137);
#line 156
goto label_321;
#line 156
label_321:
;
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__50);
#line 157
//clear ___nl__bool__51;
#line 157
c_rt_lib0clear(&___nl__im__52);
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
//clear ___nl__int__74;
#line 157
c_rt_lib0clear(&___nl__im__75);
#line 157
c_rt_lib0clear(&___nl__im__88);
#line 157
//clear ___nl__bool__89;
#line 157
c_rt_lib0clear(&___nl__im__90);
#line 157
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
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__string__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__string__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__string__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__string__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__string__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__string__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
INT  ___nl__int__85 = 0;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
INT  ___nl__int__93 = 0;
INT  ___nl__int__94 = 0;
bool  ___nl__bool__95 = false;
INT  ___nl__int__96 = 0;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
#line 161
c_rt_lib0move(&___nl__im__3, string0lf());
#line 162
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 162
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(210));
#line 162
if(___nl__bool__5){ goto label_9;}
#line 164
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(465));
#line 164
if(___nl__bool__5){ goto label_26;}
#line 164
c_rt_lib0move(&___nl__im__6,___get_global_string_const(16));
#line 164
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 164
nl_die_arg(___nl__im__6);
#line 162
label_9:
;
#line 163
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 163
c_rt_lib0move(&___nl__im__11,___get_global_string_const(111));
#line 163
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0clear(&___nl__im__11);
#line 163
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 163
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__12);
#line 163
c_rt_lib0move(&___nl__im__13,___get_global_string_const(751));
#line 163
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__13);
#line 163
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__7));
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 164
goto label_39;
#line 164
label_26:
;
#line 165
c_rt_lib0move(&___nl__im__16,___get_global_string_const(734));
#line 165
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 165
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 165
c_rt_lib0clear(&___nl__im__16);
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 165
c_rt_lib0move(&___nl__im__18,___get_global_string_const(455));
#line 165
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 165
c_rt_lib0clear(&___nl__im__15);
#line 165
c_rt_lib0clear(&___nl__im__18);
#line 165
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__14));
#line 165
c_rt_lib0clear(&___nl__im__14);
#line 166
goto label_39;
#line 166
label_39:
;
#line 167
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 167
___nl__int__19 = c_rt_lib0array_len(___nl__im__20);
#line 167
c_rt_lib0clear(&___nl__im__20);
#line 167
___nl__int__21 = 0;
#line 167
___nl__int__22 = 1;
#line 167
label_45:
;
#line 167
___nl__int__24 = ___nl__int__21 >= ___nl__int__19;
#line 167
___nl__bool__23 = ___nl__int__24;
#line 167
if(___nl__bool__23){ goto label_72;}
#line 168
___nl__int__26 = 0;
#line 168
___nl__int__27 = ___nl__int__21 == ___nl__int__26;
#line 168
___nl__bool__25 = ___nl__int__27;
#line 168
//clear ___nl__int__26;
#line 168
//clear ___nl__int__27;
#line 168
___nl__bool__25 = !___nl__bool__25;
#line 168
___nl__bool__25 = !___nl__bool__25;
#line 168
if(___nl__bool__25){ goto label_61;}
#line 168
c_rt_lib0move(&___nl__im__28,___get_global_string_const(326));
#line 168
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__28));
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 168
goto label_61;
#line 168
label_61:
;
#line 168
//clear ___nl__bool__25;
#line 169
c_rt_lib0move(&___nl__im__30,___get_global_string_const(752));
#line 169
c_rt_lib0move(&___nl__string__31, c_rt_lib0int_to_string(___nl__int__21));
#line 169
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__string__31));
#line 169
c_rt_lib0clear(&___nl__im__30);
#line 169
c_rt_lib0clear(&___nl__string__31);
#line 169
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__29));
#line 169
c_rt_lib0clear(&___nl__im__29);
#line 170
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 170
goto label_45;
#line 170
label_72:
;
#line 171
c_rt_lib0move(&___nl__im__33,___get_global_string_const(753));
#line 171
c_rt_lib0move(&___nl__im__34, string0lf());
#line 171
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 171
c_rt_lib0clear(&___nl__im__33);
#line 171
c_rt_lib0clear(&___nl__im__34);
#line 171
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__32));
#line 171
c_rt_lib0clear(&___nl__im__32);
#line 172
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 172
___nl__int__35 = c_rt_lib0array_len(___nl__im__36);
#line 172
c_rt_lib0clear(&___nl__im__36);
#line 172
___nl__int__37 = 0;
#line 172
___nl__int__38 = 1;
#line 172
label_85:
;
#line 172
___nl__int__40 = ___nl__int__37 >= ___nl__int__35;
#line 172
___nl__bool__39 = ___nl__int__40;
#line 172
if(___nl__bool__39){ goto label_164;}
#line 173
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 173
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__43, ___nl__int__37));
#line 173
c_rt_lib0clear(&___nl__im__43);
#line 173
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(353)));
#line 173
c_rt_lib0clear(&___nl__im__42);
#line 173
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(224));
#line 173
if(___nl__bool__44){ goto label_101;}
#line 175
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(40));
#line 175
if(___nl__bool__44){ goto label_122;}
#line 175
c_rt_lib0move(&___nl__im__45,___get_global_string_const(16));
#line 175
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__45, ___nl__im__41));
#line 175
nl_die_arg(___nl__im__45);
#line 173
label_101:
;
#line 174
c_rt_lib0move(&___nl__im__50,___get_global_string_const(754));
#line 174
c_rt_lib0move(&___nl__string__51, c_rt_lib0int_to_string(___nl__int__37));
#line 174
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__string__51));
#line 174
c_rt_lib0clear(&___nl__im__50);
#line 174
c_rt_lib0clear(&___nl__string__51);
#line 174
c_rt_lib0move(&___nl__im__52,___get_global_string_const(755));
#line 174
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 174
c_rt_lib0clear(&___nl__im__49);
#line 174
c_rt_lib0clear(&___nl__im__52);
#line 174
c_rt_lib0move(&___nl__string__53, c_rt_lib0int_to_string(___nl__int__37));
#line 174
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__string__53));
#line 174
c_rt_lib0clear(&___nl__im__48);
#line 174
c_rt_lib0clear(&___nl__string__53);
#line 174
c_rt_lib0move(&___nl__im__54,___get_global_string_const(440));
#line 174
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__54));
#line 174
c_rt_lib0clear(&___nl__im__47);
#line 174
c_rt_lib0clear(&___nl__im__54);
#line 174
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__46));
#line 174
c_rt_lib0clear(&___nl__im__46);
#line 175
goto label_143;
#line 175
label_122:
;
#line 176
c_rt_lib0move(&___nl__im__59,___get_global_string_const(754));
#line 176
c_rt_lib0move(&___nl__string__60, c_rt_lib0int_to_string(___nl__int__37));
#line 176
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__string__60));
#line 176
c_rt_lib0clear(&___nl__im__59);
#line 176
c_rt_lib0clear(&___nl__string__60);
#line 176
c_rt_lib0move(&___nl__im__61,___get_global_string_const(755));
#line 176
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__61));
#line 176
c_rt_lib0clear(&___nl__im__58);
#line 176
c_rt_lib0clear(&___nl__im__61);
#line 176
c_rt_lib0move(&___nl__string__62, c_rt_lib0int_to_string(___nl__int__37));
#line 176
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__string__62));
#line 176
c_rt_lib0clear(&___nl__im__57);
#line 176
c_rt_lib0clear(&___nl__string__62);
#line 176
c_rt_lib0move(&___nl__im__63,___get_global_string_const(756));
#line 176
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__63));
#line 176
c_rt_lib0clear(&___nl__im__56);
#line 176
c_rt_lib0clear(&___nl__im__63);
#line 176
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__55));
#line 176
c_rt_lib0clear(&___nl__im__55);
#line 177
goto label_143;
#line 177
label_143:
;
#line 178
c_rt_lib0move(&___nl__im__67, generator_js_priv0get_namespace_name());
#line 178
c_rt_lib0move(&___nl__im__68,___get_global_string_const(757));
#line 178
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__68));
#line 178
c_rt_lib0clear(&___nl__im__67);
#line 178
c_rt_lib0clear(&___nl__im__68);
#line 178
c_rt_lib0move(&___nl__string__69, c_rt_lib0int_to_string(___nl__int__37));
#line 178
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__string__69));
#line 178
c_rt_lib0clear(&___nl__im__66);
#line 178
c_rt_lib0clear(&___nl__string__69);
#line 178
c_rt_lib0move(&___nl__im__70,___get_global_string_const(503));
#line 178
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__70));
#line 178
c_rt_lib0clear(&___nl__im__65);
#line 178
c_rt_lib0clear(&___nl__im__70);
#line 178
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__64));
#line 178
c_rt_lib0clear(&___nl__im__64);
#line 178
c_rt_lib0clear(&___nl__im__41);
#line 178
//clear ___nl__bool__44;
#line 178
c_rt_lib0clear(&___nl__im__45);
#line 179
___nl__int__37 = ___nl__int__37 + ___nl__int__38;
#line 179
goto label_85;
#line 179
label_164:
;
#line 180
c_rt_lib0move(&___nl__im__71, string0lf());
#line 180
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__71));
#line 180
c_rt_lib0clear(&___nl__im__71);
#line 181
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 181
___nl__int__72 = c_rt_lib0array_len(___nl__im__73);
#line 181
c_rt_lib0clear(&___nl__im__73);
#line 181
label_171:
;
#line 181
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 181
___nl__int__75 = c_rt_lib0array_len(___nl__im__76);
#line 181
c_rt_lib0clear(&___nl__im__76);
#line 181
___nl__int__77 = ___nl__int__72 < ___nl__int__75;
#line 181
___nl__bool__74 = ___nl__int__77;
#line 181
//clear ___nl__int__75;
#line 181
//clear ___nl__int__77;
#line 181
___nl__bool__74 = !___nl__bool__74;
#line 181
if(___nl__bool__74){ goto label_200;}
#line 182
c_rt_lib0move(&___nl__im__81,___get_global_string_const(754));
#line 182
c_rt_lib0move(&___nl__string__82, c_rt_lib0int_to_string(___nl__int__72));
#line 182
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__string__82));
#line 182
c_rt_lib0clear(&___nl__im__81);
#line 182
c_rt_lib0clear(&___nl__string__82);
#line 182
c_rt_lib0move(&___nl__im__83,___get_global_string_const(758));
#line 182
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__83));
#line 182
c_rt_lib0clear(&___nl__im__80);
#line 182
c_rt_lib0clear(&___nl__im__83);
#line 182
c_rt_lib0move(&___nl__im__84, string0lf());
#line 182
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__84));
#line 182
c_rt_lib0clear(&___nl__im__79);
#line 182
c_rt_lib0clear(&___nl__im__84);
#line 182
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__78));
#line 182
c_rt_lib0clear(&___nl__im__78);
#line 181
___nl__int__85 = 1;
#line 181
___nl__int__72 = ___nl__int__72 + ___nl__int__85;
#line 181
//clear ___nl__int__85;
#line 183
goto label_171;
#line 183
label_200:
;
#line 184
c_rt_lib0move(&___nl__im__87,___get_global_string_const(759));
#line 184
c_rt_lib0move(&___nl__im__88, string0lf());
#line 184
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__88));
#line 184
c_rt_lib0clear(&___nl__im__87);
#line 184
c_rt_lib0clear(&___nl__im__88);
#line 184
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__86));
#line 184
c_rt_lib0clear(&___nl__im__86);
#line 185
___nl__int__89 = 0;
#line 187
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 187
___nl__int__92 = 0;
#line 187
___nl__int__93 = 1;
#line 187
___nl__int__94 = c_rt_lib0array_len(___nl__im__90);
#line 187
label_213:
;
#line 187
___nl__int__96 = ___nl__int__92 >= ___nl__int__94;
#line 187
___nl__bool__95 = ___nl__int__96;
#line 187
if(___nl__bool__95){ goto label_227;}
#line 187
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__90, ___nl__int__92));
#line 187
c_rt_lib0copy(&___nl__im__91, ___nl__im__97);
#line 186
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 186
c_rt_lib0move(&___nl__im__98, generator_js_priv0print_command(___nl__im__91, ___nl__im__99, &___nl__int__89, ___ref___im__2));
#line 186
c_rt_lib0clear(&___nl__im__99);
#line 186
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__98));
#line 186
c_rt_lib0clear(&___nl__im__98);
#line 186
c_rt_lib0clear(&___nl__im__91);
#line 186
___nl__int__92 = ___nl__int__92 + ___nl__int__93;
#line 186
goto label_213;
#line 186
label_227:
;
#line 188
c_rt_lib0move(&___nl__im__102,___get_global_string_const(760));
#line 188
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__3, ___nl__im__102));
#line 188
c_rt_lib0clear(&___nl__im__102);
#line 188
c_rt_lib0move(&___nl__im__103, string0lf());
#line 188
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__103));
#line 188
c_rt_lib0clear(&___nl__im__101);
#line 188
c_rt_lib0clear(&___nl__im__103);
#line 188
c_rt_lib0clear(&___nl__im__0);
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
c_rt_lib0clear(&___nl__im__3);
#line 188
c_rt_lib0clear(&___nl__im__4);
#line 188
//clear ___nl__bool__5;
#line 188
c_rt_lib0clear(&___nl__im__6);
#line 188
//clear ___nl__int__19;
#line 188
//clear ___nl__int__21;
#line 188
//clear ___nl__int__22;
#line 188
//clear ___nl__bool__23;
#line 188
//clear ___nl__int__24;
#line 188
//clear ___nl__int__35;
#line 188
//clear ___nl__int__37;
#line 188
//clear ___nl__int__38;
#line 188
//clear ___nl__bool__39;
#line 188
//clear ___nl__int__40;
#line 188
c_rt_lib0clear(&___nl__im__41);
#line 188
//clear ___nl__bool__44;
#line 188
c_rt_lib0clear(&___nl__im__45);
#line 188
//clear ___nl__int__72;
#line 188
//clear ___nl__bool__74;
#line 188
//clear ___nl__int__89;
#line 188
c_rt_lib0clear(&___nl__im__90);
#line 188
c_rt_lib0clear(&___nl__im__91);
#line 188
//clear ___nl__int__92;
#line 188
//clear ___nl__int__93;
#line 188
//clear ___nl__int__94;
#line 188
//clear ___nl__bool__95;
#line 188
//clear ___nl__int__96;
#line 188
c_rt_lib0clear(&___nl__im__97);
#line 188
return ___nl__im__100;
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
ImmT  ___nl__string__185 = NULL;
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
INT  ___nl__int__200 = 0;
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
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
ImmT  ___nl__im__287 = NULL;
ImmT  ___nl__im__288 = NULL;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
ImmT  ___nl__im__293 = NULL;
ImmT  ___nl__im__294 = NULL;
ImmT  ___nl__im__295 = NULL;
ImmT  ___nl__im__296 = NULL;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
ImmT  ___nl__im__299 = NULL;
ImmT  ___nl__im__300 = NULL;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
ImmT  ___nl__im__303 = NULL;
ImmT  ___nl__im__304 = NULL;
ImmT  ___nl__im__305 = NULL;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__im__307 = NULL;
ImmT  ___nl__im__308 = NULL;
ImmT  ___nl__im__309 = NULL;
ImmT  ___nl__im__310 = NULL;
ImmT  ___nl__im__311 = NULL;
ImmT  ___nl__im__312 = NULL;
ImmT  ___nl__im__313 = NULL;
ImmT  ___nl__im__314 = NULL;
ImmT  ___nl__im__315 = NULL;
ImmT  ___nl__im__316 = NULL;
ImmT  ___nl__im__317 = NULL;
ImmT  ___nl__im__318 = NULL;
ImmT  ___nl__im__319 = NULL;
ImmT  ___nl__im__320 = NULL;
ImmT  ___nl__im__321 = NULL;
ImmT  ___nl__im__322 = NULL;
ImmT  ___nl__im__323 = NULL;
ImmT  ___nl__im__324 = NULL;
ImmT  ___nl__im__325 = NULL;
ImmT  ___nl__im__326 = NULL;
ImmT  ___nl__im__327 = NULL;
ImmT  ___nl__im__328 = NULL;
ImmT  ___nl__im__329 = NULL;
ImmT  ___nl__im__330 = NULL;
ImmT  ___nl__im__331 = NULL;
ImmT  ___nl__im__332 = NULL;
ImmT  ___nl__im__333 = NULL;
ImmT  ___nl__im__334 = NULL;
ImmT  ___nl__im__335 = NULL;
ImmT  ___nl__im__336 = NULL;
ImmT  ___nl__im__337 = NULL;
ImmT  ___nl__im__338 = NULL;
ImmT  ___nl__im__339 = NULL;
ImmT  ___nl__im__340 = NULL;
ImmT  ___nl__im__341 = NULL;
ImmT  ___nl__im__342 = NULL;
ImmT  ___nl__im__343 = NULL;
ImmT  ___nl__im__344 = NULL;
ImmT  ___nl__im__345 = NULL;
ImmT  ___nl__im__346 = NULL;
ImmT  ___nl__im__347 = NULL;
ImmT  ___nl__im__348 = NULL;
ImmT  ___nl__im__349 = NULL;
ImmT  ___nl__im__350 = NULL;
ImmT  ___nl__im__351 = NULL;
ImmT  ___nl__im__352 = NULL;
ImmT  ___nl__im__353 = NULL;
ImmT  ___nl__im__354 = NULL;
INT  ___nl__int__355 = 0;
ImmT  ___nl__im__356 = NULL;
ImmT  ___nl__im__357 = NULL;
ImmT  ___nl__im__358 = NULL;
ImmT  ___nl__im__359 = NULL;
ImmT  ___nl__string__360 = NULL;
ImmT  ___nl__im__361 = NULL;
ImmT  ___nl__im__362 = NULL;
#line 192
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 193
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(227)));
#line 193
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(230));
#line 193
if(___nl__bool__6){ goto label_77;}
#line 195
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(231));
#line 195
if(___nl__bool__6){ goto label_94;}
#line 197
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(232));
#line 197
if(___nl__bool__6){ goto label_111;}
#line 199
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(237));
#line 199
if(___nl__bool__6){ goto label_124;}
#line 202
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(233));
#line 202
if(___nl__bool__6){ goto label_145;}
#line 204
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(234));
#line 204
if(___nl__bool__6){ goto label_150;}
#line 206
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(235));
#line 206
if(___nl__bool__6){ goto label_155;}
#line 209
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(236));
#line 209
if(___nl__bool__6){ goto label_186;}
#line 212
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(246));
#line 212
if(___nl__bool__6){ goto label_217;}
#line 214
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(247));
#line 214
if(___nl__bool__6){ goto label_222;}
#line 216
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(238));
#line 216
if(___nl__bool__6){ goto label_231;}
#line 218
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(225));
#line 218
if(___nl__bool__6){ goto label_248;}
#line 220
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(239));
#line 220
if(___nl__bool__6){ goto label_265;}
#line 223
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(240));
#line 223
if(___nl__bool__6){ goto label_292;}
#line 226
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(241));
#line 226
if(___nl__bool__6){ goto label_323;}
#line 229
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(242));
#line 229
if(___nl__bool__6){ goto label_346;}
#line 232
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(243));
#line 232
if(___nl__bool__6){ goto label_373;}
#line 235
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(244));
#line 235
if(___nl__bool__6){ goto label_406;}
#line 238
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(245));
#line 238
if(___nl__bool__6){ goto label_437;}
#line 240
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(248));
#line 240
if(___nl__bool__6){ goto label_442;}
#line 242
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(249));
#line 242
if(___nl__bool__6){ goto label_455;}
#line 245
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(250));
#line 245
if(___nl__bool__6){ goto label_488;}
#line 247
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(251));
#line 247
if(___nl__bool__6){ goto label_493;}
#line 249
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(252));
#line 249
if(___nl__bool__6){ goto label_502;}
#line 250
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(253));
#line 250
if(___nl__bool__6){ goto label_506;}
#line 254
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(254));
#line 254
if(___nl__bool__6){ goto label_537;}
#line 257
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(255));
#line 257
if(___nl__bool__6){ goto label_564;}
#line 260
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(256));
#line 260
if(___nl__bool__6){ goto label_591;}
#line 263
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(257));
#line 263
if(___nl__bool__6){ goto label_618;}
#line 267
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(258));
#line 267
if(___nl__bool__6){ goto label_647;}
#line 270
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(259));
#line 270
if(___nl__bool__6){ goto label_674;}
#line 272
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(260));
#line 272
if(___nl__bool__6){ goto label_680;}
#line 274
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(261));
#line 274
if(___nl__bool__6){ goto label_686;}
#line 277
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(262));
#line 277
if(___nl__bool__6){ goto label_786;}
#line 280
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(263));
#line 280
if(___nl__bool__6){ goto label_889;}
#line 283
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(264));
#line 283
if(___nl__bool__6){ goto label_995;}
#line 283
c_rt_lib0move(&___nl__im__7,___get_global_string_const(16));
#line 283
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 283
nl_die_arg(___nl__im__7);
#line 193
label_77:
;
#line 193
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(230)));
#line 193
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 194
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(223)));
#line 194
c_rt_lib0move(&___nl__im__11, generator_js_priv0print_register_to_assign(___nl__im__12));
#line 194
c_rt_lib0clear(&___nl__im__12);
#line 194
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(74)));
#line 194
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_arr(___nl__im__14));
#line 194
c_rt_lib0clear(&___nl__im__14);
#line 194
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__13));
#line 194
c_rt_lib0clear(&___nl__im__11);
#line 194
c_rt_lib0clear(&___nl__im__13);
#line 194
c_rt_lib0move(&___nl__im__15,___get_global_string_const(440));
#line 194
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__10, ___nl__im__15));
#line 194
c_rt_lib0clear(&___nl__im__10);
#line 194
c_rt_lib0clear(&___nl__im__15);
#line 195
goto label_1104;
#line 195
label_94:
;
#line 195
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(231)));
#line 195
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 196
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(223)));
#line 196
c_rt_lib0move(&___nl__im__19, generator_js_priv0print_register_to_assign(___nl__im__20));
#line 196
c_rt_lib0clear(&___nl__im__20);
#line 196
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(74)));
#line 196
c_rt_lib0move(&___nl__im__21, generator_js_priv0print_hash(___nl__im__22));
#line 196
c_rt_lib0clear(&___nl__im__22);
#line 196
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 196
c_rt_lib0clear(&___nl__im__19);
#line 196
c_rt_lib0clear(&___nl__im__21);
#line 196
c_rt_lib0move(&___nl__im__23,___get_global_string_const(440));
#line 196
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__23));
#line 196
c_rt_lib0clear(&___nl__im__18);
#line 196
c_rt_lib0clear(&___nl__im__23);
#line 197
goto label_1104;
#line 197
label_111:
;
#line 197
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(232)));
#line 197
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 198
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(266)));
#line 198
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(268)));
#line 198
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(265)));
#line 198
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(223)));
#line 198
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_call(___nl__im__26, ___nl__im__27, ___nl__im__28, ___nl__im__29, ___ref___int__2));
#line 198
c_rt_lib0clear(&___nl__im__26);
#line 198
c_rt_lib0clear(&___nl__im__27);
#line 198
c_rt_lib0clear(&___nl__im__28);
#line 198
c_rt_lib0clear(&___nl__im__29);
#line 199
goto label_1104;
#line 199
label_124:
;
#line 199
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(237)));
#line 199
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 200
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(223)));
#line 200
c_rt_lib0move(&___nl__im__33, generator_js_priv0print_register_to_assign(___nl__im__34));
#line 200
c_rt_lib0clear(&___nl__im__34);
#line 200
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(151)));
#line 200
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(167)));
#line 200
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(2, ___get_global_string_const(151), ___nl__im__37, ___get_global_string_const(167), ___nl__im__38));
#line 200
c_rt_lib0clear(&___nl__im__37);
#line 200
c_rt_lib0clear(&___nl__im__38);
#line 200
c_rt_lib0move(&___nl__im__35, generator_js_priv0print_const_hash(___nl__im__36));
#line 200
c_rt_lib0clear(&___nl__im__36);
#line 200
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 200
c_rt_lib0clear(&___nl__im__33);
#line 200
c_rt_lib0clear(&___nl__im__35);
#line 201
c_rt_lib0move(&___nl__im__39,___get_global_string_const(440));
#line 201
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 201
c_rt_lib0clear(&___nl__im__32);
#line 201
c_rt_lib0clear(&___nl__im__39);
#line 202
goto label_1104;
#line 202
label_145:
;
#line 202
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(233)));
#line 202
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 203
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_una_op(___nl__im__40));
#line 204
goto label_1104;
#line 204
label_150:
;
#line 204
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(234)));
#line 204
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 205
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_bin_op(___nl__im__42, ___ref___int__2));
#line 206
goto label_1104;
#line 206
label_155:
;
#line 206
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(235)));
#line 206
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 207
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(223)));
#line 207
c_rt_lib0move(&___nl__im__47, generator_js_priv0print_register_to_assign(___nl__im__48));
#line 207
c_rt_lib0clear(&___nl__im__48);
#line 207
c_rt_lib0move(&___nl__im__50,___get_global_string_const(269));
#line 207
c_rt_lib0move(&___nl__im__51,___get_global_string_const(235));
#line 208
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(74)));
#line 208
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__54));
#line 208
c_rt_lib0clear(&___nl__im__54);
#line 208
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(205)));
#line 208
c_rt_lib0move(&___nl__im__56, generator_js_priv0print_str_imm(___nl__im__57, ___ref___im__3));
#line 208
c_rt_lib0clear(&___nl__im__57);
#line 208
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__56));
#line 208
c_rt_lib0clear(&___nl__im__56);
#line 208
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__53, ___nl__im__55));
#line 208
c_rt_lib0clear(&___nl__im__53);
#line 208
c_rt_lib0clear(&___nl__im__55);
#line 208
c_rt_lib0move(&___nl__im__49, generator_js_priv0print_internal_call(___nl__im__50, ___nl__im__51, ___nl__im__52, ___ref___int__2));
#line 208
c_rt_lib0clear(&___nl__im__50);
#line 208
c_rt_lib0clear(&___nl__im__51);
#line 208
c_rt_lib0clear(&___nl__im__52);
#line 208
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__49));
#line 208
c_rt_lib0clear(&___nl__im__47);
#line 208
c_rt_lib0clear(&___nl__im__49);
#line 208
c_rt_lib0move(&___nl__im__58,___get_global_string_const(440));
#line 208
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__46, ___nl__im__58));
#line 208
c_rt_lib0clear(&___nl__im__46);
#line 208
c_rt_lib0clear(&___nl__im__58);
#line 209
goto label_1104;
#line 209
label_186:
;
#line 209
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(236)));
#line 209
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 210
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(223)));
#line 210
c_rt_lib0move(&___nl__im__62, generator_js_priv0print_register_to_assign(___nl__im__63));
#line 210
c_rt_lib0clear(&___nl__im__63);
#line 210
c_rt_lib0move(&___nl__im__65,___get_global_string_const(269));
#line 210
c_rt_lib0move(&___nl__im__66,___get_global_string_const(236));
#line 211
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(74)));
#line 211
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__69));
#line 211
c_rt_lib0clear(&___nl__im__69);
#line 211
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(205)));
#line 211
c_rt_lib0move(&___nl__im__71, generator_js_priv0print_str_imm(___nl__im__72, ___ref___im__3));
#line 211
c_rt_lib0clear(&___nl__im__72);
#line 211
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__71));
#line 211
c_rt_lib0clear(&___nl__im__71);
#line 211
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(2, ___nl__im__68, ___nl__im__70));
#line 211
c_rt_lib0clear(&___nl__im__68);
#line 211
c_rt_lib0clear(&___nl__im__70);
#line 211
c_rt_lib0move(&___nl__im__64, generator_js_priv0print_internal_call(___nl__im__65, ___nl__im__66, ___nl__im__67, ___ref___int__2));
#line 211
c_rt_lib0clear(&___nl__im__65);
#line 211
c_rt_lib0clear(&___nl__im__66);
#line 211
c_rt_lib0clear(&___nl__im__67);
#line 211
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__64));
#line 211
c_rt_lib0clear(&___nl__im__62);
#line 211
c_rt_lib0clear(&___nl__im__64);
#line 211
c_rt_lib0move(&___nl__im__73,___get_global_string_const(440));
#line 211
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__61, ___nl__im__73));
#line 211
c_rt_lib0clear(&___nl__im__61);
#line 211
c_rt_lib0clear(&___nl__im__73);
#line 212
goto label_1104;
#line 212
label_217:
;
#line 212
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(246)));
#line 212
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 213
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_return(___nl__im__74, ___nl__im__1));
#line 214
goto label_1104;
#line 214
label_222:
;
#line 214
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(247)));
#line 214
c_rt_lib0copy(&___nl__im__76, ___nl__im__77);
#line 215
c_rt_lib0move(&___nl__im__78, generator_js_priv0get_namespace_name());
#line 215
c_rt_lib0move(&___nl__im__79,___get_global_string_const(761));
#line 215
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__78, ___nl__im__79));
#line 215
c_rt_lib0clear(&___nl__im__78);
#line 215
c_rt_lib0clear(&___nl__im__79);
#line 216
goto label_1104;
#line 216
label_231:
;
#line 216
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(238)));
#line 216
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 217
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(223)));
#line 217
c_rt_lib0move(&___nl__im__83, generator_js_priv0print_register_to_assign(___nl__im__84));
#line 217
c_rt_lib0clear(&___nl__im__84);
#line 217
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(74)));
#line 217
c_rt_lib0move(&___nl__im__85, generator_js_priv0print_register(___nl__im__86));
#line 217
c_rt_lib0clear(&___nl__im__86);
#line 217
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__85));
#line 217
c_rt_lib0clear(&___nl__im__83);
#line 217
c_rt_lib0clear(&___nl__im__85);
#line 217
c_rt_lib0move(&___nl__im__87,___get_global_string_const(440));
#line 217
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__82, ___nl__im__87));
#line 217
c_rt_lib0clear(&___nl__im__82);
#line 217
c_rt_lib0clear(&___nl__im__87);
#line 218
goto label_1104;
#line 218
label_248:
;
#line 218
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(225)));
#line 218
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 219
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(223)));
#line 219
c_rt_lib0move(&___nl__im__91, generator_js_priv0print_register_to_assign(___nl__im__92));
#line 219
c_rt_lib0clear(&___nl__im__92);
#line 219
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(224)));
#line 219
c_rt_lib0move(&___nl__im__93, generator_js_priv0print_const_value_aggr(___nl__im__94, ___ref___im__3));
#line 219
c_rt_lib0clear(&___nl__im__94);
#line 219
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__93));
#line 219
c_rt_lib0clear(&___nl__im__91);
#line 219
c_rt_lib0clear(&___nl__im__93);
#line 219
c_rt_lib0move(&___nl__im__95,___get_global_string_const(440));
#line 219
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__90, ___nl__im__95));
#line 219
c_rt_lib0clear(&___nl__im__90);
#line 219
c_rt_lib0clear(&___nl__im__95);
#line 220
goto label_1104;
#line 220
label_265:
;
#line 220
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(239)));
#line 220
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 221
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(223)));
#line 221
c_rt_lib0move(&___nl__im__101, generator_js_priv0print_register_to_assign(___nl__im__102));
#line 221
c_rt_lib0clear(&___nl__im__102);
#line 221
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(74)));
#line 221
c_rt_lib0move(&___nl__im__103, generator_js_priv0print_register(___nl__im__104));
#line 221
c_rt_lib0clear(&___nl__im__104);
#line 221
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__103));
#line 221
c_rt_lib0clear(&___nl__im__101);
#line 221
c_rt_lib0clear(&___nl__im__103);
#line 221
c_rt_lib0move(&___nl__im__105,___get_global_string_const(762));
#line 221
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__im__105));
#line 221
c_rt_lib0clear(&___nl__im__100);
#line 221
c_rt_lib0clear(&___nl__im__105);
#line 222
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(276)));
#line 222
c_rt_lib0move(&___nl__im__106, generator_js_priv0print_register(___nl__im__107));
#line 222
c_rt_lib0clear(&___nl__im__107);
#line 222
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__106));
#line 222
c_rt_lib0clear(&___nl__im__99);
#line 222
c_rt_lib0clear(&___nl__im__106);
#line 222
c_rt_lib0move(&___nl__im__108,___get_global_string_const(503));
#line 222
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__98, ___nl__im__108));
#line 222
c_rt_lib0clear(&___nl__im__98);
#line 222
c_rt_lib0clear(&___nl__im__108);
#line 223
goto label_1104;
#line 223
label_292:
;
#line 223
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(240)));
#line 223
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 224
c_rt_lib0move(&___nl__im__112,___get_global_string_const(269));
#line 224
c_rt_lib0move(&___nl__im__113,___get_global_string_const(763));
#line 224
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(74)));
#line 224
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__116));
#line 224
c_rt_lib0clear(&___nl__im__116);
#line 225
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(276)));
#line 225
c_rt_lib0move(&___nl__im__118, generator_js_priv0print_register(___nl__im__119));
#line 225
c_rt_lib0clear(&___nl__im__119);
#line 225
c_rt_lib0move(&___nl__im__117, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__118));
#line 225
c_rt_lib0clear(&___nl__im__118);
#line 225
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(224)));
#line 225
c_rt_lib0move(&___nl__im__121, generator_js_priv0print_register(___nl__im__122));
#line 225
c_rt_lib0clear(&___nl__im__122);
#line 225
c_rt_lib0move(&___nl__im__120, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__121));
#line 225
c_rt_lib0clear(&___nl__im__121);
#line 225
c_rt_lib0move(&___nl__im__114, c_rt_lib0array_mk(3, ___nl__im__115, ___nl__im__117, ___nl__im__120));
#line 225
c_rt_lib0clear(&___nl__im__115);
#line 225
c_rt_lib0clear(&___nl__im__117);
#line 225
c_rt_lib0clear(&___nl__im__120);
#line 225
c_rt_lib0move(&___nl__im__111, generator_js_priv0print_internal_call(___nl__im__112, ___nl__im__113, ___nl__im__114, ___ref___int__2));
#line 225
c_rt_lib0clear(&___nl__im__112);
#line 225
c_rt_lib0clear(&___nl__im__113);
#line 225
c_rt_lib0clear(&___nl__im__114);
#line 225
c_rt_lib0move(&___nl__im__123,___get_global_string_const(440));
#line 225
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__111, ___nl__im__123));
#line 225
c_rt_lib0clear(&___nl__im__111);
#line 225
c_rt_lib0clear(&___nl__im__123);
#line 226
goto label_1104;
#line 226
label_323:
;
#line 226
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(241)));
#line 226
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 227
c_rt_lib0move(&___nl__im__127,___get_global_string_const(269));
#line 227
c_rt_lib0move(&___nl__im__128,___get_global_string_const(241));
#line 228
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(223)));
#line 228
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__131));
#line 228
c_rt_lib0clear(&___nl__im__131);
#line 228
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(224)));
#line 228
c_rt_lib0move(&___nl__im__132, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__133));
#line 228
c_rt_lib0clear(&___nl__im__133);
#line 228
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_mk(2, ___nl__im__130, ___nl__im__132));
#line 228
c_rt_lib0clear(&___nl__im__130);
#line 228
c_rt_lib0clear(&___nl__im__132);
#line 228
c_rt_lib0move(&___nl__im__126, generator_js_priv0print_internal_call(___nl__im__127, ___nl__im__128, ___nl__im__129, ___ref___int__2));
#line 228
c_rt_lib0clear(&___nl__im__127);
#line 228
c_rt_lib0clear(&___nl__im__128);
#line 228
c_rt_lib0clear(&___nl__im__129);
#line 228
c_rt_lib0move(&___nl__im__134,___get_global_string_const(440));
#line 228
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__126, ___nl__im__134));
#line 228
c_rt_lib0clear(&___nl__im__126);
#line 228
c_rt_lib0clear(&___nl__im__134);
#line 229
goto label_1104;
#line 229
label_346:
;
#line 229
c_rt_lib0move(&___nl__im__136, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(242)));
#line 229
c_rt_lib0copy(&___nl__im__135, ___nl__im__136);
#line 230
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(223)));
#line 230
c_rt_lib0move(&___nl__im__138, generator_js_priv0print_register_to_assign(___nl__im__139));
#line 230
c_rt_lib0clear(&___nl__im__139);
#line 230
c_rt_lib0move(&___nl__im__141,___get_global_string_const(269));
#line 230
c_rt_lib0move(&___nl__im__142,___get_global_string_const(242));
#line 231
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(74)));
#line 231
c_rt_lib0move(&___nl__im__145, generator_js_priv0print_register(___nl__im__146));
#line 231
c_rt_lib0clear(&___nl__im__146);
#line 231
c_rt_lib0move(&___nl__im__144, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__145));
#line 231
c_rt_lib0clear(&___nl__im__145);
#line 231
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_mk(1, ___nl__im__144));
#line 231
c_rt_lib0clear(&___nl__im__144);
#line 231
c_rt_lib0move(&___nl__im__140, generator_js_priv0print_internal_call(___nl__im__141, ___nl__im__142, ___nl__im__143, ___ref___int__2));
#line 231
c_rt_lib0clear(&___nl__im__141);
#line 231
c_rt_lib0clear(&___nl__im__142);
#line 231
c_rt_lib0clear(&___nl__im__143);
#line 231
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__140));
#line 231
c_rt_lib0clear(&___nl__im__138);
#line 231
c_rt_lib0clear(&___nl__im__140);
#line 231
c_rt_lib0move(&___nl__im__147,___get_global_string_const(440));
#line 231
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__137, ___nl__im__147));
#line 231
c_rt_lib0clear(&___nl__im__137);
#line 231
c_rt_lib0clear(&___nl__im__147);
#line 232
goto label_1104;
#line 232
label_373:
;
#line 232
c_rt_lib0move(&___nl__im__149, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(243)));
#line 232
c_rt_lib0copy(&___nl__im__148, ___nl__im__149);
#line 233
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__148, ___get_global_string_const(223)));
#line 233
c_rt_lib0move(&___nl__im__151, generator_js_priv0print_register_to_assign(___nl__im__152));
#line 233
c_rt_lib0clear(&___nl__im__152);
#line 233
c_rt_lib0move(&___nl__im__154,___get_global_string_const(269));
#line 233
c_rt_lib0move(&___nl__im__155,___get_global_string_const(764));
#line 234
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__148, ___get_global_string_const(74)));
#line 234
c_rt_lib0move(&___nl__im__158, generator_js_priv0print_register(___nl__im__159));
#line 234
c_rt_lib0clear(&___nl__im__159);
#line 234
c_rt_lib0move(&___nl__im__157, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__158));
#line 234
c_rt_lib0clear(&___nl__im__158);
#line 234
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__148, ___get_global_string_const(568)));
#line 234
c_rt_lib0move(&___nl__im__161, generator_js_priv0print_str_imm(___nl__im__162, ___ref___im__3));
#line 234
c_rt_lib0clear(&___nl__im__162);
#line 234
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__161));
#line 234
c_rt_lib0clear(&___nl__im__161);
#line 234
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_mk(2, ___nl__im__157, ___nl__im__160));
#line 234
c_rt_lib0clear(&___nl__im__157);
#line 234
c_rt_lib0clear(&___nl__im__160);
#line 234
c_rt_lib0move(&___nl__im__153, generator_js_priv0print_internal_call(___nl__im__154, ___nl__im__155, ___nl__im__156, ___ref___int__2));
#line 234
c_rt_lib0clear(&___nl__im__154);
#line 234
c_rt_lib0clear(&___nl__im__155);
#line 234
c_rt_lib0clear(&___nl__im__156);
#line 234
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__153));
#line 234
c_rt_lib0clear(&___nl__im__151);
#line 234
c_rt_lib0clear(&___nl__im__153);
#line 234
c_rt_lib0move(&___nl__im__163,___get_global_string_const(440));
#line 234
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__150, ___nl__im__163));
#line 234
c_rt_lib0clear(&___nl__im__150);
#line 234
c_rt_lib0clear(&___nl__im__163);
#line 235
goto label_1104;
#line 235
label_406:
;
#line 235
c_rt_lib0move(&___nl__im__165, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(244)));
#line 235
c_rt_lib0copy(&___nl__im__164, ___nl__im__165);
#line 236
c_rt_lib0move(&___nl__im__167,___get_global_string_const(269));
#line 236
c_rt_lib0move(&___nl__im__168,___get_global_string_const(765));
#line 236
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_string_const(74)));
#line 236
c_rt_lib0move(&___nl__im__170, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__171));
#line 236
c_rt_lib0clear(&___nl__im__171);
#line 237
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_string_const(568)));
#line 237
c_rt_lib0move(&___nl__im__173, generator_js_priv0print_str_imm(___nl__im__174, ___ref___im__3));
#line 237
c_rt_lib0clear(&___nl__im__174);
#line 237
c_rt_lib0move(&___nl__im__172, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__173));
#line 237
c_rt_lib0clear(&___nl__im__173);
#line 237
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_string_const(224)));
#line 237
c_rt_lib0move(&___nl__im__176, generator_js_priv0print_register(___nl__im__177));
#line 237
c_rt_lib0clear(&___nl__im__177);
#line 237
c_rt_lib0move(&___nl__im__175, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__176));
#line 237
c_rt_lib0clear(&___nl__im__176);
#line 237
c_rt_lib0move(&___nl__im__169, c_rt_lib0array_mk(3, ___nl__im__170, ___nl__im__172, ___nl__im__175));
#line 237
c_rt_lib0clear(&___nl__im__170);
#line 237
c_rt_lib0clear(&___nl__im__172);
#line 237
c_rt_lib0clear(&___nl__im__175);
#line 237
c_rt_lib0move(&___nl__im__166, generator_js_priv0print_internal_call(___nl__im__167, ___nl__im__168, ___nl__im__169, ___ref___int__2));
#line 237
c_rt_lib0clear(&___nl__im__167);
#line 237
c_rt_lib0clear(&___nl__im__168);
#line 237
c_rt_lib0clear(&___nl__im__169);
#line 237
c_rt_lib0move(&___nl__im__178,___get_global_string_const(440));
#line 237
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__166, ___nl__im__178));
#line 237
c_rt_lib0clear(&___nl__im__166);
#line 237
c_rt_lib0clear(&___nl__im__178);
#line 238
goto label_1104;
#line 238
label_437:
;
#line 238
c_rt_lib0move(&___nl__im__180, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(245)));
#line 238
c_rt_lib0copy(&___nl__im__179, ___nl__im__180);
#line 239
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_ov_mk(___nl__im__179, ___ref___im__3, ___ref___int__2));
#line 240
goto label_1104;
#line 240
label_442:
;
#line 240
c_rt_lib0move(&___nl__im__182, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(248)));
#line 240
___nl__int__181 = getIntFromImm(___nl__im__182);
#line 241
c_rt_lib0move(&___nl__im__184,___get_global_string_const(521));
#line 241
c_rt_lib0move(&___nl__string__185, c_rt_lib0int_to_string(___nl__int__181));
#line 241
c_rt_lib0move(&___nl__im__183, c_rt_lib0concat_new(___nl__im__184, ___nl__string__185));
#line 241
c_rt_lib0clear(&___nl__im__184);
#line 241
c_rt_lib0clear(&___nl__string__185);
#line 241
c_rt_lib0move(&___nl__im__186,___get_global_string_const(522));
#line 241
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__183, ___nl__im__186));
#line 241
c_rt_lib0clear(&___nl__im__183);
#line 241
c_rt_lib0clear(&___nl__im__186);
#line 242
goto label_1104;
#line 242
label_455:
;
#line 242
c_rt_lib0move(&___nl__im__188, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(249)));
#line 242
c_rt_lib0copy(&___nl__im__187, ___nl__im__188);
#line 243
c_rt_lib0move(&___nl__im__192,___get_global_string_const(601));
#line 243
c_rt_lib0move(&___nl__im__194,___get_global_string_const(269));
#line 243
c_rt_lib0move(&___nl__im__195,___get_global_string_const(594));
#line 243
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__187, ___get_global_string_const(74)));
#line 243
c_rt_lib0move(&___nl__im__196, c_rt_lib0array_mk(1, ___nl__im__197));
#line 243
c_rt_lib0clear(&___nl__im__197);
#line 243
c_rt_lib0move(&___nl__im__193, generator_js_priv0print_int_call_sim(___nl__im__194, ___nl__im__195, ___nl__im__196));
#line 243
c_rt_lib0clear(&___nl__im__194);
#line 243
c_rt_lib0clear(&___nl__im__195);
#line 243
c_rt_lib0clear(&___nl__im__196);
#line 243
c_rt_lib0move(&___nl__im__191, c_rt_lib0concat_new(___nl__im__192, ___nl__im__193));
#line 243
c_rt_lib0clear(&___nl__im__192);
#line 243
c_rt_lib0clear(&___nl__im__193);
#line 243
c_rt_lib0move(&___nl__im__198,___get_global_string_const(753));
#line 243
c_rt_lib0move(&___nl__im__190, c_rt_lib0concat_new(___nl__im__191, ___nl__im__198));
#line 243
c_rt_lib0clear(&___nl__im__191);
#line 243
c_rt_lib0clear(&___nl__im__198);
#line 243
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__187, ___get_global_string_const(223)));
#line 243
___nl__int__200 = getIntFromImm(___nl__im__201);
#line 243
c_rt_lib0clear(&___nl__im__201);
#line 243
c_rt_lib0move(&___nl__im__199, generator_js_priv0print_goto(___nl__int__200));
#line 243
//clear ___nl__int__200;
#line 243
c_rt_lib0move(&___nl__im__189, c_rt_lib0concat_new(___nl__im__190, ___nl__im__199));
#line 243
c_rt_lib0clear(&___nl__im__190);
#line 243
c_rt_lib0clear(&___nl__im__199);
#line 244
c_rt_lib0move(&___nl__im__202,___get_global_string_const(305));
#line 244
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__189, ___nl__im__202));
#line 244
c_rt_lib0clear(&___nl__im__189);
#line 244
c_rt_lib0clear(&___nl__im__202);
#line 245
goto label_1104;
#line 245
label_488:
;
#line 245
c_rt_lib0move(&___nl__im__204, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(250)));
#line 245
___nl__int__203 = getIntFromImm(___nl__im__204);
#line 246
c_rt_lib0move(&___nl__im__4, generator_js_priv0print_goto(___nl__int__203));
#line 247
goto label_1104;
#line 247
label_493:
;
#line 247
c_rt_lib0move(&___nl__im__206, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(251)));
#line 247
c_rt_lib0copy(&___nl__im__205, ___nl__im__206);
#line 248
c_rt_lib0move(&___nl__im__207, generator_js_priv0print_register_to_assign(___nl__im__205));
#line 248
c_rt_lib0move(&___nl__im__208,___get_global_string_const(766));
#line 248
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__207, ___nl__im__208));
#line 248
c_rt_lib0clear(&___nl__im__207);
#line 248
c_rt_lib0clear(&___nl__im__208);
#line 249
goto label_1104;
#line 249
label_502:
;
#line 249
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(252)));
#line 249
c_rt_lib0copy(&___nl__im__209, ___nl__im__210);
#line 250
goto label_1104;
#line 250
label_506:
;
#line 250
c_rt_lib0move(&___nl__im__212, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(253)));
#line 250
c_rt_lib0copy(&___nl__im__211, ___nl__im__212);
#line 251
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__211, ___get_global_string_const(359)));
#line 251
c_rt_lib0move(&___nl__im__214, generator_js_priv0print_register_to_assign(___nl__im__215));
#line 251
c_rt_lib0clear(&___nl__im__215);
#line 251
c_rt_lib0move(&___nl__im__217,___get_global_string_const(269));
#line 251
c_rt_lib0move(&___nl__im__218,___get_global_string_const(764));
#line 252
c_rt_lib0move(&___nl__im__221, c_rt_lib0hash_get_value_dec(___nl__im__211, ___get_global_string_const(358)));
#line 252
c_rt_lib0move(&___nl__im__220, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__221));
#line 252
c_rt_lib0clear(&___nl__im__221);
#line 252
c_rt_lib0move(&___nl__im__224, c_rt_lib0hash_get_value_dec(___nl__im__211, ___get_global_string_const(598)));
#line 252
c_rt_lib0move(&___nl__im__223, generator_js_priv0print_str_imm(___nl__im__224, ___ref___im__3));
#line 252
c_rt_lib0clear(&___nl__im__224);
#line 252
c_rt_lib0move(&___nl__im__222, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__223));
#line 252
c_rt_lib0clear(&___nl__im__223);
#line 252
c_rt_lib0move(&___nl__im__219, c_rt_lib0array_mk(2, ___nl__im__220, ___nl__im__222));
#line 252
c_rt_lib0clear(&___nl__im__220);
#line 252
c_rt_lib0clear(&___nl__im__222);
#line 252
c_rt_lib0move(&___nl__im__216, generator_js_priv0print_internal_call(___nl__im__217, ___nl__im__218, ___nl__im__219, ___ref___int__2));
#line 252
c_rt_lib0clear(&___nl__im__217);
#line 252
c_rt_lib0clear(&___nl__im__218);
#line 252
c_rt_lib0clear(&___nl__im__219);
#line 252
c_rt_lib0move(&___nl__im__213, c_rt_lib0concat_new(___nl__im__214, ___nl__im__216));
#line 252
c_rt_lib0clear(&___nl__im__214);
#line 252
c_rt_lib0clear(&___nl__im__216);
#line 253
c_rt_lib0move(&___nl__im__225,___get_global_string_const(440));
#line 253
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__213, ___nl__im__225));
#line 253
c_rt_lib0clear(&___nl__im__213);
#line 253
c_rt_lib0clear(&___nl__im__225);
#line 254
goto label_1104;
#line 254
label_537:
;
#line 254
c_rt_lib0move(&___nl__im__227, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(254)));
#line 254
c_rt_lib0copy(&___nl__im__226, ___nl__im__227);
#line 255
c_rt_lib0move(&___nl__im__229,___get_global_string_const(269));
#line 255
c_rt_lib0move(&___nl__im__230,___get_global_string_const(765));
#line 255
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__226, ___get_global_string_const(358)));
#line 255
c_rt_lib0move(&___nl__im__232, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__233));
#line 255
c_rt_lib0clear(&___nl__im__233);
#line 256
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__226, ___get_global_string_const(598)));
#line 256
c_rt_lib0move(&___nl__im__234, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__235));
#line 256
c_rt_lib0clear(&___nl__im__235);
#line 256
c_rt_lib0move(&___nl__im__237, c_rt_lib0hash_get_value_dec(___nl__im__226, ___get_global_string_const(360)));
#line 256
c_rt_lib0move(&___nl__im__236, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__237));
#line 256
c_rt_lib0clear(&___nl__im__237);
#line 256
c_rt_lib0move(&___nl__im__231, c_rt_lib0array_mk(3, ___nl__im__232, ___nl__im__234, ___nl__im__236));
#line 256
c_rt_lib0clear(&___nl__im__232);
#line 256
c_rt_lib0clear(&___nl__im__234);
#line 256
c_rt_lib0clear(&___nl__im__236);
#line 256
c_rt_lib0move(&___nl__im__228, generator_js_priv0print_internal_call(___nl__im__229, ___nl__im__230, ___nl__im__231, ___ref___int__2));
#line 256
c_rt_lib0clear(&___nl__im__229);
#line 256
c_rt_lib0clear(&___nl__im__230);
#line 256
c_rt_lib0clear(&___nl__im__231);
#line 256
c_rt_lib0move(&___nl__im__238,___get_global_string_const(440));
#line 256
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__228, ___nl__im__238));
#line 256
c_rt_lib0clear(&___nl__im__228);
#line 256
c_rt_lib0clear(&___nl__im__238);
#line 257
goto label_1104;
#line 257
label_564:
;
#line 257
c_rt_lib0move(&___nl__im__240, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(255)));
#line 257
c_rt_lib0copy(&___nl__im__239, ___nl__im__240);
#line 258
c_rt_lib0move(&___nl__im__245, c_rt_lib0hash_get_value_dec(___nl__im__239, ___get_global_string_const(359)));
#line 258
c_rt_lib0move(&___nl__im__244, generator_js_priv0print_register_to_assign(___nl__im__245));
#line 258
c_rt_lib0clear(&___nl__im__245);
#line 258
c_rt_lib0move(&___nl__im__247, c_rt_lib0hash_get_value_dec(___nl__im__239, ___get_global_string_const(358)));
#line 258
c_rt_lib0move(&___nl__im__246, generator_js_priv0print_register(___nl__im__247));
#line 258
c_rt_lib0clear(&___nl__im__247);
#line 258
c_rt_lib0move(&___nl__im__243, c_rt_lib0concat_new(___nl__im__244, ___nl__im__246));
#line 258
c_rt_lib0clear(&___nl__im__244);
#line 258
c_rt_lib0clear(&___nl__im__246);
#line 258
c_rt_lib0move(&___nl__im__248,___get_global_string_const(762));
#line 258
c_rt_lib0move(&___nl__im__242, c_rt_lib0concat_new(___nl__im__243, ___nl__im__248));
#line 258
c_rt_lib0clear(&___nl__im__243);
#line 258
c_rt_lib0clear(&___nl__im__248);
#line 259
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__239, ___get_global_string_const(361)));
#line 259
c_rt_lib0move(&___nl__im__249, generator_js_priv0print_register(___nl__im__250));
#line 259
c_rt_lib0clear(&___nl__im__250);
#line 259
c_rt_lib0move(&___nl__im__241, c_rt_lib0concat_new(___nl__im__242, ___nl__im__249));
#line 259
c_rt_lib0clear(&___nl__im__242);
#line 259
c_rt_lib0clear(&___nl__im__249);
#line 259
c_rt_lib0move(&___nl__im__251,___get_global_string_const(503));
#line 259
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__241, ___nl__im__251));
#line 259
c_rt_lib0clear(&___nl__im__241);
#line 259
c_rt_lib0clear(&___nl__im__251);
#line 260
goto label_1104;
#line 260
label_591:
;
#line 260
c_rt_lib0move(&___nl__im__253, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(256)));
#line 260
c_rt_lib0copy(&___nl__im__252, ___nl__im__253);
#line 261
c_rt_lib0move(&___nl__im__255,___get_global_string_const(269));
#line 261
c_rt_lib0move(&___nl__im__256,___get_global_string_const(763));
#line 261
c_rt_lib0move(&___nl__im__259, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(358)));
#line 261
c_rt_lib0move(&___nl__im__258, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__259));
#line 261
c_rt_lib0clear(&___nl__im__259);
#line 262
c_rt_lib0move(&___nl__im__261, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(361)));
#line 262
c_rt_lib0move(&___nl__im__260, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__261));
#line 262
c_rt_lib0clear(&___nl__im__261);
#line 262
c_rt_lib0move(&___nl__im__263, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(360)));
#line 262
c_rt_lib0move(&___nl__im__262, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__263));
#line 262
c_rt_lib0clear(&___nl__im__263);
#line 262
c_rt_lib0move(&___nl__im__257, c_rt_lib0array_mk(3, ___nl__im__258, ___nl__im__260, ___nl__im__262));
#line 262
c_rt_lib0clear(&___nl__im__258);
#line 262
c_rt_lib0clear(&___nl__im__260);
#line 262
c_rt_lib0clear(&___nl__im__262);
#line 262
c_rt_lib0move(&___nl__im__254, generator_js_priv0print_internal_call(___nl__im__255, ___nl__im__256, ___nl__im__257, ___ref___int__2));
#line 262
c_rt_lib0clear(&___nl__im__255);
#line 262
c_rt_lib0clear(&___nl__im__256);
#line 262
c_rt_lib0clear(&___nl__im__257);
#line 262
c_rt_lib0move(&___nl__im__264,___get_global_string_const(440));
#line 262
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__254, ___nl__im__264));
#line 262
c_rt_lib0clear(&___nl__im__254);
#line 262
c_rt_lib0clear(&___nl__im__264);
#line 263
goto label_1104;
#line 263
label_618:
;
#line 263
c_rt_lib0move(&___nl__im__266, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(257)));
#line 263
c_rt_lib0copy(&___nl__im__265, ___nl__im__266);
#line 264
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_get_value_dec(___nl__im__265, ___get_global_string_const(359)));
#line 264
c_rt_lib0move(&___nl__im__268, generator_js_priv0print_register_to_assign(___nl__im__269));
#line 264
c_rt_lib0clear(&___nl__im__269);
#line 264
c_rt_lib0move(&___nl__im__271,___get_global_string_const(269));
#line 264
c_rt_lib0move(&___nl__im__272,___get_global_string_const(764));
#line 265
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_get_value_dec(___nl__im__265, ___get_global_string_const(358)));
#line 265
c_rt_lib0move(&___nl__im__274, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__275));
#line 265
c_rt_lib0clear(&___nl__im__275);
#line 265
c_rt_lib0move(&___nl__im__277, c_rt_lib0hash_get_value_dec(___nl__im__265, ___get_global_string_const(361)));
#line 265
c_rt_lib0move(&___nl__im__276, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__277));
#line 265
c_rt_lib0clear(&___nl__im__277);
#line 265
c_rt_lib0move(&___nl__im__273, c_rt_lib0array_mk(2, ___nl__im__274, ___nl__im__276));
#line 265
c_rt_lib0clear(&___nl__im__274);
#line 265
c_rt_lib0clear(&___nl__im__276);
#line 265
c_rt_lib0move(&___nl__im__270, generator_js_priv0print_internal_call(___nl__im__271, ___nl__im__272, ___nl__im__273, ___ref___int__2));
#line 265
c_rt_lib0clear(&___nl__im__271);
#line 265
c_rt_lib0clear(&___nl__im__272);
#line 265
c_rt_lib0clear(&___nl__im__273);
#line 265
c_rt_lib0move(&___nl__im__267, c_rt_lib0concat_new(___nl__im__268, ___nl__im__270));
#line 265
c_rt_lib0clear(&___nl__im__268);
#line 265
c_rt_lib0clear(&___nl__im__270);
#line 266
c_rt_lib0move(&___nl__im__278,___get_global_string_const(440));
#line 266
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__267, ___nl__im__278));
#line 266
c_rt_lib0clear(&___nl__im__267);
#line 266
c_rt_lib0clear(&___nl__im__278);
#line 267
goto label_1104;
#line 267
label_647:
;
#line 267
c_rt_lib0move(&___nl__im__280, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(258)));
#line 267
c_rt_lib0copy(&___nl__im__279, ___nl__im__280);
#line 268
c_rt_lib0move(&___nl__im__282,___get_global_string_const(269));
#line 268
c_rt_lib0move(&___nl__im__283,___get_global_string_const(765));
#line 268
c_rt_lib0move(&___nl__im__286, c_rt_lib0hash_get_value_dec(___nl__im__279, ___get_global_string_const(358)));
#line 268
c_rt_lib0move(&___nl__im__285, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__286));
#line 268
c_rt_lib0clear(&___nl__im__286);
#line 269
c_rt_lib0move(&___nl__im__288, c_rt_lib0hash_get_value_dec(___nl__im__279, ___get_global_string_const(361)));
#line 269
c_rt_lib0move(&___nl__im__287, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__288));
#line 269
c_rt_lib0clear(&___nl__im__288);
#line 269
c_rt_lib0move(&___nl__im__290, c_rt_lib0hash_get_value_dec(___nl__im__279, ___get_global_string_const(360)));
#line 269
c_rt_lib0move(&___nl__im__289, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__290));
#line 269
c_rt_lib0clear(&___nl__im__290);
#line 269
c_rt_lib0move(&___nl__im__284, c_rt_lib0array_mk(3, ___nl__im__285, ___nl__im__287, ___nl__im__289));
#line 269
c_rt_lib0clear(&___nl__im__285);
#line 269
c_rt_lib0clear(&___nl__im__287);
#line 269
c_rt_lib0clear(&___nl__im__289);
#line 269
c_rt_lib0move(&___nl__im__281, generator_js_priv0print_internal_call(___nl__im__282, ___nl__im__283, ___nl__im__284, ___ref___int__2));
#line 269
c_rt_lib0clear(&___nl__im__282);
#line 269
c_rt_lib0clear(&___nl__im__283);
#line 269
c_rt_lib0clear(&___nl__im__284);
#line 269
c_rt_lib0move(&___nl__im__291,___get_global_string_const(440));
#line 269
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__281, ___nl__im__291));
#line 269
c_rt_lib0clear(&___nl__im__281);
#line 269
c_rt_lib0clear(&___nl__im__291);
#line 270
goto label_1104;
#line 270
label_674:
;
#line 270
c_rt_lib0move(&___nl__im__293, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(259)));
#line 270
c_rt_lib0copy(&___nl__im__292, ___nl__im__293);
#line 271
c_rt_lib0move(&___nl__im__294, c_rt_lib0array_mk(0));
#line 271
nl_die_arg(___nl__im__294);
#line 272
goto label_1104;
#line 272
label_680:
;
#line 272
c_rt_lib0move(&___nl__im__296, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(260)));
#line 272
c_rt_lib0copy(&___nl__im__295, ___nl__im__296);
#line 273
c_rt_lib0move(&___nl__im__297, c_rt_lib0array_mk(0));
#line 273
nl_die_arg(___nl__im__297);
#line 274
goto label_1104;
#line 274
label_686:
;
#line 274
c_rt_lib0move(&___nl__im__299, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(261)));
#line 274
c_rt_lib0copy(&___nl__im__298, ___nl__im__299);
#line 275
c_rt_lib0move(&___nl__im__303, c_rt_lib0hash_get_value_dec(___nl__im__298, ___get_global_string_const(362)));
#line 275
c_rt_lib0move(&___nl__im__302, generator_js_priv0print_register_to_assign(___nl__im__303));
#line 275
c_rt_lib0clear(&___nl__im__303);
#line 276
c_rt_lib0move(&___nl__im__305,___get_global_string_const(269));
#line 276
c_rt_lib0move(&___nl__im__306,___get_global_string_const(270));
#line 276
c_rt_lib0move(&___nl__im__309, c_rt_lib0hash_get_value_dec(___nl__im__298, ___get_global_string_const(129)));
#line 276
c_rt_lib0move(&___nl__im__308, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__309));
#line 276
c_rt_lib0clear(&___nl__im__309);
#line 276
c_rt_lib0move(&___nl__im__307, c_rt_lib0array_mk(1, ___nl__im__308));
#line 276
c_rt_lib0clear(&___nl__im__308);
#line 276
c_rt_lib0move(&___nl__im__304, generator_js_priv0print_internal_call(___nl__im__305, ___nl__im__306, ___nl__im__307, ___ref___int__2));
#line 276
c_rt_lib0clear(&___nl__im__305);
#line 276
c_rt_lib0clear(&___nl__im__306);
#line 276
c_rt_lib0clear(&___nl__im__307);
#line 276
c_rt_lib0move(&___nl__im__301, c_rt_lib0concat_new(___nl__im__302, ___nl__im__304));
#line 276
c_rt_lib0clear(&___nl__im__302);
#line 276
c_rt_lib0clear(&___nl__im__304);
#line 276
c_rt_lib0move(&___nl__im__310,___get_global_string_const(440));
#line 276
c_rt_lib0move(&___nl__im__300, c_rt_lib0concat_new(___nl__im__301, ___nl__im__310));
#line 276
c_rt_lib0clear(&___nl__im__301);
#line 276
c_rt_lib0clear(&___nl__im__310);
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
c_rt_lib0clear(&___nl__im__1);
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 276
//clear ___nl__bool__6;
#line 276
c_rt_lib0clear(&___nl__im__7);
#line 276
c_rt_lib0clear(&___nl__im__8);
#line 276
c_rt_lib0clear(&___nl__im__9);
#line 276
c_rt_lib0clear(&___nl__im__16);
#line 276
c_rt_lib0clear(&___nl__im__17);
#line 276
c_rt_lib0clear(&___nl__im__24);
#line 276
c_rt_lib0clear(&___nl__im__25);
#line 276
c_rt_lib0clear(&___nl__im__30);
#line 276
c_rt_lib0clear(&___nl__im__31);
#line 276
c_rt_lib0clear(&___nl__im__40);
#line 276
c_rt_lib0clear(&___nl__im__41);
#line 276
c_rt_lib0clear(&___nl__im__42);
#line 276
c_rt_lib0clear(&___nl__im__43);
#line 276
c_rt_lib0clear(&___nl__im__44);
#line 276
c_rt_lib0clear(&___nl__im__45);
#line 276
c_rt_lib0clear(&___nl__im__59);
#line 276
c_rt_lib0clear(&___nl__im__60);
#line 276
c_rt_lib0clear(&___nl__im__74);
#line 276
c_rt_lib0clear(&___nl__im__75);
#line 276
c_rt_lib0clear(&___nl__im__76);
#line 276
c_rt_lib0clear(&___nl__im__77);
#line 276
c_rt_lib0clear(&___nl__im__80);
#line 276
c_rt_lib0clear(&___nl__im__81);
#line 276
c_rt_lib0clear(&___nl__im__88);
#line 276
c_rt_lib0clear(&___nl__im__89);
#line 276
c_rt_lib0clear(&___nl__im__96);
#line 276
c_rt_lib0clear(&___nl__im__97);
#line 276
c_rt_lib0clear(&___nl__im__109);
#line 276
c_rt_lib0clear(&___nl__im__110);
#line 276
c_rt_lib0clear(&___nl__im__124);
#line 276
c_rt_lib0clear(&___nl__im__125);
#line 276
c_rt_lib0clear(&___nl__im__135);
#line 276
c_rt_lib0clear(&___nl__im__136);
#line 276
c_rt_lib0clear(&___nl__im__148);
#line 276
c_rt_lib0clear(&___nl__im__149);
#line 276
c_rt_lib0clear(&___nl__im__164);
#line 276
c_rt_lib0clear(&___nl__im__165);
#line 276
c_rt_lib0clear(&___nl__im__179);
#line 276
c_rt_lib0clear(&___nl__im__180);
#line 276
//clear ___nl__int__181;
#line 276
c_rt_lib0clear(&___nl__im__182);
#line 276
c_rt_lib0clear(&___nl__im__187);
#line 276
c_rt_lib0clear(&___nl__im__188);
#line 276
//clear ___nl__int__203;
#line 276
c_rt_lib0clear(&___nl__im__204);
#line 276
c_rt_lib0clear(&___nl__im__205);
#line 276
c_rt_lib0clear(&___nl__im__206);
#line 276
c_rt_lib0clear(&___nl__im__209);
#line 276
c_rt_lib0clear(&___nl__im__210);
#line 276
c_rt_lib0clear(&___nl__im__211);
#line 276
c_rt_lib0clear(&___nl__im__212);
#line 276
c_rt_lib0clear(&___nl__im__226);
#line 276
c_rt_lib0clear(&___nl__im__227);
#line 276
c_rt_lib0clear(&___nl__im__239);
#line 276
c_rt_lib0clear(&___nl__im__240);
#line 276
c_rt_lib0clear(&___nl__im__252);
#line 276
c_rt_lib0clear(&___nl__im__253);
#line 276
c_rt_lib0clear(&___nl__im__265);
#line 276
c_rt_lib0clear(&___nl__im__266);
#line 276
c_rt_lib0clear(&___nl__im__279);
#line 276
c_rt_lib0clear(&___nl__im__280);
#line 276
c_rt_lib0clear(&___nl__im__292);
#line 276
c_rt_lib0clear(&___nl__im__293);
#line 276
c_rt_lib0clear(&___nl__im__294);
#line 276
c_rt_lib0clear(&___nl__im__295);
#line 276
c_rt_lib0clear(&___nl__im__296);
#line 276
c_rt_lib0clear(&___nl__im__297);
#line 276
c_rt_lib0clear(&___nl__im__298);
#line 276
c_rt_lib0clear(&___nl__im__299);
#line 276
return ___nl__im__300;
#line 277
goto label_1104;
#line 277
label_786:
;
#line 277
c_rt_lib0move(&___nl__im__312, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(262)));
#line 277
c_rt_lib0copy(&___nl__im__311, ___nl__im__312);
#line 278
c_rt_lib0move(&___nl__im__316, c_rt_lib0hash_get_value_dec(___nl__im__311, ___get_global_string_const(362)));
#line 278
c_rt_lib0move(&___nl__im__315, generator_js_priv0print_register_to_assign(___nl__im__316));
#line 278
c_rt_lib0clear(&___nl__im__316);
#line 279
c_rt_lib0move(&___nl__im__318,___get_global_string_const(269));
#line 279
c_rt_lib0move(&___nl__im__319,___get_global_string_const(273));
#line 279
c_rt_lib0move(&___nl__im__322, c_rt_lib0hash_get_value_dec(___nl__im__311, ___get_global_string_const(362)));
#line 279
c_rt_lib0move(&___nl__im__321, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__322));
#line 279
c_rt_lib0clear(&___nl__im__322);
#line 279
c_rt_lib0move(&___nl__im__320, c_rt_lib0array_mk(1, ___nl__im__321));
#line 279
c_rt_lib0clear(&___nl__im__321);
#line 279
c_rt_lib0move(&___nl__im__317, generator_js_priv0print_internal_call(___nl__im__318, ___nl__im__319, ___nl__im__320, ___ref___int__2));
#line 279
c_rt_lib0clear(&___nl__im__318);
#line 279
c_rt_lib0clear(&___nl__im__319);
#line 279
c_rt_lib0clear(&___nl__im__320);
#line 279
c_rt_lib0move(&___nl__im__314, c_rt_lib0concat_new(___nl__im__315, ___nl__im__317));
#line 279
c_rt_lib0clear(&___nl__im__315);
#line 279
c_rt_lib0clear(&___nl__im__317);
#line 279
c_rt_lib0move(&___nl__im__323,___get_global_string_const(440));
#line 279
c_rt_lib0move(&___nl__im__313, c_rt_lib0concat_new(___nl__im__314, ___nl__im__323));
#line 279
c_rt_lib0clear(&___nl__im__314);
#line 279
c_rt_lib0clear(&___nl__im__323);
#line 279
c_rt_lib0clear(&___nl__im__0);
#line 279
c_rt_lib0clear(&___nl__im__1);
#line 279
c_rt_lib0clear(&___nl__im__4);
#line 279
c_rt_lib0clear(&___nl__im__5);
#line 279
//clear ___nl__bool__6;
#line 279
c_rt_lib0clear(&___nl__im__7);
#line 279
c_rt_lib0clear(&___nl__im__8);
#line 279
c_rt_lib0clear(&___nl__im__9);
#line 279
c_rt_lib0clear(&___nl__im__16);
#line 279
c_rt_lib0clear(&___nl__im__17);
#line 279
c_rt_lib0clear(&___nl__im__24);
#line 279
c_rt_lib0clear(&___nl__im__25);
#line 279
c_rt_lib0clear(&___nl__im__30);
#line 279
c_rt_lib0clear(&___nl__im__31);
#line 279
c_rt_lib0clear(&___nl__im__40);
#line 279
c_rt_lib0clear(&___nl__im__41);
#line 279
c_rt_lib0clear(&___nl__im__42);
#line 279
c_rt_lib0clear(&___nl__im__43);
#line 279
c_rt_lib0clear(&___nl__im__44);
#line 279
c_rt_lib0clear(&___nl__im__45);
#line 279
c_rt_lib0clear(&___nl__im__59);
#line 279
c_rt_lib0clear(&___nl__im__60);
#line 279
c_rt_lib0clear(&___nl__im__74);
#line 279
c_rt_lib0clear(&___nl__im__75);
#line 279
c_rt_lib0clear(&___nl__im__76);
#line 279
c_rt_lib0clear(&___nl__im__77);
#line 279
c_rt_lib0clear(&___nl__im__80);
#line 279
c_rt_lib0clear(&___nl__im__81);
#line 279
c_rt_lib0clear(&___nl__im__88);
#line 279
c_rt_lib0clear(&___nl__im__89);
#line 279
c_rt_lib0clear(&___nl__im__96);
#line 279
c_rt_lib0clear(&___nl__im__97);
#line 279
c_rt_lib0clear(&___nl__im__109);
#line 279
c_rt_lib0clear(&___nl__im__110);
#line 279
c_rt_lib0clear(&___nl__im__124);
#line 279
c_rt_lib0clear(&___nl__im__125);
#line 279
c_rt_lib0clear(&___nl__im__135);
#line 279
c_rt_lib0clear(&___nl__im__136);
#line 279
c_rt_lib0clear(&___nl__im__148);
#line 279
c_rt_lib0clear(&___nl__im__149);
#line 279
c_rt_lib0clear(&___nl__im__164);
#line 279
c_rt_lib0clear(&___nl__im__165);
#line 279
c_rt_lib0clear(&___nl__im__179);
#line 279
c_rt_lib0clear(&___nl__im__180);
#line 279
//clear ___nl__int__181;
#line 279
c_rt_lib0clear(&___nl__im__182);
#line 279
c_rt_lib0clear(&___nl__im__187);
#line 279
c_rt_lib0clear(&___nl__im__188);
#line 279
//clear ___nl__int__203;
#line 279
c_rt_lib0clear(&___nl__im__204);
#line 279
c_rt_lib0clear(&___nl__im__205);
#line 279
c_rt_lib0clear(&___nl__im__206);
#line 279
c_rt_lib0clear(&___nl__im__209);
#line 279
c_rt_lib0clear(&___nl__im__210);
#line 279
c_rt_lib0clear(&___nl__im__211);
#line 279
c_rt_lib0clear(&___nl__im__212);
#line 279
c_rt_lib0clear(&___nl__im__226);
#line 279
c_rt_lib0clear(&___nl__im__227);
#line 279
c_rt_lib0clear(&___nl__im__239);
#line 279
c_rt_lib0clear(&___nl__im__240);
#line 279
c_rt_lib0clear(&___nl__im__252);
#line 279
c_rt_lib0clear(&___nl__im__253);
#line 279
c_rt_lib0clear(&___nl__im__265);
#line 279
c_rt_lib0clear(&___nl__im__266);
#line 279
c_rt_lib0clear(&___nl__im__279);
#line 279
c_rt_lib0clear(&___nl__im__280);
#line 279
c_rt_lib0clear(&___nl__im__292);
#line 279
c_rt_lib0clear(&___nl__im__293);
#line 279
c_rt_lib0clear(&___nl__im__294);
#line 279
c_rt_lib0clear(&___nl__im__295);
#line 279
c_rt_lib0clear(&___nl__im__296);
#line 279
c_rt_lib0clear(&___nl__im__297);
#line 279
c_rt_lib0clear(&___nl__im__298);
#line 279
c_rt_lib0clear(&___nl__im__299);
#line 279
c_rt_lib0clear(&___nl__im__300);
#line 279
c_rt_lib0clear(&___nl__im__311);
#line 279
c_rt_lib0clear(&___nl__im__312);
#line 279
return ___nl__im__313;
#line 280
goto label_1104;
#line 280
label_889:
;
#line 280
c_rt_lib0move(&___nl__im__325, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(263)));
#line 280
c_rt_lib0copy(&___nl__im__324, ___nl__im__325);
#line 281
c_rt_lib0move(&___nl__im__329, c_rt_lib0hash_get_value_dec(___nl__im__324, ___get_global_string_const(223)));
#line 281
c_rt_lib0move(&___nl__im__328, generator_js_priv0print_register_to_assign(___nl__im__329));
#line 281
c_rt_lib0clear(&___nl__im__329);
#line 282
c_rt_lib0move(&___nl__im__331,___get_global_string_const(269));
#line 282
c_rt_lib0move(&___nl__im__332,___get_global_string_const(272));
#line 282
c_rt_lib0move(&___nl__im__335, c_rt_lib0hash_get_value_dec(___nl__im__324, ___get_global_string_const(362)));
#line 282
c_rt_lib0move(&___nl__im__334, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__335));
#line 282
c_rt_lib0clear(&___nl__im__335);
#line 282
c_rt_lib0move(&___nl__im__333, c_rt_lib0array_mk(1, ___nl__im__334));
#line 282
c_rt_lib0clear(&___nl__im__334);
#line 282
c_rt_lib0move(&___nl__im__330, generator_js_priv0print_internal_call(___nl__im__331, ___nl__im__332, ___nl__im__333, ___ref___int__2));
#line 282
c_rt_lib0clear(&___nl__im__331);
#line 282
c_rt_lib0clear(&___nl__im__332);
#line 282
c_rt_lib0clear(&___nl__im__333);
#line 282
c_rt_lib0move(&___nl__im__327, c_rt_lib0concat_new(___nl__im__328, ___nl__im__330));
#line 282
c_rt_lib0clear(&___nl__im__328);
#line 282
c_rt_lib0clear(&___nl__im__330);
#line 282
c_rt_lib0move(&___nl__im__336,___get_global_string_const(440));
#line 282
c_rt_lib0move(&___nl__im__326, c_rt_lib0concat_new(___nl__im__327, ___nl__im__336));
#line 282
c_rt_lib0clear(&___nl__im__327);
#line 282
c_rt_lib0clear(&___nl__im__336);
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
c_rt_lib0clear(&___nl__im__4);
#line 282
c_rt_lib0clear(&___nl__im__5);
#line 282
//clear ___nl__bool__6;
#line 282
c_rt_lib0clear(&___nl__im__7);
#line 282
c_rt_lib0clear(&___nl__im__8);
#line 282
c_rt_lib0clear(&___nl__im__9);
#line 282
c_rt_lib0clear(&___nl__im__16);
#line 282
c_rt_lib0clear(&___nl__im__17);
#line 282
c_rt_lib0clear(&___nl__im__24);
#line 282
c_rt_lib0clear(&___nl__im__25);
#line 282
c_rt_lib0clear(&___nl__im__30);
#line 282
c_rt_lib0clear(&___nl__im__31);
#line 282
c_rt_lib0clear(&___nl__im__40);
#line 282
c_rt_lib0clear(&___nl__im__41);
#line 282
c_rt_lib0clear(&___nl__im__42);
#line 282
c_rt_lib0clear(&___nl__im__43);
#line 282
c_rt_lib0clear(&___nl__im__44);
#line 282
c_rt_lib0clear(&___nl__im__45);
#line 282
c_rt_lib0clear(&___nl__im__59);
#line 282
c_rt_lib0clear(&___nl__im__60);
#line 282
c_rt_lib0clear(&___nl__im__74);
#line 282
c_rt_lib0clear(&___nl__im__75);
#line 282
c_rt_lib0clear(&___nl__im__76);
#line 282
c_rt_lib0clear(&___nl__im__77);
#line 282
c_rt_lib0clear(&___nl__im__80);
#line 282
c_rt_lib0clear(&___nl__im__81);
#line 282
c_rt_lib0clear(&___nl__im__88);
#line 282
c_rt_lib0clear(&___nl__im__89);
#line 282
c_rt_lib0clear(&___nl__im__96);
#line 282
c_rt_lib0clear(&___nl__im__97);
#line 282
c_rt_lib0clear(&___nl__im__109);
#line 282
c_rt_lib0clear(&___nl__im__110);
#line 282
c_rt_lib0clear(&___nl__im__124);
#line 282
c_rt_lib0clear(&___nl__im__125);
#line 282
c_rt_lib0clear(&___nl__im__135);
#line 282
c_rt_lib0clear(&___nl__im__136);
#line 282
c_rt_lib0clear(&___nl__im__148);
#line 282
c_rt_lib0clear(&___nl__im__149);
#line 282
c_rt_lib0clear(&___nl__im__164);
#line 282
c_rt_lib0clear(&___nl__im__165);
#line 282
c_rt_lib0clear(&___nl__im__179);
#line 282
c_rt_lib0clear(&___nl__im__180);
#line 282
//clear ___nl__int__181;
#line 282
c_rt_lib0clear(&___nl__im__182);
#line 282
c_rt_lib0clear(&___nl__im__187);
#line 282
c_rt_lib0clear(&___nl__im__188);
#line 282
//clear ___nl__int__203;
#line 282
c_rt_lib0clear(&___nl__im__204);
#line 282
c_rt_lib0clear(&___nl__im__205);
#line 282
c_rt_lib0clear(&___nl__im__206);
#line 282
c_rt_lib0clear(&___nl__im__209);
#line 282
c_rt_lib0clear(&___nl__im__210);
#line 282
c_rt_lib0clear(&___nl__im__211);
#line 282
c_rt_lib0clear(&___nl__im__212);
#line 282
c_rt_lib0clear(&___nl__im__226);
#line 282
c_rt_lib0clear(&___nl__im__227);
#line 282
c_rt_lib0clear(&___nl__im__239);
#line 282
c_rt_lib0clear(&___nl__im__240);
#line 282
c_rt_lib0clear(&___nl__im__252);
#line 282
c_rt_lib0clear(&___nl__im__253);
#line 282
c_rt_lib0clear(&___nl__im__265);
#line 282
c_rt_lib0clear(&___nl__im__266);
#line 282
c_rt_lib0clear(&___nl__im__279);
#line 282
c_rt_lib0clear(&___nl__im__280);
#line 282
c_rt_lib0clear(&___nl__im__292);
#line 282
c_rt_lib0clear(&___nl__im__293);
#line 282
c_rt_lib0clear(&___nl__im__294);
#line 282
c_rt_lib0clear(&___nl__im__295);
#line 282
c_rt_lib0clear(&___nl__im__296);
#line 282
c_rt_lib0clear(&___nl__im__297);
#line 282
c_rt_lib0clear(&___nl__im__298);
#line 282
c_rt_lib0clear(&___nl__im__299);
#line 282
c_rt_lib0clear(&___nl__im__300);
#line 282
c_rt_lib0clear(&___nl__im__311);
#line 282
c_rt_lib0clear(&___nl__im__312);
#line 282
c_rt_lib0clear(&___nl__im__313);
#line 282
c_rt_lib0clear(&___nl__im__324);
#line 282
c_rt_lib0clear(&___nl__im__325);
#line 282
return ___nl__im__326;
#line 283
goto label_1104;
#line 283
label_995:
;
#line 283
c_rt_lib0move(&___nl__im__338, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(264)));
#line 283
c_rt_lib0copy(&___nl__im__337, ___nl__im__338);
#line 284
c_rt_lib0move(&___nl__im__342, c_rt_lib0hash_get_value_dec(___nl__im__337, ___get_global_string_const(223)));
#line 284
c_rt_lib0move(&___nl__im__341, generator_js_priv0print_register_to_assign(___nl__im__342));
#line 284
c_rt_lib0clear(&___nl__im__342);
#line 285
c_rt_lib0move(&___nl__im__344,___get_global_string_const(269));
#line 285
c_rt_lib0move(&___nl__im__345,___get_global_string_const(271));
#line 285
c_rt_lib0move(&___nl__im__348, c_rt_lib0hash_get_value_dec(___nl__im__337, ___get_global_string_const(362)));
#line 285
c_rt_lib0move(&___nl__im__347, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__348));
#line 285
c_rt_lib0clear(&___nl__im__348);
#line 285
c_rt_lib0move(&___nl__im__346, c_rt_lib0array_mk(1, ___nl__im__347));
#line 285
c_rt_lib0clear(&___nl__im__347);
#line 285
c_rt_lib0move(&___nl__im__343, generator_js_priv0print_internal_call(___nl__im__344, ___nl__im__345, ___nl__im__346, ___ref___int__2));
#line 285
c_rt_lib0clear(&___nl__im__344);
#line 285
c_rt_lib0clear(&___nl__im__345);
#line 285
c_rt_lib0clear(&___nl__im__346);
#line 285
c_rt_lib0move(&___nl__im__340, c_rt_lib0concat_new(___nl__im__341, ___nl__im__343));
#line 285
c_rt_lib0clear(&___nl__im__341);
#line 285
c_rt_lib0clear(&___nl__im__343);
#line 285
c_rt_lib0move(&___nl__im__349,___get_global_string_const(440));
#line 285
c_rt_lib0move(&___nl__im__339, c_rt_lib0concat_new(___nl__im__340, ___nl__im__349));
#line 285
c_rt_lib0clear(&___nl__im__340);
#line 285
c_rt_lib0clear(&___nl__im__349);
#line 285
c_rt_lib0clear(&___nl__im__0);
#line 285
c_rt_lib0clear(&___nl__im__1);
#line 285
c_rt_lib0clear(&___nl__im__4);
#line 285
c_rt_lib0clear(&___nl__im__5);
#line 285
//clear ___nl__bool__6;
#line 285
c_rt_lib0clear(&___nl__im__7);
#line 285
c_rt_lib0clear(&___nl__im__8);
#line 285
c_rt_lib0clear(&___nl__im__9);
#line 285
c_rt_lib0clear(&___nl__im__16);
#line 285
c_rt_lib0clear(&___nl__im__17);
#line 285
c_rt_lib0clear(&___nl__im__24);
#line 285
c_rt_lib0clear(&___nl__im__25);
#line 285
c_rt_lib0clear(&___nl__im__30);
#line 285
c_rt_lib0clear(&___nl__im__31);
#line 285
c_rt_lib0clear(&___nl__im__40);
#line 285
c_rt_lib0clear(&___nl__im__41);
#line 285
c_rt_lib0clear(&___nl__im__42);
#line 285
c_rt_lib0clear(&___nl__im__43);
#line 285
c_rt_lib0clear(&___nl__im__44);
#line 285
c_rt_lib0clear(&___nl__im__45);
#line 285
c_rt_lib0clear(&___nl__im__59);
#line 285
c_rt_lib0clear(&___nl__im__60);
#line 285
c_rt_lib0clear(&___nl__im__74);
#line 285
c_rt_lib0clear(&___nl__im__75);
#line 285
c_rt_lib0clear(&___nl__im__76);
#line 285
c_rt_lib0clear(&___nl__im__77);
#line 285
c_rt_lib0clear(&___nl__im__80);
#line 285
c_rt_lib0clear(&___nl__im__81);
#line 285
c_rt_lib0clear(&___nl__im__88);
#line 285
c_rt_lib0clear(&___nl__im__89);
#line 285
c_rt_lib0clear(&___nl__im__96);
#line 285
c_rt_lib0clear(&___nl__im__97);
#line 285
c_rt_lib0clear(&___nl__im__109);
#line 285
c_rt_lib0clear(&___nl__im__110);
#line 285
c_rt_lib0clear(&___nl__im__124);
#line 285
c_rt_lib0clear(&___nl__im__125);
#line 285
c_rt_lib0clear(&___nl__im__135);
#line 285
c_rt_lib0clear(&___nl__im__136);
#line 285
c_rt_lib0clear(&___nl__im__148);
#line 285
c_rt_lib0clear(&___nl__im__149);
#line 285
c_rt_lib0clear(&___nl__im__164);
#line 285
c_rt_lib0clear(&___nl__im__165);
#line 285
c_rt_lib0clear(&___nl__im__179);
#line 285
c_rt_lib0clear(&___nl__im__180);
#line 285
//clear ___nl__int__181;
#line 285
c_rt_lib0clear(&___nl__im__182);
#line 285
c_rt_lib0clear(&___nl__im__187);
#line 285
c_rt_lib0clear(&___nl__im__188);
#line 285
//clear ___nl__int__203;
#line 285
c_rt_lib0clear(&___nl__im__204);
#line 285
c_rt_lib0clear(&___nl__im__205);
#line 285
c_rt_lib0clear(&___nl__im__206);
#line 285
c_rt_lib0clear(&___nl__im__209);
#line 285
c_rt_lib0clear(&___nl__im__210);
#line 285
c_rt_lib0clear(&___nl__im__211);
#line 285
c_rt_lib0clear(&___nl__im__212);
#line 285
c_rt_lib0clear(&___nl__im__226);
#line 285
c_rt_lib0clear(&___nl__im__227);
#line 285
c_rt_lib0clear(&___nl__im__239);
#line 285
c_rt_lib0clear(&___nl__im__240);
#line 285
c_rt_lib0clear(&___nl__im__252);
#line 285
c_rt_lib0clear(&___nl__im__253);
#line 285
c_rt_lib0clear(&___nl__im__265);
#line 285
c_rt_lib0clear(&___nl__im__266);
#line 285
c_rt_lib0clear(&___nl__im__279);
#line 285
c_rt_lib0clear(&___nl__im__280);
#line 285
c_rt_lib0clear(&___nl__im__292);
#line 285
c_rt_lib0clear(&___nl__im__293);
#line 285
c_rt_lib0clear(&___nl__im__294);
#line 285
c_rt_lib0clear(&___nl__im__295);
#line 285
c_rt_lib0clear(&___nl__im__296);
#line 285
c_rt_lib0clear(&___nl__im__297);
#line 285
c_rt_lib0clear(&___nl__im__298);
#line 285
c_rt_lib0clear(&___nl__im__299);
#line 285
c_rt_lib0clear(&___nl__im__300);
#line 285
c_rt_lib0clear(&___nl__im__311);
#line 285
c_rt_lib0clear(&___nl__im__312);
#line 285
c_rt_lib0clear(&___nl__im__313);
#line 285
c_rt_lib0clear(&___nl__im__324);
#line 285
c_rt_lib0clear(&___nl__im__325);
#line 285
c_rt_lib0clear(&___nl__im__326);
#line 285
c_rt_lib0clear(&___nl__im__337);
#line 285
c_rt_lib0clear(&___nl__im__338);
#line 285
return ___nl__im__339;
#line 286
goto label_1104;
#line 286
label_1104:
;
#line 287
c_rt_lib0move(&___nl__im__354,___get_global_string_const(767));
#line 287
c_rt_lib0move(&___nl__im__358, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(221)));
#line 287
c_rt_lib0move(&___nl__im__357, c_rt_lib0hash_get_value_dec(___nl__im__358, ___get_global_string_const(543)));
#line 287
c_rt_lib0clear(&___nl__im__358);
#line 287
c_rt_lib0move(&___nl__im__356, c_rt_lib0hash_get_value_dec(___nl__im__357, ___get_global_string_const(544)));
#line 287
c_rt_lib0clear(&___nl__im__357);
#line 287
c_rt_lib0move(&___nl__im__359, c_rt_lib0hash_get_value_dec(___nl__im__356, ___get_global_string_const(153)));
#line 287
___nl__int__355 = getIntFromImm(___nl__im__359);
#line 287
c_rt_lib0clear(&___nl__im__356);
#line 287
c_rt_lib0clear(&___nl__im__359);
#line 287
c_rt_lib0move(&___nl__string__360, c_rt_lib0int_to_string(___nl__int__355));
#line 287
c_rt_lib0move(&___nl__im__353, c_rt_lib0concat_new(___nl__im__354, ___nl__string__360));
#line 287
c_rt_lib0clear(&___nl__im__354);
#line 287
//clear ___nl__int__355;
#line 287
c_rt_lib0clear(&___nl__string__360);
#line 287
c_rt_lib0move(&___nl__im__361, string0lf());
#line 287
c_rt_lib0move(&___nl__im__352, c_rt_lib0concat_new(___nl__im__353, ___nl__im__361));
#line 287
c_rt_lib0clear(&___nl__im__353);
#line 287
c_rt_lib0clear(&___nl__im__361);
#line 287
c_rt_lib0move(&___nl__im__351, c_rt_lib0concat_new(___nl__im__352, ___nl__im__4));
#line 287
c_rt_lib0clear(&___nl__im__352);
#line 287
c_rt_lib0move(&___nl__im__362, string0lf());
#line 287
c_rt_lib0move(&___nl__im__350, c_rt_lib0concat_new(___nl__im__351, ___nl__im__362));
#line 287
c_rt_lib0clear(&___nl__im__351);
#line 287
c_rt_lib0clear(&___nl__im__362);
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
c_rt_lib0clear(&___nl__im__16);
#line 287
c_rt_lib0clear(&___nl__im__17);
#line 287
c_rt_lib0clear(&___nl__im__24);
#line 287
c_rt_lib0clear(&___nl__im__25);
#line 287
c_rt_lib0clear(&___nl__im__30);
#line 287
c_rt_lib0clear(&___nl__im__31);
#line 287
c_rt_lib0clear(&___nl__im__40);
#line 287
c_rt_lib0clear(&___nl__im__41);
#line 287
c_rt_lib0clear(&___nl__im__42);
#line 287
c_rt_lib0clear(&___nl__im__43);
#line 287
c_rt_lib0clear(&___nl__im__44);
#line 287
c_rt_lib0clear(&___nl__im__45);
#line 287
c_rt_lib0clear(&___nl__im__59);
#line 287
c_rt_lib0clear(&___nl__im__60);
#line 287
c_rt_lib0clear(&___nl__im__74);
#line 287
c_rt_lib0clear(&___nl__im__75);
#line 287
c_rt_lib0clear(&___nl__im__76);
#line 287
c_rt_lib0clear(&___nl__im__77);
#line 287
c_rt_lib0clear(&___nl__im__80);
#line 287
c_rt_lib0clear(&___nl__im__81);
#line 287
c_rt_lib0clear(&___nl__im__88);
#line 287
c_rt_lib0clear(&___nl__im__89);
#line 287
c_rt_lib0clear(&___nl__im__96);
#line 287
c_rt_lib0clear(&___nl__im__97);
#line 287
c_rt_lib0clear(&___nl__im__109);
#line 287
c_rt_lib0clear(&___nl__im__110);
#line 287
c_rt_lib0clear(&___nl__im__124);
#line 287
c_rt_lib0clear(&___nl__im__125);
#line 287
c_rt_lib0clear(&___nl__im__135);
#line 287
c_rt_lib0clear(&___nl__im__136);
#line 287
c_rt_lib0clear(&___nl__im__148);
#line 287
c_rt_lib0clear(&___nl__im__149);
#line 287
c_rt_lib0clear(&___nl__im__164);
#line 287
c_rt_lib0clear(&___nl__im__165);
#line 287
c_rt_lib0clear(&___nl__im__179);
#line 287
c_rt_lib0clear(&___nl__im__180);
#line 287
//clear ___nl__int__181;
#line 287
c_rt_lib0clear(&___nl__im__182);
#line 287
c_rt_lib0clear(&___nl__im__187);
#line 287
c_rt_lib0clear(&___nl__im__188);
#line 287
//clear ___nl__int__203;
#line 287
c_rt_lib0clear(&___nl__im__204);
#line 287
c_rt_lib0clear(&___nl__im__205);
#line 287
c_rt_lib0clear(&___nl__im__206);
#line 287
c_rt_lib0clear(&___nl__im__209);
#line 287
c_rt_lib0clear(&___nl__im__210);
#line 287
c_rt_lib0clear(&___nl__im__211);
#line 287
c_rt_lib0clear(&___nl__im__212);
#line 287
c_rt_lib0clear(&___nl__im__226);
#line 287
c_rt_lib0clear(&___nl__im__227);
#line 287
c_rt_lib0clear(&___nl__im__239);
#line 287
c_rt_lib0clear(&___nl__im__240);
#line 287
c_rt_lib0clear(&___nl__im__252);
#line 287
c_rt_lib0clear(&___nl__im__253);
#line 287
c_rt_lib0clear(&___nl__im__265);
#line 287
c_rt_lib0clear(&___nl__im__266);
#line 287
c_rt_lib0clear(&___nl__im__279);
#line 287
c_rt_lib0clear(&___nl__im__280);
#line 287
c_rt_lib0clear(&___nl__im__292);
#line 287
c_rt_lib0clear(&___nl__im__293);
#line 287
c_rt_lib0clear(&___nl__im__294);
#line 287
c_rt_lib0clear(&___nl__im__295);
#line 287
c_rt_lib0clear(&___nl__im__296);
#line 287
c_rt_lib0clear(&___nl__im__297);
#line 287
c_rt_lib0clear(&___nl__im__298);
#line 287
c_rt_lib0clear(&___nl__im__299);
#line 287
c_rt_lib0clear(&___nl__im__300);
#line 287
c_rt_lib0clear(&___nl__im__311);
#line 287
c_rt_lib0clear(&___nl__im__312);
#line 287
c_rt_lib0clear(&___nl__im__313);
#line 287
c_rt_lib0clear(&___nl__im__324);
#line 287
c_rt_lib0clear(&___nl__im__325);
#line 287
c_rt_lib0clear(&___nl__im__326);
#line 287
c_rt_lib0clear(&___nl__im__337);
#line 287
c_rt_lib0clear(&___nl__im__338);
#line 287
c_rt_lib0clear(&___nl__im__339);
#line 287
return ___nl__im__350;
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
c_rt_lib0clear(&___nl__im__16);
#line 287
c_rt_lib0clear(&___nl__im__17);
#line 287
c_rt_lib0clear(&___nl__im__24);
#line 287
c_rt_lib0clear(&___nl__im__25);
#line 287
c_rt_lib0clear(&___nl__im__30);
#line 287
c_rt_lib0clear(&___nl__im__31);
#line 287
c_rt_lib0clear(&___nl__im__40);
#line 287
c_rt_lib0clear(&___nl__im__41);
#line 287
c_rt_lib0clear(&___nl__im__42);
#line 287
c_rt_lib0clear(&___nl__im__43);
#line 287
c_rt_lib0clear(&___nl__im__44);
#line 287
c_rt_lib0clear(&___nl__im__45);
#line 287
c_rt_lib0clear(&___nl__im__59);
#line 287
c_rt_lib0clear(&___nl__im__60);
#line 287
c_rt_lib0clear(&___nl__im__74);
#line 287
c_rt_lib0clear(&___nl__im__75);
#line 287
c_rt_lib0clear(&___nl__im__76);
#line 287
c_rt_lib0clear(&___nl__im__77);
#line 287
c_rt_lib0clear(&___nl__im__80);
#line 287
c_rt_lib0clear(&___nl__im__81);
#line 287
c_rt_lib0clear(&___nl__im__88);
#line 287
c_rt_lib0clear(&___nl__im__89);
#line 287
c_rt_lib0clear(&___nl__im__96);
#line 287
c_rt_lib0clear(&___nl__im__97);
#line 287
c_rt_lib0clear(&___nl__im__109);
#line 287
c_rt_lib0clear(&___nl__im__110);
#line 287
c_rt_lib0clear(&___nl__im__124);
#line 287
c_rt_lib0clear(&___nl__im__125);
#line 287
c_rt_lib0clear(&___nl__im__135);
#line 287
c_rt_lib0clear(&___nl__im__136);
#line 287
c_rt_lib0clear(&___nl__im__148);
#line 287
c_rt_lib0clear(&___nl__im__149);
#line 287
c_rt_lib0clear(&___nl__im__164);
#line 287
c_rt_lib0clear(&___nl__im__165);
#line 287
c_rt_lib0clear(&___nl__im__179);
#line 287
c_rt_lib0clear(&___nl__im__180);
#line 287
//clear ___nl__int__181;
#line 287
c_rt_lib0clear(&___nl__im__182);
#line 287
c_rt_lib0clear(&___nl__im__187);
#line 287
c_rt_lib0clear(&___nl__im__188);
#line 287
//clear ___nl__int__203;
#line 287
c_rt_lib0clear(&___nl__im__204);
#line 287
c_rt_lib0clear(&___nl__im__205);
#line 287
c_rt_lib0clear(&___nl__im__206);
#line 287
c_rt_lib0clear(&___nl__im__209);
#line 287
c_rt_lib0clear(&___nl__im__210);
#line 287
c_rt_lib0clear(&___nl__im__211);
#line 287
c_rt_lib0clear(&___nl__im__212);
#line 287
c_rt_lib0clear(&___nl__im__226);
#line 287
c_rt_lib0clear(&___nl__im__227);
#line 287
c_rt_lib0clear(&___nl__im__239);
#line 287
c_rt_lib0clear(&___nl__im__240);
#line 287
c_rt_lib0clear(&___nl__im__252);
#line 287
c_rt_lib0clear(&___nl__im__253);
#line 287
c_rt_lib0clear(&___nl__im__265);
#line 287
c_rt_lib0clear(&___nl__im__266);
#line 287
c_rt_lib0clear(&___nl__im__279);
#line 287
c_rt_lib0clear(&___nl__im__280);
#line 287
c_rt_lib0clear(&___nl__im__292);
#line 287
c_rt_lib0clear(&___nl__im__293);
#line 287
c_rt_lib0clear(&___nl__im__294);
#line 287
c_rt_lib0clear(&___nl__im__295);
#line 287
c_rt_lib0clear(&___nl__im__296);
#line 287
c_rt_lib0clear(&___nl__im__297);
#line 287
c_rt_lib0clear(&___nl__im__298);
#line 287
c_rt_lib0clear(&___nl__im__299);
#line 287
c_rt_lib0clear(&___nl__im__300);
#line 287
c_rt_lib0clear(&___nl__im__311);
#line 287
c_rt_lib0clear(&___nl__im__312);
#line 287
c_rt_lib0clear(&___nl__im__313);
#line 287
c_rt_lib0clear(&___nl__im__324);
#line 287
c_rt_lib0clear(&___nl__im__325);
#line 287
c_rt_lib0clear(&___nl__im__326);
#line 287
c_rt_lib0clear(&___nl__im__337);
#line 287
c_rt_lib0clear(&___nl__im__338);
#line 287
c_rt_lib0clear(&___nl__im__339);
#line 287
c_rt_lib0clear(&___nl__im__350);
#line 287
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_arr(ImmT  ___nl__im__0) {
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
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
#line 291
c_rt_lib0move(&___nl__im__3,___get_global_string_const(128));
#line 291
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 291
c_rt_lib0clear(&___nl__im__3);
#line 291
c_rt_lib0move(&___nl__im__4,___get_global_string_const(768));
#line 291
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 291
c_rt_lib0clear(&___nl__im__2);
#line 291
c_rt_lib0clear(&___nl__im__4);
#line 292
___nl__int__6 = 0;
#line 292
___nl__int__7 = 1;
#line 292
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 292
label_10:
;
#line 292
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 292
___nl__bool__9 = ___nl__int__10;
#line 292
if(___nl__bool__9){ goto label_26;}
#line 292
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 292
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 292
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_register(___nl__im__5));
#line 292
c_rt_lib0move(&___nl__im__14,___get_global_string_const(312));
#line 292
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 292
c_rt_lib0clear(&___nl__im__13);
#line 292
c_rt_lib0clear(&___nl__im__14);
#line 292
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__12));
#line 292
c_rt_lib0clear(&___nl__im__12);
#line 292
c_rt_lib0clear(&___nl__im__5);
#line 292
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 292
goto label_10;
#line 292
label_26:
;
#line 293
c_rt_lib0move(&___nl__im__16,___get_global_string_const(498));
#line 293
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__1, ___nl__im__16));
#line 293
c_rt_lib0clear(&___nl__im__16);
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
c_rt_lib0clear(&___nl__im__1);
#line 293
c_rt_lib0clear(&___nl__im__5);
#line 293
//clear ___nl__int__6;
#line 293
//clear ___nl__int__7;
#line 293
//clear ___nl__int__8;
#line 293
//clear ___nl__bool__9;
#line 293
//clear ___nl__int__10;
#line 293
c_rt_lib0clear(&___nl__im__11);
#line 293
return ___nl__im__15;
return NULL;

}

ImmT  generator_js_priv0imm_call(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 297
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 297
c_rt_lib0move(&___nl__im__4,___get_global_string_const(769));
#line 297
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
c_rt_lib0clear(&___nl__im__4);
#line 297
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 297
c_rt_lib0clear(&___nl__im__2);
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
return ___nl__im__1;
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
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
#line 301
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 301
c_rt_lib0move(&___nl__im__2, generator_js_priv0print_register_to_assign(___nl__im__3));
#line 301
c_rt_lib0clear(&___nl__im__3);
#line 302
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 302
c_rt_lib0move(&___nl__im__6,___get_global_string_const(387));
#line 302
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 302
c_rt_lib0clear(&___nl__im__5);
#line 302
c_rt_lib0clear(&___nl__im__6);
#line 302
if(___nl__bool__4){ goto label_14;}
#line 302
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 302
c_rt_lib0move(&___nl__im__8,___get_global_string_const(377));
#line 302
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 302
c_rt_lib0clear(&___nl__im__7);
#line 302
c_rt_lib0clear(&___nl__im__8);
#line 302
label_14:
;
#line 302
if(___nl__bool__4){ goto label_21;}
#line 302
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 302
c_rt_lib0move(&___nl__im__10,___get_global_string_const(379));
#line 302
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 302
c_rt_lib0clear(&___nl__im__9);
#line 302
c_rt_lib0clear(&___nl__im__10);
#line 302
label_21:
;
#line 302
if(___nl__bool__4){ goto label_28;}
#line 302
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 302
c_rt_lib0move(&___nl__im__12,___get_global_string_const(385));
#line 302
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 302
c_rt_lib0clear(&___nl__im__11);
#line 302
c_rt_lib0clear(&___nl__im__12);
#line 302
label_28:
;
#line 302
if(___nl__bool__4){ goto label_35;}
#line 302
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 302
c_rt_lib0move(&___nl__im__14,___get_global_string_const(381));
#line 302
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 302
c_rt_lib0clear(&___nl__im__13);
#line 302
c_rt_lib0clear(&___nl__im__14);
#line 302
label_35:
;
#line 302
if(___nl__bool__4){ goto label_42;}
#line 303
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 303
c_rt_lib0move(&___nl__im__16,___get_global_string_const(383));
#line 303
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 303
c_rt_lib0clear(&___nl__im__15);
#line 303
c_rt_lib0clear(&___nl__im__16);
#line 303
label_42:
;
#line 303
___nl__bool__4 = !___nl__bool__4;
#line 303
if(___nl__bool__4){ goto label_91;}
#line 304
c_rt_lib0move(&___nl__im__18,___get_global_string_const(269));
#line 304
c_rt_lib0move(&___nl__im__19,___get_global_string_const(770));
#line 304
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(274)));
#line 304
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(1, ___nl__im__21));
#line 304
c_rt_lib0clear(&___nl__im__21);
#line 304
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_int_call_sim(___nl__im__18, ___nl__im__19, ___nl__im__20));
#line 304
c_rt_lib0clear(&___nl__im__18);
#line 304
c_rt_lib0clear(&___nl__im__19);
#line 304
c_rt_lib0clear(&___nl__im__20);
#line 305
c_rt_lib0move(&___nl__im__23,___get_global_string_const(269));
#line 305
c_rt_lib0move(&___nl__im__24,___get_global_string_const(770));
#line 305
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(275)));
#line 305
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(1, ___nl__im__26));
#line 305
c_rt_lib0clear(&___nl__im__26);
#line 305
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_int_call_sim(___nl__im__23, ___nl__im__24, ___nl__im__25));
#line 305
c_rt_lib0clear(&___nl__im__23);
#line 305
c_rt_lib0clear(&___nl__im__24);
#line 305
c_rt_lib0clear(&___nl__im__25);
#line 306
c_rt_lib0move(&___nl__im__30,___get_global_string_const(269));
#line 306
c_rt_lib0move(&___nl__im__31,___get_global_string_const(771));
#line 306
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 306
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__17, ___nl__im__36));
#line 306
c_rt_lib0clear(&___nl__im__36);
#line 306
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__22));
#line 306
c_rt_lib0clear(&___nl__im__35);
#line 306
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__34));
#line 306
c_rt_lib0clear(&___nl__im__34);
#line 306
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(1, ___nl__im__33));
#line 306
c_rt_lib0clear(&___nl__im__33);
#line 306
c_rt_lib0move(&___nl__im__29, generator_js_priv0print_internal_call(___nl__im__30, ___nl__im__31, ___nl__im__32, ___ref___int__1));
#line 306
c_rt_lib0clear(&___nl__im__30);
#line 306
c_rt_lib0clear(&___nl__im__31);
#line 306
c_rt_lib0clear(&___nl__im__32);
#line 306
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__2, ___nl__im__29));
#line 306
c_rt_lib0clear(&___nl__im__29);
#line 306
c_rt_lib0move(&___nl__im__37,___get_global_string_const(440));
#line 306
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__37));
#line 306
c_rt_lib0clear(&___nl__im__28);
#line 306
c_rt_lib0clear(&___nl__im__37);
#line 306
c_rt_lib0clear(&___nl__im__0);
#line 306
c_rt_lib0clear(&___nl__im__2);
#line 306
//clear ___nl__bool__4;
#line 306
c_rt_lib0clear(&___nl__im__17);
#line 306
c_rt_lib0clear(&___nl__im__22);
#line 306
return ___nl__im__27;
#line 307
goto label_221;
#line 307
label_91:
;
#line 307
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 307
c_rt_lib0move(&___nl__im__39,___get_global_string_const(369));
#line 307
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 307
c_rt_lib0clear(&___nl__im__38);
#line 307
c_rt_lib0clear(&___nl__im__39);
#line 307
if(___nl__bool__4){ goto label_103;}
#line 307
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 307
c_rt_lib0move(&___nl__im__41,___get_global_string_const(370));
#line 307
___nl__bool__4 = c_rt_lib0eq(___nl__im__40, ___nl__im__41);
#line 307
c_rt_lib0clear(&___nl__im__40);
#line 307
c_rt_lib0clear(&___nl__im__41);
#line 307
label_103:
;
#line 307
___nl__bool__4 = !___nl__bool__4;
#line 307
if(___nl__bool__4){ goto label_127;}
#line 308
c_rt_lib0move(&___nl__im__44,___get_global_string_const(269));
#line 308
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 308
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(274)));
#line 308
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(275)));
#line 308
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(2, ___nl__im__47, ___nl__im__48));
#line 308
c_rt_lib0clear(&___nl__im__47);
#line 308
c_rt_lib0clear(&___nl__im__48);
#line 308
c_rt_lib0move(&___nl__im__43, generator_js_priv0print_int_call_sim(___nl__im__44, ___nl__im__45, ___nl__im__46));
#line 308
c_rt_lib0clear(&___nl__im__44);
#line 308
c_rt_lib0clear(&___nl__im__45);
#line 308
c_rt_lib0clear(&___nl__im__46);
#line 308
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__2, ___nl__im__43));
#line 308
c_rt_lib0clear(&___nl__im__43);
#line 308
c_rt_lib0clear(&___nl__im__0);
#line 308
c_rt_lib0clear(&___nl__im__2);
#line 308
//clear ___nl__bool__4;
#line 308
c_rt_lib0clear(&___nl__im__17);
#line 308
c_rt_lib0clear(&___nl__im__22);
#line 308
c_rt_lib0clear(&___nl__im__27);
#line 308
return ___nl__im__42;
#line 309
goto label_221;
#line 309
label_127:
;
#line 309
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 309
c_rt_lib0move(&___nl__im__50,___get_global_string_const(111));
#line 309
___nl__bool__4 = c_rt_lib0eq(___nl__im__49, ___nl__im__50);
#line 309
c_rt_lib0clear(&___nl__im__49);
#line 309
c_rt_lib0clear(&___nl__im__50);
#line 309
___nl__bool__4 = !___nl__bool__4;
#line 309
if(___nl__bool__4){ goto label_169;}
#line 310
c_rt_lib0move(&___nl__im__54,___get_global_string_const(269));
#line 310
c_rt_lib0move(&___nl__im__55,___get_global_string_const(772));
#line 311
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(274)));
#line 311
c_rt_lib0move(&___nl__im__58, generator_js_priv0print_register(___nl__im__59));
#line 311
c_rt_lib0clear(&___nl__im__59);
#line 311
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__58));
#line 311
c_rt_lib0clear(&___nl__im__58);
#line 311
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(275)));
#line 311
c_rt_lib0move(&___nl__im__61, generator_js_priv0print_register(___nl__im__62));
#line 311
c_rt_lib0clear(&___nl__im__62);
#line 311
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__61));
#line 311
c_rt_lib0clear(&___nl__im__61);
#line 311
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(2, ___nl__im__57, ___nl__im__60));
#line 311
c_rt_lib0clear(&___nl__im__57);
#line 311
c_rt_lib0clear(&___nl__im__60);
#line 311
c_rt_lib0move(&___nl__im__53, generator_js_priv0print_internal_call(___nl__im__54, ___nl__im__55, ___nl__im__56, ___ref___int__1));
#line 311
c_rt_lib0clear(&___nl__im__54);
#line 311
c_rt_lib0clear(&___nl__im__55);
#line 311
c_rt_lib0clear(&___nl__im__56);
#line 311
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__2, ___nl__im__53));
#line 311
c_rt_lib0clear(&___nl__im__53);
#line 311
c_rt_lib0move(&___nl__im__63,___get_global_string_const(440));
#line 311
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__63));
#line 311
c_rt_lib0clear(&___nl__im__52);
#line 311
c_rt_lib0clear(&___nl__im__63);
#line 311
c_rt_lib0clear(&___nl__im__0);
#line 311
c_rt_lib0clear(&___nl__im__2);
#line 311
//clear ___nl__bool__4;
#line 311
c_rt_lib0clear(&___nl__im__17);
#line 311
c_rt_lib0clear(&___nl__im__22);
#line 311
c_rt_lib0clear(&___nl__im__27);
#line 311
c_rt_lib0clear(&___nl__im__42);
#line 311
return ___nl__im__51;
#line 312
goto label_221;
#line 312
label_169:
;
#line 313
c_rt_lib0move(&___nl__im__65,___get_global_string_const(269));
#line 313
c_rt_lib0move(&___nl__im__66,___get_global_string_const(770));
#line 313
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(274)));
#line 313
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(1, ___nl__im__68));
#line 313
c_rt_lib0clear(&___nl__im__68);
#line 313
c_rt_lib0move(&___nl__im__64, generator_js_priv0print_int_call_sim(___nl__im__65, ___nl__im__66, ___nl__im__67));
#line 313
c_rt_lib0clear(&___nl__im__65);
#line 313
c_rt_lib0clear(&___nl__im__66);
#line 313
c_rt_lib0clear(&___nl__im__67);
#line 314
c_rt_lib0move(&___nl__im__70,___get_global_string_const(269));
#line 314
c_rt_lib0move(&___nl__im__71,___get_global_string_const(770));
#line 314
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(275)));
#line 314
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(1, ___nl__im__73));
#line 314
c_rt_lib0clear(&___nl__im__73);
#line 314
c_rt_lib0move(&___nl__im__69, generator_js_priv0print_int_call_sim(___nl__im__70, ___nl__im__71, ___nl__im__72));
#line 314
c_rt_lib0clear(&___nl__im__70);
#line 314
c_rt_lib0clear(&___nl__im__71);
#line 314
c_rt_lib0clear(&___nl__im__72);
#line 315
c_rt_lib0move(&___nl__im__81,___get_global_string_const(403));
#line 315
c_rt_lib0move(&___nl__im__80, generator_js_priv0imm_call(___nl__im__81));
#line 315
c_rt_lib0clear(&___nl__im__81);
#line 315
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__2, ___nl__im__80));
#line 315
c_rt_lib0clear(&___nl__im__80);
#line 315
c_rt_lib0move(&___nl__im__82,___get_global_string_const(455));
#line 315
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__82));
#line 315
c_rt_lib0clear(&___nl__im__79);
#line 315
c_rt_lib0clear(&___nl__im__82);
#line 315
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__64));
#line 315
c_rt_lib0clear(&___nl__im__78);
#line 315
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 315
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__83));
#line 315
c_rt_lib0clear(&___nl__im__77);
#line 315
c_rt_lib0clear(&___nl__im__83);
#line 315
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__69));
#line 315
c_rt_lib0clear(&___nl__im__76);
#line 315
c_rt_lib0move(&___nl__im__84,___get_global_string_const(503));
#line 315
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__84));
#line 315
c_rt_lib0clear(&___nl__im__75);
#line 315
c_rt_lib0clear(&___nl__im__84);
#line 315
c_rt_lib0clear(&___nl__im__0);
#line 315
c_rt_lib0clear(&___nl__im__2);
#line 315
//clear ___nl__bool__4;
#line 315
c_rt_lib0clear(&___nl__im__17);
#line 315
c_rt_lib0clear(&___nl__im__22);
#line 315
c_rt_lib0clear(&___nl__im__27);
#line 315
c_rt_lib0clear(&___nl__im__42);
#line 315
c_rt_lib0clear(&___nl__im__51);
#line 315
c_rt_lib0clear(&___nl__im__64);
#line 315
c_rt_lib0clear(&___nl__im__69);
#line 315
return ___nl__im__74;
#line 316
goto label_221;
#line 316
label_221:
;
#line 316
//clear ___nl__bool__4;
#line 316
c_rt_lib0clear(&___nl__im__17);
#line 316
c_rt_lib0clear(&___nl__im__22);
#line 316
c_rt_lib0clear(&___nl__im__27);
#line 316
c_rt_lib0clear(&___nl__im__42);
#line 316
c_rt_lib0clear(&___nl__im__51);
#line 316
c_rt_lib0clear(&___nl__im__64);
#line 316
c_rt_lib0clear(&___nl__im__69);
#line 316
c_rt_lib0clear(&___nl__im__74);
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
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
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
#line 322
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_register_to_assign(___nl__im__3));
#line 322
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 322
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 322
c_rt_lib0clear(&___nl__im__7);
#line 322
c_rt_lib0clear(&___nl__im__8);
#line 322
c_rt_lib0move(&___nl__im__9,___get_global_string_const(455));
#line 322
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 322
c_rt_lib0clear(&___nl__im__6);
#line 322
c_rt_lib0clear(&___nl__im__9);
#line 323
___nl__int__10 = 0;
#line 324
c_rt_lib0move(&___nl__im__11,___get_global_string_const(37));
#line 325
c_rt_lib0move(&___nl__im__12,___get_global_string_const(37));
#line 326
___nl__int__14 = 0;
#line 326
___nl__int__15 = 1;
#line 326
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 326
label_15:
;
#line 326
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 326
___nl__bool__17 = ___nl__int__18;
#line 326
if(___nl__bool__17){ goto label_61;}
#line 326
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 326
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 327
___nl__int__21 = 0;
#line 327
___nl__int__22 = ___nl__int__10 == ___nl__int__21;
#line 327
___nl__bool__20 = ___nl__int__22;
#line 327
//clear ___nl__int__21;
#line 327
//clear ___nl__int__22;
#line 327
___nl__bool__20 = !___nl__bool__20;
#line 327
___nl__bool__20 = !___nl__bool__20;
#line 327
if(___nl__bool__20){ goto label_33;}
#line 327
c_rt_lib0move(&___nl__im__23,___get_global_string_const(312));
#line 327
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__23));
#line 327
c_rt_lib0clear(&___nl__im__23);
#line 327
goto label_33;
#line 327
label_33:
;
#line 327
//clear ___nl__bool__20;
#line 328
___nl__int__24 = 1;
#line 328
___nl__int__10 = ___nl__int__10 + ___nl__int__24;
#line 328
//clear ___nl__int__24;
#line 329
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(40));
#line 329
if(___nl__bool__25){ goto label_45;}
#line 331
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(224));
#line 331
if(___nl__bool__25){ goto label_50;}
#line 331
c_rt_lib0move(&___nl__im__26,___get_global_string_const(16));
#line 331
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__13));
#line 331
nl_die_arg(___nl__im__26);
#line 329
label_45:
;
#line 329
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(40)));
#line 329
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 330
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__27, ___nl__int__10, (*___ref___int__4)));
#line 331
goto label_57;
#line 331
label_50:
;
#line 331
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(224)));
#line 331
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 332
c_rt_lib0move(&___nl__im__31, generator_js_priv0print_register(___nl__im__29));
#line 332
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__31));
#line 332
c_rt_lib0clear(&___nl__im__31);
#line 333
goto label_57;
#line 333
label_57:
;
#line 333
c_rt_lib0clear(&___nl__im__13);
#line 334
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 334
goto label_15;
#line 334
label_61:
;
#line 335
___nl__int__32 = 1;
#line 335
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__32;
#line 335
//clear ___nl__int__32;
#line 336
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 336
c_rt_lib0move(&___nl__im__36,___get_global_string_const(503));
#line 336
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 336
c_rt_lib0clear(&___nl__im__35);
#line 336
c_rt_lib0clear(&___nl__im__36);
#line 336
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__12));
#line 336
c_rt_lib0clear(&___nl__im__34);
#line 336
c_rt_lib0clear(&___nl__im__0);
#line 336
c_rt_lib0clear(&___nl__im__1);
#line 336
c_rt_lib0clear(&___nl__im__2);
#line 336
c_rt_lib0clear(&___nl__im__3);
#line 336
c_rt_lib0clear(&___nl__im__5);
#line 336
//clear ___nl__int__10;
#line 336
c_rt_lib0clear(&___nl__im__11);
#line 336
c_rt_lib0clear(&___nl__im__12);
#line 336
c_rt_lib0clear(&___nl__im__13);
#line 336
//clear ___nl__int__14;
#line 336
//clear ___nl__int__15;
#line 336
//clear ___nl__int__16;
#line 336
//clear ___nl__bool__17;
#line 336
//clear ___nl__int__18;
#line 336
c_rt_lib0clear(&___nl__im__19);
#line 336
//clear ___nl__bool__25;
#line 336
c_rt_lib0clear(&___nl__im__26);
#line 336
c_rt_lib0clear(&___nl__im__27);
#line 336
c_rt_lib0clear(&___nl__im__28);
#line 336
c_rt_lib0clear(&___nl__im__29);
#line 336
c_rt_lib0clear(&___nl__im__30);
#line 336
return ___nl__im__33;
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
#line 341
c_rt_lib0move(&___nl__im__9,___get_global_string_const(773));
#line 341
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 341
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 341
c_rt_lib0clear(&___nl__string__10);
#line 341
c_rt_lib0move(&___nl__im__11,___get_global_string_const(108));
#line 341
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 341
c_rt_lib0clear(&___nl__im__8);
#line 341
c_rt_lib0clear(&___nl__im__11);
#line 341
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 341
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 341
c_rt_lib0clear(&___nl__im__7);
#line 341
c_rt_lib0clear(&___nl__string__12);
#line 342
c_rt_lib0move(&___nl__im__19,___get_global_string_const(723));
#line 342
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 342
c_rt_lib0clear(&___nl__im__19);
#line 342
c_rt_lib0move(&___nl__im__20,___get_global_string_const(774));
#line 342
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 342
c_rt_lib0clear(&___nl__im__18);
#line 342
c_rt_lib0clear(&___nl__im__20);
#line 342
c_rt_lib0move(&___nl__im__22,___get_global_string_const(40));
#line 342
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 342
c_rt_lib0clear(&___nl__im__22);
#line 342
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 342
c_rt_lib0clear(&___nl__im__17);
#line 342
c_rt_lib0clear(&___nl__im__21);
#line 342
c_rt_lib0move(&___nl__im__23,___get_global_string_const(455));
#line 342
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 342
c_rt_lib0clear(&___nl__im__16);
#line 342
c_rt_lib0clear(&___nl__im__23);
#line 342
c_rt_lib0move(&___nl__im__24, generator_js_priv0print_register(___nl__im__3));
#line 342
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 342
c_rt_lib0clear(&___nl__im__15);
#line 342
c_rt_lib0clear(&___nl__im__24);
#line 342
c_rt_lib0move(&___nl__im__25,___get_global_string_const(503));
#line 342
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 342
c_rt_lib0clear(&___nl__im__14);
#line 342
c_rt_lib0clear(&___nl__im__25);
#line 342
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 342
c_rt_lib0clear(&___nl__im__13);
#line 343
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 344
c_rt_lib0move(&___nl__im__28, generator_js_priv0print_register_to_assign(___nl__im__3));
#line 344
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 344
c_rt_lib0clear(&___nl__im__28);
#line 344
c_rt_lib0move(&___nl__im__29,___get_global_string_const(756));
#line 344
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 344
c_rt_lib0clear(&___nl__im__27);
#line 344
c_rt_lib0clear(&___nl__im__29);
#line 344
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 344
c_rt_lib0clear(&___nl__im__26);
#line 345
c_rt_lib0move(&___nl__im__31,___get_global_string_const(758));
#line 345
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 345
c_rt_lib0clear(&___nl__im__31);
#line 345
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 345
c_rt_lib0clear(&___nl__im__30);
#line 345
c_rt_lib0clear(&___nl__im__3);
#line 345
//clear ___nl__int__4;
#line 345
//clear ___nl__int__5;
#line 345
c_rt_lib0clear(&___nl__im__6);
#line 345
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
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
#line 351
___nl__int__4 = 0;
#line 352
c_rt_lib0move(&___nl__im__5,___get_global_string_const(37));
#line 353
c_rt_lib0move(&___nl__im__6,___get_global_string_const(37));
#line 354
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 354
c_rt_lib0move(&___nl__im__13,___get_global_string_const(111));
#line 354
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 354
c_rt_lib0clear(&___nl__im__12);
#line 354
c_rt_lib0clear(&___nl__im__13);
#line 354
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 354
c_rt_lib0clear(&___nl__im__11);
#line 354
c_rt_lib0move(&___nl__im__14,___get_global_string_const(111));
#line 354
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 354
c_rt_lib0clear(&___nl__im__10);
#line 354
c_rt_lib0clear(&___nl__im__14);
#line 354
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 354
c_rt_lib0clear(&___nl__im__9);
#line 354
c_rt_lib0move(&___nl__im__15,___get_global_string_const(455));
#line 354
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 354
c_rt_lib0clear(&___nl__im__8);
#line 354
c_rt_lib0clear(&___nl__im__15);
#line 355
___nl__int__17 = 0;
#line 355
___nl__int__18 = 1;
#line 355
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 355
label_23:
;
#line 355
___nl__int__21 = ___nl__int__17 >= ___nl__int__19;
#line 355
___nl__bool__20 = ___nl__int__21;
#line 355
if(___nl__bool__20){ goto label_76;}
#line 355
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 355
c_rt_lib0copy(&___nl__im__16, ___nl__im__22);
#line 356
___nl__int__24 = 0;
#line 356
___nl__int__25 = ___nl__int__4 == ___nl__int__24;
#line 356
___nl__bool__23 = ___nl__int__25;
#line 356
//clear ___nl__int__24;
#line 356
//clear ___nl__int__25;
#line 356
___nl__bool__23 = !___nl__bool__23;
#line 356
___nl__bool__23 = !___nl__bool__23;
#line 356
if(___nl__bool__23){ goto label_41;}
#line 356
c_rt_lib0move(&___nl__im__26,___get_global_string_const(312));
#line 356
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__26));
#line 356
c_rt_lib0clear(&___nl__im__26);
#line 356
goto label_41;
#line 356
label_41:
;
#line 356
//clear ___nl__bool__23;
#line 357
___nl__int__27 = 1;
#line 357
___nl__int__4 = ___nl__int__4 + ___nl__int__27;
#line 357
//clear ___nl__int__27;
#line 358
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(40));
#line 358
if(___nl__bool__28){ goto label_55;}
#line 360
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(345));
#line 360
if(___nl__bool__28){ goto label_60;}
#line 362
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(280));
#line 362
if(___nl__bool__28){ goto label_67;}
#line 362
c_rt_lib0move(&___nl__im__29,___get_global_string_const(16));
#line 362
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__16));
#line 362
nl_die_arg(___nl__im__29);
#line 358
label_55:
;
#line 358
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(40)));
#line 358
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 359
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__30, ___nl__int__4, (*___ref___int__3)));
#line 360
goto label_72;
#line 360
label_60:
;
#line 360
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(345)));
#line 360
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 361
c_rt_lib0move(&___nl__im__34, generator_js_priv0print_register(___nl__im__32));
#line 361
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__34));
#line 361
c_rt_lib0clear(&___nl__im__34);
#line 362
goto label_72;
#line 362
label_67:
;
#line 362
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(280)));
#line 362
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 363
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__35));
#line 364
goto label_72;
#line 364
label_72:
;
#line 364
c_rt_lib0clear(&___nl__im__16);
#line 365
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 365
goto label_23;
#line 365
label_76:
;
#line 366
___nl__int__37 = 1;
#line 366
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__37;
#line 366
//clear ___nl__int__37;
#line 367
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 367
c_rt_lib0move(&___nl__im__41,___get_global_string_const(503));
#line 367
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 367
c_rt_lib0clear(&___nl__im__40);
#line 367
c_rt_lib0clear(&___nl__im__41);
#line 367
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__6));
#line 367
c_rt_lib0clear(&___nl__im__39);
#line 367
c_rt_lib0clear(&___nl__im__0);
#line 367
c_rt_lib0clear(&___nl__im__1);
#line 367
c_rt_lib0clear(&___nl__im__2);
#line 367
//clear ___nl__int__4;
#line 367
c_rt_lib0clear(&___nl__im__5);
#line 367
c_rt_lib0clear(&___nl__im__6);
#line 367
c_rt_lib0clear(&___nl__im__7);
#line 367
c_rt_lib0clear(&___nl__im__16);
#line 367
//clear ___nl__int__17;
#line 367
//clear ___nl__int__18;
#line 367
//clear ___nl__int__19;
#line 367
//clear ___nl__bool__20;
#line 367
//clear ___nl__int__21;
#line 367
c_rt_lib0clear(&___nl__im__22);
#line 367
//clear ___nl__bool__28;
#line 367
c_rt_lib0clear(&___nl__im__29);
#line 367
c_rt_lib0clear(&___nl__im__30);
#line 367
c_rt_lib0clear(&___nl__im__31);
#line 367
c_rt_lib0clear(&___nl__im__32);
#line 367
c_rt_lib0clear(&___nl__im__33);
#line 367
c_rt_lib0clear(&___nl__im__35);
#line 367
c_rt_lib0clear(&___nl__im__36);
#line 367
return ___nl__im__38;
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
INT  ___nl__int__9 = 0;
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
#line 371
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 372
___nl__int__5 = 0;
#line 372
___nl__int__6 = 1;
#line 372
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 372
label_4:
;
#line 372
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 372
___nl__bool__8 = ___nl__int__9;
#line 372
if(___nl__bool__8){ goto label_16;}
#line 372
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 372
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 373
c_rt_lib0move(&___nl__im__11, generator_js_priv0print_register(___nl__im__4));
#line 373
c_rt_lib0array_push(&___nl__im__3, ___nl__im__11);
#line 373
c_rt_lib0clear(&___nl__im__11);
#line 373
c_rt_lib0clear(&___nl__im__4);
#line 374
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 374
goto label_4;
#line 374
label_16:
;
#line 375
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_namespace_name());
#line 375
c_rt_lib0move(&___nl__im__20,___get_global_string_const(111));
#line 375
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 375
c_rt_lib0clear(&___nl__im__19);
#line 375
c_rt_lib0clear(&___nl__im__20);
#line 375
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__0));
#line 375
c_rt_lib0clear(&___nl__im__18);
#line 375
c_rt_lib0move(&___nl__im__21,___get_global_string_const(111));
#line 375
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 375
c_rt_lib0clear(&___nl__im__17);
#line 375
c_rt_lib0clear(&___nl__im__21);
#line 375
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__1));
#line 375
c_rt_lib0clear(&___nl__im__16);
#line 375
c_rt_lib0move(&___nl__im__22,___get_global_string_const(455));
#line 375
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__22));
#line 375
c_rt_lib0clear(&___nl__im__15);
#line 375
c_rt_lib0clear(&___nl__im__22);
#line 375
c_rt_lib0move(&___nl__im__24,___get_global_string_const(326));
#line 375
c_rt_lib0move(&___nl__im__23, array0join(___nl__im__24, ___nl__im__3));
#line 375
c_rt_lib0clear(&___nl__im__24);
#line 375
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 375
c_rt_lib0clear(&___nl__im__14);
#line 375
c_rt_lib0clear(&___nl__im__23);
#line 375
c_rt_lib0move(&___nl__im__25,___get_global_string_const(320));
#line 375
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__25));
#line 375
c_rt_lib0clear(&___nl__im__13);
#line 375
c_rt_lib0clear(&___nl__im__25);
#line 375
c_rt_lib0clear(&___nl__im__0);
#line 375
c_rt_lib0clear(&___nl__im__1);
#line 375
c_rt_lib0clear(&___nl__im__2);
#line 375
c_rt_lib0clear(&___nl__im__3);
#line 375
c_rt_lib0clear(&___nl__im__4);
#line 375
//clear ___nl__int__5;
#line 375
//clear ___nl__int__6;
#line 375
//clear ___nl__int__7;
#line 375
//clear ___nl__bool__8;
#line 375
//clear ___nl__int__9;
#line 375
c_rt_lib0clear(&___nl__im__10);
#line 375
return ___nl__im__12;
#line 375
c_rt_lib0clear(&___nl__im__0);
#line 375
c_rt_lib0clear(&___nl__im__1);
#line 375
c_rt_lib0clear(&___nl__im__2);
#line 375
c_rt_lib0clear(&___nl__im__3);
#line 375
c_rt_lib0clear(&___nl__im__4);
#line 375
//clear ___nl__int__5;
#line 375
//clear ___nl__int__6;
#line 375
//clear ___nl__int__7;
#line 375
//clear ___nl__bool__8;
#line 375
//clear ___nl__int__9;
#line 375
c_rt_lib0clear(&___nl__im__10);
#line 375
c_rt_lib0clear(&___nl__im__12);
#line 375
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
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
#line 379
c_rt_lib0move(&___nl__im__3,___get_global_string_const(128));
#line 379
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 379
c_rt_lib0clear(&___nl__im__3);
#line 379
c_rt_lib0move(&___nl__im__4,___get_global_string_const(768));
#line 379
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 379
c_rt_lib0clear(&___nl__im__2);
#line 379
c_rt_lib0clear(&___nl__im__4);
#line 380
___nl__int__6 = 0;
#line 380
___nl__int__7 = 1;
#line 380
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 380
label_10:
;
#line 380
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 380
___nl__bool__9 = ___nl__int__10;
#line 380
if(___nl__bool__9){ goto label_26;}
#line 380
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 380
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 380
c_rt_lib0move(&___nl__im__13, generator_js_priv0print_const_value(___nl__im__5));
#line 380
c_rt_lib0move(&___nl__im__14,___get_global_string_const(312));
#line 380
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 380
c_rt_lib0clear(&___nl__im__13);
#line 380
c_rt_lib0clear(&___nl__im__14);
#line 380
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__12));
#line 380
c_rt_lib0clear(&___nl__im__12);
#line 380
c_rt_lib0clear(&___nl__im__5);
#line 380
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 380
goto label_10;
#line 380
label_26:
;
#line 381
c_rt_lib0move(&___nl__im__16,___get_global_string_const(498));
#line 381
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__1, ___nl__im__16));
#line 381
c_rt_lib0clear(&___nl__im__16);
#line 381
c_rt_lib0clear(&___nl__im__0);
#line 381
c_rt_lib0clear(&___nl__im__1);
#line 381
c_rt_lib0clear(&___nl__im__5);
#line 381
//clear ___nl__int__6;
#line 381
//clear ___nl__int__7;
#line 381
//clear ___nl__int__8;
#line 381
//clear ___nl__bool__9;
#line 381
//clear ___nl__int__10;
#line 381
c_rt_lib0clear(&___nl__im__11);
#line 381
return ___nl__im__15;
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
#line 385
c_rt_lib0move(&___nl__im__3,___get_global_string_const(129));
#line 385
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
c_rt_lib0move(&___nl__im__4,___get_global_string_const(775));
#line 385
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 385
c_rt_lib0clear(&___nl__im__2);
#line 385
c_rt_lib0clear(&___nl__im__4);
#line 386
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 386
label_8:
;
#line 386
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 386
if(___nl__bool__6){ goto label_34;}
#line 386
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 386
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 386
c_rt_lib0move(&___nl__im__13,___get_global_string_const(37));
#line 386
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 386
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 386
c_rt_lib0clear(&___nl__im__13);
#line 386
c_rt_lib0clear(&___nl__im__14);
#line 386
c_rt_lib0move(&___nl__im__15,___get_global_string_const(522));
#line 386
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 386
c_rt_lib0clear(&___nl__im__12);
#line 386
c_rt_lib0clear(&___nl__im__15);
#line 386
c_rt_lib0move(&___nl__im__16, generator_js_priv0print_const_value(___nl__im__7));
#line 386
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 386
c_rt_lib0clear(&___nl__im__11);
#line 386
c_rt_lib0clear(&___nl__im__16);
#line 386
c_rt_lib0move(&___nl__im__17,___get_global_string_const(312));
#line 386
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 386
c_rt_lib0clear(&___nl__im__10);
#line 386
c_rt_lib0clear(&___nl__im__17);
#line 386
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 386
c_rt_lib0clear(&___nl__im__9);
#line 386
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 386
goto label_8;
#line 386
label_34:
;
#line 387
c_rt_lib0move(&___nl__im__19,___get_global_string_const(776));
#line 387
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 387
c_rt_lib0clear(&___nl__im__19);
#line 387
c_rt_lib0clear(&___nl__im__0);
#line 387
c_rt_lib0clear(&___nl__im__1);
#line 387
c_rt_lib0clear(&___nl__im__5);
#line 387
//clear ___nl__bool__6;
#line 387
c_rt_lib0clear(&___nl__im__7);
#line 387
c_rt_lib0clear(&___nl__im__8);
#line 387
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
#line 391
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 391
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 391
c_rt_lib0clear(&___nl__im__2);
#line 391
___nl__bool__1 = !___nl__bool__1;
#line 391
if(___nl__bool__1){ goto label_36;}
#line 392
c_rt_lib0move(&___nl__im__9,___get_global_string_const(777));
#line 392
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 392
c_rt_lib0clear(&___nl__im__9);
#line 392
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
#line 392
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 392
c_rt_lib0clear(&___nl__im__8);
#line 392
c_rt_lib0clear(&___nl__im__10);
#line 392
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 392
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 392
c_rt_lib0clear(&___nl__im__12);
#line 392
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 392
c_rt_lib0clear(&___nl__im__7);
#line 392
c_rt_lib0clear(&___nl__im__11);
#line 392
c_rt_lib0move(&___nl__im__13,___get_global_string_const(326));
#line 392
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 392
c_rt_lib0clear(&___nl__im__6);
#line 392
c_rt_lib0clear(&___nl__im__13);
#line 393
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 393
c_rt_lib0move(&___nl__im__14, generator_js_priv0print_const_value(___nl__im__15));
#line 393
c_rt_lib0clear(&___nl__im__15);
#line 393
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 393
c_rt_lib0clear(&___nl__im__5);
#line 393
c_rt_lib0clear(&___nl__im__14);
#line 393
c_rt_lib0move(&___nl__im__16,___get_global_string_const(320));
#line 393
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 393
c_rt_lib0clear(&___nl__im__4);
#line 393
c_rt_lib0clear(&___nl__im__16);
#line 393
c_rt_lib0clear(&___nl__im__0);
#line 393
//clear ___nl__bool__1;
#line 393
return ___nl__im__3;
#line 394
goto label_59;
#line 394
label_36:
;
#line 395
c_rt_lib0move(&___nl__im__21,___get_global_string_const(777));
#line 395
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 395
c_rt_lib0clear(&___nl__im__21);
#line 395
c_rt_lib0move(&___nl__im__22,___get_global_string_const(455));
#line 395
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 395
c_rt_lib0clear(&___nl__im__20);
#line 395
c_rt_lib0clear(&___nl__im__22);
#line 395
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 395
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 395
c_rt_lib0clear(&___nl__im__24);
#line 395
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 395
c_rt_lib0clear(&___nl__im__19);
#line 395
c_rt_lib0clear(&___nl__im__23);
#line 395
c_rt_lib0move(&___nl__im__25,___get_global_string_const(778));
#line 395
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 395
c_rt_lib0clear(&___nl__im__18);
#line 395
c_rt_lib0clear(&___nl__im__25);
#line 395
c_rt_lib0clear(&___nl__im__0);
#line 395
//clear ___nl__bool__1;
#line 395
c_rt_lib0clear(&___nl__im__3);
#line 395
return ___nl__im__17;
#line 396
goto label_59;
#line 396
label_59:
;
#line 396
//clear ___nl__bool__1;
#line 396
c_rt_lib0clear(&___nl__im__3);
#line 396
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
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
#line 400
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 400
___nl__bool__1 = !___nl__bool__1;
#line 400
if(___nl__bool__1){ goto label_20;}
#line 401
c_rt_lib0move(&___nl__im__6,___get_global_string_const(403));
#line 401
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 401
c_rt_lib0clear(&___nl__im__6);
#line 401
c_rt_lib0move(&___nl__im__7,___get_global_string_const(455));
#line 401
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 401
c_rt_lib0clear(&___nl__im__5);
#line 401
c_rt_lib0clear(&___nl__im__7);
#line 401
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 401
c_rt_lib0clear(&___nl__im__4);
#line 401
c_rt_lib0move(&___nl__im__8,___get_global_string_const(320));
#line 401
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 401
c_rt_lib0clear(&___nl__im__3);
#line 401
c_rt_lib0clear(&___nl__im__8);
#line 401
c_rt_lib0clear(&___nl__im__0);
#line 401
//clear ___nl__bool__1;
#line 401
return ___nl__im__2;
#line 402
goto label_138;
#line 402
label_20:
;
#line 402
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 402
___nl__bool__1 = !___nl__bool__1;
#line 402
if(___nl__bool__1){ goto label_44;}
#line 403
c_rt_lib0move(&___nl__im__13,___get_global_string_const(280));
#line 403
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 403
c_rt_lib0clear(&___nl__im__13);
#line 403
c_rt_lib0move(&___nl__im__14,___get_global_string_const(455));
#line 403
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 403
c_rt_lib0clear(&___nl__im__12);
#line 403
c_rt_lib0clear(&___nl__im__14);
#line 403
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 403
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 403
c_rt_lib0clear(&___nl__im__11);
#line 403
c_rt_lib0clear(&___nl__im__15);
#line 403
c_rt_lib0move(&___nl__im__16,___get_global_string_const(320));
#line 403
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 403
c_rt_lib0clear(&___nl__im__10);
#line 403
c_rt_lib0clear(&___nl__im__16);
#line 403
c_rt_lib0clear(&___nl__im__0);
#line 403
//clear ___nl__bool__1;
#line 403
c_rt_lib0clear(&___nl__im__2);
#line 403
return ___nl__im__9;
#line 404
goto label_138;
#line 404
label_44:
;
#line 404
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 404
___nl__bool__1 = !___nl__bool__1;
#line 404
if(___nl__bool__1){ goto label_55;}
#line 405
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_const_arr(___nl__im__0));
#line 405
c_rt_lib0clear(&___nl__im__0);
#line 405
//clear ___nl__bool__1;
#line 405
c_rt_lib0clear(&___nl__im__2);
#line 405
c_rt_lib0clear(&___nl__im__9);
#line 405
return ___nl__im__17;
#line 406
goto label_138;
#line 406
label_55:
;
#line 406
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 406
___nl__bool__1 = !___nl__bool__1;
#line 406
if(___nl__bool__1){ goto label_67;}
#line 407
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_const_hash(___nl__im__0));
#line 407
c_rt_lib0clear(&___nl__im__0);
#line 407
//clear ___nl__bool__1;
#line 407
c_rt_lib0clear(&___nl__im__2);
#line 407
c_rt_lib0clear(&___nl__im__9);
#line 407
c_rt_lib0clear(&___nl__im__17);
#line 407
return ___nl__im__18;
#line 408
goto label_138;
#line 408
label_67:
;
#line 408
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 408
___nl__bool__1 = !___nl__bool__1;
#line 408
if(___nl__bool__1){ goto label_134;}
#line 409
c_rt_lib0move(&___nl__im__20, generator_js_priv0is_true(___nl__im__0));
#line 409
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__20);
#line 409
c_rt_lib0clear(&___nl__im__20);
#line 409
___nl__bool__19 = !___nl__bool__19;
#line 409
if(___nl__bool__19){ goto label_92;}
#line 410
c_rt_lib0move(&___nl__im__22,___get_global_string_const(269));
#line 410
c_rt_lib0move(&___nl__im__23,___get_global_string_const(779));
#line 410
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(0));
#line 410
c_rt_lib0move(&___nl__im__21, generator_js_priv0print_int_call_sim(___nl__im__22, ___nl__im__23, ___nl__im__24));
#line 410
c_rt_lib0clear(&___nl__im__22);
#line 410
c_rt_lib0clear(&___nl__im__23);
#line 410
c_rt_lib0clear(&___nl__im__24);
#line 410
c_rt_lib0clear(&___nl__im__0);
#line 410
//clear ___nl__bool__1;
#line 410
c_rt_lib0clear(&___nl__im__2);
#line 410
c_rt_lib0clear(&___nl__im__9);
#line 410
c_rt_lib0clear(&___nl__im__17);
#line 410
c_rt_lib0clear(&___nl__im__18);
#line 410
//clear ___nl__bool__19;
#line 410
return ___nl__im__21;
#line 411
goto label_128;
#line 411
label_92:
;
#line 411
c_rt_lib0move(&___nl__im__25, generator_js_priv0is_false(___nl__im__0));
#line 411
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__25);
#line 411
c_rt_lib0clear(&___nl__im__25);
#line 411
___nl__bool__19 = !___nl__bool__19;
#line 411
if(___nl__bool__19){ goto label_115;}
#line 412
c_rt_lib0move(&___nl__im__27,___get_global_string_const(269));
#line 412
c_rt_lib0move(&___nl__im__28,___get_global_string_const(780));
#line 412
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 412
c_rt_lib0move(&___nl__im__26, generator_js_priv0print_int_call_sim(___nl__im__27, ___nl__im__28, ___nl__im__29));
#line 412
c_rt_lib0clear(&___nl__im__27);
#line 412
c_rt_lib0clear(&___nl__im__28);
#line 412
c_rt_lib0clear(&___nl__im__29);
#line 412
c_rt_lib0clear(&___nl__im__0);
#line 412
//clear ___nl__bool__1;
#line 412
c_rt_lib0clear(&___nl__im__2);
#line 412
c_rt_lib0clear(&___nl__im__9);
#line 412
c_rt_lib0clear(&___nl__im__17);
#line 412
c_rt_lib0clear(&___nl__im__18);
#line 412
//clear ___nl__bool__19;
#line 412
c_rt_lib0clear(&___nl__im__21);
#line 412
return ___nl__im__26;
#line 413
goto label_128;
#line 413
label_115:
;
#line 414
c_rt_lib0move(&___nl__im__30, generator_js_priv0print_const_ov(___nl__im__0));
#line 414
c_rt_lib0clear(&___nl__im__0);
#line 414
//clear ___nl__bool__1;
#line 414
c_rt_lib0clear(&___nl__im__2);
#line 414
c_rt_lib0clear(&___nl__im__9);
#line 414
c_rt_lib0clear(&___nl__im__17);
#line 414
c_rt_lib0clear(&___nl__im__18);
#line 414
//clear ___nl__bool__19;
#line 414
c_rt_lib0clear(&___nl__im__21);
#line 414
c_rt_lib0clear(&___nl__im__26);
#line 414
return ___nl__im__30;
#line 415
goto label_128;
#line 415
label_128:
;
#line 415
//clear ___nl__bool__19;
#line 415
c_rt_lib0clear(&___nl__im__21);
#line 415
c_rt_lib0clear(&___nl__im__26);
#line 415
c_rt_lib0clear(&___nl__im__30);
#line 416
goto label_138;
#line 416
label_134:
;
#line 417
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 417
nl_die_arg(___nl__im__31);
#line 418
goto label_138;
#line 418
label_138:
;
#line 418
//clear ___nl__bool__1;
#line 418
c_rt_lib0clear(&___nl__im__2);
#line 418
c_rt_lib0clear(&___nl__im__9);
#line 418
c_rt_lib0clear(&___nl__im__17);
#line 418
c_rt_lib0clear(&___nl__im__18);
#line 418
c_rt_lib0clear(&___nl__im__31);
#line 418
c_rt_lib0clear(&___nl__im__0);
#line 418
return NULL;
return NULL;

}

ImmT  generator_js_priv0is_true(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 423
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(180));
#line 423
___nl__bool__2 = !___nl__bool__1;
#line 423
if(___nl__bool__2){ goto label_7;}
#line 423
c_rt_lib0move(&___nl__im__3, ov0has_value(___nl__im__0));
#line 423
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__3);
#line 423
c_rt_lib0clear(&___nl__im__3);
#line 423
___nl__bool__1 = !___nl__bool__1;
#line 423
label_7:
;
#line 423
//clear ___nl__bool__2;
#line 423
c_rt_lib0move(&___nl__im__4, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 423
c_rt_lib0clear(&___nl__im__0);
#line 423
//clear ___nl__bool__1;
#line 423
return ___nl__im__4;
#line 423
c_rt_lib0clear(&___nl__im__0);
#line 423
//clear ___nl__bool__1;
#line 423
c_rt_lib0clear(&___nl__im__4);
#line 423
return NULL;
return NULL;

}

ImmT  generator_js_priv0is_false(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 427
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(181));
#line 427
___nl__bool__2 = !___nl__bool__1;
#line 427
if(___nl__bool__2){ goto label_7;}
#line 427
c_rt_lib0move(&___nl__im__3, ov0has_value(___nl__im__0));
#line 427
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__3);
#line 427
c_rt_lib0clear(&___nl__im__3);
#line 427
___nl__bool__1 = !___nl__bool__1;
#line 427
label_7:
;
#line 427
//clear ___nl__bool__2;
#line 427
c_rt_lib0move(&___nl__im__4, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 427
c_rt_lib0clear(&___nl__im__0);
#line 427
//clear ___nl__bool__1;
#line 427
return ___nl__im__4;
#line 427
c_rt_lib0clear(&___nl__im__0);
#line 427
//clear ___nl__bool__1;
#line 427
c_rt_lib0clear(&___nl__im__4);
#line 427
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
#line 432
c_rt_lib0move(&___nl__im__3,___get_global_string_const(781));
#line 432
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 432
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 432
c_rt_lib0clear(&___nl__im__3);
#line 432
c_rt_lib0clear(&___nl__string__4);
#line 432
c_rt_lib0move(&___nl__im__5,___get_global_string_const(782));
#line 432
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 432
c_rt_lib0clear(&___nl__im__2);
#line 432
c_rt_lib0clear(&___nl__im__5);
#line 432
//clear ___nl__int__0;
#line 432
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0print_hash(ImmT  ___nl__im__0) {
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
#line 436
c_rt_lib0move(&___nl__im__3,___get_global_string_const(129));
#line 436
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 436
c_rt_lib0clear(&___nl__im__3);
#line 436
c_rt_lib0move(&___nl__im__4,___get_global_string_const(775));
#line 436
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 436
c_rt_lib0clear(&___nl__im__2);
#line 436
c_rt_lib0clear(&___nl__im__4);
#line 437
___nl__int__6 = 0;
#line 437
___nl__int__7 = 1;
#line 437
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 437
label_10:
;
#line 437
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 437
___nl__bool__9 = ___nl__int__10;
#line 437
if(___nl__bool__9){ goto label_38;}
#line 437
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 437
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 437
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(568)));
#line 437
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__16));
#line 437
c_rt_lib0clear(&___nl__im__16);
#line 437
c_rt_lib0move(&___nl__im__17,___get_global_string_const(522));
#line 437
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__17));
#line 437
c_rt_lib0clear(&___nl__im__15);
#line 437
c_rt_lib0clear(&___nl__im__17);
#line 437
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(224)));
#line 437
c_rt_lib0move(&___nl__im__18, generator_js_priv0print_register(___nl__im__19));
#line 437
c_rt_lib0clear(&___nl__im__19);
#line 437
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__18));
#line 437
c_rt_lib0clear(&___nl__im__14);
#line 437
c_rt_lib0clear(&___nl__im__18);
#line 437
c_rt_lib0move(&___nl__im__20,___get_global_string_const(312));
#line 437
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__20));
#line 437
c_rt_lib0clear(&___nl__im__13);
#line 437
c_rt_lib0clear(&___nl__im__20);
#line 437
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__12));
#line 437
c_rt_lib0clear(&___nl__im__12);
#line 437
c_rt_lib0clear(&___nl__im__5);
#line 437
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 437
goto label_10;
#line 437
label_38:
;
#line 438
c_rt_lib0move(&___nl__im__22,___get_global_string_const(776));
#line 438
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__1, ___nl__im__22));
#line 438
c_rt_lib0clear(&___nl__im__22);
#line 438
c_rt_lib0clear(&___nl__im__0);
#line 438
c_rt_lib0clear(&___nl__im__1);
#line 438
c_rt_lib0clear(&___nl__im__5);
#line 438
//clear ___nl__int__6;
#line 438
//clear ___nl__int__7;
#line 438
//clear ___nl__int__8;
#line 438
//clear ___nl__bool__9;
#line 438
//clear ___nl__int__10;
#line 438
c_rt_lib0clear(&___nl__im__11);
#line 438
return ___nl__im__21;
return NULL;

}

ImmT  generator_js_priv0print_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,ImmT * ___ref___im__1,INT * ___ref___int__2) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
#line 442
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 442
c_rt_lib0move(&___nl__im__3, generator_js_priv0print_register_to_assign(___nl__im__4));
#line 442
c_rt_lib0clear(&___nl__im__4);
#line 443
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(74)));
#line 443
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(277));
#line 443
if(___nl__bool__6){ goto label_11;}
#line 446
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(350));
#line 446
if(___nl__bool__6){ goto label_44;}
#line 446
c_rt_lib0move(&___nl__im__7,___get_global_string_const(16));
#line 446
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 446
nl_die_arg(___nl__im__7);
#line 443
label_11:
;
#line 443
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(277)));
#line 443
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 444
c_rt_lib0move(&___nl__im__13,___get_global_string_const(269));
#line 444
c_rt_lib0move(&___nl__im__14,___get_global_string_const(574));
#line 445
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(571)));
#line 445
c_rt_lib0move(&___nl__im__17, generator_js_priv0print_const_value_aggr(___nl__im__18, ___ref___im__1));
#line 445
c_rt_lib0clear(&___nl__im__18);
#line 445
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__17));
#line 445
c_rt_lib0clear(&___nl__im__17);
#line 445
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(345), ___nl__im__8));
#line 445
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__19));
#line 445
c_rt_lib0clear(&___nl__im__16);
#line 445
c_rt_lib0clear(&___nl__im__19);
#line 445
c_rt_lib0move(&___nl__im__12, generator_js_priv0print_internal_call(___nl__im__13, ___nl__im__14, ___nl__im__15, ___ref___int__2));
#line 445
c_rt_lib0clear(&___nl__im__13);
#line 445
c_rt_lib0clear(&___nl__im__14);
#line 445
c_rt_lib0clear(&___nl__im__15);
#line 445
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 445
c_rt_lib0clear(&___nl__im__12);
#line 445
c_rt_lib0move(&___nl__im__20,___get_global_string_const(440));
#line 445
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__20));
#line 445
c_rt_lib0clear(&___nl__im__11);
#line 445
c_rt_lib0clear(&___nl__im__20);
#line 445
c_rt_lib0clear(&___nl__im__0);
#line 445
c_rt_lib0clear(&___nl__im__3);
#line 445
c_rt_lib0clear(&___nl__im__5);
#line 445
//clear ___nl__bool__6;
#line 445
c_rt_lib0clear(&___nl__im__7);
#line 445
c_rt_lib0clear(&___nl__im__8);
#line 445
c_rt_lib0clear(&___nl__im__9);
#line 445
return ___nl__im__10;
#line 446
goto label_62;
#line 446
label_44:
;
#line 447
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(571)));
#line 447
c_rt_lib0move(&___nl__im__23, ov0mk(___nl__im__24));
#line 447
c_rt_lib0clear(&___nl__im__24);
#line 447
c_rt_lib0move(&___nl__im__22, generator_js_priv0print_const_value_aggr(___nl__im__23, ___ref___im__1));
#line 447
c_rt_lib0clear(&___nl__im__23);
#line 447
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__3, ___nl__im__22));
#line 447
c_rt_lib0clear(&___nl__im__22);
#line 447
c_rt_lib0clear(&___nl__im__0);
#line 447
c_rt_lib0clear(&___nl__im__3);
#line 447
c_rt_lib0clear(&___nl__im__5);
#line 447
//clear ___nl__bool__6;
#line 447
c_rt_lib0clear(&___nl__im__7);
#line 447
c_rt_lib0clear(&___nl__im__8);
#line 447
c_rt_lib0clear(&___nl__im__9);
#line 447
c_rt_lib0clear(&___nl__im__10);
#line 447
return ___nl__im__21;
#line 448
goto label_62;
#line 448
label_62:
;
return NULL;

}

ImmT  generator_js_priv0print_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__string__5 = NULL;
#line 452
c_rt_lib0move(&___nl__im__2,___get_global_string_const(423));
#line 452
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 452
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 452
c_rt_lib0clear(&___nl__im__4);
#line 452
c_rt_lib0move(&___nl__string__5, c_rt_lib0int_to_string(___nl__int__3));
#line 452
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__string__5));
#line 452
c_rt_lib0clear(&___nl__im__2);
#line 452
//clear ___nl__int__3;
#line 452
c_rt_lib0clear(&___nl__string__5);
#line 452
c_rt_lib0clear(&___nl__im__0);
#line 452
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
#line 456
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 456
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 456
c_rt_lib0clear(&___nl__im__2);
#line 456
___nl__bool__1 = !___nl__bool__1;
#line 456
if(___nl__bool__1){ goto label_10;}
#line 456
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 456
c_rt_lib0clear(&___nl__im__0);
#line 456
//clear ___nl__bool__1;
#line 456
return ___nl__im__3;
#line 456
goto label_10;
#line 456
label_10:
;
#line 456
//clear ___nl__bool__1;
#line 456
c_rt_lib0clear(&___nl__im__3);
#line 457
c_rt_lib0move(&___nl__im__5, generator_js_priv0print_register(___nl__im__0));
#line 457
c_rt_lib0move(&___nl__im__6,___get_global_string_const(562));
#line 457
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 457
c_rt_lib0clear(&___nl__im__5);
#line 457
c_rt_lib0clear(&___nl__im__6);
#line 457
c_rt_lib0clear(&___nl__im__0);
#line 457
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__string__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__string__23 = NULL;
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
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
#line 461
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 462
___nl__int__3 = 0;
#line 463
___nl__int__5 = 0;
#line 463
___nl__int__6 = 1;
#line 463
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 463
label_5:
;
#line 463
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 463
___nl__bool__8 = ___nl__int__9;
#line 463
if(___nl__bool__8){ goto label_53;}
#line 463
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 463
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 464
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(353)));
#line 464
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(40));
#line 464
if(___nl__bool__12){ goto label_19;}
#line 466
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(224));
#line 466
if(___nl__bool__12){ goto label_44;}
#line 466
c_rt_lib0move(&___nl__im__13,___get_global_string_const(16));
#line 466
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__11));
#line 466
nl_die_arg(___nl__im__13);
#line 464
label_19:
;
#line 465
c_rt_lib0move(&___nl__im__19,___get_global_string_const(752));
#line 465
c_rt_lib0move(&___nl__string__20, c_rt_lib0int_to_string(___nl__int__3));
#line 465
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__20));
#line 465
c_rt_lib0clear(&___nl__im__19);
#line 465
c_rt_lib0clear(&___nl__string__20);
#line 465
c_rt_lib0move(&___nl__im__21,___get_global_string_const(783));
#line 465
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__21));
#line 465
c_rt_lib0clear(&___nl__im__18);
#line 465
c_rt_lib0clear(&___nl__im__21);
#line 465
c_rt_lib0move(&___nl__im__22,___get_global_string_const(423));
#line 465
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__22));
#line 465
c_rt_lib0clear(&___nl__im__17);
#line 465
c_rt_lib0clear(&___nl__im__22);
#line 465
c_rt_lib0move(&___nl__string__23, c_rt_lib0int_to_string(___nl__int__3));
#line 465
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__string__23));
#line 465
c_rt_lib0clear(&___nl__im__16);
#line 465
c_rt_lib0clear(&___nl__string__23);
#line 465
c_rt_lib0move(&___nl__im__24,___get_global_string_const(440));
#line 465
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 465
c_rt_lib0clear(&___nl__im__15);
#line 465
c_rt_lib0clear(&___nl__im__24);
#line 465
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 465
c_rt_lib0clear(&___nl__im__14);
#line 466
goto label_46;
#line 466
label_44:
;
#line 467
goto label_46;
#line 467
label_46:
;
#line 468
___nl__int__25 = 1;
#line 468
___nl__int__3 = ___nl__int__3 + ___nl__int__25;
#line 468
//clear ___nl__int__25;
#line 468
c_rt_lib0clear(&___nl__im__4);
#line 469
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 469
goto label_5;
#line 469
label_53:
;
#line 470
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(224));
#line 470
if(___nl__bool__26){ goto label_61;}
#line 472
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(350));
#line 472
if(___nl__bool__26){ goto label_99;}
#line 472
c_rt_lib0move(&___nl__im__27,___get_global_string_const(16));
#line 472
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__0));
#line 472
nl_die_arg(___nl__im__27);
#line 470
label_61:
;
#line 470
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(224)));
#line 470
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 471
c_rt_lib0move(&___nl__im__34, string0lf());
#line 471
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__2, ___nl__im__34));
#line 471
c_rt_lib0clear(&___nl__im__34);
#line 471
c_rt_lib0move(&___nl__im__35,___get_global_string_const(501));
#line 471
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 471
c_rt_lib0clear(&___nl__im__33);
#line 471
c_rt_lib0clear(&___nl__im__35);
#line 471
c_rt_lib0move(&___nl__im__36, generator_js_priv0print_register(___nl__im__28));
#line 471
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 471
c_rt_lib0clear(&___nl__im__32);
#line 471
c_rt_lib0clear(&___nl__im__36);
#line 471
c_rt_lib0move(&___nl__im__37,___get_global_string_const(440));
#line 471
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__37));
#line 471
c_rt_lib0clear(&___nl__im__31);
#line 471
c_rt_lib0clear(&___nl__im__37);
#line 471
c_rt_lib0clear(&___nl__im__0);
#line 471
c_rt_lib0clear(&___nl__im__1);
#line 471
c_rt_lib0clear(&___nl__im__2);
#line 471
//clear ___nl__int__3;
#line 471
c_rt_lib0clear(&___nl__im__4);
#line 471
//clear ___nl__int__5;
#line 471
//clear ___nl__int__6;
#line 471
//clear ___nl__int__7;
#line 471
//clear ___nl__bool__8;
#line 471
//clear ___nl__int__9;
#line 471
c_rt_lib0clear(&___nl__im__10);
#line 471
c_rt_lib0clear(&___nl__im__11);
#line 471
//clear ___nl__bool__12;
#line 471
c_rt_lib0clear(&___nl__im__13);
#line 471
//clear ___nl__bool__26;
#line 471
c_rt_lib0clear(&___nl__im__27);
#line 471
c_rt_lib0clear(&___nl__im__28);
#line 471
c_rt_lib0clear(&___nl__im__29);
#line 471
return ___nl__im__30;
#line 472
goto label_128;
#line 472
label_99:
;
#line 473
c_rt_lib0move(&___nl__im__40, string0lf());
#line 473
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__2, ___nl__im__40));
#line 473
c_rt_lib0clear(&___nl__im__40);
#line 473
c_rt_lib0move(&___nl__im__41,___get_global_string_const(784));
#line 473
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 473
c_rt_lib0clear(&___nl__im__39);
#line 473
c_rt_lib0clear(&___nl__im__41);
#line 473
c_rt_lib0clear(&___nl__im__0);
#line 473
c_rt_lib0clear(&___nl__im__1);
#line 473
c_rt_lib0clear(&___nl__im__2);
#line 473
//clear ___nl__int__3;
#line 473
c_rt_lib0clear(&___nl__im__4);
#line 473
//clear ___nl__int__5;
#line 473
//clear ___nl__int__6;
#line 473
//clear ___nl__int__7;
#line 473
//clear ___nl__bool__8;
#line 473
//clear ___nl__int__9;
#line 473
c_rt_lib0clear(&___nl__im__10);
#line 473
c_rt_lib0clear(&___nl__im__11);
#line 473
//clear ___nl__bool__12;
#line 473
c_rt_lib0clear(&___nl__im__13);
#line 473
//clear ___nl__bool__26;
#line 473
c_rt_lib0clear(&___nl__im__27);
#line 473
c_rt_lib0clear(&___nl__im__28);
#line 473
c_rt_lib0clear(&___nl__im__29);
#line 473
c_rt_lib0clear(&___nl__im__30);
#line 473
return ___nl__im__38;
#line 474
goto label_128;
#line 474
label_128:
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
#line 478
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 478
c_rt_lib0move(&___nl__im__1, generator_js_priv0print_register_to_assign(___nl__im__2));
#line 478
c_rt_lib0clear(&___nl__im__2);
#line 479
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 479
c_rt_lib0move(&___nl__im__5,___get_global_string_const(363));
#line 479
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 479
c_rt_lib0clear(&___nl__im__4);
#line 479
c_rt_lib0clear(&___nl__im__5);
#line 479
___nl__bool__3 = !___nl__bool__3;
#line 479
if(___nl__bool__3){ goto label_26;}
#line 480
c_rt_lib0move(&___nl__im__8,___get_global_string_const(269));
#line 480
c_rt_lib0move(&___nl__im__9,___get_global_string_const(785));
#line 480
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(74)));
#line 480
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(1, ___nl__im__11));
#line 480
c_rt_lib0clear(&___nl__im__11);
#line 480
c_rt_lib0move(&___nl__im__7, generator_js_priv0print_int_call_sim(___nl__im__8, ___nl__im__9, ___nl__im__10));
#line 480
c_rt_lib0clear(&___nl__im__8);
#line 480
c_rt_lib0clear(&___nl__im__9);
#line 480
c_rt_lib0clear(&___nl__im__10);
#line 480
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 480
c_rt_lib0clear(&___nl__im__7);
#line 480
c_rt_lib0clear(&___nl__im__0);
#line 480
c_rt_lib0clear(&___nl__im__1);
#line 480
//clear ___nl__bool__3;
#line 480
return ___nl__im__6;
#line 481
goto label_62;
#line 481
label_26:
;
#line 482
c_rt_lib0move(&___nl__im__18,___get_global_string_const(403));
#line 482
c_rt_lib0move(&___nl__im__17, generator_js_priv0imm_call(___nl__im__18));
#line 482
c_rt_lib0clear(&___nl__im__18);
#line 482
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__1, ___nl__im__17));
#line 482
c_rt_lib0clear(&___nl__im__17);
#line 482
c_rt_lib0move(&___nl__im__19,___get_global_string_const(455));
#line 482
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 482
c_rt_lib0clear(&___nl__im__16);
#line 482
c_rt_lib0clear(&___nl__im__19);
#line 482
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(552)));
#line 482
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 482
c_rt_lib0clear(&___nl__im__15);
#line 482
c_rt_lib0clear(&___nl__im__20);
#line 483
c_rt_lib0move(&___nl__im__22,___get_global_string_const(269));
#line 483
c_rt_lib0move(&___nl__im__23,___get_global_string_const(770));
#line 483
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(74)));
#line 483
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(1, ___nl__im__25));
#line 483
c_rt_lib0clear(&___nl__im__25);
#line 483
c_rt_lib0move(&___nl__im__21, generator_js_priv0print_int_call_sim(___nl__im__22, ___nl__im__23, ___nl__im__24));
#line 483
c_rt_lib0clear(&___nl__im__22);
#line 483
c_rt_lib0clear(&___nl__im__23);
#line 483
c_rt_lib0clear(&___nl__im__24);
#line 483
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 483
c_rt_lib0clear(&___nl__im__14);
#line 483
c_rt_lib0clear(&___nl__im__21);
#line 483
c_rt_lib0move(&___nl__im__26,___get_global_string_const(503));
#line 483
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__26));
#line 483
c_rt_lib0clear(&___nl__im__13);
#line 483
c_rt_lib0clear(&___nl__im__26);
#line 483
c_rt_lib0clear(&___nl__im__0);
#line 483
c_rt_lib0clear(&___nl__im__1);
#line 483
//clear ___nl__bool__3;
#line 483
c_rt_lib0clear(&___nl__im__6);
#line 483
return ___nl__im__12;
#line 484
goto label_62;
#line 484
label_62:
;
#line 484
//clear ___nl__bool__3;
#line 484
c_rt_lib0clear(&___nl__im__6);
#line 484
c_rt_lib0clear(&___nl__im__12);
return NULL;

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
