
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "module_checker.h"
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nast.h"
#include "tc_types.h"
#include "tct.h"
#include "string.h"
#include "ptd_parser.h"
#include "module_checker.h"
#include "tc_types.h"
#line 1 "module_checker.nl"

static ImmT *__const__f = NULL;
void module_checker_priv0__const__init();
ImmT module_checker_priv0__const__sim(int __nr);
ImmT module_checker_priv0__const__sing(int __nr);

module_checker0ret_t0type module_checker_priv0check_module(ImmT  ___nl__im__0,module_checker0modules_t0type ___nl__im__1,module_checker0stack_t0type* ___ref___im__2,module_checker0stack_hash_t0type* ___ref___im__3,ImmT * ___ref___im__4);
ImmT  module_checker_priv0get_loop_from_stack(ImmT  ___nl__im__0,module_checker0stack_t0type ___nl__im__1);
ImmT  module_checker_priv0add_error(tc_types0errors_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  module_checker_priv0add_warning(tc_types0errors_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  module_checker_priv0set_used_function(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  module_checker_priv0check_types_imported(tct0meta_type0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1);
ImmT  module_checker_priv0get_fun_key(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  module_checker_priv0add_fun_used(ImmT  ___nl__im__0,ImmT  ___nl__im__1,module_checker0state_t0type* ___ref___im__2);
module_checker0return_t0type module_checker_priv0check_return_type(nast0variable_type_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1);
ImmT  module_checker_priv0check_type(nast0variable_type_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1);
ImmT  module_checker_priv0add_var(ImmT  ___nl__im__0,bool  ___nl__bool__1,bool  ___nl__bool__2,bool  ___nl__bool__3,module_checker0state_t0type* ___ref___im__4);
ImmT  module_checker_priv0use_var(ImmT  ___nl__im__0,ImmT  ___nl__im__1,module_checker0state_t0type* ___ref___im__2);
ImmT  module_checker_priv0add_var_dec(nast0variable_declaration_t0type ___nl__im__0,bool  ___nl__bool__1,bool  ___nl__bool__2,bool  ___nl__bool__3,module_checker0state_t0type* ___ref___im__4);
ImmT  module_checker_priv0check_cmd(nast0cmd_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1);
ImmT  module_checker_priv0check_lvalue(nast0value_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1);
ImmT  module_checker_priv0check_val(nast0value_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1);
module_checker0save_t0type module_checker_priv0save_block(module_checker0state_t0type* ___ref___im__0);
ImmT  module_checker_priv0load_block(module_checker0state_t0type* ___ref___im__0,module_checker0save_t0type ___nl__im__1);
ImmT  module_checker_priv0restore_block(module_checker0state_t0type* ___ref___im__0,module_checker0save_t0type* ___ref___im__1);
module_checker0init_checker_t0type module_checker_priv0inits(module_checker0state_t0type* ___ref___im__0);
ImmT  module_checker_priv0update_inits(module_checker0state_t0type* ___ref___im__0,module_checker0init_checker_t0type* ___ref___im__1);
ImmT  module_checker_priv0flush_inits(module_checker0state_t0type* ___ref___im__0,module_checker0init_checker_t0type* ___ref___im__1);


ImmT  module_checker0stack_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_t");
ImmT  res = module_checker0stack_t();
return res;
}
ImmT module_checker0stack_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(0);
}
ImmT module_checker0stack_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 16
c_rt_lib0move(&___nl__im__1, ptd0string());
#line 16
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
return ___nl__im__0;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
return NULL;
return NULL;

}

ImmT  module_checker0stack_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_hash_t");
ImmT  res = module_checker0stack_hash_t();
return res;
}
ImmT module_checker0stack_hash_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(1);
}
ImmT module_checker0stack_hash_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 20
c_rt_lib0move(&___nl__im__1, ptd0int());
#line 20
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
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

ImmT  module_checker0ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0ret_t");
ImmT  res = module_checker0ret_t();
return res;
}
ImmT module_checker0ret_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(2);
}
ImmT module_checker0ret_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 24
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 24
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(174), ___nl__im__2, ___get_global_string_const(83), ___nl__im__4));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
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

ImmT  module_checker0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0modules_t");
ImmT  res = module_checker0modules_t();
return res;
}
ImmT module_checker0modules_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(3);
}
ImmT module_checker0modules_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 28
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 28
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
return ___nl__im__0;
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
return NULL;
return NULL;

}

ImmT  module_checker0search_loops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0search_loops");
module_checker0modules_t0type *var0 = &(_tab[0]);
module_checker0ret_t0type res = module_checker0search_loops(*var0);
return res;
}
module_checker0ret_t0type module_checker0search_loops(module_checker0modules_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
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
#line 32
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 33
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 33
label_2:
;
#line 33
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 33
if(___nl__bool__3){ goto label_57;}
#line 33
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 33
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 34
___nl__bool__6 = hash0has_key(___nl__im__1, ___nl__im__2);
#line 34
___nl__bool__6 = !___nl__bool__6;
#line 34
___nl__bool__6 = !___nl__bool__6;
#line 34
if(___nl__bool__6){ goto label_45;}
#line 35
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 36
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 37
c_rt_lib0move(&___nl__im__9, module_checker_priv0check_module(___nl__im__2, ___nl__im__0, &___nl__im__7, &___nl__im__8, &___nl__im__1));
#line 37
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(174));
#line 37
if(___nl__bool__10){ goto label_21;}
#line 39
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 39
if(___nl__bool__10){ goto label_41;}
#line 39
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 39
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 39
nl_die_arg(___nl__im__11);
#line 37
label_21:
;
#line 37
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(174)));
#line 37
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 38
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(174), ___nl__im__12));
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
//clear ___nl__bool__3;
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
//clear ___nl__bool__6;
#line 38
c_rt_lib0clear(&___nl__im__7);
#line 38
c_rt_lib0clear(&___nl__im__8);
#line 38
c_rt_lib0clear(&___nl__im__9);
#line 38
//clear ___nl__bool__10;
#line 38
c_rt_lib0clear(&___nl__im__11);
#line 38
c_rt_lib0clear(&___nl__im__12);
#line 38
c_rt_lib0clear(&___nl__im__13);
#line 38
return ___nl__im__14;
#line 39
goto label_43;
#line 39
label_41:
;
#line 40
goto label_43;
#line 40
label_43:
;
#line 41
goto label_45;
#line 41
label_45:
;
#line 41
//clear ___nl__bool__6;
#line 41
c_rt_lib0clear(&___nl__im__7);
#line 41
c_rt_lib0clear(&___nl__im__8);
#line 41
c_rt_lib0clear(&___nl__im__9);
#line 41
//clear ___nl__bool__10;
#line 41
c_rt_lib0clear(&___nl__im__11);
#line 41
c_rt_lib0clear(&___nl__im__12);
#line 41
c_rt_lib0clear(&___nl__im__13);
#line 41
c_rt_lib0clear(&___nl__im__14);
#line 42
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 42
goto label_2;
#line 42
label_57:
;
#line 43
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
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
return ___nl__im__15;
return NULL;

}

module_checker0ret_t0type module_checker_priv0check_module(ImmT  ___nl__im__0,module_checker0modules_t0type ___nl__im__1,module_checker0stack_t0type* ___ref___im__2,module_checker0stack_hash_t0type* ___ref___im__3,ImmT * ___ref___im__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
INT  ___nl__int__5 = 0;
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
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
#line 48
___nl__int__5 = 1;
#line 48
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__5));
#line 48
c_rt_lib0delete(hash0set_value(___ref___im__4, ___nl__im__0, ___nl__im__6));
#line 48
//clear ___nl__int__5;
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 49
___nl__int__7 = 1;
#line 49
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 49
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__0, ___nl__im__8));
#line 49
//clear ___nl__int__7;
#line 49
c_rt_lib0clear(&___nl__im__8);
#line 50
c_rt_lib0delete(array0push(___ref___im__2, ___nl__im__0));
#line 51
c_rt_lib0move(&___nl__im__9, hash0get_value(___nl__im__1, ___nl__im__0));
#line 51
___nl__int__11 = 0;
#line 51
___nl__int__12 = 1;
#line 51
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 51
label_15:
;
#line 51
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 51
if(___nl__bool__14){ goto label_94;}
#line 51
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 51
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 52
___nl__bool__16 = hash0has_key((*___ref___im__3), ___nl__im__10);
#line 52
___nl__bool__16 = !___nl__bool__16;
#line 52
if(___nl__bool__16){ goto label_38;}
#line 53
c_rt_lib0move(&___nl__im__18, module_checker_priv0get_loop_from_stack(___nl__im__10, (*___ref___im__2)));
#line 53
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(174), ___nl__im__18));
#line 53
c_rt_lib0clear(&___nl__im__18);
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0clear(&___nl__im__10);
#line 53
//clear ___nl__int__11;
#line 53
//clear ___nl__int__12;
#line 53
//clear ___nl__int__13;
#line 53
//clear ___nl__bool__14;
#line 53
c_rt_lib0clear(&___nl__im__15);
#line 53
//clear ___nl__bool__16;
#line 53
return ___nl__im__17;
#line 54
goto label_82;
#line 54
label_38:
;
#line 54
___nl__bool__16 = hash0has_key(___nl__im__1, ___nl__im__10);
#line 54
___nl__bool__19 = !___nl__bool__16;
#line 54
if(___nl__bool__19){ goto label_44;}
#line 54
___nl__bool__16 = hash0has_key((*___ref___im__4), ___nl__im__10);
#line 54
___nl__bool__16 = !___nl__bool__16;
#line 54
label_44:
;
#line 54
//clear ___nl__bool__19;
#line 54
___nl__bool__16 = !___nl__bool__16;
#line 54
if(___nl__bool__16){ goto label_82;}
#line 55
c_rt_lib0move(&___nl__im__20, module_checker_priv0check_module(___nl__im__10, ___nl__im__1, ___ref___im__2, ___ref___im__3, ___ref___im__4));
#line 55
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(174));
#line 55
if(___nl__bool__21){ goto label_56;}
#line 57
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(83));
#line 57
if(___nl__bool__21){ goto label_78;}
#line 57
c_rt_lib0move(&___nl__im__22,___get_global_string_const(15));
#line 57
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 57
nl_die_arg(___nl__im__22);
#line 55
label_56:
;
#line 55
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(174)));
#line 55
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 56
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(174), ___nl__im__23));
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
c_rt_lib0clear(&___nl__im__9);
#line 56
c_rt_lib0clear(&___nl__im__10);
#line 56
//clear ___nl__int__11;
#line 56
//clear ___nl__int__12;
#line 56
//clear ___nl__int__13;
#line 56
//clear ___nl__bool__14;
#line 56
c_rt_lib0clear(&___nl__im__15);
#line 56
//clear ___nl__bool__16;
#line 56
c_rt_lib0clear(&___nl__im__17);
#line 56
c_rt_lib0clear(&___nl__im__20);
#line 56
//clear ___nl__bool__21;
#line 56
c_rt_lib0clear(&___nl__im__22);
#line 56
c_rt_lib0clear(&___nl__im__23);
#line 56
c_rt_lib0clear(&___nl__im__24);
#line 56
return ___nl__im__25;
#line 57
goto label_80;
#line 57
label_78:
;
#line 58
goto label_80;
#line 58
label_80:
;
#line 59
goto label_82;
#line 59
label_82:
;
#line 59
//clear ___nl__bool__16;
#line 59
c_rt_lib0clear(&___nl__im__17);
#line 59
c_rt_lib0clear(&___nl__im__20);
#line 59
//clear ___nl__bool__21;
#line 59
c_rt_lib0clear(&___nl__im__22);
#line 59
c_rt_lib0clear(&___nl__im__23);
#line 59
c_rt_lib0clear(&___nl__im__24);
#line 59
c_rt_lib0clear(&___nl__im__25);
#line 59
c_rt_lib0clear(&___nl__im__10);
#line 60
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 60
goto label_15;
#line 60
label_94:
;
#line 61
c_rt_lib0delete(hash0delete(___ref___im__3, ___nl__im__0));
#line 62
___nl__int__26 = 0;
#line 62
___nl__int__28 = c_rt_lib0array_len((*___ref___im__2));
#line 62
___nl__int__29 = 1;
#line 62
___nl__int__27 = ___nl__int__28 - ___nl__int__29;
#line 62
//clear ___nl__int__28;
#line 62
//clear ___nl__int__29;
#line 62
c_rt_lib0move(___ref___im__2, array0subarray((*___ref___im__2), ___nl__int__26, ___nl__int__27));
#line 62
//clear ___nl__int__26;
#line 62
//clear ___nl__int__27;
#line 63
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 63
c_rt_lib0clear(&___nl__im__0);
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
c_rt_lib0clear(&___nl__im__9);
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
return ___nl__im__30;
return NULL;

}

ImmT  module_checker_priv0get_loop_from_stack(ImmT  ___nl__im__0,module_checker0stack_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
#line 67
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 68
___nl__int__4 = 0;
#line 68
___nl__int__5 = 1;
#line 68
___nl__int__6 = c_rt_lib0array_len(___nl__im__1);
#line 68
label_4:
;
#line 68
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 68
if(___nl__bool__7){ goto label_20;}
#line 68
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__4));
#line 68
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 69
___nl__bool__9 = c_rt_lib0eq(___nl__im__3, ___nl__im__0);
#line 69
___nl__bool__9 = !___nl__bool__9;
#line 69
if(___nl__bool__9){ goto label_14;}
#line 69
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 69
goto label_14;
#line 69
label_14:
;
#line 69
//clear ___nl__bool__9;
#line 70
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__3));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 71
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 71
goto label_4;
#line 71
label_20:
;
#line 72
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__0));
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
c_rt_lib0clear(&___nl__im__3);
#line 73
//clear ___nl__int__4;
#line 73
//clear ___nl__int__5;
#line 73
//clear ___nl__int__6;
#line 73
//clear ___nl__bool__7;
#line 73
c_rt_lib0clear(&___nl__im__8);
#line 73
return ___nl__im__2;
return NULL;

}

ImmT  module_checker0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0var_t");
ImmT  res = module_checker0var_t();
return res;
}
ImmT module_checker0var_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(4);
}
ImmT module_checker0var_t0cal() {
module_checker_priv0__const__init();
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
#line 78
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_string_const(243), ___nl__im__4, ___get_global_string_const(76), ___nl__im__5, ___get_global_string_const(241), ___nl__im__6));
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0clear(&___nl__im__5);
#line 78
c_rt_lib0clear(&___nl__im__6);
#line 78
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 78
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0move(&___nl__im__7, ptd0bool());
#line 80
c_rt_lib0move(&___nl__im__8, ptd0bool());
#line 81
c_rt_lib0move(&___nl__im__9, ptd0bool());
#line 81
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(355), ___nl__im__2, ___get_global_string_const(360), ___nl__im__7, ___get_global_string_const(1043), ___nl__im__8, ___get_global_string_const(1044), ___nl__im__9));
#line 81
c_rt_lib0clear(&___nl__im__2);
#line 81
c_rt_lib0clear(&___nl__im__7);
#line 81
c_rt_lib0clear(&___nl__im__8);
#line 81
c_rt_lib0clear(&___nl__im__9);
#line 81
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 81
c_rt_lib0clear(&___nl__im__1);
#line 81
return ___nl__im__0;
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
return NULL;
return NULL;

}

ImmT  module_checker0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0return_t");
ImmT  res = module_checker0return_t();
return res;
}
ImmT module_checker0return_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(5);
}
ImmT module_checker0return_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 87
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 88
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 89
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 91
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 91
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(1045), ___nl__im__2, ___get_global_string_const(76), ___nl__im__3, ___get_global_string_const(241), ___nl__im__4, ___get_global_string_const(1046), ___nl__im__5, ___get_global_string_const(1047), ___nl__im__6));
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
c_rt_lib0clear(&___nl__im__4);
#line 91
c_rt_lib0clear(&___nl__im__5);
#line 91
c_rt_lib0clear(&___nl__im__6);
#line 91
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
return ___nl__im__0;
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
return NULL;
return NULL;

}

ImmT  module_checker0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0state_t");
ImmT  res = module_checker0state_t();
return res;
}
ImmT module_checker0state_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(6);
}
ImmT module_checker0state_t0cal() {
module_checker_priv0__const__init();
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
#line 97
c_rt_lib0move(&___nl__im__2, ptd0bool());
#line 98
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 98
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(module_checker0return_t0ptr, ___get_global_string_const(56), ___get_global_string_const(940)));
#line 98
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 98
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(238), ___nl__im__5, ___get_global_string_const(294), ___nl__im__6));
#line 98
c_rt_lib0clear(&___nl__im__5);
#line 98
c_rt_lib0clear(&___nl__im__6);
#line 98
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 98
c_rt_lib0clear(&___nl__im__4);
#line 99
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_string_const(56), ___get_global_string_const(1048)));
#line 99
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 99
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 100
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_string_const(47), ___get_global_string_const(1049)));
#line 100
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 101
c_rt_lib0move(&___nl__im__13, ptd0int());
#line 101
c_rt_lib0move(&___nl__im__12, ptd0hash(___nl__im__13));
#line 101
c_rt_lib0clear(&___nl__im__13);
#line 101
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 101
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 101
c_rt_lib0clear(&___nl__im__15);
#line 101
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(257), ___nl__im__12, ___get_global_string_const(166), ___nl__im__14));
#line 101
c_rt_lib0clear(&___nl__im__12);
#line 101
c_rt_lib0clear(&___nl__im__14);
#line 101
c_rt_lib0move(&___nl__im__10, ptd0rec(___nl__im__11));
#line 101
c_rt_lib0clear(&___nl__im__11);
#line 102
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 102
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1050), ___nl__im__2, ___get_global_string_const(266), ___nl__im__3, ___get_global_string_const(896), ___nl__im__7, ___get_global_string_const(50), ___nl__im__9, ___get_global_string_const(1051), ___nl__im__10, ___get_global_string_const(1052), ___nl__im__16));
#line 102
c_rt_lib0clear(&___nl__im__2);
#line 102
c_rt_lib0clear(&___nl__im__3);
#line 102
c_rt_lib0clear(&___nl__im__7);
#line 102
c_rt_lib0clear(&___nl__im__9);
#line 102
c_rt_lib0clear(&___nl__im__10);
#line 102
c_rt_lib0clear(&___nl__im__16);
#line 102
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
return ___nl__im__0;
#line 102
c_rt_lib0clear(&___nl__im__0);
#line 102
return NULL;
return NULL;

}

ImmT  module_checker0save_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0save_t");
ImmT  res = module_checker0save_t();
return res;
}
ImmT module_checker0save_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(7);
}
ImmT module_checker0save_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 107
c_rt_lib0move(&___nl__im__2, ptd0bool());
#line 107
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_string_const(56), ___get_global_string_const(1048)));
#line 107
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 107
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1050), ___nl__im__2, ___get_global_string_const(896), ___nl__im__3));
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 107
c_rt_lib0clear(&___nl__im__1);
#line 107
return ___nl__im__0;
#line 107
c_rt_lib0clear(&___nl__im__0);
#line 107
return NULL;
return NULL;

}

ImmT  module_checker0init_checker_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0init_checker_t");
ImmT  res = module_checker0init_checker_t();
return res;
}
ImmT module_checker0init_checker_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(8);
}
ImmT module_checker0init_checker_t0cal() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(module_checker0save_t0ptr, ___get_global_string_const(56), ___get_global_string_const(1053)));
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 113
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 113
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(359), ___nl__im__2, ___get_global_string_const(1054), ___nl__im__3));
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
return ___nl__im__0;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
return NULL;
return NULL;

}

ImmT  module_checker_priv0add_error(tc_types0errors_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
#line 118
c_rt_lib0move(&___nl__im__2,___get_global_string_const(50));
#line 118
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 119
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(1055)));
#line 119
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 119
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(166)));
#line 119
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(137)));
#line 119
___nl__int__9 = 1;
#line 119
___nl__int__9 = -___nl__int__9;
#line 119
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 119
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_string_const(171), ___nl__im__1, ___get_global_string_const(168), ___nl__im__6, ___get_global_string_const(166), ___nl__im__7, ___get_global_string_const(110), ___nl__im__8, ___get_global_string_const(229), ___nl__im__10));
#line 119
//clear ___nl__int__4;
#line 119
c_rt_lib0clear(&___nl__im__6);
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
//clear ___nl__int__9;
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__3));
#line 119
c_rt_lib0move(&___nl__string__11,___get_global_string_const(50));
#line 119
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__2));
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
c_rt_lib0clear(&___nl__string__11);
#line 119
c_rt_lib0clear(&___nl__im__1);
#line 119
return NULL;

}

ImmT  module_checker_priv0add_warning(tc_types0errors_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
#line 123
c_rt_lib0move(&___nl__im__2,___get_global_string_const(138));
#line 123
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 124
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(1055)));
#line 124
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 124
c_rt_lib0clear(&___nl__im__5);
#line 124
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 124
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(166)));
#line 124
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(227)));
#line 124
___nl__int__9 = 1;
#line 124
___nl__int__9 = -___nl__int__9;
#line 124
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_string_const(171), ___nl__im__1, ___get_global_string_const(168), ___nl__im__6, ___get_global_string_const(166), ___nl__im__7, ___get_global_string_const(110), ___nl__im__8, ___get_global_string_const(229), ___nl__im__10));
#line 124
//clear ___nl__int__4;
#line 124
c_rt_lib0clear(&___nl__im__6);
#line 124
c_rt_lib0clear(&___nl__im__7);
#line 124
c_rt_lib0clear(&___nl__im__8);
#line 124
//clear ___nl__int__9;
#line 124
c_rt_lib0clear(&___nl__im__10);
#line 124
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__3));
#line 124
c_rt_lib0move(&___nl__string__11,___get_global_string_const(138));
#line 124
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__2));
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
c_rt_lib0clear(&___nl__string__11);
#line 124
c_rt_lib0clear(&___nl__im__1);
#line 124
return NULL;

}

ImmT  module_checker_priv0set_used_function(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
#line 128
___nl__int__3 = 0;
#line 128
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__3));
#line 128
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__0, ___nl__im__4));
#line 128
//clear ___nl__int__3;
#line 128
c_rt_lib0clear(&___nl__im__4);
#line 129
c_rt_lib0move(&___nl__im__5, hash0get_value(___nl__im__1, ___nl__im__0));
#line 129
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 129
label_7:
;
#line 129
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 129
if(___nl__bool__7){ goto label_33;}
#line 129
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 129
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 130
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__6);
#line 130
___nl__bool__10 = !___nl__bool__10;
#line 130
___nl__bool__10 = !___nl__bool__10;
#line 130
if(___nl__bool__10){ goto label_19;}
#line 130
//clear ___nl__bool__10;
#line 130
goto label_30;
#line 130
goto label_19;
#line 130
label_19:
;
#line 130
//clear ___nl__bool__10;
#line 131
___nl__bool__11 = hash0has_key((*___ref___im__2), ___nl__im__6);
#line 131
___nl__bool__11 = !___nl__bool__11;
#line 131
if(___nl__bool__11){ goto label_27;}
#line 131
//clear ___nl__bool__11;
#line 131
goto label_30;
#line 131
goto label_27;
#line 131
label_27:
;
#line 131
//clear ___nl__bool__11;
#line 132
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__im__6, ___nl__im__1, ___ref___im__2));
#line 132
label_30:
;
#line 133
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 133
goto label_7;
#line 133
label_33:
;
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
//clear ___nl__bool__7;
#line 133
c_rt_lib0clear(&___nl__im__8);
#line 133
c_rt_lib0clear(&___nl__im__9);
#line 133
return NULL;
return NULL;

}

