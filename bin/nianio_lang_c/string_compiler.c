
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "string_compiler.h"
#include "nlasm.h"
#include "translator.h"
#include "nparser.h"
#include "module_checker.h"
#include "type_checker.h"
#include "array.h"
#include "hash.h"
#include "post_processing.h"
#include "ptd.h"
#include "pretty_printer.h"
#include "nast.h"
#include "compiler_lib.h"
#include "compiler_lib.h"
#line 1 "string_compiler.nl"

static ImmT *__const__f = NULL;
void string_compiler_priv0__const__init();
ImmT string_compiler_priv0__const__sim(int __nr);
ImmT string_compiler_priv0__const__sing(int __nr);



ImmT  string_compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_compiler0compile(*var0, *var1);
}
ImmT  string_compiler0compile(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 23
___nl__bool__3 = true;
#line 23
c_rt_lib0move(&___nl__im__2, nparser0sparse(___nl__im__0, ___nl__im__1, ___nl__bool__3));
#line 23
//clear ___nl__bool__3;
#line 24
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(79));
#line 24
if(___nl__bool__4){ goto label_10;}
#line 37
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(123));
#line 37
if(___nl__bool__4){ goto label_84;}
#line 37
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 37
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 37
nl_die_arg(___nl__im__5);
#line 24
label_10:
;
#line 24
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(79)));
#line 24
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 25
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 26
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 27
___nl__bool__11 = false;
#line 27
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 27
c_rt_lib0move(&___nl__im__10, module_checker0check_module(___nl__im__6, ___nl__im__12, &___nl__im__9));
#line 27
//clear ___nl__bool__11;
#line 27
c_rt_lib0clear(&___nl__im__12);
#line 28
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(51)));
#line 29
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 29
___nl__int__15 = 0;
#line 29
___nl__int__16 = ___nl__int__14 == ___nl__int__15;
#line 29
___nl__bool__13 = ___nl__int__16;
#line 29
//clear ___nl__int__14;
#line 29
//clear ___nl__int__15;
#line 29
//clear ___nl__int__16;
#line 29
___nl__bool__13 = !___nl__bool__13;
#line 29
if(___nl__bool__13){ goto label_37;}
#line 30
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(0));
#line 31
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(167)));
#line 31
c_rt_lib0delete(hash0set_value(&___nl__im__17, ___nl__im__18, ___nl__im__6));
#line 31
c_rt_lib0clear(&___nl__im__18);
#line 32
c_rt_lib0move(&___nl__im__19, type_checker0check_modules(&___nl__im__17, ___nl__im__17));
#line 33
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(51)));
#line 34
goto label_37;
#line 34
label_37:
;
#line 34
//clear ___nl__bool__13;
#line 34
c_rt_lib0clear(&___nl__im__17);
#line 34
c_rt_lib0clear(&___nl__im__19);
#line 35
___nl__int__21 = c_rt_lib0array_len(___nl__im__8);
#line 35
___nl__int__22 = 0;
#line 35
___nl__int__23 = ___nl__int__21 == ___nl__int__22;
#line 35
___nl__bool__20 = ___nl__int__23;
#line 35
//clear ___nl__int__21;
#line 35
//clear ___nl__int__22;
#line 35
//clear ___nl__int__23;
#line 35
___nl__bool__20 = !___nl__bool__20;
#line 35
if(___nl__bool__20){ goto label_68;}
#line 35
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 35
c_rt_lib0move(&___nl__im__25, translator0translate(___nl__im__6, ___nl__im__26));
#line 35
c_rt_lib0clear(&___nl__im__26);
#line 35
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__25));
#line 35
c_rt_lib0clear(&___nl__im__25);
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
c_rt_lib0clear(&___nl__im__1);
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
//clear ___nl__bool__4;
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0clear(&___nl__im__8);
#line 35
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0clear(&___nl__im__10);
#line 35
//clear ___nl__bool__20;
#line 35
return ___nl__im__24;
#line 35
goto label_68;
#line 35
label_68:
;
#line 35
//clear ___nl__bool__20;
#line 35
c_rt_lib0clear(&___nl__im__24);
#line 36
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__8));
#line 36
c_rt_lib0clear(&___nl__im__0);
#line 36
c_rt_lib0clear(&___nl__im__1);
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
//clear ___nl__bool__4;
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0clear(&___nl__im__8);
#line 36
c_rt_lib0clear(&___nl__im__9);
#line 36
c_rt_lib0clear(&___nl__im__10);
#line 36
return ___nl__im__27;
#line 37
goto label_103;
#line 37
label_84:
;
#line 37
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(123)));
#line 37
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 38
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__28));
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
//clear ___nl__bool__4;
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
c_rt_lib0clear(&___nl__im__27);
#line 38
c_rt_lib0clear(&___nl__im__28);
#line 38
c_rt_lib0clear(&___nl__im__29);
#line 38
return ___nl__im__30;
#line 39
goto label_103;
#line 39
label_103:
;
return NULL;

}

