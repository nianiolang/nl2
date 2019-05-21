
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
ImmT  pretty_printer_priv0print_comment(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(175), ___nl__im__7, ___get_global_string_const(1287), ___nl__im__8, ___get_global_string_const(1237), ___nl__im__9));
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
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__string__59 = NULL;
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
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1288));
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
if(___nl__bool__25){ goto label_127;}
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
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(237)));
#line 34
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(237)));
#line 34
c_rt_lib0clear(&___nl__im__37);
#line 34
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(237)));
#line 34
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(237)));
#line 34
c_rt_lib0clear(&___nl__im__39);
#line 34
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__38, ___get_global_string_const(1081)));
#line 34
c_rt_lib0clear(&___nl__im__36);
#line 34
c_rt_lib0clear(&___nl__im__38);
#line 34
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(238)));
#line 34
c_rt_lib0clear(&___nl__im__35);
#line 34
___nl__int__41 = 0;
#line 34
___nl__int__42 = 1;
#line 34
___nl__int__43 = c_rt_lib0array_len(___nl__im__34);
#line 34
label_77:
;
#line 34
___nl__bool__44 = ___nl__int__41 >= ___nl__int__43;
#line 34
if(___nl__bool__44){ goto label_97;}
#line 34
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__34, ___nl__int__41));
#line 34
c_rt_lib0copy(&___nl__im__40, ___nl__im__45);
#line 35
c_rt_lib0move(&___nl__im__47, string0lf());
#line 35
___nl__int__49 = 1;
#line 35
c_rt_lib0move(&___nl__im__48, pretty_printer_priv0pind(___nl__int__49));
#line 35
//clear ___nl__int__49;
#line 35
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 35
c_rt_lib0clear(&___nl__im__47);
#line 35
c_rt_lib0clear(&___nl__im__48);
#line 35
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__27, ___nl__im__46));
#line 35
c_rt_lib0clear(&___nl__im__46);
#line 36
___nl__int__50 = 1;
#line 36
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__im__27, ___nl__im__40, ___nl__int__50));
#line 36
//clear ___nl__int__50;
#line 36
c_rt_lib0clear(&___nl__im__40);
#line 37
___nl__int__41 = ___nl__int__41 + ___nl__int__42;
#line 37
goto label_77;
#line 37
label_97:
;
#line 38
c_rt_lib0move(&___nl__im__51,___get_global_string_const(218));
#line 38
c_rt_lib0move(&___nl__im__51, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__51));
#line 39
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(219)));
#line 39
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__56, ___get_global_string_const(475));
#line 39
c_rt_lib0clear(&___nl__im__56);
#line 39
if(___nl__bool__55){ goto label_106;}
#line 39
c_rt_lib0move(&___nl__im__54,___get_global_string_const(36));
#line 39
goto label_108;
#line 39
label_106:
;
#line 39
c_rt_lib0move(&___nl__im__54,___get_global_string_const(34));
#line 39
label_108:
;
#line 39
//clear ___nl__bool__55;
#line 39
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(175)));
#line 39
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__57));
#line 39
c_rt_lib0clear(&___nl__im__54);
#line 39
c_rt_lib0clear(&___nl__im__57);
#line 41
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(202)));
#line 41
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(3, ___get_global_string_const(175), ___nl__im__53, ___get_global_string_const(1287), ___nl__im__31, ___get_global_string_const(1237), ___nl__im__58));
#line 41
c_rt_lib0clear(&___nl__im__53);
#line 41
c_rt_lib0clear(&___nl__im__58);
#line 41
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__52));
#line 41
c_rt_lib0move(&___nl__string__59,___get_global_string_const(218));
#line 41
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__59, ___nl__im__51));
#line 41
c_rt_lib0clear(&___nl__im__51);
#line 41
c_rt_lib0clear(&___nl__im__52);
#line 41
c_rt_lib0clear(&___nl__string__59);
#line 41
c_rt_lib0clear(&___nl__im__21);
#line 43
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 43
goto label_43;
#line 43
label_127:
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
c_rt_lib0clear(&___nl__im__40);
#line 44
//clear ___nl__int__41;
#line 44
//clear ___nl__int__42;
#line 44
//clear ___nl__int__43;
#line 44
//clear ___nl__bool__44;
#line 44
c_rt_lib0clear(&___nl__im__45);
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
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
ImmT  ___nl__im__56 = NULL;
#line 48
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 48
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_string_const(202), ___nl__im__2));
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 49
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1132)));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1132)));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1289));
#line 52
c_rt_lib0move(&___nl__im__17, string0lf());
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 52
c_rt_lib0clear(&___nl__im__16);
#line 52
c_rt_lib0clear(&___nl__im__17);
#line 52
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1290));
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
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1289));
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
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1288));
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
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1133)));
#line 65
___nl__int__54 = 0;
#line 65
___nl__int__55 = 0;
#line 65
c_rt_lib0delete(pretty_printer_priv0print_comment(&___nl__im__1, ___nl__im__53, ___nl__int__54, ___nl__int__55));
#line 65
c_rt_lib0clear(&___nl__im__53);
#line 65
//clear ___nl__int__54;
#line 65
//clear ___nl__int__55;
#line 66
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(202)));
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
c_rt_lib0clear(&___nl__im__31);
#line 66
c_rt_lib0clear(&___nl__im__42);
#line 66
c_rt_lib0clear(&___nl__im__43);
#line 66
//clear ___nl__int__44;
#line 66
//clear ___nl__int__45;
#line 66
//clear ___nl__int__46;
#line 66
//clear ___nl__bool__47;
#line 66
c_rt_lib0clear(&___nl__im__48);
#line 66
return ___nl__im__56;
return NULL;

}

ImmT  pretty_printer_priv0print_fun_def(wprinter0state_t0type* ___ref___im__0,nast0fun_def_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
#line 70
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1130)));
#line 70
___nl__int__4 = 0;
#line 70
___nl__int__5 = 0;
#line 70
c_rt_lib0delete(pretty_printer_priv0print_comment(___ref___im__0, ___nl__im__3, ___nl__int__4, ___nl__int__5));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
//clear ___nl__int__4;
#line 70
//clear ___nl__int__5;
#line 71
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(___ref___im__0, ___nl__im__1, ___nl__im__2));
#line 72
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(237)));
#line 72
___nl__int__7 = 0;
#line 72
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__6, ___nl__int__7));
#line 72
c_rt_lib0clear(&___nl__im__6);
#line 72
//clear ___nl__int__7;
#line 72
c_rt_lib0clear(&___nl__im__1);
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
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
#line 76
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 77
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(219)));
#line 77
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(220));
#line 77
if(___nl__bool__5){ goto label_9;}
#line 79
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(475));
#line 79
if(___nl__bool__5){ goto label_16;}
#line 79
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 79
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 79
nl_die_arg(___nl__im__6);
#line 77
label_9:
;
#line 78
c_rt_lib0move(&___nl__im__8,___get_global_string_const(34));
#line 78
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 78
c_rt_lib0clear(&___nl__im__8);
#line 78
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__7));
#line 78
c_rt_lib0clear(&___nl__im__7);
#line 79
goto label_18;
#line 79
label_16:
;
#line 80
goto label_18;
#line 80
label_18:
;
#line 81
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(175)));
#line 81
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 81
c_rt_lib0clear(&___nl__im__9);
#line 83
c_rt_lib0move(&___nl__im__12,___get_global_string_const(733));
#line 83
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 83
c_rt_lib0clear(&___nl__im__12);
#line 84
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 85
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__3));
#line 86
c_rt_lib0move(&___nl__im__16,___get_global_string_const(465));
#line 86
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 86
c_rt_lib0clear(&___nl__im__16);
#line 86
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(4, ___nl__im__11, ___nl__im__13, ___nl__im__14, ___nl__im__15));
#line 86
c_rt_lib0clear(&___nl__im__11);
#line 86
c_rt_lib0clear(&___nl__im__13);
#line 86
c_rt_lib0clear(&___nl__im__14);
#line 86
c_rt_lib0clear(&___nl__im__15);
#line 88
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 88
___nl__int__17 = c_rt_lib0array_len(___nl__im__18);
#line 88
c_rt_lib0clear(&___nl__im__18);
#line 88
___nl__int__19 = 0;
#line 88
___nl__int__20 = 1;
#line 88
label_40:
;
#line 88
___nl__bool__21 = ___nl__int__19 >= ___nl__int__17;
#line 88
if(___nl__bool__21){ goto label_135;}
#line 89
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 89
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__23, ___nl__int__19));
#line 89
c_rt_lib0clear(&___nl__im__23);
#line 90
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(277)));
#line 90
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(39));
#line 90
if(___nl__bool__25){ goto label_54;}
#line 92
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(76));
#line 92
if(___nl__bool__25){ goto label_65;}
#line 92
c_rt_lib0move(&___nl__im__26,___get_global_string_const(15));
#line 92
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 92
nl_die_arg(___nl__im__26);
#line 90
label_54:
;
#line 91
c_rt_lib0move(&___nl__im__29,___get_global_string_const(39));
#line 91
c_rt_lib0move(&___nl__im__28, wprinter0build_sim(___nl__im__29));
#line 91
c_rt_lib0clear(&___nl__im__29);
#line 91
c_rt_lib0move(&___nl__im__30, wprinter0get_sep());
#line 91
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__28, ___nl__im__30));
#line 91
c_rt_lib0clear(&___nl__im__28);
#line 91
c_rt_lib0clear(&___nl__im__30);
#line 91
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__27));
#line 91
c_rt_lib0clear(&___nl__im__27);
#line 92
goto label_67;
#line 92
label_65:
;
#line 93
goto label_67;
#line 93
label_67:
;
#line 94
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(175)));
#line 94
c_rt_lib0move(&___nl__im__31, wprinter0build_sim(___nl__im__32));
#line 94
c_rt_lib0clear(&___nl__im__32);
#line 94
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__31));
#line 94
c_rt_lib0clear(&___nl__im__31);
#line 95
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(215)));
#line 95
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(215));
#line 95
if(___nl__bool__34){ goto label_81;}
#line 97
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(76));
#line 97
if(___nl__bool__34){ goto label_98;}
#line 97
c_rt_lib0move(&___nl__im__35,___get_global_string_const(15));
#line 97
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__35, ___nl__im__33));
#line 97
nl_die_arg(___nl__im__35);
#line 95
label_81:
;
#line 95
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(215)));
#line 95
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 96
c_rt_lib0move(&___nl__im__39, wprinter0get_sep());
#line 96
c_rt_lib0move(&___nl__im__41,___get_global_string_const(538));
#line 96
c_rt_lib0move(&___nl__im__40, wprinter0build_sim(___nl__im__41));
#line 96
c_rt_lib0clear(&___nl__im__41);
#line 96
c_rt_lib0move(&___nl__im__42, wprinter0get_sep());
#line 96
c_rt_lib0move(&___nl__im__43, pretty_printer_priv0print_val(___nl__im__36));
#line 96
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(4, ___nl__im__39, ___nl__im__40, ___nl__im__42, ___nl__im__43));
#line 96
c_rt_lib0clear(&___nl__im__39);
#line 96
c_rt_lib0clear(&___nl__im__40);
#line 96
c_rt_lib0clear(&___nl__im__42);
#line 96
c_rt_lib0clear(&___nl__im__43);
#line 96
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__38));
#line 96
c_rt_lib0clear(&___nl__im__38);
#line 97
goto label_100;
#line 97
label_98:
;
#line 98
goto label_100;
#line 98
label_100:
;
#line 99
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 99
___nl__int__46 = c_rt_lib0array_len(___nl__im__47);
#line 99
c_rt_lib0clear(&___nl__im__47);
#line 99
___nl__int__48 = 1;
#line 99
___nl__int__45 = ___nl__int__46 - ___nl__int__48;
#line 99
//clear ___nl__int__46;
#line 99
//clear ___nl__int__48;
#line 99
___nl__bool__44 = ___nl__int__19 != ___nl__int__45;
#line 99
//clear ___nl__int__45;
#line 99
___nl__bool__44 = !___nl__bool__44;
#line 99
if(___nl__bool__44){ goto label_122;}
#line 99
c_rt_lib0move(&___nl__im__51,___get_global_string_const(323));
#line 99
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__51));
#line 99
c_rt_lib0clear(&___nl__im__51);
#line 99
c_rt_lib0move(&___nl__im__52, wprinter0get_sep());
#line 99
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__50, ___nl__im__52));
#line 99
c_rt_lib0clear(&___nl__im__50);
#line 99
c_rt_lib0clear(&___nl__im__52);
#line 99
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__49));
#line 99
c_rt_lib0clear(&___nl__im__49);
#line 99
goto label_122;
#line 99
label_122:
;
#line 99
//clear ___nl__bool__44;
#line 99
c_rt_lib0clear(&___nl__im__22);
#line 99
c_rt_lib0clear(&___nl__im__24);
#line 99
//clear ___nl__bool__25;
#line 99
c_rt_lib0clear(&___nl__im__26);
#line 99
c_rt_lib0clear(&___nl__im__33);
#line 99
//clear ___nl__bool__34;
#line 99
c_rt_lib0clear(&___nl__im__35);
#line 99
c_rt_lib0clear(&___nl__im__36);
#line 99
c_rt_lib0clear(&___nl__im__37);
#line 100
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 100
goto label_40;
#line 100
label_135:
;
#line 101
c_rt_lib0move(&___nl__im__54,___get_global_string_const(331));
#line 101
c_rt_lib0move(&___nl__im__53, wprinter0build_sim(___nl__im__54));
#line 101
c_rt_lib0clear(&___nl__im__54);
#line 101
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__53));
#line 101
c_rt_lib0clear(&___nl__im__53);
#line 102
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(476)));
#line 102
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(215)));
#line 102
c_rt_lib0clear(&___nl__im__56);
#line 102
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(215));
#line 102
if(___nl__bool__57){ goto label_151;}
#line 109
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(76));
#line 109
if(___nl__bool__57){ goto label_168;}
#line 109
c_rt_lib0move(&___nl__im__58,___get_global_string_const(15));
#line 109
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__55));
#line 109
nl_die_arg(___nl__im__58);
#line 102
label_151:
;
#line 102
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__55, ___get_global_string_const(215)));
#line 102
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 104
c_rt_lib0move(&___nl__im__62, wprinter0get_sep());
#line 105
c_rt_lib0move(&___nl__im__64,___get_global_string_const(538));
#line 105
c_rt_lib0move(&___nl__im__63, wprinter0build_sim(___nl__im__64));
#line 105
c_rt_lib0clear(&___nl__im__64);
#line 106
c_rt_lib0move(&___nl__im__65, wprinter0get_sep());
#line 107
c_rt_lib0move(&___nl__im__66, pretty_printer_priv0print_sim_value(___nl__im__59));
#line 107
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(4, ___nl__im__62, ___nl__im__63, ___nl__im__65, ___nl__im__66));
#line 107
c_rt_lib0clear(&___nl__im__62);
#line 107
c_rt_lib0clear(&___nl__im__63);
#line 107
c_rt_lib0clear(&___nl__im__65);
#line 107
c_rt_lib0clear(&___nl__im__66);
#line 107
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__61));
#line 107
c_rt_lib0clear(&___nl__im__61);
#line 109
goto label_170;
#line 109
label_168:
;
#line 110
goto label_170;
#line 110
label_170:
;
#line 111
c_rt_lib0move(&___nl__im__67, wprinter0build_pretty_l(___nl__im__10));
#line 111
___nl__int__68 = 0;
#line 111
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__67, ___nl__int__68));
#line 111
c_rt_lib0clear(&___nl__im__67);
#line 111
//clear ___nl__int__68;
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
c_rt_lib0clear(&___nl__im__3);
#line 111
c_rt_lib0clear(&___nl__im__4);
#line 111
//clear ___nl__bool__5;
#line 111
c_rt_lib0clear(&___nl__im__6);
#line 111
c_rt_lib0clear(&___nl__im__10);
#line 111
//clear ___nl__int__17;
#line 111
//clear ___nl__int__19;
#line 111
//clear ___nl__int__20;
#line 111
//clear ___nl__bool__21;
#line 111
c_rt_lib0clear(&___nl__im__22);
#line 111
c_rt_lib0clear(&___nl__im__24);
#line 111
//clear ___nl__bool__25;
#line 111
c_rt_lib0clear(&___nl__im__26);
#line 111
c_rt_lib0clear(&___nl__im__33);
#line 111
//clear ___nl__bool__34;
#line 111
c_rt_lib0clear(&___nl__im__35);
#line 111
c_rt_lib0clear(&___nl__im__36);
#line 111
c_rt_lib0clear(&___nl__im__37);
#line 111
c_rt_lib0clear(&___nl__im__55);
#line 111
//clear ___nl__bool__57;
#line 111
c_rt_lib0clear(&___nl__im__58);
#line 111
c_rt_lib0clear(&___nl__im__59);
#line 111
c_rt_lib0clear(&___nl__im__60);
#line 111
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
#line 115
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 116
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 116
___nl__int__3 = 0;
#line 116
___nl__int__4 = 1;
#line 116
label_4:
;
#line 116
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 116
if(___nl__bool__5){ goto label_35;}
#line 117
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 117
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_var_decl(___nl__im__7));
#line 117
c_rt_lib0clear(&___nl__im__7);
#line 117
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 117
c_rt_lib0clear(&___nl__im__6);
#line 118
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 118
___nl__int__11 = 1;
#line 118
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 118
//clear ___nl__int__10;
#line 118
//clear ___nl__int__11;
#line 118
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 118
//clear ___nl__int__9;
#line 118
___nl__bool__8 = !___nl__bool__8;
#line 118
if(___nl__bool__8){ goto label_31;}
#line 118
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 118
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 118
c_rt_lib0clear(&___nl__im__14);
#line 118
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 118
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 118
c_rt_lib0clear(&___nl__im__13);
#line 118
c_rt_lib0clear(&___nl__im__15);
#line 118
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 118
c_rt_lib0clear(&___nl__im__12);
#line 118
goto label_31;
#line 118
label_31:
;
#line 118
//clear ___nl__bool__8;
#line 119
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 119
goto label_4;
#line 119
label_35:
;
#line 120
c_rt_lib0clear(&___nl__im__0);
#line 120
//clear ___nl__int__2;
#line 120
//clear ___nl__int__3;
#line 120
//clear ___nl__int__4;
#line 120
//clear ___nl__bool__5;
#line 120
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
#line 124
c_rt_lib0move(&___nl__im__3,___get_global_string_const(515));
#line 124
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
c_rt_lib0move(&___nl__im__4, wprinter0get_sep());
#line 124
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__4));
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
c_rt_lib0clear(&___nl__im__4);
#line 125
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 125
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(215));
#line 125
if(___nl__bool__6){ goto label_15;}
#line 133
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(76));
#line 133
if(___nl__bool__6){ goto label_36;}
#line 133
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 133
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 133
nl_die_arg(___nl__im__7);
#line 125
label_15:
;
#line 125
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(215)));
#line 125
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 127
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 127
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 127
c_rt_lib0clear(&___nl__im__12);
#line 128
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 129
c_rt_lib0move(&___nl__im__15,___get_global_string_const(538));
#line 129
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 129
c_rt_lib0clear(&___nl__im__15);
#line 130
c_rt_lib0move(&___nl__im__16, wprinter0get_sep());
#line 131
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_val(___nl__im__8));
#line 131
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(5, ___nl__im__11, ___nl__im__13, ___nl__im__14, ___nl__im__16, ___nl__im__17));
#line 131
c_rt_lib0clear(&___nl__im__11);
#line 131
c_rt_lib0clear(&___nl__im__13);
#line 131
c_rt_lib0clear(&___nl__im__14);
#line 131
c_rt_lib0clear(&___nl__im__16);
#line 131
c_rt_lib0clear(&___nl__im__17);
#line 131
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__10));
#line 131
c_rt_lib0clear(&___nl__im__10);
#line 133
goto label_43;
#line 133
label_36:
;
#line 134
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 134
c_rt_lib0move(&___nl__im__18, wprinter0build_sim(___nl__im__19));
#line 134
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__18));
#line 134
c_rt_lib0clear(&___nl__im__18);
#line 135
goto label_43;
#line 135
label_43:
;
#line 136
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 136
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(229));
#line 136
if(___nl__bool__21){ goto label_52;}
#line 138
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(76));
#line 138
if(___nl__bool__21){ goto label_69;}
#line 138
c_rt_lib0move(&___nl__im__22,___get_global_string_const(15));
#line 138
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 138
nl_die_arg(___nl__im__22);
#line 136
label_52:
;
#line 136
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(229)));
#line 136
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 137
c_rt_lib0move(&___nl__im__26, wprinter0get_sep());
#line 137
c_rt_lib0move(&___nl__im__28,___get_global_string_const(752));
#line 137
c_rt_lib0move(&___nl__im__27, wprinter0build_sim(___nl__im__28));
#line 137
c_rt_lib0clear(&___nl__im__28);
#line 137
c_rt_lib0move(&___nl__im__29, wprinter0get_sep());
#line 137
c_rt_lib0move(&___nl__im__30, pretty_printer_priv0print_val(___nl__im__23));
#line 137
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(4, ___nl__im__26, ___nl__im__27, ___nl__im__29, ___nl__im__30));
#line 137
c_rt_lib0clear(&___nl__im__26);
#line 137
c_rt_lib0clear(&___nl__im__27);
#line 137
c_rt_lib0clear(&___nl__im__29);
#line 137
c_rt_lib0clear(&___nl__im__30);
#line 137
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__25));
#line 137
c_rt_lib0clear(&___nl__im__25);
#line 138
goto label_71;
#line 138
label_69:
;
#line 139
goto label_71;
#line 139
label_71:
;
#line 140
c_rt_lib0move(&___nl__im__31, wprinter0build_pretty_l(___nl__im__1));
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
c_rt_lib0clear(&___nl__im__5);
#line 140
//clear ___nl__bool__6;
#line 140
c_rt_lib0clear(&___nl__im__7);
#line 140
c_rt_lib0clear(&___nl__im__8);
#line 140
c_rt_lib0clear(&___nl__im__9);
#line 140
c_rt_lib0clear(&___nl__im__20);
#line 140
//clear ___nl__bool__21;
#line 140
c_rt_lib0clear(&___nl__im__22);
#line 140
c_rt_lib0clear(&___nl__im__23);
#line 140
c_rt_lib0clear(&___nl__im__24);
#line 140
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
#line 144
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 145
___nl__int__2 = 0;
#line 145
___nl__int__3 = 1;
#line 145
label_3:
;
#line 145
___nl__bool__4 = ___nl__int__2 >= ___nl__int__0;
#line 145
if(___nl__bool__4){ goto label_13;}
#line 145
___nl__int__6 = 9;
#line 145
c_rt_lib0move(&___nl__im__5, string0chr(___nl__int__6));
#line 145
//clear ___nl__int__6;
#line 145
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 145
c_rt_lib0clear(&___nl__im__5);
#line 145
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 145
goto label_3;
#line 145
label_13:
;
#line 146
//clear ___nl__int__0;
#line 146
//clear ___nl__int__2;
#line 146
//clear ___nl__int__3;
#line 146
//clear ___nl__bool__4;
#line 146
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
#line 150
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 151
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 151
___nl__int__3 = 0;
#line 151
___nl__int__4 = 1;
#line 151
label_4:
;
#line 151
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 151
if(___nl__bool__5){ goto label_35;}
#line 152
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 152
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_hash_elem(___nl__im__7));
#line 152
c_rt_lib0clear(&___nl__im__7);
#line 152
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 152
c_rt_lib0clear(&___nl__im__6);
#line 153
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 153
___nl__int__11 = 1;
#line 153
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 153
//clear ___nl__int__10;
#line 153
//clear ___nl__int__11;
#line 153
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 153
//clear ___nl__int__9;
#line 153
___nl__bool__8 = !___nl__bool__8;
#line 153
if(___nl__bool__8){ goto label_31;}
#line 153
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 153
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 153
c_rt_lib0clear(&___nl__im__14);
#line 153
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 153
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 153
c_rt_lib0clear(&___nl__im__13);
#line 153
c_rt_lib0clear(&___nl__im__15);
#line 153
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 153
c_rt_lib0clear(&___nl__im__12);
#line 153
goto label_31;
#line 153
label_31:
;
#line 153
//clear ___nl__bool__8;
#line 154
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 154
goto label_4;
#line 154
label_35:
;
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
//clear ___nl__int__2;
#line 155
//clear ___nl__int__3;
#line 155
//clear ___nl__int__4;
#line 155
//clear ___nl__bool__5;
#line 155
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
#line 159
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 159
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(229)));
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(241));
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
if(___nl__bool__1){ goto label_11;}
#line 159
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 159
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(229)));
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(240));
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
label_11:
;
#line 159
___nl__bool__1 = !___nl__bool__1;
#line 159
if(___nl__bool__1){ goto label_51;}
#line 160
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(585)));
#line 160
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(229)));
#line 160
c_rt_lib0clear(&___nl__im__8);
#line 160
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(585)));
#line 160
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(229)));
#line 160
c_rt_lib0clear(&___nl__im__10);
#line 160
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(1105)));
#line 160
c_rt_lib0clear(&___nl__im__7);
#line 160
c_rt_lib0clear(&___nl__im__9);
#line 161
___nl__bool__11 = pretty_printer_priv0is_proper_hash_key(___nl__im__6);
#line 161
___nl__bool__11 = !___nl__bool__11;
#line 161
___nl__bool__11 = !___nl__bool__11;
#line 161
if(___nl__bool__11){ goto label_35;}
#line 161
c_rt_lib0move(&___nl__im__13,___get_global_string_const(147));
#line 161
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
c_rt_lib0move(&___nl__im__14,___get_global_string_const(147));
#line 161
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__14);
#line 161
goto label_35;
#line 161
label_35:
;
#line 161
//clear ___nl__bool__11;
#line 162
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 162
c_rt_lib0move(&___nl__im__18,___get_global_string_const(336));
#line 162
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__6, ___nl__im__18));
#line 162
c_rt_lib0clear(&___nl__im__18);
#line 162
c_rt_lib0move(&___nl__im__19,___get_global_string_const(36));
#line 162
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0get_compressed_fun_val(___nl__im__16, ___nl__im__17, ___nl__im__19));
#line 162
c_rt_lib0clear(&___nl__im__16);
#line 162
c_rt_lib0clear(&___nl__im__17);
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
//clear ___nl__bool__1;
#line 162
c_rt_lib0clear(&___nl__im__6);
#line 162
return ___nl__im__15;
#line 163
goto label_51;
#line 163
label_51:
;
#line 163
//clear ___nl__bool__1;
#line 163
c_rt_lib0clear(&___nl__im__6);
#line 163
c_rt_lib0clear(&___nl__im__15);
#line 165
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(585)));
#line 165
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_val(___nl__im__23));
#line 165
c_rt_lib0clear(&___nl__im__23);
#line 166
c_rt_lib0move(&___nl__im__24, wprinter0get_sep());
#line 167
c_rt_lib0move(&___nl__im__26,___get_global_string_const(317));
#line 167
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 167
c_rt_lib0clear(&___nl__im__26);
#line 168
c_rt_lib0move(&___nl__im__27, wprinter0get_sep());
#line 169
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 169
c_rt_lib0move(&___nl__im__28, pretty_printer_priv0print_val(___nl__im__29));
#line 169
c_rt_lib0clear(&___nl__im__29);
#line 169
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(5, ___nl__im__22, ___nl__im__24, ___nl__im__25, ___nl__im__27, ___nl__im__28));
#line 169
c_rt_lib0clear(&___nl__im__22);
#line 169
c_rt_lib0clear(&___nl__im__24);
#line 169
c_rt_lib0clear(&___nl__im__25);
#line 169
c_rt_lib0clear(&___nl__im__27);
#line 169
c_rt_lib0clear(&___nl__im__28);
#line 169
c_rt_lib0move(&___nl__im__20, wprinter0build_pretty_l(___nl__im__21));
#line 169
c_rt_lib0clear(&___nl__im__21);
#line 169
c_rt_lib0clear(&___nl__im__0);
#line 169
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
#line 174
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 174
c_rt_lib0move(&___nl__im__4,___get_global_string_const(188));
#line 174
___nl__bool__1 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
c_rt_lib0clear(&___nl__im__4);
#line 174
___nl__bool__2 = !___nl__bool__1;
#line 174
if(___nl__bool__2){ goto label_12;}
#line 174
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 174
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(229)));
#line 174
c_rt_lib0clear(&___nl__im__6);
#line 174
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1083));
#line 174
c_rt_lib0clear(&___nl__im__5);
#line 174
label_12:
;
#line 174
//clear ___nl__bool__2;
#line 174
___nl__bool__1 = !___nl__bool__1;
#line 174
if(___nl__bool__1){ goto label_23;}
#line 175
c_rt_lib0move(&___nl__im__8,___get_global_string_const(581));
#line 175
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__8));
#line 175
c_rt_lib0clear(&___nl__im__8);
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
//clear ___nl__bool__1;
#line 175
return ___nl__im__7;
#line 176
goto label_48;
#line 176
label_23:
;
#line 176
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 176
c_rt_lib0move(&___nl__im__11,___get_global_string_const(189));
#line 176
___nl__bool__1 = c_rt_lib0eq(___nl__im__10, ___nl__im__11);
#line 176
c_rt_lib0clear(&___nl__im__10);
#line 176
c_rt_lib0clear(&___nl__im__11);
#line 176
___nl__bool__9 = !___nl__bool__1;
#line 176
if(___nl__bool__9){ goto label_36;}
#line 176
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 176
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(229)));
#line 176
c_rt_lib0clear(&___nl__im__13);
#line 176
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(1083));
#line 176
c_rt_lib0clear(&___nl__im__12);
#line 176
label_36:
;
#line 176
//clear ___nl__bool__9;
#line 176
___nl__bool__1 = !___nl__bool__1;
#line 176
if(___nl__bool__1){ goto label_48;}
#line 177
c_rt_lib0move(&___nl__im__15,___get_global_string_const(580));
#line 177
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 177
c_rt_lib0clear(&___nl__im__15);
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
//clear ___nl__bool__1;
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
return ___nl__im__14;
#line 178
goto label_48;
#line 178
label_48:
;
#line 178
//clear ___nl__bool__1;
#line 178
c_rt_lib0clear(&___nl__im__7);
#line 178
c_rt_lib0clear(&___nl__im__14);
#line 179
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 179
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(229)));
#line 179
c_rt_lib0clear(&___nl__im__18);
#line 179
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(240));
#line 179
c_rt_lib0clear(&___nl__im__17);
#line 179
if(___nl__bool__16){ goto label_63;}
#line 179
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 179
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(229)));
#line 179
c_rt_lib0clear(&___nl__im__20);
#line 179
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(241));
#line 179
c_rt_lib0clear(&___nl__im__19);
#line 179
label_63:
;
#line 179
___nl__bool__16 = !___nl__bool__16;
#line 179
if(___nl__bool__16){ goto label_85;}
#line 180
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 180
c_rt_lib0move(&___nl__im__25,___get_global_string_const(538));
#line 180
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 180
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 180
c_rt_lib0clear(&___nl__im__25);
#line 180
c_rt_lib0clear(&___nl__im__26);
#line 180
c_rt_lib0move(&___nl__im__27,___get_global_string_const(465));
#line 180
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 180
c_rt_lib0clear(&___nl__im__24);
#line 180
c_rt_lib0clear(&___nl__im__27);
#line 180
c_rt_lib0move(&___nl__im__28,___get_global_string_const(331));
#line 180
c_rt_lib0move(&___nl__im__21, pretty_printer_priv0get_compressed_fun_val(___nl__im__22, ___nl__im__23, ___nl__im__28));
#line 180
c_rt_lib0clear(&___nl__im__22);
#line 180
c_rt_lib0clear(&___nl__im__23);
#line 180
c_rt_lib0clear(&___nl__im__28);
#line 180
c_rt_lib0clear(&___nl__im__0);
#line 180
//clear ___nl__bool__16;
#line 180
return ___nl__im__21;
#line 181
goto label_85;
#line 181
label_85:
;
#line 181
//clear ___nl__bool__16;
#line 181
c_rt_lib0clear(&___nl__im__21);
#line 182
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 183
c_rt_lib0move(&___nl__im__32,___get_global_string_const(538));
#line 183
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 183
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__33));
#line 183
c_rt_lib0clear(&___nl__im__32);
#line 183
c_rt_lib0clear(&___nl__im__33);
#line 183
c_rt_lib0move(&___nl__im__30, wprinter0build_sim(___nl__im__31));
#line 183
c_rt_lib0clear(&___nl__im__31);
#line 183
c_rt_lib0delete(array0push(&___nl__im__29, ___nl__im__30));
#line 183
c_rt_lib0clear(&___nl__im__30);
#line 185
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 185
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(229)));
#line 185
c_rt_lib0clear(&___nl__im__36);
#line 185
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(1083));
#line 185
c_rt_lib0clear(&___nl__im__35);
#line 185
___nl__bool__34 = !___nl__bool__34;
#line 185
___nl__bool__34 = !___nl__bool__34;
#line 185
if(___nl__bool__34){ goto label_122;}
#line 184
c_rt_lib0move(&___nl__im__39,___get_global_string_const(465));
#line 184
c_rt_lib0move(&___nl__im__38, wprinter0build_sim(___nl__im__39));
#line 184
c_rt_lib0clear(&___nl__im__39);
#line 184
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(515)));
#line 184
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_val(___nl__im__41));
#line 184
c_rt_lib0clear(&___nl__im__41);
#line 184
c_rt_lib0move(&___nl__im__43,___get_global_string_const(331));
#line 184
c_rt_lib0move(&___nl__im__42, wprinter0build_sim(___nl__im__43));
#line 184
c_rt_lib0clear(&___nl__im__43);
#line 184
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(3, ___nl__im__38, ___nl__im__40, ___nl__im__42));
#line 184
c_rt_lib0clear(&___nl__im__38);
#line 184
c_rt_lib0clear(&___nl__im__40);
#line 184
c_rt_lib0clear(&___nl__im__42);
#line 184
c_rt_lib0delete(array0append(&___nl__im__29, ___nl__im__37));
#line 184
c_rt_lib0clear(&___nl__im__37);
#line 184
goto label_122;
#line 184
label_122:
;
#line 184
//clear ___nl__bool__34;
#line 186
c_rt_lib0move(&___nl__im__44, wprinter0build_pretty_op_l(___nl__im__29));
#line 186
c_rt_lib0clear(&___nl__im__0);
#line 186
c_rt_lib0clear(&___nl__im__29);
#line 186
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
#line 190
c_rt_lib0move(&___nl__im__4,___get_global_string_const(538));
#line 190
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 190
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 191
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 191
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(229));
#line 191
if(___nl__bool__7){ goto label_17;}
#line 193
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(76));
#line 193
if(___nl__bool__7){ goto label_36;}
#line 193
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 193
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 193
nl_die_arg(___nl__im__8);
#line 191
label_17:
;
#line 191
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(229)));
#line 191
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 192
c_rt_lib0move(&___nl__im__13,___get_global_string_const(465));
#line 192
c_rt_lib0move(&___nl__im__12, wprinter0build_sim(___nl__im__13));
#line 192
c_rt_lib0clear(&___nl__im__13);
#line 192
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(501)));
#line 192
c_rt_lib0move(&___nl__im__14, pretty_printer_priv0print_var_decl(___nl__im__15));
#line 192
c_rt_lib0clear(&___nl__im__15);
#line 192
c_rt_lib0move(&___nl__im__17,___get_global_string_const(331));
#line 192
c_rt_lib0move(&___nl__im__16, wprinter0build_sim(___nl__im__17));
#line 192
c_rt_lib0clear(&___nl__im__17);
#line 192
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(3, ___nl__im__12, ___nl__im__14, ___nl__im__16));
#line 192
c_rt_lib0clear(&___nl__im__12);
#line 192
c_rt_lib0clear(&___nl__im__14);
#line 192
c_rt_lib0clear(&___nl__im__16);
#line 192
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__11));
#line 192
c_rt_lib0clear(&___nl__im__11);
#line 193
goto label_38;
#line 193
label_36:
;
#line 194
goto label_38;
#line 194
label_38:
;
#line 195
c_rt_lib0move(&___nl__im__18, wprinter0build_pretty_op_l(___nl__im__1));
#line 195
c_rt_lib0clear(&___nl__im__0);
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
c_rt_lib0clear(&___nl__im__6);
#line 195
//clear ___nl__bool__7;
#line 195
c_rt_lib0clear(&___nl__im__8);
#line 195
c_rt_lib0clear(&___nl__im__9);
#line 195
c_rt_lib0clear(&___nl__im__10);
#line 195
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
#line 199
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 200
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 200
___nl__int__3 = 0;
#line 200
___nl__int__4 = 1;
#line 200
label_4:
;
#line 200
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 200
if(___nl__bool__5){ goto label_35;}
#line 201
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 201
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_fun_arg(___nl__im__7));
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 202
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 202
___nl__int__11 = 1;
#line 202
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 202
//clear ___nl__int__10;
#line 202
//clear ___nl__int__11;
#line 202
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 202
//clear ___nl__int__9;
#line 202
___nl__bool__8 = !___nl__bool__8;
#line 202
if(___nl__bool__8){ goto label_31;}
#line 202
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 202
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 202
c_rt_lib0clear(&___nl__im__14);
#line 202
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 202
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 202
c_rt_lib0clear(&___nl__im__13);
#line 202
c_rt_lib0clear(&___nl__im__15);
#line 202
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 202
c_rt_lib0clear(&___nl__im__12);
#line 202
goto label_31;
#line 202
label_31:
;
#line 202
//clear ___nl__bool__8;
#line 203
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 203
goto label_4;
#line 203
label_35:
;
#line 204
c_rt_lib0clear(&___nl__im__0);
#line 204
//clear ___nl__int__2;
#line 204
//clear ___nl__int__3;
#line 204
//clear ___nl__int__4;
#line 204
//clear ___nl__bool__5;
#line 204
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
#line 208
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 209
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(277)));
#line 209
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(39));
#line 209
if(___nl__bool__3){ goto label_9;}
#line 211
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(76));
#line 211
if(___nl__bool__3){ goto label_20;}
#line 211
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 211
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 211
nl_die_arg(___nl__im__4);
#line 209
label_9:
;
#line 210
c_rt_lib0move(&___nl__im__7,___get_global_string_const(39));
#line 210
c_rt_lib0move(&___nl__im__6, wprinter0build_sim(___nl__im__7));
#line 210
c_rt_lib0clear(&___nl__im__7);
#line 210
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 210
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__8));
#line 210
c_rt_lib0clear(&___nl__im__6);
#line 210
c_rt_lib0clear(&___nl__im__8);
#line 210
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__5));
#line 210
c_rt_lib0clear(&___nl__im__5);
#line 211
goto label_22;
#line 211
label_20:
;
#line 212
goto label_22;
#line 212
label_22:
;
#line 213
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(234)));
#line 213
c_rt_lib0move(&___nl__im__9, pretty_printer_priv0print_val(___nl__im__10));
#line 213
c_rt_lib0clear(&___nl__im__10);
#line 213
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__9));
#line 213
c_rt_lib0clear(&___nl__im__9);
#line 214
c_rt_lib0move(&___nl__im__11, wprinter0build_pretty_op_l(___nl__im__1));
#line 214
c_rt_lib0clear(&___nl__im__0);
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
//clear ___nl__bool__3;
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
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
#line 218
___nl__int__1 = 0;
#line 219
___nl__int__3 = 0;
#line 219
___nl__int__4 = 1;
#line 219
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 219
label_4:
;
#line 219
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 219
if(___nl__bool__6){ goto label_32;}
#line 219
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 219
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 220
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(234)));
#line 220
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(229)));
#line 220
c_rt_lib0clear(&___nl__im__10);
#line 220
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(240));
#line 220
c_rt_lib0clear(&___nl__im__9);
#line 220
if(___nl__bool__8){ goto label_20;}
#line 220
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(234)));
#line 220
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(229)));
#line 220
c_rt_lib0clear(&___nl__im__12);
#line 220
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(241));
#line 220
c_rt_lib0clear(&___nl__im__11);
#line 220
label_20:
;
#line 220
___nl__bool__8 = !___nl__bool__8;
#line 220
if(___nl__bool__8){ goto label_27;}
#line 220
___nl__int__13 = 1;
#line 220
___nl__int__1 = ___nl__int__1 + ___nl__int__13;
#line 220
//clear ___nl__int__13;
#line 220
goto label_27;
#line 220
label_27:
;
#line 220
//clear ___nl__bool__8;
#line 220
c_rt_lib0clear(&___nl__im__2);
#line 221
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 221
goto label_4;
#line 221
label_32:
;
#line 222
c_rt_lib0clear(&___nl__im__0);
#line 222
c_rt_lib0clear(&___nl__im__2);
#line 222
//clear ___nl__int__3;
#line 222
//clear ___nl__int__4;
#line 222
//clear ___nl__int__5;
#line 222
//clear ___nl__bool__6;
#line 222
c_rt_lib0clear(&___nl__im__7);
#line 222
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
#line 226
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 227
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 228
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 229
label_3:
;
#line 230
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 230
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(240));
#line 230
c_rt_lib0clear(&___nl__im__7);
#line 230
___nl__bool__6 = !___nl__bool__6;
#line 230
if(___nl__bool__6){ goto label_39;}
#line 231
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 231
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 231
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(240)));
#line 231
c_rt_lib0clear(&___nl__im__9);
#line 231
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0move(&___nl__im__11,___get_global_string_const(325));
#line 232
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 232
c_rt_lib0clear(&___nl__im__11);
#line 233
c_rt_lib0move(&___nl__im__12,___get_global_string_const(326));
#line 233
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__12, ___nl__im__5));
#line 233
c_rt_lib0clear(&___nl__im__12);
#line 234
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 234
___nl__int__15 = 1;
#line 234
___nl__bool__13 = ___nl__int__14 != ___nl__int__15;
#line 234
//clear ___nl__int__14;
#line 234
//clear ___nl__int__15;
#line 234
___nl__bool__13 = !___nl__bool__13;
#line 234
if(___nl__bool__13){ goto label_33;}
#line 235
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_val(___nl__im__8));
#line 236
//clear ___nl__bool__6;
#line 236
c_rt_lib0clear(&___nl__im__8);
#line 236
//clear ___nl__bool__13;
#line 236
goto label_76;
#line 237
goto label_33;
#line 237
label_33:
;
#line 237
//clear ___nl__bool__13;
#line 238
___nl__int__16 = 0;
#line 238
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_get(___nl__im__8, ___nl__int__16));
#line 238
//clear ___nl__int__16;
#line 239
goto label_71;
#line 239
label_39:
;
#line 239
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 239
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(241));
#line 239
c_rt_lib0clear(&___nl__im__17);
#line 239
___nl__bool__6 = !___nl__bool__6;
#line 239
if(___nl__bool__6){ goto label_62;}
#line 240
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 240
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 240
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(241)));
#line 240
c_rt_lib0clear(&___nl__im__19);
#line 240
c_rt_lib0clear(&___nl__im__20);
#line 241
c_rt_lib0move(&___nl__im__21,___get_global_string_const(315));
#line 241
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__21));
#line 241
c_rt_lib0clear(&___nl__im__21);
#line 242
c_rt_lib0move(&___nl__im__22,___get_global_string_const(316));
#line 242
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__22, ___nl__im__5));
#line 242
c_rt_lib0clear(&___nl__im__22);
#line 243
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_hash_elem(___nl__im__18));
#line 244
//clear ___nl__bool__6;
#line 244
c_rt_lib0clear(&___nl__im__8);
#line 244
c_rt_lib0clear(&___nl__im__18);
#line 244
goto label_76;
#line 245
goto label_71;
#line 245
label_62:
;
#line 246
c_rt_lib0move(&___nl__im__23, pretty_printer_priv0print_val(___nl__im__0));
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(1, ___nl__im__23));
#line 246
c_rt_lib0clear(&___nl__im__23);
#line 247
//clear ___nl__bool__6;
#line 247
c_rt_lib0clear(&___nl__im__8);
#line 247
c_rt_lib0clear(&___nl__im__18);
#line 247
goto label_76;
#line 248
goto label_71;
#line 248
label_71:
;
#line 248
//clear ___nl__bool__6;
#line 248
c_rt_lib0clear(&___nl__im__8);
#line 248
c_rt_lib0clear(&___nl__im__18);
#line 229
goto label_3;
#line 229
label_76:
;
#line 250
c_rt_lib0move(&___nl__im__24, wprinter0build_pretty_arr_decl(___nl__im__3, ___nl__im__4, ___nl__im__5));
#line 250
c_rt_lib0clear(&___nl__im__0);
#line 250
c_rt_lib0clear(&___nl__im__1);
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
return ___nl__im__24;
return NULL;

}

