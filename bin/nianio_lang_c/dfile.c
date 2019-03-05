
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
#include "string_utils.h"
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
ImmT  dfile_priv0parse_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2);
bool  dfile_priv0match_s(dfile0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0parse(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2);
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
#line 16
c_rt_lib0move(&___nl__im__3, dfile0ssave(___nl__im__0));
#line 16
c_rt_lib0move(&___nl__im__4, dfile0ssave(___nl__im__1));
#line 16
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
//clear ___nl__bool__2;
#line 16
return ___nl__im__5;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
//clear ___nl__bool__2;
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
return NULL;
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
#line 20
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__3, ___get_global_const(281), ___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 21
___nl__int__7 = 0;
#line 21
___nl__int__8 = getIntFromImm(___nl__im__1);
#line 21
___nl__int__9 = ___nl__int__8 != ___nl__int__7;
#line 21
___nl__bool__5 = ___nl__int__9;
#line 21
//clear ___nl__int__7;
#line 21
//clear ___nl__int__8;
#line 21
//clear ___nl__int__9;
#line 21
___nl__bool__6 = !___nl__bool__5;
#line 21
if(___nl__bool__6){ goto label_3;}
#line 21
___nl__bool__5 = dfile_priv0is_simple_string(___nl__im__0);
#line 21
label_3:
;
#line 21
//clear ___nl__bool__6;
#line 21
___nl__bool__5 = !___nl__bool__5;
#line 21
if(___nl__bool__5){ goto label_2;}
#line 22
c_rt_lib0delete(dfile_priv0sp(&___nl__im__2, ___nl__im__0));
#line 23
goto label_1;
#line 23
label_2:
;
#line 24
c_rt_lib0delete(dfile_priv0sprintstr(&___nl__im__2, ___nl__im__0));
#line 25
goto label_1;
#line 25
label_1:
;
#line 25
//clear ___nl__bool__5;
#line 26
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(280)));
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
return ___nl__im__10;
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__10);
#line 26
return NULL;
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
#line 30
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 30
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 30
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__2, ___get_global_const(281), ___nl__im__3));
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 31
___nl__int__4 = 0;
#line 31
___nl__bool__5 = false;
#line 31
c_rt_lib0delete(dfile_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 31
//clear ___nl__int__4;
#line 31
//clear ___nl__bool__5;
#line 32
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(280)));
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
return ___nl__im__6;
return NULL;
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
#line 36
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__2, ___get_global_const(281), ___nl__im__3));
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 37
___nl__int__4 = 0;
#line 37
___nl__bool__5 = true;
#line 37
c_rt_lib0delete(dfile_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 37
//clear ___nl__int__4;
#line 37
//clear ___nl__bool__5;
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(280)));
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
return ___nl__im__6;
return NULL;
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
#line 42
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 42
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__2, ___get_global_const(281), ___nl__im__3));
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 43
c_rt_lib0delete(dfile_priv0print_net_format(&___nl__im__1, ___nl__im__0));
#line 44
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(280)));
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
return ___nl__im__4;
return NULL;
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
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__string__22 = NULL;
#line 48
label_2:
;
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 49
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 49
c_rt_lib0clear(&___nl__im__3);
#line 49
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 49
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 49
c_rt_lib0clear(&___nl__im__5);
#line 49
___nl__int__6 = ___nl__int__2 == ___nl__int__4;
#line 49
___nl__bool__1 = ___nl__int__6;
#line 49
//clear ___nl__int__2;
#line 49
//clear ___nl__int__4;
#line 49
//clear ___nl__int__6;
#line 49
___nl__bool__1 = !___nl__bool__1;
#line 49
if(___nl__bool__1){ goto label_4;}
#line 49
//clear ___nl__bool__1;
#line 49
return NULL;
#line 49
goto label_3;
#line 49
label_4:
;
#line 49
label_3:
;
#line 49
//clear ___nl__bool__1;
#line 50
c_rt_lib0move(&___nl__im__8, dfile_priv0get_char(___ref___im__0));
#line 50
___nl__int__7 = string0ord(___nl__im__8);
#line 50
c_rt_lib0clear(&___nl__im__8);
#line 51
___nl__int__10 = 9;
#line 51
___nl__int__11 = ___nl__int__7 == ___nl__int__10;
#line 51
___nl__bool__9 = ___nl__int__11;
#line 51
//clear ___nl__int__10;
#line 51
//clear ___nl__int__11;
#line 51
if(___nl__bool__9){ goto label_9;}
#line 51
___nl__int__12 = 10;
#line 51
___nl__int__13 = ___nl__int__7 == ___nl__int__12;
#line 51
___nl__bool__9 = ___nl__int__13;
#line 51
//clear ___nl__int__12;
#line 51
//clear ___nl__int__13;
#line 51
label_9:
;
#line 51
if(___nl__bool__9){ goto label_8;}
#line 51
___nl__int__14 = 13;
#line 51
___nl__int__15 = ___nl__int__7 == ___nl__int__14;
#line 51
___nl__bool__9 = ___nl__int__15;
#line 51
//clear ___nl__int__14;
#line 51
//clear ___nl__int__15;
#line 51
label_8:
;
#line 51
if(___nl__bool__9){ goto label_7;}
#line 51
___nl__int__16 = 32;
#line 51
___nl__int__17 = ___nl__int__7 == ___nl__int__16;
#line 51
___nl__bool__9 = ___nl__int__17;
#line 51
//clear ___nl__int__16;
#line 51
//clear ___nl__int__17;
#line 51
label_7:
;
#line 51
___nl__bool__9 = !___nl__bool__9;
#line 51
if(___nl__bool__9){ goto label_6;}
#line 52
c_rt_lib0move(&___nl__im__18,___get_global_const(282));
#line 52
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__18));
#line 52
___nl__int__19 = 1;
#line 52
___nl__int__20 = getIntFromImm(___nl__im__18);
#line 52
___nl__int__21 = ___nl__int__20 + ___nl__int__19;
#line 52
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__21));
#line 52
c_rt_lib0move(&___nl__string__22,___get_global_const(282));
#line 52
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__22, ___nl__im__18));
#line 52
c_rt_lib0clear(&___nl__im__18);
#line 52
//clear ___nl__int__19;
#line 52
//clear ___nl__int__20;
#line 52
//clear ___nl__int__21;
#line 52
c_rt_lib0clear(&___nl__string__22);
#line 53
goto label_5;
#line 53
label_6:
;
#line 54
//clear ___nl__int__7;
#line 54
//clear ___nl__bool__9;
#line 54
return NULL;
#line 55
goto label_5;
#line 55
label_5:
;
#line 55
//clear ___nl__bool__9;
#line 55
//clear ___nl__int__7;
#line 48
goto label_2;
#line 48
//clear ___nl__int__7;
#line 48
return NULL;
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
#line 60
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(280)));
#line 60
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 60
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 60
___nl__int__6 = 1;
#line 60
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 60
c_rt_lib0move(&___nl__im__1, c_std_lib0fast_substr(___nl__im__2, ___nl__im__5, ___nl__im__7));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
//clear ___nl__int__3;
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 60
//clear ___nl__int__6;
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
return ___nl__im__1;
return NULL;
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
#line 64
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(280)));
#line 64
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 64
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 64
c_rt_lib0clear(&___nl__im__5);
#line 64
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 64
___nl__int__7 = 7;
#line 64
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 64
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__im__6, ___nl__im__8));
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
//clear ___nl__int__4;
#line 64
c_rt_lib0clear(&___nl__im__6);
#line 64
//clear ___nl__int__7;
#line 64
c_rt_lib0clear(&___nl__im__8);
#line 64
c_rt_lib0move(&___nl__im__9,___get_global_const(284));
#line 64
___nl__bool__1 = c_rt_lib0eq(___nl__im__2, ___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
c_rt_lib0clear(&___nl__im__9);
#line 64
return ___nl__bool__1;
return false;
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
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__string__24 = NULL;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
#line 68
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 69
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 69
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 69
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 70
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 70
___nl__int__8 = ___nl__int__6 >= ___nl__int__3;
#line 70
___nl__bool__5 = ___nl__int__8;
#line 70
//clear ___nl__int__6;
#line 70
//clear ___nl__int__8;
#line 70
___nl__bool__5 = !___nl__bool__5;
#line 70
if(___nl__bool__5){ goto label_2;}
#line 71
(*___ref___bool__1) = true;
#line 72
c_rt_lib0move(&___nl__im__11,___get_global_const(285));
#line 72
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 72
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 72
c_rt_lib0clear(&___nl__im__14);
#line 72
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__13));
#line 72
c_rt_lib0move(&___nl__im__12, ptd0int_to_string(___nl__im__15));
#line 72
//clear ___nl__int__13;
#line 72
c_rt_lib0clear(&___nl__im__15);
#line 72
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 72
c_rt_lib0clear(&___nl__im__11);
#line 72
c_rt_lib0clear(&___nl__im__12);
#line 72
c_rt_lib0move(&___nl__im__16,___get_global_const(286));
#line 72
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 72
c_rt_lib0clear(&___nl__im__10);
#line 72
c_rt_lib0clear(&___nl__im__16);
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
//clear ___nl__int__3;
#line 72
//clear ___nl__bool__5;
#line 72
return ___nl__im__9;
#line 73
goto label_1;
#line 73
label_2:
;
#line 73
label_1:
;
#line 73
//clear ___nl__bool__5;
#line 73
c_rt_lib0clear(&___nl__im__9);
#line 74
label_4:
;
#line 75
c_rt_lib0move(&___nl__im__17, dfile_priv0get_char(___ref___im__0));
#line 76
___nl__bool__18 = string0is_letter(___nl__im__17);
#line 76
if(___nl__bool__18){ goto label_8;}
#line 76
___nl__bool__18 = string0is_digit(___nl__im__17);
#line 76
label_8:
;
#line 76
if(___nl__bool__18){ goto label_7;}
#line 76
c_rt_lib0move(&___nl__im__19,___get_global_const(108));
#line 76
___nl__bool__18 = c_rt_lib0eq(___nl__im__17, ___nl__im__19);
#line 76
c_rt_lib0clear(&___nl__im__19);
#line 76
label_7:
;
#line 76
___nl__bool__18 = !___nl__bool__18;
#line 76
___nl__bool__18 = !___nl__bool__18;
#line 76
if(___nl__bool__18){ goto label_6;}
#line 76
goto label_3;
#line 76
goto label_5;
#line 76
label_6:
;
#line 76
label_5:
;
#line 76
//clear ___nl__bool__18;
#line 77
c_rt_lib0move(&___nl__im__20,___get_global_const(282));
#line 77
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__20));
#line 77
___nl__int__21 = 1;
#line 77
___nl__int__22 = getIntFromImm(___nl__im__20);
#line 77
___nl__int__23 = ___nl__int__22 + ___nl__int__21;
#line 77
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__23));
#line 77
c_rt_lib0move(&___nl__string__24,___get_global_const(282));
#line 77
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__24, ___nl__im__20));
#line 77
c_rt_lib0clear(&___nl__im__20);
#line 77
//clear ___nl__int__21;
#line 77
//clear ___nl__int__22;
#line 77
//clear ___nl__int__23;
#line 77
c_rt_lib0clear(&___nl__string__24);
#line 78
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 79
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 79
___nl__int__26 = getIntFromImm(___nl__im__27);
#line 79
c_rt_lib0clear(&___nl__im__27);
#line 79
___nl__int__28 = ___nl__int__26 >= ___nl__int__3;
#line 79
___nl__bool__25 = ___nl__int__28;
#line 79
//clear ___nl__int__26;
#line 79
//clear ___nl__int__28;
#line 79
___nl__bool__25 = !___nl__bool__25;
#line 79
if(___nl__bool__25){ goto label_10;}
#line 79
goto label_3;
#line 79
goto label_9;
#line 79
label_10:
;
#line 79
label_9:
;
#line 79
//clear ___nl__bool__25;
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 74
goto label_4;
#line 74
label_3:
;
#line 81
c_rt_lib0move(&___nl__im__30,___get_global_const(37));
#line 81
___nl__bool__29 = c_rt_lib0eq(___nl__im__2, ___nl__im__30);
#line 81
c_rt_lib0clear(&___nl__im__30);
#line 81
___nl__bool__29 = !___nl__bool__29;
#line 81
if(___nl__bool__29){ goto label_12;}
#line 82
(*___ref___bool__1) = true;
#line 83
c_rt_lib0move(&___nl__im__33,___get_global_const(285));
#line 83
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 83
___nl__int__35 = getIntFromImm(___nl__im__36);
#line 83
c_rt_lib0clear(&___nl__im__36);
#line 83
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__35));
#line 83
c_rt_lib0move(&___nl__im__34, ptd0int_to_string(___nl__im__37));
#line 83
//clear ___nl__int__35;
#line 83
c_rt_lib0clear(&___nl__im__37);
#line 83
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 83
c_rt_lib0clear(&___nl__im__33);
#line 83
c_rt_lib0clear(&___nl__im__34);
#line 83
c_rt_lib0move(&___nl__im__38,___get_global_const(286));
#line 83
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__38));
#line 83
c_rt_lib0clear(&___nl__im__32);
#line 83
c_rt_lib0clear(&___nl__im__38);
#line 83
c_rt_lib0clear(&___nl__im__2);
#line 83
//clear ___nl__int__3;
#line 83
c_rt_lib0clear(&___nl__im__17);
#line 83
//clear ___nl__bool__29;
#line 83
return ___nl__im__31;
#line 84
goto label_11;
#line 84
label_12:
;
#line 84
label_11:
;
#line 84
//clear ___nl__bool__29;
#line 84
c_rt_lib0clear(&___nl__im__31);
#line 85
//clear ___nl__int__3;
#line 85
c_rt_lib0clear(&___nl__im__17);
#line 85
return ___nl__im__2;
return NULL;
}

