
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "wprinter.h"
#include "string.h"
#include "ptd.h"
#include "array.h"
#include "wprinter.h"
#line 1 "wprinter.nl"

static ImmT *__const__f = NULL;
void wprinter_priv0__const__init();
ImmT wprinter_priv0__const__sim(int __nr);
ImmT wprinter_priv0__const__sing(int __nr);

INT  wprinter_priv0get_tab_size();
INT  wprinter_priv0get_line_width();
wprinter0pretty_t0type wprinter_priv0get_sep();
bool  wprinter_priv0is_to_long(INT  ___nl__int__0);
ImmT  wprinter_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  wprinter_priv0pind(INT  ___nl__int__0);
INT  wprinter_priv0count_len(wprinter0pretty_arr_t0type ___nl__im__0);
ImmT  wprinter_priv0print_sim_arr(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1);
INT  wprinter_priv0print_str_arr(wprinter0state_t0type* ___ref___im__0,wprinter0str_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);
ImmT  wprinter_priv0print_sim_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1);
INT  wprinter_priv0flush_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3,INT  ___nl__int__4,bool  ___nl__bool__5);
INT  wprinter_priv0print_arr_in_lines(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);
INT  wprinter_priv0process_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,bool  ___nl__bool__2,INT  ___nl__int__3,INT  ___nl__int__4);
INT  wprinter_priv0print_t_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);


INT  wprinter_priv0get_tab_size() {
wprinter_priv0__const__init();
INT  ___nl__int__0 = 0;
#line 11
___nl__int__0 = 4;
#line 11
return ___nl__int__0;
}

INT  wprinter_priv0get_line_width() {
wprinter_priv0__const__init();
INT  ___nl__int__0 = 0;
#line 15
___nl__int__0 = 120;
#line 15
return ___nl__int__0;
}

wprinter0pretty_t0type wprinter_priv0get_sep() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 19
___nl__int__1 = 1;
#line 19
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__1));
#line 19
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(1387)));
#line 19
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__2, ___get_global_const(1094), ___nl__im__3));
#line 19
//clear ___nl__int__1;
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
return ___nl__im__0;
}

ImmT  wprinter0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0state_t");
return wprinter0state_t();
}
ImmT  wprinter0state_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 23
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 23
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_const(191), ___nl__im__2));
#line 23
c_rt_lib0clear(&___nl__im__2);
#line 23
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 23
c_rt_lib0clear(&___nl__im__1);
#line 23
return ___nl__im__0;
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
return NULL;
}

bool  wprinter_priv0is_to_long(INT  ___nl__int__0) {
wprinter_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
#line 27
___nl__int__2 = wprinter_priv0get_line_width();
#line 27
___nl__int__3 = ___nl__int__0 > ___nl__int__2;
#line 27
___nl__bool__1 = ___nl__int__3;
#line 27
//clear ___nl__int__2;
#line 27
//clear ___nl__int__3;
#line 27
//clear ___nl__int__0;
#line 27
return ___nl__bool__1;
}

ImmT  wprinter_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 31
c_rt_lib0move(&___nl__im__2,___get_global_const(191));
#line 31
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 31
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 31
c_rt_lib0move(&___nl__string__3,___get_global_const(191));
#line 31
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__string__3);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return NULL;
}

ImmT  wprinter_priv0pind(INT  ___nl__int__0) {
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
#line 35
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 36
___nl__int__2 = 0;
#line 36
___nl__int__3 = 1;
#line 36
label_3:
;
#line 36
___nl__int__5 = ___nl__int__2 >= ___nl__int__0;
#line 36
___nl__bool__4 = ___nl__int__5;
#line 36
if(___nl__bool__4){ goto label_1;}
#line 36
___nl__int__7 = 9;
#line 36
c_rt_lib0move(&___nl__im__6, string0chr(___nl__int__7));
#line 36
//clear ___nl__int__7;
#line 36
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
label_2:
;
#line 36
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 36
goto label_3;
#line 36
label_1:
;
#line 37
//clear ___nl__int__0;
#line 37
//clear ___nl__int__2;
#line 37
//clear ___nl__int__3;
#line 37
//clear ___nl__bool__4;
#line 37
//clear ___nl__int__5;
#line 37
return ___nl__im__1;
}

ImmT  wprinter0arr_kind_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0arr_kind_t");
return wprinter0arr_kind_t();
}
ImmT  wprinter0arr_kind_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 41
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 41
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 41
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 41
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(38), ___nl__im__2, ___get_global_const(1388), ___nl__im__3, ___get_global_const(1389), ___nl__im__4));
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
c_rt_lib0clear(&___nl__im__3);
#line 41
c_rt_lib0clear(&___nl__im__4);
#line 41
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
return ___nl__im__0;
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
return NULL;
}

ImmT  wprinter0pretty_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0pretty_t");
return wprinter0pretty_t();
}
ImmT  wprinter0pretty_t() {
wprinter_priv0__const__init();
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
#line 46
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 48
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(wprinter0pretty_arr_t0ptr, ___get_global_const(1390), ___get_global_const(1391)));
#line 48
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 48
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(wprinter0arr_kind_t0ptr, ___get_global_const(1390), ___get_global_const(1392)));
#line 48
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 48
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__7, ___get_global_const(204), ___nl__im__8));
#line 48
c_rt_lib0clear(&___nl__im__7);
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 49
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(wprinter0pretty_arr_t0ptr, ___get_global_const(1390), ___get_global_const(1391)));
#line 49
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 49
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 49
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 49
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(128), ___nl__im__11, ___get_global_const(885), ___nl__im__12, ___get_global_const(938), ___nl__im__13));
#line 49
c_rt_lib0clear(&___nl__im__11);
#line 49
c_rt_lib0clear(&___nl__im__12);
#line 49
c_rt_lib0clear(&___nl__im__13);
#line 49
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 49
c_rt_lib0clear(&___nl__im__10);
#line 50
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1390), ___get_global_const(1393)));
#line 50
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__16));
#line 50
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1390), ___get_global_const(1393)));
#line 50
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 50
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(1192), ___nl__im__16, ___get_global_const(1193), ___nl__im__17));
#line 50
c_rt_lib0clear(&___nl__im__16);
#line 50
c_rt_lib0clear(&___nl__im__17);
#line 50
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 50
c_rt_lib0clear(&___nl__im__15);
#line 51
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__19, ptd0none());
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(wprinter0str_arr_t0ptr, ___get_global_const(1390), ___get_global_const(1394)));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 53
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(6, ___get_global_const(128), ___nl__im__5, ___get_global_const(229), ___nl__im__9, ___get_global_const(1395), ___nl__im__14, ___get_global_const(378), ___nl__im__18, ___get_global_const(1387), ___nl__im__19, ___get_global_const(1396), ___nl__im__20));
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0clear(&___nl__im__14);
#line 53
c_rt_lib0clear(&___nl__im__18);
#line 53
c_rt_lib0clear(&___nl__im__19);
#line 53
c_rt_lib0clear(&___nl__im__20);
#line 53
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__2, ___get_global_const(1094), ___nl__im__3));
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
c_rt_lib0clear(&___nl__im__3);
#line 53
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
return ___nl__im__0;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
return NULL;
}

ImmT  wprinter0str_arr_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0str_arr_t");
return wprinter0str_arr_t();
}
ImmT  wprinter0str_arr_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 59
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 59
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 59
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 59
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(938), ___nl__im__6, ___get_global_const(939), ___nl__im__7));
#line 59
c_rt_lib0clear(&___nl__im__6);
#line 59
c_rt_lib0clear(&___nl__im__7);
#line 59
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__2, ___get_global_const(940), ___nl__im__4));
#line 59
c_rt_lib0clear(&___nl__im__2);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 59
c_rt_lib0clear(&___nl__im__1);
#line 59
return ___nl__im__0;
#line 59
c_rt_lib0clear(&___nl__im__0);
#line 59
return NULL;
}

ImmT  wprinter0pretty_arr_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0pretty_arr_t");
return wprinter0pretty_arr_t();
}
ImmT  wprinter0pretty_arr_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 63
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1390), ___get_global_const(1393)));
#line 63
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 63
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
return ___nl__im__0;
#line 63
c_rt_lib0clear(&___nl__im__0);
#line 63
return NULL;
}

