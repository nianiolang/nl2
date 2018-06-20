
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
#include "boolean_t.h"
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
bool ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___rec__0);
bool ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0);
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
#line 20
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 21
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 22
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 23
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 24
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 25
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 26
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 27
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 28
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 29
c_rt_lib0move(&___nl__im__11,___get_global_const(37));
#line 30
c_rt_lib0move(&___nl__im__12,___get_global_const(37));
#line 31
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 32
c_rt_lib0move(&___nl__im__14,___get_global_const(37));
#line 33
c_rt_lib0move(&___nl__im__15,___get_global_const(37));
#line 34
c_rt_lib0move(&___nl__im__16,___get_global_const(37));
#line 35
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 36
c_rt_lib0move(&___nl__im__18,___get_global_const(37));
#line 37
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 38
c_rt_lib0move(&___nl__im__20,___get_global_const(37));
#line 39
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 40
c_rt_lib0move(&___nl__im__22,___get_global_const(37));
#line 41
c_rt_lib0move(&___nl__im__23,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__24,___get_global_const(37));
#line 43
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 43
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(24, ___get_global_const(991), ___nl__im__2, ___get_global_const(871), ___nl__im__3, ___get_global_const(872), ___nl__im__4, ___get_global_const(870), ___nl__im__5, ___get_global_const(873), ___nl__im__6, ___get_global_const(160), ___nl__im__7, ___get_global_const(874), ___nl__im__8, ___get_global_const(869), ___nl__im__9, ___get_global_const(884), ___nl__im__10, ___get_global_const(885), ___nl__im__11, ___get_global_const(463), ___nl__im__12, ___get_global_const(689), ___nl__im__13, ___get_global_const(40), ___nl__im__14, ___get_global_const(879), ___nl__im__15, ___get_global_const(1014), ___nl__im__16, ___get_global_const(986), ___nl__im__17, ___get_global_const(535), ___nl__im__18, ___get_global_const(536), ___nl__im__19, ___get_global_const(878), ___nl__im__20, ___get_global_const(877), ___nl__im__21, ___get_global_const(246), ___nl__im__22, ___get_global_const(881), ___nl__im__23, ___get_global_const(178), ___nl__im__24, ___get_global_const(247), ___nl__im__25));
#line 43
c_rt_lib0clear(&___nl__im__2);
#line 43
c_rt_lib0clear(&___nl__im__3);
#line 43
c_rt_lib0clear(&___nl__im__4);
#line 43
c_rt_lib0clear(&___nl__im__5);
#line 43
c_rt_lib0clear(&___nl__im__6);
#line 43
c_rt_lib0clear(&___nl__im__7);
#line 43
c_rt_lib0clear(&___nl__im__8);
#line 43
c_rt_lib0clear(&___nl__im__9);
#line 43
c_rt_lib0clear(&___nl__im__10);
#line 43
c_rt_lib0clear(&___nl__im__11);
#line 43
c_rt_lib0clear(&___nl__im__12);
#line 43
c_rt_lib0clear(&___nl__im__13);
#line 43
c_rt_lib0clear(&___nl__im__14);
#line 43
c_rt_lib0clear(&___nl__im__15);
#line 43
c_rt_lib0clear(&___nl__im__16);
#line 43
c_rt_lib0clear(&___nl__im__17);
#line 43
c_rt_lib0clear(&___nl__im__18);
#line 43
c_rt_lib0clear(&___nl__im__19);
#line 43
c_rt_lib0clear(&___nl__im__20);
#line 43
c_rt_lib0clear(&___nl__im__21);
#line 43
c_rt_lib0clear(&___nl__im__22);
#line 43
c_rt_lib0clear(&___nl__im__23);
#line 43
c_rt_lib0clear(&___nl__im__24);
#line 43
c_rt_lib0clear(&___nl__im__25);
#line 43
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 43
c_rt_lib0clear(&___nl__im__1);
#line 43
return ___nl__im__0;
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
#line 48
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 48
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 48
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(3, ___nl__im__1, ___nl__im__2, ___nl__im__3));
#line 48
c_rt_lib0clear(&___nl__im__1);
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 49
c_rt_lib0move(&___nl__im__5, nast0get_unary_ops());
#line 49
c_rt_lib0move(&___nl__im__6, nast0get_bin_ops());
#line 49
c_rt_lib0move(&___nl__im__7, nast0get_ternary_ops());
#line 49
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(3, ___nl__im__5, ___nl__im__6, ___nl__im__7));
#line 49
c_rt_lib0clear(&___nl__im__5);
#line 49
c_rt_lib0clear(&___nl__im__6);
#line 49
c_rt_lib0clear(&___nl__im__7);
#line 49
___nl__int__9 = 0;
#line 49
___nl__int__10 = 1;
#line 49
___nl__int__11 = c_rt_lib0array_len(___nl__im__4);
#line 49
label_3:
;
#line 49
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 49
___nl__bool__12 = ___nl__int__13;
#line 49
if(___nl__bool__12){ goto label_1;}
#line 49
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__4, ___nl__int__9));
#line 49
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 50
c_rt_lib0move(&___nl__im__18, c_rt_lib0init_iter(___nl__im__8));
#line 50
label_6:
;
#line 50
___nl__bool__16 = c_rt_lib0is_end_hash(___nl__im__18);
#line 50
if(___nl__bool__16){ goto label_4;}
#line 50
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_key_iter(___nl__im__18));
#line 50
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value(___nl__im__8, ___nl__im__15));
#line 51
___nl__int__21 = 0;
#line 51
___nl__int__22 = 1;
#line 51
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__15, ___nl__int__21, ___nl__int__22));
#line 51
//clear ___nl__int__21;
#line 51
//clear ___nl__int__22;
#line 51
___nl__bool__19 = string0is_letter(___nl__im__20);
#line 51
c_rt_lib0clear(&___nl__im__20);
#line 51
___nl__bool__19 = !___nl__bool__19;
#line 51
___nl__bool__19 = !___nl__bool__19;
#line 51
if(___nl__bool__19){ goto label_8;}
#line 51
___nl__int__25 = string0length(___nl__im__15);
#line 51
___nl__int__26 = 1;
#line 51
___nl__int__24 = ___nl__int__25 - ___nl__int__26;
#line 51
//clear ___nl__int__25;
#line 51
//clear ___nl__int__26;
#line 51
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__24));
#line 51
c_rt_lib0delete(array0push(&___nl__im__23, ___nl__im__15));
#line 51
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__24, ___nl__im__23));
#line 51
c_rt_lib0clear(&___nl__im__23);
#line 51
//clear ___nl__int__24;
#line 51
goto label_7;
#line 51
label_8:
;
#line 51
label_7:
;
#line 51
//clear ___nl__bool__19;
#line 51
label_5:
;
#line 52
c_rt_lib0move(&___nl__im__18, c_rt_lib0next_iter(___nl__im__18));
#line 52
goto label_6;
#line 52
label_4:
;
#line 52
c_rt_lib0clear(&___nl__im__8);
#line 52
label_2:
;
#line 53
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 53
goto label_3;
#line 53
label_1:
;
#line 54
___nl__int__28 = 2;
#line 54
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__28));
#line 54
___nl__int__30 = 1;
#line 54
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__0, ___nl__int__30));
#line 54
//clear ___nl__int__30;
#line 54
c_rt_lib0delete(array0append(&___nl__im__27, ___nl__im__29));
#line 54
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__28, ___nl__im__27));
#line 54
c_rt_lib0clear(&___nl__im__27);
#line 54
//clear ___nl__int__28;
#line 54
c_rt_lib0clear(&___nl__im__29);
#line 55
___nl__int__32 = 2;
#line 55
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__32));
#line 55
___nl__int__34 = 0;
#line 55
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__0, ___nl__int__34));
#line 55
//clear ___nl__int__34;
#line 55
c_rt_lib0delete(array0append(&___nl__im__31, ___nl__im__33));
#line 55
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__32, ___nl__im__31));
#line 55
c_rt_lib0clear(&___nl__im__31);
#line 55
//clear ___nl__int__32;
#line 55
c_rt_lib0clear(&___nl__im__33);
#line 56
___nl__int__37 = 2;
#line 56
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__0, ___nl__int__37));
#line 56
//clear ___nl__int__37;
#line 56
c_rt_lib0move(&___nl__im__35, singleton0sigleton_do_not_use_without_approval(___nl__im__36));
#line 56
c_rt_lib0clear(&___nl__im__36);
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0clear(&___nl__im__8);
#line 56
//clear ___nl__int__9;
#line 56
//clear ___nl__int__10;
#line 56
//clear ___nl__int__11;
#line 56
//clear ___nl__bool__12;
#line 56
//clear ___nl__int__13;
#line 56
c_rt_lib0clear(&___nl__im__14);
#line 56
c_rt_lib0clear(&___nl__im__15);
#line 56
//clear ___nl__bool__16;
#line 56
c_rt_lib0clear(&___nl__im__17);
#line 56
c_rt_lib0clear(&___nl__im__18);
#line 56
return ___nl__im__35;
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
#line 60
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 61
c_rt_lib0move(&___nl__im__2, nast0get_unary_ops());
#line 61
c_rt_lib0move(&___nl__im__3, nast0get_bin_ops());
#line 61
c_rt_lib0move(&___nl__im__4, nast0get_ternary_ops());
#line 61
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(3, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
___nl__int__6 = 0;
#line 61
___nl__int__7 = 1;
#line 61
___nl__int__8 = c_rt_lib0array_len(___nl__im__1);
#line 61
label_3:
;
#line 61
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 61
___nl__bool__9 = ___nl__int__10;
#line 61
if(___nl__bool__9){ goto label_1;}
#line 61
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 61
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 62
c_rt_lib0move(&___nl__im__15, c_rt_lib0init_iter(___nl__im__5));
#line 62
label_6:
;
#line 62
___nl__bool__13 = c_rt_lib0is_end_hash(___nl__im__15);
#line 62
if(___nl__bool__13){ goto label_4;}
#line 62
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_key_iter(___nl__im__15));
#line 62
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__12));
#line 63
___nl__int__18 = 0;
#line 63
___nl__int__19 = 1;
#line 63
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__12, ___nl__int__18, ___nl__int__19));
#line 63
//clear ___nl__int__18;
#line 63
//clear ___nl__int__19;
#line 63
___nl__bool__16 = string0is_letter(___nl__im__17);
#line 63
c_rt_lib0clear(&___nl__im__17);
#line 63
___nl__bool__16 = !___nl__bool__16;
#line 63
if(___nl__bool__16){ goto label_8;}
#line 63
c_rt_lib0move(&___nl__im__20,___get_global_const(37));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__12, ___nl__im__20));
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 63
goto label_7;
#line 63
label_8:
;
#line 63
label_7:
;
#line 63
//clear ___nl__bool__16;
#line 63
label_5:
;
#line 64
c_rt_lib0move(&___nl__im__15, c_rt_lib0next_iter(___nl__im__15));
#line 64
goto label_6;
#line 64
label_4:
;
#line 64
c_rt_lib0clear(&___nl__im__5);
#line 64
label_2:
;
#line 65
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 65
goto label_3;
#line 65
label_1:
;
#line 66
c_rt_lib0move(&___nl__im__21, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
c_rt_lib0clear(&___nl__im__5);
#line 66
//clear ___nl__int__6;
#line 66
//clear ___nl__int__7;
#line 66
//clear ___nl__int__8;
#line 66
//clear ___nl__bool__9;
#line 66
//clear ___nl__int__10;
#line 66
c_rt_lib0clear(&___nl__im__11);
#line 66
c_rt_lib0clear(&___nl__im__12);
#line 66
//clear ___nl__bool__13;
#line 66
c_rt_lib0clear(&___nl__im__14);
#line 66
c_rt_lib0clear(&___nl__im__15);
#line 66
return ___nl__im__21;
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
#line 71
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 71
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 71
c_rt_lib0clear(&___nl__im__3);
#line 72
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 73
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 74
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(987), ___get_global_const(1015)));
#line 74
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 75
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 76
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__9, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__12, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__13, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__12, ___get_global_const(952), ___nl__im__13));
#line 78
c_rt_lib0clear(&___nl__im__12);
#line 78
c_rt_lib0clear(&___nl__im__13);
#line 78
c_rt_lib0move(&___nl__im__10, ptd0rec(___nl__im__11));
#line 78
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0move(&___nl__im__16, ptd0int());
#line 79
c_rt_lib0move(&___nl__im__17, ptd0int());
#line 79
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__16, ___get_global_const(952), ___nl__im__17));
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 80
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(1016), ___nl__im__2, ___get_global_const(282), ___nl__im__4, ___get_global_const(283), ___nl__im__5, ___get_global_const(95), ___nl__im__6, ___get_global_const(1017), ___nl__im__7, ___get_global_const(1018), ___nl__im__8, ___get_global_const(1019), ___nl__im__9, ___get_global_const(1020), ___nl__im__10, ___get_global_const(1021), ___nl__im__14, ___get_global_const(1022), ___nl__im__18));
#line 80
c_rt_lib0clear(&___nl__im__2);
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
c_rt_lib0clear(&___nl__im__5);
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
c_rt_lib0clear(&___nl__im__8);
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__18);
#line 80
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
#line 80
c_rt_lib0clear(&___nl__im__1);
#line 80
return ___nl__im__0;
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
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
#line 86
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 87
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 88
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 89
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 91
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 92
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 94
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 94
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_const(939), ___nl__im__2, ___get_global_const(1023), ___nl__im__3, ___get_global_const(1006), ___nl__im__4, ___get_global_const(1003), ___nl__im__5, ___get_global_const(1008), ___nl__im__6, ___get_global_const(992), ___nl__im__7, ___get_global_const(1005), ___nl__im__8, ___get_global_const(527), ___nl__im__9, ___get_global_const(125), ___nl__im__10));
#line 94
c_rt_lib0clear(&___nl__im__2);
#line 94
c_rt_lib0clear(&___nl__im__3);
#line 94
c_rt_lib0clear(&___nl__im__4);
#line 94
c_rt_lib0clear(&___nl__im__5);
#line 94
c_rt_lib0clear(&___nl__im__6);
#line 94
c_rt_lib0clear(&___nl__im__7);
#line 94
c_rt_lib0clear(&___nl__im__8);
#line 94
c_rt_lib0clear(&___nl__im__9);
#line 94
c_rt_lib0clear(&___nl__im__10);
#line 94
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 94
c_rt_lib0clear(&___nl__im__1);
#line 94
return ___nl__im__0;
#line 94
c_rt_lib0clear(&___nl__im__0);
#line 94
return NULL;
}

