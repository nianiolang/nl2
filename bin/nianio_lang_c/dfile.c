
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "dfile.h"
#include "ov.h"
#include "c_std_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "nl.h"
#include "ptd.h"
#line 1 "dfile.nl"

static ImmT *__const__f = NULL;
void dfile_priv0__const__init();
ImmT dfile_priv0__const__sim(int __nr);
ImmT dfile_priv0__const__sing(int __nr);

ImmT  dfile_priv0eat_ws(dfile0state_t0type* ___ref___im__0);
ImmT  dfile_priv0get_char(dfile0state_t0type* ___ref___im__0);
bool  dfile_priv0is_ov(dfile0state_t0type* ___ref___im__0);
ImmT  dfile_priv0eat_non_ws(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
ImmT  dfile_priv0parse_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
bool  dfile_priv0match_s(dfile0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0parse(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
ImmT  dfile_priv0sp(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0sprintstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
bool  dfile_priv0is_simple_string(ImmT  ___nl__im__0);
ImmT  dfile_priv0sprint_hash_key(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0get_ind(INT  ___nl__int__0);
ImmT  dfile_priv0sprint_hash(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3);
bool  dfile_priv0handle_debug(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0sprint(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3);
ImmT  dfile_priv0print_net_formatstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0print_net_format(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);


ImmT  dfile0deep_eq0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0deep_eq");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return dfile0deep_eq(*var0, *var1);
}
ImmT  dfile0deep_eq(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 15
c_rt_lib0move(&___nl__im__3, dfile0ssave(___nl__im__0));
#line 15
c_rt_lib0move(&___nl__im__4, dfile0ssave(___nl__im__1));
#line 15
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 15
c_rt_lib0clear(&___nl__im__3);
#line 15
c_rt_lib0clear(&___nl__im__4);
#line 15
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
c_rt_lib0clear(&___nl__im__1);
#line 15
//clear ___nl__bool__2;
#line 15
return ___nl__im__5;
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
c_rt_lib0clear(&___nl__im__1);
#line 15
//clear ___nl__bool__2;
#line 15
c_rt_lib0clear(&___nl__im__5);
#line 15
return NULL;
}

ImmT  dfile0rs0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0rs");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return dfile0rs(*var0, *var1);
}
ImmT  dfile0rs(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 19
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 19
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__im__3, ___get_global_const(280), ___nl__im__4));
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 20
___nl__int__7 = 0;
#line 20
___nl__int__8 = getIntFromImm(___nl__im__1);
#line 20
___nl__int__9 = ___nl__int__8 != ___nl__int__7;
#line 20
___nl__bool__5 = ___nl__int__9;
#line 20
//clear ___nl__int__7;
#line 20
//clear ___nl__int__8;
#line 20
//clear ___nl__int__9;
#line 20
___nl__bool__6 = !___nl__bool__5;
#line 20
if(___nl__bool__6){ goto label_3;}
#line 20
___nl__bool__5 = dfile_priv0is_simple_string(___nl__im__0);
#line 20
label_3:
;
#line 20
//clear ___nl__bool__6;
#line 20
___nl__bool__5 = !___nl__bool__5;
#line 20
if(___nl__bool__5){ goto label_2;}
#line 21
c_rt_lib0delete(dfile_priv0sp(&___nl__im__2, ___nl__im__0));
#line 22
goto label_1;
#line 22
label_2:
;
#line 23
c_rt_lib0delete(dfile_priv0sprintstr(&___nl__im__2, ___nl__im__0));
#line 24
goto label_1;
#line 24
label_1:
;
#line 24
//clear ___nl__bool__5;
#line 25
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(279)));
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
return ___nl__im__10;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__10);
#line 25
return NULL;
}

ImmT  dfile0ssave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave");
ImmT  *var0 = &(_tab[0]);
return dfile0ssave(*var0);
}
ImmT  dfile0ssave(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 29
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__im__2, ___get_global_const(280), ___nl__im__3));
#line 29
c_rt_lib0clear(&___nl__im__2);
#line 29
c_rt_lib0clear(&___nl__im__3);
#line 30
___nl__int__4 = 0;
#line 30
___nl__bool__5 = false;
#line 30
c_rt_lib0delete(dfile_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 30
//clear ___nl__int__4;
#line 30
//clear ___nl__bool__5;
#line 31
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(279)));
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return ___nl__im__6;
}

ImmT  dfile0debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0debug");
ImmT  *var0 = &(_tab[0]);
return dfile0debug(*var0);
}
ImmT  dfile0debug(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 35
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 35
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__im__2, ___get_global_const(280), ___nl__im__3));
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 36
___nl__int__4 = 0;
#line 36
___nl__bool__5 = true;
#line 36
c_rt_lib0delete(dfile_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 36
//clear ___nl__int__4;
#line 36
//clear ___nl__bool__5;
#line 37
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(279)));
#line 37
c_rt_lib0clear(&___nl__im__0);
#line 37
c_rt_lib0clear(&___nl__im__1);
#line 37
return ___nl__im__6;
}

ImmT  dfile0ssave_net_format0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave_net_format");
ImmT  *var0 = &(_tab[0]);
return dfile0ssave_net_format(*var0);
}
ImmT  dfile0ssave_net_format(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 41
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 41
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 41
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__im__2, ___get_global_const(280), ___nl__im__3));
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0delete(dfile_priv0print_net_format(&___nl__im__1, ___nl__im__0));
#line 43
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(279)));
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
c_rt_lib0clear(&___nl__im__1);
#line 43
return ___nl__im__4;
}

ImmT  dfile_priv0eat_ws(dfile0state_t0type* ___ref___im__0) {
dfile_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__string__25 = NULL;
#line 47
label_2:
;
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 48
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 48
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
___nl__int__6 = ___nl__int__2 == ___nl__int__4;
#line 48
___nl__bool__1 = ___nl__int__6;
#line 48
//clear ___nl__int__2;
#line 48
//clear ___nl__int__4;
#line 48
//clear ___nl__int__6;
#line 48
___nl__bool__1 = !___nl__bool__1;
#line 48
if(___nl__bool__1){ goto label_4;}
#line 48
//clear ___nl__bool__1;
#line 48
return NULL;
#line 48
goto label_3;
#line 48
label_4:
;
#line 48
label_3:
;
#line 48
//clear ___nl__bool__1;
#line 49
c_rt_lib0move(&___nl__im__8, dfile_priv0get_char(___ref___im__0));
#line 49
___nl__int__7 = string0ord(___nl__im__8);
#line 49
c_rt_lib0clear(&___nl__im__8);
#line 50
___nl__int__13 = 9;
#line 50
___nl__int__14 = ___nl__int__7 == ___nl__int__13;
#line 50
___nl__bool__9 = ___nl__int__14;
#line 50
//clear ___nl__int__13;
#line 50
//clear ___nl__int__14;
#line 50
if(___nl__bool__9){ goto label_9;}
#line 50
___nl__int__15 = 10;
#line 50
___nl__int__16 = ___nl__int__7 == ___nl__int__15;
#line 50
___nl__bool__9 = ___nl__int__16;
#line 50
//clear ___nl__int__15;
#line 50
//clear ___nl__int__16;
#line 50
label_9:
;
#line 50
//clear ___nl__bool__12;
#line 50
if(___nl__bool__9){ goto label_8;}
#line 50
___nl__int__17 = 13;
#line 50
___nl__int__18 = ___nl__int__7 == ___nl__int__17;
#line 50
___nl__bool__9 = ___nl__int__18;
#line 50
//clear ___nl__int__17;
#line 50
//clear ___nl__int__18;
#line 50
label_8:
;
#line 50
//clear ___nl__bool__11;
#line 50
if(___nl__bool__9){ goto label_7;}
#line 50
___nl__int__19 = 32;
#line 50
___nl__int__20 = ___nl__int__7 == ___nl__int__19;
#line 50
___nl__bool__9 = ___nl__int__20;
#line 50
//clear ___nl__int__19;
#line 50
//clear ___nl__int__20;
#line 50
label_7:
;
#line 50
//clear ___nl__bool__10;
#line 50
___nl__bool__9 = !___nl__bool__9;
#line 50
if(___nl__bool__9){ goto label_6;}
#line 51
c_rt_lib0move(&___nl__im__21,___get_global_const(281));
#line 51
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__21));
#line 51
___nl__int__22 = 1;
#line 51
___nl__int__23 = getIntFromImm(___nl__im__21);
#line 51
___nl__int__24 = ___nl__int__23 + ___nl__int__22;
#line 51
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__24));
#line 51
c_rt_lib0move(&___nl__string__25,___get_global_const(281));
#line 51
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__25, ___nl__im__21));
#line 51
c_rt_lib0clear(&___nl__im__21);
#line 51
//clear ___nl__int__22;
#line 51
//clear ___nl__int__23;
#line 51
//clear ___nl__int__24;
#line 51
c_rt_lib0clear(&___nl__string__25);
#line 52
goto label_5;
#line 52
label_6:
;
#line 53
//clear ___nl__int__7;
#line 53
//clear ___nl__bool__9;
#line 53
return NULL;
#line 54
goto label_5;
#line 54
label_5:
;
#line 54
//clear ___nl__bool__9;
#line 54
//clear ___nl__int__7;
#line 47
goto label_2;
#line 47
label_1:
;
#line 47
//clear ___nl__int__7;
#line 47
return NULL;
}

ImmT  dfile_priv0get_char(dfile0state_t0type* ___ref___im__0) {
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 59
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(279)));
#line 59
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 59
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 59
___nl__int__6 = 1;
#line 59
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 59
c_rt_lib0move(&___nl__im__1, c_std_lib0fast_substr(___nl__im__2, ___nl__im__5, ___nl__im__7));
#line 59
c_rt_lib0clear(&___nl__im__2);
#line 59
//clear ___nl__int__3;
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
//clear ___nl__int__6;
#line 59
c_rt_lib0clear(&___nl__im__7);
#line 59
return ___nl__im__1;
}

bool  dfile_priv0is_ov(dfile0state_t0type* ___ref___im__0) {
dfile_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(279)));
#line 63
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 63
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 63
___nl__int__7 = 7;
#line 63
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 63
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__im__6, ___nl__im__8));
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
//clear ___nl__int__4;
#line 63
c_rt_lib0clear(&___nl__im__6);
#line 63
//clear ___nl__int__7;
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 63
c_rt_lib0move(&___nl__im__9,___get_global_const(283));
#line 63
___nl__bool__1 = c_rt_lib0eq(___nl__im__2, ___nl__im__9);
#line 63
c_rt_lib0clear(&___nl__im__2);
#line 63
c_rt_lib0clear(&___nl__im__9);
#line 63
return ___nl__bool__1;
}