wprinter0pretty_t0type wprinter0get_sep0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0get_sep");
return wprinter0get_sep();
}
wprinter0pretty_t0type wprinter0get_sep() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 67
c_rt_lib0move(&___nl__im__0, wprinter_priv0get_sep());
#line 67
return ___nl__im__0;
}

INT  wprinter_priv0count_len(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
#line 71
___nl__int__1 = 0;
#line 72
___nl__int__3 = 0;
#line 72
___nl__int__4 = 1;
#line 72
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 72
label_3:
;
#line 72
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 72
___nl__bool__6 = ___nl__int__7;
#line 72
if(___nl__bool__6){ goto label_1;}
#line 72
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 72
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 73
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(282)));
#line 73
___nl__int__10 = getIntFromImm(___nl__im__9);
#line 73
___nl__int__1 = ___nl__int__1 + ___nl__int__10;
#line 73
c_rt_lib0clear(&___nl__im__9);
#line 73
//clear ___nl__int__10;
#line 73
c_rt_lib0clear(&___nl__im__2);
#line 73
label_2:
;
#line 74
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 74
goto label_3;
#line 74
label_1:
;
#line 75
c_rt_lib0clear(&___nl__im__0);
#line 75
c_rt_lib0clear(&___nl__im__2);
#line 75
//clear ___nl__int__3;
#line 75
//clear ___nl__int__4;
#line 75
//clear ___nl__int__5;
#line 75
//clear ___nl__bool__6;
#line 75
//clear ___nl__int__7;
#line 75
c_rt_lib0clear(&___nl__im__8);
#line 75
return ___nl__int__1;
}

wprinter0pretty_t0type wprinter0build_pretty_a0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_a");
wprinter0pretty_arr_t0type *var0 = &(_tab[0]);
return wprinter0build_pretty_a(*var0);
}
wprinter0pretty_t0type wprinter0build_pretty_a(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 79
___nl__int__2 = wprinter_priv0count_len(___nl__im__0);
#line 79
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 79
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 79
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__0, ___get_global_const(204), ___nl__im__6));
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__5));
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__3, ___get_global_const(1094), ___nl__im__4));
#line 79
//clear ___nl__int__2;
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
return ___nl__im__1;
}

wprinter0pretty_t0type wprinter0build_pretty_l0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_l");
wprinter0pretty_arr_t0type *var0 = &(_tab[0]);
return wprinter0build_pretty_l(*var0);
}
wprinter0pretty_t0type wprinter0build_pretty_l(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 83
___nl__int__2 = wprinter_priv0count_len(___nl__im__0);
#line 83
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 83
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(1388)));
#line 83
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__0, ___get_global_const(204), ___nl__im__6));
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__5));
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__3, ___get_global_const(1094), ___nl__im__4));
#line 83
//clear ___nl__int__2;
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
return ___nl__im__1;
}

wprinter0pretty_t0type wprinter0build_pretty_op_l0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_op_l");
wprinter0pretty_arr_t0type *var0 = &(_tab[0]);
return wprinter0build_pretty_op_l(*var0);
}
wprinter0pretty_t0type wprinter0build_pretty_op_l(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 87
___nl__int__2 = wprinter_priv0count_len(___nl__im__0);
#line 87
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 87
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(1389)));
#line 87
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__0, ___get_global_const(204), ___nl__im__6));
#line 87
c_rt_lib0clear(&___nl__im__6);
#line 87
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__5));
#line 87
c_rt_lib0clear(&___nl__im__5);
#line 87
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__3, ___get_global_const(1094), ___nl__im__4));
#line 87
//clear ___nl__int__2;
#line 87
c_rt_lib0clear(&___nl__im__3);
#line 87
c_rt_lib0clear(&___nl__im__4);
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
return ___nl__im__1;
}

wprinter0pretty_t0type wprinter0build_pretty_bind0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "wprinter0build_pretty_bind");
wprinter0pretty_t0type *var0 = &(_tab[0]);
wprinter0pretty_t0type *var1 = &(_tab[1]);
return wprinter0build_pretty_bind(*var0, *var1);
}
wprinter0pretty_t0type wprinter0build_pretty_bind(wprinter0pretty_t0type ___nl__im__0,wprinter0pretty_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 91
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(282)));
#line 91
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 91
c_rt_lib0clear(&___nl__im__5);
#line 91
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(282)));
#line 91
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 91
c_rt_lib0clear(&___nl__im__7);
#line 91
___nl__int__3 = ___nl__int__4 + ___nl__int__6;
#line 91
//clear ___nl__int__4;
#line 91
//clear ___nl__int__6;
#line 91
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__3));
#line 91
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(1192), ___nl__im__0, ___get_global_const(1193), ___nl__im__1));
#line 91
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(1395), ___nl__im__10));
#line 91
c_rt_lib0clear(&___nl__im__10);
#line 91
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__8, ___get_global_const(1094), ___nl__im__9));
#line 91
//clear ___nl__int__3;
#line 91
c_rt_lib0clear(&___nl__im__8);
#line 91
c_rt_lib0clear(&___nl__im__9);
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
return ___nl__im__2;
}

wprinter0pretty_t0type wprinter0build_pretty_arr_decl0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "wprinter0build_pretty_arr_decl");
wprinter0pretty_arr_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return wprinter0build_pretty_arr_decl(*var0, *var1, *var2);
}
wprinter0pretty_t0type wprinter0build_pretty_arr_decl(wprinter0pretty_arr_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
wprinter_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 97
___nl__int__6 = wprinter_priv0count_len(___nl__im__0);
#line 97
___nl__int__7 = string0length(___nl__im__1);
#line 97
___nl__int__5 = ___nl__int__6 + ___nl__int__7;
#line 97
//clear ___nl__int__6;
#line 97
//clear ___nl__int__7;
#line 97
___nl__int__8 = string0length(___nl__im__2);
#line 97
___nl__int__4 = ___nl__int__5 + ___nl__int__8;
#line 97
//clear ___nl__int__5;
#line 97
//clear ___nl__int__8;
#line 97
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__4));
#line 98
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_const(128), ___nl__im__0, ___get_global_const(885), ___nl__im__1, ___get_global_const(938), ___nl__im__2));
#line 98
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__im__11));
#line 98
c_rt_lib0clear(&___nl__im__11);
#line 98
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__9, ___get_global_const(1094), ___nl__im__10));
#line 98
//clear ___nl__int__4;
#line 98
c_rt_lib0clear(&___nl__im__9);
#line 98
c_rt_lib0clear(&___nl__im__10);
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
c_rt_lib0clear(&___nl__im__2);
#line 98
return ___nl__im__3;
}

wprinter0pretty_t0type wprinter0build_sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_sim");
ImmT  *var0 = &(_tab[0]);
return wprinter0build_sim(*var0);
}
wprinter0pretty_t0type wprinter0build_sim(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 103
___nl__int__2 = string0length(___nl__im__0);
#line 103
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 103
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(378), ___nl__im__0));
#line 103
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__3, ___get_global_const(1094), ___nl__im__4));
#line 103
//clear ___nl__int__2;
#line 103
c_rt_lib0clear(&___nl__im__3);
#line 103
c_rt_lib0clear(&___nl__im__4);
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
return ___nl__im__1;
}

