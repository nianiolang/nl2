
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(191));
#line 13
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 13
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 13
c_rt_lib0move(&___nl__string__3,___get_global_string_const(191));
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
return pretty_printer0struct_t();
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__7, ___get_global_string_const(1185), ___nl__im__8, ___get_global_string_const(1135), ___nl__im__9));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(477), ___nl__im__2, ___get_global_string_const(207), ___nl__im__4));
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
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 24
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(477), ___nl__im__2, ___get_global_string_const(207), ___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(171)));
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
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 25
___nl__bool__9 = ___nl__int__10;
#line 25
if(___nl__bool__9){ goto label_39;}
#line 25
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 25
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 26
c_rt_lib0move(&___nl__im__12,___get_global_string_const(477));
#line 26
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__12));
#line 26
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1186));
#line 26
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(166)));
#line 26
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 26
c_rt_lib0clear(&___nl__im__16);
#line 26
c_rt_lib0clear(&___nl__im__17);
#line 26
c_rt_lib0move(&___nl__im__18,___get_global_string_const(440));
#line 26
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__18));
#line 26
c_rt_lib0clear(&___nl__im__15);
#line 26
c_rt_lib0clear(&___nl__im__18);
#line 26
c_rt_lib0move(&___nl__im__19, string0lf());
#line 26
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 26
c_rt_lib0clear(&___nl__im__14);
#line 26
c_rt_lib0clear(&___nl__im__19);
#line 26
c_rt_lib0delete(array0push(&___nl__im__12, ___nl__im__13));
#line 26
c_rt_lib0move(&___nl__string__20,___get_global_string_const(477));
#line 26
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__20, ___nl__im__12));
#line 26
c_rt_lib0clear(&___nl__im__12);
#line 26
c_rt_lib0clear(&___nl__im__13);
#line 26
c_rt_lib0clear(&___nl__string__20);
#line 26
c_rt_lib0clear(&___nl__im__5);
#line 27
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 27
goto label_9;
#line 27
label_39:
;
#line 28
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(164)));
#line 28
___nl__int__23 = 0;
#line 28
___nl__int__24 = 1;
#line 28
___nl__int__25 = c_rt_lib0array_len(___nl__im__21);
#line 28
label_44:
;
#line 28
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 28
___nl__bool__26 = ___nl__int__27;
#line 28
if(___nl__bool__26){ goto label_128;}
#line 28
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__21, ___nl__int__23));
#line 28
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 29
c_rt_lib0move(&___nl__im__30,___get_global_string_const(36));
#line 29
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(1, ___get_global_string_const(191), ___nl__im__30));
#line 29
c_rt_lib0clear(&___nl__im__30);
#line 30
c_rt_lib0move(&___nl__im__31, string0lf());
#line 30
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__29, ___nl__im__31));
#line 30
c_rt_lib0clear(&___nl__im__31);
#line 31
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 31
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(&___nl__im__29, ___nl__im__22, ___nl__im__32));
#line 31
c_rt_lib0clear(&___nl__im__32);
#line 32
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(191)));
#line 33
c_rt_lib0move(&___nl__im__34,___get_global_string_const(36));
#line 33
c_rt_lib0copy(&___nl__im__35, ___nl__im__34);
#line 33
c_rt_lib0hash_set_value_dec(&___nl__im__29, ___get_global_string_const(191), ___nl__im__35);
#line 33
c_rt_lib0clear(&___nl__im__34);
#line 33
c_rt_lib0clear(&___nl__im__35);
#line 34
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(226)));
#line 34
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(226)));
#line 34
c_rt_lib0clear(&___nl__im__38);
#line 34
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(226)));
#line 34
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(226)));
#line 34
c_rt_lib0clear(&___nl__im__40);
#line 34
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__39, ___get_global_string_const(980)));
#line 34
c_rt_lib0clear(&___nl__im__37);
#line 34
c_rt_lib0clear(&___nl__im__39);
#line 34
___nl__int__42 = 0;
#line 34
___nl__int__43 = 1;
#line 34
___nl__int__44 = c_rt_lib0array_len(___nl__im__36);
#line 34
label_77:
;
#line 34
___nl__int__46 = ___nl__int__42 >= ___nl__int__44;
#line 34
___nl__bool__45 = ___nl__int__46;
#line 34
if(___nl__bool__45){ goto label_98;}
#line 34
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__36, ___nl__int__42));
#line 34
c_rt_lib0copy(&___nl__im__41, ___nl__im__47);
#line 35
c_rt_lib0move(&___nl__im__49, string0lf());
#line 35
___nl__int__51 = 1;
#line 35
c_rt_lib0move(&___nl__im__50, pretty_printer_priv0pind(___nl__int__51));
#line 35
//clear ___nl__int__51;
#line 35
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__50));
#line 35
c_rt_lib0clear(&___nl__im__49);
#line 35
c_rt_lib0clear(&___nl__im__50);
#line 35
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__29, ___nl__im__48));
#line 35
c_rt_lib0clear(&___nl__im__48);
#line 36
___nl__int__52 = 1;
#line 36
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__im__29, ___nl__im__41, ___nl__int__52));
#line 36
//clear ___nl__int__52;
#line 36
c_rt_lib0clear(&___nl__im__41);
#line 37
___nl__int__42 = ___nl__int__42 + ___nl__int__43;
#line 37
goto label_77;
#line 37
label_98:
;
#line 38
c_rt_lib0move(&___nl__im__53,___get_global_string_const(207));
#line 38
c_rt_lib0move(&___nl__im__53, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__53));
#line 39
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(208)));
#line 39
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__58, ___get_global_string_const(465));
#line 39
c_rt_lib0clear(&___nl__im__58);
#line 39
if(___nl__bool__57){ goto label_107;}
#line 39
c_rt_lib0move(&___nl__im__56,___get_global_string_const(36));
#line 39
goto label_109;
#line 39
label_107:
;
#line 39
c_rt_lib0move(&___nl__im__56,___get_global_string_const(34));
#line 39
label_109:
;
#line 39
//clear ___nl__bool__57;
#line 39
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(166)));
#line 39
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__59));
#line 39
c_rt_lib0clear(&___nl__im__56);
#line 39
c_rt_lib0clear(&___nl__im__59);
#line 41
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(191)));
#line 41
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__55, ___get_global_string_const(1185), ___nl__im__33, ___get_global_string_const(1135), ___nl__im__60));
#line 41
c_rt_lib0clear(&___nl__im__55);
#line 41
c_rt_lib0clear(&___nl__im__60);
#line 41
c_rt_lib0delete(array0push(&___nl__im__53, ___nl__im__54));
#line 41
c_rt_lib0move(&___nl__string__61,___get_global_string_const(207));
#line 41
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__61, ___nl__im__53));
#line 41
c_rt_lib0clear(&___nl__im__53);
#line 41
c_rt_lib0clear(&___nl__im__54);
#line 41
c_rt_lib0clear(&___nl__string__61);
#line 41
c_rt_lib0clear(&___nl__im__22);
#line 43
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 43
goto label_44;
#line 43
label_128:
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
//clear ___nl__int__10;
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__21);
#line 44
c_rt_lib0clear(&___nl__im__22);
#line 44
//clear ___nl__int__23;
#line 44
//clear ___nl__int__24;
#line 44
//clear ___nl__int__25;
#line 44
//clear ___nl__bool__26;
#line 44
//clear ___nl__int__27;
#line 44
c_rt_lib0clear(&___nl__im__28);
#line 44
c_rt_lib0clear(&___nl__im__29);
#line 44
c_rt_lib0clear(&___nl__im__33);
#line 44
c_rt_lib0clear(&___nl__im__36);
#line 44
c_rt_lib0clear(&___nl__im__41);
#line 44
//clear ___nl__int__42;
#line 44
//clear ___nl__int__43;
#line 44
//clear ___nl__int__44;
#line 44
//clear ___nl__bool__45;
#line 44
//clear ___nl__int__46;
#line 44
c_rt_lib0clear(&___nl__im__47);
#line 44
return ___nl__im__1;
return NULL;

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
#line 48
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 48
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_string_const(191), ___nl__im__2));
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 49
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1032)));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1032)));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1187));
#line 52
c_rt_lib0move(&___nl__im__17, string0lf());
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 52
c_rt_lib0clear(&___nl__im__16);
#line 52
c_rt_lib0clear(&___nl__im__17);
#line 52
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1188));
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
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1187));
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(171)));
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
___nl__int__31 = ___nl__int__27 >= ___nl__int__29;
#line 56
___nl__bool__30 = ___nl__int__31;
#line 56
if(___nl__bool__30){ goto label_78;}
#line 56
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 56
c_rt_lib0copy(&___nl__im__26, ___nl__im__32);
#line 57
c_rt_lib0move(&___nl__im__35,___get_global_string_const(1186));
#line 57
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(166)));
#line 57
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 57
c_rt_lib0clear(&___nl__im__35);
#line 57
c_rt_lib0clear(&___nl__im__36);
#line 57
c_rt_lib0move(&___nl__im__37,___get_global_string_const(440));
#line 57
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__37));
#line 57
c_rt_lib0clear(&___nl__im__34);
#line 57
c_rt_lib0clear(&___nl__im__37);
#line 57
c_rt_lib0delete(array0push(&___nl__im__24, ___nl__im__33));
#line 57
c_rt_lib0clear(&___nl__im__33);
#line 57
c_rt_lib0clear(&___nl__im__26);
#line 58
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 58
goto label_58;
#line 58
label_78:
;
#line 59
c_rt_lib0move(&___nl__im__39, string0lf());
#line 59
c_rt_lib0move(&___nl__im__38, array0join(___nl__im__39, ___nl__im__24));
#line 59
c_rt_lib0clear(&___nl__im__39);
#line 59
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__38));
#line 59
c_rt_lib0clear(&___nl__im__38);
#line 60
c_rt_lib0move(&___nl__im__41, string0lf());
#line 60
c_rt_lib0move(&___nl__im__42, string0lf());
#line 60
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 60
c_rt_lib0clear(&___nl__im__41);
#line 60
c_rt_lib0clear(&___nl__im__42);
#line 60
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__40));
#line 60
c_rt_lib0clear(&___nl__im__40);
#line 61
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(164)));
#line 61
___nl__int__45 = 0;
#line 61
___nl__int__46 = 1;
#line 61
___nl__int__47 = c_rt_lib0array_len(___nl__im__43);
#line 61
label_95:
;
#line 61
___nl__int__49 = ___nl__int__45 >= ___nl__int__47;
#line 61
___nl__bool__48 = ___nl__int__49;
#line 61
if(___nl__bool__48){ goto label_114;}
#line 61
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__43, ___nl__int__45));
#line 61
c_rt_lib0copy(&___nl__im__44, ___nl__im__50);
#line 62
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 62
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__im__1, ___nl__im__44, ___nl__im__51));
#line 62
c_rt_lib0clear(&___nl__im__51);
#line 63
c_rt_lib0move(&___nl__im__53, string0lf());
#line 63
c_rt_lib0move(&___nl__im__54, string0lf());
#line 63
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__54));
#line 63
c_rt_lib0clear(&___nl__im__53);
#line 63
c_rt_lib0clear(&___nl__im__54);
#line 63
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__im__1, ___nl__im__52));
#line 63
c_rt_lib0clear(&___nl__im__52);
#line 63
c_rt_lib0clear(&___nl__im__44);
#line 64
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 64
goto label_95;
#line 64
label_114:
;
#line 65
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(191)));
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
//clear ___nl__int__31;
#line 65
c_rt_lib0clear(&___nl__im__32);
#line 65
c_rt_lib0clear(&___nl__im__43);
#line 65
c_rt_lib0clear(&___nl__im__44);
#line 65
//clear ___nl__int__45;
#line 65
//clear ___nl__int__46;
#line 65
//clear ___nl__int__47;
#line 65
//clear ___nl__bool__48;
#line 65
//clear ___nl__int__49;
#line 65
c_rt_lib0clear(&___nl__im__50);
#line 65
return ___nl__im__55;
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(226)));
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
#line 74
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(208)));
#line 75
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(209));
#line 75
if(___nl__bool__5){ goto label_9;}
#line 77
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(465));
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
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(166)));
#line 79
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 81
c_rt_lib0move(&___nl__im__12,___get_global_string_const(720));
#line 81
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 81
c_rt_lib0clear(&___nl__im__12);
#line 82
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 83
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__3));
#line 84
c_rt_lib0move(&___nl__im__16,___get_global_string_const(455));
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
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(265)));
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
___nl__int__22 = ___nl__int__19 >= ___nl__int__17;
#line 86
___nl__bool__21 = ___nl__int__22;
#line 86
if(___nl__bool__21){ goto label_138;}
#line 87
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(265)));
#line 87
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__24, ___nl__int__19));
#line 87
c_rt_lib0clear(&___nl__im__24);
#line 88
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(266)));
#line 88
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(39));
#line 88
if(___nl__bool__26){ goto label_55;}
#line 90
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(71));
#line 90
if(___nl__bool__26){ goto label_66;}
#line 90
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 90
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 90
nl_die_arg(___nl__im__27);
#line 88
label_55:
;
#line 89
c_rt_lib0move(&___nl__im__30,___get_global_string_const(39));
#line 89
c_rt_lib0move(&___nl__im__29, wprinter0build_sim(___nl__im__30));
#line 89
c_rt_lib0clear(&___nl__im__30);
#line 89
c_rt_lib0move(&___nl__im__31, wprinter0get_sep());
#line 89
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__31));
#line 89
c_rt_lib0clear(&___nl__im__29);
#line 89
c_rt_lib0clear(&___nl__im__31);
#line 89
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__28));
#line 89
c_rt_lib0clear(&___nl__im__28);
#line 90
goto label_68;
#line 90
label_66:
;
#line 91
goto label_68;
#line 91
label_68:
;
#line 92
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(166)));
#line 92
c_rt_lib0move(&___nl__im__32, wprinter0build_sim(___nl__im__33));
#line 92
c_rt_lib0clear(&___nl__im__33);
#line 92
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__32));
#line 92
c_rt_lib0clear(&___nl__im__32);
#line 93
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(204)));
#line 93
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(204));
#line 93
if(___nl__bool__35){ goto label_82;}
#line 95
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(71));
#line 95
if(___nl__bool__35){ goto label_99;}
#line 95
c_rt_lib0move(&___nl__im__36,___get_global_string_const(15));
#line 95
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__34));
#line 95
nl_die_arg(___nl__im__36);
#line 93
label_82:
;
#line 93
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__34, ___get_global_string_const(204)));
#line 93
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 94
c_rt_lib0move(&___nl__im__40, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__im__42,___get_global_string_const(522));
#line 94
c_rt_lib0move(&___nl__im__41, wprinter0build_sim(___nl__im__42));
#line 94
c_rt_lib0clear(&___nl__im__42);
#line 94
c_rt_lib0move(&___nl__im__43, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__im__44, pretty_printer_priv0print_val(___nl__im__37));
#line 94
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(4, ___nl__im__40, ___nl__im__41, ___nl__im__43, ___nl__im__44));
#line 94
c_rt_lib0clear(&___nl__im__40);
#line 94
c_rt_lib0clear(&___nl__im__41);
#line 94
c_rt_lib0clear(&___nl__im__43);
#line 94
c_rt_lib0clear(&___nl__im__44);
#line 94
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__39));
#line 94
c_rt_lib0clear(&___nl__im__39);
#line 95
goto label_101;
#line 95
label_99:
;
#line 96
goto label_101;
#line 96
label_101:
;
#line 97
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(265)));
#line 97
___nl__int__47 = c_rt_lib0array_len(___nl__im__48);
#line 97
c_rt_lib0clear(&___nl__im__48);
#line 97
___nl__int__49 = 1;
#line 97
___nl__int__46 = ___nl__int__47 - ___nl__int__49;
#line 97
//clear ___nl__int__47;
#line 97
//clear ___nl__int__49;
#line 97
___nl__int__50 = ___nl__int__19 != ___nl__int__46;
#line 97
___nl__bool__45 = ___nl__int__50;
#line 97
//clear ___nl__int__46;
#line 97
//clear ___nl__int__50;
#line 97
___nl__bool__45 = !___nl__bool__45;
#line 97
if(___nl__bool__45){ goto label_125;}
#line 97
c_rt_lib0move(&___nl__im__53,___get_global_string_const(312));
#line 97
c_rt_lib0move(&___nl__im__52, wprinter0build_sim(___nl__im__53));
#line 97
c_rt_lib0clear(&___nl__im__53);
#line 97
c_rt_lib0move(&___nl__im__54, wprinter0get_sep());
#line 97
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__54));
#line 97
c_rt_lib0clear(&___nl__im__52);
#line 97
c_rt_lib0clear(&___nl__im__54);
#line 97
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__51));
#line 97
c_rt_lib0clear(&___nl__im__51);
#line 97
goto label_125;
#line 97
label_125:
;
#line 97
//clear ___nl__bool__45;
#line 97
c_rt_lib0clear(&___nl__im__23);
#line 97
c_rt_lib0clear(&___nl__im__25);
#line 97
//clear ___nl__bool__26;
#line 97
c_rt_lib0clear(&___nl__im__27);
#line 97
c_rt_lib0clear(&___nl__im__34);
#line 97
//clear ___nl__bool__35;
#line 97
c_rt_lib0clear(&___nl__im__36);
#line 97
c_rt_lib0clear(&___nl__im__37);
#line 97
c_rt_lib0clear(&___nl__im__38);
#line 98
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 98
goto label_40;
#line 98
label_138:
;
#line 99
c_rt_lib0move(&___nl__im__56,___get_global_string_const(320));
#line 99
c_rt_lib0move(&___nl__im__55, wprinter0build_sim(___nl__im__56));
#line 99
c_rt_lib0clear(&___nl__im__56);
#line 99
c_rt_lib0delete(array0push(&___nl__im__10, ___nl__im__55));
#line 99
c_rt_lib0clear(&___nl__im__55);
#line 100
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(466)));
#line 100
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(204)));
#line 100
c_rt_lib0clear(&___nl__im__58);
#line 100
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__57, ___get_global_string_const(204));
#line 100
if(___nl__bool__59){ goto label_154;}
#line 107
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__57, ___get_global_string_const(71));
#line 107
if(___nl__bool__59){ goto label_171;}
#line 107
c_rt_lib0move(&___nl__im__60,___get_global_string_const(15));
#line 107
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_mk(2, ___nl__im__60, ___nl__im__57));
#line 107
nl_die_arg(___nl__im__60);
#line 100
label_154:
;
#line 100
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__57, ___get_global_string_const(204)));
#line 100
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 102
c_rt_lib0move(&___nl__im__64, wprinter0get_sep());
#line 103
c_rt_lib0move(&___nl__im__66,___get_global_string_const(522));
#line 103
c_rt_lib0move(&___nl__im__65, wprinter0build_sim(___nl__im__66));
#line 103
c_rt_lib0clear(&___nl__im__66);
#line 104
c_rt_lib0move(&___nl__im__67, wprinter0get_sep());
#line 105
c_rt_lib0move(&___nl__im__68, pretty_printer_priv0print_sim_value(___nl__im__61));
#line 105
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(4, ___nl__im__64, ___nl__im__65, ___nl__im__67, ___nl__im__68));
#line 105
c_rt_lib0clear(&___nl__im__64);
#line 105
c_rt_lib0clear(&___nl__im__65);
#line 105
c_rt_lib0clear(&___nl__im__67);
#line 105
c_rt_lib0clear(&___nl__im__68);
#line 105
c_rt_lib0delete(array0append(&___nl__im__10, ___nl__im__63));
#line 105
c_rt_lib0clear(&___nl__im__63);
#line 107
goto label_173;
#line 107
label_171:
;
#line 108
goto label_173;
#line 108
label_173:
;
#line 109
c_rt_lib0move(&___nl__im__69, wprinter0build_pretty_l(___nl__im__10));
#line 109
___nl__int__70 = 0;
#line 109
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__69, ___nl__int__70));
#line 109
c_rt_lib0clear(&___nl__im__69);
#line 109
//clear ___nl__int__70;
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
//clear ___nl__int__22;
#line 109
c_rt_lib0clear(&___nl__im__23);
#line 109
c_rt_lib0clear(&___nl__im__25);
#line 109
//clear ___nl__bool__26;
#line 109
c_rt_lib0clear(&___nl__im__27);
#line 109
c_rt_lib0clear(&___nl__im__34);
#line 109
//clear ___nl__bool__35;
#line 109
c_rt_lib0clear(&___nl__im__36);
#line 109
c_rt_lib0clear(&___nl__im__37);
#line 109
c_rt_lib0clear(&___nl__im__38);
#line 109
c_rt_lib0clear(&___nl__im__57);
#line 109
//clear ___nl__bool__59;
#line 109
c_rt_lib0clear(&___nl__im__60);
#line 109
c_rt_lib0clear(&___nl__im__61);
#line 109
c_rt_lib0clear(&___nl__im__62);
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
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 114
___nl__bool__5 = ___nl__int__6;
#line 114
if(___nl__bool__5){ goto label_38;}
#line 115
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 115
c_rt_lib0move(&___nl__im__7, pretty_printer_priv0print_var_decl(___nl__im__8));
#line 115
c_rt_lib0clear(&___nl__im__8);
#line 115
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 115
c_rt_lib0clear(&___nl__im__7);
#line 116
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 116
___nl__int__12 = 1;
#line 116
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 116
//clear ___nl__int__11;
#line 116
//clear ___nl__int__12;
#line 116
___nl__int__13 = ___nl__int__3 != ___nl__int__10;
#line 116
___nl__bool__9 = ___nl__int__13;
#line 116
//clear ___nl__int__10;
#line 116
//clear ___nl__int__13;
#line 116
___nl__bool__9 = !___nl__bool__9;
#line 116
if(___nl__bool__9){ goto label_34;}
#line 116
c_rt_lib0move(&___nl__im__16,___get_global_string_const(312));
#line 116
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 116
c_rt_lib0clear(&___nl__im__16);
#line 116
c_rt_lib0move(&___nl__im__17, wprinter0get_sep());
#line 116
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__17));
#line 116
c_rt_lib0clear(&___nl__im__15);
#line 116
c_rt_lib0clear(&___nl__im__17);
#line 116
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__14));
#line 116
c_rt_lib0clear(&___nl__im__14);
#line 116
goto label_34;
#line 116
label_34:
;
#line 116
//clear ___nl__bool__9;
#line 117
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 117
goto label_4;
#line 117
label_38:
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
//clear ___nl__int__6;
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(502));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 123
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(204));
#line 123
if(___nl__bool__6){ goto label_15;}
#line 131
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(71));
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
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(204)));
#line 123
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 125
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 125
c_rt_lib0move(&___nl__im__11, wprinter0build_sim(___nl__im__12));
#line 125
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0move(&___nl__im__13, wprinter0get_sep());
#line 127
c_rt_lib0move(&___nl__im__15,___get_global_string_const(522));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
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
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 134
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(218));
#line 134
if(___nl__bool__21){ goto label_52;}
#line 136
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(71));
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
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(218)));
#line 134
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 135
c_rt_lib0move(&___nl__im__26, wprinter0get_sep());
#line 135
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1012));
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
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
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
___nl__int__5 = ___nl__int__2 >= ___nl__int__0;
#line 143
___nl__bool__4 = ___nl__int__5;
#line 143
if(___nl__bool__4){ goto label_14;}
#line 143
___nl__int__7 = 9;
#line 143
c_rt_lib0move(&___nl__im__6, string0chr(___nl__int__7));
#line 143
//clear ___nl__int__7;
#line 143
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 143
c_rt_lib0clear(&___nl__im__6);
#line 143
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 143
goto label_3;
#line 143
label_14:
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
//clear ___nl__int__5;
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
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 149
___nl__bool__5 = ___nl__int__6;
#line 149
if(___nl__bool__5){ goto label_38;}
#line 150
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 150
c_rt_lib0move(&___nl__im__7, pretty_printer_priv0print_hash_elem(___nl__im__8));
#line 150
c_rt_lib0clear(&___nl__im__8);
#line 150
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 150
c_rt_lib0clear(&___nl__im__7);
#line 151
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 151
___nl__int__12 = 1;
#line 151
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 151
//clear ___nl__int__11;
#line 151
//clear ___nl__int__12;
#line 151
___nl__int__13 = ___nl__int__3 != ___nl__int__10;
#line 151
___nl__bool__9 = ___nl__int__13;
#line 151
//clear ___nl__int__10;
#line 151
//clear ___nl__int__13;
#line 151
___nl__bool__9 = !___nl__bool__9;
#line 151
if(___nl__bool__9){ goto label_34;}
#line 151
c_rt_lib0move(&___nl__im__16,___get_global_string_const(312));
#line 151
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
c_rt_lib0move(&___nl__im__17, wprinter0get_sep());
#line 151
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__17));
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__14));
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
goto label_34;
#line 151
label_34:
;
#line 151
//clear ___nl__bool__9;
#line 152
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 152
goto label_4;
#line 152
label_38:
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
//clear ___nl__int__6;
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 157
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(218)));
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(230));
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
if(___nl__bool__1){ goto label_11;}
#line 157
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 157
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(218)));
#line 157
c_rt_lib0clear(&___nl__im__5);
#line 157
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(229));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 158
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(218)));
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 158
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(218)));
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(1004)));
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
c_rt_lib0move(&___nl__im__13,___get_global_string_const(608));
#line 159
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 159
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0move(&___nl__im__14,___get_global_string_const(608));
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
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 160
c_rt_lib0move(&___nl__im__18,___get_global_string_const(325));
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
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 163
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_val(___nl__im__23));
#line 163
c_rt_lib0clear(&___nl__im__23);
#line 164
c_rt_lib0move(&___nl__im__24, wprinter0get_sep());
#line 165
c_rt_lib0move(&___nl__im__26,___get_global_string_const(306));
#line 165
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 165
c_rt_lib0clear(&___nl__im__26);
#line 166
c_rt_lib0move(&___nl__im__27, wprinter0get_sep());
#line 167
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 172
c_rt_lib0move(&___nl__im__4,___get_global_string_const(179));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 172
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(218)));
#line 172
c_rt_lib0clear(&___nl__im__6);
#line 172
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(982));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(572));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 174
c_rt_lib0move(&___nl__im__11,___get_global_string_const(180));
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
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 174
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(218)));
#line 174
c_rt_lib0clear(&___nl__im__13);
#line 174
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(982));
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
c_rt_lib0move(&___nl__im__15,___get_global_string_const(573));
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
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 177
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(218)));
#line 177
c_rt_lib0clear(&___nl__im__18);
#line 177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(229));
#line 177
c_rt_lib0clear(&___nl__im__17);
#line 177
if(___nl__bool__16){ goto label_63;}
#line 177
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 177
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(218)));
#line 177
c_rt_lib0clear(&___nl__im__20);
#line 177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(230));
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
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 178
c_rt_lib0move(&___nl__im__25,___get_global_string_const(522));
#line 178
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 178
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 178
c_rt_lib0clear(&___nl__im__25);
#line 178
c_rt_lib0clear(&___nl__im__26);
#line 178
c_rt_lib0move(&___nl__im__27,___get_global_string_const(455));
#line 178
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 178
c_rt_lib0clear(&___nl__im__24);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
c_rt_lib0move(&___nl__im__28,___get_global_string_const(320));
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
c_rt_lib0move(&___nl__im__32,___get_global_string_const(522));
#line 181
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
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
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 183
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(218)));
#line 183
c_rt_lib0clear(&___nl__im__36);
#line 183
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(982));
#line 183
c_rt_lib0clear(&___nl__im__35);
#line 183
___nl__bool__34 = !___nl__bool__34;
#line 183
___nl__bool__34 = !___nl__bool__34;
#line 183
if(___nl__bool__34){ goto label_122;}
#line 182
c_rt_lib0move(&___nl__im__39,___get_global_string_const(455));
#line 182
c_rt_lib0move(&___nl__im__38, wprinter0build_sim(___nl__im__39));
#line 182
c_rt_lib0clear(&___nl__im__39);
#line 182
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(502)));
#line 182
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_val(___nl__im__41));
#line 182
c_rt_lib0clear(&___nl__im__41);
#line 182
c_rt_lib0move(&___nl__im__43,___get_global_string_const(320));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(522));
#line 188
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 189
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(218));
#line 189
if(___nl__bool__7){ goto label_17;}
#line 191
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(71));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(218)));
#line 189
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 190
c_rt_lib0move(&___nl__im__13,___get_global_string_const(455));
#line 190
c_rt_lib0move(&___nl__im__12, wprinter0build_sim(___nl__im__13));
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(491)));
#line 190
c_rt_lib0move(&___nl__im__14, pretty_printer_priv0print_var_decl(___nl__im__15));
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0move(&___nl__im__17,___get_global_string_const(320));
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
label_4:
;
#line 198
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 198
___nl__bool__5 = ___nl__int__6;
#line 198
if(___nl__bool__5){ goto label_38;}
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
if(___nl__bool__9){ goto label_34;}
#line 200
c_rt_lib0move(&___nl__im__16,___get_global_string_const(312));
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
goto label_34;
#line 200
label_34:
;
#line 200
//clear ___nl__bool__9;
#line 201
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 201
goto label_4;
#line 201
label_38:
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(266)));
#line 207
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(39));
#line 207
if(___nl__bool__3){ goto label_9;}
#line 209
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(71));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
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
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 217
___nl__bool__6 = ___nl__int__7;
#line 217
if(___nl__bool__6){ goto label_33;}
#line 217
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 217
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 218
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(223)));
#line 218
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(218)));
#line 218
c_rt_lib0clear(&___nl__im__11);
#line 218
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(229));
#line 218
c_rt_lib0clear(&___nl__im__10);
#line 218
if(___nl__bool__9){ goto label_21;}
#line 218
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(223)));
#line 218
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(218)));
#line 218
c_rt_lib0clear(&___nl__im__13);
#line 218
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(230));
#line 218
c_rt_lib0clear(&___nl__im__12);
#line 218
label_21:
;
#line 218
___nl__bool__9 = !___nl__bool__9;
#line 218
if(___nl__bool__9){ goto label_28;}
#line 218
___nl__int__14 = 1;
#line 218
___nl__int__1 = ___nl__int__1 + ___nl__int__14;
#line 218
//clear ___nl__int__14;
#line 218
goto label_28;
#line 218
label_28:
;
#line 218
//clear ___nl__bool__9;
#line 218
c_rt_lib0clear(&___nl__im__2);
#line 219
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 219
goto label_4;
#line 219
label_33:
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
label_3:
;
#line 228
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 228
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(229));
#line 228
c_rt_lib0clear(&___nl__im__7);
#line 228
___nl__bool__6 = !___nl__bool__6;
#line 228
if(___nl__bool__6){ goto label_41;}
#line 229
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 229
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 229
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(229)));
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 229
c_rt_lib0clear(&___nl__im__10);
#line 230
c_rt_lib0move(&___nl__im__11,___get_global_string_const(314));
#line 230
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 230
c_rt_lib0clear(&___nl__im__11);
#line 231
c_rt_lib0move(&___nl__im__12,___get_global_string_const(315));
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
if(___nl__bool__13){ goto label_35;}
#line 233
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_val(___nl__im__8));
#line 234
//clear ___nl__bool__6;
#line 234
c_rt_lib0clear(&___nl__im__8);
#line 234
//clear ___nl__bool__13;
#line 234
goto label_78;
#line 235
goto label_35;
#line 235
label_35:
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
goto label_73;
#line 237
label_41:
;
#line 237
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 237
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(230));
#line 237
c_rt_lib0clear(&___nl__im__18);
#line 237
___nl__bool__6 = !___nl__bool__6;
#line 237
if(___nl__bool__6){ goto label_64;}
#line 238
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 238
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 238
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(230)));
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 238
c_rt_lib0clear(&___nl__im__21);
#line 239
c_rt_lib0move(&___nl__im__22,___get_global_string_const(304));
#line 239
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__22));
#line 239
c_rt_lib0clear(&___nl__im__22);
#line 240
c_rt_lib0move(&___nl__im__23,___get_global_string_const(305));
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__23, ___nl__im__5));
#line 240
c_rt_lib0clear(&___nl__im__23);
#line 241
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0join_print_hash_elem(___nl__im__19));
#line 242
//clear ___nl__bool__6;
#line 242
c_rt_lib0clear(&___nl__im__8);
#line 242
c_rt_lib0clear(&___nl__im__19);
#line 242
goto label_78;
#line 243
goto label_73;
#line 243
label_64:
;
#line 244
c_rt_lib0move(&___nl__im__24, pretty_printer_priv0print_val(___nl__im__0));
#line 244
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(1, ___nl__im__24));
#line 244
c_rt_lib0clear(&___nl__im__24);
#line 245
//clear ___nl__bool__6;
#line 245
c_rt_lib0clear(&___nl__im__8);
#line 245
c_rt_lib0clear(&___nl__im__19);
#line 245
goto label_78;
#line 246
goto label_73;
#line 246
label_73:
;
#line 246
//clear ___nl__bool__6;
#line 246
c_rt_lib0clear(&___nl__im__8);
#line 246
c_rt_lib0clear(&___nl__im__19);
#line 227
goto label_3;
#line 227
label_78:
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
return NULL;

}

