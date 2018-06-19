
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "tct.h"
#include "hash.h"
#include "ptd.h"
#include "boolean_t.h"
#include "string.h"
#include "tct.h"
#line 1 "tct.nl"

static ImmT *__const__f = NULL;
void tct_priv0__const__init();
ImmT tct_priv0__const__sim(int __nr);
ImmT tct_priv0__const__sing(int __nr);

ImmT  tct_priv0get_fun_name(ImmT  ___nl__im__0);


tct0meta_type0type tct0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0arr");
tct0meta_type0type *var0 = &(_tab[0]);
return tct0arr(*var0);
}
tct0meta_type0type tct0arr(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 12
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__0));
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
return ___nl__im__1;
}

tct0meta_type0type tct0own_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_arr");
tct0meta_type0type *var0 = &(_tab[0]);
return tct0own_arr(*var0);
}
tct0meta_type0type tct0own_arr(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 16
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(2), ___nl__im__0));
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
return ___nl__im__1;
}

tct0meta_type0type tct0rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0rec");
ImmT  *var0 = &(_tab[0]);
return tct0rec(*var0);
}
tct0meta_type0type tct0rec(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__im__0));
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
return ___nl__im__1;
}

tct0meta_type0type tct0own_rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_rec");
ImmT  *var0 = &(_tab[0]);
return tct0own_rec(*var0);
}
tct0meta_type0type tct0own_rec(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(6), ___nl__im__0));
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
return ___nl__im__1;
}

tct0meta_type0type tct0ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0ref");
ImmT  *var0 = &(_tab[0]);
return tct0ref(*var0);
}
tct0meta_type0type tct0ref(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 28
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(7), ___nl__im__0));
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
return ___nl__im__1;
}

tct0meta_type0type tct0int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0int");
return tct0int();
}
tct0meta_type0type tct0int() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 32
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 32
return ___nl__im__0;
}

tct0meta_type0type tct0string0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0string");
return tct0string();
}
tct0meta_type0type tct0string() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 36
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(11)));
#line 36
return ___nl__im__0;
}

ImmT  tct0none0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0none");
return tct0none();
}
ImmT  tct0none() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 40
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(1203)));
#line 40
return ___nl__im__0;
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
return NULL;
}

tct0meta_type0type tct0void0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0void");
return tct0void();
}
tct0meta_type0type tct0void() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 44
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 44
return ___nl__im__0;
}

tct0meta_type0type tct0empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0empty");
return tct0empty();
}
tct0meta_type0type tct0empty() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 48
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 48
return ___nl__im__0;
}

tct0meta_type0type tct0hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0hash");
tct0meta_type0type *var0 = &(_tab[0]);
return tct0hash(*var0);
}
tct0meta_type0type tct0hash(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 52
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(3), ___nl__im__0));
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
return ___nl__im__1;
}

tct0meta_type0type tct0own_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_hash");
tct0meta_type0type *var0 = &(_tab[0]);
return tct0own_hash(*var0);
}
tct0meta_type0type tct0own_hash(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 56
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(4), ___nl__im__0));
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
return ___nl__im__1;
}

tct0meta_type0type tct0tct_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0tct_im");
return tct0tct_im();
}
tct0meta_type0type tct0tct_im() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 60
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 60
return ___nl__im__0;
}

tct0meta_type0type tct0bool0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0bool");
return tct0bool();
}
tct0meta_type0type tct0bool() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 64
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 64
return ___nl__im__0;
}

tct0meta_type0type tct0func0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0func");
return tct0func();
}
tct0meta_type0type tct0func() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 68
c_rt_lib0move(&___nl__im__2, tct0string());
#line 68
c_rt_lib0move(&___nl__im__3, tct0string());
#line 68
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__im__2, ___get_global_const(168), ___nl__im__3));
#line 68
c_rt_lib0clear(&___nl__im__2);
#line 68
c_rt_lib0clear(&___nl__im__3);
#line 68
c_rt_lib0move(&___nl__im__0, tct0rec(___nl__im__1));
#line 68
c_rt_lib0clear(&___nl__im__1);
#line 68
return ___nl__im__0;
}

tct0meta_type0type tct0var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0var");
ImmT  *var0 = &(_tab[0]);
return tct0var(*var0);
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
#line 72
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 73
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 73
label_3:
;
#line 73
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 73
if(___nl__bool__3){ goto label_1;}
#line 73
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 73
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 75
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(1203));
#line 75
___nl__bool__7 = !___nl__bool__7;
#line 75
if(___nl__bool__7){ goto label_5;}
#line 76
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 77
goto label_4;
#line 77
label_5:
;
#line 78
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 78
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 78
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__4));
#line 78
c_rt_lib0clear(&___nl__im__9);
#line 78
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(28), ___nl__im__8));
#line 78
c_rt_lib0clear(&___nl__im__8);
#line 79
goto label_4;
#line 79
label_4:
;
#line 79
//clear ___nl__bool__7;
#line 80
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
label_2:
;
#line 81
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 81
goto label_3;
#line 81
label_1:
;
#line 82
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(13), ___nl__im__1));
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
c_rt_lib0clear(&___nl__im__1);
#line 82
c_rt_lib0clear(&___nl__im__2);
#line 82
//clear ___nl__bool__3;
#line 82
c_rt_lib0clear(&___nl__im__4);
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0clear(&___nl__im__6);
#line 82
return ___nl__im__10;
}

