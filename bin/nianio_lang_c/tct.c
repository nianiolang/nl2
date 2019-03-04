
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


tct0meta_type0type tct0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tct0arr");
tct0meta_type0type *var0 = &(_tab[0]);
return tct0arr(*var0);
}
tct0meta_type0type tct0arr(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tct_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 11
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__0));
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
return ___nl__im__1;
return NULL;
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
#line 15
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(2), ___nl__im__0));
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
return ___nl__im__1;
return NULL;
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
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__im__0));
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
return ___nl__im__1;
return NULL;
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
#line 23
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(6), ___nl__im__0));
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
return ___nl__im__1;
return NULL;
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
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(7), ___nl__im__0));
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
return ___nl__im__1;
return NULL;
}

tct0meta_type0type tct0int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0int");
return tct0int();
}
tct0meta_type0type tct0int() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 31
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 31
return ___nl__im__0;
return NULL;
}

tct0meta_type0type tct0string0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0string");
return tct0string();
}
tct0meta_type0type tct0string() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 35
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(11)));
#line 35
return ___nl__im__0;
return NULL;
}

ImmT  tct0none0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0none");
return tct0none();
}
ImmT  tct0none() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 39
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(1301)));
#line 39
return ___nl__im__0;
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
return NULL;
return NULL;
}

tct0meta_type0type tct0void0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0void");
return tct0void();
}
tct0meta_type0type tct0void() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 43
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 43
return ___nl__im__0;
return NULL;
}

tct0meta_type0type tct0empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0empty");
return tct0empty();
}
tct0meta_type0type tct0empty() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 47
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 47
return ___nl__im__0;
return NULL;
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
#line 51
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(3), ___nl__im__0));
#line 51
c_rt_lib0clear(&___nl__im__0);
#line 51
return ___nl__im__1;
return NULL;
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
#line 55
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(4), ___nl__im__0));
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
return ___nl__im__1;
return NULL;
}

tct0meta_type0type tct0tct_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0tct_im");
return tct0tct_im();
}
tct0meta_type0type tct0tct_im() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 59
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 59
return ___nl__im__0;
return NULL;
}

