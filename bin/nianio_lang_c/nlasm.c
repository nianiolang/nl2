
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nlasm.h"
#include "ptd.h"
#include "nast.h"
#include "tct.h"
#include "tct.h"
#include "nast.h"
#include "nlasm.h"
#line 1 "nlasm.nl"

static ImmT *__const__f = NULL;
void nlasm_priv0__const__init();
ImmT nlasm_priv0__const__sim(int __nr);
ImmT nlasm_priv0__const__sing(int __nr);



ImmT  nlasm0result_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0result_t");
ImmT  res = nlasm0result_t();
return res;
}
ImmT nlasm0result_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(0);
}
ImmT nlasm0result_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 12
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 13
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_string_const(336), ___get_global_string_const(819)));
#line 13
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 13
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 13
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 14
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(213), ___nl__im__2, ___get_global_string_const(209), ___nl__im__3, ___get_global_string_const(479), ___nl__im__5));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
return ___nl__im__0;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
return NULL;
return NULL;

}

ImmT  nlasm0access_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0access_t");
ImmT  res = nlasm0access_t();
return res;
}
ImmT nlasm0access_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(1);
}
ImmT nlasm0access_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 19
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 19
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(211), ___nl__im__2, ___get_global_string_const(467), ___nl__im__3));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 19
c_rt_lib0clear(&___nl__im__1);
#line 19
return ___nl__im__0;
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
return NULL;
return NULL;

}

ImmT  nlasm0arg_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0arg_type_t");
ImmT  res = nlasm0arg_type_t();
return res;
}
ImmT nlasm0arg_type_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(2);
}
ImmT nlasm0arg_type_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 24
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(225), ___nl__im__4, ___get_global_string_const(39), ___nl__im__5));
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
c_rt_lib0clear(&___nl__im__5);
#line 24
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(355), ___nl__im__2, ___get_global_string_const(471), ___nl__im__6, ___get_global_string_const(206), ___nl__im__7));
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__6);
#line 26
c_rt_lib0clear(&___nl__im__7);
#line 26
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
return ___nl__im__0;
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
return NULL;
return NULL;

}

ImmT  nlasm0function_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0function_t");
ImmT  res = nlasm0function_t();
return res;
}
ImmT nlasm0function_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(3);
}
ImmT nlasm0function_t0cal() {
nlasm_priv0__const__init();
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
#line 32
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_string_const(71), ___nl__im__4, ___get_global_string_const(194), ___nl__im__5, ___get_global_string_const(1087), ___nl__im__6));
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
c_rt_lib0clear(&___nl__im__5);
#line 32
c_rt_lib0clear(&___nl__im__6);
#line 32
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 33
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0access_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1088)));
#line 33
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 34
c_rt_lib0move(&___nl__im__8, ptd0arr(___nl__im__9));
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0args_type0ptr, ___get_global_string_const(336), ___get_global_string_const(215)));
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 37
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_string_const(336), ___get_global_string_const(403)));
#line 37
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__12));
#line 38
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nlasm0cmds_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1089)));
#line 38
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 39
c_rt_lib0move(&___nl__im__14, ptd0string());
#line 40
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 40
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__18));
#line 40
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_string_const(76), ___nl__im__17, ___get_global_string_const(75), ___nl__im__18));
#line 40
c_rt_lib0clear(&___nl__im__17);
#line 40
c_rt_lib0clear(&___nl__im__18);
#line 40
c_rt_lib0move(&___nl__im__15, ptd0var(___nl__im__16));
#line 40
c_rt_lib0clear(&___nl__im__16);
#line 41
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0var_decl_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1090)));
#line 41
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 41
c_rt_lib0move(&___nl__im__19, ptd0arr(___nl__im__20));
#line 41
c_rt_lib0clear(&___nl__im__20);
#line 41
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(227), ___nl__im__2, ___get_global_string_const(210), ___nl__im__7, ___get_global_string_const(216), ___nl__im__8, ___get_global_string_const(215), ___nl__im__10, ___get_global_string_const(468), ___nl__im__11, ___get_global_string_const(417), ___nl__im__12, ___get_global_string_const(214), ___nl__im__13, ___get_global_string_const(168), ___nl__im__14, ___get_global_string_const(167), ___nl__im__15, ___get_global_string_const(840), ___nl__im__19));
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
c_rt_lib0clear(&___nl__im__7);
#line 41
c_rt_lib0clear(&___nl__im__8);
#line 41
c_rt_lib0clear(&___nl__im__10);
#line 41
c_rt_lib0clear(&___nl__im__11);
#line 41
c_rt_lib0clear(&___nl__im__12);
#line 41
c_rt_lib0clear(&___nl__im__13);
#line 41
c_rt_lib0clear(&___nl__im__14);
#line 41
c_rt_lib0clear(&___nl__im__15);
#line 41
c_rt_lib0clear(&___nl__im__19);
#line 41
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
return ___nl__im__0;
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
return NULL;
return NULL;

}

ImmT  nlasm0cmds_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0cmds_t");
ImmT  res = nlasm0cmds_t();
return res;
}
ImmT nlasm0cmds_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(4);
}
ImmT nlasm0cmds_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 46
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0cmd_t0ptr, ___get_global_string_const(336), ___get_global_string_const(337)));
#line 46
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 46
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
return ___nl__im__0;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
return NULL;
return NULL;

}

ImmT  nlasm0args_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0args_type");
ImmT  res = nlasm0args_type();
return res;
}
ImmT nlasm0args_type(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(5);
}
ImmT nlasm0args_type0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_string_const(336), ___get_global_string_const(398)));
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 50
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
return ___nl__im__0;
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
return NULL;
return NULL;

}

ImmT  nlasm0reg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0reg_t");
ImmT  res = nlasm0reg_t();
return res;
}
ImmT nlasm0reg_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(6);
}
ImmT nlasm0reg_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 55
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_string_const(336), ___get_global_string_const(403)));
#line 55
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 56
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 57
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_access_type_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1091)));
#line 57
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 57
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__2, ___get_global_string_const(219), ___nl__im__3, ___get_global_string_const(353), ___nl__im__4));
#line 57
c_rt_lib0clear(&___nl__im__2);
#line 57
c_rt_lib0clear(&___nl__im__3);
#line 57
c_rt_lib0clear(&___nl__im__4);
#line 57
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
return ___nl__im__0;
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
return NULL;
return NULL;

}