ImmT  dfile_priv0eat_non_ws(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__string__25 = NULL;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
#line 67
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 68
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 68
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 68
c_rt_lib0clear(&___nl__im__4);
#line 69
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 69
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 69
___nl__int__8 = ___nl__int__6 >= ___nl__int__3;
#line 69
___nl__bool__5 = ___nl__int__8;
#line 69
//clear ___nl__int__6;
#line 69
//clear ___nl__int__8;
#line 69
___nl__bool__5 = !___nl__bool__5;
#line 69
if(___nl__bool__5){ goto label_2;}
#line 70
(*___ref___bool__1) = true;
#line 71
c_rt_lib0move(&___nl__im__11,___get_global_const(284));
#line 71
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 71
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 71
c_rt_lib0clear(&___nl__im__14);
#line 71
c_rt_lib0move(&___nl__im__12, c_std_lib0int_to_string(___nl__int__13));
#line 71
//clear ___nl__int__13;
#line 71
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 71
c_rt_lib0clear(&___nl__im__11);
#line 71
c_rt_lib0clear(&___nl__im__12);
#line 71
c_rt_lib0move(&___nl__im__15,___get_global_const(285));
#line 71
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__15));
#line 71
c_rt_lib0clear(&___nl__im__10);
#line 71
c_rt_lib0clear(&___nl__im__15);
#line 71
c_rt_lib0clear(&___nl__im__2);
#line 71
//clear ___nl__int__3;
#line 71
//clear ___nl__bool__5;
#line 71
return ___nl__im__9;
#line 72
goto label_1;
#line 72
label_2:
;
#line 72
label_1:
;
#line 72
//clear ___nl__bool__5;
#line 72
c_rt_lib0clear(&___nl__im__9);
#line 73
label_4:
;
#line 74
c_rt_lib0move(&___nl__im__16, dfile_priv0get_char(___ref___im__0));
#line 75
___nl__bool__17 = string0is_letter(___nl__im__16);
#line 75
if(___nl__bool__17){ goto label_8;}
#line 75
___nl__bool__17 = string0is_digit(___nl__im__16);
#line 75
label_8:
;
#line 75
//clear ___nl__bool__19;
#line 75
if(___nl__bool__17){ goto label_7;}
#line 75
c_rt_lib0move(&___nl__im__20,___get_global_const(109));
#line 75
___nl__bool__17 = c_rt_lib0eq(___nl__im__16, ___nl__im__20);
#line 75
c_rt_lib0clear(&___nl__im__20);
#line 75
label_7:
;
#line 75
//clear ___nl__bool__18;
#line 75
___nl__bool__17 = !___nl__bool__17;
#line 75
___nl__bool__17 = !___nl__bool__17;
#line 75
if(___nl__bool__17){ goto label_6;}
#line 75
goto label_3;
#line 75
goto label_5;
#line 75
label_6:
;
#line 75
label_5:
;
#line 75
//clear ___nl__bool__17;
#line 76
c_rt_lib0move(&___nl__im__21,___get_global_const(281));
#line 76
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__21));
#line 76
___nl__int__22 = 1;
#line 76
___nl__int__23 = getIntFromImm(___nl__im__21);
#line 76
___nl__int__24 = ___nl__int__23 + ___nl__int__22;
#line 76
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__24));
#line 76
c_rt_lib0move(&___nl__string__25,___get_global_const(281));
#line 76
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__25, ___nl__im__21));
#line 76
c_rt_lib0clear(&___nl__im__21);
#line 76
//clear ___nl__int__22;
#line 76
//clear ___nl__int__23;
#line 76
//clear ___nl__int__24;
#line 76
c_rt_lib0clear(&___nl__string__25);
#line 77
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 78
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 78
___nl__int__27 = getIntFromImm(___nl__im__28);
#line 78
c_rt_lib0clear(&___nl__im__28);
#line 78
___nl__int__29 = ___nl__int__27 >= ___nl__int__3;
#line 78
___nl__bool__26 = ___nl__int__29;
#line 78
//clear ___nl__int__27;
#line 78
//clear ___nl__int__29;
#line 78
___nl__bool__26 = !___nl__bool__26;
#line 78
if(___nl__bool__26){ goto label_10;}
#line 78
goto label_3;
#line 78
goto label_9;
#line 78
label_10:
;
#line 78
label_9:
;
#line 78
//clear ___nl__bool__26;
#line 78
c_rt_lib0clear(&___nl__im__16);
#line 73
goto label_4;
#line 73
label_3:
;
#line 80
c_rt_lib0move(&___nl__im__31,___get_global_const(37));
#line 80
___nl__bool__30 = c_rt_lib0eq(___nl__im__2, ___nl__im__31);
#line 80
c_rt_lib0clear(&___nl__im__31);
#line 80
___nl__bool__30 = !___nl__bool__30;
#line 80
if(___nl__bool__30){ goto label_12;}
#line 81
(*___ref___bool__1) = true;
#line 82
c_rt_lib0move(&___nl__im__34,___get_global_const(284));
#line 82
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 82
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 82
c_rt_lib0clear(&___nl__im__37);
#line 82
c_rt_lib0move(&___nl__im__35, c_std_lib0int_to_string(___nl__int__36));
#line 82
//clear ___nl__int__36;
#line 82
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 82
c_rt_lib0clear(&___nl__im__34);
#line 82
c_rt_lib0clear(&___nl__im__35);
#line 82
c_rt_lib0move(&___nl__im__38,___get_global_const(285));
#line 82
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__38));
#line 82
c_rt_lib0clear(&___nl__im__33);
#line 82
c_rt_lib0clear(&___nl__im__38);
#line 82
c_rt_lib0clear(&___nl__im__2);
#line 82
//clear ___nl__int__3;
#line 82
c_rt_lib0clear(&___nl__im__16);
#line 82
//clear ___nl__bool__30;
#line 82
return ___nl__im__32;
#line 83
goto label_11;
#line 83
label_12:
;
#line 83
label_11:
;
#line 83
//clear ___nl__bool__30;
#line 83
c_rt_lib0clear(&___nl__im__32);
#line 84
//clear ___nl__int__3;
#line 84
c_rt_lib0clear(&___nl__im__16);
#line 84
return ___nl__im__2;
}

ImmT  dfile_priv0parse_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__string__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
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
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
ImmT  ___nl__string__46 = NULL;
ImmT  ___nl__im__47 = NULL;
#line 88
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 89
c_rt_lib0move(&___nl__im__3, dfile_priv0get_char(___ref___im__0));
#line 89
c_rt_lib0move(&___nl__im__4,___get_global_const(278));
#line 89
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 89
c_rt_lib0clear(&___nl__im__3);
#line 89
c_rt_lib0clear(&___nl__im__4);
#line 89
___nl__bool__2 = !___nl__bool__2;
#line 89
if(___nl__bool__2){ goto label_2;}
#line 90
c_rt_lib0move(&___nl__im__5,___get_global_const(281));
#line 90
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 90
___nl__int__6 = 1;
#line 90
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 90
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 90
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 90
c_rt_lib0move(&___nl__string__9,___get_global_const(281));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__9, ___nl__im__5));
#line 90
c_rt_lib0clear(&___nl__im__5);
#line 90
//clear ___nl__int__6;
#line 90
//clear ___nl__int__7;
#line 90
//clear ___nl__int__8;
#line 90
c_rt_lib0clear(&___nl__string__9);
#line 91
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 92
label_4:
;
#line 93
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 93
___nl__int__12 = getIntFromImm(___nl__im__13);
#line 93
c_rt_lib0clear(&___nl__im__13);
#line 93
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 93
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 93
c_rt_lib0clear(&___nl__im__15);
#line 93
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 93
___nl__bool__11 = ___nl__int__16;
#line 93
//clear ___nl__int__12;
#line 93
//clear ___nl__int__14;
#line 93
//clear ___nl__int__16;
#line 93
___nl__bool__11 = !___nl__bool__11;
#line 93
if(___nl__bool__11){ goto label_6;}
#line 94
(*___ref___bool__1) = true;
#line 95
c_rt_lib0move(&___nl__im__19,___get_global_const(284));
#line 95
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 95
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0move(&___nl__im__20, c_std_lib0int_to_string(___nl__int__21));
#line 95
//clear ___nl__int__21;
#line 95
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 95
c_rt_lib0clear(&___nl__im__19);
#line 95
c_rt_lib0clear(&___nl__im__20);
#line 95
c_rt_lib0move(&___nl__im__23,___get_global_const(286));
#line 95
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__23));
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
//clear ___nl__bool__2;
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
//clear ___nl__bool__11;
#line 95
return ___nl__im__17;
#line 96
goto label_5;
#line 96
label_6:
;
#line 96
label_5:
;
#line 96
//clear ___nl__bool__11;
#line 96
c_rt_lib0clear(&___nl__im__17);
#line 97
c_rt_lib0move(&___nl__im__24, dfile_priv0get_char(___ref___im__0));
#line 98
c_rt_lib0move(&___nl__im__25,___get_global_const(281));
#line 98
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__25));
#line 98
___nl__int__26 = 1;
#line 98
___nl__int__27 = getIntFromImm(___nl__im__25);
#line 98
___nl__int__28 = ___nl__int__27 + ___nl__int__26;
#line 98
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__28));
#line 98
c_rt_lib0move(&___nl__string__29,___get_global_const(281));
#line 98
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__29, ___nl__im__25));
#line 98
c_rt_lib0clear(&___nl__im__25);
#line 98
//clear ___nl__int__26;
#line 98
//clear ___nl__int__27;
#line 98
//clear ___nl__int__28;
#line 98
c_rt_lib0clear(&___nl__string__29);
#line 99
c_rt_lib0move(&___nl__im__31,___get_global_const(278));
#line 99
___nl__bool__30 = c_rt_lib0eq(___nl__im__24, ___nl__im__31);
#line 99
c_rt_lib0clear(&___nl__im__31);
#line 99
___nl__bool__30 = !___nl__bool__30;
#line 99
if(___nl__bool__30){ goto label_8;}
#line 99
goto label_3;
#line 99
goto label_7;
#line 99
label_8:
;
#line 99
label_7:
;
#line 99
//clear ___nl__bool__30;
#line 100
c_rt_lib0move(&___nl__im__33,___get_global_const(111));
#line 100
___nl__bool__32 = c_rt_lib0eq(___nl__im__24, ___nl__im__33);
#line 100
c_rt_lib0clear(&___nl__im__33);
#line 100
___nl__bool__32 = !___nl__bool__32;
#line 100
if(___nl__bool__32){ goto label_10;}
#line 101
c_rt_lib0move(&___nl__im__34, dfile_priv0get_char(___ref___im__0));
#line 102
c_rt_lib0move(&___nl__im__36,___get_global_const(287));
#line 102
___nl__bool__35 = c_rt_lib0eq(___nl__im__34, ___nl__im__36);
#line 102
c_rt_lib0clear(&___nl__im__36);
#line 102
___nl__bool__35 = !___nl__bool__35;
#line 102
if(___nl__bool__35){ goto label_12;}
#line 103
c_rt_lib0move(&___nl__im__37, string0lf());
#line 103
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_add(___nl__im__10, ___nl__im__37));
#line 103
c_rt_lib0clear(&___nl__im__37);
#line 104
goto label_11;
#line 104
label_12:
;
#line 104
c_rt_lib0move(&___nl__im__38,___get_global_const(288));
#line 104
___nl__bool__35 = c_rt_lib0eq(___nl__im__34, ___nl__im__38);
#line 104
c_rt_lib0clear(&___nl__im__38);
#line 104
___nl__bool__35 = !___nl__bool__35;
#line 104
if(___nl__bool__35){ goto label_13;}
#line 105
c_rt_lib0move(&___nl__im__39, string0r());
#line 105
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_add(___nl__im__10, ___nl__im__39));
#line 105
c_rt_lib0clear(&___nl__im__39);
#line 106
goto label_11;
#line 106
label_13:
;
#line 106
c_rt_lib0move(&___nl__im__40,___get_global_const(289));
#line 106
___nl__bool__35 = c_rt_lib0eq(___nl__im__34, ___nl__im__40);
#line 106
c_rt_lib0clear(&___nl__im__40);
#line 106
___nl__bool__35 = !___nl__bool__35;
#line 106
if(___nl__bool__35){ goto label_14;}
#line 107
c_rt_lib0move(&___nl__im__41, string0tab());
#line 107
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_add(___nl__im__10, ___nl__im__41));
#line 107
c_rt_lib0clear(&___nl__im__41);
#line 108
goto label_11;
#line 108
label_14:
;
#line 109
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_add(___nl__im__10, ___nl__im__34));
#line 110
goto label_11;
#line 110
label_11:
;
#line 110
//clear ___nl__bool__35;
#line 111
c_rt_lib0move(&___nl__im__42,___get_global_const(281));
#line 111
c_rt_lib0move(&___nl__im__42, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__42));
#line 111
___nl__int__43 = 1;
#line 111
___nl__int__44 = getIntFromImm(___nl__im__42);
#line 111
___nl__int__45 = ___nl__int__44 + ___nl__int__43;
#line 111
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__45));
#line 111
c_rt_lib0move(&___nl__string__46,___get_global_const(281));
#line 111
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__46, ___nl__im__42));
#line 111
c_rt_lib0clear(&___nl__im__42);
#line 111
//clear ___nl__int__43;
#line 111
//clear ___nl__int__44;
#line 111
//clear ___nl__int__45;
#line 111
c_rt_lib0clear(&___nl__string__46);
#line 112
goto label_9;
#line 112
label_10:
;
#line 113
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_add(___nl__im__10, ___nl__im__24));
#line 114
goto label_9;
#line 114
label_9:
;
#line 114
//clear ___nl__bool__32;
#line 114
c_rt_lib0clear(&___nl__im__34);
#line 114
c_rt_lib0clear(&___nl__im__24);
#line 92
goto label_4;
#line 92
label_3:
;
#line 116
//clear ___nl__bool__2;
#line 116
c_rt_lib0clear(&___nl__im__24);
#line 116
return ___nl__im__10;
#line 117
goto label_1;
#line 117
label_2:
;
#line 118
c_rt_lib0move(&___nl__im__47, dfile_priv0eat_non_ws(___ref___im__0, ___ref___bool__1));
#line 118
//clear ___nl__bool__2;
#line 118
c_rt_lib0clear(&___nl__im__10);
#line 118
c_rt_lib0clear(&___nl__im__24);
#line 118
return ___nl__im__47;
#line 119
goto label_1;
#line 119
label_1:
;
#line 119
//clear ___nl__bool__2;
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0clear(&___nl__im__24);
#line 119
c_rt_lib0clear(&___nl__im__47);
}