ImmT  module_checker0check_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "module_checker0check_module");
nast0module_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
tc_types0errors_t0type res = module_checker0check_module(*var0, *var1, var2);
return res;
}
tc_types0errors_t0type module_checker0check_module(nast0module_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
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
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
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
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__string__34 = NULL;
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
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
bool  ___nl__bool__54 = false;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__string__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__string__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
INT  ___nl__int__103 = 0;
INT  ___nl__int__104 = 0;
INT  ___nl__int__105 = 0;
bool  ___nl__bool__106 = false;
ImmT  ___nl__im__107 = NULL;
INT  ___nl__int__108 = 0;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__string__112 = NULL;
bool  ___nl__bool__113 = false;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__string__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__string__128 = NULL;
ImmT  ___nl__im__129 = NULL;
bool  ___nl__bool__130 = false;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
bool  ___nl__bool__135 = false;
INT  ___nl__int__136 = 0;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__string__141 = NULL;
bool  ___nl__bool__142 = false;
ImmT  ___nl__im__143 = NULL;
bool  ___nl__bool__144 = false;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__string__150 = NULL;
bool  ___nl__bool__151 = false;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
bool  ___nl__bool__154 = false;
INT  ___nl__int__155 = 0;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
INT  ___nl__int__160 = 0;
INT  ___nl__int__161 = 0;
INT  ___nl__int__162 = 0;
bool  ___nl__bool__163 = false;
ImmT  ___nl__im__164 = NULL;
bool  ___nl__bool__165 = false;
ImmT  ___nl__im__166 = NULL;
bool  ___nl__bool__167 = false;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
bool  ___nl__bool__170 = false;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
INT  ___nl__int__174 = 0;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__string__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__string__187 = NULL;
ImmT  ___nl__im__188 = NULL;
#line 137
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 137
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 137
___nl__int__6 = 1;
#line 137
___nl__int__6 = -___nl__int__6;
#line 137
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 137
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 137
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_string_const(50), ___nl__im__4, ___get_global_string_const(138), ___nl__im__5, ___get_global_string_const(1055), ___nl__im__7, ___get_global_string_const(166), ___nl__im__8));
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
//clear ___nl__int__6;
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 138
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 138
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(257), ___nl__im__10, ___get_global_string_const(166), ___nl__im__11));
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 140
___nl__bool__14 = false;
#line 140
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 140
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 140
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(238), ___nl__im__15, ___get_global_string_const(294), ___nl__im__16));
#line 140
//clear ___nl__bool__14;
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
c_rt_lib0clear(&___nl__im__16);
#line 141
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 142
___nl__bool__18 = false;
#line 142
c_rt_lib0move(&___nl__im__19, c_rt_lib0bool_to_nl_native(___nl__bool__18));
#line 144
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 144
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(6, ___get_global_string_const(266), ___nl__im__13, ___get_global_string_const(1052), ___nl__im__17, ___get_global_string_const(1050), ___nl__im__19, ___get_global_string_const(1051), ___nl__im__9, ___get_global_string_const(896), ___nl__im__20, ___get_global_string_const(50), ___nl__im__3));
#line 144
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0clear(&___nl__im__17);
#line 144
//clear ___nl__bool__18;
#line 144
c_rt_lib0clear(&___nl__im__19);
#line 144
c_rt_lib0clear(&___nl__im__20);
#line 147
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 148
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 149
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 149
___nl__int__25 = 0;
#line 149
___nl__int__26 = 1;
#line 149
___nl__int__27 = c_rt_lib0array_len(___nl__im__23);
#line 149
label_40:
;
#line 149
___nl__bool__28 = ___nl__int__25 >= ___nl__int__27;
#line 149
if(___nl__bool__28){ goto label_230;}
#line 149
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__23, ___nl__int__25));
#line 149
c_rt_lib0copy(&___nl__im__24, ___nl__im__29);
#line 150
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(168)));
#line 150
___nl__int__30 = getIntFromImm(___nl__im__31);
#line 150
c_rt_lib0clear(&___nl__im__31);
#line 150
c_rt_lib0move(&___nl__im__32,___get_global_string_const(50));
#line 150
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__32));
#line 150
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__30));
#line 150
c_rt_lib0hash_set_value_dec(&___nl__im__32, ___get_global_string_const(1055), ___nl__im__33);
#line 150
c_rt_lib0move(&___nl__string__34,___get_global_string_const(50));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__34, ___nl__im__32));
#line 150
//clear ___nl__int__30;
#line 150
c_rt_lib0clear(&___nl__im__32);
#line 150
c_rt_lib0clear(&___nl__im__33);
#line 150
c_rt_lib0clear(&___nl__string__34);
#line 151
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(0));
#line 151
c_rt_lib0copy(&___nl__im__36, ___nl__im__35);
#line 151
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(896), ___nl__im__36);
#line 151
c_rt_lib0clear(&___nl__im__35);
#line 151
c_rt_lib0clear(&___nl__im__36);
#line 152
___nl__bool__38 = false;
#line 152
c_rt_lib0move(&___nl__im__39, c_rt_lib0bool_to_nl_native(___nl__bool__38));
#line 152
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(220)));
#line 152
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(110)));
#line 152
c_rt_lib0clear(&___nl__im__42);
#line 152
c_rt_lib0move(&___nl__im__40, module_checker_priv0check_return_type(___nl__im__41, &___nl__im__12));
#line 152
c_rt_lib0clear(&___nl__im__41);
#line 152
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(2, ___get_global_string_const(238), ___nl__im__39, ___get_global_string_const(294), ___nl__im__40));
#line 152
//clear ___nl__bool__38;
#line 152
c_rt_lib0clear(&___nl__im__39);
#line 152
c_rt_lib0clear(&___nl__im__40);
#line 152
c_rt_lib0copy(&___nl__im__43, ___nl__im__37);
#line 152
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(266), ___nl__im__43);
#line 152
c_rt_lib0clear(&___nl__im__37);
#line 152
c_rt_lib0clear(&___nl__im__43);
#line 153
c_rt_lib0move(&___nl__im__44, module_checker_priv0save_block(&___nl__im__12));
#line 154
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(113)));
#line 154
___nl__int__47 = 0;
#line 154
___nl__int__48 = 1;
#line 154
___nl__int__49 = c_rt_lib0array_len(___nl__im__45);
#line 154
label_83:
;
#line 154
___nl__bool__50 = ___nl__int__47 >= ___nl__int__49;
#line 154
if(___nl__bool__50){ goto label_108;}
#line 154
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__45, ___nl__int__47));
#line 154
c_rt_lib0copy(&___nl__im__46, ___nl__im__51);
#line 155
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(185)));
#line 155
___nl__bool__53 = false;
#line 155
___nl__bool__54 = false;
#line 155
___nl__bool__55 = true;
#line 155
c_rt_lib0delete(module_checker_priv0add_var(___nl__im__52, ___nl__bool__53, ___nl__bool__54, ___nl__bool__55, &___nl__im__12));
#line 155
c_rt_lib0clear(&___nl__im__52);
#line 155
//clear ___nl__bool__53;
#line 155
//clear ___nl__bool__54;
#line 155
//clear ___nl__bool__55;
#line 156
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(110)));
#line 156
c_rt_lib0delete(module_checker_priv0check_type(___nl__im__56, &___nl__im__12));
#line 156
c_rt_lib0clear(&___nl__im__56);
#line 157
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(185)));
#line 157
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(1056)));
#line 157
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__57, ___nl__im__58, &___nl__im__12));
#line 157
c_rt_lib0clear(&___nl__im__57);
#line 157
c_rt_lib0clear(&___nl__im__58);
#line 157
c_rt_lib0clear(&___nl__im__46);
#line 158
___nl__int__47 = ___nl__int__47 + ___nl__int__48;
#line 158
goto label_83;
#line 158
label_108:
;
#line 159
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 159
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__59, &___nl__im__12));
#line 159
c_rt_lib0clear(&___nl__im__59);
#line 160
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(113)));
#line 160
___nl__int__62 = 0;
#line 160
___nl__int__63 = 1;
#line 160
___nl__int__64 = c_rt_lib0array_len(___nl__im__60);
#line 160
label_116:
;
#line 160
___nl__bool__65 = ___nl__int__62 >= ___nl__int__64;
#line 160
if(___nl__bool__65){ goto label_137;}
#line 160
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_get(___nl__im__60, ___nl__int__62));
#line 160
c_rt_lib0copy(&___nl__im__61, ___nl__im__66);
#line 161
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(111)));
#line 161
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__68, ___get_global_string_const(39));
#line 161
c_rt_lib0clear(&___nl__im__68);
#line 161
___nl__bool__67 = !___nl__bool__67;
#line 161
if(___nl__bool__67){ goto label_132;}
#line 162
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(185)));
#line 162
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_string_const(1057)));
#line 162
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__69, ___nl__im__70, &___nl__im__12));
#line 162
c_rt_lib0clear(&___nl__im__69);
#line 162
c_rt_lib0clear(&___nl__im__70);
#line 163
goto label_132;
#line 163
label_132:
;
#line 163
//clear ___nl__bool__67;
#line 163
c_rt_lib0clear(&___nl__im__61);
#line 164
___nl__int__62 = ___nl__int__62 + ___nl__int__63;
#line 164
goto label_116;
#line 164
label_137:
;
#line 165
c_rt_lib0delete(module_checker_priv0load_block(&___nl__im__12, ___nl__im__44));
#line 166
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(266)));
#line 166
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(238)));
#line 166
___nl__bool__71 = c_rt_lib0check_true_native(___nl__im__73);
#line 166
c_rt_lib0clear(&___nl__im__72);
#line 166
c_rt_lib0clear(&___nl__im__73);
#line 166
___nl__bool__71 = !___nl__bool__71;
#line 166
___nl__bool__71 = !___nl__bool__71;
#line 166
if(___nl__bool__71){ goto label_174;}
#line 168
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(266)));
#line 168
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_string_const(294)));
#line 168
c_rt_lib0clear(&___nl__im__76);
#line 168
___nl__bool__74 = c_rt_lib0priv_is(___nl__im__75, ___get_global_string_const(241));
#line 168
c_rt_lib0clear(&___nl__im__75);
#line 168
if(___nl__bool__74){ goto label_158;}
#line 168
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(266)));
#line 168
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(294)));
#line 168
c_rt_lib0clear(&___nl__im__78);
#line 168
___nl__bool__74 = c_rt_lib0priv_is(___nl__im__77, ___get_global_string_const(1047));
#line 168
c_rt_lib0clear(&___nl__im__77);
#line 168
label_158:
;
#line 168
___nl__bool__74 = !___nl__bool__74;
#line 168
if(___nl__bool__74){ goto label_171;}
#line 167
c_rt_lib0move(&___nl__im__79,___get_global_string_const(50));
#line 167
c_rt_lib0move(&___nl__im__79, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__79));
#line 167
c_rt_lib0move(&___nl__im__80,___get_global_string_const(1058));
#line 167
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__79, ___nl__im__80));
#line 167
c_rt_lib0move(&___nl__string__81,___get_global_string_const(50));
#line 167
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__81, ___nl__im__79));
#line 167
c_rt_lib0clear(&___nl__im__79);
#line 167
c_rt_lib0clear(&___nl__im__80);
#line 167
c_rt_lib0clear(&___nl__string__81);
#line 167
goto label_171;
#line 167
label_171:
;
#line 167
//clear ___nl__bool__74;
#line 169
goto label_174;
#line 169
label_174:
;
#line 169
//clear ___nl__bool__71;
#line 170
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(232)));
#line 170
___nl__bool__84 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(233));
#line 170
c_rt_lib0clear(&___nl__im__85);
#line 170
if(___nl__bool__84){ goto label_182;}
#line 170
c_rt_lib0move(&___nl__im__83,___get_global_string_const(36));
#line 170
goto label_184;
#line 170
label_182:
;
#line 170
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 170
label_184:
;
#line 170
//clear ___nl__bool__84;
#line 170
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(185)));
#line 170
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 170
c_rt_lib0move(&___nl__im__82, module_checker_priv0get_fun_key(___nl__im__83, ___nl__im__86, ___nl__im__87));
#line 170
c_rt_lib0clear(&___nl__im__83);
#line 170
c_rt_lib0clear(&___nl__im__86);
#line 170
c_rt_lib0clear(&___nl__im__87);
#line 171
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(1051)));
#line 171
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_string_const(257)));
#line 171
c_rt_lib0clear(&___nl__im__89);
#line 171
c_rt_lib0delete(hash0set_value(&___nl__im__21, ___nl__im__82, ___nl__im__88));
#line 171
c_rt_lib0clear(&___nl__im__88);
#line 172
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(1051)));
#line 172
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__91, ___get_global_string_const(257)));
#line 172
c_rt_lib0clear(&___nl__im__91);
#line 172
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__82, ___nl__im__90));
#line 172
c_rt_lib0clear(&___nl__im__90);
#line 173
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(232)));
#line 173
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__93, ___get_global_string_const(478));
#line 173
c_rt_lib0clear(&___nl__im__93);
#line 173
___nl__bool__92 = !___nl__bool__92;
#line 173
___nl__bool__92 = !___nl__bool__92;
#line 173
if(___nl__bool__92){ goto label_214;}
#line 173
___nl__int__94 = 0;
#line 173
c_rt_lib0move(&___nl__im__95, c_rt_lib0int_new(___nl__int__94));
#line 173
c_rt_lib0delete(hash0set_value(&___nl__im__22, ___nl__im__82, ___nl__im__95));
#line 173
//clear ___nl__int__94;
#line 173
c_rt_lib0clear(&___nl__im__95);
#line 173
goto label_214;
#line 173
label_214:
;
#line 173
//clear ___nl__bool__92;
#line 174
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_mk(0));
#line 174
c_rt_lib0move(&___nl__im__97,___get_global_string_const(1051));
#line 174
c_rt_lib0move(&___nl__im__97, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__97));
#line 174
c_rt_lib0copy(&___nl__im__98, ___nl__im__96);
#line 174
c_rt_lib0hash_set_value_dec(&___nl__im__97, ___get_global_string_const(257), ___nl__im__98);
#line 174
c_rt_lib0move(&___nl__string__99,___get_global_string_const(1051));
#line 174
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__99, ___nl__im__97));
#line 174
c_rt_lib0clear(&___nl__im__96);
#line 174
c_rt_lib0clear(&___nl__im__97);
#line 174
c_rt_lib0clear(&___nl__im__98);
#line 174
c_rt_lib0clear(&___nl__string__99);
#line 174
c_rt_lib0clear(&___nl__im__24);
#line 175
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 175
goto label_40;
#line 175
label_230:
;
#line 176
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_mk(0));
#line 177
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(184)));
#line 177
___nl__int__103 = 0;
#line 177
___nl__int__104 = 1;
#line 177
___nl__int__105 = c_rt_lib0array_len(___nl__im__101);
#line 177
label_236:
;
#line 177
___nl__bool__106 = ___nl__int__103 >= ___nl__int__105;
#line 177
if(___nl__bool__106){ goto label_311;}
#line 177
c_rt_lib0move(&___nl__im__107, c_rt_lib0array_get(___nl__im__101, ___nl__int__103));
#line 177
c_rt_lib0copy(&___nl__im__102, ___nl__im__107);
#line 178
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(168)));
#line 178
___nl__int__108 = getIntFromImm(___nl__im__109);
#line 178
c_rt_lib0clear(&___nl__im__109);
#line 178
c_rt_lib0move(&___nl__im__110,___get_global_string_const(50));
#line 178
c_rt_lib0move(&___nl__im__110, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__110));
#line 178
c_rt_lib0move(&___nl__im__111, c_rt_lib0int_new(___nl__int__108));
#line 178
c_rt_lib0hash_set_value_dec(&___nl__im__110, ___get_global_string_const(1055), ___nl__im__111);
#line 178
c_rt_lib0move(&___nl__string__112,___get_global_string_const(50));
#line 178
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__112, ___nl__im__110));
#line 178
//clear ___nl__int__108;
#line 178
c_rt_lib0clear(&___nl__im__110);
#line 178
c_rt_lib0clear(&___nl__im__111);
#line 178
c_rt_lib0clear(&___nl__string__112);
#line 179
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(185)));
#line 179
___nl__bool__113 = hash0has_key(___nl__im__100, ___nl__im__114);
#line 179
c_rt_lib0clear(&___nl__im__114);
#line 179
___nl__bool__113 = !___nl__bool__113;
#line 179
if(___nl__bool__113){ goto label_273;}
#line 179
c_rt_lib0move(&___nl__im__115,___get_global_string_const(50));
#line 179
c_rt_lib0move(&___nl__im__115, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__115));
#line 179
c_rt_lib0move(&___nl__im__117,___get_global_string_const(1059));
#line 179
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(185)));
#line 179
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__118));
#line 179
c_rt_lib0clear(&___nl__im__117);
#line 179
c_rt_lib0clear(&___nl__im__118);
#line 179
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__115, ___nl__im__116));
#line 179
c_rt_lib0move(&___nl__string__119,___get_global_string_const(50));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__119, ___nl__im__115));
#line 179
c_rt_lib0clear(&___nl__im__115);
#line 179
c_rt_lib0clear(&___nl__im__116);
#line 179
c_rt_lib0clear(&___nl__string__119);
#line 179
goto label_273;
#line 179
label_273:
;
#line 179
//clear ___nl__bool__113;
#line 181
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(1051)));
#line 181
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(166)));
#line 181
c_rt_lib0clear(&___nl__im__122);
#line 181
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(185)));
#line 181
___nl__bool__120 = hash0has_key(___nl__im__121, ___nl__im__123);
#line 181
c_rt_lib0clear(&___nl__im__121);
#line 181
c_rt_lib0clear(&___nl__im__123);
#line 181
___nl__bool__120 = !___nl__bool__120;
#line 181
___nl__bool__120 = !___nl__bool__120;
#line 181
if(___nl__bool__120){ goto label_299;}
#line 180
c_rt_lib0move(&___nl__im__124,___get_global_string_const(50));
#line 180
c_rt_lib0move(&___nl__im__124, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__124));
#line 180
c_rt_lib0move(&___nl__im__126,___get_global_string_const(1060));
#line 180
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(185)));
#line 180
c_rt_lib0move(&___nl__im__125, c_rt_lib0concat_new(___nl__im__126, ___nl__im__127));
#line 180
c_rt_lib0clear(&___nl__im__126);
#line 180
c_rt_lib0clear(&___nl__im__127);
#line 180
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__124, ___nl__im__125));
#line 180
c_rt_lib0move(&___nl__string__128,___get_global_string_const(50));
#line 180
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__128, ___nl__im__124));
#line 180
c_rt_lib0clear(&___nl__im__124);
#line 180
c_rt_lib0clear(&___nl__im__125);
#line 180
c_rt_lib0clear(&___nl__string__128);
#line 180
goto label_299;
#line 180
label_299:
;
#line 180
//clear ___nl__bool__120;
#line 182
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(185)));
#line 182
___nl__bool__130 = true;
#line 182
c_rt_lib0move(&___nl__im__131, c_rt_lib0bool_to_nl_native(___nl__bool__130));
#line 182
c_rt_lib0delete(hash0set_value(&___nl__im__100, ___nl__im__129, ___nl__im__131));
#line 182
c_rt_lib0clear(&___nl__im__129);
#line 182
//clear ___nl__bool__130;
#line 182
c_rt_lib0clear(&___nl__im__131);
#line 182
c_rt_lib0clear(&___nl__im__102);
#line 183
___nl__int__103 = ___nl__int__103 + ___nl__int__104;
#line 183
goto label_236;
#line 183
label_311:
;
#line 184
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(1051)));
#line 184
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__133, ___get_global_string_const(166)));
#line 184
c_rt_lib0clear(&___nl__im__133);
#line 184
c_rt_lib0move(&___nl__im__137, c_rt_lib0init_iter(___nl__im__132));
#line 184
label_316:
;
#line 184
___nl__bool__135 = c_rt_lib0is_end_hash(___nl__im__137);
#line 184
if(___nl__bool__135){ goto label_366;}
#line 184
c_rt_lib0move(&___nl__im__134, c_rt_lib0get_key_iter(___nl__im__137));
#line 184
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value(___nl__im__132, ___nl__im__134));
#line 184
___nl__int__136 = getIntFromImm(___nl__im__138);
#line 185
c_rt_lib0move(&___nl__im__139,___get_global_string_const(50));
#line 185
c_rt_lib0move(&___nl__im__139, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__139));
#line 185
c_rt_lib0move(&___nl__im__140, c_rt_lib0int_new(___nl__int__136));
#line 185
c_rt_lib0hash_set_value_dec(&___nl__im__139, ___get_global_string_const(1055), ___nl__im__140);
#line 185
c_rt_lib0move(&___nl__string__141,___get_global_string_const(50));
#line 185
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__141, ___nl__im__139));
#line 185
c_rt_lib0clear(&___nl__im__139);
#line 185
c_rt_lib0clear(&___nl__im__140);
#line 185
c_rt_lib0clear(&___nl__string__141);
#line 186
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 186
___nl__bool__142 = c_rt_lib0eq(___nl__im__143, ___nl__im__134);
#line 186
c_rt_lib0clear(&___nl__im__143);
#line 186
___nl__bool__142 = !___nl__bool__142;
#line 186
if(___nl__bool__142){ goto label_339;}
#line 186
//clear ___nl__bool__142;
#line 186
goto label_363;
#line 186
goto label_339;
#line 186
label_339:
;
#line 186
//clear ___nl__bool__142;
#line 187
___nl__bool__144 = hash0has_key(___nl__im__100, ___nl__im__134);
#line 187
___nl__bool__144 = !___nl__bool__144;
#line 187
___nl__bool__144 = !___nl__bool__144;
#line 187
if(___nl__bool__144){ goto label_361;}
#line 187
c_rt_lib0move(&___nl__im__145,___get_global_string_const(50));
#line 187
c_rt_lib0move(&___nl__im__145, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__145));
#line 187
c_rt_lib0move(&___nl__im__148,___get_global_string_const(1061));
#line 187
c_rt_lib0move(&___nl__im__147, c_rt_lib0concat_new(___nl__im__148, ___nl__im__134));
#line 187
c_rt_lib0clear(&___nl__im__148);
#line 187
c_rt_lib0move(&___nl__im__149,___get_global_string_const(1062));
#line 187
c_rt_lib0move(&___nl__im__146, c_rt_lib0concat_new(___nl__im__147, ___nl__im__149));
#line 187
c_rt_lib0clear(&___nl__im__147);
#line 187
c_rt_lib0clear(&___nl__im__149);
#line 187
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__145, ___nl__im__146));
#line 187
c_rt_lib0move(&___nl__string__150,___get_global_string_const(50));
#line 187
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__150, ___nl__im__145));
#line 187
c_rt_lib0clear(&___nl__im__145);
#line 187
c_rt_lib0clear(&___nl__im__146);
#line 187
c_rt_lib0clear(&___nl__string__150);
#line 187
goto label_361;
#line 187
label_361:
;
#line 187
//clear ___nl__bool__144;
#line 187
label_363:
;
#line 188
c_rt_lib0move(&___nl__im__137, c_rt_lib0next_iter(___nl__im__137));
#line 188
goto label_316;
#line 188
label_366:
;
#line 189
___nl__bool__151 = c_rt_lib0check_true_native(___nl__im__1);
#line 189
___nl__bool__151 = !___nl__bool__151;
#line 189
___nl__bool__151 = !___nl__bool__151;
#line 189
if(___nl__bool__151){ goto label_467;}
#line 190
c_rt_lib0copy(&___nl__im__152, ___nl__im__22);
#line 191
c_rt_lib0move(&___nl__im__156, c_rt_lib0init_iter(___nl__im__152));
#line 191
label_373:
;
#line 191
___nl__bool__154 = c_rt_lib0is_end_hash(___nl__im__156);
#line 191
if(___nl__bool__154){ goto label_382;}
#line 191
c_rt_lib0move(&___nl__im__153, c_rt_lib0get_key_iter(___nl__im__156));
#line 191
c_rt_lib0move(&___nl__im__157, c_rt_lib0hash_get_value(___nl__im__152, ___nl__im__153));
#line 191
___nl__int__155 = getIntFromImm(___nl__im__157);
#line 192
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__im__153, ___nl__im__21, &___nl__im__22));
#line 193
c_rt_lib0move(&___nl__im__156, c_rt_lib0next_iter(___nl__im__156));
#line 193
goto label_373;
#line 193
label_382:
;
#line 194
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 194
___nl__int__160 = 0;
#line 194
___nl__int__161 = 1;
#line 194
___nl__int__162 = c_rt_lib0array_len(___nl__im__158);
#line 194
label_387:
;
#line 194
___nl__bool__163 = ___nl__int__160 >= ___nl__int__162;
#line 194
if(___nl__bool__163){ goto label_465;}
#line 194
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_get(___nl__im__158, ___nl__int__160));
#line 194
c_rt_lib0copy(&___nl__im__159, ___nl__im__164);
#line 195
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_string_const(232)));
#line 195
___nl__bool__165 = c_rt_lib0priv_is(___nl__im__166, ___get_global_string_const(233));
#line 195
c_rt_lib0clear(&___nl__im__166);
#line 195
___nl__bool__165 = !___nl__bool__165;
#line 195
if(___nl__bool__165){ goto label_400;}
#line 195
//clear ___nl__bool__165;
#line 195
goto label_462;
#line 195
goto label_400;
#line 195
label_400:
;
#line 195
//clear ___nl__bool__165;
#line 196
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_string_const(232)));
#line 196
___nl__bool__170 = c_rt_lib0priv_is(___nl__im__171, ___get_global_string_const(233));
#line 196
c_rt_lib0clear(&___nl__im__171);
#line 196
if(___nl__bool__170){ goto label_408;}
#line 196
c_rt_lib0move(&___nl__im__169,___get_global_string_const(36));
#line 196
goto label_410;
#line 196
label_408:
;
#line 196
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 196
label_410:
;
#line 196
//clear ___nl__bool__170;
#line 196
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_string_const(185)));
#line 196
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 196
c_rt_lib0move(&___nl__im__168, module_checker_priv0get_fun_key(___nl__im__169, ___nl__im__172, ___nl__im__173));
#line 196
c_rt_lib0clear(&___nl__im__169);
#line 196
c_rt_lib0clear(&___nl__im__172);
#line 196
c_rt_lib0clear(&___nl__im__173);
#line 196
___nl__bool__167 = hash0has_key(___nl__im__22, ___nl__im__168);
#line 196
c_rt_lib0clear(&___nl__im__168);
#line 196
___nl__bool__167 = !___nl__bool__167;
#line 196
if(___nl__bool__167){ goto label_425;}
#line 196
//clear ___nl__bool__167;
#line 196
goto label_462;
#line 196
goto label_425;
#line 196
label_425:
;
#line 196
//clear ___nl__bool__167;
#line 197
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_string_const(168)));
#line 197
___nl__int__174 = getIntFromImm(___nl__im__175);
#line 197
c_rt_lib0clear(&___nl__im__175);
#line 197
c_rt_lib0move(&___nl__im__176,___get_global_string_const(50));
#line 197
c_rt_lib0move(&___nl__im__176, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__176));
#line 197
c_rt_lib0move(&___nl__im__177, c_rt_lib0int_new(___nl__int__174));
#line 197
c_rt_lib0hash_set_value_dec(&___nl__im__176, ___get_global_string_const(1055), ___nl__im__177);
#line 197
c_rt_lib0move(&___nl__string__178,___get_global_string_const(50));
#line 197
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__178, ___nl__im__176));
#line 197
//clear ___nl__int__174;
#line 197
c_rt_lib0clear(&___nl__im__176);
#line 197
c_rt_lib0clear(&___nl__im__177);
#line 197
c_rt_lib0clear(&___nl__string__178);
#line 198
c_rt_lib0move(&___nl__im__179,___get_global_string_const(50));
#line 198
c_rt_lib0move(&___nl__im__179, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__179));
#line 198
c_rt_lib0move(&___nl__im__183,___get_global_string_const(1063));
#line 198
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 198
c_rt_lib0move(&___nl__im__182, c_rt_lib0concat_new(___nl__im__183, ___nl__im__184));
#line 198
c_rt_lib0clear(&___nl__im__183);
#line 198
c_rt_lib0clear(&___nl__im__184);
#line 198
c_rt_lib0move(&___nl__im__185,___get_global_string_const(234));
#line 198
c_rt_lib0move(&___nl__im__181, c_rt_lib0concat_new(___nl__im__182, ___nl__im__185));
#line 198
c_rt_lib0clear(&___nl__im__182);
#line 198
c_rt_lib0clear(&___nl__im__185);
#line 198
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_string_const(185)));
#line 198
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__186));
#line 198
c_rt_lib0clear(&___nl__im__181);
#line 198
c_rt_lib0clear(&___nl__im__186);
#line 198
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__179, ___nl__im__180));
#line 198
c_rt_lib0move(&___nl__string__187,___get_global_string_const(50));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__187, ___nl__im__179));
#line 198
c_rt_lib0clear(&___nl__im__179);
#line 198
c_rt_lib0clear(&___nl__im__180);
#line 198
c_rt_lib0clear(&___nl__string__187);
#line 198
c_rt_lib0clear(&___nl__im__159);
#line 198
label_462:
;
#line 199
___nl__int__160 = ___nl__int__160 + ___nl__int__161;
#line 199
goto label_387;
#line 199
label_465:
;
#line 200
goto label_467;
#line 200
label_467:
;
#line 200
//clear ___nl__bool__151;
#line 200
c_rt_lib0clear(&___nl__im__152);
#line 200
c_rt_lib0clear(&___nl__im__153);
#line 200
//clear ___nl__bool__154;
#line 200
//clear ___nl__int__155;
#line 200
c_rt_lib0clear(&___nl__im__156);
#line 200
c_rt_lib0clear(&___nl__im__157);
#line 200
c_rt_lib0clear(&___nl__im__158);
#line 200
c_rt_lib0clear(&___nl__im__159);
#line 200
//clear ___nl__int__160;
#line 200
//clear ___nl__int__161;
#line 200
//clear ___nl__int__162;
#line 200
//clear ___nl__bool__163;
#line 200
c_rt_lib0clear(&___nl__im__164);
#line 201
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(50)));
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__9);
#line 201
c_rt_lib0clear(&___nl__im__12);
#line 201
c_rt_lib0clear(&___nl__im__21);
#line 201
c_rt_lib0clear(&___nl__im__22);
#line 201
c_rt_lib0clear(&___nl__im__23);
#line 201
c_rt_lib0clear(&___nl__im__24);
#line 201
//clear ___nl__int__25;
#line 201
//clear ___nl__int__26;
#line 201
//clear ___nl__int__27;
#line 201
//clear ___nl__bool__28;
#line 201
c_rt_lib0clear(&___nl__im__29);
#line 201
c_rt_lib0clear(&___nl__im__44);
#line 201
c_rt_lib0clear(&___nl__im__45);
#line 201
c_rt_lib0clear(&___nl__im__46);
#line 201
//clear ___nl__int__47;
#line 201
//clear ___nl__int__48;
#line 201
//clear ___nl__int__49;
#line 201
//clear ___nl__bool__50;
#line 201
c_rt_lib0clear(&___nl__im__51);
#line 201
c_rt_lib0clear(&___nl__im__60);
#line 201
c_rt_lib0clear(&___nl__im__61);
#line 201
//clear ___nl__int__62;
#line 201
//clear ___nl__int__63;
#line 201
//clear ___nl__int__64;
#line 201
//clear ___nl__bool__65;
#line 201
c_rt_lib0clear(&___nl__im__66);
#line 201
c_rt_lib0clear(&___nl__im__82);
#line 201
c_rt_lib0clear(&___nl__im__100);
#line 201
c_rt_lib0clear(&___nl__im__101);
#line 201
c_rt_lib0clear(&___nl__im__102);
#line 201
//clear ___nl__int__103;
#line 201
//clear ___nl__int__104;
#line 201
//clear ___nl__int__105;
#line 201
//clear ___nl__bool__106;
#line 201
c_rt_lib0clear(&___nl__im__107);
#line 201
c_rt_lib0clear(&___nl__im__132);
#line 201
c_rt_lib0clear(&___nl__im__134);
#line 201
//clear ___nl__bool__135;
#line 201
//clear ___nl__int__136;
#line 201
c_rt_lib0clear(&___nl__im__137);
#line 201
c_rt_lib0clear(&___nl__im__138);
#line 201
return ___nl__im__188;
return NULL;

}

