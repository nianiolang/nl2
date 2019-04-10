
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__7, ___get_global_string_const(1188), ___nl__im__8, ___get_global_string_const(1138), ___nl__im__9));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1189));
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
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__39, ___get_global_string_const(983)));
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
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__55, ___get_global_string_const(1188), ___nl__im__33, ___get_global_string_const(1138), ___nl__im__60));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1035)));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1035)));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1190));
#line 52
c_rt_lib0move(&___nl__im__17, string0lf());
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 52
c_rt_lib0clear(&___nl__im__16);
#line 52
c_rt_lib0clear(&___nl__im__17);
#line 52
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1191));
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
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1190));
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
c_rt_lib0move(&___nl__im__35,___get_global_string_const(1189));
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
c_rt_lib0move(&___nl__im__12,___get_global_string_const(724));
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
c_rt_lib0move(&___nl__im__42,___get_global_string_const(528));
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
c_rt_lib0move(&___nl__im__66,___get_global_string_const(528));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(505));
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
c_rt_lib0move(&___nl__im__15,___get_global_string_const(528));
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
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1015));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
#line 158
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(218)));
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
#line 158
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(218)));
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(1007)));
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
c_rt_lib0move(&___nl__im__13,___get_global_string_const(612));
#line 159
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 159
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0move(&___nl__im__14,___get_global_string_const(612));
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
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 172
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(218)));
#line 172
c_rt_lib0clear(&___nl__im__6);
#line 172
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(985));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(570));
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
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 174
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(218)));
#line 174
c_rt_lib0clear(&___nl__im__13);
#line 174
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(985));
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
c_rt_lib0move(&___nl__im__15,___get_global_string_const(569));
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
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
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
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
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
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 178
c_rt_lib0move(&___nl__im__25,___get_global_string_const(528));
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
c_rt_lib0move(&___nl__im__32,___get_global_string_const(528));
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
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 183
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(218)));
#line 183
c_rt_lib0clear(&___nl__im__36);
#line 183
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(985));
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
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(528));
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(612));
#line 261
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1192));
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
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(965));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(965)));
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
c_rt_lib0move(&___nl__im__14,___get_global_string_const(929));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1193));
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
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1029));
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
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1028));
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
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
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
bool  ___nl__bool__87 = false;
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
bool  ___nl__bool__116 = false;
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
ImmT  ___nl__im__203 = NULL;
bool  ___nl__bool__204 = false;
INT  ___nl__int__205 = 0;
ImmT  ___nl__im__206 = NULL;
INT  ___nl__int__207 = 0;
INT  ___nl__int__208 = 0;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
INT  ___nl__int__212 = 0;
bool  ___nl__bool__213 = false;
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
INT  ___nl__int__224 = 0;
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
INT  ___nl__int__239 = 0;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
INT  ___nl__int__244 = 0;
INT  ___nl__int__245 = 0;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
bool  ___nl__bool__252 = false;
bool  ___nl__bool__253 = false;
INT  ___nl__int__254 = 0;
ImmT  ___nl__im__255 = NULL;
INT  ___nl__int__256 = 0;
ImmT  ___nl__im__257 = NULL;
INT  ___nl__int__258 = 0;
INT  ___nl__int__259 = 0;
ImmT  ___nl__im__260 = NULL;
INT  ___nl__int__261 = 0;
INT  ___nl__int__262 = 0;
bool  ___nl__bool__263 = false;
INT  ___nl__int__264 = 0;
ImmT  ___nl__im__265 = NULL;
INT  ___nl__int__266 = 0;
INT  ___nl__int__267 = 0;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__im__271 = NULL;
INT  ___nl__int__272 = 0;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
INT  ___nl__int__276 = 0;
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
#line 288
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 288
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(221));
#line 288
if(___nl__bool__2){ goto label_38;}
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(404));
#line 290
if(___nl__bool__2){ goto label_54;}
#line 300
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(33));
#line 300
if(___nl__bool__2){ goto label_139;}
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1007));
#line 302
if(___nl__bool__2){ goto label_176;}
#line 305
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(560));
#line 305
if(___nl__bool__2){ goto label_223;}
#line 307
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(505));
#line 307
if(___nl__bool__2){ goto label_259;}
#line 309
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1004));
#line 309
if(___nl__bool__2){ goto label_298;}
#line 311
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1006));
#line 311
if(___nl__bool__2){ goto label_352;}
#line 319
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(234));
#line 319
if(___nl__bool__2){ goto label_431;}
#line 370
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1011));
#line 370
if(___nl__bool__2){ goto label_936;}
#line 372
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1010));
#line 372
if(___nl__bool__2){ goto label_995;}
#line 374
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1008));
#line 374
if(___nl__bool__2){ goto label_1057;}
#line 376
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(965));
#line 376
if(___nl__bool__2){ goto label_1122;}
#line 400
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(985));
#line 400
if(___nl__bool__2){ goto label_1538;}
#line 402
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(229));
#line 402
if(___nl__bool__2){ goto label_1607;}
#line 404
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(230));
#line 404
if(___nl__bool__2){ goto label_1677;}
#line 406
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1009));
#line 406
if(___nl__bool__2){ goto label_1752;}
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
goto label_1830;
#line 290
label_54:
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
label_62:
;
#line 292
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 292
___nl__bool__17 = ___nl__int__18;
#line 292
if(___nl__bool__17){ goto label_78;}
#line 292
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 292
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 293
c_rt_lib0move(&___nl__im__21,___get_global_string_const(612));
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
goto label_62;
#line 294
label_78:
;
#line 295
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1044)));
#line 295
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(1043));
#line 295
if(___nl__bool__24){ goto label_87;}
#line 296
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(1042));
#line 296
if(___nl__bool__24){ goto label_89;}
#line 296
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 296
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__23));
#line 296
nl_die_arg(___nl__im__25);
#line 295
label_87:
;
#line 296
goto label_112;
#line 296
label_89:
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
c_rt_lib0move(&___nl__im__31,___get_global_string_const(612));
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
goto label_112;
#line 298
label_112:
;
#line 299
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(1044)));
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
goto label_1830;
#line 300
label_139:
;
#line 300
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(33)));
#line 300
___nl__bool__38 = c_rt_lib0check_true_native(___nl__im__39);
#line 301
if(___nl__bool__38){ goto label_145;}
#line 301
c_rt_lib0move(&___nl__im__41,___get_global_string_const(569));
#line 301
goto label_147;
#line 301
label_145:
;
#line 301
c_rt_lib0move(&___nl__im__41,___get_global_string_const(570));
#line 301
label_147:
;
#line 301
c_rt_lib0move(&___nl__im__40, wprinter0build_sim(___nl__im__41));
#line 301
c_rt_lib0clear(&___nl__im__41);
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
//clear ___nl__int__18;
#line 301
c_rt_lib0clear(&___nl__im__19);
#line 301
c_rt_lib0clear(&___nl__im__23);
#line 301
//clear ___nl__bool__24;
#line 301
c_rt_lib0clear(&___nl__im__25);
#line 301
c_rt_lib0clear(&___nl__im__36);
#line 301
//clear ___nl__bool__38;
#line 301
c_rt_lib0clear(&___nl__im__39);
#line 301
return ___nl__im__40;
#line 302
goto label_1830;
#line 302
label_176:
;
#line 302
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1007)));
#line 302
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 303
___nl__bool__44 = pretty_printer_priv0is_proper_hash_key(___nl__im__42);
#line 303
___nl__bool__44 = !___nl__bool__44;
#line 303
___nl__bool__44 = !___nl__bool__44;
#line 303
if(___nl__bool__44){ goto label_191;}
#line 303
c_rt_lib0move(&___nl__im__46,___get_global_string_const(612));
#line 303
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__42));
#line 303
c_rt_lib0clear(&___nl__im__46);
#line 303
c_rt_lib0move(&___nl__im__47,___get_global_string_const(612));
#line 303
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__45, ___nl__im__47));
#line 303
c_rt_lib0clear(&___nl__im__45);
#line 303
c_rt_lib0clear(&___nl__im__47);
#line 303
goto label_191;
#line 303
label_191:
;
#line 303
//clear ___nl__bool__44;
#line 304
c_rt_lib0move(&___nl__im__48, wprinter0build_sim(___nl__im__42));
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
//clear ___nl__bool__38;
#line 304
c_rt_lib0clear(&___nl__im__39);
#line 304
c_rt_lib0clear(&___nl__im__40);
#line 304
c_rt_lib0clear(&___nl__im__42);
#line 304
c_rt_lib0clear(&___nl__im__43);
#line 304
return ___nl__im__48;
#line 305
goto label_1830;
#line 305
label_223:
;
#line 305
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(560)));
#line 305
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 306
c_rt_lib0move(&___nl__im__51, pretty_printer_priv0print_variant(___nl__im__49));
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
//clear ___nl__bool__38;
#line 306
c_rt_lib0clear(&___nl__im__39);
#line 306
c_rt_lib0clear(&___nl__im__40);
#line 306
c_rt_lib0clear(&___nl__im__42);
#line 306
c_rt_lib0clear(&___nl__im__43);
#line 306
c_rt_lib0clear(&___nl__im__48);
#line 306
c_rt_lib0clear(&___nl__im__49);
#line 306
c_rt_lib0clear(&___nl__im__50);
#line 306
return ___nl__im__51;
#line 307
goto label_1830;
#line 307
label_259:
;
#line 307
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(505)));
#line 307
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 308
c_rt_lib0move(&___nl__im__54, wprinter0build_sim(___nl__im__52));
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
//clear ___nl__bool__38;
#line 308
c_rt_lib0clear(&___nl__im__39);
#line 308
c_rt_lib0clear(&___nl__im__40);
#line 308
c_rt_lib0clear(&___nl__im__42);
#line 308
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__53);
#line 308
return ___nl__im__54;
#line 309
goto label_1830;
#line 309
label_298:
;
#line 309
c_rt_lib0move(&___nl__im__56, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1004)));
#line 309
c_rt_lib0copy(&___nl__im__55, ___nl__im__56);
#line 310
c_rt_lib0move(&___nl__im__60,___get_global_string_const(455));
#line 310
c_rt_lib0move(&___nl__im__59, wprinter0build_sim(___nl__im__60));
#line 310
c_rt_lib0clear(&___nl__im__60);
#line 310
c_rt_lib0move(&___nl__im__61, pretty_printer_priv0print_val(___nl__im__55));
#line 310
c_rt_lib0move(&___nl__im__63,___get_global_string_const(320));
#line 310
c_rt_lib0move(&___nl__im__62, wprinter0build_sim(___nl__im__63));
#line 310
c_rt_lib0clear(&___nl__im__63);
#line 310
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(3, ___nl__im__59, ___nl__im__61, ___nl__im__62));
#line 310
c_rt_lib0clear(&___nl__im__59);
#line 310
c_rt_lib0clear(&___nl__im__61);
#line 310
c_rt_lib0clear(&___nl__im__62);
#line 310
c_rt_lib0move(&___nl__im__57, wprinter0build_pretty_a(___nl__im__58));
#line 310
c_rt_lib0clear(&___nl__im__58);
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
//clear ___nl__int__18;
#line 310
c_rt_lib0clear(&___nl__im__19);
#line 310
c_rt_lib0clear(&___nl__im__23);
#line 310
//clear ___nl__bool__24;
#line 310
c_rt_lib0clear(&___nl__im__25);
#line 310
c_rt_lib0clear(&___nl__im__36);
#line 310
//clear ___nl__bool__38;
#line 310
c_rt_lib0clear(&___nl__im__39);
#line 310
c_rt_lib0clear(&___nl__im__40);
#line 310
c_rt_lib0clear(&___nl__im__42);
#line 310
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__56);
#line 310
return ___nl__im__57;
#line 311
goto label_1830;
#line 311
label_352:
;
#line 311
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1006)));
#line 311
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 313
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(1012)));
#line 313
c_rt_lib0move(&___nl__im__68, pretty_printer_priv0print_val(___nl__im__69));
#line 313
c_rt_lib0clear(&___nl__im__69);
#line 314
c_rt_lib0move(&___nl__im__70, wprinter0get_sep());
#line 315
c_rt_lib0move(&___nl__im__74,___get_global_string_const(1194));
#line 315
c_rt_lib0move(&___nl__im__73, wprinter0build_sim(___nl__im__74));
#line 315
c_rt_lib0clear(&___nl__im__74);
#line 315
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(1013)));
#line 315
c_rt_lib0move(&___nl__im__75, pretty_printer_priv0print_val(___nl__im__76));
#line 315
c_rt_lib0clear(&___nl__im__76);
#line 315
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(2, ___nl__im__73, ___nl__im__75));
#line 315
c_rt_lib0clear(&___nl__im__73);
#line 315
c_rt_lib0clear(&___nl__im__75);
#line 315
c_rt_lib0move(&___nl__im__71, wprinter0build_pretty_op_l(___nl__im__72));
#line 315
c_rt_lib0clear(&___nl__im__72);
#line 316
c_rt_lib0move(&___nl__im__77, wprinter0get_sep());
#line 317
c_rt_lib0move(&___nl__im__81,___get_global_string_const(826));
#line 317
c_rt_lib0move(&___nl__im__80, wprinter0build_sim(___nl__im__81));
#line 317
c_rt_lib0clear(&___nl__im__81);
#line 317
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(1014)));
#line 317
c_rt_lib0move(&___nl__im__82, pretty_printer_priv0print_val(___nl__im__83));
#line 317
c_rt_lib0clear(&___nl__im__83);
#line 317
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_mk(2, ___nl__im__80, ___nl__im__82));
#line 317
c_rt_lib0clear(&___nl__im__80);
#line 317
c_rt_lib0clear(&___nl__im__82);
#line 317
c_rt_lib0move(&___nl__im__78, wprinter0build_pretty_op_l(___nl__im__79));
#line 317
c_rt_lib0clear(&___nl__im__79);
#line 317
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(5, ___nl__im__68, ___nl__im__70, ___nl__im__71, ___nl__im__77, ___nl__im__78));
#line 317
c_rt_lib0clear(&___nl__im__68);
#line 317
c_rt_lib0clear(&___nl__im__70);
#line 317
c_rt_lib0clear(&___nl__im__71);
#line 317
c_rt_lib0clear(&___nl__im__77);
#line 317
c_rt_lib0clear(&___nl__im__78);
#line 317
c_rt_lib0move(&___nl__im__66, wprinter0build_pretty_a(___nl__im__67));
#line 317
c_rt_lib0clear(&___nl__im__67);
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
//clear ___nl__int__18;
#line 317
c_rt_lib0clear(&___nl__im__19);
#line 317
c_rt_lib0clear(&___nl__im__23);
#line 317
//clear ___nl__bool__24;
#line 317
c_rt_lib0clear(&___nl__im__25);
#line 317
c_rt_lib0clear(&___nl__im__36);
#line 317
//clear ___nl__bool__38;
#line 317
c_rt_lib0clear(&___nl__im__39);
#line 317
c_rt_lib0clear(&___nl__im__40);
#line 317
c_rt_lib0clear(&___nl__im__42);
#line 317
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 317
c_rt_lib0clear(&___nl__im__64);
#line 317
c_rt_lib0clear(&___nl__im__65);
#line 317
return ___nl__im__66;
#line 319
goto label_1830;
#line 319
label_431:
;
#line 319
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(234)));
#line 319
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 320
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(558)));
#line 321
c_rt_lib0move(&___nl__im__88,___get_global_string_const(1001));
#line 321
___nl__bool__87 = c_rt_lib0eq(___nl__im__86, ___nl__im__88);
#line 321
c_rt_lib0clear(&___nl__im__88);
#line 321
___nl__bool__87 = !___nl__bool__87;
#line 321
if(___nl__bool__87){ goto label_509;}
#line 323
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 323
c_rt_lib0move(&___nl__im__93, pretty_printer_priv0print_val(___nl__im__94));
#line 323
c_rt_lib0clear(&___nl__im__94);
#line 323
c_rt_lib0move(&___nl__im__96,___get_global_string_const(314));
#line 323
c_rt_lib0move(&___nl__im__95, wprinter0build_sim(___nl__im__96));
#line 323
c_rt_lib0clear(&___nl__im__96);
#line 323
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(2, ___nl__im__93, ___nl__im__95));
#line 323
c_rt_lib0clear(&___nl__im__93);
#line 323
c_rt_lib0clear(&___nl__im__95);
#line 323
c_rt_lib0move(&___nl__im__91, wprinter0build_pretty_l(___nl__im__92));
#line 323
c_rt_lib0clear(&___nl__im__92);
#line 324
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 324
c_rt_lib0move(&___nl__im__97, pretty_printer_priv0print_val(___nl__im__98));
#line 324
c_rt_lib0clear(&___nl__im__98);
#line 325
c_rt_lib0move(&___nl__im__100,___get_global_string_const(315));
#line 325
c_rt_lib0move(&___nl__im__99, wprinter0build_sim(___nl__im__100));
#line 325
c_rt_lib0clear(&___nl__im__100);
#line 325
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(3, ___nl__im__91, ___nl__im__97, ___nl__im__99));
#line 325
c_rt_lib0clear(&___nl__im__91);
#line 325
c_rt_lib0clear(&___nl__im__97);
#line 325
c_rt_lib0clear(&___nl__im__99);
#line 325
c_rt_lib0move(&___nl__im__89, wprinter0build_pretty_a(___nl__im__90));
#line 325
c_rt_lib0clear(&___nl__im__90);
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
//clear ___nl__int__18;
#line 325
c_rt_lib0clear(&___nl__im__19);
#line 325
c_rt_lib0clear(&___nl__im__23);
#line 325
//clear ___nl__bool__24;
#line 325
c_rt_lib0clear(&___nl__im__25);
#line 325
c_rt_lib0clear(&___nl__im__36);
#line 325
//clear ___nl__bool__38;
#line 325
c_rt_lib0clear(&___nl__im__39);
#line 325
c_rt_lib0clear(&___nl__im__40);
#line 325
c_rt_lib0clear(&___nl__im__42);
#line 325
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 325
c_rt_lib0clear(&___nl__im__64);
#line 325
c_rt_lib0clear(&___nl__im__65);
#line 325
c_rt_lib0clear(&___nl__im__66);
#line 325
c_rt_lib0clear(&___nl__im__84);
#line 325
c_rt_lib0clear(&___nl__im__85);
#line 325
c_rt_lib0clear(&___nl__im__86);
#line 325
//clear ___nl__bool__87;
#line 325
return ___nl__im__89;
#line 327
goto label_926;
#line 327
label_509:
;
#line 327
c_rt_lib0move(&___nl__im__101,___get_global_string_const(1002));
#line 327
___nl__bool__87 = c_rt_lib0eq(___nl__im__86, ___nl__im__101);
#line 327
c_rt_lib0clear(&___nl__im__101);
#line 327
___nl__bool__87 = !___nl__bool__87;
#line 327
if(___nl__bool__87){ goto label_585;}
#line 329
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 329
c_rt_lib0move(&___nl__im__106, pretty_printer_priv0print_val(___nl__im__107));
#line 329
c_rt_lib0clear(&___nl__im__107);
#line 329
c_rt_lib0move(&___nl__im__109,___get_global_string_const(304));
#line 329
c_rt_lib0move(&___nl__im__108, wprinter0build_sim(___nl__im__109));
#line 329
c_rt_lib0clear(&___nl__im__109);
#line 329
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(2, ___nl__im__106, ___nl__im__108));
#line 329
c_rt_lib0clear(&___nl__im__106);
#line 329
c_rt_lib0clear(&___nl__im__108);
#line 329
c_rt_lib0move(&___nl__im__104, wprinter0build_pretty_l(___nl__im__105));
#line 329
c_rt_lib0clear(&___nl__im__105);
#line 330
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 330
c_rt_lib0move(&___nl__im__110, pretty_printer_priv0print_val(___nl__im__111));
#line 330
c_rt_lib0clear(&___nl__im__111);
#line 331
c_rt_lib0move(&___nl__im__113,___get_global_string_const(305));
#line 331
c_rt_lib0move(&___nl__im__112, wprinter0build_sim(___nl__im__113));
#line 331
c_rt_lib0clear(&___nl__im__113);
#line 331
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(3, ___nl__im__104, ___nl__im__110, ___nl__im__112));
#line 331
c_rt_lib0clear(&___nl__im__104);
#line 331
c_rt_lib0clear(&___nl__im__110);
#line 331
c_rt_lib0clear(&___nl__im__112);
#line 331
c_rt_lib0move(&___nl__im__102, wprinter0build_pretty_a(___nl__im__103));
#line 331
c_rt_lib0clear(&___nl__im__103);
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
//clear ___nl__int__18;
#line 331
c_rt_lib0clear(&___nl__im__19);
#line 331
c_rt_lib0clear(&___nl__im__23);
#line 331
//clear ___nl__bool__24;
#line 331
c_rt_lib0clear(&___nl__im__25);
#line 331
c_rt_lib0clear(&___nl__im__36);
#line 331
//clear ___nl__bool__38;
#line 331
c_rt_lib0clear(&___nl__im__39);
#line 331
c_rt_lib0clear(&___nl__im__40);
#line 331
c_rt_lib0clear(&___nl__im__42);
#line 331
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 331
c_rt_lib0clear(&___nl__im__64);
#line 331
c_rt_lib0clear(&___nl__im__65);
#line 331
c_rt_lib0clear(&___nl__im__66);
#line 331
c_rt_lib0clear(&___nl__im__84);
#line 331
c_rt_lib0clear(&___nl__im__85);
#line 331
c_rt_lib0clear(&___nl__im__86);
#line 331
//clear ___nl__bool__87;
#line 331
c_rt_lib0clear(&___nl__im__89);
#line 331
return ___nl__im__102;
#line 333
goto label_926;
#line 333
label_585:
;
#line 333
c_rt_lib0move(&___nl__im__114,___get_global_string_const(576));
#line 333
___nl__bool__87 = c_rt_lib0eq(___nl__im__86, ___nl__im__114);
#line 333
c_rt_lib0clear(&___nl__im__114);
#line 333
___nl__bool__87 = !___nl__bool__87;
#line 333
if(___nl__bool__87){ goto label_677;}
#line 335
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 335
___nl__bool__116 = pretty_printer_priv0is_to_change_ov(___nl__im__117);
#line 335
c_rt_lib0clear(&___nl__im__117);
#line 335
___nl__bool__116 = !___nl__bool__116;
#line 335
if(___nl__bool__116){ goto label_612;}
#line 337
c_rt_lib0move(&___nl__im__120,___get_global_string_const(455));
#line 337
c_rt_lib0move(&___nl__im__119, wprinter0build_sim(___nl__im__120));
#line 337
c_rt_lib0clear(&___nl__im__120);
#line 338
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 338
c_rt_lib0move(&___nl__im__121, pretty_printer_priv0print_val(___nl__im__122));
#line 338
c_rt_lib0clear(&___nl__im__122);
#line 339
c_rt_lib0move(&___nl__im__124,___get_global_string_const(320));
#line 339
c_rt_lib0move(&___nl__im__123, wprinter0build_sim(___nl__im__124));
#line 339
c_rt_lib0clear(&___nl__im__124);
#line 339
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(3, ___nl__im__119, ___nl__im__121, ___nl__im__123));
#line 339
c_rt_lib0clear(&___nl__im__119);
#line 339
c_rt_lib0clear(&___nl__im__121);
#line 339
c_rt_lib0clear(&___nl__im__123);
#line 339
c_rt_lib0move(&___nl__im__115, wprinter0build_pretty_a(___nl__im__118));
#line 339
c_rt_lib0clear(&___nl__im__118);
#line 341
goto label_617;
#line 341
label_612:
;
#line 342
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 342
c_rt_lib0move(&___nl__im__115, pretty_printer_priv0print_val(___nl__im__125));
#line 342
c_rt_lib0clear(&___nl__im__125);
#line 343
goto label_617;
#line 343
label_617:
;
#line 343
//clear ___nl__bool__116;
#line 344
c_rt_lib0move(&___nl__im__128, wprinter0build_sim(___nl__im__86));
#line 344
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 344
c_rt_lib0move(&___nl__im__129, pretty_printer_priv0print_val(___nl__im__130));
#line 344
c_rt_lib0clear(&___nl__im__130);
#line 344
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(3, ___nl__im__115, ___nl__im__128, ___nl__im__129));
#line 344
c_rt_lib0clear(&___nl__im__128);
#line 344
c_rt_lib0clear(&___nl__im__129);
#line 344
c_rt_lib0move(&___nl__im__126, wprinter0build_pretty_op_l(___nl__im__127));
#line 344
c_rt_lib0clear(&___nl__im__127);
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
//clear ___nl__int__18;
#line 344
c_rt_lib0clear(&___nl__im__19);
#line 344
c_rt_lib0clear(&___nl__im__23);
#line 344
//clear ___nl__bool__24;
#line 344
c_rt_lib0clear(&___nl__im__25);
#line 344
c_rt_lib0clear(&___nl__im__36);
#line 344
//clear ___nl__bool__38;
#line 344
c_rt_lib0clear(&___nl__im__39);
#line 344
c_rt_lib0clear(&___nl__im__40);
#line 344
c_rt_lib0clear(&___nl__im__42);
#line 344
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 344
c_rt_lib0clear(&___nl__im__64);
#line 344
c_rt_lib0clear(&___nl__im__65);
#line 344
c_rt_lib0clear(&___nl__im__66);
#line 344
c_rt_lib0clear(&___nl__im__84);
#line 344
c_rt_lib0clear(&___nl__im__85);
#line 344
c_rt_lib0clear(&___nl__im__86);
#line 344
//clear ___nl__bool__87;
#line 344
c_rt_lib0clear(&___nl__im__89);
#line 344
c_rt_lib0clear(&___nl__im__102);
#line 344
c_rt_lib0clear(&___nl__im__115);
#line 344
return ___nl__im__126;
#line 345
goto label_926;
#line 345
label_677:
;
#line 345
c_rt_lib0move(&___nl__im__131,___get_global_string_const(1003));
#line 345
___nl__bool__87 = c_rt_lib0eq(___nl__im__86, ___nl__im__131);
#line 345
c_rt_lib0clear(&___nl__im__131);
#line 345
___nl__bool__87 = !___nl__bool__87;
#line 345
if(___nl__bool__87){ goto label_764;}
#line 347
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 347
c_rt_lib0move(&___nl__im__134, pretty_printer_priv0print_val(___nl__im__135));
#line 347
c_rt_lib0clear(&___nl__im__135);
#line 348
c_rt_lib0move(&___nl__im__136, wprinter0get_sep());
#line 349
c_rt_lib0move(&___nl__im__138,___get_global_string_const(1029));
#line 349
c_rt_lib0move(&___nl__im__137, wprinter0build_sim(___nl__im__138));
#line 349
c_rt_lib0clear(&___nl__im__138);
#line 350
c_rt_lib0move(&___nl__im__139, wprinter0get_sep());
#line 351
c_rt_lib0move(&___nl__im__141,___get_global_string_const(528));
#line 351
c_rt_lib0move(&___nl__im__140, wprinter0build_sim(___nl__im__141));
#line 351
c_rt_lib0clear(&___nl__im__141);
#line 352
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 352
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_string_const(218)));
#line 352
c_rt_lib0clear(&___nl__im__145);
#line 352
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 352
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_string_const(218)));
#line 352
c_rt_lib0clear(&___nl__im__147);
#line 352
c_rt_lib0move(&___nl__im__143, c_rt_lib0priv_as(___nl__im__146, ___get_global_string_const(1007)));
#line 352
c_rt_lib0clear(&___nl__im__144);
#line 352
c_rt_lib0clear(&___nl__im__146);
#line 352
c_rt_lib0move(&___nl__im__142, wprinter0build_sim(___nl__im__143));
#line 352
c_rt_lib0clear(&___nl__im__143);
#line 352
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_mk(6, ___nl__im__134, ___nl__im__136, ___nl__im__137, ___nl__im__139, ___nl__im__140, ___nl__im__142));
#line 352
c_rt_lib0clear(&___nl__im__134);
#line 352
c_rt_lib0clear(&___nl__im__136);
#line 352
c_rt_lib0clear(&___nl__im__137);
#line 352
c_rt_lib0clear(&___nl__im__139);
#line 352
c_rt_lib0clear(&___nl__im__140);
#line 352
c_rt_lib0clear(&___nl__im__142);
#line 352
c_rt_lib0move(&___nl__im__132, wprinter0build_pretty_op_l(___nl__im__133));
#line 352
c_rt_lib0clear(&___nl__im__133);
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
//clear ___nl__int__18;
#line 352
c_rt_lib0clear(&___nl__im__19);
#line 352
c_rt_lib0clear(&___nl__im__23);
#line 352
//clear ___nl__bool__24;
#line 352
c_rt_lib0clear(&___nl__im__25);
#line 352
c_rt_lib0clear(&___nl__im__36);
#line 352
//clear ___nl__bool__38;
#line 352
c_rt_lib0clear(&___nl__im__39);
#line 352
c_rt_lib0clear(&___nl__im__40);
#line 352
c_rt_lib0clear(&___nl__im__42);
#line 352
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 352
c_rt_lib0clear(&___nl__im__64);
#line 352
c_rt_lib0clear(&___nl__im__65);
#line 352
c_rt_lib0clear(&___nl__im__66);
#line 352
c_rt_lib0clear(&___nl__im__84);
#line 352
c_rt_lib0clear(&___nl__im__85);
#line 352
c_rt_lib0clear(&___nl__im__86);
#line 352
//clear ___nl__bool__87;
#line 352
c_rt_lib0clear(&___nl__im__89);
#line 352
c_rt_lib0clear(&___nl__im__102);
#line 352
c_rt_lib0clear(&___nl__im__115);
#line 352
c_rt_lib0clear(&___nl__im__126);
#line 352
return ___nl__im__132;
#line 354
goto label_926;
#line 354
label_764:
;
#line 354
c_rt_lib0move(&___nl__im__148,___get_global_string_const(1105));
#line 354
___nl__bool__87 = c_rt_lib0eq(___nl__im__86, ___nl__im__148);
#line 354
c_rt_lib0clear(&___nl__im__148);
#line 354
___nl__bool__87 = !___nl__bool__87;
#line 354
if(___nl__bool__87){ goto label_852;}
#line 356
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 356
c_rt_lib0move(&___nl__im__151, pretty_printer_priv0print_val(___nl__im__152));
#line 356
c_rt_lib0clear(&___nl__im__152);
#line 357
c_rt_lib0move(&___nl__im__153, wprinter0get_sep());
#line 358
c_rt_lib0move(&___nl__im__155,___get_global_string_const(1028));
#line 358
c_rt_lib0move(&___nl__im__154, wprinter0build_sim(___nl__im__155));
#line 358
c_rt_lib0clear(&___nl__im__155);
#line 359
c_rt_lib0move(&___nl__im__156, wprinter0get_sep());
#line 360
c_rt_lib0move(&___nl__im__158,___get_global_string_const(528));
#line 360
c_rt_lib0move(&___nl__im__157, wprinter0build_sim(___nl__im__158));
#line 360
c_rt_lib0clear(&___nl__im__158);
#line 361
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 361
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_string_const(218)));
#line 361
c_rt_lib0clear(&___nl__im__162);
#line 361
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 361
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_string_const(218)));
#line 361
c_rt_lib0clear(&___nl__im__164);
#line 361
c_rt_lib0move(&___nl__im__160, c_rt_lib0priv_as(___nl__im__163, ___get_global_string_const(1007)));
#line 361
c_rt_lib0clear(&___nl__im__161);
#line 361
c_rt_lib0clear(&___nl__im__163);
#line 361
c_rt_lib0move(&___nl__im__159, wprinter0build_sim(___nl__im__160));
#line 361
c_rt_lib0clear(&___nl__im__160);
#line 361
c_rt_lib0move(&___nl__im__150, c_rt_lib0array_mk(6, ___nl__im__151, ___nl__im__153, ___nl__im__154, ___nl__im__156, ___nl__im__157, ___nl__im__159));
#line 361
c_rt_lib0clear(&___nl__im__151);
#line 361
c_rt_lib0clear(&___nl__im__153);
#line 361
c_rt_lib0clear(&___nl__im__154);
#line 361
c_rt_lib0clear(&___nl__im__156);
#line 361
c_rt_lib0clear(&___nl__im__157);
#line 361
c_rt_lib0clear(&___nl__im__159);
#line 361
c_rt_lib0move(&___nl__im__149, wprinter0build_pretty_op_l(___nl__im__150));
#line 361
c_rt_lib0clear(&___nl__im__150);
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
//clear ___nl__int__18;
#line 361
c_rt_lib0clear(&___nl__im__19);
#line 361
c_rt_lib0clear(&___nl__im__23);
#line 361
//clear ___nl__bool__24;
#line 361
c_rt_lib0clear(&___nl__im__25);
#line 361
c_rt_lib0clear(&___nl__im__36);
#line 361
//clear ___nl__bool__38;
#line 361
c_rt_lib0clear(&___nl__im__39);
#line 361
c_rt_lib0clear(&___nl__im__40);
#line 361
c_rt_lib0clear(&___nl__im__42);
#line 361
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 361
c_rt_lib0clear(&___nl__im__64);
#line 361
c_rt_lib0clear(&___nl__im__65);
#line 361
c_rt_lib0clear(&___nl__im__66);
#line 361
c_rt_lib0clear(&___nl__im__84);
#line 361
c_rt_lib0clear(&___nl__im__85);
#line 361
c_rt_lib0clear(&___nl__im__86);
#line 361
//clear ___nl__bool__87;
#line 361
c_rt_lib0clear(&___nl__im__89);
#line 361
c_rt_lib0clear(&___nl__im__102);
#line 361
c_rt_lib0clear(&___nl__im__115);
#line 361
c_rt_lib0clear(&___nl__im__126);
#line 361
c_rt_lib0clear(&___nl__im__132);
#line 361
return ___nl__im__149;
#line 363
goto label_926;
#line 363
label_852:
;
#line 365
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(274)));
#line 365
c_rt_lib0move(&___nl__im__169, pretty_printer_priv0print_val(___nl__im__170));
#line 365
c_rt_lib0clear(&___nl__im__170);
#line 365
c_rt_lib0move(&___nl__im__171, wprinter0get_sep());
#line 365
c_rt_lib0move(&___nl__im__172, wprinter0build_sim(___nl__im__86));
#line 365
c_rt_lib0move(&___nl__im__168, c_rt_lib0array_mk(3, ___nl__im__169, ___nl__im__171, ___nl__im__172));
#line 365
c_rt_lib0clear(&___nl__im__169);
#line 365
c_rt_lib0clear(&___nl__im__171);
#line 365
c_rt_lib0clear(&___nl__im__172);
#line 365
c_rt_lib0move(&___nl__im__167, wprinter0build_pretty_op_l(___nl__im__168));
#line 365
c_rt_lib0clear(&___nl__im__168);
#line 366
c_rt_lib0move(&___nl__im__173, wprinter0get_sep());
#line 367
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(275)));
#line 367
c_rt_lib0move(&___nl__im__174, pretty_printer_priv0print_val(___nl__im__175));
#line 367
c_rt_lib0clear(&___nl__im__175);
#line 367
c_rt_lib0move(&___nl__im__166, c_rt_lib0array_mk(3, ___nl__im__167, ___nl__im__173, ___nl__im__174));
#line 367
c_rt_lib0clear(&___nl__im__167);
#line 367
c_rt_lib0clear(&___nl__im__173);
#line 367
c_rt_lib0clear(&___nl__im__174);
#line 367
c_rt_lib0move(&___nl__im__165, wprinter0build_pretty_op_l(___nl__im__166));
#line 367
c_rt_lib0clear(&___nl__im__166);
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
//clear ___nl__int__18;
#line 367
c_rt_lib0clear(&___nl__im__19);
#line 367
c_rt_lib0clear(&___nl__im__23);
#line 367
//clear ___nl__bool__24;
#line 367
c_rt_lib0clear(&___nl__im__25);
#line 367
c_rt_lib0clear(&___nl__im__36);
#line 367
//clear ___nl__bool__38;
#line 367
c_rt_lib0clear(&___nl__im__39);
#line 367
c_rt_lib0clear(&___nl__im__40);
#line 367
c_rt_lib0clear(&___nl__im__42);
#line 367
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 367
c_rt_lib0clear(&___nl__im__64);
#line 367
c_rt_lib0clear(&___nl__im__65);
#line 367
c_rt_lib0clear(&___nl__im__66);
#line 367
c_rt_lib0clear(&___nl__im__84);
#line 367
c_rt_lib0clear(&___nl__im__85);
#line 367
c_rt_lib0clear(&___nl__im__86);
#line 367
//clear ___nl__bool__87;
#line 367
c_rt_lib0clear(&___nl__im__89);
#line 367
c_rt_lib0clear(&___nl__im__102);
#line 367
c_rt_lib0clear(&___nl__im__115);
#line 367
c_rt_lib0clear(&___nl__im__126);
#line 367
c_rt_lib0clear(&___nl__im__132);
#line 367
c_rt_lib0clear(&___nl__im__149);
#line 367
return ___nl__im__165;
#line 369
goto label_926;
#line 369
label_926:
;
#line 369
//clear ___nl__bool__87;
#line 369
c_rt_lib0clear(&___nl__im__89);
#line 369
c_rt_lib0clear(&___nl__im__102);
#line 369
c_rt_lib0clear(&___nl__im__115);
#line 369
c_rt_lib0clear(&___nl__im__126);
#line 369
c_rt_lib0clear(&___nl__im__132);
#line 369
c_rt_lib0clear(&___nl__im__149);
#line 369
c_rt_lib0clear(&___nl__im__165);
#line 370
goto label_1830;
#line 370
label_936:
;
#line 370
c_rt_lib0move(&___nl__im__177, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1011)));
#line 370
c_rt_lib0copy(&___nl__im__176, ___nl__im__177);
#line 371
c_rt_lib0move(&___nl__im__180, pretty_printer_priv0print_val(___nl__im__176));
#line 371
c_rt_lib0move(&___nl__im__182,___get_global_string_const(189));
#line 371
c_rt_lib0move(&___nl__im__181, wprinter0build_sim(___nl__im__182));
#line 371
c_rt_lib0clear(&___nl__im__182);
#line 371
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_mk(2, ___nl__im__180, ___nl__im__181));
#line 371
c_rt_lib0clear(&___nl__im__180);
#line 371
c_rt_lib0clear(&___nl__im__181);
#line 371
c_rt_lib0move(&___nl__im__178, wprinter0build_pretty_op_l(___nl__im__179));
#line 371
c_rt_lib0clear(&___nl__im__179);
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
//clear ___nl__bool__38;
#line 371
c_rt_lib0clear(&___nl__im__39);
#line 371
c_rt_lib0clear(&___nl__im__40);
#line 371
c_rt_lib0clear(&___nl__im__42);
#line 371
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 371
c_rt_lib0clear(&___nl__im__64);
#line 371
c_rt_lib0clear(&___nl__im__65);
#line 371
c_rt_lib0clear(&___nl__im__66);
#line 371
c_rt_lib0clear(&___nl__im__84);
#line 371
c_rt_lib0clear(&___nl__im__85);
#line 371
c_rt_lib0clear(&___nl__im__86);
#line 371
c_rt_lib0clear(&___nl__im__176);
#line 371
c_rt_lib0clear(&___nl__im__177);
#line 371
return ___nl__im__178;
#line 372
goto label_1830;
#line 372
label_995:
;
#line 372
c_rt_lib0move(&___nl__im__184, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1010)));
#line 372
c_rt_lib0copy(&___nl__im__183, ___nl__im__184);
#line 373
c_rt_lib0move(&___nl__im__187, pretty_printer_priv0print_val(___nl__im__183));
#line 373
c_rt_lib0move(&___nl__im__189,___get_global_string_const(1027));
#line 373
c_rt_lib0move(&___nl__im__188, wprinter0build_sim(___nl__im__189));
#line 373
c_rt_lib0clear(&___nl__im__189);
#line 373
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_mk(2, ___nl__im__187, ___nl__im__188));
#line 373
c_rt_lib0clear(&___nl__im__187);
#line 373
c_rt_lib0clear(&___nl__im__188);
#line 373
c_rt_lib0move(&___nl__im__185, wprinter0build_pretty_op_l(___nl__im__186));
#line 373
c_rt_lib0clear(&___nl__im__186);
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
//clear ___nl__bool__38;
#line 373
c_rt_lib0clear(&___nl__im__39);
#line 373
c_rt_lib0clear(&___nl__im__40);
#line 373
c_rt_lib0clear(&___nl__im__42);
#line 373
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 373
c_rt_lib0clear(&___nl__im__64);
#line 373
c_rt_lib0clear(&___nl__im__65);
#line 373
c_rt_lib0clear(&___nl__im__66);
#line 373
c_rt_lib0clear(&___nl__im__84);
#line 373
c_rt_lib0clear(&___nl__im__85);
#line 373
c_rt_lib0clear(&___nl__im__86);
#line 373
c_rt_lib0clear(&___nl__im__176);
#line 373
c_rt_lib0clear(&___nl__im__177);
#line 373
c_rt_lib0clear(&___nl__im__178);
#line 373
c_rt_lib0clear(&___nl__im__183);
#line 373
c_rt_lib0clear(&___nl__im__184);
#line 373
return ___nl__im__185;
#line 374
goto label_1830;
#line 374
label_1057:
;
#line 374
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1008)));
#line 374
c_rt_lib0copy(&___nl__im__190, ___nl__im__191);
#line 375
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(558)));
#line 375
c_rt_lib0move(&___nl__im__193, wprinter0build_sim(___nl__im__194));
#line 375
c_rt_lib0clear(&___nl__im__194);
#line 375
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__190, ___get_global_string_const(223)));
#line 375
c_rt_lib0move(&___nl__im__195, pretty_printer_priv0print_val(___nl__im__196));
#line 375
c_rt_lib0clear(&___nl__im__196);
#line 375
c_rt_lib0move(&___nl__im__192, wprinter0build_pretty_bind(___nl__im__193, ___nl__im__195));
#line 375
c_rt_lib0clear(&___nl__im__193);
#line 375
c_rt_lib0clear(&___nl__im__195);
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
//clear ___nl__int__18;
#line 375
c_rt_lib0clear(&___nl__im__19);
#line 375
c_rt_lib0clear(&___nl__im__23);
#line 375
//clear ___nl__bool__24;
#line 375
c_rt_lib0clear(&___nl__im__25);
#line 375
c_rt_lib0clear(&___nl__im__36);
#line 375
//clear ___nl__bool__38;
#line 375
c_rt_lib0clear(&___nl__im__39);
#line 375
c_rt_lib0clear(&___nl__im__40);
#line 375
c_rt_lib0clear(&___nl__im__42);
#line 375
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 375
c_rt_lib0clear(&___nl__im__64);
#line 375
c_rt_lib0clear(&___nl__im__65);
#line 375
c_rt_lib0clear(&___nl__im__66);
#line 375
c_rt_lib0clear(&___nl__im__84);
#line 375
c_rt_lib0clear(&___nl__im__85);
#line 375
c_rt_lib0clear(&___nl__im__86);
#line 375
c_rt_lib0clear(&___nl__im__176);
#line 375
c_rt_lib0clear(&___nl__im__177);
#line 375
c_rt_lib0clear(&___nl__im__178);
#line 375
c_rt_lib0clear(&___nl__im__183);
#line 375
c_rt_lib0clear(&___nl__im__184);
#line 375
c_rt_lib0clear(&___nl__im__185);
#line 375
c_rt_lib0clear(&___nl__im__190);
#line 375
c_rt_lib0clear(&___nl__im__191);
#line 375
return ___nl__im__192;
#line 376
goto label_1830;
#line 376
label_1122:
;
#line 376
c_rt_lib0move(&___nl__im__198, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(965)));
#line 376
c_rt_lib0copy(&___nl__im__197, ___nl__im__198);
#line 377
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(166)));
#line 377
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(150)));
#line 377
c_rt_lib0move(&___nl__im__200, pretty_printer_priv0get_fun_label(___nl__im__201, ___nl__im__202));
#line 377
c_rt_lib0clear(&___nl__im__201);
#line 377
c_rt_lib0clear(&___nl__im__202);
#line 377
c_rt_lib0move(&___nl__im__203,___get_global_string_const(455));
#line 377
c_rt_lib0move(&___nl__im__199, c_rt_lib0concat_new(___nl__im__200, ___nl__im__203));
#line 377
c_rt_lib0clear(&___nl__im__200);
#line 377
c_rt_lib0clear(&___nl__im__203);
#line 378
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 378
___nl__int__205 = c_rt_lib0array_len(___nl__im__206);
#line 378
c_rt_lib0clear(&___nl__im__206);
#line 378
___nl__int__207 = 1;
#line 378
___nl__int__208 = ___nl__int__205 == ___nl__int__207;
#line 378
___nl__bool__204 = ___nl__int__208;
#line 378
//clear ___nl__int__205;
#line 378
//clear ___nl__int__207;
#line 378
//clear ___nl__int__208;
#line 378
___nl__bool__204 = !___nl__bool__204;
#line 378
if(___nl__bool__204){ goto label_1229;}
#line 379
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 379
___nl__int__212 = 0;
#line 379
c_rt_lib0move(&___nl__im__210, c_rt_lib0array_get(___nl__im__211, ___nl__int__212));
#line 379
c_rt_lib0clear(&___nl__im__211);
#line 379
//clear ___nl__int__212;
#line 379
c_rt_lib0move(&___nl__im__209, c_rt_lib0hash_get_value_dec(___nl__im__210, ___get_global_string_const(223)));
#line 379
c_rt_lib0clear(&___nl__im__210);
#line 380
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__209, ___get_global_string_const(218)));
#line 380
___nl__bool__213 = c_rt_lib0priv_is(___nl__im__214, ___get_global_string_const(230));
#line 380
c_rt_lib0clear(&___nl__im__214);
#line 380
if(___nl__bool__213){ goto label_1159;}
#line 380
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__209, ___get_global_string_const(218)));
#line 380
___nl__bool__213 = c_rt_lib0priv_is(___nl__im__215, ___get_global_string_const(229));
#line 380
c_rt_lib0clear(&___nl__im__215);
#line 380
label_1159:
;
#line 380
___nl__bool__213 = !___nl__bool__213;
#line 380
if(___nl__bool__213){ goto label_1225;}
#line 381
c_rt_lib0move(&___nl__im__217,___get_global_string_const(320));
#line 381
c_rt_lib0move(&___nl__im__216, pretty_printer_priv0get_compressed_fun_val(___nl__im__209, ___nl__im__199, ___nl__im__217));
#line 381
c_rt_lib0clear(&___nl__im__217);
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
//clear ___nl__int__18;
#line 381
c_rt_lib0clear(&___nl__im__19);
#line 381
c_rt_lib0clear(&___nl__im__23);
#line 381
//clear ___nl__bool__24;
#line 381
c_rt_lib0clear(&___nl__im__25);
#line 381
c_rt_lib0clear(&___nl__im__36);
#line 381
//clear ___nl__bool__38;
#line 381
c_rt_lib0clear(&___nl__im__39);
#line 381
c_rt_lib0clear(&___nl__im__40);
#line 381
c_rt_lib0clear(&___nl__im__42);
#line 381
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 381
c_rt_lib0clear(&___nl__im__64);
#line 381
c_rt_lib0clear(&___nl__im__65);
#line 381
c_rt_lib0clear(&___nl__im__66);
#line 381
c_rt_lib0clear(&___nl__im__84);
#line 381
c_rt_lib0clear(&___nl__im__85);
#line 381
c_rt_lib0clear(&___nl__im__86);
#line 381
c_rt_lib0clear(&___nl__im__176);
#line 381
c_rt_lib0clear(&___nl__im__177);
#line 381
c_rt_lib0clear(&___nl__im__178);
#line 381
c_rt_lib0clear(&___nl__im__183);
#line 381
c_rt_lib0clear(&___nl__im__184);
#line 381
c_rt_lib0clear(&___nl__im__185);
#line 381
c_rt_lib0clear(&___nl__im__190);
#line 381
c_rt_lib0clear(&___nl__im__191);
#line 381
c_rt_lib0clear(&___nl__im__192);
#line 381
c_rt_lib0clear(&___nl__im__197);
#line 381
c_rt_lib0clear(&___nl__im__198);
#line 381
c_rt_lib0clear(&___nl__im__199);
#line 381
//clear ___nl__bool__204;
#line 381
c_rt_lib0clear(&___nl__im__209);
#line 381
//clear ___nl__bool__213;
#line 381
return ___nl__im__216;
#line 382
goto label_1225;
#line 382
label_1225:
;
#line 382
//clear ___nl__bool__213;
#line 382
c_rt_lib0clear(&___nl__im__216);
#line 383
goto label_1347;
#line 383
label_1229:
;
#line 383
___nl__bool__204 = pretty_printer_priv0is_to_change_ov(___nl__im__0);
#line 383
___nl__bool__204 = !___nl__bool__204;
#line 383
if(___nl__bool__204){ goto label_1347;}
#line 385
c_rt_lib0move(&___nl__im__223, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 385
___nl__int__224 = 0;
#line 385
c_rt_lib0move(&___nl__im__222, c_rt_lib0array_get(___nl__im__223, ___nl__int__224));
#line 385
c_rt_lib0clear(&___nl__im__223);
#line 385
//clear ___nl__int__224;
#line 385
c_rt_lib0move(&___nl__im__221, c_rt_lib0hash_get_value_dec(___nl__im__222, ___get_global_string_const(223)));
#line 385
c_rt_lib0clear(&___nl__im__222);
#line 385
c_rt_lib0move(&___nl__im__220, pretty_printer_priv0print_val(___nl__im__221));
#line 385
c_rt_lib0clear(&___nl__im__221);
#line 386
c_rt_lib0move(&___nl__im__225, wprinter0get_sep());
#line 387
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(166)));
#line 387
c_rt_lib0move(&___nl__im__226, wprinter0build_sim(___nl__im__227));
#line 387
c_rt_lib0clear(&___nl__im__227);
#line 388
c_rt_lib0move(&___nl__im__228, wprinter0get_sep());
#line 389
c_rt_lib0move(&___nl__im__231,___get_global_string_const(528));
#line 389
c_rt_lib0move(&___nl__im__238, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 389
___nl__int__239 = 1;
#line 389
c_rt_lib0move(&___nl__im__237, c_rt_lib0array_get(___nl__im__238, ___nl__int__239));
#line 389
c_rt_lib0clear(&___nl__im__238);
#line 389
//clear ___nl__int__239;
#line 389
c_rt_lib0move(&___nl__im__236, c_rt_lib0hash_get_value_dec(___nl__im__237, ___get_global_string_const(223)));
#line 389
c_rt_lib0clear(&___nl__im__237);
#line 389
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__236, ___get_global_string_const(218)));
#line 389
c_rt_lib0clear(&___nl__im__236);
#line 389
c_rt_lib0move(&___nl__im__243, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 389
___nl__int__244 = 1;
#line 389
c_rt_lib0move(&___nl__im__242, c_rt_lib0array_get(___nl__im__243, ___nl__int__244));
#line 389
c_rt_lib0clear(&___nl__im__243);
#line 389
//clear ___nl__int__244;
#line 389
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__242, ___get_global_string_const(223)));
#line 389
c_rt_lib0clear(&___nl__im__242);
#line 389
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__241, ___get_global_string_const(218)));
#line 389
c_rt_lib0clear(&___nl__im__241);
#line 389
c_rt_lib0move(&___nl__im__234, c_rt_lib0priv_as(___nl__im__240, ___get_global_string_const(404)));
#line 389
c_rt_lib0clear(&___nl__im__235);
#line 389
c_rt_lib0clear(&___nl__im__240);
#line 389
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__234, ___get_global_string_const(127)));
#line 389
c_rt_lib0clear(&___nl__im__234);
#line 389
___nl__int__245 = 0;
#line 389
c_rt_lib0move(&___nl__im__232, c_rt_lib0array_get(___nl__im__233, ___nl__int__245));
#line 389
c_rt_lib0clear(&___nl__im__233);
#line 389
//clear ___nl__int__245;
#line 389
c_rt_lib0move(&___nl__im__230, c_rt_lib0concat_new(___nl__im__231, ___nl__im__232));
#line 389
c_rt_lib0clear(&___nl__im__231);
#line 389
c_rt_lib0clear(&___nl__im__232);
#line 389
c_rt_lib0move(&___nl__im__229, wprinter0build_sim(___nl__im__230));
#line 389
c_rt_lib0clear(&___nl__im__230);
#line 389
c_rt_lib0move(&___nl__im__219, c_rt_lib0array_mk(5, ___nl__im__220, ___nl__im__225, ___nl__im__226, ___nl__im__228, ___nl__im__229));
#line 389
c_rt_lib0clear(&___nl__im__220);
#line 389
c_rt_lib0clear(&___nl__im__225);
#line 389
c_rt_lib0clear(&___nl__im__226);
#line 389
c_rt_lib0clear(&___nl__im__228);
#line 389
c_rt_lib0clear(&___nl__im__229);
#line 389
c_rt_lib0move(&___nl__im__218, wprinter0build_pretty_op_l(___nl__im__219));
#line 389
c_rt_lib0clear(&___nl__im__219);
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
//clear ___nl__int__18;
#line 389
c_rt_lib0clear(&___nl__im__19);
#line 389
c_rt_lib0clear(&___nl__im__23);
#line 389
//clear ___nl__bool__24;
#line 389
c_rt_lib0clear(&___nl__im__25);
#line 389
c_rt_lib0clear(&___nl__im__36);
#line 389
//clear ___nl__bool__38;
#line 389
c_rt_lib0clear(&___nl__im__39);
#line 389
c_rt_lib0clear(&___nl__im__40);
#line 389
c_rt_lib0clear(&___nl__im__42);
#line 389
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 389
c_rt_lib0clear(&___nl__im__64);
#line 389
c_rt_lib0clear(&___nl__im__65);
#line 389
c_rt_lib0clear(&___nl__im__66);
#line 389
c_rt_lib0clear(&___nl__im__84);
#line 389
c_rt_lib0clear(&___nl__im__85);
#line 389
c_rt_lib0clear(&___nl__im__86);
#line 389
c_rt_lib0clear(&___nl__im__176);
#line 389
c_rt_lib0clear(&___nl__im__177);
#line 389
c_rt_lib0clear(&___nl__im__178);
#line 389
c_rt_lib0clear(&___nl__im__183);
#line 389
c_rt_lib0clear(&___nl__im__184);
#line 389
c_rt_lib0clear(&___nl__im__185);
#line 389
c_rt_lib0clear(&___nl__im__190);
#line 389
c_rt_lib0clear(&___nl__im__191);
#line 389
c_rt_lib0clear(&___nl__im__192);
#line 389
c_rt_lib0clear(&___nl__im__197);
#line 389
c_rt_lib0clear(&___nl__im__198);
#line 389
c_rt_lib0clear(&___nl__im__199);
#line 389
//clear ___nl__bool__204;
#line 389
c_rt_lib0clear(&___nl__im__209);
#line 389
return ___nl__im__218;
#line 391
goto label_1347;
#line 391
label_1347:
;
#line 391
//clear ___nl__bool__204;
#line 391
c_rt_lib0clear(&___nl__im__209);
#line 391
c_rt_lib0clear(&___nl__im__218);
#line 392
c_rt_lib0move(&___nl__im__247, wprinter0build_sim(___nl__im__199));
#line 392
c_rt_lib0move(&___nl__im__246, c_rt_lib0array_mk(1, ___nl__im__247));
#line 392
c_rt_lib0clear(&___nl__im__247);
#line 393
c_rt_lib0move(&___nl__im__249, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 393
c_rt_lib0move(&___nl__im__248, pretty_printer_priv0join_print_fun_arg(___nl__im__249));
#line 393
c_rt_lib0clear(&___nl__im__249);
#line 393
c_rt_lib0delete(array0append(&___nl__im__246, ___nl__im__248));
#line 393
c_rt_lib0clear(&___nl__im__248);
#line 394
c_rt_lib0move(&___nl__im__251,___get_global_string_const(320));
#line 394
c_rt_lib0move(&___nl__im__250, wprinter0build_sim(___nl__im__251));
#line 394
c_rt_lib0clear(&___nl__im__251);
#line 394
c_rt_lib0delete(array0push(&___nl__im__246, ___nl__im__250));
#line 394
c_rt_lib0clear(&___nl__im__250);
#line 397
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 397
___nl__int__254 = pretty_printer_priv0count_structs(___nl__im__255);
#line 397
c_rt_lib0clear(&___nl__im__255);
#line 397
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 397
___nl__int__256 = c_rt_lib0array_len(___nl__im__257);
#line 397
c_rt_lib0clear(&___nl__im__257);
#line 397
___nl__int__258 = ___nl__int__254 == ___nl__int__256;
#line 397
___nl__bool__252 = ___nl__int__258;
#line 397
//clear ___nl__int__254;
#line 397
//clear ___nl__int__256;
#line 397
//clear ___nl__int__258;
#line 397
___nl__bool__253 = !___nl__bool__252;
#line 397
if(___nl__bool__253){ goto label_1386;}
#line 397
c_rt_lib0move(&___nl__im__260, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 397
___nl__int__259 = c_rt_lib0array_len(___nl__im__260);
#line 397
c_rt_lib0clear(&___nl__im__260);
#line 397
___nl__int__261 = 0;
#line 397
___nl__int__262 = ___nl__int__259 > ___nl__int__261;
#line 397
___nl__bool__252 = ___nl__int__262;
#line 397
//clear ___nl__int__259;
#line 397
//clear ___nl__int__261;
#line 397
//clear ___nl__int__262;
#line 397
label_1386:
;
#line 397
//clear ___nl__bool__253;
#line 397
if(___nl__bool__252){ goto label_1413;}
#line 398
c_rt_lib0move(&___nl__im__265, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 398
___nl__int__264 = c_rt_lib0array_len(___nl__im__265);
#line 398
c_rt_lib0clear(&___nl__im__265);
#line 398
___nl__int__266 = 1;
#line 398
___nl__int__267 = ___nl__int__264 == ___nl__int__266;
#line 398
___nl__bool__252 = ___nl__int__267;
#line 398
//clear ___nl__int__264;
#line 398
//clear ___nl__int__266;
#line 398
//clear ___nl__int__267;
#line 398
___nl__bool__263 = !___nl__bool__252;
#line 398
if(___nl__bool__263){ goto label_1411;}
#line 398
c_rt_lib0move(&___nl__im__271, c_rt_lib0hash_get_value_dec(___nl__im__197, ___get_global_string_const(265)));
#line 398
___nl__int__272 = 0;
#line 398
c_rt_lib0move(&___nl__im__270, c_rt_lib0array_get(___nl__im__271, ___nl__int__272));
#line 398
c_rt_lib0clear(&___nl__im__271);
#line 398
//clear ___nl__int__272;
#line 398
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_get_value_dec(___nl__im__270, ___get_global_string_const(223)));
#line 398
c_rt_lib0clear(&___nl__im__270);
#line 398
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_get_value_dec(___nl__im__269, ___get_global_string_const(218)));
#line 398
c_rt_lib0clear(&___nl__im__269);
#line 398
___nl__bool__252 = c_rt_lib0priv_is(___nl__im__268, ___get_global_string_const(965));
#line 398
c_rt_lib0clear(&___nl__im__268);
#line 398
label_1411:
;
#line 398
//clear ___nl__bool__263;
#line 398
label_1413:
;
#line 398
___nl__bool__252 = !___nl__bool__252;
#line 398
if(___nl__bool__252){ goto label_1476;}
#line 395
c_rt_lib0move(&___nl__im__273, wprinter0build_pretty_op_l(___nl__im__246));
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
//clear ___nl__int__18;
#line 395
c_rt_lib0clear(&___nl__im__19);
#line 395
c_rt_lib0clear(&___nl__im__23);
#line 395
//clear ___nl__bool__24;
#line 395
c_rt_lib0clear(&___nl__im__25);
#line 395
c_rt_lib0clear(&___nl__im__36);
#line 395
//clear ___nl__bool__38;
#line 395
c_rt_lib0clear(&___nl__im__39);
#line 395
c_rt_lib0clear(&___nl__im__40);
#line 395
c_rt_lib0clear(&___nl__im__42);
#line 395
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 395
c_rt_lib0clear(&___nl__im__64);
#line 395
c_rt_lib0clear(&___nl__im__65);
#line 395
c_rt_lib0clear(&___nl__im__66);
#line 395
c_rt_lib0clear(&___nl__im__84);
#line 395
c_rt_lib0clear(&___nl__im__85);
#line 395
c_rt_lib0clear(&___nl__im__86);
#line 395
c_rt_lib0clear(&___nl__im__176);
#line 395
c_rt_lib0clear(&___nl__im__177);
#line 395
c_rt_lib0clear(&___nl__im__178);
#line 395
c_rt_lib0clear(&___nl__im__183);
#line 395
c_rt_lib0clear(&___nl__im__184);
#line 395
c_rt_lib0clear(&___nl__im__185);
#line 395
c_rt_lib0clear(&___nl__im__190);
#line 395
c_rt_lib0clear(&___nl__im__191);
#line 395
c_rt_lib0clear(&___nl__im__192);
#line 395
c_rt_lib0clear(&___nl__im__197);
#line 395
c_rt_lib0clear(&___nl__im__198);
#line 395
c_rt_lib0clear(&___nl__im__199);
#line 395
c_rt_lib0clear(&___nl__im__246);
#line 395
//clear ___nl__bool__252;
#line 395
return ___nl__im__273;
#line 395
goto label_1476;
#line 395
label_1476:
;
#line 395
//clear ___nl__bool__252;
#line 395
c_rt_lib0clear(&___nl__im__273);
#line 399
c_rt_lib0move(&___nl__im__274, wprinter0build_pretty_l(___nl__im__246));
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
//clear ___nl__bool__38;
#line 399
c_rt_lib0clear(&___nl__im__39);
#line 399
c_rt_lib0clear(&___nl__im__40);
#line 399
c_rt_lib0clear(&___nl__im__42);
#line 399
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 399
c_rt_lib0clear(&___nl__im__64);
#line 399
c_rt_lib0clear(&___nl__im__65);
#line 399
c_rt_lib0clear(&___nl__im__66);
#line 399
c_rt_lib0clear(&___nl__im__84);
#line 399
c_rt_lib0clear(&___nl__im__85);
#line 399
c_rt_lib0clear(&___nl__im__86);
#line 399
c_rt_lib0clear(&___nl__im__176);
#line 399
c_rt_lib0clear(&___nl__im__177);
#line 399
c_rt_lib0clear(&___nl__im__178);
#line 399
c_rt_lib0clear(&___nl__im__183);
#line 399
c_rt_lib0clear(&___nl__im__184);
#line 399
c_rt_lib0clear(&___nl__im__185);
#line 399
c_rt_lib0clear(&___nl__im__190);
#line 399
c_rt_lib0clear(&___nl__im__191);
#line 399
c_rt_lib0clear(&___nl__im__192);
#line 399
c_rt_lib0clear(&___nl__im__197);
#line 399
c_rt_lib0clear(&___nl__im__198);
#line 399
c_rt_lib0clear(&___nl__im__199);
#line 399
c_rt_lib0clear(&___nl__im__246);
#line 399
return ___nl__im__274;
#line 400
goto label_1830;
#line 400
label_1538:
;
#line 401
___nl__int__276 = 0;
#line 401
c_rt_lib0move(&___nl__im__277, c_rt_lib0int_new(___nl__int__276));
#line 401
c_rt_lib0move(&___nl__im__279,___get_global_string_const(36));
#line 401
c_rt_lib0move(&___nl__im__278, c_rt_lib0ov_mk_arg(___get_global_string_const(1195), ___nl__im__279));
#line 401
c_rt_lib0clear(&___nl__im__279);
#line 401
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_mk(2, ___get_global_string_const(283), ___nl__im__277, ___get_global_string_const(1196), ___nl__im__278));
#line 401
//clear ___nl__int__276;
#line 401
c_rt_lib0clear(&___nl__im__277);
#line 401
c_rt_lib0clear(&___nl__im__278);
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
//clear ___nl__bool__38;
#line 401
c_rt_lib0clear(&___nl__im__39);
#line 401
c_rt_lib0clear(&___nl__im__40);
#line 401
c_rt_lib0clear(&___nl__im__42);
#line 401
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 401
c_rt_lib0clear(&___nl__im__64);
#line 401
c_rt_lib0clear(&___nl__im__65);
#line 401
c_rt_lib0clear(&___nl__im__66);
#line 401
c_rt_lib0clear(&___nl__im__84);
#line 401
c_rt_lib0clear(&___nl__im__85);
#line 401
c_rt_lib0clear(&___nl__im__86);
#line 401
c_rt_lib0clear(&___nl__im__176);
#line 401
c_rt_lib0clear(&___nl__im__177);
#line 401
c_rt_lib0clear(&___nl__im__178);
#line 401
c_rt_lib0clear(&___nl__im__183);
#line 401
c_rt_lib0clear(&___nl__im__184);
#line 401
c_rt_lib0clear(&___nl__im__185);
#line 401
c_rt_lib0clear(&___nl__im__190);
#line 401
c_rt_lib0clear(&___nl__im__191);
#line 401
c_rt_lib0clear(&___nl__im__192);
#line 401
c_rt_lib0clear(&___nl__im__197);
#line 401
c_rt_lib0clear(&___nl__im__198);
#line 401
c_rt_lib0clear(&___nl__im__199);
#line 401
c_rt_lib0clear(&___nl__im__246);
#line 401
c_rt_lib0clear(&___nl__im__274);
#line 401
return ___nl__im__275;
#line 402
goto label_1830;
#line 402
label_1607:
;
#line 402
c_rt_lib0move(&___nl__im__281, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(229)));
#line 402
c_rt_lib0copy(&___nl__im__280, ___nl__im__281);
#line 403
c_rt_lib0move(&___nl__im__283,___get_global_string_const(36));
#line 403
c_rt_lib0move(&___nl__im__284,___get_global_string_const(36));
#line 403
c_rt_lib0move(&___nl__im__282, pretty_printer_priv0get_compressed_fun_val(___nl__im__0, ___nl__im__283, ___nl__im__284));
#line 403
c_rt_lib0clear(&___nl__im__283);
#line 403
c_rt_lib0clear(&___nl__im__284);
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
//clear ___nl__bool__38;
#line 403
c_rt_lib0clear(&___nl__im__39);
#line 403
c_rt_lib0clear(&___nl__im__40);
#line 403
c_rt_lib0clear(&___nl__im__42);
#line 403
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 403
c_rt_lib0clear(&___nl__im__64);
#line 403
c_rt_lib0clear(&___nl__im__65);
#line 403
c_rt_lib0clear(&___nl__im__66);
#line 403
c_rt_lib0clear(&___nl__im__84);
#line 403
c_rt_lib0clear(&___nl__im__85);
#line 403
c_rt_lib0clear(&___nl__im__86);
#line 403
c_rt_lib0clear(&___nl__im__176);
#line 403
c_rt_lib0clear(&___nl__im__177);
#line 403
c_rt_lib0clear(&___nl__im__178);
#line 403
c_rt_lib0clear(&___nl__im__183);
#line 403
c_rt_lib0clear(&___nl__im__184);
#line 403
c_rt_lib0clear(&___nl__im__185);
#line 403
c_rt_lib0clear(&___nl__im__190);
#line 403
c_rt_lib0clear(&___nl__im__191);
#line 403
c_rt_lib0clear(&___nl__im__192);
#line 403
c_rt_lib0clear(&___nl__im__197);
#line 403
c_rt_lib0clear(&___nl__im__198);
#line 403
c_rt_lib0clear(&___nl__im__199);
#line 403
c_rt_lib0clear(&___nl__im__246);
#line 403
c_rt_lib0clear(&___nl__im__274);
#line 403
c_rt_lib0clear(&___nl__im__275);
#line 403
c_rt_lib0clear(&___nl__im__280);
#line 403
c_rt_lib0clear(&___nl__im__281);
#line 403
return ___nl__im__282;
#line 404
goto label_1830;
#line 404
label_1677:
;
#line 404
c_rt_lib0move(&___nl__im__286, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(230)));
#line 404
c_rt_lib0copy(&___nl__im__285, ___nl__im__286);
#line 405
c_rt_lib0move(&___nl__im__288, pretty_printer_priv0join_print_hash_elem(___nl__im__285));
#line 405
c_rt_lib0move(&___nl__im__289,___get_global_string_const(304));
#line 405
c_rt_lib0move(&___nl__im__290,___get_global_string_const(305));
#line 405
c_rt_lib0move(&___nl__im__287, wprinter0build_pretty_arr_decl(___nl__im__288, ___nl__im__289, ___nl__im__290));
#line 405
c_rt_lib0clear(&___nl__im__288);
#line 405
c_rt_lib0clear(&___nl__im__289);
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
//clear ___nl__bool__38;
#line 405
c_rt_lib0clear(&___nl__im__39);
#line 405
c_rt_lib0clear(&___nl__im__40);
#line 405
c_rt_lib0clear(&___nl__im__42);
#line 405
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 405
c_rt_lib0clear(&___nl__im__64);
#line 405
c_rt_lib0clear(&___nl__im__65);
#line 405
c_rt_lib0clear(&___nl__im__66);
#line 405
c_rt_lib0clear(&___nl__im__84);
#line 405
c_rt_lib0clear(&___nl__im__85);
#line 405
c_rt_lib0clear(&___nl__im__86);
#line 405
c_rt_lib0clear(&___nl__im__176);
#line 405
c_rt_lib0clear(&___nl__im__177);
#line 405
c_rt_lib0clear(&___nl__im__178);
#line 405
c_rt_lib0clear(&___nl__im__183);
#line 405
c_rt_lib0clear(&___nl__im__184);
#line 405
c_rt_lib0clear(&___nl__im__185);
#line 405
c_rt_lib0clear(&___nl__im__190);
#line 405
c_rt_lib0clear(&___nl__im__191);
#line 405
c_rt_lib0clear(&___nl__im__192);
#line 405
c_rt_lib0clear(&___nl__im__197);
#line 405
c_rt_lib0clear(&___nl__im__198);
#line 405
c_rt_lib0clear(&___nl__im__199);
#line 405
c_rt_lib0clear(&___nl__im__246);
#line 405
c_rt_lib0clear(&___nl__im__274);
#line 405
c_rt_lib0clear(&___nl__im__275);
#line 405
c_rt_lib0clear(&___nl__im__280);
#line 405
c_rt_lib0clear(&___nl__im__281);
#line 405
c_rt_lib0clear(&___nl__im__282);
#line 405
c_rt_lib0clear(&___nl__im__285);
#line 405
c_rt_lib0clear(&___nl__im__286);
#line 405
return ___nl__im__287;
#line 406
goto label_1830;
#line 406
label_1752:
;
#line 406
c_rt_lib0move(&___nl__im__292, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1009)));
#line 406
c_rt_lib0copy(&___nl__im__291, ___nl__im__292);
#line 407
c_rt_lib0move(&___nl__im__295, c_rt_lib0hash_get_value_dec(___nl__im__291, ___get_global_string_const(166)));
#line 407
c_rt_lib0move(&___nl__im__296, c_rt_lib0hash_get_value_dec(___nl__im__291, ___get_global_string_const(150)));
#line 407
c_rt_lib0move(&___nl__im__294, pretty_printer_priv0get_fun_label(___nl__im__295, ___nl__im__296));
#line 407
c_rt_lib0clear(&___nl__im__295);
#line 407
c_rt_lib0clear(&___nl__im__296);
#line 407
c_rt_lib0move(&___nl__im__293, wprinter0build_sim(___nl__im__294));
#line 407
c_rt_lib0clear(&___nl__im__294);
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
//clear ___nl__int__18;
#line 407
c_rt_lib0clear(&___nl__im__19);
#line 407
c_rt_lib0clear(&___nl__im__23);
#line 407
//clear ___nl__bool__24;
#line 407
c_rt_lib0clear(&___nl__im__25);
#line 407
c_rt_lib0clear(&___nl__im__36);
#line 407
//clear ___nl__bool__38;
#line 407
c_rt_lib0clear(&___nl__im__39);
#line 407
c_rt_lib0clear(&___nl__im__40);
#line 407
c_rt_lib0clear(&___nl__im__42);
#line 407
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0clear(&___nl__im__57);
#line 407
c_rt_lib0clear(&___nl__im__64);
#line 407
c_rt_lib0clear(&___nl__im__65);
#line 407
c_rt_lib0clear(&___nl__im__66);
#line 407
c_rt_lib0clear(&___nl__im__84);
#line 407
c_rt_lib0clear(&___nl__im__85);
#line 407
c_rt_lib0clear(&___nl__im__86);
#line 407
c_rt_lib0clear(&___nl__im__176);
#line 407
c_rt_lib0clear(&___nl__im__177);
#line 407
c_rt_lib0clear(&___nl__im__178);
#line 407
c_rt_lib0clear(&___nl__im__183);
#line 407
c_rt_lib0clear(&___nl__im__184);
#line 407
c_rt_lib0clear(&___nl__im__185);
#line 407
c_rt_lib0clear(&___nl__im__190);
#line 407
c_rt_lib0clear(&___nl__im__191);
#line 407
c_rt_lib0clear(&___nl__im__192);
#line 407
c_rt_lib0clear(&___nl__im__197);
#line 407
c_rt_lib0clear(&___nl__im__198);
#line 407
c_rt_lib0clear(&___nl__im__199);
#line 407
c_rt_lib0clear(&___nl__im__246);
#line 407
c_rt_lib0clear(&___nl__im__274);
#line 407
c_rt_lib0clear(&___nl__im__275);
#line 407
c_rt_lib0clear(&___nl__im__280);
#line 407
c_rt_lib0clear(&___nl__im__281);
#line 407
c_rt_lib0clear(&___nl__im__282);
#line 407
c_rt_lib0clear(&___nl__im__285);
#line 407
c_rt_lib0clear(&___nl__im__286);
#line 407
c_rt_lib0clear(&___nl__im__287);
#line 407
c_rt_lib0clear(&___nl__im__291);
#line 407
c_rt_lib0clear(&___nl__im__292);
#line 407
return ___nl__im__293;
#line 408
goto label_1830;
#line 408
label_1830:
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
___nl__int__14 = ___nl__int__12 > ___nl__int__13;
#line 418
___nl__bool__11 = ___nl__int__14;
#line 418
//clear ___nl__int__12;
#line 418
//clear ___nl__int__13;
#line 418
//clear ___nl__int__14;
#line 418
___nl__bool__11 = !___nl__bool__11;
#line 418
if(___nl__bool__11){ goto label_24;}
#line 418
c_rt_lib0move(&___nl__im__16,___get_global_string_const(467));
#line 418
c_rt_lib0move(&___nl__im__15, wprinter0build_sim(___nl__im__16));
#line 418
c_rt_lib0clear(&___nl__im__16);
#line 418
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__15));
#line 418
c_rt_lib0clear(&___nl__im__15);
#line 418
goto label_24;
#line 418
label_24:
;
#line 418
//clear ___nl__bool__11;
#line 419
___nl__int__18 = c_rt_lib0array_len(___nl__im__3);
#line 419
___nl__int__19 = 0;
#line 419
___nl__int__20 = ___nl__int__18 > ___nl__int__19;
#line 419
___nl__bool__17 = ___nl__int__20;
#line 419
//clear ___nl__int__18;
#line 419
//clear ___nl__int__19;
#line 419
//clear ___nl__int__20;
#line 419
___nl__bool__17 = !___nl__bool__17;
#line 419
if(___nl__bool__17){ goto label_41;}
#line 419
c_rt_lib0move(&___nl__im__22,___get_global_string_const(455));
#line 419
c_rt_lib0move(&___nl__im__21, wprinter0build_sim(___nl__im__22));
#line 419
c_rt_lib0clear(&___nl__im__22);
#line 419
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__21));
#line 419
c_rt_lib0clear(&___nl__im__21);
#line 419
goto label_41;
#line 419
label_41:
;
#line 419
//clear ___nl__bool__17;
#line 420
c_rt_lib0move(&___nl__im__23, pretty_printer_priv0print_val(___nl__im__4));
#line 420
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__23));
#line 420
c_rt_lib0clear(&___nl__im__23);
#line 421
___nl__int__25 = c_rt_lib0array_len(___nl__im__3);
#line 421
___nl__int__26 = 0;
#line 421
___nl__int__27 = ___nl__int__25 > ___nl__int__26;
#line 421
___nl__bool__24 = ___nl__int__27;
#line 421
//clear ___nl__int__25;
#line 421
//clear ___nl__int__26;
#line 421
//clear ___nl__int__27;
#line 421
___nl__bool__24 = !___nl__bool__24;
#line 421
if(___nl__bool__24){ goto label_61;}
#line 421
c_rt_lib0move(&___nl__im__29,___get_global_string_const(320));
#line 421
c_rt_lib0move(&___nl__im__28, wprinter0build_sim(___nl__im__29));
#line 421
c_rt_lib0clear(&___nl__im__29);
#line 421
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__28));
#line 421
c_rt_lib0clear(&___nl__im__28);
#line 421
goto label_61;
#line 421
label_61:
;
#line 421
//clear ___nl__bool__24;
#line 423
c_rt_lib0move(&___nl__im__32, pretty_printer_priv0print_simple_statement(___nl__im__2));
#line 424
c_rt_lib0move(&___nl__im__33, wprinter0get_sep());
#line 425
c_rt_lib0move(&___nl__im__34, wprinter0build_pretty_op_l(___nl__im__6));
#line 425
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(3, ___nl__im__32, ___nl__im__33, ___nl__im__34));
#line 425
c_rt_lib0clear(&___nl__im__32);
#line 425
c_rt_lib0clear(&___nl__im__33);
#line 425
c_rt_lib0clear(&___nl__im__34);
#line 425
c_rt_lib0move(&___nl__im__30, wprinter0build_pretty_a(___nl__im__31));
#line 425
c_rt_lib0clear(&___nl__im__31);
#line 425
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__30, ___nl__int__5));
#line 425
c_rt_lib0clear(&___nl__im__30);
#line 427
c_rt_lib0move(&___nl__im__35,___get_global_string_const(440));
#line 427
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__35));
#line 427
c_rt_lib0clear(&___nl__im__35);
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
___nl__int__13 = ___nl__int__11 > ___nl__int__12;
#line 434
___nl__bool__10 = ___nl__int__13;
#line 434
//clear ___nl__int__11;
#line 434
//clear ___nl__int__12;
#line 434
//clear ___nl__int__13;
#line 434
___nl__bool__10 = !___nl__bool__10;
#line 434
if(___nl__bool__10){ goto label_23;}
#line 434
c_rt_lib0move(&___nl__im__15,___get_global_string_const(467));
#line 434
c_rt_lib0move(&___nl__im__14, wprinter0build_sim(___nl__im__15));
#line 434
c_rt_lib0clear(&___nl__im__15);
#line 434
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__14));
#line 434
c_rt_lib0clear(&___nl__im__14);
#line 434
goto label_23;
#line 434
label_23:
;
#line 434
//clear ___nl__bool__10;
#line 435
c_rt_lib0move(&___nl__im__17,___get_global_string_const(455));
#line 435
c_rt_lib0move(&___nl__im__16, wprinter0build_sim(___nl__im__17));
#line 435
c_rt_lib0clear(&___nl__im__17);
#line 435
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__16));
#line 435
c_rt_lib0clear(&___nl__im__16);
#line 436
c_rt_lib0move(&___nl__im__18, pretty_printer_priv0print_val(___nl__im__4));
#line 437
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1196)));
#line 437
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(127));
#line 437
c_rt_lib0clear(&___nl__im__20);
#line 437
___nl__bool__19 = !___nl__bool__19;
#line 437
if(___nl__bool__19){ goto label_46;}
#line 438
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1196)));
#line 438
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1196)));
#line 438
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(127)));
#line 438
c_rt_lib0clear(&___nl__im__23);
#line 438
c_rt_lib0clear(&___nl__im__24);
#line 438
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(127)));
#line 438
c_rt_lib0clear(&___nl__im__22);
#line 438
c_rt_lib0delete(array0append(&___nl__im__6, ___nl__im__21));
#line 438
c_rt_lib0clear(&___nl__im__21);
#line 439
goto label_49;
#line 439
label_46:
;
#line 440
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__18));
#line 441
goto label_49;
#line 441
label_49:
;
#line 441
//clear ___nl__bool__19;
#line 442
c_rt_lib0move(&___nl__im__26,___get_global_string_const(320));
#line 442
c_rt_lib0move(&___nl__im__25, wprinter0build_sim(___nl__im__26));
#line 442
c_rt_lib0clear(&___nl__im__26);
#line 442
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__25));
#line 442
c_rt_lib0clear(&___nl__im__25);
#line 443
c_rt_lib0move(&___nl__im__27, wprinter0build_pretty_l(___nl__im__6));
#line 443
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__27, ___nl__int__5));
#line 443
c_rt_lib0clear(&___nl__im__27);
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
c_rt_lib0clear(&___nl__im__18);
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
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(723));
#line 458
if(___nl__bool__4){ goto label_12;}
#line 460
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1000));
#line 460
if(___nl__bool__4){ goto label_23;}
#line 462
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(999));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(723)));
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1000)));
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
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(999)));
#line 462
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 464
c_rt_lib0move(&___nl__im__19, wprinter0get_sep());
#line 465
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(274)));
#line 465
c_rt_lib0move(&___nl__im__20, pretty_printer_priv0print_val(___nl__im__21));
#line 465
c_rt_lib0clear(&___nl__im__21);
#line 466
c_rt_lib0move(&___nl__im__22, wprinter0get_sep());
#line 467
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(558)));
#line 467
c_rt_lib0move(&___nl__im__23, wprinter0build_sim(___nl__im__24));
#line 467
c_rt_lib0clear(&___nl__im__24);
#line 468
c_rt_lib0move(&___nl__im__25, wprinter0get_sep());
#line 469
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(275)));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(246));
#line 476
c_rt_lib0move(&___nl__im__2, wprinter0build_sim(___nl__im__3));
#line 476
c_rt_lib0clear(&___nl__im__3);
#line 476
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__2));
#line 476
c_rt_lib0clear(&___nl__im__2);
#line 477
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 477
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(985));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1196)));
#line 485
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 485
c_rt_lib0clear(&___nl__im__3);
#line 485
___nl__bool__2 = !___nl__bool__2;
#line 485
if(___nl__bool__2){ goto label_16;}
#line 486
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1196)));
#line 486
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1196)));
#line 486
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(127)));
#line 486
c_rt_lib0clear(&___nl__im__6);
#line 486
c_rt_lib0clear(&___nl__im__7);
#line 486
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(127)));
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(980));
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(981));
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 500
c_rt_lib0move(&___nl__im__3,___get_global_string_const(247));
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
___nl__int__7 = ___nl__int__5 > ___nl__int__6;
#line 506
___nl__bool__4 = ___nl__int__7;
#line 506
//clear ___nl__int__5;
#line 506
//clear ___nl__int__6;
#line 506
//clear ___nl__int__7;
#line 506
___nl__bool__4 = !___nl__bool__4;
#line 506
if(___nl__bool__4){ goto label_30;}
#line 502
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
#line 502
c_rt_lib0move(&___nl__im__9, wprinter0build_sim(___nl__im__10));
#line 502
c_rt_lib0clear(&___nl__im__10);
#line 503
c_rt_lib0move(&___nl__im__12, pretty_printer_priv0join_print_val(___nl__im__0));
#line 503
c_rt_lib0move(&___nl__im__11, wprinter0build_pretty_l(___nl__im__12));
#line 503
c_rt_lib0clear(&___nl__im__12);
#line 504
c_rt_lib0move(&___nl__im__14,___get_global_string_const(320));
#line 504
c_rt_lib0move(&___nl__im__13, wprinter0build_sim(___nl__im__14));
#line 504
c_rt_lib0clear(&___nl__im__14);
#line 504
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__11, ___nl__im__13));
#line 504
c_rt_lib0clear(&___nl__im__9);
#line 504
c_rt_lib0clear(&___nl__im__11);
#line 504
c_rt_lib0clear(&___nl__im__13);
#line 504
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__8));
#line 504
c_rt_lib0clear(&___nl__im__8);
#line 504
goto label_30;
#line 504
label_30:
;
#line 504
//clear ___nl__bool__4;
#line 507
c_rt_lib0move(&___nl__im__15, wprinter0build_pretty_a(___nl__im__1));
#line 507
c_rt_lib0clear(&___nl__im__0);
#line 507
c_rt_lib0clear(&___nl__im__1);
#line 507
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
#line 511
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 511
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(218));
#line 511
c_rt_lib0clear(&___nl__im__2);
#line 511
___nl__bool__1 = !___nl__bool__1;
#line 511
if(___nl__bool__1){ goto label_16;}
#line 512
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 512
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 512
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(218)));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 513
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(246));
#line 513
c_rt_lib0clear(&___nl__im__7);
#line 513
___nl__bool__1 = !___nl__bool__1;
#line 513
if(___nl__bool__1){ goto label_34;}
#line 514
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 514
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 514
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(246)));
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 515
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(980));
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
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 517
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(981));
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
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 519
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(247));
#line 519
c_rt_lib0clear(&___nl__im__16);
#line 519
___nl__bool__1 = !___nl__bool__1;
#line 519
if(___nl__bool__1){ goto label_82;}
#line 520
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 520
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 520
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(247)));
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
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 521
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(984));
#line 521
c_rt_lib0clear(&___nl__im__21);
#line 521
___nl__bool__1 = !___nl__bool__1;
#line 521
if(___nl__bool__1){ goto label_106;}
#line 522
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 522
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 522
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(984)));
#line 522
c_rt_lib0clear(&___nl__im__24);
#line 522
c_rt_lib0clear(&___nl__im__25);
#line 522
c_rt_lib0move(&___nl__im__26,___get_global_string_const(984));
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 523
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(176));
#line 523
c_rt_lib0clear(&___nl__im__27);
#line 523
___nl__bool__1 = !___nl__bool__1;
#line 523
if(___nl__bool__1){ goto label_131;}
#line 524
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 524
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 524
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(176)));
#line 524
c_rt_lib0clear(&___nl__im__30);
#line 524
c_rt_lib0clear(&___nl__im__31);
#line 524
c_rt_lib0move(&___nl__im__32,___get_global_string_const(176));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(440));
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
#line 536
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(226)));
#line 536
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(972));
#line 536
if(___nl__bool__4){ goto label_44;}
#line 546
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(977));
#line 546
if(___nl__bool__4){ goto label_100;}
#line 548
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(973));
#line 548
if(___nl__bool__4){ goto label_117;}
#line 567
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(983));
#line 567
if(___nl__bool__4){ goto label_176;}
#line 574
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(985));
#line 574
if(___nl__bool__4){ goto label_223;}
#line 576
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(982));
#line 576
if(___nl__bool__4){ goto label_228;}
#line 587
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(974));
#line 587
if(___nl__bool__4){ goto label_278;}
#line 589
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(975));
#line 589
if(___nl__bool__4){ goto label_297;}
#line 592
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(976));
#line 592
if(___nl__bool__4){ goto label_318;}
#line 594
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(158));
#line 594
if(___nl__bool__4){ goto label_337;}
#line 597
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(978));
#line 597
if(___nl__bool__4){ goto label_345;}
#line 599
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(979));
#line 599
if(___nl__bool__4){ goto label_358;}
#line 601
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(218));
#line 601
if(___nl__bool__4){ goto label_371;}
#line 603
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(984));
#line 603
if(___nl__bool__4){ goto label_378;}
#line 605
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(176));
#line 605
if(___nl__bool__4){ goto label_387;}
#line 607
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(246));
#line 607
if(___nl__bool__4){ goto label_396;}
#line 609
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(980));
#line 609
if(___nl__bool__4){ goto label_403;}
#line 611
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(981));
#line 611
if(___nl__bool__4){ goto label_408;}
#line 613
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(247));
#line 613
if(___nl__bool__4){ goto label_413;}
#line 615
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(252));
#line 615
if(___nl__bool__4){ goto label_420;}
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(972)));
#line 536
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 537
c_rt_lib0move(&___nl__im__8,___get_global_string_const(972));
#line 537
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(972)));
#line 537
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 537
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(986)));
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(987)));
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
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 538
___nl__bool__17 = ___nl__int__18;
#line 538
if(___nl__bool__17){ goto label_81;}
#line 538
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 538
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 539
c_rt_lib0move(&___nl__im__20,___get_global_string_const(467));
#line 539
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__20));
#line 539
c_rt_lib0clear(&___nl__im__20);
#line 540
c_rt_lib0move(&___nl__im__21,___get_global_string_const(987));
#line 540
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(226)));
#line 540
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 540
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(986)));
#line 540
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___im__0, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__int__2));
#line 540
c_rt_lib0clear(&___nl__im__21);
#line 540
c_rt_lib0clear(&___nl__im__22);
#line 540
c_rt_lib0clear(&___nl__im__23);
#line 540
c_rt_lib0clear(&___nl__im__24);
#line 540
c_rt_lib0clear(&___nl__im__13);
#line 541
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 541
goto label_60;
#line 541
label_81:
;
#line 542
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(988)));
#line 542
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(226)));
#line 542
c_rt_lib0clear(&___nl__im__27);
#line 542
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(985));
#line 542
c_rt_lib0clear(&___nl__im__26);
#line 542
___nl__bool__25 = !___nl__bool__25;
#line 542
___nl__bool__25 = !___nl__bool__25;
#line 542
if(___nl__bool__25){ goto label_97;}
#line 543
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1197));
#line 543
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__28));
#line 543
c_rt_lib0clear(&___nl__im__28);
#line 544
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(988)));
#line 544
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__29, ___nl__int__2));
#line 544
c_rt_lib0clear(&___nl__im__29);
#line 545
goto label_97;
#line 545
label_97:
;
#line 545
//clear ___nl__bool__25;
#line 546
goto label_427;
#line 546
label_100:
;
#line 546
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(977)));
#line 546
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 547
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(1054)));
#line 547
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__33);
#line 547
c_rt_lib0clear(&___nl__im__33);
#line 547
c_rt_lib0move(&___nl__im__34,___get_global_string_const(977));
#line 547
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(226)));
#line 547
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 547
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(986)));
#line 547
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__32, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__int__2));
#line 547
//clear ___nl__bool__32;
#line 547
c_rt_lib0clear(&___nl__im__34);
#line 547
c_rt_lib0clear(&___nl__im__35);
#line 547
c_rt_lib0clear(&___nl__im__36);
#line 547
c_rt_lib0clear(&___nl__im__37);
#line 548
goto label_427;
#line 548
label_117:
;
#line 548
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(973)));
#line 548
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 550
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(989)));
#line 550
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(218));
#line 550
if(___nl__bool__42){ goto label_128;}
#line 552
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(252));
#line 552
if(___nl__bool__42){ goto label_133;}
#line 552
c_rt_lib0move(&___nl__im__43,___get_global_string_const(15));
#line 552
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(2, ___nl__im__43, ___nl__im__41));
#line 552
nl_die_arg(___nl__im__43);
#line 550
label_128:
;
#line 550
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__41, ___get_global_string_const(218)));
#line 550
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 551
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_val(___nl__im__44));
#line 552
goto label_138;
#line 552
label_133:
;
#line 552
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__41, ___get_global_string_const(252)));
#line 552
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 553
c_rt_lib0move(&___nl__im__40, pretty_printer_priv0print_var_decl(___nl__im__46));
#line 554
goto label_138;
#line 554
label_138:
;
#line 556
c_rt_lib0move(&___nl__im__51,___get_global_string_const(1198));
#line 556
c_rt_lib0move(&___nl__im__50, wprinter0build_sim(___nl__im__51));
#line 556
c_rt_lib0clear(&___nl__im__51);
#line 558
c_rt_lib0move(&___nl__im__53,___get_global_string_const(440));
#line 558
c_rt_lib0move(&___nl__im__52, wprinter0build_sim(___nl__im__53));
#line 558
c_rt_lib0clear(&___nl__im__53);
#line 559
c_rt_lib0move(&___nl__im__54, wprinter0get_sep());
#line 560
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(986)));
#line 560
c_rt_lib0move(&___nl__im__55, pretty_printer_priv0print_val(___nl__im__56));
#line 560
c_rt_lib0clear(&___nl__im__56);
#line 561
c_rt_lib0move(&___nl__im__58,___get_global_string_const(440));
#line 561
c_rt_lib0move(&___nl__im__57, wprinter0build_sim(___nl__im__58));
#line 561
c_rt_lib0clear(&___nl__im__58);
#line 562
c_rt_lib0move(&___nl__im__59, wprinter0get_sep());
#line 563
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(362)));
#line 563
c_rt_lib0move(&___nl__im__60, pretty_printer_priv0print_val(___nl__im__61));
#line 563
c_rt_lib0clear(&___nl__im__61);
#line 564
c_rt_lib0move(&___nl__im__63,___get_global_string_const(1199));
#line 564
c_rt_lib0move(&___nl__im__62, wprinter0build_sim(___nl__im__63));
#line 564
c_rt_lib0clear(&___nl__im__63);
#line 564
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(9, ___nl__im__50, ___nl__im__40, ___nl__im__52, ___nl__im__54, ___nl__im__55, ___nl__im__57, ___nl__im__59, ___nl__im__60, ___nl__im__62));
#line 564
c_rt_lib0clear(&___nl__im__50);
#line 564
c_rt_lib0clear(&___nl__im__52);
#line 564
c_rt_lib0clear(&___nl__im__54);
#line 564
c_rt_lib0clear(&___nl__im__55);
#line 564
c_rt_lib0clear(&___nl__im__57);
#line 564
c_rt_lib0clear(&___nl__im__59);
#line 564
c_rt_lib0clear(&___nl__im__60);
#line 564
c_rt_lib0clear(&___nl__im__62);
#line 564
c_rt_lib0move(&___nl__im__48, wprinter0build_pretty_a(___nl__im__49));
#line 564
c_rt_lib0clear(&___nl__im__49);
#line 564
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__48, ___nl__int__2));
#line 564
c_rt_lib0clear(&___nl__im__48);
#line 566
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(226)));
#line 566
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__64, ___nl__int__2));
#line 566
c_rt_lib0clear(&___nl__im__64);
#line 567
goto label_427;
#line 567
label_176:
;
#line 567
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(983)));
#line 567
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 568
c_rt_lib0move(&___nl__im__67,___get_global_string_const(304));
#line 568
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__67));
#line 568
c_rt_lib0clear(&___nl__im__67);
#line 569
___nl__int__69 = 0;
#line 569
___nl__int__70 = 1;
#line 569
___nl__int__71 = c_rt_lib0array_len(___nl__im__65);
#line 569
label_185:
;
#line 569
___nl__int__73 = ___nl__int__69 >= ___nl__int__71;
#line 569
___nl__bool__72 = ___nl__int__73;
#line 569
if(___nl__bool__72){ goto label_210;}
#line 569
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_get(___nl__im__65, ___nl__int__69));
#line 569
c_rt_lib0copy(&___nl__im__68, ___nl__im__74);
#line 570
c_rt_lib0move(&___nl__im__76, string0lf());
#line 570
___nl__int__79 = 1;
#line 570
___nl__int__78 = ___nl__int__2 + ___nl__int__79;
#line 570
//clear ___nl__int__79;
#line 570
c_rt_lib0move(&___nl__im__77, pretty_printer_priv0pind(___nl__int__78));
#line 570
//clear ___nl__int__78;
#line 570
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__77));
#line 570
c_rt_lib0clear(&___nl__im__76);
#line 570
c_rt_lib0clear(&___nl__im__77);
#line 570
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__75));
#line 570
c_rt_lib0clear(&___nl__im__75);
#line 571
___nl__int__81 = 1;
#line 571
___nl__int__80 = ___nl__int__2 + ___nl__int__81;
#line 571
//clear ___nl__int__81;
#line 571
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___im__0, ___nl__im__68, ___nl__int__80));
#line 571
//clear ___nl__int__80;
#line 571
c_rt_lib0clear(&___nl__im__68);
#line 572
___nl__int__69 = ___nl__int__69 + ___nl__int__70;
#line 572
goto label_185;
#line 572
label_210:
;
#line 573
c_rt_lib0move(&___nl__im__84, string0lf());
#line 573
c_rt_lib0move(&___nl__im__85, pretty_printer_priv0pind(___nl__int__2));
#line 573
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 573
c_rt_lib0clear(&___nl__im__84);
#line 573
c_rt_lib0clear(&___nl__im__85);
#line 573
c_rt_lib0move(&___nl__im__86,___get_global_string_const(305));
#line 573
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__86));
#line 573
c_rt_lib0clear(&___nl__im__83);
#line 573
c_rt_lib0clear(&___nl__im__86);
#line 573
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__82));
#line 573
c_rt_lib0clear(&___nl__im__82);
#line 574
goto label_427;
#line 574
label_223:
;
#line 575
c_rt_lib0move(&___nl__im__87,___get_global_string_const(440));
#line 575
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__87));
#line 575
c_rt_lib0clear(&___nl__im__87);
#line 576
goto label_427;
#line 576
label_228:
;
#line 576
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(982)));
#line 576
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 578
c_rt_lib0move(&___nl__im__93,___get_global_string_const(1200));
#line 578
c_rt_lib0move(&___nl__im__92, wprinter0build_sim(___nl__im__93));
#line 578
c_rt_lib0clear(&___nl__im__93);
#line 579
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(223)));
#line 579
c_rt_lib0move(&___nl__im__94, pretty_printer_priv0print_val(___nl__im__95));
#line 579
c_rt_lib0clear(&___nl__im__95);
#line 580
c_rt_lib0move(&___nl__im__97,___get_global_string_const(320));
#line 580
c_rt_lib0move(&___nl__im__96, wprinter0build_sim(___nl__im__97));
#line 580
c_rt_lib0clear(&___nl__im__97);
#line 580
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(3, ___nl__im__92, ___nl__im__94, ___nl__im__96));
#line 580
c_rt_lib0clear(&___nl__im__92);
#line 580
c_rt_lib0clear(&___nl__im__94);
#line 580
c_rt_lib0clear(&___nl__im__96);
#line 580
c_rt_lib0move(&___nl__im__90, wprinter0build_pretty_a(___nl__im__91));
#line 580
c_rt_lib0clear(&___nl__im__91);
#line 580
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__90, ___nl__int__2));
#line 580
c_rt_lib0clear(&___nl__im__90);
#line 582
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(994)));
#line 582
___nl__int__100 = 0;
#line 582
___nl__int__101 = 1;
#line 582
___nl__int__102 = c_rt_lib0array_len(___nl__im__98);
#line 582
label_252:
;
#line 582
___nl__int__104 = ___nl__int__100 >= ___nl__int__102;
#line 582
___nl__bool__103 = ___nl__int__104;
#line 582
if(___nl__bool__103){ goto label_276;}
#line 582
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_get(___nl__im__98, ___nl__int__100));
#line 582
c_rt_lib0copy(&___nl__im__99, ___nl__im__105);
#line 583
c_rt_lib0move(&___nl__im__106,___get_global_string_const(1201));
#line 583
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__106));
#line 583
c_rt_lib0clear(&___nl__im__106);
#line 584
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_string_const(560)));
#line 584
c_rt_lib0move(&___nl__im__107, pretty_printer_priv0print_variant_case_decl(___nl__im__108));
#line 584
c_rt_lib0clear(&___nl__im__108);
#line 584
___nl__int__110 = 1;
#line 584
___nl__int__109 = ___nl__int__2 + ___nl__int__110;
#line 584
//clear ___nl__int__110;
#line 584
c_rt_lib0delete(wprinter0print_t(___ref___im__0, ___nl__im__107, ___nl__int__109));
#line 584
c_rt_lib0clear(&___nl__im__107);
#line 584
//clear ___nl__int__109;
#line 585
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_string_const(226)));
#line 585
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__111, ___nl__int__2));
#line 585
c_rt_lib0clear(&___nl__im__111);
#line 585
c_rt_lib0clear(&___nl__im__99);
#line 586
___nl__int__100 = ___nl__int__100 + ___nl__int__101;
#line 586
goto label_252;
#line 586
label_276:
;
#line 587
goto label_427;
#line 587
label_278:
;
#line 587
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(974)));
#line 587
c_rt_lib0copy(&___nl__im__112, ___nl__im__113);
#line 588
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(1054)));
#line 588
___nl__bool__114 = c_rt_lib0check_true_native(___nl__im__115);
#line 588
c_rt_lib0clear(&___nl__im__115);
#line 588
c_rt_lib0move(&___nl__im__116,___get_global_string_const(974));
#line 588
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(226)));
#line 588
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(362)));
#line 588
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(1, ___nl__im__119));
#line 588
c_rt_lib0clear(&___nl__im__119);
#line 588
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(37)));
#line 588
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__114, ___nl__im__116, ___nl__im__117, ___nl__im__118, ___nl__im__120, ___nl__int__2));
#line 588
//clear ___nl__bool__114;
#line 588
c_rt_lib0clear(&___nl__im__116);
#line 588
c_rt_lib0clear(&___nl__im__117);
#line 588
c_rt_lib0clear(&___nl__im__118);
#line 588
c_rt_lib0clear(&___nl__im__120);
#line 589
goto label_427;
#line 589
label_297:
;
#line 589
c_rt_lib0move(&___nl__im__122, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(975)));
#line 589
c_rt_lib0copy(&___nl__im__121, ___nl__im__122);
#line 590
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(1054)));
#line 590
___nl__bool__123 = c_rt_lib0check_true_native(___nl__im__124);
#line 590
c_rt_lib0clear(&___nl__im__124);
#line 590
c_rt_lib0move(&___nl__im__125,___get_global_string_const(975));
#line 590
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(226)));
#line 590
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(575)));
#line 590
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(223)));
#line 590
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(2, ___nl__im__128, ___nl__im__129));
#line 590
c_rt_lib0clear(&___nl__im__128);
#line 590
c_rt_lib0clear(&___nl__im__129);
#line 590
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(128)));
#line 590
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__123, ___nl__im__125, ___nl__im__126, ___nl__im__127, ___nl__im__130, ___nl__int__2));
#line 590
//clear ___nl__bool__123;
#line 590
c_rt_lib0clear(&___nl__im__125);
#line 590
c_rt_lib0clear(&___nl__im__126);
#line 590
c_rt_lib0clear(&___nl__im__127);
#line 590
c_rt_lib0clear(&___nl__im__130);
#line 592
goto label_427;
#line 592
label_318:
;
#line 592
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(976)));
#line 592
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 593
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(1054)));
#line 593
___nl__bool__133 = c_rt_lib0check_true_native(___nl__im__134);
#line 593
c_rt_lib0clear(&___nl__im__134);
#line 593
c_rt_lib0move(&___nl__im__135,___get_global_string_const(976));
#line 593
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(226)));
#line 593
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(362)));
#line 593
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(1, ___nl__im__138));
#line 593
c_rt_lib0clear(&___nl__im__138);
#line 593
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(991)));
#line 593
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___im__0, ___nl__bool__133, ___nl__im__135, ___nl__im__136, ___nl__im__137, ___nl__im__139, ___nl__int__2));
#line 593
//clear ___nl__bool__133;
#line 593
c_rt_lib0clear(&___nl__im__135);
#line 593
c_rt_lib0clear(&___nl__im__136);
#line 593
c_rt_lib0clear(&___nl__im__137);
#line 593
c_rt_lib0clear(&___nl__im__139);
#line 594
goto label_427;
#line 594
label_337:
;
#line 594
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(158)));
#line 594
c_rt_lib0copy(&___nl__im__140, ___nl__im__141);
#line 595
c_rt_lib0move(&___nl__im__142,___get_global_string_const(158));
#line 595
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___im__0, ___nl__im__142));
#line 595
c_rt_lib0clear(&___nl__im__142);
#line 596
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___im__0, ___nl__im__140, ___nl__int__2));
#line 597
goto label_427;
#line 597
label_345:
;
#line 597
c_rt_lib0move(&___nl__im__144, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(978)));
#line 597
c_rt_lib0copy(&___nl__im__143, ___nl__im__144);
#line 598
c_rt_lib0move(&___nl__im__145,___get_global_string_const(972));
#line 598
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(226)));
#line 598
c_rt_lib0move(&___nl__im__147, c_rt_lib0array_mk(0));
#line 598
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(986)));
#line 598
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__145, ___nl__im__146, ___nl__im__147, ___nl__im__148, ___nl__int__2));
#line 598
c_rt_lib0clear(&___nl__im__145);
#line 598
c_rt_lib0clear(&___nl__im__146);
#line 598
c_rt_lib0clear(&___nl__im__147);
#line 598
c_rt_lib0clear(&___nl__im__148);
#line 599
goto label_427;
#line 599
label_358:
;
#line 599
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(979)));
#line 599
c_rt_lib0copy(&___nl__im__149, ___nl__im__150);
#line 600
c_rt_lib0move(&___nl__im__151,___get_global_string_const(1089));
#line 600
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(226)));
#line 600
c_rt_lib0move(&___nl__im__153, c_rt_lib0array_mk(0));
#line 600
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(986)));
#line 600
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___im__0, ___nl__im__151, ___nl__im__152, ___nl__im__153, ___nl__im__154, ___nl__int__2));
#line 600
c_rt_lib0clear(&___nl__im__151);
#line 600
c_rt_lib0clear(&___nl__im__152);
#line 600
c_rt_lib0clear(&___nl__im__153);
#line 600
c_rt_lib0clear(&___nl__im__154);
#line 601
goto label_427;
#line 601
label_371:
;
#line 601
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(218)));
#line 601
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 602
c_rt_lib0move(&___nl__im__157, pretty_printer_priv0print_sim_value(___nl__im__155));
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__157, ___nl__int__2));
#line 602
c_rt_lib0clear(&___nl__im__157);
#line 603
goto label_427;
#line 603
label_378:
;
#line 603
c_rt_lib0move(&___nl__im__159, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(984)));
#line 603
c_rt_lib0copy(&___nl__im__158, ___nl__im__159);
#line 604
c_rt_lib0move(&___nl__im__161,___get_global_string_const(984));
#line 604
c_rt_lib0move(&___nl__im__160, pretty_printer_priv0print_try_ensure(___nl__im__158, ___nl__im__161));
#line 604
c_rt_lib0clear(&___nl__im__161);
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__160, ___nl__int__2));
#line 604
c_rt_lib0clear(&___nl__im__160);
#line 605
goto label_427;
#line 605
label_387:
;
#line 605
c_rt_lib0move(&___nl__im__163, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(176)));
#line 605
c_rt_lib0copy(&___nl__im__162, ___nl__im__163);
#line 606
c_rt_lib0move(&___nl__im__165,___get_global_string_const(176));
#line 606
c_rt_lib0move(&___nl__im__164, pretty_printer_priv0print_try_ensure(___nl__im__162, ___nl__im__165));
#line 606
c_rt_lib0clear(&___nl__im__165);
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__164, ___nl__int__2));
#line 606
c_rt_lib0clear(&___nl__im__164);
#line 607
goto label_427;
#line 607
label_396:
;
#line 607
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(246)));
#line 607
c_rt_lib0copy(&___nl__im__166, ___nl__im__167);
#line 608
c_rt_lib0move(&___nl__im__168, pretty_printer_priv0print_return(___nl__im__166));
#line 608
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__168, ___nl__int__2));
#line 608
c_rt_lib0clear(&___nl__im__168);
#line 609
goto label_427;
#line 609
label_403:
;
#line 610
c_rt_lib0move(&___nl__im__169, pretty_printer_priv0print_break());
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__169, ___nl__int__2));
#line 610
c_rt_lib0clear(&___nl__im__169);
#line 611
goto label_427;
#line 611
label_408:
;
#line 612
c_rt_lib0move(&___nl__im__170, pretty_printer_priv0print_continue());
#line 612
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__170, ___nl__int__2));
#line 612
c_rt_lib0clear(&___nl__im__170);
#line 613
goto label_427;
#line 613
label_413:
;
#line 613
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(247)));
#line 613
c_rt_lib0copy(&___nl__im__171, ___nl__im__172);
#line 614
c_rt_lib0move(&___nl__im__173, pretty_printer_priv0print_die(___nl__im__171));
#line 614
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__173, ___nl__int__2));
#line 614
c_rt_lib0clear(&___nl__im__173);
#line 615
goto label_427;
#line 615
label_420:
;
#line 615
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(252)));
#line 615
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 616
c_rt_lib0move(&___nl__im__176, pretty_printer_priv0print_var_decl(___nl__im__174));
#line 616
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___im__0, ___nl__im__176, ___nl__int__2));
#line 616
c_rt_lib0clear(&___nl__im__176);
#line 617
goto label_427;
#line 617
label_427:
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
//clear ___nl__int__18;
#line 617
c_rt_lib0clear(&___nl__im__19);
#line 617
c_rt_lib0clear(&___nl__im__30);
#line 617
c_rt_lib0clear(&___nl__im__31);
#line 617
c_rt_lib0clear(&___nl__im__38);
#line 617
c_rt_lib0clear(&___nl__im__39);
#line 617
c_rt_lib0clear(&___nl__im__40);
#line 617
c_rt_lib0clear(&___nl__im__41);
#line 617
//clear ___nl__bool__42;
#line 617
c_rt_lib0clear(&___nl__im__43);
#line 617
c_rt_lib0clear(&___nl__im__44);
#line 617
c_rt_lib0clear(&___nl__im__45);
#line 617
c_rt_lib0clear(&___nl__im__46);
#line 617
c_rt_lib0clear(&___nl__im__47);
#line 617
c_rt_lib0clear(&___nl__im__65);
#line 617
c_rt_lib0clear(&___nl__im__66);
#line 617
c_rt_lib0clear(&___nl__im__68);
#line 617
//clear ___nl__int__69;
#line 617
//clear ___nl__int__70;
#line 617
//clear ___nl__int__71;
#line 617
//clear ___nl__bool__72;
#line 617
//clear ___nl__int__73;
#line 617
c_rt_lib0clear(&___nl__im__74);
#line 617
c_rt_lib0clear(&___nl__im__88);
#line 617
c_rt_lib0clear(&___nl__im__89);
#line 617
c_rt_lib0clear(&___nl__im__98);
#line 617
c_rt_lib0clear(&___nl__im__99);
#line 617
//clear ___nl__int__100;
#line 617
//clear ___nl__int__101;
#line 617
//clear ___nl__int__102;
#line 617
//clear ___nl__bool__103;
#line 617
//clear ___nl__int__104;
#line 617
c_rt_lib0clear(&___nl__im__105);
#line 617
c_rt_lib0clear(&___nl__im__112);
#line 617
c_rt_lib0clear(&___nl__im__113);
#line 617
c_rt_lib0clear(&___nl__im__121);
#line 617
c_rt_lib0clear(&___nl__im__122);
#line 617
c_rt_lib0clear(&___nl__im__131);
#line 617
c_rt_lib0clear(&___nl__im__132);
#line 617
c_rt_lib0clear(&___nl__im__140);
#line 617
c_rt_lib0clear(&___nl__im__141);
#line 617
c_rt_lib0clear(&___nl__im__143);
#line 617
c_rt_lib0clear(&___nl__im__144);
#line 617
c_rt_lib0clear(&___nl__im__149);
#line 617
c_rt_lib0clear(&___nl__im__150);
#line 617
c_rt_lib0clear(&___nl__im__155);
#line 617
c_rt_lib0clear(&___nl__im__156);
#line 617
c_rt_lib0clear(&___nl__im__158);
#line 617
c_rt_lib0clear(&___nl__im__159);
#line 617
c_rt_lib0clear(&___nl__im__162);
#line 617
c_rt_lib0clear(&___nl__im__163);
#line 617
c_rt_lib0clear(&___nl__im__166);
#line 617
c_rt_lib0clear(&___nl__im__167);
#line 617
c_rt_lib0clear(&___nl__im__171);
#line 617
c_rt_lib0clear(&___nl__im__172);
#line 617
c_rt_lib0clear(&___nl__im__174);
#line 617
c_rt_lib0clear(&___nl__im__175);
#line 617
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
#line 621
___nl__int__2 = string0length(___nl__im__0);
#line 621
___nl__int__3 = 0;
#line 621
___nl__int__4 = ___nl__int__2 == ___nl__int__3;
#line 621
___nl__bool__1 = ___nl__int__4;
#line 621
//clear ___nl__int__2;
#line 621
//clear ___nl__int__3;
#line 621
//clear ___nl__int__4;
#line 621
___nl__bool__1 = !___nl__bool__1;
#line 621
if(___nl__bool__1){ goto label_14;}
#line 621
___nl__bool__5 = false;
#line 621
c_rt_lib0clear(&___nl__im__0);
#line 621
//clear ___nl__bool__1;
#line 621
return ___nl__bool__5;
#line 621
goto label_14;
#line 621
label_14:
;
#line 621
//clear ___nl__bool__1;
#line 621
//clear ___nl__bool__5;
#line 622
___nl__int__8 = 0;
#line 622
___nl__int__9 = 1;
#line 622
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 622
//clear ___nl__int__8;
#line 622
//clear ___nl__int__9;
#line 622
___nl__bool__6 = string0is_letter(___nl__im__7);
#line 622
c_rt_lib0clear(&___nl__im__7);
#line 622
___nl__bool__6 = !___nl__bool__6;
#line 622
___nl__bool__6 = !___nl__bool__6;
#line 622
if(___nl__bool__6){ goto label_32;}
#line 622
___nl__bool__10 = false;
#line 622
c_rt_lib0clear(&___nl__im__0);
#line 622
//clear ___nl__bool__6;
#line 622
return ___nl__bool__10;
#line 622
goto label_32;
#line 622
label_32:
;
#line 622
//clear ___nl__bool__6;
#line 622
//clear ___nl__bool__10;
#line 623
c_rt_lib0move(&___nl__im__11, string0to_array(___nl__im__0));
#line 623
___nl__int__13 = 0;
#line 623
___nl__int__14 = 1;
#line 623
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 623
label_39:
;
#line 623
___nl__int__17 = ___nl__int__13 >= ___nl__int__15;
#line 623
___nl__bool__16 = ___nl__int__17;
#line 623
if(___nl__bool__16){ goto label_76;}
#line 623
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 623
c_rt_lib0copy(&___nl__im__12, ___nl__im__18);
#line 624
___nl__bool__19 = string0is_letter(___nl__im__12);
#line 624
if(___nl__bool__19){ goto label_48;}
#line 624
___nl__bool__19 = string0is_digit(___nl__im__12);
#line 624
label_48:
;
#line 624
if(___nl__bool__19){ goto label_53;}
#line 624
c_rt_lib0move(&___nl__im__20,___get_global_string_const(107));
#line 624
___nl__bool__19 = c_rt_lib0eq(___nl__im__12, ___nl__im__20);
#line 624
c_rt_lib0clear(&___nl__im__20);
#line 624
label_53:
;
#line 624
___nl__bool__19 = !___nl__bool__19;
#line 624
___nl__bool__19 = !___nl__bool__19;
#line 624
if(___nl__bool__19){ goto label_70;}
#line 624
___nl__bool__21 = false;
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
//clear ___nl__bool__19;
#line 624
return ___nl__bool__21;
#line 624
goto label_70;
#line 624
label_70:
;
#line 624
//clear ___nl__bool__19;
#line 624
//clear ___nl__bool__21;
#line 624
c_rt_lib0clear(&___nl__im__12);
#line 625
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 625
goto label_39;
#line 625
label_76:
;
#line 626
___nl__bool__22 = true;
#line 626
c_rt_lib0clear(&___nl__im__0);
#line 626
c_rt_lib0clear(&___nl__im__11);
#line 626
c_rt_lib0clear(&___nl__im__12);
#line 626
//clear ___nl__int__13;
#line 626
//clear ___nl__int__14;
#line 626
//clear ___nl__int__15;
#line 626
//clear ___nl__bool__16;
#line 626
//clear ___nl__int__17;
#line 626
c_rt_lib0clear(&___nl__im__18);
#line 626
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
