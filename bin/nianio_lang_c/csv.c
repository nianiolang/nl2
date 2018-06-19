
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
return csv0save(*var0);
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
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
#line 10
c_rt_lib0move(&___nl__im__1,___get_global_const(279));
#line 11
c_rt_lib0move(&___nl__im__2, string0tab());
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__1, ___nl__im__1));
#line 13
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 14
___nl__int__6 = 0;
#line 14
___nl__int__7 = 1;
#line 14
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 14
label_3:
;
#line 14
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 14
___nl__bool__9 = ___nl__int__10;
#line 14
if(___nl__bool__9){ goto label_1;}
#line 14
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 14
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 15
___nl__int__12 = c_rt_lib0array_len(___nl__im__5);
#line 16
___nl__int__13 = 0;
#line 16
___nl__int__14 = 1;
#line 16
label_6:
;
#line 16
___nl__int__16 = ___nl__int__13 >= ___nl__int__12;
#line 16
___nl__bool__15 = ___nl__int__16;
#line 16
if(___nl__bool__15){ goto label_4;}
#line 17
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__5, ___nl__int__13));
#line 18
___nl__int__18 = string0length(___nl__im__17);
#line 19
___nl__bool__19 = false;
#line 20
___nl__int__20 = 0;
#line 20
___nl__int__21 = 1;
#line 20
label_9:
;
#line 20
___nl__int__23 = ___nl__int__20 >= ___nl__int__18;
#line 20
___nl__bool__22 = ___nl__int__23;
#line 20
if(___nl__bool__22){ goto label_7;}
#line 21
___nl__int__25 = 1;
#line 21
c_rt_lib0move(&___nl__im__24, string0substr(___nl__im__17, ___nl__int__20, ___nl__int__25));
#line 21
//clear ___nl__int__25;
#line 22
___nl__int__28 = string0ord(___nl__im__24);
#line 22
___nl__int__29 = 32;
#line 22
___nl__int__30 = ___nl__int__28 < ___nl__int__29;
#line 22
___nl__bool__26 = ___nl__int__30;
#line 22
//clear ___nl__int__28;
#line 22
//clear ___nl__int__29;
#line 22
//clear ___nl__int__30;
#line 22
if(___nl__bool__26){ goto label_12;}
#line 22
___nl__bool__26 = c_rt_lib0eq(___nl__im__24, ___nl__im__1);
#line 22
label_12:
;
#line 22
//clear ___nl__bool__27;
#line 22
___nl__bool__26 = !___nl__bool__26;
#line 22
if(___nl__bool__26){ goto label_11;}
#line 22
___nl__bool__19 = true;
#line 22
goto label_10;
#line 22
label_11:
;
#line 22
label_10:
;
#line 22
//clear ___nl__bool__26;
#line 22
c_rt_lib0clear(&___nl__im__24);
#line 22
label_8:
;
#line 23
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 23
goto label_9;
#line 23
label_7:
;
#line 24
___nl__bool__31 = ___nl__bool__19;
#line 24
___nl__bool__31 = !___nl__bool__31;
#line 24
if(___nl__bool__31){ goto label_14;}
#line 24
c_rt_lib0move(&___nl__im__33, string0replace(___nl__im__17, ___nl__im__1, ___nl__im__3));
#line 24
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__1, ___nl__im__33));
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 24
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__32, ___nl__im__1));
#line 24
c_rt_lib0clear(&___nl__im__32);
#line 24
goto label_13;
#line 24
label_14:
;
#line 24
label_13:
;
#line 24
//clear ___nl__bool__31;
#line 25
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__17));
#line 26
___nl__int__36 = 1;
#line 26
___nl__int__35 = ___nl__int__12 - ___nl__int__36;
#line 26
//clear ___nl__int__36;
#line 26
___nl__int__37 = ___nl__int__13 == ___nl__int__35;
#line 26
___nl__bool__34 = ___nl__int__37;
#line 26
//clear ___nl__int__35;
#line 26
//clear ___nl__int__37;
#line 26
___nl__bool__34 = !___nl__bool__34;
#line 26
___nl__bool__34 = !___nl__bool__34;
#line 26
if(___nl__bool__34){ goto label_16;}
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__2));
#line 26
goto label_15;
#line 26
label_16:
;
#line 26
label_15:
;
#line 26
//clear ___nl__bool__34;
#line 26
c_rt_lib0clear(&___nl__im__17);
#line 26
//clear ___nl__int__18;
#line 26
//clear ___nl__bool__19;
#line 26
//clear ___nl__int__20;
#line 26
//clear ___nl__int__21;
#line 26
//clear ___nl__bool__22;
#line 26
//clear ___nl__int__23;
#line 26
c_rt_lib0clear(&___nl__im__24);
#line 26
label_5:
;
#line 27
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 27
goto label_6;
#line 27
label_4:
;
#line 28
c_rt_lib0move(&___nl__im__38, string0lf());
#line 28
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__38));
#line 28
c_rt_lib0clear(&___nl__im__38);
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 28
label_2:
;
#line 29
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 29
goto label_3;
#line 29
label_1:
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
//clear ___nl__int__10;
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
//clear ___nl__int__12;
#line 30
//clear ___nl__int__13;
#line 30
//clear ___nl__int__14;
#line 30
//clear ___nl__bool__15;
#line 30
//clear ___nl__int__16;
#line 30
c_rt_lib0clear(&___nl__im__17);
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__bool__19;
#line 30
//clear ___nl__int__20;
#line 30
//clear ___nl__int__21;
#line 30
//clear ___nl__bool__22;
#line 30
//clear ___nl__int__23;
#line 30
c_rt_lib0clear(&___nl__im__24);
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
//clear ___nl__int__10;
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
//clear ___nl__int__12;
#line 30
//clear ___nl__int__13;
#line 30
//clear ___nl__int__14;
#line 30
//clear ___nl__bool__15;
#line 30
//clear ___nl__int__16;
#line 30
c_rt_lib0clear(&___nl__im__17);
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__bool__19;
#line 30
//clear ___nl__int__20;
#line 30
//clear ___nl__int__21;
#line 30
//clear ___nl__bool__22;
#line 30
//clear ___nl__int__23;
#line 30
c_rt_lib0clear(&___nl__im__24);
#line 30
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
INT  ___nl__int__7 = 0;
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
___nl__int__7 = 1;
#line 34
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__3, ___nl__int__7));
#line 34
//clear ___nl__int__3;
#line 34
//clear ___nl__int__7;
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
}