ImmT  module_checker0check_used_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "module_checker0check_used_functions");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
tc_types0return_t0type *var3 = &(_tab[3]);
ImmT  res = module_checker0check_used_functions(*var0, *var1, *var2, var3);
return res;
}
ImmT  module_checker0check_used_functions(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,tc_types0return_t0type* ___ref___im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
module_checker_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__string__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__string__52 = NULL;
#line 205
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 206
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__4));
#line 206
label_2:
;
#line 206
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 206
if(___nl__bool__6){ goto label_44;}
#line 206
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 206
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__5));
#line 206
___nl__int__7 = getIntFromImm(___nl__im__9);
#line 207
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__5);
#line 207
___nl__bool__10 = !___nl__bool__10;
#line 207
___nl__bool__10 = !___nl__bool__10;
#line 207
if(___nl__bool__10){ goto label_38;}
#line 208
c_rt_lib0move(&___nl__im__11,___get_global_string_const(138));
#line 208
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__3), ___nl__im__11));
#line 208
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1064));
#line 208
___nl__int__14 = 0;
#line 208
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 208
___nl__int__16 = 0;
#line 208
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 208
c_rt_lib0move(&___nl__im__18,___get_global_string_const(181));
#line 208
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(227)));
#line 208
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(5, ___get_global_string_const(171), ___nl__im__13, ___get_global_string_const(168), ___nl__im__15, ___get_global_string_const(229), ___nl__im__17, ___get_global_string_const(166), ___nl__im__18, ___get_global_string_const(110), ___nl__im__19));
#line 208
c_rt_lib0clear(&___nl__im__13);
#line 208
//clear ___nl__int__14;
#line 208
c_rt_lib0clear(&___nl__im__15);
#line 208
//clear ___nl__int__16;
#line 208
c_rt_lib0clear(&___nl__im__17);
#line 208
c_rt_lib0clear(&___nl__im__18);
#line 208
c_rt_lib0clear(&___nl__im__19);
#line 208
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 208
c_rt_lib0move(&___nl__string__20,___get_global_string_const(138));
#line 208
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__3, ___nl__string__20, ___nl__im__11));
#line 208
c_rt_lib0clear(&___nl__im__11);
#line 208
c_rt_lib0clear(&___nl__im__12);
#line 208
c_rt_lib0clear(&___nl__string__20);
#line 209
//clear ___nl__bool__10;
#line 209
goto label_41;
#line 210
goto label_38;
#line 210
label_38:
;
#line 210
//clear ___nl__bool__10;
#line 211
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__im__5, ___nl__im__1, &___nl__im__0));
#line 211
label_41:
;
#line 212
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 212
goto label_2;
#line 212
label_44:
;
#line 213
___nl__int__22 = 0;
#line 213
___nl__int__23 = 1;
#line 213
___nl__int__24 = c_rt_lib0array_len(___nl__im__2);
#line 213
label_48:
;
#line 213
___nl__bool__25 = ___nl__int__22 >= ___nl__int__24;
#line 213
if(___nl__bool__25){ goto label_122;}
#line 213
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__2, ___nl__int__22));
#line 213
c_rt_lib0copy(&___nl__im__21, ___nl__im__26);
#line 214
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(219)));
#line 214
___nl__int__29 = 0;
#line 214
___nl__int__30 = 1;
#line 214
___nl__int__31 = c_rt_lib0array_len(___nl__im__27);
#line 214
label_57:
;
#line 214
___nl__bool__32 = ___nl__int__29 >= ___nl__int__31;
#line 214
if(___nl__bool__32){ goto label_118;}
#line 214
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__27, ___nl__int__29));
#line 214
c_rt_lib0copy(&___nl__im__28, ___nl__im__33);
#line 215
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(232)));
#line 215
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_string_const(233));
#line 215
c_rt_lib0clear(&___nl__im__37);
#line 215
if(___nl__bool__36){ goto label_68;}
#line 215
c_rt_lib0move(&___nl__im__35,___get_global_string_const(36));
#line 215
goto label_70;
#line 215
label_68:
;
#line 215
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(185)));
#line 215
label_70:
;
#line 215
//clear ___nl__bool__36;
#line 215
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(185)));
#line 215
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(185)));
#line 215
c_rt_lib0move(&___nl__im__34, module_checker_priv0get_fun_key(___nl__im__35, ___nl__im__38, ___nl__im__39));
#line 215
c_rt_lib0clear(&___nl__im__35);
#line 215
c_rt_lib0clear(&___nl__im__38);
#line 215
c_rt_lib0clear(&___nl__im__39);
#line 216
___nl__bool__40 = hash0has_key(___nl__im__0, ___nl__im__34);
#line 216
___nl__bool__40 = !___nl__bool__40;
#line 216
if(___nl__bool__40){ goto label_85;}
#line 216
c_rt_lib0clear(&___nl__im__34);
#line 216
//clear ___nl__bool__40;
#line 216
goto label_115;
#line 216
goto label_85;
#line 216
label_85:
;
#line 216
//clear ___nl__bool__40;
#line 217
c_rt_lib0move(&___nl__im__41,___get_global_string_const(138));
#line 217
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__3), ___nl__im__41));
#line 217
c_rt_lib0move(&___nl__im__44,___get_global_string_const(1063));
#line 217
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__34));
#line 217
c_rt_lib0clear(&___nl__im__44);
#line 217
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(168)));
#line 217
___nl__int__45 = getIntFromImm(___nl__im__46);
#line 217
c_rt_lib0clear(&___nl__im__46);
#line 217
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__45));
#line 217
___nl__int__48 = 0;
#line 217
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__48));
#line 217
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(185)));
#line 217
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_string_const(227)));
#line 217
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(5, ___get_global_string_const(171), ___nl__im__43, ___get_global_string_const(168), ___nl__im__47, ___get_global_string_const(229), ___nl__im__49, ___get_global_string_const(166), ___nl__im__50, ___get_global_string_const(110), ___nl__im__51));
#line 217
c_rt_lib0clear(&___nl__im__43);
#line 217
//clear ___nl__int__45;
#line 217
c_rt_lib0clear(&___nl__im__47);
#line 217
//clear ___nl__int__48;
#line 217
c_rt_lib0clear(&___nl__im__49);
#line 217
c_rt_lib0clear(&___nl__im__50);
#line 217
c_rt_lib0clear(&___nl__im__51);
#line 217
c_rt_lib0delete(array0push(&___nl__im__41, ___nl__im__42));
#line 217
c_rt_lib0move(&___nl__string__52,___get_global_string_const(138));
#line 217
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__3, ___nl__string__52, ___nl__im__41));
#line 217
c_rt_lib0clear(&___nl__im__41);
#line 217
c_rt_lib0clear(&___nl__im__42);
#line 217
c_rt_lib0clear(&___nl__string__52);
#line 217
c_rt_lib0clear(&___nl__im__28);
#line 217
label_115:
;
#line 218
___nl__int__29 = ___nl__int__29 + ___nl__int__30;
#line 218
goto label_57;
#line 218
label_118:
;
#line 218
c_rt_lib0clear(&___nl__im__21);
#line 219
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 219
goto label_48;
#line 219
label_122:
;
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__1);
#line 219
c_rt_lib0clear(&___nl__im__2);
#line 219
c_rt_lib0clear(&___nl__im__4);
#line 219
c_rt_lib0clear(&___nl__im__5);
#line 219
//clear ___nl__bool__6;
#line 219
//clear ___nl__int__7;
#line 219
c_rt_lib0clear(&___nl__im__8);
#line 219
c_rt_lib0clear(&___nl__im__9);
#line 219
c_rt_lib0clear(&___nl__im__21);
#line 219
//clear ___nl__int__22;
#line 219
//clear ___nl__int__23;
#line 219
//clear ___nl__int__24;
#line 219
//clear ___nl__bool__25;
#line 219
c_rt_lib0clear(&___nl__im__26);
#line 219
c_rt_lib0clear(&___nl__im__27);
#line 219
c_rt_lib0clear(&___nl__im__28);
#line 219
//clear ___nl__int__29;
#line 219
//clear ___nl__int__30;
#line 219
//clear ___nl__int__31;
#line 219
//clear ___nl__bool__32;
#line 219
c_rt_lib0clear(&___nl__im__33);
#line 219
c_rt_lib0clear(&___nl__im__34);
#line 219
return NULL;
return NULL;

}

ImmT  module_checker_priv0check_types_imported(tct0meta_type0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
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
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
#line 223
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 223
if(___nl__bool__2){ goto label_33;}
#line 224
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 224
if(___nl__bool__2){ goto label_35;}
#line 226
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 226
if(___nl__bool__2){ goto label_40;}
#line 228
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 228
if(___nl__bool__2){ goto label_45;}
#line 230
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 230
if(___nl__bool__2){ goto label_50;}
#line 232
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 232
if(___nl__bool__2){ goto label_55;}
#line 236
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 236
if(___nl__bool__2){ goto label_69;}
#line 240
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 240
if(___nl__bool__2){ goto label_83;}
#line 249
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 249
if(___nl__bool__2){ goto label_142;}
#line 250
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 250
if(___nl__bool__2){ goto label_144;}
#line 251
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 251
if(___nl__bool__2){ goto label_146;}
#line 252
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 252
if(___nl__bool__2){ goto label_148;}
#line 253
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 253
if(___nl__bool__2){ goto label_150;}
#line 260
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 260
if(___nl__bool__2){ goto label_182;}
#line 267
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 267
if(___nl__bool__2){ goto label_214;}
#line 267
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 267
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 267
nl_die_arg(___nl__im__3);
#line 223
label_33:
;
#line 224
goto label_216;
#line 224
label_35:
;
#line 224
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 224
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 225
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__4, ___ref___im__1));
#line 226
goto label_216;
#line 226
label_40:
;
#line 226
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 226
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 227
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__6, ___ref___im__1));
#line 228
goto label_216;
#line 228
label_45:
;
#line 228
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 228
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 229
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__8, ___ref___im__1));
#line 230
goto label_216;
#line 230
label_50:
;
#line 230
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 230
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 231
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__10, ___ref___im__1));
#line 232
goto label_216;
#line 232
label_55:
;
#line 232
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 232
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 233
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__12));
#line 233
label_59:
;
#line 233
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 233
if(___nl__bool__15){ goto label_67;}
#line 233
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 233
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__12, ___nl__im__14));
#line 234
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__16, ___ref___im__1));
#line 235
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 235
goto label_59;
#line 235
label_67:
;
#line 236
goto label_216;
#line 236
label_69:
;
#line 236
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 236
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 237
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter(___nl__im__18));
#line 237
label_73:
;
#line 237
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 237
if(___nl__bool__21){ goto label_81;}
#line 237
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 237
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value(___nl__im__18, ___nl__im__20));
#line 238
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__22, ___ref___im__1));
#line 239
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 239
goto label_73;
#line 239
label_81:
;
#line 240
goto label_216;
#line 240
label_83:
;
#line 240
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 240
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 241
c_rt_lib0move(&___nl__im__27,___get_global_string_const(34));
#line 241
___nl__int__26 = string0index2(___nl__im__24, ___nl__im__27);
#line 241
c_rt_lib0clear(&___nl__im__27);
#line 242
___nl__int__29 = 0;
#line 242
___nl__bool__28 = ___nl__int__26 >= ___nl__int__29;
#line 242
//clear ___nl__int__29;
#line 242
___nl__bool__28 = !___nl__bool__28;
#line 242
if(___nl__bool__28){ goto label_120;}
#line 243
___nl__int__31 = 0;
#line 243
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__31));
#line 243
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__26));
#line 243
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__24, ___nl__im__32, ___nl__im__33));
#line 243
//clear ___nl__int__31;
#line 243
c_rt_lib0clear(&___nl__im__32);
#line 243
c_rt_lib0clear(&___nl__im__33);
#line 244
___nl__int__36 = 2;
#line 244
___nl__int__35 = ___nl__int__26 + ___nl__int__36;
#line 244
//clear ___nl__int__36;
#line 244
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__35));
#line 244
___nl__int__40 = string0length(___nl__im__24);
#line 244
___nl__int__39 = ___nl__int__40 - ___nl__int__26;
#line 244
//clear ___nl__int__40;
#line 244
___nl__int__41 = 2;
#line 244
___nl__int__38 = ___nl__int__39 - ___nl__int__41;
#line 244
//clear ___nl__int__39;
#line 244
//clear ___nl__int__41;
#line 244
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__38));
#line 244
c_rt_lib0move(&___nl__im__34, string0substr(___nl__im__24, ___nl__im__37, ___nl__im__42));
#line 244
//clear ___nl__int__35;
#line 244
c_rt_lib0clear(&___nl__im__37);
#line 244
//clear ___nl__int__38;
#line 244
c_rt_lib0clear(&___nl__im__42);
#line 245
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__30, ___nl__im__34, ___ref___im__1));
#line 246
goto label_137;
#line 246
label_120:
;
#line 247
c_rt_lib0move(&___nl__im__43,___get_global_string_const(50));
#line 247
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__43));
#line 247
c_rt_lib0move(&___nl__im__46,___get_global_string_const(1065));
#line 247
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__24));
#line 247
c_rt_lib0clear(&___nl__im__46);
#line 247
c_rt_lib0move(&___nl__im__47,___get_global_string_const(1066));
#line 247
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__47));
#line 247
c_rt_lib0clear(&___nl__im__45);
#line 247
c_rt_lib0clear(&___nl__im__47);
#line 247
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__43, ___nl__im__44));
#line 247
c_rt_lib0move(&___nl__string__48,___get_global_string_const(50));
#line 247
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__48, ___nl__im__43));
#line 247
c_rt_lib0clear(&___nl__im__43);
#line 247
c_rt_lib0clear(&___nl__im__44);
#line 247
c_rt_lib0clear(&___nl__string__48);
#line 248
goto label_137;
#line 248
label_137:
;
#line 248
//clear ___nl__bool__28;
#line 248
c_rt_lib0clear(&___nl__im__30);
#line 248
c_rt_lib0clear(&___nl__im__34);
#line 249
goto label_216;
#line 249
label_142:
;
#line 250
goto label_216;
#line 250
label_144:
;
#line 251
goto label_216;
#line 251
label_146:
;
#line 252
goto label_216;
#line 252
label_148:
;
#line 253
goto label_216;
#line 253
label_150:
;
#line 253
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 253
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 254
c_rt_lib0move(&___nl__im__54, c_rt_lib0init_iter(___nl__im__49));
#line 254
label_154:
;
#line 254
___nl__bool__52 = c_rt_lib0is_end_hash(___nl__im__54);
#line 254
if(___nl__bool__52){ goto label_180;}
#line 254
c_rt_lib0move(&___nl__im__51, c_rt_lib0get_key_iter(___nl__im__54));
#line 254
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value(___nl__im__49, ___nl__im__51));
#line 255
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__53, ___get_global_string_const(28));
#line 255
if(___nl__bool__55){ goto label_166;}
#line 256
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__53, ___get_global_string_const(27));
#line 256
if(___nl__bool__55){ goto label_168;}
#line 256
c_rt_lib0move(&___nl__im__56,___get_global_string_const(15));
#line 256
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(2, ___nl__im__56, ___nl__im__53));
#line 256
nl_die_arg(___nl__im__56);
#line 255
label_166:
;
#line 256
goto label_173;
#line 256
label_168:
;
#line 256
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__53, ___get_global_string_const(27)));
#line 256
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 257
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__57, ___ref___im__1));
#line 258
goto label_173;
#line 258
label_173:
;
#line 258
//clear ___nl__bool__55;
#line 258
c_rt_lib0clear(&___nl__im__56);
#line 258
c_rt_lib0clear(&___nl__im__57);
#line 258
c_rt_lib0clear(&___nl__im__58);
#line 259
c_rt_lib0move(&___nl__im__54, c_rt_lib0next_iter(___nl__im__54));
#line 259
goto label_154;
#line 259
label_180:
;
#line 260
goto label_216;
#line 260
label_182:
;
#line 260
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 260
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 261
c_rt_lib0move(&___nl__im__64, c_rt_lib0init_iter(___nl__im__59));
#line 261
label_186:
;
#line 261
___nl__bool__62 = c_rt_lib0is_end_hash(___nl__im__64);
#line 261
if(___nl__bool__62){ goto label_212;}
#line 261
c_rt_lib0move(&___nl__im__61, c_rt_lib0get_key_iter(___nl__im__64));
#line 261
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value(___nl__im__59, ___nl__im__61));
#line 262
___nl__bool__65 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(28));
#line 262
if(___nl__bool__65){ goto label_198;}
#line 263
___nl__bool__65 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(27));
#line 263
if(___nl__bool__65){ goto label_200;}
#line 263
c_rt_lib0move(&___nl__im__66,___get_global_string_const(15));
#line 263
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(2, ___nl__im__66, ___nl__im__63));
#line 263
nl_die_arg(___nl__im__66);
#line 262
label_198:
;
#line 263
goto label_205;
#line 263
label_200:
;
#line 263
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(27)));
#line 263
c_rt_lib0copy(&___nl__im__67, ___nl__im__68);
#line 264
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__67, ___ref___im__1));
#line 265
goto label_205;
#line 265
label_205:
;
#line 265
//clear ___nl__bool__65;
#line 265
c_rt_lib0clear(&___nl__im__66);
#line 265
c_rt_lib0clear(&___nl__im__67);
#line 265
c_rt_lib0clear(&___nl__im__68);
#line 266
c_rt_lib0move(&___nl__im__64, c_rt_lib0next_iter(___nl__im__64));
#line 266
goto label_186;
#line 266
label_212:
;
#line 267
goto label_216;
#line 267
label_214:
;
#line 268
goto label_216;
#line 268
label_216:
;
#line 268
c_rt_lib0clear(&___nl__im__0);
#line 268
//clear ___nl__bool__2;
#line 268
c_rt_lib0clear(&___nl__im__3);
#line 268
c_rt_lib0clear(&___nl__im__4);
#line 268
c_rt_lib0clear(&___nl__im__5);
#line 268
c_rt_lib0clear(&___nl__im__6);
#line 268
c_rt_lib0clear(&___nl__im__7);
#line 268
c_rt_lib0clear(&___nl__im__8);
#line 268
c_rt_lib0clear(&___nl__im__9);
#line 268
c_rt_lib0clear(&___nl__im__10);
#line 268
c_rt_lib0clear(&___nl__im__11);
#line 268
c_rt_lib0clear(&___nl__im__12);
#line 268
c_rt_lib0clear(&___nl__im__13);
#line 268
c_rt_lib0clear(&___nl__im__14);
#line 268
//clear ___nl__bool__15;
#line 268
c_rt_lib0clear(&___nl__im__16);
#line 268
c_rt_lib0clear(&___nl__im__17);
#line 268
c_rt_lib0clear(&___nl__im__18);
#line 268
c_rt_lib0clear(&___nl__im__19);
#line 268
c_rt_lib0clear(&___nl__im__20);
#line 268
//clear ___nl__bool__21;
#line 268
c_rt_lib0clear(&___nl__im__22);
#line 268
c_rt_lib0clear(&___nl__im__23);
#line 268
c_rt_lib0clear(&___nl__im__24);
#line 268
c_rt_lib0clear(&___nl__im__25);
#line 268
//clear ___nl__int__26;
#line 268
c_rt_lib0clear(&___nl__im__49);
#line 268
c_rt_lib0clear(&___nl__im__50);
#line 268
c_rt_lib0clear(&___nl__im__51);
#line 268
//clear ___nl__bool__52;
#line 268
c_rt_lib0clear(&___nl__im__53);
#line 268
c_rt_lib0clear(&___nl__im__54);
#line 268
//clear ___nl__bool__55;
#line 268
c_rt_lib0clear(&___nl__im__56);
#line 268
c_rt_lib0clear(&___nl__im__57);
#line 268
c_rt_lib0clear(&___nl__im__58);
#line 268
c_rt_lib0clear(&___nl__im__59);
#line 268
c_rt_lib0clear(&___nl__im__60);
#line 268
c_rt_lib0clear(&___nl__im__61);
#line 268
//clear ___nl__bool__62;
#line 268
c_rt_lib0clear(&___nl__im__63);
#line 268
c_rt_lib0clear(&___nl__im__64);
#line 268
//clear ___nl__bool__65;
#line 268
c_rt_lib0clear(&___nl__im__66);
#line 268
c_rt_lib0clear(&___nl__im__67);
#line 268
c_rt_lib0clear(&___nl__im__68);
#line 268
return NULL;

}

ImmT  module_checker_priv0get_fun_key(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
module_checker_priv0__const__init();
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
#line 272
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 272
___nl__bool__3 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
___nl__bool__3 = !___nl__bool__3;
#line 272
___nl__bool__3 = !___nl__bool__3;
#line 272
if(___nl__bool__3){ goto label_17;}
#line 272
c_rt_lib0move(&___nl__im__7,___get_global_string_const(34));
#line 272
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__0, ___nl__im__7));
#line 272
c_rt_lib0clear(&___nl__im__7);
#line 272
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 272
c_rt_lib0clear(&___nl__im__6);
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
c_rt_lib0clear(&___nl__im__1);
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 272
//clear ___nl__bool__3;
#line 272
return ___nl__im__5;
#line 272
goto label_17;
#line 272
label_17:
;
#line 272
//clear ___nl__bool__3;
#line 272
c_rt_lib0clear(&___nl__im__5);
#line 273
c_rt_lib0move(&___nl__im__11,___get_global_string_const(1067));
#line 273
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__2));
#line 273
c_rt_lib0clear(&___nl__im__11);
#line 273
c_rt_lib0move(&___nl__im__12,___get_global_string_const(34));
#line 273
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 273
c_rt_lib0clear(&___nl__im__10);
#line 273
c_rt_lib0clear(&___nl__im__12);
#line 273
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 273
c_rt_lib0clear(&___nl__im__9);
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
c_rt_lib0clear(&___nl__im__2);
#line 273
return ___nl__im__8;
return NULL;

}

