
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
ImmT  ___nl__im__25 = NULL;
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
___nl__bool__16 = ___nl__int__9 < ___nl__int__17;
#line 18
//clear ___nl__int__17;
#line 18
___nl__bool__16 = !___nl__bool__16;
#line 18
if(___nl__bool__16){ goto label_38;}
#line 19
___nl__int__18 = 1;
#line 19
___nl__int__2 = ___nl__int__2 - ___nl__int__18;
#line 19
//clear ___nl__int__18;
#line 20
___nl__int__19 = 1000000;
#line 20
___nl__int__9 = ___nl__int__9 + ___nl__int__19;
#line 20
//clear ___nl__int__19;
#line 21
goto label_38;
#line 21
label_38:
;
#line 21
//clear ___nl__bool__16;
#line 22
___nl__int__22 = 1000;
#line 22
___nl__int__21 = ___nl__int__2 * ___nl__int__22;
#line 22
//clear ___nl__int__22;
#line 22
___nl__int__24 = 1000;
#line 22
___nl__int__23 = ___nl__int__9 / ___nl__int__24;
#line 22
//clear ___nl__int__24;
#line 22
___nl__int__20 = ___nl__int__21 + ___nl__int__23;
#line 22
//clear ___nl__int__21;
#line 22
//clear ___nl__int__23;
#line 22
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__20));
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
//clear ___nl__int__2;
#line 22
//clear ___nl__int__9;
#line 22
//clear ___nl__int__20;
#line 22
return ___nl__im__25;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
//clear ___nl__int__2;
#line 22
//clear ___nl__int__9;
#line 22
//clear ___nl__int__20;
#line 22
c_rt_lib0clear(&___nl__im__25);
#line 22
return NULL;
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
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__string__45 = NULL;
#line 26
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 27
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(911)));
#line 27
___nl__int__6 = 0;
#line 27
___nl__int__7 = 1;
#line 27
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 27
label_5:
;
#line 27
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 27
if(___nl__bool__9){ goto label_85;}
#line 27
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 27
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 28
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1306));
#line 28
c_rt_lib0move(&___nl__im__13, profile_priv0diff_time(___nl__im__1, ___nl__im__5));
#line 28
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 28
c_rt_lib0clear(&___nl__im__12);
#line 28
c_rt_lib0clear(&___nl__im__13);
#line 29
c_rt_lib0move(&___nl__im__15,___get_global_string_const(123));
#line 29
___nl__int__14 = string0index2(___nl__im__11, ___nl__im__15);
#line 29
c_rt_lib0clear(&___nl__im__15);
#line 30
___nl__int__16 = string0length(___nl__im__11);
#line 31
___nl__int__18 = 1;
#line 31
___nl__int__18 = -___nl__int__18;
#line 31
___nl__bool__17 = ___nl__int__14 == ___nl__int__18;
#line 31
//clear ___nl__int__18;
#line 31
___nl__bool__17 = !___nl__bool__17;
#line 31
if(___nl__bool__17){ goto label_29;}
#line 32
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1307));
#line 32
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__19));
#line 32
c_rt_lib0clear(&___nl__im__19);
#line 33
goto label_46;
#line 33
label_29:
;
#line 34
c_rt_lib0move(&___nl__im__20,___get_global_string_const(1308));
#line 34
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__20));
#line 34
c_rt_lib0clear(&___nl__im__20);
#line 35
___nl__int__21 = 0;
#line 35
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 35
___nl__int__24 = 4;
#line 35
___nl__int__23 = ___nl__int__14 + ___nl__int__24;
#line 35
//clear ___nl__int__24;
#line 35
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__23));
#line 35
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__11, ___nl__im__22, ___nl__im__25));
#line 35
//clear ___nl__int__21;
#line 35
c_rt_lib0clear(&___nl__im__22);
#line 35
//clear ___nl__int__23;
#line 35
c_rt_lib0clear(&___nl__im__25);
#line 36
___nl__int__16 = ___nl__int__14;
#line 37
goto label_46;
#line 37
label_46:
;
#line 37
//clear ___nl__bool__17;
#line 38
___nl__int__30 = 7;
#line 38
___nl__int__29 = ___nl__int__16 - ___nl__int__30;
#line 38
//clear ___nl__int__30;
#line 38
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__29));
#line 38
___nl__int__32 = 4;
#line 38
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__32));
#line 38
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__11, ___nl__im__31, ___nl__im__33));
#line 38
//clear ___nl__int__29;
#line 38
c_rt_lib0clear(&___nl__im__31);
#line 38
//clear ___nl__int__32;
#line 38
c_rt_lib0clear(&___nl__im__33);
#line 38
c_rt_lib0move(&___nl__im__34,___get_global_string_const(479));
#line 38
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__34));
#line 38
c_rt_lib0clear(&___nl__im__28);
#line 38
c_rt_lib0clear(&___nl__im__34);
#line 38
___nl__int__37 = 3;
#line 38
___nl__int__36 = ___nl__int__16 - ___nl__int__37;
#line 38
//clear ___nl__int__37;
#line 38
c_rt_lib0move(&___nl__im__38, c_rt_lib0int_new(___nl__int__36));
#line 38
___nl__int__39 = 7;
#line 38
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 38
c_rt_lib0move(&___nl__im__35, string0substr(___nl__im__11, ___nl__im__38, ___nl__im__40));
#line 38
//clear ___nl__int__36;
#line 38
c_rt_lib0clear(&___nl__im__38);
#line 38
//clear ___nl__int__39;
#line 38
c_rt_lib0clear(&___nl__im__40);
#line 38
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__35));
#line 38
c_rt_lib0clear(&___nl__im__27);
#line 38
c_rt_lib0clear(&___nl__im__35);
#line 38
c_rt_lib0move(&___nl__im__41, string0tab());
#line 38
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__26, ___nl__im__41));
#line 38
c_rt_lib0clear(&___nl__im__26);
#line 38
c_rt_lib0clear(&___nl__im__41);
#line 39
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 40
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 40
goto label_5;
#line 40
label_85:
;
#line 41
c_rt_lib0move(&___nl__im__42, string0tab());
#line 41
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__42));
#line 41
c_rt_lib0clear(&___nl__im__42);
#line 42
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__2));
#line 43
c_rt_lib0move(&___nl__im__43, string0lf());
#line 43
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 43
c_rt_lib0clear(&___nl__im__43);
#line 44
c_rt_lib0move(&___nl__im__44,___get_global_string_const(208));
#line 44
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__44));
#line 44
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_add(___nl__im__44, ___nl__im__3));
#line 44
c_rt_lib0move(&___nl__string__45,___get_global_string_const(208));
#line 44
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__45, ___nl__im__44));
#line 44
c_rt_lib0clear(&___nl__im__44);
#line 44
c_rt_lib0clear(&___nl__string__45);
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
c_rt_lib0clear(&___nl__im__10);
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
//clear ___nl__int__14;
#line 44
//clear ___nl__int__16;
#line 44
return NULL;
return NULL;

}

