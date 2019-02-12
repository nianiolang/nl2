
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
return module_checker0stack_t();
}
ImmT  module_checker0stack_t() {
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
return module_checker0stack_hash_t();
}
ImmT  module_checker0stack_hash_t() {
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
return module_checker0ret_t();
}
ImmT  module_checker0ret_t() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(159), ___nl__im__2, ___get_global_const(79), ___nl__im__4));
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
return module_checker0modules_t();
}
ImmT  module_checker0modules_t() {
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

module_checker0ret_t0type module_checker0search_loops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0search_loops");
module_checker0modules_t0type *var0 = &(_tab[0]);
return module_checker0search_loops(*var0);
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
label_3:
;
#line 33
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 33
if(___nl__bool__3){ goto label_1;}
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
if(___nl__bool__6){ goto label_5;}
#line 35
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 36
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 37
c_rt_lib0move(&___nl__im__9, module_checker_priv0check_module(___nl__im__2, ___nl__im__0, &___nl__im__7, &___nl__im__8, &___nl__im__1));
#line 37
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(159));
#line 37
if(___nl__bool__10){ goto label_7;}
#line 39
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(79));
#line 39
if(___nl__bool__10){ goto label_8;}
#line 39
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 39
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 39
nl_die_arg(___nl__im__11);
#line 37
label_7:
;
#line 37
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(159)));
#line 37
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 38
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(159), ___nl__im__12));
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
goto label_6;
#line 39
label_8:
;
#line 40
goto label_6;
#line 40
label_6:
;
#line 41
goto label_4;
#line 41
label_5:
;
#line 41
label_4:
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
goto label_3;
#line 42
label_1:
;
#line 43
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(79)));
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
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
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
label_3:
;
#line 51
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 51
___nl__bool__14 = ___nl__int__15;
#line 51
if(___nl__bool__14){ goto label_1;}
#line 51
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 51
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 52
___nl__bool__17 = hash0has_key((*___ref___im__3), ___nl__im__10);
#line 52
___nl__bool__17 = !___nl__bool__17;
#line 52
if(___nl__bool__17){ goto label_5;}
#line 53
c_rt_lib0move(&___nl__im__19, module_checker_priv0get_loop_from_stack(___nl__im__10, (*___ref___im__2)));
#line 53
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(159), ___nl__im__19));
#line 53
c_rt_lib0clear(&___nl__im__19);
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
//clear ___nl__int__15;
#line 53
c_rt_lib0clear(&___nl__im__16);
#line 53
//clear ___nl__bool__17;
#line 53
return ___nl__im__18;
#line 54
goto label_4;
#line 54
label_5:
;
#line 54
___nl__bool__17 = hash0has_key(___nl__im__1, ___nl__im__10);
#line 54
___nl__bool__20 = !___nl__bool__17;
#line 54
if(___nl__bool__20){ goto label_7;}
#line 54
___nl__bool__17 = hash0has_key((*___ref___im__4), ___nl__im__10);
#line 54
___nl__bool__17 = !___nl__bool__17;
#line 54
label_7:
;
#line 54
//clear ___nl__bool__20;
#line 54
___nl__bool__17 = !___nl__bool__17;
#line 54
if(___nl__bool__17){ goto label_6;}
#line 55
c_rt_lib0move(&___nl__im__21, module_checker_priv0check_module(___nl__im__10, ___nl__im__1, ___ref___im__2, ___ref___im__3, ___ref___im__4));
#line 55
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(159));
#line 55
if(___nl__bool__22){ goto label_9;}
#line 57
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(79));
#line 57
if(___nl__bool__22){ goto label_10;}
#line 57
c_rt_lib0move(&___nl__im__23,___get_global_const(16));
#line 57
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__21));
#line 57
nl_die_arg(___nl__im__23);
#line 55
label_9:
;
#line 55
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(159)));
#line 55
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 56
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(159), ___nl__im__24));
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
//clear ___nl__int__15;
#line 56
c_rt_lib0clear(&___nl__im__16);
#line 56
//clear ___nl__bool__17;
#line 56
c_rt_lib0clear(&___nl__im__18);
#line 56
c_rt_lib0clear(&___nl__im__21);
#line 56
//clear ___nl__bool__22;
#line 56
c_rt_lib0clear(&___nl__im__23);
#line 56
c_rt_lib0clear(&___nl__im__24);
#line 56
c_rt_lib0clear(&___nl__im__25);
#line 56
return ___nl__im__26;
#line 57
goto label_8;
#line 57
label_10:
;
#line 58
goto label_8;
#line 58
label_8:
;
#line 59
goto label_4;
#line 59
label_6:
;
#line 59
label_4:
;
#line 59
//clear ___nl__bool__17;
#line 59
c_rt_lib0clear(&___nl__im__18);
#line 59
c_rt_lib0clear(&___nl__im__21);
#line 59
//clear ___nl__bool__22;
#line 59
c_rt_lib0clear(&___nl__im__23);
#line 59
c_rt_lib0clear(&___nl__im__24);
#line 59
c_rt_lib0clear(&___nl__im__25);
#line 59
c_rt_lib0clear(&___nl__im__26);
#line 59
c_rt_lib0clear(&___nl__im__10);
#line 60
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 60
goto label_3;
#line 60
label_1:
;
#line 61
c_rt_lib0delete(hash0delete(___ref___im__3, ___nl__im__0));
#line 62
___nl__int__27 = 0;
#line 62
___nl__int__29 = c_rt_lib0array_len((*___ref___im__2));
#line 62
___nl__int__30 = 1;
#line 62
___nl__int__28 = ___nl__int__29 - ___nl__int__30;
#line 62
//clear ___nl__int__29;
#line 62
//clear ___nl__int__30;
#line 62
c_rt_lib0move(___ref___im__2, array0subarray((*___ref___im__2), ___nl__int__27, ___nl__int__28));
#line 62
//clear ___nl__int__27;
#line 62
//clear ___nl__int__28;
#line 63
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(79)));
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
//clear ___nl__int__15;
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
return ___nl__im__31;
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
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
#line 67
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 68
___nl__int__4 = 0;
#line 68
___nl__int__5 = 1;
#line 68
___nl__int__6 = c_rt_lib0array_len(___nl__im__1);
#line 68
label_3:
;
#line 68
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 68
___nl__bool__7 = ___nl__int__8;
#line 68
if(___nl__bool__7){ goto label_1;}
#line 68
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__4));
#line 68
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 69
___nl__bool__10 = c_rt_lib0eq(___nl__im__3, ___nl__im__0);
#line 69
___nl__bool__10 = !___nl__bool__10;
#line 69
if(___nl__bool__10){ goto label_5;}
#line 69
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 69
goto label_4;
#line 69
label_5:
;
#line 69
label_4:
;
#line 69
//clear ___nl__bool__10;
#line 70
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__3));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 71
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 71
goto label_3;
#line 71
label_1:
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
//clear ___nl__int__8;
#line 73
c_rt_lib0clear(&___nl__im__9);
#line 73
return ___nl__im__2;
return NULL;
}

ImmT  module_checker0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0var_t");
return module_checker0var_t();
}
ImmT  module_checker0var_t() {
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__4, ___get_global_const(72), ___nl__im__5, ___get_global_const(219), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(317), ___nl__im__2, ___get_global_const(322), ___nl__im__7, ___get_global_const(903), ___nl__im__8, ___get_global_const(904), ___nl__im__9));
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
return module_checker0return_t();
}
ImmT  module_checker0return_t() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(905), ___nl__im__2, ___get_global_const(72), ___nl__im__3, ___get_global_const(219), ___nl__im__4, ___get_global_const(906), ___nl__im__5, ___get_global_const(907), ___nl__im__6));
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
return module_checker0state_t();
}
ImmT  module_checker0state_t() {
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(module_checker0return_t0ptr, ___get_global_const(57), ___get_global_const(802)));
#line 98
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 98
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(216), ___nl__im__5, ___get_global_const(277), ___nl__im__6));
#line 98
c_rt_lib0clear(&___nl__im__5);
#line 98
c_rt_lib0clear(&___nl__im__6);
#line 98
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 98
c_rt_lib0clear(&___nl__im__4);
#line 99
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(57), ___get_global_const(908)));
#line 99
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 99
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 100
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(48), ___get_global_const(909)));
#line 100
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__im__12, ___get_global_const(151), ___nl__im__14));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(910), ___nl__im__2, ___get_global_const(246), ___nl__im__3, ___get_global_const(756), ___nl__im__7, ___get_global_const(51), ___nl__im__9, ___get_global_const(911), ___nl__im__10, ___get_global_const(912), ___nl__im__16));
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
return module_checker0save_t();
}
ImmT  module_checker0save_t() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 107
c_rt_lib0move(&___nl__im__2, ptd0bool());
#line 107
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(57), ___get_global_const(908)));
#line 107
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 107
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(910), ___nl__im__2, ___get_global_const(756), ___nl__im__3));
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
return module_checker0init_checker_t();
}
ImmT  module_checker0init_checker_t() {
module_checker_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(module_checker0save_t0ptr, ___get_global_const(57), ___get_global_const(913)));
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 113
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 113
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(321), ___nl__im__2, ___get_global_const(914), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__2,___get_global_const(51));
#line 118
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 119
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(915)));
#line 119
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 119
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(151)));
#line 119
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(123)));
#line 119
___nl__int__9 = 1;
#line 119
___nl__int__9 = -___nl__int__9;
#line 119
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 119
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_const(156), ___nl__im__1, ___get_global_const(153), ___nl__im__6, ___get_global_const(151), ___nl__im__7, ___get_global_const(205), ___nl__im__8, ___get_global_const(204), ___nl__im__10));
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
c_rt_lib0move(&___nl__string__11,___get_global_const(51));
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
c_rt_lib0move(&___nl__im__2,___get_global_const(124));
#line 123
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 124
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(915)));
#line 124
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 124
c_rt_lib0clear(&___nl__im__5);
#line 124
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 124
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(151)));
#line 124
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(202)));
#line 124
___nl__int__9 = 1;
#line 124
___nl__int__9 = -___nl__int__9;
#line 124
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_const(156), ___nl__im__1, ___get_global_const(153), ___nl__im__6, ___get_global_const(151), ___nl__im__7, ___get_global_const(205), ___nl__im__8, ___get_global_const(204), ___nl__im__10));
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
c_rt_lib0move(&___nl__string__11,___get_global_const(124));
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
label_3:
;
#line 129
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 129
if(___nl__bool__7){ goto label_1;}
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
if(___nl__bool__10){ goto label_5;}
#line 130
goto label_2;
#line 130
goto label_4;
#line 130
label_5:
;
#line 130
label_4:
;
#line 130
//clear ___nl__bool__10;
#line 131
___nl__bool__11 = hash0has_key((*___ref___im__2), ___nl__im__6);
#line 131
___nl__bool__11 = !___nl__bool__11;
#line 131
if(___nl__bool__11){ goto label_7;}
#line 131
goto label_2;
#line 131
goto label_6;
#line 131
label_7:
;
#line 131
label_6:
;
#line 131
//clear ___nl__bool__11;
#line 132
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__im__6, ___nl__im__1, ___ref___im__2));
#line 132
label_2:
;
#line 133
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 133
goto label_3;
#line 133
label_1:
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

