
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "unnecessary_commands.h"
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nlasm.h"
#include "flow_graph.h"
#include "string_utils.h"
#include "unnecessary_commands.h"
#line 1 "unnecessary_commands.nl"

static ImmT *__const__f = NULL;
void unnecessary_commands_priv0__const__init();
ImmT unnecessary_commands_priv0__const__sim(int __nr);
ImmT unnecessary_commands_priv0__const__sing(int __nr);

unnecessary_commands0block_state_t0type unnecessary_commands_priv0build_empty_state(INT  ___nl__int__0);
ImmT  unnecessary_commands_priv0has_side_effects(nlasm0cmd_t0type ___nl__im__0);
unnecessary_commands0state_t0type unnecessary_commands_priv0build_blocks_states(flow_graph0blocks_t0type ___nl__im__0,INT  ___nl__int__1);
ImmT  unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(flow_graph0blocks_t0type* ___ref___im__0,INT  ___nl__int__1);
ImmT  unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(flow_graph0blocks_t0type* ___ref___im__0,INT  ___nl__int__1,INT  ___nl__int__2);
unnecessary_commands0graph_t0type unnecessary_commands_priv0build_commands_graph(unnecessary_commands0state_t0type ___nl__im__0,flow_graph0blocks_t0type ___nl__im__1,INT  ___nl__int__2);
ImmT  unnecessary_commands_priv0visit_node(unnecessary_commands0graph_t0type ___nl__im__0,INT  ___nl__int__1,ImmT * ___ref___im__2);
ImmT  unnecessary_commands_priv0build_block_state(unnecessary_commands0state_t0type* ___ref___im__0,flow_graph0blocks_t0type ___nl__im__1,INT  ___nl__int__2,unnecessary_commands0block_state_t0type ___nl__im__3,ImmT * ___ref___im__4);


ImmT  unnecessary_commands0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0state_t");
return unnecessary_commands0state_t();
}
ImmT  unnecessary_commands0state_t() {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(unnecessary_commands0block_state_t0ptr, ___get_global_const(1384), ___get_global_const(1385)));
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 14
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
return ___nl__im__0;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
return NULL;
}

ImmT  unnecessary_commands0block_state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0block_state_t");
return unnecessary_commands0block_state_t();
}
ImmT  unnecessary_commands0block_state_t() {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 18
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 18
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__2));
#line 18
c_rt_lib0clear(&___nl__im__2);
#line 18
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 18
c_rt_lib0clear(&___nl__im__1);
#line 18
return ___nl__im__0;
#line 18
c_rt_lib0clear(&___nl__im__0);
#line 18
return NULL;
}

ImmT  unnecessary_commands0graph_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0graph_t");
return unnecessary_commands0graph_t();
}
ImmT  unnecessary_commands0graph_t() {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 22
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 22
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 22
c_rt_lib0clear(&___nl__im__2);
#line 22
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
return ___nl__im__0;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
return NULL;
}

ImmT  unnecessary_commands0delete_unnecessary_commands0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "unnecessary_commands0delete_unnecessary_commands");
nlasm0function_t0type *var0 = &(_tab[0]);
return unnecessary_commands0delete_unnecessary_commands(var0);
}
ImmT  unnecessary_commands0delete_unnecessary_commands(nlasm0function_t0type* ___ref___im__0) {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 26
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(212)));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(213)));
#line 26
c_rt_lib0move(&___nl__im__1, flow_graph0make_blocks(___nl__im__2, ___nl__im__3));
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__3);
#line 27
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(214)));
#line 27
___nl__int__4 = c_rt_lib0array_len(___nl__im__5);
#line 27
c_rt_lib0clear(&___nl__im__5);
#line 27
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(&___nl__im__1, ___nl__int__4));
#line 27
//clear ___nl__int__4;
#line 28
c_rt_lib0move(&___nl__im__7, flow_graph0combine_blocks(___nl__im__1));
#line 28
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 28
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(212), ___nl__im__6);
#line 28
c_rt_lib0clear(&___nl__im__6);
#line 28
c_rt_lib0clear(&___nl__im__7);
#line 29
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(212)));
#line 29
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(213)));
#line 29
c_rt_lib0move(&___nl__im__1, flow_graph0make_blocks(___nl__im__8, ___nl__im__9));
#line 29
c_rt_lib0clear(&___nl__im__8);
#line 29
c_rt_lib0clear(&___nl__im__9);
#line 30
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(214)));
#line 30
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(213)));
#line 30
___nl__int__12 = c_rt_lib0array_len(___nl__im__13);
#line 30
c_rt_lib0clear(&___nl__im__13);
#line 30
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(&___nl__im__1, ___nl__int__10, ___nl__int__12));
#line 30
//clear ___nl__int__10;
#line 30
//clear ___nl__int__12;
#line 31
c_rt_lib0move(&___nl__im__15, flow_graph0combine_blocks(___nl__im__1));
#line 31
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 31
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(212), ___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return NULL;
}

unnecessary_commands0block_state_t0type unnecessary_commands_priv0build_empty_state(INT  ___nl__int__0) {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
#line 35
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
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

ImmT  unnecessary_commands_priv0has_side_effects(nlasm0cmd_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
#line 41
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 42
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(231));
#line 42
if(___nl__bool__2){ goto label_5;}
#line 42
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(245));
#line 42
label_5:
;
#line 42
//clear ___nl__bool__7;
#line 42
if(___nl__bool__2){ goto label_4;}
#line 42
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(246));
#line 42
label_4:
;
#line 42
//clear ___nl__bool__6;
#line 42
if(___nl__bool__2){ goto label_3;}
#line 42
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(247));
#line 42
label_3:
;
#line 42
//clear ___nl__bool__5;
#line 42
if(___nl__bool__2){ goto label_2;}
#line 42
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(248));
#line 42
label_2:
;
#line 42
//clear ___nl__bool__4;
#line 42
if(___nl__bool__2){ goto label_1;}
#line 42
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(249));
#line 42
label_1:
;
#line 42
//clear ___nl__bool__3;
#line 42
c_rt_lib0move(&___nl__im__8, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
//clear ___nl__bool__2;
#line 42
return ___nl__im__8;
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
//clear ___nl__bool__2;
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
return NULL;
}