tct0meta_type0type tct0own_var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0own_var");
ImmT  *var0 = &(_tab[0]);
return tct0own_var(*var0);
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
#line 86
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 87
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 87
label_3:
;
#line 87
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 87
if(___nl__bool__3){ goto label_1;}
#line 87
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 87
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 89
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(1203));
#line 89
___nl__bool__7 = !___nl__bool__7;
#line 89
if(___nl__bool__7){ goto label_5;}
#line 90
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 91
goto label_4;
#line 91
label_5:
;
#line 92
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 92
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 92
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__4));
#line 92
c_rt_lib0clear(&___nl__im__9);
#line 92
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(28), ___nl__im__8));
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 93
goto label_4;
#line 93
label_4:
;
#line 93
//clear ___nl__bool__7;
#line 94
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 94
c_rt_lib0clear(&___nl__im__6);
#line 94
label_2:
;
#line 95
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 95
goto label_3;
#line 95
label_1:
;
#line 96
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(14), ___nl__im__1));
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
c_rt_lib0clear(&___nl__im__2);
#line 96
//clear ___nl__bool__3;
#line 96
c_rt_lib0clear(&___nl__im__4);
#line 96
c_rt_lib0clear(&___nl__im__5);
#line 96
c_rt_lib0clear(&___nl__im__6);
#line 96
return ___nl__im__10;
}

ImmT  tct0try_var_as_case0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0try_var_as_case");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return tct0try_var_as_case(*var0, *var1);
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
#line 100
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 100
___nl__bool__2 = !___nl__bool__2;
#line 100
___nl__bool__2 = !___nl__bool__2;
#line 100
if(___nl__bool__2){ goto label_2;}
#line 100
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 100
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__4));
#line 100
c_rt_lib0clear(&___nl__im__4);
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
c_rt_lib0clear(&___nl__im__1);
#line 100
//clear ___nl__bool__2;
#line 100
return ___nl__im__3;
#line 100
goto label_1;
#line 100
label_2:
;
#line 100
label_1:
;
#line 100
//clear ___nl__bool__2;
#line 100
c_rt_lib0clear(&___nl__im__3);
#line 101
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 101
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__1);
#line 101
c_rt_lib0clear(&___nl__im__6);
#line 101
___nl__bool__5 = !___nl__bool__5;
#line 101
___nl__bool__5 = !___nl__bool__5;
#line 101
if(___nl__bool__5){ goto label_4;}
#line 101
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 101
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__8));
#line 101
c_rt_lib0clear(&___nl__im__8);
#line 101
c_rt_lib0clear(&___nl__im__0);
#line 101
c_rt_lib0clear(&___nl__im__1);
#line 101
//clear ___nl__bool__5;
#line 101
return ___nl__im__7;
#line 101
goto label_3;
#line 101
label_4:
;
#line 101
label_3:
;
#line 101
//clear ___nl__bool__5;
#line 101
c_rt_lib0clear(&___nl__im__7);
#line 102
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 102
c_rt_lib0move(&___nl__im__9, hash0get_value(___nl__im__10, ___nl__im__1));
#line 102
c_rt_lib0clear(&___nl__im__10);
#line 103
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(28));
#line 103
___nl__bool__11 = !___nl__bool__11;
#line 103
___nl__bool__11 = !___nl__bool__11;
#line 103
if(___nl__bool__11){ goto label_6;}
#line 103
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 103
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__13));
#line 103
c_rt_lib0clear(&___nl__im__13);
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
c_rt_lib0clear(&___nl__im__9);
#line 103
//clear ___nl__bool__11;
#line 103
return ___nl__im__12;
#line 103
goto label_5;
#line 103
label_6:
;
#line 103
label_5:
;
#line 103
//clear ___nl__bool__11;
#line 103
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(28)));
#line 104
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__15));
#line 104
c_rt_lib0clear(&___nl__im__15);
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__9);
#line 104
return ___nl__im__14;
}

ImmT  tct0meta_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0meta_type");
return tct0meta_type();
}
ImmT  tct0meta_type() {
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
ImmT  ___nl__im__27 = NULL;
#line 109
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 109
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 109
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 109
c_rt_lib0clear(&___nl__im__3);
#line 110
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 110
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 110
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 110
c_rt_lib0clear(&___nl__im__5);
#line 111
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 111
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 112
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 112
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 113
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 113
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 114
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 114
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 115
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 115
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 115
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 115
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(28), ___nl__im__13, ___get_global_const(29), ___nl__im__14));
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
c_rt_lib0move(&___nl__im__11, ptd0var(___nl__im__12));
#line 115
c_rt_lib0clear(&___nl__im__12);
#line 115
c_rt_lib0move(&___nl__im__10, ptd0hash(___nl__im__11));
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 116
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 116
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__18));
#line 116
c_rt_lib0move(&___nl__im__19, ptd0none());
#line 116
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(28), ___nl__im__18, ___get_global_const(29), ___nl__im__19));
#line 116
c_rt_lib0clear(&___nl__im__18);
#line 116
c_rt_lib0clear(&___nl__im__19);
#line 116
c_rt_lib0move(&___nl__im__16, ptd0var(___nl__im__17));
#line 116
c_rt_lib0clear(&___nl__im__17);
#line 116
c_rt_lib0move(&___nl__im__15, ptd0hash(___nl__im__16));
#line 116
c_rt_lib0clear(&___nl__im__16);
#line 117
c_rt_lib0move(&___nl__im__20, ptd0string());
#line 118
c_rt_lib0move(&___nl__im__21, ptd0none());
#line 119
c_rt_lib0move(&___nl__im__22, ptd0none());
#line 120
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 122
c_rt_lib0move(&___nl__im__25, ptd0none());
#line 123
c_rt_lib0move(&___nl__im__26, ptd0none());
#line 124
c_rt_lib0move(&___nl__im__27, ptd0none());
#line 124
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(16, ___get_global_const(5), ___nl__im__2, ___get_global_const(6), ___nl__im__4, ___get_global_const(3), ___nl__im__6, ___get_global_const(4), ___nl__im__7, ___get_global_const(1), ___nl__im__8, ___get_global_const(2), ___nl__im__9, ___get_global_const(13), ___nl__im__10, ___get_global_const(14), ___nl__im__15, ___get_global_const(7), ___nl__im__20, ___get_global_const(9), ___nl__im__21, ___get_global_const(10), ___nl__im__22, ___get_global_const(11), ___nl__im__23, ___get_global_const(12), ___nl__im__24, ___get_global_const(15), ___nl__im__25, ___get_global_const(8), ___nl__im__26, ___get_global_const(0), ___nl__im__27));
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
c_rt_lib0clear(&___nl__im__4);
#line 124
c_rt_lib0clear(&___nl__im__6);
#line 124
c_rt_lib0clear(&___nl__im__7);
#line 124
c_rt_lib0clear(&___nl__im__8);
#line 124
c_rt_lib0clear(&___nl__im__9);
#line 124
c_rt_lib0clear(&___nl__im__10);
#line 124
c_rt_lib0clear(&___nl__im__15);
#line 124
c_rt_lib0clear(&___nl__im__20);
#line 124
c_rt_lib0clear(&___nl__im__21);
#line 124
c_rt_lib0clear(&___nl__im__22);
#line 124
c_rt_lib0clear(&___nl__im__23);
#line 124
c_rt_lib0clear(&___nl__im__24);
#line 124
c_rt_lib0clear(&___nl__im__25);
#line 124
c_rt_lib0clear(&___nl__im__26);
#line 124
c_rt_lib0clear(&___nl__im__27);
#line 124
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 124
c_rt_lib0clear(&___nl__im__1);
#line 124
return ___nl__im__0;
#line 124
c_rt_lib0clear(&___nl__im__0);
#line 124
return NULL;
}

