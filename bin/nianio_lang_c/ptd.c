
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "ptd.h"
#include "hash.h"
#include "array.h"
#include "ov.h"
#include "c_std_lib.h"
#include "ptd.h"
#line 1 "ptd.nl"

static ImmT *__const__f = NULL;
void ptd_priv0__const__init();
ImmT ptd_priv0__const__sim(int __nr);
ImmT ptd_priv0__const__sing(int __nr);

ImmT  ptd_priv0ensure_dyn(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT * ___ref___im__3);
ImmT  ptd_priv0exec(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ptd0cast_error_t0type ptd_priv0try_dynamic_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  ptd_priv0reconstruct(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3);


ptd0meta_type0type ptd0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0arr");
ptd0meta_type0type *var0 = &(_tab[0]);
return ptd0arr(*var0);
}
ptd0meta_type0type ptd0arr(ptd0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 12
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(316), ___nl__im__0));
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
return ___nl__im__1;
return NULL;

}

ptd0meta_type0type ptd0rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0rec");
ImmT  *var0 = &(_tab[0]);
return ptd0rec(*var0);
}
ptd0meta_type0type ptd0rec(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 16
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(308), ___nl__im__0));
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
return ___nl__im__1;
return NULL;

}

ptd0meta_type0type ptd0int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0int");
return ptd0int();
}
ImmT ptd0int(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(0);
}
ImmT ptd0int0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 20
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(289)));
#line 20
return ___nl__im__0;
return NULL;

}

ptd0meta_type0type ptd0string0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0string");
return ptd0string();
}
ImmT ptd0string(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(1);
}
ImmT ptd0string0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 24
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(287)));
#line 24
return ___nl__im__0;
return NULL;

}

ptd0meta_type0type ptd0bool0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0bool");
return ptd0bool();
}
ImmT ptd0bool(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(2);
}
ImmT ptd0bool0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 28
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 28
return ___nl__im__0;
return NULL;

}

ImmT  ptd0none0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0none");
return ptd0none();
}
ImmT ptd0none(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(3);
}
ImmT ptd0none0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 32
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1127)));
#line 32
return ___nl__im__0;
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
return NULL;
return NULL;

}

ImmT  ptd0void0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0void");
return ptd0void();
}
ImmT ptd0void(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(4);
}
ImmT ptd0void0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 36
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1199)));
#line 36
return ___nl__im__0;
#line 36
c_rt_lib0clear(&___nl__im__0);
#line 36
return NULL;
return NULL;

}

ptd0meta_type0type ptd0hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0hash");
ptd0meta_type0type *var0 = &(_tab[0]);
return ptd0hash(*var0);
}
ptd0meta_type0type ptd0hash(ptd0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(310), ___nl__im__0));
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
return ___nl__im__1;
return NULL;

}

ptd0meta_type0type ptd0ptd_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0ptd_im");
return ptd0ptd_im();
}
ImmT ptd0ptd_im(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(5);
}
ImmT ptd0ptd_im0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 44
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(288)));
#line 44
return ___nl__im__0;
return NULL;

}

ptd0meta_type0type ptd0var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0var");
ImmT  *var0 = &(_tab[0]);
return ptd0var(*var0);
}
ptd0meta_type0type ptd0var(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
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
#line 48
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 49
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 49
label_2:
;
#line 49
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 49
if(___nl__bool__3){ goto label_21;}
#line 49
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 49
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 51
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1127));
#line 51
___nl__bool__7 = !___nl__bool__7;
#line 51
if(___nl__bool__7){ goto label_12;}
#line 52
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(29)));
#line 53
goto label_15;
#line 53
label_12:
;
#line 54
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(28), ___nl__im__4));
#line 55
goto label_15;
#line 55
label_15:
;
#line 55
//clear ___nl__bool__7;
#line 56
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 57
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 57
goto label_2;
#line 57
label_21:
;
#line 58
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 58
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__9));
#line 58
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(317), ___nl__im__1));
#line 58
c_rt_lib0move(&___nl__im__8, ptd0ensure_only_static_do_not_touch_without_permission(___nl__im__9, ___nl__im__10));
#line 58
c_rt_lib0clear(&___nl__im__9);
#line 58
c_rt_lib0clear(&___nl__im__10);
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
//clear ___nl__bool__3;
#line 58
c_rt_lib0clear(&___nl__im__4);
#line 58
c_rt_lib0clear(&___nl__im__5);
#line 58
c_rt_lib0clear(&___nl__im__6);
#line 58
return ___nl__im__8;
return NULL;

}

ImmT  ptd0meta_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0meta_type");
return ptd0meta_type();
}
ImmT ptd0meta_type(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(6);
}
ImmT ptd0meta_type0cal() {
ptd_priv0__const__init();
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
ImmT  ___nl__im__28 = NULL;
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 63
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 66
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 66
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__9));
#line 66
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 66
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_string_const(28), ___nl__im__9, ___get_global_string_const(29), ___nl__im__10));
#line 66
c_rt_lib0clear(&___nl__im__9);
#line 66
c_rt_lib0clear(&___nl__im__10);
#line 66
c_rt_lib0move(&___nl__im__7, ptd0var(___nl__im__8));
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 66
c_rt_lib0move(&___nl__im__6, ptd0hash(___nl__im__7));
#line 66
c_rt_lib0clear(&___nl__im__7);
#line 68
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 69
c_rt_lib0move(&___nl__im__14, ptd0string());
#line 69
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(151), ___nl__im__13, ___get_global_string_const(167), ___nl__im__14));
#line 69
c_rt_lib0clear(&___nl__im__13);
#line 69
c_rt_lib0clear(&___nl__im__14);
#line 69
c_rt_lib0move(&___nl__im__11, ptd0rec(___nl__im__12));
#line 69
c_rt_lib0clear(&___nl__im__12);
#line 71
c_rt_lib0move(&___nl__im__15, ptd0none());
#line 72
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 73
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 74
c_rt_lib0move(&___nl__im__18, ptd0none());
#line 75
c_rt_lib0move(&___nl__im__19, ptd0none());
#line 76
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 76
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__21));
#line 76
c_rt_lib0move(&___nl__im__20, ptd0hash(___nl__im__21));
#line 76
c_rt_lib0clear(&___nl__im__21);
#line 77
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 77
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__22));
#line 78
c_rt_lib0move(&___nl__im__23, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 78
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__23));
#line 79
c_rt_lib0move(&___nl__im__27, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 79
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__27));
#line 79
c_rt_lib0move(&___nl__im__28, ptd0none());
#line 79
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_string_const(28), ___nl__im__27, ___get_global_string_const(29), ___nl__im__28));
#line 79
c_rt_lib0clear(&___nl__im__27);
#line 79
c_rt_lib0clear(&___nl__im__28);
#line 79
c_rt_lib0move(&___nl__im__25, ptd0var(___nl__im__26));
#line 79
c_rt_lib0clear(&___nl__im__26);
#line 79
c_rt_lib0move(&___nl__im__24, ptd0hash(___nl__im__25));
#line 79
c_rt_lib0clear(&___nl__im__25);
#line 79
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(14, ___get_global_string_const(308), ___nl__im__2, ___get_global_string_const(310), ___nl__im__4, ___get_global_string_const(316), ___nl__im__5, ___get_global_string_const(317), ___nl__im__6, ___get_global_string_const(40), ___nl__im__11, ___get_global_string_const(1200), ___nl__im__15, ___get_global_string_const(289), ___nl__im__16, ___get_global_string_const(287), ___nl__im__17, ___get_global_string_const(1198), ___nl__im__18, ___get_global_string_const(288), ___nl__im__19, ___get_global_string_const(1125), ___nl__im__20, ___get_global_string_const(1126), ___nl__im__22, ___get_global_string_const(1124), ___nl__im__23, ___get_global_string_const(1128), ___nl__im__24));
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
c_rt_lib0clear(&___nl__im__23);
#line 79
c_rt_lib0clear(&___nl__im__24);
#line 79
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
return ___nl__im__0;
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
return NULL;
return NULL;

}

ImmT  ptd0ensure0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0ensure(*var0, *var1);
}
ImmT  ptd0ensure(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
#line 84
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 85
c_rt_lib0move(&___nl__im__4, ptd0ensure_dyn(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 85
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(79));
#line 85
if(___nl__bool__3){ goto label_6;}
#line 85
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(177), ___nl__im__4));
#line 85
nl_die_arg(___nl__im__4);
#line 85
label_6:
;
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
//clear ___nl__bool__3;
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
return ___nl__im__1;
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
//clear ___nl__bool__3;
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
return NULL;
return NULL;

}

ImmT  ptd0ensure_with_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_with_cast");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0ensure_with_cast(*var0, *var1);
}
ImmT  ptd0ensure_with_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 90
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 91
___nl__bool__5 = true;
#line 91
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__5));
#line 91
c_rt_lib0move(&___nl__im__4, ptd_priv0ensure_dyn(___nl__im__0, ___nl__im__1, ___nl__im__6, &___nl__im__2));
#line 91
//clear ___nl__bool__5;
#line 91
c_rt_lib0clear(&___nl__im__6);
#line 91
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(79));
#line 91
if(___nl__bool__3){ goto label_10;}
#line 91
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(177), ___nl__im__4));
#line 91
nl_die_arg(___nl__im__4);
#line 91
label_10:
;
#line 91
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(79)));
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__2);
#line 92
//clear ___nl__bool__3;
#line 92
c_rt_lib0clear(&___nl__im__4);
#line 92
return ___nl__im__1;
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__1);
#line 92
c_rt_lib0clear(&___nl__im__2);
#line 92
//clear ___nl__bool__3;
#line 92
c_rt_lib0clear(&___nl__im__4);
#line 92
return NULL;
return NULL;

}

ImmT  ptd0try_ensure0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_ensure");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0try_ensure(*var0, *var1);
}
ImmT  ptd0try_ensure(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 96
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 97
c_rt_lib0move(&___nl__im__4, ptd0ensure_dyn(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 97
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(79));
#line 97
if(___nl__bool__3){ goto label_9;}
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
c_rt_lib0clear(&___nl__im__2);
#line 97
//clear ___nl__bool__3;
#line 97
return ___nl__im__4;
#line 97
label_9:
;
#line 98
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(79), ___nl__im__1));
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
c_rt_lib0clear(&___nl__im__2);
#line 98
//clear ___nl__bool__3;
#line 98
c_rt_lib0clear(&___nl__im__4);
#line 98
return ___nl__im__5;
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
c_rt_lib0clear(&___nl__im__2);
#line 98
//clear ___nl__bool__3;
#line 98
c_rt_lib0clear(&___nl__im__4);
#line 98
c_rt_lib0clear(&___nl__im__5);
#line 98
return NULL;
return NULL;

}

ImmT  ptd0ensure_only_dynamic0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_dynamic");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0ensure_only_dynamic(*var0, *var1);
}
ImmT  ptd0ensure_only_dynamic(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
#line 102
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 103
c_rt_lib0move(&___nl__im__4, ptd0ensure_dyn(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 103
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(79));
#line 103
if(___nl__bool__3){ goto label_6;}
#line 103
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(177), ___nl__im__4));
#line 103
nl_die_arg(___nl__im__4);
#line 103
label_6:
;
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
//clear ___nl__bool__3;
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
return ___nl__im__1;
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
//clear ___nl__bool__3;
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
return NULL;
return NULL;

}

ImmT  ptd0ensure_only_dynamic_with_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_dynamic_with_cast");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0ensure_only_dynamic_with_cast(*var0, *var1);
}
ImmT  ptd0ensure_only_dynamic_with_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 108
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 109
___nl__bool__5 = true;
#line 109
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__5));
#line 109
c_rt_lib0move(&___nl__im__4, ptd_priv0ensure_dyn(___nl__im__0, ___nl__im__1, ___nl__im__6, &___nl__im__2));
#line 109
//clear ___nl__bool__5;
#line 109
c_rt_lib0clear(&___nl__im__6);
#line 109
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(79));
#line 109
if(___nl__bool__3){ goto label_10;}
#line 109
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(177), ___nl__im__4));
#line 109
nl_die_arg(___nl__im__4);
#line 109
label_10:
;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 110
//clear ___nl__bool__3;
#line 110
c_rt_lib0clear(&___nl__im__4);
#line 110
return ___nl__im__1;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 110
//clear ___nl__bool__3;
#line 110
c_rt_lib0clear(&___nl__im__4);
#line 110
return NULL;
return NULL;

}

ImmT  ptd0ensure_only_static_do_not_touch_without_permission0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_static_do_not_touch_without_permission");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0ensure_only_static_do_not_touch_without_permission(*var0, *var1);
}
ImmT  ptd0ensure_only_static_do_not_touch_without_permission(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
return ___nl__im__1;
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
return NULL;
return NULL;

}

ImmT  ptd0ensure_dyn0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd0ensure_dyn");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return ptd0ensure_dyn(*var0, *var1, var2);
}
ImmT  ptd0ensure_dyn(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
#line 119
___nl__bool__4 = false;
#line 119
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__4));
#line 119
c_rt_lib0move(&___nl__im__3, ptd_priv0ensure_dyn(___nl__im__0, ___nl__im__1, ___nl__im__5, ___ref___im__2));
#line 119
//clear ___nl__bool__4;
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
c_rt_lib0clear(&___nl__im__0);
#line 119
c_rt_lib0clear(&___nl__im__1);
#line 119
return ___nl__im__3;
return NULL;

}

