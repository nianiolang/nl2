
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "generator_pm.h"
#include "array.h"
#include "dfile.h"
#include "string.h"
#include "nl.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "ptd.h"
#include "string_utils.h"
#include "nlasm.h"
#include "generator_pm.h"
#line 1 "generator_pm.nl"

static ImmT *__const__f = NULL;
void generator_pm_priv0__const__init();
ImmT generator_pm_priv0__const__sim(int __nr);
ImmT generator_pm_priv0__const__sing(int __nr);

ImmT  generator_pm_priv0print(generator_pm0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  generator_pm_priv0print_imports(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_functions(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_function(nlasm0function_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
bool generator_pm_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0);
ImmT  generator_pm_priv0print_function_access(nlasm0access_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0get_function_access(nlasm0access_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_pm_priv0print_args_dollar(INT  ___nl__int__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0move_args_to_register(generator_pm0state_t0type* ___ref___im__0);
ImmT  generator_pm_priv0move_register_to_ref_args(generator_pm0state_t0type* ___ref___im__0);
ImmT  generator_pm_priv0print_commands(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_command(nlasm0cmd_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_call(nlasm0call_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_una_op(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_bin_op(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_set_at_idx(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_set_val(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_register(nlasm0reg_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);
ImmT  generator_pm_priv0print_register_to_assign(nlasm0reg_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1);


ImmT  generator_pm0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_pm0fun_args_t");
return generator_pm0fun_args_t();
}
ImmT  generator_pm0fun_args_t() {
generator_pm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 16
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_const(316), ___get_global_const(376)));
#line 16
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 16
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
return ___nl__im__0;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
return NULL;
}

ImmT  generator_pm0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_pm0state_t");
return generator_pm0state_t();
}
ImmT  generator_pm0state_t() {
generator_pm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 20
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(generator_pm0fun_args_t0ptr, ___get_global_const(833), ___get_global_const(383)));
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(834), ___nl__im__2, ___get_global_const(219), ___nl__im__3, ___get_global_const(394), ___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
return ___nl__im__0;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
return NULL;
}

ImmT  generator_pm_priv0print(generator_pm0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 24
c_rt_lib0move(&___nl__im__2,___get_global_const(834));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 24
c_rt_lib0move(&___nl__string__3,___get_global_const(834));
#line 24
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__string__3);
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__string__3);
#line 24
return NULL;
}

ImmT  generator_pm0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_pm0generate");
nlasm0result_t0type var0 = (_tab[0]);
return generator_pm0generate(var0);
}
ImmT  generator_pm0generate(nlasm0result_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
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
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
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
#line 28
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 28
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 28
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 28
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(834), ___nl__im__2, ___get_global_const(219), ___nl__im__3, ___get_global_const(394), ___nl__im__4));
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 29
c_rt_lib0move(&___nl__im__6,___get_global_const(835));
#line 29
c_rt_lib0move(&___nl__im__7, string0lf());
#line 29
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 29
c_rt_lib0clear(&___nl__im__6);
#line 29
c_rt_lib0clear(&___nl__im__7);
#line 29
c_rt_lib0delete(generator_pm_priv0print(&___nl__im__1, ___nl__im__5));
#line 29
c_rt_lib0clear(&___nl__im__5);
#line 29
c_rt_lib0clear(&___nl__im__6);
#line 29
c_rt_lib0clear(&___nl__im__7);
#line 30
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(445)));
#line 30
c_rt_lib0delete(generator_pm_priv0print_imports(___nl__im__8, &___nl__im__1));
#line 30
c_rt_lib0clear(&___nl__im__8);
#line 31
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(120)));
#line 31
___nl__int__11 = 0;
#line 31
___nl__int__12 = 1;
#line 31
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 31
label_3:
#line 31
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 31
___nl__bool__14 = ___nl__int__15;
#line 31
if(___nl__bool__14){ goto label_1;}
#line 31
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 31
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 32
c_rt_lib0move(&___nl__im__17,___get_global_const(836));
#line 32
c_rt_lib0delete(generator_pm_priv0print(&___nl__im__1, ___nl__im__17));
#line 32
c_rt_lib0clear(&___nl__im__17);
#line 33
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(216)));
#line 33
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__im__18, &___nl__im__1));
#line 33
c_rt_lib0clear(&___nl__im__18);
#line 34
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(121)));
#line 34
c_rt_lib0move(&___nl__im__22,___get_global_const(416));
#line 34
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 34
c_rt_lib0clear(&___nl__im__21);
#line 34
c_rt_lib0clear(&___nl__im__22);
#line 34
c_rt_lib0move(&___nl__im__23, string0lf());
#line 34
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__23));
#line 34
c_rt_lib0clear(&___nl__im__20);
#line 34
c_rt_lib0clear(&___nl__im__21);
#line 34
c_rt_lib0clear(&___nl__im__22);
#line 34
c_rt_lib0clear(&___nl__im__23);
#line 34
c_rt_lib0delete(generator_pm_priv0print(&___nl__im__1, ___nl__im__19));
#line 34
c_rt_lib0clear(&___nl__im__19);
#line 34
c_rt_lib0clear(&___nl__im__20);
#line 34
c_rt_lib0clear(&___nl__im__21);
#line 34
c_rt_lib0clear(&___nl__im__22);
#line 34
c_rt_lib0clear(&___nl__im__23);
#line 34
c_rt_lib0clear(&___nl__im__10);
#line 34
label_2:
#line 35
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 35
goto label_3;
#line 35
label_1:
#line 36
c_rt_lib0move(&___nl__im__26, string0lf());
#line 36
c_rt_lib0move(&___nl__im__27,___get_global_const(837));
#line 36
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 36
c_rt_lib0clear(&___nl__im__26);
#line 36
c_rt_lib0clear(&___nl__im__27);
#line 36
c_rt_lib0move(&___nl__im__28, string0lf());
#line 36
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__28));
#line 36
c_rt_lib0clear(&___nl__im__25);
#line 36
c_rt_lib0clear(&___nl__im__26);
#line 36
c_rt_lib0clear(&___nl__im__27);
#line 36
c_rt_lib0clear(&___nl__im__28);
#line 36
c_rt_lib0delete(generator_pm_priv0print(&___nl__im__1, ___nl__im__24));
#line 36
c_rt_lib0clear(&___nl__im__24);
#line 36
c_rt_lib0clear(&___nl__im__25);
#line 36
c_rt_lib0clear(&___nl__im__26);
#line 36
c_rt_lib0clear(&___nl__im__27);
#line 36
c_rt_lib0clear(&___nl__im__28);
#line 37
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(120)));
#line 37
c_rt_lib0delete(generator_pm_priv0print_functions(___nl__im__29, &___nl__im__1));
#line 37
c_rt_lib0clear(&___nl__im__29);
#line 38
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(834)));
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
c_rt_lib0clear(&___nl__im__7);
#line 38
c_rt_lib0clear(&___nl__im__8);
#line 38
c_rt_lib0clear(&___nl__im__9);
#line 38
c_rt_lib0clear(&___nl__im__10);
#line 38
//clear ___nl__int__11;
#line 38
//clear ___nl__int__12;
#line 38
//clear ___nl__int__13;
#line 38
//clear ___nl__bool__14;
#line 38
//clear ___nl__int__15;
#line 38
c_rt_lib0clear(&___nl__im__16);
#line 38
c_rt_lib0clear(&___nl__im__17);
#line 38
c_rt_lib0clear(&___nl__im__18);
#line 38
c_rt_lib0clear(&___nl__im__19);
#line 38
c_rt_lib0clear(&___nl__im__20);
#line 38
c_rt_lib0clear(&___nl__im__21);
#line 38
c_rt_lib0clear(&___nl__im__22);
#line 38
c_rt_lib0clear(&___nl__im__23);
#line 38
c_rt_lib0clear(&___nl__im__24);
#line 38
c_rt_lib0clear(&___nl__im__25);
#line 38
c_rt_lib0clear(&___nl__im__26);
#line 38
c_rt_lib0clear(&___nl__im__27);
#line 38
c_rt_lib0clear(&___nl__im__28);
#line 38
c_rt_lib0clear(&___nl__im__29);
#line 38
return ___nl__im__30;
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
c_rt_lib0clear(&___nl__im__7);
#line 38
c_rt_lib0clear(&___nl__im__8);
#line 38
c_rt_lib0clear(&___nl__im__9);
#line 38
c_rt_lib0clear(&___nl__im__10);
#line 38
//clear ___nl__int__11;
#line 38
//clear ___nl__int__12;
#line 38
//clear ___nl__int__13;
#line 38
//clear ___nl__bool__14;
#line 38
//clear ___nl__int__15;
#line 38
c_rt_lib0clear(&___nl__im__16);
#line 38
c_rt_lib0clear(&___nl__im__17);
#line 38
c_rt_lib0clear(&___nl__im__18);
#line 38
c_rt_lib0clear(&___nl__im__19);
#line 38
c_rt_lib0clear(&___nl__im__20);
#line 38
c_rt_lib0clear(&___nl__im__21);
#line 38
c_rt_lib0clear(&___nl__im__22);
#line 38
c_rt_lib0clear(&___nl__im__23);
#line 38
c_rt_lib0clear(&___nl__im__24);
#line 38
c_rt_lib0clear(&___nl__im__25);
#line 38
c_rt_lib0clear(&___nl__im__26);
#line 38
c_rt_lib0clear(&___nl__im__27);
#line 38
c_rt_lib0clear(&___nl__im__28);
#line 38
c_rt_lib0clear(&___nl__im__29);
#line 38
c_rt_lib0clear(&___nl__im__30);
#line 38
return NULL;
}

ImmT  generator_pm_priv0print_imports(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 42
___nl__int__3 = 0;
#line 42
___nl__int__4 = 1;
#line 42
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 42
label_3:
#line 42
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 42
___nl__bool__6 = ___nl__int__7;
#line 42
if(___nl__bool__6){ goto label_1;}
#line 42
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 42
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 43
c_rt_lib0move(&___nl__im__12,___get_global_const(838));
#line 43
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__2));
#line 43
c_rt_lib0clear(&___nl__im__12);
#line 43
c_rt_lib0move(&___nl__im__13,___get_global_const(416));
#line 43
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__13));
#line 43
c_rt_lib0clear(&___nl__im__11);
#line 43
c_rt_lib0clear(&___nl__im__12);
#line 43
c_rt_lib0clear(&___nl__im__13);
#line 43
c_rt_lib0move(&___nl__im__14, string0lf());
#line 43
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 43
c_rt_lib0clear(&___nl__im__10);
#line 43
c_rt_lib0clear(&___nl__im__11);
#line 43
c_rt_lib0clear(&___nl__im__12);
#line 43
c_rt_lib0clear(&___nl__im__13);
#line 43
c_rt_lib0clear(&___nl__im__14);
#line 43
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__9));
#line 43
c_rt_lib0clear(&___nl__im__9);
#line 43
c_rt_lib0clear(&___nl__im__10);
#line 43
c_rt_lib0clear(&___nl__im__11);
#line 43
c_rt_lib0clear(&___nl__im__12);
#line 43
c_rt_lib0clear(&___nl__im__13);
#line 43
c_rt_lib0clear(&___nl__im__14);
#line 43
c_rt_lib0clear(&___nl__im__2);
#line 43
label_2:
#line 44
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 44
goto label_3;
#line 44
label_1:
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
//clear ___nl__int__3;
#line 44
//clear ___nl__int__4;
#line 44
//clear ___nl__int__5;
#line 44
//clear ___nl__bool__6;
#line 44
//clear ___nl__int__7;
#line 44
c_rt_lib0clear(&___nl__im__8);
#line 44
c_rt_lib0clear(&___nl__im__9);
#line 44
c_rt_lib0clear(&___nl__im__10);
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__12);
#line 44
c_rt_lib0clear(&___nl__im__13);
#line 44
c_rt_lib0clear(&___nl__im__14);
#line 44
return NULL;
}

ImmT  generator_pm_priv0print_functions(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
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
#line 48
___nl__int__3 = 0;
#line 48
___nl__int__4 = 1;
#line 48
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 48
label_3:
#line 48
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 48
___nl__bool__6 = ___nl__int__7;
#line 48
if(___nl__bool__6){ goto label_1;}
#line 48
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 48
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 49
___nl__bool__9 = generator_pm_priv0is_singleton_use_function(___nl__im__2);
#line 49
___nl__bool__9 = !___nl__bool__9;
#line 49
if(___nl__bool__9){ goto label_5;}
#line 50
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(121)));
#line 51
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 52
c_rt_lib0move(&___nl__im__14,___get_global_const(607));
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__10));
#line 52
c_rt_lib0clear(&___nl__im__14);
#line 52
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 52
c_rt_lib0hash_set_value_dec(&___nl__im__11, ___get_global_const(121), ___nl__im__12);
#line 52
c_rt_lib0clear(&___nl__im__12);
#line 52
c_rt_lib0clear(&___nl__im__13);
#line 52
c_rt_lib0clear(&___nl__im__14);
#line 53
c_rt_lib0delete(generator_pm_priv0print_function(___nl__im__11, ___ref___im__1));
#line 54
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(216)));
#line 54
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(219)));
#line 54
c_rt_lib0move(&___nl__im__16, generator_pm_priv0get_function_access(___nl__im__17, ___nl__im__18));
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(121)));
#line 54
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 55
c_rt_lib0move(&___nl__im__24, string0lf());
#line 55
c_rt_lib0move(&___nl__im__25,___get_global_const(839));
#line 55
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 55
c_rt_lib0clear(&___nl__im__24);
#line 55
c_rt_lib0clear(&___nl__im__25);
#line 55
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__10));
#line 55
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0clear(&___nl__im__24);
#line 55
c_rt_lib0clear(&___nl__im__25);
#line 55
c_rt_lib0move(&___nl__im__26,___get_global_const(416));
#line 55
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 55
c_rt_lib0clear(&___nl__im__22);
#line 55
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0clear(&___nl__im__24);
#line 55
c_rt_lib0clear(&___nl__im__25);
#line 55
c_rt_lib0clear(&___nl__im__26);
#line 55
c_rt_lib0move(&___nl__im__27, string0lf());
#line 55
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__27));
#line 55
c_rt_lib0clear(&___nl__im__21);
#line 55
c_rt_lib0clear(&___nl__im__22);
#line 55
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0clear(&___nl__im__24);
#line 55
c_rt_lib0clear(&___nl__im__25);
#line 55
c_rt_lib0clear(&___nl__im__26);
#line 55
c_rt_lib0clear(&___nl__im__27);
#line 55
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__20));
#line 55
c_rt_lib0clear(&___nl__im__20);
#line 55
c_rt_lib0clear(&___nl__im__21);
#line 55
c_rt_lib0clear(&___nl__im__22);
#line 55
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0clear(&___nl__im__24);
#line 55
c_rt_lib0clear(&___nl__im__25);
#line 55
c_rt_lib0clear(&___nl__im__26);
#line 55
c_rt_lib0clear(&___nl__im__27);
#line 56
c_rt_lib0move(&___nl__im__28,___get_global_const(836));
#line 56
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__28));
#line 56
c_rt_lib0clear(&___nl__im__28);
#line 57
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(216)));
#line 57
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__im__29, ___ref___im__1));
#line 57
c_rt_lib0clear(&___nl__im__29);
#line 58
c_rt_lib0move(&___nl__im__32,___get_global_const(788));
#line 58
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__10, ___nl__im__32));
#line 58
c_rt_lib0clear(&___nl__im__32);
#line 58
c_rt_lib0move(&___nl__im__33, string0lf());
#line 58
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__33));
#line 58
c_rt_lib0clear(&___nl__im__31);
#line 58
c_rt_lib0clear(&___nl__im__32);
#line 58
c_rt_lib0clear(&___nl__im__33);
#line 58
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__30));
#line 58
c_rt_lib0clear(&___nl__im__30);
#line 58
c_rt_lib0clear(&___nl__im__31);
#line 58
c_rt_lib0clear(&___nl__im__32);
#line 58
c_rt_lib0clear(&___nl__im__33);
#line 59
c_rt_lib0move(&___nl__im__37,___get_global_const(840));
#line 59
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__10));
#line 59
c_rt_lib0clear(&___nl__im__37);
#line 59
c_rt_lib0move(&___nl__im__38,___get_global_const(468));
#line 59
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__38));
#line 59
c_rt_lib0clear(&___nl__im__36);
#line 59
c_rt_lib0clear(&___nl__im__37);
#line 59
c_rt_lib0clear(&___nl__im__38);
#line 59
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__15));
#line 59
c_rt_lib0clear(&___nl__im__35);
#line 59
c_rt_lib0clear(&___nl__im__36);
#line 59
c_rt_lib0clear(&___nl__im__37);
#line 59
c_rt_lib0clear(&___nl__im__38);
#line 59
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__34));
#line 59
c_rt_lib0clear(&___nl__im__34);
#line 59
c_rt_lib0clear(&___nl__im__35);
#line 59
c_rt_lib0clear(&___nl__im__36);
#line 59
c_rt_lib0clear(&___nl__im__37);
#line 59
c_rt_lib0clear(&___nl__im__38);
#line 60
c_rt_lib0move(&___nl__im__43,___get_global_const(841));
#line 60
c_rt_lib0move(&___nl__im__44,___get_global_const(842));
#line 60
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__44));
#line 60
c_rt_lib0clear(&___nl__im__43);
#line 60
c_rt_lib0clear(&___nl__im__44);
#line 60
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__10));
#line 60
c_rt_lib0clear(&___nl__im__42);
#line 60
c_rt_lib0clear(&___nl__im__43);
#line 60
c_rt_lib0clear(&___nl__im__44);
#line 60
c_rt_lib0move(&___nl__im__45,___get_global_const(416));
#line 60
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__45));
#line 60
c_rt_lib0clear(&___nl__im__41);
#line 60
c_rt_lib0clear(&___nl__im__42);
#line 60
c_rt_lib0clear(&___nl__im__43);
#line 60
c_rt_lib0clear(&___nl__im__44);
#line 60
c_rt_lib0clear(&___nl__im__45);
#line 60
c_rt_lib0move(&___nl__im__46, string0lf());
#line 60
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__46));
#line 60
c_rt_lib0clear(&___nl__im__40);
#line 60
c_rt_lib0clear(&___nl__im__41);
#line 60
c_rt_lib0clear(&___nl__im__42);
#line 60
c_rt_lib0clear(&___nl__im__43);
#line 60
c_rt_lib0clear(&___nl__im__44);
#line 60
c_rt_lib0clear(&___nl__im__45);
#line 60
c_rt_lib0clear(&___nl__im__46);
#line 60
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__39));
#line 60
c_rt_lib0clear(&___nl__im__39);
#line 60
c_rt_lib0clear(&___nl__im__40);
#line 60
c_rt_lib0clear(&___nl__im__41);
#line 60
c_rt_lib0clear(&___nl__im__42);
#line 60
c_rt_lib0clear(&___nl__im__43);
#line 60
c_rt_lib0clear(&___nl__im__44);
#line 60
c_rt_lib0clear(&___nl__im__45);
#line 60
c_rt_lib0clear(&___nl__im__46);
#line 61
c_rt_lib0move(&___nl__im__50,___get_global_const(843));
#line 61
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__10));
#line 61
c_rt_lib0clear(&___nl__im__50);
#line 61
c_rt_lib0move(&___nl__im__51,___get_global_const(416));
#line 61
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__51));
#line 61
c_rt_lib0clear(&___nl__im__49);
#line 61
c_rt_lib0clear(&___nl__im__50);
#line 61
c_rt_lib0clear(&___nl__im__51);
#line 61
c_rt_lib0move(&___nl__im__52, string0lf());
#line 61
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__52));
#line 61
c_rt_lib0clear(&___nl__im__48);
#line 61
c_rt_lib0clear(&___nl__im__49);
#line 61
c_rt_lib0clear(&___nl__im__50);
#line 61
c_rt_lib0clear(&___nl__im__51);
#line 61
c_rt_lib0clear(&___nl__im__52);
#line 61
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__47));
#line 61
c_rt_lib0clear(&___nl__im__47);
#line 61
c_rt_lib0clear(&___nl__im__48);
#line 61
c_rt_lib0clear(&___nl__im__49);
#line 61
c_rt_lib0clear(&___nl__im__50);
#line 61
c_rt_lib0clear(&___nl__im__51);
#line 61
c_rt_lib0clear(&___nl__im__52);
#line 62
c_rt_lib0move(&___nl__im__54,___get_global_const(296));
#line 62
c_rt_lib0move(&___nl__im__55, string0lf());
#line 62
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__55));
#line 62
c_rt_lib0clear(&___nl__im__54);
#line 62
c_rt_lib0clear(&___nl__im__55);
#line 62
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__53));
#line 62
c_rt_lib0clear(&___nl__im__53);
#line 62
c_rt_lib0clear(&___nl__im__54);
#line 62
c_rt_lib0clear(&___nl__im__55);
#line 63
goto label_4;
#line 63
label_5:
#line 64
c_rt_lib0delete(generator_pm_priv0print_function(___nl__im__2, ___ref___im__1));
#line 65
goto label_4;
#line 65
label_4:
#line 65
//clear ___nl__bool__9;
#line 65
c_rt_lib0clear(&___nl__im__10);
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 65
c_rt_lib0clear(&___nl__im__13);
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
c_rt_lib0clear(&___nl__im__15);
#line 65
c_rt_lib0clear(&___nl__im__16);
#line 65
c_rt_lib0clear(&___nl__im__17);
#line 65
c_rt_lib0clear(&___nl__im__18);
#line 65
c_rt_lib0clear(&___nl__im__19);
#line 65
c_rt_lib0clear(&___nl__im__20);
#line 65
c_rt_lib0clear(&___nl__im__21);
#line 65
c_rt_lib0clear(&___nl__im__22);
#line 65
c_rt_lib0clear(&___nl__im__23);
#line 65
c_rt_lib0clear(&___nl__im__24);
#line 65
c_rt_lib0clear(&___nl__im__25);
#line 65
c_rt_lib0clear(&___nl__im__26);
#line 65
c_rt_lib0clear(&___nl__im__27);
#line 65
c_rt_lib0clear(&___nl__im__28);
#line 65
c_rt_lib0clear(&___nl__im__29);
#line 65
c_rt_lib0clear(&___nl__im__30);
#line 65
c_rt_lib0clear(&___nl__im__31);
#line 65
c_rt_lib0clear(&___nl__im__32);
#line 65
c_rt_lib0clear(&___nl__im__33);
#line 65
c_rt_lib0clear(&___nl__im__34);
#line 65
c_rt_lib0clear(&___nl__im__35);
#line 65
c_rt_lib0clear(&___nl__im__36);
#line 65
c_rt_lib0clear(&___nl__im__37);
#line 65
c_rt_lib0clear(&___nl__im__38);
#line 65
c_rt_lib0clear(&___nl__im__39);
#line 65
c_rt_lib0clear(&___nl__im__40);
#line 65
c_rt_lib0clear(&___nl__im__41);
#line 65
c_rt_lib0clear(&___nl__im__42);
#line 65
c_rt_lib0clear(&___nl__im__43);
#line 65
c_rt_lib0clear(&___nl__im__44);
#line 65
c_rt_lib0clear(&___nl__im__45);
#line 65
c_rt_lib0clear(&___nl__im__46);
#line 65
c_rt_lib0clear(&___nl__im__47);
#line 65
c_rt_lib0clear(&___nl__im__48);
#line 65
c_rt_lib0clear(&___nl__im__49);
#line 65
c_rt_lib0clear(&___nl__im__50);
#line 65
c_rt_lib0clear(&___nl__im__51);
#line 65
c_rt_lib0clear(&___nl__im__52);
#line 65
c_rt_lib0clear(&___nl__im__53);
#line 65
c_rt_lib0clear(&___nl__im__54);
#line 65
c_rt_lib0clear(&___nl__im__55);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
label_2:
#line 66
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 66
goto label_3;
#line 66
label_1:
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
//clear ___nl__int__3;
#line 66
//clear ___nl__int__4;
#line 66
//clear ___nl__int__5;
#line 66
//clear ___nl__bool__6;
#line 66
//clear ___nl__int__7;
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 66
//clear ___nl__bool__9;
#line 66
c_rt_lib0clear(&___nl__im__10);
#line 66
c_rt_lib0clear(&___nl__im__11);
#line 66
c_rt_lib0clear(&___nl__im__12);
#line 66
c_rt_lib0clear(&___nl__im__13);
#line 66
c_rt_lib0clear(&___nl__im__14);
#line 66
c_rt_lib0clear(&___nl__im__15);
#line 66
c_rt_lib0clear(&___nl__im__16);
#line 66
c_rt_lib0clear(&___nl__im__17);
#line 66
c_rt_lib0clear(&___nl__im__18);
#line 66
c_rt_lib0clear(&___nl__im__19);
#line 66
c_rt_lib0clear(&___nl__im__20);
#line 66
c_rt_lib0clear(&___nl__im__21);
#line 66
c_rt_lib0clear(&___nl__im__22);
#line 66
c_rt_lib0clear(&___nl__im__23);
#line 66
c_rt_lib0clear(&___nl__im__24);
#line 66
c_rt_lib0clear(&___nl__im__25);
#line 66
c_rt_lib0clear(&___nl__im__26);
#line 66
c_rt_lib0clear(&___nl__im__27);
#line 66
c_rt_lib0clear(&___nl__im__28);
#line 66
c_rt_lib0clear(&___nl__im__29);
#line 66
c_rt_lib0clear(&___nl__im__30);
#line 66
c_rt_lib0clear(&___nl__im__31);
#line 66
c_rt_lib0clear(&___nl__im__32);
#line 66
c_rt_lib0clear(&___nl__im__33);
#line 66
c_rt_lib0clear(&___nl__im__34);
#line 66
c_rt_lib0clear(&___nl__im__35);
#line 66
c_rt_lib0clear(&___nl__im__36);
#line 66
c_rt_lib0clear(&___nl__im__37);
#line 66
c_rt_lib0clear(&___nl__im__38);
#line 66
c_rt_lib0clear(&___nl__im__39);
#line 66
c_rt_lib0clear(&___nl__im__40);
#line 66
c_rt_lib0clear(&___nl__im__41);
#line 66
c_rt_lib0clear(&___nl__im__42);
#line 66
c_rt_lib0clear(&___nl__im__43);
#line 66
c_rt_lib0clear(&___nl__im__44);
#line 66
c_rt_lib0clear(&___nl__im__45);
#line 66
c_rt_lib0clear(&___nl__im__46);
#line 66
c_rt_lib0clear(&___nl__im__47);
#line 66
c_rt_lib0clear(&___nl__im__48);
#line 66
c_rt_lib0clear(&___nl__im__49);
#line 66
c_rt_lib0clear(&___nl__im__50);
#line 66
c_rt_lib0clear(&___nl__im__51);
#line 66
c_rt_lib0clear(&___nl__im__52);
#line 66
c_rt_lib0clear(&___nl__im__53);
#line 66
c_rt_lib0clear(&___nl__im__54);
#line 66
c_rt_lib0clear(&___nl__im__55);
#line 66
return NULL;
}

