
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
bool  pretty_printer_priv0is_to_change_ov(nast0value_t0type ___nl__im__0);
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
bool  pretty_printer_priv0is_proper_hash_key(ImmT  ___nl__im__0);


ImmT  pretty_printer_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 13
c_rt_lib0move(&___nl__im__2,___get_global_string_const(202));
#line 13
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 13
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 13
c_rt_lib0move(&___nl__string__3,___get_global_string_const(202));
#line 13
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 13
c_rt_lib0clear(&___nl__im__2);
#line 13
c_rt_lib0clear(&___nl__string__3);
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
return NULL;

}

ImmT  pretty_printer0struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "pretty_printer0struct_t");
ImmT  res = pretty_printer0struct_t();
return res;
}
ImmT pretty_printer0struct_t(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(0);
}
ImmT pretty_printer0struct_t0cal() {
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
#line 18
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 18
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 18
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 19
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 19
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 19
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(175), ___nl__im__7, ___get_global_string_const(1283), ___nl__im__8, ___get_global_string_const(1233), ___nl__im__9));
#line 19
c_rt_lib0clear(&___nl__im__7);
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 19
c_rt_lib0clear(&___nl__im__9);
#line 19
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(487), ___nl__im__2, ___get_global_string_const(218), ___nl__im__4));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 19
c_rt_lib0clear(&___nl__im__1);
#line 19
return ___nl__im__0;
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
return NULL;
return NULL;

}

ImmT  pretty_printer0print_module_to_struct0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_struct");
nast0module_t0type *var0 = &(_tab[0]);
pretty_printer0struct_t0type res = pretty_printer0print_module_to_struct(*var0);
return res;
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
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
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
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
bool  ___nl__bool__54 = false;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__string__58 = NULL;
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 24
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(487), ___nl__im__2, ___get_global_string_const(218), ___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(180)));
#line 25
___nl__int__6 = 0;
#line 25
___nl__int__7 = 1;
#line 25
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 25
label_9:
;
#line 25
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 25
if(___nl__bool__9){ goto label_38;}
#line 25
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 25
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 26
c_rt_lib0move(&___nl__im__11,___get_global_string_const(487));
#line 26
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__11));
#line 26
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1284));
#line 26
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(175)));
#line 26
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 26
c_rt_lib0clear(&___nl__im__15);
#line 26
c_rt_lib0clear(&___nl__im__16);
#line 26
c_rt_lib0move(&___nl__im__17,___get_global_string_const(450));
#line 26
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__17));
#line 26
c_rt_lib0clear(&___nl__im__14);
#line 26
c_rt_lib0clear(&___nl__im__17);
#line 26
c_rt_lib0move(&___nl__im__18, string0lf());
#line 26
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__18));
#line 26
c_rt_lib0clear(&___nl__im__13);
#line 26
c_rt_lib0clear(&___nl__im__18);
#line 26
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 26
c_rt_lib0move(&___nl__string__19,___get_global_string_const(487));
#line 26
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__19, ___nl__im__11));
#line 26
c_rt_lib0clear(&___nl__im__11);
#line 26
c_rt_lib0clear(&___nl__im__12);
#line 26
c_rt_lib0clear(&___nl__string__19);
#line 26
c_rt_lib0clear(&___nl__im__5);
#line 27
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 27
goto label_9;
#line 27
label_38:
;
#line 28
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(173)));
#line 28
___nl__int__22 = 0;
#line 28
___nl__int__23 = 1;
#line 28
___nl__int__24 = c_rt_lib0array_len(___nl__im__20);
#line 28
label_43:
;
#line 28
___nl__bool__25 = ___nl__int__22 >= ___nl__int__24;
#line 28
if(___nl__bool__25){ goto label_125;}
#line 28
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__20, ___nl__int__22));
#line 28
c_rt_lib0copy(&___nl__im__21, ___nl__im__26);
#line 29
c_rt_lib0move(&___nl__im__28,___get_global_string_const(36));
#line 29
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(1, ___get_global_string_const(202), ___nl__im__28));
#line 29
c_rt_lib0clear(&___nl__im__28);
#line 30
c_rt_lib0move(&___nl__im__29, string0lf());
#line 30
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__27, ___nl__im__29));
#line 30
c_rt_lib0clear(&___nl__im__29);
#line 31
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 31
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(&___nl__im__27, ___nl__im__21, ___nl__im__30));
#line 31
c_rt_lib0clear(&___nl__im__30);
#line 32
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(202)));
#line 33
c_rt_lib0move(&___nl__im__32,___get_global_string_const(36));
#line 33
c_rt_lib0copy(&___nl__im__33, ___nl__im__32);
#line 33
c_rt_lib0hash_set_value_dec(&___nl__im__27, ___get_global_string_const(202), ___nl__im__33);
#line 33
c_rt_lib0clear(&___nl__im__32);
#line 33
c_rt_lib0clear(&___nl__im__33);
#line 34
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(237)));
#line 34
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(237)));
#line 34
c_rt_lib0clear(&___nl__im__36);
#line 34
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(237)));
#line 34
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(237)));
#line 34
c_rt_lib0clear(&___nl__im__38);
#line 34
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__37, ___get_global_string_const(1081)));
#line 34
c_rt_lib0clear(&___nl__im__35);
#line 34
c_rt_lib0clear(&___nl__im__37);
#line 34
___nl__int__40 = 0;
#line 34
___nl__int__41 = 1;
#line 34
___nl__int__42 = c_rt_lib0array_len(___nl__im__34);
#line 34
label_75:
;
#line 34
___nl__bool__43 = ___nl__int__40 >= ___nl__int__42;
#line 34
if(___nl__bool__43){ goto label_95;}
#line 34
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__34, ___nl__int__40));
#line 34
c_rt_lib0copy(&___nl__im__39, ___nl__im__44);
#line 35
c_rt_lib0move(&___nl__im__46, string0lf());
#line 35
___nl__int__48 = 1;
#line 35
c_rt_lib0move(&___nl__im__47, pretty_printer_priv0pind(___nl__int__48));
#line 35
//clear ___nl__int__48;
#line 35
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__47));
#line 35
c_rt_lib0clear(&___nl__im__46);
#line 35
c_rt_lib0clear(&___nl__im__47);
#line 35
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__27, ___nl__im__45));
#line 35
c_rt_lib0clear(&___nl__im__45);
#line 36
___nl__int__49 = 1;
#line 36
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__im__27, ___nl__im__39, ___nl__int__49));
#line 36
//clear ___nl__int__49;
#line 36
c_rt_lib0clear(&___nl__im__39);
#line 37
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 37
goto label_75;
#line 37
label_95:
;
#line 38
c_rt_lib0move(&___nl__im__50,___get_global_string_const(218));
#line 38
c_rt_lib0move(&___nl__im__50, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__50));
#line 39
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(219)));
#line 39
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(475));
#line 39
c_rt_lib0clear(&___nl__im__55);
#line 39
if(___nl__bool__54){ goto label_104;}
#line 39
c_rt_lib0move(&___nl__im__53,___get_global_string_const(36));
#line 39
goto label_106;
#line 39
label_104:
;
#line 39
c_rt_lib0move(&___nl__im__53,___get_global_string_const(34));
#line 39
label_106:
;
#line 39
//clear ___nl__bool__54;
#line 39
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(175)));
#line 39
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__56));
#line 39
c_rt_lib0clear(&___nl__im__53);
#line 39
c_rt_lib0clear(&___nl__im__56);
#line 41
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(202)));
#line 41
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(3, ___get_global_string_const(175), ___nl__im__52, ___get_global_string_const(1283), ___nl__im__31, ___get_global_string_const(1233), ___nl__im__57));
#line 41
c_rt_lib0clear(&___nl__im__52);
#line 41
c_rt_lib0clear(&___nl__im__57);
#line 41
c_rt_lib0delete(array0push(&___nl__im__50, ___nl__im__51));
#line 41
c_rt_lib0move(&___nl__string__58,___get_global_string_const(218));
#line 41
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__58, ___nl__im__50));
#line 41
c_rt_lib0clear(&___nl__im__50);
#line 41
c_rt_lib0clear(&___nl__im__51);
#line 41
c_rt_lib0clear(&___nl__string__58);
#line 41
c_rt_lib0clear(&___nl__im__21);
#line 43
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 43
goto label_43;
#line 43
label_125:
;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
//clear ___nl__int__6;
#line 44
//clear ___nl__int__7;
#line 44
//clear ___nl__int__8;
#line 44
//clear ___nl__bool__9;
#line 44
c_rt_lib0clear(&___nl__im__10);
#line 44
c_rt_lib0clear(&___nl__im__20);
#line 44
c_rt_lib0clear(&___nl__im__21);
#line 44
//clear ___nl__int__22;
#line 44
//clear ___nl__int__23;
#line 44
//clear ___nl__int__24;
#line 44
//clear ___nl__bool__25;
#line 44
c_rt_lib0clear(&___nl__im__26);
#line 44
c_rt_lib0clear(&___nl__im__27);
#line 44
c_rt_lib0clear(&___nl__im__31);
#line 44
c_rt_lib0clear(&___nl__im__34);
#line 44
c_rt_lib0clear(&___nl__im__39);
#line 44
//clear ___nl__int__40;
#line 44
//clear ___nl__int__41;
#line 44
//clear ___nl__int__42;
#line 44
//clear ___nl__bool__43;
#line 44
c_rt_lib0clear(&___nl__im__44);
#line 44
return ___nl__im__1;
return NULL;

}

ImmT  pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_str");
nast0module_t0type *var0 = &(_tab[0]);
ImmT  res = pretty_printer0print_module_to_str(*var0);
return res;
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
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
#line 48
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 48
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_string_const(202), ___nl__im__2));
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 49
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1131)));
#line 49
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 49
___nl__bool__3 = c_rt_lib0ne(___nl__im__4, ___nl__im__5);
#line 49
c_rt_lib0clear(&___nl__im__4);
#line 49
c_rt_lib0clear(&___nl__im__5);
#line 49
___nl__bool__3 = !___nl__bool__3;
#line 49
if(___nl__bool__3){ goto label_18;}
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1131)));
#line 50
c_rt_lib0move(&___nl__im__8, string0lf());
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0clear(&___nl__im__8);
#line 50
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__6));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 51
goto label_51;
#line 51
label_18:
;
#line 52
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1285));
#line 52
c_rt_lib0move(&___nl__im__17, string0lf());
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 52
c_rt_lib0clear(&___nl__im__16);
#line 52
c_rt_lib0clear(&___nl__im__17);
#line 52
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1286));
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 52
c_rt_lib0clear(&___nl__im__15);
#line 52
c_rt_lib0clear(&___nl__im__18);
#line 52
c_rt_lib0move(&___nl__im__19, string0lf());
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 52
c_rt_lib0clear(&___nl__im__14);
#line 52
c_rt_lib0clear(&___nl__im__19);
#line 52
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1285));
#line 52
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__20));
#line 52
c_rt_lib0clear(&___nl__im__13);
#line 52
c_rt_lib0clear(&___nl__im__20);
#line 52
c_rt_lib0move(&___nl__im__21, string0lf());
#line 52
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__21));
#line 52
c_rt_lib0clear(&___nl__im__12);
#line 52
c_rt_lib0clear(&___nl__im__21);
#line 53
c_rt_lib0move(&___nl__im__22, string0lf());
#line 53
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__22));
#line 53
c_rt_lib0clear(&___nl__im__11);
#line 53
c_rt_lib0clear(&___nl__im__22);
#line 53
c_rt_lib0move(&___nl__im__23, string0lf());
#line 53
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__23));
#line 53
c_rt_lib0clear(&___nl__im__10);
#line 53
c_rt_lib0clear(&___nl__im__23);
#line 53
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__9));
#line 53
c_rt_lib0clear(&___nl__im__9);
#line 54
goto label_51;
#line 54
label_51:
;
#line 54
//clear ___nl__bool__3;
#line 55
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(0));
#line 56
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(180)));
#line 56
___nl__int__27 = 0;
#line 56
___nl__int__28 = 1;
#line 56
___nl__int__29 = c_rt_lib0array_len(___nl__im__25);
#line 56
label_58:
;
#line 56
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 56
if(___nl__bool__30){ goto label_77;}
#line 56
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 56
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 57
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1284));
#line 57
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(175)));
#line 57
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 57
c_rt_lib0clear(&___nl__im__34);
#line 57
c_rt_lib0clear(&___nl__im__35);
#line 57
c_rt_lib0move(&___nl__im__36,___get_global_string_const(450));
#line 57
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 57
c_rt_lib0clear(&___nl__im__33);
#line 57
c_rt_lib0clear(&___nl__im__36);
#line 57
c_rt_lib0delete(array0push(&___nl__im__24, ___nl__im__32));
#line 57
c_rt_lib0clear(&___nl__im__32);
#line 57
c_rt_lib0clear(&___nl__im__26);
#line 58
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 58
goto label_58;
#line 58
label_77:
;
#line 59
c_rt_lib0move(&___nl__im__38, string0lf());
#line 59
c_rt_lib0move(&___nl__im__37, array0join(___nl__im__38, ___nl__im__24));
#line 59
c_rt_lib0clear(&___nl__im__38);
#line 59
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__37));
#line 59
c_rt_lib0clear(&___nl__im__37);
#line 60
c_rt_lib0move(&___nl__im__40, string0lf());
#line 60
c_rt_lib0move(&___nl__im__41, string0lf());
#line 60
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 60
c_rt_lib0clear(&___nl__im__40);
#line 60
c_rt_lib0clear(&___nl__im__41);
#line 60
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__39));
#line 60
c_rt_lib0clear(&___nl__im__39);
#line 61
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(173)));
#line 61
___nl__int__44 = 0;
#line 61
___nl__int__45 = 1;
#line 61
___nl__int__46 = c_rt_lib0array_len(___nl__im__42);
#line 61
label_94:
;
#line 61
___nl__bool__47 = ___nl__int__44 >= ___nl__int__46;
#line 61
if(___nl__bool__47){ goto label_112;}
#line 61
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_get(___nl__im__42, ___nl__int__44));
#line 61
c_rt_lib0copy(&___nl__im__43, ___nl__im__48);
#line 62
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 62
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__im__1, ___nl__im__43, ___nl__im__49));
#line 62
c_rt_lib0clear(&___nl__im__49);
#line 63
c_rt_lib0move(&___nl__im__51, string0lf());
#line 63
c_rt_lib0move(&___nl__im__52, string0lf());
#line 63
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 63
c_rt_lib0clear(&___nl__im__51);
#line 63
c_rt_lib0clear(&___nl__im__52);
#line 63
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__50));
#line 63
c_rt_lib0clear(&___nl__im__50);
#line 63
c_rt_lib0clear(&___nl__im__43);
#line 64
___nl__int__44 = ___nl__int__44 + ___nl__int__45;
#line 64
goto label_94;
#line 64
label_112:
;
#line 65
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(202)));
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__24);
#line 65
c_rt_lib0clear(&___nl__im__25);
#line 65
c_rt_lib0clear(&___nl__im__26);
#line 65
//clear ___nl__int__27;
#line 65
//clear ___nl__int__28;
#line 65
//clear ___nl__int__29;
#line 65
//clear ___nl__bool__30;
#line 65
c_rt_lib0clear(&___nl__im__31);
#line 65
c_rt_lib0clear(&___nl__im__42);
#line 65
c_rt_lib0clear(&___nl__im__43);
#line 65
//clear ___nl__int__44;
#line 65
//clear ___nl__int__45;
#line 65
//clear ___nl__int__46;
#line 65
//clear ___nl__bool__47;
#line 65
c_rt_lib0clear(&___nl__im__48);
#line 65
return ___nl__im__53;
return NULL;

}

ImmT  pretty_printer_priv0print_fun_def(wprinter0state_t0type* ___ref___im__0,nast0fun_def_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 69
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(___ref___im__0, ___nl__im__1, ___nl__im__2));
#line 70
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(237)));
#line 70
___nl__int__4 = 0;
#line 70
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__3, ___nl__int__4));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
//clear ___nl__int__4;
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
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
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
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
INT  ___nl__int__68 = 0;
#line 74
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(219)));
#line 75
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(220));
#line 75
if(___nl__bool__5){ goto label_9;}
#line 77
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(475));
#line 77
if(___nl__bool__5){ goto label_16;}
#line 77
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 77
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 77
nl_die_arg(___nl__im__6);
#line 75
label_9:
;
#line 76
c_rt_lib0move(&___nl__im__8,___get_global_string_const(34));
#line 76
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 76
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__7));
#line 76
c_rt_lib0clear(&___nl__im__7);
#line 77
goto label_18;
#line 77
label_16:
;
#line 78
goto label_18;
#line 78
label_18:
;
#line 79
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(175)));
#line 79
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 81
c_rt_lib0move(&___nl__im__12,___get_global_string_const(733));
#line 81
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 81
c_rt_lib0clear(&___nl__im__12);
#line 82
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 83
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__3));
#line 84
c_rt_lib0move(&___nl__im__16,___get_global_string_const(465));
#line 84
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 84
c_rt_lib0clear(&___nl__im__16);
#line 84
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(4, ___nl__im__11, ___nl__im__13, ___nl__im__14, ___nl__im__15));
#line 84
c_rt_lib0clear(&___nl__im__11);
#line 84
c_rt_lib0clear(&___nl__im__13);
#line 84
c_rt_lib0clear(&___nl__im__14);
#line 84
c_rt_lib0clear(&___nl__im__15);
#line 86
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 86
___nl__int__17 = c_rt_lib0array_len(___nl__im__18);
#line 86
c_rt_lib0clear(&___nl__im__18);
#line 86
___nl__int__19 = 0;
#line 86
___nl__int__20 = 1;
#line 86
label_40:
;
#line 86
___nl__bool__21 = ___nl__int__19 >= ___nl__int__17;
#line 86
if(___nl__bool__21){ goto label_135;}
#line 87
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 87
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__23, ___nl__int__19));
#line 87
c_rt_lib0clear(&___nl__im__23);
#line 88
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(277)));
#line 88
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(39));
#line 88
if(___nl__bool__25){ goto label_54;}
#line 90
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(76));
#line 90
if(___nl__bool__25){ goto label_65;}
#line 90
c_rt_lib0move(&___nl__im__26,___get_global_string_const(15));
#line 90
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 90
nl_die_arg(___nl__im__26);
#line 88
label_54:
;
#line 89
c_rt_lib0move(&___nl__im__29,___get_global_string_const(39));
#line 89
c_rt_lib0move(&___nl__im__28, wprinter0build_sim(___nl__im__29));
#line 89
c_rt_lib0clear(&___nl__im__29);
#line 89
c_rt_lib0move(&___nl__im__30, wprinter0get_sep());
#line 89
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__28, ___nl__im__30));
#line 89
c_rt_lib0clear(&___nl__im__28);
#line 89
c_rt_lib0clear(&___nl__im__30);
#line 89
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__27));
#line 89
c_rt_lib0clear(&___nl__im__27);
#line 90
goto label_67;
#line 90
label_65:
;
#line 91
goto label_67;
#line 91
label_67:
;
#line 92
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(175)));
#line 92
c_rt_lib0move(&___nl__im__31, wprinter0build_sim(___nl__im__32));
#line 92
c_rt_lib0clear(&___nl__im__32);
#line 92
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__31));
#line 92
c_rt_lib0clear(&___nl__im__31);
#line 93
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(215)));
#line 93
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(215));
#line 93
if(___nl__bool__34){ goto label_81;}
#line 95
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(76));
#line 95
if(___nl__bool__34){ goto label_98;}
#line 95
c_rt_lib0move(&___nl__im__35,___get_global_string_const(15));
#line 95
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__35, ___nl__im__33));
#line 95
nl_die_arg(___nl__im__35);
#line 93
label_81:
;
#line 93
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(215)));
#line 93
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 94
c_rt_lib0move(&___nl__im__39, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__im__41,___get_global_string_const(538));
#line 94
c_rt_lib0move(&___nl__im__40, wprinter0build_sim(___nl__im__41));
#line 94
c_rt_lib0clear(&___nl__im__41);
#line 94
c_rt_lib0move(&___nl__im__42, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__im__43, pretty_printer_priv0print_val(___nl__im__36));
#line 94
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(4, ___nl__im__39, ___nl__im__40, ___nl__im__42, ___nl__im__43));
#line 94
c_rt_lib0clear(&___nl__im__39);
#line 94
c_rt_lib0clear(&___nl__im__40);
#line 94
c_rt_lib0clear(&___nl__im__42);
#line 94
c_rt_lib0clear(&___nl__im__43);
#line 94
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__38));
#line 94
c_rt_lib0clear(&___nl__im__38);
#line 95
goto label_100;
#line 95
label_98:
;
#line 96
goto label_100;
#line 96
label_100:
;
#line 97
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 97
___nl__int__46 = c_rt_lib0array_len(___nl__im__47);
#line 97
c_rt_lib0clear(&___nl__im__47);
#line 97
___nl__int__48 = 1;
#line 97
___nl__int__45 = ___nl__int__46 - ___nl__int__48;
#line 97
//clear ___nl__int__46;
#line 97
//clear ___nl__int__48;
#line 97
___nl__bool__44 = ___nl__int__19 != ___nl__int__45;
#line 97
//clear ___nl__int__45;
#line 97
___nl__bool__44 = !___nl__bool__44;
#line 97
if(___nl__bool__44){ goto label_122;}
#line 97
c_rt_lib0move(&___nl__im__51,___get_global_string_const(323));
#line 97
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__51));
#line 97
c_rt_lib0clear(&___nl__im__51);
#line 97
c_rt_lib0move(&___nl__im__52, wprinter0get_sep());
#line 97
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__50, ___nl__im__52));
#line 97
c_rt_lib0clear(&___nl__im__50);
#line 97
c_rt_lib0clear(&___nl__im__52);
#line 97
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__49));
#line 97
c_rt_lib0clear(&___nl__im__49);
#line 97
goto label_122;
#line 97
label_122:
;
#line 97
//clear ___nl__bool__44;
#line 97
c_rt_lib0clear(&___nl__im__22);
#line 97
c_rt_lib0clear(&___nl__im__24);
#line 97
//clear ___nl__bool__25;
#line 97
c_rt_lib0clear(&___nl__im__26);
#line 97
c_rt_lib0clear(&___nl__im__33);
#line 97
//clear ___nl__bool__34;
#line 97
c_rt_lib0clear(&___nl__im__35);
#line 97
c_rt_lib0clear(&___nl__im__36);
#line 97
c_rt_lib0clear(&___nl__im__37);
#line 98
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 98
goto label_40;
#line 98
label_135:
;
#line 99
c_rt_lib0move(&___nl__im__54,___get_global_string_const(331));
#line 99
c_rt_lib0move(&___nl__im__53, wprinter0build_sim(___nl__im__54));
#line 99
c_rt_lib0clear(&___nl__im__54);
#line 99
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__53));
#line 99
c_rt_lib0clear(&___nl__im__53);
#line 100
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(476)));
#line 100
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(215)));
#line 100
c_rt_lib0clear(&___nl__im__56);
#line 100
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(215));
#line 100
if(___nl__bool__57){ goto label_151;}
#line 107
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(76));
#line 107
if(___nl__bool__57){ goto label_168;}
#line 107
c_rt_lib0move(&___nl__im__58,___get_global_string_const(15));
#line 107
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__55));
#line 107
nl_die_arg(___nl__im__58);
#line 100
label_151:
;
#line 100
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__55, ___get_global_string_const(215)));
#line 100
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 102
c_rt_lib0move(&___nl__im__62, wprinter0get_sep());
#line 103
c_rt_lib0move(&___nl__im__64,___get_global_string_const(538));
#line 103
c_rt_lib0move(&___nl__im__63, wprinter0build_sim(___nl__im__64));
#line 103
c_rt_lib0clear(&___nl__im__64);
#line 104
c_rt_lib0move(&___nl__im__65, wprinter0get_sep());
#line 105
c_rt_lib0move(&___nl__im__66, pretty_printer_priv0print_sim_value(___nl__im__59));
#line 105
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(4, ___nl__im__62, ___nl__im__63, ___nl__im__65, ___nl__im__66));
#line 105
c_rt_lib0clear(&___nl__im__62);
#line 105
c_rt_lib0clear(&___nl__im__63);
#line 105
c_rt_lib0clear(&___nl__im__65);
#line 105
c_rt_lib0clear(&___nl__im__66);
#line 105
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__61));
#line 105
c_rt_lib0clear(&___nl__im__61);
#line 107
goto label_170;
#line 107
label_168:
;
#line 108
goto label_170;
#line 108
label_170:
;
#line 109
c_rt_lib0move(&___nl__im__67, wprinter0build_pretty_l(___nl__im__10));
#line 109
___nl__int__68 = 0;
#line 109
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__67, ___nl__int__68));
#line 109
c_rt_lib0clear(&___nl__im__67);
#line 109
//clear ___nl__int__68;
#line 109
c_rt_lib0clear(&___nl__im__1);
#line 109
c_rt_lib0clear(&___nl__im__2);
#line 109
c_rt_lib0clear(&___nl__im__3);
#line 109
c_rt_lib0clear(&___nl__im__4);
#line 109
//clear ___nl__bool__5;
#line 109
c_rt_lib0clear(&___nl__im__6);
#line 109
c_rt_lib0clear(&___nl__im__10);
#line 109
//clear ___nl__int__17;
#line 109
//clear ___nl__int__19;
#line 109
//clear ___nl__int__20;
#line 109
//clear ___nl__bool__21;
#line 109
c_rt_lib0clear(&___nl__im__22);
#line 109
c_rt_lib0clear(&___nl__im__24);
#line 109
//clear ___nl__bool__25;
#line 109
c_rt_lib0clear(&___nl__im__26);
#line 109
c_rt_lib0clear(&___nl__im__33);
#line 109
//clear ___nl__bool__34;
#line 109
c_rt_lib0clear(&___nl__im__35);
#line 109
c_rt_lib0clear(&___nl__im__36);
#line 109
c_rt_lib0clear(&___nl__im__37);
#line 109
c_rt_lib0clear(&___nl__im__55);
#line 109
//clear ___nl__bool__57;
#line 109
c_rt_lib0clear(&___nl__im__58);
#line 109
c_rt_lib0clear(&___nl__im__59);
#line 109
c_rt_lib0clear(&___nl__im__60);
#line 109
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
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 113
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 114
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 114
___nl__int__3 = 0;
#line 114
___nl__int__4 = 1;
#line 114
label_4:
;
#line 114
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 114
if(___nl__bool__5){ goto label_35;}
#line 115
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 115
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_var_decl(___nl__im__7));
#line 115
c_rt_lib0clear(&___nl__im__7);
#line 115
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 115
c_rt_lib0clear(&___nl__im__6);
#line 116
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 116
___nl__int__11 = 1;
#line 116
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 116
//clear ___nl__int__10;
#line 116
//clear ___nl__int__11;
#line 116
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 116
//clear ___nl__int__9;
#line 116
___nl__bool__8 = !___nl__bool__8;
#line 116
if(___nl__bool__8){ goto label_31;}
#line 116
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 116
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 116
c_rt_lib0clear(&___nl__im__14);
#line 116
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 116
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 116
c_rt_lib0clear(&___nl__im__13);
#line 116
c_rt_lib0clear(&___nl__im__15);
#line 116
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 116
c_rt_lib0clear(&___nl__im__12);
#line 116
goto label_31;
#line 116
label_31:
;
#line 116
//clear ___nl__bool__8;
#line 117
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 117
goto label_4;
#line 117
label_35:
;
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
//clear ___nl__int__2;
#line 118
//clear ___nl__int__3;
#line 118
//clear ___nl__int__4;
#line 118
//clear ___nl__bool__5;
#line 118
return ___nl__im__1;
return NULL;

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
#line 122
c_rt_lib0move(&___nl__im__3,___get_global_string_const(515));
#line 122
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 122
c_rt_lib0clear(&___nl__im__3);
#line 122
c_rt_lib0move(&___nl__im__4, wprinter0get_sep());
#line 122
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__4));
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
c_rt_lib0clear(&___nl__im__4);
#line 123
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 123
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(215));
#line 123
if(___nl__bool__6){ goto label_15;}
#line 131
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(76));
#line 131
if(___nl__bool__6){ goto label_36;}
#line 131
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 131
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 131
nl_die_arg(___nl__im__7);
#line 123
label_15:
;
#line 123
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(215)));
#line 123
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 125
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 125
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 125
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 127
c_rt_lib0move(&___nl__im__15,___get_global_string_const(538));
#line 127
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 127
c_rt_lib0clear(&___nl__im__15);
#line 128
c_rt_lib0move(&___nl__im__16, wprinter0get_sep());
#line 129
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_val(___nl__im__8));
#line 129
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(5, ___nl__im__11, ___nl__im__13, ___nl__im__14, ___nl__im__16, ___nl__im__17));
#line 129
c_rt_lib0clear(&___nl__im__11);
#line 129
c_rt_lib0clear(&___nl__im__13);
#line 129
c_rt_lib0clear(&___nl__im__14);
#line 129
c_rt_lib0clear(&___nl__im__16);
#line 129
c_rt_lib0clear(&___nl__im__17);
#line 129
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__10));
#line 129
c_rt_lib0clear(&___nl__im__10);
#line 131
goto label_43;
#line 131
label_36:
;
#line 132
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 132
c_rt_lib0move(&___nl__im__18, wprinter0build_sim(___nl__im__19));
#line 132
c_rt_lib0clear(&___nl__im__19);
#line 132
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__18));
#line 132
c_rt_lib0clear(&___nl__im__18);
#line 133
goto label_43;
#line 133
label_43:
;
#line 134
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 134
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(229));
#line 134
if(___nl__bool__21){ goto label_52;}
#line 136
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(76));
#line 136
if(___nl__bool__21){ goto label_69;}
#line 136
c_rt_lib0move(&___nl__im__22,___get_global_string_const(15));
#line 136
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 136
nl_die_arg(___nl__im__22);
#line 134
label_52:
;
#line 134
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(229)));
#line 134
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 135
c_rt_lib0move(&___nl__im__26, wprinter0get_sep());
#line 135
c_rt_lib0move(&___nl__im__28,___get_global_string_const(752));
#line 135
c_rt_lib0move(&___nl__im__27, wprinter0build_sim(___nl__im__28));
#line 135
c_rt_lib0clear(&___nl__im__28);
#line 135
c_rt_lib0move(&___nl__im__29, wprinter0get_sep());
#line 135
c_rt_lib0move(&___nl__im__30, pretty_printer_priv0print_val(___nl__im__23));
#line 135
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(4, ___nl__im__26, ___nl__im__27, ___nl__im__29, ___nl__im__30));
#line 135
c_rt_lib0clear(&___nl__im__26);
#line 135
c_rt_lib0clear(&___nl__im__27);
#line 135
c_rt_lib0clear(&___nl__im__29);
#line 135
c_rt_lib0clear(&___nl__im__30);
#line 135
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__25));
#line 135
c_rt_lib0clear(&___nl__im__25);
#line 136
goto label_71;
#line 136
label_69:
;
#line 137
goto label_71;
#line 137
label_71:
;
#line 138
c_rt_lib0move(&___nl__im__31, wprinter0build_pretty_l(___nl__im__1));
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
c_rt_lib0clear(&___nl__im__1);
#line 138
c_rt_lib0clear(&___nl__im__5);
#line 138
//clear ___nl__bool__6;
#line 138
c_rt_lib0clear(&___nl__im__7);
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
//clear ___nl__bool__21;
#line 138
c_rt_lib0clear(&___nl__im__22);
#line 138
c_rt_lib0clear(&___nl__im__23);
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
return ___nl__im__31;
return NULL;

}

