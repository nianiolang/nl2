
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "reference_generator.h"
#include "ptd.h"
#include "nast.h"
#include "reference_generator.h"
#line 1 "reference_generator.nl"

static ImmT *__const__f = NULL;
void reference_generator_priv0__const__init();
ImmT reference_generator_priv0__const__sim(int __nr);
ImmT reference_generator_priv0__const__sing(int __nr);

ImmT  reference_generator_priv0process_module(reference_generator0refs0type* ___ref___im__0,nast0module_t0type ___nl__im__1);
ImmT  reference_generator_priv0process_fun_def(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fun_def_t0type ___nl__im__2);
ImmT  reference_generator_priv0add_ref(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0place_t0type ___nl__im__2,reference_generator0ref_type0type ___nl__im__3);
ImmT  reference_generator_priv0process_cmd(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0cmd_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_try(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0try_ensure_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_return(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_block(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0block_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_die(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0die_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_if(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_for(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0for_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_fora(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fora_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_forh(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0forh_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_var_decl(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_declaration_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_type(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_type_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_rep(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0rep_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_while(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0while_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_if_mod(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_mod_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_match(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0match_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_value(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_bin_op(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0bin_op_t0type ___nl__im__2);


ImmT  reference_generator0fun_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0fun_ref");
ImmT  res = reference_generator0fun_ref();
return res;
}
ImmT reference_generator0fun_ref(){
reference_generator_priv0__const__init();
return reference_generator_priv0__const__sing(0);
}
ImmT reference_generator0fun_ref0cal() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 11
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_string_const(186), ___get_global_string_const(159)));
#line 11
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 12
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 12
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__2, ___get_global_string_const(175), ___nl__im__3));
#line 12
c_rt_lib0clear(&___nl__im__2);
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 12
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 12
c_rt_lib0clear(&___nl__im__1);
#line 12
return ___nl__im__0;
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
return NULL;
return NULL;

}

ImmT  reference_generator0module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0module");
ImmT  res = reference_generator0module();
return res;
}
ImmT reference_generator0module(){
reference_generator_priv0__const__init();
return reference_generator_priv0__const__sing(1);
}
ImmT reference_generator0module0cal() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 17
c_rt_lib0move(&___nl__im__0, ptd0string());
#line 17
return ___nl__im__0;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return NULL;
return NULL;

}

ImmT  reference_generator0refs0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0refs");
ImmT  res = reference_generator0refs();
return res;
}
ImmT reference_generator0refs(){
reference_generator_priv0__const__init();
return reference_generator_priv0__const__sing(2);
}
ImmT reference_generator0refs0cal() {
reference_generator_priv0__const__init();
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
#line 24
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_string_const(186), ___get_global_string_const(159)));
#line 24
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 25
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 26
c_rt_lib0move(&___nl__im__7, ptd0int());
#line 27
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(reference_generator0ref_type0ptr, ___get_global_string_const(186), ___get_global_string_const(1383)));
#line 27
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 27
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(4, ___get_global_string_const(159), ___nl__im__5, ___get_global_string_const(161), ___nl__im__6, ___get_global_string_const(1153), ___nl__im__7, ___get_global_string_const(215), ___nl__im__8));
#line 27
c_rt_lib0clear(&___nl__im__5);
#line 27
c_rt_lib0clear(&___nl__im__6);
#line 27
c_rt_lib0clear(&___nl__im__7);
#line 27
c_rt_lib0clear(&___nl__im__8);
#line 27
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 27
c_rt_lib0clear(&___nl__im__4);
#line 30
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(reference_generator0deref_type0ptr, ___get_global_string_const(186), ___get_global_string_const(51)));
#line 30
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 31
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(reference_generator0deref_type0ptr, ___get_global_string_const(186), ___get_global_string_const(51)));
#line 31
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__12));
#line 31
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(184), ___nl__im__11, ___get_global_string_const(182), ___nl__im__12));
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0move(&___nl__im__9, ptd0var(___nl__im__10));
#line 31
c_rt_lib0clear(&___nl__im__10);
#line 31
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(39), ___nl__im__3, ___get_global_string_const(99), ___nl__im__9));
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__9);
#line 31
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
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

ImmT  reference_generator0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0deref_type");
ImmT  res = reference_generator0deref_type();
return res;
}
ImmT reference_generator0deref_type(){
reference_generator_priv0__const__init();
return reference_generator_priv0__const__sing(3);
}
ImmT reference_generator0deref_type0cal() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 38
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 38
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(161), ___nl__im__2, ___get_global_string_const(159), ___nl__im__3, ___get_global_string_const(1375), ___nl__im__4));
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
return ___nl__im__0;
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
return NULL;
return NULL;

}

ImmT  reference_generator0ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0ref_type");
ImmT  res = reference_generator0ref_type();
return res;
}
ImmT reference_generator0ref_type(){
reference_generator_priv0__const__init();
return reference_generator_priv0__const__sing(4);
}
ImmT reference_generator0ref_type0cal() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 43
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_string_const(186), ___get_global_string_const(159)));
#line 43
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 44
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(reference_generator0fun_ref0ptr, ___get_global_string_const(186), ___get_global_string_const(1384)));
#line 44
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 45
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(reference_generator0fun_ref0ptr, ___get_global_string_const(186), ___get_global_string_const(1384)));
#line 45
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 45
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(180), ___nl__im__2, ___get_global_string_const(1385), ___nl__im__3, ___get_global_string_const(1386), ___nl__im__4));
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
return ___nl__im__0;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
return NULL;
return NULL;

}