ImmT  generator_pm_priv0print_function(nlasm0function_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
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
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
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
#line 70
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 70
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 70
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(394), ___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 71
c_rt_lib0move(&___nl__im__5, string0lf());
#line 71
c_rt_lib0move(&___nl__im__6,___get_global_const(836));
#line 71
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 71
c_rt_lib0clear(&___nl__im__5);
#line 71
c_rt_lib0clear(&___nl__im__6);
#line 71
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__4));
#line 71
c_rt_lib0clear(&___nl__im__4);
#line 71
c_rt_lib0clear(&___nl__im__5);
#line 71
c_rt_lib0clear(&___nl__im__6);
#line 72
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(216)));
#line 72
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__im__7, ___ref___im__1));
#line 72
c_rt_lib0clear(&___nl__im__7);
#line 73
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(121)));
#line 73
c_rt_lib0move(&___nl__im__10,___get_global_const(427));
#line 73
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 73
c_rt_lib0clear(&___nl__im__9);
#line 73
c_rt_lib0clear(&___nl__im__10);
#line 73
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__8));
#line 73
c_rt_lib0clear(&___nl__im__8);
#line 73
c_rt_lib0clear(&___nl__im__9);
#line 73
c_rt_lib0clear(&___nl__im__10);
#line 74
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 74
___nl__int__11 = c_rt_lib0array_len(___nl__im__12);
#line 74
c_rt_lib0clear(&___nl__im__12);
#line 74
c_rt_lib0delete(generator_pm_priv0print_args_dollar(___nl__int__11, ___ref___im__1));
#line 74
//clear ___nl__int__11;
#line 74
c_rt_lib0clear(&___nl__im__12);
#line 75
c_rt_lib0move(&___nl__im__14,___get_global_const(804));
#line 75
c_rt_lib0move(&___nl__im__15, string0lf());
#line 75
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 75
c_rt_lib0clear(&___nl__im__14);
#line 75
c_rt_lib0clear(&___nl__im__15);
#line 75
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__13));
#line 75
c_rt_lib0clear(&___nl__im__13);
#line 75
c_rt_lib0clear(&___nl__im__14);
#line 75
c_rt_lib0clear(&___nl__im__15);
#line 76
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(222)));
#line 76
___nl__int__18 = 0;
#line 76
___nl__int__19 = 1;
#line 76
___nl__int__20 = c_rt_lib0array_len(___nl__im__16);
#line 76
label_3:
#line 76
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 76
___nl__bool__21 = ___nl__int__22;
#line 76
if(___nl__bool__21){ goto label_1;}
#line 76
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__16, ___nl__int__18));
#line 76
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 77
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(96)));
#line 77
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(333));
#line 77
c_rt_lib0clear(&___nl__im__25);
#line 77
___nl__bool__24 = !___nl__bool__24;
#line 77
if(___nl__bool__24){ goto label_5;}
#line 78
c_rt_lib0move(&___nl__im__28,___get_global_const(844));
#line 78
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(225)));
#line 78
___nl__int__31 = getIntFromImm(___nl__im__30);
#line 78
c_rt_lib0move(&___nl__im__29, ptd0int_to_string(___nl__int__31));
#line 78
c_rt_lib0clear(&___nl__im__30);
#line 78
//clear ___nl__int__31;
#line 78
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 78
c_rt_lib0clear(&___nl__im__28);
#line 78
c_rt_lib0clear(&___nl__im__29);
#line 78
c_rt_lib0clear(&___nl__im__30);
#line 78
//clear ___nl__int__31;
#line 78
c_rt_lib0move(&___nl__im__32,___get_global_const(416));
#line 78
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__32));
#line 78
c_rt_lib0clear(&___nl__im__27);
#line 78
c_rt_lib0clear(&___nl__im__28);
#line 78
c_rt_lib0clear(&___nl__im__29);
#line 78
c_rt_lib0clear(&___nl__im__30);
#line 78
//clear ___nl__int__31;
#line 78
c_rt_lib0clear(&___nl__im__32);
#line 78
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__26));
#line 78
c_rt_lib0clear(&___nl__im__26);
#line 78
c_rt_lib0clear(&___nl__im__27);
#line 78
c_rt_lib0clear(&___nl__im__28);
#line 78
c_rt_lib0clear(&___nl__im__29);
#line 78
c_rt_lib0clear(&___nl__im__30);
#line 78
//clear ___nl__int__31;
#line 78
c_rt_lib0clear(&___nl__im__32);
#line 79
goto label_4;
#line 79
label_5:
#line 80
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(0));
#line 80
nl_die_arg(___nl__im__33);
#line 81
goto label_4;
#line 81
label_4:
#line 81
//clear ___nl__bool__24;
#line 81
c_rt_lib0clear(&___nl__im__25);
#line 81
c_rt_lib0clear(&___nl__im__26);
#line 81
c_rt_lib0clear(&___nl__im__27);
#line 81
c_rt_lib0clear(&___nl__im__28);
#line 81
c_rt_lib0clear(&___nl__im__29);
#line 81
c_rt_lib0clear(&___nl__im__30);
#line 81
//clear ___nl__int__31;
#line 81
c_rt_lib0clear(&___nl__im__32);
#line 81
c_rt_lib0clear(&___nl__im__33);
#line 81
c_rt_lib0clear(&___nl__im__17);
#line 81
label_2:
#line 82
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 82
goto label_3;
#line 82
label_1:
#line 83
c_rt_lib0delete(generator_pm_priv0move_args_to_register(___ref___im__1));
#line 84
c_rt_lib0move(&___nl__im__34, string0lf());
#line 84
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__34));
#line 84
c_rt_lib0clear(&___nl__im__34);
#line 85
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 85
c_rt_lib0delete(generator_pm_priv0print_commands(___nl__im__35, ___ref___im__1));
#line 85
c_rt_lib0clear(&___nl__im__35);
#line 86
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___im__1));
#line 87
c_rt_lib0move(&___nl__im__37,___get_global_const(296));
#line 87
c_rt_lib0move(&___nl__im__38, string0lf());
#line 87
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 87
c_rt_lib0clear(&___nl__im__37);
#line 87
c_rt_lib0clear(&___nl__im__38);
#line 87
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__36));
#line 87
c_rt_lib0clear(&___nl__im__36);
#line 87
c_rt_lib0clear(&___nl__im__37);
#line 87
c_rt_lib0clear(&___nl__im__38);
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
c_rt_lib0clear(&___nl__im__2);
#line 87
c_rt_lib0clear(&___nl__im__3);
#line 87
c_rt_lib0clear(&___nl__im__4);
#line 87
c_rt_lib0clear(&___nl__im__5);
#line 87
c_rt_lib0clear(&___nl__im__6);
#line 87
c_rt_lib0clear(&___nl__im__7);
#line 87
c_rt_lib0clear(&___nl__im__8);
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 87
c_rt_lib0clear(&___nl__im__10);
#line 87
//clear ___nl__int__11;
#line 87
c_rt_lib0clear(&___nl__im__12);
#line 87
c_rt_lib0clear(&___nl__im__13);
#line 87
c_rt_lib0clear(&___nl__im__14);
#line 87
c_rt_lib0clear(&___nl__im__15);
#line 87
c_rt_lib0clear(&___nl__im__16);
#line 87
c_rt_lib0clear(&___nl__im__17);
#line 87
//clear ___nl__int__18;
#line 87
//clear ___nl__int__19;
#line 87
//clear ___nl__int__20;
#line 87
//clear ___nl__bool__21;
#line 87
//clear ___nl__int__22;
#line 87
c_rt_lib0clear(&___nl__im__23);
#line 87
//clear ___nl__bool__24;
#line 87
c_rt_lib0clear(&___nl__im__25);
#line 87
c_rt_lib0clear(&___nl__im__26);
#line 87
c_rt_lib0clear(&___nl__im__27);
#line 87
c_rt_lib0clear(&___nl__im__28);
#line 87
c_rt_lib0clear(&___nl__im__29);
#line 87
c_rt_lib0clear(&___nl__im__30);
#line 87
//clear ___nl__int__31;
#line 87
c_rt_lib0clear(&___nl__im__32);
#line 87
c_rt_lib0clear(&___nl__im__33);
#line 87
c_rt_lib0clear(&___nl__im__34);
#line 87
c_rt_lib0clear(&___nl__im__35);
#line 87
c_rt_lib0clear(&___nl__im__36);
#line 87
c_rt_lib0clear(&___nl__im__37);
#line 87
c_rt_lib0clear(&___nl__im__38);
#line 87
return NULL;
}