tc_types0errors_t0type module_checker0check_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "module_checker0check_module");
nast0module_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return module_checker0check_module(*var0, *var1, var2);
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
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__string__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
bool  ___nl__bool__56 = false;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
INT  ___nl__int__66 = 0;
bool  ___nl__bool__67 = false;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__string__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
bool  ___nl__bool__87 = false;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
INT  ___nl__int__97 = 0;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__string__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
INT  ___nl__int__106 = 0;
INT  ___nl__int__107 = 0;
INT  ___nl__int__108 = 0;
bool  ___nl__bool__109 = false;
INT  ___nl__int__110 = 0;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
INT  ___nl__int__114 = 0;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__string__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__string__123 = NULL;
bool  ___nl__bool__124 = false;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__string__132 = NULL;
ImmT  ___nl__im__133 = NULL;
bool  ___nl__bool__134 = false;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
INT  ___nl__int__140 = 0;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__string__145 = NULL;
bool  ___nl__bool__146 = false;
ImmT  ___nl__im__147 = NULL;
bool  ___nl__bool__148 = false;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__string__154 = NULL;
bool  ___nl__bool__155 = false;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
bool  ___nl__bool__158 = false;
INT  ___nl__int__159 = 0;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
INT  ___nl__int__164 = 0;
INT  ___nl__int__165 = 0;
INT  ___nl__int__166 = 0;
bool  ___nl__bool__167 = false;
INT  ___nl__int__168 = 0;
ImmT  ___nl__im__169 = NULL;
bool  ___nl__bool__170 = false;
ImmT  ___nl__im__171 = NULL;
bool  ___nl__bool__172 = false;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
bool  ___nl__bool__175 = false;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
INT  ___nl__int__181 = 0;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__string__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__string__192 = NULL;
ImmT  ___nl__im__193 = NULL;
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 137
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(51), ___nl__im__4, ___get_global_const(124), ___nl__im__5, ___get_global_const(915), ___nl__im__7, ___get_global_const(151), ___nl__im__8));
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
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__im__10, ___get_global_const(151), ___nl__im__11));
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 140
___nl__bool__14 = false;
#line 140
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 140
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 140
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(216), ___nl__im__15, ___get_global_const(277), ___nl__im__16));
#line 140
//clear ___nl__bool__14;
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
c_rt_lib0clear(&___nl__im__16);
#line 141
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 142
___nl__bool__18 = false;
#line 142
c_rt_lib0move(&___nl__im__19, c_rt_lib0bool_to_nl_native(___nl__bool__18));
#line 144
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 144
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(6, ___get_global_const(246), ___nl__im__13, ___get_global_const(912), ___nl__im__17, ___get_global_const(910), ___nl__im__19, ___get_global_const(911), ___nl__im__9, ___get_global_const(756), ___nl__im__20, ___get_global_const(51), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(165)));
#line 149
___nl__int__25 = 0;
#line 149
___nl__int__26 = 1;
#line 149
___nl__int__27 = c_rt_lib0array_len(___nl__im__23);
#line 149
label_3:
;
#line 149
___nl__int__29 = ___nl__int__25 >= ___nl__int__27;
#line 149
___nl__bool__28 = ___nl__int__29;
#line 149
if(___nl__bool__28){ goto label_1;}
#line 149
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__23, ___nl__int__25));
#line 149
c_rt_lib0copy(&___nl__im__24, ___nl__im__30);
#line 150
c_rt_lib0move(&___nl__im__31,___get_global_const(51));
#line 150
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__31));
#line 150
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(153)));
#line 150
___nl__int__33 = getIntFromImm(___nl__im__34);
#line 150
c_rt_lib0clear(&___nl__im__34);
#line 150
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__33));
#line 150
c_rt_lib0hash_set_value_dec(&___nl__im__31, ___get_global_const(915), ___nl__im__32);
#line 150
c_rt_lib0move(&___nl__string__35,___get_global_const(51));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__35, ___nl__im__31));
#line 150
c_rt_lib0clear(&___nl__im__31);
#line 150
c_rt_lib0clear(&___nl__im__32);
#line 150
//clear ___nl__int__33;
#line 150
c_rt_lib0clear(&___nl__string__35);
#line 151
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(0));
#line 151
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 151
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(756), ___nl__im__36);
#line 151
c_rt_lib0clear(&___nl__im__36);
#line 151
c_rt_lib0clear(&___nl__im__37);
#line 152
___nl__bool__40 = false;
#line 152
c_rt_lib0move(&___nl__im__41, c_rt_lib0bool_to_nl_native(___nl__bool__40));
#line 152
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(429)));
#line 152
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(205)));
#line 152
c_rt_lib0clear(&___nl__im__44);
#line 152
c_rt_lib0move(&___nl__im__42, module_checker_priv0check_return_type(___nl__im__43, &___nl__im__12));
#line 152
c_rt_lib0clear(&___nl__im__43);
#line 152
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(2, ___get_global_const(216), ___nl__im__41, ___get_global_const(277), ___nl__im__42));
#line 152
//clear ___nl__bool__40;
#line 152
c_rt_lib0clear(&___nl__im__41);
#line 152
c_rt_lib0clear(&___nl__im__42);
#line 152
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 152
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(246), ___nl__im__38);
#line 152
c_rt_lib0clear(&___nl__im__38);
#line 152
c_rt_lib0clear(&___nl__im__39);
#line 153
c_rt_lib0move(&___nl__im__45, module_checker_priv0save_block(&___nl__im__12));
#line 154
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(265)));
#line 154
___nl__int__48 = 0;
#line 154
___nl__int__49 = 1;
#line 154
___nl__int__50 = c_rt_lib0array_len(___nl__im__46);
#line 154
label_6:
;
#line 154
___nl__int__52 = ___nl__int__48 >= ___nl__int__50;
#line 154
___nl__bool__51 = ___nl__int__52;
#line 154
if(___nl__bool__51){ goto label_4;}
#line 154
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__46, ___nl__int__48));
#line 154
c_rt_lib0copy(&___nl__im__47, ___nl__im__53);
#line 155
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(167)));
#line 155
___nl__bool__55 = false;
#line 155
___nl__bool__56 = false;
#line 155
___nl__bool__57 = true;
#line 155
c_rt_lib0delete(module_checker_priv0add_var(___nl__im__54, ___nl__bool__55, ___nl__bool__56, ___nl__bool__57, &___nl__im__12));
#line 155
c_rt_lib0clear(&___nl__im__54);
#line 155
//clear ___nl__bool__55;
#line 155
//clear ___nl__bool__56;
#line 155
//clear ___nl__bool__57;
#line 156
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(205)));
#line 156
c_rt_lib0delete(module_checker_priv0check_type(___nl__im__58, &___nl__im__12));
#line 156
c_rt_lib0clear(&___nl__im__58);
#line 157
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(167)));
#line 157
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(916)));
#line 157
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__59, ___nl__im__60, &___nl__im__12));
#line 157
c_rt_lib0clear(&___nl__im__59);
#line 157
c_rt_lib0clear(&___nl__im__60);
#line 157
c_rt_lib0clear(&___nl__im__47);
#line 158
___nl__int__48 = ___nl__int__48 + ___nl__int__49;
#line 158
goto label_6;
#line 158
label_4:
;
#line 159
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(227)));
#line 159
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__61, &___nl__im__12));
#line 159
c_rt_lib0clear(&___nl__im__61);
#line 160
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(265)));
#line 160
___nl__int__64 = 0;
#line 160
___nl__int__65 = 1;
#line 160
___nl__int__66 = c_rt_lib0array_len(___nl__im__62);
#line 160
label_9:
;
#line 160
___nl__int__68 = ___nl__int__64 >= ___nl__int__66;
#line 160
___nl__bool__67 = ___nl__int__68;
#line 160
if(___nl__bool__67){ goto label_7;}
#line 160
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__62, ___nl__int__64));
#line 160
c_rt_lib0copy(&___nl__im__63, ___nl__im__69);
#line 161
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(266)));
#line 161
___nl__bool__70 = c_rt_lib0priv_is(___nl__im__71, ___get_global_const(40));
#line 161
c_rt_lib0clear(&___nl__im__71);
#line 161
___nl__bool__70 = !___nl__bool__70;
#line 161
if(___nl__bool__70){ goto label_11;}
#line 162
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(167)));
#line 162
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_const(917)));
#line 162
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__72, ___nl__im__73, &___nl__im__12));
#line 162
c_rt_lib0clear(&___nl__im__72);
#line 162
c_rt_lib0clear(&___nl__im__73);
#line 163
goto label_10;
#line 163
label_11:
;
#line 163
label_10:
;
#line 163
//clear ___nl__bool__70;
#line 163
c_rt_lib0clear(&___nl__im__63);
#line 164
___nl__int__64 = ___nl__int__64 + ___nl__int__65;
#line 164
goto label_9;
#line 164
label_7:
;
#line 165
c_rt_lib0delete(module_checker_priv0load_block(&___nl__im__12, ___nl__im__45));
#line 166
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(246)));
#line 166
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(216)));
#line 166
___nl__bool__74 = c_rt_lib0check_true_native(___nl__im__76);
#line 166
c_rt_lib0clear(&___nl__im__75);
#line 166
c_rt_lib0clear(&___nl__im__76);
#line 166
___nl__bool__74 = !___nl__bool__74;
#line 166
___nl__bool__74 = !___nl__bool__74;
#line 166
if(___nl__bool__74){ goto label_13;}
#line 168
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(246)));
#line 168
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__79, ___get_global_const(277)));
#line 168
c_rt_lib0clear(&___nl__im__79);
#line 168
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__78, ___get_global_const(219));
#line 168
c_rt_lib0clear(&___nl__im__78);
#line 168
if(___nl__bool__77){ goto label_16;}
#line 168
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(246)));
#line 168
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(277)));
#line 168
c_rt_lib0clear(&___nl__im__81);
#line 168
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__80, ___get_global_const(907));
#line 168
c_rt_lib0clear(&___nl__im__80);
#line 168
label_16:
;
#line 168
___nl__bool__77 = !___nl__bool__77;
#line 168
if(___nl__bool__77){ goto label_15;}
#line 167
c_rt_lib0move(&___nl__im__82,___get_global_const(51));
#line 167
c_rt_lib0move(&___nl__im__82, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__82));
#line 167
c_rt_lib0move(&___nl__im__83,___get_global_const(918));
#line 167
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__82, ___nl__im__83));
#line 167
c_rt_lib0move(&___nl__string__84,___get_global_const(51));
#line 167
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__84, ___nl__im__82));
#line 167
c_rt_lib0clear(&___nl__im__82);
#line 167
c_rt_lib0clear(&___nl__im__83);
#line 167
c_rt_lib0clear(&___nl__string__84);
#line 167
goto label_14;
#line 167
label_15:
;
#line 167
label_14:
;
#line 167
//clear ___nl__bool__77;
#line 169
goto label_12;
#line 169
label_13:
;
#line 169
label_12:
;
#line 169
//clear ___nl__bool__74;
#line 170
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(209)));
#line 170
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__88, ___get_global_const(210));
#line 170
c_rt_lib0clear(&___nl__im__88);
#line 170
if(___nl__bool__87){ goto label_18;}
#line 170
c_rt_lib0move(&___nl__im__86,___get_global_const(37));
#line 170
goto label_17;
#line 170
label_18:
;
#line 170
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 170
label_17:
;
#line 170
//clear ___nl__bool__87;
#line 170
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(167)));
#line 170
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 170
c_rt_lib0move(&___nl__im__85, module_checker_priv0get_fun_key(___nl__im__86, ___nl__im__89, ___nl__im__90));
#line 170
c_rt_lib0clear(&___nl__im__86);
#line 170
c_rt_lib0clear(&___nl__im__89);
#line 170
c_rt_lib0clear(&___nl__im__90);
#line 171
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(911)));
#line 171
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__92, ___get_global_const(237)));
#line 171
c_rt_lib0clear(&___nl__im__92);
#line 171
c_rt_lib0delete(hash0set_value(&___nl__im__21, ___nl__im__85, ___nl__im__91));
#line 171
c_rt_lib0clear(&___nl__im__91);
#line 172
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(911)));
#line 172
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_const(237)));
#line 172
c_rt_lib0clear(&___nl__im__94);
#line 172
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__85, ___nl__im__93));
#line 172
c_rt_lib0clear(&___nl__im__93);
#line 173
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(209)));
#line 173
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__96, ___get_global_const(428));
#line 173
c_rt_lib0clear(&___nl__im__96);
#line 173
___nl__bool__95 = !___nl__bool__95;
#line 173
___nl__bool__95 = !___nl__bool__95;
#line 173
if(___nl__bool__95){ goto label_20;}
#line 173
___nl__int__97 = 0;
#line 173
c_rt_lib0move(&___nl__im__98, c_rt_lib0int_new(___nl__int__97));
#line 173
c_rt_lib0delete(hash0set_value(&___nl__im__22, ___nl__im__85, ___nl__im__98));
#line 173
//clear ___nl__int__97;
#line 173
c_rt_lib0clear(&___nl__im__98);
#line 173
goto label_19;
#line 173
label_20:
;
#line 173
label_19:
;
#line 173
//clear ___nl__bool__95;
#line 174
c_rt_lib0move(&___nl__im__99,___get_global_const(911));
#line 174
c_rt_lib0move(&___nl__im__99, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__99));
#line 174
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_mk(0));
#line 174
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 174
c_rt_lib0hash_set_value_dec(&___nl__im__99, ___get_global_const(237), ___nl__im__100);
#line 174
c_rt_lib0move(&___nl__string__102,___get_global_const(911));
#line 174
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__102, ___nl__im__99));
#line 174
c_rt_lib0clear(&___nl__im__99);
#line 174
c_rt_lib0clear(&___nl__im__100);
#line 174
c_rt_lib0clear(&___nl__im__101);
#line 174
c_rt_lib0clear(&___nl__string__102);
#line 174
c_rt_lib0clear(&___nl__im__24);
#line 175
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 175
goto label_3;
#line 175
label_1:
;
#line 176
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_mk(0));
#line 177
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(172)));
#line 177
___nl__int__106 = 0;
#line 177
___nl__int__107 = 1;
#line 177
___nl__int__108 = c_rt_lib0array_len(___nl__im__104);
#line 177
label_23:
;
#line 177
___nl__int__110 = ___nl__int__106 >= ___nl__int__108;
#line 177
___nl__bool__109 = ___nl__int__110;
#line 177
if(___nl__bool__109){ goto label_21;}
#line 177
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_get(___nl__im__104, ___nl__int__106));
#line 177
c_rt_lib0copy(&___nl__im__105, ___nl__im__111);
#line 178
c_rt_lib0move(&___nl__im__112,___get_global_const(51));
#line 178
c_rt_lib0move(&___nl__im__112, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__112));
#line 178
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(153)));
#line 178
___nl__int__114 = getIntFromImm(___nl__im__115);
#line 178
c_rt_lib0clear(&___nl__im__115);
#line 178
c_rt_lib0move(&___nl__im__113, c_rt_lib0int_new(___nl__int__114));
#line 178
c_rt_lib0hash_set_value_dec(&___nl__im__112, ___get_global_const(915), ___nl__im__113);
#line 178
c_rt_lib0move(&___nl__string__116,___get_global_const(51));
#line 178
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__116, ___nl__im__112));
#line 178
c_rt_lib0clear(&___nl__im__112);
#line 178
c_rt_lib0clear(&___nl__im__113);
#line 178
//clear ___nl__int__114;
#line 178
c_rt_lib0clear(&___nl__string__116);
#line 179
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(167)));
#line 179
___nl__bool__117 = hash0has_key(___nl__im__103, ___nl__im__118);
#line 179
c_rt_lib0clear(&___nl__im__118);
#line 179
___nl__bool__117 = !___nl__bool__117;
#line 179
if(___nl__bool__117){ goto label_25;}
#line 179
c_rt_lib0move(&___nl__im__119,___get_global_const(51));
#line 179
c_rt_lib0move(&___nl__im__119, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__119));
#line 179
c_rt_lib0move(&___nl__im__121,___get_global_const(919));
#line 179
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(167)));
#line 179
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__122));
#line 179
c_rt_lib0clear(&___nl__im__121);
#line 179
c_rt_lib0clear(&___nl__im__122);
#line 179
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__119, ___nl__im__120));
#line 179
c_rt_lib0move(&___nl__string__123,___get_global_const(51));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__123, ___nl__im__119));
#line 179
c_rt_lib0clear(&___nl__im__119);
#line 179
c_rt_lib0clear(&___nl__im__120);
#line 179
c_rt_lib0clear(&___nl__string__123);
#line 179
goto label_24;
#line 179
label_25:
;
#line 179
label_24:
;
#line 179
//clear ___nl__bool__117;
#line 181
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(911)));
#line 181
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_const(151)));
#line 181
c_rt_lib0clear(&___nl__im__126);
#line 181
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(167)));
#line 181
___nl__bool__124 = hash0has_key(___nl__im__125, ___nl__im__127);
#line 181
c_rt_lib0clear(&___nl__im__125);
#line 181
c_rt_lib0clear(&___nl__im__127);
#line 181
___nl__bool__124 = !___nl__bool__124;
#line 181
___nl__bool__124 = !___nl__bool__124;
#line 181
if(___nl__bool__124){ goto label_27;}
#line 180
c_rt_lib0move(&___nl__im__128,___get_global_const(51));
#line 180
c_rt_lib0move(&___nl__im__128, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__128));
#line 180
c_rt_lib0move(&___nl__im__130,___get_global_const(920));
#line 180
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(167)));
#line 180
c_rt_lib0move(&___nl__im__129, c_rt_lib0concat_new(___nl__im__130, ___nl__im__131));
#line 180
c_rt_lib0clear(&___nl__im__130);
#line 180
c_rt_lib0clear(&___nl__im__131);
#line 180
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__128, ___nl__im__129));
#line 180
c_rt_lib0move(&___nl__string__132,___get_global_const(51));
#line 180
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__132, ___nl__im__128));
#line 180
c_rt_lib0clear(&___nl__im__128);
#line 180
c_rt_lib0clear(&___nl__im__129);
#line 180
c_rt_lib0clear(&___nl__string__132);
#line 180
goto label_26;
#line 180
label_27:
;
#line 180
label_26:
;
#line 180
//clear ___nl__bool__124;
#line 182
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(167)));
#line 182
___nl__bool__134 = true;
#line 182
c_rt_lib0move(&___nl__im__135, c_rt_lib0bool_to_nl_native(___nl__bool__134));
#line 182
c_rt_lib0delete(hash0set_value(&___nl__im__103, ___nl__im__133, ___nl__im__135));
#line 182
c_rt_lib0clear(&___nl__im__133);
#line 182
//clear ___nl__bool__134;
#line 182
c_rt_lib0clear(&___nl__im__135);
#line 182
c_rt_lib0clear(&___nl__im__105);
#line 183
___nl__int__106 = ___nl__int__106 + ___nl__int__107;
#line 183
goto label_23;
#line 183
label_21:
;
#line 184
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(911)));
#line 184
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_const(151)));
#line 184
c_rt_lib0clear(&___nl__im__137);
#line 184
c_rt_lib0move(&___nl__im__141, c_rt_lib0init_iter(___nl__im__136));
#line 184
label_30:
;
#line 184
___nl__bool__139 = c_rt_lib0is_end_hash(___nl__im__141);
#line 184
if(___nl__bool__139){ goto label_28;}
#line 184
c_rt_lib0move(&___nl__im__138, c_rt_lib0get_key_iter(___nl__im__141));
#line 184
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value(___nl__im__136, ___nl__im__138));
#line 184
___nl__int__140 = getIntFromImm(___nl__im__142);
#line 185
c_rt_lib0move(&___nl__im__143,___get_global_const(51));
#line 185
c_rt_lib0move(&___nl__im__143, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__143));
#line 185
c_rt_lib0move(&___nl__im__144, c_rt_lib0int_new(___nl__int__140));
#line 185
c_rt_lib0hash_set_value_dec(&___nl__im__143, ___get_global_const(915), ___nl__im__144);
#line 185
c_rt_lib0move(&___nl__string__145,___get_global_const(51));
#line 185
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__145, ___nl__im__143));
#line 185
c_rt_lib0clear(&___nl__im__143);
#line 185
c_rt_lib0clear(&___nl__im__144);
#line 185
c_rt_lib0clear(&___nl__string__145);
#line 186
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 186
___nl__bool__146 = c_rt_lib0eq(___nl__im__147, ___nl__im__138);
#line 186
c_rt_lib0clear(&___nl__im__147);
#line 186
___nl__bool__146 = !___nl__bool__146;
#line 186
if(___nl__bool__146){ goto label_32;}
#line 186
goto label_29;
#line 186
goto label_31;
#line 186
label_32:
;
#line 186
label_31:
;
#line 186
//clear ___nl__bool__146;
#line 187
___nl__bool__148 = hash0has_key(___nl__im__103, ___nl__im__138);
#line 187
___nl__bool__148 = !___nl__bool__148;
#line 187
___nl__bool__148 = !___nl__bool__148;
#line 187
if(___nl__bool__148){ goto label_34;}
#line 187
c_rt_lib0move(&___nl__im__149,___get_global_const(51));
#line 187
c_rt_lib0move(&___nl__im__149, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__149));
#line 187
c_rt_lib0move(&___nl__im__152,___get_global_const(921));
#line 187
c_rt_lib0move(&___nl__im__151, c_rt_lib0concat_new(___nl__im__152, ___nl__im__138));
#line 187
c_rt_lib0clear(&___nl__im__152);
#line 187
c_rt_lib0move(&___nl__im__153,___get_global_const(922));
#line 187
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__153));
#line 187
c_rt_lib0clear(&___nl__im__151);
#line 187
c_rt_lib0clear(&___nl__im__153);
#line 187
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__149, ___nl__im__150));
#line 187
c_rt_lib0move(&___nl__string__154,___get_global_const(51));
#line 187
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__154, ___nl__im__149));
#line 187
c_rt_lib0clear(&___nl__im__149);
#line 187
c_rt_lib0clear(&___nl__im__150);
#line 187
c_rt_lib0clear(&___nl__string__154);
#line 187
goto label_33;
#line 187
label_34:
;
#line 187
label_33:
;
#line 187
//clear ___nl__bool__148;
#line 187
label_29:
;
#line 188
c_rt_lib0move(&___nl__im__141, c_rt_lib0next_iter(___nl__im__141));
#line 188
goto label_30;
#line 188
label_28:
;
#line 189
___nl__bool__155 = c_rt_lib0check_true_native(___nl__im__1);
#line 189
___nl__bool__155 = !___nl__bool__155;
#line 189
___nl__bool__155 = !___nl__bool__155;
#line 189
if(___nl__bool__155){ goto label_36;}
#line 190
c_rt_lib0copy(&___nl__im__156, ___nl__im__22);
#line 191
c_rt_lib0move(&___nl__im__160, c_rt_lib0init_iter(___nl__im__156));
#line 191
label_39:
;
#line 191
___nl__bool__158 = c_rt_lib0is_end_hash(___nl__im__160);
#line 191
if(___nl__bool__158){ goto label_37;}
#line 191
c_rt_lib0move(&___nl__im__157, c_rt_lib0get_key_iter(___nl__im__160));
#line 191
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value(___nl__im__156, ___nl__im__157));
#line 191
___nl__int__159 = getIntFromImm(___nl__im__161);
#line 192
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__im__157, ___nl__im__21, &___nl__im__22));
#line 193
c_rt_lib0move(&___nl__im__160, c_rt_lib0next_iter(___nl__im__160));
#line 193
goto label_39;
#line 193
label_37:
;
#line 194
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(165)));
#line 194
___nl__int__164 = 0;
#line 194
___nl__int__165 = 1;
#line 194
___nl__int__166 = c_rt_lib0array_len(___nl__im__162);
#line 194
label_42:
;
#line 194
___nl__int__168 = ___nl__int__164 >= ___nl__int__166;
#line 194
___nl__bool__167 = ___nl__int__168;
#line 194
if(___nl__bool__167){ goto label_40;}
#line 194
c_rt_lib0move(&___nl__im__169, c_rt_lib0array_get(___nl__im__162, ___nl__int__164));
#line 194
c_rt_lib0copy(&___nl__im__163, ___nl__im__169);
#line 195
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(209)));
#line 195
___nl__bool__170 = c_rt_lib0priv_is(___nl__im__171, ___get_global_const(210));
#line 195
c_rt_lib0clear(&___nl__im__171);
#line 195
___nl__bool__170 = !___nl__bool__170;
#line 195
if(___nl__bool__170){ goto label_44;}
#line 195
goto label_41;
#line 195
goto label_43;
#line 195
label_44:
;
#line 195
label_43:
;
#line 195
//clear ___nl__bool__170;
#line 196
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(209)));
#line 196
___nl__bool__175 = c_rt_lib0priv_is(___nl__im__176, ___get_global_const(210));
#line 196
c_rt_lib0clear(&___nl__im__176);
#line 196
if(___nl__bool__175){ goto label_48;}
#line 196
c_rt_lib0move(&___nl__im__174,___get_global_const(37));
#line 196
goto label_47;
#line 196
label_48:
;
#line 196
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 196
label_47:
;
#line 196
//clear ___nl__bool__175;
#line 196
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(167)));
#line 196
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 196
c_rt_lib0move(&___nl__im__173, module_checker_priv0get_fun_key(___nl__im__174, ___nl__im__177, ___nl__im__178));
#line 196
c_rt_lib0clear(&___nl__im__174);
#line 196
c_rt_lib0clear(&___nl__im__177);
#line 196
c_rt_lib0clear(&___nl__im__178);
#line 196
___nl__bool__172 = hash0has_key(___nl__im__22, ___nl__im__173);
#line 196
c_rt_lib0clear(&___nl__im__173);
#line 196
___nl__bool__172 = !___nl__bool__172;
#line 196
if(___nl__bool__172){ goto label_46;}
#line 196
goto label_41;
#line 196
goto label_45;
#line 196
label_46:
;
#line 196
label_45:
;
#line 196
//clear ___nl__bool__172;
#line 197
c_rt_lib0move(&___nl__im__179,___get_global_const(51));
#line 197
c_rt_lib0move(&___nl__im__179, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__179));
#line 197
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(153)));
#line 197
___nl__int__181 = getIntFromImm(___nl__im__182);
#line 197
c_rt_lib0clear(&___nl__im__182);
#line 197
c_rt_lib0move(&___nl__im__180, c_rt_lib0int_new(___nl__int__181));
#line 197
c_rt_lib0hash_set_value_dec(&___nl__im__179, ___get_global_const(915), ___nl__im__180);
#line 197
c_rt_lib0move(&___nl__string__183,___get_global_const(51));
#line 197
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__183, ___nl__im__179));
#line 197
c_rt_lib0clear(&___nl__im__179);
#line 197
c_rt_lib0clear(&___nl__im__180);
#line 197
//clear ___nl__int__181;
#line 197
c_rt_lib0clear(&___nl__string__183);
#line 198
c_rt_lib0move(&___nl__im__184,___get_global_const(51));
#line 198
c_rt_lib0move(&___nl__im__184, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__184));
#line 198
c_rt_lib0move(&___nl__im__188,___get_global_const(923));
#line 198
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 198
c_rt_lib0move(&___nl__im__187, c_rt_lib0concat_new(___nl__im__188, ___nl__im__189));
#line 198
c_rt_lib0clear(&___nl__im__188);
#line 198
c_rt_lib0clear(&___nl__im__189);
#line 198
c_rt_lib0move(&___nl__im__190,___get_global_const(211));
#line 198
c_rt_lib0move(&___nl__im__186, c_rt_lib0concat_new(___nl__im__187, ___nl__im__190));
#line 198
c_rt_lib0clear(&___nl__im__187);
#line 198
c_rt_lib0clear(&___nl__im__190);
#line 198
c_rt_lib0move(&___nl__im__191, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(167)));
#line 198
c_rt_lib0move(&___nl__im__185, c_rt_lib0concat_new(___nl__im__186, ___nl__im__191));
#line 198
c_rt_lib0clear(&___nl__im__186);
#line 198
c_rt_lib0clear(&___nl__im__191);
#line 198
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__184, ___nl__im__185));
#line 198
c_rt_lib0move(&___nl__string__192,___get_global_const(51));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__192, ___nl__im__184));
#line 198
c_rt_lib0clear(&___nl__im__184);
#line 198
c_rt_lib0clear(&___nl__im__185);
#line 198
c_rt_lib0clear(&___nl__string__192);
#line 198
c_rt_lib0clear(&___nl__im__163);
#line 198
label_41:
;
#line 199
___nl__int__164 = ___nl__int__164 + ___nl__int__165;
#line 199
goto label_42;
#line 199
label_40:
;
#line 200
goto label_35;
#line 200
label_36:
;
#line 200
label_35:
;
#line 200
//clear ___nl__bool__155;
#line 200
c_rt_lib0clear(&___nl__im__156);
#line 200
c_rt_lib0clear(&___nl__im__157);
#line 200
//clear ___nl__bool__158;
#line 200
//clear ___nl__int__159;
#line 200
c_rt_lib0clear(&___nl__im__160);
#line 200
c_rt_lib0clear(&___nl__im__161);
#line 200
c_rt_lib0clear(&___nl__im__162);
#line 200
c_rt_lib0clear(&___nl__im__163);
#line 200
//clear ___nl__int__164;
#line 200
//clear ___nl__int__165;
#line 200
//clear ___nl__int__166;
#line 200
//clear ___nl__bool__167;
#line 200
//clear ___nl__int__168;
#line 200
c_rt_lib0clear(&___nl__im__169);
#line 201
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(51)));
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
//clear ___nl__int__29;
#line 201
c_rt_lib0clear(&___nl__im__30);
#line 201
c_rt_lib0clear(&___nl__im__45);
#line 201
c_rt_lib0clear(&___nl__im__46);
#line 201
c_rt_lib0clear(&___nl__im__47);
#line 201
//clear ___nl__int__48;
#line 201
//clear ___nl__int__49;
#line 201
//clear ___nl__int__50;
#line 201
//clear ___nl__bool__51;
#line 201
//clear ___nl__int__52;
#line 201
c_rt_lib0clear(&___nl__im__53);
#line 201
c_rt_lib0clear(&___nl__im__62);
#line 201
c_rt_lib0clear(&___nl__im__63);
#line 201
//clear ___nl__int__64;
#line 201
//clear ___nl__int__65;
#line 201
//clear ___nl__int__66;
#line 201
//clear ___nl__bool__67;
#line 201
//clear ___nl__int__68;
#line 201
c_rt_lib0clear(&___nl__im__69);
#line 201
c_rt_lib0clear(&___nl__im__85);
#line 201
c_rt_lib0clear(&___nl__im__103);
#line 201
c_rt_lib0clear(&___nl__im__104);
#line 201
c_rt_lib0clear(&___nl__im__105);
#line 201
//clear ___nl__int__106;
#line 201
//clear ___nl__int__107;
#line 201
//clear ___nl__int__108;
#line 201
//clear ___nl__bool__109;
#line 201
//clear ___nl__int__110;
#line 201
c_rt_lib0clear(&___nl__im__111);
#line 201
c_rt_lib0clear(&___nl__im__136);
#line 201
c_rt_lib0clear(&___nl__im__138);
#line 201
//clear ___nl__bool__139;
#line 201
//clear ___nl__int__140;
#line 201
c_rt_lib0clear(&___nl__im__141);
#line 201
c_rt_lib0clear(&___nl__im__142);
#line 201
return ___nl__im__193;
return NULL;
}