ImmT  reference_generator0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "reference_generator0generate");
ImmT  *var0 = &(_tab[0]);
reference_generator0refs0type res = reference_generator0generate(*var0);
return res;
}
reference_generator0refs0type reference_generator0generate(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
reference_generator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 51
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 51
label_2:
;
#line 51
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 51
if(___nl__bool__3){ goto label_10;}
#line 51
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 51
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 52
c_rt_lib0delete(reference_generator_priv0process_module(&___nl__im__1, ___nl__im__4));
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 53
goto label_2;
#line 53
label_10:
;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
//clear ___nl__bool__3;
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
return ___nl__im__1;
return NULL;

}

ImmT  reference_generator_priv0process_module(reference_generator0refs0type* ___ref___im__0,nast0module_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
reference_generator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 59
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(180)));
#line 59
___nl__int__4 = 0;
#line 59
___nl__int__5 = 1;
#line 59
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 59
label_4:
;
#line 59
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 59
if(___nl__bool__7){ goto label_33;}
#line 59
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 59
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 61
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(175)));
#line 62
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(161)));
#line 62
___nl__int__12 = getIntFromImm(___nl__im__13);
#line 62
c_rt_lib0clear(&___nl__im__13);
#line 62
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__12));
#line 63
___nl__int__15 = 1;
#line 63
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 64
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(175)));
#line 64
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(180), ___nl__im__18));
#line 64
c_rt_lib0clear(&___nl__im__18);
#line 64
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(4, ___get_global_string_const(159), ___nl__im__11, ___get_global_string_const(161), ___nl__im__14, ___get_global_string_const(1153), ___nl__im__16, ___get_global_string_const(215), ___nl__im__17));
#line 64
c_rt_lib0clear(&___nl__im__11);
#line 64
//clear ___nl__int__12;
#line 64
c_rt_lib0clear(&___nl__im__14);
#line 64
//clear ___nl__int__15;
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
c_rt_lib0clear(&___nl__im__17);
#line 64
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 64
c_rt_lib0array_push(___ref___im__0, ___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 66
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 66
goto label_4;
#line 66
label_33:
;
#line 68
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(173)));
#line 68
___nl__int__21 = 0;
#line 68
___nl__int__22 = 1;
#line 68
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 68
label_38:
;
#line 68
___nl__bool__24 = ___nl__int__21 >= ___nl__int__23;
#line 68
if(___nl__bool__24){ goto label_49;}
#line 68
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 68
c_rt_lib0copy(&___nl__im__20, ___nl__im__25);
#line 69
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(175)));
#line 69
c_rt_lib0delete(reference_generator_priv0process_fun_def(___ref___im__0, ___nl__im__26, ___nl__im__20));
#line 69
c_rt_lib0clear(&___nl__im__26);
#line 69
c_rt_lib0clear(&___nl__im__20);
#line 70
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 70
goto label_38;
#line 70
label_49:
;
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
//clear ___nl__int__4;
#line 70
//clear ___nl__int__5;
#line 70
//clear ___nl__int__6;
#line 70
//clear ___nl__bool__7;
#line 70
c_rt_lib0clear(&___nl__im__8);
#line 70
c_rt_lib0clear(&___nl__im__19);
#line 70
c_rt_lib0clear(&___nl__im__20);
#line 70
//clear ___nl__int__21;
#line 70
//clear ___nl__int__22;
#line 70
//clear ___nl__int__23;
#line 70
//clear ___nl__bool__24;
#line 70
c_rt_lib0clear(&___nl__im__25);
#line 70
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_fun_def(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fun_def_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
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
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 76
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(161)));
#line 76
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 76
c_rt_lib0clear(&___nl__im__6);
#line 76
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__5));
#line 77
___nl__int__8 = 1;
#line 77
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 79
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(219)));
#line 79
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(220));
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
if(___nl__bool__13){ goto label_12;}
#line 79
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 79
goto label_14;
#line 79
label_12:
;
#line 79
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 79
label_14:
;
#line 79
//clear ___nl__bool__13;
#line 80
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(175)));
#line 80
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__12, ___get_global_string_const(175), ___nl__im__15));
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(1385), ___nl__im__11));
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(4, ___get_global_string_const(159), ___nl__im__1, ___get_global_string_const(161), ___nl__im__7, ___get_global_string_const(1153), ___nl__im__9, ___get_global_string_const(215), ___nl__im__10));
#line 80
//clear ___nl__int__5;
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
//clear ___nl__int__8;
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
c_rt_lib0array_push(___ref___im__0, ___nl__im__3);
#line 80
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 84
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__16));
#line 84
c_rt_lib0clear(&___nl__im__16);
#line 85
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(476)));
#line 85
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(215)));
#line 85
c_rt_lib0clear(&___nl__im__18);
#line 85
c_rt_lib0delete(reference_generator_priv0process_type(___ref___im__0, ___nl__im__1, ___nl__im__17));
#line 85
c_rt_lib0clear(&___nl__im__17);
#line 86
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(276)));
#line 86
___nl__int__21 = 0;
#line 86
___nl__int__22 = 1;
#line 86
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 86
label_44:
;
#line 86
___nl__bool__24 = ___nl__int__21 >= ___nl__int__23;
#line 86
if(___nl__bool__24){ goto label_55;}
#line 86
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 86
c_rt_lib0copy(&___nl__im__20, ___nl__im__25);
#line 87
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(215)));
#line 87
c_rt_lib0delete(reference_generator_priv0process_type(___ref___im__0, ___nl__im__1, ___nl__im__26));
#line 87
c_rt_lib0clear(&___nl__im__26);
#line 87
c_rt_lib0clear(&___nl__im__20);
#line 88
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 88
goto label_44;
#line 88
label_55:
;
#line 88
c_rt_lib0clear(&___nl__im__1);
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
c_rt_lib0clear(&___nl__im__19);
#line 88
c_rt_lib0clear(&___nl__im__20);
#line 88
//clear ___nl__int__21;
#line 88
//clear ___nl__int__22;
#line 88
//clear ___nl__int__23;
#line 88
//clear ___nl__bool__24;
#line 88
c_rt_lib0clear(&___nl__im__25);
#line 88
return NULL;
return NULL;

}

