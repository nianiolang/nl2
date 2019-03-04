
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "dfile_dbg.h"
#include "ov.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "nl.h"
#include "ptd.h"
#line 1 "dfile_dbg.nl"

static ImmT *__const__f = NULL;
void dfile_dbg_priv0__const__init();
ImmT dfile_dbg_priv0__const__sim(int __nr);
ImmT dfile_dbg_priv0__const__sing(int __nr);

ImmT  dfile_dbg_priv0sp(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_dbg_priv0sprintstr(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
bool  dfile_dbg_priv0is_simple_string(ImmT  ___nl__im__0);
ImmT  dfile_dbg_priv0sprint_hash_key(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_dbg_priv0get_ind(INT  ___nl__int__0);
ImmT  dfile_dbg_priv0sprint_hash(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3);
ImmT  dfile_dbg_priv0sprint(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3);


ImmT  dfile_dbg0ssave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile_dbg0ssave");
ImmT  *var0 = &(_tab[0]);
return dfile_dbg0ssave(*var0);
}
ImmT  dfile_dbg0ssave(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_dbg_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 14
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 14
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__2, ___get_global_const(281), ___nl__im__3));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 15
___nl__int__4 = 0;
#line 15
___nl__bool__5 = false;
#line 15
c_rt_lib0delete(dfile_dbg_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 15
//clear ___nl__int__4;
#line 15
//clear ___nl__bool__5;
#line 16
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(280)));
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
return ___nl__im__6;
return NULL;
}

ImmT  dfile_dbg0state_out0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile_dbg0state_out");
return dfile_dbg0state_out();
}
ImmT  dfile_dbg0state_out() {
dfile_dbg_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 20
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 20
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(280), ___nl__im__2, ___get_global_const(281), ___nl__im__3));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
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
return NULL;
}

ImmT  dfile_dbg_priv0sp(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_dbg_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 24
c_rt_lib0move(&___nl__im__2,___get_global_const(280));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 24
c_rt_lib0move(&___nl__string__3,___get_global_const(280));
#line 24
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__string__3);
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
return NULL;
}

ImmT  dfile_dbg_priv0sprintstr(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_dbg_priv0__const__init();
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
#line 28
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 28
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 29
c_rt_lib0move(&___nl__im__3,___get_global_const(110));
#line 29
c_rt_lib0move(&___nl__im__4,___get_global_const(319));
#line 29
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 29
c_rt_lib0clear(&___nl__im__3);
#line 29
c_rt_lib0clear(&___nl__im__4);
#line 30
c_rt_lib0move(&___nl__im__5,___get_global_const(320));
#line 30
c_rt_lib0move(&___nl__im__6,___get_global_const(321));
#line 30
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 30
c_rt_lib0clear(&___nl__im__5);
#line 30
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0move(&___nl__im__7,___get_global_const(322));
#line 31
c_rt_lib0move(&___nl__im__8,___get_global_const(323));
#line 31
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__7, ___nl__im__8));
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
c_rt_lib0clear(&___nl__im__8);
#line 32
c_rt_lib0move(&___nl__im__9,___get_global_const(279));
#line 32
c_rt_lib0move(&___nl__im__10,___get_global_const(324));
#line 32
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__9, ___nl__im__10));
#line 32
c_rt_lib0clear(&___nl__im__9);
#line 32
c_rt_lib0clear(&___nl__im__10);
#line 33
c_rt_lib0move(&___nl__im__13,___get_global_const(279));
#line 33
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 33
c_rt_lib0clear(&___nl__im__13);
#line 33
c_rt_lib0move(&___nl__im__14,___get_global_const(279));
#line 33
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 33
c_rt_lib0clear(&___nl__im__12);
#line 33
c_rt_lib0clear(&___nl__im__14);
#line 33
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__11));
#line 33
c_rt_lib0clear(&___nl__im__11);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
return NULL;
}

