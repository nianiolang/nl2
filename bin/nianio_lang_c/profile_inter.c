
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "profile_inter.h"
#include "nsystem.h"
#include "ptd.h"
#include "array.h"
#include "string.h"
#line 1 "profile_inter.nl"

static ImmT *__const__f = NULL;
void profile_inter_priv0__const__init();
ImmT profile_inter_priv0__const__sim(int __nr);
ImmT profile_inter_priv0__const__sing(int __nr);

ImmT  profile_inter_priv0print_row(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  profile_inter_priv0diff_time(ImmT  ___nl__im__0,ImmT  ___nl__im__1);


ImmT  profile_inter0row_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "profile_inter0row_t");
ImmT  res = profile_inter0row_t();
return res;
}
ImmT profile_inter0row_t(){
profile_inter_priv0__const__init();
return profile_inter_priv0__const__sing(0);
}
ImmT profile_inter0row_t0cal() {
profile_inter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 13
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 13
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 13
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 15
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 15
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 15
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(550), ___nl__im__7, ___get_global_string_const(1042), ___nl__im__8));
#line 15
c_rt_lib0clear(&___nl__im__7);
#line 15
c_rt_lib0clear(&___nl__im__8);
#line 15
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__6));
#line 15
c_rt_lib0clear(&___nl__im__6);
#line 15
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(838), ___nl__im__2, ___get_global_string_const(575), ___nl__im__4, ___get_global_string_const(204), ___nl__im__5));
#line 15
c_rt_lib0clear(&___nl__im__2);
#line 15
c_rt_lib0clear(&___nl__im__4);
#line 15
c_rt_lib0clear(&___nl__im__5);
#line 15
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 15
c_rt_lib0clear(&___nl__im__1);
#line 15
return ___nl__im__0;
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
return NULL;
return NULL;

}

ImmT  profile_inter0begin0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0begin");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = profile_inter0begin(var0, *var1);
return res;
}
ImmT  profile_inter0begin(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
profile_inter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 20
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 20
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0move(&___nl__im__5, nsystem0time_microsec());
#line 20
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 21
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(550)));
#line 21
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(575), ___nl__im__1, ___get_global_string_const(838), ___nl__im__2, ___get_global_string_const(204), ___nl__im__7));
#line 21
c_rt_lib0clear(&___nl__im__7);
#line 21
c_rt_lib0delete(array0push(___ref___im__0, ___nl__im__6));
#line 21
c_rt_lib0clear(&___nl__im__6);
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
c_rt_lib0clear(&___nl__im__2);
#line 21
return NULL;
return NULL;

}

ImmT  profile_inter0end0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0end");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = profile_inter0end(var0, *var1);
return res;
}
ImmT  profile_inter0end(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
profile_inter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 25
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 25
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0move(&___nl__im__5, nsystem0time_microsec());
#line 25
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(1042)));
#line 26
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(575), ___nl__im__1, ___get_global_string_const(838), ___nl__im__2, ___get_global_string_const(204), ___nl__im__7));
#line 26
c_rt_lib0clear(&___nl__im__7);
#line 26
c_rt_lib0delete(array0push(___ref___im__0, ___nl__im__6));
#line 26
c_rt_lib0clear(&___nl__im__6);
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
return NULL;
return NULL;

}