ImmT  dfile_priv0parse_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
dfile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__string__11 = NULL;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__string__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
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
ImmT  ___nl__string__48 = NULL;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
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
#line 89
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 90
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 91
c_rt_lib0move(&___nl__im__5, dfile_priv0get_char(___ref___im__0));
#line 91
c_rt_lib0move(&___nl__im__6,___get_global_const(279));
#line 91
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 91
c_rt_lib0clear(&___nl__im__5);
#line 91
c_rt_lib0clear(&___nl__im__6);
#line 91
___nl__bool__4 = !___nl__bool__4;
#line 91
if(___nl__bool__4){ goto label_2;}
#line 92
c_rt_lib0move(&___nl__im__7,___get_global_const(282));
#line 92
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 92
___nl__int__8 = 1;
#line 92
___nl__int__9 = getIntFromImm(___nl__im__7);
#line 92
___nl__int__10 = ___nl__int__9 + ___nl__int__8;
#line 92
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__10));
#line 92
c_rt_lib0move(&___nl__string__11,___get_global_const(282));
#line 92
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__7));
#line 92
c_rt_lib0clear(&___nl__im__7);
#line 92
//clear ___nl__int__8;
#line 92
//clear ___nl__int__9;
#line 92
//clear ___nl__int__10;
#line 92
c_rt_lib0clear(&___nl__string__11);
#line 93
label_4:
;
#line 94
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 94
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 94
c_rt_lib0clear(&___nl__im__14);
#line 94
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 94
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 94
c_rt_lib0clear(&___nl__im__16);
#line 94
___nl__int__17 = ___nl__int__13 >= ___nl__int__15;
#line 94
___nl__bool__12 = ___nl__int__17;
#line 94
//clear ___nl__int__13;
#line 94
//clear ___nl__int__15;
#line 94
//clear ___nl__int__17;
#line 94
___nl__bool__12 = !___nl__bool__12;
#line 94
if(___nl__bool__12){ goto label_6;}
#line 95
(*___ref___bool__1) = true;
#line 96
c_rt_lib0move(&___nl__im__20,___get_global_const(285));
#line 96
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 96
___nl__int__22 = getIntFromImm(___nl__im__23);
#line 96
c_rt_lib0clear(&___nl__im__23);
#line 96
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__22));
#line 96
c_rt_lib0move(&___nl__im__21, ptd0int_to_string(___nl__im__24));
#line 96
//clear ___nl__int__22;
#line 96
c_rt_lib0clear(&___nl__im__24);
#line 96
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__21));
#line 96
c_rt_lib0clear(&___nl__im__20);
#line 96
c_rt_lib0clear(&___nl__im__21);
#line 96
c_rt_lib0move(&___nl__im__25,___get_global_const(287));
#line 96
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__25));
#line 96
c_rt_lib0clear(&___nl__im__19);
#line 96
c_rt_lib0clear(&___nl__im__25);
#line 96
c_rt_lib0clear(&___nl__im__2);
#line 96
c_rt_lib0clear(&___nl__im__3);
#line 96
//clear ___nl__bool__4;
#line 96
//clear ___nl__bool__12;
#line 96
return ___nl__im__18;
#line 97
goto label_5;
#line 97
label_6:
;
#line 97
label_5:
;
#line 97
//clear ___nl__bool__12;
#line 97
c_rt_lib0clear(&___nl__im__18);
#line 98
c_rt_lib0move(&___nl__im__26, dfile_priv0get_char(___ref___im__0));
#line 99
c_rt_lib0move(&___nl__im__27,___get_global_const(282));
#line 99
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__27));
#line 99
___nl__int__28 = 1;
#line 99
___nl__int__29 = getIntFromImm(___nl__im__27);
#line 99
___nl__int__30 = ___nl__int__29 + ___nl__int__28;
#line 99
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__30));
#line 99
c_rt_lib0move(&___nl__string__31,___get_global_const(282));
#line 99
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__31, ___nl__im__27));
#line 99
c_rt_lib0clear(&___nl__im__27);
#line 99
//clear ___nl__int__28;
#line 99
//clear ___nl__int__29;
#line 99
//clear ___nl__int__30;
#line 99
c_rt_lib0clear(&___nl__string__31);
#line 100
c_rt_lib0move(&___nl__im__33,___get_global_const(279));
#line 100
___nl__bool__32 = c_rt_lib0eq(___nl__im__26, ___nl__im__33);
#line 100
c_rt_lib0clear(&___nl__im__33);
#line 100
___nl__bool__32 = !___nl__bool__32;
#line 100
if(___nl__bool__32){ goto label_8;}
#line 100
goto label_3;
#line 100
goto label_7;
#line 100
label_8:
;
#line 100
label_7:
;
#line 100
//clear ___nl__bool__32;
#line 101
c_rt_lib0move(&___nl__im__35,___get_global_const(110));
#line 101
___nl__bool__34 = c_rt_lib0eq(___nl__im__26, ___nl__im__35);
#line 101
c_rt_lib0clear(&___nl__im__35);
#line 101
___nl__bool__34 = !___nl__bool__34;
#line 101
if(___nl__bool__34){ goto label_10;}
#line 102
c_rt_lib0move(&___nl__im__36, dfile_priv0get_char(___ref___im__0));
#line 103
c_rt_lib0move(&___nl__im__38,___get_global_const(288));
#line 103
___nl__bool__37 = c_rt_lib0eq(___nl__im__36, ___nl__im__38);
#line 103
c_rt_lib0clear(&___nl__im__38);
#line 103
___nl__bool__37 = !___nl__bool__37;
#line 103
if(___nl__bool__37){ goto label_12;}
#line 104
c_rt_lib0move(&___nl__im__39, string0lf());
#line 104
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__39));
#line 104
c_rt_lib0clear(&___nl__im__39);
#line 105
goto label_11;
#line 105
label_12:
;
#line 105
c_rt_lib0move(&___nl__im__40,___get_global_const(289));
#line 105
___nl__bool__37 = c_rt_lib0eq(___nl__im__36, ___nl__im__40);
#line 105
c_rt_lib0clear(&___nl__im__40);
#line 105
___nl__bool__37 = !___nl__bool__37;
#line 105
if(___nl__bool__37){ goto label_13;}
#line 106
c_rt_lib0move(&___nl__im__41, string0r());
#line 106
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__41));
#line 106
c_rt_lib0clear(&___nl__im__41);
#line 107
goto label_11;
#line 107
label_13:
;
#line 107
c_rt_lib0move(&___nl__im__42,___get_global_const(290));
#line 107
___nl__bool__37 = c_rt_lib0eq(___nl__im__36, ___nl__im__42);
#line 107
c_rt_lib0clear(&___nl__im__42);
#line 107
___nl__bool__37 = !___nl__bool__37;
#line 107
if(___nl__bool__37){ goto label_14;}
#line 108
c_rt_lib0move(&___nl__im__43, string0tab());
#line 108
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 108
c_rt_lib0clear(&___nl__im__43);
#line 109
goto label_11;
#line 109
label_14:
;
#line 110
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__36));
#line 111
goto label_11;
#line 111
label_11:
;
#line 111
//clear ___nl__bool__37;
#line 112
c_rt_lib0move(&___nl__im__44,___get_global_const(282));
#line 112
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__44));
#line 112
___nl__int__45 = 1;
#line 112
___nl__int__46 = getIntFromImm(___nl__im__44);
#line 112
___nl__int__47 = ___nl__int__46 + ___nl__int__45;
#line 112
c_rt_lib0move(&___nl__im__44, c_rt_lib0int_new(___nl__int__47));
#line 112
c_rt_lib0move(&___nl__string__48,___get_global_const(282));
#line 112
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__48, ___nl__im__44));
#line 112
c_rt_lib0clear(&___nl__im__44);
#line 112
//clear ___nl__int__45;
#line 112
//clear ___nl__int__46;
#line 112
//clear ___nl__int__47;
#line 112
c_rt_lib0clear(&___nl__string__48);
#line 113
goto label_9;
#line 113
label_10:
;
#line 114
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__26));
#line 115
goto label_9;
#line 115
label_9:
;
#line 115
//clear ___nl__bool__34;
#line 115
c_rt_lib0clear(&___nl__im__36);
#line 115
c_rt_lib0clear(&___nl__im__26);
#line 93
goto label_4;
#line 93
label_3:
;
#line 117
goto label_1;
#line 117
label_2:
;
#line 118
c_rt_lib0move(&___nl__im__3, dfile_priv0eat_non_ws(___ref___im__0, ___ref___bool__1));
#line 119
goto label_1;
#line 119
label_1:
;
#line 119
//clear ___nl__bool__4;
#line 119
c_rt_lib0clear(&___nl__im__26);
#line 120
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(291));
#line 120
if(___nl__bool__49){ goto label_17;}
#line 120
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(292));
#line 120
label_17:
;
#line 120
___nl__bool__49 = !___nl__bool__49;
#line 120
if(___nl__bool__49){ goto label_16;}
#line 121
c_rt_lib0clear(&___nl__im__2);
#line 121
//clear ___nl__bool__49;
#line 121
return ___nl__im__3;
#line 122
goto label_15;
#line 122
label_16:
;
#line 122
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(293));
#line 122
___nl__bool__49 = !___nl__bool__49;
#line 122
if(___nl__bool__49){ goto label_18;}
#line 123
c_rt_lib0move(&___nl__im__50, string_utils0get_integer(___nl__im__3));
#line 123
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(79));
#line 123
if(___nl__bool__51){ goto label_20;}
#line 125
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(78));
#line 125
if(___nl__bool__51){ goto label_21;}
#line 125
c_rt_lib0move(&___nl__im__52,___get_global_const(16));
#line 125
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__50));
#line 125
nl_die_arg(___nl__im__52);
#line 123
label_20:
;
#line 123
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(79)));
#line 123
___nl__int__53 = getIntFromImm(___nl__im__54);
#line 124
c_rt_lib0move(&___nl__im__55, c_rt_lib0int_new(___nl__int__53));
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
//clear ___nl__bool__49;
#line 124
c_rt_lib0clear(&___nl__im__50);
#line 124
//clear ___nl__bool__51;
#line 124
c_rt_lib0clear(&___nl__im__52);
#line 124
//clear ___nl__int__53;
#line 124
c_rt_lib0clear(&___nl__im__54);
#line 124
return ___nl__im__55;
#line 125
goto label_19;
#line 125
label_21:
;
#line 125
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(78)));
#line 125
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 126
(*___ref___bool__1) = true;
#line 127
c_rt_lib0move(&___nl__im__58,___get_global_const(294));
#line 127
c_rt_lib0clear(&___nl__im__2);
#line 127
c_rt_lib0clear(&___nl__im__3);
#line 127
//clear ___nl__bool__49;
#line 127
c_rt_lib0clear(&___nl__im__50);
#line 127
//clear ___nl__bool__51;
#line 127
c_rt_lib0clear(&___nl__im__52);
#line 127
//clear ___nl__int__53;
#line 127
c_rt_lib0clear(&___nl__im__54);
#line 127
c_rt_lib0clear(&___nl__im__55);
#line 127
c_rt_lib0clear(&___nl__im__56);
#line 127
c_rt_lib0clear(&___nl__im__57);
#line 127
return ___nl__im__58;
#line 128
goto label_19;
#line 128
label_19:
;
#line 129
goto label_15;
#line 129
label_18:
;
#line 130
(*___ref___bool__1) = true;
#line 131
c_rt_lib0move(&___nl__im__61,___get_global_const(295));
#line 131
c_rt_lib0move(&___nl__im__62, dfile0ssave(___nl__im__2));
#line 131
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__62));
#line 131
c_rt_lib0clear(&___nl__im__61);
#line 131
c_rt_lib0clear(&___nl__im__62);
#line 131
c_rt_lib0move(&___nl__im__63,___get_global_const(296));
#line 131
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 131
c_rt_lib0clear(&___nl__im__60);
#line 131
c_rt_lib0clear(&___nl__im__63);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
//clear ___nl__bool__49;
#line 131
c_rt_lib0clear(&___nl__im__50);
#line 131
//clear ___nl__bool__51;
#line 131
c_rt_lib0clear(&___nl__im__52);
#line 131
//clear ___nl__int__53;
#line 131
c_rt_lib0clear(&___nl__im__54);
#line 131
c_rt_lib0clear(&___nl__im__55);
#line 131
c_rt_lib0clear(&___nl__im__56);
#line 131
c_rt_lib0clear(&___nl__im__57);
#line 131
c_rt_lib0clear(&___nl__im__58);
#line 131
return ___nl__im__59;
#line 132
goto label_15;
#line 132
label_15:
;
#line 132
//clear ___nl__bool__49;
#line 132
c_rt_lib0clear(&___nl__im__50);
#line 132
//clear ___nl__bool__51;
#line 132
c_rt_lib0clear(&___nl__im__52);
#line 132
//clear ___nl__int__53;
#line 132
c_rt_lib0clear(&___nl__im__54);
#line 132
c_rt_lib0clear(&___nl__im__55);
#line 132
c_rt_lib0clear(&___nl__im__56);
#line 132
c_rt_lib0clear(&___nl__im__57);
#line 132
c_rt_lib0clear(&___nl__im__58);
#line 132
c_rt_lib0clear(&___nl__im__59);
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
return NULL;
return NULL;
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
#line 136
___nl__int__2 = string0length(___nl__im__1);
#line 137
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(280)));
#line 137
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 137
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 137
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 137
c_rt_lib0move(&___nl__im__4, c_std_lib0fast_substr(___nl__im__5, ___nl__im__8, ___nl__im__9));
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
//clear ___nl__int__6;
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
___nl__bool__3 = !___nl__bool__3;
#line 137
if(___nl__bool__3){ goto label_2;}
#line 138
c_rt_lib0move(&___nl__im__10,___get_global_const(282));
#line 138
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__10));
#line 138
___nl__int__11 = getIntFromImm(___nl__im__10);
#line 138
___nl__int__12 = ___nl__int__11 + ___nl__int__2;
#line 138
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__12));
#line 138
c_rt_lib0move(&___nl__string__13,___get_global_const(282));
#line 138
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__13, ___nl__im__10));
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
//clear ___nl__int__11;
#line 138
//clear ___nl__int__12;
#line 138
c_rt_lib0clear(&___nl__string__13);
#line 139
___nl__bool__14 = true;
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
//clear ___nl__int__2;
#line 139
//clear ___nl__bool__3;
#line 139
return ___nl__bool__14;
#line 140
goto label_1;
#line 140
label_2:
;
#line 141
___nl__bool__15 = false;
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
//clear ___nl__int__2;
#line 141
//clear ___nl__bool__3;
#line 141
//clear ___nl__bool__14;
#line 141
return ___nl__bool__15;
#line 142
goto label_1;
#line 142
label_1:
;
#line 142
//clear ___nl__bool__3;
#line 142
//clear ___nl__bool__14;
#line 142
//clear ___nl__bool__15;
return false;
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
#line 146
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 146
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 146
c_rt_lib0clear(&___nl__im__3);
#line 146
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 146
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 146
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(280), ___nl__im__2, ___get_global_const(283), ___nl__im__4, ___get_global_const(282), ___nl__im__5));
#line 146
c_rt_lib0clear(&___nl__im__2);
#line 146
c_rt_lib0clear(&___nl__im__4);
#line 146
c_rt_lib0clear(&___nl__im__5);
#line 146
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 146
c_rt_lib0clear(&___nl__im__1);
#line 146
return ___nl__im__0;
#line 146
c_rt_lib0clear(&___nl__im__0);
#line 146
return NULL;
return NULL;
}