ImmT  csv0load0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0load");
ImmT  *var0 = &(_tab[0]);
return csv0load(*var0);
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
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
bool  ___nl__bool__40 = false;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
INT  ___nl__int__45 = 0;
bool  ___nl__bool__46 = false;
bool  ___nl__bool__47 = false;
bool  ___nl__bool__48 = false;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
bool  ___nl__bool__54 = false;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
INT  ___nl__int__58 = 0;
bool  ___nl__bool__59 = false;
INT  ___nl__int__60 = 0;
bool  ___nl__bool__61 = false;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
bool  ___nl__bool__64 = false;
INT  ___nl__int__65 = 0;
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
#line 44
c_rt_lib0move(&___nl__im__1,___get_global_const(279));
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
___nl__int__9 = ___nl__int__6 == ___nl__int__8;
#line 50
___nl__bool__7 = ___nl__int__9;
#line 50
//clear ___nl__int__8;
#line 50
//clear ___nl__int__9;
#line 50
___nl__bool__7 = !___nl__bool__7;
#line 50
if(___nl__bool__7){ goto label_2;}
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
goto label_1;
#line 50
label_2:
;
#line 50
label_1:
;
#line 50
//clear ___nl__bool__7;
#line 51
___nl__int__14 = 1;
#line 51
___nl__int__13 = ___nl__int__6 - ___nl__int__14;
#line 51
//clear ___nl__int__14;
#line 51
___nl__int__15 = 1;
#line 51
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__0, ___nl__int__13, ___nl__int__15));
#line 51
//clear ___nl__int__13;
#line 51
//clear ___nl__int__15;
#line 51
___nl__int__11 = string0ord(___nl__im__12);
#line 51
c_rt_lib0clear(&___nl__im__12);
#line 51
___nl__int__16 = 10;
#line 51
___nl__int__17 = ___nl__int__11 == ___nl__int__16;
#line 51
___nl__bool__10 = ___nl__int__17;
#line 51
//clear ___nl__int__11;
#line 51
//clear ___nl__int__16;
#line 51
//clear ___nl__int__17;
#line 51
___nl__bool__10 = !___nl__bool__10;
#line 51
if(___nl__bool__10){ goto label_4;}
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
___nl__int__24 = 1;
#line 53
c_rt_lib0move(&___nl__im__21, string0substr(___nl__im__0, ___nl__int__22, ___nl__int__24));
#line 53
//clear ___nl__int__22;
#line 53
//clear ___nl__int__24;
#line 53
___nl__int__20 = string0ord(___nl__im__21);
#line 53
c_rt_lib0clear(&___nl__im__21);
#line 53
___nl__int__25 = 13;
#line 53
___nl__int__26 = ___nl__int__20 == ___nl__int__25;
#line 53
___nl__bool__19 = ___nl__int__26;
#line 53
//clear ___nl__int__20;
#line 53
//clear ___nl__int__25;
#line 53
//clear ___nl__int__26;
#line 53
___nl__bool__19 = !___nl__bool__19;
#line 53
if(___nl__bool__19){ goto label_6;}
#line 53
___nl__int__27 = 1;
#line 53
___nl__int__6 = ___nl__int__6 - ___nl__int__27;
#line 53
//clear ___nl__int__27;
#line 53
goto label_5;
#line 53
label_6:
;
#line 53
label_5:
;
#line 53
//clear ___nl__bool__19;
#line 54
goto label_3;
#line 54
label_4:
;
#line 54
label_3:
;
#line 54
//clear ___nl__bool__10;
#line 55
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 56
c_rt_lib0move(&___nl__im__29,___get_global_const(21));
#line 57
label_8:
;
#line 57
___nl__int__31 = getIntFromImm(___nl__im__29);
#line 57
___nl__int__32 = ___nl__int__31 < ___nl__int__6;
#line 57
___nl__bool__30 = ___nl__int__32;
#line 57
//clear ___nl__int__31;
#line 57
//clear ___nl__int__32;
#line 57
___nl__bool__30 = !___nl__bool__30;
#line 57
if(___nl__bool__30){ goto label_7;}
#line 58
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__29));
#line 59
___nl__bool__34 = c_rt_lib0eq(___nl__im__33, ___nl__im__1);
#line 59
___nl__bool__34 = !___nl__bool__34;
#line 59
if(___nl__bool__34){ goto label_10;}
#line 60
label_12:
;
#line 61
___nl__int__36 = getIntFromImm(___nl__im__29);
#line 61
___nl__int__37 = ___nl__int__36 >= ___nl__int__6;
#line 61
___nl__bool__35 = ___nl__int__37;
#line 61
//clear ___nl__int__36;
#line 61
//clear ___nl__int__37;
#line 61
___nl__bool__35 = !___nl__bool__35;
#line 61
if(___nl__bool__35){ goto label_14;}
#line 61
c_rt_lib0move(&___nl__im__38, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__28));
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
c_rt_lib0clear(&___nl__im__28);
#line 61
c_rt_lib0clear(&___nl__im__29);
#line 61
//clear ___nl__bool__30;
#line 61
c_rt_lib0clear(&___nl__im__33);
#line 61
//clear ___nl__bool__34;
#line 61
//clear ___nl__bool__35;
#line 61
return ___nl__im__38;
#line 61
goto label_13;
#line 61
label_14:
;
#line 61
label_13:
;
#line 61
//clear ___nl__bool__35;
#line 61
c_rt_lib0clear(&___nl__im__38);
#line 62
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__29));
#line 63
___nl__bool__39 = c_rt_lib0eq(___nl__im__33, ___nl__im__1);
#line 63
___nl__bool__39 = !___nl__bool__39;
#line 63
if(___nl__bool__39){ goto label_16;}
#line 64
___nl__int__41 = getIntFromImm(___nl__im__29);
#line 64
___nl__int__42 = ___nl__int__41 >= ___nl__int__6;
#line 64
___nl__bool__40 = ___nl__int__42;
#line 64
//clear ___nl__int__41;
#line 64
//clear ___nl__int__42;
#line 64
___nl__bool__40 = !___nl__bool__40;
#line 64
if(___nl__bool__40){ goto label_18;}
#line 64
c_rt_lib0move(&___nl__im__43, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__28));
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
c_rt_lib0clear(&___nl__im__28);
#line 64
c_rt_lib0clear(&___nl__im__29);
#line 64
//clear ___nl__bool__30;
#line 64
c_rt_lib0clear(&___nl__im__33);
#line 64
//clear ___nl__bool__34;
#line 64
//clear ___nl__bool__39;
#line 64
//clear ___nl__bool__40;
#line 64
return ___nl__im__43;
#line 64
goto label_17;
#line 64
label_18:
;
#line 64
label_17:
;
#line 64
//clear ___nl__bool__40;
#line 64
c_rt_lib0clear(&___nl__im__43);
#line 65
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__29));
#line 66
___nl__bool__44 = c_rt_lib0ne(___nl__im__33, ___nl__im__1);
#line 66
___nl__bool__44 = !___nl__bool__44;
#line 66
if(___nl__bool__44){ goto label_20;}
#line 66
goto label_11;
#line 66
goto label_19;
#line 66
label_20:
;
#line 66
label_19:
;
#line 66
//clear ___nl__bool__44;
#line 67
goto label_15;
#line 67
label_16:
;
#line 67
label_15:
;
#line 67
//clear ___nl__bool__39;
#line 68
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_add(___nl__im__28, ___nl__im__33));
#line 60
goto label_12;
#line 60
label_11:
;
#line 70
goto label_9;
#line 70
label_10:
;
#line 71
___nl__int__45 = string0ord(___nl__im__33);
#line 72
label_22:
;
#line 72
___nl__int__49 = ___nl__int__45 != ___nl__int__3;
#line 72
___nl__bool__46 = ___nl__int__49;
#line 72
//clear ___nl__int__49;
#line 72
___nl__bool__48 = !___nl__bool__46;
#line 72
if(___nl__bool__48){ goto label_24;}
#line 72
___nl__int__50 = 10;
#line 72
___nl__int__51 = ___nl__int__45 != ___nl__int__50;
#line 72
___nl__bool__46 = ___nl__int__51;
#line 72
//clear ___nl__int__50;
#line 72
//clear ___nl__int__51;
#line 72
label_24:
;
#line 72
//clear ___nl__bool__48;
#line 72
___nl__bool__47 = !___nl__bool__46;
#line 72
if(___nl__bool__47){ goto label_23;}
#line 72
___nl__int__52 = 13;
#line 72
___nl__int__53 = ___nl__int__45 != ___nl__int__52;
#line 72
___nl__bool__46 = ___nl__int__53;
#line 72
//clear ___nl__int__52;
#line 72
//clear ___nl__int__53;
#line 72
label_23:
;
#line 72
//clear ___nl__bool__47;
#line 72
___nl__bool__46 = !___nl__bool__46;
#line 72
if(___nl__bool__46){ goto label_21;}
#line 73
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_add(___nl__im__28, ___nl__im__33));
#line 74
___nl__int__55 = getIntFromImm(___nl__im__29);
#line 74
___nl__int__56 = ___nl__int__55 >= ___nl__int__6;
#line 74
___nl__bool__54 = ___nl__int__56;
#line 74
//clear ___nl__int__55;
#line 74
//clear ___nl__int__56;
#line 74
___nl__bool__54 = !___nl__bool__54;
#line 74
if(___nl__bool__54){ goto label_26;}
#line 74
c_rt_lib0move(&___nl__im__57, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__28));
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
c_rt_lib0clear(&___nl__im__28);
#line 74
c_rt_lib0clear(&___nl__im__29);
#line 74
//clear ___nl__bool__30;
#line 74
c_rt_lib0clear(&___nl__im__33);
#line 74
//clear ___nl__bool__34;
#line 74
//clear ___nl__int__45;
#line 74
//clear ___nl__bool__46;
#line 74
//clear ___nl__bool__54;
#line 74
return ___nl__im__57;
#line 74
goto label_25;
#line 74
label_26:
;
#line 74
label_25:
;
#line 74
//clear ___nl__bool__54;
#line 74
c_rt_lib0clear(&___nl__im__57);
#line 75
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__29));
#line 76
___nl__int__45 = string0ord(___nl__im__33);
#line 77
goto label_22;
#line 77
label_21:
;
#line 78
goto label_9;
#line 78
label_9:
;
#line 78
//clear ___nl__bool__34;
#line 78
//clear ___nl__int__45;
#line 78
//clear ___nl__bool__46;
#line 79
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__28));
#line 80
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 81
___nl__int__58 = string0ord(___nl__im__33);
#line 82
___nl__int__60 = ___nl__int__58 == ___nl__int__3;
#line 82
___nl__bool__59 = ___nl__int__60;
#line 82
//clear ___nl__int__60;
#line 82
___nl__bool__59 = !___nl__bool__59;
#line 82
if(___nl__bool__59){ goto label_28;}
#line 82
goto label_8;
#line 82
goto label_27;
#line 82
label_28:
;
#line 82
label_27:
;
#line 82
//clear ___nl__bool__59;
#line 83
___nl__int__62 = 13;
#line 83
___nl__int__63 = ___nl__int__58 == ___nl__int__62;
#line 83
___nl__bool__61 = ___nl__int__63;
#line 83
//clear ___nl__int__62;
#line 83
//clear ___nl__int__63;
#line 83
___nl__bool__61 = !___nl__bool__61;
#line 83
if(___nl__bool__61){ goto label_30;}
#line 84
c_rt_lib0move(&___nl__im__33, csv_priv0get_char(___nl__im__0, &___nl__im__29));
#line 85
___nl__int__58 = string0ord(___nl__im__33);
#line 86
goto label_29;
#line 86
label_30:
;
#line 86
label_29:
;
#line 86
//clear ___nl__bool__61;
#line 87
___nl__int__65 = 10;
#line 87
___nl__int__66 = ___nl__int__58 == ___nl__int__65;
#line 87
___nl__bool__64 = ___nl__int__66;
#line 87
//clear ___nl__int__65;
#line 87
//clear ___nl__int__66;
#line 87
___nl__bool__64 = !___nl__bool__64;
#line 87
if(___nl__bool__64){ goto label_32;}
#line 88
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__5));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 90
goto label_8;
#line 91
goto label_31;
#line 91
label_32:
;
#line 91
label_31:
;
#line 91
//clear ___nl__bool__64;
#line 91
c_rt_lib0clear(&___nl__im__33);
#line 91
//clear ___nl__int__58;
#line 92
goto label_8;
#line 92
label_7:
;
#line 93
c_rt_lib0move(&___nl__im__67, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__28));
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
c_rt_lib0clear(&___nl__im__28);
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
//clear ___nl__bool__30;
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
//clear ___nl__int__58;
#line 93
return ___nl__im__67;
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
c_rt_lib0clear(&___nl__im__28);
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
//clear ___nl__bool__30;
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
//clear ___nl__int__58;
#line 93
c_rt_lib0clear(&___nl__im__67);
#line 93
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