ImmT  pretty_printer_priv0pind(INT  ___nl__int__0) {
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
#line 142
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 143
___nl__int__2 = 0;
#line 143
___nl__int__3 = 1;
#line 143
label_3:
;
#line 143
___nl__bool__4 = ___nl__int__2 >= ___nl__int__0;
#line 143
if(___nl__bool__4){ goto label_13;}
#line 143
___nl__int__6 = 9;
#line 143
c_rt_lib0move(&___nl__im__5, string0chr(___nl__int__6));
#line 143
//clear ___nl__int__6;
#line 143
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 143
c_rt_lib0clear(&___nl__im__5);
#line 143
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 143
goto label_3;
#line 143
label_13:
;
#line 144
//clear ___nl__int__0;
#line 144
//clear ___nl__int__2;
#line 144
//clear ___nl__int__3;
#line 144
//clear ___nl__bool__4;
#line 144
return ___nl__im__1;
return NULL;

}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_hash_elem(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 148
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 149
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 149
___nl__int__3 = 0;
#line 149
___nl__int__4 = 1;
#line 149
label_4:
;
#line 149
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 149
if(___nl__bool__5){ goto label_35;}
#line 150
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 150
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_hash_elem(___nl__im__7));
#line 150
c_rt_lib0clear(&___nl__im__7);
#line 150
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 150
c_rt_lib0clear(&___nl__im__6);
#line 151
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 151
___nl__int__11 = 1;
#line 151
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 151
//clear ___nl__int__10;
#line 151
//clear ___nl__int__11;
#line 151
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 151
//clear ___nl__int__9;
#line 151
___nl__bool__8 = !___nl__bool__8;
#line 151
if(___nl__bool__8){ goto label_31;}
#line 151
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 151
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 151
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 151
c_rt_lib0clear(&___nl__im__13);
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 151
c_rt_lib0clear(&___nl__im__12);
#line 151
goto label_31;
#line 151
label_31:
;
#line 151
//clear ___nl__bool__8;
#line 152
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 152
goto label_4;
#line 152
label_35:
;
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
//clear ___nl__int__2;
#line 153
//clear ___nl__int__3;
#line 153
//clear ___nl__int__4;
#line 153
//clear ___nl__bool__5;
#line 153
return ___nl__im__1;
return NULL;

}

wprinter0pretty_t0type pretty_printer_priv0print_hash_elem(nast0hash_elem_t0type ___nl__im__0) {
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
bool  ___nl__bool__11 = false;
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
#line 157
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 157
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(229)));
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(241));
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
if(___nl__bool__1){ goto label_11;}
#line 157
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 157
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(229)));
#line 157
c_rt_lib0clear(&___nl__im__5);
#line 157
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(240));
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
label_11:
;
#line 157
___nl__bool__1 = !___nl__bool__1;
#line 157
if(___nl__bool__1){ goto label_51;}
#line 158
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(585)));
#line 158
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(229)));
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(585)));
#line 158
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(229)));
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(1105)));
#line 158
c_rt_lib0clear(&___nl__im__7);
#line 158
c_rt_lib0clear(&___nl__im__9);
#line 159
___nl__bool__11 = pretty_printer_priv0is_proper_hash_key(___nl__im__6);
#line 159
___nl__bool__11 = !___nl__bool__11;
#line 159
___nl__bool__11 = !___nl__bool__11;
#line 159
if(___nl__bool__11){ goto label_35;}
#line 159
c_rt_lib0move(&___nl__im__13,___get_global_string_const(147));
#line 159
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 159
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0move(&___nl__im__14,___get_global_string_const(147));
#line 159
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 159
c_rt_lib0clear(&___nl__im__12);
#line 159
c_rt_lib0clear(&___nl__im__14);
#line 159
goto label_35;
#line 159
label_35:
;
#line 159
//clear ___nl__bool__11;
#line 160
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 160
c_rt_lib0move(&___nl__im__18,___get_global_string_const(336));
#line 160
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__6, ___nl__im__18));
#line 160
c_rt_lib0clear(&___nl__im__18);
#line 160
c_rt_lib0move(&___nl__im__19,___get_global_string_const(36));
#line 160
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0get_compressed_fun_val(___nl__im__16, ___nl__im__17, ___nl__im__19));
#line 160
c_rt_lib0clear(&___nl__im__16);
#line 160
c_rt_lib0clear(&___nl__im__17);
#line 160
c_rt_lib0clear(&___nl__im__19);
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
//clear ___nl__bool__1;
#line 160
c_rt_lib0clear(&___nl__im__6);
#line 160
return ___nl__im__15;
#line 161
goto label_51;
#line 161
label_51:
;
#line 161
//clear ___nl__bool__1;
#line 161
c_rt_lib0clear(&___nl__im__6);
#line 161
c_rt_lib0clear(&___nl__im__15);
#line 163
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(585)));
#line 163
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_val(___nl__im__23));
#line 163
c_rt_lib0clear(&___nl__im__23);
#line 164
c_rt_lib0move(&___nl__im__24, wprinter0get_sep());
#line 165
c_rt_lib0move(&___nl__im__26,___get_global_string_const(317));
#line 165
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 165
c_rt_lib0clear(&___nl__im__26);
#line 166
c_rt_lib0move(&___nl__im__27, wprinter0get_sep());
#line 167
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 167
c_rt_lib0move(&___nl__im__28, pretty_printer_priv0print_val(___nl__im__29));
#line 167
c_rt_lib0clear(&___nl__im__29);
#line 167
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(5, ___nl__im__22, ___nl__im__24, ___nl__im__25, ___nl__im__27, ___nl__im__28));
#line 167
c_rt_lib0clear(&___nl__im__22);
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 167
c_rt_lib0clear(&___nl__im__27);
#line 167
c_rt_lib0clear(&___nl__im__28);
#line 167
c_rt_lib0move(&___nl__im__20, wprinter0build_pretty_l(___nl__im__21));
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
return ___nl__im__20;
return NULL;

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
bool  ___nl__bool__34 = false;
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
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 172
c_rt_lib0move(&___nl__im__4,___get_global_string_const(188));
#line 172
___nl__bool__1 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 172
c_rt_lib0clear(&___nl__im__3);
#line 172
c_rt_lib0clear(&___nl__im__4);
#line 172
___nl__bool__2 = !___nl__bool__1;
#line 172
if(___nl__bool__2){ goto label_12;}
#line 172
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 172
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(229)));
#line 172
c_rt_lib0clear(&___nl__im__6);
#line 172
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1083));
#line 172
c_rt_lib0clear(&___nl__im__5);
#line 172
label_12:
;
#line 172
//clear ___nl__bool__2;
#line 172
___nl__bool__1 = !___nl__bool__1;
#line 172
if(___nl__bool__1){ goto label_23;}
#line 173
c_rt_lib0move(&___nl__im__8,___get_global_string_const(581));
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
goto label_48;
#line 174
label_23:
;
#line 174
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 174
c_rt_lib0move(&___nl__im__11,___get_global_string_const(189));
#line 174
___nl__bool__1 = c_rt_lib0eq(___nl__im__10, ___nl__im__11);
#line 174
c_rt_lib0clear(&___nl__im__10);
#line 174
c_rt_lib0clear(&___nl__im__11);
#line 174
___nl__bool__9 = !___nl__bool__1;
#line 174
if(___nl__bool__9){ goto label_36;}
#line 174
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 174
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(229)));
#line 174
c_rt_lib0clear(&___nl__im__13);
#line 174
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(1083));
#line 174
c_rt_lib0clear(&___nl__im__12);
#line 174
label_36:
;
#line 174
//clear ___nl__bool__9;
#line 174
___nl__bool__1 = !___nl__bool__1;
#line 174
if(___nl__bool__1){ goto label_48;}
#line 175
c_rt_lib0move(&___nl__im__15,___get_global_string_const(580));
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
goto label_48;
#line 176
label_48:
;
#line 176
//clear ___nl__bool__1;
#line 176
c_rt_lib0clear(&___nl__im__7);
#line 176
c_rt_lib0clear(&___nl__im__14);
#line 177
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 177
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(229)));
#line 177
c_rt_lib0clear(&___nl__im__18);
#line 177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(240));
#line 177
c_rt_lib0clear(&___nl__im__17);
#line 177
if(___nl__bool__16){ goto label_63;}
#line 177
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 177
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(229)));
#line 177
c_rt_lib0clear(&___nl__im__20);
#line 177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(241));
#line 177
c_rt_lib0clear(&___nl__im__19);
#line 177
label_63:
;
#line 177
___nl__bool__16 = !___nl__bool__16;
#line 177
if(___nl__bool__16){ goto label_85;}
#line 178
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 178
c_rt_lib0move(&___nl__im__25,___get_global_string_const(538));
#line 178
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 178
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 178
c_rt_lib0clear(&___nl__im__25);
#line 178
c_rt_lib0clear(&___nl__im__26);
#line 178
c_rt_lib0move(&___nl__im__27,___get_global_string_const(465));
#line 178
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 178
c_rt_lib0clear(&___nl__im__24);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
c_rt_lib0move(&___nl__im__28,___get_global_string_const(331));
#line 178
c_rt_lib0move(&___nl__im__21, pretty_printer_priv0get_compressed_fun_val(___nl__im__22, ___nl__im__23, ___nl__im__28));
#line 178
c_rt_lib0clear(&___nl__im__22);
#line 178
c_rt_lib0clear(&___nl__im__23);
#line 178
c_rt_lib0clear(&___nl__im__28);
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
//clear ___nl__bool__16;
#line 178
return ___nl__im__21;
#line 179
goto label_85;
#line 179
label_85:
;
#line 179
//clear ___nl__bool__16;
#line 179
c_rt_lib0clear(&___nl__im__21);
#line 180
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 181
c_rt_lib0move(&___nl__im__32,___get_global_string_const(538));
#line 181
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 181
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__33));
#line 181
c_rt_lib0clear(&___nl__im__32);
#line 181
c_rt_lib0clear(&___nl__im__33);
#line 181
c_rt_lib0move(&___nl__im__30, wprinter0build_sim(___nl__im__31));
#line 181
c_rt_lib0clear(&___nl__im__31);
#line 181
c_rt_lib0delete(array0push(&___nl__im__29, ___nl__im__30));
#line 181
c_rt_lib0clear(&___nl__im__30);
#line 183
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 183
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(229)));
#line 183
c_rt_lib0clear(&___nl__im__36);
#line 183
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(1083));
#line 183
c_rt_lib0clear(&___nl__im__35);
#line 183
___nl__bool__34 = !___nl__bool__34;
#line 183
___nl__bool__34 = !___nl__bool__34;
#line 183
if(___nl__bool__34){ goto label_122;}
#line 182
c_rt_lib0move(&___nl__im__39,___get_global_string_const(465));
#line 182
c_rt_lib0move(&___nl__im__38, wprinter0build_sim(___nl__im__39));
#line 182
c_rt_lib0clear(&___nl__im__39);
#line 182
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 182
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_val(___nl__im__41));
#line 182
c_rt_lib0clear(&___nl__im__41);
#line 182
c_rt_lib0move(&___nl__im__43,___get_global_string_const(331));
#line 182
c_rt_lib0move(&___nl__im__42, wprinter0build_sim(___nl__im__43));
#line 182
c_rt_lib0clear(&___nl__im__43);
#line 182
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(3, ___nl__im__38, ___nl__im__40, ___nl__im__42));
#line 182
c_rt_lib0clear(&___nl__im__38);
#line 182
c_rt_lib0clear(&___nl__im__40);
#line 182
c_rt_lib0clear(&___nl__im__42);
#line 182
c_rt_lib0delete(array0append(&___nl__im__29, ___nl__im__37));
#line 182
c_rt_lib0clear(&___nl__im__37);
#line 182
goto label_122;
#line 182
label_122:
;
#line 182
//clear ___nl__bool__34;
#line 184
c_rt_lib0move(&___nl__im__44, wprinter0build_pretty_op_l(___nl__im__29));
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
c_rt_lib0clear(&___nl__im__29);
#line 184
return ___nl__im__44;
return NULL;

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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(538));
#line 188
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 189
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(229));
#line 189
if(___nl__bool__7){ goto label_17;}
#line 191
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(76));
#line 191
if(___nl__bool__7){ goto label_36;}
#line 191
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 191
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 191
nl_die_arg(___nl__im__8);
#line 189
label_17:
;
#line 189
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(229)));
#line 189
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 190
c_rt_lib0move(&___nl__im__13,___get_global_string_const(465));
#line 190
c_rt_lib0move(&___nl__im__12, wprinter0build_sim(___nl__im__13));
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(501)));
#line 190
c_rt_lib0move(&___nl__im__14, pretty_printer_priv0print_var_decl(___nl__im__15));
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0move(&___nl__im__17,___get_global_string_const(331));
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
goto label_38;
#line 191
label_36:
;
#line 192
goto label_38;
#line 192
label_38:
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
return NULL;

}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_fun_arg(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 197
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 198
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 198
___nl__int__3 = 0;
#line 198
___nl__int__4 = 1;
#line 198
label_4:
;
#line 198
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 198
if(___nl__bool__5){ goto label_35;}
#line 199
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 199
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_fun_arg(___nl__im__7));
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 199
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 199
c_rt_lib0clear(&___nl__im__6);
#line 200
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 200
___nl__int__11 = 1;
#line 200
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 200
//clear ___nl__int__10;
#line 200
//clear ___nl__int__11;
#line 200
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 200
//clear ___nl__int__9;
#line 200
___nl__bool__8 = !___nl__bool__8;
#line 200
if(___nl__bool__8){ goto label_31;}
#line 200
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 200
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 200
c_rt_lib0clear(&___nl__im__14);
#line 200
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 200
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 200
c_rt_lib0clear(&___nl__im__13);
#line 200
c_rt_lib0clear(&___nl__im__15);
#line 200
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 200
c_rt_lib0clear(&___nl__im__12);
#line 200
goto label_31;
#line 200
label_31:
;
#line 200
//clear ___nl__bool__8;
#line 201
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 201
goto label_4;
#line 201
label_35:
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
return ___nl__im__1;
return NULL;

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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 207
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(39));
#line 207
if(___nl__bool__3){ goto label_9;}
#line 209
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(76));
#line 209
if(___nl__bool__3){ goto label_20;}
#line 209
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 209
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 209
nl_die_arg(___nl__im__4);
#line 207
label_9:
;
#line 208
c_rt_lib0move(&___nl__im__7,___get_global_string_const(39));
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
goto label_22;
#line 209
label_20:
;
#line 210
goto label_22;
#line 210
label_22:
;
#line 211
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
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
return NULL;

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
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
#line 216
___nl__int__1 = 0;
#line 217
___nl__int__3 = 0;
#line 217
___nl__int__4 = 1;
#line 217
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 217
label_4:
;
#line 217
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 217
if(___nl__bool__6){ goto label_32;}
#line 217
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 217
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 218
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(234)));
#line 218
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(229)));
#line 218
c_rt_lib0clear(&___nl__im__10);
#line 218
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(240));
#line 218
c_rt_lib0clear(&___nl__im__9);
#line 218
if(___nl__bool__8){ goto label_20;}
#line 218
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(234)));
#line 218
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(229)));
#line 218
c_rt_lib0clear(&___nl__im__12);
#line 218
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(241));
#line 218
c_rt_lib0clear(&___nl__im__11);
#line 218
label_20:
;
#line 218
___nl__bool__8 = !___nl__bool__8;
#line 218
if(___nl__bool__8){ goto label_27;}
#line 218
___nl__int__13 = 1;
#line 218
___nl__int__1 = ___nl__int__1 + ___nl__int__13;
#line 218
//clear ___nl__int__13;
#line 218
goto label_27;
#line 218
label_27:
;
#line 218
//clear ___nl__bool__8;
#line 218
c_rt_lib0clear(&___nl__im__2);
#line 219
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 219
goto label_4;
#line 219
label_32:
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
c_rt_lib0clear(&___nl__im__7);
#line 220
return ___nl__int__1;
return 0;

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
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
#line 224
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 225
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 226
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 227
label_3:
;
#line 228
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 228
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(240));
#line 228
c_rt_lib0clear(&___nl__im__7);
#line 228
___nl__bool__6 = !___nl__bool__6;
#line 228
if(___nl__bool__6){ goto label_39;}
#line 229
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 229
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 229
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(240)));
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 229
c_rt_lib0clear(&___nl__im__10);
#line 230
c_rt_lib0move(&___nl__im__11,___get_global_string_const(325));
#line 230
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 230
c_rt_lib0clear(&___nl__im__11);
#line 231
c_rt_lib0move(&___nl__im__12,___get_global_string_const(326));
#line 231
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__12, ___nl__im__5));
#line 231
c_rt_lib0clear(&___nl__im__12);
#line 232
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 232
___nl__int__15 = 1;
#line 232
___nl__bool__13 = ___nl__int__14 != ___nl__int__15;
#line 232
//clear ___nl__int__14;
#line 232
//clear ___nl__int__15;
#line 232
___nl__bool__13 = !___nl__bool__13;
#line 232
if(___nl__bool__13){ goto label_33;}
#line 233
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_val(___nl__im__8));
#line 234
//clear ___nl__bool__6;
#line 234
c_rt_lib0clear(&___nl__im__8);
#line 234
//clear ___nl__bool__13;
#line 234
goto label_76;
#line 235
goto label_33;
#line 235
label_33:
;
#line 235
//clear ___nl__bool__13;
#line 236
___nl__int__16 = 0;
#line 236
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_get(___nl__im__8, ___nl__int__16));
#line 236
//clear ___nl__int__16;
#line 237
goto label_71;
#line 237
label_39:
;
#line 237
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 237
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(241));
#line 237
c_rt_lib0clear(&___nl__im__17);
#line 237
___nl__bool__6 = !___nl__bool__6;
#line 237
if(___nl__bool__6){ goto label_62;}
#line 238
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 238
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 238
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(241)));
#line 238
c_rt_lib0clear(&___nl__im__19);
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 239
c_rt_lib0move(&___nl__im__21,___get_global_string_const(315));
#line 239
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__21));
#line 239
c_rt_lib0clear(&___nl__im__21);
#line 240
c_rt_lib0move(&___nl__im__22,___get_global_string_const(316));
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__22, ___nl__im__5));
#line 240
c_rt_lib0clear(&___nl__im__22);
#line 241
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_hash_elem(___nl__im__18));
#line 242
//clear ___nl__bool__6;
#line 242
c_rt_lib0clear(&___nl__im__8);
#line 242
c_rt_lib0clear(&___nl__im__18);
#line 242
goto label_76;
#line 243
goto label_71;
#line 243
label_62:
;
#line 244
c_rt_lib0move(&___nl__im__23, pretty_printer_priv0print_val(___nl__im__0));
#line 244
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(1, ___nl__im__23));
#line 244
c_rt_lib0clear(&___nl__im__23);
#line 245
//clear ___nl__bool__6;
#line 245
c_rt_lib0clear(&___nl__im__8);
#line 245
c_rt_lib0clear(&___nl__im__18);
#line 245
goto label_76;
#line 246
goto label_71;
#line 246
label_71:
;
#line 246
//clear ___nl__bool__6;
#line 246
c_rt_lib0clear(&___nl__im__8);
#line 246
c_rt_lib0clear(&___nl__im__18);
#line 227
goto label_3;
#line 227
label_76:
;
#line 248
c_rt_lib0move(&___nl__im__24, wprinter0build_pretty_arr_decl(___nl__im__3, ___nl__im__4, ___nl__im__5));
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
return ___nl__im__24;
return NULL;

}

ImmT  pretty_printer_priv0print_st(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 252
c_rt_lib0move(&___nl__im__3,___get_global_string_const(477));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 257
___nl__bool__3 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 257
c_rt_lib0clear(&___nl__im__4);
#line 257
if(___nl__bool__3){ goto label_10;}
#line 257
c_rt_lib0move(&___nl__im__6,___get_global_string_const(34));
#line 257
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__1, ___nl__im__6));
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 257
goto label_12;
#line 257
label_10:
;
#line 257
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 257
label_12:
;
#line 257
//clear ___nl__bool__3;
#line 257
c_rt_lib0clear(&___nl__im__0);
#line 257
c_rt_lib0clear(&___nl__im__1);
#line 257
return ___nl__im__2;
return NULL;

}

ImmT  pretty_printer_priv0string_to_nl(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 261
c_rt_lib0move(&___nl__im__2,___get_global_string_const(147));
#line 261
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1287));
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
return NULL;

}

wprinter0pretty_arr_t0type pretty_printer_priv0join_print_val(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 265
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 266
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 266
___nl__int__3 = 0;
#line 266
___nl__int__4 = 1;
#line 266
label_4:
;
#line 266
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 266
if(___nl__bool__5){ goto label_35;}
#line 267
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 267
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_val(___nl__im__7));
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 268
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 268
___nl__int__11 = 1;
#line 268
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 268
//clear ___nl__int__10;
#line 268
//clear ___nl__int__11;
#line 268
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 268
//clear ___nl__int__9;
#line 268
___nl__bool__8 = !___nl__bool__8;
#line 268
if(___nl__bool__8){ goto label_31;}
#line 268
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 268
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 268
c_rt_lib0clear(&___nl__im__14);
#line 268
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 268
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 268
c_rt_lib0clear(&___nl__im__13);
#line 268
c_rt_lib0clear(&___nl__im__15);
#line 268
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 268
c_rt_lib0clear(&___nl__im__12);
#line 268
goto label_31;
#line 268
label_31:
;
#line 268
//clear ___nl__bool__8;
#line 269
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 269
goto label_4;
#line 269
label_35:
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
return ___nl__im__1;
return NULL;

}