ImmT  string_compiler0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0modules_t");
return string_compiler0modules_t();
}
ImmT string_compiler0modules_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(0);
}
ImmT string_compiler0modules_t0cal() {
string_compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 43
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 43
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 43
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(1269), ___nl__im__3, ___get_global_const(212), ___nl__im__4));
#line 43
c_rt_lib0clear(&___nl__im__3);
#line 43
c_rt_lib0clear(&___nl__im__4);
#line 43
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 43
c_rt_lib0clear(&___nl__im__2);
#line 43
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 43
c_rt_lib0clear(&___nl__im__1);
#line 43
return ___nl__im__0;
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
return NULL;
return NULL;

}

ImmT  string_compiler0type_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0type_check_t");
return string_compiler0type_check_t();
}
ImmT string_compiler0type_check_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(1);
}
ImmT string_compiler0type_check_t0cal() {
string_compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 47
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 47
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 47
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 47
c_rt_lib0clear(&___nl__im__6);
#line 47
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(1248), ___nl__im__3, ___get_global_const(1270), ___nl__im__5));
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
return ___nl__im__0;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
return NULL;
return NULL;

}

ImmT  string_compiler0printed_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0printed_struct_t");
return string_compiler0printed_struct_t();
}
ImmT string_compiler0printed_struct_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(2);
}
ImmT string_compiler0printed_struct_t0cal() {
string_compiler_priv0__const__init();
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
#line 52
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 52
c_rt_lib0clear(&___nl__im__3);
#line 53
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 53
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 53
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 53
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(167), ___nl__im__7, ___get_global_const(1169), ___nl__im__8, ___get_global_const(1119), ___nl__im__9));
#line 53
c_rt_lib0clear(&___nl__im__7);
#line 53
c_rt_lib0clear(&___nl__im__8);
#line 53
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 53
c_rt_lib0clear(&___nl__im__6);
#line 53
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(465), ___nl__im__2, ___get_global_const(208), ___nl__im__4));
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
return ___nl__im__0;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
return NULL;
return NULL;

}

ImmT  string_compiler0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0error_t");
return string_compiler0error_t();
}
ImmT string_compiler0error_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(3);
}
ImmT string_compiler0error_t0cal() {
string_compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(53), ___get_global_const(54)));
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 58
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 58
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(123), ___nl__im__2, ___get_global_const(397), ___nl__im__3));
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
c_rt_lib0clear(&___nl__im__3);
#line 58
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
return ___nl__im__0;
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
return NULL;
return NULL;

}

ImmT  string_compiler0print_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0print_modules");
ImmT  *var0 = &(_tab[0]);
return string_compiler0print_modules(*var0);
}
ImmT  string_compiler0print_modules(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 62
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 63
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 63
label_2:
;
#line 63
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 63
if(___nl__bool__3){ goto label_12;}
#line 63
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 63
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 64
c_rt_lib0move(&___nl__im__6, pretty_printer0print_module_to_struct(___nl__im__4));
#line 64
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 64
c_rt_lib0clear(&___nl__im__6);
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 65
goto label_2;
#line 65
label_12:
;
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
//clear ___nl__bool__3;
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
c_rt_lib0clear(&___nl__im__5);
#line 66
return ___nl__im__1;
return NULL;

}