tct0meta_type0type tct0own_type_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0own_type_to_ptd");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return tct0own_type_to_ptd(*var0, *var1);
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
ImmT  ___nl__im__60 = NULL;
#line 129
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 129
if(___nl__bool__2){ goto label_2;}
#line 131
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 131
if(___nl__bool__2){ goto label_3;}
#line 137
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 137
if(___nl__bool__2){ goto label_4;}
#line 139
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 139
if(___nl__bool__2){ goto label_5;}
#line 141
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 141
if(___nl__bool__2){ goto label_6;}
#line 143
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 143
if(___nl__bool__2){ goto label_7;}
#line 145
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 145
if(___nl__bool__2){ goto label_8;}
#line 147
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 147
if(___nl__bool__2){ goto label_9;}
#line 157
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 157
if(___nl__bool__2){ goto label_10;}
#line 160
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 160
if(___nl__bool__2){ goto label_11;}
#line 162
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 162
if(___nl__bool__2){ goto label_12;}
#line 164
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 164
if(___nl__bool__2){ goto label_13;}
#line 166
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 166
if(___nl__bool__2){ goto label_14;}
#line 168
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 168
if(___nl__bool__2){ goto label_15;}
#line 170
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 170
if(___nl__bool__2){ goto label_16;}
#line 172
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 172
if(___nl__bool__2){ goto label_17;}
#line 172
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 172
nl_die_arg(___nl__im__3);
#line 129
label_2:
;
#line 129
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 129
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 130
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__im__4));
#line 130
c_rt_lib0clear(&___nl__im__0);
#line 130
c_rt_lib0clear(&___nl__im__1);
#line 130
//clear ___nl__bool__2;
#line 130
c_rt_lib0clear(&___nl__im__3);
#line 130
c_rt_lib0clear(&___nl__im__4);
#line 130
c_rt_lib0clear(&___nl__im__5);
#line 130
return ___nl__im__6;
#line 131
goto label_1;
#line 131
label_3:
;
#line 131
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 131
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 132
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 133
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__7));
#line 133
label_20:
;
#line 133
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 133
if(___nl__bool__11){ goto label_18;}
#line 133
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 133
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__7, ___nl__im__10));
#line 134
c_rt_lib0move(&___nl__im__14, tct0own_type_to_ptd(___nl__im__12, ___nl__im__1));
#line 134
c_rt_lib0delete(hash0set_value(&___nl__im__9, ___nl__im__10, ___nl__im__14));
#line 134
c_rt_lib0clear(&___nl__im__14);
#line 134
label_19:
;
#line 135
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 135
goto label_20;
#line 135
label_18:
;
#line 136
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__im__9));
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
return ___nl__im__15;
#line 137
goto label_1;
#line 137
label_4:
;
#line 137
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 137
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 138
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(3), ___nl__im__16));
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
return ___nl__im__18;
#line 139
goto label_1;
#line 139
label_5:
;
#line 139
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 139
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 140
c_rt_lib0move(&___nl__im__22, tct0own_type_to_ptd(___nl__im__19, ___nl__im__1));
#line 140
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(3), ___nl__im__22));
#line 140
c_rt_lib0clear(&___nl__im__22);
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
return ___nl__im__21;
#line 141
goto label_1;
#line 141
label_6:
;
#line 141
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 141
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 142
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__23));
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
return ___nl__im__25;
#line 143
goto label_1;
#line 143
label_7:
;
#line 143
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 143
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 144
c_rt_lib0move(&___nl__im__29, tct0own_type_to_ptd(___nl__im__26, ___nl__im__1));
#line 144
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__29));
#line 144
c_rt_lib0clear(&___nl__im__29);
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
return ___nl__im__28;
#line 145
goto label_1;
#line 145
label_8:
;
#line 145
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 145
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 146
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(13), ___nl__im__30));
#line 146
c_rt_lib0clear(&___nl__im__0);
#line 146
c_rt_lib0clear(&___nl__im__1);
#line 146
//clear ___nl__bool__2;
#line 146
c_rt_lib0clear(&___nl__im__3);
#line 146
c_rt_lib0clear(&___nl__im__4);
#line 146
c_rt_lib0clear(&___nl__im__5);
#line 146
c_rt_lib0clear(&___nl__im__6);
#line 146
c_rt_lib0clear(&___nl__im__7);
#line 146
c_rt_lib0clear(&___nl__im__8);
#line 146
c_rt_lib0clear(&___nl__im__9);
#line 146
c_rt_lib0clear(&___nl__im__10);
#line 146
//clear ___nl__bool__11;
#line 146
c_rt_lib0clear(&___nl__im__12);
#line 146
c_rt_lib0clear(&___nl__im__13);
#line 146
c_rt_lib0clear(&___nl__im__15);
#line 146
c_rt_lib0clear(&___nl__im__16);
#line 146
c_rt_lib0clear(&___nl__im__17);
#line 146
c_rt_lib0clear(&___nl__im__18);
#line 146
c_rt_lib0clear(&___nl__im__19);
#line 146
c_rt_lib0clear(&___nl__im__20);
#line 146
c_rt_lib0clear(&___nl__im__21);
#line 146
c_rt_lib0clear(&___nl__im__23);
#line 146
c_rt_lib0clear(&___nl__im__24);
#line 146
c_rt_lib0clear(&___nl__im__25);
#line 146
c_rt_lib0clear(&___nl__im__26);
#line 146
c_rt_lib0clear(&___nl__im__27);
#line 146
c_rt_lib0clear(&___nl__im__28);
#line 146
c_rt_lib0clear(&___nl__im__30);
#line 146
c_rt_lib0clear(&___nl__im__31);
#line 146
return ___nl__im__32;
#line 147
goto label_1;
#line 147
label_9:
;
#line 147
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 147
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 148
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(0));
#line 149
c_rt_lib0move(&___nl__im__39, c_rt_lib0init_iter(___nl__im__33));
#line 149
label_23:
;
#line 149
___nl__bool__37 = c_rt_lib0is_end_hash(___nl__im__39);
#line 149
if(___nl__bool__37){ goto label_21;}
#line 149
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_key_iter(___nl__im__39));
#line 149
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value(___nl__im__33, ___nl__im__36));
#line 150
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(29));
#line 150
if(___nl__bool__40){ goto label_25;}
#line 152
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(28));
#line 152
if(___nl__bool__40){ goto label_26;}
#line 152
c_rt_lib0move(&___nl__im__41,___get_global_const(16));
#line 152
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(2, ___nl__im__41, ___nl__im__38));
#line 152
nl_die_arg(___nl__im__41);
#line 150
label_25:
;
#line 151
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 151
c_rt_lib0delete(hash0set_value(&___nl__im__35, ___nl__im__36, ___nl__im__42));
#line 151
c_rt_lib0clear(&___nl__im__42);
#line 152
goto label_24;
#line 152
label_26:
;
#line 152
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__38, ___get_global_const(28)));
#line 152
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 153
c_rt_lib0move(&___nl__im__46, tct0own_type_to_ptd(___nl__im__43, ___nl__im__1));
#line 153
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(28), ___nl__im__46));
#line 153
c_rt_lib0clear(&___nl__im__46);
#line 153
c_rt_lib0delete(hash0set_value(&___nl__im__35, ___nl__im__36, ___nl__im__45));
#line 153
c_rt_lib0clear(&___nl__im__45);
#line 154
goto label_24;
#line 154
label_24:
;
#line 154
//clear ___nl__bool__40;
#line 154
c_rt_lib0clear(&___nl__im__41);
#line 154
c_rt_lib0clear(&___nl__im__43);
#line 154
c_rt_lib0clear(&___nl__im__44);
#line 154
label_22:
;
#line 155
c_rt_lib0move(&___nl__im__39, c_rt_lib0next_iter(___nl__im__39));
#line 155
goto label_23;
#line 155
label_21:
;
#line 156
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(13), ___nl__im__35));
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
return ___nl__im__47;
#line 157
goto label_1;
#line 157
label_10:
;
#line 157
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 157
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 158
___nl__bool__50 = hash0has_key(___nl__im__1, ___nl__im__48);
#line 158
___nl__bool__50 = !___nl__bool__50;
#line 158
___nl__bool__50 = !___nl__bool__50;
#line 158
if(___nl__bool__50){ goto label_28;}
#line 158
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_const(7), ___nl__im__48));
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
//clear ___nl__bool__2;
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
c_rt_lib0clear(&___nl__im__4);
#line 158
c_rt_lib0clear(&___nl__im__5);
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 158
c_rt_lib0clear(&___nl__im__7);
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
c_rt_lib0clear(&___nl__im__9);
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
//clear ___nl__bool__11;
#line 158
c_rt_lib0clear(&___nl__im__12);
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 158
c_rt_lib0clear(&___nl__im__15);
#line 158
c_rt_lib0clear(&___nl__im__16);
#line 158
c_rt_lib0clear(&___nl__im__17);
#line 158
c_rt_lib0clear(&___nl__im__18);
#line 158
c_rt_lib0clear(&___nl__im__19);
#line 158
c_rt_lib0clear(&___nl__im__20);
#line 158
c_rt_lib0clear(&___nl__im__21);
#line 158
c_rt_lib0clear(&___nl__im__23);
#line 158
c_rt_lib0clear(&___nl__im__24);
#line 158
c_rt_lib0clear(&___nl__im__25);
#line 158
c_rt_lib0clear(&___nl__im__26);
#line 158
c_rt_lib0clear(&___nl__im__27);
#line 158
c_rt_lib0clear(&___nl__im__28);
#line 158
c_rt_lib0clear(&___nl__im__30);
#line 158
c_rt_lib0clear(&___nl__im__31);
#line 158
c_rt_lib0clear(&___nl__im__32);
#line 158
c_rt_lib0clear(&___nl__im__33);
#line 158
c_rt_lib0clear(&___nl__im__34);
#line 158
c_rt_lib0clear(&___nl__im__35);
#line 158
c_rt_lib0clear(&___nl__im__36);
#line 158
//clear ___nl__bool__37;
#line 158
c_rt_lib0clear(&___nl__im__38);
#line 158
c_rt_lib0clear(&___nl__im__39);
#line 158
//clear ___nl__bool__40;
#line 158
c_rt_lib0clear(&___nl__im__41);
#line 158
c_rt_lib0clear(&___nl__im__43);
#line 158
c_rt_lib0clear(&___nl__im__44);
#line 158
c_rt_lib0clear(&___nl__im__47);
#line 158
c_rt_lib0clear(&___nl__im__48);
#line 158
c_rt_lib0clear(&___nl__im__49);
#line 158
//clear ___nl__bool__50;
#line 158
return ___nl__im__51;
#line 158
goto label_27;
#line 158
label_28:
;
#line 158
label_27:
;
#line 158
//clear ___nl__bool__50;
#line 158
c_rt_lib0clear(&___nl__im__51);
#line 159
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__48));
#line 159
c_rt_lib0move(&___nl__im__52, tct0own_type_to_ptd(___nl__im__53, ___nl__im__1));
#line 159
c_rt_lib0clear(&___nl__im__53);
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
return ___nl__im__52;
#line 160
goto label_1;
#line 160
label_11:
;
#line 161
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_const(9)));
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
return ___nl__im__54;
#line 162
goto label_1;
#line 162
label_12:
;
#line 163
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(10)));
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
return ___nl__im__55;
#line 164
goto label_1;
#line 164
label_13:
;
#line 165
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_none(___get_global_const(11)));
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
return ___nl__im__56;
#line 166
goto label_1;
#line 166
label_14:
;
#line 167
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_const(12)));
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
return ___nl__im__57;
#line 168
goto label_1;
#line 168
label_15:
;
#line 169
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_const(15)));
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
return ___nl__im__58;
#line 170
goto label_1;
#line 170
label_16:
;
#line 171
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 171
c_rt_lib0clear(&___nl__im__0);
#line 171
c_rt_lib0clear(&___nl__im__1);
#line 171
//clear ___nl__bool__2;
#line 171
c_rt_lib0clear(&___nl__im__3);
#line 171
c_rt_lib0clear(&___nl__im__4);
#line 171
c_rt_lib0clear(&___nl__im__5);
#line 171
c_rt_lib0clear(&___nl__im__6);
#line 171
c_rt_lib0clear(&___nl__im__7);
#line 171
c_rt_lib0clear(&___nl__im__8);
#line 171
c_rt_lib0clear(&___nl__im__9);
#line 171
c_rt_lib0clear(&___nl__im__10);
#line 171
//clear ___nl__bool__11;
#line 171
c_rt_lib0clear(&___nl__im__12);
#line 171
c_rt_lib0clear(&___nl__im__13);
#line 171
c_rt_lib0clear(&___nl__im__15);
#line 171
c_rt_lib0clear(&___nl__im__16);
#line 171
c_rt_lib0clear(&___nl__im__17);
#line 171
c_rt_lib0clear(&___nl__im__18);
#line 171
c_rt_lib0clear(&___nl__im__19);
#line 171
c_rt_lib0clear(&___nl__im__20);
#line 171
c_rt_lib0clear(&___nl__im__21);
#line 171
c_rt_lib0clear(&___nl__im__23);
#line 171
c_rt_lib0clear(&___nl__im__24);
#line 171
c_rt_lib0clear(&___nl__im__25);
#line 171
c_rt_lib0clear(&___nl__im__26);
#line 171
c_rt_lib0clear(&___nl__im__27);
#line 171
c_rt_lib0clear(&___nl__im__28);
#line 171
c_rt_lib0clear(&___nl__im__30);
#line 171
c_rt_lib0clear(&___nl__im__31);
#line 171
c_rt_lib0clear(&___nl__im__32);
#line 171
c_rt_lib0clear(&___nl__im__33);
#line 171
c_rt_lib0clear(&___nl__im__34);
#line 171
c_rt_lib0clear(&___nl__im__35);
#line 171
c_rt_lib0clear(&___nl__im__36);
#line 171
//clear ___nl__bool__37;
#line 171
c_rt_lib0clear(&___nl__im__38);
#line 171
c_rt_lib0clear(&___nl__im__39);
#line 171
//clear ___nl__bool__40;
#line 171
c_rt_lib0clear(&___nl__im__41);
#line 171
c_rt_lib0clear(&___nl__im__43);
#line 171
c_rt_lib0clear(&___nl__im__44);
#line 171
c_rt_lib0clear(&___nl__im__47);
#line 171
c_rt_lib0clear(&___nl__im__48);
#line 171
c_rt_lib0clear(&___nl__im__49);
#line 171
c_rt_lib0clear(&___nl__im__52);
#line 171
c_rt_lib0clear(&___nl__im__54);
#line 171
c_rt_lib0clear(&___nl__im__55);
#line 171
c_rt_lib0clear(&___nl__im__56);
#line 171
c_rt_lib0clear(&___nl__im__57);
#line 171
c_rt_lib0clear(&___nl__im__58);
#line 171
return ___nl__im__59;
#line 172
goto label_1;
#line 172
label_17:
;
#line 173
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 173
c_rt_lib0clear(&___nl__im__0);
#line 173
c_rt_lib0clear(&___nl__im__1);
#line 173
//clear ___nl__bool__2;
#line 173
c_rt_lib0clear(&___nl__im__3);
#line 173
c_rt_lib0clear(&___nl__im__4);
#line 173
c_rt_lib0clear(&___nl__im__5);
#line 173
c_rt_lib0clear(&___nl__im__6);
#line 173
c_rt_lib0clear(&___nl__im__7);
#line 173
c_rt_lib0clear(&___nl__im__8);
#line 173
c_rt_lib0clear(&___nl__im__9);
#line 173
c_rt_lib0clear(&___nl__im__10);
#line 173
//clear ___nl__bool__11;
#line 173
c_rt_lib0clear(&___nl__im__12);
#line 173
c_rt_lib0clear(&___nl__im__13);
#line 173
c_rt_lib0clear(&___nl__im__15);
#line 173
c_rt_lib0clear(&___nl__im__16);
#line 173
c_rt_lib0clear(&___nl__im__17);
#line 173
c_rt_lib0clear(&___nl__im__18);
#line 173
c_rt_lib0clear(&___nl__im__19);
#line 173
c_rt_lib0clear(&___nl__im__20);
#line 173
c_rt_lib0clear(&___nl__im__21);
#line 173
c_rt_lib0clear(&___nl__im__23);
#line 173
c_rt_lib0clear(&___nl__im__24);
#line 173
c_rt_lib0clear(&___nl__im__25);
#line 173
c_rt_lib0clear(&___nl__im__26);
#line 173
c_rt_lib0clear(&___nl__im__27);
#line 173
c_rt_lib0clear(&___nl__im__28);
#line 173
c_rt_lib0clear(&___nl__im__30);
#line 173
c_rt_lib0clear(&___nl__im__31);
#line 173
c_rt_lib0clear(&___nl__im__32);
#line 173
c_rt_lib0clear(&___nl__im__33);
#line 173
c_rt_lib0clear(&___nl__im__34);
#line 173
c_rt_lib0clear(&___nl__im__35);
#line 173
c_rt_lib0clear(&___nl__im__36);
#line 173
//clear ___nl__bool__37;
#line 173
c_rt_lib0clear(&___nl__im__38);
#line 173
c_rt_lib0clear(&___nl__im__39);
#line 173
//clear ___nl__bool__40;
#line 173
c_rt_lib0clear(&___nl__im__41);
#line 173
c_rt_lib0clear(&___nl__im__43);
#line 173
c_rt_lib0clear(&___nl__im__44);
#line 173
c_rt_lib0clear(&___nl__im__47);
#line 173
c_rt_lib0clear(&___nl__im__48);
#line 173
c_rt_lib0clear(&___nl__im__49);
#line 173
c_rt_lib0clear(&___nl__im__52);
#line 173
c_rt_lib0clear(&___nl__im__54);
#line 173
c_rt_lib0clear(&___nl__im__55);
#line 173
c_rt_lib0clear(&___nl__im__56);
#line 173
c_rt_lib0clear(&___nl__im__57);
#line 173
c_rt_lib0clear(&___nl__im__58);
#line 173
c_rt_lib0clear(&___nl__im__59);
#line 173
return ___nl__im__60;
#line 174
goto label_1;
#line 174
label_1:
;
}