ImmT  module_checker0check_used_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "module_checker0check_used_functions");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
tc_types0return_t0type *var3 = &(_tab[3]);
return module_checker0check_used_functions(*var0, *var1, *var2, var3);
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
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
bool  ___nl__bool__33 = false;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__string__54 = NULL;
#line 205
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 206
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__4));
#line 206
label_3:
;
#line 206
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 206
if(___nl__bool__6){ goto label_1;}
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
if(___nl__bool__10){ goto label_5;}
#line 208
c_rt_lib0move(&___nl__im__11,___get_global_const(124));
#line 208
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__3), ___nl__im__11));
#line 208
c_rt_lib0move(&___nl__im__13,___get_global_const(924));
#line 208
___nl__int__14 = 0;
#line 208
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 208
___nl__int__16 = 0;
#line 208
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 208
c_rt_lib0move(&___nl__im__18,___get_global_const(169));
#line 208
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(202)));
#line 208
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(5, ___get_global_const(156), ___nl__im__13, ___get_global_const(153), ___nl__im__15, ___get_global_const(204), ___nl__im__17, ___get_global_const(151), ___nl__im__18, ___get_global_const(205), ___nl__im__19));
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
c_rt_lib0move(&___nl__string__20,___get_global_const(124));
#line 208
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__3, ___nl__string__20, ___nl__im__11));
#line 208
c_rt_lib0clear(&___nl__im__11);
#line 208
c_rt_lib0clear(&___nl__im__12);
#line 208
c_rt_lib0clear(&___nl__string__20);
#line 209
goto label_2;
#line 210
goto label_4;
#line 210
label_5:
;
#line 210
label_4:
;
#line 210
//clear ___nl__bool__10;
#line 211
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__im__5, ___nl__im__1, &___nl__im__0));
#line 211
label_2:
;
#line 212
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 212
goto label_3;
#line 212
label_1:
;
#line 213
___nl__int__22 = 0;
#line 213
___nl__int__23 = 1;
#line 213
___nl__int__24 = c_rt_lib0array_len(___nl__im__2);
#line 213
label_8:
;
#line 213
___nl__int__26 = ___nl__int__22 >= ___nl__int__24;
#line 213
___nl__bool__25 = ___nl__int__26;
#line 213
if(___nl__bool__25){ goto label_6;}
#line 213
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__2, ___nl__int__22));
#line 213
c_rt_lib0copy(&___nl__im__21, ___nl__im__27);
#line 214
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(165)));
#line 214
___nl__int__30 = 0;
#line 214
___nl__int__31 = 1;
#line 214
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 214
label_11:
;
#line 214
___nl__int__34 = ___nl__int__30 >= ___nl__int__32;
#line 214
___nl__bool__33 = ___nl__int__34;
#line 214
if(___nl__bool__33){ goto label_9;}
#line 214
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 214
c_rt_lib0copy(&___nl__im__29, ___nl__im__35);
#line 215
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(209)));
#line 215
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(210));
#line 215
c_rt_lib0clear(&___nl__im__39);
#line 215
if(___nl__bool__38){ goto label_13;}
#line 215
c_rt_lib0move(&___nl__im__37,___get_global_const(37));
#line 215
goto label_12;
#line 215
label_13:
;
#line 215
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(167)));
#line 215
label_12:
;
#line 215
//clear ___nl__bool__38;
#line 215
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(167)));
#line 215
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(167)));
#line 215
c_rt_lib0move(&___nl__im__36, module_checker_priv0get_fun_key(___nl__im__37, ___nl__im__40, ___nl__im__41));
#line 215
c_rt_lib0clear(&___nl__im__37);
#line 215
c_rt_lib0clear(&___nl__im__40);
#line 215
c_rt_lib0clear(&___nl__im__41);
#line 216
___nl__bool__42 = hash0has_key(___nl__im__0, ___nl__im__36);
#line 216
___nl__bool__42 = !___nl__bool__42;
#line 216
if(___nl__bool__42){ goto label_15;}
#line 216
goto label_10;
#line 216
goto label_14;
#line 216
label_15:
;
#line 216
label_14:
;
#line 216
//clear ___nl__bool__42;
#line 217
c_rt_lib0move(&___nl__im__43,___get_global_const(124));
#line 217
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash((*___ref___im__3), ___nl__im__43));
#line 217
c_rt_lib0move(&___nl__im__46,___get_global_const(923));
#line 217
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__36));
#line 217
c_rt_lib0clear(&___nl__im__46);
#line 217
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(153)));
#line 217
___nl__int__47 = getIntFromImm(___nl__im__48);
#line 217
c_rt_lib0clear(&___nl__im__48);
#line 217
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__47));
#line 217
___nl__int__50 = 0;
#line 217
c_rt_lib0move(&___nl__im__51, c_rt_lib0int_new(___nl__int__50));
#line 217
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(167)));
#line 217
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_none(___get_global_const(202)));
#line 217
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(5, ___get_global_const(156), ___nl__im__45, ___get_global_const(153), ___nl__im__49, ___get_global_const(204), ___nl__im__51, ___get_global_const(151), ___nl__im__52, ___get_global_const(205), ___nl__im__53));
#line 217
c_rt_lib0clear(&___nl__im__45);
#line 217
//clear ___nl__int__47;
#line 217
c_rt_lib0clear(&___nl__im__49);
#line 217
//clear ___nl__int__50;
#line 217
c_rt_lib0clear(&___nl__im__51);
#line 217
c_rt_lib0clear(&___nl__im__52);
#line 217
c_rt_lib0clear(&___nl__im__53);
#line 217
c_rt_lib0delete(array0push(&___nl__im__43, ___nl__im__44));
#line 217
c_rt_lib0move(&___nl__string__54,___get_global_const(124));
#line 217
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__3, ___nl__string__54, ___nl__im__43));
#line 217
c_rt_lib0clear(&___nl__im__43);
#line 217
c_rt_lib0clear(&___nl__im__44);
#line 217
c_rt_lib0clear(&___nl__string__54);
#line 217
c_rt_lib0clear(&___nl__im__29);
#line 217
label_10:
;
#line 218
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 218
goto label_11;
#line 218
label_9:
;
#line 218
c_rt_lib0clear(&___nl__im__21);
#line 219
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 219
goto label_8;
#line 219
label_6:
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
//clear ___nl__int__26;
#line 219
c_rt_lib0clear(&___nl__im__27);
#line 219
c_rt_lib0clear(&___nl__im__28);
#line 219
c_rt_lib0clear(&___nl__im__29);
#line 219
//clear ___nl__int__30;
#line 219
//clear ___nl__int__31;
#line 219
//clear ___nl__int__32;
#line 219
//clear ___nl__bool__33;
#line 219
//clear ___nl__int__34;
#line 219
c_rt_lib0clear(&___nl__im__35);
#line 219
c_rt_lib0clear(&___nl__im__36);
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
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__string__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
#line 223
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 223
if(___nl__bool__2){ goto label_2;}
#line 224
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 224
if(___nl__bool__2){ goto label_3;}
#line 226
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 226
if(___nl__bool__2){ goto label_4;}
#line 228
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 228
if(___nl__bool__2){ goto label_5;}
#line 230
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 230
if(___nl__bool__2){ goto label_6;}
#line 232
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 232
if(___nl__bool__2){ goto label_7;}
#line 236
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 236
if(___nl__bool__2){ goto label_8;}
#line 240
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 240
if(___nl__bool__2){ goto label_9;}
#line 249
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 249
if(___nl__bool__2){ goto label_10;}
#line 250
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 250
if(___nl__bool__2){ goto label_11;}
#line 251
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 251
if(___nl__bool__2){ goto label_12;}
#line 252
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 252
if(___nl__bool__2){ goto label_13;}
#line 253
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 253
if(___nl__bool__2){ goto label_14;}
#line 254
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 254
if(___nl__bool__2){ goto label_15;}
#line 261
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 261
if(___nl__bool__2){ goto label_16;}
#line 268
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 268
if(___nl__bool__2){ goto label_17;}
#line 268
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 268
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 268
nl_die_arg(___nl__im__3);
#line 223
label_2:
;
#line 224
goto label_1;
#line 224
label_3:
;
#line 224
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 224
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 225
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__4, ___ref___im__1));
#line 226
goto label_1;
#line 226
label_4:
;
#line 226
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 226
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 227
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__6, ___ref___im__1));
#line 228
goto label_1;
#line 228
label_5:
;
#line 228
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 228
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 229
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__8, ___ref___im__1));
#line 230
goto label_1;
#line 230
label_6:
;
#line 230
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 230
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 231
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__10, ___ref___im__1));
#line 232
goto label_1;
#line 232
label_7:
;
#line 232
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 232
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 233
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__12));
#line 233
label_20:
;
#line 233
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 233
if(___nl__bool__15){ goto label_18;}
#line 233
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 233
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__12, ___nl__im__14));
#line 234
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__16, ___ref___im__1));
#line 235
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 235
goto label_20;
#line 235
label_18:
;
#line 236
goto label_1;
#line 236
label_8:
;
#line 236
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 236
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 237
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter(___nl__im__18));
#line 237
label_23:
;
#line 237
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 237
if(___nl__bool__21){ goto label_21;}
#line 237
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 237
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value(___nl__im__18, ___nl__im__20));
#line 238
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__22, ___ref___im__1));
#line 239
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 239
goto label_23;
#line 239
label_21:
;
#line 240
goto label_1;
#line 240
label_9:
;
#line 240
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 240
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 241
c_rt_lib0move(&___nl__im__27,___get_global_const(35));
#line 241
c_rt_lib0move(&___nl__im__26, string0index2(___nl__im__24, ___nl__im__27));
#line 241
c_rt_lib0clear(&___nl__im__27);
#line 242
___nl__int__29 = 0;
#line 242
___nl__int__30 = getIntFromImm(___nl__im__26);
#line 242
___nl__int__31 = ___nl__int__30 >= ___nl__int__29;
#line 242
___nl__bool__28 = ___nl__int__31;
#line 242
//clear ___nl__int__29;
#line 242
//clear ___nl__int__30;
#line 242
//clear ___nl__int__31;
#line 242
___nl__bool__28 = !___nl__bool__28;
#line 242
if(___nl__bool__28){ goto label_25;}
#line 243
___nl__int__33 = 0;
#line 243
___nl__int__34 = getIntFromImm(___nl__im__26);
#line 243
c_rt_lib0move(&___nl__im__32, string0substr(___nl__im__24, ___nl__int__33, ___nl__int__34));
#line 243
//clear ___nl__int__33;
#line 243
//clear ___nl__int__34;
#line 244
___nl__int__37 = 2;
#line 244
___nl__int__38 = getIntFromImm(___nl__im__26);
#line 244
___nl__int__36 = ___nl__int__38 + ___nl__int__37;
#line 244
//clear ___nl__int__37;
#line 244
//clear ___nl__int__38;
#line 244
___nl__int__41 = string0length(___nl__im__24);
#line 244
___nl__int__42 = getIntFromImm(___nl__im__26);
#line 244
___nl__int__40 = ___nl__int__41 - ___nl__int__42;
#line 244
//clear ___nl__int__41;
#line 244
//clear ___nl__int__42;
#line 244
___nl__int__43 = 2;
#line 244
___nl__int__39 = ___nl__int__40 - ___nl__int__43;
#line 244
//clear ___nl__int__40;
#line 244
//clear ___nl__int__43;
#line 244
c_rt_lib0move(&___nl__im__35, string0substr(___nl__im__24, ___nl__int__36, ___nl__int__39));
#line 244
//clear ___nl__int__36;
#line 244
//clear ___nl__int__39;
#line 245
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__32, ___nl__im__35, ___ref___im__1));
#line 246
goto label_24;
#line 246
label_25:
;
#line 247
c_rt_lib0move(&___nl__im__44,___get_global_const(51));
#line 247
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__44));
#line 247
c_rt_lib0move(&___nl__im__47,___get_global_const(925));
#line 247
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__24));
#line 247
c_rt_lib0clear(&___nl__im__47);
#line 247
c_rt_lib0move(&___nl__im__48,___get_global_const(926));
#line 247
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__48));
#line 247
c_rt_lib0clear(&___nl__im__46);
#line 247
c_rt_lib0clear(&___nl__im__48);
#line 247
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__44, ___nl__im__45));
#line 247
c_rt_lib0move(&___nl__string__49,___get_global_const(51));
#line 247
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__49, ___nl__im__44));
#line 247
c_rt_lib0clear(&___nl__im__44);
#line 247
c_rt_lib0clear(&___nl__im__45);
#line 247
c_rt_lib0clear(&___nl__string__49);
#line 248
goto label_24;
#line 248
label_24:
;
#line 248
//clear ___nl__bool__28;
#line 248
c_rt_lib0clear(&___nl__im__32);
#line 248
c_rt_lib0clear(&___nl__im__35);
#line 249
goto label_1;
#line 249
label_10:
;
#line 250
goto label_1;
#line 250
label_11:
;
#line 251
goto label_1;
#line 251
label_12:
;
#line 252
goto label_1;
#line 252
label_13:
;
#line 253
goto label_1;
#line 253
label_14:
;
#line 254
goto label_1;
#line 254
label_15:
;
#line 254
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 254
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 255
c_rt_lib0move(&___nl__im__55, c_rt_lib0init_iter(___nl__im__50));
#line 255
label_28:
;
#line 255
___nl__bool__53 = c_rt_lib0is_end_hash(___nl__im__55);
#line 255
if(___nl__bool__53){ goto label_26;}
#line 255
c_rt_lib0move(&___nl__im__52, c_rt_lib0get_key_iter(___nl__im__55));
#line 255
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value(___nl__im__50, ___nl__im__52));
#line 256
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(29));
#line 256
if(___nl__bool__56){ goto label_30;}
#line 257
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(28));
#line 257
if(___nl__bool__56){ goto label_31;}
#line 257
c_rt_lib0move(&___nl__im__57,___get_global_const(16));
#line 257
c_rt_lib0move(&___nl__im__57, c_rt_lib0array_mk(2, ___nl__im__57, ___nl__im__54));
#line 257
nl_die_arg(___nl__im__57);
#line 256
label_30:
;
#line 257
goto label_29;
#line 257
label_31:
;
#line 257
c_rt_lib0move(&___nl__im__59, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(28)));
#line 257
c_rt_lib0copy(&___nl__im__58, ___nl__im__59);
#line 258
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__58, ___ref___im__1));
#line 259
goto label_29;
#line 259
label_29:
;
#line 259
//clear ___nl__bool__56;
#line 259
c_rt_lib0clear(&___nl__im__57);
#line 259
c_rt_lib0clear(&___nl__im__58);
#line 259
c_rt_lib0clear(&___nl__im__59);
#line 260
c_rt_lib0move(&___nl__im__55, c_rt_lib0next_iter(___nl__im__55));
#line 260
goto label_28;
#line 260
label_26:
;
#line 261
goto label_1;
#line 261
label_16:
;
#line 261
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 261
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 262
c_rt_lib0move(&___nl__im__65, c_rt_lib0init_iter(___nl__im__60));
#line 262
label_34:
;
#line 262
___nl__bool__63 = c_rt_lib0is_end_hash(___nl__im__65);
#line 262
if(___nl__bool__63){ goto label_32;}
#line 262
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_key_iter(___nl__im__65));
#line 262
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__60, ___nl__im__62));
#line 263
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_const(29));
#line 263
if(___nl__bool__66){ goto label_36;}
#line 264
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_const(28));
#line 264
if(___nl__bool__66){ goto label_37;}
#line 264
c_rt_lib0move(&___nl__im__67,___get_global_const(16));
#line 264
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(2, ___nl__im__67, ___nl__im__64));
#line 264
nl_die_arg(___nl__im__67);
#line 263
label_36:
;
#line 264
goto label_35;
#line 264
label_37:
;
#line 264
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__64, ___get_global_const(28)));
#line 264
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 265
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__68, ___ref___im__1));
#line 266
goto label_35;
#line 266
label_35:
;
#line 266
//clear ___nl__bool__66;
#line 266
c_rt_lib0clear(&___nl__im__67);
#line 266
c_rt_lib0clear(&___nl__im__68);
#line 266
c_rt_lib0clear(&___nl__im__69);
#line 267
c_rt_lib0move(&___nl__im__65, c_rt_lib0next_iter(___nl__im__65));
#line 267
goto label_34;
#line 267
label_32:
;
#line 268
goto label_1;
#line 268
label_17:
;
#line 269
goto label_1;
#line 269
label_1:
;
#line 269
c_rt_lib0clear(&___nl__im__0);
#line 269
//clear ___nl__bool__2;
#line 269
c_rt_lib0clear(&___nl__im__3);
#line 269
c_rt_lib0clear(&___nl__im__4);
#line 269
c_rt_lib0clear(&___nl__im__5);
#line 269
c_rt_lib0clear(&___nl__im__6);
#line 269
c_rt_lib0clear(&___nl__im__7);
#line 269
c_rt_lib0clear(&___nl__im__8);
#line 269
c_rt_lib0clear(&___nl__im__9);
#line 269
c_rt_lib0clear(&___nl__im__10);
#line 269
c_rt_lib0clear(&___nl__im__11);
#line 269
c_rt_lib0clear(&___nl__im__12);
#line 269
c_rt_lib0clear(&___nl__im__13);
#line 269
c_rt_lib0clear(&___nl__im__14);
#line 269
//clear ___nl__bool__15;
#line 269
c_rt_lib0clear(&___nl__im__16);
#line 269
c_rt_lib0clear(&___nl__im__17);
#line 269
c_rt_lib0clear(&___nl__im__18);
#line 269
c_rt_lib0clear(&___nl__im__19);
#line 269
c_rt_lib0clear(&___nl__im__20);
#line 269
//clear ___nl__bool__21;
#line 269
c_rt_lib0clear(&___nl__im__22);
#line 269
c_rt_lib0clear(&___nl__im__23);
#line 269
c_rt_lib0clear(&___nl__im__24);
#line 269
c_rt_lib0clear(&___nl__im__25);
#line 269
c_rt_lib0clear(&___nl__im__26);
#line 269
c_rt_lib0clear(&___nl__im__50);
#line 269
c_rt_lib0clear(&___nl__im__51);
#line 269
c_rt_lib0clear(&___nl__im__52);
#line 269
//clear ___nl__bool__53;
#line 269
c_rt_lib0clear(&___nl__im__54);
#line 269
c_rt_lib0clear(&___nl__im__55);
#line 269
//clear ___nl__bool__56;
#line 269
c_rt_lib0clear(&___nl__im__57);
#line 269
c_rt_lib0clear(&___nl__im__58);
#line 269
c_rt_lib0clear(&___nl__im__59);
#line 269
c_rt_lib0clear(&___nl__im__60);
#line 269
c_rt_lib0clear(&___nl__im__61);
#line 269
c_rt_lib0clear(&___nl__im__62);
#line 269
//clear ___nl__bool__63;
#line 269
c_rt_lib0clear(&___nl__im__64);
#line 269
c_rt_lib0clear(&___nl__im__65);
#line 269
//clear ___nl__bool__66;
#line 269
c_rt_lib0clear(&___nl__im__67);
#line 269
c_rt_lib0clear(&___nl__im__68);
#line 269
c_rt_lib0clear(&___nl__im__69);
#line 269
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
#line 273
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 273
___nl__bool__3 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 273
c_rt_lib0clear(&___nl__im__4);
#line 273
___nl__bool__3 = !___nl__bool__3;
#line 273
___nl__bool__3 = !___nl__bool__3;
#line 273
if(___nl__bool__3){ goto label_2;}
#line 273
c_rt_lib0move(&___nl__im__7,___get_global_const(35));
#line 273
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__0, ___nl__im__7));
#line 273
c_rt_lib0clear(&___nl__im__7);
#line 273
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 273
c_rt_lib0clear(&___nl__im__6);
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
c_rt_lib0clear(&___nl__im__2);
#line 273
//clear ___nl__bool__3;
#line 273
return ___nl__im__5;
#line 273
goto label_1;
#line 273
label_2:
;
#line 273
label_1:
;
#line 273
//clear ___nl__bool__3;
#line 273
c_rt_lib0clear(&___nl__im__5);
#line 274
c_rt_lib0move(&___nl__im__11,___get_global_const(927));
#line 274
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__2));
#line 274
c_rt_lib0clear(&___nl__im__11);
#line 274
c_rt_lib0move(&___nl__im__12,___get_global_const(35));
#line 274
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 274
c_rt_lib0clear(&___nl__im__10);
#line 274
c_rt_lib0clear(&___nl__im__12);
#line 274
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 274
c_rt_lib0clear(&___nl__im__9);
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
c_rt_lib0clear(&___nl__im__1);
#line 274
c_rt_lib0clear(&___nl__im__2);
#line 274
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
#line 278
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(912)));
#line 278
c_rt_lib0move(&___nl__im__3, module_checker_priv0get_fun_key(___nl__im__0, ___nl__im__1, ___nl__im__4));
#line 278
c_rt_lib0clear(&___nl__im__4);
#line 279
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(911)));
#line 279
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(237)));
#line 279
c_rt_lib0clear(&___nl__im__7);
#line 279
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__3);
#line 279
c_rt_lib0clear(&___nl__im__6);
#line 279
___nl__bool__5 = !___nl__bool__5;
#line 279
if(___nl__bool__5){ goto label_2;}
#line 279
c_rt_lib0clear(&___nl__im__0);
#line 279
c_rt_lib0clear(&___nl__im__1);
#line 279
c_rt_lib0clear(&___nl__im__3);
#line 279
//clear ___nl__bool__5;
#line 279
return NULL;
#line 279
goto label_1;
#line 279
label_2:
;
#line 279
label_1:
;
#line 279
//clear ___nl__bool__5;
#line 280
c_rt_lib0move(&___nl__im__8,___get_global_const(911));
#line 280
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__8));
#line 280
c_rt_lib0move(&___nl__im__9,___get_global_const(237));
#line 280
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash(___nl__im__8, ___nl__im__9));
#line 280
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(51)));
#line 280
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(915)));
#line 280
___nl__int__10 = getIntFromImm(___nl__im__12);
#line 280
c_rt_lib0clear(&___nl__im__11);
#line 280
c_rt_lib0clear(&___nl__im__12);
#line 280
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__10));
#line 280
c_rt_lib0delete(hash0set_value(&___nl__im__9, ___nl__im__3, ___nl__im__13));
#line 280
c_rt_lib0move(&___nl__string__14,___get_global_const(237));
#line 280
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__8, ___nl__string__14, ___nl__im__9));
#line 280
c_rt_lib0move(&___nl__string__14,___get_global_const(911));
#line 280
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__14, ___nl__im__8));
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
//clear ___nl__int__10;
#line 280
c_rt_lib0clear(&___nl__im__13);
#line 280
c_rt_lib0clear(&___nl__string__14);
#line 281
c_rt_lib0move(&___nl__im__16,___get_global_const(37));
#line 281
___nl__bool__15 = c_rt_lib0eq(___nl__im__0, ___nl__im__16);
#line 281
c_rt_lib0clear(&___nl__im__16);
#line 281
if(___nl__bool__15){ goto label_5;}
#line 281
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(911)));
#line 281
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(151)));
#line 281
c_rt_lib0clear(&___nl__im__18);
#line 281
___nl__bool__15 = hash0has_key(___nl__im__17, ___nl__im__0);
#line 281
c_rt_lib0clear(&___nl__im__17);
#line 281
label_5:
;
#line 281
___nl__bool__15 = !___nl__bool__15;
#line 281
if(___nl__bool__15){ goto label_4;}
#line 281
c_rt_lib0clear(&___nl__im__0);
#line 281
c_rt_lib0clear(&___nl__im__1);
#line 281
c_rt_lib0clear(&___nl__im__3);
#line 281
//clear ___nl__bool__15;
#line 281
return NULL;
#line 281
goto label_3;
#line 281
label_4:
;
#line 281
label_3:
;
#line 281
//clear ___nl__bool__15;
#line 282
c_rt_lib0move(&___nl__im__19,___get_global_const(911));
#line 282
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__19));
#line 282
c_rt_lib0move(&___nl__im__20,___get_global_const(151));
#line 282
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 282
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(51)));
#line 282
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(915)));
#line 282
___nl__int__21 = getIntFromImm(___nl__im__23);
#line 282
c_rt_lib0clear(&___nl__im__22);
#line 282
c_rt_lib0clear(&___nl__im__23);
#line 282
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__21));
#line 282
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__24));
#line 282
c_rt_lib0move(&___nl__string__25,___get_global_const(151));
#line 282
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__25, ___nl__im__20));
#line 282
c_rt_lib0move(&___nl__string__25,___get_global_const(911));
#line 282
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__25, ___nl__im__19));
#line 282
c_rt_lib0clear(&___nl__im__19);
#line 282
c_rt_lib0clear(&___nl__im__20);
#line 282
//clear ___nl__int__21;
#line 282
c_rt_lib0clear(&___nl__im__24);
#line 282
c_rt_lib0clear(&___nl__string__25);
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
c_rt_lib0clear(&___nl__im__3);
#line 282
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
#line 286
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(72));
#line 286
if(___nl__bool__2){ goto label_2;}
#line 288
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(205));
#line 288
if(___nl__bool__2){ goto label_3;}
#line 288
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 288
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 288
nl_die_arg(___nl__im__3);
#line 286
label_2:
;
#line 287
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
//clear ___nl__bool__2;
#line 287
c_rt_lib0clear(&___nl__im__3);
#line 287
return ___nl__im__4;
#line 288
goto label_1;
#line 288
label_3:
;
#line 288
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(205)));
#line 288
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 289
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(219)));
#line 289
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(928));
#line 289
c_rt_lib0clear(&___nl__im__8);
#line 289
___nl__bool__7 = !___nl__bool__7;
#line 289
if(___nl__bool__7){ goto label_5;}
#line 290
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(219)));
#line 290
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(219)));
#line 290
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(928)));
#line 290
c_rt_lib0clear(&___nl__im__10);
#line 290
c_rt_lib0clear(&___nl__im__11);
#line 291
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(151)));
#line 291
c_rt_lib0move(&___nl__im__15,___get_global_const(759));
#line 291
___nl__bool__12 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 291
c_rt_lib0clear(&___nl__im__14);
#line 291
c_rt_lib0clear(&___nl__im__15);
#line 291
___nl__bool__13 = !___nl__bool__12;
#line 291
if(___nl__bool__13){ goto label_8;}
#line 291
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(167)));
#line 291
c_rt_lib0move(&___nl__im__17,___get_global_const(905));
#line 291
___nl__bool__12 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 291
c_rt_lib0clear(&___nl__im__16);
#line 291
c_rt_lib0clear(&___nl__im__17);
#line 291
label_8:
;
#line 291
//clear ___nl__bool__13;
#line 291
___nl__bool__12 = !___nl__bool__12;
#line 291
if(___nl__bool__12){ goto label_7;}
#line 292
c_rt_lib0move(&___nl__im__18,___get_global_const(759));
#line 292
c_rt_lib0move(&___nl__im__19,___get_global_const(905));
#line 292
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__18, ___nl__im__19, ___ref___im__1));
#line 292
c_rt_lib0clear(&___nl__im__18);
#line 292
c_rt_lib0clear(&___nl__im__19);
#line 293
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(905)));
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
//clear ___nl__bool__2;
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 293
c_rt_lib0clear(&___nl__im__4);
#line 293
c_rt_lib0clear(&___nl__im__5);
#line 293
c_rt_lib0clear(&___nl__im__6);
#line 293
//clear ___nl__bool__7;
#line 293
c_rt_lib0clear(&___nl__im__9);
#line 293
//clear ___nl__bool__12;
#line 293
return ___nl__im__20;
#line 294
goto label_6;
#line 294
label_7:
;
#line 294
label_6:
;
#line 294
//clear ___nl__bool__12;
#line 294
c_rt_lib0clear(&___nl__im__20);
#line 295
goto label_4;
#line 295
label_5:
;
#line 295
label_4:
;
#line 295
//clear ___nl__bool__7;
#line 295
c_rt_lib0clear(&___nl__im__9);
#line 296
goto label_1;
#line 296
label_1:
;
#line 297
c_rt_lib0delete(module_checker_priv0check_type(___nl__im__0, ___ref___im__1));
#line 298
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 298
c_rt_lib0clear(&___nl__im__0);
#line 298
//clear ___nl__bool__2;
#line 298
c_rt_lib0clear(&___nl__im__3);
#line 298
c_rt_lib0clear(&___nl__im__4);
#line 298
c_rt_lib0clear(&___nl__im__5);
#line 298
c_rt_lib0clear(&___nl__im__6);
#line 298
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
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(72));
#line 302
if(___nl__bool__2){ goto label_2;}
#line 303
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(205));
#line 303
if(___nl__bool__2){ goto label_3;}
#line 303
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 303
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 303
nl_die_arg(___nl__im__3);
#line 302
label_2:
;
#line 303
goto label_1;
#line 303
label_3:
;
#line 303
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(205)));
#line 303
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 304
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(219)));
#line 304
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(928));
#line 304
c_rt_lib0clear(&___nl__im__7);
#line 304
___nl__bool__6 = !___nl__bool__6;
#line 304
if(___nl__bool__6){ goto label_5;}
#line 305
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(219)));
#line 305
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(219)));
#line 305
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(928)));
#line 305
c_rt_lib0clear(&___nl__im__9);
#line 305
c_rt_lib0clear(&___nl__im__10);
#line 306
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(151)));
#line 306
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(167)));
#line 306
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__11, ___nl__im__12, ___ref___im__1));
#line 306
c_rt_lib0clear(&___nl__im__11);
#line 306
c_rt_lib0clear(&___nl__im__12);
#line 307
goto label_4;
#line 307
label_5:
;
#line 307
label_4:
;
#line 307
//clear ___nl__bool__6;
#line 307
c_rt_lib0clear(&___nl__im__8);
#line 308
c_rt_lib0move(&___nl__im__13, ptd_parser0try_value_to_ptd(___nl__im__4));
#line 308
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(78));
#line 308
if(___nl__bool__14){ goto label_7;}
#line 310
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(79));
#line 310
if(___nl__bool__14){ goto label_8;}
#line 310
c_rt_lib0move(&___nl__im__15,___get_global_const(16));
#line 310
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 310
nl_die_arg(___nl__im__15);
#line 308
label_7:
;
#line 308
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(78)));
#line 308
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 309
c_rt_lib0move(&___nl__im__18,___get_global_const(51));
#line 309
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__18));
#line 309
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__18, ___nl__im__16));
#line 309
c_rt_lib0move(&___nl__string__19,___get_global_const(51));
#line 309
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__19, ___nl__im__18));
#line 309
c_rt_lib0clear(&___nl__im__18);
#line 309
c_rt_lib0clear(&___nl__string__19);
#line 310
goto label_6;
#line 310
label_8:
;
#line 310
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(79)));
#line 310
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 311
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__im__20, ___ref___im__1));
#line 312
goto label_6;
#line 312
label_6:
;
#line 313
goto label_1;
#line 313
label_1:
;
#line 313
c_rt_lib0clear(&___nl__im__0);
#line 313
//clear ___nl__bool__2;
#line 313
c_rt_lib0clear(&___nl__im__3);
#line 313
c_rt_lib0clear(&___nl__im__4);
#line 313
c_rt_lib0clear(&___nl__im__5);
#line 313
c_rt_lib0clear(&___nl__im__13);
#line 313
//clear ___nl__bool__14;
#line 313
c_rt_lib0clear(&___nl__im__15);
#line 313
c_rt_lib0clear(&___nl__im__16);
#line 313
c_rt_lib0clear(&___nl__im__17);
#line 313
c_rt_lib0clear(&___nl__im__20);
#line 313
c_rt_lib0clear(&___nl__im__21);
#line 313
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
#line 318
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_const(756)));
#line 318
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__0);
#line 318
c_rt_lib0clear(&___nl__im__6);
#line 318
___nl__bool__5 = !___nl__bool__5;
#line 318
if(___nl__bool__5){ goto label_2;}
#line 319
c_rt_lib0move(&___nl__im__7,___get_global_const(51));
#line 319
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__7));
#line 319
c_rt_lib0move(&___nl__im__9,___get_global_const(929));
#line 319
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__0));
#line 319
c_rt_lib0clear(&___nl__im__9);
#line 319
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__7, ___nl__im__8));
#line 319
c_rt_lib0move(&___nl__string__10,___get_global_const(51));
#line 319
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__10, ___nl__im__7));
#line 319
c_rt_lib0clear(&___nl__im__7);
#line 319
c_rt_lib0clear(&___nl__im__8);
#line 319
c_rt_lib0clear(&___nl__string__10);
#line 320
goto label_1;
#line 320
label_2:
;
#line 320
label_1:
;
#line 320
//clear ___nl__bool__5;
#line 321
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 321
___nl__bool__13 = false;
#line 321
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 321
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 321
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 321
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(317), ___nl__im__12, ___get_global_const(322), ___nl__im__14, ___get_global_const(904), ___nl__im__15, ___get_global_const(903), ___nl__im__16));
#line 321
c_rt_lib0clear(&___nl__im__12);
#line 321
//clear ___nl__bool__13;
#line 321
c_rt_lib0clear(&___nl__im__14);
#line 321
c_rt_lib0clear(&___nl__im__15);
#line 321
c_rt_lib0clear(&___nl__im__16);
#line 322
___nl__bool__17 = ___nl__bool__1;
#line 322
___nl__bool__17 = !___nl__bool__17;
#line 322
if(___nl__bool__17){ goto label_4;}
#line 322
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(222)));
#line 322
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 322
c_rt_lib0hash_set_value_dec(&___nl__im__11, ___get_global_const(317), ___nl__im__18);
#line 322
c_rt_lib0clear(&___nl__im__18);
#line 322
c_rt_lib0clear(&___nl__im__19);
#line 322
goto label_3;
#line 322
label_4:
;
#line 322
label_3:
;
#line 322
//clear ___nl__bool__17;
#line 323
c_rt_lib0move(&___nl__im__20,___get_global_const(756));
#line 323
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__20));
#line 323
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__11));
#line 323
c_rt_lib0move(&___nl__string__21,___get_global_const(756));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__21, ___nl__im__20));
#line 323
c_rt_lib0clear(&___nl__im__20);
#line 323
c_rt_lib0clear(&___nl__string__21);
#line 323
c_rt_lib0clear(&___nl__im__0);
#line 323
//clear ___nl__bool__1;
#line 323
//clear ___nl__bool__2;
#line 323
//clear ___nl__bool__3;
#line 323
c_rt_lib0clear(&___nl__im__11);
#line 323
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
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__string__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
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
#line 328
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(756)));
#line 328
___nl__bool__3 = hash0has_key(___nl__im__4, ___nl__im__0);
#line 328
c_rt_lib0clear(&___nl__im__4);
#line 328
___nl__bool__3 = !___nl__bool__3;
#line 328
___nl__bool__3 = !___nl__bool__3;
#line 328
if(___nl__bool__3){ goto label_2;}
#line 329
c_rt_lib0move(&___nl__im__5,___get_global_const(51));
#line 329
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__5));
#line 329
c_rt_lib0move(&___nl__im__7,___get_global_const(930));
#line 329
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 329
c_rt_lib0clear(&___nl__im__7);
#line 329
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__5, ___nl__im__6));
#line 329
c_rt_lib0move(&___nl__string__8,___get_global_const(51));
#line 329
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__8, ___nl__im__5));
#line 329
c_rt_lib0clear(&___nl__im__5);
#line 329
c_rt_lib0clear(&___nl__im__6);
#line 329
c_rt_lib0clear(&___nl__string__8);
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
//clear ___nl__bool__3;
#line 330
return NULL;
#line 331
goto label_1;
#line 331
label_2:
;
#line 331
label_1:
;
#line 331
//clear ___nl__bool__3;
#line 332
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__2), ___get_global_const(756)));
#line 332
c_rt_lib0move(&___nl__im__9, hash0get_value(___nl__im__10, ___nl__im__0));
#line 332
c_rt_lib0clear(&___nl__im__10);
#line 333
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(917));
#line 333
if(___nl__bool__11){ goto label_4;}
#line 339
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(916));
#line 339
if(___nl__bool__11){ goto label_5;}
#line 346
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(266));
#line 346
if(___nl__bool__11){ goto label_6;}
#line 346
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 346
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__1));
#line 346
nl_die_arg(___nl__im__12);
#line 333
label_4:
;
#line 334
___nl__bool__14 = true;
#line 334
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 334
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_const(322), ___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
//clear ___nl__bool__14;
#line 335
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(903)));
#line 335
___nl__bool__15 = c_rt_lib0check_true_native(___nl__im__16);
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 335
___nl__bool__15 = !___nl__bool__15;
#line 335
___nl__bool__15 = !___nl__bool__15;
#line 335
if(___nl__bool__15){ goto label_8;}
#line 336
c_rt_lib0move(&___nl__im__17,___get_global_const(51));
#line 336
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__17));
#line 336
c_rt_lib0move(&___nl__im__20,___get_global_const(931));
#line 336
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__0));
#line 336
c_rt_lib0clear(&___nl__im__20);
#line 336
c_rt_lib0move(&___nl__im__21,___get_global_const(932));
#line 336
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 336
c_rt_lib0clear(&___nl__im__19);
#line 336
c_rt_lib0clear(&___nl__im__21);
#line 336
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__17, ___nl__im__18));
#line 336
c_rt_lib0move(&___nl__string__22,___get_global_const(51));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__22, ___nl__im__17));
#line 336
c_rt_lib0clear(&___nl__im__17);
#line 336
c_rt_lib0clear(&___nl__im__18);
#line 336
c_rt_lib0clear(&___nl__string__22);
#line 337
___nl__bool__24 = true;
#line 337
c_rt_lib0move(&___nl__im__23, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 337
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_const(903), ___nl__im__23);
#line 337
c_rt_lib0clear(&___nl__im__23);
#line 337
//clear ___nl__bool__24;
#line 338
goto label_7;
#line 338
label_8:
;
#line 338
label_7:
;
#line 338
//clear ___nl__bool__15;
#line 339
goto label_3;
#line 339
label_5:
;
#line 340
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(317)));
#line 340
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(222));
#line 340
c_rt_lib0clear(&___nl__im__26);
#line 340
___nl__bool__25 = !___nl__bool__25;
#line 340
if(___nl__bool__25){ goto label_10;}
#line 341
c_rt_lib0move(&___nl__im__27,___get_global_const(51));
#line 341
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__27));
#line 341
c_rt_lib0move(&___nl__im__29,___get_global_const(933));
#line 341
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__0));
#line 341
c_rt_lib0clear(&___nl__im__29);
#line 341
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__27, ___nl__im__28));
#line 341
c_rt_lib0move(&___nl__string__30,___get_global_const(51));
#line 341
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__27));
#line 341
c_rt_lib0clear(&___nl__im__27);
#line 341
c_rt_lib0clear(&___nl__im__28);
#line 341
c_rt_lib0clear(&___nl__string__30);
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
c_rt_lib0clear(&___nl__im__1);
#line 342
c_rt_lib0clear(&___nl__im__9);
#line 342
//clear ___nl__bool__11;
#line 342
c_rt_lib0clear(&___nl__im__12);
#line 342
//clear ___nl__bool__25;
#line 342
return NULL;
#line 343
goto label_9;
#line 343
label_10:
;
#line 343
label_9:
;
#line 343
//clear ___nl__bool__25;
#line 344
___nl__bool__32 = true;
#line 344
c_rt_lib0move(&___nl__im__31, c_rt_lib0bool_to_nl_native(___nl__bool__32));
#line 344
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_const(903), ___nl__im__31);
#line 344
c_rt_lib0clear(&___nl__im__31);
#line 344
//clear ___nl__bool__32;
#line 345
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 345
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 345
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_const(317), ___nl__im__33);
#line 345
c_rt_lib0clear(&___nl__im__33);
#line 345
c_rt_lib0clear(&___nl__im__34);
#line 346
goto label_3;
#line 346
label_6:
;
#line 347
___nl__bool__36 = true;
#line 347
c_rt_lib0move(&___nl__im__35, c_rt_lib0bool_to_nl_native(___nl__bool__36));
#line 347
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_const(322), ___nl__im__35);
#line 347
c_rt_lib0clear(&___nl__im__35);
#line 347
//clear ___nl__bool__36;
#line 348
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(317)));
#line 348
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(222));
#line 348
c_rt_lib0clear(&___nl__im__38);
#line 348
___nl__bool__37 = !___nl__bool__37;
#line 348
if(___nl__bool__37){ goto label_12;}
#line 349
c_rt_lib0move(&___nl__im__39,___get_global_const(51));
#line 349
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__39));
#line 349
c_rt_lib0move(&___nl__im__41,___get_global_const(933));
#line 349
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__0));
#line 349
c_rt_lib0clear(&___nl__im__41);
#line 349
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__39, ___nl__im__40));
#line 349
c_rt_lib0move(&___nl__string__42,___get_global_const(51));
#line 349
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__42, ___nl__im__39));
#line 349
c_rt_lib0clear(&___nl__im__39);
#line 349
c_rt_lib0clear(&___nl__im__40);
#line 349
c_rt_lib0clear(&___nl__string__42);
#line 350
c_rt_lib0clear(&___nl__im__0);
#line 350
c_rt_lib0clear(&___nl__im__1);
#line 350
c_rt_lib0clear(&___nl__im__9);
#line 350
//clear ___nl__bool__11;
#line 350
c_rt_lib0clear(&___nl__im__12);
#line 350
//clear ___nl__bool__37;
#line 350
return NULL;
#line 351
goto label_11;
#line 351
label_12:
;
#line 351
label_11:
;
#line 351
//clear ___nl__bool__37;
#line 352
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 352
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 352
c_rt_lib0hash_set_value_dec(&___nl__im__9, ___get_global_const(317), ___nl__im__43);
#line 352
c_rt_lib0clear(&___nl__im__43);
#line 352
c_rt_lib0clear(&___nl__im__44);
#line 353
goto label_3;
#line 353
label_3:
;
#line 354
c_rt_lib0move(&___nl__im__45,___get_global_const(756));
#line 354
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__45));
#line 354
c_rt_lib0delete(hash0set_value(&___nl__im__45, ___nl__im__0, ___nl__im__9));
#line 354
c_rt_lib0move(&___nl__string__46,___get_global_const(756));
#line 354
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__46, ___nl__im__45));
#line 354
c_rt_lib0clear(&___nl__im__45);
#line 354
c_rt_lib0clear(&___nl__string__46);
#line 354
c_rt_lib0clear(&___nl__im__0);
#line 354
c_rt_lib0clear(&___nl__im__1);
#line 354
c_rt_lib0clear(&___nl__im__9);
#line 354
//clear ___nl__bool__11;
#line 354
c_rt_lib0clear(&___nl__im__12);
#line 354
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
#line 359
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 359
c_rt_lib0delete(module_checker_priv0add_var(___nl__im__5, ___nl__bool__1, ___nl__bool__2, ___nl__bool__3, ___ref___im__4));
#line 359
c_rt_lib0clear(&___nl__im__5);
#line 360
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 360
c_rt_lib0delete(module_checker_priv0check_type(___nl__im__6, ___ref___im__4));
#line 360
c_rt_lib0clear(&___nl__im__6);
#line 361
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 361
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(219));
#line 361
if(___nl__bool__8){ goto label_2;}
#line 365
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(72));
#line 365
if(___nl__bool__8){ goto label_3;}
#line 365
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 365
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 365
nl_die_arg(___nl__im__9);
#line 361
label_2:
;
#line 361
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(219)));
#line 361
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 362
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__10, ___ref___im__4));
#line 363
___nl__bool__12 = ___nl__bool__1;
#line 363
___nl__bool__12 = !___nl__bool__12;
#line 363
if(___nl__bool__12){ goto label_5;}
#line 363
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 363
nl_die_arg(___nl__im__13);
#line 363
goto label_4;
#line 363
label_5:
;
#line 363
label_4:
;
#line 363
//clear ___nl__bool__12;
#line 363
c_rt_lib0clear(&___nl__im__13);
#line 364
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 364
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(916)));
#line 364
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__14, ___nl__im__15, ___ref___im__4));
#line 364
c_rt_lib0clear(&___nl__im__14);
#line 364
c_rt_lib0clear(&___nl__im__15);
#line 365
goto label_1;
#line 365
label_3:
;
#line 366
goto label_1;
#line 366
label_1:
;
#line 366
c_rt_lib0clear(&___nl__im__0);
#line 366
//clear ___nl__bool__1;
#line 366
//clear ___nl__bool__2;
#line 366
//clear ___nl__bool__3;
#line 366
c_rt_lib0clear(&___nl__im__7);
#line 366
//clear ___nl__bool__8;
#line 366
c_rt_lib0clear(&___nl__im__9);
#line 366
c_rt_lib0clear(&___nl__im__10);
#line 366
c_rt_lib0clear(&___nl__im__11);
#line 366
return NULL;
}