ImmT  profile_inter0minus0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0minus");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = profile_inter0minus(*var0, *var1);
return res;
}
ImmT  profile_inter0minus(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_inter_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
#line 30
___nl__int__3 = 0;
#line 30
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 30
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 30
//clear ___nl__int__3;
#line 30
c_rt_lib0clear(&___nl__im__4);
#line 30
___nl__int__6 = 0;
#line 30
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__6));
#line 30
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 30
___nl__int__8 = ___nl__int__7 - ___nl__int__2;
#line 30
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 30
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__6, ___nl__im__5));
#line 30
//clear ___nl__int__2;
#line 30
c_rt_lib0clear(&___nl__im__5);
#line 30
//clear ___nl__int__6;
#line 30
//clear ___nl__int__7;
#line 30
//clear ___nl__int__8;
#line 31
___nl__int__11 = 1;
#line 31
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 31
___nl__int__10 = getIntFromImm(___nl__im__12);
#line 31
//clear ___nl__int__11;
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
___nl__int__14 = 1;
#line 31
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__1, ___nl__int__14));
#line 31
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 31
//clear ___nl__int__14;
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
___nl__int__16 = ___nl__int__10 < ___nl__int__13;
#line 31
___nl__bool__9 = ___nl__int__16;
#line 31
//clear ___nl__int__10;
#line 31
//clear ___nl__int__13;
#line 31
//clear ___nl__int__16;
#line 31
___nl__bool__9 = !___nl__bool__9;
#line 31
if(___nl__bool__9){ goto label_70;}
#line 32
___nl__int__18 = 0;
#line 32
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__18));
#line 32
___nl__int__19 = 1;
#line 32
___nl__int__20 = getIntFromImm(___nl__im__17);
#line 32
___nl__int__21 = ___nl__int__20 - ___nl__int__19;
#line 32
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__21));
#line 32
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__18, ___nl__im__17));
#line 32
c_rt_lib0clear(&___nl__im__17);
#line 32
//clear ___nl__int__18;
#line 32
//clear ___nl__int__19;
#line 32
//clear ___nl__int__20;
#line 32
//clear ___nl__int__21;
#line 33
___nl__int__24 = 1000;
#line 33
___nl__int__25 = 1000;
#line 33
___nl__int__23 = ___nl__int__24 * ___nl__int__25;
#line 33
//clear ___nl__int__24;
#line 33
//clear ___nl__int__25;
#line 33
___nl__int__27 = 1;
#line 33
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__1, ___nl__int__27));
#line 33
___nl__int__26 = getIntFromImm(___nl__im__28);
#line 33
//clear ___nl__int__27;
#line 33
c_rt_lib0clear(&___nl__im__28);
#line 33
___nl__int__22 = ___nl__int__23 - ___nl__int__26;
#line 33
//clear ___nl__int__23;
#line 33
//clear ___nl__int__26;
#line 33
___nl__int__30 = 1;
#line 33
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__30));
#line 33
___nl__int__31 = getIntFromImm(___nl__im__29);
#line 33
___nl__int__32 = ___nl__int__31 + ___nl__int__22;
#line 33
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__32));
#line 33
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__30, ___nl__im__29));
#line 33
//clear ___nl__int__22;
#line 33
c_rt_lib0clear(&___nl__im__29);
#line 33
//clear ___nl__int__30;
#line 33
//clear ___nl__int__31;
#line 33
//clear ___nl__int__32;
#line 34
goto label_88;
#line 34
label_70:
;
#line 35
___nl__int__34 = 1;
#line 35
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__1, ___nl__int__34));
#line 35
___nl__int__33 = getIntFromImm(___nl__im__35);
#line 35
//clear ___nl__int__34;
#line 35
c_rt_lib0clear(&___nl__im__35);
#line 35
___nl__int__37 = 1;
#line 35
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__37));
#line 35
___nl__int__38 = getIntFromImm(___nl__im__36);
#line 35
___nl__int__39 = ___nl__int__38 - ___nl__int__33;
#line 35
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__39));
#line 35
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__37, ___nl__im__36));
#line 35
//clear ___nl__int__33;
#line 35
c_rt_lib0clear(&___nl__im__36);
#line 35
//clear ___nl__int__37;
#line 35
//clear ___nl__int__38;
#line 35
//clear ___nl__int__39;
#line 36
goto label_88;
#line 36
label_88:
;
#line 36
//clear ___nl__bool__9;
#line 37
c_rt_lib0clear(&___nl__im__1);
#line 37
return ___nl__im__0;
return NULL;

}