bool  dfile_priv0match_s(dfile0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__string__13 = NULL;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
#line 123
___nl__int__2 = string0length(___nl__im__1);
#line 124
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(279)));
#line 124
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 124
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 124
c_rt_lib0clear(&___nl__im__7);
#line 124
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 124
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 124
c_rt_lib0move(&___nl__im__4, c_std_lib0fast_substr(___nl__im__5, ___nl__im__8, ___nl__im__9));
#line 124
c_rt_lib0clear(&___nl__im__5);
#line 124
//clear ___nl__int__6;
#line 124
c_rt_lib0clear(&___nl__im__8);
#line 124
c_rt_lib0clear(&___nl__im__9);
#line 124
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__1);
#line 124
c_rt_lib0clear(&___nl__im__4);
#line 124
___nl__bool__3 = !___nl__bool__3;
#line 124
if(___nl__bool__3){ goto label_2;}
#line 125
c_rt_lib0move(&___nl__im__10,___get_global_const(281));
#line 125
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__10));
#line 125
___nl__int__11 = getIntFromImm(___nl__im__10);
#line 125
___nl__int__12 = ___nl__int__11 + ___nl__int__2;
#line 125
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__12));
#line 125
c_rt_lib0move(&___nl__string__13,___get_global_const(281));
#line 125
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__13, ___nl__im__10));
#line 125
c_rt_lib0clear(&___nl__im__10);
#line 125
//clear ___nl__int__11;
#line 125
//clear ___nl__int__12;
#line 125
c_rt_lib0clear(&___nl__string__13);
#line 126
___nl__bool__14 = true;
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
//clear ___nl__int__2;
#line 126
//clear ___nl__bool__3;
#line 126
return ___nl__bool__14;
#line 127
goto label_1;
#line 127
label_2:
;
#line 128
___nl__bool__15 = false;
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
//clear ___nl__int__2;
#line 128
//clear ___nl__bool__3;
#line 128
//clear ___nl__bool__14;
#line 128
return ___nl__bool__15;
#line 129
goto label_1;
#line 129
label_1:
;
#line 129
//clear ___nl__bool__3;
#line 129
//clear ___nl__bool__14;
#line 129
//clear ___nl__bool__15;
}

ImmT  dfile0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_t");
return dfile0state_t();
}
ImmT  dfile0state_t() {
dfile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 133
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 133
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 133
c_rt_lib0clear(&___nl__im__3);
#line 133
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 133
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 133
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(279), ___nl__im__2, ___get_global_const(282), ___nl__im__4, ___get_global_const(281), ___nl__im__5));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
return ___nl__im__0;
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
return NULL;
}