ImmT  nlasm0debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0debug_t");
ImmT  res = nlasm0debug_t();
return res;
}
ImmT nlasm0debug_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(7);
}
ImmT nlasm0debug_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_string_const(45), ___get_global_string_const(839)));
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 62
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 62
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(551), ___nl__im__2, ___get_global_string_const(829), ___nl__im__3, ___get_global_string_const(853), ___nl__im__4));
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
return ___nl__im__0;
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
return NULL;
return NULL;

}

ImmT  nlasm0empty_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0empty_debug");
nlasm0debug_t0type res = nlasm0empty_debug();
return res;
}
ImmT nlasm0empty_debug(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(8);
}
ImmT nlasm0empty_debug0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 66
c_rt_lib0move(&___nl__im__1, nast0empty_debug());
#line 66
___nl__int__2 = 0;
#line 66
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 66
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 66
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(3, ___get_global_string_const(551), ___nl__im__1, ___get_global_string_const(829), ___nl__im__3, ___get_global_string_const(853), ___nl__im__4));
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
//clear ___nl__int__2;
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
return ___nl__im__0;
return NULL;

}

ImmT  nlasm0cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0cmd_t");
ImmT  res = nlasm0cmd_t();
return res;
}
ImmT nlasm0cmd_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(9);
}
ImmT nlasm0cmd_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 71
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_string_const(336), ___get_global_string_const(839)));
#line 71
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 72
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0annotation_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1092)));
#line 72
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 73
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0order_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1093)));
#line 73
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 73
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3, ___get_global_string_const(228), ___nl__im__4));
#line 73
c_rt_lib0clear(&___nl__im__2);
#line 73
c_rt_lib0clear(&___nl__im__3);
#line 73
c_rt_lib0clear(&___nl__im__4);
#line 73
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
return ___nl__im__0;
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
return NULL;
return NULL;

}

ImmT  nlasm0annotation_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0annotation_t");
ImmT  res = nlasm0annotation_t();
return res;
}
ImmT nlasm0annotation_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(10);
}
ImmT nlasm0annotation_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 78
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 78
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 78
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(71), ___nl__im__2, ___get_global_string_const(223), ___nl__im__3));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__3);
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