bool generator_pm_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
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
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
#line 91
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 91
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
___nl__int__4 = 0;
#line 91
___nl__int__5 = ___nl__int__2 > ___nl__int__4;
#line 91
___nl__bool__1 = ___nl__int__5;
#line 91
//clear ___nl__int__2;
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
//clear ___nl__int__4;
#line 91
//clear ___nl__int__5;
#line 91
//clear ___nl__int__2;
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
//clear ___nl__int__4;
#line 91
//clear ___nl__int__5;
#line 91
___nl__bool__1 = !___nl__bool__1;
#line 91
if(___nl__bool__1){ goto label_2;}
#line 91
___nl__bool__6 = false;
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
//clear ___nl__bool__1;
#line 91
//clear ___nl__int__2;
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
//clear ___nl__int__4;
#line 91
//clear ___nl__int__5;
#line 91
return ___nl__bool__6;
#line 91
goto label_1;
#line 91
label_2:
#line 91
label_1:
#line 91
//clear ___nl__bool__1;
#line 91
//clear ___nl__int__2;
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
//clear ___nl__int__4;
#line 91
//clear ___nl__int__5;
#line 91
//clear ___nl__bool__6;
#line 92
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(233)));
#line 92
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(202));
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
___nl__bool__7 = !___nl__bool__7;
#line 92
if(___nl__bool__7){ goto label_4;}
#line 92
___nl__bool__9 = true;
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
//clear ___nl__bool__1;
#line 92
//clear ___nl__int__2;
#line 92
c_rt_lib0clear(&___nl__im__3);
#line 92
//clear ___nl__int__4;
#line 92
//clear ___nl__int__5;
#line 92
//clear ___nl__bool__6;
#line 92
//clear ___nl__bool__7;
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
return ___nl__bool__9;
#line 92
goto label_3;
#line 92
label_4:
#line 92
label_3:
#line 92
//clear ___nl__bool__7;
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
//clear ___nl__bool__9;
#line 93
___nl__bool__10 = false;
#line 94
c_rt_lib0move(&___nl__im__11,___get_global_const(41));
#line 94
c_rt_lib0move(&___nl__im__11, c_rt_lib0unary_minus(___nl__im__11));
#line 95
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 95
___nl__int__14 = 0;
#line 95
___nl__int__15 = 1;
#line 95
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 95
label_7:
#line 95
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 95
___nl__bool__17 = ___nl__int__18;
#line 95
if(___nl__bool__17){ goto label_5;}
#line 95
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 95
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 96
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(234)));
#line 97
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(239));
#line 97
___nl__bool__21 = !___nl__bool__21;
#line 97
if(___nl__bool__21){ goto label_9;}
#line 98
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(239)));
#line 99
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(272)));
#line 99
c_rt_lib0move(&___nl__im__25,___get_global_const(503));
#line 99
___nl__bool__23 = c_rt_lib0eq(___nl__im__24, ___nl__im__25);
#line 99
c_rt_lib0clear(&___nl__im__24);
#line 99
c_rt_lib0clear(&___nl__im__25);
#line 99
c_rt_lib0clear(&___nl__im__24);
#line 99
c_rt_lib0clear(&___nl__im__25);
#line 99
c_rt_lib0clear(&___nl__im__24);
#line 99
c_rt_lib0clear(&___nl__im__25);
#line 99
___nl__bool__23 = !___nl__bool__23;
#line 99
c_rt_lib0clear(&___nl__im__24);
#line 99
c_rt_lib0clear(&___nl__im__25);
#line 99
___nl__bool__23 = !___nl__bool__23;
#line 99
if(___nl__bool__23){ goto label_11;}
#line 99
goto label_6;
#line 99
goto label_10;
#line 99
label_11:
#line 99
label_10:
#line 99
//clear ___nl__bool__23;
#line 99
c_rt_lib0clear(&___nl__im__24);
#line 99
c_rt_lib0clear(&___nl__im__25);
#line 100
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(270)));
#line 100
c_rt_lib0move(&___nl__im__28,___get_global_const(388));
#line 100
___nl__bool__26 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 100
c_rt_lib0clear(&___nl__im__27);
#line 100
c_rt_lib0clear(&___nl__im__28);
#line 100
c_rt_lib0clear(&___nl__im__27);
#line 100
c_rt_lib0clear(&___nl__im__28);
#line 100
c_rt_lib0clear(&___nl__im__27);
#line 100
c_rt_lib0clear(&___nl__im__28);
#line 100
___nl__bool__26 = !___nl__bool__26;
#line 100
c_rt_lib0clear(&___nl__im__27);
#line 100
c_rt_lib0clear(&___nl__im__28);
#line 100
___nl__bool__26 = !___nl__bool__26;
#line 100
if(___nl__bool__26){ goto label_13;}
#line 100
goto label_6;
#line 100
goto label_12;
#line 100
label_13:
#line 100
label_12:
#line 100
//clear ___nl__bool__26;
#line 100
c_rt_lib0clear(&___nl__im__27);
#line 100
c_rt_lib0clear(&___nl__im__28);
#line 101
___nl__bool__10 = true;
#line 102
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(230)));
#line 103
goto label_8;
#line 103
label_9:
#line 103
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(119));
#line 103
___nl__bool__21 = !___nl__bool__21;
#line 103
if(___nl__bool__21){ goto label_14;}
#line 104
___nl__bool__29 = ___nl__bool__10;
#line 104
___nl__bool__29 = !___nl__bool__29;
#line 104
___nl__bool__29 = !___nl__bool__29;
#line 104
if(___nl__bool__29){ goto label_16;}
#line 104
___nl__bool__30 = false;
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
//clear ___nl__bool__1;
#line 104
//clear ___nl__int__2;
#line 104
c_rt_lib0clear(&___nl__im__3);
#line 104
//clear ___nl__int__4;
#line 104
//clear ___nl__int__5;
#line 104
//clear ___nl__bool__6;
#line 104
//clear ___nl__bool__7;
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
//clear ___nl__bool__9;
#line 104
//clear ___nl__bool__10;
#line 104
c_rt_lib0clear(&___nl__im__11);
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
//clear ___nl__int__14;
#line 104
//clear ___nl__int__15;
#line 104
//clear ___nl__int__16;
#line 104
//clear ___nl__bool__17;
#line 104
//clear ___nl__int__18;
#line 104
c_rt_lib0clear(&___nl__im__19);
#line 104
c_rt_lib0clear(&___nl__im__20);
#line 104
//clear ___nl__bool__21;
#line 104
c_rt_lib0clear(&___nl__im__22);
#line 104
//clear ___nl__bool__23;
#line 104
c_rt_lib0clear(&___nl__im__24);
#line 104
c_rt_lib0clear(&___nl__im__25);
#line 104
//clear ___nl__bool__26;
#line 104
c_rt_lib0clear(&___nl__im__27);
#line 104
c_rt_lib0clear(&___nl__im__28);
#line 104
//clear ___nl__bool__29;
#line 104
return ___nl__bool__30;
#line 104
goto label_15;
#line 104
label_16:
#line 104
label_15:
#line 104
//clear ___nl__bool__29;
#line 104
//clear ___nl__bool__30;
#line 105
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(119)));
#line 106
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(231));
#line 106
___nl__bool__32 = !___nl__bool__32;
#line 106
___nl__bool__32 = !___nl__bool__32;
#line 106
if(___nl__bool__32){ goto label_18;}
#line 106
___nl__bool__33 = false;
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
//clear ___nl__bool__1;
#line 106
//clear ___nl__int__2;
#line 106
c_rt_lib0clear(&___nl__im__3);
#line 106
//clear ___nl__int__4;
#line 106
//clear ___nl__int__5;
#line 106
//clear ___nl__bool__6;
#line 106
//clear ___nl__bool__7;
#line 106
c_rt_lib0clear(&___nl__im__8);
#line 106
//clear ___nl__bool__9;
#line 106
//clear ___nl__bool__10;
#line 106
c_rt_lib0clear(&___nl__im__11);
#line 106
c_rt_lib0clear(&___nl__im__12);
#line 106
c_rt_lib0clear(&___nl__im__13);
#line 106
//clear ___nl__int__14;
#line 106
//clear ___nl__int__15;
#line 106
//clear ___nl__int__16;
#line 106
//clear ___nl__bool__17;
#line 106
//clear ___nl__int__18;
#line 106
c_rt_lib0clear(&___nl__im__19);
#line 106
c_rt_lib0clear(&___nl__im__20);
#line 106
//clear ___nl__bool__21;
#line 106
c_rt_lib0clear(&___nl__im__22);
#line 106
//clear ___nl__bool__23;
#line 106
c_rt_lib0clear(&___nl__im__24);
#line 106
c_rt_lib0clear(&___nl__im__25);
#line 106
//clear ___nl__bool__26;
#line 106
c_rt_lib0clear(&___nl__im__27);
#line 106
c_rt_lib0clear(&___nl__im__28);
#line 106
//clear ___nl__bool__29;
#line 106
//clear ___nl__bool__30;
#line 106
c_rt_lib0clear(&___nl__im__31);
#line 106
//clear ___nl__bool__32;
#line 106
return ___nl__bool__33;
#line 106
goto label_17;
#line 106
label_18:
#line 106
label_17:
#line 106
//clear ___nl__bool__32;
#line 106
//clear ___nl__bool__33;
#line 107
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(231)));
#line 107
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_const(225)));
#line 107
___nl__int__35 = getIntFromImm(___nl__im__37);
#line 107
c_rt_lib0clear(&___nl__im__36);
#line 107
c_rt_lib0clear(&___nl__im__37);
#line 107
___nl__int__38 = getIntFromImm(___nl__im__11);
#line 107
___nl__int__39 = ___nl__int__35 == ___nl__int__38;
#line 107
___nl__bool__34 = ___nl__int__39;
#line 107
//clear ___nl__int__35;
#line 107
c_rt_lib0clear(&___nl__im__36);
#line 107
c_rt_lib0clear(&___nl__im__37);
#line 107
//clear ___nl__int__38;
#line 107
//clear ___nl__int__39;
#line 107
c_rt_lib0clear(&___nl__im__0);
#line 107
//clear ___nl__bool__1;
#line 107
//clear ___nl__int__2;
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
//clear ___nl__int__4;
#line 107
//clear ___nl__int__5;
#line 107
//clear ___nl__bool__6;
#line 107
//clear ___nl__bool__7;
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
//clear ___nl__bool__9;
#line 107
//clear ___nl__bool__10;
#line 107
c_rt_lib0clear(&___nl__im__11);
#line 107
c_rt_lib0clear(&___nl__im__12);
#line 107
c_rt_lib0clear(&___nl__im__13);
#line 107
//clear ___nl__int__14;
#line 107
//clear ___nl__int__15;
#line 107
//clear ___nl__int__16;
#line 107
//clear ___nl__bool__17;
#line 107
//clear ___nl__int__18;
#line 107
c_rt_lib0clear(&___nl__im__19);
#line 107
c_rt_lib0clear(&___nl__im__20);
#line 107
//clear ___nl__bool__21;
#line 107
c_rt_lib0clear(&___nl__im__22);
#line 107
//clear ___nl__bool__23;
#line 107
c_rt_lib0clear(&___nl__im__24);
#line 107
c_rt_lib0clear(&___nl__im__25);
#line 107
//clear ___nl__bool__26;
#line 107
c_rt_lib0clear(&___nl__im__27);
#line 107
c_rt_lib0clear(&___nl__im__28);
#line 107
//clear ___nl__bool__29;
#line 107
//clear ___nl__bool__30;
#line 107
c_rt_lib0clear(&___nl__im__31);
#line 107
//clear ___nl__bool__32;
#line 107
//clear ___nl__bool__33;
#line 107
//clear ___nl__int__35;
#line 107
c_rt_lib0clear(&___nl__im__36);
#line 107
c_rt_lib0clear(&___nl__im__37);
#line 107
//clear ___nl__int__38;
#line 107
//clear ___nl__int__39;
#line 107
return ___nl__bool__34;
#line 108
goto label_8;
#line 108
label_14:
#line 108
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(253));
#line 108
___nl__bool__21 = !___nl__bool__21;
#line 108
if(___nl__bool__21){ goto label_19;}
#line 109
goto label_8;
#line 109
label_19:
#line 109
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(256));
#line 109
___nl__bool__21 = !___nl__bool__21;
#line 109
if(___nl__bool__21){ goto label_20;}
#line 110
goto label_8;
#line 110
label_20:
#line 111
___nl__bool__40 = ___nl__bool__10;
#line 111
___nl__bool__40 = !___nl__bool__40;
#line 111
if(___nl__bool__40){ goto label_22;}
#line 111
___nl__bool__41 = false;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
//clear ___nl__bool__1;
#line 111
//clear ___nl__int__2;
#line 111
c_rt_lib0clear(&___nl__im__3);
#line 111
//clear ___nl__int__4;
#line 111
//clear ___nl__int__5;
#line 111
//clear ___nl__bool__6;
#line 111
//clear ___nl__bool__7;
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
//clear ___nl__bool__9;
#line 111
//clear ___nl__bool__10;
#line 111
c_rt_lib0clear(&___nl__im__11);
#line 111
c_rt_lib0clear(&___nl__im__12);
#line 111
c_rt_lib0clear(&___nl__im__13);
#line 111
//clear ___nl__int__14;
#line 111
//clear ___nl__int__15;
#line 111
//clear ___nl__int__16;
#line 111
//clear ___nl__bool__17;
#line 111
//clear ___nl__int__18;
#line 111
c_rt_lib0clear(&___nl__im__19);
#line 111
c_rt_lib0clear(&___nl__im__20);
#line 111
//clear ___nl__bool__21;
#line 111
c_rt_lib0clear(&___nl__im__22);
#line 111
//clear ___nl__bool__23;
#line 111
c_rt_lib0clear(&___nl__im__24);
#line 111
c_rt_lib0clear(&___nl__im__25);
#line 111
//clear ___nl__bool__26;
#line 111
c_rt_lib0clear(&___nl__im__27);
#line 111
c_rt_lib0clear(&___nl__im__28);
#line 111
//clear ___nl__bool__29;
#line 111
//clear ___nl__bool__30;
#line 111
c_rt_lib0clear(&___nl__im__31);
#line 111
//clear ___nl__bool__32;
#line 111
//clear ___nl__bool__33;
#line 111
//clear ___nl__bool__34;
#line 111
//clear ___nl__int__35;
#line 111
c_rt_lib0clear(&___nl__im__36);
#line 111
c_rt_lib0clear(&___nl__im__37);
#line 111
//clear ___nl__int__38;
#line 111
//clear ___nl__int__39;
#line 111
//clear ___nl__bool__40;
#line 111
return ___nl__bool__41;
#line 111
goto label_21;
#line 111
label_22:
#line 111
label_21:
#line 111
//clear ___nl__bool__40;
#line 111
//clear ___nl__bool__41;
#line 112
goto label_8;
#line 112
label_8:
#line 112
//clear ___nl__bool__21;
#line 112
c_rt_lib0clear(&___nl__im__22);
#line 112
//clear ___nl__bool__23;
#line 112
c_rt_lib0clear(&___nl__im__24);
#line 112
c_rt_lib0clear(&___nl__im__25);
#line 112
//clear ___nl__bool__26;
#line 112
c_rt_lib0clear(&___nl__im__27);
#line 112
c_rt_lib0clear(&___nl__im__28);
#line 112
//clear ___nl__bool__29;
#line 112
//clear ___nl__bool__30;
#line 112
c_rt_lib0clear(&___nl__im__31);
#line 112
//clear ___nl__bool__32;
#line 112
//clear ___nl__bool__33;
#line 112
//clear ___nl__bool__34;
#line 112
//clear ___nl__int__35;
#line 112
c_rt_lib0clear(&___nl__im__36);
#line 112
c_rt_lib0clear(&___nl__im__37);
#line 112
//clear ___nl__int__38;
#line 112
//clear ___nl__int__39;
#line 112
//clear ___nl__bool__40;
#line 112
//clear ___nl__bool__41;
#line 112
c_rt_lib0clear(&___nl__im__13);
#line 112
label_6:
#line 113
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 113
goto label_7;
#line 113
label_5:
#line 114
___nl__bool__42 = false;
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
//clear ___nl__bool__1;
#line 114
//clear ___nl__int__2;
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 114
//clear ___nl__int__4;
#line 114
//clear ___nl__int__5;
#line 114
//clear ___nl__bool__6;
#line 114
//clear ___nl__bool__7;
#line 114
c_rt_lib0clear(&___nl__im__8);
#line 114
//clear ___nl__bool__9;
#line 114
//clear ___nl__bool__10;
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 114
c_rt_lib0clear(&___nl__im__12);
#line 114
c_rt_lib0clear(&___nl__im__13);
#line 114
//clear ___nl__int__14;
#line 114
//clear ___nl__int__15;
#line 114
//clear ___nl__int__16;
#line 114
//clear ___nl__bool__17;
#line 114
//clear ___nl__int__18;
#line 114
c_rt_lib0clear(&___nl__im__19);
#line 114
c_rt_lib0clear(&___nl__im__20);
#line 114
//clear ___nl__bool__21;
#line 114
c_rt_lib0clear(&___nl__im__22);
#line 114
//clear ___nl__bool__23;
#line 114
c_rt_lib0clear(&___nl__im__24);
#line 114
c_rt_lib0clear(&___nl__im__25);
#line 114
//clear ___nl__bool__26;
#line 114
c_rt_lib0clear(&___nl__im__27);
#line 114
c_rt_lib0clear(&___nl__im__28);
#line 114
//clear ___nl__bool__29;
#line 114
//clear ___nl__bool__30;
#line 114
c_rt_lib0clear(&___nl__im__31);
#line 114
//clear ___nl__bool__32;
#line 114
//clear ___nl__bool__33;
#line 114
//clear ___nl__bool__34;
#line 114
//clear ___nl__int__35;
#line 114
c_rt_lib0clear(&___nl__im__36);
#line 114
c_rt_lib0clear(&___nl__im__37);
#line 114
//clear ___nl__int__38;
#line 114
//clear ___nl__int__39;
#line 114
//clear ___nl__bool__40;
#line 114
//clear ___nl__bool__41;
#line 114
return ___nl__bool__42;
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
//clear ___nl__bool__1;
#line 114
//clear ___nl__int__2;
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 114
//clear ___nl__int__4;
#line 114
//clear ___nl__int__5;
#line 114
//clear ___nl__bool__6;
#line 114
//clear ___nl__bool__7;
#line 114
c_rt_lib0clear(&___nl__im__8);
#line 114
//clear ___nl__bool__9;
#line 114
//clear ___nl__bool__10;
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 114
c_rt_lib0clear(&___nl__im__12);
#line 114
c_rt_lib0clear(&___nl__im__13);
#line 114
//clear ___nl__int__14;
#line 114
//clear ___nl__int__15;
#line 114
//clear ___nl__int__16;
#line 114
//clear ___nl__bool__17;
#line 114
//clear ___nl__int__18;
#line 114
c_rt_lib0clear(&___nl__im__19);
#line 114
c_rt_lib0clear(&___nl__im__20);
#line 114
//clear ___nl__bool__21;
#line 114
c_rt_lib0clear(&___nl__im__22);
#line 114
//clear ___nl__bool__23;
#line 114
c_rt_lib0clear(&___nl__im__24);
#line 114
c_rt_lib0clear(&___nl__im__25);
#line 114
//clear ___nl__bool__26;
#line 114
c_rt_lib0clear(&___nl__im__27);
#line 114
c_rt_lib0clear(&___nl__im__28);
#line 114
//clear ___nl__bool__29;
#line 114
//clear ___nl__bool__30;
#line 114
c_rt_lib0clear(&___nl__im__31);
#line 114
//clear ___nl__bool__32;
#line 114
//clear ___nl__bool__33;
#line 114
//clear ___nl__bool__34;
#line 114
//clear ___nl__int__35;
#line 114
c_rt_lib0clear(&___nl__im__36);
#line 114
c_rt_lib0clear(&___nl__im__37);
#line 114
//clear ___nl__int__38;
#line 114
//clear ___nl__int__39;
#line 114
//clear ___nl__bool__40;
#line 114
//clear ___nl__bool__41;
#line 114
//clear ___nl__bool__42;
#line 114
return NULL;
}

ImmT  generator_pm_priv0print_function_access(nlasm0access_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 118
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(219)));
#line 118
c_rt_lib0move(&___nl__im__2, generator_pm_priv0get_function_access(___nl__im__0, ___nl__im__3));
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__2));
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
return NULL;
}

ImmT  generator_pm_priv0get_function_access(nlasm0access_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_pm_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 122
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(217));
#line 122
if(___nl__bool__2){ goto label_2;}
#line 124
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(435));
#line 124
if(___nl__bool__2){ goto label_3;}
#line 124
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 124
nl_die_arg(___nl__im__3);
#line 122
label_2:
#line 123
c_rt_lib0move(&___nl__im__5,___get_global_const(35));
#line 123
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 123
c_rt_lib0clear(&___nl__im__5);
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
c_rt_lib0clear(&___nl__im__1);
#line 123
//clear ___nl__bool__2;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
c_rt_lib0clear(&___nl__im__5);
#line 123
return ___nl__im__4;
#line 124
goto label_1;
#line 124
label_3:
#line 125
c_rt_lib0move(&___nl__im__7,___get_global_const(218));
#line 125
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
c_rt_lib0clear(&___nl__im__1);
#line 125
//clear ___nl__bool__2;
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
c_rt_lib0clear(&___nl__im__4);
#line 125
c_rt_lib0clear(&___nl__im__5);
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
return ___nl__im__6;
#line 126
goto label_1;
#line 126
label_1:
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
//clear ___nl__bool__2;
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
return NULL;
}

ImmT  generator_pm_priv0print_args_dollar(INT  ___nl__int__0,generator_pm0state_t0type* ___ref___im__1) {
generator_pm_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
#line 130
___nl__int__2 = 0;
#line 130
___nl__int__3 = 1;
#line 130
label_3:
#line 130
___nl__int__5 = ___nl__int__2 >= ___nl__int__0;
#line 130
___nl__bool__4 = ___nl__int__5;
#line 130
if(___nl__bool__4){ goto label_1;}
#line 131
c_rt_lib0move(&___nl__im__6,___get_global_const(308));
#line 131
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__6));
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
label_2:
#line 132
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 132
goto label_3;
#line 132
label_1:
#line 132
//clear ___nl__int__0;
#line 132
//clear ___nl__int__2;
#line 132
//clear ___nl__int__3;
#line 132
//clear ___nl__bool__4;
#line 132
//clear ___nl__int__5;
#line 132
c_rt_lib0clear(&___nl__im__6);
#line 132
return NULL;
}