ImmT  dfile_priv0parse(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__string__9 = NULL;
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
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
ImmT  ___nl__string__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
ImmT  ___nl__string__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
bool  ___nl__bool__68 = false;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
INT  ___nl__int__84 = 0;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
#line 137
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 138
c_rt_lib0move(&___nl__im__2, dfile_priv0get_char(___ref___im__0));
#line 139
c_rt_lib0move(&___nl__im__4,___get_global_const(290));
#line 139
___nl__bool__3 = c_rt_lib0eq(___nl__im__2, ___nl__im__4);
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
___nl__bool__3 = !___nl__bool__3;
#line 139
if(___nl__bool__3){ goto label_2;}
#line 140
___nl__int__5 = 1;
#line 140
c_rt_lib0move(&___nl__im__6,___get_global_const(281));
#line 140
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 140
___nl__int__7 = getIntFromImm(___nl__im__6);
#line 140
___nl__int__8 = ___nl__int__7 + ___nl__int__5;
#line 140
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__8));
#line 140
c_rt_lib0move(&___nl__string__9,___get_global_const(281));
#line 140
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__9, ___nl__im__6));
#line 140
//clear ___nl__int__5;
#line 140
c_rt_lib0clear(&___nl__im__6);
#line 140
//clear ___nl__int__7;
#line 140
//clear ___nl__int__8;
#line 140
c_rt_lib0clear(&___nl__string__9);
#line 141
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 143
label_4:
;
#line 143
c_rt_lib0move(&___nl__im__12,___get_global_const(291));
#line 143
___nl__bool__11 = dfile_priv0match_s(___ref___im__0, ___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
___nl__bool__11 = !___nl__bool__11;
#line 143
___nl__bool__11 = !___nl__bool__11;
#line 143
if(___nl__bool__11){ goto label_3;}
#line 144
c_rt_lib0move(&___nl__im__13, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1));
#line 145
___nl__bool__14 = (*___ref___bool__1);
#line 145
___nl__bool__14 = !___nl__bool__14;
#line 145
if(___nl__bool__14){ goto label_6;}
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
//clear ___nl__bool__3;
#line 145
c_rt_lib0clear(&___nl__im__10);
#line 145
//clear ___nl__bool__11;
#line 145
//clear ___nl__bool__14;
#line 145
return ___nl__im__13;
#line 145
goto label_5;
#line 145
label_6:
;
#line 145
label_5:
;
#line 145
//clear ___nl__bool__14;
#line 146
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 147
c_rt_lib0move(&___nl__im__16,___get_global_const(292));
#line 147
___nl__bool__15 = dfile_priv0match_s(___ref___im__0, ___nl__im__16);
#line 147
c_rt_lib0clear(&___nl__im__16);
#line 147
___nl__bool__15 = !___nl__bool__15;
#line 147
___nl__bool__15 = !___nl__bool__15;
#line 147
if(___nl__bool__15){ goto label_8;}
#line 148
(*___ref___bool__1) = true;
#line 149
c_rt_lib0move(&___nl__im__19,___get_global_const(284));
#line 149
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 149
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 149
c_rt_lib0clear(&___nl__im__22);
#line 149
c_rt_lib0move(&___nl__im__20, c_std_lib0int_to_string(___nl__int__21));
#line 149
//clear ___nl__int__21;
#line 149
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 149
c_rt_lib0clear(&___nl__im__19);
#line 149
c_rt_lib0clear(&___nl__im__20);
#line 149
c_rt_lib0move(&___nl__im__23,___get_global_const(293));
#line 149
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__23));
#line 149
c_rt_lib0clear(&___nl__im__18);
#line 149
c_rt_lib0clear(&___nl__im__23);
#line 149
c_rt_lib0clear(&___nl__im__2);
#line 149
//clear ___nl__bool__3;
#line 149
c_rt_lib0clear(&___nl__im__10);
#line 149
//clear ___nl__bool__11;
#line 149
c_rt_lib0clear(&___nl__im__13);
#line 149
//clear ___nl__bool__15;
#line 149
return ___nl__im__17;
#line 150
goto label_7;
#line 150
label_8:
;
#line 150
label_7:
;
#line 150
//clear ___nl__bool__15;
#line 150
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0move(&___nl__im__24, dfile_priv0parse(___ref___im__0, ___ref___bool__1));
#line 152
___nl__bool__25 = (*___ref___bool__1);
#line 152
___nl__bool__25 = !___nl__bool__25;
#line 152
if(___nl__bool__25){ goto label_10;}
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
//clear ___nl__bool__3;
#line 152
c_rt_lib0clear(&___nl__im__10);
#line 152
//clear ___nl__bool__11;
#line 152
c_rt_lib0clear(&___nl__im__13);
#line 152
//clear ___nl__bool__25;
#line 152
return ___nl__im__24;
#line 152
goto label_9;
#line 152
label_10:
;
#line 152
label_9:
;
#line 152
//clear ___nl__bool__25;
#line 153
c_rt_lib0delete(hash0set_value(&___nl__im__10, ___nl__im__13, ___nl__im__24));
#line 154
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 155
c_rt_lib0move(&___nl__im__27,___get_global_const(294));
#line 155
___nl__bool__26 = dfile_priv0match_s(___ref___im__0, ___nl__im__27);
#line 155
c_rt_lib0clear(&___nl__im__27);
#line 155
___nl__bool__26 = !___nl__bool__26;
#line 155
___nl__bool__26 = !___nl__bool__26;
#line 155
if(___nl__bool__26){ goto label_12;}
#line 156
(*___ref___bool__1) = true;
#line 157
c_rt_lib0move(&___nl__im__30,___get_global_const(284));
#line 157
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 157
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 157
c_rt_lib0clear(&___nl__im__33);
#line 157
c_rt_lib0move(&___nl__im__31, c_std_lib0int_to_string(___nl__int__32));
#line 157
//clear ___nl__int__32;
#line 157
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 157
c_rt_lib0clear(&___nl__im__30);
#line 157
c_rt_lib0clear(&___nl__im__31);
#line 157
c_rt_lib0move(&___nl__im__34,___get_global_const(295));
#line 157
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__34));
#line 157
c_rt_lib0clear(&___nl__im__29);
#line 157
c_rt_lib0clear(&___nl__im__34);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
//clear ___nl__bool__3;
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
//clear ___nl__bool__11;
#line 157
c_rt_lib0clear(&___nl__im__13);
#line 157
c_rt_lib0clear(&___nl__im__24);
#line 157
//clear ___nl__bool__26;
#line 157
return ___nl__im__28;
#line 158
goto label_11;
#line 158
label_12:
;
#line 158
label_11:
;
#line 158
//clear ___nl__bool__26;
#line 158
c_rt_lib0clear(&___nl__im__28);
#line 159
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 159
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0clear(&___nl__im__24);
#line 160
goto label_4;
#line 160
label_3:
;
#line 161
c_rt_lib0clear(&___nl__im__2);
#line 161
//clear ___nl__bool__3;
#line 161
//clear ___nl__bool__11;
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
c_rt_lib0clear(&___nl__im__24);
#line 161
return ___nl__im__10;
#line 162
goto label_1;
#line 162
label_2:
;
#line 162
c_rt_lib0move(&___nl__im__35,___get_global_const(296));
#line 162
___nl__bool__3 = c_rt_lib0eq(___nl__im__2, ___nl__im__35);
#line 162
c_rt_lib0clear(&___nl__im__35);
#line 162
___nl__bool__3 = !___nl__bool__3;
#line 162
if(___nl__bool__3){ goto label_13;}
#line 163
___nl__int__36 = 1;
#line 163
c_rt_lib0move(&___nl__im__37,___get_global_const(281));
#line 163
c_rt_lib0move(&___nl__im__37, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__37));
#line 163
___nl__int__38 = getIntFromImm(___nl__im__37);
#line 163
___nl__int__39 = ___nl__int__38 + ___nl__int__36;
#line 163
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__39));
#line 163
c_rt_lib0move(&___nl__string__40,___get_global_const(281));
#line 163
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__40, ___nl__im__37));
#line 163
//clear ___nl__int__36;
#line 163
c_rt_lib0clear(&___nl__im__37);
#line 163
//clear ___nl__int__38;
#line 163
//clear ___nl__int__39;
#line 163
c_rt_lib0clear(&___nl__string__40);
#line 164
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 165
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 166
label_15:
;
#line 166
c_rt_lib0move(&___nl__im__43,___get_global_const(297));
#line 166
___nl__bool__42 = dfile_priv0match_s(___ref___im__0, ___nl__im__43);
#line 166
c_rt_lib0clear(&___nl__im__43);
#line 166
___nl__bool__42 = !___nl__bool__42;
#line 166
___nl__bool__42 = !___nl__bool__42;
#line 166
if(___nl__bool__42){ goto label_14;}
#line 167
c_rt_lib0move(&___nl__im__44, dfile_priv0parse(___ref___im__0, ___ref___bool__1));
#line 168
___nl__bool__45 = (*___ref___bool__1);
#line 168
___nl__bool__45 = !___nl__bool__45;
#line 168
if(___nl__bool__45){ goto label_17;}
#line 168
c_rt_lib0clear(&___nl__im__2);
#line 168
//clear ___nl__bool__3;
#line 168
c_rt_lib0clear(&___nl__im__10);
#line 168
//clear ___nl__bool__11;
#line 168
c_rt_lib0clear(&___nl__im__13);
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
c_rt_lib0clear(&___nl__im__41);
#line 168
//clear ___nl__bool__42;
#line 168
//clear ___nl__bool__45;
#line 168
return ___nl__im__44;
#line 168
goto label_16;
#line 168
label_17:
;
#line 168
label_16:
;
#line 168
//clear ___nl__bool__45;
#line 169
c_rt_lib0delete(array0push(&___nl__im__41, ___nl__im__44));
#line 170
c_rt_lib0move(&___nl__im__47,___get_global_const(294));
#line 170
___nl__bool__46 = dfile_priv0match_s(___ref___im__0, ___nl__im__47);
#line 170
c_rt_lib0clear(&___nl__im__47);
#line 170
___nl__bool__46 = !___nl__bool__46;
#line 170
___nl__bool__46 = !___nl__bool__46;
#line 170
if(___nl__bool__46){ goto label_19;}
#line 171
(*___ref___bool__1) = true;
#line 172
c_rt_lib0move(&___nl__im__50,___get_global_const(284));
#line 172
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 172
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 172
c_rt_lib0clear(&___nl__im__53);
#line 172
c_rt_lib0move(&___nl__im__51, c_std_lib0int_to_string(___nl__int__52));
#line 172
//clear ___nl__int__52;
#line 172
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 172
c_rt_lib0clear(&___nl__im__50);
#line 172
c_rt_lib0clear(&___nl__im__51);
#line 172
c_rt_lib0move(&___nl__im__54,___get_global_const(295));
#line 172
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__54));
#line 172
c_rt_lib0clear(&___nl__im__49);
#line 172
c_rt_lib0clear(&___nl__im__54);
#line 172
c_rt_lib0clear(&___nl__im__2);
#line 172
//clear ___nl__bool__3;
#line 172
c_rt_lib0clear(&___nl__im__10);
#line 172
//clear ___nl__bool__11;
#line 172
c_rt_lib0clear(&___nl__im__13);
#line 172
c_rt_lib0clear(&___nl__im__24);
#line 172
c_rt_lib0clear(&___nl__im__41);
#line 172
//clear ___nl__bool__42;
#line 172
c_rt_lib0clear(&___nl__im__44);
#line 172
//clear ___nl__bool__46;
#line 172
return ___nl__im__48;
#line 173
goto label_18;
#line 173
label_19:
;
#line 173
label_18:
;
#line 173
//clear ___nl__bool__46;
#line 173
c_rt_lib0clear(&___nl__im__48);
#line 174
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 174
c_rt_lib0clear(&___nl__im__44);
#line 175
goto label_15;
#line 175
label_14:
;
#line 176
c_rt_lib0clear(&___nl__im__2);
#line 176
//clear ___nl__bool__3;
#line 176
c_rt_lib0clear(&___nl__im__10);
#line 176
//clear ___nl__bool__11;
#line 176
c_rt_lib0clear(&___nl__im__13);
#line 176
c_rt_lib0clear(&___nl__im__24);
#line 176
//clear ___nl__bool__42;
#line 176
c_rt_lib0clear(&___nl__im__44);
#line 176
return ___nl__im__41;
#line 177
goto label_1;
#line 177
label_13:
;
#line 177
c_rt_lib0move(&___nl__im__56,___get_global_const(190));
#line 177
___nl__bool__3 = c_rt_lib0eq(___nl__im__2, ___nl__im__56);
#line 177
c_rt_lib0clear(&___nl__im__56);
#line 177
___nl__bool__55 = !___nl__bool__3;
#line 177
if(___nl__bool__55){ goto label_21;}
#line 177
___nl__bool__3 = dfile_priv0is_ov(___ref___im__0);
#line 177
label_21:
;
#line 177
//clear ___nl__bool__55;
#line 177
___nl__bool__3 = !___nl__bool__3;
#line 177
if(___nl__bool__3){ goto label_20;}
#line 178
___nl__int__57 = 7;
#line 178
c_rt_lib0move(&___nl__im__58,___get_global_const(281));
#line 178
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__58));
#line 178
___nl__int__59 = getIntFromImm(___nl__im__58);
#line 178
___nl__int__60 = ___nl__int__59 + ___nl__int__57;
#line 178
c_rt_lib0move(&___nl__im__58, c_rt_lib0int_new(___nl__int__60));
#line 178
c_rt_lib0move(&___nl__string__61,___get_global_const(281));
#line 178
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__61, ___nl__im__58));
#line 178
//clear ___nl__int__57;
#line 178
c_rt_lib0clear(&___nl__im__58);
#line 178
//clear ___nl__int__59;
#line 178
//clear ___nl__int__60;
#line 178
c_rt_lib0clear(&___nl__string__61);
#line 179
c_rt_lib0move(&___nl__im__62, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1));
#line 180
___nl__bool__63 = (*___ref___bool__1);
#line 180
___nl__bool__63 = !___nl__bool__63;
#line 180
if(___nl__bool__63){ goto label_23;}
#line 180
c_rt_lib0clear(&___nl__im__2);
#line 180
//clear ___nl__bool__3;
#line 180
c_rt_lib0clear(&___nl__im__10);
#line 180
//clear ___nl__bool__11;
#line 180
c_rt_lib0clear(&___nl__im__13);
#line 180
c_rt_lib0clear(&___nl__im__24);
#line 180
c_rt_lib0clear(&___nl__im__41);
#line 180
//clear ___nl__bool__42;
#line 180
c_rt_lib0clear(&___nl__im__44);
#line 180
//clear ___nl__bool__63;
#line 180
return ___nl__im__62;
#line 180
goto label_22;
#line 180
label_23:
;
#line 180
label_22:
;
#line 180
//clear ___nl__bool__63;
#line 181
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 182
c_rt_lib0move(&___nl__im__65,___get_global_const(294));
#line 182
___nl__bool__64 = dfile_priv0match_s(___ref___im__0, ___nl__im__65);
#line 182
c_rt_lib0clear(&___nl__im__65);
#line 182
___nl__bool__64 = !___nl__bool__64;
#line 182
if(___nl__bool__64){ goto label_25;}
#line 183
c_rt_lib0move(&___nl__im__66, dfile_priv0parse(___ref___im__0, ___ref___bool__1));
#line 184
___nl__bool__67 = (*___ref___bool__1);
#line 184
___nl__bool__67 = !___nl__bool__67;
#line 184
if(___nl__bool__67){ goto label_27;}
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 184
//clear ___nl__bool__3;
#line 184
c_rt_lib0clear(&___nl__im__10);
#line 184
//clear ___nl__bool__11;
#line 184
c_rt_lib0clear(&___nl__im__13);
#line 184
c_rt_lib0clear(&___nl__im__24);
#line 184
c_rt_lib0clear(&___nl__im__41);
#line 184
//clear ___nl__bool__42;
#line 184
c_rt_lib0clear(&___nl__im__44);
#line 184
c_rt_lib0clear(&___nl__im__62);
#line 184
//clear ___nl__bool__64;
#line 184
//clear ___nl__bool__67;
#line 184
return ___nl__im__66;
#line 184
goto label_26;
#line 184
label_27:
;
#line 184
label_26:
;
#line 184
//clear ___nl__bool__67;
#line 185
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 186
c_rt_lib0move(&___nl__im__69,___get_global_const(298));
#line 186
___nl__bool__68 = dfile_priv0match_s(___ref___im__0, ___nl__im__69);
#line 186
c_rt_lib0clear(&___nl__im__69);
#line 186
___nl__bool__68 = !___nl__bool__68;
#line 186
___nl__bool__68 = !___nl__bool__68;
#line 186
if(___nl__bool__68){ goto label_29;}
#line 187
(*___ref___bool__1) = true;
#line 188
c_rt_lib0move(&___nl__im__72,___get_global_const(284));
#line 188
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 188
___nl__int__74 = getIntFromImm(___nl__im__75);
#line 188
c_rt_lib0clear(&___nl__im__75);
#line 188
c_rt_lib0move(&___nl__im__73, c_std_lib0int_to_string(___nl__int__74));
#line 188
//clear ___nl__int__74;
#line 188
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__73));
#line 188
c_rt_lib0clear(&___nl__im__72);
#line 188
c_rt_lib0clear(&___nl__im__73);
#line 188
c_rt_lib0move(&___nl__im__76,___get_global_const(299));
#line 188
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__76));
#line 188
c_rt_lib0clear(&___nl__im__71);
#line 188
c_rt_lib0clear(&___nl__im__76);
#line 188
c_rt_lib0clear(&___nl__im__2);
#line 188
//clear ___nl__bool__3;
#line 188
c_rt_lib0clear(&___nl__im__10);
#line 188
//clear ___nl__bool__11;
#line 188
c_rt_lib0clear(&___nl__im__13);
#line 188
c_rt_lib0clear(&___nl__im__24);
#line 188
c_rt_lib0clear(&___nl__im__41);
#line 188
//clear ___nl__bool__42;
#line 188
c_rt_lib0clear(&___nl__im__44);
#line 188
c_rt_lib0clear(&___nl__im__62);
#line 188
//clear ___nl__bool__64;
#line 188
c_rt_lib0clear(&___nl__im__66);
#line 188
//clear ___nl__bool__68;
#line 188
return ___nl__im__70;
#line 189
goto label_28;
#line 189
label_29:
;
#line 189
label_28:
;
#line 189
//clear ___nl__bool__68;
#line 189
c_rt_lib0clear(&___nl__im__70);
#line 190
c_rt_lib0move(&___nl__im__77, ov0mk_val(___nl__im__62, ___nl__im__66));
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
//clear ___nl__bool__3;
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
//clear ___nl__bool__11;
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0clear(&___nl__im__41);
#line 190
//clear ___nl__bool__42;
#line 190
c_rt_lib0clear(&___nl__im__44);
#line 190
c_rt_lib0clear(&___nl__im__62);
#line 190
//clear ___nl__bool__64;
#line 190
c_rt_lib0clear(&___nl__im__66);
#line 190
return ___nl__im__77;
#line 191
goto label_24;
#line 191
label_25:
;
#line 191
label_24:
;
#line 191
//clear ___nl__bool__64;
#line 191
c_rt_lib0clear(&___nl__im__66);
#line 191
c_rt_lib0clear(&___nl__im__77);
#line 192
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 193
c_rt_lib0move(&___nl__im__79,___get_global_const(298));
#line 193
___nl__bool__78 = dfile_priv0match_s(___ref___im__0, ___nl__im__79);
#line 193
c_rt_lib0clear(&___nl__im__79);
#line 193
___nl__bool__78 = !___nl__bool__78;
#line 193
___nl__bool__78 = !___nl__bool__78;
#line 193
if(___nl__bool__78){ goto label_31;}
#line 194
(*___ref___bool__1) = true;
#line 195
c_rt_lib0move(&___nl__im__82,___get_global_const(284));
#line 195
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 195
___nl__int__84 = getIntFromImm(___nl__im__85);
#line 195
c_rt_lib0clear(&___nl__im__85);
#line 195
c_rt_lib0move(&___nl__im__83, c_std_lib0int_to_string(___nl__int__84));
#line 195
//clear ___nl__int__84;
#line 195
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__83));
#line 195
c_rt_lib0clear(&___nl__im__82);
#line 195
c_rt_lib0clear(&___nl__im__83);
#line 195
c_rt_lib0move(&___nl__im__86,___get_global_const(299));
#line 195
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__86));
#line 195
c_rt_lib0clear(&___nl__im__81);
#line 195
c_rt_lib0clear(&___nl__im__86);
#line 195
c_rt_lib0clear(&___nl__im__2);
#line 195
//clear ___nl__bool__3;
#line 195
c_rt_lib0clear(&___nl__im__10);
#line 195
//clear ___nl__bool__11;
#line 195
c_rt_lib0clear(&___nl__im__13);
#line 195
c_rt_lib0clear(&___nl__im__24);
#line 195
c_rt_lib0clear(&___nl__im__41);
#line 195
//clear ___nl__bool__42;
#line 195
c_rt_lib0clear(&___nl__im__44);
#line 195
c_rt_lib0clear(&___nl__im__62);
#line 195
//clear ___nl__bool__78;
#line 195
return ___nl__im__80;
#line 196
goto label_30;
#line 196
label_31:
;
#line 196
label_30:
;
#line 196
//clear ___nl__bool__78;
#line 196
c_rt_lib0clear(&___nl__im__80);
#line 197
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 198
c_rt_lib0move(&___nl__im__87, ov0mk(___nl__im__62));
#line 198
c_rt_lib0clear(&___nl__im__2);
#line 198
//clear ___nl__bool__3;
#line 198
c_rt_lib0clear(&___nl__im__10);
#line 198
//clear ___nl__bool__11;
#line 198
c_rt_lib0clear(&___nl__im__13);
#line 198
c_rt_lib0clear(&___nl__im__24);
#line 198
c_rt_lib0clear(&___nl__im__41);
#line 198
//clear ___nl__bool__42;
#line 198
c_rt_lib0clear(&___nl__im__44);
#line 198
c_rt_lib0clear(&___nl__im__62);
#line 198
return ___nl__im__87;
#line 199
goto label_1;
#line 199
label_20:
;
#line 200
c_rt_lib0move(&___nl__im__88, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1));
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
//clear ___nl__bool__3;
#line 200
c_rt_lib0clear(&___nl__im__10);
#line 200
//clear ___nl__bool__11;
#line 200
c_rt_lib0clear(&___nl__im__13);
#line 200
c_rt_lib0clear(&___nl__im__24);
#line 200
c_rt_lib0clear(&___nl__im__41);
#line 200
//clear ___nl__bool__42;
#line 200
c_rt_lib0clear(&___nl__im__44);
#line 200
c_rt_lib0clear(&___nl__im__62);
#line 200
c_rt_lib0clear(&___nl__im__87);
#line 200
return ___nl__im__88;
#line 201
goto label_1;
#line 201
label_1:
;
#line 201
//clear ___nl__bool__3;
#line 201
c_rt_lib0clear(&___nl__im__10);
#line 201
//clear ___nl__bool__11;
#line 201
c_rt_lib0clear(&___nl__im__13);
#line 201
c_rt_lib0clear(&___nl__im__24);
#line 201
c_rt_lib0clear(&___nl__im__41);
#line 201
//clear ___nl__bool__42;
#line 201
c_rt_lib0clear(&___nl__im__44);
#line 201
c_rt_lib0clear(&___nl__im__62);
#line 201
c_rt_lib0clear(&___nl__im__87);
#line 201
c_rt_lib0clear(&___nl__im__88);
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
return NULL;
}

