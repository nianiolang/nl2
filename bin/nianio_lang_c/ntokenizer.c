
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

void ntokenizer0anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0anon_type00im0next_comment0RE0clean(anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0anon_type00im0next_comment0RE rec) {
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
c_rt_lib0delete(rec.next_comment0field);
}
void ntokenizer0anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0anon_type00im0next_comment0RE0free(anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0anon_type00im0next_comment0RE *rec) {
ntokenizer0anon_type00RBanon_type00int0pos0anon_type00im0text0anon_type00im0next_token0anon_type00int0len0anon_type00refntokenizer0token_t0type0type0anon_type00im0place0anon_type00int0ln_pos0anon_type00im0last_comment0anon_type00int0ln_nr0anon_type00im0place_ws0anon_type00im0next_comment0RE0clean(*rec);
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
c_rt_lib0delete(rec.next_comment0field);
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
return ntokenizer_priv0__const__sing(0);
}
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 20
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 21
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 22
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 23
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 24
c_rt_lib0move(&___nl__im__7,___get_global_string_const(36));
#line 25
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 26
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 27
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
#line 28
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 29
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 30
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 31
c_rt_lib0move(&___nl__im__14,___get_global_string_const(36));
#line 32
c_rt_lib0move(&___nl__im__15,___get_global_string_const(36));
#line 33
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 34
c_rt_lib0move(&___nl__im__17,___get_global_string_const(36));
#line 35
c_rt_lib0move(&___nl__im__18,___get_global_string_const(36));
#line 36
c_rt_lib0move(&___nl__im__19,___get_global_string_const(36));
#line 37
c_rt_lib0move(&___nl__im__20,___get_global_string_const(36));
#line 38
c_rt_lib0move(&___nl__im__21,___get_global_string_const(36));
#line 39
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 40
c_rt_lib0move(&___nl__im__23,___get_global_string_const(36));
#line 41
c_rt_lib0move(&___nl__im__24,___get_global_string_const(36));
#line 42
c_rt_lib0move(&___nl__im__25,___get_global_string_const(36));
#line 42
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(24, ___get_global_string_const(1198), ___nl__im__2, ___get_global_string_const(1079), ___nl__im__3, ___get_global_string_const(1080), ___nl__im__4, ___get_global_string_const(1078), ___nl__im__5, ___get_global_string_const(1081), ___nl__im__6, ___get_global_string_const(174), ___nl__im__7, ___get_global_string_const(1082), ___nl__im__8, ___get_global_string_const(1077), ___nl__im__9, ___get_global_string_const(1092), ___nl__im__10, ___get_global_string_const(1093), ___nl__im__11, ___get_global_string_const(517), ___nl__im__12, ___get_global_string_const(737), ___nl__im__13, ___get_global_string_const(39), ___nl__im__14, ___get_global_string_const(1087), ___nl__im__15, ___get_global_string_const(1221), ___nl__im__16, ___get_global_string_const(1193), ___nl__im__17, ___get_global_string_const(583), ___nl__im__18, ___get_global_string_const(582), ___nl__im__19, ___get_global_string_const(1086), ___nl__im__20, ___get_global_string_const(1085), ___nl__im__21, ___get_global_string_const(266), ___nl__im__22, ___get_global_string_const(1089), ___nl__im__23, ___get_global_string_const(190), ___nl__im__24, ___get_global_string_const(267), ___nl__im__25));
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
return ntokenizer_priv0__const__sing(1);
}
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
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
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
label_17:
;
#line 48
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 48
if(___nl__bool__12){ goto label_57;}
#line 48
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__4, ___nl__int__9));
#line 48
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 49
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__8));
#line 49
label_23:
;
#line 49
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 49
if(___nl__bool__15){ goto label_53;}
#line 49
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 49
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__8, ___nl__im__14));
#line 50
___nl__int__20 = 0;
#line 50
___nl__int__21 = 1;
#line 50
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__14, ___nl__int__20, ___nl__int__21));
#line 50
//clear ___nl__int__20;
#line 50
//clear ___nl__int__21;
#line 50
___nl__bool__18 = string0is_letter(___nl__im__19);
#line 50
c_rt_lib0clear(&___nl__im__19);
#line 50
___nl__bool__18 = !___nl__bool__18;
#line 50
___nl__bool__18 = !___nl__bool__18;
#line 50
if(___nl__bool__18){ goto label_49;}
#line 50
___nl__int__24 = string0length(___nl__im__14);
#line 50
___nl__int__25 = 1;
#line 50
___nl__int__23 = ___nl__int__24 - ___nl__int__25;
#line 50
//clear ___nl__int__24;
#line 50
//clear ___nl__int__25;
#line 50
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__23));
#line 50
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__14));
#line 50
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__23, ___nl__im__22));
#line 50
c_rt_lib0clear(&___nl__im__22);
#line 50
//clear ___nl__int__23;
#line 50
goto label_49;
#line 50
label_49:
;
#line 50
//clear ___nl__bool__18;
#line 51
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 51
goto label_23;
#line 51
label_53:
;
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 52
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 52
goto label_17;
#line 52
label_57:
;
#line 53
___nl__int__27 = 2;
#line 53
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__27));
#line 53
___nl__int__29 = 1;
#line 53
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__0, ___nl__int__29));
#line 53
//clear ___nl__int__29;
#line 53
c_rt_lib0delete(array0append(&___nl__im__26, ___nl__im__28));
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__27, ___nl__im__26));
#line 53
c_rt_lib0clear(&___nl__im__26);
#line 53
//clear ___nl__int__27;
#line 53
c_rt_lib0clear(&___nl__im__28);
#line 54
___nl__int__31 = 2;
#line 54
c_rt_lib0move(&___nl__im__30, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__31));
#line 54
___nl__int__33 = 0;
#line 54
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__0, ___nl__int__33));
#line 54
//clear ___nl__int__33;
#line 54
c_rt_lib0delete(array0append(&___nl__im__30, ___nl__im__32));
#line 54
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__31, ___nl__im__30));
#line 54
c_rt_lib0clear(&___nl__im__30);
#line 54
//clear ___nl__int__31;
#line 54
c_rt_lib0clear(&___nl__im__32);
#line 55
___nl__int__36 = 2;
#line 55
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__0, ___nl__int__36));
#line 55
//clear ___nl__int__36;
#line 55
c_rt_lib0move(&___nl__im__34, singleton0sigleton_do_not_use_without_approval(___nl__im__35));
#line 55
c_rt_lib0clear(&___nl__im__35);
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
c_rt_lib0clear(&___nl__im__13);
#line 55
c_rt_lib0clear(&___nl__im__14);
#line 55
//clear ___nl__bool__15;
#line 55
c_rt_lib0clear(&___nl__im__16);
#line 55
c_rt_lib0clear(&___nl__im__17);
#line 55
return ___nl__im__34;
return NULL;

}

ImmT ntokenizer_priv0get_lett_oper(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(2);
}
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
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
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
label_11:
;
#line 60
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 60
if(___nl__bool__9){ goto label_43;}
#line 60
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 60
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 61
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__5));
#line 61
label_17:
;
#line 61
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 61
if(___nl__bool__12){ goto label_39;}
#line 61
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 61
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__11));
#line 62
___nl__int__17 = 0;
#line 62
___nl__int__18 = 1;
#line 62
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__11, ___nl__int__17, ___nl__int__18));
#line 62
//clear ___nl__int__17;
#line 62
//clear ___nl__int__18;
#line 62
___nl__bool__15 = string0is_letter(___nl__im__16);
#line 62
c_rt_lib0clear(&___nl__im__16);
#line 62
___nl__bool__15 = !___nl__bool__15;
#line 62
if(___nl__bool__15){ goto label_35;}
#line 62
c_rt_lib0move(&___nl__im__19,___get_global_string_const(36));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__11, ___nl__im__19));
#line 62
c_rt_lib0clear(&___nl__im__19);
#line 62
goto label_35;
#line 62
label_35:
;
#line 62
//clear ___nl__bool__15;
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 63
goto label_17;
#line 63
label_39:
;
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 64
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 64
goto label_11;
#line 64
label_43:
;
#line 65
c_rt_lib0move(&___nl__im__20, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
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
c_rt_lib0clear(&___nl__im__10);
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
//clear ___nl__bool__12;
#line 65
c_rt_lib0clear(&___nl__im__13);
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
return ___nl__im__20;
return NULL;

}

ImmT  ntokenizer0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0state_t");
ImmT  res = ntokenizer0state_t();
return res;
}
ImmT ntokenizer0state_t(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(3);
}
ImmT ntokenizer0state_t0cal() {
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_string_const(1194), ___get_global_string_const(1222)));
#line 73
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(168), ___nl__im__12, ___get_global_string_const(1159), ___nl__im__13));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(168), ___nl__im__16, ___get_global_string_const(1159), ___nl__im__17));
#line 78
c_rt_lib0clear(&___nl__im__16);
#line 78
c_rt_lib0clear(&___nl__im__17);
#line 78
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 78
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 79
c_rt_lib0move(&___nl__im__18, ptd0arr(___nl__im__19));
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 80
c_rt_lib0move(&___nl__im__21, ptd0string());
#line 80
c_rt_lib0move(&___nl__im__20, ptd0arr(___nl__im__21));
#line 80
c_rt_lib0clear(&___nl__im__21);
#line 80
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(11, ___get_global_string_const(1223), ___nl__im__2, ___get_global_string_const(299), ___nl__im__4, ___get_global_string_const(300), ___nl__im__5, ___get_global_string_const(110), ___nl__im__6, ___get_global_string_const(1224), ___nl__im__7, ___get_global_string_const(1225), ___nl__im__8, ___get_global_string_const(1226), ___nl__im__9, ___get_global_string_const(1227), ___nl__im__10, ___get_global_string_const(1228), ___nl__im__14, ___get_global_string_const(1229), ___nl__im__18, ___get_global_string_const(1230), ___nl__im__20));
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
c_rt_lib0clear(&___nl__im__20);
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
return NULL;

}

ImmT  ntokenizer0token_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0token_t");
ImmT  res = ntokenizer0token_t();
return res;
}
ImmT ntokenizer0token_t(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(4);
}
ImmT ntokenizer0token_t0cal() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_string_const(746), ___nl__im__2, ___get_global_string_const(1231), ___nl__im__3, ___get_global_string_const(1213), ___nl__im__4, ___get_global_string_const(1210), ___nl__im__5, ___get_global_string_const(1215), ___nl__im__6, ___get_global_string_const(1199), ___nl__im__7, ___get_global_string_const(1212), ___nl__im__8, ___get_global_string_const(420), ___nl__im__9, ___get_global_string_const(137), ___nl__im__10));
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
return NULL;

}