ImmT  pretty_printer_priv0print_st(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 254
c_rt_lib0move(&___nl__im__3,___get_global_string_const(477));
#line 254
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__3));
#line 254
c_rt_lib0clear(&___nl__im__3);
#line 255
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__1, ___nl__int__2));
#line 255
c_rt_lib0clear(&___nl__im__1);
#line 255
//clear ___nl__int__2;
#line 255
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
#line 259
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 259
___nl__bool__3 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 259
c_rt_lib0clear(&___nl__im__4);
#line 259
if(___nl__bool__3){ goto label_10;}
#line 259
c_rt_lib0move(&___nl__im__6,___get_global_string_const(34));
#line 259
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__1, ___nl__im__6));
#line 259
c_rt_lib0clear(&___nl__im__6);
#line 259
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 259
c_rt_lib0clear(&___nl__im__5);
#line 259
goto label_12;
#line 259
label_10:
;
#line 259
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 259
label_12:
;
#line 259
//clear ___nl__bool__3;
#line 259
c_rt_lib0clear(&___nl__im__0);
#line 259
c_rt_lib0clear(&___nl__im__1);
#line 259
return ___nl__im__2;
return NULL;

}

ImmT  pretty_printer_priv0string_to_nl(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 263
c_rt_lib0move(&___nl__im__2,___get_global_string_const(147));
#line 263
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1291));
#line 263
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__0, ___nl__im__2, ___nl__im__3));
#line 263
c_rt_lib0clear(&___nl__im__2);
#line 263
c_rt_lib0clear(&___nl__im__3);
#line 263
c_rt_lib0clear(&___nl__im__0);
#line 263
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
#line 267
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 268
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 268
___nl__int__3 = 0;
#line 268
___nl__int__4 = 1;
#line 268
label_4:
;
#line 268
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 268
if(___nl__bool__5){ goto label_35;}
#line 269
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 269
c_rt_lib0move(&___nl__im__6, pretty_printer_priv0print_val(___nl__im__7));
#line 269
c_rt_lib0clear(&___nl__im__7);
#line 269
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 269
c_rt_lib0clear(&___nl__im__6);
#line 270
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 270
___nl__int__11 = 1;
#line 270
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 270
//clear ___nl__int__10;
#line 270
//clear ___nl__int__11;
#line 270
___nl__bool__8 = ___nl__int__3 != ___nl__int__9;
#line 270
//clear ___nl__int__9;
#line 270
___nl__bool__8 = !___nl__bool__8;
#line 270
if(___nl__bool__8){ goto label_31;}
#line 270
c_rt_lib0move(&___nl__im__14,___get_global_string_const(323));
#line 270
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 270
c_rt_lib0clear(&___nl__im__14);
#line 270
c_rt_lib0move(&___nl__im__15, wprinter0get_sep());
#line 270
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__15));
#line 270
c_rt_lib0clear(&___nl__im__13);
#line 270
c_rt_lib0clear(&___nl__im__15);
#line 270
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__12));
#line 270
c_rt_lib0clear(&___nl__im__12);
#line 270
goto label_31;
#line 270
label_31:
;
#line 270
//clear ___nl__bool__8;
#line 271
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 271
goto label_4;
#line 271
label_35:
;
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
//clear ___nl__int__2;
#line 272
//clear ___nl__int__3;
#line 272
//clear ___nl__int__4;
#line 272
//clear ___nl__bool__5;
#line 272
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
#line 276
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 276
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1063));
#line 276
c_rt_lib0clear(&___nl__im__2);
#line 276
___nl__bool__1 = !___nl__bool__1;
#line 276
___nl__bool__1 = !___nl__bool__1;
#line 276
if(___nl__bool__1){ goto label_11;}
#line 276
___nl__bool__3 = false;
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
//clear ___nl__bool__1;
#line 276
return ___nl__bool__3;
#line 276
goto label_11;
#line 276
label_11:
;
#line 276
//clear ___nl__bool__1;
#line 276
//clear ___nl__bool__3;
#line 277
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 277
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 277
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(1063)));
#line 277
c_rt_lib0clear(&___nl__im__5);
#line 277
c_rt_lib0clear(&___nl__im__6);
#line 278
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 278
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 278
c_rt_lib0clear(&___nl__im__10);
#line 278
___nl__int__11 = 2;
#line 278
___nl__bool__7 = ___nl__int__9 == ___nl__int__11;
#line 278
//clear ___nl__int__9;
#line 278
//clear ___nl__int__11;
#line 278
___nl__bool__8 = !___nl__bool__7;
#line 278
if(___nl__bool__8){ goto label_39;}
#line 278
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(159)));
#line 278
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1027));
#line 278
___nl__bool__7 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 278
c_rt_lib0clear(&___nl__im__12);
#line 278
c_rt_lib0clear(&___nl__im__13);
#line 278
if(___nl__bool__7){ goto label_39;}
#line 278
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(159)));
#line 278
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1292));
#line 278
___nl__bool__7 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 278
c_rt_lib0clear(&___nl__im__14);
#line 278
c_rt_lib0clear(&___nl__im__15);
#line 278
label_39:
;
#line 278
//clear ___nl__bool__8;
#line 278
___nl__bool__7 = !___nl__bool__7;
#line 278
if(___nl__bool__7){ goto label_138;}
#line 279
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(175)));
#line 279
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1125));
#line 279
___nl__bool__16 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 279
c_rt_lib0clear(&___nl__im__18);
#line 279
c_rt_lib0clear(&___nl__im__19);
#line 279
if(___nl__bool__16){ goto label_54;}
#line 279
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(175)));
#line 279
c_rt_lib0move(&___nl__im__21,___get_global_string_const(1124));
#line 279
___nl__bool__16 = c_rt_lib0eq(___nl__im__20, ___nl__im__21);
#line 279
c_rt_lib0clear(&___nl__im__20);
#line 279
c_rt_lib0clear(&___nl__im__21);
#line 279
label_54:
;
#line 279
___nl__bool__17 = !___nl__bool__16;
#line 279
if(___nl__bool__17){ goto label_68;}
#line 279
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 279
___nl__int__26 = 1;
#line 279
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__25, ___nl__int__26));
#line 279
c_rt_lib0clear(&___nl__im__25);
#line 279
//clear ___nl__int__26;
#line 279
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(234)));
#line 279
c_rt_lib0clear(&___nl__im__24);
#line 279
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(229)));
#line 279
c_rt_lib0clear(&___nl__im__23);
#line 279
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(414));
#line 279
c_rt_lib0clear(&___nl__im__22);
#line 279
label_68:
;
#line 279
//clear ___nl__bool__17;
#line 279
___nl__bool__16 = !___nl__bool__16;
#line 279
if(___nl__bool__16){ goto label_134;}
#line 280
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 280
___nl__int__32 = 1;
#line 280
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__31, ___nl__int__32));
#line 280
c_rt_lib0clear(&___nl__im__31);
#line 280
//clear ___nl__int__32;
#line 280
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(234)));
#line 280
c_rt_lib0clear(&___nl__im__30);
#line 280
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(229)));
#line 280
c_rt_lib0clear(&___nl__im__29);
#line 280
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(276)));
#line 280
___nl__int__37 = 1;
#line 280
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__36, ___nl__int__37));
#line 280
c_rt_lib0clear(&___nl__im__36);
#line 280
//clear ___nl__int__37;
#line 280
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(234)));
#line 280
c_rt_lib0clear(&___nl__im__35);
#line 280
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(229)));
#line 280
c_rt_lib0clear(&___nl__im__34);
#line 280
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(414)));
#line 280
c_rt_lib0clear(&___nl__im__28);
#line 280
c_rt_lib0clear(&___nl__im__33);
#line 281
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(134)));
#line 281
___nl__int__40 = c_rt_lib0array_len(___nl__im__41);
#line 281
c_rt_lib0clear(&___nl__im__41);
#line 281
___nl__int__42 = 1;
#line 281
___nl__bool__38 = ___nl__int__40 == ___nl__int__42;
#line 281
//clear ___nl__int__40;
#line 281
//clear ___nl__int__42;
#line 281
___nl__bool__39 = !___nl__bool__38;
#line 281
if(___nl__bool__39){ goto label_117;}
#line 281
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(134)));
#line 281
___nl__int__46 = 0;
#line 281
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__45, ___nl__int__46));
#line 281
c_rt_lib0clear(&___nl__im__45);
#line 281
//clear ___nl__int__46;
#line 281
c_rt_lib0move(&___nl__im__47,___get_global_string_const(477));
#line 281
c_rt_lib0move(&___nl__im__43, string0index2(___nl__im__44, ___nl__im__47));
#line 281
c_rt_lib0clear(&___nl__im__44);
#line 281
c_rt_lib0clear(&___nl__im__47);
#line 281
___nl__int__48 = 0;
#line 281
___nl__int__49 = getIntFromImm(___nl__im__43);
#line 281
___nl__bool__38 = ___nl__int__49 < ___nl__int__48;
#line 281
c_rt_lib0clear(&___nl__im__43);
#line 281
//clear ___nl__int__48;
#line 281
//clear ___nl__int__49;
#line 281
label_117:
;
#line 281
//clear ___nl__bool__39;
#line 281
___nl__bool__38 = !___nl__bool__38;
#line 281
if(___nl__bool__38){ goto label_130;}
#line 282
___nl__bool__50 = true;
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__4);
#line 282
//clear ___nl__bool__7;
#line 282
//clear ___nl__bool__16;
#line 282
c_rt_lib0clear(&___nl__im__27);
#line 282
//clear ___nl__bool__38;
#line 282
return ___nl__bool__50;
#line 283
goto label_130;
#line 283
label_130:
;
#line 283
//clear ___nl__bool__38;
#line 283
//clear ___nl__bool__50;
#line 284
goto label_134;
#line 284
label_134:
;
#line 284
//clear ___nl__bool__16;
#line 284
c_rt_lib0clear(&___nl__im__27);
#line 285
goto label_138;
#line 285
label_138:
;
#line 285
//clear ___nl__bool__7;
#line 286
___nl__bool__51 = false;
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
c_rt_lib0clear(&___nl__im__4);
#line 286
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
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
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
bool  ___nl__bool__36 = false;
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
bool  ___nl__bool__85 = false;
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
bool  ___nl__bool__114 = false;
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
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
bool  ___nl__bool__202 = false;
INT  ___nl__int__203 = 0;
ImmT  ___nl__im__204 = NULL;
INT  ___nl__int__205 = 0;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
INT  ___nl__int__209 = 0;
bool  ___nl__bool__210 = false;
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
INT  ___nl__int__221 = 0;
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
INT  ___nl__int__236 = 0;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
INT  ___nl__int__241 = 0;
INT  ___nl__int__242 = 0;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
bool  ___nl__bool__249 = false;
bool  ___nl__bool__250 = false;
INT  ___nl__int__251 = 0;
ImmT  ___nl__im__252 = NULL;
INT  ___nl__int__253 = 0;
ImmT  ___nl__im__254 = NULL;
INT  ___nl__int__255 = 0;
ImmT  ___nl__im__256 = NULL;
INT  ___nl__int__257 = 0;
bool  ___nl__bool__258 = false;
INT  ___nl__int__259 = 0;
ImmT  ___nl__im__260 = NULL;
INT  ___nl__int__261 = 0;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
INT  ___nl__int__266 = 0;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
INT  ___nl__int__270 = 0;
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
#line 290
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(232));
#line 290
if(___nl__bool__2){ goto label_38;}
#line 292
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(414));
#line 292
if(___nl__bool__2){ goto label_52;}
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(33));
#line 302
if(___nl__bool__2){ goto label_135;}
#line 304
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1105));
#line 304
if(___nl__bool__2){ goto label_171;}
#line 307
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(571));
#line 307
if(___nl__bool__2){ goto label_217;}
#line 309
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(515));
#line 309
if(___nl__bool__2){ goto label_252;}
#line 311
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1102));
#line 311
if(___nl__bool__2){ goto label_290;}
#line 313
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1104));
#line 313
if(___nl__bool__2){ goto label_343;}
#line 321
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(245));
#line 321
if(___nl__bool__2){ goto label_421;}
#line 372
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1109));
#line 372
if(___nl__bool__2){ goto label_920;}
#line 374
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1108));
#line 374
if(___nl__bool__2){ goto label_978;}
#line 376
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1106));
#line 376
if(___nl__bool__2){ goto label_1039;}
#line 378
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1063));
#line 378
if(___nl__bool__2){ goto label_1103;}
#line 402
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1083));
#line 402
if(___nl__bool__2){ goto label_1507;}
#line 404
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(240));
#line 404
if(___nl__bool__2){ goto label_1575;}
#line 406
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(241));
#line 406
if(___nl__bool__2){ goto label_1644;}
#line 408
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1107));
#line 408
if(___nl__bool__2){ goto label_1718;}
#line 408
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 408
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 408
nl_die_arg(___nl__im__3);
#line 290
label_38:
;
#line 290
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(232)));
#line 290
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 291
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__int__4));
#line 291
c_rt_lib0move(&___nl__im__6, wprinter0build_sim(___nl__im__7));
#line 291
c_rt_lib0clear(&___nl__im__7);
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__2;
#line 291
c_rt_lib0clear(&___nl__im__3);
#line 291
//clear ___nl__int__4;
#line 291
c_rt_lib0clear(&___nl__im__5);
#line 291
return ___nl__im__6;
#line 292
goto label_1795;
#line 292
label_52:
;
#line 292
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(414)));
#line 292
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 293
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 294
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(134)));
#line 294
___nl__int__13 = 0;
#line 294
___nl__int__14 = 1;
#line 294
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 294
label_60:
;
#line 294
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 294
if(___nl__bool__16){ goto label_75;}
#line 294
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 294
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 295
c_rt_lib0move(&___nl__im__19,___get_global_string_const(147));
#line 295
c_rt_lib0move(&___nl__im__20, pretty_printer_priv0string_to_nl(___nl__im__12));
#line 295
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 295
c_rt_lib0clear(&___nl__im__19);
#line 295
c_rt_lib0clear(&___nl__im__20);
#line 295
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__18));
#line 295
c_rt_lib0clear(&___nl__im__18);
#line 295
c_rt_lib0clear(&___nl__im__12);
#line 296
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 296
goto label_60;
#line 296
label_75:
;
#line 297
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1141)));
#line 297
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(1140));
#line 297
if(___nl__bool__22){ goto label_84;}
#line 298
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(742));
#line 298
if(___nl__bool__22){ goto label_86;}
#line 298
c_rt_lib0move(&___nl__im__23,___get_global_string_const(15));
#line 298
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__21));
#line 298
nl_die_arg(___nl__im__23);
#line 297
label_84:
;
#line 298
goto label_109;
#line 298
label_86:
;
#line 299
___nl__int__27 = c_rt_lib0array_len(___nl__im__10);
#line 299
___nl__int__28 = 1;
#line 299
___nl__int__26 = ___nl__int__27 - ___nl__int__28;
#line 299
//clear ___nl__int__27;
#line 299
//clear ___nl__int__28;
#line 299
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__10, ___nl__int__26));
#line 299
//clear ___nl__int__26;
#line 299
c_rt_lib0move(&___nl__im__29,___get_global_string_const(147));
#line 299
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__29));
#line 299
c_rt_lib0clear(&___nl__im__25);
#line 299
c_rt_lib0clear(&___nl__im__29);
#line 299
___nl__int__32 = c_rt_lib0array_len(___nl__im__10);
#line 299
___nl__int__33 = 1;
#line 299
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 299
//clear ___nl__int__32;
#line 299
//clear ___nl__int__33;
#line 299
c_rt_lib0copy(&___nl__im__30, ___nl__im__24);
#line 299
c_rt_lib0array_set(&___nl__im__10, ___nl__int__31, ___nl__im__30);
#line 299
c_rt_lib0clear(&___nl__im__24);
#line 299
c_rt_lib0clear(&___nl__im__30);
#line 299
//clear ___nl__int__31;
#line 300
goto label_109;
#line 300
label_109:
;
#line 301
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1141)));
#line 301
c_rt_lib0move(&___nl__im__34, wprinter0build_str_arr(___nl__im__10, ___nl__im__35));
#line 301
c_rt_lib0clear(&___nl__im__35);
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
c_rt_lib0clear(&___nl__im__17);
#line 301
c_rt_lib0clear(&___nl__im__21);
#line 301
//clear ___nl__bool__22;
#line 301
c_rt_lib0clear(&___nl__im__23);
#line 301
return ___nl__im__34;
#line 302
goto label_1795;
#line 302
label_135:
;
#line 302
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(33)));
#line 302
___nl__bool__36 = c_rt_lib0check_true_native(___nl__im__37);
#line 303
if(___nl__bool__36){ goto label_141;}
#line 303
c_rt_lib0move(&___nl__im__39,___get_global_string_const(580));
#line 303
goto label_143;
#line 303
label_141:
;
#line 303
c_rt_lib0move(&___nl__im__39,___get_global_string_const(581));
#line 303
label_143:
;
#line 303
c_rt_lib0move(&___nl__im__38, wprinter0build_sim(___nl__im__39));
#line 303
c_rt_lib0clear(&___nl__im__39);
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
c_rt_lib0clear(&___nl__im__17);
#line 303
c_rt_lib0clear(&___nl__im__21);
#line 303
//clear ___nl__bool__22;
#line 303
c_rt_lib0clear(&___nl__im__23);
#line 303
c_rt_lib0clear(&___nl__im__34);
#line 303
//clear ___nl__bool__36;
#line 303
c_rt_lib0clear(&___nl__im__37);
#line 303
return ___nl__im__38;
#line 304
goto label_1795;
#line 304
label_171:
;
#line 304
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1105)));
#line 304
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 305
___nl__bool__42 = pretty_printer_priv0is_proper_hash_key(___nl__im__40);
#line 305
___nl__bool__42 = !___nl__bool__42;
#line 305
___nl__bool__42 = !___nl__bool__42;
#line 305
if(___nl__bool__42){ goto label_186;}
#line 305
c_rt_lib0move(&___nl__im__44,___get_global_string_const(147));
#line 305
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__40));
#line 305
c_rt_lib0clear(&___nl__im__44);
#line 305
c_rt_lib0move(&___nl__im__45,___get_global_string_const(147));
#line 305
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__43, ___nl__im__45));
#line 305
c_rt_lib0clear(&___nl__im__43);
#line 305
c_rt_lib0clear(&___nl__im__45);
#line 305
goto label_186;
#line 305
label_186:
;
#line 305
//clear ___nl__bool__42;
#line 306
c_rt_lib0move(&___nl__im__46, wprinter0build_sim(___nl__im__40));
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
c_rt_lib0clear(&___nl__im__8);
#line 306
c_rt_lib0clear(&___nl__im__9);
#line 306
c_rt_lib0clear(&___nl__im__10);
#line 306
c_rt_lib0clear(&___nl__im__11);
#line 306
c_rt_lib0clear(&___nl__im__12);
#line 306
//clear ___nl__int__13;
#line 306
//clear ___nl__int__14;
#line 306
//clear ___nl__int__15;
#line 306
//clear ___nl__bool__16;
#line 306
c_rt_lib0clear(&___nl__im__17);
#line 306
c_rt_lib0clear(&___nl__im__21);
#line 306
//clear ___nl__bool__22;
#line 306
c_rt_lib0clear(&___nl__im__23);
#line 306
c_rt_lib0clear(&___nl__im__34);
#line 306
//clear ___nl__bool__36;
#line 306
c_rt_lib0clear(&___nl__im__37);
#line 306
c_rt_lib0clear(&___nl__im__38);
#line 306
c_rt_lib0clear(&___nl__im__40);
#line 306
c_rt_lib0clear(&___nl__im__41);
#line 306
return ___nl__im__46;
#line 307
goto label_1795;
#line 307
label_217:
;
#line 307
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(571)));
#line 307
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 308
c_rt_lib0move(&___nl__im__49, pretty_printer_priv0print_variant(___nl__im__47));
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
c_rt_lib0clear(&___nl__im__8);
#line 308
c_rt_lib0clear(&___nl__im__9);
#line 308
c_rt_lib0clear(&___nl__im__10);
#line 308
c_rt_lib0clear(&___nl__im__11);
#line 308
c_rt_lib0clear(&___nl__im__12);
#line 308
//clear ___nl__int__13;
#line 308
//clear ___nl__int__14;
#line 308
//clear ___nl__int__15;
#line 308
//clear ___nl__bool__16;
#line 308
c_rt_lib0clear(&___nl__im__17);
#line 308
c_rt_lib0clear(&___nl__im__21);
#line 308
//clear ___nl__bool__22;
#line 308
c_rt_lib0clear(&___nl__im__23);
#line 308
c_rt_lib0clear(&___nl__im__34);
#line 308
//clear ___nl__bool__36;
#line 308
c_rt_lib0clear(&___nl__im__37);
#line 308
c_rt_lib0clear(&___nl__im__38);
#line 308
c_rt_lib0clear(&___nl__im__40);
#line 308
c_rt_lib0clear(&___nl__im__41);
#line 308
c_rt_lib0clear(&___nl__im__46);
#line 308
c_rt_lib0clear(&___nl__im__47);
#line 308
c_rt_lib0clear(&___nl__im__48);
#line 308
return ___nl__im__49;
#line 309
goto label_1795;
#line 309
label_252:
;
#line 309
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(515)));
#line 309
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 310
c_rt_lib0move(&___nl__im__52, wprinter0build_sim(___nl__im__50));
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
c_rt_lib0clear(&___nl__im__8);
#line 310
c_rt_lib0clear(&___nl__im__9);
#line 310
c_rt_lib0clear(&___nl__im__10);
#line 310
c_rt_lib0clear(&___nl__im__11);
#line 310
c_rt_lib0clear(&___nl__im__12);
#line 310
//clear ___nl__int__13;
#line 310
//clear ___nl__int__14;
#line 310
//clear ___nl__int__15;
#line 310
//clear ___nl__bool__16;
#line 310
c_rt_lib0clear(&___nl__im__17);
#line 310
c_rt_lib0clear(&___nl__im__21);
#line 310
//clear ___nl__bool__22;
#line 310
c_rt_lib0clear(&___nl__im__23);
#line 310
c_rt_lib0clear(&___nl__im__34);
#line 310
//clear ___nl__bool__36;
#line 310
c_rt_lib0clear(&___nl__im__37);
#line 310
c_rt_lib0clear(&___nl__im__38);
#line 310
c_rt_lib0clear(&___nl__im__40);
#line 310
c_rt_lib0clear(&___nl__im__41);
#line 310
c_rt_lib0clear(&___nl__im__46);
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
return ___nl__im__52;
#line 311
goto label_1795;
#line 311
label_290:
;
#line 311
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1102)));
#line 311
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 312
c_rt_lib0move(&___nl__im__58,___get_global_string_const(465));
#line 312
c_rt_lib0move(&___nl__im__57, wprinter0build_sim(___nl__im__58));
#line 312
c_rt_lib0clear(&___nl__im__58);
#line 312
c_rt_lib0move(&___nl__im__59, pretty_printer_priv0print_val(___nl__im__53));
#line 312
c_rt_lib0move(&___nl__im__61,___get_global_string_const(331));
#line 312
c_rt_lib0move(&___nl__im__60, wprinter0build_sim(___nl__im__61));
#line 312
c_rt_lib0clear(&___nl__im__61);
#line 312
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(3, ___nl__im__57, ___nl__im__59, ___nl__im__60));
#line 312
c_rt_lib0clear(&___nl__im__57);
#line 312
c_rt_lib0clear(&___nl__im__59);
#line 312
c_rt_lib0clear(&___nl__im__60);
#line 312
c_rt_lib0move(&___nl__im__55, wprinter0build_pretty_a(___nl__im__56));
#line 312
c_rt_lib0clear(&___nl__im__56);
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
//clear ___nl__bool__2;
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
//clear ___nl__int__4;
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
//clear ___nl__int__13;
#line 312
//clear ___nl__int__14;
#line 312
//clear ___nl__int__15;
#line 312
//clear ___nl__bool__16;
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
//clear ___nl__bool__22;
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__34);
#line 312
//clear ___nl__bool__36;
#line 312
c_rt_lib0clear(&___nl__im__37);
#line 312
c_rt_lib0clear(&___nl__im__38);
#line 312
c_rt_lib0clear(&___nl__im__40);
#line 312
c_rt_lib0clear(&___nl__im__41);
#line 312
c_rt_lib0clear(&___nl__im__46);
#line 312
c_rt_lib0clear(&___nl__im__47);
#line 312
c_rt_lib0clear(&___nl__im__48);
#line 312
c_rt_lib0clear(&___nl__im__49);
#line 312
c_rt_lib0clear(&___nl__im__50);
#line 312
c_rt_lib0clear(&___nl__im__51);
#line 312
c_rt_lib0clear(&___nl__im__52);
#line 312
c_rt_lib0clear(&___nl__im__53);
#line 312
c_rt_lib0clear(&___nl__im__54);
#line 312
return ___nl__im__55;
#line 313
goto label_1795;
#line 313
label_343:
;
#line 313
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1104)));
#line 313
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 315
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(1110)));
#line 315
c_rt_lib0move(&___nl__im__66, pretty_printer_priv0print_val(___nl__im__67));
#line 315
c_rt_lib0clear(&___nl__im__67);
#line 316
c_rt_lib0move(&___nl__im__68, wprinter0get_sep());
#line 317
c_rt_lib0move(&___nl__im__72,___get_global_string_const(1293));
#line 317
c_rt_lib0move(&___nl__im__71, wprinter0build_sim(___nl__im__72));
#line 317
c_rt_lib0clear(&___nl__im__72);
#line 317
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(1111)));
#line 317
c_rt_lib0move(&___nl__im__73, pretty_printer_priv0print_val(___nl__im__74));
#line 317
c_rt_lib0clear(&___nl__im__74);
#line 317
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(2, ___nl__im__71, ___nl__im__73));
#line 317
c_rt_lib0clear(&___nl__im__71);
#line 317
c_rt_lib0clear(&___nl__im__73);
#line 317
c_rt_lib0move(&___nl__im__69, wprinter0build_pretty_op_l(___nl__im__70));
#line 317
c_rt_lib0clear(&___nl__im__70);
#line 318
c_rt_lib0move(&___nl__im__75, wprinter0get_sep());
#line 319
c_rt_lib0move(&___nl__im__79,___get_global_string_const(924));
#line 319
c_rt_lib0move(&___nl__im__78, wprinter0build_sim(___nl__im__79));
#line 319
c_rt_lib0clear(&___nl__im__79);
#line 319
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(1112)));
#line 319
c_rt_lib0move(&___nl__im__80, pretty_printer_priv0print_val(___nl__im__81));
#line 319
c_rt_lib0clear(&___nl__im__81);
#line 319
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(2, ___nl__im__78, ___nl__im__80));
#line 319
c_rt_lib0clear(&___nl__im__78);
#line 319
c_rt_lib0clear(&___nl__im__80);
#line 319
c_rt_lib0move(&___nl__im__76, wprinter0build_pretty_op_l(___nl__im__77));
#line 319
c_rt_lib0clear(&___nl__im__77);
#line 319
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_mk(5, ___nl__im__66, ___nl__im__68, ___nl__im__69, ___nl__im__75, ___nl__im__76));
#line 319
c_rt_lib0clear(&___nl__im__66);
#line 319
c_rt_lib0clear(&___nl__im__68);
#line 319
c_rt_lib0clear(&___nl__im__69);
#line 319
c_rt_lib0clear(&___nl__im__75);
#line 319
c_rt_lib0clear(&___nl__im__76);
#line 319
c_rt_lib0move(&___nl__im__64, wprinter0build_pretty_a(___nl__im__65));
#line 319
c_rt_lib0clear(&___nl__im__65);
#line 319
c_rt_lib0clear(&___nl__im__0);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
//clear ___nl__bool__2;
#line 319
c_rt_lib0clear(&___nl__im__3);
#line 319
//clear ___nl__int__4;
#line 319
c_rt_lib0clear(&___nl__im__5);
#line 319
c_rt_lib0clear(&___nl__im__6);
#line 319
c_rt_lib0clear(&___nl__im__8);
#line 319
c_rt_lib0clear(&___nl__im__9);
#line 319
c_rt_lib0clear(&___nl__im__10);
#line 319
c_rt_lib0clear(&___nl__im__11);
#line 319
c_rt_lib0clear(&___nl__im__12);
#line 319
//clear ___nl__int__13;
#line 319
//clear ___nl__int__14;
#line 319
//clear ___nl__int__15;
#line 319
//clear ___nl__bool__16;
#line 319
c_rt_lib0clear(&___nl__im__17);
#line 319
c_rt_lib0clear(&___nl__im__21);
#line 319
//clear ___nl__bool__22;
#line 319
c_rt_lib0clear(&___nl__im__23);
#line 319
c_rt_lib0clear(&___nl__im__34);
#line 319
//clear ___nl__bool__36;
#line 319
c_rt_lib0clear(&___nl__im__37);
#line 319
c_rt_lib0clear(&___nl__im__38);
#line 319
c_rt_lib0clear(&___nl__im__40);
#line 319
c_rt_lib0clear(&___nl__im__41);
#line 319
c_rt_lib0clear(&___nl__im__46);
#line 319
c_rt_lib0clear(&___nl__im__47);
#line 319
c_rt_lib0clear(&___nl__im__48);
#line 319
c_rt_lib0clear(&___nl__im__49);
#line 319
c_rt_lib0clear(&___nl__im__50);
#line 319
c_rt_lib0clear(&___nl__im__51);
#line 319
c_rt_lib0clear(&___nl__im__52);
#line 319
c_rt_lib0clear(&___nl__im__53);
#line 319
c_rt_lib0clear(&___nl__im__54);
#line 319
c_rt_lib0clear(&___nl__im__55);
#line 319
c_rt_lib0clear(&___nl__im__62);
#line 319
c_rt_lib0clear(&___nl__im__63);
#line 319
return ___nl__im__64;
#line 321
goto label_1795;
#line 321
label_421:
;
#line 321
c_rt_lib0move(&___nl__im__83, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(245)));
#line 321
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 322
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(568)));
#line 323
c_rt_lib0move(&___nl__im__86,___get_global_string_const(1099));
#line 323
___nl__bool__85 = c_rt_lib0eq(___nl__im__84, ___nl__im__86);
#line 323
c_rt_lib0clear(&___nl__im__86);
#line 323
___nl__bool__85 = !___nl__bool__85;
#line 323
if(___nl__bool__85){ goto label_498;}
#line 325
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 325
c_rt_lib0move(&___nl__im__91, pretty_printer_priv0print_val(___nl__im__92));
#line 325
c_rt_lib0clear(&___nl__im__92);
#line 325
c_rt_lib0move(&___nl__im__94,___get_global_string_const(325));
#line 325
c_rt_lib0move(&___nl__im__93, wprinter0build_sim(___nl__im__94));
#line 325
c_rt_lib0clear(&___nl__im__94);
#line 325
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__91, ___nl__im__93));
#line 325
c_rt_lib0clear(&___nl__im__91);
#line 325
c_rt_lib0clear(&___nl__im__93);
#line 325
c_rt_lib0move(&___nl__im__89, wprinter0build_pretty_l(___nl__im__90));
#line 325
c_rt_lib0clear(&___nl__im__90);
#line 326
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 326
c_rt_lib0move(&___nl__im__95, pretty_printer_priv0print_val(___nl__im__96));
#line 326
c_rt_lib0clear(&___nl__im__96);
#line 327
c_rt_lib0move(&___nl__im__98,___get_global_string_const(326));
#line 327
c_rt_lib0move(&___nl__im__97, wprinter0build_sim(___nl__im__98));
#line 327
c_rt_lib0clear(&___nl__im__98);
#line 327
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_mk(3, ___nl__im__89, ___nl__im__95, ___nl__im__97));
#line 327
c_rt_lib0clear(&___nl__im__89);
#line 327
c_rt_lib0clear(&___nl__im__95);
#line 327
c_rt_lib0clear(&___nl__im__97);
#line 327
c_rt_lib0move(&___nl__im__87, wprinter0build_pretty_a(___nl__im__88));
#line 327
c_rt_lib0clear(&___nl__im__88);
#line 327
c_rt_lib0clear(&___nl__im__0);
#line 327
c_rt_lib0clear(&___nl__im__1);
#line 327
//clear ___nl__bool__2;
#line 327
c_rt_lib0clear(&___nl__im__3);
#line 327
//clear ___nl__int__4;
#line 327
c_rt_lib0clear(&___nl__im__5);
#line 327
c_rt_lib0clear(&___nl__im__6);
#line 327
c_rt_lib0clear(&___nl__im__8);
#line 327
c_rt_lib0clear(&___nl__im__9);
#line 327
c_rt_lib0clear(&___nl__im__10);
#line 327
c_rt_lib0clear(&___nl__im__11);
#line 327
c_rt_lib0clear(&___nl__im__12);
#line 327
//clear ___nl__int__13;
#line 327
//clear ___nl__int__14;
#line 327
//clear ___nl__int__15;
#line 327
//clear ___nl__bool__16;
#line 327
c_rt_lib0clear(&___nl__im__17);
#line 327
c_rt_lib0clear(&___nl__im__21);
#line 327
//clear ___nl__bool__22;
#line 327
c_rt_lib0clear(&___nl__im__23);
#line 327
c_rt_lib0clear(&___nl__im__34);
#line 327
//clear ___nl__bool__36;
#line 327
c_rt_lib0clear(&___nl__im__37);
#line 327
c_rt_lib0clear(&___nl__im__38);
#line 327
c_rt_lib0clear(&___nl__im__40);
#line 327
c_rt_lib0clear(&___nl__im__41);
#line 327
c_rt_lib0clear(&___nl__im__46);
#line 327
c_rt_lib0clear(&___nl__im__47);
#line 327
c_rt_lib0clear(&___nl__im__48);
#line 327
c_rt_lib0clear(&___nl__im__49);
#line 327
c_rt_lib0clear(&___nl__im__50);
#line 327
c_rt_lib0clear(&___nl__im__51);
#line 327
c_rt_lib0clear(&___nl__im__52);
#line 327
c_rt_lib0clear(&___nl__im__53);
#line 327
c_rt_lib0clear(&___nl__im__54);
#line 327
c_rt_lib0clear(&___nl__im__55);
#line 327
c_rt_lib0clear(&___nl__im__62);
#line 327
c_rt_lib0clear(&___nl__im__63);
#line 327
c_rt_lib0clear(&___nl__im__64);
#line 327
c_rt_lib0clear(&___nl__im__82);
#line 327
c_rt_lib0clear(&___nl__im__83);
#line 327
c_rt_lib0clear(&___nl__im__84);
#line 327
//clear ___nl__bool__85;
#line 327
return ___nl__im__87;
#line 329
goto label_910;
#line 329
label_498:
;
#line 329
c_rt_lib0move(&___nl__im__99,___get_global_string_const(1100));
#line 329
___nl__bool__85 = c_rt_lib0eq(___nl__im__84, ___nl__im__99);
#line 329
c_rt_lib0clear(&___nl__im__99);
#line 329
___nl__bool__85 = !___nl__bool__85;
#line 329
if(___nl__bool__85){ goto label_573;}
#line 331
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 331
c_rt_lib0move(&___nl__im__104, pretty_printer_priv0print_val(___nl__im__105));
#line 331
c_rt_lib0clear(&___nl__im__105);
#line 331
c_rt_lib0move(&___nl__im__107,___get_global_string_const(315));
#line 331
c_rt_lib0move(&___nl__im__106, wprinter0build_sim(___nl__im__107));
#line 331
c_rt_lib0clear(&___nl__im__107);
#line 331
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(2, ___nl__im__104, ___nl__im__106));
#line 331
c_rt_lib0clear(&___nl__im__104);
#line 331
c_rt_lib0clear(&___nl__im__106);
#line 331
c_rt_lib0move(&___nl__im__102, wprinter0build_pretty_l(___nl__im__103));
#line 331
c_rt_lib0clear(&___nl__im__103);
#line 332
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 332
c_rt_lib0move(&___nl__im__108, pretty_printer_priv0print_val(___nl__im__109));
#line 332
c_rt_lib0clear(&___nl__im__109);
#line 333
c_rt_lib0move(&___nl__im__111,___get_global_string_const(316));
#line 333
c_rt_lib0move(&___nl__im__110, wprinter0build_sim(___nl__im__111));
#line 333
c_rt_lib0clear(&___nl__im__111);
#line 333
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_mk(3, ___nl__im__102, ___nl__im__108, ___nl__im__110));
#line 333
c_rt_lib0clear(&___nl__im__102);
#line 333
c_rt_lib0clear(&___nl__im__108);
#line 333
c_rt_lib0clear(&___nl__im__110);
#line 333
c_rt_lib0move(&___nl__im__100, wprinter0build_pretty_a(___nl__im__101));
#line 333
c_rt_lib0clear(&___nl__im__101);
#line 333
c_rt_lib0clear(&___nl__im__0);
#line 333
c_rt_lib0clear(&___nl__im__1);
#line 333
//clear ___nl__bool__2;
#line 333
c_rt_lib0clear(&___nl__im__3);
#line 333
//clear ___nl__int__4;
#line 333
c_rt_lib0clear(&___nl__im__5);
#line 333
c_rt_lib0clear(&___nl__im__6);
#line 333
c_rt_lib0clear(&___nl__im__8);
#line 333
c_rt_lib0clear(&___nl__im__9);
#line 333
c_rt_lib0clear(&___nl__im__10);
#line 333
c_rt_lib0clear(&___nl__im__11);
#line 333
c_rt_lib0clear(&___nl__im__12);
#line 333
//clear ___nl__int__13;
#line 333
//clear ___nl__int__14;
#line 333
//clear ___nl__int__15;
#line 333
//clear ___nl__bool__16;
#line 333
c_rt_lib0clear(&___nl__im__17);
#line 333
c_rt_lib0clear(&___nl__im__21);
#line 333
//clear ___nl__bool__22;
#line 333
c_rt_lib0clear(&___nl__im__23);
#line 333
c_rt_lib0clear(&___nl__im__34);
#line 333
//clear ___nl__bool__36;
#line 333
c_rt_lib0clear(&___nl__im__37);
#line 333
c_rt_lib0clear(&___nl__im__38);
#line 333
c_rt_lib0clear(&___nl__im__40);
#line 333
c_rt_lib0clear(&___nl__im__41);
#line 333
c_rt_lib0clear(&___nl__im__46);
#line 333
c_rt_lib0clear(&___nl__im__47);
#line 333
c_rt_lib0clear(&___nl__im__48);
#line 333
c_rt_lib0clear(&___nl__im__49);
#line 333
c_rt_lib0clear(&___nl__im__50);
#line 333
c_rt_lib0clear(&___nl__im__51);
#line 333
c_rt_lib0clear(&___nl__im__52);
#line 333
c_rt_lib0clear(&___nl__im__53);
#line 333
c_rt_lib0clear(&___nl__im__54);
#line 333
c_rt_lib0clear(&___nl__im__55);
#line 333
c_rt_lib0clear(&___nl__im__62);
#line 333
c_rt_lib0clear(&___nl__im__63);
#line 333
c_rt_lib0clear(&___nl__im__64);
#line 333
c_rt_lib0clear(&___nl__im__82);
#line 333
c_rt_lib0clear(&___nl__im__83);
#line 333
c_rt_lib0clear(&___nl__im__84);
#line 333
//clear ___nl__bool__85;
#line 333
c_rt_lib0clear(&___nl__im__87);
#line 333
return ___nl__im__100;
#line 335
goto label_910;
#line 335
label_573:
;
#line 335
c_rt_lib0move(&___nl__im__112,___get_global_string_const(586));
#line 335
___nl__bool__85 = c_rt_lib0eq(___nl__im__84, ___nl__im__112);
#line 335
c_rt_lib0clear(&___nl__im__112);
#line 335
___nl__bool__85 = !___nl__bool__85;
#line 335
if(___nl__bool__85){ goto label_664;}
#line 337
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 337
___nl__bool__114 = pretty_printer_priv0is_to_change_ov(___nl__im__115);
#line 337
c_rt_lib0clear(&___nl__im__115);
#line 337
___nl__bool__114 = !___nl__bool__114;
#line 337
if(___nl__bool__114){ goto label_600;}
#line 339
c_rt_lib0move(&___nl__im__118,___get_global_string_const(465));
#line 339
c_rt_lib0move(&___nl__im__117, wprinter0build_sim(___nl__im__118));
#line 339
c_rt_lib0clear(&___nl__im__118);
#line 340
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 340
c_rt_lib0move(&___nl__im__119, pretty_printer_priv0print_val(___nl__im__120));
#line 340
c_rt_lib0clear(&___nl__im__120);
#line 341
c_rt_lib0move(&___nl__im__122,___get_global_string_const(331));
#line 341
c_rt_lib0move(&___nl__im__121, wprinter0build_sim(___nl__im__122));
#line 341
c_rt_lib0clear(&___nl__im__122);
#line 341
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_mk(3, ___nl__im__117, ___nl__im__119, ___nl__im__121));
#line 341
c_rt_lib0clear(&___nl__im__117);
#line 341
c_rt_lib0clear(&___nl__im__119);
#line 341
c_rt_lib0clear(&___nl__im__121);
#line 341
c_rt_lib0move(&___nl__im__113, wprinter0build_pretty_a(___nl__im__116));
#line 341
c_rt_lib0clear(&___nl__im__116);
#line 343
goto label_605;
#line 343
label_600:
;
#line 344
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 344
c_rt_lib0move(&___nl__im__113, pretty_printer_priv0print_val(___nl__im__123));
#line 344
c_rt_lib0clear(&___nl__im__123);
#line 345
goto label_605;
#line 345
label_605:
;
#line 345
//clear ___nl__bool__114;
#line 346
c_rt_lib0move(&___nl__im__126, wprinter0build_sim(___nl__im__84));
#line 346
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 346
c_rt_lib0move(&___nl__im__127, pretty_printer_priv0print_val(___nl__im__128));
#line 346
c_rt_lib0clear(&___nl__im__128);
#line 346
c_rt_lib0move(&___nl__im__125, c_rt_lib0array_mk(3, ___nl__im__113, ___nl__im__126, ___nl__im__127));
#line 346
c_rt_lib0clear(&___nl__im__126);
#line 346
c_rt_lib0clear(&___nl__im__127);
#line 346
c_rt_lib0move(&___nl__im__124, wprinter0build_pretty_op_l(___nl__im__125));
#line 346
c_rt_lib0clear(&___nl__im__125);
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
c_rt_lib0clear(&___nl__im__1);
#line 346
//clear ___nl__bool__2;
#line 346
c_rt_lib0clear(&___nl__im__3);
#line 346
//clear ___nl__int__4;
#line 346
c_rt_lib0clear(&___nl__im__5);
#line 346
c_rt_lib0clear(&___nl__im__6);
#line 346
c_rt_lib0clear(&___nl__im__8);
#line 346
c_rt_lib0clear(&___nl__im__9);
#line 346
c_rt_lib0clear(&___nl__im__10);
#line 346
c_rt_lib0clear(&___nl__im__11);
#line 346
c_rt_lib0clear(&___nl__im__12);
#line 346
//clear ___nl__int__13;
#line 346
//clear ___nl__int__14;
#line 346
//clear ___nl__int__15;
#line 346
//clear ___nl__bool__16;
#line 346
c_rt_lib0clear(&___nl__im__17);
#line 346
c_rt_lib0clear(&___nl__im__21);
#line 346
//clear ___nl__bool__22;
#line 346
c_rt_lib0clear(&___nl__im__23);
#line 346
c_rt_lib0clear(&___nl__im__34);
#line 346
//clear ___nl__bool__36;
#line 346
c_rt_lib0clear(&___nl__im__37);
#line 346
c_rt_lib0clear(&___nl__im__38);
#line 346
c_rt_lib0clear(&___nl__im__40);
#line 346
c_rt_lib0clear(&___nl__im__41);
#line 346
c_rt_lib0clear(&___nl__im__46);
#line 346
c_rt_lib0clear(&___nl__im__47);
#line 346
c_rt_lib0clear(&___nl__im__48);
#line 346
c_rt_lib0clear(&___nl__im__49);
#line 346
c_rt_lib0clear(&___nl__im__50);
#line 346
c_rt_lib0clear(&___nl__im__51);
#line 346
c_rt_lib0clear(&___nl__im__52);
#line 346
c_rt_lib0clear(&___nl__im__53);
#line 346
c_rt_lib0clear(&___nl__im__54);
#line 346
c_rt_lib0clear(&___nl__im__55);
#line 346
c_rt_lib0clear(&___nl__im__62);
#line 346
c_rt_lib0clear(&___nl__im__63);
#line 346
c_rt_lib0clear(&___nl__im__64);
#line 346
c_rt_lib0clear(&___nl__im__82);
#line 346
c_rt_lib0clear(&___nl__im__83);
#line 346
c_rt_lib0clear(&___nl__im__84);
#line 346
//clear ___nl__bool__85;
#line 346
c_rt_lib0clear(&___nl__im__87);
#line 346
c_rt_lib0clear(&___nl__im__100);
#line 346
c_rt_lib0clear(&___nl__im__113);
#line 346
return ___nl__im__124;
#line 347
goto label_910;
#line 347
label_664:
;
#line 347
c_rt_lib0move(&___nl__im__129,___get_global_string_const(1101));
#line 347
___nl__bool__85 = c_rt_lib0eq(___nl__im__84, ___nl__im__129);
#line 347
c_rt_lib0clear(&___nl__im__129);
#line 347
___nl__bool__85 = !___nl__bool__85;
#line 347
if(___nl__bool__85){ goto label_750;}
#line 349
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 349
c_rt_lib0move(&___nl__im__132, pretty_printer_priv0print_val(___nl__im__133));
#line 349
c_rt_lib0clear(&___nl__im__133);
#line 350
c_rt_lib0move(&___nl__im__134, wprinter0get_sep());
#line 351
c_rt_lib0move(&___nl__im__136,___get_global_string_const(1125));
#line 351
c_rt_lib0move(&___nl__im__135, wprinter0build_sim(___nl__im__136));
#line 351
c_rt_lib0clear(&___nl__im__136);
#line 352
c_rt_lib0move(&___nl__im__137, wprinter0get_sep());
#line 353
c_rt_lib0move(&___nl__im__139,___get_global_string_const(538));
#line 353
c_rt_lib0move(&___nl__im__138, wprinter0build_sim(___nl__im__139));
#line 353
c_rt_lib0clear(&___nl__im__139);
#line 354
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 354
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(229)));
#line 354
c_rt_lib0clear(&___nl__im__143);
#line 354
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 354
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_string_const(229)));
#line 354
c_rt_lib0clear(&___nl__im__145);
#line 354
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__144, ___get_global_string_const(1105)));
#line 354
c_rt_lib0clear(&___nl__im__142);
#line 354
c_rt_lib0clear(&___nl__im__144);
#line 354
c_rt_lib0move(&___nl__im__140, wprinter0build_sim(___nl__im__141));
#line 354
c_rt_lib0clear(&___nl__im__141);
#line 354
c_rt_lib0move(&___nl__im__131, c_rt_lib0array_mk(6, ___nl__im__132, ___nl__im__134, ___nl__im__135, ___nl__im__137, ___nl__im__138, ___nl__im__140));
#line 354
c_rt_lib0clear(&___nl__im__132);
#line 354
c_rt_lib0clear(&___nl__im__134);
#line 354
c_rt_lib0clear(&___nl__im__135);
#line 354
c_rt_lib0clear(&___nl__im__137);
#line 354
c_rt_lib0clear(&___nl__im__138);
#line 354
c_rt_lib0clear(&___nl__im__140);
#line 354
c_rt_lib0move(&___nl__im__130, wprinter0build_pretty_op_l(___nl__im__131));
#line 354
c_rt_lib0clear(&___nl__im__131);
#line 354
c_rt_lib0clear(&___nl__im__0);
#line 354
c_rt_lib0clear(&___nl__im__1);
#line 354
//clear ___nl__bool__2;
#line 354
c_rt_lib0clear(&___nl__im__3);
#line 354
//clear ___nl__int__4;
#line 354
c_rt_lib0clear(&___nl__im__5);
#line 354
c_rt_lib0clear(&___nl__im__6);
#line 354
c_rt_lib0clear(&___nl__im__8);
#line 354
c_rt_lib0clear(&___nl__im__9);
#line 354
c_rt_lib0clear(&___nl__im__10);
#line 354
c_rt_lib0clear(&___nl__im__11);
#line 354
c_rt_lib0clear(&___nl__im__12);
#line 354
//clear ___nl__int__13;
#line 354
//clear ___nl__int__14;
#line 354
//clear ___nl__int__15;
#line 354
//clear ___nl__bool__16;
#line 354
c_rt_lib0clear(&___nl__im__17);
#line 354
c_rt_lib0clear(&___nl__im__21);
#line 354
//clear ___nl__bool__22;
#line 354
c_rt_lib0clear(&___nl__im__23);
#line 354
c_rt_lib0clear(&___nl__im__34);
#line 354
//clear ___nl__bool__36;
#line 354
c_rt_lib0clear(&___nl__im__37);
#line 354
c_rt_lib0clear(&___nl__im__38);
#line 354
c_rt_lib0clear(&___nl__im__40);
#line 354
c_rt_lib0clear(&___nl__im__41);
#line 354
c_rt_lib0clear(&___nl__im__46);
#line 354
c_rt_lib0clear(&___nl__im__47);
#line 354
c_rt_lib0clear(&___nl__im__48);
#line 354
c_rt_lib0clear(&___nl__im__49);
#line 354
c_rt_lib0clear(&___nl__im__50);
#line 354
c_rt_lib0clear(&___nl__im__51);
#line 354
c_rt_lib0clear(&___nl__im__52);
#line 354
c_rt_lib0clear(&___nl__im__53);
#line 354
c_rt_lib0clear(&___nl__im__54);
#line 354
c_rt_lib0clear(&___nl__im__55);
#line 354
c_rt_lib0clear(&___nl__im__62);
#line 354
c_rt_lib0clear(&___nl__im__63);
#line 354
c_rt_lib0clear(&___nl__im__64);
#line 354
c_rt_lib0clear(&___nl__im__82);
#line 354
c_rt_lib0clear(&___nl__im__83);
#line 354
c_rt_lib0clear(&___nl__im__84);
#line 354
//clear ___nl__bool__85;
#line 354
c_rt_lib0clear(&___nl__im__87);
#line 354
c_rt_lib0clear(&___nl__im__100);
#line 354
c_rt_lib0clear(&___nl__im__113);
#line 354
c_rt_lib0clear(&___nl__im__124);
#line 354
return ___nl__im__130;
#line 356
goto label_910;
#line 356
label_750:
;
#line 356
c_rt_lib0move(&___nl__im__146,___get_global_string_const(1202));
#line 356
___nl__bool__85 = c_rt_lib0eq(___nl__im__84, ___nl__im__146);
#line 356
c_rt_lib0clear(&___nl__im__146);
#line 356
___nl__bool__85 = !___nl__bool__85;
#line 356
if(___nl__bool__85){ goto label_837;}
#line 358
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 358
c_rt_lib0move(&___nl__im__149, pretty_printer_priv0print_val(___nl__im__150));
#line 358
c_rt_lib0clear(&___nl__im__150);
#line 359
c_rt_lib0move(&___nl__im__151, wprinter0get_sep());
#line 360
c_rt_lib0move(&___nl__im__153,___get_global_string_const(1124));
#line 360
c_rt_lib0move(&___nl__im__152, wprinter0build_sim(___nl__im__153));
#line 360
c_rt_lib0clear(&___nl__im__153);
#line 361
c_rt_lib0move(&___nl__im__154, wprinter0get_sep());
#line 362
c_rt_lib0move(&___nl__im__156,___get_global_string_const(538));
#line 362
c_rt_lib0move(&___nl__im__155, wprinter0build_sim(___nl__im__156));
#line 362
c_rt_lib0clear(&___nl__im__156);
#line 363
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 363
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_string_const(229)));
#line 363
c_rt_lib0clear(&___nl__im__160);
#line 363
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 363
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_string_const(229)));
#line 363
c_rt_lib0clear(&___nl__im__162);
#line 363
c_rt_lib0move(&___nl__im__158, c_rt_lib0priv_as(___nl__im__161, ___get_global_string_const(1105)));
#line 363
c_rt_lib0clear(&___nl__im__159);
#line 363
c_rt_lib0clear(&___nl__im__161);
#line 363
c_rt_lib0move(&___nl__im__157, wprinter0build_sim(___nl__im__158));
#line 363
c_rt_lib0clear(&___nl__im__158);
#line 363
c_rt_lib0move(&___nl__im__148, c_rt_lib0array_mk(6, ___nl__im__149, ___nl__im__151, ___nl__im__152, ___nl__im__154, ___nl__im__155, ___nl__im__157));
#line 363
c_rt_lib0clear(&___nl__im__149);
#line 363
c_rt_lib0clear(&___nl__im__151);
#line 363
c_rt_lib0clear(&___nl__im__152);
#line 363
c_rt_lib0clear(&___nl__im__154);
#line 363
c_rt_lib0clear(&___nl__im__155);
#line 363
c_rt_lib0clear(&___nl__im__157);
#line 363
c_rt_lib0move(&___nl__im__147, wprinter0build_pretty_op_l(___nl__im__148));
#line 363
c_rt_lib0clear(&___nl__im__148);
#line 363
c_rt_lib0clear(&___nl__im__0);
#line 363
c_rt_lib0clear(&___nl__im__1);
#line 363
//clear ___nl__bool__2;
#line 363
c_rt_lib0clear(&___nl__im__3);
#line 363
//clear ___nl__int__4;
#line 363
c_rt_lib0clear(&___nl__im__5);
#line 363
c_rt_lib0clear(&___nl__im__6);
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
//clear ___nl__int__13;
#line 363
//clear ___nl__int__14;
#line 363
//clear ___nl__int__15;
#line 363
//clear ___nl__bool__16;
#line 363
c_rt_lib0clear(&___nl__im__17);
#line 363
c_rt_lib0clear(&___nl__im__21);
#line 363
//clear ___nl__bool__22;
#line 363
c_rt_lib0clear(&___nl__im__23);
#line 363
c_rt_lib0clear(&___nl__im__34);
#line 363
//clear ___nl__bool__36;
#line 363
c_rt_lib0clear(&___nl__im__37);
#line 363
c_rt_lib0clear(&___nl__im__38);
#line 363
c_rt_lib0clear(&___nl__im__40);
#line 363
c_rt_lib0clear(&___nl__im__41);
#line 363
c_rt_lib0clear(&___nl__im__46);
#line 363
c_rt_lib0clear(&___nl__im__47);
#line 363
c_rt_lib0clear(&___nl__im__48);
#line 363
c_rt_lib0clear(&___nl__im__49);
#line 363
c_rt_lib0clear(&___nl__im__50);
#line 363
c_rt_lib0clear(&___nl__im__51);
#line 363
c_rt_lib0clear(&___nl__im__52);
#line 363
c_rt_lib0clear(&___nl__im__53);
#line 363
c_rt_lib0clear(&___nl__im__54);
#line 363
c_rt_lib0clear(&___nl__im__55);
#line 363
c_rt_lib0clear(&___nl__im__62);
#line 363
c_rt_lib0clear(&___nl__im__63);
#line 363
c_rt_lib0clear(&___nl__im__64);
#line 363
c_rt_lib0clear(&___nl__im__82);
#line 363
c_rt_lib0clear(&___nl__im__83);
#line 363
c_rt_lib0clear(&___nl__im__84);
#line 363
//clear ___nl__bool__85;
#line 363
c_rt_lib0clear(&___nl__im__87);
#line 363
c_rt_lib0clear(&___nl__im__100);
#line 363
c_rt_lib0clear(&___nl__im__113);
#line 363
c_rt_lib0clear(&___nl__im__124);
#line 363
c_rt_lib0clear(&___nl__im__130);
#line 363
return ___nl__im__147;
#line 365
goto label_910;
#line 365
label_837:
;
#line 367
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(285)));
#line 367
c_rt_lib0move(&___nl__im__167, pretty_printer_priv0print_val(___nl__im__168));
#line 367
c_rt_lib0clear(&___nl__im__168);
#line 367
c_rt_lib0move(&___nl__im__169, wprinter0get_sep());
#line 367
c_rt_lib0move(&___nl__im__170, wprinter0build_sim(___nl__im__84));
#line 367
c_rt_lib0move(&___nl__im__166, c_rt_lib0array_mk(3, ___nl__im__167, ___nl__im__169, ___nl__im__170));
#line 367
c_rt_lib0clear(&___nl__im__167);
#line 367
c_rt_lib0clear(&___nl__im__169);
#line 367
c_rt_lib0clear(&___nl__im__170);
#line 367
c_rt_lib0move(&___nl__im__165, wprinter0build_pretty_op_l(___nl__im__166));
#line 367
c_rt_lib0clear(&___nl__im__166);
#line 368
c_rt_lib0move(&___nl__im__171, wprinter0get_sep());
#line 369
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(286)));
#line 369
c_rt_lib0move(&___nl__im__172, pretty_printer_priv0print_val(___nl__im__173));
#line 369
c_rt_lib0clear(&___nl__im__173);
#line 369
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_mk(3, ___nl__im__165, ___nl__im__171, ___nl__im__172));
#line 369
c_rt_lib0clear(&___nl__im__165);
#line 369
c_rt_lib0clear(&___nl__im__171);
#line 369
c_rt_lib0clear(&___nl__im__172);
#line 369
c_rt_lib0move(&___nl__im__163, wprinter0build_pretty_op_l(___nl__im__164));
#line 369
c_rt_lib0clear(&___nl__im__164);
#line 369
c_rt_lib0clear(&___nl__im__0);
#line 369
c_rt_lib0clear(&___nl__im__1);
#line 369
//clear ___nl__bool__2;
#line 369
c_rt_lib0clear(&___nl__im__3);
#line 369
//clear ___nl__int__4;
#line 369
c_rt_lib0clear(&___nl__im__5);
#line 369
c_rt_lib0clear(&___nl__im__6);
#line 369
c_rt_lib0clear(&___nl__im__8);
#line 369
c_rt_lib0clear(&___nl__im__9);
#line 369
c_rt_lib0clear(&___nl__im__10);
#line 369
c_rt_lib0clear(&___nl__im__11);
#line 369
c_rt_lib0clear(&___nl__im__12);
#line 369
//clear ___nl__int__13;
#line 369
//clear ___nl__int__14;
#line 369
//clear ___nl__int__15;
#line 369
//clear ___nl__bool__16;
#line 369
c_rt_lib0clear(&___nl__im__17);
#line 369
c_rt_lib0clear(&___nl__im__21);
#line 369
//clear ___nl__bool__22;
#line 369
c_rt_lib0clear(&___nl__im__23);
#line 369
c_rt_lib0clear(&___nl__im__34);
#line 369
//clear ___nl__bool__36;
#line 369
c_rt_lib0clear(&___nl__im__37);
#line 369
c_rt_lib0clear(&___nl__im__38);
#line 369
c_rt_lib0clear(&___nl__im__40);
#line 369
c_rt_lib0clear(&___nl__im__41);
#line 369
c_rt_lib0clear(&___nl__im__46);
#line 369
c_rt_lib0clear(&___nl__im__47);
#line 369
c_rt_lib0clear(&___nl__im__48);
#line 369
c_rt_lib0clear(&___nl__im__49);
#line 369
c_rt_lib0clear(&___nl__im__50);
#line 369
c_rt_lib0clear(&___nl__im__51);
#line 369
c_rt_lib0clear(&___nl__im__52);
#line 369
c_rt_lib0clear(&___nl__im__53);
#line 369
c_rt_lib0clear(&___nl__im__54);
#line 369
c_rt_lib0clear(&___nl__im__55);
#line 369
c_rt_lib0clear(&___nl__im__62);
#line 369
c_rt_lib0clear(&___nl__im__63);
#line 369
c_rt_lib0clear(&___nl__im__64);
#line 369
c_rt_lib0clear(&___nl__im__82);
#line 369
c_rt_lib0clear(&___nl__im__83);
#line 369
c_rt_lib0clear(&___nl__im__84);
#line 369
//clear ___nl__bool__85;
#line 369
c_rt_lib0clear(&___nl__im__87);
#line 369
c_rt_lib0clear(&___nl__im__100);
#line 369
c_rt_lib0clear(&___nl__im__113);
#line 369
c_rt_lib0clear(&___nl__im__124);
#line 369
c_rt_lib0clear(&___nl__im__130);
#line 369
c_rt_lib0clear(&___nl__im__147);
#line 369
return ___nl__im__163;
#line 371
goto label_910;
#line 371
label_910:
;
#line 371
//clear ___nl__bool__85;
#line 371
c_rt_lib0clear(&___nl__im__87);
#line 371
c_rt_lib0clear(&___nl__im__100);
#line 371
c_rt_lib0clear(&___nl__im__113);
#line 371
c_rt_lib0clear(&___nl__im__124);
#line 371
c_rt_lib0clear(&___nl__im__130);
#line 371
c_rt_lib0clear(&___nl__im__147);
#line 371
c_rt_lib0clear(&___nl__im__163);
#line 372
goto label_1795;
#line 372
label_920:
;
#line 372
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1109)));
#line 372
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 373
c_rt_lib0move(&___nl__im__178, pretty_printer_priv0print_val(___nl__im__174));
#line 373
c_rt_lib0move(&___nl__im__180,___get_global_string_const(200));
#line 373
c_rt_lib0move(&___nl__im__179, wprinter0build_sim(___nl__im__180));
#line 373
c_rt_lib0clear(&___nl__im__180);
#line 373
c_rt_lib0move(&___nl__im__177, c_rt_lib0array_mk(2, ___nl__im__178, ___nl__im__179));
#line 373
c_rt_lib0clear(&___nl__im__178);
#line 373
c_rt_lib0clear(&___nl__im__179);
#line 373
c_rt_lib0move(&___nl__im__176, wprinter0build_pretty_op_l(___nl__im__177));
#line 373
c_rt_lib0clear(&___nl__im__177);
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
c_rt_lib0clear(&___nl__im__8);
#line 373
c_rt_lib0clear(&___nl__im__9);
#line 373
c_rt_lib0clear(&___nl__im__10);
#line 373
c_rt_lib0clear(&___nl__im__11);
#line 373
c_rt_lib0clear(&___nl__im__12);
#line 373
//clear ___nl__int__13;
#line 373
//clear ___nl__int__14;
#line 373
//clear ___nl__int__15;
#line 373
//clear ___nl__bool__16;
#line 373
c_rt_lib0clear(&___nl__im__17);
#line 373
c_rt_lib0clear(&___nl__im__21);
#line 373
//clear ___nl__bool__22;
#line 373
c_rt_lib0clear(&___nl__im__23);
#line 373
c_rt_lib0clear(&___nl__im__34);
#line 373
//clear ___nl__bool__36;
#line 373
c_rt_lib0clear(&___nl__im__37);
#line 373
c_rt_lib0clear(&___nl__im__38);
#line 373
c_rt_lib0clear(&___nl__im__40);
#line 373
c_rt_lib0clear(&___nl__im__41);
#line 373
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__62);
#line 373
c_rt_lib0clear(&___nl__im__63);
#line 373
c_rt_lib0clear(&___nl__im__64);
#line 373
c_rt_lib0clear(&___nl__im__82);
#line 373
c_rt_lib0clear(&___nl__im__83);
#line 373
c_rt_lib0clear(&___nl__im__84);
#line 373
c_rt_lib0clear(&___nl__im__174);
#line 373
c_rt_lib0clear(&___nl__im__175);
#line 373
return ___nl__im__176;
#line 374
goto label_1795;
#line 374
label_978:
;
#line 374
c_rt_lib0move(&___nl__im__182, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1108)));
#line 374
c_rt_lib0copy(&___nl__im__181, ___nl__im__182);
#line 375
c_rt_lib0move(&___nl__im__185, pretty_printer_priv0print_val(___nl__im__181));
#line 375
c_rt_lib0move(&___nl__im__187,___get_global_string_const(801));
#line 375
c_rt_lib0move(&___nl__im__186, wprinter0build_sim(___nl__im__187));
#line 375
c_rt_lib0clear(&___nl__im__187);
#line 375
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_mk(2, ___nl__im__185, ___nl__im__186));
#line 375
c_rt_lib0clear(&___nl__im__185);
#line 375
c_rt_lib0clear(&___nl__im__186);
#line 375
c_rt_lib0move(&___nl__im__183, wprinter0build_pretty_op_l(___nl__im__184));
#line 375
c_rt_lib0clear(&___nl__im__184);
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
c_rt_lib0clear(&___nl__im__8);
#line 375
c_rt_lib0clear(&___nl__im__9);
#line 375
c_rt_lib0clear(&___nl__im__10);
#line 375
c_rt_lib0clear(&___nl__im__11);
#line 375
c_rt_lib0clear(&___nl__im__12);
#line 375
//clear ___nl__int__13;
#line 375
//clear ___nl__int__14;
#line 375
//clear ___nl__int__15;
#line 375
//clear ___nl__bool__16;
#line 375
c_rt_lib0clear(&___nl__im__17);
#line 375
c_rt_lib0clear(&___nl__im__21);
#line 375
//clear ___nl__bool__22;
#line 375
c_rt_lib0clear(&___nl__im__23);
#line 375
c_rt_lib0clear(&___nl__im__34);
#line 375
//clear ___nl__bool__36;
#line 375
c_rt_lib0clear(&___nl__im__37);
#line 375
c_rt_lib0clear(&___nl__im__38);
#line 375
c_rt_lib0clear(&___nl__im__40);
#line 375
c_rt_lib0clear(&___nl__im__41);
#line 375
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__62);
#line 375
c_rt_lib0clear(&___nl__im__63);
#line 375
c_rt_lib0clear(&___nl__im__64);
#line 375
c_rt_lib0clear(&___nl__im__82);
#line 375
c_rt_lib0clear(&___nl__im__83);
#line 375
c_rt_lib0clear(&___nl__im__84);
#line 375
c_rt_lib0clear(&___nl__im__174);
#line 375
c_rt_lib0clear(&___nl__im__175);
#line 375
c_rt_lib0clear(&___nl__im__176);
#line 375
c_rt_lib0clear(&___nl__im__181);
#line 375
c_rt_lib0clear(&___nl__im__182);
#line 375
return ___nl__im__183;
#line 376
goto label_1795;
#line 376
label_1039:
;
#line 376
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1106)));
#line 376
c_rt_lib0copy(&___nl__im__188, ___nl__im__189);
#line 377
c_rt_lib0move(&___nl__im__192, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_string_const(568)));
#line 377
c_rt_lib0move(&___nl__im__191, wprinter0build_sim(___nl__im__192));
#line 377
c_rt_lib0clear(&___nl__im__192);
#line 377
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_string_const(234)));
#line 377
c_rt_lib0move(&___nl__im__193, pretty_printer_priv0print_val(___nl__im__194));
#line 377
c_rt_lib0clear(&___nl__im__194);
#line 377
c_rt_lib0move(&___nl__im__190, wprinter0build_pretty_bind(___nl__im__191, ___nl__im__193));
#line 377
c_rt_lib0clear(&___nl__im__191);
#line 377
c_rt_lib0clear(&___nl__im__193);
#line 377
c_rt_lib0clear(&___nl__im__0);
#line 377
c_rt_lib0clear(&___nl__im__1);
#line 377
//clear ___nl__bool__2;
#line 377
c_rt_lib0clear(&___nl__im__3);
#line 377
//clear ___nl__int__4;
#line 377
c_rt_lib0clear(&___nl__im__5);
#line 377
c_rt_lib0clear(&___nl__im__6);
#line 377
c_rt_lib0clear(&___nl__im__8);
#line 377
c_rt_lib0clear(&___nl__im__9);
#line 377
c_rt_lib0clear(&___nl__im__10);
#line 377
c_rt_lib0clear(&___nl__im__11);
#line 377
c_rt_lib0clear(&___nl__im__12);
#line 377
//clear ___nl__int__13;
#line 377
//clear ___nl__int__14;
#line 377
//clear ___nl__int__15;
#line 377
//clear ___nl__bool__16;
#line 377
c_rt_lib0clear(&___nl__im__17);
#line 377
c_rt_lib0clear(&___nl__im__21);
#line 377
//clear ___nl__bool__22;
#line 377
c_rt_lib0clear(&___nl__im__23);
#line 377
c_rt_lib0clear(&___nl__im__34);
#line 377
//clear ___nl__bool__36;
#line 377
c_rt_lib0clear(&___nl__im__37);
#line 377
c_rt_lib0clear(&___nl__im__38);
#line 377
c_rt_lib0clear(&___nl__im__40);
#line 377
c_rt_lib0clear(&___nl__im__41);
#line 377
c_rt_lib0clear(&___nl__im__46);
#line 377
c_rt_lib0clear(&___nl__im__47);
#line 377
c_rt_lib0clear(&___nl__im__48);
#line 377
c_rt_lib0clear(&___nl__im__49);
#line 377
c_rt_lib0clear(&___nl__im__50);
#line 377
c_rt_lib0clear(&___nl__im__51);
#line 377
c_rt_lib0clear(&___nl__im__52);
#line 377
c_rt_lib0clear(&___nl__im__53);
#line 377
c_rt_lib0clear(&___nl__im__54);
#line 377
c_rt_lib0clear(&___nl__im__55);
#line 377
c_rt_lib0clear(&___nl__im__62);
#line 377
c_rt_lib0clear(&___nl__im__63);
#line 377
c_rt_lib0clear(&___nl__im__64);
#line 377
c_rt_lib0clear(&___nl__im__82);
#line 377
c_rt_lib0clear(&___nl__im__83);
#line 377
c_rt_lib0clear(&___nl__im__84);
#line 377
c_rt_lib0clear(&___nl__im__174);
#line 377
c_rt_lib0clear(&___nl__im__175);
#line 377
c_rt_lib0clear(&___nl__im__176);
#line 377
c_rt_lib0clear(&___nl__im__181);
#line 377
c_rt_lib0clear(&___nl__im__182);
#line 377
c_rt_lib0clear(&___nl__im__183);
#line 377
c_rt_lib0clear(&___nl__im__188);
#line 377
c_rt_lib0clear(&___nl__im__189);
#line 377
return ___nl__im__190;
#line 378
goto label_1795;
#line 378
label_1103:
;
#line 378
c_rt_lib0move(&___nl__im__196, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1063)));
#line 378
c_rt_lib0copy(&___nl__im__195, ___nl__im__196);
#line 379
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(175)));
#line 379
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(159)));
#line 379
c_rt_lib0move(&___nl__im__198, pretty_printer_priv0get_fun_label(___nl__im__199, ___nl__im__200));
#line 379
c_rt_lib0clear(&___nl__im__199);
#line 379
c_rt_lib0clear(&___nl__im__200);
#line 379
c_rt_lib0move(&___nl__im__201,___get_global_string_const(465));
#line 379
c_rt_lib0move(&___nl__im__197, c_rt_lib0concat_new(___nl__im__198, ___nl__im__201));
#line 379
c_rt_lib0clear(&___nl__im__198);
#line 379
c_rt_lib0clear(&___nl__im__201);
#line 380
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 380
___nl__int__203 = c_rt_lib0array_len(___nl__im__204);
#line 380
c_rt_lib0clear(&___nl__im__204);
#line 380
___nl__int__205 = 1;
#line 380
___nl__bool__202 = ___nl__int__203 == ___nl__int__205;
#line 380
//clear ___nl__int__203;
#line 380
//clear ___nl__int__205;
#line 380
___nl__bool__202 = !___nl__bool__202;
#line 380
if(___nl__bool__202){ goto label_1207;}
#line 381
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 381
___nl__int__209 = 0;
#line 381
c_rt_lib0move(&___nl__im__207, c_rt_lib0array_get(___nl__im__208, ___nl__int__209));
#line 381
c_rt_lib0clear(&___nl__im__208);
#line 381
//clear ___nl__int__209;
#line 381
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__207, ___get_global_string_const(234)));
#line 381
c_rt_lib0clear(&___nl__im__207);
#line 382
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__206, ___get_global_string_const(229)));
#line 382
___nl__bool__210 = c_rt_lib0priv_is(___nl__im__211, ___get_global_string_const(241));
#line 382
c_rt_lib0clear(&___nl__im__211);
#line 382
if(___nl__bool__210){ goto label_1138;}
#line 382
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__206, ___get_global_string_const(229)));
#line 382
___nl__bool__210 = c_rt_lib0priv_is(___nl__im__212, ___get_global_string_const(240));
#line 382
c_rt_lib0clear(&___nl__im__212);
#line 382
label_1138:
;
#line 382
___nl__bool__210 = !___nl__bool__210;
#line 382
if(___nl__bool__210){ goto label_1203;}
#line 383
c_rt_lib0move(&___nl__im__214,___get_global_string_const(331));
#line 383
c_rt_lib0move(&___nl__im__213, pretty_printer_priv0get_compressed_fun_val(___nl__im__206, ___nl__im__197, ___nl__im__214));
#line 383
c_rt_lib0clear(&___nl__im__214);
#line 383
c_rt_lib0clear(&___nl__im__0);
#line 383
c_rt_lib0clear(&___nl__im__1);
#line 383
//clear ___nl__bool__2;
#line 383
c_rt_lib0clear(&___nl__im__3);
#line 383
//clear ___nl__int__4;
#line 383
c_rt_lib0clear(&___nl__im__5);
#line 383
c_rt_lib0clear(&___nl__im__6);
#line 383
c_rt_lib0clear(&___nl__im__8);
#line 383
c_rt_lib0clear(&___nl__im__9);
#line 383
c_rt_lib0clear(&___nl__im__10);
#line 383
c_rt_lib0clear(&___nl__im__11);
#line 383
c_rt_lib0clear(&___nl__im__12);
#line 383
//clear ___nl__int__13;
#line 383
//clear ___nl__int__14;
#line 383
//clear ___nl__int__15;
#line 383
//clear ___nl__bool__16;
#line 383
c_rt_lib0clear(&___nl__im__17);
#line 383
c_rt_lib0clear(&___nl__im__21);
#line 383
//clear ___nl__bool__22;
#line 383
c_rt_lib0clear(&___nl__im__23);
#line 383
c_rt_lib0clear(&___nl__im__34);
#line 383
//clear ___nl__bool__36;
#line 383
c_rt_lib0clear(&___nl__im__37);
#line 383
c_rt_lib0clear(&___nl__im__38);
#line 383
c_rt_lib0clear(&___nl__im__40);
#line 383
c_rt_lib0clear(&___nl__im__41);
#line 383
c_rt_lib0clear(&___nl__im__46);
#line 383
c_rt_lib0clear(&___nl__im__47);
#line 383
c_rt_lib0clear(&___nl__im__48);
#line 383
c_rt_lib0clear(&___nl__im__49);
#line 383
c_rt_lib0clear(&___nl__im__50);
#line 383
c_rt_lib0clear(&___nl__im__51);
#line 383
c_rt_lib0clear(&___nl__im__52);
#line 383
c_rt_lib0clear(&___nl__im__53);
#line 383
c_rt_lib0clear(&___nl__im__54);
#line 383
c_rt_lib0clear(&___nl__im__55);
#line 383
c_rt_lib0clear(&___nl__im__62);
#line 383
c_rt_lib0clear(&___nl__im__63);
#line 383
c_rt_lib0clear(&___nl__im__64);
#line 383
c_rt_lib0clear(&___nl__im__82);
#line 383
c_rt_lib0clear(&___nl__im__83);
#line 383
c_rt_lib0clear(&___nl__im__84);
#line 383
c_rt_lib0clear(&___nl__im__174);
#line 383
c_rt_lib0clear(&___nl__im__175);
#line 383
c_rt_lib0clear(&___nl__im__176);
#line 383
c_rt_lib0clear(&___nl__im__181);
#line 383
c_rt_lib0clear(&___nl__im__182);
#line 383
c_rt_lib0clear(&___nl__im__183);
#line 383
c_rt_lib0clear(&___nl__im__188);
#line 383
c_rt_lib0clear(&___nl__im__189);
#line 383
c_rt_lib0clear(&___nl__im__190);
#line 383
c_rt_lib0clear(&___nl__im__195);
#line 383
c_rt_lib0clear(&___nl__im__196);
#line 383
c_rt_lib0clear(&___nl__im__197);
#line 383
//clear ___nl__bool__202;
#line 383
c_rt_lib0clear(&___nl__im__206);
#line 383
//clear ___nl__bool__210;
#line 383
return ___nl__im__213;
#line 384
goto label_1203;
#line 384
label_1203:
;
#line 384
//clear ___nl__bool__210;
#line 384
c_rt_lib0clear(&___nl__im__213);
#line 385
goto label_1324;
#line 385
label_1207:
;
#line 385
___nl__bool__202 = pretty_printer_priv0is_to_change_ov(___nl__im__0);
#line 385
___nl__bool__202 = !___nl__bool__202;
#line 385
if(___nl__bool__202){ goto label_1324;}
#line 387
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 387
___nl__int__221 = 0;
#line 387
c_rt_lib0move(&___nl__im__219, c_rt_lib0array_get(___nl__im__220, ___nl__int__221));
#line 387
c_rt_lib0clear(&___nl__im__220);
#line 387
//clear ___nl__int__221;
#line 387
c_rt_lib0move(&___nl__im__218, c_rt_lib0hash_get_value_dec(___nl__im__219, ___get_global_string_const(234)));
#line 387
c_rt_lib0clear(&___nl__im__219);
#line 387
c_rt_lib0move(&___nl__im__217, pretty_printer_priv0print_val(___nl__im__218));
#line 387
c_rt_lib0clear(&___nl__im__218);
#line 388
c_rt_lib0move(&___nl__im__222, wprinter0get_sep());
#line 389
c_rt_lib0move(&___nl__im__224, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(175)));
#line 389
c_rt_lib0move(&___nl__im__223, wprinter0build_sim(___nl__im__224));
#line 389
c_rt_lib0clear(&___nl__im__224);
#line 390
c_rt_lib0move(&___nl__im__225, wprinter0get_sep());
#line 391
c_rt_lib0move(&___nl__im__228,___get_global_string_const(538));
#line 391
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 391
___nl__int__236 = 1;
#line 391
c_rt_lib0move(&___nl__im__234, c_rt_lib0array_get(___nl__im__235, ___nl__int__236));
#line 391
c_rt_lib0clear(&___nl__im__235);
#line 391
//clear ___nl__int__236;
#line 391
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__234, ___get_global_string_const(234)));
#line 391
c_rt_lib0clear(&___nl__im__234);
#line 391
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__233, ___get_global_string_const(229)));
#line 391
c_rt_lib0clear(&___nl__im__233);
#line 391
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 391
___nl__int__241 = 1;
#line 391
c_rt_lib0move(&___nl__im__239, c_rt_lib0array_get(___nl__im__240, ___nl__int__241));
#line 391
c_rt_lib0clear(&___nl__im__240);
#line 391
//clear ___nl__int__241;
#line 391
c_rt_lib0move(&___nl__im__238, c_rt_lib0hash_get_value_dec(___nl__im__239, ___get_global_string_const(234)));
#line 391
c_rt_lib0clear(&___nl__im__239);
#line 391
c_rt_lib0move(&___nl__im__237, c_rt_lib0hash_get_value_dec(___nl__im__238, ___get_global_string_const(229)));
#line 391
c_rt_lib0clear(&___nl__im__238);
#line 391
c_rt_lib0move(&___nl__im__231, c_rt_lib0priv_as(___nl__im__237, ___get_global_string_const(414)));
#line 391
c_rt_lib0clear(&___nl__im__232);
#line 391
c_rt_lib0clear(&___nl__im__237);
#line 391
c_rt_lib0move(&___nl__im__230, c_rt_lib0hash_get_value_dec(___nl__im__231, ___get_global_string_const(134)));
#line 391
c_rt_lib0clear(&___nl__im__231);
#line 391
___nl__int__242 = 0;
#line 391
c_rt_lib0move(&___nl__im__229, c_rt_lib0array_get(___nl__im__230, ___nl__int__242));
#line 391
c_rt_lib0clear(&___nl__im__230);
#line 391
//clear ___nl__int__242;
#line 391
c_rt_lib0move(&___nl__im__227, c_rt_lib0concat_new(___nl__im__228, ___nl__im__229));
#line 391
c_rt_lib0clear(&___nl__im__228);
#line 391
c_rt_lib0clear(&___nl__im__229);
#line 391
c_rt_lib0move(&___nl__im__226, wprinter0build_sim(___nl__im__227));
#line 391
c_rt_lib0clear(&___nl__im__227);
#line 391
c_rt_lib0move(&___nl__im__216, c_rt_lib0array_mk(5, ___nl__im__217, ___nl__im__222, ___nl__im__223, ___nl__im__225, ___nl__im__226));
#line 391
c_rt_lib0clear(&___nl__im__217);
#line 391
c_rt_lib0clear(&___nl__im__222);
#line 391
c_rt_lib0clear(&___nl__im__223);
#line 391
c_rt_lib0clear(&___nl__im__225);
#line 391
c_rt_lib0clear(&___nl__im__226);
#line 391
c_rt_lib0move(&___nl__im__215, wprinter0build_pretty_op_l(___nl__im__216));
#line 391
c_rt_lib0clear(&___nl__im__216);
#line 391
c_rt_lib0clear(&___nl__im__0);
#line 391
c_rt_lib0clear(&___nl__im__1);
#line 391
//clear ___nl__bool__2;
#line 391
c_rt_lib0clear(&___nl__im__3);
#line 391
//clear ___nl__int__4;
#line 391
c_rt_lib0clear(&___nl__im__5);
#line 391
c_rt_lib0clear(&___nl__im__6);
#line 391
c_rt_lib0clear(&___nl__im__8);
#line 391
c_rt_lib0clear(&___nl__im__9);
#line 391
c_rt_lib0clear(&___nl__im__10);
#line 391
c_rt_lib0clear(&___nl__im__11);
#line 391
c_rt_lib0clear(&___nl__im__12);
#line 391
//clear ___nl__int__13;
#line 391
//clear ___nl__int__14;
#line 391
//clear ___nl__int__15;
#line 391
//clear ___nl__bool__16;
#line 391
c_rt_lib0clear(&___nl__im__17);
#line 391
c_rt_lib0clear(&___nl__im__21);
#line 391
//clear ___nl__bool__22;
#line 391
c_rt_lib0clear(&___nl__im__23);
#line 391
c_rt_lib0clear(&___nl__im__34);
#line 391
//clear ___nl__bool__36;
#line 391
c_rt_lib0clear(&___nl__im__37);
#line 391
c_rt_lib0clear(&___nl__im__38);
#line 391
c_rt_lib0clear(&___nl__im__40);
#line 391
c_rt_lib0clear(&___nl__im__41);
#line 391
c_rt_lib0clear(&___nl__im__46);
#line 391
c_rt_lib0clear(&___nl__im__47);
#line 391
c_rt_lib0clear(&___nl__im__48);
#line 391
c_rt_lib0clear(&___nl__im__49);
#line 391
c_rt_lib0clear(&___nl__im__50);
#line 391
c_rt_lib0clear(&___nl__im__51);
#line 391
c_rt_lib0clear(&___nl__im__52);
#line 391
c_rt_lib0clear(&___nl__im__53);
#line 391
c_rt_lib0clear(&___nl__im__54);
#line 391
c_rt_lib0clear(&___nl__im__55);
#line 391
c_rt_lib0clear(&___nl__im__62);
#line 391
c_rt_lib0clear(&___nl__im__63);
#line 391
c_rt_lib0clear(&___nl__im__64);
#line 391
c_rt_lib0clear(&___nl__im__82);
#line 391
c_rt_lib0clear(&___nl__im__83);
#line 391
c_rt_lib0clear(&___nl__im__84);
#line 391
c_rt_lib0clear(&___nl__im__174);
#line 391
c_rt_lib0clear(&___nl__im__175);
#line 391
c_rt_lib0clear(&___nl__im__176);
#line 391
c_rt_lib0clear(&___nl__im__181);
#line 391
c_rt_lib0clear(&___nl__im__182);
#line 391
c_rt_lib0clear(&___nl__im__183);
#line 391
c_rt_lib0clear(&___nl__im__188);
#line 391
c_rt_lib0clear(&___nl__im__189);
#line 391
c_rt_lib0clear(&___nl__im__190);
#line 391
c_rt_lib0clear(&___nl__im__195);
#line 391
c_rt_lib0clear(&___nl__im__196);
#line 391
c_rt_lib0clear(&___nl__im__197);
#line 391
//clear ___nl__bool__202;
#line 391
c_rt_lib0clear(&___nl__im__206);
#line 391
return ___nl__im__215;
#line 393
goto label_1324;
#line 393
label_1324:
;
#line 393
//clear ___nl__bool__202;
#line 393
c_rt_lib0clear(&___nl__im__206);
#line 393
c_rt_lib0clear(&___nl__im__215);
#line 394
c_rt_lib0move(&___nl__im__244, wprinter0build_sim(___nl__im__197));
#line 394
c_rt_lib0move(&___nl__im__243, c_rt_lib0array_mk(1, ___nl__im__244));
#line 394
c_rt_lib0clear(&___nl__im__244);
#line 395
c_rt_lib0move(&___nl__im__246, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 395
c_rt_lib0move(&___nl__im__245, pretty_printer_priv0join_print_fun_arg(___nl__im__246));
#line 395
c_rt_lib0clear(&___nl__im__246);
#line 395
c_rt_lib0delete(array0append(&___nl__im__243, ___nl__im__245));
#line 395
c_rt_lib0clear(&___nl__im__245);
#line 396
c_rt_lib0move(&___nl__im__248,___get_global_string_const(331));
#line 396
c_rt_lib0move(&___nl__im__247, wprinter0build_sim(___nl__im__248));
#line 396
c_rt_lib0clear(&___nl__im__248);
#line 396
c_rt_lib0delete(array0push(&___nl__im__243, ___nl__im__247));
#line 396
c_rt_lib0clear(&___nl__im__247);
#line 399
c_rt_lib0move(&___nl__im__252, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 399
___nl__int__251 = pretty_printer_priv0count_structs(___nl__im__252);
#line 399
c_rt_lib0clear(&___nl__im__252);
#line 399
c_rt_lib0move(&___nl__im__254, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 399
___nl__int__253 = c_rt_lib0array_len(___nl__im__254);
#line 399
c_rt_lib0clear(&___nl__im__254);
#line 399
___nl__bool__249 = ___nl__int__251 == ___nl__int__253;
#line 399
//clear ___nl__int__251;
#line 399
//clear ___nl__int__253;
#line 399
___nl__bool__250 = !___nl__bool__249;
#line 399
if(___nl__bool__250){ goto label_1359;}
#line 399
c_rt_lib0move(&___nl__im__256, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 399
___nl__int__255 = c_rt_lib0array_len(___nl__im__256);
#line 399
c_rt_lib0clear(&___nl__im__256);
#line 399
___nl__int__257 = 0;
#line 399
___nl__bool__249 = ___nl__int__255 > ___nl__int__257;
#line 399
//clear ___nl__int__255;
#line 399
//clear ___nl__int__257;
#line 399
label_1359:
;
#line 399
//clear ___nl__bool__250;
#line 399
if(___nl__bool__249){ goto label_1384;}
#line 400
c_rt_lib0move(&___nl__im__260, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 400
___nl__int__259 = c_rt_lib0array_len(___nl__im__260);
#line 400
c_rt_lib0clear(&___nl__im__260);
#line 400
___nl__int__261 = 1;
#line 400
___nl__bool__249 = ___nl__int__259 == ___nl__int__261;
#line 400
//clear ___nl__int__259;
#line 400
//clear ___nl__int__261;
#line 400
___nl__bool__258 = !___nl__bool__249;
#line 400
if(___nl__bool__258){ goto label_1382;}
#line 400
c_rt_lib0move(&___nl__im__265, c_rt_lib0hash_get_value_dec(___nl__im__195, ___get_global_string_const(276)));
#line 400
___nl__int__266 = 0;
#line 400
c_rt_lib0move(&___nl__im__264, c_rt_lib0array_get(___nl__im__265, ___nl__int__266));
#line 400
c_rt_lib0clear(&___nl__im__265);
#line 400
//clear ___nl__int__266;
#line 400
c_rt_lib0move(&___nl__im__263, c_rt_lib0hash_get_value_dec(___nl__im__264, ___get_global_string_const(234)));
#line 400
c_rt_lib0clear(&___nl__im__264);
#line 400
c_rt_lib0move(&___nl__im__262, c_rt_lib0hash_get_value_dec(___nl__im__263, ___get_global_string_const(229)));
#line 400
c_rt_lib0clear(&___nl__im__263);
#line 400
___nl__bool__249 = c_rt_lib0priv_is(___nl__im__262, ___get_global_string_const(1063));
#line 400
c_rt_lib0clear(&___nl__im__262);
#line 400
label_1382:
;
#line 400
//clear ___nl__bool__258;
#line 400
label_1384:
;
#line 400
___nl__bool__249 = !___nl__bool__249;
#line 400
if(___nl__bool__249){ goto label_1446;}
#line 397
c_rt_lib0move(&___nl__im__267, wprinter0build_pretty_op_l(___nl__im__243));
#line 397
c_rt_lib0clear(&___nl__im__0);
#line 397
c_rt_lib0clear(&___nl__im__1);
#line 397
//clear ___nl__bool__2;
#line 397
c_rt_lib0clear(&___nl__im__3);
#line 397
//clear ___nl__int__4;
#line 397
c_rt_lib0clear(&___nl__im__5);
#line 397
c_rt_lib0clear(&___nl__im__6);
#line 397
c_rt_lib0clear(&___nl__im__8);
#line 397
c_rt_lib0clear(&___nl__im__9);
#line 397
c_rt_lib0clear(&___nl__im__10);
#line 397
c_rt_lib0clear(&___nl__im__11);
#line 397
c_rt_lib0clear(&___nl__im__12);
#line 397
//clear ___nl__int__13;
#line 397
//clear ___nl__int__14;
#line 397
//clear ___nl__int__15;
#line 397
//clear ___nl__bool__16;
#line 397
c_rt_lib0clear(&___nl__im__17);
#line 397
c_rt_lib0clear(&___nl__im__21);
#line 397
//clear ___nl__bool__22;
#line 397
c_rt_lib0clear(&___nl__im__23);
#line 397
c_rt_lib0clear(&___nl__im__34);
#line 397
//clear ___nl__bool__36;
#line 397
c_rt_lib0clear(&___nl__im__37);
#line 397
c_rt_lib0clear(&___nl__im__38);
#line 397
c_rt_lib0clear(&___nl__im__40);
#line 397
c_rt_lib0clear(&___nl__im__41);
#line 397
c_rt_lib0clear(&___nl__im__46);
#line 397
c_rt_lib0clear(&___nl__im__47);
#line 397
c_rt_lib0clear(&___nl__im__48);
#line 397
c_rt_lib0clear(&___nl__im__49);
#line 397
c_rt_lib0clear(&___nl__im__50);
#line 397
c_rt_lib0clear(&___nl__im__51);
#line 397
c_rt_lib0clear(&___nl__im__52);
#line 397
c_rt_lib0clear(&___nl__im__53);
#line 397
c_rt_lib0clear(&___nl__im__54);
#line 397
c_rt_lib0clear(&___nl__im__55);
#line 397
c_rt_lib0clear(&___nl__im__62);
#line 397
c_rt_lib0clear(&___nl__im__63);
#line 397
c_rt_lib0clear(&___nl__im__64);
#line 397
c_rt_lib0clear(&___nl__im__82);
#line 397
c_rt_lib0clear(&___nl__im__83);
#line 397
c_rt_lib0clear(&___nl__im__84);
#line 397
c_rt_lib0clear(&___nl__im__174);
#line 397
c_rt_lib0clear(&___nl__im__175);
#line 397
c_rt_lib0clear(&___nl__im__176);
#line 397
c_rt_lib0clear(&___nl__im__181);
#line 397
c_rt_lib0clear(&___nl__im__182);
#line 397
c_rt_lib0clear(&___nl__im__183);
#line 397
c_rt_lib0clear(&___nl__im__188);
#line 397
c_rt_lib0clear(&___nl__im__189);
#line 397
c_rt_lib0clear(&___nl__im__190);
#line 397
c_rt_lib0clear(&___nl__im__195);
#line 397
c_rt_lib0clear(&___nl__im__196);
#line 397
c_rt_lib0clear(&___nl__im__197);
#line 397
c_rt_lib0clear(&___nl__im__243);
#line 397
//clear ___nl__bool__249;
#line 397
return ___nl__im__267;
#line 397
goto label_1446;
#line 397
label_1446:
;
#line 397
//clear ___nl__bool__249;
#line 397
c_rt_lib0clear(&___nl__im__267);
#line 401
c_rt_lib0move(&___nl__im__268, wprinter0build_pretty_l(___nl__im__243));
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
c_rt_lib0clear(&___nl__im__8);
#line 401
c_rt_lib0clear(&___nl__im__9);
#line 401
c_rt_lib0clear(&___nl__im__10);
#line 401
c_rt_lib0clear(&___nl__im__11);
#line 401
c_rt_lib0clear(&___nl__im__12);
#line 401
//clear ___nl__int__13;
#line 401
//clear ___nl__int__14;
#line 401
//clear ___nl__int__15;
#line 401
//clear ___nl__bool__16;
#line 401
c_rt_lib0clear(&___nl__im__17);
#line 401
c_rt_lib0clear(&___nl__im__21);
#line 401
//clear ___nl__bool__22;
#line 401
c_rt_lib0clear(&___nl__im__23);
#line 401
c_rt_lib0clear(&___nl__im__34);
#line 401
//clear ___nl__bool__36;
#line 401
c_rt_lib0clear(&___nl__im__37);
#line 401
c_rt_lib0clear(&___nl__im__38);
#line 401
c_rt_lib0clear(&___nl__im__40);
#line 401
c_rt_lib0clear(&___nl__im__41);
#line 401
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__62);
#line 401
c_rt_lib0clear(&___nl__im__63);
#line 401
c_rt_lib0clear(&___nl__im__64);
#line 401
c_rt_lib0clear(&___nl__im__82);
#line 401
c_rt_lib0clear(&___nl__im__83);
#line 401
c_rt_lib0clear(&___nl__im__84);
#line 401
c_rt_lib0clear(&___nl__im__174);
#line 401
c_rt_lib0clear(&___nl__im__175);
#line 401
c_rt_lib0clear(&___nl__im__176);
#line 401
c_rt_lib0clear(&___nl__im__181);
#line 401
c_rt_lib0clear(&___nl__im__182);
#line 401
c_rt_lib0clear(&___nl__im__183);
#line 401
c_rt_lib0clear(&___nl__im__188);
#line 401
c_rt_lib0clear(&___nl__im__189);
#line 401
c_rt_lib0clear(&___nl__im__190);
#line 401
c_rt_lib0clear(&___nl__im__195);
#line 401
c_rt_lib0clear(&___nl__im__196);
#line 401
c_rt_lib0clear(&___nl__im__197);
#line 401
c_rt_lib0clear(&___nl__im__243);
#line 401
return ___nl__im__268;
#line 402
goto label_1795;
#line 402
label_1507:
;
#line 403
___nl__int__270 = 0;
#line 403
c_rt_lib0move(&___nl__im__271, c_rt_lib0int_new(___nl__int__270));
#line 403
c_rt_lib0move(&___nl__im__273,___get_global_string_const(36));
#line 403
c_rt_lib0move(&___nl__im__272, c_rt_lib0ov_mk_arg(___get_global_string_const(1294), ___nl__im__273));
#line 403
c_rt_lib0clear(&___nl__im__273);
#line 403
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_mk(2, ___get_global_string_const(294), ___nl__im__271, ___get_global_string_const(1295), ___nl__im__272));
#line 403
//clear ___nl__int__270;
#line 403
c_rt_lib0clear(&___nl__im__271);
#line 403
c_rt_lib0clear(&___nl__im__272);
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
c_rt_lib0clear(&___nl__im__8);
#line 403
c_rt_lib0clear(&___nl__im__9);
#line 403
c_rt_lib0clear(&___nl__im__10);
#line 403
c_rt_lib0clear(&___nl__im__11);
#line 403
c_rt_lib0clear(&___nl__im__12);
#line 403
//clear ___nl__int__13;
#line 403
//clear ___nl__int__14;
#line 403
//clear ___nl__int__15;
#line 403
//clear ___nl__bool__16;
#line 403
c_rt_lib0clear(&___nl__im__17);
#line 403
c_rt_lib0clear(&___nl__im__21);
#line 403
//clear ___nl__bool__22;
#line 403
c_rt_lib0clear(&___nl__im__23);
#line 403
c_rt_lib0clear(&___nl__im__34);
#line 403
//clear ___nl__bool__36;
#line 403
c_rt_lib0clear(&___nl__im__37);
#line 403
c_rt_lib0clear(&___nl__im__38);
#line 403
c_rt_lib0clear(&___nl__im__40);
#line 403
c_rt_lib0clear(&___nl__im__41);
#line 403
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__62);
#line 403
c_rt_lib0clear(&___nl__im__63);
#line 403
c_rt_lib0clear(&___nl__im__64);
#line 403
c_rt_lib0clear(&___nl__im__82);
#line 403
c_rt_lib0clear(&___nl__im__83);
#line 403
c_rt_lib0clear(&___nl__im__84);
#line 403
c_rt_lib0clear(&___nl__im__174);
#line 403
c_rt_lib0clear(&___nl__im__175);
#line 403
c_rt_lib0clear(&___nl__im__176);
#line 403
c_rt_lib0clear(&___nl__im__181);
#line 403
c_rt_lib0clear(&___nl__im__182);
#line 403
c_rt_lib0clear(&___nl__im__183);
#line 403
c_rt_lib0clear(&___nl__im__188);
#line 403
c_rt_lib0clear(&___nl__im__189);
#line 403
c_rt_lib0clear(&___nl__im__190);
#line 403
c_rt_lib0clear(&___nl__im__195);
#line 403
c_rt_lib0clear(&___nl__im__196);
#line 403
c_rt_lib0clear(&___nl__im__197);
#line 403
c_rt_lib0clear(&___nl__im__243);
#line 403
c_rt_lib0clear(&___nl__im__268);
#line 403
return ___nl__im__269;
#line 404
goto label_1795;
#line 404
label_1575:
;
#line 404
c_rt_lib0move(&___nl__im__275, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(240)));
#line 404
c_rt_lib0copy(&___nl__im__274, ___nl__im__275);
#line 405
c_rt_lib0move(&___nl__im__277,___get_global_string_const(36));
#line 405
c_rt_lib0move(&___nl__im__278,___get_global_string_const(36));
#line 405
c_rt_lib0move(&___nl__im__276, pretty_printer_priv0get_compressed_fun_val(___nl__im__0, ___nl__im__277, ___nl__im__278));
#line 405
c_rt_lib0clear(&___nl__im__277);
#line 405
c_rt_lib0clear(&___nl__im__278);
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
c_rt_lib0clear(&___nl__im__8);
#line 405
c_rt_lib0clear(&___nl__im__9);
#line 405
c_rt_lib0clear(&___nl__im__10);
#line 405
c_rt_lib0clear(&___nl__im__11);
#line 405
c_rt_lib0clear(&___nl__im__12);
#line 405
//clear ___nl__int__13;
#line 405
//clear ___nl__int__14;
#line 405
//clear ___nl__int__15;
#line 405
//clear ___nl__bool__16;
#line 405
c_rt_lib0clear(&___nl__im__17);
#line 405
c_rt_lib0clear(&___nl__im__21);
#line 405
//clear ___nl__bool__22;
#line 405
c_rt_lib0clear(&___nl__im__23);
#line 405
c_rt_lib0clear(&___nl__im__34);
#line 405
//clear ___nl__bool__36;
#line 405
c_rt_lib0clear(&___nl__im__37);
#line 405
c_rt_lib0clear(&___nl__im__38);
#line 405
c_rt_lib0clear(&___nl__im__40);
#line 405
c_rt_lib0clear(&___nl__im__41);
#line 405
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__62);
#line 405
c_rt_lib0clear(&___nl__im__63);
#line 405
c_rt_lib0clear(&___nl__im__64);
#line 405
c_rt_lib0clear(&___nl__im__82);
#line 405
c_rt_lib0clear(&___nl__im__83);
#line 405
c_rt_lib0clear(&___nl__im__84);
#line 405
c_rt_lib0clear(&___nl__im__174);
#line 405
c_rt_lib0clear(&___nl__im__175);
#line 405
c_rt_lib0clear(&___nl__im__176);
#line 405
c_rt_lib0clear(&___nl__im__181);
#line 405
c_rt_lib0clear(&___nl__im__182);
#line 405
c_rt_lib0clear(&___nl__im__183);
#line 405
c_rt_lib0clear(&___nl__im__188);
#line 405
c_rt_lib0clear(&___nl__im__189);
#line 405
c_rt_lib0clear(&___nl__im__190);
#line 405
c_rt_lib0clear(&___nl__im__195);
#line 405
c_rt_lib0clear(&___nl__im__196);
#line 405
c_rt_lib0clear(&___nl__im__197);
#line 405
c_rt_lib0clear(&___nl__im__243);
#line 405
c_rt_lib0clear(&___nl__im__268);
#line 405
c_rt_lib0clear(&___nl__im__269);
#line 405
c_rt_lib0clear(&___nl__im__274);
#line 405
c_rt_lib0clear(&___nl__im__275);
#line 405
return ___nl__im__276;
#line 406
goto label_1795;
#line 406
label_1644:
;
#line 406
c_rt_lib0move(&___nl__im__280, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(241)));
#line 406
c_rt_lib0copy(&___nl__im__279, ___nl__im__280);
#line 407
c_rt_lib0move(&___nl__im__282, pretty_printer_priv0join_print_hash_elem(___nl__im__279));
#line 407
c_rt_lib0move(&___nl__im__283,___get_global_string_const(315));
#line 407
c_rt_lib0move(&___nl__im__284,___get_global_string_const(316));
#line 407
c_rt_lib0move(&___nl__im__281, wprinter0build_pretty_arr_decl(___nl__im__282, ___nl__im__283, ___nl__im__284));
#line 407
c_rt_lib0clear(&___nl__im__282);
#line 407
c_rt_lib0clear(&___nl__im__283);
#line 407
c_rt_lib0clear(&___nl__im__284);
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
c_rt_lib0clear(&___nl__im__8);
#line 407
c_rt_lib0clear(&___nl__im__9);
#line 407
c_rt_lib0clear(&___nl__im__10);
#line 407
c_rt_lib0clear(&___nl__im__11);
#line 407
c_rt_lib0clear(&___nl__im__12);
#line 407
//clear ___nl__int__13;
#line 407
//clear ___nl__int__14;
#line 407
//clear ___nl__int__15;
#line 407
//clear ___nl__bool__16;
#line 407
c_rt_lib0clear(&___nl__im__17);
#line 407
c_rt_lib0clear(&___nl__im__21);
#line 407
//clear ___nl__bool__22;
#line 407
c_rt_lib0clear(&___nl__im__23);
#line 407
c_rt_lib0clear(&___nl__im__34);
#line 407
//clear ___nl__bool__36;
#line 407
c_rt_lib0clear(&___nl__im__37);
#line 407
c_rt_lib0clear(&___nl__im__38);
#line 407
c_rt_lib0clear(&___nl__im__40);
#line 407
c_rt_lib0clear(&___nl__im__41);
#line 407
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__62);
#line 407
c_rt_lib0clear(&___nl__im__63);
#line 407
c_rt_lib0clear(&___nl__im__64);
#line 407
c_rt_lib0clear(&___nl__im__82);
#line 407
c_rt_lib0clear(&___nl__im__83);
#line 407
c_rt_lib0clear(&___nl__im__84);
#line 407
c_rt_lib0clear(&___nl__im__174);
#line 407
c_rt_lib0clear(&___nl__im__175);
#line 407
c_rt_lib0clear(&___nl__im__176);
#line 407
c_rt_lib0clear(&___nl__im__181);
#line 407
c_rt_lib0clear(&___nl__im__182);
#line 407
c_rt_lib0clear(&___nl__im__183);
#line 407
c_rt_lib0clear(&___nl__im__188);
#line 407
c_rt_lib0clear(&___nl__im__189);
#line 407
c_rt_lib0clear(&___nl__im__190);
#line 407
c_rt_lib0clear(&___nl__im__195);
#line 407
c_rt_lib0clear(&___nl__im__196);
#line 407
c_rt_lib0clear(&___nl__im__197);
#line 407
c_rt_lib0clear(&___nl__im__243);
#line 407
c_rt_lib0clear(&___nl__im__268);
#line 407
c_rt_lib0clear(&___nl__im__269);
#line 407
c_rt_lib0clear(&___nl__im__274);
#line 407
c_rt_lib0clear(&___nl__im__275);
#line 407
c_rt_lib0clear(&___nl__im__276);
#line 407
c_rt_lib0clear(&___nl__im__279);
#line 407
c_rt_lib0clear(&___nl__im__280);
#line 407
return ___nl__im__281;
#line 408
goto label_1795;
#line 408
label_1718:
;
#line 408
c_rt_lib0move(&___nl__im__286, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1107)));
#line 408
c_rt_lib0copy(&___nl__im__285, ___nl__im__286);
#line 409
c_rt_lib0move(&___nl__im__289, c_rt_lib0hash_get_value_dec(___nl__im__285, ___get_global_string_const(175)));
#line 409
c_rt_lib0move(&___nl__im__290, c_rt_lib0hash_get_value_dec(___nl__im__285, ___get_global_string_const(159)));
#line 409
c_rt_lib0move(&___nl__im__288, pretty_printer_priv0get_fun_label(___nl__im__289, ___nl__im__290));
#line 409
c_rt_lib0clear(&___nl__im__289);
#line 409
c_rt_lib0clear(&___nl__im__290);
#line 409
c_rt_lib0move(&___nl__im__287, wprinter0build_sim(___nl__im__288));
#line 409
c_rt_lib0clear(&___nl__im__288);
#line 409
c_rt_lib0clear(&___nl__im__0);
#line 409
c_rt_lib0clear(&___nl__im__1);
#line 409
//clear ___nl__bool__2;
#line 409
c_rt_lib0clear(&___nl__im__3);
#line 409
//clear ___nl__int__4;
#line 409
c_rt_lib0clear(&___nl__im__5);
#line 409
c_rt_lib0clear(&___nl__im__6);
#line 409
c_rt_lib0clear(&___nl__im__8);
#line 409
c_rt_lib0clear(&___nl__im__9);
#line 409
c_rt_lib0clear(&___nl__im__10);
#line 409
c_rt_lib0clear(&___nl__im__11);
#line 409
c_rt_lib0clear(&___nl__im__12);
#line 409
//clear ___nl__int__13;
#line 409
//clear ___nl__int__14;
#line 409
//clear ___nl__int__15;
#line 409
//clear ___nl__bool__16;
#line 409
c_rt_lib0clear(&___nl__im__17);
#line 409
c_rt_lib0clear(&___nl__im__21);
#line 409
//clear ___nl__bool__22;
#line 409
c_rt_lib0clear(&___nl__im__23);
#line 409
c_rt_lib0clear(&___nl__im__34);
#line 409
//clear ___nl__bool__36;
#line 409
c_rt_lib0clear(&___nl__im__37);
#line 409
c_rt_lib0clear(&___nl__im__38);
#line 409
c_rt_lib0clear(&___nl__im__40);
#line 409
c_rt_lib0clear(&___nl__im__41);
#line 409
c_rt_lib0clear(&___nl__im__46);
#line 409
c_rt_lib0clear(&___nl__im__47);
#line 409
c_rt_lib0clear(&___nl__im__48);
#line 409
c_rt_lib0clear(&___nl__im__49);
#line 409
c_rt_lib0clear(&___nl__im__50);
#line 409
c_rt_lib0clear(&___nl__im__51);
#line 409
c_rt_lib0clear(&___nl__im__52);
#line 409
c_rt_lib0clear(&___nl__im__53);
#line 409
c_rt_lib0clear(&___nl__im__54);
#line 409
c_rt_lib0clear(&___nl__im__55);
#line 409
c_rt_lib0clear(&___nl__im__62);
#line 409
c_rt_lib0clear(&___nl__im__63);
#line 409
c_rt_lib0clear(&___nl__im__64);
#line 409
c_rt_lib0clear(&___nl__im__82);
#line 409
c_rt_lib0clear(&___nl__im__83);
#line 409
c_rt_lib0clear(&___nl__im__84);
#line 409
c_rt_lib0clear(&___nl__im__174);
#line 409
c_rt_lib0clear(&___nl__im__175);
#line 409
c_rt_lib0clear(&___nl__im__176);
#line 409
c_rt_lib0clear(&___nl__im__181);
#line 409
c_rt_lib0clear(&___nl__im__182);
#line 409
c_rt_lib0clear(&___nl__im__183);
#line 409
c_rt_lib0clear(&___nl__im__188);
#line 409
c_rt_lib0clear(&___nl__im__189);
#line 409
c_rt_lib0clear(&___nl__im__190);
#line 409
c_rt_lib0clear(&___nl__im__195);
#line 409
c_rt_lib0clear(&___nl__im__196);
#line 409
c_rt_lib0clear(&___nl__im__197);
#line 409
c_rt_lib0clear(&___nl__im__243);
#line 409
c_rt_lib0clear(&___nl__im__268);
#line 409
c_rt_lib0clear(&___nl__im__269);
#line 409
c_rt_lib0clear(&___nl__im__274);
#line 409
c_rt_lib0clear(&___nl__im__275);
#line 409
c_rt_lib0clear(&___nl__im__276);
#line 409
c_rt_lib0clear(&___nl__im__279);
#line 409
c_rt_lib0clear(&___nl__im__280);
#line 409
c_rt_lib0clear(&___nl__im__281);
#line 409
c_rt_lib0clear(&___nl__im__285);
#line 409
c_rt_lib0clear(&___nl__im__286);
#line 409
return ___nl__im__287;
#line 410
goto label_1795;
#line 410
label_1795:
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
#line 416
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 417
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 418
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 418
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__10));
#line 418
c_rt_lib0clear(&___nl__im__10);
#line 418
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(3, ___nl__im__7, ___nl__im__8, ___nl__im__9));
#line 418
c_rt_lib0clear(&___nl__im__7);
#line 418
c_rt_lib0clear(&___nl__im__8);
#line 418
c_rt_lib0clear(&___nl__im__9);
#line 420
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 420
___nl__int__13 = 0;
#line 420
___nl__bool__11 = ___nl__int__12 > ___nl__int__13;
#line 420
//clear ___nl__int__12;
#line 420
//clear ___nl__int__13;
#line 420
___nl__bool__11 = !___nl__bool__11;
#line 420
if(___nl__bool__11){ goto label_22;}
#line 420
c_rt_lib0move(&___nl__im__15,___get_global_string_const(477));
#line 420
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 420
c_rt_lib0clear(&___nl__im__15);
#line 420
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__14));
#line 420
c_rt_lib0clear(&___nl__im__14);
#line 420
goto label_22;
#line 420
label_22:
;
#line 420
//clear ___nl__bool__11;
#line 421
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 421
___nl__int__18 = 0;
#line 421
___nl__bool__16 = ___nl__int__17 > ___nl__int__18;
#line 421
//clear ___nl__int__17;
#line 421
//clear ___nl__int__18;
#line 421
___nl__bool__16 = !___nl__bool__16;
#line 421
if(___nl__bool__16){ goto label_37;}
#line 421
c_rt_lib0move(&___nl__im__20,___get_global_string_const(465));
#line 421
c_rt_lib0move(&___nl__im__19, wprinter0build_sim(___nl__im__20));
#line 421
c_rt_lib0clear(&___nl__im__20);
#line 421
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__19));
#line 421
c_rt_lib0clear(&___nl__im__19);
#line 421
goto label_37;
#line 421
label_37:
;
#line 421
//clear ___nl__bool__16;
#line 422
c_rt_lib0move(&___nl__im__21, pretty_printer_priv0print_val(___nl__im__4));
#line 422
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__21));
#line 422
c_rt_lib0clear(&___nl__im__21);
#line 423
___nl__int__23 = c_rt_lib0array_len(___nl__im__3);
#line 423
___nl__int__24 = 0;
#line 423
___nl__bool__22 = ___nl__int__23 > ___nl__int__24;
#line 423
//clear ___nl__int__23;
#line 423
//clear ___nl__int__24;
#line 423
___nl__bool__22 = !___nl__bool__22;
#line 423
if(___nl__bool__22){ goto label_55;}
#line 423
c_rt_lib0move(&___nl__im__26,___get_global_string_const(331));
#line 423
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 423
c_rt_lib0clear(&___nl__im__26);
#line 423
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__25));
#line 423
c_rt_lib0clear(&___nl__im__25);
#line 423
goto label_55;
#line 423
label_55:
;
#line 423
//clear ___nl__bool__22;
#line 425
c_rt_lib0move(&___nl__im__29, pretty_printer_priv0print_simple_statement(___nl__im__2));
#line 426
c_rt_lib0move(&___nl__im__30, wprinter0get_sep());
#line 427
c_rt_lib0move(&___nl__im__31, wprinter0build_pretty_op_l(___nl__im__6));
#line 427
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(3, ___nl__im__29, ___nl__im__30, ___nl__im__31));
#line 427
c_rt_lib0clear(&___nl__im__29);
#line 427
c_rt_lib0clear(&___nl__im__30);
#line 427
c_rt_lib0clear(&___nl__im__31);
#line 427
c_rt_lib0move(&___nl__im__27, wprinter0build_pretty_a(___nl__im__28));
#line 427
c_rt_lib0clear(&___nl__im__28);
#line 427
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__27, ___nl__int__5));
#line 427
c_rt_lib0clear(&___nl__im__27);
#line 429
c_rt_lib0move(&___nl__im__32,___get_global_string_const(450));
#line 429
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__32));
#line 429
c_rt_lib0clear(&___nl__im__32);
#line 429
c_rt_lib0clear(&___nl__im__1);
#line 429
c_rt_lib0clear(&___nl__im__2);
#line 429
c_rt_lib0clear(&___nl__im__3);
#line 429
c_rt_lib0clear(&___nl__im__4);
#line 429
//clear ___nl__int__5;
#line 429
c_rt_lib0clear(&___nl__im__6);
#line 429
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
#line 434
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 434
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 434
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 434
c_rt_lib0clear(&___nl__im__7);
#line 434
c_rt_lib0clear(&___nl__im__8);
#line 435
c_rt_lib0move(&___nl__im__9, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 435
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__9));
#line 435
c_rt_lib0clear(&___nl__im__9);
#line 436
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 436
___nl__int__12 = 0;
#line 436
___nl__bool__10 = ___nl__int__11 > ___nl__int__12;
#line 436
//clear ___nl__int__11;
#line 436
//clear ___nl__int__12;
#line 436
___nl__bool__10 = !___nl__bool__10;
#line 436
if(___nl__bool__10){ goto label_21;}
#line 436
c_rt_lib0move(&___nl__im__14,___get_global_string_const(477));
#line 436
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 436
c_rt_lib0clear(&___nl__im__14);
#line 436
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__13));
#line 436
c_rt_lib0clear(&___nl__im__13);
#line 436
goto label_21;
#line 436
label_21:
;
#line 436
//clear ___nl__bool__10;
#line 437
c_rt_lib0move(&___nl__im__16,___get_global_string_const(465));
#line 437
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 437
c_rt_lib0clear(&___nl__im__16);
#line 437
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__15));
#line 437
c_rt_lib0clear(&___nl__im__15);
#line 438
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_val(___nl__im__4));
#line 439
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(1295)));
#line 439
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(134));
#line 439
c_rt_lib0clear(&___nl__im__19);
#line 439
___nl__bool__18 = !___nl__bool__18;
#line 439
if(___nl__bool__18){ goto label_44;}
#line 440
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(1295)));
#line 440
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(1295)));
#line 440
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__23, ___get_global_string_const(134)));
#line 440
c_rt_lib0clear(&___nl__im__22);
#line 440
c_rt_lib0clear(&___nl__im__23);
#line 440
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(134)));
#line 440
c_rt_lib0clear(&___nl__im__21);
#line 440
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__20));
#line 440
c_rt_lib0clear(&___nl__im__20);
#line 441
goto label_47;
#line 441
label_44:
;
#line 442
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__17));
#line 443
goto label_47;
#line 443
label_47:
;
#line 443
//clear ___nl__bool__18;
#line 444
c_rt_lib0move(&___nl__im__25,___get_global_string_const(331));
#line 444
c_rt_lib0move(&___nl__im__24, wprinter0build_sim(___nl__im__25));
#line 444
c_rt_lib0clear(&___nl__im__25);
#line 444
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__24));
#line 444
c_rt_lib0clear(&___nl__im__24);
#line 445
c_rt_lib0move(&___nl__im__26, wprinter0build_pretty_l(___nl__im__6));
#line 445
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__26, ___nl__int__5));
#line 445
c_rt_lib0clear(&___nl__im__26);
#line 446
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__2, ___nl__int__5));
#line 446
c_rt_lib0clear(&___nl__im__1);
#line 446
c_rt_lib0clear(&___nl__im__2);
#line 446
c_rt_lib0clear(&___nl__im__3);
#line 446
c_rt_lib0clear(&___nl__im__4);
#line 446
//clear ___nl__int__5;
#line 446
c_rt_lib0clear(&___nl__im__6);
#line 446
c_rt_lib0clear(&___nl__im__17);
#line 446
return NULL;

}