ImmT  dfile0sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0sload");
ImmT  *var0 = &(_tab[0]);
return dfile0sload(*var0);
}
ImmT  dfile0sload(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 205
c_rt_lib0move(&___nl__im__3, dfile0try_sload(___nl__im__0));
#line 205
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(80));
#line 205
if(___nl__bool__2){ goto label_1;}
#line 205
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(176), ___nl__im__3));
#line 205
nl_die_arg(___nl__im__3);
#line 205
label_1:
;
#line 205
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(80)));
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
//clear ___nl__bool__2;
#line 206
c_rt_lib0clear(&___nl__im__3);
#line 206
return ___nl__im__1;
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
c_rt_lib0clear(&___nl__im__1);
#line 206
//clear ___nl__bool__2;
#line 206
c_rt_lib0clear(&___nl__im__3);
#line 206
return NULL;
}

ImmT  dfile0try_sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0try_sload");
ImmT  *var0 = &(_tab[0]);
return dfile0try_sload(*var0);
}
ImmT  dfile0try_sload(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 210
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 210
c_rt_lib0move(&___nl__im__1, ptd0ensure(___nl__im__2, ___nl__im__0));
#line 210
c_rt_lib0clear(&___nl__im__2);
#line 211
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__1));
#line 211
___nl__int__5 = 0;
#line 211
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__5));
#line 211
___nl__int__7 = string0length(___nl__im__1);
#line 211
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 211
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(279), ___nl__im__4, ___get_global_const(281), ___nl__im__6, ___get_global_const(282), ___nl__im__8));
#line 211
c_rt_lib0clear(&___nl__im__4);
#line 211
//clear ___nl__int__5;
#line 211
c_rt_lib0clear(&___nl__im__6);
#line 211
//clear ___nl__int__7;
#line 211
c_rt_lib0clear(&___nl__im__8);
#line 212
___nl__bool__9 = false;
#line 213
c_rt_lib0move(&___nl__im__10,___get_global_const(300));
#line 213
___nl__bool__11 = dfile_priv0match_s(&___nl__im__3, ___nl__im__10);
#line 213
c_rt_lib0clear(&___nl__im__10);
#line 213
//clear ___nl__bool__11;
#line 214
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__im__3));
#line 215
c_rt_lib0move(&___nl__im__12, dfile_priv0parse(&___nl__im__3, &___nl__bool__9));
#line 216
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__im__3));
#line 217
___nl__bool__13 = ___nl__bool__9;
#line 217
___nl__bool__13 = !___nl__bool__13;
#line 217
___nl__bool__14 = !___nl__bool__13;
#line 217
if(___nl__bool__14){ goto label_3;}
#line 217
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(281)));
#line 217
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 217
c_rt_lib0clear(&___nl__im__16);
#line 217
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(282)));
#line 217
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 217
c_rt_lib0clear(&___nl__im__18);
#line 217
___nl__int__19 = ___nl__int__15 != ___nl__int__17;
#line 217
___nl__bool__13 = ___nl__int__19;
#line 217
//clear ___nl__int__15;
#line 217
//clear ___nl__int__17;
#line 217
//clear ___nl__int__19;
#line 217
label_3:
;
#line 217
//clear ___nl__bool__14;
#line 217
___nl__bool__13 = !___nl__bool__13;
#line 217
if(___nl__bool__13){ goto label_2;}
#line 218
___nl__bool__9 = true;
#line 219
c_rt_lib0move(&___nl__im__21,___get_global_const(284));
#line 219
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(281)));
#line 219
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 219
c_rt_lib0clear(&___nl__im__24);
#line 219
c_rt_lib0move(&___nl__im__22, c_std_lib0int_to_string(___nl__int__23));
#line 219
//clear ___nl__int__23;
#line 219
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 219
c_rt_lib0clear(&___nl__im__21);
#line 219
c_rt_lib0clear(&___nl__im__22);
#line 219
c_rt_lib0move(&___nl__im__25,___get_global_const(301));
#line 219
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__20, ___nl__im__25));
#line 219
c_rt_lib0clear(&___nl__im__20);
#line 219
c_rt_lib0clear(&___nl__im__25);
#line 220
goto label_1;
#line 220
label_2:
;
#line 220
label_1:
;
#line 220
//clear ___nl__bool__13;
#line 221
___nl__bool__26 = ___nl__bool__9;
#line 221
___nl__bool__26 = !___nl__bool__26;
#line 221
if(___nl__bool__26){ goto label_5;}
#line 222
c_rt_lib0move(&___nl__im__27, ptd0string());
#line 222
c_rt_lib0move(&___nl__im__12, ptd0ensure(___nl__im__27, ___nl__im__12));
#line 222
c_rt_lib0clear(&___nl__im__27);
#line 223
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__12));
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
//clear ___nl__bool__9;
#line 223
c_rt_lib0clear(&___nl__im__12);
#line 223
//clear ___nl__bool__26;
#line 223
return ___nl__im__28;
#line 224
goto label_4;
#line 224
label_5:
;
#line 225
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__12));
#line 225
c_rt_lib0clear(&___nl__im__0);
#line 225
c_rt_lib0clear(&___nl__im__1);
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 225
//clear ___nl__bool__9;
#line 225
c_rt_lib0clear(&___nl__im__12);
#line 225
//clear ___nl__bool__26;
#line 225
c_rt_lib0clear(&___nl__im__28);
#line 225
return ___nl__im__29;
#line 226
goto label_4;
#line 226
label_4:
;
#line 226
//clear ___nl__bool__26;
#line 226
c_rt_lib0clear(&___nl__im__28);
#line 226
c_rt_lib0clear(&___nl__im__29);
}