ImmT  generator_pm_priv0move_args_to_register(generator_pm0state_t0type* ___ref___im__0) {
generator_pm_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
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
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 136
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(394)));
#line 136
___nl__int__1 = c_rt_lib0array_len(___nl__im__2);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
___nl__int__3 = 0;
#line 136
___nl__int__4 = 1;
#line 136
label_3:
#line 136
___nl__int__6 = ___nl__int__3 >= ___nl__int__1;
#line 136
___nl__bool__5 = ___nl__int__6;
#line 136
if(___nl__bool__5){ goto label_1;}
#line 137
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__int__3));
#line 138
c_rt_lib0move(&___nl__im__12,___get_global_const(845));
#line 138
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__7));
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0move(&___nl__im__13,___get_global_const(846));
#line 138
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__13));
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__7));
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0move(&___nl__im__14,___get_global_const(847));
#line 138
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0clear(&___nl__im__14);
#line 138
c_rt_lib0delete(generator_pm_priv0print(___ref___im__0, ___nl__im__8));
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0clear(&___nl__im__14);
#line 139
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(394)));
#line 139
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__17, ___nl__int__3));
#line 139
c_rt_lib0clear(&___nl__im__17);
#line 139
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(336)));
#line 139
c_rt_lib0clear(&___nl__im__16);
#line 139
c_rt_lib0clear(&___nl__im__17);
#line 139
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(231));
#line 139
if(___nl__bool__18){ goto label_5;}
#line 140
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(40));
#line 140
if(___nl__bool__18){ goto label_6;}
#line 140
c_rt_lib0move(&___nl__im__19,___get_global_const(16));
#line 140
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__15));
#line 140
nl_die_arg(___nl__im__19);
#line 139
label_5:
#line 140
goto label_4;
#line 140
label_6:
#line 141
c_rt_lib0move(&___nl__im__24,___get_global_const(848));
#line 141
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__7));
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0move(&___nl__im__25,___get_global_const(849));
#line 141
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0clear(&___nl__im__25);
#line 141
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__7));
#line 141
c_rt_lib0clear(&___nl__im__22);
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0clear(&___nl__im__25);
#line 141
c_rt_lib0move(&___nl__im__26,___get_global_const(850));
#line 141
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 141
c_rt_lib0clear(&___nl__im__21);
#line 141
c_rt_lib0clear(&___nl__im__22);
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0clear(&___nl__im__25);
#line 141
c_rt_lib0clear(&___nl__im__26);
#line 141
c_rt_lib0delete(generator_pm_priv0print(___ref___im__0, ___nl__im__20));
#line 141
c_rt_lib0clear(&___nl__im__20);
#line 141
c_rt_lib0clear(&___nl__im__21);
#line 141
c_rt_lib0clear(&___nl__im__22);
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0clear(&___nl__im__25);
#line 141
c_rt_lib0clear(&___nl__im__26);
#line 142
goto label_4;
#line 142
label_4:
#line 142
label_2:
#line 143
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 143
goto label_3;
#line 143
label_1:
#line 143
//clear ___nl__int__1;
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
//clear ___nl__int__3;
#line 143
//clear ___nl__int__4;
#line 143
//clear ___nl__bool__5;
#line 143
//clear ___nl__int__6;
#line 143
c_rt_lib0clear(&___nl__im__7);
#line 143
c_rt_lib0clear(&___nl__im__8);
#line 143
c_rt_lib0clear(&___nl__im__9);
#line 143
c_rt_lib0clear(&___nl__im__10);
#line 143
c_rt_lib0clear(&___nl__im__11);
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__13);
#line 143
c_rt_lib0clear(&___nl__im__14);
#line 143
c_rt_lib0clear(&___nl__im__15);
#line 143
c_rt_lib0clear(&___nl__im__16);
#line 143
c_rt_lib0clear(&___nl__im__17);
#line 143
//clear ___nl__bool__18;
#line 143
c_rt_lib0clear(&___nl__im__19);
#line 143
c_rt_lib0clear(&___nl__im__20);
#line 143
c_rt_lib0clear(&___nl__im__21);
#line 143
c_rt_lib0clear(&___nl__im__22);
#line 143
c_rt_lib0clear(&___nl__im__23);
#line 143
c_rt_lib0clear(&___nl__im__24);
#line 143
c_rt_lib0clear(&___nl__im__25);
#line 143
c_rt_lib0clear(&___nl__im__26);
#line 143
return NULL;
}

ImmT  generator_pm_priv0move_register_to_ref_args(generator_pm0state_t0type* ___ref___im__0) {
generator_pm_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
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
#line 147
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(394)));
#line 147
___nl__int__1 = c_rt_lib0array_len(___nl__im__2);
#line 147
c_rt_lib0clear(&___nl__im__2);
#line 147
___nl__int__3 = 0;
#line 147
___nl__int__4 = 1;
#line 147
label_3:
#line 147
___nl__int__6 = ___nl__int__3 >= ___nl__int__1;
#line 147
___nl__bool__5 = ___nl__int__6;
#line 147
if(___nl__bool__5){ goto label_1;}
#line 148
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(394)));
#line 148
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__9, ___nl__int__3));
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(336)));
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(231));
#line 148
if(___nl__bool__10){ goto label_5;}
#line 149
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(40));
#line 149
if(___nl__bool__10){ goto label_6;}
#line 149
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 149
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__7));
#line 149
nl_die_arg(___nl__im__11);
#line 148
label_5:
#line 149
goto label_4;
#line 149
label_6:
#line 150
c_rt_lib0move(&___nl__im__12, ptd0int_to_string(___nl__int__3));
#line 151
c_rt_lib0move(&___nl__im__17,___get_global_const(851));
#line 151
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__12));
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0move(&___nl__im__18,___get_global_const(852));
#line 151
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__18));
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0clear(&___nl__im__18);
#line 151
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__12));
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0clear(&___nl__im__18);
#line 151
c_rt_lib0move(&___nl__im__19,___get_global_const(416));
#line 151
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0clear(&___nl__im__18);
#line 151
c_rt_lib0clear(&___nl__im__19);
#line 151
c_rt_lib0delete(generator_pm_priv0print(___ref___im__0, ___nl__im__13));
#line 151
c_rt_lib0clear(&___nl__im__13);
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0clear(&___nl__im__18);
#line 151
c_rt_lib0clear(&___nl__im__19);
#line 152
goto label_4;
#line 152
label_4:
#line 152
label_2:
#line 153
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 153
goto label_3;
#line 153
label_1:
#line 153
//clear ___nl__int__1;
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
//clear ___nl__int__3;
#line 153
//clear ___nl__int__4;
#line 153
//clear ___nl__bool__5;
#line 153
//clear ___nl__int__6;
#line 153
c_rt_lib0clear(&___nl__im__7);
#line 153
c_rt_lib0clear(&___nl__im__8);
#line 153
c_rt_lib0clear(&___nl__im__9);
#line 153
//clear ___nl__bool__10;
#line 153
c_rt_lib0clear(&___nl__im__11);
#line 153
c_rt_lib0clear(&___nl__im__12);
#line 153
c_rt_lib0clear(&___nl__im__13);
#line 153
c_rt_lib0clear(&___nl__im__14);
#line 153
c_rt_lib0clear(&___nl__im__15);
#line 153
c_rt_lib0clear(&___nl__im__16);
#line 153
c_rt_lib0clear(&___nl__im__17);
#line 153
c_rt_lib0clear(&___nl__im__18);
#line 153
c_rt_lib0clear(&___nl__im__19);
#line 153
return NULL;
}

ImmT  generator_pm_priv0print_commands(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 157
___nl__int__3 = 0;
#line 157
___nl__int__4 = 1;
#line 157
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 157
label_3:
#line 157
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 157
___nl__bool__6 = ___nl__int__7;
#line 157
if(___nl__bool__6){ goto label_1;}
#line 157
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 157
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 158
c_rt_lib0delete(generator_pm_priv0print_command(___nl__im__2, ___ref___im__1));
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
label_2:
#line 159
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 159
goto label_3;
#line 159
label_1:
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
//clear ___nl__int__3;
#line 159
//clear ___nl__int__4;
#line 159
//clear ___nl__int__5;
#line 159
//clear ___nl__bool__6;
#line 159
//clear ___nl__int__7;
#line 159
c_rt_lib0clear(&___nl__im__8);
#line 159
return NULL;
}