ImmT  module_checker_priv0add_fun_used(ImmT  ___nl__im__0,ImmT  ___nl__im__1,module_checker0state_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__string__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
#line 277
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(1052)));
#line 277
c_rt_lib0move(&___nl__im__3, module_checker_priv0get_fun_key(___nl__im__0, ___nl__im__1, ___nl__im__4));
#line 277
c_rt_lib0clear(&___nl__im__4);
#line 278
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(1051)));
#line 278
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(257)));
#line 278
c_rt_lib0clear(&___nl__im__7);
#line 278
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__3);
#line 278
c_rt_lib0clear(&___nl__im__6);
#line 278
___nl__bool__5 = !___nl__bool__5;
#line 278
if(___nl__bool__5){ goto label_16;}
#line 278
c_rt_lib0clear(&___nl__im__0);
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
c_rt_lib0clear(&___nl__im__3);
#line 278
//clear ___nl__bool__5;
#line 278
return NULL;
#line 278
goto label_16;
#line 278
label_16:
;
#line 278
//clear ___nl__bool__5;
#line 279
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1051));
#line 279
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__8));
#line 279
c_rt_lib0move(&___nl__im__9,___get_global_string_const(257));
#line 279
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash(___nl__im__8, ___nl__im__9));
#line 279
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(50)));
#line 279
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(1055)));
#line 279
___nl__int__10 = getIntFromImm(___nl__im__12);
#line 279
c_rt_lib0clear(&___nl__im__11);
#line 279
c_rt_lib0clear(&___nl__im__12);
#line 279
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__10));
#line 279
c_rt_lib0delete(hash0set_value(&___nl__im__9, ___nl__im__3, ___nl__im__13));
#line 279
c_rt_lib0move(&___nl__string__14,___get_global_string_const(257));
#line 279
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__8, ___nl__string__14, ___nl__im__9));
#line 279
c_rt_lib0move(&___nl__string__14,___get_global_string_const(1051));
#line 279
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__14, ___nl__im__8));
#line 279
c_rt_lib0clear(&___nl__im__8);
#line 279
c_rt_lib0clear(&___nl__im__9);
#line 279
//clear ___nl__int__10;
#line 279
c_rt_lib0clear(&___nl__im__13);
#line 279
c_rt_lib0clear(&___nl__string__14);
#line 280
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 280
___nl__bool__15 = c_rt_lib0eq(___nl__im__0, ___nl__im__16);
#line 280
c_rt_lib0clear(&___nl__im__16);
#line 280
if(___nl__bool__15){ goto label_47;}
#line 280
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(1051)));
#line 280
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(166)));
#line 280
c_rt_lib0clear(&___nl__im__18);
#line 280
___nl__bool__15 = hash0has_key(___nl__im__17, ___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__17);
#line 280
label_47:
;
#line 280
___nl__bool__15 = !___nl__bool__15;
#line 280
if(___nl__bool__15){ goto label_56;}
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
c_rt_lib0clear(&___nl__im__3);
#line 280
//clear ___nl__bool__15;
#line 280
return NULL;
#line 280
goto label_56;
#line 280
label_56:
;
#line 280
//clear ___nl__bool__15;
#line 281
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1051));
#line 281
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__19));
#line 281
c_rt_lib0move(&___nl__im__20,___get_global_string_const(166));
#line 281
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 281
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(50)));
#line 281
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(1055)));
#line 281
___nl__int__21 = getIntFromImm(___nl__im__23);
#line 281
c_rt_lib0clear(&___nl__im__22);
#line 281
c_rt_lib0clear(&___nl__im__23);
#line 281
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__21));
#line 281
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__24));
#line 281
c_rt_lib0move(&___nl__string__25,___get_global_string_const(166));
#line 281
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__25, ___nl__im__20));
#line 281
c_rt_lib0move(&___nl__string__25,___get_global_string_const(1051));
#line 281
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__25, ___nl__im__19));
#line 281
c_rt_lib0clear(&___nl__im__19);
#line 281
c_rt_lib0clear(&___nl__im__20);
#line 281
//clear ___nl__int__21;
#line 281
c_rt_lib0clear(&___nl__im__24);
#line 281
c_rt_lib0clear(&___nl__string__25);
#line 281
c_rt_lib0clear(&___nl__im__0);
#line 281
c_rt_lib0clear(&___nl__im__1);
#line 281
c_rt_lib0clear(&___nl__im__3);
#line 281
return NULL;

}

module_checker0return_t0type module_checker_priv0check_return_type(nast0variable_type_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 285
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(76));
#line 285
if(___nl__bool__2){ goto label_7;}
#line 287
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(110));
#line 287
if(___nl__bool__2){ goto label_14;}
#line 287
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 287
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 287
nl_die_arg(___nl__im__3);
#line 285
label_7:
;
#line 286
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
//clear ___nl__bool__2;
#line 286
c_rt_lib0clear(&___nl__im__3);
#line 286
return ___nl__im__4;
#line 287
goto label_68;
#line 287
label_14:
;
#line 287
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(110)));
#line 287
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 288
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(241)));
#line 288
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(1068));
#line 288
c_rt_lib0clear(&___nl__im__8);
#line 288
___nl__bool__7 = !___nl__bool__7;
#line 288
if(___nl__bool__7){ goto label_64;}
#line 289
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(241)));
#line 289
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(241)));
#line 289
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1068)));
#line 289
c_rt_lib0clear(&___nl__im__10);
#line 289
c_rt_lib0clear(&___nl__im__11);
#line 290
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(166)));
#line 290
c_rt_lib0move(&___nl__im__15,___get_global_string_const(319));
#line 290
___nl__bool__12 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 290
c_rt_lib0clear(&___nl__im__14);
#line 290
c_rt_lib0clear(&___nl__im__15);
#line 290
___nl__bool__13 = !___nl__bool__12;
#line 290
if(___nl__bool__13){ goto label_39;}
#line 290
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(185)));
#line 290
c_rt_lib0move(&___nl__im__17,___get_global_string_const(1045));
#line 290
___nl__bool__12 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 290
c_rt_lib0clear(&___nl__im__16);
#line 290
c_rt_lib0clear(&___nl__im__17);
#line 290
label_39:
;
#line 290
//clear ___nl__bool__13;
#line 290
___nl__bool__12 = !___nl__bool__12;
#line 290
if(___nl__bool__12){ goto label_60;}
#line 291
c_rt_lib0move(&___nl__im__18,___get_global_string_const(319));
#line 291
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1045));
#line 291
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__18, ___nl__im__19, ___ref___im__1));
#line 291
c_rt_lib0clear(&___nl__im__18);
#line 291
c_rt_lib0clear(&___nl__im__19);
#line 292
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(1045)));
#line 292
c_rt_lib0clear(&___nl__im__0);
#line 292
//clear ___nl__bool__2;
#line 292
c_rt_lib0clear(&___nl__im__3);
#line 292
c_rt_lib0clear(&___nl__im__4);
#line 292
c_rt_lib0clear(&___nl__im__5);
#line 292
c_rt_lib0clear(&___nl__im__6);
#line 292
//clear ___nl__bool__7;
#line 292
c_rt_lib0clear(&___nl__im__9);
#line 292
//clear ___nl__bool__12;
#line 292
return ___nl__im__20;
#line 293
goto label_60;
#line 293
label_60:
;
#line 293
//clear ___nl__bool__12;
#line 293
c_rt_lib0clear(&___nl__im__20);
#line 294
goto label_64;
#line 294
label_64:
;
#line 294
//clear ___nl__bool__7;
#line 294
c_rt_lib0clear(&___nl__im__9);
#line 295
goto label_68;
#line 295
label_68:
;
#line 296
c_rt_lib0delete(module_checker_priv0check_type(___nl__im__0, ___ref___im__1));
#line 297
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
//clear ___nl__bool__2;
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
c_rt_lib0clear(&___nl__im__4);
#line 297
c_rt_lib0clear(&___nl__im__5);
#line 297
c_rt_lib0clear(&___nl__im__6);
#line 297
return ___nl__im__21;
return NULL;

}

ImmT  module_checker_priv0check_type(nast0variable_type_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
bool  ___nl__bool__2 = false;
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
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 301
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(76));
#line 301
if(___nl__bool__2){ goto label_7;}
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(110));
#line 302
if(___nl__bool__2){ goto label_9;}
#line 302
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 302
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 302
nl_die_arg(___nl__im__3);
#line 301
label_7:
;
#line 302
goto label_57;
#line 302
label_9:
;
#line 302
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(110)));
#line 302
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 303
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(241)));
#line 303
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1068));
#line 303
c_rt_lib0clear(&___nl__im__7);
#line 303
___nl__bool__6 = !___nl__bool__6;
#line 303
if(___nl__bool__6){ goto label_28;}
#line 304
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(241)));
#line 304
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(241)));
#line 304
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(1068)));
#line 304
c_rt_lib0clear(&___nl__im__9);
#line 304
c_rt_lib0clear(&___nl__im__10);
#line 305
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(166)));
#line 305
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(185)));
#line 305
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__11, ___nl__im__12, ___ref___im__1));
#line 305
c_rt_lib0clear(&___nl__im__11);
#line 305
c_rt_lib0clear(&___nl__im__12);
#line 306
goto label_28;
#line 306
label_28:
;
#line 306
//clear ___nl__bool__6;
#line 306
c_rt_lib0clear(&___nl__im__8);
#line 307
c_rt_lib0move(&___nl__im__13, ptd_parser0try_value_to_ptd(___nl__im__4));
#line 307
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(82));
#line 307
if(___nl__bool__14){ goto label_39;}
#line 309
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(83));
#line 309
if(___nl__bool__14){ goto label_50;}
#line 309
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 309
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 309
nl_die_arg(___nl__im__15);
#line 307
label_39:
;
#line 307
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(82)));
#line 307
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 308
c_rt_lib0move(&___nl__im__18,___get_global_string_const(50));
#line 308
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__18));
#line 308
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__18, ___nl__im__16));
#line 308
c_rt_lib0move(&___nl__string__19,___get_global_string_const(50));
#line 308
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__19, ___nl__im__18));
#line 308
c_rt_lib0clear(&___nl__im__18);
#line 308
c_rt_lib0clear(&___nl__string__19);
#line 309
goto label_55;
#line 309
label_50:
;
#line 309
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(83)));
#line 309
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 310
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__20, ___ref___im__1));
#line 311
goto label_55;
#line 311
label_55:
;
#line 312
goto label_57;
#line 312
label_57:
;
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
//clear ___nl__bool__2;
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
//clear ___nl__bool__14;
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
return NULL;

}

ImmT  module_checker_priv0add_var(ImmT  ___nl__im__0,bool  ___nl__bool__1,bool  ___nl__bool__2,bool  ___nl__bool__3,module_checker0state_t0type* ___ref___im__4) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__string__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__string__21 = NULL;
#line 317
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(896)));
#line 317
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__0);
#line 317
c_rt_lib0clear(&___nl__im__6);
#line 317
___nl__bool__5 = !___nl__bool__5;
#line 317
if(___nl__bool__5){ goto label_17;}
#line 318
c_rt_lib0move(&___nl__im__7,___get_global_string_const(50));
#line 318
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__7));
#line 318
c_rt_lib0move(&___nl__im__9,___get_global_string_const(1069));
#line 318
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__0));
#line 318
c_rt_lib0clear(&___nl__im__9);
#line 318
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__7, ___nl__im__8));
#line 318
c_rt_lib0move(&___nl__string__10,___get_global_string_const(50));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__10, ___nl__im__7));
#line 318
c_rt_lib0clear(&___nl__im__7);
#line 318
c_rt_lib0clear(&___nl__im__8);
#line 318
c_rt_lib0clear(&___nl__string__10);
#line 319
goto label_17;
#line 319
label_17:
;
#line 319
//clear ___nl__bool__5;
#line 320
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 320
___nl__bool__13 = false;
#line 320
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 320
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 320
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 320
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(355), ___nl__im__12, ___get_global_string_const(360), ___nl__im__14, ___get_global_string_const(1044), ___nl__im__15, ___get_global_string_const(1043), ___nl__im__16));
#line 320
c_rt_lib0clear(&___nl__im__12);
#line 320
//clear ___nl__bool__13;
#line 320
c_rt_lib0clear(&___nl__im__14);
#line 320
c_rt_lib0clear(&___nl__im__15);
#line 320
c_rt_lib0clear(&___nl__im__16);
#line 321
___nl__bool__17 = ___nl__bool__1;
#line 321
___nl__bool__17 = !___nl__bool__17;
#line 321
if(___nl__bool__17){ goto label_39;}
#line 321
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(243)));
#line 321
c_rt_lib0copy(&___nl__im__19, ___nl__im__18);
#line 321
c_rt_lib0hash_set_value_dec(&___nl__im__11, ___get_global_string_const(355), ___nl__im__19);
#line 321
c_rt_lib0clear(&___nl__im__18);
#line 321
c_rt_lib0clear(&___nl__im__19);
#line 321
goto label_39;
#line 321
label_39:
;
#line 321
//clear ___nl__bool__17;
#line 322
c_rt_lib0move(&___nl__im__20,___get_global_string_const(896));
#line 322
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__20));
#line 322
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__11));
#line 322
c_rt_lib0move(&___nl__string__21,___get_global_string_const(896));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__21, ___nl__im__20));
#line 322
c_rt_lib0clear(&___nl__im__20);
#line 322
c_rt_lib0clear(&___nl__string__21);
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
//clear ___nl__bool__1;
#line 322
//clear ___nl__bool__2;
#line 322
//clear ___nl__bool__3;
#line 322
c_rt_lib0clear(&___nl__im__11);
#line 322
return NULL;

}

ImmT  module_checker_priv0use_var(ImmT  ___nl__im__0,ImmT  ___nl__im__1,module_checker0state_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__string__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__string__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__string__46 = NULL;
#line 327
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(896)));
#line 327
___nl__bool__3 = hash0has_key(___nl__im__4, ___nl__im__0);
#line 327
c_rt_lib0clear(&___nl__im__4);
#line 327
___nl__bool__3 = !___nl__bool__3;
#line 327
___nl__bool__3 = !___nl__bool__3;
#line 327
if(___nl__bool__3){ goto label_22;}
#line 328
c_rt_lib0move(&___nl__im__5,___get_global_string_const(50));
#line 328
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__5));
#line 328
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1070));
#line 328
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 328
c_rt_lib0clear(&___nl__im__7);
#line 328
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__5, ___nl__im__6));
#line 328
c_rt_lib0move(&___nl__string__8,___get_global_string_const(50));
#line 328
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__8, ___nl__im__5));
#line 328
c_rt_lib0clear(&___nl__im__5);
#line 328
c_rt_lib0clear(&___nl__im__6);
#line 328
c_rt_lib0clear(&___nl__string__8);
#line 329
c_rt_lib0clear(&___nl__im__0);
#line 329
c_rt_lib0clear(&___nl__im__1);
#line 329
//clear ___nl__bool__3;
#line 329
return NULL;
#line 330
goto label_22;
#line 330
label_22:
;
#line 330
//clear ___nl__bool__3;
#line 331
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_string_const(896)));
#line 331
c_rt_lib0move(&___nl__im__9, hash0get_value(___nl__im__10, ___nl__im__0));
#line 331
c_rt_lib0clear(&___nl__im__10);
#line 332
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1057));
#line 332
if(___nl__bool__11){ goto label_36;}
#line 338
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1056));
#line 338
if(___nl__bool__11){ goto label_72;}
#line 345
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(111));
#line 345
if(___nl__bool__11){ goto label_110;}
#line 345
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 345
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__1));
#line 345
nl_die_arg(___nl__im__12);
#line 332
label_36:
;
#line 333
___nl__bool__13 = true;
#line 333
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 333
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_string_const(360), ___nl__im__14);
#line 333
//clear ___nl__bool__13;
#line 333
c_rt_lib0clear(&___nl__im__14);
#line 334
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1043)));
#line 334
___nl__bool__15 = c_rt_lib0check_true_native(___nl__im__16);
#line 334
c_rt_lib0clear(&___nl__im__16);
#line 334
___nl__bool__15 = !___nl__bool__15;
#line 334
___nl__bool__15 = !___nl__bool__15;
#line 334
if(___nl__bool__15){ goto label_69;}
#line 335
c_rt_lib0move(&___nl__im__17,___get_global_string_const(50));
#line 335
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__17));
#line 335
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1071));
#line 335
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__0));
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0move(&___nl__im__21,___get_global_string_const(1072));
#line 335
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 335
c_rt_lib0clear(&___nl__im__19);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__17, ___nl__im__18));
#line 335
c_rt_lib0move(&___nl__string__22,___get_global_string_const(50));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__22, ___nl__im__17));
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
c_rt_lib0clear(&___nl__string__22);
#line 336
___nl__bool__23 = true;
#line 336
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
#line 336
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_string_const(1043), ___nl__im__24);
#line 336
//clear ___nl__bool__23;
#line 336
c_rt_lib0clear(&___nl__im__24);
#line 337
goto label_69;
#line 337
label_69:
;
#line 337
//clear ___nl__bool__15;
#line 338
goto label_148;
#line 338
label_72:
;
#line 339
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(355)));
#line 339
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(243));
#line 339
c_rt_lib0clear(&___nl__im__26);
#line 339
___nl__bool__25 = !___nl__bool__25;
#line 339
if(___nl__bool__25){ goto label_97;}
#line 340
c_rt_lib0move(&___nl__im__27,___get_global_string_const(50));
#line 340
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__27));
#line 340
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1073));
#line 340
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__0));
#line 340
c_rt_lib0clear(&___nl__im__29);
#line 340
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__27, ___nl__im__28));
#line 340
c_rt_lib0move(&___nl__string__30,___get_global_string_const(50));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__27));
#line 340
c_rt_lib0clear(&___nl__im__27);
#line 340
c_rt_lib0clear(&___nl__im__28);
#line 340
c_rt_lib0clear(&___nl__string__30);
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 341
//clear ___nl__bool__11;
#line 341
c_rt_lib0clear(&___nl__im__12);
#line 341
//clear ___nl__bool__25;
#line 341
return NULL;
#line 342
goto label_97;
#line 342
label_97:
;
#line 342
//clear ___nl__bool__25;
#line 343
___nl__bool__31 = true;
#line 343
c_rt_lib0move(&___nl__im__32, c_rt_lib0bool_to_nl_native(___nl__bool__31));
#line 343
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_string_const(1043), ___nl__im__32);
#line 343
//clear ___nl__bool__31;
#line 343
c_rt_lib0clear(&___nl__im__32);
#line 344
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 344
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 344
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_string_const(355), ___nl__im__34);
#line 344
c_rt_lib0clear(&___nl__im__33);
#line 344
c_rt_lib0clear(&___nl__im__34);
#line 345
goto label_148;
#line 345
label_110:
;
#line 346
___nl__bool__35 = true;
#line 346
c_rt_lib0move(&___nl__im__36, c_rt_lib0bool_to_nl_native(___nl__bool__35));
#line 346
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_string_const(360), ___nl__im__36);
#line 346
//clear ___nl__bool__35;
#line 346
c_rt_lib0clear(&___nl__im__36);
#line 347
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(355)));
#line 347
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(243));
#line 347
c_rt_lib0clear(&___nl__im__38);
#line 347
___nl__bool__37 = !___nl__bool__37;
#line 347
if(___nl__bool__37){ goto label_140;}
#line 348
c_rt_lib0move(&___nl__im__39,___get_global_string_const(50));
#line 348
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__39));
#line 348
c_rt_lib0move(&___nl__im__41,___get_global_string_const(1073));
#line 348
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__0));
#line 348
c_rt_lib0clear(&___nl__im__41);
#line 348
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__39, ___nl__im__40));
#line 348
c_rt_lib0move(&___nl__string__42,___get_global_string_const(50));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__42, ___nl__im__39));
#line 348
c_rt_lib0clear(&___nl__im__39);
#line 348
c_rt_lib0clear(&___nl__im__40);
#line 348
c_rt_lib0clear(&___nl__string__42);
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
c_rt_lib0clear(&___nl__im__1);
#line 349
c_rt_lib0clear(&___nl__im__9);
#line 349
//clear ___nl__bool__11;
#line 349
c_rt_lib0clear(&___nl__im__12);
#line 349
//clear ___nl__bool__37;
#line 349
return NULL;
#line 350
goto label_140;
#line 350
label_140:
;
#line 350
//clear ___nl__bool__37;
#line 351
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 351
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 351
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_string_const(355), ___nl__im__44);
#line 351
c_rt_lib0clear(&___nl__im__43);
#line 351
c_rt_lib0clear(&___nl__im__44);
#line 352
goto label_148;
#line 352
label_148:
;
#line 353
c_rt_lib0move(&___nl__im__45,___get_global_string_const(896));
#line 353
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__45));
#line 353
c_rt_lib0delete(hash0set_value(&___nl__im__45, ___nl__im__0, ___nl__im__9));
#line 353
c_rt_lib0move(&___nl__string__46,___get_global_string_const(896));
#line 353
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__46, ___nl__im__45));
#line 353
c_rt_lib0clear(&___nl__im__45);
#line 353
c_rt_lib0clear(&___nl__string__46);
#line 353
c_rt_lib0clear(&___nl__im__0);
#line 353
c_rt_lib0clear(&___nl__im__1);
#line 353
c_rt_lib0clear(&___nl__im__9);
#line 353
//clear ___nl__bool__11;
#line 353
c_rt_lib0clear(&___nl__im__12);
#line 353
return NULL;

}

ImmT  module_checker_priv0add_var_dec(nast0variable_declaration_t0type ___nl__im__0,bool  ___nl__bool__1,bool  ___nl__bool__2,bool  ___nl__bool__3,module_checker0state_t0type* ___ref___im__4) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 358
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 358
c_rt_lib0delete(module_checker_priv0add_var(___nl__im__5, ___nl__bool__1, ___nl__bool__2, ___nl__bool__3, ___ref___im__4));
#line 358
c_rt_lib0clear(&___nl__im__5);
#line 359
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 359
c_rt_lib0delete(module_checker_priv0check_type(___nl__im__6, ___ref___im__4));
#line 359
c_rt_lib0clear(&___nl__im__6);
#line 360
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 360
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(241));
#line 360
if(___nl__bool__8){ goto label_14;}
#line 364
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(76));
#line 364
if(___nl__bool__8){ goto label_33;}
#line 364
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 364
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 364
nl_die_arg(___nl__im__9);
#line 360
label_14:
;
#line 360
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(241)));
#line 360
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 361
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__10, ___ref___im__4));
#line 362
___nl__bool__12 = ___nl__bool__1;
#line 362
___nl__bool__12 = !___nl__bool__12;
#line 362
if(___nl__bool__12){ goto label_24;}
#line 362
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 362
nl_die_arg(___nl__im__13);
#line 362
goto label_24;
#line 362
label_24:
;
#line 362
//clear ___nl__bool__12;
#line 362
c_rt_lib0clear(&___nl__im__13);
#line 363
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 363
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(1056)));
#line 363
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__14, ___nl__im__15, ___ref___im__4));
#line 363
c_rt_lib0clear(&___nl__im__14);
#line 363
c_rt_lib0clear(&___nl__im__15);
#line 364
goto label_35;
#line 364
label_33:
;
#line 365
goto label_35;
#line 365
label_35:
;
#line 365
c_rt_lib0clear(&___nl__im__0);
#line 365
//clear ___nl__bool__1;
#line 365
//clear ___nl__bool__2;
#line 365
//clear ___nl__bool__3;
#line 365
c_rt_lib0clear(&___nl__im__7);
#line 365
//clear ___nl__bool__8;
#line 365
c_rt_lib0clear(&___nl__im__9);
#line 365
c_rt_lib0clear(&___nl__im__10);
#line 365
c_rt_lib0clear(&___nl__im__11);
#line 365
return NULL;

}