bool  pretty_printer_priv0is_to_change_ov(nast0value_t0type ___nl__im__0) {
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
INT  ___nl__int__26 = 0;
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
INT  ___nl__int__37 = 0;
bool  ___nl__bool__38 = false;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
bool  ___nl__bool__50 = false;
bool  ___nl__bool__51 = false;
#line 274
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 274
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1063));
#line 274
c_rt_lib0clear(&___nl__im__2);
#line 274
___nl__bool__1 = !___nl__bool__1;
#line 274
___nl__bool__1 = !___nl__bool__1;
#line 274
if(___nl__bool__1){ goto label_11;}
#line 274
___nl__bool__3 = false;
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
//clear ___nl__bool__1;
#line 274
return ___nl__bool__3;
#line 274
goto label_11;
#line 274
label_11:
;
#line 274
//clear ___nl__bool__1;
#line 274
//clear ___nl__bool__3;
#line 275
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 275
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 275
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(1063)));
#line 275
c_rt_lib0clear(&___nl__im__5);
#line 275
c_rt_lib0clear(&___nl__im__6);
#line 276
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 276
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 276
c_rt_lib0clear(&___nl__im__10);
#line 276
___nl__int__11 = 2;
#line 276
___nl__bool__7 = ___nl__int__9 == ___nl__int__11;
#line 276
//clear ___nl__int__9;
#line 276
//clear ___nl__int__11;
#line 276
___nl__bool__8 = !___nl__bool__7;
#line 276
if(___nl__bool__8){ goto label_39;}
#line 276
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(159)));
#line 276
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1027));
#line 276
___nl__bool__7 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 276
c_rt_lib0clear(&___nl__im__12);
#line 276
c_rt_lib0clear(&___nl__im__13);
#line 276
if(___nl__bool__7){ goto label_39;}
#line 276
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(159)));
#line 276
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1288));
#line 276
___nl__bool__7 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 276
c_rt_lib0clear(&___nl__im__14);
#line 276
c_rt_lib0clear(&___nl__im__15);
#line 276
label_39:
;
#line 276
//clear ___nl__bool__8;
#line 276
___nl__bool__7 = !___nl__bool__7;
#line 276
if(___nl__bool__7){ goto label_138;}
#line 277
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(175)));
#line 277
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1125));
#line 277
___nl__bool__16 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 277
c_rt_lib0clear(&___nl__im__18);
#line 277
c_rt_lib0clear(&___nl__im__19);
#line 277
if(___nl__bool__16){ goto label_54;}
#line 277
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(175)));
#line 277
c_rt_lib0move(&___nl__im__21,___get_global_string_const(1124));
#line 277
___nl__bool__16 = c_rt_lib0eq(___nl__im__20, ___nl__im__21);
#line 277
c_rt_lib0clear(&___nl__im__20);
#line 277
c_rt_lib0clear(&___nl__im__21);
#line 277
label_54:
;
#line 277
___nl__bool__17 = !___nl__bool__16;
#line 277
if(___nl__bool__17){ goto label_68;}
#line 277
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 277
___nl__int__26 = 1;
#line 277
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__25, ___nl__int__26));
#line 277
c_rt_lib0clear(&___nl__im__25);
#line 277
//clear ___nl__int__26;
#line 277
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(234)));
#line 277
c_rt_lib0clear(&___nl__im__24);
#line 277
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(229)));
#line 277
c_rt_lib0clear(&___nl__im__23);
#line 277
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(414));
#line 277
c_rt_lib0clear(&___nl__im__22);
#line 277
label_68:
;
#line 277
//clear ___nl__bool__17;
#line 277
___nl__bool__16 = !___nl__bool__16;
#line 277
if(___nl__bool__16){ goto label_134;}
#line 278
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 278
___nl__int__32 = 1;
#line 278
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__31, ___nl__int__32));
#line 278
c_rt_lib0clear(&___nl__im__31);
#line 278
//clear ___nl__int__32;
#line 278
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(234)));
#line 278
c_rt_lib0clear(&___nl__im__30);
#line 278
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(229)));
#line 278
c_rt_lib0clear(&___nl__im__29);
#line 278
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 278
___nl__int__37 = 1;
#line 278
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__36, ___nl__int__37));
#line 278
c_rt_lib0clear(&___nl__im__36);
#line 278
//clear ___nl__int__37;
#line 278
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(234)));
#line 278
c_rt_lib0clear(&___nl__im__35);
#line 278
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(229)));
#line 278
c_rt_lib0clear(&___nl__im__34);
#line 278
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(414)));
#line 278
c_rt_lib0clear(&___nl__im__28);
#line 278
c_rt_lib0clear(&___nl__im__33);
#line 279
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(134)));
#line 279
___nl__int__40 = c_rt_lib0array_len(___nl__im__41);
#line 279
c_rt_lib0clear(&___nl__im__41);
#line 279
___nl__int__42 = 1;
#line 279
___nl__bool__38 = ___nl__int__40 == ___nl__int__42;
#line 279
//clear ___nl__int__40;
#line 279
//clear ___nl__int__42;
#line 279
___nl__bool__39 = !___nl__bool__38;
#line 279
if(___nl__bool__39){ goto label_117;}
#line 279
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(134)));
#line 279
___nl__int__46 = 0;
#line 279
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__45, ___nl__int__46));
#line 279
c_rt_lib0clear(&___nl__im__45);
#line 279
//clear ___nl__int__46;
#line 279
c_rt_lib0move(&___nl__im__47,___get_global_string_const(477));
#line 279
c_rt_lib0move(&___nl__im__43, string0index2(___nl__im__44, ___nl__im__47));
#line 279
c_rt_lib0clear(&___nl__im__44);
#line 279
c_rt_lib0clear(&___nl__im__47);
#line 279
___nl__int__48 = 0;
#line 279
___nl__int__49 = getIntFromImm(___nl__im__43);
#line 279
___nl__bool__38 = ___nl__int__49 < ___nl__int__48;
#line 279
c_rt_lib0clear(&___nl__im__43);
#line 279
//clear ___nl__int__48;
#line 279
//clear ___nl__int__49;
#line 279
label_117:
;
#line 279
//clear ___nl__bool__39;
#line 279
___nl__bool__38 = !___nl__bool__38;
#line 279
if(___nl__bool__38){ goto label_130;}
#line 280
___nl__bool__50 = true;
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
//clear ___nl__bool__7;
#line 280
//clear ___nl__bool__16;
#line 280
c_rt_lib0clear(&___nl__im__27);
#line 280
//clear ___nl__bool__38;
#line 280
return ___nl__bool__50;
#line 281
goto label_130;
#line 281
label_130:
;
#line 281
//clear ___nl__bool__38;
#line 281
//clear ___nl__bool__50;
#line 282
goto label_134;
#line 282
label_134:
;
#line 282
//clear ___nl__bool__16;
#line 282
c_rt_lib0clear(&___nl__im__27);
#line 283
goto label_138;
#line 283
label_138:
;
#line 283
//clear ___nl__bool__7;
#line 284
___nl__bool__51 = false;
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
return ___nl__bool__51;
return false;

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
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
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
bool  ___nl__bool__86 = false;
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
bool  ___nl__bool__115 = false;
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
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
bool  ___nl__bool__203 = false;
INT  ___nl__int__204 = 0;
ImmT  ___nl__im__205 = NULL;
INT  ___nl__int__206 = 0;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
INT  ___nl__int__210 = 0;
bool  ___nl__bool__211 = false;
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
INT  ___nl__int__222 = 0;
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
INT  ___nl__int__237 = 0;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
INT  ___nl__int__242 = 0;
INT  ___nl__int__243 = 0;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
bool  ___nl__bool__250 = false;
bool  ___nl__bool__251 = false;
INT  ___nl__int__252 = 0;
ImmT  ___nl__im__253 = NULL;
INT  ___nl__int__254 = 0;
ImmT  ___nl__im__255 = NULL;
INT  ___nl__int__256 = 0;
ImmT  ___nl__im__257 = NULL;
INT  ___nl__int__258 = 0;
bool  ___nl__bool__259 = false;
INT  ___nl__int__260 = 0;
ImmT  ___nl__im__261 = NULL;
INT  ___nl__int__262 = 0;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
INT  ___nl__int__267 = 0;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
INT  ___nl__int__271 = 0;
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
#line 288
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 288
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(232));
#line 288
if(___nl__bool__2){ goto label_38;}
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(414));
#line 290
if(___nl__bool__2){ goto label_54;}
#line 300
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(33));
#line 300
if(___nl__bool__2){ goto label_137;}
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1105));
#line 302
if(___nl__bool__2){ goto label_173;}
#line 305
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(571));
#line 305
if(___nl__bool__2){ goto label_219;}
#line 307
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(515));
#line 307
if(___nl__bool__2){ goto label_254;}
#line 309
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1102));
#line 309
if(___nl__bool__2){ goto label_292;}
#line 311
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1104));
#line 311
if(___nl__bool__2){ goto label_345;}
#line 319
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(245));
#line 319
if(___nl__bool__2){ goto label_423;}
#line 370
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1109));
#line 370
if(___nl__bool__2){ goto label_922;}
#line 372
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1108));
#line 372
if(___nl__bool__2){ goto label_980;}
#line 374
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1106));
#line 374
if(___nl__bool__2){ goto label_1041;}
#line 376
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1063));
#line 376
if(___nl__bool__2){ goto label_1105;}
#line 400
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1083));
#line 400
if(___nl__bool__2){ goto label_1509;}
#line 402
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(240));
#line 402
if(___nl__bool__2){ goto label_1577;}
#line 404
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(241));
#line 404
if(___nl__bool__2){ goto label_1646;}
#line 406
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1107));
#line 406
if(___nl__bool__2){ goto label_1720;}
#line 406
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 406
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 406
nl_die_arg(___nl__im__3);
#line 288
label_38:
;
#line 288
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(232)));
#line 288
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 289
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__4));
#line 289
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__im__8));
#line 289
c_rt_lib0clear(&___nl__im__8);
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
goto label_1797;
#line 290
label_54:
;
#line 290
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(414)));
#line 290
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 291
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 292
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(134)));
#line 292
___nl__int__14 = 0;
#line 292
___nl__int__15 = 1;
#line 292
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 292
label_62:
;
#line 292
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 292
if(___nl__bool__17){ goto label_77;}
#line 292
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 292
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 293
c_rt_lib0move(&___nl__im__20,___get_global_string_const(147));
#line 293
c_rt_lib0move(&___nl__im__21, pretty_printer_priv0string_to_nl(___nl__im__13));
#line 293
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__21));
#line 293
c_rt_lib0clear(&___nl__im__20);
#line 293
c_rt_lib0clear(&___nl__im__21);
#line 293
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__19));
#line 293
c_rt_lib0clear(&___nl__im__19);
#line 293
c_rt_lib0clear(&___nl__im__13);
#line 294
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 294
goto label_62;
#line 294
label_77:
;
#line 295
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1139)));
#line 295
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(1138));
#line 295
if(___nl__bool__23){ goto label_86;}
#line 296
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(742));
#line 296
if(___nl__bool__23){ goto label_88;}
#line 296
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 296
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__22));
#line 296
nl_die_arg(___nl__im__24);
#line 295
label_86:
;
#line 296
goto label_111;
#line 296
label_88:
;
#line 297
___nl__int__28 = c_rt_lib0array_len(___nl__im__11);
#line 297
___nl__int__29 = 1;
#line 297
___nl__int__27 = ___nl__int__28 - ___nl__int__29;
#line 297
//clear ___nl__int__28;
#line 297
//clear ___nl__int__29;
#line 297
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__11, ___nl__int__27));
#line 297
//clear ___nl__int__27;
#line 297
c_rt_lib0move(&___nl__im__30,___get_global_string_const(147));
#line 297
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 297
c_rt_lib0clear(&___nl__im__26);
#line 297
c_rt_lib0clear(&___nl__im__30);
#line 297
___nl__int__33 = c_rt_lib0array_len(___nl__im__11);
#line 297
___nl__int__34 = 1;
#line 297
___nl__int__32 = ___nl__int__33 - ___nl__int__34;
#line 297
//clear ___nl__int__33;
#line 297
//clear ___nl__int__34;
#line 297
c_rt_lib0copy(&___nl__im__31, ___nl__im__25);
#line 297
c_rt_lib0array_set(&___nl__im__11, ___nl__int__32, ___nl__im__31);
#line 297
c_rt_lib0clear(&___nl__im__25);
#line 297
c_rt_lib0clear(&___nl__im__31);
#line 297
//clear ___nl__int__32;
#line 298
goto label_111;
#line 298
label_111:
;
#line 299
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1139)));
#line 299
c_rt_lib0move(&___nl__im__35, wprinter0build_str_arr(___nl__im__11, ___nl__im__36));
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
c_rt_lib0clear(&___nl__im__9);
#line 299
c_rt_lib0clear(&___nl__im__10);
#line 299
c_rt_lib0clear(&___nl__im__11);
#line 299
c_rt_lib0clear(&___nl__im__12);
#line 299
c_rt_lib0clear(&___nl__im__13);
#line 299
//clear ___nl__int__14;
#line 299
//clear ___nl__int__15;
#line 299
//clear ___nl__int__16;
#line 299
//clear ___nl__bool__17;
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
goto label_1797;
#line 300
label_137:
;
#line 300
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(33)));
#line 300
___nl__bool__37 = c_rt_lib0check_true_native(___nl__im__38);
#line 301
if(___nl__bool__37){ goto label_143;}
#line 301
c_rt_lib0move(&___nl__im__40,___get_global_string_const(580));
#line 301
goto label_145;
#line 301
label_143:
;
#line 301
c_rt_lib0move(&___nl__im__40,___get_global_string_const(581));
#line 301
label_145:
;
#line 301
c_rt_lib0move(&___nl__im__39, wprinter0build_sim(___nl__im__40));
#line 301
c_rt_lib0clear(&___nl__im__40);
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
c_rt_lib0clear(&___nl__im__9);
#line 301
c_rt_lib0clear(&___nl__im__10);
#line 301
c_rt_lib0clear(&___nl__im__11);
#line 301
c_rt_lib0clear(&___nl__im__12);
#line 301
c_rt_lib0clear(&___nl__im__13);
#line 301
//clear ___nl__int__14;
#line 301
//clear ___nl__int__15;
#line 301
//clear ___nl__int__16;
#line 301
//clear ___nl__bool__17;
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
//clear ___nl__bool__37;
#line 301
c_rt_lib0clear(&___nl__im__38);
#line 301
return ___nl__im__39;
#line 302
goto label_1797;
#line 302
label_173:
;
#line 302
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1105)));
#line 302
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 303
___nl__bool__43 = pretty_printer_priv0is_proper_hash_key(___nl__im__41);
#line 303
___nl__bool__43 = !___nl__bool__43;
#line 303
___nl__bool__43 = !___nl__bool__43;
#line 303
if(___nl__bool__43){ goto label_188;}
#line 303
c_rt_lib0move(&___nl__im__45,___get_global_string_const(147));
#line 303
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__41));
#line 303
c_rt_lib0clear(&___nl__im__45);
#line 303
c_rt_lib0move(&___nl__im__46,___get_global_string_const(147));
#line 303
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 303
c_rt_lib0clear(&___nl__im__44);
#line 303
c_rt_lib0clear(&___nl__im__46);
#line 303
goto label_188;
#line 303
label_188:
;
#line 303
//clear ___nl__bool__43;
#line 304
c_rt_lib0move(&___nl__im__47, wprinter0build_sim(___nl__im__41));
#line 304
c_rt_lib0clear(&___nl__im__0);
#line 304
c_rt_lib0clear(&___nl__im__1);
#line 304
//clear ___nl__bool__2;
#line 304
c_rt_lib0clear(&___nl__im__3);
#line 304
//clear ___nl__int__4;
#line 304
c_rt_lib0clear(&___nl__im__5);
#line 304
c_rt_lib0clear(&___nl__im__6);
#line 304
c_rt_lib0clear(&___nl__im__9);
#line 304
c_rt_lib0clear(&___nl__im__10);
#line 304
c_rt_lib0clear(&___nl__im__11);
#line 304
c_rt_lib0clear(&___nl__im__12);
#line 304
c_rt_lib0clear(&___nl__im__13);
#line 304
//clear ___nl__int__14;
#line 304
//clear ___nl__int__15;
#line 304
//clear ___nl__int__16;
#line 304
//clear ___nl__bool__17;
#line 304
c_rt_lib0clear(&___nl__im__18);
#line 304
c_rt_lib0clear(&___nl__im__22);
#line 304
//clear ___nl__bool__23;
#line 304
c_rt_lib0clear(&___nl__im__24);
#line 304
c_rt_lib0clear(&___nl__im__35);
#line 304
//clear ___nl__bool__37;
#line 304
c_rt_lib0clear(&___nl__im__38);
#line 304
c_rt_lib0clear(&___nl__im__39);
#line 304
c_rt_lib0clear(&___nl__im__41);
#line 304
c_rt_lib0clear(&___nl__im__42);
#line 304
return ___nl__im__47;
#line 305
goto label_1797;
#line 305
label_219:
;
#line 305
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(571)));
#line 305
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 306
c_rt_lib0move(&___nl__im__50, pretty_printer_priv0print_variant(___nl__im__48));
#line 306
c_rt_lib0clear(&___nl__im__0);
#line 306
c_rt_lib0clear(&___nl__im__1);
#line 306
//clear ___nl__bool__2;
#line 306
c_rt_lib0clear(&___nl__im__3);
#line 306
//clear ___nl__int__4;
#line 306
c_rt_lib0clear(&___nl__im__5);
#line 306
c_rt_lib0clear(&___nl__im__6);
#line 306
c_rt_lib0clear(&___nl__im__9);
#line 306
c_rt_lib0clear(&___nl__im__10);
#line 306
c_rt_lib0clear(&___nl__im__11);
#line 306
c_rt_lib0clear(&___nl__im__12);
#line 306
c_rt_lib0clear(&___nl__im__13);
#line 306
//clear ___nl__int__14;
#line 306
//clear ___nl__int__15;
#line 306
//clear ___nl__int__16;
#line 306
//clear ___nl__bool__17;
#line 306
c_rt_lib0clear(&___nl__im__18);
#line 306
c_rt_lib0clear(&___nl__im__22);
#line 306
//clear ___nl__bool__23;
#line 306
c_rt_lib0clear(&___nl__im__24);
#line 306
c_rt_lib0clear(&___nl__im__35);
#line 306
//clear ___nl__bool__37;
#line 306
c_rt_lib0clear(&___nl__im__38);
#line 306
c_rt_lib0clear(&___nl__im__39);
#line 306
c_rt_lib0clear(&___nl__im__41);
#line 306
c_rt_lib0clear(&___nl__im__42);
#line 306
c_rt_lib0clear(&___nl__im__47);
#line 306
c_rt_lib0clear(&___nl__im__48);
#line 306
c_rt_lib0clear(&___nl__im__49);
#line 306
return ___nl__im__50;
#line 307
goto label_1797;
#line 307
label_254:
;
#line 307
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(515)));
#line 307
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 308
c_rt_lib0move(&___nl__im__53, wprinter0build_sim(___nl__im__51));
#line 308
c_rt_lib0clear(&___nl__im__0);
#line 308
c_rt_lib0clear(&___nl__im__1);
#line 308
//clear ___nl__bool__2;
#line 308
c_rt_lib0clear(&___nl__im__3);
#line 308
//clear ___nl__int__4;
#line 308
c_rt_lib0clear(&___nl__im__5);
#line 308
c_rt_lib0clear(&___nl__im__6);
#line 308
c_rt_lib0clear(&___nl__im__9);
#line 308
c_rt_lib0clear(&___nl__im__10);
#line 308
c_rt_lib0clear(&___nl__im__11);
#line 308
c_rt_lib0clear(&___nl__im__12);
#line 308
c_rt_lib0clear(&___nl__im__13);
#line 308
//clear ___nl__int__14;
#line 308
//clear ___nl__int__15;
#line 308
//clear ___nl__int__16;
#line 308
//clear ___nl__bool__17;
#line 308
c_rt_lib0clear(&___nl__im__18);
#line 308
c_rt_lib0clear(&___nl__im__22);
#line 308
//clear ___nl__bool__23;
#line 308
c_rt_lib0clear(&___nl__im__24);
#line 308
c_rt_lib0clear(&___nl__im__35);
#line 308
//clear ___nl__bool__37;
#line 308
c_rt_lib0clear(&___nl__im__38);
#line 308
c_rt_lib0clear(&___nl__im__39);
#line 308
c_rt_lib0clear(&___nl__im__41);
#line 308
c_rt_lib0clear(&___nl__im__42);
#line 308
c_rt_lib0clear(&___nl__im__47);
#line 308
c_rt_lib0clear(&___nl__im__48);
#line 308
c_rt_lib0clear(&___nl__im__49);
#line 308
c_rt_lib0clear(&___nl__im__50);
#line 308
c_rt_lib0clear(&___nl__im__51);
#line 308
c_rt_lib0clear(&___nl__im__52);
#line 308
return ___nl__im__53;
#line 309
goto label_1797;
#line 309
label_292:
;
#line 309
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1102)));
#line 309
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 310
c_rt_lib0move(&___nl__im__59,___get_global_string_const(465));
#line 310
c_rt_lib0move(&___nl__im__58, wprinter0build_sim(___nl__im__59));
#line 310
c_rt_lib0clear(&___nl__im__59);
#line 310
c_rt_lib0move(&___nl__im__60, pretty_printer_priv0print_val(___nl__im__54));
#line 310
c_rt_lib0move(&___nl__im__62,___get_global_string_const(331));
#line 310
c_rt_lib0move(&___nl__im__61, wprinter0build_sim(___nl__im__62));
#line 310
c_rt_lib0clear(&___nl__im__62);
#line 310
c_rt_lib0move(&___nl__im__57, c_rt_lib0array_mk(3, ___nl__im__58, ___nl__im__60, ___nl__im__61));
#line 310
c_rt_lib0clear(&___nl__im__58);
#line 310
c_rt_lib0clear(&___nl__im__60);
#line 310
c_rt_lib0clear(&___nl__im__61);
#line 310
c_rt_lib0move(&___nl__im__56, wprinter0build_pretty_a(___nl__im__57));
#line 310
c_rt_lib0clear(&___nl__im__57);
#line 310
c_rt_lib0clear(&___nl__im__0);
#line 310
c_rt_lib0clear(&___nl__im__1);
#line 310
//clear ___nl__bool__2;
#line 310
c_rt_lib0clear(&___nl__im__3);
#line 310
//clear ___nl__int__4;
#line 310
c_rt_lib0clear(&___nl__im__5);
#line 310
c_rt_lib0clear(&___nl__im__6);
#line 310
c_rt_lib0clear(&___nl__im__9);
#line 310
c_rt_lib0clear(&___nl__im__10);
#line 310
c_rt_lib0clear(&___nl__im__11);
#line 310
c_rt_lib0clear(&___nl__im__12);
#line 310
c_rt_lib0clear(&___nl__im__13);
#line 310
//clear ___nl__int__14;
#line 310
//clear ___nl__int__15;
#line 310
//clear ___nl__int__16;
#line 310
//clear ___nl__bool__17;
#line 310
c_rt_lib0clear(&___nl__im__18);
#line 310
c_rt_lib0clear(&___nl__im__22);
#line 310
//clear ___nl__bool__23;
#line 310
c_rt_lib0clear(&___nl__im__24);
#line 310
c_rt_lib0clear(&___nl__im__35);
#line 310
//clear ___nl__bool__37;
#line 310
c_rt_lib0clear(&___nl__im__38);
#line 310
c_rt_lib0clear(&___nl__im__39);
#line 310
c_rt_lib0clear(&___nl__im__41);
#line 310
c_rt_lib0clear(&___nl__im__42);
#line 310
c_rt_lib0clear(&___nl__im__47);
#line 310
c_rt_lib0clear(&___nl__im__48);
#line 310
c_rt_lib0clear(&___nl__im__49);
#line 310
c_rt_lib0clear(&___nl__im__50);
#line 310
c_rt_lib0clear(&___nl__im__51);
#line 310
c_rt_lib0clear(&___nl__im__52);
#line 310
c_rt_lib0clear(&___nl__im__53);
#line 310
c_rt_lib0clear(&___nl__im__54);
#line 310
c_rt_lib0clear(&___nl__im__55);
#line 310
return ___nl__im__56;
#line 311
goto label_1797;
#line 311
label_345:
;
#line 311
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1104)));
#line 311
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 313
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(1110)));
#line 313
c_rt_lib0move(&___nl__im__67, pretty_printer_priv0print_val(___nl__im__68));
#line 313
c_rt_lib0clear(&___nl__im__68);
#line 314
c_rt_lib0move(&___nl__im__69, wprinter0get_sep());
#line 315
c_rt_lib0move(&___nl__im__73,___get_global_string_const(1289));
#line 315
c_rt_lib0move(&___nl__im__72, wprinter0build_sim(___nl__im__73));
#line 315
c_rt_lib0clear(&___nl__im__73);
#line 315
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(1111)));
#line 315
c_rt_lib0move(&___nl__im__74, pretty_printer_priv0print_val(___nl__im__75));
#line 315
c_rt_lib0clear(&___nl__im__75);
#line 315
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(2, ___nl__im__72, ___nl__im__74));
#line 315
c_rt_lib0clear(&___nl__im__72);
#line 315
c_rt_lib0clear(&___nl__im__74);
#line 315
c_rt_lib0move(&___nl__im__70, wprinter0build_pretty_op_l(___nl__im__71));
#line 315
c_rt_lib0clear(&___nl__im__71);
#line 316
c_rt_lib0move(&___nl__im__76, wprinter0get_sep());
#line 317
c_rt_lib0move(&___nl__im__80,___get_global_string_const(924));
#line 317
c_rt_lib0move(&___nl__im__79, wprinter0build_sim(___nl__im__80));
#line 317
c_rt_lib0clear(&___nl__im__80);
#line 317
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(1112)));
#line 317
c_rt_lib0move(&___nl__im__81, pretty_printer_priv0print_val(___nl__im__82));
#line 317
c_rt_lib0clear(&___nl__im__82);
#line 317
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(2, ___nl__im__79, ___nl__im__81));
#line 317
c_rt_lib0clear(&___nl__im__79);
#line 317
c_rt_lib0clear(&___nl__im__81);
#line 317
c_rt_lib0move(&___nl__im__77, wprinter0build_pretty_op_l(___nl__im__78));
#line 317
c_rt_lib0clear(&___nl__im__78);
#line 317
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(5, ___nl__im__67, ___nl__im__69, ___nl__im__70, ___nl__im__76, ___nl__im__77));
#line 317
c_rt_lib0clear(&___nl__im__67);
#line 317
c_rt_lib0clear(&___nl__im__69);
#line 317
c_rt_lib0clear(&___nl__im__70);
#line 317
c_rt_lib0clear(&___nl__im__76);
#line 317
c_rt_lib0clear(&___nl__im__77);
#line 317
c_rt_lib0move(&___nl__im__65, wprinter0build_pretty_a(___nl__im__66));
#line 317
c_rt_lib0clear(&___nl__im__66);
#line 317
c_rt_lib0clear(&___nl__im__0);
#line 317
c_rt_lib0clear(&___nl__im__1);
#line 317
//clear ___nl__bool__2;
#line 317
c_rt_lib0clear(&___nl__im__3);
#line 317
//clear ___nl__int__4;
#line 317
c_rt_lib0clear(&___nl__im__5);
#line 317
c_rt_lib0clear(&___nl__im__6);
#line 317
c_rt_lib0clear(&___nl__im__9);
#line 317
c_rt_lib0clear(&___nl__im__10);
#line 317
c_rt_lib0clear(&___nl__im__11);
#line 317
c_rt_lib0clear(&___nl__im__12);
#line 317
c_rt_lib0clear(&___nl__im__13);
#line 317
//clear ___nl__int__14;
#line 317
//clear ___nl__int__15;
#line 317
//clear ___nl__int__16;
#line 317
//clear ___nl__bool__17;
#line 317
c_rt_lib0clear(&___nl__im__18);
#line 317
c_rt_lib0clear(&___nl__im__22);
#line 317
//clear ___nl__bool__23;
#line 317
c_rt_lib0clear(&___nl__im__24);
#line 317
c_rt_lib0clear(&___nl__im__35);
#line 317
//clear ___nl__bool__37;
#line 317
c_rt_lib0clear(&___nl__im__38);
#line 317
c_rt_lib0clear(&___nl__im__39);
#line 317
c_rt_lib0clear(&___nl__im__41);
#line 317
c_rt_lib0clear(&___nl__im__42);
#line 317
c_rt_lib0clear(&___nl__im__47);
#line 317
c_rt_lib0clear(&___nl__im__48);
#line 317
c_rt_lib0clear(&___nl__im__49);
#line 317
c_rt_lib0clear(&___nl__im__50);
#line 317
c_rt_lib0clear(&___nl__im__51);
#line 317
c_rt_lib0clear(&___nl__im__52);
#line 317
c_rt_lib0clear(&___nl__im__53);
#line 317
c_rt_lib0clear(&___nl__im__54);
#line 317
c_rt_lib0clear(&___nl__im__55);
#line 317
c_rt_lib0clear(&___nl__im__56);
#line 317
c_rt_lib0clear(&___nl__im__63);
#line 317
c_rt_lib0clear(&___nl__im__64);
#line 317
return ___nl__im__65;
#line 319
goto label_1797;
#line 319
label_423:
;
#line 319
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(245)));
#line 319
c_rt_lib0copy(&___nl__im__83, ___nl__im__84);
#line 320
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(568)));
#line 321
c_rt_lib0move(&___nl__im__87,___get_global_string_const(1099));
#line 321
___nl__bool__86 = c_rt_lib0eq(___nl__im__85, ___nl__im__87);
#line 321
c_rt_lib0clear(&___nl__im__87);
#line 321
___nl__bool__86 = !___nl__bool__86;
#line 321
if(___nl__bool__86){ goto label_500;}
#line 323
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 323
c_rt_lib0move(&___nl__im__92, pretty_printer_priv0print_val(___nl__im__93));
#line 323
c_rt_lib0clear(&___nl__im__93);
#line 323
c_rt_lib0move(&___nl__im__95,___get_global_string_const(325));
#line 323
c_rt_lib0move(&___nl__im__94, wprinter0build_sim(___nl__im__95));
#line 323
c_rt_lib0clear(&___nl__im__95);
#line 323
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(2, ___nl__im__92, ___nl__im__94));
#line 323
c_rt_lib0clear(&___nl__im__92);
#line 323
c_rt_lib0clear(&___nl__im__94);
#line 323
c_rt_lib0move(&___nl__im__90, wprinter0build_pretty_l(___nl__im__91));
#line 323
c_rt_lib0clear(&___nl__im__91);
#line 324
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 324
c_rt_lib0move(&___nl__im__96, pretty_printer_priv0print_val(___nl__im__97));
#line 324
c_rt_lib0clear(&___nl__im__97);
#line 325
c_rt_lib0move(&___nl__im__99,___get_global_string_const(326));
#line 325
c_rt_lib0move(&___nl__im__98, wprinter0build_sim(___nl__im__99));
#line 325
c_rt_lib0clear(&___nl__im__99);
#line 325
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(3, ___nl__im__90, ___nl__im__96, ___nl__im__98));
#line 325
c_rt_lib0clear(&___nl__im__90);
#line 325
c_rt_lib0clear(&___nl__im__96);
#line 325
c_rt_lib0clear(&___nl__im__98);
#line 325
c_rt_lib0move(&___nl__im__88, wprinter0build_pretty_a(___nl__im__89));
#line 325
c_rt_lib0clear(&___nl__im__89);
#line 325
c_rt_lib0clear(&___nl__im__0);
#line 325
c_rt_lib0clear(&___nl__im__1);
#line 325
//clear ___nl__bool__2;
#line 325
c_rt_lib0clear(&___nl__im__3);
#line 325
//clear ___nl__int__4;
#line 325
c_rt_lib0clear(&___nl__im__5);
#line 325
c_rt_lib0clear(&___nl__im__6);
#line 325
c_rt_lib0clear(&___nl__im__9);
#line 325
c_rt_lib0clear(&___nl__im__10);
#line 325
c_rt_lib0clear(&___nl__im__11);
#line 325
c_rt_lib0clear(&___nl__im__12);
#line 325
c_rt_lib0clear(&___nl__im__13);
#line 325
//clear ___nl__int__14;
#line 325
//clear ___nl__int__15;
#line 325
//clear ___nl__int__16;
#line 325
//clear ___nl__bool__17;
#line 325
c_rt_lib0clear(&___nl__im__18);
#line 325
c_rt_lib0clear(&___nl__im__22);
#line 325
//clear ___nl__bool__23;
#line 325
c_rt_lib0clear(&___nl__im__24);
#line 325
c_rt_lib0clear(&___nl__im__35);
#line 325
//clear ___nl__bool__37;
#line 325
c_rt_lib0clear(&___nl__im__38);
#line 325
c_rt_lib0clear(&___nl__im__39);
#line 325
c_rt_lib0clear(&___nl__im__41);
#line 325
c_rt_lib0clear(&___nl__im__42);
#line 325
c_rt_lib0clear(&___nl__im__47);
#line 325
c_rt_lib0clear(&___nl__im__48);
#line 325
c_rt_lib0clear(&___nl__im__49);
#line 325
c_rt_lib0clear(&___nl__im__50);
#line 325
c_rt_lib0clear(&___nl__im__51);
#line 325
c_rt_lib0clear(&___nl__im__52);
#line 325
c_rt_lib0clear(&___nl__im__53);
#line 325
c_rt_lib0clear(&___nl__im__54);
#line 325
c_rt_lib0clear(&___nl__im__55);
#line 325
c_rt_lib0clear(&___nl__im__56);
#line 325
c_rt_lib0clear(&___nl__im__63);
#line 325
c_rt_lib0clear(&___nl__im__64);
#line 325
c_rt_lib0clear(&___nl__im__65);
#line 325
c_rt_lib0clear(&___nl__im__83);
#line 325
c_rt_lib0clear(&___nl__im__84);
#line 325
c_rt_lib0clear(&___nl__im__85);
#line 325
//clear ___nl__bool__86;
#line 325
return ___nl__im__88;
#line 327
goto label_912;
#line 327
label_500:
;
#line 327
c_rt_lib0move(&___nl__im__100,___get_global_string_const(1100));
#line 327
___nl__bool__86 = c_rt_lib0eq(___nl__im__85, ___nl__im__100);
#line 327
c_rt_lib0clear(&___nl__im__100);
#line 327
___nl__bool__86 = !___nl__bool__86;
#line 327
if(___nl__bool__86){ goto label_575;}
#line 329
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 329
c_rt_lib0move(&___nl__im__105, pretty_printer_priv0print_val(___nl__im__106));
#line 329
c_rt_lib0clear(&___nl__im__106);
#line 329
c_rt_lib0move(&___nl__im__108,___get_global_string_const(315));
#line 329
c_rt_lib0move(&___nl__im__107, wprinter0build_sim(___nl__im__108));
#line 329
c_rt_lib0clear(&___nl__im__108);
#line 329
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__107));
#line 329
c_rt_lib0clear(&___nl__im__105);
#line 329
c_rt_lib0clear(&___nl__im__107);
#line 329
c_rt_lib0move(&___nl__im__103, wprinter0build_pretty_l(___nl__im__104));
#line 329
c_rt_lib0clear(&___nl__im__104);
#line 330
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 330
c_rt_lib0move(&___nl__im__109, pretty_printer_priv0print_val(___nl__im__110));
#line 330
c_rt_lib0clear(&___nl__im__110);
#line 331
c_rt_lib0move(&___nl__im__112,___get_global_string_const(316));
#line 331
c_rt_lib0move(&___nl__im__111, wprinter0build_sim(___nl__im__112));
#line 331
c_rt_lib0clear(&___nl__im__112);
#line 331
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(3, ___nl__im__103, ___nl__im__109, ___nl__im__111));
#line 331
c_rt_lib0clear(&___nl__im__103);
#line 331
c_rt_lib0clear(&___nl__im__109);
#line 331
c_rt_lib0clear(&___nl__im__111);
#line 331
c_rt_lib0move(&___nl__im__101, wprinter0build_pretty_a(___nl__im__102));
#line 331
c_rt_lib0clear(&___nl__im__102);
#line 331
c_rt_lib0clear(&___nl__im__0);
#line 331
c_rt_lib0clear(&___nl__im__1);
#line 331
//clear ___nl__bool__2;
#line 331
c_rt_lib0clear(&___nl__im__3);
#line 331
//clear ___nl__int__4;
#line 331
c_rt_lib0clear(&___nl__im__5);
#line 331
c_rt_lib0clear(&___nl__im__6);
#line 331
c_rt_lib0clear(&___nl__im__9);
#line 331
c_rt_lib0clear(&___nl__im__10);
#line 331
c_rt_lib0clear(&___nl__im__11);
#line 331
c_rt_lib0clear(&___nl__im__12);
#line 331
c_rt_lib0clear(&___nl__im__13);
#line 331
//clear ___nl__int__14;
#line 331
//clear ___nl__int__15;
#line 331
//clear ___nl__int__16;
#line 331
//clear ___nl__bool__17;
#line 331
c_rt_lib0clear(&___nl__im__18);
#line 331
c_rt_lib0clear(&___nl__im__22);
#line 331
//clear ___nl__bool__23;
#line 331
c_rt_lib0clear(&___nl__im__24);
#line 331
c_rt_lib0clear(&___nl__im__35);
#line 331
//clear ___nl__bool__37;
#line 331
c_rt_lib0clear(&___nl__im__38);
#line 331
c_rt_lib0clear(&___nl__im__39);
#line 331
c_rt_lib0clear(&___nl__im__41);
#line 331
c_rt_lib0clear(&___nl__im__42);
#line 331
c_rt_lib0clear(&___nl__im__47);
#line 331
c_rt_lib0clear(&___nl__im__48);
#line 331
c_rt_lib0clear(&___nl__im__49);
#line 331
c_rt_lib0clear(&___nl__im__50);
#line 331
c_rt_lib0clear(&___nl__im__51);
#line 331
c_rt_lib0clear(&___nl__im__52);
#line 331
c_rt_lib0clear(&___nl__im__53);
#line 331
c_rt_lib0clear(&___nl__im__54);
#line 331
c_rt_lib0clear(&___nl__im__55);
#line 331
c_rt_lib0clear(&___nl__im__56);
#line 331
c_rt_lib0clear(&___nl__im__63);
#line 331
c_rt_lib0clear(&___nl__im__64);
#line 331
c_rt_lib0clear(&___nl__im__65);
#line 331
c_rt_lib0clear(&___nl__im__83);
#line 331
c_rt_lib0clear(&___nl__im__84);
#line 331
c_rt_lib0clear(&___nl__im__85);
#line 331
//clear ___nl__bool__86;
#line 331
c_rt_lib0clear(&___nl__im__88);
#line 331
return ___nl__im__101;
#line 333
goto label_912;
#line 333
label_575:
;
#line 333
c_rt_lib0move(&___nl__im__113,___get_global_string_const(586));
#line 333
___nl__bool__86 = c_rt_lib0eq(___nl__im__85, ___nl__im__113);
#line 333
c_rt_lib0clear(&___nl__im__113);
#line 333
___nl__bool__86 = !___nl__bool__86;
#line 333
if(___nl__bool__86){ goto label_666;}
#line 335
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 335
___nl__bool__115 = pretty_printer_priv0is_to_change_ov(___nl__im__116);
#line 335
c_rt_lib0clear(&___nl__im__116);
#line 335
___nl__bool__115 = !___nl__bool__115;
#line 335
if(___nl__bool__115){ goto label_602;}
#line 337
c_rt_lib0move(&___nl__im__119,___get_global_string_const(465));
#line 337
c_rt_lib0move(&___nl__im__118, wprinter0build_sim(___nl__im__119));
#line 337
c_rt_lib0clear(&___nl__im__119);
#line 338
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 338
c_rt_lib0move(&___nl__im__120, pretty_printer_priv0print_val(___nl__im__121));
#line 338
c_rt_lib0clear(&___nl__im__121);
#line 339
c_rt_lib0move(&___nl__im__123,___get_global_string_const(331));
#line 339
c_rt_lib0move(&___nl__im__122, wprinter0build_sim(___nl__im__123));
#line 339
c_rt_lib0clear(&___nl__im__123);
#line 339
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_mk(3, ___nl__im__118, ___nl__im__120, ___nl__im__122));
#line 339
c_rt_lib0clear(&___nl__im__118);
#line 339
c_rt_lib0clear(&___nl__im__120);
#line 339
c_rt_lib0clear(&___nl__im__122);
#line 339
c_rt_lib0move(&___nl__im__114, wprinter0build_pretty_a(___nl__im__117));
#line 339
c_rt_lib0clear(&___nl__im__117);
#line 341
goto label_607;
#line 341
label_602:
;
#line 342
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 342
c_rt_lib0move(&___nl__im__114, pretty_printer_priv0print_val(___nl__im__124));
#line 342
c_rt_lib0clear(&___nl__im__124);
#line 343
goto label_607;
#line 343
label_607:
;
#line 343
//clear ___nl__bool__115;
#line 344
c_rt_lib0move(&___nl__im__127, wprinter0build_sim(___nl__im__85));
#line 344
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 344
c_rt_lib0move(&___nl__im__128, pretty_printer_priv0print_val(___nl__im__129));
#line 344
c_rt_lib0clear(&___nl__im__129);
#line 344
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_mk(3, ___nl__im__114, ___nl__im__127, ___nl__im__128));
#line 344
c_rt_lib0clear(&___nl__im__127);
#line 344
c_rt_lib0clear(&___nl__im__128);
#line 344
c_rt_lib0move(&___nl__im__125, wprinter0build_pretty_op_l(___nl__im__126));
#line 344
c_rt_lib0clear(&___nl__im__126);
#line 344
c_rt_lib0clear(&___nl__im__0);
#line 344
c_rt_lib0clear(&___nl__im__1);
#line 344
//clear ___nl__bool__2;
#line 344
c_rt_lib0clear(&___nl__im__3);
#line 344
//clear ___nl__int__4;
#line 344
c_rt_lib0clear(&___nl__im__5);
#line 344
c_rt_lib0clear(&___nl__im__6);
#line 344
c_rt_lib0clear(&___nl__im__9);
#line 344
c_rt_lib0clear(&___nl__im__10);
#line 344
c_rt_lib0clear(&___nl__im__11);
#line 344
c_rt_lib0clear(&___nl__im__12);
#line 344
c_rt_lib0clear(&___nl__im__13);
#line 344
//clear ___nl__int__14;
#line 344
//clear ___nl__int__15;
#line 344
//clear ___nl__int__16;
#line 344
//clear ___nl__bool__17;
#line 344
c_rt_lib0clear(&___nl__im__18);
#line 344
c_rt_lib0clear(&___nl__im__22);
#line 344
//clear ___nl__bool__23;
#line 344
c_rt_lib0clear(&___nl__im__24);
#line 344
c_rt_lib0clear(&___nl__im__35);
#line 344
//clear ___nl__bool__37;
#line 344
c_rt_lib0clear(&___nl__im__38);
#line 344
c_rt_lib0clear(&___nl__im__39);
#line 344
c_rt_lib0clear(&___nl__im__41);
#line 344
c_rt_lib0clear(&___nl__im__42);
#line 344
c_rt_lib0clear(&___nl__im__47);
#line 344
c_rt_lib0clear(&___nl__im__48);
#line 344
c_rt_lib0clear(&___nl__im__49);
#line 344
c_rt_lib0clear(&___nl__im__50);
#line 344
c_rt_lib0clear(&___nl__im__51);
#line 344
c_rt_lib0clear(&___nl__im__52);
#line 344
c_rt_lib0clear(&___nl__im__53);
#line 344
c_rt_lib0clear(&___nl__im__54);
#line 344
c_rt_lib0clear(&___nl__im__55);
#line 344
c_rt_lib0clear(&___nl__im__56);
#line 344
c_rt_lib0clear(&___nl__im__63);
#line 344
c_rt_lib0clear(&___nl__im__64);
#line 344
c_rt_lib0clear(&___nl__im__65);
#line 344
c_rt_lib0clear(&___nl__im__83);
#line 344
c_rt_lib0clear(&___nl__im__84);
#line 344
c_rt_lib0clear(&___nl__im__85);
#line 344
//clear ___nl__bool__86;
#line 344
c_rt_lib0clear(&___nl__im__88);
#line 344
c_rt_lib0clear(&___nl__im__101);
#line 344
c_rt_lib0clear(&___nl__im__114);
#line 344
return ___nl__im__125;
#line 345
goto label_912;
#line 345
label_666:
;
#line 345
c_rt_lib0move(&___nl__im__130,___get_global_string_const(1101));
#line 345
___nl__bool__86 = c_rt_lib0eq(___nl__im__85, ___nl__im__130);
#line 345
c_rt_lib0clear(&___nl__im__130);
#line 345
___nl__bool__86 = !___nl__bool__86;
#line 345
if(___nl__bool__86){ goto label_752;}
#line 347
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 347
c_rt_lib0move(&___nl__im__133, pretty_printer_priv0print_val(___nl__im__134));
#line 347
c_rt_lib0clear(&___nl__im__134);
#line 348
c_rt_lib0move(&___nl__im__135, wprinter0get_sep());
#line 349
c_rt_lib0move(&___nl__im__137,___get_global_string_const(1125));
#line 349
c_rt_lib0move(&___nl__im__136, wprinter0build_sim(___nl__im__137));
#line 349
c_rt_lib0clear(&___nl__im__137);
#line 350
c_rt_lib0move(&___nl__im__138, wprinter0get_sep());
#line 351
c_rt_lib0move(&___nl__im__140,___get_global_string_const(538));
#line 351
c_rt_lib0move(&___nl__im__139, wprinter0build_sim(___nl__im__140));
#line 351
c_rt_lib0clear(&___nl__im__140);
#line 352
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 352
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_string_const(229)));
#line 352
c_rt_lib0clear(&___nl__im__144);
#line 352
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 352
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(229)));
#line 352
c_rt_lib0clear(&___nl__im__146);
#line 352
c_rt_lib0move(&___nl__im__142, c_rt_lib0priv_as(___nl__im__145, ___get_global_string_const(1105)));
#line 352
c_rt_lib0clear(&___nl__im__143);
#line 352
c_rt_lib0clear(&___nl__im__145);
#line 352
c_rt_lib0move(&___nl__im__141, wprinter0build_sim(___nl__im__142));
#line 352
c_rt_lib0clear(&___nl__im__142);
#line 352
c_rt_lib0move(&___nl__im__132, c_rt_lib0array_mk(6, ___nl__im__133, ___nl__im__135, ___nl__im__136, ___nl__im__138, ___nl__im__139, ___nl__im__141));
#line 352
c_rt_lib0clear(&___nl__im__133);
#line 352
c_rt_lib0clear(&___nl__im__135);
#line 352
c_rt_lib0clear(&___nl__im__136);
#line 352
c_rt_lib0clear(&___nl__im__138);
#line 352
c_rt_lib0clear(&___nl__im__139);
#line 352
c_rt_lib0clear(&___nl__im__141);
#line 352
c_rt_lib0move(&___nl__im__131, wprinter0build_pretty_op_l(___nl__im__132));
#line 352
c_rt_lib0clear(&___nl__im__132);
#line 352
c_rt_lib0clear(&___nl__im__0);
#line 352
c_rt_lib0clear(&___nl__im__1);
#line 352
//clear ___nl__bool__2;
#line 352
c_rt_lib0clear(&___nl__im__3);
#line 352
//clear ___nl__int__4;
#line 352
c_rt_lib0clear(&___nl__im__5);
#line 352
c_rt_lib0clear(&___nl__im__6);
#line 352
c_rt_lib0clear(&___nl__im__9);
#line 352
c_rt_lib0clear(&___nl__im__10);
#line 352
c_rt_lib0clear(&___nl__im__11);
#line 352
c_rt_lib0clear(&___nl__im__12);
#line 352
c_rt_lib0clear(&___nl__im__13);
#line 352
//clear ___nl__int__14;
#line 352
//clear ___nl__int__15;
#line 352
//clear ___nl__int__16;
#line 352
//clear ___nl__bool__17;
#line 352
c_rt_lib0clear(&___nl__im__18);
#line 352
c_rt_lib0clear(&___nl__im__22);
#line 352
//clear ___nl__bool__23;
#line 352
c_rt_lib0clear(&___nl__im__24);
#line 352
c_rt_lib0clear(&___nl__im__35);
#line 352
//clear ___nl__bool__37;
#line 352
c_rt_lib0clear(&___nl__im__38);
#line 352
c_rt_lib0clear(&___nl__im__39);
#line 352
c_rt_lib0clear(&___nl__im__41);
#line 352
c_rt_lib0clear(&___nl__im__42);
#line 352
c_rt_lib0clear(&___nl__im__47);
#line 352
c_rt_lib0clear(&___nl__im__48);
#line 352
c_rt_lib0clear(&___nl__im__49);
#line 352
c_rt_lib0clear(&___nl__im__50);
#line 352
c_rt_lib0clear(&___nl__im__51);
#line 352
c_rt_lib0clear(&___nl__im__52);
#line 352
c_rt_lib0clear(&___nl__im__53);
#line 352
c_rt_lib0clear(&___nl__im__54);
#line 352
c_rt_lib0clear(&___nl__im__55);
#line 352
c_rt_lib0clear(&___nl__im__56);
#line 352
c_rt_lib0clear(&___nl__im__63);
#line 352
c_rt_lib0clear(&___nl__im__64);
#line 352
c_rt_lib0clear(&___nl__im__65);
#line 352
c_rt_lib0clear(&___nl__im__83);
#line 352
c_rt_lib0clear(&___nl__im__84);
#line 352
c_rt_lib0clear(&___nl__im__85);
#line 352
//clear ___nl__bool__86;
#line 352
c_rt_lib0clear(&___nl__im__88);
#line 352
c_rt_lib0clear(&___nl__im__101);
#line 352
c_rt_lib0clear(&___nl__im__114);
#line 352
c_rt_lib0clear(&___nl__im__125);
#line 352
return ___nl__im__131;
#line 354
goto label_912;
#line 354
label_752:
;
#line 354
c_rt_lib0move(&___nl__im__147,___get_global_string_const(1200));
#line 354
___nl__bool__86 = c_rt_lib0eq(___nl__im__85, ___nl__im__147);
#line 354
c_rt_lib0clear(&___nl__im__147);
#line 354
___nl__bool__86 = !___nl__bool__86;
#line 354
if(___nl__bool__86){ goto label_839;}
#line 356
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 356
c_rt_lib0move(&___nl__im__150, pretty_printer_priv0print_val(___nl__im__151));
#line 356
c_rt_lib0clear(&___nl__im__151);
#line 357
c_rt_lib0move(&___nl__im__152, wprinter0get_sep());
#line 358
c_rt_lib0move(&___nl__im__154,___get_global_string_const(1124));
#line 358
c_rt_lib0move(&___nl__im__153, wprinter0build_sim(___nl__im__154));
#line 358
c_rt_lib0clear(&___nl__im__154);
#line 359
c_rt_lib0move(&___nl__im__155, wprinter0get_sep());
#line 360
c_rt_lib0move(&___nl__im__157,___get_global_string_const(538));
#line 360
c_rt_lib0move(&___nl__im__156, wprinter0build_sim(___nl__im__157));
#line 360
c_rt_lib0clear(&___nl__im__157);
#line 361
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 361
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__161, ___get_global_string_const(229)));
#line 361
c_rt_lib0clear(&___nl__im__161);
#line 361
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 361
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_string_const(229)));
#line 361
c_rt_lib0clear(&___nl__im__163);
#line 361
c_rt_lib0move(&___nl__im__159, c_rt_lib0priv_as(___nl__im__162, ___get_global_string_const(1105)));
#line 361
c_rt_lib0clear(&___nl__im__160);
#line 361
c_rt_lib0clear(&___nl__im__162);
#line 361
c_rt_lib0move(&___nl__im__158, wprinter0build_sim(___nl__im__159));
#line 361
c_rt_lib0clear(&___nl__im__159);
#line 361
c_rt_lib0move(&___nl__im__149, c_rt_lib0array_mk(6, ___nl__im__150, ___nl__im__152, ___nl__im__153, ___nl__im__155, ___nl__im__156, ___nl__im__158));
#line 361
c_rt_lib0clear(&___nl__im__150);
#line 361
c_rt_lib0clear(&___nl__im__152);
#line 361
c_rt_lib0clear(&___nl__im__153);
#line 361
c_rt_lib0clear(&___nl__im__155);
#line 361
c_rt_lib0clear(&___nl__im__156);
#line 361
c_rt_lib0clear(&___nl__im__158);
#line 361
c_rt_lib0move(&___nl__im__148, wprinter0build_pretty_op_l(___nl__im__149));
#line 361
c_rt_lib0clear(&___nl__im__149);
#line 361
c_rt_lib0clear(&___nl__im__0);
#line 361
c_rt_lib0clear(&___nl__im__1);
#line 361
//clear ___nl__bool__2;
#line 361
c_rt_lib0clear(&___nl__im__3);
#line 361
//clear ___nl__int__4;
#line 361
c_rt_lib0clear(&___nl__im__5);
#line 361
c_rt_lib0clear(&___nl__im__6);
#line 361
c_rt_lib0clear(&___nl__im__9);
#line 361
c_rt_lib0clear(&___nl__im__10);
#line 361
c_rt_lib0clear(&___nl__im__11);
#line 361
c_rt_lib0clear(&___nl__im__12);
#line 361
c_rt_lib0clear(&___nl__im__13);
#line 361
//clear ___nl__int__14;
#line 361
//clear ___nl__int__15;
#line 361
//clear ___nl__int__16;
#line 361
//clear ___nl__bool__17;
#line 361
c_rt_lib0clear(&___nl__im__18);
#line 361
c_rt_lib0clear(&___nl__im__22);
#line 361
//clear ___nl__bool__23;
#line 361
c_rt_lib0clear(&___nl__im__24);
#line 361
c_rt_lib0clear(&___nl__im__35);
#line 361
//clear ___nl__bool__37;
#line 361
c_rt_lib0clear(&___nl__im__38);
#line 361
c_rt_lib0clear(&___nl__im__39);
#line 361
c_rt_lib0clear(&___nl__im__41);
#line 361
c_rt_lib0clear(&___nl__im__42);
#line 361
c_rt_lib0clear(&___nl__im__47);
#line 361
c_rt_lib0clear(&___nl__im__48);
#line 361
c_rt_lib0clear(&___nl__im__49);
#line 361
c_rt_lib0clear(&___nl__im__50);
#line 361
c_rt_lib0clear(&___nl__im__51);
#line 361
c_rt_lib0clear(&___nl__im__52);
#line 361
c_rt_lib0clear(&___nl__im__53);
#line 361
c_rt_lib0clear(&___nl__im__54);
#line 361
c_rt_lib0clear(&___nl__im__55);
#line 361
c_rt_lib0clear(&___nl__im__56);
#line 361
c_rt_lib0clear(&___nl__im__63);
#line 361
c_rt_lib0clear(&___nl__im__64);
#line 361
c_rt_lib0clear(&___nl__im__65);
#line 361
c_rt_lib0clear(&___nl__im__83);
#line 361
c_rt_lib0clear(&___nl__im__84);
#line 361
c_rt_lib0clear(&___nl__im__85);
#line 361
//clear ___nl__bool__86;
#line 361
c_rt_lib0clear(&___nl__im__88);
#line 361
c_rt_lib0clear(&___nl__im__101);
#line 361
c_rt_lib0clear(&___nl__im__114);
#line 361
c_rt_lib0clear(&___nl__im__125);
#line 361
c_rt_lib0clear(&___nl__im__131);
#line 361
return ___nl__im__148;
#line 363
goto label_912;
#line 363
label_839:
;
#line 365
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(285)));
#line 365
c_rt_lib0move(&___nl__im__168, pretty_printer_priv0print_val(___nl__im__169));
#line 365
c_rt_lib0clear(&___nl__im__169);
#line 365
c_rt_lib0move(&___nl__im__170, wprinter0get_sep());
#line 365
c_rt_lib0move(&___nl__im__171, wprinter0build_sim(___nl__im__85));
#line 365
c_rt_lib0move(&___nl__im__167, c_rt_lib0array_mk(3, ___nl__im__168, ___nl__im__170, ___nl__im__171));
#line 365
c_rt_lib0clear(&___nl__im__168);
#line 365
c_rt_lib0clear(&___nl__im__170);
#line 365
c_rt_lib0clear(&___nl__im__171);
#line 365
c_rt_lib0move(&___nl__im__166, wprinter0build_pretty_op_l(___nl__im__167));
#line 365
c_rt_lib0clear(&___nl__im__167);
#line 366
c_rt_lib0move(&___nl__im__172, wprinter0get_sep());
#line 367
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(286)));
#line 367
c_rt_lib0move(&___nl__im__173, pretty_printer_priv0print_val(___nl__im__174));
#line 367
c_rt_lib0clear(&___nl__im__174);
#line 367
c_rt_lib0move(&___nl__im__165, c_rt_lib0array_mk(3, ___nl__im__166, ___nl__im__172, ___nl__im__173));
#line 367
c_rt_lib0clear(&___nl__im__166);
#line 367
c_rt_lib0clear(&___nl__im__172);
#line 367
c_rt_lib0clear(&___nl__im__173);
#line 367
c_rt_lib0move(&___nl__im__164, wprinter0build_pretty_op_l(___nl__im__165));
#line 367
c_rt_lib0clear(&___nl__im__165);
#line 367
c_rt_lib0clear(&___nl__im__0);
#line 367
c_rt_lib0clear(&___nl__im__1);
#line 367
//clear ___nl__bool__2;
#line 367
c_rt_lib0clear(&___nl__im__3);
#line 367
//clear ___nl__int__4;
#line 367
c_rt_lib0clear(&___nl__im__5);
#line 367
c_rt_lib0clear(&___nl__im__6);
#line 367
c_rt_lib0clear(&___nl__im__9);
#line 367
c_rt_lib0clear(&___nl__im__10);
#line 367
c_rt_lib0clear(&___nl__im__11);
#line 367
c_rt_lib0clear(&___nl__im__12);
#line 367
c_rt_lib0clear(&___nl__im__13);
#line 367
//clear ___nl__int__14;
#line 367
//clear ___nl__int__15;
#line 367
//clear ___nl__int__16;
#line 367
//clear ___nl__bool__17;
#line 367
c_rt_lib0clear(&___nl__im__18);
#line 367
c_rt_lib0clear(&___nl__im__22);
#line 367
//clear ___nl__bool__23;
#line 367
c_rt_lib0clear(&___nl__im__24);
#line 367
c_rt_lib0clear(&___nl__im__35);
#line 367
//clear ___nl__bool__37;
#line 367
c_rt_lib0clear(&___nl__im__38);
#line 367
c_rt_lib0clear(&___nl__im__39);
#line 367
c_rt_lib0clear(&___nl__im__41);
#line 367
c_rt_lib0clear(&___nl__im__42);
#line 367
c_rt_lib0clear(&___nl__im__47);
#line 367
c_rt_lib0clear(&___nl__im__48);
#line 367
c_rt_lib0clear(&___nl__im__49);
#line 367
c_rt_lib0clear(&___nl__im__50);
#line 367
c_rt_lib0clear(&___nl__im__51);
#line 367
c_rt_lib0clear(&___nl__im__52);
#line 367
c_rt_lib0clear(&___nl__im__53);
#line 367
c_rt_lib0clear(&___nl__im__54);
#line 367
c_rt_lib0clear(&___nl__im__55);
#line 367
c_rt_lib0clear(&___nl__im__56);
#line 367
c_rt_lib0clear(&___nl__im__63);
#line 367
c_rt_lib0clear(&___nl__im__64);
#line 367
c_rt_lib0clear(&___nl__im__65);
#line 367
c_rt_lib0clear(&___nl__im__83);
#line 367
c_rt_lib0clear(&___nl__im__84);
#line 367
c_rt_lib0clear(&___nl__im__85);
#line 367
//clear ___nl__bool__86;
#line 367
c_rt_lib0clear(&___nl__im__88);
#line 367
c_rt_lib0clear(&___nl__im__101);
#line 367
c_rt_lib0clear(&___nl__im__114);
#line 367
c_rt_lib0clear(&___nl__im__125);
#line 367
c_rt_lib0clear(&___nl__im__131);
#line 367
c_rt_lib0clear(&___nl__im__148);
#line 367
return ___nl__im__164;
#line 369
goto label_912;
#line 369
label_912:
;
#line 369
//clear ___nl__bool__86;
#line 369
c_rt_lib0clear(&___nl__im__88);
#line 369
c_rt_lib0clear(&___nl__im__101);
#line 369
c_rt_lib0clear(&___nl__im__114);
#line 369
c_rt_lib0clear(&___nl__im__125);
#line 369
c_rt_lib0clear(&___nl__im__131);
#line 369
c_rt_lib0clear(&___nl__im__148);
#line 369
c_rt_lib0clear(&___nl__im__164);
#line 370
goto label_1797;
#line 370
label_922:
;
#line 370
c_rt_lib0move(&___nl__im__176, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1109)));
#line 370
c_rt_lib0copy(&___nl__im__175, ___nl__im__176);
#line 371
c_rt_lib0move(&___nl__im__179, pretty_printer_priv0print_val(___nl__im__175));
#line 371
c_rt_lib0move(&___nl__im__181,___get_global_string_const(200));
#line 371
c_rt_lib0move(&___nl__im__180, wprinter0build_sim(___nl__im__181));
#line 371
c_rt_lib0clear(&___nl__im__181);
#line 371
c_rt_lib0move(&___nl__im__178, c_rt_lib0array_mk(2, ___nl__im__179, ___nl__im__180));
#line 371
c_rt_lib0clear(&___nl__im__179);
#line 371
c_rt_lib0clear(&___nl__im__180);
#line 371
c_rt_lib0move(&___nl__im__177, wprinter0build_pretty_op_l(___nl__im__178));
#line 371
c_rt_lib0clear(&___nl__im__178);
#line 371
c_rt_lib0clear(&___nl__im__0);
#line 371
c_rt_lib0clear(&___nl__im__1);
#line 371
//clear ___nl__bool__2;
#line 371
c_rt_lib0clear(&___nl__im__3);
#line 371
//clear ___nl__int__4;
#line 371
c_rt_lib0clear(&___nl__im__5);
#line 371
c_rt_lib0clear(&___nl__im__6);
#line 371
c_rt_lib0clear(&___nl__im__9);
#line 371
c_rt_lib0clear(&___nl__im__10);
#line 371
c_rt_lib0clear(&___nl__im__11);
#line 371
c_rt_lib0clear(&___nl__im__12);
#line 371
c_rt_lib0clear(&___nl__im__13);
#line 371
//clear ___nl__int__14;
#line 371
//clear ___nl__int__15;
#line 371
//clear ___nl__int__16;
#line 371
//clear ___nl__bool__17;
#line 371
c_rt_lib0clear(&___nl__im__18);
#line 371
c_rt_lib0clear(&___nl__im__22);
#line 371
//clear ___nl__bool__23;
#line 371
c_rt_lib0clear(&___nl__im__24);
#line 371
c_rt_lib0clear(&___nl__im__35);
#line 371
//clear ___nl__bool__37;
#line 371
c_rt_lib0clear(&___nl__im__38);
#line 371
c_rt_lib0clear(&___nl__im__39);
#line 371
c_rt_lib0clear(&___nl__im__41);
#line 371
c_rt_lib0clear(&___nl__im__42);
#line 371
c_rt_lib0clear(&___nl__im__47);
#line 371
c_rt_lib0clear(&___nl__im__48);
#line 371
c_rt_lib0clear(&___nl__im__49);
#line 371
c_rt_lib0clear(&___nl__im__50);
#line 371
c_rt_lib0clear(&___nl__im__51);
#line 371
c_rt_lib0clear(&___nl__im__52);
#line 371
c_rt_lib0clear(&___nl__im__53);
#line 371
c_rt_lib0clear(&___nl__im__54);
#line 371
c_rt_lib0clear(&___nl__im__55);
#line 371
c_rt_lib0clear(&___nl__im__56);
#line 371
c_rt_lib0clear(&___nl__im__63);
#line 371
c_rt_lib0clear(&___nl__im__64);
#line 371
c_rt_lib0clear(&___nl__im__65);
#line 371
c_rt_lib0clear(&___nl__im__83);
#line 371
c_rt_lib0clear(&___nl__im__84);
#line 371
c_rt_lib0clear(&___nl__im__85);
#line 371
c_rt_lib0clear(&___nl__im__175);
#line 371
c_rt_lib0clear(&___nl__im__176);
#line 371
return ___nl__im__177;
#line 372
goto label_1797;
#line 372
label_980:
;
#line 372
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1108)));
#line 372
c_rt_lib0copy(&___nl__im__182, ___nl__im__183);
#line 373
c_rt_lib0move(&___nl__im__186, pretty_printer_priv0print_val(___nl__im__182));
#line 373
c_rt_lib0move(&___nl__im__188,___get_global_string_const(801));
#line 373
c_rt_lib0move(&___nl__im__187, wprinter0build_sim(___nl__im__188));
#line 373
c_rt_lib0clear(&___nl__im__188);
#line 373
c_rt_lib0move(&___nl__im__185, c_rt_lib0array_mk(2, ___nl__im__186, ___nl__im__187));
#line 373
c_rt_lib0clear(&___nl__im__186);
#line 373
c_rt_lib0clear(&___nl__im__187);
#line 373
c_rt_lib0move(&___nl__im__184, wprinter0build_pretty_op_l(___nl__im__185));
#line 373
c_rt_lib0clear(&___nl__im__185);
#line 373
c_rt_lib0clear(&___nl__im__0);
#line 373
c_rt_lib0clear(&___nl__im__1);
#line 373
//clear ___nl__bool__2;
#line 373
c_rt_lib0clear(&___nl__im__3);
#line 373
//clear ___nl__int__4;
#line 373
c_rt_lib0clear(&___nl__im__5);
#line 373
c_rt_lib0clear(&___nl__im__6);
#line 373
c_rt_lib0clear(&___nl__im__9);
#line 373
c_rt_lib0clear(&___nl__im__10);
#line 373
c_rt_lib0clear(&___nl__im__11);
#line 373
c_rt_lib0clear(&___nl__im__12);
#line 373
c_rt_lib0clear(&___nl__im__13);
#line 373
//clear ___nl__int__14;
#line 373
//clear ___nl__int__15;
#line 373
//clear ___nl__int__16;
#line 373
//clear ___nl__bool__17;
#line 373
c_rt_lib0clear(&___nl__im__18);
#line 373
c_rt_lib0clear(&___nl__im__22);
#line 373
//clear ___nl__bool__23;
#line 373
c_rt_lib0clear(&___nl__im__24);
#line 373
c_rt_lib0clear(&___nl__im__35);
#line 373
//clear ___nl__bool__37;
#line 373
c_rt_lib0clear(&___nl__im__38);
#line 373
c_rt_lib0clear(&___nl__im__39);
#line 373
c_rt_lib0clear(&___nl__im__41);
#line 373
c_rt_lib0clear(&___nl__im__42);
#line 373
c_rt_lib0clear(&___nl__im__47);
#line 373
c_rt_lib0clear(&___nl__im__48);
#line 373
c_rt_lib0clear(&___nl__im__49);
#line 373
c_rt_lib0clear(&___nl__im__50);
#line 373
c_rt_lib0clear(&___nl__im__51);
#line 373
c_rt_lib0clear(&___nl__im__52);
#line 373
c_rt_lib0clear(&___nl__im__53);
#line 373
c_rt_lib0clear(&___nl__im__54);
#line 373
c_rt_lib0clear(&___nl__im__55);
#line 373
c_rt_lib0clear(&___nl__im__56);
#line 373
c_rt_lib0clear(&___nl__im__63);
#line 373
c_rt_lib0clear(&___nl__im__64);
#line 373
c_rt_lib0clear(&___nl__im__65);
#line 373
c_rt_lib0clear(&___nl__im__83);
#line 373
c_rt_lib0clear(&___nl__im__84);
#line 373
c_rt_lib0clear(&___nl__im__85);
#line 373
c_rt_lib0clear(&___nl__im__175);
#line 373
c_rt_lib0clear(&___nl__im__176);
#line 373
c_rt_lib0clear(&___nl__im__177);
#line 373
c_rt_lib0clear(&___nl__im__182);
#line 373
c_rt_lib0clear(&___nl__im__183);
#line 373
return ___nl__im__184;
#line 374
goto label_1797;
#line 374
label_1041:
;
#line 374
c_rt_lib0move(&___nl__im__190, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1106)));
#line 374
c_rt_lib0copy(&___nl__im__189, ___nl__im__190);
#line 375
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__189, ___get_global_string_const(568)));
#line 375
c_rt_lib0move(&___nl__im__192, wprinter0build_sim(___nl__im__193));
#line 375
c_rt_lib0clear(&___nl__im__193);
#line 375
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value_dec(___nl__im__189, ___get_global_string_const(234)));
#line 375
c_rt_lib0move(&___nl__im__194, pretty_printer_priv0print_val(___nl__im__195));
#line 375
c_rt_lib0clear(&___nl__im__195);
#line 375
c_rt_lib0move(&___nl__im__191, wprinter0build_pretty_bind(___nl__im__192, ___nl__im__194));
#line 375
c_rt_lib0clear(&___nl__im__192);
#line 375
c_rt_lib0clear(&___nl__im__194);
#line 375
c_rt_lib0clear(&___nl__im__0);
#line 375
c_rt_lib0clear(&___nl__im__1);
#line 375
//clear ___nl__bool__2;
#line 375
c_rt_lib0clear(&___nl__im__3);
#line 375
//clear ___nl__int__4;
#line 375
c_rt_lib0clear(&___nl__im__5);
#line 375
c_rt_lib0clear(&___nl__im__6);
#line 375
c_rt_lib0clear(&___nl__im__9);
#line 375
c_rt_lib0clear(&___nl__im__10);
#line 375
c_rt_lib0clear(&___nl__im__11);
#line 375
c_rt_lib0clear(&___nl__im__12);
#line 375
c_rt_lib0clear(&___nl__im__13);
#line 375
//clear ___nl__int__14;
#line 375
//clear ___nl__int__15;
#line 375
//clear ___nl__int__16;
#line 375
//clear ___nl__bool__17;
#line 375
c_rt_lib0clear(&___nl__im__18);
#line 375
c_rt_lib0clear(&___nl__im__22);
#line 375
//clear ___nl__bool__23;
#line 375
c_rt_lib0clear(&___nl__im__24);
#line 375
c_rt_lib0clear(&___nl__im__35);
#line 375
//clear ___nl__bool__37;
#line 375
c_rt_lib0clear(&___nl__im__38);
#line 375
c_rt_lib0clear(&___nl__im__39);
#line 375
c_rt_lib0clear(&___nl__im__41);
#line 375
c_rt_lib0clear(&___nl__im__42);
#line 375
c_rt_lib0clear(&___nl__im__47);
#line 375
c_rt_lib0clear(&___nl__im__48);
#line 375
c_rt_lib0clear(&___nl__im__49);
#line 375
c_rt_lib0clear(&___nl__im__50);
#line 375
c_rt_lib0clear(&___nl__im__51);
#line 375
c_rt_lib0clear(&___nl__im__52);
#line 375
c_rt_lib0clear(&___nl__im__53);
#line 375
c_rt_lib0clear(&___nl__im__54);
#line 375
c_rt_lib0clear(&___nl__im__55);
#line 375
c_rt_lib0clear(&___nl__im__56);
#line 375
c_rt_lib0clear(&___nl__im__63);
#line 375
c_rt_lib0clear(&___nl__im__64);
#line 375
c_rt_lib0clear(&___nl__im__65);
#line 375
c_rt_lib0clear(&___nl__im__83);
#line 375
c_rt_lib0clear(&___nl__im__84);
#line 375
c_rt_lib0clear(&___nl__im__85);
#line 375
c_rt_lib0clear(&___nl__im__175);
#line 375
c_rt_lib0clear(&___nl__im__176);
#line 375
c_rt_lib0clear(&___nl__im__177);
#line 375
c_rt_lib0clear(&___nl__im__182);
#line 375
c_rt_lib0clear(&___nl__im__183);
#line 375
c_rt_lib0clear(&___nl__im__184);
#line 375
c_rt_lib0clear(&___nl__im__189);
#line 375
c_rt_lib0clear(&___nl__im__190);
#line 375
return ___nl__im__191;
#line 376
goto label_1797;
#line 376
label_1105:
;
#line 376
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1063)));
#line 376
c_rt_lib0copy(&___nl__im__196, ___nl__im__197);
#line 377
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(175)));
#line 377
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(159)));
#line 377
c_rt_lib0move(&___nl__im__199, pretty_printer_priv0get_fun_label(___nl__im__200, ___nl__im__201));
#line 377
c_rt_lib0clear(&___nl__im__200);
#line 377
c_rt_lib0clear(&___nl__im__201);
#line 377
c_rt_lib0move(&___nl__im__202,___get_global_string_const(465));
#line 377
c_rt_lib0move(&___nl__im__198, c_rt_lib0concat_new(___nl__im__199, ___nl__im__202));
#line 377
c_rt_lib0clear(&___nl__im__199);
#line 377
c_rt_lib0clear(&___nl__im__202);
#line 378
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 378
___nl__int__204 = c_rt_lib0array_len(___nl__im__205);
#line 378
c_rt_lib0clear(&___nl__im__205);
#line 378
___nl__int__206 = 1;
#line 378
___nl__bool__203 = ___nl__int__204 == ___nl__int__206;
#line 378
//clear ___nl__int__204;
#line 378
//clear ___nl__int__206;
#line 378
___nl__bool__203 = !___nl__bool__203;
#line 378
if(___nl__bool__203){ goto label_1209;}
#line 379
c_rt_lib0move(&___nl__im__209, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 379
___nl__int__210 = 0;
#line 379
c_rt_lib0move(&___nl__im__208, c_rt_lib0array_get(___nl__im__209, ___nl__int__210));
#line 379
c_rt_lib0clear(&___nl__im__209);
#line 379
//clear ___nl__int__210;
#line 379
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_get_value_dec(___nl__im__208, ___get_global_string_const(234)));
#line 379
c_rt_lib0clear(&___nl__im__208);
#line 380
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__207, ___get_global_string_const(229)));
#line 380
___nl__bool__211 = c_rt_lib0priv_is(___nl__im__212, ___get_global_string_const(241));
#line 380
c_rt_lib0clear(&___nl__im__212);
#line 380
if(___nl__bool__211){ goto label_1140;}
#line 380
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__207, ___get_global_string_const(229)));
#line 380
___nl__bool__211 = c_rt_lib0priv_is(___nl__im__213, ___get_global_string_const(240));
#line 380
c_rt_lib0clear(&___nl__im__213);
#line 380
label_1140:
;
#line 380
___nl__bool__211 = !___nl__bool__211;
#line 380
if(___nl__bool__211){ goto label_1205;}
#line 381
c_rt_lib0move(&___nl__im__215,___get_global_string_const(331));
#line 381
c_rt_lib0move(&___nl__im__214, pretty_printer_priv0get_compressed_fun_val(___nl__im__207, ___nl__im__198, ___nl__im__215));
#line 381
c_rt_lib0clear(&___nl__im__215);
#line 381
c_rt_lib0clear(&___nl__im__0);
#line 381
c_rt_lib0clear(&___nl__im__1);
#line 381
//clear ___nl__bool__2;
#line 381
c_rt_lib0clear(&___nl__im__3);
#line 381
//clear ___nl__int__4;
#line 381
c_rt_lib0clear(&___nl__im__5);
#line 381
c_rt_lib0clear(&___nl__im__6);
#line 381
c_rt_lib0clear(&___nl__im__9);
#line 381
c_rt_lib0clear(&___nl__im__10);
#line 381
c_rt_lib0clear(&___nl__im__11);
#line 381
c_rt_lib0clear(&___nl__im__12);
#line 381
c_rt_lib0clear(&___nl__im__13);
#line 381
//clear ___nl__int__14;
#line 381
//clear ___nl__int__15;
#line 381
//clear ___nl__int__16;
#line 381
//clear ___nl__bool__17;
#line 381
c_rt_lib0clear(&___nl__im__18);
#line 381
c_rt_lib0clear(&___nl__im__22);
#line 381
//clear ___nl__bool__23;
#line 381
c_rt_lib0clear(&___nl__im__24);
#line 381
c_rt_lib0clear(&___nl__im__35);
#line 381
//clear ___nl__bool__37;
#line 381
c_rt_lib0clear(&___nl__im__38);
#line 381
c_rt_lib0clear(&___nl__im__39);
#line 381
c_rt_lib0clear(&___nl__im__41);
#line 381
c_rt_lib0clear(&___nl__im__42);
#line 381
c_rt_lib0clear(&___nl__im__47);
#line 381
c_rt_lib0clear(&___nl__im__48);
#line 381
c_rt_lib0clear(&___nl__im__49);
#line 381
c_rt_lib0clear(&___nl__im__50);
#line 381
c_rt_lib0clear(&___nl__im__51);
#line 381
c_rt_lib0clear(&___nl__im__52);
#line 381
c_rt_lib0clear(&___nl__im__53);
#line 381
c_rt_lib0clear(&___nl__im__54);
#line 381
c_rt_lib0clear(&___nl__im__55);
#line 381
c_rt_lib0clear(&___nl__im__56);
#line 381
c_rt_lib0clear(&___nl__im__63);
#line 381
c_rt_lib0clear(&___nl__im__64);
#line 381
c_rt_lib0clear(&___nl__im__65);
#line 381
c_rt_lib0clear(&___nl__im__83);
#line 381
c_rt_lib0clear(&___nl__im__84);
#line 381
c_rt_lib0clear(&___nl__im__85);
#line 381
c_rt_lib0clear(&___nl__im__175);
#line 381
c_rt_lib0clear(&___nl__im__176);
#line 381
c_rt_lib0clear(&___nl__im__177);
#line 381
c_rt_lib0clear(&___nl__im__182);
#line 381
c_rt_lib0clear(&___nl__im__183);
#line 381
c_rt_lib0clear(&___nl__im__184);
#line 381
c_rt_lib0clear(&___nl__im__189);
#line 381
c_rt_lib0clear(&___nl__im__190);
#line 381
c_rt_lib0clear(&___nl__im__191);
#line 381
c_rt_lib0clear(&___nl__im__196);
#line 381
c_rt_lib0clear(&___nl__im__197);
#line 381
c_rt_lib0clear(&___nl__im__198);
#line 381
//clear ___nl__bool__203;
#line 381
c_rt_lib0clear(&___nl__im__207);
#line 381
//clear ___nl__bool__211;
#line 381
return ___nl__im__214;
#line 382
goto label_1205;
#line 382
label_1205:
;
#line 382
//clear ___nl__bool__211;
#line 382
c_rt_lib0clear(&___nl__im__214);
#line 383
goto label_1326;
#line 383
label_1209:
;
#line 383
___nl__bool__203 = pretty_printer_priv0is_to_change_ov(___nl__im__0);
#line 383
___nl__bool__203 = !___nl__bool__203;
#line 383
if(___nl__bool__203){ goto label_1326;}
#line 385
c_rt_lib0move(&___nl__im__221, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 385
___nl__int__222 = 0;
#line 385
c_rt_lib0move(&___nl__im__220, c_rt_lib0array_get(___nl__im__221, ___nl__int__222));
#line 385
c_rt_lib0clear(&___nl__im__221);
#line 385
//clear ___nl__int__222;
#line 385
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__220, ___get_global_string_const(234)));
#line 385
c_rt_lib0clear(&___nl__im__220);
#line 385
c_rt_lib0move(&___nl__im__218, pretty_printer_priv0print_val(___nl__im__219));
#line 385
c_rt_lib0clear(&___nl__im__219);
#line 386
c_rt_lib0move(&___nl__im__223, wprinter0get_sep());
#line 387
c_rt_lib0move(&___nl__im__225, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(175)));
#line 387
c_rt_lib0move(&___nl__im__224, wprinter0build_sim(___nl__im__225));
#line 387
c_rt_lib0clear(&___nl__im__225);
#line 388
c_rt_lib0move(&___nl__im__226, wprinter0get_sep());
#line 389
c_rt_lib0move(&___nl__im__229,___get_global_string_const(538));
#line 389
c_rt_lib0move(&___nl__im__236, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 389
___nl__int__237 = 1;
#line 389
c_rt_lib0move(&___nl__im__235, c_rt_lib0array_get(___nl__im__236, ___nl__int__237));
#line 389
c_rt_lib0clear(&___nl__im__236);
#line 389
//clear ___nl__int__237;
#line 389
c_rt_lib0move(&___nl__im__234, c_rt_lib0hash_get_value_dec(___nl__im__235, ___get_global_string_const(234)));
#line 389
c_rt_lib0clear(&___nl__im__235);
#line 389
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__234, ___get_global_string_const(229)));
#line 389
c_rt_lib0clear(&___nl__im__234);
#line 389
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 389
___nl__int__242 = 1;
#line 389
c_rt_lib0move(&___nl__im__240, c_rt_lib0array_get(___nl__im__241, ___nl__int__242));
#line 389
c_rt_lib0clear(&___nl__im__241);
#line 389
//clear ___nl__int__242;
#line 389
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__240, ___get_global_string_const(234)));
#line 389
c_rt_lib0clear(&___nl__im__240);
#line 389
c_rt_lib0move(&___nl__im__238, c_rt_lib0hash_get_value_dec(___nl__im__239, ___get_global_string_const(229)));
#line 389
c_rt_lib0clear(&___nl__im__239);
#line 389
c_rt_lib0move(&___nl__im__232, c_rt_lib0priv_as(___nl__im__238, ___get_global_string_const(414)));
#line 389
c_rt_lib0clear(&___nl__im__233);
#line 389
c_rt_lib0clear(&___nl__im__238);
#line 389
c_rt_lib0move(&___nl__im__231, c_rt_lib0hash_get_value_dec(___nl__im__232, ___get_global_string_const(134)));
#line 389
c_rt_lib0clear(&___nl__im__232);
#line 389
___nl__int__243 = 0;
#line 389
c_rt_lib0move(&___nl__im__230, c_rt_lib0array_get(___nl__im__231, ___nl__int__243));
#line 389
c_rt_lib0clear(&___nl__im__231);
#line 389
//clear ___nl__int__243;
#line 389
c_rt_lib0move(&___nl__im__228, c_rt_lib0concat_new(___nl__im__229, ___nl__im__230));
#line 389
c_rt_lib0clear(&___nl__im__229);
#line 389
c_rt_lib0clear(&___nl__im__230);
#line 389
c_rt_lib0move(&___nl__im__227, wprinter0build_sim(___nl__im__228));
#line 389
c_rt_lib0clear(&___nl__im__228);
#line 389
c_rt_lib0move(&___nl__im__217, c_rt_lib0array_mk(5, ___nl__im__218, ___nl__im__223, ___nl__im__224, ___nl__im__226, ___nl__im__227));
#line 389
c_rt_lib0clear(&___nl__im__218);
#line 389
c_rt_lib0clear(&___nl__im__223);
#line 389
c_rt_lib0clear(&___nl__im__224);
#line 389
c_rt_lib0clear(&___nl__im__226);
#line 389
c_rt_lib0clear(&___nl__im__227);
#line 389
c_rt_lib0move(&___nl__im__216, wprinter0build_pretty_op_l(___nl__im__217));
#line 389
c_rt_lib0clear(&___nl__im__217);
#line 389
c_rt_lib0clear(&___nl__im__0);
#line 389
c_rt_lib0clear(&___nl__im__1);
#line 389
//clear ___nl__bool__2;
#line 389
c_rt_lib0clear(&___nl__im__3);
#line 389
//clear ___nl__int__4;
#line 389
c_rt_lib0clear(&___nl__im__5);
#line 389
c_rt_lib0clear(&___nl__im__6);
#line 389
c_rt_lib0clear(&___nl__im__9);
#line 389
c_rt_lib0clear(&___nl__im__10);
#line 389
c_rt_lib0clear(&___nl__im__11);
#line 389
c_rt_lib0clear(&___nl__im__12);
#line 389
c_rt_lib0clear(&___nl__im__13);
#line 389
//clear ___nl__int__14;
#line 389
//clear ___nl__int__15;
#line 389
//clear ___nl__int__16;
#line 389
//clear ___nl__bool__17;
#line 389
c_rt_lib0clear(&___nl__im__18);
#line 389
c_rt_lib0clear(&___nl__im__22);
#line 389
//clear ___nl__bool__23;
#line 389
c_rt_lib0clear(&___nl__im__24);
#line 389
c_rt_lib0clear(&___nl__im__35);
#line 389
//clear ___nl__bool__37;
#line 389
c_rt_lib0clear(&___nl__im__38);
#line 389
c_rt_lib0clear(&___nl__im__39);
#line 389
c_rt_lib0clear(&___nl__im__41);
#line 389
c_rt_lib0clear(&___nl__im__42);
#line 389
c_rt_lib0clear(&___nl__im__47);
#line 389
c_rt_lib0clear(&___nl__im__48);
#line 389
c_rt_lib0clear(&___nl__im__49);
#line 389
c_rt_lib0clear(&___nl__im__50);
#line 389
c_rt_lib0clear(&___nl__im__51);
#line 389
c_rt_lib0clear(&___nl__im__52);
#line 389
c_rt_lib0clear(&___nl__im__53);
#line 389
c_rt_lib0clear(&___nl__im__54);
#line 389
c_rt_lib0clear(&___nl__im__55);
#line 389
c_rt_lib0clear(&___nl__im__56);
#line 389
c_rt_lib0clear(&___nl__im__63);
#line 389
c_rt_lib0clear(&___nl__im__64);
#line 389
c_rt_lib0clear(&___nl__im__65);
#line 389
c_rt_lib0clear(&___nl__im__83);
#line 389
c_rt_lib0clear(&___nl__im__84);
#line 389
c_rt_lib0clear(&___nl__im__85);
#line 389
c_rt_lib0clear(&___nl__im__175);
#line 389
c_rt_lib0clear(&___nl__im__176);
#line 389
c_rt_lib0clear(&___nl__im__177);
#line 389
c_rt_lib0clear(&___nl__im__182);
#line 389
c_rt_lib0clear(&___nl__im__183);
#line 389
c_rt_lib0clear(&___nl__im__184);
#line 389
c_rt_lib0clear(&___nl__im__189);
#line 389
c_rt_lib0clear(&___nl__im__190);
#line 389
c_rt_lib0clear(&___nl__im__191);
#line 389
c_rt_lib0clear(&___nl__im__196);
#line 389
c_rt_lib0clear(&___nl__im__197);
#line 389
c_rt_lib0clear(&___nl__im__198);
#line 389
//clear ___nl__bool__203;
#line 389
c_rt_lib0clear(&___nl__im__207);
#line 389
return ___nl__im__216;
#line 391
goto label_1326;
#line 391
label_1326:
;
#line 391
//clear ___nl__bool__203;
#line 391
c_rt_lib0clear(&___nl__im__207);
#line 391
c_rt_lib0clear(&___nl__im__216);
#line 392
c_rt_lib0move(&___nl__im__245, wprinter0build_sim(___nl__im__198));
#line 392
c_rt_lib0move(&___nl__im__244, c_rt_lib0array_mk(1, ___nl__im__245));
#line 392
c_rt_lib0clear(&___nl__im__245);
#line 393
c_rt_lib0move(&___nl__im__247, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 393
c_rt_lib0move(&___nl__im__246, pretty_printer_priv0join_print_fun_arg(___nl__im__247));
#line 393
c_rt_lib0clear(&___nl__im__247);
#line 393
c_rt_lib0delete(array0append(&___nl__im__244, ___nl__im__246));
#line 393
c_rt_lib0clear(&___nl__im__246);
#line 394
c_rt_lib0move(&___nl__im__249,___get_global_string_const(331));
#line 394
c_rt_lib0move(&___nl__im__248, wprinter0build_sim(___nl__im__249));
#line 394
c_rt_lib0clear(&___nl__im__249);
#line 394
c_rt_lib0delete(array0push(&___nl__im__244, ___nl__im__248));
#line 394
c_rt_lib0clear(&___nl__im__248);
#line 397
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 397
___nl__int__252 = pretty_printer_priv0count_structs(___nl__im__253);
#line 397
c_rt_lib0clear(&___nl__im__253);
#line 397
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 397
___nl__int__254 = c_rt_lib0array_len(___nl__im__255);
#line 397
c_rt_lib0clear(&___nl__im__255);
#line 397
___nl__bool__250 = ___nl__int__252 == ___nl__int__254;
#line 397
//clear ___nl__int__252;
#line 397
//clear ___nl__int__254;
#line 397
___nl__bool__251 = !___nl__bool__250;
#line 397
if(___nl__bool__251){ goto label_1361;}
#line 397
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 397
___nl__int__256 = c_rt_lib0array_len(___nl__im__257);
#line 397
c_rt_lib0clear(&___nl__im__257);
#line 397
___nl__int__258 = 0;
#line 397
___nl__bool__250 = ___nl__int__256 > ___nl__int__258;
#line 397
//clear ___nl__int__256;
#line 397
//clear ___nl__int__258;
#line 397
label_1361:
;
#line 397
//clear ___nl__bool__251;
#line 397
if(___nl__bool__250){ goto label_1386;}
#line 398
c_rt_lib0move(&___nl__im__261, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 398
___nl__int__260 = c_rt_lib0array_len(___nl__im__261);
#line 398
c_rt_lib0clear(&___nl__im__261);
#line 398
___nl__int__262 = 1;
#line 398
___nl__bool__250 = ___nl__int__260 == ___nl__int__262;
#line 398
//clear ___nl__int__260;
#line 398
//clear ___nl__int__262;
#line 398
___nl__bool__259 = !___nl__bool__250;
#line 398
if(___nl__bool__259){ goto label_1384;}
#line 398
c_rt_lib0move(&___nl__im__266, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(276)));
#line 398
___nl__int__267 = 0;
#line 398
c_rt_lib0move(&___nl__im__265, c_rt_lib0array_get(___nl__im__266, ___nl__int__267));
#line 398
c_rt_lib0clear(&___nl__im__266);
#line 398
//clear ___nl__int__267;
#line 398
c_rt_lib0move(&___nl__im__264, c_rt_lib0hash_get_value_dec(___nl__im__265, ___get_global_string_const(234)));
#line 398
c_rt_lib0clear(&___nl__im__265);
#line 398
c_rt_lib0move(&___nl__im__263, c_rt_lib0hash_get_value_dec(___nl__im__264, ___get_global_string_const(229)));
#line 398
c_rt_lib0clear(&___nl__im__264);
#line 398
___nl__bool__250 = c_rt_lib0priv_is(___nl__im__263, ___get_global_string_const(1063));
#line 398
c_rt_lib0clear(&___nl__im__263);
#line 398
label_1384:
;
#line 398
//clear ___nl__bool__259;
#line 398
label_1386:
;
#line 398
___nl__bool__250 = !___nl__bool__250;
#line 398
if(___nl__bool__250){ goto label_1448;}
#line 395
c_rt_lib0move(&___nl__im__268, wprinter0build_pretty_op_l(___nl__im__244));
#line 395
c_rt_lib0clear(&___nl__im__0);
#line 395
c_rt_lib0clear(&___nl__im__1);
#line 395
//clear ___nl__bool__2;
#line 395
c_rt_lib0clear(&___nl__im__3);
#line 395
//clear ___nl__int__4;
#line 395
c_rt_lib0clear(&___nl__im__5);
#line 395
c_rt_lib0clear(&___nl__im__6);
#line 395
c_rt_lib0clear(&___nl__im__9);
#line 395
c_rt_lib0clear(&___nl__im__10);
#line 395
c_rt_lib0clear(&___nl__im__11);
#line 395
c_rt_lib0clear(&___nl__im__12);
#line 395
c_rt_lib0clear(&___nl__im__13);
#line 395
//clear ___nl__int__14;
#line 395
//clear ___nl__int__15;
#line 395
//clear ___nl__int__16;
#line 395
//clear ___nl__bool__17;
#line 395
c_rt_lib0clear(&___nl__im__18);
#line 395
c_rt_lib0clear(&___nl__im__22);
#line 395
//clear ___nl__bool__23;
#line 395
c_rt_lib0clear(&___nl__im__24);
#line 395
c_rt_lib0clear(&___nl__im__35);
#line 395
//clear ___nl__bool__37;
#line 395
c_rt_lib0clear(&___nl__im__38);
#line 395
c_rt_lib0clear(&___nl__im__39);
#line 395
c_rt_lib0clear(&___nl__im__41);
#line 395
c_rt_lib0clear(&___nl__im__42);
#line 395
c_rt_lib0clear(&___nl__im__47);
#line 395
c_rt_lib0clear(&___nl__im__48);
#line 395
c_rt_lib0clear(&___nl__im__49);
#line 395
c_rt_lib0clear(&___nl__im__50);
#line 395
c_rt_lib0clear(&___nl__im__51);
#line 395
c_rt_lib0clear(&___nl__im__52);
#line 395
c_rt_lib0clear(&___nl__im__53);
#line 395
c_rt_lib0clear(&___nl__im__54);
#line 395
c_rt_lib0clear(&___nl__im__55);
#line 395
c_rt_lib0clear(&___nl__im__56);
#line 395
c_rt_lib0clear(&___nl__im__63);
#line 395
c_rt_lib0clear(&___nl__im__64);
#line 395
c_rt_lib0clear(&___nl__im__65);
#line 395
c_rt_lib0clear(&___nl__im__83);
#line 395
c_rt_lib0clear(&___nl__im__84);
#line 395
c_rt_lib0clear(&___nl__im__85);
#line 395
c_rt_lib0clear(&___nl__im__175);
#line 395
c_rt_lib0clear(&___nl__im__176);
#line 395
c_rt_lib0clear(&___nl__im__177);
#line 395
c_rt_lib0clear(&___nl__im__182);
#line 395
c_rt_lib0clear(&___nl__im__183);
#line 395
c_rt_lib0clear(&___nl__im__184);
#line 395
c_rt_lib0clear(&___nl__im__189);
#line 395
c_rt_lib0clear(&___nl__im__190);
#line 395
c_rt_lib0clear(&___nl__im__191);
#line 395
c_rt_lib0clear(&___nl__im__196);
#line 395
c_rt_lib0clear(&___nl__im__197);
#line 395
c_rt_lib0clear(&___nl__im__198);
#line 395
c_rt_lib0clear(&___nl__im__244);
#line 395
//clear ___nl__bool__250;
#line 395
return ___nl__im__268;
#line 395
goto label_1448;
#line 395
label_1448:
;
#line 395
//clear ___nl__bool__250;
#line 395
c_rt_lib0clear(&___nl__im__268);
#line 399
c_rt_lib0move(&___nl__im__269, wprinter0build_pretty_l(___nl__im__244));
#line 399
c_rt_lib0clear(&___nl__im__0);
#line 399
c_rt_lib0clear(&___nl__im__1);
#line 399
//clear ___nl__bool__2;
#line 399
c_rt_lib0clear(&___nl__im__3);
#line 399
//clear ___nl__int__4;
#line 399
c_rt_lib0clear(&___nl__im__5);
#line 399
c_rt_lib0clear(&___nl__im__6);
#line 399
c_rt_lib0clear(&___nl__im__9);
#line 399
c_rt_lib0clear(&___nl__im__10);
#line 399
c_rt_lib0clear(&___nl__im__11);
#line 399
c_rt_lib0clear(&___nl__im__12);
#line 399
c_rt_lib0clear(&___nl__im__13);
#line 399
//clear ___nl__int__14;
#line 399
//clear ___nl__int__15;
#line 399
//clear ___nl__int__16;
#line 399
//clear ___nl__bool__17;
#line 399
c_rt_lib0clear(&___nl__im__18);
#line 399
c_rt_lib0clear(&___nl__im__22);
#line 399
//clear ___nl__bool__23;
#line 399
c_rt_lib0clear(&___nl__im__24);
#line 399
c_rt_lib0clear(&___nl__im__35);
#line 399
//clear ___nl__bool__37;
#line 399
c_rt_lib0clear(&___nl__im__38);
#line 399
c_rt_lib0clear(&___nl__im__39);
#line 399
c_rt_lib0clear(&___nl__im__41);
#line 399
c_rt_lib0clear(&___nl__im__42);
#line 399
c_rt_lib0clear(&___nl__im__47);
#line 399
c_rt_lib0clear(&___nl__im__48);
#line 399
c_rt_lib0clear(&___nl__im__49);
#line 399
c_rt_lib0clear(&___nl__im__50);
#line 399
c_rt_lib0clear(&___nl__im__51);
#line 399
c_rt_lib0clear(&___nl__im__52);
#line 399
c_rt_lib0clear(&___nl__im__53);
#line 399
c_rt_lib0clear(&___nl__im__54);
#line 399
c_rt_lib0clear(&___nl__im__55);
#line 399
c_rt_lib0clear(&___nl__im__56);
#line 399
c_rt_lib0clear(&___nl__im__63);
#line 399
c_rt_lib0clear(&___nl__im__64);
#line 399
c_rt_lib0clear(&___nl__im__65);
#line 399
c_rt_lib0clear(&___nl__im__83);
#line 399
c_rt_lib0clear(&___nl__im__84);
#line 399
c_rt_lib0clear(&___nl__im__85);
#line 399
c_rt_lib0clear(&___nl__im__175);
#line 399
c_rt_lib0clear(&___nl__im__176);
#line 399
c_rt_lib0clear(&___nl__im__177);
#line 399
c_rt_lib0clear(&___nl__im__182);
#line 399
c_rt_lib0clear(&___nl__im__183);
#line 399
c_rt_lib0clear(&___nl__im__184);
#line 399
c_rt_lib0clear(&___nl__im__189);
#line 399
c_rt_lib0clear(&___nl__im__190);
#line 399
c_rt_lib0clear(&___nl__im__191);
#line 399
c_rt_lib0clear(&___nl__im__196);
#line 399
c_rt_lib0clear(&___nl__im__197);
#line 399
c_rt_lib0clear(&___nl__im__198);
#line 399
c_rt_lib0clear(&___nl__im__244);
#line 399
return ___nl__im__269;
#line 400
goto label_1797;
#line 400
label_1509:
;
#line 401
___nl__int__271 = 0;
#line 401
c_rt_lib0move(&___nl__im__272, c_rt_lib0int_new(___nl__int__271));
#line 401
c_rt_lib0move(&___nl__im__274,___get_global_string_const(36));
#line 401
c_rt_lib0move(&___nl__im__273, c_rt_lib0ov_mk_arg(___get_global_string_const(1290), ___nl__im__274));
#line 401
c_rt_lib0clear(&___nl__im__274);
#line 401
c_rt_lib0move(&___nl__im__270, c_rt_lib0hash_mk(2, ___get_global_string_const(294), ___nl__im__272, ___get_global_string_const(1291), ___nl__im__273));
#line 401
//clear ___nl__int__271;
#line 401
c_rt_lib0clear(&___nl__im__272);
#line 401
c_rt_lib0clear(&___nl__im__273);
#line 401
c_rt_lib0clear(&___nl__im__0);
#line 401
c_rt_lib0clear(&___nl__im__1);
#line 401
//clear ___nl__bool__2;
#line 401
c_rt_lib0clear(&___nl__im__3);
#line 401
//clear ___nl__int__4;
#line 401
c_rt_lib0clear(&___nl__im__5);
#line 401
c_rt_lib0clear(&___nl__im__6);
#line 401
c_rt_lib0clear(&___nl__im__9);
#line 401
c_rt_lib0clear(&___nl__im__10);
#line 401
c_rt_lib0clear(&___nl__im__11);
#line 401
c_rt_lib0clear(&___nl__im__12);
#line 401
c_rt_lib0clear(&___nl__im__13);
#line 401
//clear ___nl__int__14;
#line 401
//clear ___nl__int__15;
#line 401
//clear ___nl__int__16;
#line 401
//clear ___nl__bool__17;
#line 401
c_rt_lib0clear(&___nl__im__18);
#line 401
c_rt_lib0clear(&___nl__im__22);
#line 401
//clear ___nl__bool__23;
#line 401
c_rt_lib0clear(&___nl__im__24);
#line 401
c_rt_lib0clear(&___nl__im__35);
#line 401
//clear ___nl__bool__37;
#line 401
c_rt_lib0clear(&___nl__im__38);
#line 401
c_rt_lib0clear(&___nl__im__39);
#line 401
c_rt_lib0clear(&___nl__im__41);
#line 401
c_rt_lib0clear(&___nl__im__42);
#line 401
c_rt_lib0clear(&___nl__im__47);
#line 401
c_rt_lib0clear(&___nl__im__48);
#line 401
c_rt_lib0clear(&___nl__im__49);
#line 401
c_rt_lib0clear(&___nl__im__50);
#line 401
c_rt_lib0clear(&___nl__im__51);
#line 401
c_rt_lib0clear(&___nl__im__52);
#line 401
c_rt_lib0clear(&___nl__im__53);
#line 401
c_rt_lib0clear(&___nl__im__54);
#line 401
c_rt_lib0clear(&___nl__im__55);
#line 401
c_rt_lib0clear(&___nl__im__56);
#line 401
c_rt_lib0clear(&___nl__im__63);
#line 401
c_rt_lib0clear(&___nl__im__64);
#line 401
c_rt_lib0clear(&___nl__im__65);
#line 401
c_rt_lib0clear(&___nl__im__83);
#line 401
c_rt_lib0clear(&___nl__im__84);
#line 401
c_rt_lib0clear(&___nl__im__85);
#line 401
c_rt_lib0clear(&___nl__im__175);
#line 401
c_rt_lib0clear(&___nl__im__176);
#line 401
c_rt_lib0clear(&___nl__im__177);
#line 401
c_rt_lib0clear(&___nl__im__182);
#line 401
c_rt_lib0clear(&___nl__im__183);
#line 401
c_rt_lib0clear(&___nl__im__184);
#line 401
c_rt_lib0clear(&___nl__im__189);
#line 401
c_rt_lib0clear(&___nl__im__190);
#line 401
c_rt_lib0clear(&___nl__im__191);
#line 401
c_rt_lib0clear(&___nl__im__196);
#line 401
c_rt_lib0clear(&___nl__im__197);
#line 401
c_rt_lib0clear(&___nl__im__198);
#line 401
c_rt_lib0clear(&___nl__im__244);
#line 401
c_rt_lib0clear(&___nl__im__269);
#line 401
return ___nl__im__270;
#line 402
goto label_1797;
#line 402
label_1577:
;
#line 402
c_rt_lib0move(&___nl__im__276, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(240)));
#line 402
c_rt_lib0copy(&___nl__im__275, ___nl__im__276);
#line 403
c_rt_lib0move(&___nl__im__278,___get_global_string_const(36));
#line 403
c_rt_lib0move(&___nl__im__279,___get_global_string_const(36));
#line 403
c_rt_lib0move(&___nl__im__277, pretty_printer_priv0get_compressed_fun_val(___nl__im__0, ___nl__im__278, ___nl__im__279));
#line 403
c_rt_lib0clear(&___nl__im__278);
#line 403
c_rt_lib0clear(&___nl__im__279);
#line 403
c_rt_lib0clear(&___nl__im__0);
#line 403
c_rt_lib0clear(&___nl__im__1);
#line 403
//clear ___nl__bool__2;
#line 403
c_rt_lib0clear(&___nl__im__3);
#line 403
//clear ___nl__int__4;
#line 403
c_rt_lib0clear(&___nl__im__5);
#line 403
c_rt_lib0clear(&___nl__im__6);
#line 403
c_rt_lib0clear(&___nl__im__9);
#line 403
c_rt_lib0clear(&___nl__im__10);
#line 403
c_rt_lib0clear(&___nl__im__11);
#line 403
c_rt_lib0clear(&___nl__im__12);
#line 403
c_rt_lib0clear(&___nl__im__13);
#line 403
//clear ___nl__int__14;
#line 403
//clear ___nl__int__15;
#line 403
//clear ___nl__int__16;
#line 403
//clear ___nl__bool__17;
#line 403
c_rt_lib0clear(&___nl__im__18);
#line 403
c_rt_lib0clear(&___nl__im__22);
#line 403
//clear ___nl__bool__23;
#line 403
c_rt_lib0clear(&___nl__im__24);
#line 403
c_rt_lib0clear(&___nl__im__35);
#line 403
//clear ___nl__bool__37;
#line 403
c_rt_lib0clear(&___nl__im__38);
#line 403
c_rt_lib0clear(&___nl__im__39);
#line 403
c_rt_lib0clear(&___nl__im__41);
#line 403
c_rt_lib0clear(&___nl__im__42);
#line 403
c_rt_lib0clear(&___nl__im__47);
#line 403
c_rt_lib0clear(&___nl__im__48);
#line 403
c_rt_lib0clear(&___nl__im__49);
#line 403
c_rt_lib0clear(&___nl__im__50);
#line 403
c_rt_lib0clear(&___nl__im__51);
#line 403
c_rt_lib0clear(&___nl__im__52);
#line 403
c_rt_lib0clear(&___nl__im__53);
#line 403
c_rt_lib0clear(&___nl__im__54);
#line 403
c_rt_lib0clear(&___nl__im__55);
#line 403
c_rt_lib0clear(&___nl__im__56);
#line 403
c_rt_lib0clear(&___nl__im__63);
#line 403
c_rt_lib0clear(&___nl__im__64);
#line 403
c_rt_lib0clear(&___nl__im__65);
#line 403
c_rt_lib0clear(&___nl__im__83);
#line 403
c_rt_lib0clear(&___nl__im__84);
#line 403
c_rt_lib0clear(&___nl__im__85);
#line 403
c_rt_lib0clear(&___nl__im__175);
#line 403
c_rt_lib0clear(&___nl__im__176);
#line 403
c_rt_lib0clear(&___nl__im__177);
#line 403
c_rt_lib0clear(&___nl__im__182);
#line 403
c_rt_lib0clear(&___nl__im__183);
#line 403
c_rt_lib0clear(&___nl__im__184);
#line 403
c_rt_lib0clear(&___nl__im__189);
#line 403
c_rt_lib0clear(&___nl__im__190);
#line 403
c_rt_lib0clear(&___nl__im__191);
#line 403
c_rt_lib0clear(&___nl__im__196);
#line 403
c_rt_lib0clear(&___nl__im__197);
#line 403
c_rt_lib0clear(&___nl__im__198);
#line 403
c_rt_lib0clear(&___nl__im__244);
#line 403
c_rt_lib0clear(&___nl__im__269);
#line 403
c_rt_lib0clear(&___nl__im__270);
#line 403
c_rt_lib0clear(&___nl__im__275);
#line 403
c_rt_lib0clear(&___nl__im__276);
#line 403
return ___nl__im__277;
#line 404
goto label_1797;
#line 404
label_1646:
;
#line 404
c_rt_lib0move(&___nl__im__281, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(241)));
#line 404
c_rt_lib0copy(&___nl__im__280, ___nl__im__281);
#line 405
c_rt_lib0move(&___nl__im__283, pretty_printer_priv0join_print_hash_elem(___nl__im__280));
#line 405
c_rt_lib0move(&___nl__im__284,___get_global_string_const(315));
#line 405
c_rt_lib0move(&___nl__im__285,___get_global_string_const(316));
#line 405
c_rt_lib0move(&___nl__im__282, wprinter0build_pretty_arr_decl(___nl__im__283, ___nl__im__284, ___nl__im__285));
#line 405
c_rt_lib0clear(&___nl__im__283);
#line 405
c_rt_lib0clear(&___nl__im__284);
#line 405
c_rt_lib0clear(&___nl__im__285);
#line 405
c_rt_lib0clear(&___nl__im__0);
#line 405
c_rt_lib0clear(&___nl__im__1);
#line 405
//clear ___nl__bool__2;
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
//clear ___nl__int__4;
#line 405
c_rt_lib0clear(&___nl__im__5);
#line 405
c_rt_lib0clear(&___nl__im__6);
#line 405
c_rt_lib0clear(&___nl__im__9);
#line 405
c_rt_lib0clear(&___nl__im__10);
#line 405
c_rt_lib0clear(&___nl__im__11);
#line 405
c_rt_lib0clear(&___nl__im__12);
#line 405
c_rt_lib0clear(&___nl__im__13);
#line 405
//clear ___nl__int__14;
#line 405
//clear ___nl__int__15;
#line 405
//clear ___nl__int__16;
#line 405
//clear ___nl__bool__17;
#line 405
c_rt_lib0clear(&___nl__im__18);
#line 405
c_rt_lib0clear(&___nl__im__22);
#line 405
//clear ___nl__bool__23;
#line 405
c_rt_lib0clear(&___nl__im__24);
#line 405
c_rt_lib0clear(&___nl__im__35);
#line 405
//clear ___nl__bool__37;
#line 405
c_rt_lib0clear(&___nl__im__38);
#line 405
c_rt_lib0clear(&___nl__im__39);
#line 405
c_rt_lib0clear(&___nl__im__41);
#line 405
c_rt_lib0clear(&___nl__im__42);
#line 405
c_rt_lib0clear(&___nl__im__47);
#line 405
c_rt_lib0clear(&___nl__im__48);
#line 405
c_rt_lib0clear(&___nl__im__49);
#line 405
c_rt_lib0clear(&___nl__im__50);
#line 405
c_rt_lib0clear(&___nl__im__51);
#line 405
c_rt_lib0clear(&___nl__im__52);
#line 405
c_rt_lib0clear(&___nl__im__53);
#line 405
c_rt_lib0clear(&___nl__im__54);
#line 405
c_rt_lib0clear(&___nl__im__55);
#line 405
c_rt_lib0clear(&___nl__im__56);
#line 405
c_rt_lib0clear(&___nl__im__63);
#line 405
c_rt_lib0clear(&___nl__im__64);
#line 405
c_rt_lib0clear(&___nl__im__65);
#line 405
c_rt_lib0clear(&___nl__im__83);
#line 405
c_rt_lib0clear(&___nl__im__84);
#line 405
c_rt_lib0clear(&___nl__im__85);
#line 405
c_rt_lib0clear(&___nl__im__175);
#line 405
c_rt_lib0clear(&___nl__im__176);
#line 405
c_rt_lib0clear(&___nl__im__177);
#line 405
c_rt_lib0clear(&___nl__im__182);
#line 405
c_rt_lib0clear(&___nl__im__183);
#line 405
c_rt_lib0clear(&___nl__im__184);
#line 405
c_rt_lib0clear(&___nl__im__189);
#line 405
c_rt_lib0clear(&___nl__im__190);
#line 405
c_rt_lib0clear(&___nl__im__191);
#line 405
c_rt_lib0clear(&___nl__im__196);
#line 405
c_rt_lib0clear(&___nl__im__197);
#line 405
c_rt_lib0clear(&___nl__im__198);
#line 405
c_rt_lib0clear(&___nl__im__244);
#line 405
c_rt_lib0clear(&___nl__im__269);
#line 405
c_rt_lib0clear(&___nl__im__270);
#line 405
c_rt_lib0clear(&___nl__im__275);
#line 405
c_rt_lib0clear(&___nl__im__276);
#line 405
c_rt_lib0clear(&___nl__im__277);
#line 405
c_rt_lib0clear(&___nl__im__280);
#line 405
c_rt_lib0clear(&___nl__im__281);
#line 405
return ___nl__im__282;
#line 406
goto label_1797;
#line 406
label_1720:
;
#line 406
c_rt_lib0move(&___nl__im__287, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1107)));
#line 406
c_rt_lib0copy(&___nl__im__286, ___nl__im__287);
#line 407
c_rt_lib0move(&___nl__im__290, c_rt_lib0hash_get_value_dec(___nl__im__286, ___get_global_string_const(175)));
#line 407
c_rt_lib0move(&___nl__im__291, c_rt_lib0hash_get_value_dec(___nl__im__286, ___get_global_string_const(159)));
#line 407
c_rt_lib0move(&___nl__im__289, pretty_printer_priv0get_fun_label(___nl__im__290, ___nl__im__291));
#line 407
c_rt_lib0clear(&___nl__im__290);
#line 407
c_rt_lib0clear(&___nl__im__291);
#line 407
c_rt_lib0move(&___nl__im__288, wprinter0build_sim(___nl__im__289));
#line 407
c_rt_lib0clear(&___nl__im__289);
#line 407
c_rt_lib0clear(&___nl__im__0);
#line 407
c_rt_lib0clear(&___nl__im__1);
#line 407
//clear ___nl__bool__2;
#line 407
c_rt_lib0clear(&___nl__im__3);
#line 407
//clear ___nl__int__4;
#line 407
c_rt_lib0clear(&___nl__im__5);
#line 407
c_rt_lib0clear(&___nl__im__6);
#line 407
c_rt_lib0clear(&___nl__im__9);
#line 407
c_rt_lib0clear(&___nl__im__10);
#line 407
c_rt_lib0clear(&___nl__im__11);
#line 407
c_rt_lib0clear(&___nl__im__12);
#line 407
c_rt_lib0clear(&___nl__im__13);
#line 407
//clear ___nl__int__14;
#line 407
//clear ___nl__int__15;
#line 407
//clear ___nl__int__16;
#line 407
//clear ___nl__bool__17;
#line 407
c_rt_lib0clear(&___nl__im__18);
#line 407
c_rt_lib0clear(&___nl__im__22);
#line 407
//clear ___nl__bool__23;
#line 407
c_rt_lib0clear(&___nl__im__24);
#line 407
c_rt_lib0clear(&___nl__im__35);
#line 407
//clear ___nl__bool__37;
#line 407
c_rt_lib0clear(&___nl__im__38);
#line 407
c_rt_lib0clear(&___nl__im__39);
#line 407
c_rt_lib0clear(&___nl__im__41);
#line 407
c_rt_lib0clear(&___nl__im__42);
#line 407
c_rt_lib0clear(&___nl__im__47);
#line 407
c_rt_lib0clear(&___nl__im__48);
#line 407
c_rt_lib0clear(&___nl__im__49);
#line 407
c_rt_lib0clear(&___nl__im__50);
#line 407
c_rt_lib0clear(&___nl__im__51);
#line 407
c_rt_lib0clear(&___nl__im__52);
#line 407
c_rt_lib0clear(&___nl__im__53);
#line 407
c_rt_lib0clear(&___nl__im__54);
#line 407
c_rt_lib0clear(&___nl__im__55);
#line 407
c_rt_lib0clear(&___nl__im__56);
#line 407
c_rt_lib0clear(&___nl__im__63);
#line 407
c_rt_lib0clear(&___nl__im__64);
#line 407
c_rt_lib0clear(&___nl__im__65);
#line 407
c_rt_lib0clear(&___nl__im__83);
#line 407
c_rt_lib0clear(&___nl__im__84);
#line 407
c_rt_lib0clear(&___nl__im__85);
#line 407
c_rt_lib0clear(&___nl__im__175);
#line 407
c_rt_lib0clear(&___nl__im__176);
#line 407
c_rt_lib0clear(&___nl__im__177);
#line 407
c_rt_lib0clear(&___nl__im__182);
#line 407
c_rt_lib0clear(&___nl__im__183);
#line 407
c_rt_lib0clear(&___nl__im__184);
#line 407
c_rt_lib0clear(&___nl__im__189);
#line 407
c_rt_lib0clear(&___nl__im__190);
#line 407
c_rt_lib0clear(&___nl__im__191);
#line 407
c_rt_lib0clear(&___nl__im__196);
#line 407
c_rt_lib0clear(&___nl__im__197);
#line 407
c_rt_lib0clear(&___nl__im__198);
#line 407
c_rt_lib0clear(&___nl__im__244);
#line 407
c_rt_lib0clear(&___nl__im__269);
#line 407
c_rt_lib0clear(&___nl__im__270);
#line 407
c_rt_lib0clear(&___nl__im__275);
#line 407
c_rt_lib0clear(&___nl__im__276);
#line 407
c_rt_lib0clear(&___nl__im__277);
#line 407
c_rt_lib0clear(&___nl__im__280);
#line 407
c_rt_lib0clear(&___nl__im__281);
#line 407
c_rt_lib0clear(&___nl__im__282);
#line 407
c_rt_lib0clear(&___nl__im__286);
#line 407
c_rt_lib0clear(&___nl__im__287);
#line 407
return ___nl__im__288;
#line 408
goto label_1797;
#line 408
label_1797:
;
return NULL;

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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
#line 414
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 415
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 416
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 416
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__10));
#line 416
c_rt_lib0clear(&___nl__im__10);
#line 416
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(3, ___nl__im__7, ___nl__im__8, ___nl__im__9));
#line 416
c_rt_lib0clear(&___nl__im__7);
#line 416
c_rt_lib0clear(&___nl__im__8);
#line 416
c_rt_lib0clear(&___nl__im__9);
#line 418
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 418
___nl__int__13 = 0;
#line 418
___nl__bool__11 = ___nl__int__12 > ___nl__int__13;
#line 418
//clear ___nl__int__12;
#line 418
//clear ___nl__int__13;
#line 418
___nl__bool__11 = !___nl__bool__11;
#line 418
if(___nl__bool__11){ goto label_22;}
#line 418
c_rt_lib0move(&___nl__im__15,___get_global_string_const(477));
#line 418
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 418
c_rt_lib0clear(&___nl__im__15);
#line 418
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__14));
#line 418
c_rt_lib0clear(&___nl__im__14);
#line 418
goto label_22;
#line 418
label_22:
;
#line 418
//clear ___nl__bool__11;
#line 419
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 419
___nl__int__18 = 0;
#line 419
___nl__bool__16 = ___nl__int__17 > ___nl__int__18;
#line 419
//clear ___nl__int__17;
#line 419
//clear ___nl__int__18;
#line 419
___nl__bool__16 = !___nl__bool__16;
#line 419
if(___nl__bool__16){ goto label_37;}
#line 419
c_rt_lib0move(&___nl__im__20,___get_global_string_const(465));
#line 419
c_rt_lib0move(&___nl__im__19, wprinter0build_sim(___nl__im__20));
#line 419
c_rt_lib0clear(&___nl__im__20);
#line 419
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__19));
#line 419
c_rt_lib0clear(&___nl__im__19);
#line 419
goto label_37;
#line 419
label_37:
;
#line 419
//clear ___nl__bool__16;
#line 420
c_rt_lib0move(&___nl__im__21, pretty_printer_priv0print_val(___nl__im__4));
#line 420
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__21));
#line 420
c_rt_lib0clear(&___nl__im__21);
#line 421
___nl__int__23 = c_rt_lib0array_len(___nl__im__3);
#line 421
___nl__int__24 = 0;
#line 421
___nl__bool__22 = ___nl__int__23 > ___nl__int__24;
#line 421
//clear ___nl__int__23;
#line 421
//clear ___nl__int__24;
#line 421
___nl__bool__22 = !___nl__bool__22;
#line 421
if(___nl__bool__22){ goto label_55;}
#line 421
c_rt_lib0move(&___nl__im__26,___get_global_string_const(331));
#line 421
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 421
c_rt_lib0clear(&___nl__im__26);
#line 421
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__25));
#line 421
c_rt_lib0clear(&___nl__im__25);
#line 421
goto label_55;
#line 421
label_55:
;
#line 421
//clear ___nl__bool__22;
#line 423
c_rt_lib0move(&___nl__im__29, pretty_printer_priv0print_simple_statement(___nl__im__2));
#line 424
c_rt_lib0move(&___nl__im__30, wprinter0get_sep());
#line 425
c_rt_lib0move(&___nl__im__31, wprinter0build_pretty_op_l(___nl__im__6));
#line 425
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(3, ___nl__im__29, ___nl__im__30, ___nl__im__31));
#line 425
c_rt_lib0clear(&___nl__im__29);
#line 425
c_rt_lib0clear(&___nl__im__30);
#line 425
c_rt_lib0clear(&___nl__im__31);
#line 425
c_rt_lib0move(&___nl__im__27, wprinter0build_pretty_a(___nl__im__28));
#line 425
c_rt_lib0clear(&___nl__im__28);
#line 425
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__27, ___nl__int__5));
#line 425
c_rt_lib0clear(&___nl__im__27);
#line 427
c_rt_lib0move(&___nl__im__32,___get_global_string_const(450));
#line 427
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__32));
#line 427
c_rt_lib0clear(&___nl__im__32);
#line 427
c_rt_lib0clear(&___nl__im__1);
#line 427
c_rt_lib0clear(&___nl__im__2);
#line 427
c_rt_lib0clear(&___nl__im__3);
#line 427
c_rt_lib0clear(&___nl__im__4);
#line 427
//clear ___nl__int__5;
#line 427
c_rt_lib0clear(&___nl__im__6);
#line 427
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
#line 432
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 432
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 432
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 432
c_rt_lib0clear(&___nl__im__7);
#line 432
c_rt_lib0clear(&___nl__im__8);
#line 433
c_rt_lib0move(&___nl__im__9, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 433
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__9));
#line 433
c_rt_lib0clear(&___nl__im__9);
#line 434
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 434
___nl__int__12 = 0;
#line 434
___nl__bool__10 = ___nl__int__11 > ___nl__int__12;
#line 434
//clear ___nl__int__11;
#line 434
//clear ___nl__int__12;
#line 434
___nl__bool__10 = !___nl__bool__10;
#line 434
if(___nl__bool__10){ goto label_21;}
#line 434
c_rt_lib0move(&___nl__im__14,___get_global_string_const(477));
#line 434
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 434
c_rt_lib0clear(&___nl__im__14);
#line 434
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__13));
#line 434
c_rt_lib0clear(&___nl__im__13);
#line 434
goto label_21;
#line 434
label_21:
;
#line 434
//clear ___nl__bool__10;
#line 435
c_rt_lib0move(&___nl__im__16,___get_global_string_const(465));
#line 435
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 435
c_rt_lib0clear(&___nl__im__16);
#line 435
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__15));
#line 435
c_rt_lib0clear(&___nl__im__15);
#line 436
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_val(___nl__im__4));
#line 437
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(1291)));
#line 437
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(134));
#line 437
c_rt_lib0clear(&___nl__im__19);
#line 437
___nl__bool__18 = !___nl__bool__18;
#line 437
if(___nl__bool__18){ goto label_44;}
#line 438
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(1291)));
#line 438
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(1291)));
#line 438
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__23, ___get_global_string_const(134)));
#line 438
c_rt_lib0clear(&___nl__im__22);
#line 438
c_rt_lib0clear(&___nl__im__23);
#line 438
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(134)));
#line 438
c_rt_lib0clear(&___nl__im__21);
#line 438
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__20));
#line 438
c_rt_lib0clear(&___nl__im__20);
#line 439
goto label_47;
#line 439
label_44:
;
#line 440
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__17));
#line 441
goto label_47;
#line 441
label_47:
;
#line 441
//clear ___nl__bool__18;
#line 442
c_rt_lib0move(&___nl__im__25,___get_global_string_const(331));
#line 442
c_rt_lib0move(&___nl__im__24, wprinter0build_sim(___nl__im__25));
#line 442
c_rt_lib0clear(&___nl__im__25);
#line 442
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__24));
#line 442
c_rt_lib0clear(&___nl__im__24);
#line 443
c_rt_lib0move(&___nl__im__26, wprinter0build_pretty_l(___nl__im__6));
#line 443
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__26, ___nl__int__5));
#line 443
c_rt_lib0clear(&___nl__im__26);
#line 444
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__2, ___nl__int__5));
#line 444
c_rt_lib0clear(&___nl__im__1);
#line 444
c_rt_lib0clear(&___nl__im__2);
#line 444
c_rt_lib0clear(&___nl__im__3);
#line 444
c_rt_lib0clear(&___nl__im__4);
#line 444
//clear ___nl__int__5;
#line 444
c_rt_lib0clear(&___nl__im__6);
#line 444
c_rt_lib0clear(&___nl__im__17);
#line 444
return NULL;

}