ImmT  ptd_priv0ensure_dyn(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT * ___ref___im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
ptd_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
bool  ___nl__bool__71 = false;
INT  ___nl__int__72 = 0;
bool  ___nl__bool__73 = false;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
bool  ___nl__bool__102 = false;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
bool  ___nl__bool__105 = false;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
bool  ___nl__bool__111 = false;
INT  ___nl__int__112 = 0;
bool  ___nl__bool__113 = false;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
bool  ___nl__bool__123 = false;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
bool  ___nl__bool__129 = false;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
#line 123
___nl__bool__4 = c_std_lib0is_variant(___nl__im__0);
#line 123
___nl__bool__4 = !___nl__bool__4;
#line 123
___nl__bool__4 = !___nl__bool__4;
#line 123
if(___nl__bool__4){ goto label_15;}
#line 123
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1201));
#line 123
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__7, ___get_global_string_const(1202), (*___ref___im__3)));
#line 123
c_rt_lib0clear(&___nl__im__7);
#line 123
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__6));
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
c_rt_lib0clear(&___nl__im__1);
#line 123
c_rt_lib0clear(&___nl__im__2);
#line 123
//clear ___nl__bool__4;
#line 123
return ___nl__im__5;
#line 123
goto label_15;
#line 123
label_15:
;
#line 123
//clear ___nl__bool__4;
#line 123
c_rt_lib0clear(&___nl__im__5);
#line 125
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(310));
#line 125
if(___nl__bool__9){ goto label_39;}
#line 134
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(316));
#line 134
if(___nl__bool__9){ goto label_102;}
#line 143
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(308));
#line 143
if(___nl__bool__9){ goto label_189;}
#line 155
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(287));
#line 155
if(___nl__bool__9){ goto label_403;}
#line 159
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(317));
#line 159
if(___nl__bool__9){ goto label_471;}
#line 174
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(289));
#line 174
if(___nl__bool__9){ goto label_786;}
#line 178
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(288));
#line 178
if(___nl__bool__9){ goto label_865;}
#line 180
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(40));
#line 180
if(___nl__bool__9){ goto label_868;}
#line 184
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1198));
#line 184
if(___nl__bool__9){ goto label_934;}
#line 184
c_rt_lib0move(&___nl__im__10,___get_global_string_const(16));
#line 184
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__0));
#line 184
nl_die_arg(___nl__im__10);
#line 125
label_39:
;
#line 125
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(310)));
#line 125
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 126
___nl__bool__13 = c_std_lib0is_hash(___nl__im__1);
#line 126
___nl__bool__13 = !___nl__bool__13;
#line 126
___nl__bool__13 = !___nl__bool__13;
#line 126
if(___nl__bool__13){ goto label_62;}
#line 126
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1203));
#line 126
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__16, ___get_global_string_const(1202), (*___ref___im__3)));
#line 126
c_rt_lib0clear(&___nl__im__16);
#line 126
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__15));
#line 126
c_rt_lib0clear(&___nl__im__15);
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
//clear ___nl__bool__9;
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
//clear ___nl__bool__13;
#line 126
return ___nl__im__14;
#line 126
goto label_62;
#line 126
label_62:
;
#line 126
//clear ___nl__bool__13;
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 127
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 128
c_rt_lib0move(&___nl__im__20, c_rt_lib0init_iter(___nl__im__1));
#line 128
label_67:
;
#line 128
___nl__bool__18 = c_rt_lib0is_end_hash(___nl__im__20);
#line 128
if(___nl__bool__18){ goto label_99;}
#line 128
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_key_iter(___nl__im__20));
#line 128
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__17));
#line 129
c_rt_lib0array_push(___ref___im__3, ___nl__im__17);
#line 130
c_rt_lib0move(&___nl__im__22, ptd_priv0ensure_dyn(___nl__im__11, ___nl__im__19, ___nl__im__2, ___ref___im__3));
#line 130
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(79));
#line 130
if(___nl__bool__21){ goto label_90;}
#line 130
c_rt_lib0clear(&___nl__im__0);
#line 130
c_rt_lib0clear(&___nl__im__1);
#line 130
c_rt_lib0clear(&___nl__im__2);
#line 130
c_rt_lib0clear(&___nl__im__8);
#line 130
//clear ___nl__bool__9;
#line 130
c_rt_lib0clear(&___nl__im__10);
#line 130
c_rt_lib0clear(&___nl__im__11);
#line 130
c_rt_lib0clear(&___nl__im__12);
#line 130
c_rt_lib0clear(&___nl__im__17);
#line 130
//clear ___nl__bool__18;
#line 130
c_rt_lib0clear(&___nl__im__19);
#line 130
c_rt_lib0clear(&___nl__im__20);
#line 130
//clear ___nl__bool__21;
#line 130
return ___nl__im__22;
#line 130
label_90:
;
#line 130
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(79)));
#line 130
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__8, ___nl__im__17, ___nl__im__23));
#line 131
c_rt_lib0delete(array0pop(___ref___im__3));
#line 131
//clear ___nl__bool__21;
#line 131
c_rt_lib0clear(&___nl__im__22);
#line 131
c_rt_lib0clear(&___nl__im__23);
#line 132
c_rt_lib0move(&___nl__im__20, c_rt_lib0next_iter(___nl__im__20));
#line 132
goto label_67;
#line 132
label_99:
;
#line 133
c_rt_lib0copy(&___nl__im__1, ___nl__im__8);
#line 134
goto label_1085;
#line 134
label_102:
;
#line 134
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(316)));
#line 134
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 135
___nl__bool__26 = c_std_lib0is_array(___nl__im__1);
#line 135
___nl__bool__26 = !___nl__bool__26;
#line 135
___nl__bool__26 = !___nl__bool__26;
#line 135
if(___nl__bool__26){ goto label_134;}
#line 135
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1204));
#line 135
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__29, ___get_global_string_const(1202), (*___ref___im__3)));
#line 135
c_rt_lib0clear(&___nl__im__29);
#line 135
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__28));
#line 135
c_rt_lib0clear(&___nl__im__28);
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
//clear ___nl__bool__9;
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
c_rt_lib0clear(&___nl__im__11);
#line 135
c_rt_lib0clear(&___nl__im__12);
#line 135
c_rt_lib0clear(&___nl__im__17);
#line 135
//clear ___nl__bool__18;
#line 135
c_rt_lib0clear(&___nl__im__19);
#line 135
c_rt_lib0clear(&___nl__im__20);
#line 135
//clear ___nl__bool__21;
#line 135
c_rt_lib0clear(&___nl__im__22);
#line 135
c_rt_lib0clear(&___nl__im__23);
#line 135
c_rt_lib0clear(&___nl__im__24);
#line 135
c_rt_lib0clear(&___nl__im__25);
#line 135
//clear ___nl__bool__26;
#line 135
return ___nl__im__27;
#line 135
goto label_134;
#line 135
label_134:
;
#line 135
//clear ___nl__bool__26;
#line 135
c_rt_lib0clear(&___nl__im__27);
#line 136
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 137
___nl__int__31 = 0;
#line 137
___nl__int__32 = 1;
#line 137
___nl__int__33 = c_rt_lib0array_len(___nl__im__1);
#line 137
label_141:
;
#line 137
___nl__int__35 = ___nl__int__31 >= ___nl__int__33;
#line 137
___nl__bool__34 = ___nl__int__35;
#line 137
if(___nl__bool__34){ goto label_187;}
#line 137
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__1, ___nl__int__31));
#line 137
c_rt_lib0copy(&___nl__im__30, ___nl__im__36);
#line 138
c_rt_lib0move(&___nl__im__37,___get_global_string_const(1205));
#line 138
c_rt_lib0array_push(___ref___im__3, ___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 139
c_rt_lib0move(&___nl__im__40, ptd_priv0ensure_dyn(___nl__im__24, ___nl__im__30, ___nl__im__2, ___ref___im__3));
#line 139
___nl__bool__39 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(79));
#line 139
if(___nl__bool__39){ goto label_180;}
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__8);
#line 139
//clear ___nl__bool__9;
#line 139
c_rt_lib0clear(&___nl__im__10);
#line 139
c_rt_lib0clear(&___nl__im__11);
#line 139
c_rt_lib0clear(&___nl__im__12);
#line 139
c_rt_lib0clear(&___nl__im__17);
#line 139
//clear ___nl__bool__18;
#line 139
c_rt_lib0clear(&___nl__im__19);
#line 139
c_rt_lib0clear(&___nl__im__20);
#line 139
//clear ___nl__bool__21;
#line 139
c_rt_lib0clear(&___nl__im__22);
#line 139
c_rt_lib0clear(&___nl__im__23);
#line 139
c_rt_lib0clear(&___nl__im__24);
#line 139
c_rt_lib0clear(&___nl__im__25);
#line 139
c_rt_lib0clear(&___nl__im__30);
#line 139
//clear ___nl__int__31;
#line 139
//clear ___nl__int__32;
#line 139
//clear ___nl__int__33;
#line 139
//clear ___nl__bool__34;
#line 139
//clear ___nl__int__35;
#line 139
c_rt_lib0clear(&___nl__im__36);
#line 139
c_rt_lib0clear(&___nl__im__38);
#line 139
//clear ___nl__bool__39;
#line 139
return ___nl__im__40;
#line 139
label_180:
;
#line 139
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(79)));
#line 140
c_rt_lib0array_push(&___nl__im__8, ___nl__im__38);
#line 141
c_rt_lib0delete(array0pop(___ref___im__3));
#line 141
c_rt_lib0clear(&___nl__im__30);
#line 142
___nl__int__31 = ___nl__int__31 + ___nl__int__32;
#line 142
goto label_141;
#line 142
label_187:
;
#line 143
goto label_1085;
#line 143
label_189:
;
#line 143
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(308)));
#line 143
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 144
___nl__bool__43 = c_std_lib0is_hash(___nl__im__1);
#line 144
___nl__bool__43 = !___nl__bool__43;
#line 144
___nl__bool__43 = !___nl__bool__43;
#line 144
if(___nl__bool__43){ goto label_233;}
#line 144
c_rt_lib0move(&___nl__im__46,___get_global_string_const(1206));
#line 144
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__46, ___get_global_string_const(1202), (*___ref___im__3)));
#line 144
c_rt_lib0clear(&___nl__im__46);
#line 144
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__45));
#line 144
c_rt_lib0clear(&___nl__im__45);
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
//clear ___nl__bool__9;
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
c_rt_lib0clear(&___nl__im__11);
#line 144
c_rt_lib0clear(&___nl__im__12);
#line 144
c_rt_lib0clear(&___nl__im__17);
#line 144
//clear ___nl__bool__18;
#line 144
c_rt_lib0clear(&___nl__im__19);
#line 144
c_rt_lib0clear(&___nl__im__20);
#line 144
//clear ___nl__bool__21;
#line 144
c_rt_lib0clear(&___nl__im__22);
#line 144
c_rt_lib0clear(&___nl__im__23);
#line 144
c_rt_lib0clear(&___nl__im__24);
#line 144
c_rt_lib0clear(&___nl__im__25);
#line 144
c_rt_lib0clear(&___nl__im__30);
#line 144
//clear ___nl__int__31;
#line 144
//clear ___nl__int__32;
#line 144
//clear ___nl__int__33;
#line 144
//clear ___nl__bool__34;
#line 144
//clear ___nl__int__35;
#line 144
c_rt_lib0clear(&___nl__im__36);
#line 144
c_rt_lib0clear(&___nl__im__38);
#line 144
//clear ___nl__bool__39;
#line 144
c_rt_lib0clear(&___nl__im__40);
#line 144
c_rt_lib0clear(&___nl__im__41);
#line 144
c_rt_lib0clear(&___nl__im__42);
#line 144
//clear ___nl__bool__43;
#line 144
return ___nl__im__44;
#line 144
goto label_233;
#line 144
label_233:
;
#line 144
//clear ___nl__bool__43;
#line 144
c_rt_lib0clear(&___nl__im__44);
#line 145
___nl__int__48 = hash0size(___nl__im__41);
#line 145
___nl__int__49 = hash0size(___nl__im__1);
#line 145
___nl__int__50 = ___nl__int__48 == ___nl__int__49;
#line 145
___nl__bool__47 = ___nl__int__50;
#line 145
//clear ___nl__int__48;
#line 145
//clear ___nl__int__49;
#line 145
//clear ___nl__int__50;
#line 145
___nl__bool__47 = !___nl__bool__47;
#line 145
___nl__bool__47 = !___nl__bool__47;
#line 145
if(___nl__bool__47){ goto label_283;}
#line 145
c_rt_lib0move(&___nl__im__53,___get_global_string_const(1207));
#line 145
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__53, ___get_global_string_const(1202), (*___ref___im__3)));
#line 145
c_rt_lib0clear(&___nl__im__53);
#line 145
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__52));
#line 145
c_rt_lib0clear(&___nl__im__52);
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__1);
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 145
//clear ___nl__bool__9;
#line 145
c_rt_lib0clear(&___nl__im__10);
#line 145
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0clear(&___nl__im__12);
#line 145
c_rt_lib0clear(&___nl__im__17);
#line 145
//clear ___nl__bool__18;
#line 145
c_rt_lib0clear(&___nl__im__19);
#line 145
c_rt_lib0clear(&___nl__im__20);
#line 145
//clear ___nl__bool__21;
#line 145
c_rt_lib0clear(&___nl__im__22);
#line 145
c_rt_lib0clear(&___nl__im__23);
#line 145
c_rt_lib0clear(&___nl__im__24);
#line 145
c_rt_lib0clear(&___nl__im__25);
#line 145
c_rt_lib0clear(&___nl__im__30);
#line 145
//clear ___nl__int__31;
#line 145
//clear ___nl__int__32;
#line 145
//clear ___nl__int__33;
#line 145
//clear ___nl__bool__34;
#line 145
//clear ___nl__int__35;
#line 145
c_rt_lib0clear(&___nl__im__36);
#line 145
c_rt_lib0clear(&___nl__im__38);
#line 145
//clear ___nl__bool__39;
#line 145
c_rt_lib0clear(&___nl__im__40);
#line 145
c_rt_lib0clear(&___nl__im__41);
#line 145
c_rt_lib0clear(&___nl__im__42);
#line 145
//clear ___nl__bool__47;
#line 145
return ___nl__im__51;
#line 145
goto label_283;
#line 145
label_283:
;
#line 145
//clear ___nl__bool__47;
#line 145
c_rt_lib0clear(&___nl__im__51);
#line 146
c_rt_lib0move(&___nl__im__54,___get_global_string_const(1208));
#line 146
c_rt_lib0array_push(___ref___im__3, ___nl__im__54);
#line 146
c_rt_lib0clear(&___nl__im__54);
#line 147
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 148
c_rt_lib0move(&___nl__im__58, c_rt_lib0init_iter(___nl__im__41));
#line 148
label_291:
;
#line 148
___nl__bool__56 = c_rt_lib0is_end_hash(___nl__im__58);
#line 148
if(___nl__bool__56){ goto label_400;}
#line 148
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_key_iter(___nl__im__58));
#line 148
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value(___nl__im__41, ___nl__im__55));
#line 149
c_rt_lib0array_push(___ref___im__3, ___nl__im__55);
#line 150
___nl__bool__59 = hash0has_key(___nl__im__1, ___nl__im__55);
#line 150
___nl__bool__59 = !___nl__bool__59;
#line 150
___nl__bool__59 = !___nl__bool__59;
#line 150
if(___nl__bool__59){ goto label_348;}
#line 150
c_rt_lib0move(&___nl__im__64,___get_global_string_const(1209));
#line 150
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__55));
#line 150
c_rt_lib0clear(&___nl__im__64);
#line 150
c_rt_lib0move(&___nl__im__65,___get_global_string_const(1210));
#line 150
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__65));
#line 150
c_rt_lib0clear(&___nl__im__63);
#line 150
c_rt_lib0clear(&___nl__im__65);
#line 150
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__62, ___get_global_string_const(1202), (*___ref___im__3)));
#line 150
c_rt_lib0clear(&___nl__im__62);
#line 150
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__61));
#line 150
c_rt_lib0clear(&___nl__im__61);
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
c_rt_lib0clear(&___nl__im__1);
#line 150
c_rt_lib0clear(&___nl__im__2);
#line 150
c_rt_lib0clear(&___nl__im__8);
#line 150
//clear ___nl__bool__9;
#line 150
c_rt_lib0clear(&___nl__im__10);
#line 150
c_rt_lib0clear(&___nl__im__11);
#line 150
c_rt_lib0clear(&___nl__im__12);
#line 150
c_rt_lib0clear(&___nl__im__17);
#line 150
//clear ___nl__bool__18;
#line 150
c_rt_lib0clear(&___nl__im__19);
#line 150
c_rt_lib0clear(&___nl__im__20);
#line 150
//clear ___nl__bool__21;
#line 150
c_rt_lib0clear(&___nl__im__22);
#line 150
c_rt_lib0clear(&___nl__im__23);
#line 150
c_rt_lib0clear(&___nl__im__24);
#line 150
c_rt_lib0clear(&___nl__im__25);
#line 150
c_rt_lib0clear(&___nl__im__30);
#line 150
//clear ___nl__int__31;
#line 150
//clear ___nl__int__32;
#line 150
//clear ___nl__int__33;
#line 150
//clear ___nl__bool__34;
#line 150
//clear ___nl__int__35;
#line 150
c_rt_lib0clear(&___nl__im__36);
#line 150
c_rt_lib0clear(&___nl__im__38);
#line 150
//clear ___nl__bool__39;
#line 150
c_rt_lib0clear(&___nl__im__40);
#line 150
c_rt_lib0clear(&___nl__im__41);
#line 150
c_rt_lib0clear(&___nl__im__42);
#line 150
c_rt_lib0clear(&___nl__im__55);
#line 150
//clear ___nl__bool__56;
#line 150
c_rt_lib0clear(&___nl__im__57);
#line 150
c_rt_lib0clear(&___nl__im__58);
#line 150
//clear ___nl__bool__59;
#line 150
return ___nl__im__60;
#line 150
goto label_348;
#line 150
label_348:
;
#line 150
//clear ___nl__bool__59;
#line 150
c_rt_lib0clear(&___nl__im__60);
#line 151
c_rt_lib0move(&___nl__im__68, hash0get_value(___nl__im__1, ___nl__im__55));
#line 151
c_rt_lib0move(&___nl__im__67, ptd_priv0ensure_dyn(___nl__im__57, ___nl__im__68, ___nl__im__2, ___ref___im__3));
#line 151
c_rt_lib0clear(&___nl__im__68);
#line 151
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__67, ___get_global_string_const(79));
#line 151
if(___nl__bool__66){ goto label_391;}
#line 151
c_rt_lib0clear(&___nl__im__0);
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__8);
#line 151
//clear ___nl__bool__9;
#line 151
c_rt_lib0clear(&___nl__im__10);
#line 151
c_rt_lib0clear(&___nl__im__11);
#line 151
c_rt_lib0clear(&___nl__im__12);
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 151
//clear ___nl__bool__18;
#line 151
c_rt_lib0clear(&___nl__im__19);
#line 151
c_rt_lib0clear(&___nl__im__20);
#line 151
//clear ___nl__bool__21;
#line 151
c_rt_lib0clear(&___nl__im__22);
#line 151
c_rt_lib0clear(&___nl__im__23);
#line 151
c_rt_lib0clear(&___nl__im__24);
#line 151
c_rt_lib0clear(&___nl__im__25);
#line 151
c_rt_lib0clear(&___nl__im__30);
#line 151
//clear ___nl__int__31;
#line 151
//clear ___nl__int__32;
#line 151
//clear ___nl__int__33;
#line 151
//clear ___nl__bool__34;
#line 151
//clear ___nl__int__35;
#line 151
c_rt_lib0clear(&___nl__im__36);
#line 151
c_rt_lib0clear(&___nl__im__38);
#line 151
//clear ___nl__bool__39;
#line 151
c_rt_lib0clear(&___nl__im__40);
#line 151
c_rt_lib0clear(&___nl__im__41);
#line 151
c_rt_lib0clear(&___nl__im__42);
#line 151
c_rt_lib0clear(&___nl__im__55);
#line 151
//clear ___nl__bool__56;
#line 151
c_rt_lib0clear(&___nl__im__57);
#line 151
c_rt_lib0clear(&___nl__im__58);
#line 151
//clear ___nl__bool__66;
#line 151
return ___nl__im__67;
#line 151
label_391:
;
#line 151
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__67, ___get_global_string_const(79)));
#line 151
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__8, ___nl__im__55, ___nl__im__69));
#line 152
c_rt_lib0delete(array0pop(___ref___im__3));
#line 152
//clear ___nl__bool__66;
#line 152
c_rt_lib0clear(&___nl__im__67);
#line 152
c_rt_lib0clear(&___nl__im__69);
#line 153
c_rt_lib0move(&___nl__im__58, c_rt_lib0next_iter(___nl__im__58));
#line 153
goto label_291;
#line 153
label_400:
;
#line 154
c_rt_lib0delete(array0pop(___ref___im__3));
#line 155
goto label_1085;
#line 155
label_403:
;
#line 156
___nl__bool__70 = c_rt_lib0check_true_native(___nl__im__2);
#line 156
___nl__bool__71 = !___nl__bool__70;
#line 156
if(___nl__bool__71){ goto label_408;}
#line 156
___nl__bool__70 = c_std_lib0is_int(___nl__im__1);
#line 156
label_408:
;
#line 156
//clear ___nl__bool__71;
#line 156
___nl__bool__70 = !___nl__bool__70;
#line 156
if(___nl__bool__70){ goto label_416;}
#line 156
___nl__int__72 = getIntFromImm(___nl__im__1);
#line 156
c_rt_lib0move(&___nl__im__1, c_std_lib0int_to_string(___nl__int__72));
#line 156
//clear ___nl__int__72;
#line 156
goto label_416;
#line 156
label_416:
;
#line 156
//clear ___nl__bool__70;
#line 157
___nl__bool__73 = c_std_lib0is_string(___nl__im__1);
#line 157
___nl__bool__73 = !___nl__bool__73;
#line 157
___nl__bool__73 = !___nl__bool__73;
#line 157
if(___nl__bool__73){ goto label_466;}
#line 157
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1211));
#line 157
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__76, ___get_global_string_const(1202), (*___ref___im__3)));
#line 157
c_rt_lib0clear(&___nl__im__76);
#line 157
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__75));
#line 157
c_rt_lib0clear(&___nl__im__75);
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
c_rt_lib0clear(&___nl__im__8);
#line 157
//clear ___nl__bool__9;
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 157
c_rt_lib0clear(&___nl__im__12);
#line 157
c_rt_lib0clear(&___nl__im__17);
#line 157
//clear ___nl__bool__18;
#line 157
c_rt_lib0clear(&___nl__im__19);
#line 157
c_rt_lib0clear(&___nl__im__20);
#line 157
//clear ___nl__bool__21;
#line 157
c_rt_lib0clear(&___nl__im__22);
#line 157
c_rt_lib0clear(&___nl__im__23);
#line 157
c_rt_lib0clear(&___nl__im__24);
#line 157
c_rt_lib0clear(&___nl__im__25);
#line 157
c_rt_lib0clear(&___nl__im__30);
#line 157
//clear ___nl__int__31;
#line 157
//clear ___nl__int__32;
#line 157
//clear ___nl__int__33;
#line 157
//clear ___nl__bool__34;
#line 157
//clear ___nl__int__35;
#line 157
c_rt_lib0clear(&___nl__im__36);
#line 157
c_rt_lib0clear(&___nl__im__38);
#line 157
//clear ___nl__bool__39;
#line 157
c_rt_lib0clear(&___nl__im__40);
#line 157
c_rt_lib0clear(&___nl__im__41);
#line 157
c_rt_lib0clear(&___nl__im__42);
#line 157
c_rt_lib0clear(&___nl__im__55);
#line 157
//clear ___nl__bool__56;
#line 157
c_rt_lib0clear(&___nl__im__57);
#line 157
c_rt_lib0clear(&___nl__im__58);
#line 157
//clear ___nl__bool__66;
#line 157
c_rt_lib0clear(&___nl__im__67);
#line 157
c_rt_lib0clear(&___nl__im__69);
#line 157
//clear ___nl__bool__73;
#line 157
return ___nl__im__74;
#line 157
goto label_466;
#line 157
label_466:
;
#line 157
//clear ___nl__bool__73;
#line 157
c_rt_lib0clear(&___nl__im__74);
#line 158
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 159
goto label_1085;
#line 159
label_471:
;
#line 159
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(317)));
#line 159
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 160
___nl__bool__79 = c_std_lib0is_variant(___nl__im__1);
#line 160
___nl__bool__79 = !___nl__bool__79;
#line 160
___nl__bool__79 = !___nl__bool__79;
#line 160
if(___nl__bool__79){ goto label_524;}
#line 160
c_rt_lib0move(&___nl__im__82,___get_global_string_const(1212));
#line 160
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__82, ___get_global_string_const(1202), (*___ref___im__3)));
#line 160
c_rt_lib0clear(&___nl__im__82);
#line 160
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__81));
#line 160
c_rt_lib0clear(&___nl__im__81);
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
c_rt_lib0clear(&___nl__im__1);
#line 160
c_rt_lib0clear(&___nl__im__2);
#line 160
c_rt_lib0clear(&___nl__im__8);
#line 160
//clear ___nl__bool__9;
#line 160
c_rt_lib0clear(&___nl__im__10);
#line 160
c_rt_lib0clear(&___nl__im__11);
#line 160
c_rt_lib0clear(&___nl__im__12);
#line 160
c_rt_lib0clear(&___nl__im__17);
#line 160
//clear ___nl__bool__18;
#line 160
c_rt_lib0clear(&___nl__im__19);
#line 160
c_rt_lib0clear(&___nl__im__20);
#line 160
//clear ___nl__bool__21;
#line 160
c_rt_lib0clear(&___nl__im__22);
#line 160
c_rt_lib0clear(&___nl__im__23);
#line 160
c_rt_lib0clear(&___nl__im__24);
#line 160
c_rt_lib0clear(&___nl__im__25);
#line 160
c_rt_lib0clear(&___nl__im__30);
#line 160
//clear ___nl__int__31;
#line 160
//clear ___nl__int__32;
#line 160
//clear ___nl__int__33;
#line 160
//clear ___nl__bool__34;
#line 160
//clear ___nl__int__35;
#line 160
c_rt_lib0clear(&___nl__im__36);
#line 160
c_rt_lib0clear(&___nl__im__38);
#line 160
//clear ___nl__bool__39;
#line 160
c_rt_lib0clear(&___nl__im__40);
#line 160
c_rt_lib0clear(&___nl__im__41);
#line 160
c_rt_lib0clear(&___nl__im__42);
#line 160
c_rt_lib0clear(&___nl__im__55);
#line 160
//clear ___nl__bool__56;
#line 160
c_rt_lib0clear(&___nl__im__57);
#line 160
c_rt_lib0clear(&___nl__im__58);
#line 160
//clear ___nl__bool__66;
#line 160
c_rt_lib0clear(&___nl__im__67);
#line 160
c_rt_lib0clear(&___nl__im__69);
#line 160
c_rt_lib0clear(&___nl__im__77);
#line 160
c_rt_lib0clear(&___nl__im__78);
#line 160
//clear ___nl__bool__79;
#line 160
return ___nl__im__80;
#line 160
goto label_524;
#line 160
label_524:
;
#line 160
//clear ___nl__bool__79;
#line 160
c_rt_lib0clear(&___nl__im__80);
#line 161
c_rt_lib0move(&___nl__im__83, ov0get_element(___nl__im__1));
#line 162
___nl__bool__84 = hash0has_key(___nl__im__77, ___nl__im__83);
#line 162
___nl__bool__84 = !___nl__bool__84;
#line 162
___nl__bool__84 = !___nl__bool__84;
#line 162
if(___nl__bool__84){ goto label_585;}
#line 162
c_rt_lib0move(&___nl__im__89,___get_global_string_const(1213));
#line 162
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__83));
#line 162
c_rt_lib0clear(&___nl__im__89);
#line 162
c_rt_lib0move(&___nl__im__90,___get_global_string_const(1214));
#line 162
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__90));
#line 162
c_rt_lib0clear(&___nl__im__88);
#line 162
c_rt_lib0clear(&___nl__im__90);
#line 162
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__87, ___get_global_string_const(1202), (*___ref___im__3)));
#line 162
c_rt_lib0clear(&___nl__im__87);
#line 162
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__86));
#line 162
c_rt_lib0clear(&___nl__im__86);
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
c_rt_lib0clear(&___nl__im__8);
#line 162
//clear ___nl__bool__9;
#line 162
c_rt_lib0clear(&___nl__im__10);
#line 162
c_rt_lib0clear(&___nl__im__11);
#line 162
c_rt_lib0clear(&___nl__im__12);
#line 162
c_rt_lib0clear(&___nl__im__17);
#line 162
//clear ___nl__bool__18;
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 162
c_rt_lib0clear(&___nl__im__20);
#line 162
//clear ___nl__bool__21;
#line 162
c_rt_lib0clear(&___nl__im__22);
#line 162
c_rt_lib0clear(&___nl__im__23);
#line 162
c_rt_lib0clear(&___nl__im__24);
#line 162
c_rt_lib0clear(&___nl__im__25);
#line 162
c_rt_lib0clear(&___nl__im__30);
#line 162
//clear ___nl__int__31;
#line 162
//clear ___nl__int__32;
#line 162
//clear ___nl__int__33;
#line 162
//clear ___nl__bool__34;
#line 162
//clear ___nl__int__35;
#line 162
c_rt_lib0clear(&___nl__im__36);
#line 162
c_rt_lib0clear(&___nl__im__38);
#line 162
//clear ___nl__bool__39;
#line 162
c_rt_lib0clear(&___nl__im__40);
#line 162
c_rt_lib0clear(&___nl__im__41);
#line 162
c_rt_lib0clear(&___nl__im__42);
#line 162
c_rt_lib0clear(&___nl__im__55);
#line 162
//clear ___nl__bool__56;
#line 162
c_rt_lib0clear(&___nl__im__57);
#line 162
c_rt_lib0clear(&___nl__im__58);
#line 162
//clear ___nl__bool__66;
#line 162
c_rt_lib0clear(&___nl__im__67);
#line 162
c_rt_lib0clear(&___nl__im__69);
#line 162
c_rt_lib0clear(&___nl__im__77);
#line 162
c_rt_lib0clear(&___nl__im__78);
#line 162
c_rt_lib0clear(&___nl__im__83);
#line 162
//clear ___nl__bool__84;
#line 162
return ___nl__im__85;
#line 162
goto label_585;
#line 162
label_585:
;
#line 162
//clear ___nl__bool__84;
#line 162
c_rt_lib0clear(&___nl__im__85);
#line 163
c_rt_lib0array_push(___ref___im__3, ___nl__im__83);
#line 164
c_rt_lib0move(&___nl__im__91, hash0get_value(___nl__im__77, ___nl__im__83));
#line 165
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_string_const(28));
#line 165
if(___nl__bool__92){ goto label_597;}
#line 169
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_string_const(29));
#line 169
if(___nl__bool__92){ goto label_717;}
#line 169
c_rt_lib0move(&___nl__im__93,___get_global_string_const(16));
#line 169
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_mk(2, ___nl__im__93, ___nl__im__91));
#line 169
nl_die_arg(___nl__im__93);
#line 165
label_597:
;
#line 165
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__91, ___get_global_string_const(28)));
#line 165
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 166
c_rt_lib0move(&___nl__im__97, ov0has_value(___nl__im__1));
#line 166
___nl__bool__96 = c_rt_lib0check_true_native(___nl__im__97);
#line 166
c_rt_lib0clear(&___nl__im__97);
#line 166
___nl__bool__96 = !___nl__bool__96;
#line 166
___nl__bool__96 = !___nl__bool__96;
#line 166
if(___nl__bool__96){ goto label_658;}
#line 166
c_rt_lib0move(&___nl__im__100,___get_global_string_const(1215));
#line 166
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__100, ___get_global_string_const(1202), (*___ref___im__3)));
#line 166
c_rt_lib0clear(&___nl__im__100);
#line 166
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__99));
#line 166
c_rt_lib0clear(&___nl__im__99);
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__8);
#line 166
//clear ___nl__bool__9;
#line 166
c_rt_lib0clear(&___nl__im__10);
#line 166
c_rt_lib0clear(&___nl__im__11);
#line 166
c_rt_lib0clear(&___nl__im__12);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
//clear ___nl__bool__18;
#line 166
c_rt_lib0clear(&___nl__im__19);
#line 166
c_rt_lib0clear(&___nl__im__20);
#line 166
//clear ___nl__bool__21;
#line 166
c_rt_lib0clear(&___nl__im__22);
#line 166
c_rt_lib0clear(&___nl__im__23);
#line 166
c_rt_lib0clear(&___nl__im__24);
#line 166
c_rt_lib0clear(&___nl__im__25);
#line 166
c_rt_lib0clear(&___nl__im__30);
#line 166
//clear ___nl__int__31;
#line 166
//clear ___nl__int__32;
#line 166
//clear ___nl__int__33;
#line 166
//clear ___nl__bool__34;
#line 166
//clear ___nl__int__35;
#line 166
c_rt_lib0clear(&___nl__im__36);
#line 166
c_rt_lib0clear(&___nl__im__38);
#line 166
//clear ___nl__bool__39;
#line 166
c_rt_lib0clear(&___nl__im__40);
#line 166
c_rt_lib0clear(&___nl__im__41);
#line 166
c_rt_lib0clear(&___nl__im__42);
#line 166
c_rt_lib0clear(&___nl__im__55);
#line 166
//clear ___nl__bool__56;
#line 166
c_rt_lib0clear(&___nl__im__57);
#line 166
c_rt_lib0clear(&___nl__im__58);
#line 166
//clear ___nl__bool__66;
#line 166
c_rt_lib0clear(&___nl__im__67);
#line 166
c_rt_lib0clear(&___nl__im__69);
#line 166
c_rt_lib0clear(&___nl__im__77);
#line 166
c_rt_lib0clear(&___nl__im__78);
#line 166
c_rt_lib0clear(&___nl__im__83);
#line 166
c_rt_lib0clear(&___nl__im__91);
#line 166
//clear ___nl__bool__92;
#line 166
c_rt_lib0clear(&___nl__im__93);
#line 166
c_rt_lib0clear(&___nl__im__94);
#line 166
c_rt_lib0clear(&___nl__im__95);
#line 166
//clear ___nl__bool__96;
#line 166
return ___nl__im__98;
#line 166
goto label_658;
#line 166
label_658:
;
#line 166
//clear ___nl__bool__96;
#line 166
c_rt_lib0clear(&___nl__im__98);
#line 167
c_rt_lib0move(&___nl__im__104, ov0get_value(___nl__im__1));
#line 167
c_rt_lib0move(&___nl__im__103, ptd_priv0ensure_dyn(___nl__im__94, ___nl__im__104, ___nl__im__2, ___ref___im__3));
#line 167
c_rt_lib0clear(&___nl__im__104);
#line 167
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(79));
#line 167
if(___nl__bool__102){ goto label_713;}
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
c_rt_lib0clear(&___nl__im__8);
#line 167
//clear ___nl__bool__9;
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 167
c_rt_lib0clear(&___nl__im__11);
#line 167
c_rt_lib0clear(&___nl__im__12);
#line 167
c_rt_lib0clear(&___nl__im__17);
#line 167
//clear ___nl__bool__18;
#line 167
c_rt_lib0clear(&___nl__im__19);
#line 167
c_rt_lib0clear(&___nl__im__20);
#line 167
//clear ___nl__bool__21;
#line 167
c_rt_lib0clear(&___nl__im__22);
#line 167
c_rt_lib0clear(&___nl__im__23);
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 167
c_rt_lib0clear(&___nl__im__30);
#line 167
//clear ___nl__int__31;
#line 167
//clear ___nl__int__32;
#line 167
//clear ___nl__int__33;
#line 167
//clear ___nl__bool__34;
#line 167
//clear ___nl__int__35;
#line 167
c_rt_lib0clear(&___nl__im__36);
#line 167
c_rt_lib0clear(&___nl__im__38);
#line 167
//clear ___nl__bool__39;
#line 167
c_rt_lib0clear(&___nl__im__40);
#line 167
c_rt_lib0clear(&___nl__im__41);
#line 167
c_rt_lib0clear(&___nl__im__42);
#line 167
c_rt_lib0clear(&___nl__im__55);
#line 167
//clear ___nl__bool__56;
#line 167
c_rt_lib0clear(&___nl__im__57);
#line 167
c_rt_lib0clear(&___nl__im__58);
#line 167
//clear ___nl__bool__66;
#line 167
c_rt_lib0clear(&___nl__im__67);
#line 167
c_rt_lib0clear(&___nl__im__69);
#line 167
c_rt_lib0clear(&___nl__im__77);
#line 167
c_rt_lib0clear(&___nl__im__78);
#line 167
c_rt_lib0clear(&___nl__im__83);
#line 167
c_rt_lib0clear(&___nl__im__91);
#line 167
//clear ___nl__bool__92;
#line 167
c_rt_lib0clear(&___nl__im__93);
#line 167
c_rt_lib0clear(&___nl__im__94);
#line 167
c_rt_lib0clear(&___nl__im__95);
#line 167
c_rt_lib0clear(&___nl__im__101);
#line 167
//clear ___nl__bool__102;
#line 167
return ___nl__im__103;
#line 167
label_713:
;
#line 167
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(79)));
#line 168
c_rt_lib0move(&___nl__im__8, ov0mk_val(___nl__im__83, ___nl__im__101));
#line 169
goto label_783;
#line 169
label_717:
;
#line 170
c_rt_lib0move(&___nl__im__106, ov0has_value(___nl__im__1));
#line 170
___nl__bool__105 = c_rt_lib0check_true_native(___nl__im__106);
#line 170
c_rt_lib0clear(&___nl__im__106);
#line 170
___nl__bool__105 = !___nl__bool__105;
#line 170
if(___nl__bool__105){ goto label_778;}
#line 170
c_rt_lib0move(&___nl__im__109,___get_global_string_const(1216));
#line 170
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__109, ___get_global_string_const(1202), (*___ref___im__3)));
#line 170
c_rt_lib0clear(&___nl__im__109);
#line 170
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__108));
#line 170
c_rt_lib0clear(&___nl__im__108);
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
c_rt_lib0clear(&___nl__im__8);
#line 170
//clear ___nl__bool__9;
#line 170
c_rt_lib0clear(&___nl__im__10);
#line 170
c_rt_lib0clear(&___nl__im__11);
#line 170
c_rt_lib0clear(&___nl__im__12);
#line 170
c_rt_lib0clear(&___nl__im__17);
#line 170
//clear ___nl__bool__18;
#line 170
c_rt_lib0clear(&___nl__im__19);
#line 170
c_rt_lib0clear(&___nl__im__20);
#line 170
//clear ___nl__bool__21;
#line 170
c_rt_lib0clear(&___nl__im__22);
#line 170
c_rt_lib0clear(&___nl__im__23);
#line 170
c_rt_lib0clear(&___nl__im__24);
#line 170
c_rt_lib0clear(&___nl__im__25);
#line 170
c_rt_lib0clear(&___nl__im__30);
#line 170
//clear ___nl__int__31;
#line 170
//clear ___nl__int__32;
#line 170
//clear ___nl__int__33;
#line 170
//clear ___nl__bool__34;
#line 170
//clear ___nl__int__35;
#line 170
c_rt_lib0clear(&___nl__im__36);
#line 170
c_rt_lib0clear(&___nl__im__38);
#line 170
//clear ___nl__bool__39;
#line 170
c_rt_lib0clear(&___nl__im__40);
#line 170
c_rt_lib0clear(&___nl__im__41);
#line 170
c_rt_lib0clear(&___nl__im__42);
#line 170
c_rt_lib0clear(&___nl__im__55);
#line 170
//clear ___nl__bool__56;
#line 170
c_rt_lib0clear(&___nl__im__57);
#line 170
c_rt_lib0clear(&___nl__im__58);
#line 170
//clear ___nl__bool__66;
#line 170
c_rt_lib0clear(&___nl__im__67);
#line 170
c_rt_lib0clear(&___nl__im__69);
#line 170
c_rt_lib0clear(&___nl__im__77);
#line 170
c_rt_lib0clear(&___nl__im__78);
#line 170
c_rt_lib0clear(&___nl__im__83);
#line 170
c_rt_lib0clear(&___nl__im__91);
#line 170
//clear ___nl__bool__92;
#line 170
c_rt_lib0clear(&___nl__im__93);
#line 170
c_rt_lib0clear(&___nl__im__94);
#line 170
c_rt_lib0clear(&___nl__im__95);
#line 170
c_rt_lib0clear(&___nl__im__101);
#line 170
//clear ___nl__bool__102;
#line 170
c_rt_lib0clear(&___nl__im__103);
#line 170
//clear ___nl__bool__105;
#line 170
return ___nl__im__107;
#line 170
goto label_778;
#line 170
label_778:
;
#line 170
//clear ___nl__bool__105;
#line 170
c_rt_lib0clear(&___nl__im__107);
#line 171
c_rt_lib0move(&___nl__im__8, ov0mk(___nl__im__83));
#line 172
goto label_783;
#line 172
label_783:
;
#line 173
c_rt_lib0delete(array0pop(___ref___im__3));
#line 174
goto label_1085;
#line 174
label_786:
;
#line 175
___nl__bool__110 = c_rt_lib0check_true_native(___nl__im__2);
#line 175
___nl__bool__111 = !___nl__bool__110;
#line 175
if(___nl__bool__111){ goto label_791;}
#line 175
___nl__bool__110 = c_std_lib0is_string(___nl__im__1);
#line 175
label_791:
;
#line 175
//clear ___nl__bool__111;
#line 175
___nl__bool__110 = !___nl__bool__110;
#line 175
if(___nl__bool__110){ goto label_799;}
#line 175
___nl__int__112 = ptd0string_to_int(___nl__im__1);
#line 175
c_rt_lib0move(&___nl__im__1, c_rt_lib0int_new(___nl__int__112));
#line 175
//clear ___nl__int__112;
#line 175
goto label_799;
#line 175
label_799:
;
#line 175
//clear ___nl__bool__110;
#line 176
___nl__bool__113 = c_std_lib0is_int(___nl__im__1);
#line 176
___nl__bool__113 = !___nl__bool__113;
#line 176
___nl__bool__113 = !___nl__bool__113;
#line 176
if(___nl__bool__113){ goto label_860;}
#line 176
c_rt_lib0move(&___nl__im__116,___get_global_string_const(1217));
#line 176
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__116, ___get_global_string_const(1202), (*___ref___im__3)));
#line 176
c_rt_lib0clear(&___nl__im__116);
#line 176
c_rt_lib0move(&___nl__im__114, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__115));
#line 176
c_rt_lib0clear(&___nl__im__115);
#line 176
c_rt_lib0clear(&___nl__im__0);
#line 176
c_rt_lib0clear(&___nl__im__1);
#line 176
c_rt_lib0clear(&___nl__im__2);
#line 176
c_rt_lib0clear(&___nl__im__8);
#line 176
//clear ___nl__bool__9;
#line 176
c_rt_lib0clear(&___nl__im__10);
#line 176
c_rt_lib0clear(&___nl__im__11);
#line 176
c_rt_lib0clear(&___nl__im__12);
#line 176
c_rt_lib0clear(&___nl__im__17);
#line 176
//clear ___nl__bool__18;
#line 176
c_rt_lib0clear(&___nl__im__19);
#line 176
c_rt_lib0clear(&___nl__im__20);
#line 176
//clear ___nl__bool__21;
#line 176
c_rt_lib0clear(&___nl__im__22);
#line 176
c_rt_lib0clear(&___nl__im__23);
#line 176
c_rt_lib0clear(&___nl__im__24);
#line 176
c_rt_lib0clear(&___nl__im__25);
#line 176
c_rt_lib0clear(&___nl__im__30);
#line 176
//clear ___nl__int__31;
#line 176
//clear ___nl__int__32;
#line 176
//clear ___nl__int__33;
#line 176
//clear ___nl__bool__34;
#line 176
//clear ___nl__int__35;
#line 176
c_rt_lib0clear(&___nl__im__36);
#line 176
c_rt_lib0clear(&___nl__im__38);
#line 176
//clear ___nl__bool__39;
#line 176
c_rt_lib0clear(&___nl__im__40);
#line 176
c_rt_lib0clear(&___nl__im__41);
#line 176
c_rt_lib0clear(&___nl__im__42);
#line 176
c_rt_lib0clear(&___nl__im__55);
#line 176
//clear ___nl__bool__56;
#line 176
c_rt_lib0clear(&___nl__im__57);
#line 176
c_rt_lib0clear(&___nl__im__58);
#line 176
//clear ___nl__bool__66;
#line 176
c_rt_lib0clear(&___nl__im__67);
#line 176
c_rt_lib0clear(&___nl__im__69);
#line 176
c_rt_lib0clear(&___nl__im__77);
#line 176
c_rt_lib0clear(&___nl__im__78);
#line 176
c_rt_lib0clear(&___nl__im__83);
#line 176
c_rt_lib0clear(&___nl__im__91);
#line 176
//clear ___nl__bool__92;
#line 176
c_rt_lib0clear(&___nl__im__93);
#line 176
c_rt_lib0clear(&___nl__im__94);
#line 176
c_rt_lib0clear(&___nl__im__95);
#line 176
c_rt_lib0clear(&___nl__im__101);
#line 176
//clear ___nl__bool__102;
#line 176
c_rt_lib0clear(&___nl__im__103);
#line 176
//clear ___nl__bool__113;
#line 176
return ___nl__im__114;
#line 176
goto label_860;
#line 176
label_860:
;
#line 176
//clear ___nl__bool__113;
#line 176
c_rt_lib0clear(&___nl__im__114);
#line 177
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 178
goto label_1085;
#line 178
label_865:
;
#line 179
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 180
goto label_1085;
#line 180
label_868:
;
#line 180
c_rt_lib0move(&___nl__im__118, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(40)));
#line 180
c_rt_lib0copy(&___nl__im__117, ___nl__im__118);
#line 181
c_rt_lib0array_push(___ref___im__3, ___nl__im__117);
#line 182
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 182
c_rt_lib0move(&___nl__im__121, ptd_priv0exec(___nl__im__0, ___nl__im__122));
#line 182
c_rt_lib0clear(&___nl__im__122);
#line 182
c_rt_lib0move(&___nl__im__120, ptd_priv0ensure_dyn(___nl__im__121, ___nl__im__1, ___nl__im__2, ___ref___im__3));
#line 182
c_rt_lib0clear(&___nl__im__121);
#line 182
___nl__bool__119 = c_rt_lib0priv_is(___nl__im__120, ___get_global_string_const(79));
#line 182
if(___nl__bool__119){ goto label_930;}
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
c_rt_lib0clear(&___nl__im__2);
#line 182
c_rt_lib0clear(&___nl__im__8);
#line 182
//clear ___nl__bool__9;
#line 182
c_rt_lib0clear(&___nl__im__10);
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__12);
#line 182
c_rt_lib0clear(&___nl__im__17);
#line 182
//clear ___nl__bool__18;
#line 182
c_rt_lib0clear(&___nl__im__19);
#line 182
c_rt_lib0clear(&___nl__im__20);
#line 182
//clear ___nl__bool__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
c_rt_lib0clear(&___nl__im__23);
#line 182
c_rt_lib0clear(&___nl__im__24);
#line 182
c_rt_lib0clear(&___nl__im__25);
#line 182
c_rt_lib0clear(&___nl__im__30);
#line 182
//clear ___nl__int__31;
#line 182
//clear ___nl__int__32;
#line 182
//clear ___nl__int__33;
#line 182
//clear ___nl__bool__34;
#line 182
//clear ___nl__int__35;
#line 182
c_rt_lib0clear(&___nl__im__36);
#line 182
c_rt_lib0clear(&___nl__im__38);
#line 182
//clear ___nl__bool__39;
#line 182
c_rt_lib0clear(&___nl__im__40);
#line 182
c_rt_lib0clear(&___nl__im__41);
#line 182
c_rt_lib0clear(&___nl__im__42);
#line 182
c_rt_lib0clear(&___nl__im__55);
#line 182
//clear ___nl__bool__56;
#line 182
c_rt_lib0clear(&___nl__im__57);
#line 182
c_rt_lib0clear(&___nl__im__58);
#line 182
//clear ___nl__bool__66;
#line 182
c_rt_lib0clear(&___nl__im__67);
#line 182
c_rt_lib0clear(&___nl__im__69);
#line 182
c_rt_lib0clear(&___nl__im__77);
#line 182
c_rt_lib0clear(&___nl__im__78);
#line 182
c_rt_lib0clear(&___nl__im__83);
#line 182
c_rt_lib0clear(&___nl__im__91);
#line 182
//clear ___nl__bool__92;
#line 182
c_rt_lib0clear(&___nl__im__93);
#line 182
c_rt_lib0clear(&___nl__im__94);
#line 182
c_rt_lib0clear(&___nl__im__95);
#line 182
c_rt_lib0clear(&___nl__im__101);
#line 182
//clear ___nl__bool__102;
#line 182
c_rt_lib0clear(&___nl__im__103);
#line 182
c_rt_lib0clear(&___nl__im__117);
#line 182
c_rt_lib0clear(&___nl__im__118);
#line 182
//clear ___nl__bool__119;
#line 182
return ___nl__im__120;
#line 182
label_930:
;
#line 182
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__120, ___get_global_string_const(79)));
#line 183
c_rt_lib0delete(array0pop(___ref___im__3));
#line 184
goto label_1085;
#line 184
label_934:
;
#line 185
___nl__bool__123 = c_std_lib0is_variant(___nl__im__1);
#line 185
___nl__bool__123 = !___nl__bool__123;
#line 185
___nl__bool__123 = !___nl__bool__123;
#line 185
if(___nl__bool__123){ goto label_998;}
#line 185
c_rt_lib0move(&___nl__im__126,___get_global_string_const(1218));
#line 185
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__126, ___get_global_string_const(1202), (*___ref___im__3)));
#line 185
c_rt_lib0clear(&___nl__im__126);
#line 185
c_rt_lib0move(&___nl__im__124, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__125));
#line 185
c_rt_lib0clear(&___nl__im__125);
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
c_rt_lib0clear(&___nl__im__8);
#line 185
//clear ___nl__bool__9;
#line 185
c_rt_lib0clear(&___nl__im__10);
#line 185
c_rt_lib0clear(&___nl__im__11);
#line 185
c_rt_lib0clear(&___nl__im__12);
#line 185
c_rt_lib0clear(&___nl__im__17);
#line 185
//clear ___nl__bool__18;
#line 185
c_rt_lib0clear(&___nl__im__19);
#line 185
c_rt_lib0clear(&___nl__im__20);
#line 185
//clear ___nl__bool__21;
#line 185
c_rt_lib0clear(&___nl__im__22);
#line 185
c_rt_lib0clear(&___nl__im__23);
#line 185
c_rt_lib0clear(&___nl__im__24);
#line 185
c_rt_lib0clear(&___nl__im__25);
#line 185
c_rt_lib0clear(&___nl__im__30);
#line 185
//clear ___nl__int__31;
#line 185
//clear ___nl__int__32;
#line 185
//clear ___nl__int__33;
#line 185
//clear ___nl__bool__34;
#line 185
//clear ___nl__int__35;
#line 185
c_rt_lib0clear(&___nl__im__36);
#line 185
c_rt_lib0clear(&___nl__im__38);
#line 185
//clear ___nl__bool__39;
#line 185
c_rt_lib0clear(&___nl__im__40);
#line 185
c_rt_lib0clear(&___nl__im__41);
#line 185
c_rt_lib0clear(&___nl__im__42);
#line 185
c_rt_lib0clear(&___nl__im__55);
#line 185
//clear ___nl__bool__56;
#line 185
c_rt_lib0clear(&___nl__im__57);
#line 185
c_rt_lib0clear(&___nl__im__58);
#line 185
//clear ___nl__bool__66;
#line 185
c_rt_lib0clear(&___nl__im__67);
#line 185
c_rt_lib0clear(&___nl__im__69);
#line 185
c_rt_lib0clear(&___nl__im__77);
#line 185
c_rt_lib0clear(&___nl__im__78);
#line 185
c_rt_lib0clear(&___nl__im__83);
#line 185
c_rt_lib0clear(&___nl__im__91);
#line 185
//clear ___nl__bool__92;
#line 185
c_rt_lib0clear(&___nl__im__93);
#line 185
c_rt_lib0clear(&___nl__im__94);
#line 185
c_rt_lib0clear(&___nl__im__95);
#line 185
c_rt_lib0clear(&___nl__im__101);
#line 185
//clear ___nl__bool__102;
#line 185
c_rt_lib0clear(&___nl__im__103);
#line 185
c_rt_lib0clear(&___nl__im__117);
#line 185
c_rt_lib0clear(&___nl__im__118);
#line 185
//clear ___nl__bool__119;
#line 185
c_rt_lib0clear(&___nl__im__120);
#line 185
//clear ___nl__bool__123;
#line 185
return ___nl__im__124;
#line 185
goto label_998;
#line 185
label_998:
;
#line 185
//clear ___nl__bool__123;
#line 185
c_rt_lib0clear(&___nl__im__124);
#line 186
c_rt_lib0move(&___nl__im__127, ov0get_element(___nl__im__1));
#line 187
c_rt_lib0move(&___nl__im__130,___get_global_string_const(180));
#line 187
___nl__bool__128 = c_rt_lib0ne(___nl__im__127, ___nl__im__130);
#line 187
c_rt_lib0clear(&___nl__im__130);
#line 187
___nl__bool__129 = !___nl__bool__128;
#line 187
if(___nl__bool__129){ goto label_1010;}
#line 187
c_rt_lib0move(&___nl__im__131,___get_global_string_const(181));
#line 187
___nl__bool__128 = c_rt_lib0ne(___nl__im__127, ___nl__im__131);
#line 187
c_rt_lib0clear(&___nl__im__131);
#line 187
label_1010:
;
#line 187
//clear ___nl__bool__129;
#line 187
___nl__bool__128 = !___nl__bool__128;
#line 187
if(___nl__bool__128){ goto label_1080;}
#line 188
c_rt_lib0move(&___nl__im__136,___get_global_string_const(1219));
#line 188
c_rt_lib0move(&___nl__im__135, c_rt_lib0concat_new(___nl__im__136, ___nl__im__127));
#line 188
c_rt_lib0clear(&___nl__im__136);
#line 188
c_rt_lib0move(&___nl__im__137,___get_global_string_const(1220));
#line 188
c_rt_lib0move(&___nl__im__134, c_rt_lib0concat_new(___nl__im__135, ___nl__im__137));
#line 188
c_rt_lib0clear(&___nl__im__135);
#line 188
c_rt_lib0clear(&___nl__im__137);
#line 188
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__134, ___get_global_string_const(1202), (*___ref___im__3)));
#line 188
c_rt_lib0clear(&___nl__im__134);
#line 188
c_rt_lib0move(&___nl__im__132, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__133));
#line 188
c_rt_lib0clear(&___nl__im__133);
#line 188
c_rt_lib0clear(&___nl__im__0);
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
c_rt_lib0clear(&___nl__im__2);
#line 188
c_rt_lib0clear(&___nl__im__8);
#line 188
//clear ___nl__bool__9;
#line 188
c_rt_lib0clear(&___nl__im__10);
#line 188
c_rt_lib0clear(&___nl__im__11);
#line 188
c_rt_lib0clear(&___nl__im__12);
#line 188
c_rt_lib0clear(&___nl__im__17);
#line 188
//clear ___nl__bool__18;
#line 188
c_rt_lib0clear(&___nl__im__19);
#line 188
c_rt_lib0clear(&___nl__im__20);
#line 188
//clear ___nl__bool__21;
#line 188
c_rt_lib0clear(&___nl__im__22);
#line 188
c_rt_lib0clear(&___nl__im__23);
#line 188
c_rt_lib0clear(&___nl__im__24);
#line 188
c_rt_lib0clear(&___nl__im__25);
#line 188
c_rt_lib0clear(&___nl__im__30);
#line 188
//clear ___nl__int__31;
#line 188
//clear ___nl__int__32;
#line 188
//clear ___nl__int__33;
#line 188
//clear ___nl__bool__34;
#line 188
//clear ___nl__int__35;
#line 188
c_rt_lib0clear(&___nl__im__36);
#line 188
c_rt_lib0clear(&___nl__im__38);
#line 188
//clear ___nl__bool__39;
#line 188
c_rt_lib0clear(&___nl__im__40);
#line 188
c_rt_lib0clear(&___nl__im__41);
#line 188
c_rt_lib0clear(&___nl__im__42);
#line 188
c_rt_lib0clear(&___nl__im__55);
#line 188
//clear ___nl__bool__56;
#line 188
c_rt_lib0clear(&___nl__im__57);
#line 188
c_rt_lib0clear(&___nl__im__58);
#line 188
//clear ___nl__bool__66;
#line 188
c_rt_lib0clear(&___nl__im__67);
#line 188
c_rt_lib0clear(&___nl__im__69);
#line 188
c_rt_lib0clear(&___nl__im__77);
#line 188
c_rt_lib0clear(&___nl__im__78);
#line 188
c_rt_lib0clear(&___nl__im__83);
#line 188
c_rt_lib0clear(&___nl__im__91);
#line 188
//clear ___nl__bool__92;
#line 188
c_rt_lib0clear(&___nl__im__93);
#line 188
c_rt_lib0clear(&___nl__im__94);
#line 188
c_rt_lib0clear(&___nl__im__95);
#line 188
c_rt_lib0clear(&___nl__im__101);
#line 188
//clear ___nl__bool__102;
#line 188
c_rt_lib0clear(&___nl__im__103);
#line 188
c_rt_lib0clear(&___nl__im__117);
#line 188
c_rt_lib0clear(&___nl__im__118);
#line 188
//clear ___nl__bool__119;
#line 188
c_rt_lib0clear(&___nl__im__120);
#line 188
c_rt_lib0clear(&___nl__im__127);
#line 188
//clear ___nl__bool__128;
#line 188
return ___nl__im__132;
#line 189
goto label_1080;
#line 189
label_1080:
;
#line 189
//clear ___nl__bool__128;
#line 189
c_rt_lib0clear(&___nl__im__132);
#line 190
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 191
goto label_1085;
#line 191
label_1085:
;
#line 192
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_string_const(79), ___nl__im__8));
#line 192
c_rt_lib0clear(&___nl__im__0);
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
c_rt_lib0clear(&___nl__im__2);
#line 192
c_rt_lib0clear(&___nl__im__8);
#line 192
//clear ___nl__bool__9;
#line 192
c_rt_lib0clear(&___nl__im__10);
#line 192
c_rt_lib0clear(&___nl__im__11);
#line 192
c_rt_lib0clear(&___nl__im__12);
#line 192
c_rt_lib0clear(&___nl__im__17);
#line 192
//clear ___nl__bool__18;
#line 192
c_rt_lib0clear(&___nl__im__19);
#line 192
c_rt_lib0clear(&___nl__im__20);
#line 192
//clear ___nl__bool__21;
#line 192
c_rt_lib0clear(&___nl__im__22);
#line 192
c_rt_lib0clear(&___nl__im__23);
#line 192
c_rt_lib0clear(&___nl__im__24);
#line 192
c_rt_lib0clear(&___nl__im__25);
#line 192
c_rt_lib0clear(&___nl__im__30);
#line 192
//clear ___nl__int__31;
#line 192
//clear ___nl__int__32;
#line 192
//clear ___nl__int__33;
#line 192
//clear ___nl__bool__34;
#line 192
//clear ___nl__int__35;
#line 192
c_rt_lib0clear(&___nl__im__36);
#line 192
c_rt_lib0clear(&___nl__im__38);
#line 192
//clear ___nl__bool__39;
#line 192
c_rt_lib0clear(&___nl__im__40);
#line 192
c_rt_lib0clear(&___nl__im__41);
#line 192
c_rt_lib0clear(&___nl__im__42);
#line 192
c_rt_lib0clear(&___nl__im__55);
#line 192
//clear ___nl__bool__56;
#line 192
c_rt_lib0clear(&___nl__im__57);
#line 192
c_rt_lib0clear(&___nl__im__58);
#line 192
//clear ___nl__bool__66;
#line 192
c_rt_lib0clear(&___nl__im__67);
#line 192
c_rt_lib0clear(&___nl__im__69);
#line 192
c_rt_lib0clear(&___nl__im__77);
#line 192
c_rt_lib0clear(&___nl__im__78);
#line 192
c_rt_lib0clear(&___nl__im__83);
#line 192
c_rt_lib0clear(&___nl__im__91);
#line 192
//clear ___nl__bool__92;
#line 192
c_rt_lib0clear(&___nl__im__93);
#line 192
c_rt_lib0clear(&___nl__im__94);
#line 192
c_rt_lib0clear(&___nl__im__95);
#line 192
c_rt_lib0clear(&___nl__im__101);
#line 192
//clear ___nl__bool__102;
#line 192
c_rt_lib0clear(&___nl__im__103);
#line 192
c_rt_lib0clear(&___nl__im__117);
#line 192
c_rt_lib0clear(&___nl__im__118);
#line 192
//clear ___nl__bool__119;
#line 192
c_rt_lib0clear(&___nl__im__120);
#line 192
c_rt_lib0clear(&___nl__im__127);
#line 192
return ___nl__im__138;
return NULL;

}