ImmT  nlasm0order_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0order_t");
ImmT  res = nlasm0order_t();
return res;
}
ImmT nlasm0order_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(11);
}
ImmT nlasm0order_t0cal() {
nlasm_priv0__const__init();
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
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
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
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
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
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 83
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 83
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 83
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__4, ___get_global_string_const(73), ___nl__im__5));
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0hash_decl_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1064)));
#line 84
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 85
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0empty_hash_decl_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1094)));
#line 85
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 86
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 86
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 86
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 86
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 86
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__11, ___get_global_string_const(152), ___nl__im__12, ___get_global_string_const(168), ___nl__im__13));
#line 86
c_rt_lib0clear(&___nl__im__11);
#line 86
c_rt_lib0clear(&___nl__im__12);
#line 86
c_rt_lib0clear(&___nl__im__13);
#line 86
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 86
c_rt_lib0clear(&___nl__im__10);
#line 87
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0call_t0ptr, ___get_global_string_const(336), ___get_global_string_const(837)));
#line 87
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 88
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0una_op_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1095)));
#line 88
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 89
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(nlasm0bin_op0ptr, ___get_global_string_const(336), ___get_global_string_const(236)));
#line 89
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 90
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 90
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__19));
#line 90
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 90
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 90
c_rt_lib0move(&___nl__im__21, ptd0string());
#line 90
c_rt_lib0move(&___nl__im__22, ptd0int());
#line 90
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__19, ___get_global_string_const(73), ___nl__im__20, ___get_global_string_const(562), ___nl__im__21, ___get_global_string_const(567), ___nl__im__22));
#line 90
c_rt_lib0clear(&___nl__im__19);
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
c_rt_lib0clear(&___nl__im__21);
#line 90
c_rt_lib0clear(&___nl__im__22);
#line 90
c_rt_lib0move(&___nl__im__17, ptd0rec(___nl__im__18));
#line 90
c_rt_lib0clear(&___nl__im__18);
#line 91
c_rt_lib0move(&___nl__im__25, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 91
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__25));
#line 91
c_rt_lib0move(&___nl__im__26, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 91
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__26));
#line 91
c_rt_lib0move(&___nl__im__27, ptd0string());
#line 91
c_rt_lib0move(&___nl__im__28, ptd0int());
#line 91
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__25, ___get_global_string_const(73), ___nl__im__26, ___get_global_string_const(562), ___nl__im__27, ___get_global_string_const(567), ___nl__im__28));
#line 91
c_rt_lib0clear(&___nl__im__25);
#line 91
c_rt_lib0clear(&___nl__im__26);
#line 91
c_rt_lib0clear(&___nl__im__27);
#line 91
c_rt_lib0clear(&___nl__im__28);
#line 91
c_rt_lib0move(&___nl__im__23, ptd0rec(___nl__im__24));
#line 91
c_rt_lib0clear(&___nl__im__24);
#line 92
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0return0ptr, ___get_global_string_const(336), ___get_global_string_const(248)));
#line 92
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__29));
#line 93
c_rt_lib0move(&___nl__im__30, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 93
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__30));
#line 94
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 94
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__33));
#line 94
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 94
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__34));
#line 94
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__33, ___get_global_string_const(73), ___nl__im__34));
#line 94
c_rt_lib0clear(&___nl__im__33);
#line 94
c_rt_lib0clear(&___nl__im__34);
#line 94
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 94
c_rt_lib0clear(&___nl__im__32);
#line 95
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 95
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__37));
#line 95
c_rt_lib0move(&___nl__im__38, ptd0ptd_im());
#line 95
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__37, ___get_global_string_const(225), ___nl__im__38));
#line 95
c_rt_lib0clear(&___nl__im__37);
#line 95
c_rt_lib0clear(&___nl__im__38);
#line 95
c_rt_lib0move(&___nl__im__35, ptd0rec(___nl__im__36));
#line 95
c_rt_lib0clear(&___nl__im__36);
#line 96
c_rt_lib0move(&___nl__im__41, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 96
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__41));
#line 96
c_rt_lib0move(&___nl__im__42, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 96
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__42));
#line 96
c_rt_lib0move(&___nl__im__43, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 96
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__43));
#line 96
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__41, ___get_global_string_const(73), ___nl__im__42, ___get_global_string_const(278), ___nl__im__43));
#line 96
c_rt_lib0clear(&___nl__im__41);
#line 96
c_rt_lib0clear(&___nl__im__42);
#line 96
c_rt_lib0clear(&___nl__im__43);
#line 96
c_rt_lib0move(&___nl__im__39, ptd0rec(___nl__im__40));
#line 96
c_rt_lib0clear(&___nl__im__40);
#line 97
c_rt_lib0move(&___nl__im__46, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 97
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__46));
#line 97
c_rt_lib0move(&___nl__im__47, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 97
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__47));
#line 97
c_rt_lib0move(&___nl__im__48, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 97
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__48));
#line 97
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(3, ___get_global_string_const(73), ___nl__im__46, ___get_global_string_const(278), ___nl__im__47, ___get_global_string_const(225), ___nl__im__48));
#line 97
c_rt_lib0clear(&___nl__im__46);
#line 97
c_rt_lib0clear(&___nl__im__47);
#line 97
c_rt_lib0clear(&___nl__im__48);
#line 97
c_rt_lib0move(&___nl__im__44, ptd0rec(___nl__im__45));
#line 97
c_rt_lib0clear(&___nl__im__45);
#line 98
c_rt_lib0move(&___nl__im__51, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 98
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__51));
#line 98
c_rt_lib0move(&___nl__im__52, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 98
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__52));
#line 98
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__51, ___get_global_string_const(225), ___nl__im__52));
#line 98
c_rt_lib0clear(&___nl__im__51);
#line 98
c_rt_lib0clear(&___nl__im__52);
#line 98
c_rt_lib0move(&___nl__im__49, ptd0rec(___nl__im__50));
#line 98
c_rt_lib0clear(&___nl__im__50);
#line 99
c_rt_lib0move(&___nl__im__55, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 99
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__55));
#line 99
c_rt_lib0move(&___nl__im__56, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 99
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__56));
#line 99
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__55, ___get_global_string_const(73), ___nl__im__56));
#line 99
c_rt_lib0clear(&___nl__im__55);
#line 99
c_rt_lib0clear(&___nl__im__56);
#line 99
c_rt_lib0move(&___nl__im__53, ptd0rec(___nl__im__54));
#line 99
c_rt_lib0clear(&___nl__im__54);
#line 100
c_rt_lib0move(&___nl__im__59, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 100
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__59));
#line 100
c_rt_lib0move(&___nl__im__60, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 100
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__60));
#line 100
c_rt_lib0move(&___nl__im__61, ptd0string());
#line 100
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__59, ___get_global_string_const(73), ___nl__im__60, ___get_global_string_const(577), ___nl__im__61));
#line 100
c_rt_lib0clear(&___nl__im__59);
#line 100
c_rt_lib0clear(&___nl__im__60);
#line 100
c_rt_lib0clear(&___nl__im__61);
#line 100
c_rt_lib0move(&___nl__im__57, ptd0rec(___nl__im__58));
#line 100
c_rt_lib0clear(&___nl__im__58);
#line 101
c_rt_lib0move(&___nl__im__64, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 101
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__64));
#line 101
c_rt_lib0move(&___nl__im__65, ptd0string());
#line 101
c_rt_lib0move(&___nl__im__66, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 101
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__66));
#line 101
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_mk(3, ___get_global_string_const(73), ___nl__im__64, ___get_global_string_const(577), ___nl__im__65, ___get_global_string_const(225), ___nl__im__66));
#line 101
c_rt_lib0clear(&___nl__im__64);
#line 101
c_rt_lib0clear(&___nl__im__65);
#line 101
c_rt_lib0clear(&___nl__im__66);
#line 101
c_rt_lib0move(&___nl__im__62, ptd0rec(___nl__im__63));
#line 101
c_rt_lib0clear(&___nl__im__63);
#line 102
c_rt_lib0move(&___nl__im__67, c_rt_lib0func_new(nlasm0ov_mk_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1096)));
#line 102
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__67));
#line 103
c_rt_lib0move(&___nl__im__68, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1097)));
#line 103
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__68));
#line 104
c_rt_lib0move(&___nl__im__71, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1097)));
#line 104
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__71));
#line 104
c_rt_lib0move(&___nl__im__72, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 104
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__72));
#line 104
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__71, ___get_global_string_const(73), ___nl__im__72));
#line 104
c_rt_lib0clear(&___nl__im__71);
#line 104
c_rt_lib0clear(&___nl__im__72);
#line 104
c_rt_lib0move(&___nl__im__69, ptd0rec(___nl__im__70));
#line 104
c_rt_lib0clear(&___nl__im__70);
#line 105
c_rt_lib0move(&___nl__im__73, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1097)));
#line 105
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__73));
#line 106
c_rt_lib0move(&___nl__im__74, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 106
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__74));
#line 107
c_rt_lib0move(&___nl__im__75, c_rt_lib0func_new(nlasm0var_decl_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1090)));
#line 107
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__75));
#line 108
c_rt_lib0move(&___nl__im__76, c_rt_lib0func_new(nlasm0use_field_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1098)));
#line 108
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__76));
#line 109
c_rt_lib0move(&___nl__im__77, c_rt_lib0func_new(nlasm0release_field_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1099)));
#line 109
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__77));
#line 110
c_rt_lib0move(&___nl__im__78, c_rt_lib0func_new(nlasm0use_index_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1100)));
#line 110
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__78));
#line 111
c_rt_lib0move(&___nl__im__79, c_rt_lib0func_new(nlasm0release_index_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1101)));
#line 111
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__79));
#line 112
c_rt_lib0move(&___nl__im__80, c_rt_lib0func_new(nlasm0use_hash_index_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1102)));
#line 112
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__80));
#line 113
c_rt_lib0move(&___nl__im__81, c_rt_lib0func_new(nlasm0release_hash_index_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1103)));
#line 113
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__81));
#line 114
c_rt_lib0move(&___nl__im__82, c_rt_lib0func_new(nlasm0use_variant_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1104)));
#line 114
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__82));
#line 115
c_rt_lib0move(&___nl__im__83, c_rt_lib0func_new(nlasm0release_variant_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1105)));
#line 115
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__83));
#line 116
c_rt_lib0move(&___nl__im__84, c_rt_lib0func_new(nlasm0hash_iter_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1106)));
#line 116
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__84));
#line 117
c_rt_lib0move(&___nl__im__85, c_rt_lib0func_new(nlasm0hash_iter_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1106)));
#line 117
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__85));
#line 118
c_rt_lib0move(&___nl__im__86, c_rt_lib0func_new(nlasm0hash_dest_iter_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1107)));
#line 118
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__86));
#line 119
c_rt_lib0move(&___nl__im__87, c_rt_lib0func_new(nlasm0hash_dest_iter_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1107)));
#line 119
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__87));
#line 119
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(37, ___get_global_string_const(231), ___nl__im__2, ___get_global_string_const(232), ___nl__im__7, ___get_global_string_const(233), ___nl__im__8, ___get_global_string_const(239), ___nl__im__9, ___get_global_string_const(234), ___nl__im__14, ___get_global_string_const(235), ___nl__im__15, ___get_global_string_const(236), ___nl__im__16, ___get_global_string_const(237), ___nl__im__17, ___get_global_string_const(238), ___nl__im__23, ___get_global_string_const(248), ___nl__im__29, ___get_global_string_const(249), ___nl__im__30, ___get_global_string_const(240), ___nl__im__31, ___get_global_string_const(226), ___nl__im__35, ___get_global_string_const(241), ___nl__im__39, ___get_global_string_const(242), ___nl__im__44, ___get_global_string_const(243), ___nl__im__49, ___get_global_string_const(244), ___nl__im__53, ___get_global_string_const(245), ___nl__im__57, ___get_global_string_const(246), ___nl__im__62, ___get_global_string_const(247), ___nl__im__67, ___get_global_string_const(250), ___nl__im__68, ___get_global_string_const(251), ___nl__im__69, ___get_global_string_const(252), ___nl__im__73, ___get_global_string_const(253), ___nl__im__74, ___get_global_string_const(254), ___nl__im__75, ___get_global_string_const(255), ___nl__im__76, ___get_global_string_const(256), ___nl__im__77, ___get_global_string_const(257), ___nl__im__78, ___get_global_string_const(258), ___nl__im__79, ___get_global_string_const(259), ___nl__im__80, ___get_global_string_const(260), ___nl__im__81, ___get_global_string_const(261), ___nl__im__82, ___get_global_string_const(262), ___nl__im__83, ___get_global_string_const(263), ___nl__im__84, ___get_global_string_const(264), ___nl__im__85, ___get_global_string_const(265), ___nl__im__86, ___get_global_string_const(266), ___nl__im__87));
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
c_rt_lib0clear(&___nl__im__9);
#line 119
c_rt_lib0clear(&___nl__im__14);
#line 119
c_rt_lib0clear(&___nl__im__15);
#line 119
c_rt_lib0clear(&___nl__im__16);
#line 119
c_rt_lib0clear(&___nl__im__17);
#line 119
c_rt_lib0clear(&___nl__im__23);
#line 119
c_rt_lib0clear(&___nl__im__29);
#line 119
c_rt_lib0clear(&___nl__im__30);
#line 119
c_rt_lib0clear(&___nl__im__31);
#line 119
c_rt_lib0clear(&___nl__im__35);
#line 119
c_rt_lib0clear(&___nl__im__39);
#line 119
c_rt_lib0clear(&___nl__im__44);
#line 119
c_rt_lib0clear(&___nl__im__49);
#line 119
c_rt_lib0clear(&___nl__im__53);
#line 119
c_rt_lib0clear(&___nl__im__57);
#line 119
c_rt_lib0clear(&___nl__im__62);
#line 119
c_rt_lib0clear(&___nl__im__67);
#line 119
c_rt_lib0clear(&___nl__im__68);
#line 119
c_rt_lib0clear(&___nl__im__69);
#line 119
c_rt_lib0clear(&___nl__im__73);
#line 119
c_rt_lib0clear(&___nl__im__74);
#line 119
c_rt_lib0clear(&___nl__im__75);
#line 119
c_rt_lib0clear(&___nl__im__76);
#line 119
c_rt_lib0clear(&___nl__im__77);
#line 119
c_rt_lib0clear(&___nl__im__78);
#line 119
c_rt_lib0clear(&___nl__im__79);
#line 119
c_rt_lib0clear(&___nl__im__80);
#line 119
c_rt_lib0clear(&___nl__im__81);
#line 119
c_rt_lib0clear(&___nl__im__82);
#line 119
c_rt_lib0clear(&___nl__im__83);
#line 119
c_rt_lib0clear(&___nl__im__84);
#line 119
c_rt_lib0clear(&___nl__im__85);
#line 119
c_rt_lib0clear(&___nl__im__86);
#line 119
c_rt_lib0clear(&___nl__im__87);
#line 119
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 119
c_rt_lib0clear(&___nl__im__1);
#line 119
return ___nl__im__0;
#line 119
c_rt_lib0clear(&___nl__im__0);
#line 119
return NULL;
return NULL;

}

