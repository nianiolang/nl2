
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "ntokenizer.h"
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#include "own.h"
#include "array.h"
#include "hash.h"
#include "string.h"
#include "enum.h"
#include "c_std_lib.h"
#include "singleton.h"
#include "ntokenizer.h"
#line 1 "ntokenizer.nl"

static ImmT *__const__f = NULL;
void ntokenizer_priv0__const__init();
ImmT ntokenizer_priv0__const__sim(int __nr);
ImmT ntokenizer_priv0__const__sing(int __nr);

void ntokenizer0anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0RE0clean(anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0RE rec) {
;
c_rt_lib0delete(rec.text0field);
c_rt_lib0delete(rec.next_token0field);
;
c_rt_lib0delete(rec.type0field);
c_rt_lib0delete(rec.place0field);
;
c_rt_lib0delete(rec.last_comment0field);
;
c_rt_lib0delete(rec.place_ws0field);
}
void ntokenizer0anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0RE0free(anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0RE *rec) {
ntokenizer0anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void ntokenizer0state_t0type0clean(ntokenizer0state_t0type rec) {
;
c_rt_lib0delete(rec.text0field);
c_rt_lib0delete(rec.next_token0field);
;
c_rt_lib0delete(rec.type0field);
c_rt_lib0delete(rec.place0field);
;
c_rt_lib0delete(rec.last_comment0field);
;
c_rt_lib0delete(rec.place_ws0field);
}
void ntokenizer0state_t0type0free(ntokenizer0state_t0type *rec) {
ntokenizer0state_t0type0clean(*rec);
free_mem(rec, sizeof(*rec));
}
ImmT  ntokenizer_priv0get_keywords();
ImmT  ntokenizer_priv0get_char_oper();
ImmT  ntokenizer_priv0get_lett_oper();
ImmT  ntokenizer_priv0get_char(ntokenizer0state_t0type* ___ref___rec__0);
ImmT  ntokenizer_priv0get_next_char(ntokenizer0state_t0type* ___ref___rec__0);
ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___rec__0);
bool  ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___rec__0);
bool  ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0);
ImmT  ntokenizer_priv0try_get_operator(ntokenizer0state_t0type* ___ref___rec__0,ImmT * ___ref___im__1);
ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___rec__0);


ImmT ntokenizer_priv0get_keywords(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(0);}
ImmT ntokenizer_priv0get_keywords0cal() {
ntokenizer_priv0__const__init();
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
#line 19
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 20
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 21
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 22
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 23
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 24
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 25
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 26
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 27
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 28
c_rt_lib0move(&___nl__im__11,___get_global_const(37));
#line 29
c_rt_lib0move(&___nl__im__12,___get_global_const(37));
#line 30
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 31
c_rt_lib0move(&___nl__im__14,___get_global_const(37));
#line 32
c_rt_lib0move(&___nl__im__15,___get_global_const(37));
#line 33
c_rt_lib0move(&___nl__im__16,___get_global_const(37));
#line 34
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 35
c_rt_lib0move(&___nl__im__18,___get_global_const(37));
#line 36
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 37
c_rt_lib0move(&___nl__im__20,___get_global_const(37));
#line 38
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 39
c_rt_lib0move(&___nl__im__22,___get_global_const(37));
#line 40
c_rt_lib0move(&___nl__im__23,___get_global_const(37));
#line 41
c_rt_lib0move(&___nl__im__24,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(24, ___get_global_const(1072), ___nl__im__2, ___get_global_const(953), ___nl__im__3, ___get_global_const(954), ___nl__im__4, ___get_global_const(952), ___nl__im__5, ___get_global_const(955), ___nl__im__6, ___get_global_const(159), ___nl__im__7, ___get_global_const(956), ___nl__im__8, ___get_global_const(951), ___nl__im__9, ___get_global_const(966), ___nl__im__10, ___get_global_const(967), ___nl__im__11, ___get_global_const(481), ___nl__im__12, ___get_global_const(705), ___nl__im__13, ___get_global_const(40), ___nl__im__14, ___get_global_const(961), ___nl__im__15, ___get_global_const(1095), ___nl__im__16, ___get_global_const(1067), ___nl__im__17, ___get_global_const(553), ___nl__im__18, ___get_global_const(554), ___nl__im__19, ___get_global_const(960), ___nl__im__20, ___get_global_const(959), ___nl__im__21, ___get_global_const(246), ___nl__im__22, ___get_global_const(963), ___nl__im__23, ___get_global_const(177), ___nl__im__24, ___get_global_const(247), ___nl__im__25));
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
c_rt_lib0clear(&___nl__im__6);
#line 42
c_rt_lib0clear(&___nl__im__7);
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
c_rt_lib0clear(&___nl__im__9);
#line 42
c_rt_lib0clear(&___nl__im__10);
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
c_rt_lib0clear(&___nl__im__13);
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
c_rt_lib0clear(&___nl__im__15);
#line 42
c_rt_lib0clear(&___nl__im__16);
#line 42
c_rt_lib0clear(&___nl__im__17);
#line 42
c_rt_lib0clear(&___nl__im__18);
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
c_rt_lib0clear(&___nl__im__20);
#line 42
c_rt_lib0clear(&___nl__im__21);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
c_rt_lib0clear(&___nl__im__23);
#line 42
c_rt_lib0clear(&___nl__im__24);
#line 42
c_rt_lib0clear(&___nl__im__25);
#line 42
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
return ___nl__im__0;
return NULL;
}

ImmT ntokenizer_priv0get_char_oper(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(1);}
ImmT ntokenizer_priv0get_char_oper0cal() {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
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
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
#line 47
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(3, ___nl__im__1, ___nl__im__2, ___nl__im__3));
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0move(&___nl__im__5, nast0get_unary_ops());
#line 48
c_rt_lib0move(&___nl__im__6, nast0get_bin_ops());
#line 48
c_rt_lib0move(&___nl__im__7, nast0get_ternary_ops());
#line 48
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(3, ___nl__im__5, ___nl__im__6, ___nl__im__7));
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0clear(&___nl__im__7);
#line 48
___nl__int__9 = 0;
#line 48
___nl__int__10 = 1;
#line 48
___nl__int__11 = c_rt_lib0array_len(___nl__im__4);
#line 48
label_3:
;
#line 48
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 48
___nl__bool__12 = ___nl__int__13;
#line 48
if(___nl__bool__12){ goto label_1;}
#line 48
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__4, ___nl__int__9));
#line 48
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 49
c_rt_lib0move(&___nl__im__18, c_rt_lib0init_iter(___nl__im__8));
#line 49
label_6:
;
#line 49
___nl__bool__16 = c_rt_lib0is_end_hash(___nl__im__18);
#line 49
if(___nl__bool__16){ goto label_4;}
#line 49
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_key_iter(___nl__im__18));
#line 49
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value(___nl__im__8, ___nl__im__15));
#line 50
___nl__int__21 = 0;
#line 50
___nl__int__22 = 1;
#line 50
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__15, ___nl__int__21, ___nl__int__22));
#line 50
//clear ___nl__int__21;
#line 50
//clear ___nl__int__22;
#line 50
___nl__bool__19 = string0is_letter(___nl__im__20);
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 50
___nl__bool__19 = !___nl__bool__19;
#line 50
___nl__bool__19 = !___nl__bool__19;
#line 50
if(___nl__bool__19){ goto label_8;}
#line 50
___nl__int__25 = string0length(___nl__im__15);
#line 50
___nl__int__26 = 1;
#line 50
___nl__int__24 = ___nl__int__25 - ___nl__int__26;
#line 50
//clear ___nl__int__25;
#line 50
//clear ___nl__int__26;
#line 50
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__24));
#line 50
c_rt_lib0delete(array0push(&___nl__im__23, ___nl__im__15));
#line 50
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__24, ___nl__im__23));
#line 50
c_rt_lib0clear(&___nl__im__23);
#line 50
//clear ___nl__int__24;
#line 50
goto label_7;
#line 50
label_8:
;
#line 50
label_7:
;
#line 50
//clear ___nl__bool__19;
#line 51
c_rt_lib0move(&___nl__im__18, c_rt_lib0next_iter(___nl__im__18));
#line 51
goto label_6;
#line 51
label_4:
;
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 52
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 52
goto label_3;
#line 52
label_1:
;
#line 53
___nl__int__28 = 2;
#line 53
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__28));
#line 53
___nl__int__30 = 1;
#line 53
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__0, ___nl__int__30));
#line 53
//clear ___nl__int__30;
#line 53
c_rt_lib0delete(array0append(&___nl__im__27, ___nl__im__29));
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__28, ___nl__im__27));
#line 53
c_rt_lib0clear(&___nl__im__27);
#line 53
//clear ___nl__int__28;
#line 53
c_rt_lib0clear(&___nl__im__29);
#line 54
___nl__int__32 = 2;
#line 54
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__32));
#line 54
___nl__int__34 = 0;
#line 54
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__0, ___nl__int__34));
#line 54
//clear ___nl__int__34;
#line 54
c_rt_lib0delete(array0append(&___nl__im__31, ___nl__im__33));
#line 54
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__32, ___nl__im__31));
#line 54
c_rt_lib0clear(&___nl__im__31);
#line 54
//clear ___nl__int__32;
#line 54
c_rt_lib0clear(&___nl__im__33);
#line 55
___nl__int__37 = 2;
#line 55
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__0, ___nl__int__37));
#line 55
//clear ___nl__int__37;
#line 55
c_rt_lib0move(&___nl__im__35, singleton0sigleton_do_not_use_without_approval(___nl__im__36));
#line 55
c_rt_lib0clear(&___nl__im__36);
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__4);
#line 55
c_rt_lib0clear(&___nl__im__8);
#line 55
//clear ___nl__int__9;
#line 55
//clear ___nl__int__10;
#line 55
//clear ___nl__int__11;
#line 55
//clear ___nl__bool__12;
#line 55
//clear ___nl__int__13;
#line 55
c_rt_lib0clear(&___nl__im__14);
#line 55
c_rt_lib0clear(&___nl__im__15);
#line 55
//clear ___nl__bool__16;
#line 55
c_rt_lib0clear(&___nl__im__17);
#line 55
c_rt_lib0clear(&___nl__im__18);
#line 55
return ___nl__im__35;
return NULL;
}

ImmT ntokenizer_priv0get_lett_oper(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(2);}
ImmT ntokenizer_priv0get_lett_oper0cal() {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 59
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__im__2, nast0get_unary_ops());
#line 60
c_rt_lib0move(&___nl__im__3, nast0get_bin_ops());
#line 60
c_rt_lib0move(&___nl__im__4, nast0get_ternary_ops());
#line 60
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(3, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
___nl__int__6 = 0;
#line 60
___nl__int__7 = 1;
#line 60
___nl__int__8 = c_rt_lib0array_len(___nl__im__1);
#line 60
label_3:
;
#line 60
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 60
___nl__bool__9 = ___nl__int__10;
#line 60
if(___nl__bool__9){ goto label_1;}
#line 60
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 60
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 61
c_rt_lib0move(&___nl__im__15, c_rt_lib0init_iter(___nl__im__5));
#line 61
label_6:
;
#line 61
___nl__bool__13 = c_rt_lib0is_end_hash(___nl__im__15);
#line 61
if(___nl__bool__13){ goto label_4;}
#line 61
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_key_iter(___nl__im__15));
#line 61
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__12));
#line 62
___nl__int__18 = 0;
#line 62
___nl__int__19 = 1;
#line 62
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__12, ___nl__int__18, ___nl__int__19));
#line 62
//clear ___nl__int__18;
#line 62
//clear ___nl__int__19;
#line 62
___nl__bool__16 = string0is_letter(___nl__im__17);
#line 62
c_rt_lib0clear(&___nl__im__17);
#line 62
___nl__bool__16 = !___nl__bool__16;
#line 62
if(___nl__bool__16){ goto label_8;}
#line 62
c_rt_lib0move(&___nl__im__20,___get_global_const(37));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__12, ___nl__im__20));
#line 62
c_rt_lib0clear(&___nl__im__20);
#line 62
goto label_7;
#line 62
label_8:
;
#line 62
label_7:
;
#line 62
//clear ___nl__bool__16;
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0next_iter(___nl__im__15));
#line 63
goto label_6;
#line 63
label_4:
;
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 64
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 64
goto label_3;
#line 64
label_1:
;
#line 65
c_rt_lib0move(&___nl__im__21, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
//clear ___nl__int__6;
#line 65
//clear ___nl__int__7;
#line 65
//clear ___nl__int__8;
#line 65
//clear ___nl__bool__9;
#line 65
//clear ___nl__int__10;
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 65
//clear ___nl__bool__13;
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
c_rt_lib0clear(&___nl__im__15);
#line 65
return ___nl__im__21;
return NULL;
}