ImmT  profile_inter0plus0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0plus");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = profile_inter0plus(*var0, *var1);
return res;
}
ImmT  profile_inter0plus(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_inter_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
#line 41
___nl__int__3 = 0;
#line 41
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 41
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 41
//clear ___nl__int__3;
#line 41
c_rt_lib0clear(&___nl__im__4);
#line 41
___nl__int__6 = 0;
#line 41
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__6));
#line 41
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 41
___nl__int__8 = ___nl__int__7 + ___nl__int__2;
#line 41
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 41
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__6, ___nl__im__5));
#line 41
//clear ___nl__int__2;
#line 41
c_rt_lib0clear(&___nl__im__5);
#line 41
//clear ___nl__int__6;
#line 41
//clear ___nl__int__7;
#line 41
//clear ___nl__int__8;
#line 42
___nl__int__10 = 1;
#line 42
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__10));
#line 42
___nl__int__9 = getIntFromImm(___nl__im__11);
#line 42
//clear ___nl__int__10;
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
___nl__int__13 = 1;
#line 42
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__13));
#line 42
___nl__int__14 = getIntFromImm(___nl__im__12);
#line 42
___nl__int__15 = ___nl__int__14 + ___nl__int__9;
#line 42
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__15));
#line 42
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__13, ___nl__im__12));
#line 42
//clear ___nl__int__9;
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
//clear ___nl__int__13;
#line 42
//clear ___nl__int__14;
#line 42
//clear ___nl__int__15;
#line 43
___nl__int__18 = 1;
#line 43
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__0, ___nl__int__18));
#line 43
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 43
//clear ___nl__int__18;
#line 43
c_rt_lib0clear(&___nl__im__19);
#line 43
___nl__int__21 = 1000;
#line 43
___nl__int__22 = 1000;
#line 43
___nl__int__20 = ___nl__int__21 * ___nl__int__22;
#line 43
//clear ___nl__int__21;
#line 43
//clear ___nl__int__22;
#line 43
___nl__int__23 = ___nl__int__17 > ___nl__int__20;
#line 43
___nl__bool__16 = ___nl__int__23;
#line 43
//clear ___nl__int__17;
#line 43
//clear ___nl__int__20;
#line 43
//clear ___nl__int__23;
#line 43
___nl__bool__16 = !___nl__bool__16;
#line 43
if(___nl__bool__16){ goto label_78;}
#line 44
___nl__int__25 = 0;
#line 44
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__25));
#line 44
___nl__int__26 = 1;
#line 44
___nl__int__27 = getIntFromImm(___nl__im__24);
#line 44
___nl__int__28 = ___nl__int__27 + ___nl__int__26;
#line 44
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__28));
#line 44
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__25, ___nl__im__24));
#line 44
c_rt_lib0clear(&___nl__im__24);
#line 44
//clear ___nl__int__25;
#line 44
//clear ___nl__int__26;
#line 44
//clear ___nl__int__27;
#line 44
//clear ___nl__int__28;
#line 45
___nl__int__30 = 1000;
#line 45
___nl__int__31 = 1000;
#line 45
___nl__int__29 = ___nl__int__30 * ___nl__int__31;
#line 45
//clear ___nl__int__30;
#line 45
//clear ___nl__int__31;
#line 45
___nl__int__33 = 1;
#line 45
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__33));
#line 45
___nl__int__34 = getIntFromImm(___nl__im__32);
#line 45
___nl__int__35 = ___nl__int__34 - ___nl__int__29;
#line 45
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__35));
#line 45
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__33, ___nl__im__32));
#line 45
//clear ___nl__int__29;
#line 45
c_rt_lib0clear(&___nl__im__32);
#line 45
//clear ___nl__int__33;
#line 45
//clear ___nl__int__34;
#line 45
//clear ___nl__int__35;
#line 46
goto label_78;
#line 46
label_78:
;
#line 46
//clear ___nl__bool__16;
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
return ___nl__im__0;
return NULL;

}