ImmT  module_checker_priv0check_cmd(nast0cmd_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__string__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__string__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__string__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
bool  ___nl__bool__54 = false;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__string__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
bool  ___nl__bool__76 = false;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__string__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
bool  ___nl__bool__94 = false;
bool  ___nl__bool__95 = false;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
bool  ___nl__bool__99 = false;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__string__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
bool  ___nl__bool__108 = false;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
bool  ___nl__bool__113 = false;
bool  ___nl__bool__114 = false;
bool  ___nl__bool__115 = false;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__string__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
bool  ___nl__bool__126 = false;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
bool  ___nl__bool__133 = false;
bool  ___nl__bool__134 = false;
bool  ___nl__bool__135 = false;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__string__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__string__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
bool  ___nl__bool__159 = false;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__string__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
bool  ___nl__bool__168 = false;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__string__171 = NULL;
bool  ___nl__bool__172 = false;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__string__176 = NULL;
bool  ___nl__bool__177 = false;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__string__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
bool  ___nl__bool__185 = false;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
INT  ___nl__int__189 = 0;
INT  ___nl__int__190 = 0;
INT  ___nl__int__191 = 0;
bool  ___nl__bool__192 = false;
ImmT  ___nl__im__193 = NULL;
bool  ___nl__bool__194 = false;
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__string__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
bool  ___nl__bool__202 = false;
ImmT  ___nl__im__203 = NULL;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
bool  ___nl__bool__207 = false;
bool  ___nl__bool__208 = false;
bool  ___nl__bool__209 = false;
ImmT  ___nl__im__210 = NULL;
bool  ___nl__bool__211 = false;
ImmT  ___nl__im__212 = NULL;
ImmT  ___nl__im__213 = NULL;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__string__216 = NULL;
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__string__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
bool  ___nl__bool__226 = false;
ImmT  ___nl__im__227 = NULL;
bool  ___nl__bool__228 = false;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__string__232 = NULL;
ImmT  ___nl__im__233 = NULL;
bool  ___nl__bool__234 = false;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__string__238 = NULL;
bool  ___nl__bool__239 = false;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__string__243 = NULL;
ImmT  ___nl__im__244 = NULL;
bool  ___nl__bool__245 = false;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__string__249 = NULL;
bool  ___nl__bool__250 = false;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__string__254 = NULL;
ImmT  ___nl__im__255 = NULL;
bool  ___nl__bool__256 = false;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__string__260 = NULL;
bool  ___nl__bool__261 = false;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__string__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
bool  ___nl__bool__268 = false;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
bool  ___nl__bool__271 = false;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__string__275 = NULL;
bool  ___nl__bool__276 = false;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__string__279 = NULL;
ImmT  ___nl__im__280 = NULL;
ImmT  ___nl__im__281 = NULL;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
INT  ___nl__int__285 = 0;
INT  ___nl__int__286 = 0;
INT  ___nl__int__287 = 0;
bool  ___nl__bool__288 = false;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
INT  ___nl__int__293 = 0;
INT  ___nl__int__294 = 0;
INT  ___nl__int__295 = 0;
bool  ___nl__bool__296 = false;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
ImmT  ___nl__im__299 = NULL;
bool  ___nl__bool__300 = false;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
bool  ___nl__bool__303 = false;
ImmT  ___nl__im__304 = NULL;
ImmT  ___nl__im__305 = NULL;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__string__307 = NULL;
bool  ___nl__bool__308 = false;
ImmT  ___nl__im__309 = NULL;
ImmT  ___nl__im__310 = NULL;
ImmT  ___nl__string__311 = NULL;
ImmT  ___nl__im__312 = NULL;
ImmT  ___nl__im__313 = NULL;
bool  ___nl__bool__314 = false;
bool  ___nl__bool__315 = false;
bool  ___nl__bool__316 = false;
ImmT  ___nl__im__317 = NULL;
ImmT  ___nl__im__318 = NULL;
ImmT  ___nl__im__319 = NULL;
bool  ___nl__bool__320 = false;
ImmT  ___nl__im__321 = NULL;
ImmT  ___nl__im__322 = NULL;
ImmT  ___nl__im__323 = NULL;
bool  ___nl__bool__324 = false;
bool  ___nl__bool__325 = false;
bool  ___nl__bool__326 = false;
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
bool  ___nl__bool__339 = false;
ImmT  ___nl__im__340 = NULL;
ImmT  ___nl__im__341 = NULL;
ImmT  ___nl__im__342 = NULL;
bool  ___nl__bool__343 = false;
bool  ___nl__bool__344 = false;
bool  ___nl__bool__345 = false;
ImmT  ___nl__im__346 = NULL;
ImmT  ___nl__im__347 = NULL;
ImmT  ___nl__im__348 = NULL;
ImmT  ___nl__im__349 = NULL;
ImmT  ___nl__im__350 = NULL;
ImmT  ___nl__im__351 = NULL;
ImmT  ___nl__im__352 = NULL;
ImmT  ___nl__im__353 = NULL;
ImmT  ___nl__im__354 = NULL;
ImmT  ___nl__im__355 = NULL;
#line 369
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 369
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(561)));
#line 369
c_rt_lib0clear(&___nl__im__4);
#line 369
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(168)));
#line 369
___nl__int__2 = getIntFromImm(___nl__im__5);
#line 369
c_rt_lib0clear(&___nl__im__3);
#line 369
c_rt_lib0clear(&___nl__im__5);
#line 369
c_rt_lib0move(&___nl__im__6,___get_global_string_const(50));
#line 369
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__6));
#line 369
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 369
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1055), ___nl__im__7);
#line 369
c_rt_lib0move(&___nl__string__8,___get_global_string_const(50));
#line 369
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__8, ___nl__im__6));
#line 369
//clear ___nl__int__2;
#line 369
c_rt_lib0clear(&___nl__im__6);
#line 369
c_rt_lib0clear(&___nl__im__7);
#line 369
c_rt_lib0clear(&___nl__string__8);
#line 370
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(266)));
#line 370
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(238)));
#line 370
___nl__bool__9 = c_rt_lib0check_true_native(___nl__im__11);
#line 370
c_rt_lib0clear(&___nl__im__10);
#line 370
c_rt_lib0clear(&___nl__im__11);
#line 370
___nl__bool__9 = !___nl__bool__9;
#line 370
if(___nl__bool__9){ goto label_45;}
#line 371
c_rt_lib0move(&___nl__im__12,___get_global_string_const(50));
#line 371
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__12));
#line 371
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1074));
#line 371
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__12, ___nl__im__13));
#line 371
c_rt_lib0move(&___nl__string__14,___get_global_string_const(50));
#line 371
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__14, ___nl__im__12));
#line 371
c_rt_lib0clear(&___nl__im__12);
#line 371
c_rt_lib0clear(&___nl__im__13);
#line 371
c_rt_lib0clear(&___nl__string__14);
#line 372
___nl__bool__15 = false;
#line 372
c_rt_lib0move(&___nl__im__16,___get_global_string_const(266));
#line 372
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__16));
#line 372
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__15));
#line 372
c_rt_lib0hash_set_value_dec(&___nl__im__16, ___get_global_string_const(238), ___nl__im__17);
#line 372
c_rt_lib0move(&___nl__string__18,___get_global_string_const(266));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__18, ___nl__im__16));
#line 372
//clear ___nl__bool__15;
#line 372
c_rt_lib0clear(&___nl__im__16);
#line 372
c_rt_lib0clear(&___nl__im__17);
#line 372
c_rt_lib0clear(&___nl__string__18);
#line 373
goto label_45;
#line 373
label_45:
;
#line 373
//clear ___nl__bool__9;
#line 374
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 374
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1075));
#line 374
if(___nl__bool__20){ goto label_91;}
#line 397
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1076));
#line 397
if(___nl__bool__20){ goto label_212;}
#line 410
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1077));
#line 410
if(___nl__bool__20){ goto label_270;}
#line 418
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1078));
#line 418
if(___nl__bool__20){ goto label_307;}
#line 427
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(174));
#line 427
if(___nl__bool__20){ goto label_356;}
#line 432
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1079));
#line 432
if(___nl__bool__20){ goto label_368;}
#line 440
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1080));
#line 440
if(___nl__bool__20){ goto label_405;}
#line 447
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1081));
#line 447
if(___nl__bool__20){ goto label_433;}
#line 453
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1082));
#line 453
if(___nl__bool__20){ goto label_456;}
#line 459
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1083));
#line 459
if(___nl__bool__20){ goto label_479;}
#line 463
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1084));
#line 463
if(___nl__bool__20){ goto label_499;}
#line 467
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1085));
#line 467
if(___nl__bool__20){ goto label_519;}
#line 486
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(241));
#line 486
if(___nl__bool__20){ goto label_619;}
#line 488
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(266));
#line 488
if(___nl__bool__20){ goto label_624;}
#line 507
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1086));
#line 507
if(___nl__bool__20){ goto label_821;}
#line 513
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(267));
#line 513
if(___nl__bool__20){ goto label_841;}
#line 521
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(272));
#line 521
if(___nl__bool__20){ goto label_893;}
#line 523
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1087));
#line 523
if(___nl__bool__20){ goto label_906;}
#line 531
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(190));
#line 531
if(___nl__bool__20){ goto label_953;}
#line 539
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(1088));
#line 539
if(___nl__bool__20){ goto label_1000;}
#line 539
c_rt_lib0move(&___nl__im__21,___get_global_string_const(15));
#line 539
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__19));
#line 539
nl_die_arg(___nl__im__21);
#line 374
label_91:
;
#line 374
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1075)));
#line 374
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 375
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(1089)));
#line 375
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__24, ___ref___im__1));
#line 375
c_rt_lib0clear(&___nl__im__24);
#line 376
c_rt_lib0move(&___nl__im__25, module_checker_priv0inits(___ref___im__1));
#line 377
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(1075)));
#line 377
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__26, ___ref___im__1));
#line 377
c_rt_lib0clear(&___nl__im__26);
#line 378
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__25));
#line 379
c_rt_lib0move(&___nl__im__27,___get_global_string_const(359));
#line 379
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash(___nl__im__25, ___nl__im__27));
#line 379
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__27));
#line 379
c_rt_lib0move(&___nl__string__28,___get_global_string_const(359));
#line 379
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__25, ___nl__string__28, ___nl__im__27));
#line 379
c_rt_lib0clear(&___nl__im__27);
#line 379
c_rt_lib0clear(&___nl__string__28);
#line 380
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(266)));
#line 380
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(238)));
#line 380
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__31);
#line 380
c_rt_lib0clear(&___nl__im__30);
#line 380
c_rt_lib0clear(&___nl__im__31);
#line 381
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(1090)));
#line 381
___nl__int__34 = 0;
#line 381
___nl__int__35 = 1;
#line 381
___nl__int__36 = c_rt_lib0array_len(___nl__im__32);
#line 381
label_118:
;
#line 381
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 381
if(___nl__bool__37){ goto label_168;}
#line 381
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__32, ___nl__int__34));
#line 381
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 382
___nl__bool__39 = false;
#line 382
c_rt_lib0move(&___nl__im__40,___get_global_string_const(266));
#line 382
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__40));
#line 382
c_rt_lib0move(&___nl__im__41, c_rt_lib0bool_to_nl_native(___nl__bool__39));
#line 382
c_rt_lib0hash_set_value_dec(&___nl__im__40, ___get_global_string_const(238), ___nl__im__41);
#line 382
c_rt_lib0move(&___nl__string__42,___get_global_string_const(266));
#line 382
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__42, ___nl__im__40));
#line 382
//clear ___nl__bool__39;
#line 382
c_rt_lib0clear(&___nl__im__40);
#line 382
c_rt_lib0clear(&___nl__im__41);
#line 382
c_rt_lib0clear(&___nl__string__42);
#line 383
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(1089)));
#line 383
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__43, ___ref___im__1));
#line 383
c_rt_lib0clear(&___nl__im__43);
#line 384
c_rt_lib0move(&___nl__im__44, module_checker_priv0save_block(___ref___im__1));
#line 384
c_rt_lib0copy(&___nl__im__45, ___nl__im__44);
#line 384
c_rt_lib0hash_set_value_dec(&___nl__im__25, ___get_global_string_const(359), ___nl__im__45);
#line 384
c_rt_lib0clear(&___nl__im__44);
#line 384
c_rt_lib0clear(&___nl__im__45);
#line 385
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(224)));
#line 385
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__46, ___ref___im__1));
#line 385
c_rt_lib0clear(&___nl__im__46);
#line 386
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__25));
#line 387
c_rt_lib0move(&___nl__im__47,___get_global_string_const(359));
#line 387
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash(___nl__im__25, ___nl__im__47));
#line 387
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__47));
#line 387
c_rt_lib0move(&___nl__string__48,___get_global_string_const(359));
#line 387
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__25, ___nl__string__48, ___nl__im__47));
#line 387
c_rt_lib0clear(&___nl__im__47);
#line 387
c_rt_lib0clear(&___nl__string__48);
#line 388
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(266)));
#line 388
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_string_const(238)));
#line 388
___nl__bool__49 = c_rt_lib0check_true_native(___nl__im__51);
#line 388
c_rt_lib0clear(&___nl__im__50);
#line 388
c_rt_lib0clear(&___nl__im__51);
#line 388
___nl__bool__49 = !___nl__bool__49;
#line 388
___nl__bool__49 = !___nl__bool__49;
#line 388
if(___nl__bool__49){ goto label_163;}
#line 388
___nl__bool__29 = false;
#line 388
goto label_163;
#line 388
label_163:
;
#line 388
//clear ___nl__bool__49;
#line 388
c_rt_lib0clear(&___nl__im__33);
#line 389
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 389
goto label_118;
#line 389
label_168:
;
#line 390
c_rt_lib0move(&___nl__im__52, module_checker_priv0save_block(___ref___im__1));
#line 390
c_rt_lib0copy(&___nl__im__53, ___nl__im__52);
#line 390
c_rt_lib0hash_set_value_dec(&___nl__im__25, ___get_global_string_const(359), ___nl__im__53);
#line 390
c_rt_lib0clear(&___nl__im__52);
#line 390
c_rt_lib0clear(&___nl__im__53);
#line 391
___nl__bool__54 = false;
#line 391
c_rt_lib0move(&___nl__im__55,___get_global_string_const(266));
#line 391
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__55));
#line 391
c_rt_lib0move(&___nl__im__56, c_rt_lib0bool_to_nl_native(___nl__bool__54));
#line 391
c_rt_lib0hash_set_value_dec(&___nl__im__55, ___get_global_string_const(238), ___nl__im__56);
#line 391
c_rt_lib0move(&___nl__string__57,___get_global_string_const(266));
#line 391
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__57, ___nl__im__55));
#line 391
//clear ___nl__bool__54;
#line 391
c_rt_lib0clear(&___nl__im__55);
#line 391
c_rt_lib0clear(&___nl__im__56);
#line 391
c_rt_lib0clear(&___nl__string__57);
#line 392
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(1091)));
#line 392
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__58, ___ref___im__1));
#line 392
c_rt_lib0clear(&___nl__im__58);
#line 393
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__25));
#line 394
c_rt_lib0delete(module_checker_priv0flush_inits(___ref___im__1, &___nl__im__25));
#line 395
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(266)));
#line 395
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(238)));
#line 395
___nl__bool__59 = c_rt_lib0check_true_native(___nl__im__61);
#line 395
c_rt_lib0clear(&___nl__im__60);
#line 395
c_rt_lib0clear(&___nl__im__61);
#line 395
___nl__bool__59 = !___nl__bool__59;
#line 395
___nl__bool__59 = !___nl__bool__59;
#line 395
if(___nl__bool__59){ goto label_200;}
#line 395
___nl__bool__29 = false;
#line 395
goto label_200;
#line 395
label_200:
;
#line 395
//clear ___nl__bool__59;
#line 396
c_rt_lib0move(&___nl__im__62,___get_global_string_const(266));
#line 396
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__62));
#line 396
c_rt_lib0move(&___nl__im__63, c_rt_lib0bool_to_nl_native(___nl__bool__29));
#line 396
c_rt_lib0hash_set_value_dec(&___nl__im__62, ___get_global_string_const(238), ___nl__im__63);
#line 396
c_rt_lib0move(&___nl__string__64,___get_global_string_const(266));
#line 396
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__64, ___nl__im__62));
#line 396
c_rt_lib0clear(&___nl__im__62);
#line 396
c_rt_lib0clear(&___nl__im__63);
#line 396
c_rt_lib0clear(&___nl__string__64);
#line 397
goto label_1002;
#line 397
label_212:
;
#line 397
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1076)));
#line 397
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 398
c_rt_lib0move(&___nl__im__67, module_checker_priv0save_block(___ref___im__1));
#line 399
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(1092)));
#line 399
___nl__bool__69 = c_rt_lib0priv_is(___nl__im__68, ___get_global_string_const(241));
#line 399
if(___nl__bool__69){ goto label_224;}
#line 401
___nl__bool__69 = c_rt_lib0priv_is(___nl__im__68, ___get_global_string_const(272));
#line 401
if(___nl__bool__69){ goto label_229;}
#line 401
c_rt_lib0move(&___nl__im__70,___get_global_string_const(15));
#line 401
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(2, ___nl__im__70, ___nl__im__68));
#line 401
nl_die_arg(___nl__im__70);
#line 399
label_224:
;
#line 399
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__68, ___get_global_string_const(241)));
#line 399
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 400
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__71, ___ref___im__1));
#line 401
goto label_242;
#line 401
label_229:
;
#line 401
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__68, ___get_global_string_const(272)));
#line 401
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 402
___nl__bool__75 = false;
#line 402
___nl__bool__76 = false;
#line 402
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(241)));
#line 402
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(241));
#line 402
c_rt_lib0clear(&___nl__im__78);
#line 402
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__73, ___nl__bool__75, ___nl__bool__76, ___nl__bool__77, ___ref___im__1));
#line 402
//clear ___nl__bool__75;
#line 402
//clear ___nl__bool__76;
#line 402
//clear ___nl__bool__77;
#line 403
goto label_242;
#line 403
label_242:
;
#line 404
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(1089)));
#line 404
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__79, ___ref___im__1));
#line 404
c_rt_lib0clear(&___nl__im__79);
#line 405
___nl__bool__80 = true;
#line 405
c_rt_lib0move(&___nl__im__81, c_rt_lib0bool_to_nl_native(___nl__bool__80));
#line 405
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(1050), ___nl__im__81);
#line 405
//clear ___nl__bool__80;
#line 405
c_rt_lib0clear(&___nl__im__81);
#line 406
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(224)));
#line 406
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__82, ___ref___im__1));
#line 406
c_rt_lib0clear(&___nl__im__82);
#line 407
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(377)));
#line 407
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__83, ___ref___im__1));
#line 407
c_rt_lib0clear(&___nl__im__83);
#line 408
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__67));
#line 409
___nl__bool__84 = false;
#line 409
c_rt_lib0move(&___nl__im__85,___get_global_string_const(266));
#line 409
c_rt_lib0move(&___nl__im__85, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__85));
#line 409
c_rt_lib0move(&___nl__im__86, c_rt_lib0bool_to_nl_native(___nl__bool__84));
#line 409
c_rt_lib0hash_set_value_dec(&___nl__im__85, ___get_global_string_const(238), ___nl__im__86);
#line 409
c_rt_lib0move(&___nl__string__87,___get_global_string_const(266));
#line 409
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__87, ___nl__im__85));
#line 409
//clear ___nl__bool__84;
#line 409
c_rt_lib0clear(&___nl__im__85);
#line 409
c_rt_lib0clear(&___nl__im__86);
#line 409
c_rt_lib0clear(&___nl__string__87);
#line 410
goto label_1002;
#line 410
label_270:
;
#line 410
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1077)));
#line 410
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 411
c_rt_lib0move(&___nl__im__90, module_checker_priv0save_block(___ref___im__1));
#line 412
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(37)));
#line 412
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__91, ___ref___im__1));
#line 412
c_rt_lib0clear(&___nl__im__91);
#line 413
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(377)));
#line 413
___nl__bool__93 = true;
#line 413
___nl__bool__94 = true;
#line 413
___nl__bool__95 = true;
#line 413
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__92, ___nl__bool__93, ___nl__bool__94, ___nl__bool__95, ___ref___im__1));
#line 413
c_rt_lib0clear(&___nl__im__92);
#line 413
//clear ___nl__bool__93;
#line 413
//clear ___nl__bool__94;
#line 413
//clear ___nl__bool__95;
#line 414
___nl__bool__96 = true;
#line 414
c_rt_lib0move(&___nl__im__97, c_rt_lib0bool_to_nl_native(___nl__bool__96));
#line 414
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(1050), ___nl__im__97);
#line 414
//clear ___nl__bool__96;
#line 414
c_rt_lib0clear(&___nl__im__97);
#line 415
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(224)));
#line 415
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__98, ___ref___im__1));
#line 415
c_rt_lib0clear(&___nl__im__98);
#line 416
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__90));
#line 417
___nl__bool__99 = false;
#line 417
c_rt_lib0move(&___nl__im__100,___get_global_string_const(266));
#line 417
c_rt_lib0move(&___nl__im__100, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__100));
#line 417
c_rt_lib0move(&___nl__im__101, c_rt_lib0bool_to_nl_native(___nl__bool__99));
#line 417
c_rt_lib0hash_set_value_dec(&___nl__im__100, ___get_global_string_const(238), ___nl__im__101);
#line 417
c_rt_lib0move(&___nl__string__102,___get_global_string_const(266));
#line 417
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__102, ___nl__im__100));
#line 417
//clear ___nl__bool__99;
#line 417
c_rt_lib0clear(&___nl__im__100);
#line 417
c_rt_lib0clear(&___nl__im__101);
#line 417
c_rt_lib0clear(&___nl__string__102);
#line 418
goto label_1002;
#line 418
label_307:
;
#line 418
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1078)));
#line 418
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 419
c_rt_lib0move(&___nl__im__105, module_checker_priv0save_block(___ref___im__1));
#line 420
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_string_const(143)));
#line 420
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__106, ___ref___im__1));
#line 420
c_rt_lib0clear(&___nl__im__106);
#line 421
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_string_const(245)));
#line 421
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_string_const(1093)));
#line 421
___nl__bool__108 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(39));
#line 421
c_rt_lib0clear(&___nl__im__109);
#line 421
___nl__bool__108 = !___nl__bool__108;
#line 421
___nl__bool__110 = true;
#line 421
___nl__bool__111 = true;
#line 421
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__107, ___nl__bool__108, ___nl__bool__110, ___nl__bool__111, ___ref___im__1));
#line 421
c_rt_lib0clear(&___nl__im__107);
#line 421
//clear ___nl__bool__108;
#line 421
//clear ___nl__bool__110;
#line 421
//clear ___nl__bool__111;
#line 422
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_string_const(586)));
#line 422
___nl__bool__113 = true;
#line 422
___nl__bool__114 = true;
#line 422
___nl__bool__115 = true;
#line 422
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__112, ___nl__bool__113, ___nl__bool__114, ___nl__bool__115, ___ref___im__1));
#line 422
c_rt_lib0clear(&___nl__im__112);
#line 422
//clear ___nl__bool__113;
#line 422
//clear ___nl__bool__114;
#line 422
//clear ___nl__bool__115;
#line 423
___nl__bool__116 = true;
#line 423
c_rt_lib0move(&___nl__im__117, c_rt_lib0bool_to_nl_native(___nl__bool__116));
#line 423
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(1050), ___nl__im__117);
#line 423
//clear ___nl__bool__116;
#line 423
c_rt_lib0clear(&___nl__im__117);
#line 424
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_string_const(224)));
#line 424
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__118, ___ref___im__1));
#line 424
c_rt_lib0clear(&___nl__im__118);
#line 425
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__105));
#line 426
___nl__bool__119 = false;
#line 426
c_rt_lib0move(&___nl__im__120,___get_global_string_const(266));
#line 426
c_rt_lib0move(&___nl__im__120, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__120));
#line 426
c_rt_lib0move(&___nl__im__121, c_rt_lib0bool_to_nl_native(___nl__bool__119));
#line 426
c_rt_lib0hash_set_value_dec(&___nl__im__120, ___get_global_string_const(238), ___nl__im__121);
#line 426
c_rt_lib0move(&___nl__string__122,___get_global_string_const(266));
#line 426
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__122, ___nl__im__120));
#line 426
//clear ___nl__bool__119;
#line 426
c_rt_lib0clear(&___nl__im__120);
#line 426
c_rt_lib0clear(&___nl__im__121);
#line 426
c_rt_lib0clear(&___nl__string__122);
#line 427
goto label_1002;
#line 427
label_356:
;
#line 427
c_rt_lib0move(&___nl__im__124, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(174)));
#line 427
c_rt_lib0copy(&___nl__im__123, ___nl__im__124);
#line 428
c_rt_lib0move(&___nl__im__125, module_checker_priv0save_block(___ref___im__1));
#line 429
___nl__bool__126 = true;
#line 429
c_rt_lib0move(&___nl__im__127, c_rt_lib0bool_to_nl_native(___nl__bool__126));
#line 429
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(1050), ___nl__im__127);
#line 429
//clear ___nl__bool__126;
#line 429
c_rt_lib0clear(&___nl__im__127);
#line 430
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__123, ___ref___im__1));
#line 431
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__125));
#line 432
goto label_1002;
#line 432
label_368:
;
#line 432
c_rt_lib0move(&___nl__im__129, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1079)));
#line 432
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 433
c_rt_lib0move(&___nl__im__130, module_checker_priv0save_block(___ref___im__1));
#line 434
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(1094)));
#line 434
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__131, ___ref___im__1));
#line 434
c_rt_lib0clear(&___nl__im__131);
#line 435
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(377)));
#line 435
___nl__bool__133 = true;
#line 435
___nl__bool__134 = true;
#line 435
___nl__bool__135 = true;
#line 435
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__132, ___nl__bool__133, ___nl__bool__134, ___nl__bool__135, ___ref___im__1));
#line 435
c_rt_lib0clear(&___nl__im__132);
#line 435
//clear ___nl__bool__133;
#line 435
//clear ___nl__bool__134;
#line 435
//clear ___nl__bool__135;
#line 436
___nl__bool__136 = true;
#line 436
c_rt_lib0move(&___nl__im__137, c_rt_lib0bool_to_nl_native(___nl__bool__136));
#line 436
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(1050), ___nl__im__137);
#line 436
//clear ___nl__bool__136;
#line 436
c_rt_lib0clear(&___nl__im__137);
#line 437
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(224)));
#line 437
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__138, ___ref___im__1));
#line 437
c_rt_lib0clear(&___nl__im__138);
#line 438
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__130));
#line 439
___nl__bool__139 = false;
#line 439
c_rt_lib0move(&___nl__im__140,___get_global_string_const(266));
#line 439
c_rt_lib0move(&___nl__im__140, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__140));
#line 439
c_rt_lib0move(&___nl__im__141, c_rt_lib0bool_to_nl_native(___nl__bool__139));
#line 439
c_rt_lib0hash_set_value_dec(&___nl__im__140, ___get_global_string_const(238), ___nl__im__141);
#line 439
c_rt_lib0move(&___nl__string__142,___get_global_string_const(266));
#line 439
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__142, ___nl__im__140));
#line 439
//clear ___nl__bool__139;
#line 439
c_rt_lib0clear(&___nl__im__140);
#line 439
c_rt_lib0clear(&___nl__im__141);
#line 439
c_rt_lib0clear(&___nl__string__142);
#line 440
goto label_1002;
#line 440
label_405:
;
#line 440
c_rt_lib0move(&___nl__im__144, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1080)));
#line 440
c_rt_lib0copy(&___nl__im__143, ___nl__im__144);
#line 441
c_rt_lib0move(&___nl__im__145, module_checker_priv0save_block(___ref___im__1));
#line 442
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(1089)));
#line 442
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__146, ___ref___im__1));
#line 442
c_rt_lib0clear(&___nl__im__146);
#line 443
___nl__bool__147 = true;
#line 443
c_rt_lib0move(&___nl__im__148, c_rt_lib0bool_to_nl_native(___nl__bool__147));
#line 443
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(1050), ___nl__im__148);
#line 443
//clear ___nl__bool__147;
#line 443
c_rt_lib0clear(&___nl__im__148);
#line 444
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(224)));
#line 444
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__149, ___ref___im__1));
#line 444
c_rt_lib0clear(&___nl__im__149);
#line 445
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__145));
#line 446
___nl__bool__150 = false;
#line 446
c_rt_lib0move(&___nl__im__151,___get_global_string_const(266));
#line 446
c_rt_lib0move(&___nl__im__151, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__151));
#line 446
c_rt_lib0move(&___nl__im__152, c_rt_lib0bool_to_nl_native(___nl__bool__150));
#line 446
c_rt_lib0hash_set_value_dec(&___nl__im__151, ___get_global_string_const(238), ___nl__im__152);
#line 446
c_rt_lib0move(&___nl__string__153,___get_global_string_const(266));
#line 446
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__153, ___nl__im__151));
#line 446
//clear ___nl__bool__150;
#line 446
c_rt_lib0clear(&___nl__im__151);
#line 446
c_rt_lib0clear(&___nl__im__152);
#line 446
c_rt_lib0clear(&___nl__string__153);
#line 447
goto label_1002;
#line 447
label_433:
;
#line 447
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1081)));
#line 447
c_rt_lib0copy(&___nl__im__154, ___nl__im__155);
#line 448
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(1089)));
#line 448
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__156, ___ref___im__1));
#line 448
c_rt_lib0clear(&___nl__im__156);
#line 449
c_rt_lib0move(&___nl__im__157, module_checker_priv0save_block(___ref___im__1));
#line 450
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(224)));
#line 450
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__158, ___ref___im__1));
#line 450
c_rt_lib0clear(&___nl__im__158);
#line 451
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__157));
#line 452
___nl__bool__159 = false;
#line 452
c_rt_lib0move(&___nl__im__160,___get_global_string_const(266));
#line 452
c_rt_lib0move(&___nl__im__160, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__160));
#line 452
c_rt_lib0move(&___nl__im__161, c_rt_lib0bool_to_nl_native(___nl__bool__159));
#line 452
c_rt_lib0hash_set_value_dec(&___nl__im__160, ___get_global_string_const(238), ___nl__im__161);
#line 452
c_rt_lib0move(&___nl__string__162,___get_global_string_const(266));
#line 452
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__162, ___nl__im__160));
#line 452
//clear ___nl__bool__159;
#line 452
c_rt_lib0clear(&___nl__im__160);
#line 452
c_rt_lib0clear(&___nl__im__161);
#line 452
c_rt_lib0clear(&___nl__string__162);
#line 453
goto label_1002;
#line 453
label_456:
;
#line 453
c_rt_lib0move(&___nl__im__164, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1082)));
#line 453
c_rt_lib0copy(&___nl__im__163, ___nl__im__164);
#line 454
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_string_const(1089)));
#line 454
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__165, ___ref___im__1));
#line 454
c_rt_lib0clear(&___nl__im__165);
#line 455
c_rt_lib0move(&___nl__im__166, module_checker_priv0save_block(___ref___im__1));
#line 456
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_string_const(224)));
#line 456
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__167, ___ref___im__1));
#line 456
c_rt_lib0clear(&___nl__im__167);
#line 457
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__166));
#line 458
___nl__bool__168 = false;
#line 458
c_rt_lib0move(&___nl__im__169,___get_global_string_const(266));
#line 458
c_rt_lib0move(&___nl__im__169, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__169));
#line 458
c_rt_lib0move(&___nl__im__170, c_rt_lib0bool_to_nl_native(___nl__bool__168));
#line 458
c_rt_lib0hash_set_value_dec(&___nl__im__169, ___get_global_string_const(238), ___nl__im__170);
#line 458
c_rt_lib0move(&___nl__string__171,___get_global_string_const(266));
#line 458
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__171, ___nl__im__169));
#line 458
//clear ___nl__bool__168;
#line 458
c_rt_lib0clear(&___nl__im__169);
#line 458
c_rt_lib0clear(&___nl__im__170);
#line 458
c_rt_lib0clear(&___nl__string__171);
#line 459
goto label_1002;
#line 459
label_479:
;
#line 460
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(1050)));
#line 460
___nl__bool__172 = c_rt_lib0check_true_native(___nl__im__173);
#line 460
c_rt_lib0clear(&___nl__im__173);
#line 460
___nl__bool__172 = !___nl__bool__172;
#line 460
___nl__bool__172 = !___nl__bool__172;
#line 460
if(___nl__bool__172){ goto label_496;}
#line 461
c_rt_lib0move(&___nl__im__174,___get_global_string_const(50));
#line 461
c_rt_lib0move(&___nl__im__174, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__174));
#line 461
c_rt_lib0move(&___nl__im__175,___get_global_string_const(1095));
#line 461
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__174, ___nl__im__175));
#line 461
c_rt_lib0move(&___nl__string__176,___get_global_string_const(50));
#line 461
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__176, ___nl__im__174));
#line 461
c_rt_lib0clear(&___nl__im__174);
#line 461
c_rt_lib0clear(&___nl__im__175);
#line 461
c_rt_lib0clear(&___nl__string__176);
#line 462
goto label_496;
#line 462
label_496:
;
#line 462
//clear ___nl__bool__172;
#line 463
goto label_1002;
#line 463
label_499:
;
#line 464
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(1050)));
#line 464
___nl__bool__177 = c_rt_lib0check_true_native(___nl__im__178);
#line 464
c_rt_lib0clear(&___nl__im__178);
#line 464
___nl__bool__177 = !___nl__bool__177;
#line 464
___nl__bool__177 = !___nl__bool__177;
#line 464
if(___nl__bool__177){ goto label_516;}
#line 465
c_rt_lib0move(&___nl__im__179,___get_global_string_const(50));
#line 465
c_rt_lib0move(&___nl__im__179, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__179));
#line 465
c_rt_lib0move(&___nl__im__180,___get_global_string_const(1096));
#line 465
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__179, ___nl__im__180));
#line 465
c_rt_lib0move(&___nl__string__181,___get_global_string_const(50));
#line 465
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__181, ___nl__im__179));
#line 465
c_rt_lib0clear(&___nl__im__179);
#line 465
c_rt_lib0clear(&___nl__im__180);
#line 465
c_rt_lib0clear(&___nl__string__181);
#line 466
goto label_516;
#line 466
label_516:
;
#line 466
//clear ___nl__bool__177;
#line 467
goto label_1002;
#line 467
label_519:
;
#line 467
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1085)));
#line 467
c_rt_lib0copy(&___nl__im__182, ___nl__im__183);
#line 468
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__182, ___get_global_string_const(245)));
#line 468
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__184, ___ref___im__1));
#line 468
c_rt_lib0clear(&___nl__im__184);
#line 469
___nl__bool__185 = true;
#line 470
c_rt_lib0move(&___nl__im__186, module_checker_priv0inits(___ref___im__1));
#line 471
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__182, ___get_global_string_const(1097)));
#line 471
___nl__int__189 = 0;
#line 471
___nl__int__190 = 1;
#line 471
___nl__int__191 = c_rt_lib0array_len(___nl__im__187);
#line 471
label_531:
;
#line 471
___nl__bool__192 = ___nl__int__189 >= ___nl__int__191;
#line 471
if(___nl__bool__192){ goto label_607;}
#line 471
c_rt_lib0move(&___nl__im__193, c_rt_lib0array_get(___nl__im__187, ___nl__int__189));
#line 471
c_rt_lib0copy(&___nl__im__188, ___nl__im__193);
#line 472
___nl__bool__194 = false;
#line 472
c_rt_lib0move(&___nl__im__195,___get_global_string_const(266));
#line 472
c_rt_lib0move(&___nl__im__195, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__195));
#line 472
c_rt_lib0move(&___nl__im__196, c_rt_lib0bool_to_nl_native(___nl__bool__194));
#line 472
c_rt_lib0hash_set_value_dec(&___nl__im__195, ___get_global_string_const(238), ___nl__im__196);
#line 472
c_rt_lib0move(&___nl__string__197,___get_global_string_const(266));
#line 472
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__197, ___nl__im__195));
#line 472
//clear ___nl__bool__194;
#line 472
c_rt_lib0clear(&___nl__im__195);
#line 472
c_rt_lib0clear(&___nl__im__196);
#line 472
c_rt_lib0clear(&___nl__string__197);
#line 473
c_rt_lib0move(&___nl__im__198, module_checker_priv0save_block(___ref___im__1));
#line 473
c_rt_lib0copy(&___nl__im__199, ___nl__im__198);
#line 473
c_rt_lib0hash_set_value_dec(&___nl__im__186, ___get_global_string_const(359), ___nl__im__199);
#line 473
c_rt_lib0clear(&___nl__im__198);
#line 473
c_rt_lib0clear(&___nl__im__199);
#line 474
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_string_const(572)));
#line 474
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__201, ___get_global_string_const(241)));
#line 474
c_rt_lib0clear(&___nl__im__201);
#line 474
___nl__bool__202 = c_rt_lib0priv_is(___nl__im__200, ___get_global_string_const(76));
#line 474
if(___nl__bool__202){ goto label_562;}
#line 475
___nl__bool__202 = c_rt_lib0priv_is(___nl__im__200, ___get_global_string_const(241));
#line 475
if(___nl__bool__202){ goto label_564;}
#line 475
c_rt_lib0move(&___nl__im__203,___get_global_string_const(15));
#line 475
c_rt_lib0move(&___nl__im__203, c_rt_lib0array_mk(2, ___nl__im__203, ___nl__im__200));
#line 475
nl_die_arg(___nl__im__203);
#line 474
label_562:
;
#line 475
goto label_577;
#line 475
label_564:
;
#line 475
c_rt_lib0move(&___nl__im__205, c_rt_lib0priv_as(___nl__im__200, ___get_global_string_const(241)));
#line 475
c_rt_lib0copy(&___nl__im__204, ___nl__im__205);
#line 476
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__204, ___get_global_string_const(503)));
#line 476
___nl__bool__207 = false;
#line 476
___nl__bool__208 = true;
#line 476
___nl__bool__209 = true;
#line 476
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__206, ___nl__bool__207, ___nl__bool__208, ___nl__bool__209, ___ref___im__1));
#line 476
c_rt_lib0clear(&___nl__im__206);
#line 476
//clear ___nl__bool__207;
#line 476
//clear ___nl__bool__208;
#line 476
//clear ___nl__bool__209;
#line 477
goto label_577;
#line 477
label_577:
;
#line 478
c_rt_lib0move(&___nl__im__210, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_string_const(224)));
#line 478
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__210, ___ref___im__1));
#line 478
c_rt_lib0clear(&___nl__im__210);
#line 479
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(266)));
#line 479
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__212, ___get_global_string_const(238)));
#line 479
___nl__bool__211 = c_rt_lib0check_true_native(___nl__im__213);
#line 479
c_rt_lib0clear(&___nl__im__212);
#line 479
c_rt_lib0clear(&___nl__im__213);
#line 479
___nl__bool__211 = !___nl__bool__211;
#line 479
___nl__bool__211 = !___nl__bool__211;
#line 479
if(___nl__bool__211){ goto label_591;}
#line 479
___nl__bool__185 = false;
#line 479
goto label_591;
#line 479
label_591:
;
#line 479
//clear ___nl__bool__211;
#line 480
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__186));
#line 481
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__186, ___get_global_string_const(359)));
#line 481
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__214));
#line 481
c_rt_lib0clear(&___nl__im__214);
#line 482
c_rt_lib0move(&___nl__im__215,___get_global_string_const(359));
#line 482
c_rt_lib0move(&___nl__im__215, c_rt_lib0get_ref_hash(___nl__im__186, ___nl__im__215));
#line 482
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__215));
#line 482
c_rt_lib0move(&___nl__string__216,___get_global_string_const(359));
#line 482
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__186, ___nl__string__216, ___nl__im__215));
#line 482
c_rt_lib0clear(&___nl__im__215);
#line 482
c_rt_lib0clear(&___nl__string__216);
#line 482
c_rt_lib0clear(&___nl__im__188);
#line 483
___nl__int__189 = ___nl__int__189 + ___nl__int__190;
#line 483
goto label_531;
#line 483
label_607:
;
#line 484
c_rt_lib0move(&___nl__im__217,___get_global_string_const(266));
#line 484
c_rt_lib0move(&___nl__im__217, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__217));
#line 484
c_rt_lib0move(&___nl__im__218, c_rt_lib0bool_to_nl_native(___nl__bool__185));
#line 484
c_rt_lib0hash_set_value_dec(&___nl__im__217, ___get_global_string_const(238), ___nl__im__218);
#line 484
c_rt_lib0move(&___nl__string__219,___get_global_string_const(266));
#line 484
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__219, ___nl__im__217));
#line 484
c_rt_lib0clear(&___nl__im__217);
#line 484
c_rt_lib0clear(&___nl__im__218);
#line 484
c_rt_lib0clear(&___nl__string__219);
#line 485
c_rt_lib0delete(module_checker_priv0flush_inits(___ref___im__1, &___nl__im__186));
#line 486
goto label_1002;
#line 486
label_619:
;
#line 486
c_rt_lib0move(&___nl__im__221, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(241)));
#line 486
c_rt_lib0copy(&___nl__im__220, ___nl__im__221);
#line 487
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__220, ___ref___im__1));
#line 488
goto label_1002;
#line 488
label_624:
;
#line 488
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(266)));
#line 488
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 489
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__222, ___ref___im__1));
#line 490
c_rt_lib0move(&___nl__im__225, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(266)));
#line 490
c_rt_lib0move(&___nl__im__224, c_rt_lib0hash_get_value_dec(___nl__im__225, ___get_global_string_const(294)));
#line 490
c_rt_lib0clear(&___nl__im__225);
#line 490
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__224, ___get_global_string_const(241));
#line 490
if(___nl__bool__226){ goto label_644;}
#line 492
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__224, ___get_global_string_const(76));
#line 492
if(___nl__bool__226){ goto label_663;}
#line 494
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__224, ___get_global_string_const(1047));
#line 494
if(___nl__bool__226){ goto label_685;}
#line 497
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__224, ___get_global_string_const(1046));
#line 497
if(___nl__bool__226){ goto label_724;}
#line 500
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__224, ___get_global_string_const(1045));
#line 500
if(___nl__bool__226){ goto label_764;}
#line 500
c_rt_lib0move(&___nl__im__227,___get_global_string_const(15));
#line 500
c_rt_lib0move(&___nl__im__227, c_rt_lib0array_mk(2, ___nl__im__227, ___nl__im__224));
#line 500
nl_die_arg(___nl__im__227);
#line 490
label_644:
;
#line 491
c_rt_lib0move(&___nl__im__229, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 491
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__229, ___get_global_string_const(1088));
#line 491
c_rt_lib0clear(&___nl__im__229);
#line 491
___nl__bool__228 = !___nl__bool__228;
#line 491
if(___nl__bool__228){ goto label_660;}
#line 491
c_rt_lib0move(&___nl__im__230,___get_global_string_const(50));
#line 491
c_rt_lib0move(&___nl__im__230, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__230));
#line 491
c_rt_lib0move(&___nl__im__231,___get_global_string_const(1098));
#line 491
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__230, ___nl__im__231));
#line 491
c_rt_lib0move(&___nl__string__232,___get_global_string_const(50));
#line 491
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__232, ___nl__im__230));
#line 491
c_rt_lib0clear(&___nl__im__230);
#line 491
c_rt_lib0clear(&___nl__im__231);
#line 491
c_rt_lib0clear(&___nl__string__232);
#line 491
goto label_660;
#line 491
label_660:
;
#line 491
//clear ___nl__bool__228;
#line 492
goto label_784;
#line 492
label_663:
;
#line 493
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 493
___nl__bool__234 = c_rt_lib0priv_is(___nl__im__235, ___get_global_string_const(1088));
#line 493
c_rt_lib0clear(&___nl__im__235);
#line 493
if(___nl__bool__234){ goto label_670;}
#line 493
c_rt_lib0move(&___nl__im__233, c_rt_lib0ov_mk_none(___get_global_string_const(1047)));
#line 493
goto label_672;
#line 493
label_670:
;
#line 493
c_rt_lib0move(&___nl__im__233, c_rt_lib0ov_mk_none(___get_global_string_const(1046)));
#line 493
label_672:
;
#line 493
//clear ___nl__bool__234;
#line 493
c_rt_lib0move(&___nl__im__236,___get_global_string_const(266));
#line 493
c_rt_lib0move(&___nl__im__236, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__236));
#line 493
c_rt_lib0copy(&___nl__im__237, ___nl__im__233);
#line 493
c_rt_lib0hash_set_value_dec(&___nl__im__236, ___get_global_string_const(294), ___nl__im__237);
#line 493
c_rt_lib0move(&___nl__string__238,___get_global_string_const(266));
#line 493
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__238, ___nl__im__236));
#line 493
c_rt_lib0clear(&___nl__im__233);
#line 493
c_rt_lib0clear(&___nl__im__236);
#line 493
c_rt_lib0clear(&___nl__im__237);
#line 493
c_rt_lib0clear(&___nl__string__238);
#line 494
goto label_784;
#line 494
label_685:
;
#line 495
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 495
___nl__bool__239 = c_rt_lib0priv_is(___nl__im__240, ___get_global_string_const(1088));
#line 495
c_rt_lib0clear(&___nl__im__240);
#line 495
___nl__bool__239 = !___nl__bool__239;
#line 495
if(___nl__bool__239){ goto label_701;}
#line 495
c_rt_lib0move(&___nl__im__241,___get_global_string_const(50));
#line 495
c_rt_lib0move(&___nl__im__241, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__241));
#line 495
c_rt_lib0move(&___nl__im__242,___get_global_string_const(1099));
#line 495
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__241, ___nl__im__242));
#line 495
c_rt_lib0move(&___nl__string__243,___get_global_string_const(50));
#line 495
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__243, ___nl__im__241));
#line 495
c_rt_lib0clear(&___nl__im__241);
#line 495
c_rt_lib0clear(&___nl__im__242);
#line 495
c_rt_lib0clear(&___nl__string__243);
#line 495
goto label_701;
#line 495
label_701:
;
#line 495
//clear ___nl__bool__239;
#line 496
c_rt_lib0move(&___nl__im__246, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 496
___nl__bool__245 = c_rt_lib0priv_is(___nl__im__246, ___get_global_string_const(1088));
#line 496
c_rt_lib0clear(&___nl__im__246);
#line 496
if(___nl__bool__245){ goto label_709;}
#line 496
c_rt_lib0move(&___nl__im__244, c_rt_lib0ov_mk_none(___get_global_string_const(1047)));
#line 496
goto label_711;
#line 496
label_709:
;
#line 496
c_rt_lib0move(&___nl__im__244, c_rt_lib0ov_mk_none(___get_global_string_const(1046)));
#line 496
label_711:
;
#line 496
//clear ___nl__bool__245;
#line 496
c_rt_lib0move(&___nl__im__247,___get_global_string_const(266));
#line 496
c_rt_lib0move(&___nl__im__247, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__247));
#line 496
c_rt_lib0copy(&___nl__im__248, ___nl__im__244);
#line 496
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(294), ___nl__im__248);
#line 496
c_rt_lib0move(&___nl__string__249,___get_global_string_const(266));
#line 496
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__249, ___nl__im__247));
#line 496
c_rt_lib0clear(&___nl__im__244);
#line 496
c_rt_lib0clear(&___nl__im__247);
#line 496
c_rt_lib0clear(&___nl__im__248);
#line 496
c_rt_lib0clear(&___nl__string__249);
#line 497
goto label_784;
#line 497
label_724:
;
#line 498
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 498
___nl__bool__250 = c_rt_lib0priv_is(___nl__im__251, ___get_global_string_const(1088));
#line 498
c_rt_lib0clear(&___nl__im__251);
#line 498
___nl__bool__250 = !___nl__bool__250;
#line 498
___nl__bool__250 = !___nl__bool__250;
#line 498
if(___nl__bool__250){ goto label_741;}
#line 498
c_rt_lib0move(&___nl__im__252,___get_global_string_const(50));
#line 498
c_rt_lib0move(&___nl__im__252, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__252));
#line 498
c_rt_lib0move(&___nl__im__253,___get_global_string_const(1100));
#line 498
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__252, ___nl__im__253));
#line 498
c_rt_lib0move(&___nl__string__254,___get_global_string_const(50));
#line 498
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__254, ___nl__im__252));
#line 498
c_rt_lib0clear(&___nl__im__252);
#line 498
c_rt_lib0clear(&___nl__im__253);
#line 498
c_rt_lib0clear(&___nl__string__254);
#line 498
goto label_741;
#line 498
label_741:
;
#line 498
//clear ___nl__bool__250;
#line 499
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 499
___nl__bool__256 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(1088));
#line 499
c_rt_lib0clear(&___nl__im__257);
#line 499
if(___nl__bool__256){ goto label_749;}
#line 499
c_rt_lib0move(&___nl__im__255, c_rt_lib0ov_mk_none(___get_global_string_const(1047)));
#line 499
goto label_751;
#line 499
label_749:
;
#line 499
c_rt_lib0move(&___nl__im__255, c_rt_lib0ov_mk_none(___get_global_string_const(1046)));
#line 499
label_751:
;
#line 499
//clear ___nl__bool__256;
#line 499
c_rt_lib0move(&___nl__im__258,___get_global_string_const(266));
#line 499
c_rt_lib0move(&___nl__im__258, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__258));
#line 499
c_rt_lib0copy(&___nl__im__259, ___nl__im__255);
#line 499
c_rt_lib0hash_set_value_dec(&___nl__im__258, ___get_global_string_const(294), ___nl__im__259);
#line 499
c_rt_lib0move(&___nl__string__260,___get_global_string_const(266));
#line 499
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__260, ___nl__im__258));
#line 499
c_rt_lib0clear(&___nl__im__255);
#line 499
c_rt_lib0clear(&___nl__im__258);
#line 499
c_rt_lib0clear(&___nl__im__259);
#line 499
c_rt_lib0clear(&___nl__string__260);
#line 500
goto label_784;
#line 500
label_764:
;
#line 501
c_rt_lib0move(&___nl__im__262, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(241)));
#line 501
___nl__bool__261 = c_rt_lib0priv_is(___nl__im__262, ___get_global_string_const(1088));
#line 501
c_rt_lib0clear(&___nl__im__262);
#line 501
___nl__bool__261 = !___nl__bool__261;
#line 501
___nl__bool__261 = !___nl__bool__261;
#line 501
if(___nl__bool__261){ goto label_781;}
#line 501
c_rt_lib0move(&___nl__im__263,___get_global_string_const(50));
#line 501
c_rt_lib0move(&___nl__im__263, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__263));
#line 501
c_rt_lib0move(&___nl__im__264,___get_global_string_const(1101));
#line 501
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__263, ___nl__im__264));
#line 501
c_rt_lib0move(&___nl__string__265,___get_global_string_const(50));
#line 501
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__265, ___nl__im__263));
#line 501
c_rt_lib0clear(&___nl__im__263);
#line 501
c_rt_lib0clear(&___nl__im__264);
#line 501
c_rt_lib0clear(&___nl__string__265);
#line 501
goto label_781;
#line 501
label_781:
;
#line 501
//clear ___nl__bool__261;
#line 502
goto label_784;
#line 502
label_784:
;
#line 503
c_rt_lib0move(&___nl__im__266, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(896)));
#line 503
c_rt_lib0move(&___nl__im__270, c_rt_lib0init_iter(___nl__im__266));
#line 503
label_787:
;
#line 503
___nl__bool__268 = c_rt_lib0is_end_hash(___nl__im__270);
#line 503
if(___nl__bool__268){ goto label_808;}
#line 503
c_rt_lib0move(&___nl__im__267, c_rt_lib0get_key_iter(___nl__im__270));
#line 503
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_get_value(___nl__im__266, ___nl__im__267));
#line 504
___nl__bool__271 = true;
#line 504
c_rt_lib0move(&___nl__im__272,___get_global_string_const(896));
#line 504
c_rt_lib0move(&___nl__im__272, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__272));
#line 504
c_rt_lib0move(&___nl__im__273, c_rt_lib0get_ref_hash(___nl__im__272, ___nl__im__267));
#line 504
c_rt_lib0move(&___nl__im__274, c_rt_lib0bool_to_nl_native(___nl__bool__271));
#line 504
c_rt_lib0hash_set_value_dec(&___nl__im__273, ___get_global_string_const(1043), ___nl__im__274);
#line 504
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__272, ___nl__im__267, ___nl__im__273));
#line 504
c_rt_lib0move(&___nl__string__275,___get_global_string_const(896));
#line 504
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__275, ___nl__im__272));
#line 504
//clear ___nl__bool__271;
#line 504
c_rt_lib0clear(&___nl__im__272);
#line 504
c_rt_lib0clear(&___nl__im__273);
#line 504
c_rt_lib0clear(&___nl__im__274);
#line 504
c_rt_lib0clear(&___nl__string__275);
#line 505
c_rt_lib0move(&___nl__im__270, c_rt_lib0next_iter(___nl__im__270));
#line 505
goto label_787;
#line 505
label_808:
;
#line 506
___nl__bool__276 = true;
#line 506
c_rt_lib0move(&___nl__im__277,___get_global_string_const(266));
#line 506
c_rt_lib0move(&___nl__im__277, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__277));
#line 506
c_rt_lib0move(&___nl__im__278, c_rt_lib0bool_to_nl_native(___nl__bool__276));
#line 506
c_rt_lib0hash_set_value_dec(&___nl__im__277, ___get_global_string_const(238), ___nl__im__278);
#line 506
c_rt_lib0move(&___nl__string__279,___get_global_string_const(266));
#line 506
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__279, ___nl__im__277));
#line 506
//clear ___nl__bool__276;
#line 506
c_rt_lib0clear(&___nl__im__277);
#line 506
c_rt_lib0clear(&___nl__im__278);
#line 506
c_rt_lib0clear(&___nl__string__279);
#line 507
goto label_1002;
#line 507
label_821:
;
#line 507
c_rt_lib0move(&___nl__im__281, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1086)));
#line 507
c_rt_lib0copy(&___nl__im__280, ___nl__im__281);
#line 508
c_rt_lib0move(&___nl__im__282, module_checker_priv0save_block(___ref___im__1));
#line 509
c_rt_lib0move(&___nl__im__283, c_rt_lib0hash_get_value_dec(___nl__im__280, ___get_global_string_const(248)));
#line 509
___nl__int__285 = 0;
#line 509
___nl__int__286 = 1;
#line 509
___nl__int__287 = c_rt_lib0array_len(___nl__im__283);
#line 509
label_829:
;
#line 509
___nl__bool__288 = ___nl__int__285 >= ___nl__int__287;
#line 509
if(___nl__bool__288){ goto label_838;}
#line 509
c_rt_lib0move(&___nl__im__289, c_rt_lib0array_get(___nl__im__283, ___nl__int__285));
#line 509
c_rt_lib0copy(&___nl__im__284, ___nl__im__289);
#line 510
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__284, ___ref___im__1));
#line 510
c_rt_lib0clear(&___nl__im__284);
#line 511
___nl__int__285 = ___nl__int__285 + ___nl__int__286;
#line 511
goto label_829;
#line 511
label_838:
;
#line 512
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__282));
#line 513
goto label_1002;
#line 513
label_841:
;
#line 513
c_rt_lib0move(&___nl__im__291, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(267)));
#line 513
c_rt_lib0copy(&___nl__im__290, ___nl__im__291);
#line 514
___nl__int__293 = 0;
#line 514
___nl__int__294 = 1;
#line 514
___nl__int__295 = c_rt_lib0array_len(___nl__im__290);
#line 514
label_847:
;
#line 514
___nl__bool__296 = ___nl__int__293 >= ___nl__int__295;
#line 514
if(___nl__bool__296){ goto label_856;}
#line 514
c_rt_lib0move(&___nl__im__297, c_rt_lib0array_get(___nl__im__290, ___nl__int__293));
#line 514
c_rt_lib0copy(&___nl__im__292, ___nl__im__297);
#line 515
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__292, ___ref___im__1));
#line 515
c_rt_lib0clear(&___nl__im__292);
#line 516
___nl__int__293 = ___nl__int__293 + ___nl__int__294;
#line 516
goto label_847;
#line 516
label_856:
;
#line 517
c_rt_lib0move(&___nl__im__298, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(896)));
#line 517
c_rt_lib0move(&___nl__im__302, c_rt_lib0init_iter(___nl__im__298));
#line 517
label_859:
;
#line 517
___nl__bool__300 = c_rt_lib0is_end_hash(___nl__im__302);
#line 517
if(___nl__bool__300){ goto label_880;}
#line 517
c_rt_lib0move(&___nl__im__299, c_rt_lib0get_key_iter(___nl__im__302));
#line 517
c_rt_lib0move(&___nl__im__301, c_rt_lib0hash_get_value(___nl__im__298, ___nl__im__299));
#line 518
___nl__bool__303 = true;
#line 518
c_rt_lib0move(&___nl__im__304,___get_global_string_const(896));
#line 518
c_rt_lib0move(&___nl__im__304, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__304));
#line 518
c_rt_lib0move(&___nl__im__305, c_rt_lib0get_ref_hash(___nl__im__304, ___nl__im__299));
#line 518
c_rt_lib0move(&___nl__im__306, c_rt_lib0bool_to_nl_native(___nl__bool__303));
#line 518
c_rt_lib0hash_set_value_dec(&___nl__im__305, ___get_global_string_const(1043), ___nl__im__306);
#line 518
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__304, ___nl__im__299, ___nl__im__305));
#line 518
c_rt_lib0move(&___nl__string__307,___get_global_string_const(896));
#line 518
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__307, ___nl__im__304));
#line 518
//clear ___nl__bool__303;
#line 518
c_rt_lib0clear(&___nl__im__304);
#line 518
c_rt_lib0clear(&___nl__im__305);
#line 518
c_rt_lib0clear(&___nl__im__306);
#line 518
c_rt_lib0clear(&___nl__string__307);
#line 519
c_rt_lib0move(&___nl__im__302, c_rt_lib0next_iter(___nl__im__302));
#line 519
goto label_859;
#line 519
label_880:
;
#line 520
___nl__bool__308 = true;
#line 520
c_rt_lib0move(&___nl__im__309,___get_global_string_const(266));
#line 520
c_rt_lib0move(&___nl__im__309, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__309));
#line 520
c_rt_lib0move(&___nl__im__310, c_rt_lib0bool_to_nl_native(___nl__bool__308));
#line 520
c_rt_lib0hash_set_value_dec(&___nl__im__309, ___get_global_string_const(238), ___nl__im__310);
#line 520
c_rt_lib0move(&___nl__string__311,___get_global_string_const(266));
#line 520
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__311, ___nl__im__309));
#line 520
//clear ___nl__bool__308;
#line 520
c_rt_lib0clear(&___nl__im__309);
#line 520
c_rt_lib0clear(&___nl__im__310);
#line 520
c_rt_lib0clear(&___nl__string__311);
#line 521
goto label_1002;
#line 521
label_893:
;
#line 521
c_rt_lib0move(&___nl__im__313, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(272)));
#line 521
c_rt_lib0copy(&___nl__im__312, ___nl__im__313);
#line 522
___nl__bool__314 = false;
#line 522
___nl__bool__315 = false;
#line 522
c_rt_lib0move(&___nl__im__317, c_rt_lib0hash_get_value_dec(___nl__im__312, ___get_global_string_const(241)));
#line 522
___nl__bool__316 = c_rt_lib0priv_is(___nl__im__317, ___get_global_string_const(241));
#line 522
c_rt_lib0clear(&___nl__im__317);
#line 522
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__312, ___nl__bool__314, ___nl__bool__315, ___nl__bool__316, ___ref___im__1));
#line 522
//clear ___nl__bool__314;
#line 522
//clear ___nl__bool__315;
#line 522
//clear ___nl__bool__316;
#line 523
goto label_1002;
#line 523
label_906:
;
#line 523
c_rt_lib0move(&___nl__im__319, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(1087)));
#line 523
c_rt_lib0copy(&___nl__im__318, ___nl__im__319);
#line 524
___nl__bool__320 = c_rt_lib0priv_is(___nl__im__318, ___get_global_string_const(734));
#line 524
if(___nl__bool__320){ goto label_918;}
#line 526
___nl__bool__320 = c_rt_lib0priv_is(___nl__im__318, ___get_global_string_const(1102));
#line 526
if(___nl__bool__320){ goto label_931;}
#line 528
___nl__bool__320 = c_rt_lib0priv_is(___nl__im__318, ___get_global_string_const(1103));
#line 528
if(___nl__bool__320){ goto label_946;}
#line 528
c_rt_lib0move(&___nl__im__321,___get_global_string_const(15));
#line 528
c_rt_lib0move(&___nl__im__321, c_rt_lib0array_mk(2, ___nl__im__321, ___nl__im__318));
#line 528
nl_die_arg(___nl__im__321);
#line 524
label_918:
;
#line 524
c_rt_lib0move(&___nl__im__323, c_rt_lib0priv_as(___nl__im__318, ___get_global_string_const(734)));
#line 524
c_rt_lib0copy(&___nl__im__322, ___nl__im__323);
#line 525
___nl__bool__324 = false;
#line 525
___nl__bool__325 = false;
#line 525
c_rt_lib0move(&___nl__im__327, c_rt_lib0hash_get_value_dec(___nl__im__322, ___get_global_string_const(241)));
#line 525
___nl__bool__326 = c_rt_lib0priv_is(___nl__im__327, ___get_global_string_const(241));
#line 525
c_rt_lib0clear(&___nl__im__327);
#line 525
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__322, ___nl__bool__324, ___nl__bool__325, ___nl__bool__326, ___ref___im__1));
#line 525
//clear ___nl__bool__324;
#line 525
//clear ___nl__bool__325;
#line 525
//clear ___nl__bool__326;
#line 526
goto label_951;
#line 526
label_931:
;
#line 526
c_rt_lib0move(&___nl__im__329, c_rt_lib0priv_as(___nl__im__318, ___get_global_string_const(1102)));
#line 526
c_rt_lib0copy(&___nl__im__328, ___nl__im__329);
#line 527
c_rt_lib0move(&___nl__im__331, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 527
c_rt_lib0move(&___nl__im__332, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__328));
#line 527
c_rt_lib0move(&___nl__im__334, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(291)));
#line 527
c_rt_lib0move(&___nl__im__333, c_rt_lib0hash_get_value_dec(___nl__im__334, ___get_global_string_const(110)));
#line 527
c_rt_lib0clear(&___nl__im__334);
#line 527
c_rt_lib0move(&___nl__im__330, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__331, ___get_global_string_const(241), ___nl__im__332, ___get_global_string_const(110), ___nl__im__333));
#line 527
c_rt_lib0clear(&___nl__im__331);
#line 527
c_rt_lib0clear(&___nl__im__332);
#line 527
c_rt_lib0clear(&___nl__im__333);
#line 527
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__330, ___ref___im__1));
#line 527
c_rt_lib0clear(&___nl__im__330);
#line 528
goto label_951;
#line 528
label_946:
;
#line 528
c_rt_lib0move(&___nl__im__336, c_rt_lib0priv_as(___nl__im__318, ___get_global_string_const(1103)));
#line 528
c_rt_lib0copy(&___nl__im__335, ___nl__im__336);
#line 529
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__335, ___ref___im__1));
#line 530
goto label_951;
#line 530
label_951:
;
#line 531
goto label_1002;
#line 531
label_953:
;
#line 531
c_rt_lib0move(&___nl__im__338, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(190)));
#line 531
c_rt_lib0copy(&___nl__im__337, ___nl__im__338);
#line 532
___nl__bool__339 = c_rt_lib0priv_is(___nl__im__337, ___get_global_string_const(734));
#line 532
if(___nl__bool__339){ goto label_965;}
#line 534
___nl__bool__339 = c_rt_lib0priv_is(___nl__im__337, ___get_global_string_const(1102));
#line 534
if(___nl__bool__339){ goto label_978;}
#line 536
___nl__bool__339 = c_rt_lib0priv_is(___nl__im__337, ___get_global_string_const(1103));
#line 536
if(___nl__bool__339){ goto label_993;}
#line 536
c_rt_lib0move(&___nl__im__340,___get_global_string_const(15));
#line 536
c_rt_lib0move(&___nl__im__340, c_rt_lib0array_mk(2, ___nl__im__340, ___nl__im__337));
#line 536
nl_die_arg(___nl__im__340);
#line 532
label_965:
;
#line 532
c_rt_lib0move(&___nl__im__342, c_rt_lib0priv_as(___nl__im__337, ___get_global_string_const(734)));
#line 532
c_rt_lib0copy(&___nl__im__341, ___nl__im__342);
#line 533
___nl__bool__343 = false;
#line 533
___nl__bool__344 = false;
#line 533
c_rt_lib0move(&___nl__im__346, c_rt_lib0hash_get_value_dec(___nl__im__341, ___get_global_string_const(241)));
#line 533
___nl__bool__345 = c_rt_lib0priv_is(___nl__im__346, ___get_global_string_const(241));
#line 533
c_rt_lib0clear(&___nl__im__346);
#line 533
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__341, ___nl__bool__343, ___nl__bool__344, ___nl__bool__345, ___ref___im__1));
#line 533
//clear ___nl__bool__343;
#line 533
//clear ___nl__bool__344;
#line 533
//clear ___nl__bool__345;
#line 534
goto label_998;
#line 534
label_978:
;
#line 534
c_rt_lib0move(&___nl__im__348, c_rt_lib0priv_as(___nl__im__337, ___get_global_string_const(1102)));
#line 534
c_rt_lib0copy(&___nl__im__347, ___nl__im__348);
#line 535
c_rt_lib0move(&___nl__im__350, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 535
c_rt_lib0move(&___nl__im__351, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__347));
#line 535
c_rt_lib0move(&___nl__im__353, c_rt_lib0hash_get_value_dec(___nl__im__347, ___get_global_string_const(291)));
#line 535
c_rt_lib0move(&___nl__im__352, c_rt_lib0hash_get_value_dec(___nl__im__353, ___get_global_string_const(110)));
#line 535
c_rt_lib0clear(&___nl__im__353);
#line 535
c_rt_lib0move(&___nl__im__349, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__350, ___get_global_string_const(241), ___nl__im__351, ___get_global_string_const(110), ___nl__im__352));
#line 535
c_rt_lib0clear(&___nl__im__350);
#line 535
c_rt_lib0clear(&___nl__im__351);
#line 535
c_rt_lib0clear(&___nl__im__352);
#line 535
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__349, ___ref___im__1));
#line 535
c_rt_lib0clear(&___nl__im__349);
#line 536
goto label_998;
#line 536
label_993:
;
#line 536
c_rt_lib0move(&___nl__im__355, c_rt_lib0priv_as(___nl__im__337, ___get_global_string_const(1103)));
#line 536
c_rt_lib0copy(&___nl__im__354, ___nl__im__355);
#line 537
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__354, ___ref___im__1));
#line 538
goto label_998;
#line 538
label_998:
;
#line 539
goto label_1002;
#line 539
label_1000:
;
#line 540
goto label_1002;
#line 540
label_1002:
;
#line 540
c_rt_lib0clear(&___nl__im__0);
#line 540
c_rt_lib0clear(&___nl__im__19);
#line 540
//clear ___nl__bool__20;
#line 540
c_rt_lib0clear(&___nl__im__21);
#line 540
c_rt_lib0clear(&___nl__im__22);
#line 540
c_rt_lib0clear(&___nl__im__23);
#line 540
c_rt_lib0clear(&___nl__im__25);
#line 540
//clear ___nl__bool__29;
#line 540
c_rt_lib0clear(&___nl__im__32);
#line 540
c_rt_lib0clear(&___nl__im__33);
#line 540
//clear ___nl__int__34;
#line 540
//clear ___nl__int__35;
#line 540
//clear ___nl__int__36;
#line 540
//clear ___nl__bool__37;
#line 540
c_rt_lib0clear(&___nl__im__38);
#line 540
c_rt_lib0clear(&___nl__im__65);
#line 540
c_rt_lib0clear(&___nl__im__66);
#line 540
c_rt_lib0clear(&___nl__im__67);
#line 540
c_rt_lib0clear(&___nl__im__68);
#line 540
//clear ___nl__bool__69;
#line 540
c_rt_lib0clear(&___nl__im__70);
#line 540
c_rt_lib0clear(&___nl__im__71);
#line 540
c_rt_lib0clear(&___nl__im__72);
#line 540
c_rt_lib0clear(&___nl__im__73);
#line 540
c_rt_lib0clear(&___nl__im__74);
#line 540
c_rt_lib0clear(&___nl__im__88);
#line 540
c_rt_lib0clear(&___nl__im__89);
#line 540
c_rt_lib0clear(&___nl__im__90);
#line 540
c_rt_lib0clear(&___nl__im__103);
#line 540
c_rt_lib0clear(&___nl__im__104);
#line 540
c_rt_lib0clear(&___nl__im__105);
#line 540
c_rt_lib0clear(&___nl__im__123);
#line 540
c_rt_lib0clear(&___nl__im__124);
#line 540
c_rt_lib0clear(&___nl__im__125);
#line 540
c_rt_lib0clear(&___nl__im__128);
#line 540
c_rt_lib0clear(&___nl__im__129);
#line 540
c_rt_lib0clear(&___nl__im__130);
#line 540
c_rt_lib0clear(&___nl__im__143);
#line 540
c_rt_lib0clear(&___nl__im__144);
#line 540
c_rt_lib0clear(&___nl__im__145);
#line 540
c_rt_lib0clear(&___nl__im__154);
#line 540
c_rt_lib0clear(&___nl__im__155);
#line 540
c_rt_lib0clear(&___nl__im__157);
#line 540
c_rt_lib0clear(&___nl__im__163);
#line 540
c_rt_lib0clear(&___nl__im__164);
#line 540
c_rt_lib0clear(&___nl__im__166);
#line 540
c_rt_lib0clear(&___nl__im__182);
#line 540
c_rt_lib0clear(&___nl__im__183);
#line 540
//clear ___nl__bool__185;
#line 540
c_rt_lib0clear(&___nl__im__186);
#line 540
c_rt_lib0clear(&___nl__im__187);
#line 540
c_rt_lib0clear(&___nl__im__188);
#line 540
//clear ___nl__int__189;
#line 540
//clear ___nl__int__190;
#line 540
//clear ___nl__int__191;
#line 540
//clear ___nl__bool__192;
#line 540
c_rt_lib0clear(&___nl__im__193);
#line 540
c_rt_lib0clear(&___nl__im__200);
#line 540
//clear ___nl__bool__202;
#line 540
c_rt_lib0clear(&___nl__im__203);
#line 540
c_rt_lib0clear(&___nl__im__204);
#line 540
c_rt_lib0clear(&___nl__im__205);
#line 540
c_rt_lib0clear(&___nl__im__220);
#line 540
c_rt_lib0clear(&___nl__im__221);
#line 540
c_rt_lib0clear(&___nl__im__222);
#line 540
c_rt_lib0clear(&___nl__im__223);
#line 540
c_rt_lib0clear(&___nl__im__224);
#line 540
//clear ___nl__bool__226;
#line 540
c_rt_lib0clear(&___nl__im__227);
#line 540
c_rt_lib0clear(&___nl__im__266);
#line 540
c_rt_lib0clear(&___nl__im__267);
#line 540
//clear ___nl__bool__268;
#line 540
c_rt_lib0clear(&___nl__im__269);
#line 540
c_rt_lib0clear(&___nl__im__270);
#line 540
c_rt_lib0clear(&___nl__im__280);
#line 540
c_rt_lib0clear(&___nl__im__281);
#line 540
c_rt_lib0clear(&___nl__im__282);
#line 540
c_rt_lib0clear(&___nl__im__283);
#line 540
c_rt_lib0clear(&___nl__im__284);
#line 540
//clear ___nl__int__285;
#line 540
//clear ___nl__int__286;
#line 540
//clear ___nl__int__287;
#line 540
//clear ___nl__bool__288;
#line 540
c_rt_lib0clear(&___nl__im__289);
#line 540
c_rt_lib0clear(&___nl__im__290);
#line 540
c_rt_lib0clear(&___nl__im__291);
#line 540
c_rt_lib0clear(&___nl__im__292);
#line 540
//clear ___nl__int__293;
#line 540
//clear ___nl__int__294;
#line 540
//clear ___nl__int__295;
#line 540
//clear ___nl__bool__296;
#line 540
c_rt_lib0clear(&___nl__im__297);
#line 540
c_rt_lib0clear(&___nl__im__298);
#line 540
c_rt_lib0clear(&___nl__im__299);
#line 540
//clear ___nl__bool__300;
#line 540
c_rt_lib0clear(&___nl__im__301);
#line 540
c_rt_lib0clear(&___nl__im__302);
#line 540
c_rt_lib0clear(&___nl__im__312);
#line 540
c_rt_lib0clear(&___nl__im__313);
#line 540
c_rt_lib0clear(&___nl__im__318);
#line 540
c_rt_lib0clear(&___nl__im__319);
#line 540
//clear ___nl__bool__320;
#line 540
c_rt_lib0clear(&___nl__im__321);
#line 540
c_rt_lib0clear(&___nl__im__322);
#line 540
c_rt_lib0clear(&___nl__im__323);
#line 540
c_rt_lib0clear(&___nl__im__328);
#line 540
c_rt_lib0clear(&___nl__im__329);
#line 540
c_rt_lib0clear(&___nl__im__335);
#line 540
c_rt_lib0clear(&___nl__im__336);
#line 540
c_rt_lib0clear(&___nl__im__337);
#line 540
c_rt_lib0clear(&___nl__im__338);
#line 540
//clear ___nl__bool__339;
#line 540
c_rt_lib0clear(&___nl__im__340);
#line 540
c_rt_lib0clear(&___nl__im__341);
#line 540
c_rt_lib0clear(&___nl__im__342);
#line 540
c_rt_lib0clear(&___nl__im__347);
#line 540
c_rt_lib0clear(&___nl__im__348);
#line 540
c_rt_lib0clear(&___nl__im__354);
#line 540
c_rt_lib0clear(&___nl__im__355);
#line 540
return NULL;
return NULL;

}