ImmT  ntokenizer0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0state_t");
return ntokenizer0state_t();
}
ImmT  ntokenizer0state_t() {
ntokenizer_priv0__const__init();
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
#line 70
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 70
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 71
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 72
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 73
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(1068), ___get_global_const(1096)));
#line 73
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 74
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 75
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 76
c_rt_lib0move(&___nl__im__9, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__12, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__13, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__12, ___get_global_const(1034), ___nl__im__13));
#line 77
c_rt_lib0clear(&___nl__im__12);
#line 77
c_rt_lib0clear(&___nl__im__13);
#line 77
c_rt_lib0move(&___nl__im__10, ptd0rec(___nl__im__11));
#line 77
c_rt_lib0clear(&___nl__im__11);
#line 78
c_rt_lib0move(&___nl__im__16, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__17, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__16, ___get_global_const(1034), ___nl__im__17));
#line 78
c_rt_lib0clear(&___nl__im__16);
#line 78
c_rt_lib0clear(&___nl__im__17);
#line 78
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 78
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 79
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(1097), ___nl__im__2, ___get_global_const(282), ___nl__im__4, ___get_global_const(283), ___nl__im__5, ___get_global_const(205), ___nl__im__6, ___get_global_const(1098), ___nl__im__7, ___get_global_const(1099), ___nl__im__8, ___get_global_const(1100), ___nl__im__9, ___get_global_const(1101), ___nl__im__10, ___get_global_const(1102), ___nl__im__14, ___get_global_const(1103), ___nl__im__18));
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
c_rt_lib0clear(&___nl__im__8);
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 79
c_rt_lib0clear(&___nl__im__10);
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
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

ImmT  ntokenizer0token_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0token_t");
return ntokenizer0token_t();
}
ImmT  ntokenizer0token_t() {
ntokenizer_priv0__const__init();
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
#line 85
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 86
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 87
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 88
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 89
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 91
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 92
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_const(1021), ___nl__im__2, ___get_global_const(1104), ___nl__im__3, ___get_global_const(1087), ___nl__im__4, ___get_global_const(1084), ___nl__im__5, ___get_global_const(1089), ___nl__im__6, ___get_global_const(1073), ___nl__im__7, ___get_global_const(1086), ___nl__im__8, ___get_global_const(545), ___nl__im__9, ___get_global_const(123), ___nl__im__10));
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
c_rt_lib0clear(&___nl__im__3);
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 93
c_rt_lib0clear(&___nl__im__7);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
return ___nl__im__0;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
return NULL;
return NULL;
}

ImmT  ntokenizer0init(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
#line 98
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 98
return NULL;
}

ImmT  ntokenizer0get_last_comment(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 102
___nl__im_ptr__2 = &((*___ref___rec__0).last_comment0field);
#line 102
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 102
___nl__im_ptr__2 = NULL;
#line 102
return ___nl__im__1;
return NULL;
}

ImmT  ntokenizer_priv0get_char(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
INT  ___nl__int__5 = 0;
INT * ___nl__int_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 106
___nl__im_ptr__4 = &((*___ref___rec__0).text0field);
#line 106
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 106
___nl__im_ptr__4 = NULL;
#line 106
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 106
___nl__int__5 = (*___nl__int_ptr__6);
#line 106
___nl__int_ptr__6 = NULL;
#line 106
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__5));
#line 106
___nl__int__8 = 1;
#line 106
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 106
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__im__7, ___nl__im__9));
#line 106
c_rt_lib0clear(&___nl__im__3);
#line 106
//clear ___nl__int__5;
#line 106
c_rt_lib0clear(&___nl__im__7);
#line 106
//clear ___nl__int__8;
#line 106
c_rt_lib0clear(&___nl__im__9);
#line 106
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 106
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__10));
#line 106
c_rt_lib0clear(&___nl__im__2);
#line 106
c_rt_lib0clear(&___nl__im__10);
#line 106
return ___nl__im__1;
return NULL;
}

ImmT  ntokenizer_priv0get_next_char(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT * ___nl__int_ptr__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT * ___nl__int_ptr__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT * ___nl__int_ptr__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
#line 110
___nl__int_ptr__3 = &((*___ref___rec__0).len0field);
#line 110
___nl__int__2 = (*___nl__int_ptr__3);
#line 110
___nl__int_ptr__3 = NULL;
#line 110
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 110
___nl__int__5 = (*___nl__int_ptr__6);
#line 110
___nl__int_ptr__6 = NULL;
#line 110
___nl__int__7 = 1;
#line 110
___nl__int__4 = ___nl__int__5 + ___nl__int__7;
#line 110
//clear ___nl__int__5;
#line 110
//clear ___nl__int__7;
#line 110
___nl__int__8 = ___nl__int__2 <= ___nl__int__4;
#line 110
___nl__bool__1 = ___nl__int__8;
#line 110
//clear ___nl__int__2;
#line 110
//clear ___nl__int__4;
#line 110
//clear ___nl__int__8;
#line 110
___nl__bool__1 = !___nl__bool__1;
#line 110
if(___nl__bool__1){ goto label_2;}
#line 110
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 110
//clear ___nl__bool__1;
#line 110
return ___nl__im__9;
#line 110
goto label_1;
#line 110
label_2:
;
#line 110
label_1:
;
#line 110
//clear ___nl__bool__1;
#line 110
c_rt_lib0clear(&___nl__im__9);
#line 111
___nl__im_ptr__12 = &((*___ref___rec__0).text0field);
#line 111
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 111
___nl__im_ptr__12 = NULL;
#line 111
___nl__int_ptr__15 = &((*___ref___rec__0).pos0field);
#line 111
___nl__int__14 = (*___nl__int_ptr__15);
#line 111
___nl__int_ptr__15 = NULL;
#line 111
___nl__int__16 = 1;
#line 111
___nl__int__13 = ___nl__int__14 + ___nl__int__16;
#line 111
//clear ___nl__int__14;
#line 111
//clear ___nl__int__16;
#line 111
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__13));
#line 111
___nl__int__18 = 1;
#line 111
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__18));
#line 111
c_rt_lib0move(&___nl__im__10, c_std_lib0fast_substr(___nl__im__11, ___nl__im__17, ___nl__im__19));
#line 111
c_rt_lib0clear(&___nl__im__11);
#line 111
//clear ___nl__int__13;
#line 111
c_rt_lib0clear(&___nl__im__17);
#line 111
//clear ___nl__int__18;
#line 111
c_rt_lib0clear(&___nl__im__19);
#line 111
return ___nl__im__10;
return NULL;
}

ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT * ___nl__int_ptr__6 = NULL;
INT  ___nl__int__7 = 0;
INT * ___nl__int_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT * ___nl__int_ptr__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT * ___nl__int_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT * ___nl__int_ptr__26 = NULL;
INT * ___nl__int_ptr__27 = NULL;
INT * ___nl__int_ptr__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
bool  ___nl__bool__32 = false;
ImmT * ___nl__im_ptr__33 = NULL;
INT * ___nl__int_ptr__34 = NULL;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
INT  ___nl__int__37 = 0;
INT * ___nl__int_ptr__38 = NULL;
INT  ___nl__int__39 = 0;
INT * ___nl__int_ptr__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
INT * ___nl__int_ptr__43 = NULL;
INT  ___nl__int__44 = 0;
bool  ___nl__bool__45 = false;
ImmT * ___nl__im_ptr__46 = NULL;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
INT * ___nl__int_ptr__51 = NULL;
INT  ___nl__int__52 = 0;
#line 115
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 115
___nl__im_ptr__2 = &((*___ref___rec__0).last_comment0field);
#line 115
c_rt_lib0copy(___nl__im_ptr__2, ___nl__im__1);
#line 115
___nl__im_ptr__2 = NULL;
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 116
___nl__bool__3 = true;
#line 117
label_2:
;
#line 118
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 118
___nl__int__5 = (*___nl__int_ptr__6);
#line 118
___nl__int_ptr__6 = NULL;
#line 118
___nl__int_ptr__8 = &((*___ref___rec__0).len0field);
#line 118
___nl__int__7 = (*___nl__int_ptr__8);
#line 118
___nl__int_ptr__8 = NULL;
#line 118
___nl__int__9 = ___nl__int__5 == ___nl__int__7;
#line 118
___nl__bool__4 = ___nl__int__9;
#line 118
//clear ___nl__int__5;
#line 118
//clear ___nl__int__7;
#line 118
//clear ___nl__int__9;
#line 118
___nl__bool__4 = !___nl__bool__4;
#line 118
if(___nl__bool__4){ goto label_4;}
#line 118
//clear ___nl__bool__3;
#line 118
//clear ___nl__bool__4;
#line 118
return NULL;
#line 118
goto label_3;
#line 118
label_4:
;
#line 118
label_3:
;
#line 118
//clear ___nl__bool__4;
#line 119
c_rt_lib0move(&___nl__im__10, ntokenizer_priv0get_char(___ref___rec__0));
#line 120
___nl__int__11 = string0ord(___nl__im__10);
#line 121
___nl__int__13 = 9;
#line 121
___nl__int__14 = ___nl__int__11 == ___nl__int__13;
#line 121
___nl__bool__12 = ___nl__int__14;
#line 121
//clear ___nl__int__13;
#line 121
//clear ___nl__int__14;
#line 121
if(___nl__bool__12){ goto label_8;}
#line 121
___nl__int__15 = 13;
#line 121
___nl__int__16 = ___nl__int__11 == ___nl__int__15;
#line 121
___nl__bool__12 = ___nl__int__16;
#line 121
//clear ___nl__int__15;
#line 121
//clear ___nl__int__16;
#line 121
label_8:
;
#line 121
if(___nl__bool__12){ goto label_7;}
#line 121
___nl__int__17 = 32;
#line 121
___nl__int__18 = ___nl__int__11 == ___nl__int__17;
#line 121
___nl__bool__12 = ___nl__int__18;
#line 121
//clear ___nl__int__17;
#line 121
//clear ___nl__int__18;
#line 121
label_7:
;
#line 121
___nl__bool__12 = !___nl__bool__12;
#line 121
if(___nl__bool__12){ goto label_6;}
#line 122
___nl__int_ptr__19 = &((*___ref___rec__0).pos0field);
#line 122
___nl__int__20 = 1;
#line 122
(*___nl__int_ptr__19) = (*___nl__int_ptr__19) + ___nl__int__20;
#line 122
___nl__int_ptr__19 = NULL;
#line 122
//clear ___nl__int__20;
#line 123
___nl__bool__3 = false;
#line 124
goto label_5;
#line 124
label_6:
;
#line 124
___nl__int__21 = 10;
#line 124
___nl__int__22 = ___nl__int__11 == ___nl__int__21;
#line 124
___nl__bool__12 = ___nl__int__22;
#line 124
//clear ___nl__int__21;
#line 124
//clear ___nl__int__22;
#line 124
___nl__bool__12 = !___nl__bool__12;
#line 124
if(___nl__bool__12){ goto label_9;}
#line 125
___nl__int_ptr__23 = &((*___ref___rec__0).pos0field);
#line 125
___nl__int__24 = 1;
#line 125
(*___nl__int_ptr__23) = (*___nl__int_ptr__23) + ___nl__int__24;
#line 125
___nl__int_ptr__23 = NULL;
#line 125
//clear ___nl__int__24;
#line 126
___nl__int_ptr__26 = &((*___ref___rec__0).pos0field);
#line 126
___nl__int__25 = (*___nl__int_ptr__26);
#line 126
___nl__int_ptr__26 = NULL;
#line 126
___nl__int_ptr__27 = &((*___ref___rec__0).ln_pos0field);
#line 126
(*___nl__int_ptr__27) = ___nl__int__25;
#line 126
___nl__int_ptr__27 = NULL;
#line 126
//clear ___nl__int__25;
#line 127
___nl__int_ptr__28 = &((*___ref___rec__0).ln_nr0field);
#line 127
___nl__int__29 = 1;
#line 127
(*___nl__int_ptr__28) = (*___nl__int_ptr__28) + ___nl__int__29;
#line 127
___nl__int_ptr__28 = NULL;
#line 127
//clear ___nl__int__29;
#line 128
___nl__bool__3 = false;
#line 129
goto label_5;
#line 129
label_9:
;
#line 129
___nl__int__30 = 35;
#line 129
___nl__int__31 = ___nl__int__11 == ___nl__int__30;
#line 129
___nl__bool__12 = ___nl__int__31;
#line 129
//clear ___nl__int__30;
#line 129
//clear ___nl__int__31;
#line 129
___nl__bool__12 = !___nl__bool__12;
#line 129
if(___nl__bool__12){ goto label_10;}
#line 130
___nl__bool__32 = ___nl__bool__3;
#line 130
___nl__bool__32 = !___nl__bool__32;
#line 130
if(___nl__bool__32){ goto label_12;}
#line 131
___nl__im_ptr__33 = &((*___ref___rec__0).last_comment0field);
#line 131
c_rt_lib0move(___nl__im_ptr__33, c_rt_lib0concat_add((*___nl__im_ptr__33), ___nl__im__10));
#line 131
___nl__im_ptr__33 = NULL;
#line 132
goto label_11;
#line 132
label_12:
;
#line 132
label_11:
;
#line 132
//clear ___nl__bool__32;
#line 133
___nl__int_ptr__34 = &((*___ref___rec__0).pos0field);
#line 133
___nl__int__35 = 1;
#line 133
(*___nl__int_ptr__34) = (*___nl__int_ptr__34) + ___nl__int__35;
#line 133
___nl__int_ptr__34 = NULL;
#line 133
//clear ___nl__int__35;
#line 134
label_14:
;
#line 135
___nl__int_ptr__38 = &((*___ref___rec__0).pos0field);
#line 135
___nl__int__37 = (*___nl__int_ptr__38);
#line 135
___nl__int_ptr__38 = NULL;
#line 135
___nl__int_ptr__40 = &((*___ref___rec__0).len0field);
#line 135
___nl__int__39 = (*___nl__int_ptr__40);
#line 135
___nl__int_ptr__40 = NULL;
#line 135
___nl__int__41 = ___nl__int__37 == ___nl__int__39;
#line 135
___nl__bool__36 = ___nl__int__41;
#line 135
//clear ___nl__int__37;
#line 135
//clear ___nl__int__39;
#line 135
//clear ___nl__int__41;
#line 135
___nl__bool__36 = !___nl__bool__36;
#line 135
if(___nl__bool__36){ goto label_16;}
#line 135
//clear ___nl__bool__3;
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
//clear ___nl__int__11;
#line 135
//clear ___nl__bool__12;
#line 135
//clear ___nl__bool__36;
#line 135
return NULL;
#line 135
goto label_15;
#line 135
label_16:
;
#line 135
label_15:
;
#line 135
//clear ___nl__bool__36;
#line 136
c_rt_lib0move(&___nl__im__42, ntokenizer_priv0get_char(___ref___rec__0));
#line 137
___nl__int_ptr__43 = &((*___ref___rec__0).pos0field);
#line 137
___nl__int__44 = 1;
#line 137
(*___nl__int_ptr__43) = (*___nl__int_ptr__43) + ___nl__int__44;
#line 137
___nl__int_ptr__43 = NULL;
#line 137
//clear ___nl__int__44;
#line 138
___nl__bool__45 = ___nl__bool__3;
#line 138
___nl__bool__45 = !___nl__bool__45;
#line 138
if(___nl__bool__45){ goto label_18;}
#line 139
___nl__im_ptr__46 = &((*___ref___rec__0).last_comment0field);
#line 139
c_rt_lib0move(___nl__im_ptr__46, c_rt_lib0concat_add((*___nl__im_ptr__46), ___nl__im__42));
#line 139
___nl__im_ptr__46 = NULL;
#line 140
goto label_17;
#line 140
label_18:
;
#line 140
label_17:
;
#line 140
//clear ___nl__bool__45;
#line 141
___nl__int__48 = string0ord(___nl__im__42);
#line 141
___nl__int__49 = 10;
#line 141
___nl__int__50 = ___nl__int__48 == ___nl__int__49;
#line 141
___nl__bool__47 = ___nl__int__50;
#line 141
//clear ___nl__int__48;
#line 141
//clear ___nl__int__49;
#line 141
//clear ___nl__int__50;
#line 141
___nl__bool__47 = !___nl__bool__47;
#line 141
if(___nl__bool__47){ goto label_20;}
#line 141
goto label_13;
#line 141
goto label_19;
#line 141
label_20:
;
#line 141
label_19:
;
#line 141
//clear ___nl__bool__47;
#line 141
c_rt_lib0clear(&___nl__im__42);
#line 134
goto label_14;
#line 134
label_13:
;
#line 143
___nl__int_ptr__51 = &((*___ref___rec__0).ln_nr0field);
#line 143
___nl__int__52 = 1;
#line 143
(*___nl__int_ptr__51) = (*___nl__int_ptr__51) + ___nl__int__52;
#line 143
___nl__int_ptr__51 = NULL;
#line 143
//clear ___nl__int__52;
#line 144
goto label_5;
#line 144
label_10:
;
#line 145
//clear ___nl__bool__3;
#line 145
c_rt_lib0clear(&___nl__im__10);
#line 145
//clear ___nl__int__11;
#line 145
//clear ___nl__bool__12;
#line 145
c_rt_lib0clear(&___nl__im__42);
#line 145
return NULL;
#line 146
goto label_5;
#line 146
label_5:
;
#line 146
//clear ___nl__bool__12;
#line 146
c_rt_lib0clear(&___nl__im__42);
#line 146
c_rt_lib0clear(&___nl__im__10);
#line 146
//clear ___nl__int__11;
#line 117
goto label_2;
#line 117
//clear ___nl__bool__3;
#line 117
c_rt_lib0clear(&___nl__im__10);
#line 117
//clear ___nl__int__11;
#line 117
return NULL;
return NULL;
}