ImmT  pretty_printer_priv0print_st(wprinter0state_t0type* ___ref___im__0,nast0cmd_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 252
c_rt_lib0move(&___nl__im__3,___get_global_string_const(467));
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(608));
#line 261
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1189));
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
label_4:
;
#line 266
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 266
___nl__bool__5 = ___nl__int__6;
#line 266
if(___nl__bool__5){ goto label_38;}
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
if(___nl__bool__9){ goto label_34;}
#line 268
c_rt_lib0move(&___nl__im__16,___get_global_string_const(312));
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
goto label_34;
#line 268
label_34:
;
#line 268
//clear ___nl__bool__9;
#line 269
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 269
goto label_4;
#line 269
label_38:
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
bool  ___nl__bool__40 = false;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
bool  ___nl__bool__53 = false;
bool  ___nl__bool__54 = false;
#line 274
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 274
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(962));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 275
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 275
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(962)));
#line 275
c_rt_lib0clear(&___nl__im__5);
#line 275
c_rt_lib0clear(&___nl__im__6);
#line 276
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(265)));
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
if(___nl__bool__8){ goto label_41;}
#line 276
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(150)));
#line 276
c_rt_lib0move(&___nl__im__14,___get_global_string_const(926));
#line 276
___nl__bool__7 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 276
c_rt_lib0clear(&___nl__im__13);
#line 276
c_rt_lib0clear(&___nl__im__14);
#line 276
if(___nl__bool__7){ goto label_41;}
#line 276
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(150)));
#line 276
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1190));
#line 276
___nl__bool__7 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 276
c_rt_lib0clear(&___nl__im__15);
#line 276
c_rt_lib0clear(&___nl__im__16);
#line 276
label_41:
;
#line 276
//clear ___nl__bool__8;
#line 276
___nl__bool__7 = !___nl__bool__7;
#line 276
if(___nl__bool__7){ goto label_144;}
#line 277
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(166)));
#line 277
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1026));
#line 277
___nl__bool__17 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 277
c_rt_lib0clear(&___nl__im__19);
#line 277
c_rt_lib0clear(&___nl__im__20);
#line 277
if(___nl__bool__17){ goto label_56;}
#line 277
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(166)));
#line 277
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1025));
#line 277
___nl__bool__17 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 277
c_rt_lib0clear(&___nl__im__21);
#line 277
c_rt_lib0clear(&___nl__im__22);
#line 277
label_56:
;
#line 277
___nl__bool__18 = !___nl__bool__17;
#line 277
if(___nl__bool__18){ goto label_70;}
#line 277
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(265)));
#line 277
___nl__int__27 = 1;
#line 277
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__26, ___nl__int__27));
#line 277
c_rt_lib0clear(&___nl__im__26);
#line 277
//clear ___nl__int__27;
#line 277
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(223)));
#line 277
c_rt_lib0clear(&___nl__im__25);
#line 277
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(218)));
#line 277
c_rt_lib0clear(&___nl__im__24);
#line 277
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(404));
#line 277
c_rt_lib0clear(&___nl__im__23);
#line 277
label_70:
;
#line 277
//clear ___nl__bool__18;
#line 277
___nl__bool__17 = !___nl__bool__17;
#line 277
if(___nl__bool__17){ goto label_140;}
#line 278
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(265)));
#line 278
___nl__int__33 = 1;
#line 278
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__32, ___nl__int__33));
#line 278
c_rt_lib0clear(&___nl__im__32);
#line 278
//clear ___nl__int__33;
#line 278
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(223)));
#line 278
c_rt_lib0clear(&___nl__im__31);
#line 278
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(218)));
#line 278
c_rt_lib0clear(&___nl__im__30);
#line 278
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(265)));
#line 278
___nl__int__38 = 1;
#line 278
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__37, ___nl__int__38));
#line 278
c_rt_lib0clear(&___nl__im__37);
#line 278
//clear ___nl__int__38;
#line 278
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(223)));
#line 278
c_rt_lib0clear(&___nl__im__36);
#line 278
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(218)));
#line 278
c_rt_lib0clear(&___nl__im__35);
#line 278
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__34, ___get_global_string_const(404)));
#line 278
c_rt_lib0clear(&___nl__im__29);
#line 278
c_rt_lib0clear(&___nl__im__34);
#line 279
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(127)));
#line 279
___nl__int__41 = c_rt_lib0array_len(___nl__im__42);
#line 279
c_rt_lib0clear(&___nl__im__42);
#line 279
___nl__int__43 = 1;
#line 279
___nl__int__44 = ___nl__int__41 == ___nl__int__43;
#line 279
___nl__bool__39 = ___nl__int__44;
#line 279
//clear ___nl__int__41;
#line 279
//clear ___nl__int__43;
#line 279
//clear ___nl__int__44;
#line 279
___nl__bool__40 = !___nl__bool__39;
#line 279
if(___nl__bool__40){ goto label_123;}
#line 279
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(127)));
#line 279
___nl__int__48 = 0;
#line 279
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__47, ___nl__int__48));
#line 279
c_rt_lib0clear(&___nl__im__47);
#line 279
//clear ___nl__int__48;
#line 279
c_rt_lib0move(&___nl__im__49,___get_global_string_const(467));
#line 279
c_rt_lib0move(&___nl__im__45, string0index2(___nl__im__46, ___nl__im__49));
#line 279
c_rt_lib0clear(&___nl__im__46);
#line 279
c_rt_lib0clear(&___nl__im__49);
#line 279
___nl__int__50 = 0;
#line 279
___nl__int__51 = getIntFromImm(___nl__im__45);
#line 279
___nl__int__52 = ___nl__int__51 < ___nl__int__50;
#line 279
___nl__bool__39 = ___nl__int__52;
#line 279
c_rt_lib0clear(&___nl__im__45);
#line 279
//clear ___nl__int__50;
#line 279
//clear ___nl__int__51;
#line 279
//clear ___nl__int__52;
#line 279
label_123:
;
#line 279
//clear ___nl__bool__40;
#line 279
___nl__bool__39 = !___nl__bool__39;
#line 279
if(___nl__bool__39){ goto label_136;}
#line 280
___nl__bool__53 = true;
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
//clear ___nl__bool__7;
#line 280
//clear ___nl__bool__17;
#line 280
c_rt_lib0clear(&___nl__im__28);
#line 280
//clear ___nl__bool__39;
#line 280
return ___nl__bool__53;
#line 281
goto label_136;
#line 281
label_136:
;
#line 281
//clear ___nl__bool__39;
#line 281
//clear ___nl__bool__53;
#line 282
goto label_140;
#line 282
label_140:
;
#line 282
//clear ___nl__bool__17;
#line 282
c_rt_lib0clear(&___nl__im__28);
#line 283
goto label_144;
#line 283
label_144:
;
#line 283
//clear ___nl__bool__7;
#line 284
___nl__bool__54 = false;
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
return ___nl__bool__54;
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
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
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
bool  ___nl__bool__83 = false;
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
bool  ___nl__bool__112 = false;
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
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
bool  ___nl__bool__200 = false;
INT  ___nl__int__201 = 0;
ImmT  ___nl__im__202 = NULL;
INT  ___nl__int__203 = 0;
INT  ___nl__int__204 = 0;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
INT  ___nl__int__208 = 0;
bool  ___nl__bool__209 = false;
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
INT  ___nl__int__220 = 0;
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
INT  ___nl__int__235 = 0;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
INT  ___nl__int__240 = 0;
INT  ___nl__int__241 = 0;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
bool  ___nl__bool__248 = false;
bool  ___nl__bool__249 = false;
INT  ___nl__int__250 = 0;
ImmT  ___nl__im__251 = NULL;
INT  ___nl__int__252 = 0;
ImmT  ___nl__im__253 = NULL;
INT  ___nl__int__254 = 0;
INT  ___nl__int__255 = 0;
ImmT  ___nl__im__256 = NULL;
INT  ___nl__int__257 = 0;
INT  ___nl__int__258 = 0;
bool  ___nl__bool__259 = false;
INT  ___nl__int__260 = 0;
ImmT  ___nl__im__261 = NULL;
INT  ___nl__int__262 = 0;
INT  ___nl__int__263 = 0;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
INT  ___nl__int__268 = 0;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__im__271 = NULL;
INT  ___nl__int__272 = 0;
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
#line 288
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 288
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(221));
#line 288
if(___nl__bool__2){ goto label_36;}
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(404));
#line 290
if(___nl__bool__2){ goto label_52;}
#line 300
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1004));
#line 300
if(___nl__bool__2){ goto label_137;}
#line 303
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(554));
#line 303
if(___nl__bool__2){ goto label_181;}
#line 305
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(502));
#line 305
if(___nl__bool__2){ goto label_214;}
#line 307
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1001));
#line 307
if(___nl__bool__2){ goto label_250;}
#line 309
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1003));
#line 309
if(___nl__bool__2){ goto label_301;}
#line 317
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(234));
#line 317
if(___nl__bool__2){ goto label_377;}
#line 368
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1008));
#line 368
if(___nl__bool__2){ goto label_864;}
#line 370
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1007));
#line 370
if(___nl__bool__2){ goto label_920;}
#line 372
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1005));
#line 372
if(___nl__bool__2){ goto label_979;}
#line 374
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(962));
#line 374
if(___nl__bool__2){ goto label_1041;}
#line 398
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(982));
#line 398
if(___nl__bool__2){ goto label_1445;}
#line 400
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(229));
#line 400
if(___nl__bool__2){ goto label_1511;}
#line 402
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(230));
#line 402
if(___nl__bool__2){ goto label_1578;}
#line 404
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1006));
#line 404
if(___nl__bool__2){ goto label_1650;}
#line 404
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 404
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 404
nl_die_arg(___nl__im__3);
#line 288
label_36:
;
#line 288
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(221)));
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
goto label_1725;
#line 290
label_52:
;
#line 290
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(404)));
#line 290
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 291
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 292
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(127)));
#line 292
___nl__int__14 = 0;
#line 292
___nl__int__15 = 1;
#line 292
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 292
label_60:
;
#line 292
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 292
___nl__bool__17 = ___nl__int__18;
#line 292
if(___nl__bool__17){ goto label_76;}
#line 292
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 292
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 293
c_rt_lib0move(&___nl__im__21,___get_global_string_const(608));
#line 293
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0string_to_nl(___nl__im__13));
#line 293
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 293
c_rt_lib0clear(&___nl__im__21);
#line 293
c_rt_lib0clear(&___nl__im__22);
#line 293
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__20));
#line 293
c_rt_lib0clear(&___nl__im__20);
#line 293
c_rt_lib0clear(&___nl__im__13);
#line 294
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 294
goto label_60;
#line 294
label_76:
;
#line 295
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1041)));
#line 295
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(1040));
#line 295
if(___nl__bool__24){ goto label_85;}
#line 296
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(1039));
#line 296
if(___nl__bool__24){ goto label_87;}
#line 296
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 296
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__23));
#line 296
nl_die_arg(___nl__im__25);
#line 295
label_85:
;
#line 296
goto label_110;
#line 296
label_87:
;
#line 297
___nl__int__29 = c_rt_lib0array_len(___nl__im__11);
#line 297
___nl__int__30 = 1;
#line 297
___nl__int__28 = ___nl__int__29 - ___nl__int__30;
#line 297
//clear ___nl__int__29;
#line 297
//clear ___nl__int__30;
#line 297
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__11, ___nl__int__28));
#line 297
//clear ___nl__int__28;
#line 297
c_rt_lib0move(&___nl__im__31,___get_global_string_const(608));
#line 297
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 297
c_rt_lib0clear(&___nl__im__27);
#line 297
c_rt_lib0clear(&___nl__im__31);
#line 297
___nl__int__34 = c_rt_lib0array_len(___nl__im__11);
#line 297
___nl__int__35 = 1;
#line 297
___nl__int__33 = ___nl__int__34 - ___nl__int__35;
#line 297
//clear ___nl__int__34;
#line 297
//clear ___nl__int__35;
#line 297
c_rt_lib0copy(&___nl__im__32, ___nl__im__26);
#line 297
c_rt_lib0array_set(&___nl__im__11, ___nl__int__33, ___nl__im__32);
#line 297
c_rt_lib0clear(&___nl__im__26);
#line 297
c_rt_lib0clear(&___nl__im__32);
#line 297
//clear ___nl__int__33;
#line 298
goto label_110;
#line 298
label_110:
;
#line 299
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1041)));
#line 299
c_rt_lib0move(&___nl__im__36, wprinter0build_str_arr(___nl__im__11, ___nl__im__37));
#line 299
c_rt_lib0clear(&___nl__im__37);
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
//clear ___nl__int__18;
#line 299
c_rt_lib0clear(&___nl__im__19);
#line 299
c_rt_lib0clear(&___nl__im__23);
#line 299
//clear ___nl__bool__24;
#line 299
c_rt_lib0clear(&___nl__im__25);
#line 299
return ___nl__im__36;
#line 300
goto label_1725;
#line 300
label_137:
;
#line 300
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1004)));
#line 300
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 301
___nl__bool__40 = pretty_printer_priv0is_proper_hash_key(___nl__im__38);
#line 301
___nl__bool__40 = !___nl__bool__40;
#line 301
___nl__bool__40 = !___nl__bool__40;
#line 301
if(___nl__bool__40){ goto label_152;}
#line 301
c_rt_lib0move(&___nl__im__42,___get_global_string_const(608));
#line 301
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__38));
#line 301
c_rt_lib0clear(&___nl__im__42);
#line 301
c_rt_lib0move(&___nl__im__43,___get_global_string_const(608));
#line 301
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__41, ___nl__im__43));
#line 301
c_rt_lib0clear(&___nl__im__41);
#line 301
c_rt_lib0clear(&___nl__im__43);
#line 301
goto label_152;
#line 301
label_152:
;
#line 301
//clear ___nl__bool__40;
#line 302
c_rt_lib0move(&___nl__im__44, wprinter0build_sim(___nl__im__38));
#line 302
c_rt_lib0clear(&___nl__im__0);
#line 302
c_rt_lib0clear(&___nl__im__1);
#line 302
//clear ___nl__bool__2;
#line 302
c_rt_lib0clear(&___nl__im__3);
#line 302
//clear ___nl__int__4;
#line 302
c_rt_lib0clear(&___nl__im__5);
#line 302
c_rt_lib0clear(&___nl__im__6);
#line 302
c_rt_lib0clear(&___nl__im__9);
#line 302
c_rt_lib0clear(&___nl__im__10);
#line 302
c_rt_lib0clear(&___nl__im__11);
#line 302
c_rt_lib0clear(&___nl__im__12);
#line 302
c_rt_lib0clear(&___nl__im__13);
#line 302
//clear ___nl__int__14;
#line 302
//clear ___nl__int__15;
#line 302
//clear ___nl__int__16;
#line 302
//clear ___nl__bool__17;
#line 302
//clear ___nl__int__18;
#line 302
c_rt_lib0clear(&___nl__im__19);
#line 302
c_rt_lib0clear(&___nl__im__23);
#line 302
//clear ___nl__bool__24;
#line 302
c_rt_lib0clear(&___nl__im__25);
#line 302
c_rt_lib0clear(&___nl__im__36);
#line 302
c_rt_lib0clear(&___nl__im__38);
#line 302
c_rt_lib0clear(&___nl__im__39);
#line 302
return ___nl__im__44;
#line 303
goto label_1725;
#line 303
label_181:
;
#line 303
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(554)));
#line 303
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 304
c_rt_lib0move(&___nl__im__47, pretty_printer_priv0print_variant(___nl__im__45));
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
//clear ___nl__int__18;
#line 304
c_rt_lib0clear(&___nl__im__19);
#line 304
c_rt_lib0clear(&___nl__im__23);
#line 304
//clear ___nl__bool__24;
#line 304
c_rt_lib0clear(&___nl__im__25);
#line 304
c_rt_lib0clear(&___nl__im__36);
#line 304
c_rt_lib0clear(&___nl__im__38);
#line 304
c_rt_lib0clear(&___nl__im__39);
#line 304
c_rt_lib0clear(&___nl__im__44);
#line 304
c_rt_lib0clear(&___nl__im__45);
#line 304
c_rt_lib0clear(&___nl__im__46);
#line 304
return ___nl__im__47;
#line 305
goto label_1725;
#line 305
label_214:
;
#line 305
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(502)));
#line 305
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 306
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__48));
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
//clear ___nl__int__18;
#line 306
c_rt_lib0clear(&___nl__im__19);
#line 306
c_rt_lib0clear(&___nl__im__23);
#line 306
//clear ___nl__bool__24;
#line 306
c_rt_lib0clear(&___nl__im__25);
#line 306
c_rt_lib0clear(&___nl__im__36);
#line 306
c_rt_lib0clear(&___nl__im__38);
#line 306
c_rt_lib0clear(&___nl__im__39);
#line 306
c_rt_lib0clear(&___nl__im__44);
#line 306
c_rt_lib0clear(&___nl__im__45);
#line 306
c_rt_lib0clear(&___nl__im__46);
#line 306
c_rt_lib0clear(&___nl__im__47);
#line 306
c_rt_lib0clear(&___nl__im__48);
#line 306
c_rt_lib0clear(&___nl__im__49);
#line 306
return ___nl__im__50;
#line 307
goto label_1725;
#line 307
label_250:
;
#line 307
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1001)));
#line 307
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 308
c_rt_lib0move(&___nl__im__56,___get_global_string_const(455));
#line 308
c_rt_lib0move(&___nl__im__55, wprinter0build_sim(___nl__im__56));
#line 308
c_rt_lib0clear(&___nl__im__56);
#line 308
c_rt_lib0move(&___nl__im__57, pretty_printer_priv0print_val(___nl__im__51));
#line 308
c_rt_lib0move(&___nl__im__59,___get_global_string_const(320));
#line 308
c_rt_lib0move(&___nl__im__58, wprinter0build_sim(___nl__im__59));
#line 308
c_rt_lib0clear(&___nl__im__59);
#line 308
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(3, ___nl__im__55, ___nl__im__57, ___nl__im__58));
#line 308
c_rt_lib0clear(&___nl__im__55);
#line 308
c_rt_lib0clear(&___nl__im__57);
#line 308
c_rt_lib0clear(&___nl__im__58);
#line 308
c_rt_lib0move(&___nl__im__53, wprinter0build_pretty_a(___nl__im__54));
#line 308
c_rt_lib0clear(&___nl__im__54);
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
//clear ___nl__int__18;
#line 308
c_rt_lib0clear(&___nl__im__19);
#line 308
c_rt_lib0clear(&___nl__im__23);
#line 308
//clear ___nl__bool__24;
#line 308
c_rt_lib0clear(&___nl__im__25);
#line 308
c_rt_lib0clear(&___nl__im__36);
#line 308
c_rt_lib0clear(&___nl__im__38);
#line 308
c_rt_lib0clear(&___nl__im__39);
#line 308
c_rt_lib0clear(&___nl__im__44);
#line 308
c_rt_lib0clear(&___nl__im__45);
#line 308
c_rt_lib0clear(&___nl__im__46);
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
goto label_1725;
#line 309
label_301:
;
#line 309
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1003)));
#line 309
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 311
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(1009)));
#line 311
c_rt_lib0move(&___nl__im__64, pretty_printer_priv0print_val(___nl__im__65));
#line 311
c_rt_lib0clear(&___nl__im__65);
#line 312
c_rt_lib0move(&___nl__im__66, wprinter0get_sep());
#line 313
c_rt_lib0move(&___nl__im__70,___get_global_string_const(1191));
#line 313
c_rt_lib0move(&___nl__im__69, wprinter0build_sim(___nl__im__70));
#line 313
c_rt_lib0clear(&___nl__im__70);
#line 313
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(1010)));
#line 313
c_rt_lib0move(&___nl__im__71, pretty_printer_priv0print_val(___nl__im__72));
#line 313
c_rt_lib0clear(&___nl__im__72);
#line 313
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(2, ___nl__im__69, ___nl__im__71));
#line 313
c_rt_lib0clear(&___nl__im__69);
#line 313
c_rt_lib0clear(&___nl__im__71);
#line 313
c_rt_lib0move(&___nl__im__67, wprinter0build_pretty_op_l(___nl__im__68));
#line 313
c_rt_lib0clear(&___nl__im__68);
#line 314
c_rt_lib0move(&___nl__im__73, wprinter0get_sep());
#line 315
c_rt_lib0move(&___nl__im__77,___get_global_string_const(823));
#line 315
c_rt_lib0move(&___nl__im__76, wprinter0build_sim(___nl__im__77));
#line 315
c_rt_lib0clear(&___nl__im__77);
#line 315
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(1011)));
#line 315
c_rt_lib0move(&___nl__im__78, pretty_printer_priv0print_val(___nl__im__79));
#line 315
c_rt_lib0clear(&___nl__im__79);
#line 315
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(2, ___nl__im__76, ___nl__im__78));
#line 315
c_rt_lib0clear(&___nl__im__76);
#line 315
c_rt_lib0clear(&___nl__im__78);
#line 315
c_rt_lib0move(&___nl__im__74, wprinter0build_pretty_op_l(___nl__im__75));
#line 315
c_rt_lib0clear(&___nl__im__75);
#line 315
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(5, ___nl__im__64, ___nl__im__66, ___nl__im__67, ___nl__im__73, ___nl__im__74));
#line 315
c_rt_lib0clear(&___nl__im__64);
#line 315
c_rt_lib0clear(&___nl__im__66);
#line 315
c_rt_lib0clear(&___nl__im__67);
#line 315
c_rt_lib0clear(&___nl__im__73);
#line 315
c_rt_lib0clear(&___nl__im__74);
#line 315
c_rt_lib0move(&___nl__im__62, wprinter0build_pretty_a(___nl__im__63));
#line 315
c_rt_lib0clear(&___nl__im__63);
#line 315
c_rt_lib0clear(&___nl__im__0);
#line 315
c_rt_lib0clear(&___nl__im__1);
#line 315
//clear ___nl__bool__2;
#line 315
c_rt_lib0clear(&___nl__im__3);
#line 315
//clear ___nl__int__4;
#line 315
c_rt_lib0clear(&___nl__im__5);
#line 315
c_rt_lib0clear(&___nl__im__6);
#line 315
c_rt_lib0clear(&___nl__im__9);
#line 315
c_rt_lib0clear(&___nl__im__10);
#line 315
c_rt_lib0clear(&___nl__im__11);
#line 315
c_rt_lib0clear(&___nl__im__12);
#line 315
c_rt_lib0clear(&___nl__im__13);
#line 315
//clear ___nl__int__14;
#line 315
//clear ___nl__int__15;
#line 315
//clear ___nl__int__16;
#line 315
//clear ___nl__bool__17;
#line 315
//clear ___nl__int__18;
#line 315
c_rt_lib0clear(&___nl__im__19);
#line 315
c_rt_lib0clear(&___nl__im__23);
#line 315
//clear ___nl__bool__24;
#line 315
c_rt_lib0clear(&___nl__im__25);
#line 315
c_rt_lib0clear(&___nl__im__36);
#line 315
c_rt_lib0clear(&___nl__im__38);
#line 315
c_rt_lib0clear(&___nl__im__39);
#line 315
c_rt_lib0clear(&___nl__im__44);
#line 315
c_rt_lib0clear(&___nl__im__45);
#line 315
c_rt_lib0clear(&___nl__im__46);
#line 315
c_rt_lib0clear(&___nl__im__47);
#line 315
c_rt_lib0clear(&___nl__im__48);
#line 315
c_rt_lib0clear(&___nl__im__49);
#line 315
c_rt_lib0clear(&___nl__im__50);
#line 315
c_rt_lib0clear(&___nl__im__51);
#line 315
c_rt_lib0clear(&___nl__im__52);
#line 315
c_rt_lib0clear(&___nl__im__53);
#line 315
c_rt_lib0clear(&___nl__im__60);
#line 315
c_rt_lib0clear(&___nl__im__61);
#line 315
return ___nl__im__62;
#line 317
goto label_1725;
#line 317
label_377:
;
#line 317
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(234)));
#line 317
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 318
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(552)));
#line 319
c_rt_lib0move(&___nl__im__84,___get_global_string_const(998));
#line 319
___nl__bool__83 = c_rt_lib0eq(___nl__im__82, ___nl__im__84);
#line 319
c_rt_lib0clear(&___nl__im__84);
#line 319
___nl__bool__83 = !___nl__bool__83;
#line 319
if(___nl__bool__83){ goto label_452;}
#line 321
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 321
c_rt_lib0move(&___nl__im__89, pretty_printer_priv0print_val(___nl__im__90));
#line 321
c_rt_lib0clear(&___nl__im__90);
#line 321
c_rt_lib0move(&___nl__im__92,___get_global_string_const(314));
#line 321
c_rt_lib0move(&___nl__im__91, wprinter0build_sim(___nl__im__92));
#line 321
c_rt_lib0clear(&___nl__im__92);
#line 321
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_mk(2, ___nl__im__89, ___nl__im__91));
#line 321
c_rt_lib0clear(&___nl__im__89);
#line 321
c_rt_lib0clear(&___nl__im__91);
#line 321
c_rt_lib0move(&___nl__im__87, wprinter0build_pretty_l(___nl__im__88));
#line 321
c_rt_lib0clear(&___nl__im__88);
#line 322
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 322
c_rt_lib0move(&___nl__im__93, pretty_printer_priv0print_val(___nl__im__94));
#line 322
c_rt_lib0clear(&___nl__im__94);
#line 323
c_rt_lib0move(&___nl__im__96,___get_global_string_const(315));
#line 323
c_rt_lib0move(&___nl__im__95, wprinter0build_sim(___nl__im__96));
#line 323
c_rt_lib0clear(&___nl__im__96);
#line 323
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(3, ___nl__im__87, ___nl__im__93, ___nl__im__95));
#line 323
c_rt_lib0clear(&___nl__im__87);
#line 323
c_rt_lib0clear(&___nl__im__93);
#line 323
c_rt_lib0clear(&___nl__im__95);
#line 323
c_rt_lib0move(&___nl__im__85, wprinter0build_pretty_a(___nl__im__86));
#line 323
c_rt_lib0clear(&___nl__im__86);
#line 323
c_rt_lib0clear(&___nl__im__0);
#line 323
c_rt_lib0clear(&___nl__im__1);
#line 323
//clear ___nl__bool__2;
#line 323
c_rt_lib0clear(&___nl__im__3);
#line 323
//clear ___nl__int__4;
#line 323
c_rt_lib0clear(&___nl__im__5);
#line 323
c_rt_lib0clear(&___nl__im__6);
#line 323
c_rt_lib0clear(&___nl__im__9);
#line 323
c_rt_lib0clear(&___nl__im__10);
#line 323
c_rt_lib0clear(&___nl__im__11);
#line 323
c_rt_lib0clear(&___nl__im__12);
#line 323
c_rt_lib0clear(&___nl__im__13);
#line 323
//clear ___nl__int__14;
#line 323
//clear ___nl__int__15;
#line 323
//clear ___nl__int__16;
#line 323
//clear ___nl__bool__17;
#line 323
//clear ___nl__int__18;
#line 323
c_rt_lib0clear(&___nl__im__19);
#line 323
c_rt_lib0clear(&___nl__im__23);
#line 323
//clear ___nl__bool__24;
#line 323
c_rt_lib0clear(&___nl__im__25);
#line 323
c_rt_lib0clear(&___nl__im__36);
#line 323
c_rt_lib0clear(&___nl__im__38);
#line 323
c_rt_lib0clear(&___nl__im__39);
#line 323
c_rt_lib0clear(&___nl__im__44);
#line 323
c_rt_lib0clear(&___nl__im__45);
#line 323
c_rt_lib0clear(&___nl__im__46);
#line 323
c_rt_lib0clear(&___nl__im__47);
#line 323
c_rt_lib0clear(&___nl__im__48);
#line 323
c_rt_lib0clear(&___nl__im__49);
#line 323
c_rt_lib0clear(&___nl__im__50);
#line 323
c_rt_lib0clear(&___nl__im__51);
#line 323
c_rt_lib0clear(&___nl__im__52);
#line 323
c_rt_lib0clear(&___nl__im__53);
#line 323
c_rt_lib0clear(&___nl__im__60);
#line 323
c_rt_lib0clear(&___nl__im__61);
#line 323
c_rt_lib0clear(&___nl__im__62);
#line 323
c_rt_lib0clear(&___nl__im__80);
#line 323
c_rt_lib0clear(&___nl__im__81);
#line 323
c_rt_lib0clear(&___nl__im__82);
#line 323
//clear ___nl__bool__83;
#line 323
return ___nl__im__85;
#line 325
goto label_854;
#line 325
label_452:
;
#line 325
c_rt_lib0move(&___nl__im__97,___get_global_string_const(999));
#line 325
___nl__bool__83 = c_rt_lib0eq(___nl__im__82, ___nl__im__97);
#line 325
c_rt_lib0clear(&___nl__im__97);
#line 325
___nl__bool__83 = !___nl__bool__83;
#line 325
if(___nl__bool__83){ goto label_525;}
#line 327
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 327
c_rt_lib0move(&___nl__im__102, pretty_printer_priv0print_val(___nl__im__103));
#line 327
c_rt_lib0clear(&___nl__im__103);
#line 327
c_rt_lib0move(&___nl__im__105,___get_global_string_const(304));
#line 327
c_rt_lib0move(&___nl__im__104, wprinter0build_sim(___nl__im__105));
#line 327
c_rt_lib0clear(&___nl__im__105);
#line 327
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_mk(2, ___nl__im__102, ___nl__im__104));
#line 327
c_rt_lib0clear(&___nl__im__102);
#line 327
c_rt_lib0clear(&___nl__im__104);
#line 327
c_rt_lib0move(&___nl__im__100, wprinter0build_pretty_l(___nl__im__101));
#line 327
c_rt_lib0clear(&___nl__im__101);
#line 328
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 328
c_rt_lib0move(&___nl__im__106, pretty_printer_priv0print_val(___nl__im__107));
#line 328
c_rt_lib0clear(&___nl__im__107);
#line 329
c_rt_lib0move(&___nl__im__109,___get_global_string_const(305));
#line 329
c_rt_lib0move(&___nl__im__108, wprinter0build_sim(___nl__im__109));
#line 329
c_rt_lib0clear(&___nl__im__109);
#line 329
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(3, ___nl__im__100, ___nl__im__106, ___nl__im__108));
#line 329
c_rt_lib0clear(&___nl__im__100);
#line 329
c_rt_lib0clear(&___nl__im__106);
#line 329
c_rt_lib0clear(&___nl__im__108);
#line 329
c_rt_lib0move(&___nl__im__98, wprinter0build_pretty_a(___nl__im__99));
#line 329
c_rt_lib0clear(&___nl__im__99);
#line 329
c_rt_lib0clear(&___nl__im__0);
#line 329
c_rt_lib0clear(&___nl__im__1);
#line 329
//clear ___nl__bool__2;
#line 329
c_rt_lib0clear(&___nl__im__3);
#line 329
//clear ___nl__int__4;
#line 329
c_rt_lib0clear(&___nl__im__5);
#line 329
c_rt_lib0clear(&___nl__im__6);
#line 329
c_rt_lib0clear(&___nl__im__9);
#line 329
c_rt_lib0clear(&___nl__im__10);
#line 329
c_rt_lib0clear(&___nl__im__11);
#line 329
c_rt_lib0clear(&___nl__im__12);
#line 329
c_rt_lib0clear(&___nl__im__13);
#line 329
//clear ___nl__int__14;
#line 329
//clear ___nl__int__15;
#line 329
//clear ___nl__int__16;
#line 329
//clear ___nl__bool__17;
#line 329
//clear ___nl__int__18;
#line 329
c_rt_lib0clear(&___nl__im__19);
#line 329
c_rt_lib0clear(&___nl__im__23);
#line 329
//clear ___nl__bool__24;
#line 329
c_rt_lib0clear(&___nl__im__25);
#line 329
c_rt_lib0clear(&___nl__im__36);
#line 329
c_rt_lib0clear(&___nl__im__38);
#line 329
c_rt_lib0clear(&___nl__im__39);
#line 329
c_rt_lib0clear(&___nl__im__44);
#line 329
c_rt_lib0clear(&___nl__im__45);
#line 329
c_rt_lib0clear(&___nl__im__46);
#line 329
c_rt_lib0clear(&___nl__im__47);
#line 329
c_rt_lib0clear(&___nl__im__48);
#line 329
c_rt_lib0clear(&___nl__im__49);
#line 329
c_rt_lib0clear(&___nl__im__50);
#line 329
c_rt_lib0clear(&___nl__im__51);
#line 329
c_rt_lib0clear(&___nl__im__52);
#line 329
c_rt_lib0clear(&___nl__im__53);
#line 329
c_rt_lib0clear(&___nl__im__60);
#line 329
c_rt_lib0clear(&___nl__im__61);
#line 329
c_rt_lib0clear(&___nl__im__62);
#line 329
c_rt_lib0clear(&___nl__im__80);
#line 329
c_rt_lib0clear(&___nl__im__81);
#line 329
c_rt_lib0clear(&___nl__im__82);
#line 329
//clear ___nl__bool__83;
#line 329
c_rt_lib0clear(&___nl__im__85);
#line 329
return ___nl__im__98;
#line 331
goto label_854;
#line 331
label_525:
;
#line 331
c_rt_lib0move(&___nl__im__110,___get_global_string_const(569));
#line 331
___nl__bool__83 = c_rt_lib0eq(___nl__im__82, ___nl__im__110);
#line 331
c_rt_lib0clear(&___nl__im__110);
#line 331
___nl__bool__83 = !___nl__bool__83;
#line 331
if(___nl__bool__83){ goto label_614;}
#line 333
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 333
___nl__bool__112 = pretty_printer_priv0is_to_change_ov(___nl__im__113);
#line 333
c_rt_lib0clear(&___nl__im__113);
#line 333
___nl__bool__112 = !___nl__bool__112;
#line 333
if(___nl__bool__112){ goto label_552;}
#line 335
c_rt_lib0move(&___nl__im__116,___get_global_string_const(455));
#line 335
c_rt_lib0move(&___nl__im__115, wprinter0build_sim(___nl__im__116));
#line 335
c_rt_lib0clear(&___nl__im__116);
#line 336
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 336
c_rt_lib0move(&___nl__im__117, pretty_printer_priv0print_val(___nl__im__118));
#line 336
c_rt_lib0clear(&___nl__im__118);
#line 337
c_rt_lib0move(&___nl__im__120,___get_global_string_const(320));
#line 337
c_rt_lib0move(&___nl__im__119, wprinter0build_sim(___nl__im__120));
#line 337
c_rt_lib0clear(&___nl__im__120);
#line 337
c_rt_lib0move(&___nl__im__114, c_rt_lib0array_mk(3, ___nl__im__115, ___nl__im__117, ___nl__im__119));
#line 337
c_rt_lib0clear(&___nl__im__115);
#line 337
c_rt_lib0clear(&___nl__im__117);
#line 337
c_rt_lib0clear(&___nl__im__119);
#line 337
c_rt_lib0move(&___nl__im__111, wprinter0build_pretty_a(___nl__im__114));
#line 337
c_rt_lib0clear(&___nl__im__114);
#line 339
goto label_557;
#line 339
label_552:
;
#line 340
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 340
c_rt_lib0move(&___nl__im__111, pretty_printer_priv0print_val(___nl__im__121));
#line 340
c_rt_lib0clear(&___nl__im__121);
#line 341
goto label_557;
#line 341
label_557:
;
#line 341
//clear ___nl__bool__112;
#line 342
c_rt_lib0move(&___nl__im__124, wprinter0build_sim(___nl__im__82));
#line 342
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 342
c_rt_lib0move(&___nl__im__125, pretty_printer_priv0print_val(___nl__im__126));
#line 342
c_rt_lib0clear(&___nl__im__126);
#line 342
c_rt_lib0move(&___nl__im__123, c_rt_lib0array_mk(3, ___nl__im__111, ___nl__im__124, ___nl__im__125));
#line 342
c_rt_lib0clear(&___nl__im__124);
#line 342
c_rt_lib0clear(&___nl__im__125);
#line 342
c_rt_lib0move(&___nl__im__122, wprinter0build_pretty_op_l(___nl__im__123));
#line 342
c_rt_lib0clear(&___nl__im__123);
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
c_rt_lib0clear(&___nl__im__1);
#line 342
//clear ___nl__bool__2;
#line 342
c_rt_lib0clear(&___nl__im__3);
#line 342
//clear ___nl__int__4;
#line 342
c_rt_lib0clear(&___nl__im__5);
#line 342
c_rt_lib0clear(&___nl__im__6);
#line 342
c_rt_lib0clear(&___nl__im__9);
#line 342
c_rt_lib0clear(&___nl__im__10);
#line 342
c_rt_lib0clear(&___nl__im__11);
#line 342
c_rt_lib0clear(&___nl__im__12);
#line 342
c_rt_lib0clear(&___nl__im__13);
#line 342
//clear ___nl__int__14;
#line 342
//clear ___nl__int__15;
#line 342
//clear ___nl__int__16;
#line 342
//clear ___nl__bool__17;
#line 342
//clear ___nl__int__18;
#line 342
c_rt_lib0clear(&___nl__im__19);
#line 342
c_rt_lib0clear(&___nl__im__23);
#line 342
//clear ___nl__bool__24;
#line 342
c_rt_lib0clear(&___nl__im__25);
#line 342
c_rt_lib0clear(&___nl__im__36);
#line 342
c_rt_lib0clear(&___nl__im__38);
#line 342
c_rt_lib0clear(&___nl__im__39);
#line 342
c_rt_lib0clear(&___nl__im__44);
#line 342
c_rt_lib0clear(&___nl__im__45);
#line 342
c_rt_lib0clear(&___nl__im__46);
#line 342
c_rt_lib0clear(&___nl__im__47);
#line 342
c_rt_lib0clear(&___nl__im__48);
#line 342
c_rt_lib0clear(&___nl__im__49);
#line 342
c_rt_lib0clear(&___nl__im__50);
#line 342
c_rt_lib0clear(&___nl__im__51);
#line 342
c_rt_lib0clear(&___nl__im__52);
#line 342
c_rt_lib0clear(&___nl__im__53);
#line 342
c_rt_lib0clear(&___nl__im__60);
#line 342
c_rt_lib0clear(&___nl__im__61);
#line 342
c_rt_lib0clear(&___nl__im__62);
#line 342
c_rt_lib0clear(&___nl__im__80);
#line 342
c_rt_lib0clear(&___nl__im__81);
#line 342
c_rt_lib0clear(&___nl__im__82);
#line 342
//clear ___nl__bool__83;
#line 342
c_rt_lib0clear(&___nl__im__85);
#line 342
c_rt_lib0clear(&___nl__im__98);
#line 342
c_rt_lib0clear(&___nl__im__111);
#line 342
return ___nl__im__122;
#line 343
goto label_854;
#line 343
label_614:
;
#line 343
c_rt_lib0move(&___nl__im__127,___get_global_string_const(1000));
#line 343
___nl__bool__83 = c_rt_lib0eq(___nl__im__82, ___nl__im__127);
#line 343
c_rt_lib0clear(&___nl__im__127);
#line 343
___nl__bool__83 = !___nl__bool__83;
#line 343
if(___nl__bool__83){ goto label_698;}
#line 345
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 345
c_rt_lib0move(&___nl__im__130, pretty_printer_priv0print_val(___nl__im__131));
#line 345
c_rt_lib0clear(&___nl__im__131);
#line 346
c_rt_lib0move(&___nl__im__132, wprinter0get_sep());
#line 347
c_rt_lib0move(&___nl__im__134,___get_global_string_const(1026));
#line 347
c_rt_lib0move(&___nl__im__133, wprinter0build_sim(___nl__im__134));
#line 347
c_rt_lib0clear(&___nl__im__134);
#line 348
c_rt_lib0move(&___nl__im__135, wprinter0get_sep());
#line 349
c_rt_lib0move(&___nl__im__137,___get_global_string_const(522));
#line 349
c_rt_lib0move(&___nl__im__136, wprinter0build_sim(___nl__im__137));
#line 349
c_rt_lib0clear(&___nl__im__137);
#line 350
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 350
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__141, ___get_global_string_const(218)));
#line 350
c_rt_lib0clear(&___nl__im__141);
#line 350
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 350
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(218)));
#line 350
c_rt_lib0clear(&___nl__im__143);
#line 350
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__142, ___get_global_string_const(1004)));
#line 350
c_rt_lib0clear(&___nl__im__140);
#line 350
c_rt_lib0clear(&___nl__im__142);
#line 350
c_rt_lib0move(&___nl__im__138, wprinter0build_sim(___nl__im__139));
#line 350
c_rt_lib0clear(&___nl__im__139);
#line 350
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_mk(6, ___nl__im__130, ___nl__im__132, ___nl__im__133, ___nl__im__135, ___nl__im__136, ___nl__im__138));
#line 350
c_rt_lib0clear(&___nl__im__130);
#line 350
c_rt_lib0clear(&___nl__im__132);
#line 350
c_rt_lib0clear(&___nl__im__133);
#line 350
c_rt_lib0clear(&___nl__im__135);
#line 350
c_rt_lib0clear(&___nl__im__136);
#line 350
c_rt_lib0clear(&___nl__im__138);
#line 350
c_rt_lib0move(&___nl__im__128, wprinter0build_pretty_op_l(___nl__im__129));
#line 350
c_rt_lib0clear(&___nl__im__129);
#line 350
c_rt_lib0clear(&___nl__im__0);
#line 350
c_rt_lib0clear(&___nl__im__1);
#line 350
//clear ___nl__bool__2;
#line 350
c_rt_lib0clear(&___nl__im__3);
#line 350
//clear ___nl__int__4;
#line 350
c_rt_lib0clear(&___nl__im__5);
#line 350
c_rt_lib0clear(&___nl__im__6);
#line 350
c_rt_lib0clear(&___nl__im__9);
#line 350
c_rt_lib0clear(&___nl__im__10);
#line 350
c_rt_lib0clear(&___nl__im__11);
#line 350
c_rt_lib0clear(&___nl__im__12);
#line 350
c_rt_lib0clear(&___nl__im__13);
#line 350
//clear ___nl__int__14;
#line 350
//clear ___nl__int__15;
#line 350
//clear ___nl__int__16;
#line 350
//clear ___nl__bool__17;
#line 350
//clear ___nl__int__18;
#line 350
c_rt_lib0clear(&___nl__im__19);
#line 350
c_rt_lib0clear(&___nl__im__23);
#line 350
//clear ___nl__bool__24;
#line 350
c_rt_lib0clear(&___nl__im__25);
#line 350
c_rt_lib0clear(&___nl__im__36);
#line 350
c_rt_lib0clear(&___nl__im__38);
#line 350
c_rt_lib0clear(&___nl__im__39);
#line 350
c_rt_lib0clear(&___nl__im__44);
#line 350
c_rt_lib0clear(&___nl__im__45);
#line 350
c_rt_lib0clear(&___nl__im__46);
#line 350
c_rt_lib0clear(&___nl__im__47);
#line 350
c_rt_lib0clear(&___nl__im__48);
#line 350
c_rt_lib0clear(&___nl__im__49);
#line 350
c_rt_lib0clear(&___nl__im__50);
#line 350
c_rt_lib0clear(&___nl__im__51);
#line 350
c_rt_lib0clear(&___nl__im__52);
#line 350
c_rt_lib0clear(&___nl__im__53);
#line 350
c_rt_lib0clear(&___nl__im__60);
#line 350
c_rt_lib0clear(&___nl__im__61);
#line 350
c_rt_lib0clear(&___nl__im__62);
#line 350
c_rt_lib0clear(&___nl__im__80);
#line 350
c_rt_lib0clear(&___nl__im__81);
#line 350
c_rt_lib0clear(&___nl__im__82);
#line 350
//clear ___nl__bool__83;
#line 350
c_rt_lib0clear(&___nl__im__85);
#line 350
c_rt_lib0clear(&___nl__im__98);
#line 350
c_rt_lib0clear(&___nl__im__111);
#line 350
c_rt_lib0clear(&___nl__im__122);
#line 350
return ___nl__im__128;
#line 352
goto label_854;
#line 352
label_698:
;
#line 352
c_rt_lib0move(&___nl__im__144,___get_global_string_const(1102));
#line 352
___nl__bool__83 = c_rt_lib0eq(___nl__im__82, ___nl__im__144);
#line 352
c_rt_lib0clear(&___nl__im__144);
#line 352
___nl__bool__83 = !___nl__bool__83;
#line 352
if(___nl__bool__83){ goto label_783;}
#line 354
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 354
c_rt_lib0move(&___nl__im__147, pretty_printer_priv0print_val(___nl__im__148));
#line 354
c_rt_lib0clear(&___nl__im__148);
#line 355
c_rt_lib0move(&___nl__im__149, wprinter0get_sep());
#line 356
c_rt_lib0move(&___nl__im__151,___get_global_string_const(1025));
#line 356
c_rt_lib0move(&___nl__im__150, wprinter0build_sim(___nl__im__151));
#line 356
c_rt_lib0clear(&___nl__im__151);
#line 357
c_rt_lib0move(&___nl__im__152, wprinter0get_sep());
#line 358
c_rt_lib0move(&___nl__im__154,___get_global_string_const(522));
#line 358
c_rt_lib0move(&___nl__im__153, wprinter0build_sim(___nl__im__154));
#line 358
c_rt_lib0clear(&___nl__im__154);
#line 359
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 359
c_rt_lib0move(&___nl__im__157, c_rt_lib0hash_get_value_dec(___nl__im__158, ___get_global_string_const(218)));
#line 359
c_rt_lib0clear(&___nl__im__158);
#line 359
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 359
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_string_const(218)));
#line 359
c_rt_lib0clear(&___nl__im__160);
#line 359
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__159, ___get_global_string_const(1004)));
#line 359
c_rt_lib0clear(&___nl__im__157);
#line 359
c_rt_lib0clear(&___nl__im__159);
#line 359
c_rt_lib0move(&___nl__im__155, wprinter0build_sim(___nl__im__156));
#line 359
c_rt_lib0clear(&___nl__im__156);
#line 359
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_mk(6, ___nl__im__147, ___nl__im__149, ___nl__im__150, ___nl__im__152, ___nl__im__153, ___nl__im__155));
#line 359
c_rt_lib0clear(&___nl__im__147);
#line 359
c_rt_lib0clear(&___nl__im__149);
#line 359
c_rt_lib0clear(&___nl__im__150);
#line 359
c_rt_lib0clear(&___nl__im__152);
#line 359
c_rt_lib0clear(&___nl__im__153);
#line 359
c_rt_lib0clear(&___nl__im__155);
#line 359
c_rt_lib0move(&___nl__im__145, wprinter0build_pretty_op_l(___nl__im__146));
#line 359
c_rt_lib0clear(&___nl__im__146);
#line 359
c_rt_lib0clear(&___nl__im__0);
#line 359
c_rt_lib0clear(&___nl__im__1);
#line 359
//clear ___nl__bool__2;
#line 359
c_rt_lib0clear(&___nl__im__3);
#line 359
//clear ___nl__int__4;
#line 359
c_rt_lib0clear(&___nl__im__5);
#line 359
c_rt_lib0clear(&___nl__im__6);
#line 359
c_rt_lib0clear(&___nl__im__9);
#line 359
c_rt_lib0clear(&___nl__im__10);
#line 359
c_rt_lib0clear(&___nl__im__11);
#line 359
c_rt_lib0clear(&___nl__im__12);
#line 359
c_rt_lib0clear(&___nl__im__13);
#line 359
//clear ___nl__int__14;
#line 359
//clear ___nl__int__15;
#line 359
//clear ___nl__int__16;
#line 359
//clear ___nl__bool__17;
#line 359
//clear ___nl__int__18;
#line 359
c_rt_lib0clear(&___nl__im__19);
#line 359
c_rt_lib0clear(&___nl__im__23);
#line 359
//clear ___nl__bool__24;
#line 359
c_rt_lib0clear(&___nl__im__25);
#line 359
c_rt_lib0clear(&___nl__im__36);
#line 359
c_rt_lib0clear(&___nl__im__38);
#line 359
c_rt_lib0clear(&___nl__im__39);
#line 359
c_rt_lib0clear(&___nl__im__44);
#line 359
c_rt_lib0clear(&___nl__im__45);
#line 359
c_rt_lib0clear(&___nl__im__46);
#line 359
c_rt_lib0clear(&___nl__im__47);
#line 359
c_rt_lib0clear(&___nl__im__48);
#line 359
c_rt_lib0clear(&___nl__im__49);
#line 359
c_rt_lib0clear(&___nl__im__50);
#line 359
c_rt_lib0clear(&___nl__im__51);
#line 359
c_rt_lib0clear(&___nl__im__52);
#line 359
c_rt_lib0clear(&___nl__im__53);
#line 359
c_rt_lib0clear(&___nl__im__60);
#line 359
c_rt_lib0clear(&___nl__im__61);
#line 359
c_rt_lib0clear(&___nl__im__62);
#line 359
c_rt_lib0clear(&___nl__im__80);
#line 359
c_rt_lib0clear(&___nl__im__81);
#line 359
c_rt_lib0clear(&___nl__im__82);
#line 359
//clear ___nl__bool__83;
#line 359
c_rt_lib0clear(&___nl__im__85);
#line 359
c_rt_lib0clear(&___nl__im__98);
#line 359
c_rt_lib0clear(&___nl__im__111);
#line 359
c_rt_lib0clear(&___nl__im__122);
#line 359
c_rt_lib0clear(&___nl__im__128);
#line 359
return ___nl__im__145;
#line 361
goto label_854;
#line 361
label_783:
;
#line 363
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(274)));
#line 363
c_rt_lib0move(&___nl__im__165, pretty_printer_priv0print_val(___nl__im__166));
#line 363
c_rt_lib0clear(&___nl__im__166);
#line 363
c_rt_lib0move(&___nl__im__167, wprinter0get_sep());
#line 363
c_rt_lib0move(&___nl__im__168, wprinter0build_sim(___nl__im__82));
#line 363
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_mk(3, ___nl__im__165, ___nl__im__167, ___nl__im__168));
#line 363
c_rt_lib0clear(&___nl__im__165);
#line 363
c_rt_lib0clear(&___nl__im__167);
#line 363
c_rt_lib0clear(&___nl__im__168);
#line 363
c_rt_lib0move(&___nl__im__163, wprinter0build_pretty_op_l(___nl__im__164));
#line 363
c_rt_lib0clear(&___nl__im__164);
#line 364
c_rt_lib0move(&___nl__im__169, wprinter0get_sep());
#line 365
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(275)));
#line 365
c_rt_lib0move(&___nl__im__170, pretty_printer_priv0print_val(___nl__im__171));
#line 365
c_rt_lib0clear(&___nl__im__171);
#line 365
c_rt_lib0move(&___nl__im__162, c_rt_lib0array_mk(3, ___nl__im__163, ___nl__im__169, ___nl__im__170));
#line 365
c_rt_lib0clear(&___nl__im__163);
#line 365
c_rt_lib0clear(&___nl__im__169);
#line 365
c_rt_lib0clear(&___nl__im__170);
#line 365
c_rt_lib0move(&___nl__im__161, wprinter0build_pretty_op_l(___nl__im__162));
#line 365
c_rt_lib0clear(&___nl__im__162);
#line 365
c_rt_lib0clear(&___nl__im__0);
#line 365
c_rt_lib0clear(&___nl__im__1);
#line 365
//clear ___nl__bool__2;
#line 365
c_rt_lib0clear(&___nl__im__3);
#line 365
//clear ___nl__int__4;
#line 365
c_rt_lib0clear(&___nl__im__5);
#line 365
c_rt_lib0clear(&___nl__im__6);
#line 365
c_rt_lib0clear(&___nl__im__9);
#line 365
c_rt_lib0clear(&___nl__im__10);
#line 365
c_rt_lib0clear(&___nl__im__11);
#line 365
c_rt_lib0clear(&___nl__im__12);
#line 365
c_rt_lib0clear(&___nl__im__13);
#line 365
//clear ___nl__int__14;
#line 365
//clear ___nl__int__15;
#line 365
//clear ___nl__int__16;
#line 365
//clear ___nl__bool__17;
#line 365
//clear ___nl__int__18;
#line 365
c_rt_lib0clear(&___nl__im__19);
#line 365
c_rt_lib0clear(&___nl__im__23);
#line 365
//clear ___nl__bool__24;
#line 365
c_rt_lib0clear(&___nl__im__25);
#line 365
c_rt_lib0clear(&___nl__im__36);
#line 365
c_rt_lib0clear(&___nl__im__38);
#line 365
c_rt_lib0clear(&___nl__im__39);
#line 365
c_rt_lib0clear(&___nl__im__44);
#line 365
c_rt_lib0clear(&___nl__im__45);
#line 365
c_rt_lib0clear(&___nl__im__46);
#line 365
c_rt_lib0clear(&___nl__im__47);
#line 365
c_rt_lib0clear(&___nl__im__48);
#line 365
c_rt_lib0clear(&___nl__im__49);
#line 365
c_rt_lib0clear(&___nl__im__50);
#line 365
c_rt_lib0clear(&___nl__im__51);
#line 365
c_rt_lib0clear(&___nl__im__52);
#line 365
c_rt_lib0clear(&___nl__im__53);
#line 365
c_rt_lib0clear(&___nl__im__60);
#line 365
c_rt_lib0clear(&___nl__im__61);
#line 365
c_rt_lib0clear(&___nl__im__62);
#line 365
c_rt_lib0clear(&___nl__im__80);
#line 365
c_rt_lib0clear(&___nl__im__81);
#line 365
c_rt_lib0clear(&___nl__im__82);
#line 365
//clear ___nl__bool__83;
#line 365
c_rt_lib0clear(&___nl__im__85);
#line 365
c_rt_lib0clear(&___nl__im__98);
#line 365
c_rt_lib0clear(&___nl__im__111);
#line 365
c_rt_lib0clear(&___nl__im__122);
#line 365
c_rt_lib0clear(&___nl__im__128);
#line 365
c_rt_lib0clear(&___nl__im__145);
#line 365
return ___nl__im__161;
#line 367
goto label_854;
#line 367
label_854:
;
#line 367
//clear ___nl__bool__83;
#line 367
c_rt_lib0clear(&___nl__im__85);
#line 367
c_rt_lib0clear(&___nl__im__98);
#line 367
c_rt_lib0clear(&___nl__im__111);
#line 367
c_rt_lib0clear(&___nl__im__122);
#line 367
c_rt_lib0clear(&___nl__im__128);
#line 367
c_rt_lib0clear(&___nl__im__145);
#line 367
c_rt_lib0clear(&___nl__im__161);
#line 368
goto label_1725;
#line 368
label_864:
;
#line 368
c_rt_lib0move(&___nl__im__173, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1008)));
#line 368
c_rt_lib0copy(&___nl__im__172, ___nl__im__173);
#line 369
c_rt_lib0move(&___nl__im__176, pretty_printer_priv0print_val(___nl__im__172));
#line 369
c_rt_lib0move(&___nl__im__178,___get_global_string_const(189));
#line 369
c_rt_lib0move(&___nl__im__177, wprinter0build_sim(___nl__im__178));
#line 369
c_rt_lib0clear(&___nl__im__178);
#line 369
c_rt_lib0move(&___nl__im__175, c_rt_lib0array_mk(2, ___nl__im__176, ___nl__im__177));
#line 369
c_rt_lib0clear(&___nl__im__176);
#line 369
c_rt_lib0clear(&___nl__im__177);
#line 369
c_rt_lib0move(&___nl__im__174, wprinter0build_pretty_op_l(___nl__im__175));
#line 369
c_rt_lib0clear(&___nl__im__175);
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
c_rt_lib0clear(&___nl__im__9);
#line 369
c_rt_lib0clear(&___nl__im__10);
#line 369
c_rt_lib0clear(&___nl__im__11);
#line 369
c_rt_lib0clear(&___nl__im__12);
#line 369
c_rt_lib0clear(&___nl__im__13);
#line 369
//clear ___nl__int__14;
#line 369
//clear ___nl__int__15;
#line 369
//clear ___nl__int__16;
#line 369
//clear ___nl__bool__17;
#line 369
//clear ___nl__int__18;
#line 369
c_rt_lib0clear(&___nl__im__19);
#line 369
c_rt_lib0clear(&___nl__im__23);
#line 369
//clear ___nl__bool__24;
#line 369
c_rt_lib0clear(&___nl__im__25);
#line 369
c_rt_lib0clear(&___nl__im__36);
#line 369
c_rt_lib0clear(&___nl__im__38);
#line 369
c_rt_lib0clear(&___nl__im__39);
#line 369
c_rt_lib0clear(&___nl__im__44);
#line 369
c_rt_lib0clear(&___nl__im__45);
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
c_rt_lib0clear(&___nl__im__60);
#line 369
c_rt_lib0clear(&___nl__im__61);
#line 369
c_rt_lib0clear(&___nl__im__62);
#line 369
c_rt_lib0clear(&___nl__im__80);
#line 369
c_rt_lib0clear(&___nl__im__81);
#line 369
c_rt_lib0clear(&___nl__im__82);
#line 369
c_rt_lib0clear(&___nl__im__172);
#line 369
c_rt_lib0clear(&___nl__im__173);
#line 369
return ___nl__im__174;
#line 370
goto label_1725;
#line 370
label_920:
;
#line 370
c_rt_lib0move(&___nl__im__180, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1007)));
#line 370
c_rt_lib0copy(&___nl__im__179, ___nl__im__180);
#line 371
c_rt_lib0move(&___nl__im__183, pretty_printer_priv0print_val(___nl__im__179));
#line 371
c_rt_lib0move(&___nl__im__185,___get_global_string_const(1024));
#line 371
c_rt_lib0move(&___nl__im__184, wprinter0build_sim(___nl__im__185));
#line 371
c_rt_lib0clear(&___nl__im__185);
#line 371
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_mk(2, ___nl__im__183, ___nl__im__184));
#line 371
c_rt_lib0clear(&___nl__im__183);
#line 371
c_rt_lib0clear(&___nl__im__184);
#line 371
c_rt_lib0move(&___nl__im__181, wprinter0build_pretty_op_l(___nl__im__182));
#line 371
c_rt_lib0clear(&___nl__im__182);
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
//clear ___nl__int__18;
#line 371
c_rt_lib0clear(&___nl__im__19);
#line 371
c_rt_lib0clear(&___nl__im__23);
#line 371
//clear ___nl__bool__24;
#line 371
c_rt_lib0clear(&___nl__im__25);
#line 371
c_rt_lib0clear(&___nl__im__36);
#line 371
c_rt_lib0clear(&___nl__im__38);
#line 371
c_rt_lib0clear(&___nl__im__39);
#line 371
c_rt_lib0clear(&___nl__im__44);
#line 371
c_rt_lib0clear(&___nl__im__45);
#line 371
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__60);
#line 371
c_rt_lib0clear(&___nl__im__61);
#line 371
c_rt_lib0clear(&___nl__im__62);
#line 371
c_rt_lib0clear(&___nl__im__80);
#line 371
c_rt_lib0clear(&___nl__im__81);
#line 371
c_rt_lib0clear(&___nl__im__82);
#line 371
c_rt_lib0clear(&___nl__im__172);
#line 371
c_rt_lib0clear(&___nl__im__173);
#line 371
c_rt_lib0clear(&___nl__im__174);
#line 371
c_rt_lib0clear(&___nl__im__179);
#line 371
c_rt_lib0clear(&___nl__im__180);
#line 371
return ___nl__im__181;
#line 372
goto label_1725;
#line 372
label_979:
;
#line 372
c_rt_lib0move(&___nl__im__187, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1005)));
#line 372
c_rt_lib0copy(&___nl__im__186, ___nl__im__187);
#line 373
c_rt_lib0move(&___nl__im__190, c_rt_lib0hash_get_value_dec(___nl__im__186, ___get_global_string_const(552)));
#line 373
c_rt_lib0move(&___nl__im__189, wprinter0build_sim(___nl__im__190));
#line 373
c_rt_lib0clear(&___nl__im__190);
#line 373
c_rt_lib0move(&___nl__im__192, c_rt_lib0hash_get_value_dec(___nl__im__186, ___get_global_string_const(223)));
#line 373
c_rt_lib0move(&___nl__im__191, pretty_printer_priv0print_val(___nl__im__192));
#line 373
c_rt_lib0clear(&___nl__im__192);
#line 373
c_rt_lib0move(&___nl__im__188, wprinter0build_pretty_bind(___nl__im__189, ___nl__im__191));
#line 373
c_rt_lib0clear(&___nl__im__189);
#line 373
c_rt_lib0clear(&___nl__im__191);
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
//clear ___nl__int__18;
#line 373
c_rt_lib0clear(&___nl__im__19);
#line 373
c_rt_lib0clear(&___nl__im__23);
#line 373
//clear ___nl__bool__24;
#line 373
c_rt_lib0clear(&___nl__im__25);
#line 373
c_rt_lib0clear(&___nl__im__36);
#line 373
c_rt_lib0clear(&___nl__im__38);
#line 373
c_rt_lib0clear(&___nl__im__39);
#line 373
c_rt_lib0clear(&___nl__im__44);
#line 373
c_rt_lib0clear(&___nl__im__45);
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
c_rt_lib0clear(&___nl__im__60);
#line 373
c_rt_lib0clear(&___nl__im__61);
#line 373
c_rt_lib0clear(&___nl__im__62);
#line 373
c_rt_lib0clear(&___nl__im__80);
#line 373
c_rt_lib0clear(&___nl__im__81);
#line 373
c_rt_lib0clear(&___nl__im__82);
#line 373
c_rt_lib0clear(&___nl__im__172);
#line 373
c_rt_lib0clear(&___nl__im__173);
#line 373
c_rt_lib0clear(&___nl__im__174);
#line 373
c_rt_lib0clear(&___nl__im__179);
#line 373
c_rt_lib0clear(&___nl__im__180);
#line 373
c_rt_lib0clear(&___nl__im__181);
#line 373
c_rt_lib0clear(&___nl__im__186);
#line 373
c_rt_lib0clear(&___nl__im__187);
#line 373
return ___nl__im__188;
#line 374
goto label_1725;
#line 374
label_1041:
;
#line 374
c_rt_lib0move(&___nl__im__194, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(962)));
#line 374
c_rt_lib0copy(&___nl__im__193, ___nl__im__194);
#line 375
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(166)));
#line 375
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(150)));
#line 375
c_rt_lib0move(&___nl__im__196, pretty_printer_priv0get_fun_label(___nl__im__197, ___nl__im__198));
#line 375
c_rt_lib0clear(&___nl__im__197);
#line 375
c_rt_lib0clear(&___nl__im__198);
#line 375
c_rt_lib0move(&___nl__im__199,___get_global_string_const(455));
#line 375
c_rt_lib0move(&___nl__im__195, c_rt_lib0concat_new(___nl__im__196, ___nl__im__199));
#line 375
c_rt_lib0clear(&___nl__im__196);
#line 375
c_rt_lib0clear(&___nl__im__199);
#line 376
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 376
___nl__int__201 = c_rt_lib0array_len(___nl__im__202);
#line 376
c_rt_lib0clear(&___nl__im__202);
#line 376
___nl__int__203 = 1;
#line 376
___nl__int__204 = ___nl__int__201 == ___nl__int__203;
#line 376
___nl__bool__200 = ___nl__int__204;
#line 376
//clear ___nl__int__201;
#line 376
//clear ___nl__int__203;
#line 376
//clear ___nl__int__204;
#line 376
___nl__bool__200 = !___nl__bool__200;
#line 376
if(___nl__bool__200){ goto label_1145;}
#line 377
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 377
___nl__int__208 = 0;
#line 377
c_rt_lib0move(&___nl__im__206, c_rt_lib0array_get(___nl__im__207, ___nl__int__208));
#line 377
c_rt_lib0clear(&___nl__im__207);
#line 377
//clear ___nl__int__208;
#line 377
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__206, ___get_global_string_const(223)));
#line 377
c_rt_lib0clear(&___nl__im__206);
#line 378
c_rt_lib0move(&___nl__im__210, c_rt_lib0hash_get_value_dec(___nl__im__205, ___get_global_string_const(218)));
#line 378
___nl__bool__209 = c_rt_lib0priv_is(___nl__im__210, ___get_global_string_const(230));
#line 378
c_rt_lib0clear(&___nl__im__210);
#line 378
if(___nl__bool__209){ goto label_1078;}
#line 378
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__205, ___get_global_string_const(218)));
#line 378
___nl__bool__209 = c_rt_lib0priv_is(___nl__im__211, ___get_global_string_const(229));
#line 378
c_rt_lib0clear(&___nl__im__211);
#line 378
label_1078:
;
#line 378
___nl__bool__209 = !___nl__bool__209;
#line 378
if(___nl__bool__209){ goto label_1141;}
#line 379
c_rt_lib0move(&___nl__im__213,___get_global_string_const(320));
#line 379
c_rt_lib0move(&___nl__im__212, pretty_printer_priv0get_compressed_fun_val(___nl__im__205, ___nl__im__195, ___nl__im__213));
#line 379
c_rt_lib0clear(&___nl__im__213);
#line 379
c_rt_lib0clear(&___nl__im__0);
#line 379
c_rt_lib0clear(&___nl__im__1);
#line 379
//clear ___nl__bool__2;
#line 379
c_rt_lib0clear(&___nl__im__3);
#line 379
//clear ___nl__int__4;
#line 379
c_rt_lib0clear(&___nl__im__5);
#line 379
c_rt_lib0clear(&___nl__im__6);
#line 379
c_rt_lib0clear(&___nl__im__9);
#line 379
c_rt_lib0clear(&___nl__im__10);
#line 379
c_rt_lib0clear(&___nl__im__11);
#line 379
c_rt_lib0clear(&___nl__im__12);
#line 379
c_rt_lib0clear(&___nl__im__13);
#line 379
//clear ___nl__int__14;
#line 379
//clear ___nl__int__15;
#line 379
//clear ___nl__int__16;
#line 379
//clear ___nl__bool__17;
#line 379
//clear ___nl__int__18;
#line 379
c_rt_lib0clear(&___nl__im__19);
#line 379
c_rt_lib0clear(&___nl__im__23);
#line 379
//clear ___nl__bool__24;
#line 379
c_rt_lib0clear(&___nl__im__25);
#line 379
c_rt_lib0clear(&___nl__im__36);
#line 379
c_rt_lib0clear(&___nl__im__38);
#line 379
c_rt_lib0clear(&___nl__im__39);
#line 379
c_rt_lib0clear(&___nl__im__44);
#line 379
c_rt_lib0clear(&___nl__im__45);
#line 379
c_rt_lib0clear(&___nl__im__46);
#line 379
c_rt_lib0clear(&___nl__im__47);
#line 379
c_rt_lib0clear(&___nl__im__48);
#line 379
c_rt_lib0clear(&___nl__im__49);
#line 379
c_rt_lib0clear(&___nl__im__50);
#line 379
c_rt_lib0clear(&___nl__im__51);
#line 379
c_rt_lib0clear(&___nl__im__52);
#line 379
c_rt_lib0clear(&___nl__im__53);
#line 379
c_rt_lib0clear(&___nl__im__60);
#line 379
c_rt_lib0clear(&___nl__im__61);
#line 379
c_rt_lib0clear(&___nl__im__62);
#line 379
c_rt_lib0clear(&___nl__im__80);
#line 379
c_rt_lib0clear(&___nl__im__81);
#line 379
c_rt_lib0clear(&___nl__im__82);
#line 379
c_rt_lib0clear(&___nl__im__172);
#line 379
c_rt_lib0clear(&___nl__im__173);
#line 379
c_rt_lib0clear(&___nl__im__174);
#line 379
c_rt_lib0clear(&___nl__im__179);
#line 379
c_rt_lib0clear(&___nl__im__180);
#line 379
c_rt_lib0clear(&___nl__im__181);
#line 379
c_rt_lib0clear(&___nl__im__186);
#line 379
c_rt_lib0clear(&___nl__im__187);
#line 379
c_rt_lib0clear(&___nl__im__188);
#line 379
c_rt_lib0clear(&___nl__im__193);
#line 379
c_rt_lib0clear(&___nl__im__194);
#line 379
c_rt_lib0clear(&___nl__im__195);
#line 379
//clear ___nl__bool__200;
#line 379
c_rt_lib0clear(&___nl__im__205);
#line 379
//clear ___nl__bool__209;
#line 379
return ___nl__im__212;
#line 380
goto label_1141;
#line 380
label_1141:
;
#line 380
//clear ___nl__bool__209;
#line 380
c_rt_lib0clear(&___nl__im__212);
#line 381
goto label_1260;
#line 381
label_1145:
;
#line 381
___nl__bool__200 = pretty_printer_priv0is_to_change_ov(___nl__im__0);
#line 381
___nl__bool__200 = !___nl__bool__200;
#line 381
if(___nl__bool__200){ goto label_1260;}
#line 383
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 383
___nl__int__220 = 0;
#line 383
c_rt_lib0move(&___nl__im__218, c_rt_lib0array_get(___nl__im__219, ___nl__int__220));
#line 383
c_rt_lib0clear(&___nl__im__219);
#line 383
//clear ___nl__int__220;
#line 383
c_rt_lib0move(&___nl__im__217, c_rt_lib0hash_get_value_dec(___nl__im__218, ___get_global_string_const(223)));
#line 383
c_rt_lib0clear(&___nl__im__218);
#line 383
c_rt_lib0move(&___nl__im__216, pretty_printer_priv0print_val(___nl__im__217));
#line 383
c_rt_lib0clear(&___nl__im__217);
#line 384
c_rt_lib0move(&___nl__im__221, wprinter0get_sep());
#line 385
c_rt_lib0move(&___nl__im__223, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(166)));
#line 385
c_rt_lib0move(&___nl__im__222, wprinter0build_sim(___nl__im__223));
#line 385
c_rt_lib0clear(&___nl__im__223);
#line 386
c_rt_lib0move(&___nl__im__224, wprinter0get_sep());
#line 387
c_rt_lib0move(&___nl__im__227,___get_global_string_const(522));
#line 387
c_rt_lib0move(&___nl__im__234, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 387
___nl__int__235 = 1;
#line 387
c_rt_lib0move(&___nl__im__233, c_rt_lib0array_get(___nl__im__234, ___nl__int__235));
#line 387
c_rt_lib0clear(&___nl__im__234);
#line 387
//clear ___nl__int__235;
#line 387
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__233, ___get_global_string_const(223)));
#line 387
c_rt_lib0clear(&___nl__im__233);
#line 387
c_rt_lib0move(&___nl__im__231, c_rt_lib0hash_get_value_dec(___nl__im__232, ___get_global_string_const(218)));
#line 387
c_rt_lib0clear(&___nl__im__232);
#line 387
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 387
___nl__int__240 = 1;
#line 387
c_rt_lib0move(&___nl__im__238, c_rt_lib0array_get(___nl__im__239, ___nl__int__240));
#line 387
c_rt_lib0clear(&___nl__im__239);
#line 387
//clear ___nl__int__240;
#line 387
c_rt_lib0move(&___nl__im__237, c_rt_lib0hash_get_value_dec(___nl__im__238, ___get_global_string_const(223)));
#line 387
c_rt_lib0clear(&___nl__im__238);
#line 387
c_rt_lib0move(&___nl__im__236, c_rt_lib0hash_get_value_dec(___nl__im__237, ___get_global_string_const(218)));
#line 387
c_rt_lib0clear(&___nl__im__237);
#line 387
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__236, ___get_global_string_const(404)));
#line 387
c_rt_lib0clear(&___nl__im__231);
#line 387
c_rt_lib0clear(&___nl__im__236);
#line 387
c_rt_lib0move(&___nl__im__229, c_rt_lib0hash_get_value_dec(___nl__im__230, ___get_global_string_const(127)));
#line 387
c_rt_lib0clear(&___nl__im__230);
#line 387
___nl__int__241 = 0;
#line 387
c_rt_lib0move(&___nl__im__228, c_rt_lib0array_get(___nl__im__229, ___nl__int__241));
#line 387
c_rt_lib0clear(&___nl__im__229);
#line 387
//clear ___nl__int__241;
#line 387
c_rt_lib0move(&___nl__im__226, c_rt_lib0concat_new(___nl__im__227, ___nl__im__228));
#line 387
c_rt_lib0clear(&___nl__im__227);
#line 387
c_rt_lib0clear(&___nl__im__228);
#line 387
c_rt_lib0move(&___nl__im__225, wprinter0build_sim(___nl__im__226));
#line 387
c_rt_lib0clear(&___nl__im__226);
#line 387
c_rt_lib0move(&___nl__im__215, c_rt_lib0array_mk(5, ___nl__im__216, ___nl__im__221, ___nl__im__222, ___nl__im__224, ___nl__im__225));
#line 387
c_rt_lib0clear(&___nl__im__216);
#line 387
c_rt_lib0clear(&___nl__im__221);
#line 387
c_rt_lib0clear(&___nl__im__222);
#line 387
c_rt_lib0clear(&___nl__im__224);
#line 387
c_rt_lib0clear(&___nl__im__225);
#line 387
c_rt_lib0move(&___nl__im__214, wprinter0build_pretty_op_l(___nl__im__215));
#line 387
c_rt_lib0clear(&___nl__im__215);
#line 387
c_rt_lib0clear(&___nl__im__0);
#line 387
c_rt_lib0clear(&___nl__im__1);
#line 387
//clear ___nl__bool__2;
#line 387
c_rt_lib0clear(&___nl__im__3);
#line 387
//clear ___nl__int__4;
#line 387
c_rt_lib0clear(&___nl__im__5);
#line 387
c_rt_lib0clear(&___nl__im__6);
#line 387
c_rt_lib0clear(&___nl__im__9);
#line 387
c_rt_lib0clear(&___nl__im__10);
#line 387
c_rt_lib0clear(&___nl__im__11);
#line 387
c_rt_lib0clear(&___nl__im__12);
#line 387
c_rt_lib0clear(&___nl__im__13);
#line 387
//clear ___nl__int__14;
#line 387
//clear ___nl__int__15;
#line 387
//clear ___nl__int__16;
#line 387
//clear ___nl__bool__17;
#line 387
//clear ___nl__int__18;
#line 387
c_rt_lib0clear(&___nl__im__19);
#line 387
c_rt_lib0clear(&___nl__im__23);
#line 387
//clear ___nl__bool__24;
#line 387
c_rt_lib0clear(&___nl__im__25);
#line 387
c_rt_lib0clear(&___nl__im__36);
#line 387
c_rt_lib0clear(&___nl__im__38);
#line 387
c_rt_lib0clear(&___nl__im__39);
#line 387
c_rt_lib0clear(&___nl__im__44);
#line 387
c_rt_lib0clear(&___nl__im__45);
#line 387
c_rt_lib0clear(&___nl__im__46);
#line 387
c_rt_lib0clear(&___nl__im__47);
#line 387
c_rt_lib0clear(&___nl__im__48);
#line 387
c_rt_lib0clear(&___nl__im__49);
#line 387
c_rt_lib0clear(&___nl__im__50);
#line 387
c_rt_lib0clear(&___nl__im__51);
#line 387
c_rt_lib0clear(&___nl__im__52);
#line 387
c_rt_lib0clear(&___nl__im__53);
#line 387
c_rt_lib0clear(&___nl__im__60);
#line 387
c_rt_lib0clear(&___nl__im__61);
#line 387
c_rt_lib0clear(&___nl__im__62);
#line 387
c_rt_lib0clear(&___nl__im__80);
#line 387
c_rt_lib0clear(&___nl__im__81);
#line 387
c_rt_lib0clear(&___nl__im__82);
#line 387
c_rt_lib0clear(&___nl__im__172);
#line 387
c_rt_lib0clear(&___nl__im__173);
#line 387
c_rt_lib0clear(&___nl__im__174);
#line 387
c_rt_lib0clear(&___nl__im__179);
#line 387
c_rt_lib0clear(&___nl__im__180);
#line 387
c_rt_lib0clear(&___nl__im__181);
#line 387
c_rt_lib0clear(&___nl__im__186);
#line 387
c_rt_lib0clear(&___nl__im__187);
#line 387
c_rt_lib0clear(&___nl__im__188);
#line 387
c_rt_lib0clear(&___nl__im__193);
#line 387
c_rt_lib0clear(&___nl__im__194);
#line 387
c_rt_lib0clear(&___nl__im__195);
#line 387
//clear ___nl__bool__200;
#line 387
c_rt_lib0clear(&___nl__im__205);
#line 387
return ___nl__im__214;
#line 389
goto label_1260;
#line 389
label_1260:
;
#line 389
//clear ___nl__bool__200;
#line 389
c_rt_lib0clear(&___nl__im__205);
#line 389
c_rt_lib0clear(&___nl__im__214);
#line 390
c_rt_lib0move(&___nl__im__243, wprinter0build_sim(___nl__im__195));
#line 390
c_rt_lib0move(&___nl__im__242, c_rt_lib0array_mk(1, ___nl__im__243));
#line 390
c_rt_lib0clear(&___nl__im__243);
#line 391
c_rt_lib0move(&___nl__im__245, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 391
c_rt_lib0move(&___nl__im__244, pretty_printer_priv0join_print_fun_arg(___nl__im__245));
#line 391
c_rt_lib0clear(&___nl__im__245);
#line 391
c_rt_lib0delete(array0append(&___nl__im__242, ___nl__im__244));
#line 391
c_rt_lib0clear(&___nl__im__244);
#line 392
c_rt_lib0move(&___nl__im__247,___get_global_string_const(320));
#line 392
c_rt_lib0move(&___nl__im__246, wprinter0build_sim(___nl__im__247));
#line 392
c_rt_lib0clear(&___nl__im__247);
#line 392
c_rt_lib0delete(array0push(&___nl__im__242, ___nl__im__246));
#line 392
c_rt_lib0clear(&___nl__im__246);
#line 395
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 395
___nl__int__250 = pretty_printer_priv0count_structs(___nl__im__251);
#line 395
c_rt_lib0clear(&___nl__im__251);
#line 395
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 395
___nl__int__252 = c_rt_lib0array_len(___nl__im__253);
#line 395
c_rt_lib0clear(&___nl__im__253);
#line 395
___nl__int__254 = ___nl__int__250 == ___nl__int__252;
#line 395
___nl__bool__248 = ___nl__int__254;
#line 395
//clear ___nl__int__250;
#line 395
//clear ___nl__int__252;
#line 395
//clear ___nl__int__254;
#line 395
___nl__bool__249 = !___nl__bool__248;
#line 395
if(___nl__bool__249){ goto label_1299;}
#line 395
c_rt_lib0move(&___nl__im__256, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 395
___nl__int__255 = c_rt_lib0array_len(___nl__im__256);
#line 395
c_rt_lib0clear(&___nl__im__256);
#line 395
___nl__int__257 = 0;
#line 395
___nl__int__258 = ___nl__int__255 > ___nl__int__257;
#line 395
___nl__bool__248 = ___nl__int__258;
#line 395
//clear ___nl__int__255;
#line 395
//clear ___nl__int__257;
#line 395
//clear ___nl__int__258;
#line 395
label_1299:
;
#line 395
//clear ___nl__bool__249;
#line 395
if(___nl__bool__248){ goto label_1326;}
#line 396
c_rt_lib0move(&___nl__im__261, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 396
___nl__int__260 = c_rt_lib0array_len(___nl__im__261);
#line 396
c_rt_lib0clear(&___nl__im__261);
#line 396
___nl__int__262 = 1;
#line 396
___nl__int__263 = ___nl__int__260 == ___nl__int__262;
#line 396
___nl__bool__248 = ___nl__int__263;
#line 396
//clear ___nl__int__260;
#line 396
//clear ___nl__int__262;
#line 396
//clear ___nl__int__263;
#line 396
___nl__bool__259 = !___nl__bool__248;
#line 396
if(___nl__bool__259){ goto label_1324;}
#line 396
c_rt_lib0move(&___nl__im__267, c_rt_lib0hash_get_value_dec(___nl__im__193, ___get_global_string_const(265)));
#line 396
___nl__int__268 = 0;
#line 396
c_rt_lib0move(&___nl__im__266, c_rt_lib0array_get(___nl__im__267, ___nl__int__268));
#line 396
c_rt_lib0clear(&___nl__im__267);
#line 396
//clear ___nl__int__268;
#line 396
c_rt_lib0move(&___nl__im__265, c_rt_lib0hash_get_value_dec(___nl__im__266, ___get_global_string_const(223)));
#line 396
c_rt_lib0clear(&___nl__im__266);
#line 396
c_rt_lib0move(&___nl__im__264, c_rt_lib0hash_get_value_dec(___nl__im__265, ___get_global_string_const(218)));
#line 396
c_rt_lib0clear(&___nl__im__265);
#line 396
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__264, ___get_global_string_const(962));
#line 396
c_rt_lib0clear(&___nl__im__264);
#line 396
label_1324:
;
#line 396
//clear ___nl__bool__259;
#line 396
label_1326:
;
#line 396
___nl__bool__248 = !___nl__bool__248;
#line 396
if(___nl__bool__248){ goto label_1386;}
#line 393
c_rt_lib0move(&___nl__im__269, wprinter0build_pretty_op_l(___nl__im__242));
#line 393
c_rt_lib0clear(&___nl__im__0);
#line 393
c_rt_lib0clear(&___nl__im__1);
#line 393
//clear ___nl__bool__2;
#line 393
c_rt_lib0clear(&___nl__im__3);
#line 393
//clear ___nl__int__4;
#line 393
c_rt_lib0clear(&___nl__im__5);
#line 393
c_rt_lib0clear(&___nl__im__6);
#line 393
c_rt_lib0clear(&___nl__im__9);
#line 393
c_rt_lib0clear(&___nl__im__10);
#line 393
c_rt_lib0clear(&___nl__im__11);
#line 393
c_rt_lib0clear(&___nl__im__12);
#line 393
c_rt_lib0clear(&___nl__im__13);
#line 393
//clear ___nl__int__14;
#line 393
//clear ___nl__int__15;
#line 393
//clear ___nl__int__16;
#line 393
//clear ___nl__bool__17;
#line 393
//clear ___nl__int__18;
#line 393
c_rt_lib0clear(&___nl__im__19);
#line 393
c_rt_lib0clear(&___nl__im__23);
#line 393
//clear ___nl__bool__24;
#line 393
c_rt_lib0clear(&___nl__im__25);
#line 393
c_rt_lib0clear(&___nl__im__36);
#line 393
c_rt_lib0clear(&___nl__im__38);
#line 393
c_rt_lib0clear(&___nl__im__39);
#line 393
c_rt_lib0clear(&___nl__im__44);
#line 393
c_rt_lib0clear(&___nl__im__45);
#line 393
c_rt_lib0clear(&___nl__im__46);
#line 393
c_rt_lib0clear(&___nl__im__47);
#line 393
c_rt_lib0clear(&___nl__im__48);
#line 393
c_rt_lib0clear(&___nl__im__49);
#line 393
c_rt_lib0clear(&___nl__im__50);
#line 393
c_rt_lib0clear(&___nl__im__51);
#line 393
c_rt_lib0clear(&___nl__im__52);
#line 393
c_rt_lib0clear(&___nl__im__53);
#line 393
c_rt_lib0clear(&___nl__im__60);
#line 393
c_rt_lib0clear(&___nl__im__61);
#line 393
c_rt_lib0clear(&___nl__im__62);
#line 393
c_rt_lib0clear(&___nl__im__80);
#line 393
c_rt_lib0clear(&___nl__im__81);
#line 393
c_rt_lib0clear(&___nl__im__82);
#line 393
c_rt_lib0clear(&___nl__im__172);
#line 393
c_rt_lib0clear(&___nl__im__173);
#line 393
c_rt_lib0clear(&___nl__im__174);
#line 393
c_rt_lib0clear(&___nl__im__179);
#line 393
c_rt_lib0clear(&___nl__im__180);
#line 393
c_rt_lib0clear(&___nl__im__181);
#line 393
c_rt_lib0clear(&___nl__im__186);
#line 393
c_rt_lib0clear(&___nl__im__187);
#line 393
c_rt_lib0clear(&___nl__im__188);
#line 393
c_rt_lib0clear(&___nl__im__193);
#line 393
c_rt_lib0clear(&___nl__im__194);
#line 393
c_rt_lib0clear(&___nl__im__195);
#line 393
c_rt_lib0clear(&___nl__im__242);
#line 393
//clear ___nl__bool__248;
#line 393
return ___nl__im__269;
#line 393
goto label_1386;
#line 393
label_1386:
;
#line 393
//clear ___nl__bool__248;
#line 393
c_rt_lib0clear(&___nl__im__269);
#line 397
c_rt_lib0move(&___nl__im__270, wprinter0build_pretty_l(___nl__im__242));
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
c_rt_lib0clear(&___nl__im__9);
#line 397
c_rt_lib0clear(&___nl__im__10);
#line 397
c_rt_lib0clear(&___nl__im__11);
#line 397
c_rt_lib0clear(&___nl__im__12);
#line 397
c_rt_lib0clear(&___nl__im__13);
#line 397
//clear ___nl__int__14;
#line 397
//clear ___nl__int__15;
#line 397
//clear ___nl__int__16;
#line 397
//clear ___nl__bool__17;
#line 397
//clear ___nl__int__18;
#line 397
c_rt_lib0clear(&___nl__im__19);
#line 397
c_rt_lib0clear(&___nl__im__23);
#line 397
//clear ___nl__bool__24;
#line 397
c_rt_lib0clear(&___nl__im__25);
#line 397
c_rt_lib0clear(&___nl__im__36);
#line 397
c_rt_lib0clear(&___nl__im__38);
#line 397
c_rt_lib0clear(&___nl__im__39);
#line 397
c_rt_lib0clear(&___nl__im__44);
#line 397
c_rt_lib0clear(&___nl__im__45);
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
c_rt_lib0clear(&___nl__im__60);
#line 397
c_rt_lib0clear(&___nl__im__61);
#line 397
c_rt_lib0clear(&___nl__im__62);
#line 397
c_rt_lib0clear(&___nl__im__80);
#line 397
c_rt_lib0clear(&___nl__im__81);
#line 397
c_rt_lib0clear(&___nl__im__82);
#line 397
c_rt_lib0clear(&___nl__im__172);
#line 397
c_rt_lib0clear(&___nl__im__173);
#line 397
c_rt_lib0clear(&___nl__im__174);
#line 397
c_rt_lib0clear(&___nl__im__179);
#line 397
c_rt_lib0clear(&___nl__im__180);
#line 397
c_rt_lib0clear(&___nl__im__181);
#line 397
c_rt_lib0clear(&___nl__im__186);
#line 397
c_rt_lib0clear(&___nl__im__187);
#line 397
c_rt_lib0clear(&___nl__im__188);
#line 397
c_rt_lib0clear(&___nl__im__193);
#line 397
c_rt_lib0clear(&___nl__im__194);
#line 397
c_rt_lib0clear(&___nl__im__195);
#line 397
c_rt_lib0clear(&___nl__im__242);
#line 397
return ___nl__im__270;
#line 398
goto label_1725;
#line 398
label_1445:
;
#line 399
___nl__int__272 = 0;
#line 399
c_rt_lib0move(&___nl__im__273, c_rt_lib0int_new(___nl__int__272));
#line 399
c_rt_lib0move(&___nl__im__275,___get_global_string_const(36));
#line 399
c_rt_lib0move(&___nl__im__274, c_rt_lib0ov_mk_arg(___get_global_string_const(1192), ___nl__im__275));
#line 399
c_rt_lib0clear(&___nl__im__275);
#line 399
c_rt_lib0move(&___nl__im__271, c_rt_lib0hash_mk(2, ___get_global_string_const(283), ___nl__im__273, ___get_global_string_const(1193), ___nl__im__274));
#line 399
//clear ___nl__int__272;
#line 399
c_rt_lib0clear(&___nl__im__273);
#line 399
c_rt_lib0clear(&___nl__im__274);
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
//clear ___nl__int__18;
#line 399
c_rt_lib0clear(&___nl__im__19);
#line 399
c_rt_lib0clear(&___nl__im__23);
#line 399
//clear ___nl__bool__24;
#line 399
c_rt_lib0clear(&___nl__im__25);
#line 399
c_rt_lib0clear(&___nl__im__36);
#line 399
c_rt_lib0clear(&___nl__im__38);
#line 399
c_rt_lib0clear(&___nl__im__39);
#line 399
c_rt_lib0clear(&___nl__im__44);
#line 399
c_rt_lib0clear(&___nl__im__45);
#line 399
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__60);
#line 399
c_rt_lib0clear(&___nl__im__61);
#line 399
c_rt_lib0clear(&___nl__im__62);
#line 399
c_rt_lib0clear(&___nl__im__80);
#line 399
c_rt_lib0clear(&___nl__im__81);
#line 399
c_rt_lib0clear(&___nl__im__82);
#line 399
c_rt_lib0clear(&___nl__im__172);
#line 399
c_rt_lib0clear(&___nl__im__173);
#line 399
c_rt_lib0clear(&___nl__im__174);
#line 399
c_rt_lib0clear(&___nl__im__179);
#line 399
c_rt_lib0clear(&___nl__im__180);
#line 399
c_rt_lib0clear(&___nl__im__181);
#line 399
c_rt_lib0clear(&___nl__im__186);
#line 399
c_rt_lib0clear(&___nl__im__187);
#line 399
c_rt_lib0clear(&___nl__im__188);
#line 399
c_rt_lib0clear(&___nl__im__193);
#line 399
c_rt_lib0clear(&___nl__im__194);
#line 399
c_rt_lib0clear(&___nl__im__195);
#line 399
c_rt_lib0clear(&___nl__im__242);
#line 399
c_rt_lib0clear(&___nl__im__270);
#line 399
return ___nl__im__271;
#line 400
goto label_1725;
#line 400
label_1511:
;
#line 400
c_rt_lib0move(&___nl__im__277, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(229)));
#line 400
c_rt_lib0copy(&___nl__im__276, ___nl__im__277);
#line 401
c_rt_lib0move(&___nl__im__279,___get_global_string_const(36));
#line 401
c_rt_lib0move(&___nl__im__280,___get_global_string_const(36));
#line 401
c_rt_lib0move(&___nl__im__278, pretty_printer_priv0get_compressed_fun_val(___nl__im__0, ___nl__im__279, ___nl__im__280));
#line 401
c_rt_lib0clear(&___nl__im__279);
#line 401
c_rt_lib0clear(&___nl__im__280);
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
//clear ___nl__int__18;
#line 401
c_rt_lib0clear(&___nl__im__19);
#line 401
c_rt_lib0clear(&___nl__im__23);
#line 401
//clear ___nl__bool__24;
#line 401
c_rt_lib0clear(&___nl__im__25);
#line 401
c_rt_lib0clear(&___nl__im__36);
#line 401
c_rt_lib0clear(&___nl__im__38);
#line 401
c_rt_lib0clear(&___nl__im__39);
#line 401
c_rt_lib0clear(&___nl__im__44);
#line 401
c_rt_lib0clear(&___nl__im__45);
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
c_rt_lib0clear(&___nl__im__60);
#line 401
c_rt_lib0clear(&___nl__im__61);
#line 401
c_rt_lib0clear(&___nl__im__62);
#line 401
c_rt_lib0clear(&___nl__im__80);
#line 401
c_rt_lib0clear(&___nl__im__81);
#line 401
c_rt_lib0clear(&___nl__im__82);
#line 401
c_rt_lib0clear(&___nl__im__172);
#line 401
c_rt_lib0clear(&___nl__im__173);
#line 401
c_rt_lib0clear(&___nl__im__174);
#line 401
c_rt_lib0clear(&___nl__im__179);
#line 401
c_rt_lib0clear(&___nl__im__180);
#line 401
c_rt_lib0clear(&___nl__im__181);
#line 401
c_rt_lib0clear(&___nl__im__186);
#line 401
c_rt_lib0clear(&___nl__im__187);
#line 401
c_rt_lib0clear(&___nl__im__188);
#line 401
c_rt_lib0clear(&___nl__im__193);
#line 401
c_rt_lib0clear(&___nl__im__194);
#line 401
c_rt_lib0clear(&___nl__im__195);
#line 401
c_rt_lib0clear(&___nl__im__242);
#line 401
c_rt_lib0clear(&___nl__im__270);
#line 401
c_rt_lib0clear(&___nl__im__271);
#line 401
c_rt_lib0clear(&___nl__im__276);
#line 401
c_rt_lib0clear(&___nl__im__277);
#line 401
return ___nl__im__278;
#line 402
goto label_1725;
#line 402
label_1578:
;
#line 402
c_rt_lib0move(&___nl__im__282, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(230)));
#line 402
c_rt_lib0copy(&___nl__im__281, ___nl__im__282);
#line 403
c_rt_lib0move(&___nl__im__284, pretty_printer_priv0join_print_hash_elem(___nl__im__281));
#line 403
c_rt_lib0move(&___nl__im__285,___get_global_string_const(304));
#line 403
c_rt_lib0move(&___nl__im__286,___get_global_string_const(305));
#line 403
c_rt_lib0move(&___nl__im__283, wprinter0build_pretty_arr_decl(___nl__im__284, ___nl__im__285, ___nl__im__286));
#line 403
c_rt_lib0clear(&___nl__im__284);
#line 403
c_rt_lib0clear(&___nl__im__285);
#line 403
c_rt_lib0clear(&___nl__im__286);
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
//clear ___nl__int__18;
#line 403
c_rt_lib0clear(&___nl__im__19);
#line 403
c_rt_lib0clear(&___nl__im__23);
#line 403
//clear ___nl__bool__24;
#line 403
c_rt_lib0clear(&___nl__im__25);
#line 403
c_rt_lib0clear(&___nl__im__36);
#line 403
c_rt_lib0clear(&___nl__im__38);
#line 403
c_rt_lib0clear(&___nl__im__39);
#line 403
c_rt_lib0clear(&___nl__im__44);
#line 403
c_rt_lib0clear(&___nl__im__45);
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
c_rt_lib0clear(&___nl__im__60);
#line 403
c_rt_lib0clear(&___nl__im__61);
#line 403
c_rt_lib0clear(&___nl__im__62);
#line 403
c_rt_lib0clear(&___nl__im__80);
#line 403
c_rt_lib0clear(&___nl__im__81);
#line 403
c_rt_lib0clear(&___nl__im__82);
#line 403
c_rt_lib0clear(&___nl__im__172);
#line 403
c_rt_lib0clear(&___nl__im__173);
#line 403
c_rt_lib0clear(&___nl__im__174);
#line 403
c_rt_lib0clear(&___nl__im__179);
#line 403
c_rt_lib0clear(&___nl__im__180);
#line 403
c_rt_lib0clear(&___nl__im__181);
#line 403
c_rt_lib0clear(&___nl__im__186);
#line 403
c_rt_lib0clear(&___nl__im__187);
#line 403
c_rt_lib0clear(&___nl__im__188);
#line 403
c_rt_lib0clear(&___nl__im__193);
#line 403
c_rt_lib0clear(&___nl__im__194);
#line 403
c_rt_lib0clear(&___nl__im__195);
#line 403
c_rt_lib0clear(&___nl__im__242);
#line 403
c_rt_lib0clear(&___nl__im__270);
#line 403
c_rt_lib0clear(&___nl__im__271);
#line 403
c_rt_lib0clear(&___nl__im__276);
#line 403
c_rt_lib0clear(&___nl__im__277);
#line 403
c_rt_lib0clear(&___nl__im__278);
#line 403
c_rt_lib0clear(&___nl__im__281);
#line 403
c_rt_lib0clear(&___nl__im__282);
#line 403
return ___nl__im__283;
#line 404
goto label_1725;
#line 404
label_1650:
;
#line 404
c_rt_lib0move(&___nl__im__288, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1006)));
#line 404
c_rt_lib0copy(&___nl__im__287, ___nl__im__288);
#line 405
c_rt_lib0move(&___nl__im__291, c_rt_lib0hash_get_value_dec(___nl__im__287, ___get_global_string_const(166)));
#line 405
c_rt_lib0move(&___nl__im__292, c_rt_lib0hash_get_value_dec(___nl__im__287, ___get_global_string_const(150)));
#line 405
c_rt_lib0move(&___nl__im__290, pretty_printer_priv0get_fun_label(___nl__im__291, ___nl__im__292));
#line 405
c_rt_lib0clear(&___nl__im__291);
#line 405
c_rt_lib0clear(&___nl__im__292);
#line 405
c_rt_lib0move(&___nl__im__289, wprinter0build_sim(___nl__im__290));
#line 405
c_rt_lib0clear(&___nl__im__290);
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
//clear ___nl__int__18;
#line 405
c_rt_lib0clear(&___nl__im__19);
#line 405
c_rt_lib0clear(&___nl__im__23);
#line 405
//clear ___nl__bool__24;
#line 405
c_rt_lib0clear(&___nl__im__25);
#line 405
c_rt_lib0clear(&___nl__im__36);
#line 405
c_rt_lib0clear(&___nl__im__38);
#line 405
c_rt_lib0clear(&___nl__im__39);
#line 405
c_rt_lib0clear(&___nl__im__44);
#line 405
c_rt_lib0clear(&___nl__im__45);
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
c_rt_lib0clear(&___nl__im__60);
#line 405
c_rt_lib0clear(&___nl__im__61);
#line 405
c_rt_lib0clear(&___nl__im__62);
#line 405
c_rt_lib0clear(&___nl__im__80);
#line 405
c_rt_lib0clear(&___nl__im__81);
#line 405
c_rt_lib0clear(&___nl__im__82);
#line 405
c_rt_lib0clear(&___nl__im__172);
#line 405
c_rt_lib0clear(&___nl__im__173);
#line 405
c_rt_lib0clear(&___nl__im__174);
#line 405
c_rt_lib0clear(&___nl__im__179);
#line 405
c_rt_lib0clear(&___nl__im__180);
#line 405
c_rt_lib0clear(&___nl__im__181);
#line 405
c_rt_lib0clear(&___nl__im__186);
#line 405
c_rt_lib0clear(&___nl__im__187);
#line 405
c_rt_lib0clear(&___nl__im__188);
#line 405
c_rt_lib0clear(&___nl__im__193);
#line 405
c_rt_lib0clear(&___nl__im__194);
#line 405
c_rt_lib0clear(&___nl__im__195);
#line 405
c_rt_lib0clear(&___nl__im__242);
#line 405
c_rt_lib0clear(&___nl__im__270);
#line 405
c_rt_lib0clear(&___nl__im__271);
#line 405
c_rt_lib0clear(&___nl__im__276);
#line 405
c_rt_lib0clear(&___nl__im__277);
#line 405
c_rt_lib0clear(&___nl__im__278);
#line 405
c_rt_lib0clear(&___nl__im__281);
#line 405
c_rt_lib0clear(&___nl__im__282);
#line 405
c_rt_lib0clear(&___nl__im__283);
#line 405
c_rt_lib0clear(&___nl__im__287);
#line 405
c_rt_lib0clear(&___nl__im__288);
#line 405
return ___nl__im__289;
#line 406
goto label_1725;
#line 406
label_1725:
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
#line 412
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 413
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 414
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 414
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__10));
#line 414
c_rt_lib0clear(&___nl__im__10);
#line 414
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(3, ___nl__im__7, ___nl__im__8, ___nl__im__9));
#line 414
c_rt_lib0clear(&___nl__im__7);
#line 414
c_rt_lib0clear(&___nl__im__8);
#line 414
c_rt_lib0clear(&___nl__im__9);
#line 416
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 416
___nl__int__13 = 0;
#line 416
___nl__int__14 = ___nl__int__12 > ___nl__int__13;
#line 416
___nl__bool__11 = ___nl__int__14;
#line 416
//clear ___nl__int__12;
#line 416
//clear ___nl__int__13;
#line 416
//clear ___nl__int__14;
#line 416
___nl__bool__11 = !___nl__bool__11;
#line 416
if(___nl__bool__11){ goto label_24;}
#line 416
c_rt_lib0move(&___nl__im__16,___get_global_string_const(467));
#line 416
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 416
c_rt_lib0clear(&___nl__im__16);
#line 416
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__15));
#line 416
c_rt_lib0clear(&___nl__im__15);
#line 416
goto label_24;
#line 416
label_24:
;
#line 416
//clear ___nl__bool__11;
#line 417
___nl__int__18 = c_rt_lib0array_len(___nl__im__3);
#line 417
___nl__int__19 = 0;
#line 417
___nl__int__20 = ___nl__int__18 > ___nl__int__19;
#line 417
___nl__bool__17 = ___nl__int__20;
#line 417
//clear ___nl__int__18;
#line 417
//clear ___nl__int__19;
#line 417
//clear ___nl__int__20;
#line 417
___nl__bool__17 = !___nl__bool__17;
#line 417
if(___nl__bool__17){ goto label_41;}
#line 417
c_rt_lib0move(&___nl__im__22,___get_global_string_const(455));
#line 417
c_rt_lib0move(&___nl__im__21, wprinter0build_sim(___nl__im__22));
#line 417
c_rt_lib0clear(&___nl__im__22);
#line 417
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__21));
#line 417
c_rt_lib0clear(&___nl__im__21);
#line 417
goto label_41;
#line 417
label_41:
;
#line 417
//clear ___nl__bool__17;
#line 418
c_rt_lib0move(&___nl__im__23, pretty_printer_priv0print_val(___nl__im__4));
#line 418
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__23));
#line 418
c_rt_lib0clear(&___nl__im__23);
#line 419
___nl__int__25 = c_rt_lib0array_len(___nl__im__3);
#line 419
___nl__int__26 = 0;
#line 419
___nl__int__27 = ___nl__int__25 > ___nl__int__26;
#line 419
___nl__bool__24 = ___nl__int__27;
#line 419
//clear ___nl__int__25;
#line 419
//clear ___nl__int__26;
#line 419
//clear ___nl__int__27;
#line 419
___nl__bool__24 = !___nl__bool__24;
#line 419
if(___nl__bool__24){ goto label_61;}
#line 419
c_rt_lib0move(&___nl__im__29,___get_global_string_const(320));
#line 419
c_rt_lib0move(&___nl__im__28, wprinter0build_sim(___nl__im__29));
#line 419
c_rt_lib0clear(&___nl__im__29);
#line 419
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__28));
#line 419
c_rt_lib0clear(&___nl__im__28);
#line 419
goto label_61;
#line 419
label_61:
;
#line 419
//clear ___nl__bool__24;
#line 421
c_rt_lib0move(&___nl__im__32, pretty_printer_priv0print_simple_statement(___nl__im__2));
#line 422
c_rt_lib0move(&___nl__im__33, wprinter0get_sep());
#line 423
c_rt_lib0move(&___nl__im__34, wprinter0build_pretty_op_l(___nl__im__6));
#line 423
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(3, ___nl__im__32, ___nl__im__33, ___nl__im__34));
#line 423
c_rt_lib0clear(&___nl__im__32);
#line 423
c_rt_lib0clear(&___nl__im__33);
#line 423
c_rt_lib0clear(&___nl__im__34);
#line 423
c_rt_lib0move(&___nl__im__30, wprinter0build_pretty_a(___nl__im__31));
#line 423
c_rt_lib0clear(&___nl__im__31);
#line 423
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__30, ___nl__int__5));
#line 423
c_rt_lib0clear(&___nl__im__30);
#line 425
c_rt_lib0move(&___nl__im__35,___get_global_string_const(440));
#line 425
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__35));
#line 425
c_rt_lib0clear(&___nl__im__35);
#line 425
c_rt_lib0clear(&___nl__im__1);
#line 425
c_rt_lib0clear(&___nl__im__2);
#line 425
c_rt_lib0clear(&___nl__im__3);
#line 425
c_rt_lib0clear(&___nl__im__4);
#line 425
//clear ___nl__int__5;
#line 425
c_rt_lib0clear(&___nl__im__6);
#line 425
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
#line 430
c_rt_lib0move(&___nl__im__7, wprinter0build_sim(___nl__im__1));
#line 430
c_rt_lib0move(&___nl__im__8, wprinter0get_sep());
#line 430
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 430
c_rt_lib0clear(&___nl__im__7);
#line 430
c_rt_lib0clear(&___nl__im__8);
#line 431
c_rt_lib0move(&___nl__im__9, pretty_printer_priv0join_print_var_decl(___nl__im__3));
#line 431
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__9));
#line 431
c_rt_lib0clear(&___nl__im__9);
#line 432
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 432
___nl__int__12 = 0;
#line 432
___nl__int__13 = ___nl__int__11 > ___nl__int__12;
#line 432
___nl__bool__10 = ___nl__int__13;
#line 432
//clear ___nl__int__11;
#line 432
//clear ___nl__int__12;
#line 432
//clear ___nl__int__13;
#line 432
___nl__bool__10 = !___nl__bool__10;
#line 432
if(___nl__bool__10){ goto label_23;}
#line 432
c_rt_lib0move(&___nl__im__15,___get_global_string_const(467));
#line 432
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 432
c_rt_lib0clear(&___nl__im__15);
#line 432
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__14));
#line 432
c_rt_lib0clear(&___nl__im__14);
#line 432
goto label_23;
#line 432
label_23:
;
#line 432
//clear ___nl__bool__10;
#line 433
c_rt_lib0move(&___nl__im__17,___get_global_string_const(455));
#line 433
c_rt_lib0move(&___nl__im__16, wprinter0build_sim(___nl__im__17));
#line 433
c_rt_lib0clear(&___nl__im__17);
#line 433
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__16));
#line 433
c_rt_lib0clear(&___nl__im__16);
#line 434
c_rt_lib0move(&___nl__im__18, pretty_printer_priv0print_val(___nl__im__4));
#line 435
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1193)));
#line 435
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(127));
#line 435
c_rt_lib0clear(&___nl__im__20);
#line 435
___nl__bool__19 = !___nl__bool__19;
#line 435
if(___nl__bool__19){ goto label_46;}
#line 436
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1193)));
#line 436
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1193)));
#line 436
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(127)));
#line 436
c_rt_lib0clear(&___nl__im__23);
#line 436
c_rt_lib0clear(&___nl__im__24);
#line 436
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(127)));
#line 436
c_rt_lib0clear(&___nl__im__22);
#line 436
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__21));
#line 436
c_rt_lib0clear(&___nl__im__21);
#line 437
goto label_49;
#line 437
label_46:
;
#line 438
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__18));
#line 439
goto label_49;
#line 439
label_49:
;
#line 439
//clear ___nl__bool__19;
#line 440
c_rt_lib0move(&___nl__im__26,___get_global_string_const(320));
#line 440
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 440
c_rt_lib0clear(&___nl__im__26);
#line 440
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__25));
#line 440
c_rt_lib0clear(&___nl__im__25);
#line 441
c_rt_lib0move(&___nl__im__27, wprinter0build_pretty_l(___nl__im__6));
#line 441
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__27, ___nl__int__5));
#line 441
c_rt_lib0clear(&___nl__im__27);
#line 442
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__2, ___nl__int__5));
#line 442
c_rt_lib0clear(&___nl__im__1);
#line 442
c_rt_lib0clear(&___nl__im__2);
#line 442
c_rt_lib0clear(&___nl__im__3);
#line 442
c_rt_lib0clear(&___nl__im__4);
#line 442
//clear ___nl__int__5;
#line 442
c_rt_lib0clear(&___nl__im__6);
#line 442
c_rt_lib0clear(&___nl__im__18);
#line 442
return NULL;

}

