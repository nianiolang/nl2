
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "pretty_printer.h"
#include "string.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "wprinter.h"
#include "boolean_t.h"
#line 1 "pretty_printer.nl"

static ImmT *__const__f = NULL;
void pretty_printer_priv0__const__init();
ImmT pretty_printer_priv0__const__sim(int __nr);
ImmT pretty_printer_priv0__const__sing(int __nr);

ImmT  pretty_printer_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  pretty_printer_priv0print_fun_def(wprinter0state_t0type* ___ref___im__0,nast0fun_def_t0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  pretty_printer_priv0print_fun_def_head(wprinter0state_t0type* ___ref___im__0,nast0fun_def_t0type ___nl__im__1,ImmT  ___nl__im__2);
wprinter0pretty_arr_t0type pretty_printer_priv0join_print_var_decl(ImmT  ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_var_decl(nast0variable_declaration_t0type ___nl__im__0);
ImmT  pretty_printer_priv0pind(INT  ___nl__int__0);
wprinter0pretty_arr_t0type pretty_printer_priv0join_print_hash_elem(ImmT  ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_hash_elem(nast0hash_elem_t0type ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_variant(nast0variant_t0type ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_variant_case_decl(nast0variant_decl_t0type ___nl__im__0);
wprinter0pretty_arr_t0type pretty_printer_priv0join_print_fun_arg(ImmT  ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_fun_arg(nast0fun_val_arg_t0type ___nl__im__0);
INT  pretty_printer_priv0count_structs(ImmT  ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0get_compressed_fun_val(nast0value_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  pretty_printer_priv0print_st(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2);
ImmT  pretty_printer_priv0get_fun_label(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  pretty_printer_priv0string_to_nl(ImmT  ___nl__im__0);
wprinter0pretty_arr_t0type pretty_printer_priv0join_print_val(ImmT  ___nl__im__0);
bool pretty_printer_priv0is_to_change_ov(nast0value_t0type ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_val(nast0value_t0type ___nl__im__0);
ImmT  pretty_printer_priv0print_cond_mod(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,nast0cmd_t0type ___nl__im__2,ImmT  ___nl__im__3,nast0value_t0type ___nl__im__4,INT  ___nl__int__5);
ImmT  pretty_printer_priv0print_loop(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,nast0cmd_t0type ___nl__im__2,ImmT  ___nl__im__3,nast0value_t0type ___nl__im__4,INT  ___nl__int__5);
ImmT  pretty_printer_priv0print_loop_or_mod(wprinter0state_t0type* ___ref___im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2,nast0cmd_t0type ___nl__im__3,ImmT  ___nl__im__4,nast0value_t0type ___nl__im__5,INT  ___nl__int__6);
wprinter0pretty_t0type pretty_printer_priv0print_try_ensure(nast0try_ensure_t0type ___nl__im__0,ImmT  ___nl__im__1);
wprinter0pretty_t0type pretty_printer_priv0print_return(nast0value_t0type ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_sim_value(nast0value_t0type ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_break();
wprinter0pretty_t0type pretty_printer_priv0print_continue();
wprinter0pretty_t0type pretty_printer_priv0print_die(ImmT  ___nl__im__0);
wprinter0pretty_t0type pretty_printer_priv0print_simple_statement(nast0cmd_t0type ___nl__im__0);
ImmT  pretty_printer_priv0flush_sim_statement(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2);
ImmT  pretty_printer_priv0print_cmd(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2);


ImmT  pretty_printer_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 14
c_rt_lib0move(&___nl__im__2,___get_global_const(193));
#line 14
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 14
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 14
c_rt_lib0move(&___nl__string__3,___get_global_const(193));
#line 14
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__string__3);
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
return NULL;
}

ImmT  pretty_printer0struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "pretty_printer0struct_t");
return pretty_printer0struct_t();
}
ImmT  pretty_printer0struct_t() {
pretty_printer_priv0__const__init();
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
#line 19
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 19
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(168), ___nl__im__7, ___get_global_const(1081), ___nl__im__8, ___get_global_const(1029), ___nl__im__9));
#line 20
c_rt_lib0clear(&___nl__im__7);
#line 20
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0clear(&___nl__im__9);
#line 20
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 20
c_rt_lib0clear(&___nl__im__6);
#line 20
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(438), ___nl__im__2, ___get_global_const(208), ___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__4);
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
}

pretty_printer0struct_t0type pretty_printer0print_module_to_struct0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_struct");
nast0module_t0type *var0 = &(_tab[0]);
return pretty_printer0print_module_to_struct(*var0);
}
pretty_printer0struct_t0type pretty_printer0print_module_to_struct(nast0module_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
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
ImmT  ___nl__string__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
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
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
bool  ___nl__bool__45 = false;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__string__61 = NULL;
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(438), ___nl__im__2, ___get_global_const(208), ___nl__im__3));
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(173)));
#line 26
___nl__int__6 = 0;
#line 26
___nl__int__7 = 1;
#line 26
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 26
label_3:
;
#line 26
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 26
___nl__bool__9 = ___nl__int__10;
#line 26
if(___nl__bool__9){ goto label_1;}
#line 26
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 26
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 27
c_rt_lib0move(&___nl__im__12,___get_global_const(438));
#line 27
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__12));
#line 27
c_rt_lib0move(&___nl__im__16,___get_global_const(1082));
#line 27
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(168)));
#line 27
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 27
c_rt_lib0clear(&___nl__im__16);
#line 27
c_rt_lib0clear(&___nl__im__17);
#line 27
c_rt_lib0move(&___nl__im__18,___get_global_const(409));
#line 27
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 27
c_rt_lib0clear(&___nl__im__15);
#line 27
c_rt_lib0clear(&___nl__im__18);
#line 27
c_rt_lib0move(&___nl__im__19, string0lf());
#line 27
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 27
c_rt_lib0clear(&___nl__im__14);
#line 27
c_rt_lib0clear(&___nl__im__19);
#line 27
c_rt_lib0delete(array0push(&___nl__im__12, ___nl__im__13));
#line 27
c_rt_lib0move(&___nl__string__20,___get_global_const(438));
#line 27
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__20, ___nl__im__12));
#line 27
c_rt_lib0clear(&___nl__im__12);
#line 27
c_rt_lib0clear(&___nl__im__13);
#line 27
c_rt_lib0clear(&___nl__string__20);
#line 27
c_rt_lib0clear(&___nl__im__5);
#line 27
label_2:
;
#line 28
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 28
goto label_3;
#line 28
label_1:
;
#line 29
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 29
___nl__int__23 = 0;
#line 29
___nl__int__24 = 1;
#line 29
___nl__int__25 = c_rt_lib0array_len(___nl__im__21);
#line 29
label_6:
;
#line 29
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 29
___nl__bool__26 = ___nl__int__27;
#line 29
if(___nl__bool__26){ goto label_4;}
#line 29
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__21, ___nl__int__23));
#line 29
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 30
c_rt_lib0move(&___nl__im__30,___get_global_const(37));
#line 30
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(1, ___get_global_const(193), ___nl__im__30));
#line 30
c_rt_lib0clear(&___nl__im__30);
#line 31
c_rt_lib0move(&___nl__im__31, string0lf());
#line 31
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__29, ___nl__im__31));
#line 31
c_rt_lib0clear(&___nl__im__31);
#line 32
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 32
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(&___nl__im__29, ___nl__im__22, ___nl__im__32));
#line 32
c_rt_lib0clear(&___nl__im__32);
#line 33
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(193)));
#line 34
c_rt_lib0move(&___nl__im__35,___get_global_const(37));
#line 34
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 34
c_rt_lib0hash_set_value_dec(&___nl__im__29, ___get_global_const(193), ___nl__im__34);
#line 34
c_rt_lib0clear(&___nl__im__34);
#line 34
c_rt_lib0clear(&___nl__im__35);
#line 35
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(227)));
#line 35
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(227)));
#line 35
c_rt_lib0clear(&___nl__im__38);
#line 35
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(227)));
#line 35
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(227)));
#line 35
c_rt_lib0clear(&___nl__im__40);
#line 35
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__39, ___get_global_const(873)));
#line 35
c_rt_lib0clear(&___nl__im__37);
#line 35
c_rt_lib0clear(&___nl__im__39);
#line 35
___nl__int__42 = 0;
#line 35
___nl__int__43 = 1;
#line 35
___nl__int__44 = c_rt_lib0array_len(___nl__im__36);
#line 35
label_9:
;
#line 35
___nl__int__46 = ___nl__int__42 >= ___nl__int__44;
#line 35
___nl__bool__45 = ___nl__int__46;
#line 35
if(___nl__bool__45){ goto label_7;}
#line 35
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__36, ___nl__int__42));
#line 35
c_rt_lib0copy(&___nl__im__41, ___nl__im__47);
#line 36
c_rt_lib0move(&___nl__im__49, string0lf());
#line 36
___nl__int__51 = 1;
#line 36
c_rt_lib0move(&___nl__im__50, pretty_printer_priv0pind(___nl__int__51));
#line 36
//clear ___nl__int__51;
#line 36
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__50));
#line 36
c_rt_lib0clear(&___nl__im__49);
#line 36
c_rt_lib0clear(&___nl__im__50);
#line 36
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__29, ___nl__im__48));
#line 36
c_rt_lib0clear(&___nl__im__48);
#line 37
___nl__int__52 = 1;
#line 37
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__im__29, ___nl__im__41, ___nl__int__52));
#line 37
//clear ___nl__int__52;
#line 37
c_rt_lib0clear(&___nl__im__41);
#line 37
label_8:
;
#line 38
___nl__int__42 = ___nl__int__42 + ___nl__int__43;
#line 38
goto label_9;
#line 38
label_7:
;
#line 39
c_rt_lib0move(&___nl__im__53,___get_global_const(208));
#line 39
c_rt_lib0move(&___nl__im__53, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__53));
#line 40
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(209)));
#line 40
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__58, ___get_global_const(428));
#line 40
c_rt_lib0clear(&___nl__im__58);
#line 40
if(___nl__bool__57){ goto label_11;}
#line 40
c_rt_lib0move(&___nl__im__56,___get_global_const(37));
#line 40
goto label_10;
#line 40
label_11:
;
#line 40
c_rt_lib0move(&___nl__im__56,___get_global_const(35));
#line 40
label_10:
;
#line 40
//clear ___nl__bool__57;
#line 40
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(168)));
#line 40
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__59));
#line 40
c_rt_lib0clear(&___nl__im__56);
#line 40
c_rt_lib0clear(&___nl__im__59);
#line 42
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(193)));
#line 42
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(3, ___get_global_const(168), ___nl__im__55, ___get_global_const(1081), ___nl__im__33, ___get_global_const(1029), ___nl__im__60));
#line 42
c_rt_lib0clear(&___nl__im__55);
#line 42
c_rt_lib0clear(&___nl__im__60);
#line 42
c_rt_lib0delete(array0push(&___nl__im__53, ___nl__im__54));
#line 42
c_rt_lib0move(&___nl__string__61,___get_global_const(208));
#line 42
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__61, ___nl__im__53));
#line 42
c_rt_lib0clear(&___nl__im__53);
#line 42
c_rt_lib0clear(&___nl__im__54);
#line 42
c_rt_lib0clear(&___nl__string__61);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
label_5:
;
#line 44
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 44
goto label_6;
#line 44
label_4:
;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
//clear ___nl__int__6;
#line 45
//clear ___nl__int__7;
#line 45
//clear ___nl__int__8;
#line 45
//clear ___nl__bool__9;
#line 45
//clear ___nl__int__10;
#line 45
c_rt_lib0clear(&___nl__im__11);
#line 45
c_rt_lib0clear(&___nl__im__21);
#line 45
c_rt_lib0clear(&___nl__im__22);
#line 45
//clear ___nl__int__23;
#line 45
//clear ___nl__int__24;
#line 45
//clear ___nl__int__25;
#line 45
//clear ___nl__bool__26;
#line 45
//clear ___nl__int__27;
#line 45
c_rt_lib0clear(&___nl__im__28);
#line 45
c_rt_lib0clear(&___nl__im__29);
#line 45
c_rt_lib0clear(&___nl__im__33);
#line 45
c_rt_lib0clear(&___nl__im__36);
#line 45
c_rt_lib0clear(&___nl__im__41);
#line 45
//clear ___nl__int__42;
#line 45
//clear ___nl__int__43;
#line 45
//clear ___nl__int__44;
#line 45
//clear ___nl__bool__45;
#line 45
//clear ___nl__int__46;
#line 45
c_rt_lib0clear(&___nl__im__47);
#line 45
return ___nl__im__1;
}

ImmT  pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_str");
nast0module_t0type *var0 = &(_tab[0]);
return pretty_printer0print_module_to_str(*var0);
}
ImmT  pretty_printer0print_module_to_str(nast0module_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
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
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
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
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
bool  ___nl__bool__48 = false;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
#line 49
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 49
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_const(193), ___nl__im__2));
#line 49
c_rt_lib0clear(&___nl__im__2);
#line 50
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(925)));
#line 50
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 50
___nl__bool__3 = c_rt_lib0ne(___nl__im__4, ___nl__im__5);
#line 50
c_rt_lib0clear(&___nl__im__4);
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 50
___nl__bool__3 = !___nl__bool__3;
#line 50
if(___nl__bool__3){ goto label_2;}
#line 51
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(925)));
#line 51
c_rt_lib0move(&___nl__im__8, string0lf());
#line 51
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 51
c_rt_lib0clear(&___nl__im__7);
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 51
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__6));
#line 51
c_rt_lib0clear(&___nl__im__6);
#line 52
goto label_1;
#line 52
label_2:
;
#line 53
c_rt_lib0move(&___nl__im__16,___get_global_const(1083));
#line 53
c_rt_lib0move(&___nl__im__17, string0lf());
#line 53
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 53
c_rt_lib0clear(&___nl__im__16);
#line 53
c_rt_lib0clear(&___nl__im__17);
#line 53
c_rt_lib0move(&___nl__im__18,___get_global_const(1084));
#line 53
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 53
c_rt_lib0clear(&___nl__im__15);
#line 53
c_rt_lib0clear(&___nl__im__18);
#line 53
c_rt_lib0move(&___nl__im__19, string0lf());
#line 53
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 53
c_rt_lib0clear(&___nl__im__14);
#line 53
c_rt_lib0clear(&___nl__im__19);
#line 53
c_rt_lib0move(&___nl__im__20,___get_global_const(1083));
#line 53
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__20));
#line 53
c_rt_lib0clear(&___nl__im__13);
#line 53
c_rt_lib0clear(&___nl__im__20);
#line 53
c_rt_lib0move(&___nl__im__21, string0lf());
#line 53
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__21));
#line 53
c_rt_lib0clear(&___nl__im__12);
#line 53
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0move(&___nl__im__22, string0lf());
#line 54
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__22));
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0move(&___nl__im__23, string0lf());
#line 54
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__23));
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__9));
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 55
goto label_1;
#line 55
label_1:
;
#line 55
//clear ___nl__bool__3;
#line 56
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(0));
#line 57
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(173)));
#line 57
___nl__int__27 = 0;
#line 57
___nl__int__28 = 1;
#line 57
___nl__int__29 = c_rt_lib0array_len(___nl__im__25);
#line 57
label_5:
;
#line 57
___nl__int__31 = ___nl__int__27 >= ___nl__int__29;
#line 57
___nl__bool__30 = ___nl__int__31;
#line 57
if(___nl__bool__30){ goto label_3;}
#line 57
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 57
c_rt_lib0copy(&___nl__im__26, ___nl__im__32);
#line 58
c_rt_lib0move(&___nl__im__35,___get_global_const(1082));
#line 58
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(168)));
#line 58
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 58
c_rt_lib0clear(&___nl__im__35);
#line 58
c_rt_lib0clear(&___nl__im__36);
#line 58
c_rt_lib0move(&___nl__im__37,___get_global_const(409));
#line 58
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__37));
#line 58
c_rt_lib0clear(&___nl__im__34);
#line 58
c_rt_lib0clear(&___nl__im__37);
#line 58
c_rt_lib0delete(array0push(&___nl__im__24, ___nl__im__33));
#line 58
c_rt_lib0clear(&___nl__im__33);
#line 58
c_rt_lib0clear(&___nl__im__26);
#line 58
label_4:
;
#line 59
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 59
goto label_5;
#line 59
label_3:
;
#line 60
c_rt_lib0move(&___nl__im__39, string0lf());
#line 60
c_rt_lib0move(&___nl__im__38, array0join(___nl__im__39, ___nl__im__24));
#line 60
c_rt_lib0clear(&___nl__im__39);
#line 60
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__38));
#line 60
c_rt_lib0clear(&___nl__im__38);
#line 61
c_rt_lib0move(&___nl__im__41, string0lf());
#line 61
c_rt_lib0move(&___nl__im__42, string0lf());
#line 61
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 61
c_rt_lib0clear(&___nl__im__41);
#line 61
c_rt_lib0clear(&___nl__im__42);
#line 61
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__40));
#line 61
c_rt_lib0clear(&___nl__im__40);
#line 62
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 62
___nl__int__45 = 0;
#line 62
___nl__int__46 = 1;
#line 62
___nl__int__47 = c_rt_lib0array_len(___nl__im__43);
#line 62
label_8:
;
#line 62
___nl__int__49 = ___nl__int__45 >= ___nl__int__47;
#line 62
___nl__bool__48 = ___nl__int__49;
#line 62
if(___nl__bool__48){ goto label_6;}
#line 62
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__43, ___nl__int__45));
#line 62
c_rt_lib0copy(&___nl__im__44, ___nl__im__50);
#line 63
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 63
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__im__1, ___nl__im__44, ___nl__im__51));
#line 63
c_rt_lib0clear(&___nl__im__51);
#line 64
c_rt_lib0move(&___nl__im__53, string0lf());
#line 64
c_rt_lib0move(&___nl__im__54, string0lf());
#line 64
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__54));
#line 64
c_rt_lib0clear(&___nl__im__53);
#line 64
c_rt_lib0clear(&___nl__im__54);
#line 64
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__52));
#line 64
c_rt_lib0clear(&___nl__im__52);
#line 64
c_rt_lib0clear(&___nl__im__44);
#line 64
label_7:
;
#line 65
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 65
goto label_8;
#line 65
label_6:
;
#line 66
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(193)));
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
c_rt_lib0clear(&___nl__im__24);
#line 66
c_rt_lib0clear(&___nl__im__25);
#line 66
c_rt_lib0clear(&___nl__im__26);
#line 66
//clear ___nl__int__27;
#line 66
//clear ___nl__int__28;
#line 66
//clear ___nl__int__29;
#line 66
//clear ___nl__bool__30;
#line 66
//clear ___nl__int__31;
#line 66
c_rt_lib0clear(&___nl__im__32);
#line 66
c_rt_lib0clear(&___nl__im__43);
#line 66
c_rt_lib0clear(&___nl__im__44);
#line 66
//clear ___nl__int__45;
#line 66
//clear ___nl__int__46;
#line 66
//clear ___nl__int__47;
#line 66
//clear ___nl__bool__48;
#line 66
//clear ___nl__int__49;
#line 66
c_rt_lib0clear(&___nl__im__50);
#line 66
return ___nl__im__55;
}

ImmT  pretty_printer_priv0print_fun_def(wprinter0state_t0type* ___ref___im__0,nast0fun_def_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 70
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(___ref___im__0, ___nl__im__1, ___nl__im__2));
#line 71
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(227)));
#line 71
___nl__int__4 = 0;
#line 71
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__3, ___nl__int__4));
#line 71
c_rt_lib0clear(&___nl__im__3);
#line 71
//clear ___nl__int__4;
#line 71
c_rt_lib0clear(&___nl__im__1);
#line 71
c_rt_lib0clear(&___nl__im__2);
#line 71
return NULL;
}

ImmT  pretty_printer_priv0print_fun_def_head(wprinter0state_t0type* ___ref___im__0,nast0fun_def_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
pretty_printer_priv0__const__init();
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
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
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
bool  ___nl__bool__45 = false;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
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
INT  ___nl__int__70 = 0;
#line 75
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 76
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(209)));
#line 76
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(210));
#line 76
if(___nl__bool__5){ goto label_2;}
#line 78
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(428));
#line 78
if(___nl__bool__5){ goto label_3;}
#line 78
c_rt_lib0move(&___nl__im__6,___get_global_const(16));
#line 78
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 78
nl_die_arg(___nl__im__6);
#line 76
label_2:
;
#line 77
c_rt_lib0move(&___nl__im__8,___get_global_const(35));
#line 77
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 77
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__7));
#line 77
c_rt_lib0clear(&___nl__im__7);
#line 78
goto label_1;
#line 78
label_3:
;
#line 79
goto label_1;
#line 79
label_1:
;
#line 80
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(168)));
#line 80
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 82
c_rt_lib0move(&___nl__im__12,___get_global_const(689));
#line 82
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 82
c_rt_lib0clear(&___nl__im__12);
#line 83
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 84
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__3));
#line 85
c_rt_lib0move(&___nl__im__16,___get_global_const(420));
#line 85
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 85
c_rt_lib0clear(&___nl__im__16);
#line 85
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(4, ___nl__im__11, ___nl__im__13, ___nl__im__14, ___nl__im__15));
#line 85
c_rt_lib0clear(&___nl__im__11);
#line 85
c_rt_lib0clear(&___nl__im__13);
#line 85
c_rt_lib0clear(&___nl__im__14);
#line 85
c_rt_lib0clear(&___nl__im__15);
#line 87
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(265)));
#line 87
___nl__int__17 = c_rt_lib0array_len(___nl__im__18);
#line 87
c_rt_lib0clear(&___nl__im__18);
#line 87
___nl__int__19 = 0;
#line 87
___nl__int__20 = 1;
#line 87
label_6:
;
#line 87
___nl__int__22 = ___nl__int__19 >= ___nl__int__17;
#line 87
___nl__bool__21 = ___nl__int__22;
#line 87
if(___nl__bool__21){ goto label_4;}
#line 88
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(265)));
#line 88
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__24, ___nl__int__19));
#line 88
c_rt_lib0clear(&___nl__im__24);
#line 89
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(266)));
#line 89
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(40));
#line 89
if(___nl__bool__26){ goto label_8;}
#line 91
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(73));
#line 91
if(___nl__bool__26){ goto label_9;}
#line 91
c_rt_lib0move(&___nl__im__27,___get_global_const(16));
#line 91
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 91
nl_die_arg(___nl__im__27);
#line 89
label_8:
;
#line 90
c_rt_lib0move(&___nl__im__30,___get_global_const(40));
#line 90
c_rt_lib0move(&___nl__im__29, wprinter0build_sim(___nl__im__30));
#line 90
c_rt_lib0clear(&___nl__im__30);
#line 90
c_rt_lib0move(&___nl__im__31, wprinter0get_sep());
#line 90
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__31));
#line 90
c_rt_lib0clear(&___nl__im__29);
#line 90
c_rt_lib0clear(&___nl__im__31);
#line 90
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__28));
#line 90
c_rt_lib0clear(&___nl__im__28);
#line 91
goto label_7;
#line 91
label_9:
;
#line 92
goto label_7;
#line 92
label_7:
;
#line 93
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(168)));
#line 93
c_rt_lib0move(&___nl__im__32, wprinter0build_sim(___nl__im__33));
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__32));
#line 93
c_rt_lib0clear(&___nl__im__32);
#line 94
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(95)));
#line 94
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__34, ___get_global_const(95));
#line 94
if(___nl__bool__35){ goto label_11;}
#line 96
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__34, ___get_global_const(73));
#line 96
if(___nl__bool__35){ goto label_12;}
#line 96
c_rt_lib0move(&___nl__im__36,___get_global_const(16));
#line 96
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__34));
#line 96
nl_die_arg(___nl__im__36);
#line 94
label_11:
;
#line 94
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__34, ___get_global_const(95)));
#line 94
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 95
c_rt_lib0move(&___nl__im__40, wprinter0get_sep());
#line 95
c_rt_lib0move(&___nl__im__42,___get_global_const(484));
#line 95
c_rt_lib0move(&___nl__im__41, wprinter0build_sim(___nl__im__42));
#line 95
c_rt_lib0clear(&___nl__im__42);
#line 95
c_rt_lib0move(&___nl__im__43, wprinter0get_sep());
#line 95
c_rt_lib0move(&___nl__im__44, pretty_printer_priv0print_val(___nl__im__37));
#line 95
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(4, ___nl__im__40, ___nl__im__41, ___nl__im__43, ___nl__im__44));
#line 95
c_rt_lib0clear(&___nl__im__40);
#line 95
c_rt_lib0clear(&___nl__im__41);
#line 95
c_rt_lib0clear(&___nl__im__43);
#line 95
c_rt_lib0clear(&___nl__im__44);
#line 95
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__39));
#line 95
c_rt_lib0clear(&___nl__im__39);
#line 96
goto label_10;
#line 96
label_12:
;
#line 97
goto label_10;
#line 97
label_10:
;
#line 98
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(265)));
#line 98
___nl__int__47 = c_rt_lib0array_len(___nl__im__48);
#line 98
c_rt_lib0clear(&___nl__im__48);
#line 98
___nl__int__49 = 1;
#line 98
___nl__int__46 = ___nl__int__47 - ___nl__int__49;
#line 98
//clear ___nl__int__47;
#line 98
//clear ___nl__int__49;
#line 98
___nl__int__50 = ___nl__int__19 != ___nl__int__46;
#line 98
___nl__bool__45 = ___nl__int__50;
#line 98
//clear ___nl__int__46;
#line 98
//clear ___nl__int__50;
#line 98
___nl__bool__45 = !___nl__bool__45;
#line 98
if(___nl__bool__45){ goto label_14;}
#line 98
c_rt_lib0move(&___nl__im__53,___get_global_const(295));
#line 98
c_rt_lib0move(&___nl__im__52, wprinter0build_sim(___nl__im__53));
#line 98
c_rt_lib0clear(&___nl__im__53);
#line 98
c_rt_lib0move(&___nl__im__54, wprinter0get_sep());
#line 98
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__54));
#line 98
c_rt_lib0clear(&___nl__im__52);
#line 98
c_rt_lib0clear(&___nl__im__54);
#line 98
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__51));
#line 98
c_rt_lib0clear(&___nl__im__51);
#line 98
goto label_13;
#line 98
label_14:
;
#line 98
label_13:
;
#line 98
//clear ___nl__bool__45;
#line 98
c_rt_lib0clear(&___nl__im__23);
#line 98
c_rt_lib0clear(&___nl__im__25);
#line 98
//clear ___nl__bool__26;
#line 98
c_rt_lib0clear(&___nl__im__27);
#line 98
c_rt_lib0clear(&___nl__im__34);
#line 98
//clear ___nl__bool__35;
#line 98
c_rt_lib0clear(&___nl__im__36);
#line 98
c_rt_lib0clear(&___nl__im__37);
#line 98
c_rt_lib0clear(&___nl__im__38);
#line 98
label_5:
;
#line 99
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 99
goto label_6;
#line 99
label_4:
;
#line 100
c_rt_lib0move(&___nl__im__56,___get_global_const(299));
#line 100
c_rt_lib0move(&___nl__im__55, wprinter0build_sim(___nl__im__56));
#line 100
c_rt_lib0clear(&___nl__im__56);
#line 100
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__55));
#line 100
c_rt_lib0clear(&___nl__im__55);
#line 101
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(387)));
#line 101
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_const(95)));
#line 101
c_rt_lib0clear(&___nl__im__58);
#line 101
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__57, ___get_global_const(95));
#line 101
if(___nl__bool__59){ goto label_16;}
#line 108
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__57, ___get_global_const(73));
#line 108
if(___nl__bool__59){ goto label_17;}
#line 108
c_rt_lib0move(&___nl__im__60,___get_global_const(16));
#line 108
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_mk(2, ___nl__im__60, ___nl__im__57));
#line 108
nl_die_arg(___nl__im__60);
#line 101
label_16:
;
#line 101
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__57, ___get_global_const(95)));
#line 101
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 103
c_rt_lib0move(&___nl__im__64, wprinter0get_sep());
#line 104
c_rt_lib0move(&___nl__im__66,___get_global_const(484));
#line 104
c_rt_lib0move(&___nl__im__65, wprinter0build_sim(___nl__im__66));
#line 104
c_rt_lib0clear(&___nl__im__66);
#line 105
c_rt_lib0move(&___nl__im__67, wprinter0get_sep());
#line 106
c_rt_lib0move(&___nl__im__68, pretty_printer_priv0print_sim_value(___nl__im__61));
#line 106
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(4, ___nl__im__64, ___nl__im__65, ___nl__im__67, ___nl__im__68));
#line 106
c_rt_lib0clear(&___nl__im__64);
#line 106
c_rt_lib0clear(&___nl__im__65);
#line 106
c_rt_lib0clear(&___nl__im__67);
#line 106
c_rt_lib0clear(&___nl__im__68);
#line 106
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__63));
#line 106
c_rt_lib0clear(&___nl__im__63);
#line 108
goto label_15;
#line 108
label_17:
;
#line 109
goto label_15;
#line 109
label_15:
;
#line 110
c_rt_lib0move(&___nl__im__69, wprinter0build_pretty_l(___nl__im__10));
#line 110
___nl__int__70 = 0;
#line 110
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__69, ___nl__int__70));
#line 110
c_rt_lib0clear(&___nl__im__69);
#line 110
//clear ___nl__int__70;
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 110
c_rt_lib0clear(&___nl__im__3);
#line 110
c_rt_lib0clear(&___nl__im__4);
#line 110
//clear ___nl__bool__5;
#line 110
c_rt_lib0clear(&___nl__im__6);
#line 110
c_rt_lib0clear(&___nl__im__10);
#line 110
//clear ___nl__int__17;
#line 110
//clear ___nl__int__19;
#line 110
//clear ___nl__int__20;
#line 110
//clear ___nl__bool__21;
#line 110
//clear ___nl__int__22;
#line 110
c_rt_lib0clear(&___nl__im__23);
#line 110
c_rt_lib0clear(&___nl__im__25);
#line 110
//clear ___nl__bool__26;
#line 110
c_rt_lib0clear(&___nl__im__27);
#line 110
c_rt_lib0clear(&___nl__im__34);
#line 110
//clear ___nl__bool__35;
#line 110
c_rt_lib0clear(&___nl__im__36);
#line 110
c_rt_lib0clear(&___nl__im__37);
#line 110
c_rt_lib0clear(&___nl__im__38);
#line 110
c_rt_lib0clear(&___nl__im__57);
#line 110
//clear ___nl__bool__59;
#line 110
c_rt_lib0clear(&___nl__im__60);
#line 110
c_rt_lib0clear(&___nl__im__61);
#line 110
c_rt_lib0clear(&___nl__im__62);
#line 110
return NULL;
}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_var_decl(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 114
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 115
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 115
___nl__int__3 = 0;
#line 115
___nl__int__4 = 1;
#line 115
label_3:
;
#line 115
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 115
___nl__bool__5 = ___nl__int__6;
#line 115
if(___nl__bool__5){ goto label_1;}
#line 116
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 116
c_rt_lib0move(&___nl__im__7, pretty_printer_priv0print_var_decl(___nl__im__8));
#line 116
c_rt_lib0clear(&___nl__im__8);
#line 116
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 116
c_rt_lib0clear(&___nl__im__7);
#line 117
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 117
___nl__int__12 = 1;
#line 117
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 117
//clear ___nl__int__11;
#line 117
//clear ___nl__int__12;
#line 117
___nl__int__13 = ___nl__int__3 != ___nl__int__10;
#line 117
___nl__bool__9 = ___nl__int__13;
#line 117
//clear ___nl__int__10;
#line 117
//clear ___nl__int__13;
#line 117
___nl__bool__9 = !___nl__bool__9;
#line 117
if(___nl__bool__9){ goto label_5;}
#line 117
c_rt_lib0move(&___nl__im__16,___get_global_const(295));
#line 117
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 117
c_rt_lib0clear(&___nl__im__16);
#line 117
c_rt_lib0move(&___nl__im__17, wprinter0get_sep());
#line 117
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__17));
#line 117
c_rt_lib0clear(&___nl__im__15);
#line 117
c_rt_lib0clear(&___nl__im__17);
#line 117
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__14));
#line 117
c_rt_lib0clear(&___nl__im__14);
#line 117
goto label_4;
#line 117
label_5:
;
#line 117
label_4:
;
#line 117
//clear ___nl__bool__9;
#line 117
label_2:
;
#line 118
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 118
goto label_3;
#line 118
label_1:
;
#line 119
c_rt_lib0clear(&___nl__im__0);
#line 119
//clear ___nl__int__2;
#line 119
//clear ___nl__int__3;
#line 119
//clear ___nl__int__4;
#line 119
//clear ___nl__bool__5;
#line 119
//clear ___nl__int__6;
#line 119
return ___nl__im__1;
}