ImmT  ptd0is_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0is_ref_type");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0is_ref_type(*var0, *var1);
}
ImmT  ptd0is_ref_type(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
#line 196
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(40));
#line 196
if(___nl__bool__2){ goto label_17;}
#line 206
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(288));
#line 206
if(___nl__bool__2){ goto label_127;}
#line 207
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1200));
#line 207
if(___nl__bool__2){ goto label_129;}
#line 208
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(316));
#line 208
if(___nl__bool__2){ goto label_131;}
#line 209
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(317));
#line 209
if(___nl__bool__2){ goto label_135;}
#line 210
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(308));
#line 210
if(___nl__bool__2){ goto label_139;}
#line 211
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(310));
#line 211
if(___nl__bool__2){ goto label_143;}
#line 211
c_rt_lib0move(&___nl__im__3,___get_global_string_const(16));
#line 211
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 211
nl_die_arg(___nl__im__3);
#line 196
label_17:
;
#line 196
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(40)));
#line 196
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 197
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(40));
#line 197
___nl__bool__6 = !___nl__bool__6;
#line 197
___nl__bool__6 = !___nl__bool__6;
#line 197
if(___nl__bool__6){ goto label_36;}
#line 197
___nl__bool__7 = false;
#line 197
c_rt_lib0move(&___nl__im__8, c_rt_lib0bool_to_nl_native(___nl__bool__7));
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
//clear ___nl__bool__7;
#line 197
return ___nl__im__8;
#line 197
goto label_36;
#line 197
label_36:
;
#line 197
//clear ___nl__bool__6;
#line 197
//clear ___nl__bool__7;
#line 197
c_rt_lib0clear(&___nl__im__8);
#line 198
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(40)));
#line 199
___nl__bool__10 = c_std_lib0is_hash(___nl__im__9);
#line 199
___nl__bool__10 = !___nl__bool__10;
#line 199
if(___nl__bool__10){ goto label_97;}
#line 200
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(151)));
#line 200
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(151)));
#line 200
___nl__bool__11 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 200
c_rt_lib0clear(&___nl__im__12);
#line 200
c_rt_lib0clear(&___nl__im__13);
#line 200
___nl__bool__11 = !___nl__bool__11;
#line 200
___nl__bool__11 = !___nl__bool__11;
#line 200
if(___nl__bool__11){ goto label_66;}
#line 200
___nl__bool__14 = false;
#line 200
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
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
c_rt_lib0clear(&___nl__im__9);
#line 200
//clear ___nl__bool__10;
#line 200
//clear ___nl__bool__11;
#line 200
//clear ___nl__bool__14;
#line 200
return ___nl__im__15;
#line 200
goto label_66;
#line 200
label_66:
;
#line 200
//clear ___nl__bool__11;
#line 200
//clear ___nl__bool__14;
#line 200
c_rt_lib0clear(&___nl__im__15);
#line 201
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(167)));
#line 201
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(167)));
#line 201
___nl__bool__16 = c_rt_lib0eq(___nl__im__17, ___nl__im__18);
#line 201
c_rt_lib0clear(&___nl__im__17);
#line 201
c_rt_lib0clear(&___nl__im__18);
#line 201
___nl__bool__16 = !___nl__bool__16;
#line 201
___nl__bool__16 = !___nl__bool__16;
#line 201
if(___nl__bool__16){ goto label_92;}
#line 201
___nl__bool__19 = false;
#line 201
c_rt_lib0move(&___nl__im__20, c_rt_lib0bool_to_nl_native(___nl__bool__19));
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
c_rt_lib0clear(&___nl__im__9);
#line 201
//clear ___nl__bool__10;
#line 201
//clear ___nl__bool__16;
#line 201
//clear ___nl__bool__19;
#line 201
return ___nl__im__20;
#line 201
goto label_92;
#line 201
label_92:
;
#line 201
//clear ___nl__bool__16;
#line 201
//clear ___nl__bool__19;
#line 201
c_rt_lib0clear(&___nl__im__20);
#line 202
goto label_111;
#line 202
label_97:
;
#line 203
___nl__bool__21 = c_rt_lib0eq(___nl__im__9, ___nl__im__4);
#line 203
c_rt_lib0move(&___nl__im__22, c_rt_lib0bool_to_nl_native(___nl__bool__21));
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
c_rt_lib0clear(&___nl__im__9);
#line 203
//clear ___nl__bool__10;
#line 203
//clear ___nl__bool__21;
#line 203
return ___nl__im__22;
#line 204
goto label_111;
#line 204
label_111:
;
#line 204
//clear ___nl__bool__10;
#line 204
//clear ___nl__bool__21;
#line 204
c_rt_lib0clear(&___nl__im__22);
#line 205
___nl__bool__23 = true;
#line 205
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
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
c_rt_lib0clear(&___nl__im__9);
#line 205
//clear ___nl__bool__23;
#line 205
return ___nl__im__24;
#line 206
goto label_147;
#line 206
label_127:
;
#line 207
goto label_147;
#line 207
label_129:
;
#line 208
goto label_147;
#line 208
label_131:
;
#line 208
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(316)));
#line 208
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 209
goto label_147;
#line 209
label_135:
;
#line 209
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(317)));
#line 209
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 210
goto label_147;
#line 210
label_139:
;
#line 210
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(308)));
#line 210
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 211
goto label_147;
#line 211
label_143:
;
#line 211
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(310)));
#line 211
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 212
goto label_147;
#line 212
label_147:
;
#line 213
___nl__bool__33 = false;
#line 213
c_rt_lib0move(&___nl__im__34, c_rt_lib0bool_to_nl_native(___nl__bool__33));
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
c_rt_lib0clear(&___nl__im__9);
#line 213
//clear ___nl__bool__23;
#line 213
c_rt_lib0clear(&___nl__im__24);
#line 213
c_rt_lib0clear(&___nl__im__25);
#line 213
c_rt_lib0clear(&___nl__im__26);
#line 213
c_rt_lib0clear(&___nl__im__27);
#line 213
c_rt_lib0clear(&___nl__im__28);
#line 213
c_rt_lib0clear(&___nl__im__29);
#line 213
c_rt_lib0clear(&___nl__im__30);
#line 213
c_rt_lib0clear(&___nl__im__31);
#line 213
c_rt_lib0clear(&___nl__im__32);
#line 213
//clear ___nl__bool__33;
#line 213
return ___nl__im__34;
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
c_rt_lib0clear(&___nl__im__9);
#line 213
//clear ___nl__bool__23;
#line 213
c_rt_lib0clear(&___nl__im__24);
#line 213
c_rt_lib0clear(&___nl__im__25);
#line 213
c_rt_lib0clear(&___nl__im__26);
#line 213
c_rt_lib0clear(&___nl__im__27);
#line 213
c_rt_lib0clear(&___nl__im__28);
#line 213
c_rt_lib0clear(&___nl__im__29);
#line 213
c_rt_lib0clear(&___nl__im__30);
#line 213
c_rt_lib0clear(&___nl__im__31);
#line 213
c_rt_lib0clear(&___nl__im__32);
#line 213
//clear ___nl__bool__33;
#line 213
c_rt_lib0clear(&___nl__im__34);
#line 213
return NULL;
return NULL;

}