ImmT  dfile0state_out0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_out");
return dfile0state_out();
}
ImmT  dfile0state_out() {
dfile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 230
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 230
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 230
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 230
c_rt_lib0clear(&___nl__im__4);
#line 230
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__im__2, ___get_global_const(280), ___nl__im__3));
#line 230
c_rt_lib0clear(&___nl__im__2);
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 230
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 230
return ___nl__im__0;
#line 230
c_rt_lib0clear(&___nl__im__0);
#line 230
return NULL;
}

ImmT  dfile_priv0sp(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 234
c_rt_lib0move(&___nl__im__2,___get_global_const(279));
#line 234
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 234
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 234
c_rt_lib0move(&___nl__string__3,___get_global_const(279));
#line 234
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 234
c_rt_lib0clear(&___nl__im__2);
#line 234
c_rt_lib0clear(&___nl__string__3);
#line 234
c_rt_lib0clear(&___nl__im__1);
#line 234
return NULL;
}

ImmT  dfile_priv0sprintstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
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
#line 238
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 238
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 238
c_rt_lib0clear(&___nl__im__2);
#line 239
c_rt_lib0move(&___nl__im__3,___get_global_const(111));
#line 239
c_rt_lib0move(&___nl__im__4,___get_global_const(302));
#line 239
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 239
c_rt_lib0clear(&___nl__im__3);
#line 239
c_rt_lib0clear(&___nl__im__4);
#line 240
c_rt_lib0move(&___nl__im__5,___get_global_const(303));
#line 240
c_rt_lib0move(&___nl__im__6,___get_global_const(304));
#line 240
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 240
c_rt_lib0clear(&___nl__im__5);
#line 240
c_rt_lib0clear(&___nl__im__6);
#line 241
c_rt_lib0move(&___nl__im__7,___get_global_const(305));
#line 241
c_rt_lib0move(&___nl__im__8,___get_global_const(306));
#line 241
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__7, ___nl__im__8));
#line 241
c_rt_lib0clear(&___nl__im__7);
#line 241
c_rt_lib0clear(&___nl__im__8);
#line 242
c_rt_lib0move(&___nl__im__9,___get_global_const(278));
#line 242
c_rt_lib0move(&___nl__im__10,___get_global_const(307));
#line 242
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__9, ___nl__im__10));
#line 242
c_rt_lib0clear(&___nl__im__9);
#line 242
c_rt_lib0clear(&___nl__im__10);
#line 243
c_rt_lib0move(&___nl__im__13,___get_global_const(278));
#line 243
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 243
c_rt_lib0clear(&___nl__im__13);
#line 243
c_rt_lib0move(&___nl__im__14,___get_global_const(278));
#line 243
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 243
c_rt_lib0clear(&___nl__im__12);
#line 243
c_rt_lib0clear(&___nl__im__14);
#line 243
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__11));
#line 243
c_rt_lib0clear(&___nl__im__11);
#line 243
c_rt_lib0clear(&___nl__im__1);
#line 243
return NULL;
}

bool  dfile_priv0is_simple_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
INT  ___nl__int__1 = 0;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
bool  ___nl__bool__27 = false;
#line 247
___nl__int__1 = string0length(___nl__im__0);
#line 248
___nl__int__3 = 0;
#line 248
___nl__int__4 = ___nl__int__1 == ___nl__int__3;
#line 248
___nl__bool__2 = ___nl__int__4;
#line 248
//clear ___nl__int__3;
#line 248
//clear ___nl__int__4;
#line 248
___nl__bool__2 = !___nl__bool__2;
#line 248
if(___nl__bool__2){ goto label_2;}
#line 248
___nl__bool__5 = false;
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
//clear ___nl__int__1;
#line 248
//clear ___nl__bool__2;
#line 248
return ___nl__bool__5;
#line 248
goto label_1;
#line 248
label_2:
;
#line 248
label_1:
;
#line 248
//clear ___nl__bool__2;
#line 248
//clear ___nl__bool__5;
#line 249
___nl__int__9 = 0;
#line 249
___nl__int__10 = 1;
#line 249
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__9, ___nl__int__10));
#line 249
//clear ___nl__int__9;
#line 249
//clear ___nl__int__10;
#line 249
___nl__bool__6 = string0is_letter(___nl__im__8);
#line 249
c_rt_lib0clear(&___nl__im__8);
#line 249
if(___nl__bool__6){ goto label_5;}
#line 249
___nl__int__12 = 0;
#line 249
___nl__int__13 = 1;
#line 249
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__12, ___nl__int__13));
#line 249
//clear ___nl__int__12;
#line 249
//clear ___nl__int__13;
#line 249
c_rt_lib0move(&___nl__im__14,___get_global_const(109));
#line 249
___nl__bool__6 = c_rt_lib0eq(___nl__im__11, ___nl__im__14);
#line 249
c_rt_lib0clear(&___nl__im__11);
#line 249
c_rt_lib0clear(&___nl__im__14);
#line 249
label_5:
;
#line 249
//clear ___nl__bool__7;
#line 249
___nl__bool__6 = !___nl__bool__6;
#line 249
___nl__bool__6 = !___nl__bool__6;
#line 249
if(___nl__bool__6){ goto label_4;}
#line 249
___nl__bool__15 = false;
#line 249
c_rt_lib0clear(&___nl__im__0);
#line 249
//clear ___nl__int__1;
#line 249
//clear ___nl__bool__6;
#line 249
return ___nl__bool__15;
#line 249
goto label_3;
#line 249
label_4:
;
#line 249
label_3:
;
#line 249
//clear ___nl__bool__6;
#line 249
//clear ___nl__bool__15;
#line 250
___nl__int__16 = 0;
#line 250
___nl__int__17 = 1;
#line 250
label_8:
;
#line 250
___nl__int__19 = ___nl__int__16 >= ___nl__int__1;
#line 250
___nl__bool__18 = ___nl__int__19;
#line 250
if(___nl__bool__18){ goto label_6;}
#line 251
___nl__int__21 = 1;
#line 251
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__0, ___nl__int__16, ___nl__int__21));
#line 251
//clear ___nl__int__21;
#line 252
___nl__bool__22 = string0is_letter(___nl__im__20);
#line 252
if(___nl__bool__22){ goto label_12;}
#line 252
___nl__bool__22 = string0is_digit(___nl__im__20);
#line 252
label_12:
;
#line 252
//clear ___nl__bool__24;
#line 252
if(___nl__bool__22){ goto label_11;}
#line 252
c_rt_lib0move(&___nl__im__25,___get_global_const(109));
#line 252
___nl__bool__22 = c_rt_lib0eq(___nl__im__20, ___nl__im__25);
#line 252
c_rt_lib0clear(&___nl__im__25);
#line 252
label_11:
;
#line 252
//clear ___nl__bool__23;
#line 252
___nl__bool__22 = !___nl__bool__22;
#line 252
___nl__bool__22 = !___nl__bool__22;
#line 252
if(___nl__bool__22){ goto label_10;}
#line 252
___nl__bool__26 = false;
#line 252
c_rt_lib0clear(&___nl__im__0);
#line 252
//clear ___nl__int__1;
#line 252
//clear ___nl__int__16;
#line 252
//clear ___nl__int__17;
#line 252
//clear ___nl__bool__18;
#line 252
//clear ___nl__int__19;
#line 252
c_rt_lib0clear(&___nl__im__20);
#line 252
//clear ___nl__bool__22;
#line 252
return ___nl__bool__26;
#line 252
goto label_9;
#line 252
label_10:
;
#line 252
label_9:
;
#line 252
//clear ___nl__bool__22;
#line 252
//clear ___nl__bool__26;
#line 252
c_rt_lib0clear(&___nl__im__20);
#line 252
label_7:
;
#line 253
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 253
goto label_8;
#line 253
label_6:
;
#line 254
___nl__bool__27 = true;
#line 254
c_rt_lib0clear(&___nl__im__0);
#line 254
//clear ___nl__int__1;
#line 254
//clear ___nl__int__16;
#line 254
//clear ___nl__int__17;
#line 254
//clear ___nl__bool__18;
#line 254
//clear ___nl__int__19;
#line 254
c_rt_lib0clear(&___nl__im__20);
#line 254
return ___nl__bool__27;
}