bool  dfile_dbg_priv0is_simple_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_dbg_priv0__const__init();
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
#line 37
___nl__int__1 = string0length(___nl__im__0);
#line 38
___nl__int__3 = 0;
#line 38
___nl__int__4 = ___nl__int__1 == ___nl__int__3;
#line 38
___nl__bool__2 = ___nl__int__4;
#line 38
//clear ___nl__int__3;
#line 38
//clear ___nl__int__4;
#line 38
___nl__bool__2 = !___nl__bool__2;
#line 38
if(___nl__bool__2){ goto label_2;}
#line 38
___nl__bool__5 = false;
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
//clear ___nl__int__1;
#line 38
//clear ___nl__bool__2;
#line 38
return ___nl__bool__5;
#line 38
goto label_1;
#line 38
label_2:
;
#line 38
label_1:
;
#line 38
//clear ___nl__bool__2;
#line 38
//clear ___nl__bool__5;
#line 39
___nl__int__8 = 0;
#line 39
___nl__int__9 = 1;
#line 39
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 39
//clear ___nl__int__8;
#line 39
//clear ___nl__int__9;
#line 39
___nl__bool__6 = string0is_letter(___nl__im__7);
#line 39
c_rt_lib0clear(&___nl__im__7);
#line 39
if(___nl__bool__6){ goto label_5;}
#line 39
___nl__int__11 = 0;
#line 39
___nl__int__12 = 1;
#line 39
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__0, ___nl__int__11, ___nl__int__12));
#line 39
//clear ___nl__int__11;
#line 39
//clear ___nl__int__12;
#line 39
c_rt_lib0move(&___nl__im__13,___get_global_const(108));
#line 39
___nl__bool__6 = c_rt_lib0eq(___nl__im__10, ___nl__im__13);
#line 39
c_rt_lib0clear(&___nl__im__10);
#line 39
c_rt_lib0clear(&___nl__im__13);
#line 39
label_5:
;
#line 39
___nl__bool__6 = !___nl__bool__6;
#line 39
___nl__bool__6 = !___nl__bool__6;
#line 39
if(___nl__bool__6){ goto label_4;}
#line 39
___nl__bool__14 = false;
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
//clear ___nl__int__1;
#line 39
//clear ___nl__bool__6;
#line 39
return ___nl__bool__14;
#line 39
goto label_3;
#line 39
label_4:
;
#line 39
label_3:
;
#line 39
//clear ___nl__bool__6;
#line 39
//clear ___nl__bool__14;
#line 40
___nl__int__15 = 0;
#line 40
___nl__int__16 = 1;
#line 40
label_8:
;
#line 40
___nl__int__18 = ___nl__int__15 >= ___nl__int__1;
#line 40
___nl__bool__17 = ___nl__int__18;
#line 40
if(___nl__bool__17){ goto label_6;}
#line 41
___nl__int__20 = 1;
#line 41
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__20));
#line 41
//clear ___nl__int__20;
#line 42
___nl__bool__21 = string0is_letter(___nl__im__19);
#line 42
if(___nl__bool__21){ goto label_12;}
#line 42
___nl__bool__21 = string0is_digit(___nl__im__19);
#line 42
label_12:
;
#line 42
if(___nl__bool__21){ goto label_11;}
#line 42
c_rt_lib0move(&___nl__im__22,___get_global_const(108));
#line 42
___nl__bool__21 = c_rt_lib0eq(___nl__im__19, ___nl__im__22);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
label_11:
;
#line 42
___nl__bool__21 = !___nl__bool__21;
#line 42
___nl__bool__21 = !___nl__bool__21;
#line 42
if(___nl__bool__21){ goto label_10;}
#line 42
___nl__bool__23 = false;
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
//clear ___nl__int__1;
#line 42
//clear ___nl__int__15;
#line 42
//clear ___nl__int__16;
#line 42
//clear ___nl__bool__17;
#line 42
//clear ___nl__int__18;
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
//clear ___nl__bool__21;
#line 42
return ___nl__bool__23;
#line 42
goto label_9;
#line 42
label_10:
;
#line 42
label_9:
;
#line 42
//clear ___nl__bool__21;
#line 42
//clear ___nl__bool__23;
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 43
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 43
goto label_8;
#line 43
label_6:
;
#line 44
___nl__bool__24 = true;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
//clear ___nl__int__1;
#line 44
//clear ___nl__int__15;
#line 44
//clear ___nl__int__16;
#line 44
//clear ___nl__bool__17;
#line 44
//clear ___nl__int__18;
#line 44
c_rt_lib0clear(&___nl__im__19);
#line 44
return ___nl__bool__24;
return false;
}