ImmT  profile_priv0get_profile_global() {
profile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 48
c_rt_lib0move(&___nl__im__0, c_std_lib0get_profile_global());
#line 49
___nl__int__2 = hash0size(___nl__im__0);
#line 49
___nl__int__3 = 0;
#line 49
___nl__bool__1 = ___nl__int__2 == ___nl__int__3;
#line 49
//clear ___nl__int__2;
#line 49
//clear ___nl__int__3;
#line 49
___nl__bool__1 = !___nl__bool__1;
#line 49
if(___nl__bool__1){ goto label_14;}
#line 49
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 49
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 49
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_string_const(208), ___nl__im__4, ___get_global_string_const(911), ___nl__im__5));
#line 49
c_rt_lib0clear(&___nl__im__4);
#line 49
c_rt_lib0clear(&___nl__im__5);
#line 49
goto label_14;
#line 49
label_14:
;
#line 49
//clear ___nl__bool__1;
#line 50
return ___nl__im__0;
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
return NULL;
return NULL;

}

ImmT  profile0sub0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub");
ImmT  *var0 = &(_tab[0]);
func0func_t0type *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  res = profile0sub(*var0, *var1, *var2);
return res;
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
return NULL;

}

ImmT  profile0sub_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub_ref");
ImmT  *var0 = &(_tab[0]);
func0func_t0type *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  res = profile0sub_ref(*var0, *var1, var2);
return res;
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(911)));
#line 61
c_rt_lib0move(&___nl__im__6,___get_global_string_const(911));
#line 61
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash(___nl__im__3, ___nl__im__6));
#line 61
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__4));
#line 61
c_rt_lib0move(&___nl__string__7,___get_global_string_const(911));
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
c_rt_lib0move(&___nl__im__10,___get_global_string_const(1309));
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
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_string_const(911), ___nl__im__11);
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
return NULL;

}

