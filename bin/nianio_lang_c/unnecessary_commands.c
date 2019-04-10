
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
ImmT  res = unnecessary_commands0state_t();
return res;
}
ImmT unnecessary_commands0state_t(){
unnecessary_commands_priv0__const__init();
return unnecessary_commands_priv0__const__sing(0);
}
ImmT unnecessary_commands0state_t0cal() {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 13
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(unnecessary_commands0block_state_t0ptr, ___get_global_string_const(1496), ___get_global_string_const(1497)));
#line 13
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 13
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
return ___nl__im__0;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
return NULL;
return NULL;

}

ImmT  unnecessary_commands0block_state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0block_state_t");
ImmT  res = unnecessary_commands0block_state_t();
return res;
}
ImmT unnecessary_commands0block_state_t(){
unnecessary_commands_priv0__const__init();
return unnecessary_commands_priv0__const__sing(1);
}
ImmT unnecessary_commands0block_state_t0cal() {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 17
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 17
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__2));
#line 17
c_rt_lib0clear(&___nl__im__2);
#line 17
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
return ___nl__im__0;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return NULL;
return NULL;

}

ImmT  unnecessary_commands0graph_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0graph_t");
ImmT  res = unnecessary_commands0graph_t();
return res;
}
ImmT unnecessary_commands0graph_t(){
unnecessary_commands_priv0__const__init();
return unnecessary_commands_priv0__const__sing(2);
}
ImmT unnecessary_commands0graph_t0cal() {
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 21
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 21
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 21
c_rt_lib0clear(&___nl__im__2);
#line 21
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return ___nl__im__0;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
return NULL;
return NULL;

}

ImmT  unnecessary_commands0delete_unnecessary_commands0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "unnecessary_commands0delete_unnecessary_commands");
nlasm0function_t0type *var0 = &(_tab[0]);
ImmT  res = unnecessary_commands0delete_unnecessary_commands(var0);
return res;
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
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(212)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(213)));
#line 25
c_rt_lib0move(&___nl__im__1, flow_graph0make_blocks(___nl__im__2, ___nl__im__3));
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 26
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(214)));
#line 26
___nl__int__4 = c_rt_lib0array_len(___nl__im__5);
#line 26
c_rt_lib0clear(&___nl__im__5);
#line 26
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(&___nl__im__1, ___nl__int__4));
#line 26
//clear ___nl__int__4;
#line 27
c_rt_lib0move(&___nl__im__6, flow_graph0combine_blocks(___nl__im__1));
#line 27
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 27
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_string_const(212), ___nl__im__7);
#line 27
c_rt_lib0clear(&___nl__im__6);
#line 27
c_rt_lib0clear(&___nl__im__7);
#line 28
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(212)));
#line 28
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(213)));
#line 28
c_rt_lib0move(&___nl__im__1, flow_graph0make_blocks(___nl__im__8, ___nl__im__9));
#line 28
c_rt_lib0clear(&___nl__im__8);
#line 28
c_rt_lib0clear(&___nl__im__9);
#line 29
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(214)));
#line 29
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 29
c_rt_lib0clear(&___nl__im__11);
#line 29
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(213)));
#line 29
___nl__int__12 = c_rt_lib0array_len(___nl__im__13);
#line 29
c_rt_lib0clear(&___nl__im__13);
#line 29
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(&___nl__im__1, ___nl__int__10, ___nl__int__12));
#line 29
//clear ___nl__int__10;
#line 29
//clear ___nl__int__12;
#line 30
c_rt_lib0move(&___nl__im__14, flow_graph0combine_blocks(___nl__im__1));
#line 30
c_rt_lib0copy(&___nl__im__15, ___nl__im__14);
#line 30
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_string_const(212), ___nl__im__15);
#line 30
c_rt_lib0clear(&___nl__im__14);
#line 30
c_rt_lib0clear(&___nl__im__15);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
return NULL;
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
#line 34
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 35
___nl__int__2 = 0;
#line 35
___nl__int__3 = 1;
#line 35
label_3:
;
#line 35
___nl__int__5 = ___nl__int__2 >= ___nl__int__0;
#line 35
___nl__bool__4 = ___nl__int__5;
#line 35
if(___nl__bool__4){ goto label_12;}
#line 35
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 35
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 35
goto label_3;
#line 35
label_12:
;
#line 36
//clear ___nl__int__0;
#line 36
//clear ___nl__int__2;
#line 36
//clear ___nl__int__3;
#line 36
//clear ___nl__bool__4;
#line 36
//clear ___nl__int__5;
#line 36
return ___nl__im__1;
return NULL;

}