ImmT  ptd_priv0exec(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 217
c_rt_lib0move(&___nl__im__2, c_std_lib0exec(___nl__im__0, &___nl__im__1));
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
return ___nl__im__2;
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
c_rt_lib0clear(&___nl__im__2);
#line 217
return NULL;
return NULL;

}

ImmT  ptd0cast_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0cast_t");
return ptd0cast_t();
}
ImmT ptd0cast_t(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(7);
}
ImmT ptd0cast_t0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 222
c_rt_lib0move(&___nl__im__2, ptd0ptd_im());
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(ptd0cast_error_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1221)));
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 223
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(79), ___nl__im__2, ___get_global_string_const(78), ___nl__im__3));
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
return ___nl__im__0;
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
return NULL;
return NULL;

}

ptd0cast_t0type ptd0try_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_cast");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0try_cast(*var0, *var1);
}
ptd0cast_t0type ptd0try_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 228
c_rt_lib0move(&___nl__im__2, ptd0try_dynamic_cast(___nl__im__0, ___nl__im__1));
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
c_rt_lib0clear(&___nl__im__1);
#line 228
return ___nl__im__2;
return NULL;

}

ptd0cast_t0type ptd0try_dynamic_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_dynamic_cast");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ptd0try_dynamic_cast(*var0, *var1);
}
ptd0cast_t0type ptd0try_dynamic_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 231
c_rt_lib0move(&___nl__im__2, ptd_priv0try_dynamic_cast(___nl__im__0, ___nl__im__1));
#line 232
___nl__int__4 = c_rt_lib0array_len(___nl__im__2);
#line 232
___nl__int__5 = 0;
#line 232
___nl__int__6 = ___nl__int__4 == ___nl__int__5;
#line 232
___nl__bool__3 = ___nl__int__6;
#line 232
//clear ___nl__int__4;
#line 232
//clear ___nl__int__5;
#line 232
//clear ___nl__int__6;
#line 232
___nl__bool__3 = !___nl__bool__3;
#line 232
if(___nl__bool__3){ goto label_17;}
#line 233
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(79), ___nl__im__1));
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
c_rt_lib0clear(&___nl__im__1);
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
//clear ___nl__bool__3;
#line 233
return ___nl__im__7;
#line 234
goto label_17;
#line 234
label_17:
;
#line 234
//clear ___nl__bool__3;
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 235
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__2));
#line 235
c_rt_lib0clear(&___nl__im__0);
#line 235
c_rt_lib0clear(&___nl__im__1);
#line 235
c_rt_lib0clear(&___nl__im__2);
#line 235
return ___nl__im__8;
return NULL;

}

ImmT  ptd0imm_kind_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0imm_kind_t");
return ptd0imm_kind_t();
}
ImmT ptd0imm_kind_t(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(8);
}
ImmT ptd0imm_kind_t0cal() {
ptd_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 240
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 241
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 242
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 243
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 243
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(1187), ___nl__im__2, ___get_global_string_const(129), ___nl__im__3, ___get_global_string_const(554), ___nl__im__4, ___get_global_string_const(38), ___nl__im__5));
#line 243
c_rt_lib0clear(&___nl__im__2);
#line 243
c_rt_lib0clear(&___nl__im__3);
#line 243
c_rt_lib0clear(&___nl__im__4);
#line 243
c_rt_lib0clear(&___nl__im__5);
#line 243
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 243
c_rt_lib0clear(&___nl__im__1);
#line 243
return ___nl__im__0;
#line 243
c_rt_lib0clear(&___nl__im__0);
#line 243
return NULL;
return NULL;

}

ImmT  ptd0cast_error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0cast_error_t");
return ptd0cast_error_t();
}
ImmT ptd0cast_error_t(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(9);
}
ImmT ptd0cast_error_t0cal() {
ptd_priv0__const__init();
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
#line 250
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 251
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 252
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 253
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 254
c_rt_lib0move(&___nl__im__9, ptd0ptd_im());
#line 254
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(5, ___get_global_string_const(1000), ___nl__im__5, ___get_global_string_const(1222), ___nl__im__6, ___get_global_string_const(1223), ___nl__im__7, ___get_global_string_const(1224), ___nl__im__8, ___get_global_string_const(1225), ___nl__im__9));
#line 254
c_rt_lib0clear(&___nl__im__5);
#line 254
c_rt_lib0clear(&___nl__im__6);
#line 254
c_rt_lib0clear(&___nl__im__7);
#line 254
c_rt_lib0clear(&___nl__im__8);
#line 254
c_rt_lib0clear(&___nl__im__9);
#line 254
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 254
c_rt_lib0clear(&___nl__im__4);
#line 257
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1226)));
#line 257
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__12));
#line 258
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1226)));
#line 258
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__13));
#line 259
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1226)));
#line 259
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__14));
#line 260
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1226)));
#line 260
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__15));
#line 261
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1226)));
#line 261
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__16));
#line 262
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1226)));
#line 262
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__17));
#line 263
c_rt_lib0move(&___nl__im__18, ptd0int());
#line 264
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 265
c_rt_lib0move(&___nl__im__20, ptd0string());
#line 266
c_rt_lib0move(&___nl__im__21, ptd0string());
#line 267
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 267
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(11, ___get_global_string_const(1227), ___nl__im__12, ___get_global_string_const(1228), ___nl__im__13, ___get_global_string_const(1229), ___nl__im__14, ___get_global_string_const(1230), ___nl__im__15, ___get_global_string_const(1231), ___nl__im__16, ___get_global_string_const(1232), ___nl__im__17, ___get_global_string_const(1233), ___nl__im__18, ___get_global_string_const(1234), ___nl__im__19, ___get_global_string_const(1235), ___nl__im__20, ___get_global_string_const(1236), ___nl__im__21, ___get_global_string_const(1237), ___nl__im__22));
#line 267
c_rt_lib0clear(&___nl__im__12);
#line 267
c_rt_lib0clear(&___nl__im__13);
#line 267
c_rt_lib0clear(&___nl__im__14);
#line 267
c_rt_lib0clear(&___nl__im__15);
#line 267
c_rt_lib0clear(&___nl__im__16);
#line 267
c_rt_lib0clear(&___nl__im__17);
#line 267
c_rt_lib0clear(&___nl__im__18);
#line 267
c_rt_lib0clear(&___nl__im__19);
#line 267
c_rt_lib0clear(&___nl__im__20);
#line 267
c_rt_lib0clear(&___nl__im__21);
#line 267
c_rt_lib0clear(&___nl__im__22);
#line 267
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 267
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(1202), ___nl__im__3, ___get_global_string_const(123), ___nl__im__10));
#line 267
c_rt_lib0clear(&___nl__im__3);
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 267
c_rt_lib0clear(&___nl__im__1);
#line 267
return ___nl__im__0;
#line 267
c_rt_lib0clear(&___nl__im__0);
#line 267
return NULL;
return NULL;

}

ptd0imm_kind_t0type ptd0get_imm_kind0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0get_imm_kind");
ImmT  *var0 = &(_tab[0]);
return ptd0get_imm_kind(*var0);
}
ptd0imm_kind_t0type ptd0get_imm_kind(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 272
___nl__bool__1 = c_std_lib0is_sim(___nl__im__0);
#line 272
___nl__bool__1 = !___nl__bool__1;
#line 272
if(___nl__bool__1){ goto label_8;}
#line 272
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(1187)));
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
//clear ___nl__bool__1;
#line 272
return ___nl__im__2;
#line 272
goto label_8;
#line 272
label_8:
;
#line 272
//clear ___nl__bool__1;
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 273
___nl__bool__3 = c_std_lib0is_variant(___nl__im__0);
#line 273
___nl__bool__3 = !___nl__bool__3;
#line 273
if(___nl__bool__3){ goto label_19;}
#line 273
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(554)));
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
//clear ___nl__bool__3;
#line 273
return ___nl__im__4;
#line 273
goto label_19;
#line 273
label_19:
;
#line 273
//clear ___nl__bool__3;
#line 273
c_rt_lib0clear(&___nl__im__4);
#line 274
___nl__bool__5 = c_std_lib0is_hash(___nl__im__0);
#line 274
___nl__bool__5 = !___nl__bool__5;
#line 274
if(___nl__bool__5){ goto label_30;}
#line 274
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(129)));
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
//clear ___nl__bool__5;
#line 274
return ___nl__im__6;
#line 274
goto label_30;
#line 274
label_30:
;
#line 274
//clear ___nl__bool__5;
#line 274
c_rt_lib0clear(&___nl__im__6);
#line 275
___nl__bool__7 = c_std_lib0is_array(___nl__im__0);
#line 275
___nl__bool__7 = !___nl__bool__7;
#line 275
if(___nl__bool__7){ goto label_41;}
#line 275
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(38)));
#line 275
c_rt_lib0clear(&___nl__im__0);
#line 275
//clear ___nl__bool__7;
#line 275
return ___nl__im__8;
#line 275
goto label_41;
#line 275
label_41:
;
#line 275
//clear ___nl__bool__7;
#line 275
c_rt_lib0clear(&___nl__im__8);
#line 276
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 276
nl_die_arg(___nl__im__9);
return NULL;

}