ImmT  profile0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0save");
ImmT  *var0 = &(_tab[0]);
ImmT  res = profile0save(*var0);
return res;
}
ImmT  profile0save(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 74
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(911)));
#line 75
___nl__int__3 = c_rt_lib0array_len(___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
___nl__int__5 = 0;
#line 75
___nl__bool__2 = ___nl__int__3 != ___nl__int__5;
#line 75
//clear ___nl__int__3;
#line 75
//clear ___nl__int__5;
#line 75
___nl__bool__2 = !___nl__bool__2;
#line 75
if(___nl__bool__2){ goto label_13;}
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 75
nl_die_arg(___nl__im__6);
#line 75
goto label_13;
#line 75
label_13:
;
#line 75
//clear ___nl__bool__2;
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 76
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(208)));
#line 76
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__0, ___nl__im__7));
#line 76
c_rt_lib0clear(&___nl__im__7);
#line 77
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 77
c_rt_lib0copy(&___nl__im__9, ___nl__im__8);
#line 77
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(208), ___nl__im__9);
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 78
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return NULL;
return NULL;

}

ImmT  profile_priv0start(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
#line 82
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 83
___nl__int__3 = hash0size(___nl__im__1);
#line 83
___nl__int__4 = 0;
#line 83
___nl__bool__2 = ___nl__int__3 == ___nl__int__4;
#line 83
//clear ___nl__int__3;
#line 83
//clear ___nl__int__4;
#line 83
___nl__bool__2 = !___nl__bool__2;
#line 83
if(___nl__bool__2){ goto label_13;}
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
//clear ___nl__bool__2;
#line 83
return NULL;
#line 83
goto label_13;
#line 83
label_13:
;
#line 83
//clear ___nl__bool__2;
#line 84
c_rt_lib0move(&___nl__im__5, nsystem0time_microsec());
#line 85
c_rt_lib0move(&___nl__im__6,___get_global_string_const(911));
#line 85
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__6));
#line 85
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__5));
#line 85
c_rt_lib0move(&___nl__string__7,___get_global_string_const(911));
#line 85
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__7, ___nl__im__6));
#line 85
c_rt_lib0clear(&___nl__im__6);
#line 85
c_rt_lib0clear(&___nl__string__7);
#line 86
c_rt_lib0delete(profile_priv0print_row(&___nl__im__1, ___nl__im__5, ___nl__im__0));
#line 87
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__1));
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
c_rt_lib0clear(&___nl__im__1);
#line 87
c_rt_lib0clear(&___nl__im__5);
#line 87
return NULL;
return NULL;

}

ImmT  profile_priv0stop(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
#line 91
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 92
___nl__int__3 = hash0size(___nl__im__1);
#line 92
___nl__int__4 = 0;
#line 92
___nl__bool__2 = ___nl__int__3 == ___nl__int__4;
#line 92
//clear ___nl__int__3;
#line 92
//clear ___nl__int__4;
#line 92
___nl__bool__2 = !___nl__bool__2;
#line 92
if(___nl__bool__2){ goto label_13;}
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__1);
#line 92
//clear ___nl__bool__2;
#line 92
return NULL;
#line 92
goto label_13;
#line 92
label_13:
;
#line 92
//clear ___nl__bool__2;
#line 93
c_rt_lib0move(&___nl__im__5, nsystem0time_microsec());
#line 94
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1309));
#line 94
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 94
c_rt_lib0clear(&___nl__im__7);
#line 94
c_rt_lib0delete(profile_priv0print_row(&___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 94
c_rt_lib0clear(&___nl__im__6);
#line 95
c_rt_lib0move(&___nl__im__8,___get_global_string_const(911));
#line 95
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__8));
#line 95
c_rt_lib0delete(array0pop(&___nl__im__8));
#line 95
c_rt_lib0move(&___nl__string__9,___get_global_string_const(911));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__9, ___nl__im__8));
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
c_rt_lib0clear(&___nl__string__9);
#line 96
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__1));
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
c_rt_lib0clear(&___nl__im__5);
#line 96
return NULL;
return NULL;

}

ImmT  profile0begin0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0begin");
ImmT  *var0 = &(_tab[0]);
ImmT  res = profile0begin(*var0);
return res;
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
return NULL;

}

ImmT  profile0end0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0end");
ImmT  *var0 = &(_tab[0]);
ImmT  res = profile0end(*var0);
return res;
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