ImmT  string_compiler0parse_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0parse_module");
string_compiler0modules_t0type *var0 = &(_tab[0]);
return string_compiler0parse_module(*var0);
}
ImmT  string_compiler0parse_module(string_compiler0modules_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
#line 73
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 74
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 75
label_3:
;
#line 75
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 75
if(___nl__bool__4){ goto label_97;}
#line 75
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 75
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 76
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(1269)));
#line 76
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(212)));
#line 76
___nl__bool__10 = true;
#line 76
c_rt_lib0move(&___nl__im__7, nparser0sparse(___nl__im__8, ___nl__im__9, ___nl__bool__10));
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 76
c_rt_lib0clear(&___nl__im__9);
#line 76
//clear ___nl__bool__10;
#line 76
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(79));
#line 76
if(___nl__bool__11){ goto label_22;}
#line 83
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(123));
#line 83
if(___nl__bool__11){ goto label_50;}
#line 83
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 83
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__7));
#line 83
nl_die_arg(___nl__im__12);
#line 76
label_22:
;
#line 76
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(79)));
#line 76
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 77
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 78
___nl__bool__17 = false;
#line 78
c_rt_lib0move(&___nl__im__18, c_rt_lib0bool_to_nl_native(___nl__bool__17));
#line 78
c_rt_lib0move(&___nl__im__16, module_checker0check_module(___nl__im__13, ___nl__im__18, &___nl__im__15));
#line 78
//clear ___nl__bool__17;
#line 78
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(51)));
#line 79
___nl__int__21 = 0;
#line 79
___nl__int__22 = 1;
#line 79
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 79
label_35:
;
#line 79
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 79
___nl__bool__24 = ___nl__int__25;
#line 79
if(___nl__bool__24){ goto label_47;}
#line 79
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 79
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 80
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(2, ___get_global_const(123), ___nl__im__20, ___get_global_const(397), ___nl__im__3));
#line 80
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__27));
#line 80
c_rt_lib0clear(&___nl__im__27);
#line 80
c_rt_lib0clear(&___nl__im__20);
#line 81
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 81
goto label_35;
#line 81
label_47:
;
#line 82
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__3, ___nl__im__13));
#line 83
goto label_70;
#line 83
label_50:
;
#line 83
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(123)));
#line 83
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 84
___nl__int__31 = 0;
#line 84
___nl__int__32 = 1;
#line 84
___nl__int__33 = c_rt_lib0array_len(___nl__im__28);
#line 84
label_56:
;
#line 84
___nl__int__35 = ___nl__int__31 >= ___nl__int__33;
#line 84
___nl__bool__34 = ___nl__int__35;
#line 84
if(___nl__bool__34){ goto label_68;}
#line 84
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__28, ___nl__int__31));
#line 84
c_rt_lib0copy(&___nl__im__30, ___nl__im__36);
#line 85
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(2, ___get_global_const(123), ___nl__im__30, ___get_global_const(397), ___nl__im__3));
#line 85
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__37));
#line 85
c_rt_lib0clear(&___nl__im__37);
#line 85
c_rt_lib0clear(&___nl__im__30);
#line 86
___nl__int__31 = ___nl__int__31 + ___nl__int__32;
#line 86
goto label_56;
#line 86
label_68:
;
#line 87
goto label_70;
#line 87
label_70:
;
#line 87
c_rt_lib0clear(&___nl__im__7);
#line 87
//clear ___nl__bool__11;
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
c_rt_lib0clear(&___nl__im__19);
#line 87
c_rt_lib0clear(&___nl__im__20);
#line 87
//clear ___nl__int__21;
#line 87
//clear ___nl__int__22;
#line 87
//clear ___nl__int__23;
#line 87
//clear ___nl__bool__24;
#line 87
//clear ___nl__int__25;
#line 87
c_rt_lib0clear(&___nl__im__26);
#line 87
c_rt_lib0clear(&___nl__im__28);
#line 87
c_rt_lib0clear(&___nl__im__29);
#line 87
c_rt_lib0clear(&___nl__im__30);
#line 87
//clear ___nl__int__31;
#line 87
//clear ___nl__int__32;
#line 87
//clear ___nl__int__33;
#line 87
//clear ___nl__bool__34;
#line 87
//clear ___nl__int__35;
#line 87
c_rt_lib0clear(&___nl__im__36);
#line 88
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 88
goto label_3;
#line 88
label_97:
;
#line 89
___nl__int__39 = c_rt_lib0array_len(___nl__im__1);
#line 89
___nl__int__40 = 0;
#line 89
___nl__int__41 = ___nl__int__39 > ___nl__int__40;
#line 89
___nl__bool__38 = ___nl__int__41;
#line 89
//clear ___nl__int__39;
#line 89
//clear ___nl__int__40;
#line 89
//clear ___nl__int__41;
#line 89
___nl__bool__38 = !___nl__bool__38;
#line 89
if(___nl__bool__38){ goto label_142;}
#line 89
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__1));
#line 89
c_rt_lib0clear(&___nl__im__0);
#line 89
c_rt_lib0clear(&___nl__im__1);
#line 89
c_rt_lib0clear(&___nl__im__2);
#line 89
c_rt_lib0clear(&___nl__im__3);
#line 89
//clear ___nl__bool__4;
#line 89
c_rt_lib0clear(&___nl__im__5);
#line 89
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0clear(&___nl__im__7);
#line 89
//clear ___nl__bool__11;
#line 89
c_rt_lib0clear(&___nl__im__12);
#line 89
c_rt_lib0clear(&___nl__im__13);
#line 89
c_rt_lib0clear(&___nl__im__14);
#line 89
c_rt_lib0clear(&___nl__im__15);
#line 89
c_rt_lib0clear(&___nl__im__16);
#line 89
c_rt_lib0clear(&___nl__im__19);
#line 89
c_rt_lib0clear(&___nl__im__20);
#line 89
//clear ___nl__int__21;
#line 89
//clear ___nl__int__22;
#line 89
//clear ___nl__int__23;
#line 89
//clear ___nl__bool__24;
#line 89
//clear ___nl__int__25;
#line 89
c_rt_lib0clear(&___nl__im__26);
#line 89
c_rt_lib0clear(&___nl__im__28);
#line 89
c_rt_lib0clear(&___nl__im__29);
#line 89
c_rt_lib0clear(&___nl__im__30);
#line 89
//clear ___nl__int__31;
#line 89
//clear ___nl__int__32;
#line 89
//clear ___nl__int__33;
#line 89
//clear ___nl__bool__34;
#line 89
//clear ___nl__int__35;
#line 89
c_rt_lib0clear(&___nl__im__36);
#line 89
//clear ___nl__bool__38;
#line 89
return ___nl__im__42;
#line 89
goto label_142;
#line 89
label_142:
;
#line 89
//clear ___nl__bool__38;
#line 89
c_rt_lib0clear(&___nl__im__42);
#line 90
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
c_rt_lib0clear(&___nl__im__1);
#line 90
c_rt_lib0clear(&___nl__im__2);
#line 90
c_rt_lib0clear(&___nl__im__3);
#line 90
//clear ___nl__bool__4;
#line 90
c_rt_lib0clear(&___nl__im__5);
#line 90
c_rt_lib0clear(&___nl__im__6);
#line 90
c_rt_lib0clear(&___nl__im__7);
#line 90
//clear ___nl__bool__11;
#line 90
c_rt_lib0clear(&___nl__im__12);
#line 90
c_rt_lib0clear(&___nl__im__13);
#line 90
c_rt_lib0clear(&___nl__im__14);
#line 90
c_rt_lib0clear(&___nl__im__15);
#line 90
c_rt_lib0clear(&___nl__im__16);
#line 90
c_rt_lib0clear(&___nl__im__19);
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
//clear ___nl__int__21;
#line 90
//clear ___nl__int__22;
#line 90
//clear ___nl__int__23;
#line 90
//clear ___nl__bool__24;
#line 90
//clear ___nl__int__25;
#line 90
c_rt_lib0clear(&___nl__im__26);
#line 90
c_rt_lib0clear(&___nl__im__28);
#line 90
c_rt_lib0clear(&___nl__im__29);
#line 90
c_rt_lib0clear(&___nl__im__30);
#line 90
//clear ___nl__int__31;
#line 90
//clear ___nl__int__32;
#line 90
//clear ___nl__int__33;
#line 90
//clear ___nl__bool__34;
#line 90
//clear ___nl__int__35;
#line 90
c_rt_lib0clear(&___nl__im__36);
#line 90
return ___nl__im__43;
return NULL;

}