ptd0cast_error_t0type ptd_priv0try_dynamic_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
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
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
ImmT  ___nl__im__63 = NULL;
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
bool  ___nl__bool__74 = false;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
INT  ___nl__int__77 = 0;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
bool  ___nl__bool__105 = false;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
bool  ___nl__bool__109 = false;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
bool  ___nl__bool__118 = false;
INT  ___nl__int__119 = 0;
INT  ___nl__int__120 = 0;
INT  ___nl__int__121 = 0;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
bool  ___nl__bool__126 = false;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
bool  ___nl__bool__138 = false;
INT  ___nl__int__139 = 0;
INT  ___nl__int__140 = 0;
INT  ___nl__int__141 = 0;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
#line 279
___nl__bool__2 = c_std_lib0is_variant(___nl__im__0);
#line 279
___nl__bool__2 = !___nl__bool__2;
#line 279
___nl__bool__2 = !___nl__bool__2;
#line 279
if(___nl__bool__2){ goto label_16;}
#line 279
c_rt_lib0move(&___nl__im__6, ptd0get_imm_kind(___nl__im__0));
#line 279
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(1227), ___nl__im__6));
#line 279
c_rt_lib0clear(&___nl__im__6);
#line 279
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__5));
#line 279
c_rt_lib0clear(&___nl__im__5);
#line 279
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(1, ___nl__im__4));
#line 279
c_rt_lib0clear(&___nl__im__4);
#line 279
c_rt_lib0clear(&___nl__im__0);
#line 279
c_rt_lib0clear(&___nl__im__1);
#line 279
//clear ___nl__bool__2;
#line 279
return ___nl__im__3;
#line 279
goto label_16;
#line 279
label_16:
;
#line 279
//clear ___nl__bool__2;
#line 279
c_rt_lib0clear(&___nl__im__3);
#line 280
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(310));
#line 280
if(___nl__bool__7){ goto label_38;}
#line 289
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(316));
#line 289
if(___nl__bool__7){ goto label_105;}
#line 298
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(308));
#line 298
if(___nl__bool__7){ goto label_192;}
#line 309
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(289));
#line 309
if(___nl__bool__7){ goto label_377;}
#line 311
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(287));
#line 311
if(___nl__bool__7){ goto label_422;}
#line 313
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(317));
#line 313
if(___nl__bool__7){ goto label_467;}
#line 328
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(288));
#line 328
if(___nl__bool__7){ goto label_750;}
#line 329
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(40));
#line 329
if(___nl__bool__7){ goto label_752;}
#line 329
c_rt_lib0move(&___nl__im__8,___get_global_string_const(16));
#line 329
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__0));
#line 329
nl_die_arg(___nl__im__8);
#line 280
label_38:
;
#line 280
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(310)));
#line 280
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 281
___nl__bool__11 = c_std_lib0is_hash(___nl__im__1);
#line 281
___nl__bool__11 = !___nl__bool__11;
#line 281
___nl__bool__11 = !___nl__bool__11;
#line 281
if(___nl__bool__11){ goto label_61;}
#line 281
c_rt_lib0move(&___nl__im__15, ptd0get_imm_kind(___nl__im__0));
#line 281
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(1228), ___nl__im__15));
#line 281
c_rt_lib0clear(&___nl__im__15);
#line 281
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__14));
#line 281
c_rt_lib0clear(&___nl__im__14);
#line 281
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 281
c_rt_lib0clear(&___nl__im__13);
#line 281
c_rt_lib0clear(&___nl__im__0);
#line 281
c_rt_lib0clear(&___nl__im__1);
#line 281
//clear ___nl__bool__7;
#line 281
c_rt_lib0clear(&___nl__im__8);
#line 281
c_rt_lib0clear(&___nl__im__9);
#line 281
c_rt_lib0clear(&___nl__im__10);
#line 281
//clear ___nl__bool__11;
#line 281
return ___nl__im__12;
#line 281
goto label_61;
#line 281
label_61:
;
#line 281
//clear ___nl__bool__11;
#line 281
c_rt_lib0clear(&___nl__im__12);
#line 282
c_rt_lib0move(&___nl__im__19, c_rt_lib0init_iter(___nl__im__1));
#line 282
label_65:
;
#line 282
___nl__bool__17 = c_rt_lib0is_end_hash(___nl__im__19);
#line 282
if(___nl__bool__17){ goto label_103;}
#line 282
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_key_iter(___nl__im__19));
#line 282
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__16));
#line 283
c_rt_lib0move(&___nl__im__20, ptd_priv0try_dynamic_cast(___nl__im__9, ___nl__im__18));
#line 284
___nl__int__22 = c_rt_lib0array_len(___nl__im__20);
#line 284
___nl__int__23 = 0;
#line 284
___nl__int__24 = ___nl__int__22 > ___nl__int__23;
#line 284
___nl__bool__21 = ___nl__int__24;
#line 284
//clear ___nl__int__22;
#line 284
//clear ___nl__int__23;
#line 284
//clear ___nl__int__24;
#line 284
___nl__bool__21 = !___nl__bool__21;
#line 284
if(___nl__bool__21){ goto label_98;}
#line 285
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(1000), ___nl__im__16));
#line 285
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(1202), ___nl__im__26));
#line 285
c_rt_lib0clear(&___nl__im__26);
#line 285
c_rt_lib0delete(array0push(&___nl__im__20, ___nl__im__25));
#line 285
c_rt_lib0clear(&___nl__im__25);
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
c_rt_lib0clear(&___nl__im__1);
#line 286
//clear ___nl__bool__7;
#line 286
c_rt_lib0clear(&___nl__im__8);
#line 286
c_rt_lib0clear(&___nl__im__9);
#line 286
c_rt_lib0clear(&___nl__im__10);
#line 286
c_rt_lib0clear(&___nl__im__16);
#line 286
//clear ___nl__bool__17;
#line 286
c_rt_lib0clear(&___nl__im__18);
#line 286
c_rt_lib0clear(&___nl__im__19);
#line 286
//clear ___nl__bool__21;
#line 286
return ___nl__im__20;
#line 287
goto label_98;
#line 287
label_98:
;
#line 287
//clear ___nl__bool__21;
#line 287
c_rt_lib0clear(&___nl__im__20);
#line 288
c_rt_lib0move(&___nl__im__19, c_rt_lib0next_iter(___nl__im__19));
#line 288
goto label_65;
#line 288
label_103:
;
#line 289
goto label_817;
#line 289
label_105:
;
#line 289
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(316)));
#line 289
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 290
___nl__bool__29 = c_std_lib0is_array(___nl__im__1);
#line 290
___nl__bool__29 = !___nl__bool__29;
#line 290
___nl__bool__29 = !___nl__bool__29;
#line 290
if(___nl__bool__29){ goto label_135;}
#line 290
c_rt_lib0move(&___nl__im__33, ptd0get_imm_kind(___nl__im__0));
#line 290
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(1229), ___nl__im__33));
#line 290
c_rt_lib0clear(&___nl__im__33);
#line 290
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__32));
#line 290
c_rt_lib0clear(&___nl__im__32);
#line 290
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(1, ___nl__im__31));
#line 290
c_rt_lib0clear(&___nl__im__31);
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
c_rt_lib0clear(&___nl__im__1);
#line 290
//clear ___nl__bool__7;
#line 290
c_rt_lib0clear(&___nl__im__8);
#line 290
c_rt_lib0clear(&___nl__im__9);
#line 290
c_rt_lib0clear(&___nl__im__10);
#line 290
c_rt_lib0clear(&___nl__im__16);
#line 290
//clear ___nl__bool__17;
#line 290
c_rt_lib0clear(&___nl__im__18);
#line 290
c_rt_lib0clear(&___nl__im__19);
#line 290
c_rt_lib0clear(&___nl__im__20);
#line 290
c_rt_lib0clear(&___nl__im__27);
#line 290
c_rt_lib0clear(&___nl__im__28);
#line 290
//clear ___nl__bool__29;
#line 290
return ___nl__im__30;
#line 290
goto label_135;
#line 290
label_135:
;
#line 290
//clear ___nl__bool__29;
#line 290
c_rt_lib0clear(&___nl__im__30);
#line 291
___nl__int__34 = c_rt_lib0array_len(___nl__im__1);
#line 291
___nl__int__35 = 0;
#line 291
___nl__int__36 = 1;
#line 291
label_141:
;
#line 291
___nl__int__38 = ___nl__int__35 >= ___nl__int__34;
#line 291
___nl__bool__37 = ___nl__int__38;
#line 291
if(___nl__bool__37){ goto label_190;}
#line 292
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__1, ___nl__int__35));
#line 292
c_rt_lib0move(&___nl__im__39, ptd_priv0try_dynamic_cast(___nl__im__27, ___nl__im__40));
#line 292
c_rt_lib0clear(&___nl__im__40);
#line 293
___nl__int__42 = c_rt_lib0array_len(___nl__im__39);
#line 293
___nl__int__43 = 0;
#line 293
___nl__int__44 = ___nl__int__42 > ___nl__int__43;
#line 293
___nl__bool__41 = ___nl__int__44;
#line 293
//clear ___nl__int__42;
#line 293
//clear ___nl__int__43;
#line 293
//clear ___nl__int__44;
#line 293
___nl__bool__41 = !___nl__bool__41;
#line 293
if(___nl__bool__41){ goto label_185;}
#line 294
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__35));
#line 294
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(1222), ___nl__im__47));
#line 294
c_rt_lib0clear(&___nl__im__47);
#line 294
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(1202), ___nl__im__46));
#line 294
c_rt_lib0clear(&___nl__im__46);
#line 294
c_rt_lib0delete(array0push(&___nl__im__39, ___nl__im__45));
#line 294
c_rt_lib0clear(&___nl__im__45);
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
//clear ___nl__bool__7;
#line 295
c_rt_lib0clear(&___nl__im__8);
#line 295
c_rt_lib0clear(&___nl__im__9);
#line 295
c_rt_lib0clear(&___nl__im__10);
#line 295
c_rt_lib0clear(&___nl__im__16);
#line 295
//clear ___nl__bool__17;
#line 295
c_rt_lib0clear(&___nl__im__18);
#line 295
c_rt_lib0clear(&___nl__im__19);
#line 295
c_rt_lib0clear(&___nl__im__20);
#line 295
c_rt_lib0clear(&___nl__im__27);
#line 295
c_rt_lib0clear(&___nl__im__28);
#line 295
//clear ___nl__int__34;
#line 295
//clear ___nl__int__35;
#line 295
//clear ___nl__int__36;
#line 295
//clear ___nl__bool__37;
#line 295
//clear ___nl__int__38;
#line 295
//clear ___nl__bool__41;
#line 295
return ___nl__im__39;
#line 296
goto label_185;
#line 296
label_185:
;
#line 296
//clear ___nl__bool__41;
#line 296
c_rt_lib0clear(&___nl__im__39);
#line 297
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 297
goto label_141;
#line 297
label_190:
;
#line 298
goto label_817;
#line 298
label_192:
;
#line 298
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(308)));
#line 298
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 299
___nl__bool__50 = c_std_lib0is_hash(___nl__im__1);
#line 299
___nl__bool__50 = !___nl__bool__50;
#line 299
___nl__bool__50 = !___nl__bool__50;
#line 299
if(___nl__bool__50){ goto label_230;}
#line 299
c_rt_lib0move(&___nl__im__54, ptd0get_imm_kind(___nl__im__0));
#line 299
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_arg(___get_global_string_const(1230), ___nl__im__54));
#line 299
c_rt_lib0clear(&___nl__im__54);
#line 299
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__53));
#line 299
c_rt_lib0clear(&___nl__im__53);
#line 299
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(1, ___nl__im__52));
#line 299
c_rt_lib0clear(&___nl__im__52);
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
//clear ___nl__bool__7;
#line 299
c_rt_lib0clear(&___nl__im__8);
#line 299
c_rt_lib0clear(&___nl__im__9);
#line 299
c_rt_lib0clear(&___nl__im__10);
#line 299
c_rt_lib0clear(&___nl__im__16);
#line 299
//clear ___nl__bool__17;
#line 299
c_rt_lib0clear(&___nl__im__18);
#line 299
c_rt_lib0clear(&___nl__im__19);
#line 299
c_rt_lib0clear(&___nl__im__20);
#line 299
c_rt_lib0clear(&___nl__im__27);
#line 299
c_rt_lib0clear(&___nl__im__28);
#line 299
//clear ___nl__int__34;
#line 299
//clear ___nl__int__35;
#line 299
//clear ___nl__int__36;
#line 299
//clear ___nl__bool__37;
#line 299
//clear ___nl__int__38;
#line 299
c_rt_lib0clear(&___nl__im__39);
#line 299
c_rt_lib0clear(&___nl__im__48);
#line 299
c_rt_lib0clear(&___nl__im__49);
#line 299
//clear ___nl__bool__50;
#line 299
return ___nl__im__51;
#line 299
goto label_230;
#line 299
label_230:
;
#line 299
//clear ___nl__bool__50;
#line 299
c_rt_lib0clear(&___nl__im__51);
#line 300
___nl__int__56 = hash0size(___nl__im__48);
#line 300
___nl__int__57 = hash0size(___nl__im__1);
#line 300
___nl__int__58 = ___nl__int__56 == ___nl__int__57;
#line 300
___nl__bool__55 = ___nl__int__58;
#line 300
//clear ___nl__int__56;
#line 300
//clear ___nl__int__57;
#line 300
//clear ___nl__int__58;
#line 300
___nl__bool__55 = !___nl__bool__55;
#line 300
___nl__bool__55 = !___nl__bool__55;
#line 300
if(___nl__bool__55){ goto label_276;}
#line 300
___nl__int__62 = hash0size(___nl__im__1);
#line 300
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 300
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_arg(___get_global_string_const(1233), ___nl__im__63));
#line 300
//clear ___nl__int__62;
#line 300
c_rt_lib0clear(&___nl__im__63);
#line 300
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__61));
#line 300
c_rt_lib0clear(&___nl__im__61);
#line 300
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(1, ___nl__im__60));
#line 300
c_rt_lib0clear(&___nl__im__60);
#line 300
c_rt_lib0clear(&___nl__im__0);
#line 300
c_rt_lib0clear(&___nl__im__1);
#line 300
//clear ___nl__bool__7;
#line 300
c_rt_lib0clear(&___nl__im__8);
#line 300
c_rt_lib0clear(&___nl__im__9);
#line 300
c_rt_lib0clear(&___nl__im__10);
#line 300
c_rt_lib0clear(&___nl__im__16);
#line 300
//clear ___nl__bool__17;
#line 300
c_rt_lib0clear(&___nl__im__18);
#line 300
c_rt_lib0clear(&___nl__im__19);
#line 300
c_rt_lib0clear(&___nl__im__20);
#line 300
c_rt_lib0clear(&___nl__im__27);
#line 300
c_rt_lib0clear(&___nl__im__28);
#line 300
//clear ___nl__int__34;
#line 300
//clear ___nl__int__35;
#line 300
//clear ___nl__int__36;
#line 300
//clear ___nl__bool__37;
#line 300
//clear ___nl__int__38;
#line 300
c_rt_lib0clear(&___nl__im__39);
#line 300
c_rt_lib0clear(&___nl__im__48);
#line 300
c_rt_lib0clear(&___nl__im__49);
#line 300
//clear ___nl__bool__55;
#line 300
return ___nl__im__59;
#line 300
goto label_276;
#line 300
label_276:
;
#line 300
//clear ___nl__bool__55;
#line 300
c_rt_lib0clear(&___nl__im__59);
#line 301
c_rt_lib0move(&___nl__im__67, c_rt_lib0init_iter(___nl__im__48));
#line 301
label_280:
;
#line 301
___nl__bool__65 = c_rt_lib0is_end_hash(___nl__im__67);
#line 301
if(___nl__bool__65){ goto label_375;}
#line 301
c_rt_lib0move(&___nl__im__64, c_rt_lib0get_key_iter(___nl__im__67));
#line 301
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value(___nl__im__48, ___nl__im__64));
#line 302
___nl__bool__68 = hash0has_key(___nl__im__1, ___nl__im__64);
#line 302
___nl__bool__68 = !___nl__bool__68;
#line 302
___nl__bool__68 = !___nl__bool__68;
#line 302
if(___nl__bool__68){ goto label_322;}
#line 302
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_string_const(1234), ___nl__im__64));
#line 302
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__71));
#line 302
c_rt_lib0clear(&___nl__im__71);
#line 302
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_mk(1, ___nl__im__70));
#line 302
c_rt_lib0clear(&___nl__im__70);
#line 302
c_rt_lib0clear(&___nl__im__0);
#line 302
c_rt_lib0clear(&___nl__im__1);
#line 302
//clear ___nl__bool__7;
#line 302
c_rt_lib0clear(&___nl__im__8);
#line 302
c_rt_lib0clear(&___nl__im__9);
#line 302
c_rt_lib0clear(&___nl__im__10);
#line 302
c_rt_lib0clear(&___nl__im__16);
#line 302
//clear ___nl__bool__17;
#line 302
c_rt_lib0clear(&___nl__im__18);
#line 302
c_rt_lib0clear(&___nl__im__19);
#line 302
c_rt_lib0clear(&___nl__im__20);
#line 302
c_rt_lib0clear(&___nl__im__27);
#line 302
c_rt_lib0clear(&___nl__im__28);
#line 302
//clear ___nl__int__34;
#line 302
//clear ___nl__int__35;
#line 302
//clear ___nl__int__36;
#line 302
//clear ___nl__bool__37;
#line 302
//clear ___nl__int__38;
#line 302
c_rt_lib0clear(&___nl__im__39);
#line 302
c_rt_lib0clear(&___nl__im__48);
#line 302
c_rt_lib0clear(&___nl__im__49);
#line 302
c_rt_lib0clear(&___nl__im__64);
#line 302
//clear ___nl__bool__65;
#line 302
c_rt_lib0clear(&___nl__im__66);
#line 302
c_rt_lib0clear(&___nl__im__67);
#line 302
//clear ___nl__bool__68;
#line 302
return ___nl__im__69;
#line 302
goto label_322;
#line 302
label_322:
;
#line 302
//clear ___nl__bool__68;
#line 302
c_rt_lib0clear(&___nl__im__69);
#line 303
c_rt_lib0move(&___nl__im__73, hash0get_value(___nl__im__1, ___nl__im__64));
#line 303
c_rt_lib0move(&___nl__im__72, ptd_priv0try_dynamic_cast(___nl__im__66, ___nl__im__73));
#line 303
c_rt_lib0clear(&___nl__im__73);
#line 304
___nl__int__75 = c_rt_lib0array_len(___nl__im__72);
#line 304
___nl__int__76 = 0;
#line 304
___nl__int__77 = ___nl__int__75 > ___nl__int__76;
#line 304
___nl__bool__74 = ___nl__int__77;
#line 304
//clear ___nl__int__75;
#line 304
//clear ___nl__int__76;
#line 304
//clear ___nl__int__77;
#line 304
___nl__bool__74 = !___nl__bool__74;
#line 304
if(___nl__bool__74){ goto label_370;}
#line 305
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_string_const(1223), ___nl__im__64));
#line 305
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(1202), ___nl__im__79));
#line 305
c_rt_lib0clear(&___nl__im__79);
#line 305
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__78));
#line 305
c_rt_lib0clear(&___nl__im__78);
#line 306
c_rt_lib0clear(&___nl__im__0);
#line 306
c_rt_lib0clear(&___nl__im__1);
#line 306
//clear ___nl__bool__7;
#line 306
c_rt_lib0clear(&___nl__im__8);
#line 306
c_rt_lib0clear(&___nl__im__9);
#line 306
c_rt_lib0clear(&___nl__im__10);
#line 306
c_rt_lib0clear(&___nl__im__16);
#line 306
//clear ___nl__bool__17;
#line 306
c_rt_lib0clear(&___nl__im__18);
#line 306
c_rt_lib0clear(&___nl__im__19);
#line 306
c_rt_lib0clear(&___nl__im__20);
#line 306
c_rt_lib0clear(&___nl__im__27);
#line 306
c_rt_lib0clear(&___nl__im__28);
#line 306
//clear ___nl__int__34;
#line 306
//clear ___nl__int__35;
#line 306
//clear ___nl__int__36;
#line 306
//clear ___nl__bool__37;
#line 306
//clear ___nl__int__38;
#line 306
c_rt_lib0clear(&___nl__im__39);
#line 306
c_rt_lib0clear(&___nl__im__48);
#line 306
c_rt_lib0clear(&___nl__im__49);
#line 306
c_rt_lib0clear(&___nl__im__64);
#line 306
//clear ___nl__bool__65;
#line 306
c_rt_lib0clear(&___nl__im__66);
#line 306
c_rt_lib0clear(&___nl__im__67);
#line 306
//clear ___nl__bool__74;
#line 306
return ___nl__im__72;
#line 307
goto label_370;
#line 307
label_370:
;
#line 307
//clear ___nl__bool__74;
#line 307
c_rt_lib0clear(&___nl__im__72);
#line 308
c_rt_lib0move(&___nl__im__67, c_rt_lib0next_iter(___nl__im__67));
#line 308
goto label_280;
#line 308
label_375:
;
#line 309
goto label_817;
#line 309
label_377:
;
#line 310
___nl__bool__80 = c_std_lib0is_sim(___nl__im__1);
#line 310
___nl__bool__80 = !___nl__bool__80;
#line 310
___nl__bool__80 = !___nl__bool__80;
#line 310
if(___nl__bool__80){ goto label_418;}
#line 310
c_rt_lib0move(&___nl__im__84, ptd0get_imm_kind(___nl__im__0));
#line 310
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_string_const(1231), ___nl__im__84));
#line 310
c_rt_lib0clear(&___nl__im__84);
#line 310
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__83));
#line 310
c_rt_lib0clear(&___nl__im__83);
#line 310
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(1, ___nl__im__82));
#line 310
c_rt_lib0clear(&___nl__im__82);
#line 310
c_rt_lib0clear(&___nl__im__0);
#line 310
c_rt_lib0clear(&___nl__im__1);
#line 310
//clear ___nl__bool__7;
#line 310
c_rt_lib0clear(&___nl__im__8);
#line 310
c_rt_lib0clear(&___nl__im__9);
#line 310
c_rt_lib0clear(&___nl__im__10);
#line 310
c_rt_lib0clear(&___nl__im__16);
#line 310
//clear ___nl__bool__17;
#line 310
c_rt_lib0clear(&___nl__im__18);
#line 310
c_rt_lib0clear(&___nl__im__19);
#line 310
c_rt_lib0clear(&___nl__im__20);
#line 310
c_rt_lib0clear(&___nl__im__27);
#line 310
c_rt_lib0clear(&___nl__im__28);
#line 310
//clear ___nl__int__34;
#line 310
//clear ___nl__int__35;
#line 310
//clear ___nl__int__36;
#line 310
//clear ___nl__bool__37;
#line 310
//clear ___nl__int__38;
#line 310
c_rt_lib0clear(&___nl__im__39);
#line 310
c_rt_lib0clear(&___nl__im__48);
#line 310
c_rt_lib0clear(&___nl__im__49);
#line 310
c_rt_lib0clear(&___nl__im__64);
#line 310
//clear ___nl__bool__65;
#line 310
c_rt_lib0clear(&___nl__im__66);
#line 310
c_rt_lib0clear(&___nl__im__67);
#line 310
c_rt_lib0clear(&___nl__im__72);
#line 310
//clear ___nl__bool__80;
#line 310
return ___nl__im__81;
#line 310
goto label_418;
#line 310
label_418:
;
#line 310
//clear ___nl__bool__80;
#line 310
c_rt_lib0clear(&___nl__im__81);
#line 311
goto label_817;
#line 311
label_422:
;
#line 312
___nl__bool__85 = c_std_lib0is_sim(___nl__im__1);
#line 312
___nl__bool__85 = !___nl__bool__85;
#line 312
___nl__bool__85 = !___nl__bool__85;
#line 312
if(___nl__bool__85){ goto label_463;}
#line 312
c_rt_lib0move(&___nl__im__89, ptd0get_imm_kind(___nl__im__0));
#line 312
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_string_const(1231), ___nl__im__89));
#line 312
c_rt_lib0clear(&___nl__im__89);
#line 312
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__88));
#line 312
c_rt_lib0clear(&___nl__im__88);
#line 312
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(1, ___nl__im__87));
#line 312
c_rt_lib0clear(&___nl__im__87);
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
//clear ___nl__bool__7;
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
//clear ___nl__bool__17;
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__27);
#line 312
c_rt_lib0clear(&___nl__im__28);
#line 312
//clear ___nl__int__34;
#line 312
//clear ___nl__int__35;
#line 312
//clear ___nl__int__36;
#line 312
//clear ___nl__bool__37;
#line 312
//clear ___nl__int__38;
#line 312
c_rt_lib0clear(&___nl__im__39);
#line 312
c_rt_lib0clear(&___nl__im__48);
#line 312
c_rt_lib0clear(&___nl__im__49);
#line 312
c_rt_lib0clear(&___nl__im__64);
#line 312
//clear ___nl__bool__65;
#line 312
c_rt_lib0clear(&___nl__im__66);
#line 312
c_rt_lib0clear(&___nl__im__67);
#line 312
c_rt_lib0clear(&___nl__im__72);
#line 312
//clear ___nl__bool__85;
#line 312
return ___nl__im__86;
#line 312
goto label_463;
#line 312
label_463:
;
#line 312
//clear ___nl__bool__85;
#line 312
c_rt_lib0clear(&___nl__im__86);
#line 313
goto label_817;
#line 313
label_467:
;
#line 313
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(317)));
#line 313
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 314
___nl__bool__92 = c_std_lib0is_variant(___nl__im__1);
#line 314
___nl__bool__92 = !___nl__bool__92;
#line 314
___nl__bool__92 = !___nl__bool__92;
#line 314
if(___nl__bool__92){ goto label_512;}
#line 314
c_rt_lib0move(&___nl__im__96, ptd0get_imm_kind(___nl__im__0));
#line 314
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_arg(___get_global_string_const(1232), ___nl__im__96));
#line 314
c_rt_lib0clear(&___nl__im__96);
#line 314
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__95));
#line 314
c_rt_lib0clear(&___nl__im__95);
#line 314
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_mk(1, ___nl__im__94));
#line 314
c_rt_lib0clear(&___nl__im__94);
#line 314
c_rt_lib0clear(&___nl__im__0);
#line 314
c_rt_lib0clear(&___nl__im__1);
#line 314
//clear ___nl__bool__7;
#line 314
c_rt_lib0clear(&___nl__im__8);
#line 314
c_rt_lib0clear(&___nl__im__9);
#line 314
c_rt_lib0clear(&___nl__im__10);
#line 314
c_rt_lib0clear(&___nl__im__16);
#line 314
//clear ___nl__bool__17;
#line 314
c_rt_lib0clear(&___nl__im__18);
#line 314
c_rt_lib0clear(&___nl__im__19);
#line 314
c_rt_lib0clear(&___nl__im__20);
#line 314
c_rt_lib0clear(&___nl__im__27);
#line 314
c_rt_lib0clear(&___nl__im__28);
#line 314
//clear ___nl__int__34;
#line 314
//clear ___nl__int__35;
#line 314
//clear ___nl__int__36;
#line 314
//clear ___nl__bool__37;
#line 314
//clear ___nl__int__38;
#line 314
c_rt_lib0clear(&___nl__im__39);
#line 314
c_rt_lib0clear(&___nl__im__48);
#line 314
c_rt_lib0clear(&___nl__im__49);
#line 314
c_rt_lib0clear(&___nl__im__64);
#line 314
//clear ___nl__bool__65;
#line 314
c_rt_lib0clear(&___nl__im__66);
#line 314
c_rt_lib0clear(&___nl__im__67);
#line 314
c_rt_lib0clear(&___nl__im__72);
#line 314
c_rt_lib0clear(&___nl__im__90);
#line 314
c_rt_lib0clear(&___nl__im__91);
#line 314
//clear ___nl__bool__92;
#line 314
return ___nl__im__93;
#line 314
goto label_512;
#line 314
label_512:
;
#line 314
//clear ___nl__bool__92;
#line 314
c_rt_lib0clear(&___nl__im__93);
#line 315
c_rt_lib0move(&___nl__im__97, ov0get_element(___nl__im__1));
#line 316
___nl__bool__98 = hash0has_key(___nl__im__90, ___nl__im__97);
#line 316
___nl__bool__98 = !___nl__bool__98;
#line 316
___nl__bool__98 = !___nl__bool__98;
#line 316
if(___nl__bool__98){ goto label_561;}
#line 316
c_rt_lib0move(&___nl__im__103,___get_global_string_const(37));
#line 316
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__97, ___nl__im__103));
#line 316
c_rt_lib0clear(&___nl__im__103);
#line 316
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_string_const(1235), ___nl__im__102));
#line 316
c_rt_lib0clear(&___nl__im__102);
#line 316
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__101));
#line 316
c_rt_lib0clear(&___nl__im__101);
#line 316
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(1, ___nl__im__100));
#line 316
c_rt_lib0clear(&___nl__im__100);
#line 316
c_rt_lib0clear(&___nl__im__0);
#line 316
c_rt_lib0clear(&___nl__im__1);
#line 316
//clear ___nl__bool__7;
#line 316
c_rt_lib0clear(&___nl__im__8);
#line 316
c_rt_lib0clear(&___nl__im__9);
#line 316
c_rt_lib0clear(&___nl__im__10);
#line 316
c_rt_lib0clear(&___nl__im__16);
#line 316
//clear ___nl__bool__17;
#line 316
c_rt_lib0clear(&___nl__im__18);
#line 316
c_rt_lib0clear(&___nl__im__19);
#line 316
c_rt_lib0clear(&___nl__im__20);
#line 316
c_rt_lib0clear(&___nl__im__27);
#line 316
c_rt_lib0clear(&___nl__im__28);
#line 316
//clear ___nl__int__34;
#line 316
//clear ___nl__int__35;
#line 316
//clear ___nl__int__36;
#line 316
//clear ___nl__bool__37;
#line 316
//clear ___nl__int__38;
#line 316
c_rt_lib0clear(&___nl__im__39);
#line 316
c_rt_lib0clear(&___nl__im__48);
#line 316
c_rt_lib0clear(&___nl__im__49);
#line 316
c_rt_lib0clear(&___nl__im__64);
#line 316
//clear ___nl__bool__65;
#line 316
c_rt_lib0clear(&___nl__im__66);
#line 316
c_rt_lib0clear(&___nl__im__67);
#line 316
c_rt_lib0clear(&___nl__im__72);
#line 316
c_rt_lib0clear(&___nl__im__90);
#line 316
c_rt_lib0clear(&___nl__im__91);
#line 316
c_rt_lib0clear(&___nl__im__97);
#line 316
//clear ___nl__bool__98;
#line 316
return ___nl__im__99;
#line 316
goto label_561;
#line 316
label_561:
;
#line 316
//clear ___nl__bool__98;
#line 316
c_rt_lib0clear(&___nl__im__99);
#line 317
c_rt_lib0move(&___nl__im__104, hash0get_value(___nl__im__90, ___nl__im__97));
#line 318
___nl__bool__105 = c_rt_lib0priv_is(___nl__im__104, ___get_global_string_const(28));
#line 318
if(___nl__bool__105){ goto label_572;}
#line 325
___nl__bool__105 = c_rt_lib0priv_is(___nl__im__104, ___get_global_string_const(29));
#line 325
if(___nl__bool__105){ goto label_691;}
#line 325
c_rt_lib0move(&___nl__im__106,___get_global_string_const(16));
#line 325
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_mk(2, ___nl__im__106, ___nl__im__104));
#line 325
nl_die_arg(___nl__im__106);
#line 318
label_572:
;
#line 318
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__104, ___get_global_string_const(28)));
#line 318
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 319
c_rt_lib0move(&___nl__im__110, ov0has_value(___nl__im__1));
#line 319
___nl__bool__109 = c_rt_lib0check_true_native(___nl__im__110);
#line 319
c_rt_lib0clear(&___nl__im__110);
#line 319
___nl__bool__109 = !___nl__bool__109;
#line 319
___nl__bool__109 = !___nl__bool__109;
#line 319
if(___nl__bool__109){ goto label_627;}
#line 319
c_rt_lib0move(&___nl__im__115,___get_global_string_const(37));
#line 319
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__97, ___nl__im__115));
#line 319
c_rt_lib0clear(&___nl__im__115);
#line 319
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_arg(___get_global_string_const(1237), ___nl__im__114));
#line 319
c_rt_lib0clear(&___nl__im__114);
#line 319
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__113));
#line 319
c_rt_lib0clear(&___nl__im__113);
#line 319
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_mk(1, ___nl__im__112));
#line 319
c_rt_lib0clear(&___nl__im__112);
#line 319
c_rt_lib0clear(&___nl__im__0);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
//clear ___nl__bool__7;
#line 319
c_rt_lib0clear(&___nl__im__8);
#line 319
c_rt_lib0clear(&___nl__im__9);
#line 319
c_rt_lib0clear(&___nl__im__10);
#line 319
c_rt_lib0clear(&___nl__im__16);
#line 319
//clear ___nl__bool__17;
#line 319
c_rt_lib0clear(&___nl__im__18);
#line 319
c_rt_lib0clear(&___nl__im__19);
#line 319
c_rt_lib0clear(&___nl__im__20);
#line 319
c_rt_lib0clear(&___nl__im__27);
#line 319
c_rt_lib0clear(&___nl__im__28);
#line 319
//clear ___nl__int__34;
#line 319
//clear ___nl__int__35;
#line 319
//clear ___nl__int__36;
#line 319
//clear ___nl__bool__37;
#line 319
//clear ___nl__int__38;
#line 319
c_rt_lib0clear(&___nl__im__39);
#line 319
c_rt_lib0clear(&___nl__im__48);
#line 319
c_rt_lib0clear(&___nl__im__49);
#line 319
c_rt_lib0clear(&___nl__im__64);
#line 319
//clear ___nl__bool__65;
#line 319
c_rt_lib0clear(&___nl__im__66);
#line 319
c_rt_lib0clear(&___nl__im__67);
#line 319
c_rt_lib0clear(&___nl__im__72);
#line 319
c_rt_lib0clear(&___nl__im__90);
#line 319
c_rt_lib0clear(&___nl__im__91);
#line 319
c_rt_lib0clear(&___nl__im__97);
#line 319
c_rt_lib0clear(&___nl__im__104);
#line 319
//clear ___nl__bool__105;
#line 319
c_rt_lib0clear(&___nl__im__106);
#line 319
c_rt_lib0clear(&___nl__im__107);
#line 319
c_rt_lib0clear(&___nl__im__108);
#line 319
//clear ___nl__bool__109;
#line 319
return ___nl__im__111;
#line 319
goto label_627;
#line 319
label_627:
;
#line 319
//clear ___nl__bool__109;
#line 319
c_rt_lib0clear(&___nl__im__111);
#line 320
c_rt_lib0move(&___nl__im__117, ov0get_value(___nl__im__1));
#line 320
c_rt_lib0move(&___nl__im__116, ptd_priv0try_dynamic_cast(___nl__im__107, ___nl__im__117));
#line 320
c_rt_lib0clear(&___nl__im__117);
#line 321
___nl__int__119 = c_rt_lib0array_len(___nl__im__116);
#line 321
___nl__int__120 = 0;
#line 321
___nl__int__121 = ___nl__int__119 > ___nl__int__120;
#line 321
___nl__bool__118 = ___nl__int__121;
#line 321
//clear ___nl__int__119;
#line 321
//clear ___nl__int__120;
#line 321
//clear ___nl__int__121;
#line 321
___nl__bool__118 = !___nl__bool__118;
#line 321
if(___nl__bool__118){ goto label_688;}
#line 322
c_rt_lib0move(&___nl__im__125,___get_global_string_const(37));
#line 322
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__97, ___nl__im__125));
#line 322
c_rt_lib0clear(&___nl__im__125);
#line 322
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(1224), ___nl__im__124));
#line 322
c_rt_lib0clear(&___nl__im__124);
#line 322
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_arg(___get_global_string_const(1202), ___nl__im__123));
#line 322
c_rt_lib0clear(&___nl__im__123);
#line 322
c_rt_lib0delete(array0push(&___nl__im__116, ___nl__im__122));
#line 322
c_rt_lib0clear(&___nl__im__122);
#line 323
c_rt_lib0clear(&___nl__im__0);
#line 323
c_rt_lib0clear(&___nl__im__1);
#line 323
//clear ___nl__bool__7;
#line 323
c_rt_lib0clear(&___nl__im__8);
#line 323
c_rt_lib0clear(&___nl__im__9);
#line 323
c_rt_lib0clear(&___nl__im__10);
#line 323
c_rt_lib0clear(&___nl__im__16);
#line 323
//clear ___nl__bool__17;
#line 323
c_rt_lib0clear(&___nl__im__18);
#line 323
c_rt_lib0clear(&___nl__im__19);
#line 323
c_rt_lib0clear(&___nl__im__20);
#line 323
c_rt_lib0clear(&___nl__im__27);
#line 323
c_rt_lib0clear(&___nl__im__28);
#line 323
//clear ___nl__int__34;
#line 323
//clear ___nl__int__35;
#line 323
//clear ___nl__int__36;
#line 323
//clear ___nl__bool__37;
#line 323
//clear ___nl__int__38;
#line 323
c_rt_lib0clear(&___nl__im__39);
#line 323
c_rt_lib0clear(&___nl__im__48);
#line 323
c_rt_lib0clear(&___nl__im__49);
#line 323
c_rt_lib0clear(&___nl__im__64);
#line 323
//clear ___nl__bool__65;
#line 323
c_rt_lib0clear(&___nl__im__66);
#line 323
c_rt_lib0clear(&___nl__im__67);
#line 323
c_rt_lib0clear(&___nl__im__72);
#line 323
c_rt_lib0clear(&___nl__im__90);
#line 323
c_rt_lib0clear(&___nl__im__91);
#line 323
c_rt_lib0clear(&___nl__im__97);
#line 323
c_rt_lib0clear(&___nl__im__104);
#line 323
//clear ___nl__bool__105;
#line 323
c_rt_lib0clear(&___nl__im__106);
#line 323
c_rt_lib0clear(&___nl__im__107);
#line 323
c_rt_lib0clear(&___nl__im__108);
#line 323
//clear ___nl__bool__118;
#line 323
return ___nl__im__116;
#line 324
goto label_688;
#line 324
label_688:
;
#line 324
//clear ___nl__bool__118;
#line 325
goto label_748;
#line 325
label_691:
;
#line 326
c_rt_lib0move(&___nl__im__127, ov0has_value(___nl__im__1));
#line 326
___nl__bool__126 = c_rt_lib0check_true_native(___nl__im__127);
#line 326
c_rt_lib0clear(&___nl__im__127);
#line 326
___nl__bool__126 = !___nl__bool__126;
#line 326
if(___nl__bool__126){ goto label_744;}
#line 326
c_rt_lib0move(&___nl__im__132,___get_global_string_const(37));
#line 326
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__97, ___nl__im__132));
#line 326
c_rt_lib0clear(&___nl__im__132);
#line 326
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(1236), ___nl__im__131));
#line 326
c_rt_lib0clear(&___nl__im__131);
#line 326
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_arg(___get_global_string_const(123), ___nl__im__130));
#line 326
c_rt_lib0clear(&___nl__im__130);
#line 326
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_mk(1, ___nl__im__129));
#line 326
c_rt_lib0clear(&___nl__im__129);
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
//clear ___nl__bool__7;
#line 326
c_rt_lib0clear(&___nl__im__8);
#line 326
c_rt_lib0clear(&___nl__im__9);
#line 326
c_rt_lib0clear(&___nl__im__10);
#line 326
c_rt_lib0clear(&___nl__im__16);
#line 326
//clear ___nl__bool__17;
#line 326
c_rt_lib0clear(&___nl__im__18);
#line 326
c_rt_lib0clear(&___nl__im__19);
#line 326
c_rt_lib0clear(&___nl__im__20);
#line 326
c_rt_lib0clear(&___nl__im__27);
#line 326
c_rt_lib0clear(&___nl__im__28);
#line 326
//clear ___nl__int__34;
#line 326
//clear ___nl__int__35;
#line 326
//clear ___nl__int__36;
#line 326
//clear ___nl__bool__37;
#line 326
//clear ___nl__int__38;
#line 326
c_rt_lib0clear(&___nl__im__39);
#line 326
c_rt_lib0clear(&___nl__im__48);
#line 326
c_rt_lib0clear(&___nl__im__49);
#line 326
c_rt_lib0clear(&___nl__im__64);
#line 326
//clear ___nl__bool__65;
#line 326
c_rt_lib0clear(&___nl__im__66);
#line 326
c_rt_lib0clear(&___nl__im__67);
#line 326
c_rt_lib0clear(&___nl__im__72);
#line 326
c_rt_lib0clear(&___nl__im__90);
#line 326
c_rt_lib0clear(&___nl__im__91);
#line 326
c_rt_lib0clear(&___nl__im__97);
#line 326
c_rt_lib0clear(&___nl__im__104);
#line 326
//clear ___nl__bool__105;
#line 326
c_rt_lib0clear(&___nl__im__106);
#line 326
c_rt_lib0clear(&___nl__im__107);
#line 326
c_rt_lib0clear(&___nl__im__108);
#line 326
c_rt_lib0clear(&___nl__im__116);
#line 326
//clear ___nl__bool__126;
#line 326
return ___nl__im__128;
#line 326
goto label_744;
#line 326
label_744:
;
#line 326
//clear ___nl__bool__126;
#line 326
c_rt_lib0clear(&___nl__im__128);
#line 327
goto label_748;
#line 327
label_748:
;
#line 328
goto label_817;
#line 328
label_750:
;
#line 329
goto label_817;
#line 329
label_752:
;
#line 329
c_rt_lib0move(&___nl__im__134, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(40)));
#line 329
c_rt_lib0copy(&___nl__im__133, ___nl__im__134);
#line 330
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(0));
#line 330
c_rt_lib0move(&___nl__im__136, ptd_priv0exec(___nl__im__0, ___nl__im__137));
#line 330
c_rt_lib0clear(&___nl__im__137);
#line 330
c_rt_lib0move(&___nl__im__135, ptd_priv0try_dynamic_cast(___nl__im__136, ___nl__im__1));
#line 330
c_rt_lib0clear(&___nl__im__136);
#line 331
___nl__int__139 = c_rt_lib0array_len(___nl__im__135);
#line 331
___nl__int__140 = 0;
#line 331
___nl__int__141 = ___nl__int__139 > ___nl__int__140;
#line 331
___nl__bool__138 = ___nl__int__141;
#line 331
//clear ___nl__int__139;
#line 331
//clear ___nl__int__140;
#line 331
//clear ___nl__int__141;
#line 331
___nl__bool__138 = !___nl__bool__138;
#line 331
if(___nl__bool__138){ goto label_814;}
#line 332
c_rt_lib0move(&___nl__im__143, c_rt_lib0ov_mk_arg(___get_global_string_const(1225), ___nl__im__133));
#line 332
c_rt_lib0move(&___nl__im__142, c_rt_lib0ov_mk_arg(___get_global_string_const(1202), ___nl__im__143));
#line 332
c_rt_lib0clear(&___nl__im__143);
#line 332
c_rt_lib0delete(array0push(&___nl__im__135, ___nl__im__142));
#line 332
c_rt_lib0clear(&___nl__im__142);
#line 333
c_rt_lib0clear(&___nl__im__0);
#line 333
c_rt_lib0clear(&___nl__im__1);
#line 333
//clear ___nl__bool__7;
#line 333
c_rt_lib0clear(&___nl__im__8);
#line 333
c_rt_lib0clear(&___nl__im__9);
#line 333
c_rt_lib0clear(&___nl__im__10);
#line 333
c_rt_lib0clear(&___nl__im__16);
#line 333
//clear ___nl__bool__17;
#line 333
c_rt_lib0clear(&___nl__im__18);
#line 333
c_rt_lib0clear(&___nl__im__19);
#line 333
c_rt_lib0clear(&___nl__im__20);
#line 333
c_rt_lib0clear(&___nl__im__27);
#line 333
c_rt_lib0clear(&___nl__im__28);
#line 333
//clear ___nl__int__34;
#line 333
//clear ___nl__int__35;
#line 333
//clear ___nl__int__36;
#line 333
//clear ___nl__bool__37;
#line 333
//clear ___nl__int__38;
#line 333
c_rt_lib0clear(&___nl__im__39);
#line 333
c_rt_lib0clear(&___nl__im__48);
#line 333
c_rt_lib0clear(&___nl__im__49);
#line 333
c_rt_lib0clear(&___nl__im__64);
#line 333
//clear ___nl__bool__65;
#line 333
c_rt_lib0clear(&___nl__im__66);
#line 333
c_rt_lib0clear(&___nl__im__67);
#line 333
c_rt_lib0clear(&___nl__im__72);
#line 333
c_rt_lib0clear(&___nl__im__90);
#line 333
c_rt_lib0clear(&___nl__im__91);
#line 333
c_rt_lib0clear(&___nl__im__97);
#line 333
c_rt_lib0clear(&___nl__im__104);
#line 333
//clear ___nl__bool__105;
#line 333
c_rt_lib0clear(&___nl__im__106);
#line 333
c_rt_lib0clear(&___nl__im__107);
#line 333
c_rt_lib0clear(&___nl__im__108);
#line 333
c_rt_lib0clear(&___nl__im__116);
#line 333
c_rt_lib0clear(&___nl__im__133);
#line 333
c_rt_lib0clear(&___nl__im__134);
#line 333
//clear ___nl__bool__138;
#line 333
return ___nl__im__135;
#line 334
goto label_814;
#line 334
label_814:
;
#line 334
//clear ___nl__bool__138;
#line 335
goto label_817;
#line 335
label_817:
;
#line 336
c_rt_lib0move(&___nl__im__144, c_rt_lib0array_mk(0));
#line 336
c_rt_lib0clear(&___nl__im__0);
#line 336
c_rt_lib0clear(&___nl__im__1);
#line 336
//clear ___nl__bool__7;
#line 336
c_rt_lib0clear(&___nl__im__8);
#line 336
c_rt_lib0clear(&___nl__im__9);
#line 336
c_rt_lib0clear(&___nl__im__10);
#line 336
c_rt_lib0clear(&___nl__im__16);
#line 336
//clear ___nl__bool__17;
#line 336
c_rt_lib0clear(&___nl__im__18);
#line 336
c_rt_lib0clear(&___nl__im__19);
#line 336
c_rt_lib0clear(&___nl__im__20);
#line 336
c_rt_lib0clear(&___nl__im__27);
#line 336
c_rt_lib0clear(&___nl__im__28);
#line 336
//clear ___nl__int__34;
#line 336
//clear ___nl__int__35;
#line 336
//clear ___nl__int__36;
#line 336
//clear ___nl__bool__37;
#line 336
//clear ___nl__int__38;
#line 336
c_rt_lib0clear(&___nl__im__39);
#line 336
c_rt_lib0clear(&___nl__im__48);
#line 336
c_rt_lib0clear(&___nl__im__49);
#line 336
c_rt_lib0clear(&___nl__im__64);
#line 336
//clear ___nl__bool__65;
#line 336
c_rt_lib0clear(&___nl__im__66);
#line 336
c_rt_lib0clear(&___nl__im__67);
#line 336
c_rt_lib0clear(&___nl__im__72);
#line 336
c_rt_lib0clear(&___nl__im__90);
#line 336
c_rt_lib0clear(&___nl__im__91);
#line 336
c_rt_lib0clear(&___nl__im__97);
#line 336
c_rt_lib0clear(&___nl__im__104);
#line 336
//clear ___nl__bool__105;
#line 336
c_rt_lib0clear(&___nl__im__106);
#line 336
c_rt_lib0clear(&___nl__im__107);
#line 336
c_rt_lib0clear(&___nl__im__108);
#line 336
c_rt_lib0clear(&___nl__im__116);
#line 336
c_rt_lib0clear(&___nl__im__133);
#line 336
c_rt_lib0clear(&___nl__im__134);
#line 336
c_rt_lib0clear(&___nl__im__135);
#line 336
return ___nl__im__144;
return NULL;

}