wprinter0pretty_t0type pretty_printer_priv0print_var_decl(nast0variable_declaration_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
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
bool  ___nl__bool__21 = false;
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
#line 123
c_rt_lib0move(&___nl__im__3,___get_global_const(463));
#line 123
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
c_rt_lib0move(&___nl__im__4, wprinter0get_sep());
#line 123
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__4));
#line 123
c_rt_lib0clear(&___nl__im__2);
#line 123
c_rt_lib0clear(&___nl__im__4);
#line 124
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 124
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(95));
#line 124
if(___nl__bool__6){ goto label_2;}
#line 132
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(73));
#line 132
if(___nl__bool__6){ goto label_3;}
#line 132
c_rt_lib0move(&___nl__im__7,___get_global_const(16));
#line 132
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 132
nl_die_arg(___nl__im__7);
#line 124
label_2:
;
#line 124
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(95)));
#line 124
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 126
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 126
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 127
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 128
c_rt_lib0move(&___nl__im__15,___get_global_const(484));
#line 128
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 128
c_rt_lib0clear(&___nl__im__15);
#line 129
c_rt_lib0move(&___nl__im__16, wprinter0get_sep());
#line 130
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_val(___nl__im__8));
#line 130
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(5, ___nl__im__11, ___nl__im__13, ___nl__im__14, ___nl__im__16, ___nl__im__17));
#line 130
c_rt_lib0clear(&___nl__im__11);
#line 130
c_rt_lib0clear(&___nl__im__13);
#line 130
c_rt_lib0clear(&___nl__im__14);
#line 130
c_rt_lib0clear(&___nl__im__16);
#line 130
c_rt_lib0clear(&___nl__im__17);
#line 130
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__10));
#line 130
c_rt_lib0clear(&___nl__im__10);
#line 132
goto label_1;
#line 132
label_3:
;
#line 133
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 133
c_rt_lib0move(&___nl__im__18, wprinter0build_sim(___nl__im__19));
#line 133
c_rt_lib0clear(&___nl__im__19);
#line 133
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__18));
#line 133
c_rt_lib0clear(&___nl__im__18);
#line 134
goto label_1;
#line 134
label_1:
;
#line 135
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 135
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(219));
#line 135
if(___nl__bool__21){ goto label_5;}
#line 137
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(73));
#line 137
if(___nl__bool__21){ goto label_6;}
#line 137
c_rt_lib0move(&___nl__im__22,___get_global_const(16));
#line 137
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 137
nl_die_arg(___nl__im__22);
#line 135
label_5:
;
#line 135
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(219)));
#line 135
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 136
c_rt_lib0move(&___nl__im__26, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__im__28,___get_global_const(905));
#line 136
c_rt_lib0move(&___nl__im__27, wprinter0build_sim(___nl__im__28));
#line 136
c_rt_lib0clear(&___nl__im__28);
#line 136
c_rt_lib0move(&___nl__im__29, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__im__30, pretty_printer_priv0print_val(___nl__im__23));
#line 136
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(4, ___nl__im__26, ___nl__im__27, ___nl__im__29, ___nl__im__30));
#line 136
c_rt_lib0clear(&___nl__im__26);
#line 136
c_rt_lib0clear(&___nl__im__27);
#line 136
c_rt_lib0clear(&___nl__im__29);
#line 136
c_rt_lib0clear(&___nl__im__30);
#line 136
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__25));
#line 136
c_rt_lib0clear(&___nl__im__25);
#line 137
goto label_4;
#line 137
label_6:
;
#line 138
goto label_4;
#line 138
label_4:
;
#line 139
c_rt_lib0move(&___nl__im__31, wprinter0build_pretty_l(___nl__im__1));
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 139
//clear ___nl__bool__6;
#line 139
c_rt_lib0clear(&___nl__im__7);
#line 139
c_rt_lib0clear(&___nl__im__8);
#line 139
c_rt_lib0clear(&___nl__im__9);
#line 139
c_rt_lib0clear(&___nl__im__20);
#line 139
//clear ___nl__bool__21;
#line 139
c_rt_lib0clear(&___nl__im__22);
#line 139
c_rt_lib0clear(&___nl__im__23);
#line 139
c_rt_lib0clear(&___nl__im__24);
#line 139
return ___nl__im__31;
}

ImmT  pretty_printer_priv0pind(INT  ___nl__int__0) {
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
#line 143
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 144
___nl__int__2 = 0;
#line 144
___nl__int__3 = 1;
#line 144
label_3:
;
#line 144
___nl__int__5 = ___nl__int__2 >= ___nl__int__0;
#line 144
___nl__bool__4 = ___nl__int__5;
#line 144
if(___nl__bool__4){ goto label_1;}
#line 144
___nl__int__7 = 9;
#line 144
c_rt_lib0move(&___nl__im__6, string0chr(___nl__int__7));
#line 144
//clear ___nl__int__7;
#line 144
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
label_2:
;
#line 144
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 144
goto label_3;
#line 144
label_1:
;
#line 145
//clear ___nl__int__0;
#line 145
//clear ___nl__int__2;
#line 145
//clear ___nl__int__3;
#line 145
//clear ___nl__bool__4;
#line 145
//clear ___nl__int__5;
#line 145
return ___nl__im__1;
}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_hash_elem(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 149
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 150
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 150
___nl__int__3 = 0;
#line 150
___nl__int__4 = 1;
#line 150
label_3:
;
#line 150
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 150
___nl__bool__5 = ___nl__int__6;
#line 150
if(___nl__bool__5){ goto label_1;}
#line 151
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 151
c_rt_lib0move(&___nl__im__7, pretty_printer_priv0print_hash_elem(___nl__im__8));
#line 151
c_rt_lib0clear(&___nl__im__8);
#line 151
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 151
c_rt_lib0clear(&___nl__im__7);
#line 152
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 152
___nl__int__12 = 1;
#line 152
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 152
//clear ___nl__int__11;
#line 152
//clear ___nl__int__12;
#line 152
___nl__int__13 = ___nl__int__3 != ___nl__int__10;
#line 152
___nl__bool__9 = ___nl__int__13;
#line 152
//clear ___nl__int__10;
#line 152
//clear ___nl__int__13;
#line 152
___nl__bool__9 = !___nl__bool__9;
#line 152
if(___nl__bool__9){ goto label_5;}
#line 152
c_rt_lib0move(&___nl__im__16,___get_global_const(295));
#line 152
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 152
c_rt_lib0clear(&___nl__im__16);
#line 152
c_rt_lib0move(&___nl__im__17, wprinter0get_sep());
#line 152
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__17));
#line 152
c_rt_lib0clear(&___nl__im__15);
#line 152
c_rt_lib0clear(&___nl__im__17);
#line 152
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__14));
#line 152
c_rt_lib0clear(&___nl__im__14);
#line 152
goto label_4;
#line 152
label_5:
;
#line 152
label_4:
;
#line 152
//clear ___nl__bool__9;
#line 152
label_2:
;
#line 153
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 153
goto label_3;
#line 153
label_1:
;
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
//clear ___nl__int__2;
#line 154
//clear ___nl__int__3;
#line 154
//clear ___nl__int__4;
#line 154
//clear ___nl__bool__5;
#line 154
//clear ___nl__int__6;
#line 154
return ___nl__im__1;
}

wprinter0pretty_t0type pretty_printer_priv0print_hash_elem(nast0hash_elem_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
bool  ___nl__bool__1 = false;
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
#line 158
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 158
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(219)));
#line 158
c_rt_lib0clear(&___nl__im__4);
#line 158
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(231));
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
if(___nl__bool__1){ goto label_3;}
#line 158
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 158
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(219)));
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 158
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(230));
#line 158
c_rt_lib0clear(&___nl__im__5);
#line 158
label_3:
;
#line 158
//clear ___nl__bool__2;
#line 158
___nl__bool__1 = !___nl__bool__1;
#line 158
if(___nl__bool__1){ goto label_2;}
#line 159
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(371)));
#line 159
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 159
c_rt_lib0clear(&___nl__im__9);
#line 159
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(371)));
#line 159
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(219)));
#line 159
c_rt_lib0clear(&___nl__im__11);
#line 159
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(897)));
#line 159
c_rt_lib0clear(&___nl__im__8);
#line 159
c_rt_lib0clear(&___nl__im__10);
#line 160
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 160
c_rt_lib0move(&___nl__im__15,___get_global_const(309));
#line 160
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 160
c_rt_lib0clear(&___nl__im__15);
#line 160
c_rt_lib0move(&___nl__im__16,___get_global_const(37));
#line 160
c_rt_lib0move(&___nl__im__12, pretty_printer_priv0get_compressed_fun_val(___nl__im__13, ___nl__im__14, ___nl__im__16));
#line 160
c_rt_lib0clear(&___nl__im__13);
#line 160
c_rt_lib0clear(&___nl__im__14);
#line 160
c_rt_lib0clear(&___nl__im__16);
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
//clear ___nl__bool__1;
#line 160
c_rt_lib0clear(&___nl__im__7);
#line 160
return ___nl__im__12;
#line 161
goto label_1;
#line 161
label_2:
;
#line 161
label_1:
;
#line 161
//clear ___nl__bool__1;
#line 161
c_rt_lib0clear(&___nl__im__7);
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 163
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(371)));
#line 163
c_rt_lib0move(&___nl__im__19, pretty_printer_priv0print_val(___nl__im__20));
#line 163
c_rt_lib0clear(&___nl__im__20);
#line 164
c_rt_lib0move(&___nl__im__21, wprinter0get_sep());
#line 165
c_rt_lib0move(&___nl__im__23,___get_global_const(293));
#line 165
c_rt_lib0move(&___nl__im__22, wprinter0build_sim(___nl__im__23));
#line 165
c_rt_lib0clear(&___nl__im__23);
#line 166
c_rt_lib0move(&___nl__im__24, wprinter0get_sep());
#line 167
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 167
c_rt_lib0move(&___nl__im__25, pretty_printer_priv0print_val(___nl__im__26));
#line 167
c_rt_lib0clear(&___nl__im__26);
#line 167
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(5, ___nl__im__19, ___nl__im__21, ___nl__im__22, ___nl__im__24, ___nl__im__25));
#line 167
c_rt_lib0clear(&___nl__im__19);
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
c_rt_lib0clear(&___nl__im__22);
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 167
c_rt_lib0move(&___nl__im__17, wprinter0build_pretty_l(___nl__im__18));
#line 167
c_rt_lib0clear(&___nl__im__18);
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
return ___nl__im__17;
}

wprinter0pretty_t0type pretty_printer_priv0print_variant(nast0variant_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
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
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
bool  ___nl__bool__17 = false;
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
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 172
c_rt_lib0move(&___nl__im__4,___get_global_const(181));
#line 172
___nl__bool__1 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 172
c_rt_lib0clear(&___nl__im__3);
#line 172
c_rt_lib0clear(&___nl__im__4);
#line 172
___nl__bool__2 = !___nl__bool__1;
#line 172
if(___nl__bool__2){ goto label_3;}
#line 172
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 172
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(219)));
#line 172
c_rt_lib0clear(&___nl__im__6);
#line 172
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(875));
#line 172
c_rt_lib0clear(&___nl__im__5);
#line 172
label_3:
;
#line 172
//clear ___nl__bool__2;
#line 172
___nl__bool__1 = !___nl__bool__1;
#line 172
if(___nl__bool__1){ goto label_2;}
#line 173
c_rt_lib0move(&___nl__im__8,___get_global_const(535));
#line 173
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__8));
#line 173
c_rt_lib0clear(&___nl__im__8);
#line 173
c_rt_lib0clear(&___nl__im__0);
#line 173
//clear ___nl__bool__1;
#line 173
return ___nl__im__7;
#line 174
goto label_1;
#line 174
label_2:
;
#line 174
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 174
c_rt_lib0move(&___nl__im__11,___get_global_const(182));
#line 174
___nl__bool__1 = c_rt_lib0eq(___nl__im__10, ___nl__im__11);
#line 174
c_rt_lib0clear(&___nl__im__10);
#line 174
c_rt_lib0clear(&___nl__im__11);
#line 174
___nl__bool__9 = !___nl__bool__1;
#line 174
if(___nl__bool__9){ goto label_5;}
#line 174
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 174
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(219)));
#line 174
c_rt_lib0clear(&___nl__im__13);
#line 174
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(875));
#line 174
c_rt_lib0clear(&___nl__im__12);
#line 174
label_5:
;
#line 174
//clear ___nl__bool__9;
#line 174
___nl__bool__1 = !___nl__bool__1;
#line 174
if(___nl__bool__1){ goto label_4;}
#line 175
c_rt_lib0move(&___nl__im__15,___get_global_const(536));
#line 175
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 175
c_rt_lib0clear(&___nl__im__15);
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
//clear ___nl__bool__1;
#line 175
c_rt_lib0clear(&___nl__im__7);
#line 175
return ___nl__im__14;
#line 176
goto label_1;
#line 176
label_4:
;
#line 176
label_1:
;
#line 176
//clear ___nl__bool__1;
#line 176
c_rt_lib0clear(&___nl__im__7);
#line 176
c_rt_lib0clear(&___nl__im__14);
#line 177
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 177
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(219)));
#line 177
c_rt_lib0clear(&___nl__im__19);
#line 177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(230));
#line 177
c_rt_lib0clear(&___nl__im__18);
#line 177
if(___nl__bool__16){ goto label_8;}
#line 177
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 177
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(219)));
#line 177
c_rt_lib0clear(&___nl__im__21);
#line 177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(231));
#line 177
c_rt_lib0clear(&___nl__im__20);
#line 177
label_8:
;
#line 177
//clear ___nl__bool__17;
#line 177
___nl__bool__16 = !___nl__bool__16;
#line 177
if(___nl__bool__16){ goto label_7;}
#line 178
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 178
c_rt_lib0move(&___nl__im__26,___get_global_const(484));
#line 178
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 178
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 178
c_rt_lib0clear(&___nl__im__26);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
c_rt_lib0move(&___nl__im__28,___get_global_const(420));
#line 178
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__28));
#line 178
c_rt_lib0clear(&___nl__im__25);
#line 178
c_rt_lib0clear(&___nl__im__28);
#line 178
c_rt_lib0move(&___nl__im__29,___get_global_const(299));
#line 178
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0get_compressed_fun_val(___nl__im__23, ___nl__im__24, ___nl__im__29));
#line 178
c_rt_lib0clear(&___nl__im__23);
#line 178
c_rt_lib0clear(&___nl__im__24);
#line 178
c_rt_lib0clear(&___nl__im__29);
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
//clear ___nl__bool__16;
#line 178
return ___nl__im__22;
#line 179
goto label_6;
#line 179
label_7:
;
#line 179
label_6:
;
#line 179
//clear ___nl__bool__16;
#line 179
c_rt_lib0clear(&___nl__im__22);
#line 180
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 181
c_rt_lib0move(&___nl__im__33,___get_global_const(484));
#line 181
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 181
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 181
c_rt_lib0clear(&___nl__im__33);
#line 181
c_rt_lib0clear(&___nl__im__34);
#line 181
c_rt_lib0move(&___nl__im__31, wprinter0build_sim(___nl__im__32));
#line 181
c_rt_lib0clear(&___nl__im__32);
#line 181
c_rt_lib0delete(array0push(&___nl__im__30, ___nl__im__31));
#line 181
c_rt_lib0clear(&___nl__im__31);
#line 183
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 183
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_const(219)));
#line 183
c_rt_lib0clear(&___nl__im__37);
#line 183
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_const(875));
#line 183
c_rt_lib0clear(&___nl__im__36);
#line 183
___nl__bool__35 = !___nl__bool__35;
#line 183
___nl__bool__35 = !___nl__bool__35;
#line 183
if(___nl__bool__35){ goto label_10;}
#line 182
c_rt_lib0move(&___nl__im__40,___get_global_const(420));
#line 182
c_rt_lib0move(&___nl__im__39, wprinter0build_sim(___nl__im__40));
#line 182
c_rt_lib0clear(&___nl__im__40);
#line 182
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 182
c_rt_lib0move(&___nl__im__41, pretty_printer_priv0print_val(___nl__im__42));
#line 182
c_rt_lib0clear(&___nl__im__42);
#line 182
c_rt_lib0move(&___nl__im__44,___get_global_const(299));
#line 182
c_rt_lib0move(&___nl__im__43, wprinter0build_sim(___nl__im__44));
#line 182
c_rt_lib0clear(&___nl__im__44);
#line 182
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(3, ___nl__im__39, ___nl__im__41, ___nl__im__43));
#line 182
c_rt_lib0clear(&___nl__im__39);
#line 182
c_rt_lib0clear(&___nl__im__41);
#line 182
c_rt_lib0clear(&___nl__im__43);
#line 182
c_rt_lib0delete(array0append(&___nl__im__30, ___nl__im__38));
#line 182
c_rt_lib0clear(&___nl__im__38);
#line 182
goto label_9;
#line 182
label_10:
;
#line 182
label_9:
;
#line 182
//clear ___nl__bool__35;
#line 184
c_rt_lib0move(&___nl__im__45, wprinter0build_pretty_op_l(___nl__im__30));
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
c_rt_lib0clear(&___nl__im__30);
#line 184
return ___nl__im__45;
}

wprinter0pretty_t0type pretty_printer_priv0print_variant_case_decl(nast0variant_decl_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
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
#line 188
c_rt_lib0move(&___nl__im__4,___get_global_const(484));
#line 188
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 188
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 188
c_rt_lib0clear(&___nl__im__4);
#line 188
c_rt_lib0clear(&___nl__im__5);
#line 188
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 188
c_rt_lib0clear(&___nl__im__3);
#line 188
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 188
c_rt_lib0clear(&___nl__im__2);
#line 189
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 189
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(219));
#line 189
if(___nl__bool__7){ goto label_2;}
#line 191
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(73));
#line 191
if(___nl__bool__7){ goto label_3;}
#line 191
c_rt_lib0move(&___nl__im__8,___get_global_const(16));
#line 191
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 191
nl_die_arg(___nl__im__8);
#line 189
label_2:
;
#line 189
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(219)));
#line 189
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 190
c_rt_lib0move(&___nl__im__13,___get_global_const(420));
#line 190
c_rt_lib0move(&___nl__im__12, wprinter0build_sim(___nl__im__13));
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(452)));
#line 190
c_rt_lib0move(&___nl__im__14, pretty_printer_priv0print_var_decl(___nl__im__15));
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0move(&___nl__im__17,___get_global_const(299));
#line 190
c_rt_lib0move(&___nl__im__16, wprinter0build_sim(___nl__im__17));
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(3, ___nl__im__12, ___nl__im__14, ___nl__im__16));
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__11));
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 191
goto label_1;
#line 191
label_3:
;
#line 192
goto label_1;
#line 192
label_1:
;
#line 193
c_rt_lib0move(&___nl__im__18, wprinter0build_pretty_op_l(___nl__im__1));
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
c_rt_lib0clear(&___nl__im__6);
#line 193
//clear ___nl__bool__7;
#line 193
c_rt_lib0clear(&___nl__im__8);
#line 193
c_rt_lib0clear(&___nl__im__9);
#line 193
c_rt_lib0clear(&___nl__im__10);
#line 193
return ___nl__im__18;
}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_fun_arg(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 197
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 198
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 198
___nl__int__3 = 0;
#line 198
___nl__int__4 = 1;
#line 198
label_3:
;
#line 198
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 198
___nl__bool__5 = ___nl__int__6;
#line 198
if(___nl__bool__5){ goto label_1;}
#line 199
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 199
c_rt_lib0move(&___nl__im__7, pretty_printer_priv0print_fun_arg(___nl__im__8));
#line 199
c_rt_lib0clear(&___nl__im__8);
#line 199
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 200
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 200
___nl__int__12 = 1;
#line 200
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 200
//clear ___nl__int__11;
#line 200
//clear ___nl__int__12;
#line 200
___nl__int__13 = ___nl__int__3 != ___nl__int__10;
#line 200
___nl__bool__9 = ___nl__int__13;
#line 200
//clear ___nl__int__10;
#line 200
//clear ___nl__int__13;
#line 200
___nl__bool__9 = !___nl__bool__9;
#line 200
if(___nl__bool__9){ goto label_5;}
#line 200
c_rt_lib0move(&___nl__im__16,___get_global_const(295));
#line 200
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 200
c_rt_lib0clear(&___nl__im__16);
#line 200
c_rt_lib0move(&___nl__im__17, wprinter0get_sep());
#line 200
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__17));
#line 200
c_rt_lib0clear(&___nl__im__15);
#line 200
c_rt_lib0clear(&___nl__im__17);
#line 200
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__14));
#line 200
c_rt_lib0clear(&___nl__im__14);
#line 200
goto label_4;
#line 200
label_5:
;
#line 200
label_4:
;
#line 200
//clear ___nl__bool__9;
#line 200
label_2:
;
#line 201
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 201
goto label_3;
#line 201
label_1:
;
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
//clear ___nl__int__2;
#line 202
//clear ___nl__int__3;
#line 202
//clear ___nl__int__4;
#line 202
//clear ___nl__bool__5;
#line 202
//clear ___nl__int__6;
#line 202
return ___nl__im__1;
}

wprinter0pretty_t0type pretty_printer_priv0print_fun_arg(nast0fun_val_arg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
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
#line 206
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 207
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(266)));
#line 207
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(40));
#line 207
if(___nl__bool__3){ goto label_2;}
#line 209
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(73));
#line 209
if(___nl__bool__3){ goto label_3;}
#line 209
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 209
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 209
nl_die_arg(___nl__im__4);
#line 207
label_2:
;
#line 208
c_rt_lib0move(&___nl__im__7,___get_global_const(40));
#line 208
c_rt_lib0move(&___nl__im__6, wprinter0build_sim(___nl__im__7));
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 208
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__8));
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__5));
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 209
goto label_1;
#line 209
label_3:
;
#line 210
goto label_1;
#line 210
label_1:
;
#line 211
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 211
c_rt_lib0move(&___nl__im__9, pretty_printer_priv0print_val(___nl__im__10));
#line 211
c_rt_lib0clear(&___nl__im__10);
#line 211
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__9));
#line 211
c_rt_lib0clear(&___nl__im__9);
#line 212
c_rt_lib0move(&___nl__im__11, wprinter0build_pretty_op_l(___nl__im__1));
#line 212
c_rt_lib0clear(&___nl__im__0);
#line 212
c_rt_lib0clear(&___nl__im__1);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
//clear ___nl__bool__3;
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
return ___nl__im__11;
}

INT  pretty_printer_priv0count_structs(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
#line 216
___nl__int__1 = 0;
#line 217
___nl__int__3 = 0;
#line 217
___nl__int__4 = 1;
#line 217
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 217
label_3:
;
#line 217
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 217
___nl__bool__6 = ___nl__int__7;
#line 217
if(___nl__bool__6){ goto label_1;}
#line 217
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 217
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 218
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(224)));
#line 218
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(219)));
#line 218
c_rt_lib0clear(&___nl__im__12);
#line 218
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(230));
#line 218
c_rt_lib0clear(&___nl__im__11);
#line 218
if(___nl__bool__9){ goto label_6;}
#line 218
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(224)));
#line 218
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(219)));
#line 218
c_rt_lib0clear(&___nl__im__14);
#line 218
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(231));
#line 218
c_rt_lib0clear(&___nl__im__13);
#line 218
label_6:
;
#line 218
//clear ___nl__bool__10;
#line 218
___nl__bool__9 = !___nl__bool__9;
#line 218
if(___nl__bool__9){ goto label_5;}
#line 218
___nl__int__15 = 1;
#line 218
___nl__int__1 = ___nl__int__1 + ___nl__int__15;
#line 218
//clear ___nl__int__15;
#line 218
goto label_4;
#line 218
label_5:
;
#line 218
label_4:
;
#line 218
//clear ___nl__bool__9;
#line 218
c_rt_lib0clear(&___nl__im__2);
#line 218
label_2:
;
#line 219
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 219
goto label_3;
#line 219
label_1:
;
#line 220
c_rt_lib0clear(&___nl__im__0);
#line 220
c_rt_lib0clear(&___nl__im__2);
#line 220
//clear ___nl__int__3;
#line 220
//clear ___nl__int__4;
#line 220
//clear ___nl__int__5;
#line 220
//clear ___nl__bool__6;
#line 220
//clear ___nl__int__7;
#line 220
c_rt_lib0clear(&___nl__im__8);
#line 220
return ___nl__int__1;
}