ImmT  dfile_priv0sprint_hash_key(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
#line 258
___nl__bool__2 = dfile_priv0is_simple_string(___nl__im__1);
#line 258
___nl__bool__2 = !___nl__bool__2;
#line 258
if(___nl__bool__2){ goto label_2;}
#line 259
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__1));
#line 260
goto label_1;
#line 260
label_2:
;
#line 261
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 262
goto label_1;
#line 262
label_1:
;
#line 262
//clear ___nl__bool__2;
#line 262
c_rt_lib0clear(&___nl__im__1);
#line 262
return NULL;
}

ImmT  dfile_priv0get_ind(INT  ___nl__int__0) {
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 266
c_rt_lib0move(&___nl__im__2, string0tab());
#line 266
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 266
c_rt_lib0move(&___nl__im__1, string0char_times(___nl__im__2, ___nl__im__3));
#line 266
c_rt_lib0clear(&___nl__im__2);
#line 266
c_rt_lib0clear(&___nl__im__3);
#line 266
//clear ___nl__int__0;
#line 266
return ___nl__im__1;
}

ImmT  dfile_priv0sprint_hash(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 271
c_rt_lib0move(&___nl__im__5,___get_global_const(290));
#line 271
c_rt_lib0move(&___nl__im__6, string0lf());
#line 271
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 271
c_rt_lib0clear(&___nl__im__5);
#line 271
c_rt_lib0clear(&___nl__im__6);
#line 271
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__4));
#line 271
c_rt_lib0clear(&___nl__im__4);
#line 272
c_rt_lib0move(&___nl__im__7, hash0keys(___nl__im__1));
#line 273
c_rt_lib0delete(array0sort(&___nl__im__7));
#line 274
___nl__int__9 = 0;
#line 274
___nl__int__10 = 1;
#line 274
___nl__int__11 = c_rt_lib0array_len(___nl__im__7);
#line 274
label_3:
;
#line 274
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 274
___nl__bool__12 = ___nl__int__13;
#line 274
if(___nl__bool__12){ goto label_1;}
#line 274
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__7, ___nl__int__9));
#line 274
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 275
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 276
___nl__int__18 = 1;
#line 276
___nl__int__17 = ___nl__int__2 + ___nl__int__18;
#line 276
//clear ___nl__int__18;
#line 276
c_rt_lib0move(&___nl__im__16, dfile_priv0get_ind(___nl__int__17));
#line 276
//clear ___nl__int__17;
#line 276
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__16));
#line 276
c_rt_lib0clear(&___nl__im__16);
#line 277
c_rt_lib0delete(dfile_priv0sprint_hash_key(___ref___im__0, ___nl__im__8));
#line 278
c_rt_lib0move(&___nl__im__19,___get_global_const(308));
#line 278
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__19));
#line 278
c_rt_lib0clear(&___nl__im__19);
#line 279
___nl__int__21 = 1;
#line 279
___nl__int__20 = ___nl__int__2 + ___nl__int__21;
#line 279
//clear ___nl__int__21;
#line 279
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__15, ___nl__int__20, ___nl__bool__3));
#line 279
//clear ___nl__int__20;
#line 280
c_rt_lib0move(&___nl__im__23,___get_global_const(294));
#line 280
c_rt_lib0move(&___nl__im__24, string0lf());
#line 280
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 280
c_rt_lib0clear(&___nl__im__23);
#line 280
c_rt_lib0clear(&___nl__im__24);
#line 280
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__22));
#line 280
c_rt_lib0clear(&___nl__im__22);
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
label_2:
;
#line 281
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 281
goto label_3;
#line 281
label_1:
;
#line 282
c_rt_lib0move(&___nl__im__26, dfile_priv0get_ind(___nl__int__2));
#line 282
c_rt_lib0move(&___nl__im__27,___get_global_const(291));
#line 282
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 282
c_rt_lib0clear(&___nl__im__26);
#line 282
c_rt_lib0clear(&___nl__im__27);
#line 282
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__25));
#line 282
c_rt_lib0clear(&___nl__im__25);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__int__2;
#line 282
//clear ___nl__bool__3;
#line 282
c_rt_lib0clear(&___nl__im__7);
#line 282
c_rt_lib0clear(&___nl__im__8);
#line 282
//clear ___nl__int__9;
#line 282
//clear ___nl__int__10;
#line 282
//clear ___nl__int__11;
#line 282
//clear ___nl__bool__12;
#line 282
//clear ___nl__int__13;
#line 282
c_rt_lib0clear(&___nl__im__14);
#line 282
c_rt_lib0clear(&___nl__im__15);
#line 282
return NULL;
}

bool  dfile_priv0handle_debug(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__string__10 = NULL;
bool  ___nl__bool__11 = false;
#line 286
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 286
if(___nl__bool__2){ goto label_4;}
#line 286
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 286
label_4:
;
#line 286
//clear ___nl__bool__4;
#line 286
___nl__bool__3 = !___nl__bool__2;
#line 286
if(___nl__bool__3){ goto label_3;}
#line 286
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(280)));
#line 286
___nl__bool__2 = hash0has_key(___nl__im__5, ___nl__im__1);
#line 286
c_rt_lib0clear(&___nl__im__5);
#line 286
label_3:
;
#line 286
//clear ___nl__bool__3;
#line 286
___nl__bool__2 = !___nl__bool__2;
#line 286
if(___nl__bool__2){ goto label_2;}
#line 287
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__1));
#line 288
___nl__bool__6 = true;
#line 288
c_rt_lib0clear(&___nl__im__1);
#line 288
//clear ___nl__bool__2;
#line 288
return ___nl__bool__6;
#line 289
goto label_1;
#line 289
label_2:
;
#line 290
c_rt_lib0move(&___nl__im__7,___get_global_const(280));
#line 290
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 290
___nl__bool__8 = true;
#line 290
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__8));
#line 290
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__1, ___nl__im__9));
#line 290
c_rt_lib0move(&___nl__string__10,___get_global_const(280));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__10, ___nl__im__7));
#line 290
c_rt_lib0clear(&___nl__im__7);
#line 290
//clear ___nl__bool__8;
#line 290
c_rt_lib0clear(&___nl__im__9);
#line 290
c_rt_lib0clear(&___nl__string__10);
#line 291
___nl__bool__11 = false;
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__2;
#line 291
//clear ___nl__bool__6;
#line 291
return ___nl__bool__11;
#line 292
goto label_1;
#line 292
label_1:
;
#line 292
//clear ___nl__bool__2;
#line 292
//clear ___nl__bool__6;
#line 292
//clear ___nl__bool__11;
}

ImmT  dfile_priv0sprint(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
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
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 297
___nl__bool__4 = ___nl__bool__3;
#line 297
___nl__bool__5 = !___nl__bool__4;
#line 297
if(___nl__bool__5){ goto label_3;}
#line 297
___nl__bool__4 = dfile_priv0handle_debug(___ref___im__0, ___nl__im__1);
#line 297
label_3:
;
#line 297
//clear ___nl__bool__5;
#line 297
___nl__bool__4 = !___nl__bool__4;
#line 297
if(___nl__bool__4){ goto label_2;}
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
//clear ___nl__int__2;
#line 297
//clear ___nl__bool__3;
#line 297
//clear ___nl__bool__4;
#line 297
return NULL;
#line 297
goto label_1;
#line 297
label_2:
;
#line 297
label_1:
;
#line 297
//clear ___nl__bool__4;
#line 298
___nl__bool__6 = nl0is_sim(___nl__im__1);
#line 298
___nl__bool__6 = !___nl__bool__6;
#line 298
if(___nl__bool__6){ goto label_5;}
#line 299
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 300
goto label_4;
#line 300
label_5:
;
#line 300
___nl__bool__6 = nl0is_array(___nl__im__1);
#line 300
___nl__bool__6 = !___nl__bool__6;
#line 300
if(___nl__bool__6){ goto label_6;}
#line 301
c_rt_lib0move(&___nl__im__8,___get_global_const(296));
#line 301
c_rt_lib0move(&___nl__im__9, string0lf());
#line 301
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 301
c_rt_lib0clear(&___nl__im__8);
#line 301
c_rt_lib0clear(&___nl__im__9);
#line 301
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__7));
#line 301
c_rt_lib0clear(&___nl__im__7);
#line 302
___nl__int__11 = 0;
#line 302
___nl__int__12 = 1;
#line 302
___nl__int__13 = c_rt_lib0array_len(___nl__im__1);
#line 302
label_9:
;
#line 302
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 302
___nl__bool__14 = ___nl__int__15;
#line 302
if(___nl__bool__14){ goto label_7;}
#line 302
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__1, ___nl__int__11));
#line 302
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 303
___nl__int__19 = 1;
#line 303
___nl__int__18 = ___nl__int__2 + ___nl__int__19;
#line 303
//clear ___nl__int__19;
#line 303
c_rt_lib0move(&___nl__im__17, dfile_priv0get_ind(___nl__int__18));
#line 303
//clear ___nl__int__18;
#line 303
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__17));
#line 303
c_rt_lib0clear(&___nl__im__17);
#line 304
___nl__int__21 = 1;
#line 304
___nl__int__20 = ___nl__int__2 + ___nl__int__21;
#line 304
//clear ___nl__int__21;
#line 304
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__10, ___nl__int__20, ___nl__bool__3));
#line 304
//clear ___nl__int__20;
#line 305
c_rt_lib0move(&___nl__im__23,___get_global_const(294));
#line 305
c_rt_lib0move(&___nl__im__24, string0lf());
#line 305
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 305
c_rt_lib0clear(&___nl__im__23);
#line 305
c_rt_lib0clear(&___nl__im__24);
#line 305
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__22));
#line 305
c_rt_lib0clear(&___nl__im__22);
#line 305
c_rt_lib0clear(&___nl__im__10);
#line 305
label_8:
;
#line 306
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 306
goto label_9;
#line 306
label_7:
;
#line 307
c_rt_lib0move(&___nl__im__26, dfile_priv0get_ind(___nl__int__2));
#line 307
c_rt_lib0move(&___nl__im__27,___get_global_const(297));
#line 307
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 307
c_rt_lib0clear(&___nl__im__26);
#line 307
c_rt_lib0clear(&___nl__im__27);
#line 307
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__25));
#line 307
c_rt_lib0clear(&___nl__im__25);
#line 308
goto label_4;
#line 308
label_6:
;
#line 308
___nl__bool__6 = nl0is_hash(___nl__im__1);
#line 308
___nl__bool__6 = !___nl__bool__6;
#line 308
if(___nl__bool__6){ goto label_10;}
#line 309
c_rt_lib0delete(dfile_priv0sprint_hash(___ref___im__0, ___nl__im__1, ___nl__int__2, ___nl__bool__3));
#line 310
goto label_4;
#line 310
label_10:
;
#line 310
___nl__bool__6 = nl0is_variant(___nl__im__1);
#line 310
___nl__bool__6 = !___nl__bool__6;
#line 310
if(___nl__bool__6){ goto label_11;}
#line 311
c_rt_lib0move(&___nl__im__28,___get_global_const(283));
#line 311
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__28));
#line 311
c_rt_lib0clear(&___nl__im__28);
#line 312
c_rt_lib0move(&___nl__im__29, ov0get_element(___nl__im__1));
#line 312
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__29));
#line 312
c_rt_lib0clear(&___nl__im__29);
#line 313
c_rt_lib0move(&___nl__im__31, ov0has_value(___nl__im__1));
#line 313
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 313
c_rt_lib0clear(&___nl__im__31);
#line 313
___nl__bool__30 = !___nl__bool__30;
#line 313
if(___nl__bool__30){ goto label_13;}
#line 314
c_rt_lib0move(&___nl__im__32,___get_global_const(309));
#line 314
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__32));
#line 314
c_rt_lib0clear(&___nl__im__32);
#line 315
c_rt_lib0move(&___nl__im__33, ov0get_value(___nl__im__1));
#line 315
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__33, ___nl__int__2, ___nl__bool__3));
#line 315
c_rt_lib0clear(&___nl__im__33);
#line 316
goto label_12;
#line 316
label_13:
;
#line 316
label_12:
;
#line 316
//clear ___nl__bool__30;
#line 317
c_rt_lib0move(&___nl__im__34,___get_global_const(298));
#line 317
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__34));
#line 317
c_rt_lib0clear(&___nl__im__34);
#line 318
goto label_4;
#line 318
label_11:
;
#line 319
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 319
nl_die_arg(___nl__im__35);
#line 320
goto label_4;
#line 320
label_4:
;
#line 320
//clear ___nl__bool__6;
#line 320
c_rt_lib0clear(&___nl__im__10);
#line 320
//clear ___nl__int__11;
#line 320
//clear ___nl__int__12;
#line 320
//clear ___nl__int__13;
#line 320
//clear ___nl__bool__14;
#line 320
//clear ___nl__int__15;
#line 320
c_rt_lib0clear(&___nl__im__16);
#line 320
c_rt_lib0clear(&___nl__im__35);
#line 320
c_rt_lib0clear(&___nl__im__1);
#line 320
//clear ___nl__int__2;
#line 320
//clear ___nl__bool__3;
#line 320
return NULL;
}