ImmT  dfile_priv0parse(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
dfile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__string__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
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
bool  ___nl__bool__32 = false;
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
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
ImmT  ___nl__string__63 = NULL;
ImmT  ___nl__im__64 = NULL;
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
bool  ___nl__bool__68 = false;
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
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
INT  ___nl__int__85 = 0;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
ImmT  ___nl__im__90 = NULL;
INT  ___nl__int__91 = 0;
ImmT  ___nl__im__92 = NULL;
INT  ___nl__int__93 = 0;
INT  ___nl__int__94 = 0;
ImmT  ___nl__string__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
bool  ___nl__bool__99 = false;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
bool  ___nl__bool__102 = false;
bool  ___nl__bool__103 = false;
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
bool  ___nl__bool__123 = false;
bool  ___nl__bool__124 = false;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
INT  ___nl__int__130 = 0;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
bool  ___nl__bool__135 = false;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
#line 150
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 151
c_rt_lib0move(&___nl__im__3, dfile_priv0get_char(___ref___im__0));
#line 152
label_2:
;
#line 152
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(40));
#line 152
___nl__bool__4 = !___nl__bool__4;
#line 152
if(___nl__bool__4){ goto label_1;}
#line 153
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 154
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(297), ___get_global_const(298)));
#line 154
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 154
c_rt_lib0move(&___nl__im__7, c_std_lib0exec(___nl__im__2, &___nl__im__5));
#line 154
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__6, ___nl__im__7));
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__5);
#line 155
goto label_2;
#line 155
label_1:
;
#line 156
c_rt_lib0move(&___nl__im__9,___get_global_const(299));
#line 156
___nl__bool__8 = c_rt_lib0eq(___nl__im__3, ___nl__im__9);
#line 156
c_rt_lib0clear(&___nl__im__9);
#line 156
___nl__bool__8 = !___nl__bool__8;
#line 156
if(___nl__bool__8){ goto label_4;}
#line 157
___nl__int__10 = 1;
#line 157
c_rt_lib0move(&___nl__im__11,___get_global_const(282));
#line 157
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__11));
#line 157
___nl__int__12 = getIntFromImm(___nl__im__11);
#line 157
___nl__int__13 = ___nl__int__12 + ___nl__int__10;
#line 157
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__13));
#line 157
c_rt_lib0move(&___nl__string__14,___get_global_const(282));
#line 157
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__14, ___nl__im__11));
#line 157
//clear ___nl__int__10;
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 157
//clear ___nl__int__12;
#line 157
//clear ___nl__int__13;
#line 157
c_rt_lib0clear(&___nl__string__14);
#line 158
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 159
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 160
label_6:
;
#line 160
c_rt_lib0move(&___nl__im__17,___get_global_const(300));
#line 160
___nl__bool__16 = dfile_priv0match_s(___ref___im__0, ___nl__im__17);
#line 160
c_rt_lib0clear(&___nl__im__17);
#line 160
___nl__bool__16 = !___nl__bool__16;
#line 160
___nl__bool__16 = !___nl__bool__16;
#line 160
if(___nl__bool__16){ goto label_5;}
#line 161
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 161
c_rt_lib0move(&___nl__im__18, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1, ___nl__im__19));
#line 161
c_rt_lib0clear(&___nl__im__19);
#line 162
___nl__bool__20 = (*___ref___bool__1);
#line 162
___nl__bool__20 = !___nl__bool__20;
#line 162
if(___nl__bool__20){ goto label_8;}
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
c_rt_lib0clear(&___nl__im__3);
#line 162
//clear ___nl__bool__4;
#line 162
c_rt_lib0clear(&___nl__im__5);
#line 162
//clear ___nl__bool__8;
#line 162
c_rt_lib0clear(&___nl__im__15);
#line 162
//clear ___nl__bool__16;
#line 162
//clear ___nl__bool__20;
#line 162
return ___nl__im__18;
#line 162
goto label_7;
#line 162
label_8:
;
#line 162
label_7:
;
#line 162
//clear ___nl__bool__20;
#line 163
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 164
c_rt_lib0move(&___nl__im__22,___get_global_const(301));
#line 164
___nl__bool__21 = dfile_priv0match_s(___ref___im__0, ___nl__im__22);
#line 164
c_rt_lib0clear(&___nl__im__22);
#line 164
___nl__bool__21 = !___nl__bool__21;
#line 164
___nl__bool__21 = !___nl__bool__21;
#line 164
if(___nl__bool__21){ goto label_10;}
#line 165
(*___ref___bool__1) = true;
#line 166
c_rt_lib0move(&___nl__im__25,___get_global_const(285));
#line 166
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 166
___nl__int__27 = getIntFromImm(___nl__im__28);
#line 166
c_rt_lib0clear(&___nl__im__28);
#line 166
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__27));
#line 166
c_rt_lib0move(&___nl__im__26, ptd0int_to_string(___nl__im__29));
#line 166
//clear ___nl__int__27;
#line 166
c_rt_lib0clear(&___nl__im__29);
#line 166
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 166
c_rt_lib0clear(&___nl__im__25);
#line 166
c_rt_lib0clear(&___nl__im__26);
#line 166
c_rt_lib0move(&___nl__im__30,___get_global_const(302));
#line 166
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__30));
#line 166
c_rt_lib0clear(&___nl__im__24);
#line 166
c_rt_lib0clear(&___nl__im__30);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
//clear ___nl__bool__4;
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
//clear ___nl__bool__8;
#line 166
c_rt_lib0clear(&___nl__im__15);
#line 166
//clear ___nl__bool__16;
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 166
//clear ___nl__bool__21;
#line 166
return ___nl__im__23;
#line 167
goto label_9;
#line 167
label_10:
;
#line 167
label_9:
;
#line 167
//clear ___nl__bool__21;
#line 167
c_rt_lib0clear(&___nl__im__23);
#line 169
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(303));
#line 169
___nl__bool__32 = !___nl__bool__32;
#line 169
if(___nl__bool__32){ goto label_12;}
#line 170
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(303)));
#line 170
___nl__bool__33 = hash0has_key(___nl__im__34, ___nl__im__18);
#line 170
c_rt_lib0clear(&___nl__im__34);
#line 170
___nl__bool__33 = !___nl__bool__33;
#line 170
if(___nl__bool__33){ goto label_14;}
#line 171
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(303)));
#line 171
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value(___nl__im__35, ___nl__im__18));
#line 171
c_rt_lib0clear(&___nl__im__35);
#line 172
goto label_13;
#line 172
label_14:
;
#line 173
(*___ref___bool__1) = true;
#line 174
c_rt_lib0move(&___nl__im__37,___get_global_const(304));
#line 174
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__18));
#line 174
c_rt_lib0clear(&___nl__im__37);
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
//clear ___nl__bool__4;
#line 174
c_rt_lib0clear(&___nl__im__5);
#line 174
//clear ___nl__bool__8;
#line 174
c_rt_lib0clear(&___nl__im__15);
#line 174
//clear ___nl__bool__16;
#line 174
c_rt_lib0clear(&___nl__im__18);
#line 174
c_rt_lib0clear(&___nl__im__31);
#line 174
//clear ___nl__bool__32;
#line 174
//clear ___nl__bool__33;
#line 174
return ___nl__im__36;
#line 175
goto label_13;
#line 175
label_13:
;
#line 175
//clear ___nl__bool__33;
#line 175
c_rt_lib0clear(&___nl__im__36);
#line 176
goto label_11;
#line 176
label_12:
;
#line 176
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(305));
#line 176
___nl__bool__32 = !___nl__bool__32;
#line 176
if(___nl__bool__32){ goto label_15;}
#line 177
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(305)));
#line 178
goto label_11;
#line 178
label_15:
;
#line 178
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(292));
#line 178
___nl__bool__32 = !___nl__bool__32;
#line 178
if(___nl__bool__32){ goto label_16;}
#line 179
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(292)));
#line 180
goto label_11;
#line 180
label_16:
;
#line 181
(*___ref___bool__1) = true;
#line 182
c_rt_lib0move(&___nl__im__41,___get_global_const(295));
#line 182
c_rt_lib0move(&___nl__im__42, dfile0ssave(___nl__im__2));
#line 182
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 182
c_rt_lib0clear(&___nl__im__41);
#line 182
c_rt_lib0clear(&___nl__im__42);
#line 182
c_rt_lib0move(&___nl__im__43,___get_global_const(306));
#line 182
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__43));
#line 182
c_rt_lib0clear(&___nl__im__40);
#line 182
c_rt_lib0clear(&___nl__im__43);
#line 182
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_const(305)));
#line 182
c_rt_lib0move(&___nl__im__44, dfile0ssave(___nl__im__45));
#line 182
c_rt_lib0clear(&___nl__im__45);
#line 182
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__44));
#line 182
c_rt_lib0clear(&___nl__im__39);
#line 182
c_rt_lib0clear(&___nl__im__44);
#line 182
c_rt_lib0clear(&___nl__im__2);
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
//clear ___nl__bool__4;
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
//clear ___nl__bool__8;
#line 182
c_rt_lib0clear(&___nl__im__15);
#line 182
//clear ___nl__bool__16;
#line 182
c_rt_lib0clear(&___nl__im__18);
#line 182
c_rt_lib0clear(&___nl__im__31);
#line 182
//clear ___nl__bool__32;
#line 182
return ___nl__im__38;
#line 183
goto label_11;
#line 183
label_11:
;
#line 183
//clear ___nl__bool__32;
#line 183
c_rt_lib0clear(&___nl__im__38);
#line 184
c_rt_lib0move(&___nl__im__46, dfile_priv0parse(___ref___im__0, ___ref___bool__1, ___nl__im__31));
#line 185
___nl__bool__47 = (*___ref___bool__1);
#line 185
___nl__bool__47 = !___nl__bool__47;
#line 185
if(___nl__bool__47){ goto label_18;}
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
c_rt_lib0clear(&___nl__im__3);
#line 185
//clear ___nl__bool__4;
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
//clear ___nl__bool__8;
#line 185
c_rt_lib0clear(&___nl__im__15);
#line 185
//clear ___nl__bool__16;
#line 185
c_rt_lib0clear(&___nl__im__18);
#line 185
c_rt_lib0clear(&___nl__im__31);
#line 185
//clear ___nl__bool__47;
#line 185
return ___nl__im__46;
#line 185
goto label_17;
#line 185
label_18:
;
#line 185
label_17:
;
#line 185
//clear ___nl__bool__47;
#line 186
c_rt_lib0delete(hash0set_value(&___nl__im__15, ___nl__im__18, ___nl__im__46));
#line 187
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 188
c_rt_lib0move(&___nl__im__49,___get_global_const(307));
#line 188
___nl__bool__48 = dfile_priv0match_s(___ref___im__0, ___nl__im__49);
#line 188
c_rt_lib0clear(&___nl__im__49);
#line 188
___nl__bool__48 = !___nl__bool__48;
#line 188
___nl__bool__48 = !___nl__bool__48;
#line 188
if(___nl__bool__48){ goto label_20;}
#line 189
(*___ref___bool__1) = true;
#line 190
c_rt_lib0move(&___nl__im__52,___get_global_const(285));
#line 190
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 190
___nl__int__54 = getIntFromImm(___nl__im__55);
#line 190
c_rt_lib0clear(&___nl__im__55);
#line 190
c_rt_lib0move(&___nl__im__56, c_rt_lib0int_new(___nl__int__54));
#line 190
c_rt_lib0move(&___nl__im__53, ptd0int_to_string(___nl__im__56));
#line 190
//clear ___nl__int__54;
#line 190
c_rt_lib0clear(&___nl__im__56);
#line 190
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__53));
#line 190
c_rt_lib0clear(&___nl__im__52);
#line 190
c_rt_lib0clear(&___nl__im__53);
#line 190
c_rt_lib0move(&___nl__im__57,___get_global_const(308));
#line 190
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__57));
#line 190
c_rt_lib0clear(&___nl__im__51);
#line 190
c_rt_lib0clear(&___nl__im__57);
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
//clear ___nl__bool__4;
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
//clear ___nl__bool__8;
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
//clear ___nl__bool__16;
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__31);
#line 190
c_rt_lib0clear(&___nl__im__46);
#line 190
//clear ___nl__bool__48;
#line 190
return ___nl__im__50;
#line 191
goto label_19;
#line 191
label_20:
;
#line 191
label_19:
;
#line 191
//clear ___nl__bool__48;
#line 191
c_rt_lib0clear(&___nl__im__50);
#line 192
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 192
c_rt_lib0clear(&___nl__im__18);
#line 192
c_rt_lib0clear(&___nl__im__31);
#line 192
c_rt_lib0clear(&___nl__im__46);
#line 193
goto label_6;
#line 193
label_5:
;
#line 194
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 195
c_rt_lib0clear(&___nl__im__2);
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
//clear ___nl__bool__4;
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
//clear ___nl__bool__8;
#line 195
//clear ___nl__bool__16;
#line 195
c_rt_lib0clear(&___nl__im__18);
#line 195
c_rt_lib0clear(&___nl__im__31);
#line 195
c_rt_lib0clear(&___nl__im__46);
#line 195
return ___nl__im__15;
#line 196
goto label_3;
#line 196
label_4:
;
#line 196
c_rt_lib0move(&___nl__im__58,___get_global_const(309));
#line 196
___nl__bool__8 = c_rt_lib0eq(___nl__im__3, ___nl__im__58);
#line 196
c_rt_lib0clear(&___nl__im__58);
#line 196
___nl__bool__8 = !___nl__bool__8;
#line 196
if(___nl__bool__8){ goto label_21;}
#line 197
___nl__int__59 = 1;
#line 197
c_rt_lib0move(&___nl__im__60,___get_global_const(282));
#line 197
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__60));
#line 197
___nl__int__61 = getIntFromImm(___nl__im__60);
#line 197
___nl__int__62 = ___nl__int__61 + ___nl__int__59;
#line 197
c_rt_lib0move(&___nl__im__60, c_rt_lib0int_new(___nl__int__62));
#line 197
c_rt_lib0move(&___nl__string__63,___get_global_const(282));
#line 197
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__63, ___nl__im__60));
#line 197
//clear ___nl__int__59;
#line 197
c_rt_lib0clear(&___nl__im__60);
#line 197
//clear ___nl__int__61;
#line 197
//clear ___nl__int__62;
#line 197
c_rt_lib0clear(&___nl__string__63);
#line 198
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(0));
#line 199
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 200
label_23:
;
#line 200
c_rt_lib0move(&___nl__im__66,___get_global_const(310));
#line 200
___nl__bool__65 = dfile_priv0match_s(___ref___im__0, ___nl__im__66);
#line 200
c_rt_lib0clear(&___nl__im__66);
#line 200
___nl__bool__65 = !___nl__bool__65;
#line 200
___nl__bool__65 = !___nl__bool__65;
#line 200
if(___nl__bool__65){ goto label_22;}
#line 202
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(311));
#line 202
___nl__bool__68 = !___nl__bool__68;
#line 202
if(___nl__bool__68){ goto label_25;}
#line 203
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(311)));
#line 204
goto label_24;
#line 204
label_25:
;
#line 204
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(292));
#line 204
___nl__bool__68 = !___nl__bool__68;
#line 204
if(___nl__bool__68){ goto label_26;}
#line 205
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_const(292)));
#line 206
goto label_24;
#line 206
label_26:
;
#line 207
(*___ref___bool__1) = true;
#line 208
c_rt_lib0move(&___nl__im__72,___get_global_const(295));
#line 208
c_rt_lib0move(&___nl__im__73, dfile0ssave(___nl__im__2));
#line 208
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__73));
#line 208
c_rt_lib0clear(&___nl__im__72);
#line 208
c_rt_lib0clear(&___nl__im__73);
#line 208
c_rt_lib0move(&___nl__im__74,___get_global_const(306));
#line 208
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__74));
#line 208
c_rt_lib0clear(&___nl__im__71);
#line 208
c_rt_lib0clear(&___nl__im__74);
#line 208
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_const(305)));
#line 208
c_rt_lib0move(&___nl__im__75, dfile0ssave(___nl__im__76));
#line 208
c_rt_lib0clear(&___nl__im__76);
#line 208
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__75));
#line 208
c_rt_lib0clear(&___nl__im__70);
#line 208
c_rt_lib0clear(&___nl__im__75);
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
//clear ___nl__bool__4;
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
//clear ___nl__bool__8;
#line 208
c_rt_lib0clear(&___nl__im__15);
#line 208
//clear ___nl__bool__16;
#line 208
c_rt_lib0clear(&___nl__im__18);
#line 208
c_rt_lib0clear(&___nl__im__31);
#line 208
c_rt_lib0clear(&___nl__im__46);
#line 208
c_rt_lib0clear(&___nl__im__64);
#line 208
//clear ___nl__bool__65;
#line 208
c_rt_lib0clear(&___nl__im__67);
#line 208
//clear ___nl__bool__68;
#line 208
return ___nl__im__69;
#line 209
goto label_24;
#line 209
label_24:
;
#line 209
//clear ___nl__bool__68;
#line 209
c_rt_lib0clear(&___nl__im__69);
#line 210
c_rt_lib0move(&___nl__im__77, dfile_priv0parse(___ref___im__0, ___ref___bool__1, ___nl__im__67));
#line 211
___nl__bool__78 = (*___ref___bool__1);
#line 211
___nl__bool__78 = !___nl__bool__78;
#line 211
if(___nl__bool__78){ goto label_28;}
#line 211
c_rt_lib0clear(&___nl__im__2);
#line 211
c_rt_lib0clear(&___nl__im__3);
#line 211
//clear ___nl__bool__4;
#line 211
c_rt_lib0clear(&___nl__im__5);
#line 211
//clear ___nl__bool__8;
#line 211
c_rt_lib0clear(&___nl__im__15);
#line 211
//clear ___nl__bool__16;
#line 211
c_rt_lib0clear(&___nl__im__18);
#line 211
c_rt_lib0clear(&___nl__im__31);
#line 211
c_rt_lib0clear(&___nl__im__46);
#line 211
c_rt_lib0clear(&___nl__im__64);
#line 211
//clear ___nl__bool__65;
#line 211
c_rt_lib0clear(&___nl__im__67);
#line 211
//clear ___nl__bool__78;
#line 211
return ___nl__im__77;
#line 211
goto label_27;
#line 211
label_28:
;
#line 211
label_27:
;
#line 211
//clear ___nl__bool__78;
#line 212
c_rt_lib0delete(array0push(&___nl__im__64, ___nl__im__77));
#line 213
c_rt_lib0move(&___nl__im__80,___get_global_const(307));
#line 213
___nl__bool__79 = dfile_priv0match_s(___ref___im__0, ___nl__im__80);
#line 213
c_rt_lib0clear(&___nl__im__80);
#line 213
___nl__bool__79 = !___nl__bool__79;
#line 213
___nl__bool__79 = !___nl__bool__79;
#line 213
if(___nl__bool__79){ goto label_30;}
#line 214
(*___ref___bool__1) = true;
#line 215
c_rt_lib0move(&___nl__im__83,___get_global_const(285));
#line 215
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 215
___nl__int__85 = getIntFromImm(___nl__im__86);
#line 215
c_rt_lib0clear(&___nl__im__86);
#line 215
c_rt_lib0move(&___nl__im__87, c_rt_lib0int_new(___nl__int__85));
#line 215
c_rt_lib0move(&___nl__im__84, ptd0int_to_string(___nl__im__87));
#line 215
//clear ___nl__int__85;
#line 215
c_rt_lib0clear(&___nl__im__87);
#line 215
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 215
c_rt_lib0clear(&___nl__im__83);
#line 215
c_rt_lib0clear(&___nl__im__84);
#line 215
c_rt_lib0move(&___nl__im__88,___get_global_const(308));
#line 215
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__88));
#line 215
c_rt_lib0clear(&___nl__im__82);
#line 215
c_rt_lib0clear(&___nl__im__88);
#line 215
c_rt_lib0clear(&___nl__im__2);
#line 215
c_rt_lib0clear(&___nl__im__3);
#line 215
//clear ___nl__bool__4;
#line 215
c_rt_lib0clear(&___nl__im__5);
#line 215
//clear ___nl__bool__8;
#line 215
c_rt_lib0clear(&___nl__im__15);
#line 215
//clear ___nl__bool__16;
#line 215
c_rt_lib0clear(&___nl__im__18);
#line 215
c_rt_lib0clear(&___nl__im__31);
#line 215
c_rt_lib0clear(&___nl__im__46);
#line 215
c_rt_lib0clear(&___nl__im__64);
#line 215
//clear ___nl__bool__65;
#line 215
c_rt_lib0clear(&___nl__im__67);
#line 215
c_rt_lib0clear(&___nl__im__77);
#line 215
//clear ___nl__bool__79;
#line 215
return ___nl__im__81;
#line 216
goto label_29;
#line 216
label_30:
;
#line 216
label_29:
;
#line 216
//clear ___nl__bool__79;
#line 216
c_rt_lib0clear(&___nl__im__81);
#line 217
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 217
c_rt_lib0clear(&___nl__im__67);
#line 217
c_rt_lib0clear(&___nl__im__77);
#line 218
goto label_23;
#line 218
label_22:
;
#line 219
c_rt_lib0clear(&___nl__im__2);
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 219
//clear ___nl__bool__4;
#line 219
c_rt_lib0clear(&___nl__im__5);
#line 219
//clear ___nl__bool__8;
#line 219
c_rt_lib0clear(&___nl__im__15);
#line 219
//clear ___nl__bool__16;
#line 219
c_rt_lib0clear(&___nl__im__18);
#line 219
c_rt_lib0clear(&___nl__im__31);
#line 219
c_rt_lib0clear(&___nl__im__46);
#line 219
//clear ___nl__bool__65;
#line 219
c_rt_lib0clear(&___nl__im__67);
#line 219
c_rt_lib0clear(&___nl__im__77);
#line 219
return ___nl__im__64;
#line 220
goto label_3;
#line 220
label_21:
;
#line 220
c_rt_lib0move(&___nl__im__90,___get_global_const(191));
#line 220
___nl__bool__8 = c_rt_lib0eq(___nl__im__3, ___nl__im__90);
#line 220
c_rt_lib0clear(&___nl__im__90);
#line 220
___nl__bool__89 = !___nl__bool__8;
#line 220
if(___nl__bool__89){ goto label_32;}
#line 220
___nl__bool__8 = dfile_priv0is_ov(___ref___im__0);
#line 220
label_32:
;
#line 220
//clear ___nl__bool__89;
#line 220
___nl__bool__8 = !___nl__bool__8;
#line 220
if(___nl__bool__8){ goto label_31;}
#line 221
___nl__int__91 = 7;
#line 221
c_rt_lib0move(&___nl__im__92,___get_global_const(282));
#line 221
c_rt_lib0move(&___nl__im__92, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__92));
#line 221
___nl__int__93 = getIntFromImm(___nl__im__92);
#line 221
___nl__int__94 = ___nl__int__93 + ___nl__int__91;
#line 221
c_rt_lib0move(&___nl__im__92, c_rt_lib0int_new(___nl__int__94));
#line 221
c_rt_lib0move(&___nl__string__95,___get_global_const(282));
#line 221
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__95, ___nl__im__92));
#line 221
//clear ___nl__int__91;
#line 221
c_rt_lib0clear(&___nl__im__92);
#line 221
//clear ___nl__int__93;
#line 221
//clear ___nl__int__94;
#line 221
c_rt_lib0clear(&___nl__string__95);
#line 222
c_rt_lib0move(&___nl__im__97, ptd0string());
#line 222
c_rt_lib0move(&___nl__im__96, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1, ___nl__im__97));
#line 222
c_rt_lib0clear(&___nl__im__97);
#line 223
___nl__bool__98 = (*___ref___bool__1);
#line 223
___nl__bool__98 = !___nl__bool__98;
#line 223
if(___nl__bool__98){ goto label_34;}
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
//clear ___nl__bool__4;
#line 223
c_rt_lib0clear(&___nl__im__5);
#line 223
//clear ___nl__bool__8;
#line 223
c_rt_lib0clear(&___nl__im__15);
#line 223
//clear ___nl__bool__16;
#line 223
c_rt_lib0clear(&___nl__im__18);
#line 223
c_rt_lib0clear(&___nl__im__31);
#line 223
c_rt_lib0clear(&___nl__im__46);
#line 223
c_rt_lib0clear(&___nl__im__64);
#line 223
//clear ___nl__bool__65;
#line 223
c_rt_lib0clear(&___nl__im__67);
#line 223
c_rt_lib0clear(&___nl__im__77);
#line 223
//clear ___nl__bool__98;
#line 223
return ___nl__im__96;
#line 223
goto label_33;
#line 223
label_34:
;
#line 223
label_33:
;
#line 223
//clear ___nl__bool__98;
#line 224
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 225
c_rt_lib0move(&___nl__im__100,___get_global_const(307));
#line 225
___nl__bool__99 = dfile_priv0match_s(___ref___im__0, ___nl__im__100);
#line 225
c_rt_lib0clear(&___nl__im__100);
#line 225
___nl__bool__99 = !___nl__bool__99;
#line 225
if(___nl__bool__99){ goto label_36;}
#line 227
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(312));
#line 227
___nl__bool__102 = !___nl__bool__102;
#line 227
if(___nl__bool__102){ goto label_38;}
#line 228
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(312)));
#line 228
___nl__bool__103 = hash0has_key(___nl__im__104, ___nl__im__96);
#line 228
c_rt_lib0clear(&___nl__im__104);
#line 228
___nl__bool__103 = !___nl__bool__103;
#line 228
if(___nl__bool__103){ goto label_40;}
#line 229
c_rt_lib0move(&___nl__im__106, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(312)));
#line 229
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value(___nl__im__106, ___nl__im__96));
#line 229
c_rt_lib0clear(&___nl__im__106);
#line 229
___nl__bool__107 = c_rt_lib0priv_is(___nl__im__105, ___get_global_const(28));
#line 229
if(___nl__bool__107){ goto label_42;}
#line 231
___nl__bool__107 = c_rt_lib0priv_is(___nl__im__105, ___get_global_const(29));
#line 231
if(___nl__bool__107){ goto label_43;}
#line 231
c_rt_lib0move(&___nl__im__108,___get_global_const(16));
#line 231
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_mk(2, ___nl__im__108, ___nl__im__105));
#line 231
nl_die_arg(___nl__im__108);
#line 229
label_42:
;
#line 229
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__105, ___get_global_const(28)));
#line 229
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 230
c_rt_lib0copy(&___nl__im__101, ___nl__im__109);
#line 231
goto label_41;
#line 231
label_43:
;
#line 232
(*___ref___bool__1) = true;
#line 233
c_rt_lib0move(&___nl__im__111,___get_global_const(313));
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
c_rt_lib0clear(&___nl__im__3);
#line 233
//clear ___nl__bool__4;
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
//clear ___nl__bool__8;
#line 233
c_rt_lib0clear(&___nl__im__15);
#line 233
//clear ___nl__bool__16;
#line 233
c_rt_lib0clear(&___nl__im__18);
#line 233
c_rt_lib0clear(&___nl__im__31);
#line 233
c_rt_lib0clear(&___nl__im__46);
#line 233
c_rt_lib0clear(&___nl__im__64);
#line 233
//clear ___nl__bool__65;
#line 233
c_rt_lib0clear(&___nl__im__67);
#line 233
c_rt_lib0clear(&___nl__im__77);
#line 233
c_rt_lib0clear(&___nl__im__96);
#line 233
//clear ___nl__bool__99;
#line 233
c_rt_lib0clear(&___nl__im__101);
#line 233
//clear ___nl__bool__102;
#line 233
//clear ___nl__bool__103;
#line 233
c_rt_lib0clear(&___nl__im__105);
#line 233
//clear ___nl__bool__107;
#line 233
c_rt_lib0clear(&___nl__im__108);
#line 233
c_rt_lib0clear(&___nl__im__109);
#line 233
c_rt_lib0clear(&___nl__im__110);
#line 233
return ___nl__im__111;
#line 234
goto label_41;
#line 234
label_41:
;
#line 235
goto label_39;
#line 235
label_40:
;
#line 236
(*___ref___bool__1) = true;
#line 237
c_rt_lib0move(&___nl__im__113,___get_global_const(314));
#line 237
c_rt_lib0move(&___nl__im__112, c_rt_lib0concat_new(___nl__im__113, ___nl__im__96));
#line 237
c_rt_lib0clear(&___nl__im__113);
#line 237
c_rt_lib0clear(&___nl__im__2);
#line 237
c_rt_lib0clear(&___nl__im__3);
#line 237
//clear ___nl__bool__4;
#line 237
c_rt_lib0clear(&___nl__im__5);
#line 237
//clear ___nl__bool__8;
#line 237
c_rt_lib0clear(&___nl__im__15);
#line 237
//clear ___nl__bool__16;
#line 237
c_rt_lib0clear(&___nl__im__18);
#line 237
c_rt_lib0clear(&___nl__im__31);
#line 237
c_rt_lib0clear(&___nl__im__46);
#line 237
c_rt_lib0clear(&___nl__im__64);
#line 237
//clear ___nl__bool__65;
#line 237
c_rt_lib0clear(&___nl__im__67);
#line 237
c_rt_lib0clear(&___nl__im__77);
#line 237
c_rt_lib0clear(&___nl__im__96);
#line 237
//clear ___nl__bool__99;
#line 237
c_rt_lib0clear(&___nl__im__101);
#line 237
//clear ___nl__bool__102;
#line 237
//clear ___nl__bool__103;
#line 237
c_rt_lib0clear(&___nl__im__105);
#line 237
//clear ___nl__bool__107;
#line 237
c_rt_lib0clear(&___nl__im__108);
#line 237
c_rt_lib0clear(&___nl__im__109);
#line 237
c_rt_lib0clear(&___nl__im__110);
#line 237
c_rt_lib0clear(&___nl__im__111);
#line 237
return ___nl__im__112;
#line 238
goto label_39;
#line 238
label_39:
;
#line 238
//clear ___nl__bool__103;
#line 238
c_rt_lib0clear(&___nl__im__105);
#line 238
//clear ___nl__bool__107;
#line 238
c_rt_lib0clear(&___nl__im__108);
#line 238
c_rt_lib0clear(&___nl__im__109);
#line 238
c_rt_lib0clear(&___nl__im__110);
#line 238
c_rt_lib0clear(&___nl__im__111);
#line 238
c_rt_lib0clear(&___nl__im__112);
#line 239
goto label_37;
#line 239
label_38:
;
#line 239
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(292));
#line 239
___nl__bool__102 = !___nl__bool__102;
#line 239
if(___nl__bool__102){ goto label_44;}
#line 240
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_const(292)));
#line 241
goto label_37;
#line 241
label_44:
;
#line 242
(*___ref___bool__1) = true;
#line 243
c_rt_lib0move(&___nl__im__117,___get_global_const(295));
#line 243
c_rt_lib0move(&___nl__im__118, dfile0ssave(___nl__im__2));
#line 243
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__118));
#line 243
c_rt_lib0clear(&___nl__im__117);
#line 243
c_rt_lib0clear(&___nl__im__118);
#line 243
c_rt_lib0move(&___nl__im__119,___get_global_const(306));
#line 243
c_rt_lib0move(&___nl__im__115, c_rt_lib0concat_new(___nl__im__116, ___nl__im__119));
#line 243
c_rt_lib0clear(&___nl__im__116);
#line 243
c_rt_lib0clear(&___nl__im__119);
#line 243
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_none(___get_global_const(305)));
#line 243
c_rt_lib0move(&___nl__im__120, dfile0ssave(___nl__im__121));
#line 243
c_rt_lib0clear(&___nl__im__121);
#line 243
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__115, ___nl__im__120));
#line 243
c_rt_lib0clear(&___nl__im__115);
#line 243
c_rt_lib0clear(&___nl__im__120);
#line 243
c_rt_lib0clear(&___nl__im__2);
#line 243
c_rt_lib0clear(&___nl__im__3);
#line 243
//clear ___nl__bool__4;
#line 243
c_rt_lib0clear(&___nl__im__5);
#line 243
//clear ___nl__bool__8;
#line 243
c_rt_lib0clear(&___nl__im__15);
#line 243
//clear ___nl__bool__16;
#line 243
c_rt_lib0clear(&___nl__im__18);
#line 243
c_rt_lib0clear(&___nl__im__31);
#line 243
c_rt_lib0clear(&___nl__im__46);
#line 243
c_rt_lib0clear(&___nl__im__64);
#line 243
//clear ___nl__bool__65;
#line 243
c_rt_lib0clear(&___nl__im__67);
#line 243
c_rt_lib0clear(&___nl__im__77);
#line 243
c_rt_lib0clear(&___nl__im__96);
#line 243
//clear ___nl__bool__99;
#line 243
c_rt_lib0clear(&___nl__im__101);
#line 243
//clear ___nl__bool__102;
#line 243
return ___nl__im__114;
#line 244
goto label_37;
#line 244
label_37:
;
#line 244
//clear ___nl__bool__102;
#line 244
c_rt_lib0clear(&___nl__im__114);
#line 245
c_rt_lib0move(&___nl__im__122, dfile_priv0parse(___ref___im__0, ___ref___bool__1, ___nl__im__101));
#line 246
___nl__bool__123 = (*___ref___bool__1);
#line 246
___nl__bool__123 = !___nl__bool__123;
#line 246
if(___nl__bool__123){ goto label_46;}
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
//clear ___nl__bool__4;
#line 246
c_rt_lib0clear(&___nl__im__5);
#line 246
//clear ___nl__bool__8;
#line 246
c_rt_lib0clear(&___nl__im__15);
#line 246
//clear ___nl__bool__16;
#line 246
c_rt_lib0clear(&___nl__im__18);
#line 246
c_rt_lib0clear(&___nl__im__31);
#line 246
c_rt_lib0clear(&___nl__im__46);
#line 246
c_rt_lib0clear(&___nl__im__64);
#line 246
//clear ___nl__bool__65;
#line 246
c_rt_lib0clear(&___nl__im__67);
#line 246
c_rt_lib0clear(&___nl__im__77);
#line 246
c_rt_lib0clear(&___nl__im__96);
#line 246
//clear ___nl__bool__99;
#line 246
c_rt_lib0clear(&___nl__im__101);
#line 246
//clear ___nl__bool__123;
#line 246
return ___nl__im__122;
#line 246
goto label_45;
#line 246
label_46:
;
#line 246
label_45:
;
#line 246
//clear ___nl__bool__123;
#line 247
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 248
c_rt_lib0move(&___nl__im__125,___get_global_const(315));
#line 248
___nl__bool__124 = dfile_priv0match_s(___ref___im__0, ___nl__im__125);
#line 248
c_rt_lib0clear(&___nl__im__125);
#line 248
___nl__bool__124 = !___nl__bool__124;
#line 248
___nl__bool__124 = !___nl__bool__124;
#line 248
if(___nl__bool__124){ goto label_48;}
#line 249
(*___ref___bool__1) = true;
#line 250
c_rt_lib0move(&___nl__im__128,___get_global_const(285));
#line 250
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 250
___nl__int__130 = getIntFromImm(___nl__im__131);
#line 250
c_rt_lib0clear(&___nl__im__131);
#line 250
c_rt_lib0move(&___nl__im__132, c_rt_lib0int_new(___nl__int__130));
#line 250
c_rt_lib0move(&___nl__im__129, ptd0int_to_string(___nl__im__132));
#line 250
//clear ___nl__int__130;
#line 250
c_rt_lib0clear(&___nl__im__132);
#line 250
c_rt_lib0move(&___nl__im__127, c_rt_lib0concat_new(___nl__im__128, ___nl__im__129));
#line 250
c_rt_lib0clear(&___nl__im__128);
#line 250
c_rt_lib0clear(&___nl__im__129);
#line 250
c_rt_lib0move(&___nl__im__133,___get_global_const(316));
#line 250
c_rt_lib0move(&___nl__im__126, c_rt_lib0concat_new(___nl__im__127, ___nl__im__133));
#line 250
c_rt_lib0clear(&___nl__im__127);
#line 250
c_rt_lib0clear(&___nl__im__133);
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
//clear ___nl__bool__4;
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
//clear ___nl__bool__8;
#line 250
c_rt_lib0clear(&___nl__im__15);
#line 250
//clear ___nl__bool__16;
#line 250
c_rt_lib0clear(&___nl__im__18);
#line 250
c_rt_lib0clear(&___nl__im__31);
#line 250
c_rt_lib0clear(&___nl__im__46);
#line 250
c_rt_lib0clear(&___nl__im__64);
#line 250
//clear ___nl__bool__65;
#line 250
c_rt_lib0clear(&___nl__im__67);
#line 250
c_rt_lib0clear(&___nl__im__77);
#line 250
c_rt_lib0clear(&___nl__im__96);
#line 250
//clear ___nl__bool__99;
#line 250
c_rt_lib0clear(&___nl__im__101);
#line 250
c_rt_lib0clear(&___nl__im__122);
#line 250
//clear ___nl__bool__124;
#line 250
return ___nl__im__126;
#line 251
goto label_47;
#line 251
label_48:
;
#line 251
label_47:
;
#line 251
//clear ___nl__bool__124;
#line 251
c_rt_lib0clear(&___nl__im__126);
#line 252
c_rt_lib0move(&___nl__im__134, ov0mk_val(___nl__im__96, ___nl__im__122));
#line 252
c_rt_lib0clear(&___nl__im__2);
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 252
//clear ___nl__bool__4;
#line 252
c_rt_lib0clear(&___nl__im__5);
#line 252
//clear ___nl__bool__8;
#line 252
c_rt_lib0clear(&___nl__im__15);
#line 252
//clear ___nl__bool__16;
#line 252
c_rt_lib0clear(&___nl__im__18);
#line 252
c_rt_lib0clear(&___nl__im__31);
#line 252
c_rt_lib0clear(&___nl__im__46);
#line 252
c_rt_lib0clear(&___nl__im__64);
#line 252
//clear ___nl__bool__65;
#line 252
c_rt_lib0clear(&___nl__im__67);
#line 252
c_rt_lib0clear(&___nl__im__77);
#line 252
c_rt_lib0clear(&___nl__im__96);
#line 252
//clear ___nl__bool__99;
#line 252
c_rt_lib0clear(&___nl__im__101);
#line 252
c_rt_lib0clear(&___nl__im__122);
#line 252
return ___nl__im__134;
#line 253
goto label_35;
#line 253
label_36:
;
#line 253
label_35:
;
#line 253
//clear ___nl__bool__99;
#line 253
c_rt_lib0clear(&___nl__im__101);
#line 253
c_rt_lib0clear(&___nl__im__122);
#line 253
c_rt_lib0clear(&___nl__im__134);
#line 254
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 255
c_rt_lib0move(&___nl__im__136,___get_global_const(315));
#line 255
___nl__bool__135 = dfile_priv0match_s(___ref___im__0, ___nl__im__136);
#line 255
c_rt_lib0clear(&___nl__im__136);
#line 255
___nl__bool__135 = !___nl__bool__135;
#line 255
___nl__bool__135 = !___nl__bool__135;
#line 255
if(___nl__bool__135){ goto label_50;}
#line 256
(*___ref___bool__1) = true;
#line 257
c_rt_lib0move(&___nl__im__139,___get_global_const(285));
#line 257
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 257
___nl__int__141 = getIntFromImm(___nl__im__142);
#line 257
c_rt_lib0clear(&___nl__im__142);
#line 257
c_rt_lib0move(&___nl__im__143, c_rt_lib0int_new(___nl__int__141));
#line 257
c_rt_lib0move(&___nl__im__140, ptd0int_to_string(___nl__im__143));
#line 257
//clear ___nl__int__141;
#line 257
c_rt_lib0clear(&___nl__im__143);
#line 257
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__140));
#line 257
c_rt_lib0clear(&___nl__im__139);
#line 257
c_rt_lib0clear(&___nl__im__140);
#line 257
c_rt_lib0move(&___nl__im__144,___get_global_const(316));
#line 257
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__144));
#line 257
c_rt_lib0clear(&___nl__im__138);
#line 257
c_rt_lib0clear(&___nl__im__144);
#line 257
c_rt_lib0clear(&___nl__im__2);
#line 257
c_rt_lib0clear(&___nl__im__3);
#line 257
//clear ___nl__bool__4;
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 257
//clear ___nl__bool__8;
#line 257
c_rt_lib0clear(&___nl__im__15);
#line 257
//clear ___nl__bool__16;
#line 257
c_rt_lib0clear(&___nl__im__18);
#line 257
c_rt_lib0clear(&___nl__im__31);
#line 257
c_rt_lib0clear(&___nl__im__46);
#line 257
c_rt_lib0clear(&___nl__im__64);
#line 257
//clear ___nl__bool__65;
#line 257
c_rt_lib0clear(&___nl__im__67);
#line 257
c_rt_lib0clear(&___nl__im__77);
#line 257
c_rt_lib0clear(&___nl__im__96);
#line 257
//clear ___nl__bool__135;
#line 257
return ___nl__im__137;
#line 258
goto label_49;
#line 258
label_50:
;
#line 258
label_49:
;
#line 258
//clear ___nl__bool__135;
#line 258
c_rt_lib0clear(&___nl__im__137);
#line 259
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 260
c_rt_lib0move(&___nl__im__145, ov0mk(___nl__im__96));
#line 260
c_rt_lib0clear(&___nl__im__2);
#line 260
c_rt_lib0clear(&___nl__im__3);
#line 260
//clear ___nl__bool__4;
#line 260
c_rt_lib0clear(&___nl__im__5);
#line 260
//clear ___nl__bool__8;
#line 260
c_rt_lib0clear(&___nl__im__15);
#line 260
//clear ___nl__bool__16;
#line 260
c_rt_lib0clear(&___nl__im__18);
#line 260
c_rt_lib0clear(&___nl__im__31);
#line 260
c_rt_lib0clear(&___nl__im__46);
#line 260
c_rt_lib0clear(&___nl__im__64);
#line 260
//clear ___nl__bool__65;
#line 260
c_rt_lib0clear(&___nl__im__67);
#line 260
c_rt_lib0clear(&___nl__im__77);
#line 260
c_rt_lib0clear(&___nl__im__96);
#line 260
return ___nl__im__145;
#line 261
goto label_3;
#line 261
label_31:
;
#line 262
c_rt_lib0move(&___nl__im__146, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1, ___nl__im__2));
#line 262
c_rt_lib0clear(&___nl__im__2);
#line 262
c_rt_lib0clear(&___nl__im__3);
#line 262
//clear ___nl__bool__4;
#line 262
c_rt_lib0clear(&___nl__im__5);
#line 262
//clear ___nl__bool__8;
#line 262
c_rt_lib0clear(&___nl__im__15);
#line 262
//clear ___nl__bool__16;
#line 262
c_rt_lib0clear(&___nl__im__18);
#line 262
c_rt_lib0clear(&___nl__im__31);
#line 262
c_rt_lib0clear(&___nl__im__46);
#line 262
c_rt_lib0clear(&___nl__im__64);
#line 262
//clear ___nl__bool__65;
#line 262
c_rt_lib0clear(&___nl__im__67);
#line 262
c_rt_lib0clear(&___nl__im__77);
#line 262
c_rt_lib0clear(&___nl__im__96);
#line 262
c_rt_lib0clear(&___nl__im__145);
#line 262
return ___nl__im__146;
#line 263
goto label_3;
#line 263
label_3:
;
#line 263
//clear ___nl__bool__8;
#line 263
c_rt_lib0clear(&___nl__im__15);
#line 263
//clear ___nl__bool__16;
#line 263
c_rt_lib0clear(&___nl__im__18);
#line 263
c_rt_lib0clear(&___nl__im__31);
#line 263
c_rt_lib0clear(&___nl__im__46);
#line 263
c_rt_lib0clear(&___nl__im__64);
#line 263
//clear ___nl__bool__65;
#line 263
c_rt_lib0clear(&___nl__im__67);
#line 263
c_rt_lib0clear(&___nl__im__77);
#line 263
c_rt_lib0clear(&___nl__im__96);
#line 263
c_rt_lib0clear(&___nl__im__145);
#line 263
c_rt_lib0clear(&___nl__im__146);
#line 263
c_rt_lib0clear(&___nl__im__2);
#line 263
c_rt_lib0clear(&___nl__im__3);
#line 263
//clear ___nl__bool__4;
#line 263
c_rt_lib0clear(&___nl__im__5);
#line 263
return NULL;
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
#line 267
c_rt_lib0move(&___nl__im__3, dfile0try_sload(___nl__im__0));
#line 267
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(79));
#line 267
if(___nl__bool__2){ goto label_1;}
#line 267
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__3));
#line 267
nl_die_arg(___nl__im__3);
#line 267
label_1:
;
#line 267
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(79)));
#line 268
c_rt_lib0clear(&___nl__im__0);
#line 268
//clear ___nl__bool__2;
#line 268
c_rt_lib0clear(&___nl__im__3);
#line 268
return ___nl__im__1;
#line 268
c_rt_lib0clear(&___nl__im__0);
#line 268
c_rt_lib0clear(&___nl__im__1);
#line 268
//clear ___nl__bool__2;
#line 268
c_rt_lib0clear(&___nl__im__3);
#line 268
return NULL;
return NULL;
}

