
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "profile.h"
#include "c_fe_lib.h"
#include "c_std_lib.h"
#include "nsystem.h"
#include "string.h"
#include "hash.h"
#include "func.h"
#include "array.h"
#include "ptd.h"
#line 1 "profile.nl"

static ImmT *__const__f = NULL;
void profile_priv0__const__init();
ImmT profile_priv0__const__sim(int __nr);
ImmT profile_priv0__const__sing(int __nr);

ImmT  profile_priv0diff_time(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  profile_priv0print_row(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  profile_priv0get_profile_global();
ImmT  profile_priv0start(ImmT  ___nl__im__0);
ImmT  profile_priv0stop(ImmT  ___nl__im__0);


ImmT  profile_priv0diff_time(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
#line 16
___nl__int__4 = 0;
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_get(___nl__im__0, ___nl__int__4));
#line 16
//clear ___nl__int__4;
#line 16
___nl__int__6 = 0;
#line 16
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 16
//clear ___nl__int__6;
#line 16
___nl__int__7 = getIntFromImm(___nl__im__3);
#line 16
___nl__int__8 = getIntFromImm(___nl__im__5);
#line 16
___nl__int__2 = ___nl__int__7 - ___nl__int__8;
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
//clear ___nl__int__7;
#line 16
//clear ___nl__int__8;
#line 17
___nl__int__11 = 1;
#line 17
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 17
//clear ___nl__int__11;
#line 17
___nl__int__13 = 1;
#line 17
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__1, ___nl__int__13));
#line 17
//clear ___nl__int__13;
#line 17
___nl__int__14 = getIntFromImm(___nl__im__10);
#line 17
___nl__int__15 = getIntFromImm(___nl__im__12);
#line 17
___nl__int__9 = ___nl__int__14 - ___nl__int__15;
#line 17
c_rt_lib0clear(&___nl__im__10);
#line 17
c_rt_lib0clear(&___nl__im__12);
#line 17
//clear ___nl__int__14;
#line 17
//clear ___nl__int__15;
#line 18
___nl__int__17 = 0;
#line 18
___nl__int__18 = ___nl__int__9 < ___nl__int__17;
#line 18
___nl__bool__16 = ___nl__int__18;
#line 18
//clear ___nl__int__17;
#line 18
//clear ___nl__int__18;
#line 18
___nl__bool__16 = !___nl__bool__16;
#line 18
if(___nl__bool__16){ goto label_2;}
#line 19
___nl__int__19 = 1;
#line 19
___nl__int__2 = ___nl__int__2 - ___nl__int__19;
#line 19
//clear ___nl__int__19;
#line 20
___nl__int__20 = 1000000;
#line 20
___nl__int__9 = ___nl__int__9 + ___nl__int__20;
#line 20
//clear ___nl__int__20;
#line 21
goto label_1;
#line 21
label_2:
;
#line 21
label_1:
;
#line 21
//clear ___nl__bool__16;
#line 22
___nl__int__23 = 1000;
#line 22
___nl__int__22 = ___nl__int__2 * ___nl__int__23;
#line 22
//clear ___nl__int__23;
#line 22
___nl__int__25 = 1000;
#line 22
___nl__int__24 = ___nl__int__9 / ___nl__int__25;
#line 22
//clear ___nl__int__25;
#line 22
___nl__int__21 = ___nl__int__22 + ___nl__int__24;
#line 22
//clear ___nl__int__22;
#line 22
//clear ___nl__int__24;
#line 22
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__21));
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
//clear ___nl__int__2;
#line 22
//clear ___nl__int__9;
#line 22
//clear ___nl__int__21;
#line 22
return ___nl__im__26;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
//clear ___nl__int__2;
#line 22
//clear ___nl__int__9;
#line 22
//clear ___nl__int__21;
#line 22
c_rt_lib0clear(&___nl__im__26);
#line 22
return NULL;
}