unnecessary_commands0state_t0type unnecessary_commands_priv0build_blocks_states(flow_graph0blocks_t0type ___nl__im__0,INT  ___nl__int__1) {
c_rt_lib0arg_val(___nl__im__0);
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
#line 46
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__3, unnecessary_commands_priv0build_empty_state(___nl__int__1));
#line 48
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 49
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 49
___nl__int__6 = 0;
#line 49
___nl__int__7 = 1;
#line 49
label_3:
;
#line 49
___nl__int__9 = ___nl__int__6 >= ___nl__int__5;
#line 49
___nl__bool__8 = ___nl__int__9;
#line 49
if(___nl__bool__8){ goto label_1;}
#line 50
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__3));
#line 50
label_2:
;
#line 51
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 51
goto label_3;
#line 51
label_1:
;
#line 52
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 52
___nl__int__12 = 0;
#line 52
___nl__int__13 = ___nl__int__11 == ___nl__int__12;
#line 52
___nl__bool__10 = ___nl__int__13;
#line 52
//clear ___nl__int__11;
#line 52
//clear ___nl__int__12;
#line 52
//clear ___nl__int__13;
#line 52
___nl__bool__10 = !___nl__bool__10;
#line 52
if(___nl__bool__10){ goto label_5;}
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 52
nl_die_arg(___nl__im__14);
#line 52
goto label_4;
#line 52
label_5:
;
#line 52
label_4:
;
#line 52
//clear ___nl__bool__10;
#line 52
c_rt_lib0clear(&___nl__im__14);
#line 53
___nl__int__15 = 0;
#line 53
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(&___nl__im__2, ___nl__im__0, ___nl__int__15, ___nl__im__3, &___nl__im__4));
#line 53
//clear ___nl__int__15;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
//clear ___nl__int__1;
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
//clear ___nl__int__5;
#line 54
//clear ___nl__int__6;
#line 54
//clear ___nl__int__7;
#line 54
//clear ___nl__bool__8;
#line 54
//clear ___nl__int__9;
#line 54
return ___nl__im__2;
}

ImmT  unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(flow_graph0blocks_t0type* ___ref___im__0,INT  ___nl__int__1) {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
#line 58
c_rt_lib0move(&___nl__im__2, unnecessary_commands_priv0build_blocks_states((*___ref___im__0), ___nl__int__1));
#line 59
___nl__int__3 = 0;
#line 60
___nl__int__5 = 0;
#line 60
___nl__int__6 = 1;
#line 60
___nl__int__7 = c_rt_lib0array_len((*___ref___im__0));
#line 60
label_3:
;
#line 60
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 60
___nl__bool__8 = ___nl__int__9;
#line 60
if(___nl__bool__8){ goto label_1;}
#line 60
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get((*___ref___im__0), ___nl__int__5));
#line 60
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 61
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(227)));
#line 61
___nl__int__11 = c_rt_lib0array_len(___nl__im__12);
#line 61
c_rt_lib0clear(&___nl__im__12);
#line 61
___nl__int__3 = ___nl__int__3 + ___nl__int__11;
#line 61
//clear ___nl__int__11;
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
label_2:
;
#line 62
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 62
goto label_3;
#line 62
label_1:
;
#line 63
c_rt_lib0move(&___nl__im__13, unnecessary_commands_priv0build_commands_graph(___nl__im__2, (*___ref___im__0), ___nl__int__3));
#line 64
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 65
___nl__int__16 = 0;
#line 65
___nl__int__17 = 1;
#line 65
___nl__int__18 = c_rt_lib0array_len((*___ref___im__0));
#line 65
label_6:
;
#line 65
___nl__int__20 = ___nl__int__16 >= ___nl__int__18;
#line 65
___nl__bool__19 = ___nl__int__20;
#line 65
if(___nl__bool__19){ goto label_4;}
#line 65
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 65
c_rt_lib0copy(&___nl__im__15, ___nl__im__21);
#line 66
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(227)));
#line 66
___nl__int__22 = c_rt_lib0array_len(___nl__im__23);
#line 66
c_rt_lib0clear(&___nl__im__23);
#line 66
___nl__int__24 = 0;
#line 66
___nl__int__25 = 1;
#line 66
label_9:
;
#line 66
___nl__int__27 = ___nl__int__24 >= ___nl__int__22;
#line 66
___nl__bool__26 = ___nl__int__27;
#line 66
if(___nl__bool__26){ goto label_7;}
#line 67
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(227)));
#line 67
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__30, ___nl__int__24));
#line 67
c_rt_lib0clear(&___nl__im__30);
#line 67
c_rt_lib0move(&___nl__im__31, unnecessary_commands_priv0has_side_effects(___nl__im__29));
#line 67
___nl__bool__28 = c_rt_lib0check_true_native(___nl__im__31);
#line 67
c_rt_lib0clear(&___nl__im__29);
#line 67
c_rt_lib0clear(&___nl__im__31);
#line 67
___nl__bool__28 = !___nl__bool__28;
#line 67
if(___nl__bool__28){ goto label_11;}
#line 68
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(228)));
#line 68
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(217)));
#line 68
c_rt_lib0clear(&___nl__im__34);
#line 68
___nl__int__35 = getIntFromImm(___nl__im__33);
#line 68
___nl__int__32 = ___nl__int__35 + ___nl__int__24;
#line 68
c_rt_lib0clear(&___nl__im__33);
#line 68
//clear ___nl__int__35;
#line 68
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__im__13, ___nl__int__32, &___nl__im__14));
#line 68
//clear ___nl__int__32;
#line 69
goto label_10;
#line 69
label_11:
;
#line 69
label_10:
;
#line 69
//clear ___nl__bool__28;
#line 69
label_8:
;
#line 70
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 70
goto label_9;
#line 70
label_7:
;
#line 70
c_rt_lib0clear(&___nl__im__15);
#line 70
label_5:
;
#line 71
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 71
goto label_6;
#line 71
label_4:
;
#line 72
___nl__int__36 = c_rt_lib0array_len((*___ref___im__0));
#line 72
___nl__int__37 = 0;
#line 72
___nl__int__38 = 1;
#line 72
label_14:
;
#line 72
___nl__int__40 = ___nl__int__37 >= ___nl__int__36;
#line 72
___nl__bool__39 = ___nl__int__40;
#line 72
if(___nl__bool__39){ goto label_12;}
#line 73
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 74
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get((*___ref___im__0), ___nl__int__37));
#line 74
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(227)));
#line 74
c_rt_lib0clear(&___nl__im__44);
#line 74
___nl__int__42 = c_rt_lib0array_len(___nl__im__43);
#line 74
c_rt_lib0clear(&___nl__im__43);
#line 74
___nl__int__45 = 0;
#line 74
___nl__int__46 = 1;
#line 74
label_17:
;
#line 74
___nl__int__48 = ___nl__int__45 >= ___nl__int__42;
#line 74
___nl__bool__47 = ___nl__int__48;
#line 74
if(___nl__bool__47){ goto label_15;}
#line 75
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get((*___ref___im__0), ___nl__int__37));
#line 75
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(227)));
#line 75
c_rt_lib0clear(&___nl__im__51);
#line 75
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__50, ___nl__int__45));
#line 75
c_rt_lib0clear(&___nl__im__50);
#line 76
___nl__bool__52 = false;
#line 77
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get((*___ref___im__0), ___nl__int__37));
#line 77
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_const(228)));
#line 77
c_rt_lib0clear(&___nl__im__56);
#line 77
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(217)));
#line 77
___nl__int__54 = getIntFromImm(___nl__im__57);
#line 77
c_rt_lib0clear(&___nl__im__55);
#line 77
c_rt_lib0clear(&___nl__im__57);
#line 77
___nl__int__53 = ___nl__int__54 + ___nl__int__45;
#line 77
//clear ___nl__int__54;
#line 78
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(226)));
#line 78
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__59, ___get_global_const(250));
#line 78
c_rt_lib0clear(&___nl__im__59);
#line 78
___nl__bool__58 = !___nl__bool__58;
#line 78
___nl__bool__58 = !___nl__bool__58;
#line 78
if(___nl__bool__58){ goto label_19;}
#line 79
c_rt_lib0move(&___nl__im__61, ptd0int_to_string(___nl__int__53));
#line 79
___nl__bool__60 = hash0has_key(___nl__im__14, ___nl__im__61);
#line 79
c_rt_lib0clear(&___nl__im__61);
#line 79
___nl__bool__60 = !___nl__bool__60;
#line 79
___nl__bool__60 = !___nl__bool__60;
#line 79
if(___nl__bool__60){ goto label_21;}
#line 80
___nl__bool__52 = true;
#line 81
goto label_20;
#line 81
label_21:
;
#line 81
label_20:
;
#line 81
//clear ___nl__bool__60;
#line 82
goto label_18;
#line 82
label_19:
;
#line 82
label_18:
;
#line 82
//clear ___nl__bool__58;
#line 83
___nl__bool__62 = ___nl__bool__52;
#line 83
___nl__bool__62 = !___nl__bool__62;
#line 83
___nl__bool__62 = !___nl__bool__62;
#line 83
if(___nl__bool__62){ goto label_23;}
#line 84
c_rt_lib0delete(array0push(&___nl__im__41, ___nl__im__49));
#line 85
goto label_22;
#line 85
label_23:
;
#line 85
label_22:
;
#line 85
//clear ___nl__bool__62;
#line 85
c_rt_lib0clear(&___nl__im__49);
#line 85
//clear ___nl__bool__52;
#line 85
//clear ___nl__int__53;
#line 85
label_16:
;
#line 86
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 86
goto label_17;
#line 86
label_15:
;
#line 87
c_rt_lib0move(&___nl__im__63, c_rt_lib0get_ref_arr((*___ref___im__0), ___nl__int__37));
#line 87
c_rt_lib0copy(&___nl__im__64, ___nl__im__41);
#line 87
c_rt_lib0hash_set_value_dec(&___nl__im__63, ___get_global_const(227), ___nl__im__64);
#line 87
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___im__0, ___nl__int__37, ___nl__im__63));
#line 87
c_rt_lib0clear(&___nl__im__63);
#line 87
c_rt_lib0clear(&___nl__im__64);
#line 87
c_rt_lib0clear(&___nl__im__41);
#line 87
//clear ___nl__int__42;
#line 87
//clear ___nl__int__45;
#line 87
//clear ___nl__int__46;
#line 87
//clear ___nl__bool__47;
#line 87
//clear ___nl__int__48;
#line 87
c_rt_lib0clear(&___nl__im__49);
#line 87
//clear ___nl__bool__52;
#line 87
//clear ___nl__int__53;
#line 87
label_13:
;
#line 88
___nl__int__37 = ___nl__int__37 + ___nl__int__38;
#line 88
goto label_14;
#line 88
label_12:
;
#line 88
//clear ___nl__int__1;
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
//clear ___nl__int__3;
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
//clear ___nl__int__5;
#line 88
//clear ___nl__int__6;
#line 88
//clear ___nl__int__7;
#line 88
//clear ___nl__bool__8;
#line 88
//clear ___nl__int__9;
#line 88
c_rt_lib0clear(&___nl__im__10);
#line 88
c_rt_lib0clear(&___nl__im__13);
#line 88
c_rt_lib0clear(&___nl__im__14);
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
//clear ___nl__int__16;
#line 88
//clear ___nl__int__17;
#line 88
//clear ___nl__int__18;
#line 88
//clear ___nl__bool__19;
#line 88
//clear ___nl__int__20;
#line 88
c_rt_lib0clear(&___nl__im__21);
#line 88
//clear ___nl__int__22;
#line 88
//clear ___nl__int__24;
#line 88
//clear ___nl__int__25;
#line 88
//clear ___nl__bool__26;
#line 88
//clear ___nl__int__27;
#line 88
//clear ___nl__int__36;
#line 88
//clear ___nl__int__37;
#line 88
//clear ___nl__int__38;
#line 88
//clear ___nl__bool__39;
#line 88
//clear ___nl__int__40;
#line 88
c_rt_lib0clear(&___nl__im__41);
#line 88
//clear ___nl__int__42;
#line 88
//clear ___nl__int__45;
#line 88
//clear ___nl__int__46;
#line 88
//clear ___nl__bool__47;
#line 88
//clear ___nl__int__48;
#line 88
c_rt_lib0clear(&___nl__im__49);
#line 88
//clear ___nl__bool__52;
#line 88
//clear ___nl__int__53;
#line 88
return NULL;
}

