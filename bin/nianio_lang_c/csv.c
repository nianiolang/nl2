
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "csv.h"
#include "string.h"
#include "array.h"
#line 1 "csv.nl"

static ImmT *__const__f = NULL;
void csv_priv0__const__init();
ImmT csv_priv0__const__sim(int __nr);
ImmT csv_priv0__const__sing(int __nr);

ImmT  csv_priv0get_char(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
ImmT  csv_priv0end(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2);


ImmT  csv0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0save");
ImmT  *var0 = &(_tab[0]);
ImmT  res = csv0save(*var0);
return res;
}
ImmT  csv0save(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
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
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
#line 10
c_rt_lib0move(&___nl__im__1,___get_global_string_const(296));
#line 11
c_rt_lib0move(&___nl__im__2, string0tab());
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__1, ___nl__im__1));
#line 13
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 14
___nl__int__6 = 0;
#line 14
___nl__int__7 = 1;
#line 14
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 14
label_7:
;
#line 14
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 14
if(___nl__bool__9){ goto label_91;}
#line 14
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 14
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 15
___nl__int__11 = c_rt_lib0array_len(___nl__im__5);
#line 16
___nl__int__12 = 0;
#line 16
___nl__int__13 = 1;
#line 16
label_15:
;
#line 16
___nl__bool__14 = ___nl__int__12 >= ___nl__int__11;
#line 16
if(___nl__bool__14){ goto label_84;}
#line 17
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__5, ___nl__int__12));
#line 18
___nl__int__16 = string0length(___nl__im__15);
#line 19
___nl__bool__17 = false;
#line 20
___nl__int__18 = 0;
#line 20
___nl__int__19 = 1;
#line 20
label_23:
;
#line 20
___nl__bool__20 = ___nl__int__18 >= ___nl__int__16;
#line 20
if(___nl__bool__20){ goto label_50;}
#line 21
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__18));
#line 21
___nl__int__23 = 1;
#line 21
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__23));
#line 21
c_rt_lib0move(&___nl__im__21, string0substr(___nl__im__15, ___nl__im__22, ___nl__im__24));
#line 21
c_rt_lib0clear(&___nl__im__22);
#line 21
//clear ___nl__int__23;
#line 21
c_rt_lib0clear(&___nl__im__24);
#line 22
___nl__int__26 = string0ord(___nl__im__21);
#line 22
___nl__int__27 = 32;
#line 22
___nl__bool__25 = ___nl__int__26 < ___nl__int__27;
#line 22
//clear ___nl__int__26;
#line 22
//clear ___nl__int__27;
#line 22
if(___nl__bool__25){ goto label_40;}
#line 22
___nl__bool__25 = c_rt_lib0eq(___nl__im__21, ___nl__im__1);
#line 22
label_40:
;
#line 22
___nl__bool__25 = !___nl__bool__25;
#line 22
if(___nl__bool__25){ goto label_45;}
#line 22
___nl__bool__17 = true;
#line 22
goto label_45;
#line 22
label_45:
;
#line 22
//clear ___nl__bool__25;
#line 22
c_rt_lib0clear(&___nl__im__21);
#line 23
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 23
goto label_23;
#line 23
label_50:
;
#line 24
___nl__bool__28 = ___nl__bool__17;
#line 24
___nl__bool__28 = !___nl__bool__28;
#line 24
if(___nl__bool__28){ goto label_60;}
#line 24
c_rt_lib0move(&___nl__im__30, string0replace(___nl__im__15, ___nl__im__1, ___nl__im__3));
#line 24
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__1, ___nl__im__30));
#line 24
c_rt_lib0clear(&___nl__im__30);
#line 24
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__29, ___nl__im__1));
#line 24
c_rt_lib0clear(&___nl__im__29);
#line 24
goto label_60;
#line 24
label_60:
;
#line 24
//clear ___nl__bool__28;
#line 25
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__15));
#line 26
___nl__int__33 = 1;
#line 26
___nl__int__32 = ___nl__int__11 - ___nl__int__33;
#line 26
//clear ___nl__int__33;
#line 26
___nl__bool__31 = ___nl__int__12 == ___nl__int__32;
#line 26
//clear ___nl__int__32;
#line 26
___nl__bool__31 = !___nl__bool__31;
#line 26
___nl__bool__31 = !___nl__bool__31;
#line 26
if(___nl__bool__31){ goto label_73;}
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__2));
#line 26
goto label_73;
#line 26
label_73:
;
#line 26
//clear ___nl__bool__31;
#line 26
c_rt_lib0clear(&___nl__im__15);
#line 26
//clear ___nl__int__16;
#line 26
//clear ___nl__bool__17;
#line 26
//clear ___nl__int__18;
#line 26
//clear ___nl__int__19;
#line 26
//clear ___nl__bool__20;
#line 26
c_rt_lib0clear(&___nl__im__21);
#line 27
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 27
goto label_15;
#line 27
label_84:
;
#line 28
c_rt_lib0move(&___nl__im__34, string0lf());
#line 28
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__34));
#line 28
c_rt_lib0clear(&___nl__im__34);
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 29
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 29
goto label_7;
#line 29
label_91:
;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__im__5);
#line 30
//clear ___nl__int__6;
#line 30
//clear ___nl__int__7;
#line 30
//clear ___nl__int__8;
#line 30
//clear ___nl__bool__9;
#line 30
c_rt_lib0clear(&___nl__im__10);
#line 30
//clear ___nl__int__11;
#line 30
//clear ___nl__int__12;
#line 30
//clear ___nl__int__13;
#line 30
//clear ___nl__bool__14;
#line 30
c_rt_lib0clear(&___nl__im__15);
#line 30
//clear ___nl__int__16;
#line 30
//clear ___nl__bool__17;
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__int__19;
#line 30
//clear ___nl__bool__20;
#line 30
c_rt_lib0clear(&___nl__im__21);
#line 30
return ___nl__im__4;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__im__4);
#line 30
c_rt_lib0clear(&___nl__im__5);
#line 30
//clear ___nl__int__6;
#line 30
//clear ___nl__int__7;
#line 30
//clear ___nl__int__8;
#line 30
//clear ___nl__bool__9;
#line 30
c_rt_lib0clear(&___nl__im__10);
#line 30
//clear ___nl__int__11;
#line 30
//clear ___nl__int__12;
#line 30
//clear ___nl__int__13;
#line 30
//clear ___nl__bool__14;
#line 30
c_rt_lib0clear(&___nl__im__15);
#line 30
//clear ___nl__int__16;
#line 30
//clear ___nl__bool__17;
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__int__19;
#line 30
//clear ___nl__bool__20;
#line 30
c_rt_lib0clear(&___nl__im__21);
#line 30
return NULL;
return NULL;

}