wprinter0pretty_t0type wprinter0build_str_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "wprinter0build_str_arr");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return wprinter0build_str_arr(*var0, *var1);
}
wprinter0pretty_t0type wprinter0build_str_arr(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 110
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(938));
#line 110
if(___nl__bool__2){ goto label_2;}
#line 112
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(939));
#line 112
if(___nl__bool__2){ goto label_3;}
#line 112
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 112
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 112
nl_die_arg(___nl__im__3);
#line 110
label_2:
;
#line 111
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 111
___nl__int__6 = 1;
#line 111
___nl__int__7 = ___nl__int__5 == ___nl__int__6;
#line 111
___nl__bool__4 = ___nl__int__7;
#line 111
//clear ___nl__int__5;
#line 111
//clear ___nl__int__6;
#line 111
//clear ___nl__int__7;
#line 111
___nl__bool__4 = !___nl__bool__4;
#line 111
if(___nl__bool__4){ goto label_5;}
#line 111
___nl__int__10 = 0;
#line 111
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__10));
#line 111
//clear ___nl__int__10;
#line 111
c_rt_lib0move(&___nl__im__8, wprinter0build_sim(___nl__im__9));
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
//clear ___nl__bool__2;
#line 111
c_rt_lib0clear(&___nl__im__3);
#line 111
//clear ___nl__bool__4;
#line 111
return ___nl__im__8;
#line 111
goto label_4;
#line 111
label_5:
;
#line 111
label_4:
;
#line 111
//clear ___nl__bool__4;
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 112
goto label_1;
#line 112
label_3:
;
#line 113
goto label_1;
#line 113
label_1:
;
#line 114
___nl__int__13 = 2;
#line 114
___nl__int__14 = wprinter_priv0get_line_width();
#line 114
___nl__int__12 = ___nl__int__13 * ___nl__int__14;
#line 114
//clear ___nl__int__13;
#line 114
//clear ___nl__int__14;
#line 114
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__12));
#line 114
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__0, ___get_global_const(940), ___nl__im__1));
#line 114
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(1396), ___nl__im__17));
#line 114
c_rt_lib0clear(&___nl__im__17);
#line 114
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(282), ___nl__im__15, ___get_global_const(1094), ___nl__im__16));
#line 114
//clear ___nl__int__12;
#line 114
c_rt_lib0clear(&___nl__im__15);
#line 114
c_rt_lib0clear(&___nl__im__16);
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
//clear ___nl__bool__2;
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 114
return ___nl__im__11;
}

ImmT  wprinter_priv0print_sim_arr(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 118
___nl__int__3 = 0;
#line 118
___nl__int__4 = 1;
#line 118
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 118
label_3:
;
#line 118
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 118
___nl__bool__6 = ___nl__int__7;
#line 118
if(___nl__bool__6){ goto label_1;}
#line 118
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 118
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 119
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__2));
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
label_2:
;
#line 120
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 120
goto label_3;
#line 120
label_1:
;
#line 120
c_rt_lib0clear(&___nl__im__1);
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
//clear ___nl__int__3;
#line 120
//clear ___nl__int__4;
#line 120
//clear ___nl__int__5;
#line 120
//clear ___nl__bool__6;
#line 120
//clear ___nl__int__7;
#line 120
c_rt_lib0clear(&___nl__im__8);
#line 120
return NULL;
}

INT  wprinter_priv0print_str_arr(wprinter0state_t0type* ___ref___im__0,wprinter0str_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
#line 125
___nl__int__4 = ___nl__int__2;
#line 126
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(128)));
#line 127
___nl__int__10 = 0;
#line 127
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 127
//clear ___nl__int__10;
#line 127
___nl__int__8 = string0length(___nl__im__9);
#line 127
c_rt_lib0clear(&___nl__im__9);
#line 127
___nl__int__7 = ___nl__int__2 + ___nl__int__8;
#line 127
//clear ___nl__int__8;
#line 127
___nl__bool__6 = wprinter_priv0is_to_long(___nl__int__7);
#line 127
//clear ___nl__int__7;
#line 127
___nl__bool__6 = !___nl__bool__6;
#line 127
if(___nl__bool__6){ goto label_2;}
#line 128
c_rt_lib0move(&___nl__im__11, string0lf());
#line 128
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__11));
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 129
c_rt_lib0move(&___nl__im__12, wprinter_priv0pind(___nl__int__3));
#line 129
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__12));
#line 129
c_rt_lib0clear(&___nl__im__12);
#line 130
___nl__int__13 = wprinter_priv0get_tab_size();
#line 130
___nl__int__4 = ___nl__int__13 * ___nl__int__3;
#line 130
//clear ___nl__int__13;
#line 131
goto label_1;
#line 131
label_2:
;
#line 131
label_1:
;
#line 131
//clear ___nl__bool__6;
#line 132
___nl__int__14 = 0;
#line 133
___nl__int__16 = 0;
#line 133
___nl__int__17 = 1;
#line 133
___nl__int__18 = c_rt_lib0array_len(___nl__im__5);
#line 133
label_5:
;
#line 133
___nl__int__20 = ___nl__int__16 >= ___nl__int__18;
#line 133
___nl__bool__19 = ___nl__int__20;
#line 133
if(___nl__bool__19){ goto label_3;}
#line 133
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__5, ___nl__int__16));
#line 133
c_rt_lib0copy(&___nl__im__15, ___nl__im__21);
#line 134
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__15));
#line 135
___nl__int__22 = string0length(___nl__im__15);
#line 135
___nl__int__4 = ___nl__int__4 + ___nl__int__22;
#line 135
//clear ___nl__int__22;
#line 136
___nl__int__25 = c_rt_lib0array_len(___nl__im__5);
#line 136
___nl__int__26 = 1;
#line 136
___nl__int__24 = ___nl__int__25 - ___nl__int__26;
#line 136
//clear ___nl__int__25;
#line 136
//clear ___nl__int__26;
#line 136
___nl__int__27 = ___nl__int__14 != ___nl__int__24;
#line 136
___nl__bool__23 = ___nl__int__27;
#line 136
//clear ___nl__int__24;
#line 136
//clear ___nl__int__27;
#line 136
___nl__bool__23 = !___nl__bool__23;
#line 136
if(___nl__bool__23){ goto label_7;}
#line 137
c_rt_lib0move(&___nl__im__29, string0lf());
#line 137
c_rt_lib0move(&___nl__im__30, wprinter_priv0pind(___nl__int__3));
#line 137
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 137
c_rt_lib0clear(&___nl__im__29);
#line 137
c_rt_lib0clear(&___nl__im__30);
#line 137
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__28));
#line 137
c_rt_lib0clear(&___nl__im__28);
#line 138
___nl__int__31 = wprinter_priv0get_tab_size();
#line 138
___nl__int__4 = ___nl__int__31 * ___nl__int__3;
#line 138
//clear ___nl__int__31;
#line 139
goto label_6;
#line 139
label_7:
;
#line 139
label_6:
;
#line 139
//clear ___nl__bool__23;
#line 140
___nl__int__32 = 1;
#line 140
___nl__int__14 = ___nl__int__14 + ___nl__int__32;
#line 140
//clear ___nl__int__32;
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
label_4:
;
#line 141
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 141
goto label_5;
#line 141
label_3:
;
#line 142
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(940)));
#line 142
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(939));
#line 142
if(___nl__bool__34){ goto label_9;}
#line 145
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(938));
#line 145
if(___nl__bool__34){ goto label_10;}
#line 145
c_rt_lib0move(&___nl__im__35,___get_global_const(16));
#line 145
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__35, ___nl__im__33));
#line 145
nl_die_arg(___nl__im__35);
#line 142
label_9:
;
#line 143
c_rt_lib0move(&___nl__im__37, string0lf());
#line 143
c_rt_lib0move(&___nl__im__38, wprinter_priv0pind(___nl__int__3));
#line 143
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 143
c_rt_lib0clear(&___nl__im__37);
#line 143
c_rt_lib0clear(&___nl__im__38);
#line 143
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__36));
#line 143
c_rt_lib0clear(&___nl__im__36);
#line 144
___nl__int__39 = wprinter_priv0get_tab_size();
#line 144
___nl__int__4 = ___nl__int__39 * ___nl__int__3;
#line 144
//clear ___nl__int__39;
#line 145
goto label_8;
#line 145
label_10:
;
#line 146
goto label_8;
#line 146
label_8:
;
#line 147
c_rt_lib0clear(&___nl__im__1);
#line 147
//clear ___nl__int__2;
#line 147
//clear ___nl__int__3;
#line 147
c_rt_lib0clear(&___nl__im__5);
#line 147
//clear ___nl__int__14;
#line 147
c_rt_lib0clear(&___nl__im__15);
#line 147
//clear ___nl__int__16;
#line 147
//clear ___nl__int__17;
#line 147
//clear ___nl__int__18;
#line 147
//clear ___nl__bool__19;
#line 147
//clear ___nl__int__20;
#line 147
c_rt_lib0clear(&___nl__im__21);
#line 147
c_rt_lib0clear(&___nl__im__33);
#line 147
//clear ___nl__bool__34;
#line 147
c_rt_lib0clear(&___nl__im__35);
#line 147
return ___nl__int__4;
}