ImmT  string_compiler0check_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0check_type");
string_compiler0type_check_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_compiler0check_type(*var0, *var1);
}
ImmT  string_compiler0check_type(string_compiler0type_check_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
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
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
#line 97
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 98
___nl__int__4 = 0;
#line 98
___nl__int__5 = 1;
#line 98
___nl__int__6 = c_rt_lib0array_len(___nl__im__0);
#line 98
label_4:
;
#line 98
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 98
___nl__bool__7 = ___nl__int__8;
#line 98
if(___nl__bool__7){ goto label_146;}
#line 98
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__4));
#line 98
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 99
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 100
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 101
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(0));
#line 102
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(1270)));
#line 102
___nl__int__15 = 0;
#line 102
___nl__int__16 = 1;
#line 102
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 102
label_17:
;
#line 102
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 102
___nl__bool__18 = ___nl__int__19;
#line 102
if(___nl__bool__18){ goto label_38;}
#line 102
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 102
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 103
c_rt_lib0move(&___nl__im__22, hash0get_value(___nl__im__1, ___nl__im__14));
#line 103
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(167)));
#line 103
c_rt_lib0clear(&___nl__im__22);
#line 103
c_rt_lib0move(&___nl__im__23, hash0get_value(___nl__im__1, ___nl__im__14));
#line 103
c_rt_lib0delete(hash0set_value(&___nl__im__10, ___nl__im__21, ___nl__im__23));
#line 103
c_rt_lib0clear(&___nl__im__21);
#line 103
c_rt_lib0clear(&___nl__im__23);
#line 104
c_rt_lib0move(&___nl__im__25, hash0get_value(___nl__im__1, ___nl__im__14));
#line 104
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(167)));
#line 104
c_rt_lib0clear(&___nl__im__25);
#line 104
c_rt_lib0delete(hash0set_value(&___nl__im__12, ___nl__im__24, ___nl__im__14));
#line 104
c_rt_lib0clear(&___nl__im__24);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 105
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 105
goto label_17;
#line 105
label_38:
;
#line 106
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(1248)));
#line 106
___nl__int__28 = 0;
#line 106
___nl__int__29 = 1;
#line 106
___nl__int__30 = c_rt_lib0array_len(___nl__im__26);
#line 106
label_43:
;
#line 106
___nl__int__32 = ___nl__int__28 >= ___nl__int__30;
#line 106
___nl__bool__31 = ___nl__int__32;
#line 106
if(___nl__bool__31){ goto label_64;}
#line 106
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__26, ___nl__int__28));
#line 106
c_rt_lib0copy(&___nl__im__27, ___nl__im__33);
#line 107
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__1, ___nl__im__27));
#line 107
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(167)));
#line 107
c_rt_lib0clear(&___nl__im__35);
#line 107
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__1, ___nl__im__27));
#line 107
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__34, ___nl__im__36));
#line 107
c_rt_lib0clear(&___nl__im__34);
#line 107
c_rt_lib0clear(&___nl__im__36);
#line 108
c_rt_lib0move(&___nl__im__38, hash0get_value(___nl__im__1, ___nl__im__27));
#line 108
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(167)));
#line 108
c_rt_lib0clear(&___nl__im__38);
#line 108
c_rt_lib0delete(hash0set_value(&___nl__im__12, ___nl__im__37, ___nl__im__27));
#line 108
c_rt_lib0clear(&___nl__im__37);
#line 108
c_rt_lib0clear(&___nl__im__27);
#line 109
___nl__int__28 = ___nl__int__28 + ___nl__int__29;
#line 109
goto label_43;
#line 109
label_64:
;
#line 110
c_rt_lib0move(&___nl__im__39, type_checker0check_modules(&___nl__im__11, ___nl__im__10));
#line 111
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(51)));
#line 111
___nl__int__42 = 0;
#line 111
___nl__int__43 = 1;
#line 111
___nl__int__44 = c_rt_lib0array_len(___nl__im__40);
#line 111
label_70:
;
#line 111
___nl__int__46 = ___nl__int__42 >= ___nl__int__44;
#line 111
___nl__bool__45 = ___nl__int__46;
#line 111
if(___nl__bool__45){ goto label_86;}
#line 111
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__40, ___nl__int__42));
#line 111
c_rt_lib0copy(&___nl__im__41, ___nl__im__47);
#line 112
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(151)));
#line 112
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__12, ___nl__im__50));
#line 112
c_rt_lib0clear(&___nl__im__50);
#line 112
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(2, ___get_global_const(123), ___nl__im__41, ___get_global_const(397), ___nl__im__49));
#line 112
c_rt_lib0clear(&___nl__im__49);
#line 112
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__48));
#line 112
c_rt_lib0clear(&___nl__im__48);
#line 112
c_rt_lib0clear(&___nl__im__41);
#line 113
___nl__int__42 = ___nl__int__42 + ___nl__int__43;
#line 113
goto label_70;
#line 113
label_86:
;
#line 114
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(51)));
#line 114
___nl__int__52 = c_rt_lib0array_len(___nl__im__53);
#line 114
c_rt_lib0clear(&___nl__im__53);
#line 114
___nl__int__54 = 0;
#line 114
___nl__int__55 = ___nl__int__52 > ___nl__int__54;
#line 114
___nl__bool__51 = ___nl__int__55;
#line 114
//clear ___nl__int__52;
#line 114
//clear ___nl__int__54;
#line 114
//clear ___nl__int__55;
#line 114
___nl__bool__51 = !___nl__bool__51;
#line 114
if(___nl__bool__51){ goto label_140;}
#line 114
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__2));
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
c_rt_lib0clear(&___nl__im__2);
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 114
//clear ___nl__int__4;
#line 114
//clear ___nl__int__5;
#line 114
//clear ___nl__int__6;
#line 114
//clear ___nl__bool__7;
#line 114
//clear ___nl__int__8;
#line 114
c_rt_lib0clear(&___nl__im__9);
#line 114
c_rt_lib0clear(&___nl__im__10);
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 114
c_rt_lib0clear(&___nl__im__12);
#line 114
c_rt_lib0clear(&___nl__im__13);
#line 114
c_rt_lib0clear(&___nl__im__14);
#line 114
//clear ___nl__int__15;
#line 114
//clear ___nl__int__16;
#line 114
//clear ___nl__int__17;
#line 114
//clear ___nl__bool__18;
#line 114
//clear ___nl__int__19;
#line 114
c_rt_lib0clear(&___nl__im__20);
#line 114
c_rt_lib0clear(&___nl__im__26);
#line 114
c_rt_lib0clear(&___nl__im__27);
#line 114
//clear ___nl__int__28;
#line 114
//clear ___nl__int__29;
#line 114
//clear ___nl__int__30;
#line 114
//clear ___nl__bool__31;
#line 114
//clear ___nl__int__32;
#line 114
c_rt_lib0clear(&___nl__im__33);
#line 114
c_rt_lib0clear(&___nl__im__39);
#line 114
c_rt_lib0clear(&___nl__im__40);
#line 114
c_rt_lib0clear(&___nl__im__41);
#line 114
//clear ___nl__int__42;
#line 114
//clear ___nl__int__43;
#line 114
//clear ___nl__int__44;
#line 114
//clear ___nl__bool__45;
#line 114
//clear ___nl__int__46;
#line 114
c_rt_lib0clear(&___nl__im__47);
#line 114
//clear ___nl__bool__51;
#line 114
return ___nl__im__56;
#line 114
goto label_140;
#line 114
label_140:
;
#line 114
//clear ___nl__bool__51;
#line 114
c_rt_lib0clear(&___nl__im__56);
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 115
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 115
goto label_4;
#line 115
label_146:
;
#line 116
c_rt_lib0move(&___nl__im__58,___get_global_const(37));
#line 116
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__58));
#line 116
c_rt_lib0clear(&___nl__im__58);
#line 116
c_rt_lib0clear(&___nl__im__0);
#line 116
c_rt_lib0clear(&___nl__im__1);
#line 116
c_rt_lib0clear(&___nl__im__2);
#line 116
c_rt_lib0clear(&___nl__im__3);
#line 116
//clear ___nl__int__4;
#line 116
//clear ___nl__int__5;
#line 116
//clear ___nl__int__6;
#line 116
//clear ___nl__bool__7;
#line 116
//clear ___nl__int__8;
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
c_rt_lib0clear(&___nl__im__10);
#line 116
c_rt_lib0clear(&___nl__im__11);
#line 116
c_rt_lib0clear(&___nl__im__12);
#line 116
c_rt_lib0clear(&___nl__im__13);
#line 116
c_rt_lib0clear(&___nl__im__14);
#line 116
//clear ___nl__int__15;
#line 116
//clear ___nl__int__16;
#line 116
//clear ___nl__int__17;
#line 116
//clear ___nl__bool__18;
#line 116
//clear ___nl__int__19;
#line 116
c_rt_lib0clear(&___nl__im__20);
#line 116
c_rt_lib0clear(&___nl__im__26);
#line 116
c_rt_lib0clear(&___nl__im__27);
#line 116
//clear ___nl__int__28;
#line 116
//clear ___nl__int__29;
#line 116
//clear ___nl__int__30;
#line 116
//clear ___nl__bool__31;
#line 116
//clear ___nl__int__32;
#line 116
c_rt_lib0clear(&___nl__im__33);
#line 116
c_rt_lib0clear(&___nl__im__39);
#line 116
c_rt_lib0clear(&___nl__im__40);
#line 116
c_rt_lib0clear(&___nl__im__41);
#line 116
//clear ___nl__int__42;
#line 116
//clear ___nl__int__43;
#line 116
//clear ___nl__int__44;
#line 116
//clear ___nl__bool__45;
#line 116
//clear ___nl__int__46;
#line 116
c_rt_lib0clear(&___nl__im__47);
#line 116
return ___nl__im__57;
return NULL;

}