wprinter0pretty_t0type pretty_printer_priv0get_compressed_fun_val(nast0value_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
pretty_printer_priv0__const__init();
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
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
#line 224
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 225
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 226
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 227
label_2:
;
#line 228
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 228
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(230));
#line 228
c_rt_lib0clear(&___nl__im__7);
#line 228
___nl__bool__6 = !___nl__bool__6;
#line 228
if(___nl__bool__6){ goto label_4;}
#line 229
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 229
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 229
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(230)));
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 229
c_rt_lib0clear(&___nl__im__10);
#line 230
c_rt_lib0move(&___nl__im__11,___get_global_const(297));
#line 230
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 230
c_rt_lib0clear(&___nl__im__11);
#line 231
c_rt_lib0move(&___nl__im__12,___get_global_const(298));
#line 231
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__12, ___nl__im__5));
#line 231
c_rt_lib0clear(&___nl__im__12);
#line 232
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 232
___nl__int__15 = 1;
#line 232
___nl__int__16 = ___nl__int__14 != ___nl__int__15;
#line 232
___nl__bool__13 = ___nl__int__16;
#line 232
//clear ___nl__int__14;
#line 232
//clear ___nl__int__15;
#line 232
//clear ___nl__int__16;
#line 232
___nl__bool__13 = !___nl__bool__13;
#line 232
if(___nl__bool__13){ goto label_6;}
#line 233
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_val(___nl__im__8));
#line 234
goto label_1;
#line 235
goto label_5;
#line 235
label_6:
;
#line 235
label_5:
;
#line 235
//clear ___nl__bool__13;
#line 236
___nl__int__17 = 0;
#line 236
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 236
//clear ___nl__int__17;
#line 237
goto label_3;
#line 237
label_4:
;
#line 237
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 237
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(231));
#line 237
c_rt_lib0clear(&___nl__im__18);
#line 237
___nl__bool__6 = !___nl__bool__6;
#line 237
if(___nl__bool__6){ goto label_7;}
#line 238
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 238
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 238
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(231)));
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 238
c_rt_lib0clear(&___nl__im__21);
#line 239
c_rt_lib0move(&___nl__im__22,___get_global_const(291));
#line 239
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__22));
#line 239
c_rt_lib0clear(&___nl__im__22);
#line 240
c_rt_lib0move(&___nl__im__23,___get_global_const(292));
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__23, ___nl__im__5));
#line 240
c_rt_lib0clear(&___nl__im__23);
#line 241
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_hash_elem(___nl__im__19));
#line 242
goto label_1;
#line 243
goto label_3;
#line 243
label_7:
;
#line 244
c_rt_lib0move(&___nl__im__24, pretty_printer_priv0print_val(___nl__im__0));
#line 244
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(1, ___nl__im__24));
#line 244
c_rt_lib0clear(&___nl__im__24);
#line 245
goto label_1;
#line 246
goto label_3;
#line 246
label_3:
;
#line 246
//clear ___nl__bool__6;
#line 246
c_rt_lib0clear(&___nl__im__8);
#line 246
c_rt_lib0clear(&___nl__im__19);
#line 227
goto label_2;
#line 227
label_1:
;
#line 248
c_rt_lib0move(&___nl__im__25, wprinter0build_pretty_arr_decl(___nl__im__3, ___nl__im__4, ___nl__im__5));
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
c_rt_lib0clear(&___nl__im__2);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
c_rt_lib0clear(&___nl__im__4);
#line 248
c_rt_lib0clear(&___nl__im__5);
#line 248
return ___nl__im__25;
}

ImmT  pretty_printer_priv0print_st(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 252
c_rt_lib0move(&___nl__im__3,___get_global_const(429));
#line 252
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__3));
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 253
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__1, ___nl__int__2));
#line 253
c_rt_lib0clear(&___nl__im__1);
#line 253
//clear ___nl__int__2;
#line 253
return NULL;
}

ImmT  pretty_printer_priv0get_fun_label(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 257
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 257
___nl__bool__3 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 257
c_rt_lib0clear(&___nl__im__4);
#line 257
if(___nl__bool__3){ goto label_2;}
#line 257
c_rt_lib0move(&___nl__im__6,___get_global_const(35));
#line 257
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__1, ___nl__im__6));
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 257
goto label_1;
#line 257
label_2:
;
#line 257
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 257
label_1:
;
#line 257
//clear ___nl__bool__3;
#line 257
c_rt_lib0clear(&___nl__im__0);
#line 257
c_rt_lib0clear(&___nl__im__1);
#line 257
return ___nl__im__2;
}

ImmT  pretty_printer_priv0string_to_nl(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 261
c_rt_lib0move(&___nl__im__2,___get_global_const(576));
#line 261
c_rt_lib0move(&___nl__im__3,___get_global_const(1085));
#line 261
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__0, ___nl__im__2, ___nl__im__3));
#line 261
c_rt_lib0clear(&___nl__im__2);
#line 261
c_rt_lib0clear(&___nl__im__3);
#line 261
c_rt_lib0clear(&___nl__im__0);
#line 261
return ___nl__im__1;
}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_val(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 265
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 266
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 266
___nl__int__3 = 0;
#line 266
___nl__int__4 = 1;
#line 266
label_3:
;
#line 266
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 266
___nl__bool__5 = ___nl__int__6;
#line 266
if(___nl__bool__5){ goto label_1;}
#line 267
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 267
c_rt_lib0move(&___nl__im__7, pretty_printer_priv0print_val(___nl__im__8));
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 268
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 268
___nl__int__12 = 1;
#line 268
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 268
//clear ___nl__int__11;
#line 268
//clear ___nl__int__12;
#line 268
___nl__int__13 = ___nl__int__3 != ___nl__int__10;
#line 268
___nl__bool__9 = ___nl__int__13;
#line 268
//clear ___nl__int__10;
#line 268
//clear ___nl__int__13;
#line 268
___nl__bool__9 = !___nl__bool__9;
#line 268
if(___nl__bool__9){ goto label_5;}
#line 268
c_rt_lib0move(&___nl__im__16,___get_global_const(295));
#line 268
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 268
c_rt_lib0clear(&___nl__im__16);
#line 268
c_rt_lib0move(&___nl__im__17, wprinter0get_sep());
#line 268
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__17));
#line 268
c_rt_lib0clear(&___nl__im__15);
#line 268
c_rt_lib0clear(&___nl__im__17);
#line 268
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__14));
#line 268
c_rt_lib0clear(&___nl__im__14);
#line 268
goto label_4;
#line 268
label_5:
;
#line 268
label_4:
;
#line 268
//clear ___nl__bool__9;
#line 268
label_2:
;
#line 269
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 269
goto label_3;
#line 269
label_1:
;
#line 270
c_rt_lib0clear(&___nl__im__0);
#line 270
//clear ___nl__int__2;
#line 270
//clear ___nl__int__3;
#line 270
//clear ___nl__int__4;
#line 270
//clear ___nl__bool__5;
#line 270
//clear ___nl__int__6;
#line 270
return ___nl__im__1;
}

bool pretty_printer_priv0is_to_change_ov(nast0value_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
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
INT  ___nl__int__40 = 0;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
bool  ___nl__bool__55 = false;
bool  ___nl__bool__56 = false;
#line 274
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 274
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(855));
#line 274
c_rt_lib0clear(&___nl__im__2);
#line 274
___nl__bool__1 = !___nl__bool__1;
#line 274
___nl__bool__1 = !___nl__bool__1;
#line 274
if(___nl__bool__1){ goto label_2;}
#line 274
___nl__bool__3 = false;
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
//clear ___nl__bool__1;
#line 274
return ___nl__bool__3;
#line 274
goto label_1;
#line 274
label_2:
;
#line 274
label_1:
;
#line 274
//clear ___nl__bool__1;
#line 274
//clear ___nl__bool__3;
#line 275
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 275
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 275
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(855)));
#line 275
c_rt_lib0clear(&___nl__im__5);
#line 275
c_rt_lib0clear(&___nl__im__6);
#line 276
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(265)));
#line 276
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 276
c_rt_lib0clear(&___nl__im__10);
#line 276
___nl__int__11 = 2;
#line 276
___nl__int__12 = ___nl__int__9 == ___nl__int__11;
#line 276
___nl__bool__7 = ___nl__int__12;
#line 276
//clear ___nl__int__9;
#line 276
//clear ___nl__int__11;
#line 276
//clear ___nl__int__12;
#line 276
___nl__bool__8 = !___nl__bool__7;
#line 276
if(___nl__bool__8){ goto label_5;}
#line 276
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(152)));
#line 276
c_rt_lib0move(&___nl__im__15,___get_global_const(819));
#line 276
___nl__bool__7 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 276
c_rt_lib0clear(&___nl__im__14);
#line 276
c_rt_lib0clear(&___nl__im__15);
#line 276
if(___nl__bool__7){ goto label_6;}
#line 276
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(152)));
#line 276
c_rt_lib0move(&___nl__im__17,___get_global_const(1086));
#line 276
___nl__bool__7 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 276
c_rt_lib0clear(&___nl__im__16);
#line 276
c_rt_lib0clear(&___nl__im__17);
#line 276
label_6:
;
#line 276
//clear ___nl__bool__13;
#line 276
label_5:
;
#line 276
//clear ___nl__bool__8;
#line 276
___nl__bool__7 = !___nl__bool__7;
#line 276
if(___nl__bool__7){ goto label_4;}
#line 277
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(168)));
#line 277
c_rt_lib0move(&___nl__im__22,___get_global_const(919));
#line 277
___nl__bool__18 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 277
c_rt_lib0clear(&___nl__im__21);
#line 277
c_rt_lib0clear(&___nl__im__22);
#line 277
if(___nl__bool__18){ goto label_10;}
#line 277
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(168)));
#line 277
c_rt_lib0move(&___nl__im__24,___get_global_const(918));
#line 277
___nl__bool__18 = c_rt_lib0eq(___nl__im__23, ___nl__im__24);
#line 277
c_rt_lib0clear(&___nl__im__23);
#line 277
c_rt_lib0clear(&___nl__im__24);
#line 277
label_10:
;
#line 277
//clear ___nl__bool__20;
#line 277
___nl__bool__19 = !___nl__bool__18;
#line 277
if(___nl__bool__19){ goto label_9;}
#line 277
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(265)));
#line 277
___nl__int__29 = 1;
#line 277
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__28, ___nl__int__29));
#line 277
c_rt_lib0clear(&___nl__im__28);
#line 277
//clear ___nl__int__29;
#line 277
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(224)));
#line 277
c_rt_lib0clear(&___nl__im__27);
#line 277
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(219)));
#line 277
c_rt_lib0clear(&___nl__im__26);
#line 277
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(527));
#line 277
c_rt_lib0clear(&___nl__im__25);
#line 277
label_9:
;
#line 277
//clear ___nl__bool__19;
#line 277
___nl__bool__18 = !___nl__bool__18;
#line 277
if(___nl__bool__18){ goto label_8;}
#line 278
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(265)));
#line 278
___nl__int__35 = 1;
#line 278
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__34, ___nl__int__35));
#line 278
c_rt_lib0clear(&___nl__im__34);
#line 278
//clear ___nl__int__35;
#line 278
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(224)));
#line 278
c_rt_lib0clear(&___nl__im__33);
#line 278
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(219)));
#line 278
c_rt_lib0clear(&___nl__im__32);
#line 278
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(265)));
#line 278
___nl__int__40 = 1;
#line 278
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__39, ___nl__int__40));
#line 278
c_rt_lib0clear(&___nl__im__39);
#line 278
//clear ___nl__int__40;
#line 278
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(224)));
#line 278
c_rt_lib0clear(&___nl__im__38);
#line 278
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_const(219)));
#line 278
c_rt_lib0clear(&___nl__im__37);
#line 278
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__36, ___get_global_const(527)));
#line 278
c_rt_lib0clear(&___nl__im__31);
#line 278
c_rt_lib0clear(&___nl__im__36);
#line 279
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(130)));
#line 279
___nl__int__43 = c_rt_lib0array_len(___nl__im__44);
#line 279
c_rt_lib0clear(&___nl__im__44);
#line 279
___nl__int__45 = 1;
#line 279
___nl__int__46 = ___nl__int__43 == ___nl__int__45;
#line 279
___nl__bool__41 = ___nl__int__46;
#line 279
//clear ___nl__int__43;
#line 279
//clear ___nl__int__45;
#line 279
//clear ___nl__int__46;
#line 279
___nl__bool__42 = !___nl__bool__41;
#line 279
if(___nl__bool__42){ goto label_13;}
#line 279
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(130)));
#line 279
___nl__int__50 = 0;
#line 279
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_get(___nl__im__49, ___nl__int__50));
#line 279
c_rt_lib0clear(&___nl__im__49);
#line 279
//clear ___nl__int__50;
#line 279
c_rt_lib0move(&___nl__im__51,___get_global_const(429));
#line 279
c_rt_lib0move(&___nl__im__47, string0index2(___nl__im__48, ___nl__im__51));
#line 279
c_rt_lib0clear(&___nl__im__48);
#line 279
c_rt_lib0clear(&___nl__im__51);
#line 279
___nl__int__52 = 0;
#line 279
___nl__int__53 = getIntFromImm(___nl__im__47);
#line 279
___nl__int__54 = ___nl__int__53 < ___nl__int__52;
#line 279
___nl__bool__41 = ___nl__int__54;
#line 279
c_rt_lib0clear(&___nl__im__47);
#line 279
//clear ___nl__int__52;
#line 279
//clear ___nl__int__53;
#line 279
//clear ___nl__int__54;
#line 279
label_13:
;
#line 279
//clear ___nl__bool__42;
#line 279
___nl__bool__41 = !___nl__bool__41;
#line 279
if(___nl__bool__41){ goto label_12;}
#line 280
___nl__bool__55 = true;
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
//clear ___nl__bool__7;
#line 280
//clear ___nl__bool__18;
#line 280
c_rt_lib0clear(&___nl__im__30);
#line 280
//clear ___nl__bool__41;
#line 280
return ___nl__bool__55;
#line 281
goto label_11;
#line 281
label_12:
;
#line 281
label_11:
;
#line 281
//clear ___nl__bool__41;
#line 281
//clear ___nl__bool__55;
#line 282
goto label_7;
#line 282
label_8:
;
#line 282
label_7:
;
#line 282
//clear ___nl__bool__18;
#line 282
c_rt_lib0clear(&___nl__im__30);
#line 283
goto label_3;
#line 283
label_4:
;
#line 283
label_3:
;
#line 283
//clear ___nl__bool__7;
#line 284
___nl__bool__56 = false;
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
return ___nl__bool__56;
}