ImmT  ntokenizer0init(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
#line 99
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 99
return NULL;
}

ImmT  ntokenizer0get_last_comment(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 103
___nl__im_ptr__2 = &((*___ref___rec__0).last_comment0field);
#line 103
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 103
___nl__im_ptr__2 = NULL;
#line 103
return ___nl__im__1;
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
#line 107
___nl__im_ptr__4 = &((*___ref___rec__0).text0field);
#line 107
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 107
___nl__im_ptr__4 = NULL;
#line 107
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 107
___nl__int__5 = (*___nl__int_ptr__6);
#line 107
___nl__int_ptr__6 = NULL;
#line 107
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__5));
#line 107
___nl__int__8 = 1;
#line 107
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 107
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__im__7, ___nl__im__9));
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
//clear ___nl__int__5;
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
//clear ___nl__int__8;
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 107
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__10));
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0clear(&___nl__im__10);
#line 107
return ___nl__im__1;
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
#line 111
___nl__int_ptr__3 = &((*___ref___rec__0).len0field);
#line 111
___nl__int__2 = (*___nl__int_ptr__3);
#line 111
___nl__int_ptr__3 = NULL;
#line 111
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 111
___nl__int__5 = (*___nl__int_ptr__6);
#line 111
___nl__int_ptr__6 = NULL;
#line 111
___nl__int__7 = 1;
#line 111
___nl__int__4 = ___nl__int__5 + ___nl__int__7;
#line 111
//clear ___nl__int__5;
#line 111
//clear ___nl__int__7;
#line 111
___nl__int__8 = ___nl__int__2 <= ___nl__int__4;
#line 111
___nl__bool__1 = ___nl__int__8;
#line 111
//clear ___nl__int__2;
#line 111
//clear ___nl__int__4;
#line 111
//clear ___nl__int__8;
#line 111
___nl__bool__1 = !___nl__bool__1;
#line 111
if(___nl__bool__1){ goto label_2;}
#line 111
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 111
//clear ___nl__bool__1;
#line 111
return ___nl__im__9;
#line 111
goto label_1;
#line 111
label_2:
;
#line 111
label_1:
;
#line 111
//clear ___nl__bool__1;
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 112
___nl__im_ptr__12 = &((*___ref___rec__0).text0field);
#line 112
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 112
___nl__im_ptr__12 = NULL;
#line 112
___nl__int_ptr__15 = &((*___ref___rec__0).pos0field);
#line 112
___nl__int__14 = (*___nl__int_ptr__15);
#line 112
___nl__int_ptr__15 = NULL;
#line 112
___nl__int__16 = 1;
#line 112
___nl__int__13 = ___nl__int__14 + ___nl__int__16;
#line 112
//clear ___nl__int__14;
#line 112
//clear ___nl__int__16;
#line 112
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__13));
#line 112
___nl__int__18 = 1;
#line 112
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__18));
#line 112
c_rt_lib0move(&___nl__im__10, c_std_lib0fast_substr(___nl__im__11, ___nl__im__17, ___nl__im__19));
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 112
//clear ___nl__int__13;
#line 112
c_rt_lib0clear(&___nl__im__17);
#line 112
//clear ___nl__int__18;
#line 112
c_rt_lib0clear(&___nl__im__19);
#line 112
return ___nl__im__10;
}

ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT * ___nl__im_ptr__1 = NULL;
ImmT  ___nl__im__2 = NULL;
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
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT * ___nl__int_ptr__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT * ___nl__int_ptr__25 = NULL;
INT  ___nl__int__26 = 0;
INT * ___nl__int_ptr__27 = NULL;
INT  ___nl__int__28 = 0;
INT * ___nl__int_ptr__29 = NULL;
INT * ___nl__int_ptr__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
ImmT * ___nl__im_ptr__35 = NULL;
INT * ___nl__int_ptr__36 = NULL;
INT  ___nl__int__37 = 0;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
INT * ___nl__int_ptr__40 = NULL;
INT  ___nl__int__41 = 0;
INT * ___nl__int_ptr__42 = NULL;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
INT * ___nl__int_ptr__45 = NULL;
INT  ___nl__int__46 = 0;
bool  ___nl__bool__47 = false;
ImmT * ___nl__im_ptr__48 = NULL;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT * ___nl__int_ptr__53 = NULL;
INT  ___nl__int__54 = 0;
#line 116
___nl__im_ptr__1 = &((*___ref___rec__0).last_comment0field);
#line 116
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 116
c_rt_lib0copy(___nl__im_ptr__1, ___nl__im__2);
#line 116
___nl__im_ptr__1 = NULL;
#line 116
c_rt_lib0clear(&___nl__im__2);
#line 117
___nl__bool__3 = true;
#line 118
label_2:
;
#line 119
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 119
___nl__int__5 = (*___nl__int_ptr__6);
#line 119
___nl__int_ptr__6 = NULL;
#line 119
___nl__int_ptr__8 = &((*___ref___rec__0).len0field);
#line 119
___nl__int__7 = (*___nl__int_ptr__8);
#line 119
___nl__int_ptr__8 = NULL;
#line 119
___nl__int__9 = ___nl__int__5 == ___nl__int__7;
#line 119
___nl__bool__4 = ___nl__int__9;
#line 119
//clear ___nl__int__5;
#line 119
//clear ___nl__int__7;
#line 119
//clear ___nl__int__9;
#line 119
___nl__bool__4 = !___nl__bool__4;
#line 119
if(___nl__bool__4){ goto label_4;}
#line 119
//clear ___nl__bool__3;
#line 119
//clear ___nl__bool__4;
#line 119
return NULL;
#line 119
goto label_3;
#line 119
label_4:
;
#line 119
label_3:
;
#line 119
//clear ___nl__bool__4;
#line 120
c_rt_lib0move(&___nl__im__10, ntokenizer_priv0get_char(___ref___rec__0));
#line 121
___nl__int__11 = string0ord(___nl__im__10);
#line 122
___nl__int__15 = 9;
#line 122
___nl__int__16 = ___nl__int__11 == ___nl__int__15;
#line 122
___nl__bool__12 = ___nl__int__16;
#line 122
//clear ___nl__int__15;
#line 122
//clear ___nl__int__16;
#line 122
if(___nl__bool__12){ goto label_8;}
#line 122
___nl__int__17 = 13;
#line 122
___nl__int__18 = ___nl__int__11 == ___nl__int__17;
#line 122
___nl__bool__12 = ___nl__int__18;
#line 122
//clear ___nl__int__17;
#line 122
//clear ___nl__int__18;
#line 122
label_8:
;
#line 122
//clear ___nl__bool__14;
#line 122
if(___nl__bool__12){ goto label_7;}
#line 122
___nl__int__19 = 32;
#line 122
___nl__int__20 = ___nl__int__11 == ___nl__int__19;
#line 122
___nl__bool__12 = ___nl__int__20;
#line 122
//clear ___nl__int__19;
#line 122
//clear ___nl__int__20;
#line 122
label_7:
;
#line 122
//clear ___nl__bool__13;
#line 122
___nl__bool__12 = !___nl__bool__12;
#line 122
if(___nl__bool__12){ goto label_6;}
#line 123
___nl__int_ptr__21 = &((*___ref___rec__0).pos0field);
#line 123
___nl__int__22 = 1;
#line 123
(*___nl__int_ptr__21) = (*___nl__int_ptr__21) + ___nl__int__22;
#line 123
___nl__int_ptr__21 = NULL;
#line 123
//clear ___nl__int__22;
#line 124
___nl__bool__3 = false;
#line 125
goto label_5;
#line 125
label_6:
;
#line 125
___nl__int__23 = 10;
#line 125
___nl__int__24 = ___nl__int__11 == ___nl__int__23;
#line 125
___nl__bool__12 = ___nl__int__24;
#line 125
//clear ___nl__int__23;
#line 125
//clear ___nl__int__24;
#line 125
___nl__bool__12 = !___nl__bool__12;
#line 125
if(___nl__bool__12){ goto label_9;}
#line 126
___nl__int_ptr__25 = &((*___ref___rec__0).pos0field);
#line 126
___nl__int__26 = 1;
#line 126
(*___nl__int_ptr__25) = (*___nl__int_ptr__25) + ___nl__int__26;
#line 126
___nl__int_ptr__25 = NULL;
#line 126
//clear ___nl__int__26;
#line 127
___nl__int_ptr__27 = &((*___ref___rec__0).ln_pos0field);
#line 127
___nl__int_ptr__29 = &((*___ref___rec__0).pos0field);
#line 127
___nl__int__28 = (*___nl__int_ptr__29);
#line 127
___nl__int_ptr__29 = NULL;
#line 127
(*___nl__int_ptr__27) = ___nl__int__28;
#line 127
___nl__int_ptr__27 = NULL;
#line 127
//clear ___nl__int__28;
#line 128
___nl__int_ptr__30 = &((*___ref___rec__0).ln_nr0field);
#line 128
___nl__int__31 = 1;
#line 128
(*___nl__int_ptr__30) = (*___nl__int_ptr__30) + ___nl__int__31;
#line 128
___nl__int_ptr__30 = NULL;
#line 128
//clear ___nl__int__31;
#line 129
___nl__bool__3 = false;
#line 130
goto label_5;
#line 130
label_9:
;
#line 130
___nl__int__32 = 35;
#line 130
___nl__int__33 = ___nl__int__11 == ___nl__int__32;
#line 130
___nl__bool__12 = ___nl__int__33;
#line 130
//clear ___nl__int__32;
#line 130
//clear ___nl__int__33;
#line 130
___nl__bool__12 = !___nl__bool__12;
#line 130
if(___nl__bool__12){ goto label_10;}
#line 131
___nl__bool__34 = ___nl__bool__3;
#line 131
___nl__bool__34 = !___nl__bool__34;
#line 131
if(___nl__bool__34){ goto label_12;}
#line 132
___nl__im_ptr__35 = &((*___ref___rec__0).last_comment0field);
#line 132
c_rt_lib0move(___nl__im_ptr__35, c_rt_lib0concat_add((*___nl__im_ptr__35), ___nl__im__10));
#line 132
___nl__im_ptr__35 = NULL;
#line 133
goto label_11;
#line 133
label_12:
;
#line 133
label_11:
;
#line 133
//clear ___nl__bool__34;
#line 134
___nl__int_ptr__36 = &((*___ref___rec__0).pos0field);
#line 134
___nl__int__37 = 1;
#line 134
(*___nl__int_ptr__36) = (*___nl__int_ptr__36) + ___nl__int__37;
#line 134
___nl__int_ptr__36 = NULL;
#line 134
//clear ___nl__int__37;
#line 135
label_14:
;
#line 136
___nl__int_ptr__40 = &((*___ref___rec__0).pos0field);
#line 136
___nl__int__39 = (*___nl__int_ptr__40);
#line 136
___nl__int_ptr__40 = NULL;
#line 136
___nl__int_ptr__42 = &((*___ref___rec__0).len0field);
#line 136
___nl__int__41 = (*___nl__int_ptr__42);
#line 136
___nl__int_ptr__42 = NULL;
#line 136
___nl__int__43 = ___nl__int__39 == ___nl__int__41;
#line 136
___nl__bool__38 = ___nl__int__43;
#line 136
//clear ___nl__int__39;
#line 136
//clear ___nl__int__41;
#line 136
//clear ___nl__int__43;
#line 136
___nl__bool__38 = !___nl__bool__38;
#line 136
if(___nl__bool__38){ goto label_16;}
#line 136
//clear ___nl__bool__3;
#line 136
c_rt_lib0clear(&___nl__im__10);
#line 136
//clear ___nl__int__11;
#line 136
//clear ___nl__bool__12;
#line 136
//clear ___nl__bool__38;
#line 136
return NULL;
#line 136
goto label_15;
#line 136
label_16:
;
#line 136
label_15:
;
#line 136
//clear ___nl__bool__38;
#line 137
c_rt_lib0move(&___nl__im__44, ntokenizer_priv0get_char(___ref___rec__0));
#line 138
___nl__int_ptr__45 = &((*___ref___rec__0).pos0field);
#line 138
___nl__int__46 = 1;
#line 138
(*___nl__int_ptr__45) = (*___nl__int_ptr__45) + ___nl__int__46;
#line 138
___nl__int_ptr__45 = NULL;
#line 138
//clear ___nl__int__46;
#line 139
___nl__bool__47 = ___nl__bool__3;
#line 139
___nl__bool__47 = !___nl__bool__47;
#line 139
if(___nl__bool__47){ goto label_18;}
#line 140
___nl__im_ptr__48 = &((*___ref___rec__0).last_comment0field);
#line 140
c_rt_lib0move(___nl__im_ptr__48, c_rt_lib0concat_add((*___nl__im_ptr__48), ___nl__im__44));
#line 140
___nl__im_ptr__48 = NULL;
#line 141
goto label_17;
#line 141
label_18:
;
#line 141
label_17:
;
#line 141
//clear ___nl__bool__47;
#line 142
___nl__int__50 = string0ord(___nl__im__44);
#line 142
___nl__int__51 = 10;
#line 142
___nl__int__52 = ___nl__int__50 == ___nl__int__51;
#line 142
___nl__bool__49 = ___nl__int__52;
#line 142
//clear ___nl__int__50;
#line 142
//clear ___nl__int__51;
#line 142
//clear ___nl__int__52;
#line 142
___nl__bool__49 = !___nl__bool__49;
#line 142
if(___nl__bool__49){ goto label_20;}
#line 142
goto label_13;
#line 142
goto label_19;
#line 142
label_20:
;
#line 142
label_19:
;
#line 142
//clear ___nl__bool__49;
#line 142
c_rt_lib0clear(&___nl__im__44);
#line 135
goto label_14;
#line 135
label_13:
;
#line 144
___nl__int_ptr__53 = &((*___ref___rec__0).ln_nr0field);
#line 144
___nl__int__54 = 1;
#line 144
(*___nl__int_ptr__53) = (*___nl__int_ptr__53) + ___nl__int__54;
#line 144
___nl__int_ptr__53 = NULL;
#line 144
//clear ___nl__int__54;
#line 145
goto label_5;
#line 145
label_10:
;
#line 146
//clear ___nl__bool__3;
#line 146
c_rt_lib0clear(&___nl__im__10);
#line 146
//clear ___nl__int__11;
#line 146
//clear ___nl__bool__12;
#line 146
c_rt_lib0clear(&___nl__im__44);
#line 146
return NULL;
#line 147
goto label_5;
#line 147
label_5:
;
#line 147
//clear ___nl__bool__12;
#line 147
c_rt_lib0clear(&___nl__im__44);
#line 147
c_rt_lib0clear(&___nl__im__10);
#line 147
//clear ___nl__int__11;
#line 118
goto label_2;
#line 118
label_1:
;
#line 118
//clear ___nl__bool__3;
#line 118
c_rt_lib0clear(&___nl__im__10);
#line 118
//clear ___nl__int__11;
#line 118
return NULL;
}