ImmT  profile_inter0save_profile_js0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile_inter0save_profile_js");
ImmT  *var0 = &(_tab[0]);
ImmT  res = profile_inter0save_profile_js(*var0);
return res;
}
ImmT  profile_inter0save_profile_js(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_inter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
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
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 51
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 52
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 53
___nl__int__4 = 0;
#line 53
___nl__int__5 = 1;
#line 53
___nl__int__6 = c_rt_lib0array_len(___nl__im__0);
#line 53
label_5:
;
#line 53
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 53
___nl__bool__7 = ___nl__int__8;
#line 53
if(___nl__bool__7){ goto label_41;}
#line 53
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__4));
#line 53
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 54
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(838)));
#line 55
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(575)));
#line 56
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(204)));
#line 56
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(550));
#line 56
if(___nl__bool__13){ goto label_21;}
#line 59
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(1042));
#line 59
if(___nl__bool__13){ goto label_27;}
#line 59
c_rt_lib0move(&___nl__im__14,___get_global_string_const(15));
#line 59
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 59
nl_die_arg(___nl__im__14);
#line 56
label_21:
;
#line 57
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__10));
#line 58
c_rt_lib0move(&___nl__im__15, profile_inter_priv0print_row(___nl__im__2, ___nl__im__10, ___nl__im__11));
#line 58
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__15));
#line 58
c_rt_lib0clear(&___nl__im__15);
#line 59
goto label_37;
#line 59
label_27:
;
#line 60
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1205));
#line 60
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__11));
#line 60
c_rt_lib0clear(&___nl__im__18);
#line 60
c_rt_lib0move(&___nl__im__16, profile_inter_priv0print_row(___nl__im__2, ___nl__im__10, ___nl__im__17));
#line 60
c_rt_lib0clear(&___nl__im__17);
#line 60
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 60
c_rt_lib0clear(&___nl__im__16);
#line 61
c_rt_lib0delete(array0pop(&___nl__im__2));
#line 62
goto label_37;
#line 62
label_37:
;
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 63
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 63
goto label_5;
#line 63
label_41:
;
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
//clear ___nl__int__4;
#line 64
//clear ___nl__int__5;
#line 64
//clear ___nl__int__6;
#line 64
//clear ___nl__bool__7;
#line 64
//clear ___nl__int__8;
#line 64
c_rt_lib0clear(&___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 64
c_rt_lib0clear(&___nl__im__11);
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
//clear ___nl__bool__13;
#line 64
c_rt_lib0clear(&___nl__im__14);
#line 64
return ___nl__im__1;
return NULL;

}