ImmT  pretty_printer_priv0print_loop_or_mod(wprinter0state_t0type* ___ref___im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2,nast0cmd_t0type ___nl__im__3,ImmT  ___nl__im__4,nast0value_t0type ___nl__im__5,INT  ___nl__int__6) {
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
c_rt_lib0arg_val(___nl__im__5);
pretty_printer_priv0__const__init();
bool  ___nl__bool__7 = false;
#line 449
___nl__bool__7 = ___nl__bool__1;
#line 449
___nl__bool__7 = !___nl__bool__7;
#line 449
if(___nl__bool__7){ goto label_5;}
#line 450
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 451
goto label_8;
#line 451
label_5:
;
#line 452
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 453
goto label_8;
#line 453
label_8:
;
#line 453
//clear ___nl__bool__7;
#line 453
//clear ___nl__bool__1;
#line 453
c_rt_lib0clear(&___nl__im__2);
#line 453
c_rt_lib0clear(&___nl__im__3);
#line 453
c_rt_lib0clear(&___nl__im__4);
#line 453
c_rt_lib0clear(&___nl__im__5);
#line 453
//clear ___nl__int__6;
#line 453
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
#line 457
c_rt_lib0move(&___nl__im__3, wprinter0build_sim(___nl__im__1));
#line 457
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__3));
#line 457
c_rt_lib0clear(&___nl__im__3);
#line 458
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(732));
#line 458
if(___nl__bool__4){ goto label_12;}
#line 460
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1098));
#line 460
if(___nl__bool__4){ goto label_23;}
#line 462
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1097));
#line 462
if(___nl__bool__4){ goto label_34;}
#line 462
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 462
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__0));
#line 462
nl_die_arg(___nl__im__5);
#line 458
label_12:
;
#line 458
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(732)));
#line 458
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 459
c_rt_lib0move(&___nl__im__9, wprinter0get_sep());
#line 459
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0print_var_decl(___nl__im__6));
#line 459
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__10));
#line 459
c_rt_lib0clear(&___nl__im__9);
#line 459
c_rt_lib0clear(&___nl__im__10);
#line 459
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__8));
#line 459
c_rt_lib0clear(&___nl__im__8);
#line 460
goto label_59;
#line 460
label_23:
;
#line 460
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1098)));
#line 460
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 461
c_rt_lib0move(&___nl__im__14, wprinter0get_sep());
#line 461
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_val(___nl__im__11));
#line 461
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__15));
#line 461
c_rt_lib0clear(&___nl__im__14);
#line 461
c_rt_lib0clear(&___nl__im__15);
#line 461
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__13));
#line 461
c_rt_lib0clear(&___nl__im__13);
#line 462
goto label_59;
#line 462
label_34:
;
#line 462
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1097)));
#line 462
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 464
c_rt_lib0move(&___nl__im__19, wprinter0get_sep());
#line 465
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(285)));
#line 465
c_rt_lib0move(&___nl__im__20, pretty_printer_priv0print_val(___nl__im__21));
#line 465
c_rt_lib0clear(&___nl__im__21);
#line 466
c_rt_lib0move(&___nl__im__22, wprinter0get_sep());
#line 467
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(568)));
#line 467
c_rt_lib0move(&___nl__im__23, wprinter0build_sim(___nl__im__24));
#line 467
c_rt_lib0clear(&___nl__im__24);
#line 468
c_rt_lib0move(&___nl__im__25, wprinter0get_sep());
#line 469
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(286)));
#line 469
c_rt_lib0move(&___nl__im__26, pretty_printer_priv0print_val(___nl__im__27));
#line 469
c_rt_lib0clear(&___nl__im__27);
#line 469
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(6, ___nl__im__19, ___nl__im__20, ___nl__im__22, ___nl__im__23, ___nl__im__25, ___nl__im__26));
#line 469
c_rt_lib0clear(&___nl__im__19);
#line 469
c_rt_lib0clear(&___nl__im__20);
#line 469
c_rt_lib0clear(&___nl__im__22);
#line 469
c_rt_lib0clear(&___nl__im__23);
#line 469
c_rt_lib0clear(&___nl__im__25);
#line 469
c_rt_lib0clear(&___nl__im__26);
#line 469
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__18));
#line 469
c_rt_lib0clear(&___nl__im__18);
#line 471
goto label_59;
#line 471
label_59:
;
#line 472
c_rt_lib0move(&___nl__im__28, wprinter0build_pretty_l(___nl__im__2));
#line 472
c_rt_lib0clear(&___nl__im__0);
#line 472
c_rt_lib0clear(&___nl__im__1);
#line 472
c_rt_lib0clear(&___nl__im__2);
#line 472
//clear ___nl__bool__4;
#line 472
c_rt_lib0clear(&___nl__im__5);
#line 472
c_rt_lib0clear(&___nl__im__6);
#line 472
c_rt_lib0clear(&___nl__im__7);
#line 472
c_rt_lib0clear(&___nl__im__11);
#line 472
c_rt_lib0clear(&___nl__im__12);
#line 472
c_rt_lib0clear(&___nl__im__16);
#line 472
c_rt_lib0clear(&___nl__im__17);
#line 472
return ___nl__im__28;
return NULL;

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
#line 476
c_rt_lib0move(&___nl__im__3,___get_global_string_const(257));
#line 476
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 476
c_rt_lib0clear(&___nl__im__3);
#line 476
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 476
c_rt_lib0clear(&___nl__im__2);
#line 477
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 477
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1083));
#line 477
c_rt_lib0clear(&___nl__im__5);
#line 477
___nl__bool__4 = !___nl__bool__4;
#line 477
___nl__bool__4 = !___nl__bool__4;
#line 477
if(___nl__bool__4){ goto label_19;}
#line 478
c_rt_lib0move(&___nl__im__7, wprinter0get_sep());
#line 478
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_val(___nl__im__0));
#line 478
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 478
c_rt_lib0clear(&___nl__im__7);
#line 478
c_rt_lib0clear(&___nl__im__8);
#line 478
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__6));
#line 478
c_rt_lib0clear(&___nl__im__6);
#line 479
goto label_19;
#line 479
label_19:
;
#line 479
//clear ___nl__bool__4;
#line 480
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__1));
#line 480
c_rt_lib0clear(&___nl__im__0);
#line 480
c_rt_lib0clear(&___nl__im__1);
#line 480
return ___nl__im__9;
return NULL;

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
#line 484
c_rt_lib0move(&___nl__im__1, pretty_printer_priv0print_val(___nl__im__0));
#line 485
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1291)));
#line 485
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(134));
#line 485
c_rt_lib0clear(&___nl__im__3);
#line 485
___nl__bool__2 = !___nl__bool__2;
#line 485
if(___nl__bool__2){ goto label_16;}
#line 486
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1291)));
#line 486
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1291)));
#line 486
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(134)));
#line 486
c_rt_lib0clear(&___nl__im__6);
#line 486
c_rt_lib0clear(&___nl__im__7);
#line 486
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(134)));
#line 486
c_rt_lib0clear(&___nl__im__5);
#line 486
c_rt_lib0move(&___nl__im__1, wprinter0build_pretty_l(___nl__im__4));
#line 486
c_rt_lib0clear(&___nl__im__4);
#line 487
goto label_16;
#line 487
label_16:
;
#line 487
//clear ___nl__bool__2;
#line 488
c_rt_lib0clear(&___nl__im__0);
#line 488
return ___nl__im__1;
return NULL;

}