ImmT  generator_pm_priv0print_command(nlasm0cmd_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
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
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
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
bool  ___nl__bool__88 = false;
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
bool  ___nl__bool__107 = false;
bool  ___nl__bool__108 = false;
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
INT  ___nl__int__148 = 0;
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
INT  ___nl__int__168 = 0;
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
ImmT  ___nl__im__181 = NULL;
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
#line 163
c_rt_lib0move(&___nl__im__4,___get_global_const(512));
#line 163
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(228)));
#line 163
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(513)));
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(514)));
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(164)));
#line 163
___nl__int__6 = getIntFromImm(___nl__im__10);
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0move(&___nl__im__5, ptd0int_to_string(___nl__int__6));
#line 163
//clear ___nl__int__6;
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 163
c_rt_lib0clear(&___nl__im__4);
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
//clear ___nl__int__6;
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0move(&___nl__im__11, string0lf());
#line 163
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__11));
#line 163
c_rt_lib0clear(&___nl__im__3);
#line 163
c_rt_lib0clear(&___nl__im__4);
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
//clear ___nl__int__6;
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0clear(&___nl__im__11);
#line 163
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__2));
#line 163
c_rt_lib0clear(&___nl__im__2);
#line 163
c_rt_lib0clear(&___nl__im__3);
#line 163
c_rt_lib0clear(&___nl__im__4);
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
//clear ___nl__int__6;
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0clear(&___nl__im__11);
#line 164
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(234)));
#line 164
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(237));
#line 164
if(___nl__bool__13){ goto label_2;}
#line 176
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(238));
#line 176
if(___nl__bool__13){ goto label_3;}
#line 186
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(239));
#line 186
if(___nl__bool__13){ goto label_4;}
#line 188
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(117));
#line 188
if(___nl__bool__13){ goto label_5;}
#line 191
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(240));
#line 191
if(___nl__bool__13){ goto label_6;}
#line 193
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(241));
#line 193
if(___nl__bool__13){ goto label_7;}
#line 195
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(242));
#line 195
if(___nl__bool__13){ goto label_8;}
#line 200
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(243));
#line 200
if(___nl__bool__13){ goto label_9;}
#line 205
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(119));
#line 205
if(___nl__bool__13){ goto label_10;}
#line 214
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(252));
#line 214
if(___nl__bool__13){ goto label_11;}
#line 218
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(244));
#line 218
if(___nl__bool__13){ goto label_12;}
#line 222
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(232));
#line 222
if(___nl__bool__13){ goto label_13;}
#line 229
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(245));
#line 229
if(___nl__bool__13){ goto label_14;}
#line 235
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(246));
#line 235
if(___nl__bool__13){ goto label_15;}
#line 237
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(247));
#line 237
if(___nl__bool__13){ goto label_16;}
#line 239
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(248));
#line 239
if(___nl__bool__13){ goto label_17;}
#line 241
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(249));
#line 241
if(___nl__bool__13){ goto label_18;}
#line 245
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(250));
#line 245
if(___nl__bool__13){ goto label_19;}
#line 247
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(251));
#line 247
if(___nl__bool__13){ goto label_20;}
#line 249
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(253));
#line 249
if(___nl__bool__13){ goto label_21;}
#line 251
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(254));
#line 251
if(___nl__bool__13){ goto label_22;}
#line 257
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(255));
#line 257
if(___nl__bool__13){ goto label_23;}
#line 259
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(256));
#line 259
if(___nl__bool__13){ goto label_24;}
#line 263
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(257));
#line 263
if(___nl__bool__13){ goto label_25;}
#line 265
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(258));
#line 265
if(___nl__bool__13){ goto label_26;}
#line 267
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(259));
#line 267
if(___nl__bool__13){ goto label_27;}
#line 269
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(260));
#line 269
if(___nl__bool__13){ goto label_28;}
#line 271
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(261));
#line 271
if(___nl__bool__13){ goto label_29;}
#line 273
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(262));
#line 273
if(___nl__bool__13){ goto label_30;}
#line 275
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(263));
#line 275
if(___nl__bool__13){ goto label_31;}
#line 277
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(264));
#line 277
if(___nl__bool__13){ goto label_32;}
#line 279
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(265));
#line 279
if(___nl__bool__13){ goto label_33;}
#line 281
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(266));
#line 281
if(___nl__bool__13){ goto label_34;}
#line 283
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(267));
#line 283
if(___nl__bool__13){ goto label_35;}
#line 285
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(268));
#line 285
if(___nl__bool__13){ goto label_36;}
#line 287
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(269));
#line 287
if(___nl__bool__13){ goto label_37;}
#line 287
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 287
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 287
nl_die_arg(___nl__im__14);
#line 164
label_2:
#line 164
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(237)));
#line 164
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 165
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(230)));
#line 165
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__17, ___ref___im__1));
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0move(&___nl__im__18,___get_global_const(301));
#line 166
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__18));
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 167
___nl__int__19 = 0;
#line 168
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(76)));
#line 168
___nl__int__22 = 0;
#line 168
___nl__int__23 = 1;
#line 168
___nl__int__24 = c_rt_lib0array_len(___nl__im__20);
#line 168
label_40:
#line 168
___nl__int__26 = ___nl__int__22 >= ___nl__int__24;
#line 168
___nl__bool__25 = ___nl__int__26;
#line 168
if(___nl__bool__25){ goto label_38;}
#line 168
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__20, ___nl__int__22));
#line 168
c_rt_lib0copy(&___nl__im__21, ___nl__im__27);
#line 169
___nl__int__29 = 0;
#line 169
___nl__int__30 = ___nl__int__19 > ___nl__int__29;
#line 169
___nl__bool__28 = ___nl__int__30;
#line 169
//clear ___nl__int__29;
#line 169
//clear ___nl__int__30;
#line 169
___nl__bool__28 = !___nl__bool__28;
#line 169
if(___nl__bool__28){ goto label_42;}
#line 170
c_rt_lib0move(&___nl__im__31,___get_global_const(299));
#line 170
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__31));
#line 170
c_rt_lib0clear(&___nl__im__31);
#line 171
goto label_41;
#line 171
label_42:
#line 171
label_41:
#line 171
//clear ___nl__bool__28;
#line 171
//clear ___nl__int__29;
#line 171
//clear ___nl__int__30;
#line 171
c_rt_lib0clear(&___nl__im__31);
#line 172
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__21, ___ref___im__1));
#line 173
___nl__int__32 = 1;
#line 173
___nl__int__19 = ___nl__int__19 + ___nl__int__32;
#line 173
//clear ___nl__int__32;
#line 173
c_rt_lib0clear(&___nl__im__21);
#line 173
label_39:
#line 174
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 174
goto label_40;
#line 174
label_38:
#line 175
c_rt_lib0move(&___nl__im__33,___get_global_const(847));
#line 175
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__33));
#line 175
c_rt_lib0clear(&___nl__im__33);
#line 176
goto label_1;
#line 176
label_3:
#line 176
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(238)));
#line 176
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 177
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(230)));
#line 177
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__36, ___ref___im__1));
#line 177
c_rt_lib0clear(&___nl__im__36);
#line 178
c_rt_lib0move(&___nl__im__37,___get_global_const(295));
#line 178
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__37));
#line 178
c_rt_lib0clear(&___nl__im__37);
#line 179
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(76)));
#line 179
___nl__int__40 = 0;
#line 179
___nl__int__41 = 1;
#line 179
___nl__int__42 = c_rt_lib0array_len(___nl__im__38);
#line 179
label_45:
#line 179
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 179
___nl__bool__43 = ___nl__int__44;
#line 179
if(___nl__bool__43){ goto label_43;}
#line 179
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__38, ___nl__int__40));
#line 179
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 180
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(377)));
#line 180
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__46));
#line 180
c_rt_lib0clear(&___nl__im__46);
#line 181
c_rt_lib0move(&___nl__im__47,___get_global_const(313));
#line 181
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__47));
#line 181
c_rt_lib0clear(&___nl__im__47);
#line 182
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(231)));
#line 182
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__48, ___ref___im__1));
#line 182
c_rt_lib0clear(&___nl__im__48);
#line 183
c_rt_lib0move(&___nl__im__49,___get_global_const(299));
#line 183
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__49));
#line 183
c_rt_lib0clear(&___nl__im__49);
#line 183
c_rt_lib0clear(&___nl__im__39);
#line 183
label_44:
#line 184
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 184
goto label_45;
#line 184
label_43:
#line 185
c_rt_lib0move(&___nl__im__50,___get_global_const(853));
#line 185
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__50));
#line 185
c_rt_lib0clear(&___nl__im__50);
#line 186
goto label_1;
#line 186
label_4:
#line 186
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(239)));
#line 186
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 187
c_rt_lib0delete(generator_pm_priv0print_call(___nl__im__51, ___ref___im__1));
#line 188
goto label_1;
#line 188
label_5:
#line 188
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(117)));
#line 188
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 189
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(230)));
#line 189
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__55, ___ref___im__1));
#line 189
c_rt_lib0clear(&___nl__im__55);
#line 190
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(162)));
#line 190
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(121)));
#line 190
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_const(162), ___nl__im__59, ___get_global_const(121), ___nl__im__60));
#line 190
c_rt_lib0clear(&___nl__im__59);
#line 190
c_rt_lib0clear(&___nl__im__60);
#line 190
c_rt_lib0move(&___nl__im__57, dfile0ssave(___nl__im__58));
#line 190
c_rt_lib0clear(&___nl__im__58);
#line 190
c_rt_lib0clear(&___nl__im__59);
#line 190
c_rt_lib0clear(&___nl__im__60);
#line 190
c_rt_lib0move(&___nl__im__61,___get_global_const(416));
#line 190
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__61));
#line 190
c_rt_lib0clear(&___nl__im__57);
#line 190
c_rt_lib0clear(&___nl__im__58);
#line 190
c_rt_lib0clear(&___nl__im__59);
#line 190
c_rt_lib0clear(&___nl__im__60);
#line 190
c_rt_lib0clear(&___nl__im__61);
#line 190
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__56));
#line 190
c_rt_lib0clear(&___nl__im__56);
#line 190
c_rt_lib0clear(&___nl__im__57);
#line 190
c_rt_lib0clear(&___nl__im__58);
#line 190
c_rt_lib0clear(&___nl__im__59);
#line 190
c_rt_lib0clear(&___nl__im__60);
#line 190
c_rt_lib0clear(&___nl__im__61);
#line 191
goto label_1;
#line 191
label_6:
#line 191
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(240)));
#line 191
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 192
c_rt_lib0delete(generator_pm_priv0print_una_op(___nl__im__62, ___ref___im__1));
#line 193
goto label_1;
#line 193
label_7:
#line 193
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(241)));
#line 193
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 194
c_rt_lib0delete(generator_pm_priv0print_bin_op(___nl__im__64, ___ref___im__1));
#line 195
goto label_1;
#line 195
label_8:
#line 195
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(242)));
#line 195
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 196
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(230)));
#line 196
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__68, ___ref___im__1));
#line 196
c_rt_lib0clear(&___nl__im__68);
#line 197
c_rt_lib0move(&___nl__im__69,___get_global_const(854));
#line 197
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__69));
#line 197
c_rt_lib0clear(&___nl__im__69);
#line 198
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(76)));
#line 198
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__70, ___ref___im__1));
#line 198
c_rt_lib0clear(&___nl__im__70);
#line 199
c_rt_lib0move(&___nl__im__73,___get_global_const(855));
#line 199
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(96)));
#line 199
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__74));
#line 199
c_rt_lib0clear(&___nl__im__73);
#line 199
c_rt_lib0clear(&___nl__im__74);
#line 199
c_rt_lib0move(&___nl__im__75,___get_global_const(856));
#line 199
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__75));
#line 199
c_rt_lib0clear(&___nl__im__72);
#line 199
c_rt_lib0clear(&___nl__im__73);
#line 199
c_rt_lib0clear(&___nl__im__74);
#line 199
c_rt_lib0clear(&___nl__im__75);
#line 199
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__71));
#line 199
c_rt_lib0clear(&___nl__im__71);
#line 199
c_rt_lib0clear(&___nl__im__72);
#line 199
c_rt_lib0clear(&___nl__im__73);
#line 199
c_rt_lib0clear(&___nl__im__74);
#line 199
c_rt_lib0clear(&___nl__im__75);
#line 200
goto label_1;
#line 200
label_9:
#line 200
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(243)));
#line 200
c_rt_lib0copy(&___nl__im__76, ___nl__im__77);
#line 201
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_const(230)));
#line 201
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__78, ___ref___im__1));
#line 201
c_rt_lib0clear(&___nl__im__78);
#line 202
c_rt_lib0move(&___nl__im__79,___get_global_const(857));
#line 202
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__79));
#line 202
c_rt_lib0clear(&___nl__im__79);
#line 203
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_const(76)));
#line 203
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__80, ___ref___im__1));
#line 203
c_rt_lib0clear(&___nl__im__80);
#line 204
c_rt_lib0move(&___nl__im__83,___get_global_const(855));
#line 204
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_const(96)));
#line 204
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 204
c_rt_lib0clear(&___nl__im__83);
#line 204
c_rt_lib0clear(&___nl__im__84);
#line 204
c_rt_lib0move(&___nl__im__85,___get_global_const(856));
#line 204
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__85));
#line 204
c_rt_lib0clear(&___nl__im__82);
#line 204
c_rt_lib0clear(&___nl__im__83);
#line 204
c_rt_lib0clear(&___nl__im__84);
#line 204
c_rt_lib0clear(&___nl__im__85);
#line 204
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__81));
#line 204
c_rt_lib0clear(&___nl__im__81);
#line 204
c_rt_lib0clear(&___nl__im__82);
#line 204
c_rt_lib0clear(&___nl__im__83);
#line 204
c_rt_lib0clear(&___nl__im__84);
#line 204
c_rt_lib0clear(&___nl__im__85);
#line 205
goto label_1;
#line 205
label_10:
#line 205
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(119)));
#line 205
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 206
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___im__1));
#line 207
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(231));
#line 207
if(___nl__bool__88){ goto label_47;}
#line 211
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(332));
#line 211
if(___nl__bool__88){ goto label_48;}
#line 211
c_rt_lib0move(&___nl__im__89,___get_global_const(16));
#line 211
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(2, ___nl__im__89, ___nl__im__86));
#line 211
nl_die_arg(___nl__im__89);
#line 207
label_47:
#line 207
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__86, ___get_global_const(231)));
#line 207
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 208
c_rt_lib0move(&___nl__im__92,___get_global_const(469));
#line 208
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__92));
#line 208
c_rt_lib0clear(&___nl__im__92);
#line 209
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__90, ___ref___im__1));
#line 210
c_rt_lib0move(&___nl__im__93,___get_global_const(416));
#line 210
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__93));
#line 210
c_rt_lib0clear(&___nl__im__93);
#line 211
goto label_46;
#line 211
label_48:
#line 212
c_rt_lib0move(&___nl__im__94,___get_global_const(858));
#line 212
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__94));
#line 212
c_rt_lib0clear(&___nl__im__94);
#line 213
goto label_46;
#line 213
label_46:
#line 214
goto label_1;
#line 214
label_11:
#line 214
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(252)));
#line 214
c_rt_lib0copy(&___nl__im__95, ___nl__im__96);
#line 215
c_rt_lib0move(&___nl__im__97,___get_global_const(859));
#line 215
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__97));
#line 215
c_rt_lib0clear(&___nl__im__97);
#line 216
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__95, ___ref___im__1));
#line 217
c_rt_lib0move(&___nl__im__98,___get_global_const(796));
#line 217
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__98));
#line 217
c_rt_lib0clear(&___nl__im__98);
#line 218
goto label_1;
#line 218
label_12:
#line 218
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(244)));
#line 218
c_rt_lib0copy(&___nl__im__99, ___nl__im__100);
#line 219
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(230)));
#line 219
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__101, ___ref___im__1));
#line 219
c_rt_lib0clear(&___nl__im__101);
#line 220
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(76)));
#line 220
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__102, ___ref___im__1));
#line 220
c_rt_lib0clear(&___nl__im__102);
#line 221
c_rt_lib0move(&___nl__im__103,___get_global_const(416));
#line 221
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__103));
#line 221
c_rt_lib0clear(&___nl__im__103);
#line 222
goto label_1;
#line 222
label_13:
#line 222
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(232)));
#line 222
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 223
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(230)));
#line 223
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__106, ___ref___im__1));
#line 223
c_rt_lib0clear(&___nl__im__106);
#line 224
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(231)));
#line 224
___nl__bool__107 = nl0is_sim(___nl__im__109);
#line 224
c_rt_lib0clear(&___nl__im__109);
#line 224
___nl__bool__108 = !___nl__bool__107;
#line 224
if(___nl__bool__108){ goto label_51;}
#line 224
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(231)));
#line 224
c_rt_lib0move(&___nl__im__112,___get_global_const(37));
#line 224
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__112));
#line 224
c_rt_lib0clear(&___nl__im__111);
#line 224
c_rt_lib0clear(&___nl__im__112);
#line 224
___nl__bool__107 = string_utils0is_integer(___nl__im__110);
#line 224
c_rt_lib0clear(&___nl__im__110);
#line 224
c_rt_lib0clear(&___nl__im__111);
#line 224
c_rt_lib0clear(&___nl__im__112);
#line 224
label_51:
#line 224
//clear ___nl__bool__108;
#line 224
c_rt_lib0clear(&___nl__im__109);
#line 224
c_rt_lib0clear(&___nl__im__110);
#line 224
c_rt_lib0clear(&___nl__im__111);
#line 224
c_rt_lib0clear(&___nl__im__112);
#line 224
___nl__bool__107 = !___nl__bool__107;
#line 224
if(___nl__bool__107){ goto label_50;}
#line 225
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(231)));
#line 225
c_rt_lib0move(&___nl__im__115,___get_global_const(416));
#line 225
c_rt_lib0move(&___nl__im__113, c_rt_lib0concat_new(___nl__im__114, ___nl__im__115));
#line 225
c_rt_lib0clear(&___nl__im__114);
#line 225
c_rt_lib0clear(&___nl__im__115);
#line 225
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__113));
#line 225
c_rt_lib0clear(&___nl__im__113);
#line 225
c_rt_lib0clear(&___nl__im__114);
#line 225
c_rt_lib0clear(&___nl__im__115);
#line 226
goto label_49;
#line 226
label_50:
#line 227
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(231)));
#line 227
c_rt_lib0move(&___nl__im__117, dfile0ssave(___nl__im__118));
#line 227
c_rt_lib0clear(&___nl__im__118);
#line 227
c_rt_lib0move(&___nl__im__119,___get_global_const(416));
#line 227
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__119));
#line 227
c_rt_lib0clear(&___nl__im__117);
#line 227
c_rt_lib0clear(&___nl__im__118);
#line 227
c_rt_lib0clear(&___nl__im__119);
#line 227
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__116));
#line 227
c_rt_lib0clear(&___nl__im__116);
#line 227
c_rt_lib0clear(&___nl__im__117);
#line 227
c_rt_lib0clear(&___nl__im__118);
#line 227
c_rt_lib0clear(&___nl__im__119);
#line 228
goto label_49;
#line 228
label_49:
#line 228
//clear ___nl__bool__107;
#line 228
//clear ___nl__bool__108;
#line 228
c_rt_lib0clear(&___nl__im__109);
#line 228
c_rt_lib0clear(&___nl__im__110);
#line 228
c_rt_lib0clear(&___nl__im__111);
#line 228
c_rt_lib0clear(&___nl__im__112);
#line 228
c_rt_lib0clear(&___nl__im__113);
#line 228
c_rt_lib0clear(&___nl__im__114);
#line 228
c_rt_lib0clear(&___nl__im__115);
#line 228
c_rt_lib0clear(&___nl__im__116);
#line 228
c_rt_lib0clear(&___nl__im__117);
#line 228
c_rt_lib0clear(&___nl__im__118);
#line 228
c_rt_lib0clear(&___nl__im__119);
#line 229
goto label_1;
#line 229
label_14:
#line 229
c_rt_lib0move(&___nl__im__121, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(245)));
#line 229
c_rt_lib0copy(&___nl__im__120, ___nl__im__121);
#line 230
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__120, ___get_global_const(230)));
#line 230
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__122, ___ref___im__1));
#line 230
c_rt_lib0clear(&___nl__im__122);
#line 231
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__120, ___get_global_const(76)));
#line 231
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__123, ___ref___im__1));
#line 231
c_rt_lib0clear(&___nl__im__123);
#line 232
c_rt_lib0move(&___nl__im__124,___get_global_const(860));
#line 232
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__124));
#line 232
c_rt_lib0clear(&___nl__im__124);
#line 233
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__120, ___get_global_const(280)));
#line 233
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__125, ___ref___im__1));
#line 233
c_rt_lib0clear(&___nl__im__125);
#line 234
c_rt_lib0move(&___nl__im__126,___get_global_const(847));
#line 234
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__126));
#line 234
c_rt_lib0clear(&___nl__im__126);
#line 235
goto label_1;
#line 235
label_15:
#line 235
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(246)));
#line 235
c_rt_lib0copy(&___nl__im__127, ___nl__im__128);
#line 236
c_rt_lib0delete(generator_pm_priv0print_set_at_idx(___nl__im__127, ___ref___im__1));
#line 237
goto label_1;
#line 237
label_16:
#line 237
c_rt_lib0move(&___nl__im__130, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(247)));
#line 237
c_rt_lib0copy(&___nl__im__129, ___nl__im__130);
#line 238
c_rt_lib0move(&___nl__im__131, c_rt_lib0array_mk(0));
#line 238
nl_die_arg(___nl__im__131);
#line 239
goto label_1;
#line 239
label_17:
#line 239
c_rt_lib0move(&___nl__im__133, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(248)));
#line 239
c_rt_lib0copy(&___nl__im__132, ___nl__im__133);
#line 240
c_rt_lib0move(&___nl__im__134, c_rt_lib0array_mk(0));
#line 240
nl_die_arg(___nl__im__134);
#line 241
goto label_1;
#line 241
label_18:
#line 241
c_rt_lib0move(&___nl__im__136, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(249)));
#line 241
c_rt_lib0copy(&___nl__im__135, ___nl__im__136);
#line 242
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_const(230)));
#line 242
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__137, ___ref___im__1));
#line 242
c_rt_lib0clear(&___nl__im__137);
#line 243
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_const(76)));
#line 243
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__138, ___ref___im__1));
#line 243
c_rt_lib0clear(&___nl__im__138);
#line 244
c_rt_lib0move(&___nl__im__141,___get_global_const(861));
#line 244
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_const(377)));
#line 244
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__142));
#line 244
c_rt_lib0clear(&___nl__im__141);
#line 244
c_rt_lib0clear(&___nl__im__142);
#line 244
c_rt_lib0move(&___nl__im__143,___get_global_const(862));
#line 244
c_rt_lib0move(&___nl__im__139, c_rt_lib0concat_new(___nl__im__140, ___nl__im__143));
#line 244
c_rt_lib0clear(&___nl__im__140);
#line 244
c_rt_lib0clear(&___nl__im__141);
#line 244
c_rt_lib0clear(&___nl__im__142);
#line 244
c_rt_lib0clear(&___nl__im__143);
#line 244
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__139));
#line 244
c_rt_lib0clear(&___nl__im__139);
#line 244
c_rt_lib0clear(&___nl__im__140);
#line 244
c_rt_lib0clear(&___nl__im__141);
#line 244
c_rt_lib0clear(&___nl__im__142);
#line 244
c_rt_lib0clear(&___nl__im__143);
#line 245
goto label_1;
#line 245
label_19:
#line 245
c_rt_lib0move(&___nl__im__145, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(250)));
#line 245
c_rt_lib0copy(&___nl__im__144, ___nl__im__145);
#line 246
c_rt_lib0delete(generator_pm_priv0print_set_val(___nl__im__144, ___ref___im__1));
#line 247
goto label_1;
#line 247
label_20:
#line 247
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(251)));
#line 247
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 248
c_rt_lib0delete(generator_pm_priv0print_ov_mk(___nl__im__146, ___ref___im__1));
#line 249
goto label_1;
#line 249
label_21:
#line 249
c_rt_lib0move(&___nl__im__149, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(253)));
#line 249
___nl__int__148 = getIntFromImm(___nl__im__149);
#line 250
c_rt_lib0move(&___nl__im__152,___get_global_const(543));
#line 250
c_rt_lib0move(&___nl__im__153, ptd0int_to_string(___nl__int__148));
#line 250
c_rt_lib0move(&___nl__im__151, c_rt_lib0concat_new(___nl__im__152, ___nl__im__153));
#line 250
c_rt_lib0clear(&___nl__im__152);
#line 250
c_rt_lib0clear(&___nl__im__153);
#line 250
c_rt_lib0move(&___nl__im__154,___get_global_const(492));
#line 250
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__154));
#line 250
c_rt_lib0clear(&___nl__im__151);
#line 250
c_rt_lib0clear(&___nl__im__152);
#line 250
c_rt_lib0clear(&___nl__im__153);
#line 250
c_rt_lib0clear(&___nl__im__154);
#line 250
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__150));
#line 250
c_rt_lib0clear(&___nl__im__150);
#line 250
c_rt_lib0clear(&___nl__im__151);
#line 250
c_rt_lib0clear(&___nl__im__152);
#line 250
c_rt_lib0clear(&___nl__im__153);
#line 250
c_rt_lib0clear(&___nl__im__154);
#line 251
goto label_1;
#line 251
label_22:
#line 251
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(254)));
#line 251
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 252
c_rt_lib0move(&___nl__im__157,___get_global_const(863));
#line 252
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__157));
#line 252
c_rt_lib0clear(&___nl__im__157);
#line 253
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__155, ___get_global_const(76)));
#line 253
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__158, ___ref___im__1));
#line 253
c_rt_lib0clear(&___nl__im__158);
#line 254
c_rt_lib0move(&___nl__im__159,___get_global_const(729));
#line 254
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__159));
#line 254
c_rt_lib0clear(&___nl__im__159);
#line 255
c_rt_lib0move(&___nl__im__162,___get_global_const(546));
#line 255
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__155, ___get_global_const(230)));
#line 255
___nl__int__164 = getIntFromImm(___nl__im__165);
#line 255
c_rt_lib0clear(&___nl__im__165);
#line 255
c_rt_lib0move(&___nl__im__163, ptd0int_to_string(___nl__int__164));
#line 255
//clear ___nl__int__164;
#line 255
c_rt_lib0clear(&___nl__im__165);
#line 255
c_rt_lib0move(&___nl__im__161, c_rt_lib0concat_new(___nl__im__162, ___nl__im__163));
#line 255
c_rt_lib0clear(&___nl__im__162);
#line 255
c_rt_lib0clear(&___nl__im__163);
#line 255
//clear ___nl__int__164;
#line 255
c_rt_lib0clear(&___nl__im__165);
#line 255
c_rt_lib0move(&___nl__im__166,___get_global_const(416));
#line 255
c_rt_lib0move(&___nl__im__160, c_rt_lib0concat_new(___nl__im__161, ___nl__im__166));
#line 255
c_rt_lib0clear(&___nl__im__161);
#line 255
c_rt_lib0clear(&___nl__im__162);
#line 255
c_rt_lib0clear(&___nl__im__163);
#line 255
//clear ___nl__int__164;
#line 255
c_rt_lib0clear(&___nl__im__165);
#line 255
c_rt_lib0clear(&___nl__im__166);
#line 255
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__160));
#line 255
c_rt_lib0clear(&___nl__im__160);
#line 255
c_rt_lib0clear(&___nl__im__161);
#line 255
c_rt_lib0clear(&___nl__im__162);
#line 255
c_rt_lib0clear(&___nl__im__163);
#line 255
//clear ___nl__int__164;
#line 255
c_rt_lib0clear(&___nl__im__165);
#line 255
c_rt_lib0clear(&___nl__im__166);
#line 256
c_rt_lib0move(&___nl__im__167,___get_global_const(296));
#line 256
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__167));
#line 256
c_rt_lib0clear(&___nl__im__167);
#line 257
goto label_1;
#line 257
label_23:
#line 257
c_rt_lib0move(&___nl__im__169, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(255)));
#line 257
___nl__int__168 = getIntFromImm(___nl__im__169);
#line 258
c_rt_lib0move(&___nl__im__172,___get_global_const(546));
#line 258
c_rt_lib0move(&___nl__im__173, ptd0int_to_string(___nl__int__168));
#line 258
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__173));
#line 258
c_rt_lib0clear(&___nl__im__172);
#line 258
c_rt_lib0clear(&___nl__im__173);
#line 258
c_rt_lib0move(&___nl__im__174,___get_global_const(416));
#line 258
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__174));
#line 258
c_rt_lib0clear(&___nl__im__171);
#line 258
c_rt_lib0clear(&___nl__im__172);
#line 258
c_rt_lib0clear(&___nl__im__173);
#line 258
c_rt_lib0clear(&___nl__im__174);
#line 258
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__170));
#line 258
c_rt_lib0clear(&___nl__im__170);
#line 258
c_rt_lib0clear(&___nl__im__171);
#line 258
c_rt_lib0clear(&___nl__im__172);
#line 258
c_rt_lib0clear(&___nl__im__173);
#line 258
c_rt_lib0clear(&___nl__im__174);
#line 259
goto label_1;
#line 259
label_24:
#line 259
c_rt_lib0move(&___nl__im__176, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(256)));
#line 259
c_rt_lib0copy(&___nl__im__175, ___nl__im__176);
#line 260
c_rt_lib0move(&___nl__im__177,___get_global_const(864));
#line 260
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__177));
#line 260
c_rt_lib0clear(&___nl__im__177);
#line 261
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__175, ___ref___im__1));
#line 262
c_rt_lib0move(&___nl__im__178,___get_global_const(472));
#line 262
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__178));
#line 262
c_rt_lib0clear(&___nl__im__178);
#line 263
goto label_1;
#line 263
label_25:
#line 263
c_rt_lib0move(&___nl__im__180, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(257)));
#line 263
c_rt_lib0copy(&___nl__im__179, ___nl__im__180);
#line 264
c_rt_lib0move(&___nl__im__181, c_rt_lib0array_mk(0));
#line 264
nl_die_arg(___nl__im__181);
#line 265
goto label_1;
#line 265
label_26:
#line 265
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(258)));
#line 265
c_rt_lib0copy(&___nl__im__182, ___nl__im__183);
#line 266
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_mk(0));
#line 266
nl_die_arg(___nl__im__184);
#line 267
goto label_1;
#line 267
label_27:
#line 267
c_rt_lib0move(&___nl__im__186, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(259)));
#line 267
c_rt_lib0copy(&___nl__im__185, ___nl__im__186);
#line 268
c_rt_lib0move(&___nl__im__187, c_rt_lib0array_mk(0));
#line 268
nl_die_arg(___nl__im__187);
#line 269
goto label_1;
#line 269
label_28:
#line 269
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(260)));
#line 269
c_rt_lib0copy(&___nl__im__188, ___nl__im__189);
#line 270
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(0));
#line 270
nl_die_arg(___nl__im__190);
#line 271
goto label_1;
#line 271
label_29:
#line 271
c_rt_lib0move(&___nl__im__192, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(261)));
#line 271
c_rt_lib0copy(&___nl__im__191, ___nl__im__192);
#line 272
c_rt_lib0move(&___nl__im__193, c_rt_lib0array_mk(0));
#line 272
nl_die_arg(___nl__im__193);
#line 273
goto label_1;
#line 273
label_30:
#line 273
c_rt_lib0move(&___nl__im__195, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(262)));
#line 273
c_rt_lib0copy(&___nl__im__194, ___nl__im__195);
#line 274
c_rt_lib0move(&___nl__im__196, c_rt_lib0array_mk(0));
#line 274
nl_die_arg(___nl__im__196);
#line 275
goto label_1;
#line 275
label_31:
#line 275
c_rt_lib0move(&___nl__im__198, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(263)));
#line 275
c_rt_lib0copy(&___nl__im__197, ___nl__im__198);
#line 276
c_rt_lib0move(&___nl__im__199, c_rt_lib0array_mk(0));
#line 276
nl_die_arg(___nl__im__199);
#line 277
goto label_1;
#line 277
label_32:
#line 277
c_rt_lib0move(&___nl__im__201, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(264)));
#line 277
c_rt_lib0copy(&___nl__im__200, ___nl__im__201);
#line 278
c_rt_lib0move(&___nl__im__202, c_rt_lib0array_mk(0));
#line 278
nl_die_arg(___nl__im__202);
#line 279
goto label_1;
#line 279
label_33:
#line 279
c_rt_lib0move(&___nl__im__204, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(265)));
#line 279
c_rt_lib0copy(&___nl__im__203, ___nl__im__204);
#line 280
c_rt_lib0move(&___nl__im__205, c_rt_lib0array_mk(0));
#line 280
nl_die_arg(___nl__im__205);
#line 281
goto label_1;
#line 281
label_34:
#line 281
c_rt_lib0move(&___nl__im__207, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(266)));
#line 281
c_rt_lib0copy(&___nl__im__206, ___nl__im__207);
#line 282
c_rt_lib0move(&___nl__im__208, c_rt_lib0array_mk(0));
#line 282
nl_die_arg(___nl__im__208);
#line 283
goto label_1;
#line 283
label_35:
#line 283
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(267)));
#line 283
c_rt_lib0copy(&___nl__im__209, ___nl__im__210);
#line 284
c_rt_lib0move(&___nl__im__211, c_rt_lib0array_mk(0));
#line 284
nl_die_arg(___nl__im__211);
#line 285
goto label_1;
#line 285
label_36:
#line 285
c_rt_lib0move(&___nl__im__213, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(268)));
#line 285
c_rt_lib0copy(&___nl__im__212, ___nl__im__213);
#line 286
c_rt_lib0move(&___nl__im__214, c_rt_lib0array_mk(0));
#line 286
nl_die_arg(___nl__im__214);
#line 287
goto label_1;
#line 287
label_37:
#line 287
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(269)));
#line 287
c_rt_lib0copy(&___nl__im__215, ___nl__im__216);
#line 288
c_rt_lib0move(&___nl__im__217, c_rt_lib0array_mk(0));
#line 288
nl_die_arg(___nl__im__217);
#line 289
goto label_1;
#line 289
label_1:
#line 290
c_rt_lib0move(&___nl__im__218, string0lf());
#line 290
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__218));
#line 290
c_rt_lib0clear(&___nl__im__218);
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
c_rt_lib0clear(&___nl__im__2);
#line 290
c_rt_lib0clear(&___nl__im__3);
#line 290
c_rt_lib0clear(&___nl__im__4);
#line 290
c_rt_lib0clear(&___nl__im__5);
#line 290
//clear ___nl__int__6;
#line 290
c_rt_lib0clear(&___nl__im__7);
#line 290
c_rt_lib0clear(&___nl__im__8);
#line 290
c_rt_lib0clear(&___nl__im__9);
#line 290
c_rt_lib0clear(&___nl__im__10);
#line 290
c_rt_lib0clear(&___nl__im__11);
#line 290
c_rt_lib0clear(&___nl__im__12);
#line 290
//clear ___nl__bool__13;
#line 290
c_rt_lib0clear(&___nl__im__14);
#line 290
c_rt_lib0clear(&___nl__im__15);
#line 290
c_rt_lib0clear(&___nl__im__16);
#line 290
c_rt_lib0clear(&___nl__im__17);
#line 290
c_rt_lib0clear(&___nl__im__18);
#line 290
//clear ___nl__int__19;
#line 290
c_rt_lib0clear(&___nl__im__20);
#line 290
c_rt_lib0clear(&___nl__im__21);
#line 290
//clear ___nl__int__22;
#line 290
//clear ___nl__int__23;
#line 290
//clear ___nl__int__24;
#line 290
//clear ___nl__bool__25;
#line 290
//clear ___nl__int__26;
#line 290
c_rt_lib0clear(&___nl__im__27);
#line 290
//clear ___nl__bool__28;
#line 290
//clear ___nl__int__29;
#line 290
//clear ___nl__int__30;
#line 290
c_rt_lib0clear(&___nl__im__31);
#line 290
//clear ___nl__int__32;
#line 290
c_rt_lib0clear(&___nl__im__33);
#line 290
c_rt_lib0clear(&___nl__im__34);
#line 290
c_rt_lib0clear(&___nl__im__35);
#line 290
c_rt_lib0clear(&___nl__im__36);
#line 290
c_rt_lib0clear(&___nl__im__37);
#line 290
c_rt_lib0clear(&___nl__im__38);
#line 290
c_rt_lib0clear(&___nl__im__39);
#line 290
//clear ___nl__int__40;
#line 290
//clear ___nl__int__41;
#line 290
//clear ___nl__int__42;
#line 290
//clear ___nl__bool__43;
#line 290
//clear ___nl__int__44;
#line 290
c_rt_lib0clear(&___nl__im__45);
#line 290
c_rt_lib0clear(&___nl__im__46);
#line 290
c_rt_lib0clear(&___nl__im__47);
#line 290
c_rt_lib0clear(&___nl__im__48);
#line 290
c_rt_lib0clear(&___nl__im__49);
#line 290
c_rt_lib0clear(&___nl__im__50);
#line 290
c_rt_lib0clear(&___nl__im__51);
#line 290
c_rt_lib0clear(&___nl__im__52);
#line 290
c_rt_lib0clear(&___nl__im__53);
#line 290
c_rt_lib0clear(&___nl__im__54);
#line 290
c_rt_lib0clear(&___nl__im__55);
#line 290
c_rt_lib0clear(&___nl__im__56);
#line 290
c_rt_lib0clear(&___nl__im__57);
#line 290
c_rt_lib0clear(&___nl__im__58);
#line 290
c_rt_lib0clear(&___nl__im__59);
#line 290
c_rt_lib0clear(&___nl__im__60);
#line 290
c_rt_lib0clear(&___nl__im__61);
#line 290
c_rt_lib0clear(&___nl__im__62);
#line 290
c_rt_lib0clear(&___nl__im__63);
#line 290
c_rt_lib0clear(&___nl__im__64);
#line 290
c_rt_lib0clear(&___nl__im__65);
#line 290
c_rt_lib0clear(&___nl__im__66);
#line 290
c_rt_lib0clear(&___nl__im__67);
#line 290
c_rt_lib0clear(&___nl__im__68);
#line 290
c_rt_lib0clear(&___nl__im__69);
#line 290
c_rt_lib0clear(&___nl__im__70);
#line 290
c_rt_lib0clear(&___nl__im__71);
#line 290
c_rt_lib0clear(&___nl__im__72);
#line 290
c_rt_lib0clear(&___nl__im__73);
#line 290
c_rt_lib0clear(&___nl__im__74);
#line 290
c_rt_lib0clear(&___nl__im__75);
#line 290
c_rt_lib0clear(&___nl__im__76);
#line 290
c_rt_lib0clear(&___nl__im__77);
#line 290
c_rt_lib0clear(&___nl__im__78);
#line 290
c_rt_lib0clear(&___nl__im__79);
#line 290
c_rt_lib0clear(&___nl__im__80);
#line 290
c_rt_lib0clear(&___nl__im__81);
#line 290
c_rt_lib0clear(&___nl__im__82);
#line 290
c_rt_lib0clear(&___nl__im__83);
#line 290
c_rt_lib0clear(&___nl__im__84);
#line 290
c_rt_lib0clear(&___nl__im__85);
#line 290
c_rt_lib0clear(&___nl__im__86);
#line 290
c_rt_lib0clear(&___nl__im__87);
#line 290
//clear ___nl__bool__88;
#line 290
c_rt_lib0clear(&___nl__im__89);
#line 290
c_rt_lib0clear(&___nl__im__90);
#line 290
c_rt_lib0clear(&___nl__im__91);
#line 290
c_rt_lib0clear(&___nl__im__92);
#line 290
c_rt_lib0clear(&___nl__im__93);
#line 290
c_rt_lib0clear(&___nl__im__94);
#line 290
c_rt_lib0clear(&___nl__im__95);
#line 290
c_rt_lib0clear(&___nl__im__96);
#line 290
c_rt_lib0clear(&___nl__im__97);
#line 290
c_rt_lib0clear(&___nl__im__98);
#line 290
c_rt_lib0clear(&___nl__im__99);
#line 290
c_rt_lib0clear(&___nl__im__100);
#line 290
c_rt_lib0clear(&___nl__im__101);
#line 290
c_rt_lib0clear(&___nl__im__102);
#line 290
c_rt_lib0clear(&___nl__im__103);
#line 290
c_rt_lib0clear(&___nl__im__104);
#line 290
c_rt_lib0clear(&___nl__im__105);
#line 290
c_rt_lib0clear(&___nl__im__106);
#line 290
//clear ___nl__bool__107;
#line 290
//clear ___nl__bool__108;
#line 290
c_rt_lib0clear(&___nl__im__109);
#line 290
c_rt_lib0clear(&___nl__im__110);
#line 290
c_rt_lib0clear(&___nl__im__111);
#line 290
c_rt_lib0clear(&___nl__im__112);
#line 290
c_rt_lib0clear(&___nl__im__113);
#line 290
c_rt_lib0clear(&___nl__im__114);
#line 290
c_rt_lib0clear(&___nl__im__115);
#line 290
c_rt_lib0clear(&___nl__im__116);
#line 290
c_rt_lib0clear(&___nl__im__117);
#line 290
c_rt_lib0clear(&___nl__im__118);
#line 290
c_rt_lib0clear(&___nl__im__119);
#line 290
c_rt_lib0clear(&___nl__im__120);
#line 290
c_rt_lib0clear(&___nl__im__121);
#line 290
c_rt_lib0clear(&___nl__im__122);
#line 290
c_rt_lib0clear(&___nl__im__123);
#line 290
c_rt_lib0clear(&___nl__im__124);
#line 290
c_rt_lib0clear(&___nl__im__125);
#line 290
c_rt_lib0clear(&___nl__im__126);
#line 290
c_rt_lib0clear(&___nl__im__127);
#line 290
c_rt_lib0clear(&___nl__im__128);
#line 290
c_rt_lib0clear(&___nl__im__129);
#line 290
c_rt_lib0clear(&___nl__im__130);
#line 290
c_rt_lib0clear(&___nl__im__131);
#line 290
c_rt_lib0clear(&___nl__im__132);
#line 290
c_rt_lib0clear(&___nl__im__133);
#line 290
c_rt_lib0clear(&___nl__im__134);
#line 290
c_rt_lib0clear(&___nl__im__135);
#line 290
c_rt_lib0clear(&___nl__im__136);
#line 290
c_rt_lib0clear(&___nl__im__137);
#line 290
c_rt_lib0clear(&___nl__im__138);
#line 290
c_rt_lib0clear(&___nl__im__139);
#line 290
c_rt_lib0clear(&___nl__im__140);
#line 290
c_rt_lib0clear(&___nl__im__141);
#line 290
c_rt_lib0clear(&___nl__im__142);
#line 290
c_rt_lib0clear(&___nl__im__143);
#line 290
c_rt_lib0clear(&___nl__im__144);
#line 290
c_rt_lib0clear(&___nl__im__145);
#line 290
c_rt_lib0clear(&___nl__im__146);
#line 290
c_rt_lib0clear(&___nl__im__147);
#line 290
//clear ___nl__int__148;
#line 290
c_rt_lib0clear(&___nl__im__149);
#line 290
c_rt_lib0clear(&___nl__im__150);
#line 290
c_rt_lib0clear(&___nl__im__151);
#line 290
c_rt_lib0clear(&___nl__im__152);
#line 290
c_rt_lib0clear(&___nl__im__153);
#line 290
c_rt_lib0clear(&___nl__im__154);
#line 290
c_rt_lib0clear(&___nl__im__155);
#line 290
c_rt_lib0clear(&___nl__im__156);
#line 290
c_rt_lib0clear(&___nl__im__157);
#line 290
c_rt_lib0clear(&___nl__im__158);
#line 290
c_rt_lib0clear(&___nl__im__159);
#line 290
c_rt_lib0clear(&___nl__im__160);
#line 290
c_rt_lib0clear(&___nl__im__161);
#line 290
c_rt_lib0clear(&___nl__im__162);
#line 290
c_rt_lib0clear(&___nl__im__163);
#line 290
//clear ___nl__int__164;
#line 290
c_rt_lib0clear(&___nl__im__165);
#line 290
c_rt_lib0clear(&___nl__im__166);
#line 290
c_rt_lib0clear(&___nl__im__167);
#line 290
//clear ___nl__int__168;
#line 290
c_rt_lib0clear(&___nl__im__169);
#line 290
c_rt_lib0clear(&___nl__im__170);
#line 290
c_rt_lib0clear(&___nl__im__171);
#line 290
c_rt_lib0clear(&___nl__im__172);
#line 290
c_rt_lib0clear(&___nl__im__173);
#line 290
c_rt_lib0clear(&___nl__im__174);
#line 290
c_rt_lib0clear(&___nl__im__175);
#line 290
c_rt_lib0clear(&___nl__im__176);
#line 290
c_rt_lib0clear(&___nl__im__177);
#line 290
c_rt_lib0clear(&___nl__im__178);
#line 290
c_rt_lib0clear(&___nl__im__179);
#line 290
c_rt_lib0clear(&___nl__im__180);
#line 290
c_rt_lib0clear(&___nl__im__181);
#line 290
c_rt_lib0clear(&___nl__im__182);
#line 290
c_rt_lib0clear(&___nl__im__183);
#line 290
c_rt_lib0clear(&___nl__im__184);
#line 290
c_rt_lib0clear(&___nl__im__185);
#line 290
c_rt_lib0clear(&___nl__im__186);
#line 290
c_rt_lib0clear(&___nl__im__187);
#line 290
c_rt_lib0clear(&___nl__im__188);
#line 290
c_rt_lib0clear(&___nl__im__189);
#line 290
c_rt_lib0clear(&___nl__im__190);
#line 290
c_rt_lib0clear(&___nl__im__191);
#line 290
c_rt_lib0clear(&___nl__im__192);
#line 290
c_rt_lib0clear(&___nl__im__193);
#line 290
c_rt_lib0clear(&___nl__im__194);
#line 290
c_rt_lib0clear(&___nl__im__195);
#line 290
c_rt_lib0clear(&___nl__im__196);
#line 290
c_rt_lib0clear(&___nl__im__197);
#line 290
c_rt_lib0clear(&___nl__im__198);
#line 290
c_rt_lib0clear(&___nl__im__199);
#line 290
c_rt_lib0clear(&___nl__im__200);
#line 290
c_rt_lib0clear(&___nl__im__201);
#line 290
c_rt_lib0clear(&___nl__im__202);
#line 290
c_rt_lib0clear(&___nl__im__203);
#line 290
c_rt_lib0clear(&___nl__im__204);
#line 290
c_rt_lib0clear(&___nl__im__205);
#line 290
c_rt_lib0clear(&___nl__im__206);
#line 290
c_rt_lib0clear(&___nl__im__207);
#line 290
c_rt_lib0clear(&___nl__im__208);
#line 290
c_rt_lib0clear(&___nl__im__209);
#line 290
c_rt_lib0clear(&___nl__im__210);
#line 290
c_rt_lib0clear(&___nl__im__211);
#line 290
c_rt_lib0clear(&___nl__im__212);
#line 290
c_rt_lib0clear(&___nl__im__213);
#line 290
c_rt_lib0clear(&___nl__im__214);
#line 290
c_rt_lib0clear(&___nl__im__215);
#line 290
c_rt_lib0clear(&___nl__im__216);
#line 290
c_rt_lib0clear(&___nl__im__217);
#line 290
c_rt_lib0clear(&___nl__im__218);
#line 290
return NULL;
}