bool ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___rec__0) {
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
#line 152
___nl__im_ptr__3 = &((*___ref___rec__0).type0field);
#line 152
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 152
___nl__im_ptr__3 = NULL;
#line 152
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1023));
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
___nl__bool__1 = !___nl__bool__1;
#line 152
if(___nl__bool__1){ goto label_2;}
#line 152
___nl__bool__4 = true;
#line 152
//clear ___nl__bool__1;
#line 152
return ___nl__bool__4;
#line 152
goto label_1;
#line 152
label_2:
;
#line 152
label_1:
;
#line 152
//clear ___nl__bool__1;
#line 152
//clear ___nl__bool__4;
#line 153
___nl__im_ptr__7 = &((*___ref___rec__0).type0field);
#line 153
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 153
___nl__im_ptr__7 = NULL;
#line 153
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(1006));
#line 153
c_rt_lib0clear(&___nl__im__6);
#line 153
___nl__bool__5 = !___nl__bool__5;
#line 153
if(___nl__bool__5){ goto label_4;}
#line 153
___nl__bool__8 = true;
#line 153
//clear ___nl__bool__5;
#line 153
return ___nl__bool__8;
#line 153
goto label_3;
#line 153
label_4:
;
#line 153
label_3:
;
#line 153
//clear ___nl__bool__5;
#line 153
//clear ___nl__bool__8;
#line 154
___nl__im_ptr__11 = &((*___ref___rec__0).type0field);
#line 154
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 154
___nl__im_ptr__11 = NULL;
#line 154
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(1008));
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
___nl__bool__9 = !___nl__bool__9;
#line 154
if(___nl__bool__9){ goto label_6;}
#line 154
___nl__bool__12 = true;
#line 154
//clear ___nl__bool__9;
#line 154
return ___nl__bool__12;
#line 154
goto label_5;
#line 154
label_6:
;
#line 154
label_5:
;
#line 154
//clear ___nl__bool__9;
#line 154
//clear ___nl__bool__12;
#line 155
___nl__bool__13 = false;
#line 155
return ___nl__bool__13;
}

bool ntokenizer0eat_token(ntokenizer0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
#line 159
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 159
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 159
___nl__im_ptr__5 = NULL;
#line 159
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
___nl__bool__3 = !___nl__bool__2;
#line 159
if(___nl__bool__3){ goto label_3;}
#line 159
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 159
label_3:
;
#line 159
//clear ___nl__bool__3;
#line 159
___nl__bool__2 = !___nl__bool__2;
#line 159
if(___nl__bool__2){ goto label_2;}
#line 160
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 161
___nl__bool__6 = true;
#line 161
c_rt_lib0clear(&___nl__im__1);
#line 161
//clear ___nl__bool__2;
#line 161
return ___nl__bool__6;
#line 162
goto label_1;
#line 162
label_2:
;
#line 162
label_1:
;
#line 162
//clear ___nl__bool__2;
#line 162
//clear ___nl__bool__6;
#line 163
___nl__bool__7 = false;
#line 163
c_rt_lib0clear(&___nl__im__1);
#line 163
return ___nl__bool__7;
}

INT  ntokenizer0get_line(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT * ___nl__int_ptr__2 = NULL;
#line 167
___nl__int_ptr__2 = &((*___ref___rec__0).ln_nr0field);
#line 167
___nl__int__1 = (*___nl__int_ptr__2);
#line 167
___nl__int_ptr__2 = NULL;
#line 167
return ___nl__int__1;
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
#line 170
___nl__int__4 = 1;
#line 170
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 170
___nl__int__5 = (*___nl__int_ptr__6);
#line 170
___nl__int_ptr__6 = NULL;
#line 170
___nl__int__3 = ___nl__int__4 + ___nl__int__5;
#line 170
//clear ___nl__int__4;
#line 170
//clear ___nl__int__5;
#line 170
___nl__int_ptr__8 = &((*___ref___rec__0).ln_pos0field);
#line 170
___nl__int__7 = (*___nl__int_ptr__8);
#line 170
___nl__int_ptr__8 = NULL;
#line 170
___nl__int__2 = ___nl__int__3 - ___nl__int__7;
#line 170
//clear ___nl__int__3;
#line 170
//clear ___nl__int__7;
#line 170
___nl__im_ptr__11 = &((*___ref___rec__0).next_token0field);
#line 170
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 170
___nl__im_ptr__11 = NULL;
#line 170
___nl__int__9 = string0length(___nl__im__10);
#line 170
c_rt_lib0clear(&___nl__im__10);
#line 170
___nl__int__1 = ___nl__int__2 - ___nl__int__9;
#line 170
//clear ___nl__int__2;
#line 170
//clear ___nl__int__9;
#line 170
return ___nl__int__1;
}

ImmT  ntokenizer0get_place(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 173
___nl__im_ptr__2 = &((*___ref___rec__0).place0field);
#line 173
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 173
___nl__im_ptr__2 = NULL;
#line 173
return ___nl__im__1;
}

ImmT  ntokenizer0get_place_ws(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 177
___nl__im_ptr__2 = &((*___ref___rec__0).place_ws0field);
#line 177
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 177
___nl__im_ptr__2 = NULL;
#line 177
return ___nl__im__1;
}

ImmT  ntokenizer0get_token(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 181
___nl__im_ptr__2 = &((*___ref___rec__0).next_token0field);
#line 181
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 181
___nl__im_ptr__2 = NULL;
#line 181
return ___nl__im__1;
}

bool ntokenizer0is_type(ntokenizer0state_t0type* ___ref___rec__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 185
___nl__im_ptr__4 = &((*___ref___rec__0).type0field);
#line 185
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 185
___nl__im_ptr__4 = NULL;
#line 185
___nl__bool__2 = enum0eq(___nl__im__3, ___nl__im__1);
#line 185
c_rt_lib0clear(&___nl__im__3);
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
return ___nl__bool__2;
}