ImmT  unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(flow_graph0blocks_t0type* ___ref___im__0,INT  ___nl__int__1,INT  ___nl__int__2) {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
bool  ___nl__bool__43 = false;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
#line 92
c_rt_lib0move(&___nl__im__3, unnecessary_commands_priv0build_blocks_states((*___ref___im__0), ___nl__int__1));
#line 93
___nl__int__4 = 0;
#line 94
___nl__int__6 = 0;
#line 94
___nl__int__7 = 1;
#line 94
___nl__int__8 = c_rt_lib0array_len((*___ref___im__0));
#line 94
label_3:
;
#line 94
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 94
___nl__bool__9 = ___nl__int__10;
#line 94
if(___nl__bool__9){ goto label_1;}
#line 94
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get((*___ref___im__0), ___nl__int__6));
#line 94
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 95
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(227)));
#line 95
___nl__int__12 = c_rt_lib0array_len(___nl__im__13);
#line 95
c_rt_lib0clear(&___nl__im__13);
#line 95
___nl__int__4 = ___nl__int__4 + ___nl__int__12;
#line 95
//clear ___nl__int__12;
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
label_2:
;
#line 96
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 96
goto label_3;
#line 96
label_1:
;
#line 97
c_rt_lib0move(&___nl__im__14, unnecessary_commands_priv0build_commands_graph(___nl__im__3, (*___ref___im__0), ___nl__int__4));
#line 98
___nl__int__15 = c_rt_lib0array_len((*___ref___im__0));
#line 98
___nl__int__16 = 0;
#line 98
___nl__int__17 = 1;
#line 98
label_6:
;
#line 98
___nl__int__19 = ___nl__int__16 >= ___nl__int__15;
#line 98
___nl__bool__18 = ___nl__int__19;
#line 98
if(___nl__bool__18){ goto label_4;}
#line 99
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 100
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 100
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(227)));
#line 100
c_rt_lib0clear(&___nl__im__23);
#line 100
___nl__int__21 = c_rt_lib0array_len(___nl__im__22);
#line 100
c_rt_lib0clear(&___nl__im__22);
#line 100
___nl__int__24 = 0;
#line 100
___nl__int__25 = 1;
#line 100
label_9:
;
#line 100
___nl__int__27 = ___nl__int__24 >= ___nl__int__21;
#line 100
___nl__bool__26 = ___nl__int__27;
#line 100
if(___nl__bool__26){ goto label_7;}
#line 101
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 101
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(227)));
#line 101
c_rt_lib0clear(&___nl__im__30);
#line 101
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__29, ___nl__int__24));
#line 101
c_rt_lib0clear(&___nl__im__29);
#line 102
___nl__bool__31 = false;
#line 103
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 103
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(228)));
#line 103
c_rt_lib0clear(&___nl__im__35);
#line 103
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(217)));
#line 103
___nl__int__33 = getIntFromImm(___nl__im__36);
#line 103
c_rt_lib0clear(&___nl__im__34);
#line 103
c_rt_lib0clear(&___nl__im__36);
#line 103
___nl__int__32 = ___nl__int__33 + ___nl__int__24;
#line 103
//clear ___nl__int__33;
#line 104
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(226)));
#line 104
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(250));
#line 104
c_rt_lib0clear(&___nl__im__38);
#line 104
___nl__bool__37 = !___nl__bool__37;
#line 104
if(___nl__bool__37){ goto label_11;}
#line 105
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(226)));
#line 105
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(226)));
#line 105
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__41, ___get_global_const(250)));
#line 105
c_rt_lib0clear(&___nl__im__40);
#line 105
c_rt_lib0clear(&___nl__im__41);
#line 106
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__14, ___nl__int__32));
#line 106
___nl__int__44 = c_rt_lib0array_len(___nl__im__45);
#line 106
c_rt_lib0clear(&___nl__im__45);
#line 106
___nl__int__46 = 0;
#line 106
___nl__int__47 = ___nl__int__44 == ___nl__int__46;
#line 106
___nl__bool__42 = ___nl__int__47;
#line 106
//clear ___nl__int__44;
#line 106
//clear ___nl__int__46;
#line 106
//clear ___nl__int__47;
#line 106
___nl__bool__43 = !___nl__bool__42;
#line 106
if(___nl__bool__43){ goto label_14;}
#line 106
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(217)));
#line 106
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 106
c_rt_lib0clear(&___nl__im__49);
#line 106
___nl__int__50 = ___nl__int__48 >= ___nl__int__2;
#line 106
___nl__bool__42 = ___nl__int__50;
#line 106
//clear ___nl__int__48;
#line 106
//clear ___nl__int__50;
#line 106
label_14:
;
#line 106
//clear ___nl__bool__43;
#line 106
___nl__bool__42 = !___nl__bool__42;
#line 106
if(___nl__bool__42){ goto label_13;}
#line 107
___nl__bool__31 = true;
#line 108
goto label_12;
#line 108
label_13:
;
#line 108
label_12:
;
#line 108
//clear ___nl__bool__42;
#line 109
goto label_10;
#line 109
label_11:
;
#line 109
label_10:
;
#line 109
//clear ___nl__bool__37;
#line 109
c_rt_lib0clear(&___nl__im__39);
#line 110
___nl__bool__51 = ___nl__bool__31;
#line 110
___nl__bool__51 = !___nl__bool__51;
#line 110
___nl__bool__51 = !___nl__bool__51;
#line 110
if(___nl__bool__51){ goto label_16;}
#line 111
c_rt_lib0delete(array0push(&___nl__im__20, ___nl__im__28));
#line 112
goto label_15;
#line 112
label_16:
;
#line 112
label_15:
;
#line 112
//clear ___nl__bool__51;
#line 112
c_rt_lib0clear(&___nl__im__28);
#line 112
//clear ___nl__bool__31;
#line 112
//clear ___nl__int__32;
#line 112
label_8:
;
#line 113
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 113
goto label_9;
#line 113
label_7:
;
#line 114
c_rt_lib0move(&___nl__im__52, c_rt_lib0get_ref_arr((*___ref___im__0), ___nl__int__16));
#line 114
c_rt_lib0copy(&___nl__im__53, ___nl__im__20);
#line 114
c_rt_lib0hash_set_value_dec(&___nl__im__52, ___get_global_const(227), ___nl__im__53);
#line 114
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___im__0, ___nl__int__16, ___nl__im__52));
#line 114
c_rt_lib0clear(&___nl__im__52);
#line 114
c_rt_lib0clear(&___nl__im__53);
#line 114
c_rt_lib0clear(&___nl__im__20);
#line 114
//clear ___nl__int__21;
#line 114
//clear ___nl__int__24;
#line 114
//clear ___nl__int__25;
#line 114
//clear ___nl__bool__26;
#line 114
//clear ___nl__int__27;
#line 114
c_rt_lib0clear(&___nl__im__28);
#line 114
//clear ___nl__bool__31;
#line 114
//clear ___nl__int__32;
#line 114
label_5:
;
#line 115
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 115
goto label_6;
#line 115
label_4:
;
#line 115
//clear ___nl__int__1;
#line 115
//clear ___nl__int__2;
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
//clear ___nl__int__4;
#line 115
c_rt_lib0clear(&___nl__im__5);
#line 115
//clear ___nl__int__6;
#line 115
//clear ___nl__int__7;
#line 115
//clear ___nl__int__8;
#line 115
//clear ___nl__bool__9;
#line 115
//clear ___nl__int__10;
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
//clear ___nl__int__15;
#line 115
//clear ___nl__int__16;
#line 115
//clear ___nl__int__17;
#line 115
//clear ___nl__bool__18;
#line 115
//clear ___nl__int__19;
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
//clear ___nl__int__21;
#line 115
//clear ___nl__int__24;
#line 115
//clear ___nl__int__25;
#line 115
//clear ___nl__bool__26;
#line 115
//clear ___nl__int__27;
#line 115
c_rt_lib0clear(&___nl__im__28);
#line 115
//clear ___nl__bool__31;
#line 115
//clear ___nl__int__32;
#line 115
return NULL;
}