bool  ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
#line 151
___nl__im_ptr__3 = &((*___ref___rec__0).type0field);
#line 151
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 151
___nl__im_ptr__3 = NULL;
#line 151
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1104));
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
___nl__bool__1 = !___nl__bool__1;
#line 151
if(___nl__bool__1){ goto label_2;}
#line 151
___nl__bool__4 = true;
#line 151
//clear ___nl__bool__1;
#line 151
return ___nl__bool__4;
#line 151
goto label_1;
#line 151
label_2:
;
#line 151
label_1:
;
#line 151
//clear ___nl__bool__1;
#line 151
//clear ___nl__bool__4;
#line 152
___nl__im_ptr__7 = &((*___ref___rec__0).type0field);
#line 152
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 152
___nl__im_ptr__7 = NULL;
#line 152
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(1087));
#line 152
c_rt_lib0clear(&___nl__im__6);
#line 152
___nl__bool__5 = !___nl__bool__5;
#line 152
if(___nl__bool__5){ goto label_4;}
#line 152
___nl__bool__8 = true;
#line 152
//clear ___nl__bool__5;
#line 152
return ___nl__bool__8;
#line 152
goto label_3;
#line 152
label_4:
;
#line 152
label_3:
;
#line 152
//clear ___nl__bool__5;
#line 152
//clear ___nl__bool__8;
#line 153
___nl__im_ptr__11 = &((*___ref___rec__0).type0field);
#line 153
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 153
___nl__im_ptr__11 = NULL;
#line 153
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(1089));
#line 153
c_rt_lib0clear(&___nl__im__10);
#line 153
___nl__bool__9 = !___nl__bool__9;
#line 153
if(___nl__bool__9){ goto label_6;}
#line 153
___nl__bool__12 = true;
#line 153
//clear ___nl__bool__9;
#line 153
return ___nl__bool__12;
#line 153
goto label_5;
#line 153
label_6:
;
#line 153
label_5:
;
#line 153
//clear ___nl__bool__9;
#line 153
//clear ___nl__bool__12;
#line 154
___nl__bool__13 = false;
#line 154
return ___nl__bool__13;
return false;
}

bool  ntokenizer0eat_token(ntokenizer0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
#line 158
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 158
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 158
___nl__im_ptr__5 = NULL;
#line 158
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 158
c_rt_lib0clear(&___nl__im__4);
#line 158
___nl__bool__3 = !___nl__bool__2;
#line 158
if(___nl__bool__3){ goto label_3;}
#line 158
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 158
label_3:
;
#line 158
//clear ___nl__bool__3;
#line 158
___nl__bool__2 = !___nl__bool__2;
#line 158
if(___nl__bool__2){ goto label_2;}
#line 159
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 160
___nl__bool__6 = true;
#line 160
c_rt_lib0clear(&___nl__im__1);
#line 160
//clear ___nl__bool__2;
#line 160
return ___nl__bool__6;
#line 161
goto label_1;
#line 161
label_2:
;
#line 161
label_1:
;
#line 161
//clear ___nl__bool__2;
#line 161
//clear ___nl__bool__6;
#line 162
___nl__bool__7 = false;
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
return ___nl__bool__7;
return false;
}

INT  ntokenizer0get_line(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT * ___nl__int_ptr__2 = NULL;
#line 166
___nl__int_ptr__2 = &((*___ref___rec__0).ln_nr0field);
#line 166
___nl__int__1 = (*___nl__int_ptr__2);
#line 166
___nl__int_ptr__2 = NULL;
#line 166
return ___nl__int__1;
return 0;
}

INT  ntokenizer0get_column(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT * ___nl__int_ptr__6 = NULL;
INT  ___nl__int__7 = 0;
INT * ___nl__int_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
#line 169
___nl__int__4 = 1;
#line 169
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 169
___nl__int__5 = (*___nl__int_ptr__6);
#line 169
___nl__int_ptr__6 = NULL;
#line 169
___nl__int__3 = ___nl__int__4 + ___nl__int__5;
#line 169
//clear ___nl__int__4;
#line 169
//clear ___nl__int__5;
#line 169
___nl__int_ptr__8 = &((*___ref___rec__0).ln_pos0field);
#line 169
___nl__int__7 = (*___nl__int_ptr__8);
#line 169
___nl__int_ptr__8 = NULL;
#line 169
___nl__int__2 = ___nl__int__3 - ___nl__int__7;
#line 169
//clear ___nl__int__3;
#line 169
//clear ___nl__int__7;
#line 169
___nl__im_ptr__11 = &((*___ref___rec__0).next_token0field);
#line 169
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 169
___nl__im_ptr__11 = NULL;
#line 169
___nl__int__9 = string0length(___nl__im__10);
#line 169
c_rt_lib0clear(&___nl__im__10);
#line 169
___nl__int__1 = ___nl__int__2 - ___nl__int__9;
#line 169
//clear ___nl__int__2;
#line 169
//clear ___nl__int__9;
#line 169
return ___nl__int__1;
return 0;
}

ImmT  ntokenizer0get_place(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 172
___nl__im_ptr__2 = &((*___ref___rec__0).place0field);
#line 172
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 172
___nl__im_ptr__2 = NULL;
#line 172
return ___nl__im__1;
return NULL;
}

ImmT  ntokenizer0get_place_ws(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 176
___nl__im_ptr__2 = &((*___ref___rec__0).place_ws0field);
#line 176
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 176
___nl__im_ptr__2 = NULL;
#line 176
return ___nl__im__1;
return NULL;
}

ImmT  ntokenizer0get_token(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 180
___nl__im_ptr__2 = &((*___ref___rec__0).next_token0field);
#line 180
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 180
___nl__im_ptr__2 = NULL;
#line 180
return ___nl__im__1;
return NULL;
}

bool  ntokenizer0is_type(ntokenizer0state_t0type* ___ref___rec__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 184
___nl__im_ptr__4 = &((*___ref___rec__0).type0field);
#line 184
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 184
___nl__im_ptr__4 = NULL;
#line 184
___nl__bool__2 = enum0eq(___nl__im__3, ___nl__im__1);
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
return ___nl__bool__2;
return false;
}

bool  ntokenizer0next_is(ntokenizer0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 188
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 188
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 188
___nl__im_ptr__5 = NULL;
#line 188
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 188
c_rt_lib0clear(&___nl__im__4);
#line 188
___nl__bool__3 = !___nl__bool__2;
#line 188
if(___nl__bool__3){ goto label_1;}
#line 188
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 188
label_1:
;
#line 188
//clear ___nl__bool__3;
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
return ___nl__bool__2;
return false;
}