ImmT  nlasm0var_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0var_decl_t");
ImmT  res = nlasm0var_decl_t();
return res;
}
ImmT nlasm0var_decl_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(12);
}
ImmT nlasm0var_decl_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 125
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 125
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 126
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 126
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 126
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(206), ___nl__im__2, ___get_global_string_const(471), ___nl__im__3));
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
return ___nl__im__0;
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
return NULL;
return NULL;

}

ImmT  nlasm0use_field_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_field_t");
ImmT  res = nlasm0use_field_t();
return res;
}
ImmT nlasm0use_field_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(13);
}
ImmT nlasm0use_field_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 132
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 132
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 133
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 133
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 134
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 134
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(361), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(605), ___nl__im__4));
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__3);
#line 134
c_rt_lib0clear(&___nl__im__4);
#line 134
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 134
c_rt_lib0clear(&___nl__im__1);
#line 134
return ___nl__im__0;
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
return NULL;
return NULL;

}

ImmT  nlasm0release_field_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_field_t");
ImmT  res = nlasm0release_field_t();
return res;
}
ImmT nlasm0release_field_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(14);
}
ImmT nlasm0release_field_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 140
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 140
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 141
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 141
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 142
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 142
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(362), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(605), ___nl__im__4));
#line 142
c_rt_lib0clear(&___nl__im__2);
#line 142
c_rt_lib0clear(&___nl__im__3);
#line 142
c_rt_lib0clear(&___nl__im__4);
#line 142
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 142
c_rt_lib0clear(&___nl__im__1);
#line 142
return ___nl__im__0;
#line 142
c_rt_lib0clear(&___nl__im__0);
#line 142
return NULL;
return NULL;

}