ImmT  pretty_printer_priv0print_loop_or_mod(wprinter0state_t0type* ___ref___im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2,nast0cmd_t0type ___nl__im__3,ImmT  ___nl__im__4,nast0value_t0type ___nl__im__5,INT  ___nl__int__6) {
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
c_rt_lib0arg_val(___nl__im__5);
pretty_printer_priv0__const__init();
bool  ___nl__bool__7 = false;
#line 451
___nl__bool__7 = ___nl__bool__1;
#line 451
___nl__bool__7 = !___nl__bool__7;
#line 451
if(___nl__bool__7){ goto label_5;}
#line 452
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 453
goto label_8;
#line 453
label_5:
;
#line 454
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 455
goto label_8;
#line 455
label_8:
;
#line 455
//clear ___nl__bool__7;
#line 455
//clear ___nl__bool__1;
#line 455
c_rt_lib0clear(&___nl__im__2);
#line 455
c_rt_lib0clear(&___nl__im__3);
#line 455
c_rt_lib0clear(&___nl__im__4);
#line 455
c_rt_lib0clear(&___nl__im__5);
#line 455
//clear ___nl__int__6;
#line 455
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
#line 459
c_rt_lib0move(&___nl__im__3, wprinter0build_sim(___nl__im__1));
#line 459
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__3));
#line 459
c_rt_lib0clear(&___nl__im__3);
#line 460
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(732));
#line 460
if(___nl__bool__4){ goto label_12;}
#line 462
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1098));
#line 462
if(___nl__bool__4){ goto label_23;}
#line 464
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1097));
#line 464
if(___nl__bool__4){ goto label_34;}
#line 464
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 464
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__0));
#line 464
nl_die_arg(___nl__im__5);
#line 460
label_12:
;
#line 460
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(732)));
#line 460
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 461
c_rt_lib0move(&___nl__im__9, wprinter0get_sep());
#line 461
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0print_var_decl(___nl__im__6));
#line 461
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__10));
#line 461
c_rt_lib0clear(&___nl__im__9);
#line 461
c_rt_lib0clear(&___nl__im__10);
#line 461
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__8));
#line 461
c_rt_lib0clear(&___nl__im__8);
#line 462
goto label_59;
#line 462
label_23:
;
#line 462
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1098)));
#line 462
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 463
c_rt_lib0move(&___nl__im__14, wprinter0get_sep());
#line 463
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_val(___nl__im__11));
#line 463
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__15));
#line 463
c_rt_lib0clear(&___nl__im__14);
#line 463
c_rt_lib0clear(&___nl__im__15);
#line 463
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__13));
#line 463
c_rt_lib0clear(&___nl__im__13);
#line 464
goto label_59;
#line 464
label_34:
;
#line 464
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1097)));
#line 464
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 466
c_rt_lib0move(&___nl__im__19, wprinter0get_sep());
#line 467
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(285)));
#line 467
c_rt_lib0move(&___nl__im__20, pretty_printer_priv0print_val(___nl__im__21));
#line 467
c_rt_lib0clear(&___nl__im__21);
#line 468
c_rt_lib0move(&___nl__im__22, wprinter0get_sep());
#line 469
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(568)));
#line 469
c_rt_lib0move(&___nl__im__23, wprinter0build_sim(___nl__im__24));
#line 469
c_rt_lib0clear(&___nl__im__24);
#line 470
c_rt_lib0move(&___nl__im__25, wprinter0get_sep());
#line 471
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(286)));
#line 471
c_rt_lib0move(&___nl__im__26, pretty_printer_priv0print_val(___nl__im__27));
#line 471
c_rt_lib0clear(&___nl__im__27);
#line 471
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(6, ___nl__im__19, ___nl__im__20, ___nl__im__22, ___nl__im__23, ___nl__im__25, ___nl__im__26));
#line 471
c_rt_lib0clear(&___nl__im__19);
#line 471
c_rt_lib0clear(&___nl__im__20);
#line 471
c_rt_lib0clear(&___nl__im__22);
#line 471
c_rt_lib0clear(&___nl__im__23);
#line 471
c_rt_lib0clear(&___nl__im__25);
#line 471
c_rt_lib0clear(&___nl__im__26);
#line 471
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__18));
#line 471
c_rt_lib0clear(&___nl__im__18);
#line 473
goto label_59;
#line 473
label_59:
;
#line 474
c_rt_lib0move(&___nl__im__28, wprinter0build_pretty_l(___nl__im__2));
#line 474
c_rt_lib0clear(&___nl__im__0);
#line 474
c_rt_lib0clear(&___nl__im__1);
#line 474
c_rt_lib0clear(&___nl__im__2);
#line 474
//clear ___nl__bool__4;
#line 474
c_rt_lib0clear(&___nl__im__5);
#line 474
c_rt_lib0clear(&___nl__im__6);
#line 474
c_rt_lib0clear(&___nl__im__7);
#line 474
c_rt_lib0clear(&___nl__im__11);
#line 474
c_rt_lib0clear(&___nl__im__12);
#line 474
c_rt_lib0clear(&___nl__im__16);
#line 474
c_rt_lib0clear(&___nl__im__17);
#line 474
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
#line 478
c_rt_lib0move(&___nl__im__3,___get_global_string_const(257));
#line 478
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 478
c_rt_lib0clear(&___nl__im__3);
#line 478
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 478
c_rt_lib0clear(&___nl__im__2);
#line 479
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(229)));
#line 479
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1083));
#line 479
c_rt_lib0clear(&___nl__im__5);
#line 479
___nl__bool__4 = !___nl__bool__4;
#line 479
___nl__bool__4 = !___nl__bool__4;
#line 479
if(___nl__bool__4){ goto label_19;}
#line 480
c_rt_lib0move(&___nl__im__7, wprinter0get_sep());
#line 480
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_val(___nl__im__0));
#line 480
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 480
c_rt_lib0clear(&___nl__im__7);
#line 480
c_rt_lib0clear(&___nl__im__8);
#line 480
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__6));
#line 480
c_rt_lib0clear(&___nl__im__6);
#line 481
goto label_19;
#line 481
label_19:
;
#line 481
//clear ___nl__bool__4;
#line 482
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__1));
#line 482
c_rt_lib0clear(&___nl__im__0);
#line 482
c_rt_lib0clear(&___nl__im__1);
#line 482
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
#line 486
c_rt_lib0move(&___nl__im__1, pretty_printer_priv0print_val(___nl__im__0));
#line 487
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1295)));
#line 487
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(134));
#line 487
c_rt_lib0clear(&___nl__im__3);
#line 487
___nl__bool__2 = !___nl__bool__2;
#line 487
if(___nl__bool__2){ goto label_16;}
#line 488
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1295)));
#line 488
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1295)));
#line 488
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(134)));
#line 488
c_rt_lib0clear(&___nl__im__6);
#line 488
c_rt_lib0clear(&___nl__im__7);
#line 488
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(134)));
#line 488
c_rt_lib0clear(&___nl__im__5);
#line 488
c_rt_lib0move(&___nl__im__1, wprinter0build_pretty_l(___nl__im__4));
#line 488
c_rt_lib0clear(&___nl__im__4);
#line 489
goto label_16;
#line 489
label_16:
;
#line 489
//clear ___nl__bool__2;
#line 490
c_rt_lib0clear(&___nl__im__0);
#line 490
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
#line 494
c_rt_lib0move(&___nl__im__1,___get_global_string_const(1078));
#line 494
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 494
c_rt_lib0clear(&___nl__im__1);
#line 494
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
#line 498
c_rt_lib0move(&___nl__im__1,___get_global_string_const(1079));
#line 498
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 498
c_rt_lib0clear(&___nl__im__1);
#line 498
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
#line 502
c_rt_lib0move(&___nl__im__3,___get_global_string_const(258));
#line 502
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 502
c_rt_lib0clear(&___nl__im__3);
#line 502
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 502
c_rt_lib0clear(&___nl__im__2);
#line 508
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 508
___nl__int__6 = 0;
#line 508
___nl__bool__4 = ___nl__int__5 > ___nl__int__6;
#line 508
//clear ___nl__int__5;
#line 508
//clear ___nl__int__6;
#line 508
___nl__bool__4 = !___nl__bool__4;
#line 508
if(___nl__bool__4){ goto label_28;}
#line 504
c_rt_lib0move(&___nl__im__9,___get_global_string_const(465));
#line 504
c_rt_lib0move(&___nl__im__8, wprinter0build_sim(___nl__im__9));
#line 504
c_rt_lib0clear(&___nl__im__9);
#line 505
c_rt_lib0move(&___nl__im__11, pretty_printer_priv0join_print_val(___nl__im__0));
#line 505
c_rt_lib0move(&___nl__im__10, wprinter0build_pretty_l(___nl__im__11));
#line 505
c_rt_lib0clear(&___nl__im__11);
#line 506
c_rt_lib0move(&___nl__im__13,___get_global_string_const(331));
#line 506
c_rt_lib0move(&___nl__im__12, wprinter0build_sim(___nl__im__13));
#line 506
c_rt_lib0clear(&___nl__im__13);
#line 506
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(3, ___nl__im__8, ___nl__im__10, ___nl__im__12));
#line 506
c_rt_lib0clear(&___nl__im__8);
#line 506
c_rt_lib0clear(&___nl__im__10);
#line 506
c_rt_lib0clear(&___nl__im__12);
#line 506
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__7));
#line 506
c_rt_lib0clear(&___nl__im__7);
#line 506
goto label_28;
#line 506
label_28:
;
#line 506
//clear ___nl__bool__4;
#line 509
c_rt_lib0move(&___nl__im__14, wprinter0build_pretty_a(___nl__im__1));
#line 509
c_rt_lib0clear(&___nl__im__0);
#line 509
c_rt_lib0clear(&___nl__im__1);
#line 509
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
#line 513
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 513
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(229));
#line 513
c_rt_lib0clear(&___nl__im__2);
#line 513
___nl__bool__1 = !___nl__bool__1;
#line 513
if(___nl__bool__1){ goto label_16;}
#line 514
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 514
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 514
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(229)));
#line 514
c_rt_lib0clear(&___nl__im__5);
#line 514
c_rt_lib0clear(&___nl__im__6);
#line 514
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0print_sim_value(___nl__im__4));
#line 514
c_rt_lib0clear(&___nl__im__4);
#line 514
c_rt_lib0clear(&___nl__im__0);
#line 514
//clear ___nl__bool__1;
#line 514
return ___nl__im__3;
#line 515
goto label_135;
#line 515
label_16:
;
#line 515
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 515
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(257));
#line 515
c_rt_lib0clear(&___nl__im__7);
#line 515
___nl__bool__1 = !___nl__bool__1;
#line 515
if(___nl__bool__1){ goto label_34;}
#line 516
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 516
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 516
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(257)));
#line 516
c_rt_lib0clear(&___nl__im__10);
#line 516
c_rt_lib0clear(&___nl__im__11);
#line 516
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_return(___nl__im__9));
#line 516
c_rt_lib0clear(&___nl__im__9);
#line 516
c_rt_lib0clear(&___nl__im__0);
#line 516
//clear ___nl__bool__1;
#line 516
c_rt_lib0clear(&___nl__im__3);
#line 516
return ___nl__im__8;
#line 517
goto label_135;
#line 517
label_34:
;
#line 517
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 517
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(1078));
#line 517
c_rt_lib0clear(&___nl__im__12);
#line 517
___nl__bool__1 = !___nl__bool__1;
#line 517
if(___nl__bool__1){ goto label_47;}
#line 518
c_rt_lib0move(&___nl__im__13, pretty_printer_priv0print_break());
#line 518
c_rt_lib0clear(&___nl__im__0);
#line 518
//clear ___nl__bool__1;
#line 518
c_rt_lib0clear(&___nl__im__3);
#line 518
c_rt_lib0clear(&___nl__im__8);
#line 518
return ___nl__im__13;
#line 519
goto label_135;
#line 519
label_47:
;
#line 519
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 519
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1079));
#line 519
c_rt_lib0clear(&___nl__im__14);
#line 519
___nl__bool__1 = !___nl__bool__1;
#line 519
if(___nl__bool__1){ goto label_61;}
#line 520
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_continue());
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
return ___nl__im__15;
#line 521
goto label_135;
#line 521
label_61:
;
#line 521
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 521
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(258));
#line 521
c_rt_lib0clear(&___nl__im__16);
#line 521
___nl__bool__1 = !___nl__bool__1;
#line 521
if(___nl__bool__1){ goto label_82;}
#line 522
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 522
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 522
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(258)));
#line 522
c_rt_lib0clear(&___nl__im__19);
#line 522
c_rt_lib0clear(&___nl__im__20);
#line 522
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_die(___nl__im__18));
#line 522
c_rt_lib0clear(&___nl__im__18);
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
return ___nl__im__17;
#line 523
goto label_135;
#line 523
label_82:
;
#line 523
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 523
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(1082));
#line 523
c_rt_lib0clear(&___nl__im__21);
#line 523
___nl__bool__1 = !___nl__bool__1;
#line 523
if(___nl__bool__1){ goto label_106;}
#line 524
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 524
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 524
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(1082)));
#line 524
c_rt_lib0clear(&___nl__im__24);
#line 524
c_rt_lib0clear(&___nl__im__25);
#line 524
c_rt_lib0move(&___nl__im__26,___get_global_string_const(1082));
#line 524
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_try_ensure(___nl__im__23, ___nl__im__26));
#line 524
c_rt_lib0clear(&___nl__im__23);
#line 524
c_rt_lib0clear(&___nl__im__26);
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
return ___nl__im__22;
#line 525
goto label_135;
#line 525
label_106:
;
#line 525
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 525
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(185));
#line 525
c_rt_lib0clear(&___nl__im__27);
#line 525
___nl__bool__1 = !___nl__bool__1;
#line 525
if(___nl__bool__1){ goto label_131;}
#line 526
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 526
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 526
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(185)));
#line 526
c_rt_lib0clear(&___nl__im__30);
#line 526
c_rt_lib0clear(&___nl__im__31);
#line 526
c_rt_lib0move(&___nl__im__32,___get_global_string_const(185));
#line 526
c_rt_lib0move(&___nl__im__28, pretty_printer_priv0print_try_ensure(___nl__im__29, ___nl__im__32));
#line 526
c_rt_lib0clear(&___nl__im__29);
#line 526
c_rt_lib0clear(&___nl__im__32);
#line 526
c_rt_lib0clear(&___nl__im__0);
#line 526
//clear ___nl__bool__1;
#line 526
c_rt_lib0clear(&___nl__im__3);
#line 526
c_rt_lib0clear(&___nl__im__8);
#line 526
c_rt_lib0clear(&___nl__im__13);
#line 526
c_rt_lib0clear(&___nl__im__15);
#line 526
c_rt_lib0clear(&___nl__im__17);
#line 526
c_rt_lib0clear(&___nl__im__22);
#line 526
return ___nl__im__28;
#line 527
goto label_135;
#line 527
label_131:
;
#line 528
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(1, ___nl__im__0));
#line 528
nl_die_arg(___nl__im__33);
#line 529
goto label_135;
#line 529
label_135:
;
#line 529
//clear ___nl__bool__1;
#line 529
c_rt_lib0clear(&___nl__im__3);
#line 529
c_rt_lib0clear(&___nl__im__8);
#line 529
c_rt_lib0clear(&___nl__im__13);
#line 529
c_rt_lib0clear(&___nl__im__15);
#line 529
c_rt_lib0clear(&___nl__im__17);
#line 529
c_rt_lib0clear(&___nl__im__22);
#line 529
c_rt_lib0clear(&___nl__im__28);
#line 529
c_rt_lib0clear(&___nl__im__33);
return NULL;

}