ImmT  module_checker_priv0check_lvalue(nast0value_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
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
bool  ___nl__bool__12 = false;
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
ImmT  ___nl__string__29 = NULL;
#line 544
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 544
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(516));
#line 544
c_rt_lib0clear(&___nl__im__3);
#line 544
___nl__bool__2 = !___nl__bool__2;
#line 544
if(___nl__bool__2){ goto label_18;}
#line 545
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 545
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 545
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(516)));
#line 545
c_rt_lib0clear(&___nl__im__5);
#line 545
c_rt_lib0clear(&___nl__im__6);
#line 545
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(111)));
#line 545
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__4, ___nl__im__7, ___ref___im__1));
#line 545
c_rt_lib0clear(&___nl__im__4);
#line 545
c_rt_lib0clear(&___nl__im__7);
#line 546
c_rt_lib0clear(&___nl__im__0);
#line 546
//clear ___nl__bool__2;
#line 546
return NULL;
#line 547
goto label_90;
#line 547
label_18:
;
#line 547
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 547
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(254));
#line 547
c_rt_lib0clear(&___nl__im__8);
#line 547
___nl__bool__2 = !___nl__bool__2;
#line 547
if(___nl__bool__2){ goto label_72;}
#line 548
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 548
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 548
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(254)));
#line 548
c_rt_lib0clear(&___nl__im__10);
#line 548
c_rt_lib0clear(&___nl__im__11);
#line 549
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(569)));
#line 549
c_rt_lib0move(&___nl__im__14,___get_global_string_const(587));
#line 549
___nl__bool__12 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 549
c_rt_lib0clear(&___nl__im__13);
#line 549
c_rt_lib0clear(&___nl__im__14);
#line 549
if(___nl__bool__12){ goto label_40;}
#line 549
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(569)));
#line 549
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1104));
#line 549
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 549
c_rt_lib0clear(&___nl__im__15);
#line 549
c_rt_lib0clear(&___nl__im__16);
#line 549
label_40:
;
#line 549
if(___nl__bool__12){ goto label_47;}
#line 549
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(569)));
#line 549
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1105));
#line 549
___nl__bool__12 = c_rt_lib0eq(___nl__im__17, ___nl__im__18);
#line 549
c_rt_lib0clear(&___nl__im__17);
#line 549
c_rt_lib0clear(&___nl__im__18);
#line 549
label_47:
;
#line 549
if(___nl__bool__12){ goto label_54;}
#line 549
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(569)));
#line 549
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1106));
#line 549
___nl__bool__12 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 549
c_rt_lib0clear(&___nl__im__19);
#line 549
c_rt_lib0clear(&___nl__im__20);
#line 549
label_54:
;
#line 549
___nl__bool__12 = !___nl__bool__12;
#line 549
if(___nl__bool__12){ goto label_69;}
#line 550
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(291)));
#line 550
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__21, ___ref___im__1));
#line 550
c_rt_lib0clear(&___nl__im__21);
#line 551
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(292)));
#line 551
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__22, ___ref___im__1));
#line 551
c_rt_lib0clear(&___nl__im__22);
#line 552
c_rt_lib0clear(&___nl__im__0);
#line 552
//clear ___nl__bool__2;
#line 552
c_rt_lib0clear(&___nl__im__9);
#line 552
//clear ___nl__bool__12;
#line 552
return NULL;
#line 553
goto label_69;
#line 553
label_69:
;
#line 553
//clear ___nl__bool__12;
#line 554
goto label_90;
#line 554
label_72:
;
#line 554
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 554
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(1107));
#line 554
c_rt_lib0clear(&___nl__im__23);
#line 554
___nl__bool__2 = !___nl__bool__2;
#line 554
if(___nl__bool__2){ goto label_90;}
#line 555
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 555
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 555
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(1107)));
#line 555
c_rt_lib0clear(&___nl__im__25);
#line 555
c_rt_lib0clear(&___nl__im__26);
#line 555
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__24, ___ref___im__1));
#line 555
c_rt_lib0clear(&___nl__im__24);
#line 556
c_rt_lib0clear(&___nl__im__0);
#line 556
//clear ___nl__bool__2;
#line 556
c_rt_lib0clear(&___nl__im__9);
#line 556
return NULL;
#line 557
goto label_90;
#line 557
label_90:
;
#line 557
//clear ___nl__bool__2;
#line 557
c_rt_lib0clear(&___nl__im__9);
#line 558
c_rt_lib0move(&___nl__im__27,___get_global_string_const(50));
#line 558
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__27));
#line 558
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1108));
#line 558
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__27, ___nl__im__28));
#line 558
c_rt_lib0move(&___nl__string__29,___get_global_string_const(50));
#line 558
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__29, ___nl__im__27));
#line 558
c_rt_lib0clear(&___nl__im__27);
#line 558
c_rt_lib0clear(&___nl__im__28);
#line 558
c_rt_lib0clear(&___nl__string__29);
#line 558
c_rt_lib0clear(&___nl__im__0);
#line 558
return NULL;

}