ImmT  profile_priv0print_row(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
profile_priv0__const__init();
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
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__string__42 = NULL;
#line 26
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 27
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(706)));
#line 27
___nl__int__6 = 0;
#line 27
___nl__int__7 = 1;
#line 27
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 27
label_3:
;
#line 27
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 27
___nl__bool__9 = ___nl__int__10;
#line 27
if(___nl__bool__9){ goto label_1;}
#line 27
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 27
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 28
c_rt_lib0move(&___nl__im__13,___get_global_const(1101));
#line 28
c_rt_lib0move(&___nl__im__14, profile_priv0diff_time(___nl__im__1, ___nl__im__5));
#line 28
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 28
c_rt_lib0clear(&___nl__im__13);
#line 28
c_rt_lib0clear(&___nl__im__14);
#line 29
c_rt_lib0move(&___nl__im__16,___get_global_const(112));
#line 29
c_rt_lib0move(&___nl__im__17, string0index2(___nl__im__12, ___nl__im__16));
#line 29
___nl__int__15 = getIntFromImm(___nl__im__17);
#line 29
c_rt_lib0clear(&___nl__im__16);
#line 29
c_rt_lib0clear(&___nl__im__17);
#line 30
___nl__int__18 = string0length(___nl__im__12);
#line 31
___nl__int__20 = 1;
#line 31
___nl__int__20 = -___nl__int__20;
#line 31
___nl__int__21 = ___nl__int__15 == ___nl__int__20;
#line 31
___nl__bool__19 = ___nl__int__21;
#line 31
//clear ___nl__int__20;
#line 31
//clear ___nl__int__21;
#line 31
___nl__bool__19 = !___nl__bool__19;
#line 31
if(___nl__bool__19){ goto label_5;}
#line 32
c_rt_lib0move(&___nl__im__22,___get_global_const(1102));
#line 32
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_add(___nl__im__12, ___nl__im__22));
#line 32
c_rt_lib0clear(&___nl__im__22);
#line 33
goto label_4;
#line 33
label_5:
;
#line 34
c_rt_lib0move(&___nl__im__23,___get_global_const(1103));
#line 34
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_add(___nl__im__12, ___nl__im__23));
#line 34
c_rt_lib0clear(&___nl__im__23);
#line 35
___nl__int__24 = 0;
#line 35
___nl__int__26 = 4;
#line 35
___nl__int__25 = ___nl__int__15 + ___nl__int__26;
#line 35
//clear ___nl__int__26;
#line 35
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__12, ___nl__int__24, ___nl__int__25));
#line 35
//clear ___nl__int__24;
#line 35
//clear ___nl__int__25;
#line 36
___nl__int__18 = ___nl__int__15;
#line 37
goto label_4;
#line 37
label_4:
;
#line 37
//clear ___nl__bool__19;
#line 38
___nl__int__31 = 7;
#line 38
___nl__int__30 = ___nl__int__18 - ___nl__int__31;
#line 38
//clear ___nl__int__31;
#line 38
___nl__int__32 = 4;
#line 38
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__12, ___nl__int__30, ___nl__int__32));
#line 38
//clear ___nl__int__30;
#line 38
//clear ___nl__int__32;
#line 38
c_rt_lib0move(&___nl__im__33,___get_global_const(428));
#line 38
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 38
c_rt_lib0clear(&___nl__im__29);
#line 38
c_rt_lib0clear(&___nl__im__33);
#line 38
___nl__int__36 = 3;
#line 38
___nl__int__35 = ___nl__int__18 - ___nl__int__36;
#line 38
//clear ___nl__int__36;
#line 38
___nl__int__37 = 7;
#line 38
c_rt_lib0move(&___nl__im__34, string0substr(___nl__im__12, ___nl__int__35, ___nl__int__37));
#line 38
//clear ___nl__int__35;
#line 38
//clear ___nl__int__37;
#line 38
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__34));
#line 38
c_rt_lib0clear(&___nl__im__28);
#line 38
c_rt_lib0clear(&___nl__im__34);
#line 38
c_rt_lib0move(&___nl__im__38, string0tab());
#line 38
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__27, ___nl__im__38));
#line 38
c_rt_lib0clear(&___nl__im__27);
#line 38
c_rt_lib0clear(&___nl__im__38);
#line 39
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__12));
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 39
label_2:
;
#line 40
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 40
goto label_3;
#line 40
label_1:
;
#line 41
c_rt_lib0move(&___nl__im__39, string0tab());
#line 41
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__39));
#line 41
c_rt_lib0clear(&___nl__im__39);
#line 42
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__2));
#line 43
c_rt_lib0move(&___nl__im__40, string0lf());
#line 43
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 43
c_rt_lib0clear(&___nl__im__40);
#line 44
c_rt_lib0move(&___nl__im__41,___get_global_const(191));
#line 44
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__41));
#line 44
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_add(___nl__im__41, ___nl__im__3));
#line 44
c_rt_lib0move(&___nl__string__42,___get_global_const(191));
#line 44
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__42, ___nl__im__41));
#line 44
c_rt_lib0clear(&___nl__im__41);
#line 44
c_rt_lib0clear(&___nl__string__42);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
c_rt_lib0clear(&___nl__im__3);
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
c_rt_lib0clear(&___nl__im__12);
#line 44
//clear ___nl__int__15;
#line 44
//clear ___nl__int__18;
#line 44
return NULL;
}