ImmT  dfile0sload_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0sload_type");
ImmT  *var0 = &(_tab[0]);
ptd0meta_type0type *var1 = &(_tab[1]);
return dfile0sload_type(*var0, *var1);
}
ImmT  dfile0sload_type(ImmT  ___nl__im__0,ptd0meta_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
#line 272
c_rt_lib0move(&___nl__im__4, dfile0try_sload_type(___nl__im__0, ___nl__im__1));
#line 272
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(79));
#line 272
if(___nl__bool__3){ goto label_1;}
#line 272
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__4));
#line 272
nl_die_arg(___nl__im__4);
#line 272
label_1:
;
#line 272
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(79)));
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
//clear ___nl__bool__3;
#line 273
c_rt_lib0clear(&___nl__im__4);
#line 273
return ___nl__im__2;
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
c_rt_lib0clear(&___nl__im__2);
#line 273
//clear ___nl__bool__3;
#line 273
c_rt_lib0clear(&___nl__im__4);
#line 273
return NULL;
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
#line 277
c_rt_lib0move(&___nl__im__2, ptd0ptd_im());
#line 277
c_rt_lib0move(&___nl__im__1, dfile0try_sload_type(___nl__im__0, ___nl__im__2));
#line 277
c_rt_lib0clear(&___nl__im__2);
#line 277
c_rt_lib0clear(&___nl__im__0);
#line 277
return ___nl__im__1;
return NULL;
}