tct0meta_type0type tct0bool0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tct0bool");
return tct0bool();
}
tct0meta_type0type tct0bool() {
tct_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 63
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 63
return ___nl__im__0;
return NULL;
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
#line 67
c_rt_lib0move(&___nl__im__2, tct0string());
#line 67
c_rt_lib0move(&___nl__im__3, tct0string());
#line 67
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(151), ___nl__im__2, ___get_global_const(167), ___nl__im__3));
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
#line 71
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 72
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 72
label_3:
;
#line 72
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 72
if(___nl__bool__3){ goto label_1;}
#line 72
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 72
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 74
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(1301));
#line 74
___nl__bool__7 = !___nl__bool__7;
#line 74
if(___nl__bool__7){ goto label_5;}
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 76
goto label_4;
#line 76
label_5:
;
#line 77
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 77
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 77
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__4));
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 77
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(28), ___nl__im__8));
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 78
goto label_4;
#line 78
label_4:
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
goto label_3;
#line 80
label_1:
;
#line 81
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(13), ___nl__im__1));
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
#line 85
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 86
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 86
label_3:
;
#line 86
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 86
if(___nl__bool__3){ goto label_1;}
#line 86
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 86
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 88
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(1301));
#line 88
___nl__bool__7 = !___nl__bool__7;
#line 88
if(___nl__bool__7){ goto label_5;}
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 90
goto label_4;
#line 90
label_5:
;
#line 91
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 91
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 91
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__4));
#line 91
c_rt_lib0clear(&___nl__im__9);
#line 91
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(28), ___nl__im__8));
#line 91
c_rt_lib0clear(&___nl__im__8);
#line 92
goto label_4;
#line 92
label_4:
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
goto label_3;
#line 94
label_1:
;
#line 95
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(14), ___nl__im__1));
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
#line 99
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 99
___nl__bool__2 = !___nl__bool__2;
#line 99
___nl__bool__2 = !___nl__bool__2;
#line 99
if(___nl__bool__2){ goto label_2;}
#line 99
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 99
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__4));
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
goto label_1;
#line 99
label_2:
;
#line 99
label_1:
;
#line 99
//clear ___nl__bool__2;
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 100
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 100
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__1);
#line 100
c_rt_lib0clear(&___nl__im__6);
#line 100
___nl__bool__5 = !___nl__bool__5;
#line 100
___nl__bool__5 = !___nl__bool__5;
#line 100
if(___nl__bool__5){ goto label_4;}
#line 100
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 100
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__8));
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
goto label_3;
#line 100
label_4:
;
#line 100
label_3:
;
#line 100
//clear ___nl__bool__5;
#line 100
c_rt_lib0clear(&___nl__im__7);
#line 101
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 101
c_rt_lib0move(&___nl__im__9, hash0get_value(___nl__im__10, ___nl__im__1));
#line 101
c_rt_lib0clear(&___nl__im__10);
#line 102
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(28));
#line 102
___nl__bool__11 = !___nl__bool__11;
#line 102
___nl__bool__11 = !___nl__bool__11;
#line 102
if(___nl__bool__11){ goto label_6;}
#line 102
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 102
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__13));
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
goto label_5;
#line 102
label_6:
;
#line 102
label_5:
;
#line 102
//clear ___nl__bool__11;
#line 102
c_rt_lib0clear(&___nl__im__12);
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(28)));
#line 103
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__15));
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
#line 108
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 108
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 108
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 108
c_rt_lib0clear(&___nl__im__3);
#line 109
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 109
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 109
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 109
c_rt_lib0clear(&___nl__im__5);
#line 110
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 110
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 112
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 112
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 113
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 113
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 114
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 114
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 114
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 114
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(28), ___nl__im__13, ___get_global_const(29), ___nl__im__14));
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
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(398), ___get_global_const(298)));
#line 115
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__18));
#line 115
c_rt_lib0move(&___nl__im__19, ptd0none());
#line 115
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(28), ___nl__im__18, ___get_global_const(29), ___nl__im__19));
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
#line 123
c_rt_lib0move(&___nl__im__27, ptd0none());
#line 123
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(16, ___get_global_const(5), ___nl__im__2, ___get_global_const(6), ___nl__im__4, ___get_global_const(3), ___nl__im__6, ___get_global_const(4), ___nl__im__7, ___get_global_const(1), ___nl__im__8, ___get_global_const(2), ___nl__im__9, ___get_global_const(13), ___nl__im__10, ___get_global_const(14), ___nl__im__15, ___get_global_const(7), ___nl__im__20, ___get_global_const(9), ___nl__im__21, ___get_global_const(10), ___nl__im__22, ___get_global_const(11), ___nl__im__23, ___get_global_const(12), ___nl__im__24, ___get_global_const(15), ___nl__im__25, ___get_global_const(8), ___nl__im__26, ___get_global_const(0), ___nl__im__27));
#line 123
c_rt_lib0clear(&___nl__im__2);
#line 123
c_rt_lib0clear(&___nl__im__4);
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
c_rt_lib0clear(&___nl__im__7);
#line 123
c_rt_lib0clear(&___nl__im__8);
#line 123
c_rt_lib0clear(&___nl__im__9);
#line 123
c_rt_lib0clear(&___nl__im__10);
#line 123
c_rt_lib0clear(&___nl__im__15);
#line 123
c_rt_lib0clear(&___nl__im__20);
#line 123
c_rt_lib0clear(&___nl__im__21);
#line 123
c_rt_lib0clear(&___nl__im__22);
#line 123
c_rt_lib0clear(&___nl__im__23);
#line 123
c_rt_lib0clear(&___nl__im__24);
#line 123
c_rt_lib0clear(&___nl__im__25);
#line 123
c_rt_lib0clear(&___nl__im__26);
#line 123
c_rt_lib0clear(&___nl__im__27);
#line 123
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 123
c_rt_lib0clear(&___nl__im__1);
#line 123
return ___nl__im__0;
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
return NULL;
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
#line 128
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 128
if(___nl__bool__2){ goto label_2;}
#line 130
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 130
if(___nl__bool__2){ goto label_3;}
#line 136
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 136
if(___nl__bool__2){ goto label_4;}
#line 138
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 138
if(___nl__bool__2){ goto label_5;}
#line 140
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 140
if(___nl__bool__2){ goto label_6;}
#line 142
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 142
if(___nl__bool__2){ goto label_7;}
#line 144
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 144
if(___nl__bool__2){ goto label_8;}
#line 146
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 146
if(___nl__bool__2){ goto label_9;}
#line 156
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 156
if(___nl__bool__2){ goto label_10;}
#line 159
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 159
if(___nl__bool__2){ goto label_11;}
#line 161
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 161
if(___nl__bool__2){ goto label_12;}
#line 163
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 163
if(___nl__bool__2){ goto label_13;}
#line 165
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 165
if(___nl__bool__2){ goto label_14;}
#line 167
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 167
if(___nl__bool__2){ goto label_15;}
#line 169
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 169
if(___nl__bool__2){ goto label_16;}
#line 171
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 171
if(___nl__bool__2){ goto label_17;}
#line 171
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 171
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 171
nl_die_arg(___nl__im__3);
#line 128
label_2:
;
#line 128
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 128
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 129
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__im__4));
#line 129
c_rt_lib0clear(&___nl__im__0);
#line 129
c_rt_lib0clear(&___nl__im__1);
#line 129
//clear ___nl__bool__2;
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
c_rt_lib0clear(&___nl__im__4);
#line 129
c_rt_lib0clear(&___nl__im__5);
#line 129
return ___nl__im__6;
#line 130
goto label_1;
#line 130
label_3:
;
#line 130
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 130
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 131
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 132
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__7));
#line 132
label_20:
;
#line 132
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 132
if(___nl__bool__11){ goto label_18;}
#line 132
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 132
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__7, ___nl__im__10));
#line 133
c_rt_lib0move(&___nl__im__14, tct0own_type_to_ptd(___nl__im__12, ___nl__im__1));
#line 133
c_rt_lib0delete(hash0set_value(&___nl__im__9, ___nl__im__10, ___nl__im__14));
#line 133
c_rt_lib0clear(&___nl__im__14);
#line 134
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 134
goto label_20;
#line 134
label_18:
;
#line 135
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__im__9));
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
//clear ___nl__bool__2;
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
c_rt_lib0clear(&___nl__im__9);
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
//clear ___nl__bool__11;
#line 135
c_rt_lib0clear(&___nl__im__12);
#line 135
c_rt_lib0clear(&___nl__im__13);
#line 135
return ___nl__im__15;
#line 136
goto label_1;
#line 136
label_4:
;
#line 136
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 136
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 137
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(3), ___nl__im__16));
#line 137
c_rt_lib0clear(&___nl__im__0);
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
//clear ___nl__bool__2;
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0clear(&___nl__im__10);
#line 137
//clear ___nl__bool__11;
#line 137
c_rt_lib0clear(&___nl__im__12);
#line 137
c_rt_lib0clear(&___nl__im__13);
#line 137
c_rt_lib0clear(&___nl__im__15);
#line 137
c_rt_lib0clear(&___nl__im__16);
#line 137
c_rt_lib0clear(&___nl__im__17);
#line 137
return ___nl__im__18;
#line 138
goto label_1;
#line 138
label_5:
;
#line 138
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 138
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 139
c_rt_lib0move(&___nl__im__22, tct0own_type_to_ptd(___nl__im__19, ___nl__im__1));
#line 139
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(3), ___nl__im__22));
#line 139
c_rt_lib0clear(&___nl__im__22);
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
//clear ___nl__bool__2;
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 139
c_rt_lib0clear(&___nl__im__6);
#line 139
c_rt_lib0clear(&___nl__im__7);
#line 139
c_rt_lib0clear(&___nl__im__8);
#line 139
c_rt_lib0clear(&___nl__im__9);
#line 139
c_rt_lib0clear(&___nl__im__10);
#line 139
//clear ___nl__bool__11;
#line 139
c_rt_lib0clear(&___nl__im__12);
#line 139
c_rt_lib0clear(&___nl__im__13);
#line 139
c_rt_lib0clear(&___nl__im__15);
#line 139
c_rt_lib0clear(&___nl__im__16);
#line 139
c_rt_lib0clear(&___nl__im__17);
#line 139
c_rt_lib0clear(&___nl__im__18);
#line 139
c_rt_lib0clear(&___nl__im__19);
#line 139
c_rt_lib0clear(&___nl__im__20);
#line 139
return ___nl__im__21;
#line 140
goto label_1;
#line 140
label_6:
;
#line 140
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 140
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 141
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__23));
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
//clear ___nl__bool__2;
#line 141
c_rt_lib0clear(&___nl__im__3);
#line 141
c_rt_lib0clear(&___nl__im__4);
#line 141
c_rt_lib0clear(&___nl__im__5);
#line 141
c_rt_lib0clear(&___nl__im__6);
#line 141
c_rt_lib0clear(&___nl__im__7);
#line 141
c_rt_lib0clear(&___nl__im__8);
#line 141
c_rt_lib0clear(&___nl__im__9);
#line 141
c_rt_lib0clear(&___nl__im__10);
#line 141
//clear ___nl__bool__11;
#line 141
c_rt_lib0clear(&___nl__im__12);
#line 141
c_rt_lib0clear(&___nl__im__13);
#line 141
c_rt_lib0clear(&___nl__im__15);
#line 141
c_rt_lib0clear(&___nl__im__16);
#line 141
c_rt_lib0clear(&___nl__im__17);
#line 141
c_rt_lib0clear(&___nl__im__18);
#line 141
c_rt_lib0clear(&___nl__im__19);
#line 141
c_rt_lib0clear(&___nl__im__20);
#line 141
c_rt_lib0clear(&___nl__im__21);
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
return ___nl__im__25;
#line 142
goto label_1;
#line 142
label_7:
;
#line 142
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 142
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 143
c_rt_lib0move(&___nl__im__29, tct0own_type_to_ptd(___nl__im__26, ___nl__im__1));
#line 143
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__29));
#line 143
c_rt_lib0clear(&___nl__im__29);
#line 143
c_rt_lib0clear(&___nl__im__0);
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
//clear ___nl__bool__2;
#line 143
c_rt_lib0clear(&___nl__im__3);
#line 143
c_rt_lib0clear(&___nl__im__4);
#line 143
c_rt_lib0clear(&___nl__im__5);
#line 143
c_rt_lib0clear(&___nl__im__6);
#line 143
c_rt_lib0clear(&___nl__im__7);
#line 143
c_rt_lib0clear(&___nl__im__8);
#line 143
c_rt_lib0clear(&___nl__im__9);
#line 143
c_rt_lib0clear(&___nl__im__10);
#line 143
//clear ___nl__bool__11;
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__13);
#line 143
c_rt_lib0clear(&___nl__im__15);
#line 143
c_rt_lib0clear(&___nl__im__16);
#line 143
c_rt_lib0clear(&___nl__im__17);
#line 143
c_rt_lib0clear(&___nl__im__18);
#line 143
c_rt_lib0clear(&___nl__im__19);
#line 143
c_rt_lib0clear(&___nl__im__20);
#line 143
c_rt_lib0clear(&___nl__im__21);
#line 143
c_rt_lib0clear(&___nl__im__23);
#line 143
c_rt_lib0clear(&___nl__im__24);
#line 143
c_rt_lib0clear(&___nl__im__25);
#line 143
c_rt_lib0clear(&___nl__im__26);
#line 143
c_rt_lib0clear(&___nl__im__27);
#line 143
return ___nl__im__28;
#line 144
goto label_1;
#line 144
label_8:
;
#line 144
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 144
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 145
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(13), ___nl__im__30));
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__1);
#line 145
//clear ___nl__bool__2;
#line 145
c_rt_lib0clear(&___nl__im__3);
#line 145
c_rt_lib0clear(&___nl__im__4);
#line 145
c_rt_lib0clear(&___nl__im__5);
#line 145
c_rt_lib0clear(&___nl__im__6);
#line 145
c_rt_lib0clear(&___nl__im__7);
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 145
c_rt_lib0clear(&___nl__im__9);
#line 145
c_rt_lib0clear(&___nl__im__10);
#line 145
//clear ___nl__bool__11;
#line 145
c_rt_lib0clear(&___nl__im__12);
#line 145
c_rt_lib0clear(&___nl__im__13);
#line 145
c_rt_lib0clear(&___nl__im__15);
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
c_rt_lib0clear(&___nl__im__17);
#line 145
c_rt_lib0clear(&___nl__im__18);
#line 145
c_rt_lib0clear(&___nl__im__19);
#line 145
c_rt_lib0clear(&___nl__im__20);
#line 145
c_rt_lib0clear(&___nl__im__21);
#line 145
c_rt_lib0clear(&___nl__im__23);
#line 145
c_rt_lib0clear(&___nl__im__24);
#line 145
c_rt_lib0clear(&___nl__im__25);
#line 145
c_rt_lib0clear(&___nl__im__26);
#line 145
c_rt_lib0clear(&___nl__im__27);
#line 145
c_rt_lib0clear(&___nl__im__28);
#line 145
c_rt_lib0clear(&___nl__im__30);
#line 145
c_rt_lib0clear(&___nl__im__31);
#line 145
return ___nl__im__32;
#line 146
goto label_1;
#line 146
label_9:
;
#line 146
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 146
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 147
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(0));
#line 148
c_rt_lib0move(&___nl__im__39, c_rt_lib0init_iter(___nl__im__33));
#line 148
label_23:
;
#line 148
___nl__bool__37 = c_rt_lib0is_end_hash(___nl__im__39);
#line 148
if(___nl__bool__37){ goto label_21;}
#line 148
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_key_iter(___nl__im__39));
#line 148
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value(___nl__im__33, ___nl__im__36));
#line 149
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(29));
#line 149
if(___nl__bool__40){ goto label_25;}
#line 151
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(28));
#line 151
if(___nl__bool__40){ goto label_26;}
#line 151
c_rt_lib0move(&___nl__im__41,___get_global_const(16));
#line 151
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(2, ___nl__im__41, ___nl__im__38));
#line 151
nl_die_arg(___nl__im__41);
#line 149
label_25:
;
#line 150
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 150
c_rt_lib0delete(hash0set_value(&___nl__im__35, ___nl__im__36, ___nl__im__42));
#line 150
c_rt_lib0clear(&___nl__im__42);
#line 151
goto label_24;
#line 151
label_26:
;
#line 151
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__38, ___get_global_const(28)));
#line 151
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 152
c_rt_lib0move(&___nl__im__46, tct0own_type_to_ptd(___nl__im__43, ___nl__im__1));
#line 152
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(28), ___nl__im__46));
#line 152
c_rt_lib0clear(&___nl__im__46);
#line 152
c_rt_lib0delete(hash0set_value(&___nl__im__35, ___nl__im__36, ___nl__im__45));
#line 152
c_rt_lib0clear(&___nl__im__45);
#line 153
goto label_24;
#line 153
label_24:
;
#line 153
//clear ___nl__bool__40;
#line 153
c_rt_lib0clear(&___nl__im__41);
#line 153
c_rt_lib0clear(&___nl__im__43);
#line 153
c_rt_lib0clear(&___nl__im__44);
#line 154
c_rt_lib0move(&___nl__im__39, c_rt_lib0next_iter(___nl__im__39));
#line 154
goto label_23;
#line 154
label_21:
;
#line 155
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(13), ___nl__im__35));
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
//clear ___nl__bool__2;
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
c_rt_lib0clear(&___nl__im__6);
#line 155
c_rt_lib0clear(&___nl__im__7);
#line 155
c_rt_lib0clear(&___nl__im__8);
#line 155
c_rt_lib0clear(&___nl__im__9);
#line 155
c_rt_lib0clear(&___nl__im__10);
#line 155
//clear ___nl__bool__11;
#line 155
c_rt_lib0clear(&___nl__im__12);
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
c_rt_lib0clear(&___nl__im__15);
#line 155
c_rt_lib0clear(&___nl__im__16);
#line 155
c_rt_lib0clear(&___nl__im__17);
#line 155
c_rt_lib0clear(&___nl__im__18);
#line 155
c_rt_lib0clear(&___nl__im__19);
#line 155
c_rt_lib0clear(&___nl__im__20);
#line 155
c_rt_lib0clear(&___nl__im__21);
#line 155
c_rt_lib0clear(&___nl__im__23);
#line 155
c_rt_lib0clear(&___nl__im__24);
#line 155
c_rt_lib0clear(&___nl__im__25);
#line 155
c_rt_lib0clear(&___nl__im__26);
#line 155
c_rt_lib0clear(&___nl__im__27);
#line 155
c_rt_lib0clear(&___nl__im__28);
#line 155
c_rt_lib0clear(&___nl__im__30);
#line 155
c_rt_lib0clear(&___nl__im__31);
#line 155
c_rt_lib0clear(&___nl__im__32);
#line 155
c_rt_lib0clear(&___nl__im__33);
#line 155
c_rt_lib0clear(&___nl__im__34);
#line 155
c_rt_lib0clear(&___nl__im__35);
#line 155
c_rt_lib0clear(&___nl__im__36);
#line 155
//clear ___nl__bool__37;
#line 155
c_rt_lib0clear(&___nl__im__38);
#line 155
c_rt_lib0clear(&___nl__im__39);
#line 155
//clear ___nl__bool__40;
#line 155
c_rt_lib0clear(&___nl__im__41);
#line 155
c_rt_lib0clear(&___nl__im__43);
#line 155
c_rt_lib0clear(&___nl__im__44);
#line 155
return ___nl__im__47;
#line 156
goto label_1;
#line 156
label_10:
;
#line 156
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 156
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 157
___nl__bool__50 = hash0has_key(___nl__im__1, ___nl__im__48);
#line 157
___nl__bool__50 = !___nl__bool__50;
#line 157
___nl__bool__50 = !___nl__bool__50;
#line 157
if(___nl__bool__50){ goto label_28;}
#line 157
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_const(7), ___nl__im__48));
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
//clear ___nl__bool__50;
#line 157
return ___nl__im__51;
#line 157
goto label_27;
#line 157
label_28:
;
#line 157
label_27:
;
#line 157
//clear ___nl__bool__50;
#line 157
c_rt_lib0clear(&___nl__im__51);
#line 158
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__48));
#line 158
c_rt_lib0move(&___nl__im__52, tct0own_type_to_ptd(___nl__im__53, ___nl__im__1));
#line 158
c_rt_lib0clear(&___nl__im__53);
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
return ___nl__im__52;
#line 159
goto label_1;
#line 159
label_11:
;
#line 160
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_const(9)));
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
c_rt_lib0clear(&___nl__im__1);
#line 160
//clear ___nl__bool__2;
#line 160
c_rt_lib0clear(&___nl__im__3);
#line 160
c_rt_lib0clear(&___nl__im__4);
#line 160
c_rt_lib0clear(&___nl__im__5);
#line 160
c_rt_lib0clear(&___nl__im__6);
#line 160
c_rt_lib0clear(&___nl__im__7);
#line 160
c_rt_lib0clear(&___nl__im__8);
#line 160
c_rt_lib0clear(&___nl__im__9);
#line 160
c_rt_lib0clear(&___nl__im__10);
#line 160
//clear ___nl__bool__11;
#line 160
c_rt_lib0clear(&___nl__im__12);
#line 160
c_rt_lib0clear(&___nl__im__13);
#line 160
c_rt_lib0clear(&___nl__im__15);
#line 160
c_rt_lib0clear(&___nl__im__16);
#line 160
c_rt_lib0clear(&___nl__im__17);
#line 160
c_rt_lib0clear(&___nl__im__18);
#line 160
c_rt_lib0clear(&___nl__im__19);
#line 160
c_rt_lib0clear(&___nl__im__20);
#line 160
c_rt_lib0clear(&___nl__im__21);
#line 160
c_rt_lib0clear(&___nl__im__23);
#line 160
c_rt_lib0clear(&___nl__im__24);
#line 160
c_rt_lib0clear(&___nl__im__25);
#line 160
c_rt_lib0clear(&___nl__im__26);
#line 160
c_rt_lib0clear(&___nl__im__27);
#line 160
c_rt_lib0clear(&___nl__im__28);
#line 160
c_rt_lib0clear(&___nl__im__30);
#line 160
c_rt_lib0clear(&___nl__im__31);
#line 160
c_rt_lib0clear(&___nl__im__32);
#line 160
c_rt_lib0clear(&___nl__im__33);
#line 160
c_rt_lib0clear(&___nl__im__34);
#line 160
c_rt_lib0clear(&___nl__im__35);
#line 160
c_rt_lib0clear(&___nl__im__36);
#line 160
//clear ___nl__bool__37;
#line 160
c_rt_lib0clear(&___nl__im__38);
#line 160
c_rt_lib0clear(&___nl__im__39);
#line 160
//clear ___nl__bool__40;
#line 160
c_rt_lib0clear(&___nl__im__41);
#line 160
c_rt_lib0clear(&___nl__im__43);
#line 160
c_rt_lib0clear(&___nl__im__44);
#line 160
c_rt_lib0clear(&___nl__im__47);
#line 160
c_rt_lib0clear(&___nl__im__48);
#line 160
c_rt_lib0clear(&___nl__im__49);
#line 160
c_rt_lib0clear(&___nl__im__52);
#line 160
return ___nl__im__54;
#line 161
goto label_1;
#line 161
label_12:
;
#line 162
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
//clear ___nl__bool__2;
#line 162
c_rt_lib0clear(&___nl__im__3);
#line 162
c_rt_lib0clear(&___nl__im__4);
#line 162
c_rt_lib0clear(&___nl__im__5);
#line 162
c_rt_lib0clear(&___nl__im__6);
#line 162
c_rt_lib0clear(&___nl__im__7);
#line 162
c_rt_lib0clear(&___nl__im__8);
#line 162
c_rt_lib0clear(&___nl__im__9);
#line 162
c_rt_lib0clear(&___nl__im__10);
#line 162
//clear ___nl__bool__11;
#line 162
c_rt_lib0clear(&___nl__im__12);
#line 162
c_rt_lib0clear(&___nl__im__13);
#line 162
c_rt_lib0clear(&___nl__im__15);
#line 162
c_rt_lib0clear(&___nl__im__16);
#line 162
c_rt_lib0clear(&___nl__im__17);
#line 162
c_rt_lib0clear(&___nl__im__18);
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 162
c_rt_lib0clear(&___nl__im__20);
#line 162
c_rt_lib0clear(&___nl__im__21);
#line 162
c_rt_lib0clear(&___nl__im__23);
#line 162
c_rt_lib0clear(&___nl__im__24);
#line 162
c_rt_lib0clear(&___nl__im__25);
#line 162
c_rt_lib0clear(&___nl__im__26);
#line 162
c_rt_lib0clear(&___nl__im__27);
#line 162
c_rt_lib0clear(&___nl__im__28);
#line 162
c_rt_lib0clear(&___nl__im__30);
#line 162
c_rt_lib0clear(&___nl__im__31);
#line 162
c_rt_lib0clear(&___nl__im__32);
#line 162
c_rt_lib0clear(&___nl__im__33);
#line 162
c_rt_lib0clear(&___nl__im__34);
#line 162
c_rt_lib0clear(&___nl__im__35);
#line 162
c_rt_lib0clear(&___nl__im__36);
#line 162
//clear ___nl__bool__37;
#line 162
c_rt_lib0clear(&___nl__im__38);
#line 162
c_rt_lib0clear(&___nl__im__39);
#line 162
//clear ___nl__bool__40;
#line 162
c_rt_lib0clear(&___nl__im__41);
#line 162
c_rt_lib0clear(&___nl__im__43);
#line 162
c_rt_lib0clear(&___nl__im__44);
#line 162
c_rt_lib0clear(&___nl__im__47);
#line 162
c_rt_lib0clear(&___nl__im__48);
#line 162
c_rt_lib0clear(&___nl__im__49);
#line 162
c_rt_lib0clear(&___nl__im__52);
#line 162
c_rt_lib0clear(&___nl__im__54);
#line 162
return ___nl__im__55;
#line 163
goto label_1;
#line 163
label_13:
;
#line 164
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_none(___get_global_const(11)));
#line 164
c_rt_lib0clear(&___nl__im__0);
#line 164
c_rt_lib0clear(&___nl__im__1);
#line 164
//clear ___nl__bool__2;
#line 164
c_rt_lib0clear(&___nl__im__3);
#line 164
c_rt_lib0clear(&___nl__im__4);
#line 164
c_rt_lib0clear(&___nl__im__5);
#line 164
c_rt_lib0clear(&___nl__im__6);
#line 164
c_rt_lib0clear(&___nl__im__7);
#line 164
c_rt_lib0clear(&___nl__im__8);
#line 164
c_rt_lib0clear(&___nl__im__9);
#line 164
c_rt_lib0clear(&___nl__im__10);
#line 164
//clear ___nl__bool__11;
#line 164
c_rt_lib0clear(&___nl__im__12);
#line 164
c_rt_lib0clear(&___nl__im__13);
#line 164
c_rt_lib0clear(&___nl__im__15);
#line 164
c_rt_lib0clear(&___nl__im__16);
#line 164
c_rt_lib0clear(&___nl__im__17);
#line 164
c_rt_lib0clear(&___nl__im__18);
#line 164
c_rt_lib0clear(&___nl__im__19);
#line 164
c_rt_lib0clear(&___nl__im__20);
#line 164
c_rt_lib0clear(&___nl__im__21);
#line 164
c_rt_lib0clear(&___nl__im__23);
#line 164
c_rt_lib0clear(&___nl__im__24);
#line 164
c_rt_lib0clear(&___nl__im__25);
#line 164
c_rt_lib0clear(&___nl__im__26);
#line 164
c_rt_lib0clear(&___nl__im__27);
#line 164
c_rt_lib0clear(&___nl__im__28);
#line 164
c_rt_lib0clear(&___nl__im__30);
#line 164
c_rt_lib0clear(&___nl__im__31);
#line 164
c_rt_lib0clear(&___nl__im__32);
#line 164
c_rt_lib0clear(&___nl__im__33);
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 164
c_rt_lib0clear(&___nl__im__35);
#line 164
c_rt_lib0clear(&___nl__im__36);
#line 164
//clear ___nl__bool__37;
#line 164
c_rt_lib0clear(&___nl__im__38);
#line 164
c_rt_lib0clear(&___nl__im__39);
#line 164
//clear ___nl__bool__40;
#line 164
c_rt_lib0clear(&___nl__im__41);
#line 164
c_rt_lib0clear(&___nl__im__43);
#line 164
c_rt_lib0clear(&___nl__im__44);
#line 164
c_rt_lib0clear(&___nl__im__47);
#line 164
c_rt_lib0clear(&___nl__im__48);
#line 164
c_rt_lib0clear(&___nl__im__49);
#line 164
c_rt_lib0clear(&___nl__im__52);
#line 164
c_rt_lib0clear(&___nl__im__54);
#line 164
c_rt_lib0clear(&___nl__im__55);
#line 164
return ___nl__im__56;
#line 165
goto label_1;
#line 165
label_14:
;
#line 166
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
//clear ___nl__bool__2;
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
c_rt_lib0clear(&___nl__im__7);
#line 166
c_rt_lib0clear(&___nl__im__8);
#line 166
c_rt_lib0clear(&___nl__im__9);
#line 166
c_rt_lib0clear(&___nl__im__10);
#line 166
//clear ___nl__bool__11;
#line 166
c_rt_lib0clear(&___nl__im__12);
#line 166
c_rt_lib0clear(&___nl__im__13);
#line 166
c_rt_lib0clear(&___nl__im__15);
#line 166
c_rt_lib0clear(&___nl__im__16);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 166
c_rt_lib0clear(&___nl__im__19);
#line 166
c_rt_lib0clear(&___nl__im__20);
#line 166
c_rt_lib0clear(&___nl__im__21);
#line 166
c_rt_lib0clear(&___nl__im__23);
#line 166
c_rt_lib0clear(&___nl__im__24);
#line 166
c_rt_lib0clear(&___nl__im__25);
#line 166
c_rt_lib0clear(&___nl__im__26);
#line 166
c_rt_lib0clear(&___nl__im__27);
#line 166
c_rt_lib0clear(&___nl__im__28);
#line 166
c_rt_lib0clear(&___nl__im__30);
#line 166
c_rt_lib0clear(&___nl__im__31);
#line 166
c_rt_lib0clear(&___nl__im__32);
#line 166
c_rt_lib0clear(&___nl__im__33);
#line 166
c_rt_lib0clear(&___nl__im__34);
#line 166
c_rt_lib0clear(&___nl__im__35);
#line 166
c_rt_lib0clear(&___nl__im__36);
#line 166
//clear ___nl__bool__37;
#line 166
c_rt_lib0clear(&___nl__im__38);
#line 166
c_rt_lib0clear(&___nl__im__39);
#line 166
//clear ___nl__bool__40;
#line 166
c_rt_lib0clear(&___nl__im__41);
#line 166
c_rt_lib0clear(&___nl__im__43);
#line 166
c_rt_lib0clear(&___nl__im__44);
#line 166
c_rt_lib0clear(&___nl__im__47);
#line 166
c_rt_lib0clear(&___nl__im__48);
#line 166
c_rt_lib0clear(&___nl__im__49);
#line 166
c_rt_lib0clear(&___nl__im__52);
#line 166
c_rt_lib0clear(&___nl__im__54);
#line 166
c_rt_lib0clear(&___nl__im__55);
#line 166
c_rt_lib0clear(&___nl__im__56);
#line 166
return ___nl__im__57;
#line 167
goto label_1;
#line 167
label_15:
;
#line 168
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
c_rt_lib0clear(&___nl__im__1);
#line 168
//clear ___nl__bool__2;
#line 168
c_rt_lib0clear(&___nl__im__3);
#line 168
c_rt_lib0clear(&___nl__im__4);
#line 168
c_rt_lib0clear(&___nl__im__5);
#line 168
c_rt_lib0clear(&___nl__im__6);
#line 168
c_rt_lib0clear(&___nl__im__7);
#line 168
c_rt_lib0clear(&___nl__im__8);
#line 168
c_rt_lib0clear(&___nl__im__9);
#line 168
c_rt_lib0clear(&___nl__im__10);
#line 168
//clear ___nl__bool__11;
#line 168
c_rt_lib0clear(&___nl__im__12);
#line 168
c_rt_lib0clear(&___nl__im__13);
#line 168
c_rt_lib0clear(&___nl__im__15);
#line 168
c_rt_lib0clear(&___nl__im__16);
#line 168
c_rt_lib0clear(&___nl__im__17);
#line 168
c_rt_lib0clear(&___nl__im__18);
#line 168
c_rt_lib0clear(&___nl__im__19);
#line 168
c_rt_lib0clear(&___nl__im__20);
#line 168
c_rt_lib0clear(&___nl__im__21);
#line 168
c_rt_lib0clear(&___nl__im__23);
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
c_rt_lib0clear(&___nl__im__25);
#line 168
c_rt_lib0clear(&___nl__im__26);
#line 168
c_rt_lib0clear(&___nl__im__27);
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 168
c_rt_lib0clear(&___nl__im__30);
#line 168
c_rt_lib0clear(&___nl__im__31);
#line 168
c_rt_lib0clear(&___nl__im__32);
#line 168
c_rt_lib0clear(&___nl__im__33);
#line 168
c_rt_lib0clear(&___nl__im__34);
#line 168
c_rt_lib0clear(&___nl__im__35);
#line 168
c_rt_lib0clear(&___nl__im__36);
#line 168
//clear ___nl__bool__37;
#line 168
c_rt_lib0clear(&___nl__im__38);
#line 168
c_rt_lib0clear(&___nl__im__39);
#line 168
//clear ___nl__bool__40;
#line 168
c_rt_lib0clear(&___nl__im__41);
#line 168
c_rt_lib0clear(&___nl__im__43);
#line 168
c_rt_lib0clear(&___nl__im__44);
#line 168
c_rt_lib0clear(&___nl__im__47);
#line 168
c_rt_lib0clear(&___nl__im__48);
#line 168
c_rt_lib0clear(&___nl__im__49);
#line 168
c_rt_lib0clear(&___nl__im__52);
#line 168
c_rt_lib0clear(&___nl__im__54);
#line 168
c_rt_lib0clear(&___nl__im__55);
#line 168
c_rt_lib0clear(&___nl__im__56);
#line 168
c_rt_lib0clear(&___nl__im__57);
#line 168
return ___nl__im__58;
#line 169
goto label_1;
#line 169
label_16:
;
#line 170
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
//clear ___nl__bool__2;
#line 170
c_rt_lib0clear(&___nl__im__3);
#line 170
c_rt_lib0clear(&___nl__im__4);
#line 170
c_rt_lib0clear(&___nl__im__5);
#line 170
c_rt_lib0clear(&___nl__im__6);
#line 170
c_rt_lib0clear(&___nl__im__7);
#line 170
c_rt_lib0clear(&___nl__im__8);
#line 170
c_rt_lib0clear(&___nl__im__9);
#line 170
c_rt_lib0clear(&___nl__im__10);
#line 170
//clear ___nl__bool__11;
#line 170
c_rt_lib0clear(&___nl__im__12);
#line 170
c_rt_lib0clear(&___nl__im__13);
#line 170
c_rt_lib0clear(&___nl__im__15);
#line 170
c_rt_lib0clear(&___nl__im__16);
#line 170
c_rt_lib0clear(&___nl__im__17);
#line 170
c_rt_lib0clear(&___nl__im__18);
#line 170
c_rt_lib0clear(&___nl__im__19);
#line 170
c_rt_lib0clear(&___nl__im__20);
#line 170
c_rt_lib0clear(&___nl__im__21);
#line 170
c_rt_lib0clear(&___nl__im__23);
#line 170
c_rt_lib0clear(&___nl__im__24);
#line 170
c_rt_lib0clear(&___nl__im__25);
#line 170
c_rt_lib0clear(&___nl__im__26);
#line 170
c_rt_lib0clear(&___nl__im__27);
#line 170
c_rt_lib0clear(&___nl__im__28);
#line 170
c_rt_lib0clear(&___nl__im__30);
#line 170
c_rt_lib0clear(&___nl__im__31);
#line 170
c_rt_lib0clear(&___nl__im__32);
#line 170
c_rt_lib0clear(&___nl__im__33);
#line 170
c_rt_lib0clear(&___nl__im__34);
#line 170
c_rt_lib0clear(&___nl__im__35);
#line 170
c_rt_lib0clear(&___nl__im__36);
#line 170
//clear ___nl__bool__37;
#line 170
c_rt_lib0clear(&___nl__im__38);
#line 170
c_rt_lib0clear(&___nl__im__39);
#line 170
//clear ___nl__bool__40;
#line 170
c_rt_lib0clear(&___nl__im__41);
#line 170
c_rt_lib0clear(&___nl__im__43);
#line 170
c_rt_lib0clear(&___nl__im__44);
#line 170
c_rt_lib0clear(&___nl__im__47);
#line 170
c_rt_lib0clear(&___nl__im__48);
#line 170
c_rt_lib0clear(&___nl__im__49);
#line 170
c_rt_lib0clear(&___nl__im__52);
#line 170
c_rt_lib0clear(&___nl__im__54);
#line 170
c_rt_lib0clear(&___nl__im__55);
#line 170
c_rt_lib0clear(&___nl__im__56);
#line 170
c_rt_lib0clear(&___nl__im__57);
#line 170
c_rt_lib0clear(&___nl__im__58);
#line 170
return ___nl__im__59;
#line 171
goto label_1;
#line 171
label_17:
;
#line 172
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 172
c_rt_lib0clear(&___nl__im__0);
#line 172
c_rt_lib0clear(&___nl__im__1);
#line 172
//clear ___nl__bool__2;
#line 172
c_rt_lib0clear(&___nl__im__3);
#line 172
c_rt_lib0clear(&___nl__im__4);
#line 172
c_rt_lib0clear(&___nl__im__5);
#line 172
c_rt_lib0clear(&___nl__im__6);
#line 172
c_rt_lib0clear(&___nl__im__7);
#line 172
c_rt_lib0clear(&___nl__im__8);
#line 172
c_rt_lib0clear(&___nl__im__9);
#line 172
c_rt_lib0clear(&___nl__im__10);
#line 172
//clear ___nl__bool__11;
#line 172
c_rt_lib0clear(&___nl__im__12);
#line 172
c_rt_lib0clear(&___nl__im__13);
#line 172
c_rt_lib0clear(&___nl__im__15);
#line 172
c_rt_lib0clear(&___nl__im__16);
#line 172
c_rt_lib0clear(&___nl__im__17);
#line 172
c_rt_lib0clear(&___nl__im__18);
#line 172
c_rt_lib0clear(&___nl__im__19);
#line 172
c_rt_lib0clear(&___nl__im__20);
#line 172
c_rt_lib0clear(&___nl__im__21);
#line 172
c_rt_lib0clear(&___nl__im__23);
#line 172
c_rt_lib0clear(&___nl__im__24);
#line 172
c_rt_lib0clear(&___nl__im__25);
#line 172
c_rt_lib0clear(&___nl__im__26);
#line 172
c_rt_lib0clear(&___nl__im__27);
#line 172
c_rt_lib0clear(&___nl__im__28);
#line 172
c_rt_lib0clear(&___nl__im__30);
#line 172
c_rt_lib0clear(&___nl__im__31);
#line 172
c_rt_lib0clear(&___nl__im__32);
#line 172
c_rt_lib0clear(&___nl__im__33);
#line 172
c_rt_lib0clear(&___nl__im__34);
#line 172
c_rt_lib0clear(&___nl__im__35);
#line 172
c_rt_lib0clear(&___nl__im__36);
#line 172
//clear ___nl__bool__37;
#line 172
c_rt_lib0clear(&___nl__im__38);
#line 172
c_rt_lib0clear(&___nl__im__39);
#line 172
//clear ___nl__bool__40;
#line 172
c_rt_lib0clear(&___nl__im__41);
#line 172
c_rt_lib0clear(&___nl__im__43);
#line 172
c_rt_lib0clear(&___nl__im__44);
#line 172
c_rt_lib0clear(&___nl__im__47);
#line 172
c_rt_lib0clear(&___nl__im__48);
#line 172
c_rt_lib0clear(&___nl__im__49);
#line 172
c_rt_lib0clear(&___nl__im__52);
#line 172
c_rt_lib0clear(&___nl__im__54);
#line 172
c_rt_lib0clear(&___nl__im__55);
#line 172
c_rt_lib0clear(&___nl__im__56);
#line 172
c_rt_lib0clear(&___nl__im__57);
#line 172
c_rt_lib0clear(&___nl__im__58);
#line 172
c_rt_lib0clear(&___nl__im__59);
#line 172
return ___nl__im__60;
#line 173
goto label_1;
#line 173
label_1:
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
#line 177
c_rt_lib0move(&___nl__im__3,___get_global_const(35));
#line 177
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
___nl__int__4 = 1;
#line 177
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
//clear ___nl__int__4;
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
return ___nl__im__1;
return NULL;
}