ImmT  reference_generator_priv0add_ref(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0place_t0type ___nl__im__2,reference_generator0ref_type0type ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
reference_generator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 94
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(161)));
#line 94
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 94
c_rt_lib0clear(&___nl__im__7);
#line 94
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 95
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1153)));
#line 95
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__9));
#line 95
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(159), ___nl__im__1, ___get_global_string_const(161), ___nl__im__8, ___get_global_string_const(1153), ___nl__im__11, ___get_global_string_const(215), ___nl__im__3));
#line 95
//clear ___nl__int__6;
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
//clear ___nl__int__9;
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
c_rt_lib0array_push(___ref___im__0, ___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
c_rt_lib0clear(&___nl__im__3);
#line 95
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_cmd(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0cmd_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
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
#line 101
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 101
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1072));
#line 101
if(___nl__bool__4){ goto label_44;}
#line 103
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1073));
#line 103
if(___nl__bool__4){ goto label_49;}
#line 105
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1074));
#line 105
if(___nl__bool__4){ goto label_54;}
#line 107
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1075));
#line 107
if(___nl__bool__4){ goto label_59;}
#line 109
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(167));
#line 109
if(___nl__bool__4){ goto label_64;}
#line 111
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1076));
#line 111
if(___nl__bool__4){ goto label_69;}
#line 113
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1077));
#line 113
if(___nl__bool__4){ goto label_74;}
#line 115
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1078));
#line 115
if(___nl__bool__4){ goto label_79;}
#line 117
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1079));
#line 117
if(___nl__bool__4){ goto label_84;}
#line 119
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1080));
#line 119
if(___nl__bool__4){ goto label_89;}
#line 120
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1081));
#line 120
if(___nl__bool__4){ goto label_91;}
#line 121
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1082));
#line 121
if(___nl__bool__4){ goto label_93;}
#line 123
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(229));
#line 123
if(___nl__bool__4){ goto label_98;}
#line 125
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1084));
#line 125
if(___nl__bool__4){ goto label_103;}
#line 127
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(185));
#line 127
if(___nl__bool__4){ goto label_108;}
#line 129
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(263));
#line 129
if(___nl__bool__4){ goto label_113;}
#line 131
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(257));
#line 131
if(___nl__bool__4){ goto label_118;}
#line 133
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1083));
#line 133
if(___nl__bool__4){ goto label_123;}
#line 135
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(258));
#line 135
if(___nl__bool__4){ goto label_128;}
#line 137
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1085));
#line 137
if(___nl__bool__4){ goto label_133;}
#line 137
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 137
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 137
nl_die_arg(___nl__im__5);
#line 101
label_44:
;
#line 101
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1072)));
#line 101
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 102
c_rt_lib0delete(reference_generator_priv0process_if(___ref___im__0, ___nl__im__1, ___nl__im__6));
#line 103
goto label_135;
#line 103
label_49:
;
#line 103
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1073)));
#line 103
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 104
c_rt_lib0delete(reference_generator_priv0process_for(___ref___im__0, ___nl__im__1, ___nl__im__8));
#line 105
goto label_135;
#line 105
label_54:
;
#line 105
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1074)));
#line 105
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 106
c_rt_lib0delete(reference_generator_priv0process_fora(___ref___im__0, ___nl__im__1, ___nl__im__10));
#line 107
goto label_135;
#line 107
label_59:
;
#line 107
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1075)));
#line 107
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 108
c_rt_lib0delete(reference_generator_priv0process_forh(___ref___im__0, ___nl__im__1, ___nl__im__12));
#line 109
goto label_135;
#line 109
label_64:
;
#line 109
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(167)));
#line 109
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 110
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__14));
#line 111
goto label_135;
#line 111
label_69:
;
#line 111
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1076)));
#line 111
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 112
c_rt_lib0delete(reference_generator_priv0process_rep(___ref___im__0, ___nl__im__1, ___nl__im__16));
#line 113
goto label_135;
#line 113
label_74:
;
#line 113
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1077)));
#line 113
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 114
c_rt_lib0delete(reference_generator_priv0process_while(___ref___im__0, ___nl__im__1, ___nl__im__18));
#line 115
goto label_135;
#line 115
label_79:
;
#line 115
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1078)));
#line 115
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 116
c_rt_lib0delete(reference_generator_priv0process_if_mod(___ref___im__0, ___nl__im__1, ___nl__im__20));
#line 117
goto label_135;
#line 117
label_84:
;
#line 117
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1079)));
#line 117
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 118
c_rt_lib0delete(reference_generator_priv0process_if_mod(___ref___im__0, ___nl__im__1, ___nl__im__22));
#line 119
goto label_135;
#line 119
label_89:
;
#line 120
goto label_135;
#line 120
label_91:
;
#line 121
goto label_135;
#line 121
label_93:
;
#line 121
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1082)));
#line 121
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 122
c_rt_lib0delete(reference_generator_priv0process_match(___ref___im__0, ___nl__im__1, ___nl__im__24));
#line 123
goto label_135;
#line 123
label_98:
;
#line 123
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(229)));
#line 123
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 124
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__26));
#line 125
goto label_135;
#line 125
label_103:
;
#line 125
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1084)));
#line 125
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 126
c_rt_lib0delete(reference_generator_priv0process_try(___ref___im__0, ___nl__im__1, ___nl__im__28));
#line 127
goto label_135;
#line 127
label_108:
;
#line 127
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(185)));
#line 127
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 128
c_rt_lib0delete(reference_generator_priv0process_try(___ref___im__0, ___nl__im__1, ___nl__im__30));
#line 129
goto label_135;
#line 129
label_113:
;
#line 129
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(263)));
#line 129
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 130
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__32));
#line 131
goto label_135;
#line 131
label_118:
;
#line 131
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(257)));
#line 131
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 132
c_rt_lib0delete(reference_generator_priv0process_return(___ref___im__0, ___nl__im__1, ___nl__im__34));
#line 133
goto label_135;
#line 133
label_123:
;
#line 133
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1083)));
#line 133
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 134
c_rt_lib0delete(reference_generator_priv0process_block(___ref___im__0, ___nl__im__1, ___nl__im__36));
#line 135
goto label_135;
#line 135
label_128:
;
#line 135
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(258)));
#line 135
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 136
c_rt_lib0delete(reference_generator_priv0process_die(___ref___im__0, ___nl__im__1, ___nl__im__38));
#line 137
goto label_135;
#line 137
label_133:
;
#line 138
goto label_135;
#line 138
label_135:
;
#line 138
c_rt_lib0clear(&___nl__im__1);
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
//clear ___nl__bool__4;
#line 138
c_rt_lib0clear(&___nl__im__5);
#line 138
c_rt_lib0clear(&___nl__im__6);
#line 138
c_rt_lib0clear(&___nl__im__7);
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
#line 138
c_rt_lib0clear(&___nl__im__15);
#line 138
c_rt_lib0clear(&___nl__im__16);
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
c_rt_lib0clear(&___nl__im__18);
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
c_rt_lib0clear(&___nl__im__21);
#line 138
c_rt_lib0clear(&___nl__im__22);
#line 138
c_rt_lib0clear(&___nl__im__23);
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
c_rt_lib0clear(&___nl__im__25);
#line 138
c_rt_lib0clear(&___nl__im__26);
#line 138
c_rt_lib0clear(&___nl__im__27);
#line 138
c_rt_lib0clear(&___nl__im__28);
#line 138
c_rt_lib0clear(&___nl__im__29);
#line 138
c_rt_lib0clear(&___nl__im__30);
#line 138
c_rt_lib0clear(&___nl__im__31);
#line 138
c_rt_lib0clear(&___nl__im__32);
#line 138
c_rt_lib0clear(&___nl__im__33);
#line 138
c_rt_lib0clear(&___nl__im__34);
#line 138
c_rt_lib0clear(&___nl__im__35);
#line 138
c_rt_lib0clear(&___nl__im__36);
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
c_rt_lib0clear(&___nl__im__39);
#line 138
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_try(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0try_ensure_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 142
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1099));
#line 142
if(___nl__bool__3){ goto label_9;}
#line 144
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(732));
#line 144
if(___nl__bool__3){ goto label_14;}
#line 146
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1100));
#line 146
if(___nl__bool__3){ goto label_19;}
#line 146
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 146
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 146
nl_die_arg(___nl__im__4);
#line 142
label_9:
;
#line 142
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1099)));
#line 142
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 143
c_rt_lib0delete(reference_generator_priv0process_bin_op(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 144
goto label_24;
#line 144
label_14:
;
#line 144
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(732)));
#line 144
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 145
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__7));
#line 146
goto label_24;
#line 146
label_19:
;
#line 146
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(1100)));
#line 146
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 147
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__9));
#line 148
goto label_24;
#line 148
label_24:
;
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
//clear ___nl__bool__3;
#line 148
c_rt_lib0clear(&___nl__im__4);
#line 148
c_rt_lib0clear(&___nl__im__5);
#line 148
c_rt_lib0clear(&___nl__im__6);
#line 148
c_rt_lib0clear(&___nl__im__7);
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_return(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
#line 152
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__2));
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_block(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0block_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
#line 156
___nl__int__4 = 0;
#line 156
___nl__int__5 = 1;
#line 156
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 156
label_3:
;
#line 156
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 156
if(___nl__bool__7){ goto label_12;}
#line 156
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 156
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 157
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 158
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 158
goto label_3;
#line 158
label_12:
;
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
//clear ___nl__int__4;
#line 158
//clear ___nl__int__5;
#line 158
//clear ___nl__int__6;
#line 158
//clear ___nl__bool__7;
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_die(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0die_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
#line 162
___nl__int__4 = 0;
#line 162
___nl__int__5 = 1;
#line 162
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 162
label_3:
;
#line 162
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 162
if(___nl__bool__7){ goto label_12;}
#line 162
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 162
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 163
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 163
c_rt_lib0clear(&___nl__im__3);
#line 164
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 164
goto label_3;
#line 164
label_12:
;
#line 164
c_rt_lib0clear(&___nl__im__1);
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
c_rt_lib0clear(&___nl__im__3);
#line 164
//clear ___nl__int__4;
#line 164
//clear ___nl__int__5;
#line 164
//clear ___nl__int__6;
#line 164
//clear ___nl__bool__7;
#line 164
c_rt_lib0clear(&___nl__im__8);
#line 164
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_if(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 168
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1086)));
#line 168
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 168
c_rt_lib0clear(&___nl__im__3);
#line 169
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1072)));
#line 169
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 169
c_rt_lib0clear(&___nl__im__4);
#line 170
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1087)));
#line 170
___nl__int__7 = 0;
#line 170
___nl__int__8 = 1;
#line 170
___nl__int__9 = c_rt_lib0array_len(___nl__im__5);
#line 170
label_10:
;
#line 170
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 170
if(___nl__bool__10){ goto label_24;}
#line 170
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__5, ___nl__int__7));
#line 170
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 171
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(1086)));
#line 171
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__12));
#line 171
c_rt_lib0clear(&___nl__im__12);
#line 172
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(237)));
#line 172
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__13));
#line 172
c_rt_lib0clear(&___nl__im__13);
#line 172
c_rt_lib0clear(&___nl__im__6);
#line 173
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 173
goto label_10;
#line 173
label_24:
;
#line 174
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1088)));
#line 174
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__14));
#line 174
c_rt_lib0clear(&___nl__im__14);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
c_rt_lib0clear(&___nl__im__5);
#line 174
c_rt_lib0clear(&___nl__im__6);
#line 174
//clear ___nl__int__7;
#line 174
//clear ___nl__int__8;
#line 174
//clear ___nl__int__9;
#line 174
//clear ___nl__bool__10;
#line 174
c_rt_lib0clear(&___nl__im__11);
#line 174
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_for(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0for_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
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
#line 178
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1089)));
#line 178
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(263));
#line 178
if(___nl__bool__4){ goto label_8;}
#line 180
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(229));
#line 180
if(___nl__bool__4){ goto label_13;}
#line 180
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 180
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 180
nl_die_arg(___nl__im__5);
#line 178
label_8:
;
#line 178
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(263)));
#line 178
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 179
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__6));
#line 180
goto label_18;
#line 180
label_13:
;
#line 180
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(229)));
#line 180
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 181
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__8));
#line 182
goto label_18;
#line 182
label_18:
;
#line 184
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(372)));
#line 184
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__10));
#line 184
c_rt_lib0clear(&___nl__im__10);
#line 185
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1086)));
#line 185
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__11));
#line 185
c_rt_lib0clear(&___nl__im__11);
#line 186
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 186
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__12));
#line 186
c_rt_lib0clear(&___nl__im__12);
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
c_rt_lib0clear(&___nl__im__2);
#line 186
c_rt_lib0clear(&___nl__im__3);
#line 186
//clear ___nl__bool__4;
#line 186
c_rt_lib0clear(&___nl__im__5);
#line 186
c_rt_lib0clear(&___nl__im__6);
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
c_rt_lib0clear(&___nl__im__8);
#line 186
c_rt_lib0clear(&___nl__im__9);
#line 186
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_fora(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fora_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 190
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(372)));
#line 190
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 191
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 191
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 191
c_rt_lib0clear(&___nl__im__4);
#line 192
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(37)));
#line 192
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
c_rt_lib0clear(&___nl__im__2);
#line 192
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_forh(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0forh_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 196
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(585)));
#line 196
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 196
c_rt_lib0clear(&___nl__im__3);
#line 197
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(234)));
#line 197
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 198
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(135)));
#line 198
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 198
c_rt_lib0clear(&___nl__im__5);
#line 199
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 199
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__6));
#line 199
c_rt_lib0clear(&___nl__im__6);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_var_decl(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_declaration_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 203
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(229)));
#line 203
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(229));
#line 203
if(___nl__bool__4){ goto label_8;}
#line 205
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(76));
#line 205
if(___nl__bool__4){ goto label_13;}
#line 205
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 205
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 205
nl_die_arg(___nl__im__5);
#line 203
label_8:
;
#line 203
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(229)));
#line 203
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 204
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__6));
#line 205
goto label_15;
#line 205
label_13:
;
#line 206
goto label_15;
#line 206
label_15:
;
#line 207
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(215)));
#line 207
c_rt_lib0delete(reference_generator_priv0process_type(___ref___im__0, ___nl__im__1, ___nl__im__8));
#line 207
c_rt_lib0clear(&___nl__im__8);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 207
//clear ___nl__bool__4;
#line 207
c_rt_lib0clear(&___nl__im__5);
#line 207
c_rt_lib0clear(&___nl__im__6);
#line 207
c_rt_lib0clear(&___nl__im__7);
#line 207
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_type(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_type_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 211
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(215));
#line 211
if(___nl__bool__3){ goto label_7;}
#line 213
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(76));
#line 213
if(___nl__bool__3){ goto label_12;}
#line 213
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 213
nl_die_arg(___nl__im__4);
#line 211
label_7:
;
#line 211
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(215)));
#line 211
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 212
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 213
goto label_14;
#line 213
label_12:
;
#line 214
goto label_14;
#line 214
label_14:
;
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
//clear ___nl__bool__3;
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
c_rt_lib0clear(&___nl__im__5);
#line 214
c_rt_lib0clear(&___nl__im__6);
#line 214
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_rep(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0rep_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 219
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(372)));
#line 219
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 220
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 220
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 220
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1091)));
#line 221
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_while(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0while_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 225
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 225
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 226
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1086)));
#line 226
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
c_rt_lib0clear(&___nl__im__2);
#line 226
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_if_mod(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_mod_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 230
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 230
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 231
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1086)));
#line 231
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 231
c_rt_lib0clear(&___nl__im__4);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_match(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0match_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
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
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 235
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(234)));
#line 235
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 235
c_rt_lib0clear(&___nl__im__3);
#line 236
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1094)));
#line 236
___nl__int__6 = 0;
#line 236
___nl__int__7 = 1;
#line 236
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 236
label_7:
;
#line 236
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 236
if(___nl__bool__9){ goto label_38;}
#line 236
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 236
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 237
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(571)));
#line 237
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(229)));
#line 237
c_rt_lib0clear(&___nl__im__12);
#line 237
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(229));
#line 237
if(___nl__bool__13){ goto label_22;}
#line 239
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(76));
#line 239
if(___nl__bool__13){ goto label_29;}
#line 239
c_rt_lib0move(&___nl__im__14,___get_global_string_const(15));
#line 239
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__11));
#line 239
nl_die_arg(___nl__im__14);
#line 237
label_22:
;
#line 237
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(229)));
#line 237
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 238
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(501)));
#line 238
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__1, ___nl__im__17));
#line 238
c_rt_lib0clear(&___nl__im__17);
#line 239
goto label_31;
#line 239
label_29:
;
#line 240
goto label_31;
#line 240
label_31:
;
#line 241
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(237)));
#line 241
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__1, ___nl__im__18));
#line 241
c_rt_lib0clear(&___nl__im__18);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 242
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 242
goto label_7;
#line 242
label_38:
;
#line 242
c_rt_lib0clear(&___nl__im__1);
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__4);
#line 242
c_rt_lib0clear(&___nl__im__5);
#line 242
//clear ___nl__int__6;
#line 242
//clear ___nl__int__7;
#line 242
//clear ___nl__int__8;
#line 242
//clear ___nl__bool__9;
#line 242
c_rt_lib0clear(&___nl__im__10);
#line 242
c_rt_lib0clear(&___nl__im__11);
#line 242
//clear ___nl__bool__13;
#line 242
c_rt_lib0clear(&___nl__im__14);
#line 242
c_rt_lib0clear(&___nl__im__15);
#line 242
c_rt_lib0clear(&___nl__im__16);
#line 242
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_value(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
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
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
bool  ___nl__bool__35 = false;
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
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(229)));
#line 246
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1106));
#line 246
if(___nl__bool__4){ goto label_38;}
#line 247
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1107));
#line 247
if(___nl__bool__4){ goto label_42;}
#line 248
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1085));
#line 248
if(___nl__bool__4){ goto label_46;}
#line 249
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1104));
#line 249
if(___nl__bool__4){ goto label_48;}
#line 251
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(571));
#line 251
if(___nl__bool__4){ goto label_53;}
#line 253
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(232));
#line 253
if(___nl__bool__4){ goto label_60;}
#line 254
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(414));
#line 254
if(___nl__bool__4){ goto label_64;}
#line 255
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 255
if(___nl__bool__4){ goto label_68;}
#line 256
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(240));
#line 256
if(___nl__bool__4){ goto label_72;}
#line 260
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(241));
#line 260
if(___nl__bool__4){ goto label_89;}
#line 264
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(515));
#line 264
if(___nl__bool__4){ goto label_108;}
#line 265
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(245));
#line 265
if(___nl__bool__4){ goto label_112;}
#line 267
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1108));
#line 267
if(___nl__bool__4){ goto label_117;}
#line 269
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1109));
#line 269
if(___nl__bool__4){ goto label_124;}
#line 274
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1065));
#line 274
if(___nl__bool__4){ goto label_141;}
#line 282
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1110));
#line 282
if(___nl__bool__4){ goto label_174;}
#line 284
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1111));
#line 284
if(___nl__bool__4){ goto label_179;}
#line 284
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 284
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 284
nl_die_arg(___nl__im__5);
#line 246
label_38:
;
#line 246
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1106)));
#line 246
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 247
goto label_184;
#line 247
label_42:
;
#line 247
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1107)));
#line 247
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 248
goto label_184;
#line 248
label_46:
;
#line 249
goto label_184;
#line 249
label_48:
;
#line 249
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1104)));
#line 249
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 250
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__10));
#line 251
goto label_184;
#line 251
label_53:
;
#line 251
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(571)));
#line 251
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 252
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(515)));
#line 252
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__14));
#line 252
c_rt_lib0clear(&___nl__im__14);
#line 253
goto label_184;
#line 253
label_60:
;
#line 253
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(232)));
#line 253
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 254
goto label_184;
#line 254
label_64:
;
#line 254
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(414)));
#line 254
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 255
goto label_184;
#line 255
label_68:
;
#line 255
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(33)));
#line 255
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__20);
#line 256
goto label_184;
#line 256
label_72:
;
#line 256
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(240)));
#line 256
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 257
___nl__int__24 = 0;
#line 257
___nl__int__25 = 1;
#line 257
___nl__int__26 = c_rt_lib0array_len(___nl__im__21);
#line 257
label_78:
;
#line 257
___nl__bool__27 = ___nl__int__24 >= ___nl__int__26;
#line 257
if(___nl__bool__27){ goto label_87;}
#line 257
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__21, ___nl__int__24));
#line 257
c_rt_lib0copy(&___nl__im__23, ___nl__im__28);
#line 258
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__23));
#line 258
c_rt_lib0clear(&___nl__im__23);
#line 259
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 259
goto label_78;
#line 259
label_87:
;
#line 260
goto label_184;
#line 260
label_89:
;
#line 260
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(241)));
#line 260
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 261
___nl__int__32 = 0;
#line 261
___nl__int__33 = 1;
#line 261
___nl__int__34 = c_rt_lib0array_len(___nl__im__29);
#line 261
label_95:
;
#line 261
___nl__bool__35 = ___nl__int__32 >= ___nl__int__34;
#line 261
if(___nl__bool__35){ goto label_106;}
#line 261
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__29, ___nl__int__32));
#line 261
c_rt_lib0copy(&___nl__im__31, ___nl__im__36);
#line 262
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(234)));
#line 262
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__37));
#line 262
c_rt_lib0clear(&___nl__im__37);
#line 262
c_rt_lib0clear(&___nl__im__31);
#line 263
___nl__int__32 = ___nl__int__32 + ___nl__int__33;
#line 263
goto label_95;
#line 263
label_106:
;
#line 264
goto label_184;
#line 264
label_108:
;
#line 264
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(515)));
#line 264
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 265
goto label_184;
#line 265
label_112:
;
#line 265
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(245)));
#line 265
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 266
c_rt_lib0delete(reference_generator_priv0process_bin_op(___ref___im__0, ___nl__im__1, ___nl__im__40));
#line 267
goto label_184;
#line 267
label_117:
;
#line 267
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1108)));
#line 267
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 268
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(234)));
#line 268
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__44));
#line 268
c_rt_lib0clear(&___nl__im__44);
#line 269
goto label_184;
#line 269
label_124:
;
#line 269
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1109)));
#line 269
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 270
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(231)));
#line 270
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(560)));
#line 270
c_rt_lib0clear(&___nl__im__48);
#line 271
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(159)));
#line 272
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(175)));
#line 272
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__51, ___get_global_string_const(175), ___nl__im__52));
#line 272
c_rt_lib0clear(&___nl__im__51);
#line 272
c_rt_lib0clear(&___nl__im__52);
#line 272
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(1386), ___nl__im__50));
#line 272
c_rt_lib0clear(&___nl__im__50);
#line 272
c_rt_lib0delete(reference_generator_priv0add_ref(___ref___im__0, ___nl__im__1, ___nl__im__47, ___nl__im__49));
#line 272
c_rt_lib0clear(&___nl__im__47);
#line 272
c_rt_lib0clear(&___nl__im__49);
#line 274
goto label_184;
#line 274
label_141:
;
#line 274
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1065)));
#line 274
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 275
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(231)));
#line 275
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(560)));
#line 275
c_rt_lib0clear(&___nl__im__56);
#line 276
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(159)));
#line 277
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(175)));
#line 277
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__59, ___get_global_string_const(175), ___nl__im__60));
#line 277
c_rt_lib0clear(&___nl__im__59);
#line 277
c_rt_lib0clear(&___nl__im__60);
#line 277
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_string_const(1386), ___nl__im__58));
#line 277
c_rt_lib0clear(&___nl__im__58);
#line 277
c_rt_lib0delete(reference_generator_priv0add_ref(___ref___im__0, ___nl__im__1, ___nl__im__55, ___nl__im__57));
#line 277
c_rt_lib0clear(&___nl__im__55);
#line 277
c_rt_lib0clear(&___nl__im__57);
#line 279
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(276)));
#line 279
___nl__int__63 = 0;
#line 279
___nl__int__64 = 1;
#line 279
___nl__int__65 = c_rt_lib0array_len(___nl__im__61);
#line 279
label_161:
;
#line 279
___nl__bool__66 = ___nl__int__63 >= ___nl__int__65;
#line 279
if(___nl__bool__66){ goto label_172;}
#line 279
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__61, ___nl__int__63));
#line 279
c_rt_lib0copy(&___nl__im__62, ___nl__im__67);
#line 280
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(234)));
#line 280
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__68));
#line 280
c_rt_lib0clear(&___nl__im__68);
#line 280
c_rt_lib0clear(&___nl__im__62);
#line 281
___nl__int__63 = ___nl__int__63 + ___nl__int__64;
#line 281
goto label_161;
#line 281
label_172:
;
#line 282
goto label_184;
#line 282
label_174:
;
#line 282
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1110)));
#line 282
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 283
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__69));
#line 284
goto label_184;
#line 284
label_179:
;
#line 284
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1111)));
#line 284
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 285
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__71));
#line 286
goto label_184;
#line 286
label_184:
;
#line 286
c_rt_lib0clear(&___nl__im__1);
#line 286
c_rt_lib0clear(&___nl__im__2);
#line 286
c_rt_lib0clear(&___nl__im__3);
#line 286
//clear ___nl__bool__4;
#line 286
c_rt_lib0clear(&___nl__im__5);
#line 286
c_rt_lib0clear(&___nl__im__6);
#line 286
c_rt_lib0clear(&___nl__im__7);
#line 286
c_rt_lib0clear(&___nl__im__8);
#line 286
c_rt_lib0clear(&___nl__im__9);
#line 286
c_rt_lib0clear(&___nl__im__10);
#line 286
c_rt_lib0clear(&___nl__im__11);
#line 286
c_rt_lib0clear(&___nl__im__12);
#line 286
c_rt_lib0clear(&___nl__im__13);
#line 286
//clear ___nl__int__15;
#line 286
c_rt_lib0clear(&___nl__im__16);
#line 286
c_rt_lib0clear(&___nl__im__17);
#line 286
c_rt_lib0clear(&___nl__im__18);
#line 286
//clear ___nl__bool__19;
#line 286
c_rt_lib0clear(&___nl__im__20);
#line 286
c_rt_lib0clear(&___nl__im__21);
#line 286
c_rt_lib0clear(&___nl__im__22);
#line 286
c_rt_lib0clear(&___nl__im__23);
#line 286
//clear ___nl__int__24;
#line 286
//clear ___nl__int__25;
#line 286
//clear ___nl__int__26;
#line 286
//clear ___nl__bool__27;
#line 286
c_rt_lib0clear(&___nl__im__28);
#line 286
c_rt_lib0clear(&___nl__im__29);
#line 286
c_rt_lib0clear(&___nl__im__30);
#line 286
c_rt_lib0clear(&___nl__im__31);
#line 286
//clear ___nl__int__32;
#line 286
//clear ___nl__int__33;
#line 286
//clear ___nl__int__34;
#line 286
//clear ___nl__bool__35;
#line 286
c_rt_lib0clear(&___nl__im__36);
#line 286
c_rt_lib0clear(&___nl__im__38);
#line 286
c_rt_lib0clear(&___nl__im__39);
#line 286
c_rt_lib0clear(&___nl__im__40);
#line 286
c_rt_lib0clear(&___nl__im__41);
#line 286
c_rt_lib0clear(&___nl__im__42);
#line 286
c_rt_lib0clear(&___nl__im__43);
#line 286
c_rt_lib0clear(&___nl__im__45);
#line 286
c_rt_lib0clear(&___nl__im__46);
#line 286
c_rt_lib0clear(&___nl__im__53);
#line 286
c_rt_lib0clear(&___nl__im__54);
#line 286
c_rt_lib0clear(&___nl__im__61);
#line 286
c_rt_lib0clear(&___nl__im__62);
#line 286
//clear ___nl__int__63;
#line 286
//clear ___nl__int__64;
#line 286
//clear ___nl__int__65;
#line 286
//clear ___nl__bool__66;
#line 286
c_rt_lib0clear(&___nl__im__67);
#line 286
c_rt_lib0clear(&___nl__im__69);
#line 286
c_rt_lib0clear(&___nl__im__70);
#line 286
c_rt_lib0clear(&___nl__im__71);
#line 286
c_rt_lib0clear(&___nl__im__72);
#line 286
return NULL;
return NULL;

}

ImmT  reference_generator_priv0process_bin_op(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0bin_op_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 290
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(285)));
#line 290
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 290
c_rt_lib0clear(&___nl__im__3);
#line 291
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(286)));
#line 291
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 291
c_rt_lib0clear(&___nl__im__4);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
c_rt_lib0clear(&___nl__im__2);
#line 291
return NULL;
return NULL;

}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void reference_generator_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
ImmT reference_generator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT reference_generator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = reference_generator0fun_ref0cal();
	break;
case 1:
	___const__[1] = reference_generator0module0cal();
	break;
case 2:
	___const__[2] = reference_generator0refs0cal();
	break;
case 3:
	___const__[3] = reference_generator0deref_type0cal();
	break;
case 4:
	___const__[4] = reference_generator0ref_type0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