ImmT  dfile0try_sload_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0try_sload_type");
ImmT  *var0 = &(_tab[0]);
ptd0meta_type0type *var1 = &(_tab[1]);
return dfile0try_sload_type(*var0, *var1);
}
ImmT  dfile0try_sload_type(ImmT  ___nl__im__0,ptd0meta_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
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
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 281
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 281
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__0));
#line 281
c_rt_lib0clear(&___nl__im__3);
#line 282
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__2));
#line 282
___nl__int__6 = 0;
#line 282
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 282
___nl__int__8 = string0length(___nl__im__2);
#line 282
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 282
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_const(280), ___nl__im__5, ___get_global_const(282), ___nl__im__7, ___get_global_const(283), ___nl__im__9));
#line 282
c_rt_lib0clear(&___nl__im__5);
#line 282
//clear ___nl__int__6;
#line 282
c_rt_lib0clear(&___nl__im__7);
#line 282
//clear ___nl__int__8;
#line 282
c_rt_lib0clear(&___nl__im__9);
#line 283
___nl__bool__10 = false;
#line 284
c_rt_lib0move(&___nl__im__11,___get_global_const(317));
#line 284
dfile_priv0match_s(&___nl__im__4, ___nl__im__11);
#line 284
c_rt_lib0clear(&___nl__im__11);
#line 285
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__im__4));
#line 286
c_rt_lib0move(&___nl__im__12, dfile_priv0parse(&___nl__im__4, &___nl__bool__10, ___nl__im__1));
#line 287
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__im__4));
#line 288
___nl__bool__13 = ___nl__bool__10;
#line 288
___nl__bool__13 = !___nl__bool__13;
#line 288
___nl__bool__14 = !___nl__bool__13;
#line 288
if(___nl__bool__14){ goto label_3;}
#line 288
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(282)));
#line 288
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 288
c_rt_lib0clear(&___nl__im__16);
#line 288
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(283)));
#line 288
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 288
c_rt_lib0clear(&___nl__im__18);
#line 288
___nl__int__19 = ___nl__int__15 != ___nl__int__17;
#line 288
___nl__bool__13 = ___nl__int__19;
#line 288
//clear ___nl__int__15;
#line 288
//clear ___nl__int__17;
#line 288
//clear ___nl__int__19;
#line 288
label_3:
;
#line 288
//clear ___nl__bool__14;
#line 288
___nl__bool__13 = !___nl__bool__13;
#line 288
if(___nl__bool__13){ goto label_2;}
#line 289
___nl__bool__10 = true;
#line 290
c_rt_lib0move(&___nl__im__21,___get_global_const(285));
#line 290
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(282)));
#line 290
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 290
c_rt_lib0clear(&___nl__im__24);
#line 290
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__23));
#line 290
c_rt_lib0move(&___nl__im__22, ptd0int_to_string(___nl__im__25));
#line 290
//clear ___nl__int__23;
#line 290
c_rt_lib0clear(&___nl__im__25);
#line 290
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 290
c_rt_lib0clear(&___nl__im__21);
#line 290
c_rt_lib0clear(&___nl__im__22);
#line 290
c_rt_lib0move(&___nl__im__26,___get_global_const(318));
#line 290
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__20, ___nl__im__26));
#line 290
c_rt_lib0clear(&___nl__im__20);
#line 290
c_rt_lib0clear(&___nl__im__26);
#line 291
goto label_1;
#line 291
label_2:
;
#line 291
label_1:
;
#line 291
//clear ___nl__bool__13;
#line 292
___nl__bool__27 = ___nl__bool__10;
#line 292
___nl__bool__27 = !___nl__bool__27;
#line 292
if(___nl__bool__27){ goto label_5;}
#line 293
c_rt_lib0move(&___nl__im__28, ptd0string());
#line 293
c_rt_lib0move(&___nl__im__12, ptd0ensure(___nl__im__28, ___nl__im__12));
#line 293
c_rt_lib0clear(&___nl__im__28);
#line 294
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__12));
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
c_rt_lib0clear(&___nl__im__2);
#line 294
c_rt_lib0clear(&___nl__im__4);
#line 294
//clear ___nl__bool__10;
#line 294
c_rt_lib0clear(&___nl__im__12);
#line 294
//clear ___nl__bool__27;
#line 294
return ___nl__im__29;
#line 295
goto label_4;
#line 295
label_5:
;
#line 296
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__12));
#line 296
c_rt_lib0clear(&___nl__im__0);
#line 296
c_rt_lib0clear(&___nl__im__1);
#line 296
c_rt_lib0clear(&___nl__im__2);
#line 296
c_rt_lib0clear(&___nl__im__4);
#line 296
//clear ___nl__bool__10;
#line 296
c_rt_lib0clear(&___nl__im__12);
#line 296
//clear ___nl__bool__27;
#line 296
c_rt_lib0clear(&___nl__im__29);
#line 296
return ___nl__im__30;
#line 297
goto label_4;
#line 297
label_4:
;
#line 297
//clear ___nl__bool__27;
#line 297
c_rt_lib0clear(&___nl__im__29);
#line 297
c_rt_lib0clear(&___nl__im__30);
return NULL;
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
#line 301
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 301
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 301
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 301
c_rt_lib0clear(&___nl__im__4);
#line 301
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__2, ___get_global_const(281), ___nl__im__3));
#line 301
c_rt_lib0clear(&___nl__im__2);
#line 301
c_rt_lib0clear(&___nl__im__3);
#line 301
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 301
c_rt_lib0clear(&___nl__im__1);
#line 301
return ___nl__im__0;
#line 301
c_rt_lib0clear(&___nl__im__0);
#line 301
return NULL;
return NULL;
}