ImmT  ntokenizer0eat_type(ntokenizer0state_t0type* ___ref___rec__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 192
___nl__bool__2 = ntokenizer0is_type(___ref___rec__0, ___nl__im__1);
#line 192
___nl__bool__2 = !___nl__bool__2;
#line 192
___nl__bool__2 = !___nl__bool__2;
#line 192
if(___nl__bool__2){ goto label_2;}
#line 192
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 192
nl_die_arg(___nl__im__3);
#line 192
goto label_1;
#line 192
label_2:
;
#line 192
label_1:
;
#line 192
//clear ___nl__bool__2;
#line 192
c_rt_lib0clear(&___nl__im__3);
#line 193
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 193
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 193
___nl__im_ptr__5 = NULL;
#line 194
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
return ___nl__im__4;
return NULL;
}

bool  ntokenizer0is_text(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
bool  ___nl__bool__16 = false;
#line 199
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(1073)));
#line 199
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
___nl__bool__1 = !___nl__bool__1;
#line 199
if(___nl__bool__1){ goto label_2;}
#line 199
___nl__bool__3 = true;
#line 199
//clear ___nl__bool__1;
#line 199
return ___nl__bool__3;
#line 199
goto label_1;
#line 199
label_2:
;
#line 199
label_1:
;
#line 199
//clear ___nl__bool__1;
#line 199
//clear ___nl__bool__3;
#line 200
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 200
___nl__bool__4 = ntokenizer0is_type(___ref___rec__0, ___nl__im__5);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 200
___nl__bool__4 = !___nl__bool__4;
#line 200
if(___nl__bool__4){ goto label_4;}
#line 200
___nl__bool__6 = true;
#line 200
//clear ___nl__bool__4;
#line 200
return ___nl__bool__6;
#line 200
goto label_3;
#line 200
label_4:
;
#line 200
label_3:
;
#line 200
//clear ___nl__bool__4;
#line 200
//clear ___nl__bool__6;
#line 201
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 201
___nl__bool__7 = ntokenizer0is_type(___ref___rec__0, ___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
___nl__bool__7 = !___nl__bool__7;
#line 201
if(___nl__bool__7){ goto label_6;}
#line 202
___nl__im_ptr__12 = &((*___ref___rec__0).next_token0field);
#line 202
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 202
___nl__im_ptr__12 = NULL;
#line 202
___nl__int__13 = 0;
#line 202
___nl__int__14 = 1;
#line 202
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__11, ___nl__int__13, ___nl__int__14));
#line 202
c_rt_lib0clear(&___nl__im__11);
#line 202
//clear ___nl__int__13;
#line 202
//clear ___nl__int__14;
#line 202
___nl__bool__9 = string0is_letter(___nl__im__10);
#line 202
c_rt_lib0clear(&___nl__im__10);
#line 202
___nl__bool__9 = !___nl__bool__9;
#line 202
if(___nl__bool__9){ goto label_8;}
#line 202
___nl__bool__15 = true;
#line 202
//clear ___nl__bool__7;
#line 202
//clear ___nl__bool__9;
#line 202
return ___nl__bool__15;
#line 202
goto label_7;
#line 202
label_8:
;
#line 202
label_7:
;
#line 202
//clear ___nl__bool__9;
#line 202
//clear ___nl__bool__15;
#line 203
goto label_5;
#line 203
label_6:
;
#line 203
label_5:
;
#line 203
//clear ___nl__bool__7;
#line 204
___nl__bool__16 = false;
#line 204
return ___nl__bool__16;
return false;
}

ImmT  ntokenizer0eat_text(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 208
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(1073)));
#line 208
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
___nl__bool__1 = !___nl__bool__1;
#line 208
if(___nl__bool__1){ goto label_2;}
#line 208
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(1073)));
#line 208
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_type(___ref___rec__0, ___nl__im__4));
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
//clear ___nl__bool__1;
#line 208
return ___nl__im__3;
#line 208
goto label_1;
#line 208
label_2:
;
#line 208
label_1:
;
#line 208
//clear ___nl__bool__1;
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 209
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 209
___nl__bool__5 = ntokenizer0is_type(___ref___rec__0, ___nl__im__6);
#line 209
c_rt_lib0clear(&___nl__im__6);
#line 209
___nl__bool__5 = !___nl__bool__5;
#line 209
if(___nl__bool__5){ goto label_4;}
#line 209
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 209
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_type(___ref___rec__0, ___nl__im__8));
#line 209
c_rt_lib0clear(&___nl__im__8);
#line 209
//clear ___nl__bool__5;
#line 209
return ___nl__im__7;
#line 209
goto label_3;
#line 209
label_4:
;
#line 209
label_3:
;
#line 209
//clear ___nl__bool__5;
#line 209
c_rt_lib0clear(&___nl__im__7);
#line 210
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 210
___nl__bool__9 = ntokenizer0is_type(___ref___rec__0, ___nl__im__10);
#line 210
c_rt_lib0clear(&___nl__im__10);
#line 210
___nl__bool__9 = !___nl__bool__9;
#line 210
if(___nl__bool__9){ goto label_6;}
#line 212
___nl__im_ptr__14 = &((*___ref___rec__0).next_token0field);
#line 212
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 212
___nl__im_ptr__14 = NULL;
#line 212
___nl__int__15 = 0;
#line 212
___nl__int__16 = 1;
#line 212
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__13, ___nl__int__15, ___nl__int__16));
#line 212
c_rt_lib0clear(&___nl__im__13);
#line 212
//clear ___nl__int__15;
#line 212
//clear ___nl__int__16;
#line 212
___nl__bool__11 = string0is_letter(___nl__im__12);
#line 212
c_rt_lib0clear(&___nl__im__12);
#line 212
___nl__bool__11 = !___nl__bool__11;
#line 212
if(___nl__bool__11){ goto label_8;}
#line 211
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 211
c_rt_lib0move(&___nl__im__17, ntokenizer0eat_type(___ref___rec__0, ___nl__im__18));
#line 211
c_rt_lib0clear(&___nl__im__18);
#line 211
//clear ___nl__bool__9;
#line 211
//clear ___nl__bool__11;
#line 211
return ___nl__im__17;
#line 211
goto label_7;
#line 211
label_8:
;
#line 211
label_7:
;
#line 211
//clear ___nl__bool__11;
#line 211
c_rt_lib0clear(&___nl__im__17);
#line 213
goto label_5;
#line 213
label_6:
;
#line 213
label_5:
;
#line 213
//clear ___nl__bool__9;
#line 214
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 214
nl_die_arg(___nl__im__19);
return NULL;
}

ImmT  ntokenizer0info(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
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
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT * ___nl__int_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT * ___nl__int_ptr__24 = NULL;
INT  ___nl__int__25 = 0;
INT * ___nl__int_ptr__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT * ___nl__im_ptr__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 218
c_rt_lib0move(&___nl__im__9,___get_global_const(1105));
#line 218
___nl__im_ptr__11 = &((*___ref___rec__0).next_token0field);
#line 218
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 218
___nl__im_ptr__11 = NULL;
#line 218
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 218
c_rt_lib0clear(&___nl__im__9);
#line 218
c_rt_lib0clear(&___nl__im__10);
#line 218
c_rt_lib0move(&___nl__im__12,___get_global_const(1106));
#line 218
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 218
c_rt_lib0clear(&___nl__im__8);
#line 218
c_rt_lib0clear(&___nl__im__12);
#line 219
___nl__int_ptr__15 = &((*___ref___rec__0).ln_nr0field);
#line 219
___nl__int__14 = (*___nl__int_ptr__15);
#line 219
___nl__int_ptr__15 = NULL;
#line 219
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__14));
#line 219
c_rt_lib0move(&___nl__im__13, ptd0int_to_string(___nl__im__16));
#line 219
//clear ___nl__int__14;
#line 219
c_rt_lib0clear(&___nl__im__16);
#line 219
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__13));
#line 219
c_rt_lib0clear(&___nl__im__7);
#line 219
c_rt_lib0clear(&___nl__im__13);
#line 219
c_rt_lib0move(&___nl__im__17,___get_global_const(1107));
#line 219
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__17));
#line 219
c_rt_lib0clear(&___nl__im__6);
#line 219
c_rt_lib0clear(&___nl__im__17);
#line 220
___nl__int__22 = 1;
#line 220
___nl__int_ptr__24 = &((*___ref___rec__0).pos0field);
#line 220
___nl__int__23 = (*___nl__int_ptr__24);
#line 220
___nl__int_ptr__24 = NULL;
#line 220
___nl__int__21 = ___nl__int__22 + ___nl__int__23;
#line 220
//clear ___nl__int__22;
#line 220
//clear ___nl__int__23;
#line 220
___nl__int_ptr__26 = &((*___ref___rec__0).ln_pos0field);
#line 220
___nl__int__25 = (*___nl__int_ptr__26);
#line 220
___nl__int_ptr__26 = NULL;
#line 220
___nl__int__20 = ___nl__int__21 - ___nl__int__25;
#line 220
//clear ___nl__int__21;
#line 220
//clear ___nl__int__25;
#line 220
___nl__im_ptr__29 = &((*___ref___rec__0).next_token0field);
#line 220
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 220
___nl__im_ptr__29 = NULL;
#line 220
___nl__int__27 = string0length(___nl__im__28);
#line 220
c_rt_lib0clear(&___nl__im__28);
#line 220
___nl__int__19 = ___nl__int__20 - ___nl__int__27;
#line 220
//clear ___nl__int__20;
#line 220
//clear ___nl__int__27;
#line 220
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__19));
#line 220
c_rt_lib0move(&___nl__im__18, ptd0int_to_string(___nl__im__30));
#line 220
//clear ___nl__int__19;
#line 220
c_rt_lib0clear(&___nl__im__30);
#line 220
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__18));
#line 220
c_rt_lib0clear(&___nl__im__5);
#line 220
c_rt_lib0clear(&___nl__im__18);
#line 220
c_rt_lib0move(&___nl__im__31,___get_global_const(1108));
#line 220
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__31));
#line 220
c_rt_lib0clear(&___nl__im__4);
#line 220
c_rt_lib0clear(&___nl__im__31);
#line 221
___nl__im_ptr__34 = &((*___ref___rec__0).type0field);
#line 221
c_rt_lib0copy(&___nl__im__33, (*___nl__im_ptr__34));
#line 221
___nl__im_ptr__34 = NULL;
#line 221
c_rt_lib0move(&___nl__im__32, ov0get_element(___nl__im__33));
#line 221
c_rt_lib0clear(&___nl__im__33);
#line 221
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__32));
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__32);
#line 221
c_rt_lib0move(&___nl__im__35,___get_global_const(427));
#line 221
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__35));
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__35);
#line 221
return ___nl__im__1;
return NULL;
}

bool  ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
#line 226
___nl__bool__1 = string0is_digit(___nl__im__0);
#line 226
if(___nl__bool__1){ goto label_2;}
#line 226
___nl__int__3 = string0ord(___nl__im__0);
#line 226
___nl__int__4 = 65;
#line 226
___nl__int__5 = ___nl__int__3 >= ___nl__int__4;
#line 226
___nl__bool__1 = ___nl__int__5;
#line 226
//clear ___nl__int__3;
#line 226
//clear ___nl__int__4;
#line 226
//clear ___nl__int__5;
#line 226
___nl__bool__2 = !___nl__bool__1;
#line 226
if(___nl__bool__2){ goto label_3;}
#line 226
___nl__int__6 = string0ord(___nl__im__0);
#line 226
___nl__int__7 = 70;
#line 226
___nl__int__8 = ___nl__int__6 <= ___nl__int__7;
#line 226
___nl__bool__1 = ___nl__int__8;
#line 226
//clear ___nl__int__6;
#line 226
//clear ___nl__int__7;
#line 226
//clear ___nl__int__8;
#line 226
label_3:
;
#line 226
//clear ___nl__bool__2;
#line 226
label_2:
;
#line 226
if(___nl__bool__1){ goto label_1;}
#line 227
___nl__int__10 = string0ord(___nl__im__0);
#line 227
___nl__int__11 = 97;
#line 227
___nl__int__12 = ___nl__int__10 >= ___nl__int__11;
#line 227
___nl__bool__1 = ___nl__int__12;
#line 227
//clear ___nl__int__10;
#line 227
//clear ___nl__int__11;
#line 227
//clear ___nl__int__12;
#line 227
___nl__bool__9 = !___nl__bool__1;
#line 227
if(___nl__bool__9){ goto label_4;}
#line 227
___nl__int__13 = string0ord(___nl__im__0);
#line 227
___nl__int__14 = 102;
#line 227
___nl__int__15 = ___nl__int__13 <= ___nl__int__14;
#line 227
___nl__bool__1 = ___nl__int__15;
#line 227
//clear ___nl__int__13;
#line 227
//clear ___nl__int__14;
#line 227
//clear ___nl__int__15;
#line 227
label_4:
;
#line 227
//clear ___nl__bool__9;
#line 227
label_1:
;
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
return ___nl__bool__1;
return false;
}