ImmT  nlasm0use_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_index_t");
ImmT  res = nlasm0use_index_t();
return res;
}
ImmT nlasm0use_index_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(15);
}
ImmT nlasm0use_index_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 148
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 148
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 149
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 149
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 150
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 150
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 150
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(361), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(363), ___nl__im__4));
#line 150
c_rt_lib0clear(&___nl__im__2);
#line 150
c_rt_lib0clear(&___nl__im__3);
#line 150
c_rt_lib0clear(&___nl__im__4);
#line 150
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 150
c_rt_lib0clear(&___nl__im__1);
#line 150
return ___nl__im__0;
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
return NULL;
return NULL;

}

ImmT  nlasm0release_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_index_t");
ImmT  res = nlasm0release_index_t();
return res;
}
ImmT nlasm0release_index_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(16);
}
ImmT nlasm0release_index_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 156
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 156
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 157
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 157
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 158
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 158
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 158
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(362), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(363), ___nl__im__4));
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
c_rt_lib0clear(&___nl__im__4);
#line 158
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
return ___nl__im__0;
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
return NULL;
return NULL;

}

ImmT  nlasm0use_hash_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_hash_index_t");
ImmT  res = nlasm0use_hash_index_t();
return res;
}
ImmT nlasm0use_hash_index_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(17);
}
ImmT nlasm0use_hash_index_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 165
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 165
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 166
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 166
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 167
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 167
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(361), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(363), ___nl__im__4, ___get_global_string_const(606), ___nl__im__5));
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
c_rt_lib0clear(&___nl__im__3);
#line 167
c_rt_lib0clear(&___nl__im__4);
#line 167
c_rt_lib0clear(&___nl__im__5);
#line 167
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
return ___nl__im__0;
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
return NULL;
return NULL;

}

ImmT  nlasm0release_hash_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_hash_index_t");
ImmT  res = nlasm0release_hash_index_t();
return res;
}
ImmT nlasm0release_hash_index_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(18);
}
ImmT nlasm0release_hash_index_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 173
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 173
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 174
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 174
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 175
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 175
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 175
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(362), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(363), ___nl__im__4));
#line 175
c_rt_lib0clear(&___nl__im__2);
#line 175
c_rt_lib0clear(&___nl__im__3);
#line 175
c_rt_lib0clear(&___nl__im__4);
#line 175
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 175
c_rt_lib0clear(&___nl__im__1);
#line 175
return ___nl__im__0;
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
return NULL;
return NULL;

}

ImmT  nlasm0use_variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_variant_t");
ImmT  res = nlasm0use_variant_t();
return res;
}
ImmT nlasm0use_variant_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(19);
}
ImmT nlasm0use_variant_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 181
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 181
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 182
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 182
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 183
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 184
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 184
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(361), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(562), ___nl__im__4, ___get_global_string_const(567), ___nl__im__5));
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 184
c_rt_lib0clear(&___nl__im__4);
#line 184
c_rt_lib0clear(&___nl__im__5);
#line 184
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
return ___nl__im__0;
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
return NULL;
return NULL;

}

ImmT  nlasm0release_variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_variant_t");
ImmT  res = nlasm0release_variant_t();
return res;
}
ImmT nlasm0release_variant_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(20);
}
ImmT nlasm0release_variant_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 190
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 190
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 191
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 191
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 192
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 193
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 193
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(362), ___nl__im__2, ___get_global_string_const(360), ___nl__im__3, ___get_global_string_const(562), ___nl__im__4, ___get_global_string_const(567), ___nl__im__5));
#line 193
c_rt_lib0clear(&___nl__im__2);
#line 193
c_rt_lib0clear(&___nl__im__3);
#line 193
c_rt_lib0clear(&___nl__im__4);
#line 193
c_rt_lib0clear(&___nl__im__5);
#line 193
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
return ___nl__im__0;
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
return NULL;
return NULL;

}

ImmT  nlasm0hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0hash_decl_t");
ImmT  res = nlasm0hash_decl_t();
return res;
}
ImmT nlasm0hash_decl_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(21);
}
ImmT nlasm0hash_decl_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 199
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 199
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 200
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 200
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 200
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 200
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(577), ___nl__im__6, ___get_global_string_const(225), ___nl__im__7));
#line 200
c_rt_lib0clear(&___nl__im__6);
#line 200
c_rt_lib0clear(&___nl__im__7);
#line 200
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 200
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 200
c_rt_lib0clear(&___nl__im__4);
#line 200
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(73), ___nl__im__3));
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__3);
#line 200
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 200
c_rt_lib0clear(&___nl__im__1);
#line 200
return ___nl__im__0;
#line 200
c_rt_lib0clear(&___nl__im__0);
#line 200
return NULL;
return NULL;

}

ImmT  nlasm0empty_hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0empty_hash_decl_t");
ImmT  res = nlasm0empty_hash_decl_t();
return res;
}
ImmT nlasm0empty_hash_decl_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(22);
}
ImmT nlasm0empty_hash_decl_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 206
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 206
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 207
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 207
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 207
c_rt_lib0clear(&___nl__im__4);
#line 207
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(763), ___nl__im__3));
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 207
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
return ___nl__im__0;
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
return NULL;
return NULL;

}