ImmT  profile_priv0get_profile_global() {
profile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 48
c_rt_lib0move(&___nl__im__0, c_std_lib0get_profile_global());
#line 49
___nl__int__2 = hash0size(___nl__im__0);
#line 49
___nl__int__3 = 0;
#line 49
___nl__int__4 = ___nl__int__2 == ___nl__int__3;
#line 49
___nl__bool__1 = ___nl__int__4;
#line 49
//clear ___nl__int__2;
#line 49
//clear ___nl__int__3;
#line 49
//clear ___nl__int__4;
#line 49
___nl__bool__1 = !___nl__bool__1;
#line 49
if(___nl__bool__1){ goto label_2;}
#line 49
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 49
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 49
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_const(191), ___nl__im__5, ___get_global_const(706), ___nl__im__6));
#line 49
c_rt_lib0clear(&___nl__im__5);
#line 49
c_rt_lib0clear(&___nl__im__6);
#line 49
goto label_1;
#line 49
label_2:
;
#line 49
label_1:
;
#line 49
//clear ___nl__bool__1;
#line 50
return ___nl__im__0;
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
return NULL;
}

ImmT  profile0sub0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub");
ImmT  *var0 = &(_tab[0]);
func0func_t0type *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return profile0sub(*var0, *var1, *var2);
}
ImmT  profile0sub(ImmT  ___nl__im__0,func0func_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
profile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 54
c_rt_lib0move(&___nl__im__3, profile0sub_ref(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
return ___nl__im__3;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
return NULL;
}

ImmT  profile0sub_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub_ref");
ImmT  *var0 = &(_tab[0]);
func0func_t0type *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return profile0sub_ref(*var0, *var1, var2);
}
ImmT  profile0sub_ref(ImmT  ___nl__im__0,func0func_t0type ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 58
c_rt_lib0move(&___nl__im__3, profile_priv0get_profile_global());
#line 59
c_rt_lib0move(&___nl__im__4, nsystem0time_microsec());
#line 60
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(706)));
#line 61
c_rt_lib0move(&___nl__im__6,___get_global_const(706));
#line 61
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash(___nl__im__3, ___nl__im__6));
#line 61
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__4));
#line 61
c_rt_lib0move(&___nl__string__7,___get_global_const(706));
#line 61
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__3, ___nl__string__7, ___nl__im__6));
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
c_rt_lib0clear(&___nl__string__7);
#line 62
c_rt_lib0delete(profile_priv0print_row(&___nl__im__3, ___nl__im__4, ___nl__im__0));
#line 63
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__3));
#line 64
c_rt_lib0move(&___nl__im__8, func0exec_ref(___nl__im__1, ___ref___im__2));
#line 65
c_rt_lib0move(&___nl__im__3, profile_priv0get_profile_global());
#line 66
c_rt_lib0move(&___nl__im__4, nsystem0time_microsec());
#line 67
c_rt_lib0move(&___nl__im__10,___get_global_const(1104));
#line 67
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__0));
#line 67
c_rt_lib0clear(&___nl__im__10);
#line 67
c_rt_lib0delete(profile_priv0print_row(&___nl__im__3, ___nl__im__4, ___nl__im__9));
#line 67
c_rt_lib0clear(&___nl__im__9);
#line 68
c_rt_lib0copy(&___nl__im__11, ___nl__im__5);
#line 68
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(706), ___nl__im__11);
#line 68
c_rt_lib0clear(&___nl__im__11);
#line 69
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__3));
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
return ___nl__im__8;
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__8);
#line 70
return NULL;
}

ImmT  profile0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0save");
ImmT  *var0 = &(_tab[0]);
return profile0save(*var0);
}
ImmT  profile0save(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 74
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(706)));
#line 75
___nl__int__3 = c_rt_lib0array_len(___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
___nl__int__5 = 0;
#line 75
___nl__int__6 = ___nl__int__3 != ___nl__int__5;
#line 75
___nl__bool__2 = ___nl__int__6;
#line 75
//clear ___nl__int__3;
#line 75
//clear ___nl__int__5;
#line 75
//clear ___nl__int__6;
#line 75
___nl__bool__2 = !___nl__bool__2;
#line 75
if(___nl__bool__2){ goto label_2;}
#line 75
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 75
nl_die_arg(___nl__im__7);
#line 75
goto label_1;
#line 75
label_2:
;
#line 75
label_1:
;
#line 75
//clear ___nl__bool__2;
#line 75
c_rt_lib0clear(&___nl__im__7);
#line 76
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(191)));
#line 76
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__0, ___nl__im__8));
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 77
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 77
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 77
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(191), ___nl__im__9);
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 77
c_rt_lib0clear(&___nl__im__10);
#line 78
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return NULL;
}