bool  tct0is_own_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "tct0is_own_type");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return tct0is_own_type(*var0, *var1);
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
bool  ___nl__bool__44 = false;
#line 181
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 181
if(___nl__bool__2){ goto label_2;}
#line 183
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 183
if(___nl__bool__2){ goto label_3;}
#line 185
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 185
if(___nl__bool__2){ goto label_4;}
#line 187
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 187
if(___nl__bool__2){ goto label_5;}
#line 189
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 189
if(___nl__bool__2){ goto label_6;}
#line 191
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 191
if(___nl__bool__2){ goto label_7;}
#line 193
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 193
if(___nl__bool__2){ goto label_8;}
#line 195
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 195
if(___nl__bool__2){ goto label_9;}
#line 197
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 197
if(___nl__bool__2){ goto label_10;}
#line 204
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 204
if(___nl__bool__2){ goto label_11;}
#line 206
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 206
if(___nl__bool__2){ goto label_12;}
#line 208
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 208
if(___nl__bool__2){ goto label_13;}
#line 210
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 210
if(___nl__bool__2){ goto label_14;}
#line 212
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 212
if(___nl__bool__2){ goto label_15;}
#line 214
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 214
if(___nl__bool__2){ goto label_16;}
#line 216
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 216
if(___nl__bool__2){ goto label_17;}
#line 216
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 216
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 216
nl_die_arg(___nl__im__3);
#line 181
label_2:
;
#line 181
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 181
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 182
___nl__bool__6 = false;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__bool__2;
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
c_rt_lib0clear(&___nl__im__4);
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
return ___nl__bool__6;
#line 183
goto label_1;
#line 183
label_3:
;
#line 183
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 183
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 184
___nl__bool__9 = true;
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
//clear ___nl__bool__2;
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 184
c_rt_lib0clear(&___nl__im__4);
#line 184
c_rt_lib0clear(&___nl__im__5);
#line 184
//clear ___nl__bool__6;
#line 184
c_rt_lib0clear(&___nl__im__7);
#line 184
c_rt_lib0clear(&___nl__im__8);
#line 184
return ___nl__bool__9;
#line 185
goto label_1;
#line 185
label_4:
;
#line 185
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 185
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 186
___nl__bool__12 = false;
#line 186
c_rt_lib0clear(&___nl__im__0);
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
//clear ___nl__bool__2;
#line 186
c_rt_lib0clear(&___nl__im__3);
#line 186
c_rt_lib0clear(&___nl__im__4);
#line 186
c_rt_lib0clear(&___nl__im__5);
#line 186
//clear ___nl__bool__6;
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
c_rt_lib0clear(&___nl__im__8);
#line 186
//clear ___nl__bool__9;
#line 186
c_rt_lib0clear(&___nl__im__10);
#line 186
c_rt_lib0clear(&___nl__im__11);
#line 186
return ___nl__bool__12;
#line 187
goto label_1;
#line 187
label_5:
;
#line 187
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 187
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 188
___nl__bool__15 = true;
#line 188
c_rt_lib0clear(&___nl__im__0);
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
//clear ___nl__bool__2;
#line 188
c_rt_lib0clear(&___nl__im__3);
#line 188
c_rt_lib0clear(&___nl__im__4);
#line 188
c_rt_lib0clear(&___nl__im__5);
#line 188
//clear ___nl__bool__6;
#line 188
c_rt_lib0clear(&___nl__im__7);
#line 188
c_rt_lib0clear(&___nl__im__8);
#line 188
//clear ___nl__bool__9;
#line 188
c_rt_lib0clear(&___nl__im__10);
#line 188
c_rt_lib0clear(&___nl__im__11);
#line 188
//clear ___nl__bool__12;
#line 188
c_rt_lib0clear(&___nl__im__13);
#line 188
c_rt_lib0clear(&___nl__im__14);
#line 188
return ___nl__bool__15;
#line 189
goto label_1;
#line 189
label_6:
;
#line 189
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 189
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 190
___nl__bool__18 = false;
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__bool__2;
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
//clear ___nl__bool__6;
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
//clear ___nl__bool__9;
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
//clear ___nl__bool__12;
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
//clear ___nl__bool__15;
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
return ___nl__bool__18;
#line 191
goto label_1;
#line 191
label_7:
;
#line 191
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 191
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 192
___nl__bool__21 = true;
#line 192
c_rt_lib0clear(&___nl__im__0);
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
//clear ___nl__bool__2;
#line 192
c_rt_lib0clear(&___nl__im__3);
#line 192
c_rt_lib0clear(&___nl__im__4);
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
//clear ___nl__bool__6;
#line 192
c_rt_lib0clear(&___nl__im__7);
#line 192
c_rt_lib0clear(&___nl__im__8);
#line 192
//clear ___nl__bool__9;
#line 192
c_rt_lib0clear(&___nl__im__10);
#line 192
c_rt_lib0clear(&___nl__im__11);
#line 192
//clear ___nl__bool__12;
#line 192
c_rt_lib0clear(&___nl__im__13);
#line 192
c_rt_lib0clear(&___nl__im__14);
#line 192
//clear ___nl__bool__15;
#line 192
c_rt_lib0clear(&___nl__im__16);
#line 192
c_rt_lib0clear(&___nl__im__17);
#line 192
//clear ___nl__bool__18;
#line 192
c_rt_lib0clear(&___nl__im__19);
#line 192
c_rt_lib0clear(&___nl__im__20);
#line 192
return ___nl__bool__21;
#line 193
goto label_1;
#line 193
label_8:
;
#line 193
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 193
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 194
___nl__bool__24 = false;
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
c_rt_lib0clear(&___nl__im__1);
#line 194
//clear ___nl__bool__2;
#line 194
c_rt_lib0clear(&___nl__im__3);
#line 194
c_rt_lib0clear(&___nl__im__4);
#line 194
c_rt_lib0clear(&___nl__im__5);
#line 194
//clear ___nl__bool__6;
#line 194
c_rt_lib0clear(&___nl__im__7);
#line 194
c_rt_lib0clear(&___nl__im__8);
#line 194
//clear ___nl__bool__9;
#line 194
c_rt_lib0clear(&___nl__im__10);
#line 194
c_rt_lib0clear(&___nl__im__11);
#line 194
//clear ___nl__bool__12;
#line 194
c_rt_lib0clear(&___nl__im__13);
#line 194
c_rt_lib0clear(&___nl__im__14);
#line 194
//clear ___nl__bool__15;
#line 194
c_rt_lib0clear(&___nl__im__16);
#line 194
c_rt_lib0clear(&___nl__im__17);
#line 194
//clear ___nl__bool__18;
#line 194
c_rt_lib0clear(&___nl__im__19);
#line 194
c_rt_lib0clear(&___nl__im__20);
#line 194
//clear ___nl__bool__21;
#line 194
c_rt_lib0clear(&___nl__im__22);
#line 194
c_rt_lib0clear(&___nl__im__23);
#line 194
return ___nl__bool__24;
#line 195
goto label_1;
#line 195
label_9:
;
#line 195
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 195
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 196
___nl__bool__27 = true;
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
return ___nl__bool__27;
#line 197
goto label_1;
#line 197
label_10:
;
#line 197
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 197
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 198
___nl__bool__30 = hash0has_key(___nl__im__1, ___nl__im__28);
#line 198
___nl__bool__30 = !___nl__bool__30;
#line 198
if(___nl__bool__30){ goto label_19;}
#line 199
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 199
___nl__bool__31 = tct0is_own_type(___nl__im__32, ___nl__im__1);
#line 199
c_rt_lib0clear(&___nl__im__32);
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
//clear ___nl__bool__2;
#line 199
c_rt_lib0clear(&___nl__im__3);
#line 199
c_rt_lib0clear(&___nl__im__4);
#line 199
c_rt_lib0clear(&___nl__im__5);
#line 199
//clear ___nl__bool__6;
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 199
c_rt_lib0clear(&___nl__im__8);
#line 199
//clear ___nl__bool__9;
#line 199
c_rt_lib0clear(&___nl__im__10);
#line 199
c_rt_lib0clear(&___nl__im__11);
#line 199
//clear ___nl__bool__12;
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
//clear ___nl__bool__15;
#line 199
c_rt_lib0clear(&___nl__im__16);
#line 199
c_rt_lib0clear(&___nl__im__17);
#line 199
//clear ___nl__bool__18;
#line 199
c_rt_lib0clear(&___nl__im__19);
#line 199
c_rt_lib0clear(&___nl__im__20);
#line 199
//clear ___nl__bool__21;
#line 199
c_rt_lib0clear(&___nl__im__22);
#line 199
c_rt_lib0clear(&___nl__im__23);
#line 199
//clear ___nl__bool__24;
#line 199
c_rt_lib0clear(&___nl__im__25);
#line 199
c_rt_lib0clear(&___nl__im__26);
#line 199
//clear ___nl__bool__27;
#line 199
c_rt_lib0clear(&___nl__im__28);
#line 199
c_rt_lib0clear(&___nl__im__29);
#line 199
//clear ___nl__bool__30;
#line 199
return ___nl__bool__31;
#line 200
goto label_18;
#line 200
label_19:
;
#line 200
c_rt_lib0move(&___nl__im__33, tct_priv0get_fun_name(___nl__im__28));
#line 200
___nl__bool__30 = hash0has_key(___nl__im__1, ___nl__im__33);
#line 200
c_rt_lib0clear(&___nl__im__33);
#line 200
___nl__bool__30 = !___nl__bool__30;
#line 200
if(___nl__bool__30){ goto label_20;}
#line 201
c_rt_lib0move(&___nl__im__36, tct_priv0get_fun_name(___nl__im__28));
#line 201
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__36));
#line 201
c_rt_lib0clear(&___nl__im__36);
#line 201
___nl__bool__34 = tct0is_own_type(___nl__im__35, ___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__35);
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
//clear ___nl__bool__2;
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
//clear ___nl__bool__6;
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
//clear ___nl__bool__9;
#line 201
c_rt_lib0clear(&___nl__im__10);
#line 201
c_rt_lib0clear(&___nl__im__11);
#line 201
//clear ___nl__bool__12;
#line 201
c_rt_lib0clear(&___nl__im__13);
#line 201
c_rt_lib0clear(&___nl__im__14);
#line 201
//clear ___nl__bool__15;
#line 201
c_rt_lib0clear(&___nl__im__16);
#line 201
c_rt_lib0clear(&___nl__im__17);
#line 201
//clear ___nl__bool__18;
#line 201
c_rt_lib0clear(&___nl__im__19);
#line 201
c_rt_lib0clear(&___nl__im__20);
#line 201
//clear ___nl__bool__21;
#line 201
c_rt_lib0clear(&___nl__im__22);
#line 201
c_rt_lib0clear(&___nl__im__23);
#line 201
//clear ___nl__bool__24;
#line 201
c_rt_lib0clear(&___nl__im__25);
#line 201
c_rt_lib0clear(&___nl__im__26);
#line 201
//clear ___nl__bool__27;
#line 201
c_rt_lib0clear(&___nl__im__28);
#line 201
c_rt_lib0clear(&___nl__im__29);
#line 201
//clear ___nl__bool__30;
#line 201
//clear ___nl__bool__31;
#line 201
return ___nl__bool__34;
#line 202
goto label_18;
#line 202
label_20:
;
#line 202
label_18:
;
#line 202
//clear ___nl__bool__30;
#line 202
//clear ___nl__bool__31;
#line 202
//clear ___nl__bool__34;
#line 203
___nl__bool__37 = false;
#line 203
c_rt_lib0clear(&___nl__im__0);
#line 203
c_rt_lib0clear(&___nl__im__1);
#line 203
//clear ___nl__bool__2;
#line 203
c_rt_lib0clear(&___nl__im__3);
#line 203
c_rt_lib0clear(&___nl__im__4);
#line 203
c_rt_lib0clear(&___nl__im__5);
#line 203
//clear ___nl__bool__6;
#line 203
c_rt_lib0clear(&___nl__im__7);
#line 203
c_rt_lib0clear(&___nl__im__8);
#line 203
//clear ___nl__bool__9;
#line 203
c_rt_lib0clear(&___nl__im__10);
#line 203
c_rt_lib0clear(&___nl__im__11);
#line 203
//clear ___nl__bool__12;
#line 203
c_rt_lib0clear(&___nl__im__13);
#line 203
c_rt_lib0clear(&___nl__im__14);
#line 203
//clear ___nl__bool__15;
#line 203
c_rt_lib0clear(&___nl__im__16);
#line 203
c_rt_lib0clear(&___nl__im__17);
#line 203
//clear ___nl__bool__18;
#line 203
c_rt_lib0clear(&___nl__im__19);
#line 203
c_rt_lib0clear(&___nl__im__20);
#line 203
//clear ___nl__bool__21;
#line 203
c_rt_lib0clear(&___nl__im__22);
#line 203
c_rt_lib0clear(&___nl__im__23);
#line 203
//clear ___nl__bool__24;
#line 203
c_rt_lib0clear(&___nl__im__25);
#line 203
c_rt_lib0clear(&___nl__im__26);
#line 203
//clear ___nl__bool__27;
#line 203
c_rt_lib0clear(&___nl__im__28);
#line 203
c_rt_lib0clear(&___nl__im__29);
#line 203
return ___nl__bool__37;
#line 204
goto label_1;
#line 204
label_11:
;
#line 205
___nl__bool__38 = false;
#line 205
c_rt_lib0clear(&___nl__im__0);
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
//clear ___nl__bool__2;
#line 205
c_rt_lib0clear(&___nl__im__3);
#line 205
c_rt_lib0clear(&___nl__im__4);
#line 205
c_rt_lib0clear(&___nl__im__5);
#line 205
//clear ___nl__bool__6;
#line 205
c_rt_lib0clear(&___nl__im__7);
#line 205
c_rt_lib0clear(&___nl__im__8);
#line 205
//clear ___nl__bool__9;
#line 205
c_rt_lib0clear(&___nl__im__10);
#line 205
c_rt_lib0clear(&___nl__im__11);
#line 205
//clear ___nl__bool__12;
#line 205
c_rt_lib0clear(&___nl__im__13);
#line 205
c_rt_lib0clear(&___nl__im__14);
#line 205
//clear ___nl__bool__15;
#line 205
c_rt_lib0clear(&___nl__im__16);
#line 205
c_rt_lib0clear(&___nl__im__17);
#line 205
//clear ___nl__bool__18;
#line 205
c_rt_lib0clear(&___nl__im__19);
#line 205
c_rt_lib0clear(&___nl__im__20);
#line 205
//clear ___nl__bool__21;
#line 205
c_rt_lib0clear(&___nl__im__22);
#line 205
c_rt_lib0clear(&___nl__im__23);
#line 205
//clear ___nl__bool__24;
#line 205
c_rt_lib0clear(&___nl__im__25);
#line 205
c_rt_lib0clear(&___nl__im__26);
#line 205
//clear ___nl__bool__27;
#line 205
c_rt_lib0clear(&___nl__im__28);
#line 205
c_rt_lib0clear(&___nl__im__29);
#line 205
//clear ___nl__bool__37;
#line 205
return ___nl__bool__38;
#line 206
goto label_1;
#line 206
label_12:
;
#line 207
___nl__bool__39 = false;
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
//clear ___nl__bool__2;
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 207
c_rt_lib0clear(&___nl__im__4);
#line 207
c_rt_lib0clear(&___nl__im__5);
#line 207
//clear ___nl__bool__6;
#line 207
c_rt_lib0clear(&___nl__im__7);
#line 207
c_rt_lib0clear(&___nl__im__8);
#line 207
//clear ___nl__bool__9;
#line 207
c_rt_lib0clear(&___nl__im__10);
#line 207
c_rt_lib0clear(&___nl__im__11);
#line 207
//clear ___nl__bool__12;
#line 207
c_rt_lib0clear(&___nl__im__13);
#line 207
c_rt_lib0clear(&___nl__im__14);
#line 207
//clear ___nl__bool__15;
#line 207
c_rt_lib0clear(&___nl__im__16);
#line 207
c_rt_lib0clear(&___nl__im__17);
#line 207
//clear ___nl__bool__18;
#line 207
c_rt_lib0clear(&___nl__im__19);
#line 207
c_rt_lib0clear(&___nl__im__20);
#line 207
//clear ___nl__bool__21;
#line 207
c_rt_lib0clear(&___nl__im__22);
#line 207
c_rt_lib0clear(&___nl__im__23);
#line 207
//clear ___nl__bool__24;
#line 207
c_rt_lib0clear(&___nl__im__25);
#line 207
c_rt_lib0clear(&___nl__im__26);
#line 207
//clear ___nl__bool__27;
#line 207
c_rt_lib0clear(&___nl__im__28);
#line 207
c_rt_lib0clear(&___nl__im__29);
#line 207
//clear ___nl__bool__37;
#line 207
//clear ___nl__bool__38;
#line 207
return ___nl__bool__39;
#line 208
goto label_1;
#line 208
label_13:
;
#line 209
___nl__bool__40 = false;
#line 209
c_rt_lib0clear(&___nl__im__0);
#line 209
c_rt_lib0clear(&___nl__im__1);
#line 209
//clear ___nl__bool__2;
#line 209
c_rt_lib0clear(&___nl__im__3);
#line 209
c_rt_lib0clear(&___nl__im__4);
#line 209
c_rt_lib0clear(&___nl__im__5);
#line 209
//clear ___nl__bool__6;
#line 209
c_rt_lib0clear(&___nl__im__7);
#line 209
c_rt_lib0clear(&___nl__im__8);
#line 209
//clear ___nl__bool__9;
#line 209
c_rt_lib0clear(&___nl__im__10);
#line 209
c_rt_lib0clear(&___nl__im__11);
#line 209
//clear ___nl__bool__12;
#line 209
c_rt_lib0clear(&___nl__im__13);
#line 209
c_rt_lib0clear(&___nl__im__14);
#line 209
//clear ___nl__bool__15;
#line 209
c_rt_lib0clear(&___nl__im__16);
#line 209
c_rt_lib0clear(&___nl__im__17);
#line 209
//clear ___nl__bool__18;
#line 209
c_rt_lib0clear(&___nl__im__19);
#line 209
c_rt_lib0clear(&___nl__im__20);
#line 209
//clear ___nl__bool__21;
#line 209
c_rt_lib0clear(&___nl__im__22);
#line 209
c_rt_lib0clear(&___nl__im__23);
#line 209
//clear ___nl__bool__24;
#line 209
c_rt_lib0clear(&___nl__im__25);
#line 209
c_rt_lib0clear(&___nl__im__26);
#line 209
//clear ___nl__bool__27;
#line 209
c_rt_lib0clear(&___nl__im__28);
#line 209
c_rt_lib0clear(&___nl__im__29);
#line 209
//clear ___nl__bool__37;
#line 209
//clear ___nl__bool__38;
#line 209
//clear ___nl__bool__39;
#line 209
return ___nl__bool__40;
#line 210
goto label_1;
#line 210
label_14:
;
#line 211
___nl__bool__41 = false;
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
c_rt_lib0clear(&___nl__im__1);
#line 211
//clear ___nl__bool__2;
#line 211
c_rt_lib0clear(&___nl__im__3);
#line 211
c_rt_lib0clear(&___nl__im__4);
#line 211
c_rt_lib0clear(&___nl__im__5);
#line 211
//clear ___nl__bool__6;
#line 211
c_rt_lib0clear(&___nl__im__7);
#line 211
c_rt_lib0clear(&___nl__im__8);
#line 211
//clear ___nl__bool__9;
#line 211
c_rt_lib0clear(&___nl__im__10);
#line 211
c_rt_lib0clear(&___nl__im__11);
#line 211
//clear ___nl__bool__12;
#line 211
c_rt_lib0clear(&___nl__im__13);
#line 211
c_rt_lib0clear(&___nl__im__14);
#line 211
//clear ___nl__bool__15;
#line 211
c_rt_lib0clear(&___nl__im__16);
#line 211
c_rt_lib0clear(&___nl__im__17);
#line 211
//clear ___nl__bool__18;
#line 211
c_rt_lib0clear(&___nl__im__19);
#line 211
c_rt_lib0clear(&___nl__im__20);
#line 211
//clear ___nl__bool__21;
#line 211
c_rt_lib0clear(&___nl__im__22);
#line 211
c_rt_lib0clear(&___nl__im__23);
#line 211
//clear ___nl__bool__24;
#line 211
c_rt_lib0clear(&___nl__im__25);
#line 211
c_rt_lib0clear(&___nl__im__26);
#line 211
//clear ___nl__bool__27;
#line 211
c_rt_lib0clear(&___nl__im__28);
#line 211
c_rt_lib0clear(&___nl__im__29);
#line 211
//clear ___nl__bool__37;
#line 211
//clear ___nl__bool__38;
#line 211
//clear ___nl__bool__39;
#line 211
//clear ___nl__bool__40;
#line 211
return ___nl__bool__41;
#line 212
goto label_1;
#line 212
label_15:
;
#line 213
___nl__bool__42 = false;
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
//clear ___nl__bool__2;
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
//clear ___nl__bool__6;
#line 213
c_rt_lib0clear(&___nl__im__7);
#line 213
c_rt_lib0clear(&___nl__im__8);
#line 213
//clear ___nl__bool__9;
#line 213
c_rt_lib0clear(&___nl__im__10);
#line 213
c_rt_lib0clear(&___nl__im__11);
#line 213
//clear ___nl__bool__12;
#line 213
c_rt_lib0clear(&___nl__im__13);
#line 213
c_rt_lib0clear(&___nl__im__14);
#line 213
//clear ___nl__bool__15;
#line 213
c_rt_lib0clear(&___nl__im__16);
#line 213
c_rt_lib0clear(&___nl__im__17);
#line 213
//clear ___nl__bool__18;
#line 213
c_rt_lib0clear(&___nl__im__19);
#line 213
c_rt_lib0clear(&___nl__im__20);
#line 213
//clear ___nl__bool__21;
#line 213
c_rt_lib0clear(&___nl__im__22);
#line 213
c_rt_lib0clear(&___nl__im__23);
#line 213
//clear ___nl__bool__24;
#line 213
c_rt_lib0clear(&___nl__im__25);
#line 213
c_rt_lib0clear(&___nl__im__26);
#line 213
//clear ___nl__bool__27;
#line 213
c_rt_lib0clear(&___nl__im__28);
#line 213
c_rt_lib0clear(&___nl__im__29);
#line 213
//clear ___nl__bool__37;
#line 213
//clear ___nl__bool__38;
#line 213
//clear ___nl__bool__39;
#line 213
//clear ___nl__bool__40;
#line 213
//clear ___nl__bool__41;
#line 213
return ___nl__bool__42;
#line 214
goto label_1;
#line 214
label_16:
;
#line 215
___nl__bool__43 = false;
#line 215
c_rt_lib0clear(&___nl__im__0);
#line 215
c_rt_lib0clear(&___nl__im__1);
#line 215
//clear ___nl__bool__2;
#line 215
c_rt_lib0clear(&___nl__im__3);
#line 215
c_rt_lib0clear(&___nl__im__4);
#line 215
c_rt_lib0clear(&___nl__im__5);
#line 215
//clear ___nl__bool__6;
#line 215
c_rt_lib0clear(&___nl__im__7);
#line 215
c_rt_lib0clear(&___nl__im__8);
#line 215
//clear ___nl__bool__9;
#line 215
c_rt_lib0clear(&___nl__im__10);
#line 215
c_rt_lib0clear(&___nl__im__11);
#line 215
//clear ___nl__bool__12;
#line 215
c_rt_lib0clear(&___nl__im__13);
#line 215
c_rt_lib0clear(&___nl__im__14);
#line 215
//clear ___nl__bool__15;
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 215
//clear ___nl__bool__18;
#line 215
c_rt_lib0clear(&___nl__im__19);
#line 215
c_rt_lib0clear(&___nl__im__20);
#line 215
//clear ___nl__bool__21;
#line 215
c_rt_lib0clear(&___nl__im__22);
#line 215
c_rt_lib0clear(&___nl__im__23);
#line 215
//clear ___nl__bool__24;
#line 215
c_rt_lib0clear(&___nl__im__25);
#line 215
c_rt_lib0clear(&___nl__im__26);
#line 215
//clear ___nl__bool__27;
#line 215
c_rt_lib0clear(&___nl__im__28);
#line 215
c_rt_lib0clear(&___nl__im__29);
#line 215
//clear ___nl__bool__37;
#line 215
//clear ___nl__bool__38;
#line 215
//clear ___nl__bool__39;
#line 215
//clear ___nl__bool__40;
#line 215
//clear ___nl__bool__41;
#line 215
//clear ___nl__bool__42;
#line 215
return ___nl__bool__43;
#line 216
goto label_1;
#line 216
label_17:
;
#line 217
___nl__bool__44 = false;
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
//clear ___nl__bool__2;
#line 217
c_rt_lib0clear(&___nl__im__3);
#line 217
c_rt_lib0clear(&___nl__im__4);
#line 217
c_rt_lib0clear(&___nl__im__5);
#line 217
//clear ___nl__bool__6;
#line 217
c_rt_lib0clear(&___nl__im__7);
#line 217
c_rt_lib0clear(&___nl__im__8);
#line 217
//clear ___nl__bool__9;
#line 217
c_rt_lib0clear(&___nl__im__10);
#line 217
c_rt_lib0clear(&___nl__im__11);
#line 217
//clear ___nl__bool__12;
#line 217
c_rt_lib0clear(&___nl__im__13);
#line 217
c_rt_lib0clear(&___nl__im__14);
#line 217
//clear ___nl__bool__15;
#line 217
c_rt_lib0clear(&___nl__im__16);
#line 217
c_rt_lib0clear(&___nl__im__17);
#line 217
//clear ___nl__bool__18;
#line 217
c_rt_lib0clear(&___nl__im__19);
#line 217
c_rt_lib0clear(&___nl__im__20);
#line 217
//clear ___nl__bool__21;
#line 217
c_rt_lib0clear(&___nl__im__22);
#line 217
c_rt_lib0clear(&___nl__im__23);
#line 217
//clear ___nl__bool__24;
#line 217
c_rt_lib0clear(&___nl__im__25);
#line 217
c_rt_lib0clear(&___nl__im__26);
#line 217
//clear ___nl__bool__27;
#line 217
c_rt_lib0clear(&___nl__im__28);
#line 217
c_rt_lib0clear(&___nl__im__29);
#line 217
//clear ___nl__bool__37;
#line 217
//clear ___nl__bool__38;
#line 217
//clear ___nl__bool__39;
#line 217
//clear ___nl__bool__40;
#line 217
//clear ___nl__bool__41;
#line 217
//clear ___nl__bool__42;
#line 217
//clear ___nl__bool__43;
#line 217
return ___nl__bool__44;
#line 218
goto label_1;
#line 218
label_1:
;
return false;
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