ImmT  wprinter_priv0print_sim_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
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
#line 151
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1094)));
#line 151
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(378));
#line 151
if(___nl__bool__3){ goto label_2;}
#line 153
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(128));
#line 153
if(___nl__bool__3){ goto label_3;}
#line 155
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1387));
#line 155
if(___nl__bool__3){ goto label_4;}
#line 157
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(229));
#line 157
if(___nl__bool__3){ goto label_5;}
#line 161
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1395));
#line 161
if(___nl__bool__3){ goto label_6;}
#line 164
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1396));
#line 164
if(___nl__bool__3){ goto label_7;}
#line 164
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 164
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 164
nl_die_arg(___nl__im__4);
#line 151
label_2:
;
#line 151
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(378)));
#line 151
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 152
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__5));
#line 153
goto label_1;
#line 153
label_3:
;
#line 153
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(128)));
#line 153
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 154
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(128)));
#line 154
c_rt_lib0delete(wprinter_priv0print_sim_arr(___ref___im__0, ___nl__im__9));
#line 154
c_rt_lib0clear(&___nl__im__9);
#line 155
goto label_1;
#line 155
label_4:
;
#line 156
c_rt_lib0move(&___nl__im__10,___get_global_const(428));
#line 156
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__10));
#line 156
c_rt_lib0clear(&___nl__im__10);
#line 157
goto label_1;
#line 157
label_5:
;
#line 157
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(229)));
#line 157
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 158
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(885)));
#line 158
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__13));
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(128)));
#line 159
c_rt_lib0delete(wprinter_priv0print_sim_arr(___ref___im__0, ___nl__im__14));
#line 159
c_rt_lib0clear(&___nl__im__14);
#line 160
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(938)));
#line 160
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__15));
#line 160
c_rt_lib0clear(&___nl__im__15);
#line 161
goto label_1;
#line 161
label_6:
;
#line 161
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(1395)));
#line 161
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 162
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(1192)));
#line 162
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__18));
#line 162
c_rt_lib0clear(&___nl__im__18);
#line 163
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(1193)));
#line 163
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__19));
#line 163
c_rt_lib0clear(&___nl__im__19);
#line 164
goto label_1;
#line 164
label_7:
;
#line 164
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(1396)));
#line 164
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 165
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 165
nl_die_arg(___nl__im__22);
#line 166
goto label_1;
#line 166
label_1:
;
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
//clear ___nl__bool__3;
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
c_rt_lib0clear(&___nl__im__11);
#line 166
c_rt_lib0clear(&___nl__im__12);
#line 166
c_rt_lib0clear(&___nl__im__16);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0clear(&___nl__im__20);
#line 166
c_rt_lib0clear(&___nl__im__21);
#line 166
c_rt_lib0clear(&___nl__im__22);
#line 166
return NULL;
}

ImmT  wprinter0print_t(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
#line 170
___nl__int__4 = wprinter_priv0get_tab_size();
#line 170
___nl__int__3 = ___nl__int__2 * ___nl__int__4;
#line 170
//clear ___nl__int__4;
#line 170
___nl__int__5 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__1, ___nl__int__3, ___nl__int__2);
#line 170
//clear ___nl__int__3;
#line 170
//clear ___nl__int__5;
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
//clear ___nl__int__2;
#line 170
return NULL;
}

INT  wprinter_priv0flush_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3,INT  ___nl__int__4,bool  ___nl__bool__5) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
#line 175
___nl__bool__6 = wprinter_priv0is_to_long(___nl__int__3);
#line 175
___nl__bool__6 = !___nl__bool__6;
#line 175
___nl__bool__6 = !___nl__bool__6;
#line 175
if(___nl__bool__6){ goto label_2;}
#line 176
___nl__int__8 = 0;
#line 176
___nl__int__9 = 1;
#line 176
___nl__int__10 = c_rt_lib0array_len(___nl__im__1);
#line 176
label_5:
;
#line 176
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 176
___nl__bool__11 = ___nl__int__12;
#line 176
if(___nl__bool__11){ goto label_3;}
#line 176
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__1, ___nl__int__8));
#line 176
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 177
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__7));
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
label_4:
;
#line 178
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 178
goto label_5;
#line 178
label_3:
;
#line 179
c_rt_lib0clear(&___nl__im__1);
#line 179
//clear ___nl__int__2;
#line 179
//clear ___nl__int__4;
#line 179
//clear ___nl__bool__5;
#line 179
//clear ___nl__bool__6;
#line 179
c_rt_lib0clear(&___nl__im__7);
#line 179
//clear ___nl__int__8;
#line 179
//clear ___nl__int__9;
#line 179
//clear ___nl__int__10;
#line 179
//clear ___nl__bool__11;
#line 179
//clear ___nl__int__12;
#line 179
c_rt_lib0clear(&___nl__im__13);
#line 179
return ___nl__int__3;
#line 180
goto label_1;
#line 180
label_2:
;
#line 181
___nl__int__18 = c_rt_lib0array_len(___nl__im__1);
#line 181
___nl__int__19 = 1;
#line 181
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 181
//clear ___nl__int__18;
#line 181
//clear ___nl__int__19;
#line 181
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__1, ___nl__int__17));
#line 181
//clear ___nl__int__17;
#line 181
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(1094)));
#line 181
c_rt_lib0clear(&___nl__im__16);
#line 181
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(1396));
#line 181
c_rt_lib0clear(&___nl__im__15);
#line 181
___nl__bool__14 = !___nl__bool__14;
#line 181
___nl__bool__14 = !___nl__bool__14;
#line 181
if(___nl__bool__14){ goto label_7;}
#line 182
___nl__int__24 = 1;
#line 182
___nl__int__23 = ___nl__int__4 + ___nl__int__24;
#line 182
//clear ___nl__int__24;
#line 182
___nl__int__25 = wprinter_priv0get_tab_size();
#line 182
___nl__int__22 = ___nl__int__23 * ___nl__int__25;
#line 182
//clear ___nl__int__23;
#line 182
//clear ___nl__int__25;
#line 182
___nl__int__26 = ___nl__int__22 < ___nl__int__2;
#line 182
___nl__bool__20 = ___nl__int__26;
#line 182
//clear ___nl__int__22;
#line 182
//clear ___nl__int__26;
#line 182
___nl__bool__21 = !___nl__bool__20;
#line 182
if(___nl__bool__21){ goto label_10;}
#line 182
___nl__bool__20 = ___nl__bool__5;
#line 182
___nl__bool__20 = !___nl__bool__20;
#line 182
label_10:
;
#line 182
//clear ___nl__bool__21;
#line 182
___nl__bool__20 = !___nl__bool__20;
#line 182
if(___nl__bool__20){ goto label_9;}
#line 183
c_rt_lib0move(&___nl__im__28, string0lf());
#line 183
___nl__int__31 = 1;
#line 183
___nl__int__30 = ___nl__int__4 + ___nl__int__31;
#line 183
//clear ___nl__int__31;
#line 183
c_rt_lib0move(&___nl__im__29, wprinter_priv0pind(___nl__int__30));
#line 183
//clear ___nl__int__30;
#line 183
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 183
c_rt_lib0clear(&___nl__im__28);
#line 183
c_rt_lib0clear(&___nl__im__29);
#line 183
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__27));
#line 183
c_rt_lib0clear(&___nl__im__27);
#line 184
___nl__int__33 = 1;
#line 184
___nl__int__32 = ___nl__int__4 + ___nl__int__33;
#line 184
//clear ___nl__int__33;
#line 184
___nl__int__34 = wprinter_priv0get_tab_size();
#line 184
___nl__int__2 = ___nl__int__32 * ___nl__int__34;
#line 184
//clear ___nl__int__32;
#line 184
//clear ___nl__int__34;
#line 185
goto label_8;
#line 185
label_9:
;
#line 185
label_8:
;
#line 185
//clear ___nl__bool__20;
#line 186
goto label_6;
#line 186
label_7:
;
#line 186
label_6:
;
#line 186
//clear ___nl__bool__14;
#line 187
___nl__int__36 = 0;
#line 187
___nl__int__37 = 1;
#line 187
___nl__int__38 = c_rt_lib0array_len(___nl__im__1);
#line 187
label_13:
;
#line 187
___nl__int__40 = ___nl__int__36 >= ___nl__int__38;
#line 187
___nl__bool__39 = ___nl__int__40;
#line 187
if(___nl__bool__39){ goto label_11;}
#line 187
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__1, ___nl__int__36));
#line 187
c_rt_lib0copy(&___nl__im__35, ___nl__im__41);
#line 188
___nl__int__43 = 1;
#line 188
___nl__int__42 = ___nl__int__4 + ___nl__int__43;
#line 188
//clear ___nl__int__43;
#line 188
___nl__int__2 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__35, ___nl__int__2, ___nl__int__42);
#line 188
//clear ___nl__int__42;
#line 188
c_rt_lib0clear(&___nl__im__35);
#line 188
label_12:
;
#line 189
___nl__int__36 = ___nl__int__36 + ___nl__int__37;
#line 189
goto label_13;
#line 189
label_11:
;
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__int__3;
#line 190
//clear ___nl__int__4;
#line 190
//clear ___nl__bool__5;
#line 190
//clear ___nl__bool__6;
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
//clear ___nl__int__8;
#line 190
//clear ___nl__int__9;
#line 190
//clear ___nl__int__10;
#line 190
//clear ___nl__bool__11;
#line 190
//clear ___nl__int__12;
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__35);
#line 190
//clear ___nl__int__36;
#line 190
//clear ___nl__int__37;
#line 190
//clear ___nl__int__38;
#line 190
//clear ___nl__bool__39;
#line 190
//clear ___nl__int__40;
#line 190
c_rt_lib0clear(&___nl__im__41);
#line 190
return ___nl__int__2;
#line 191
goto label_1;
#line 191
label_1:
;
#line 191
//clear ___nl__bool__6;
#line 191
c_rt_lib0clear(&___nl__im__7);
#line 191
//clear ___nl__int__8;
#line 191
//clear ___nl__int__9;
#line 191
//clear ___nl__int__10;
#line 191
//clear ___nl__bool__11;
#line 191
//clear ___nl__int__12;
#line 191
c_rt_lib0clear(&___nl__im__13);
#line 191
c_rt_lib0clear(&___nl__im__35);
#line 191
//clear ___nl__int__36;
#line 191
//clear ___nl__int__37;
#line 191
//clear ___nl__int__38;
#line 191
//clear ___nl__bool__39;
#line 191
//clear ___nl__int__40;
#line 191
c_rt_lib0clear(&___nl__im__41);
}