ImmT  tct_priv0get_fun_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 178
c_rt_lib0move(&___nl__im__3,___get_global_const(35));
#line 178
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 178
c_rt_lib0clear(&___nl__im__3);
#line 178
___nl__int__4 = 1;
#line 178
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 178
c_rt_lib0clear(&___nl__im__2);
#line 178
//clear ___nl__int__4;
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
return ___nl__im__1;
}

bool tct0is_own_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0is_own_type");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return tct0is_own_type(*var0, *var1);
}
bool tct0is_own_type(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
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
bool  ___nl__bool__44 = false;
#line 182
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 182
if(___nl__bool__2){ goto label_2;}
#line 184
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 184
if(___nl__bool__2){ goto label_3;}
#line 186
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 186
if(___nl__bool__2){ goto label_4;}
#line 188
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 188
if(___nl__bool__2){ goto label_5;}
#line 190
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 190
if(___nl__bool__2){ goto label_6;}
#line 192
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 192
if(___nl__bool__2){ goto label_7;}
#line 194
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 194
if(___nl__bool__2){ goto label_8;}
#line 196
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 196
if(___nl__bool__2){ goto label_9;}
#line 198
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 198
if(___nl__bool__2){ goto label_10;}
#line 205
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 205
if(___nl__bool__2){ goto label_11;}
#line 207
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 207
if(___nl__bool__2){ goto label_12;}
#line 209
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 209
if(___nl__bool__2){ goto label_13;}
#line 211
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 211
if(___nl__bool__2){ goto label_14;}
#line 213
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 213
if(___nl__bool__2){ goto label_15;}
#line 215
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 215
if(___nl__bool__2){ goto label_16;}
#line 217
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 217
if(___nl__bool__2){ goto label_17;}
#line 217
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 217
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 217
nl_die_arg(___nl__im__3);
#line 182
label_2:
;
#line 182
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 182
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 183
___nl__bool__6 = false;
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
return ___nl__bool__6;
#line 184
goto label_1;
#line 184
label_3:
;
#line 184
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 184
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 185
___nl__bool__9 = true;
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
return ___nl__bool__9;
#line 186
goto label_1;
#line 186
label_4:
;
#line 186
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 186
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 187
___nl__bool__12 = false;
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
return ___nl__bool__12;
#line 188
goto label_1;
#line 188
label_5:
;
#line 188
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 188
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 189
___nl__bool__15 = true;
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
return ___nl__bool__15;
#line 190
goto label_1;
#line 190
label_6:
;
#line 190
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 190
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 191
___nl__bool__18 = false;
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
return ___nl__bool__18;
#line 192
goto label_1;
#line 192
label_7:
;
#line 192
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 192
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 193
___nl__bool__21 = true;
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
return ___nl__bool__21;
#line 194
goto label_1;
#line 194
label_8:
;
#line 194
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 194
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 195
___nl__bool__24 = false;
#line 195
c_rt_lib0clear(&___nl__im__0);
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
//clear ___nl__bool__2;
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
c_rt_lib0clear(&___nl__im__4);
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
//clear ___nl__bool__6;
#line 195
c_rt_lib0clear(&___nl__im__7);
#line 195
c_rt_lib0clear(&___nl__im__8);
#line 195
//clear ___nl__bool__9;
#line 195
c_rt_lib0clear(&___nl__im__10);
#line 195
c_rt_lib0clear(&___nl__im__11);
#line 195
//clear ___nl__bool__12;
#line 195
c_rt_lib0clear(&___nl__im__13);
#line 195
c_rt_lib0clear(&___nl__im__14);
#line 195
//clear ___nl__bool__15;
#line 195
c_rt_lib0clear(&___nl__im__16);
#line 195
c_rt_lib0clear(&___nl__im__17);
#line 195
//clear ___nl__bool__18;
#line 195
c_rt_lib0clear(&___nl__im__19);
#line 195
c_rt_lib0clear(&___nl__im__20);
#line 195
//clear ___nl__bool__21;
#line 195
c_rt_lib0clear(&___nl__im__22);
#line 195
c_rt_lib0clear(&___nl__im__23);
#line 195
return ___nl__bool__24;
#line 196
goto label_1;
#line 196
label_9:
;
#line 196
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 196
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 197
___nl__bool__27 = true;
#line 197
c_rt_lib0clear(&___nl__im__0);
#line 197
c_rt_lib0clear(&___nl__im__1);
#line 197
//clear ___nl__bool__2;
#line 197
c_rt_lib0clear(&___nl__im__3);
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 197
c_rt_lib0clear(&___nl__im__5);
#line 197
//clear ___nl__bool__6;
#line 197
c_rt_lib0clear(&___nl__im__7);
#line 197
c_rt_lib0clear(&___nl__im__8);
#line 197
//clear ___nl__bool__9;
#line 197
c_rt_lib0clear(&___nl__im__10);
#line 197
c_rt_lib0clear(&___nl__im__11);
#line 197
//clear ___nl__bool__12;
#line 197
c_rt_lib0clear(&___nl__im__13);
#line 197
c_rt_lib0clear(&___nl__im__14);
#line 197
//clear ___nl__bool__15;
#line 197
c_rt_lib0clear(&___nl__im__16);
#line 197
c_rt_lib0clear(&___nl__im__17);
#line 197
//clear ___nl__bool__18;
#line 197
c_rt_lib0clear(&___nl__im__19);
#line 197
c_rt_lib0clear(&___nl__im__20);
#line 197
//clear ___nl__bool__21;
#line 197
c_rt_lib0clear(&___nl__im__22);
#line 197
c_rt_lib0clear(&___nl__im__23);
#line 197
//clear ___nl__bool__24;
#line 197
c_rt_lib0clear(&___nl__im__25);
#line 197
c_rt_lib0clear(&___nl__im__26);
#line 197
return ___nl__bool__27;
#line 198
goto label_1;
#line 198
label_10:
;
#line 198
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 198
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 199
___nl__bool__30 = hash0has_key(___nl__im__1, ___nl__im__28);
#line 199
___nl__bool__30 = !___nl__bool__30;
#line 199
if(___nl__bool__30){ goto label_19;}
#line 200
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 200
___nl__bool__31 = tct0is_own_type(___nl__im__32, ___nl__im__1);
#line 200
c_rt_lib0clear(&___nl__im__32);
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
//clear ___nl__bool__30;
#line 200
return ___nl__bool__31;
#line 201
goto label_18;
#line 201
label_19:
;
#line 201
c_rt_lib0move(&___nl__im__33, tct_priv0get_fun_name(___nl__im__28));
#line 201
___nl__bool__30 = hash0has_key(___nl__im__1, ___nl__im__33);
#line 201
c_rt_lib0clear(&___nl__im__33);
#line 201
___nl__bool__30 = !___nl__bool__30;
#line 201
if(___nl__bool__30){ goto label_20;}
#line 202
c_rt_lib0move(&___nl__im__36, tct_priv0get_fun_name(___nl__im__28));
#line 202
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__36));
#line 202
c_rt_lib0clear(&___nl__im__36);
#line 202
___nl__bool__34 = tct0is_own_type(___nl__im__35, ___nl__im__1);
#line 202
c_rt_lib0clear(&___nl__im__35);
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
//clear ___nl__bool__30;
#line 202
//clear ___nl__bool__31;
#line 202
return ___nl__bool__34;
#line 203
goto label_18;
#line 203
label_20:
;
#line 203
label_18:
;
#line 203
//clear ___nl__bool__30;
#line 203
//clear ___nl__bool__31;
#line 203
//clear ___nl__bool__34;
#line 204
___nl__bool__37 = false;
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
return ___nl__bool__37;
#line 205
goto label_1;
#line 205
label_11:
;
#line 206
___nl__bool__38 = false;
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
return ___nl__bool__38;
#line 207
goto label_1;
#line 207
label_12:
;
#line 208
___nl__bool__39 = false;
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
return ___nl__bool__39;
#line 209
goto label_1;
#line 209
label_13:
;
#line 210
___nl__bool__40 = false;
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
return ___nl__bool__40;
#line 211
goto label_1;
#line 211
label_14:
;
#line 212
___nl__bool__41 = false;
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
return ___nl__bool__41;
#line 213
goto label_1;
#line 213
label_15:
;
#line 214
___nl__bool__42 = false;
#line 214
c_rt_lib0clear(&___nl__im__0);
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
//clear ___nl__bool__2;
#line 214
c_rt_lib0clear(&___nl__im__3);
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
c_rt_lib0clear(&___nl__im__5);
#line 214
//clear ___nl__bool__6;
#line 214
c_rt_lib0clear(&___nl__im__7);
#line 214
c_rt_lib0clear(&___nl__im__8);
#line 214
//clear ___nl__bool__9;
#line 214
c_rt_lib0clear(&___nl__im__10);
#line 214
c_rt_lib0clear(&___nl__im__11);
#line 214
//clear ___nl__bool__12;
#line 214
c_rt_lib0clear(&___nl__im__13);
#line 214
c_rt_lib0clear(&___nl__im__14);
#line 214
//clear ___nl__bool__15;
#line 214
c_rt_lib0clear(&___nl__im__16);
#line 214
c_rt_lib0clear(&___nl__im__17);
#line 214
//clear ___nl__bool__18;
#line 214
c_rt_lib0clear(&___nl__im__19);
#line 214
c_rt_lib0clear(&___nl__im__20);
#line 214
//clear ___nl__bool__21;
#line 214
c_rt_lib0clear(&___nl__im__22);
#line 214
c_rt_lib0clear(&___nl__im__23);
#line 214
//clear ___nl__bool__24;
#line 214
c_rt_lib0clear(&___nl__im__25);
#line 214
c_rt_lib0clear(&___nl__im__26);
#line 214
//clear ___nl__bool__27;
#line 214
c_rt_lib0clear(&___nl__im__28);
#line 214
c_rt_lib0clear(&___nl__im__29);
#line 214
//clear ___nl__bool__37;
#line 214
//clear ___nl__bool__38;
#line 214
//clear ___nl__bool__39;
#line 214
//clear ___nl__bool__40;
#line 214
//clear ___nl__bool__41;
#line 214
return ___nl__bool__42;
#line 215
goto label_1;
#line 215
label_16:
;
#line 216
___nl__bool__43 = false;
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
//clear ___nl__bool__2;
#line 216
c_rt_lib0clear(&___nl__im__3);
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 216
c_rt_lib0clear(&___nl__im__5);
#line 216
//clear ___nl__bool__6;
#line 216
c_rt_lib0clear(&___nl__im__7);
#line 216
c_rt_lib0clear(&___nl__im__8);
#line 216
//clear ___nl__bool__9;
#line 216
c_rt_lib0clear(&___nl__im__10);
#line 216
c_rt_lib0clear(&___nl__im__11);
#line 216
//clear ___nl__bool__12;
#line 216
c_rt_lib0clear(&___nl__im__13);
#line 216
c_rt_lib0clear(&___nl__im__14);
#line 216
//clear ___nl__bool__15;
#line 216
c_rt_lib0clear(&___nl__im__16);
#line 216
c_rt_lib0clear(&___nl__im__17);
#line 216
//clear ___nl__bool__18;
#line 216
c_rt_lib0clear(&___nl__im__19);
#line 216
c_rt_lib0clear(&___nl__im__20);
#line 216
//clear ___nl__bool__21;
#line 216
c_rt_lib0clear(&___nl__im__22);
#line 216
c_rt_lib0clear(&___nl__im__23);
#line 216
//clear ___nl__bool__24;
#line 216
c_rt_lib0clear(&___nl__im__25);
#line 216
c_rt_lib0clear(&___nl__im__26);
#line 216
//clear ___nl__bool__27;
#line 216
c_rt_lib0clear(&___nl__im__28);
#line 216
c_rt_lib0clear(&___nl__im__29);
#line 216
//clear ___nl__bool__37;
#line 216
//clear ___nl__bool__38;
#line 216
//clear ___nl__bool__39;
#line 216
//clear ___nl__bool__40;
#line 216
//clear ___nl__bool__41;
#line 216
//clear ___nl__bool__42;
#line 216
return ___nl__bool__43;
#line 217
goto label_1;
#line 217
label_17:
;
#line 218
___nl__bool__44 = false;
#line 218
c_rt_lib0clear(&___nl__im__0);
#line 218
c_rt_lib0clear(&___nl__im__1);
#line 218
//clear ___nl__bool__2;
#line 218
c_rt_lib0clear(&___nl__im__3);
#line 218
c_rt_lib0clear(&___nl__im__4);
#line 218
c_rt_lib0clear(&___nl__im__5);
#line 218
//clear ___nl__bool__6;
#line 218
c_rt_lib0clear(&___nl__im__7);
#line 218
c_rt_lib0clear(&___nl__im__8);
#line 218
//clear ___nl__bool__9;
#line 218
c_rt_lib0clear(&___nl__im__10);
#line 218
c_rt_lib0clear(&___nl__im__11);
#line 218
//clear ___nl__bool__12;
#line 218
c_rt_lib0clear(&___nl__im__13);
#line 218
c_rt_lib0clear(&___nl__im__14);
#line 218
//clear ___nl__bool__15;
#line 218
c_rt_lib0clear(&___nl__im__16);
#line 218
c_rt_lib0clear(&___nl__im__17);
#line 218
//clear ___nl__bool__18;
#line 218
c_rt_lib0clear(&___nl__im__19);
#line 218
c_rt_lib0clear(&___nl__im__20);
#line 218
//clear ___nl__bool__21;
#line 218
c_rt_lib0clear(&___nl__im__22);
#line 218
c_rt_lib0clear(&___nl__im__23);
#line 218
//clear ___nl__bool__24;
#line 218
c_rt_lib0clear(&___nl__im__25);
#line 218
c_rt_lib0clear(&___nl__im__26);
#line 218
//clear ___nl__bool__27;
#line 218
c_rt_lib0clear(&___nl__im__28);
#line 218
c_rt_lib0clear(&___nl__im__29);
#line 218
//clear ___nl__bool__37;
#line 218
//clear ___nl__bool__38;
#line 218
//clear ___nl__bool__39;
#line 218
//clear ___nl__bool__40;
#line 218
//clear ___nl__bool__41;
#line 218
//clear ___nl__bool__42;
#line 218
//clear ___nl__bool__43;
#line 218
return ___nl__bool__44;
#line 219
goto label_1;
#line 219
label_1:
;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void tct_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT tct_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT tct_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