ImmT  pretty_printer_priv0print_loop_or_mod(wprinter0state_t0type* ___ref___im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2,nast0cmd_t0type ___nl__im__3,ImmT  ___nl__im__4,nast0value_t0type ___nl__im__5,INT  ___nl__int__6) {
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
c_rt_lib0arg_val(___nl__im__5);
pretty_printer_priv0__const__init();
bool  ___nl__bool__7 = false;
#line 447
___nl__bool__7 = ___nl__bool__1;
#line 447
___nl__bool__7 = !___nl__bool__7;
#line 447
if(___nl__bool__7){ goto label_5;}
#line 448
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 449
goto label_8;
#line 449
label_5:
;
#line 450
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__int__6));
#line 451
goto label_8;
#line 451
label_8:
;
#line 451
//clear ___nl__bool__7;
#line 451
//clear ___nl__bool__1;
#line 451
c_rt_lib0clear(&___nl__im__2);
#line 451
c_rt_lib0clear(&___nl__im__3);
#line 451
c_rt_lib0clear(&___nl__im__4);
#line 451
c_rt_lib0clear(&___nl__im__5);
#line 451
//clear ___nl__int__6;
#line 451
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
#line 455
c_rt_lib0move(&___nl__im__3, wprinter0build_sim(___nl__im__1));
#line 455
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__3));
#line 455
c_rt_lib0clear(&___nl__im__3);
#line 456
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(719));
#line 456
if(___nl__bool__4){ goto label_12;}
#line 458
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(997));
#line 458
if(___nl__bool__4){ goto label_23;}
#line 460
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(996));
#line 460
if(___nl__bool__4){ goto label_34;}
#line 460
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 460
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__0));
#line 460
nl_die_arg(___nl__im__5);
#line 456
label_12:
;
#line 456
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(719)));
#line 456
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 457
c_rt_lib0move(&___nl__im__9, wprinter0get_sep());
#line 457
c_rt_lib0move(&___nl__im__10, pretty_printer_priv0print_var_decl(___nl__im__6));
#line 457
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__10));
#line 457
c_rt_lib0clear(&___nl__im__9);
#line 457
c_rt_lib0clear(&___nl__im__10);
#line 457
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__8));
#line 457
c_rt_lib0clear(&___nl__im__8);
#line 458
goto label_59;
#line 458
label_23:
;
#line 458
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(997)));
#line 458
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 459
c_rt_lib0move(&___nl__im__14, wprinter0get_sep());
#line 459
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_val(___nl__im__11));
#line 459
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__15));
#line 459
c_rt_lib0clear(&___nl__im__14);
#line 459
c_rt_lib0clear(&___nl__im__15);
#line 459
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__13));
#line 459
c_rt_lib0clear(&___nl__im__13);
#line 460
goto label_59;
#line 460
label_34:
;
#line 460
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(996)));
#line 460
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 462
c_rt_lib0move(&___nl__im__19, wprinter0get_sep());
#line 463
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(274)));
#line 463
c_rt_lib0move(&___nl__im__20, pretty_printer_priv0print_val(___nl__im__21));
#line 463
c_rt_lib0clear(&___nl__im__21);
#line 464
c_rt_lib0move(&___nl__im__22, wprinter0get_sep());
#line 465
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(552)));
#line 465
c_rt_lib0move(&___nl__im__23, wprinter0build_sim(___nl__im__24));
#line 465
c_rt_lib0clear(&___nl__im__24);
#line 466
c_rt_lib0move(&___nl__im__25, wprinter0get_sep());
#line 467
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(275)));
#line 467
c_rt_lib0move(&___nl__im__26, pretty_printer_priv0print_val(___nl__im__27));
#line 467
c_rt_lib0clear(&___nl__im__27);
#line 467
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(6, ___nl__im__19, ___nl__im__20, ___nl__im__22, ___nl__im__23, ___nl__im__25, ___nl__im__26));
#line 467
c_rt_lib0clear(&___nl__im__19);
#line 467
c_rt_lib0clear(&___nl__im__20);
#line 467
c_rt_lib0clear(&___nl__im__22);
#line 467
c_rt_lib0clear(&___nl__im__23);
#line 467
c_rt_lib0clear(&___nl__im__25);
#line 467
c_rt_lib0clear(&___nl__im__26);
#line 467
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__18));
#line 467
c_rt_lib0clear(&___nl__im__18);
#line 469
goto label_59;
#line 469
label_59:
;
#line 470
c_rt_lib0move(&___nl__im__28, wprinter0build_pretty_l(___nl__im__2));
#line 470
c_rt_lib0clear(&___nl__im__0);
#line 470
c_rt_lib0clear(&___nl__im__1);
#line 470
c_rt_lib0clear(&___nl__im__2);
#line 470
//clear ___nl__bool__4;
#line 470
c_rt_lib0clear(&___nl__im__5);
#line 470
c_rt_lib0clear(&___nl__im__6);
#line 470
c_rt_lib0clear(&___nl__im__7);
#line 470
c_rt_lib0clear(&___nl__im__11);
#line 470
c_rt_lib0clear(&___nl__im__12);
#line 470
c_rt_lib0clear(&___nl__im__16);
#line 470
c_rt_lib0clear(&___nl__im__17);
#line 470
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
#line 474
c_rt_lib0move(&___nl__im__3,___get_global_string_const(246));
#line 474
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 474
c_rt_lib0clear(&___nl__im__3);
#line 474
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 474
c_rt_lib0clear(&___nl__im__2);
#line 475
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 475
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(982));
#line 475
c_rt_lib0clear(&___nl__im__5);
#line 475
___nl__bool__4 = !___nl__bool__4;
#line 475
___nl__bool__4 = !___nl__bool__4;
#line 475
if(___nl__bool__4){ goto label_19;}
#line 476
c_rt_lib0move(&___nl__im__7, wprinter0get_sep());
#line 476
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_val(___nl__im__0));
#line 476
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 476
c_rt_lib0clear(&___nl__im__7);
#line 476
c_rt_lib0clear(&___nl__im__8);
#line 476
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__6));
#line 476
c_rt_lib0clear(&___nl__im__6);
#line 477
goto label_19;
#line 477
label_19:
;
#line 477
//clear ___nl__bool__4;
#line 478
c_rt_lib0move(&___nl__im__9, wprinter0build_pretty_l(___nl__im__1));
#line 478
c_rt_lib0clear(&___nl__im__0);
#line 478
c_rt_lib0clear(&___nl__im__1);
#line 478
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
#line 482
c_rt_lib0move(&___nl__im__1, pretty_printer_priv0print_val(___nl__im__0));
#line 483
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1193)));
#line 483
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 483
c_rt_lib0clear(&___nl__im__3);
#line 483
___nl__bool__2 = !___nl__bool__2;
#line 483
if(___nl__bool__2){ goto label_16;}
#line 484
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1193)));
#line 484
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1193)));
#line 484
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(127)));
#line 484
c_rt_lib0clear(&___nl__im__6);
#line 484
c_rt_lib0clear(&___nl__im__7);
#line 484
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(127)));
#line 484
c_rt_lib0clear(&___nl__im__5);
#line 484
c_rt_lib0move(&___nl__im__1, wprinter0build_pretty_l(___nl__im__4));
#line 484
c_rt_lib0clear(&___nl__im__4);
#line 485
goto label_16;
#line 485
label_16:
;
#line 485
//clear ___nl__bool__2;
#line 486
c_rt_lib0clear(&___nl__im__0);
#line 486
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
#line 490
c_rt_lib0move(&___nl__im__1,___get_global_string_const(977));
#line 490
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 490
c_rt_lib0clear(&___nl__im__1);
#line 490
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
#line 494
c_rt_lib0move(&___nl__im__1,___get_global_string_const(978));
#line 494
c_rt_lib0move(&___nl__im__0, wprinter0build_sim(___nl__im__1));
#line 494
c_rt_lib0clear(&___nl__im__1);
#line 494
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 498
c_rt_lib0move(&___nl__im__3,___get_global_string_const(247));
#line 498
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 498
c_rt_lib0clear(&___nl__im__3);
#line 498
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 498
c_rt_lib0clear(&___nl__im__2);
#line 504
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 504
___nl__int__6 = 0;
#line 504
___nl__int__7 = ___nl__int__5 > ___nl__int__6;
#line 504
___nl__bool__4 = ___nl__int__7;
#line 504
//clear ___nl__int__5;
#line 504
//clear ___nl__int__6;
#line 504
//clear ___nl__int__7;
#line 504
___nl__bool__4 = !___nl__bool__4;
#line 504
if(___nl__bool__4){ goto label_30;}
#line 500
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
#line 500
c_rt_lib0move(&___nl__im__9, wprinter0build_sim(___nl__im__10));
#line 500
c_rt_lib0clear(&___nl__im__10);
#line 501
c_rt_lib0move(&___nl__im__12, pretty_printer_priv0join_print_val(___nl__im__0));
#line 501
c_rt_lib0move(&___nl__im__11, wprinter0build_pretty_l(___nl__im__12));
#line 501
c_rt_lib0clear(&___nl__im__12);
#line 502
c_rt_lib0move(&___nl__im__14,___get_global_string_const(320));
#line 502
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 502
c_rt_lib0clear(&___nl__im__14);
#line 502
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__11, ___nl__im__13));
#line 502
c_rt_lib0clear(&___nl__im__9);
#line 502
c_rt_lib0clear(&___nl__im__11);
#line 502
c_rt_lib0clear(&___nl__im__13);
#line 502
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__8));
#line 502
c_rt_lib0clear(&___nl__im__8);
#line 502
goto label_30;
#line 502
label_30:
;
#line 502
//clear ___nl__bool__4;
#line 505
c_rt_lib0move(&___nl__im__15, wprinter0build_pretty_a(___nl__im__1));
#line 505
c_rt_lib0clear(&___nl__im__0);
#line 505
c_rt_lib0clear(&___nl__im__1);
#line 505
return ___nl__im__15;
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
#line 509
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 509
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(218));
#line 509
c_rt_lib0clear(&___nl__im__2);
#line 509
___nl__bool__1 = !___nl__bool__1;
#line 509
if(___nl__bool__1){ goto label_16;}
#line 510
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 510
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 510
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(218)));
#line 510
c_rt_lib0clear(&___nl__im__5);
#line 510
c_rt_lib0clear(&___nl__im__6);
#line 510
c_rt_lib0move(&___nl__im__3, pretty_printer_priv0print_sim_value(___nl__im__4));
#line 510
c_rt_lib0clear(&___nl__im__4);
#line 510
c_rt_lib0clear(&___nl__im__0);
#line 510
//clear ___nl__bool__1;
#line 510
return ___nl__im__3;
#line 511
goto label_135;
#line 511
label_16:
;
#line 511
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 511
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(246));
#line 511
c_rt_lib0clear(&___nl__im__7);
#line 511
___nl__bool__1 = !___nl__bool__1;
#line 511
if(___nl__bool__1){ goto label_34;}
#line 512
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 512
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 512
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(246)));
#line 512
c_rt_lib0clear(&___nl__im__10);
#line 512
c_rt_lib0clear(&___nl__im__11);
#line 512
c_rt_lib0move(&___nl__im__8, pretty_printer_priv0print_return(___nl__im__9));
#line 512
c_rt_lib0clear(&___nl__im__9);
#line 512
c_rt_lib0clear(&___nl__im__0);
#line 512
//clear ___nl__bool__1;
#line 512
c_rt_lib0clear(&___nl__im__3);
#line 512
return ___nl__im__8;
#line 513
goto label_135;
#line 513
label_34:
;
#line 513
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 513
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(977));
#line 513
c_rt_lib0clear(&___nl__im__12);
#line 513
___nl__bool__1 = !___nl__bool__1;
#line 513
if(___nl__bool__1){ goto label_47;}
#line 514
c_rt_lib0move(&___nl__im__13, pretty_printer_priv0print_break());
#line 514
c_rt_lib0clear(&___nl__im__0);
#line 514
//clear ___nl__bool__1;
#line 514
c_rt_lib0clear(&___nl__im__3);
#line 514
c_rt_lib0clear(&___nl__im__8);
#line 514
return ___nl__im__13;
#line 515
goto label_135;
#line 515
label_47:
;
#line 515
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 515
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(978));
#line 515
c_rt_lib0clear(&___nl__im__14);
#line 515
___nl__bool__1 = !___nl__bool__1;
#line 515
if(___nl__bool__1){ goto label_61;}
#line 516
c_rt_lib0move(&___nl__im__15, pretty_printer_priv0print_continue());
#line 516
c_rt_lib0clear(&___nl__im__0);
#line 516
//clear ___nl__bool__1;
#line 516
c_rt_lib0clear(&___nl__im__3);
#line 516
c_rt_lib0clear(&___nl__im__8);
#line 516
c_rt_lib0clear(&___nl__im__13);
#line 516
return ___nl__im__15;
#line 517
goto label_135;
#line 517
label_61:
;
#line 517
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 517
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(247));
#line 517
c_rt_lib0clear(&___nl__im__16);
#line 517
___nl__bool__1 = !___nl__bool__1;
#line 517
if(___nl__bool__1){ goto label_82;}
#line 518
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 518
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 518
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(247)));
#line 518
c_rt_lib0clear(&___nl__im__19);
#line 518
c_rt_lib0clear(&___nl__im__20);
#line 518
c_rt_lib0move(&___nl__im__17, pretty_printer_priv0print_die(___nl__im__18));
#line 518
c_rt_lib0clear(&___nl__im__18);
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
c_rt_lib0clear(&___nl__im__15);
#line 518
return ___nl__im__17;
#line 519
goto label_135;
#line 519
label_82:
;
#line 519
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 519
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(981));
#line 519
c_rt_lib0clear(&___nl__im__21);
#line 519
___nl__bool__1 = !___nl__bool__1;
#line 519
if(___nl__bool__1){ goto label_106;}
#line 520
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 520
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 520
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(981)));
#line 520
c_rt_lib0clear(&___nl__im__24);
#line 520
c_rt_lib0clear(&___nl__im__25);
#line 520
c_rt_lib0move(&___nl__im__26,___get_global_string_const(981));
#line 520
c_rt_lib0move(&___nl__im__22, pretty_printer_priv0print_try_ensure(___nl__im__23, ___nl__im__26));
#line 520
c_rt_lib0clear(&___nl__im__23);
#line 520
c_rt_lib0clear(&___nl__im__26);
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
c_rt_lib0clear(&___nl__im__17);
#line 520
return ___nl__im__22;
#line 521
goto label_135;
#line 521
label_106:
;
#line 521
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 521
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(176));
#line 521
c_rt_lib0clear(&___nl__im__27);
#line 521
___nl__bool__1 = !___nl__bool__1;
#line 521
if(___nl__bool__1){ goto label_131;}
#line 522
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 522
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 522
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(176)));
#line 522
c_rt_lib0clear(&___nl__im__30);
#line 522
c_rt_lib0clear(&___nl__im__31);
#line 522
c_rt_lib0move(&___nl__im__32,___get_global_string_const(176));
#line 522
c_rt_lib0move(&___nl__im__28, pretty_printer_priv0print_try_ensure(___nl__im__29, ___nl__im__32));
#line 522
c_rt_lib0clear(&___nl__im__29);
#line 522
c_rt_lib0clear(&___nl__im__32);
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
c_rt_lib0clear(&___nl__im__22);
#line 522
return ___nl__im__28;
#line 523
goto label_135;
#line 523
label_131:
;
#line 524
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(1, ___nl__im__0));
#line 524
nl_die_arg(___nl__im__33);
#line 525
goto label_135;
#line 525
label_135:
;
#line 525
//clear ___nl__bool__1;
#line 525
c_rt_lib0clear(&___nl__im__3);
#line 525
c_rt_lib0clear(&___nl__im__8);
#line 525
c_rt_lib0clear(&___nl__im__13);
#line 525
c_rt_lib0clear(&___nl__im__15);
#line 525
c_rt_lib0clear(&___nl__im__17);
#line 525
c_rt_lib0clear(&___nl__im__22);
#line 525
c_rt_lib0clear(&___nl__im__28);
#line 525
c_rt_lib0clear(&___nl__im__33);
return NULL;

}