ImmT  ptd0reconstruct_nl_with_args0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "ptd0reconstruct_nl_with_args");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  *var3 = &(_tab[3]);
ImmT  *var4 = &(_tab[4]);
return ptd0reconstruct_nl_with_args(*var0, *var1, *var2, *var3, *var4);
}
ImmT  ptd0reconstruct_nl_with_args(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
ptd_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
#line 340
c_rt_lib0move(&___nl__im__5, ptd0ptd_reconstruct_nl_with_args(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 340
c_rt_lib0clear(&___nl__im__0);
#line 340
c_rt_lib0clear(&___nl__im__1);
#line 340
c_rt_lib0clear(&___nl__im__2);
#line 340
c_rt_lib0clear(&___nl__im__3);
#line 340
c_rt_lib0clear(&___nl__im__4);
#line 340
return ___nl__im__5;
#line 340
c_rt_lib0clear(&___nl__im__0);
#line 340
c_rt_lib0clear(&___nl__im__1);
#line 340
c_rt_lib0clear(&___nl__im__2);
#line 340
c_rt_lib0clear(&___nl__im__3);
#line 340
c_rt_lib0clear(&___nl__im__4);
#line 340
c_rt_lib0clear(&___nl__im__5);
#line 340
return NULL;
return NULL;

}

ImmT  ptd0ptd_reconstruct_nl_with_args0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "ptd0ptd_reconstruct_nl_with_args");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  *var3 = &(_tab[3]);
ImmT  *var4 = &(_tab[4]);
return ptd0ptd_reconstruct_nl_with_args(*var0, *var1, *var2, *var3, *var4);
}
ImmT  ptd0ptd_reconstruct_nl_with_args(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
ptd_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 344
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__2));
#line 345
c_rt_lib0move(&___nl__im__8, ptd0ptd_im());
#line 345
c_rt_lib0move(&___nl__im__7, ptd0arr(___nl__im__8));
#line 345
c_rt_lib0clear(&___nl__im__8);
#line 345
c_rt_lib0move(&___nl__im__6, ptd0ensure(___nl__im__7, ___nl__im__4));
#line 345
c_rt_lib0clear(&___nl__im__7);
#line 345
c_rt_lib0delete(array0append(&___nl__im__5, ___nl__im__6));
#line 345
c_rt_lib0clear(&___nl__im__6);
#line 346
c_rt_lib0move(&___nl__im__9, ptd_priv0reconstruct(___nl__im__0, ___nl__im__1, ___nl__im__3, ___nl__im__5));
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
c_rt_lib0clear(&___nl__im__1);
#line 346
c_rt_lib0clear(&___nl__im__2);
#line 346
c_rt_lib0clear(&___nl__im__3);
#line 346
c_rt_lib0clear(&___nl__im__4);
#line 346
c_rt_lib0clear(&___nl__im__5);
#line 346
return ___nl__im__9;
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
c_rt_lib0clear(&___nl__im__1);
#line 346
c_rt_lib0clear(&___nl__im__2);
#line 346
c_rt_lib0clear(&___nl__im__3);
#line 346
c_rt_lib0clear(&___nl__im__4);
#line 346
c_rt_lib0clear(&___nl__im__5);
#line 346
c_rt_lib0clear(&___nl__im__9);
#line 346
return NULL;
return NULL;

}