ImmT  ntokenizer0init(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 99
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 100
___nl__im_ptr__2 = &((*___ref___rec__0).next_comment0field);
#line 100
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 100
___nl__im_ptr__2 = NULL;
#line 100
___nl__im_ptr__3 = &((*___ref___rec__0).last_comment0field);
#line 100
c_rt_lib0copy(___nl__im_ptr__3, ___nl__im__1);
#line 100
___nl__im_ptr__3 = NULL;
#line 100
c_rt_lib0clear(&___nl__im__1);
#line 101
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 101
___nl__im_ptr__5 = &((*___ref___rec__0).next_comment0field);
#line 101
c_rt_lib0copy(___nl__im_ptr__5, ___nl__im__4);
#line 101
___nl__im_ptr__5 = NULL;
#line 101
c_rt_lib0clear(&___nl__im__4);
#line 101
return NULL;

}

ImmT  ntokenizer0pop_last_comment(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 105
___nl__im_ptr__2 = &((*___ref___rec__0).last_comment0field);
#line 105
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 105
___nl__im_ptr__2 = NULL;
#line 106
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 106
___nl__im_ptr__4 = &((*___ref___rec__0).last_comment0field);
#line 106
c_rt_lib0copy(___nl__im_ptr__4, ___nl__im__3);
#line 106
___nl__im_ptr__4 = NULL;
#line 106
c_rt_lib0clear(&___nl__im__3);
#line 107
return ___nl__im__1;
return NULL;

}

ImmT  ntokenizer0get_next_comment(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 111
___nl__im_ptr__2 = &((*___ref___rec__0).next_comment0field);
#line 111
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 111
___nl__im_ptr__2 = NULL;
#line 111
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 115
___nl__im_ptr__4 = &((*___ref___rec__0).text0field);
#line 115
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 115
___nl__im_ptr__4 = NULL;
#line 115
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 115
___nl__int__5 = (*___nl__int_ptr__6);
#line 115
___nl__int_ptr__6 = NULL;
#line 115
___nl__int__7 = 1;
#line 115
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__int__5, ___nl__int__7));
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
//clear ___nl__int__5;
#line 115
//clear ___nl__int__7;
#line 115
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 115
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
c_rt_lib0clear(&___nl__im__8);
#line 115
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
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT * ___nl__int_ptr__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
#line 119
___nl__int_ptr__3 = &((*___ref___rec__0).len0field);
#line 119
___nl__int__2 = (*___nl__int_ptr__3);
#line 119
___nl__int_ptr__3 = NULL;
#line 119
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 119
___nl__int__5 = (*___nl__int_ptr__6);
#line 119
___nl__int_ptr__6 = NULL;
#line 119
___nl__int__7 = 1;
#line 119
___nl__int__4 = ___nl__int__5 + ___nl__int__7;
#line 119
//clear ___nl__int__5;
#line 119
//clear ___nl__int__7;
#line 119
___nl__bool__1 = ___nl__int__2 <= ___nl__int__4;
#line 119
//clear ___nl__int__2;
#line 119
//clear ___nl__int__4;
#line 119
___nl__bool__1 = !___nl__bool__1;
#line 119
if(___nl__bool__1){ goto label_19;}
#line 119
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 119
//clear ___nl__bool__1;
#line 119
return ___nl__im__8;
#line 119
goto label_19;
#line 119
label_19:
;
#line 119
//clear ___nl__bool__1;
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 120
___nl__im_ptr__11 = &((*___ref___rec__0).text0field);
#line 120
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 120
___nl__im_ptr__11 = NULL;
#line 120
___nl__int_ptr__14 = &((*___ref___rec__0).pos0field);
#line 120
___nl__int__13 = (*___nl__int_ptr__14);
#line 120
___nl__int_ptr__14 = NULL;
#line 120
___nl__int__15 = 1;
#line 120
___nl__int__12 = ___nl__int__13 + ___nl__int__15;
#line 120
//clear ___nl__int__13;
#line 120
//clear ___nl__int__15;
#line 120
___nl__int__16 = 1;
#line 120
c_rt_lib0move(&___nl__im__9, c_std_lib0fast_substr(___nl__im__10, ___nl__int__12, ___nl__int__16));
#line 120
c_rt_lib0clear(&___nl__im__10);
#line 120
//clear ___nl__int__12;
#line 120
//clear ___nl__int__16;
#line 120
return ___nl__im__9;
return NULL;

}

ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT * ___nl__im_ptr__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT * ___nl__int_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
INT * ___nl__int_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT * ___nl__int_ptr__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT * ___nl__int_ptr__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT * ___nl__int_ptr__22 = NULL;
INT * ___nl__int_ptr__23 = NULL;
INT * ___nl__int_ptr__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT * ___nl__int_ptr__28 = NULL;
INT  ___nl__int__29 = 0;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
INT * ___nl__int_ptr__32 = NULL;
INT  ___nl__int__33 = 0;
INT * ___nl__int_ptr__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT * ___nl__int_ptr__36 = NULL;
INT  ___nl__int__37 = 0;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
INT * ___nl__int_ptr__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT * ___nl__im_ptr__42 = NULL;
#line 124
___nl__im_ptr__1 = &((*___ref___rec__0).last_comment0field);
#line 124
___nl__im_ptr__3 = &((*___ref___rec__0).next_comment0field);
#line 124
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 124
___nl__im_ptr__3 = NULL;
#line 124
c_rt_lib0delete(array0append(___nl__im_ptr__1, ___nl__im__2));
#line 124
___nl__im_ptr__1 = NULL;
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 125
___nl__im_ptr__5 = &((*___ref___rec__0).next_comment0field);
#line 125
c_rt_lib0copy(___nl__im_ptr__5, ___nl__im__4);
#line 125
___nl__im_ptr__5 = NULL;
#line 125
c_rt_lib0clear(&___nl__im__4);
#line 126
label_12:
;
#line 127
___nl__int_ptr__8 = &((*___ref___rec__0).pos0field);
#line 127
___nl__int__7 = (*___nl__int_ptr__8);
#line 127
___nl__int_ptr__8 = NULL;
#line 127
___nl__int_ptr__10 = &((*___ref___rec__0).len0field);
#line 127
___nl__int__9 = (*___nl__int_ptr__10);
#line 127
___nl__int_ptr__10 = NULL;
#line 127
___nl__bool__6 = ___nl__int__7 == ___nl__int__9;
#line 127
//clear ___nl__int__7;
#line 127
//clear ___nl__int__9;
#line 127
___nl__bool__6 = !___nl__bool__6;
#line 127
if(___nl__bool__6){ goto label_27;}
#line 127
//clear ___nl__bool__6;
#line 127
return NULL;
#line 127
goto label_27;
#line 127
label_27:
;
#line 127
//clear ___nl__bool__6;
#line 128
c_rt_lib0move(&___nl__im__11, ntokenizer_priv0get_char(___ref___rec__0));
#line 129
c_rt_lib0move(&___nl__im__13, string0tab());
#line 129
___nl__bool__12 = c_rt_lib0eq(___nl__im__11, ___nl__im__13);
#line 129
c_rt_lib0clear(&___nl__im__13);
#line 129
if(___nl__bool__12){ goto label_37;}
#line 129
c_rt_lib0move(&___nl__im__14, string0r());
#line 129
___nl__bool__12 = c_rt_lib0eq(___nl__im__11, ___nl__im__14);
#line 129
c_rt_lib0clear(&___nl__im__14);
#line 129
label_37:
;
#line 129
if(___nl__bool__12){ goto label_42;}
#line 129
c_rt_lib0move(&___nl__im__15,___get_global_string_const(480));
#line 129
___nl__bool__12 = c_rt_lib0eq(___nl__im__11, ___nl__im__15);
#line 129
c_rt_lib0clear(&___nl__im__15);
#line 129
label_42:
;
#line 129
___nl__bool__12 = !___nl__bool__12;
#line 129
if(___nl__bool__12){ goto label_51;}
#line 130
___nl__int_ptr__16 = &((*___ref___rec__0).pos0field);
#line 130
___nl__int__17 = 1;
#line 130
(*___nl__int_ptr__16) = (*___nl__int_ptr__16) + ___nl__int__17;
#line 130
___nl__int_ptr__16 = NULL;
#line 130
//clear ___nl__int__17;
#line 131
goto label_145;
#line 131
label_51:
;
#line 131
c_rt_lib0move(&___nl__im__18, string0lf());
#line 131
___nl__bool__12 = c_rt_lib0eq(___nl__im__11, ___nl__im__18);
#line 131
c_rt_lib0clear(&___nl__im__18);
#line 131
___nl__bool__12 = !___nl__bool__12;
#line 131
if(___nl__bool__12){ goto label_75;}
#line 132
___nl__int_ptr__19 = &((*___ref___rec__0).pos0field);
#line 132
___nl__int__20 = 1;
#line 132
(*___nl__int_ptr__19) = (*___nl__int_ptr__19) + ___nl__int__20;
#line 132
___nl__int_ptr__19 = NULL;
#line 132
//clear ___nl__int__20;
#line 133
___nl__int_ptr__22 = &((*___ref___rec__0).pos0field);
#line 133
___nl__int__21 = (*___nl__int_ptr__22);
#line 133
___nl__int_ptr__22 = NULL;
#line 133
___nl__int_ptr__23 = &((*___ref___rec__0).ln_pos0field);
#line 133
(*___nl__int_ptr__23) = ___nl__int__21;
#line 133
___nl__int_ptr__23 = NULL;
#line 133
//clear ___nl__int__21;
#line 134
___nl__int_ptr__24 = &((*___ref___rec__0).ln_nr0field);
#line 134
___nl__int__25 = 1;
#line 134
(*___nl__int_ptr__24) = (*___nl__int_ptr__24) + ___nl__int__25;
#line 134
___nl__int_ptr__24 = NULL;
#line 134
//clear ___nl__int__25;
#line 135
goto label_145;
#line 135
label_75:
;
#line 135
c_rt_lib0move(&___nl__im__26,___get_global_string_const(1232));
#line 135
___nl__bool__12 = c_rt_lib0eq(___nl__im__11, ___nl__im__26);
#line 135
c_rt_lib0clear(&___nl__im__26);
#line 135
___nl__bool__12 = !___nl__bool__12;
#line 135
if(___nl__bool__12){ goto label_138;}
#line 136
c_rt_lib0move(&___nl__im__27,___get_global_string_const(36));
#line 137
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_add(___nl__im__27, ___nl__im__11));
#line 138
___nl__int_ptr__28 = &((*___ref___rec__0).pos0field);
#line 138
___nl__int__29 = 1;
#line 138
(*___nl__int_ptr__28) = (*___nl__int_ptr__28) + ___nl__int__29;
#line 138
___nl__int_ptr__28 = NULL;
#line 138
//clear ___nl__int__29;
#line 139
label_88:
;
#line 140
___nl__int_ptr__32 = &((*___ref___rec__0).pos0field);
#line 140
___nl__int__31 = (*___nl__int_ptr__32);
#line 140
___nl__int_ptr__32 = NULL;
#line 140
___nl__int_ptr__34 = &((*___ref___rec__0).len0field);
#line 140
___nl__int__33 = (*___nl__int_ptr__34);
#line 140
___nl__int_ptr__34 = NULL;
#line 140
___nl__bool__30 = ___nl__int__31 == ___nl__int__33;
#line 140
//clear ___nl__int__31;
#line 140
//clear ___nl__int__33;
#line 140
___nl__bool__30 = !___nl__bool__30;
#line 140
if(___nl__bool__30){ goto label_106;}
#line 140
c_rt_lib0clear(&___nl__im__11);
#line 140
//clear ___nl__bool__12;
#line 140
c_rt_lib0clear(&___nl__im__27);
#line 140
//clear ___nl__bool__30;
#line 140
return NULL;
#line 140
goto label_106;
#line 140
label_106:
;
#line 140
//clear ___nl__bool__30;
#line 141
c_rt_lib0move(&___nl__im__35, ntokenizer_priv0get_char(___ref___rec__0));
#line 142
___nl__int_ptr__36 = &((*___ref___rec__0).pos0field);
#line 142
___nl__int__37 = 1;
#line 142
(*___nl__int_ptr__36) = (*___nl__int_ptr__36) + ___nl__int__37;
#line 142
___nl__int_ptr__36 = NULL;
#line 142
//clear ___nl__int__37;
#line 143
c_rt_lib0move(&___nl__im__39, string0lf());
#line 143
___nl__bool__38 = c_rt_lib0eq(___nl__im__35, ___nl__im__39);
#line 143
c_rt_lib0clear(&___nl__im__39);
#line 143
___nl__bool__38 = !___nl__bool__38;
#line 143
if(___nl__bool__38){ goto label_123;}
#line 143
c_rt_lib0clear(&___nl__im__35);
#line 143
//clear ___nl__bool__38;
#line 143
goto label_128;
#line 143
goto label_123;
#line 143
label_123:
;
#line 143
//clear ___nl__bool__38;
#line 144
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_add(___nl__im__27, ___nl__im__35));
#line 144
c_rt_lib0clear(&___nl__im__35);
#line 139
goto label_88;
#line 139
label_128:
;
#line 146
___nl__int_ptr__40 = &((*___ref___rec__0).ln_nr0field);
#line 146
___nl__int__41 = 1;
#line 146
(*___nl__int_ptr__40) = (*___nl__int_ptr__40) + ___nl__int__41;
#line 146
___nl__int_ptr__40 = NULL;
#line 146
//clear ___nl__int__41;
#line 147
___nl__im_ptr__42 = &((*___ref___rec__0).next_comment0field);
#line 147
c_rt_lib0array_push(___nl__im_ptr__42, ___nl__im__27);
#line 147
___nl__im_ptr__42 = NULL;
#line 148
goto label_145;
#line 148
label_138:
;
#line 149
c_rt_lib0clear(&___nl__im__11);
#line 149
//clear ___nl__bool__12;
#line 149
c_rt_lib0clear(&___nl__im__27);
#line 149
c_rt_lib0clear(&___nl__im__35);
#line 149
return NULL;
#line 150
goto label_145;
#line 150
label_145:
;
#line 150
//clear ___nl__bool__12;
#line 150
c_rt_lib0clear(&___nl__im__27);
#line 150
c_rt_lib0clear(&___nl__im__35);
#line 150
c_rt_lib0clear(&___nl__im__11);
#line 126
goto label_12;
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
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
#line 155
___nl__im_ptr__3 = &((*___ref___rec__0).type0field);
#line 155
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 155
___nl__im_ptr__3 = NULL;
#line 155
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1231));
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
___nl__bool__1 = !___nl__bool__1;
#line 155
if(___nl__bool__1){ goto label_11;}
#line 155
___nl__bool__4 = true;
#line 155
//clear ___nl__bool__1;
#line 155
return ___nl__bool__4;
#line 155
goto label_11;
#line 155
label_11:
;
#line 155
//clear ___nl__bool__1;
#line 155
//clear ___nl__bool__4;
#line 156
___nl__im_ptr__7 = &((*___ref___rec__0).type0field);
#line 156
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 156
___nl__im_ptr__7 = NULL;
#line 156
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(1213));
#line 156
c_rt_lib0clear(&___nl__im__6);
#line 156
___nl__bool__5 = !___nl__bool__5;
#line 156
if(___nl__bool__5){ goto label_25;}
#line 156
___nl__bool__8 = true;
#line 156
//clear ___nl__bool__5;
#line 156
return ___nl__bool__8;
#line 156
goto label_25;
#line 156
label_25:
;
#line 156
//clear ___nl__bool__5;
#line 156
//clear ___nl__bool__8;
#line 157
___nl__im_ptr__11 = &((*___ref___rec__0).type0field);
#line 157
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 157
___nl__im_ptr__11 = NULL;
#line 157
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(1215));
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
___nl__bool__9 = !___nl__bool__9;
#line 157
if(___nl__bool__9){ goto label_39;}
#line 157
___nl__bool__12 = true;
#line 157
//clear ___nl__bool__9;
#line 157
return ___nl__bool__12;
#line 157
goto label_39;
#line 157
label_39:
;
#line 157
//clear ___nl__bool__9;
#line 157
//clear ___nl__bool__12;
#line 158
___nl__bool__13 = false;
#line 158
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
#line 162
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 162
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 162
___nl__im_ptr__5 = NULL;
#line 162
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 162
c_rt_lib0clear(&___nl__im__4);
#line 162
___nl__bool__3 = !___nl__bool__2;
#line 162
if(___nl__bool__3){ goto label_8;}
#line 162
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 162
label_8:
;
#line 162
//clear ___nl__bool__3;
#line 162
___nl__bool__2 = !___nl__bool__2;
#line 162
if(___nl__bool__2){ goto label_18;}
#line 163
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 164
___nl__bool__6 = true;
#line 164
c_rt_lib0clear(&___nl__im__1);
#line 164
//clear ___nl__bool__2;
#line 164
return ___nl__bool__6;
#line 165
goto label_18;
#line 165
label_18:
;
#line 165
//clear ___nl__bool__2;
#line 165
//clear ___nl__bool__6;
#line 166
___nl__bool__7 = false;
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
return ___nl__bool__7;
return false;

}