wprinter0pretty_t0type pretty_printer_priv0print_val(nast0value_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
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
bool  ___nl__bool__78 = false;
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
bool  ___nl__bool__107 = false;
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
bool  ___nl__bool__195 = false;
INT  ___nl__int__196 = 0;
ImmT  ___nl__im__197 = NULL;
INT  ___nl__int__198 = 0;
INT  ___nl__int__199 = 0;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
INT  ___nl__int__203 = 0;
bool  ___nl__bool__204 = false;
bool  ___nl__bool__205 = false;
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
INT  ___nl__int__216 = 0;
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
INT  ___nl__int__236 = 0;
INT  ___nl__int__237 = 0;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
bool  ___nl__bool__244 = false;
bool  ___nl__bool__245 = false;
bool  ___nl__bool__246 = false;
INT  ___nl__int__247 = 0;
ImmT  ___nl__im__248 = NULL;
INT  ___nl__int__249 = 0;
ImmT  ___nl__im__250 = NULL;
INT  ___nl__int__251 = 0;
INT  ___nl__int__252 = 0;
ImmT  ___nl__im__253 = NULL;
INT  ___nl__int__254 = 0;
INT  ___nl__int__255 = 0;
bool  ___nl__bool__256 = false;
INT  ___nl__int__257 = 0;
ImmT  ___nl__im__258 = NULL;
INT  ___nl__int__259 = 0;
INT  ___nl__int__260 = 0;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
INT  ___nl__int__265 = 0;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
INT  ___nl__int__269 = 0;
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
#line 288
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 288
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(222));
#line 288
if(___nl__bool__2){ goto label_2;}
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(527));
#line 290
if(___nl__bool__2){ goto label_3;}
#line 300
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(897));
#line 300
if(___nl__bool__2){ goto label_4;}
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(517));
#line 302
if(___nl__bool__2){ goto label_5;}
#line 304
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(463));
#line 304
if(___nl__bool__2){ goto label_6;}
#line 306
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(894));
#line 306
if(___nl__bool__2){ goto label_7;}
#line 308
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(896));
#line 308
if(___nl__bool__2){ goto label_8;}
#line 316
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(234));
#line 316
if(___nl__bool__2){ goto label_9;}
#line 367
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(901));
#line 367
if(___nl__bool__2){ goto label_10;}
#line 369
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(900));
#line 369
if(___nl__bool__2){ goto label_11;}
#line 371
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(898));
#line 371
if(___nl__bool__2){ goto label_12;}
#line 373
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(855));
#line 373
if(___nl__bool__2){ goto label_13;}
#line 397
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(875));
#line 397
if(___nl__bool__2){ goto label_14;}
#line 399
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(230));
#line 399
if(___nl__bool__2){ goto label_15;}
#line 401
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(231));
#line 401
if(___nl__bool__2){ goto label_16;}
#line 403
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(899));
#line 403
if(___nl__bool__2){ goto label_17;}
#line 403
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 403
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 403
nl_die_arg(___nl__im__3);
#line 288
label_2:
;
#line 288
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(222)));
#line 288
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 289
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__int__4));
#line 289
c_rt_lib0move(&___nl__im__6, wprinter0build_sim(___nl__im__7));
#line 289
c_rt_lib0clear(&___nl__im__7);
#line 289
c_rt_lib0clear(&___nl__im__0);
#line 289
c_rt_lib0clear(&___nl__im__1);
#line 289
//clear ___nl__bool__2;
#line 289
c_rt_lib0clear(&___nl__im__3);
#line 289
//clear ___nl__int__4;
#line 289
c_rt_lib0clear(&___nl__im__5);
#line 289
return ___nl__im__6;
#line 290
goto label_1;
#line 290
label_3:
;
#line 290
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(527)));
#line 290
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 291
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 292
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(130)));
#line 292
___nl__int__13 = 0;
#line 292
___nl__int__14 = 1;
#line 292
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 292
label_20:
;
#line 292
___nl__int__17 = ___nl__int__13 >= ___nl__int__15;
#line 292
___nl__bool__16 = ___nl__int__17;
#line 292
if(___nl__bool__16){ goto label_18;}
#line 292
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 292
c_rt_lib0copy(&___nl__im__12, ___nl__im__18);
#line 293
c_rt_lib0move(&___nl__im__20,___get_global_const(576));
#line 293
c_rt_lib0move(&___nl__im__21, pretty_printer_priv0string_to_nl(___nl__im__12));
#line 293
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__21));
#line 293
c_rt_lib0clear(&___nl__im__20);
#line 293
c_rt_lib0clear(&___nl__im__21);
#line 293
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__19));
#line 293
c_rt_lib0clear(&___nl__im__19);
#line 293
c_rt_lib0clear(&___nl__im__12);
#line 293
label_19:
;
#line 294
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 294
goto label_20;
#line 294
label_18:
;
#line 295
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(934)));
#line 295
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_const(933));
#line 295
if(___nl__bool__23){ goto label_22;}
#line 296
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_const(932));
#line 296
if(___nl__bool__23){ goto label_23;}
#line 296
c_rt_lib0move(&___nl__im__24,___get_global_const(16));
#line 296
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__22));
#line 296
nl_die_arg(___nl__im__24);
#line 295
label_22:
;
#line 296
goto label_21;
#line 296
label_23:
;
#line 297
___nl__int__27 = c_rt_lib0array_len(___nl__im__10);
#line 297
___nl__int__28 = 1;
#line 297
___nl__int__26 = ___nl__int__27 - ___nl__int__28;
#line 297
//clear ___nl__int__27;
#line 297
//clear ___nl__int__28;
#line 297
___nl__int__32 = c_rt_lib0array_len(___nl__im__10);
#line 297
___nl__int__33 = 1;
#line 297
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 297
//clear ___nl__int__32;
#line 297
//clear ___nl__int__33;
#line 297
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__10, ___nl__int__31));
#line 297
//clear ___nl__int__31;
#line 297
c_rt_lib0move(&___nl__im__34,___get_global_const(576));
#line 297
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__34));
#line 297
c_rt_lib0clear(&___nl__im__30);
#line 297
c_rt_lib0clear(&___nl__im__34);
#line 297
c_rt_lib0copy(&___nl__im__25, ___nl__im__29);
#line 297
c_rt_lib0array_set(&___nl__im__10, ___nl__int__26, ___nl__im__25);
#line 297
c_rt_lib0clear(&___nl__im__25);
#line 297
//clear ___nl__int__26;
#line 297
c_rt_lib0clear(&___nl__im__29);
#line 298
goto label_21;
#line 298
label_21:
;
#line 299
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(934)));
#line 299
c_rt_lib0move(&___nl__im__35, wprinter0build_str_arr(___nl__im__10, ___nl__im__36));
#line 299
c_rt_lib0clear(&___nl__im__36);
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
//clear ___nl__bool__2;
#line 299
c_rt_lib0clear(&___nl__im__3);
#line 299
//clear ___nl__int__4;
#line 299
c_rt_lib0clear(&___nl__im__5);
#line 299
c_rt_lib0clear(&___nl__im__6);
#line 299
c_rt_lib0clear(&___nl__im__8);
#line 299
c_rt_lib0clear(&___nl__im__9);
#line 299
c_rt_lib0clear(&___nl__im__10);
#line 299
c_rt_lib0clear(&___nl__im__11);
#line 299
c_rt_lib0clear(&___nl__im__12);
#line 299
//clear ___nl__int__13;
#line 299
//clear ___nl__int__14;
#line 299
//clear ___nl__int__15;
#line 299
//clear ___nl__bool__16;
#line 299
//clear ___nl__int__17;
#line 299
c_rt_lib0clear(&___nl__im__18);
#line 299
c_rt_lib0clear(&___nl__im__22);
#line 299
//clear ___nl__bool__23;
#line 299
c_rt_lib0clear(&___nl__im__24);
#line 299
return ___nl__im__35;
#line 300
goto label_1;
#line 300
label_4:
;
#line 300
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(897)));
#line 300
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 301
c_rt_lib0move(&___nl__im__39, wprinter0build_sim(___nl__im__37));
#line 301
c_rt_lib0clear(&___nl__im__0);
#line 301
c_rt_lib0clear(&___nl__im__1);
#line 301
//clear ___nl__bool__2;
#line 301
c_rt_lib0clear(&___nl__im__3);
#line 301
//clear ___nl__int__4;
#line 301
c_rt_lib0clear(&___nl__im__5);
#line 301
c_rt_lib0clear(&___nl__im__6);
#line 301
c_rt_lib0clear(&___nl__im__8);
#line 301
c_rt_lib0clear(&___nl__im__9);
#line 301
c_rt_lib0clear(&___nl__im__10);
#line 301
c_rt_lib0clear(&___nl__im__11);
#line 301
c_rt_lib0clear(&___nl__im__12);
#line 301
//clear ___nl__int__13;
#line 301
//clear ___nl__int__14;
#line 301
//clear ___nl__int__15;
#line 301
//clear ___nl__bool__16;
#line 301
//clear ___nl__int__17;
#line 301
c_rt_lib0clear(&___nl__im__18);
#line 301
c_rt_lib0clear(&___nl__im__22);
#line 301
//clear ___nl__bool__23;
#line 301
c_rt_lib0clear(&___nl__im__24);
#line 301
c_rt_lib0clear(&___nl__im__35);
#line 301
c_rt_lib0clear(&___nl__im__37);
#line 301
c_rt_lib0clear(&___nl__im__38);
#line 301
return ___nl__im__39;
#line 302
goto label_1;
#line 302
label_5:
;
#line 302
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(517)));
#line 302
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 303
c_rt_lib0move(&___nl__im__42, pretty_printer_priv0print_variant(___nl__im__40));
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
//clear ___nl__bool__2;
#line 303
c_rt_lib0clear(&___nl__im__3);
#line 303
//clear ___nl__int__4;
#line 303
c_rt_lib0clear(&___nl__im__5);
#line 303
c_rt_lib0clear(&___nl__im__6);
#line 303
c_rt_lib0clear(&___nl__im__8);
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 303
c_rt_lib0clear(&___nl__im__10);
#line 303
c_rt_lib0clear(&___nl__im__11);
#line 303
c_rt_lib0clear(&___nl__im__12);
#line 303
//clear ___nl__int__13;
#line 303
//clear ___nl__int__14;
#line 303
//clear ___nl__int__15;
#line 303
//clear ___nl__bool__16;
#line 303
//clear ___nl__int__17;
#line 303
c_rt_lib0clear(&___nl__im__18);
#line 303
c_rt_lib0clear(&___nl__im__22);
#line 303
//clear ___nl__bool__23;
#line 303
c_rt_lib0clear(&___nl__im__24);
#line 303
c_rt_lib0clear(&___nl__im__35);
#line 303
c_rt_lib0clear(&___nl__im__37);
#line 303
c_rt_lib0clear(&___nl__im__38);
#line 303
c_rt_lib0clear(&___nl__im__39);
#line 303
c_rt_lib0clear(&___nl__im__40);
#line 303
c_rt_lib0clear(&___nl__im__41);
#line 303
return ___nl__im__42;
#line 304
goto label_1;
#line 304
label_6:
;
#line 304
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(463)));
#line 304
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 305
c_rt_lib0move(&___nl__im__45, wprinter0build_sim(___nl__im__43));
#line 305
c_rt_lib0clear(&___nl__im__0);
#line 305
c_rt_lib0clear(&___nl__im__1);
#line 305
//clear ___nl__bool__2;
#line 305
c_rt_lib0clear(&___nl__im__3);
#line 305
//clear ___nl__int__4;
#line 305
c_rt_lib0clear(&___nl__im__5);
#line 305
c_rt_lib0clear(&___nl__im__6);
#line 305
c_rt_lib0clear(&___nl__im__8);
#line 305
c_rt_lib0clear(&___nl__im__9);
#line 305
c_rt_lib0clear(&___nl__im__10);
#line 305
c_rt_lib0clear(&___nl__im__11);
#line 305
c_rt_lib0clear(&___nl__im__12);
#line 305
//clear ___nl__int__13;
#line 305
//clear ___nl__int__14;
#line 305
//clear ___nl__int__15;
#line 305
//clear ___nl__bool__16;
#line 305
//clear ___nl__int__17;
#line 305
c_rt_lib0clear(&___nl__im__18);
#line 305
c_rt_lib0clear(&___nl__im__22);
#line 305
//clear ___nl__bool__23;
#line 305
c_rt_lib0clear(&___nl__im__24);
#line 305
c_rt_lib0clear(&___nl__im__35);
#line 305
c_rt_lib0clear(&___nl__im__37);
#line 305
c_rt_lib0clear(&___nl__im__38);
#line 305
c_rt_lib0clear(&___nl__im__39);
#line 305
c_rt_lib0clear(&___nl__im__40);
#line 305
c_rt_lib0clear(&___nl__im__41);
#line 305
c_rt_lib0clear(&___nl__im__42);
#line 305
c_rt_lib0clear(&___nl__im__43);
#line 305
c_rt_lib0clear(&___nl__im__44);
#line 305
return ___nl__im__45;
#line 306
goto label_1;
#line 306
label_7:
;
#line 306
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(894)));
#line 306
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 307
c_rt_lib0move(&___nl__im__51,___get_global_const(420));
#line 307
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__51));
#line 307
c_rt_lib0clear(&___nl__im__51);
#line 307
c_rt_lib0move(&___nl__im__52, pretty_printer_priv0print_val(___nl__im__46));
#line 307
c_rt_lib0move(&___nl__im__54,___get_global_const(299));
#line 307
c_rt_lib0move(&___nl__im__53, wprinter0build_sim(___nl__im__54));
#line 307
c_rt_lib0clear(&___nl__im__54);
#line 307
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(3, ___nl__im__50, ___nl__im__52, ___nl__im__53));
#line 307
c_rt_lib0clear(&___nl__im__50);
#line 307
c_rt_lib0clear(&___nl__im__52);
#line 307
c_rt_lib0clear(&___nl__im__53);
#line 307
c_rt_lib0move(&___nl__im__48, wprinter0build_pretty_a(___nl__im__49));
#line 307
c_rt_lib0clear(&___nl__im__49);
#line 307
c_rt_lib0clear(&___nl__im__0);
#line 307
c_rt_lib0clear(&___nl__im__1);
#line 307
//clear ___nl__bool__2;
#line 307
c_rt_lib0clear(&___nl__im__3);
#line 307
//clear ___nl__int__4;
#line 307
c_rt_lib0clear(&___nl__im__5);
#line 307
c_rt_lib0clear(&___nl__im__6);
#line 307
c_rt_lib0clear(&___nl__im__8);
#line 307
c_rt_lib0clear(&___nl__im__9);
#line 307
c_rt_lib0clear(&___nl__im__10);
#line 307
c_rt_lib0clear(&___nl__im__11);
#line 307
c_rt_lib0clear(&___nl__im__12);
#line 307
//clear ___nl__int__13;
#line 307
//clear ___nl__int__14;
#line 307
//clear ___nl__int__15;
#line 307
//clear ___nl__bool__16;
#line 307
//clear ___nl__int__17;
#line 307
c_rt_lib0clear(&___nl__im__18);
#line 307
c_rt_lib0clear(&___nl__im__22);
#line 307
//clear ___nl__bool__23;
#line 307
c_rt_lib0clear(&___nl__im__24);
#line 307
c_rt_lib0clear(&___nl__im__35);
#line 307
c_rt_lib0clear(&___nl__im__37);
#line 307
c_rt_lib0clear(&___nl__im__38);
#line 307
c_rt_lib0clear(&___nl__im__39);
#line 307
c_rt_lib0clear(&___nl__im__40);
#line 307
c_rt_lib0clear(&___nl__im__41);
#line 307
c_rt_lib0clear(&___nl__im__42);
#line 307
c_rt_lib0clear(&___nl__im__43);
#line 307
c_rt_lib0clear(&___nl__im__44);
#line 307
c_rt_lib0clear(&___nl__im__45);
#line 307
c_rt_lib0clear(&___nl__im__46);
#line 307
c_rt_lib0clear(&___nl__im__47);
#line 307
return ___nl__im__48;
#line 308
goto label_1;
#line 308
label_8:
;
#line 308
c_rt_lib0move(&___nl__im__56, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(896)));
#line 308
c_rt_lib0copy(&___nl__im__55, ___nl__im__56);
#line 310
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(902)));
#line 310
c_rt_lib0move(&___nl__im__59, pretty_printer_priv0print_val(___nl__im__60));
#line 310
c_rt_lib0clear(&___nl__im__60);
#line 311
c_rt_lib0move(&___nl__im__61, wprinter0get_sep());
#line 312
c_rt_lib0move(&___nl__im__65,___get_global_const(1087));
#line 312
c_rt_lib0move(&___nl__im__64, wprinter0build_sim(___nl__im__65));
#line 312
c_rt_lib0clear(&___nl__im__65);
#line 312
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(903)));
#line 312
c_rt_lib0move(&___nl__im__66, pretty_printer_priv0print_val(___nl__im__67));
#line 312
c_rt_lib0clear(&___nl__im__67);
#line 312
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__64, ___nl__im__66));
#line 312
c_rt_lib0clear(&___nl__im__64);
#line 312
c_rt_lib0clear(&___nl__im__66);
#line 312
c_rt_lib0move(&___nl__im__62, wprinter0build_pretty_op_l(___nl__im__63));
#line 312
c_rt_lib0clear(&___nl__im__63);
#line 313
c_rt_lib0move(&___nl__im__68, wprinter0get_sep());
#line 314
c_rt_lib0move(&___nl__im__72,___get_global_const(726));
#line 314
c_rt_lib0move(&___nl__im__71, wprinter0build_sim(___nl__im__72));
#line 314
c_rt_lib0clear(&___nl__im__72);
#line 314
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(904)));
#line 314
c_rt_lib0move(&___nl__im__73, pretty_printer_priv0print_val(___nl__im__74));
#line 314
c_rt_lib0clear(&___nl__im__74);
#line 314
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(2, ___nl__im__71, ___nl__im__73));
#line 314
c_rt_lib0clear(&___nl__im__71);
#line 314
c_rt_lib0clear(&___nl__im__73);
#line 314
c_rt_lib0move(&___nl__im__69, wprinter0build_pretty_op_l(___nl__im__70));
#line 314
c_rt_lib0clear(&___nl__im__70);
#line 314
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(5, ___nl__im__59, ___nl__im__61, ___nl__im__62, ___nl__im__68, ___nl__im__69));
#line 314
c_rt_lib0clear(&___nl__im__59);
#line 314
c_rt_lib0clear(&___nl__im__61);
#line 314
c_rt_lib0clear(&___nl__im__62);
#line 314
c_rt_lib0clear(&___nl__im__68);
#line 314
c_rt_lib0clear(&___nl__im__69);
#line 314
c_rt_lib0move(&___nl__im__57, wprinter0build_pretty_a(___nl__im__58));
#line 314
c_rt_lib0clear(&___nl__im__58);
#line 314
c_rt_lib0clear(&___nl__im__0);
#line 314
c_rt_lib0clear(&___nl__im__1);
#line 314
//clear ___nl__bool__2;
#line 314
c_rt_lib0clear(&___nl__im__3);
#line 314
//clear ___nl__int__4;
#line 314
c_rt_lib0clear(&___nl__im__5);
#line 314
c_rt_lib0clear(&___nl__im__6);
#line 314
c_rt_lib0clear(&___nl__im__8);
#line 314
c_rt_lib0clear(&___nl__im__9);
#line 314
c_rt_lib0clear(&___nl__im__10);
#line 314
c_rt_lib0clear(&___nl__im__11);
#line 314
c_rt_lib0clear(&___nl__im__12);
#line 314
//clear ___nl__int__13;
#line 314
//clear ___nl__int__14;
#line 314
//clear ___nl__int__15;
#line 314
//clear ___nl__bool__16;
#line 314
//clear ___nl__int__17;
#line 314
c_rt_lib0clear(&___nl__im__18);
#line 314
c_rt_lib0clear(&___nl__im__22);
#line 314
//clear ___nl__bool__23;
#line 314
c_rt_lib0clear(&___nl__im__24);
#line 314
c_rt_lib0clear(&___nl__im__35);
#line 314
c_rt_lib0clear(&___nl__im__37);
#line 314
c_rt_lib0clear(&___nl__im__38);
#line 314
c_rt_lib0clear(&___nl__im__39);
#line 314
c_rt_lib0clear(&___nl__im__40);
#line 314
c_rt_lib0clear(&___nl__im__41);
#line 314
c_rt_lib0clear(&___nl__im__42);
#line 314
c_rt_lib0clear(&___nl__im__43);
#line 314
c_rt_lib0clear(&___nl__im__44);
#line 314
c_rt_lib0clear(&___nl__im__45);
#line 314
c_rt_lib0clear(&___nl__im__46);
#line 314
c_rt_lib0clear(&___nl__im__47);
#line 314
c_rt_lib0clear(&___nl__im__48);
#line 314
c_rt_lib0clear(&___nl__im__55);
#line 314
c_rt_lib0clear(&___nl__im__56);
#line 314
return ___nl__im__57;
#line 316
goto label_1;
#line 316
label_9:
;
#line 316
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(234)));
#line 316
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 317
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(514)));
#line 318
c_rt_lib0move(&___nl__im__79,___get_global_const(891));
#line 318
___nl__bool__78 = c_rt_lib0eq(___nl__im__77, ___nl__im__79);
#line 318
c_rt_lib0clear(&___nl__im__79);
#line 318
___nl__bool__78 = !___nl__bool__78;
#line 318
if(___nl__bool__78){ goto label_25;}
#line 320
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 320
c_rt_lib0move(&___nl__im__84, pretty_printer_priv0print_val(___nl__im__85));
#line 320
c_rt_lib0clear(&___nl__im__85);
#line 320
c_rt_lib0move(&___nl__im__87,___get_global_const(297));
#line 320
c_rt_lib0move(&___nl__im__86, wprinter0build_sim(___nl__im__87));
#line 320
c_rt_lib0clear(&___nl__im__87);
#line 320
c_rt_lib0move(&___nl__im__83, c_rt_lib0array_mk(2, ___nl__im__84, ___nl__im__86));
#line 320
c_rt_lib0clear(&___nl__im__84);
#line 320
c_rt_lib0clear(&___nl__im__86);
#line 320
c_rt_lib0move(&___nl__im__82, wprinter0build_pretty_l(___nl__im__83));
#line 320
c_rt_lib0clear(&___nl__im__83);
#line 321
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 321
c_rt_lib0move(&___nl__im__88, pretty_printer_priv0print_val(___nl__im__89));
#line 321
c_rt_lib0clear(&___nl__im__89);
#line 322
c_rt_lib0move(&___nl__im__91,___get_global_const(298));
#line 322
c_rt_lib0move(&___nl__im__90, wprinter0build_sim(___nl__im__91));
#line 322
c_rt_lib0clear(&___nl__im__91);
#line 322
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(3, ___nl__im__82, ___nl__im__88, ___nl__im__90));
#line 322
c_rt_lib0clear(&___nl__im__82);
#line 322
c_rt_lib0clear(&___nl__im__88);
#line 322
c_rt_lib0clear(&___nl__im__90);
#line 322
c_rt_lib0move(&___nl__im__80, wprinter0build_pretty_a(___nl__im__81));
#line 322
c_rt_lib0clear(&___nl__im__81);
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
//clear ___nl__bool__2;
#line 322
c_rt_lib0clear(&___nl__im__3);
#line 322
//clear ___nl__int__4;
#line 322
c_rt_lib0clear(&___nl__im__5);
#line 322
c_rt_lib0clear(&___nl__im__6);
#line 322
c_rt_lib0clear(&___nl__im__8);
#line 322
c_rt_lib0clear(&___nl__im__9);
#line 322
c_rt_lib0clear(&___nl__im__10);
#line 322
c_rt_lib0clear(&___nl__im__11);
#line 322
c_rt_lib0clear(&___nl__im__12);
#line 322
//clear ___nl__int__13;
#line 322
//clear ___nl__int__14;
#line 322
//clear ___nl__int__15;
#line 322
//clear ___nl__bool__16;
#line 322
//clear ___nl__int__17;
#line 322
c_rt_lib0clear(&___nl__im__18);
#line 322
c_rt_lib0clear(&___nl__im__22);
#line 322
//clear ___nl__bool__23;
#line 322
c_rt_lib0clear(&___nl__im__24);
#line 322
c_rt_lib0clear(&___nl__im__35);
#line 322
c_rt_lib0clear(&___nl__im__37);
#line 322
c_rt_lib0clear(&___nl__im__38);
#line 322
c_rt_lib0clear(&___nl__im__39);
#line 322
c_rt_lib0clear(&___nl__im__40);
#line 322
c_rt_lib0clear(&___nl__im__41);
#line 322
c_rt_lib0clear(&___nl__im__42);
#line 322
c_rt_lib0clear(&___nl__im__43);
#line 322
c_rt_lib0clear(&___nl__im__44);
#line 322
c_rt_lib0clear(&___nl__im__45);
#line 322
c_rt_lib0clear(&___nl__im__46);
#line 322
c_rt_lib0clear(&___nl__im__47);
#line 322
c_rt_lib0clear(&___nl__im__48);
#line 322
c_rt_lib0clear(&___nl__im__55);
#line 322
c_rt_lib0clear(&___nl__im__56);
#line 322
c_rt_lib0clear(&___nl__im__57);
#line 322
c_rt_lib0clear(&___nl__im__75);
#line 322
c_rt_lib0clear(&___nl__im__76);
#line 322
c_rt_lib0clear(&___nl__im__77);
#line 322
//clear ___nl__bool__78;
#line 322
return ___nl__im__80;
#line 324
goto label_24;
#line 324
label_25:
;
#line 324
c_rt_lib0move(&___nl__im__92,___get_global_const(892));
#line 324
___nl__bool__78 = c_rt_lib0eq(___nl__im__77, ___nl__im__92);
#line 324
c_rt_lib0clear(&___nl__im__92);
#line 324
___nl__bool__78 = !___nl__bool__78;
#line 324
if(___nl__bool__78){ goto label_26;}
#line 326
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 326
c_rt_lib0move(&___nl__im__97, pretty_printer_priv0print_val(___nl__im__98));
#line 326
c_rt_lib0clear(&___nl__im__98);
#line 326
c_rt_lib0move(&___nl__im__100,___get_global_const(291));
#line 326
c_rt_lib0move(&___nl__im__99, wprinter0build_sim(___nl__im__100));
#line 326
c_rt_lib0clear(&___nl__im__100);
#line 326
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_mk(2, ___nl__im__97, ___nl__im__99));
#line 326
c_rt_lib0clear(&___nl__im__97);
#line 326
c_rt_lib0clear(&___nl__im__99);
#line 326
c_rt_lib0move(&___nl__im__95, wprinter0build_pretty_l(___nl__im__96));
#line 326
c_rt_lib0clear(&___nl__im__96);
#line 327
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 327
c_rt_lib0move(&___nl__im__101, pretty_printer_priv0print_val(___nl__im__102));
#line 327
c_rt_lib0clear(&___nl__im__102);
#line 328
c_rt_lib0move(&___nl__im__104,___get_global_const(292));
#line 328
c_rt_lib0move(&___nl__im__103, wprinter0build_sim(___nl__im__104));
#line 328
c_rt_lib0clear(&___nl__im__104);
#line 328
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(3, ___nl__im__95, ___nl__im__101, ___nl__im__103));
#line 328
c_rt_lib0clear(&___nl__im__95);
#line 328
c_rt_lib0clear(&___nl__im__101);
#line 328
c_rt_lib0clear(&___nl__im__103);
#line 328
c_rt_lib0move(&___nl__im__93, wprinter0build_pretty_a(___nl__im__94));
#line 328
c_rt_lib0clear(&___nl__im__94);
#line 328
c_rt_lib0clear(&___nl__im__0);
#line 328
c_rt_lib0clear(&___nl__im__1);
#line 328
//clear ___nl__bool__2;
#line 328
c_rt_lib0clear(&___nl__im__3);
#line 328
//clear ___nl__int__4;
#line 328
c_rt_lib0clear(&___nl__im__5);
#line 328
c_rt_lib0clear(&___nl__im__6);
#line 328
c_rt_lib0clear(&___nl__im__8);
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 328
c_rt_lib0clear(&___nl__im__11);
#line 328
c_rt_lib0clear(&___nl__im__12);
#line 328
//clear ___nl__int__13;
#line 328
//clear ___nl__int__14;
#line 328
//clear ___nl__int__15;
#line 328
//clear ___nl__bool__16;
#line 328
//clear ___nl__int__17;
#line 328
c_rt_lib0clear(&___nl__im__18);
#line 328
c_rt_lib0clear(&___nl__im__22);
#line 328
//clear ___nl__bool__23;
#line 328
c_rt_lib0clear(&___nl__im__24);
#line 328
c_rt_lib0clear(&___nl__im__35);
#line 328
c_rt_lib0clear(&___nl__im__37);
#line 328
c_rt_lib0clear(&___nl__im__38);
#line 328
c_rt_lib0clear(&___nl__im__39);
#line 328
c_rt_lib0clear(&___nl__im__40);
#line 328
c_rt_lib0clear(&___nl__im__41);
#line 328
c_rt_lib0clear(&___nl__im__42);
#line 328
c_rt_lib0clear(&___nl__im__43);
#line 328
c_rt_lib0clear(&___nl__im__44);
#line 328
c_rt_lib0clear(&___nl__im__45);
#line 328
c_rt_lib0clear(&___nl__im__46);
#line 328
c_rt_lib0clear(&___nl__im__47);
#line 328
c_rt_lib0clear(&___nl__im__48);
#line 328
c_rt_lib0clear(&___nl__im__55);
#line 328
c_rt_lib0clear(&___nl__im__56);
#line 328
c_rt_lib0clear(&___nl__im__57);
#line 328
c_rt_lib0clear(&___nl__im__75);
#line 328
c_rt_lib0clear(&___nl__im__76);
#line 328
c_rt_lib0clear(&___nl__im__77);
#line 328
//clear ___nl__bool__78;
#line 328
c_rt_lib0clear(&___nl__im__80);
#line 328
return ___nl__im__93;
#line 330
goto label_24;
#line 330
label_26:
;
#line 330
c_rt_lib0move(&___nl__im__105,___get_global_const(532));
#line 330
___nl__bool__78 = c_rt_lib0eq(___nl__im__77, ___nl__im__105);
#line 330
c_rt_lib0clear(&___nl__im__105);
#line 330
___nl__bool__78 = !___nl__bool__78;
#line 330
if(___nl__bool__78){ goto label_27;}
#line 332
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 332
___nl__bool__107 = pretty_printer_priv0is_to_change_ov(___nl__im__108);
#line 332
c_rt_lib0clear(&___nl__im__108);
#line 332
___nl__bool__107 = !___nl__bool__107;
#line 332
if(___nl__bool__107){ goto label_29;}
#line 334
c_rt_lib0move(&___nl__im__111,___get_global_const(420));
#line 334
c_rt_lib0move(&___nl__im__110, wprinter0build_sim(___nl__im__111));
#line 334
c_rt_lib0clear(&___nl__im__111);
#line 335
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 335
c_rt_lib0move(&___nl__im__112, pretty_printer_priv0print_val(___nl__im__113));
#line 335
c_rt_lib0clear(&___nl__im__113);
#line 336
c_rt_lib0move(&___nl__im__115,___get_global_const(299));
#line 336
c_rt_lib0move(&___nl__im__114, wprinter0build_sim(___nl__im__115));
#line 336
c_rt_lib0clear(&___nl__im__115);
#line 336
c_rt_lib0move(&___nl__im__109, c_rt_lib0array_mk(3, ___nl__im__110, ___nl__im__112, ___nl__im__114));
#line 336
c_rt_lib0clear(&___nl__im__110);
#line 336
c_rt_lib0clear(&___nl__im__112);
#line 336
c_rt_lib0clear(&___nl__im__114);
#line 336
c_rt_lib0move(&___nl__im__106, wprinter0build_pretty_a(___nl__im__109));
#line 336
c_rt_lib0clear(&___nl__im__109);
#line 338
goto label_28;
#line 338
label_29:
;
#line 339
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 339
c_rt_lib0move(&___nl__im__106, pretty_printer_priv0print_val(___nl__im__116));
#line 339
c_rt_lib0clear(&___nl__im__116);
#line 340
goto label_28;
#line 340
label_28:
;
#line 340
//clear ___nl__bool__107;
#line 341
c_rt_lib0move(&___nl__im__119, wprinter0build_sim(___nl__im__77));
#line 341
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 341
c_rt_lib0move(&___nl__im__120, pretty_printer_priv0print_val(___nl__im__121));
#line 341
c_rt_lib0clear(&___nl__im__121);
#line 341
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(3, ___nl__im__106, ___nl__im__119, ___nl__im__120));
#line 341
c_rt_lib0clear(&___nl__im__119);
#line 341
c_rt_lib0clear(&___nl__im__120);
#line 341
c_rt_lib0move(&___nl__im__117, wprinter0build_pretty_op_l(___nl__im__118));
#line 341
c_rt_lib0clear(&___nl__im__118);
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
//clear ___nl__bool__2;
#line 341
c_rt_lib0clear(&___nl__im__3);
#line 341
//clear ___nl__int__4;
#line 341
c_rt_lib0clear(&___nl__im__5);
#line 341
c_rt_lib0clear(&___nl__im__6);
#line 341
c_rt_lib0clear(&___nl__im__8);
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 341
c_rt_lib0clear(&___nl__im__10);
#line 341
c_rt_lib0clear(&___nl__im__11);
#line 341
c_rt_lib0clear(&___nl__im__12);
#line 341
//clear ___nl__int__13;
#line 341
//clear ___nl__int__14;
#line 341
//clear ___nl__int__15;
#line 341
//clear ___nl__bool__16;
#line 341
//clear ___nl__int__17;
#line 341
c_rt_lib0clear(&___nl__im__18);
#line 341
c_rt_lib0clear(&___nl__im__22);
#line 341
//clear ___nl__bool__23;
#line 341
c_rt_lib0clear(&___nl__im__24);
#line 341
c_rt_lib0clear(&___nl__im__35);
#line 341
c_rt_lib0clear(&___nl__im__37);
#line 341
c_rt_lib0clear(&___nl__im__38);
#line 341
c_rt_lib0clear(&___nl__im__39);
#line 341
c_rt_lib0clear(&___nl__im__40);
#line 341
c_rt_lib0clear(&___nl__im__41);
#line 341
c_rt_lib0clear(&___nl__im__42);
#line 341
c_rt_lib0clear(&___nl__im__43);
#line 341
c_rt_lib0clear(&___nl__im__44);
#line 341
c_rt_lib0clear(&___nl__im__45);
#line 341
c_rt_lib0clear(&___nl__im__46);
#line 341
c_rt_lib0clear(&___nl__im__47);
#line 341
c_rt_lib0clear(&___nl__im__48);
#line 341
c_rt_lib0clear(&___nl__im__55);
#line 341
c_rt_lib0clear(&___nl__im__56);
#line 341
c_rt_lib0clear(&___nl__im__57);
#line 341
c_rt_lib0clear(&___nl__im__75);
#line 341
c_rt_lib0clear(&___nl__im__76);
#line 341
c_rt_lib0clear(&___nl__im__77);
#line 341
//clear ___nl__bool__78;
#line 341
c_rt_lib0clear(&___nl__im__80);
#line 341
c_rt_lib0clear(&___nl__im__93);
#line 341
c_rt_lib0clear(&___nl__im__106);
#line 341
return ___nl__im__117;
#line 342
goto label_24;
#line 342
label_27:
;
#line 342
c_rt_lib0move(&___nl__im__122,___get_global_const(893));
#line 342
___nl__bool__78 = c_rt_lib0eq(___nl__im__77, ___nl__im__122);
#line 342
c_rt_lib0clear(&___nl__im__122);
#line 342
___nl__bool__78 = !___nl__bool__78;
#line 342
if(___nl__bool__78){ goto label_30;}
#line 344
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 344
c_rt_lib0move(&___nl__im__125, pretty_printer_priv0print_val(___nl__im__126));
#line 344
c_rt_lib0clear(&___nl__im__126);
#line 345
c_rt_lib0move(&___nl__im__127, wprinter0get_sep());
#line 346
c_rt_lib0move(&___nl__im__129,___get_global_const(919));
#line 346
c_rt_lib0move(&___nl__im__128, wprinter0build_sim(___nl__im__129));
#line 346
c_rt_lib0clear(&___nl__im__129);
#line 347
c_rt_lib0move(&___nl__im__130, wprinter0get_sep());
#line 348
c_rt_lib0move(&___nl__im__132,___get_global_const(484));
#line 348
c_rt_lib0move(&___nl__im__131, wprinter0build_sim(___nl__im__132));
#line 348
c_rt_lib0clear(&___nl__im__132);
#line 349
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 349
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__136, ___get_global_const(219)));
#line 349
c_rt_lib0clear(&___nl__im__136);
#line 349
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 349
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_const(219)));
#line 349
c_rt_lib0clear(&___nl__im__138);
#line 349
c_rt_lib0move(&___nl__im__134, c_rt_lib0priv_as(___nl__im__137, ___get_global_const(897)));
#line 349
c_rt_lib0clear(&___nl__im__135);
#line 349
c_rt_lib0clear(&___nl__im__137);
#line 349
c_rt_lib0move(&___nl__im__133, wprinter0build_sim(___nl__im__134));
#line 349
c_rt_lib0clear(&___nl__im__134);
#line 349
c_rt_lib0move(&___nl__im__124, c_rt_lib0array_mk(6, ___nl__im__125, ___nl__im__127, ___nl__im__128, ___nl__im__130, ___nl__im__131, ___nl__im__133));
#line 349
c_rt_lib0clear(&___nl__im__125);
#line 349
c_rt_lib0clear(&___nl__im__127);
#line 349
c_rt_lib0clear(&___nl__im__128);
#line 349
c_rt_lib0clear(&___nl__im__130);
#line 349
c_rt_lib0clear(&___nl__im__131);
#line 349
c_rt_lib0clear(&___nl__im__133);
#line 349
c_rt_lib0move(&___nl__im__123, wprinter0build_pretty_op_l(___nl__im__124));
#line 349
c_rt_lib0clear(&___nl__im__124);
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
c_rt_lib0clear(&___nl__im__1);
#line 349
//clear ___nl__bool__2;
#line 349
c_rt_lib0clear(&___nl__im__3);
#line 349
//clear ___nl__int__4;
#line 349
c_rt_lib0clear(&___nl__im__5);
#line 349
c_rt_lib0clear(&___nl__im__6);
#line 349
c_rt_lib0clear(&___nl__im__8);
#line 349
c_rt_lib0clear(&___nl__im__9);
#line 349
c_rt_lib0clear(&___nl__im__10);
#line 349
c_rt_lib0clear(&___nl__im__11);
#line 349
c_rt_lib0clear(&___nl__im__12);
#line 349
//clear ___nl__int__13;
#line 349
//clear ___nl__int__14;
#line 349
//clear ___nl__int__15;
#line 349
//clear ___nl__bool__16;
#line 349
//clear ___nl__int__17;
#line 349
c_rt_lib0clear(&___nl__im__18);
#line 349
c_rt_lib0clear(&___nl__im__22);
#line 349
//clear ___nl__bool__23;
#line 349
c_rt_lib0clear(&___nl__im__24);
#line 349
c_rt_lib0clear(&___nl__im__35);
#line 349
c_rt_lib0clear(&___nl__im__37);
#line 349
c_rt_lib0clear(&___nl__im__38);
#line 349
c_rt_lib0clear(&___nl__im__39);
#line 349
c_rt_lib0clear(&___nl__im__40);
#line 349
c_rt_lib0clear(&___nl__im__41);
#line 349
c_rt_lib0clear(&___nl__im__42);
#line 349
c_rt_lib0clear(&___nl__im__43);
#line 349
c_rt_lib0clear(&___nl__im__44);
#line 349
c_rt_lib0clear(&___nl__im__45);
#line 349
c_rt_lib0clear(&___nl__im__46);
#line 349
c_rt_lib0clear(&___nl__im__47);
#line 349
c_rt_lib0clear(&___nl__im__48);
#line 349
c_rt_lib0clear(&___nl__im__55);
#line 349
c_rt_lib0clear(&___nl__im__56);
#line 349
c_rt_lib0clear(&___nl__im__57);
#line 349
c_rt_lib0clear(&___nl__im__75);
#line 349
c_rt_lib0clear(&___nl__im__76);
#line 349
c_rt_lib0clear(&___nl__im__77);
#line 349
//clear ___nl__bool__78;
#line 349
c_rt_lib0clear(&___nl__im__80);
#line 349
c_rt_lib0clear(&___nl__im__93);
#line 349
c_rt_lib0clear(&___nl__im__106);
#line 349
c_rt_lib0clear(&___nl__im__117);
#line 349
return ___nl__im__123;
#line 351
goto label_24;
#line 351
label_30:
;
#line 351
c_rt_lib0move(&___nl__im__139,___get_global_const(995));
#line 351
___nl__bool__78 = c_rt_lib0eq(___nl__im__77, ___nl__im__139);
#line 351
c_rt_lib0clear(&___nl__im__139);
#line 351
___nl__bool__78 = !___nl__bool__78;
#line 351
if(___nl__bool__78){ goto label_31;}
#line 353
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 353
c_rt_lib0move(&___nl__im__142, pretty_printer_priv0print_val(___nl__im__143));
#line 353
c_rt_lib0clear(&___nl__im__143);
#line 354
c_rt_lib0move(&___nl__im__144, wprinter0get_sep());
#line 355
c_rt_lib0move(&___nl__im__146,___get_global_const(918));
#line 355
c_rt_lib0move(&___nl__im__145, wprinter0build_sim(___nl__im__146));
#line 355
c_rt_lib0clear(&___nl__im__146);
#line 356
c_rt_lib0move(&___nl__im__147, wprinter0get_sep());
#line 357
c_rt_lib0move(&___nl__im__149,___get_global_const(484));
#line 357
c_rt_lib0move(&___nl__im__148, wprinter0build_sim(___nl__im__149));
#line 357
c_rt_lib0clear(&___nl__im__149);
#line 358
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 358
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__153, ___get_global_const(219)));
#line 358
c_rt_lib0clear(&___nl__im__153);
#line 358
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 358
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__155, ___get_global_const(219)));
#line 358
c_rt_lib0clear(&___nl__im__155);
#line 358
c_rt_lib0move(&___nl__im__151, c_rt_lib0priv_as(___nl__im__154, ___get_global_const(897)));
#line 358
c_rt_lib0clear(&___nl__im__152);
#line 358
c_rt_lib0clear(&___nl__im__154);
#line 358
c_rt_lib0move(&___nl__im__150, wprinter0build_sim(___nl__im__151));
#line 358
c_rt_lib0clear(&___nl__im__151);
#line 358
c_rt_lib0move(&___nl__im__141, c_rt_lib0array_mk(6, ___nl__im__142, ___nl__im__144, ___nl__im__145, ___nl__im__147, ___nl__im__148, ___nl__im__150));
#line 358
c_rt_lib0clear(&___nl__im__142);
#line 358
c_rt_lib0clear(&___nl__im__144);
#line 358
c_rt_lib0clear(&___nl__im__145);
#line 358
c_rt_lib0clear(&___nl__im__147);
#line 358
c_rt_lib0clear(&___nl__im__148);
#line 358
c_rt_lib0clear(&___nl__im__150);
#line 358
c_rt_lib0move(&___nl__im__140, wprinter0build_pretty_op_l(___nl__im__141));
#line 358
c_rt_lib0clear(&___nl__im__141);
#line 358
c_rt_lib0clear(&___nl__im__0);
#line 358
c_rt_lib0clear(&___nl__im__1);
#line 358
//clear ___nl__bool__2;
#line 358
c_rt_lib0clear(&___nl__im__3);
#line 358
//clear ___nl__int__4;
#line 358
c_rt_lib0clear(&___nl__im__5);
#line 358
c_rt_lib0clear(&___nl__im__6);
#line 358
c_rt_lib0clear(&___nl__im__8);
#line 358
c_rt_lib0clear(&___nl__im__9);
#line 358
c_rt_lib0clear(&___nl__im__10);
#line 358
c_rt_lib0clear(&___nl__im__11);
#line 358
c_rt_lib0clear(&___nl__im__12);
#line 358
//clear ___nl__int__13;
#line 358
//clear ___nl__int__14;
#line 358
//clear ___nl__int__15;
#line 358
//clear ___nl__bool__16;
#line 358
//clear ___nl__int__17;
#line 358
c_rt_lib0clear(&___nl__im__18);
#line 358
c_rt_lib0clear(&___nl__im__22);
#line 358
//clear ___nl__bool__23;
#line 358
c_rt_lib0clear(&___nl__im__24);
#line 358
c_rt_lib0clear(&___nl__im__35);
#line 358
c_rt_lib0clear(&___nl__im__37);
#line 358
c_rt_lib0clear(&___nl__im__38);
#line 358
c_rt_lib0clear(&___nl__im__39);
#line 358
c_rt_lib0clear(&___nl__im__40);
#line 358
c_rt_lib0clear(&___nl__im__41);
#line 358
c_rt_lib0clear(&___nl__im__42);
#line 358
c_rt_lib0clear(&___nl__im__43);
#line 358
c_rt_lib0clear(&___nl__im__44);
#line 358
c_rt_lib0clear(&___nl__im__45);
#line 358
c_rt_lib0clear(&___nl__im__46);
#line 358
c_rt_lib0clear(&___nl__im__47);
#line 358
c_rt_lib0clear(&___nl__im__48);
#line 358
c_rt_lib0clear(&___nl__im__55);
#line 358
c_rt_lib0clear(&___nl__im__56);
#line 358
c_rt_lib0clear(&___nl__im__57);
#line 358
c_rt_lib0clear(&___nl__im__75);
#line 358
c_rt_lib0clear(&___nl__im__76);
#line 358
c_rt_lib0clear(&___nl__im__77);
#line 358
//clear ___nl__bool__78;
#line 358
c_rt_lib0clear(&___nl__im__80);
#line 358
c_rt_lib0clear(&___nl__im__93);
#line 358
c_rt_lib0clear(&___nl__im__106);
#line 358
c_rt_lib0clear(&___nl__im__117);
#line 358
c_rt_lib0clear(&___nl__im__123);
#line 358
return ___nl__im__140;
#line 360
goto label_24;
#line 360
label_31:
;
#line 362
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(274)));
#line 362
c_rt_lib0move(&___nl__im__160, pretty_printer_priv0print_val(___nl__im__161));
#line 362
c_rt_lib0clear(&___nl__im__161);
#line 362
c_rt_lib0move(&___nl__im__162, wprinter0get_sep());
#line 362
c_rt_lib0move(&___nl__im__163, wprinter0build_sim(___nl__im__77));
#line 362
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(3, ___nl__im__160, ___nl__im__162, ___nl__im__163));
#line 362
c_rt_lib0clear(&___nl__im__160);
#line 362
c_rt_lib0clear(&___nl__im__162);
#line 362
c_rt_lib0clear(&___nl__im__163);
#line 362
c_rt_lib0move(&___nl__im__158, wprinter0build_pretty_op_l(___nl__im__159));
#line 362
c_rt_lib0clear(&___nl__im__159);
#line 363
c_rt_lib0move(&___nl__im__164, wprinter0get_sep());
#line 364
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(275)));
#line 364
c_rt_lib0move(&___nl__im__165, pretty_printer_priv0print_val(___nl__im__166));
#line 364
c_rt_lib0clear(&___nl__im__166);
#line 364
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_mk(3, ___nl__im__158, ___nl__im__164, ___nl__im__165));
#line 364
c_rt_lib0clear(&___nl__im__158);
#line 364
c_rt_lib0clear(&___nl__im__164);
#line 364
c_rt_lib0clear(&___nl__im__165);
#line 364
c_rt_lib0move(&___nl__im__156, wprinter0build_pretty_op_l(___nl__im__157));
#line 364
c_rt_lib0clear(&___nl__im__157);
#line 364
c_rt_lib0clear(&___nl__im__0);
#line 364
c_rt_lib0clear(&___nl__im__1);
#line 364
//clear ___nl__bool__2;
#line 364
c_rt_lib0clear(&___nl__im__3);
#line 364
//clear ___nl__int__4;
#line 364
c_rt_lib0clear(&___nl__im__5);
#line 364
c_rt_lib0clear(&___nl__im__6);
#line 364
c_rt_lib0clear(&___nl__im__8);
#line 364
c_rt_lib0clear(&___nl__im__9);
#line 364
c_rt_lib0clear(&___nl__im__10);
#line 364
c_rt_lib0clear(&___nl__im__11);
#line 364
c_rt_lib0clear(&___nl__im__12);
#line 364
//clear ___nl__int__13;
#line 364
//clear ___nl__int__14;
#line 364
//clear ___nl__int__15;
#line 364
//clear ___nl__bool__16;
#line 364
//clear ___nl__int__17;
#line 364
c_rt_lib0clear(&___nl__im__18);
#line 364
c_rt_lib0clear(&___nl__im__22);
#line 364
//clear ___nl__bool__23;
#line 364
c_rt_lib0clear(&___nl__im__24);
#line 364
c_rt_lib0clear(&___nl__im__35);
#line 364
c_rt_lib0clear(&___nl__im__37);
#line 364
c_rt_lib0clear(&___nl__im__38);
#line 364
c_rt_lib0clear(&___nl__im__39);
#line 364
c_rt_lib0clear(&___nl__im__40);
#line 364
c_rt_lib0clear(&___nl__im__41);
#line 364
c_rt_lib0clear(&___nl__im__42);
#line 364
c_rt_lib0clear(&___nl__im__43);
#line 364
c_rt_lib0clear(&___nl__im__44);
#line 364
c_rt_lib0clear(&___nl__im__45);
#line 364
c_rt_lib0clear(&___nl__im__46);
#line 364
c_rt_lib0clear(&___nl__im__47);
#line 364
c_rt_lib0clear(&___nl__im__48);
#line 364
c_rt_lib0clear(&___nl__im__55);
#line 364
c_rt_lib0clear(&___nl__im__56);
#line 364
c_rt_lib0clear(&___nl__im__57);
#line 364
c_rt_lib0clear(&___nl__im__75);
#line 364
c_rt_lib0clear(&___nl__im__76);
#line 364
c_rt_lib0clear(&___nl__im__77);
#line 364
//clear ___nl__bool__78;
#line 364
c_rt_lib0clear(&___nl__im__80);
#line 364
c_rt_lib0clear(&___nl__im__93);
#line 364
c_rt_lib0clear(&___nl__im__106);
#line 364
c_rt_lib0clear(&___nl__im__117);
#line 364
c_rt_lib0clear(&___nl__im__123);
#line 364
c_rt_lib0clear(&___nl__im__140);
#line 364
return ___nl__im__156;
#line 366
goto label_24;
#line 366
label_24:
;
#line 366
//clear ___nl__bool__78;
#line 366
c_rt_lib0clear(&___nl__im__80);
#line 366
c_rt_lib0clear(&___nl__im__93);
#line 366
c_rt_lib0clear(&___nl__im__106);
#line 366
c_rt_lib0clear(&___nl__im__117);
#line 366
c_rt_lib0clear(&___nl__im__123);
#line 366
c_rt_lib0clear(&___nl__im__140);
#line 366
c_rt_lib0clear(&___nl__im__156);
#line 367
goto label_1;
#line 367
label_10:
;
#line 367
c_rt_lib0move(&___nl__im__168, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(901)));
#line 367
c_rt_lib0copy(&___nl__im__167, ___nl__im__168);
#line 368
c_rt_lib0move(&___nl__im__171, pretty_printer_priv0print_val(___nl__im__167));
#line 368
c_rt_lib0move(&___nl__im__173,___get_global_const(191));
#line 368
c_rt_lib0move(&___nl__im__172, wprinter0build_sim(___nl__im__173));
#line 368
c_rt_lib0clear(&___nl__im__173);
#line 368
c_rt_lib0move(&___nl__im__170, c_rt_lib0array_mk(2, ___nl__im__171, ___nl__im__172));
#line 368
c_rt_lib0clear(&___nl__im__171);
#line 368
c_rt_lib0clear(&___nl__im__172);
#line 368
c_rt_lib0move(&___nl__im__169, wprinter0build_pretty_op_l(___nl__im__170));
#line 368
c_rt_lib0clear(&___nl__im__170);
#line 368
c_rt_lib0clear(&___nl__im__0);
#line 368
c_rt_lib0clear(&___nl__im__1);
#line 368
//clear ___nl__bool__2;
#line 368
c_rt_lib0clear(&___nl__im__3);
#line 368
//clear ___nl__int__4;
#line 368
c_rt_lib0clear(&___nl__im__5);
#line 368
c_rt_lib0clear(&___nl__im__6);
#line 368
c_rt_lib0clear(&___nl__im__8);
#line 368
c_rt_lib0clear(&___nl__im__9);
#line 368
c_rt_lib0clear(&___nl__im__10);
#line 368
c_rt_lib0clear(&___nl__im__11);
#line 368
c_rt_lib0clear(&___nl__im__12);
#line 368
//clear ___nl__int__13;
#line 368
//clear ___nl__int__14;
#line 368
//clear ___nl__int__15;
#line 368
//clear ___nl__bool__16;
#line 368
//clear ___nl__int__17;
#line 368
c_rt_lib0clear(&___nl__im__18);
#line 368
c_rt_lib0clear(&___nl__im__22);
#line 368
//clear ___nl__bool__23;
#line 368
c_rt_lib0clear(&___nl__im__24);
#line 368
c_rt_lib0clear(&___nl__im__35);
#line 368
c_rt_lib0clear(&___nl__im__37);
#line 368
c_rt_lib0clear(&___nl__im__38);
#line 368
c_rt_lib0clear(&___nl__im__39);
#line 368
c_rt_lib0clear(&___nl__im__40);
#line 368
c_rt_lib0clear(&___nl__im__41);
#line 368
c_rt_lib0clear(&___nl__im__42);
#line 368
c_rt_lib0clear(&___nl__im__43);
#line 368
c_rt_lib0clear(&___nl__im__44);
#line 368
c_rt_lib0clear(&___nl__im__45);
#line 368
c_rt_lib0clear(&___nl__im__46);
#line 368
c_rt_lib0clear(&___nl__im__47);
#line 368
c_rt_lib0clear(&___nl__im__48);
#line 368
c_rt_lib0clear(&___nl__im__55);
#line 368
c_rt_lib0clear(&___nl__im__56);
#line 368
c_rt_lib0clear(&___nl__im__57);
#line 368
c_rt_lib0clear(&___nl__im__75);
#line 368
c_rt_lib0clear(&___nl__im__76);
#line 368
c_rt_lib0clear(&___nl__im__77);
#line 368
c_rt_lib0clear(&___nl__im__167);
#line 368
c_rt_lib0clear(&___nl__im__168);
#line 368
return ___nl__im__169;
#line 369
goto label_1;
#line 369
label_11:
;
#line 369
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(900)));
#line 369
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 370
c_rt_lib0move(&___nl__im__178, pretty_printer_priv0print_val(___nl__im__174));
#line 370
c_rt_lib0move(&___nl__im__180,___get_global_const(917));
#line 370
c_rt_lib0move(&___nl__im__179, wprinter0build_sim(___nl__im__180));
#line 370
c_rt_lib0clear(&___nl__im__180);
#line 370
c_rt_lib0move(&___nl__im__177, c_rt_lib0array_mk(2, ___nl__im__178, ___nl__im__179));
#line 370
c_rt_lib0clear(&___nl__im__178);
#line 370
c_rt_lib0clear(&___nl__im__179);
#line 370
c_rt_lib0move(&___nl__im__176, wprinter0build_pretty_op_l(___nl__im__177));
#line 370
c_rt_lib0clear(&___nl__im__177);
#line 370
c_rt_lib0clear(&___nl__im__0);
#line 370
c_rt_lib0clear(&___nl__im__1);
#line 370
//clear ___nl__bool__2;
#line 370
c_rt_lib0clear(&___nl__im__3);
#line 370
//clear ___nl__int__4;
#line 370
c_rt_lib0clear(&___nl__im__5);
#line 370
c_rt_lib0clear(&___nl__im__6);
#line 370
c_rt_lib0clear(&___nl__im__8);
#line 370
c_rt_lib0clear(&___nl__im__9);
#line 370
c_rt_lib0clear(&___nl__im__10);
#line 370
c_rt_lib0clear(&___nl__im__11);
#line 370
c_rt_lib0clear(&___nl__im__12);
#line 370
//clear ___nl__int__13;
#line 370
//clear ___nl__int__14;
#line 370
//clear ___nl__int__15;
#line 370
//clear ___nl__bool__16;
#line 370
//clear ___nl__int__17;
#line 370
c_rt_lib0clear(&___nl__im__18);
#line 370
c_rt_lib0clear(&___nl__im__22);
#line 370
//clear ___nl__bool__23;
#line 370
c_rt_lib0clear(&___nl__im__24);
#line 370
c_rt_lib0clear(&___nl__im__35);
#line 370
c_rt_lib0clear(&___nl__im__37);
#line 370
c_rt_lib0clear(&___nl__im__38);
#line 370
c_rt_lib0clear(&___nl__im__39);
#line 370
c_rt_lib0clear(&___nl__im__40);
#line 370
c_rt_lib0clear(&___nl__im__41);
#line 370
c_rt_lib0clear(&___nl__im__42);
#line 370
c_rt_lib0clear(&___nl__im__43);
#line 370
c_rt_lib0clear(&___nl__im__44);
#line 370
c_rt_lib0clear(&___nl__im__45);
#line 370
c_rt_lib0clear(&___nl__im__46);
#line 370
c_rt_lib0clear(&___nl__im__47);
#line 370
c_rt_lib0clear(&___nl__im__48);
#line 370
c_rt_lib0clear(&___nl__im__55);
#line 370
c_rt_lib0clear(&___nl__im__56);
#line 370
c_rt_lib0clear(&___nl__im__57);
#line 370
c_rt_lib0clear(&___nl__im__75);
#line 370
c_rt_lib0clear(&___nl__im__76);
#line 370
c_rt_lib0clear(&___nl__im__77);
#line 370
c_rt_lib0clear(&___nl__im__167);
#line 370
c_rt_lib0clear(&___nl__im__168);
#line 370
c_rt_lib0clear(&___nl__im__169);
#line 370
c_rt_lib0clear(&___nl__im__174);
#line 370
c_rt_lib0clear(&___nl__im__175);
#line 370
return ___nl__im__176;
#line 371
goto label_1;
#line 371
label_12:
;
#line 371
c_rt_lib0move(&___nl__im__182, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(898)));
#line 371
c_rt_lib0copy(&___nl__im__181, ___nl__im__182);
#line 372
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_get_value_dec(___nl__im__181, ___get_global_const(514)));
#line 372
c_rt_lib0move(&___nl__im__184, wprinter0build_sim(___nl__im__185));
#line 372
c_rt_lib0clear(&___nl__im__185);
#line 372
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__181, ___get_global_const(224)));
#line 372
c_rt_lib0move(&___nl__im__186, pretty_printer_priv0print_val(___nl__im__187));
#line 372
c_rt_lib0clear(&___nl__im__187);
#line 372
c_rt_lib0move(&___nl__im__183, wprinter0build_pretty_bind(___nl__im__184, ___nl__im__186));
#line 372
c_rt_lib0clear(&___nl__im__184);
#line 372
c_rt_lib0clear(&___nl__im__186);
#line 372
c_rt_lib0clear(&___nl__im__0);
#line 372
c_rt_lib0clear(&___nl__im__1);
#line 372
//clear ___nl__bool__2;
#line 372
c_rt_lib0clear(&___nl__im__3);
#line 372
//clear ___nl__int__4;
#line 372
c_rt_lib0clear(&___nl__im__5);
#line 372
c_rt_lib0clear(&___nl__im__6);
#line 372
c_rt_lib0clear(&___nl__im__8);
#line 372
c_rt_lib0clear(&___nl__im__9);
#line 372
c_rt_lib0clear(&___nl__im__10);
#line 372
c_rt_lib0clear(&___nl__im__11);
#line 372
c_rt_lib0clear(&___nl__im__12);
#line 372
//clear ___nl__int__13;
#line 372
//clear ___nl__int__14;
#line 372
//clear ___nl__int__15;
#line 372
//clear ___nl__bool__16;
#line 372
//clear ___nl__int__17;
#line 372
c_rt_lib0clear(&___nl__im__18);
#line 372
c_rt_lib0clear(&___nl__im__22);
#line 372
//clear ___nl__bool__23;
#line 372
c_rt_lib0clear(&___nl__im__24);
#line 372
c_rt_lib0clear(&___nl__im__35);
#line 372
c_rt_lib0clear(&___nl__im__37);
#line 372
c_rt_lib0clear(&___nl__im__38);
#line 372
c_rt_lib0clear(&___nl__im__39);
#line 372
c_rt_lib0clear(&___nl__im__40);
#line 372
c_rt_lib0clear(&___nl__im__41);
#line 372
c_rt_lib0clear(&___nl__im__42);
#line 372
c_rt_lib0clear(&___nl__im__43);
#line 372
c_rt_lib0clear(&___nl__im__44);
#line 372
c_rt_lib0clear(&___nl__im__45);
#line 372
c_rt_lib0clear(&___nl__im__46);
#line 372
c_rt_lib0clear(&___nl__im__47);
#line 372
c_rt_lib0clear(&___nl__im__48);
#line 372
c_rt_lib0clear(&___nl__im__55);
#line 372
c_rt_lib0clear(&___nl__im__56);
#line 372
c_rt_lib0clear(&___nl__im__57);
#line 372
c_rt_lib0clear(&___nl__im__75);
#line 372
c_rt_lib0clear(&___nl__im__76);
#line 372
c_rt_lib0clear(&___nl__im__77);
#line 372
c_rt_lib0clear(&___nl__im__167);
#line 372
c_rt_lib0clear(&___nl__im__168);
#line 372
c_rt_lib0clear(&___nl__im__169);
#line 372
c_rt_lib0clear(&___nl__im__174);
#line 372
c_rt_lib0clear(&___nl__im__175);
#line 372
c_rt_lib0clear(&___nl__im__176);
#line 372
c_rt_lib0clear(&___nl__im__181);
#line 372
c_rt_lib0clear(&___nl__im__182);
#line 372
return ___nl__im__183;
#line 373
goto label_1;
#line 373
label_13:
;
#line 373
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(855)));
#line 373
c_rt_lib0copy(&___nl__im__188, ___nl__im__189);
#line 374
c_rt_lib0move(&___nl__im__192, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(168)));
#line 374
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(152)));
#line 374
c_rt_lib0move(&___nl__im__191, pretty_printer_priv0get_fun_label(___nl__im__192, ___nl__im__193));
#line 374
c_rt_lib0clear(&___nl__im__192);
#line 374
c_rt_lib0clear(&___nl__im__193);
#line 374
c_rt_lib0move(&___nl__im__194,___get_global_const(420));
#line 374
c_rt_lib0move(&___nl__im__190, c_rt_lib0concat_new(___nl__im__191, ___nl__im__194));
#line 374
c_rt_lib0clear(&___nl__im__191);
#line 374
c_rt_lib0clear(&___nl__im__194);
#line 375
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 375
___nl__int__196 = c_rt_lib0array_len(___nl__im__197);
#line 375
c_rt_lib0clear(&___nl__im__197);
#line 375
___nl__int__198 = 1;
#line 375
___nl__int__199 = ___nl__int__196 == ___nl__int__198;
#line 375
___nl__bool__195 = ___nl__int__199;
#line 375
//clear ___nl__int__196;
#line 375
//clear ___nl__int__198;
#line 375
//clear ___nl__int__199;
#line 375
___nl__bool__195 = !___nl__bool__195;
#line 375
if(___nl__bool__195){ goto label_33;}
#line 376
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 376
___nl__int__203 = 0;
#line 376
c_rt_lib0move(&___nl__im__201, c_rt_lib0array_get(___nl__im__202, ___nl__int__203));
#line 376
c_rt_lib0clear(&___nl__im__202);
#line 376
//clear ___nl__int__203;
#line 376
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__201, ___get_global_const(224)));
#line 376
c_rt_lib0clear(&___nl__im__201);
#line 377
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__200, ___get_global_const(219)));
#line 377
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__206, ___get_global_const(231));
#line 377
c_rt_lib0clear(&___nl__im__206);
#line 377
if(___nl__bool__204){ goto label_36;}
#line 377
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_get_value_dec(___nl__im__200, ___get_global_const(219)));
#line 377
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__207, ___get_global_const(230));
#line 377
c_rt_lib0clear(&___nl__im__207);
#line 377
label_36:
;
#line 377
//clear ___nl__bool__205;
#line 377
___nl__bool__204 = !___nl__bool__204;
#line 377
if(___nl__bool__204){ goto label_35;}
#line 378
c_rt_lib0move(&___nl__im__209,___get_global_const(299));
#line 378
c_rt_lib0move(&___nl__im__208, pretty_printer_priv0get_compressed_fun_val(___nl__im__200, ___nl__im__190, ___nl__im__209));
#line 378
c_rt_lib0clear(&___nl__im__209);
#line 378
c_rt_lib0clear(&___nl__im__0);
#line 378
c_rt_lib0clear(&___nl__im__1);
#line 378
//clear ___nl__bool__2;
#line 378
c_rt_lib0clear(&___nl__im__3);
#line 378
//clear ___nl__int__4;
#line 378
c_rt_lib0clear(&___nl__im__5);
#line 378
c_rt_lib0clear(&___nl__im__6);
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
//clear ___nl__int__13;
#line 378
//clear ___nl__int__14;
#line 378
//clear ___nl__int__15;
#line 378
//clear ___nl__bool__16;
#line 378
//clear ___nl__int__17;
#line 378
c_rt_lib0clear(&___nl__im__18);
#line 378
c_rt_lib0clear(&___nl__im__22);
#line 378
//clear ___nl__bool__23;
#line 378
c_rt_lib0clear(&___nl__im__24);
#line 378
c_rt_lib0clear(&___nl__im__35);
#line 378
c_rt_lib0clear(&___nl__im__37);
#line 378
c_rt_lib0clear(&___nl__im__38);
#line 378
c_rt_lib0clear(&___nl__im__39);
#line 378
c_rt_lib0clear(&___nl__im__40);
#line 378
c_rt_lib0clear(&___nl__im__41);
#line 378
c_rt_lib0clear(&___nl__im__42);
#line 378
c_rt_lib0clear(&___nl__im__43);
#line 378
c_rt_lib0clear(&___nl__im__44);
#line 378
c_rt_lib0clear(&___nl__im__45);
#line 378
c_rt_lib0clear(&___nl__im__46);
#line 378
c_rt_lib0clear(&___nl__im__47);
#line 378
c_rt_lib0clear(&___nl__im__48);
#line 378
c_rt_lib0clear(&___nl__im__55);
#line 378
c_rt_lib0clear(&___nl__im__56);
#line 378
c_rt_lib0clear(&___nl__im__57);
#line 378
c_rt_lib0clear(&___nl__im__75);
#line 378
c_rt_lib0clear(&___nl__im__76);
#line 378
c_rt_lib0clear(&___nl__im__77);
#line 378
c_rt_lib0clear(&___nl__im__167);
#line 378
c_rt_lib0clear(&___nl__im__168);
#line 378
c_rt_lib0clear(&___nl__im__169);
#line 378
c_rt_lib0clear(&___nl__im__174);
#line 378
c_rt_lib0clear(&___nl__im__175);
#line 378
c_rt_lib0clear(&___nl__im__176);
#line 378
c_rt_lib0clear(&___nl__im__181);
#line 378
c_rt_lib0clear(&___nl__im__182);
#line 378
c_rt_lib0clear(&___nl__im__183);
#line 378
c_rt_lib0clear(&___nl__im__188);
#line 378
c_rt_lib0clear(&___nl__im__189);
#line 378
c_rt_lib0clear(&___nl__im__190);
#line 378
//clear ___nl__bool__195;
#line 378
c_rt_lib0clear(&___nl__im__200);
#line 378
//clear ___nl__bool__204;
#line 378
return ___nl__im__208;
#line 379
goto label_34;
#line 379
label_35:
;
#line 379
label_34:
;
#line 379
//clear ___nl__bool__204;
#line 379
c_rt_lib0clear(&___nl__im__208);
#line 380
goto label_32;
#line 380
label_33:
;
#line 380
___nl__bool__195 = pretty_printer_priv0is_to_change_ov(___nl__im__0);
#line 380
___nl__bool__195 = !___nl__bool__195;
#line 380
if(___nl__bool__195){ goto label_37;}
#line 382
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 382
___nl__int__216 = 0;
#line 382
c_rt_lib0move(&___nl__im__214, c_rt_lib0array_get(___nl__im__215, ___nl__int__216));
#line 382
c_rt_lib0clear(&___nl__im__215);
#line 382
//clear ___nl__int__216;
#line 382
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__214, ___get_global_const(224)));
#line 382
c_rt_lib0clear(&___nl__im__214);
#line 382
c_rt_lib0move(&___nl__im__212, pretty_printer_priv0print_val(___nl__im__213));
#line 382
c_rt_lib0clear(&___nl__im__213);
#line 383
c_rt_lib0move(&___nl__im__217, wprinter0get_sep());
#line 384
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(168)));
#line 384
c_rt_lib0move(&___nl__im__218, wprinter0build_sim(___nl__im__219));
#line 384
c_rt_lib0clear(&___nl__im__219);
#line 385
c_rt_lib0move(&___nl__im__220, wprinter0get_sep());
#line 386
c_rt_lib0move(&___nl__im__223,___get_global_const(484));
#line 386
c_rt_lib0move(&___nl__im__230, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 386
___nl__int__231 = 1;
#line 386
c_rt_lib0move(&___nl__im__229, c_rt_lib0array_get(___nl__im__230, ___nl__int__231));
#line 386
c_rt_lib0clear(&___nl__im__230);
#line 386
//clear ___nl__int__231;
#line 386
c_rt_lib0move(&___nl__im__228, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_const(224)));
#line 386
c_rt_lib0clear(&___nl__im__229);
#line 386
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__228, ___get_global_const(219)));
#line 386
c_rt_lib0clear(&___nl__im__228);
#line 386
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 386
___nl__int__236 = 1;
#line 386
c_rt_lib0move(&___nl__im__234, c_rt_lib0array_get(___nl__im__235, ___nl__int__236));
#line 386
c_rt_lib0clear(&___nl__im__235);
#line 386
//clear ___nl__int__236;
#line 386
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__234, ___get_global_const(224)));
#line 386
c_rt_lib0clear(&___nl__im__234);
#line 386
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__233, ___get_global_const(219)));
#line 386
c_rt_lib0clear(&___nl__im__233);
#line 386
c_rt_lib0move(&___nl__im__226, c_rt_lib0priv_as(___nl__im__232, ___get_global_const(527)));
#line 386
c_rt_lib0clear(&___nl__im__227);
#line 386
c_rt_lib0clear(&___nl__im__232);
#line 386
c_rt_lib0move(&___nl__im__225, c_rt_lib0hash_get_value_dec(___nl__im__226, ___get_global_const(130)));
#line 386
c_rt_lib0clear(&___nl__im__226);
#line 386
___nl__int__237 = 0;
#line 386
c_rt_lib0move(&___nl__im__224, c_rt_lib0array_get(___nl__im__225, ___nl__int__237));
#line 386
c_rt_lib0clear(&___nl__im__225);
#line 386
//clear ___nl__int__237;
#line 386
c_rt_lib0move(&___nl__im__222, c_rt_lib0concat_new(___nl__im__223, ___nl__im__224));
#line 386
c_rt_lib0clear(&___nl__im__223);
#line 386
c_rt_lib0clear(&___nl__im__224);
#line 386
c_rt_lib0move(&___nl__im__221, wprinter0build_sim(___nl__im__222));
#line 386
c_rt_lib0clear(&___nl__im__222);
#line 386
c_rt_lib0move(&___nl__im__211, c_rt_lib0array_mk(5, ___nl__im__212, ___nl__im__217, ___nl__im__218, ___nl__im__220, ___nl__im__221));
#line 386
c_rt_lib0clear(&___nl__im__212);
#line 386
c_rt_lib0clear(&___nl__im__217);
#line 386
c_rt_lib0clear(&___nl__im__218);
#line 386
c_rt_lib0clear(&___nl__im__220);
#line 386
c_rt_lib0clear(&___nl__im__221);
#line 386
c_rt_lib0move(&___nl__im__210, wprinter0build_pretty_op_l(___nl__im__211));
#line 386
c_rt_lib0clear(&___nl__im__211);
#line 386
c_rt_lib0clear(&___nl__im__0);
#line 386
c_rt_lib0clear(&___nl__im__1);
#line 386
//clear ___nl__bool__2;
#line 386
c_rt_lib0clear(&___nl__im__3);
#line 386
//clear ___nl__int__4;
#line 386
c_rt_lib0clear(&___nl__im__5);
#line 386
c_rt_lib0clear(&___nl__im__6);
#line 386
c_rt_lib0clear(&___nl__im__8);
#line 386
c_rt_lib0clear(&___nl__im__9);
#line 386
c_rt_lib0clear(&___nl__im__10);
#line 386
c_rt_lib0clear(&___nl__im__11);
#line 386
c_rt_lib0clear(&___nl__im__12);
#line 386
//clear ___nl__int__13;
#line 386
//clear ___nl__int__14;
#line 386
//clear ___nl__int__15;
#line 386
//clear ___nl__bool__16;
#line 386
//clear ___nl__int__17;
#line 386
c_rt_lib0clear(&___nl__im__18);
#line 386
c_rt_lib0clear(&___nl__im__22);
#line 386
//clear ___nl__bool__23;
#line 386
c_rt_lib0clear(&___nl__im__24);
#line 386
c_rt_lib0clear(&___nl__im__35);
#line 386
c_rt_lib0clear(&___nl__im__37);
#line 386
c_rt_lib0clear(&___nl__im__38);
#line 386
c_rt_lib0clear(&___nl__im__39);
#line 386
c_rt_lib0clear(&___nl__im__40);
#line 386
c_rt_lib0clear(&___nl__im__41);
#line 386
c_rt_lib0clear(&___nl__im__42);
#line 386
c_rt_lib0clear(&___nl__im__43);
#line 386
c_rt_lib0clear(&___nl__im__44);
#line 386
c_rt_lib0clear(&___nl__im__45);
#line 386
c_rt_lib0clear(&___nl__im__46);
#line 386
c_rt_lib0clear(&___nl__im__47);
#line 386
c_rt_lib0clear(&___nl__im__48);
#line 386
c_rt_lib0clear(&___nl__im__55);
#line 386
c_rt_lib0clear(&___nl__im__56);
#line 386
c_rt_lib0clear(&___nl__im__57);
#line 386
c_rt_lib0clear(&___nl__im__75);
#line 386
c_rt_lib0clear(&___nl__im__76);
#line 386
c_rt_lib0clear(&___nl__im__77);
#line 386
c_rt_lib0clear(&___nl__im__167);
#line 386
c_rt_lib0clear(&___nl__im__168);
#line 386
c_rt_lib0clear(&___nl__im__169);
#line 386
c_rt_lib0clear(&___nl__im__174);
#line 386
c_rt_lib0clear(&___nl__im__175);
#line 386
c_rt_lib0clear(&___nl__im__176);
#line 386
c_rt_lib0clear(&___nl__im__181);
#line 386
c_rt_lib0clear(&___nl__im__182);
#line 386
c_rt_lib0clear(&___nl__im__183);
#line 386
c_rt_lib0clear(&___nl__im__188);
#line 386
c_rt_lib0clear(&___nl__im__189);
#line 386
c_rt_lib0clear(&___nl__im__190);
#line 386
//clear ___nl__bool__195;
#line 386
c_rt_lib0clear(&___nl__im__200);
#line 386
return ___nl__im__210;
#line 388
goto label_32;
#line 388
label_37:
;
#line 388
label_32:
;
#line 388
//clear ___nl__bool__195;
#line 388
c_rt_lib0clear(&___nl__im__200);
#line 388
c_rt_lib0clear(&___nl__im__210);
#line 389
c_rt_lib0move(&___nl__im__239, wprinter0build_sim(___nl__im__190));
#line 389
c_rt_lib0move(&___nl__im__238, c_rt_lib0array_mk(1, ___nl__im__239));
#line 389
c_rt_lib0clear(&___nl__im__239);
#line 390
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 390
c_rt_lib0move(&___nl__im__240, pretty_printer_priv0join_print_fun_arg(___nl__im__241));
#line 390
c_rt_lib0clear(&___nl__im__241);
#line 390
c_rt_lib0delete(array0append(&___nl__im__238, ___nl__im__240));
#line 390
c_rt_lib0clear(&___nl__im__240);
#line 391
c_rt_lib0move(&___nl__im__243,___get_global_const(299));
#line 391
c_rt_lib0move(&___nl__im__242, wprinter0build_sim(___nl__im__243));
#line 391
c_rt_lib0clear(&___nl__im__243);
#line 391
c_rt_lib0delete(array0push(&___nl__im__238, ___nl__im__242));
#line 391
c_rt_lib0clear(&___nl__im__242);
#line 394
c_rt_lib0move(&___nl__im__248, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 394
___nl__int__247 = pretty_printer_priv0count_structs(___nl__im__248);
#line 394
c_rt_lib0clear(&___nl__im__248);
#line 394
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 394
___nl__int__249 = c_rt_lib0array_len(___nl__im__250);
#line 394
c_rt_lib0clear(&___nl__im__250);
#line 394
___nl__int__251 = ___nl__int__247 == ___nl__int__249;
#line 394
___nl__bool__244 = ___nl__int__251;
#line 394
//clear ___nl__int__247;
#line 394
//clear ___nl__int__249;
#line 394
//clear ___nl__int__251;
#line 394
___nl__bool__246 = !___nl__bool__244;
#line 394
if(___nl__bool__246){ goto label_41;}
#line 394
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 394
___nl__int__252 = c_rt_lib0array_len(___nl__im__253);
#line 394
c_rt_lib0clear(&___nl__im__253);
#line 394
___nl__int__254 = 0;
#line 394
___nl__int__255 = ___nl__int__252 > ___nl__int__254;
#line 394
___nl__bool__244 = ___nl__int__255;
#line 394
//clear ___nl__int__252;
#line 394
//clear ___nl__int__254;
#line 394
//clear ___nl__int__255;
#line 394
label_41:
;
#line 394
//clear ___nl__bool__246;
#line 394
if(___nl__bool__244){ goto label_40;}
#line 395
c_rt_lib0move(&___nl__im__258, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 395
___nl__int__257 = c_rt_lib0array_len(___nl__im__258);
#line 395
c_rt_lib0clear(&___nl__im__258);
#line 395
___nl__int__259 = 1;
#line 395
___nl__int__260 = ___nl__int__257 == ___nl__int__259;
#line 395
___nl__bool__244 = ___nl__int__260;
#line 395
//clear ___nl__int__257;
#line 395
//clear ___nl__int__259;
#line 395
//clear ___nl__int__260;
#line 395
___nl__bool__256 = !___nl__bool__244;
#line 395
if(___nl__bool__256){ goto label_42;}
#line 395
c_rt_lib0move(&___nl__im__264, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(265)));
#line 395
___nl__int__265 = 0;
#line 395
c_rt_lib0move(&___nl__im__263, c_rt_lib0array_get(___nl__im__264, ___nl__int__265));
#line 395
c_rt_lib0clear(&___nl__im__264);
#line 395
//clear ___nl__int__265;
#line 395
c_rt_lib0move(&___nl__im__262, c_rt_lib0hash_get_value_dec(___nl__im__263, ___get_global_const(224)));
#line 395
c_rt_lib0clear(&___nl__im__263);
#line 395
c_rt_lib0move(&___nl__im__261, c_rt_lib0hash_get_value_dec(___nl__im__262, ___get_global_const(219)));
#line 395
c_rt_lib0clear(&___nl__im__262);
#line 395
___nl__bool__244 = c_rt_lib0priv_is(___nl__im__261, ___get_global_const(855));
#line 395
c_rt_lib0clear(&___nl__im__261);
#line 395
label_42:
;
#line 395
//clear ___nl__bool__256;
#line 395
label_40:
;
#line 395
//clear ___nl__bool__245;
#line 395
___nl__bool__244 = !___nl__bool__244;
#line 395
if(___nl__bool__244){ goto label_39;}
#line 392
c_rt_lib0move(&___nl__im__266, wprinter0build_pretty_op_l(___nl__im__238));
#line 392
c_rt_lib0clear(&___nl__im__0);
#line 392
c_rt_lib0clear(&___nl__im__1);
#line 392
//clear ___nl__bool__2;
#line 392
c_rt_lib0clear(&___nl__im__3);
#line 392
//clear ___nl__int__4;
#line 392
c_rt_lib0clear(&___nl__im__5);
#line 392
c_rt_lib0clear(&___nl__im__6);
#line 392
c_rt_lib0clear(&___nl__im__8);
#line 392
c_rt_lib0clear(&___nl__im__9);
#line 392
c_rt_lib0clear(&___nl__im__10);
#line 392
c_rt_lib0clear(&___nl__im__11);
#line 392
c_rt_lib0clear(&___nl__im__12);
#line 392
//clear ___nl__int__13;
#line 392
//clear ___nl__int__14;
#line 392
//clear ___nl__int__15;
#line 392
//clear ___nl__bool__16;
#line 392
//clear ___nl__int__17;
#line 392
c_rt_lib0clear(&___nl__im__18);
#line 392
c_rt_lib0clear(&___nl__im__22);
#line 392
//clear ___nl__bool__23;
#line 392
c_rt_lib0clear(&___nl__im__24);
#line 392
c_rt_lib0clear(&___nl__im__35);
#line 392
c_rt_lib0clear(&___nl__im__37);
#line 392
c_rt_lib0clear(&___nl__im__38);
#line 392
c_rt_lib0clear(&___nl__im__39);
#line 392
c_rt_lib0clear(&___nl__im__40);
#line 392
c_rt_lib0clear(&___nl__im__41);
#line 392
c_rt_lib0clear(&___nl__im__42);
#line 392
c_rt_lib0clear(&___nl__im__43);
#line 392
c_rt_lib0clear(&___nl__im__44);
#line 392
c_rt_lib0clear(&___nl__im__45);
#line 392
c_rt_lib0clear(&___nl__im__46);
#line 392
c_rt_lib0clear(&___nl__im__47);
#line 392
c_rt_lib0clear(&___nl__im__48);
#line 392
c_rt_lib0clear(&___nl__im__55);
#line 392
c_rt_lib0clear(&___nl__im__56);
#line 392
c_rt_lib0clear(&___nl__im__57);
#line 392
c_rt_lib0clear(&___nl__im__75);
#line 392
c_rt_lib0clear(&___nl__im__76);
#line 392
c_rt_lib0clear(&___nl__im__77);
#line 392
c_rt_lib0clear(&___nl__im__167);
#line 392
c_rt_lib0clear(&___nl__im__168);
#line 392
c_rt_lib0clear(&___nl__im__169);
#line 392
c_rt_lib0clear(&___nl__im__174);
#line 392
c_rt_lib0clear(&___nl__im__175);
#line 392
c_rt_lib0clear(&___nl__im__176);
#line 392
c_rt_lib0clear(&___nl__im__181);
#line 392
c_rt_lib0clear(&___nl__im__182);
#line 392
c_rt_lib0clear(&___nl__im__183);
#line 392
c_rt_lib0clear(&___nl__im__188);
#line 392
c_rt_lib0clear(&___nl__im__189);
#line 392
c_rt_lib0clear(&___nl__im__190);
#line 392
c_rt_lib0clear(&___nl__im__238);
#line 392
//clear ___nl__bool__244;
#line 392
return ___nl__im__266;
#line 392
goto label_38;
#line 392
label_39:
;
#line 392
label_38:
;
#line 392
//clear ___nl__bool__244;
#line 392
c_rt_lib0clear(&___nl__im__266);
#line 396
c_rt_lib0move(&___nl__im__267, wprinter0build_pretty_l(___nl__im__238));
#line 396
c_rt_lib0clear(&___nl__im__0);
#line 396
c_rt_lib0clear(&___nl__im__1);
#line 396
//clear ___nl__bool__2;
#line 396
c_rt_lib0clear(&___nl__im__3);
#line 396
//clear ___nl__int__4;
#line 396
c_rt_lib0clear(&___nl__im__5);
#line 396
c_rt_lib0clear(&___nl__im__6);
#line 396
c_rt_lib0clear(&___nl__im__8);
#line 396
c_rt_lib0clear(&___nl__im__9);
#line 396
c_rt_lib0clear(&___nl__im__10);
#line 396
c_rt_lib0clear(&___nl__im__11);
#line 396
c_rt_lib0clear(&___nl__im__12);
#line 396
//clear ___nl__int__13;
#line 396
//clear ___nl__int__14;
#line 396
//clear ___nl__int__15;
#line 396
//clear ___nl__bool__16;
#line 396
//clear ___nl__int__17;
#line 396
c_rt_lib0clear(&___nl__im__18);
#line 396
c_rt_lib0clear(&___nl__im__22);
#line 396
//clear ___nl__bool__23;
#line 396
c_rt_lib0clear(&___nl__im__24);
#line 396
c_rt_lib0clear(&___nl__im__35);
#line 396
c_rt_lib0clear(&___nl__im__37);
#line 396
c_rt_lib0clear(&___nl__im__38);
#line 396
c_rt_lib0clear(&___nl__im__39);
#line 396
c_rt_lib0clear(&___nl__im__40);
#line 396
c_rt_lib0clear(&___nl__im__41);
#line 396
c_rt_lib0clear(&___nl__im__42);
#line 396
c_rt_lib0clear(&___nl__im__43);
#line 396
c_rt_lib0clear(&___nl__im__44);
#line 396
c_rt_lib0clear(&___nl__im__45);
#line 396
c_rt_lib0clear(&___nl__im__46);
#line 396
c_rt_lib0clear(&___nl__im__47);
#line 396
c_rt_lib0clear(&___nl__im__48);
#line 396
c_rt_lib0clear(&___nl__im__55);
#line 396
c_rt_lib0clear(&___nl__im__56);
#line 396
c_rt_lib0clear(&___nl__im__57);
#line 396
c_rt_lib0clear(&___nl__im__75);
#line 396
c_rt_lib0clear(&___nl__im__76);
#line 396
c_rt_lib0clear(&___nl__im__77);
#line 396
c_rt_lib0clear(&___nl__im__167);
#line 396
c_rt_lib0clear(&___nl__im__168);
#line 396
c_rt_lib0clear(&___nl__im__169);
#line 396
c_rt_lib0clear(&___nl__im__174);
#line 396
c_rt_lib0clear(&___nl__im__175);
#line 396
c_rt_lib0clear(&___nl__im__176);
#line 396
c_rt_lib0clear(&___nl__im__181);
#line 396
c_rt_lib0clear(&___nl__im__182);
#line 396
c_rt_lib0clear(&___nl__im__183);
#line 396
c_rt_lib0clear(&___nl__im__188);
#line 396
c_rt_lib0clear(&___nl__im__189);
#line 396
c_rt_lib0clear(&___nl__im__190);
#line 396
c_rt_lib0clear(&___nl__im__238);
#line 396
return ___nl__im__267;
#line 397
goto label_1;
#line 397
label_14:
;
#line 398
___nl__int__269 = 0;
#line 398
c_rt_lib0move(&___nl__im__270, c_rt_lib0int_new(___nl__int__269));
#line 398
c_rt_lib0move(&___nl__im__272,___get_global_const(37));
#line 398
c_rt_lib0move(&___nl__im__271, c_rt_lib0ov_mk_arg(___get_global_const(379), ___nl__im__272));
#line 398
c_rt_lib0clear(&___nl__im__272);
#line 398
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__im__270, ___get_global_const(1088), ___nl__im__271));
#line 398
//clear ___nl__int__269;
#line 398
c_rt_lib0clear(&___nl__im__270);
#line 398
c_rt_lib0clear(&___nl__im__271);
#line 398
c_rt_lib0clear(&___nl__im__0);
#line 398
c_rt_lib0clear(&___nl__im__1);
#line 398
//clear ___nl__bool__2;
#line 398
c_rt_lib0clear(&___nl__im__3);
#line 398
//clear ___nl__int__4;
#line 398
c_rt_lib0clear(&___nl__im__5);
#line 398
c_rt_lib0clear(&___nl__im__6);
#line 398
c_rt_lib0clear(&___nl__im__8);
#line 398
c_rt_lib0clear(&___nl__im__9);
#line 398
c_rt_lib0clear(&___nl__im__10);
#line 398
c_rt_lib0clear(&___nl__im__11);
#line 398
c_rt_lib0clear(&___nl__im__12);
#line 398
//clear ___nl__int__13;
#line 398
//clear ___nl__int__14;
#line 398
//clear ___nl__int__15;
#line 398
//clear ___nl__bool__16;
#line 398
//clear ___nl__int__17;
#line 398
c_rt_lib0clear(&___nl__im__18);
#line 398
c_rt_lib0clear(&___nl__im__22);
#line 398
//clear ___nl__bool__23;
#line 398
c_rt_lib0clear(&___nl__im__24);
#line 398
c_rt_lib0clear(&___nl__im__35);
#line 398
c_rt_lib0clear(&___nl__im__37);
#line 398
c_rt_lib0clear(&___nl__im__38);
#line 398
c_rt_lib0clear(&___nl__im__39);
#line 398
c_rt_lib0clear(&___nl__im__40);
#line 398
c_rt_lib0clear(&___nl__im__41);
#line 398
c_rt_lib0clear(&___nl__im__42);
#line 398
c_rt_lib0clear(&___nl__im__43);
#line 398
c_rt_lib0clear(&___nl__im__44);
#line 398
c_rt_lib0clear(&___nl__im__45);
#line 398
c_rt_lib0clear(&___nl__im__46);
#line 398
c_rt_lib0clear(&___nl__im__47);
#line 398
c_rt_lib0clear(&___nl__im__48);
#line 398
c_rt_lib0clear(&___nl__im__55);
#line 398
c_rt_lib0clear(&___nl__im__56);
#line 398
c_rt_lib0clear(&___nl__im__57);
#line 398
c_rt_lib0clear(&___nl__im__75);
#line 398
c_rt_lib0clear(&___nl__im__76);
#line 398
c_rt_lib0clear(&___nl__im__77);
#line 398
c_rt_lib0clear(&___nl__im__167);
#line 398
c_rt_lib0clear(&___nl__im__168);
#line 398
c_rt_lib0clear(&___nl__im__169);
#line 398
c_rt_lib0clear(&___nl__im__174);
#line 398
c_rt_lib0clear(&___nl__im__175);
#line 398
c_rt_lib0clear(&___nl__im__176);
#line 398
c_rt_lib0clear(&___nl__im__181);
#line 398
c_rt_lib0clear(&___nl__im__182);
#line 398
c_rt_lib0clear(&___nl__im__183);
#line 398
c_rt_lib0clear(&___nl__im__188);
#line 398
c_rt_lib0clear(&___nl__im__189);
#line 398
c_rt_lib0clear(&___nl__im__190);
#line 398
c_rt_lib0clear(&___nl__im__238);
#line 398
c_rt_lib0clear(&___nl__im__267);
#line 398
return ___nl__im__268;
#line 399
goto label_1;
#line 399
label_15:
;
#line 399
c_rt_lib0move(&___nl__im__274, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(230)));
#line 399
c_rt_lib0copy(&___nl__im__273, ___nl__im__274);
#line 400
c_rt_lib0move(&___nl__im__276,___get_global_const(37));
#line 400
c_rt_lib0move(&___nl__im__277,___get_global_const(37));
#line 400
c_rt_lib0move(&___nl__im__275, pretty_printer_priv0get_compressed_fun_val(___nl__im__0, ___nl__im__276, ___nl__im__277));
#line 400
c_rt_lib0clear(&___nl__im__276);
#line 400
c_rt_lib0clear(&___nl__im__277);
#line 400
c_rt_lib0clear(&___nl__im__0);
#line 400
c_rt_lib0clear(&___nl__im__1);
#line 400
//clear ___nl__bool__2;
#line 400
c_rt_lib0clear(&___nl__im__3);
#line 400
//clear ___nl__int__4;
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__8);
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
c_rt_lib0clear(&___nl__im__10);
#line 400
c_rt_lib0clear(&___nl__im__11);
#line 400
c_rt_lib0clear(&___nl__im__12);
#line 400
//clear ___nl__int__13;
#line 400
//clear ___nl__int__14;
#line 400
//clear ___nl__int__15;
#line 400
//clear ___nl__bool__16;
#line 400
//clear ___nl__int__17;
#line 400
c_rt_lib0clear(&___nl__im__18);
#line 400
c_rt_lib0clear(&___nl__im__22);
#line 400
//clear ___nl__bool__23;
#line 400
c_rt_lib0clear(&___nl__im__24);
#line 400
c_rt_lib0clear(&___nl__im__35);
#line 400
c_rt_lib0clear(&___nl__im__37);
#line 400
c_rt_lib0clear(&___nl__im__38);
#line 400
c_rt_lib0clear(&___nl__im__39);
#line 400
c_rt_lib0clear(&___nl__im__40);
#line 400
c_rt_lib0clear(&___nl__im__41);
#line 400
c_rt_lib0clear(&___nl__im__42);
#line 400
c_rt_lib0clear(&___nl__im__43);
#line 400
c_rt_lib0clear(&___nl__im__44);
#line 400
c_rt_lib0clear(&___nl__im__45);
#line 400
c_rt_lib0clear(&___nl__im__46);
#line 400
c_rt_lib0clear(&___nl__im__47);
#line 400
c_rt_lib0clear(&___nl__im__48);
#line 400
c_rt_lib0clear(&___nl__im__55);
#line 400
c_rt_lib0clear(&___nl__im__56);
#line 400
c_rt_lib0clear(&___nl__im__57);
#line 400
c_rt_lib0clear(&___nl__im__75);
#line 400
c_rt_lib0clear(&___nl__im__76);
#line 400
c_rt_lib0clear(&___nl__im__77);
#line 400
c_rt_lib0clear(&___nl__im__167);
#line 400
c_rt_lib0clear(&___nl__im__168);
#line 400
c_rt_lib0clear(&___nl__im__169);
#line 400
c_rt_lib0clear(&___nl__im__174);
#line 400
c_rt_lib0clear(&___nl__im__175);
#line 400
c_rt_lib0clear(&___nl__im__176);
#line 400
c_rt_lib0clear(&___nl__im__181);
#line 400
c_rt_lib0clear(&___nl__im__182);
#line 400
c_rt_lib0clear(&___nl__im__183);
#line 400
c_rt_lib0clear(&___nl__im__188);
#line 400
c_rt_lib0clear(&___nl__im__189);
#line 400
c_rt_lib0clear(&___nl__im__190);
#line 400
c_rt_lib0clear(&___nl__im__238);
#line 400
c_rt_lib0clear(&___nl__im__267);
#line 400
c_rt_lib0clear(&___nl__im__268);
#line 400
c_rt_lib0clear(&___nl__im__273);
#line 400
c_rt_lib0clear(&___nl__im__274);
#line 400
return ___nl__im__275;
#line 401
goto label_1;
#line 401
label_16:
;
#line 401
c_rt_lib0move(&___nl__im__279, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(231)));
#line 401
c_rt_lib0copy(&___nl__im__278, ___nl__im__279);
#line 402
c_rt_lib0move(&___nl__im__281, pretty_printer_priv0join_print_hash_elem(___nl__im__278));
#line 402
c_rt_lib0move(&___nl__im__282,___get_global_const(291));
#line 402
c_rt_lib0move(&___nl__im__283,___get_global_const(292));
#line 402
c_rt_lib0move(&___nl__im__280, wprinter0build_pretty_arr_decl(___nl__im__281, ___nl__im__282, ___nl__im__283));
#line 402
c_rt_lib0clear(&___nl__im__281);
#line 402
c_rt_lib0clear(&___nl__im__282);
#line 402
c_rt_lib0clear(&___nl__im__283);
#line 402
c_rt_lib0clear(&___nl__im__0);
#line 402
c_rt_lib0clear(&___nl__im__1);
#line 402
//clear ___nl__bool__2;
#line 402
c_rt_lib0clear(&___nl__im__3);
#line 402
//clear ___nl__int__4;
#line 402
c_rt_lib0clear(&___nl__im__5);
#line 402
c_rt_lib0clear(&___nl__im__6);
#line 402
c_rt_lib0clear(&___nl__im__8);
#line 402
c_rt_lib0clear(&___nl__im__9);
#line 402
c_rt_lib0clear(&___nl__im__10);
#line 402
c_rt_lib0clear(&___nl__im__11);
#line 402
c_rt_lib0clear(&___nl__im__12);
#line 402
//clear ___nl__int__13;
#line 402
//clear ___nl__int__14;
#line 402
//clear ___nl__int__15;
#line 402
//clear ___nl__bool__16;
#line 402
//clear ___nl__int__17;
#line 402
c_rt_lib0clear(&___nl__im__18);
#line 402
c_rt_lib0clear(&___nl__im__22);
#line 402
//clear ___nl__bool__23;
#line 402
c_rt_lib0clear(&___nl__im__24);
#line 402
c_rt_lib0clear(&___nl__im__35);
#line 402
c_rt_lib0clear(&___nl__im__37);
#line 402
c_rt_lib0clear(&___nl__im__38);
#line 402
c_rt_lib0clear(&___nl__im__39);
#line 402
c_rt_lib0clear(&___nl__im__40);
#line 402
c_rt_lib0clear(&___nl__im__41);
#line 402
c_rt_lib0clear(&___nl__im__42);
#line 402
c_rt_lib0clear(&___nl__im__43);
#line 402
c_rt_lib0clear(&___nl__im__44);
#line 402
c_rt_lib0clear(&___nl__im__45);
#line 402
c_rt_lib0clear(&___nl__im__46);
#line 402
c_rt_lib0clear(&___nl__im__47);
#line 402
c_rt_lib0clear(&___nl__im__48);
#line 402
c_rt_lib0clear(&___nl__im__55);
#line 402
c_rt_lib0clear(&___nl__im__56);
#line 402
c_rt_lib0clear(&___nl__im__57);
#line 402
c_rt_lib0clear(&___nl__im__75);
#line 402
c_rt_lib0clear(&___nl__im__76);
#line 402
c_rt_lib0clear(&___nl__im__77);
#line 402
c_rt_lib0clear(&___nl__im__167);
#line 402
c_rt_lib0clear(&___nl__im__168);
#line 402
c_rt_lib0clear(&___nl__im__169);
#line 402
c_rt_lib0clear(&___nl__im__174);
#line 402
c_rt_lib0clear(&___nl__im__175);
#line 402
c_rt_lib0clear(&___nl__im__176);
#line 402
c_rt_lib0clear(&___nl__im__181);
#line 402
c_rt_lib0clear(&___nl__im__182);
#line 402
c_rt_lib0clear(&___nl__im__183);
#line 402
c_rt_lib0clear(&___nl__im__188);
#line 402
c_rt_lib0clear(&___nl__im__189);
#line 402
c_rt_lib0clear(&___nl__im__190);
#line 402
c_rt_lib0clear(&___nl__im__238);
#line 402
c_rt_lib0clear(&___nl__im__267);
#line 402
c_rt_lib0clear(&___nl__im__268);
#line 402
c_rt_lib0clear(&___nl__im__273);
#line 402
c_rt_lib0clear(&___nl__im__274);
#line 402
c_rt_lib0clear(&___nl__im__275);
#line 402
c_rt_lib0clear(&___nl__im__278);
#line 402
c_rt_lib0clear(&___nl__im__279);
#line 402
return ___nl__im__280;
#line 403
goto label_1;
#line 403
label_17:
;
#line 403
c_rt_lib0move(&___nl__im__285, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(899)));
#line 403
c_rt_lib0copy(&___nl__im__284, ___nl__im__285);
#line 404
c_rt_lib0move(&___nl__im__288, c_rt_lib0hash_get_value_dec(___nl__im__284, ___get_global_const(168)));
#line 404
c_rt_lib0move(&___nl__im__289, c_rt_lib0hash_get_value_dec(___nl__im__284, ___get_global_const(152)));
#line 404
c_rt_lib0move(&___nl__im__287, pretty_printer_priv0get_fun_label(___nl__im__288, ___nl__im__289));
#line 404
c_rt_lib0clear(&___nl__im__288);
#line 404
c_rt_lib0clear(&___nl__im__289);
#line 404
c_rt_lib0move(&___nl__im__286, wprinter0build_sim(___nl__im__287));
#line 404
c_rt_lib0clear(&___nl__im__287);
#line 404
c_rt_lib0clear(&___nl__im__0);
#line 404
c_rt_lib0clear(&___nl__im__1);
#line 404
//clear ___nl__bool__2;
#line 404
c_rt_lib0clear(&___nl__im__3);
#line 404
//clear ___nl__int__4;
#line 404
c_rt_lib0clear(&___nl__im__5);
#line 404
c_rt_lib0clear(&___nl__im__6);
#line 404
c_rt_lib0clear(&___nl__im__8);
#line 404
c_rt_lib0clear(&___nl__im__9);
#line 404
c_rt_lib0clear(&___nl__im__10);
#line 404
c_rt_lib0clear(&___nl__im__11);
#line 404
c_rt_lib0clear(&___nl__im__12);
#line 404
//clear ___nl__int__13;
#line 404
//clear ___nl__int__14;
#line 404
//clear ___nl__int__15;
#line 404
//clear ___nl__bool__16;
#line 404
//clear ___nl__int__17;
#line 404
c_rt_lib0clear(&___nl__im__18);
#line 404
c_rt_lib0clear(&___nl__im__22);
#line 404
//clear ___nl__bool__23;
#line 404
c_rt_lib0clear(&___nl__im__24);
#line 404
c_rt_lib0clear(&___nl__im__35);
#line 404
c_rt_lib0clear(&___nl__im__37);
#line 404
c_rt_lib0clear(&___nl__im__38);
#line 404
c_rt_lib0clear(&___nl__im__39);
#line 404
c_rt_lib0clear(&___nl__im__40);
#line 404
c_rt_lib0clear(&___nl__im__41);
#line 404
c_rt_lib0clear(&___nl__im__42);
#line 404
c_rt_lib0clear(&___nl__im__43);
#line 404
c_rt_lib0clear(&___nl__im__44);
#line 404
c_rt_lib0clear(&___nl__im__45);
#line 404
c_rt_lib0clear(&___nl__im__46);
#line 404
c_rt_lib0clear(&___nl__im__47);
#line 404
c_rt_lib0clear(&___nl__im__48);
#line 404
c_rt_lib0clear(&___nl__im__55);
#line 404
c_rt_lib0clear(&___nl__im__56);
#line 404
c_rt_lib0clear(&___nl__im__57);
#line 404
c_rt_lib0clear(&___nl__im__75);
#line 404
c_rt_lib0clear(&___nl__im__76);
#line 404
c_rt_lib0clear(&___nl__im__77);
#line 404
c_rt_lib0clear(&___nl__im__167);
#line 404
c_rt_lib0clear(&___nl__im__168);
#line 404
c_rt_lib0clear(&___nl__im__169);
#line 404
c_rt_lib0clear(&___nl__im__174);
#line 404
c_rt_lib0clear(&___nl__im__175);
#line 404
c_rt_lib0clear(&___nl__im__176);
#line 404
c_rt_lib0clear(&___nl__im__181);
#line 404
c_rt_lib0clear(&___nl__im__182);
#line 404
c_rt_lib0clear(&___nl__im__183);
#line 404
c_rt_lib0clear(&___nl__im__188);
#line 404
c_rt_lib0clear(&___nl__im__189);
#line 404
c_rt_lib0clear(&___nl__im__190);
#line 404
c_rt_lib0clear(&___nl__im__238);
#line 404
c_rt_lib0clear(&___nl__im__267);
#line 404
c_rt_lib0clear(&___nl__im__268);
#line 404
c_rt_lib0clear(&___nl__im__273);
#line 404
c_rt_lib0clear(&___nl__im__274);
#line 404
c_rt_lib0clear(&___nl__im__275);
#line 404
c_rt_lib0clear(&___nl__im__278);
#line 404
c_rt_lib0clear(&___nl__im__279);
#line 404
c_rt_lib0clear(&___nl__im__280);
#line 404
c_rt_lib0clear(&___nl__im__284);
#line 404
c_rt_lib0clear(&___nl__im__285);
#line 404
return ___nl__im__286;
#line 405
goto label_1;
#line 405
label_1:
;
}