ImmT  nlasm0hash_iter_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0hash_iter_t");
ImmT  res = nlasm0hash_iter_t();
return res;
}
ImmT nlasm0hash_iter_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(23);
}
ImmT nlasm0hash_iter_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 213
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 213
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 214
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 214
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 214
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(364), ___nl__im__2, ___get_global_string_const(128), ___nl__im__3));
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
c_rt_lib0clear(&___nl__im__3);
#line 214
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
return ___nl__im__0;
#line 214
c_rt_lib0clear(&___nl__im__0);
#line 214
return NULL;
return NULL;

}

ImmT  nlasm0hash_dest_iter_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0hash_dest_iter_t");
ImmT  res = nlasm0hash_dest_iter_t();
return res;
}
ImmT nlasm0hash_dest_iter_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(24);
}
ImmT nlasm0hash_dest_iter_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 220
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 220
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 222
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 222
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 222
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(364), ___nl__im__3, ___get_global_string_const(128), ___nl__im__4));
#line 222
c_rt_lib0clear(&___nl__im__2);
#line 222
c_rt_lib0clear(&___nl__im__3);
#line 222
c_rt_lib0clear(&___nl__im__4);
#line 222
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 222
c_rt_lib0clear(&___nl__im__1);
#line 222
return ___nl__im__0;
#line 222
c_rt_lib0clear(&___nl__im__0);
#line 222
return NULL;
return NULL;

}

ImmT  nlasm0label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0label_t");
ImmT  res = nlasm0label_t();
return res;
}
ImmT nlasm0label_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(25);
}
ImmT nlasm0label_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 227
c_rt_lib0move(&___nl__im__0, ptd0int());
#line 227
return ___nl__im__0;
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
return NULL;
return NULL;

}

ImmT  nlasm0una_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0una_op_t");
ImmT  res = nlasm0una_op_t();
return res;
}
ImmT nlasm0una_op_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(26);
}
ImmT nlasm0una_op_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 231
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 231
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 231
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 231
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 231
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 231
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(560), ___nl__im__4));
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
c_rt_lib0clear(&___nl__im__3);
#line 231
c_rt_lib0clear(&___nl__im__4);
#line 231
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
return ___nl__im__0;
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
return NULL;
return NULL;

}

ImmT  nlasm0bin_op0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0bin_op");
ImmT  res = nlasm0bin_op();
return res;
}
ImmT nlasm0bin_op(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(27);
}
ImmT nlasm0bin_op0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 235
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 235
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 235
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 235
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 235
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 235
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 235
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 235
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(276), ___nl__im__3, ___get_global_string_const(277), ___nl__im__4, ___get_global_string_const(560), ___nl__im__5));
#line 235
c_rt_lib0clear(&___nl__im__2);
#line 235
c_rt_lib0clear(&___nl__im__3);
#line 235
c_rt_lib0clear(&___nl__im__4);
#line 235
c_rt_lib0clear(&___nl__im__5);
#line 235
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 235
c_rt_lib0clear(&___nl__im__1);
#line 235
return ___nl__im__0;
#line 235
c_rt_lib0clear(&___nl__im__0);
#line 235
return NULL;
return NULL;

}

ImmT  nlasm0return0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0return");
ImmT  res = nlasm0return();
return res;
}
ImmT nlasm0return(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(28);
}
ImmT nlasm0return0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 239
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 239
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 239
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 239
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(225), ___nl__im__2, ___get_global_string_const(352), ___nl__im__3));
#line 239
c_rt_lib0clear(&___nl__im__2);
#line 239
c_rt_lib0clear(&___nl__im__3);
#line 239
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 239
c_rt_lib0clear(&___nl__im__1);
#line 239
return ___nl__im__0;
#line 239
c_rt_lib0clear(&___nl__im__0);
#line 239
return NULL;
return NULL;

}

ImmT  nlasm0ov_mk_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0ov_mk_t");
ImmT  res = nlasm0ov_mk_t();
return res;
}
ImmT nlasm0ov_mk_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(29);
}
ImmT nlasm0ov_mk_t0cal() {
nlasm_priv0__const__init();
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
#line 244
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 244
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 245
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 245
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 245
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 245
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(279), ___nl__im__5, ___get_global_string_const(352), ___nl__im__6));
#line 245
c_rt_lib0clear(&___nl__im__5);
#line 245
c_rt_lib0clear(&___nl__im__6);
#line 245
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 245
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 247
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 248
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 248
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 248
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(562), ___nl__im__7, ___get_global_string_const(567), ___nl__im__8, ___get_global_string_const(582), ___nl__im__9));
#line 248
c_rt_lib0clear(&___nl__im__2);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
c_rt_lib0clear(&___nl__im__7);
#line 248
c_rt_lib0clear(&___nl__im__8);
#line 248
c_rt_lib0clear(&___nl__im__9);
#line 248
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
return ___nl__im__0;
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
return NULL;
return NULL;

}

ImmT  nlasm0call_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0call_t");
ImmT  res = nlasm0call_t();
return res;
}
ImmT nlasm0call_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(30);
}
ImmT nlasm0call_t0cal() {
nlasm_priv0__const__init();
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
#line 254
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 254
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 255
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 256
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 257
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_string_const(225), ___nl__im__8, ___get_global_string_const(39), ___nl__im__9));
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__9);
#line 257
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 257
c_rt_lib0clear(&___nl__im__7);
#line 257
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(268), ___nl__im__3, ___get_global_string_const(270), ___nl__im__4, ___get_global_string_const(267), ___nl__im__5));
#line 257
c_rt_lib0clear(&___nl__im__2);
#line 257
c_rt_lib0clear(&___nl__im__3);
#line 257
c_rt_lib0clear(&___nl__im__4);
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 257
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 257
c_rt_lib0clear(&___nl__im__1);
#line 257
return ___nl__im__0;
#line 257
c_rt_lib0clear(&___nl__im__0);
#line 257
return NULL;
return NULL;

}