ImmT pretty_printer_priv0print_break(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(1);
}
ImmT pretty_printer_priv0print_break0cal() {
pretty_printer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 492
c_rt_lib0move(&___nl__im__1,___get_global_string_const(1078));
#line 492
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 492
c_rt_lib0clear(&___nl__im__1);
#line 492
return ___nl__im__0;
return NULL;

}

ImmT pretty_printer_priv0print_continue(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(2);
}
ImmT pretty_printer_priv0print_continue0cal() {
pretty_printer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 496
c_rt_lib0move(&___nl__im__1,___get_global_string_const(1079));
#line 496
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 496
c_rt_lib0clear(&___nl__im__1);
#line 496
return ___nl__im__0;
return NULL;

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
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 500
c_rt_lib0move(&___nl__im__3,___get_global_string_const(258));
#line 500
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 500
c_rt_lib0clear(&___nl__im__3);
#line 500
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 500
c_rt_lib0clear(&___nl__im__2);
#line 506
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 506
___nl__int__6 = 0;
#line 506
___nl__bool__4 = ___nl__int__5 > ___nl__int__6;
#line 506
//clear ___nl__int__5;
#line 506
//clear ___nl__int__6;
#line 506
___nl__bool__4 = !___nl__bool__4;
#line 506
if(___nl__bool__4){ goto label_28;}
#line 502
c_rt_lib0move(&___nl__im__9,___get_global_string_const(465));
#line 502
c_rt_lib0move(&___nl__im__8, wprinter0build_sim(___nl__im__9));
#line 502
c_rt_lib0clear(&___nl__im__9);
#line 503
c_rt_lib0move(&___nl__im__11, pretty_printer_priv0join_print_val(___nl__im__0));
#line 503
c_rt_lib0move(&___nl__im__10, wprinter0build_pretty_l(___nl__im__11));
#line 503
c_rt_lib0clear(&___nl__im__11);
#line 504
c_rt_lib0move(&___nl__im__13,___get_global_string_const(331));
#line 504
c_rt_lib0move(&___nl__im__12, wprinter0build_sim(___nl__im__13));
#line 504
c_rt_lib0clear(&___nl__im__13);
#line 504
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(3, ___nl__im__8, ___nl__im__10, ___nl__im__12));
#line 504
c_rt_lib0clear(&___nl__im__8);
#line 504
c_rt_lib0clear(&___nl__im__10);
#line 504
c_rt_lib0clear(&___nl__im__12);
#line 504
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__7));
#line 504
c_rt_lib0clear(&___nl__im__7);
#line 504
goto label_28;
#line 504
label_28:
;
#line 504
//clear ___nl__bool__4;
#line 507
c_rt_lib0move(&___nl__im__14, wprinter0build_pretty_a(___nl__im__1));
#line 507
c_rt_lib0clear(&___nl__im__0);
#line 507
c_rt_lib0clear(&___nl__im__1);
#line 507
return ___nl__im__14;
return NULL;

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
#line 511
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 511
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(229));
#line 511
c_rt_lib0clear(&___nl__im__2);
#line 511
___nl__bool__1 = !___nl__bool__1;
#line 511
if(___nl__bool__1){ goto label_16;}
#line 512
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 512
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 512
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(229)));
#line 512
c_rt_lib0clear(&___nl__im__5);
#line 512
c_rt_lib0clear(&___nl__im__6);
#line 512
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0print_sim_value(___nl__im__4));
#line 512
c_rt_lib0clear(&___nl__im__4);
#line 512
c_rt_lib0clear(&___nl__im__0);
#line 512
//clear ___nl__bool__1;
#line 512
return ___nl__im__3;
#line 513
goto label_135;
#line 513
label_16:
;
#line 513
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 513
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(257));
#line 513
c_rt_lib0clear(&___nl__im__7);
#line 513
___nl__bool__1 = !___nl__bool__1;
#line 513
if(___nl__bool__1){ goto label_34;}
#line 514
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 514
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 514
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(257)));
#line 514
c_rt_lib0clear(&___nl__im__10);
#line 514
c_rt_lib0clear(&___nl__im__11);
#line 514
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_return(___nl__im__9));
#line 514
c_rt_lib0clear(&___nl__im__9);
#line 514
c_rt_lib0clear(&___nl__im__0);
#line 514
//clear ___nl__bool__1;
#line 514
c_rt_lib0clear(&___nl__im__3);
#line 514
return ___nl__im__8;
#line 515
goto label_135;
#line 515
label_34:
;
#line 515
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 515
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(1078));
#line 515
c_rt_lib0clear(&___nl__im__12);
#line 515
___nl__bool__1 = !___nl__bool__1;
#line 515
if(___nl__bool__1){ goto label_47;}
#line 516
c_rt_lib0move(&___nl__im__13, pretty_printer_priv0print_break());
#line 516
c_rt_lib0clear(&___nl__im__0);
#line 516
//clear ___nl__bool__1;
#line 516
c_rt_lib0clear(&___nl__im__3);
#line 516
c_rt_lib0clear(&___nl__im__8);
#line 516
return ___nl__im__13;
#line 517
goto label_135;
#line 517
label_47:
;
#line 517
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 517
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1079));
#line 517
c_rt_lib0clear(&___nl__im__14);
#line 517
___nl__bool__1 = !___nl__bool__1;
#line 517
if(___nl__bool__1){ goto label_61;}
#line 518
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_continue());
#line 518
c_rt_lib0clear(&___nl__im__0);
#line 518
//clear ___nl__bool__1;
#line 518
c_rt_lib0clear(&___nl__im__3);
#line 518
c_rt_lib0clear(&___nl__im__8);
#line 518
c_rt_lib0clear(&___nl__im__13);
#line 518
return ___nl__im__15;
#line 519
goto label_135;
#line 519
label_61:
;
#line 519
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 519
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(258));
#line 519
c_rt_lib0clear(&___nl__im__16);
#line 519
___nl__bool__1 = !___nl__bool__1;
#line 519
if(___nl__bool__1){ goto label_82;}
#line 520
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 520
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 520
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(258)));
#line 520
c_rt_lib0clear(&___nl__im__19);
#line 520
c_rt_lib0clear(&___nl__im__20);
#line 520
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_die(___nl__im__18));
#line 520
c_rt_lib0clear(&___nl__im__18);
#line 520
c_rt_lib0clear(&___nl__im__0);
#line 520
//clear ___nl__bool__1;
#line 520
c_rt_lib0clear(&___nl__im__3);
#line 520
c_rt_lib0clear(&___nl__im__8);
#line 520
c_rt_lib0clear(&___nl__im__13);
#line 520
c_rt_lib0clear(&___nl__im__15);
#line 520
return ___nl__im__17;
#line 521
goto label_135;
#line 521
label_82:
;
#line 521
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 521
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(1082));
#line 521
c_rt_lib0clear(&___nl__im__21);
#line 521
___nl__bool__1 = !___nl__bool__1;
#line 521
if(___nl__bool__1){ goto label_106;}
#line 522
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 522
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 522
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(1082)));
#line 522
c_rt_lib0clear(&___nl__im__24);
#line 522
c_rt_lib0clear(&___nl__im__25);
#line 522
c_rt_lib0move(&___nl__im__26,___get_global_string_const(1082));
#line 522
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_try_ensure(___nl__im__23, ___nl__im__26));
#line 522
c_rt_lib0clear(&___nl__im__23);
#line 522
c_rt_lib0clear(&___nl__im__26);
#line 522
c_rt_lib0clear(&___nl__im__0);
#line 522
//clear ___nl__bool__1;
#line 522
c_rt_lib0clear(&___nl__im__3);
#line 522
c_rt_lib0clear(&___nl__im__8);
#line 522
c_rt_lib0clear(&___nl__im__13);
#line 522
c_rt_lib0clear(&___nl__im__15);
#line 522
c_rt_lib0clear(&___nl__im__17);
#line 522
return ___nl__im__22;
#line 523
goto label_135;
#line 523
label_106:
;
#line 523
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 523
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(185));
#line 523
c_rt_lib0clear(&___nl__im__27);
#line 523
___nl__bool__1 = !___nl__bool__1;
#line 523
if(___nl__bool__1){ goto label_131;}
#line 524
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 524
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 524
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(185)));
#line 524
c_rt_lib0clear(&___nl__im__30);
#line 524
c_rt_lib0clear(&___nl__im__31);
#line 524
c_rt_lib0move(&___nl__im__32,___get_global_string_const(185));
#line 524
c_rt_lib0move(&___nl__im__28, pretty_printer_priv0print_try_ensure(___nl__im__29, ___nl__im__32));
#line 524
c_rt_lib0clear(&___nl__im__29);
#line 524
c_rt_lib0clear(&___nl__im__32);
#line 524
c_rt_lib0clear(&___nl__im__0);
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
return ___nl__im__28;
#line 525
goto label_135;
#line 525
label_131:
;
#line 526
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(1, ___nl__im__0));
#line 526
nl_die_arg(___nl__im__33);
#line 527
goto label_135;
#line 527
label_135:
;
#line 527
//clear ___nl__bool__1;
#line 527
c_rt_lib0clear(&___nl__im__3);
#line 527
c_rt_lib0clear(&___nl__im__8);
#line 527
c_rt_lib0clear(&___nl__im__13);
#line 527
c_rt_lib0clear(&___nl__im__15);
#line 527
c_rt_lib0clear(&___nl__im__17);
#line 527
c_rt_lib0clear(&___nl__im__22);
#line 527
c_rt_lib0clear(&___nl__im__28);
#line 527
c_rt_lib0clear(&___nl__im__33);
return NULL;

}