bool ntokenizer0next_is(ntokenizer0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 189
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 189
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 189
___nl__im_ptr__5 = NULL;
#line 189
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 189
c_rt_lib0clear(&___nl__im__4);
#line 189
___nl__bool__3 = !___nl__bool__2;
#line 189
if(___nl__bool__3){ goto label_1;}
#line 189
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 189
label_1:
;
#line 189
//clear ___nl__bool__3;
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
return ___nl__bool__2;
}

ImmT  ntokenizer0eat_type(ntokenizer0state_t0type* ___ref___rec__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 193
___nl__bool__2 = ntokenizer0is_type(___ref___rec__0, ___nl__im__1);
#line 193
___nl__bool__2 = !___nl__bool__2;
#line 193
___nl__bool__2 = !___nl__bool__2;
#line 193
if(___nl__bool__2){ goto label_2;}
#line 193
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 193
nl_die_arg(___nl__im__3);
#line 193
goto label_1;
#line 193
label_2:
;
#line 193
label_1:
;
#line 193
//clear ___nl__bool__2;
#line 193
c_rt_lib0clear(&___nl__im__3);
#line 194
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 194
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 194
___nl__im_ptr__5 = NULL;
#line 195
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 196
c_rt_lib0clear(&___nl__im__1);
#line 196
return ___nl__im__4;
}

bool ntokenizer0is_text(ntokenizer0state_t0type* ___ref___rec__0) {
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
#line 200
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(992)));
#line 200
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
___nl__bool__1 = !___nl__bool__1;
#line 200
if(___nl__bool__1){ goto label_2;}
#line 200
___nl__bool__3 = true;
#line 200
//clear ___nl__bool__1;
#line 200
return ___nl__bool__3;
#line 200
goto label_1;
#line 200
label_2:
;
#line 200
label_1:
;
#line 200
//clear ___nl__bool__1;
#line 200
//clear ___nl__bool__3;
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(1008)));
#line 201
___nl__bool__4 = ntokenizer0is_type(___ref___rec__0, ___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
___nl__bool__4 = !___nl__bool__4;
#line 201
if(___nl__bool__4){ goto label_4;}
#line 201
___nl__bool__6 = true;
#line 201
//clear ___nl__bool__4;
#line 201
return ___nl__bool__6;
#line 201
goto label_3;
#line 201
label_4:
;
#line 201
label_3:
;
#line 201
//clear ___nl__bool__4;
#line 201
//clear ___nl__bool__6;
#line 202
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1006)));
#line 202
___nl__bool__7 = ntokenizer0is_type(___ref___rec__0, ___nl__im__8);
#line 202
c_rt_lib0clear(&___nl__im__8);
#line 202
___nl__bool__7 = !___nl__bool__7;
#line 202
if(___nl__bool__7){ goto label_6;}
#line 203
___nl__im_ptr__12 = &((*___ref___rec__0).next_token0field);
#line 203
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 203
___nl__im_ptr__12 = NULL;
#line 203
___nl__int__13 = 0;
#line 203
___nl__int__14 = 1;
#line 203
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__11, ___nl__int__13, ___nl__int__14));
#line 203
c_rt_lib0clear(&___nl__im__11);
#line 203
//clear ___nl__int__13;
#line 203
//clear ___nl__int__14;
#line 203
___nl__bool__9 = string0is_letter(___nl__im__10);
#line 203
c_rt_lib0clear(&___nl__im__10);
#line 203
___nl__bool__9 = !___nl__bool__9;
#line 203
if(___nl__bool__9){ goto label_8;}
#line 203
___nl__bool__15 = true;
#line 203
//clear ___nl__bool__7;
#line 203
//clear ___nl__bool__9;
#line 203
return ___nl__bool__15;
#line 203
goto label_7;
#line 203
label_8:
;
#line 203
label_7:
;
#line 203
//clear ___nl__bool__9;
#line 203
//clear ___nl__bool__15;
#line 204
goto label_5;
#line 204
label_6:
;
#line 204
label_5:
;
#line 204
//clear ___nl__bool__7;
#line 205
___nl__bool__16 = false;
#line 205
return ___nl__bool__16;
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
#line 209
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(992)));
#line 209
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 209
c_rt_lib0clear(&___nl__im__2);
#line 209
___nl__bool__1 = !___nl__bool__1;
#line 209
if(___nl__bool__1){ goto label_2;}
#line 209
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(992)));
#line 209
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_type(___ref___rec__0, ___nl__im__4));
#line 209
c_rt_lib0clear(&___nl__im__4);
#line 209
//clear ___nl__bool__1;
#line 209
return ___nl__im__3;
#line 209
goto label_1;
#line 209
label_2:
;
#line 209
label_1:
;
#line 209
//clear ___nl__bool__1;
#line 209
c_rt_lib0clear(&___nl__im__3);
#line 210
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(1008)));
#line 210
___nl__bool__5 = ntokenizer0is_type(___ref___rec__0, ___nl__im__6);
#line 210
c_rt_lib0clear(&___nl__im__6);
#line 210
___nl__bool__5 = !___nl__bool__5;
#line 210
if(___nl__bool__5){ goto label_4;}
#line 210
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1008)));
#line 210
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_type(___ref___rec__0, ___nl__im__8));
#line 210
c_rt_lib0clear(&___nl__im__8);
#line 210
//clear ___nl__bool__5;
#line 210
return ___nl__im__7;
#line 210
goto label_3;
#line 210
label_4:
;
#line 210
label_3:
;
#line 210
//clear ___nl__bool__5;
#line 210
c_rt_lib0clear(&___nl__im__7);
#line 211
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(1006)));
#line 211
___nl__bool__9 = ntokenizer0is_type(___ref___rec__0, ___nl__im__10);
#line 211
c_rt_lib0clear(&___nl__im__10);
#line 211
___nl__bool__9 = !___nl__bool__9;
#line 211
if(___nl__bool__9){ goto label_6;}
#line 213
___nl__im_ptr__14 = &((*___ref___rec__0).next_token0field);
#line 213
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 213
___nl__im_ptr__14 = NULL;
#line 213
___nl__int__15 = 0;
#line 213
___nl__int__16 = 1;
#line 213
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__13, ___nl__int__15, ___nl__int__16));
#line 213
c_rt_lib0clear(&___nl__im__13);
#line 213
//clear ___nl__int__15;
#line 213
//clear ___nl__int__16;
#line 213
___nl__bool__11 = string0is_letter(___nl__im__12);
#line 213
c_rt_lib0clear(&___nl__im__12);
#line 213
___nl__bool__11 = !___nl__bool__11;
#line 213
if(___nl__bool__11){ goto label_8;}
#line 212
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(1006)));
#line 212
c_rt_lib0move(&___nl__im__17, ntokenizer0eat_type(___ref___rec__0, ___nl__im__18));
#line 212
c_rt_lib0clear(&___nl__im__18);
#line 212
//clear ___nl__bool__9;
#line 212
//clear ___nl__bool__11;
#line 212
return ___nl__im__17;
#line 212
goto label_7;
#line 212
label_8:
;
#line 212
label_7:
;
#line 212
//clear ___nl__bool__11;
#line 212
c_rt_lib0clear(&___nl__im__17);
#line 214
goto label_5;
#line 214
label_6:
;
#line 214
label_5:
;
#line 214
//clear ___nl__bool__9;
#line 215
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 215
nl_die_arg(___nl__im__19);
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
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT * ___nl__int_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
INT * ___nl__int_ptr__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
ImmT  ___nl__im__33 = NULL;
#line 219
c_rt_lib0move(&___nl__im__9,___get_global_const(1024));
#line 219
___nl__im_ptr__11 = &((*___ref___rec__0).next_token0field);
#line 219
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 219
___nl__im_ptr__11 = NULL;
#line 219
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 219
c_rt_lib0clear(&___nl__im__9);
#line 219
c_rt_lib0clear(&___nl__im__10);
#line 219
c_rt_lib0move(&___nl__im__12,___get_global_const(1025));
#line 219
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 219
c_rt_lib0clear(&___nl__im__8);
#line 219
c_rt_lib0clear(&___nl__im__12);
#line 220
___nl__int_ptr__15 = &((*___ref___rec__0).ln_nr0field);
#line 220
___nl__int__14 = (*___nl__int_ptr__15);
#line 220
___nl__int_ptr__15 = NULL;
#line 220
c_rt_lib0move(&___nl__im__13, ptd0int_to_string(___nl__int__14));
#line 220
//clear ___nl__int__14;
#line 220
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__13));
#line 220
c_rt_lib0clear(&___nl__im__7);
#line 220
c_rt_lib0clear(&___nl__im__13);
#line 220
c_rt_lib0move(&___nl__im__16,___get_global_const(1026));
#line 220
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 220
c_rt_lib0clear(&___nl__im__6);
#line 220
c_rt_lib0clear(&___nl__im__16);
#line 221
___nl__int__21 = 1;
#line 221
___nl__int_ptr__23 = &((*___ref___rec__0).pos0field);
#line 221
___nl__int__22 = (*___nl__int_ptr__23);
#line 221
___nl__int_ptr__23 = NULL;
#line 221
___nl__int__20 = ___nl__int__21 + ___nl__int__22;
#line 221
//clear ___nl__int__21;
#line 221
//clear ___nl__int__22;
#line 221
___nl__int_ptr__25 = &((*___ref___rec__0).ln_pos0field);
#line 221
___nl__int__24 = (*___nl__int_ptr__25);
#line 221
___nl__int_ptr__25 = NULL;
#line 221
___nl__int__19 = ___nl__int__20 - ___nl__int__24;
#line 221
//clear ___nl__int__20;
#line 221
//clear ___nl__int__24;
#line 221
___nl__im_ptr__28 = &((*___ref___rec__0).next_token0field);
#line 221
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 221
___nl__im_ptr__28 = NULL;
#line 221
___nl__int__26 = string0length(___nl__im__27);
#line 221
c_rt_lib0clear(&___nl__im__27);
#line 221
___nl__int__18 = ___nl__int__19 - ___nl__int__26;
#line 221
//clear ___nl__int__19;
#line 221
//clear ___nl__int__26;
#line 221
c_rt_lib0move(&___nl__im__17, ptd0int_to_string(___nl__int__18));
#line 221
//clear ___nl__int__18;
#line 221
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__17));
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__17);
#line 221
c_rt_lib0move(&___nl__im__29,___get_global_const(1027));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__29));
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__29);
#line 222
___nl__im_ptr__32 = &((*___ref___rec__0).type0field);
#line 222
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 222
___nl__im_ptr__32 = NULL;
#line 222
c_rt_lib0move(&___nl__im__30, ov0get_element(___nl__im__31));
#line 222
c_rt_lib0clear(&___nl__im__31);
#line 222
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__30));
#line 222
c_rt_lib0clear(&___nl__im__3);
#line 222
c_rt_lib0clear(&___nl__im__30);
#line 222
c_rt_lib0move(&___nl__im__33,___get_global_const(410));
#line 222
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__33));
#line 222
c_rt_lib0clear(&___nl__im__2);
#line 222
c_rt_lib0clear(&___nl__im__33);
#line 222
return ___nl__im__1;
}