ImmT  dfile_priv0sp(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 305
c_rt_lib0move(&___nl__im__2,___get_global_const(280));
#line 305
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 305
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 305
c_rt_lib0move(&___nl__string__3,___get_global_const(280));
#line 305
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 305
c_rt_lib0clear(&___nl__im__2);
#line 305
c_rt_lib0clear(&___nl__string__3);
#line 305
c_rt_lib0clear(&___nl__im__1);
#line 305
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
#line 309
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 309
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 309
c_rt_lib0clear(&___nl__im__2);
#line 310
c_rt_lib0move(&___nl__im__3,___get_global_const(110));
#line 310
c_rt_lib0move(&___nl__im__4,___get_global_const(319));
#line 310
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 310
c_rt_lib0clear(&___nl__im__3);
#line 310
c_rt_lib0clear(&___nl__im__4);
#line 311
c_rt_lib0move(&___nl__im__5,___get_global_const(320));
#line 311
c_rt_lib0move(&___nl__im__6,___get_global_const(321));
#line 311
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 311
c_rt_lib0clear(&___nl__im__5);
#line 311
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0move(&___nl__im__7,___get_global_const(322));
#line 312
c_rt_lib0move(&___nl__im__8,___get_global_const(323));
#line 312
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__7, ___nl__im__8));
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 313
c_rt_lib0move(&___nl__im__9,___get_global_const(279));
#line 313
c_rt_lib0move(&___nl__im__10,___get_global_const(324));
#line 313
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__9, ___nl__im__10));
#line 313
c_rt_lib0clear(&___nl__im__9);
#line 313
c_rt_lib0clear(&___nl__im__10);
#line 314
c_rt_lib0move(&___nl__im__13,___get_global_const(279));
#line 314
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 314
c_rt_lib0clear(&___nl__im__13);
#line 314
c_rt_lib0move(&___nl__im__14,___get_global_const(279));
#line 314
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 314
c_rt_lib0clear(&___nl__im__12);
#line 314
c_rt_lib0clear(&___nl__im__14);
#line 314
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__11));
#line 314
c_rt_lib0clear(&___nl__im__11);
#line 314
c_rt_lib0clear(&___nl__im__1);
#line 314
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
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
#line 318
___nl__int__1 = string0length(___nl__im__0);
#line 319
___nl__int__3 = 0;
#line 319
___nl__int__4 = ___nl__int__1 == ___nl__int__3;
#line 319
___nl__bool__2 = ___nl__int__4;
#line 319
//clear ___nl__int__3;
#line 319
//clear ___nl__int__4;
#line 319
___nl__bool__2 = !___nl__bool__2;
#line 319
if(___nl__bool__2){ goto label_2;}
#line 319
___nl__bool__5 = false;
#line 319
c_rt_lib0clear(&___nl__im__0);
#line 319
//clear ___nl__int__1;
#line 319
//clear ___nl__bool__2;
#line 319
return ___nl__bool__5;
#line 319
goto label_1;
#line 319
label_2:
;
#line 319
label_1:
;
#line 319
//clear ___nl__bool__2;
#line 319
//clear ___nl__bool__5;
#line 320
___nl__int__8 = 0;
#line 320
___nl__int__9 = 1;
#line 320
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 320
//clear ___nl__int__8;
#line 320
//clear ___nl__int__9;
#line 320
___nl__bool__6 = string0is_letter(___nl__im__7);
#line 320
c_rt_lib0clear(&___nl__im__7);
#line 320
if(___nl__bool__6){ goto label_5;}
#line 320
___nl__int__11 = 0;
#line 320
___nl__int__12 = 1;
#line 320
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__0, ___nl__int__11, ___nl__int__12));
#line 320
//clear ___nl__int__11;
#line 320
//clear ___nl__int__12;
#line 320
c_rt_lib0move(&___nl__im__13,___get_global_const(108));
#line 320
___nl__bool__6 = c_rt_lib0eq(___nl__im__10, ___nl__im__13);
#line 320
c_rt_lib0clear(&___nl__im__10);
#line 320
c_rt_lib0clear(&___nl__im__13);
#line 320
label_5:
;
#line 320
___nl__bool__6 = !___nl__bool__6;
#line 320
___nl__bool__6 = !___nl__bool__6;
#line 320
if(___nl__bool__6){ goto label_4;}
#line 320
___nl__bool__14 = false;
#line 320
c_rt_lib0clear(&___nl__im__0);
#line 320
//clear ___nl__int__1;
#line 320
//clear ___nl__bool__6;
#line 320
return ___nl__bool__14;
#line 320
goto label_3;
#line 320
label_4:
;
#line 320
label_3:
;
#line 320
//clear ___nl__bool__6;
#line 320
//clear ___nl__bool__14;
#line 321
___nl__int__15 = 0;
#line 321
___nl__int__16 = 1;
#line 321
label_8:
;
#line 321
___nl__int__18 = ___nl__int__15 >= ___nl__int__1;
#line 321
___nl__bool__17 = ___nl__int__18;
#line 321
if(___nl__bool__17){ goto label_6;}
#line 322
___nl__int__20 = 1;
#line 322
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__20));
#line 322
//clear ___nl__int__20;
#line 323
___nl__bool__21 = string0is_letter(___nl__im__19);
#line 323
if(___nl__bool__21){ goto label_12;}
#line 323
___nl__bool__21 = string0is_digit(___nl__im__19);
#line 323
label_12:
;
#line 323
if(___nl__bool__21){ goto label_11;}
#line 323
c_rt_lib0move(&___nl__im__22,___get_global_const(108));
#line 323
___nl__bool__21 = c_rt_lib0eq(___nl__im__19, ___nl__im__22);
#line 323
c_rt_lib0clear(&___nl__im__22);
#line 323
label_11:
;
#line 323
___nl__bool__21 = !___nl__bool__21;
#line 323
___nl__bool__21 = !___nl__bool__21;
#line 323
if(___nl__bool__21){ goto label_10;}
#line 323
___nl__bool__23 = false;
#line 323
c_rt_lib0clear(&___nl__im__0);
#line 323
//clear ___nl__int__1;
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
//clear ___nl__bool__21;
#line 323
return ___nl__bool__23;
#line 323
goto label_9;
#line 323
label_10:
;
#line 323
label_9:
;
#line 323
//clear ___nl__bool__21;
#line 323
//clear ___nl__bool__23;
#line 323
c_rt_lib0clear(&___nl__im__19);
#line 324
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 324
goto label_8;
#line 324
label_6:
;
#line 325
___nl__bool__24 = true;
#line 325
c_rt_lib0clear(&___nl__im__0);
#line 325
//clear ___nl__int__1;
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
return ___nl__bool__24;
return false;
}