ImmT  ptd_priv0reconstruct(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
ptd_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
#line 353
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(310));
#line 353
if(___nl__bool__4){ goto label_21;}
#line 361
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(308));
#line 361
if(___nl__bool__4){ goto label_79;}
#line 369
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(316));
#line 369
if(___nl__bool__4){ goto label_155;}
#line 377
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(317));
#line 377
if(___nl__bool__4){ goto label_256;}
#line 386
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(289));
#line 386
if(___nl__bool__4){ goto label_409;}
#line 388
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(287));
#line 388
if(___nl__bool__4){ goto label_455;}
#line 390
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1198));
#line 390
if(___nl__bool__4){ goto label_502;}
#line 392
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(288));
#line 392
if(___nl__bool__4){ goto label_550;}
#line 394
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(40));
#line 394
if(___nl__bool__4){ goto label_599;}
#line 394
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
#line 394
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__1));
#line 394
nl_die_arg(___nl__im__5);
#line 353
label_21:
;
#line 353
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(310)));
#line 353
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 354
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 355
c_rt_lib0move(&___nl__im__12, c_rt_lib0init_iter(___nl__im__0));
#line 355
label_26:
;
#line 355
___nl__bool__10 = c_rt_lib0is_end_hash(___nl__im__12);
#line 355
if(___nl__bool__10){ goto label_61;}
#line 355
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_key_iter(___nl__im__12));
#line 355
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__9));
#line 356
c_rt_lib0move(&___nl__im__14, hash0get_value(___nl__im__6, ___nl__im__9));
#line 356
c_rt_lib0move(&___nl__im__13, ptd_priv0reconstruct(___nl__im__11, ___nl__im__14, ___nl__im__2, ___nl__im__3));
#line 356
c_rt_lib0clear(&___nl__im__14);
#line 357
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(1238));
#line 357
___nl__bool__15 = !___nl__bool__15;
#line 357
if(___nl__bool__15){ goto label_53;}
#line 357
c_rt_lib0clear(&___nl__im__0);
#line 357
c_rt_lib0clear(&___nl__im__1);
#line 357
c_rt_lib0clear(&___nl__im__2);
#line 357
c_rt_lib0clear(&___nl__im__3);
#line 357
//clear ___nl__bool__4;
#line 357
c_rt_lib0clear(&___nl__im__5);
#line 357
c_rt_lib0clear(&___nl__im__6);
#line 357
c_rt_lib0clear(&___nl__im__7);
#line 357
c_rt_lib0clear(&___nl__im__8);
#line 357
c_rt_lib0clear(&___nl__im__9);
#line 357
//clear ___nl__bool__10;
#line 357
c_rt_lib0clear(&___nl__im__11);
#line 357
c_rt_lib0clear(&___nl__im__12);
#line 357
//clear ___nl__bool__15;
#line 357
return ___nl__im__13;
#line 357
goto label_53;
#line 357
label_53:
;
#line 357
//clear ___nl__bool__15;
#line 358
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(1239)));
#line 358
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__9, ___nl__im__16));
#line 358
c_rt_lib0clear(&___nl__im__16);
#line 358
c_rt_lib0clear(&___nl__im__13);
#line 359
c_rt_lib0move(&___nl__im__12, c_rt_lib0next_iter(___nl__im__12));
#line 359
goto label_26;
#line 359
label_61:
;
#line 360
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__8));
#line 360
c_rt_lib0clear(&___nl__im__0);
#line 360
c_rt_lib0clear(&___nl__im__1);
#line 360
c_rt_lib0clear(&___nl__im__2);
#line 360
c_rt_lib0clear(&___nl__im__3);
#line 360
//clear ___nl__bool__4;
#line 360
c_rt_lib0clear(&___nl__im__5);
#line 360
c_rt_lib0clear(&___nl__im__6);
#line 360
c_rt_lib0clear(&___nl__im__7);
#line 360
c_rt_lib0clear(&___nl__im__8);
#line 360
c_rt_lib0clear(&___nl__im__9);
#line 360
//clear ___nl__bool__10;
#line 360
c_rt_lib0clear(&___nl__im__11);
#line 360
c_rt_lib0clear(&___nl__im__12);
#line 360
c_rt_lib0clear(&___nl__im__13);
#line 360
return ___nl__im__17;
#line 361
goto label_805;
#line 361
label_79:
;
#line 361
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(308)));
#line 361
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 362
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 363
c_rt_lib0move(&___nl__im__24, c_rt_lib0init_iter(___nl__im__0));
#line 363
label_84:
;
#line 363
___nl__bool__22 = c_rt_lib0is_end_hash(___nl__im__24);
#line 363
if(___nl__bool__22){ goto label_128;}
#line 363
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_key_iter(___nl__im__24));
#line 363
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__21));
#line 364
c_rt_lib0move(&___nl__im__26, hash0get_value(___nl__im__18, ___nl__im__21));
#line 364
c_rt_lib0move(&___nl__im__25, ptd_priv0reconstruct(___nl__im__23, ___nl__im__26, ___nl__im__2, ___nl__im__3));
#line 364
c_rt_lib0clear(&___nl__im__26);
#line 365
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(1238));
#line 365
___nl__bool__27 = !___nl__bool__27;
#line 365
if(___nl__bool__27){ goto label_120;}
#line 365
c_rt_lib0clear(&___nl__im__0);
#line 365
c_rt_lib0clear(&___nl__im__1);
#line 365
c_rt_lib0clear(&___nl__im__2);
#line 365
c_rt_lib0clear(&___nl__im__3);
#line 365
//clear ___nl__bool__4;
#line 365
c_rt_lib0clear(&___nl__im__5);
#line 365
c_rt_lib0clear(&___nl__im__6);
#line 365
c_rt_lib0clear(&___nl__im__7);
#line 365
c_rt_lib0clear(&___nl__im__8);
#line 365
c_rt_lib0clear(&___nl__im__9);
#line 365
//clear ___nl__bool__10;
#line 365
c_rt_lib0clear(&___nl__im__11);
#line 365
c_rt_lib0clear(&___nl__im__12);
#line 365
c_rt_lib0clear(&___nl__im__13);
#line 365
c_rt_lib0clear(&___nl__im__17);
#line 365
c_rt_lib0clear(&___nl__im__18);
#line 365
c_rt_lib0clear(&___nl__im__19);
#line 365
c_rt_lib0clear(&___nl__im__20);
#line 365
c_rt_lib0clear(&___nl__im__21);
#line 365
//clear ___nl__bool__22;
#line 365
c_rt_lib0clear(&___nl__im__23);
#line 365
c_rt_lib0clear(&___nl__im__24);
#line 365
//clear ___nl__bool__27;
#line 365
return ___nl__im__25;
#line 365
goto label_120;
#line 365
label_120:
;
#line 365
//clear ___nl__bool__27;
#line 366
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(1239)));
#line 366
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__21, ___nl__im__28));
#line 366
c_rt_lib0clear(&___nl__im__28);
#line 366
c_rt_lib0clear(&___nl__im__25);
#line 367
c_rt_lib0move(&___nl__im__24, c_rt_lib0next_iter(___nl__im__24));
#line 367
goto label_84;
#line 367
label_128:
;
#line 368
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__20));
#line 368
c_rt_lib0clear(&___nl__im__0);
#line 368
c_rt_lib0clear(&___nl__im__1);
#line 368
c_rt_lib0clear(&___nl__im__2);
#line 368
c_rt_lib0clear(&___nl__im__3);
#line 368
//clear ___nl__bool__4;
#line 368
c_rt_lib0clear(&___nl__im__5);
#line 368
c_rt_lib0clear(&___nl__im__6);
#line 368
c_rt_lib0clear(&___nl__im__7);
#line 368
c_rt_lib0clear(&___nl__im__8);
#line 368
c_rt_lib0clear(&___nl__im__9);
#line 368
//clear ___nl__bool__10;
#line 368
c_rt_lib0clear(&___nl__im__11);
#line 368
c_rt_lib0clear(&___nl__im__12);
#line 368
c_rt_lib0clear(&___nl__im__13);
#line 368
c_rt_lib0clear(&___nl__im__17);
#line 368
c_rt_lib0clear(&___nl__im__18);
#line 368
c_rt_lib0clear(&___nl__im__19);
#line 368
c_rt_lib0clear(&___nl__im__20);
#line 368
c_rt_lib0clear(&___nl__im__21);
#line 368
//clear ___nl__bool__22;
#line 368
c_rt_lib0clear(&___nl__im__23);
#line 368
c_rt_lib0clear(&___nl__im__24);
#line 368
c_rt_lib0clear(&___nl__im__25);
#line 368
return ___nl__im__29;
#line 369
goto label_805;
#line 369
label_155:
;
#line 369
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(316)));
#line 369
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 370
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 371
___nl__int__34 = 0;
#line 371
___nl__int__35 = 1;
#line 371
___nl__int__36 = c_rt_lib0array_len(___nl__im__0);
#line 371
label_162:
;
#line 371
___nl__int__38 = ___nl__int__34 >= ___nl__int__36;
#line 371
___nl__bool__37 = ___nl__int__38;
#line 371
if(___nl__bool__37){ goto label_217;}
#line 371
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_get(___nl__im__0, ___nl__int__34));
#line 371
c_rt_lib0copy(&___nl__im__33, ___nl__im__39);
#line 372
c_rt_lib0move(&___nl__im__40, ptd_priv0reconstruct(___nl__im__33, ___nl__im__30, ___nl__im__2, ___nl__im__3));
#line 373
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(1238));
#line 373
___nl__bool__41 = !___nl__bool__41;
#line 373
if(___nl__bool__41){ goto label_209;}
#line 373
c_rt_lib0clear(&___nl__im__0);
#line 373
c_rt_lib0clear(&___nl__im__1);
#line 373
c_rt_lib0clear(&___nl__im__2);
#line 373
c_rt_lib0clear(&___nl__im__3);
#line 373
//clear ___nl__bool__4;
#line 373
c_rt_lib0clear(&___nl__im__5);
#line 373
c_rt_lib0clear(&___nl__im__6);
#line 373
c_rt_lib0clear(&___nl__im__7);
#line 373
c_rt_lib0clear(&___nl__im__8);
#line 373
c_rt_lib0clear(&___nl__im__9);
#line 373
//clear ___nl__bool__10;
#line 373
c_rt_lib0clear(&___nl__im__11);
#line 373
c_rt_lib0clear(&___nl__im__12);
#line 373
c_rt_lib0clear(&___nl__im__13);
#line 373
c_rt_lib0clear(&___nl__im__17);
#line 373
c_rt_lib0clear(&___nl__im__18);
#line 373
c_rt_lib0clear(&___nl__im__19);
#line 373
c_rt_lib0clear(&___nl__im__20);
#line 373
c_rt_lib0clear(&___nl__im__21);
#line 373
//clear ___nl__bool__22;
#line 373
c_rt_lib0clear(&___nl__im__23);
#line 373
c_rt_lib0clear(&___nl__im__24);
#line 373
c_rt_lib0clear(&___nl__im__25);
#line 373
c_rt_lib0clear(&___nl__im__29);
#line 373
c_rt_lib0clear(&___nl__im__30);
#line 373
c_rt_lib0clear(&___nl__im__31);
#line 373
c_rt_lib0clear(&___nl__im__32);
#line 373
c_rt_lib0clear(&___nl__im__33);
#line 373
//clear ___nl__int__34;
#line 373
//clear ___nl__int__35;
#line 373
//clear ___nl__int__36;
#line 373
//clear ___nl__bool__37;
#line 373
//clear ___nl__int__38;
#line 373
c_rt_lib0clear(&___nl__im__39);
#line 373
//clear ___nl__bool__41;
#line 373
return ___nl__im__40;
#line 373
goto label_209;
#line 373
label_209:
;
#line 373
//clear ___nl__bool__41;
#line 374
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(1239)));
#line 374
c_rt_lib0delete(array0push(&___nl__im__32, ___nl__im__42));
#line 374
c_rt_lib0clear(&___nl__im__42);
#line 374
c_rt_lib0clear(&___nl__im__33);
#line 375
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 375
goto label_162;
#line 375
label_217:
;
#line 376
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__32));
#line 376
c_rt_lib0clear(&___nl__im__0);
#line 376
c_rt_lib0clear(&___nl__im__1);
#line 376
c_rt_lib0clear(&___nl__im__2);
#line 376
c_rt_lib0clear(&___nl__im__3);
#line 376
//clear ___nl__bool__4;
#line 376
c_rt_lib0clear(&___nl__im__5);
#line 376
c_rt_lib0clear(&___nl__im__6);
#line 376
c_rt_lib0clear(&___nl__im__7);
#line 376
c_rt_lib0clear(&___nl__im__8);
#line 376
c_rt_lib0clear(&___nl__im__9);
#line 376
//clear ___nl__bool__10;
#line 376
c_rt_lib0clear(&___nl__im__11);
#line 376
c_rt_lib0clear(&___nl__im__12);
#line 376
c_rt_lib0clear(&___nl__im__13);
#line 376
c_rt_lib0clear(&___nl__im__17);
#line 376
c_rt_lib0clear(&___nl__im__18);
#line 376
c_rt_lib0clear(&___nl__im__19);
#line 376
c_rt_lib0clear(&___nl__im__20);
#line 376
c_rt_lib0clear(&___nl__im__21);
#line 376
//clear ___nl__bool__22;
#line 376
c_rt_lib0clear(&___nl__im__23);
#line 376
c_rt_lib0clear(&___nl__im__24);
#line 376
c_rt_lib0clear(&___nl__im__25);
#line 376
c_rt_lib0clear(&___nl__im__29);
#line 376
c_rt_lib0clear(&___nl__im__30);
#line 376
c_rt_lib0clear(&___nl__im__31);
#line 376
c_rt_lib0clear(&___nl__im__32);
#line 376
c_rt_lib0clear(&___nl__im__33);
#line 376
//clear ___nl__int__34;
#line 376
//clear ___nl__int__35;
#line 376
//clear ___nl__int__36;
#line 376
//clear ___nl__bool__37;
#line 376
//clear ___nl__int__38;
#line 376
c_rt_lib0clear(&___nl__im__39);
#line 376
c_rt_lib0clear(&___nl__im__40);
#line 376
return ___nl__im__43;
#line 377
goto label_805;
#line 377
label_256:
;
#line 377
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(317)));
#line 377
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 378
c_rt_lib0move(&___nl__im__46, ov0get_element(___nl__im__0));
#line 379
c_rt_lib0move(&___nl__im__1, hash0get_value(___nl__im__44, ___nl__im__46));
#line 380
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(29));
#line 380
___nl__bool__47 = !___nl__bool__47;
#line 380
if(___nl__bool__47){ goto label_307;}
#line 380
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__0));
#line 380
c_rt_lib0clear(&___nl__im__0);
#line 380
c_rt_lib0clear(&___nl__im__1);
#line 380
c_rt_lib0clear(&___nl__im__2);
#line 380
c_rt_lib0clear(&___nl__im__3);
#line 380
//clear ___nl__bool__4;
#line 380
c_rt_lib0clear(&___nl__im__5);
#line 380
c_rt_lib0clear(&___nl__im__6);
#line 380
c_rt_lib0clear(&___nl__im__7);
#line 380
c_rt_lib0clear(&___nl__im__8);
#line 380
c_rt_lib0clear(&___nl__im__9);
#line 380
//clear ___nl__bool__10;
#line 380
c_rt_lib0clear(&___nl__im__11);
#line 380
c_rt_lib0clear(&___nl__im__12);
#line 380
c_rt_lib0clear(&___nl__im__13);
#line 380
c_rt_lib0clear(&___nl__im__17);
#line 380
c_rt_lib0clear(&___nl__im__18);
#line 380
c_rt_lib0clear(&___nl__im__19);
#line 380
c_rt_lib0clear(&___nl__im__20);
#line 380
c_rt_lib0clear(&___nl__im__21);
#line 380
//clear ___nl__bool__22;
#line 380
c_rt_lib0clear(&___nl__im__23);
#line 380
c_rt_lib0clear(&___nl__im__24);
#line 380
c_rt_lib0clear(&___nl__im__25);
#line 380
c_rt_lib0clear(&___nl__im__29);
#line 380
c_rt_lib0clear(&___nl__im__30);
#line 380
c_rt_lib0clear(&___nl__im__31);
#line 380
c_rt_lib0clear(&___nl__im__32);
#line 380
c_rt_lib0clear(&___nl__im__33);
#line 380
//clear ___nl__int__34;
#line 380
//clear ___nl__int__35;
#line 380
//clear ___nl__int__36;
#line 380
//clear ___nl__bool__37;
#line 380
//clear ___nl__int__38;
#line 380
c_rt_lib0clear(&___nl__im__39);
#line 380
c_rt_lib0clear(&___nl__im__40);
#line 380
c_rt_lib0clear(&___nl__im__43);
#line 380
c_rt_lib0clear(&___nl__im__44);
#line 380
c_rt_lib0clear(&___nl__im__45);
#line 380
c_rt_lib0clear(&___nl__im__46);
#line 380
//clear ___nl__bool__47;
#line 380
return ___nl__im__48;
#line 380
goto label_307;
#line 380
label_307:
;
#line 380
//clear ___nl__bool__47;
#line 380
c_rt_lib0clear(&___nl__im__48);
#line 381
c_rt_lib0move(&___nl__im__0, ov0get_value(___nl__im__0));
#line 382
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(28)));
#line 383
c_rt_lib0move(&___nl__im__50, ptd_priv0reconstruct(___nl__im__0, ___nl__im__49, ___nl__im__2, ___nl__im__3));
#line 384
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(1238));
#line 384
___nl__bool__51 = !___nl__bool__51;
#line 384
if(___nl__bool__51){ goto label_359;}
#line 384
c_rt_lib0clear(&___nl__im__0);
#line 384
c_rt_lib0clear(&___nl__im__1);
#line 384
c_rt_lib0clear(&___nl__im__2);
#line 384
c_rt_lib0clear(&___nl__im__3);
#line 384
//clear ___nl__bool__4;
#line 384
c_rt_lib0clear(&___nl__im__5);
#line 384
c_rt_lib0clear(&___nl__im__6);
#line 384
c_rt_lib0clear(&___nl__im__7);
#line 384
c_rt_lib0clear(&___nl__im__8);
#line 384
c_rt_lib0clear(&___nl__im__9);
#line 384
//clear ___nl__bool__10;
#line 384
c_rt_lib0clear(&___nl__im__11);
#line 384
c_rt_lib0clear(&___nl__im__12);
#line 384
c_rt_lib0clear(&___nl__im__13);
#line 384
c_rt_lib0clear(&___nl__im__17);
#line 384
c_rt_lib0clear(&___nl__im__18);
#line 384
c_rt_lib0clear(&___nl__im__19);
#line 384
c_rt_lib0clear(&___nl__im__20);
#line 384
c_rt_lib0clear(&___nl__im__21);
#line 384
//clear ___nl__bool__22;
#line 384
c_rt_lib0clear(&___nl__im__23);
#line 384
c_rt_lib0clear(&___nl__im__24);
#line 384
c_rt_lib0clear(&___nl__im__25);
#line 384
c_rt_lib0clear(&___nl__im__29);
#line 384
c_rt_lib0clear(&___nl__im__30);
#line 384
c_rt_lib0clear(&___nl__im__31);
#line 384
c_rt_lib0clear(&___nl__im__32);
#line 384
c_rt_lib0clear(&___nl__im__33);
#line 384
//clear ___nl__int__34;
#line 384
//clear ___nl__int__35;
#line 384
//clear ___nl__int__36;
#line 384
//clear ___nl__bool__37;
#line 384
//clear ___nl__int__38;
#line 384
c_rt_lib0clear(&___nl__im__39);
#line 384
c_rt_lib0clear(&___nl__im__40);
#line 384
c_rt_lib0clear(&___nl__im__43);
#line 384
c_rt_lib0clear(&___nl__im__44);
#line 384
c_rt_lib0clear(&___nl__im__45);
#line 384
c_rt_lib0clear(&___nl__im__46);
#line 384
c_rt_lib0clear(&___nl__im__49);
#line 384
//clear ___nl__bool__51;
#line 384
return ___nl__im__50;
#line 384
goto label_359;
#line 384
label_359:
;
#line 384
//clear ___nl__bool__51;
#line 385
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(1239)));
#line 385
c_rt_lib0move(&___nl__im__53, ov0mk_val(___nl__im__46, ___nl__im__54));
#line 385
c_rt_lib0clear(&___nl__im__54);
#line 385
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__53));
#line 385
c_rt_lib0clear(&___nl__im__53);
#line 385
c_rt_lib0clear(&___nl__im__0);
#line 385
c_rt_lib0clear(&___nl__im__1);
#line 385
c_rt_lib0clear(&___nl__im__2);
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
//clear ___nl__bool__4;
#line 385
c_rt_lib0clear(&___nl__im__5);
#line 385
c_rt_lib0clear(&___nl__im__6);
#line 385
c_rt_lib0clear(&___nl__im__7);
#line 385
c_rt_lib0clear(&___nl__im__8);
#line 385
c_rt_lib0clear(&___nl__im__9);
#line 385
//clear ___nl__bool__10;
#line 385
c_rt_lib0clear(&___nl__im__11);
#line 385
c_rt_lib0clear(&___nl__im__12);
#line 385
c_rt_lib0clear(&___nl__im__13);
#line 385
c_rt_lib0clear(&___nl__im__17);
#line 385
c_rt_lib0clear(&___nl__im__18);
#line 385
c_rt_lib0clear(&___nl__im__19);
#line 385
c_rt_lib0clear(&___nl__im__20);
#line 385
c_rt_lib0clear(&___nl__im__21);
#line 385
//clear ___nl__bool__22;
#line 385
c_rt_lib0clear(&___nl__im__23);
#line 385
c_rt_lib0clear(&___nl__im__24);
#line 385
c_rt_lib0clear(&___nl__im__25);
#line 385
c_rt_lib0clear(&___nl__im__29);
#line 385
c_rt_lib0clear(&___nl__im__30);
#line 385
c_rt_lib0clear(&___nl__im__31);
#line 385
c_rt_lib0clear(&___nl__im__32);
#line 385
c_rt_lib0clear(&___nl__im__33);
#line 385
//clear ___nl__int__34;
#line 385
//clear ___nl__int__35;
#line 385
//clear ___nl__int__36;
#line 385
//clear ___nl__bool__37;
#line 385
//clear ___nl__int__38;
#line 385
c_rt_lib0clear(&___nl__im__39);
#line 385
c_rt_lib0clear(&___nl__im__40);
#line 385
c_rt_lib0clear(&___nl__im__43);
#line 385
c_rt_lib0clear(&___nl__im__44);
#line 385
c_rt_lib0clear(&___nl__im__45);
#line 385
c_rt_lib0clear(&___nl__im__46);
#line 385
c_rt_lib0clear(&___nl__im__49);
#line 385
c_rt_lib0clear(&___nl__im__50);
#line 385
return ___nl__im__52;
#line 386
goto label_805;
#line 386
label_409:
;
#line 387
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__0));
#line 387
c_rt_lib0clear(&___nl__im__0);
#line 387
c_rt_lib0clear(&___nl__im__1);
#line 387
c_rt_lib0clear(&___nl__im__2);
#line 387
c_rt_lib0clear(&___nl__im__3);
#line 387
//clear ___nl__bool__4;
#line 387
c_rt_lib0clear(&___nl__im__5);
#line 387
c_rt_lib0clear(&___nl__im__6);
#line 387
c_rt_lib0clear(&___nl__im__7);
#line 387
c_rt_lib0clear(&___nl__im__8);
#line 387
c_rt_lib0clear(&___nl__im__9);
#line 387
//clear ___nl__bool__10;
#line 387
c_rt_lib0clear(&___nl__im__11);
#line 387
c_rt_lib0clear(&___nl__im__12);
#line 387
c_rt_lib0clear(&___nl__im__13);
#line 387
c_rt_lib0clear(&___nl__im__17);
#line 387
c_rt_lib0clear(&___nl__im__18);
#line 387
c_rt_lib0clear(&___nl__im__19);
#line 387
c_rt_lib0clear(&___nl__im__20);
#line 387
c_rt_lib0clear(&___nl__im__21);
#line 387
//clear ___nl__bool__22;
#line 387
c_rt_lib0clear(&___nl__im__23);
#line 387
c_rt_lib0clear(&___nl__im__24);
#line 387
c_rt_lib0clear(&___nl__im__25);
#line 387
c_rt_lib0clear(&___nl__im__29);
#line 387
c_rt_lib0clear(&___nl__im__30);
#line 387
c_rt_lib0clear(&___nl__im__31);
#line 387
c_rt_lib0clear(&___nl__im__32);
#line 387
c_rt_lib0clear(&___nl__im__33);
#line 387
//clear ___nl__int__34;
#line 387
//clear ___nl__int__35;
#line 387
//clear ___nl__int__36;
#line 387
//clear ___nl__bool__37;
#line 387
//clear ___nl__int__38;
#line 387
c_rt_lib0clear(&___nl__im__39);
#line 387
c_rt_lib0clear(&___nl__im__40);
#line 387
c_rt_lib0clear(&___nl__im__43);
#line 387
c_rt_lib0clear(&___nl__im__44);
#line 387
c_rt_lib0clear(&___nl__im__45);
#line 387
c_rt_lib0clear(&___nl__im__46);
#line 387
c_rt_lib0clear(&___nl__im__49);
#line 387
c_rt_lib0clear(&___nl__im__50);
#line 387
c_rt_lib0clear(&___nl__im__52);
#line 387
return ___nl__im__55;
#line 388
goto label_805;
#line 388
label_455:
;
#line 389
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__0));
#line 389
c_rt_lib0clear(&___nl__im__0);
#line 389
c_rt_lib0clear(&___nl__im__1);
#line 389
c_rt_lib0clear(&___nl__im__2);
#line 389
c_rt_lib0clear(&___nl__im__3);
#line 389
//clear ___nl__bool__4;
#line 389
c_rt_lib0clear(&___nl__im__5);
#line 389
c_rt_lib0clear(&___nl__im__6);
#line 389
c_rt_lib0clear(&___nl__im__7);
#line 389
c_rt_lib0clear(&___nl__im__8);
#line 389
c_rt_lib0clear(&___nl__im__9);
#line 389
//clear ___nl__bool__10;
#line 389
c_rt_lib0clear(&___nl__im__11);
#line 389
c_rt_lib0clear(&___nl__im__12);
#line 389
c_rt_lib0clear(&___nl__im__13);
#line 389
c_rt_lib0clear(&___nl__im__17);
#line 389
c_rt_lib0clear(&___nl__im__18);
#line 389
c_rt_lib0clear(&___nl__im__19);
#line 389
c_rt_lib0clear(&___nl__im__20);
#line 389
c_rt_lib0clear(&___nl__im__21);
#line 389
//clear ___nl__bool__22;
#line 389
c_rt_lib0clear(&___nl__im__23);
#line 389
c_rt_lib0clear(&___nl__im__24);
#line 389
c_rt_lib0clear(&___nl__im__25);
#line 389
c_rt_lib0clear(&___nl__im__29);
#line 389
c_rt_lib0clear(&___nl__im__30);
#line 389
c_rt_lib0clear(&___nl__im__31);
#line 389
c_rt_lib0clear(&___nl__im__32);
#line 389
c_rt_lib0clear(&___nl__im__33);
#line 389
//clear ___nl__int__34;
#line 389
//clear ___nl__int__35;
#line 389
//clear ___nl__int__36;
#line 389
//clear ___nl__bool__37;
#line 389
//clear ___nl__int__38;
#line 389
c_rt_lib0clear(&___nl__im__39);
#line 389
c_rt_lib0clear(&___nl__im__40);
#line 389
c_rt_lib0clear(&___nl__im__43);
#line 389
c_rt_lib0clear(&___nl__im__44);
#line 389
c_rt_lib0clear(&___nl__im__45);
#line 389
c_rt_lib0clear(&___nl__im__46);
#line 389
c_rt_lib0clear(&___nl__im__49);
#line 389
c_rt_lib0clear(&___nl__im__50);
#line 389
c_rt_lib0clear(&___nl__im__52);
#line 389
c_rt_lib0clear(&___nl__im__55);
#line 389
return ___nl__im__56;
#line 390
goto label_805;
#line 390
label_502:
;
#line 391
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__0));
#line 391
c_rt_lib0clear(&___nl__im__0);
#line 391
c_rt_lib0clear(&___nl__im__1);
#line 391
c_rt_lib0clear(&___nl__im__2);
#line 391
c_rt_lib0clear(&___nl__im__3);
#line 391
//clear ___nl__bool__4;
#line 391
c_rt_lib0clear(&___nl__im__5);
#line 391
c_rt_lib0clear(&___nl__im__6);
#line 391
c_rt_lib0clear(&___nl__im__7);
#line 391
c_rt_lib0clear(&___nl__im__8);
#line 391
c_rt_lib0clear(&___nl__im__9);
#line 391
//clear ___nl__bool__10;
#line 391
c_rt_lib0clear(&___nl__im__11);
#line 391
c_rt_lib0clear(&___nl__im__12);
#line 391
c_rt_lib0clear(&___nl__im__13);
#line 391
c_rt_lib0clear(&___nl__im__17);
#line 391
c_rt_lib0clear(&___nl__im__18);
#line 391
c_rt_lib0clear(&___nl__im__19);
#line 391
c_rt_lib0clear(&___nl__im__20);
#line 391
c_rt_lib0clear(&___nl__im__21);
#line 391
//clear ___nl__bool__22;
#line 391
c_rt_lib0clear(&___nl__im__23);
#line 391
c_rt_lib0clear(&___nl__im__24);
#line 391
c_rt_lib0clear(&___nl__im__25);
#line 391
c_rt_lib0clear(&___nl__im__29);
#line 391
c_rt_lib0clear(&___nl__im__30);
#line 391
c_rt_lib0clear(&___nl__im__31);
#line 391
c_rt_lib0clear(&___nl__im__32);
#line 391
c_rt_lib0clear(&___nl__im__33);
#line 391
//clear ___nl__int__34;
#line 391
//clear ___nl__int__35;
#line 391
//clear ___nl__int__36;
#line 391
//clear ___nl__bool__37;
#line 391
//clear ___nl__int__38;
#line 391
c_rt_lib0clear(&___nl__im__39);
#line 391
c_rt_lib0clear(&___nl__im__40);
#line 391
c_rt_lib0clear(&___nl__im__43);
#line 391
c_rt_lib0clear(&___nl__im__44);
#line 391
c_rt_lib0clear(&___nl__im__45);
#line 391
c_rt_lib0clear(&___nl__im__46);
#line 391
c_rt_lib0clear(&___nl__im__49);
#line 391
c_rt_lib0clear(&___nl__im__50);
#line 391
c_rt_lib0clear(&___nl__im__52);
#line 391
c_rt_lib0clear(&___nl__im__55);
#line 391
c_rt_lib0clear(&___nl__im__56);
#line 391
return ___nl__im__57;
#line 392
goto label_805;
#line 392
label_550:
;
#line 393
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__0));
#line 393
c_rt_lib0clear(&___nl__im__0);
#line 393
c_rt_lib0clear(&___nl__im__1);
#line 393
c_rt_lib0clear(&___nl__im__2);
#line 393
c_rt_lib0clear(&___nl__im__3);
#line 393
//clear ___nl__bool__4;
#line 393
c_rt_lib0clear(&___nl__im__5);
#line 393
c_rt_lib0clear(&___nl__im__6);
#line 393
c_rt_lib0clear(&___nl__im__7);
#line 393
c_rt_lib0clear(&___nl__im__8);
#line 393
c_rt_lib0clear(&___nl__im__9);
#line 393
//clear ___nl__bool__10;
#line 393
c_rt_lib0clear(&___nl__im__11);
#line 393
c_rt_lib0clear(&___nl__im__12);
#line 393
c_rt_lib0clear(&___nl__im__13);
#line 393
c_rt_lib0clear(&___nl__im__17);
#line 393
c_rt_lib0clear(&___nl__im__18);
#line 393
c_rt_lib0clear(&___nl__im__19);
#line 393
c_rt_lib0clear(&___nl__im__20);
#line 393
c_rt_lib0clear(&___nl__im__21);
#line 393
//clear ___nl__bool__22;
#line 393
c_rt_lib0clear(&___nl__im__23);
#line 393
c_rt_lib0clear(&___nl__im__24);
#line 393
c_rt_lib0clear(&___nl__im__25);
#line 393
c_rt_lib0clear(&___nl__im__29);
#line 393
c_rt_lib0clear(&___nl__im__30);
#line 393
c_rt_lib0clear(&___nl__im__31);
#line 393
c_rt_lib0clear(&___nl__im__32);
#line 393
c_rt_lib0clear(&___nl__im__33);
#line 393
//clear ___nl__int__34;
#line 393
//clear ___nl__int__35;
#line 393
//clear ___nl__int__36;
#line 393
//clear ___nl__bool__37;
#line 393
//clear ___nl__int__38;
#line 393
c_rt_lib0clear(&___nl__im__39);
#line 393
c_rt_lib0clear(&___nl__im__40);
#line 393
c_rt_lib0clear(&___nl__im__43);
#line 393
c_rt_lib0clear(&___nl__im__44);
#line 393
c_rt_lib0clear(&___nl__im__45);
#line 393
c_rt_lib0clear(&___nl__im__46);
#line 393
c_rt_lib0clear(&___nl__im__49);
#line 393
c_rt_lib0clear(&___nl__im__50);
#line 393
c_rt_lib0clear(&___nl__im__52);
#line 393
c_rt_lib0clear(&___nl__im__55);
#line 393
c_rt_lib0clear(&___nl__im__56);
#line 393
c_rt_lib0clear(&___nl__im__57);
#line 393
return ___nl__im__58;
#line 394
goto label_805;
#line 394
label_599:
;
#line 394
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(40)));
#line 394
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 395
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(2, ___nl__im__0, ___nl__im__1));
#line 396
c_rt_lib0delete(array0append(&___nl__im__61, ___nl__im__3));
#line 397
c_rt_lib0move(&___nl__im__62, ptd_priv0exec(___nl__im__2, ___nl__im__61));
#line 398
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__62, ___get_global_string_const(1239));
#line 398
if(___nl__bool__63){ goto label_614;}
#line 400
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__62, ___get_global_string_const(1238));
#line 400
if(___nl__bool__63){ goto label_674;}
#line 402
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__62, ___get_global_string_const(72));
#line 402
if(___nl__bool__63){ goto label_737;}
#line 402
c_rt_lib0move(&___nl__im__64,___get_global_string_const(16));
#line 402
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(2, ___nl__im__64, ___nl__im__62));
#line 402
nl_die_arg(___nl__im__64);
#line 398
label_614:
;
#line 398
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__62, ___get_global_string_const(1239)));
#line 398
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 399
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__65));
#line 399
c_rt_lib0clear(&___nl__im__0);
#line 399
c_rt_lib0clear(&___nl__im__1);
#line 399
c_rt_lib0clear(&___nl__im__2);
#line 399
c_rt_lib0clear(&___nl__im__3);
#line 399
//clear ___nl__bool__4;
#line 399
c_rt_lib0clear(&___nl__im__5);
#line 399
c_rt_lib0clear(&___nl__im__6);
#line 399
c_rt_lib0clear(&___nl__im__7);
#line 399
c_rt_lib0clear(&___nl__im__8);
#line 399
c_rt_lib0clear(&___nl__im__9);
#line 399
//clear ___nl__bool__10;
#line 399
c_rt_lib0clear(&___nl__im__11);
#line 399
c_rt_lib0clear(&___nl__im__12);
#line 399
c_rt_lib0clear(&___nl__im__13);
#line 399
c_rt_lib0clear(&___nl__im__17);
#line 399
c_rt_lib0clear(&___nl__im__18);
#line 399
c_rt_lib0clear(&___nl__im__19);
#line 399
c_rt_lib0clear(&___nl__im__20);
#line 399
c_rt_lib0clear(&___nl__im__21);
#line 399
//clear ___nl__bool__22;
#line 399
c_rt_lib0clear(&___nl__im__23);
#line 399
c_rt_lib0clear(&___nl__im__24);
#line 399
c_rt_lib0clear(&___nl__im__25);
#line 399
c_rt_lib0clear(&___nl__im__29);
#line 399
c_rt_lib0clear(&___nl__im__30);
#line 399
c_rt_lib0clear(&___nl__im__31);
#line 399
c_rt_lib0clear(&___nl__im__32);
#line 399
c_rt_lib0clear(&___nl__im__33);
#line 399
//clear ___nl__int__34;
#line 399
//clear ___nl__int__35;
#line 399
//clear ___nl__int__36;
#line 399
//clear ___nl__bool__37;
#line 399
//clear ___nl__int__38;
#line 399
c_rt_lib0clear(&___nl__im__39);
#line 399
c_rt_lib0clear(&___nl__im__40);
#line 399
c_rt_lib0clear(&___nl__im__43);
#line 399
c_rt_lib0clear(&___nl__im__44);
#line 399
c_rt_lib0clear(&___nl__im__45);
#line 399
c_rt_lib0clear(&___nl__im__46);
#line 399
c_rt_lib0clear(&___nl__im__49);
#line 399
c_rt_lib0clear(&___nl__im__50);
#line 399
c_rt_lib0clear(&___nl__im__52);
#line 399
c_rt_lib0clear(&___nl__im__55);
#line 399
c_rt_lib0clear(&___nl__im__56);
#line 399
c_rt_lib0clear(&___nl__im__57);
#line 399
c_rt_lib0clear(&___nl__im__58);
#line 399
c_rt_lib0clear(&___nl__im__59);
#line 399
c_rt_lib0clear(&___nl__im__60);
#line 399
c_rt_lib0clear(&___nl__im__61);
#line 399
c_rt_lib0clear(&___nl__im__62);
#line 399
//clear ___nl__bool__63;
#line 399
c_rt_lib0clear(&___nl__im__64);
#line 399
c_rt_lib0clear(&___nl__im__65);
#line 399
c_rt_lib0clear(&___nl__im__66);
#line 399
return ___nl__im__67;
#line 400
goto label_803;
#line 400
label_674:
;
#line 400
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__62, ___get_global_string_const(1238)));
#line 400
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 401
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(1238), ___nl__im__68));
#line 401
c_rt_lib0clear(&___nl__im__0);
#line 401
c_rt_lib0clear(&___nl__im__1);
#line 401
c_rt_lib0clear(&___nl__im__2);
#line 401
c_rt_lib0clear(&___nl__im__3);
#line 401
//clear ___nl__bool__4;
#line 401
c_rt_lib0clear(&___nl__im__5);
#line 401
c_rt_lib0clear(&___nl__im__6);
#line 401
c_rt_lib0clear(&___nl__im__7);
#line 401
c_rt_lib0clear(&___nl__im__8);
#line 401
c_rt_lib0clear(&___nl__im__9);
#line 401
//clear ___nl__bool__10;
#line 401
c_rt_lib0clear(&___nl__im__11);
#line 401
c_rt_lib0clear(&___nl__im__12);
#line 401
c_rt_lib0clear(&___nl__im__13);
#line 401
c_rt_lib0clear(&___nl__im__17);
#line 401
c_rt_lib0clear(&___nl__im__18);
#line 401
c_rt_lib0clear(&___nl__im__19);
#line 401
c_rt_lib0clear(&___nl__im__20);
#line 401
c_rt_lib0clear(&___nl__im__21);
#line 401
//clear ___nl__bool__22;
#line 401
c_rt_lib0clear(&___nl__im__23);
#line 401
c_rt_lib0clear(&___nl__im__24);
#line 401
c_rt_lib0clear(&___nl__im__25);
#line 401
c_rt_lib0clear(&___nl__im__29);
#line 401
c_rt_lib0clear(&___nl__im__30);
#line 401
c_rt_lib0clear(&___nl__im__31);
#line 401
c_rt_lib0clear(&___nl__im__32);
#line 401
c_rt_lib0clear(&___nl__im__33);
#line 401
//clear ___nl__int__34;
#line 401
//clear ___nl__int__35;
#line 401
//clear ___nl__int__36;
#line 401
//clear ___nl__bool__37;
#line 401
//clear ___nl__int__38;
#line 401
c_rt_lib0clear(&___nl__im__39);
#line 401
c_rt_lib0clear(&___nl__im__40);
#line 401
c_rt_lib0clear(&___nl__im__43);
#line 401
c_rt_lib0clear(&___nl__im__44);
#line 401
c_rt_lib0clear(&___nl__im__45);
#line 401
c_rt_lib0clear(&___nl__im__46);
#line 401
c_rt_lib0clear(&___nl__im__49);
#line 401
c_rt_lib0clear(&___nl__im__50);
#line 401
c_rt_lib0clear(&___nl__im__52);
#line 401
c_rt_lib0clear(&___nl__im__55);
#line 401
c_rt_lib0clear(&___nl__im__56);
#line 401
c_rt_lib0clear(&___nl__im__57);
#line 401
c_rt_lib0clear(&___nl__im__58);
#line 401
c_rt_lib0clear(&___nl__im__59);
#line 401
c_rt_lib0clear(&___nl__im__60);
#line 401
c_rt_lib0clear(&___nl__im__61);
#line 401
c_rt_lib0clear(&___nl__im__62);
#line 401
//clear ___nl__bool__63;
#line 401
c_rt_lib0clear(&___nl__im__64);
#line 401
c_rt_lib0clear(&___nl__im__65);
#line 401
c_rt_lib0clear(&___nl__im__66);
#line 401
c_rt_lib0clear(&___nl__im__67);
#line 401
c_rt_lib0clear(&___nl__im__68);
#line 401
c_rt_lib0clear(&___nl__im__69);
#line 401
return ___nl__im__70;
#line 402
goto label_803;
#line 402
label_737:
;
#line 403
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 403
c_rt_lib0move(&___nl__im__72, ptd_priv0exec(___nl__im__1, ___nl__im__73));
#line 403
c_rt_lib0clear(&___nl__im__73);
#line 403
c_rt_lib0move(&___nl__im__71, ptd_priv0reconstruct(___nl__im__0, ___nl__im__72, ___nl__im__2, ___nl__im__3));
#line 403
c_rt_lib0clear(&___nl__im__72);
#line 403
c_rt_lib0clear(&___nl__im__0);
#line 403
c_rt_lib0clear(&___nl__im__1);
#line 403
c_rt_lib0clear(&___nl__im__2);
#line 403
c_rt_lib0clear(&___nl__im__3);
#line 403
//clear ___nl__bool__4;
#line 403
c_rt_lib0clear(&___nl__im__5);
#line 403
c_rt_lib0clear(&___nl__im__6);
#line 403
c_rt_lib0clear(&___nl__im__7);
#line 403
c_rt_lib0clear(&___nl__im__8);
#line 403
c_rt_lib0clear(&___nl__im__9);
#line 403
//clear ___nl__bool__10;
#line 403
c_rt_lib0clear(&___nl__im__11);
#line 403
c_rt_lib0clear(&___nl__im__12);
#line 403
c_rt_lib0clear(&___nl__im__13);
#line 403
c_rt_lib0clear(&___nl__im__17);
#line 403
c_rt_lib0clear(&___nl__im__18);
#line 403
c_rt_lib0clear(&___nl__im__19);
#line 403
c_rt_lib0clear(&___nl__im__20);
#line 403
c_rt_lib0clear(&___nl__im__21);
#line 403
//clear ___nl__bool__22;
#line 403
c_rt_lib0clear(&___nl__im__23);
#line 403
c_rt_lib0clear(&___nl__im__24);
#line 403
c_rt_lib0clear(&___nl__im__25);
#line 403
c_rt_lib0clear(&___nl__im__29);
#line 403
c_rt_lib0clear(&___nl__im__30);
#line 403
c_rt_lib0clear(&___nl__im__31);
#line 403
c_rt_lib0clear(&___nl__im__32);
#line 403
c_rt_lib0clear(&___nl__im__33);
#line 403
//clear ___nl__int__34;
#line 403
//clear ___nl__int__35;
#line 403
//clear ___nl__int__36;
#line 403
//clear ___nl__bool__37;
#line 403
//clear ___nl__int__38;
#line 403
c_rt_lib0clear(&___nl__im__39);
#line 403
c_rt_lib0clear(&___nl__im__40);
#line 403
c_rt_lib0clear(&___nl__im__43);
#line 403
c_rt_lib0clear(&___nl__im__44);
#line 403
c_rt_lib0clear(&___nl__im__45);
#line 403
c_rt_lib0clear(&___nl__im__46);
#line 403
c_rt_lib0clear(&___nl__im__49);
#line 403
c_rt_lib0clear(&___nl__im__50);
#line 403
c_rt_lib0clear(&___nl__im__52);
#line 403
c_rt_lib0clear(&___nl__im__55);
#line 403
c_rt_lib0clear(&___nl__im__56);
#line 403
c_rt_lib0clear(&___nl__im__57);
#line 403
c_rt_lib0clear(&___nl__im__58);
#line 403
c_rt_lib0clear(&___nl__im__59);
#line 403
c_rt_lib0clear(&___nl__im__60);
#line 403
c_rt_lib0clear(&___nl__im__61);
#line 403
c_rt_lib0clear(&___nl__im__62);
#line 403
//clear ___nl__bool__63;
#line 403
c_rt_lib0clear(&___nl__im__64);
#line 403
c_rt_lib0clear(&___nl__im__65);
#line 403
c_rt_lib0clear(&___nl__im__66);
#line 403
c_rt_lib0clear(&___nl__im__67);
#line 403
c_rt_lib0clear(&___nl__im__68);
#line 403
c_rt_lib0clear(&___nl__im__69);
#line 403
c_rt_lib0clear(&___nl__im__70);
#line 403
return ___nl__im__71;
#line 404
goto label_803;
#line 404
label_803:
;
#line 405
goto label_805;
#line 405
label_805:
;
return NULL;

}