ImmT  csv_priv0get_char(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
#line 34
___nl__int__3 = getIntFromImm((*___ref___im__1));
#line 34
___nl__int__4 = 1;
#line 34
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 34
___nl__int__6 = ___nl__int__5 + ___nl__int__4;
#line 34
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__6));
#line 34
//clear ___nl__int__4;
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__3));
#line 34
___nl__int__8 = 1;
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 34
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__im__7, ___nl__im__9));
#line 34
//clear ___nl__int__3;
#line 34
c_rt_lib0clear(&___nl__im__7);
#line 34
//clear ___nl__int__8;
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
return ___nl__im__2;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
return NULL;
return NULL;

}

ImmT  csv_priv0end(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
csv_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 38
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__2));
#line 39
c_rt_lib0delete(array0push(___ref___im__0, (*___ref___im__1)));
#line 40
c_rt_lib0copy(&___nl__im__3, (*___ref___im__0));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
return ___nl__im__3;
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
return NULL;
return NULL;

}

ImmT  csv0load0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0load");
ImmT  *var0 = &(_tab[0]);
ImmT  res = csv0load(*var0);
return res;
}
ImmT  csv0load(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
INT  ___nl__int__43 = 0;
bool  ___nl__bool__44 = false;
bool  ___nl__bool__45 = false;
bool  ___nl__bool__46 = false;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
bool  ___nl__bool__53 = false;
bool  ___nl__bool__54 = false;
INT  ___nl__int__55 = 0;
bool  ___nl__bool__56 = false;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
#line 44
c_rt_lib0move(&___nl__im__1,___get_global_string_const(296));
#line 45
c_rt_lib0move(&___nl__im__2, string0tab());
#line 46
___nl__int__3 = string0ord(___nl__im__2);
#line 47
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 49
___nl__int__6 = string0length(___nl__im__0);
#line 50
___nl__int__8 = 0;
#line 50
___nl__bool__7 = ___nl__int__6 == ___nl__int__8;
#line 50
//clear ___nl__int__8;
#line 50
___nl__bool__7 = !___nl__bool__7;
#line 50
if(___nl__bool__7){ goto label_20;}
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
c_rt_lib0clear(&___nl__im__2);
#line 50
//clear ___nl__int__3;
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 50
//clear ___nl__int__6;
#line 50
//clear ___nl__bool__7;
#line 50
return ___nl__im__4;
#line 50
goto label_20;
#line 50
label_20:
;
#line 50
//clear ___nl__bool__7;
#line 51
___nl__int__13 = 1;
#line 51
___nl__int__12 = ___nl__int__6 - ___nl__int__13;
#line 51
//clear ___nl__int__13;
#line 51
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__12));
#line 51
___nl__int__15 = 1;
#line 51
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 51
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__im__14, ___nl__im__16));
#line 51
//clear ___nl__int__12;
#line 51
c_rt_lib0clear(&___nl__im__14);
#line 51
//clear ___nl__int__15;
#line 51
c_rt_lib0clear(&___nl__im__16);
#line 51
___nl__int__10 = string0ord(___nl__im__11);
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
___nl__int__17 = 10;
#line 51
___nl__bool__9 = ___nl__int__10 == ___nl__int__17;
#line 51
//clear ___nl__int__10;
#line 51
//clear ___nl__int__17;
#line 51
___nl__bool__9 = !___nl__bool__9;
#line 51
if(___nl__bool__9){ goto label_70;}
#line 52
___nl__int__18 = 1;
#line 52
___nl__int__6 = ___nl__int__6 - ___nl__int__18;
#line 52
//clear ___nl__int__18;
#line 53
___nl__int__23 = 1;
#line 53
___nl__int__22 = ___nl__int__6 - ___nl__int__23;
#line 53
//clear ___nl__int__23;
#line 53
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__22));
#line 53
___nl__int__25 = 1;
#line 53
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 53
c_rt_lib0move(&___nl__im__21, string0substr(___nl__im__0, ___nl__im__24, ___nl__im__26));
#line 53
//clear ___nl__int__22;
#line 53
c_rt_lib0clear(&___nl__im__24);
#line 53
//clear ___nl__int__25;
#line 53
c_rt_lib0clear(&___nl__im__26);
#line 53
___nl__int__20 = string0ord(___nl__im__21);
#line 53
c_rt_lib0clear(&___nl__im__21);
#line 53
___nl__int__27 = 13;
#line 53
___nl__bool__19 = ___nl__int__20 == ___nl__int__27;
#line 53
//clear ___nl__int__20;
#line 53
//clear ___nl__int__27;
#line 53
___nl__bool__19 = !___nl__bool__19;
#line 53
if(___nl__bool__19){ goto label_67;}
#line 53
___nl__int__28 = 1;
#line 53
___nl__int__6 = ___nl__int__6 - ___nl__int__28;
#line 53
//clear ___nl__int__28;
#line 53
goto label_67;
#line 53
label_67:
;
#line 53
//clear ___nl__bool__19;
#line 54
goto label_70;
#line 54
label_70:
;
#line 54
//clear ___nl__bool__9;
#line 55
c_rt_lib0move(&___nl__im__29,___get_global_string_const(36));
#line 56
c_rt_lib0move(&___nl__im__30,___get_global_int_const(0));
#line 57
label_74:
;
#line 57
___nl__int__32 = getIntFromImm(___nl__im__30);
#line 57
___nl__bool__31 = ___nl__int__32 < ___nl__int__6;
#line 57
//clear ___nl__int__32;
#line 57
___nl__bool__31 = !___nl__bool__31;
#line 57
if(___nl__bool__31){ goto label_251;}
#line 58
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 59
___nl__bool__34 = c_rt_lib0eq(___nl__im__33, ___nl__im__1);
#line 59
___nl__bool__34 = !___nl__bool__34;
#line 59
if(___nl__bool__34){ goto label_155;}
#line 60
label_84:
;
#line 61
___nl__int__36 = getIntFromImm(___nl__im__30);
#line 61
___nl__bool__35 = ___nl__int__36 >= ___nl__int__6;
#line 61
//clear ___nl__int__36;
#line 61
___nl__bool__35 = !___nl__bool__35;
#line 61
if(___nl__bool__35){ goto label_106;}
#line 61
c_rt_lib0move(&___nl__im__37, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
//clear ___nl__int__3;
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
//clear ___nl__int__6;
#line 61
c_rt_lib0clear(&___nl__im__29);
#line 61
c_rt_lib0clear(&___nl__im__30);
#line 61
//clear ___nl__bool__31;
#line 61
c_rt_lib0clear(&___nl__im__33);
#line 61
//clear ___nl__bool__34;
#line 61
//clear ___nl__bool__35;
#line 61
return ___nl__im__37;
#line 61
goto label_106;
#line 61
label_106:
;
#line 61
//clear ___nl__bool__35;
#line 61
c_rt_lib0clear(&___nl__im__37);
#line 62
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 63
___nl__bool__38 = c_rt_lib0eq(___nl__im__33, ___nl__im__1);
#line 63
___nl__bool__38 = !___nl__bool__38;
#line 63
if(___nl__bool__38){ goto label_149;}
#line 64
___nl__int__40 = getIntFromImm(___nl__im__30);
#line 64
___nl__bool__39 = ___nl__int__40 >= ___nl__int__6;
#line 64
//clear ___nl__int__40;
#line 64
___nl__bool__39 = !___nl__bool__39;
#line 64
if(___nl__bool__39){ goto label_135;}
#line 64
c_rt_lib0move(&___nl__im__41, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
//clear ___nl__int__3;
#line 64
c_rt_lib0clear(&___nl__im__4);
#line 64
c_rt_lib0clear(&___nl__im__5);
#line 64
//clear ___nl__int__6;
#line 64
c_rt_lib0clear(&___nl__im__29);
#line 64
c_rt_lib0clear(&___nl__im__30);
#line 64
//clear ___nl__bool__31;
#line 64
c_rt_lib0clear(&___nl__im__33);
#line 64
//clear ___nl__bool__34;
#line 64
//clear ___nl__bool__38;
#line 64
//clear ___nl__bool__39;
#line 64
return ___nl__im__41;
#line 64
goto label_135;
#line 64
label_135:
;
#line 64
//clear ___nl__bool__39;
#line 64
c_rt_lib0clear(&___nl__im__41);
#line 65
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 66
___nl__bool__42 = c_rt_lib0ne(___nl__im__33, ___nl__im__1);
#line 66
___nl__bool__42 = !___nl__bool__42;
#line 66
if(___nl__bool__42){ goto label_146;}
#line 66
//clear ___nl__bool__38;
#line 66
//clear ___nl__bool__42;
#line 66
goto label_153;
#line 66
goto label_146;
#line 66
label_146:
;
#line 66
//clear ___nl__bool__42;
#line 67
goto label_149;
#line 67
label_149:
;
#line 67
//clear ___nl__bool__38;
#line 68
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_add(___nl__im__29, ___nl__im__33));
#line 60
goto label_84;
#line 60
label_153:
;
#line 70
goto label_207;
#line 70
label_155:
;
#line 71
___nl__int__43 = string0ord(___nl__im__33);
#line 72
label_157:
;
#line 72
___nl__bool__44 = ___nl__int__43 != ___nl__int__3;
#line 72
___nl__bool__46 = !___nl__bool__44;
#line 72
if(___nl__bool__46){ goto label_164;}
#line 72
___nl__int__47 = 10;
#line 72
___nl__bool__44 = ___nl__int__43 != ___nl__int__47;
#line 72
//clear ___nl__int__47;
#line 72
label_164:
;
#line 72
//clear ___nl__bool__46;
#line 72
___nl__bool__45 = !___nl__bool__44;
#line 72
if(___nl__bool__45){ goto label_171;}
#line 72
___nl__int__48 = 13;
#line 72
___nl__bool__44 = ___nl__int__43 != ___nl__int__48;
#line 72
//clear ___nl__int__48;
#line 72
label_171:
;
#line 72
//clear ___nl__bool__45;
#line 72
___nl__bool__44 = !___nl__bool__44;
#line 72
if(___nl__bool__44){ goto label_205;}
#line 73
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_add(___nl__im__29, ___nl__im__33));
#line 74
___nl__int__50 = getIntFromImm(___nl__im__30);
#line 74
___nl__bool__49 = ___nl__int__50 >= ___nl__int__6;
#line 74
//clear ___nl__int__50;
#line 74
___nl__bool__49 = !___nl__bool__49;
#line 74
if(___nl__bool__49){ goto label_199;}
#line 74
c_rt_lib0move(&___nl__im__51, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
c_rt_lib0clear(&___nl__im__2);
#line 74
//clear ___nl__int__3;
#line 74
c_rt_lib0clear(&___nl__im__4);
#line 74
c_rt_lib0clear(&___nl__im__5);
#line 74
//clear ___nl__int__6;
#line 74
c_rt_lib0clear(&___nl__im__29);
#line 74
c_rt_lib0clear(&___nl__im__30);
#line 74
//clear ___nl__bool__31;
#line 74
c_rt_lib0clear(&___nl__im__33);
#line 74
//clear ___nl__bool__34;
#line 74
//clear ___nl__int__43;
#line 74
//clear ___nl__bool__44;
#line 74
//clear ___nl__bool__49;
#line 74
return ___nl__im__51;
#line 74
goto label_199;
#line 74
label_199:
;
#line 74
//clear ___nl__bool__49;
#line 74
c_rt_lib0clear(&___nl__im__51);
#line 75
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 76
___nl__int__43 = string0ord(___nl__im__33);
#line 77
goto label_157;
#line 77
label_205:
;
#line 78
goto label_207;
#line 78
label_207:
;
#line 78
//clear ___nl__bool__34;
#line 78
//clear ___nl__int__43;
#line 78
//clear ___nl__bool__44;
#line 79
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__29));
#line 80
c_rt_lib0move(&___nl__im__29,___get_global_string_const(36));
#line 81
___nl__int__52 = string0ord(___nl__im__33);
#line 82
___nl__bool__53 = ___nl__int__52 == ___nl__int__3;
#line 82
___nl__bool__53 = !___nl__bool__53;
#line 82
if(___nl__bool__53){ goto label_222;}
#line 82
c_rt_lib0clear(&___nl__im__33);
#line 82
//clear ___nl__int__52;
#line 82
//clear ___nl__bool__53;
#line 82
goto label_74;
#line 82
goto label_222;
#line 82
label_222:
;
#line 82
//clear ___nl__bool__53;
#line 83
___nl__int__55 = 13;
#line 83
___nl__bool__54 = ___nl__int__52 == ___nl__int__55;
#line 83
//clear ___nl__int__55;
#line 83
___nl__bool__54 = !___nl__bool__54;
#line 83
if(___nl__bool__54){ goto label_232;}
#line 84
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 85
___nl__int__52 = string0ord(___nl__im__33);
#line 86
goto label_232;
#line 86
label_232:
;
#line 86
//clear ___nl__bool__54;
#line 87
___nl__int__57 = 10;
#line 87
___nl__bool__56 = ___nl__int__52 == ___nl__int__57;
#line 87
//clear ___nl__int__57;
#line 87
___nl__bool__56 = !___nl__bool__56;
#line 87
if(___nl__bool__56){ goto label_246;}
#line 88
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__5));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 90
c_rt_lib0clear(&___nl__im__33);
#line 90
//clear ___nl__int__52;
#line 90
//clear ___nl__bool__56;
#line 90
goto label_74;
#line 91
goto label_246;
#line 91
label_246:
;
#line 91
//clear ___nl__bool__56;
#line 91
c_rt_lib0clear(&___nl__im__33);
#line 91
//clear ___nl__int__52;
#line 92
goto label_74;
#line 92
label_251:
;
#line 93
c_rt_lib0move(&___nl__im__58, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
//clear ___nl__int__3;
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
//clear ___nl__int__6;
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
c_rt_lib0clear(&___nl__im__30);
#line 93
//clear ___nl__bool__31;
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
//clear ___nl__int__52;
#line 93
return ___nl__im__58;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
//clear ___nl__int__3;
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
//clear ___nl__int__6;
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
c_rt_lib0clear(&___nl__im__30);
#line 93
//clear ___nl__bool__31;
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
//clear ___nl__int__52;
#line 93
c_rt_lib0clear(&___nl__im__58);
#line 93
return NULL;
return NULL;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void csv_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT csv_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT csv_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
