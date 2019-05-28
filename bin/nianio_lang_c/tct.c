
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "tct.h"
#include "hash.h"
#include "ptd.h"
#include "string.h"
#include "tct.h"
#line 1 "tct.nl"

static ImmT *__const__f = NULL;
void tct_priv0__const__init();
ImmT tct_priv0__const__sim(int __nr);
ImmT tct_priv0__const__sing(int __nr);

ImmT  tct_priv0get_fun_name(ImmT  ___nl__im__0);


ImmT  tct0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0arr");
tct0meta_type0type *var0 = &(_tab[0]);
tct0meta_type0type res = tct0arr(*var0);
return res;
}
tct0meta_type0type tct0arr(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 11
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(1), ___nl__im__0));
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
return ___nl__im__1;
return NULL;

}

ImmT  tct0own_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_arr");
tct0meta_type0type *var0 = &(_tab[0]);
tct0meta_type0type res = tct0own_arr(*var0);
return res;
}
tct0meta_type0type tct0own_arr(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 15
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(2), ___nl__im__0));
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
return ___nl__im__1;
return NULL;

}

ImmT  tct0rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0rec");
ImmT  *var0 = &(_tab[0]);
tct0meta_type0type res = tct0rec(*var0);
return res;
}
tct0meta_type0type tct0rec(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(5), ___nl__im__0));
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
return ___nl__im__1;
return NULL;

}

ImmT  tct0own_rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_rec");
ImmT  *var0 = &(_tab[0]);
tct0meta_type0type res = tct0own_rec(*var0);
return res;
}
tct0meta_type0type tct0own_rec(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 23
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(6), ___nl__im__0));
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
return ___nl__im__1;
return NULL;

}

ImmT  tct0ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0ref");
ImmT  *var0 = &(_tab[0]);
tct0meta_type0type res = tct0ref(*var0);
return res;
}
tct0meta_type0type tct0ref(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(7), ___nl__im__0));
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
return ___nl__im__1;
return NULL;

}

ImmT  tct0int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0int");
tct0meta_type0type res = tct0int();
return res;
}
ImmT tct0int(){
tct_priv0__const__init();
return tct_priv0__const__sing(0);
}
ImmT tct0int0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 31
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 31
return ___nl__im__0;
return NULL;

}

ImmT  tct0string0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0string");
tct0meta_type0type res = tct0string();
return res;
}
ImmT tct0string(){
tct_priv0__const__init();
return tct_priv0__const__sing(1);
}
ImmT tct0string0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 35
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(10)));
#line 35
return ___nl__im__0;
return NULL;

}

ImmT  tct0none0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0none");
ImmT  res = tct0none();
return res;
}
ImmT tct0none(){
tct_priv0__const__init();
return tct_priv0__const__sing(2);
}
ImmT tct0none0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 39
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1412)));
#line 39
return ___nl__im__0;
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
return NULL;
return NULL;

}

ImmT  tct0void0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0void");
tct0meta_type0type res = tct0void();
return res;
}
ImmT tct0void(){
tct_priv0__const__init();
return tct_priv0__const__sing(3);
}
ImmT tct0void0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 43
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(8)));
#line 43
return ___nl__im__0;
return NULL;

}

ImmT  tct0empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0empty");
tct0meta_type0type res = tct0empty();
return res;
}
ImmT tct0empty(){
tct_priv0__const__init();
return tct_priv0__const__sing(4);
}
ImmT tct0empty0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 47
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(14)));
#line 47
return ___nl__im__0;
return NULL;

}

ImmT  tct0hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0hash");
tct0meta_type0type *var0 = &(_tab[0]);
tct0meta_type0type res = tct0hash(*var0);
return res;
}
tct0meta_type0type tct0hash(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 51
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(3), ___nl__im__0));
#line 51
c_rt_lib0clear(&___nl__im__0);
#line 51
return ___nl__im__1;
return NULL;

}

ImmT  tct0own_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_hash");
tct0meta_type0type *var0 = &(_tab[0]);
tct0meta_type0type res = tct0own_hash(*var0);
return res;
}
tct0meta_type0type tct0own_hash(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 55
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(4), ___nl__im__0));
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
return ___nl__im__1;
return NULL;

}

ImmT  tct0tct_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0tct_im");
tct0meta_type0type res = tct0tct_im();
return res;
}
ImmT tct0tct_im(){
tct_priv0__const__init();
return tct_priv0__const__sing(5);
}
ImmT tct0tct_im0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 59
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 59
return ___nl__im__0;
return NULL;

}

ImmT  tct0bool0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0bool");
tct0meta_type0type res = tct0bool();
return res;
}
ImmT tct0bool(){
tct_priv0__const__init();
return tct_priv0__const__sing(6);
}
ImmT tct0bool0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 63
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 63
return ___nl__im__0;
return NULL;

}

ImmT  tct0func0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0func");
tct0meta_type0type res = tct0func();
return res;
}
ImmT tct0func(){
tct_priv0__const__init();
return tct_priv0__const__sing(7);
}
ImmT tct0func0cal() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 67
c_rt_lib0move(&___nl__im__2, tct0string());
#line 67
c_rt_lib0move(&___nl__im__3, tct0string());
#line 67
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__2, ___get_global_string_const(175), ___nl__im__3));
#line 67
c_rt_lib0clear(&___nl__im__2);
#line 67
c_rt_lib0clear(&___nl__im__3);
#line 67
c_rt_lib0move(&___nl__im__0, tct0rec(___nl__im__1));
#line 67
c_rt_lib0clear(&___nl__im__1);
#line 67
return ___nl__im__0;
return NULL;

}

ImmT  tct0var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0var");
ImmT  *var0 = &(_tab[0]);
tct0meta_type0type res = tct0var(*var0);
return res;
}
tct0meta_type0type tct0var(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 71
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 72
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 72
label_2:
;
#line 72
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 72
if(___nl__bool__3){ goto label_26;}
#line 72
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 72
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 74
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1412));
#line 74
___nl__bool__7 = !___nl__bool__7;
#line 74
if(___nl__bool__7){ goto label_12;}
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(28)));
#line 76
goto label_20;
#line 76
label_12:
;
#line 77
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 77
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 77
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__4));
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 77
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(27), ___nl__im__8));
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 78
goto label_20;
#line 78
label_20:
;
#line 78
//clear ___nl__bool__7;
#line 79
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 80
goto label_2;
#line 80
label_26:
;
#line 81
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(12), ___nl__im__1));
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
c_rt_lib0clear(&___nl__im__1);
#line 81
c_rt_lib0clear(&___nl__im__2);
#line 81
//clear ___nl__bool__3;
#line 81
c_rt_lib0clear(&___nl__im__4);
#line 81
c_rt_lib0clear(&___nl__im__5);
#line 81
c_rt_lib0clear(&___nl__im__6);
#line 81
return ___nl__im__10;
return NULL;

}

ImmT  tct0own_var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_var");
ImmT  *var0 = &(_tab[0]);
tct0meta_type0type res = tct0own_var(*var0);
return res;
}
tct0meta_type0type tct0own_var(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 85
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 86
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 86
label_2:
;
#line 86
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 86
if(___nl__bool__3){ goto label_26;}
#line 86
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 86
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 88
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1412));
#line 88
___nl__bool__7 = !___nl__bool__7;
#line 88
if(___nl__bool__7){ goto label_12;}
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(28)));
#line 90
goto label_20;
#line 90
label_12:
;
#line 91
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 91
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 91
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__4));
#line 91
c_rt_lib0clear(&___nl__im__9);
#line 91
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(27), ___nl__im__8));
#line 91
c_rt_lib0clear(&___nl__im__8);
#line 92
goto label_20;
#line 92
label_20:
;
#line 92
//clear ___nl__bool__7;
#line 93
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 94
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 94
goto label_2;
#line 94
label_26:
;
#line 95
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(13), ___nl__im__1));
#line 95
c_rt_lib0clear(&___nl__im__0);
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
//clear ___nl__bool__3;
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
return ___nl__im__10;
return NULL;

}

ImmT  tct0try_var_as_case0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0try_var_as_case");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = tct0try_var_as_case(*var0, *var1);
return res;
}
ImmT  tct0try_var_as_case(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
tct_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
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
#line 99
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 99
___nl__bool__2 = !___nl__bool__2;
#line 99
___nl__bool__2 = !___nl__bool__2;
#line 99
if(___nl__bool__2){ goto label_12;}
#line 99
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 99
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__4));
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 99
c_rt_lib0clear(&___nl__im__0);
#line 99
c_rt_lib0clear(&___nl__im__1);
#line 99
//clear ___nl__bool__2;
#line 99
return ___nl__im__3;
#line 99
goto label_12;
#line 99
label_12:
;
#line 99
//clear ___nl__bool__2;
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 100
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 100
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__1);
#line 100
c_rt_lib0clear(&___nl__im__6);
#line 100
___nl__bool__5 = !___nl__bool__5;
#line 100
___nl__bool__5 = !___nl__bool__5;
#line 100
if(___nl__bool__5){ goto label_29;}
#line 100
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 100
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__8));
#line 100
c_rt_lib0clear(&___nl__im__8);
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
c_rt_lib0clear(&___nl__im__1);
#line 100
//clear ___nl__bool__5;
#line 100
return ___nl__im__7;
#line 100
goto label_29;
#line 100
label_29:
;
#line 100
//clear ___nl__bool__5;
#line 100
c_rt_lib0clear(&___nl__im__7);
#line 101
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 101
c_rt_lib0move(&___nl__im__9, hash0get_value(___nl__im__10, ___nl__im__1));
#line 101
c_rt_lib0clear(&___nl__im__10);
#line 102
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(27));
#line 102
___nl__bool__11 = !___nl__bool__11;
#line 102
___nl__bool__11 = !___nl__bool__11;
#line 102
if(___nl__bool__11){ goto label_48;}
#line 102
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 102
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__13));
#line 102
c_rt_lib0clear(&___nl__im__13);
#line 102
c_rt_lib0clear(&___nl__im__0);
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
c_rt_lib0clear(&___nl__im__9);
#line 102
//clear ___nl__bool__11;
#line 102
return ___nl__im__12;
#line 102
goto label_48;
#line 102
label_48:
;
#line 102
//clear ___nl__bool__11;
#line 102
c_rt_lib0clear(&___nl__im__12);
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(27)));
#line 103
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__15));
#line 103
c_rt_lib0clear(&___nl__im__15);
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
c_rt_lib0clear(&___nl__im__9);
#line 103
return ___nl__im__14;
return NULL;

}