ImmT  profile_inter_priv0print_row(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
profile_inter_priv0__const__init();
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
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
#line 68
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 69
___nl__int__5 = 0;
#line 69
___nl__int__6 = 1;
#line 69
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 69
label_4:
;
#line 69
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 69
___nl__bool__8 = ___nl__int__9;
#line 69
if(___nl__bool__8){ goto label_85;}
#line 69
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 69
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 70
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1202));
#line 70
c_rt_lib0move(&___nl__im__13, profile_inter_priv0diff_time(___nl__im__1, ___nl__im__4));
#line 70
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 70
c_rt_lib0clear(&___nl__im__12);
#line 70
c_rt_lib0clear(&___nl__im__13);
#line 71
c_rt_lib0move(&___nl__im__15,___get_global_string_const(110));
#line 71
c_rt_lib0move(&___nl__im__14, string0index2(___nl__im__11, ___nl__im__15));
#line 71
c_rt_lib0clear(&___nl__im__15);
#line 72
___nl__int__17 = string0length(___nl__im__11);
#line 72
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__17));
#line 72
//clear ___nl__int__17;
#line 73
___nl__int__19 = 1;
#line 73
___nl__int__19 = -___nl__int__19;
#line 73
___nl__int__20 = getIntFromImm(___nl__im__14);
#line 73
___nl__int__21 = ___nl__int__20 == ___nl__int__19;
#line 73
___nl__bool__18 = ___nl__int__21;
#line 73
//clear ___nl__int__19;
#line 73
//clear ___nl__int__20;
#line 73
//clear ___nl__int__21;
#line 73
___nl__bool__18 = !___nl__bool__18;
#line 73
if(___nl__bool__18){ goto label_35;}
#line 74
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1203));
#line 74
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__22));
#line 74
c_rt_lib0clear(&___nl__im__22);
#line 75
goto label_50;
#line 75
label_35:
;
#line 76
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1204));
#line 76
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__23));
#line 76
c_rt_lib0clear(&___nl__im__23);
#line 77
___nl__int__24 = 0;
#line 77
___nl__int__26 = 4;
#line 77
___nl__int__27 = getIntFromImm(___nl__im__14);
#line 77
___nl__int__25 = ___nl__int__27 + ___nl__int__26;
#line 77
//clear ___nl__int__26;
#line 77
//clear ___nl__int__27;
#line 77
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__11, ___nl__int__24, ___nl__int__25));
#line 77
//clear ___nl__int__24;
#line 77
//clear ___nl__int__25;
#line 78
c_rt_lib0copy(&___nl__im__16, ___nl__im__14);
#line 79
goto label_50;
#line 79
label_50:
;
#line 79
//clear ___nl__bool__18;
#line 80
___nl__int__32 = 7;
#line 80
___nl__int__33 = getIntFromImm(___nl__im__16);
#line 80
___nl__int__31 = ___nl__int__33 - ___nl__int__32;
#line 80
//clear ___nl__int__32;
#line 80
//clear ___nl__int__33;
#line 80
___nl__int__34 = 4;
#line 80
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__11, ___nl__int__31, ___nl__int__34));
#line 80
//clear ___nl__int__31;
#line 80
//clear ___nl__int__34;
#line 80
c_rt_lib0move(&___nl__im__35,___get_global_string_const(467));
#line 80
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__35));
#line 80
c_rt_lib0clear(&___nl__im__30);
#line 80
c_rt_lib0clear(&___nl__im__35);
#line 80
___nl__int__38 = 3;
#line 80
___nl__int__39 = getIntFromImm(___nl__im__16);
#line 80
___nl__int__37 = ___nl__int__39 - ___nl__int__38;
#line 80
//clear ___nl__int__38;
#line 80
//clear ___nl__int__39;
#line 80
___nl__int__40 = 7;
#line 80
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__11, ___nl__int__37, ___nl__int__40));
#line 80
//clear ___nl__int__37;
#line 80
//clear ___nl__int__40;
#line 80
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__36));
#line 80
c_rt_lib0clear(&___nl__im__29);
#line 80
c_rt_lib0clear(&___nl__im__36);
#line 80
c_rt_lib0move(&___nl__im__41, string0tab());
#line 80
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__28, ___nl__im__41));
#line 80
c_rt_lib0clear(&___nl__im__28);
#line 80
c_rt_lib0clear(&___nl__im__41);
#line 81
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 81
c_rt_lib0clear(&___nl__im__4);
#line 82
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 82
goto label_4;
#line 82
label_85:
;
#line 83
c_rt_lib0move(&___nl__im__42, string0tab());
#line 83
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__42));
#line 83
c_rt_lib0clear(&___nl__im__42);
#line 84
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__2));
#line 85
c_rt_lib0move(&___nl__im__43, string0lf());
#line 85
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 85
c_rt_lib0clear(&___nl__im__43);
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
//clear ___nl__int__7;
#line 86
//clear ___nl__bool__8;
#line 86
//clear ___nl__int__9;
#line 86
c_rt_lib0clear(&___nl__im__10);
#line 86
c_rt_lib0clear(&___nl__im__11);
#line 86
c_rt_lib0clear(&___nl__im__14);
#line 86
c_rt_lib0clear(&___nl__im__16);
#line 86
return ___nl__im__3;
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
c_rt_lib0clear(&___nl__im__3);
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
//clear ___nl__int__7;
#line 86
//clear ___nl__bool__8;
#line 86
//clear ___nl__int__9;
#line 86
c_rt_lib0clear(&___nl__im__10);
#line 86
c_rt_lib0clear(&___nl__im__11);
#line 86
c_rt_lib0clear(&___nl__im__14);
#line 86
c_rt_lib0clear(&___nl__im__16);
#line 86
return NULL;
return NULL;

}