ImmT  pretty_printer_priv0print_cond_mod(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,nast0cmd_t0type ___nl__im__2,ImmT  ___nl__im__3,nast0value_t0type ___nl__im__4,INT  ___nl__int__5) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 411
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 412
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 413
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 413
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__10));
#line 413
c_rt_lib0clear(&___nl__im__10);
#line 413
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(3, ___nl__im__7, ___nl__im__8, ___nl__im__9));
#line 413
c_rt_lib0clear(&___nl__im__7);
#line 413
c_rt_lib0clear(&___nl__im__8);
#line 413
c_rt_lib0clear(&___nl__im__9);
#line 415
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 415
___nl__int__13 = 0;
#line 415
___nl__int__14 = ___nl__int__12 > ___nl__int__13;
#line 415
___nl__bool__11 = ___nl__int__14;
#line 415
//clear ___nl__int__12;
#line 415
//clear ___nl__int__13;
#line 415
//clear ___nl__int__14;
#line 415
___nl__bool__11 = !___nl__bool__11;
#line 415
if(___nl__bool__11){ goto label_2;}
#line 415
c_rt_lib0move(&___nl__im__16,___get_global_const(429));
#line 415
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 415
c_rt_lib0clear(&___nl__im__16);
#line 415
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__15));
#line 415
c_rt_lib0clear(&___nl__im__15);
#line 415
goto label_1;
#line 415
label_2:
;
#line 415
label_1:
;
#line 415
//clear ___nl__bool__11;
#line 416
___nl__int__18 = c_rt_lib0array_len(___nl__im__3);
#line 416
___nl__int__19 = 0;
#line 416
___nl__int__20 = ___nl__int__18 > ___nl__int__19;
#line 416
___nl__bool__17 = ___nl__int__20;
#line 416
//clear ___nl__int__18;
#line 416
//clear ___nl__int__19;
#line 416
//clear ___nl__int__20;
#line 416
___nl__bool__17 = !___nl__bool__17;
#line 416
if(___nl__bool__17){ goto label_4;}
#line 416
c_rt_lib0move(&___nl__im__22,___get_global_const(420));
#line 416
c_rt_lib0move(&___nl__im__21, wprinter0build_sim(___nl__im__22));
#line 416
c_rt_lib0clear(&___nl__im__22);
#line 416
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__21));
#line 416
c_rt_lib0clear(&___nl__im__21);
#line 416
goto label_3;
#line 416
label_4:
;
#line 416
label_3:
;
#line 416
//clear ___nl__bool__17;
#line 417
c_rt_lib0move(&___nl__im__23, pretty_printer_priv0print_val(___nl__im__4));
#line 417
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__23));
#line 417
c_rt_lib0clear(&___nl__im__23);
#line 418
___nl__int__25 = c_rt_lib0array_len(___nl__im__3);
#line 418
___nl__int__26 = 0;
#line 418
___nl__int__27 = ___nl__int__25 > ___nl__int__26;
#line 418
___nl__bool__24 = ___nl__int__27;
#line 418
//clear ___nl__int__25;
#line 418
//clear ___nl__int__26;
#line 418
//clear ___nl__int__27;
#line 418
___nl__bool__24 = !___nl__bool__24;
#line 418
if(___nl__bool__24){ goto label_6;}
#line 418
c_rt_lib0move(&___nl__im__29,___get_global_const(299));
#line 418
c_rt_lib0move(&___nl__im__28, wprinter0build_sim(___nl__im__29));
#line 418
c_rt_lib0clear(&___nl__im__29);
#line 418
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__28));
#line 418
c_rt_lib0clear(&___nl__im__28);
#line 418
goto label_5;
#line 418
label_6:
;
#line 418
label_5:
;
#line 418
//clear ___nl__bool__24;
#line 420
c_rt_lib0move(&___nl__im__32, pretty_printer_priv0print_simple_statement(___nl__im__2));
#line 421
c_rt_lib0move(&___nl__im__33, wprinter0get_sep());
#line 422
c_rt_lib0move(&___nl__im__34, wprinter0build_pretty_op_l(___nl__im__6));
#line 422
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(3, ___nl__im__32, ___nl__im__33, ___nl__im__34));
#line 422
c_rt_lib0clear(&___nl__im__32);
#line 422
c_rt_lib0clear(&___nl__im__33);
#line 422
c_rt_lib0clear(&___nl__im__34);
#line 422
c_rt_lib0move(&___nl__im__30, wprinter0build_pretty_a(___nl__im__31));
#line 422
c_rt_lib0clear(&___nl__im__31);
#line 422
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__30, ___nl__int__5));
#line 422
c_rt_lib0clear(&___nl__im__30);
#line 424
c_rt_lib0move(&___nl__im__35,___get_global_const(409));
#line 424
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__35));
#line 424
c_rt_lib0clear(&___nl__im__35);
#line 424
c_rt_lib0clear(&___nl__im__1);
#line 424
c_rt_lib0clear(&___nl__im__2);
#line 424
c_rt_lib0clear(&___nl__im__3);
#line 424
c_rt_lib0clear(&___nl__im__4);
#line 424
//clear ___nl__int__5;
#line 424
c_rt_lib0clear(&___nl__im__6);
#line 424
return NULL;
}