ImmT  ntokenizer_priv0try_get_operator(ntokenizer0state_t0type* ___ref___rec__0,ImmT * ___ref___im__1) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
INT * ___nl__int_ptr__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT * ___nl__int_ptr__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT * ___nl__im_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
INT * ___nl__int_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT * ___nl__im_ptr__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT * ___nl__int_ptr__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
#line 231
c_rt_lib0move(&___nl__im__2, ntokenizer_priv0get_char_oper());
#line 231
___nl__int__4 = 0;
#line 231
___nl__int__5 = 1;
#line 231
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 231
label_3:
;
#line 231
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 231
___nl__bool__7 = ___nl__int__8;
#line 231
if(___nl__bool__7){ goto label_1;}
#line 231
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 231
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 232
___nl__int_ptr__12 = &((*___ref___rec__0).len0field);
#line 232
___nl__int__11 = (*___nl__int_ptr__12);
#line 232
___nl__int_ptr__12 = NULL;
#line 232
___nl__int__15 = 1;
#line 232
___nl__int_ptr__17 = &((*___ref___rec__0).pos0field);
#line 232
___nl__int__16 = (*___nl__int_ptr__17);
#line 232
___nl__int_ptr__17 = NULL;
#line 232
___nl__int__14 = ___nl__int__15 + ___nl__int__16;
#line 232
//clear ___nl__int__15;
#line 232
//clear ___nl__int__16;
#line 232
___nl__int__18 = string0length(___nl__im__3);
#line 232
___nl__int__13 = ___nl__int__14 + ___nl__int__18;
#line 232
//clear ___nl__int__14;
#line 232
//clear ___nl__int__18;
#line 232
___nl__int__19 = ___nl__int__11 < ___nl__int__13;
#line 232
___nl__bool__10 = ___nl__int__19;
#line 232
//clear ___nl__int__11;
#line 232
//clear ___nl__int__13;
#line 232
//clear ___nl__int__19;
#line 232
___nl__bool__10 = !___nl__bool__10;
#line 232
if(___nl__bool__10){ goto label_5;}
#line 232
goto label_2;
#line 232
goto label_4;
#line 232
label_5:
;
#line 232
label_4:
;
#line 232
//clear ___nl__bool__10;
#line 233
___nl__im_ptr__23 = &((*___ref___rec__0).text0field);
#line 233
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__23));
#line 233
___nl__im_ptr__23 = NULL;
#line 233
___nl__int_ptr__25 = &((*___ref___rec__0).pos0field);
#line 233
___nl__int__24 = (*___nl__int_ptr__25);
#line 233
___nl__int_ptr__25 = NULL;
#line 233
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__24));
#line 233
___nl__int__27 = string0length(___nl__im__3);
#line 233
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__27));
#line 233
c_rt_lib0move(&___nl__im__21, c_std_lib0fast_substr(___nl__im__22, ___nl__im__26, ___nl__im__28));
#line 233
c_rt_lib0clear(&___nl__im__22);
#line 233
//clear ___nl__int__24;
#line 233
c_rt_lib0clear(&___nl__im__26);
#line 233
//clear ___nl__int__27;
#line 233
c_rt_lib0clear(&___nl__im__28);
#line 233
___nl__bool__20 = c_rt_lib0eq(___nl__im__21, ___nl__im__3);
#line 233
c_rt_lib0clear(&___nl__im__21);
#line 233
___nl__bool__20 = !___nl__bool__20;
#line 233
if(___nl__bool__20){ goto label_7;}
#line 236
c_rt_lib0move(&___nl__im__31, ntokenizer_priv0get_char(___ref___rec__0));
#line 236
___nl__bool__29 = string0is_letter(___nl__im__31);
#line 236
c_rt_lib0clear(&___nl__im__31);
#line 236
___nl__bool__30 = !___nl__bool__29;
#line 236
if(___nl__bool__30){ goto label_10;}
#line 237
___nl__im_ptr__34 = &((*___ref___rec__0).text0field);
#line 237
c_rt_lib0copy(&___nl__im__33, (*___nl__im_ptr__34));
#line 237
___nl__im_ptr__34 = NULL;
#line 237
___nl__int_ptr__37 = &((*___ref___rec__0).pos0field);
#line 237
___nl__int__36 = (*___nl__int_ptr__37);
#line 237
___nl__int_ptr__37 = NULL;
#line 237
___nl__int__38 = string0length(___nl__im__3);
#line 237
___nl__int__35 = ___nl__int__36 + ___nl__int__38;
#line 237
//clear ___nl__int__36;
#line 237
//clear ___nl__int__38;
#line 237
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__35));
#line 237
___nl__int__40 = 1;
#line 237
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__40));
#line 237
c_rt_lib0move(&___nl__im__32, c_std_lib0fast_substr(___nl__im__33, ___nl__im__39, ___nl__im__41));
#line 237
c_rt_lib0clear(&___nl__im__33);
#line 237
//clear ___nl__int__35;
#line 237
c_rt_lib0clear(&___nl__im__39);
#line 237
//clear ___nl__int__40;
#line 237
c_rt_lib0clear(&___nl__im__41);
#line 237
___nl__bool__29 = string0is_letter(___nl__im__32);
#line 237
c_rt_lib0clear(&___nl__im__32);
#line 237
label_10:
;
#line 237
//clear ___nl__bool__30;
#line 237
___nl__bool__29 = !___nl__bool__29;
#line 237
if(___nl__bool__29){ goto label_9;}
#line 234
goto label_2;
#line 234
goto label_8;
#line 234
label_9:
;
#line 234
label_8:
;
#line 234
//clear ___nl__bool__29;
#line 238
c_rt_lib0copy(___ref___im__1, ___nl__im__3);
#line 239
___nl__bool__42 = true;
#line 239
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__42));
#line 239
c_rt_lib0clear(&___nl__im__2);
#line 239
c_rt_lib0clear(&___nl__im__3);
#line 239
//clear ___nl__int__4;
#line 239
//clear ___nl__int__5;
#line 239
//clear ___nl__int__6;
#line 239
//clear ___nl__bool__7;
#line 239
//clear ___nl__int__8;
#line 239
c_rt_lib0clear(&___nl__im__9);
#line 239
//clear ___nl__bool__20;
#line 239
//clear ___nl__bool__42;
#line 239
return ___nl__im__43;
#line 240
goto label_6;
#line 240
label_7:
;
#line 240
label_6:
;
#line 240
//clear ___nl__bool__20;
#line 240
//clear ___nl__bool__42;
#line 240
c_rt_lib0clear(&___nl__im__43);
#line 240
c_rt_lib0clear(&___nl__im__3);
#line 240
label_2:
;
#line 241
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 241
goto label_3;
#line 241
label_1:
;
#line 242
___nl__bool__44 = false;
#line 242
c_rt_lib0move(&___nl__im__45, c_rt_lib0bool_to_nl_native(___nl__bool__44));
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
//clear ___nl__int__4;
#line 242
//clear ___nl__int__5;
#line 242
//clear ___nl__int__6;
#line 242
//clear ___nl__bool__7;
#line 242
//clear ___nl__int__8;
#line 242
c_rt_lib0clear(&___nl__im__9);
#line 242
//clear ___nl__bool__44;
#line 242
return ___nl__im__45;
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
//clear ___nl__int__4;
#line 242
//clear ___nl__int__5;
#line 242
//clear ___nl__int__6;
#line 242
//clear ___nl__bool__7;
#line 242
//clear ___nl__int__8;
#line 242
c_rt_lib0clear(&___nl__im__9);
#line 242
//clear ___nl__bool__44;
#line 242
c_rt_lib0clear(&___nl__im__45);
#line 242
return NULL;
return NULL;
}

ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT * ___nl__int_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT * ___nl__int_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
INT * ___nl__int_ptr__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT * ___nl__int_ptr__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT * ___nl__int_ptr__21 = NULL;
INT  ___nl__int__22 = 0;
INT * ___nl__int_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT * ___nl__im_ptr__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
INT * ___nl__int_ptr__32 = NULL;
INT  ___nl__int__33 = 0;
INT * ___nl__int_ptr__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT * ___nl__im_ptr__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT * ___nl__im_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT * ___nl__im_ptr__46 = NULL;
INT  ___nl__int__47 = 0;
INT * ___nl__int_ptr__48 = NULL;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT * ___nl__int_ptr__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
ImmT * ___nl__im_ptr__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT * ___nl__im_ptr__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT * ___nl__im_ptr__72 = NULL;
INT  ___nl__int__73 = 0;
INT * ___nl__int_ptr__74 = NULL;
ImmT * ___nl__im_ptr__75 = NULL;
INT * ___nl__int_ptr__76 = NULL;
INT  ___nl__int__77 = 0;
bool  ___nl__bool__78 = false;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT * ___nl__im_ptr__82 = NULL;
INT * ___nl__int_ptr__83 = NULL;
INT  ___nl__int__84 = 0;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT * ___nl__im_ptr__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT * ___nl__im_ptr__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT * ___nl__im_ptr__95 = NULL;
ImmT * ___nl__im_ptr__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT * ___nl__im_ptr__99 = NULL;
ImmT * ___nl__im_ptr__100 = NULL;
INT  ___nl__int__101 = 0;
INT * ___nl__int_ptr__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
INT  ___nl__int__105 = 0;
INT  ___nl__int__106 = 0;
INT  ___nl__int__107 = 0;
ImmT  ___nl__im__108 = NULL;
ImmT * ___nl__im_ptr__109 = NULL;
ImmT * ___nl__im_ptr__110 = NULL;
INT * ___nl__int_ptr__111 = NULL;
INT  ___nl__int__112 = 0;
bool  ___nl__bool__113 = false;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT * ___nl__im_ptr__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT * ___nl__im_ptr__119 = NULL;
INT * ___nl__int_ptr__120 = NULL;
INT  ___nl__int__121 = 0;
bool  ___nl__bool__122 = false;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT * ___nl__im_ptr__125 = NULL;
INT * ___nl__int_ptr__126 = NULL;
INT  ___nl__int__127 = 0;
bool  ___nl__bool__128 = false;
bool  ___nl__bool__129 = false;
bool  ___nl__bool__130 = false;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT * ___nl__im_ptr__136 = NULL;
INT * ___nl__int_ptr__137 = NULL;
INT  ___nl__int__138 = 0;
bool  ___nl__bool__139 = false;
ImmT * ___nl__im_ptr__140 = NULL;
INT * ___nl__int_ptr__141 = NULL;
INT  ___nl__int__142 = 0;
INT  ___nl__int__143 = 0;
bool  ___nl__bool__144 = false;
INT  ___nl__int__145 = 0;
INT  ___nl__int__146 = 0;
INT  ___nl__int__147 = 0;
bool  ___nl__bool__148 = false;
bool  ___nl__bool__149 = false;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
INT  ___nl__int__153 = 0;
INT  ___nl__int__154 = 0;
bool  ___nl__bool__155 = false;
ImmT  ___nl__im__156 = NULL;
INT  ___nl__int__157 = 0;
INT  ___nl__int__158 = 0;
ImmT * ___nl__im_ptr__159 = NULL;
INT * ___nl__int_ptr__160 = NULL;
INT  ___nl__int__161 = 0;
ImmT  ___nl__im__162 = NULL;
ImmT * ___nl__im_ptr__163 = NULL;
ImmT * ___nl__im_ptr__164 = NULL;
#line 246
___nl__int_ptr__3 = &((*___ref___rec__0).ln_nr0field);
#line 246
___nl__int__2 = (*___nl__int_ptr__3);
#line 246
___nl__int_ptr__3 = NULL;
#line 246
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__2));
#line 246
___nl__int_ptr__8 = &((*___ref___rec__0).pos0field);
#line 246
___nl__int__7 = (*___nl__int_ptr__8);
#line 246
___nl__int_ptr__8 = NULL;
#line 246
___nl__int_ptr__10 = &((*___ref___rec__0).ln_pos0field);
#line 246
___nl__int__9 = (*___nl__int_ptr__10);
#line 246
___nl__int_ptr__10 = NULL;
#line 246
___nl__int__6 = ___nl__int__7 - ___nl__int__9;
#line 246
//clear ___nl__int__7;
#line 246
//clear ___nl__int__9;
#line 246
___nl__int__11 = 1;
#line 246
___nl__int__5 = ___nl__int__6 + ___nl__int__11;
#line 246
//clear ___nl__int__6;
#line 246
//clear ___nl__int__11;
#line 246
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__5));
#line 246
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__4, ___get_global_const(1034), ___nl__im__12));
#line 246
//clear ___nl__int__2;
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
//clear ___nl__int__5;
#line 246
c_rt_lib0clear(&___nl__im__12);
#line 246
___nl__im_ptr__13 = &((*___ref___rec__0).place_ws0field);
#line 246
c_rt_lib0copy(___nl__im_ptr__13, ___nl__im__1);
#line 246
___nl__im_ptr__13 = NULL;
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 247
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___rec__0));
#line 248
___nl__int_ptr__16 = &((*___ref___rec__0).ln_nr0field);
#line 248
___nl__int__15 = (*___nl__int_ptr__16);
#line 248
___nl__int_ptr__16 = NULL;
#line 248
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__15));
#line 248
___nl__int_ptr__21 = &((*___ref___rec__0).pos0field);
#line 248
___nl__int__20 = (*___nl__int_ptr__21);
#line 248
___nl__int_ptr__21 = NULL;
#line 248
___nl__int_ptr__23 = &((*___ref___rec__0).ln_pos0field);
#line 248
___nl__int__22 = (*___nl__int_ptr__23);
#line 248
___nl__int_ptr__23 = NULL;
#line 248
___nl__int__19 = ___nl__int__20 - ___nl__int__22;
#line 248
//clear ___nl__int__20;
#line 248
//clear ___nl__int__22;
#line 248
___nl__int__24 = 1;
#line 248
___nl__int__18 = ___nl__int__19 + ___nl__int__24;
#line 248
//clear ___nl__int__19;
#line 248
//clear ___nl__int__24;
#line 248
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__18));
#line 248
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__17, ___get_global_const(1034), ___nl__im__25));
#line 248
//clear ___nl__int__15;
#line 248
c_rt_lib0clear(&___nl__im__17);
#line 248
//clear ___nl__int__18;
#line 248
c_rt_lib0clear(&___nl__im__25);
#line 248
___nl__im_ptr__26 = &((*___ref___rec__0).place0field);
#line 248
c_rt_lib0copy(___nl__im_ptr__26, ___nl__im__14);
#line 248
___nl__im_ptr__26 = NULL;
#line 248
c_rt_lib0clear(&___nl__im__14);
#line 249
___nl__im_ptr__29 = &((*___ref___rec__0).type0field);
#line 249
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 249
___nl__im_ptr__29 = NULL;
#line 249
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(123));
#line 249
c_rt_lib0clear(&___nl__im__28);
#line 249
___nl__bool__27 = !___nl__bool__27;
#line 249
if(___nl__bool__27){ goto label_2;}
#line 249
//clear ___nl__bool__27;
#line 249
return NULL;
#line 249
goto label_1;
#line 249
label_2:
;
#line 249
label_1:
;
#line 249
//clear ___nl__bool__27;
#line 250
___nl__int_ptr__32 = &((*___ref___rec__0).pos0field);
#line 250
___nl__int__31 = (*___nl__int_ptr__32);
#line 250
___nl__int_ptr__32 = NULL;
#line 250
___nl__int_ptr__34 = &((*___ref___rec__0).len0field);
#line 250
___nl__int__33 = (*___nl__int_ptr__34);
#line 250
___nl__int_ptr__34 = NULL;
#line 250
___nl__int__35 = ___nl__int__31 == ___nl__int__33;
#line 250
___nl__bool__30 = ___nl__int__35;
#line 250
//clear ___nl__int__31;
#line 250
//clear ___nl__int__33;
#line 250
//clear ___nl__int__35;
#line 250
___nl__bool__30 = !___nl__bool__30;
#line 250
if(___nl__bool__30){ goto label_4;}
#line 251
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(1021)));
#line 251
___nl__im_ptr__37 = &((*___ref___rec__0).type0field);
#line 251
c_rt_lib0copy(___nl__im_ptr__37, ___nl__im__36);
#line 251
___nl__im_ptr__37 = NULL;
#line 251
c_rt_lib0clear(&___nl__im__36);
#line 252
c_rt_lib0move(&___nl__im__38,___get_global_const(37));
#line 252
___nl__im_ptr__39 = &((*___ref___rec__0).next_token0field);
#line 252
c_rt_lib0copy(___nl__im_ptr__39, ___nl__im__38);
#line 252
___nl__im_ptr__39 = NULL;
#line 252
c_rt_lib0clear(&___nl__im__38);
#line 253
//clear ___nl__bool__30;
#line 253
return NULL;
#line 254
goto label_3;
#line 254
label_4:
;
#line 254
label_3:
;
#line 254
//clear ___nl__bool__30;
#line 255
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 256
c_rt_lib0move(&___nl__im__42,___get_global_const(593));
#line 256
___nl__bool__41 = c_rt_lib0eq(___nl__im__40, ___nl__im__42);
#line 256
c_rt_lib0clear(&___nl__im__42);
#line 256
___nl__bool__41 = !___nl__bool__41;
#line 256
if(___nl__bool__41){ goto label_6;}
#line 257
c_rt_lib0move(&___nl__im__43,___get_global_const(37));
#line 257
___nl__im_ptr__44 = &((*___ref___rec__0).next_token0field);
#line 257
c_rt_lib0copy(___nl__im_ptr__44, ___nl__im__43);
#line 257
___nl__im_ptr__44 = NULL;
#line 257
c_rt_lib0clear(&___nl__im__43);
#line 258
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_const(545)));
#line 258
___nl__im_ptr__46 = &((*___ref___rec__0).type0field);
#line 258
c_rt_lib0copy(___nl__im_ptr__46, ___nl__im__45);
#line 258
___nl__im_ptr__46 = NULL;
#line 258
c_rt_lib0clear(&___nl__im__45);
#line 259
label_8:
;
#line 260
___nl__int__47 = 1;
#line 260
___nl__int_ptr__48 = &((*___ref___rec__0).pos0field);
#line 260
(*___nl__int_ptr__48) = (*___nl__int_ptr__48) + ___nl__int__47;
#line 260
___nl__int_ptr__48 = NULL;
#line 260
//clear ___nl__int__47;
#line 261
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 262
c_rt_lib0move(&___nl__im__50,___get_global_const(593));
#line 262
___nl__bool__49 = c_rt_lib0eq(___nl__im__40, ___nl__im__50);
#line 262
c_rt_lib0clear(&___nl__im__50);
#line 262
___nl__bool__49 = !___nl__bool__49;
#line 262
if(___nl__bool__49){ goto label_10;}
#line 263
___nl__int__51 = 1;
#line 263
___nl__int_ptr__52 = &((*___ref___rec__0).pos0field);
#line 263
(*___nl__int_ptr__52) = (*___nl__int_ptr__52) + ___nl__int__51;
#line 263
___nl__int_ptr__52 = NULL;
#line 263
//clear ___nl__int__51;
#line 264
c_rt_lib0move(&___nl__im__54, ntokenizer_priv0get_char(___ref___rec__0));
#line 264
c_rt_lib0move(&___nl__im__55,___get_global_const(593));
#line 264
___nl__bool__53 = c_rt_lib0eq(___nl__im__54, ___nl__im__55);
#line 264
c_rt_lib0clear(&___nl__im__54);
#line 264
c_rt_lib0clear(&___nl__im__55);
#line 264
___nl__bool__53 = !___nl__bool__53;
#line 264
___nl__bool__53 = !___nl__bool__53;
#line 264
if(___nl__bool__53){ goto label_12;}
#line 264
c_rt_lib0clear(&___nl__im__40);
#line 264
//clear ___nl__bool__41;
#line 264
//clear ___nl__bool__49;
#line 264
//clear ___nl__bool__53;
#line 264
return NULL;
#line 264
goto label_11;
#line 264
label_12:
;
#line 264
label_11:
;
#line 264
//clear ___nl__bool__53;
#line 265
goto label_9;
#line 265
label_10:
;
#line 265
___nl__int__56 = string0ord(___nl__im__40);
#line 265
___nl__int__57 = 10;
#line 265
___nl__int__58 = ___nl__int__56 == ___nl__int__57;
#line 265
___nl__bool__49 = ___nl__int__58;
#line 265
//clear ___nl__int__56;
#line 265
//clear ___nl__int__57;
#line 265
//clear ___nl__int__58;
#line 265
___nl__bool__49 = !___nl__bool__49;
#line 265
if(___nl__bool__49){ goto label_13;}
#line 266
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_const(1086)));
#line 266
___nl__im_ptr__60 = &((*___ref___rec__0).type0field);
#line 266
c_rt_lib0copy(___nl__im_ptr__60, ___nl__im__59);
#line 266
___nl__im_ptr__60 = NULL;
#line 266
c_rt_lib0clear(&___nl__im__59);
#line 267
c_rt_lib0clear(&___nl__im__40);
#line 267
//clear ___nl__bool__41;
#line 267
//clear ___nl__bool__49;
#line 267
return NULL;
#line 268
goto label_9;
#line 268
label_13:
;
#line 268
label_9:
;
#line 268
//clear ___nl__bool__49;
#line 269
___nl__im_ptr__61 = &((*___ref___rec__0).next_token0field);
#line 269
c_rt_lib0move(___nl__im_ptr__61, c_rt_lib0concat_add((*___nl__im_ptr__61), ___nl__im__40));
#line 269
___nl__im_ptr__61 = NULL;
#line 259
goto label_8;
#line 271
goto label_5;
#line 271
label_6:
;
#line 271
c_rt_lib0move(&___nl__im__63, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 271
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__40, ___nl__im__63));
#line 271
c_rt_lib0clear(&___nl__im__63);
#line 271
c_rt_lib0move(&___nl__im__64,___get_global_const(301));
#line 271
___nl__bool__41 = c_rt_lib0eq(___nl__im__62, ___nl__im__64);
#line 271
c_rt_lib0clear(&___nl__im__62);
#line 271
c_rt_lib0clear(&___nl__im__64);
#line 271
if(___nl__bool__41){ goto label_15;}
#line 271
c_rt_lib0move(&___nl__im__66, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 271
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__40, ___nl__im__66));
#line 271
c_rt_lib0clear(&___nl__im__66);
#line 271
c_rt_lib0move(&___nl__im__67,___get_global_const(35));
#line 271
___nl__bool__41 = c_rt_lib0eq(___nl__im__65, ___nl__im__67);
#line 271
c_rt_lib0clear(&___nl__im__65);
#line 271
c_rt_lib0clear(&___nl__im__67);
#line 271
label_15:
;
#line 271
___nl__bool__41 = !___nl__bool__41;
#line 271
if(___nl__bool__41){ goto label_14;}
#line 272
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_none(___get_global_const(1104)));
#line 272
___nl__im_ptr__69 = &((*___ref___rec__0).type0field);
#line 272
c_rt_lib0copy(___nl__im_ptr__69, ___nl__im__68);
#line 272
___nl__im_ptr__69 = NULL;
#line 272
c_rt_lib0clear(&___nl__im__68);
#line 273
c_rt_lib0move(&___nl__im__71, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 273
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__40, ___nl__im__71));
#line 273
c_rt_lib0clear(&___nl__im__71);
#line 273
___nl__im_ptr__72 = &((*___ref___rec__0).next_token0field);
#line 273
c_rt_lib0copy(___nl__im_ptr__72, ___nl__im__70);
#line 273
___nl__im_ptr__72 = NULL;
#line 273
c_rt_lib0clear(&___nl__im__70);
#line 274
___nl__int__73 = 2;
#line 274
___nl__int_ptr__74 = &((*___ref___rec__0).pos0field);
#line 274
(*___nl__int_ptr__74) = (*___nl__int_ptr__74) + ___nl__int__73;
#line 274
___nl__int_ptr__74 = NULL;
#line 274
//clear ___nl__int__73;
#line 275
goto label_5;
#line 275
label_14:
;
#line 275
___nl__bool__41 = string0is_letter(___nl__im__40);
#line 275
___nl__bool__41 = !___nl__bool__41;
#line 275
if(___nl__bool__41){ goto label_16;}
#line 276
___nl__im_ptr__75 = &((*___ref___rec__0).next_token0field);
#line 276
c_rt_lib0copy(___nl__im_ptr__75, ___nl__im__40);
#line 276
___nl__im_ptr__75 = NULL;
#line 277
___nl__int_ptr__76 = &((*___ref___rec__0).pos0field);
#line 277
___nl__int__77 = 1;
#line 277
(*___nl__int_ptr__76) = (*___nl__int_ptr__76) + ___nl__int__77;
#line 277
___nl__int_ptr__76 = NULL;
#line 277
//clear ___nl__int__77;
#line 278
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 279
label_18:
;
#line 279
c_rt_lib0move(&___nl__im__80,___get_global_const(37));
#line 279
___nl__bool__78 = c_rt_lib0ne(___nl__im__40, ___nl__im__80);
#line 279
c_rt_lib0clear(&___nl__im__80);
#line 279
___nl__bool__79 = !___nl__bool__78;
#line 279
if(___nl__bool__79){ goto label_19;}
#line 279
___nl__bool__78 = string0is_letter(___nl__im__40);
#line 279
if(___nl__bool__78){ goto label_21;}
#line 279
___nl__bool__78 = string0is_digit(___nl__im__40);
#line 279
label_21:
;
#line 279
if(___nl__bool__78){ goto label_20;}
#line 279
c_rt_lib0move(&___nl__im__81,___get_global_const(108));
#line 279
___nl__bool__78 = c_rt_lib0eq(___nl__im__40, ___nl__im__81);
#line 279
c_rt_lib0clear(&___nl__im__81);
#line 279
label_20:
;
#line 279
label_19:
;
#line 279
//clear ___nl__bool__79;
#line 279
___nl__bool__78 = !___nl__bool__78;
#line 279
if(___nl__bool__78){ goto label_17;}
#line 280
___nl__im_ptr__82 = &((*___ref___rec__0).next_token0field);
#line 280
c_rt_lib0move(___nl__im_ptr__82, c_rt_lib0concat_add((*___nl__im_ptr__82), ___nl__im__40));
#line 280
___nl__im_ptr__82 = NULL;
#line 281
___nl__int_ptr__83 = &((*___ref___rec__0).pos0field);
#line 281
___nl__int__84 = 1;
#line 281
(*___nl__int_ptr__83) = (*___nl__int_ptr__83) + ___nl__int__84;
#line 281
___nl__int_ptr__83 = NULL;
#line 281
//clear ___nl__int__84;
#line 282
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 283
goto label_18;
#line 283
label_17:
;
#line 284
c_rt_lib0move(&___nl__im__86, ntokenizer_priv0get_lett_oper());
#line 284
___nl__im_ptr__88 = &((*___ref___rec__0).next_token0field);
#line 284
c_rt_lib0copy(&___nl__im__87, (*___nl__im_ptr__88));
#line 284
___nl__im_ptr__88 = NULL;
#line 284
___nl__bool__85 = hash0has_key(___nl__im__86, ___nl__im__87);
#line 284
c_rt_lib0clear(&___nl__im__86);
#line 284
c_rt_lib0clear(&___nl__im__87);
#line 284
___nl__bool__85 = !___nl__bool__85;
#line 284
if(___nl__bool__85){ goto label_23;}
#line 285
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 285
___nl__im_ptr__90 = &((*___ref___rec__0).type0field);
#line 285
c_rt_lib0copy(___nl__im_ptr__90, ___nl__im__89);
#line 285
___nl__im_ptr__90 = NULL;
#line 285
c_rt_lib0clear(&___nl__im__89);
#line 286
goto label_22;
#line 286
label_23:
;
#line 287
c_rt_lib0move(&___nl__im__93, ntokenizer_priv0get_keywords());
#line 287
___nl__im_ptr__95 = &((*___ref___rec__0).next_token0field);
#line 287
c_rt_lib0copy(&___nl__im__94, (*___nl__im_ptr__95));
#line 287
___nl__im_ptr__95 = NULL;
#line 287
___nl__bool__92 = hash0has_key(___nl__im__93, ___nl__im__94);
#line 287
c_rt_lib0clear(&___nl__im__93);
#line 287
c_rt_lib0clear(&___nl__im__94);
#line 287
if(___nl__bool__92){ goto label_25;}
#line 287
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_const(1073)));
#line 287
goto label_24;
#line 287
label_25:
;
#line 287
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 287
label_24:
;
#line 287
//clear ___nl__bool__92;
#line 287
___nl__im_ptr__96 = &((*___ref___rec__0).type0field);
#line 287
c_rt_lib0copy(___nl__im_ptr__96, ___nl__im__91);
#line 287
___nl__im_ptr__96 = NULL;
#line 287
c_rt_lib0clear(&___nl__im__91);
#line 288
goto label_22;
#line 288
label_22:
;
#line 288
//clear ___nl__bool__85;
#line 289
goto label_5;
#line 289
label_16:
;
#line 289
c_rt_lib0move(&___nl__im__97, ntokenizer_priv0try_get_operator(___ref___rec__0, &___nl__im__40));
#line 289
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__97);
#line 289
c_rt_lib0clear(&___nl__im__97);
#line 289
___nl__bool__41 = !___nl__bool__41;
#line 289
if(___nl__bool__41){ goto label_26;}
#line 290
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 290
___nl__im_ptr__99 = &((*___ref___rec__0).type0field);
#line 290
c_rt_lib0copy(___nl__im_ptr__99, ___nl__im__98);
#line 290
___nl__im_ptr__99 = NULL;
#line 290
c_rt_lib0clear(&___nl__im__98);
#line 291
___nl__im_ptr__100 = &((*___ref___rec__0).next_token0field);
#line 291
c_rt_lib0copy(___nl__im_ptr__100, ___nl__im__40);
#line 291
___nl__im_ptr__100 = NULL;
#line 292
___nl__int__101 = string0length(___nl__im__40);
#line 292
___nl__int_ptr__102 = &((*___ref___rec__0).pos0field);
#line 292
(*___nl__int_ptr__102) = (*___nl__int_ptr__102) + ___nl__int__101;
#line 292
___nl__int_ptr__102 = NULL;
#line 292
//clear ___nl__int__101;
#line 293
goto label_5;
#line 293
label_26:
;
#line 293
c_rt_lib0move(&___nl__im__104,___get_global_const(1109));
#line 293
c_rt_lib0move(&___nl__im__103, string0index2(___nl__im__104, ___nl__im__40));
#line 293
c_rt_lib0clear(&___nl__im__104);
#line 293
___nl__int__105 = 0;
#line 293
___nl__int__106 = getIntFromImm(___nl__im__103);
#line 293
___nl__int__107 = ___nl__int__106 >= ___nl__int__105;
#line 293
___nl__bool__41 = ___nl__int__107;
#line 293
c_rt_lib0clear(&___nl__im__103);
#line 293
//clear ___nl__int__105;
#line 293
//clear ___nl__int__106;
#line 293
//clear ___nl__int__107;
#line 293
___nl__bool__41 = !___nl__bool__41;
#line 293
if(___nl__bool__41){ goto label_27;}
#line 294
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_none(___get_global_const(1104)));
#line 294
___nl__im_ptr__109 = &((*___ref___rec__0).type0field);
#line 294
c_rt_lib0copy(___nl__im_ptr__109, ___nl__im__108);
#line 294
___nl__im_ptr__109 = NULL;
#line 294
c_rt_lib0clear(&___nl__im__108);
#line 295
___nl__im_ptr__110 = &((*___ref___rec__0).next_token0field);
#line 295
c_rt_lib0copy(___nl__im_ptr__110, ___nl__im__40);
#line 295
___nl__im_ptr__110 = NULL;
#line 296
___nl__int_ptr__111 = &((*___ref___rec__0).pos0field);
#line 296
___nl__int__112 = 1;
#line 296
(*___nl__int_ptr__111) = (*___nl__int_ptr__111) + ___nl__int__112;
#line 296
___nl__int_ptr__111 = NULL;
#line 296
//clear ___nl__int__112;
#line 297
goto label_5;
#line 297
label_27:
;
#line 297
___nl__bool__41 = string0is_digit(___nl__im__40);
#line 297
if(___nl__bool__41){ goto label_29;}
#line 297
c_rt_lib0move(&___nl__im__114,___get_global_const(356));
#line 297
___nl__bool__41 = c_rt_lib0eq(___nl__im__40, ___nl__im__114);
#line 297
c_rt_lib0clear(&___nl__im__114);
#line 297
if(___nl__bool__41){ goto label_31;}
#line 297
c_rt_lib0move(&___nl__im__115,___get_global_const(358));
#line 297
___nl__bool__41 = c_rt_lib0eq(___nl__im__40, ___nl__im__115);
#line 297
c_rt_lib0clear(&___nl__im__115);
#line 297
label_31:
;
#line 297
___nl__bool__113 = !___nl__bool__41;
#line 297
if(___nl__bool__113){ goto label_30;}
#line 297
c_rt_lib0move(&___nl__im__116, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 297
___nl__bool__41 = string0is_digit(___nl__im__116);
#line 297
c_rt_lib0clear(&___nl__im__116);
#line 297
label_30:
;
#line 297
//clear ___nl__bool__113;
#line 297
label_29:
;
#line 297
___nl__bool__41 = !___nl__bool__41;
#line 297
if(___nl__bool__41){ goto label_28;}
#line 298
___nl__im_ptr__117 = &((*___ref___rec__0).next_token0field);
#line 298
c_rt_lib0copy(___nl__im_ptr__117, ___nl__im__40);
#line 298
___nl__im_ptr__117 = NULL;
#line 299
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_none(___get_global_const(1084)));
#line 299
___nl__im_ptr__119 = &((*___ref___rec__0).type0field);
#line 299
c_rt_lib0copy(___nl__im_ptr__119, ___nl__im__118);
#line 299
___nl__im_ptr__119 = NULL;
#line 299
c_rt_lib0clear(&___nl__im__118);
#line 300
___nl__int_ptr__120 = &((*___ref___rec__0).pos0field);
#line 300
___nl__int__121 = 1;
#line 300
(*___nl__int_ptr__120) = (*___nl__int_ptr__120) + ___nl__int__121;
#line 300
___nl__int_ptr__120 = NULL;
#line 300
//clear ___nl__int__121;
#line 301
c_rt_lib0move(&___nl__im__123,___get_global_const(356));
#line 301
___nl__bool__122 = c_rt_lib0eq(___nl__im__40, ___nl__im__123);
#line 301
c_rt_lib0clear(&___nl__im__123);
#line 301
if(___nl__bool__122){ goto label_34;}
#line 301
c_rt_lib0move(&___nl__im__124,___get_global_const(358));
#line 301
___nl__bool__122 = c_rt_lib0eq(___nl__im__40, ___nl__im__124);
#line 301
c_rt_lib0clear(&___nl__im__124);
#line 301
label_34:
;
#line 301
___nl__bool__122 = !___nl__bool__122;
#line 301
if(___nl__bool__122){ goto label_33;}
#line 302
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 303
___nl__im_ptr__125 = &((*___ref___rec__0).next_token0field);
#line 303
c_rt_lib0move(___nl__im_ptr__125, c_rt_lib0concat_add((*___nl__im_ptr__125), ___nl__im__40));
#line 303
___nl__im_ptr__125 = NULL;
#line 304
___nl__int_ptr__126 = &((*___ref___rec__0).pos0field);
#line 304
___nl__int__127 = 1;
#line 304
(*___nl__int_ptr__126) = (*___nl__int_ptr__126) + ___nl__int__127;
#line 304
___nl__int_ptr__126 = NULL;
#line 304
//clear ___nl__int__127;
#line 305
goto label_32;
#line 305
label_33:
;
#line 305
label_32:
;
#line 305
//clear ___nl__bool__122;
#line 306
c_rt_lib0move(&___nl__im__131,___get_global_const(21));
#line 306
___nl__bool__128 = c_rt_lib0eq(___nl__im__40, ___nl__im__131);
#line 306
c_rt_lib0clear(&___nl__im__131);
#line 306
___nl__bool__130 = !___nl__bool__128;
#line 306
if(___nl__bool__130){ goto label_38;}
#line 306
c_rt_lib0move(&___nl__im__132, ntokenizer_priv0get_char(___ref___rec__0));
#line 306
c_rt_lib0move(&___nl__im__133,___get_global_const(1110));
#line 306
___nl__bool__128 = c_rt_lib0eq(___nl__im__132, ___nl__im__133);
#line 306
c_rt_lib0clear(&___nl__im__132);
#line 306
c_rt_lib0clear(&___nl__im__133);
#line 306
label_38:
;
#line 306
//clear ___nl__bool__130;
#line 306
___nl__bool__129 = !___nl__bool__128;
#line 306
if(___nl__bool__129){ goto label_37;}
#line 306
c_rt_lib0move(&___nl__im__134, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 306
___nl__bool__128 = ntokenizer_priv0is_hex_number(___nl__im__134);
#line 306
c_rt_lib0clear(&___nl__im__134);
#line 306
label_37:
;
#line 306
//clear ___nl__bool__129;
#line 306
___nl__bool__128 = !___nl__bool__128;
#line 306
if(___nl__bool__128){ goto label_36;}
#line 307
c_rt_lib0move(&___nl__im__135, ntokenizer_priv0get_char(___ref___rec__0));
#line 307
___nl__im_ptr__136 = &((*___ref___rec__0).next_token0field);
#line 307
c_rt_lib0move(___nl__im_ptr__136, c_rt_lib0concat_add((*___nl__im_ptr__136), ___nl__im__135));
#line 307
___nl__im_ptr__136 = NULL;
#line 307
c_rt_lib0clear(&___nl__im__135);
#line 308
___nl__int_ptr__137 = &((*___ref___rec__0).pos0field);
#line 308
___nl__int__138 = 1;
#line 308
(*___nl__int_ptr__137) = (*___nl__int_ptr__137) + ___nl__int__138;
#line 308
___nl__int_ptr__137 = NULL;
#line 308
//clear ___nl__int__138;
#line 309
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 310
label_40:
;
#line 310
___nl__bool__139 = ntokenizer_priv0is_hex_number(___nl__im__40);
#line 310
___nl__bool__139 = !___nl__bool__139;
#line 310
if(___nl__bool__139){ goto label_39;}
#line 311
___nl__im_ptr__140 = &((*___ref___rec__0).next_token0field);
#line 311
c_rt_lib0move(___nl__im_ptr__140, c_rt_lib0concat_add((*___nl__im_ptr__140), ___nl__im__40));
#line 311
___nl__im_ptr__140 = NULL;
#line 312
___nl__int_ptr__141 = &((*___ref___rec__0).pos0field);
#line 312
___nl__int__142 = 1;
#line 312
(*___nl__int_ptr__141) = (*___nl__int_ptr__141) + ___nl__int__142;
#line 312
___nl__int_ptr__141 = NULL;
#line 312
//clear ___nl__int__142;
#line 313
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 314
goto label_40;
#line 314
label_39:
;
#line 315
goto label_35;
#line 315
label_36:
;
#line 316
___nl__int__143 = 0;
#line 317
label_42:
;
#line 318
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 319
___nl__int__145 = 1;
#line 319
___nl__int__146 = ___nl__int__143 == ___nl__int__145;
#line 319
___nl__bool__144 = ___nl__int__146;
#line 319
//clear ___nl__int__145;
#line 319
//clear ___nl__int__146;
#line 319
___nl__bool__144 = !___nl__bool__144;
#line 319
if(___nl__bool__144){ goto label_44;}
#line 319
___nl__int__147 = 1;
#line 319
___nl__int__143 = ___nl__int__143 + ___nl__int__147;
#line 319
//clear ___nl__int__147;
#line 319
goto label_43;
#line 319
label_44:
;
#line 319
label_43:
;
#line 319
//clear ___nl__bool__144;
#line 320
c_rt_lib0move(&___nl__im__151,___get_global_const(111));
#line 320
___nl__bool__148 = c_rt_lib0eq(___nl__im__40, ___nl__im__151);
#line 320
c_rt_lib0clear(&___nl__im__151);
#line 320
___nl__bool__150 = !___nl__bool__148;
#line 320
if(___nl__bool__150){ goto label_48;}
#line 320
c_rt_lib0move(&___nl__im__152, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 320
___nl__bool__148 = string0is_digit(___nl__im__152);
#line 320
c_rt_lib0clear(&___nl__im__152);
#line 320
label_48:
;
#line 320
//clear ___nl__bool__150;
#line 320
___nl__bool__149 = !___nl__bool__148;
#line 320
if(___nl__bool__149){ goto label_47;}
#line 320
___nl__int__153 = 0;
#line 320
___nl__int__154 = ___nl__int__143 == ___nl__int__153;
#line 320
___nl__bool__148 = ___nl__int__154;
#line 320
//clear ___nl__int__153;
#line 320
//clear ___nl__int__154;
#line 320
label_47:
;
#line 320
//clear ___nl__bool__149;
#line 320
___nl__bool__148 = !___nl__bool__148;
#line 320
if(___nl__bool__148){ goto label_46;}
#line 320
___nl__int__143 = 1;
#line 320
goto label_45;
#line 320
label_46:
;
#line 320
label_45:
;
#line 320
//clear ___nl__bool__148;
#line 321
c_rt_lib0move(&___nl__im__156,___get_global_const(37));
#line 321
___nl__bool__155 = c_rt_lib0eq(___nl__im__40, ___nl__im__156);
#line 321
c_rt_lib0clear(&___nl__im__156);
#line 321
if(___nl__bool__155){ goto label_51;}
#line 321
___nl__bool__155 = string0is_digit(___nl__im__40);
#line 321
if(___nl__bool__155){ goto label_52;}
#line 321
___nl__int__157 = 1;
#line 321
___nl__int__158 = ___nl__int__143 == ___nl__int__157;
#line 321
___nl__bool__155 = ___nl__int__158;
#line 321
//clear ___nl__int__157;
#line 321
//clear ___nl__int__158;
#line 321
label_52:
;
#line 321
___nl__bool__155 = !___nl__bool__155;
#line 321
label_51:
;
#line 321
___nl__bool__155 = !___nl__bool__155;
#line 321
if(___nl__bool__155){ goto label_50;}
#line 321
goto label_41;
#line 321
goto label_49;
#line 321
label_50:
;
#line 321
label_49:
;
#line 321
//clear ___nl__bool__155;
#line 322
___nl__im_ptr__159 = &((*___ref___rec__0).next_token0field);
#line 322
c_rt_lib0move(___nl__im_ptr__159, c_rt_lib0concat_add((*___nl__im_ptr__159), ___nl__im__40));
#line 322
___nl__im_ptr__159 = NULL;
#line 323
___nl__int_ptr__160 = &((*___ref___rec__0).pos0field);
#line 323
___nl__int__161 = 1;
#line 323
(*___nl__int_ptr__160) = (*___nl__int_ptr__160) + ___nl__int__161;
#line 323
___nl__int_ptr__160 = NULL;
#line 323
//clear ___nl__int__161;
#line 317
goto label_42;
#line 317
label_41:
;
#line 325
goto label_35;
#line 325
label_35:
;
#line 325
//clear ___nl__bool__128;
#line 325
//clear ___nl__bool__139;
#line 325
//clear ___nl__int__143;
#line 326
goto label_5;
#line 326
label_28:
;
#line 327
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_none(___get_global_const(123)));
#line 327
___nl__im_ptr__163 = &((*___ref___rec__0).type0field);
#line 327
c_rt_lib0copy(___nl__im_ptr__163, ___nl__im__162);
#line 327
___nl__im_ptr__163 = NULL;
#line 327
c_rt_lib0clear(&___nl__im__162);
#line 328
___nl__im_ptr__164 = &((*___ref___rec__0).next_token0field);
#line 328
c_rt_lib0copy(___nl__im_ptr__164, ___nl__im__40);
#line 328
___nl__im_ptr__164 = NULL;
#line 329
goto label_5;
#line 329
label_5:
;
#line 329
//clear ___nl__bool__41;
#line 329
//clear ___nl__bool__78;
#line 329
c_rt_lib0clear(&___nl__im__40);
#line 329
return NULL;
}