INT  ntokenizer0get_line(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT * ___nl__int_ptr__2 = NULL;
#line 170
___nl__int_ptr__2 = &((*___ref___rec__0).ln_nr0field);
#line 170
___nl__int__1 = (*___nl__int_ptr__2);
#line 170
___nl__int_ptr__2 = NULL;
#line 170
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
#line 173
___nl__int__4 = 1;
#line 173
___nl__int_ptr__6 = &((*___ref___rec__0).pos0field);
#line 173
___nl__int__5 = (*___nl__int_ptr__6);
#line 173
___nl__int_ptr__6 = NULL;
#line 173
___nl__int__3 = ___nl__int__4 + ___nl__int__5;
#line 173
//clear ___nl__int__4;
#line 173
//clear ___nl__int__5;
#line 173
___nl__int_ptr__8 = &((*___ref___rec__0).ln_pos0field);
#line 173
___nl__int__7 = (*___nl__int_ptr__8);
#line 173
___nl__int_ptr__8 = NULL;
#line 173
___nl__int__2 = ___nl__int__3 - ___nl__int__7;
#line 173
//clear ___nl__int__3;
#line 173
//clear ___nl__int__7;
#line 173
___nl__im_ptr__11 = &((*___ref___rec__0).next_token0field);
#line 173
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 173
___nl__im_ptr__11 = NULL;
#line 173
___nl__int__9 = string0length(___nl__im__10);
#line 173
c_rt_lib0clear(&___nl__im__10);
#line 173
___nl__int__1 = ___nl__int__2 - ___nl__int__9;
#line 173
//clear ___nl__int__2;
#line 173
//clear ___nl__int__9;
#line 173
return ___nl__int__1;
return 0;

}

ImmT  ntokenizer0get_place(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 176
___nl__im_ptr__2 = &((*___ref___rec__0).place0field);
#line 176
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 176
___nl__im_ptr__2 = NULL;
#line 176
return ___nl__im__1;
return NULL;

}

ImmT  ntokenizer0get_place_ws(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 180
___nl__im_ptr__2 = &((*___ref___rec__0).place_ws0field);
#line 180
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 180
___nl__im_ptr__2 = NULL;
#line 180
return ___nl__im__1;
return NULL;

}

ImmT  ntokenizer0get_token(ntokenizer0state_t0type* ___ref___rec__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 184
___nl__im_ptr__2 = &((*___ref___rec__0).next_token0field);
#line 184
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 184
___nl__im_ptr__2 = NULL;
#line 184
return ___nl__im__1;
return NULL;

}