ImmT  dfile_priv0print_net_formatstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
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
#line 324
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 324
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 324
c_rt_lib0clear(&___nl__im__2);
#line 325
c_rt_lib0move(&___nl__im__3,___get_global_const(111));
#line 325
c_rt_lib0move(&___nl__im__4,___get_global_const(302));
#line 325
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 325
c_rt_lib0clear(&___nl__im__3);
#line 325
c_rt_lib0clear(&___nl__im__4);
#line 326
c_rt_lib0move(&___nl__im__5, string0lf());
#line 326
c_rt_lib0move(&___nl__im__6,___get_global_const(310));
#line 326
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 326
c_rt_lib0clear(&___nl__im__5);
#line 326
c_rt_lib0clear(&___nl__im__6);
#line 327
c_rt_lib0move(&___nl__im__7,___get_global_const(303));
#line 327
c_rt_lib0move(&___nl__im__8,___get_global_const(304));
#line 327
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__7, ___nl__im__8));
#line 327
c_rt_lib0clear(&___nl__im__7);
#line 327
c_rt_lib0clear(&___nl__im__8);
#line 328
c_rt_lib0move(&___nl__im__9,___get_global_const(305));
#line 328
c_rt_lib0move(&___nl__im__10,___get_global_const(306));
#line 328
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__9, ___nl__im__10));
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 329
c_rt_lib0move(&___nl__im__11,___get_global_const(278));
#line 329
c_rt_lib0move(&___nl__im__12,___get_global_const(307));
#line 329
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__11, ___nl__im__12));
#line 329
c_rt_lib0clear(&___nl__im__11);
#line 329
c_rt_lib0clear(&___nl__im__12);
#line 330
c_rt_lib0move(&___nl__im__15,___get_global_const(278));
#line 330
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 330
c_rt_lib0clear(&___nl__im__15);
#line 330
c_rt_lib0move(&___nl__im__16,___get_global_const(278));
#line 330
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 330
c_rt_lib0clear(&___nl__im__14);
#line 330
c_rt_lib0clear(&___nl__im__16);
#line 330
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__13));
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
return NULL;
}

ImmT  dfile_priv0print_net_format(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
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
#line 334
___nl__bool__2 = nl0is_sim(___nl__im__1);
#line 334
___nl__bool__2 = !___nl__bool__2;
#line 334
if(___nl__bool__2){ goto label_2;}
#line 335
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__1));
#line 336
goto label_1;
#line 336
label_2:
;
#line 336
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 336
___nl__bool__2 = !___nl__bool__2;
#line 336
if(___nl__bool__2){ goto label_3;}
#line 337
c_rt_lib0move(&___nl__im__3,___get_global_const(296));
#line 337
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__3));
#line 337
c_rt_lib0clear(&___nl__im__3);
#line 338
___nl__int__5 = 0;
#line 338
___nl__int__6 = 1;
#line 338
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 338
label_6:
;
#line 338
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 338
___nl__bool__8 = ___nl__int__9;
#line 338
if(___nl__bool__8){ goto label_4;}
#line 338
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 338
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 339
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__4));
#line 340
c_rt_lib0move(&___nl__im__11,___get_global_const(294));
#line 340
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__11));
#line 340
c_rt_lib0clear(&___nl__im__11);
#line 340
c_rt_lib0clear(&___nl__im__4);
#line 340
label_5:
;
#line 341
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 341
goto label_6;
#line 341
label_4:
;
#line 342
c_rt_lib0move(&___nl__im__12,___get_global_const(297));
#line 342
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__12));
#line 342
c_rt_lib0clear(&___nl__im__12);
#line 343
goto label_1;
#line 343
label_3:
;
#line 343
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 343
___nl__bool__2 = !___nl__bool__2;
#line 343
if(___nl__bool__2){ goto label_7;}
#line 344
c_rt_lib0move(&___nl__im__13,___get_global_const(290));
#line 344
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__13));
#line 344
c_rt_lib0clear(&___nl__im__13);
#line 345
c_rt_lib0move(&___nl__im__14, hash0keys(___nl__im__1));
#line 345
___nl__int__16 = 0;
#line 345
___nl__int__17 = 1;
#line 345
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 345
label_10:
;
#line 345
___nl__int__20 = ___nl__int__16 >= ___nl__int__18;
#line 345
___nl__bool__19 = ___nl__int__20;
#line 345
if(___nl__bool__19){ goto label_8;}
#line 345
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 345
c_rt_lib0copy(&___nl__im__15, ___nl__im__21);
#line 346
c_rt_lib0move(&___nl__im__22, hash0get_value(___nl__im__1, ___nl__im__15));
#line 347
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 347
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__15, ___nl__im__25));
#line 347
c_rt_lib0clear(&___nl__im__25);
#line 347
___nl__bool__23 = dfile_priv0is_simple_string(___nl__im__24);
#line 347
c_rt_lib0clear(&___nl__im__24);
#line 347
___nl__bool__23 = !___nl__bool__23;
#line 347
if(___nl__bool__23){ goto label_12;}
#line 348
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__15));
#line 349
goto label_11;
#line 349
label_12:
;
#line 350
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__15));
#line 351
goto label_11;
#line 351
label_11:
;
#line 351
//clear ___nl__bool__23;
#line 352
c_rt_lib0move(&___nl__im__26,___get_global_const(292));
#line 352
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__26));
#line 352
c_rt_lib0clear(&___nl__im__26);
#line 353
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__22));
#line 354
c_rt_lib0move(&___nl__im__27,___get_global_const(294));
#line 354
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__27));
#line 354
c_rt_lib0clear(&___nl__im__27);
#line 354
c_rt_lib0clear(&___nl__im__15);
#line 354
label_9:
;
#line 355
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 355
goto label_10;
#line 355
label_8:
;
#line 356
c_rt_lib0move(&___nl__im__28,___get_global_const(291));
#line 356
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__28));
#line 356
c_rt_lib0clear(&___nl__im__28);
#line 357
goto label_1;
#line 357
label_7:
;
#line 357
___nl__bool__2 = nl0is_variant(___nl__im__1);
#line 357
___nl__bool__2 = !___nl__bool__2;
#line 357
if(___nl__bool__2){ goto label_13;}
#line 358
c_rt_lib0move(&___nl__im__29,___get_global_const(283));
#line 358
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__29));
#line 358
c_rt_lib0clear(&___nl__im__29);
#line 359
c_rt_lib0move(&___nl__im__30, ov0get_element(___nl__im__1));
#line 359
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__30));
#line 359
c_rt_lib0clear(&___nl__im__30);
#line 360
c_rt_lib0move(&___nl__im__32, ov0has_value(___nl__im__1));
#line 360
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__32);
#line 360
c_rt_lib0clear(&___nl__im__32);
#line 360
___nl__bool__31 = !___nl__bool__31;
#line 360
if(___nl__bool__31){ goto label_15;}
#line 361
c_rt_lib0move(&___nl__im__33,___get_global_const(294));
#line 361
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__33));
#line 361
c_rt_lib0clear(&___nl__im__33);
#line 362
c_rt_lib0move(&___nl__im__34, ov0get_value(___nl__im__1));
#line 362
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__34));
#line 362
c_rt_lib0clear(&___nl__im__34);
#line 363
goto label_14;
#line 363
label_15:
;
#line 363
label_14:
;
#line 363
//clear ___nl__bool__31;
#line 364
c_rt_lib0move(&___nl__im__35,___get_global_const(298));
#line 364
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__35));
#line 364
c_rt_lib0clear(&___nl__im__35);
#line 365
goto label_1;
#line 365
label_13:
;
#line 366
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(1, ___nl__im__1));
#line 366
nl_die_arg(___nl__im__36);
#line 367
goto label_1;
#line 367
label_1:
;
#line 367
//clear ___nl__bool__2;
#line 367
c_rt_lib0clear(&___nl__im__4);
#line 367
//clear ___nl__int__5;
#line 367
//clear ___nl__int__6;
#line 367
//clear ___nl__int__7;
#line 367
//clear ___nl__bool__8;
#line 367
//clear ___nl__int__9;
#line 367
c_rt_lib0clear(&___nl__im__10);
#line 367
c_rt_lib0clear(&___nl__im__14);
#line 367
c_rt_lib0clear(&___nl__im__15);
#line 367
//clear ___nl__int__16;
#line 367
//clear ___nl__int__17;
#line 367
//clear ___nl__int__18;
#line 367
//clear ___nl__bool__19;
#line 367
//clear ___nl__int__20;
#line 367
c_rt_lib0clear(&___nl__im__21);
#line 367
c_rt_lib0clear(&___nl__im__22);
#line 367
c_rt_lib0clear(&___nl__im__36);
#line 367
c_rt_lib0clear(&___nl__im__1);
#line 367
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void dfile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT dfile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT dfile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