ImmT  dfile_priv0sprint_hash_key(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
#line 329
___nl__bool__2 = dfile_priv0is_simple_string(___nl__im__1);
#line 329
___nl__bool__2 = !___nl__bool__2;
#line 329
if(___nl__bool__2){ goto label_2;}
#line 330
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__1));
#line 331
goto label_1;
#line 331
label_2:
;
#line 332
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 333
goto label_1;
#line 333
label_1:
;
#line 333
//clear ___nl__bool__2;
#line 333
c_rt_lib0clear(&___nl__im__1);
#line 333
return NULL;
}

ImmT  dfile_priv0get_ind(INT  ___nl__int__0) {
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 337
c_rt_lib0move(&___nl__im__2, string0tab());
#line 337
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 337
c_rt_lib0move(&___nl__im__1, string0char_times(___nl__im__2, ___nl__im__3));
#line 337
c_rt_lib0clear(&___nl__im__2);
#line 337
c_rt_lib0clear(&___nl__im__3);
#line 337
//clear ___nl__int__0;
#line 337
return ___nl__im__1;
return NULL;
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
#line 342
c_rt_lib0move(&___nl__im__5,___get_global_const(299));
#line 342
c_rt_lib0move(&___nl__im__6, string0lf());
#line 342
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 342
c_rt_lib0clear(&___nl__im__5);
#line 342
c_rt_lib0clear(&___nl__im__6);
#line 342
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__4));
#line 342
c_rt_lib0clear(&___nl__im__4);
#line 343
c_rt_lib0move(&___nl__im__7, hash0keys(___nl__im__1));
#line 344
c_rt_lib0delete(array0sort(&___nl__im__7));
#line 345
___nl__int__9 = 0;
#line 345
___nl__int__10 = 1;
#line 345
___nl__int__11 = c_rt_lib0array_len(___nl__im__7);
#line 345
label_3:
;
#line 345
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 345
___nl__bool__12 = ___nl__int__13;
#line 345
if(___nl__bool__12){ goto label_1;}
#line 345
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__7, ___nl__int__9));
#line 345
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 346
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 347
___nl__int__18 = 1;
#line 347
___nl__int__17 = ___nl__int__2 + ___nl__int__18;
#line 347
//clear ___nl__int__18;
#line 347
c_rt_lib0move(&___nl__im__16, dfile_priv0get_ind(___nl__int__17));
#line 347
//clear ___nl__int__17;
#line 347
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__16));
#line 347
c_rt_lib0clear(&___nl__im__16);
#line 348
c_rt_lib0delete(dfile_priv0sprint_hash_key(___ref___im__0, ___nl__im__8));
#line 349
c_rt_lib0move(&___nl__im__19,___get_global_const(325));
#line 349
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__19));
#line 349
c_rt_lib0clear(&___nl__im__19);
#line 350
___nl__int__21 = 1;
#line 350
___nl__int__20 = ___nl__int__2 + ___nl__int__21;
#line 350
//clear ___nl__int__21;
#line 350
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__15, ___nl__int__20, ___nl__bool__3));
#line 350
//clear ___nl__int__20;
#line 351
c_rt_lib0move(&___nl__im__23,___get_global_const(307));
#line 351
c_rt_lib0move(&___nl__im__24, string0lf());
#line 351
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 351
c_rt_lib0clear(&___nl__im__23);
#line 351
c_rt_lib0clear(&___nl__im__24);
#line 351
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__22));
#line 351
c_rt_lib0clear(&___nl__im__22);
#line 351
c_rt_lib0clear(&___nl__im__8);
#line 352
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 352
goto label_3;
#line 352
label_1:
;
#line 353
c_rt_lib0move(&___nl__im__26, dfile_priv0get_ind(___nl__int__2));
#line 353
c_rt_lib0move(&___nl__im__27,___get_global_const(300));
#line 353
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 353
c_rt_lib0clear(&___nl__im__26);
#line 353
c_rt_lib0clear(&___nl__im__27);
#line 353
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__25));
#line 353
c_rt_lib0clear(&___nl__im__25);
#line 353
c_rt_lib0clear(&___nl__im__1);
#line 353
//clear ___nl__int__2;
#line 353
//clear ___nl__bool__3;
#line 353
c_rt_lib0clear(&___nl__im__7);
#line 353
c_rt_lib0clear(&___nl__im__8);
#line 353
//clear ___nl__int__9;
#line 353
//clear ___nl__int__10;
#line 353
//clear ___nl__int__11;
#line 353
//clear ___nl__bool__12;
#line 353
//clear ___nl__int__13;
#line 353
c_rt_lib0clear(&___nl__im__14);
#line 353
c_rt_lib0clear(&___nl__im__15);
#line 353
return NULL;
}