ImmT  generator_pm_priv0print_call(nlasm0call_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
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
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
#line 294
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(230)));
#line 294
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__2, ___ref___im__1));
#line 294
c_rt_lib0clear(&___nl__im__2);
#line 295
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(270)));
#line 295
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 295
___nl__bool__3 = c_rt_lib0ne(___nl__im__4, ___nl__im__5);
#line 295
c_rt_lib0clear(&___nl__im__4);
#line 295
c_rt_lib0clear(&___nl__im__5);
#line 295
___nl__bool__3 = !___nl__bool__3;
#line 295
if(___nl__bool__3){ goto label_2;}
#line 296
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(270)));
#line 296
c_rt_lib0move(&___nl__im__8,___get_global_const(35));
#line 296
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 296
c_rt_lib0clear(&___nl__im__7);
#line 296
c_rt_lib0clear(&___nl__im__8);
#line 296
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__6));
#line 296
c_rt_lib0clear(&___nl__im__6);
#line 296
c_rt_lib0clear(&___nl__im__7);
#line 296
c_rt_lib0clear(&___nl__im__8);
#line 297
goto label_1;
#line 297
label_2:
#line 298
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(219)));
#line 298
c_rt_lib0move(&___nl__im__11,___get_global_const(218));
#line 298
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 298
c_rt_lib0clear(&___nl__im__10);
#line 298
c_rt_lib0clear(&___nl__im__11);
#line 298
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__9));
#line 298
c_rt_lib0clear(&___nl__im__9);
#line 298
c_rt_lib0clear(&___nl__im__10);
#line 298
c_rt_lib0clear(&___nl__im__11);
#line 299
goto label_1;
#line 299
label_1:
#line 299
//clear ___nl__bool__3;
#line 299
c_rt_lib0clear(&___nl__im__4);
#line 299
c_rt_lib0clear(&___nl__im__5);
#line 299
c_rt_lib0clear(&___nl__im__6);
#line 299
c_rt_lib0clear(&___nl__im__7);
#line 299
c_rt_lib0clear(&___nl__im__8);
#line 299
c_rt_lib0clear(&___nl__im__9);
#line 299
c_rt_lib0clear(&___nl__im__10);
#line 299
c_rt_lib0clear(&___nl__im__11);
#line 300
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(272)));
#line 300
c_rt_lib0move(&___nl__im__14,___get_global_const(427));
#line 300
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 300
c_rt_lib0clear(&___nl__im__13);
#line 300
c_rt_lib0clear(&___nl__im__14);
#line 300
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__12));
#line 300
c_rt_lib0clear(&___nl__im__12);
#line 300
c_rt_lib0clear(&___nl__im__13);
#line 300
c_rt_lib0clear(&___nl__im__14);
#line 301
___nl__int__15 = 0;
#line 302
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(118)));
#line 302
___nl__int__18 = 0;
#line 302
___nl__int__19 = 1;
#line 302
___nl__int__20 = c_rt_lib0array_len(___nl__im__16);
#line 302
label_5:
#line 302
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 302
___nl__bool__21 = ___nl__int__22;
#line 302
if(___nl__bool__21){ goto label_3;}
#line 302
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__16, ___nl__int__18));
#line 302
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 303
___nl__int__25 = 0;
#line 303
___nl__int__26 = ___nl__int__15 > ___nl__int__25;
#line 303
___nl__bool__24 = ___nl__int__26;
#line 303
//clear ___nl__int__25;
#line 303
//clear ___nl__int__26;
#line 303
___nl__bool__24 = !___nl__bool__24;
#line 303
if(___nl__bool__24){ goto label_7;}
#line 304
c_rt_lib0move(&___nl__im__27,___get_global_const(314));
#line 304
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__27));
#line 304
c_rt_lib0clear(&___nl__im__27);
#line 305
goto label_6;
#line 305
label_7:
#line 305
label_6:
#line 305
//clear ___nl__bool__24;
#line 305
//clear ___nl__int__25;
#line 305
//clear ___nl__int__26;
#line 305
c_rt_lib0clear(&___nl__im__27);
#line 306
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(231));
#line 306
if(___nl__bool__28){ goto label_9;}
#line 308
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(40));
#line 308
if(___nl__bool__28){ goto label_10;}
#line 308
c_rt_lib0move(&___nl__im__29,___get_global_const(16));
#line 308
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__17));
#line 308
nl_die_arg(___nl__im__29);
#line 306
label_9:
#line 306
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(231)));
#line 306
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 307
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__30, ___ref___im__1));
#line 308
goto label_8;
#line 308
label_10:
#line 308
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(40)));
#line 308
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 309
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__32, ___ref___im__1));
#line 310
goto label_8;
#line 310
label_8:
#line 311
___nl__int__34 = 1;
#line 311
___nl__int__15 = ___nl__int__15 + ___nl__int__34;
#line 311
//clear ___nl__int__34;
#line 311
c_rt_lib0clear(&___nl__im__17);
#line 311
label_4:
#line 312
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 312
goto label_5;
#line 312
label_3:
#line 313
c_rt_lib0move(&___nl__im__35,___get_global_const(472));
#line 313
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__35));
#line 313
c_rt_lib0clear(&___nl__im__35);
#line 313
c_rt_lib0clear(&___nl__im__0);
#line 313
c_rt_lib0clear(&___nl__im__2);
#line 313
//clear ___nl__bool__3;
#line 313
c_rt_lib0clear(&___nl__im__4);
#line 313
c_rt_lib0clear(&___nl__im__5);
#line 313
c_rt_lib0clear(&___nl__im__6);
#line 313
c_rt_lib0clear(&___nl__im__7);
#line 313
c_rt_lib0clear(&___nl__im__8);
#line 313
c_rt_lib0clear(&___nl__im__9);
#line 313
c_rt_lib0clear(&___nl__im__10);
#line 313
c_rt_lib0clear(&___nl__im__11);
#line 313
c_rt_lib0clear(&___nl__im__12);
#line 313
c_rt_lib0clear(&___nl__im__13);
#line 313
c_rt_lib0clear(&___nl__im__14);
#line 313
//clear ___nl__int__15;
#line 313
c_rt_lib0clear(&___nl__im__16);
#line 313
c_rt_lib0clear(&___nl__im__17);
#line 313
//clear ___nl__int__18;
#line 313
//clear ___nl__int__19;
#line 313
//clear ___nl__int__20;
#line 313
//clear ___nl__bool__21;
#line 313
//clear ___nl__int__22;
#line 313
c_rt_lib0clear(&___nl__im__23);
#line 313
//clear ___nl__bool__24;
#line 313
//clear ___nl__int__25;
#line 313
//clear ___nl__int__26;
#line 313
c_rt_lib0clear(&___nl__im__27);
#line 313
//clear ___nl__bool__28;
#line 313
c_rt_lib0clear(&___nl__im__29);
#line 313
c_rt_lib0clear(&___nl__im__30);
#line 313
c_rt_lib0clear(&___nl__im__31);
#line 313
c_rt_lib0clear(&___nl__im__32);
#line 313
c_rt_lib0clear(&___nl__im__33);
#line 313
//clear ___nl__int__34;
#line 313
c_rt_lib0clear(&___nl__im__35);
#line 313
return NULL;
}