ImmT  tct0meta_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0meta_type");
ImmT  res = tct0meta_type();
return res;
}
ImmT tct0meta_type(){
tct_priv0__const__init();
return tct_priv0__const__sing(8);
}
ImmT tct0meta_type0cal() {
tct_priv0__const__init();
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
#line 108
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 108
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 108
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 108
c_rt_lib0clear(&___nl__im__3);
#line 109
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 109
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 109
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 109
c_rt_lib0clear(&___nl__im__5);
#line 110
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 110
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 112
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 112
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 113
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 113
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 114
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 114
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 114
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 114
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(27), ___nl__im__13, ___get_global_string_const(28), ___nl__im__14));
#line 114
c_rt_lib0clear(&___nl__im__13);
#line 114
c_rt_lib0clear(&___nl__im__14);
#line 114
c_rt_lib0move(&___nl__im__11, ptd0var(___nl__im__12));
#line 114
c_rt_lib0clear(&___nl__im__12);
#line 114
c_rt_lib0move(&___nl__im__10, ptd0hash(___nl__im__11));
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 115
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(418), ___get_global_string_const(314)));
#line 115
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__18));
#line 115
c_rt_lib0move(&___nl__im__19, ptd0none());
#line 115
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_string_const(27), ___nl__im__18, ___get_global_string_const(28), ___nl__im__19));
#line 115
c_rt_lib0clear(&___nl__im__18);
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0move(&___nl__im__16, ptd0var(___nl__im__17));
#line 115
c_rt_lib0clear(&___nl__im__17);
#line 115
c_rt_lib0move(&___nl__im__15, ptd0hash(___nl__im__16));
#line 115
c_rt_lib0clear(&___nl__im__16);
#line 116
c_rt_lib0move(&___nl__im__20, ptd0string());
#line 117
c_rt_lib0move(&___nl__im__21, ptd0none());
#line 118
c_rt_lib0move(&___nl__im__22, ptd0none());
#line 119
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 120
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__25, ptd0none());
#line 122
c_rt_lib0move(&___nl__im__26, ptd0none());
#line 122
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(15, ___get_global_string_const(5), ___nl__im__2, ___get_global_string_const(6), ___nl__im__4, ___get_global_string_const(3), ___nl__im__6, ___get_global_string_const(4), ___nl__im__7, ___get_global_string_const(1), ___nl__im__8, ___get_global_string_const(2), ___nl__im__9, ___get_global_string_const(12), ___nl__im__10, ___get_global_string_const(13), ___nl__im__15, ___get_global_string_const(7), ___nl__im__20, ___get_global_string_const(9), ___nl__im__21, ___get_global_string_const(10), ___nl__im__22, ___get_global_string_const(11), ___nl__im__23, ___get_global_string_const(14), ___nl__im__24, ___get_global_string_const(8), ___nl__im__25, ___get_global_string_const(0), ___nl__im__26));
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
c_rt_lib0clear(&___nl__im__4);
#line 122
c_rt_lib0clear(&___nl__im__6);
#line 122
c_rt_lib0clear(&___nl__im__7);
#line 122
c_rt_lib0clear(&___nl__im__8);
#line 122
c_rt_lib0clear(&___nl__im__9);
#line 122
c_rt_lib0clear(&___nl__im__10);
#line 122
c_rt_lib0clear(&___nl__im__15);
#line 122
c_rt_lib0clear(&___nl__im__20);
#line 122
c_rt_lib0clear(&___nl__im__21);
#line 122
c_rt_lib0clear(&___nl__im__22);
#line 122
c_rt_lib0clear(&___nl__im__23);
#line 122
c_rt_lib0clear(&___nl__im__24);
#line 122
c_rt_lib0clear(&___nl__im__25);
#line 122
c_rt_lib0clear(&___nl__im__26);
#line 122
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 122
c_rt_lib0clear(&___nl__im__1);
#line 122
return ___nl__im__0;
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
return NULL;
return NULL;

}