bool  dfile_priv0handle_debug(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
bool  ___nl__bool__10 = false;
#line 357
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 357
if(___nl__bool__2){ goto label_4;}
#line 357
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 357
label_4:
;
#line 357
___nl__bool__3 = !___nl__bool__2;
#line 357
if(___nl__bool__3){ goto label_3;}
#line 357
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(281)));
#line 357
___nl__bool__2 = hash0has_key(___nl__im__4, ___nl__im__1);
#line 357
c_rt_lib0clear(&___nl__im__4);
#line 357
label_3:
;
#line 357
//clear ___nl__bool__3;
#line 357
___nl__bool__2 = !___nl__bool__2;
#line 357
if(___nl__bool__2){ goto label_2;}
#line 358
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__1));
#line 359
___nl__bool__5 = true;
#line 359
c_rt_lib0clear(&___nl__im__1);
#line 359
//clear ___nl__bool__2;
#line 359
return ___nl__bool__5;
#line 360
goto label_1;
#line 360
label_2:
;
#line 361
c_rt_lib0move(&___nl__im__6,___get_global_const(281));
#line 361
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 361
___nl__bool__7 = true;
#line 361
c_rt_lib0move(&___nl__im__8, c_rt_lib0bool_to_nl_native(___nl__bool__7));
#line 361
c_rt_lib0delete(hash0set_value(&___nl__im__6, ___nl__im__1, ___nl__im__8));
#line 361
c_rt_lib0move(&___nl__string__9,___get_global_const(281));
#line 361
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__9, ___nl__im__6));
#line 361
c_rt_lib0clear(&___nl__im__6);
#line 361
//clear ___nl__bool__7;
#line 361
c_rt_lib0clear(&___nl__im__8);
#line 361
c_rt_lib0clear(&___nl__string__9);
#line 362
___nl__bool__10 = false;
#line 362
c_rt_lib0clear(&___nl__im__1);
#line 362
//clear ___nl__bool__2;
#line 362
//clear ___nl__bool__5;
#line 362
return ___nl__bool__10;
#line 363
goto label_1;
#line 363
label_1:
;
#line 363
//clear ___nl__bool__2;
#line 363
//clear ___nl__bool__5;
#line 363
//clear ___nl__bool__10;
return false;
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
#line 368
___nl__bool__4 = ___nl__bool__3;
#line 368
___nl__bool__5 = !___nl__bool__4;
#line 368
if(___nl__bool__5){ goto label_3;}
#line 368
___nl__bool__4 = dfile_priv0handle_debug(___ref___im__0, ___nl__im__1);
#line 368
label_3:
;
#line 368
//clear ___nl__bool__5;
#line 368
___nl__bool__4 = !___nl__bool__4;
#line 368
if(___nl__bool__4){ goto label_2;}
#line 368
c_rt_lib0clear(&___nl__im__1);
#line 368
//clear ___nl__int__2;
#line 368
//clear ___nl__bool__3;
#line 368
//clear ___nl__bool__4;
#line 368
return NULL;
#line 368
goto label_1;
#line 368
label_2:
;
#line 368
label_1:
;
#line 368
//clear ___nl__bool__4;
#line 369
___nl__bool__6 = nl0is_sim(___nl__im__1);
#line 369
___nl__bool__6 = !___nl__bool__6;
#line 369
if(___nl__bool__6){ goto label_5;}
#line 370
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 371
goto label_4;
#line 371
label_5:
;
#line 371
___nl__bool__6 = nl0is_array(___nl__im__1);
#line 371
___nl__bool__6 = !___nl__bool__6;
#line 371
if(___nl__bool__6){ goto label_6;}
#line 372
c_rt_lib0move(&___nl__im__8,___get_global_const(309));
#line 372
c_rt_lib0move(&___nl__im__9, string0lf());
#line 372
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 372
c_rt_lib0clear(&___nl__im__8);
#line 372
c_rt_lib0clear(&___nl__im__9);
#line 372
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__7));
#line 372
c_rt_lib0clear(&___nl__im__7);
#line 373
___nl__int__11 = 0;
#line 373
___nl__int__12 = 1;
#line 373
___nl__int__13 = c_rt_lib0array_len(___nl__im__1);
#line 373
label_9:
;
#line 373
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 373
___nl__bool__14 = ___nl__int__15;
#line 373
if(___nl__bool__14){ goto label_7;}
#line 373
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__1, ___nl__int__11));
#line 373
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 374
___nl__int__19 = 1;
#line 374
___nl__int__18 = ___nl__int__2 + ___nl__int__19;
#line 374
//clear ___nl__int__19;
#line 374
c_rt_lib0move(&___nl__im__17, dfile_priv0get_ind(___nl__int__18));
#line 374
//clear ___nl__int__18;
#line 374
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__17));
#line 374
c_rt_lib0clear(&___nl__im__17);
#line 375
___nl__int__21 = 1;
#line 375
___nl__int__20 = ___nl__int__2 + ___nl__int__21;
#line 375
//clear ___nl__int__21;
#line 375
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__10, ___nl__int__20, ___nl__bool__3));
#line 375
//clear ___nl__int__20;
#line 376
c_rt_lib0move(&___nl__im__23,___get_global_const(307));
#line 376
c_rt_lib0move(&___nl__im__24, string0lf());
#line 376
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 376
c_rt_lib0clear(&___nl__im__23);
#line 376
c_rt_lib0clear(&___nl__im__24);
#line 376
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__22));
#line 376
c_rt_lib0clear(&___nl__im__22);
#line 376
c_rt_lib0clear(&___nl__im__10);
#line 377
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 377
goto label_9;
#line 377
label_7:
;
#line 378
c_rt_lib0move(&___nl__im__26, dfile_priv0get_ind(___nl__int__2));
#line 378
c_rt_lib0move(&___nl__im__27,___get_global_const(310));
#line 378
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 378
c_rt_lib0clear(&___nl__im__26);
#line 378
c_rt_lib0clear(&___nl__im__27);
#line 378
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__25));
#line 378
c_rt_lib0clear(&___nl__im__25);
#line 379
goto label_4;
#line 379
label_6:
;
#line 379
___nl__bool__6 = nl0is_hash(___nl__im__1);
#line 379
___nl__bool__6 = !___nl__bool__6;
#line 379
if(___nl__bool__6){ goto label_10;}
#line 380
c_rt_lib0delete(dfile_priv0sprint_hash(___ref___im__0, ___nl__im__1, ___nl__int__2, ___nl__bool__3));
#line 381
goto label_4;
#line 381
label_10:
;
#line 381
___nl__bool__6 = nl0is_variant(___nl__im__1);
#line 381
___nl__bool__6 = !___nl__bool__6;
#line 381
if(___nl__bool__6){ goto label_11;}
#line 382
c_rt_lib0move(&___nl__im__28,___get_global_const(284));
#line 382
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__28));
#line 382
c_rt_lib0clear(&___nl__im__28);
#line 383
c_rt_lib0move(&___nl__im__29, ov0get_element(___nl__im__1));
#line 383
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__29));
#line 383
c_rt_lib0clear(&___nl__im__29);
#line 384
c_rt_lib0move(&___nl__im__31, ov0has_value(___nl__im__1));
#line 384
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 384
c_rt_lib0clear(&___nl__im__31);
#line 384
___nl__bool__30 = !___nl__bool__30;
#line 384
if(___nl__bool__30){ goto label_13;}
#line 385
c_rt_lib0move(&___nl__im__32,___get_global_const(326));
#line 385
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__32));
#line 385
c_rt_lib0clear(&___nl__im__32);
#line 386
c_rt_lib0move(&___nl__im__33, ov0get_value(___nl__im__1));
#line 386
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__33, ___nl__int__2, ___nl__bool__3));
#line 386
c_rt_lib0clear(&___nl__im__33);
#line 387
goto label_12;
#line 387
label_13:
;
#line 387
label_12:
;
#line 387
//clear ___nl__bool__30;
#line 388
c_rt_lib0move(&___nl__im__34,___get_global_const(315));
#line 388
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__34));
#line 388
c_rt_lib0clear(&___nl__im__34);
#line 389
goto label_4;
#line 389
label_11:
;
#line 390
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 390
nl_die_arg(___nl__im__35);
#line 391
goto label_4;
#line 391
label_4:
;
#line 391
//clear ___nl__bool__6;
#line 391
c_rt_lib0clear(&___nl__im__10);
#line 391
//clear ___nl__int__11;
#line 391
//clear ___nl__int__12;
#line 391
//clear ___nl__int__13;
#line 391
//clear ___nl__bool__14;
#line 391
//clear ___nl__int__15;
#line 391
c_rt_lib0clear(&___nl__im__16);
#line 391
c_rt_lib0clear(&___nl__im__35);
#line 391
c_rt_lib0clear(&___nl__im__1);
#line 391
//clear ___nl__int__2;
#line 391
//clear ___nl__bool__3;
#line 391
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
#line 395
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 395
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 395
c_rt_lib0clear(&___nl__im__2);
#line 396
c_rt_lib0move(&___nl__im__3,___get_global_const(110));
#line 396
c_rt_lib0move(&___nl__im__4,___get_global_const(319));
#line 396
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 396
c_rt_lib0clear(&___nl__im__3);
#line 396
c_rt_lib0clear(&___nl__im__4);
#line 397
c_rt_lib0move(&___nl__im__5, string0lf());
#line 397
c_rt_lib0move(&___nl__im__6,___get_global_const(327));
#line 397
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 397
c_rt_lib0clear(&___nl__im__5);
#line 397
c_rt_lib0clear(&___nl__im__6);
#line 398
c_rt_lib0move(&___nl__im__7,___get_global_const(320));
#line 398
c_rt_lib0move(&___nl__im__8,___get_global_const(321));
#line 398
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__7, ___nl__im__8));
#line 398
c_rt_lib0clear(&___nl__im__7);
#line 398
c_rt_lib0clear(&___nl__im__8);
#line 399
c_rt_lib0move(&___nl__im__9,___get_global_const(322));
#line 399
c_rt_lib0move(&___nl__im__10,___get_global_const(323));
#line 399
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__9, ___nl__im__10));
#line 399
c_rt_lib0clear(&___nl__im__9);
#line 399
c_rt_lib0clear(&___nl__im__10);
#line 400
c_rt_lib0move(&___nl__im__11,___get_global_const(279));
#line 400
c_rt_lib0move(&___nl__im__12,___get_global_const(324));
#line 400
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__11, ___nl__im__12));
#line 400
c_rt_lib0clear(&___nl__im__11);
#line 400
c_rt_lib0clear(&___nl__im__12);
#line 401
c_rt_lib0move(&___nl__im__15,___get_global_const(279));
#line 401
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 401
c_rt_lib0clear(&___nl__im__15);
#line 401
c_rt_lib0move(&___nl__im__16,___get_global_const(279));
#line 401
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 401
c_rt_lib0clear(&___nl__im__14);
#line 401
c_rt_lib0clear(&___nl__im__16);
#line 401
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__13));
#line 401
c_rt_lib0clear(&___nl__im__13);
#line 401
c_rt_lib0clear(&___nl__im__1);
#line 401
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
#line 405
___nl__bool__2 = nl0is_sim(___nl__im__1);
#line 405
___nl__bool__2 = !___nl__bool__2;
#line 405
if(___nl__bool__2){ goto label_2;}
#line 406
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__1));
#line 407
goto label_1;
#line 407
label_2:
;
#line 407
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 407
___nl__bool__2 = !___nl__bool__2;
#line 407
if(___nl__bool__2){ goto label_3;}
#line 408
c_rt_lib0move(&___nl__im__3,___get_global_const(309));
#line 408
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__3));
#line 408
c_rt_lib0clear(&___nl__im__3);
#line 409
___nl__int__5 = 0;
#line 409
___nl__int__6 = 1;
#line 409
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 409
label_6:
;
#line 409
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 409
___nl__bool__8 = ___nl__int__9;
#line 409
if(___nl__bool__8){ goto label_4;}
#line 409
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 409
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 410
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__4));
#line 411
c_rt_lib0move(&___nl__im__11,___get_global_const(307));
#line 411
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__11));
#line 411
c_rt_lib0clear(&___nl__im__11);
#line 411
c_rt_lib0clear(&___nl__im__4);
#line 412
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 412
goto label_6;
#line 412
label_4:
;
#line 413
c_rt_lib0move(&___nl__im__12,___get_global_const(310));
#line 413
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__12));
#line 413
c_rt_lib0clear(&___nl__im__12);
#line 414
goto label_1;
#line 414
label_3:
;
#line 414
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 414
___nl__bool__2 = !___nl__bool__2;
#line 414
if(___nl__bool__2){ goto label_7;}
#line 415
c_rt_lib0move(&___nl__im__13,___get_global_const(299));
#line 415
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__13));
#line 415
c_rt_lib0clear(&___nl__im__13);
#line 416
c_rt_lib0move(&___nl__im__14, hash0keys(___nl__im__1));
#line 416
___nl__int__16 = 0;
#line 416
___nl__int__17 = 1;
#line 416
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 416
label_10:
;
#line 416
___nl__int__20 = ___nl__int__16 >= ___nl__int__18;
#line 416
___nl__bool__19 = ___nl__int__20;
#line 416
if(___nl__bool__19){ goto label_8;}
#line 416
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 416
c_rt_lib0copy(&___nl__im__15, ___nl__im__21);
#line 417
c_rt_lib0move(&___nl__im__22, hash0get_value(___nl__im__1, ___nl__im__15));
#line 418
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 418
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__15, ___nl__im__25));
#line 418
c_rt_lib0clear(&___nl__im__25);
#line 418
___nl__bool__23 = dfile_priv0is_simple_string(___nl__im__24);
#line 418
c_rt_lib0clear(&___nl__im__24);
#line 418
___nl__bool__23 = !___nl__bool__23;
#line 418
if(___nl__bool__23){ goto label_12;}
#line 419
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__15));
#line 420
goto label_11;
#line 420
label_12:
;
#line 421
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__15));
#line 422
goto label_11;
#line 422
label_11:
;
#line 422
//clear ___nl__bool__23;
#line 423
c_rt_lib0move(&___nl__im__26,___get_global_const(301));
#line 423
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__26));
#line 423
c_rt_lib0clear(&___nl__im__26);
#line 424
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__22));
#line 425
c_rt_lib0move(&___nl__im__27,___get_global_const(307));
#line 425
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__27));
#line 425
c_rt_lib0clear(&___nl__im__27);
#line 425
c_rt_lib0clear(&___nl__im__15);
#line 426
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 426
goto label_10;
#line 426
label_8:
;
#line 427
c_rt_lib0move(&___nl__im__28,___get_global_const(300));
#line 427
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__28));
#line 427
c_rt_lib0clear(&___nl__im__28);
#line 428
goto label_1;
#line 428
label_7:
;
#line 428
___nl__bool__2 = nl0is_variant(___nl__im__1);
#line 428
___nl__bool__2 = !___nl__bool__2;
#line 428
if(___nl__bool__2){ goto label_13;}
#line 429
c_rt_lib0move(&___nl__im__29,___get_global_const(284));
#line 429
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__29));
#line 429
c_rt_lib0clear(&___nl__im__29);
#line 430
c_rt_lib0move(&___nl__im__30, ov0get_element(___nl__im__1));
#line 430
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__30));
#line 430
c_rt_lib0clear(&___nl__im__30);
#line 431
c_rt_lib0move(&___nl__im__32, ov0has_value(___nl__im__1));
#line 431
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__32);
#line 431
c_rt_lib0clear(&___nl__im__32);
#line 431
___nl__bool__31 = !___nl__bool__31;
#line 431
if(___nl__bool__31){ goto label_15;}
#line 432
c_rt_lib0move(&___nl__im__33,___get_global_const(307));
#line 432
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__33));
#line 432
c_rt_lib0clear(&___nl__im__33);
#line 433
c_rt_lib0move(&___nl__im__34, ov0get_value(___nl__im__1));
#line 433
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__34));
#line 433
c_rt_lib0clear(&___nl__im__34);
#line 434
goto label_14;
#line 434
label_15:
;
#line 434
label_14:
;
#line 434
//clear ___nl__bool__31;
#line 435
c_rt_lib0move(&___nl__im__35,___get_global_const(315));
#line 435
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__35));
#line 435
c_rt_lib0clear(&___nl__im__35);
#line 436
goto label_1;
#line 436
label_13:
;
#line 437
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(1, ___nl__im__1));
#line 437
nl_die_arg(___nl__im__36);
#line 438
goto label_1;
#line 438
label_1:
;
#line 438
//clear ___nl__bool__2;
#line 438
c_rt_lib0clear(&___nl__im__4);
#line 438
//clear ___nl__int__5;
#line 438
//clear ___nl__int__6;
#line 438
//clear ___nl__int__7;
#line 438
//clear ___nl__bool__8;
#line 438
//clear ___nl__int__9;
#line 438
c_rt_lib0clear(&___nl__im__10);
#line 438
c_rt_lib0clear(&___nl__im__14);
#line 438
c_rt_lib0clear(&___nl__im__15);
#line 438
//clear ___nl__int__16;
#line 438
//clear ___nl__int__17;
#line 438
//clear ___nl__int__18;
#line 438
//clear ___nl__bool__19;
#line 438
//clear ___nl__int__20;
#line 438
c_rt_lib0clear(&___nl__im__21);
#line 438
c_rt_lib0clear(&___nl__im__22);
#line 438
c_rt_lib0clear(&___nl__im__36);
#line 438
c_rt_lib0clear(&___nl__im__1);
#line 438
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