ImmT  pretty_printer_priv0print_loop(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,nast0cmd_t0type ___nl__im__2,ImmT  ___nl__im__3,nast0value_t0type ___nl__im__4,INT  ___nl__int__5) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
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
#line 429
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 429
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 429
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 429
c_rt_lib0clear(&___nl__im__7);
#line 429
c_rt_lib0clear(&___nl__im__8);
#line 430
c_rt_lib0move(&___nl__im__9, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 430
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__9));
#line 430
c_rt_lib0clear(&___nl__im__9);
#line 431
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 431
___nl__int__12 = 0;
#line 431
___nl__int__13 = ___nl__int__11 > ___nl__int__12;
#line 431
___nl__bool__10 = ___nl__int__13;
#line 431
//clear ___nl__int__11;
#line 431
//clear ___nl__int__12;
#line 431
//clear ___nl__int__13;
#line 431
___nl__bool__10 = !___nl__bool__10;
#line 431
if(___nl__bool__10){ goto label_2;}
#line 431
c_rt_lib0move(&___nl__im__15,___get_global_const(429));
#line 431
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 431
c_rt_lib0clear(&___nl__im__15);
#line 431
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__14));
#line 431
c_rt_lib0clear(&___nl__im__14);
#line 431
goto label_1;
#line 431
label_2:
;
#line 431
label_1:
;
#line 431
//clear ___nl__bool__10;
#line 432
c_rt_lib0move(&___nl__im__17,___get_global_const(420));
#line 432
c_rt_lib0move(&___nl__im__16, wprinter0build_sim(___nl__im__17));
#line 432
c_rt_lib0clear(&___nl__im__17);
#line 432
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__16));
#line 432
c_rt_lib0clear(&___nl__im__16);
#line 433
c_rt_lib0move(&___nl__im__18, pretty_printer_priv0print_val(___nl__im__4));
#line 434
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(1088)));
#line 434
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(130));
#line 434
c_rt_lib0clear(&___nl__im__20);
#line 434
___nl__bool__19 = !___nl__bool__19;
#line 434
if(___nl__bool__19){ goto label_4;}
#line 435
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(1088)));
#line 435
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(1088)));
#line 435
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(130)));
#line 435
c_rt_lib0clear(&___nl__im__23);
#line 435
c_rt_lib0clear(&___nl__im__24);
#line 435
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(130)));
#line 435
c_rt_lib0clear(&___nl__im__22);
#line 435
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__21));
#line 435
c_rt_lib0clear(&___nl__im__21);
#line 436
goto label_3;
#line 436
label_4:
;
#line 437
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__18));
#line 438
goto label_3;
#line 438
label_3:
;
#line 438
//clear ___nl__bool__19;
#line 439
c_rt_lib0move(&___nl__im__26,___get_global_const(299));
#line 439
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 439
c_rt_lib0clear(&___nl__im__26);
#line 439
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__25));
#line 439
c_rt_lib0clear(&___nl__im__25);
#line 440
c_rt_lib0move(&___nl__im__27, wprinter0build_pretty_l(___nl__im__6));
#line 440
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__27, ___nl__int__5));
#line 440
c_rt_lib0clear(&___nl__im__27);
#line 441
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__2, ___nl__int__5));
#line 441
c_rt_lib0clear(&___nl__im__1);
#line 441
c_rt_lib0clear(&___nl__im__2);
#line 441
c_rt_lib0clear(&___nl__im__3);
#line 441
c_rt_lib0clear(&___nl__im__4);
#line 441
//clear ___nl__int__5;
#line 441
c_rt_lib0clear(&___nl__im__6);
#line 441
c_rt_lib0clear(&___nl__im__18);
#line 441
return NULL;
}