ImmT  module_checker_priv0check_val(nast0value_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
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
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
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
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
bool  ___nl__bool__58 = false;
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
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
bool  ___nl__bool__102 = false;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__string__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
#line 562
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 562
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1109));
#line 562
if(___nl__bool__3){ goto label_38;}
#line 566
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1107));
#line 566
if(___nl__bool__3){ goto label_51;}
#line 568
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(572));
#line 568
if(___nl__bool__3){ goto label_56;}
#line 570
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(243));
#line 570
if(___nl__bool__3){ goto label_63;}
#line 571
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(419));
#line 571
if(___nl__bool__3){ goto label_67;}
#line 572
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 572
if(___nl__bool__3){ goto label_71;}
#line 573
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1088));
#line 573
if(___nl__bool__3){ goto label_75;}
#line 574
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1110));
#line 574
if(___nl__bool__3){ goto label_77;}
#line 575
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(250));
#line 575
if(___nl__bool__3){ goto label_81;}
#line 579
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(251));
#line 579
if(___nl__bool__3){ goto label_98;}
#line 584
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(516));
#line 584
if(___nl__bool__3){ goto label_126;}
#line 586
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(254));
#line 586
if(___nl__bool__3){ goto label_133;}
#line 598
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1111));
#line 598
if(___nl__bool__3){ goto label_214;}
#line 600
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1112));
#line 600
if(___nl__bool__3){ goto label_221;}
#line 602
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1068));
#line 602
if(___nl__bool__3){ goto label_230;}
#line 614
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1113));
#line 614
if(___nl__bool__3){ goto label_322;}
#line 616
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1114));
#line 616
if(___nl__bool__3){ goto label_327;}
#line 616
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 616
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 616
nl_die_arg(___nl__im__4);
#line 562
label_38:
;
#line 562
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1109)));
#line 562
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 563
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(1115)));
#line 563
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__7, ___ref___im__1));
#line 563
c_rt_lib0clear(&___nl__im__7);
#line 564
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(1116)));
#line 564
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__8, ___ref___im__1));
#line 564
c_rt_lib0clear(&___nl__im__8);
#line 565
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(1117)));
#line 565
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__9, ___ref___im__1));
#line 565
c_rt_lib0clear(&___nl__im__9);
#line 566
goto label_332;
#line 566
label_51:
;
#line 566
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1107)));
#line 566
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 567
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__10, ___ref___im__1));
#line 568
goto label_332;
#line 568
label_56:
;
#line 568
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(572)));
#line 568
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 569
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(516)));
#line 569
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__14, ___ref___im__1));
#line 569
c_rt_lib0clear(&___nl__im__14);
#line 570
goto label_332;
#line 570
label_63:
;
#line 570
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(243)));
#line 570
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 571
goto label_332;
#line 571
label_67:
;
#line 571
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(419)));
#line 571
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 572
goto label_332;
#line 572
label_71:
;
#line 572
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(33)));
#line 572
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__20);
#line 573
goto label_332;
#line 573
label_75:
;
#line 574
goto label_332;
#line 574
label_77:
;
#line 574
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1110)));
#line 574
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 575
goto label_332;
#line 575
label_81:
;
#line 575
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(250)));
#line 575
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 576
___nl__int__26 = 0;
#line 576
___nl__int__27 = 1;
#line 576
___nl__int__28 = c_rt_lib0array_len(___nl__im__23);
#line 576
label_87:
;
#line 576
___nl__bool__29 = ___nl__int__26 >= ___nl__int__28;
#line 576
if(___nl__bool__29){ goto label_96;}
#line 576
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__23, ___nl__int__26));
#line 576
c_rt_lib0copy(&___nl__im__25, ___nl__im__30);
#line 577
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__25, ___ref___im__1));
#line 577
c_rt_lib0clear(&___nl__im__25);
#line 578
___nl__int__26 = ___nl__int__26 + ___nl__int__27;
#line 578
goto label_87;
#line 578
label_96:
;
#line 579
goto label_332;
#line 579
label_98:
;
#line 579
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(251)));
#line 579
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 580
___nl__int__34 = 0;
#line 580
___nl__int__35 = 1;
#line 580
___nl__int__36 = c_rt_lib0array_len(___nl__im__31);
#line 580
label_104:
;
#line 580
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 580
if(___nl__bool__37){ goto label_124;}
#line 580
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__31, ___nl__int__34));
#line 580
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 581
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(586)));
#line 581
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(241)));
#line 581
c_rt_lib0clear(&___nl__im__40);
#line 581
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(586)));
#line 581
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(241)));
#line 581
c_rt_lib0clear(&___nl__im__42);
#line 581
c_rt_lib0delete(c_rt_lib0priv_as(___nl__im__41, ___get_global_string_const(1110)));
#line 581
c_rt_lib0clear(&___nl__im__39);
#line 581
c_rt_lib0clear(&___nl__im__41);
#line 582
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(245)));
#line 582
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__43, ___ref___im__1));
#line 582
c_rt_lib0clear(&___nl__im__43);
#line 582
c_rt_lib0clear(&___nl__im__33);
#line 583
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 583
goto label_104;
#line 583
label_124:
;
#line 584
goto label_332;
#line 584
label_126:
;
#line 584
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(516)));
#line 584
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 585
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(1057)));
#line 585
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__44, ___nl__im__46, ___ref___im__1));
#line 585
c_rt_lib0clear(&___nl__im__46);
#line 586
goto label_332;
#line 586
label_133:
;
#line 586
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(254)));
#line 586
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 587
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(569)));
#line 588
c_rt_lib0move(&___nl__im__51,___get_global_string_const(754));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__51);
#line 588
c_rt_lib0clear(&___nl__im__51);
#line 588
if(___nl__bool__50){ goto label_144;}
#line 588
c_rt_lib0move(&___nl__im__52,___get_global_string_const(1118));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__52);
#line 588
c_rt_lib0clear(&___nl__im__52);
#line 588
label_144:
;
#line 588
if(___nl__bool__50){ goto label_149;}
#line 588
c_rt_lib0move(&___nl__im__53,___get_global_string_const(1119));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__53);
#line 588
c_rt_lib0clear(&___nl__im__53);
#line 588
label_149:
;
#line 588
if(___nl__bool__50){ goto label_154;}
#line 588
c_rt_lib0move(&___nl__im__54,___get_global_string_const(1120));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__54);
#line 588
c_rt_lib0clear(&___nl__im__54);
#line 588
label_154:
;
#line 588
if(___nl__bool__50){ goto label_159;}
#line 588
c_rt_lib0move(&___nl__im__55,___get_global_string_const(1121));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__55);
#line 588
c_rt_lib0clear(&___nl__im__55);
#line 588
label_159:
;
#line 588
if(___nl__bool__50){ goto label_164;}
#line 588
c_rt_lib0move(&___nl__im__56,___get_global_string_const(1122));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__56);
#line 588
c_rt_lib0clear(&___nl__im__56);
#line 588
label_164:
;
#line 588
___nl__bool__50 = !___nl__bool__50;
#line 588
if(___nl__bool__50){ goto label_203;}
#line 589
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(291)));
#line 589
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(241)));
#line 589
c_rt_lib0clear(&___nl__im__60);
#line 589
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__59, ___get_global_string_const(516));
#line 589
c_rt_lib0clear(&___nl__im__59);
#line 589
___nl__bool__58 = !___nl__bool__57;
#line 589
if(___nl__bool__58){ goto label_177;}
#line 589
c_rt_lib0move(&___nl__im__61,___get_global_string_const(754));
#line 589
___nl__bool__57 = c_rt_lib0eq(___nl__im__49, ___nl__im__61);
#line 589
c_rt_lib0clear(&___nl__im__61);
#line 589
label_177:
;
#line 589
//clear ___nl__bool__58;
#line 589
___nl__bool__57 = !___nl__bool__57;
#line 589
if(___nl__bool__57){ goto label_195;}
#line 590
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(291)));
#line 590
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(241)));
#line 590
c_rt_lib0clear(&___nl__im__64);
#line 590
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(291)));
#line 590
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(241)));
#line 590
c_rt_lib0clear(&___nl__im__66);
#line 590
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(516)));
#line 590
c_rt_lib0clear(&___nl__im__63);
#line 590
c_rt_lib0clear(&___nl__im__65);
#line 590
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_string_const(1056)));
#line 590
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__62, ___nl__im__67, ___ref___im__1));
#line 590
c_rt_lib0clear(&___nl__im__62);
#line 590
c_rt_lib0clear(&___nl__im__67);
#line 591
goto label_200;
#line 591
label_195:
;
#line 592
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(291)));
#line 592
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__68, ___ref___im__1));
#line 592
c_rt_lib0clear(&___nl__im__68);
#line 593
goto label_200;
#line 593
label_200:
;
#line 593
//clear ___nl__bool__57;
#line 594
goto label_208;
#line 594
label_203:
;
#line 595
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(291)));
#line 595
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__69, ___ref___im__1));
#line 595
c_rt_lib0clear(&___nl__im__69);
#line 596
goto label_208;
#line 596
label_208:
;
#line 596
//clear ___nl__bool__50;
#line 597
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(292)));
#line 597
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__70, ___ref___im__1));
#line 597
c_rt_lib0clear(&___nl__im__70);
#line 598
goto label_332;
#line 598
label_214:
;
#line 598
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1111)));
#line 598
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 599
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(245)));
#line 599
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__73, ___ref___im__1));
#line 599
c_rt_lib0clear(&___nl__im__73);
#line 600
goto label_332;
#line 600
label_221:
;
#line 600
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1112)));
#line 600
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 601
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(166)));
#line 601
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(185)));
#line 601
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__76, ___nl__im__77, ___ref___im__1));
#line 601
c_rt_lib0clear(&___nl__im__76);
#line 601
c_rt_lib0clear(&___nl__im__77);
#line 602
goto label_332;
#line 602
label_230:
;
#line 602
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1068)));
#line 602
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 603
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(113)));
#line 603
___nl__int__82 = 0;
#line 603
___nl__int__83 = 1;
#line 603
___nl__int__84 = c_rt_lib0array_len(___nl__im__80);
#line 603
label_237:
;
#line 603
___nl__bool__85 = ___nl__int__82 >= ___nl__int__84;
#line 603
if(___nl__bool__85){ goto label_315;}
#line 603
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_get(___nl__im__80, ___nl__int__82));
#line 603
c_rt_lib0copy(&___nl__im__81, ___nl__im__86);
#line 604
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(111)));
#line 604
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(76));
#line 604
if(___nl__bool__88){ goto label_250;}
#line 606
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(39));
#line 606
if(___nl__bool__88){ goto label_255;}
#line 606
c_rt_lib0move(&___nl__im__89,___get_global_string_const(15));
#line 606
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(2, ___nl__im__89, ___nl__im__87));
#line 606
nl_die_arg(___nl__im__89);
#line 604
label_250:
;
#line 605
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 605
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__90, ___ref___im__1));
#line 605
c_rt_lib0clear(&___nl__im__90);
#line 606
goto label_311;
#line 606
label_255:
;
#line 607
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 607
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__91, ___ref___im__1));
#line 607
c_rt_lib0clear(&___nl__im__91);
#line 608
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 608
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__95, ___get_global_string_const(241)));
#line 608
c_rt_lib0clear(&___nl__im__95);
#line 608
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(516));
#line 608
c_rt_lib0clear(&___nl__im__94);
#line 608
___nl__bool__93 = !___nl__bool__92;
#line 608
if(___nl__bool__93){ goto label_279;}
#line 608
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(896)));
#line 608
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 608
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_string_const(241)));
#line 608
c_rt_lib0clear(&___nl__im__99);
#line 608
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 608
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__101, ___get_global_string_const(241)));
#line 608
c_rt_lib0clear(&___nl__im__101);
#line 608
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__100, ___get_global_string_const(516)));
#line 608
c_rt_lib0clear(&___nl__im__98);
#line 608
c_rt_lib0clear(&___nl__im__100);
#line 608
___nl__bool__92 = hash0has_key(___nl__im__96, ___nl__im__97);
#line 608
c_rt_lib0clear(&___nl__im__96);
#line 608
c_rt_lib0clear(&___nl__im__97);
#line 608
label_279:
;
#line 608
//clear ___nl__bool__93;
#line 608
___nl__bool__92 = !___nl__bool__92;
#line 608
if(___nl__bool__92){ goto label_308;}
#line 609
___nl__bool__102 = true;
#line 609
c_rt_lib0move(&___nl__im__103,___get_global_string_const(896));
#line 609
c_rt_lib0move(&___nl__im__103, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__103));
#line 609
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 609
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(241)));
#line 609
c_rt_lib0clear(&___nl__im__107);
#line 609
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(245)));
#line 609
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(241)));
#line 609
c_rt_lib0clear(&___nl__im__109);
#line 609
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(516)));
#line 609
c_rt_lib0clear(&___nl__im__106);
#line 609
c_rt_lib0clear(&___nl__im__108);
#line 609
c_rt_lib0move(&___nl__im__104, c_rt_lib0get_ref_hash(___nl__im__103, ___nl__im__105));
#line 609
c_rt_lib0move(&___nl__im__110, c_rt_lib0bool_to_nl_native(___nl__bool__102));
#line 609
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(1043), ___nl__im__110);
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__103, ___nl__im__105, ___nl__im__104));
#line 609
c_rt_lib0move(&___nl__string__111,___get_global_string_const(896));
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__111, ___nl__im__103));
#line 609
//clear ___nl__bool__102;
#line 609
c_rt_lib0clear(&___nl__im__103);
#line 609
c_rt_lib0clear(&___nl__im__104);
#line 609
c_rt_lib0clear(&___nl__im__105);
#line 609
c_rt_lib0clear(&___nl__im__110);
#line 609
c_rt_lib0clear(&___nl__string__111);
#line 610
goto label_308;
#line 610
label_308:
;
#line 610
//clear ___nl__bool__92;
#line 611
goto label_311;
#line 611
label_311:
;
#line 611
c_rt_lib0clear(&___nl__im__81);
#line 612
___nl__int__82 = ___nl__int__82 + ___nl__int__83;
#line 612
goto label_237;
#line 612
label_315:
;
#line 613
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(166)));
#line 613
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(185)));
#line 613
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__112, ___nl__im__113, ___ref___im__1));
#line 613
c_rt_lib0clear(&___nl__im__112);
#line 613
c_rt_lib0clear(&___nl__im__113);
#line 614
goto label_332;
#line 614
label_322:
;
#line 614
c_rt_lib0move(&___nl__im__115, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1113)));
#line 614
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 615
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__114, ___ref___im__1));
#line 616
goto label_332;
#line 616
label_327:
;
#line 616
c_rt_lib0move(&___nl__im__117, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1114)));
#line 616
c_rt_lib0copy(&___nl__im__116, ___nl__im__117);
#line 617
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__116, ___ref___im__1));
#line 618
goto label_332;
#line 618
label_332:
;
#line 618
c_rt_lib0clear(&___nl__im__0);
#line 618
c_rt_lib0clear(&___nl__im__2);
#line 618
//clear ___nl__bool__3;
#line 618
c_rt_lib0clear(&___nl__im__4);
#line 618
c_rt_lib0clear(&___nl__im__5);
#line 618
c_rt_lib0clear(&___nl__im__6);
#line 618
c_rt_lib0clear(&___nl__im__10);
#line 618
c_rt_lib0clear(&___nl__im__11);
#line 618
c_rt_lib0clear(&___nl__im__12);
#line 618
c_rt_lib0clear(&___nl__im__13);
#line 618
//clear ___nl__int__15;
#line 618
c_rt_lib0clear(&___nl__im__16);
#line 618
c_rt_lib0clear(&___nl__im__17);
#line 618
c_rt_lib0clear(&___nl__im__18);
#line 618
//clear ___nl__bool__19;
#line 618
c_rt_lib0clear(&___nl__im__20);
#line 618
c_rt_lib0clear(&___nl__im__21);
#line 618
c_rt_lib0clear(&___nl__im__22);
#line 618
c_rt_lib0clear(&___nl__im__23);
#line 618
c_rt_lib0clear(&___nl__im__24);
#line 618
c_rt_lib0clear(&___nl__im__25);
#line 618
//clear ___nl__int__26;
#line 618
//clear ___nl__int__27;
#line 618
//clear ___nl__int__28;
#line 618
//clear ___nl__bool__29;
#line 618
c_rt_lib0clear(&___nl__im__30);
#line 618
c_rt_lib0clear(&___nl__im__31);
#line 618
c_rt_lib0clear(&___nl__im__32);
#line 618
c_rt_lib0clear(&___nl__im__33);
#line 618
//clear ___nl__int__34;
#line 618
//clear ___nl__int__35;
#line 618
//clear ___nl__int__36;
#line 618
//clear ___nl__bool__37;
#line 618
c_rt_lib0clear(&___nl__im__38);
#line 618
c_rt_lib0clear(&___nl__im__44);
#line 618
c_rt_lib0clear(&___nl__im__45);
#line 618
c_rt_lib0clear(&___nl__im__47);
#line 618
c_rt_lib0clear(&___nl__im__48);
#line 618
c_rt_lib0clear(&___nl__im__49);
#line 618
c_rt_lib0clear(&___nl__im__71);
#line 618
c_rt_lib0clear(&___nl__im__72);
#line 618
c_rt_lib0clear(&___nl__im__74);
#line 618
c_rt_lib0clear(&___nl__im__75);
#line 618
c_rt_lib0clear(&___nl__im__78);
#line 618
c_rt_lib0clear(&___nl__im__79);
#line 618
c_rt_lib0clear(&___nl__im__80);
#line 618
c_rt_lib0clear(&___nl__im__81);
#line 618
//clear ___nl__int__82;
#line 618
//clear ___nl__int__83;
#line 618
//clear ___nl__int__84;
#line 618
//clear ___nl__bool__85;
#line 618
c_rt_lib0clear(&___nl__im__86);
#line 618
c_rt_lib0clear(&___nl__im__87);
#line 618
//clear ___nl__bool__88;
#line 618
c_rt_lib0clear(&___nl__im__89);
#line 618
c_rt_lib0clear(&___nl__im__114);
#line 618
c_rt_lib0clear(&___nl__im__115);
#line 618
c_rt_lib0clear(&___nl__im__116);
#line 618
c_rt_lib0clear(&___nl__im__117);
#line 618
return NULL;

}