bool ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
#line 227
___nl__bool__1 = string0is_digit(___nl__im__0);
#line 227
if(___nl__bool__1){ goto label_2;}
#line 227
___nl__int__5 = string0ord(___nl__im__0);
#line 227
___nl__int__6 = 65;
#line 227
___nl__int__7 = ___nl__int__5 >= ___nl__int__6;
#line 227
___nl__bool__1 = ___nl__int__7;
#line 227
//clear ___nl__int__5;
#line 227
//clear ___nl__int__6;
#line 227
//clear ___nl__int__7;
#line 227
___nl__bool__4 = !___nl__bool__1;
#line 227
if(___nl__bool__4){ goto label_3;}
#line 227
___nl__int__8 = string0ord(___nl__im__0);
#line 227
___nl__int__9 = 70;
#line 227
___nl__int__10 = ___nl__int__8 <= ___nl__int__9;
#line 227
___nl__bool__1 = ___nl__int__10;
#line 227
//clear ___nl__int__8;
#line 227
//clear ___nl__int__9;
#line 227
//clear ___nl__int__10;
#line 227
label_3:
;
#line 227
//clear ___nl__bool__4;
#line 227
label_2:
;
#line 227
//clear ___nl__bool__3;
#line 227
if(___nl__bool__1){ goto label_1;}
#line 228
___nl__int__12 = string0ord(___nl__im__0);
#line 228
___nl__int__13 = 97;
#line 228
___nl__int__14 = ___nl__int__12 >= ___nl__int__13;
#line 228
___nl__bool__1 = ___nl__int__14;
#line 228
//clear ___nl__int__12;
#line 228
//clear ___nl__int__13;
#line 228
//clear ___nl__int__14;
#line 228
___nl__bool__11 = !___nl__bool__1;
#line 228
if(___nl__bool__11){ goto label_4;}
#line 228
___nl__int__15 = string0ord(___nl__im__0);
#line 228
___nl__int__16 = 102;
#line 228
___nl__int__17 = ___nl__int__15 <= ___nl__int__16;
#line 228
___nl__bool__1 = ___nl__int__17;
#line 228
//clear ___nl__int__15;
#line 228
//clear ___nl__int__16;
#line 228
//clear ___nl__int__17;
#line 228
label_4:
;
#line 228
//clear ___nl__bool__11;
#line 228
label_1:
;
#line 228
//clear ___nl__bool__2;
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
return ___nl__bool__1;
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
#line 232
c_rt_lib0move(&___nl__im__2, ntokenizer_priv0get_char_oper());
#line 232
___nl__int__4 = 0;
#line 232
___nl__int__5 = 1;
#line 232
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 232
label_3:
;
#line 232
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 232
___nl__bool__7 = ___nl__int__8;
#line 232
if(___nl__bool__7){ goto label_1;}
#line 232
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 232
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 233
___nl__int_ptr__12 = &((*___ref___rec__0).len0field);
#line 233
___nl__int__11 = (*___nl__int_ptr__12);
#line 233
___nl__int_ptr__12 = NULL;
#line 233
___nl__int__15 = 1;
#line 233
___nl__int_ptr__17 = &((*___ref___rec__0).pos0field);
#line 233
___nl__int__16 = (*___nl__int_ptr__17);
#line 233
___nl__int_ptr__17 = NULL;
#line 233
___nl__int__14 = ___nl__int__15 + ___nl__int__16;
#line 233
//clear ___nl__int__15;
#line 233
//clear ___nl__int__16;
#line 233
___nl__int__18 = string0length(___nl__im__3);
#line 233
___nl__int__13 = ___nl__int__14 + ___nl__int__18;
#line 233
//clear ___nl__int__14;
#line 233
//clear ___nl__int__18;
#line 233
___nl__int__19 = ___nl__int__11 < ___nl__int__13;
#line 233
___nl__bool__10 = ___nl__int__19;
#line 233
//clear ___nl__int__11;
#line 233
//clear ___nl__int__13;
#line 233
//clear ___nl__int__19;
#line 233
___nl__bool__10 = !___nl__bool__10;
#line 233
if(___nl__bool__10){ goto label_5;}
#line 233
goto label_2;
#line 233
goto label_4;
#line 233
label_5:
;
#line 233
label_4:
;
#line 233
//clear ___nl__bool__10;
#line 234
___nl__im_ptr__23 = &((*___ref___rec__0).text0field);
#line 234
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__23));
#line 234
___nl__im_ptr__23 = NULL;
#line 234
___nl__int_ptr__25 = &((*___ref___rec__0).pos0field);
#line 234
___nl__int__24 = (*___nl__int_ptr__25);
#line 234
___nl__int_ptr__25 = NULL;
#line 234
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__24));
#line 234
___nl__int__27 = string0length(___nl__im__3);
#line 234
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__27));
#line 234
c_rt_lib0move(&___nl__im__21, c_std_lib0fast_substr(___nl__im__22, ___nl__im__26, ___nl__im__28));
#line 234
c_rt_lib0clear(&___nl__im__22);
#line 234
//clear ___nl__int__24;
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
//clear ___nl__int__27;
#line 234
c_rt_lib0clear(&___nl__im__28);
#line 234
___nl__bool__20 = c_rt_lib0eq(___nl__im__21, ___nl__im__3);
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 234
___nl__bool__20 = !___nl__bool__20;
#line 234
if(___nl__bool__20){ goto label_7;}
#line 237
c_rt_lib0move(&___nl__im__31, ntokenizer_priv0get_char(___ref___rec__0));
#line 237
___nl__bool__29 = string0is_letter(___nl__im__31);
#line 237
c_rt_lib0clear(&___nl__im__31);
#line 237
___nl__bool__30 = !___nl__bool__29;
#line 237
if(___nl__bool__30){ goto label_10;}
#line 238
___nl__im_ptr__34 = &((*___ref___rec__0).text0field);
#line 238
c_rt_lib0copy(&___nl__im__33, (*___nl__im_ptr__34));
#line 238
___nl__im_ptr__34 = NULL;
#line 238
___nl__int_ptr__37 = &((*___ref___rec__0).pos0field);
#line 238
___nl__int__36 = (*___nl__int_ptr__37);
#line 238
___nl__int_ptr__37 = NULL;
#line 238
___nl__int__38 = string0length(___nl__im__3);
#line 238
___nl__int__35 = ___nl__int__36 + ___nl__int__38;
#line 238
//clear ___nl__int__36;
#line 238
//clear ___nl__int__38;
#line 238
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__35));
#line 238
___nl__int__40 = 1;
#line 238
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__40));
#line 238
c_rt_lib0move(&___nl__im__32, c_std_lib0fast_substr(___nl__im__33, ___nl__im__39, ___nl__im__41));
#line 238
c_rt_lib0clear(&___nl__im__33);
#line 238
//clear ___nl__int__35;
#line 238
c_rt_lib0clear(&___nl__im__39);
#line 238
//clear ___nl__int__40;
#line 238
c_rt_lib0clear(&___nl__im__41);
#line 238
___nl__bool__29 = string0is_letter(___nl__im__32);
#line 238
c_rt_lib0clear(&___nl__im__32);
#line 238
label_10:
;
#line 238
//clear ___nl__bool__30;
#line 238
___nl__bool__29 = !___nl__bool__29;
#line 238
if(___nl__bool__29){ goto label_9;}
#line 235
goto label_2;
#line 235
goto label_8;
#line 235
label_9:
;
#line 235
label_8:
;
#line 235
//clear ___nl__bool__29;
#line 239
c_rt_lib0copy(___ref___im__1, ___nl__im__3);
#line 240
___nl__bool__42 = true;
#line 240
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__42));
#line 240
c_rt_lib0clear(&___nl__im__2);
#line 240
c_rt_lib0clear(&___nl__im__3);
#line 240
//clear ___nl__int__4;
#line 240
//clear ___nl__int__5;
#line 240
//clear ___nl__int__6;
#line 240
//clear ___nl__bool__7;
#line 240
//clear ___nl__int__8;
#line 240
c_rt_lib0clear(&___nl__im__9);
#line 240
//clear ___nl__bool__20;
#line 240
//clear ___nl__bool__42;
#line 240
return ___nl__im__43;
#line 241
goto label_6;
#line 241
label_7:
;
#line 241
label_6:
;
#line 241
//clear ___nl__bool__20;
#line 241
//clear ___nl__bool__42;
#line 241
c_rt_lib0clear(&___nl__im__43);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
label_2:
;
#line 242
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 242
goto label_3;
#line 242
label_1:
;
#line 243
___nl__bool__44 = false;
#line 243
c_rt_lib0move(&___nl__im__45, c_rt_lib0bool_to_nl_native(___nl__bool__44));
#line 243
c_rt_lib0clear(&___nl__im__2);
#line 243
c_rt_lib0clear(&___nl__im__3);
#line 243
//clear ___nl__int__4;
#line 243
//clear ___nl__int__5;
#line 243
//clear ___nl__int__6;
#line 243
//clear ___nl__bool__7;
#line 243
//clear ___nl__int__8;
#line 243
c_rt_lib0clear(&___nl__im__9);
#line 243
//clear ___nl__bool__44;
#line 243
return ___nl__im__45;
#line 243
c_rt_lib0clear(&___nl__im__2);
#line 243
c_rt_lib0clear(&___nl__im__3);
#line 243
//clear ___nl__int__4;
#line 243
//clear ___nl__int__5;
#line 243
//clear ___nl__int__6;
#line 243
//clear ___nl__bool__7;
#line 243
//clear ___nl__int__8;
#line 243
c_rt_lib0clear(&___nl__im__9);
#line 243
//clear ___nl__bool__44;
#line 243
c_rt_lib0clear(&___nl__im__45);
#line 243
return NULL;
}

ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT * ___nl__im_ptr__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT * ___nl__int_ptr__9 = NULL;
INT  ___nl__int__10 = 0;
INT * ___nl__int_ptr__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT * ___nl__int_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT * ___nl__int_ptr__22 = NULL;
INT  ___nl__int__23 = 0;
INT * ___nl__int_ptr__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
INT * ___nl__int_ptr__32 = NULL;
INT  ___nl__int__33 = 0;
INT * ___nl__int_ptr__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT * ___nl__im_ptr__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT * ___nl__im_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
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
ImmT * ___nl__im_ptr__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT * ___nl__im_ptr__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT * ___nl__im_ptr__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT * ___nl__im_ptr__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
INT  ___nl__int__74 = 0;
INT * ___nl__int_ptr__75 = NULL;
ImmT * ___nl__im_ptr__76 = NULL;
INT * ___nl__int_ptr__77 = NULL;
INT  ___nl__int__78 = 0;
bool  ___nl__bool__79 = false;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
bool  ___nl__bool__82 = false;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT * ___nl__im_ptr__85 = NULL;
INT * ___nl__int_ptr__86 = NULL;
INT  ___nl__int__87 = 0;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT * ___nl__im_ptr__91 = NULL;
ImmT * ___nl__im_ptr__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT * ___nl__im_ptr__94 = NULL;
ImmT  ___nl__im__95 = NULL;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT * ___nl__im_ptr__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT * ___nl__im_ptr__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT * ___nl__im_ptr__103 = NULL;
INT  ___nl__int__104 = 0;
INT * ___nl__int_ptr__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
INT  ___nl__int__108 = 0;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
ImmT * ___nl__im_ptr__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT * ___nl__im_ptr__113 = NULL;
INT * ___nl__int_ptr__114 = NULL;
INT  ___nl__int__115 = 0;
bool  ___nl__bool__116 = false;
bool  ___nl__bool__117 = false;
bool  ___nl__bool__118 = false;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT * ___nl__im_ptr__122 = NULL;
ImmT * ___nl__im_ptr__123 = NULL;
ImmT  ___nl__im__124 = NULL;
INT * ___nl__int_ptr__125 = NULL;
INT  ___nl__int__126 = 0;
bool  ___nl__bool__127 = false;
bool  ___nl__bool__128 = false;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT * ___nl__im_ptr__131 = NULL;
INT * ___nl__int_ptr__132 = NULL;
INT  ___nl__int__133 = 0;
bool  ___nl__bool__134 = false;
bool  ___nl__bool__135 = false;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT * ___nl__im_ptr__142 = NULL;
INT * ___nl__int_ptr__143 = NULL;
INT  ___nl__int__144 = 0;
bool  ___nl__bool__145 = false;
ImmT * ___nl__im_ptr__146 = NULL;
INT * ___nl__int_ptr__147 = NULL;
INT  ___nl__int__148 = 0;
INT  ___nl__int__149 = 0;
bool  ___nl__bool__150 = false;
INT  ___nl__int__151 = 0;
INT  ___nl__int__152 = 0;
INT  ___nl__int__153 = 0;
bool  ___nl__bool__154 = false;
bool  ___nl__bool__155 = false;
bool  ___nl__bool__156 = false;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
INT  ___nl__int__159 = 0;
INT  ___nl__int__160 = 0;
bool  ___nl__bool__161 = false;
bool  ___nl__bool__162 = false;
ImmT  ___nl__im__163 = NULL;
bool  ___nl__bool__164 = false;
INT  ___nl__int__165 = 0;
INT  ___nl__int__166 = 0;
ImmT * ___nl__im_ptr__167 = NULL;
INT * ___nl__int_ptr__168 = NULL;
INT  ___nl__int__169 = 0;
ImmT * ___nl__im_ptr__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT * ___nl__im_ptr__172 = NULL;
#line 247
___nl__im_ptr__1 = &((*___ref___rec__0).place_ws0field);
#line 247
___nl__int_ptr__4 = &((*___ref___rec__0).ln_nr0field);
#line 247
___nl__int__3 = (*___nl__int_ptr__4);
#line 247
___nl__int_ptr__4 = NULL;
#line 247
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 247
___nl__int_ptr__9 = &((*___ref___rec__0).pos0field);
#line 247
___nl__int__8 = (*___nl__int_ptr__9);
#line 247
___nl__int_ptr__9 = NULL;
#line 247
___nl__int_ptr__11 = &((*___ref___rec__0).ln_pos0field);
#line 247
___nl__int__10 = (*___nl__int_ptr__11);
#line 247
___nl__int_ptr__11 = NULL;
#line 247
___nl__int__7 = ___nl__int__8 - ___nl__int__10;
#line 247
//clear ___nl__int__8;
#line 247
//clear ___nl__int__10;
#line 247
___nl__int__12 = 1;
#line 247
___nl__int__6 = ___nl__int__7 + ___nl__int__12;
#line 247
//clear ___nl__int__7;
#line 247
//clear ___nl__int__12;
#line 247
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__6));
#line 247
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__5, ___get_global_const(952), ___nl__im__13));
#line 247
//clear ___nl__int__3;
#line 247
c_rt_lib0clear(&___nl__im__5);
#line 247
//clear ___nl__int__6;
#line 247
c_rt_lib0clear(&___nl__im__13);
#line 247
c_rt_lib0copy(___nl__im_ptr__1, ___nl__im__2);
#line 247
___nl__im_ptr__1 = NULL;
#line 247
c_rt_lib0clear(&___nl__im__2);
#line 248
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___rec__0));
#line 249
___nl__im_ptr__14 = &((*___ref___rec__0).place0field);
#line 249
___nl__int_ptr__17 = &((*___ref___rec__0).ln_nr0field);
#line 249
___nl__int__16 = (*___nl__int_ptr__17);
#line 249
___nl__int_ptr__17 = NULL;
#line 249
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 249
___nl__int_ptr__22 = &((*___ref___rec__0).pos0field);
#line 249
___nl__int__21 = (*___nl__int_ptr__22);
#line 249
___nl__int_ptr__22 = NULL;
#line 249
___nl__int_ptr__24 = &((*___ref___rec__0).ln_pos0field);
#line 249
___nl__int__23 = (*___nl__int_ptr__24);
#line 249
___nl__int_ptr__24 = NULL;
#line 249
___nl__int__20 = ___nl__int__21 - ___nl__int__23;
#line 249
//clear ___nl__int__21;
#line 249
//clear ___nl__int__23;
#line 249
___nl__int__25 = 1;
#line 249
___nl__int__19 = ___nl__int__20 + ___nl__int__25;
#line 249
//clear ___nl__int__20;
#line 249
//clear ___nl__int__25;
#line 249
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__19));
#line 249
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__18, ___get_global_const(952), ___nl__im__26));
#line 249
//clear ___nl__int__16;
#line 249
c_rt_lib0clear(&___nl__im__18);
#line 249
//clear ___nl__int__19;
#line 249
c_rt_lib0clear(&___nl__im__26);
#line 249
c_rt_lib0copy(___nl__im_ptr__14, ___nl__im__15);
#line 249
___nl__im_ptr__14 = NULL;
#line 249
c_rt_lib0clear(&___nl__im__15);
#line 250
___nl__im_ptr__29 = &((*___ref___rec__0).type0field);
#line 250
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 250
___nl__im_ptr__29 = NULL;
#line 250
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(125));
#line 250
c_rt_lib0clear(&___nl__im__28);
#line 250
___nl__bool__27 = !___nl__bool__27;
#line 250
if(___nl__bool__27){ goto label_2;}
#line 250
//clear ___nl__bool__27;
#line 250
return NULL;
#line 250
goto label_1;
#line 250
label_2:
;
#line 250
label_1:
;
#line 250
//clear ___nl__bool__27;
#line 251
___nl__int_ptr__32 = &((*___ref___rec__0).pos0field);
#line 251
___nl__int__31 = (*___nl__int_ptr__32);
#line 251
___nl__int_ptr__32 = NULL;
#line 251
___nl__int_ptr__34 = &((*___ref___rec__0).len0field);
#line 251
___nl__int__33 = (*___nl__int_ptr__34);
#line 251
___nl__int_ptr__34 = NULL;
#line 251
___nl__int__35 = ___nl__int__31 == ___nl__int__33;
#line 251
___nl__bool__30 = ___nl__int__35;
#line 251
//clear ___nl__int__31;
#line 251
//clear ___nl__int__33;
#line 251
//clear ___nl__int__35;
#line 251
___nl__bool__30 = !___nl__bool__30;
#line 251
if(___nl__bool__30){ goto label_4;}
#line 252
___nl__im_ptr__36 = &((*___ref___rec__0).type0field);
#line 252
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(939)));
#line 252
c_rt_lib0copy(___nl__im_ptr__36, ___nl__im__37);
#line 252
___nl__im_ptr__36 = NULL;
#line 252
c_rt_lib0clear(&___nl__im__37);
#line 253
___nl__im_ptr__38 = &((*___ref___rec__0).next_token0field);
#line 253
c_rt_lib0move(&___nl__im__39,___get_global_const(37));
#line 253
c_rt_lib0copy(___nl__im_ptr__38, ___nl__im__39);
#line 253
___nl__im_ptr__38 = NULL;
#line 253
c_rt_lib0clear(&___nl__im__39);
#line 254
//clear ___nl__bool__30;
#line 254
return NULL;
#line 255
goto label_3;
#line 255
label_4:
;
#line 255
label_3:
;
#line 255
//clear ___nl__bool__30;
#line 256
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 257
c_rt_lib0move(&___nl__im__42,___get_global_const(576));
#line 257
___nl__bool__41 = c_rt_lib0eq(___nl__im__40, ___nl__im__42);
#line 257
c_rt_lib0clear(&___nl__im__42);
#line 257
___nl__bool__41 = !___nl__bool__41;
#line 257
if(___nl__bool__41){ goto label_6;}
#line 258
___nl__im_ptr__43 = &((*___ref___rec__0).next_token0field);
#line 258
c_rt_lib0move(&___nl__im__44,___get_global_const(37));
#line 258
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__44);
#line 258
___nl__im_ptr__43 = NULL;
#line 258
c_rt_lib0clear(&___nl__im__44);
#line 259
___nl__im_ptr__45 = &((*___ref___rec__0).type0field);
#line 259
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 259
c_rt_lib0copy(___nl__im_ptr__45, ___nl__im__46);
#line 259
___nl__im_ptr__45 = NULL;
#line 259
c_rt_lib0clear(&___nl__im__46);
#line 260
label_8:
;
#line 261
___nl__int__47 = 1;
#line 261
___nl__int_ptr__48 = &((*___ref___rec__0).pos0field);
#line 261
(*___nl__int_ptr__48) = (*___nl__int_ptr__48) + ___nl__int__47;
#line 261
___nl__int_ptr__48 = NULL;
#line 261
//clear ___nl__int__47;
#line 262
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 263
c_rt_lib0move(&___nl__im__50,___get_global_const(576));
#line 263
___nl__bool__49 = c_rt_lib0eq(___nl__im__40, ___nl__im__50);
#line 263
c_rt_lib0clear(&___nl__im__50);
#line 263
___nl__bool__49 = !___nl__bool__49;
#line 263
if(___nl__bool__49){ goto label_10;}
#line 264
___nl__int__51 = 1;
#line 264
___nl__int_ptr__52 = &((*___ref___rec__0).pos0field);
#line 264
(*___nl__int_ptr__52) = (*___nl__int_ptr__52) + ___nl__int__51;
#line 264
___nl__int_ptr__52 = NULL;
#line 264
//clear ___nl__int__51;
#line 265
c_rt_lib0move(&___nl__im__54, ntokenizer_priv0get_char(___ref___rec__0));
#line 265
c_rt_lib0move(&___nl__im__55,___get_global_const(576));
#line 265
___nl__bool__53 = c_rt_lib0eq(___nl__im__54, ___nl__im__55);
#line 265
c_rt_lib0clear(&___nl__im__54);
#line 265
c_rt_lib0clear(&___nl__im__55);
#line 265
___nl__bool__53 = !___nl__bool__53;
#line 265
___nl__bool__53 = !___nl__bool__53;
#line 265
if(___nl__bool__53){ goto label_12;}
#line 265
c_rt_lib0clear(&___nl__im__40);
#line 265
//clear ___nl__bool__41;
#line 265
//clear ___nl__bool__49;
#line 265
//clear ___nl__bool__53;
#line 265
return NULL;
#line 265
goto label_11;
#line 265
label_12:
;
#line 265
label_11:
;
#line 265
//clear ___nl__bool__53;
#line 266
goto label_9;
#line 266
label_10:
;
#line 266
___nl__int__56 = string0ord(___nl__im__40);
#line 266
___nl__int__57 = 10;
#line 266
___nl__int__58 = ___nl__int__56 == ___nl__int__57;
#line 266
___nl__bool__49 = ___nl__int__58;
#line 266
//clear ___nl__int__56;
#line 266
//clear ___nl__int__57;
#line 266
//clear ___nl__int__58;
#line 266
___nl__bool__49 = !___nl__bool__49;
#line 266
if(___nl__bool__49){ goto label_13;}
#line 267
___nl__im_ptr__59 = &((*___ref___rec__0).type0field);
#line 267
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(1005)));
#line 267
c_rt_lib0copy(___nl__im_ptr__59, ___nl__im__60);
#line 267
___nl__im_ptr__59 = NULL;
#line 267
c_rt_lib0clear(&___nl__im__60);
#line 268
c_rt_lib0clear(&___nl__im__40);
#line 268
//clear ___nl__bool__41;
#line 268
//clear ___nl__bool__49;
#line 268
return NULL;
#line 269
goto label_9;
#line 269
label_13:
;
#line 269
label_9:
;
#line 269
//clear ___nl__bool__49;
#line 270
___nl__im_ptr__61 = &((*___ref___rec__0).next_token0field);
#line 270
c_rt_lib0move(___nl__im_ptr__61, c_rt_lib0concat_add((*___nl__im_ptr__61), ___nl__im__40));
#line 270
___nl__im_ptr__61 = NULL;
#line 260
goto label_8;
#line 260
label_7:
;
#line 272
goto label_5;
#line 272
label_6:
;
#line 272
c_rt_lib0move(&___nl__im__64, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 272
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__40, ___nl__im__64));
#line 272
c_rt_lib0clear(&___nl__im__64);
#line 272
c_rt_lib0move(&___nl__im__65,___get_global_const(293));
#line 272
___nl__bool__41 = c_rt_lib0eq(___nl__im__63, ___nl__im__65);
#line 272
c_rt_lib0clear(&___nl__im__63);
#line 272
c_rt_lib0clear(&___nl__im__65);
#line 272
if(___nl__bool__41){ goto label_15;}
#line 272
c_rt_lib0move(&___nl__im__67, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 272
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__40, ___nl__im__67));
#line 272
c_rt_lib0clear(&___nl__im__67);
#line 272
c_rt_lib0move(&___nl__im__68,___get_global_const(35));
#line 272
___nl__bool__41 = c_rt_lib0eq(___nl__im__66, ___nl__im__68);
#line 272
c_rt_lib0clear(&___nl__im__66);
#line 272
c_rt_lib0clear(&___nl__im__68);
#line 272
label_15:
;
#line 272
//clear ___nl__bool__62;
#line 272
___nl__bool__41 = !___nl__bool__41;
#line 272
if(___nl__bool__41){ goto label_14;}
#line 273
___nl__im_ptr__69 = &((*___ref___rec__0).type0field);
#line 273
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_const(1023)));
#line 273
c_rt_lib0copy(___nl__im_ptr__69, ___nl__im__70);
#line 273
___nl__im_ptr__69 = NULL;
#line 273
c_rt_lib0clear(&___nl__im__70);
#line 274
___nl__im_ptr__71 = &((*___ref___rec__0).next_token0field);
#line 274
c_rt_lib0move(&___nl__im__73, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 274
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__40, ___nl__im__73));
#line 274
c_rt_lib0clear(&___nl__im__73);
#line 274
c_rt_lib0copy(___nl__im_ptr__71, ___nl__im__72);
#line 274
___nl__im_ptr__71 = NULL;
#line 274
c_rt_lib0clear(&___nl__im__72);
#line 275
___nl__int__74 = 2;
#line 275
___nl__int_ptr__75 = &((*___ref___rec__0).pos0field);
#line 275
(*___nl__int_ptr__75) = (*___nl__int_ptr__75) + ___nl__int__74;
#line 275
___nl__int_ptr__75 = NULL;
#line 275
//clear ___nl__int__74;
#line 276
goto label_5;
#line 276
label_14:
;
#line 276
___nl__bool__41 = string0is_letter(___nl__im__40);
#line 276
___nl__bool__41 = !___nl__bool__41;
#line 276
if(___nl__bool__41){ goto label_16;}
#line 277
___nl__im_ptr__76 = &((*___ref___rec__0).next_token0field);
#line 277
c_rt_lib0copy(___nl__im_ptr__76, ___nl__im__40);
#line 277
___nl__im_ptr__76 = NULL;
#line 278
___nl__int_ptr__77 = &((*___ref___rec__0).pos0field);
#line 278
___nl__int__78 = 1;
#line 278
(*___nl__int_ptr__77) = (*___nl__int_ptr__77) + ___nl__int__78;
#line 278
___nl__int_ptr__77 = NULL;
#line 278
//clear ___nl__int__78;
#line 279
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 280
label_18:
;
#line 280
c_rt_lib0move(&___nl__im__81,___get_global_const(37));
#line 280
___nl__bool__79 = c_rt_lib0ne(___nl__im__40, ___nl__im__81);
#line 280
c_rt_lib0clear(&___nl__im__81);
#line 280
___nl__bool__80 = !___nl__bool__79;
#line 280
if(___nl__bool__80){ goto label_19;}
#line 280
___nl__bool__79 = string0is_letter(___nl__im__40);
#line 280
if(___nl__bool__79){ goto label_21;}
#line 280
___nl__bool__79 = string0is_digit(___nl__im__40);
#line 280
label_21:
;
#line 280
//clear ___nl__bool__83;
#line 280
if(___nl__bool__79){ goto label_20;}
#line 280
c_rt_lib0move(&___nl__im__84,___get_global_const(111));
#line 280
___nl__bool__79 = c_rt_lib0eq(___nl__im__40, ___nl__im__84);
#line 280
c_rt_lib0clear(&___nl__im__84);
#line 280
label_20:
;
#line 280
//clear ___nl__bool__82;
#line 280
label_19:
;
#line 280
//clear ___nl__bool__80;
#line 280
___nl__bool__79 = !___nl__bool__79;
#line 280
if(___nl__bool__79){ goto label_17;}
#line 281
___nl__im_ptr__85 = &((*___ref___rec__0).next_token0field);
#line 281
c_rt_lib0move(___nl__im_ptr__85, c_rt_lib0concat_add((*___nl__im_ptr__85), ___nl__im__40));
#line 281
___nl__im_ptr__85 = NULL;
#line 282
___nl__int_ptr__86 = &((*___ref___rec__0).pos0field);
#line 282
___nl__int__87 = 1;
#line 282
(*___nl__int_ptr__86) = (*___nl__int_ptr__86) + ___nl__int__87;
#line 282
___nl__int_ptr__86 = NULL;
#line 282
//clear ___nl__int__87;
#line 283
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 284
goto label_18;
#line 284
label_17:
;
#line 285
c_rt_lib0move(&___nl__im__89, ntokenizer_priv0get_lett_oper());
#line 285
___nl__im_ptr__91 = &((*___ref___rec__0).next_token0field);
#line 285
c_rt_lib0copy(&___nl__im__90, (*___nl__im_ptr__91));
#line 285
___nl__im_ptr__91 = NULL;
#line 285
___nl__bool__88 = hash0has_key(___nl__im__89, ___nl__im__90);
#line 285
c_rt_lib0clear(&___nl__im__89);
#line 285
c_rt_lib0clear(&___nl__im__90);
#line 285
___nl__bool__88 = !___nl__bool__88;
#line 285
if(___nl__bool__88){ goto label_23;}
#line 286
___nl__im_ptr__92 = &((*___ref___rec__0).type0field);
#line 286
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_none(___get_global_const(1006)));
#line 286
c_rt_lib0copy(___nl__im_ptr__92, ___nl__im__93);
#line 286
___nl__im_ptr__92 = NULL;
#line 286
c_rt_lib0clear(&___nl__im__93);
#line 287
goto label_22;
#line 287
label_23:
;
#line 288
___nl__im_ptr__94 = &((*___ref___rec__0).type0field);
#line 288
c_rt_lib0move(&___nl__im__97, ntokenizer_priv0get_keywords());
#line 288
___nl__im_ptr__99 = &((*___ref___rec__0).next_token0field);
#line 288
c_rt_lib0copy(&___nl__im__98, (*___nl__im_ptr__99));
#line 288
___nl__im_ptr__99 = NULL;
#line 288
___nl__bool__96 = hash0has_key(___nl__im__97, ___nl__im__98);
#line 288
c_rt_lib0clear(&___nl__im__97);
#line 288
c_rt_lib0clear(&___nl__im__98);
#line 288
if(___nl__bool__96){ goto label_25;}
#line 288
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_const(992)));
#line 288
goto label_24;
#line 288
label_25:
;
#line 288
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_const(1008)));
#line 288
label_24:
;
#line 288
//clear ___nl__bool__96;
#line 288
c_rt_lib0copy(___nl__im_ptr__94, ___nl__im__95);
#line 288
___nl__im_ptr__94 = NULL;
#line 288
c_rt_lib0clear(&___nl__im__95);
#line 289
goto label_22;
#line 289
label_22:
;
#line 289
//clear ___nl__bool__88;
#line 290
goto label_5;
#line 290
label_16:
;
#line 290
c_rt_lib0move(&___nl__im__100, ntokenizer_priv0try_get_operator(___ref___rec__0, &___nl__im__40));
#line 290
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__100);
#line 290
c_rt_lib0clear(&___nl__im__100);
#line 290
___nl__bool__41 = !___nl__bool__41;
#line 290
if(___nl__bool__41){ goto label_26;}
#line 291
___nl__im_ptr__101 = &((*___ref___rec__0).type0field);
#line 291
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_none(___get_global_const(1006)));
#line 291
c_rt_lib0copy(___nl__im_ptr__101, ___nl__im__102);
#line 291
___nl__im_ptr__101 = NULL;
#line 291
c_rt_lib0clear(&___nl__im__102);
#line 292
___nl__im_ptr__103 = &((*___ref___rec__0).next_token0field);
#line 292
c_rt_lib0copy(___nl__im_ptr__103, ___nl__im__40);
#line 292
___nl__im_ptr__103 = NULL;
#line 293
___nl__int__104 = string0length(___nl__im__40);
#line 293
___nl__int_ptr__105 = &((*___ref___rec__0).pos0field);
#line 293
(*___nl__int_ptr__105) = (*___nl__int_ptr__105) + ___nl__int__104;
#line 293
___nl__int_ptr__105 = NULL;
#line 293
//clear ___nl__int__104;
#line 294
goto label_5;
#line 294
label_26:
;
#line 294
c_rt_lib0move(&___nl__im__107,___get_global_const(1028));
#line 294
c_rt_lib0move(&___nl__im__106, string0index2(___nl__im__107, ___nl__im__40));
#line 294
c_rt_lib0clear(&___nl__im__107);
#line 294
___nl__int__108 = 0;
#line 294
___nl__int__109 = getIntFromImm(___nl__im__106);
#line 294
___nl__int__110 = ___nl__int__109 >= ___nl__int__108;
#line 294
___nl__bool__41 = ___nl__int__110;
#line 294
c_rt_lib0clear(&___nl__im__106);
#line 294
//clear ___nl__int__108;
#line 294
//clear ___nl__int__109;
#line 294
//clear ___nl__int__110;
#line 294
___nl__bool__41 = !___nl__bool__41;
#line 294
if(___nl__bool__41){ goto label_27;}
#line 295
___nl__im_ptr__111 = &((*___ref___rec__0).type0field);
#line 295
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_none(___get_global_const(1023)));
#line 295
c_rt_lib0copy(___nl__im_ptr__111, ___nl__im__112);
#line 295
___nl__im_ptr__111 = NULL;
#line 295
c_rt_lib0clear(&___nl__im__112);
#line 296
___nl__im_ptr__113 = &((*___ref___rec__0).next_token0field);
#line 296
c_rt_lib0copy(___nl__im_ptr__113, ___nl__im__40);
#line 296
___nl__im_ptr__113 = NULL;
#line 297
___nl__int_ptr__114 = &((*___ref___rec__0).pos0field);
#line 297
___nl__int__115 = 1;
#line 297
(*___nl__int_ptr__114) = (*___nl__int_ptr__114) + ___nl__int__115;
#line 297
___nl__int_ptr__114 = NULL;
#line 297
//clear ___nl__int__115;
#line 298
goto label_5;
#line 298
label_27:
;
#line 298
___nl__bool__41 = string0is_digit(___nl__im__40);
#line 298
if(___nl__bool__41){ goto label_29;}
#line 298
c_rt_lib0move(&___nl__im__119,___get_global_const(339));
#line 298
___nl__bool__41 = c_rt_lib0eq(___nl__im__40, ___nl__im__119);
#line 298
c_rt_lib0clear(&___nl__im__119);
#line 298
if(___nl__bool__41){ goto label_31;}
#line 298
c_rt_lib0move(&___nl__im__120,___get_global_const(341));
#line 298
___nl__bool__41 = c_rt_lib0eq(___nl__im__40, ___nl__im__120);
#line 298
c_rt_lib0clear(&___nl__im__120);
#line 298
label_31:
;
#line 298
//clear ___nl__bool__118;
#line 298
___nl__bool__117 = !___nl__bool__41;
#line 298
if(___nl__bool__117){ goto label_30;}
#line 298
c_rt_lib0move(&___nl__im__121, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 298
___nl__bool__41 = string0is_digit(___nl__im__121);
#line 298
c_rt_lib0clear(&___nl__im__121);
#line 298
label_30:
;
#line 298
//clear ___nl__bool__117;
#line 298
label_29:
;
#line 298
//clear ___nl__bool__116;
#line 298
___nl__bool__41 = !___nl__bool__41;
#line 298
if(___nl__bool__41){ goto label_28;}
#line 299
___nl__im_ptr__122 = &((*___ref___rec__0).next_token0field);
#line 299
c_rt_lib0copy(___nl__im_ptr__122, ___nl__im__40);
#line 299
___nl__im_ptr__122 = NULL;
#line 300
___nl__im_ptr__123 = &((*___ref___rec__0).type0field);
#line 300
c_rt_lib0move(&___nl__im__124, c_rt_lib0ov_mk_none(___get_global_const(1003)));
#line 300
c_rt_lib0copy(___nl__im_ptr__123, ___nl__im__124);
#line 300
___nl__im_ptr__123 = NULL;
#line 300
c_rt_lib0clear(&___nl__im__124);
#line 301
___nl__int_ptr__125 = &((*___ref___rec__0).pos0field);
#line 301
___nl__int__126 = 1;
#line 301
(*___nl__int_ptr__125) = (*___nl__int_ptr__125) + ___nl__int__126;
#line 301
___nl__int_ptr__125 = NULL;
#line 301
//clear ___nl__int__126;
#line 302
c_rt_lib0move(&___nl__im__129,___get_global_const(339));
#line 302
___nl__bool__127 = c_rt_lib0eq(___nl__im__40, ___nl__im__129);
#line 302
c_rt_lib0clear(&___nl__im__129);
#line 302
if(___nl__bool__127){ goto label_34;}
#line 302
c_rt_lib0move(&___nl__im__130,___get_global_const(341));
#line 302
___nl__bool__127 = c_rt_lib0eq(___nl__im__40, ___nl__im__130);
#line 302
c_rt_lib0clear(&___nl__im__130);
#line 302
label_34:
;
#line 302
//clear ___nl__bool__128;
#line 302
___nl__bool__127 = !___nl__bool__127;
#line 302
if(___nl__bool__127){ goto label_33;}
#line 303
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 304
___nl__im_ptr__131 = &((*___ref___rec__0).next_token0field);
#line 304
c_rt_lib0move(___nl__im_ptr__131, c_rt_lib0concat_add((*___nl__im_ptr__131), ___nl__im__40));
#line 304
___nl__im_ptr__131 = NULL;
#line 305
___nl__int_ptr__132 = &((*___ref___rec__0).pos0field);
#line 305
___nl__int__133 = 1;
#line 305
(*___nl__int_ptr__132) = (*___nl__int_ptr__132) + ___nl__int__133;
#line 305
___nl__int_ptr__132 = NULL;
#line 305
//clear ___nl__int__133;
#line 306
goto label_32;
#line 306
label_33:
;
#line 306
label_32:
;
#line 306
//clear ___nl__bool__127;
#line 307
c_rt_lib0move(&___nl__im__137,___get_global_const(21));
#line 307
___nl__bool__134 = c_rt_lib0eq(___nl__im__40, ___nl__im__137);
#line 307
c_rt_lib0clear(&___nl__im__137);
#line 307
___nl__bool__136 = !___nl__bool__134;
#line 307
if(___nl__bool__136){ goto label_38;}
#line 307
c_rt_lib0move(&___nl__im__138, ntokenizer_priv0get_char(___ref___rec__0));
#line 307
c_rt_lib0move(&___nl__im__139,___get_global_const(1029));
#line 307
___nl__bool__134 = c_rt_lib0eq(___nl__im__138, ___nl__im__139);
#line 307
c_rt_lib0clear(&___nl__im__138);
#line 307
c_rt_lib0clear(&___nl__im__139);
#line 307
label_38:
;
#line 307
//clear ___nl__bool__136;
#line 307
___nl__bool__135 = !___nl__bool__134;
#line 307
if(___nl__bool__135){ goto label_37;}
#line 307
c_rt_lib0move(&___nl__im__140, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 307
___nl__bool__134 = ntokenizer_priv0is_hex_number(___nl__im__140);
#line 307
c_rt_lib0clear(&___nl__im__140);
#line 307
label_37:
;
#line 307
//clear ___nl__bool__135;
#line 307
___nl__bool__134 = !___nl__bool__134;
#line 307
if(___nl__bool__134){ goto label_36;}
#line 308
c_rt_lib0move(&___nl__im__141, ntokenizer_priv0get_char(___ref___rec__0));
#line 308
___nl__im_ptr__142 = &((*___ref___rec__0).next_token0field);
#line 308
c_rt_lib0move(___nl__im_ptr__142, c_rt_lib0concat_add((*___nl__im_ptr__142), ___nl__im__141));
#line 308
___nl__im_ptr__142 = NULL;
#line 308
c_rt_lib0clear(&___nl__im__141);
#line 309
___nl__int_ptr__143 = &((*___ref___rec__0).pos0field);
#line 309
___nl__int__144 = 1;
#line 309
(*___nl__int_ptr__143) = (*___nl__int_ptr__143) + ___nl__int__144;
#line 309
___nl__int_ptr__143 = NULL;
#line 309
//clear ___nl__int__144;
#line 310
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 311
label_40:
;
#line 311
___nl__bool__145 = ntokenizer_priv0is_hex_number(___nl__im__40);
#line 311
___nl__bool__145 = !___nl__bool__145;
#line 311
if(___nl__bool__145){ goto label_39;}
#line 312
___nl__im_ptr__146 = &((*___ref___rec__0).next_token0field);
#line 312
c_rt_lib0move(___nl__im_ptr__146, c_rt_lib0concat_add((*___nl__im_ptr__146), ___nl__im__40));
#line 312
___nl__im_ptr__146 = NULL;
#line 313
___nl__int_ptr__147 = &((*___ref___rec__0).pos0field);
#line 313
___nl__int__148 = 1;
#line 313
(*___nl__int_ptr__147) = (*___nl__int_ptr__147) + ___nl__int__148;
#line 313
___nl__int_ptr__147 = NULL;
#line 313
//clear ___nl__int__148;
#line 314
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 315
goto label_40;
#line 315
label_39:
;
#line 316
goto label_35;
#line 316
label_36:
;
#line 317
___nl__int__149 = 0;
#line 318
label_42:
;
#line 319
c_rt_lib0move(&___nl__im__40, ntokenizer_priv0get_char(___ref___rec__0));
#line 320
___nl__int__151 = 1;
#line 320
___nl__int__152 = ___nl__int__149 == ___nl__int__151;
#line 320
___nl__bool__150 = ___nl__int__152;
#line 320
//clear ___nl__int__151;
#line 320
//clear ___nl__int__152;
#line 320
___nl__bool__150 = !___nl__bool__150;
#line 320
if(___nl__bool__150){ goto label_44;}
#line 320
___nl__int__153 = 1;
#line 320
___nl__int__149 = ___nl__int__149 + ___nl__int__153;
#line 320
//clear ___nl__int__153;
#line 320
goto label_43;
#line 320
label_44:
;
#line 320
label_43:
;
#line 320
//clear ___nl__bool__150;
#line 321
c_rt_lib0move(&___nl__im__157,___get_global_const(114));
#line 321
___nl__bool__154 = c_rt_lib0eq(___nl__im__40, ___nl__im__157);
#line 321
c_rt_lib0clear(&___nl__im__157);
#line 321
___nl__bool__156 = !___nl__bool__154;
#line 321
if(___nl__bool__156){ goto label_48;}
#line 321
c_rt_lib0move(&___nl__im__158, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 321
___nl__bool__154 = string0is_digit(___nl__im__158);
#line 321
c_rt_lib0clear(&___nl__im__158);
#line 321
label_48:
;
#line 321
//clear ___nl__bool__156;
#line 321
___nl__bool__155 = !___nl__bool__154;
#line 321
if(___nl__bool__155){ goto label_47;}
#line 321
___nl__int__159 = 0;
#line 321
___nl__int__160 = ___nl__int__149 == ___nl__int__159;
#line 321
___nl__bool__154 = ___nl__int__160;
#line 321
//clear ___nl__int__159;
#line 321
//clear ___nl__int__160;
#line 321
label_47:
;
#line 321
//clear ___nl__bool__155;
#line 321
___nl__bool__154 = !___nl__bool__154;
#line 321
if(___nl__bool__154){ goto label_46;}
#line 321
___nl__int__149 = 1;
#line 321
goto label_45;
#line 321
label_46:
;
#line 321
label_45:
;
#line 321
//clear ___nl__bool__154;
#line 322
c_rt_lib0move(&___nl__im__163,___get_global_const(37));
#line 322
___nl__bool__161 = c_rt_lib0eq(___nl__im__40, ___nl__im__163);
#line 322
c_rt_lib0clear(&___nl__im__163);
#line 322
if(___nl__bool__161){ goto label_51;}
#line 322
___nl__bool__161 = string0is_digit(___nl__im__40);
#line 322
if(___nl__bool__161){ goto label_52;}
#line 322
___nl__int__165 = 1;
#line 322
___nl__int__166 = ___nl__int__149 == ___nl__int__165;
#line 322
___nl__bool__161 = ___nl__int__166;
#line 322
//clear ___nl__int__165;
#line 322
//clear ___nl__int__166;
#line 322
label_52:
;
#line 322
//clear ___nl__bool__164;
#line 322
___nl__bool__161 = !___nl__bool__161;
#line 322
label_51:
;
#line 322
//clear ___nl__bool__162;
#line 322
___nl__bool__161 = !___nl__bool__161;
#line 322
if(___nl__bool__161){ goto label_50;}
#line 322
goto label_41;
#line 322
goto label_49;
#line 322
label_50:
;
#line 322
label_49:
;
#line 322
//clear ___nl__bool__161;
#line 323
___nl__im_ptr__167 = &((*___ref___rec__0).next_token0field);
#line 323
c_rt_lib0move(___nl__im_ptr__167, c_rt_lib0concat_add((*___nl__im_ptr__167), ___nl__im__40));
#line 323
___nl__im_ptr__167 = NULL;
#line 324
___nl__int_ptr__168 = &((*___ref___rec__0).pos0field);
#line 324
___nl__int__169 = 1;
#line 324
(*___nl__int_ptr__168) = (*___nl__int_ptr__168) + ___nl__int__169;
#line 324
___nl__int_ptr__168 = NULL;
#line 324
//clear ___nl__int__169;
#line 318
goto label_42;
#line 318
label_41:
;
#line 326
goto label_35;
#line 326
label_35:
;
#line 326
//clear ___nl__bool__134;
#line 326
//clear ___nl__bool__145;
#line 326
//clear ___nl__int__149;
#line 327
goto label_5;
#line 327
label_28:
;
#line 328
___nl__im_ptr__170 = &((*___ref___rec__0).type0field);
#line 328
c_rt_lib0move(&___nl__im__171, c_rt_lib0ov_mk_none(___get_global_const(125)));
#line 328
c_rt_lib0copy(___nl__im_ptr__170, ___nl__im__171);
#line 328
___nl__im_ptr__170 = NULL;
#line 328
c_rt_lib0clear(&___nl__im__171);
#line 329
___nl__im_ptr__172 = &((*___ref___rec__0).next_token0field);
#line 329
c_rt_lib0copy(___nl__im_ptr__172, ___nl__im__40);
#line 329
___nl__im_ptr__172 = NULL;
#line 330
goto label_5;
#line 330
label_5:
;
#line 330
//clear ___nl__bool__41;
#line 330
//clear ___nl__bool__79;
#line 330
c_rt_lib0clear(&___nl__im__40);
#line 330
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(282), ___nl__im__4, ___get_global_const(1016), ___nl__im__5, ___get_global_const(1017), ___nl__im__7, ___get_global_const(283), ___nl__im__11, ___get_global_const(95), ___nl__im__12, ___get_global_const(1020), ___nl__im__14, ___get_global_const(1019), ___nl__im__18, ___get_global_const(1022), ___nl__im__19, ___get_global_const(1018), ___nl__im__23, ___get_global_const(1021), ___nl__im__24));
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