ImmT  nlasm0reg_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0reg_type");
ImmT  res = nlasm0reg_type();
return res;
}
ImmT nlasm0reg_type(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(31);
}
ImmT nlasm0reg_type0cal() {
nlasm_priv0__const__init();
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
#line 263
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 264
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 265
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 266
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 267
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 267
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 268
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 268
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 269
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 269
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 270
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 270
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 270
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(8, ___get_global_string_const(131), ___nl__im__2, ___get_global_string_const(405), ___nl__im__3, ___get_global_string_const(406), ___nl__im__4, ___get_global_string_const(33), ___nl__im__5, ___get_global_string_const(559), ___nl__im__6, ___get_global_string_const(127), ___nl__im__7, ___get_global_string_const(563), ___nl__im__8, ___get_global_string_const(128), ___nl__im__9));
#line 270
c_rt_lib0clear(&___nl__im__2);
#line 270
c_rt_lib0clear(&___nl__im__3);
#line 270
c_rt_lib0clear(&___nl__im__4);
#line 270
c_rt_lib0clear(&___nl__im__5);
#line 270
c_rt_lib0clear(&___nl__im__6);
#line 270
c_rt_lib0clear(&___nl__im__7);
#line 270
c_rt_lib0clear(&___nl__im__8);
#line 270
c_rt_lib0clear(&___nl__im__9);
#line 270
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 270
c_rt_lib0clear(&___nl__im__1);
#line 270
return ___nl__im__0;
#line 270
c_rt_lib0clear(&___nl__im__0);
#line 270
return NULL;
return NULL;

}

ImmT  nlasm0reg_access_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0reg_access_type_t");
ImmT  res = nlasm0reg_access_type_t();
return res;
}
ImmT nlasm0reg_access_type_t(){
nlasm_priv0__const__init();
return nlasm_priv0__const__sing(32);
}
ImmT nlasm0reg_access_type_t0cal() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 276
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 277
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 277
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__2, ___get_global_string_const(422), ___nl__im__3));
#line 277
c_rt_lib0clear(&___nl__im__2);
#line 277
c_rt_lib0clear(&___nl__im__3);
#line 277
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 277
c_rt_lib0clear(&___nl__im__1);
#line 277
return ___nl__im__0;
#line 277
c_rt_lib0clear(&___nl__im__0);
#line 277
return NULL;
return NULL;

}

ImmT  nlasm0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nlasm0is_empty");
nlasm0reg_t0type *var0 = &(_tab[0]);
ImmT  res = nlasm0is_empty(*var0);
return res;
}
ImmT  nlasm0is_empty(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nlasm_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
#line 282
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 282
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 282
c_rt_lib0clear(&___nl__im__3);
#line 282
___nl__int__4 = 1;
#line 282
___nl__int__4 = -___nl__int__4;
#line 282
___nl__bool__1 = ___nl__int__2 == ___nl__int__4;
#line 282
//clear ___nl__int__2;
#line 282
//clear ___nl__int__4;
#line 282
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
//clear ___nl__bool__1;
#line 282
return ___nl__im__5;
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
//clear ___nl__bool__1;
#line 282
c_rt_lib0clear(&___nl__im__5);
#line 282
return NULL;
return NULL;

}

ImmT  nlasm0eq_reg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nlasm0eq_reg");
nlasm0reg_t0type *var0 = &(_tab[0]);
nlasm0reg_t0type *var1 = &(_tab[1]);
bool  res = nlasm0eq_reg(*var0, *var1);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nlasm0eq_reg(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nlasm_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
#line 286
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 286
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 286
c_rt_lib0clear(&___nl__im__4);
#line 286
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(219)));
#line 286
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 286
c_rt_lib0clear(&___nl__im__6);
#line 286
___nl__bool__2 = ___nl__int__3 == ___nl__int__5;
#line 286
//clear ___nl__int__3;
#line 286
//clear ___nl__int__5;
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
c_rt_lib0clear(&___nl__im__1);
#line 286
return ___nl__bool__2;
return false;

}