ImmT  dfile_dbg_priv0sprint_hash_key(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_dbg_priv0__const__init();
bool  ___nl__bool__2 = false;
#line 48
___nl__bool__2 = dfile_dbg_priv0is_simple_string(___nl__im__1);
#line 48
___nl__bool__2 = !___nl__bool__2;
#line 48
if(___nl__bool__2){ goto label_2;}
#line 49
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__1));
#line 50
goto label_1;
#line 50
label_2:
;
#line 51
c_rt_lib0delete(dfile_dbg_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 52
goto label_1;
#line 52
label_1:
;
#line 52
//clear ___nl__bool__2;
#line 52
c_rt_lib0clear(&___nl__im__1);
#line 52
return NULL;
}

ImmT  dfile_dbg_priv0get_ind(INT  ___nl__int__0) {
dfile_dbg_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 56
c_rt_lib0move(&___nl__im__2, string0tab());
#line 56
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 56
c_rt_lib0move(&___nl__im__1, string0char_times(___nl__im__2, ___nl__im__3));
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
//clear ___nl__int__0;
#line 56
return ___nl__im__1;
return NULL;
}

ImmT  dfile_dbg_priv0sprint_hash(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__1);
dfile_dbg_priv0__const__init();
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
#line 61
c_rt_lib0move(&___nl__im__5,___get_global_const(299));
#line 61
c_rt_lib0move(&___nl__im__6, string0lf());
#line 61
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__4));
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__7, hash0keys(___nl__im__1));
#line 63
c_rt_lib0delete(array0sort(&___nl__im__7));
#line 64
___nl__int__9 = 0;
#line 64
___nl__int__10 = 1;
#line 64
___nl__int__11 = c_rt_lib0array_len(___nl__im__7);
#line 64
label_3:
;
#line 64
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 64
___nl__bool__12 = ___nl__int__13;
#line 64
if(___nl__bool__12){ goto label_1;}
#line 64
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__7, ___nl__int__9));
#line 64
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 65
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 66
___nl__int__18 = 1;
#line 66
___nl__int__17 = ___nl__int__2 + ___nl__int__18;
#line 66
//clear ___nl__int__18;
#line 66
c_rt_lib0move(&___nl__im__16, dfile_dbg_priv0get_ind(___nl__int__17));
#line 66
//clear ___nl__int__17;
#line 66
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__16));
#line 66
c_rt_lib0clear(&___nl__im__16);
#line 67
c_rt_lib0delete(dfile_dbg_priv0sprint_hash_key(___ref___im__0, ___nl__im__8));
#line 68
c_rt_lib0move(&___nl__im__19,___get_global_const(325));
#line 68
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__19));
#line 68
c_rt_lib0clear(&___nl__im__19);
#line 69
___nl__int__21 = 1;
#line 69
___nl__int__20 = ___nl__int__2 + ___nl__int__21;
#line 69
//clear ___nl__int__21;
#line 69
c_rt_lib0delete(dfile_dbg_priv0sprint(___ref___im__0, ___nl__im__15, ___nl__int__20, ___nl__bool__3));
#line 69
//clear ___nl__int__20;
#line 70
c_rt_lib0move(&___nl__im__23,___get_global_const(307));
#line 70
c_rt_lib0move(&___nl__im__24, string0lf());
#line 70
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 70
c_rt_lib0clear(&___nl__im__23);
#line 70
c_rt_lib0clear(&___nl__im__24);
#line 70
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__22));
#line 70
c_rt_lib0clear(&___nl__im__22);
#line 70
c_rt_lib0clear(&___nl__im__8);
#line 71
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 71
goto label_3;
#line 71
label_1:
;
#line 72
c_rt_lib0move(&___nl__im__26, dfile_dbg_priv0get_ind(___nl__int__2));
#line 72
c_rt_lib0move(&___nl__im__27,___get_global_const(300));
#line 72
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 72
c_rt_lib0clear(&___nl__im__26);
#line 72
c_rt_lib0clear(&___nl__im__27);
#line 72
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__25));
#line 72
c_rt_lib0clear(&___nl__im__25);
#line 72
c_rt_lib0clear(&___nl__im__1);
#line 72
//clear ___nl__int__2;
#line 72
//clear ___nl__bool__3;
#line 72
c_rt_lib0clear(&___nl__im__7);
#line 72
c_rt_lib0clear(&___nl__im__8);
#line 72
//clear ___nl__int__9;
#line 72
//clear ___nl__int__10;
#line 72
//clear ___nl__int__11;
#line 72
//clear ___nl__bool__12;
#line 72
//clear ___nl__int__13;
#line 72
c_rt_lib0clear(&___nl__im__14);
#line 72
c_rt_lib0clear(&___nl__im__15);
#line 72
return NULL;
}