ImmT  pretty_printer_priv0flush_sim_statement(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
pretty_printer_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 529
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__1, ___nl__int__2));
#line 530
c_rt_lib0move(&___nl__im__3,___get_global_string_const(440));
#line 530
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__3));
#line 530
c_rt_lib0clear(&___nl__im__3);
#line 530
c_rt_lib0clear(&___nl__im__1);
#line 530
//clear ___nl__int__2;
#line 530
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
#line 534
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(226)));
#line 534
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(969));
#line 534
if(___nl__bool__4){ goto label_44;}
#line 544
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(974));
#line 544
if(___nl__bool__4){ goto label_100;}
#line 546
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(970));
#line 546
if(___nl__bool__4){ goto label_117;}
#line 565
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(980));
#line 565
if(___nl__bool__4){ goto label_176;}
#line 572
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(982));
#line 572
if(___nl__bool__4){ goto label_223;}
#line 574
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(979));
#line 574
if(___nl__bool__4){ goto label_228;}
#line 585
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(971));
#line 585
if(___nl__bool__4){ goto label_278;}
#line 587
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(972));
#line 587
if(___nl__bool__4){ goto label_297;}
#line 590
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(973));
#line 590
if(___nl__bool__4){ goto label_318;}
#line 592
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(158));
#line 592
if(___nl__bool__4){ goto label_337;}
#line 595
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(975));
#line 595
if(___nl__bool__4){ goto label_345;}
#line 597
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(976));
#line 597
if(___nl__bool__4){ goto label_358;}
#line 599
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(218));
#line 599
if(___nl__bool__4){ goto label_371;}
#line 601
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(981));
#line 601
if(___nl__bool__4){ goto label_378;}
#line 603
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(176));
#line 603
if(___nl__bool__4){ goto label_387;}
#line 605
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(246));
#line 605
if(___nl__bool__4){ goto label_396;}
#line 607
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(977));
#line 607
if(___nl__bool__4){ goto label_403;}
#line 609
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(978));
#line 609
if(___nl__bool__4){ goto label_408;}
#line 611
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(247));
#line 611
if(___nl__bool__4){ goto label_413;}
#line 613
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(252));
#line 613
if(___nl__bool__4){ goto label_420;}
#line 613
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 613
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 613
nl_die_arg(___nl__im__5);
#line 534
label_44:
;
#line 534
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(969)));
#line 534
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 535
c_rt_lib0move(&___nl__im__8,___get_global_string_const(969));
#line 535
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(969)));
#line 535
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 535
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(983)));
#line 535
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__int__2));
#line 535
c_rt_lib0clear(&___nl__im__8);
#line 535
c_rt_lib0clear(&___nl__im__9);
#line 535
c_rt_lib0clear(&___nl__im__10);
#line 535
c_rt_lib0clear(&___nl__im__11);
#line 536
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(984)));
#line 536
___nl__int__14 = 0;
#line 536
___nl__int__15 = 1;
#line 536
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 536
label_60:
;
#line 536
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 536
___nl__bool__17 = ___nl__int__18;
#line 536
if(___nl__bool__17){ goto label_81;}
#line 536
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 536
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 537
c_rt_lib0move(&___nl__im__20,___get_global_string_const(467));
#line 537
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__20));
#line 537
c_rt_lib0clear(&___nl__im__20);
#line 538
c_rt_lib0move(&___nl__im__21,___get_global_string_const(984));
#line 538
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(226)));
#line 538
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 538
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(983)));
#line 538
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__int__2));
#line 538
c_rt_lib0clear(&___nl__im__21);
#line 538
c_rt_lib0clear(&___nl__im__22);
#line 538
c_rt_lib0clear(&___nl__im__23);
#line 538
c_rt_lib0clear(&___nl__im__24);
#line 538
c_rt_lib0clear(&___nl__im__13);
#line 539
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 539
goto label_60;
#line 539
label_81:
;
#line 540
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(985)));
#line 540
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(226)));
#line 540
c_rt_lib0clear(&___nl__im__27);
#line 540
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(982));
#line 540
c_rt_lib0clear(&___nl__im__26);
#line 540
___nl__bool__25 = !___nl__bool__25;
#line 540
___nl__bool__25 = !___nl__bool__25;
#line 540
if(___nl__bool__25){ goto label_97;}
#line 541
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1194));
#line 541
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__28));
#line 541
c_rt_lib0clear(&___nl__im__28);
#line 542
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(985)));
#line 542
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__29, ___nl__int__2));
#line 542
c_rt_lib0clear(&___nl__im__29);
#line 543
goto label_97;
#line 543
label_97:
;
#line 543
//clear ___nl__bool__25;
#line 544
goto label_427;
#line 544
label_100:
;
#line 544
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(974)));
#line 544
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 545
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(1051)));
#line 545
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__33);
#line 545
c_rt_lib0clear(&___nl__im__33);
#line 545
c_rt_lib0move(&___nl__im__34,___get_global_string_const(974));
#line 545
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(226)));
#line 545
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 545
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(983)));
#line 545
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__32, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__int__2));
#line 545
//clear ___nl__bool__32;
#line 545
c_rt_lib0clear(&___nl__im__34);
#line 545
c_rt_lib0clear(&___nl__im__35);
#line 545
c_rt_lib0clear(&___nl__im__36);
#line 545
c_rt_lib0clear(&___nl__im__37);
#line 546
goto label_427;
#line 546
label_117:
;
#line 546
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(970)));
#line 546
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 548
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(986)));
#line 548
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(218));
#line 548
if(___nl__bool__42){ goto label_128;}
#line 550
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(252));
#line 550
if(___nl__bool__42){ goto label_133;}
#line 550
c_rt_lib0move(&___nl__im__43,___get_global_string_const(15));
#line 550
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(2, ___nl__im__43, ___nl__im__41));
#line 550
nl_die_arg(___nl__im__43);
#line 548
label_128:
;
#line 548
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__41, ___get_global_string_const(218)));
#line 548
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 549
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_val(___nl__im__44));
#line 550
goto label_138;
#line 550
label_133:
;
#line 550
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__41, ___get_global_string_const(252)));
#line 550
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 551
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_var_decl(___nl__im__46));
#line 552
goto label_138;
#line 552
label_138:
;
#line 554
c_rt_lib0move(&___nl__im__51,___get_global_string_const(1195));
#line 554
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__51));
#line 554
c_rt_lib0clear(&___nl__im__51);
#line 556
c_rt_lib0move(&___nl__im__53,___get_global_string_const(440));
#line 556
c_rt_lib0move(&___nl__im__52, wprinter0build_sim(___nl__im__53));
#line 556
c_rt_lib0clear(&___nl__im__53);
#line 557
c_rt_lib0move(&___nl__im__54, wprinter0get_sep());
#line 558
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(983)));
#line 558
c_rt_lib0move(&___nl__im__55, pretty_printer_priv0print_val(___nl__im__56));
#line 558
c_rt_lib0clear(&___nl__im__56);
#line 559
c_rt_lib0move(&___nl__im__58,___get_global_string_const(440));
#line 559
c_rt_lib0move(&___nl__im__57, wprinter0build_sim(___nl__im__58));
#line 559
c_rt_lib0clear(&___nl__im__58);
#line 560
c_rt_lib0move(&___nl__im__59, wprinter0get_sep());
#line 561
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(362)));
#line 561
c_rt_lib0move(&___nl__im__60, pretty_printer_priv0print_val(___nl__im__61));
#line 561
c_rt_lib0clear(&___nl__im__61);
#line 562
c_rt_lib0move(&___nl__im__63,___get_global_string_const(1196));
#line 562
c_rt_lib0move(&___nl__im__62, wprinter0build_sim(___nl__im__63));
#line 562
c_rt_lib0clear(&___nl__im__63);
#line 562
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(9, ___nl__im__50, ___nl__im__40, ___nl__im__52, ___nl__im__54, ___nl__im__55, ___nl__im__57, ___nl__im__59, ___nl__im__60, ___nl__im__62));
#line 562
c_rt_lib0clear(&___nl__im__50);
#line 562
c_rt_lib0clear(&___nl__im__52);
#line 562
c_rt_lib0clear(&___nl__im__54);
#line 562
c_rt_lib0clear(&___nl__im__55);
#line 562
c_rt_lib0clear(&___nl__im__57);
#line 562
c_rt_lib0clear(&___nl__im__59);
#line 562
c_rt_lib0clear(&___nl__im__60);
#line 562
c_rt_lib0clear(&___nl__im__62);
#line 562
c_rt_lib0move(&___nl__im__48, wprinter0build_pretty_a(___nl__im__49));
#line 562
c_rt_lib0clear(&___nl__im__49);
#line 562
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__48, ___nl__int__2));
#line 562
c_rt_lib0clear(&___nl__im__48);
#line 564
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(226)));
#line 564
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__64, ___nl__int__2));
#line 564
c_rt_lib0clear(&___nl__im__64);
#line 565
goto label_427;
#line 565
label_176:
;
#line 565
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(980)));
#line 565
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 566
c_rt_lib0move(&___nl__im__67,___get_global_string_const(304));
#line 566
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__67));
#line 566
c_rt_lib0clear(&___nl__im__67);
#line 567
___nl__int__69 = 0;
#line 567
___nl__int__70 = 1;
#line 567
___nl__int__71 = c_rt_lib0array_len(___nl__im__65);
#line 567
label_185:
;
#line 567
___nl__int__73 = ___nl__int__69 >= ___nl__int__71;
#line 567
___nl__bool__72 = ___nl__int__73;
#line 567
if(___nl__bool__72){ goto label_210;}
#line 567
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_get(___nl__im__65, ___nl__int__69));
#line 567
c_rt_lib0copy(&___nl__im__68, ___nl__im__74);
#line 568
c_rt_lib0move(&___nl__im__76, string0lf());
#line 568
___nl__int__79 = 1;
#line 568
___nl__int__78 = ___nl__int__2 + ___nl__int__79;
#line 568
//clear ___nl__int__79;
#line 568
c_rt_lib0move(&___nl__im__77, pretty_printer_priv0pind(___nl__int__78));
#line 568
//clear ___nl__int__78;
#line 568
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__77));
#line 568
c_rt_lib0clear(&___nl__im__76);
#line 568
c_rt_lib0clear(&___nl__im__77);
#line 568
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__75));
#line 568
c_rt_lib0clear(&___nl__im__75);
#line 569
___nl__int__81 = 1;
#line 569
___nl__int__80 = ___nl__int__2 + ___nl__int__81;
#line 569
//clear ___nl__int__81;
#line 569
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__68, ___nl__int__80));
#line 569
//clear ___nl__int__80;
#line 569
c_rt_lib0clear(&___nl__im__68);
#line 570
___nl__int__69 = ___nl__int__69 + ___nl__int__70;
#line 570
goto label_185;
#line 570
label_210:
;
#line 571
c_rt_lib0move(&___nl__im__84, string0lf());
#line 571
c_rt_lib0move(&___nl__im__85, pretty_printer_priv0pind(___nl__int__2));
#line 571
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 571
c_rt_lib0clear(&___nl__im__84);
#line 571
c_rt_lib0clear(&___nl__im__85);
#line 571
c_rt_lib0move(&___nl__im__86,___get_global_string_const(305));
#line 571
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__86));
#line 571
c_rt_lib0clear(&___nl__im__83);
#line 571
c_rt_lib0clear(&___nl__im__86);
#line 571
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__82));
#line 571
c_rt_lib0clear(&___nl__im__82);
#line 572
goto label_427;
#line 572
label_223:
;
#line 573
c_rt_lib0move(&___nl__im__87,___get_global_string_const(440));
#line 573
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__87));
#line 573
c_rt_lib0clear(&___nl__im__87);
#line 574
goto label_427;
#line 574
label_228:
;
#line 574
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(979)));
#line 574
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 576
c_rt_lib0move(&___nl__im__93,___get_global_string_const(1197));
#line 576
c_rt_lib0move(&___nl__im__92, wprinter0build_sim(___nl__im__93));
#line 576
c_rt_lib0clear(&___nl__im__93);
#line 577
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(223)));
#line 577
c_rt_lib0move(&___nl__im__94, pretty_printer_priv0print_val(___nl__im__95));
#line 577
c_rt_lib0clear(&___nl__im__95);
#line 578
c_rt_lib0move(&___nl__im__97,___get_global_string_const(320));
#line 578
c_rt_lib0move(&___nl__im__96, wprinter0build_sim(___nl__im__97));
#line 578
c_rt_lib0clear(&___nl__im__97);
#line 578
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(3, ___nl__im__92, ___nl__im__94, ___nl__im__96));
#line 578
c_rt_lib0clear(&___nl__im__92);
#line 578
c_rt_lib0clear(&___nl__im__94);
#line 578
c_rt_lib0clear(&___nl__im__96);
#line 578
c_rt_lib0move(&___nl__im__90, wprinter0build_pretty_a(___nl__im__91));
#line 578
c_rt_lib0clear(&___nl__im__91);
#line 578
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__90, ___nl__int__2));
#line 578
c_rt_lib0clear(&___nl__im__90);
#line 580
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(991)));
#line 580
___nl__int__100 = 0;
#line 580
___nl__int__101 = 1;
#line 580
___nl__int__102 = c_rt_lib0array_len(___nl__im__98);
#line 580
label_252:
;
#line 580
___nl__int__104 = ___nl__int__100 >= ___nl__int__102;
#line 580
___nl__bool__103 = ___nl__int__104;
#line 580
if(___nl__bool__103){ goto label_276;}
#line 580
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_get(___nl__im__98, ___nl__int__100));
#line 580
c_rt_lib0copy(&___nl__im__99, ___nl__im__105);
#line 581
c_rt_lib0move(&___nl__im__106,___get_global_string_const(1198));
#line 581
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__106));
#line 581
c_rt_lib0clear(&___nl__im__106);
#line 582
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_string_const(554)));
#line 582
c_rt_lib0move(&___nl__im__107, pretty_printer_priv0print_variant_case_decl(___nl__im__108));
#line 582
c_rt_lib0clear(&___nl__im__108);
#line 582
___nl__int__110 = 1;
#line 582
___nl__int__109 = ___nl__int__2 + ___nl__int__110;
#line 582
//clear ___nl__int__110;
#line 582
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__107, ___nl__int__109));
#line 582
c_rt_lib0clear(&___nl__im__107);
#line 582
//clear ___nl__int__109;
#line 583
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_string_const(226)));
#line 583
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__111, ___nl__int__2));
#line 583
c_rt_lib0clear(&___nl__im__111);
#line 583
c_rt_lib0clear(&___nl__im__99);
#line 584
___nl__int__100 = ___nl__int__100 + ___nl__int__101;
#line 584
goto label_252;
#line 584
label_276:
;
#line 585
goto label_427;
#line 585
label_278:
;
#line 585
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(971)));
#line 585
c_rt_lib0copy(&___nl__im__112, ___nl__im__113);
#line 586
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(1051)));
#line 586
___nl__bool__114 = c_rt_lib0check_true_native(___nl__im__115);
#line 586
c_rt_lib0clear(&___nl__im__115);
#line 586
c_rt_lib0move(&___nl__im__116,___get_global_string_const(971));
#line 586
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(226)));
#line 586
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(362)));
#line 586
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(1, ___nl__im__119));
#line 586
c_rt_lib0clear(&___nl__im__119);
#line 586
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(37)));
#line 586
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__114, ___nl__im__116, ___nl__im__117, ___nl__im__118, ___nl__im__120, ___nl__int__2));
#line 586
//clear ___nl__bool__114;
#line 586
c_rt_lib0clear(&___nl__im__116);
#line 586
c_rt_lib0clear(&___nl__im__117);
#line 586
c_rt_lib0clear(&___nl__im__118);
#line 586
c_rt_lib0clear(&___nl__im__120);
#line 587
goto label_427;
#line 587
label_297:
;
#line 587
c_rt_lib0move(&___nl__im__122, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(972)));
#line 587
c_rt_lib0copy(&___nl__im__121, ___nl__im__122);
#line 588
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(1051)));
#line 588
___nl__bool__123 = c_rt_lib0check_true_native(___nl__im__124);
#line 588
c_rt_lib0clear(&___nl__im__124);
#line 588
c_rt_lib0move(&___nl__im__125,___get_global_string_const(972));
#line 588
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(226)));
#line 588
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(568)));
#line 588
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(223)));
#line 588
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(2, ___nl__im__128, ___nl__im__129));
#line 588
c_rt_lib0clear(&___nl__im__128);
#line 588
c_rt_lib0clear(&___nl__im__129);
#line 588
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(128)));
#line 588
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__123, ___nl__im__125, ___nl__im__126, ___nl__im__127, ___nl__im__130, ___nl__int__2));
#line 588
//clear ___nl__bool__123;
#line 588
c_rt_lib0clear(&___nl__im__125);
#line 588
c_rt_lib0clear(&___nl__im__126);
#line 588
c_rt_lib0clear(&___nl__im__127);
#line 588
c_rt_lib0clear(&___nl__im__130);
#line 590
goto label_427;
#line 590
label_318:
;
#line 590
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(973)));
#line 590
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 591
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(1051)));
#line 591
___nl__bool__133 = c_rt_lib0check_true_native(___nl__im__134);
#line 591
c_rt_lib0clear(&___nl__im__134);
#line 591
c_rt_lib0move(&___nl__im__135,___get_global_string_const(973));
#line 591
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(226)));
#line 591
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(362)));
#line 591
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(1, ___nl__im__138));
#line 591
c_rt_lib0clear(&___nl__im__138);
#line 591
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(988)));
#line 591
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__133, ___nl__im__135, ___nl__im__136, ___nl__im__137, ___nl__im__139, ___nl__int__2));
#line 591
//clear ___nl__bool__133;
#line 591
c_rt_lib0clear(&___nl__im__135);
#line 591
c_rt_lib0clear(&___nl__im__136);
#line 591
c_rt_lib0clear(&___nl__im__137);
#line 591
c_rt_lib0clear(&___nl__im__139);
#line 592
goto label_427;
#line 592
label_337:
;
#line 592
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(158)));
#line 592
c_rt_lib0copy(&___nl__im__140, ___nl__im__141);
#line 593
c_rt_lib0move(&___nl__im__142,___get_global_string_const(158));
#line 593
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__142));
#line 593
c_rt_lib0clear(&___nl__im__142);
#line 594
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__140, ___nl__int__2));
#line 595
goto label_427;
#line 595
label_345:
;
#line 595
c_rt_lib0move(&___nl__im__144, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(975)));
#line 595
c_rt_lib0copy(&___nl__im__143, ___nl__im__144);
#line 596
c_rt_lib0move(&___nl__im__145,___get_global_string_const(969));
#line 596
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(226)));
#line 596
c_rt_lib0move(&___nl__im__147, c_rt_lib0array_mk(0));
#line 596
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(983)));
#line 596
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__145, ___nl__im__146, ___nl__im__147, ___nl__im__148, ___nl__int__2));
#line 596
c_rt_lib0clear(&___nl__im__145);
#line 596
c_rt_lib0clear(&___nl__im__146);
#line 596
c_rt_lib0clear(&___nl__im__147);
#line 596
c_rt_lib0clear(&___nl__im__148);
#line 597
goto label_427;
#line 597
label_358:
;
#line 597
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(976)));
#line 597
c_rt_lib0copy(&___nl__im__149, ___nl__im__150);
#line 598
c_rt_lib0move(&___nl__im__151,___get_global_string_const(1086));
#line 598
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(226)));
#line 598
c_rt_lib0move(&___nl__im__153, c_rt_lib0array_mk(0));
#line 598
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(983)));
#line 598
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__151, ___nl__im__152, ___nl__im__153, ___nl__im__154, ___nl__int__2));
#line 598
c_rt_lib0clear(&___nl__im__151);
#line 598
c_rt_lib0clear(&___nl__im__152);
#line 598
c_rt_lib0clear(&___nl__im__153);
#line 598
c_rt_lib0clear(&___nl__im__154);
#line 599
goto label_427;
#line 599
label_371:
;
#line 599
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(218)));
#line 599
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 600
c_rt_lib0move(&___nl__im__157, pretty_printer_priv0print_sim_value(___nl__im__155));
#line 600
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__157, ___nl__int__2));
#line 600
c_rt_lib0clear(&___nl__im__157);
#line 601
goto label_427;
#line 601
label_378:
;
#line 601
c_rt_lib0move(&___nl__im__159, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(981)));
#line 601
c_rt_lib0copy(&___nl__im__158, ___nl__im__159);
#line 602
c_rt_lib0move(&___nl__im__161,___get_global_string_const(981));
#line 602
c_rt_lib0move(&___nl__im__160, pretty_printer_priv0print_try_ensure(___nl__im__158, ___nl__im__161));
#line 602
c_rt_lib0clear(&___nl__im__161);
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__160, ___nl__int__2));
#line 602
c_rt_lib0clear(&___nl__im__160);
#line 603
goto label_427;
#line 603
label_387:
;
#line 603
c_rt_lib0move(&___nl__im__163, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(176)));
#line 603
c_rt_lib0copy(&___nl__im__162, ___nl__im__163);
#line 604
c_rt_lib0move(&___nl__im__165,___get_global_string_const(176));
#line 604
c_rt_lib0move(&___nl__im__164, pretty_printer_priv0print_try_ensure(___nl__im__162, ___nl__im__165));
#line 604
c_rt_lib0clear(&___nl__im__165);
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__164, ___nl__int__2));
#line 604
c_rt_lib0clear(&___nl__im__164);
#line 605
goto label_427;
#line 605
label_396:
;
#line 605
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(246)));
#line 605
c_rt_lib0copy(&___nl__im__166, ___nl__im__167);
#line 606
c_rt_lib0move(&___nl__im__168, pretty_printer_priv0print_return(___nl__im__166));
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__168, ___nl__int__2));
#line 606
c_rt_lib0clear(&___nl__im__168);
#line 607
goto label_427;
#line 607
label_403:
;
#line 608
c_rt_lib0move(&___nl__im__169, pretty_printer_priv0print_break());
#line 608
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__169, ___nl__int__2));
#line 608
c_rt_lib0clear(&___nl__im__169);
#line 609
goto label_427;
#line 609
label_408:
;
#line 610
c_rt_lib0move(&___nl__im__170, pretty_printer_priv0print_continue());
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__170, ___nl__int__2));
#line 610
c_rt_lib0clear(&___nl__im__170);
#line 611
goto label_427;
#line 611
label_413:
;
#line 611
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(247)));
#line 611
c_rt_lib0copy(&___nl__im__171, ___nl__im__172);
#line 612
c_rt_lib0move(&___nl__im__173, pretty_printer_priv0print_die(___nl__im__171));
#line 612
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__173, ___nl__int__2));
#line 612
c_rt_lib0clear(&___nl__im__173);
#line 613
goto label_427;
#line 613
label_420:
;
#line 613
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(252)));
#line 613
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 614
c_rt_lib0move(&___nl__im__176, pretty_printer_priv0print_var_decl(___nl__im__174));
#line 614
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__176, ___nl__int__2));
#line 614
c_rt_lib0clear(&___nl__im__176);
#line 615
goto label_427;
#line 615
label_427:
;
#line 615
c_rt_lib0clear(&___nl__im__1);
#line 615
//clear ___nl__int__2;
#line 615
c_rt_lib0clear(&___nl__im__3);
#line 615
//clear ___nl__bool__4;
#line 615
c_rt_lib0clear(&___nl__im__5);
#line 615
c_rt_lib0clear(&___nl__im__6);
#line 615
c_rt_lib0clear(&___nl__im__7);
#line 615
c_rt_lib0clear(&___nl__im__12);
#line 615
c_rt_lib0clear(&___nl__im__13);
#line 615
//clear ___nl__int__14;
#line 615
//clear ___nl__int__15;
#line 615
//clear ___nl__int__16;
#line 615
//clear ___nl__bool__17;
#line 615
//clear ___nl__int__18;
#line 615
c_rt_lib0clear(&___nl__im__19);
#line 615
c_rt_lib0clear(&___nl__im__30);
#line 615
c_rt_lib0clear(&___nl__im__31);
#line 615
c_rt_lib0clear(&___nl__im__38);
#line 615
c_rt_lib0clear(&___nl__im__39);
#line 615
c_rt_lib0clear(&___nl__im__40);
#line 615
c_rt_lib0clear(&___nl__im__41);
#line 615
//clear ___nl__bool__42;
#line 615
c_rt_lib0clear(&___nl__im__43);
#line 615
c_rt_lib0clear(&___nl__im__44);
#line 615
c_rt_lib0clear(&___nl__im__45);
#line 615
c_rt_lib0clear(&___nl__im__46);
#line 615
c_rt_lib0clear(&___nl__im__47);
#line 615
c_rt_lib0clear(&___nl__im__65);
#line 615
c_rt_lib0clear(&___nl__im__66);
#line 615
c_rt_lib0clear(&___nl__im__68);
#line 615
//clear ___nl__int__69;
#line 615
//clear ___nl__int__70;
#line 615
//clear ___nl__int__71;
#line 615
//clear ___nl__bool__72;
#line 615
//clear ___nl__int__73;
#line 615
c_rt_lib0clear(&___nl__im__74);
#line 615
c_rt_lib0clear(&___nl__im__88);
#line 615
c_rt_lib0clear(&___nl__im__89);
#line 615
c_rt_lib0clear(&___nl__im__98);
#line 615
c_rt_lib0clear(&___nl__im__99);
#line 615
//clear ___nl__int__100;
#line 615
//clear ___nl__int__101;
#line 615
//clear ___nl__int__102;
#line 615
//clear ___nl__bool__103;
#line 615
//clear ___nl__int__104;
#line 615
c_rt_lib0clear(&___nl__im__105);
#line 615
c_rt_lib0clear(&___nl__im__112);
#line 615
c_rt_lib0clear(&___nl__im__113);
#line 615
c_rt_lib0clear(&___nl__im__121);
#line 615
c_rt_lib0clear(&___nl__im__122);
#line 615
c_rt_lib0clear(&___nl__im__131);
#line 615
c_rt_lib0clear(&___nl__im__132);
#line 615
c_rt_lib0clear(&___nl__im__140);
#line 615
c_rt_lib0clear(&___nl__im__141);
#line 615
c_rt_lib0clear(&___nl__im__143);
#line 615
c_rt_lib0clear(&___nl__im__144);
#line 615
c_rt_lib0clear(&___nl__im__149);
#line 615
c_rt_lib0clear(&___nl__im__150);
#line 615
c_rt_lib0clear(&___nl__im__155);
#line 615
c_rt_lib0clear(&___nl__im__156);
#line 615
c_rt_lib0clear(&___nl__im__158);
#line 615
c_rt_lib0clear(&___nl__im__159);
#line 615
c_rt_lib0clear(&___nl__im__162);
#line 615
c_rt_lib0clear(&___nl__im__163);
#line 615
c_rt_lib0clear(&___nl__im__166);
#line 615
c_rt_lib0clear(&___nl__im__167);
#line 615
c_rt_lib0clear(&___nl__im__171);
#line 615
c_rt_lib0clear(&___nl__im__172);
#line 615
c_rt_lib0clear(&___nl__im__174);
#line 615
c_rt_lib0clear(&___nl__im__175);
#line 615
return NULL;

}