ImmT  profile_priv0start(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
#line 82
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 83
___nl__int__3 = hash0size(___nl__im__1);
#line 83
___nl__int__4 = 0;
#line 83
___nl__int__5 = ___nl__int__3 == ___nl__int__4;
#line 83
___nl__bool__2 = ___nl__int__5;
#line 83
//clear ___nl__int__3;
#line 83
//clear ___nl__int__4;
#line 83
//clear ___nl__int__5;
#line 83
___nl__bool__2 = !___nl__bool__2;
#line 83
if(___nl__bool__2){ goto label_2;}
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
//clear ___nl__bool__2;
#line 83
return NULL;
#line 83
goto label_1;
#line 83
label_2:
;
#line 83
label_1:
;
#line 83
//clear ___nl__bool__2;
#line 84
c_rt_lib0move(&___nl__im__6, nsystem0time_microsec());
#line 85
c_rt_lib0move(&___nl__im__7,___get_global_const(706));
#line 85
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__7));
#line 85
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__6));
#line 85
c_rt_lib0move(&___nl__string__8,___get_global_const(706));
#line 85
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__8, ___nl__im__7));
#line 85
c_rt_lib0clear(&___nl__im__7);
#line 85
c_rt_lib0clear(&___nl__string__8);
#line 86
c_rt_lib0delete(profile_priv0print_row(&___nl__im__1, ___nl__im__6, ___nl__im__0));
#line 87
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__1));
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
c_rt_lib0clear(&___nl__im__1);
#line 87
c_rt_lib0clear(&___nl__im__6);
#line 87
return NULL;
}

ImmT  profile_priv0stop(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__string__10 = NULL;
#line 91
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 92
___nl__int__3 = hash0size(___nl__im__1);
#line 92
___nl__int__4 = 0;
#line 92
___nl__int__5 = ___nl__int__3 == ___nl__int__4;
#line 92
___nl__bool__2 = ___nl__int__5;
#line 92
//clear ___nl__int__3;
#line 92
//clear ___nl__int__4;
#line 92
//clear ___nl__int__5;
#line 92
___nl__bool__2 = !___nl__bool__2;
#line 92
if(___nl__bool__2){ goto label_2;}
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__1);
#line 92
//clear ___nl__bool__2;
#line 92
return NULL;
#line 92
goto label_1;
#line 92
label_2:
;
#line 92
label_1:
;
#line 92
//clear ___nl__bool__2;
#line 93
c_rt_lib0move(&___nl__im__6, nsystem0time_microsec());
#line 94
c_rt_lib0move(&___nl__im__8,___get_global_const(1104));
#line 94
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__0));
#line 94
c_rt_lib0clear(&___nl__im__8);
#line 94
c_rt_lib0delete(profile_priv0print_row(&___nl__im__1, ___nl__im__6, ___nl__im__7));
#line 94
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0move(&___nl__im__9,___get_global_const(706));
#line 95
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__9));
#line 95
c_rt_lib0delete(array0pop(&___nl__im__9));
#line 95
c_rt_lib0move(&___nl__string__10,___get_global_const(706));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__10, ___nl__im__9));
#line 95
c_rt_lib0clear(&___nl__im__9);
#line 95
c_rt_lib0clear(&___nl__string__10);
#line 96
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__1));
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
c_rt_lib0clear(&___nl__im__6);
#line 96
return NULL;
}

ImmT  profile0begin0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0begin");
ImmT  *var0 = &(_tab[0]);
return profile0begin(*var0);
}
ImmT  profile0begin(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
#line 100
c_rt_lib0delete(profile_priv0start(___nl__im__0));
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
return NULL;
}

ImmT  profile0end0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0end");
ImmT  *var0 = &(_tab[0]);
return profile0end(*var0);
}
ImmT  profile0end(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
#line 104
c_rt_lib0delete(profile_priv0stop(___nl__im__0));
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void profile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT profile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT profile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