ImmT  string_compiler0compile_to_nlasm0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_nlasm");
ImmT  *var0 = &(_tab[0]);
return string_compiler0compile_to_nlasm(*var0);
}
ImmT  string_compiler0compile_to_nlasm(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
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
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
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
#line 123
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 124
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 125
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 125
label_3:
;
#line 125
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 125
if(___nl__bool__4){ goto label_49;}
#line 125
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 125
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 126
___nl__bool__8 = true;
#line 126
c_rt_lib0move(&___nl__im__7, nparser0sparse(___nl__im__5, ___nl__im__3, ___nl__bool__8));
#line 126
//clear ___nl__bool__8;
#line 126
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(79));
#line 126
if(___nl__bool__9){ goto label_18;}
#line 131
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(123));
#line 131
if(___nl__bool__9){ goto label_32;}
#line 131
c_rt_lib0move(&___nl__im__10,___get_global_const(16));
#line 131
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__7));
#line 131
nl_die_arg(___nl__im__10);
#line 126
label_18:
;
#line 126
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(79)));
#line 126
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 127
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(0));
#line 128
___nl__bool__15 = false;
#line 128
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__15));
#line 128
c_rt_lib0move(&___nl__im__14, module_checker0check_module(___nl__im__11, ___nl__im__16, &___nl__im__13));
#line 128
//clear ___nl__bool__15;
#line 128
c_rt_lib0clear(&___nl__im__16);
#line 129
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(51)));
#line 129
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__17));
#line 129
c_rt_lib0clear(&___nl__im__17);
#line 130
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__3, ___nl__im__11));
#line 131
goto label_37;
#line 131
label_32:
;
#line 131
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(123)));
#line 131
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 132
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__18));
#line 133
goto label_37;
#line 133
label_37:
;
#line 133
c_rt_lib0clear(&___nl__im__7);
#line 133
//clear ___nl__bool__9;
#line 133
c_rt_lib0clear(&___nl__im__10);
#line 133
c_rt_lib0clear(&___nl__im__11);
#line 133
c_rt_lib0clear(&___nl__im__12);
#line 133
c_rt_lib0clear(&___nl__im__13);
#line 133
c_rt_lib0clear(&___nl__im__14);
#line 133
c_rt_lib0clear(&___nl__im__18);
#line 133
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 134
goto label_3;
#line 134
label_49:
;
#line 135
___nl__int__21 = c_rt_lib0array_len(___nl__im__1);
#line 135
___nl__int__22 = 0;
#line 135
___nl__int__23 = ___nl__int__21 > ___nl__int__22;
#line 135
___nl__bool__20 = ___nl__int__23;
#line 135
//clear ___nl__int__21;
#line 135
//clear ___nl__int__22;
#line 135
//clear ___nl__int__23;
#line 135
___nl__bool__20 = !___nl__bool__20;
#line 135
if(___nl__bool__20){ goto label_79;}
#line 135
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__1));
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
//clear ___nl__bool__4;
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
//clear ___nl__bool__9;
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
c_rt_lib0clear(&___nl__im__11);
#line 135
c_rt_lib0clear(&___nl__im__12);
#line 135
c_rt_lib0clear(&___nl__im__13);
#line 135
c_rt_lib0clear(&___nl__im__14);
#line 135
c_rt_lib0clear(&___nl__im__18);
#line 135
c_rt_lib0clear(&___nl__im__19);
#line 135
//clear ___nl__bool__20;
#line 135
return ___nl__im__24;
#line 135
goto label_79;
#line 135
label_79:
;
#line 135
//clear ___nl__bool__20;
#line 135
c_rt_lib0clear(&___nl__im__24);
#line 136
c_rt_lib0move(&___nl__im__25, type_checker0check_modules(&___nl__im__2, ___nl__im__2));
#line 137
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(51)));
#line 137
___nl__int__27 = c_rt_lib0array_len(___nl__im__28);
#line 137
c_rt_lib0clear(&___nl__im__28);
#line 137
___nl__int__29 = 0;
#line 137
___nl__int__30 = ___nl__int__27 > ___nl__int__29;
#line 137
___nl__bool__26 = ___nl__int__30;
#line 137
//clear ___nl__int__27;
#line 137
//clear ___nl__int__29;
#line 137
//clear ___nl__int__30;
#line 137
___nl__bool__26 = !___nl__bool__26;
#line 137
if(___nl__bool__26){ goto label_117;}
#line 137
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(51)));
#line 137
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__32));
#line 137
c_rt_lib0clear(&___nl__im__32);
#line 137
c_rt_lib0clear(&___nl__im__0);
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
//clear ___nl__bool__4;
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
//clear ___nl__bool__9;
#line 137
c_rt_lib0clear(&___nl__im__10);
#line 137
c_rt_lib0clear(&___nl__im__11);
#line 137
c_rt_lib0clear(&___nl__im__12);
#line 137
c_rt_lib0clear(&___nl__im__13);
#line 137
c_rt_lib0clear(&___nl__im__14);
#line 137
c_rt_lib0clear(&___nl__im__18);
#line 137
c_rt_lib0clear(&___nl__im__19);
#line 137
c_rt_lib0clear(&___nl__im__25);
#line 137
//clear ___nl__bool__26;
#line 137
return ___nl__im__31;
#line 137
goto label_117;
#line 137
label_117:
;
#line 137
//clear ___nl__bool__26;
#line 137
c_rt_lib0clear(&___nl__im__31);
#line 138
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(0));
#line 139
c_rt_lib0move(&___nl__im__37, c_rt_lib0init_iter(___nl__im__2));
#line 139
label_122:
;
#line 139
___nl__bool__35 = c_rt_lib0is_end_hash(___nl__im__37);
#line 139
if(___nl__bool__35){ goto label_134;}
#line 139
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_key_iter(___nl__im__37));
#line 139
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__34));
#line 140
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(0));
#line 140
c_rt_lib0move(&___nl__im__38, translator0translate(___nl__im__36, ___nl__im__39));
#line 140
c_rt_lib0clear(&___nl__im__39);
#line 140
c_rt_lib0delete(hash0set_value(&___nl__im__33, ___nl__im__34, ___nl__im__38));
#line 140
c_rt_lib0clear(&___nl__im__38);
#line 141
c_rt_lib0move(&___nl__im__37, c_rt_lib0next_iter(___nl__im__37));
#line 141
goto label_122;
#line 141
label_134:
;
#line 142
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(81)));
#line 142
c_rt_lib0move(&___nl__im__40, post_processing0init(___nl__im__41, ___nl__im__42));
#line 142
c_rt_lib0clear(&___nl__im__41);
#line 142
c_rt_lib0clear(&___nl__im__42);
#line 143
c_rt_lib0delete(post_processing0find(&___nl__im__40, &___nl__im__33));
#line 144
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__33));
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__3);
#line 144
//clear ___nl__bool__4;
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
//clear ___nl__bool__9;
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
c_rt_lib0clear(&___nl__im__11);
#line 144
c_rt_lib0clear(&___nl__im__12);
#line 144
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0clear(&___nl__im__14);
#line 144
c_rt_lib0clear(&___nl__im__18);
#line 144
c_rt_lib0clear(&___nl__im__19);
#line 144
c_rt_lib0clear(&___nl__im__25);
#line 144
c_rt_lib0clear(&___nl__im__33);
#line 144
c_rt_lib0clear(&___nl__im__34);
#line 144
//clear ___nl__bool__35;
#line 144
c_rt_lib0clear(&___nl__im__36);
#line 144
c_rt_lib0clear(&___nl__im__37);
#line 144
c_rt_lib0clear(&___nl__im__40);
#line 144
return ___nl__im__43;
return NULL;

}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void string_compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
}}
ImmT string_compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = string_compiler0modules_t0cal();
	break;
case 1:
	___const__[1] = string_compiler0type_check_t0cal();
	break;
case 2:
	___const__[2] = string_compiler0printed_struct_t0cal();
	break;
case 3:
	___const__[3] = string_compiler0error_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