ImmT  nlasm0eq_reg_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nlasm0eq_reg_type");
nlasm0reg_type0type *var0 = &(_tab[0]);
nlasm0reg_type0type *var1 = &(_tab[1]);
bool  res = nlasm0eq_reg_type(*var0, *var1);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nlasm0eq_reg_type(nlasm0reg_type0type ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nlasm_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 290
if(___nl__bool__2){ goto label_19;}
#line 292
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 292
if(___nl__bool__2){ goto label_30;}
#line 294
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 294
if(___nl__bool__2){ goto label_39;}
#line 296
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 296
if(___nl__bool__2){ goto label_49;}
#line 298
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 298
if(___nl__bool__2){ goto label_63;}
#line 300
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 300
if(___nl__bool__2){ goto label_79;}
#line 302
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 302
if(___nl__bool__2){ goto label_98;}
#line 304
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 304
if(___nl__bool__2){ goto label_120;}
#line 304
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 304
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 304
nl_die_arg(___nl__im__3);
#line 290
label_19:
;
#line 291
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 291
if(___nl__bool__4){ goto label_23;}
#line 291
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(406));
#line 291
label_23:
;
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__2;
#line 291
c_rt_lib0clear(&___nl__im__3);
#line 291
return ___nl__bool__4;
#line 292
goto label_145;
#line 292
label_30:
;
#line 293
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(405));
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
c_rt_lib0clear(&___nl__im__1);
#line 293
//clear ___nl__bool__2;
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 293
//clear ___nl__bool__4;
#line 293
return ___nl__bool__5;
#line 294
goto label_145;
#line 294
label_39:
;
#line 295
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(33));
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
//clear ___nl__bool__2;
#line 295
c_rt_lib0clear(&___nl__im__3);
#line 295
//clear ___nl__bool__4;
#line 295
//clear ___nl__bool__5;
#line 295
return ___nl__bool__6;
#line 296
goto label_145;
#line 296
label_49:
;
#line 297
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(406));
#line 297
if(___nl__bool__7){ goto label_53;}
#line 297
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(131));
#line 297
label_53:
;
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
//clear ___nl__bool__2;
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
//clear ___nl__bool__4;
#line 297
//clear ___nl__bool__5;
#line 297
//clear ___nl__bool__6;
#line 297
return ___nl__bool__7;
#line 298
goto label_145;
#line 298
label_63:
;
#line 298
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 298
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 299
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(559));
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
//clear ___nl__bool__2;
#line 299
c_rt_lib0clear(&___nl__im__3);
#line 299
//clear ___nl__bool__4;
#line 299
//clear ___nl__bool__5;
#line 299
//clear ___nl__bool__6;
#line 299
//clear ___nl__bool__7;
#line 299
c_rt_lib0clear(&___nl__im__8);
#line 299
c_rt_lib0clear(&___nl__im__9);
#line 299
return ___nl__bool__10;
#line 300
goto label_145;
#line 300
label_79:
;
#line 300
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 300
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 301
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(127));
#line 301
c_rt_lib0clear(&___nl__im__0);
#line 301
c_rt_lib0clear(&___nl__im__1);
#line 301
//clear ___nl__bool__2;
#line 301
c_rt_lib0clear(&___nl__im__3);
#line 301
//clear ___nl__bool__4;
#line 301
//clear ___nl__bool__5;
#line 301
//clear ___nl__bool__6;
#line 301
//clear ___nl__bool__7;
#line 301
c_rt_lib0clear(&___nl__im__8);
#line 301
c_rt_lib0clear(&___nl__im__9);
#line 301
//clear ___nl__bool__10;
#line 301
c_rt_lib0clear(&___nl__im__11);
#line 301
c_rt_lib0clear(&___nl__im__12);
#line 301
return ___nl__bool__13;
#line 302
goto label_145;
#line 302
label_98:
;
#line 302
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 302
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 303
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(563));
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
//clear ___nl__bool__2;
#line 303
c_rt_lib0clear(&___nl__im__3);
#line 303
//clear ___nl__bool__4;
#line 303
//clear ___nl__bool__5;
#line 303
//clear ___nl__bool__6;
#line 303
//clear ___nl__bool__7;
#line 303
c_rt_lib0clear(&___nl__im__8);
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 303
//clear ___nl__bool__10;
#line 303
c_rt_lib0clear(&___nl__im__11);
#line 303
c_rt_lib0clear(&___nl__im__12);
#line 303
//clear ___nl__bool__13;
#line 303
c_rt_lib0clear(&___nl__im__14);
#line 303
c_rt_lib0clear(&___nl__im__15);
#line 303
return ___nl__bool__16;
#line 304
goto label_145;
#line 304
label_120:
;
#line 304
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 304
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 305
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(128));
#line 305
c_rt_lib0clear(&___nl__im__0);
#line 305
c_rt_lib0clear(&___nl__im__1);
#line 305
//clear ___nl__bool__2;
#line 305
c_rt_lib0clear(&___nl__im__3);
#line 305
//clear ___nl__bool__4;
#line 305
//clear ___nl__bool__5;
#line 305
//clear ___nl__bool__6;
#line 305
//clear ___nl__bool__7;
#line 305
c_rt_lib0clear(&___nl__im__8);
#line 305
c_rt_lib0clear(&___nl__im__9);
#line 305
//clear ___nl__bool__10;
#line 305
c_rt_lib0clear(&___nl__im__11);
#line 305
c_rt_lib0clear(&___nl__im__12);
#line 305
//clear ___nl__bool__13;
#line 305
c_rt_lib0clear(&___nl__im__14);
#line 305
c_rt_lib0clear(&___nl__im__15);
#line 305
//clear ___nl__bool__16;
#line 305
c_rt_lib0clear(&___nl__im__17);
#line 305
c_rt_lib0clear(&___nl__im__18);
#line 305
return ___nl__bool__19;
#line 306
goto label_145;
#line 306
label_145:
;
return false;

}


static ImmT ___const__[34];
static int ___const_init__ = 1;
void nlasm_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[33];


for(int i=0;i<33;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 33);
}}
ImmT nlasm_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nlasm_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nlasm0result_t0cal();
	break;
case 1:
	___const__[1] = nlasm0access_t0cal();
	break;
case 2:
	___const__[2] = nlasm0arg_type_t0cal();
	break;
case 3:
	___const__[3] = nlasm0function_t0cal();
	break;
case 4:
	___const__[4] = nlasm0cmds_t0cal();
	break;
case 5:
	___const__[5] = nlasm0args_type0cal();
	break;
case 6:
	___const__[6] = nlasm0reg_t0cal();
	break;
case 7:
	___const__[7] = nlasm0debug_t0cal();
	break;
case 8:
	___const__[8] = nlasm0empty_debug0cal();
	break;
case 9:
	___const__[9] = nlasm0cmd_t0cal();
	break;
case 10:
	___const__[10] = nlasm0annotation_t0cal();
	break;
case 11:
	___const__[11] = nlasm0order_t0cal();
	break;
case 12:
	___const__[12] = nlasm0var_decl_t0cal();
	break;
case 13:
	___const__[13] = nlasm0use_field_t0cal();
	break;
case 14:
	___const__[14] = nlasm0release_field_t0cal();
	break;
case 15:
	___const__[15] = nlasm0use_index_t0cal();
	break;
case 16:
	___const__[16] = nlasm0release_index_t0cal();
	break;
case 17:
	___const__[17] = nlasm0use_hash_index_t0cal();
	break;
case 18:
	___const__[18] = nlasm0release_hash_index_t0cal();
	break;
case 19:
	___const__[19] = nlasm0use_variant_t0cal();
	break;
case 20:
	___const__[20] = nlasm0release_variant_t0cal();
	break;
case 21:
	___const__[21] = nlasm0hash_decl_t0cal();
	break;
case 22:
	___const__[22] = nlasm0empty_hash_decl_t0cal();
	break;
case 23:
	___const__[23] = nlasm0hash_iter_t0cal();
	break;
case 24:
	___const__[24] = nlasm0hash_dest_iter_t0cal();
	break;
case 25:
	___const__[25] = nlasm0label_t0cal();
	break;
case 26:
	___const__[26] = nlasm0una_op_t0cal();
	break;
case 27:
	___const__[27] = nlasm0bin_op0cal();
	break;
case 28:
	___const__[28] = nlasm0return0cal();
	break;
case 29:
	___const__[29] = nlasm0ov_mk_t0cal();
	break;
case 30:
	___const__[30] = nlasm0call_t0cal();
	break;
case 31:
	___const__[31] = nlasm0reg_type0cal();
	break;
case 32:
	___const__[32] = nlasm0reg_access_type_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