ImmT  pretty_printer_priv0flush_sim_statement(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 533
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__1, ___nl__int__2));
#line 534
c_rt_lib0move(&___nl__im__3,___get_global_string_const(450));
#line 534
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__3));
#line 534
c_rt_lib0clear(&___nl__im__3);
#line 534
c_rt_lib0clear(&___nl__im__1);
#line 534
//clear ___nl__int__2;
#line 534
return NULL;

}

ImmT  pretty_printer_priv0print_cmd(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
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
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
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
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
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
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
INT  ___nl__int__93 = 0;
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
INT  ___nl__int__108 = 0;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
INT  ___nl__int__116 = 0;
INT  ___nl__int__117 = 0;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
bool  ___nl__bool__121 = false;
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
bool  ___nl__bool__140 = false;
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
#line 538
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(231)));
#line 538
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(1130)));
#line 538
c_rt_lib0clear(&___nl__im__4);
#line 538
c_rt_lib0delete(pretty_printer_priv0print_comment(___ref___im__0, ___nl__im__3, ___nl__int__2, ___nl__int__2));
#line 538
c_rt_lib0clear(&___nl__im__3);
#line 539
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(237)));
#line 539
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1070));
#line 539
if(___nl__bool__6){ goto label_49;}
#line 549
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1075));
#line 549
if(___nl__bool__6){ goto label_104;}
#line 551
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1071));
#line 551
if(___nl__bool__6){ goto label_121;}
#line 570
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1081));
#line 570
if(___nl__bool__6){ goto label_180;}
#line 582
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1083));
#line 582
if(___nl__bool__6){ goto label_249;}
#line 584
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1080));
#line 584
if(___nl__bool__6){ goto label_254;}
#line 595
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1072));
#line 595
if(___nl__bool__6){ goto label_303;}
#line 597
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1073));
#line 597
if(___nl__bool__6){ goto label_322;}
#line 600
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1074));
#line 600
if(___nl__bool__6){ goto label_343;}
#line 602
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(167));
#line 602
if(___nl__bool__6){ goto label_362;}
#line 605
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1076));
#line 605
if(___nl__bool__6){ goto label_370;}
#line 607
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1077));
#line 607
if(___nl__bool__6){ goto label_383;}
#line 609
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(229));
#line 609
if(___nl__bool__6){ goto label_396;}
#line 611
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1082));
#line 611
if(___nl__bool__6){ goto label_403;}
#line 613
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(185));
#line 613
if(___nl__bool__6){ goto label_412;}
#line 615
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(257));
#line 615
if(___nl__bool__6){ goto label_421;}
#line 617
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1078));
#line 617
if(___nl__bool__6){ goto label_428;}
#line 619
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(1079));
#line 619
if(___nl__bool__6){ goto label_433;}
#line 621
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(258));
#line 621
if(___nl__bool__6){ goto label_438;}
#line 623
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(263));
#line 623
if(___nl__bool__6){ goto label_445;}
#line 623
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 623
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 623
nl_die_arg(___nl__im__7);
#line 539
label_49:
;
#line 539
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1070)));
#line 539
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 540
c_rt_lib0move(&___nl__im__10,___get_global_string_const(1070));
#line 540
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1070)));
#line 540
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 540
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1084)));
#line 540
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__int__2));
#line 540
c_rt_lib0clear(&___nl__im__10);
#line 540
c_rt_lib0clear(&___nl__im__11);
#line 540
c_rt_lib0clear(&___nl__im__12);
#line 540
c_rt_lib0clear(&___nl__im__13);
#line 541
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1085)));
#line 541
___nl__int__16 = 0;
#line 541
___nl__int__17 = 1;
#line 541
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 541
label_65:
;
#line 541
___nl__bool__19 = ___nl__int__16 >= ___nl__int__18;
#line 541
if(___nl__bool__19){ goto label_85;}
#line 541
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 541
c_rt_lib0copy(&___nl__im__15, ___nl__im__20);
#line 542
c_rt_lib0move(&___nl__im__21,___get_global_string_const(477));
#line 542
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__21));
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 543
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1085));
#line 543
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(237)));
#line 543
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(0));
#line 543
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(1084)));
#line 543
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__im__25, ___nl__int__2));
#line 543
c_rt_lib0clear(&___nl__im__22);
#line 543
c_rt_lib0clear(&___nl__im__23);
#line 543
c_rt_lib0clear(&___nl__im__24);
#line 543
c_rt_lib0clear(&___nl__im__25);
#line 543
c_rt_lib0clear(&___nl__im__15);
#line 544
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 544
goto label_65;
#line 544
label_85:
;
#line 545
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1086)));
#line 545
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(237)));
#line 545
c_rt_lib0clear(&___nl__im__28);
#line 545
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(1083));
#line 545
c_rt_lib0clear(&___nl__im__27);
#line 545
___nl__bool__26 = !___nl__bool__26;
#line 545
___nl__bool__26 = !___nl__bool__26;
#line 545
if(___nl__bool__26){ goto label_101;}
#line 546
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1296));
#line 546
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__29));
#line 546
c_rt_lib0clear(&___nl__im__29);
#line 547
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1086)));
#line 547
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__30, ___nl__int__2));
#line 547
c_rt_lib0clear(&___nl__im__30);
#line 548
goto label_101;
#line 548
label_101:
;
#line 548
//clear ___nl__bool__26;
#line 549
goto label_452;
#line 549
label_104:
;
#line 549
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1075)));
#line 549
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 550
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(1151)));
#line 550
___nl__bool__33 = c_rt_lib0check_true_native(___nl__im__34);
#line 550
c_rt_lib0clear(&___nl__im__34);
#line 550
c_rt_lib0move(&___nl__im__35,___get_global_string_const(1075));
#line 550
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(237)));
#line 550
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 550
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(1084)));
#line 550
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__33, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__im__38, ___nl__int__2));
#line 550
//clear ___nl__bool__33;
#line 550
c_rt_lib0clear(&___nl__im__35);
#line 550
c_rt_lib0clear(&___nl__im__36);
#line 550
c_rt_lib0clear(&___nl__im__37);
#line 550
c_rt_lib0clear(&___nl__im__38);
#line 551
goto label_452;
#line 551
label_121:
;
#line 551
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1071)));
#line 551
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 553
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1087)));
#line 553
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__42, ___get_global_string_const(229));
#line 553
if(___nl__bool__43){ goto label_132;}
#line 555
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__42, ___get_global_string_const(263));
#line 555
if(___nl__bool__43){ goto label_137;}
#line 555
c_rt_lib0move(&___nl__im__44,___get_global_string_const(15));
#line 555
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(2, ___nl__im__44, ___nl__im__42));
#line 555
nl_die_arg(___nl__im__44);
#line 553
label_132:
;
#line 553
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__42, ___get_global_string_const(229)));
#line 553
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 554
c_rt_lib0move(&___nl__im__41, pretty_printer_priv0print_val(___nl__im__45));
#line 555
goto label_142;
#line 555
label_137:
;
#line 555
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__42, ___get_global_string_const(263)));
#line 555
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 556
c_rt_lib0move(&___nl__im__41, pretty_printer_priv0print_var_decl(___nl__im__47));
#line 557
goto label_142;
#line 557
label_142:
;
#line 559
c_rt_lib0move(&___nl__im__52,___get_global_string_const(1297));
#line 559
c_rt_lib0move(&___nl__im__51, wprinter0build_sim(___nl__im__52));
#line 559
c_rt_lib0clear(&___nl__im__52);
#line 561
c_rt_lib0move(&___nl__im__54,___get_global_string_const(450));
#line 561
c_rt_lib0move(&___nl__im__53, wprinter0build_sim(___nl__im__54));
#line 561
c_rt_lib0clear(&___nl__im__54);
#line 562
c_rt_lib0move(&___nl__im__55, wprinter0get_sep());
#line 563
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1084)));
#line 563
c_rt_lib0move(&___nl__im__56, pretty_printer_priv0print_val(___nl__im__57));
#line 563
c_rt_lib0clear(&___nl__im__57);
#line 564
c_rt_lib0move(&___nl__im__59,___get_global_string_const(450));
#line 564
c_rt_lib0move(&___nl__im__58, wprinter0build_sim(___nl__im__59));
#line 564
c_rt_lib0clear(&___nl__im__59);
#line 565
c_rt_lib0move(&___nl__im__60, wprinter0get_sep());
#line 566
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(372)));
#line 566
c_rt_lib0move(&___nl__im__61, pretty_printer_priv0print_val(___nl__im__62));
#line 566
c_rt_lib0clear(&___nl__im__62);
#line 567
c_rt_lib0move(&___nl__im__64,___get_global_string_const(1298));
#line 567
c_rt_lib0move(&___nl__im__63, wprinter0build_sim(___nl__im__64));
#line 567
c_rt_lib0clear(&___nl__im__64);
#line 567
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(9, ___nl__im__51, ___nl__im__41, ___nl__im__53, ___nl__im__55, ___nl__im__56, ___nl__im__58, ___nl__im__60, ___nl__im__61, ___nl__im__63));
#line 567
c_rt_lib0clear(&___nl__im__51);
#line 567
c_rt_lib0clear(&___nl__im__53);
#line 567
c_rt_lib0clear(&___nl__im__55);
#line 567
c_rt_lib0clear(&___nl__im__56);
#line 567
c_rt_lib0clear(&___nl__im__58);
#line 567
c_rt_lib0clear(&___nl__im__60);
#line 567
c_rt_lib0clear(&___nl__im__61);
#line 567
c_rt_lib0clear(&___nl__im__63);
#line 567
c_rt_lib0move(&___nl__im__49, wprinter0build_pretty_a(___nl__im__50));
#line 567
c_rt_lib0clear(&___nl__im__50);
#line 567
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__49, ___nl__int__2));
#line 567
c_rt_lib0clear(&___nl__im__49);
#line 569
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(237)));
#line 569
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__65, ___nl__int__2));
#line 569
c_rt_lib0clear(&___nl__im__65);
#line 570
goto label_452;
#line 570
label_180:
;
#line 570
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1081)));
#line 570
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 571
c_rt_lib0move(&___nl__im__68,___get_global_string_const(315));
#line 571
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__68));
#line 571
c_rt_lib0clear(&___nl__im__68);
#line 572
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(238)));
#line 572
___nl__int__71 = 0;
#line 572
___nl__int__72 = 1;
#line 572
___nl__int__73 = c_rt_lib0array_len(___nl__im__69);
#line 572
label_190:
;
#line 572
___nl__bool__74 = ___nl__int__71 >= ___nl__int__73;
#line 572
if(___nl__bool__74){ goto label_214;}
#line 572
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_get(___nl__im__69, ___nl__int__71));
#line 572
c_rt_lib0copy(&___nl__im__70, ___nl__im__75);
#line 573
c_rt_lib0move(&___nl__im__77, string0lf());
#line 573
___nl__int__80 = 1;
#line 573
___nl__int__79 = ___nl__int__2 + ___nl__int__80;
#line 573
//clear ___nl__int__80;
#line 573
c_rt_lib0move(&___nl__im__78, pretty_printer_priv0pind(___nl__int__79));
#line 573
//clear ___nl__int__79;
#line 573
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__78));
#line 573
c_rt_lib0clear(&___nl__im__77);
#line 573
c_rt_lib0clear(&___nl__im__78);
#line 573
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__76));
#line 573
c_rt_lib0clear(&___nl__im__76);
#line 574
___nl__int__82 = 1;
#line 574
___nl__int__81 = ___nl__int__2 + ___nl__int__82;
#line 574
//clear ___nl__int__82;
#line 574
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__70, ___nl__int__81));
#line 574
//clear ___nl__int__81;
#line 574
c_rt_lib0clear(&___nl__im__70);
#line 575
___nl__int__71 = ___nl__int__71 + ___nl__int__72;
#line 575
goto label_190;
#line 575
label_214:
;
#line 576
c_rt_lib0move(&___nl__im__84, string0lf());
#line 576
c_rt_lib0move(&___nl__im__85, pretty_printer_priv0pind(___nl__int__2));
#line 576
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 576
c_rt_lib0clear(&___nl__im__84);
#line 576
c_rt_lib0clear(&___nl__im__85);
#line 576
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__83));
#line 576
c_rt_lib0clear(&___nl__im__83);
#line 577
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(1133)));
#line 577
c_rt_lib0move(&___nl__im__88, array0is_empty(___nl__im__87));
#line 577
___nl__bool__86 = c_rt_lib0check_true_native(___nl__im__88);
#line 577
c_rt_lib0clear(&___nl__im__87);
#line 577
c_rt_lib0clear(&___nl__im__88);
#line 577
___nl__bool__86 = !___nl__bool__86;
#line 577
___nl__bool__86 = !___nl__bool__86;
#line 577
if(___nl__bool__86){ goto label_243;}
#line 578
___nl__int__90 = 1;
#line 578
c_rt_lib0move(&___nl__im__89, pretty_printer_priv0pind(___nl__int__90));
#line 578
//clear ___nl__int__90;
#line 578
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__89));
#line 578
c_rt_lib0clear(&___nl__im__89);
#line 579
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(1133)));
#line 579
___nl__int__93 = 1;
#line 579
___nl__int__92 = ___nl__int__2 + ___nl__int__93;
#line 579
//clear ___nl__int__93;
#line 579
c_rt_lib0delete(pretty_printer_priv0print_comment(___ref___im__0, ___nl__im__91, ___nl__int__92, ___nl__int__2));
#line 579
c_rt_lib0clear(&___nl__im__91);
#line 579
//clear ___nl__int__92;
#line 580
goto label_243;
#line 580
label_243:
;
#line 580
//clear ___nl__bool__86;
#line 581
c_rt_lib0move(&___nl__im__94,___get_global_string_const(316));
#line 581
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__94));
#line 581
c_rt_lib0clear(&___nl__im__94);
#line 582
goto label_452;
#line 582
label_249:
;
#line 583
c_rt_lib0move(&___nl__im__95,___get_global_string_const(450));
#line 583
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__95));
#line 583
c_rt_lib0clear(&___nl__im__95);
#line 584
goto label_452;
#line 584
label_254:
;
#line 584
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1080)));
#line 584
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 586
c_rt_lib0move(&___nl__im__101,___get_global_string_const(1299));
#line 586
c_rt_lib0move(&___nl__im__100, wprinter0build_sim(___nl__im__101));
#line 586
c_rt_lib0clear(&___nl__im__101);
#line 587
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(234)));
#line 587
c_rt_lib0move(&___nl__im__102, pretty_printer_priv0print_val(___nl__im__103));
#line 587
c_rt_lib0clear(&___nl__im__103);
#line 588
c_rt_lib0move(&___nl__im__105,___get_global_string_const(331));
#line 588
c_rt_lib0move(&___nl__im__104, wprinter0build_sim(___nl__im__105));
#line 588
c_rt_lib0clear(&___nl__im__105);
#line 588
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(3, ___nl__im__100, ___nl__im__102, ___nl__im__104));
#line 588
c_rt_lib0clear(&___nl__im__100);
#line 588
c_rt_lib0clear(&___nl__im__102);
#line 588
c_rt_lib0clear(&___nl__im__104);
#line 588
c_rt_lib0move(&___nl__im__98, wprinter0build_pretty_a(___nl__im__99));
#line 588
c_rt_lib0clear(&___nl__im__99);
#line 588
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__98, ___nl__int__2));
#line 588
c_rt_lib0clear(&___nl__im__98);
#line 590
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(1092)));
#line 590
___nl__int__108 = 0;
#line 590
___nl__int__109 = 1;
#line 590
___nl__int__110 = c_rt_lib0array_len(___nl__im__106);
#line 590
label_278:
;
#line 590
___nl__bool__111 = ___nl__int__108 >= ___nl__int__110;
#line 590
if(___nl__bool__111){ goto label_301;}
#line 590
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_get(___nl__im__106, ___nl__int__108));
#line 590
c_rt_lib0copy(&___nl__im__107, ___nl__im__112);
#line 591
c_rt_lib0move(&___nl__im__113,___get_global_string_const(1300));
#line 591
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__113));
#line 591
c_rt_lib0clear(&___nl__im__113);
#line 592
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(571)));
#line 592
c_rt_lib0move(&___nl__im__114, pretty_printer_priv0print_variant_case_decl(___nl__im__115));
#line 592
c_rt_lib0clear(&___nl__im__115);
#line 592
___nl__int__117 = 1;
#line 592
___nl__int__116 = ___nl__int__2 + ___nl__int__117;
#line 592
//clear ___nl__int__117;
#line 592
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__114, ___nl__int__116));
#line 592
c_rt_lib0clear(&___nl__im__114);
#line 592
//clear ___nl__int__116;
#line 593
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(237)));
#line 593
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__118, ___nl__int__2));
#line 593
c_rt_lib0clear(&___nl__im__118);
#line 593
c_rt_lib0clear(&___nl__im__107);
#line 594
___nl__int__108 = ___nl__int__108 + ___nl__int__109;
#line 594
goto label_278;
#line 594
label_301:
;
#line 595
goto label_452;
#line 595
label_303:
;
#line 595
c_rt_lib0move(&___nl__im__120, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1072)));
#line 595
c_rt_lib0copy(&___nl__im__119, ___nl__im__120);
#line 596
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(1151)));
#line 596
___nl__bool__121 = c_rt_lib0check_true_native(___nl__im__122);
#line 596
c_rt_lib0clear(&___nl__im__122);
#line 596
c_rt_lib0move(&___nl__im__123,___get_global_string_const(1072));
#line 596
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(237)));
#line 596
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(372)));
#line 596
c_rt_lib0move(&___nl__im__125, c_rt_lib0array_mk(1, ___nl__im__126));
#line 596
c_rt_lib0clear(&___nl__im__126);
#line 596
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(37)));
#line 596
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__121, ___nl__im__123, ___nl__im__124, ___nl__im__125, ___nl__im__127, ___nl__int__2));
#line 596
//clear ___nl__bool__121;
#line 596
c_rt_lib0clear(&___nl__im__123);
#line 596
c_rt_lib0clear(&___nl__im__124);
#line 596
c_rt_lib0clear(&___nl__im__125);
#line 596
c_rt_lib0clear(&___nl__im__127);
#line 597
goto label_452;
#line 597
label_322:
;
#line 597
c_rt_lib0move(&___nl__im__129, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1073)));
#line 597
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 598
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(1151)));
#line 598
___nl__bool__130 = c_rt_lib0check_true_native(___nl__im__131);
#line 598
c_rt_lib0clear(&___nl__im__131);
#line 598
c_rt_lib0move(&___nl__im__132,___get_global_string_const(1073));
#line 598
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(237)));
#line 598
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(585)));
#line 598
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(234)));
#line 598
c_rt_lib0move(&___nl__im__134, c_rt_lib0array_mk(2, ___nl__im__135, ___nl__im__136));
#line 598
c_rt_lib0clear(&___nl__im__135);
#line 598
c_rt_lib0clear(&___nl__im__136);
#line 598
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(135)));
#line 598
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__130, ___nl__im__132, ___nl__im__133, ___nl__im__134, ___nl__im__137, ___nl__int__2));
#line 598
//clear ___nl__bool__130;
#line 598
c_rt_lib0clear(&___nl__im__132);
#line 598
c_rt_lib0clear(&___nl__im__133);
#line 598
c_rt_lib0clear(&___nl__im__134);
#line 598
c_rt_lib0clear(&___nl__im__137);
#line 600
goto label_452;
#line 600
label_343:
;
#line 600
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1074)));
#line 600
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 601
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(1151)));
#line 601
___nl__bool__140 = c_rt_lib0check_true_native(___nl__im__141);
#line 601
c_rt_lib0clear(&___nl__im__141);
#line 601
c_rt_lib0move(&___nl__im__142,___get_global_string_const(1074));
#line 601
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(237)));
#line 601
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(372)));
#line 601
c_rt_lib0move(&___nl__im__144, c_rt_lib0array_mk(1, ___nl__im__145));
#line 601
c_rt_lib0clear(&___nl__im__145);
#line 601
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(1089)));
#line 601
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__140, ___nl__im__142, ___nl__im__143, ___nl__im__144, ___nl__im__146, ___nl__int__2));
#line 601
//clear ___nl__bool__140;
#line 601
c_rt_lib0clear(&___nl__im__142);
#line 601
c_rt_lib0clear(&___nl__im__143);
#line 601
c_rt_lib0clear(&___nl__im__144);
#line 601
c_rt_lib0clear(&___nl__im__146);
#line 602
goto label_452;
#line 602
label_362:
;
#line 602
c_rt_lib0move(&___nl__im__148, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(167)));
#line 602
c_rt_lib0copy(&___nl__im__147, ___nl__im__148);
#line 603
c_rt_lib0move(&___nl__im__149,___get_global_string_const(167));
#line 603
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__149));
#line 603
c_rt_lib0clear(&___nl__im__149);
#line 604
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__147, ___nl__int__2));
#line 605
goto label_452;
#line 605
label_370:
;
#line 605
c_rt_lib0move(&___nl__im__151, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1076)));
#line 605
c_rt_lib0copy(&___nl__im__150, ___nl__im__151);
#line 606
c_rt_lib0move(&___nl__im__152,___get_global_string_const(1070));
#line 606
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(237)));
#line 606
c_rt_lib0move(&___nl__im__154, c_rt_lib0array_mk(0));
#line 606
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(1084)));
#line 606
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__152, ___nl__im__153, ___nl__im__154, ___nl__im__155, ___nl__int__2));
#line 606
c_rt_lib0clear(&___nl__im__152);
#line 606
c_rt_lib0clear(&___nl__im__153);
#line 606
c_rt_lib0clear(&___nl__im__154);
#line 606
c_rt_lib0clear(&___nl__im__155);
#line 607
goto label_452;
#line 607
label_383:
;
#line 607
c_rt_lib0move(&___nl__im__157, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1077)));
#line 607
c_rt_lib0copy(&___nl__im__156, ___nl__im__157);
#line 608
c_rt_lib0move(&___nl__im__158,___get_global_string_const(1186));
#line 608
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__156, ___get_global_string_const(237)));
#line 608
c_rt_lib0move(&___nl__im__160, c_rt_lib0array_mk(0));
#line 608
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__156, ___get_global_string_const(1084)));
#line 608
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__158, ___nl__im__159, ___nl__im__160, ___nl__im__161, ___nl__int__2));
#line 608
c_rt_lib0clear(&___nl__im__158);
#line 608
c_rt_lib0clear(&___nl__im__159);
#line 608
c_rt_lib0clear(&___nl__im__160);
#line 608
c_rt_lib0clear(&___nl__im__161);
#line 609
goto label_452;
#line 609
label_396:
;
#line 609
c_rt_lib0move(&___nl__im__163, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(229)));
#line 609
c_rt_lib0copy(&___nl__im__162, ___nl__im__163);
#line 610
c_rt_lib0move(&___nl__im__164, pretty_printer_priv0print_sim_value(___nl__im__162));
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__164, ___nl__int__2));
#line 610
c_rt_lib0clear(&___nl__im__164);
#line 611
goto label_452;
#line 611
label_403:
;
#line 611
c_rt_lib0move(&___nl__im__166, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(1082)));
#line 611
c_rt_lib0copy(&___nl__im__165, ___nl__im__166);
#line 612
c_rt_lib0move(&___nl__im__168,___get_global_string_const(1082));
#line 612
c_rt_lib0move(&___nl__im__167, pretty_printer_priv0print_try_ensure(___nl__im__165, ___nl__im__168));
#line 612
c_rt_lib0clear(&___nl__im__168);
#line 612
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__167, ___nl__int__2));
#line 612
c_rt_lib0clear(&___nl__im__167);
#line 613
goto label_452;
#line 613
label_412:
;
#line 613
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(185)));
#line 613
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 614
c_rt_lib0move(&___nl__im__172,___get_global_string_const(185));
#line 614
c_rt_lib0move(&___nl__im__171, pretty_printer_priv0print_try_ensure(___nl__im__169, ___nl__im__172));
#line 614
c_rt_lib0clear(&___nl__im__172);
#line 614
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__171, ___nl__int__2));
#line 614
c_rt_lib0clear(&___nl__im__171);
#line 615
goto label_452;
#line 615
label_421:
;
#line 615
c_rt_lib0move(&___nl__im__174, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(257)));
#line 615
c_rt_lib0copy(&___nl__im__173, ___nl__im__174);
#line 616
c_rt_lib0move(&___nl__im__175, pretty_printer_priv0print_return(___nl__im__173));
#line 616
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__175, ___nl__int__2));
#line 616
c_rt_lib0clear(&___nl__im__175);
#line 617
goto label_452;
#line 617
label_428:
;
#line 618
c_rt_lib0move(&___nl__im__176, pretty_printer_priv0print_break());
#line 618
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__176, ___nl__int__2));
#line 618
c_rt_lib0clear(&___nl__im__176);
#line 619
goto label_452;
#line 619
label_433:
;
#line 620
c_rt_lib0move(&___nl__im__177, pretty_printer_priv0print_continue());
#line 620
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__177, ___nl__int__2));
#line 620
c_rt_lib0clear(&___nl__im__177);
#line 621
goto label_452;
#line 621
label_438:
;
#line 621
c_rt_lib0move(&___nl__im__179, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(258)));
#line 621
c_rt_lib0copy(&___nl__im__178, ___nl__im__179);
#line 622
c_rt_lib0move(&___nl__im__180, pretty_printer_priv0print_die(___nl__im__178));
#line 622
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__180, ___nl__int__2));
#line 622
c_rt_lib0clear(&___nl__im__180);
#line 623
goto label_452;
#line 623
label_445:
;
#line 623
c_rt_lib0move(&___nl__im__182, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(263)));
#line 623
c_rt_lib0copy(&___nl__im__181, ___nl__im__182);
#line 624
c_rt_lib0move(&___nl__im__183, pretty_printer_priv0print_var_decl(___nl__im__181));
#line 624
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__183, ___nl__int__2));
#line 624
c_rt_lib0clear(&___nl__im__183);
#line 625
goto label_452;
#line 625
label_452:
;
#line 625
c_rt_lib0clear(&___nl__im__1);
#line 625
//clear ___nl__int__2;
#line 625
c_rt_lib0clear(&___nl__im__5);
#line 625
//clear ___nl__bool__6;
#line 625
c_rt_lib0clear(&___nl__im__7);
#line 625
c_rt_lib0clear(&___nl__im__8);
#line 625
c_rt_lib0clear(&___nl__im__9);
#line 625
c_rt_lib0clear(&___nl__im__14);
#line 625
c_rt_lib0clear(&___nl__im__15);
#line 625
//clear ___nl__int__16;
#line 625
//clear ___nl__int__17;
#line 625
//clear ___nl__int__18;
#line 625
//clear ___nl__bool__19;
#line 625
c_rt_lib0clear(&___nl__im__20);
#line 625
c_rt_lib0clear(&___nl__im__31);
#line 625
c_rt_lib0clear(&___nl__im__32);
#line 625
c_rt_lib0clear(&___nl__im__39);
#line 625
c_rt_lib0clear(&___nl__im__40);
#line 625
c_rt_lib0clear(&___nl__im__41);
#line 625
c_rt_lib0clear(&___nl__im__42);
#line 625
//clear ___nl__bool__43;
#line 625
c_rt_lib0clear(&___nl__im__44);
#line 625
c_rt_lib0clear(&___nl__im__45);
#line 625
c_rt_lib0clear(&___nl__im__46);
#line 625
c_rt_lib0clear(&___nl__im__47);
#line 625
c_rt_lib0clear(&___nl__im__48);
#line 625
c_rt_lib0clear(&___nl__im__66);
#line 625
c_rt_lib0clear(&___nl__im__67);
#line 625
c_rt_lib0clear(&___nl__im__69);
#line 625
c_rt_lib0clear(&___nl__im__70);
#line 625
//clear ___nl__int__71;
#line 625
//clear ___nl__int__72;
#line 625
//clear ___nl__int__73;
#line 625
//clear ___nl__bool__74;
#line 625
c_rt_lib0clear(&___nl__im__75);
#line 625
c_rt_lib0clear(&___nl__im__96);
#line 625
c_rt_lib0clear(&___nl__im__97);
#line 625
c_rt_lib0clear(&___nl__im__106);
#line 625
c_rt_lib0clear(&___nl__im__107);
#line 625
//clear ___nl__int__108;
#line 625
//clear ___nl__int__109;
#line 625
//clear ___nl__int__110;
#line 625
//clear ___nl__bool__111;
#line 625
c_rt_lib0clear(&___nl__im__112);
#line 625
c_rt_lib0clear(&___nl__im__119);
#line 625
c_rt_lib0clear(&___nl__im__120);
#line 625
c_rt_lib0clear(&___nl__im__128);
#line 625
c_rt_lib0clear(&___nl__im__129);
#line 625
c_rt_lib0clear(&___nl__im__138);
#line 625
c_rt_lib0clear(&___nl__im__139);
#line 625
c_rt_lib0clear(&___nl__im__147);
#line 625
c_rt_lib0clear(&___nl__im__148);
#line 625
c_rt_lib0clear(&___nl__im__150);
#line 625
c_rt_lib0clear(&___nl__im__151);
#line 625
c_rt_lib0clear(&___nl__im__156);
#line 625
c_rt_lib0clear(&___nl__im__157);
#line 625
c_rt_lib0clear(&___nl__im__162);
#line 625
c_rt_lib0clear(&___nl__im__163);
#line 625
c_rt_lib0clear(&___nl__im__165);
#line 625
c_rt_lib0clear(&___nl__im__166);
#line 625
c_rt_lib0clear(&___nl__im__169);
#line 625
c_rt_lib0clear(&___nl__im__170);
#line 625
c_rt_lib0clear(&___nl__im__173);
#line 625
c_rt_lib0clear(&___nl__im__174);
#line 625
c_rt_lib0clear(&___nl__im__178);
#line 625
c_rt_lib0clear(&___nl__im__179);
#line 625
c_rt_lib0clear(&___nl__im__181);
#line 625
c_rt_lib0clear(&___nl__im__182);
#line 625
return NULL;

}