INT  wprinter_priv0print_arr_in_lines(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
#line 196
___nl__int__5 = 0;
#line 196
___nl__int__6 = 1;
#line 196
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 196
label_3:
;
#line 196
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 196
___nl__bool__8 = ___nl__int__9;
#line 196
if(___nl__bool__8){ goto label_1;}
#line 196
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 196
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 197
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(1094)));
#line 197
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(1387));
#line 197
c_rt_lib0clear(&___nl__im__12);
#line 197
___nl__bool__11 = !___nl__bool__11;
#line 197
if(___nl__bool__11){ goto label_5;}
#line 198
c_rt_lib0move(&___nl__im__14, string0lf());
#line 198
c_rt_lib0move(&___nl__im__15, wprinter_priv0pind(___nl__int__2));
#line 198
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 198
c_rt_lib0clear(&___nl__im__14);
#line 198
c_rt_lib0clear(&___nl__im__15);
#line 198
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__13));
#line 198
c_rt_lib0clear(&___nl__im__13);
#line 199
___nl__int__16 = wprinter_priv0get_tab_size();
#line 199
___nl__int__3 = ___nl__int__2 * ___nl__int__16;
#line 199
//clear ___nl__int__16;
#line 200
goto label_2;
#line 201
goto label_4;
#line 201
label_5:
;
#line 201
label_4:
;
#line 201
//clear ___nl__bool__11;
#line 202
___nl__int__3 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__4, ___nl__int__3, ___nl__int__2);
#line 202
c_rt_lib0clear(&___nl__im__4);
#line 202
label_2:
;
#line 203
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 203
goto label_3;
#line 203
label_1:
;
#line 204
c_rt_lib0clear(&___nl__im__1);
#line 204
//clear ___nl__int__2;
#line 204
c_rt_lib0clear(&___nl__im__4);
#line 204
//clear ___nl__int__5;
#line 204
//clear ___nl__int__6;
#line 204
//clear ___nl__int__7;
#line 204
//clear ___nl__bool__8;
#line 204
//clear ___nl__int__9;
#line 204
c_rt_lib0clear(&___nl__im__10);
#line 204
return ___nl__int__3;
}

INT  wprinter_priv0process_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,bool  ___nl__bool__2,INT  ___nl__int__3,INT  ___nl__int__4) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
#line 209
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 210
___nl__int__6 = 0;
#line 211
___nl__bool__7 = true;
#line 212
___nl__int__8 = c_rt_lib0array_len(___nl__im__1);
#line 212
___nl__int__9 = 0;
#line 212
___nl__int__10 = 1;
#line 212
label_3:
;
#line 212
___nl__int__12 = ___nl__int__9 >= ___nl__int__8;
#line 212
___nl__bool__11 = ___nl__int__12;
#line 212
if(___nl__bool__11){ goto label_1;}
#line 213
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__1, ___nl__int__9));
#line 214
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(1094)));
#line 214
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(1387));
#line 214
c_rt_lib0clear(&___nl__im__15);
#line 214
___nl__bool__14 = !___nl__bool__14;
#line 214
if(___nl__bool__14){ goto label_5;}
#line 215
___nl__int__16 = ___nl__int__6 + ___nl__int__3;
#line 215
if(___nl__bool__2){ goto label_7;}
#line 215
___nl__int__18 = 0;
#line 215
goto label_6;
#line 215
label_7:
;
#line 215
___nl__int__18 = 1;
#line 215
label_6:
;
#line 215
___nl__int__17 = ___nl__int__4 - ___nl__int__18;
#line 215
//clear ___nl__int__18;
#line 215
___nl__bool__19 = ___nl__bool__7;
#line 215
if(___nl__bool__19){ goto label_8;}
#line 215
___nl__bool__19 = ___nl__bool__2;
#line 215
___nl__bool__19 = !___nl__bool__19;
#line 215
label_8:
;
#line 215
//clear ___nl__bool__20;
#line 215
___nl__int__3 = wprinter_priv0flush_list(___ref___im__0, ___nl__im__5, ___nl__int__3, ___nl__int__16, ___nl__int__17, ___nl__bool__19);
#line 215
//clear ___nl__int__16;
#line 215
//clear ___nl__int__17;
#line 215
//clear ___nl__bool__19;
#line 216
___nl__bool__7 = false;
#line 217
c_rt_lib0move(&___nl__im__21,___get_global_const(428));
#line 217
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__21));
#line 217
c_rt_lib0clear(&___nl__im__21);
#line 218
___nl__int__22 = 1;
#line 218
___nl__int__3 = ___nl__int__3 + ___nl__int__22;
#line 218
//clear ___nl__int__22;
#line 219
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 220
___nl__int__6 = 0;
#line 221
goto label_4;
#line 221
label_5:
;
#line 222
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__13));
#line 223
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(282)));
#line 223
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 223
c_rt_lib0clear(&___nl__im__24);
#line 223
___nl__int__6 = ___nl__int__6 + ___nl__int__23;
#line 223
//clear ___nl__int__23;
#line 224
goto label_4;
#line 224
label_4:
;
#line 224
//clear ___nl__bool__14;
#line 224
c_rt_lib0clear(&___nl__im__13);
#line 224
label_2:
;
#line 225
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 225
goto label_3;
#line 225
label_1:
;
#line 227
___nl__int__26 = c_rt_lib0array_len(___nl__im__5);
#line 227
___nl__int__27 = 0;
#line 227
___nl__int__28 = ___nl__int__26 > ___nl__int__27;
#line 227
___nl__bool__25 = ___nl__int__28;
#line 227
//clear ___nl__int__26;
#line 227
//clear ___nl__int__27;
#line 227
//clear ___nl__int__28;
#line 227
___nl__bool__25 = !___nl__bool__25;
#line 227
if(___nl__bool__25){ goto label_10;}
#line 226
___nl__int__29 = ___nl__int__6 + ___nl__int__3;
#line 226
if(___nl__bool__2){ goto label_12;}
#line 226
___nl__int__31 = 0;
#line 226
goto label_11;
#line 226
label_12:
;
#line 226
___nl__int__31 = 1;
#line 226
label_11:
;
#line 226
___nl__int__30 = ___nl__int__4 - ___nl__int__31;
#line 226
//clear ___nl__int__31;
#line 226
___nl__bool__32 = ___nl__bool__7;
#line 226
if(___nl__bool__32){ goto label_13;}
#line 226
___nl__bool__32 = ___nl__bool__2;
#line 226
___nl__bool__32 = !___nl__bool__32;
#line 226
label_13:
;
#line 226
//clear ___nl__bool__33;
#line 226
___nl__int__3 = wprinter_priv0flush_list(___ref___im__0, ___nl__im__5, ___nl__int__3, ___nl__int__29, ___nl__int__30, ___nl__bool__32);
#line 226
//clear ___nl__int__29;
#line 226
//clear ___nl__int__30;
#line 226
//clear ___nl__bool__32;
#line 226
goto label_9;
#line 226
label_10:
;
#line 226
label_9:
;
#line 226
//clear ___nl__bool__25;
#line 228
c_rt_lib0clear(&___nl__im__1);
#line 228
//clear ___nl__bool__2;
#line 228
//clear ___nl__int__4;
#line 228
c_rt_lib0clear(&___nl__im__5);
#line 228
//clear ___nl__int__6;
#line 228
//clear ___nl__bool__7;
#line 228
//clear ___nl__int__8;
#line 228
//clear ___nl__int__9;
#line 228
//clear ___nl__int__10;
#line 228
//clear ___nl__bool__11;
#line 228
//clear ___nl__int__12;
#line 228
c_rt_lib0clear(&___nl__im__13);
#line 228
return ___nl__int__3;
}

