
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
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1203)));
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
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1132)));
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
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_none(___get_global_string_const(1204)));
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
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1132));
#line 51
___nl__bool__7 = !___nl__bool__7;
#line 51
if(___nl__bool__7){ goto label_12;}
#line 52
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(28)));
#line 53
goto label_15;
#line 53
label_12:
;
#line 54
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(27), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
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
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 63
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 66
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 66
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 66
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 66
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_string_const(27), ___nl__im__9, ___get_global_string_const(28), ___nl__im__10));
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(150), ___nl__im__13, ___get_global_string_const(166), ___nl__im__14));
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
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 75
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 75
c_rt_lib0move(&___nl__im__19, ptd0hash(___nl__im__20));
#line 75
c_rt_lib0clear(&___nl__im__20);
#line 76
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 76
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 77
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 77
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__22));
#line 78
c_rt_lib0move(&___nl__im__26, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 78
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__26));
#line 78
c_rt_lib0move(&___nl__im__27, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(2, ___get_global_string_const(27), ___nl__im__26, ___get_global_string_const(28), ___nl__im__27));
#line 78
c_rt_lib0clear(&___nl__im__26);
#line 78
c_rt_lib0clear(&___nl__im__27);
#line 78
c_rt_lib0move(&___nl__im__24, ptd0var(___nl__im__25));
#line 78
c_rt_lib0clear(&___nl__im__25);
#line 78
c_rt_lib0move(&___nl__im__23, ptd0hash(___nl__im__24));
#line 78
c_rt_lib0clear(&___nl__im__24);
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(13, ___get_global_string_const(308), ___nl__im__2, ___get_global_string_const(310), ___nl__im__4, ___get_global_string_const(316), ___nl__im__5, ___get_global_string_const(317), ___nl__im__6, ___get_global_string_const(39), ___nl__im__11, ___get_global_string_const(289), ___nl__im__15, ___get_global_string_const(287), ___nl__im__16, ___get_global_string_const(1203), ___nl__im__17, ___get_global_string_const(288), ___nl__im__18, ___get_global_string_const(1130), ___nl__im__19, ___get_global_string_const(1131), ___nl__im__21, ___get_global_string_const(1129), ___nl__im__22, ___get_global_string_const(1133), ___nl__im__23));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0clear(&___nl__im__5);
#line 78
c_rt_lib0clear(&___nl__im__6);
#line 78
c_rt_lib0clear(&___nl__im__11);
#line 78
c_rt_lib0clear(&___nl__im__15);
#line 78
c_rt_lib0clear(&___nl__im__16);
#line 78
c_rt_lib0clear(&___nl__im__17);
#line 78
c_rt_lib0clear(&___nl__im__18);
#line 78
c_rt_lib0clear(&___nl__im__19);
#line 78
c_rt_lib0clear(&___nl__im__21);
#line 78
c_rt_lib0clear(&___nl__im__22);
#line 78
c_rt_lib0clear(&___nl__im__23);
#line 78
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return ___nl__im__0;
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
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
#line 83
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__im__4, ptd0ensure_dyn(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 84
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 84
if(___nl__bool__3){ goto label_6;}
#line 84
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__4));
#line 84
nl_die_arg(___nl__im__4);
#line 84
label_6:
;
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
c_rt_lib0clear(&___nl__im__2);
#line 85
//clear ___nl__bool__3;
#line 85
c_rt_lib0clear(&___nl__im__4);
#line 85
return ___nl__im__1;
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
c_rt_lib0clear(&___nl__im__1);
#line 85
c_rt_lib0clear(&___nl__im__2);
#line 85
//clear ___nl__bool__3;
#line 85
c_rt_lib0clear(&___nl__im__4);
#line 85
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
#line 89
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 90
___nl__bool__5 = true;
#line 90
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__5));
#line 90
c_rt_lib0move(&___nl__im__4, ptd_priv0ensure_dyn(___nl__im__0, ___nl__im__1, ___nl__im__6, &___nl__im__2));
#line 90
//clear ___nl__bool__5;
#line 90
c_rt_lib0clear(&___nl__im__6);
#line 90
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 90
if(___nl__bool__3){ goto label_10;}
#line 90
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__4));
#line 90
nl_die_arg(___nl__im__4);
#line 90
label_10:
;
#line 90
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(78)));
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
//clear ___nl__bool__3;
#line 91
c_rt_lib0clear(&___nl__im__4);
#line 91
return ___nl__im__1;
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
//clear ___nl__bool__3;
#line 91
c_rt_lib0clear(&___nl__im__4);
#line 91
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
#line 95
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 96
c_rt_lib0move(&___nl__im__4, ptd0ensure_dyn(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 96
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 96
if(___nl__bool__3){ goto label_9;}
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
c_rt_lib0clear(&___nl__im__2);
#line 96
//clear ___nl__bool__3;
#line 96
return ___nl__im__4;
#line 96
label_9:
;
#line 97
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__1));
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
c_rt_lib0clear(&___nl__im__2);
#line 97
//clear ___nl__bool__3;
#line 97
c_rt_lib0clear(&___nl__im__4);
#line 97
return ___nl__im__5;
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
c_rt_lib0clear(&___nl__im__2);
#line 97
//clear ___nl__bool__3;
#line 97
c_rt_lib0clear(&___nl__im__4);
#line 97
c_rt_lib0clear(&___nl__im__5);
#line 97
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
#line 101
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 102
c_rt_lib0move(&___nl__im__4, ptd0ensure_dyn(___nl__im__0, ___nl__im__1, &___nl__im__2));
#line 102
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 102
if(___nl__bool__3){ goto label_6;}
#line 102
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__4));
#line 102
nl_die_arg(___nl__im__4);
#line 102
label_6:
;
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__2);
#line 103
//clear ___nl__bool__3;
#line 103
c_rt_lib0clear(&___nl__im__4);
#line 103
return ___nl__im__1;
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
c_rt_lib0clear(&___nl__im__2);
#line 103
//clear ___nl__bool__3;
#line 103
c_rt_lib0clear(&___nl__im__4);
#line 103
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
#line 107
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 108
___nl__bool__5 = true;
#line 108
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__5));
#line 108
c_rt_lib0move(&___nl__im__4, ptd_priv0ensure_dyn(___nl__im__0, ___nl__im__1, ___nl__im__6, &___nl__im__2));
#line 108
//clear ___nl__bool__5;
#line 108
c_rt_lib0clear(&___nl__im__6);
#line 108
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 108
if(___nl__bool__3){ goto label_10;}
#line 108
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__4));
#line 108
nl_die_arg(___nl__im__4);
#line 108
label_10:
;
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__2);
#line 109
//clear ___nl__bool__3;
#line 109
c_rt_lib0clear(&___nl__im__4);
#line 109
return ___nl__im__1;
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__1);
#line 109
c_rt_lib0clear(&___nl__im__2);
#line 109
//clear ___nl__bool__3;
#line 109
c_rt_lib0clear(&___nl__im__4);
#line 109
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
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
return ___nl__im__1;
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
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
#line 118
___nl__bool__4 = false;
#line 118
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__4));
#line 118
c_rt_lib0move(&___nl__im__3, ptd_priv0ensure_dyn(___nl__im__0, ___nl__im__1, ___nl__im__5, ___ref___im__2));
#line 118
//clear ___nl__bool__4;
#line 118
c_rt_lib0clear(&___nl__im__5);
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
c_rt_lib0clear(&___nl__im__1);
#line 118
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
#line 122
___nl__bool__4 = c_std_lib0is_variant(___nl__im__0);
#line 122
___nl__bool__4 = !___nl__bool__4;
#line 122
___nl__bool__4 = !___nl__bool__4;
#line 122
if(___nl__bool__4){ goto label_15;}
#line 122
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1205));
#line 122
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__7, ___get_global_string_const(1206), (*___ref___im__3)));
#line 122
c_rt_lib0clear(&___nl__im__7);
#line 122
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__6));
#line 122
c_rt_lib0clear(&___nl__im__6);
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
c_rt_lib0clear(&___nl__im__1);
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
//clear ___nl__bool__4;
#line 122
return ___nl__im__5;
#line 122
goto label_15;
#line 122
label_15:
;
#line 122
//clear ___nl__bool__4;
#line 122
c_rt_lib0clear(&___nl__im__5);
#line 124
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(310));
#line 124
if(___nl__bool__9){ goto label_39;}
#line 133
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(316));
#line 133
if(___nl__bool__9){ goto label_102;}
#line 142
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(308));
#line 142
if(___nl__bool__9){ goto label_189;}
#line 154
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(287));
#line 154
if(___nl__bool__9){ goto label_403;}
#line 158
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(317));
#line 158
if(___nl__bool__9){ goto label_471;}
#line 173
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(289));
#line 173
if(___nl__bool__9){ goto label_786;}
#line 177
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(288));
#line 177
if(___nl__bool__9){ goto label_865;}
#line 179
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(39));
#line 179
if(___nl__bool__9){ goto label_868;}
#line 183
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1203));
#line 183
if(___nl__bool__9){ goto label_934;}
#line 183
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 183
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__0));
#line 183
nl_die_arg(___nl__im__10);
#line 124
label_39:
;
#line 124
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(310)));
#line 124
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 125
___nl__bool__13 = c_std_lib0is_hash(___nl__im__1);
#line 125
___nl__bool__13 = !___nl__bool__13;
#line 125
___nl__bool__13 = !___nl__bool__13;
#line 125
if(___nl__bool__13){ goto label_62;}
#line 125
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1207));
#line 125
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__16, ___get_global_string_const(1206), (*___ref___im__3)));
#line 125
c_rt_lib0clear(&___nl__im__16);
#line 125
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__15));
#line 125
c_rt_lib0clear(&___nl__im__15);
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
c_rt_lib0clear(&___nl__im__1);
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__8);
#line 125
//clear ___nl__bool__9;
#line 125
c_rt_lib0clear(&___nl__im__10);
#line 125
c_rt_lib0clear(&___nl__im__11);
#line 125
c_rt_lib0clear(&___nl__im__12);
#line 125
//clear ___nl__bool__13;
#line 125
return ___nl__im__14;
#line 125
goto label_62;
#line 125
label_62:
;
#line 125
//clear ___nl__bool__13;
#line 125
c_rt_lib0clear(&___nl__im__14);
#line 126
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 127
c_rt_lib0move(&___nl__im__20, c_rt_lib0init_iter(___nl__im__1));
#line 127
label_67:
;
#line 127
___nl__bool__18 = c_rt_lib0is_end_hash(___nl__im__20);
#line 127
if(___nl__bool__18){ goto label_99;}
#line 127
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_key_iter(___nl__im__20));
#line 127
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__17));
#line 128
c_rt_lib0array_push(___ref___im__3, ___nl__im__17);
#line 129
c_rt_lib0move(&___nl__im__22, ptd_priv0ensure_dyn(___nl__im__11, ___nl__im__19, ___nl__im__2, ___ref___im__3));
#line 129
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(78));
#line 129
if(___nl__bool__21){ goto label_90;}
#line 129
c_rt_lib0clear(&___nl__im__0);
#line 129
c_rt_lib0clear(&___nl__im__1);
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
c_rt_lib0clear(&___nl__im__8);
#line 129
//clear ___nl__bool__9;
#line 129
c_rt_lib0clear(&___nl__im__10);
#line 129
c_rt_lib0clear(&___nl__im__11);
#line 129
c_rt_lib0clear(&___nl__im__12);
#line 129
c_rt_lib0clear(&___nl__im__17);
#line 129
//clear ___nl__bool__18;
#line 129
c_rt_lib0clear(&___nl__im__19);
#line 129
c_rt_lib0clear(&___nl__im__20);
#line 129
//clear ___nl__bool__21;
#line 129
return ___nl__im__22;
#line 129
label_90:
;
#line 129
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(78)));
#line 129
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__8, ___nl__im__17, ___nl__im__23));
#line 130
c_rt_lib0delete(array0pop(___ref___im__3));
#line 130
//clear ___nl__bool__21;
#line 130
c_rt_lib0clear(&___nl__im__22);
#line 130
c_rt_lib0clear(&___nl__im__23);
#line 131
c_rt_lib0move(&___nl__im__20, c_rt_lib0next_iter(___nl__im__20));
#line 131
goto label_67;
#line 131
label_99:
;
#line 132
c_rt_lib0copy(&___nl__im__1, ___nl__im__8);
#line 133
goto label_1085;
#line 133
label_102:
;
#line 133
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(316)));
#line 133
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 134
___nl__bool__26 = c_std_lib0is_array(___nl__im__1);
#line 134
___nl__bool__26 = !___nl__bool__26;
#line 134
___nl__bool__26 = !___nl__bool__26;
#line 134
if(___nl__bool__26){ goto label_134;}
#line 134
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1208));
#line 134
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__29, ___get_global_string_const(1206), (*___ref___im__3)));
#line 134
c_rt_lib0clear(&___nl__im__29);
#line 134
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__28));
#line 134
c_rt_lib0clear(&___nl__im__28);
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
c_rt_lib0clear(&___nl__im__1);
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__8);
#line 134
//clear ___nl__bool__9;
#line 134
c_rt_lib0clear(&___nl__im__10);
#line 134
c_rt_lib0clear(&___nl__im__11);
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
c_rt_lib0clear(&___nl__im__17);
#line 134
//clear ___nl__bool__18;
#line 134
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0clear(&___nl__im__20);
#line 134
//clear ___nl__bool__21;
#line 134
c_rt_lib0clear(&___nl__im__22);
#line 134
c_rt_lib0clear(&___nl__im__23);
#line 134
c_rt_lib0clear(&___nl__im__24);
#line 134
c_rt_lib0clear(&___nl__im__25);
#line 134
//clear ___nl__bool__26;
#line 134
return ___nl__im__27;
#line 134
goto label_134;
#line 134
label_134:
;
#line 134
//clear ___nl__bool__26;
#line 134
c_rt_lib0clear(&___nl__im__27);
#line 135
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 136
___nl__int__31 = 0;
#line 136
___nl__int__32 = 1;
#line 136
___nl__int__33 = c_rt_lib0array_len(___nl__im__1);
#line 136
label_141:
;
#line 136
___nl__int__35 = ___nl__int__31 >= ___nl__int__33;
#line 136
___nl__bool__34 = ___nl__int__35;
#line 136
if(___nl__bool__34){ goto label_187;}
#line 136
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__1, ___nl__int__31));
#line 136
c_rt_lib0copy(&___nl__im__30, ___nl__im__36);
#line 137
c_rt_lib0move(&___nl__im__37,___get_global_string_const(1209));
#line 137
c_rt_lib0array_push(___ref___im__3, ___nl__im__37);
#line 137
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0move(&___nl__im__40, ptd_priv0ensure_dyn(___nl__im__24, ___nl__im__30, ___nl__im__2, ___ref___im__3));
#line 138
___nl__bool__39 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(78));
#line 138
if(___nl__bool__39){ goto label_180;}
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
c_rt_lib0clear(&___nl__im__1);
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
//clear ___nl__bool__9;
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
//clear ___nl__bool__18;
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
//clear ___nl__bool__21;
#line 138
c_rt_lib0clear(&___nl__im__22);
#line 138
c_rt_lib0clear(&___nl__im__23);
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
c_rt_lib0clear(&___nl__im__25);
#line 138
c_rt_lib0clear(&___nl__im__30);
#line 138
//clear ___nl__int__31;
#line 138
//clear ___nl__int__32;
#line 138
//clear ___nl__int__33;
#line 138
//clear ___nl__bool__34;
#line 138
//clear ___nl__int__35;
#line 138
c_rt_lib0clear(&___nl__im__36);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
//clear ___nl__bool__39;
#line 138
return ___nl__im__40;
#line 138
label_180:
;
#line 138
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(78)));
#line 139
c_rt_lib0array_push(&___nl__im__8, ___nl__im__38);
#line 140
c_rt_lib0delete(array0pop(___ref___im__3));
#line 140
c_rt_lib0clear(&___nl__im__30);
#line 141
___nl__int__31 = ___nl__int__31 + ___nl__int__32;
#line 141
goto label_141;
#line 141
label_187:
;
#line 142
goto label_1085;
#line 142
label_189:
;
#line 142
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(308)));
#line 142
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 143
___nl__bool__43 = c_std_lib0is_hash(___nl__im__1);
#line 143
___nl__bool__43 = !___nl__bool__43;
#line 143
___nl__bool__43 = !___nl__bool__43;
#line 143
if(___nl__bool__43){ goto label_233;}
#line 143
c_rt_lib0move(&___nl__im__46,___get_global_string_const(1210));
#line 143
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__46, ___get_global_string_const(1206), (*___ref___im__3)));
#line 143
c_rt_lib0clear(&___nl__im__46);
#line 143
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__45));
#line 143
c_rt_lib0clear(&___nl__im__45);
#line 143
c_rt_lib0clear(&___nl__im__0);
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
c_rt_lib0clear(&___nl__im__8);
#line 143
//clear ___nl__bool__9;
#line 143
c_rt_lib0clear(&___nl__im__10);
#line 143
c_rt_lib0clear(&___nl__im__11);
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__17);
#line 143
//clear ___nl__bool__18;
#line 143
c_rt_lib0clear(&___nl__im__19);
#line 143
c_rt_lib0clear(&___nl__im__20);
#line 143
//clear ___nl__bool__21;
#line 143
c_rt_lib0clear(&___nl__im__22);
#line 143
c_rt_lib0clear(&___nl__im__23);
#line 143
c_rt_lib0clear(&___nl__im__24);
#line 143
c_rt_lib0clear(&___nl__im__25);
#line 143
c_rt_lib0clear(&___nl__im__30);
#line 143
//clear ___nl__int__31;
#line 143
//clear ___nl__int__32;
#line 143
//clear ___nl__int__33;
#line 143
//clear ___nl__bool__34;
#line 143
//clear ___nl__int__35;
#line 143
c_rt_lib0clear(&___nl__im__36);
#line 143
c_rt_lib0clear(&___nl__im__38);
#line 143
//clear ___nl__bool__39;
#line 143
c_rt_lib0clear(&___nl__im__40);
#line 143
c_rt_lib0clear(&___nl__im__41);
#line 143
c_rt_lib0clear(&___nl__im__42);
#line 143
//clear ___nl__bool__43;
#line 143
return ___nl__im__44;
#line 143
goto label_233;
#line 143
label_233:
;
#line 143
//clear ___nl__bool__43;
#line 143
c_rt_lib0clear(&___nl__im__44);
#line 144
___nl__int__48 = hash0size(___nl__im__41);
#line 144
___nl__int__49 = hash0size(___nl__im__1);
#line 144
___nl__int__50 = ___nl__int__48 == ___nl__int__49;
#line 144
___nl__bool__47 = ___nl__int__50;
#line 144
//clear ___nl__int__48;
#line 144
//clear ___nl__int__49;
#line 144
//clear ___nl__int__50;
#line 144
___nl__bool__47 = !___nl__bool__47;
#line 144
___nl__bool__47 = !___nl__bool__47;
#line 144
if(___nl__bool__47){ goto label_283;}
#line 144
c_rt_lib0move(&___nl__im__53,___get_global_string_const(1211));
#line 144
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__53, ___get_global_string_const(1206), (*___ref___im__3)));
#line 144
c_rt_lib0clear(&___nl__im__53);
#line 144
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__52));
#line 144
c_rt_lib0clear(&___nl__im__52);
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
//clear ___nl__bool__47;
#line 144
return ___nl__im__51;
#line 144
goto label_283;
#line 144
label_283:
;
#line 144
//clear ___nl__bool__47;
#line 144
c_rt_lib0clear(&___nl__im__51);
#line 145
c_rt_lib0move(&___nl__im__54,___get_global_string_const(1212));
#line 145
c_rt_lib0array_push(___ref___im__3, ___nl__im__54);
#line 145
c_rt_lib0clear(&___nl__im__54);
#line 146
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__im__58, c_rt_lib0init_iter(___nl__im__41));
#line 147
label_291:
;
#line 147
___nl__bool__56 = c_rt_lib0is_end_hash(___nl__im__58);
#line 147
if(___nl__bool__56){ goto label_400;}
#line 147
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_key_iter(___nl__im__58));
#line 147
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value(___nl__im__41, ___nl__im__55));
#line 148
c_rt_lib0array_push(___ref___im__3, ___nl__im__55);
#line 149
___nl__bool__59 = hash0has_key(___nl__im__1, ___nl__im__55);
#line 149
___nl__bool__59 = !___nl__bool__59;
#line 149
___nl__bool__59 = !___nl__bool__59;
#line 149
if(___nl__bool__59){ goto label_348;}
#line 149
c_rt_lib0move(&___nl__im__64,___get_global_string_const(1213));
#line 149
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__55));
#line 149
c_rt_lib0clear(&___nl__im__64);
#line 149
c_rt_lib0move(&___nl__im__65,___get_global_string_const(1214));
#line 149
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__65));
#line 149
c_rt_lib0clear(&___nl__im__63);
#line 149
c_rt_lib0clear(&___nl__im__65);
#line 149
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__62, ___get_global_string_const(1206), (*___ref___im__3)));
#line 149
c_rt_lib0clear(&___nl__im__62);
#line 149
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__61));
#line 149
c_rt_lib0clear(&___nl__im__61);
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
c_rt_lib0clear(&___nl__im__1);
#line 149
c_rt_lib0clear(&___nl__im__2);
#line 149
c_rt_lib0clear(&___nl__im__8);
#line 149
//clear ___nl__bool__9;
#line 149
c_rt_lib0clear(&___nl__im__10);
#line 149
c_rt_lib0clear(&___nl__im__11);
#line 149
c_rt_lib0clear(&___nl__im__12);
#line 149
c_rt_lib0clear(&___nl__im__17);
#line 149
//clear ___nl__bool__18;
#line 149
c_rt_lib0clear(&___nl__im__19);
#line 149
c_rt_lib0clear(&___nl__im__20);
#line 149
//clear ___nl__bool__21;
#line 149
c_rt_lib0clear(&___nl__im__22);
#line 149
c_rt_lib0clear(&___nl__im__23);
#line 149
c_rt_lib0clear(&___nl__im__24);
#line 149
c_rt_lib0clear(&___nl__im__25);
#line 149
c_rt_lib0clear(&___nl__im__30);
#line 149
//clear ___nl__int__31;
#line 149
//clear ___nl__int__32;
#line 149
//clear ___nl__int__33;
#line 149
//clear ___nl__bool__34;
#line 149
//clear ___nl__int__35;
#line 149
c_rt_lib0clear(&___nl__im__36);
#line 149
c_rt_lib0clear(&___nl__im__38);
#line 149
//clear ___nl__bool__39;
#line 149
c_rt_lib0clear(&___nl__im__40);
#line 149
c_rt_lib0clear(&___nl__im__41);
#line 149
c_rt_lib0clear(&___nl__im__42);
#line 149
c_rt_lib0clear(&___nl__im__55);
#line 149
//clear ___nl__bool__56;
#line 149
c_rt_lib0clear(&___nl__im__57);
#line 149
c_rt_lib0clear(&___nl__im__58);
#line 149
//clear ___nl__bool__59;
#line 149
return ___nl__im__60;
#line 149
goto label_348;
#line 149
label_348:
;
#line 149
//clear ___nl__bool__59;
#line 149
c_rt_lib0clear(&___nl__im__60);
#line 150
c_rt_lib0move(&___nl__im__68, hash0get_value(___nl__im__1, ___nl__im__55));
#line 150
c_rt_lib0move(&___nl__im__67, ptd_priv0ensure_dyn(___nl__im__57, ___nl__im__68, ___nl__im__2, ___ref___im__3));
#line 150
c_rt_lib0clear(&___nl__im__68);
#line 150
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__67, ___get_global_string_const(78));
#line 150
if(___nl__bool__66){ goto label_391;}
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
//clear ___nl__bool__66;
#line 150
return ___nl__im__67;
#line 150
label_391:
;
#line 150
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__67, ___get_global_string_const(78)));
#line 150
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__8, ___nl__im__55, ___nl__im__69));
#line 151
c_rt_lib0delete(array0pop(___ref___im__3));
#line 151
//clear ___nl__bool__66;
#line 151
c_rt_lib0clear(&___nl__im__67);
#line 151
c_rt_lib0clear(&___nl__im__69);
#line 152
c_rt_lib0move(&___nl__im__58, c_rt_lib0next_iter(___nl__im__58));
#line 152
goto label_291;
#line 152
label_400:
;
#line 153
c_rt_lib0delete(array0pop(___ref___im__3));
#line 154
goto label_1085;
#line 154
label_403:
;
#line 155
___nl__bool__70 = c_rt_lib0check_true_native(___nl__im__2);
#line 155
___nl__bool__71 = !___nl__bool__70;
#line 155
if(___nl__bool__71){ goto label_408;}
#line 155
___nl__bool__70 = c_std_lib0is_int(___nl__im__1);
#line 155
label_408:
;
#line 155
//clear ___nl__bool__71;
#line 155
___nl__bool__70 = !___nl__bool__70;
#line 155
if(___nl__bool__70){ goto label_416;}
#line 155
___nl__int__72 = getIntFromImm(___nl__im__1);
#line 155
c_rt_lib0move(&___nl__im__1, c_std_lib0int_to_string(___nl__int__72));
#line 155
//clear ___nl__int__72;
#line 155
goto label_416;
#line 155
label_416:
;
#line 155
//clear ___nl__bool__70;
#line 156
___nl__bool__73 = c_std_lib0is_string(___nl__im__1);
#line 156
___nl__bool__73 = !___nl__bool__73;
#line 156
___nl__bool__73 = !___nl__bool__73;
#line 156
if(___nl__bool__73){ goto label_466;}
#line 156
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1215));
#line 156
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__76, ___get_global_string_const(1206), (*___ref___im__3)));
#line 156
c_rt_lib0clear(&___nl__im__76);
#line 156
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__75));
#line 156
c_rt_lib0clear(&___nl__im__75);
#line 156
c_rt_lib0clear(&___nl__im__0);
#line 156
c_rt_lib0clear(&___nl__im__1);
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
c_rt_lib0clear(&___nl__im__8);
#line 156
//clear ___nl__bool__9;
#line 156
c_rt_lib0clear(&___nl__im__10);
#line 156
c_rt_lib0clear(&___nl__im__11);
#line 156
c_rt_lib0clear(&___nl__im__12);
#line 156
c_rt_lib0clear(&___nl__im__17);
#line 156
//clear ___nl__bool__18;
#line 156
c_rt_lib0clear(&___nl__im__19);
#line 156
c_rt_lib0clear(&___nl__im__20);
#line 156
//clear ___nl__bool__21;
#line 156
c_rt_lib0clear(&___nl__im__22);
#line 156
c_rt_lib0clear(&___nl__im__23);
#line 156
c_rt_lib0clear(&___nl__im__24);
#line 156
c_rt_lib0clear(&___nl__im__25);
#line 156
c_rt_lib0clear(&___nl__im__30);
#line 156
//clear ___nl__int__31;
#line 156
//clear ___nl__int__32;
#line 156
//clear ___nl__int__33;
#line 156
//clear ___nl__bool__34;
#line 156
//clear ___nl__int__35;
#line 156
c_rt_lib0clear(&___nl__im__36);
#line 156
c_rt_lib0clear(&___nl__im__38);
#line 156
//clear ___nl__bool__39;
#line 156
c_rt_lib0clear(&___nl__im__40);
#line 156
c_rt_lib0clear(&___nl__im__41);
#line 156
c_rt_lib0clear(&___nl__im__42);
#line 156
c_rt_lib0clear(&___nl__im__55);
#line 156
//clear ___nl__bool__56;
#line 156
c_rt_lib0clear(&___nl__im__57);
#line 156
c_rt_lib0clear(&___nl__im__58);
#line 156
//clear ___nl__bool__66;
#line 156
c_rt_lib0clear(&___nl__im__67);
#line 156
c_rt_lib0clear(&___nl__im__69);
#line 156
//clear ___nl__bool__73;
#line 156
return ___nl__im__74;
#line 156
goto label_466;
#line 156
label_466:
;
#line 156
//clear ___nl__bool__73;
#line 156
c_rt_lib0clear(&___nl__im__74);
#line 157
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 158
goto label_1085;
#line 158
label_471:
;
#line 158
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(317)));
#line 158
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 159
___nl__bool__79 = c_std_lib0is_variant(___nl__im__1);
#line 159
___nl__bool__79 = !___nl__bool__79;
#line 159
___nl__bool__79 = !___nl__bool__79;
#line 159
if(___nl__bool__79){ goto label_524;}
#line 159
c_rt_lib0move(&___nl__im__82,___get_global_string_const(1216));
#line 159
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__82, ___get_global_string_const(1206), (*___ref___im__3)));
#line 159
c_rt_lib0clear(&___nl__im__82);
#line 159
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__81));
#line 159
c_rt_lib0clear(&___nl__im__81);
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
c_rt_lib0clear(&___nl__im__8);
#line 159
//clear ___nl__bool__9;
#line 159
c_rt_lib0clear(&___nl__im__10);
#line 159
c_rt_lib0clear(&___nl__im__11);
#line 159
c_rt_lib0clear(&___nl__im__12);
#line 159
c_rt_lib0clear(&___nl__im__17);
#line 159
//clear ___nl__bool__18;
#line 159
c_rt_lib0clear(&___nl__im__19);
#line 159
c_rt_lib0clear(&___nl__im__20);
#line 159
//clear ___nl__bool__21;
#line 159
c_rt_lib0clear(&___nl__im__22);
#line 159
c_rt_lib0clear(&___nl__im__23);
#line 159
c_rt_lib0clear(&___nl__im__24);
#line 159
c_rt_lib0clear(&___nl__im__25);
#line 159
c_rt_lib0clear(&___nl__im__30);
#line 159
//clear ___nl__int__31;
#line 159
//clear ___nl__int__32;
#line 159
//clear ___nl__int__33;
#line 159
//clear ___nl__bool__34;
#line 159
//clear ___nl__int__35;
#line 159
c_rt_lib0clear(&___nl__im__36);
#line 159
c_rt_lib0clear(&___nl__im__38);
#line 159
//clear ___nl__bool__39;
#line 159
c_rt_lib0clear(&___nl__im__40);
#line 159
c_rt_lib0clear(&___nl__im__41);
#line 159
c_rt_lib0clear(&___nl__im__42);
#line 159
c_rt_lib0clear(&___nl__im__55);
#line 159
//clear ___nl__bool__56;
#line 159
c_rt_lib0clear(&___nl__im__57);
#line 159
c_rt_lib0clear(&___nl__im__58);
#line 159
//clear ___nl__bool__66;
#line 159
c_rt_lib0clear(&___nl__im__67);
#line 159
c_rt_lib0clear(&___nl__im__69);
#line 159
c_rt_lib0clear(&___nl__im__77);
#line 159
c_rt_lib0clear(&___nl__im__78);
#line 159
//clear ___nl__bool__79;
#line 159
return ___nl__im__80;
#line 159
goto label_524;
#line 159
label_524:
;
#line 159
//clear ___nl__bool__79;
#line 159
c_rt_lib0clear(&___nl__im__80);
#line 160
c_rt_lib0move(&___nl__im__83, ov0get_element(___nl__im__1));
#line 161
___nl__bool__84 = hash0has_key(___nl__im__77, ___nl__im__83);
#line 161
___nl__bool__84 = !___nl__bool__84;
#line 161
___nl__bool__84 = !___nl__bool__84;
#line 161
if(___nl__bool__84){ goto label_585;}
#line 161
c_rt_lib0move(&___nl__im__89,___get_global_string_const(1217));
#line 161
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__83));
#line 161
c_rt_lib0clear(&___nl__im__89);
#line 161
c_rt_lib0move(&___nl__im__90,___get_global_string_const(1218));
#line 161
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__90));
#line 161
c_rt_lib0clear(&___nl__im__88);
#line 161
c_rt_lib0clear(&___nl__im__90);
#line 161
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__87, ___get_global_string_const(1206), (*___ref___im__3)));
#line 161
c_rt_lib0clear(&___nl__im__87);
#line 161
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__86));
#line 161
c_rt_lib0clear(&___nl__im__86);
#line 161
c_rt_lib0clear(&___nl__im__0);
#line 161
c_rt_lib0clear(&___nl__im__1);
#line 161
c_rt_lib0clear(&___nl__im__2);
#line 161
c_rt_lib0clear(&___nl__im__8);
#line 161
//clear ___nl__bool__9;
#line 161
c_rt_lib0clear(&___nl__im__10);
#line 161
c_rt_lib0clear(&___nl__im__11);
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__17);
#line 161
//clear ___nl__bool__18;
#line 161
c_rt_lib0clear(&___nl__im__19);
#line 161
c_rt_lib0clear(&___nl__im__20);
#line 161
//clear ___nl__bool__21;
#line 161
c_rt_lib0clear(&___nl__im__22);
#line 161
c_rt_lib0clear(&___nl__im__23);
#line 161
c_rt_lib0clear(&___nl__im__24);
#line 161
c_rt_lib0clear(&___nl__im__25);
#line 161
c_rt_lib0clear(&___nl__im__30);
#line 161
//clear ___nl__int__31;
#line 161
//clear ___nl__int__32;
#line 161
//clear ___nl__int__33;
#line 161
//clear ___nl__bool__34;
#line 161
//clear ___nl__int__35;
#line 161
c_rt_lib0clear(&___nl__im__36);
#line 161
c_rt_lib0clear(&___nl__im__38);
#line 161
//clear ___nl__bool__39;
#line 161
c_rt_lib0clear(&___nl__im__40);
#line 161
c_rt_lib0clear(&___nl__im__41);
#line 161
c_rt_lib0clear(&___nl__im__42);
#line 161
c_rt_lib0clear(&___nl__im__55);
#line 161
//clear ___nl__bool__56;
#line 161
c_rt_lib0clear(&___nl__im__57);
#line 161
c_rt_lib0clear(&___nl__im__58);
#line 161
//clear ___nl__bool__66;
#line 161
c_rt_lib0clear(&___nl__im__67);
#line 161
c_rt_lib0clear(&___nl__im__69);
#line 161
c_rt_lib0clear(&___nl__im__77);
#line 161
c_rt_lib0clear(&___nl__im__78);
#line 161
c_rt_lib0clear(&___nl__im__83);
#line 161
//clear ___nl__bool__84;
#line 161
return ___nl__im__85;
#line 161
goto label_585;
#line 161
label_585:
;
#line 161
//clear ___nl__bool__84;
#line 161
c_rt_lib0clear(&___nl__im__85);
#line 162
c_rt_lib0array_push(___ref___im__3, ___nl__im__83);
#line 163
c_rt_lib0move(&___nl__im__91, hash0get_value(___nl__im__77, ___nl__im__83));
#line 164
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_string_const(27));
#line 164
if(___nl__bool__92){ goto label_597;}
#line 168
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_string_const(28));
#line 168
if(___nl__bool__92){ goto label_717;}
#line 168
c_rt_lib0move(&___nl__im__93,___get_global_string_const(15));
#line 168
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_mk(2, ___nl__im__93, ___nl__im__91));
#line 168
nl_die_arg(___nl__im__93);
#line 164
label_597:
;
#line 164
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__91, ___get_global_string_const(27)));
#line 164
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 165
c_rt_lib0move(&___nl__im__97, ov0has_value(___nl__im__1));
#line 165
___nl__bool__96 = c_rt_lib0check_true_native(___nl__im__97);
#line 165
c_rt_lib0clear(&___nl__im__97);
#line 165
___nl__bool__96 = !___nl__bool__96;
#line 165
___nl__bool__96 = !___nl__bool__96;
#line 165
if(___nl__bool__96){ goto label_658;}
#line 165
c_rt_lib0move(&___nl__im__100,___get_global_string_const(1219));
#line 165
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__100, ___get_global_string_const(1206), (*___ref___im__3)));
#line 165
c_rt_lib0clear(&___nl__im__100);
#line 165
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__99));
#line 165
c_rt_lib0clear(&___nl__im__99);
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
c_rt_lib0clear(&___nl__im__1);
#line 165
c_rt_lib0clear(&___nl__im__2);
#line 165
c_rt_lib0clear(&___nl__im__8);
#line 165
//clear ___nl__bool__9;
#line 165
c_rt_lib0clear(&___nl__im__10);
#line 165
c_rt_lib0clear(&___nl__im__11);
#line 165
c_rt_lib0clear(&___nl__im__12);
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 165
//clear ___nl__bool__18;
#line 165
c_rt_lib0clear(&___nl__im__19);
#line 165
c_rt_lib0clear(&___nl__im__20);
#line 165
//clear ___nl__bool__21;
#line 165
c_rt_lib0clear(&___nl__im__22);
#line 165
c_rt_lib0clear(&___nl__im__23);
#line 165
c_rt_lib0clear(&___nl__im__24);
#line 165
c_rt_lib0clear(&___nl__im__25);
#line 165
c_rt_lib0clear(&___nl__im__30);
#line 165
//clear ___nl__int__31;
#line 165
//clear ___nl__int__32;
#line 165
//clear ___nl__int__33;
#line 165
//clear ___nl__bool__34;
#line 165
//clear ___nl__int__35;
#line 165
c_rt_lib0clear(&___nl__im__36);
#line 165
c_rt_lib0clear(&___nl__im__38);
#line 165
//clear ___nl__bool__39;
#line 165
c_rt_lib0clear(&___nl__im__40);
#line 165
c_rt_lib0clear(&___nl__im__41);
#line 165
c_rt_lib0clear(&___nl__im__42);
#line 165
c_rt_lib0clear(&___nl__im__55);
#line 165
//clear ___nl__bool__56;
#line 165
c_rt_lib0clear(&___nl__im__57);
#line 165
c_rt_lib0clear(&___nl__im__58);
#line 165
//clear ___nl__bool__66;
#line 165
c_rt_lib0clear(&___nl__im__67);
#line 165
c_rt_lib0clear(&___nl__im__69);
#line 165
c_rt_lib0clear(&___nl__im__77);
#line 165
c_rt_lib0clear(&___nl__im__78);
#line 165
c_rt_lib0clear(&___nl__im__83);
#line 165
c_rt_lib0clear(&___nl__im__91);
#line 165
//clear ___nl__bool__92;
#line 165
c_rt_lib0clear(&___nl__im__93);
#line 165
c_rt_lib0clear(&___nl__im__94);
#line 165
c_rt_lib0clear(&___nl__im__95);
#line 165
//clear ___nl__bool__96;
#line 165
return ___nl__im__98;
#line 165
goto label_658;
#line 165
label_658:
;
#line 165
//clear ___nl__bool__96;
#line 165
c_rt_lib0clear(&___nl__im__98);
#line 166
c_rt_lib0move(&___nl__im__104, ov0get_value(___nl__im__1));
#line 166
c_rt_lib0move(&___nl__im__103, ptd_priv0ensure_dyn(___nl__im__94, ___nl__im__104, ___nl__im__2, ___ref___im__3));
#line 166
c_rt_lib0clear(&___nl__im__104);
#line 166
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(78));
#line 166
if(___nl__bool__102){ goto label_713;}
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
c_rt_lib0clear(&___nl__im__101);
#line 166
//clear ___nl__bool__102;
#line 166
return ___nl__im__103;
#line 166
label_713:
;
#line 166
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(78)));
#line 167
c_rt_lib0move(&___nl__im__8, ov0mk_val(___nl__im__83, ___nl__im__101));
#line 168
goto label_783;
#line 168
label_717:
;
#line 169
c_rt_lib0move(&___nl__im__106, ov0has_value(___nl__im__1));
#line 169
___nl__bool__105 = c_rt_lib0check_true_native(___nl__im__106);
#line 169
c_rt_lib0clear(&___nl__im__106);
#line 169
___nl__bool__105 = !___nl__bool__105;
#line 169
if(___nl__bool__105){ goto label_778;}
#line 169
c_rt_lib0move(&___nl__im__109,___get_global_string_const(1220));
#line 169
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__109, ___get_global_string_const(1206), (*___ref___im__3)));
#line 169
c_rt_lib0clear(&___nl__im__109);
#line 169
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__108));
#line 169
c_rt_lib0clear(&___nl__im__108);
#line 169
c_rt_lib0clear(&___nl__im__0);
#line 169
c_rt_lib0clear(&___nl__im__1);
#line 169
c_rt_lib0clear(&___nl__im__2);
#line 169
c_rt_lib0clear(&___nl__im__8);
#line 169
//clear ___nl__bool__9;
#line 169
c_rt_lib0clear(&___nl__im__10);
#line 169
c_rt_lib0clear(&___nl__im__11);
#line 169
c_rt_lib0clear(&___nl__im__12);
#line 169
c_rt_lib0clear(&___nl__im__17);
#line 169
//clear ___nl__bool__18;
#line 169
c_rt_lib0clear(&___nl__im__19);
#line 169
c_rt_lib0clear(&___nl__im__20);
#line 169
//clear ___nl__bool__21;
#line 169
c_rt_lib0clear(&___nl__im__22);
#line 169
c_rt_lib0clear(&___nl__im__23);
#line 169
c_rt_lib0clear(&___nl__im__24);
#line 169
c_rt_lib0clear(&___nl__im__25);
#line 169
c_rt_lib0clear(&___nl__im__30);
#line 169
//clear ___nl__int__31;
#line 169
//clear ___nl__int__32;
#line 169
//clear ___nl__int__33;
#line 169
//clear ___nl__bool__34;
#line 169
//clear ___nl__int__35;
#line 169
c_rt_lib0clear(&___nl__im__36);
#line 169
c_rt_lib0clear(&___nl__im__38);
#line 169
//clear ___nl__bool__39;
#line 169
c_rt_lib0clear(&___nl__im__40);
#line 169
c_rt_lib0clear(&___nl__im__41);
#line 169
c_rt_lib0clear(&___nl__im__42);
#line 169
c_rt_lib0clear(&___nl__im__55);
#line 169
//clear ___nl__bool__56;
#line 169
c_rt_lib0clear(&___nl__im__57);
#line 169
c_rt_lib0clear(&___nl__im__58);
#line 169
//clear ___nl__bool__66;
#line 169
c_rt_lib0clear(&___nl__im__67);
#line 169
c_rt_lib0clear(&___nl__im__69);
#line 169
c_rt_lib0clear(&___nl__im__77);
#line 169
c_rt_lib0clear(&___nl__im__78);
#line 169
c_rt_lib0clear(&___nl__im__83);
#line 169
c_rt_lib0clear(&___nl__im__91);
#line 169
//clear ___nl__bool__92;
#line 169
c_rt_lib0clear(&___nl__im__93);
#line 169
c_rt_lib0clear(&___nl__im__94);
#line 169
c_rt_lib0clear(&___nl__im__95);
#line 169
c_rt_lib0clear(&___nl__im__101);
#line 169
//clear ___nl__bool__102;
#line 169
c_rt_lib0clear(&___nl__im__103);
#line 169
//clear ___nl__bool__105;
#line 169
return ___nl__im__107;
#line 169
goto label_778;
#line 169
label_778:
;
#line 169
//clear ___nl__bool__105;
#line 169
c_rt_lib0clear(&___nl__im__107);
#line 170
c_rt_lib0move(&___nl__im__8, ov0mk(___nl__im__83));
#line 171
goto label_783;
#line 171
label_783:
;
#line 172
c_rt_lib0delete(array0pop(___ref___im__3));
#line 173
goto label_1085;
#line 173
label_786:
;
#line 174
___nl__bool__110 = c_rt_lib0check_true_native(___nl__im__2);
#line 174
___nl__bool__111 = !___nl__bool__110;
#line 174
if(___nl__bool__111){ goto label_791;}
#line 174
___nl__bool__110 = c_std_lib0is_string(___nl__im__1);
#line 174
label_791:
;
#line 174
//clear ___nl__bool__111;
#line 174
___nl__bool__110 = !___nl__bool__110;
#line 174
if(___nl__bool__110){ goto label_799;}
#line 174
___nl__int__112 = ptd0string_to_int(___nl__im__1);
#line 174
c_rt_lib0move(&___nl__im__1, c_rt_lib0int_new(___nl__int__112));
#line 174
//clear ___nl__int__112;
#line 174
goto label_799;
#line 174
label_799:
;
#line 174
//clear ___nl__bool__110;
#line 175
___nl__bool__113 = c_std_lib0is_int(___nl__im__1);
#line 175
___nl__bool__113 = !___nl__bool__113;
#line 175
___nl__bool__113 = !___nl__bool__113;
#line 175
if(___nl__bool__113){ goto label_860;}
#line 175
c_rt_lib0move(&___nl__im__116,___get_global_string_const(1221));
#line 175
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__116, ___get_global_string_const(1206), (*___ref___im__3)));
#line 175
c_rt_lib0clear(&___nl__im__116);
#line 175
c_rt_lib0move(&___nl__im__114, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__115));
#line 175
c_rt_lib0clear(&___nl__im__115);
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
c_rt_lib0clear(&___nl__im__1);
#line 175
c_rt_lib0clear(&___nl__im__2);
#line 175
c_rt_lib0clear(&___nl__im__8);
#line 175
//clear ___nl__bool__9;
#line 175
c_rt_lib0clear(&___nl__im__10);
#line 175
c_rt_lib0clear(&___nl__im__11);
#line 175
c_rt_lib0clear(&___nl__im__12);
#line 175
c_rt_lib0clear(&___nl__im__17);
#line 175
//clear ___nl__bool__18;
#line 175
c_rt_lib0clear(&___nl__im__19);
#line 175
c_rt_lib0clear(&___nl__im__20);
#line 175
//clear ___nl__bool__21;
#line 175
c_rt_lib0clear(&___nl__im__22);
#line 175
c_rt_lib0clear(&___nl__im__23);
#line 175
c_rt_lib0clear(&___nl__im__24);
#line 175
c_rt_lib0clear(&___nl__im__25);
#line 175
c_rt_lib0clear(&___nl__im__30);
#line 175
//clear ___nl__int__31;
#line 175
//clear ___nl__int__32;
#line 175
//clear ___nl__int__33;
#line 175
//clear ___nl__bool__34;
#line 175
//clear ___nl__int__35;
#line 175
c_rt_lib0clear(&___nl__im__36);
#line 175
c_rt_lib0clear(&___nl__im__38);
#line 175
//clear ___nl__bool__39;
#line 175
c_rt_lib0clear(&___nl__im__40);
#line 175
c_rt_lib0clear(&___nl__im__41);
#line 175
c_rt_lib0clear(&___nl__im__42);
#line 175
c_rt_lib0clear(&___nl__im__55);
#line 175
//clear ___nl__bool__56;
#line 175
c_rt_lib0clear(&___nl__im__57);
#line 175
c_rt_lib0clear(&___nl__im__58);
#line 175
//clear ___nl__bool__66;
#line 175
c_rt_lib0clear(&___nl__im__67);
#line 175
c_rt_lib0clear(&___nl__im__69);
#line 175
c_rt_lib0clear(&___nl__im__77);
#line 175
c_rt_lib0clear(&___nl__im__78);
#line 175
c_rt_lib0clear(&___nl__im__83);
#line 175
c_rt_lib0clear(&___nl__im__91);
#line 175
//clear ___nl__bool__92;
#line 175
c_rt_lib0clear(&___nl__im__93);
#line 175
c_rt_lib0clear(&___nl__im__94);
#line 175
c_rt_lib0clear(&___nl__im__95);
#line 175
c_rt_lib0clear(&___nl__im__101);
#line 175
//clear ___nl__bool__102;
#line 175
c_rt_lib0clear(&___nl__im__103);
#line 175
//clear ___nl__bool__113;
#line 175
return ___nl__im__114;
#line 175
goto label_860;
#line 175
label_860:
;
#line 175
//clear ___nl__bool__113;
#line 175
c_rt_lib0clear(&___nl__im__114);
#line 176
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 177
goto label_1085;
#line 177
label_865:
;
#line 178
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 179
goto label_1085;
#line 179
label_868:
;
#line 179
c_rt_lib0move(&___nl__im__118, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(39)));
#line 179
c_rt_lib0copy(&___nl__im__117, ___nl__im__118);
#line 180
c_rt_lib0array_push(___ref___im__3, ___nl__im__117);
#line 181
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 181
c_rt_lib0move(&___nl__im__121, ptd_priv0exec(___nl__im__0, ___nl__im__122));
#line 181
c_rt_lib0clear(&___nl__im__122);
#line 181
c_rt_lib0move(&___nl__im__120, ptd_priv0ensure_dyn(___nl__im__121, ___nl__im__1, ___nl__im__2, ___ref___im__3));
#line 181
c_rt_lib0clear(&___nl__im__121);
#line 181
___nl__bool__119 = c_rt_lib0priv_is(___nl__im__120, ___get_global_string_const(78));
#line 181
if(___nl__bool__119){ goto label_930;}
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
c_rt_lib0clear(&___nl__im__1);
#line 181
c_rt_lib0clear(&___nl__im__2);
#line 181
c_rt_lib0clear(&___nl__im__8);
#line 181
//clear ___nl__bool__9;
#line 181
c_rt_lib0clear(&___nl__im__10);
#line 181
c_rt_lib0clear(&___nl__im__11);
#line 181
c_rt_lib0clear(&___nl__im__12);
#line 181
c_rt_lib0clear(&___nl__im__17);
#line 181
//clear ___nl__bool__18;
#line 181
c_rt_lib0clear(&___nl__im__19);
#line 181
c_rt_lib0clear(&___nl__im__20);
#line 181
//clear ___nl__bool__21;
#line 181
c_rt_lib0clear(&___nl__im__22);
#line 181
c_rt_lib0clear(&___nl__im__23);
#line 181
c_rt_lib0clear(&___nl__im__24);
#line 181
c_rt_lib0clear(&___nl__im__25);
#line 181
c_rt_lib0clear(&___nl__im__30);
#line 181
//clear ___nl__int__31;
#line 181
//clear ___nl__int__32;
#line 181
//clear ___nl__int__33;
#line 181
//clear ___nl__bool__34;
#line 181
//clear ___nl__int__35;
#line 181
c_rt_lib0clear(&___nl__im__36);
#line 181
c_rt_lib0clear(&___nl__im__38);
#line 181
//clear ___nl__bool__39;
#line 181
c_rt_lib0clear(&___nl__im__40);
#line 181
c_rt_lib0clear(&___nl__im__41);
#line 181
c_rt_lib0clear(&___nl__im__42);
#line 181
c_rt_lib0clear(&___nl__im__55);
#line 181
//clear ___nl__bool__56;
#line 181
c_rt_lib0clear(&___nl__im__57);
#line 181
c_rt_lib0clear(&___nl__im__58);
#line 181
//clear ___nl__bool__66;
#line 181
c_rt_lib0clear(&___nl__im__67);
#line 181
c_rt_lib0clear(&___nl__im__69);
#line 181
c_rt_lib0clear(&___nl__im__77);
#line 181
c_rt_lib0clear(&___nl__im__78);
#line 181
c_rt_lib0clear(&___nl__im__83);
#line 181
c_rt_lib0clear(&___nl__im__91);
#line 181
//clear ___nl__bool__92;
#line 181
c_rt_lib0clear(&___nl__im__93);
#line 181
c_rt_lib0clear(&___nl__im__94);
#line 181
c_rt_lib0clear(&___nl__im__95);
#line 181
c_rt_lib0clear(&___nl__im__101);
#line 181
//clear ___nl__bool__102;
#line 181
c_rt_lib0clear(&___nl__im__103);
#line 181
c_rt_lib0clear(&___nl__im__117);
#line 181
c_rt_lib0clear(&___nl__im__118);
#line 181
//clear ___nl__bool__119;
#line 181
return ___nl__im__120;
#line 181
label_930:
;
#line 181
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__120, ___get_global_string_const(78)));
#line 182
c_rt_lib0delete(array0pop(___ref___im__3));
#line 183
goto label_1085;
#line 183
label_934:
;
#line 184
___nl__bool__123 = c_std_lib0is_variant(___nl__im__1);
#line 184
___nl__bool__123 = !___nl__bool__123;
#line 184
___nl__bool__123 = !___nl__bool__123;
#line 184
if(___nl__bool__123){ goto label_998;}
#line 184
c_rt_lib0move(&___nl__im__126,___get_global_string_const(1222));
#line 184
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__126, ___get_global_string_const(1206), (*___ref___im__3)));
#line 184
c_rt_lib0clear(&___nl__im__126);
#line 184
c_rt_lib0move(&___nl__im__124, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__125));
#line 184
c_rt_lib0clear(&___nl__im__125);
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 184
c_rt_lib0clear(&___nl__im__8);
#line 184
//clear ___nl__bool__9;
#line 184
c_rt_lib0clear(&___nl__im__10);
#line 184
c_rt_lib0clear(&___nl__im__11);
#line 184
c_rt_lib0clear(&___nl__im__12);
#line 184
c_rt_lib0clear(&___nl__im__17);
#line 184
//clear ___nl__bool__18;
#line 184
c_rt_lib0clear(&___nl__im__19);
#line 184
c_rt_lib0clear(&___nl__im__20);
#line 184
//clear ___nl__bool__21;
#line 184
c_rt_lib0clear(&___nl__im__22);
#line 184
c_rt_lib0clear(&___nl__im__23);
#line 184
c_rt_lib0clear(&___nl__im__24);
#line 184
c_rt_lib0clear(&___nl__im__25);
#line 184
c_rt_lib0clear(&___nl__im__30);
#line 184
//clear ___nl__int__31;
#line 184
//clear ___nl__int__32;
#line 184
//clear ___nl__int__33;
#line 184
//clear ___nl__bool__34;
#line 184
//clear ___nl__int__35;
#line 184
c_rt_lib0clear(&___nl__im__36);
#line 184
c_rt_lib0clear(&___nl__im__38);
#line 184
//clear ___nl__bool__39;
#line 184
c_rt_lib0clear(&___nl__im__40);
#line 184
c_rt_lib0clear(&___nl__im__41);
#line 184
c_rt_lib0clear(&___nl__im__42);
#line 184
c_rt_lib0clear(&___nl__im__55);
#line 184
//clear ___nl__bool__56;
#line 184
c_rt_lib0clear(&___nl__im__57);
#line 184
c_rt_lib0clear(&___nl__im__58);
#line 184
//clear ___nl__bool__66;
#line 184
c_rt_lib0clear(&___nl__im__67);
#line 184
c_rt_lib0clear(&___nl__im__69);
#line 184
c_rt_lib0clear(&___nl__im__77);
#line 184
c_rt_lib0clear(&___nl__im__78);
#line 184
c_rt_lib0clear(&___nl__im__83);
#line 184
c_rt_lib0clear(&___nl__im__91);
#line 184
//clear ___nl__bool__92;
#line 184
c_rt_lib0clear(&___nl__im__93);
#line 184
c_rt_lib0clear(&___nl__im__94);
#line 184
c_rt_lib0clear(&___nl__im__95);
#line 184
c_rt_lib0clear(&___nl__im__101);
#line 184
//clear ___nl__bool__102;
#line 184
c_rt_lib0clear(&___nl__im__103);
#line 184
c_rt_lib0clear(&___nl__im__117);
#line 184
c_rt_lib0clear(&___nl__im__118);
#line 184
//clear ___nl__bool__119;
#line 184
c_rt_lib0clear(&___nl__im__120);
#line 184
//clear ___nl__bool__123;
#line 184
return ___nl__im__124;
#line 184
goto label_998;
#line 184
label_998:
;
#line 184
//clear ___nl__bool__123;
#line 184
c_rt_lib0clear(&___nl__im__124);
#line 185
c_rt_lib0move(&___nl__im__127, ov0get_element(___nl__im__1));
#line 186
c_rt_lib0move(&___nl__im__130,___get_global_string_const(179));
#line 186
___nl__bool__128 = c_rt_lib0ne(___nl__im__127, ___nl__im__130);
#line 186
c_rt_lib0clear(&___nl__im__130);
#line 186
___nl__bool__129 = !___nl__bool__128;
#line 186
if(___nl__bool__129){ goto label_1010;}
#line 186
c_rt_lib0move(&___nl__im__131,___get_global_string_const(180));
#line 186
___nl__bool__128 = c_rt_lib0ne(___nl__im__127, ___nl__im__131);
#line 186
c_rt_lib0clear(&___nl__im__131);
#line 186
label_1010:
;
#line 186
//clear ___nl__bool__129;
#line 186
___nl__bool__128 = !___nl__bool__128;
#line 186
if(___nl__bool__128){ goto label_1080;}
#line 187
c_rt_lib0move(&___nl__im__136,___get_global_string_const(1223));
#line 187
c_rt_lib0move(&___nl__im__135, c_rt_lib0concat_new(___nl__im__136, ___nl__im__127));
#line 187
c_rt_lib0clear(&___nl__im__136);
#line 187
c_rt_lib0move(&___nl__im__137,___get_global_string_const(1224));
#line 187
c_rt_lib0move(&___nl__im__134, c_rt_lib0concat_new(___nl__im__135, ___nl__im__137));
#line 187
c_rt_lib0clear(&___nl__im__135);
#line 187
c_rt_lib0clear(&___nl__im__137);
#line 187
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__134, ___get_global_string_const(1206), (*___ref___im__3)));
#line 187
c_rt_lib0clear(&___nl__im__134);
#line 187
c_rt_lib0move(&___nl__im__132, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__133));
#line 187
c_rt_lib0clear(&___nl__im__133);
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
c_rt_lib0clear(&___nl__im__2);
#line 187
c_rt_lib0clear(&___nl__im__8);
#line 187
//clear ___nl__bool__9;
#line 187
c_rt_lib0clear(&___nl__im__10);
#line 187
c_rt_lib0clear(&___nl__im__11);
#line 187
c_rt_lib0clear(&___nl__im__12);
#line 187
c_rt_lib0clear(&___nl__im__17);
#line 187
//clear ___nl__bool__18;
#line 187
c_rt_lib0clear(&___nl__im__19);
#line 187
c_rt_lib0clear(&___nl__im__20);
#line 187
//clear ___nl__bool__21;
#line 187
c_rt_lib0clear(&___nl__im__22);
#line 187
c_rt_lib0clear(&___nl__im__23);
#line 187
c_rt_lib0clear(&___nl__im__24);
#line 187
c_rt_lib0clear(&___nl__im__25);
#line 187
c_rt_lib0clear(&___nl__im__30);
#line 187
//clear ___nl__int__31;
#line 187
//clear ___nl__int__32;
#line 187
//clear ___nl__int__33;
#line 187
//clear ___nl__bool__34;
#line 187
//clear ___nl__int__35;
#line 187
c_rt_lib0clear(&___nl__im__36);
#line 187
c_rt_lib0clear(&___nl__im__38);
#line 187
//clear ___nl__bool__39;
#line 187
c_rt_lib0clear(&___nl__im__40);
#line 187
c_rt_lib0clear(&___nl__im__41);
#line 187
c_rt_lib0clear(&___nl__im__42);
#line 187
c_rt_lib0clear(&___nl__im__55);
#line 187
//clear ___nl__bool__56;
#line 187
c_rt_lib0clear(&___nl__im__57);
#line 187
c_rt_lib0clear(&___nl__im__58);
#line 187
//clear ___nl__bool__66;
#line 187
c_rt_lib0clear(&___nl__im__67);
#line 187
c_rt_lib0clear(&___nl__im__69);
#line 187
c_rt_lib0clear(&___nl__im__77);
#line 187
c_rt_lib0clear(&___nl__im__78);
#line 187
c_rt_lib0clear(&___nl__im__83);
#line 187
c_rt_lib0clear(&___nl__im__91);
#line 187
//clear ___nl__bool__92;
#line 187
c_rt_lib0clear(&___nl__im__93);
#line 187
c_rt_lib0clear(&___nl__im__94);
#line 187
c_rt_lib0clear(&___nl__im__95);
#line 187
c_rt_lib0clear(&___nl__im__101);
#line 187
//clear ___nl__bool__102;
#line 187
c_rt_lib0clear(&___nl__im__103);
#line 187
c_rt_lib0clear(&___nl__im__117);
#line 187
c_rt_lib0clear(&___nl__im__118);
#line 187
//clear ___nl__bool__119;
#line 187
c_rt_lib0clear(&___nl__im__120);
#line 187
c_rt_lib0clear(&___nl__im__127);
#line 187
//clear ___nl__bool__128;
#line 187
return ___nl__im__132;
#line 188
goto label_1080;
#line 188
label_1080:
;
#line 188
//clear ___nl__bool__128;
#line 188
c_rt_lib0clear(&___nl__im__132);
#line 189
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 190
goto label_1085;
#line 190
label_1085:
;
#line 191
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__8));
#line 191
c_rt_lib0clear(&___nl__im__0);
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
c_rt_lib0clear(&___nl__im__2);
#line 191
c_rt_lib0clear(&___nl__im__8);
#line 191
//clear ___nl__bool__9;
#line 191
c_rt_lib0clear(&___nl__im__10);
#line 191
c_rt_lib0clear(&___nl__im__11);
#line 191
c_rt_lib0clear(&___nl__im__12);
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
c_rt_lib0clear(&___nl__im__24);
#line 191
c_rt_lib0clear(&___nl__im__25);
#line 191
c_rt_lib0clear(&___nl__im__30);
#line 191
//clear ___nl__int__31;
#line 191
//clear ___nl__int__32;
#line 191
//clear ___nl__int__33;
#line 191
//clear ___nl__bool__34;
#line 191
//clear ___nl__int__35;
#line 191
c_rt_lib0clear(&___nl__im__36);
#line 191
c_rt_lib0clear(&___nl__im__38);
#line 191
//clear ___nl__bool__39;
#line 191
c_rt_lib0clear(&___nl__im__40);
#line 191
c_rt_lib0clear(&___nl__im__41);
#line 191
c_rt_lib0clear(&___nl__im__42);
#line 191
c_rt_lib0clear(&___nl__im__55);
#line 191
//clear ___nl__bool__56;
#line 191
c_rt_lib0clear(&___nl__im__57);
#line 191
c_rt_lib0clear(&___nl__im__58);
#line 191
//clear ___nl__bool__66;
#line 191
c_rt_lib0clear(&___nl__im__67);
#line 191
c_rt_lib0clear(&___nl__im__69);
#line 191
c_rt_lib0clear(&___nl__im__77);
#line 191
c_rt_lib0clear(&___nl__im__78);
#line 191
c_rt_lib0clear(&___nl__im__83);
#line 191
c_rt_lib0clear(&___nl__im__91);
#line 191
//clear ___nl__bool__92;
#line 191
c_rt_lib0clear(&___nl__im__93);
#line 191
c_rt_lib0clear(&___nl__im__94);
#line 191
c_rt_lib0clear(&___nl__im__95);
#line 191
c_rt_lib0clear(&___nl__im__101);
#line 191
//clear ___nl__bool__102;
#line 191
c_rt_lib0clear(&___nl__im__103);
#line 191
c_rt_lib0clear(&___nl__im__117);
#line 191
c_rt_lib0clear(&___nl__im__118);
#line 191
//clear ___nl__bool__119;
#line 191
c_rt_lib0clear(&___nl__im__120);
#line 191
c_rt_lib0clear(&___nl__im__127);
#line 191
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
#line 195
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(39));
#line 195
if(___nl__bool__2){ goto label_15;}
#line 205
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(288));
#line 205
if(___nl__bool__2){ goto label_125;}
#line 206
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(316));
#line 206
if(___nl__bool__2){ goto label_127;}
#line 207
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(317));
#line 207
if(___nl__bool__2){ goto label_131;}
#line 208
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(308));
#line 208
if(___nl__bool__2){ goto label_135;}
#line 209
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(310));
#line 209
if(___nl__bool__2){ goto label_139;}
#line 209
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 209
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 209
nl_die_arg(___nl__im__3);
#line 195
label_15:
;
#line 195
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(39)));
#line 195
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 196
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(39));
#line 196
___nl__bool__6 = !___nl__bool__6;
#line 196
___nl__bool__6 = !___nl__bool__6;
#line 196
if(___nl__bool__6){ goto label_34;}
#line 196
___nl__bool__7 = false;
#line 196
c_rt_lib0move(&___nl__im__8, c_rt_lib0bool_to_nl_native(___nl__bool__7));
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
//clear ___nl__bool__7;
#line 196
return ___nl__im__8;
#line 196
goto label_34;
#line 196
label_34:
;
#line 196
//clear ___nl__bool__6;
#line 196
//clear ___nl__bool__7;
#line 196
c_rt_lib0clear(&___nl__im__8);
#line 197
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(39)));
#line 198
___nl__bool__10 = c_std_lib0is_hash(___nl__im__9);
#line 198
___nl__bool__10 = !___nl__bool__10;
#line 198
if(___nl__bool__10){ goto label_95;}
#line 199
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(150)));
#line 199
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(150)));
#line 199
___nl__bool__11 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__12);
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
___nl__bool__11 = !___nl__bool__11;
#line 199
___nl__bool__11 = !___nl__bool__11;
#line 199
if(___nl__bool__11){ goto label_64;}
#line 199
___nl__bool__14 = false;
#line 199
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
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
c_rt_lib0clear(&___nl__im__9);
#line 199
//clear ___nl__bool__10;
#line 199
//clear ___nl__bool__11;
#line 199
//clear ___nl__bool__14;
#line 199
return ___nl__im__15;
#line 199
goto label_64;
#line 199
label_64:
;
#line 199
//clear ___nl__bool__11;
#line 199
//clear ___nl__bool__14;
#line 199
c_rt_lib0clear(&___nl__im__15);
#line 200
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(166)));
#line 200
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(166)));
#line 200
___nl__bool__16 = c_rt_lib0eq(___nl__im__17, ___nl__im__18);
#line 200
c_rt_lib0clear(&___nl__im__17);
#line 200
c_rt_lib0clear(&___nl__im__18);
#line 200
___nl__bool__16 = !___nl__bool__16;
#line 200
___nl__bool__16 = !___nl__bool__16;
#line 200
if(___nl__bool__16){ goto label_90;}
#line 200
___nl__bool__19 = false;
#line 200
c_rt_lib0move(&___nl__im__20, c_rt_lib0bool_to_nl_native(___nl__bool__19));
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
//clear ___nl__bool__16;
#line 200
//clear ___nl__bool__19;
#line 200
return ___nl__im__20;
#line 200
goto label_90;
#line 200
label_90:
;
#line 200
//clear ___nl__bool__16;
#line 200
//clear ___nl__bool__19;
#line 200
c_rt_lib0clear(&___nl__im__20);
#line 201
goto label_109;
#line 201
label_95:
;
#line 202
___nl__bool__21 = c_rt_lib0eq(___nl__im__9, ___nl__im__4);
#line 202
c_rt_lib0move(&___nl__im__22, c_rt_lib0bool_to_nl_native(___nl__bool__21));
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
c_rt_lib0clear(&___nl__im__9);
#line 202
//clear ___nl__bool__10;
#line 202
//clear ___nl__bool__21;
#line 202
return ___nl__im__22;
#line 203
goto label_109;
#line 203
label_109:
;
#line 203
//clear ___nl__bool__10;
#line 203
//clear ___nl__bool__21;
#line 203
c_rt_lib0clear(&___nl__im__22);
#line 204
___nl__bool__23 = true;
#line 204
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
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
c_rt_lib0clear(&___nl__im__9);
#line 204
//clear ___nl__bool__23;
#line 204
return ___nl__im__24;
#line 205
goto label_143;
#line 205
label_125:
;
#line 206
goto label_143;
#line 206
label_127:
;
#line 206
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(316)));
#line 206
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 207
goto label_143;
#line 207
label_131:
;
#line 207
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(317)));
#line 207
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 208
goto label_143;
#line 208
label_135:
;
#line 208
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(308)));
#line 208
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 209
goto label_143;
#line 209
label_139:
;
#line 209
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(310)));
#line 209
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 210
goto label_143;
#line 210
label_143:
;
#line 211
___nl__bool__33 = false;
#line 211
c_rt_lib0move(&___nl__im__34, c_rt_lib0bool_to_nl_native(___nl__bool__33));
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
c_rt_lib0clear(&___nl__im__9);
#line 211
//clear ___nl__bool__23;
#line 211
c_rt_lib0clear(&___nl__im__24);
#line 211
c_rt_lib0clear(&___nl__im__25);
#line 211
c_rt_lib0clear(&___nl__im__26);
#line 211
c_rt_lib0clear(&___nl__im__27);
#line 211
c_rt_lib0clear(&___nl__im__28);
#line 211
c_rt_lib0clear(&___nl__im__29);
#line 211
c_rt_lib0clear(&___nl__im__30);
#line 211
c_rt_lib0clear(&___nl__im__31);
#line 211
c_rt_lib0clear(&___nl__im__32);
#line 211
//clear ___nl__bool__33;
#line 211
return ___nl__im__34;
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
c_rt_lib0clear(&___nl__im__9);
#line 211
//clear ___nl__bool__23;
#line 211
c_rt_lib0clear(&___nl__im__24);
#line 211
c_rt_lib0clear(&___nl__im__25);
#line 211
c_rt_lib0clear(&___nl__im__26);
#line 211
c_rt_lib0clear(&___nl__im__27);
#line 211
c_rt_lib0clear(&___nl__im__28);
#line 211
c_rt_lib0clear(&___nl__im__29);
#line 211
c_rt_lib0clear(&___nl__im__30);
#line 211
c_rt_lib0clear(&___nl__im__31);
#line 211
c_rt_lib0clear(&___nl__im__32);
#line 211
//clear ___nl__bool__33;
#line 211
c_rt_lib0clear(&___nl__im__34);
#line 211
return NULL;
return NULL;

}