ImmT  pretty_printer_priv0flush_sim_statement(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 531
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__1, ___nl__int__2));
#line 532
c_rt_lib0move(&___nl__im__3,___get_global_string_const(450));
#line 532
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__3));
#line 532
c_rt_lib0clear(&___nl__im__3);
#line 532
c_rt_lib0clear(&___nl__im__1);
#line 532
//clear ___nl__int__2;
#line 532
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
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
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
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
bool  ___nl__bool__71 = false;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
INT  ___nl__int__76 = 0;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
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
INT  ___nl__int__98 = 0;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
INT  ___nl__int__106 = 0;
INT  ___nl__int__107 = 0;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
bool  ___nl__bool__130 = false;
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
#line 536
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(237)));
#line 536
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1070));
#line 536
if(___nl__bool__4){ goto label_44;}
#line 546
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1075));
#line 546
if(___nl__bool__4){ goto label_99;}
#line 548
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1071));
#line 548
if(___nl__bool__4){ goto label_116;}
#line 567
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1081));
#line 567
if(___nl__bool__4){ goto label_175;}
#line 574
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1083));
#line 574
if(___nl__bool__4){ goto label_221;}
#line 576
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1080));
#line 576
if(___nl__bool__4){ goto label_226;}
#line 587
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1072));
#line 587
if(___nl__bool__4){ goto label_275;}
#line 589
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1073));
#line 589
if(___nl__bool__4){ goto label_294;}
#line 592
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1074));
#line 592
if(___nl__bool__4){ goto label_315;}
#line 594
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(167));
#line 594
if(___nl__bool__4){ goto label_334;}
#line 597
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1076));
#line 597
if(___nl__bool__4){ goto label_342;}
#line 599
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1077));
#line 599
if(___nl__bool__4){ goto label_355;}
#line 601
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(229));
#line 601
if(___nl__bool__4){ goto label_368;}
#line 603
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1082));
#line 603
if(___nl__bool__4){ goto label_375;}
#line 605
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(185));
#line 605
if(___nl__bool__4){ goto label_384;}
#line 607
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(257));
#line 607
if(___nl__bool__4){ goto label_393;}
#line 609
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1078));
#line 609
if(___nl__bool__4){ goto label_400;}
#line 611
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1079));
#line 611
if(___nl__bool__4){ goto label_405;}
#line 613
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(258));
#line 613
if(___nl__bool__4){ goto label_410;}
#line 615
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(263));
#line 615
if(___nl__bool__4){ goto label_417;}
#line 615
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 615
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 615
nl_die_arg(___nl__im__5);
#line 536
label_44:
;
#line 536
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1070)));
#line 536
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 537
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1070));
#line 537
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(1070)));
#line 537
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 537
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(1084)));
#line 537
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__int__2));
#line 537
c_rt_lib0clear(&___nl__im__8);
#line 537
c_rt_lib0clear(&___nl__im__9);
#line 537
c_rt_lib0clear(&___nl__im__10);
#line 537
c_rt_lib0clear(&___nl__im__11);
#line 538
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(1085)));
#line 538
___nl__int__14 = 0;
#line 538
___nl__int__15 = 1;
#line 538
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 538
label_60:
;
#line 538
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 538
if(___nl__bool__17){ goto label_80;}
#line 538
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 538
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 539
c_rt_lib0move(&___nl__im__19,___get_global_string_const(477));
#line 539
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__19));
#line 539
c_rt_lib0clear(&___nl__im__19);
#line 540
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1085));
#line 540
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(237)));
#line 540
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 540
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1084)));
#line 540
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__20, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__int__2));
#line 540
c_rt_lib0clear(&___nl__im__20);
#line 540
c_rt_lib0clear(&___nl__im__21);
#line 540
c_rt_lib0clear(&___nl__im__22);
#line 540
c_rt_lib0clear(&___nl__im__23);
#line 540
c_rt_lib0clear(&___nl__im__13);
#line 541
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 541
goto label_60;
#line 541
label_80:
;
#line 542
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(1086)));
#line 542
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(237)));
#line 542
c_rt_lib0clear(&___nl__im__26);
#line 542
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(1083));
#line 542
c_rt_lib0clear(&___nl__im__25);
#line 542
___nl__bool__24 = !___nl__bool__24;
#line 542
___nl__bool__24 = !___nl__bool__24;
#line 542
if(___nl__bool__24){ goto label_96;}
#line 543
c_rt_lib0move(&___nl__im__27,___get_global_string_const(1292));
#line 543
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__27));
#line 543
c_rt_lib0clear(&___nl__im__27);
#line 544
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(1086)));
#line 544
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__28, ___nl__int__2));
#line 544
c_rt_lib0clear(&___nl__im__28);
#line 545
goto label_96;
#line 545
label_96:
;
#line 545
//clear ___nl__bool__24;
#line 546
goto label_424;
#line 546
label_99:
;
#line 546
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1075)));
#line 546
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 547
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(1149)));
#line 547
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__32);
#line 547
c_rt_lib0clear(&___nl__im__32);
#line 547
c_rt_lib0move(&___nl__im__33,___get_global_string_const(1075));
#line 547
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(237)));
#line 547
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 547
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(1084)));
#line 547
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__31, ___nl__im__33, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__int__2));
#line 547
//clear ___nl__bool__31;
#line 547
c_rt_lib0clear(&___nl__im__33);
#line 547
c_rt_lib0clear(&___nl__im__34);
#line 547
c_rt_lib0clear(&___nl__im__35);
#line 547
c_rt_lib0clear(&___nl__im__36);
#line 548
goto label_424;
#line 548
label_116:
;
#line 548
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1071)));
#line 548
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 550
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(1087)));
#line 550
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(229));
#line 550
if(___nl__bool__41){ goto label_127;}
#line 552
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(263));
#line 552
if(___nl__bool__41){ goto label_132;}
#line 552
c_rt_lib0move(&___nl__im__42,___get_global_string_const(15));
#line 552
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(2, ___nl__im__42, ___nl__im__40));
#line 552
nl_die_arg(___nl__im__42);
#line 550
label_127:
;
#line 550
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(229)));
#line 550
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 551
c_rt_lib0move(&___nl__im__39, pretty_printer_priv0print_val(___nl__im__43));
#line 552
goto label_137;
#line 552
label_132:
;
#line 552
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(263)));
#line 552
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 553
c_rt_lib0move(&___nl__im__39, pretty_printer_priv0print_var_decl(___nl__im__45));
#line 554
goto label_137;
#line 554
label_137:
;
#line 556
c_rt_lib0move(&___nl__im__50,___get_global_string_const(1293));
#line 556
c_rt_lib0move(&___nl__im__49, wprinter0build_sim(___nl__im__50));
#line 556
c_rt_lib0clear(&___nl__im__50);
#line 558
c_rt_lib0move(&___nl__im__52,___get_global_string_const(450));
#line 558
c_rt_lib0move(&___nl__im__51, wprinter0build_sim(___nl__im__52));
#line 558
c_rt_lib0clear(&___nl__im__52);
#line 559
c_rt_lib0move(&___nl__im__53, wprinter0get_sep());
#line 560
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(1084)));
#line 560
c_rt_lib0move(&___nl__im__54, pretty_printer_priv0print_val(___nl__im__55));
#line 560
c_rt_lib0clear(&___nl__im__55);
#line 561
c_rt_lib0move(&___nl__im__57,___get_global_string_const(450));
#line 561
c_rt_lib0move(&___nl__im__56, wprinter0build_sim(___nl__im__57));
#line 561
c_rt_lib0clear(&___nl__im__57);
#line 562
c_rt_lib0move(&___nl__im__58, wprinter0get_sep());
#line 563
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(372)));
#line 563
c_rt_lib0move(&___nl__im__59, pretty_printer_priv0print_val(___nl__im__60));
#line 563
c_rt_lib0clear(&___nl__im__60);
#line 564
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1294));
#line 564
c_rt_lib0move(&___nl__im__61, wprinter0build_sim(___nl__im__62));
#line 564
c_rt_lib0clear(&___nl__im__62);
#line 564
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(9, ___nl__im__49, ___nl__im__39, ___nl__im__51, ___nl__im__53, ___nl__im__54, ___nl__im__56, ___nl__im__58, ___nl__im__59, ___nl__im__61));
#line 564
c_rt_lib0clear(&___nl__im__49);
#line 564
c_rt_lib0clear(&___nl__im__51);
#line 564
c_rt_lib0clear(&___nl__im__53);
#line 564
c_rt_lib0clear(&___nl__im__54);
#line 564
c_rt_lib0clear(&___nl__im__56);
#line 564
c_rt_lib0clear(&___nl__im__58);
#line 564
c_rt_lib0clear(&___nl__im__59);
#line 564
c_rt_lib0clear(&___nl__im__61);
#line 564
c_rt_lib0move(&___nl__im__47, wprinter0build_pretty_a(___nl__im__48));
#line 564
c_rt_lib0clear(&___nl__im__48);
#line 564
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__47, ___nl__int__2));
#line 564
c_rt_lib0clear(&___nl__im__47);
#line 566
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(237)));
#line 566
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__63, ___nl__int__2));
#line 566
c_rt_lib0clear(&___nl__im__63);
#line 567
goto label_424;
#line 567
label_175:
;
#line 567
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1081)));
#line 567
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 568
c_rt_lib0move(&___nl__im__66,___get_global_string_const(315));
#line 568
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__66));
#line 568
c_rt_lib0clear(&___nl__im__66);
#line 569
___nl__int__68 = 0;
#line 569
___nl__int__69 = 1;
#line 569
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 569
label_184:
;
#line 569
___nl__bool__71 = ___nl__int__68 >= ___nl__int__70;
#line 569
if(___nl__bool__71){ goto label_208;}
#line 569
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__68));
#line 569
c_rt_lib0copy(&___nl__im__67, ___nl__im__72);
#line 570
c_rt_lib0move(&___nl__im__74, string0lf());
#line 570
___nl__int__77 = 1;
#line 570
___nl__int__76 = ___nl__int__2 + ___nl__int__77;
#line 570
//clear ___nl__int__77;
#line 570
c_rt_lib0move(&___nl__im__75, pretty_printer_priv0pind(___nl__int__76));
#line 570
//clear ___nl__int__76;
#line 570
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__75));
#line 570
c_rt_lib0clear(&___nl__im__74);
#line 570
c_rt_lib0clear(&___nl__im__75);
#line 570
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__73));
#line 570
c_rt_lib0clear(&___nl__im__73);
#line 571
___nl__int__79 = 1;
#line 571
___nl__int__78 = ___nl__int__2 + ___nl__int__79;
#line 571
//clear ___nl__int__79;
#line 571
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__67, ___nl__int__78));
#line 571
//clear ___nl__int__78;
#line 571
c_rt_lib0clear(&___nl__im__67);
#line 572
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 572
goto label_184;
#line 572
label_208:
;
#line 573
c_rt_lib0move(&___nl__im__82, string0lf());
#line 573
c_rt_lib0move(&___nl__im__83, pretty_printer_priv0pind(___nl__int__2));
#line 573
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__83));
#line 573
c_rt_lib0clear(&___nl__im__82);
#line 573
c_rt_lib0clear(&___nl__im__83);
#line 573
c_rt_lib0move(&___nl__im__84,___get_global_string_const(316));
#line 573
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__84));
#line 573
c_rt_lib0clear(&___nl__im__81);
#line 573
c_rt_lib0clear(&___nl__im__84);
#line 573
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__80));
#line 573
c_rt_lib0clear(&___nl__im__80);
#line 574
goto label_424;
#line 574
label_221:
;
#line 575
c_rt_lib0move(&___nl__im__85,___get_global_string_const(450));
#line 575
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__85));
#line 575
c_rt_lib0clear(&___nl__im__85);
#line 576
goto label_424;
#line 576
label_226:
;
#line 576
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1080)));
#line 576
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 578
c_rt_lib0move(&___nl__im__91,___get_global_string_const(1295));
#line 578
c_rt_lib0move(&___nl__im__90, wprinter0build_sim(___nl__im__91));
#line 578
c_rt_lib0clear(&___nl__im__91);
#line 579
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(234)));
#line 579
c_rt_lib0move(&___nl__im__92, pretty_printer_priv0print_val(___nl__im__93));
#line 579
c_rt_lib0clear(&___nl__im__93);
#line 580
c_rt_lib0move(&___nl__im__95,___get_global_string_const(331));
#line 580
c_rt_lib0move(&___nl__im__94, wprinter0build_sim(___nl__im__95));
#line 580
c_rt_lib0clear(&___nl__im__95);
#line 580
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(3, ___nl__im__90, ___nl__im__92, ___nl__im__94));
#line 580
c_rt_lib0clear(&___nl__im__90);
#line 580
c_rt_lib0clear(&___nl__im__92);
#line 580
c_rt_lib0clear(&___nl__im__94);
#line 580
c_rt_lib0move(&___nl__im__88, wprinter0build_pretty_a(___nl__im__89));
#line 580
c_rt_lib0clear(&___nl__im__89);
#line 580
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__88, ___nl__int__2));
#line 580
c_rt_lib0clear(&___nl__im__88);
#line 582
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(1092)));
#line 582
___nl__int__98 = 0;
#line 582
___nl__int__99 = 1;
#line 582
___nl__int__100 = c_rt_lib0array_len(___nl__im__96);
#line 582
label_250:
;
#line 582
___nl__bool__101 = ___nl__int__98 >= ___nl__int__100;
#line 582
if(___nl__bool__101){ goto label_273;}
#line 582
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_get(___nl__im__96, ___nl__int__98));
#line 582
c_rt_lib0copy(&___nl__im__97, ___nl__im__102);
#line 583
c_rt_lib0move(&___nl__im__103,___get_global_string_const(1296));
#line 583
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__103));
#line 583
c_rt_lib0clear(&___nl__im__103);
#line 584
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_string_const(571)));
#line 584
c_rt_lib0move(&___nl__im__104, pretty_printer_priv0print_variant_case_decl(___nl__im__105));
#line 584
c_rt_lib0clear(&___nl__im__105);
#line 584
___nl__int__107 = 1;
#line 584
___nl__int__106 = ___nl__int__2 + ___nl__int__107;
#line 584
//clear ___nl__int__107;
#line 584
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__104, ___nl__int__106));
#line 584
c_rt_lib0clear(&___nl__im__104);
#line 584
//clear ___nl__int__106;
#line 585
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_string_const(237)));
#line 585
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__108, ___nl__int__2));
#line 585
c_rt_lib0clear(&___nl__im__108);
#line 585
c_rt_lib0clear(&___nl__im__97);
#line 586
___nl__int__98 = ___nl__int__98 + ___nl__int__99;
#line 586
goto label_250;
#line 586
label_273:
;
#line 587
goto label_424;
#line 587
label_275:
;
#line 587
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1072)));
#line 587
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 588
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(1149)));
#line 588
___nl__bool__111 = c_rt_lib0check_true_native(___nl__im__112);
#line 588
c_rt_lib0clear(&___nl__im__112);
#line 588
c_rt_lib0move(&___nl__im__113,___get_global_string_const(1072));
#line 588
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(237)));
#line 588
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(372)));
#line 588
c_rt_lib0move(&___nl__im__115, c_rt_lib0array_mk(1, ___nl__im__116));
#line 588
c_rt_lib0clear(&___nl__im__116);
#line 588
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(37)));
#line 588
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__111, ___nl__im__113, ___nl__im__114, ___nl__im__115, ___nl__im__117, ___nl__int__2));
#line 588
//clear ___nl__bool__111;
#line 588
c_rt_lib0clear(&___nl__im__113);
#line 588
c_rt_lib0clear(&___nl__im__114);
#line 588
c_rt_lib0clear(&___nl__im__115);
#line 588
c_rt_lib0clear(&___nl__im__117);
#line 589
goto label_424;
#line 589
label_294:
;
#line 589
c_rt_lib0move(&___nl__im__119, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1073)));
#line 589
c_rt_lib0copy(&___nl__im__118, ___nl__im__119);
#line 590
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(1149)));
#line 590
___nl__bool__120 = c_rt_lib0check_true_native(___nl__im__121);
#line 590
c_rt_lib0clear(&___nl__im__121);
#line 590
c_rt_lib0move(&___nl__im__122,___get_global_string_const(1073));
#line 590
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(237)));
#line 590
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(585)));
#line 590
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(234)));
#line 590
c_rt_lib0move(&___nl__im__124, c_rt_lib0array_mk(2, ___nl__im__125, ___nl__im__126));
#line 590
c_rt_lib0clear(&___nl__im__125);
#line 590
c_rt_lib0clear(&___nl__im__126);
#line 590
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(135)));
#line 590
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__120, ___nl__im__122, ___nl__im__123, ___nl__im__124, ___nl__im__127, ___nl__int__2));
#line 590
//clear ___nl__bool__120;
#line 590
c_rt_lib0clear(&___nl__im__122);
#line 590
c_rt_lib0clear(&___nl__im__123);
#line 590
c_rt_lib0clear(&___nl__im__124);
#line 590
c_rt_lib0clear(&___nl__im__127);
#line 592
goto label_424;
#line 592
label_315:
;
#line 592
c_rt_lib0move(&___nl__im__129, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1074)));
#line 592
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 593
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(1149)));
#line 593
___nl__bool__130 = c_rt_lib0check_true_native(___nl__im__131);
#line 593
c_rt_lib0clear(&___nl__im__131);
#line 593
c_rt_lib0move(&___nl__im__132,___get_global_string_const(1074));
#line 593
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(237)));
#line 593
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(372)));
#line 593
c_rt_lib0move(&___nl__im__134, c_rt_lib0array_mk(1, ___nl__im__135));
#line 593
c_rt_lib0clear(&___nl__im__135);
#line 593
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(1089)));
#line 593
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__130, ___nl__im__132, ___nl__im__133, ___nl__im__134, ___nl__im__136, ___nl__int__2));
#line 593
//clear ___nl__bool__130;
#line 593
c_rt_lib0clear(&___nl__im__132);
#line 593
c_rt_lib0clear(&___nl__im__133);
#line 593
c_rt_lib0clear(&___nl__im__134);
#line 593
c_rt_lib0clear(&___nl__im__136);
#line 594
goto label_424;
#line 594
label_334:
;
#line 594
c_rt_lib0move(&___nl__im__138, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(167)));
#line 594
c_rt_lib0copy(&___nl__im__137, ___nl__im__138);
#line 595
c_rt_lib0move(&___nl__im__139,___get_global_string_const(167));
#line 595
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__139));
#line 595
c_rt_lib0clear(&___nl__im__139);
#line 596
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__137, ___nl__int__2));
#line 597
goto label_424;
#line 597
label_342:
;
#line 597
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1076)));
#line 597
c_rt_lib0copy(&___nl__im__140, ___nl__im__141);
#line 598
c_rt_lib0move(&___nl__im__142,___get_global_string_const(1070));
#line 598
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(237)));
#line 598
c_rt_lib0move(&___nl__im__144, c_rt_lib0array_mk(0));
#line 598
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(1084)));
#line 598
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__142, ___nl__im__143, ___nl__im__144, ___nl__im__145, ___nl__int__2));
#line 598
c_rt_lib0clear(&___nl__im__142);
#line 598
c_rt_lib0clear(&___nl__im__143);
#line 598
c_rt_lib0clear(&___nl__im__144);
#line 598
c_rt_lib0clear(&___nl__im__145);
#line 599
goto label_424;
#line 599
label_355:
;
#line 599
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1077)));
#line 599
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 600
c_rt_lib0move(&___nl__im__148,___get_global_string_const(1184));
#line 600
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(237)));
#line 600
c_rt_lib0move(&___nl__im__150, c_rt_lib0array_mk(0));
#line 600
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(1084)));
#line 600
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__148, ___nl__im__149, ___nl__im__150, ___nl__im__151, ___nl__int__2));
#line 600
c_rt_lib0clear(&___nl__im__148);
#line 600
c_rt_lib0clear(&___nl__im__149);
#line 600
c_rt_lib0clear(&___nl__im__150);
#line 600
c_rt_lib0clear(&___nl__im__151);
#line 601
goto label_424;
#line 601
label_368:
;
#line 601
c_rt_lib0move(&___nl__im__153, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(229)));
#line 601
c_rt_lib0copy(&___nl__im__152, ___nl__im__153);
#line 602
c_rt_lib0move(&___nl__im__154, pretty_printer_priv0print_sim_value(___nl__im__152));
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__154, ___nl__int__2));
#line 602
c_rt_lib0clear(&___nl__im__154);
#line 603
goto label_424;
#line 603
label_375:
;
#line 603
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1082)));
#line 603
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 604
c_rt_lib0move(&___nl__im__158,___get_global_string_const(1082));
#line 604
c_rt_lib0move(&___nl__im__157, pretty_printer_priv0print_try_ensure(___nl__im__155, ___nl__im__158));
#line 604
c_rt_lib0clear(&___nl__im__158);
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__157, ___nl__int__2));
#line 604
c_rt_lib0clear(&___nl__im__157);
#line 605
goto label_424;
#line 605
label_384:
;
#line 605
c_rt_lib0move(&___nl__im__160, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(185)));
#line 605
c_rt_lib0copy(&___nl__im__159, ___nl__im__160);
#line 606
c_rt_lib0move(&___nl__im__162,___get_global_string_const(185));
#line 606
c_rt_lib0move(&___nl__im__161, pretty_printer_priv0print_try_ensure(___nl__im__159, ___nl__im__162));
#line 606
c_rt_lib0clear(&___nl__im__162);
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__161, ___nl__int__2));
#line 606
c_rt_lib0clear(&___nl__im__161);
#line 607
goto label_424;
#line 607
label_393:
;
#line 607
c_rt_lib0move(&___nl__im__164, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(257)));
#line 607
c_rt_lib0copy(&___nl__im__163, ___nl__im__164);
#line 608
c_rt_lib0move(&___nl__im__165, pretty_printer_priv0print_return(___nl__im__163));
#line 608
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__165, ___nl__int__2));
#line 608
c_rt_lib0clear(&___nl__im__165);
#line 609
goto label_424;
#line 609
label_400:
;
#line 610
c_rt_lib0move(&___nl__im__166, pretty_printer_priv0print_break());
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__166, ___nl__int__2));
#line 610
c_rt_lib0clear(&___nl__im__166);
#line 611
goto label_424;
#line 611
label_405:
;
#line 612
c_rt_lib0move(&___nl__im__167, pretty_printer_priv0print_continue());
#line 612
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__167, ___nl__int__2));
#line 612
c_rt_lib0clear(&___nl__im__167);
#line 613
goto label_424;
#line 613
label_410:
;
#line 613
c_rt_lib0move(&___nl__im__169, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(258)));
#line 613
c_rt_lib0copy(&___nl__im__168, ___nl__im__169);
#line 614
c_rt_lib0move(&___nl__im__170, pretty_printer_priv0print_die(___nl__im__168));
#line 614
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__170, ___nl__int__2));
#line 614
c_rt_lib0clear(&___nl__im__170);
#line 615
goto label_424;
#line 615
label_417:
;
#line 615
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(263)));
#line 615
c_rt_lib0copy(&___nl__im__171, ___nl__im__172);
#line 616
c_rt_lib0move(&___nl__im__173, pretty_printer_priv0print_var_decl(___nl__im__171));
#line 616
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__173, ___nl__int__2));
#line 616
c_rt_lib0clear(&___nl__im__173);
#line 617
goto label_424;
#line 617
label_424:
;
#line 617
c_rt_lib0clear(&___nl__im__1);
#line 617
//clear ___nl__int__2;
#line 617
c_rt_lib0clear(&___nl__im__3);
#line 617
//clear ___nl__bool__4;
#line 617
c_rt_lib0clear(&___nl__im__5);
#line 617
c_rt_lib0clear(&___nl__im__6);
#line 617
c_rt_lib0clear(&___nl__im__7);
#line 617
c_rt_lib0clear(&___nl__im__12);
#line 617
c_rt_lib0clear(&___nl__im__13);
#line 617
//clear ___nl__int__14;
#line 617
//clear ___nl__int__15;
#line 617
//clear ___nl__int__16;
#line 617
//clear ___nl__bool__17;
#line 617
c_rt_lib0clear(&___nl__im__18);
#line 617
c_rt_lib0clear(&___nl__im__29);
#line 617
c_rt_lib0clear(&___nl__im__30);
#line 617
c_rt_lib0clear(&___nl__im__37);
#line 617
c_rt_lib0clear(&___nl__im__38);
#line 617
c_rt_lib0clear(&___nl__im__39);
#line 617
c_rt_lib0clear(&___nl__im__40);
#line 617
//clear ___nl__bool__41;
#line 617
c_rt_lib0clear(&___nl__im__42);
#line 617
c_rt_lib0clear(&___nl__im__43);
#line 617
c_rt_lib0clear(&___nl__im__44);
#line 617
c_rt_lib0clear(&___nl__im__45);
#line 617
c_rt_lib0clear(&___nl__im__46);
#line 617
c_rt_lib0clear(&___nl__im__64);
#line 617
c_rt_lib0clear(&___nl__im__65);
#line 617
c_rt_lib0clear(&___nl__im__67);
#line 617
//clear ___nl__int__68;
#line 617
//clear ___nl__int__69;
#line 617
//clear ___nl__int__70;
#line 617
//clear ___nl__bool__71;
#line 617
c_rt_lib0clear(&___nl__im__72);
#line 617
c_rt_lib0clear(&___nl__im__86);
#line 617
c_rt_lib0clear(&___nl__im__87);
#line 617
c_rt_lib0clear(&___nl__im__96);
#line 617
c_rt_lib0clear(&___nl__im__97);
#line 617
//clear ___nl__int__98;
#line 617
//clear ___nl__int__99;
#line 617
//clear ___nl__int__100;
#line 617
//clear ___nl__bool__101;
#line 617
c_rt_lib0clear(&___nl__im__102);
#line 617
c_rt_lib0clear(&___nl__im__109);
#line 617
c_rt_lib0clear(&___nl__im__110);
#line 617
c_rt_lib0clear(&___nl__im__118);
#line 617
c_rt_lib0clear(&___nl__im__119);
#line 617
c_rt_lib0clear(&___nl__im__128);
#line 617
c_rt_lib0clear(&___nl__im__129);
#line 617
c_rt_lib0clear(&___nl__im__137);
#line 617
c_rt_lib0clear(&___nl__im__138);
#line 617
c_rt_lib0clear(&___nl__im__140);
#line 617
c_rt_lib0clear(&___nl__im__141);
#line 617
c_rt_lib0clear(&___nl__im__146);
#line 617
c_rt_lib0clear(&___nl__im__147);
#line 617
c_rt_lib0clear(&___nl__im__152);
#line 617
c_rt_lib0clear(&___nl__im__153);
#line 617
c_rt_lib0clear(&___nl__im__155);
#line 617
c_rt_lib0clear(&___nl__im__156);
#line 617
c_rt_lib0clear(&___nl__im__159);
#line 617
c_rt_lib0clear(&___nl__im__160);
#line 617
c_rt_lib0clear(&___nl__im__163);
#line 617
c_rt_lib0clear(&___nl__im__164);
#line 617
c_rt_lib0clear(&___nl__im__168);
#line 617
c_rt_lib0clear(&___nl__im__169);
#line 617
c_rt_lib0clear(&___nl__im__171);
#line 617
c_rt_lib0clear(&___nl__im__172);
#line 617
return NULL;

}