module_checker0save_t0type module_checker_priv0save_block(module_checker0state_t0type* ___ref___im__0) {
module_checker_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 622
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(1050)));
#line 622
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__3);
#line 622
c_rt_lib0clear(&___nl__im__3);
#line 622
c_rt_lib0move(&___nl__im__4, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 622
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(896)));
#line 622
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1050), ___nl__im__4, ___get_global_string_const(896), ___nl__im__5));
#line 622
//clear ___nl__bool__2;
#line 622
c_rt_lib0clear(&___nl__im__4);
#line 622
c_rt_lib0clear(&___nl__im__5);
#line 622
return ___nl__im__1;
return NULL;

}

ImmT  module_checker_priv0load_block(module_checker0state_t0type* ___ref___im__0,module_checker0save_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
module_checker_priv0__const__init();
bool  ___nl__bool__2 = false;
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__string__26 = NULL;
#line 626
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1050)));
#line 626
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__3);
#line 626
c_rt_lib0clear(&___nl__im__3);
#line 626
c_rt_lib0move(&___nl__im__4, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 626
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_string_const(1050), ___nl__im__4);
#line 626
//clear ___nl__bool__2;
#line 626
c_rt_lib0clear(&___nl__im__4);
#line 627
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(896)));
#line 627
c_rt_lib0move(&___nl__im__5, hash0keys(___nl__im__6));
#line 627
c_rt_lib0clear(&___nl__im__6);
#line 628
___nl__int__8 = 0;
#line 628
___nl__int__9 = 1;
#line 628
___nl__int__10 = c_rt_lib0array_len(___nl__im__5);
#line 628
label_13:
;
#line 628
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 628
if(___nl__bool__11){ goto label_69;}
#line 628
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__5, ___nl__int__8));
#line 628
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 629
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(896)));
#line 629
___nl__bool__13 = hash0has_key(___nl__im__14, ___nl__im__7);
#line 629
c_rt_lib0clear(&___nl__im__14);
#line 629
___nl__bool__13 = !___nl__bool__13;
#line 629
___nl__bool__13 = !___nl__bool__13;
#line 629
if(___nl__bool__13){ goto label_63;}
#line 630
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(896)));
#line 630
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__16, ___nl__im__7));
#line 630
c_rt_lib0clear(&___nl__im__16);
#line 631
c_rt_lib0move(&___nl__im__17,___get_global_string_const(896));
#line 631
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__17));
#line 631
c_rt_lib0delete(hash0delete(&___nl__im__17, ___nl__im__7));
#line 631
c_rt_lib0move(&___nl__string__18,___get_global_string_const(896));
#line 631
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__18, ___nl__im__17));
#line 631
c_rt_lib0clear(&___nl__im__17);
#line 631
c_rt_lib0clear(&___nl__string__18);
#line 632
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(360)));
#line 632
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__21);
#line 632
c_rt_lib0clear(&___nl__im__21);
#line 632
___nl__bool__19 = !___nl__bool__19;
#line 632
___nl__bool__20 = !___nl__bool__19;
#line 632
if(___nl__bool__20){ goto label_44;}
#line 632
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(1044)));
#line 632
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__22);
#line 632
c_rt_lib0clear(&___nl__im__22);
#line 632
___nl__bool__19 = !___nl__bool__19;
#line 632
label_44:
;
#line 632
//clear ___nl__bool__20;
#line 632
___nl__bool__19 = !___nl__bool__19;
#line 632
if(___nl__bool__19){ goto label_60;}
#line 633
c_rt_lib0move(&___nl__im__23,___get_global_string_const(50));
#line 633
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__23));
#line 633
c_rt_lib0move(&___nl__im__25,___get_global_string_const(1123));
#line 633
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__7));
#line 633
c_rt_lib0clear(&___nl__im__25);
#line 633
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__23, ___nl__im__24));
#line 633
c_rt_lib0move(&___nl__string__26,___get_global_string_const(50));
#line 633
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__26, ___nl__im__23));
#line 633
c_rt_lib0clear(&___nl__im__23);
#line 633
c_rt_lib0clear(&___nl__im__24);
#line 633
c_rt_lib0clear(&___nl__string__26);
#line 634
goto label_60;
#line 634
label_60:
;
#line 634
//clear ___nl__bool__19;
#line 635
goto label_63;
#line 635
label_63:
;
#line 635
//clear ___nl__bool__13;
#line 635
c_rt_lib0clear(&___nl__im__15);
#line 635
c_rt_lib0clear(&___nl__im__7);
#line 636
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 636
goto label_13;
#line 636
label_69:
;
#line 636
c_rt_lib0clear(&___nl__im__1);
#line 636
c_rt_lib0clear(&___nl__im__5);
#line 636
c_rt_lib0clear(&___nl__im__7);
#line 636
//clear ___nl__int__8;
#line 636
//clear ___nl__int__9;
#line 636
//clear ___nl__int__10;
#line 636
//clear ___nl__bool__11;
#line 636
c_rt_lib0clear(&___nl__im__12);
#line 636
return NULL;

}

ImmT  module_checker_priv0restore_block(module_checker0state_t0type* ___ref___im__0,module_checker0save_t0type* ___ref___im__1) {
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
#line 640
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(896)));
#line 640
c_rt_lib0move(&___nl__im__2, hash0keys(___nl__im__3));
#line 640
c_rt_lib0clear(&___nl__im__3);
#line 641
___nl__int__5 = 0;
#line 641
___nl__int__6 = 1;
#line 641
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 641
label_6:
;
#line 641
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 641
if(___nl__bool__8){ goto label_34;}
#line 641
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 641
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 642
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(896)));
#line 642
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__12, ___nl__im__4));
#line 642
c_rt_lib0clear(&___nl__im__12);
#line 642
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(1043)));
#line 642
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__13);
#line 642
c_rt_lib0clear(&___nl__im__11);
#line 642
c_rt_lib0clear(&___nl__im__13);
#line 642
c_rt_lib0move(&___nl__im__14,___get_global_string_const(896));
#line 642
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__14));
#line 642
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash(___nl__im__14, ___nl__im__4));
#line 642
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 642
c_rt_lib0hash_set_value_dec(&___nl__im__15, ___get_global_string_const(1043), ___nl__im__16);
#line 642
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__14, ___nl__im__4, ___nl__im__15));
#line 642
c_rt_lib0move(&___nl__string__17,___get_global_string_const(896));
#line 642
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__17, ___nl__im__14));
#line 642
//clear ___nl__bool__10;
#line 642
c_rt_lib0clear(&___nl__im__14);
#line 642
c_rt_lib0clear(&___nl__im__15);
#line 642
c_rt_lib0clear(&___nl__im__16);
#line 642
c_rt_lib0clear(&___nl__string__17);
#line 642
c_rt_lib0clear(&___nl__im__4);
#line 643
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 643
goto label_6;
#line 643
label_34:
;
#line 643
c_rt_lib0clear(&___nl__im__2);
#line 643
c_rt_lib0clear(&___nl__im__4);
#line 643
//clear ___nl__int__5;
#line 643
//clear ___nl__int__6;
#line 643
//clear ___nl__int__7;
#line 643
//clear ___nl__bool__8;
#line 643
c_rt_lib0clear(&___nl__im__9);
#line 643
return NULL;

}

module_checker0init_checker_t0type module_checker_priv0inits(module_checker0state_t0type* ___ref___im__0) {
module_checker_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
#line 647
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 648
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(896)));
#line 648
c_rt_lib0move(&___nl__im__2, hash0keys(___nl__im__3));
#line 648
c_rt_lib0clear(&___nl__im__3);
#line 648
___nl__int__5 = 0;
#line 648
___nl__int__6 = 1;
#line 648
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 648
label_7:
;
#line 648
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 648
if(___nl__bool__8){ goto label_20;}
#line 648
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 648
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 649
___nl__bool__10 = true;
#line 649
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 649
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__4, ___nl__im__11));
#line 649
//clear ___nl__bool__10;
#line 649
c_rt_lib0clear(&___nl__im__11);
#line 649
c_rt_lib0clear(&___nl__im__4);
#line 650
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 650
goto label_7;
#line 650
label_20:
;
#line 652
c_rt_lib0move(&___nl__im__13, module_checker_priv0save_block(___ref___im__0));
#line 652
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(359), ___nl__im__13, ___get_global_string_const(1054), ___nl__im__1));
#line 652
c_rt_lib0clear(&___nl__im__13);
#line 652
c_rt_lib0clear(&___nl__im__1);
#line 652
c_rt_lib0clear(&___nl__im__2);
#line 652
c_rt_lib0clear(&___nl__im__4);
#line 652
//clear ___nl__int__5;
#line 652
//clear ___nl__int__6;
#line 652
//clear ___nl__int__7;
#line 652
//clear ___nl__bool__8;
#line 652
c_rt_lib0clear(&___nl__im__9);
#line 652
return ___nl__im__12;
return NULL;

}

ImmT  module_checker_priv0update_inits(module_checker0state_t0type* ___ref___im__0,module_checker0init_checker_t0type* ___ref___im__1) {
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
#line 658
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(1054)));
#line 658
c_rt_lib0move(&___nl__im__2, hash0keys(___nl__im__3));
#line 658
c_rt_lib0clear(&___nl__im__3);
#line 658
___nl__int__5 = 0;
#line 658
___nl__int__6 = 1;
#line 658
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 658
label_6:
;
#line 658
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 658
if(___nl__bool__8){ goto label_38;}
#line 658
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 658
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 659
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(896)));
#line 659
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__12, ___nl__im__4));
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(1043)));
#line 659
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__13);
#line 659
c_rt_lib0clear(&___nl__im__11);
#line 659
c_rt_lib0clear(&___nl__im__13);
#line 659
___nl__bool__10 = !___nl__bool__10;
#line 659
___nl__bool__10 = !___nl__bool__10;
#line 659
if(___nl__bool__10){ goto label_33;}
#line 659
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1054));
#line 659
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__14));
#line 659
___nl__bool__15 = false;
#line 659
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__15));
#line 659
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__4, ___nl__im__16));
#line 659
c_rt_lib0move(&___nl__string__17,___get_global_string_const(1054));
#line 659
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__17, ___nl__im__14));
#line 659
c_rt_lib0clear(&___nl__im__14);
#line 659
//clear ___nl__bool__15;
#line 659
c_rt_lib0clear(&___nl__im__16);
#line 659
c_rt_lib0clear(&___nl__string__17);
#line 659
goto label_33;
#line 659
label_33:
;
#line 659
//clear ___nl__bool__10;
#line 659
c_rt_lib0clear(&___nl__im__4);
#line 660
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 660
goto label_6;
#line 660
label_38:
;
#line 660
c_rt_lib0clear(&___nl__im__2);
#line 660
c_rt_lib0clear(&___nl__im__4);
#line 660
//clear ___nl__int__5;
#line 660
//clear ___nl__int__6;
#line 660
//clear ___nl__int__7;
#line 660
//clear ___nl__bool__8;
#line 660
c_rt_lib0clear(&___nl__im__9);
#line 660
return NULL;

}

ImmT  module_checker_priv0flush_inits(module_checker0state_t0type* ___ref___im__0,module_checker0init_checker_t0type* ___ref___im__1) {
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
#line 664
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(1054)));
#line 664
c_rt_lib0move(&___nl__im__2, hash0keys(___nl__im__3));
#line 664
c_rt_lib0clear(&___nl__im__3);
#line 664
___nl__int__5 = 0;
#line 664
___nl__int__6 = 1;
#line 664
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 664
label_6:
;
#line 664
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 664
if(___nl__bool__8){ goto label_32;}
#line 664
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 664
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 665
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(1054)));
#line 665
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__4));
#line 665
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__12);
#line 665
c_rt_lib0clear(&___nl__im__11);
#line 665
c_rt_lib0clear(&___nl__im__12);
#line 665
c_rt_lib0move(&___nl__im__13,___get_global_string_const(896));
#line 665
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__13));
#line 665
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash(___nl__im__13, ___nl__im__4));
#line 665
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 665
c_rt_lib0hash_set_value_dec(&___nl__im__14, ___get_global_string_const(1043), ___nl__im__15);
#line 665
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__13, ___nl__im__4, ___nl__im__14));
#line 665
c_rt_lib0move(&___nl__string__16,___get_global_string_const(896));
#line 665
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__16, ___nl__im__13));
#line 665
//clear ___nl__bool__10;
#line 665
c_rt_lib0clear(&___nl__im__13);
#line 665
c_rt_lib0clear(&___nl__im__14);
#line 665
c_rt_lib0clear(&___nl__im__15);
#line 665
c_rt_lib0clear(&___nl__string__16);
#line 665
c_rt_lib0clear(&___nl__im__4);
#line 666
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 666
goto label_6;
#line 666
label_32:
;
#line 666
c_rt_lib0clear(&___nl__im__2);
#line 666
c_rt_lib0clear(&___nl__im__4);
#line 666
//clear ___nl__int__5;
#line 666
//clear ___nl__int__6;
#line 666
//clear ___nl__int__7;
#line 666
//clear ___nl__bool__8;
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
return NULL;

}


static ImmT ___const__[10];
static int ___const_init__ = 1;
void module_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[9];


for(int i=0;i<9;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 9);
}}
ImmT module_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT module_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = module_checker0stack_t0cal();
	break;
case 1:
	___const__[1] = module_checker0stack_hash_t0cal();
	break;
case 2:
	___const__[2] = module_checker0ret_t0cal();
	break;
case 3:
	___const__[3] = module_checker0modules_t0cal();
	break;
case 4:
	___const__[4] = module_checker0var_t0cal();
	break;
case 5:
	___const__[5] = module_checker0return_t0cal();
	break;
case 6:
	___const__[6] = module_checker0state_t0cal();
	break;
case 7:
	___const__[7] = module_checker0save_t0cal();
	break;
case 8:
	___const__[8] = module_checker0init_checker_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