ImmT  pretty_printer_priv0print_loop_or_mod(wprinter0state_t0type* ___ref___im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2,nast0cmd_t0type ___nl__im__3,ImmT  ___nl__im__4,nast0value_t0type ___nl__im__5,INT  ___nl__int__6) {
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
c_rt_lib0arg_val(___nl__im__5);
pretty_printer_priv0__const__init();
bool  ___nl__bool__7 = false;
#line 446
___nl__bool__7 = ___nl__bool__1;
#line 446
___nl__bool__7 = !___nl__bool__7;
#line 446
if(___nl__bool__7){ goto label_2;}
#line 447
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 448
goto label_1;
#line 448
label_2:
;
#line 449
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 450
goto label_1;
#line 450
label_1:
;
#line 450
//clear ___nl__bool__7;
#line 450
//clear ___nl__bool__1;
#line 450
c_rt_lib0clear(&___nl__im__2);
#line 450
c_rt_lib0clear(&___nl__im__3);
#line 450
c_rt_lib0clear(&___nl__im__4);
#line 450
c_rt_lib0clear(&___nl__im__5);
#line 450
//clear ___nl__int__6;
#line 450
return NULL;
}

wprinter0pretty_t0type pretty_printer_priv0print_try_ensure(nast0try_ensure_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
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
#line 454
c_rt_lib0move(&___nl__im__3, wprinter0build_sim(___nl__im__1));
#line 454
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__3));
#line 454
c_rt_lib0clear(&___nl__im__3);
#line 455
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(688));
#line 455
if(___nl__bool__4){ goto label_2;}
#line 457
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(890));
#line 457
if(___nl__bool__4){ goto label_3;}
#line 459
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(889));
#line 459
if(___nl__bool__4){ goto label_4;}
#line 459
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 459
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__0));
#line 459
nl_die_arg(___nl__im__5);
#line 455
label_2:
;
#line 455
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(688)));
#line 455
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 456
c_rt_lib0move(&___nl__im__9, wprinter0get_sep());
#line 456
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0print_var_decl(___nl__im__6));
#line 456
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__10));
#line 456
c_rt_lib0clear(&___nl__im__9);
#line 456
c_rt_lib0clear(&___nl__im__10);
#line 456
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__8));
#line 456
c_rt_lib0clear(&___nl__im__8);
#line 457
goto label_1;
#line 457
label_3:
;
#line 457
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(890)));
#line 457
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 458
c_rt_lib0move(&___nl__im__14, wprinter0get_sep());
#line 458
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_val(___nl__im__11));
#line 458
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__15));
#line 458
c_rt_lib0clear(&___nl__im__14);
#line 458
c_rt_lib0clear(&___nl__im__15);
#line 458
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__13));
#line 458
c_rt_lib0clear(&___nl__im__13);
#line 459
goto label_1;
#line 459
label_4:
;
#line 459
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(889)));
#line 459
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 461
c_rt_lib0move(&___nl__im__19, wprinter0get_sep());
#line 462
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(274)));
#line 462
c_rt_lib0move(&___nl__im__20, pretty_printer_priv0print_val(___nl__im__21));
#line 462
c_rt_lib0clear(&___nl__im__21);
#line 463
c_rt_lib0move(&___nl__im__22, wprinter0get_sep());
#line 464
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(514)));
#line 464
c_rt_lib0move(&___nl__im__23, wprinter0build_sim(___nl__im__24));
#line 464
c_rt_lib0clear(&___nl__im__24);
#line 465
c_rt_lib0move(&___nl__im__25, wprinter0get_sep());
#line 466
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(275)));
#line 466
c_rt_lib0move(&___nl__im__26, pretty_printer_priv0print_val(___nl__im__27));
#line 466
c_rt_lib0clear(&___nl__im__27);
#line 466
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(6, ___nl__im__19, ___nl__im__20, ___nl__im__22, ___nl__im__23, ___nl__im__25, ___nl__im__26));
#line 466
c_rt_lib0clear(&___nl__im__19);
#line 466
c_rt_lib0clear(&___nl__im__20);
#line 466
c_rt_lib0clear(&___nl__im__22);
#line 466
c_rt_lib0clear(&___nl__im__23);
#line 466
c_rt_lib0clear(&___nl__im__25);
#line 466
c_rt_lib0clear(&___nl__im__26);
#line 466
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__18));
#line 466
c_rt_lib0clear(&___nl__im__18);
#line 468
goto label_1;
#line 468
label_1:
;
#line 469
c_rt_lib0move(&___nl__im__28, wprinter0build_pretty_l(___nl__im__2));
#line 469
c_rt_lib0clear(&___nl__im__0);
#line 469
c_rt_lib0clear(&___nl__im__1);
#line 469
c_rt_lib0clear(&___nl__im__2);
#line 469
//clear ___nl__bool__4;
#line 469
c_rt_lib0clear(&___nl__im__5);
#line 469
c_rt_lib0clear(&___nl__im__6);
#line 469
c_rt_lib0clear(&___nl__im__7);
#line 469
c_rt_lib0clear(&___nl__im__11);
#line 469
c_rt_lib0clear(&___nl__im__12);
#line 469
c_rt_lib0clear(&___nl__im__16);
#line 469
c_rt_lib0clear(&___nl__im__17);
#line 469
return ___nl__im__28;
}

wprinter0pretty_t0type pretty_printer_priv0print_return(nast0value_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 473
c_rt_lib0move(&___nl__im__3,___get_global_const(246));
#line 473
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 473
c_rt_lib0clear(&___nl__im__3);
#line 473
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 473
c_rt_lib0clear(&___nl__im__2);
#line 474
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 474
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(875));
#line 474
c_rt_lib0clear(&___nl__im__5);
#line 474
___nl__bool__4 = !___nl__bool__4;
#line 474
___nl__bool__4 = !___nl__bool__4;
#line 474
if(___nl__bool__4){ goto label_2;}
#line 475
c_rt_lib0move(&___nl__im__7, wprinter0get_sep());
#line 475
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_val(___nl__im__0));
#line 475
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 475
c_rt_lib0clear(&___nl__im__7);
#line 475
c_rt_lib0clear(&___nl__im__8);
#line 475
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__6));
#line 475
c_rt_lib0clear(&___nl__im__6);
#line 476
goto label_1;
#line 476
label_2:
;
#line 476
label_1:
;
#line 476
//clear ___nl__bool__4;
#line 477
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__1));
#line 477
c_rt_lib0clear(&___nl__im__0);
#line 477
c_rt_lib0clear(&___nl__im__1);
#line 477
return ___nl__im__9;
}

wprinter0pretty_t0type pretty_printer_priv0print_sim_value(nast0value_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 481
c_rt_lib0move(&___nl__im__1, pretty_printer_priv0print_val(___nl__im__0));
#line 482
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1088)));
#line 482
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(130));
#line 482
c_rt_lib0clear(&___nl__im__3);
#line 482
___nl__bool__2 = !___nl__bool__2;
#line 482
if(___nl__bool__2){ goto label_2;}
#line 483
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1088)));
#line 483
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1088)));
#line 483
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(130)));
#line 483
c_rt_lib0clear(&___nl__im__6);
#line 483
c_rt_lib0clear(&___nl__im__7);
#line 483
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(130)));
#line 483
c_rt_lib0clear(&___nl__im__5);
#line 483
c_rt_lib0move(&___nl__im__1, wprinter0build_pretty_l(___nl__im__4));
#line 483
c_rt_lib0clear(&___nl__im__4);
#line 484
goto label_1;
#line 484
label_2:
;
#line 484
label_1:
;
#line 484
//clear ___nl__bool__2;
#line 485
c_rt_lib0clear(&___nl__im__0);
#line 485
return ___nl__im__1;
}

wprinter0pretty_t0type pretty_printer_priv0print_break() {
pretty_printer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 489
c_rt_lib0move(&___nl__im__1,___get_global_const(870));
#line 489
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 489
c_rt_lib0clear(&___nl__im__1);
#line 489
return ___nl__im__0;
}

wprinter0pretty_t0type pretty_printer_priv0print_continue() {
pretty_printer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 493
c_rt_lib0move(&___nl__im__1,___get_global_const(871));
#line 493
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 493
c_rt_lib0clear(&___nl__im__1);
#line 493
return ___nl__im__0;
}

wprinter0pretty_t0type pretty_printer_priv0print_die(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 497
c_rt_lib0move(&___nl__im__3,___get_global_const(247));
#line 497
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 497
c_rt_lib0clear(&___nl__im__3);
#line 497
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 497
c_rt_lib0clear(&___nl__im__2);
#line 503
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 503
___nl__int__6 = 0;
#line 503
___nl__int__7 = ___nl__int__5 > ___nl__int__6;
#line 503
___nl__bool__4 = ___nl__int__7;
#line 503
//clear ___nl__int__5;
#line 503
//clear ___nl__int__6;
#line 503
//clear ___nl__int__7;
#line 503
___nl__bool__4 = !___nl__bool__4;
#line 503
if(___nl__bool__4){ goto label_2;}
#line 499
c_rt_lib0move(&___nl__im__10,___get_global_const(420));
#line 499
c_rt_lib0move(&___nl__im__9, wprinter0build_sim(___nl__im__10));
#line 499
c_rt_lib0clear(&___nl__im__10);
#line 500
c_rt_lib0move(&___nl__im__12, pretty_printer_priv0join_print_val(___nl__im__0));
#line 500
c_rt_lib0move(&___nl__im__11, wprinter0build_pretty_l(___nl__im__12));
#line 500
c_rt_lib0clear(&___nl__im__12);
#line 501
c_rt_lib0move(&___nl__im__14,___get_global_const(299));
#line 501
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 501
c_rt_lib0clear(&___nl__im__14);
#line 501
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__11, ___nl__im__13));
#line 501
c_rt_lib0clear(&___nl__im__9);
#line 501
c_rt_lib0clear(&___nl__im__11);
#line 501
c_rt_lib0clear(&___nl__im__13);
#line 501
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__8));
#line 501
c_rt_lib0clear(&___nl__im__8);
#line 501
goto label_1;
#line 501
label_2:
;
#line 501
label_1:
;
#line 501
//clear ___nl__bool__4;
#line 504
c_rt_lib0move(&___nl__im__15, wprinter0build_pretty_a(___nl__im__1));
#line 504
c_rt_lib0clear(&___nl__im__0);
#line 504
c_rt_lib0clear(&___nl__im__1);
#line 504
return ___nl__im__15;
}

wprinter0pretty_t0type pretty_printer_priv0print_simple_statement(nast0cmd_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
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
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
#line 508
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 508
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(219));
#line 508
c_rt_lib0clear(&___nl__im__2);
#line 508
___nl__bool__1 = !___nl__bool__1;
#line 508
if(___nl__bool__1){ goto label_2;}
#line 509
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 509
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 509
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(219)));
#line 509
c_rt_lib0clear(&___nl__im__5);
#line 509
c_rt_lib0clear(&___nl__im__6);
#line 509
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0print_sim_value(___nl__im__4));
#line 509
c_rt_lib0clear(&___nl__im__4);
#line 509
c_rt_lib0clear(&___nl__im__0);
#line 509
//clear ___nl__bool__1;
#line 509
return ___nl__im__3;
#line 510
goto label_1;
#line 510
label_2:
;
#line 510
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 510
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(246));
#line 510
c_rt_lib0clear(&___nl__im__7);
#line 510
___nl__bool__1 = !___nl__bool__1;
#line 510
if(___nl__bool__1){ goto label_3;}
#line 511
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 511
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 511
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(246)));
#line 511
c_rt_lib0clear(&___nl__im__10);
#line 511
c_rt_lib0clear(&___nl__im__11);
#line 511
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_return(___nl__im__9));
#line 511
c_rt_lib0clear(&___nl__im__9);
#line 511
c_rt_lib0clear(&___nl__im__0);
#line 511
//clear ___nl__bool__1;
#line 511
c_rt_lib0clear(&___nl__im__3);
#line 511
return ___nl__im__8;
#line 512
goto label_1;
#line 512
label_3:
;
#line 512
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 512
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(870));
#line 512
c_rt_lib0clear(&___nl__im__12);
#line 512
___nl__bool__1 = !___nl__bool__1;
#line 512
if(___nl__bool__1){ goto label_4;}
#line 513
c_rt_lib0move(&___nl__im__13, pretty_printer_priv0print_break());
#line 513
c_rt_lib0clear(&___nl__im__0);
#line 513
//clear ___nl__bool__1;
#line 513
c_rt_lib0clear(&___nl__im__3);
#line 513
c_rt_lib0clear(&___nl__im__8);
#line 513
return ___nl__im__13;
#line 514
goto label_1;
#line 514
label_4:
;
#line 514
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 514
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(871));
#line 514
c_rt_lib0clear(&___nl__im__14);
#line 514
___nl__bool__1 = !___nl__bool__1;
#line 514
if(___nl__bool__1){ goto label_5;}
#line 515
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_continue());
#line 515
c_rt_lib0clear(&___nl__im__0);
#line 515
//clear ___nl__bool__1;
#line 515
c_rt_lib0clear(&___nl__im__3);
#line 515
c_rt_lib0clear(&___nl__im__8);
#line 515
c_rt_lib0clear(&___nl__im__13);
#line 515
return ___nl__im__15;
#line 516
goto label_1;
#line 516
label_5:
;
#line 516
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 516
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(247));
#line 516
c_rt_lib0clear(&___nl__im__16);
#line 516
___nl__bool__1 = !___nl__bool__1;
#line 516
if(___nl__bool__1){ goto label_6;}
#line 517
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 517
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 517
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(247)));
#line 517
c_rt_lib0clear(&___nl__im__19);
#line 517
c_rt_lib0clear(&___nl__im__20);
#line 517
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_die(___nl__im__18));
#line 517
c_rt_lib0clear(&___nl__im__18);
#line 517
c_rt_lib0clear(&___nl__im__0);
#line 517
//clear ___nl__bool__1;
#line 517
c_rt_lib0clear(&___nl__im__3);
#line 517
c_rt_lib0clear(&___nl__im__8);
#line 517
c_rt_lib0clear(&___nl__im__13);
#line 517
c_rt_lib0clear(&___nl__im__15);
#line 517
return ___nl__im__17;
#line 518
goto label_1;
#line 518
label_6:
;
#line 518
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 518
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(874));
#line 518
c_rt_lib0clear(&___nl__im__21);
#line 518
___nl__bool__1 = !___nl__bool__1;
#line 518
if(___nl__bool__1){ goto label_7;}
#line 519
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 519
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 519
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_const(874)));
#line 519
c_rt_lib0clear(&___nl__im__24);
#line 519
c_rt_lib0clear(&___nl__im__25);
#line 519
c_rt_lib0move(&___nl__im__26,___get_global_const(874));
#line 519
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_try_ensure(___nl__im__23, ___nl__im__26));
#line 519
c_rt_lib0clear(&___nl__im__23);
#line 519
c_rt_lib0clear(&___nl__im__26);
#line 519
c_rt_lib0clear(&___nl__im__0);
#line 519
//clear ___nl__bool__1;
#line 519
c_rt_lib0clear(&___nl__im__3);
#line 519
c_rt_lib0clear(&___nl__im__8);
#line 519
c_rt_lib0clear(&___nl__im__13);
#line 519
c_rt_lib0clear(&___nl__im__15);
#line 519
c_rt_lib0clear(&___nl__im__17);
#line 519
return ___nl__im__22;
#line 520
goto label_1;
#line 520
label_7:
;
#line 520
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 520
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(178));
#line 520
c_rt_lib0clear(&___nl__im__27);
#line 520
___nl__bool__1 = !___nl__bool__1;
#line 520
if(___nl__bool__1){ goto label_8;}
#line 521
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 521
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 521
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(178)));
#line 521
c_rt_lib0clear(&___nl__im__30);
#line 521
c_rt_lib0clear(&___nl__im__31);
#line 521
c_rt_lib0move(&___nl__im__32,___get_global_const(178));
#line 521
c_rt_lib0move(&___nl__im__28, pretty_printer_priv0print_try_ensure(___nl__im__29, ___nl__im__32));
#line 521
c_rt_lib0clear(&___nl__im__29);
#line 521
c_rt_lib0clear(&___nl__im__32);
#line 521
c_rt_lib0clear(&___nl__im__0);
#line 521
//clear ___nl__bool__1;
#line 521
c_rt_lib0clear(&___nl__im__3);
#line 521
c_rt_lib0clear(&___nl__im__8);
#line 521
c_rt_lib0clear(&___nl__im__13);
#line 521
c_rt_lib0clear(&___nl__im__15);
#line 521
c_rt_lib0clear(&___nl__im__17);
#line 521
c_rt_lib0clear(&___nl__im__22);
#line 521
return ___nl__im__28;
#line 522
goto label_1;
#line 522
label_8:
;
#line 523
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(1, ___nl__im__0));
#line 523
nl_die_arg(___nl__im__33);
#line 524
goto label_1;
#line 524
label_1:
;
#line 524
//clear ___nl__bool__1;
#line 524
c_rt_lib0clear(&___nl__im__3);
#line 524
c_rt_lib0clear(&___nl__im__8);
#line 524
c_rt_lib0clear(&___nl__im__13);
#line 524
c_rt_lib0clear(&___nl__im__15);
#line 524
c_rt_lib0clear(&___nl__im__17);
#line 524
c_rt_lib0clear(&___nl__im__22);
#line 524
c_rt_lib0clear(&___nl__im__28);
#line 524
c_rt_lib0clear(&___nl__im__33);
}