ImmT  tct0own_type_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0own_type_to_ptd");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
tct0meta_type0type res = tct0own_type_to_ptd(*var0, *var1);
return res;
}
tct0meta_type0type tct0own_type_to_ptd(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
tct_priv0__const__init();
bool  ___nl__bool__2 = false;
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
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
#line 127
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 127
if(___nl__bool__2){ goto label_33;}
#line 129
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 129
if(___nl__bool__2){ goto label_45;}
#line 135
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 135
if(___nl__bool__2){ goto label_78;}
#line 137
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 137
if(___nl__bool__2){ goto label_101;}
#line 139
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 139
if(___nl__bool__2){ goto label_129;}
#line 141
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 141
if(___nl__bool__2){ goto label_158;}
#line 143
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 143
if(___nl__bool__2){ goto label_192;}
#line 145
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 145
if(___nl__bool__2){ goto label_227;}
#line 155
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 155
if(___nl__bool__2){ goto label_310;}
#line 158
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 158
if(___nl__bool__2){ goto label_417;}
#line 160
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 160
if(___nl__bool__2){ goto label_466;}
#line 162
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 162
if(___nl__bool__2){ goto label_516;}
#line 164
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 164
if(___nl__bool__2){ goto label_567;}
#line 166
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 166
if(___nl__bool__2){ goto label_619;}
#line 168
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 168
if(___nl__bool__2){ goto label_672;}
#line 168
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 168
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 168
nl_die_arg(___nl__im__3);
#line 127
label_33:
;
#line 127
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 127
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 128
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(5), ___nl__im__4));
#line 128
c_rt_lib0clear(&___nl__im__0);
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
//clear ___nl__bool__2;
#line 128
c_rt_lib0clear(&___nl__im__3);
#line 128
c_rt_lib0clear(&___nl__im__4);
#line 128
c_rt_lib0clear(&___nl__im__5);
#line 128
return ___nl__im__6;
#line 129
goto label_726;
#line 129
label_45:
;
#line 129
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 129
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 130
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 131
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__7));
#line 131
label_50:
;
#line 131
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 131
if(___nl__bool__11){ goto label_60;}
#line 131
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 131
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__7, ___nl__im__10));
#line 132
c_rt_lib0move(&___nl__im__14, tct0own_type_to_ptd(___nl__im__12, ___nl__im__1));
#line 132
c_rt_lib0delete(hash0set_value(&___nl__im__9, ___nl__im__10, ___nl__im__14));
#line 132
c_rt_lib0clear(&___nl__im__14);
#line 133
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 133
goto label_50;
#line 133
label_60:
;
#line 134
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(5), ___nl__im__9));
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
c_rt_lib0clear(&___nl__im__1);
#line 134
//clear ___nl__bool__2;
#line 134
c_rt_lib0clear(&___nl__im__3);
#line 134
c_rt_lib0clear(&___nl__im__4);
#line 134
c_rt_lib0clear(&___nl__im__5);
#line 134
c_rt_lib0clear(&___nl__im__6);
#line 134
c_rt_lib0clear(&___nl__im__7);
#line 134
c_rt_lib0clear(&___nl__im__8);
#line 134
c_rt_lib0clear(&___nl__im__9);
#line 134
c_rt_lib0clear(&___nl__im__10);
#line 134
//clear ___nl__bool__11;
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
c_rt_lib0clear(&___nl__im__13);
#line 134
return ___nl__im__15;
#line 135
goto label_726;
#line 135
label_78:
;
#line 135
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 135
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 136
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(3), ___nl__im__16));
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
//clear ___nl__bool__2;
#line 136
c_rt_lib0clear(&___nl__im__3);
#line 136
c_rt_lib0clear(&___nl__im__4);
#line 136
c_rt_lib0clear(&___nl__im__5);
#line 136
c_rt_lib0clear(&___nl__im__6);
#line 136
c_rt_lib0clear(&___nl__im__7);
#line 136
c_rt_lib0clear(&___nl__im__8);
#line 136
c_rt_lib0clear(&___nl__im__9);
#line 136
c_rt_lib0clear(&___nl__im__10);
#line 136
//clear ___nl__bool__11;
#line 136
c_rt_lib0clear(&___nl__im__12);
#line 136
c_rt_lib0clear(&___nl__im__13);
#line 136
c_rt_lib0clear(&___nl__im__15);
#line 136
c_rt_lib0clear(&___nl__im__16);
#line 136
c_rt_lib0clear(&___nl__im__17);
#line 136
return ___nl__im__18;
#line 137
goto label_726;
#line 137
label_101:
;
#line 137
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 137
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 138
c_rt_lib0move(&___nl__im__22, tct0own_type_to_ptd(___nl__im__19, ___nl__im__1));
#line 138
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(3), ___nl__im__22));
#line 138
c_rt_lib0clear(&___nl__im__22);
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
c_rt_lib0clear(&___nl__im__1);
#line 138
//clear ___nl__bool__2;
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
c_rt_lib0clear(&___nl__im__4);
#line 138
c_rt_lib0clear(&___nl__im__5);
#line 138
c_rt_lib0clear(&___nl__im__6);
#line 138
c_rt_lib0clear(&___nl__im__7);
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
//clear ___nl__bool__11;
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0clear(&___nl__im__15);
#line 138
c_rt_lib0clear(&___nl__im__16);
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
c_rt_lib0clear(&___nl__im__18);
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
return ___nl__im__21;
#line 139
goto label_726;
#line 139
label_129:
;
#line 139
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 139
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 140
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(1), ___nl__im__23));
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
//clear ___nl__bool__2;
#line 140
c_rt_lib0clear(&___nl__im__3);
#line 140
c_rt_lib0clear(&___nl__im__4);
#line 140
c_rt_lib0clear(&___nl__im__5);
#line 140
c_rt_lib0clear(&___nl__im__6);
#line 140
c_rt_lib0clear(&___nl__im__7);
#line 140
c_rt_lib0clear(&___nl__im__8);
#line 140
c_rt_lib0clear(&___nl__im__9);
#line 140
c_rt_lib0clear(&___nl__im__10);
#line 140
//clear ___nl__bool__11;
#line 140
c_rt_lib0clear(&___nl__im__12);
#line 140
c_rt_lib0clear(&___nl__im__13);
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
c_rt_lib0clear(&___nl__im__16);
#line 140
c_rt_lib0clear(&___nl__im__17);
#line 140
c_rt_lib0clear(&___nl__im__18);
#line 140
c_rt_lib0clear(&___nl__im__19);
#line 140
c_rt_lib0clear(&___nl__im__20);
#line 140
c_rt_lib0clear(&___nl__im__21);
#line 140
c_rt_lib0clear(&___nl__im__23);
#line 140
c_rt_lib0clear(&___nl__im__24);
#line 140
return ___nl__im__25;
#line 141
goto label_726;
#line 141
label_158:
;
#line 141
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 141
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 142
c_rt_lib0move(&___nl__im__29, tct0own_type_to_ptd(___nl__im__26, ___nl__im__1));
#line 142
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(1), ___nl__im__29));
#line 142
c_rt_lib0clear(&___nl__im__29);
#line 142
c_rt_lib0clear(&___nl__im__0);
#line 142
c_rt_lib0clear(&___nl__im__1);
#line 142
//clear ___nl__bool__2;
#line 142
c_rt_lib0clear(&___nl__im__3);
#line 142
c_rt_lib0clear(&___nl__im__4);
#line 142
c_rt_lib0clear(&___nl__im__5);
#line 142
c_rt_lib0clear(&___nl__im__6);
#line 142
c_rt_lib0clear(&___nl__im__7);
#line 142
c_rt_lib0clear(&___nl__im__8);
#line 142
c_rt_lib0clear(&___nl__im__9);
#line 142
c_rt_lib0clear(&___nl__im__10);
#line 142
//clear ___nl__bool__11;
#line 142
c_rt_lib0clear(&___nl__im__12);
#line 142
c_rt_lib0clear(&___nl__im__13);
#line 142
c_rt_lib0clear(&___nl__im__15);
#line 142
c_rt_lib0clear(&___nl__im__16);
#line 142
c_rt_lib0clear(&___nl__im__17);
#line 142
c_rt_lib0clear(&___nl__im__18);
#line 142
c_rt_lib0clear(&___nl__im__19);
#line 142
c_rt_lib0clear(&___nl__im__20);
#line 142
c_rt_lib0clear(&___nl__im__21);
#line 142
c_rt_lib0clear(&___nl__im__23);
#line 142
c_rt_lib0clear(&___nl__im__24);
#line 142
c_rt_lib0clear(&___nl__im__25);
#line 142
c_rt_lib0clear(&___nl__im__26);
#line 142
c_rt_lib0clear(&___nl__im__27);
#line 142
return ___nl__im__28;
#line 143
goto label_726;
#line 143
label_192:
;
#line 143
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 143
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 144
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(12), ___nl__im__30));
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
//clear ___nl__bool__2;
#line 144
c_rt_lib0clear(&___nl__im__3);
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
//clear ___nl__bool__11;
#line 144
c_rt_lib0clear(&___nl__im__12);
#line 144
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0clear(&___nl__im__15);
#line 144
c_rt_lib0clear(&___nl__im__16);
#line 144
c_rt_lib0clear(&___nl__im__17);
#line 144
c_rt_lib0clear(&___nl__im__18);
#line 144
c_rt_lib0clear(&___nl__im__19);
#line 144
c_rt_lib0clear(&___nl__im__20);
#line 144
c_rt_lib0clear(&___nl__im__21);
#line 144
c_rt_lib0clear(&___nl__im__23);
#line 144
c_rt_lib0clear(&___nl__im__24);
#line 144
c_rt_lib0clear(&___nl__im__25);
#line 144
c_rt_lib0clear(&___nl__im__26);
#line 144
c_rt_lib0clear(&___nl__im__27);
#line 144
c_rt_lib0clear(&___nl__im__28);
#line 144
c_rt_lib0clear(&___nl__im__30);
#line 144
c_rt_lib0clear(&___nl__im__31);
#line 144
return ___nl__im__32;
#line 145
goto label_726;
#line 145
label_227:
;
#line 145
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 145
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 146
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__im__39, c_rt_lib0init_iter(___nl__im__33));
#line 147
label_232:
;
#line 147
___nl__bool__37 = c_rt_lib0is_end_hash(___nl__im__39);
#line 147
if(___nl__bool__37){ goto label_265;}
#line 147
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_key_iter(___nl__im__39));
#line 147
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value(___nl__im__33, ___nl__im__36));
#line 148
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(28));
#line 148
if(___nl__bool__40){ goto label_244;}
#line 150
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(27));
#line 150
if(___nl__bool__40){ goto label_249;}
#line 150
c_rt_lib0move(&___nl__im__41,___get_global_string_const(15));
#line 150
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(2, ___nl__im__41, ___nl__im__38));
#line 150
nl_die_arg(___nl__im__41);
#line 148
label_244:
;
#line 149
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(28)));
#line 149
c_rt_lib0delete(hash0set_value(&___nl__im__35, ___nl__im__36, ___nl__im__42));
#line 149
c_rt_lib0clear(&___nl__im__42);
#line 150
goto label_258;
#line 150
label_249:
;
#line 150
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__38, ___get_global_string_const(27)));
#line 150
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 151
c_rt_lib0move(&___nl__im__46, tct0own_type_to_ptd(___nl__im__43, ___nl__im__1));
#line 151
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(27), ___nl__im__46));
#line 151
c_rt_lib0clear(&___nl__im__46);
#line 151
c_rt_lib0delete(hash0set_value(&___nl__im__35, ___nl__im__36, ___nl__im__45));
#line 151
c_rt_lib0clear(&___nl__im__45);
#line 152
goto label_258;
#line 152
label_258:
;
#line 152
//clear ___nl__bool__40;
#line 152
c_rt_lib0clear(&___nl__im__41);
#line 152
c_rt_lib0clear(&___nl__im__43);
#line 152
c_rt_lib0clear(&___nl__im__44);
#line 153
c_rt_lib0move(&___nl__im__39, c_rt_lib0next_iter(___nl__im__39));
#line 153
goto label_232;
#line 153
label_265:
;
#line 154
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(12), ___nl__im__35));
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
c_rt_lib0clear(&___nl__im__1);
#line 154
//clear ___nl__bool__2;
#line 154
c_rt_lib0clear(&___nl__im__3);
#line 154
c_rt_lib0clear(&___nl__im__4);
#line 154
c_rt_lib0clear(&___nl__im__5);
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__8);
#line 154
c_rt_lib0clear(&___nl__im__9);
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
//clear ___nl__bool__11;
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 154
c_rt_lib0clear(&___nl__im__15);
#line 154
c_rt_lib0clear(&___nl__im__16);
#line 154
c_rt_lib0clear(&___nl__im__17);
#line 154
c_rt_lib0clear(&___nl__im__18);
#line 154
c_rt_lib0clear(&___nl__im__19);
#line 154
c_rt_lib0clear(&___nl__im__20);
#line 154
c_rt_lib0clear(&___nl__im__21);
#line 154
c_rt_lib0clear(&___nl__im__23);
#line 154
c_rt_lib0clear(&___nl__im__24);
#line 154
c_rt_lib0clear(&___nl__im__25);
#line 154
c_rt_lib0clear(&___nl__im__26);
#line 154
c_rt_lib0clear(&___nl__im__27);
#line 154
c_rt_lib0clear(&___nl__im__28);
#line 154
c_rt_lib0clear(&___nl__im__30);
#line 154
c_rt_lib0clear(&___nl__im__31);
#line 154
c_rt_lib0clear(&___nl__im__32);
#line 154
c_rt_lib0clear(&___nl__im__33);
#line 154
c_rt_lib0clear(&___nl__im__34);
#line 154
c_rt_lib0clear(&___nl__im__35);
#line 154
c_rt_lib0clear(&___nl__im__36);
#line 154
//clear ___nl__bool__37;
#line 154
c_rt_lib0clear(&___nl__im__38);
#line 154
c_rt_lib0clear(&___nl__im__39);
#line 154
//clear ___nl__bool__40;
#line 154
c_rt_lib0clear(&___nl__im__41);
#line 154
c_rt_lib0clear(&___nl__im__43);
#line 154
c_rt_lib0clear(&___nl__im__44);
#line 154
return ___nl__im__47;
#line 155
goto label_726;
#line 155
label_310:
;
#line 155
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 155
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 156
___nl__bool__50 = hash0has_key(___nl__im__1, ___nl__im__48);
#line 156
___nl__bool__50 = !___nl__bool__50;
#line 156
___nl__bool__50 = !___nl__bool__50;
#line 156
if(___nl__bool__50){ goto label_365;}
#line 156
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(7), ___nl__im__48));
#line 156
c_rt_lib0clear(&___nl__im__0);
#line 156
c_rt_lib0clear(&___nl__im__1);
#line 156
//clear ___nl__bool__2;
#line 156
c_rt_lib0clear(&___nl__im__3);
#line 156
c_rt_lib0clear(&___nl__im__4);
#line 156
c_rt_lib0clear(&___nl__im__5);
#line 156
c_rt_lib0clear(&___nl__im__6);
#line 156
c_rt_lib0clear(&___nl__im__7);
#line 156
c_rt_lib0clear(&___nl__im__8);
#line 156
c_rt_lib0clear(&___nl__im__9);
#line 156
c_rt_lib0clear(&___nl__im__10);
#line 156
//clear ___nl__bool__11;
#line 156
c_rt_lib0clear(&___nl__im__12);
#line 156
c_rt_lib0clear(&___nl__im__13);
#line 156
c_rt_lib0clear(&___nl__im__15);
#line 156
c_rt_lib0clear(&___nl__im__16);
#line 156
c_rt_lib0clear(&___nl__im__17);
#line 156
c_rt_lib0clear(&___nl__im__18);
#line 156
c_rt_lib0clear(&___nl__im__19);
#line 156
c_rt_lib0clear(&___nl__im__20);
#line 156
c_rt_lib0clear(&___nl__im__21);
#line 156
c_rt_lib0clear(&___nl__im__23);
#line 156
c_rt_lib0clear(&___nl__im__24);
#line 156
c_rt_lib0clear(&___nl__im__25);
#line 156
c_rt_lib0clear(&___nl__im__26);
#line 156
c_rt_lib0clear(&___nl__im__27);
#line 156
c_rt_lib0clear(&___nl__im__28);
#line 156
c_rt_lib0clear(&___nl__im__30);
#line 156
c_rt_lib0clear(&___nl__im__31);
#line 156
c_rt_lib0clear(&___nl__im__32);
#line 156
c_rt_lib0clear(&___nl__im__33);
#line 156
c_rt_lib0clear(&___nl__im__34);
#line 156
c_rt_lib0clear(&___nl__im__35);
#line 156
c_rt_lib0clear(&___nl__im__36);
#line 156
//clear ___nl__bool__37;
#line 156
c_rt_lib0clear(&___nl__im__38);
#line 156
c_rt_lib0clear(&___nl__im__39);
#line 156
//clear ___nl__bool__40;
#line 156
c_rt_lib0clear(&___nl__im__41);
#line 156
c_rt_lib0clear(&___nl__im__43);
#line 156
c_rt_lib0clear(&___nl__im__44);
#line 156
c_rt_lib0clear(&___nl__im__47);
#line 156
c_rt_lib0clear(&___nl__im__48);
#line 156
c_rt_lib0clear(&___nl__im__49);
#line 156
//clear ___nl__bool__50;
#line 156
return ___nl__im__51;
#line 156
goto label_365;
#line 156
label_365:
;
#line 156
//clear ___nl__bool__50;
#line 156
c_rt_lib0clear(&___nl__im__51);
#line 157
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__48));
#line 157
c_rt_lib0move(&___nl__im__52, tct0own_type_to_ptd(___nl__im__53, ___nl__im__1));
#line 157
c_rt_lib0clear(&___nl__im__53);
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
//clear ___nl__bool__2;
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
c_rt_lib0clear(&___nl__im__5);
#line 157
c_rt_lib0clear(&___nl__im__6);
#line 157
c_rt_lib0clear(&___nl__im__7);
#line 157
c_rt_lib0clear(&___nl__im__8);
#line 157
c_rt_lib0clear(&___nl__im__9);
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
//clear ___nl__bool__11;
#line 157
c_rt_lib0clear(&___nl__im__12);
#line 157
c_rt_lib0clear(&___nl__im__13);
#line 157
c_rt_lib0clear(&___nl__im__15);
#line 157
c_rt_lib0clear(&___nl__im__16);
#line 157
c_rt_lib0clear(&___nl__im__17);
#line 157
c_rt_lib0clear(&___nl__im__18);
#line 157
c_rt_lib0clear(&___nl__im__19);
#line 157
c_rt_lib0clear(&___nl__im__20);
#line 157
c_rt_lib0clear(&___nl__im__21);
#line 157
c_rt_lib0clear(&___nl__im__23);
#line 157
c_rt_lib0clear(&___nl__im__24);
#line 157
c_rt_lib0clear(&___nl__im__25);
#line 157
c_rt_lib0clear(&___nl__im__26);
#line 157
c_rt_lib0clear(&___nl__im__27);
#line 157
c_rt_lib0clear(&___nl__im__28);
#line 157
c_rt_lib0clear(&___nl__im__30);
#line 157
c_rt_lib0clear(&___nl__im__31);
#line 157
c_rt_lib0clear(&___nl__im__32);
#line 157
c_rt_lib0clear(&___nl__im__33);
#line 157
c_rt_lib0clear(&___nl__im__34);
#line 157
c_rt_lib0clear(&___nl__im__35);
#line 157
c_rt_lib0clear(&___nl__im__36);
#line 157
//clear ___nl__bool__37;
#line 157
c_rt_lib0clear(&___nl__im__38);
#line 157
c_rt_lib0clear(&___nl__im__39);
#line 157
//clear ___nl__bool__40;
#line 157
c_rt_lib0clear(&___nl__im__41);
#line 157
c_rt_lib0clear(&___nl__im__43);
#line 157
c_rt_lib0clear(&___nl__im__44);
#line 157
c_rt_lib0clear(&___nl__im__47);
#line 157
c_rt_lib0clear(&___nl__im__48);
#line 157
c_rt_lib0clear(&___nl__im__49);
#line 157
return ___nl__im__52;
#line 158
goto label_726;
#line 158
label_417:
;
#line 159
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
//clear ___nl__bool__2;
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 159
c_rt_lib0clear(&___nl__im__7);
#line 159
c_rt_lib0clear(&___nl__im__8);
#line 159
c_rt_lib0clear(&___nl__im__9);
#line 159
c_rt_lib0clear(&___nl__im__10);
#line 159
//clear ___nl__bool__11;
#line 159
c_rt_lib0clear(&___nl__im__12);
#line 159
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0clear(&___nl__im__15);
#line 159
c_rt_lib0clear(&___nl__im__16);
#line 159
c_rt_lib0clear(&___nl__im__17);
#line 159
c_rt_lib0clear(&___nl__im__18);
#line 159
c_rt_lib0clear(&___nl__im__19);
#line 159
c_rt_lib0clear(&___nl__im__20);
#line 159
c_rt_lib0clear(&___nl__im__21);
#line 159
c_rt_lib0clear(&___nl__im__23);
#line 159
c_rt_lib0clear(&___nl__im__24);
#line 159
c_rt_lib0clear(&___nl__im__25);
#line 159
c_rt_lib0clear(&___nl__im__26);
#line 159
c_rt_lib0clear(&___nl__im__27);
#line 159
c_rt_lib0clear(&___nl__im__28);
#line 159
c_rt_lib0clear(&___nl__im__30);
#line 159
c_rt_lib0clear(&___nl__im__31);
#line 159
c_rt_lib0clear(&___nl__im__32);
#line 159
c_rt_lib0clear(&___nl__im__33);
#line 159
c_rt_lib0clear(&___nl__im__34);
#line 159
c_rt_lib0clear(&___nl__im__35);
#line 159
c_rt_lib0clear(&___nl__im__36);
#line 159
//clear ___nl__bool__37;
#line 159
c_rt_lib0clear(&___nl__im__38);
#line 159
c_rt_lib0clear(&___nl__im__39);
#line 159
//clear ___nl__bool__40;
#line 159
c_rt_lib0clear(&___nl__im__41);
#line 159
c_rt_lib0clear(&___nl__im__43);
#line 159
c_rt_lib0clear(&___nl__im__44);
#line 159
c_rt_lib0clear(&___nl__im__47);
#line 159
c_rt_lib0clear(&___nl__im__48);
#line 159
c_rt_lib0clear(&___nl__im__49);
#line 159
c_rt_lib0clear(&___nl__im__52);
#line 159
return ___nl__im__54;
#line 160
goto label_726;
#line 160
label_466:
;
#line 161
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_string_const(10)));
#line 161
c_rt_lib0clear(&___nl__im__0);
#line 161
c_rt_lib0clear(&___nl__im__1);
#line 161
//clear ___nl__bool__2;
#line 161
c_rt_lib0clear(&___nl__im__3);
#line 161
c_rt_lib0clear(&___nl__im__4);
#line 161
c_rt_lib0clear(&___nl__im__5);
#line 161
c_rt_lib0clear(&___nl__im__6);
#line 161
c_rt_lib0clear(&___nl__im__7);
#line 161
c_rt_lib0clear(&___nl__im__8);
#line 161
c_rt_lib0clear(&___nl__im__9);
#line 161
c_rt_lib0clear(&___nl__im__10);
#line 161
//clear ___nl__bool__11;
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
c_rt_lib0clear(&___nl__im__15);
#line 161
c_rt_lib0clear(&___nl__im__16);
#line 161
c_rt_lib0clear(&___nl__im__17);
#line 161
c_rt_lib0clear(&___nl__im__18);
#line 161
c_rt_lib0clear(&___nl__im__19);
#line 161
c_rt_lib0clear(&___nl__im__20);
#line 161
c_rt_lib0clear(&___nl__im__21);
#line 161
c_rt_lib0clear(&___nl__im__23);
#line 161
c_rt_lib0clear(&___nl__im__24);
#line 161
c_rt_lib0clear(&___nl__im__25);
#line 161
c_rt_lib0clear(&___nl__im__26);
#line 161
c_rt_lib0clear(&___nl__im__27);
#line 161
c_rt_lib0clear(&___nl__im__28);
#line 161
c_rt_lib0clear(&___nl__im__30);
#line 161
c_rt_lib0clear(&___nl__im__31);
#line 161
c_rt_lib0clear(&___nl__im__32);
#line 161
c_rt_lib0clear(&___nl__im__33);
#line 161
c_rt_lib0clear(&___nl__im__34);
#line 161
c_rt_lib0clear(&___nl__im__35);
#line 161
c_rt_lib0clear(&___nl__im__36);
#line 161
//clear ___nl__bool__37;
#line 161
c_rt_lib0clear(&___nl__im__38);
#line 161
c_rt_lib0clear(&___nl__im__39);
#line 161
//clear ___nl__bool__40;
#line 161
c_rt_lib0clear(&___nl__im__41);
#line 161
c_rt_lib0clear(&___nl__im__43);
#line 161
c_rt_lib0clear(&___nl__im__44);
#line 161
c_rt_lib0clear(&___nl__im__47);
#line 161
c_rt_lib0clear(&___nl__im__48);
#line 161
c_rt_lib0clear(&___nl__im__49);
#line 161
c_rt_lib0clear(&___nl__im__52);
#line 161
c_rt_lib0clear(&___nl__im__54);
#line 161
return ___nl__im__55;
#line 162
goto label_726;
#line 162
label_516:
;
#line 163
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 163
c_rt_lib0clear(&___nl__im__0);
#line 163
c_rt_lib0clear(&___nl__im__1);
#line 163
//clear ___nl__bool__2;
#line 163
c_rt_lib0clear(&___nl__im__3);
#line 163
c_rt_lib0clear(&___nl__im__4);
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
c_rt_lib0clear(&___nl__im__6);
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
//clear ___nl__bool__11;
#line 163
c_rt_lib0clear(&___nl__im__12);
#line 163
c_rt_lib0clear(&___nl__im__13);
#line 163
c_rt_lib0clear(&___nl__im__15);
#line 163
c_rt_lib0clear(&___nl__im__16);
#line 163
c_rt_lib0clear(&___nl__im__17);
#line 163
c_rt_lib0clear(&___nl__im__18);
#line 163
c_rt_lib0clear(&___nl__im__19);
#line 163
c_rt_lib0clear(&___nl__im__20);
#line 163
c_rt_lib0clear(&___nl__im__21);
#line 163
c_rt_lib0clear(&___nl__im__23);
#line 163
c_rt_lib0clear(&___nl__im__24);
#line 163
c_rt_lib0clear(&___nl__im__25);
#line 163
c_rt_lib0clear(&___nl__im__26);
#line 163
c_rt_lib0clear(&___nl__im__27);
#line 163
c_rt_lib0clear(&___nl__im__28);
#line 163
c_rt_lib0clear(&___nl__im__30);
#line 163
c_rt_lib0clear(&___nl__im__31);
#line 163
c_rt_lib0clear(&___nl__im__32);
#line 163
c_rt_lib0clear(&___nl__im__33);
#line 163
c_rt_lib0clear(&___nl__im__34);
#line 163
c_rt_lib0clear(&___nl__im__35);
#line 163
c_rt_lib0clear(&___nl__im__36);
#line 163
//clear ___nl__bool__37;
#line 163
c_rt_lib0clear(&___nl__im__38);
#line 163
c_rt_lib0clear(&___nl__im__39);
#line 163
//clear ___nl__bool__40;
#line 163
c_rt_lib0clear(&___nl__im__41);
#line 163
c_rt_lib0clear(&___nl__im__43);
#line 163
c_rt_lib0clear(&___nl__im__44);
#line 163
c_rt_lib0clear(&___nl__im__47);
#line 163
c_rt_lib0clear(&___nl__im__48);
#line 163
c_rt_lib0clear(&___nl__im__49);
#line 163
c_rt_lib0clear(&___nl__im__52);
#line 163
c_rt_lib0clear(&___nl__im__54);
#line 163
c_rt_lib0clear(&___nl__im__55);
#line 163
return ___nl__im__56;
#line 164
goto label_726;
#line 164
label_567:
;
#line 165
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_string_const(14)));
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
c_rt_lib0clear(&___nl__im__1);
#line 165
//clear ___nl__bool__2;
#line 165
c_rt_lib0clear(&___nl__im__3);
#line 165
c_rt_lib0clear(&___nl__im__4);
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
c_rt_lib0clear(&___nl__im__7);
#line 165
c_rt_lib0clear(&___nl__im__8);
#line 165
c_rt_lib0clear(&___nl__im__9);
#line 165
c_rt_lib0clear(&___nl__im__10);
#line 165
//clear ___nl__bool__11;
#line 165
c_rt_lib0clear(&___nl__im__12);
#line 165
c_rt_lib0clear(&___nl__im__13);
#line 165
c_rt_lib0clear(&___nl__im__15);
#line 165
c_rt_lib0clear(&___nl__im__16);
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 165
c_rt_lib0clear(&___nl__im__18);
#line 165
c_rt_lib0clear(&___nl__im__19);
#line 165
c_rt_lib0clear(&___nl__im__20);
#line 165
c_rt_lib0clear(&___nl__im__21);
#line 165
c_rt_lib0clear(&___nl__im__23);
#line 165
c_rt_lib0clear(&___nl__im__24);
#line 165
c_rt_lib0clear(&___nl__im__25);
#line 165
c_rt_lib0clear(&___nl__im__26);
#line 165
c_rt_lib0clear(&___nl__im__27);
#line 165
c_rt_lib0clear(&___nl__im__28);
#line 165
c_rt_lib0clear(&___nl__im__30);
#line 165
c_rt_lib0clear(&___nl__im__31);
#line 165
c_rt_lib0clear(&___nl__im__32);
#line 165
c_rt_lib0clear(&___nl__im__33);
#line 165
c_rt_lib0clear(&___nl__im__34);
#line 165
c_rt_lib0clear(&___nl__im__35);
#line 165
c_rt_lib0clear(&___nl__im__36);
#line 165
//clear ___nl__bool__37;
#line 165
c_rt_lib0clear(&___nl__im__38);
#line 165
c_rt_lib0clear(&___nl__im__39);
#line 165
//clear ___nl__bool__40;
#line 165
c_rt_lib0clear(&___nl__im__41);
#line 165
c_rt_lib0clear(&___nl__im__43);
#line 165
c_rt_lib0clear(&___nl__im__44);
#line 165
c_rt_lib0clear(&___nl__im__47);
#line 165
c_rt_lib0clear(&___nl__im__48);
#line 165
c_rt_lib0clear(&___nl__im__49);
#line 165
c_rt_lib0clear(&___nl__im__52);
#line 165
c_rt_lib0clear(&___nl__im__54);
#line 165
c_rt_lib0clear(&___nl__im__55);
#line 165
c_rt_lib0clear(&___nl__im__56);
#line 165
return ___nl__im__57;
#line 166
goto label_726;
#line 166
label_619:
;
#line 167
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(8)));
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
//clear ___nl__bool__2;
#line 167
c_rt_lib0clear(&___nl__im__3);
#line 167
c_rt_lib0clear(&___nl__im__4);
#line 167
c_rt_lib0clear(&___nl__im__5);
#line 167
c_rt_lib0clear(&___nl__im__6);
#line 167
c_rt_lib0clear(&___nl__im__7);
#line 167
c_rt_lib0clear(&___nl__im__8);
#line 167
c_rt_lib0clear(&___nl__im__9);
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 167
//clear ___nl__bool__11;
#line 167
c_rt_lib0clear(&___nl__im__12);
#line 167
c_rt_lib0clear(&___nl__im__13);
#line 167
c_rt_lib0clear(&___nl__im__15);
#line 167
c_rt_lib0clear(&___nl__im__16);
#line 167
c_rt_lib0clear(&___nl__im__17);
#line 167
c_rt_lib0clear(&___nl__im__18);
#line 167
c_rt_lib0clear(&___nl__im__19);
#line 167
c_rt_lib0clear(&___nl__im__20);
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
c_rt_lib0clear(&___nl__im__23);
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 167
c_rt_lib0clear(&___nl__im__26);
#line 167
c_rt_lib0clear(&___nl__im__27);
#line 167
c_rt_lib0clear(&___nl__im__28);
#line 167
c_rt_lib0clear(&___nl__im__30);
#line 167
c_rt_lib0clear(&___nl__im__31);
#line 167
c_rt_lib0clear(&___nl__im__32);
#line 167
c_rt_lib0clear(&___nl__im__33);
#line 167
c_rt_lib0clear(&___nl__im__34);
#line 167
c_rt_lib0clear(&___nl__im__35);
#line 167
c_rt_lib0clear(&___nl__im__36);
#line 167
//clear ___nl__bool__37;
#line 167
c_rt_lib0clear(&___nl__im__38);
#line 167
c_rt_lib0clear(&___nl__im__39);
#line 167
//clear ___nl__bool__40;
#line 167
c_rt_lib0clear(&___nl__im__41);
#line 167
c_rt_lib0clear(&___nl__im__43);
#line 167
c_rt_lib0clear(&___nl__im__44);
#line 167
c_rt_lib0clear(&___nl__im__47);
#line 167
c_rt_lib0clear(&___nl__im__48);
#line 167
c_rt_lib0clear(&___nl__im__49);
#line 167
c_rt_lib0clear(&___nl__im__52);
#line 167
c_rt_lib0clear(&___nl__im__54);
#line 167
c_rt_lib0clear(&___nl__im__55);
#line 167
c_rt_lib0clear(&___nl__im__56);
#line 167
c_rt_lib0clear(&___nl__im__57);
#line 167
return ___nl__im__58;
#line 168
goto label_726;
#line 168
label_672:
;
#line 169
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 169
c_rt_lib0clear(&___nl__im__0);
#line 169
c_rt_lib0clear(&___nl__im__1);
#line 169
//clear ___nl__bool__2;
#line 169
c_rt_lib0clear(&___nl__im__3);
#line 169
c_rt_lib0clear(&___nl__im__4);
#line 169
c_rt_lib0clear(&___nl__im__5);
#line 169
c_rt_lib0clear(&___nl__im__6);
#line 169
c_rt_lib0clear(&___nl__im__7);
#line 169
c_rt_lib0clear(&___nl__im__8);
#line 169
c_rt_lib0clear(&___nl__im__9);
#line 169
c_rt_lib0clear(&___nl__im__10);
#line 169
//clear ___nl__bool__11;
#line 169
c_rt_lib0clear(&___nl__im__12);
#line 169
c_rt_lib0clear(&___nl__im__13);
#line 169
c_rt_lib0clear(&___nl__im__15);
#line 169
c_rt_lib0clear(&___nl__im__16);
#line 169
c_rt_lib0clear(&___nl__im__17);
#line 169
c_rt_lib0clear(&___nl__im__18);
#line 169
c_rt_lib0clear(&___nl__im__19);
#line 169
c_rt_lib0clear(&___nl__im__20);
#line 169
c_rt_lib0clear(&___nl__im__21);
#line 169
c_rt_lib0clear(&___nl__im__23);
#line 169
c_rt_lib0clear(&___nl__im__24);
#line 169
c_rt_lib0clear(&___nl__im__25);
#line 169
c_rt_lib0clear(&___nl__im__26);
#line 169
c_rt_lib0clear(&___nl__im__27);
#line 169
c_rt_lib0clear(&___nl__im__28);
#line 169
c_rt_lib0clear(&___nl__im__30);
#line 169
c_rt_lib0clear(&___nl__im__31);
#line 169
c_rt_lib0clear(&___nl__im__32);
#line 169
c_rt_lib0clear(&___nl__im__33);
#line 169
c_rt_lib0clear(&___nl__im__34);
#line 169
c_rt_lib0clear(&___nl__im__35);
#line 169
c_rt_lib0clear(&___nl__im__36);
#line 169
//clear ___nl__bool__37;
#line 169
c_rt_lib0clear(&___nl__im__38);
#line 169
c_rt_lib0clear(&___nl__im__39);
#line 169
//clear ___nl__bool__40;
#line 169
c_rt_lib0clear(&___nl__im__41);
#line 169
c_rt_lib0clear(&___nl__im__43);
#line 169
c_rt_lib0clear(&___nl__im__44);
#line 169
c_rt_lib0clear(&___nl__im__47);
#line 169
c_rt_lib0clear(&___nl__im__48);
#line 169
c_rt_lib0clear(&___nl__im__49);
#line 169
c_rt_lib0clear(&___nl__im__52);
#line 169
c_rt_lib0clear(&___nl__im__54);
#line 169
c_rt_lib0clear(&___nl__im__55);
#line 169
c_rt_lib0clear(&___nl__im__56);
#line 169
c_rt_lib0clear(&___nl__im__57);
#line 169
c_rt_lib0clear(&___nl__im__58);
#line 169
return ___nl__im__59;
#line 170
goto label_726;
#line 170
label_726:
;
return NULL;

}