unnecessary_commands0graph_t0type unnecessary_commands_priv0build_commands_graph(unnecessary_commands0state_t0type ___nl__im__0,flow_graph0blocks_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
#line 120
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 121
___nl__int__4 = 0;
#line 121
___nl__int__5 = 1;
#line 121
label_3:
;
#line 121
___nl__int__7 = ___nl__int__4 >= ___nl__int__2;
#line 121
___nl__bool__6 = ___nl__int__7;
#line 121
if(___nl__bool__6){ goto label_1;}
#line 121
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 121
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__8));
#line 121
c_rt_lib0clear(&___nl__im__8);
#line 121
label_2:
;
#line 121
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 121
goto label_3;
#line 121
label_1:
;
#line 122
___nl__int__9 = c_rt_lib0array_len(___nl__im__1);
#line 122
___nl__int__10 = 0;
#line 122
___nl__int__11 = 1;
#line 122
label_6:
;
#line 122
___nl__int__13 = ___nl__int__10 >= ___nl__int__9;
#line 122
___nl__bool__12 = ___nl__int__13;
#line 122
if(___nl__bool__12){ goto label_4;}
#line 123
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__1, ___nl__int__10));
#line 124
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__10));
#line 125
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(318)));
#line 125
___nl__int__18 = 0;
#line 125
___nl__int__19 = 1;
#line 125
___nl__int__20 = c_rt_lib0array_len(___nl__im__16);
#line 125
label_9:
;
#line 125
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 125
___nl__bool__21 = ___nl__int__22;
#line 125
if(___nl__bool__21){ goto label_7;}
#line 125
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__16, ___nl__int__18));
#line 125
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 126
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(204)));
#line 126
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(316));
#line 126
if(___nl__bool__25){ goto label_11;}
#line 129
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(321));
#line 129
if(___nl__bool__25){ goto label_12;}
#line 133
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(250));
#line 133
if(___nl__bool__25){ goto label_13;}
#line 133
c_rt_lib0move(&___nl__im__26,___get_global_const(16));
#line 133
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 133
nl_die_arg(___nl__im__26);
#line 126
label_11:
;
#line 127
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(322)));
#line 127
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(217)));
#line 127
c_rt_lib0clear(&___nl__im__29);
#line 127
___nl__int__30 = getIntFromImm(___nl__im__28);
#line 127
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(0));
#line 127
c_rt_lib0copy(&___nl__im__27, ___nl__im__31);
#line 127
c_rt_lib0array_set(&___nl__im__15, ___nl__int__30, ___nl__im__27);
#line 127
c_rt_lib0clear(&___nl__im__27);
#line 127
c_rt_lib0clear(&___nl__im__28);
#line 127
//clear ___nl__int__30;
#line 127
c_rt_lib0clear(&___nl__im__31);
#line 128
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(322)));
#line 128
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(217)));
#line 128
c_rt_lib0clear(&___nl__im__34);
#line 128
___nl__int__35 = getIntFromImm(___nl__im__33);
#line 128
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_arr(___nl__im__15, ___nl__int__35));
#line 128
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(323)));
#line 128
___nl__int__38 = getIntFromImm(___nl__im__37);
#line 128
c_rt_lib0move(&___nl__im__36, ptd0int_to_string(___nl__int__38));
#line 128
c_rt_lib0clear(&___nl__im__37);
#line 128
//clear ___nl__int__38;
#line 128
c_rt_lib0move(&___nl__im__39,___get_global_const(37));
#line 128
c_rt_lib0delete(hash0set_value(&___nl__im__32, ___nl__im__36, ___nl__im__39));
#line 128
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__15, ___nl__int__35, ___nl__im__32));
#line 128
c_rt_lib0clear(&___nl__im__32);
#line 128
c_rt_lib0clear(&___nl__im__33);
#line 128
//clear ___nl__int__35;
#line 128
c_rt_lib0clear(&___nl__im__36);
#line 128
c_rt_lib0clear(&___nl__im__39);
#line 129
goto label_10;
#line 129
label_12:
;
#line 130
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(322)));
#line 130
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(217)));
#line 130
c_rt_lib0clear(&___nl__im__42);
#line 130
___nl__int__43 = getIntFromImm(___nl__im__41);
#line 130
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__15, ___nl__int__43));
#line 130
c_rt_lib0clear(&___nl__im__41);
#line 130
//clear ___nl__int__43;
#line 130
c_rt_lib0move(&___nl__im__47, c_rt_lib0init_iter(___nl__im__40));
#line 130
label_16:
;
#line 130
___nl__bool__45 = c_rt_lib0is_end_hash(___nl__im__47);
#line 130
if(___nl__bool__45){ goto label_14;}
#line 130
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_key_iter(___nl__im__47));
#line 130
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value(___nl__im__40, ___nl__im__44));
#line 131
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(323)));
#line 131
___nl__int__50 = getIntFromImm(___nl__im__49);
#line 131
c_rt_lib0move(&___nl__im__48, c_rt_lib0get_ref_arr(___nl__im__3, ___nl__int__50));
#line 131
c_rt_lib0delete(array0push(&___nl__im__48, ___nl__im__44));
#line 131
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__3, ___nl__int__50, ___nl__im__48));
#line 131
c_rt_lib0clear(&___nl__im__48);
#line 131
c_rt_lib0clear(&___nl__im__49);
#line 131
//clear ___nl__int__50;
#line 131
label_15:
;
#line 132
c_rt_lib0move(&___nl__im__47, c_rt_lib0next_iter(___nl__im__47));
#line 132
goto label_16;
#line 132
label_14:
;
#line 133
goto label_10;
#line 133
label_13:
;
#line 134
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(322)));
#line 134
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(217)));
#line 134
c_rt_lib0clear(&___nl__im__53);
#line 134
___nl__int__54 = getIntFromImm(___nl__im__52);
#line 134
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__15, ___nl__int__54));
#line 134
c_rt_lib0clear(&___nl__im__52);
#line 134
//clear ___nl__int__54;
#line 134
c_rt_lib0move(&___nl__im__58, c_rt_lib0init_iter(___nl__im__51));
#line 134
label_19:
;
#line 134
___nl__bool__56 = c_rt_lib0is_end_hash(___nl__im__58);
#line 134
if(___nl__bool__56){ goto label_17;}
#line 134
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_key_iter(___nl__im__58));
#line 134
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value(___nl__im__51, ___nl__im__55));
#line 135
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(323)));
#line 135
___nl__int__61 = getIntFromImm(___nl__im__60);
#line 135
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_ref_arr(___nl__im__3, ___nl__int__61));
#line 135
c_rt_lib0delete(array0push(&___nl__im__59, ___nl__im__55));
#line 135
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__3, ___nl__int__61, ___nl__im__59));
#line 135
c_rt_lib0clear(&___nl__im__59);
#line 135
c_rt_lib0clear(&___nl__im__60);
#line 135
//clear ___nl__int__61;
#line 135
label_18:
;
#line 136
c_rt_lib0move(&___nl__im__58, c_rt_lib0next_iter(___nl__im__58));
#line 136
goto label_19;
#line 136
label_17:
;
#line 137
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(322)));
#line 137
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_const(217)));
#line 137
c_rt_lib0clear(&___nl__im__64);
#line 137
___nl__int__65 = getIntFromImm(___nl__im__63);
#line 137
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(0));
#line 137
c_rt_lib0copy(&___nl__im__62, ___nl__im__66);
#line 137
c_rt_lib0array_set(&___nl__im__15, ___nl__int__65, ___nl__im__62);
#line 137
c_rt_lib0clear(&___nl__im__62);
#line 137
c_rt_lib0clear(&___nl__im__63);
#line 137
//clear ___nl__int__65;
#line 137
c_rt_lib0clear(&___nl__im__66);
#line 138
goto label_10;
#line 138
label_10:
;
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
label_8:
;
#line 139
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 139
goto label_9;
#line 139
label_7:
;
#line 139
c_rt_lib0clear(&___nl__im__14);
#line 139
c_rt_lib0clear(&___nl__im__15);
#line 139
c_rt_lib0clear(&___nl__im__16);
#line 139
c_rt_lib0clear(&___nl__im__17);
#line 139
//clear ___nl__int__18;
#line 139
//clear ___nl__int__19;
#line 139
//clear ___nl__int__20;
#line 139
//clear ___nl__bool__21;
#line 139
//clear ___nl__int__22;
#line 139
c_rt_lib0clear(&___nl__im__23);
#line 139
c_rt_lib0clear(&___nl__im__24);
#line 139
//clear ___nl__bool__25;
#line 139
c_rt_lib0clear(&___nl__im__26);
#line 139
c_rt_lib0clear(&___nl__im__40);
#line 139
c_rt_lib0clear(&___nl__im__44);
#line 139
//clear ___nl__bool__45;
#line 139
c_rt_lib0clear(&___nl__im__46);
#line 139
c_rt_lib0clear(&___nl__im__47);
#line 139
c_rt_lib0clear(&___nl__im__51);
#line 139
c_rt_lib0clear(&___nl__im__55);
#line 139
//clear ___nl__bool__56;
#line 139
c_rt_lib0clear(&___nl__im__57);
#line 139
c_rt_lib0clear(&___nl__im__58);
#line 139
label_5:
;
#line 140
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 140
goto label_6;
#line 140
label_4:
;
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
//clear ___nl__int__2;
#line 141
//clear ___nl__int__4;
#line 141
//clear ___nl__int__5;
#line 141
//clear ___nl__bool__6;
#line 141
//clear ___nl__int__7;
#line 141
//clear ___nl__int__9;
#line 141
//clear ___nl__int__10;
#line 141
//clear ___nl__int__11;
#line 141
//clear ___nl__bool__12;
#line 141
//clear ___nl__int__13;
#line 141
c_rt_lib0clear(&___nl__im__14);
#line 141
c_rt_lib0clear(&___nl__im__15);
#line 141
c_rt_lib0clear(&___nl__im__16);
#line 141
c_rt_lib0clear(&___nl__im__17);
#line 141
//clear ___nl__int__18;
#line 141
//clear ___nl__int__19;
#line 141
//clear ___nl__int__20;
#line 141
//clear ___nl__bool__21;
#line 141
//clear ___nl__int__22;
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
//clear ___nl__bool__25;
#line 141
c_rt_lib0clear(&___nl__im__26);
#line 141
c_rt_lib0clear(&___nl__im__40);
#line 141
c_rt_lib0clear(&___nl__im__44);
#line 141
//clear ___nl__bool__45;
#line 141
c_rt_lib0clear(&___nl__im__46);
#line 141
c_rt_lib0clear(&___nl__im__47);
#line 141
c_rt_lib0clear(&___nl__im__51);
#line 141
c_rt_lib0clear(&___nl__im__55);
#line 141
//clear ___nl__bool__56;
#line 141
c_rt_lib0clear(&___nl__im__57);
#line 141
c_rt_lib0clear(&___nl__im__58);
#line 141
return ___nl__im__3;
}