ImmT  ntokenizer0conv_to_im00state_t(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT * ___nl__int_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
INT * ___nl__int_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT * ___nl__im_ptr__15 = NULL;
INT  ___nl__int__16 = 0;
INT * ___nl__int_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT * ___nl__im_ptr__20 = NULL;
INT  ___nl__int__21 = 0;
INT * ___nl__int_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT * ___nl__im_ptr__25 = NULL;
#line 1
___nl__int_ptr__3 = &((*___ref___rec__0).pos0field);
#line 1
___nl__int__2 = (*___nl__int_ptr__3);
#line 1
___nl__int_ptr__3 = NULL;
#line 1
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__2));
#line 1
___nl__im_ptr__6 = &((*___ref___rec__0).text0field);
#line 1
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1
___nl__im_ptr__6 = NULL;
#line 1
___nl__im_ptr__8 = &((*___ref___rec__0).next_token0field);
#line 1
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1
___nl__im_ptr__8 = NULL;
#line 1
___nl__int_ptr__10 = &((*___ref___rec__0).len0field);
#line 1
___nl__int__9 = (*___nl__int_ptr__10);
#line 1
___nl__int_ptr__10 = NULL;
#line 1
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__9));
#line 1
___nl__im_ptr__13 = &((*___ref___rec__0).type0field);
#line 1
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1
___nl__im_ptr__13 = NULL;
#line 1
___nl__im_ptr__15 = &((*___ref___rec__0).place0field);
#line 1
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1
___nl__im_ptr__15 = NULL;
#line 1
___nl__int_ptr__17 = &((*___ref___rec__0).ln_pos0field);
#line 1
___nl__int__16 = (*___nl__int_ptr__17);
#line 1
___nl__int_ptr__17 = NULL;
#line 1
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 1
___nl__im_ptr__20 = &((*___ref___rec__0).last_comment0field);
#line 1
c_rt_lib0copy(&___nl__im__19, (*___nl__im_ptr__20));
#line 1
___nl__im_ptr__20 = NULL;
#line 1
___nl__int_ptr__22 = &((*___ref___rec__0).ln_nr0field);
#line 1
___nl__int__21 = (*___nl__int_ptr__22);
#line 1
___nl__int_ptr__22 = NULL;
#line 1
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__21));
#line 1
___nl__im_ptr__25 = &((*___ref___rec__0).place_ws0field);
#line 1
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1
___nl__im_ptr__25 = NULL;
#line 1
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(282), ___nl__im__4, ___get_global_const(1097), ___nl__im__5, ___get_global_const(1098), ___nl__im__7, ___get_global_const(283), ___nl__im__11, ___get_global_const(205), ___nl__im__12, ___get_global_const(1101), ___nl__im__14, ___get_global_const(1100), ___nl__im__18, ___get_global_const(1103), ___nl__im__19, ___get_global_const(1099), ___nl__im__23, ___get_global_const(1102), ___nl__im__24));
#line 1
//clear ___nl__int__2;
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__5);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
//clear ___nl__int__9;
#line 1
c_rt_lib0clear(&___nl__im__11);
#line 1
c_rt_lib0clear(&___nl__im__12);
#line 1
c_rt_lib0clear(&___nl__im__14);
#line 1
//clear ___nl__int__16;
#line 1
c_rt_lib0clear(&___nl__im__18);
#line 1
c_rt_lib0clear(&___nl__im__19);
#line 1
//clear ___nl__int__21;
#line 1
c_rt_lib0clear(&___nl__im__23);
#line 1
c_rt_lib0clear(&___nl__im__24);
#line 1
return ___nl__im__1;
#line 1
c_rt_lib0clear(&___nl__im__1);
#line 1
return NULL;
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void ntokenizer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT ntokenizer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ntokenizer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = ntokenizer_priv0get_keywords0cal();
	break;
case 1:
	___const__[1] = ntokenizer_priv0get_char_oper0cal();
	break;
case 2:
	___const__[2] = ntokenizer_priv0get_lett_oper0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