bool  pretty_printer_priv0is_proper_hash_key(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
pretty_printer_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
#line 619
___nl__int__2 = string0length(___nl__im__0);
#line 619
___nl__int__3 = 0;
#line 619
___nl__int__4 = ___nl__int__2 == ___nl__int__3;
#line 619
___nl__bool__1 = ___nl__int__4;
#line 619
//clear ___nl__int__2;
#line 619
//clear ___nl__int__3;
#line 619
//clear ___nl__int__4;
#line 619
___nl__bool__1 = !___nl__bool__1;
#line 619
if(___nl__bool__1){ goto label_14;}
#line 619
___nl__bool__5 = false;
#line 619
c_rt_lib0clear(&___nl__im__0);
#line 619
//clear ___nl__bool__1;
#line 619
return ___nl__bool__5;
#line 619
goto label_14;
#line 619
label_14:
;
#line 619
//clear ___nl__bool__1;
#line 619
//clear ___nl__bool__5;
#line 620
___nl__int__8 = 0;
#line 620
___nl__int__9 = 1;
#line 620
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 620
//clear ___nl__int__8;
#line 620
//clear ___nl__int__9;
#line 620
___nl__bool__6 = string0is_letter(___nl__im__7);
#line 620
c_rt_lib0clear(&___nl__im__7);
#line 620
___nl__bool__6 = !___nl__bool__6;
#line 620
___nl__bool__6 = !___nl__bool__6;
#line 620
if(___nl__bool__6){ goto label_32;}
#line 620
___nl__bool__10 = false;
#line 620
c_rt_lib0clear(&___nl__im__0);
#line 620
//clear ___nl__bool__6;
#line 620
return ___nl__bool__10;
#line 620
goto label_32;
#line 620
label_32:
;
#line 620
//clear ___nl__bool__6;
#line 620
//clear ___nl__bool__10;
#line 621
c_rt_lib0move(&___nl__im__11, string0to_array(___nl__im__0));
#line 621
___nl__int__13 = 0;
#line 621
___nl__int__14 = 1;
#line 621
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 621
label_39:
;
#line 621
___nl__int__17 = ___nl__int__13 >= ___nl__int__15;
#line 621
___nl__bool__16 = ___nl__int__17;
#line 621
if(___nl__bool__16){ goto label_76;}
#line 621
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 621
c_rt_lib0copy(&___nl__im__12, ___nl__im__18);
#line 622
___nl__bool__19 = string0is_letter(___nl__im__12);
#line 622
if(___nl__bool__19){ goto label_48;}
#line 622
___nl__bool__19 = string0is_digit(___nl__im__12);
#line 622
label_48:
;
#line 622
if(___nl__bool__19){ goto label_53;}
#line 622
c_rt_lib0move(&___nl__im__20,___get_global_string_const(107));
#line 622
___nl__bool__19 = c_rt_lib0eq(___nl__im__12, ___nl__im__20);
#line 622
c_rt_lib0clear(&___nl__im__20);
#line 622
label_53:
;
#line 622
___nl__bool__19 = !___nl__bool__19;
#line 622
___nl__bool__19 = !___nl__bool__19;
#line 622
if(___nl__bool__19){ goto label_70;}
#line 622
___nl__bool__21 = false;
#line 622
c_rt_lib0clear(&___nl__im__0);
#line 622
c_rt_lib0clear(&___nl__im__11);
#line 622
c_rt_lib0clear(&___nl__im__12);
#line 622
//clear ___nl__int__13;
#line 622
//clear ___nl__int__14;
#line 622
//clear ___nl__int__15;
#line 622
//clear ___nl__bool__16;
#line 622
//clear ___nl__int__17;
#line 622
c_rt_lib0clear(&___nl__im__18);
#line 622
//clear ___nl__bool__19;
#line 622
return ___nl__bool__21;
#line 622
goto label_70;
#line 622
label_70:
;
#line 622
//clear ___nl__bool__19;
#line 622
//clear ___nl__bool__21;
#line 622
c_rt_lib0clear(&___nl__im__12);
#line 623
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 623
goto label_39;
#line 623
label_76:
;
#line 624
___nl__bool__22 = true;
#line 624
c_rt_lib0clear(&___nl__im__0);
#line 624
c_rt_lib0clear(&___nl__im__11);
#line 624
c_rt_lib0clear(&___nl__im__12);
#line 624
//clear ___nl__int__13;
#line 624
//clear ___nl__int__14;
#line 624
//clear ___nl__int__15;
#line 624
//clear ___nl__bool__16;
#line 624
//clear ___nl__int__17;
#line 624
c_rt_lib0clear(&___nl__im__18);
#line 624
return ___nl__bool__22;
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