ImmT  unnecessary_commands_priv0visit_node(unnecessary_commands0graph_t0type ___nl__im__0,INT  ___nl__int__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
unnecessary_commands_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
#line 145
c_rt_lib0move(&___nl__im__4, ptd0int_to_string(___nl__int__1));
#line 145
___nl__bool__3 = hash0has_key((*___ref___im__2), ___nl__im__4);
#line 145
c_rt_lib0clear(&___nl__im__4);
#line 145
___nl__bool__3 = !___nl__bool__3;
#line 145
if(___nl__bool__3){ goto label_2;}
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
//clear ___nl__int__1;
#line 145
//clear ___nl__bool__3;
#line 145
return NULL;
#line 145
goto label_1;
#line 145
label_2:
;
#line 145
label_1:
;
#line 145
//clear ___nl__bool__3;
#line 146
c_rt_lib0move(&___nl__im__5, ptd0int_to_string(___nl__int__1));
#line 146
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 146
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__5, ___nl__im__6));
#line 146
c_rt_lib0clear(&___nl__im__5);
#line 146
c_rt_lib0clear(&___nl__im__6);
#line 147
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__1));
#line 147
___nl__int__9 = 0;
#line 147
___nl__int__10 = 1;
#line 147
___nl__int__11 = c_rt_lib0array_len(___nl__im__7);
#line 147
label_5:
;
#line 147
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 147
___nl__bool__12 = ___nl__int__13;
#line 147
if(___nl__bool__12){ goto label_3;}
#line 147
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__7, ___nl__int__9));
#line 147
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 148
c_rt_lib0move(&___nl__im__17, string_utils0get_integer(___nl__im__8));
#line 148
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(80));
#line 148
if(___nl__bool__16){ goto label_6;}
#line 148
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(176), ___nl__im__17));
#line 148
nl_die_arg(___nl__im__17);
#line 148
label_6:
;
#line 148
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(80)));
#line 149
___nl__int__18 = getIntFromImm(___nl__im__15);
#line 149
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__im__0, ___nl__int__18, ___ref___im__2));
#line 149
//clear ___nl__int__18;
#line 149
c_rt_lib0clear(&___nl__im__8);
#line 149
label_4:
;
#line 150
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 150
goto label_5;
#line 150
label_3:
;
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
//clear ___nl__int__1;
#line 150
c_rt_lib0clear(&___nl__im__7);
#line 150
c_rt_lib0clear(&___nl__im__8);
#line 150
//clear ___nl__int__9;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
//clear ___nl__bool__12;
#line 150
//clear ___nl__int__13;
#line 150
c_rt_lib0clear(&___nl__im__14);
#line 150
c_rt_lib0clear(&___nl__im__15);
#line 150
//clear ___nl__bool__16;
#line 150
c_rt_lib0clear(&___nl__im__17);
#line 150
return NULL;
}