ImmT  ptd0int_to_string0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0int_to_string");
ImmT  *var0 = &(_tab[0]);
return ptd0int_to_string(*var0);
}
ImmT  ptd0int_to_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
#line 409
___nl__int__2 = getIntFromImm(___nl__im__0);
#line 409
c_rt_lib0move(&___nl__im__1, c_std_lib0int_to_string(___nl__int__2));
#line 409
//clear ___nl__int__2;
#line 409
c_rt_lib0clear(&___nl__im__0);
#line 409
return ___nl__im__1;
return NULL;

}

INT  ptd0string_to_int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0string_to_int");
ImmT  *var0 = &(_tab[0]);
return ptd0string_to_int(*var0);
}
INT  ptd0string_to_int(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 413
c_rt_lib0move(&___nl__im__3, ptd0try_string_to_int(___nl__im__0));
#line 413
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(79));
#line 413
if(___nl__bool__2){ goto label_5;}
#line 413
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(177), ___nl__im__3));
#line 413
nl_die_arg(___nl__im__3);
#line 413
label_5:
;
#line 413
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(79)));
#line 414
___nl__int__4 = getIntFromImm(___nl__im__1);
#line 414
c_rt_lib0clear(&___nl__im__0);
#line 414
c_rt_lib0clear(&___nl__im__1);
#line 414
//clear ___nl__bool__2;
#line 414
c_rt_lib0clear(&___nl__im__3);
#line 414
return ___nl__int__4;
return 0;

}

ImmT  ptd0try_string_to_int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0try_string_to_int");
ImmT  *var0 = &(_tab[0]);
return ptd0try_string_to_int(*var0);
}
ImmT  ptd0try_string_to_int(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ptd_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 418
c_rt_lib0move(&___nl__im__1, c_std_lib0try_string_to_int(___nl__im__0));
#line 418
c_rt_lib0clear(&___nl__im__0);
#line 418
return ___nl__im__1;
return NULL;

}


static ImmT ___const__[11];
static int ___const_init__ = 1;
void ptd_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[10];


for(int i=0;i<10;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 10);
}}
ImmT ptd_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = ptd0int0cal();
	break;
case 1:
	___const__[1] = ptd0string0cal();
	break;
case 2:
	___const__[2] = ptd0bool0cal();
	break;
case 3:
	___const__[3] = ptd0none0cal();
	break;
case 4:
	___const__[4] = ptd0void0cal();
	break;
case 5:
	___const__[5] = ptd0ptd_im0cal();
	break;
case 6:
	___const__[6] = ptd0meta_type0cal();
	break;
case 7:
	___const__[7] = ptd0cast_t0cal();
	break;
case 8:
	___const__[8] = ptd0imm_kind_t0cal();
	break;
case 9:
	___const__[9] = ptd0cast_error_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