ImmT  dfile_dbg_priv0sprint(dfile_dbg0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__1);
dfile_dbg_priv0__const__init();
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
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
INT  ___nl__int__20 = 0;
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
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
#line 77
___nl__bool__4 = nl0is_sim(___nl__im__1);
#line 77
___nl__bool__4 = !___nl__bool__4;
#line 77
if(___nl__bool__4){ goto label_2;}
#line 78
___nl__bool__5 = nl0is_int(___nl__im__1);
#line 78
___nl__bool__5 = !___nl__bool__5;
#line 78
if(___nl__bool__5){ goto label_4;}
#line 79
c_rt_lib0move(&___nl__im__6,___get_global_const(328));
#line 79
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__6));
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0delete(dfile_dbg_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 81
goto label_3;
#line 81
label_4:
;
#line 82
c_rt_lib0move(&___nl__im__7,___get_global_const(329));
#line 82
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__7));
#line 82
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0delete(dfile_dbg_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 84
goto label_3;
#line 84
label_3:
;
#line 84
//clear ___nl__bool__5;
#line 85
c_rt_lib0move(&___nl__im__8,___get_global_const(315));
#line 85
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__8));
#line 85
c_rt_lib0clear(&___nl__im__8);
#line 86
goto label_1;
#line 86
label_2:
;
#line 86
___nl__bool__4 = nl0is_array(___nl__im__1);
#line 86
___nl__bool__4 = !___nl__bool__4;
#line 86
if(___nl__bool__4){ goto label_5;}
#line 87
c_rt_lib0move(&___nl__im__10,___get_global_const(309));
#line 87
c_rt_lib0move(&___nl__im__11, string0lf());
#line 87
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 87
c_rt_lib0clear(&___nl__im__10);
#line 87
c_rt_lib0clear(&___nl__im__11);
#line 87
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__9));
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 88
___nl__int__13 = 0;
#line 88
___nl__int__14 = 1;
#line 88
___nl__int__15 = c_rt_lib0array_len(___nl__im__1);
#line 88
label_8:
;
#line 88
___nl__int__17 = ___nl__int__13 >= ___nl__int__15;
#line 88
___nl__bool__16 = ___nl__int__17;
#line 88
if(___nl__bool__16){ goto label_6;}
#line 88
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__1, ___nl__int__13));
#line 88
c_rt_lib0copy(&___nl__im__12, ___nl__im__18);
#line 89
___nl__int__21 = 1;
#line 89
___nl__int__20 = ___nl__int__2 + ___nl__int__21;
#line 89
//clear ___nl__int__21;
#line 89
c_rt_lib0move(&___nl__im__19, dfile_dbg_priv0get_ind(___nl__int__20));
#line 89
//clear ___nl__int__20;
#line 89
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__19));
#line 89
c_rt_lib0clear(&___nl__im__19);
#line 90
___nl__int__23 = 1;
#line 90
___nl__int__22 = ___nl__int__2 + ___nl__int__23;
#line 90
//clear ___nl__int__23;
#line 90
c_rt_lib0delete(dfile_dbg_priv0sprint(___ref___im__0, ___nl__im__12, ___nl__int__22, ___nl__bool__3));
#line 90
//clear ___nl__int__22;
#line 91
c_rt_lib0move(&___nl__im__25,___get_global_const(307));
#line 91
c_rt_lib0move(&___nl__im__26, string0lf());
#line 91
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 91
c_rt_lib0clear(&___nl__im__25);
#line 91
c_rt_lib0clear(&___nl__im__26);
#line 91
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__24));
#line 91
c_rt_lib0clear(&___nl__im__24);
#line 91
c_rt_lib0clear(&___nl__im__12);
#line 92
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 92
goto label_8;
#line 92
label_6:
;
#line 93
c_rt_lib0move(&___nl__im__28, dfile_dbg_priv0get_ind(___nl__int__2));
#line 93
c_rt_lib0move(&___nl__im__29,___get_global_const(310));
#line 93
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 93
c_rt_lib0clear(&___nl__im__28);
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__27));
#line 93
c_rt_lib0clear(&___nl__im__27);
#line 94
goto label_1;
#line 94
label_5:
;
#line 94
___nl__bool__4 = nl0is_hash(___nl__im__1);
#line 94
___nl__bool__4 = !___nl__bool__4;
#line 94
if(___nl__bool__4){ goto label_9;}
#line 95
c_rt_lib0delete(dfile_dbg_priv0sprint_hash(___ref___im__0, ___nl__im__1, ___nl__int__2, ___nl__bool__3));
#line 96
goto label_1;
#line 96
label_9:
;
#line 96
___nl__bool__4 = nl0is_variant(___nl__im__1);
#line 96
___nl__bool__4 = !___nl__bool__4;
#line 96
if(___nl__bool__4){ goto label_10;}
#line 97
c_rt_lib0move(&___nl__im__30,___get_global_const(284));
#line 97
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__30));
#line 97
c_rt_lib0clear(&___nl__im__30);
#line 98
c_rt_lib0move(&___nl__im__31, ov0get_element(___nl__im__1));
#line 98
c_rt_lib0delete(dfile_dbg_priv0sprintstr(___ref___im__0, ___nl__im__31));
#line 98
c_rt_lib0clear(&___nl__im__31);
#line 99
c_rt_lib0move(&___nl__im__33, ov0has_value(___nl__im__1));
#line 99
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__33);
#line 99
c_rt_lib0clear(&___nl__im__33);
#line 99
___nl__bool__32 = !___nl__bool__32;
#line 99
if(___nl__bool__32){ goto label_12;}
#line 100
c_rt_lib0move(&___nl__im__34,___get_global_const(326));
#line 100
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__34));
#line 100
c_rt_lib0clear(&___nl__im__34);
#line 101
c_rt_lib0move(&___nl__im__35, ov0get_value(___nl__im__1));
#line 101
c_rt_lib0delete(dfile_dbg_priv0sprint(___ref___im__0, ___nl__im__35, ___nl__int__2, ___nl__bool__3));
#line 101
c_rt_lib0clear(&___nl__im__35);
#line 102
goto label_11;
#line 102
label_12:
;
#line 102
label_11:
;
#line 102
//clear ___nl__bool__32;
#line 103
c_rt_lib0move(&___nl__im__36,___get_global_const(315));
#line 103
c_rt_lib0delete(dfile_dbg_priv0sp(___ref___im__0, ___nl__im__36));
#line 103
c_rt_lib0clear(&___nl__im__36);
#line 104
goto label_1;
#line 104
label_10:
;
#line 105
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 105
nl_die_arg(___nl__im__37);
#line 106
goto label_1;
#line 106
label_1:
;
#line 106
//clear ___nl__bool__4;
#line 106
c_rt_lib0clear(&___nl__im__12);
#line 106
//clear ___nl__int__13;
#line 106
//clear ___nl__int__14;
#line 106
//clear ___nl__int__15;
#line 106
//clear ___nl__bool__16;
#line 106
//clear ___nl__int__17;
#line 106
c_rt_lib0clear(&___nl__im__18);
#line 106
c_rt_lib0clear(&___nl__im__37);
#line 106
c_rt_lib0clear(&___nl__im__1);
#line 106
//clear ___nl__int__2;
#line 106
//clear ___nl__bool__3;
#line 106
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void dfile_dbg_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT dfile_dbg_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT dfile_dbg_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