ImmT  profile_inter_priv0diff_time(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_inter_priv0__const__init();
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
#line 90
___nl__int__4 = 0;
#line 90
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_get(___nl__im__0, ___nl__int__4));
#line 90
//clear ___nl__int__4;
#line 90
___nl__int__6 = 0;
#line 90
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 90
//clear ___nl__int__6;
#line 90
___nl__int__7 = getIntFromImm(___nl__im__3);
#line 90
___nl__int__8 = getIntFromImm(___nl__im__5);
#line 90
___nl__int__2 = ___nl__int__7 - ___nl__int__8;
#line 90
c_rt_lib0clear(&___nl__im__3);
#line 90
c_rt_lib0clear(&___nl__im__5);
#line 90
//clear ___nl__int__7;
#line 90
//clear ___nl__int__8;
#line 91
___nl__int__11 = 1;
#line 91
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 91
//clear ___nl__int__11;
#line 91
___nl__int__13 = 1;
#line 91
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__1, ___nl__int__13));
#line 91
//clear ___nl__int__13;
#line 91
___nl__int__14 = getIntFromImm(___nl__im__10);
#line 91
___nl__int__15 = getIntFromImm(___nl__im__12);
#line 91
___nl__int__9 = ___nl__int__14 - ___nl__int__15;
#line 91
c_rt_lib0clear(&___nl__im__10);
#line 91
c_rt_lib0clear(&___nl__im__12);
#line 91
//clear ___nl__int__14;
#line 91
//clear ___nl__int__15;
#line 92
___nl__int__17 = 0;
#line 92
___nl__int__18 = ___nl__int__9 < ___nl__int__17;
#line 92
___nl__bool__16 = ___nl__int__18;
#line 92
//clear ___nl__int__17;
#line 92
//clear ___nl__int__18;
#line 92
___nl__bool__16 = !___nl__bool__16;
#line 92
if(___nl__bool__16){ goto label_40;}
#line 93
___nl__int__19 = 1;
#line 93
___nl__int__2 = ___nl__int__2 - ___nl__int__19;
#line 93
//clear ___nl__int__19;
#line 94
___nl__int__20 = 1000000;
#line 94
___nl__int__9 = ___nl__int__9 + ___nl__int__20;
#line 94
//clear ___nl__int__20;
#line 95
goto label_40;
#line 95
label_40:
;
#line 95
//clear ___nl__bool__16;
#line 96
___nl__int__23 = 1000;
#line 96
___nl__int__22 = ___nl__int__2 * ___nl__int__23;
#line 96
//clear ___nl__int__23;
#line 96
___nl__int__25 = 1000;
#line 96
___nl__int__24 = ___nl__int__9 / ___nl__int__25;
#line 96
//clear ___nl__int__25;
#line 96
___nl__int__21 = ___nl__int__22 + ___nl__int__24;
#line 96
//clear ___nl__int__22;
#line 96
//clear ___nl__int__24;
#line 96
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__21));
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
//clear ___nl__int__2;
#line 96
//clear ___nl__int__9;
#line 96
//clear ___nl__int__21;
#line 96
return ___nl__im__26;
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
//clear ___nl__int__2;
#line 96
//clear ___nl__int__9;
#line 96
//clear ___nl__int__21;
#line 96
c_rt_lib0clear(&___nl__im__26);
#line 96
return NULL;
return NULL;

}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void profile_inter_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT profile_inter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT profile_inter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = profile_inter0row_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