ImmT  unnecessary_commands_priv0build_block_state(unnecessary_commands0state_t0type* ___ref___im__0,flow_graph0blocks_t0type ___nl__im__1,INT  ___nl__int__2,unnecessary_commands0block_state_t0type ___nl__im__3,ImmT * ___ref___im__4) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__3);
unnecessary_commands_priv0__const__init();
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
bool  ___nl__bool__59 = false;
INT  ___nl__int__60 = 0;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
#line 155
___nl__bool__5 = false;
#line 156
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__int__2));
#line 156
___nl__bool__6 = hash0has_key((*___ref___im__4), ___nl__im__7);
#line 156
c_rt_lib0clear(&___nl__im__7);
#line 156
___nl__bool__6 = !___nl__bool__6;
#line 156
___nl__bool__6 = !___nl__bool__6;
#line 156
if(___nl__bool__6){ goto label_2;}
#line 157
c_rt_lib0move(&___nl__im__8, ptd0int_to_string(___nl__int__2));
#line 157
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 157
c_rt_lib0delete(hash0set_value(___ref___im__4, ___nl__im__8, ___nl__im__9));
#line 157
c_rt_lib0clear(&___nl__im__8);
#line 157
c_rt_lib0clear(&___nl__im__9);
#line 158
___nl__bool__5 = true;
#line 159
goto label_1;
#line 159
label_2:
;
#line 159
label_1:
;
#line 159
//clear ___nl__bool__6;
#line 160
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 161
___nl__int__11 = 0;
#line 161
___nl__int__12 = 1;
#line 161
label_5:
;
#line 161
___nl__int__14 = ___nl__int__11 >= ___nl__int__10;
#line 161
___nl__bool__13 = ___nl__int__14;
#line 161
if(___nl__bool__13){ goto label_3;}
#line 162
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 162
c_rt_lib0move(&___nl__im__19, c_rt_lib0init_iter(___nl__im__15));
#line 162
label_8:
;
#line 162
___nl__bool__17 = c_rt_lib0is_end_hash(___nl__im__19);
#line 162
if(___nl__bool__17){ goto label_6;}
#line 162
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_key_iter(___nl__im__19));
#line 162
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__16));
#line 163
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get((*___ref___im__0), ___nl__int__2));
#line 163
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__22, ___nl__int__11));
#line 163
c_rt_lib0clear(&___nl__im__22);
#line 163
___nl__bool__20 = hash0has_key(___nl__im__21, ___nl__im__16);
#line 163
c_rt_lib0clear(&___nl__im__21);
#line 163
___nl__bool__20 = !___nl__bool__20;
#line 163
___nl__bool__20 = !___nl__bool__20;
#line 163
if(___nl__bool__20){ goto label_10;}
#line 164
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_arr((*___ref___im__0), ___nl__int__2));
#line 164
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_arr(___nl__im__23, ___nl__int__11));
#line 164
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 164
c_rt_lib0delete(hash0set_value(&___nl__im__24, ___nl__im__16, ___nl__im__25));
#line 164
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__23, ___nl__int__11, ___nl__im__24));
#line 164
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___im__0, ___nl__int__2, ___nl__im__23));
#line 164
c_rt_lib0clear(&___nl__im__23);
#line 164
c_rt_lib0clear(&___nl__im__24);
#line 164
c_rt_lib0clear(&___nl__im__25);
#line 165
___nl__bool__5 = true;
#line 166
goto label_9;
#line 166
label_10:
;
#line 166
label_9:
;
#line 166
//clear ___nl__bool__20;
#line 166
label_7:
;
#line 167
c_rt_lib0move(&___nl__im__19, c_rt_lib0next_iter(___nl__im__19));
#line 167
goto label_8;
#line 167
label_6:
;
#line 167
c_rt_lib0clear(&___nl__im__15);
#line 167
c_rt_lib0clear(&___nl__im__16);
#line 167
//clear ___nl__bool__17;
#line 167
c_rt_lib0clear(&___nl__im__18);
#line 167
c_rt_lib0clear(&___nl__im__19);
#line 167
label_4:
;
#line 168
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 168
goto label_5;
#line 168
label_3:
;
#line 169
___nl__bool__26 = ___nl__bool__5;
#line 169
___nl__bool__26 = !___nl__bool__26;
#line 169
___nl__bool__26 = !___nl__bool__26;
#line 169
if(___nl__bool__26){ goto label_12;}
#line 169
c_rt_lib0clear(&___nl__im__1);
#line 169
//clear ___nl__int__2;
#line 169
c_rt_lib0clear(&___nl__im__3);
#line 169
//clear ___nl__bool__5;
#line 169
//clear ___nl__int__10;
#line 169
//clear ___nl__int__11;
#line 169
//clear ___nl__int__12;
#line 169
//clear ___nl__bool__13;
#line 169
//clear ___nl__int__14;
#line 169
c_rt_lib0clear(&___nl__im__15);
#line 169
c_rt_lib0clear(&___nl__im__16);
#line 169
//clear ___nl__bool__17;
#line 169
c_rt_lib0clear(&___nl__im__18);
#line 169
c_rt_lib0clear(&___nl__im__19);
#line 169
//clear ___nl__bool__26;
#line 169
return NULL;
#line 169
goto label_11;
#line 169
label_12:
;
#line 169
label_11:
;
#line 169
//clear ___nl__bool__26;
#line 170
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get((*___ref___im__0), ___nl__int__2));
#line 171
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__1, ___nl__int__2));
#line 171
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(319)));
#line 171
c_rt_lib0clear(&___nl__im__29);
#line 171
c_rt_lib0move(&___nl__im__33, c_rt_lib0init_iter(___nl__im__28));
#line 171
label_15:
;
#line 171
___nl__bool__31 = c_rt_lib0is_end_hash(___nl__im__33);
#line 171
if(___nl__bool__31){ goto label_13;}
#line 171
c_rt_lib0move(&___nl__im__30, c_rt_lib0get_key_iter(___nl__im__33));
#line 171
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value(___nl__im__28, ___nl__im__30));
#line 172
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(316));
#line 172
if(___nl__bool__34){ goto label_17;}
#line 176
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(250));
#line 176
if(___nl__bool__34){ goto label_18;}
#line 176
c_rt_lib0move(&___nl__im__35,___get_global_const(16));
#line 176
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__35, ___nl__im__32));
#line 176
nl_die_arg(___nl__im__35);
#line 172
label_17:
;
#line 172
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(316)));
#line 172
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 173
c_rt_lib0move(&___nl__im__40, string_utils0get_integer(___nl__im__30));
#line 173
___nl__bool__39 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(80));
#line 173
if(___nl__bool__39){ goto label_19;}
#line 173
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(176), ___nl__im__40));
#line 173
nl_die_arg(___nl__im__40);
#line 173
label_19:
;
#line 173
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__40, ___get_global_const(80)));
#line 174
___nl__int__42 = getIntFromImm(___nl__im__38);
#line 174
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(0));
#line 174
c_rt_lib0copy(&___nl__im__41, ___nl__im__43);
#line 174
c_rt_lib0array_set(&___nl__im__27, ___nl__int__42, ___nl__im__41);
#line 174
c_rt_lib0clear(&___nl__im__41);
#line 174
//clear ___nl__int__42;
#line 174
c_rt_lib0clear(&___nl__im__43);
#line 175
___nl__int__45 = getIntFromImm(___nl__im__38);
#line 175
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_arr(___nl__im__27, ___nl__int__45));
#line 175
c_rt_lib0move(&___nl__im__46,___get_global_const(37));
#line 175
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__36, ___nl__im__46));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__27, ___nl__int__45, ___nl__im__44));
#line 175
c_rt_lib0clear(&___nl__im__44);
#line 175
//clear ___nl__int__45;
#line 175
c_rt_lib0clear(&___nl__im__46);
#line 176
goto label_16;
#line 176
label_18:
;
#line 177
c_rt_lib0move(&___nl__im__49, string_utils0get_integer(___nl__im__30));
#line 177
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__49, ___get_global_const(80));
#line 177
if(___nl__bool__48){ goto label_20;}
#line 177
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_const(176), ___nl__im__49));
#line 177
nl_die_arg(___nl__im__49);
#line 177
label_20:
;
#line 177
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__49, ___get_global_const(80)));
#line 178
___nl__int__51 = getIntFromImm(___nl__im__47);
#line 178
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(0));
#line 178
c_rt_lib0copy(&___nl__im__50, ___nl__im__52);
#line 178
c_rt_lib0array_set(&___nl__im__27, ___nl__int__51, ___nl__im__50);
#line 178
c_rt_lib0clear(&___nl__im__50);
#line 178
//clear ___nl__int__51;
#line 178
c_rt_lib0clear(&___nl__im__52);
#line 179
goto label_16;
#line 179
label_16:
;
#line 179
//clear ___nl__bool__34;
#line 179
c_rt_lib0clear(&___nl__im__35);
#line 179
c_rt_lib0clear(&___nl__im__36);
#line 179
c_rt_lib0clear(&___nl__im__37);
#line 179
c_rt_lib0clear(&___nl__im__38);
#line 179
//clear ___nl__bool__39;
#line 179
c_rt_lib0clear(&___nl__im__40);
#line 179
c_rt_lib0clear(&___nl__im__47);
#line 179
//clear ___nl__bool__48;
#line 179
c_rt_lib0clear(&___nl__im__49);
#line 179
label_14:
;
#line 180
c_rt_lib0move(&___nl__im__33, c_rt_lib0next_iter(___nl__im__33));
#line 180
goto label_15;
#line 180
label_13:
;
#line 181
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__1, ___nl__int__2));
#line 181
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(277)));
#line 181
c_rt_lib0clear(&___nl__im__54);
#line 181
___nl__int__56 = 0;
#line 181
___nl__int__57 = 1;
#line 181
___nl__int__58 = c_rt_lib0array_len(___nl__im__53);
#line 181
label_23:
;
#line 181
___nl__int__60 = ___nl__int__56 >= ___nl__int__58;
#line 181
___nl__bool__59 = ___nl__int__60;
#line 181
if(___nl__bool__59){ goto label_21;}
#line 181
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_get(___nl__im__53, ___nl__int__56));
#line 181
c_rt_lib0copy(&___nl__im__55, ___nl__im__61);
#line 182
c_rt_lib0move(&___nl__im__64, string_utils0get_integer(___nl__im__55));
#line 182
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__64, ___get_global_const(80));
#line 182
if(___nl__bool__63){ goto label_24;}
#line 182
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_const(176), ___nl__im__64));
#line 182
nl_die_arg(___nl__im__64);
#line 182
label_24:
;
#line 182
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__64, ___get_global_const(80)));
#line 183
___nl__int__65 = getIntFromImm(___nl__im__62);
#line 183
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(___ref___im__0, ___nl__im__1, ___nl__int__65, ___nl__im__27, ___ref___im__4));
#line 183
//clear ___nl__int__65;
#line 183
c_rt_lib0clear(&___nl__im__55);
#line 183
label_22:
;
#line 184
___nl__int__56 = ___nl__int__56 + ___nl__int__57;
#line 184
goto label_23;
#line 184
label_21:
;
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
//clear ___nl__int__2;
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 184
//clear ___nl__bool__5;
#line 184
//clear ___nl__int__10;
#line 184
//clear ___nl__int__11;
#line 184
//clear ___nl__int__12;
#line 184
//clear ___nl__bool__13;
#line 184
//clear ___nl__int__14;
#line 184
c_rt_lib0clear(&___nl__im__15);
#line 184
c_rt_lib0clear(&___nl__im__16);
#line 184
//clear ___nl__bool__17;
#line 184
c_rt_lib0clear(&___nl__im__18);
#line 184
c_rt_lib0clear(&___nl__im__19);
#line 184
c_rt_lib0clear(&___nl__im__27);
#line 184
c_rt_lib0clear(&___nl__im__28);
#line 184
c_rt_lib0clear(&___nl__im__30);
#line 184
//clear ___nl__bool__31;
#line 184
c_rt_lib0clear(&___nl__im__32);
#line 184
c_rt_lib0clear(&___nl__im__33);
#line 184
//clear ___nl__bool__34;
#line 184
c_rt_lib0clear(&___nl__im__35);
#line 184
c_rt_lib0clear(&___nl__im__36);
#line 184
c_rt_lib0clear(&___nl__im__37);
#line 184
c_rt_lib0clear(&___nl__im__38);
#line 184
//clear ___nl__bool__39;
#line 184
c_rt_lib0clear(&___nl__im__40);
#line 184
c_rt_lib0clear(&___nl__im__47);
#line 184
//clear ___nl__bool__48;
#line 184
c_rt_lib0clear(&___nl__im__49);
#line 184
c_rt_lib0clear(&___nl__im__53);
#line 184
c_rt_lib0clear(&___nl__im__55);
#line 184
//clear ___nl__int__56;
#line 184
//clear ___nl__int__57;
#line 184
//clear ___nl__int__58;
#line 184
//clear ___nl__bool__59;
#line 184
//clear ___nl__int__60;
#line 184
c_rt_lib0clear(&___nl__im__61);
#line 184
c_rt_lib0clear(&___nl__im__62);
#line 184
//clear ___nl__bool__63;
#line 184
c_rt_lib0clear(&___nl__im__64);
#line 184
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void unnecessary_commands_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT unnecessary_commands_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT unnecessary_commands_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