INT  wprinter_priv0print_t_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
bool  ___nl__bool__72 = false;
INT  ___nl__int__73 = 0;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
ImmT  ___nl__im__85 = NULL;
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
INT  ___nl__int__93 = 0;
#line 233
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(282)));
#line 233
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 233
c_rt_lib0clear(&___nl__im__7);
#line 233
___nl__int__5 = ___nl__int__6 + ___nl__int__2;
#line 233
//clear ___nl__int__6;
#line 233
___nl__bool__4 = wprinter_priv0is_to_long(___nl__int__5);
#line 233
//clear ___nl__int__5;
#line 233
___nl__bool__4 = !___nl__bool__4;
#line 233
___nl__bool__4 = !___nl__bool__4;
#line 233
if(___nl__bool__4){ goto label_2;}
#line 234
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__1));
#line 235
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(282)));
#line 235
___nl__int__8 = getIntFromImm(___nl__im__9);
#line 235
c_rt_lib0clear(&___nl__im__9);
#line 235
___nl__int__2 = ___nl__int__2 + ___nl__int__8;
#line 235
//clear ___nl__int__8;
#line 236
c_rt_lib0clear(&___nl__im__1);
#line 236
//clear ___nl__int__3;
#line 236
//clear ___nl__bool__4;
#line 236
return ___nl__int__2;
#line 237
goto label_1;
#line 237
label_2:
;
#line 237
label_1:
;
#line 237
//clear ___nl__bool__4;
#line 238
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1094)));
#line 238
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(378));
#line 238
if(___nl__bool__11){ goto label_4;}
#line 246
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(229));
#line 246
if(___nl__bool__11){ goto label_5;}
#line 253
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(128));
#line 253
if(___nl__bool__11){ goto label_6;}
#line 262
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(1395));
#line 262
if(___nl__bool__11){ goto label_7;}
#line 267
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(1387));
#line 267
if(___nl__bool__11){ goto label_8;}
#line 270
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(1396));
#line 270
if(___nl__bool__11){ goto label_9;}
#line 270
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 270
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 270
nl_die_arg(___nl__im__12);
#line 238
label_4:
;
#line 238
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(378)));
#line 238
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 239
c_rt_lib0move(&___nl__im__17,___get_global_const(294));
#line 239
___nl__bool__15 = c_rt_lib0eq(___nl__im__13, ___nl__im__17);
#line 239
c_rt_lib0clear(&___nl__im__17);
#line 239
if(___nl__bool__15){ goto label_12;}
#line 239
c_rt_lib0move(&___nl__im__18,___get_global_const(298));
#line 239
___nl__bool__15 = c_rt_lib0eq(___nl__im__13, ___nl__im__18);
#line 239
c_rt_lib0clear(&___nl__im__18);
#line 239
label_12:
;
#line 239
//clear ___nl__bool__16;
#line 239
___nl__bool__15 = !___nl__bool__15;
#line 239
if(___nl__bool__15){ goto label_11;}
#line 240
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__13));
#line 241
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(282)));
#line 241
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 241
c_rt_lib0clear(&___nl__im__21);
#line 241
___nl__int__19 = ___nl__int__2 + ___nl__int__20;
#line 241
//clear ___nl__int__20;
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
//clear ___nl__int__2;
#line 241
//clear ___nl__int__3;
#line 241
c_rt_lib0clear(&___nl__im__10);
#line 241
//clear ___nl__bool__11;
#line 241
c_rt_lib0clear(&___nl__im__12);
#line 241
c_rt_lib0clear(&___nl__im__13);
#line 241
c_rt_lib0clear(&___nl__im__14);
#line 241
//clear ___nl__bool__15;
#line 241
return ___nl__int__19;
#line 242
goto label_10;
#line 242
label_11:
;
#line 242
label_10:
;
#line 242
//clear ___nl__bool__15;
#line 242
//clear ___nl__int__19;
#line 243
___nl__int__24 = wprinter_priv0get_tab_size();
#line 243
___nl__int__23 = ___nl__int__3 * ___nl__int__24;
#line 243
//clear ___nl__int__24;
#line 243
___nl__int__25 = ___nl__int__2 != ___nl__int__23;
#line 243
___nl__bool__22 = ___nl__int__25;
#line 243
//clear ___nl__int__23;
#line 243
//clear ___nl__int__25;
#line 243
___nl__bool__22 = !___nl__bool__22;
#line 243
if(___nl__bool__22){ goto label_14;}
#line 243
c_rt_lib0move(&___nl__im__27, string0lf());
#line 243
c_rt_lib0move(&___nl__im__28, wprinter_priv0pind(___nl__int__3));
#line 243
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 243
c_rt_lib0clear(&___nl__im__27);
#line 243
c_rt_lib0clear(&___nl__im__28);
#line 243
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__26));
#line 243
c_rt_lib0clear(&___nl__im__26);
#line 243
goto label_13;
#line 243
label_14:
;
#line 243
label_13:
;
#line 243
//clear ___nl__bool__22;
#line 244
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__1));
#line 245
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(282)));
#line 245
___nl__int__30 = getIntFromImm(___nl__im__31);
#line 245
c_rt_lib0clear(&___nl__im__31);
#line 245
___nl__int__33 = wprinter_priv0get_tab_size();
#line 245
___nl__int__32 = ___nl__int__3 * ___nl__int__33;
#line 245
//clear ___nl__int__33;
#line 245
___nl__int__29 = ___nl__int__30 + ___nl__int__32;
#line 245
//clear ___nl__int__30;
#line 245
//clear ___nl__int__32;
#line 245
c_rt_lib0clear(&___nl__im__1);
#line 245
//clear ___nl__int__2;
#line 245
//clear ___nl__int__3;
#line 245
c_rt_lib0clear(&___nl__im__10);
#line 245
//clear ___nl__bool__11;
#line 245
c_rt_lib0clear(&___nl__im__12);
#line 245
c_rt_lib0clear(&___nl__im__13);
#line 245
c_rt_lib0clear(&___nl__im__14);
#line 245
return ___nl__int__29;
#line 246
goto label_3;
#line 246
label_5:
;
#line 246
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(229)));
#line 246
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 247
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(885)));
#line 247
c_rt_lib0move(&___nl__im__39, string0lf());
#line 247
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 247
c_rt_lib0clear(&___nl__im__38);
#line 247
c_rt_lib0clear(&___nl__im__39);
#line 247
___nl__int__42 = 1;
#line 247
___nl__int__41 = ___nl__int__3 + ___nl__int__42;
#line 247
//clear ___nl__int__42;
#line 247
c_rt_lib0move(&___nl__im__40, wprinter_priv0pind(___nl__int__41));
#line 247
//clear ___nl__int__41;
#line 247
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__40));
#line 247
c_rt_lib0clear(&___nl__im__37);
#line 247
c_rt_lib0clear(&___nl__im__40);
#line 247
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__36));
#line 247
c_rt_lib0clear(&___nl__im__36);
#line 248
___nl__int__44 = 1;
#line 248
___nl__int__43 = ___nl__int__3 + ___nl__int__44;
#line 248
//clear ___nl__int__44;
#line 248
___nl__int__45 = wprinter_priv0get_tab_size();
#line 248
___nl__int__2 = ___nl__int__43 * ___nl__int__45;
#line 248
//clear ___nl__int__43;
#line 248
//clear ___nl__int__45;
#line 249
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(128)));
#line 249
___nl__int__48 = 1;
#line 249
___nl__int__47 = ___nl__int__3 + ___nl__int__48;
#line 249
//clear ___nl__int__48;
#line 249
___nl__int__2 = wprinter_priv0print_arr_in_lines(___ref___im__0, ___nl__im__46, ___nl__int__47, ___nl__int__2);
#line 249
c_rt_lib0clear(&___nl__im__46);
#line 249
//clear ___nl__int__47;
#line 250
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(128)));
#line 250
___nl__int__50 = c_rt_lib0array_len(___nl__im__51);
#line 250
c_rt_lib0clear(&___nl__im__51);
#line 250
___nl__int__52 = 0;
#line 250
___nl__int__53 = ___nl__int__50 > ___nl__int__52;
#line 250
___nl__bool__49 = ___nl__int__53;
#line 250
//clear ___nl__int__50;
#line 250
//clear ___nl__int__52;
#line 250
//clear ___nl__int__53;
#line 250
___nl__bool__49 = !___nl__bool__49;
#line 250
if(___nl__bool__49){ goto label_16;}
#line 250
c_rt_lib0move(&___nl__im__55, string0lf());
#line 250
c_rt_lib0move(&___nl__im__56, wprinter_priv0pind(___nl__int__3));
#line 250
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__56));
#line 250
c_rt_lib0clear(&___nl__im__55);
#line 250
c_rt_lib0clear(&___nl__im__56);
#line 250
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__54));
#line 250
c_rt_lib0clear(&___nl__im__54);
#line 250
goto label_15;
#line 250
label_16:
;
#line 250
label_15:
;
#line 250
//clear ___nl__bool__49;
#line 251
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(938)));
#line 251
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__57));
#line 251
c_rt_lib0clear(&___nl__im__57);
#line 252
___nl__int__60 = wprinter_priv0get_tab_size();
#line 252
___nl__int__59 = ___nl__int__3 * ___nl__int__60;
#line 252
//clear ___nl__int__60;
#line 252
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(938)));
#line 252
___nl__int__61 = string0length(___nl__im__62);
#line 252
c_rt_lib0clear(&___nl__im__62);
#line 252
___nl__int__58 = ___nl__int__59 + ___nl__int__61;
#line 252
//clear ___nl__int__59;
#line 252
//clear ___nl__int__61;
#line 252
c_rt_lib0clear(&___nl__im__1);
#line 252
//clear ___nl__int__2;
#line 252
//clear ___nl__int__3;
#line 252
c_rt_lib0clear(&___nl__im__10);
#line 252
//clear ___nl__bool__11;
#line 252
c_rt_lib0clear(&___nl__im__12);
#line 252
c_rt_lib0clear(&___nl__im__13);
#line 252
c_rt_lib0clear(&___nl__im__14);
#line 252
//clear ___nl__int__29;
#line 252
c_rt_lib0clear(&___nl__im__34);
#line 252
c_rt_lib0clear(&___nl__im__35);
#line 252
return ___nl__int__58;
#line 253
goto label_3;
#line 253
label_6:
;
#line 253
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(128)));
#line 253
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 254
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(128)));
#line 255
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(204)));
#line 255
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__66, ___get_global_const(38));
#line 255
if(___nl__bool__67){ goto label_18;}
#line 257
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__66, ___get_global_const(1388));
#line 257
if(___nl__bool__67){ goto label_19;}
#line 259
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__66, ___get_global_const(1389));
#line 259
if(___nl__bool__67){ goto label_20;}
#line 259
c_rt_lib0move(&___nl__im__68,___get_global_const(16));
#line 259
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(2, ___nl__im__68, ___nl__im__66));
#line 259
nl_die_arg(___nl__im__68);
#line 255
label_18:
;
#line 256
___nl__int__70 = 1;
#line 256
___nl__int__69 = ___nl__int__3 + ___nl__int__70;
#line 256
//clear ___nl__int__70;
#line 256
___nl__int__2 = wprinter_priv0print_arr_in_lines(___ref___im__0, ___nl__im__65, ___nl__int__69, ___nl__int__2);
#line 256
//clear ___nl__int__69;
#line 257
goto label_17;
#line 257
label_19:
;
#line 258
___nl__bool__72 = false;
#line 258
___nl__int__71 = wprinter_priv0process_list(___ref___im__0, ___nl__im__65, ___nl__bool__72, ___nl__int__2, ___nl__int__3);
#line 258
//clear ___nl__bool__72;
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
//clear ___nl__int__2;
#line 258
//clear ___nl__int__3;
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
//clear ___nl__bool__11;
#line 258
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0clear(&___nl__im__14);
#line 258
//clear ___nl__int__29;
#line 258
c_rt_lib0clear(&___nl__im__34);
#line 258
c_rt_lib0clear(&___nl__im__35);
#line 258
//clear ___nl__int__58;
#line 258
c_rt_lib0clear(&___nl__im__63);
#line 258
c_rt_lib0clear(&___nl__im__64);
#line 258
c_rt_lib0clear(&___nl__im__65);
#line 258
c_rt_lib0clear(&___nl__im__66);
#line 258
//clear ___nl__bool__67;
#line 258
c_rt_lib0clear(&___nl__im__68);
#line 258
return ___nl__int__71;
#line 259
goto label_17;
#line 259
label_20:
;
#line 260
___nl__bool__74 = true;
#line 260
___nl__int__73 = wprinter_priv0process_list(___ref___im__0, ___nl__im__65, ___nl__bool__74, ___nl__int__2, ___nl__int__3);
#line 260
//clear ___nl__bool__74;
#line 260
c_rt_lib0clear(&___nl__im__1);
#line 260
//clear ___nl__int__2;
#line 260
//clear ___nl__int__3;
#line 260
c_rt_lib0clear(&___nl__im__10);
#line 260
//clear ___nl__bool__11;
#line 260
c_rt_lib0clear(&___nl__im__12);
#line 260
c_rt_lib0clear(&___nl__im__13);
#line 260
c_rt_lib0clear(&___nl__im__14);
#line 260
//clear ___nl__int__29;
#line 260
c_rt_lib0clear(&___nl__im__34);
#line 260
c_rt_lib0clear(&___nl__im__35);
#line 260
//clear ___nl__int__58;
#line 260
c_rt_lib0clear(&___nl__im__63);
#line 260
c_rt_lib0clear(&___nl__im__64);
#line 260
c_rt_lib0clear(&___nl__im__65);
#line 260
c_rt_lib0clear(&___nl__im__66);
#line 260
//clear ___nl__bool__67;
#line 260
c_rt_lib0clear(&___nl__im__68);
#line 260
//clear ___nl__int__71;
#line 260
return ___nl__int__73;
#line 261
goto label_17;
#line 261
label_17:
;
#line 262
goto label_3;
#line 262
label_7:
;
#line 262
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(1395)));
#line 262
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 263
c_rt_lib0move(&___nl__im__78, string0lf());
#line 263
c_rt_lib0move(&___nl__im__79, wprinter_priv0pind(___nl__int__3));
#line 263
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__79));
#line 263
c_rt_lib0clear(&___nl__im__78);
#line 263
c_rt_lib0clear(&___nl__im__79);
#line 263
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__77));
#line 263
c_rt_lib0clear(&___nl__im__77);
#line 264
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(1192)));
#line 264
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_const(282)));
#line 264
___nl__int__80 = getIntFromImm(___nl__im__82);
#line 264
c_rt_lib0clear(&___nl__im__81);
#line 264
c_rt_lib0clear(&___nl__im__82);
#line 264
___nl__int__84 = wprinter_priv0get_tab_size();
#line 264
___nl__int__83 = ___nl__int__3 * ___nl__int__84;
#line 264
//clear ___nl__int__84;
#line 264
___nl__int__2 = ___nl__int__80 + ___nl__int__83;
#line 264
//clear ___nl__int__80;
#line 264
//clear ___nl__int__83;
#line 265
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(1192)));
#line 265
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__85));
#line 265
c_rt_lib0clear(&___nl__im__85);
#line 266
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(1193)));
#line 266
___nl__int__86 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__87, ___nl__int__2, ___nl__int__3);
#line 266
c_rt_lib0clear(&___nl__im__87);
#line 266
c_rt_lib0clear(&___nl__im__1);
#line 266
//clear ___nl__int__2;
#line 266
//clear ___nl__int__3;
#line 266
c_rt_lib0clear(&___nl__im__10);
#line 266
//clear ___nl__bool__11;
#line 266
c_rt_lib0clear(&___nl__im__12);
#line 266
c_rt_lib0clear(&___nl__im__13);
#line 266
c_rt_lib0clear(&___nl__im__14);
#line 266
//clear ___nl__int__29;
#line 266
c_rt_lib0clear(&___nl__im__34);
#line 266
c_rt_lib0clear(&___nl__im__35);
#line 266
//clear ___nl__int__58;
#line 266
c_rt_lib0clear(&___nl__im__63);
#line 266
c_rt_lib0clear(&___nl__im__64);
#line 266
c_rt_lib0clear(&___nl__im__65);
#line 266
c_rt_lib0clear(&___nl__im__66);
#line 266
//clear ___nl__bool__67;
#line 266
c_rt_lib0clear(&___nl__im__68);
#line 266
//clear ___nl__int__71;
#line 266
//clear ___nl__int__73;
#line 266
c_rt_lib0clear(&___nl__im__75);
#line 266
c_rt_lib0clear(&___nl__im__76);
#line 266
return ___nl__int__86;
#line 267
goto label_3;
#line 267
label_8:
;
#line 268
c_rt_lib0move(&___nl__im__88,___get_global_const(428));
#line 268
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__88));
#line 268
c_rt_lib0clear(&___nl__im__88);
#line 269
___nl__int__90 = 1;
#line 269
___nl__int__89 = ___nl__int__2 + ___nl__int__90;
#line 269
//clear ___nl__int__90;
#line 269
c_rt_lib0clear(&___nl__im__1);
#line 269
//clear ___nl__int__2;
#line 269
//clear ___nl__int__3;
#line 269
c_rt_lib0clear(&___nl__im__10);
#line 269
//clear ___nl__bool__11;
#line 269
c_rt_lib0clear(&___nl__im__12);
#line 269
c_rt_lib0clear(&___nl__im__13);
#line 269
c_rt_lib0clear(&___nl__im__14);
#line 269
//clear ___nl__int__29;
#line 269
c_rt_lib0clear(&___nl__im__34);
#line 269
c_rt_lib0clear(&___nl__im__35);
#line 269
//clear ___nl__int__58;
#line 269
c_rt_lib0clear(&___nl__im__63);
#line 269
c_rt_lib0clear(&___nl__im__64);
#line 269
c_rt_lib0clear(&___nl__im__65);
#line 269
c_rt_lib0clear(&___nl__im__66);
#line 269
//clear ___nl__bool__67;
#line 269
c_rt_lib0clear(&___nl__im__68);
#line 269
//clear ___nl__int__71;
#line 269
//clear ___nl__int__73;
#line 269
c_rt_lib0clear(&___nl__im__75);
#line 269
c_rt_lib0clear(&___nl__im__76);
#line 269
//clear ___nl__int__86;
#line 269
return ___nl__int__89;
#line 270
goto label_3;
#line 270
label_9:
;
#line 270
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(1396)));
#line 270
c_rt_lib0copy(&___nl__im__91, ___nl__im__92);
#line 271
___nl__int__93 = wprinter_priv0print_str_arr(___ref___im__0, ___nl__im__91, ___nl__int__2, ___nl__int__3);
#line 271
c_rt_lib0clear(&___nl__im__1);
#line 271
//clear ___nl__int__2;
#line 271
//clear ___nl__int__3;
#line 271
c_rt_lib0clear(&___nl__im__10);
#line 271
//clear ___nl__bool__11;
#line 271
c_rt_lib0clear(&___nl__im__12);
#line 271
c_rt_lib0clear(&___nl__im__13);
#line 271
c_rt_lib0clear(&___nl__im__14);
#line 271
//clear ___nl__int__29;
#line 271
c_rt_lib0clear(&___nl__im__34);
#line 271
c_rt_lib0clear(&___nl__im__35);
#line 271
//clear ___nl__int__58;
#line 271
c_rt_lib0clear(&___nl__im__63);
#line 271
c_rt_lib0clear(&___nl__im__64);
#line 271
c_rt_lib0clear(&___nl__im__65);
#line 271
c_rt_lib0clear(&___nl__im__66);
#line 271
//clear ___nl__bool__67;
#line 271
c_rt_lib0clear(&___nl__im__68);
#line 271
//clear ___nl__int__71;
#line 271
//clear ___nl__int__73;
#line 271
c_rt_lib0clear(&___nl__im__75);
#line 271
c_rt_lib0clear(&___nl__im__76);
#line 271
//clear ___nl__int__86;
#line 271
//clear ___nl__int__89;
#line 271
c_rt_lib0clear(&___nl__im__91);
#line 271
c_rt_lib0clear(&___nl__im__92);
#line 271
return ___nl__int__93;
#line 272
goto label_3;
#line 272
label_3:
;
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
//clear ___nl__int__3;
#line 273
c_rt_lib0clear(&___nl__im__10);
#line 273
//clear ___nl__bool__11;
#line 273
c_rt_lib0clear(&___nl__im__12);
#line 273
c_rt_lib0clear(&___nl__im__13);
#line 273
c_rt_lib0clear(&___nl__im__14);
#line 273
//clear ___nl__int__29;
#line 273
c_rt_lib0clear(&___nl__im__34);
#line 273
c_rt_lib0clear(&___nl__im__35);
#line 273
//clear ___nl__int__58;
#line 273
c_rt_lib0clear(&___nl__im__63);
#line 273
c_rt_lib0clear(&___nl__im__64);
#line 273
c_rt_lib0clear(&___nl__im__65);
#line 273
c_rt_lib0clear(&___nl__im__66);
#line 273
//clear ___nl__bool__67;
#line 273
c_rt_lib0clear(&___nl__im__68);
#line 273
//clear ___nl__int__71;
#line 273
//clear ___nl__int__73;
#line 273
c_rt_lib0clear(&___nl__im__75);
#line 273
c_rt_lib0clear(&___nl__im__76);
#line 273
//clear ___nl__int__86;
#line 273
//clear ___nl__int__89;
#line 273
c_rt_lib0clear(&___nl__im__91);
#line 273
c_rt_lib0clear(&___nl__im__92);
#line 273
//clear ___nl__int__93;
#line 273
return ___nl__int__2;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void wprinter_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT wprinter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT wprinter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