ImmT  generator_pm_priv0print_una_op(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 318
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(230)));
#line 318
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__2, ___ref___im__1));
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 319
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 319
c_rt_lib0move(&___nl__im__5,___get_global_const(341));
#line 319
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 319
c_rt_lib0clear(&___nl__im__4);
#line 319
c_rt_lib0clear(&___nl__im__5);
#line 319
c_rt_lib0clear(&___nl__im__4);
#line 319
c_rt_lib0clear(&___nl__im__5);
#line 319
___nl__bool__3 = !___nl__bool__3;
#line 319
if(___nl__bool__3){ goto label_2;}
#line 319
c_rt_lib0move(&___nl__im__6,___get_global_const(865));
#line 319
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__6));
#line 319
c_rt_lib0clear(&___nl__im__6);
#line 319
goto label_1;
#line 319
label_2:
#line 319
label_1:
#line 319
//clear ___nl__bool__3;
#line 319
c_rt_lib0clear(&___nl__im__4);
#line 319
c_rt_lib0clear(&___nl__im__5);
#line 319
c_rt_lib0clear(&___nl__im__6);
#line 320
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 320
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__7));
#line 320
c_rt_lib0clear(&___nl__im__7);
#line 321
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 321
c_rt_lib0move(&___nl__im__10,___get_global_const(341));
#line 321
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 321
c_rt_lib0clear(&___nl__im__9);
#line 321
c_rt_lib0clear(&___nl__im__10);
#line 321
c_rt_lib0clear(&___nl__im__9);
#line 321
c_rt_lib0clear(&___nl__im__10);
#line 321
___nl__bool__8 = !___nl__bool__8;
#line 321
if(___nl__bool__8){ goto label_4;}
#line 321
c_rt_lib0move(&___nl__im__11,___get_global_const(866));
#line 321
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__11));
#line 321
c_rt_lib0clear(&___nl__im__11);
#line 321
goto label_3;
#line 321
label_4:
#line 321
label_3:
#line 321
//clear ___nl__bool__8;
#line 321
c_rt_lib0clear(&___nl__im__9);
#line 321
c_rt_lib0clear(&___nl__im__10);
#line 321
c_rt_lib0clear(&___nl__im__11);
#line 322
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 322
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__12, ___ref___im__1));
#line 322
c_rt_lib0clear(&___nl__im__12);
#line 323
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 323
c_rt_lib0move(&___nl__im__15,___get_global_const(341));
#line 323
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 323
c_rt_lib0clear(&___nl__im__14);
#line 323
c_rt_lib0clear(&___nl__im__15);
#line 323
c_rt_lib0clear(&___nl__im__14);
#line 323
c_rt_lib0clear(&___nl__im__15);
#line 323
___nl__bool__13 = !___nl__bool__13;
#line 323
if(___nl__bool__13){ goto label_6;}
#line 323
c_rt_lib0move(&___nl__im__16,___get_global_const(723));
#line 323
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__16));
#line 323
c_rt_lib0clear(&___nl__im__16);
#line 323
goto label_5;
#line 323
label_6:
#line 323
label_5:
#line 323
//clear ___nl__bool__13;
#line 323
c_rt_lib0clear(&___nl__im__14);
#line 323
c_rt_lib0clear(&___nl__im__15);
#line 323
c_rt_lib0clear(&___nl__im__16);
#line 324
c_rt_lib0move(&___nl__im__17,___get_global_const(416));
#line 324
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__17));
#line 324
c_rt_lib0clear(&___nl__im__17);
#line 324
c_rt_lib0clear(&___nl__im__0);
#line 324
c_rt_lib0clear(&___nl__im__2);
#line 324
//clear ___nl__bool__3;
#line 324
c_rt_lib0clear(&___nl__im__4);
#line 324
c_rt_lib0clear(&___nl__im__5);
#line 324
c_rt_lib0clear(&___nl__im__6);
#line 324
c_rt_lib0clear(&___nl__im__7);
#line 324
//clear ___nl__bool__8;
#line 324
c_rt_lib0clear(&___nl__im__9);
#line 324
c_rt_lib0clear(&___nl__im__10);
#line 324
c_rt_lib0clear(&___nl__im__11);
#line 324
c_rt_lib0clear(&___nl__im__12);
#line 324
//clear ___nl__bool__13;
#line 324
c_rt_lib0clear(&___nl__im__14);
#line 324
c_rt_lib0clear(&___nl__im__15);
#line 324
c_rt_lib0clear(&___nl__im__16);
#line 324
c_rt_lib0clear(&___nl__im__17);
#line 324
return NULL;
}

ImmT  generator_pm_priv0print_bin_op(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
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
#line 333
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(230)));
#line 333
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__2, ___ref___im__1));
#line 333
c_rt_lib0clear(&___nl__im__2);
#line 334
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 334
c_rt_lib0move(&___nl__im__12,___get_global_const(365));
#line 334
___nl__bool__3 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
if(___nl__bool__3){ goto label_9;}
#line 334
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 334
c_rt_lib0move(&___nl__im__14,___get_global_const(355));
#line 334
___nl__bool__3 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__14);
#line 334
label_9:
#line 334
//clear ___nl__bool__10;
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__14);
#line 334
if(___nl__bool__3){ goto label_8;}
#line 334
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 334
c_rt_lib0move(&___nl__im__16,___get_global_const(357));
#line 334
___nl__bool__3 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 334
c_rt_lib0clear(&___nl__im__15);
#line 334
c_rt_lib0clear(&___nl__im__16);
#line 334
label_8:
#line 334
//clear ___nl__bool__9;
#line 334
//clear ___nl__bool__10;
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__14);
#line 334
c_rt_lib0clear(&___nl__im__15);
#line 334
c_rt_lib0clear(&___nl__im__16);
#line 334
if(___nl__bool__3){ goto label_7;}
#line 334
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 334
c_rt_lib0move(&___nl__im__18,___get_global_const(363));
#line 334
___nl__bool__3 = c_rt_lib0eq(___nl__im__17, ___nl__im__18);
#line 334
c_rt_lib0clear(&___nl__im__17);
#line 334
c_rt_lib0clear(&___nl__im__18);
#line 334
label_7:
#line 334
//clear ___nl__bool__8;
#line 334
//clear ___nl__bool__9;
#line 334
//clear ___nl__bool__10;
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__14);
#line 334
c_rt_lib0clear(&___nl__im__15);
#line 334
c_rt_lib0clear(&___nl__im__16);
#line 334
c_rt_lib0clear(&___nl__im__17);
#line 334
c_rt_lib0clear(&___nl__im__18);
#line 334
if(___nl__bool__3){ goto label_6;}
#line 334
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 334
c_rt_lib0move(&___nl__im__20,___get_global_const(359));
#line 334
___nl__bool__3 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 334
c_rt_lib0clear(&___nl__im__19);
#line 334
c_rt_lib0clear(&___nl__im__20);
#line 334
label_6:
#line 334
//clear ___nl__bool__7;
#line 334
//clear ___nl__bool__8;
#line 334
//clear ___nl__bool__9;
#line 334
//clear ___nl__bool__10;
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__14);
#line 334
c_rt_lib0clear(&___nl__im__15);
#line 334
c_rt_lib0clear(&___nl__im__16);
#line 334
c_rt_lib0clear(&___nl__im__17);
#line 334
c_rt_lib0clear(&___nl__im__18);
#line 334
c_rt_lib0clear(&___nl__im__19);
#line 334
c_rt_lib0clear(&___nl__im__20);
#line 334
if(___nl__bool__3){ goto label_5;}
#line 335
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 335
c_rt_lib0move(&___nl__im__22,___get_global_const(347));
#line 335
___nl__bool__3 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
label_5:
#line 335
//clear ___nl__bool__6;
#line 335
//clear ___nl__bool__7;
#line 335
//clear ___nl__bool__8;
#line 335
//clear ___nl__bool__9;
#line 335
//clear ___nl__bool__10;
#line 335
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0clear(&___nl__im__12);
#line 335
c_rt_lib0clear(&___nl__im__13);
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0clear(&___nl__im__15);
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
c_rt_lib0clear(&___nl__im__19);
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
if(___nl__bool__3){ goto label_4;}
#line 335
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 335
c_rt_lib0move(&___nl__im__24,___get_global_const(361));
#line 335
___nl__bool__3 = c_rt_lib0eq(___nl__im__23, ___nl__im__24);
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 335
c_rt_lib0clear(&___nl__im__24);
#line 335
label_4:
#line 335
//clear ___nl__bool__5;
#line 335
//clear ___nl__bool__6;
#line 335
//clear ___nl__bool__7;
#line 335
//clear ___nl__bool__8;
#line 335
//clear ___nl__bool__9;
#line 335
//clear ___nl__bool__10;
#line 335
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0clear(&___nl__im__12);
#line 335
c_rt_lib0clear(&___nl__im__13);
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0clear(&___nl__im__15);
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
c_rt_lib0clear(&___nl__im__19);
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 335
c_rt_lib0clear(&___nl__im__24);
#line 335
if(___nl__bool__3){ goto label_3;}
#line 335
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 335
c_rt_lib0move(&___nl__im__26,___get_global_const(348));
#line 335
___nl__bool__3 = c_rt_lib0eq(___nl__im__25, ___nl__im__26);
#line 335
c_rt_lib0clear(&___nl__im__25);
#line 335
c_rt_lib0clear(&___nl__im__26);
#line 335
label_3:
#line 335
//clear ___nl__bool__4;
#line 335
//clear ___nl__bool__5;
#line 335
//clear ___nl__bool__6;
#line 335
//clear ___nl__bool__7;
#line 335
//clear ___nl__bool__8;
#line 335
//clear ___nl__bool__9;
#line 335
//clear ___nl__bool__10;
#line 335
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0clear(&___nl__im__12);
#line 335
c_rt_lib0clear(&___nl__im__13);
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0clear(&___nl__im__15);
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
c_rt_lib0clear(&___nl__im__19);
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 335
c_rt_lib0clear(&___nl__im__24);
#line 335
c_rt_lib0clear(&___nl__im__25);
#line 335
c_rt_lib0clear(&___nl__im__26);
#line 335
___nl__bool__3 = !___nl__bool__3;
#line 335
if(___nl__bool__3){ goto label_2;}
#line 336
c_rt_lib0move(&___nl__im__27,___get_global_const(865));
#line 336
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__27));
#line 336
c_rt_lib0clear(&___nl__im__27);
#line 337
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(278)));
#line 337
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__28, ___ref___im__1));
#line 337
c_rt_lib0clear(&___nl__im__28);
#line 338
c_rt_lib0move(&___nl__im__31,___get_global_const(436));
#line 338
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 338
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 338
c_rt_lib0clear(&___nl__im__31);
#line 338
c_rt_lib0clear(&___nl__im__32);
#line 338
c_rt_lib0move(&___nl__im__33,___get_global_const(436));
#line 338
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__33));
#line 338
c_rt_lib0clear(&___nl__im__30);
#line 338
c_rt_lib0clear(&___nl__im__31);
#line 338
c_rt_lib0clear(&___nl__im__32);
#line 338
c_rt_lib0clear(&___nl__im__33);
#line 338
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__29));
#line 338
c_rt_lib0clear(&___nl__im__29);
#line 338
c_rt_lib0clear(&___nl__im__30);
#line 338
c_rt_lib0clear(&___nl__im__31);
#line 338
c_rt_lib0clear(&___nl__im__32);
#line 338
c_rt_lib0clear(&___nl__im__33);
#line 339
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(279)));
#line 339
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__34, ___ref___im__1));
#line 339
c_rt_lib0clear(&___nl__im__34);
#line 340
c_rt_lib0move(&___nl__im__35,___get_global_const(472));
#line 340
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__35));
#line 340
c_rt_lib0clear(&___nl__im__35);
#line 341
goto label_1;
#line 341
label_2:
#line 342
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(278)));
#line 342
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__36, ___ref___im__1));
#line 342
c_rt_lib0clear(&___nl__im__36);
#line 343
c_rt_lib0move(&___nl__im__39,___get_global_const(436));
#line 343
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(516)));
#line 343
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__40));
#line 343
c_rt_lib0clear(&___nl__im__39);
#line 343
c_rt_lib0clear(&___nl__im__40);
#line 343
c_rt_lib0move(&___nl__im__41,___get_global_const(436));
#line 343
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__41));
#line 343
c_rt_lib0clear(&___nl__im__38);
#line 343
c_rt_lib0clear(&___nl__im__39);
#line 343
c_rt_lib0clear(&___nl__im__40);
#line 343
c_rt_lib0clear(&___nl__im__41);
#line 343
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__37));
#line 343
c_rt_lib0clear(&___nl__im__37);
#line 343
c_rt_lib0clear(&___nl__im__38);
#line 343
c_rt_lib0clear(&___nl__im__39);
#line 343
c_rt_lib0clear(&___nl__im__40);
#line 343
c_rt_lib0clear(&___nl__im__41);
#line 344
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(279)));
#line 344
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__42, ___ref___im__1));
#line 344
c_rt_lib0clear(&___nl__im__42);
#line 345
c_rt_lib0move(&___nl__im__43,___get_global_const(416));
#line 345
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__43));
#line 345
c_rt_lib0clear(&___nl__im__43);
#line 346
goto label_1;
#line 346
label_1:
#line 346
//clear ___nl__bool__3;
#line 346
//clear ___nl__bool__4;
#line 346
//clear ___nl__bool__5;
#line 346
//clear ___nl__bool__6;
#line 346
//clear ___nl__bool__7;
#line 346
//clear ___nl__bool__8;
#line 346
//clear ___nl__bool__9;
#line 346
//clear ___nl__bool__10;
#line 346
c_rt_lib0clear(&___nl__im__11);
#line 346
c_rt_lib0clear(&___nl__im__12);
#line 346
c_rt_lib0clear(&___nl__im__13);
#line 346
c_rt_lib0clear(&___nl__im__14);
#line 346
c_rt_lib0clear(&___nl__im__15);
#line 346
c_rt_lib0clear(&___nl__im__16);
#line 346
c_rt_lib0clear(&___nl__im__17);
#line 346
c_rt_lib0clear(&___nl__im__18);
#line 346
c_rt_lib0clear(&___nl__im__19);
#line 346
c_rt_lib0clear(&___nl__im__20);
#line 346
c_rt_lib0clear(&___nl__im__21);
#line 346
c_rt_lib0clear(&___nl__im__22);
#line 346
c_rt_lib0clear(&___nl__im__23);
#line 346
c_rt_lib0clear(&___nl__im__24);
#line 346
c_rt_lib0clear(&___nl__im__25);
#line 346
c_rt_lib0clear(&___nl__im__26);
#line 346
c_rt_lib0clear(&___nl__im__27);
#line 346
c_rt_lib0clear(&___nl__im__28);
#line 346
c_rt_lib0clear(&___nl__im__29);
#line 346
c_rt_lib0clear(&___nl__im__30);
#line 346
c_rt_lib0clear(&___nl__im__31);
#line 346
c_rt_lib0clear(&___nl__im__32);
#line 346
c_rt_lib0clear(&___nl__im__33);
#line 346
c_rt_lib0clear(&___nl__im__34);
#line 346
c_rt_lib0clear(&___nl__im__35);
#line 346
c_rt_lib0clear(&___nl__im__36);
#line 346
c_rt_lib0clear(&___nl__im__37);
#line 346
c_rt_lib0clear(&___nl__im__38);
#line 346
c_rt_lib0clear(&___nl__im__39);
#line 346
c_rt_lib0clear(&___nl__im__40);
#line 346
c_rt_lib0clear(&___nl__im__41);
#line 346
c_rt_lib0clear(&___nl__im__42);
#line 346
c_rt_lib0clear(&___nl__im__43);
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
c_rt_lib0clear(&___nl__im__2);
#line 346
//clear ___nl__bool__3;
#line 346
//clear ___nl__bool__4;
#line 346
//clear ___nl__bool__5;
#line 346
//clear ___nl__bool__6;
#line 346
//clear ___nl__bool__7;
#line 346
//clear ___nl__bool__8;
#line 346
//clear ___nl__bool__9;
#line 346
//clear ___nl__bool__10;
#line 346
c_rt_lib0clear(&___nl__im__11);
#line 346
c_rt_lib0clear(&___nl__im__12);
#line 346
c_rt_lib0clear(&___nl__im__13);
#line 346
c_rt_lib0clear(&___nl__im__14);
#line 346
c_rt_lib0clear(&___nl__im__15);
#line 346
c_rt_lib0clear(&___nl__im__16);
#line 346
c_rt_lib0clear(&___nl__im__17);
#line 346
c_rt_lib0clear(&___nl__im__18);
#line 346
c_rt_lib0clear(&___nl__im__19);
#line 346
c_rt_lib0clear(&___nl__im__20);
#line 346
c_rt_lib0clear(&___nl__im__21);
#line 346
c_rt_lib0clear(&___nl__im__22);
#line 346
c_rt_lib0clear(&___nl__im__23);
#line 346
c_rt_lib0clear(&___nl__im__24);
#line 346
c_rt_lib0clear(&___nl__im__25);
#line 346
c_rt_lib0clear(&___nl__im__26);
#line 346
c_rt_lib0clear(&___nl__im__27);
#line 346
c_rt_lib0clear(&___nl__im__28);
#line 346
c_rt_lib0clear(&___nl__im__29);
#line 346
c_rt_lib0clear(&___nl__im__30);
#line 346
c_rt_lib0clear(&___nl__im__31);
#line 346
c_rt_lib0clear(&___nl__im__32);
#line 346
c_rt_lib0clear(&___nl__im__33);
#line 346
c_rt_lib0clear(&___nl__im__34);
#line 346
c_rt_lib0clear(&___nl__im__35);
#line 346
c_rt_lib0clear(&___nl__im__36);
#line 346
c_rt_lib0clear(&___nl__im__37);
#line 346
c_rt_lib0clear(&___nl__im__38);
#line 346
c_rt_lib0clear(&___nl__im__39);
#line 346
c_rt_lib0clear(&___nl__im__40);
#line 346
c_rt_lib0clear(&___nl__im__41);
#line 346
c_rt_lib0clear(&___nl__im__42);
#line 346
c_rt_lib0clear(&___nl__im__43);
#line 346
return NULL;
}