ImmT  ptd_priv0exec(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ptd_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 215
c_rt_lib0move(&___nl__im__2, c_std_lib0exec(___nl__im__0, &___nl__im__1));
#line 215
c_rt_lib0clear(&___nl__im__0);
#line 215
c_rt_lib0clear(&___nl__im__1);
#line 215
return ___nl__im__2;
#line 215
c_rt_lib0clear(&___nl__im__0);
#line 215
c_rt_lib0clear(&___nl__im__1);
#line 215
c_rt_lib0clear(&___nl__im__2);
#line 215
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
#line 220
c_rt_lib0move(&___nl__im__2, ptd0ptd_im());
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(ptd0cast_error_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1225)));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 221
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__2, ___get_global_string_const(77), ___nl__im__3));
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
return ___nl__im__0;
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
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
#line 226
c_rt_lib0move(&___nl__im__2, ptd0try_dynamic_cast(___nl__im__0, ___nl__im__1));
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
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
#line 229
c_rt_lib0move(&___nl__im__2, ptd_priv0try_dynamic_cast(___nl__im__0, ___nl__im__1));
#line 230
___nl__int__4 = c_rt_lib0array_len(___nl__im__2);
#line 230
___nl__int__5 = 0;
#line 230
___nl__int__6 = ___nl__int__4 == ___nl__int__5;
#line 230
___nl__bool__3 = ___nl__int__6;
#line 230
//clear ___nl__int__4;
#line 230
//clear ___nl__int__5;
#line 230
//clear ___nl__int__6;
#line 230
___nl__bool__3 = !___nl__bool__3;
#line 230
if(___nl__bool__3){ goto label_17;}
#line 231
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__1));
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
//clear ___nl__bool__3;
#line 231
return ___nl__im__7;
#line 232
goto label_17;
#line 232
label_17:
;
#line 232
//clear ___nl__bool__3;
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 233
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__2));
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
c_rt_lib0clear(&___nl__im__1);
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
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
ImmT  ___nl__im__6 = NULL;
#line 238
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 239
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 240
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 241
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 242
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 242
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(403), ___nl__im__2, ___get_global_string_const(404), ___nl__im__3, ___get_global_string_const(128), ___nl__im__4, ___get_global_string_const(554), ___nl__im__5, ___get_global_string_const(37), ___nl__im__6));
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
c_rt_lib0clear(&___nl__im__4);
#line 242
c_rt_lib0clear(&___nl__im__5);
#line 242
c_rt_lib0clear(&___nl__im__6);
#line 242
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 242
c_rt_lib0clear(&___nl__im__1);
#line 242
return ___nl__im__0;
#line 242
c_rt_lib0clear(&___nl__im__0);
#line 242
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
ImmT  ___nl__im__23 = NULL;
#line 249
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 250
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 251
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 252
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 253
c_rt_lib0move(&___nl__im__9, ptd0ptd_im());
#line 253
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(5, ___get_global_string_const(1004), ___nl__im__5, ___get_global_string_const(1226), ___nl__im__6, ___get_global_string_const(1227), ___nl__im__7, ___get_global_string_const(1228), ___nl__im__8, ___get_global_string_const(1229), ___nl__im__9));
#line 253
c_rt_lib0clear(&___nl__im__5);
#line 253
c_rt_lib0clear(&___nl__im__6);
#line 253
c_rt_lib0clear(&___nl__im__7);
#line 253
c_rt_lib0clear(&___nl__im__8);
#line 253
c_rt_lib0clear(&___nl__im__9);
#line 253
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 253
c_rt_lib0clear(&___nl__im__4);
#line 256
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 256
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__12));
#line 257
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 257
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 258
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 258
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 259
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 259
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 260
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 260
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 261
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 261
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__17));
#line 262
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_string_const(302), ___get_global_string_const(1230)));
#line 262
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__18));
#line 263
c_rt_lib0move(&___nl__im__19, ptd0int());
#line 264
c_rt_lib0move(&___nl__im__20, ptd0string());
#line 265
c_rt_lib0move(&___nl__im__21, ptd0string());
#line 266
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 267
c_rt_lib0move(&___nl__im__23, ptd0string());
#line 267
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(12, ___get_global_string_const(1231), ___nl__im__12, ___get_global_string_const(1232), ___nl__im__13, ___get_global_string_const(1233), ___nl__im__14, ___get_global_string_const(1234), ___nl__im__15, ___get_global_string_const(1235), ___nl__im__16, ___get_global_string_const(1236), ___nl__im__17, ___get_global_string_const(1237), ___nl__im__18, ___get_global_string_const(1238), ___nl__im__19, ___get_global_string_const(1239), ___nl__im__20, ___get_global_string_const(1240), ___nl__im__21, ___get_global_string_const(1241), ___nl__im__22, ___get_global_string_const(1242), ___nl__im__23));
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
c_rt_lib0clear(&___nl__im__23);
#line 267
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 267
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(1206), ___nl__im__3, ___get_global_string_const(122), ___nl__im__10));
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
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 272
___nl__bool__1 = c_std_lib0is_int(___nl__im__0);
#line 272
___nl__bool__1 = !___nl__bool__1;
#line 272
if(___nl__bool__1){ goto label_8;}
#line 272
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
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
___nl__bool__3 = c_std_lib0is_string(___nl__im__0);
#line 273
___nl__bool__3 = !___nl__bool__3;
#line 273
if(___nl__bool__3){ goto label_19;}
#line 273
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(404)));
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
___nl__bool__5 = c_std_lib0is_variant(___nl__im__0);
#line 274
___nl__bool__5 = !___nl__bool__5;
#line 274
if(___nl__bool__5){ goto label_30;}
#line 274
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(554)));
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
___nl__bool__7 = c_std_lib0is_hash(___nl__im__0);
#line 275
___nl__bool__7 = !___nl__bool__7;
#line 275
if(___nl__bool__7){ goto label_41;}
#line 275
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(128)));
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
___nl__bool__9 = c_std_lib0is_array(___nl__im__0);
#line 276
___nl__bool__9 = !___nl__bool__9;
#line 276
if(___nl__bool__9){ goto label_52;}
#line 276
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(37)));
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
//clear ___nl__bool__9;
#line 276
return ___nl__im__10;
#line 276
goto label_52;
#line 276
label_52:
;
#line 276
//clear ___nl__bool__9;
#line 276
c_rt_lib0clear(&___nl__im__10);
#line 277
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 277
nl_die_arg(___nl__im__11);
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
#line 280
___nl__bool__2 = c_std_lib0is_variant(___nl__im__0);
#line 280
___nl__bool__2 = !___nl__bool__2;
#line 280
___nl__bool__2 = !___nl__bool__2;
#line 280
if(___nl__bool__2){ goto label_16;}
#line 280
c_rt_lib0move(&___nl__im__6, ptd0get_imm_kind(___nl__im__0));
#line 280
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(1231), ___nl__im__6));
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__5));
#line 280
c_rt_lib0clear(&___nl__im__5);
#line 280
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(1, ___nl__im__4));
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
//clear ___nl__bool__2;
#line 280
return ___nl__im__3;
#line 280
goto label_16;
#line 280
label_16:
;
#line 280
//clear ___nl__bool__2;
#line 280
c_rt_lib0clear(&___nl__im__3);
#line 281
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(310));
#line 281
if(___nl__bool__7){ goto label_38;}
#line 290
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(316));
#line 290
if(___nl__bool__7){ goto label_105;}
#line 299
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(308));
#line 299
if(___nl__bool__7){ goto label_192;}
#line 310
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(289));
#line 310
if(___nl__bool__7){ goto label_377;}
#line 312
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(287));
#line 312
if(___nl__bool__7){ goto label_422;}
#line 314
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(317));
#line 314
if(___nl__bool__7){ goto label_467;}
#line 329
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(288));
#line 329
if(___nl__bool__7){ goto label_750;}
#line 330
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(39));
#line 330
if(___nl__bool__7){ goto label_752;}
#line 330
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 330
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__0));
#line 330
nl_die_arg(___nl__im__8);
#line 281
label_38:
;
#line 281
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(310)));
#line 281
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 282
___nl__bool__11 = c_std_lib0is_hash(___nl__im__1);
#line 282
___nl__bool__11 = !___nl__bool__11;
#line 282
___nl__bool__11 = !___nl__bool__11;
#line 282
if(___nl__bool__11){ goto label_61;}
#line 282
c_rt_lib0move(&___nl__im__15, ptd0get_imm_kind(___nl__im__0));
#line 282
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(1232), ___nl__im__15));
#line 282
c_rt_lib0clear(&___nl__im__15);
#line 282
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__14));
#line 282
c_rt_lib0clear(&___nl__im__14);
#line 282
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 282
c_rt_lib0clear(&___nl__im__13);
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__bool__7;
#line 282
c_rt_lib0clear(&___nl__im__8);
#line 282
c_rt_lib0clear(&___nl__im__9);
#line 282
c_rt_lib0clear(&___nl__im__10);
#line 282
//clear ___nl__bool__11;
#line 282
return ___nl__im__12;
#line 282
goto label_61;
#line 282
label_61:
;
#line 282
//clear ___nl__bool__11;
#line 282
c_rt_lib0clear(&___nl__im__12);
#line 283
c_rt_lib0move(&___nl__im__19, c_rt_lib0init_iter(___nl__im__1));
#line 283
label_65:
;
#line 283
___nl__bool__17 = c_rt_lib0is_end_hash(___nl__im__19);
#line 283
if(___nl__bool__17){ goto label_103;}
#line 283
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_key_iter(___nl__im__19));
#line 283
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__16));
#line 284
c_rt_lib0move(&___nl__im__20, ptd_priv0try_dynamic_cast(___nl__im__9, ___nl__im__18));
#line 285
___nl__int__22 = c_rt_lib0array_len(___nl__im__20);
#line 285
___nl__int__23 = 0;
#line 285
___nl__int__24 = ___nl__int__22 > ___nl__int__23;
#line 285
___nl__bool__21 = ___nl__int__24;
#line 285
//clear ___nl__int__22;
#line 285
//clear ___nl__int__23;
#line 285
//clear ___nl__int__24;
#line 285
___nl__bool__21 = !___nl__bool__21;
#line 285
if(___nl__bool__21){ goto label_98;}
#line 286
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(1004), ___nl__im__16));
#line 286
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(1206), ___nl__im__26));
#line 286
c_rt_lib0clear(&___nl__im__26);
#line 286
c_rt_lib0delete(array0push(&___nl__im__20, ___nl__im__25));
#line 286
c_rt_lib0clear(&___nl__im__25);
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
//clear ___nl__bool__7;
#line 287
c_rt_lib0clear(&___nl__im__8);
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__10);
#line 287
c_rt_lib0clear(&___nl__im__16);
#line 287
//clear ___nl__bool__17;
#line 287
c_rt_lib0clear(&___nl__im__18);
#line 287
c_rt_lib0clear(&___nl__im__19);
#line 287
//clear ___nl__bool__21;
#line 287
return ___nl__im__20;
#line 288
goto label_98;
#line 288
label_98:
;
#line 288
//clear ___nl__bool__21;
#line 288
c_rt_lib0clear(&___nl__im__20);
#line 289
c_rt_lib0move(&___nl__im__19, c_rt_lib0next_iter(___nl__im__19));
#line 289
goto label_65;
#line 289
label_103:
;
#line 290
goto label_817;
#line 290
label_105:
;
#line 290
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(316)));
#line 290
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 291
___nl__bool__29 = c_std_lib0is_array(___nl__im__1);
#line 291
___nl__bool__29 = !___nl__bool__29;
#line 291
___nl__bool__29 = !___nl__bool__29;
#line 291
if(___nl__bool__29){ goto label_135;}
#line 291
c_rt_lib0move(&___nl__im__33, ptd0get_imm_kind(___nl__im__0));
#line 291
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(1233), ___nl__im__33));
#line 291
c_rt_lib0clear(&___nl__im__33);
#line 291
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__32));
#line 291
c_rt_lib0clear(&___nl__im__32);
#line 291
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(1, ___nl__im__31));
#line 291
c_rt_lib0clear(&___nl__im__31);
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__7;
#line 291
c_rt_lib0clear(&___nl__im__8);
#line 291
c_rt_lib0clear(&___nl__im__9);
#line 291
c_rt_lib0clear(&___nl__im__10);
#line 291
c_rt_lib0clear(&___nl__im__16);
#line 291
//clear ___nl__bool__17;
#line 291
c_rt_lib0clear(&___nl__im__18);
#line 291
c_rt_lib0clear(&___nl__im__19);
#line 291
c_rt_lib0clear(&___nl__im__20);
#line 291
c_rt_lib0clear(&___nl__im__27);
#line 291
c_rt_lib0clear(&___nl__im__28);
#line 291
//clear ___nl__bool__29;
#line 291
return ___nl__im__30;
#line 291
goto label_135;
#line 291
label_135:
;
#line 291
//clear ___nl__bool__29;
#line 291
c_rt_lib0clear(&___nl__im__30);
#line 292
___nl__int__34 = c_rt_lib0array_len(___nl__im__1);
#line 292
___nl__int__35 = 0;
#line 292
___nl__int__36 = 1;
#line 292
label_141:
;
#line 292
___nl__int__38 = ___nl__int__35 >= ___nl__int__34;
#line 292
___nl__bool__37 = ___nl__int__38;
#line 292
if(___nl__bool__37){ goto label_190;}
#line 293
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__1, ___nl__int__35));
#line 293
c_rt_lib0move(&___nl__im__39, ptd_priv0try_dynamic_cast(___nl__im__27, ___nl__im__40));
#line 293
c_rt_lib0clear(&___nl__im__40);
#line 294
___nl__int__42 = c_rt_lib0array_len(___nl__im__39);
#line 294
___nl__int__43 = 0;
#line 294
___nl__int__44 = ___nl__int__42 > ___nl__int__43;
#line 294
___nl__bool__41 = ___nl__int__44;
#line 294
//clear ___nl__int__42;
#line 294
//clear ___nl__int__43;
#line 294
//clear ___nl__int__44;
#line 294
___nl__bool__41 = !___nl__bool__41;
#line 294
if(___nl__bool__41){ goto label_185;}
#line 295
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__35));
#line 295
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(1226), ___nl__im__47));
#line 295
c_rt_lib0clear(&___nl__im__47);
#line 295
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(1206), ___nl__im__46));
#line 295
c_rt_lib0clear(&___nl__im__46);
#line 295
c_rt_lib0delete(array0push(&___nl__im__39, ___nl__im__45));
#line 295
c_rt_lib0clear(&___nl__im__45);
#line 296
c_rt_lib0clear(&___nl__im__0);
#line 296
c_rt_lib0clear(&___nl__im__1);
#line 296
//clear ___nl__bool__7;
#line 296
c_rt_lib0clear(&___nl__im__8);
#line 296
c_rt_lib0clear(&___nl__im__9);
#line 296
c_rt_lib0clear(&___nl__im__10);
#line 296
c_rt_lib0clear(&___nl__im__16);
#line 296
//clear ___nl__bool__17;
#line 296
c_rt_lib0clear(&___nl__im__18);
#line 296
c_rt_lib0clear(&___nl__im__19);
#line 296
c_rt_lib0clear(&___nl__im__20);
#line 296
c_rt_lib0clear(&___nl__im__27);
#line 296
c_rt_lib0clear(&___nl__im__28);
#line 296
//clear ___nl__int__34;
#line 296
//clear ___nl__int__35;
#line 296
//clear ___nl__int__36;
#line 296
//clear ___nl__bool__37;
#line 296
//clear ___nl__int__38;
#line 296
//clear ___nl__bool__41;
#line 296
return ___nl__im__39;
#line 297
goto label_185;
#line 297
label_185:
;
#line 297
//clear ___nl__bool__41;
#line 297
c_rt_lib0clear(&___nl__im__39);
#line 298
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 298
goto label_141;
#line 298
label_190:
;
#line 299
goto label_817;
#line 299
label_192:
;
#line 299
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(308)));
#line 299
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 300
___nl__bool__50 = c_std_lib0is_hash(___nl__im__1);
#line 300
___nl__bool__50 = !___nl__bool__50;
#line 300
___nl__bool__50 = !___nl__bool__50;
#line 300
if(___nl__bool__50){ goto label_230;}
#line 300
c_rt_lib0move(&___nl__im__54, ptd0get_imm_kind(___nl__im__0));
#line 300
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_arg(___get_global_string_const(1234), ___nl__im__54));
#line 300
c_rt_lib0clear(&___nl__im__54);
#line 300
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__53));
#line 300
c_rt_lib0clear(&___nl__im__53);
#line 300
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(1, ___nl__im__52));
#line 300
c_rt_lib0clear(&___nl__im__52);
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
//clear ___nl__bool__50;
#line 300
return ___nl__im__51;
#line 300
goto label_230;
#line 300
label_230:
;
#line 300
//clear ___nl__bool__50;
#line 300
c_rt_lib0clear(&___nl__im__51);
#line 301
___nl__int__56 = hash0size(___nl__im__48);
#line 301
___nl__int__57 = hash0size(___nl__im__1);
#line 301
___nl__int__58 = ___nl__int__56 == ___nl__int__57;
#line 301
___nl__bool__55 = ___nl__int__58;
#line 301
//clear ___nl__int__56;
#line 301
//clear ___nl__int__57;
#line 301
//clear ___nl__int__58;
#line 301
___nl__bool__55 = !___nl__bool__55;
#line 301
___nl__bool__55 = !___nl__bool__55;
#line 301
if(___nl__bool__55){ goto label_276;}
#line 301
___nl__int__62 = hash0size(___nl__im__1);
#line 301
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 301
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_arg(___get_global_string_const(1238), ___nl__im__63));
#line 301
//clear ___nl__int__62;
#line 301
c_rt_lib0clear(&___nl__im__63);
#line 301
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__61));
#line 301
c_rt_lib0clear(&___nl__im__61);
#line 301
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(1, ___nl__im__60));
#line 301
c_rt_lib0clear(&___nl__im__60);
#line 301
c_rt_lib0clear(&___nl__im__0);
#line 301
c_rt_lib0clear(&___nl__im__1);
#line 301
//clear ___nl__bool__7;
#line 301
c_rt_lib0clear(&___nl__im__8);
#line 301
c_rt_lib0clear(&___nl__im__9);
#line 301
c_rt_lib0clear(&___nl__im__10);
#line 301
c_rt_lib0clear(&___nl__im__16);
#line 301
//clear ___nl__bool__17;
#line 301
c_rt_lib0clear(&___nl__im__18);
#line 301
c_rt_lib0clear(&___nl__im__19);
#line 301
c_rt_lib0clear(&___nl__im__20);
#line 301
c_rt_lib0clear(&___nl__im__27);
#line 301
c_rt_lib0clear(&___nl__im__28);
#line 301
//clear ___nl__int__34;
#line 301
//clear ___nl__int__35;
#line 301
//clear ___nl__int__36;
#line 301
//clear ___nl__bool__37;
#line 301
//clear ___nl__int__38;
#line 301
c_rt_lib0clear(&___nl__im__39);
#line 301
c_rt_lib0clear(&___nl__im__48);
#line 301
c_rt_lib0clear(&___nl__im__49);
#line 301
//clear ___nl__bool__55;
#line 301
return ___nl__im__59;
#line 301
goto label_276;
#line 301
label_276:
;
#line 301
//clear ___nl__bool__55;
#line 301
c_rt_lib0clear(&___nl__im__59);
#line 302
c_rt_lib0move(&___nl__im__67, c_rt_lib0init_iter(___nl__im__48));
#line 302
label_280:
;
#line 302
___nl__bool__65 = c_rt_lib0is_end_hash(___nl__im__67);
#line 302
if(___nl__bool__65){ goto label_375;}
#line 302
c_rt_lib0move(&___nl__im__64, c_rt_lib0get_key_iter(___nl__im__67));
#line 302
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value(___nl__im__48, ___nl__im__64));
#line 303
___nl__bool__68 = hash0has_key(___nl__im__1, ___nl__im__64);
#line 303
___nl__bool__68 = !___nl__bool__68;
#line 303
___nl__bool__68 = !___nl__bool__68;
#line 303
if(___nl__bool__68){ goto label_322;}
#line 303
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__64));
#line 303
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__71));
#line 303
c_rt_lib0clear(&___nl__im__71);
#line 303
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_mk(1, ___nl__im__70));
#line 303
c_rt_lib0clear(&___nl__im__70);
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
//clear ___nl__bool__7;
#line 303
c_rt_lib0clear(&___nl__im__8);
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 303
c_rt_lib0clear(&___nl__im__10);
#line 303
c_rt_lib0clear(&___nl__im__16);
#line 303
//clear ___nl__bool__17;
#line 303
c_rt_lib0clear(&___nl__im__18);
#line 303
c_rt_lib0clear(&___nl__im__19);
#line 303
c_rt_lib0clear(&___nl__im__20);
#line 303
c_rt_lib0clear(&___nl__im__27);
#line 303
c_rt_lib0clear(&___nl__im__28);
#line 303
//clear ___nl__int__34;
#line 303
//clear ___nl__int__35;
#line 303
//clear ___nl__int__36;
#line 303
//clear ___nl__bool__37;
#line 303
//clear ___nl__int__38;
#line 303
c_rt_lib0clear(&___nl__im__39);
#line 303
c_rt_lib0clear(&___nl__im__48);
#line 303
c_rt_lib0clear(&___nl__im__49);
#line 303
c_rt_lib0clear(&___nl__im__64);
#line 303
//clear ___nl__bool__65;
#line 303
c_rt_lib0clear(&___nl__im__66);
#line 303
c_rt_lib0clear(&___nl__im__67);
#line 303
//clear ___nl__bool__68;
#line 303
return ___nl__im__69;
#line 303
goto label_322;
#line 303
label_322:
;
#line 303
//clear ___nl__bool__68;
#line 303
c_rt_lib0clear(&___nl__im__69);
#line 304
c_rt_lib0move(&___nl__im__73, hash0get_value(___nl__im__1, ___nl__im__64));
#line 304
c_rt_lib0move(&___nl__im__72, ptd_priv0try_dynamic_cast(___nl__im__66, ___nl__im__73));
#line 304
c_rt_lib0clear(&___nl__im__73);
#line 305
___nl__int__75 = c_rt_lib0array_len(___nl__im__72);
#line 305
___nl__int__76 = 0;
#line 305
___nl__int__77 = ___nl__int__75 > ___nl__int__76;
#line 305
___nl__bool__74 = ___nl__int__77;
#line 305
//clear ___nl__int__75;
#line 305
//clear ___nl__int__76;
#line 305
//clear ___nl__int__77;
#line 305
___nl__bool__74 = !___nl__bool__74;
#line 305
if(___nl__bool__74){ goto label_370;}
#line 306
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_string_const(1227), ___nl__im__64));
#line 306
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(1206), ___nl__im__79));
#line 306
c_rt_lib0clear(&___nl__im__79);
#line 306
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__78));
#line 306
c_rt_lib0clear(&___nl__im__78);
#line 307
c_rt_lib0clear(&___nl__im__0);
#line 307
c_rt_lib0clear(&___nl__im__1);
#line 307
//clear ___nl__bool__7;
#line 307
c_rt_lib0clear(&___nl__im__8);
#line 307
c_rt_lib0clear(&___nl__im__9);
#line 307
c_rt_lib0clear(&___nl__im__10);
#line 307
c_rt_lib0clear(&___nl__im__16);
#line 307
//clear ___nl__bool__17;
#line 307
c_rt_lib0clear(&___nl__im__18);
#line 307
c_rt_lib0clear(&___nl__im__19);
#line 307
c_rt_lib0clear(&___nl__im__20);
#line 307
c_rt_lib0clear(&___nl__im__27);
#line 307
c_rt_lib0clear(&___nl__im__28);
#line 307
//clear ___nl__int__34;
#line 307
//clear ___nl__int__35;
#line 307
//clear ___nl__int__36;
#line 307
//clear ___nl__bool__37;
#line 307
//clear ___nl__int__38;
#line 307
c_rt_lib0clear(&___nl__im__39);
#line 307
c_rt_lib0clear(&___nl__im__48);
#line 307
c_rt_lib0clear(&___nl__im__49);
#line 307
c_rt_lib0clear(&___nl__im__64);
#line 307
//clear ___nl__bool__65;
#line 307
c_rt_lib0clear(&___nl__im__66);
#line 307
c_rt_lib0clear(&___nl__im__67);
#line 307
//clear ___nl__bool__74;
#line 307
return ___nl__im__72;
#line 308
goto label_370;
#line 308
label_370:
;
#line 308
//clear ___nl__bool__74;
#line 308
c_rt_lib0clear(&___nl__im__72);
#line 309
c_rt_lib0move(&___nl__im__67, c_rt_lib0next_iter(___nl__im__67));
#line 309
goto label_280;
#line 309
label_375:
;
#line 310
goto label_817;
#line 310
label_377:
;
#line 311
___nl__bool__80 = c_std_lib0is_int(___nl__im__1);
#line 311
___nl__bool__80 = !___nl__bool__80;
#line 311
___nl__bool__80 = !___nl__bool__80;
#line 311
if(___nl__bool__80){ goto label_418;}
#line 311
c_rt_lib0move(&___nl__im__84, ptd0get_imm_kind(___nl__im__0));
#line 311
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_string_const(1235), ___nl__im__84));
#line 311
c_rt_lib0clear(&___nl__im__84);
#line 311
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__83));
#line 311
c_rt_lib0clear(&___nl__im__83);
#line 311
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(1, ___nl__im__82));
#line 311
c_rt_lib0clear(&___nl__im__82);
#line 311
c_rt_lib0clear(&___nl__im__0);
#line 311
c_rt_lib0clear(&___nl__im__1);
#line 311
//clear ___nl__bool__7;
#line 311
c_rt_lib0clear(&___nl__im__8);
#line 311
c_rt_lib0clear(&___nl__im__9);
#line 311
c_rt_lib0clear(&___nl__im__10);
#line 311
c_rt_lib0clear(&___nl__im__16);
#line 311
//clear ___nl__bool__17;
#line 311
c_rt_lib0clear(&___nl__im__18);
#line 311
c_rt_lib0clear(&___nl__im__19);
#line 311
c_rt_lib0clear(&___nl__im__20);
#line 311
c_rt_lib0clear(&___nl__im__27);
#line 311
c_rt_lib0clear(&___nl__im__28);
#line 311
//clear ___nl__int__34;
#line 311
//clear ___nl__int__35;
#line 311
//clear ___nl__int__36;
#line 311
//clear ___nl__bool__37;
#line 311
//clear ___nl__int__38;
#line 311
c_rt_lib0clear(&___nl__im__39);
#line 311
c_rt_lib0clear(&___nl__im__48);
#line 311
c_rt_lib0clear(&___nl__im__49);
#line 311
c_rt_lib0clear(&___nl__im__64);
#line 311
//clear ___nl__bool__65;
#line 311
c_rt_lib0clear(&___nl__im__66);
#line 311
c_rt_lib0clear(&___nl__im__67);
#line 311
c_rt_lib0clear(&___nl__im__72);
#line 311
//clear ___nl__bool__80;
#line 311
return ___nl__im__81;
#line 311
goto label_418;
#line 311
label_418:
;
#line 311
//clear ___nl__bool__80;
#line 311
c_rt_lib0clear(&___nl__im__81);
#line 312
goto label_817;
#line 312
label_422:
;
#line 313
___nl__bool__85 = c_std_lib0is_string(___nl__im__1);
#line 313
___nl__bool__85 = !___nl__bool__85;
#line 313
___nl__bool__85 = !___nl__bool__85;
#line 313
if(___nl__bool__85){ goto label_463;}
#line 313
c_rt_lib0move(&___nl__im__89, ptd0get_imm_kind(___nl__im__0));
#line 313
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_string_const(1236), ___nl__im__89));
#line 313
c_rt_lib0clear(&___nl__im__89);
#line 313
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__88));
#line 313
c_rt_lib0clear(&___nl__im__88);
#line 313
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(1, ___nl__im__87));
#line 313
c_rt_lib0clear(&___nl__im__87);
#line 313
c_rt_lib0clear(&___nl__im__0);
#line 313
c_rt_lib0clear(&___nl__im__1);
#line 313
//clear ___nl__bool__7;
#line 313
c_rt_lib0clear(&___nl__im__8);
#line 313
c_rt_lib0clear(&___nl__im__9);
#line 313
c_rt_lib0clear(&___nl__im__10);
#line 313
c_rt_lib0clear(&___nl__im__16);
#line 313
//clear ___nl__bool__17;
#line 313
c_rt_lib0clear(&___nl__im__18);
#line 313
c_rt_lib0clear(&___nl__im__19);
#line 313
c_rt_lib0clear(&___nl__im__20);
#line 313
c_rt_lib0clear(&___nl__im__27);
#line 313
c_rt_lib0clear(&___nl__im__28);
#line 313
//clear ___nl__int__34;
#line 313
//clear ___nl__int__35;
#line 313
//clear ___nl__int__36;
#line 313
//clear ___nl__bool__37;
#line 313
//clear ___nl__int__38;
#line 313
c_rt_lib0clear(&___nl__im__39);
#line 313
c_rt_lib0clear(&___nl__im__48);
#line 313
c_rt_lib0clear(&___nl__im__49);
#line 313
c_rt_lib0clear(&___nl__im__64);
#line 313
//clear ___nl__bool__65;
#line 313
c_rt_lib0clear(&___nl__im__66);
#line 313
c_rt_lib0clear(&___nl__im__67);
#line 313
c_rt_lib0clear(&___nl__im__72);
#line 313
//clear ___nl__bool__85;
#line 313
return ___nl__im__86;
#line 313
goto label_463;
#line 313
label_463:
;
#line 313
//clear ___nl__bool__85;
#line 313
c_rt_lib0clear(&___nl__im__86);
#line 314
goto label_817;
#line 314
label_467:
;
#line 314
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(317)));
#line 314
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 315
___nl__bool__92 = c_std_lib0is_variant(___nl__im__1);
#line 315
___nl__bool__92 = !___nl__bool__92;
#line 315
___nl__bool__92 = !___nl__bool__92;
#line 315
if(___nl__bool__92){ goto label_512;}
#line 315
c_rt_lib0move(&___nl__im__96, ptd0get_imm_kind(___nl__im__0));
#line 315
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_arg(___get_global_string_const(1237), ___nl__im__96));
#line 315
c_rt_lib0clear(&___nl__im__96);
#line 315
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__95));
#line 315
c_rt_lib0clear(&___nl__im__95);
#line 315
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_mk(1, ___nl__im__94));
#line 315
c_rt_lib0clear(&___nl__im__94);
#line 315
c_rt_lib0clear(&___nl__im__0);
#line 315
c_rt_lib0clear(&___nl__im__1);
#line 315
//clear ___nl__bool__7;
#line 315
c_rt_lib0clear(&___nl__im__8);
#line 315
c_rt_lib0clear(&___nl__im__9);
#line 315
c_rt_lib0clear(&___nl__im__10);
#line 315
c_rt_lib0clear(&___nl__im__16);
#line 315
//clear ___nl__bool__17;
#line 315
c_rt_lib0clear(&___nl__im__18);
#line 315
c_rt_lib0clear(&___nl__im__19);
#line 315
c_rt_lib0clear(&___nl__im__20);
#line 315
c_rt_lib0clear(&___nl__im__27);
#line 315
c_rt_lib0clear(&___nl__im__28);
#line 315
//clear ___nl__int__34;
#line 315
//clear ___nl__int__35;
#line 315
//clear ___nl__int__36;
#line 315
//clear ___nl__bool__37;
#line 315
//clear ___nl__int__38;
#line 315
c_rt_lib0clear(&___nl__im__39);
#line 315
c_rt_lib0clear(&___nl__im__48);
#line 315
c_rt_lib0clear(&___nl__im__49);
#line 315
c_rt_lib0clear(&___nl__im__64);
#line 315
//clear ___nl__bool__65;
#line 315
c_rt_lib0clear(&___nl__im__66);
#line 315
c_rt_lib0clear(&___nl__im__67);
#line 315
c_rt_lib0clear(&___nl__im__72);
#line 315
c_rt_lib0clear(&___nl__im__90);
#line 315
c_rt_lib0clear(&___nl__im__91);
#line 315
//clear ___nl__bool__92;
#line 315
return ___nl__im__93;
#line 315
goto label_512;
#line 315
label_512:
;
#line 315
//clear ___nl__bool__92;
#line 315
c_rt_lib0clear(&___nl__im__93);
#line 316
c_rt_lib0move(&___nl__im__97, ov0get_element(___nl__im__1));
#line 317
___nl__bool__98 = hash0has_key(___nl__im__90, ___nl__im__97);
#line 317
___nl__bool__98 = !___nl__bool__98;
#line 317
___nl__bool__98 = !___nl__bool__98;
#line 317
if(___nl__bool__98){ goto label_561;}
#line 317
c_rt_lib0move(&___nl__im__103,___get_global_string_const(36));
#line 317
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__97, ___nl__im__103));
#line 317
c_rt_lib0clear(&___nl__im__103);
#line 317
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_string_const(1240), ___nl__im__102));
#line 317
c_rt_lib0clear(&___nl__im__102);
#line 317
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__101));
#line 317
c_rt_lib0clear(&___nl__im__101);
#line 317
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(1, ___nl__im__100));
#line 317
c_rt_lib0clear(&___nl__im__100);
#line 317
c_rt_lib0clear(&___nl__im__0);
#line 317
c_rt_lib0clear(&___nl__im__1);
#line 317
//clear ___nl__bool__7;
#line 317
c_rt_lib0clear(&___nl__im__8);
#line 317
c_rt_lib0clear(&___nl__im__9);
#line 317
c_rt_lib0clear(&___nl__im__10);
#line 317
c_rt_lib0clear(&___nl__im__16);
#line 317
//clear ___nl__bool__17;
#line 317
c_rt_lib0clear(&___nl__im__18);
#line 317
c_rt_lib0clear(&___nl__im__19);
#line 317
c_rt_lib0clear(&___nl__im__20);
#line 317
c_rt_lib0clear(&___nl__im__27);
#line 317
c_rt_lib0clear(&___nl__im__28);
#line 317
//clear ___nl__int__34;
#line 317
//clear ___nl__int__35;
#line 317
//clear ___nl__int__36;
#line 317
//clear ___nl__bool__37;
#line 317
//clear ___nl__int__38;
#line 317
c_rt_lib0clear(&___nl__im__39);
#line 317
c_rt_lib0clear(&___nl__im__48);
#line 317
c_rt_lib0clear(&___nl__im__49);
#line 317
c_rt_lib0clear(&___nl__im__64);
#line 317
//clear ___nl__bool__65;
#line 317
c_rt_lib0clear(&___nl__im__66);
#line 317
c_rt_lib0clear(&___nl__im__67);
#line 317
c_rt_lib0clear(&___nl__im__72);
#line 317
c_rt_lib0clear(&___nl__im__90);
#line 317
c_rt_lib0clear(&___nl__im__91);
#line 317
c_rt_lib0clear(&___nl__im__97);
#line 317
//clear ___nl__bool__98;
#line 317
return ___nl__im__99;
#line 317
goto label_561;
#line 317
label_561:
;
#line 317
//clear ___nl__bool__98;
#line 317
c_rt_lib0clear(&___nl__im__99);
#line 318
c_rt_lib0move(&___nl__im__104, hash0get_value(___nl__im__90, ___nl__im__97));
#line 319
___nl__bool__105 = c_rt_lib0priv_is(___nl__im__104, ___get_global_string_const(27));
#line 319
if(___nl__bool__105){ goto label_572;}
#line 326
___nl__bool__105 = c_rt_lib0priv_is(___nl__im__104, ___get_global_string_const(28));
#line 326
if(___nl__bool__105){ goto label_691;}
#line 326
c_rt_lib0move(&___nl__im__106,___get_global_string_const(15));
#line 326
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_mk(2, ___nl__im__106, ___nl__im__104));
#line 326
nl_die_arg(___nl__im__106);
#line 319
label_572:
;
#line 319
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__104, ___get_global_string_const(27)));
#line 319
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 320
c_rt_lib0move(&___nl__im__110, ov0has_value(___nl__im__1));
#line 320
___nl__bool__109 = c_rt_lib0check_true_native(___nl__im__110);
#line 320
c_rt_lib0clear(&___nl__im__110);
#line 320
___nl__bool__109 = !___nl__bool__109;
#line 320
___nl__bool__109 = !___nl__bool__109;
#line 320
if(___nl__bool__109){ goto label_627;}
#line 320
c_rt_lib0move(&___nl__im__115,___get_global_string_const(36));
#line 320
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__97, ___nl__im__115));
#line 320
c_rt_lib0clear(&___nl__im__115);
#line 320
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_arg(___get_global_string_const(1242), ___nl__im__114));
#line 320
c_rt_lib0clear(&___nl__im__114);
#line 320
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__113));
#line 320
c_rt_lib0clear(&___nl__im__113);
#line 320
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_mk(1, ___nl__im__112));
#line 320
c_rt_lib0clear(&___nl__im__112);
#line 320
c_rt_lib0clear(&___nl__im__0);
#line 320
c_rt_lib0clear(&___nl__im__1);
#line 320
//clear ___nl__bool__7;
#line 320
c_rt_lib0clear(&___nl__im__8);
#line 320
c_rt_lib0clear(&___nl__im__9);
#line 320
c_rt_lib0clear(&___nl__im__10);
#line 320
c_rt_lib0clear(&___nl__im__16);
#line 320
//clear ___nl__bool__17;
#line 320
c_rt_lib0clear(&___nl__im__18);
#line 320
c_rt_lib0clear(&___nl__im__19);
#line 320
c_rt_lib0clear(&___nl__im__20);
#line 320
c_rt_lib0clear(&___nl__im__27);
#line 320
c_rt_lib0clear(&___nl__im__28);
#line 320
//clear ___nl__int__34;
#line 320
//clear ___nl__int__35;
#line 320
//clear ___nl__int__36;
#line 320
//clear ___nl__bool__37;
#line 320
//clear ___nl__int__38;
#line 320
c_rt_lib0clear(&___nl__im__39);
#line 320
c_rt_lib0clear(&___nl__im__48);
#line 320
c_rt_lib0clear(&___nl__im__49);
#line 320
c_rt_lib0clear(&___nl__im__64);
#line 320
//clear ___nl__bool__65;
#line 320
c_rt_lib0clear(&___nl__im__66);
#line 320
c_rt_lib0clear(&___nl__im__67);
#line 320
c_rt_lib0clear(&___nl__im__72);
#line 320
c_rt_lib0clear(&___nl__im__90);
#line 320
c_rt_lib0clear(&___nl__im__91);
#line 320
c_rt_lib0clear(&___nl__im__97);
#line 320
c_rt_lib0clear(&___nl__im__104);
#line 320
//clear ___nl__bool__105;
#line 320
c_rt_lib0clear(&___nl__im__106);
#line 320
c_rt_lib0clear(&___nl__im__107);
#line 320
c_rt_lib0clear(&___nl__im__108);
#line 320
//clear ___nl__bool__109;
#line 320
return ___nl__im__111;
#line 320
goto label_627;
#line 320
label_627:
;
#line 320
//clear ___nl__bool__109;
#line 320
c_rt_lib0clear(&___nl__im__111);
#line 321
c_rt_lib0move(&___nl__im__117, ov0get_value(___nl__im__1));
#line 321
c_rt_lib0move(&___nl__im__116, ptd_priv0try_dynamic_cast(___nl__im__107, ___nl__im__117));
#line 321
c_rt_lib0clear(&___nl__im__117);
#line 322
___nl__int__119 = c_rt_lib0array_len(___nl__im__116);
#line 322
___nl__int__120 = 0;
#line 322
___nl__int__121 = ___nl__int__119 > ___nl__int__120;
#line 322
___nl__bool__118 = ___nl__int__121;
#line 322
//clear ___nl__int__119;
#line 322
//clear ___nl__int__120;
#line 322
//clear ___nl__int__121;
#line 322
___nl__bool__118 = !___nl__bool__118;
#line 322
if(___nl__bool__118){ goto label_688;}
#line 323
c_rt_lib0move(&___nl__im__125,___get_global_string_const(36));
#line 323
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__97, ___nl__im__125));
#line 323
c_rt_lib0clear(&___nl__im__125);
#line 323
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(1228), ___nl__im__124));
#line 323
c_rt_lib0clear(&___nl__im__124);
#line 323
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_arg(___get_global_string_const(1206), ___nl__im__123));
#line 323
c_rt_lib0clear(&___nl__im__123);
#line 323
c_rt_lib0delete(array0push(&___nl__im__116, ___nl__im__122));
#line 323
c_rt_lib0clear(&___nl__im__122);
#line 324
c_rt_lib0clear(&___nl__im__0);
#line 324
c_rt_lib0clear(&___nl__im__1);
#line 324
//clear ___nl__bool__7;
#line 324
c_rt_lib0clear(&___nl__im__8);
#line 324
c_rt_lib0clear(&___nl__im__9);
#line 324
c_rt_lib0clear(&___nl__im__10);
#line 324
c_rt_lib0clear(&___nl__im__16);
#line 324
//clear ___nl__bool__17;
#line 324
c_rt_lib0clear(&___nl__im__18);
#line 324
c_rt_lib0clear(&___nl__im__19);
#line 324
c_rt_lib0clear(&___nl__im__20);
#line 324
c_rt_lib0clear(&___nl__im__27);
#line 324
c_rt_lib0clear(&___nl__im__28);
#line 324
//clear ___nl__int__34;
#line 324
//clear ___nl__int__35;
#line 324
//clear ___nl__int__36;
#line 324
//clear ___nl__bool__37;
#line 324
//clear ___nl__int__38;
#line 324
c_rt_lib0clear(&___nl__im__39);
#line 324
c_rt_lib0clear(&___nl__im__48);
#line 324
c_rt_lib0clear(&___nl__im__49);
#line 324
c_rt_lib0clear(&___nl__im__64);
#line 324
//clear ___nl__bool__65;
#line 324
c_rt_lib0clear(&___nl__im__66);
#line 324
c_rt_lib0clear(&___nl__im__67);
#line 324
c_rt_lib0clear(&___nl__im__72);
#line 324
c_rt_lib0clear(&___nl__im__90);
#line 324
c_rt_lib0clear(&___nl__im__91);
#line 324
c_rt_lib0clear(&___nl__im__97);
#line 324
c_rt_lib0clear(&___nl__im__104);
#line 324
//clear ___nl__bool__105;
#line 324
c_rt_lib0clear(&___nl__im__106);
#line 324
c_rt_lib0clear(&___nl__im__107);
#line 324
c_rt_lib0clear(&___nl__im__108);
#line 324
//clear ___nl__bool__118;
#line 324
return ___nl__im__116;
#line 325
goto label_688;
#line 325
label_688:
;
#line 325
//clear ___nl__bool__118;
#line 326
goto label_748;
#line 326
label_691:
;
#line 327
c_rt_lib0move(&___nl__im__127, ov0has_value(___nl__im__1));
#line 327
___nl__bool__126 = c_rt_lib0check_true_native(___nl__im__127);
#line 327
c_rt_lib0clear(&___nl__im__127);
#line 327
___nl__bool__126 = !___nl__bool__126;
#line 327
if(___nl__bool__126){ goto label_744;}
#line 327
c_rt_lib0move(&___nl__im__132,___get_global_string_const(36));
#line 327
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__97, ___nl__im__132));
#line 327
c_rt_lib0clear(&___nl__im__132);
#line 327
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(1241), ___nl__im__131));
#line 327
c_rt_lib0clear(&___nl__im__131);
#line 327
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_arg(___get_global_string_const(122), ___nl__im__130));
#line 327
c_rt_lib0clear(&___nl__im__130);
#line 327
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_mk(1, ___nl__im__129));
#line 327
c_rt_lib0clear(&___nl__im__129);
#line 327
c_rt_lib0clear(&___nl__im__0);
#line 327
c_rt_lib0clear(&___nl__im__1);
#line 327
//clear ___nl__bool__7;
#line 327
c_rt_lib0clear(&___nl__im__8);
#line 327
c_rt_lib0clear(&___nl__im__9);
#line 327
c_rt_lib0clear(&___nl__im__10);
#line 327
c_rt_lib0clear(&___nl__im__16);
#line 327
//clear ___nl__bool__17;
#line 327
c_rt_lib0clear(&___nl__im__18);
#line 327
c_rt_lib0clear(&___nl__im__19);
#line 327
c_rt_lib0clear(&___nl__im__20);
#line 327
c_rt_lib0clear(&___nl__im__27);
#line 327
c_rt_lib0clear(&___nl__im__28);
#line 327
//clear ___nl__int__34;
#line 327
//clear ___nl__int__35;
#line 327
//clear ___nl__int__36;
#line 327
//clear ___nl__bool__37;
#line 327
//clear ___nl__int__38;
#line 327
c_rt_lib0clear(&___nl__im__39);
#line 327
c_rt_lib0clear(&___nl__im__48);
#line 327
c_rt_lib0clear(&___nl__im__49);
#line 327
c_rt_lib0clear(&___nl__im__64);
#line 327
//clear ___nl__bool__65;
#line 327
c_rt_lib0clear(&___nl__im__66);
#line 327
c_rt_lib0clear(&___nl__im__67);
#line 327
c_rt_lib0clear(&___nl__im__72);
#line 327
c_rt_lib0clear(&___nl__im__90);
#line 327
c_rt_lib0clear(&___nl__im__91);
#line 327
c_rt_lib0clear(&___nl__im__97);
#line 327
c_rt_lib0clear(&___nl__im__104);
#line 327
//clear ___nl__bool__105;
#line 327
c_rt_lib0clear(&___nl__im__106);
#line 327
c_rt_lib0clear(&___nl__im__107);
#line 327
c_rt_lib0clear(&___nl__im__108);
#line 327
c_rt_lib0clear(&___nl__im__116);
#line 327
//clear ___nl__bool__126;
#line 327
return ___nl__im__128;
#line 327
goto label_744;
#line 327
label_744:
;
#line 327
//clear ___nl__bool__126;
#line 327
c_rt_lib0clear(&___nl__im__128);
#line 328
goto label_748;
#line 328
label_748:
;
#line 329
goto label_817;
#line 329
label_750:
;
#line 330
goto label_817;
#line 330
label_752:
;
#line 330
c_rt_lib0move(&___nl__im__134, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(39)));
#line 330
c_rt_lib0copy(&___nl__im__133, ___nl__im__134);
#line 331
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(0));
#line 331
c_rt_lib0move(&___nl__im__136, ptd_priv0exec(___nl__im__0, ___nl__im__137));
#line 331
c_rt_lib0clear(&___nl__im__137);
#line 331
c_rt_lib0move(&___nl__im__135, ptd_priv0try_dynamic_cast(___nl__im__136, ___nl__im__1));
#line 331
c_rt_lib0clear(&___nl__im__136);
#line 332
___nl__int__139 = c_rt_lib0array_len(___nl__im__135);
#line 332
___nl__int__140 = 0;
#line 332
___nl__int__141 = ___nl__int__139 > ___nl__int__140;
#line 332
___nl__bool__138 = ___nl__int__141;
#line 332
//clear ___nl__int__139;
#line 332
//clear ___nl__int__140;
#line 332
//clear ___nl__int__141;
#line 332
___nl__bool__138 = !___nl__bool__138;
#line 332
if(___nl__bool__138){ goto label_814;}
#line 333
c_rt_lib0move(&___nl__im__143, c_rt_lib0ov_mk_arg(___get_global_string_const(1229), ___nl__im__133));
#line 333
c_rt_lib0move(&___nl__im__142, c_rt_lib0ov_mk_arg(___get_global_string_const(1206), ___nl__im__143));
#line 333
c_rt_lib0clear(&___nl__im__143);
#line 333
c_rt_lib0delete(array0push(&___nl__im__135, ___nl__im__142));
#line 333
c_rt_lib0clear(&___nl__im__142);
#line 334
c_rt_lib0clear(&___nl__im__0);
#line 334
c_rt_lib0clear(&___nl__im__1);
#line 334
//clear ___nl__bool__7;
#line 334
c_rt_lib0clear(&___nl__im__8);
#line 334
c_rt_lib0clear(&___nl__im__9);
#line 334
c_rt_lib0clear(&___nl__im__10);
#line 334
c_rt_lib0clear(&___nl__im__16);
#line 334
//clear ___nl__bool__17;
#line 334
c_rt_lib0clear(&___nl__im__18);
#line 334
c_rt_lib0clear(&___nl__im__19);
#line 334
c_rt_lib0clear(&___nl__im__20);
#line 334
c_rt_lib0clear(&___nl__im__27);
#line 334
c_rt_lib0clear(&___nl__im__28);
#line 334
//clear ___nl__int__34;
#line 334
//clear ___nl__int__35;
#line 334
//clear ___nl__int__36;
#line 334
//clear ___nl__bool__37;
#line 334
//clear ___nl__int__38;
#line 334
c_rt_lib0clear(&___nl__im__39);
#line 334
c_rt_lib0clear(&___nl__im__48);
#line 334
c_rt_lib0clear(&___nl__im__49);
#line 334
c_rt_lib0clear(&___nl__im__64);
#line 334
//clear ___nl__bool__65;
#line 334
c_rt_lib0clear(&___nl__im__66);
#line 334
c_rt_lib0clear(&___nl__im__67);
#line 334
c_rt_lib0clear(&___nl__im__72);
#line 334
c_rt_lib0clear(&___nl__im__90);
#line 334
c_rt_lib0clear(&___nl__im__91);
#line 334
c_rt_lib0clear(&___nl__im__97);
#line 334
c_rt_lib0clear(&___nl__im__104);
#line 334
//clear ___nl__bool__105;
#line 334
c_rt_lib0clear(&___nl__im__106);
#line 334
c_rt_lib0clear(&___nl__im__107);
#line 334
c_rt_lib0clear(&___nl__im__108);
#line 334
c_rt_lib0clear(&___nl__im__116);
#line 334
c_rt_lib0clear(&___nl__im__133);
#line 334
c_rt_lib0clear(&___nl__im__134);
#line 334
//clear ___nl__bool__138;
#line 334
return ___nl__im__135;
#line 335
goto label_814;
#line 335
label_814:
;
#line 335
//clear ___nl__bool__138;
#line 336
goto label_817;
#line 336
label_817:
;
#line 337
c_rt_lib0move(&___nl__im__144, c_rt_lib0array_mk(0));
#line 337
c_rt_lib0clear(&___nl__im__0);
#line 337
c_rt_lib0clear(&___nl__im__1);
#line 337
//clear ___nl__bool__7;
#line 337
c_rt_lib0clear(&___nl__im__8);
#line 337
c_rt_lib0clear(&___nl__im__9);
#line 337
c_rt_lib0clear(&___nl__im__10);
#line 337
c_rt_lib0clear(&___nl__im__16);
#line 337
//clear ___nl__bool__17;
#line 337
c_rt_lib0clear(&___nl__im__18);
#line 337
c_rt_lib0clear(&___nl__im__19);
#line 337
c_rt_lib0clear(&___nl__im__20);
#line 337
c_rt_lib0clear(&___nl__im__27);
#line 337
c_rt_lib0clear(&___nl__im__28);
#line 337
//clear ___nl__int__34;
#line 337
//clear ___nl__int__35;
#line 337
//clear ___nl__int__36;
#line 337
//clear ___nl__bool__37;
#line 337
//clear ___nl__int__38;
#line 337
c_rt_lib0clear(&___nl__im__39);
#line 337
c_rt_lib0clear(&___nl__im__48);
#line 337
c_rt_lib0clear(&___nl__im__49);
#line 337
c_rt_lib0clear(&___nl__im__64);
#line 337
//clear ___nl__bool__65;
#line 337
c_rt_lib0clear(&___nl__im__66);
#line 337
c_rt_lib0clear(&___nl__im__67);
#line 337
c_rt_lib0clear(&___nl__im__72);
#line 337
c_rt_lib0clear(&___nl__im__90);
#line 337
c_rt_lib0clear(&___nl__im__91);
#line 337
c_rt_lib0clear(&___nl__im__97);
#line 337
c_rt_lib0clear(&___nl__im__104);
#line 337
//clear ___nl__bool__105;
#line 337
c_rt_lib0clear(&___nl__im__106);
#line 337
c_rt_lib0clear(&___nl__im__107);
#line 337
c_rt_lib0clear(&___nl__im__108);
#line 337
c_rt_lib0clear(&___nl__im__116);
#line 337
c_rt_lib0clear(&___nl__im__133);
#line 337
c_rt_lib0clear(&___nl__im__134);
#line 337
c_rt_lib0clear(&___nl__im__135);
#line 337
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
#line 341
c_rt_lib0move(&___nl__im__5, ptd0ptd_reconstruct_nl_with_args(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
c_rt_lib0clear(&___nl__im__2);
#line 341
c_rt_lib0clear(&___nl__im__3);
#line 341
c_rt_lib0clear(&___nl__im__4);
#line 341
return ___nl__im__5;
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
c_rt_lib0clear(&___nl__im__2);
#line 341
c_rt_lib0clear(&___nl__im__3);
#line 341
c_rt_lib0clear(&___nl__im__4);
#line 341
c_rt_lib0clear(&___nl__im__5);
#line 341
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
#line 345
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__2));
#line 346
c_rt_lib0move(&___nl__im__8, ptd0ptd_im());
#line 346
c_rt_lib0move(&___nl__im__7, ptd0arr(___nl__im__8));
#line 346
c_rt_lib0clear(&___nl__im__8);
#line 346
c_rt_lib0move(&___nl__im__6, ptd0ensure(___nl__im__7, ___nl__im__4));
#line 346
c_rt_lib0clear(&___nl__im__7);
#line 346
c_rt_lib0delete(array0append(&___nl__im__5, ___nl__im__6));
#line 346
c_rt_lib0clear(&___nl__im__6);
#line 347
c_rt_lib0move(&___nl__im__9, ptd_priv0reconstruct(___nl__im__0, ___nl__im__1, ___nl__im__3, ___nl__im__5));
#line 347
c_rt_lib0clear(&___nl__im__0);
#line 347
c_rt_lib0clear(&___nl__im__1);
#line 347
c_rt_lib0clear(&___nl__im__2);
#line 347
c_rt_lib0clear(&___nl__im__3);
#line 347
c_rt_lib0clear(&___nl__im__4);
#line 347
c_rt_lib0clear(&___nl__im__5);
#line 347
return ___nl__im__9;
#line 347
c_rt_lib0clear(&___nl__im__0);
#line 347
c_rt_lib0clear(&___nl__im__1);
#line 347
c_rt_lib0clear(&___nl__im__2);
#line 347
c_rt_lib0clear(&___nl__im__3);
#line 347
c_rt_lib0clear(&___nl__im__4);
#line 347
c_rt_lib0clear(&___nl__im__5);
#line 347
c_rt_lib0clear(&___nl__im__9);
#line 347
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
#line 354
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(310));
#line 354
if(___nl__bool__4){ goto label_21;}
#line 362
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(308));
#line 362
if(___nl__bool__4){ goto label_79;}
#line 370
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(316));
#line 370
if(___nl__bool__4){ goto label_155;}
#line 378
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(317));
#line 378
if(___nl__bool__4){ goto label_256;}
#line 387
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(289));
#line 387
if(___nl__bool__4){ goto label_409;}
#line 389
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(287));
#line 389
if(___nl__bool__4){ goto label_455;}
#line 391
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1203));
#line 391
if(___nl__bool__4){ goto label_502;}
#line 393
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(288));
#line 393
if(___nl__bool__4){ goto label_550;}
#line 395
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(39));
#line 395
if(___nl__bool__4){ goto label_599;}
#line 395
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 395
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__1));
#line 395
nl_die_arg(___nl__im__5);
#line 354
label_21:
;
#line 354
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(310)));
#line 354
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 355
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 356
c_rt_lib0move(&___nl__im__12, c_rt_lib0init_iter(___nl__im__0));
#line 356
label_26:
;
#line 356
___nl__bool__10 = c_rt_lib0is_end_hash(___nl__im__12);
#line 356
if(___nl__bool__10){ goto label_61;}
#line 356
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_key_iter(___nl__im__12));
#line 356
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__9));
#line 357
c_rt_lib0move(&___nl__im__14, hash0get_value(___nl__im__6, ___nl__im__9));
#line 357
c_rt_lib0move(&___nl__im__13, ptd_priv0reconstruct(___nl__im__11, ___nl__im__14, ___nl__im__2, ___nl__im__3));
#line 357
c_rt_lib0clear(&___nl__im__14);
#line 358
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(1243));
#line 358
___nl__bool__15 = !___nl__bool__15;
#line 358
if(___nl__bool__15){ goto label_53;}
#line 358
c_rt_lib0clear(&___nl__im__0);
#line 358
c_rt_lib0clear(&___nl__im__1);
#line 358
c_rt_lib0clear(&___nl__im__2);
#line 358
c_rt_lib0clear(&___nl__im__3);
#line 358
//clear ___nl__bool__4;
#line 358
c_rt_lib0clear(&___nl__im__5);
#line 358
c_rt_lib0clear(&___nl__im__6);
#line 358
c_rt_lib0clear(&___nl__im__7);
#line 358
c_rt_lib0clear(&___nl__im__8);
#line 358
c_rt_lib0clear(&___nl__im__9);
#line 358
//clear ___nl__bool__10;
#line 358
c_rt_lib0clear(&___nl__im__11);
#line 358
c_rt_lib0clear(&___nl__im__12);
#line 358
//clear ___nl__bool__15;
#line 358
return ___nl__im__13;
#line 358
goto label_53;
#line 358
label_53:
;
#line 358
//clear ___nl__bool__15;
#line 359
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(1244)));
#line 359
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__9, ___nl__im__16));
#line 359
c_rt_lib0clear(&___nl__im__16);
#line 359
c_rt_lib0clear(&___nl__im__13);
#line 360
c_rt_lib0move(&___nl__im__12, c_rt_lib0next_iter(___nl__im__12));
#line 360
goto label_26;
#line 360
label_61:
;
#line 361
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__8));
#line 361
c_rt_lib0clear(&___nl__im__0);
#line 361
c_rt_lib0clear(&___nl__im__1);
#line 361
c_rt_lib0clear(&___nl__im__2);
#line 361
c_rt_lib0clear(&___nl__im__3);
#line 361
//clear ___nl__bool__4;
#line 361
c_rt_lib0clear(&___nl__im__5);
#line 361
c_rt_lib0clear(&___nl__im__6);
#line 361
c_rt_lib0clear(&___nl__im__7);
#line 361
c_rt_lib0clear(&___nl__im__8);
#line 361
c_rt_lib0clear(&___nl__im__9);
#line 361
//clear ___nl__bool__10;
#line 361
c_rt_lib0clear(&___nl__im__11);
#line 361
c_rt_lib0clear(&___nl__im__12);
#line 361
c_rt_lib0clear(&___nl__im__13);
#line 361
return ___nl__im__17;
#line 362
goto label_805;
#line 362
label_79:
;
#line 362
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(308)));
#line 362
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 363
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 364
c_rt_lib0move(&___nl__im__24, c_rt_lib0init_iter(___nl__im__0));
#line 364
label_84:
;
#line 364
___nl__bool__22 = c_rt_lib0is_end_hash(___nl__im__24);
#line 364
if(___nl__bool__22){ goto label_128;}
#line 364
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_key_iter(___nl__im__24));
#line 364
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__21));
#line 365
c_rt_lib0move(&___nl__im__26, hash0get_value(___nl__im__18, ___nl__im__21));
#line 365
c_rt_lib0move(&___nl__im__25, ptd_priv0reconstruct(___nl__im__23, ___nl__im__26, ___nl__im__2, ___nl__im__3));
#line 365
c_rt_lib0clear(&___nl__im__26);
#line 366
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(1243));
#line 366
___nl__bool__27 = !___nl__bool__27;
#line 366
if(___nl__bool__27){ goto label_120;}
#line 366
c_rt_lib0clear(&___nl__im__0);
#line 366
c_rt_lib0clear(&___nl__im__1);
#line 366
c_rt_lib0clear(&___nl__im__2);
#line 366
c_rt_lib0clear(&___nl__im__3);
#line 366
//clear ___nl__bool__4;
#line 366
c_rt_lib0clear(&___nl__im__5);
#line 366
c_rt_lib0clear(&___nl__im__6);
#line 366
c_rt_lib0clear(&___nl__im__7);
#line 366
c_rt_lib0clear(&___nl__im__8);
#line 366
c_rt_lib0clear(&___nl__im__9);
#line 366
//clear ___nl__bool__10;
#line 366
c_rt_lib0clear(&___nl__im__11);
#line 366
c_rt_lib0clear(&___nl__im__12);
#line 366
c_rt_lib0clear(&___nl__im__13);
#line 366
c_rt_lib0clear(&___nl__im__17);
#line 366
c_rt_lib0clear(&___nl__im__18);
#line 366
c_rt_lib0clear(&___nl__im__19);
#line 366
c_rt_lib0clear(&___nl__im__20);
#line 366
c_rt_lib0clear(&___nl__im__21);
#line 366
//clear ___nl__bool__22;
#line 366
c_rt_lib0clear(&___nl__im__23);
#line 366
c_rt_lib0clear(&___nl__im__24);
#line 366
//clear ___nl__bool__27;
#line 366
return ___nl__im__25;
#line 366
goto label_120;
#line 366
label_120:
;
#line 366
//clear ___nl__bool__27;
#line 367
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(1244)));
#line 367
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__21, ___nl__im__28));
#line 367
c_rt_lib0clear(&___nl__im__28);
#line 367
c_rt_lib0clear(&___nl__im__25);
#line 368
c_rt_lib0move(&___nl__im__24, c_rt_lib0next_iter(___nl__im__24));
#line 368
goto label_84;
#line 368
label_128:
;
#line 369
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__20));
#line 369
c_rt_lib0clear(&___nl__im__0);
#line 369
c_rt_lib0clear(&___nl__im__1);
#line 369
c_rt_lib0clear(&___nl__im__2);
#line 369
c_rt_lib0clear(&___nl__im__3);
#line 369
//clear ___nl__bool__4;
#line 369
c_rt_lib0clear(&___nl__im__5);
#line 369
c_rt_lib0clear(&___nl__im__6);
#line 369
c_rt_lib0clear(&___nl__im__7);
#line 369
c_rt_lib0clear(&___nl__im__8);
#line 369
c_rt_lib0clear(&___nl__im__9);
#line 369
//clear ___nl__bool__10;
#line 369
c_rt_lib0clear(&___nl__im__11);
#line 369
c_rt_lib0clear(&___nl__im__12);
#line 369
c_rt_lib0clear(&___nl__im__13);
#line 369
c_rt_lib0clear(&___nl__im__17);
#line 369
c_rt_lib0clear(&___nl__im__18);
#line 369
c_rt_lib0clear(&___nl__im__19);
#line 369
c_rt_lib0clear(&___nl__im__20);
#line 369
c_rt_lib0clear(&___nl__im__21);
#line 369
//clear ___nl__bool__22;
#line 369
c_rt_lib0clear(&___nl__im__23);
#line 369
c_rt_lib0clear(&___nl__im__24);
#line 369
c_rt_lib0clear(&___nl__im__25);
#line 369
return ___nl__im__29;
#line 370
goto label_805;
#line 370
label_155:
;
#line 370
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(316)));
#line 370
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 371
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 372
___nl__int__34 = 0;
#line 372
___nl__int__35 = 1;
#line 372
___nl__int__36 = c_rt_lib0array_len(___nl__im__0);
#line 372
label_162:
;
#line 372
___nl__int__38 = ___nl__int__34 >= ___nl__int__36;
#line 372
___nl__bool__37 = ___nl__int__38;
#line 372
if(___nl__bool__37){ goto label_217;}
#line 372
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_get(___nl__im__0, ___nl__int__34));
#line 372
c_rt_lib0copy(&___nl__im__33, ___nl__im__39);
#line 373
c_rt_lib0move(&___nl__im__40, ptd_priv0reconstruct(___nl__im__33, ___nl__im__30, ___nl__im__2, ___nl__im__3));
#line 374
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(1243));
#line 374
___nl__bool__41 = !___nl__bool__41;
#line 374
if(___nl__bool__41){ goto label_209;}
#line 374
c_rt_lib0clear(&___nl__im__0);
#line 374
c_rt_lib0clear(&___nl__im__1);
#line 374
c_rt_lib0clear(&___nl__im__2);
#line 374
c_rt_lib0clear(&___nl__im__3);
#line 374
//clear ___nl__bool__4;
#line 374
c_rt_lib0clear(&___nl__im__5);
#line 374
c_rt_lib0clear(&___nl__im__6);
#line 374
c_rt_lib0clear(&___nl__im__7);
#line 374
c_rt_lib0clear(&___nl__im__8);
#line 374
c_rt_lib0clear(&___nl__im__9);
#line 374
//clear ___nl__bool__10;
#line 374
c_rt_lib0clear(&___nl__im__11);
#line 374
c_rt_lib0clear(&___nl__im__12);
#line 374
c_rt_lib0clear(&___nl__im__13);
#line 374
c_rt_lib0clear(&___nl__im__17);
#line 374
c_rt_lib0clear(&___nl__im__18);
#line 374
c_rt_lib0clear(&___nl__im__19);
#line 374
c_rt_lib0clear(&___nl__im__20);
#line 374
c_rt_lib0clear(&___nl__im__21);
#line 374
//clear ___nl__bool__22;
#line 374
c_rt_lib0clear(&___nl__im__23);
#line 374
c_rt_lib0clear(&___nl__im__24);
#line 374
c_rt_lib0clear(&___nl__im__25);
#line 374
c_rt_lib0clear(&___nl__im__29);
#line 374
c_rt_lib0clear(&___nl__im__30);
#line 374
c_rt_lib0clear(&___nl__im__31);
#line 374
c_rt_lib0clear(&___nl__im__32);
#line 374
c_rt_lib0clear(&___nl__im__33);
#line 374
//clear ___nl__int__34;
#line 374
//clear ___nl__int__35;
#line 374
//clear ___nl__int__36;
#line 374
//clear ___nl__bool__37;
#line 374
//clear ___nl__int__38;
#line 374
c_rt_lib0clear(&___nl__im__39);
#line 374
//clear ___nl__bool__41;
#line 374
return ___nl__im__40;
#line 374
goto label_209;
#line 374
label_209:
;
#line 374
//clear ___nl__bool__41;
#line 375
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(1244)));
#line 375
c_rt_lib0delete(array0push(&___nl__im__32, ___nl__im__42));
#line 375
c_rt_lib0clear(&___nl__im__42);
#line 375
c_rt_lib0clear(&___nl__im__33);
#line 376
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 376
goto label_162;
#line 376
label_217:
;
#line 377
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__32));
#line 377
c_rt_lib0clear(&___nl__im__0);
#line 377
c_rt_lib0clear(&___nl__im__1);
#line 377
c_rt_lib0clear(&___nl__im__2);
#line 377
c_rt_lib0clear(&___nl__im__3);
#line 377
//clear ___nl__bool__4;
#line 377
c_rt_lib0clear(&___nl__im__5);
#line 377
c_rt_lib0clear(&___nl__im__6);
#line 377
c_rt_lib0clear(&___nl__im__7);
#line 377
c_rt_lib0clear(&___nl__im__8);
#line 377
c_rt_lib0clear(&___nl__im__9);
#line 377
//clear ___nl__bool__10;
#line 377
c_rt_lib0clear(&___nl__im__11);
#line 377
c_rt_lib0clear(&___nl__im__12);
#line 377
c_rt_lib0clear(&___nl__im__13);
#line 377
c_rt_lib0clear(&___nl__im__17);
#line 377
c_rt_lib0clear(&___nl__im__18);
#line 377
c_rt_lib0clear(&___nl__im__19);
#line 377
c_rt_lib0clear(&___nl__im__20);
#line 377
c_rt_lib0clear(&___nl__im__21);
#line 377
//clear ___nl__bool__22;
#line 377
c_rt_lib0clear(&___nl__im__23);
#line 377
c_rt_lib0clear(&___nl__im__24);
#line 377
c_rt_lib0clear(&___nl__im__25);
#line 377
c_rt_lib0clear(&___nl__im__29);
#line 377
c_rt_lib0clear(&___nl__im__30);
#line 377
c_rt_lib0clear(&___nl__im__31);
#line 377
c_rt_lib0clear(&___nl__im__32);
#line 377
c_rt_lib0clear(&___nl__im__33);
#line 377
//clear ___nl__int__34;
#line 377
//clear ___nl__int__35;
#line 377
//clear ___nl__int__36;
#line 377
//clear ___nl__bool__37;
#line 377
//clear ___nl__int__38;
#line 377
c_rt_lib0clear(&___nl__im__39);
#line 377
c_rt_lib0clear(&___nl__im__40);
#line 377
return ___nl__im__43;
#line 378
goto label_805;
#line 378
label_256:
;
#line 378
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(317)));
#line 378
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 379
c_rt_lib0move(&___nl__im__46, ov0get_element(___nl__im__0));
#line 380
c_rt_lib0move(&___nl__im__1, hash0get_value(___nl__im__44, ___nl__im__46));
#line 381
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(28));
#line 381
___nl__bool__47 = !___nl__bool__47;
#line 381
if(___nl__bool__47){ goto label_307;}
#line 381
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__0));
#line 381
c_rt_lib0clear(&___nl__im__0);
#line 381
c_rt_lib0clear(&___nl__im__1);
#line 381
c_rt_lib0clear(&___nl__im__2);
#line 381
c_rt_lib0clear(&___nl__im__3);
#line 381
//clear ___nl__bool__4;
#line 381
c_rt_lib0clear(&___nl__im__5);
#line 381
c_rt_lib0clear(&___nl__im__6);
#line 381
c_rt_lib0clear(&___nl__im__7);
#line 381
c_rt_lib0clear(&___nl__im__8);
#line 381
c_rt_lib0clear(&___nl__im__9);
#line 381
//clear ___nl__bool__10;
#line 381
c_rt_lib0clear(&___nl__im__11);
#line 381
c_rt_lib0clear(&___nl__im__12);
#line 381
c_rt_lib0clear(&___nl__im__13);
#line 381
c_rt_lib0clear(&___nl__im__17);
#line 381
c_rt_lib0clear(&___nl__im__18);
#line 381
c_rt_lib0clear(&___nl__im__19);
#line 381
c_rt_lib0clear(&___nl__im__20);
#line 381
c_rt_lib0clear(&___nl__im__21);
#line 381
//clear ___nl__bool__22;
#line 381
c_rt_lib0clear(&___nl__im__23);
#line 381
c_rt_lib0clear(&___nl__im__24);
#line 381
c_rt_lib0clear(&___nl__im__25);
#line 381
c_rt_lib0clear(&___nl__im__29);
#line 381
c_rt_lib0clear(&___nl__im__30);
#line 381
c_rt_lib0clear(&___nl__im__31);
#line 381
c_rt_lib0clear(&___nl__im__32);
#line 381
c_rt_lib0clear(&___nl__im__33);
#line 381
//clear ___nl__int__34;
#line 381
//clear ___nl__int__35;
#line 381
//clear ___nl__int__36;
#line 381
//clear ___nl__bool__37;
#line 381
//clear ___nl__int__38;
#line 381
c_rt_lib0clear(&___nl__im__39);
#line 381
c_rt_lib0clear(&___nl__im__40);
#line 381
c_rt_lib0clear(&___nl__im__43);
#line 381
c_rt_lib0clear(&___nl__im__44);
#line 381
c_rt_lib0clear(&___nl__im__45);
#line 381
c_rt_lib0clear(&___nl__im__46);
#line 381
//clear ___nl__bool__47;
#line 381
return ___nl__im__48;
#line 381
goto label_307;
#line 381
label_307:
;
#line 381
//clear ___nl__bool__47;
#line 381
c_rt_lib0clear(&___nl__im__48);
#line 382
c_rt_lib0move(&___nl__im__0, ov0get_value(___nl__im__0));
#line 383
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(27)));
#line 384
c_rt_lib0move(&___nl__im__50, ptd_priv0reconstruct(___nl__im__0, ___nl__im__49, ___nl__im__2, ___nl__im__3));
#line 385
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(1243));
#line 385
___nl__bool__51 = !___nl__bool__51;
#line 385
if(___nl__bool__51){ goto label_359;}
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
//clear ___nl__bool__51;
#line 385
return ___nl__im__50;
#line 385
goto label_359;
#line 385
label_359:
;
#line 385
//clear ___nl__bool__51;
#line 386
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(1244)));
#line 386
c_rt_lib0move(&___nl__im__53, ov0mk_val(___nl__im__46, ___nl__im__54));
#line 386
c_rt_lib0clear(&___nl__im__54);
#line 386
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__53));
#line 386
c_rt_lib0clear(&___nl__im__53);
#line 386
c_rt_lib0clear(&___nl__im__0);
#line 386
c_rt_lib0clear(&___nl__im__1);
#line 386
c_rt_lib0clear(&___nl__im__2);
#line 386
c_rt_lib0clear(&___nl__im__3);
#line 386
//clear ___nl__bool__4;
#line 386
c_rt_lib0clear(&___nl__im__5);
#line 386
c_rt_lib0clear(&___nl__im__6);
#line 386
c_rt_lib0clear(&___nl__im__7);
#line 386
c_rt_lib0clear(&___nl__im__8);
#line 386
c_rt_lib0clear(&___nl__im__9);
#line 386
//clear ___nl__bool__10;
#line 386
c_rt_lib0clear(&___nl__im__11);
#line 386
c_rt_lib0clear(&___nl__im__12);
#line 386
c_rt_lib0clear(&___nl__im__13);
#line 386
c_rt_lib0clear(&___nl__im__17);
#line 386
c_rt_lib0clear(&___nl__im__18);
#line 386
c_rt_lib0clear(&___nl__im__19);
#line 386
c_rt_lib0clear(&___nl__im__20);
#line 386
c_rt_lib0clear(&___nl__im__21);
#line 386
//clear ___nl__bool__22;
#line 386
c_rt_lib0clear(&___nl__im__23);
#line 386
c_rt_lib0clear(&___nl__im__24);
#line 386
c_rt_lib0clear(&___nl__im__25);
#line 386
c_rt_lib0clear(&___nl__im__29);
#line 386
c_rt_lib0clear(&___nl__im__30);
#line 386
c_rt_lib0clear(&___nl__im__31);
#line 386
c_rt_lib0clear(&___nl__im__32);
#line 386
c_rt_lib0clear(&___nl__im__33);
#line 386
//clear ___nl__int__34;
#line 386
//clear ___nl__int__35;
#line 386
//clear ___nl__int__36;
#line 386
//clear ___nl__bool__37;
#line 386
//clear ___nl__int__38;
#line 386
c_rt_lib0clear(&___nl__im__39);
#line 386
c_rt_lib0clear(&___nl__im__40);
#line 386
c_rt_lib0clear(&___nl__im__43);
#line 386
c_rt_lib0clear(&___nl__im__44);
#line 386
c_rt_lib0clear(&___nl__im__45);
#line 386
c_rt_lib0clear(&___nl__im__46);
#line 386
c_rt_lib0clear(&___nl__im__49);
#line 386
c_rt_lib0clear(&___nl__im__50);
#line 386
return ___nl__im__52;
#line 387
goto label_805;
#line 387
label_409:
;
#line 388
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__0));
#line 388
c_rt_lib0clear(&___nl__im__0);
#line 388
c_rt_lib0clear(&___nl__im__1);
#line 388
c_rt_lib0clear(&___nl__im__2);
#line 388
c_rt_lib0clear(&___nl__im__3);
#line 388
//clear ___nl__bool__4;
#line 388
c_rt_lib0clear(&___nl__im__5);
#line 388
c_rt_lib0clear(&___nl__im__6);
#line 388
c_rt_lib0clear(&___nl__im__7);
#line 388
c_rt_lib0clear(&___nl__im__8);
#line 388
c_rt_lib0clear(&___nl__im__9);
#line 388
//clear ___nl__bool__10;
#line 388
c_rt_lib0clear(&___nl__im__11);
#line 388
c_rt_lib0clear(&___nl__im__12);
#line 388
c_rt_lib0clear(&___nl__im__13);
#line 388
c_rt_lib0clear(&___nl__im__17);
#line 388
c_rt_lib0clear(&___nl__im__18);
#line 388
c_rt_lib0clear(&___nl__im__19);
#line 388
c_rt_lib0clear(&___nl__im__20);
#line 388
c_rt_lib0clear(&___nl__im__21);
#line 388
//clear ___nl__bool__22;
#line 388
c_rt_lib0clear(&___nl__im__23);
#line 388
c_rt_lib0clear(&___nl__im__24);
#line 388
c_rt_lib0clear(&___nl__im__25);
#line 388
c_rt_lib0clear(&___nl__im__29);
#line 388
c_rt_lib0clear(&___nl__im__30);
#line 388
c_rt_lib0clear(&___nl__im__31);
#line 388
c_rt_lib0clear(&___nl__im__32);
#line 388
c_rt_lib0clear(&___nl__im__33);
#line 388
//clear ___nl__int__34;
#line 388
//clear ___nl__int__35;
#line 388
//clear ___nl__int__36;
#line 388
//clear ___nl__bool__37;
#line 388
//clear ___nl__int__38;
#line 388
c_rt_lib0clear(&___nl__im__39);
#line 388
c_rt_lib0clear(&___nl__im__40);
#line 388
c_rt_lib0clear(&___nl__im__43);
#line 388
c_rt_lib0clear(&___nl__im__44);
#line 388
c_rt_lib0clear(&___nl__im__45);
#line 388
c_rt_lib0clear(&___nl__im__46);
#line 388
c_rt_lib0clear(&___nl__im__49);
#line 388
c_rt_lib0clear(&___nl__im__50);
#line 388
c_rt_lib0clear(&___nl__im__52);
#line 388
return ___nl__im__55;
#line 389
goto label_805;
#line 389
label_455:
;
#line 390
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__0));
#line 390
c_rt_lib0clear(&___nl__im__0);
#line 390
c_rt_lib0clear(&___nl__im__1);
#line 390
c_rt_lib0clear(&___nl__im__2);
#line 390
c_rt_lib0clear(&___nl__im__3);
#line 390
//clear ___nl__bool__4;
#line 390
c_rt_lib0clear(&___nl__im__5);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
c_rt_lib0clear(&___nl__im__7);
#line 390
c_rt_lib0clear(&___nl__im__8);
#line 390
c_rt_lib0clear(&___nl__im__9);
#line 390
//clear ___nl__bool__10;
#line 390
c_rt_lib0clear(&___nl__im__11);
#line 390
c_rt_lib0clear(&___nl__im__12);
#line 390
c_rt_lib0clear(&___nl__im__13);
#line 390
c_rt_lib0clear(&___nl__im__17);
#line 390
c_rt_lib0clear(&___nl__im__18);
#line 390
c_rt_lib0clear(&___nl__im__19);
#line 390
c_rt_lib0clear(&___nl__im__20);
#line 390
c_rt_lib0clear(&___nl__im__21);
#line 390
//clear ___nl__bool__22;
#line 390
c_rt_lib0clear(&___nl__im__23);
#line 390
c_rt_lib0clear(&___nl__im__24);
#line 390
c_rt_lib0clear(&___nl__im__25);
#line 390
c_rt_lib0clear(&___nl__im__29);
#line 390
c_rt_lib0clear(&___nl__im__30);
#line 390
c_rt_lib0clear(&___nl__im__31);
#line 390
c_rt_lib0clear(&___nl__im__32);
#line 390
c_rt_lib0clear(&___nl__im__33);
#line 390
//clear ___nl__int__34;
#line 390
//clear ___nl__int__35;
#line 390
//clear ___nl__int__36;
#line 390
//clear ___nl__bool__37;
#line 390
//clear ___nl__int__38;
#line 390
c_rt_lib0clear(&___nl__im__39);
#line 390
c_rt_lib0clear(&___nl__im__40);
#line 390
c_rt_lib0clear(&___nl__im__43);
#line 390
c_rt_lib0clear(&___nl__im__44);
#line 390
c_rt_lib0clear(&___nl__im__45);
#line 390
c_rt_lib0clear(&___nl__im__46);
#line 390
c_rt_lib0clear(&___nl__im__49);
#line 390
c_rt_lib0clear(&___nl__im__50);
#line 390
c_rt_lib0clear(&___nl__im__52);
#line 390
c_rt_lib0clear(&___nl__im__55);
#line 390
return ___nl__im__56;
#line 391
goto label_805;
#line 391
label_502:
;
#line 392
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__0));
#line 392
c_rt_lib0clear(&___nl__im__0);
#line 392
c_rt_lib0clear(&___nl__im__1);
#line 392
c_rt_lib0clear(&___nl__im__2);
#line 392
c_rt_lib0clear(&___nl__im__3);
#line 392
//clear ___nl__bool__4;
#line 392
c_rt_lib0clear(&___nl__im__5);
#line 392
c_rt_lib0clear(&___nl__im__6);
#line 392
c_rt_lib0clear(&___nl__im__7);
#line 392
c_rt_lib0clear(&___nl__im__8);
#line 392
c_rt_lib0clear(&___nl__im__9);
#line 392
//clear ___nl__bool__10;
#line 392
c_rt_lib0clear(&___nl__im__11);
#line 392
c_rt_lib0clear(&___nl__im__12);
#line 392
c_rt_lib0clear(&___nl__im__13);
#line 392
c_rt_lib0clear(&___nl__im__17);
#line 392
c_rt_lib0clear(&___nl__im__18);
#line 392
c_rt_lib0clear(&___nl__im__19);
#line 392
c_rt_lib0clear(&___nl__im__20);
#line 392
c_rt_lib0clear(&___nl__im__21);
#line 392
//clear ___nl__bool__22;
#line 392
c_rt_lib0clear(&___nl__im__23);
#line 392
c_rt_lib0clear(&___nl__im__24);
#line 392
c_rt_lib0clear(&___nl__im__25);
#line 392
c_rt_lib0clear(&___nl__im__29);
#line 392
c_rt_lib0clear(&___nl__im__30);
#line 392
c_rt_lib0clear(&___nl__im__31);
#line 392
c_rt_lib0clear(&___nl__im__32);
#line 392
c_rt_lib0clear(&___nl__im__33);
#line 392
//clear ___nl__int__34;
#line 392
//clear ___nl__int__35;
#line 392
//clear ___nl__int__36;
#line 392
//clear ___nl__bool__37;
#line 392
//clear ___nl__int__38;
#line 392
c_rt_lib0clear(&___nl__im__39);
#line 392
c_rt_lib0clear(&___nl__im__40);
#line 392
c_rt_lib0clear(&___nl__im__43);
#line 392
c_rt_lib0clear(&___nl__im__44);
#line 392
c_rt_lib0clear(&___nl__im__45);
#line 392
c_rt_lib0clear(&___nl__im__46);
#line 392
c_rt_lib0clear(&___nl__im__49);
#line 392
c_rt_lib0clear(&___nl__im__50);
#line 392
c_rt_lib0clear(&___nl__im__52);
#line 392
c_rt_lib0clear(&___nl__im__55);
#line 392
c_rt_lib0clear(&___nl__im__56);
#line 392
return ___nl__im__57;
#line 393
goto label_805;
#line 393
label_550:
;
#line 394
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__0));
#line 394
c_rt_lib0clear(&___nl__im__0);
#line 394
c_rt_lib0clear(&___nl__im__1);
#line 394
c_rt_lib0clear(&___nl__im__2);
#line 394
c_rt_lib0clear(&___nl__im__3);
#line 394
//clear ___nl__bool__4;
#line 394
c_rt_lib0clear(&___nl__im__5);
#line 394
c_rt_lib0clear(&___nl__im__6);
#line 394
c_rt_lib0clear(&___nl__im__7);
#line 394
c_rt_lib0clear(&___nl__im__8);
#line 394
c_rt_lib0clear(&___nl__im__9);
#line 394
//clear ___nl__bool__10;
#line 394
c_rt_lib0clear(&___nl__im__11);
#line 394
c_rt_lib0clear(&___nl__im__12);
#line 394
c_rt_lib0clear(&___nl__im__13);
#line 394
c_rt_lib0clear(&___nl__im__17);
#line 394
c_rt_lib0clear(&___nl__im__18);
#line 394
c_rt_lib0clear(&___nl__im__19);
#line 394
c_rt_lib0clear(&___nl__im__20);
#line 394
c_rt_lib0clear(&___nl__im__21);
#line 394
//clear ___nl__bool__22;
#line 394
c_rt_lib0clear(&___nl__im__23);
#line 394
c_rt_lib0clear(&___nl__im__24);
#line 394
c_rt_lib0clear(&___nl__im__25);
#line 394
c_rt_lib0clear(&___nl__im__29);
#line 394
c_rt_lib0clear(&___nl__im__30);
#line 394
c_rt_lib0clear(&___nl__im__31);
#line 394
c_rt_lib0clear(&___nl__im__32);
#line 394
c_rt_lib0clear(&___nl__im__33);
#line 394
//clear ___nl__int__34;
#line 394
//clear ___nl__int__35;
#line 394
//clear ___nl__int__36;
#line 394
//clear ___nl__bool__37;
#line 394
//clear ___nl__int__38;
#line 394
c_rt_lib0clear(&___nl__im__39);
#line 394
c_rt_lib0clear(&___nl__im__40);
#line 394
c_rt_lib0clear(&___nl__im__43);
#line 394
c_rt_lib0clear(&___nl__im__44);
#line 394
c_rt_lib0clear(&___nl__im__45);
#line 394
c_rt_lib0clear(&___nl__im__46);
#line 394
c_rt_lib0clear(&___nl__im__49);
#line 394
c_rt_lib0clear(&___nl__im__50);
#line 394
c_rt_lib0clear(&___nl__im__52);
#line 394
c_rt_lib0clear(&___nl__im__55);
#line 394
c_rt_lib0clear(&___nl__im__56);
#line 394
c_rt_lib0clear(&___nl__im__57);
#line 394
return ___nl__im__58;
#line 395
goto label_805;
#line 395
label_599:
;
#line 395
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(39)));
#line 395
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 396
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(2, ___nl__im__0, ___nl__im__1));
#line 397
c_rt_lib0delete(array0append(&___nl__im__61, ___nl__im__3));
#line 398
c_rt_lib0move(&___nl__im__62, ptd_priv0exec(___nl__im__2, ___nl__im__61));
#line 399
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__62, ___get_global_string_const(1244));
#line 399
if(___nl__bool__63){ goto label_614;}
#line 401
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__62, ___get_global_string_const(1243));
#line 401
if(___nl__bool__63){ goto label_674;}
#line 403
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__62, ___get_global_string_const(71));
#line 403
if(___nl__bool__63){ goto label_737;}
#line 403
c_rt_lib0move(&___nl__im__64,___get_global_string_const(15));
#line 403
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(2, ___nl__im__64, ___nl__im__62));
#line 403
nl_die_arg(___nl__im__64);
#line 399
label_614:
;
#line 399
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__62, ___get_global_string_const(1244)));
#line 399
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 400
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_string_const(1244), ___nl__im__65));
#line 400
c_rt_lib0clear(&___nl__im__0);
#line 400
c_rt_lib0clear(&___nl__im__1);
#line 400
c_rt_lib0clear(&___nl__im__2);
#line 400
c_rt_lib0clear(&___nl__im__3);
#line 400
//clear ___nl__bool__4;
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 400
c_rt_lib0clear(&___nl__im__8);
#line 400
c_rt_lib0clear(&___nl__im__9);
#line 400
//clear ___nl__bool__10;
#line 400
c_rt_lib0clear(&___nl__im__11);
#line 400
c_rt_lib0clear(&___nl__im__12);
#line 400
c_rt_lib0clear(&___nl__im__13);
#line 400
c_rt_lib0clear(&___nl__im__17);
#line 400
c_rt_lib0clear(&___nl__im__18);
#line 400
c_rt_lib0clear(&___nl__im__19);
#line 400
c_rt_lib0clear(&___nl__im__20);
#line 400
c_rt_lib0clear(&___nl__im__21);
#line 400
//clear ___nl__bool__22;
#line 400
c_rt_lib0clear(&___nl__im__23);
#line 400
c_rt_lib0clear(&___nl__im__24);
#line 400
c_rt_lib0clear(&___nl__im__25);
#line 400
c_rt_lib0clear(&___nl__im__29);
#line 400
c_rt_lib0clear(&___nl__im__30);
#line 400
c_rt_lib0clear(&___nl__im__31);
#line 400
c_rt_lib0clear(&___nl__im__32);
#line 400
c_rt_lib0clear(&___nl__im__33);
#line 400
//clear ___nl__int__34;
#line 400
//clear ___nl__int__35;
#line 400
//clear ___nl__int__36;
#line 400
//clear ___nl__bool__37;
#line 400
//clear ___nl__int__38;
#line 400
c_rt_lib0clear(&___nl__im__39);
#line 400
c_rt_lib0clear(&___nl__im__40);
#line 400
c_rt_lib0clear(&___nl__im__43);
#line 400
c_rt_lib0clear(&___nl__im__44);
#line 400
c_rt_lib0clear(&___nl__im__45);
#line 400
c_rt_lib0clear(&___nl__im__46);
#line 400
c_rt_lib0clear(&___nl__im__49);
#line 400
c_rt_lib0clear(&___nl__im__50);
#line 400
c_rt_lib0clear(&___nl__im__52);
#line 400
c_rt_lib0clear(&___nl__im__55);
#line 400
c_rt_lib0clear(&___nl__im__56);
#line 400
c_rt_lib0clear(&___nl__im__57);
#line 400
c_rt_lib0clear(&___nl__im__58);
#line 400
c_rt_lib0clear(&___nl__im__59);
#line 400
c_rt_lib0clear(&___nl__im__60);
#line 400
c_rt_lib0clear(&___nl__im__61);
#line 400
c_rt_lib0clear(&___nl__im__62);
#line 400
//clear ___nl__bool__63;
#line 400
c_rt_lib0clear(&___nl__im__64);
#line 400
c_rt_lib0clear(&___nl__im__65);
#line 400
c_rt_lib0clear(&___nl__im__66);
#line 400
return ___nl__im__67;
#line 401
goto label_803;
#line 401
label_674:
;
#line 401
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__62, ___get_global_string_const(1243)));
#line 401
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 402
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(1243), ___nl__im__68));
#line 402
c_rt_lib0clear(&___nl__im__0);
#line 402
c_rt_lib0clear(&___nl__im__1);
#line 402
c_rt_lib0clear(&___nl__im__2);
#line 402
c_rt_lib0clear(&___nl__im__3);
#line 402
//clear ___nl__bool__4;
#line 402
c_rt_lib0clear(&___nl__im__5);
#line 402
c_rt_lib0clear(&___nl__im__6);
#line 402
c_rt_lib0clear(&___nl__im__7);
#line 402
c_rt_lib0clear(&___nl__im__8);
#line 402
c_rt_lib0clear(&___nl__im__9);
#line 402
//clear ___nl__bool__10;
#line 402
c_rt_lib0clear(&___nl__im__11);
#line 402
c_rt_lib0clear(&___nl__im__12);
#line 402
c_rt_lib0clear(&___nl__im__13);
#line 402
c_rt_lib0clear(&___nl__im__17);
#line 402
c_rt_lib0clear(&___nl__im__18);
#line 402
c_rt_lib0clear(&___nl__im__19);
#line 402
c_rt_lib0clear(&___nl__im__20);
#line 402
c_rt_lib0clear(&___nl__im__21);
#line 402
//clear ___nl__bool__22;
#line 402
c_rt_lib0clear(&___nl__im__23);
#line 402
c_rt_lib0clear(&___nl__im__24);
#line 402
c_rt_lib0clear(&___nl__im__25);
#line 402
c_rt_lib0clear(&___nl__im__29);
#line 402
c_rt_lib0clear(&___nl__im__30);
#line 402
c_rt_lib0clear(&___nl__im__31);
#line 402
c_rt_lib0clear(&___nl__im__32);
#line 402
c_rt_lib0clear(&___nl__im__33);
#line 402
//clear ___nl__int__34;
#line 402
//clear ___nl__int__35;
#line 402
//clear ___nl__int__36;
#line 402
//clear ___nl__bool__37;
#line 402
//clear ___nl__int__38;
#line 402
c_rt_lib0clear(&___nl__im__39);
#line 402
c_rt_lib0clear(&___nl__im__40);
#line 402
c_rt_lib0clear(&___nl__im__43);
#line 402
c_rt_lib0clear(&___nl__im__44);
#line 402
c_rt_lib0clear(&___nl__im__45);
#line 402
c_rt_lib0clear(&___nl__im__46);
#line 402
c_rt_lib0clear(&___nl__im__49);
#line 402
c_rt_lib0clear(&___nl__im__50);
#line 402
c_rt_lib0clear(&___nl__im__52);
#line 402
c_rt_lib0clear(&___nl__im__55);
#line 402
c_rt_lib0clear(&___nl__im__56);
#line 402
c_rt_lib0clear(&___nl__im__57);
#line 402
c_rt_lib0clear(&___nl__im__58);
#line 402
c_rt_lib0clear(&___nl__im__59);
#line 402
c_rt_lib0clear(&___nl__im__60);
#line 402
c_rt_lib0clear(&___nl__im__61);
#line 402
c_rt_lib0clear(&___nl__im__62);
#line 402
//clear ___nl__bool__63;
#line 402
c_rt_lib0clear(&___nl__im__64);
#line 402
c_rt_lib0clear(&___nl__im__65);
#line 402
c_rt_lib0clear(&___nl__im__66);
#line 402
c_rt_lib0clear(&___nl__im__67);
#line 402
c_rt_lib0clear(&___nl__im__68);
#line 402
c_rt_lib0clear(&___nl__im__69);
#line 402
return ___nl__im__70;
#line 403
goto label_803;
#line 403
label_737:
;
#line 404
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 404
c_rt_lib0move(&___nl__im__72, ptd_priv0exec(___nl__im__1, ___nl__im__73));
#line 404
c_rt_lib0clear(&___nl__im__73);
#line 404
c_rt_lib0move(&___nl__im__71, ptd_priv0reconstruct(___nl__im__0, ___nl__im__72, ___nl__im__2, ___nl__im__3));
#line 404
c_rt_lib0clear(&___nl__im__72);
#line 404
c_rt_lib0clear(&___nl__im__0);
#line 404
c_rt_lib0clear(&___nl__im__1);
#line 404
c_rt_lib0clear(&___nl__im__2);
#line 404
c_rt_lib0clear(&___nl__im__3);
#line 404
//clear ___nl__bool__4;
#line 404
c_rt_lib0clear(&___nl__im__5);
#line 404
c_rt_lib0clear(&___nl__im__6);
#line 404
c_rt_lib0clear(&___nl__im__7);
#line 404
c_rt_lib0clear(&___nl__im__8);
#line 404
c_rt_lib0clear(&___nl__im__9);
#line 404
//clear ___nl__bool__10;
#line 404
c_rt_lib0clear(&___nl__im__11);
#line 404
c_rt_lib0clear(&___nl__im__12);
#line 404
c_rt_lib0clear(&___nl__im__13);
#line 404
c_rt_lib0clear(&___nl__im__17);
#line 404
c_rt_lib0clear(&___nl__im__18);
#line 404
c_rt_lib0clear(&___nl__im__19);
#line 404
c_rt_lib0clear(&___nl__im__20);
#line 404
c_rt_lib0clear(&___nl__im__21);
#line 404
//clear ___nl__bool__22;
#line 404
c_rt_lib0clear(&___nl__im__23);
#line 404
c_rt_lib0clear(&___nl__im__24);
#line 404
c_rt_lib0clear(&___nl__im__25);
#line 404
c_rt_lib0clear(&___nl__im__29);
#line 404
c_rt_lib0clear(&___nl__im__30);
#line 404
c_rt_lib0clear(&___nl__im__31);
#line 404
c_rt_lib0clear(&___nl__im__32);
#line 404
c_rt_lib0clear(&___nl__im__33);
#line 404
//clear ___nl__int__34;
#line 404
//clear ___nl__int__35;
#line 404
//clear ___nl__int__36;
#line 404
//clear ___nl__bool__37;
#line 404
//clear ___nl__int__38;
#line 404
c_rt_lib0clear(&___nl__im__39);
#line 404
c_rt_lib0clear(&___nl__im__40);
#line 404
c_rt_lib0clear(&___nl__im__43);
#line 404
c_rt_lib0clear(&___nl__im__44);
#line 404
c_rt_lib0clear(&___nl__im__45);
#line 404
c_rt_lib0clear(&___nl__im__46);
#line 404
c_rt_lib0clear(&___nl__im__49);
#line 404
c_rt_lib0clear(&___nl__im__50);
#line 404
c_rt_lib0clear(&___nl__im__52);
#line 404
c_rt_lib0clear(&___nl__im__55);
#line 404
c_rt_lib0clear(&___nl__im__56);
#line 404
c_rt_lib0clear(&___nl__im__57);
#line 404
c_rt_lib0clear(&___nl__im__58);
#line 404
c_rt_lib0clear(&___nl__im__59);
#line 404
c_rt_lib0clear(&___nl__im__60);
#line 404
c_rt_lib0clear(&___nl__im__61);
#line 404
c_rt_lib0clear(&___nl__im__62);
#line 404
//clear ___nl__bool__63;
#line 404
c_rt_lib0clear(&___nl__im__64);
#line 404
c_rt_lib0clear(&___nl__im__65);
#line 404
c_rt_lib0clear(&___nl__im__66);
#line 404
c_rt_lib0clear(&___nl__im__67);
#line 404
c_rt_lib0clear(&___nl__im__68);
#line 404
c_rt_lib0clear(&___nl__im__69);
#line 404
c_rt_lib0clear(&___nl__im__70);
#line 404
return ___nl__im__71;
#line 405
goto label_803;
#line 405
label_803:
;
#line 406
goto label_805;
#line 406
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
#line 410
___nl__int__2 = getIntFromImm(___nl__im__0);
#line 410
c_rt_lib0move(&___nl__im__1, c_std_lib0int_to_string(___nl__int__2));
#line 410
//clear ___nl__int__2;
#line 410
c_rt_lib0clear(&___nl__im__0);
#line 410
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
#line 414
c_rt_lib0move(&___nl__im__3, ptd0try_string_to_int(___nl__im__0));
#line 414
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(78));
#line 414
if(___nl__bool__2){ goto label_5;}
#line 414
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__3));
#line 414
nl_die_arg(___nl__im__3);
#line 414
label_5:
;
#line 414
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(78)));
#line 415
___nl__int__4 = getIntFromImm(___nl__im__1);
#line 415
c_rt_lib0clear(&___nl__im__0);
#line 415
c_rt_lib0clear(&___nl__im__1);
#line 415
//clear ___nl__bool__2;
#line 415
c_rt_lib0clear(&___nl__im__3);
#line 415
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
#line 419
c_rt_lib0move(&___nl__im__1, c_std_lib0try_string_to_int(___nl__im__0));
#line 419
c_rt_lib0clear(&___nl__im__0);
#line 419
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