bool  ntokenizer0is_type(ntokenizer0state_t0type* ___ref___rec__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 188
___nl__im_ptr__4 = &((*___ref___rec__0).type0field);
#line 188
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 188
___nl__im_ptr__4 = NULL;
#line 188
___nl__bool__2 = enum0eq(___nl__im__3, ___nl__im__1);
#line 188
c_rt_lib0clear(&___nl__im__3);
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
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
#line 192
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 192
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 192
___nl__im_ptr__5 = NULL;
#line 192
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 192
c_rt_lib0clear(&___nl__im__4);
#line 192
___nl__bool__3 = !___nl__bool__2;
#line 192
if(___nl__bool__3){ goto label_8;}
#line 192
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 192
label_8:
;
#line 192
//clear ___nl__bool__3;
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
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
#line 196
___nl__bool__2 = ntokenizer0is_type(___ref___rec__0, ___nl__im__1);
#line 196
___nl__bool__2 = !___nl__bool__2;
#line 196
___nl__bool__2 = !___nl__bool__2;
#line 196
if(___nl__bool__2){ goto label_7;}
#line 196
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 196
nl_die_arg(___nl__im__3);
#line 196
goto label_7;
#line 196
label_7:
;
#line 196
//clear ___nl__bool__2;
#line 196
c_rt_lib0clear(&___nl__im__3);
#line 197
___nl__im_ptr__5 = &((*___ref___rec__0).next_token0field);
#line 197
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 197
___nl__im_ptr__5 = NULL;
#line 198
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___rec__0));
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
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
#line 203
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(1199)));
#line 203
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 203
c_rt_lib0clear(&___nl__im__2);
#line 203
___nl__bool__1 = !___nl__bool__1;
#line 203
if(___nl__bool__1){ goto label_9;}
#line 203
___nl__bool__3 = true;
#line 203
//clear ___nl__bool__1;
#line 203
return ___nl__bool__3;
#line 203
goto label_9;
#line 203
label_9:
;
#line 203
//clear ___nl__bool__1;
#line 203
//clear ___nl__bool__3;
#line 204
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(1215)));
#line 204
___nl__bool__4 = ntokenizer0is_type(___ref___rec__0, ___nl__im__5);
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 204
___nl__bool__4 = !___nl__bool__4;
#line 204
if(___nl__bool__4){ goto label_21;}
#line 204
___nl__bool__6 = true;
#line 204
//clear ___nl__bool__4;
#line 204
return ___nl__bool__6;
#line 204
goto label_21;
#line 204
label_21:
;
#line 204
//clear ___nl__bool__4;
#line 204
//clear ___nl__bool__6;
#line 205
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(1213)));
#line 205
___nl__bool__7 = ntokenizer0is_type(___ref___rec__0, ___nl__im__8);
#line 205
c_rt_lib0clear(&___nl__im__8);
#line 205
___nl__bool__7 = !___nl__bool__7;
#line 205
if(___nl__bool__7){ goto label_51;}
#line 206
___nl__im_ptr__12 = &((*___ref___rec__0).next_token0field);
#line 206
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 206
___nl__im_ptr__12 = NULL;
#line 206
___nl__int__13 = 0;
#line 206
___nl__int__14 = 1;
#line 206
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__11, ___nl__int__13, ___nl__int__14));
#line 206
c_rt_lib0clear(&___nl__im__11);
#line 206
//clear ___nl__int__13;
#line 206
//clear ___nl__int__14;
#line 206
___nl__bool__9 = string0is_letter(___nl__im__10);
#line 206
c_rt_lib0clear(&___nl__im__10);
#line 206
___nl__bool__9 = !___nl__bool__9;
#line 206
if(___nl__bool__9){ goto label_47;}
#line 206
___nl__bool__15 = true;
#line 206
//clear ___nl__bool__7;
#line 206
//clear ___nl__bool__9;
#line 206
return ___nl__bool__15;
#line 206
goto label_47;
#line 206
label_47:
;
#line 206
//clear ___nl__bool__9;
#line 206
//clear ___nl__bool__15;
#line 207
goto label_51;
#line 207
label_51:
;
#line 207
//clear ___nl__bool__7;
#line 208
___nl__bool__16 = false;
#line 208
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
#line 212
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(1199)));
#line 212
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
___nl__bool__1 = !___nl__bool__1;
#line 212
if(___nl__bool__1){ goto label_11;}
#line 212
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(1199)));
#line 212
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_type(___ref___rec__0, ___nl__im__4));
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
//clear ___nl__bool__1;
#line 212
return ___nl__im__3;
#line 212
goto label_11;
#line 212
label_11:
;
#line 212
//clear ___nl__bool__1;
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(1215)));
#line 213
___nl__bool__5 = ntokenizer0is_type(___ref___rec__0, ___nl__im__6);
#line 213
c_rt_lib0clear(&___nl__im__6);
#line 213
___nl__bool__5 = !___nl__bool__5;
#line 213
if(___nl__bool__5){ goto label_25;}
#line 213
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(1215)));
#line 213
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_type(___ref___rec__0, ___nl__im__8));
#line 213
c_rt_lib0clear(&___nl__im__8);
#line 213
//clear ___nl__bool__5;
#line 213
return ___nl__im__7;
#line 213
goto label_25;
#line 213
label_25:
;
#line 213
//clear ___nl__bool__5;
#line 213
c_rt_lib0clear(&___nl__im__7);
#line 214
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(1213)));
#line 214
___nl__bool__9 = ntokenizer0is_type(___ref___rec__0, ___nl__im__10);
#line 214
c_rt_lib0clear(&___nl__im__10);
#line 214
___nl__bool__9 = !___nl__bool__9;
#line 214
if(___nl__bool__9){ goto label_57;}
#line 216
___nl__im_ptr__14 = &((*___ref___rec__0).next_token0field);
#line 216
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 216
___nl__im_ptr__14 = NULL;
#line 216
___nl__int__15 = 0;
#line 216
___nl__int__16 = 1;
#line 216
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__13, ___nl__int__15, ___nl__int__16));
#line 216
c_rt_lib0clear(&___nl__im__13);
#line 216
//clear ___nl__int__15;
#line 216
//clear ___nl__int__16;
#line 216
___nl__bool__11 = string0is_letter(___nl__im__12);
#line 216
c_rt_lib0clear(&___nl__im__12);
#line 216
___nl__bool__11 = !___nl__bool__11;
#line 216
if(___nl__bool__11){ goto label_53;}
#line 215
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(1213)));
#line 215
c_rt_lib0move(&___nl__im__17, ntokenizer0eat_type(___ref___rec__0, ___nl__im__18));
#line 215
c_rt_lib0clear(&___nl__im__18);
#line 215
//clear ___nl__bool__9;
#line 215
//clear ___nl__bool__11;
#line 215
return ___nl__im__17;
#line 215
goto label_53;
#line 215
label_53:
;
#line 215
//clear ___nl__bool__11;
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 217
goto label_57;
#line 217
label_57:
;
#line 217
//clear ___nl__bool__9;
#line 218
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 218
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
INT  ___nl__int__13 = 0;
INT * ___nl__int_ptr__14 = NULL;
ImmT  ___nl__string__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT * ___nl__int_ptr__22 = NULL;
INT  ___nl__int__23 = 0;
INT * ___nl__int_ptr__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
ImmT  ___nl__im__33 = NULL;
#line 222
c_rt_lib0move(&___nl__im__9,___get_global_string_const(1233));
#line 222
___nl__im_ptr__11 = &((*___ref___rec__0).next_token0field);
#line 222
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 222
___nl__im_ptr__11 = NULL;
#line 222
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 222
c_rt_lib0clear(&___nl__im__9);
#line 222
c_rt_lib0clear(&___nl__im__10);
#line 222
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1234));
#line 222
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 222
c_rt_lib0clear(&___nl__im__8);
#line 222
c_rt_lib0clear(&___nl__im__12);
#line 223
___nl__int_ptr__14 = &((*___ref___rec__0).ln_nr0field);
#line 223
___nl__int__13 = (*___nl__int_ptr__14);
#line 223
___nl__int_ptr__14 = NULL;
#line 223
c_rt_lib0move(&___nl__string__15, c_rt_lib0int_to_string(___nl__int__13));
#line 223
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__15));
#line 223
c_rt_lib0clear(&___nl__im__7);
#line 223
//clear ___nl__int__13;
#line 223
c_rt_lib0clear(&___nl__string__15);
#line 223
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1235));
#line 223
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 223
c_rt_lib0clear(&___nl__im__6);
#line 223
c_rt_lib0clear(&___nl__im__16);
#line 224
___nl__int__20 = 1;
#line 224
___nl__int_ptr__22 = &((*___ref___rec__0).pos0field);
#line 224
___nl__int__21 = (*___nl__int_ptr__22);
#line 224
___nl__int_ptr__22 = NULL;
#line 224
___nl__int__19 = ___nl__int__20 + ___nl__int__21;
#line 224
//clear ___nl__int__20;
#line 224
//clear ___nl__int__21;
#line 224
___nl__int_ptr__24 = &((*___ref___rec__0).ln_pos0field);
#line 224
___nl__int__23 = (*___nl__int_ptr__24);
#line 224
___nl__int_ptr__24 = NULL;
#line 224
___nl__int__18 = ___nl__int__19 - ___nl__int__23;
#line 224
//clear ___nl__int__19;
#line 224
//clear ___nl__int__23;
#line 224
___nl__im_ptr__27 = &((*___ref___rec__0).next_token0field);
#line 224
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 224
___nl__im_ptr__27 = NULL;
#line 224
___nl__int__25 = string0length(___nl__im__26);
#line 224
c_rt_lib0clear(&___nl__im__26);
#line 224
___nl__int__17 = ___nl__int__18 - ___nl__int__25;
#line 224
//clear ___nl__int__18;
#line 224
//clear ___nl__int__25;
#line 224
c_rt_lib0move(&___nl__string__28, c_rt_lib0int_to_string(___nl__int__17));
#line 224
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__string__28));
#line 224
c_rt_lib0clear(&___nl__im__5);
#line 224
//clear ___nl__int__17;
#line 224
c_rt_lib0clear(&___nl__string__28);
#line 224
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1236));
#line 224
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__29));
#line 224
c_rt_lib0clear(&___nl__im__4);
#line 224
c_rt_lib0clear(&___nl__im__29);
#line 225
___nl__im_ptr__32 = &((*___ref___rec__0).type0field);
#line 225
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 225
___nl__im_ptr__32 = NULL;
#line 225
c_rt_lib0move(&___nl__im__30, ov0get_element(___nl__im__31));
#line 225
c_rt_lib0clear(&___nl__im__31);
#line 225
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__30));
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 225
c_rt_lib0clear(&___nl__im__30);
#line 225
c_rt_lib0move(&___nl__im__33,___get_global_string_const(456));
#line 225
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__33));
#line 225
c_rt_lib0clear(&___nl__im__2);
#line 225
c_rt_lib0clear(&___nl__im__33);
#line 225
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
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
#line 230
___nl__bool__1 = string0is_digit(___nl__im__0);
#line 230
if(___nl__bool__1){ goto label_16;}
#line 230
___nl__int__3 = string0ord(___nl__im__0);
#line 230
___nl__int__4 = 65;
#line 230
___nl__bool__1 = ___nl__int__3 >= ___nl__int__4;
#line 230
//clear ___nl__int__3;
#line 230
//clear ___nl__int__4;
#line 230
___nl__bool__2 = !___nl__bool__1;
#line 230
if(___nl__bool__2){ goto label_14;}
#line 230
___nl__int__5 = string0ord(___nl__im__0);
#line 230
___nl__int__6 = 70;
#line 230
___nl__bool__1 = ___nl__int__5 <= ___nl__int__6;
#line 230
//clear ___nl__int__5;
#line 230
//clear ___nl__int__6;
#line 230
label_14:
;
#line 230
//clear ___nl__bool__2;
#line 230
label_16:
;
#line 230
if(___nl__bool__1){ goto label_32;}
#line 231
___nl__int__8 = string0ord(___nl__im__0);
#line 231
___nl__int__9 = 97;
#line 231
___nl__bool__1 = ___nl__int__8 >= ___nl__int__9;
#line 231
//clear ___nl__int__8;
#line 231
//clear ___nl__int__9;
#line 231
___nl__bool__7 = !___nl__bool__1;
#line 231
if(___nl__bool__7){ goto label_30;}
#line 231
___nl__int__10 = string0ord(___nl__im__0);
#line 231
___nl__int__11 = 102;
#line 231
___nl__bool__1 = ___nl__int__10 <= ___nl__int__11;
#line 231
//clear ___nl__int__10;
#line 231
//clear ___nl__int__11;
#line 231
label_30:
;
#line 231
//clear ___nl__bool__7;
#line 231
label_32:
;
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
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
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT * ___nl__int_ptr__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT * ___nl__int_ptr__16 = NULL;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT * ___nl__im_ptr__21 = NULL;
INT  ___nl__int__22 = 0;
INT * ___nl__int_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT * ___nl__int_ptr__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
#line 235
c_rt_lib0move(&___nl__im__2, ntokenizer_priv0get_char_oper());
#line 235
___nl__int__4 = 0;
#line 235
___nl__int__5 = 1;
#line 235
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 235
label_4:
;
#line 235
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 235
if(___nl__bool__7){ goto label_102;}
#line 235
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 235
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 236
___nl__int_ptr__11 = &((*___ref___rec__0).len0field);
#line 236
___nl__int__10 = (*___nl__int_ptr__11);
#line 236
___nl__int_ptr__11 = NULL;
#line 236
___nl__int__14 = 1;
#line 236
___nl__int_ptr__16 = &((*___ref___rec__0).pos0field);
#line 236
___nl__int__15 = (*___nl__int_ptr__16);
#line 236
___nl__int_ptr__16 = NULL;
#line 236
___nl__int__13 = ___nl__int__14 + ___nl__int__15;
#line 236
//clear ___nl__int__14;
#line 236
//clear ___nl__int__15;
#line 236
___nl__int__17 = string0length(___nl__im__3);
#line 236
___nl__int__12 = ___nl__int__13 + ___nl__int__17;
#line 236
//clear ___nl__int__13;
#line 236
//clear ___nl__int__17;
#line 236
___nl__bool__9 = ___nl__int__10 < ___nl__int__12;
#line 236
//clear ___nl__int__10;
#line 236
//clear ___nl__int__12;
#line 236
___nl__bool__9 = !___nl__bool__9;
#line 236
if(___nl__bool__9){ goto label_31;}
#line 236
//clear ___nl__bool__9;
#line 236
goto label_99;
#line 236
goto label_31;
#line 236
label_31:
;
#line 236
//clear ___nl__bool__9;
#line 237
___nl__im_ptr__21 = &((*___ref___rec__0).text0field);
#line 237
c_rt_lib0copy(&___nl__im__20, (*___nl__im_ptr__21));
#line 237
___nl__im_ptr__21 = NULL;
#line 237
___nl__int_ptr__23 = &((*___ref___rec__0).pos0field);
#line 237
___nl__int__22 = (*___nl__int_ptr__23);
#line 237
___nl__int_ptr__23 = NULL;
#line 237
___nl__int__24 = string0length(___nl__im__3);
#line 237
c_rt_lib0move(&___nl__im__19, c_std_lib0fast_substr(___nl__im__20, ___nl__int__22, ___nl__int__24));
#line 237
c_rt_lib0clear(&___nl__im__20);
#line 237
//clear ___nl__int__22;
#line 237
//clear ___nl__int__24;
#line 237
___nl__bool__18 = c_rt_lib0eq(___nl__im__19, ___nl__im__3);
#line 237
c_rt_lib0clear(&___nl__im__19);
#line 237
___nl__bool__18 = !___nl__bool__18;
#line 237
if(___nl__bool__18){ goto label_94;}
#line 240
c_rt_lib0move(&___nl__im__27, ntokenizer_priv0get_char(___ref___rec__0));
#line 240
___nl__bool__25 = string0is_letter(___nl__im__27);
#line 240
c_rt_lib0clear(&___nl__im__27);
#line 240
___nl__bool__26 = !___nl__bool__25;
#line 240
if(___nl__bool__26){ goto label_70;}
#line 241
___nl__im_ptr__30 = &((*___ref___rec__0).text0field);
#line 241
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 241
___nl__im_ptr__30 = NULL;
#line 241
___nl__int_ptr__33 = &((*___ref___rec__0).pos0field);
#line 241
___nl__int__32 = (*___nl__int_ptr__33);
#line 241
___nl__int_ptr__33 = NULL;
#line 241
___nl__int__34 = string0length(___nl__im__3);
#line 241
___nl__int__31 = ___nl__int__32 + ___nl__int__34;
#line 241
//clear ___nl__int__32;
#line 241
//clear ___nl__int__34;
#line 241
___nl__int__35 = 1;
#line 241
c_rt_lib0move(&___nl__im__28, c_std_lib0fast_substr(___nl__im__29, ___nl__int__31, ___nl__int__35));
#line 241
c_rt_lib0clear(&___nl__im__29);
#line 241
//clear ___nl__int__31;
#line 241
//clear ___nl__int__35;
#line 241
___nl__bool__25 = string0is_letter(___nl__im__28);
#line 241
c_rt_lib0clear(&___nl__im__28);
#line 241
label_70:
;
#line 241
//clear ___nl__bool__26;
#line 241
___nl__bool__25 = !___nl__bool__25;
#line 241
if(___nl__bool__25){ goto label_78;}
#line 238
//clear ___nl__bool__18;
#line 238
//clear ___nl__bool__25;
#line 238
goto label_99;
#line 238
goto label_78;
#line 238
label_78:
;
#line 238
//clear ___nl__bool__25;
#line 242
c_rt_lib0copy(___ref___im__1, ___nl__im__3);
#line 243
___nl__bool__36 = true;
#line 243
c_rt_lib0move(&___nl__im__37, c_rt_lib0bool_to_nl_native(___nl__bool__36));
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
c_rt_lib0clear(&___nl__im__8);
#line 243
//clear ___nl__bool__18;
#line 243
//clear ___nl__bool__36;
#line 243
return ___nl__im__37;
#line 244
goto label_94;
#line 244
label_94:
;
#line 244
//clear ___nl__bool__18;
#line 244
//clear ___nl__bool__36;
#line 244
c_rt_lib0clear(&___nl__im__37);
#line 244
c_rt_lib0clear(&___nl__im__3);
#line 244
label_99:
;
#line 245
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 245
goto label_4;
#line 245
label_102:
;
#line 246
___nl__bool__38 = false;
#line 246
c_rt_lib0move(&___nl__im__39, c_rt_lib0bool_to_nl_native(___nl__bool__38));
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
//clear ___nl__int__4;
#line 246
//clear ___nl__int__5;
#line 246
//clear ___nl__int__6;
#line 246
//clear ___nl__bool__7;
#line 246
c_rt_lib0clear(&___nl__im__8);
#line 246
//clear ___nl__bool__38;
#line 246
return ___nl__im__39;
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
//clear ___nl__int__4;
#line 246
//clear ___nl__int__5;
#line 246
//clear ___nl__int__6;
#line 246
//clear ___nl__bool__7;
#line 246
c_rt_lib0clear(&___nl__im__8);
#line 246
//clear ___nl__bool__38;
#line 246
c_rt_lib0clear(&___nl__im__39);
#line 246
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
ImmT  ___nl__im__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT * ___nl__im_ptr__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT * ___nl__im_ptr__45 = NULL;
INT  ___nl__int__46 = 0;
INT * ___nl__int_ptr__47 = NULL;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
INT * ___nl__int_ptr__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
ImmT * ___nl__im_ptr__58 = NULL;
ImmT * ___nl__im_ptr__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT * ___nl__im_ptr__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT * ___nl__im_ptr__70 = NULL;
INT  ___nl__int__71 = 0;
INT * ___nl__int_ptr__72 = NULL;
ImmT * ___nl__im_ptr__73 = NULL;
INT * ___nl__int_ptr__74 = NULL;
INT  ___nl__int__75 = 0;
bool  ___nl__bool__76 = false;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT * ___nl__im_ptr__80 = NULL;
INT * ___nl__int_ptr__81 = NULL;
INT  ___nl__int__82 = 0;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT * ___nl__im_ptr__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT * ___nl__im_ptr__88 = NULL;
ImmT  ___nl__im__89 = NULL;
bool  ___nl__bool__90 = false;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT * ___nl__im_ptr__93 = NULL;
ImmT * ___nl__im_ptr__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT * ___nl__im_ptr__97 = NULL;
ImmT * ___nl__im_ptr__98 = NULL;
INT  ___nl__int__99 = 0;
INT * ___nl__int_ptr__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
INT  ___nl__int__103 = 0;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
ImmT * ___nl__im_ptr__106 = NULL;
ImmT * ___nl__im_ptr__107 = NULL;
INT * ___nl__int_ptr__108 = NULL;
INT  ___nl__int__109 = 0;
bool  ___nl__bool__110 = false;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT * ___nl__im_ptr__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT * ___nl__im_ptr__116 = NULL;
INT * ___nl__int_ptr__117 = NULL;
INT  ___nl__int__118 = 0;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT * ___nl__im_ptr__122 = NULL;
INT * ___nl__int_ptr__123 = NULL;
INT  ___nl__int__124 = 0;
bool  ___nl__bool__125 = false;
bool  ___nl__bool__126 = false;
bool  ___nl__bool__127 = false;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT * ___nl__im_ptr__133 = NULL;
INT * ___nl__int_ptr__134 = NULL;
INT  ___nl__int__135 = 0;
bool  ___nl__bool__136 = false;
ImmT * ___nl__im_ptr__137 = NULL;
INT * ___nl__int_ptr__138 = NULL;
INT  ___nl__int__139 = 0;
INT  ___nl__int__140 = 0;
bool  ___nl__bool__141 = false;
INT  ___nl__int__142 = 0;
INT  ___nl__int__143 = 0;
bool  ___nl__bool__144 = false;
bool  ___nl__bool__145 = false;
bool  ___nl__bool__146 = false;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
INT  ___nl__int__149 = 0;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
INT  ___nl__int__152 = 0;
ImmT * ___nl__im_ptr__153 = NULL;
INT * ___nl__int_ptr__154 = NULL;
INT  ___nl__int__155 = 0;
ImmT  ___nl__im__156 = NULL;
ImmT * ___nl__im_ptr__157 = NULL;
ImmT * ___nl__im_ptr__158 = NULL;
#line 250
___nl__int_ptr__3 = &((*___ref___rec__0).ln_nr0field);
#line 250
___nl__int__2 = (*___nl__int_ptr__3);
#line 250
___nl__int_ptr__3 = NULL;
#line 250
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__2));
#line 250
___nl__int_ptr__8 = &((*___ref___rec__0).pos0field);
#line 250
___nl__int__7 = (*___nl__int_ptr__8);
#line 250
___nl__int_ptr__8 = NULL;
#line 250
___nl__int_ptr__10 = &((*___ref___rec__0).ln_pos0field);
#line 250
___nl__int__9 = (*___nl__int_ptr__10);
#line 250
___nl__int_ptr__10 = NULL;
#line 250
___nl__int__6 = ___nl__int__7 - ___nl__int__9;
#line 250
//clear ___nl__int__7;
#line 250
//clear ___nl__int__9;
#line 250
___nl__int__11 = 1;
#line 250
___nl__int__5 = ___nl__int__6 + ___nl__int__11;
#line 250
//clear ___nl__int__6;
#line 250
//clear ___nl__int__11;
#line 250
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__5));
#line 250
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(168), ___nl__im__4, ___get_global_string_const(1159), ___nl__im__12));
#line 250
//clear ___nl__int__2;
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
//clear ___nl__int__5;
#line 250
c_rt_lib0clear(&___nl__im__12);
#line 250
___nl__im_ptr__13 = &((*___ref___rec__0).place_ws0field);
#line 250
c_rt_lib0copy(___nl__im_ptr__13, ___nl__im__1);
#line 250
___nl__im_ptr__13 = NULL;
#line 250
c_rt_lib0clear(&___nl__im__1);
#line 251
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___rec__0));
#line 252
___nl__int_ptr__16 = &((*___ref___rec__0).ln_nr0field);
#line 252
___nl__int__15 = (*___nl__int_ptr__16);
#line 252
___nl__int_ptr__16 = NULL;
#line 252
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__15));
#line 252
___nl__int_ptr__21 = &((*___ref___rec__0).pos0field);
#line 252
___nl__int__20 = (*___nl__int_ptr__21);
#line 252
___nl__int_ptr__21 = NULL;
#line 252
___nl__int_ptr__23 = &((*___ref___rec__0).ln_pos0field);
#line 252
___nl__int__22 = (*___nl__int_ptr__23);
#line 252
___nl__int_ptr__23 = NULL;
#line 252
___nl__int__19 = ___nl__int__20 - ___nl__int__22;
#line 252
//clear ___nl__int__20;
#line 252
//clear ___nl__int__22;
#line 252
___nl__int__24 = 1;
#line 252
___nl__int__18 = ___nl__int__19 + ___nl__int__24;
#line 252
//clear ___nl__int__19;
#line 252
//clear ___nl__int__24;
#line 252
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__18));
#line 252
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_string_const(168), ___nl__im__17, ___get_global_string_const(1159), ___nl__im__25));
#line 252
//clear ___nl__int__15;
#line 252
c_rt_lib0clear(&___nl__im__17);
#line 252
//clear ___nl__int__18;
#line 252
c_rt_lib0clear(&___nl__im__25);
#line 252
___nl__im_ptr__26 = &((*___ref___rec__0).place0field);
#line 252
c_rt_lib0copy(___nl__im_ptr__26, ___nl__im__14);
#line 252
___nl__im_ptr__26 = NULL;
#line 252
c_rt_lib0clear(&___nl__im__14);
#line 253
___nl__im_ptr__29 = &((*___ref___rec__0).type0field);
#line 253
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 253
___nl__im_ptr__29 = NULL;
#line 253
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(137));
#line 253
c_rt_lib0clear(&___nl__im__28);
#line 253
___nl__bool__27 = !___nl__bool__27;
#line 253
if(___nl__bool__27){ goto label_65;}
#line 253
//clear ___nl__bool__27;
#line 253
return NULL;
#line 253
goto label_65;
#line 253
label_65:
;
#line 253
//clear ___nl__bool__27;
#line 254
___nl__int_ptr__32 = &((*___ref___rec__0).pos0field);
#line 254
___nl__int__31 = (*___nl__int_ptr__32);
#line 254
___nl__int_ptr__32 = NULL;
#line 254
___nl__int_ptr__34 = &((*___ref___rec__0).len0field);
#line 254
___nl__int__33 = (*___nl__int_ptr__34);
#line 254
___nl__int_ptr__34 = NULL;
#line 254
___nl__bool__30 = ___nl__int__31 == ___nl__int__33;
#line 254
//clear ___nl__int__31;
#line 254
//clear ___nl__int__33;
#line 254
___nl__bool__30 = !___nl__bool__30;
#line 254
if(___nl__bool__30){ goto label_91;}
#line 255
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_string_const(746)));
#line 255
___nl__im_ptr__36 = &((*___ref___rec__0).type0field);
#line 255
c_rt_lib0copy(___nl__im_ptr__36, ___nl__im__35);
#line 255
___nl__im_ptr__36 = NULL;
#line 255
c_rt_lib0clear(&___nl__im__35);
#line 256
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 256
___nl__im_ptr__38 = &((*___ref___rec__0).next_token0field);
#line 256
c_rt_lib0copy(___nl__im_ptr__38, ___nl__im__37);
#line 256
___nl__im_ptr__38 = NULL;
#line 256
c_rt_lib0clear(&___nl__im__37);
#line 257
//clear ___nl__bool__30;
#line 257
return NULL;
#line 258
goto label_91;
#line 258
label_91:
;
#line 258
//clear ___nl__bool__30;
#line 259
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 260
c_rt_lib0move(&___nl__im__41,___get_global_string_const(202));
#line 260
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__41);
#line 260
c_rt_lib0clear(&___nl__im__41);
#line 260
___nl__bool__40 = !___nl__bool__40;
#line 260
if(___nl__bool__40){ goto label_168;}
#line 261
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 261
___nl__im_ptr__43 = &((*___ref___rec__0).next_token0field);
#line 261
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__42);
#line 261
___nl__im_ptr__43 = NULL;
#line 261
c_rt_lib0clear(&___nl__im__42);
#line 262
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(420)));
#line 262
___nl__im_ptr__45 = &((*___ref___rec__0).type0field);
#line 262
c_rt_lib0copy(___nl__im_ptr__45, ___nl__im__44);
#line 262
___nl__im_ptr__45 = NULL;
#line 262
c_rt_lib0clear(&___nl__im__44);
#line 263
label_109:
;
#line 264
___nl__int__46 = 1;
#line 264
___nl__int_ptr__47 = &((*___ref___rec__0).pos0field);
#line 264
(*___nl__int_ptr__47) = (*___nl__int_ptr__47) + ___nl__int__46;
#line 264
___nl__int_ptr__47 = NULL;
#line 264
//clear ___nl__int__46;
#line 265
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 266
c_rt_lib0move(&___nl__im__49,___get_global_string_const(202));
#line 266
___nl__bool__48 = c_rt_lib0eq(___nl__im__39, ___nl__im__49);
#line 266
c_rt_lib0clear(&___nl__im__49);
#line 266
___nl__bool__48 = !___nl__bool__48;
#line 266
if(___nl__bool__48){ goto label_143;}
#line 267
___nl__int__50 = 1;
#line 267
___nl__int_ptr__51 = &((*___ref___rec__0).pos0field);
#line 267
(*___nl__int_ptr__51) = (*___nl__int_ptr__51) + ___nl__int__50;
#line 267
___nl__int_ptr__51 = NULL;
#line 267
//clear ___nl__int__50;
#line 268
c_rt_lib0move(&___nl__im__53, ntokenizer_priv0get_char(___ref___rec__0));
#line 268
c_rt_lib0move(&___nl__im__54,___get_global_string_const(202));
#line 268
___nl__bool__52 = c_rt_lib0eq(___nl__im__53, ___nl__im__54);
#line 268
c_rt_lib0clear(&___nl__im__53);
#line 268
c_rt_lib0clear(&___nl__im__54);
#line 268
___nl__bool__52 = !___nl__bool__52;
#line 268
___nl__bool__52 = !___nl__bool__52;
#line 268
if(___nl__bool__52){ goto label_140;}
#line 268
c_rt_lib0clear(&___nl__im__39);
#line 268
//clear ___nl__bool__40;
#line 268
//clear ___nl__bool__48;
#line 268
//clear ___nl__bool__52;
#line 268
return NULL;
#line 268
goto label_140;
#line 268
label_140:
;
#line 268
//clear ___nl__bool__52;
#line 269
goto label_161;
#line 269
label_143:
;
#line 269
___nl__int__55 = string0ord(___nl__im__39);
#line 269
___nl__int__56 = 10;
#line 269
___nl__bool__48 = ___nl__int__55 == ___nl__int__56;
#line 269
//clear ___nl__int__55;
#line 269
//clear ___nl__int__56;
#line 269
___nl__bool__48 = !___nl__bool__48;
#line 269
if(___nl__bool__48){ goto label_161;}
#line 270
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_string_const(1212)));
#line 270
___nl__im_ptr__58 = &((*___ref___rec__0).type0field);
#line 270
c_rt_lib0copy(___nl__im_ptr__58, ___nl__im__57);
#line 270
___nl__im_ptr__58 = NULL;
#line 270
c_rt_lib0clear(&___nl__im__57);
#line 271
c_rt_lib0clear(&___nl__im__39);
#line 271
//clear ___nl__bool__40;
#line 271
//clear ___nl__bool__48;
#line 271
return NULL;
#line 272
goto label_161;
#line 272
label_161:
;
#line 272
//clear ___nl__bool__48;
#line 273
___nl__im_ptr__59 = &((*___ref___rec__0).next_token0field);
#line 273
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0concat_add((*___nl__im_ptr__59), ___nl__im__39));
#line 273
___nl__im_ptr__59 = NULL;
#line 263
goto label_109;
#line 275
goto label_518;
#line 275
label_168:
;
#line 275
c_rt_lib0move(&___nl__im__61, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 275
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__39, ___nl__im__61));
#line 275
c_rt_lib0clear(&___nl__im__61);
#line 275
c_rt_lib0move(&___nl__im__62,___get_global_string_const(322));
#line 275
___nl__bool__40 = c_rt_lib0eq(___nl__im__60, ___nl__im__62);
#line 275
c_rt_lib0clear(&___nl__im__60);
#line 275
c_rt_lib0clear(&___nl__im__62);
#line 275
if(___nl__bool__40){ goto label_184;}
#line 275
c_rt_lib0move(&___nl__im__64, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 275
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__39, ___nl__im__64));
#line 275
c_rt_lib0clear(&___nl__im__64);
#line 275
c_rt_lib0move(&___nl__im__65,___get_global_string_const(34));
#line 275
___nl__bool__40 = c_rt_lib0eq(___nl__im__63, ___nl__im__65);
#line 275
c_rt_lib0clear(&___nl__im__63);
#line 275
c_rt_lib0clear(&___nl__im__65);
#line 275
label_184:
;
#line 275
___nl__bool__40 = !___nl__bool__40;
#line 275
if(___nl__bool__40){ goto label_205;}
#line 276
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_none(___get_global_string_const(1231)));
#line 276
___nl__im_ptr__67 = &((*___ref___rec__0).type0field);
#line 276
c_rt_lib0copy(___nl__im_ptr__67, ___nl__im__66);
#line 276
___nl__im_ptr__67 = NULL;
#line 276
c_rt_lib0clear(&___nl__im__66);
#line 277
c_rt_lib0move(&___nl__im__69, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 277
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__39, ___nl__im__69));
#line 277
c_rt_lib0clear(&___nl__im__69);
#line 277
___nl__im_ptr__70 = &((*___ref___rec__0).next_token0field);
#line 277
c_rt_lib0copy(___nl__im_ptr__70, ___nl__im__68);
#line 277
___nl__im_ptr__70 = NULL;
#line 277
c_rt_lib0clear(&___nl__im__68);
#line 278
___nl__int__71 = 2;
#line 278
___nl__int_ptr__72 = &((*___ref___rec__0).pos0field);
#line 278
(*___nl__int_ptr__72) = (*___nl__int_ptr__72) + ___nl__int__71;
#line 278
___nl__int_ptr__72 = NULL;
#line 278
//clear ___nl__int__71;
#line 279
goto label_518;
#line 279
label_205:
;
#line 279
___nl__bool__40 = string0is_letter(___nl__im__39);
#line 279
___nl__bool__40 = !___nl__bool__40;
#line 279
if(___nl__bool__40){ goto label_285;}
#line 280
___nl__im_ptr__73 = &((*___ref___rec__0).next_token0field);
#line 280
c_rt_lib0copy(___nl__im_ptr__73, ___nl__im__39);
#line 280
___nl__im_ptr__73 = NULL;
#line 281
___nl__int_ptr__74 = &((*___ref___rec__0).pos0field);
#line 281
___nl__int__75 = 1;
#line 281
(*___nl__int_ptr__74) = (*___nl__int_ptr__74) + ___nl__int__75;
#line 281
___nl__int_ptr__74 = NULL;
#line 281
//clear ___nl__int__75;
#line 282
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 283
label_218:
;
#line 283
c_rt_lib0move(&___nl__im__78,___get_global_string_const(36));
#line 283
___nl__bool__76 = c_rt_lib0ne(___nl__im__39, ___nl__im__78);
#line 283
c_rt_lib0clear(&___nl__im__78);
#line 283
___nl__bool__77 = !___nl__bool__76;
#line 283
if(___nl__bool__77){ goto label_232;}
#line 283
___nl__bool__76 = string0is_letter(___nl__im__39);
#line 283
if(___nl__bool__76){ goto label_227;}
#line 283
___nl__bool__76 = string0is_digit(___nl__im__39);
#line 283
label_227:
;
#line 283
if(___nl__bool__76){ goto label_232;}
#line 283
c_rt_lib0move(&___nl__im__79,___get_global_string_const(120));
#line 283
___nl__bool__76 = c_rt_lib0eq(___nl__im__39, ___nl__im__79);
#line 283
c_rt_lib0clear(&___nl__im__79);
#line 283
label_232:
;
#line 283
//clear ___nl__bool__77;
#line 283
___nl__bool__76 = !___nl__bool__76;
#line 283
if(___nl__bool__76){ goto label_246;}
#line 284
___nl__im_ptr__80 = &((*___ref___rec__0).next_token0field);
#line 284
c_rt_lib0move(___nl__im_ptr__80, c_rt_lib0concat_add((*___nl__im_ptr__80), ___nl__im__39));
#line 284
___nl__im_ptr__80 = NULL;
#line 285
___nl__int_ptr__81 = &((*___ref___rec__0).pos0field);
#line 285
___nl__int__82 = 1;
#line 285
(*___nl__int_ptr__81) = (*___nl__int_ptr__81) + ___nl__int__82;
#line 285
___nl__int_ptr__81 = NULL;
#line 285
//clear ___nl__int__82;
#line 286
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 287
goto label_218;
#line 287
label_246:
;
#line 288
c_rt_lib0move(&___nl__im__84, ntokenizer_priv0get_lett_oper());
#line 288
___nl__im_ptr__86 = &((*___ref___rec__0).next_token0field);
#line 288
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 288
___nl__im_ptr__86 = NULL;
#line 288
___nl__bool__83 = hash0has_key(___nl__im__84, ___nl__im__85);
#line 288
c_rt_lib0clear(&___nl__im__84);
#line 288
c_rt_lib0clear(&___nl__im__85);
#line 288
___nl__bool__83 = !___nl__bool__83;
#line 288
if(___nl__bool__83){ goto label_262;}
#line 289
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_string_const(1213)));
#line 289
___nl__im_ptr__88 = &((*___ref___rec__0).type0field);
#line 289
c_rt_lib0copy(___nl__im_ptr__88, ___nl__im__87);
#line 289
___nl__im_ptr__88 = NULL;
#line 289
c_rt_lib0clear(&___nl__im__87);
#line 290
goto label_282;
#line 290
label_262:
;
#line 291
c_rt_lib0move(&___nl__im__91, ntokenizer_priv0get_keywords());
#line 291
___nl__im_ptr__93 = &((*___ref___rec__0).next_token0field);
#line 291
c_rt_lib0copy(&___nl__im__92, (*___nl__im_ptr__93));
#line 291
___nl__im_ptr__93 = NULL;
#line 291
___nl__bool__90 = hash0has_key(___nl__im__91, ___nl__im__92);
#line 291
c_rt_lib0clear(&___nl__im__91);
#line 291
c_rt_lib0clear(&___nl__im__92);
#line 291
if(___nl__bool__90){ goto label_273;}
#line 291
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_none(___get_global_string_const(1199)));
#line 291
goto label_275;
#line 291
label_273:
;
#line 291
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_none(___get_global_string_const(1215)));
#line 291
label_275:
;
#line 291
//clear ___nl__bool__90;
#line 291
___nl__im_ptr__94 = &((*___ref___rec__0).type0field);
#line 291
c_rt_lib0copy(___nl__im_ptr__94, ___nl__im__89);
#line 291
___nl__im_ptr__94 = NULL;
#line 291
c_rt_lib0clear(&___nl__im__89);
#line 292
goto label_282;
#line 292
label_282:
;
#line 292
//clear ___nl__bool__83;
#line 293
goto label_518;
#line 293
label_285:
;
#line 293
c_rt_lib0move(&___nl__im__95, ntokenizer_priv0try_get_operator(___ref___rec__0, &___nl__im__39));
#line 293
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__95);
#line 293
c_rt_lib0clear(&___nl__im__95);
#line 293
___nl__bool__40 = !___nl__bool__40;
#line 293
if(___nl__bool__40){ goto label_305;}
#line 294
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_none(___get_global_string_const(1213)));
#line 294
___nl__im_ptr__97 = &((*___ref___rec__0).type0field);
#line 294
c_rt_lib0copy(___nl__im_ptr__97, ___nl__im__96);
#line 294
___nl__im_ptr__97 = NULL;
#line 294
c_rt_lib0clear(&___nl__im__96);
#line 295
___nl__im_ptr__98 = &((*___ref___rec__0).next_token0field);
#line 295
c_rt_lib0copy(___nl__im_ptr__98, ___nl__im__39);
#line 295
___nl__im_ptr__98 = NULL;
#line 296
___nl__int__99 = string0length(___nl__im__39);
#line 296
___nl__int_ptr__100 = &((*___ref___rec__0).pos0field);
#line 296
(*___nl__int_ptr__100) = (*___nl__int_ptr__100) + ___nl__int__99;
#line 296
___nl__int_ptr__100 = NULL;
#line 296
//clear ___nl__int__99;
#line 297
goto label_518;
#line 297
label_305:
;
#line 297
c_rt_lib0move(&___nl__im__102,___get_global_string_const(1237));
#line 297
c_rt_lib0move(&___nl__im__101, string0index2(___nl__im__102, ___nl__im__39));
#line 297
c_rt_lib0clear(&___nl__im__102);
#line 297
___nl__int__103 = 0;
#line 297
___nl__int__104 = getIntFromImm(___nl__im__101);
#line 297
___nl__bool__40 = ___nl__int__104 >= ___nl__int__103;
#line 297
c_rt_lib0clear(&___nl__im__101);
#line 297
//clear ___nl__int__103;
#line 297
//clear ___nl__int__104;
#line 297
___nl__bool__40 = !___nl__bool__40;
#line 297
if(___nl__bool__40){ goto label_331;}
#line 298
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_none(___get_global_string_const(1231)));
#line 298
___nl__im_ptr__106 = &((*___ref___rec__0).type0field);
#line 298
c_rt_lib0copy(___nl__im_ptr__106, ___nl__im__105);
#line 298
___nl__im_ptr__106 = NULL;
#line 298
c_rt_lib0clear(&___nl__im__105);
#line 299
___nl__im_ptr__107 = &((*___ref___rec__0).next_token0field);
#line 299
c_rt_lib0copy(___nl__im_ptr__107, ___nl__im__39);
#line 299
___nl__im_ptr__107 = NULL;
#line 300
___nl__int_ptr__108 = &((*___ref___rec__0).pos0field);
#line 300
___nl__int__109 = 1;
#line 300
(*___nl__int_ptr__108) = (*___nl__int_ptr__108) + ___nl__int__109;
#line 300
___nl__int_ptr__108 = NULL;
#line 300
//clear ___nl__int__109;
#line 301
goto label_518;
#line 301
label_331:
;
#line 301
___nl__bool__40 = string0is_digit(___nl__im__39);
#line 301
if(___nl__bool__40){ goto label_349;}
#line 301
c_rt_lib0move(&___nl__im__111,___get_global_string_const(381));
#line 301
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__111);
#line 301
c_rt_lib0clear(&___nl__im__111);
#line 301
if(___nl__bool__40){ goto label_341;}
#line 301
c_rt_lib0move(&___nl__im__112,___get_global_string_const(383));
#line 301
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__112);
#line 301
c_rt_lib0clear(&___nl__im__112);
#line 301
label_341:
;
#line 301
___nl__bool__110 = !___nl__bool__40;
#line 301
if(___nl__bool__110){ goto label_347;}
#line 301
c_rt_lib0move(&___nl__im__113, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 301
___nl__bool__40 = string0is_digit(___nl__im__113);
#line 301
c_rt_lib0clear(&___nl__im__113);
#line 301
label_347:
;
#line 301
//clear ___nl__bool__110;
#line 301
label_349:
;
#line 301
___nl__bool__40 = !___nl__bool__40;
#line 301
if(___nl__bool__40){ goto label_508;}
#line 302
___nl__im_ptr__114 = &((*___ref___rec__0).next_token0field);
#line 302
c_rt_lib0copy(___nl__im_ptr__114, ___nl__im__39);
#line 302
___nl__im_ptr__114 = NULL;
#line 303
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_none(___get_global_string_const(1210)));
#line 303
___nl__im_ptr__116 = &((*___ref___rec__0).type0field);
#line 303
c_rt_lib0copy(___nl__im_ptr__116, ___nl__im__115);
#line 303
___nl__im_ptr__116 = NULL;
#line 303
c_rt_lib0clear(&___nl__im__115);
#line 304
___nl__int_ptr__117 = &((*___ref___rec__0).pos0field);
#line 304
___nl__int__118 = 1;
#line 304
(*___nl__int_ptr__117) = (*___nl__int_ptr__117) + ___nl__int__118;
#line 304
___nl__int_ptr__117 = NULL;
#line 304
//clear ___nl__int__118;
#line 305
c_rt_lib0move(&___nl__im__120,___get_global_string_const(381));
#line 305
___nl__bool__119 = c_rt_lib0eq(___nl__im__39, ___nl__im__120);
#line 305
c_rt_lib0clear(&___nl__im__120);
#line 305
if(___nl__bool__119){ goto label_372;}
#line 305
c_rt_lib0move(&___nl__im__121,___get_global_string_const(383));
#line 305
___nl__bool__119 = c_rt_lib0eq(___nl__im__39, ___nl__im__121);
#line 305
c_rt_lib0clear(&___nl__im__121);
#line 305
label_372:
;
#line 305
___nl__bool__119 = !___nl__bool__119;
#line 305
if(___nl__bool__119){ goto label_385;}
#line 306
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 307
___nl__im_ptr__122 = &((*___ref___rec__0).next_token0field);
#line 307
c_rt_lib0move(___nl__im_ptr__122, c_rt_lib0concat_add((*___nl__im_ptr__122), ___nl__im__39));
#line 307
___nl__im_ptr__122 = NULL;
#line 308
___nl__int_ptr__123 = &((*___ref___rec__0).pos0field);
#line 308
___nl__int__124 = 1;
#line 308
(*___nl__int_ptr__123) = (*___nl__int_ptr__123) + ___nl__int__124;
#line 308
___nl__int_ptr__123 = NULL;
#line 308
//clear ___nl__int__124;
#line 309
goto label_385;
#line 309
label_385:
;
#line 309
//clear ___nl__bool__119;
#line 310
c_rt_lib0move(&___nl__im__128,___get_global_string_const(20));
#line 310
___nl__bool__125 = c_rt_lib0eq(___nl__im__39, ___nl__im__128);
#line 310
c_rt_lib0clear(&___nl__im__128);
#line 310
___nl__bool__127 = !___nl__bool__125;
#line 310
if(___nl__bool__127){ goto label_397;}
#line 310
c_rt_lib0move(&___nl__im__129, ntokenizer_priv0get_char(___ref___rec__0));
#line 310
c_rt_lib0move(&___nl__im__130,___get_global_string_const(317));
#line 310
___nl__bool__125 = c_rt_lib0eq(___nl__im__129, ___nl__im__130);
#line 310
c_rt_lib0clear(&___nl__im__129);
#line 310
c_rt_lib0clear(&___nl__im__130);
#line 310
label_397:
;
#line 310
//clear ___nl__bool__127;
#line 310
___nl__bool__126 = !___nl__bool__125;
#line 310
if(___nl__bool__126){ goto label_404;}
#line 310
c_rt_lib0move(&___nl__im__131, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 310
___nl__bool__125 = ntokenizer_priv0is_hex_number(___nl__im__131);
#line 310
c_rt_lib0clear(&___nl__im__131);
#line 310
label_404:
;
#line 310
//clear ___nl__bool__126;
#line 310
___nl__bool__125 = !___nl__bool__125;
#line 310
if(___nl__bool__125){ goto label_435;}
#line 311
c_rt_lib0move(&___nl__im__132, ntokenizer_priv0get_char(___ref___rec__0));
#line 311
___nl__im_ptr__133 = &((*___ref___rec__0).next_token0field);
#line 311
c_rt_lib0move(___nl__im_ptr__133, c_rt_lib0concat_add((*___nl__im_ptr__133), ___nl__im__132));
#line 311
___nl__im_ptr__133 = NULL;
#line 311
c_rt_lib0clear(&___nl__im__132);
#line 312
___nl__int_ptr__134 = &((*___ref___rec__0).pos0field);
#line 312
___nl__int__135 = 1;
#line 312
(*___nl__int_ptr__134) = (*___nl__int_ptr__134) + ___nl__int__135;
#line 312
___nl__int_ptr__134 = NULL;
#line 312
//clear ___nl__int__135;
#line 313
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 314
label_419:
;
#line 314
___nl__bool__136 = ntokenizer_priv0is_hex_number(___nl__im__39);
#line 314
___nl__bool__136 = !___nl__bool__136;
#line 314
if(___nl__bool__136){ goto label_433;}
#line 315
___nl__im_ptr__137 = &((*___ref___rec__0).next_token0field);
#line 315
c_rt_lib0move(___nl__im_ptr__137, c_rt_lib0concat_add((*___nl__im_ptr__137), ___nl__im__39));
#line 315
___nl__im_ptr__137 = NULL;
#line 316
___nl__int_ptr__138 = &((*___ref___rec__0).pos0field);
#line 316
___nl__int__139 = 1;
#line 316
(*___nl__int_ptr__138) = (*___nl__int_ptr__138) + ___nl__int__139;
#line 316
___nl__int_ptr__138 = NULL;
#line 316
//clear ___nl__int__139;
#line 317
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 318
goto label_419;
#line 318
label_433:
;
#line 319
goto label_503;
#line 319
label_435:
;
#line 320
___nl__int__140 = 0;
#line 321
label_437:
;
#line 322
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 323
___nl__int__142 = 1;
#line 323
___nl__bool__141 = ___nl__int__140 == ___nl__int__142;
#line 323
//clear ___nl__int__142;
#line 323
___nl__bool__141 = !___nl__bool__141;
#line 323
if(___nl__bool__141){ goto label_448;}
#line 323
___nl__int__143 = 1;
#line 323
___nl__int__140 = ___nl__int__140 + ___nl__int__143;
#line 323
//clear ___nl__int__143;
#line 323
goto label_448;
#line 323
label_448:
;
#line 323
//clear ___nl__bool__141;
#line 324
c_rt_lib0move(&___nl__im__147,___get_global_string_const(123));
#line 324
___nl__bool__144 = c_rt_lib0eq(___nl__im__39, ___nl__im__147);
#line 324
c_rt_lib0clear(&___nl__im__147);
#line 324
___nl__bool__146 = !___nl__bool__144;
#line 324
if(___nl__bool__146){ goto label_458;}
#line 324
c_rt_lib0move(&___nl__im__148, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 324
___nl__bool__144 = string0is_digit(___nl__im__148);
#line 324
c_rt_lib0clear(&___nl__im__148);
#line 324
label_458:
;
#line 324
//clear ___nl__bool__146;
#line 324
___nl__bool__145 = !___nl__bool__144;
#line 324
if(___nl__bool__145){ goto label_465;}
#line 324
___nl__int__149 = 0;
#line 324
___nl__bool__144 = ___nl__int__140 == ___nl__int__149;
#line 324
//clear ___nl__int__149;
#line 324
label_465:
;
#line 324
//clear ___nl__bool__145;
#line 324
___nl__bool__144 = !___nl__bool__144;
#line 324
if(___nl__bool__144){ goto label_471;}
#line 324
___nl__int__140 = 1;
#line 324
goto label_471;
#line 324
label_471:
;
#line 324
//clear ___nl__bool__144;
#line 325
c_rt_lib0move(&___nl__im__151,___get_global_string_const(36));
#line 325
___nl__bool__150 = c_rt_lib0eq(___nl__im__39, ___nl__im__151);
#line 325
c_rt_lib0clear(&___nl__im__151);
#line 325
if(___nl__bool__150){ goto label_484;}
#line 325
___nl__bool__150 = string0is_digit(___nl__im__39);
#line 325
if(___nl__bool__150){ goto label_482;}
#line 325
___nl__int__152 = 1;
#line 325
___nl__bool__150 = ___nl__int__140 == ___nl__int__152;
#line 325
//clear ___nl__int__152;
#line 325
label_482:
;
#line 325
___nl__bool__150 = !___nl__bool__150;
#line 325
label_484:
;
#line 325
___nl__bool__150 = !___nl__bool__150;
#line 325
if(___nl__bool__150){ goto label_490;}
#line 325
//clear ___nl__bool__150;
#line 325
goto label_501;
#line 325
goto label_490;
#line 325
label_490:
;
#line 325
//clear ___nl__bool__150;
#line 326
___nl__im_ptr__153 = &((*___ref___rec__0).next_token0field);
#line 326
c_rt_lib0move(___nl__im_ptr__153, c_rt_lib0concat_add((*___nl__im_ptr__153), ___nl__im__39));
#line 326
___nl__im_ptr__153 = NULL;
#line 327
___nl__int_ptr__154 = &((*___ref___rec__0).pos0field);
#line 327
___nl__int__155 = 1;
#line 327
(*___nl__int_ptr__154) = (*___nl__int_ptr__154) + ___nl__int__155;
#line 327
___nl__int_ptr__154 = NULL;
#line 327
//clear ___nl__int__155;
#line 321
goto label_437;
#line 321
label_501:
;
#line 329
goto label_503;
#line 329
label_503:
;
#line 329
//clear ___nl__bool__125;
#line 329
//clear ___nl__bool__136;
#line 329
//clear ___nl__int__140;
#line 330
goto label_518;
#line 330
label_508:
;
#line 331
c_rt_lib0move(&___nl__im__156, c_rt_lib0ov_mk_none(___get_global_string_const(137)));
#line 331
___nl__im_ptr__157 = &((*___ref___rec__0).type0field);
#line 331
c_rt_lib0copy(___nl__im_ptr__157, ___nl__im__156);
#line 331
___nl__im_ptr__157 = NULL;
#line 331
c_rt_lib0clear(&___nl__im__156);
#line 332
___nl__im_ptr__158 = &((*___ref___rec__0).next_token0field);
#line 332
c_rt_lib0copy(___nl__im_ptr__158, ___nl__im__39);
#line 332
___nl__im_ptr__158 = NULL;
#line 333
goto label_518;
#line 333
label_518:
;
#line 333
//clear ___nl__bool__40;
#line 333
//clear ___nl__bool__76;
#line 333
c_rt_lib0clear(&___nl__im__39);
#line 333
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
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
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
___nl__im_ptr__27 = &((*___ref___rec__0).next_comment0field);
#line 1
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 1
___nl__im_ptr__27 = NULL;
#line 1
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(11, ___get_global_string_const(299), ___nl__im__4, ___get_global_string_const(1223), ___nl__im__5, ___get_global_string_const(1224), ___nl__im__7, ___get_global_string_const(300), ___nl__im__11, ___get_global_string_const(110), ___nl__im__12, ___get_global_string_const(1227), ___nl__im__14, ___get_global_string_const(1226), ___nl__im__18, ___get_global_string_const(1229), ___nl__im__19, ___get_global_string_const(1225), ___nl__im__23, ___get_global_string_const(1228), ___nl__im__24, ___get_global_string_const(1230), ___nl__im__26));
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
c_rt_lib0clear(&___nl__im__26);
#line 1
return ___nl__im__1;
#line 1
c_rt_lib0clear(&___nl__im__1);
#line 1
return NULL;
return NULL;

}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void ntokenizer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
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
case 3:
	___const__[3] = ntokenizer0state_t0cal();
	break;
case 4:
	___const__[4] = ntokenizer0token_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