ImmT  module_checker_priv0check_cmd(nast0cmd_t0type ___nl__im__0,module_checker0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
module_checker_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
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
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__string__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__string__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__string__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
bool  ___nl__bool__77 = false;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
bool  ___nl__bool__82 = false;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
bool  ___nl__bool__87 = false;
ImmT  ___nl__string__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
bool  ___nl__bool__94 = false;
bool  ___nl__bool__95 = false;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
bool  ___nl__bool__102 = false;
ImmT  ___nl__string__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
bool  ___nl__bool__109 = false;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
bool  ___nl__bool__112 = false;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
bool  ___nl__bool__115 = false;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
bool  ___nl__bool__118 = false;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
bool  ___nl__bool__122 = false;
ImmT  ___nl__string__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
bool  ___nl__bool__134 = false;
bool  ___nl__bool__135 = false;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
bool  ___nl__bool__142 = false;
ImmT  ___nl__string__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
bool  ___nl__bool__149 = false;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
bool  ___nl__bool__153 = false;
ImmT  ___nl__string__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
bool  ___nl__bool__162 = false;
ImmT  ___nl__string__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
bool  ___nl__bool__171 = false;
ImmT  ___nl__string__172 = NULL;
bool  ___nl__bool__173 = false;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__string__177 = NULL;
bool  ___nl__bool__178 = false;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__string__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
bool  ___nl__bool__186 = false;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
INT  ___nl__int__190 = 0;
INT  ___nl__int__191 = 0;
INT  ___nl__int__192 = 0;
bool  ___nl__bool__193 = false;
INT  ___nl__int__194 = 0;
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
bool  ___nl__bool__198 = false;
ImmT  ___nl__string__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
bool  ___nl__bool__204 = false;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
bool  ___nl__bool__209 = false;
bool  ___nl__bool__210 = false;
bool  ___nl__bool__211 = false;
ImmT  ___nl__im__212 = NULL;
bool  ___nl__bool__213 = false;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__string__218 = NULL;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__string__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
bool  ___nl__bool__228 = false;
ImmT  ___nl__im__229 = NULL;
bool  ___nl__bool__230 = false;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__string__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
bool  ___nl__bool__238 = false;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__string__240 = NULL;
bool  ___nl__bool__241 = false;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__string__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
bool  ___nl__bool__249 = false;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__string__251 = NULL;
bool  ___nl__bool__252 = false;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__string__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
bool  ___nl__bool__260 = false;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__string__262 = NULL;
bool  ___nl__bool__263 = false;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__string__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
bool  ___nl__bool__270 = false;
ImmT  ___nl__im__271 = NULL;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
bool  ___nl__bool__276 = false;
ImmT  ___nl__string__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
bool  ___nl__bool__280 = false;
ImmT  ___nl__string__281 = NULL;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
INT  ___nl__int__286 = 0;
INT  ___nl__int__287 = 0;
INT  ___nl__int__288 = 0;
bool  ___nl__bool__289 = false;
INT  ___nl__int__290 = 0;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
ImmT  ___nl__im__293 = NULL;
ImmT  ___nl__im__294 = NULL;
INT  ___nl__int__295 = 0;
INT  ___nl__int__296 = 0;
INT  ___nl__int__297 = 0;
bool  ___nl__bool__298 = false;
INT  ___nl__int__299 = 0;
ImmT  ___nl__im__300 = NULL;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
bool  ___nl__bool__303 = false;
ImmT  ___nl__im__304 = NULL;
ImmT  ___nl__im__305 = NULL;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__im__307 = NULL;
ImmT  ___nl__im__308 = NULL;
bool  ___nl__bool__309 = false;
ImmT  ___nl__string__310 = NULL;
ImmT  ___nl__im__311 = NULL;
ImmT  ___nl__im__312 = NULL;
bool  ___nl__bool__313 = false;
ImmT  ___nl__string__314 = NULL;
ImmT  ___nl__im__315 = NULL;
ImmT  ___nl__im__316 = NULL;
bool  ___nl__bool__317 = false;
bool  ___nl__bool__318 = false;
bool  ___nl__bool__319 = false;
ImmT  ___nl__im__320 = NULL;
ImmT  ___nl__im__321 = NULL;
ImmT  ___nl__im__322 = NULL;
bool  ___nl__bool__323 = false;
ImmT  ___nl__im__324 = NULL;
ImmT  ___nl__im__325 = NULL;
ImmT  ___nl__im__326 = NULL;
bool  ___nl__bool__327 = false;
bool  ___nl__bool__328 = false;
bool  ___nl__bool__329 = false;
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
bool  ___nl__bool__342 = false;
ImmT  ___nl__im__343 = NULL;
ImmT  ___nl__im__344 = NULL;
ImmT  ___nl__im__345 = NULL;
bool  ___nl__bool__346 = false;
bool  ___nl__bool__347 = false;
bool  ___nl__bool__348 = false;
ImmT  ___nl__im__349 = NULL;
ImmT  ___nl__im__350 = NULL;
ImmT  ___nl__im__351 = NULL;
ImmT  ___nl__im__352 = NULL;
ImmT  ___nl__im__353 = NULL;
ImmT  ___nl__im__354 = NULL;
ImmT  ___nl__im__355 = NULL;
ImmT  ___nl__im__356 = NULL;
ImmT  ___nl__im__357 = NULL;
ImmT  ___nl__im__358 = NULL;
#line 370
c_rt_lib0move(&___nl__im__2,___get_global_const(51));
#line 370
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 370
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 370
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(507)));
#line 370
c_rt_lib0clear(&___nl__im__6);
#line 370
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(153)));
#line 370
___nl__int__4 = getIntFromImm(___nl__im__7);
#line 370
c_rt_lib0clear(&___nl__im__5);
#line 370
c_rt_lib0clear(&___nl__im__7);
#line 370
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__4));
#line 370
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(915), ___nl__im__3);
#line 370
c_rt_lib0move(&___nl__string__8,___get_global_const(51));
#line 370
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__8, ___nl__im__2));
#line 370
c_rt_lib0clear(&___nl__im__2);
#line 370
c_rt_lib0clear(&___nl__im__3);
#line 370
//clear ___nl__int__4;
#line 370
c_rt_lib0clear(&___nl__string__8);
#line 371
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(246)));
#line 371
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(216)));
#line 371
___nl__bool__9 = c_rt_lib0check_true_native(___nl__im__11);
#line 371
c_rt_lib0clear(&___nl__im__10);
#line 371
c_rt_lib0clear(&___nl__im__11);
#line 371
___nl__bool__9 = !___nl__bool__9;
#line 371
if(___nl__bool__9){ goto label_2;}
#line 372
c_rt_lib0move(&___nl__im__12,___get_global_const(51));
#line 372
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__12));
#line 372
c_rt_lib0move(&___nl__im__13,___get_global_const(934));
#line 372
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__12, ___nl__im__13));
#line 372
c_rt_lib0move(&___nl__string__14,___get_global_const(51));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__14, ___nl__im__12));
#line 372
c_rt_lib0clear(&___nl__im__12);
#line 372
c_rt_lib0clear(&___nl__im__13);
#line 372
c_rt_lib0clear(&___nl__string__14);
#line 373
c_rt_lib0move(&___nl__im__15,___get_global_const(246));
#line 373
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__15));
#line 373
___nl__bool__17 = false;
#line 373
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__17));
#line 373
c_rt_lib0hash_set_value_dec(&___nl__im__15, ___get_global_const(216), ___nl__im__16);
#line 373
c_rt_lib0move(&___nl__string__18,___get_global_const(246));
#line 373
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__18, ___nl__im__15));
#line 373
c_rt_lib0clear(&___nl__im__15);
#line 373
c_rt_lib0clear(&___nl__im__16);
#line 373
//clear ___nl__bool__17;
#line 373
c_rt_lib0clear(&___nl__string__18);
#line 374
goto label_1;
#line 374
label_2:
;
#line 374
label_1:
;
#line 374
//clear ___nl__bool__9;
#line 375
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 375
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(935));
#line 375
if(___nl__bool__20){ goto label_4;}
#line 398
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(936));
#line 398
if(___nl__bool__20){ goto label_5;}
#line 411
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(937));
#line 411
if(___nl__bool__20){ goto label_6;}
#line 419
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(938));
#line 419
if(___nl__bool__20){ goto label_7;}
#line 428
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(159));
#line 428
if(___nl__bool__20){ goto label_8;}
#line 433
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(939));
#line 433
if(___nl__bool__20){ goto label_9;}
#line 441
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(940));
#line 441
if(___nl__bool__20){ goto label_10;}
#line 448
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(941));
#line 448
if(___nl__bool__20){ goto label_11;}
#line 454
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(942));
#line 454
if(___nl__bool__20){ goto label_12;}
#line 460
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(943));
#line 460
if(___nl__bool__20){ goto label_13;}
#line 464
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(944));
#line 464
if(___nl__bool__20){ goto label_14;}
#line 468
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(945));
#line 468
if(___nl__bool__20){ goto label_15;}
#line 487
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(219));
#line 487
if(___nl__bool__20){ goto label_16;}
#line 489
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(246));
#line 489
if(___nl__bool__20){ goto label_17;}
#line 508
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(946));
#line 508
if(___nl__bool__20){ goto label_18;}
#line 514
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(247));
#line 514
if(___nl__bool__20){ goto label_19;}
#line 522
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(252));
#line 522
if(___nl__bool__20){ goto label_20;}
#line 524
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(947));
#line 524
if(___nl__bool__20){ goto label_21;}
#line 532
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(177));
#line 532
if(___nl__bool__20){ goto label_22;}
#line 540
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(948));
#line 540
if(___nl__bool__20){ goto label_23;}
#line 540
c_rt_lib0move(&___nl__im__21,___get_global_const(16));
#line 540
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__19));
#line 540
nl_die_arg(___nl__im__21);
#line 375
label_4:
;
#line 375
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(935)));
#line 375
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 376
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(949)));
#line 376
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__24, ___ref___im__1));
#line 376
c_rt_lib0clear(&___nl__im__24);
#line 377
c_rt_lib0move(&___nl__im__25, module_checker_priv0inits(___ref___im__1));
#line 378
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(935)));
#line 378
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__26, ___ref___im__1));
#line 378
c_rt_lib0clear(&___nl__im__26);
#line 379
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__25));
#line 380
c_rt_lib0move(&___nl__im__27,___get_global_const(321));
#line 380
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash(___nl__im__25, ___nl__im__27));
#line 380
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__27));
#line 380
c_rt_lib0move(&___nl__string__28,___get_global_const(321));
#line 380
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__25, ___nl__string__28, ___nl__im__27));
#line 380
c_rt_lib0clear(&___nl__im__27);
#line 380
c_rt_lib0clear(&___nl__string__28);
#line 381
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(246)));
#line 381
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(216)));
#line 381
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__31);
#line 381
c_rt_lib0clear(&___nl__im__30);
#line 381
c_rt_lib0clear(&___nl__im__31);
#line 382
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(950)));
#line 382
___nl__int__34 = 0;
#line 382
___nl__int__35 = 1;
#line 382
___nl__int__36 = c_rt_lib0array_len(___nl__im__32);
#line 382
label_26:
;
#line 382
___nl__int__38 = ___nl__int__34 >= ___nl__int__36;
#line 382
___nl__bool__37 = ___nl__int__38;
#line 382
if(___nl__bool__37){ goto label_24;}
#line 382
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_get(___nl__im__32, ___nl__int__34));
#line 382
c_rt_lib0copy(&___nl__im__33, ___nl__im__39);
#line 383
c_rt_lib0move(&___nl__im__40,___get_global_const(246));
#line 383
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__40));
#line 383
___nl__bool__42 = false;
#line 383
c_rt_lib0move(&___nl__im__41, c_rt_lib0bool_to_nl_native(___nl__bool__42));
#line 383
c_rt_lib0hash_set_value_dec(&___nl__im__40, ___get_global_const(216), ___nl__im__41);
#line 383
c_rt_lib0move(&___nl__string__43,___get_global_const(246));
#line 383
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__40));
#line 383
c_rt_lib0clear(&___nl__im__40);
#line 383
c_rt_lib0clear(&___nl__im__41);
#line 383
//clear ___nl__bool__42;
#line 383
c_rt_lib0clear(&___nl__string__43);
#line 384
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(949)));
#line 384
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__44, ___ref___im__1));
#line 384
c_rt_lib0clear(&___nl__im__44);
#line 385
c_rt_lib0move(&___nl__im__46, module_checker_priv0save_block(___ref___im__1));
#line 385
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 385
c_rt_lib0hash_set_value_dec(&___nl__im__25, ___get_global_const(321), ___nl__im__45);
#line 385
c_rt_lib0clear(&___nl__im__45);
#line 385
c_rt_lib0clear(&___nl__im__46);
#line 386
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(227)));
#line 386
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__47, ___ref___im__1));
#line 386
c_rt_lib0clear(&___nl__im__47);
#line 387
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__25));
#line 388
c_rt_lib0move(&___nl__im__48,___get_global_const(321));
#line 388
c_rt_lib0move(&___nl__im__48, c_rt_lib0get_ref_hash(___nl__im__25, ___nl__im__48));
#line 388
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__48));
#line 388
c_rt_lib0move(&___nl__string__49,___get_global_const(321));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__25, ___nl__string__49, ___nl__im__48));
#line 388
c_rt_lib0clear(&___nl__im__48);
#line 388
c_rt_lib0clear(&___nl__string__49);
#line 389
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(246)));
#line 389
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(216)));
#line 389
___nl__bool__50 = c_rt_lib0check_true_native(___nl__im__52);
#line 389
c_rt_lib0clear(&___nl__im__51);
#line 389
c_rt_lib0clear(&___nl__im__52);
#line 389
___nl__bool__50 = !___nl__bool__50;
#line 389
___nl__bool__50 = !___nl__bool__50;
#line 389
if(___nl__bool__50){ goto label_28;}
#line 389
___nl__bool__29 = false;
#line 389
goto label_27;
#line 389
label_28:
;
#line 389
label_27:
;
#line 389
//clear ___nl__bool__50;
#line 389
c_rt_lib0clear(&___nl__im__33);
#line 390
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 390
goto label_26;
#line 390
label_24:
;
#line 391
c_rt_lib0move(&___nl__im__54, module_checker_priv0save_block(___ref___im__1));
#line 391
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 391
c_rt_lib0hash_set_value_dec(&___nl__im__25, ___get_global_const(321), ___nl__im__53);
#line 391
c_rt_lib0clear(&___nl__im__53);
#line 391
c_rt_lib0clear(&___nl__im__54);
#line 392
c_rt_lib0move(&___nl__im__55,___get_global_const(246));
#line 392
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__55));
#line 392
___nl__bool__57 = false;
#line 392
c_rt_lib0move(&___nl__im__56, c_rt_lib0bool_to_nl_native(___nl__bool__57));
#line 392
c_rt_lib0hash_set_value_dec(&___nl__im__55, ___get_global_const(216), ___nl__im__56);
#line 392
c_rt_lib0move(&___nl__string__58,___get_global_const(246));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__58, ___nl__im__55));
#line 392
c_rt_lib0clear(&___nl__im__55);
#line 392
c_rt_lib0clear(&___nl__im__56);
#line 392
//clear ___nl__bool__57;
#line 392
c_rt_lib0clear(&___nl__string__58);
#line 393
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(951)));
#line 393
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__59, ___ref___im__1));
#line 393
c_rt_lib0clear(&___nl__im__59);
#line 394
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__25));
#line 395
c_rt_lib0delete(module_checker_priv0flush_inits(___ref___im__1, &___nl__im__25));
#line 396
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(246)));
#line 396
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_const(216)));
#line 396
___nl__bool__60 = c_rt_lib0check_true_native(___nl__im__62);
#line 396
c_rt_lib0clear(&___nl__im__61);
#line 396
c_rt_lib0clear(&___nl__im__62);
#line 396
___nl__bool__60 = !___nl__bool__60;
#line 396
___nl__bool__60 = !___nl__bool__60;
#line 396
if(___nl__bool__60){ goto label_30;}
#line 396
___nl__bool__29 = false;
#line 396
goto label_29;
#line 396
label_30:
;
#line 396
label_29:
;
#line 396
//clear ___nl__bool__60;
#line 397
c_rt_lib0move(&___nl__im__63,___get_global_const(246));
#line 397
c_rt_lib0move(&___nl__im__63, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__63));
#line 397
c_rt_lib0move(&___nl__im__64, c_rt_lib0bool_to_nl_native(___nl__bool__29));
#line 397
c_rt_lib0hash_set_value_dec(&___nl__im__63, ___get_global_const(216), ___nl__im__64);
#line 397
c_rt_lib0move(&___nl__string__65,___get_global_const(246));
#line 397
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__65, ___nl__im__63));
#line 397
c_rt_lib0clear(&___nl__im__63);
#line 397
c_rt_lib0clear(&___nl__im__64);
#line 397
c_rt_lib0clear(&___nl__string__65);
#line 398
goto label_3;
#line 398
label_5:
;
#line 398
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(936)));
#line 398
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 399
c_rt_lib0move(&___nl__im__68, module_checker_priv0save_block(___ref___im__1));
#line 400
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(952)));
#line 400
___nl__bool__70 = c_rt_lib0priv_is(___nl__im__69, ___get_global_const(219));
#line 400
if(___nl__bool__70){ goto label_32;}
#line 402
___nl__bool__70 = c_rt_lib0priv_is(___nl__im__69, ___get_global_const(252));
#line 402
if(___nl__bool__70){ goto label_33;}
#line 402
c_rt_lib0move(&___nl__im__71,___get_global_const(16));
#line 402
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(2, ___nl__im__71, ___nl__im__69));
#line 402
nl_die_arg(___nl__im__71);
#line 400
label_32:
;
#line 400
c_rt_lib0move(&___nl__im__73, c_rt_lib0priv_as(___nl__im__69, ___get_global_const(219)));
#line 400
c_rt_lib0copy(&___nl__im__72, ___nl__im__73);
#line 401
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__72, ___ref___im__1));
#line 402
goto label_31;
#line 402
label_33:
;
#line 402
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__69, ___get_global_const(252)));
#line 402
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 403
___nl__bool__76 = false;
#line 403
___nl__bool__77 = false;
#line 403
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(219)));
#line 403
___nl__bool__78 = c_rt_lib0priv_is(___nl__im__79, ___get_global_const(219));
#line 403
c_rt_lib0clear(&___nl__im__79);
#line 403
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__74, ___nl__bool__76, ___nl__bool__77, ___nl__bool__78, ___ref___im__1));
#line 403
//clear ___nl__bool__76;
#line 403
//clear ___nl__bool__77;
#line 403
//clear ___nl__bool__78;
#line 404
goto label_31;
#line 404
label_31:
;
#line 405
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(949)));
#line 405
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__80, ___ref___im__1));
#line 405
c_rt_lib0clear(&___nl__im__80);
#line 406
___nl__bool__82 = true;
#line 406
c_rt_lib0move(&___nl__im__81, c_rt_lib0bool_to_nl_native(___nl__bool__82));
#line 406
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(910), ___nl__im__81);
#line 406
c_rt_lib0clear(&___nl__im__81);
#line 406
//clear ___nl__bool__82;
#line 407
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(227)));
#line 407
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__83, ___ref___im__1));
#line 407
c_rt_lib0clear(&___nl__im__83);
#line 408
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(570)));
#line 408
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__84, ___ref___im__1));
#line 408
c_rt_lib0clear(&___nl__im__84);
#line 409
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__68));
#line 410
c_rt_lib0move(&___nl__im__85,___get_global_const(246));
#line 410
c_rt_lib0move(&___nl__im__85, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__85));
#line 410
___nl__bool__87 = false;
#line 410
c_rt_lib0move(&___nl__im__86, c_rt_lib0bool_to_nl_native(___nl__bool__87));
#line 410
c_rt_lib0hash_set_value_dec(&___nl__im__85, ___get_global_const(216), ___nl__im__86);
#line 410
c_rt_lib0move(&___nl__string__88,___get_global_const(246));
#line 410
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__88, ___nl__im__85));
#line 410
c_rt_lib0clear(&___nl__im__85);
#line 410
c_rt_lib0clear(&___nl__im__86);
#line 410
//clear ___nl__bool__87;
#line 410
c_rt_lib0clear(&___nl__string__88);
#line 411
goto label_3;
#line 411
label_6:
;
#line 411
c_rt_lib0move(&___nl__im__90, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(937)));
#line 411
c_rt_lib0copy(&___nl__im__89, ___nl__im__90);
#line 412
c_rt_lib0move(&___nl__im__91, module_checker_priv0save_block(___ref___im__1));
#line 413
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_const(38)));
#line 413
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__92, ___ref___im__1));
#line 413
c_rt_lib0clear(&___nl__im__92);
#line 414
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_const(570)));
#line 414
___nl__bool__94 = true;
#line 414
___nl__bool__95 = true;
#line 414
___nl__bool__96 = true;
#line 414
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__93, ___nl__bool__94, ___nl__bool__95, ___nl__bool__96, ___ref___im__1));
#line 414
c_rt_lib0clear(&___nl__im__93);
#line 414
//clear ___nl__bool__94;
#line 414
//clear ___nl__bool__95;
#line 414
//clear ___nl__bool__96;
#line 415
___nl__bool__98 = true;
#line 415
c_rt_lib0move(&___nl__im__97, c_rt_lib0bool_to_nl_native(___nl__bool__98));
#line 415
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(910), ___nl__im__97);
#line 415
c_rt_lib0clear(&___nl__im__97);
#line 415
//clear ___nl__bool__98;
#line 416
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_const(227)));
#line 416
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__99, ___ref___im__1));
#line 416
c_rt_lib0clear(&___nl__im__99);
#line 417
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__91));
#line 418
c_rt_lib0move(&___nl__im__100,___get_global_const(246));
#line 418
c_rt_lib0move(&___nl__im__100, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__100));
#line 418
___nl__bool__102 = false;
#line 418
c_rt_lib0move(&___nl__im__101, c_rt_lib0bool_to_nl_native(___nl__bool__102));
#line 418
c_rt_lib0hash_set_value_dec(&___nl__im__100, ___get_global_const(216), ___nl__im__101);
#line 418
c_rt_lib0move(&___nl__string__103,___get_global_const(246));
#line 418
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__103, ___nl__im__100));
#line 418
c_rt_lib0clear(&___nl__im__100);
#line 418
c_rt_lib0clear(&___nl__im__101);
#line 418
//clear ___nl__bool__102;
#line 418
c_rt_lib0clear(&___nl__string__103);
#line 419
goto label_3;
#line 419
label_7:
;
#line 419
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(938)));
#line 419
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 420
c_rt_lib0move(&___nl__im__106, module_checker_priv0save_block(___ref___im__1));
#line 421
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(129)));
#line 421
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__107, ___ref___im__1));
#line 421
c_rt_lib0clear(&___nl__im__107);
#line 422
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(224)));
#line 422
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(953)));
#line 422
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__110, ___get_global_const(40));
#line 422
c_rt_lib0clear(&___nl__im__110);
#line 422
___nl__bool__109 = !___nl__bool__109;
#line 422
___nl__bool__111 = true;
#line 422
___nl__bool__112 = true;
#line 422
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__108, ___nl__bool__109, ___nl__bool__111, ___nl__bool__112, ___ref___im__1));
#line 422
c_rt_lib0clear(&___nl__im__108);
#line 422
//clear ___nl__bool__109;
#line 422
//clear ___nl__bool__111;
#line 422
//clear ___nl__bool__112;
#line 423
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(370)));
#line 423
___nl__bool__114 = true;
#line 423
___nl__bool__115 = true;
#line 423
___nl__bool__116 = true;
#line 423
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__113, ___nl__bool__114, ___nl__bool__115, ___nl__bool__116, ___ref___im__1));
#line 423
c_rt_lib0clear(&___nl__im__113);
#line 423
//clear ___nl__bool__114;
#line 423
//clear ___nl__bool__115;
#line 423
//clear ___nl__bool__116;
#line 424
___nl__bool__118 = true;
#line 424
c_rt_lib0move(&___nl__im__117, c_rt_lib0bool_to_nl_native(___nl__bool__118));
#line 424
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(910), ___nl__im__117);
#line 424
c_rt_lib0clear(&___nl__im__117);
#line 424
//clear ___nl__bool__118;
#line 425
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(227)));
#line 425
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__119, ___ref___im__1));
#line 425
c_rt_lib0clear(&___nl__im__119);
#line 426
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__106));
#line 427
c_rt_lib0move(&___nl__im__120,___get_global_const(246));
#line 427
c_rt_lib0move(&___nl__im__120, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__120));
#line 427
___nl__bool__122 = false;
#line 427
c_rt_lib0move(&___nl__im__121, c_rt_lib0bool_to_nl_native(___nl__bool__122));
#line 427
c_rt_lib0hash_set_value_dec(&___nl__im__120, ___get_global_const(216), ___nl__im__121);
#line 427
c_rt_lib0move(&___nl__string__123,___get_global_const(246));
#line 427
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__123, ___nl__im__120));
#line 427
c_rt_lib0clear(&___nl__im__120);
#line 427
c_rt_lib0clear(&___nl__im__121);
#line 427
//clear ___nl__bool__122;
#line 427
c_rt_lib0clear(&___nl__string__123);
#line 428
goto label_3;
#line 428
label_8:
;
#line 428
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(159)));
#line 428
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 429
c_rt_lib0move(&___nl__im__126, module_checker_priv0save_block(___ref___im__1));
#line 430
___nl__bool__128 = true;
#line 430
c_rt_lib0move(&___nl__im__127, c_rt_lib0bool_to_nl_native(___nl__bool__128));
#line 430
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(910), ___nl__im__127);
#line 430
c_rt_lib0clear(&___nl__im__127);
#line 430
//clear ___nl__bool__128;
#line 431
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__124, ___ref___im__1));
#line 432
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__126));
#line 433
goto label_3;
#line 433
label_9:
;
#line 433
c_rt_lib0move(&___nl__im__130, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(939)));
#line 433
c_rt_lib0copy(&___nl__im__129, ___nl__im__130);
#line 434
c_rt_lib0move(&___nl__im__131, module_checker_priv0save_block(___ref___im__1));
#line 435
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(954)));
#line 435
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__132, ___ref___im__1));
#line 435
c_rt_lib0clear(&___nl__im__132);
#line 436
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(570)));
#line 436
___nl__bool__134 = true;
#line 436
___nl__bool__135 = true;
#line 436
___nl__bool__136 = true;
#line 436
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__133, ___nl__bool__134, ___nl__bool__135, ___nl__bool__136, ___ref___im__1));
#line 436
c_rt_lib0clear(&___nl__im__133);
#line 436
//clear ___nl__bool__134;
#line 436
//clear ___nl__bool__135;
#line 436
//clear ___nl__bool__136;
#line 437
___nl__bool__138 = true;
#line 437
c_rt_lib0move(&___nl__im__137, c_rt_lib0bool_to_nl_native(___nl__bool__138));
#line 437
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(910), ___nl__im__137);
#line 437
c_rt_lib0clear(&___nl__im__137);
#line 437
//clear ___nl__bool__138;
#line 438
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(227)));
#line 438
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__139, ___ref___im__1));
#line 438
c_rt_lib0clear(&___nl__im__139);
#line 439
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__131));
#line 440
c_rt_lib0move(&___nl__im__140,___get_global_const(246));
#line 440
c_rt_lib0move(&___nl__im__140, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__140));
#line 440
___nl__bool__142 = false;
#line 440
c_rt_lib0move(&___nl__im__141, c_rt_lib0bool_to_nl_native(___nl__bool__142));
#line 440
c_rt_lib0hash_set_value_dec(&___nl__im__140, ___get_global_const(216), ___nl__im__141);
#line 440
c_rt_lib0move(&___nl__string__143,___get_global_const(246));
#line 440
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__143, ___nl__im__140));
#line 440
c_rt_lib0clear(&___nl__im__140);
#line 440
c_rt_lib0clear(&___nl__im__141);
#line 440
//clear ___nl__bool__142;
#line 440
c_rt_lib0clear(&___nl__string__143);
#line 441
goto label_3;
#line 441
label_10:
;
#line 441
c_rt_lib0move(&___nl__im__145, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(940)));
#line 441
c_rt_lib0copy(&___nl__im__144, ___nl__im__145);
#line 442
c_rt_lib0move(&___nl__im__146, module_checker_priv0save_block(___ref___im__1));
#line 443
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_const(949)));
#line 443
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__147, ___ref___im__1));
#line 443
c_rt_lib0clear(&___nl__im__147);
#line 444
___nl__bool__149 = true;
#line 444
c_rt_lib0move(&___nl__im__148, c_rt_lib0bool_to_nl_native(___nl__bool__149));
#line 444
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(910), ___nl__im__148);
#line 444
c_rt_lib0clear(&___nl__im__148);
#line 444
//clear ___nl__bool__149;
#line 445
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_const(227)));
#line 445
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__150, ___ref___im__1));
#line 445
c_rt_lib0clear(&___nl__im__150);
#line 446
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__146));
#line 447
c_rt_lib0move(&___nl__im__151,___get_global_const(246));
#line 447
c_rt_lib0move(&___nl__im__151, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__151));
#line 447
___nl__bool__153 = false;
#line 447
c_rt_lib0move(&___nl__im__152, c_rt_lib0bool_to_nl_native(___nl__bool__153));
#line 447
c_rt_lib0hash_set_value_dec(&___nl__im__151, ___get_global_const(216), ___nl__im__152);
#line 447
c_rt_lib0move(&___nl__string__154,___get_global_const(246));
#line 447
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__154, ___nl__im__151));
#line 447
c_rt_lib0clear(&___nl__im__151);
#line 447
c_rt_lib0clear(&___nl__im__152);
#line 447
//clear ___nl__bool__153;
#line 447
c_rt_lib0clear(&___nl__string__154);
#line 448
goto label_3;
#line 448
label_11:
;
#line 448
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(941)));
#line 448
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 449
c_rt_lib0move(&___nl__im__157, c_rt_lib0hash_get_value_dec(___nl__im__155, ___get_global_const(949)));
#line 449
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__157, ___ref___im__1));
#line 449
c_rt_lib0clear(&___nl__im__157);
#line 450
c_rt_lib0move(&___nl__im__158, module_checker_priv0save_block(___ref___im__1));
#line 451
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__155, ___get_global_const(227)));
#line 451
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__159, ___ref___im__1));
#line 451
c_rt_lib0clear(&___nl__im__159);
#line 452
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__158));
#line 453
c_rt_lib0move(&___nl__im__160,___get_global_const(246));
#line 453
c_rt_lib0move(&___nl__im__160, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__160));
#line 453
___nl__bool__162 = false;
#line 453
c_rt_lib0move(&___nl__im__161, c_rt_lib0bool_to_nl_native(___nl__bool__162));
#line 453
c_rt_lib0hash_set_value_dec(&___nl__im__160, ___get_global_const(216), ___nl__im__161);
#line 453
c_rt_lib0move(&___nl__string__163,___get_global_const(246));
#line 453
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__163, ___nl__im__160));
#line 453
c_rt_lib0clear(&___nl__im__160);
#line 453
c_rt_lib0clear(&___nl__im__161);
#line 453
//clear ___nl__bool__162;
#line 453
c_rt_lib0clear(&___nl__string__163);
#line 454
goto label_3;
#line 454
label_12:
;
#line 454
c_rt_lib0move(&___nl__im__165, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(942)));
#line 454
c_rt_lib0copy(&___nl__im__164, ___nl__im__165);
#line 455
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_const(949)));
#line 455
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__166, ___ref___im__1));
#line 455
c_rt_lib0clear(&___nl__im__166);
#line 456
c_rt_lib0move(&___nl__im__167, module_checker_priv0save_block(___ref___im__1));
#line 457
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_const(227)));
#line 457
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__168, ___ref___im__1));
#line 457
c_rt_lib0clear(&___nl__im__168);
#line 458
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__167));
#line 459
c_rt_lib0move(&___nl__im__169,___get_global_const(246));
#line 459
c_rt_lib0move(&___nl__im__169, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__169));
#line 459
___nl__bool__171 = false;
#line 459
c_rt_lib0move(&___nl__im__170, c_rt_lib0bool_to_nl_native(___nl__bool__171));
#line 459
c_rt_lib0hash_set_value_dec(&___nl__im__169, ___get_global_const(216), ___nl__im__170);
#line 459
c_rt_lib0move(&___nl__string__172,___get_global_const(246));
#line 459
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__172, ___nl__im__169));
#line 459
c_rt_lib0clear(&___nl__im__169);
#line 459
c_rt_lib0clear(&___nl__im__170);
#line 459
//clear ___nl__bool__171;
#line 459
c_rt_lib0clear(&___nl__string__172);
#line 460
goto label_3;
#line 460
label_13:
;
#line 461
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(910)));
#line 461
___nl__bool__173 = c_rt_lib0check_true_native(___nl__im__174);
#line 461
c_rt_lib0clear(&___nl__im__174);
#line 461
___nl__bool__173 = !___nl__bool__173;
#line 461
___nl__bool__173 = !___nl__bool__173;
#line 461
if(___nl__bool__173){ goto label_35;}
#line 462
c_rt_lib0move(&___nl__im__175,___get_global_const(51));
#line 462
c_rt_lib0move(&___nl__im__175, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__175));
#line 462
c_rt_lib0move(&___nl__im__176,___get_global_const(955));
#line 462
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__175, ___nl__im__176));
#line 462
c_rt_lib0move(&___nl__string__177,___get_global_const(51));
#line 462
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__177, ___nl__im__175));
#line 462
c_rt_lib0clear(&___nl__im__175);
#line 462
c_rt_lib0clear(&___nl__im__176);
#line 462
c_rt_lib0clear(&___nl__string__177);
#line 463
goto label_34;
#line 463
label_35:
;
#line 463
label_34:
;
#line 463
//clear ___nl__bool__173;
#line 464
goto label_3;
#line 464
label_14:
;
#line 465
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(910)));
#line 465
___nl__bool__178 = c_rt_lib0check_true_native(___nl__im__179);
#line 465
c_rt_lib0clear(&___nl__im__179);
#line 465
___nl__bool__178 = !___nl__bool__178;
#line 465
___nl__bool__178 = !___nl__bool__178;
#line 465
if(___nl__bool__178){ goto label_37;}
#line 466
c_rt_lib0move(&___nl__im__180,___get_global_const(51));
#line 466
c_rt_lib0move(&___nl__im__180, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__180));
#line 466
c_rt_lib0move(&___nl__im__181,___get_global_const(956));
#line 466
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__180, ___nl__im__181));
#line 466
c_rt_lib0move(&___nl__string__182,___get_global_const(51));
#line 466
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__182, ___nl__im__180));
#line 466
c_rt_lib0clear(&___nl__im__180);
#line 466
c_rt_lib0clear(&___nl__im__181);
#line 466
c_rt_lib0clear(&___nl__string__182);
#line 467
goto label_36;
#line 467
label_37:
;
#line 467
label_36:
;
#line 467
//clear ___nl__bool__178;
#line 468
goto label_3;
#line 468
label_15:
;
#line 468
c_rt_lib0move(&___nl__im__184, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(945)));
#line 468
c_rt_lib0copy(&___nl__im__183, ___nl__im__184);
#line 469
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_const(224)));
#line 469
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__185, ___ref___im__1));
#line 469
c_rt_lib0clear(&___nl__im__185);
#line 470
___nl__bool__186 = true;
#line 471
c_rt_lib0move(&___nl__im__187, module_checker_priv0inits(___ref___im__1));
#line 472
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_const(957)));
#line 472
___nl__int__190 = 0;
#line 472
___nl__int__191 = 1;
#line 472
___nl__int__192 = c_rt_lib0array_len(___nl__im__188);
#line 472
label_40:
;
#line 472
___nl__int__194 = ___nl__int__190 >= ___nl__int__192;
#line 472
___nl__bool__193 = ___nl__int__194;
#line 472
if(___nl__bool__193){ goto label_38;}
#line 472
c_rt_lib0move(&___nl__im__195, c_rt_lib0array_get(___nl__im__188, ___nl__int__190));
#line 472
c_rt_lib0copy(&___nl__im__189, ___nl__im__195);
#line 473
c_rt_lib0move(&___nl__im__196,___get_global_const(246));
#line 473
c_rt_lib0move(&___nl__im__196, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__196));
#line 473
___nl__bool__198 = false;
#line 473
c_rt_lib0move(&___nl__im__197, c_rt_lib0bool_to_nl_native(___nl__bool__198));
#line 473
c_rt_lib0hash_set_value_dec(&___nl__im__196, ___get_global_const(216), ___nl__im__197);
#line 473
c_rt_lib0move(&___nl__string__199,___get_global_const(246));
#line 473
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__199, ___nl__im__196));
#line 473
c_rt_lib0clear(&___nl__im__196);
#line 473
c_rt_lib0clear(&___nl__im__197);
#line 473
//clear ___nl__bool__198;
#line 473
c_rt_lib0clear(&___nl__string__199);
#line 474
c_rt_lib0move(&___nl__im__201, module_checker_priv0save_block(___ref___im__1));
#line 474
c_rt_lib0copy(&___nl__im__200, ___nl__im__201);
#line 474
c_rt_lib0hash_set_value_dec(&___nl__im__187, ___get_global_const(321), ___nl__im__200);
#line 474
c_rt_lib0clear(&___nl__im__200);
#line 474
c_rt_lib0clear(&___nl__im__201);
#line 475
c_rt_lib0move(&___nl__im__203, c_rt_lib0hash_get_value_dec(___nl__im__189, ___get_global_const(518)));
#line 475
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__203, ___get_global_const(219)));
#line 475
c_rt_lib0clear(&___nl__im__203);
#line 475
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__202, ___get_global_const(72));
#line 475
if(___nl__bool__204){ goto label_42;}
#line 476
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__202, ___get_global_const(219));
#line 476
if(___nl__bool__204){ goto label_43;}
#line 476
c_rt_lib0move(&___nl__im__205,___get_global_const(16));
#line 476
c_rt_lib0move(&___nl__im__205, c_rt_lib0array_mk(2, ___nl__im__205, ___nl__im__202));
#line 476
nl_die_arg(___nl__im__205);
#line 475
label_42:
;
#line 476
goto label_41;
#line 476
label_43:
;
#line 476
c_rt_lib0move(&___nl__im__207, c_rt_lib0priv_as(___nl__im__202, ___get_global_const(219)));
#line 476
c_rt_lib0copy(&___nl__im__206, ___nl__im__207);
#line 477
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__206, ___get_global_const(453)));
#line 477
___nl__bool__209 = false;
#line 477
___nl__bool__210 = true;
#line 477
___nl__bool__211 = true;
#line 477
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__208, ___nl__bool__209, ___nl__bool__210, ___nl__bool__211, ___ref___im__1));
#line 477
c_rt_lib0clear(&___nl__im__208);
#line 477
//clear ___nl__bool__209;
#line 477
//clear ___nl__bool__210;
#line 477
//clear ___nl__bool__211;
#line 478
goto label_41;
#line 478
label_41:
;
#line 479
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__189, ___get_global_const(227)));
#line 479
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__212, ___ref___im__1));
#line 479
c_rt_lib0clear(&___nl__im__212);
#line 480
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(246)));
#line 480
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__214, ___get_global_const(216)));
#line 480
___nl__bool__213 = c_rt_lib0check_true_native(___nl__im__215);
#line 480
c_rt_lib0clear(&___nl__im__214);
#line 480
c_rt_lib0clear(&___nl__im__215);
#line 480
___nl__bool__213 = !___nl__bool__213;
#line 480
___nl__bool__213 = !___nl__bool__213;
#line 480
if(___nl__bool__213){ goto label_45;}
#line 480
___nl__bool__186 = false;
#line 480
goto label_44;
#line 480
label_45:
;
#line 480
label_44:
;
#line 480
//clear ___nl__bool__213;
#line 481
c_rt_lib0delete(module_checker_priv0update_inits(___ref___im__1, &___nl__im__187));
#line 482
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_get_value_dec(___nl__im__187, ___get_global_const(321)));
#line 482
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__216));
#line 482
c_rt_lib0clear(&___nl__im__216);
#line 483
c_rt_lib0move(&___nl__im__217,___get_global_const(321));
#line 483
c_rt_lib0move(&___nl__im__217, c_rt_lib0get_ref_hash(___nl__im__187, ___nl__im__217));
#line 483
c_rt_lib0delete(module_checker_priv0restore_block(___ref___im__1, &___nl__im__217));
#line 483
c_rt_lib0move(&___nl__string__218,___get_global_const(321));
#line 483
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__187, ___nl__string__218, ___nl__im__217));
#line 483
c_rt_lib0clear(&___nl__im__217);
#line 483
c_rt_lib0clear(&___nl__string__218);
#line 483
c_rt_lib0clear(&___nl__im__189);
#line 484
___nl__int__190 = ___nl__int__190 + ___nl__int__191;
#line 484
goto label_40;
#line 484
label_38:
;
#line 485
c_rt_lib0move(&___nl__im__219,___get_global_const(246));
#line 485
c_rt_lib0move(&___nl__im__219, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__219));
#line 485
c_rt_lib0move(&___nl__im__220, c_rt_lib0bool_to_nl_native(___nl__bool__186));
#line 485
c_rt_lib0hash_set_value_dec(&___nl__im__219, ___get_global_const(216), ___nl__im__220);
#line 485
c_rt_lib0move(&___nl__string__221,___get_global_const(246));
#line 485
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__221, ___nl__im__219));
#line 485
c_rt_lib0clear(&___nl__im__219);
#line 485
c_rt_lib0clear(&___nl__im__220);
#line 485
c_rt_lib0clear(&___nl__string__221);
#line 486
c_rt_lib0delete(module_checker_priv0flush_inits(___ref___im__1, &___nl__im__187));
#line 487
goto label_3;
#line 487
label_16:
;
#line 487
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(219)));
#line 487
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 488
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__222, ___ref___im__1));
#line 489
goto label_3;
#line 489
label_17:
;
#line 489
c_rt_lib0move(&___nl__im__225, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(246)));
#line 489
c_rt_lib0copy(&___nl__im__224, ___nl__im__225);
#line 490
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__224, ___ref___im__1));
#line 491
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(246)));
#line 491
c_rt_lib0move(&___nl__im__226, c_rt_lib0hash_get_value_dec(___nl__im__227, ___get_global_const(277)));
#line 491
c_rt_lib0clear(&___nl__im__227);
#line 491
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__226, ___get_global_const(219));
#line 491
if(___nl__bool__228){ goto label_47;}
#line 493
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__226, ___get_global_const(72));
#line 493
if(___nl__bool__228){ goto label_48;}
#line 495
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__226, ___get_global_const(907));
#line 495
if(___nl__bool__228){ goto label_49;}
#line 498
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__226, ___get_global_const(906));
#line 498
if(___nl__bool__228){ goto label_50;}
#line 501
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__226, ___get_global_const(905));
#line 501
if(___nl__bool__228){ goto label_51;}
#line 501
c_rt_lib0move(&___nl__im__229,___get_global_const(16));
#line 501
c_rt_lib0move(&___nl__im__229, c_rt_lib0array_mk(2, ___nl__im__229, ___nl__im__226));
#line 501
nl_die_arg(___nl__im__229);
#line 491
label_47:
;
#line 492
c_rt_lib0move(&___nl__im__231, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 492
___nl__bool__230 = c_rt_lib0priv_is(___nl__im__231, ___get_global_const(948));
#line 492
c_rt_lib0clear(&___nl__im__231);
#line 492
___nl__bool__230 = !___nl__bool__230;
#line 492
if(___nl__bool__230){ goto label_53;}
#line 492
c_rt_lib0move(&___nl__im__232,___get_global_const(51));
#line 492
c_rt_lib0move(&___nl__im__232, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__232));
#line 492
c_rt_lib0move(&___nl__im__233,___get_global_const(958));
#line 492
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__232, ___nl__im__233));
#line 492
c_rt_lib0move(&___nl__string__234,___get_global_const(51));
#line 492
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__234, ___nl__im__232));
#line 492
c_rt_lib0clear(&___nl__im__232);
#line 492
c_rt_lib0clear(&___nl__im__233);
#line 492
c_rt_lib0clear(&___nl__string__234);
#line 492
goto label_52;
#line 492
label_53:
;
#line 492
label_52:
;
#line 492
//clear ___nl__bool__230;
#line 493
goto label_46;
#line 493
label_48:
;
#line 494
c_rt_lib0move(&___nl__im__235,___get_global_const(246));
#line 494
c_rt_lib0move(&___nl__im__235, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__235));
#line 494
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 494
___nl__bool__238 = c_rt_lib0priv_is(___nl__im__239, ___get_global_const(948));
#line 494
c_rt_lib0clear(&___nl__im__239);
#line 494
if(___nl__bool__238){ goto label_55;}
#line 494
c_rt_lib0move(&___nl__im__237, c_rt_lib0ov_mk_none(___get_global_const(907)));
#line 494
goto label_54;
#line 494
label_55:
;
#line 494
c_rt_lib0move(&___nl__im__237, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 494
label_54:
;
#line 494
//clear ___nl__bool__238;
#line 494
c_rt_lib0copy(&___nl__im__236, ___nl__im__237);
#line 494
c_rt_lib0hash_set_value_dec(&___nl__im__235, ___get_global_const(277), ___nl__im__236);
#line 494
c_rt_lib0move(&___nl__string__240,___get_global_const(246));
#line 494
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__240, ___nl__im__235));
#line 494
c_rt_lib0clear(&___nl__im__235);
#line 494
c_rt_lib0clear(&___nl__im__236);
#line 494
c_rt_lib0clear(&___nl__im__237);
#line 494
c_rt_lib0clear(&___nl__string__240);
#line 495
goto label_46;
#line 495
label_49:
;
#line 496
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 496
___nl__bool__241 = c_rt_lib0priv_is(___nl__im__242, ___get_global_const(948));
#line 496
c_rt_lib0clear(&___nl__im__242);
#line 496
___nl__bool__241 = !___nl__bool__241;
#line 496
if(___nl__bool__241){ goto label_57;}
#line 496
c_rt_lib0move(&___nl__im__243,___get_global_const(51));
#line 496
c_rt_lib0move(&___nl__im__243, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__243));
#line 496
c_rt_lib0move(&___nl__im__244,___get_global_const(959));
#line 496
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__243, ___nl__im__244));
#line 496
c_rt_lib0move(&___nl__string__245,___get_global_const(51));
#line 496
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__245, ___nl__im__243));
#line 496
c_rt_lib0clear(&___nl__im__243);
#line 496
c_rt_lib0clear(&___nl__im__244);
#line 496
c_rt_lib0clear(&___nl__string__245);
#line 496
goto label_56;
#line 496
label_57:
;
#line 496
label_56:
;
#line 496
//clear ___nl__bool__241;
#line 497
c_rt_lib0move(&___nl__im__246,___get_global_const(246));
#line 497
c_rt_lib0move(&___nl__im__246, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__246));
#line 497
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 497
___nl__bool__249 = c_rt_lib0priv_is(___nl__im__250, ___get_global_const(948));
#line 497
c_rt_lib0clear(&___nl__im__250);
#line 497
if(___nl__bool__249){ goto label_59;}
#line 497
c_rt_lib0move(&___nl__im__248, c_rt_lib0ov_mk_none(___get_global_const(907)));
#line 497
goto label_58;
#line 497
label_59:
;
#line 497
c_rt_lib0move(&___nl__im__248, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 497
label_58:
;
#line 497
//clear ___nl__bool__249;
#line 497
c_rt_lib0copy(&___nl__im__247, ___nl__im__248);
#line 497
c_rt_lib0hash_set_value_dec(&___nl__im__246, ___get_global_const(277), ___nl__im__247);
#line 497
c_rt_lib0move(&___nl__string__251,___get_global_const(246));
#line 497
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__251, ___nl__im__246));
#line 497
c_rt_lib0clear(&___nl__im__246);
#line 497
c_rt_lib0clear(&___nl__im__247);
#line 497
c_rt_lib0clear(&___nl__im__248);
#line 497
c_rt_lib0clear(&___nl__string__251);
#line 498
goto label_46;
#line 498
label_50:
;
#line 499
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 499
___nl__bool__252 = c_rt_lib0priv_is(___nl__im__253, ___get_global_const(948));
#line 499
c_rt_lib0clear(&___nl__im__253);
#line 499
___nl__bool__252 = !___nl__bool__252;
#line 499
___nl__bool__252 = !___nl__bool__252;
#line 499
if(___nl__bool__252){ goto label_61;}
#line 499
c_rt_lib0move(&___nl__im__254,___get_global_const(51));
#line 499
c_rt_lib0move(&___nl__im__254, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__254));
#line 499
c_rt_lib0move(&___nl__im__255,___get_global_const(960));
#line 499
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__254, ___nl__im__255));
#line 499
c_rt_lib0move(&___nl__string__256,___get_global_const(51));
#line 499
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__256, ___nl__im__254));
#line 499
c_rt_lib0clear(&___nl__im__254);
#line 499
c_rt_lib0clear(&___nl__im__255);
#line 499
c_rt_lib0clear(&___nl__string__256);
#line 499
goto label_60;
#line 499
label_61:
;
#line 499
label_60:
;
#line 499
//clear ___nl__bool__252;
#line 500
c_rt_lib0move(&___nl__im__257,___get_global_const(246));
#line 500
c_rt_lib0move(&___nl__im__257, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__257));
#line 500
c_rt_lib0move(&___nl__im__261, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 500
___nl__bool__260 = c_rt_lib0priv_is(___nl__im__261, ___get_global_const(948));
#line 500
c_rt_lib0clear(&___nl__im__261);
#line 500
if(___nl__bool__260){ goto label_63;}
#line 500
c_rt_lib0move(&___nl__im__259, c_rt_lib0ov_mk_none(___get_global_const(907)));
#line 500
goto label_62;
#line 500
label_63:
;
#line 500
c_rt_lib0move(&___nl__im__259, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 500
label_62:
;
#line 500
//clear ___nl__bool__260;
#line 500
c_rt_lib0copy(&___nl__im__258, ___nl__im__259);
#line 500
c_rt_lib0hash_set_value_dec(&___nl__im__257, ___get_global_const(277), ___nl__im__258);
#line 500
c_rt_lib0move(&___nl__string__262,___get_global_const(246));
#line 500
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__262, ___nl__im__257));
#line 500
c_rt_lib0clear(&___nl__im__257);
#line 500
c_rt_lib0clear(&___nl__im__258);
#line 500
c_rt_lib0clear(&___nl__im__259);
#line 500
c_rt_lib0clear(&___nl__string__262);
#line 501
goto label_46;
#line 501
label_51:
;
#line 502
c_rt_lib0move(&___nl__im__264, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_const(219)));
#line 502
___nl__bool__263 = c_rt_lib0priv_is(___nl__im__264, ___get_global_const(948));
#line 502
c_rt_lib0clear(&___nl__im__264);
#line 502
___nl__bool__263 = !___nl__bool__263;
#line 502
___nl__bool__263 = !___nl__bool__263;
#line 502
if(___nl__bool__263){ goto label_65;}
#line 502
c_rt_lib0move(&___nl__im__265,___get_global_const(51));
#line 502
c_rt_lib0move(&___nl__im__265, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__265));
#line 502
c_rt_lib0move(&___nl__im__266,___get_global_const(961));
#line 502
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__265, ___nl__im__266));
#line 502
c_rt_lib0move(&___nl__string__267,___get_global_const(51));
#line 502
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__267, ___nl__im__265));
#line 502
c_rt_lib0clear(&___nl__im__265);
#line 502
c_rt_lib0clear(&___nl__im__266);
#line 502
c_rt_lib0clear(&___nl__string__267);
#line 502
goto label_64;
#line 502
label_65:
;
#line 502
label_64:
;
#line 502
//clear ___nl__bool__263;
#line 503
goto label_46;
#line 503
label_46:
;
#line 504
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(756)));
#line 504
c_rt_lib0move(&___nl__im__272, c_rt_lib0init_iter(___nl__im__268));
#line 504
label_68:
;
#line 504
___nl__bool__270 = c_rt_lib0is_end_hash(___nl__im__272);
#line 504
if(___nl__bool__270){ goto label_66;}
#line 504
c_rt_lib0move(&___nl__im__269, c_rt_lib0get_key_iter(___nl__im__272));
#line 504
c_rt_lib0move(&___nl__im__271, c_rt_lib0hash_get_value(___nl__im__268, ___nl__im__269));
#line 505
c_rt_lib0move(&___nl__im__273,___get_global_const(756));
#line 505
c_rt_lib0move(&___nl__im__273, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__273));
#line 505
c_rt_lib0move(&___nl__im__274, c_rt_lib0get_ref_hash(___nl__im__273, ___nl__im__269));
#line 505
___nl__bool__276 = true;
#line 505
c_rt_lib0move(&___nl__im__275, c_rt_lib0bool_to_nl_native(___nl__bool__276));
#line 505
c_rt_lib0hash_set_value_dec(&___nl__im__274, ___get_global_const(903), ___nl__im__275);
#line 505
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__273, ___nl__im__269, ___nl__im__274));
#line 505
c_rt_lib0move(&___nl__string__277,___get_global_const(756));
#line 505
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__277, ___nl__im__273));
#line 505
c_rt_lib0clear(&___nl__im__273);
#line 505
c_rt_lib0clear(&___nl__im__274);
#line 505
c_rt_lib0clear(&___nl__im__275);
#line 505
//clear ___nl__bool__276;
#line 505
c_rt_lib0clear(&___nl__string__277);
#line 506
c_rt_lib0move(&___nl__im__272, c_rt_lib0next_iter(___nl__im__272));
#line 506
goto label_68;
#line 506
label_66:
;
#line 507
c_rt_lib0move(&___nl__im__278,___get_global_const(246));
#line 507
c_rt_lib0move(&___nl__im__278, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__278));
#line 507
___nl__bool__280 = true;
#line 507
c_rt_lib0move(&___nl__im__279, c_rt_lib0bool_to_nl_native(___nl__bool__280));
#line 507
c_rt_lib0hash_set_value_dec(&___nl__im__278, ___get_global_const(216), ___nl__im__279);
#line 507
c_rt_lib0move(&___nl__string__281,___get_global_const(246));
#line 507
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__281, ___nl__im__278));
#line 507
c_rt_lib0clear(&___nl__im__278);
#line 507
c_rt_lib0clear(&___nl__im__279);
#line 507
//clear ___nl__bool__280;
#line 507
c_rt_lib0clear(&___nl__string__281);
#line 508
goto label_3;
#line 508
label_18:
;
#line 508
c_rt_lib0move(&___nl__im__283, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(946)));
#line 508
c_rt_lib0copy(&___nl__im__282, ___nl__im__283);
#line 509
c_rt_lib0move(&___nl__im__284, module_checker_priv0save_block(___ref___im__1));
#line 510
___nl__int__286 = 0;
#line 510
___nl__int__287 = 1;
#line 510
___nl__int__288 = c_rt_lib0array_len(___nl__im__282);
#line 510
label_71:
;
#line 510
___nl__int__290 = ___nl__int__286 >= ___nl__int__288;
#line 510
___nl__bool__289 = ___nl__int__290;
#line 510
if(___nl__bool__289){ goto label_69;}
#line 510
c_rt_lib0move(&___nl__im__291, c_rt_lib0array_get(___nl__im__282, ___nl__int__286));
#line 510
c_rt_lib0copy(&___nl__im__285, ___nl__im__291);
#line 511
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__im__285, ___ref___im__1));
#line 511
c_rt_lib0clear(&___nl__im__285);
#line 512
___nl__int__286 = ___nl__int__286 + ___nl__int__287;
#line 512
goto label_71;
#line 512
label_69:
;
#line 513
c_rt_lib0delete(module_checker_priv0load_block(___ref___im__1, ___nl__im__284));
#line 514
goto label_3;
#line 514
label_19:
;
#line 514
c_rt_lib0move(&___nl__im__293, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(247)));
#line 514
c_rt_lib0copy(&___nl__im__292, ___nl__im__293);
#line 515
___nl__int__295 = 0;
#line 515
___nl__int__296 = 1;
#line 515
___nl__int__297 = c_rt_lib0array_len(___nl__im__292);
#line 515
label_74:
;
#line 515
___nl__int__299 = ___nl__int__295 >= ___nl__int__297;
#line 515
___nl__bool__298 = ___nl__int__299;
#line 515
if(___nl__bool__298){ goto label_72;}
#line 515
c_rt_lib0move(&___nl__im__300, c_rt_lib0array_get(___nl__im__292, ___nl__int__295));
#line 515
c_rt_lib0copy(&___nl__im__294, ___nl__im__300);
#line 516
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__294, ___ref___im__1));
#line 516
c_rt_lib0clear(&___nl__im__294);
#line 517
___nl__int__295 = ___nl__int__295 + ___nl__int__296;
#line 517
goto label_74;
#line 517
label_72:
;
#line 518
c_rt_lib0move(&___nl__im__301, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(756)));
#line 518
c_rt_lib0move(&___nl__im__305, c_rt_lib0init_iter(___nl__im__301));
#line 518
label_77:
;
#line 518
___nl__bool__303 = c_rt_lib0is_end_hash(___nl__im__305);
#line 518
if(___nl__bool__303){ goto label_75;}
#line 518
c_rt_lib0move(&___nl__im__302, c_rt_lib0get_key_iter(___nl__im__305));
#line 518
c_rt_lib0move(&___nl__im__304, c_rt_lib0hash_get_value(___nl__im__301, ___nl__im__302));
#line 519
c_rt_lib0move(&___nl__im__306,___get_global_const(756));
#line 519
c_rt_lib0move(&___nl__im__306, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__306));
#line 519
c_rt_lib0move(&___nl__im__307, c_rt_lib0get_ref_hash(___nl__im__306, ___nl__im__302));
#line 519
___nl__bool__309 = true;
#line 519
c_rt_lib0move(&___nl__im__308, c_rt_lib0bool_to_nl_native(___nl__bool__309));
#line 519
c_rt_lib0hash_set_value_dec(&___nl__im__307, ___get_global_const(903), ___nl__im__308);
#line 519
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__306, ___nl__im__302, ___nl__im__307));
#line 519
c_rt_lib0move(&___nl__string__310,___get_global_const(756));
#line 519
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__310, ___nl__im__306));
#line 519
c_rt_lib0clear(&___nl__im__306);
#line 519
c_rt_lib0clear(&___nl__im__307);
#line 519
c_rt_lib0clear(&___nl__im__308);
#line 519
//clear ___nl__bool__309;
#line 519
c_rt_lib0clear(&___nl__string__310);
#line 520
c_rt_lib0move(&___nl__im__305, c_rt_lib0next_iter(___nl__im__305));
#line 520
goto label_77;
#line 520
label_75:
;
#line 521
c_rt_lib0move(&___nl__im__311,___get_global_const(246));
#line 521
c_rt_lib0move(&___nl__im__311, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__311));
#line 521
___nl__bool__313 = true;
#line 521
c_rt_lib0move(&___nl__im__312, c_rt_lib0bool_to_nl_native(___nl__bool__313));
#line 521
c_rt_lib0hash_set_value_dec(&___nl__im__311, ___get_global_const(216), ___nl__im__312);
#line 521
c_rt_lib0move(&___nl__string__314,___get_global_const(246));
#line 521
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__314, ___nl__im__311));
#line 521
c_rt_lib0clear(&___nl__im__311);
#line 521
c_rt_lib0clear(&___nl__im__312);
#line 521
//clear ___nl__bool__313;
#line 521
c_rt_lib0clear(&___nl__string__314);
#line 522
goto label_3;
#line 522
label_20:
;
#line 522
c_rt_lib0move(&___nl__im__316, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(252)));
#line 522
c_rt_lib0copy(&___nl__im__315, ___nl__im__316);
#line 523
___nl__bool__317 = false;
#line 523
___nl__bool__318 = false;
#line 523
c_rt_lib0move(&___nl__im__320, c_rt_lib0hash_get_value_dec(___nl__im__315, ___get_global_const(219)));
#line 523
___nl__bool__319 = c_rt_lib0priv_is(___nl__im__320, ___get_global_const(219));
#line 523
c_rt_lib0clear(&___nl__im__320);
#line 523
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__315, ___nl__bool__317, ___nl__bool__318, ___nl__bool__319, ___ref___im__1));
#line 523
//clear ___nl__bool__317;
#line 523
//clear ___nl__bool__318;
#line 523
//clear ___nl__bool__319;
#line 524
goto label_3;
#line 524
label_21:
;
#line 524
c_rt_lib0move(&___nl__im__322, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(947)));
#line 524
c_rt_lib0copy(&___nl__im__321, ___nl__im__322);
#line 525
___nl__bool__323 = c_rt_lib0priv_is(___nl__im__321, ___get_global_const(687));
#line 525
if(___nl__bool__323){ goto label_79;}
#line 527
___nl__bool__323 = c_rt_lib0priv_is(___nl__im__321, ___get_global_const(962));
#line 527
if(___nl__bool__323){ goto label_80;}
#line 529
___nl__bool__323 = c_rt_lib0priv_is(___nl__im__321, ___get_global_const(963));
#line 529
if(___nl__bool__323){ goto label_81;}
#line 529
c_rt_lib0move(&___nl__im__324,___get_global_const(16));
#line 529
c_rt_lib0move(&___nl__im__324, c_rt_lib0array_mk(2, ___nl__im__324, ___nl__im__321));
#line 529
nl_die_arg(___nl__im__324);
#line 525
label_79:
;
#line 525
c_rt_lib0move(&___nl__im__326, c_rt_lib0priv_as(___nl__im__321, ___get_global_const(687)));
#line 525
c_rt_lib0copy(&___nl__im__325, ___nl__im__326);
#line 526
___nl__bool__327 = false;
#line 526
___nl__bool__328 = false;
#line 526
c_rt_lib0move(&___nl__im__330, c_rt_lib0hash_get_value_dec(___nl__im__325, ___get_global_const(219)));
#line 526
___nl__bool__329 = c_rt_lib0priv_is(___nl__im__330, ___get_global_const(219));
#line 526
c_rt_lib0clear(&___nl__im__330);
#line 526
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__325, ___nl__bool__327, ___nl__bool__328, ___nl__bool__329, ___ref___im__1));
#line 526
//clear ___nl__bool__327;
#line 526
//clear ___nl__bool__328;
#line 526
//clear ___nl__bool__329;
#line 527
goto label_78;
#line 527
label_80:
;
#line 527
c_rt_lib0move(&___nl__im__332, c_rt_lib0priv_as(___nl__im__321, ___get_global_const(962)));
#line 527
c_rt_lib0copy(&___nl__im__331, ___nl__im__332);
#line 528
c_rt_lib0move(&___nl__im__334, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 528
c_rt_lib0move(&___nl__im__335, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__331));
#line 528
c_rt_lib0move(&___nl__im__337, c_rt_lib0hash_get_value_dec(___nl__im__331, ___get_global_const(274)));
#line 528
c_rt_lib0move(&___nl__im__336, c_rt_lib0hash_get_value_dec(___nl__im__337, ___get_global_const(205)));
#line 528
c_rt_lib0clear(&___nl__im__337);
#line 528
c_rt_lib0move(&___nl__im__333, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__334, ___get_global_const(219), ___nl__im__335, ___get_global_const(205), ___nl__im__336));
#line 528
c_rt_lib0clear(&___nl__im__334);
#line 528
c_rt_lib0clear(&___nl__im__335);
#line 528
c_rt_lib0clear(&___nl__im__336);
#line 528
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__333, ___ref___im__1));
#line 528
c_rt_lib0clear(&___nl__im__333);
#line 529
goto label_78;
#line 529
label_81:
;
#line 529
c_rt_lib0move(&___nl__im__339, c_rt_lib0priv_as(___nl__im__321, ___get_global_const(963)));
#line 529
c_rt_lib0copy(&___nl__im__338, ___nl__im__339);
#line 530
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__338, ___ref___im__1));
#line 531
goto label_78;
#line 531
label_78:
;
#line 532
goto label_3;
#line 532
label_22:
;
#line 532
c_rt_lib0move(&___nl__im__341, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(177)));
#line 532
c_rt_lib0copy(&___nl__im__340, ___nl__im__341);
#line 533
___nl__bool__342 = c_rt_lib0priv_is(___nl__im__340, ___get_global_const(687));
#line 533
if(___nl__bool__342){ goto label_83;}
#line 535
___nl__bool__342 = c_rt_lib0priv_is(___nl__im__340, ___get_global_const(962));
#line 535
if(___nl__bool__342){ goto label_84;}
#line 537
___nl__bool__342 = c_rt_lib0priv_is(___nl__im__340, ___get_global_const(963));
#line 537
if(___nl__bool__342){ goto label_85;}
#line 537
c_rt_lib0move(&___nl__im__343,___get_global_const(16));
#line 537
c_rt_lib0move(&___nl__im__343, c_rt_lib0array_mk(2, ___nl__im__343, ___nl__im__340));
#line 537
nl_die_arg(___nl__im__343);
#line 533
label_83:
;
#line 533
c_rt_lib0move(&___nl__im__345, c_rt_lib0priv_as(___nl__im__340, ___get_global_const(687)));
#line 533
c_rt_lib0copy(&___nl__im__344, ___nl__im__345);
#line 534
___nl__bool__346 = false;
#line 534
___nl__bool__347 = false;
#line 534
c_rt_lib0move(&___nl__im__349, c_rt_lib0hash_get_value_dec(___nl__im__344, ___get_global_const(219)));
#line 534
___nl__bool__348 = c_rt_lib0priv_is(___nl__im__349, ___get_global_const(219));
#line 534
c_rt_lib0clear(&___nl__im__349);
#line 534
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__im__344, ___nl__bool__346, ___nl__bool__347, ___nl__bool__348, ___ref___im__1));
#line 534
//clear ___nl__bool__346;
#line 534
//clear ___nl__bool__347;
#line 534
//clear ___nl__bool__348;
#line 535
goto label_82;
#line 535
label_84:
;
#line 535
c_rt_lib0move(&___nl__im__351, c_rt_lib0priv_as(___nl__im__340, ___get_global_const(962)));
#line 535
c_rt_lib0copy(&___nl__im__350, ___nl__im__351);
#line 536
c_rt_lib0move(&___nl__im__353, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 536
c_rt_lib0move(&___nl__im__354, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__350));
#line 536
c_rt_lib0move(&___nl__im__356, c_rt_lib0hash_get_value_dec(___nl__im__350, ___get_global_const(274)));
#line 536
c_rt_lib0move(&___nl__im__355, c_rt_lib0hash_get_value_dec(___nl__im__356, ___get_global_const(205)));
#line 536
c_rt_lib0clear(&___nl__im__356);
#line 536
c_rt_lib0move(&___nl__im__352, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__353, ___get_global_const(219), ___nl__im__354, ___get_global_const(205), ___nl__im__355));
#line 536
c_rt_lib0clear(&___nl__im__353);
#line 536
c_rt_lib0clear(&___nl__im__354);
#line 536
c_rt_lib0clear(&___nl__im__355);
#line 536
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__352, ___ref___im__1));
#line 536
c_rt_lib0clear(&___nl__im__352);
#line 537
goto label_82;
#line 537
label_85:
;
#line 537
c_rt_lib0move(&___nl__im__358, c_rt_lib0priv_as(___nl__im__340, ___get_global_const(963)));
#line 537
c_rt_lib0copy(&___nl__im__357, ___nl__im__358);
#line 538
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__357, ___ref___im__1));
#line 539
goto label_82;
#line 539
label_82:
;
#line 540
goto label_3;
#line 540
label_23:
;
#line 541
goto label_3;
#line 541
label_3:
;
#line 541
c_rt_lib0clear(&___nl__im__0);
#line 541
c_rt_lib0clear(&___nl__im__19);
#line 541
//clear ___nl__bool__20;
#line 541
c_rt_lib0clear(&___nl__im__21);
#line 541
c_rt_lib0clear(&___nl__im__22);
#line 541
c_rt_lib0clear(&___nl__im__23);
#line 541
c_rt_lib0clear(&___nl__im__25);
#line 541
//clear ___nl__bool__29;
#line 541
c_rt_lib0clear(&___nl__im__32);
#line 541
c_rt_lib0clear(&___nl__im__33);
#line 541
//clear ___nl__int__34;
#line 541
//clear ___nl__int__35;
#line 541
//clear ___nl__int__36;
#line 541
//clear ___nl__bool__37;
#line 541
//clear ___nl__int__38;
#line 541
c_rt_lib0clear(&___nl__im__39);
#line 541
c_rt_lib0clear(&___nl__im__66);
#line 541
c_rt_lib0clear(&___nl__im__67);
#line 541
c_rt_lib0clear(&___nl__im__68);
#line 541
c_rt_lib0clear(&___nl__im__69);
#line 541
//clear ___nl__bool__70;
#line 541
c_rt_lib0clear(&___nl__im__71);
#line 541
c_rt_lib0clear(&___nl__im__72);
#line 541
c_rt_lib0clear(&___nl__im__73);
#line 541
c_rt_lib0clear(&___nl__im__74);
#line 541
c_rt_lib0clear(&___nl__im__75);
#line 541
c_rt_lib0clear(&___nl__im__89);
#line 541
c_rt_lib0clear(&___nl__im__90);
#line 541
c_rt_lib0clear(&___nl__im__91);
#line 541
c_rt_lib0clear(&___nl__im__104);
#line 541
c_rt_lib0clear(&___nl__im__105);
#line 541
c_rt_lib0clear(&___nl__im__106);
#line 541
c_rt_lib0clear(&___nl__im__124);
#line 541
c_rt_lib0clear(&___nl__im__125);
#line 541
c_rt_lib0clear(&___nl__im__126);
#line 541
c_rt_lib0clear(&___nl__im__129);
#line 541
c_rt_lib0clear(&___nl__im__130);
#line 541
c_rt_lib0clear(&___nl__im__131);
#line 541
c_rt_lib0clear(&___nl__im__144);
#line 541
c_rt_lib0clear(&___nl__im__145);
#line 541
c_rt_lib0clear(&___nl__im__146);
#line 541
c_rt_lib0clear(&___nl__im__155);
#line 541
c_rt_lib0clear(&___nl__im__156);
#line 541
c_rt_lib0clear(&___nl__im__158);
#line 541
c_rt_lib0clear(&___nl__im__164);
#line 541
c_rt_lib0clear(&___nl__im__165);
#line 541
c_rt_lib0clear(&___nl__im__167);
#line 541
c_rt_lib0clear(&___nl__im__183);
#line 541
c_rt_lib0clear(&___nl__im__184);
#line 541
//clear ___nl__bool__186;
#line 541
c_rt_lib0clear(&___nl__im__187);
#line 541
c_rt_lib0clear(&___nl__im__188);
#line 541
c_rt_lib0clear(&___nl__im__189);
#line 541
//clear ___nl__int__190;
#line 541
//clear ___nl__int__191;
#line 541
//clear ___nl__int__192;
#line 541
//clear ___nl__bool__193;
#line 541
//clear ___nl__int__194;
#line 541
c_rt_lib0clear(&___nl__im__195);
#line 541
c_rt_lib0clear(&___nl__im__202);
#line 541
//clear ___nl__bool__204;
#line 541
c_rt_lib0clear(&___nl__im__205);
#line 541
c_rt_lib0clear(&___nl__im__206);
#line 541
c_rt_lib0clear(&___nl__im__207);
#line 541
c_rt_lib0clear(&___nl__im__222);
#line 541
c_rt_lib0clear(&___nl__im__223);
#line 541
c_rt_lib0clear(&___nl__im__224);
#line 541
c_rt_lib0clear(&___nl__im__225);
#line 541
c_rt_lib0clear(&___nl__im__226);
#line 541
//clear ___nl__bool__228;
#line 541
c_rt_lib0clear(&___nl__im__229);
#line 541
c_rt_lib0clear(&___nl__im__268);
#line 541
c_rt_lib0clear(&___nl__im__269);
#line 541
//clear ___nl__bool__270;
#line 541
c_rt_lib0clear(&___nl__im__271);
#line 541
c_rt_lib0clear(&___nl__im__272);
#line 541
c_rt_lib0clear(&___nl__im__282);
#line 541
c_rt_lib0clear(&___nl__im__283);
#line 541
c_rt_lib0clear(&___nl__im__284);
#line 541
c_rt_lib0clear(&___nl__im__285);
#line 541
//clear ___nl__int__286;
#line 541
//clear ___nl__int__287;
#line 541
//clear ___nl__int__288;
#line 541
//clear ___nl__bool__289;
#line 541
//clear ___nl__int__290;
#line 541
c_rt_lib0clear(&___nl__im__291);
#line 541
c_rt_lib0clear(&___nl__im__292);
#line 541
c_rt_lib0clear(&___nl__im__293);
#line 541
c_rt_lib0clear(&___nl__im__294);
#line 541
//clear ___nl__int__295;
#line 541
//clear ___nl__int__296;
#line 541
//clear ___nl__int__297;
#line 541
//clear ___nl__bool__298;
#line 541
//clear ___nl__int__299;
#line 541
c_rt_lib0clear(&___nl__im__300);
#line 541
c_rt_lib0clear(&___nl__im__301);
#line 541
c_rt_lib0clear(&___nl__im__302);
#line 541
//clear ___nl__bool__303;
#line 541
c_rt_lib0clear(&___nl__im__304);
#line 541
c_rt_lib0clear(&___nl__im__305);
#line 541
c_rt_lib0clear(&___nl__im__315);
#line 541
c_rt_lib0clear(&___nl__im__316);
#line 541
c_rt_lib0clear(&___nl__im__321);
#line 541
c_rt_lib0clear(&___nl__im__322);
#line 541
//clear ___nl__bool__323;
#line 541
c_rt_lib0clear(&___nl__im__324);
#line 541
c_rt_lib0clear(&___nl__im__325);
#line 541
c_rt_lib0clear(&___nl__im__326);
#line 541
c_rt_lib0clear(&___nl__im__331);
#line 541
c_rt_lib0clear(&___nl__im__332);
#line 541
c_rt_lib0clear(&___nl__im__338);
#line 541
c_rt_lib0clear(&___nl__im__339);
#line 541
c_rt_lib0clear(&___nl__im__340);
#line 541
c_rt_lib0clear(&___nl__im__341);
#line 541
//clear ___nl__bool__342;
#line 541
c_rt_lib0clear(&___nl__im__343);
#line 541
c_rt_lib0clear(&___nl__im__344);
#line 541
c_rt_lib0clear(&___nl__im__345);
#line 541
c_rt_lib0clear(&___nl__im__350);
#line 541
c_rt_lib0clear(&___nl__im__351);
#line 541
c_rt_lib0clear(&___nl__im__357);
#line 541
c_rt_lib0clear(&___nl__im__358);
#line 541
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
#line 545
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 545
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(464));
#line 545
c_rt_lib0clear(&___nl__im__3);
#line 545
___nl__bool__2 = !___nl__bool__2;
#line 545
if(___nl__bool__2){ goto label_2;}
#line 546
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 546
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 546
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(464)));
#line 546
c_rt_lib0clear(&___nl__im__5);
#line 546
c_rt_lib0clear(&___nl__im__6);
#line 546
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(266)));
#line 546
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__4, ___nl__im__7, ___ref___im__1));
#line 546
c_rt_lib0clear(&___nl__im__4);
#line 546
c_rt_lib0clear(&___nl__im__7);
#line 547
c_rt_lib0clear(&___nl__im__0);
#line 547
//clear ___nl__bool__2;
#line 547
return NULL;
#line 548
goto label_1;
#line 548
label_2:
;
#line 548
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 548
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(234));
#line 548
c_rt_lib0clear(&___nl__im__8);
#line 548
___nl__bool__2 = !___nl__bool__2;
#line 548
if(___nl__bool__2){ goto label_3;}
#line 549
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 549
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 549
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(234)));
#line 549
c_rt_lib0clear(&___nl__im__10);
#line 549
c_rt_lib0clear(&___nl__im__11);
#line 550
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(515)));
#line 550
c_rt_lib0move(&___nl__im__14,___get_global_const(533));
#line 550
___nl__bool__12 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 550
c_rt_lib0clear(&___nl__im__13);
#line 550
c_rt_lib0clear(&___nl__im__14);
#line 550
if(___nl__bool__12){ goto label_8;}
#line 550
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(515)));
#line 550
c_rt_lib0move(&___nl__im__16,___get_global_const(964));
#line 550
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 550
c_rt_lib0clear(&___nl__im__15);
#line 550
c_rt_lib0clear(&___nl__im__16);
#line 550
label_8:
;
#line 550
if(___nl__bool__12){ goto label_7;}
#line 550
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(515)));
#line 550
c_rt_lib0move(&___nl__im__18,___get_global_const(965));
#line 550
___nl__bool__12 = c_rt_lib0eq(___nl__im__17, ___nl__im__18);
#line 550
c_rt_lib0clear(&___nl__im__17);
#line 550
c_rt_lib0clear(&___nl__im__18);
#line 550
label_7:
;
#line 550
if(___nl__bool__12){ goto label_6;}
#line 550
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(515)));
#line 550
c_rt_lib0move(&___nl__im__20,___get_global_const(966));
#line 550
___nl__bool__12 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 550
c_rt_lib0clear(&___nl__im__19);
#line 550
c_rt_lib0clear(&___nl__im__20);
#line 550
label_6:
;
#line 550
___nl__bool__12 = !___nl__bool__12;
#line 550
if(___nl__bool__12){ goto label_5;}
#line 551
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(274)));
#line 551
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__21, ___ref___im__1));
#line 551
c_rt_lib0clear(&___nl__im__21);
#line 552
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(275)));
#line 552
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__22, ___ref___im__1));
#line 552
c_rt_lib0clear(&___nl__im__22);
#line 553
c_rt_lib0clear(&___nl__im__0);
#line 553
//clear ___nl__bool__2;
#line 553
c_rt_lib0clear(&___nl__im__9);
#line 553
//clear ___nl__bool__12;
#line 553
return NULL;
#line 554
goto label_4;
#line 554
label_5:
;
#line 554
label_4:
;
#line 554
//clear ___nl__bool__12;
#line 555
goto label_1;
#line 555
label_3:
;
#line 555
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 555
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__23, ___get_global_const(967));
#line 555
c_rt_lib0clear(&___nl__im__23);
#line 555
___nl__bool__2 = !___nl__bool__2;
#line 555
if(___nl__bool__2){ goto label_9;}
#line 556
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 556
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 556
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(967)));
#line 556
c_rt_lib0clear(&___nl__im__25);
#line 556
c_rt_lib0clear(&___nl__im__26);
#line 556
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__24, ___ref___im__1));
#line 556
c_rt_lib0clear(&___nl__im__24);
#line 557
c_rt_lib0clear(&___nl__im__0);
#line 557
//clear ___nl__bool__2;
#line 557
c_rt_lib0clear(&___nl__im__9);
#line 557
return NULL;
#line 558
goto label_1;
#line 558
label_9:
;
#line 558
label_1:
;
#line 558
//clear ___nl__bool__2;
#line 558
c_rt_lib0clear(&___nl__im__9);
#line 559
c_rt_lib0move(&___nl__im__27,___get_global_const(51));
#line 559
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__27));
#line 559
c_rt_lib0move(&___nl__im__28,___get_global_const(968));
#line 559
c_rt_lib0delete(module_checker_priv0add_error(&___nl__im__27, ___nl__im__28));
#line 559
c_rt_lib0move(&___nl__string__29,___get_global_const(51));
#line 559
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__29, ___nl__im__27));
#line 559
c_rt_lib0clear(&___nl__im__27);
#line 559
c_rt_lib0clear(&___nl__im__28);
#line 559
c_rt_lib0clear(&___nl__string__29);
#line 559
c_rt_lib0clear(&___nl__im__0);
#line 559
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
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
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
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
INT  ___nl__int__37 = 0;
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
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
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
bool  ___nl__bool__104 = false;
ImmT  ___nl__string__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
#line 563
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 563
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(969));
#line 563
if(___nl__bool__3){ goto label_2;}
#line 567
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(967));
#line 567
if(___nl__bool__3){ goto label_3;}
#line 569
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(518));
#line 569
if(___nl__bool__3){ goto label_4;}
#line 571
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(222));
#line 571
if(___nl__bool__3){ goto label_5;}
#line 572
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(528));
#line 572
if(___nl__bool__3){ goto label_6;}
#line 573
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(948));
#line 573
if(___nl__bool__3){ goto label_7;}
#line 574
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(970));
#line 574
if(___nl__bool__3){ goto label_8;}
#line 575
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(230));
#line 575
if(___nl__bool__3){ goto label_9;}
#line 579
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(231));
#line 579
if(___nl__bool__3){ goto label_10;}
#line 584
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(464));
#line 584
if(___nl__bool__3){ goto label_11;}
#line 586
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(234));
#line 586
if(___nl__bool__3){ goto label_12;}
#line 598
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(971));
#line 598
if(___nl__bool__3){ goto label_13;}
#line 600
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(972));
#line 600
if(___nl__bool__3){ goto label_14;}
#line 602
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(928));
#line 602
if(___nl__bool__3){ goto label_15;}
#line 614
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(973));
#line 614
if(___nl__bool__3){ goto label_16;}
#line 616
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(974));
#line 616
if(___nl__bool__3){ goto label_17;}
#line 616
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 616
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 616
nl_die_arg(___nl__im__4);
#line 563
label_2:
;
#line 563
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(969)));
#line 563
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 564
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(975)));
#line 564
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__7, ___ref___im__1));
#line 564
c_rt_lib0clear(&___nl__im__7);
#line 565
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(976)));
#line 565
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__8, ___ref___im__1));
#line 565
c_rt_lib0clear(&___nl__im__8);
#line 566
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(977)));
#line 566
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__9, ___ref___im__1));
#line 566
c_rt_lib0clear(&___nl__im__9);
#line 567
goto label_1;
#line 567
label_3:
;
#line 567
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(967)));
#line 567
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 568
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__10, ___ref___im__1));
#line 569
goto label_1;
#line 569
label_4:
;
#line 569
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(518)));
#line 569
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 570
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(464)));
#line 570
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__14, ___ref___im__1));
#line 570
c_rt_lib0clear(&___nl__im__14);
#line 571
goto label_1;
#line 571
label_5:
;
#line 571
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(222)));
#line 571
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 572
goto label_1;
#line 572
label_6:
;
#line 572
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(528)));
#line 572
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 573
goto label_1;
#line 573
label_7:
;
#line 574
goto label_1;
#line 574
label_8:
;
#line 574
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(970)));
#line 574
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 575
goto label_1;
#line 575
label_9:
;
#line 575
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(230)));
#line 575
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 576
___nl__int__24 = 0;
#line 576
___nl__int__25 = 1;
#line 576
___nl__int__26 = c_rt_lib0array_len(___nl__im__21);
#line 576
label_20:
;
#line 576
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 576
___nl__bool__27 = ___nl__int__28;
#line 576
if(___nl__bool__27){ goto label_18;}
#line 576
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__21, ___nl__int__24));
#line 576
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 577
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__23, ___ref___im__1));
#line 577
c_rt_lib0clear(&___nl__im__23);
#line 578
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 578
goto label_20;
#line 578
label_18:
;
#line 579
goto label_1;
#line 579
label_10:
;
#line 579
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(231)));
#line 579
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 580
___nl__int__33 = 0;
#line 580
___nl__int__34 = 1;
#line 580
___nl__int__35 = c_rt_lib0array_len(___nl__im__30);
#line 580
label_23:
;
#line 580
___nl__int__37 = ___nl__int__33 >= ___nl__int__35;
#line 580
___nl__bool__36 = ___nl__int__37;
#line 580
if(___nl__bool__36){ goto label_21;}
#line 580
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__30, ___nl__int__33));
#line 580
c_rt_lib0copy(&___nl__im__32, ___nl__im__38);
#line 581
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(370)));
#line 581
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(219)));
#line 581
c_rt_lib0clear(&___nl__im__40);
#line 581
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(370)));
#line 581
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(219)));
#line 581
c_rt_lib0clear(&___nl__im__42);
#line 581
c_rt_lib0delete(c_rt_lib0priv_as(___nl__im__41, ___get_global_const(970)));
#line 581
c_rt_lib0clear(&___nl__im__39);
#line 581
c_rt_lib0clear(&___nl__im__41);
#line 582
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(224)));
#line 582
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__43, ___ref___im__1));
#line 582
c_rt_lib0clear(&___nl__im__43);
#line 582
c_rt_lib0clear(&___nl__im__32);
#line 583
___nl__int__33 = ___nl__int__33 + ___nl__int__34;
#line 583
goto label_23;
#line 583
label_21:
;
#line 584
goto label_1;
#line 584
label_11:
;
#line 584
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(464)));
#line 584
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 585
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(917)));
#line 585
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__44, ___nl__im__46, ___ref___im__1));
#line 585
c_rt_lib0clear(&___nl__im__46);
#line 586
goto label_1;
#line 586
label_12:
;
#line 586
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(234)));
#line 586
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 587
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(515)));
#line 588
c_rt_lib0move(&___nl__im__51,___get_global_const(978));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__51);
#line 588
c_rt_lib0clear(&___nl__im__51);
#line 588
if(___nl__bool__50){ goto label_30;}
#line 588
c_rt_lib0move(&___nl__im__52,___get_global_const(979));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__52);
#line 588
c_rt_lib0clear(&___nl__im__52);
#line 588
label_30:
;
#line 588
if(___nl__bool__50){ goto label_29;}
#line 588
c_rt_lib0move(&___nl__im__53,___get_global_const(980));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__53);
#line 588
c_rt_lib0clear(&___nl__im__53);
#line 588
label_29:
;
#line 588
if(___nl__bool__50){ goto label_28;}
#line 588
c_rt_lib0move(&___nl__im__54,___get_global_const(981));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__54);
#line 588
c_rt_lib0clear(&___nl__im__54);
#line 588
label_28:
;
#line 588
if(___nl__bool__50){ goto label_27;}
#line 588
c_rt_lib0move(&___nl__im__55,___get_global_const(982));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__55);
#line 588
c_rt_lib0clear(&___nl__im__55);
#line 588
label_27:
;
#line 588
if(___nl__bool__50){ goto label_26;}
#line 588
c_rt_lib0move(&___nl__im__56,___get_global_const(983));
#line 588
___nl__bool__50 = c_rt_lib0eq(___nl__im__49, ___nl__im__56);
#line 588
c_rt_lib0clear(&___nl__im__56);
#line 588
label_26:
;
#line 588
___nl__bool__50 = !___nl__bool__50;
#line 588
if(___nl__bool__50){ goto label_25;}
#line 589
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(274)));
#line 589
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_const(219)));
#line 589
c_rt_lib0clear(&___nl__im__60);
#line 589
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__59, ___get_global_const(464));
#line 589
c_rt_lib0clear(&___nl__im__59);
#line 589
___nl__bool__58 = !___nl__bool__57;
#line 589
if(___nl__bool__58){ goto label_33;}
#line 589
c_rt_lib0move(&___nl__im__61,___get_global_const(978));
#line 589
___nl__bool__57 = c_rt_lib0eq(___nl__im__49, ___nl__im__61);
#line 589
c_rt_lib0clear(&___nl__im__61);
#line 589
label_33:
;
#line 589
//clear ___nl__bool__58;
#line 589
___nl__bool__57 = !___nl__bool__57;
#line 589
if(___nl__bool__57){ goto label_32;}
#line 590
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(274)));
#line 590
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_const(219)));
#line 590
c_rt_lib0clear(&___nl__im__64);
#line 590
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(274)));
#line 590
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(219)));
#line 590
c_rt_lib0clear(&___nl__im__66);
#line 590
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(464)));
#line 590
c_rt_lib0clear(&___nl__im__63);
#line 590
c_rt_lib0clear(&___nl__im__65);
#line 590
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_const(916)));
#line 590
c_rt_lib0delete(module_checker_priv0use_var(___nl__im__62, ___nl__im__67, ___ref___im__1));
#line 590
c_rt_lib0clear(&___nl__im__62);
#line 590
c_rt_lib0clear(&___nl__im__67);
#line 591
goto label_31;
#line 591
label_32:
;
#line 592
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(274)));
#line 592
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__68, ___ref___im__1));
#line 592
c_rt_lib0clear(&___nl__im__68);
#line 593
goto label_31;
#line 593
label_31:
;
#line 593
//clear ___nl__bool__57;
#line 594
goto label_24;
#line 594
label_25:
;
#line 595
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(274)));
#line 595
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__69, ___ref___im__1));
#line 595
c_rt_lib0clear(&___nl__im__69);
#line 596
goto label_24;
#line 596
label_24:
;
#line 596
//clear ___nl__bool__50;
#line 597
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(275)));
#line 597
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__70, ___ref___im__1));
#line 597
c_rt_lib0clear(&___nl__im__70);
#line 598
goto label_1;
#line 598
label_13:
;
#line 598
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(971)));
#line 598
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 599
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_const(224)));
#line 599
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__73, ___ref___im__1));
#line 599
c_rt_lib0clear(&___nl__im__73);
#line 600
goto label_1;
#line 600
label_14:
;
#line 600
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(972)));
#line 600
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 601
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(151)));
#line 601
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(167)));
#line 601
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__76, ___nl__im__77, ___ref___im__1));
#line 601
c_rt_lib0clear(&___nl__im__76);
#line 601
c_rt_lib0clear(&___nl__im__77);
#line 602
goto label_1;
#line 602
label_15:
;
#line 602
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(928)));
#line 602
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 603
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_const(265)));
#line 603
___nl__int__82 = 0;
#line 603
___nl__int__83 = 1;
#line 603
___nl__int__84 = c_rt_lib0array_len(___nl__im__80);
#line 603
label_36:
;
#line 603
___nl__int__86 = ___nl__int__82 >= ___nl__int__84;
#line 603
___nl__bool__85 = ___nl__int__86;
#line 603
if(___nl__bool__85){ goto label_34;}
#line 603
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__80, ___nl__int__82));
#line 603
c_rt_lib0copy(&___nl__im__81, ___nl__im__87);
#line 604
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(266)));
#line 604
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__88, ___get_global_const(72));
#line 604
if(___nl__bool__89){ goto label_38;}
#line 606
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__88, ___get_global_const(40));
#line 606
if(___nl__bool__89){ goto label_39;}
#line 606
c_rt_lib0move(&___nl__im__90,___get_global_const(16));
#line 606
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__90, ___nl__im__88));
#line 606
nl_die_arg(___nl__im__90);
#line 604
label_38:
;
#line 605
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(224)));
#line 605
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__91, ___ref___im__1));
#line 605
c_rt_lib0clear(&___nl__im__91);
#line 606
goto label_37;
#line 606
label_39:
;
#line 607
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(224)));
#line 607
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__im__92, ___ref___im__1));
#line 607
c_rt_lib0clear(&___nl__im__92);
#line 608
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(224)));
#line 608
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__95, ___get_global_const(219)));
#line 608
c_rt_lib0clear(&___nl__im__95);
#line 608
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__94, ___get_global_const(464));
#line 608
c_rt_lib0clear(&___nl__im__94);
#line 608
___nl__bool__93 = !___nl__bool__93;
#line 608
if(___nl__bool__93){ goto label_41;}
#line 609
c_rt_lib0move(&___nl__im__96,___get_global_const(756));
#line 609
c_rt_lib0move(&___nl__im__96, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__96));
#line 609
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(224)));
#line 609
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_const(219)));
#line 609
c_rt_lib0clear(&___nl__im__100);
#line 609
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(224)));
#line 609
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_const(219)));
#line 609
c_rt_lib0clear(&___nl__im__102);
#line 609
c_rt_lib0move(&___nl__im__98, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(464)));
#line 609
c_rt_lib0clear(&___nl__im__99);
#line 609
c_rt_lib0clear(&___nl__im__101);
#line 609
c_rt_lib0move(&___nl__im__97, c_rt_lib0get_ref_hash(___nl__im__96, ___nl__im__98));
#line 609
___nl__bool__104 = true;
#line 609
c_rt_lib0move(&___nl__im__103, c_rt_lib0bool_to_nl_native(___nl__bool__104));
#line 609
c_rt_lib0hash_set_value_dec(&___nl__im__97, ___get_global_const(903), ___nl__im__103);
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__96, ___nl__im__98, ___nl__im__97));
#line 609
c_rt_lib0move(&___nl__string__105,___get_global_const(756));
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__105, ___nl__im__96));
#line 609
c_rt_lib0clear(&___nl__im__96);
#line 609
c_rt_lib0clear(&___nl__im__97);
#line 609
c_rt_lib0clear(&___nl__im__98);
#line 609
c_rt_lib0clear(&___nl__im__103);
#line 609
//clear ___nl__bool__104;
#line 609
c_rt_lib0clear(&___nl__string__105);
#line 610
goto label_40;
#line 610
label_41:
;
#line 610
label_40:
;
#line 610
//clear ___nl__bool__93;
#line 611
goto label_37;
#line 611
label_37:
;
#line 611
c_rt_lib0clear(&___nl__im__81);
#line 612
___nl__int__82 = ___nl__int__82 + ___nl__int__83;
#line 612
goto label_36;
#line 612
label_34:
;
#line 613
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_const(151)));
#line 613
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_const(167)));
#line 613
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__im__106, ___nl__im__107, ___ref___im__1));
#line 613
c_rt_lib0clear(&___nl__im__106);
#line 613
c_rt_lib0clear(&___nl__im__107);
#line 614
goto label_1;
#line 614
label_16:
;
#line 614
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(973)));
#line 614
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 615
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__108, ___ref___im__1));
#line 616
goto label_1;
#line 616
label_17:
;
#line 616
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(974)));
#line 616
c_rt_lib0copy(&___nl__im__110, ___nl__im__111);
#line 617
c_rt_lib0delete(module_checker_priv0check_val(___nl__im__110, ___ref___im__1));
#line 618
goto label_1;
#line 618
label_1:
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
c_rt_lib0clear(&___nl__im__19);
#line 618
c_rt_lib0clear(&___nl__im__20);
#line 618
c_rt_lib0clear(&___nl__im__21);
#line 618
c_rt_lib0clear(&___nl__im__22);
#line 618
c_rt_lib0clear(&___nl__im__23);
#line 618
//clear ___nl__int__24;
#line 618
//clear ___nl__int__25;
#line 618
//clear ___nl__int__26;
#line 618
//clear ___nl__bool__27;
#line 618
//clear ___nl__int__28;
#line 618
c_rt_lib0clear(&___nl__im__29);
#line 618
c_rt_lib0clear(&___nl__im__30);
#line 618
c_rt_lib0clear(&___nl__im__31);
#line 618
c_rt_lib0clear(&___nl__im__32);
#line 618
//clear ___nl__int__33;
#line 618
//clear ___nl__int__34;
#line 618
//clear ___nl__int__35;
#line 618
//clear ___nl__bool__36;
#line 618
//clear ___nl__int__37;
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
//clear ___nl__int__86;
#line 618
c_rt_lib0clear(&___nl__im__87);
#line 618
c_rt_lib0clear(&___nl__im__88);
#line 618
//clear ___nl__bool__89;
#line 618
c_rt_lib0clear(&___nl__im__90);
#line 618
c_rt_lib0clear(&___nl__im__108);
#line 618
c_rt_lib0clear(&___nl__im__109);
#line 618
c_rt_lib0clear(&___nl__im__110);
#line 618
c_rt_lib0clear(&___nl__im__111);
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(910)));
#line 622
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__3);
#line 622
c_rt_lib0clear(&___nl__im__3);
#line 622
c_rt_lib0move(&___nl__im__4, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 622
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(756)));
#line 622
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(910), ___nl__im__4, ___get_global_const(756), ___nl__im__5));
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
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
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
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__string__27 = NULL;
#line 626
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(910)));
#line 626
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 626
c_rt_lib0clear(&___nl__im__4);
#line 626
c_rt_lib0move(&___nl__im__2, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 626
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(910), ___nl__im__2);
#line 626
c_rt_lib0clear(&___nl__im__2);
#line 626
//clear ___nl__bool__3;
#line 627
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(756)));
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
label_3:
;
#line 628
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 628
___nl__bool__11 = ___nl__int__12;
#line 628
if(___nl__bool__11){ goto label_1;}
#line 628
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__5, ___nl__int__8));
#line 628
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 629
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(756)));
#line 629
___nl__bool__14 = hash0has_key(___nl__im__15, ___nl__im__7);
#line 629
c_rt_lib0clear(&___nl__im__15);
#line 629
___nl__bool__14 = !___nl__bool__14;
#line 629
___nl__bool__14 = !___nl__bool__14;
#line 629
if(___nl__bool__14){ goto label_5;}
#line 630
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(756)));
#line 630
c_rt_lib0move(&___nl__im__16, hash0get_value(___nl__im__17, ___nl__im__7));
#line 630
c_rt_lib0clear(&___nl__im__17);
#line 631
c_rt_lib0move(&___nl__im__18,___get_global_const(756));
#line 631
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__18));
#line 631
c_rt_lib0delete(hash0delete(&___nl__im__18, ___nl__im__7));
#line 631
c_rt_lib0move(&___nl__string__19,___get_global_const(756));
#line 631
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__19, ___nl__im__18));
#line 631
c_rt_lib0clear(&___nl__im__18);
#line 631
c_rt_lib0clear(&___nl__string__19);
#line 632
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(322)));
#line 632
___nl__bool__20 = c_rt_lib0check_true_native(___nl__im__22);
#line 632
c_rt_lib0clear(&___nl__im__22);
#line 632
___nl__bool__20 = !___nl__bool__20;
#line 632
___nl__bool__21 = !___nl__bool__20;
#line 632
if(___nl__bool__21){ goto label_8;}
#line 632
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(904)));
#line 632
___nl__bool__20 = c_rt_lib0check_true_native(___nl__im__23);
#line 632
c_rt_lib0clear(&___nl__im__23);
#line 632
___nl__bool__20 = !___nl__bool__20;
#line 632
label_8:
;
#line 632
//clear ___nl__bool__21;
#line 632
___nl__bool__20 = !___nl__bool__20;
#line 632
if(___nl__bool__20){ goto label_7;}
#line 633
c_rt_lib0move(&___nl__im__24,___get_global_const(51));
#line 633
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__24));
#line 633
c_rt_lib0move(&___nl__im__26,___get_global_const(984));
#line 633
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__7));
#line 633
c_rt_lib0clear(&___nl__im__26);
#line 633
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__im__24, ___nl__im__25));
#line 633
c_rt_lib0move(&___nl__string__27,___get_global_const(51));
#line 633
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__27, ___nl__im__24));
#line 633
c_rt_lib0clear(&___nl__im__24);
#line 633
c_rt_lib0clear(&___nl__im__25);
#line 633
c_rt_lib0clear(&___nl__string__27);
#line 634
goto label_6;
#line 634
label_7:
;
#line 634
label_6:
;
#line 634
//clear ___nl__bool__20;
#line 635
goto label_4;
#line 635
label_5:
;
#line 635
label_4:
;
#line 635
//clear ___nl__bool__14;
#line 635
c_rt_lib0clear(&___nl__im__16);
#line 635
c_rt_lib0clear(&___nl__im__7);
#line 636
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 636
goto label_3;
#line 636
label_1:
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
//clear ___nl__int__12;
#line 636
c_rt_lib0clear(&___nl__im__13);
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
#line 640
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(756)));
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
label_3:
;
#line 641
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 641
___nl__bool__8 = ___nl__int__9;
#line 641
if(___nl__bool__8){ goto label_1;}
#line 641
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 641
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 642
c_rt_lib0move(&___nl__im__11,___get_global_const(756));
#line 642
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__11));
#line 642
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash(___nl__im__11, ___nl__im__4));
#line 642
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(756)));
#line 642
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value(___nl__im__16, ___nl__im__4));
#line 642
c_rt_lib0clear(&___nl__im__16);
#line 642
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(903)));
#line 642
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__17);
#line 642
c_rt_lib0clear(&___nl__im__15);
#line 642
c_rt_lib0clear(&___nl__im__17);
#line 642
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 642
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(903), ___nl__im__13);
#line 642
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__11, ___nl__im__4, ___nl__im__12));
#line 642
c_rt_lib0move(&___nl__string__18,___get_global_const(756));
#line 642
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__18, ___nl__im__11));
#line 642
c_rt_lib0clear(&___nl__im__11);
#line 642
c_rt_lib0clear(&___nl__im__12);
#line 642
c_rt_lib0clear(&___nl__im__13);
#line 642
//clear ___nl__bool__14;
#line 642
c_rt_lib0clear(&___nl__string__18);
#line 642
c_rt_lib0clear(&___nl__im__4);
#line 643
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 643
goto label_3;
#line 643
label_1:
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
//clear ___nl__int__9;
#line 643
c_rt_lib0clear(&___nl__im__10);
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 647
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 648
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(756)));
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
label_3:
;
#line 648
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 648
___nl__bool__8 = ___nl__int__9;
#line 648
if(___nl__bool__8){ goto label_1;}
#line 648
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 648
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 649
___nl__bool__11 = true;
#line 649
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 649
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__4, ___nl__im__12));
#line 649
//clear ___nl__bool__11;
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 649
c_rt_lib0clear(&___nl__im__4);
#line 650
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 650
goto label_3;
#line 650
label_1:
;
#line 652
c_rt_lib0move(&___nl__im__14, module_checker_priv0save_block(___ref___im__0));
#line 652
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(321), ___nl__im__14, ___get_global_const(914), ___nl__im__1));
#line 652
c_rt_lib0clear(&___nl__im__14);
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
//clear ___nl__int__9;
#line 652
c_rt_lib0clear(&___nl__im__10);
#line 652
return ___nl__im__13;
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
#line 658
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(914)));
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
label_3:
;
#line 658
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 658
___nl__bool__8 = ___nl__int__9;
#line 658
if(___nl__bool__8){ goto label_1;}
#line 658
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 658
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 659
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(756)));
#line 659
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__4));
#line 659
c_rt_lib0clear(&___nl__im__13);
#line 659
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(903)));
#line 659
___nl__bool__11 = c_rt_lib0check_true_native(___nl__im__14);
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
c_rt_lib0clear(&___nl__im__14);
#line 659
___nl__bool__11 = !___nl__bool__11;
#line 659
___nl__bool__11 = !___nl__bool__11;
#line 659
if(___nl__bool__11){ goto label_5;}
#line 659
c_rt_lib0move(&___nl__im__15,___get_global_const(914));
#line 659
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__15));
#line 659
___nl__bool__16 = false;
#line 659
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 659
c_rt_lib0delete(hash0set_value(&___nl__im__15, ___nl__im__4, ___nl__im__17));
#line 659
c_rt_lib0move(&___nl__string__18,___get_global_const(914));
#line 659
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__18, ___nl__im__15));
#line 659
c_rt_lib0clear(&___nl__im__15);
#line 659
//clear ___nl__bool__16;
#line 659
c_rt_lib0clear(&___nl__im__17);
#line 659
c_rt_lib0clear(&___nl__string__18);
#line 659
goto label_4;
#line 659
label_5:
;
#line 659
label_4:
;
#line 659
//clear ___nl__bool__11;
#line 659
c_rt_lib0clear(&___nl__im__4);
#line 660
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 660
goto label_3;
#line 660
label_1:
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
//clear ___nl__int__9;
#line 660
c_rt_lib0clear(&___nl__im__10);
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
#line 664
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(914)));
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
label_3:
;
#line 664
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 664
___nl__bool__8 = ___nl__int__9;
#line 664
if(___nl__bool__8){ goto label_1;}
#line 664
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 664
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 665
c_rt_lib0move(&___nl__im__11,___get_global_const(756));
#line 665
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__11));
#line 665
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash(___nl__im__11, ___nl__im__4));
#line 665
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(914)));
#line 665
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__4));
#line 665
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__16);
#line 665
c_rt_lib0clear(&___nl__im__15);
#line 665
c_rt_lib0clear(&___nl__im__16);
#line 665
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 665
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(903), ___nl__im__13);
#line 665
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__11, ___nl__im__4, ___nl__im__12));
#line 665
c_rt_lib0move(&___nl__string__17,___get_global_const(756));
#line 665
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__17, ___nl__im__11));
#line 665
c_rt_lib0clear(&___nl__im__11);
#line 665
c_rt_lib0clear(&___nl__im__12);
#line 665
c_rt_lib0clear(&___nl__im__13);
#line 665
//clear ___nl__bool__14;
#line 665
c_rt_lib0clear(&___nl__string__17);
#line 665
c_rt_lib0clear(&___nl__im__4);
#line 666
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 666
goto label_3;
#line 666
label_1:
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
//clear ___nl__int__9;
#line 666
c_rt_lib0clear(&___nl__im__10);
#line 666
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void module_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT module_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT module_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