ImmT  pretty_printer_priv0flush_sim_statement(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 528
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__1, ___nl__int__2));
#line 529
c_rt_lib0move(&___nl__im__3,___get_global_const(409));
#line 529
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__3));
#line 529
c_rt_lib0clear(&___nl__im__3);
#line 529
c_rt_lib0clear(&___nl__im__1);
#line 529
//clear ___nl__int__2;
#line 529
return NULL;
}

ImmT  pretty_printer_priv0print_cmd(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
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
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
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
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
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
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
bool  ___nl__bool__72 = false;
INT  ___nl__int__73 = 0;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
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
INT  ___nl__int__100 = 0;
INT  ___nl__int__101 = 0;
INT  ___nl__int__102 = 0;
bool  ___nl__bool__103 = false;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
bool  ___nl__bool__123 = false;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
bool  ___nl__bool__133 = false;
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
#line 533
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(227)));
#line 533
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(862));
#line 533
if(___nl__bool__4){ goto label_2;}
#line 543
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(867));
#line 543
if(___nl__bool__4){ goto label_3;}
#line 545
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(863));
#line 545
if(___nl__bool__4){ goto label_4;}
#line 564
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(873));
#line 564
if(___nl__bool__4){ goto label_5;}
#line 571
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(875));
#line 571
if(___nl__bool__4){ goto label_6;}
#line 573
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(872));
#line 573
if(___nl__bool__4){ goto label_7;}
#line 584
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(864));
#line 584
if(___nl__bool__4){ goto label_8;}
#line 586
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(865));
#line 586
if(___nl__bool__4){ goto label_9;}
#line 589
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(866));
#line 589
if(___nl__bool__4){ goto label_10;}
#line 591
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(160));
#line 591
if(___nl__bool__4){ goto label_11;}
#line 594
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(868));
#line 594
if(___nl__bool__4){ goto label_12;}
#line 596
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(869));
#line 596
if(___nl__bool__4){ goto label_13;}
#line 598
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 598
if(___nl__bool__4){ goto label_14;}
#line 600
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(874));
#line 600
if(___nl__bool__4){ goto label_15;}
#line 602
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(178));
#line 602
if(___nl__bool__4){ goto label_16;}
#line 604
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 604
if(___nl__bool__4){ goto label_17;}
#line 606
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(870));
#line 606
if(___nl__bool__4){ goto label_18;}
#line 608
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(871));
#line 608
if(___nl__bool__4){ goto label_19;}
#line 610
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(247));
#line 610
if(___nl__bool__4){ goto label_20;}
#line 612
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(252));
#line 612
if(___nl__bool__4){ goto label_21;}
#line 612
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 612
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 612
nl_die_arg(___nl__im__5);
#line 533
label_2:
;
#line 533
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(862)));
#line 533
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 534
c_rt_lib0move(&___nl__im__8,___get_global_const(862));
#line 534
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(862)));
#line 534
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 534
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(876)));
#line 534
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__int__2));
#line 534
c_rt_lib0clear(&___nl__im__8);
#line 534
c_rt_lib0clear(&___nl__im__9);
#line 534
c_rt_lib0clear(&___nl__im__10);
#line 534
c_rt_lib0clear(&___nl__im__11);
#line 535
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(877)));
#line 535
___nl__int__14 = 0;
#line 535
___nl__int__15 = 1;
#line 535
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 535
label_24:
;
#line 535
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 535
___nl__bool__17 = ___nl__int__18;
#line 535
if(___nl__bool__17){ goto label_22;}
#line 535
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 535
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 536
c_rt_lib0move(&___nl__im__20,___get_global_const(429));
#line 536
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__20));
#line 536
c_rt_lib0clear(&___nl__im__20);
#line 537
c_rt_lib0move(&___nl__im__21,___get_global_const(877));
#line 537
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(227)));
#line 537
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 537
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(876)));
#line 537
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__int__2));
#line 537
c_rt_lib0clear(&___nl__im__21);
#line 537
c_rt_lib0clear(&___nl__im__22);
#line 537
c_rt_lib0clear(&___nl__im__23);
#line 537
c_rt_lib0clear(&___nl__im__24);
#line 537
c_rt_lib0clear(&___nl__im__13);
#line 537
label_23:
;
#line 538
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 538
goto label_24;
#line 538
label_22:
;
#line 539
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(878)));
#line 539
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(227)));
#line 539
c_rt_lib0clear(&___nl__im__27);
#line 539
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(875));
#line 539
c_rt_lib0clear(&___nl__im__26);
#line 539
___nl__bool__25 = !___nl__bool__25;
#line 539
___nl__bool__25 = !___nl__bool__25;
#line 539
if(___nl__bool__25){ goto label_26;}
#line 540
c_rt_lib0move(&___nl__im__28,___get_global_const(1089));
#line 540
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__28));
#line 540
c_rt_lib0clear(&___nl__im__28);
#line 541
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(878)));
#line 541
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__29, ___nl__int__2));
#line 541
c_rt_lib0clear(&___nl__im__29);
#line 542
goto label_25;
#line 542
label_26:
;
#line 542
label_25:
;
#line 542
//clear ___nl__bool__25;
#line 543
goto label_1;
#line 543
label_3:
;
#line 543
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(867)));
#line 543
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 544
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(944)));
#line 544
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__33);
#line 544
c_rt_lib0clear(&___nl__im__33);
#line 544
c_rt_lib0move(&___nl__im__34,___get_global_const(867));
#line 544
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(227)));
#line 544
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 544
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(876)));
#line 544
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__32, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__int__2));
#line 544
//clear ___nl__bool__32;
#line 544
c_rt_lib0clear(&___nl__im__34);
#line 544
c_rt_lib0clear(&___nl__im__35);
#line 544
c_rt_lib0clear(&___nl__im__36);
#line 544
c_rt_lib0clear(&___nl__im__37);
#line 545
goto label_1;
#line 545
label_4:
;
#line 545
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(863)));
#line 545
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 547
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(879)));
#line 547
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__41, ___get_global_const(219));
#line 547
if(___nl__bool__42){ goto label_28;}
#line 549
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__41, ___get_global_const(252));
#line 549
if(___nl__bool__42){ goto label_29;}
#line 549
c_rt_lib0move(&___nl__im__43,___get_global_const(16));
#line 549
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(2, ___nl__im__43, ___nl__im__41));
#line 549
nl_die_arg(___nl__im__43);
#line 547
label_28:
;
#line 547
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__41, ___get_global_const(219)));
#line 547
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 548
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_val(___nl__im__44));
#line 549
goto label_27;
#line 549
label_29:
;
#line 549
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__41, ___get_global_const(252)));
#line 549
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 550
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_var_decl(___nl__im__46));
#line 551
goto label_27;
#line 551
label_27:
;
#line 553
c_rt_lib0move(&___nl__im__51,___get_global_const(1090));
#line 553
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__51));
#line 553
c_rt_lib0clear(&___nl__im__51);
#line 555
c_rt_lib0move(&___nl__im__53,___get_global_const(409));
#line 555
c_rt_lib0move(&___nl__im__52, wprinter0build_sim(___nl__im__53));
#line 555
c_rt_lib0clear(&___nl__im__53);
#line 556
c_rt_lib0move(&___nl__im__54, wprinter0get_sep());
#line 557
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(876)));
#line 557
c_rt_lib0move(&___nl__im__55, pretty_printer_priv0print_val(___nl__im__56));
#line 557
c_rt_lib0clear(&___nl__im__56);
#line 558
c_rt_lib0move(&___nl__im__58,___get_global_const(409));
#line 558
c_rt_lib0move(&___nl__im__57, wprinter0build_sim(___nl__im__58));
#line 558
c_rt_lib0clear(&___nl__im__58);
#line 559
c_rt_lib0move(&___nl__im__59, wprinter0get_sep());
#line 560
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(569)));
#line 560
c_rt_lib0move(&___nl__im__60, pretty_printer_priv0print_val(___nl__im__61));
#line 560
c_rt_lib0clear(&___nl__im__61);
#line 561
c_rt_lib0move(&___nl__im__63,___get_global_const(1091));
#line 561
c_rt_lib0move(&___nl__im__62, wprinter0build_sim(___nl__im__63));
#line 561
c_rt_lib0clear(&___nl__im__63);
#line 561
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(9, ___nl__im__50, ___nl__im__40, ___nl__im__52, ___nl__im__54, ___nl__im__55, ___nl__im__57, ___nl__im__59, ___nl__im__60, ___nl__im__62));
#line 561
c_rt_lib0clear(&___nl__im__50);
#line 561
c_rt_lib0clear(&___nl__im__52);
#line 561
c_rt_lib0clear(&___nl__im__54);
#line 561
c_rt_lib0clear(&___nl__im__55);
#line 561
c_rt_lib0clear(&___nl__im__57);
#line 561
c_rt_lib0clear(&___nl__im__59);
#line 561
c_rt_lib0clear(&___nl__im__60);
#line 561
c_rt_lib0clear(&___nl__im__62);
#line 561
c_rt_lib0move(&___nl__im__48, wprinter0build_pretty_a(___nl__im__49));
#line 561
c_rt_lib0clear(&___nl__im__49);
#line 561
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__48, ___nl__int__2));
#line 561
c_rt_lib0clear(&___nl__im__48);
#line 563
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(227)));
#line 563
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__64, ___nl__int__2));
#line 563
c_rt_lib0clear(&___nl__im__64);
#line 564
goto label_1;
#line 564
label_5:
;
#line 564
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(873)));
#line 564
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 565
c_rt_lib0move(&___nl__im__67,___get_global_const(291));
#line 565
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__67));
#line 565
c_rt_lib0clear(&___nl__im__67);
#line 566
___nl__int__69 = 0;
#line 566
___nl__int__70 = 1;
#line 566
___nl__int__71 = c_rt_lib0array_len(___nl__im__65);
#line 566
label_32:
;
#line 566
___nl__int__73 = ___nl__int__69 >= ___nl__int__71;
#line 566
___nl__bool__72 = ___nl__int__73;
#line 566
if(___nl__bool__72){ goto label_30;}
#line 566
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_get(___nl__im__65, ___nl__int__69));
#line 566
c_rt_lib0copy(&___nl__im__68, ___nl__im__74);
#line 567
c_rt_lib0move(&___nl__im__76, string0lf());
#line 567
___nl__int__79 = 1;
#line 567
___nl__int__78 = ___nl__int__2 + ___nl__int__79;
#line 567
//clear ___nl__int__79;
#line 567
c_rt_lib0move(&___nl__im__77, pretty_printer_priv0pind(___nl__int__78));
#line 567
//clear ___nl__int__78;
#line 567
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__77));
#line 567
c_rt_lib0clear(&___nl__im__76);
#line 567
c_rt_lib0clear(&___nl__im__77);
#line 567
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__75));
#line 567
c_rt_lib0clear(&___nl__im__75);
#line 568
___nl__int__81 = 1;
#line 568
___nl__int__80 = ___nl__int__2 + ___nl__int__81;
#line 568
//clear ___nl__int__81;
#line 568
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__68, ___nl__int__80));
#line 568
//clear ___nl__int__80;
#line 568
c_rt_lib0clear(&___nl__im__68);
#line 568
label_31:
;
#line 569
___nl__int__69 = ___nl__int__69 + ___nl__int__70;
#line 569
goto label_32;
#line 569
label_30:
;
#line 570
c_rt_lib0move(&___nl__im__84, string0lf());
#line 570
c_rt_lib0move(&___nl__im__85, pretty_printer_priv0pind(___nl__int__2));
#line 570
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 570
c_rt_lib0clear(&___nl__im__84);
#line 570
c_rt_lib0clear(&___nl__im__85);
#line 570
c_rt_lib0move(&___nl__im__86,___get_global_const(292));
#line 570
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__86));
#line 570
c_rt_lib0clear(&___nl__im__83);
#line 570
c_rt_lib0clear(&___nl__im__86);
#line 570
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__82));
#line 570
c_rt_lib0clear(&___nl__im__82);
#line 571
goto label_1;
#line 571
label_6:
;
#line 572
c_rt_lib0move(&___nl__im__87,___get_global_const(409));
#line 572
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__87));
#line 572
c_rt_lib0clear(&___nl__im__87);
#line 573
goto label_1;
#line 573
label_7:
;
#line 573
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(872)));
#line 573
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 575
c_rt_lib0move(&___nl__im__93,___get_global_const(1092));
#line 575
c_rt_lib0move(&___nl__im__92, wprinter0build_sim(___nl__im__93));
#line 575
c_rt_lib0clear(&___nl__im__93);
#line 576
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_const(224)));
#line 576
c_rt_lib0move(&___nl__im__94, pretty_printer_priv0print_val(___nl__im__95));
#line 576
c_rt_lib0clear(&___nl__im__95);
#line 577
c_rt_lib0move(&___nl__im__97,___get_global_const(299));
#line 577
c_rt_lib0move(&___nl__im__96, wprinter0build_sim(___nl__im__97));
#line 577
c_rt_lib0clear(&___nl__im__97);
#line 577
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(3, ___nl__im__92, ___nl__im__94, ___nl__im__96));
#line 577
c_rt_lib0clear(&___nl__im__92);
#line 577
c_rt_lib0clear(&___nl__im__94);
#line 577
c_rt_lib0clear(&___nl__im__96);
#line 577
c_rt_lib0move(&___nl__im__90, wprinter0build_pretty_a(___nl__im__91));
#line 577
c_rt_lib0clear(&___nl__im__91);
#line 577
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__90, ___nl__int__2));
#line 577
c_rt_lib0clear(&___nl__im__90);
#line 579
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_const(884)));
#line 579
___nl__int__100 = 0;
#line 579
___nl__int__101 = 1;
#line 579
___nl__int__102 = c_rt_lib0array_len(___nl__im__98);
#line 579
label_35:
;
#line 579
___nl__int__104 = ___nl__int__100 >= ___nl__int__102;
#line 579
___nl__bool__103 = ___nl__int__104;
#line 579
if(___nl__bool__103){ goto label_33;}
#line 579
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_get(___nl__im__98, ___nl__int__100));
#line 579
c_rt_lib0copy(&___nl__im__99, ___nl__im__105);
#line 580
c_rt_lib0move(&___nl__im__106,___get_global_const(1093));
#line 580
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__106));
#line 580
c_rt_lib0clear(&___nl__im__106);
#line 581
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(517)));
#line 581
c_rt_lib0move(&___nl__im__107, pretty_printer_priv0print_variant_case_decl(___nl__im__108));
#line 581
c_rt_lib0clear(&___nl__im__108);
#line 581
___nl__int__110 = 1;
#line 581
___nl__int__109 = ___nl__int__2 + ___nl__int__110;
#line 581
//clear ___nl__int__110;
#line 581
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__107, ___nl__int__109));
#line 581
c_rt_lib0clear(&___nl__im__107);
#line 581
//clear ___nl__int__109;
#line 582
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(227)));
#line 582
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__111, ___nl__int__2));
#line 582
c_rt_lib0clear(&___nl__im__111);
#line 582
c_rt_lib0clear(&___nl__im__99);
#line 582
label_34:
;
#line 583
___nl__int__100 = ___nl__int__100 + ___nl__int__101;
#line 583
goto label_35;
#line 583
label_33:
;
#line 584
goto label_1;
#line 584
label_8:
;
#line 584
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(864)));
#line 584
c_rt_lib0copy(&___nl__im__112, ___nl__im__113);
#line 585
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(944)));
#line 585
___nl__bool__114 = c_rt_lib0check_true_native(___nl__im__115);
#line 585
c_rt_lib0clear(&___nl__im__115);
#line 585
c_rt_lib0move(&___nl__im__116,___get_global_const(864));
#line 585
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(227)));
#line 585
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(569)));
#line 585
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(1, ___nl__im__119));
#line 585
c_rt_lib0clear(&___nl__im__119);
#line 585
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(38)));
#line 585
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__114, ___nl__im__116, ___nl__im__117, ___nl__im__118, ___nl__im__120, ___nl__int__2));
#line 585
//clear ___nl__bool__114;
#line 585
c_rt_lib0clear(&___nl__im__116);
#line 585
c_rt_lib0clear(&___nl__im__117);
#line 585
c_rt_lib0clear(&___nl__im__118);
#line 585
c_rt_lib0clear(&___nl__im__120);
#line 586
goto label_1;
#line 586
label_9:
;
#line 586
c_rt_lib0move(&___nl__im__122, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(865)));
#line 586
c_rt_lib0copy(&___nl__im__121, ___nl__im__122);
#line 587
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_const(944)));
#line 587
___nl__bool__123 = c_rt_lib0check_true_native(___nl__im__124);
#line 587
c_rt_lib0clear(&___nl__im__124);
#line 587
c_rt_lib0move(&___nl__im__125,___get_global_const(865));
#line 587
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_const(227)));
#line 587
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_const(371)));
#line 587
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_const(224)));
#line 587
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(2, ___nl__im__128, ___nl__im__129));
#line 587
c_rt_lib0clear(&___nl__im__128);
#line 587
c_rt_lib0clear(&___nl__im__129);
#line 587
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_const(131)));
#line 587
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__123, ___nl__im__125, ___nl__im__126, ___nl__im__127, ___nl__im__130, ___nl__int__2));
#line 587
//clear ___nl__bool__123;
#line 587
c_rt_lib0clear(&___nl__im__125);
#line 587
c_rt_lib0clear(&___nl__im__126);
#line 587
c_rt_lib0clear(&___nl__im__127);
#line 587
c_rt_lib0clear(&___nl__im__130);
#line 589
goto label_1;
#line 589
label_10:
;
#line 589
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(866)));
#line 589
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 590
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_const(944)));
#line 590
___nl__bool__133 = c_rt_lib0check_true_native(___nl__im__134);
#line 590
c_rt_lib0clear(&___nl__im__134);
#line 590
c_rt_lib0move(&___nl__im__135,___get_global_const(866));
#line 590
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_const(227)));
#line 590
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_const(569)));
#line 590
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(1, ___nl__im__138));
#line 590
c_rt_lib0clear(&___nl__im__138);
#line 590
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_const(881)));
#line 590
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__133, ___nl__im__135, ___nl__im__136, ___nl__im__137, ___nl__im__139, ___nl__int__2));
#line 590
//clear ___nl__bool__133;
#line 590
c_rt_lib0clear(&___nl__im__135);
#line 590
c_rt_lib0clear(&___nl__im__136);
#line 590
c_rt_lib0clear(&___nl__im__137);
#line 590
c_rt_lib0clear(&___nl__im__139);
#line 591
goto label_1;
#line 591
label_11:
;
#line 591
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(160)));
#line 591
c_rt_lib0copy(&___nl__im__140, ___nl__im__141);
#line 592
c_rt_lib0move(&___nl__im__142,___get_global_const(160));
#line 592
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__142));
#line 592
c_rt_lib0clear(&___nl__im__142);
#line 593
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__140, ___nl__int__2));
#line 594
goto label_1;
#line 594
label_12:
;
#line 594
c_rt_lib0move(&___nl__im__144, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(868)));
#line 594
c_rt_lib0copy(&___nl__im__143, ___nl__im__144);
#line 595
c_rt_lib0move(&___nl__im__145,___get_global_const(862));
#line 595
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_const(227)));
#line 595
c_rt_lib0move(&___nl__im__147, c_rt_lib0array_mk(0));
#line 595
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_const(876)));
#line 595
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__145, ___nl__im__146, ___nl__im__147, ___nl__im__148, ___nl__int__2));
#line 595
c_rt_lib0clear(&___nl__im__145);
#line 595
c_rt_lib0clear(&___nl__im__146);
#line 595
c_rt_lib0clear(&___nl__im__147);
#line 595
c_rt_lib0clear(&___nl__im__148);
#line 596
goto label_1;
#line 596
label_13:
;
#line 596
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(869)));
#line 596
c_rt_lib0copy(&___nl__im__149, ___nl__im__150);
#line 597
c_rt_lib0move(&___nl__im__151,___get_global_const(979));
#line 597
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(227)));
#line 597
c_rt_lib0move(&___nl__im__153, c_rt_lib0array_mk(0));
#line 597
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(876)));
#line 597
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__151, ___nl__im__152, ___nl__im__153, ___nl__im__154, ___nl__int__2));
#line 597
c_rt_lib0clear(&___nl__im__151);
#line 597
c_rt_lib0clear(&___nl__im__152);
#line 597
c_rt_lib0clear(&___nl__im__153);
#line 597
c_rt_lib0clear(&___nl__im__154);
#line 598
goto label_1;
#line 598
label_14:
;
#line 598
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(219)));
#line 598
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 599
c_rt_lib0move(&___nl__im__157, pretty_printer_priv0print_sim_value(___nl__im__155));
#line 599
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__157, ___nl__int__2));
#line 599
c_rt_lib0clear(&___nl__im__157);
#line 600
goto label_1;
#line 600
label_15:
;
#line 600
c_rt_lib0move(&___nl__im__159, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(874)));
#line 600
c_rt_lib0copy(&___nl__im__158, ___nl__im__159);
#line 601
c_rt_lib0move(&___nl__im__161,___get_global_const(874));
#line 601
c_rt_lib0move(&___nl__im__160, pretty_printer_priv0print_try_ensure(___nl__im__158, ___nl__im__161));
#line 601
c_rt_lib0clear(&___nl__im__161);
#line 601
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__160, ___nl__int__2));
#line 601
c_rt_lib0clear(&___nl__im__160);
#line 602
goto label_1;
#line 602
label_16:
;
#line 602
c_rt_lib0move(&___nl__im__163, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(178)));
#line 602
c_rt_lib0copy(&___nl__im__162, ___nl__im__163);
#line 603
c_rt_lib0move(&___nl__im__165,___get_global_const(178));
#line 603
c_rt_lib0move(&___nl__im__164, pretty_printer_priv0print_try_ensure(___nl__im__162, ___nl__im__165));
#line 603
c_rt_lib0clear(&___nl__im__165);
#line 603
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__164, ___nl__int__2));
#line 603
c_rt_lib0clear(&___nl__im__164);
#line 604
goto label_1;
#line 604
label_17:
;
#line 604
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(246)));
#line 604
c_rt_lib0copy(&___nl__im__166, ___nl__im__167);
#line 605
c_rt_lib0move(&___nl__im__168, pretty_printer_priv0print_return(___nl__im__166));
#line 605
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__168, ___nl__int__2));
#line 605
c_rt_lib0clear(&___nl__im__168);
#line 606
goto label_1;
#line 606
label_18:
;
#line 607
c_rt_lib0move(&___nl__im__169, pretty_printer_priv0print_break());
#line 607
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__169, ___nl__int__2));
#line 607
c_rt_lib0clear(&___nl__im__169);
#line 608
goto label_1;
#line 608
label_19:
;
#line 609
c_rt_lib0move(&___nl__im__170, pretty_printer_priv0print_continue());
#line 609
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__170, ___nl__int__2));
#line 609
c_rt_lib0clear(&___nl__im__170);
#line 610
goto label_1;
#line 610
label_20:
;
#line 610
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(247)));
#line 610
c_rt_lib0copy(&___nl__im__171, ___nl__im__172);
#line 611
c_rt_lib0move(&___nl__im__173, pretty_printer_priv0print_die(___nl__im__171));
#line 611
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__173, ___nl__int__2));
#line 611
c_rt_lib0clear(&___nl__im__173);
#line 612
goto label_1;
#line 612
label_21:
;
#line 612
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(252)));
#line 612
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 613
c_rt_lib0move(&___nl__im__176, pretty_printer_priv0print_var_decl(___nl__im__174));
#line 613
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__176, ___nl__int__2));
#line 613
c_rt_lib0clear(&___nl__im__176);
#line 614
goto label_1;
#line 614
label_1:
;
#line 614
c_rt_lib0clear(&___nl__im__1);
#line 614
//clear ___nl__int__2;
#line 614
c_rt_lib0clear(&___nl__im__3);
#line 614
//clear ___nl__bool__4;
#line 614
c_rt_lib0clear(&___nl__im__5);
#line 614
c_rt_lib0clear(&___nl__im__6);
#line 614
c_rt_lib0clear(&___nl__im__7);
#line 614
c_rt_lib0clear(&___nl__im__12);
#line 614
c_rt_lib0clear(&___nl__im__13);
#line 614
//clear ___nl__int__14;
#line 614
//clear ___nl__int__15;
#line 614
//clear ___nl__int__16;
#line 614
//clear ___nl__bool__17;
#line 614
//clear ___nl__int__18;
#line 614
c_rt_lib0clear(&___nl__im__19);
#line 614
c_rt_lib0clear(&___nl__im__30);
#line 614
c_rt_lib0clear(&___nl__im__31);
#line 614
c_rt_lib0clear(&___nl__im__38);
#line 614
c_rt_lib0clear(&___nl__im__39);
#line 614
c_rt_lib0clear(&___nl__im__40);
#line 614
c_rt_lib0clear(&___nl__im__41);
#line 614
//clear ___nl__bool__42;
#line 614
c_rt_lib0clear(&___nl__im__43);
#line 614
c_rt_lib0clear(&___nl__im__44);
#line 614
c_rt_lib0clear(&___nl__im__45);
#line 614
c_rt_lib0clear(&___nl__im__46);
#line 614
c_rt_lib0clear(&___nl__im__47);
#line 614
c_rt_lib0clear(&___nl__im__65);
#line 614
c_rt_lib0clear(&___nl__im__66);
#line 614
c_rt_lib0clear(&___nl__im__68);
#line 614
//clear ___nl__int__69;
#line 614
//clear ___nl__int__70;
#line 614
//clear ___nl__int__71;
#line 614
//clear ___nl__bool__72;
#line 614
//clear ___nl__int__73;
#line 614
c_rt_lib0clear(&___nl__im__74);
#line 614
c_rt_lib0clear(&___nl__im__88);
#line 614
c_rt_lib0clear(&___nl__im__89);
#line 614
c_rt_lib0clear(&___nl__im__98);
#line 614
c_rt_lib0clear(&___nl__im__99);
#line 614
//clear ___nl__int__100;
#line 614
//clear ___nl__int__101;
#line 614
//clear ___nl__int__102;
#line 614
//clear ___nl__bool__103;
#line 614
//clear ___nl__int__104;
#line 614
c_rt_lib0clear(&___nl__im__105);
#line 614
c_rt_lib0clear(&___nl__im__112);
#line 614
c_rt_lib0clear(&___nl__im__113);
#line 614
c_rt_lib0clear(&___nl__im__121);
#line 614
c_rt_lib0clear(&___nl__im__122);
#line 614
c_rt_lib0clear(&___nl__im__131);
#line 614
c_rt_lib0clear(&___nl__im__132);
#line 614
c_rt_lib0clear(&___nl__im__140);
#line 614
c_rt_lib0clear(&___nl__im__141);
#line 614
c_rt_lib0clear(&___nl__im__143);
#line 614
c_rt_lib0clear(&___nl__im__144);
#line 614
c_rt_lib0clear(&___nl__im__149);
#line 614
c_rt_lib0clear(&___nl__im__150);
#line 614
c_rt_lib0clear(&___nl__im__155);
#line 614
c_rt_lib0clear(&___nl__im__156);
#line 614
c_rt_lib0clear(&___nl__im__158);
#line 614
c_rt_lib0clear(&___nl__im__159);
#line 614
c_rt_lib0clear(&___nl__im__162);
#line 614
c_rt_lib0clear(&___nl__im__163);
#line 614
c_rt_lib0clear(&___nl__im__166);
#line 614
c_rt_lib0clear(&___nl__im__167);
#line 614
c_rt_lib0clear(&___nl__im__171);
#line 614
c_rt_lib0clear(&___nl__im__172);
#line 614
c_rt_lib0clear(&___nl__im__174);
#line 614
c_rt_lib0clear(&___nl__im__175);
#line 614
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void pretty_printer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT pretty_printer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT pretty_printer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