bool  pretty_printer_priv0is_proper_hash_key(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
#line 621
___nl__int__2 = string0length(___nl__im__0);
#line 621
___nl__int__3 = 0;
#line 621
___nl__bool__1 = ___nl__int__2 == ___nl__int__3;
#line 621
//clear ___nl__int__2;
#line 621
//clear ___nl__int__3;
#line 621
___nl__bool__1 = !___nl__bool__1;
#line 621
if(___nl__bool__1){ goto label_12;}
#line 621
___nl__bool__4 = false;
#line 621
c_rt_lib0clear(&___nl__im__0);
#line 621
//clear ___nl__bool__1;
#line 621
return ___nl__bool__4;
#line 621
goto label_12;
#line 621
label_12:
;
#line 621
//clear ___nl__bool__1;
#line 621
//clear ___nl__bool__4;
#line 622
___nl__int__7 = 0;
#line 622
___nl__int__8 = 1;
#line 622
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__8));
#line 622
//clear ___nl__int__7;
#line 622
//clear ___nl__int__8;
#line 622
___nl__bool__5 = string0is_letter(___nl__im__6);
#line 622
c_rt_lib0clear(&___nl__im__6);
#line 622
___nl__bool__5 = !___nl__bool__5;
#line 622
___nl__bool__5 = !___nl__bool__5;
#line 622
if(___nl__bool__5){ goto label_30;}
#line 622
___nl__bool__9 = false;
#line 622
c_rt_lib0clear(&___nl__im__0);
#line 622
//clear ___nl__bool__5;
#line 622
return ___nl__bool__9;
#line 622
goto label_30;
#line 622
label_30:
;
#line 622
//clear ___nl__bool__5;
#line 622
//clear ___nl__bool__9;
#line 623
c_rt_lib0move(&___nl__im__10, string0to_array(___nl__im__0));
#line 623
___nl__int__12 = 0;
#line 623
___nl__int__13 = 1;
#line 623
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 623
label_37:
;
#line 623
___nl__bool__15 = ___nl__int__12 >= ___nl__int__14;
#line 623
if(___nl__bool__15){ goto label_72;}
#line 623
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 623
c_rt_lib0copy(&___nl__im__11, ___nl__im__16);
#line 624
___nl__bool__17 = string0is_letter(___nl__im__11);
#line 624
if(___nl__bool__17){ goto label_45;}
#line 624
___nl__bool__17 = string0is_digit(___nl__im__11);
#line 624
label_45:
;
#line 624
if(___nl__bool__17){ goto label_50;}
#line 624
c_rt_lib0move(&___nl__im__18,___get_global_string_const(112));
#line 624
___nl__bool__17 = c_rt_lib0eq(___nl__im__11, ___nl__im__18);
#line 624
c_rt_lib0clear(&___nl__im__18);
#line 624
label_50:
;
#line 624
___nl__bool__17 = !___nl__bool__17;
#line 624
___nl__bool__17 = !___nl__bool__17;
#line 624
if(___nl__bool__17){ goto label_66;}
#line 624
___nl__bool__19 = false;
#line 624
c_rt_lib0clear(&___nl__im__0);
#line 624
c_rt_lib0clear(&___nl__im__10);
#line 624
c_rt_lib0clear(&___nl__im__11);
#line 624
//clear ___nl__int__12;
#line 624
//clear ___nl__int__13;
#line 624
//clear ___nl__int__14;
#line 624
//clear ___nl__bool__15;
#line 624
c_rt_lib0clear(&___nl__im__16);
#line 624
//clear ___nl__bool__17;
#line 624
return ___nl__bool__19;
#line 624
goto label_66;
#line 624
label_66:
;
#line 624
//clear ___nl__bool__17;
#line 624
//clear ___nl__bool__19;
#line 624
c_rt_lib0clear(&___nl__im__11);
#line 625
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 625
goto label_37;
#line 625
label_72:
;
#line 626
___nl__bool__20 = true;
#line 626
c_rt_lib0clear(&___nl__im__0);
#line 626
c_rt_lib0clear(&___nl__im__10);
#line 626
c_rt_lib0clear(&___nl__im__11);
#line 626
//clear ___nl__int__12;
#line 626
//clear ___nl__int__13;
#line 626
//clear ___nl__int__14;
#line 626
//clear ___nl__bool__15;
#line 626
c_rt_lib0clear(&___nl__im__16);
#line 626
return ___nl__bool__20;
return false;

}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void pretty_printer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT pretty_printer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT pretty_printer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = pretty_printer0struct_t0cal();
	break;
case 1:
	___const__[1] = pretty_printer_priv0print_break0cal();
	break;
case 2:
	___const__[2] = pretty_printer_priv0print_continue0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