ImmT  pretty_printer_priv0print_comment(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 630
c_rt_lib0move(&___nl__im__5, array0is_empty(___nl__im__1));
#line 630
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 630
c_rt_lib0clear(&___nl__im__5);
#line 630
___nl__bool__4 = !___nl__bool__4;
#line 630
___nl__bool__4 = !___nl__bool__4;
#line 630
if(___nl__bool__4){ goto label_40;}
#line 631
___nl__int__6 = c_rt_lib0array_len(___nl__im__1);
#line 631
___nl__int__7 = 0;
#line 631
___nl__int__8 = 1;
#line 631
label_9:
;
#line 631
___nl__bool__9 = ___nl__int__7 >= ___nl__int__6;
#line 631
if(___nl__bool__9){ goto label_35;}
#line 632
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__7));
#line 632
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__10));
#line 632
c_rt_lib0clear(&___nl__im__10);
#line 633
c_rt_lib0move(&___nl__im__11, string0lf());
#line 633
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__11));
#line 633
c_rt_lib0clear(&___nl__im__11);
#line 634
___nl__int__14 = 1;
#line 634
___nl__int__13 = ___nl__int__7 + ___nl__int__14;
#line 634
//clear ___nl__int__14;
#line 634
___nl__int__15 = c_rt_lib0array_len(___nl__im__1);
#line 634
___nl__bool__12 = ___nl__int__13 < ___nl__int__15;
#line 634
//clear ___nl__int__13;
#line 634
//clear ___nl__int__15;
#line 634
___nl__bool__12 = !___nl__bool__12;
#line 634
if(___nl__bool__12){ goto label_31;}
#line 635
c_rt_lib0move(&___nl__im__16, pretty_printer_priv0pind(___nl__int__2));
#line 635
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__16));
#line 635
c_rt_lib0clear(&___nl__im__16);
#line 636
goto label_31;
#line 636
label_31:
;
#line 636
//clear ___nl__bool__12;
#line 637
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 637
goto label_9;
#line 637
label_35:
;
#line 638
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0pind(___nl__int__3));
#line 638
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__17));
#line 638
c_rt_lib0clear(&___nl__im__17);
#line 639
goto label_40;
#line 639
label_40:
;
#line 639
//clear ___nl__bool__4;
#line 639
//clear ___nl__int__6;
#line 639
//clear ___nl__int__7;
#line 639
//clear ___nl__int__8;
#line 639
//clear ___nl__bool__9;
#line 639
c_rt_lib0clear(&___nl__im__1);
#line 639
//clear ___nl__int__2;
#line 639
//clear ___nl__int__3;
#line 639
return NULL;
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
#line 643
___nl__int__2 = string0length(___nl__im__0);
#line 643
___nl__int__3 = 0;
#line 643
___nl__bool__1 = ___nl__int__2 == ___nl__int__3;
#line 643
//clear ___nl__int__2;
#line 643
//clear ___nl__int__3;
#line 643
___nl__bool__1 = !___nl__bool__1;
#line 643
if(___nl__bool__1){ goto label_12;}
#line 643
___nl__bool__4 = false;
#line 643
c_rt_lib0clear(&___nl__im__0);
#line 643
//clear ___nl__bool__1;
#line 643
return ___nl__bool__4;
#line 643
goto label_12;
#line 643
label_12:
;
#line 643
//clear ___nl__bool__1;
#line 643
//clear ___nl__bool__4;
#line 644
___nl__int__7 = 0;
#line 644
___nl__int__8 = 1;
#line 644
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__8));
#line 644
//clear ___nl__int__7;
#line 644
//clear ___nl__int__8;
#line 644
___nl__bool__5 = string0is_letter(___nl__im__6);
#line 644
c_rt_lib0clear(&___nl__im__6);
#line 644
___nl__bool__5 = !___nl__bool__5;
#line 644
___nl__bool__5 = !___nl__bool__5;
#line 644
if(___nl__bool__5){ goto label_30;}
#line 644
___nl__bool__9 = false;
#line 644
c_rt_lib0clear(&___nl__im__0);
#line 644
//clear ___nl__bool__5;
#line 644
return ___nl__bool__9;
#line 644
goto label_30;
#line 644
label_30:
;
#line 644
//clear ___nl__bool__5;
#line 644
//clear ___nl__bool__9;
#line 645
c_rt_lib0move(&___nl__im__10, string0to_array(___nl__im__0));
#line 645
___nl__int__12 = 0;
#line 645
___nl__int__13 = 1;
#line 645
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 645
label_37:
;
#line 645
___nl__bool__15 = ___nl__int__12 >= ___nl__int__14;
#line 645
if(___nl__bool__15){ goto label_72;}
#line 645
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 645
c_rt_lib0copy(&___nl__im__11, ___nl__im__16);
#line 646
___nl__bool__17 = string0is_letter(___nl__im__11);
#line 646
if(___nl__bool__17){ goto label_45;}
#line 646
___nl__bool__17 = string0is_digit(___nl__im__11);
#line 646
label_45:
;
#line 646
if(___nl__bool__17){ goto label_50;}
#line 646
c_rt_lib0move(&___nl__im__18,___get_global_string_const(112));
#line 646
___nl__bool__17 = c_rt_lib0eq(___nl__im__11, ___nl__im__18);
#line 646
c_rt_lib0clear(&___nl__im__18);
#line 646
label_50:
;
#line 646
___nl__bool__17 = !___nl__bool__17;
#line 646
___nl__bool__17 = !___nl__bool__17;
#line 646
if(___nl__bool__17){ goto label_66;}
#line 646
___nl__bool__19 = false;
#line 646
c_rt_lib0clear(&___nl__im__0);
#line 646
c_rt_lib0clear(&___nl__im__10);
#line 646
c_rt_lib0clear(&___nl__im__11);
#line 646
//clear ___nl__int__12;
#line 646
//clear ___nl__int__13;
#line 646
//clear ___nl__int__14;
#line 646
//clear ___nl__bool__15;
#line 646
c_rt_lib0clear(&___nl__im__16);
#line 646
//clear ___nl__bool__17;
#line 646
return ___nl__bool__19;
#line 646
goto label_66;
#line 646
label_66:
;
#line 646
//clear ___nl__bool__17;
#line 646
//clear ___nl__bool__19;
#line 646
c_rt_lib0clear(&___nl__im__11);
#line 647
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 647
goto label_37;
#line 647
label_72:
;
#line 648
___nl__bool__20 = true;
#line 648
c_rt_lib0clear(&___nl__im__0);
#line 648
c_rt_lib0clear(&___nl__im__10);
#line 648
c_rt_lib0clear(&___nl__im__11);
#line 648
//clear ___nl__int__12;
#line 648
//clear ___nl__int__13;
#line 648
//clear ___nl__int__14;
#line 648
//clear ___nl__bool__15;
#line 648
c_rt_lib0clear(&___nl__im__16);
#line 648
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