ImmT  tct_priv0get_fun_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 174
c_rt_lib0move(&___nl__im__3,___get_global_string_const(34));
#line 174
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
___nl__int__4 = 1;
#line 174
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
//clear ___nl__int__4;
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
return ___nl__im__1;
return NULL;

}

ImmT  tct0is_own_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0is_own_type");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
bool  res = tct0is_own_type(*var0, *var1);
return c_rt_lib0bool_to_nl_native(res);
}
bool  tct0is_own_type(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
tct_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
bool  ___nl__bool__38 = false;
bool  ___nl__bool__39 = false;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
bool  ___nl__bool__43 = false;
#line 178
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 178
if(___nl__bool__2){ goto label_33;}
#line 180
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 180
if(___nl__bool__2){ goto label_45;}
#line 182
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 182
if(___nl__bool__2){ goto label_60;}
#line 184
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 184
if(___nl__bool__2){ goto label_78;}
#line 186
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 186
if(___nl__bool__2){ goto label_99;}
#line 188
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 188
if(___nl__bool__2){ goto label_123;}
#line 190
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 190
if(___nl__bool__2){ goto label_150;}
#line 192
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 192
if(___nl__bool__2){ goto label_180;}
#line 194
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 194
if(___nl__bool__2){ goto label_213;}
#line 201
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 201
if(___nl__bool__2){ goto label_337;}
#line 203
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 203
if(___nl__bool__2){ goto label_372;}
#line 205
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 205
if(___nl__bool__2){ goto label_408;}
#line 207
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 207
if(___nl__bool__2){ goto label_445;}
#line 209
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 209
if(___nl__bool__2){ goto label_483;}
#line 211
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 211
if(___nl__bool__2){ goto label_522;}
#line 211
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 211
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 211
nl_die_arg(___nl__im__3);
#line 178
label_33:
;
#line 178
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 178
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 179
___nl__bool__6 = false;
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
c_rt_lib0clear(&___nl__im__1);
#line 179
//clear ___nl__bool__2;
#line 179
c_rt_lib0clear(&___nl__im__3);
#line 179
c_rt_lib0clear(&___nl__im__4);
#line 179
c_rt_lib0clear(&___nl__im__5);
#line 179
return ___nl__bool__6;
#line 180
goto label_562;
#line 180
label_45:
;
#line 180
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 180
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 181
___nl__bool__9 = true;
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
c_rt_lib0clear(&___nl__im__1);
#line 181
//clear ___nl__bool__2;
#line 181
c_rt_lib0clear(&___nl__im__3);
#line 181
c_rt_lib0clear(&___nl__im__4);
#line 181
c_rt_lib0clear(&___nl__im__5);
#line 181
//clear ___nl__bool__6;
#line 181
c_rt_lib0clear(&___nl__im__7);
#line 181
c_rt_lib0clear(&___nl__im__8);
#line 181
return ___nl__bool__9;
#line 182
goto label_562;
#line 182
label_60:
;
#line 182
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 182
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 183
___nl__bool__12 = false;
#line 183
c_rt_lib0clear(&___nl__im__0);
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
//clear ___nl__bool__2;
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
//clear ___nl__bool__6;
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0clear(&___nl__im__8);
#line 183
//clear ___nl__bool__9;
#line 183
c_rt_lib0clear(&___nl__im__10);
#line 183
c_rt_lib0clear(&___nl__im__11);
#line 183
return ___nl__bool__12;
#line 184
goto label_562;
#line 184
label_78:
;
#line 184
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 184
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 185
___nl__bool__15 = true;
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
//clear ___nl__bool__2;
#line 185
c_rt_lib0clear(&___nl__im__3);
#line 185
c_rt_lib0clear(&___nl__im__4);
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
//clear ___nl__bool__6;
#line 185
c_rt_lib0clear(&___nl__im__7);
#line 185
c_rt_lib0clear(&___nl__im__8);
#line 185
//clear ___nl__bool__9;
#line 185
c_rt_lib0clear(&___nl__im__10);
#line 185
c_rt_lib0clear(&___nl__im__11);
#line 185
//clear ___nl__bool__12;
#line 185
c_rt_lib0clear(&___nl__im__13);
#line 185
c_rt_lib0clear(&___nl__im__14);
#line 185
return ___nl__bool__15;
#line 186
goto label_562;
#line 186
label_99:
;
#line 186
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 186
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 187
___nl__bool__18 = false;
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
//clear ___nl__bool__2;
#line 187
c_rt_lib0clear(&___nl__im__3);
#line 187
c_rt_lib0clear(&___nl__im__4);
#line 187
c_rt_lib0clear(&___nl__im__5);
#line 187
//clear ___nl__bool__6;
#line 187
c_rt_lib0clear(&___nl__im__7);
#line 187
c_rt_lib0clear(&___nl__im__8);
#line 187
//clear ___nl__bool__9;
#line 187
c_rt_lib0clear(&___nl__im__10);
#line 187
c_rt_lib0clear(&___nl__im__11);
#line 187
//clear ___nl__bool__12;
#line 187
c_rt_lib0clear(&___nl__im__13);
#line 187
c_rt_lib0clear(&___nl__im__14);
#line 187
//clear ___nl__bool__15;
#line 187
c_rt_lib0clear(&___nl__im__16);
#line 187
c_rt_lib0clear(&___nl__im__17);
#line 187
return ___nl__bool__18;
#line 188
goto label_562;
#line 188
label_123:
;
#line 188
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 188
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 189
___nl__bool__21 = true;
#line 189
c_rt_lib0clear(&___nl__im__0);
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
//clear ___nl__bool__2;
#line 189
c_rt_lib0clear(&___nl__im__3);
#line 189
c_rt_lib0clear(&___nl__im__4);
#line 189
c_rt_lib0clear(&___nl__im__5);
#line 189
//clear ___nl__bool__6;
#line 189
c_rt_lib0clear(&___nl__im__7);
#line 189
c_rt_lib0clear(&___nl__im__8);
#line 189
//clear ___nl__bool__9;
#line 189
c_rt_lib0clear(&___nl__im__10);
#line 189
c_rt_lib0clear(&___nl__im__11);
#line 189
//clear ___nl__bool__12;
#line 189
c_rt_lib0clear(&___nl__im__13);
#line 189
c_rt_lib0clear(&___nl__im__14);
#line 189
//clear ___nl__bool__15;
#line 189
c_rt_lib0clear(&___nl__im__16);
#line 189
c_rt_lib0clear(&___nl__im__17);
#line 189
//clear ___nl__bool__18;
#line 189
c_rt_lib0clear(&___nl__im__19);
#line 189
c_rt_lib0clear(&___nl__im__20);
#line 189
return ___nl__bool__21;
#line 190
goto label_562;
#line 190
label_150:
;
#line 190
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 190
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 191
___nl__bool__24 = false;
#line 191
c_rt_lib0clear(&___nl__im__0);
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
//clear ___nl__bool__2;
#line 191
c_rt_lib0clear(&___nl__im__3);
#line 191
c_rt_lib0clear(&___nl__im__4);
#line 191
c_rt_lib0clear(&___nl__im__5);
#line 191
//clear ___nl__bool__6;
#line 191
c_rt_lib0clear(&___nl__im__7);
#line 191
c_rt_lib0clear(&___nl__im__8);
#line 191
//clear ___nl__bool__9;
#line 191
c_rt_lib0clear(&___nl__im__10);
#line 191
c_rt_lib0clear(&___nl__im__11);
#line 191
//clear ___nl__bool__12;
#line 191
c_rt_lib0clear(&___nl__im__13);
#line 191
c_rt_lib0clear(&___nl__im__14);
#line 191
//clear ___nl__bool__15;
#line 191
c_rt_lib0clear(&___nl__im__16);
#line 191
c_rt_lib0clear(&___nl__im__17);
#line 191
//clear ___nl__bool__18;
#line 191
c_rt_lib0clear(&___nl__im__19);
#line 191
c_rt_lib0clear(&___nl__im__20);
#line 191
//clear ___nl__bool__21;
#line 191
c_rt_lib0clear(&___nl__im__22);
#line 191
c_rt_lib0clear(&___nl__im__23);
#line 191
return ___nl__bool__24;
#line 192
goto label_562;
#line 192
label_180:
;
#line 192
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 192
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 193
___nl__bool__27 = true;
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
//clear ___nl__bool__2;
#line 193
c_rt_lib0clear(&___nl__im__3);
#line 193
c_rt_lib0clear(&___nl__im__4);
#line 193
c_rt_lib0clear(&___nl__im__5);
#line 193
//clear ___nl__bool__6;
#line 193
c_rt_lib0clear(&___nl__im__7);
#line 193
c_rt_lib0clear(&___nl__im__8);
#line 193
//clear ___nl__bool__9;
#line 193
c_rt_lib0clear(&___nl__im__10);
#line 193
c_rt_lib0clear(&___nl__im__11);
#line 193
//clear ___nl__bool__12;
#line 193
c_rt_lib0clear(&___nl__im__13);
#line 193
c_rt_lib0clear(&___nl__im__14);
#line 193
//clear ___nl__bool__15;
#line 193
c_rt_lib0clear(&___nl__im__16);
#line 193
c_rt_lib0clear(&___nl__im__17);
#line 193
//clear ___nl__bool__18;
#line 193
c_rt_lib0clear(&___nl__im__19);
#line 193
c_rt_lib0clear(&___nl__im__20);
#line 193
//clear ___nl__bool__21;
#line 193
c_rt_lib0clear(&___nl__im__22);
#line 193
c_rt_lib0clear(&___nl__im__23);
#line 193
//clear ___nl__bool__24;
#line 193
c_rt_lib0clear(&___nl__im__25);
#line 193
c_rt_lib0clear(&___nl__im__26);
#line 193
return ___nl__bool__27;
#line 194
goto label_562;
#line 194
label_213:
;
#line 194
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 194
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 195
___nl__bool__30 = hash0has_key(___nl__im__1, ___nl__im__28);
#line 195
___nl__bool__30 = !___nl__bool__30;
#line 195
if(___nl__bool__30){ goto label_255;}
#line 196
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 196
___nl__bool__31 = tct0is_own_type(___nl__im__32, ___nl__im__1);
#line 196
c_rt_lib0clear(&___nl__im__32);
#line 196
c_rt_lib0clear(&___nl__im__0);
#line 196
c_rt_lib0clear(&___nl__im__1);
#line 196
//clear ___nl__bool__2;
#line 196
c_rt_lib0clear(&___nl__im__3);
#line 196
c_rt_lib0clear(&___nl__im__4);
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
//clear ___nl__bool__6;
#line 196
c_rt_lib0clear(&___nl__im__7);
#line 196
c_rt_lib0clear(&___nl__im__8);
#line 196
//clear ___nl__bool__9;
#line 196
c_rt_lib0clear(&___nl__im__10);
#line 196
c_rt_lib0clear(&___nl__im__11);
#line 196
//clear ___nl__bool__12;
#line 196
c_rt_lib0clear(&___nl__im__13);
#line 196
c_rt_lib0clear(&___nl__im__14);
#line 196
//clear ___nl__bool__15;
#line 196
c_rt_lib0clear(&___nl__im__16);
#line 196
c_rt_lib0clear(&___nl__im__17);
#line 196
//clear ___nl__bool__18;
#line 196
c_rt_lib0clear(&___nl__im__19);
#line 196
c_rt_lib0clear(&___nl__im__20);
#line 196
//clear ___nl__bool__21;
#line 196
c_rt_lib0clear(&___nl__im__22);
#line 196
c_rt_lib0clear(&___nl__im__23);
#line 196
//clear ___nl__bool__24;
#line 196
c_rt_lib0clear(&___nl__im__25);
#line 196
c_rt_lib0clear(&___nl__im__26);
#line 196
//clear ___nl__bool__27;
#line 196
c_rt_lib0clear(&___nl__im__28);
#line 196
c_rt_lib0clear(&___nl__im__29);
#line 196
//clear ___nl__bool__30;
#line 196
return ___nl__bool__31;
#line 197
goto label_300;
#line 197
label_255:
;
#line 197
c_rt_lib0move(&___nl__im__33, tct_priv0get_fun_name(___nl__im__28));
#line 197
___nl__bool__30 = hash0has_key(___nl__im__1, ___nl__im__33);
#line 197
c_rt_lib0clear(&___nl__im__33);
#line 197
___nl__bool__30 = !___nl__bool__30;
#line 197
if(___nl__bool__30){ goto label_300;}
#line 198
c_rt_lib0move(&___nl__im__36, tct_priv0get_fun_name(___nl__im__28));
#line 198
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__36));
#line 198
c_rt_lib0clear(&___nl__im__36);
#line 198
___nl__bool__34 = tct0is_own_type(___nl__im__35, ___nl__im__1);
#line 198
c_rt_lib0clear(&___nl__im__35);
#line 198
c_rt_lib0clear(&___nl__im__0);
#line 198
c_rt_lib0clear(&___nl__im__1);
#line 198
//clear ___nl__bool__2;
#line 198
c_rt_lib0clear(&___nl__im__3);
#line 198
c_rt_lib0clear(&___nl__im__4);
#line 198
c_rt_lib0clear(&___nl__im__5);
#line 198
//clear ___nl__bool__6;
#line 198
c_rt_lib0clear(&___nl__im__7);
#line 198
c_rt_lib0clear(&___nl__im__8);
#line 198
//clear ___nl__bool__9;
#line 198
c_rt_lib0clear(&___nl__im__10);
#line 198
c_rt_lib0clear(&___nl__im__11);
#line 198
//clear ___nl__bool__12;
#line 198
c_rt_lib0clear(&___nl__im__13);
#line 198
c_rt_lib0clear(&___nl__im__14);
#line 198
//clear ___nl__bool__15;
#line 198
c_rt_lib0clear(&___nl__im__16);
#line 198
c_rt_lib0clear(&___nl__im__17);
#line 198
//clear ___nl__bool__18;
#line 198
c_rt_lib0clear(&___nl__im__19);
#line 198
c_rt_lib0clear(&___nl__im__20);
#line 198
//clear ___nl__bool__21;
#line 198
c_rt_lib0clear(&___nl__im__22);
#line 198
c_rt_lib0clear(&___nl__im__23);
#line 198
//clear ___nl__bool__24;
#line 198
c_rt_lib0clear(&___nl__im__25);
#line 198
c_rt_lib0clear(&___nl__im__26);
#line 198
//clear ___nl__bool__27;
#line 198
c_rt_lib0clear(&___nl__im__28);
#line 198
c_rt_lib0clear(&___nl__im__29);
#line 198
//clear ___nl__bool__30;
#line 198
//clear ___nl__bool__31;
#line 198
return ___nl__bool__34;
#line 199
goto label_300;
#line 199
label_300:
;
#line 199
//clear ___nl__bool__30;
#line 199
//clear ___nl__bool__31;
#line 199
//clear ___nl__bool__34;
#line 200
___nl__bool__37 = false;
#line 200
c_rt_lib0clear(&___nl__im__0);
#line 200
c_rt_lib0clear(&___nl__im__1);
#line 200
//clear ___nl__bool__2;
#line 200
c_rt_lib0clear(&___nl__im__3);
#line 200
c_rt_lib0clear(&___nl__im__4);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 200
//clear ___nl__bool__6;
#line 200
c_rt_lib0clear(&___nl__im__7);
#line 200
c_rt_lib0clear(&___nl__im__8);
#line 200
//clear ___nl__bool__9;
#line 200
c_rt_lib0clear(&___nl__im__10);
#line 200
c_rt_lib0clear(&___nl__im__11);
#line 200
//clear ___nl__bool__12;
#line 200
c_rt_lib0clear(&___nl__im__13);
#line 200
c_rt_lib0clear(&___nl__im__14);
#line 200
//clear ___nl__bool__15;
#line 200
c_rt_lib0clear(&___nl__im__16);
#line 200
c_rt_lib0clear(&___nl__im__17);
#line 200
//clear ___nl__bool__18;
#line 200
c_rt_lib0clear(&___nl__im__19);
#line 200
c_rt_lib0clear(&___nl__im__20);
#line 200
//clear ___nl__bool__21;
#line 200
c_rt_lib0clear(&___nl__im__22);
#line 200
c_rt_lib0clear(&___nl__im__23);
#line 200
//clear ___nl__bool__24;
#line 200
c_rt_lib0clear(&___nl__im__25);
#line 200
c_rt_lib0clear(&___nl__im__26);
#line 200
//clear ___nl__bool__27;
#line 200
c_rt_lib0clear(&___nl__im__28);
#line 200
c_rt_lib0clear(&___nl__im__29);
#line 200
return ___nl__bool__37;
#line 201
goto label_562;
#line 201
label_337:
;
#line 202
___nl__bool__38 = false;
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
c_rt_lib0clear(&___nl__im__1);
#line 202
//clear ___nl__bool__2;
#line 202
c_rt_lib0clear(&___nl__im__3);
#line 202
c_rt_lib0clear(&___nl__im__4);
#line 202
c_rt_lib0clear(&___nl__im__5);
#line 202
//clear ___nl__bool__6;
#line 202
c_rt_lib0clear(&___nl__im__7);
#line 202
c_rt_lib0clear(&___nl__im__8);
#line 202
//clear ___nl__bool__9;
#line 202
c_rt_lib0clear(&___nl__im__10);
#line 202
c_rt_lib0clear(&___nl__im__11);
#line 202
//clear ___nl__bool__12;
#line 202
c_rt_lib0clear(&___nl__im__13);
#line 202
c_rt_lib0clear(&___nl__im__14);
#line 202
//clear ___nl__bool__15;
#line 202
c_rt_lib0clear(&___nl__im__16);
#line 202
c_rt_lib0clear(&___nl__im__17);
#line 202
//clear ___nl__bool__18;
#line 202
c_rt_lib0clear(&___nl__im__19);
#line 202
c_rt_lib0clear(&___nl__im__20);
#line 202
//clear ___nl__bool__21;
#line 202
c_rt_lib0clear(&___nl__im__22);
#line 202
c_rt_lib0clear(&___nl__im__23);
#line 202
//clear ___nl__bool__24;
#line 202
c_rt_lib0clear(&___nl__im__25);
#line 202
c_rt_lib0clear(&___nl__im__26);
#line 202
//clear ___nl__bool__27;
#line 202
c_rt_lib0clear(&___nl__im__28);
#line 202
c_rt_lib0clear(&___nl__im__29);
#line 202
//clear ___nl__bool__37;
#line 202
return ___nl__bool__38;
#line 203
goto label_562;
#line 203
label_372:
;
#line 204
___nl__bool__39 = false;
#line 204
c_rt_lib0clear(&___nl__im__0);
#line 204
c_rt_lib0clear(&___nl__im__1);
#line 204
//clear ___nl__bool__2;
#line 204
c_rt_lib0clear(&___nl__im__3);
#line 204
c_rt_lib0clear(&___nl__im__4);
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 204
//clear ___nl__bool__6;
#line 204
c_rt_lib0clear(&___nl__im__7);
#line 204
c_rt_lib0clear(&___nl__im__8);
#line 204
//clear ___nl__bool__9;
#line 204
c_rt_lib0clear(&___nl__im__10);
#line 204
c_rt_lib0clear(&___nl__im__11);
#line 204
//clear ___nl__bool__12;
#line 204
c_rt_lib0clear(&___nl__im__13);
#line 204
c_rt_lib0clear(&___nl__im__14);
#line 204
//clear ___nl__bool__15;
#line 204
c_rt_lib0clear(&___nl__im__16);
#line 204
c_rt_lib0clear(&___nl__im__17);
#line 204
//clear ___nl__bool__18;
#line 204
c_rt_lib0clear(&___nl__im__19);
#line 204
c_rt_lib0clear(&___nl__im__20);
#line 204
//clear ___nl__bool__21;
#line 204
c_rt_lib0clear(&___nl__im__22);
#line 204
c_rt_lib0clear(&___nl__im__23);
#line 204
//clear ___nl__bool__24;
#line 204
c_rt_lib0clear(&___nl__im__25);
#line 204
c_rt_lib0clear(&___nl__im__26);
#line 204
//clear ___nl__bool__27;
#line 204
c_rt_lib0clear(&___nl__im__28);
#line 204
c_rt_lib0clear(&___nl__im__29);
#line 204
//clear ___nl__bool__37;
#line 204
//clear ___nl__bool__38;
#line 204
return ___nl__bool__39;
#line 205
goto label_562;
#line 205
label_408:
;
#line 206
___nl__bool__40 = false;
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
c_rt_lib0clear(&___nl__im__1);
#line 206
//clear ___nl__bool__2;
#line 206
c_rt_lib0clear(&___nl__im__3);
#line 206
c_rt_lib0clear(&___nl__im__4);
#line 206
c_rt_lib0clear(&___nl__im__5);
#line 206
//clear ___nl__bool__6;
#line 206
c_rt_lib0clear(&___nl__im__7);
#line 206
c_rt_lib0clear(&___nl__im__8);
#line 206
//clear ___nl__bool__9;
#line 206
c_rt_lib0clear(&___nl__im__10);
#line 206
c_rt_lib0clear(&___nl__im__11);
#line 206
//clear ___nl__bool__12;
#line 206
c_rt_lib0clear(&___nl__im__13);
#line 206
c_rt_lib0clear(&___nl__im__14);
#line 206
//clear ___nl__bool__15;
#line 206
c_rt_lib0clear(&___nl__im__16);
#line 206
c_rt_lib0clear(&___nl__im__17);
#line 206
//clear ___nl__bool__18;
#line 206
c_rt_lib0clear(&___nl__im__19);
#line 206
c_rt_lib0clear(&___nl__im__20);
#line 206
//clear ___nl__bool__21;
#line 206
c_rt_lib0clear(&___nl__im__22);
#line 206
c_rt_lib0clear(&___nl__im__23);
#line 206
//clear ___nl__bool__24;
#line 206
c_rt_lib0clear(&___nl__im__25);
#line 206
c_rt_lib0clear(&___nl__im__26);
#line 206
//clear ___nl__bool__27;
#line 206
c_rt_lib0clear(&___nl__im__28);
#line 206
c_rt_lib0clear(&___nl__im__29);
#line 206
//clear ___nl__bool__37;
#line 206
//clear ___nl__bool__38;
#line 206
//clear ___nl__bool__39;
#line 206
return ___nl__bool__40;
#line 207
goto label_562;
#line 207
label_445:
;
#line 208
___nl__bool__41 = false;
#line 208
c_rt_lib0clear(&___nl__im__0);
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
//clear ___nl__bool__2;
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
//clear ___nl__bool__6;
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
//clear ___nl__bool__9;
#line 208
c_rt_lib0clear(&___nl__im__10);
#line 208
c_rt_lib0clear(&___nl__im__11);
#line 208
//clear ___nl__bool__12;
#line 208
c_rt_lib0clear(&___nl__im__13);
#line 208
c_rt_lib0clear(&___nl__im__14);
#line 208
//clear ___nl__bool__15;
#line 208
c_rt_lib0clear(&___nl__im__16);
#line 208
c_rt_lib0clear(&___nl__im__17);
#line 208
//clear ___nl__bool__18;
#line 208
c_rt_lib0clear(&___nl__im__19);
#line 208
c_rt_lib0clear(&___nl__im__20);
#line 208
//clear ___nl__bool__21;
#line 208
c_rt_lib0clear(&___nl__im__22);
#line 208
c_rt_lib0clear(&___nl__im__23);
#line 208
//clear ___nl__bool__24;
#line 208
c_rt_lib0clear(&___nl__im__25);
#line 208
c_rt_lib0clear(&___nl__im__26);
#line 208
//clear ___nl__bool__27;
#line 208
c_rt_lib0clear(&___nl__im__28);
#line 208
c_rt_lib0clear(&___nl__im__29);
#line 208
//clear ___nl__bool__37;
#line 208
//clear ___nl__bool__38;
#line 208
//clear ___nl__bool__39;
#line 208
//clear ___nl__bool__40;
#line 208
return ___nl__bool__41;
#line 209
goto label_562;
#line 209
label_483:
;
#line 210
___nl__bool__42 = false;
#line 210
c_rt_lib0clear(&___nl__im__0);
#line 210
c_rt_lib0clear(&___nl__im__1);
#line 210
//clear ___nl__bool__2;
#line 210
c_rt_lib0clear(&___nl__im__3);
#line 210
c_rt_lib0clear(&___nl__im__4);
#line 210
c_rt_lib0clear(&___nl__im__5);
#line 210
//clear ___nl__bool__6;
#line 210
c_rt_lib0clear(&___nl__im__7);
#line 210
c_rt_lib0clear(&___nl__im__8);
#line 210
//clear ___nl__bool__9;
#line 210
c_rt_lib0clear(&___nl__im__10);
#line 210
c_rt_lib0clear(&___nl__im__11);
#line 210
//clear ___nl__bool__12;
#line 210
c_rt_lib0clear(&___nl__im__13);
#line 210
c_rt_lib0clear(&___nl__im__14);
#line 210
//clear ___nl__bool__15;
#line 210
c_rt_lib0clear(&___nl__im__16);
#line 210
c_rt_lib0clear(&___nl__im__17);
#line 210
//clear ___nl__bool__18;
#line 210
c_rt_lib0clear(&___nl__im__19);
#line 210
c_rt_lib0clear(&___nl__im__20);
#line 210
//clear ___nl__bool__21;
#line 210
c_rt_lib0clear(&___nl__im__22);
#line 210
c_rt_lib0clear(&___nl__im__23);
#line 210
//clear ___nl__bool__24;
#line 210
c_rt_lib0clear(&___nl__im__25);
#line 210
c_rt_lib0clear(&___nl__im__26);
#line 210
//clear ___nl__bool__27;
#line 210
c_rt_lib0clear(&___nl__im__28);
#line 210
c_rt_lib0clear(&___nl__im__29);
#line 210
//clear ___nl__bool__37;
#line 210
//clear ___nl__bool__38;
#line 210
//clear ___nl__bool__39;
#line 210
//clear ___nl__bool__40;
#line 210
//clear ___nl__bool__41;
#line 210
return ___nl__bool__42;
#line 211
goto label_562;
#line 211
label_522:
;
#line 212
___nl__bool__43 = false;
#line 212
c_rt_lib0clear(&___nl__im__0);
#line 212
c_rt_lib0clear(&___nl__im__1);
#line 212
//clear ___nl__bool__2;
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
c_rt_lib0clear(&___nl__im__5);
#line 212
//clear ___nl__bool__6;
#line 212
c_rt_lib0clear(&___nl__im__7);
#line 212
c_rt_lib0clear(&___nl__im__8);
#line 212
//clear ___nl__bool__9;
#line 212
c_rt_lib0clear(&___nl__im__10);
#line 212
c_rt_lib0clear(&___nl__im__11);
#line 212
//clear ___nl__bool__12;
#line 212
c_rt_lib0clear(&___nl__im__13);
#line 212
c_rt_lib0clear(&___nl__im__14);
#line 212
//clear ___nl__bool__15;
#line 212
c_rt_lib0clear(&___nl__im__16);
#line 212
c_rt_lib0clear(&___nl__im__17);
#line 212
//clear ___nl__bool__18;
#line 212
c_rt_lib0clear(&___nl__im__19);
#line 212
c_rt_lib0clear(&___nl__im__20);
#line 212
//clear ___nl__bool__21;
#line 212
c_rt_lib0clear(&___nl__im__22);
#line 212
c_rt_lib0clear(&___nl__im__23);
#line 212
//clear ___nl__bool__24;
#line 212
c_rt_lib0clear(&___nl__im__25);
#line 212
c_rt_lib0clear(&___nl__im__26);
#line 212
//clear ___nl__bool__27;
#line 212
c_rt_lib0clear(&___nl__im__28);
#line 212
c_rt_lib0clear(&___nl__im__29);
#line 212
//clear ___nl__bool__37;
#line 212
//clear ___nl__bool__38;
#line 212
//clear ___nl__bool__39;
#line 212
//clear ___nl__bool__40;
#line 212
//clear ___nl__bool__41;
#line 212
//clear ___nl__bool__42;
#line 212
return ___nl__bool__43;
#line 213
goto label_562;
#line 213
label_562:
;
return false;

}


static ImmT ___const__[10];
static int ___const_init__ = 1;
void tct_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[9];


for(int i=0;i<9;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 9);
}}
ImmT tct_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT tct_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = tct0int0cal();
	break;
case 1:
	___const__[1] = tct0string0cal();
	break;
case 2:
	___const__[2] = tct0none0cal();
	break;
case 3:
	___const__[3] = tct0void0cal();
	break;
case 4:
	___const__[4] = tct0empty0cal();
	break;
case 5:
	___const__[5] = tct0tct_im0cal();
	break;
case 6:
	___const__[6] = tct0bool0cal();
	break;
case 7:
	___const__[7] = tct0func0cal();
	break;
case 8:
	___const__[8] = tct0meta_type0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