ImmT  unnecessary_commands_priv0has_side_effects(nlasm0cmd_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
unnecessary_commands_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 41
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(232));
#line 41
if(___nl__bool__2){ goto label_4;}
#line 41
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(246));
#line 41
label_4:
;
#line 41
if(___nl__bool__2){ goto label_7;}
#line 41
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(247));
#line 41
label_7:
;
#line 41
if(___nl__bool__2){ goto label_10;}
#line 41
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(248));
#line 41
label_10:
;
#line 41
if(___nl__bool__2){ goto label_13;}
#line 41
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(249));
#line 41
label_13:
;
#line 41
if(___nl__bool__2){ goto label_16;}
#line 41
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(250));
#line 41
label_16:
;
#line 41
c_rt_lib0move(&___nl__im__3, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
//clear ___nl__bool__2;
#line 41
return ___nl__im__3;
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
//clear ___nl__bool__2;
#line 41
c_rt_lib0clear(&___nl__im__3);
#line 41
return NULL;
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
#line 45
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 46
c_rt_lib0move(&___nl__im__3, unnecessary_commands_priv0build_empty_state(___nl__int__1));
#line 47
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 48
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 48
___nl__int__6 = 0;
#line 48
___nl__int__7 = 1;
#line 48
label_6:
;
#line 48
___nl__int__9 = ___nl__int__6 >= ___nl__int__5;
#line 48
___nl__bool__8 = ___nl__int__9;
#line 48
if(___nl__bool__8){ goto label_13;}
#line 49
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__3));
#line 50
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 50
goto label_6;
#line 50
label_13:
;
#line 51
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 51
___nl__int__12 = 0;
#line 51
___nl__int__13 = ___nl__int__11 == ___nl__int__12;
#line 51
___nl__bool__10 = ___nl__int__13;
#line 51
//clear ___nl__int__11;
#line 51
//clear ___nl__int__12;
#line 51
//clear ___nl__int__13;
#line 51
___nl__bool__10 = !___nl__bool__10;
#line 51
if(___nl__bool__10){ goto label_26;}
#line 51
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 51
nl_die_arg(___nl__im__14);
#line 51
goto label_26;
#line 51
label_26:
;
#line 51
//clear ___nl__bool__10;
#line 51
c_rt_lib0clear(&___nl__im__14);
#line 52
___nl__int__15 = 0;
#line 52
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(&___nl__im__2, ___nl__im__0, ___nl__int__15, ___nl__im__3, &___nl__im__4));
#line 52
//clear ___nl__int__15;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
//clear ___nl__int__1;
#line 53
c_rt_lib0clear(&___nl__im__3);
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
//clear ___nl__int__5;
#line 53
//clear ___nl__int__6;
#line 53
//clear ___nl__int__7;
#line 53
//clear ___nl__bool__8;
#line 53
//clear ___nl__int__9;
#line 53
return ___nl__im__2;
return NULL;

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
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
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
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
#line 57
c_rt_lib0move(&___nl__im__2, unnecessary_commands_priv0build_blocks_states((*___ref___im__0), ___nl__int__1));
#line 58
___nl__int__3 = 0;
#line 59
___nl__int__5 = 0;
#line 59
___nl__int__6 = 1;
#line 59
___nl__int__7 = c_rt_lib0array_len((*___ref___im__0));
#line 59
label_5:
;
#line 59
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 59
___nl__bool__8 = ___nl__int__9;
#line 59
if(___nl__bool__8){ goto label_19;}
#line 59
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get((*___ref___im__0), ___nl__int__5));
#line 59
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 60
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(227)));
#line 60
___nl__int__11 = c_rt_lib0array_len(___nl__im__12);
#line 60
c_rt_lib0clear(&___nl__im__12);
#line 60
___nl__int__3 = ___nl__int__3 + ___nl__int__11;
#line 60
//clear ___nl__int__11;
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 61
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 61
goto label_5;
#line 61
label_19:
;
#line 62
c_rt_lib0move(&___nl__im__13, unnecessary_commands_priv0build_commands_graph(___nl__im__2, (*___ref___im__0), ___nl__int__3));
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 64
___nl__int__16 = 0;
#line 64
___nl__int__17 = 1;
#line 64
___nl__int__18 = c_rt_lib0array_len((*___ref___im__0));
#line 64
label_25:
;
#line 64
___nl__int__20 = ___nl__int__16 >= ___nl__int__18;
#line 64
___nl__bool__19 = ___nl__int__20;
#line 64
if(___nl__bool__19){ goto label_67;}
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 64
c_rt_lib0copy(&___nl__im__15, ___nl__im__21);
#line 65
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(227)));
#line 65
___nl__int__22 = c_rt_lib0array_len(___nl__im__23);
#line 65
c_rt_lib0clear(&___nl__im__23);
#line 65
___nl__int__24 = 0;
#line 65
___nl__int__25 = 1;
#line 65
label_36:
;
#line 65
___nl__int__27 = ___nl__int__24 >= ___nl__int__22;
#line 65
___nl__bool__26 = ___nl__int__27;
#line 65
if(___nl__bool__26){ goto label_63;}
#line 66
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(227)));
#line 66
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__30, ___nl__int__24));
#line 66
c_rt_lib0clear(&___nl__im__30);
#line 66
c_rt_lib0move(&___nl__im__31, unnecessary_commands_priv0has_side_effects(___nl__im__29));
#line 66
___nl__bool__28 = c_rt_lib0check_true_native(___nl__im__31);
#line 66
c_rt_lib0clear(&___nl__im__29);
#line 66
c_rt_lib0clear(&___nl__im__31);
#line 66
___nl__bool__28 = !___nl__bool__28;
#line 66
if(___nl__bool__28){ goto label_59;}
#line 67
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(228)));
#line 67
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(217)));
#line 67
___nl__int__33 = getIntFromImm(___nl__im__35);
#line 67
c_rt_lib0clear(&___nl__im__34);
#line 67
c_rt_lib0clear(&___nl__im__35);
#line 67
___nl__int__32 = ___nl__int__33 + ___nl__int__24;
#line 67
//clear ___nl__int__33;
#line 67
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__im__13, ___nl__int__32, &___nl__im__14));
#line 67
//clear ___nl__int__32;
#line 68
goto label_59;
#line 68
label_59:
;
#line 68
//clear ___nl__bool__28;
#line 69
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 69
goto label_36;
#line 69
label_63:
;
#line 69
c_rt_lib0clear(&___nl__im__15);
#line 70
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 70
goto label_25;
#line 70
label_67:
;
#line 71
___nl__int__36 = c_rt_lib0array_len((*___ref___im__0));
#line 71
___nl__int__37 = 0;
#line 71
___nl__int__38 = 1;
#line 71
label_71:
;
#line 71
___nl__int__40 = ___nl__int__37 >= ___nl__int__36;
#line 71
___nl__bool__39 = ___nl__int__40;
#line 71
if(___nl__bool__39){ goto label_154;}
#line 72
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 73
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get((*___ref___im__0), ___nl__int__37));
#line 73
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(227)));
#line 73
c_rt_lib0clear(&___nl__im__44);
#line 73
___nl__int__42 = c_rt_lib0array_len(___nl__im__43);
#line 73
c_rt_lib0clear(&___nl__im__43);
#line 73
___nl__int__45 = 0;
#line 73
___nl__int__46 = 1;
#line 73
label_83:
;
#line 73
___nl__int__48 = ___nl__int__45 >= ___nl__int__42;
#line 73
___nl__bool__47 = ___nl__int__48;
#line 73
if(___nl__bool__47){ goto label_136;}
#line 74
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get((*___ref___im__0), ___nl__int__37));
#line 74
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(227)));
#line 74
c_rt_lib0clear(&___nl__im__51);
#line 74
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__50, ___nl__int__45));
#line 74
c_rt_lib0clear(&___nl__im__50);
#line 75
___nl__bool__52 = false;
#line 76
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get((*___ref___im__0), ___nl__int__37));
#line 76
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(228)));
#line 76
c_rt_lib0clear(&___nl__im__56);
#line 76
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_string_const(217)));
#line 76
___nl__int__54 = getIntFromImm(___nl__im__57);
#line 76
c_rt_lib0clear(&___nl__im__55);
#line 76
c_rt_lib0clear(&___nl__im__57);
#line 76
___nl__int__53 = ___nl__int__54 + ___nl__int__45;
#line 76
//clear ___nl__int__54;
#line 77
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(226)));
#line 77
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__59, ___get_global_string_const(251));
#line 77
c_rt_lib0clear(&___nl__im__59);
#line 77
___nl__bool__58 = !___nl__bool__58;
#line 77
___nl__bool__58 = !___nl__bool__58;
#line 77
if(___nl__bool__58){ goto label_121;}
#line 78
c_rt_lib0move(&___nl__im__62, c_rt_lib0int_new(___nl__int__53));
#line 78
c_rt_lib0move(&___nl__im__61, ptd0int_to_string(___nl__im__62));
#line 78
c_rt_lib0clear(&___nl__im__62);
#line 78
___nl__bool__60 = hash0has_key(___nl__im__14, ___nl__im__61);
#line 78
c_rt_lib0clear(&___nl__im__61);
#line 78
___nl__bool__60 = !___nl__bool__60;
#line 78
___nl__bool__60 = !___nl__bool__60;
#line 78
if(___nl__bool__60){ goto label_118;}
#line 79
___nl__bool__52 = true;
#line 80
goto label_118;
#line 80
label_118:
;
#line 80
//clear ___nl__bool__60;
#line 81
goto label_121;
#line 81
label_121:
;
#line 81
//clear ___nl__bool__58;
#line 82
___nl__bool__63 = ___nl__bool__52;
#line 82
___nl__bool__63 = !___nl__bool__63;
#line 82
___nl__bool__63 = !___nl__bool__63;
#line 82
if(___nl__bool__63){ goto label_129;}
#line 83
c_rt_lib0delete(array0push(&___nl__im__41, ___nl__im__49));
#line 84
goto label_129;
#line 84
label_129:
;
#line 84
//clear ___nl__bool__63;
#line 84
c_rt_lib0clear(&___nl__im__49);
#line 84
//clear ___nl__bool__52;
#line 84
//clear ___nl__int__53;
#line 85
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 85
goto label_83;
#line 85
label_136:
;
#line 86
c_rt_lib0move(&___nl__im__64, c_rt_lib0get_ref_arr((*___ref___im__0), ___nl__int__37));
#line 86
c_rt_lib0copy(&___nl__im__65, ___nl__im__41);
#line 86
c_rt_lib0hash_set_value_dec(&___nl__im__64, ___get_global_string_const(227), ___nl__im__65);
#line 86
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___im__0, ___nl__int__37, ___nl__im__64));
#line 86
c_rt_lib0clear(&___nl__im__64);
#line 86
c_rt_lib0clear(&___nl__im__65);
#line 86
c_rt_lib0clear(&___nl__im__41);
#line 86
//clear ___nl__int__42;
#line 86
//clear ___nl__int__45;
#line 86
//clear ___nl__int__46;
#line 86
//clear ___nl__bool__47;
#line 86
//clear ___nl__int__48;
#line 86
c_rt_lib0clear(&___nl__im__49);
#line 86
//clear ___nl__bool__52;
#line 86
//clear ___nl__int__53;
#line 87
___nl__int__37 = ___nl__int__37 + ___nl__int__38;
#line 87
goto label_71;
#line 87
label_154:
;
#line 87
//clear ___nl__int__1;
#line 87
c_rt_lib0clear(&___nl__im__2);
#line 87
//clear ___nl__int__3;
#line 87
c_rt_lib0clear(&___nl__im__4);
#line 87
//clear ___nl__int__5;
#line 87
//clear ___nl__int__6;
#line 87
//clear ___nl__int__7;
#line 87
//clear ___nl__bool__8;
#line 87
//clear ___nl__int__9;
#line 87
c_rt_lib0clear(&___nl__im__10);
#line 87
c_rt_lib0clear(&___nl__im__13);
#line 87
c_rt_lib0clear(&___nl__im__14);
#line 87
c_rt_lib0clear(&___nl__im__15);
#line 87
//clear ___nl__int__16;
#line 87
//clear ___nl__int__17;
#line 87
//clear ___nl__int__18;
#line 87
//clear ___nl__bool__19;
#line 87
//clear ___nl__int__20;
#line 87
c_rt_lib0clear(&___nl__im__21);
#line 87
//clear ___nl__int__22;
#line 87
//clear ___nl__int__24;
#line 87
//clear ___nl__int__25;
#line 87
//clear ___nl__bool__26;
#line 87
//clear ___nl__int__27;
#line 87
//clear ___nl__int__36;
#line 87
//clear ___nl__int__37;
#line 87
//clear ___nl__int__38;
#line 87
//clear ___nl__bool__39;
#line 87
//clear ___nl__int__40;
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
return NULL;
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
#line 91
c_rt_lib0move(&___nl__im__3, unnecessary_commands_priv0build_blocks_states((*___ref___im__0), ___nl__int__1));
#line 92
___nl__int__4 = 0;
#line 93
___nl__int__6 = 0;
#line 93
___nl__int__7 = 1;
#line 93
___nl__int__8 = c_rt_lib0array_len((*___ref___im__0));
#line 93
label_5:
;
#line 93
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 93
___nl__bool__9 = ___nl__int__10;
#line 93
if(___nl__bool__9){ goto label_19;}
#line 93
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get((*___ref___im__0), ___nl__int__6));
#line 93
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 94
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(227)));
#line 94
___nl__int__12 = c_rt_lib0array_len(___nl__im__13);
#line 94
c_rt_lib0clear(&___nl__im__13);
#line 94
___nl__int__4 = ___nl__int__4 + ___nl__int__12;
#line 94
//clear ___nl__int__12;
#line 94
c_rt_lib0clear(&___nl__im__5);
#line 95
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 95
goto label_5;
#line 95
label_19:
;
#line 96
c_rt_lib0move(&___nl__im__14, unnecessary_commands_priv0build_commands_graph(___nl__im__3, (*___ref___im__0), ___nl__int__4));
#line 97
___nl__int__15 = c_rt_lib0array_len((*___ref___im__0));
#line 97
___nl__int__16 = 0;
#line 97
___nl__int__17 = 1;
#line 97
label_24:
;
#line 97
___nl__int__19 = ___nl__int__16 >= ___nl__int__15;
#line 97
___nl__bool__18 = ___nl__int__19;
#line 97
if(___nl__bool__18){ goto label_126;}
#line 98
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 99
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 99
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(227)));
#line 99
c_rt_lib0clear(&___nl__im__23);
#line 99
___nl__int__21 = c_rt_lib0array_len(___nl__im__22);
#line 99
c_rt_lib0clear(&___nl__im__22);
#line 99
___nl__int__24 = 0;
#line 99
___nl__int__25 = 1;
#line 99
label_36:
;
#line 99
___nl__int__27 = ___nl__int__24 >= ___nl__int__21;
#line 99
___nl__bool__26 = ___nl__int__27;
#line 99
if(___nl__bool__26){ goto label_108;}
#line 100
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 100
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(227)));
#line 100
c_rt_lib0clear(&___nl__im__30);
#line 100
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__29, ___nl__int__24));
#line 100
c_rt_lib0clear(&___nl__im__29);
#line 101
___nl__bool__31 = false;
#line 102
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get((*___ref___im__0), ___nl__int__16));
#line 102
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(228)));
#line 102
c_rt_lib0clear(&___nl__im__35);
#line 102
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(217)));
#line 102
___nl__int__33 = getIntFromImm(___nl__im__36);
#line 102
c_rt_lib0clear(&___nl__im__34);
#line 102
c_rt_lib0clear(&___nl__im__36);
#line 102
___nl__int__32 = ___nl__int__33 + ___nl__int__24;
#line 102
//clear ___nl__int__33;
#line 103
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(226)));
#line 103
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(251));
#line 103
c_rt_lib0clear(&___nl__im__38);
#line 103
___nl__bool__37 = !___nl__bool__37;
#line 103
if(___nl__bool__37){ goto label_92;}
#line 104
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(226)));
#line 104
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(226)));
#line 104
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__41, ___get_global_string_const(251)));
#line 104
c_rt_lib0clear(&___nl__im__40);
#line 104
c_rt_lib0clear(&___nl__im__41);
#line 105
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__14, ___nl__int__32));
#line 105
___nl__int__44 = c_rt_lib0array_len(___nl__im__45);
#line 105
c_rt_lib0clear(&___nl__im__45);
#line 105
___nl__int__46 = 0;
#line 105
___nl__int__47 = ___nl__int__44 == ___nl__int__46;
#line 105
___nl__bool__42 = ___nl__int__47;
#line 105
//clear ___nl__int__44;
#line 105
//clear ___nl__int__46;
#line 105
//clear ___nl__int__47;
#line 105
___nl__bool__43 = !___nl__bool__42;
#line 105
if(___nl__bool__43){ goto label_83;}
#line 105
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(217)));
#line 105
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 105
c_rt_lib0clear(&___nl__im__49);
#line 105
___nl__int__50 = ___nl__int__48 >= ___nl__int__2;
#line 105
___nl__bool__42 = ___nl__int__50;
#line 105
//clear ___nl__int__48;
#line 105
//clear ___nl__int__50;
#line 105
label_83:
;
#line 105
//clear ___nl__bool__43;
#line 105
___nl__bool__42 = !___nl__bool__42;
#line 105
if(___nl__bool__42){ goto label_89;}
#line 106
___nl__bool__31 = true;
#line 107
goto label_89;
#line 107
label_89:
;
#line 107
//clear ___nl__bool__42;
#line 108
goto label_92;
#line 108
label_92:
;
#line 108
//clear ___nl__bool__37;
#line 108
c_rt_lib0clear(&___nl__im__39);
#line 109
___nl__bool__51 = ___nl__bool__31;
#line 109
___nl__bool__51 = !___nl__bool__51;
#line 109
___nl__bool__51 = !___nl__bool__51;
#line 109
if(___nl__bool__51){ goto label_101;}
#line 110
c_rt_lib0delete(array0push(&___nl__im__20, ___nl__im__28));
#line 111
goto label_101;
#line 111
label_101:
;
#line 111
//clear ___nl__bool__51;
#line 111
c_rt_lib0clear(&___nl__im__28);
#line 111
//clear ___nl__bool__31;
#line 111
//clear ___nl__int__32;
#line 112
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 112
goto label_36;
#line 112
label_108:
;
#line 113
c_rt_lib0move(&___nl__im__52, c_rt_lib0get_ref_arr((*___ref___im__0), ___nl__int__16));
#line 113
c_rt_lib0copy(&___nl__im__53, ___nl__im__20);
#line 113
c_rt_lib0hash_set_value_dec(&___nl__im__52, ___get_global_string_const(227), ___nl__im__53);
#line 113
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___im__0, ___nl__int__16, ___nl__im__52));
#line 113
c_rt_lib0clear(&___nl__im__52);
#line 113
c_rt_lib0clear(&___nl__im__53);
#line 113
c_rt_lib0clear(&___nl__im__20);
#line 113
//clear ___nl__int__21;
#line 113
//clear ___nl__int__24;
#line 113
//clear ___nl__int__25;
#line 113
//clear ___nl__bool__26;
#line 113
//clear ___nl__int__27;
#line 113
c_rt_lib0clear(&___nl__im__28);
#line 113
//clear ___nl__bool__31;
#line 113
//clear ___nl__int__32;
#line 114
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 114
goto label_24;
#line 114
label_126:
;
#line 114
//clear ___nl__int__1;
#line 114
//clear ___nl__int__2;
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 114
//clear ___nl__int__4;
#line 114
c_rt_lib0clear(&___nl__im__5);
#line 114
//clear ___nl__int__6;
#line 114
//clear ___nl__int__7;
#line 114
//clear ___nl__int__8;
#line 114
//clear ___nl__bool__9;
#line 114
//clear ___nl__int__10;
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 114
c_rt_lib0clear(&___nl__im__14);
#line 114
//clear ___nl__int__15;
#line 114
//clear ___nl__int__16;
#line 114
//clear ___nl__int__17;
#line 114
//clear ___nl__bool__18;
#line 114
//clear ___nl__int__19;
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
return NULL;
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
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
#line 119
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 120
___nl__int__4 = 0;
#line 120
___nl__int__5 = 1;
#line 120
label_3:
;
#line 120
___nl__int__7 = ___nl__int__4 >= ___nl__int__2;
#line 120
___nl__bool__6 = ___nl__int__7;
#line 120
if(___nl__bool__6){ goto label_12;}
#line 120
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 120
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__8));
#line 120
c_rt_lib0clear(&___nl__im__8);
#line 120
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 120
goto label_3;
#line 120
label_12:
;
#line 121
___nl__int__9 = c_rt_lib0array_len(___nl__im__1);
#line 121
___nl__int__10 = 0;
#line 121
___nl__int__11 = 1;
#line 121
label_16:
;
#line 121
___nl__int__13 = ___nl__int__10 >= ___nl__int__9;
#line 121
___nl__bool__12 = ___nl__int__13;
#line 121
if(___nl__bool__12){ goto label_168;}
#line 122
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__1, ___nl__int__10));
#line 123
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__10));
#line 124
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(341)));
#line 124
___nl__int__18 = 0;
#line 124
___nl__int__19 = 1;
#line 124
___nl__int__20 = c_rt_lib0array_len(___nl__im__16);
#line 124
label_26:
;
#line 124
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 124
___nl__bool__21 = ___nl__int__22;
#line 124
if(___nl__bool__21){ goto label_142;}
#line 124
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__16, ___nl__int__18));
#line 124
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 125
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(204)));
#line 125
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(339));
#line 125
if(___nl__bool__25){ goto label_42;}
#line 128
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(344));
#line 128
if(___nl__bool__25){ goto label_75;}
#line 132
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(251));
#line 132
if(___nl__bool__25){ goto label_101;}
#line 132
c_rt_lib0move(&___nl__im__26,___get_global_string_const(15));
#line 132
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 132
nl_die_arg(___nl__im__26);
#line 125
label_42:
;
#line 126
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(0));
#line 126
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(345)));
#line 126
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(217)));
#line 126
___nl__int__29 = getIntFromImm(___nl__im__31);
#line 126
c_rt_lib0clear(&___nl__im__30);
#line 126
c_rt_lib0clear(&___nl__im__31);
#line 126
c_rt_lib0copy(&___nl__im__28, ___nl__im__27);
#line 126
c_rt_lib0array_set(&___nl__im__15, ___nl__int__29, ___nl__im__28);
#line 126
c_rt_lib0clear(&___nl__im__27);
#line 126
c_rt_lib0clear(&___nl__im__28);
#line 126
//clear ___nl__int__29;
#line 127
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(345)));
#line 127
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(217)));
#line 127
___nl__int__33 = getIntFromImm(___nl__im__35);
#line 127
c_rt_lib0clear(&___nl__im__34);
#line 127
c_rt_lib0clear(&___nl__im__35);
#line 127
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_arr(___nl__im__15, ___nl__int__33));
#line 127
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(346)));
#line 127
___nl__int__37 = getIntFromImm(___nl__im__38);
#line 127
c_rt_lib0clear(&___nl__im__38);
#line 127
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__37));
#line 127
c_rt_lib0move(&___nl__im__36, ptd0int_to_string(___nl__im__39));
#line 127
//clear ___nl__int__37;
#line 127
c_rt_lib0clear(&___nl__im__39);
#line 127
c_rt_lib0move(&___nl__im__40,___get_global_string_const(36));
#line 127
c_rt_lib0delete(hash0set_value(&___nl__im__32, ___nl__im__36, ___nl__im__40));
#line 127
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__15, ___nl__int__33, ___nl__im__32));
#line 127
c_rt_lib0clear(&___nl__im__32);
#line 127
//clear ___nl__int__33;
#line 127
c_rt_lib0clear(&___nl__im__36);
#line 127
c_rt_lib0clear(&___nl__im__40);
#line 128
goto label_138;
#line 128
label_75:
;
#line 129
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(345)));
#line 129
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(217)));
#line 129
___nl__int__42 = getIntFromImm(___nl__im__44);
#line 129
c_rt_lib0clear(&___nl__im__43);
#line 129
c_rt_lib0clear(&___nl__im__44);
#line 129
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__15, ___nl__int__42));
#line 129
//clear ___nl__int__42;
#line 129
c_rt_lib0move(&___nl__im__48, c_rt_lib0init_iter(___nl__im__41));
#line 129
label_84:
;
#line 129
___nl__bool__46 = c_rt_lib0is_end_hash(___nl__im__48);
#line 129
if(___nl__bool__46){ goto label_99;}
#line 129
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_key_iter(___nl__im__48));
#line 129
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value(___nl__im__41, ___nl__im__45));
#line 130
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(346)));
#line 130
___nl__int__50 = getIntFromImm(___nl__im__51);
#line 130
c_rt_lib0clear(&___nl__im__51);
#line 130
c_rt_lib0move(&___nl__im__49, c_rt_lib0get_ref_arr(___nl__im__3, ___nl__int__50));
#line 130
c_rt_lib0delete(array0push(&___nl__im__49, ___nl__im__45));
#line 130
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__3, ___nl__int__50, ___nl__im__49));
#line 130
c_rt_lib0clear(&___nl__im__49);
#line 130
//clear ___nl__int__50;
#line 131
c_rt_lib0move(&___nl__im__48, c_rt_lib0next_iter(___nl__im__48));
#line 131
goto label_84;
#line 131
label_99:
;
#line 132
goto label_138;
#line 132
label_101:
;
#line 133
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(345)));
#line 133
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(217)));
#line 133
___nl__int__53 = getIntFromImm(___nl__im__55);
#line 133
c_rt_lib0clear(&___nl__im__54);
#line 133
c_rt_lib0clear(&___nl__im__55);
#line 133
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__15, ___nl__int__53));
#line 133
//clear ___nl__int__53;
#line 133
c_rt_lib0move(&___nl__im__59, c_rt_lib0init_iter(___nl__im__52));
#line 133
label_110:
;
#line 133
___nl__bool__57 = c_rt_lib0is_end_hash(___nl__im__59);
#line 133
if(___nl__bool__57){ goto label_125;}
#line 133
c_rt_lib0move(&___nl__im__56, c_rt_lib0get_key_iter(___nl__im__59));
#line 133
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value(___nl__im__52, ___nl__im__56));
#line 134
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(346)));
#line 134
___nl__int__61 = getIntFromImm(___nl__im__62);
#line 134
c_rt_lib0clear(&___nl__im__62);
#line 134
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_arr(___nl__im__3, ___nl__int__61));
#line 134
c_rt_lib0delete(array0push(&___nl__im__60, ___nl__im__56));
#line 134
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__3, ___nl__int__61, ___nl__im__60));
#line 134
c_rt_lib0clear(&___nl__im__60);
#line 134
//clear ___nl__int__61;
#line 135
c_rt_lib0move(&___nl__im__59, c_rt_lib0next_iter(___nl__im__59));
#line 135
goto label_110;
#line 135
label_125:
;
#line 136
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_mk(0));
#line 136
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(345)));
#line 136
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(217)));
#line 136
___nl__int__65 = getIntFromImm(___nl__im__67);
#line 136
c_rt_lib0clear(&___nl__im__66);
#line 136
c_rt_lib0clear(&___nl__im__67);
#line 136
c_rt_lib0copy(&___nl__im__64, ___nl__im__63);
#line 136
c_rt_lib0array_set(&___nl__im__15, ___nl__int__65, ___nl__im__64);
#line 136
c_rt_lib0clear(&___nl__im__63);
#line 136
c_rt_lib0clear(&___nl__im__64);
#line 136
//clear ___nl__int__65;
#line 137
goto label_138;
#line 137
label_138:
;
#line 137
c_rt_lib0clear(&___nl__im__17);
#line 138
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 138
goto label_26;
#line 138
label_142:
;
#line 138
c_rt_lib0clear(&___nl__im__14);
#line 138
c_rt_lib0clear(&___nl__im__15);
#line 138
c_rt_lib0clear(&___nl__im__16);
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
//clear ___nl__int__18;
#line 138
//clear ___nl__int__19;
#line 138
//clear ___nl__int__20;
#line 138
//clear ___nl__bool__21;
#line 138
//clear ___nl__int__22;
#line 138
c_rt_lib0clear(&___nl__im__23);
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
//clear ___nl__bool__25;
#line 138
c_rt_lib0clear(&___nl__im__26);
#line 138
c_rt_lib0clear(&___nl__im__41);
#line 138
c_rt_lib0clear(&___nl__im__45);
#line 138
//clear ___nl__bool__46;
#line 138
c_rt_lib0clear(&___nl__im__47);
#line 138
c_rt_lib0clear(&___nl__im__48);
#line 138
c_rt_lib0clear(&___nl__im__52);
#line 138
c_rt_lib0clear(&___nl__im__56);
#line 138
//clear ___nl__bool__57;
#line 138
c_rt_lib0clear(&___nl__im__58);
#line 138
c_rt_lib0clear(&___nl__im__59);
#line 139
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 139
goto label_16;
#line 139
label_168:
;
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
//clear ___nl__int__2;
#line 140
//clear ___nl__int__4;
#line 140
//clear ___nl__int__5;
#line 140
//clear ___nl__bool__6;
#line 140
//clear ___nl__int__7;
#line 140
//clear ___nl__int__9;
#line 140
//clear ___nl__int__10;
#line 140
//clear ___nl__int__11;
#line 140
//clear ___nl__bool__12;
#line 140
//clear ___nl__int__13;
#line 140
c_rt_lib0clear(&___nl__im__14);
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
c_rt_lib0clear(&___nl__im__16);
#line 140
c_rt_lib0clear(&___nl__im__17);
#line 140
//clear ___nl__int__18;
#line 140
//clear ___nl__int__19;
#line 140
//clear ___nl__int__20;
#line 140
//clear ___nl__bool__21;
#line 140
//clear ___nl__int__22;
#line 140
c_rt_lib0clear(&___nl__im__23);
#line 140
c_rt_lib0clear(&___nl__im__24);
#line 140
//clear ___nl__bool__25;
#line 140
c_rt_lib0clear(&___nl__im__26);
#line 140
c_rt_lib0clear(&___nl__im__41);
#line 140
c_rt_lib0clear(&___nl__im__45);
#line 140
//clear ___nl__bool__46;
#line 140
c_rt_lib0clear(&___nl__im__47);
#line 140
c_rt_lib0clear(&___nl__im__48);
#line 140
c_rt_lib0clear(&___nl__im__52);
#line 140
c_rt_lib0clear(&___nl__im__56);
#line 140
//clear ___nl__bool__57;
#line 140
c_rt_lib0clear(&___nl__im__58);
#line 140
c_rt_lib0clear(&___nl__im__59);
#line 140
return ___nl__im__3;
return NULL;

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
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
#line 144
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__1));
#line 144
c_rt_lib0move(&___nl__im__4, ptd0int_to_string(___nl__im__5));
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
___nl__bool__3 = hash0has_key((*___ref___im__2), ___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
___nl__bool__3 = !___nl__bool__3;
#line 144
if(___nl__bool__3){ goto label_12;}
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
//clear ___nl__int__1;
#line 144
//clear ___nl__bool__3;
#line 144
return NULL;
#line 144
goto label_12;
#line 144
label_12:
;
#line 144
//clear ___nl__bool__3;
#line 145
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__1));
#line 145
c_rt_lib0move(&___nl__im__6, ptd0int_to_string(___nl__im__7));
#line 145
c_rt_lib0clear(&___nl__im__7);
#line 145
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 145
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__6, ___nl__im__8));
#line 145
c_rt_lib0clear(&___nl__im__6);
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 146
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__1));
#line 146
___nl__int__11 = 0;
#line 146
___nl__int__12 = 1;
#line 146
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 146
label_25:
;
#line 146
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 146
___nl__bool__14 = ___nl__int__15;
#line 146
if(___nl__bool__14){ goto label_36;}
#line 146
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 146
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 147
___nl__int__17 = ptd0string_to_int(___nl__im__10);
#line 148
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__im__0, ___nl__int__17, ___ref___im__2));
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 149
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 149
goto label_25;
#line 149
label_36:
;
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
//clear ___nl__int__1;
#line 149
c_rt_lib0clear(&___nl__im__9);
#line 149
c_rt_lib0clear(&___nl__im__10);
#line 149
//clear ___nl__int__11;
#line 149
//clear ___nl__int__12;
#line 149
//clear ___nl__int__13;
#line 149
//clear ___nl__bool__14;
#line 149
//clear ___nl__int__15;
#line 149
c_rt_lib0clear(&___nl__im__16);
#line 149
//clear ___nl__int__17;
#line 149
return NULL;
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
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
bool  ___nl__bool__54 = false;
INT  ___nl__int__55 = 0;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
#line 154
___nl__bool__5 = false;
#line 155
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__2));
#line 155
c_rt_lib0move(&___nl__im__7, ptd0int_to_string(___nl__im__8));
#line 155
c_rt_lib0clear(&___nl__im__8);
#line 155
___nl__bool__6 = hash0has_key((*___ref___im__4), ___nl__im__7);
#line 155
c_rt_lib0clear(&___nl__im__7);
#line 155
___nl__bool__6 = !___nl__bool__6;
#line 155
___nl__bool__6 = !___nl__bool__6;
#line 155
if(___nl__bool__6){ goto label_18;}
#line 156
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__2));
#line 156
c_rt_lib0move(&___nl__im__9, ptd0int_to_string(___nl__im__10));
#line 156
c_rt_lib0clear(&___nl__im__10);
#line 156
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 156
c_rt_lib0delete(hash0set_value(___ref___im__4, ___nl__im__9, ___nl__im__11));
#line 156
c_rt_lib0clear(&___nl__im__9);
#line 156
c_rt_lib0clear(&___nl__im__11);
#line 157
___nl__bool__5 = true;
#line 158
goto label_18;
#line 158
label_18:
;
#line 158
//clear ___nl__bool__6;
#line 159
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 160
___nl__int__13 = 0;
#line 160
___nl__int__14 = 1;
#line 160
label_23:
;
#line 160
___nl__int__16 = ___nl__int__13 >= ___nl__int__12;
#line 160
___nl__bool__15 = ___nl__int__16;
#line 160
if(___nl__bool__15){ goto label_65;}
#line 161
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__3, ___nl__int__13));
#line 161
c_rt_lib0move(&___nl__im__21, c_rt_lib0init_iter(___nl__im__17));
#line 161
label_29:
;
#line 161
___nl__bool__19 = c_rt_lib0is_end_hash(___nl__im__21);
#line 161
if(___nl__bool__19){ goto label_57;}
#line 161
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_key_iter(___nl__im__21));
#line 161
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value(___nl__im__17, ___nl__im__18));
#line 162
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get((*___ref___im__0), ___nl__int__2));
#line 162
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__24, ___nl__int__13));
#line 162
c_rt_lib0clear(&___nl__im__24);
#line 162
___nl__bool__22 = hash0has_key(___nl__im__23, ___nl__im__18);
#line 162
c_rt_lib0clear(&___nl__im__23);
#line 162
___nl__bool__22 = !___nl__bool__22;
#line 162
___nl__bool__22 = !___nl__bool__22;
#line 162
if(___nl__bool__22){ goto label_53;}
#line 163
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_arr((*___ref___im__0), ___nl__int__2));
#line 163
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_ref_arr(___nl__im__25, ___nl__int__13));
#line 163
c_rt_lib0move(&___nl__im__27,___get_global_string_const(36));
#line 163
c_rt_lib0delete(hash0set_value(&___nl__im__26, ___nl__im__18, ___nl__im__27));
#line 163
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__25, ___nl__int__13, ___nl__im__26));
#line 163
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___im__0, ___nl__int__2, ___nl__im__25));
#line 163
c_rt_lib0clear(&___nl__im__25);
#line 163
c_rt_lib0clear(&___nl__im__26);
#line 163
c_rt_lib0clear(&___nl__im__27);
#line 164
___nl__bool__5 = true;
#line 165
goto label_53;
#line 165
label_53:
;
#line 165
//clear ___nl__bool__22;
#line 166
c_rt_lib0move(&___nl__im__21, c_rt_lib0next_iter(___nl__im__21));
#line 166
goto label_29;
#line 166
label_57:
;
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 166
//clear ___nl__bool__19;
#line 166
c_rt_lib0clear(&___nl__im__20);
#line 166
c_rt_lib0clear(&___nl__im__21);
#line 167
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 167
goto label_23;
#line 167
label_65:
;
#line 168
___nl__bool__28 = ___nl__bool__5;
#line 168
___nl__bool__28 = !___nl__bool__28;
#line 168
___nl__bool__28 = !___nl__bool__28;
#line 168
if(___nl__bool__28){ goto label_87;}
#line 168
c_rt_lib0clear(&___nl__im__1);
#line 168
//clear ___nl__int__2;
#line 168
c_rt_lib0clear(&___nl__im__3);
#line 168
//clear ___nl__bool__5;
#line 168
//clear ___nl__int__12;
#line 168
//clear ___nl__int__13;
#line 168
//clear ___nl__int__14;
#line 168
//clear ___nl__bool__15;
#line 168
//clear ___nl__int__16;
#line 168
c_rt_lib0clear(&___nl__im__17);
#line 168
c_rt_lib0clear(&___nl__im__18);
#line 168
//clear ___nl__bool__19;
#line 168
c_rt_lib0clear(&___nl__im__20);
#line 168
c_rt_lib0clear(&___nl__im__21);
#line 168
//clear ___nl__bool__28;
#line 168
return NULL;
#line 168
goto label_87;
#line 168
label_87:
;
#line 168
//clear ___nl__bool__28;
#line 169
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get((*___ref___im__0), ___nl__int__2));
#line 170
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__1, ___nl__int__2));
#line 170
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(342)));
#line 170
c_rt_lib0clear(&___nl__im__31);
#line 170
c_rt_lib0move(&___nl__im__35, c_rt_lib0init_iter(___nl__im__30));
#line 170
label_94:
;
#line 170
___nl__bool__33 = c_rt_lib0is_end_hash(___nl__im__35);
#line 170
if(___nl__bool__33){ goto label_139;}
#line 170
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_key_iter(___nl__im__35));
#line 170
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value(___nl__im__30, ___nl__im__32));
#line 171
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(339));
#line 171
if(___nl__bool__36){ goto label_106;}
#line 175
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(251));
#line 175
if(___nl__bool__36){ goto label_122;}
#line 175
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 175
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__34));
#line 175
nl_die_arg(___nl__im__37);
#line 171
label_106:
;
#line 171
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__34, ___get_global_string_const(339)));
#line 171
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 172
___nl__int__40 = ptd0string_to_int(___nl__im__32);
#line 173
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_mk(0));
#line 173
c_rt_lib0copy(&___nl__im__42, ___nl__im__41);
#line 173
c_rt_lib0array_set(&___nl__im__29, ___nl__int__40, ___nl__im__42);
#line 173
c_rt_lib0clear(&___nl__im__41);
#line 173
c_rt_lib0clear(&___nl__im__42);
#line 174
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_arr(___nl__im__29, ___nl__int__40));
#line 174
c_rt_lib0move(&___nl__im__44,___get_global_string_const(36));
#line 174
c_rt_lib0delete(hash0set_value(&___nl__im__43, ___nl__im__38, ___nl__im__44));
#line 174
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__29, ___nl__int__40, ___nl__im__43));
#line 174
c_rt_lib0clear(&___nl__im__43);
#line 174
c_rt_lib0clear(&___nl__im__44);
#line 175
goto label_130;
#line 175
label_122:
;
#line 176
___nl__int__45 = ptd0string_to_int(___nl__im__32);
#line 177
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 177
c_rt_lib0copy(&___nl__im__47, ___nl__im__46);
#line 177
c_rt_lib0array_set(&___nl__im__29, ___nl__int__45, ___nl__im__47);
#line 177
c_rt_lib0clear(&___nl__im__46);
#line 177
c_rt_lib0clear(&___nl__im__47);
#line 178
goto label_130;
#line 178
label_130:
;
#line 178
//clear ___nl__bool__36;
#line 178
c_rt_lib0clear(&___nl__im__37);
#line 178
c_rt_lib0clear(&___nl__im__38);
#line 178
c_rt_lib0clear(&___nl__im__39);
#line 178
//clear ___nl__int__40;
#line 178
//clear ___nl__int__45;
#line 179
c_rt_lib0move(&___nl__im__35, c_rt_lib0next_iter(___nl__im__35));
#line 179
goto label_94;
#line 179
label_139:
;
#line 180
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__1, ___nl__int__2));
#line 180
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(278)));
#line 180
c_rt_lib0clear(&___nl__im__49);
#line 180
___nl__int__51 = 0;
#line 180
___nl__int__52 = 1;
#line 180
___nl__int__53 = c_rt_lib0array_len(___nl__im__48);
#line 180
label_146:
;
#line 180
___nl__int__55 = ___nl__int__51 >= ___nl__int__53;
#line 180
___nl__bool__54 = ___nl__int__55;
#line 180
if(___nl__bool__54){ goto label_157;}
#line 180
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__48, ___nl__int__51));
#line 180
c_rt_lib0copy(&___nl__im__50, ___nl__im__56);
#line 181
___nl__int__57 = ptd0string_to_int(___nl__im__50);
#line 182
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(___ref___im__0, ___nl__im__1, ___nl__int__57, ___nl__im__29, ___ref___im__4));
#line 182
c_rt_lib0clear(&___nl__im__50);
#line 183
___nl__int__51 = ___nl__int__51 + ___nl__int__52;
#line 183
goto label_146;
#line 183
label_157:
;
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
//clear ___nl__int__2;
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
//clear ___nl__bool__5;
#line 183
//clear ___nl__int__12;
#line 183
//clear ___nl__int__13;
#line 183
//clear ___nl__int__14;
#line 183
//clear ___nl__bool__15;
#line 183
//clear ___nl__int__16;
#line 183
c_rt_lib0clear(&___nl__im__17);
#line 183
c_rt_lib0clear(&___nl__im__18);
#line 183
//clear ___nl__bool__19;
#line 183
c_rt_lib0clear(&___nl__im__20);
#line 183
c_rt_lib0clear(&___nl__im__21);
#line 183
c_rt_lib0clear(&___nl__im__29);
#line 183
c_rt_lib0clear(&___nl__im__30);
#line 183
c_rt_lib0clear(&___nl__im__32);
#line 183
//clear ___nl__bool__33;
#line 183
c_rt_lib0clear(&___nl__im__34);
#line 183
c_rt_lib0clear(&___nl__im__35);
#line 183
//clear ___nl__bool__36;
#line 183
c_rt_lib0clear(&___nl__im__37);
#line 183
c_rt_lib0clear(&___nl__im__38);
#line 183
c_rt_lib0clear(&___nl__im__39);
#line 183
//clear ___nl__int__40;
#line 183
//clear ___nl__int__45;
#line 183
c_rt_lib0clear(&___nl__im__48);
#line 183
c_rt_lib0clear(&___nl__im__50);
#line 183
//clear ___nl__int__51;
#line 183
//clear ___nl__int__52;
#line 183
//clear ___nl__int__53;
#line 183
//clear ___nl__bool__54;
#line 183
//clear ___nl__int__55;
#line 183
c_rt_lib0clear(&___nl__im__56);
#line 183
//clear ___nl__int__57;
#line 183
return NULL;
return NULL;

}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void unnecessary_commands_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT unnecessary_commands_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT unnecessary_commands_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = unnecessary_commands0state_t0cal();
	break;
case 1:
	___const__[1] = unnecessary_commands0block_state_t0cal();
	break;
case 2:
	___const__[2] = unnecessary_commands0graph_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