ImmT  generator_pm_priv0print_set_at_idx(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
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
#line 351
c_rt_lib0move(&___nl__im__2,___get_global_const(867));
#line 351
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__2));
#line 351
c_rt_lib0clear(&___nl__im__2);
#line 352
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 352
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__3, ___ref___im__1));
#line 352
c_rt_lib0clear(&___nl__im__3);
#line 353
c_rt_lib0move(&___nl__im__4,___get_global_const(868));
#line 353
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__4));
#line 353
c_rt_lib0clear(&___nl__im__4);
#line 354
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 354
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__5, ___ref___im__1));
#line 354
c_rt_lib0clear(&___nl__im__5);
#line 355
c_rt_lib0move(&___nl__im__6,___get_global_const(869));
#line 355
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__6));
#line 355
c_rt_lib0clear(&___nl__im__6);
#line 356
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 356
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__7, ___ref___im__1));
#line 356
c_rt_lib0clear(&___nl__im__7);
#line 357
c_rt_lib0move(&___nl__im__8,___get_global_const(870));
#line 357
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__8));
#line 357
c_rt_lib0clear(&___nl__im__8);
#line 358
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 358
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__9, ___ref___im__1));
#line 358
c_rt_lib0clear(&___nl__im__9);
#line 359
c_rt_lib0move(&___nl__im__10,___get_global_const(860));
#line 359
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__10));
#line 359
c_rt_lib0clear(&___nl__im__10);
#line 360
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(280)));
#line 360
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__11, ___ref___im__1));
#line 360
c_rt_lib0clear(&___nl__im__11);
#line 361
c_rt_lib0move(&___nl__im__12,___get_global_const(480));
#line 361
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__12));
#line 361
c_rt_lib0clear(&___nl__im__12);
#line 362
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(231)));
#line 362
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__13, ___ref___im__1));
#line 362
c_rt_lib0clear(&___nl__im__13);
#line 363
c_rt_lib0move(&___nl__im__14,___get_global_const(416));
#line 363
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__14));
#line 363
c_rt_lib0clear(&___nl__im__14);
#line 363
c_rt_lib0clear(&___nl__im__0);
#line 363
c_rt_lib0clear(&___nl__im__2);
#line 363
c_rt_lib0clear(&___nl__im__3);
#line 363
c_rt_lib0clear(&___nl__im__4);
#line 363
c_rt_lib0clear(&___nl__im__5);
#line 363
c_rt_lib0clear(&___nl__im__6);
#line 363
c_rt_lib0clear(&___nl__im__7);
#line 363
c_rt_lib0clear(&___nl__im__8);
#line 363
c_rt_lib0clear(&___nl__im__9);
#line 363
c_rt_lib0clear(&___nl__im__10);
#line 363
c_rt_lib0clear(&___nl__im__11);
#line 363
c_rt_lib0clear(&___nl__im__12);
#line 363
c_rt_lib0clear(&___nl__im__13);
#line 363
c_rt_lib0clear(&___nl__im__14);
#line 363
return NULL;
}

ImmT  generator_pm_priv0print_set_val(ImmT  ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
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
#line 368
c_rt_lib0move(&___nl__im__2,___get_global_const(871));
#line 368
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__2));
#line 368
c_rt_lib0clear(&___nl__im__2);
#line 369
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 369
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__3, ___ref___im__1));
#line 369
c_rt_lib0clear(&___nl__im__3);
#line 370
c_rt_lib0move(&___nl__im__4,___get_global_const(868));
#line 370
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__4));
#line 370
c_rt_lib0clear(&___nl__im__4);
#line 371
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 371
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__5, ___ref___im__1));
#line 371
c_rt_lib0clear(&___nl__im__5);
#line 372
c_rt_lib0move(&___nl__im__6,___get_global_const(872));
#line 372
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__6));
#line 372
c_rt_lib0clear(&___nl__im__6);
#line 373
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 373
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__7, ___ref___im__1));
#line 373
c_rt_lib0clear(&___nl__im__7);
#line 374
c_rt_lib0move(&___nl__im__8,___get_global_const(873));
#line 374
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__8));
#line 374
c_rt_lib0clear(&___nl__im__8);
#line 375
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 375
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__9, ___ref___im__1));
#line 375
c_rt_lib0clear(&___nl__im__9);
#line 376
c_rt_lib0move(&___nl__im__12,___get_global_const(861));
#line 376
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(377)));
#line 376
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 376
c_rt_lib0clear(&___nl__im__12);
#line 376
c_rt_lib0clear(&___nl__im__13);
#line 376
c_rt_lib0move(&___nl__im__14,___get_global_const(874));
#line 376
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 376
c_rt_lib0clear(&___nl__im__11);
#line 376
c_rt_lib0clear(&___nl__im__12);
#line 376
c_rt_lib0clear(&___nl__im__13);
#line 376
c_rt_lib0clear(&___nl__im__14);
#line 376
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__10));
#line 376
c_rt_lib0clear(&___nl__im__10);
#line 376
c_rt_lib0clear(&___nl__im__11);
#line 376
c_rt_lib0clear(&___nl__im__12);
#line 376
c_rt_lib0clear(&___nl__im__13);
#line 376
c_rt_lib0clear(&___nl__im__14);
#line 377
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(231)));
#line 377
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__15, ___ref___im__1));
#line 377
c_rt_lib0clear(&___nl__im__15);
#line 378
c_rt_lib0move(&___nl__im__16,___get_global_const(416));
#line 378
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__16));
#line 378
c_rt_lib0clear(&___nl__im__16);
#line 378
c_rt_lib0clear(&___nl__im__0);
#line 378
c_rt_lib0clear(&___nl__im__2);
#line 378
c_rt_lib0clear(&___nl__im__3);
#line 378
c_rt_lib0clear(&___nl__im__4);
#line 378
c_rt_lib0clear(&___nl__im__5);
#line 378
c_rt_lib0clear(&___nl__im__6);
#line 378
c_rt_lib0clear(&___nl__im__7);
#line 378
c_rt_lib0clear(&___nl__im__8);
#line 378
c_rt_lib0clear(&___nl__im__9);
#line 378
c_rt_lib0clear(&___nl__im__10);
#line 378
c_rt_lib0clear(&___nl__im__11);
#line 378
c_rt_lib0clear(&___nl__im__12);
#line 378
c_rt_lib0clear(&___nl__im__13);
#line 378
c_rt_lib0clear(&___nl__im__14);
#line 378
c_rt_lib0clear(&___nl__im__15);
#line 378
c_rt_lib0clear(&___nl__im__16);
#line 378
return NULL;
}

ImmT  generator_pm_priv0print_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
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
#line 382
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(230)));
#line 382
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__im__2, ___ref___im__1));
#line 382
c_rt_lib0clear(&___nl__im__2);
#line 383
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 383
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(332));
#line 383
c_rt_lib0clear(&___nl__im__5);
#line 383
___nl__bool__4 = !___nl__bool__3;
#line 383
if(___nl__bool__4){ goto label_3;}
#line 383
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(536)));
#line 383
c_rt_lib0move(&___nl__im__7,___get_global_const(189));
#line 383
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 383
c_rt_lib0clear(&___nl__im__6);
#line 383
c_rt_lib0clear(&___nl__im__7);
#line 383
c_rt_lib0clear(&___nl__im__6);
#line 383
c_rt_lib0clear(&___nl__im__7);
#line 383
label_3:
#line 383
//clear ___nl__bool__4;
#line 383
c_rt_lib0clear(&___nl__im__5);
#line 383
c_rt_lib0clear(&___nl__im__6);
#line 383
c_rt_lib0clear(&___nl__im__7);
#line 383
___nl__bool__3 = !___nl__bool__3;
#line 383
if(___nl__bool__3){ goto label_2;}
#line 384
c_rt_lib0move(&___nl__im__8,___get_global_const(875));
#line 384
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__8));
#line 384
c_rt_lib0clear(&___nl__im__8);
#line 385
goto label_1;
#line 385
label_2:
#line 385
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 385
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(332));
#line 385
c_rt_lib0clear(&___nl__im__10);
#line 385
___nl__bool__9 = !___nl__bool__3;
#line 385
if(___nl__bool__9){ goto label_5;}
#line 385
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(536)));
#line 385
c_rt_lib0move(&___nl__im__12,___get_global_const(190));
#line 385
___nl__bool__3 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 385
c_rt_lib0clear(&___nl__im__11);
#line 385
c_rt_lib0clear(&___nl__im__12);
#line 385
c_rt_lib0clear(&___nl__im__11);
#line 385
c_rt_lib0clear(&___nl__im__12);
#line 385
label_5:
#line 385
//clear ___nl__bool__9;
#line 385
c_rt_lib0clear(&___nl__im__10);
#line 385
c_rt_lib0clear(&___nl__im__11);
#line 385
c_rt_lib0clear(&___nl__im__12);
#line 385
___nl__bool__3 = !___nl__bool__3;
#line 385
if(___nl__bool__3){ goto label_4;}
#line 386
c_rt_lib0move(&___nl__im__13,___get_global_const(876));
#line 386
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__13));
#line 386
c_rt_lib0clear(&___nl__im__13);
#line 387
goto label_1;
#line 387
label_4:
#line 388
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(76)));
#line 388
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(281));
#line 388
if(___nl__bool__15){ goto label_7;}
#line 392
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(332));
#line 392
if(___nl__bool__15){ goto label_8;}
#line 392
c_rt_lib0move(&___nl__im__16,___get_global_const(16));
#line 392
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 392
nl_die_arg(___nl__im__16);
#line 388
label_7:
#line 388
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__14, ___get_global_const(281)));
#line 388
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 389
c_rt_lib0move(&___nl__im__21,___get_global_const(877));
#line 389
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(536)));
#line 389
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 389
c_rt_lib0clear(&___nl__im__21);
#line 389
c_rt_lib0clear(&___nl__im__22);
#line 389
c_rt_lib0move(&___nl__im__23,___get_global_const(878));
#line 389
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__23));
#line 389
c_rt_lib0clear(&___nl__im__20);
#line 389
c_rt_lib0clear(&___nl__im__21);
#line 389
c_rt_lib0clear(&___nl__im__22);
#line 389
c_rt_lib0clear(&___nl__im__23);
#line 389
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__19));
#line 389
c_rt_lib0clear(&___nl__im__19);
#line 389
c_rt_lib0clear(&___nl__im__20);
#line 389
c_rt_lib0clear(&___nl__im__21);
#line 389
c_rt_lib0clear(&___nl__im__22);
#line 389
c_rt_lib0clear(&___nl__im__23);
#line 390
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__17, ___ref___im__1));
#line 391
c_rt_lib0move(&___nl__im__24,___get_global_const(472));
#line 391
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__24));
#line 391
c_rt_lib0clear(&___nl__im__24);
#line 392
goto label_6;
#line 392
label_8:
#line 393
c_rt_lib0move(&___nl__im__27,___get_global_const(879));
#line 393
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(536)));
#line 393
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 393
c_rt_lib0clear(&___nl__im__27);
#line 393
c_rt_lib0clear(&___nl__im__28);
#line 393
c_rt_lib0move(&___nl__im__29,___get_global_const(856));
#line 393
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 393
c_rt_lib0clear(&___nl__im__26);
#line 393
c_rt_lib0clear(&___nl__im__27);
#line 393
c_rt_lib0clear(&___nl__im__28);
#line 393
c_rt_lib0clear(&___nl__im__29);
#line 393
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__25));
#line 393
c_rt_lib0clear(&___nl__im__25);
#line 393
c_rt_lib0clear(&___nl__im__26);
#line 393
c_rt_lib0clear(&___nl__im__27);
#line 393
c_rt_lib0clear(&___nl__im__28);
#line 393
c_rt_lib0clear(&___nl__im__29);
#line 394
goto label_6;
#line 394
label_6:
#line 395
goto label_1;
#line 395
label_1:
#line 395
//clear ___nl__bool__3;
#line 395
//clear ___nl__bool__4;
#line 395
c_rt_lib0clear(&___nl__im__5);
#line 395
c_rt_lib0clear(&___nl__im__6);
#line 395
c_rt_lib0clear(&___nl__im__7);
#line 395
c_rt_lib0clear(&___nl__im__8);
#line 395
//clear ___nl__bool__9;
#line 395
c_rt_lib0clear(&___nl__im__10);
#line 395
c_rt_lib0clear(&___nl__im__11);
#line 395
c_rt_lib0clear(&___nl__im__12);
#line 395
c_rt_lib0clear(&___nl__im__13);
#line 395
c_rt_lib0clear(&___nl__im__14);
#line 395
//clear ___nl__bool__15;
#line 395
c_rt_lib0clear(&___nl__im__16);
#line 395
c_rt_lib0clear(&___nl__im__17);
#line 395
c_rt_lib0clear(&___nl__im__18);
#line 395
c_rt_lib0clear(&___nl__im__19);
#line 395
c_rt_lib0clear(&___nl__im__20);
#line 395
c_rt_lib0clear(&___nl__im__21);
#line 395
c_rt_lib0clear(&___nl__im__22);
#line 395
c_rt_lib0clear(&___nl__im__23);
#line 395
c_rt_lib0clear(&___nl__im__24);
#line 395
c_rt_lib0clear(&___nl__im__25);
#line 395
c_rt_lib0clear(&___nl__im__26);
#line 395
c_rt_lib0clear(&___nl__im__27);
#line 395
c_rt_lib0clear(&___nl__im__28);
#line 395
c_rt_lib0clear(&___nl__im__29);
#line 395
c_rt_lib0clear(&___nl__im__0);
#line 395
c_rt_lib0clear(&___nl__im__2);
#line 395
//clear ___nl__bool__3;
#line 395
//clear ___nl__bool__4;
#line 395
c_rt_lib0clear(&___nl__im__5);
#line 395
c_rt_lib0clear(&___nl__im__6);
#line 395
c_rt_lib0clear(&___nl__im__7);
#line 395
c_rt_lib0clear(&___nl__im__8);
#line 395
//clear ___nl__bool__9;
#line 395
c_rt_lib0clear(&___nl__im__10);
#line 395
c_rt_lib0clear(&___nl__im__11);
#line 395
c_rt_lib0clear(&___nl__im__12);
#line 395
c_rt_lib0clear(&___nl__im__13);
#line 395
c_rt_lib0clear(&___nl__im__14);
#line 395
//clear ___nl__bool__15;
#line 395
c_rt_lib0clear(&___nl__im__16);
#line 395
c_rt_lib0clear(&___nl__im__17);
#line 395
c_rt_lib0clear(&___nl__im__18);
#line 395
c_rt_lib0clear(&___nl__im__19);
#line 395
c_rt_lib0clear(&___nl__im__20);
#line 395
c_rt_lib0clear(&___nl__im__21);
#line 395
c_rt_lib0clear(&___nl__im__22);
#line 395
c_rt_lib0clear(&___nl__im__23);
#line 395
c_rt_lib0clear(&___nl__im__24);
#line 395
c_rt_lib0clear(&___nl__im__25);
#line 395
c_rt_lib0clear(&___nl__im__26);
#line 395
c_rt_lib0clear(&___nl__im__27);
#line 395
c_rt_lib0clear(&___nl__im__28);
#line 395
c_rt_lib0clear(&___nl__im__29);
#line 395
return NULL;
}

ImmT  generator_pm_priv0print_register(nlasm0reg_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 399
c_rt_lib0move(&___nl__im__3, nlasm0is_empty(___nl__im__0));
#line 399
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__3);
#line 399
c_rt_lib0clear(&___nl__im__3);
#line 399
___nl__bool__2 = !___nl__bool__2;
#line 399
if(___nl__bool__2){ goto label_2;}
#line 399
c_rt_lib0clear(&___nl__im__0);
#line 399
//clear ___nl__bool__2;
#line 399
c_rt_lib0clear(&___nl__im__3);
#line 399
return NULL;
#line 399
goto label_1;
#line 399
label_2:
#line 399
label_1:
#line 399
//clear ___nl__bool__2;
#line 399
c_rt_lib0clear(&___nl__im__3);
#line 400
c_rt_lib0move(&___nl__im__6,___get_global_const(845));
#line 400
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(225)));
#line 400
___nl__int__8 = getIntFromImm(___nl__im__9);
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__int__8));
#line 400
//clear ___nl__int__8;
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 400
//clear ___nl__int__8;
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 400
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 400
//clear ___nl__int__8;
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0clear(&___nl__im__10);
#line 400
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__4));
#line 400
c_rt_lib0clear(&___nl__im__4);
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 400
//clear ___nl__int__8;
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0clear(&___nl__im__10);
#line 400
c_rt_lib0clear(&___nl__im__0);
#line 400
//clear ___nl__bool__2;
#line 400
c_rt_lib0clear(&___nl__im__3);
#line 400
c_rt_lib0clear(&___nl__im__4);
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 400
//clear ___nl__int__8;
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0clear(&___nl__im__10);
#line 400
return NULL;
}

ImmT  generator_pm_priv0print_register_to_assign(nlasm0reg_t0type ___nl__im__0,generator_pm0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_pm_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 404
c_rt_lib0delete(generator_pm_priv0print_register(___nl__im__0, ___ref___im__1));
#line 405
c_rt_lib0move(&___nl__im__3, nlasm0is_empty(___nl__im__0));
#line 405
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__3);
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
___nl__bool__2 = !___nl__bool__2;
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
___nl__bool__2 = !___nl__bool__2;
#line 405
if(___nl__bool__2){ goto label_2;}
#line 405
c_rt_lib0move(&___nl__im__4,___get_global_const(468));
#line 405
c_rt_lib0delete(generator_pm_priv0print(___ref___im__1, ___nl__im__4));
#line 405
c_rt_lib0clear(&___nl__im__4);
#line 405
goto label_1;
#line 405
label_2:
#line 405
label_1:
#line 405
//clear ___nl__bool__2;
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
c_rt_lib0clear(&___nl__im__4);
#line 405
c_rt_lib0clear(&___nl__im__0);
#line 405
//clear ___nl__bool__2;
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
c_rt_lib0clear(&___nl__im__4);
#line 405
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void generator_pm_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT generator_pm_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_pm_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
