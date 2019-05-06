
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(24, ___get_global_string_const(1114), ___nl__im__2, ___get_global_string_const(995), ___nl__im__3, ___get_global_string_const(996), ___nl__im__4, ___get_global_string_const(994), ___nl__im__5, ___get_global_string_const(997), ___nl__im__6, ___get_global_string_const(160), ___nl__im__7, ___get_global_string_const(998), ___nl__im__8, ___get_global_string_const(993), ___nl__im__9, ___get_global_string_const(1008), ___nl__im__10, ___get_global_string_const(1009), ___nl__im__11, ___get_global_string_const(507), ___nl__im__12, ___get_global_string_const(725), ___nl__im__13, ___get_global_string_const(39), ___nl__im__14, ___get_global_string_const(1003), ___nl__im__15, ___get_global_string_const(1137), ___nl__im__16, ___get_global_string_const(1109), ___nl__im__17, ___get_global_string_const(573), ___nl__im__18, ___get_global_string_const(572), ___nl__im__19, ___get_global_string_const(1002), ___nl__im__20, ___get_global_string_const(1001), ___nl__im__21, ___get_global_string_const(248), ___nl__im__22, ___get_global_string_const(1005), ___nl__im__23, ___get_global_string_const(178), ___nl__im__24, ___get_global_string_const(249), ___nl__im__25));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_string_const(1110), ___get_global_string_const(1138)));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(154), ___nl__im__12, ___get_global_string_const(1075), ___nl__im__13));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(154), ___nl__im__16, ___get_global_string_const(1075), ___nl__im__17));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(1139), ___nl__im__2, ___get_global_string_const(284), ___nl__im__4, ___get_global_string_const(285), ___nl__im__5, ___get_global_string_const(206), ___nl__im__6, ___get_global_string_const(1140), ___nl__im__7, ___get_global_string_const(1141), ___nl__im__8, ___get_global_string_const(1142), ___nl__im__9, ___get_global_string_const(1143), ___nl__im__10, ___get_global_string_const(1144), ___nl__im__14, ___get_global_string_const(1145), ___nl__im__18));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_string_const(1062), ___nl__im__2, ___get_global_string_const(1146), ___nl__im__3, ___get_global_string_const(1129), ___nl__im__4, ___get_global_string_const(1126), ___nl__im__5, ___get_global_string_const(1131), ___nl__im__6, ___get_global_string_const(1115), ___nl__im__7, ___get_global_string_const(1128), ___nl__im__8, ___get_global_string_const(406), ___nl__im__9, ___get_global_string_const(122), ___nl__im__10));
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
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
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
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT * ___nl__int_ptr__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
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
___nl__bool__1 = ___nl__int__2 <= ___nl__int__4;
#line 110
//clear ___nl__int__2;
#line 110
//clear ___nl__int__4;
#line 110
___nl__bool__1 = !___nl__bool__1;
#line 110
if(___nl__bool__1){ goto label_19;}
#line 110
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 110
//clear ___nl__bool__1;
#line 110
return ___nl__im__8;
#line 110
goto label_19;
#line 110
label_19:
;
#line 110
//clear ___nl__bool__1;
#line 110
c_rt_lib0clear(&___nl__im__8);
#line 111
___nl__im_ptr__11 = &((*___ref___rec__0).text0field);
#line 111
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 111
___nl__im_ptr__11 = NULL;
#line 111
___nl__int_ptr__14 = &((*___ref___rec__0).pos0field);
#line 111
___nl__int__13 = (*___nl__int_ptr__14);
#line 111
___nl__int_ptr__14 = NULL;
#line 111
___nl__int__15 = 1;
#line 111
___nl__int__12 = ___nl__int__13 + ___nl__int__15;
#line 111
//clear ___nl__int__13;
#line 111
//clear ___nl__int__15;
#line 111
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__12));
#line 111
___nl__int__17 = 1;
#line 111
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__17));
#line 111
c_rt_lib0move(&___nl__im__9, c_std_lib0fast_substr(___nl__im__10, ___nl__im__16, ___nl__im__18));
#line 111
c_rt_lib0clear(&___nl__im__10);
#line 111
//clear ___nl__int__12;
#line 111
c_rt_lib0clear(&___nl__im__16);
#line 111
//clear ___nl__int__17;
#line 111
c_rt_lib0clear(&___nl__im__18);
#line 111
return ___nl__im__9;
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
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT * ___nl__int_ptr__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT * ___nl__int_ptr__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT * ___nl__int_ptr__21 = NULL;
INT * ___nl__int_ptr__22 = NULL;
INT * ___nl__int_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
ImmT * ___nl__im_ptr__27 = NULL;
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
ImmT * ___nl__im_ptr__39 = NULL;
bool  ___nl__bool__40 = false;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT * ___nl__int_ptr__43 = NULL;
INT  ___nl__int__44 = 0;
#line 115
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
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
label_6:
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
___nl__bool__4 = ___nl__int__5 == ___nl__int__7;
#line 118
//clear ___nl__int__5;
#line 118
//clear ___nl__int__7;
#line 118
___nl__bool__4 = !___nl__bool__4;
#line 118
if(___nl__bool__4){ goto label_22;}
#line 118
//clear ___nl__bool__3;
#line 118
//clear ___nl__bool__4;
#line 118
return NULL;
#line 118
goto label_22;
#line 118
label_22:
;
#line 118
//clear ___nl__bool__4;
#line 119
c_rt_lib0move(&___nl__im__9, ntokenizer_priv0get_char(___ref___rec__0));
#line 120
___nl__int__10 = string0ord(___nl__im__9);
#line 121
___nl__int__12 = 9;
#line 121
___nl__bool__11 = ___nl__int__10 == ___nl__int__12;
#line 121
//clear ___nl__int__12;
#line 121
if(___nl__bool__11){ goto label_33;}
#line 121
___nl__int__13 = 13;
#line 121
___nl__bool__11 = ___nl__int__10 == ___nl__int__13;
#line 121
//clear ___nl__int__13;
#line 121
label_33:
;
#line 121
if(___nl__bool__11){ goto label_38;}
#line 121
___nl__int__14 = 32;
#line 121
___nl__bool__11 = ___nl__int__10 == ___nl__int__14;
#line 121
//clear ___nl__int__14;
#line 121
label_38:
;
#line 121
___nl__bool__11 = !___nl__bool__11;
#line 121
if(___nl__bool__11){ goto label_48;}
#line 122
___nl__int_ptr__15 = &((*___ref___rec__0).pos0field);
#line 122
___nl__int__16 = 1;
#line 122
(*___nl__int_ptr__15) = (*___nl__int_ptr__15) + ___nl__int__16;
#line 122
___nl__int_ptr__15 = NULL;
#line 122
//clear ___nl__int__16;
#line 123
___nl__bool__3 = false;
#line 124
goto label_159;
#line 124
label_48:
;
#line 124
___nl__int__17 = 10;
#line 124
___nl__bool__11 = ___nl__int__10 == ___nl__int__17;
#line 124
//clear ___nl__int__17;
#line 124
___nl__bool__11 = !___nl__bool__11;
#line 124
if(___nl__bool__11){ goto label_73;}
#line 125
___nl__int_ptr__18 = &((*___ref___rec__0).pos0field);
#line 125
___nl__int__19 = 1;
#line 125
(*___nl__int_ptr__18) = (*___nl__int_ptr__18) + ___nl__int__19;
#line 125
___nl__int_ptr__18 = NULL;
#line 125
//clear ___nl__int__19;
#line 126
___nl__int_ptr__21 = &((*___ref___rec__0).pos0field);
#line 126
___nl__int__20 = (*___nl__int_ptr__21);
#line 126
___nl__int_ptr__21 = NULL;
#line 126
___nl__int_ptr__22 = &((*___ref___rec__0).ln_pos0field);
#line 126
(*___nl__int_ptr__22) = ___nl__int__20;
#line 126
___nl__int_ptr__22 = NULL;
#line 126
//clear ___nl__int__20;
#line 127
___nl__int_ptr__23 = &((*___ref___rec__0).ln_nr0field);
#line 127
___nl__int__24 = 1;
#line 127
(*___nl__int_ptr__23) = (*___nl__int_ptr__23) + ___nl__int__24;
#line 127
___nl__int_ptr__23 = NULL;
#line 127
//clear ___nl__int__24;
#line 128
___nl__bool__3 = false;
#line 129
goto label_159;
#line 129
label_73:
;
#line 129
___nl__int__25 = 35;
#line 129
___nl__bool__11 = ___nl__int__10 == ___nl__int__25;
#line 129
//clear ___nl__int__25;
#line 129
___nl__bool__11 = !___nl__bool__11;
#line 129
if(___nl__bool__11){ goto label_151;}
#line 130
___nl__bool__26 = ___nl__bool__3;
#line 130
___nl__bool__26 = !___nl__bool__26;
#line 130
if(___nl__bool__26){ goto label_86;}
#line 131
___nl__im_ptr__27 = &((*___ref___rec__0).last_comment0field);
#line 131
c_rt_lib0move(___nl__im_ptr__27, c_rt_lib0concat_add((*___nl__im_ptr__27), ___nl__im__9));
#line 131
___nl__im_ptr__27 = NULL;
#line 132
goto label_86;
#line 132
label_86:
;
#line 132
//clear ___nl__bool__26;
#line 133
___nl__int_ptr__28 = &((*___ref___rec__0).pos0field);
#line 133
___nl__int__29 = 1;
#line 133
(*___nl__int_ptr__28) = (*___nl__int_ptr__28) + ___nl__int__29;
#line 133
___nl__int_ptr__28 = NULL;
#line 133
//clear ___nl__int__29;
#line 134
label_93:
;
#line 135
___nl__int_ptr__32 = &((*___ref___rec__0).pos0field);
#line 135
___nl__int__31 = (*___nl__int_ptr__32);
#line 135
___nl__int_ptr__32 = NULL;
#line 135
___nl__int_ptr__34 = &((*___ref___rec__0).len0field);
#line 135
___nl__int__33 = (*___nl__int_ptr__34);
#line 135
___nl__int_ptr__34 = NULL;
#line 135
___nl__bool__30 = ___nl__int__31 == ___nl__int__33;
#line 135
//clear ___nl__int__31;
#line 135
//clear ___nl__int__33;
#line 135
___nl__bool__30 = !___nl__bool__30;
#line 135
if(___nl__bool__30){ goto label_112;}
#line 135
//clear ___nl__bool__3;
#line 135
c_rt_lib0clear(&___nl__im__9);
#line 135
//clear ___nl__int__10;
#line 135
//clear ___nl__bool__11;
#line 135
//clear ___nl__bool__30;
#line 135
return NULL;
#line 135
goto label_112;
#line 135
label_112:
;
#line 135
//clear ___nl__bool__30;
#line 136
c_rt_lib0move(&___nl__im__35, ntokenizer_priv0get_char(___ref___rec__0));
#line 137
___nl__int_ptr__36 = &((*___ref___rec__0).pos0field);
#line 137
___nl__int__37 = 1;
#line 137
(*___nl__int_ptr__36) = (*___nl__int_ptr__36) + ___nl__int__37;
#line 137
___nl__int_ptr__36 = NULL;
#line 137
//clear ___nl__int__37;
#line 138
___nl__bool__38 = ___nl__bool__3;
#line 138
___nl__bool__38 = !___nl__bool__38;
#line 138
if(___nl__bool__38){ goto label_127;}
#line 139
___nl__im_ptr__39 = &((*___ref___rec__0).last_comment0field);
#line 139
c_rt_lib0move(___nl__im_ptr__39, c_rt_lib0concat_add((*___nl__im_ptr__39), ___nl__im__35));
#line 139
___nl__im_ptr__39 = NULL;
#line 140
goto label_127;
#line 140
label_127:
;
#line 140
//clear ___nl__bool__38;
#line 141
___nl__int__41 = string0ord(___nl__im__35);
#line 141
___nl__int__42 = 10;
#line 141
___nl__bool__40 = ___nl__int__41 == ___nl__int__42;
#line 141
//clear ___nl__int__41;
#line 141
//clear ___nl__int__42;
#line 141
___nl__bool__40 = !___nl__bool__40;
#line 141
if(___nl__bool__40){ goto label_140;}
#line 141
c_rt_lib0clear(&___nl__im__35);
#line 141
//clear ___nl__bool__40;
#line 141
goto label_144;
#line 141
goto label_140;
#line 141
label_140:
;
#line 141
//clear ___nl__bool__40;
#line 141
c_rt_lib0clear(&___nl__im__35);
#line 134
goto label_93;
#line 134
label_144:
;
#line 143
___nl__int_ptr__43 = &((*___ref___rec__0).ln_nr0field);
#line 143
___nl__int__44 = 1;
#line 143
(*___nl__int_ptr__43) = (*___nl__int_ptr__43) + ___nl__int__44;
#line 143
___nl__int_ptr__43 = NULL;
#line 143
//clear ___nl__int__44;
#line 144
goto label_159;
#line 144
label_151:
;
#line 145
//clear ___nl__bool__3;
#line 145
c_rt_lib0clear(&___nl__im__9);
#line 145
//clear ___nl__int__10;
#line 145
//clear ___nl__bool__11;
#line 145
c_rt_lib0clear(&___nl__im__35);
#line 145
return NULL;
#line 146
goto label_159;
#line 146
label_159:
;
#line 146
//clear ___nl__bool__11;
#line 146
c_rt_lib0clear(&___nl__im__35);
#line 146
c_rt_lib0clear(&___nl__im__9);
#line 146
//clear ___nl__int__10;
#line 117
goto label_6;
#line 117
//clear ___nl__bool__3;
#line 117
c_rt_lib0clear(&___nl__im__9);
#line 117
//clear ___nl__int__10;
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
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(1146));
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
___nl__bool__1 = !___nl__bool__1;
#line 151
if(___nl__bool__1){ goto label_11;}
#line 151
___nl__bool__4 = true;
#line 151
//clear ___nl__bool__1;
#line 151
return ___nl__bool__4;
#line 151
goto label_11;
#line 151
label_11:
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
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(1129));
#line 152
c_rt_lib0clear(&___nl__im__6);
#line 152
___nl__bool__5 = !___nl__bool__5;
#line 152
if(___nl__bool__5){ goto label_25;}
#line 152
___nl__bool__8 = true;
#line 152
//clear ___nl__bool__5;
#line 152
return ___nl__bool__8;
#line 152
goto label_25;
#line 152
label_25:
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
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(1131));
#line 153
c_rt_lib0clear(&___nl__im__10);
#line 153
___nl__bool__9 = !___nl__bool__9;
#line 153
if(___nl__bool__9){ goto label_39;}
#line 153
___nl__bool__12 = true;
#line 153
//clear ___nl__bool__9;
#line 153
return ___nl__bool__12;
#line 153
goto label_39;
#line 153
label_39:
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
if(___nl__bool__3){ goto label_8;}
#line 158
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 158
label_8:
;
#line 158
//clear ___nl__bool__3;
#line 158
___nl__bool__2 = !___nl__bool__2;
#line 158
if(___nl__bool__2){ goto label_18;}
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
goto label_18;
#line 161
label_18:
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
if(___nl__bool__3){ goto label_8;}
#line 188
___nl__bool__2 = ntokenizer_priv0is_token(___ref___rec__0);
#line 188
label_8:
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
if(___nl__bool__2){ goto label_7;}
#line 192
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 192
nl_die_arg(___nl__im__3);
#line 192
goto label_7;
#line 192
label_7:
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(1115)));
#line 199
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
___nl__bool__1 = !___nl__bool__1;
#line 199
if(___nl__bool__1){ goto label_9;}
#line 199
___nl__bool__3 = true;
#line 199
//clear ___nl__bool__1;
#line 199
return ___nl__bool__3;
#line 199
goto label_9;
#line 199
label_9:
;
#line 199
//clear ___nl__bool__1;
#line 199
//clear ___nl__bool__3;
#line 200
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(1131)));
#line 200
___nl__bool__4 = ntokenizer0is_type(___ref___rec__0, ___nl__im__5);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 200
___nl__bool__4 = !___nl__bool__4;
#line 200
if(___nl__bool__4){ goto label_21;}
#line 200
___nl__bool__6 = true;
#line 200
//clear ___nl__bool__4;
#line 200
return ___nl__bool__6;
#line 200
goto label_21;
#line 200
label_21:
;
#line 200
//clear ___nl__bool__4;
#line 200
//clear ___nl__bool__6;
#line 201
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(1129)));
#line 201
___nl__bool__7 = ntokenizer0is_type(___ref___rec__0, ___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
___nl__bool__7 = !___nl__bool__7;
#line 201
if(___nl__bool__7){ goto label_51;}
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
if(___nl__bool__9){ goto label_47;}
#line 202
___nl__bool__15 = true;
#line 202
//clear ___nl__bool__7;
#line 202
//clear ___nl__bool__9;
#line 202
return ___nl__bool__15;
#line 202
goto label_47;
#line 202
label_47:
;
#line 202
//clear ___nl__bool__9;
#line 202
//clear ___nl__bool__15;
#line 203
goto label_51;
#line 203
label_51:
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(1115)));
#line 208
___nl__bool__1 = ntokenizer0is_type(___ref___rec__0, ___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
___nl__bool__1 = !___nl__bool__1;
#line 208
if(___nl__bool__1){ goto label_11;}
#line 208
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(1115)));
#line 208
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_type(___ref___rec__0, ___nl__im__4));
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
//clear ___nl__bool__1;
#line 208
return ___nl__im__3;
#line 208
goto label_11;
#line 208
label_11:
;
#line 208
//clear ___nl__bool__1;
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 209
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(1131)));
#line 209
___nl__bool__5 = ntokenizer0is_type(___ref___rec__0, ___nl__im__6);
#line 209
c_rt_lib0clear(&___nl__im__6);
#line 209
___nl__bool__5 = !___nl__bool__5;
#line 209
if(___nl__bool__5){ goto label_25;}
#line 209
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(1131)));
#line 209
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_type(___ref___rec__0, ___nl__im__8));
#line 209
c_rt_lib0clear(&___nl__im__8);
#line 209
//clear ___nl__bool__5;
#line 209
return ___nl__im__7;
#line 209
goto label_25;
#line 209
label_25:
;
#line 209
//clear ___nl__bool__5;
#line 209
c_rt_lib0clear(&___nl__im__7);
#line 210
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(1129)));
#line 210
___nl__bool__9 = ntokenizer0is_type(___ref___rec__0, ___nl__im__10);
#line 210
c_rt_lib0clear(&___nl__im__10);
#line 210
___nl__bool__9 = !___nl__bool__9;
#line 210
if(___nl__bool__9){ goto label_57;}
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
if(___nl__bool__11){ goto label_53;}
#line 211
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(1129)));
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
goto label_53;
#line 211
label_53:
;
#line 211
//clear ___nl__bool__11;
#line 211
c_rt_lib0clear(&___nl__im__17);
#line 213
goto label_57;
#line 213
label_57:
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
#line 218
c_rt_lib0move(&___nl__im__9,___get_global_string_const(1147));
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
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1148));
#line 218
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 218
c_rt_lib0clear(&___nl__im__8);
#line 218
c_rt_lib0clear(&___nl__im__12);
#line 219
___nl__int_ptr__14 = &((*___ref___rec__0).ln_nr0field);
#line 219
___nl__int__13 = (*___nl__int_ptr__14);
#line 219
___nl__int_ptr__14 = NULL;
#line 219
c_rt_lib0move(&___nl__string__15, c_rt_lib0int_to_string(___nl__int__13));
#line 219
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__15));
#line 219
c_rt_lib0clear(&___nl__im__7);
#line 219
//clear ___nl__int__13;
#line 219
c_rt_lib0clear(&___nl__string__15);
#line 219
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1149));
#line 219
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 219
c_rt_lib0clear(&___nl__im__6);
#line 219
c_rt_lib0clear(&___nl__im__16);
#line 220
___nl__int__20 = 1;
#line 220
___nl__int_ptr__22 = &((*___ref___rec__0).pos0field);
#line 220
___nl__int__21 = (*___nl__int_ptr__22);
#line 220
___nl__int_ptr__22 = NULL;
#line 220
___nl__int__19 = ___nl__int__20 + ___nl__int__21;
#line 220
//clear ___nl__int__20;
#line 220
//clear ___nl__int__21;
#line 220
___nl__int_ptr__24 = &((*___ref___rec__0).ln_pos0field);
#line 220
___nl__int__23 = (*___nl__int_ptr__24);
#line 220
___nl__int_ptr__24 = NULL;
#line 220
___nl__int__18 = ___nl__int__19 - ___nl__int__23;
#line 220
//clear ___nl__int__19;
#line 220
//clear ___nl__int__23;
#line 220
___nl__im_ptr__27 = &((*___ref___rec__0).next_token0field);
#line 220
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 220
___nl__im_ptr__27 = NULL;
#line 220
___nl__int__25 = string0length(___nl__im__26);
#line 220
c_rt_lib0clear(&___nl__im__26);
#line 220
___nl__int__17 = ___nl__int__18 - ___nl__int__25;
#line 220
//clear ___nl__int__18;
#line 220
//clear ___nl__int__25;
#line 220
c_rt_lib0move(&___nl__string__28, c_rt_lib0int_to_string(___nl__int__17));
#line 220
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__string__28));
#line 220
c_rt_lib0clear(&___nl__im__5);
#line 220
//clear ___nl__int__17;
#line 220
c_rt_lib0clear(&___nl__string__28);
#line 220
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1150));
#line 220
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__29));
#line 220
c_rt_lib0clear(&___nl__im__4);
#line 220
c_rt_lib0clear(&___nl__im__29);
#line 221
___nl__im_ptr__32 = &((*___ref___rec__0).type0field);
#line 221
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 221
___nl__im_ptr__32 = NULL;
#line 221
c_rt_lib0move(&___nl__im__30, ov0get_element(___nl__im__31));
#line 221
c_rt_lib0clear(&___nl__im__31);
#line 221
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__30));
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__30);
#line 221
c_rt_lib0move(&___nl__im__33,___get_global_string_const(444));
#line 221
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__33));
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__33);
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
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
#line 226
___nl__bool__1 = string0is_digit(___nl__im__0);
#line 226
if(___nl__bool__1){ goto label_16;}
#line 226
___nl__int__3 = string0ord(___nl__im__0);
#line 226
___nl__int__4 = 65;
#line 226
___nl__bool__1 = ___nl__int__3 >= ___nl__int__4;
#line 226
//clear ___nl__int__3;
#line 226
//clear ___nl__int__4;
#line 226
___nl__bool__2 = !___nl__bool__1;
#line 226
if(___nl__bool__2){ goto label_14;}
#line 226
___nl__int__5 = string0ord(___nl__im__0);
#line 226
___nl__int__6 = 70;
#line 226
___nl__bool__1 = ___nl__int__5 <= ___nl__int__6;
#line 226
//clear ___nl__int__5;
#line 226
//clear ___nl__int__6;
#line 226
label_14:
;
#line 226
//clear ___nl__bool__2;
#line 226
label_16:
;
#line 226
if(___nl__bool__1){ goto label_32;}
#line 227
___nl__int__8 = string0ord(___nl__im__0);
#line 227
___nl__int__9 = 97;
#line 227
___nl__bool__1 = ___nl__int__8 >= ___nl__int__9;
#line 227
//clear ___nl__int__8;
#line 227
//clear ___nl__int__9;
#line 227
___nl__bool__7 = !___nl__bool__1;
#line 227
if(___nl__bool__7){ goto label_30;}
#line 227
___nl__int__10 = string0ord(___nl__im__0);
#line 227
___nl__int__11 = 102;
#line 227
___nl__bool__1 = ___nl__int__10 <= ___nl__int__11;
#line 227
//clear ___nl__int__10;
#line 227
//clear ___nl__int__11;
#line 227
label_30:
;
#line 227
//clear ___nl__bool__7;
#line 227
label_32:
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
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT * ___nl__int_ptr__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
#line 231
c_rt_lib0move(&___nl__im__2, ntokenizer_priv0get_char_oper());
#line 231
___nl__int__4 = 0;
#line 231
___nl__int__5 = 1;
#line 231
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 231
label_4:
;
#line 231
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 231
if(___nl__bool__7){ goto label_110;}
#line 231
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 231
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 232
___nl__int_ptr__11 = &((*___ref___rec__0).len0field);
#line 232
___nl__int__10 = (*___nl__int_ptr__11);
#line 232
___nl__int_ptr__11 = NULL;
#line 232
___nl__int__14 = 1;
#line 232
___nl__int_ptr__16 = &((*___ref___rec__0).pos0field);
#line 232
___nl__int__15 = (*___nl__int_ptr__16);
#line 232
___nl__int_ptr__16 = NULL;
#line 232
___nl__int__13 = ___nl__int__14 + ___nl__int__15;
#line 232
//clear ___nl__int__14;
#line 232
//clear ___nl__int__15;
#line 232
___nl__int__17 = string0length(___nl__im__3);
#line 232
___nl__int__12 = ___nl__int__13 + ___nl__int__17;
#line 232
//clear ___nl__int__13;
#line 232
//clear ___nl__int__17;
#line 232
___nl__bool__9 = ___nl__int__10 < ___nl__int__12;
#line 232
//clear ___nl__int__10;
#line 232
//clear ___nl__int__12;
#line 232
___nl__bool__9 = !___nl__bool__9;
#line 232
if(___nl__bool__9){ goto label_31;}
#line 232
//clear ___nl__bool__9;
#line 232
goto label_107;
#line 232
goto label_31;
#line 232
label_31:
;
#line 232
//clear ___nl__bool__9;
#line 233
___nl__im_ptr__21 = &((*___ref___rec__0).text0field);
#line 233
c_rt_lib0copy(&___nl__im__20, (*___nl__im_ptr__21));
#line 233
___nl__im_ptr__21 = NULL;
#line 233
___nl__int_ptr__23 = &((*___ref___rec__0).pos0field);
#line 233
___nl__int__22 = (*___nl__int_ptr__23);
#line 233
___nl__int_ptr__23 = NULL;
#line 233
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__22));
#line 233
___nl__int__25 = string0length(___nl__im__3);
#line 233
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 233
c_rt_lib0move(&___nl__im__19, c_std_lib0fast_substr(___nl__im__20, ___nl__im__24, ___nl__im__26));
#line 233
c_rt_lib0clear(&___nl__im__20);
#line 233
//clear ___nl__int__22;
#line 233
c_rt_lib0clear(&___nl__im__24);
#line 233
//clear ___nl__int__25;
#line 233
c_rt_lib0clear(&___nl__im__26);
#line 233
___nl__bool__18 = c_rt_lib0eq(___nl__im__19, ___nl__im__3);
#line 233
c_rt_lib0clear(&___nl__im__19);
#line 233
___nl__bool__18 = !___nl__bool__18;
#line 233
if(___nl__bool__18){ goto label_102;}
#line 236
c_rt_lib0move(&___nl__im__29, ntokenizer_priv0get_char(___ref___rec__0));
#line 236
___nl__bool__27 = string0is_letter(___nl__im__29);
#line 236
c_rt_lib0clear(&___nl__im__29);
#line 236
___nl__bool__28 = !___nl__bool__27;
#line 236
if(___nl__bool__28){ goto label_78;}
#line 237
___nl__im_ptr__32 = &((*___ref___rec__0).text0field);
#line 237
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 237
___nl__im_ptr__32 = NULL;
#line 237
___nl__int_ptr__35 = &((*___ref___rec__0).pos0field);
#line 237
___nl__int__34 = (*___nl__int_ptr__35);
#line 237
___nl__int_ptr__35 = NULL;
#line 237
___nl__int__36 = string0length(___nl__im__3);
#line 237
___nl__int__33 = ___nl__int__34 + ___nl__int__36;
#line 237
//clear ___nl__int__34;
#line 237
//clear ___nl__int__36;
#line 237
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__33));
#line 237
___nl__int__38 = 1;
#line 237
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__38));
#line 237
c_rt_lib0move(&___nl__im__30, c_std_lib0fast_substr(___nl__im__31, ___nl__im__37, ___nl__im__39));
#line 237
c_rt_lib0clear(&___nl__im__31);
#line 237
//clear ___nl__int__33;
#line 237
c_rt_lib0clear(&___nl__im__37);
#line 237
//clear ___nl__int__38;
#line 237
c_rt_lib0clear(&___nl__im__39);
#line 237
___nl__bool__27 = string0is_letter(___nl__im__30);
#line 237
c_rt_lib0clear(&___nl__im__30);
#line 237
label_78:
;
#line 237
//clear ___nl__bool__28;
#line 237
___nl__bool__27 = !___nl__bool__27;
#line 237
if(___nl__bool__27){ goto label_86;}
#line 234
//clear ___nl__bool__18;
#line 234
//clear ___nl__bool__27;
#line 234
goto label_107;
#line 234
goto label_86;
#line 234
label_86:
;
#line 234
//clear ___nl__bool__27;
#line 238
c_rt_lib0copy(___ref___im__1, ___nl__im__3);
#line 239
___nl__bool__40 = true;
#line 239
c_rt_lib0move(&___nl__im__41, c_rt_lib0bool_to_nl_native(___nl__bool__40));
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
c_rt_lib0clear(&___nl__im__8);
#line 239
//clear ___nl__bool__18;
#line 239
//clear ___nl__bool__40;
#line 239
return ___nl__im__41;
#line 240
goto label_102;
#line 240
label_102:
;
#line 240
//clear ___nl__bool__18;
#line 240
//clear ___nl__bool__40;
#line 240
c_rt_lib0clear(&___nl__im__41);
#line 240
c_rt_lib0clear(&___nl__im__3);
#line 240
label_107:
;
#line 241
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 241
goto label_4;
#line 241
label_110:
;
#line 242
___nl__bool__42 = false;
#line 242
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__42));
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
c_rt_lib0clear(&___nl__im__8);
#line 242
//clear ___nl__bool__42;
#line 242
return ___nl__im__43;
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
c_rt_lib0clear(&___nl__im__8);
#line 242
//clear ___nl__bool__42;
#line 242
c_rt_lib0clear(&___nl__im__43);
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(154), ___nl__im__4, ___get_global_string_const(1075), ___nl__im__12));
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
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_string_const(154), ___nl__im__17, ___get_global_string_const(1075), ___nl__im__25));
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
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(122));
#line 249
c_rt_lib0clear(&___nl__im__28);
#line 249
___nl__bool__27 = !___nl__bool__27;
#line 249
if(___nl__bool__27){ goto label_65;}
#line 249
//clear ___nl__bool__27;
#line 249
return NULL;
#line 249
goto label_65;
#line 249
label_65:
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
___nl__bool__30 = ___nl__int__31 == ___nl__int__33;
#line 250
//clear ___nl__int__31;
#line 250
//clear ___nl__int__33;
#line 250
___nl__bool__30 = !___nl__bool__30;
#line 250
if(___nl__bool__30){ goto label_91;}
#line 251
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_string_const(1062)));
#line 251
___nl__im_ptr__36 = &((*___ref___rec__0).type0field);
#line 251
c_rt_lib0copy(___nl__im_ptr__36, ___nl__im__35);
#line 251
___nl__im_ptr__36 = NULL;
#line 251
c_rt_lib0clear(&___nl__im__35);
#line 252
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 252
___nl__im_ptr__38 = &((*___ref___rec__0).next_token0field);
#line 252
c_rt_lib0copy(___nl__im_ptr__38, ___nl__im__37);
#line 252
___nl__im_ptr__38 = NULL;
#line 252
c_rt_lib0clear(&___nl__im__37);
#line 253
//clear ___nl__bool__30;
#line 253
return NULL;
#line 254
goto label_91;
#line 254
label_91:
;
#line 254
//clear ___nl__bool__30;
#line 255
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 256
c_rt_lib0move(&___nl__im__41,___get_global_string_const(140));
#line 256
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__41);
#line 256
c_rt_lib0clear(&___nl__im__41);
#line 256
___nl__bool__40 = !___nl__bool__40;
#line 256
if(___nl__bool__40){ goto label_168;}
#line 257
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 257
___nl__im_ptr__43 = &((*___ref___rec__0).next_token0field);
#line 257
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__42);
#line 257
___nl__im_ptr__43 = NULL;
#line 257
c_rt_lib0clear(&___nl__im__42);
#line 258
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(406)));
#line 258
___nl__im_ptr__45 = &((*___ref___rec__0).type0field);
#line 258
c_rt_lib0copy(___nl__im_ptr__45, ___nl__im__44);
#line 258
___nl__im_ptr__45 = NULL;
#line 258
c_rt_lib0clear(&___nl__im__44);
#line 259
label_109:
;
#line 260
___nl__int__46 = 1;
#line 260
___nl__int_ptr__47 = &((*___ref___rec__0).pos0field);
#line 260
(*___nl__int_ptr__47) = (*___nl__int_ptr__47) + ___nl__int__46;
#line 260
___nl__int_ptr__47 = NULL;
#line 260
//clear ___nl__int__46;
#line 261
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 262
c_rt_lib0move(&___nl__im__49,___get_global_string_const(140));
#line 262
___nl__bool__48 = c_rt_lib0eq(___nl__im__39, ___nl__im__49);
#line 262
c_rt_lib0clear(&___nl__im__49);
#line 262
___nl__bool__48 = !___nl__bool__48;
#line 262
if(___nl__bool__48){ goto label_143;}
#line 263
___nl__int__50 = 1;
#line 263
___nl__int_ptr__51 = &((*___ref___rec__0).pos0field);
#line 263
(*___nl__int_ptr__51) = (*___nl__int_ptr__51) + ___nl__int__50;
#line 263
___nl__int_ptr__51 = NULL;
#line 263
//clear ___nl__int__50;
#line 264
c_rt_lib0move(&___nl__im__53, ntokenizer_priv0get_char(___ref___rec__0));
#line 264
c_rt_lib0move(&___nl__im__54,___get_global_string_const(140));
#line 264
___nl__bool__52 = c_rt_lib0eq(___nl__im__53, ___nl__im__54);
#line 264
c_rt_lib0clear(&___nl__im__53);
#line 264
c_rt_lib0clear(&___nl__im__54);
#line 264
___nl__bool__52 = !___nl__bool__52;
#line 264
___nl__bool__52 = !___nl__bool__52;
#line 264
if(___nl__bool__52){ goto label_140;}
#line 264
c_rt_lib0clear(&___nl__im__39);
#line 264
//clear ___nl__bool__40;
#line 264
//clear ___nl__bool__48;
#line 264
//clear ___nl__bool__52;
#line 264
return NULL;
#line 264
goto label_140;
#line 264
label_140:
;
#line 264
//clear ___nl__bool__52;
#line 265
goto label_161;
#line 265
label_143:
;
#line 265
___nl__int__55 = string0ord(___nl__im__39);
#line 265
___nl__int__56 = 10;
#line 265
___nl__bool__48 = ___nl__int__55 == ___nl__int__56;
#line 265
//clear ___nl__int__55;
#line 265
//clear ___nl__int__56;
#line 265
___nl__bool__48 = !___nl__bool__48;
#line 265
if(___nl__bool__48){ goto label_161;}
#line 266
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_string_const(1128)));
#line 266
___nl__im_ptr__58 = &((*___ref___rec__0).type0field);
#line 266
c_rt_lib0copy(___nl__im_ptr__58, ___nl__im__57);
#line 266
___nl__im_ptr__58 = NULL;
#line 266
c_rt_lib0clear(&___nl__im__57);
#line 267
c_rt_lib0clear(&___nl__im__39);
#line 267
//clear ___nl__bool__40;
#line 267
//clear ___nl__bool__48;
#line 267
return NULL;
#line 268
goto label_161;
#line 268
label_161:
;
#line 268
//clear ___nl__bool__48;
#line 269
___nl__im_ptr__59 = &((*___ref___rec__0).next_token0field);
#line 269
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0concat_add((*___nl__im_ptr__59), ___nl__im__39));
#line 269
___nl__im_ptr__59 = NULL;
#line 259
goto label_109;
#line 271
goto label_518;
#line 271
label_168:
;
#line 271
c_rt_lib0move(&___nl__im__61, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 271
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__39, ___nl__im__61));
#line 271
c_rt_lib0clear(&___nl__im__61);
#line 271
c_rt_lib0move(&___nl__im__62,___get_global_string_const(308));
#line 271
___nl__bool__40 = c_rt_lib0eq(___nl__im__60, ___nl__im__62);
#line 271
c_rt_lib0clear(&___nl__im__60);
#line 271
c_rt_lib0clear(&___nl__im__62);
#line 271
if(___nl__bool__40){ goto label_184;}
#line 271
c_rt_lib0move(&___nl__im__64, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 271
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__39, ___nl__im__64));
#line 271
c_rt_lib0clear(&___nl__im__64);
#line 271
c_rt_lib0move(&___nl__im__65,___get_global_string_const(34));
#line 271
___nl__bool__40 = c_rt_lib0eq(___nl__im__63, ___nl__im__65);
#line 271
c_rt_lib0clear(&___nl__im__63);
#line 271
c_rt_lib0clear(&___nl__im__65);
#line 271
label_184:
;
#line 271
___nl__bool__40 = !___nl__bool__40;
#line 271
if(___nl__bool__40){ goto label_205;}
#line 272
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_none(___get_global_string_const(1146)));
#line 272
___nl__im_ptr__67 = &((*___ref___rec__0).type0field);
#line 272
c_rt_lib0copy(___nl__im_ptr__67, ___nl__im__66);
#line 272
___nl__im_ptr__67 = NULL;
#line 272
c_rt_lib0clear(&___nl__im__66);
#line 273
c_rt_lib0move(&___nl__im__69, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 273
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__39, ___nl__im__69));
#line 273
c_rt_lib0clear(&___nl__im__69);
#line 273
___nl__im_ptr__70 = &((*___ref___rec__0).next_token0field);
#line 273
c_rt_lib0copy(___nl__im_ptr__70, ___nl__im__68);
#line 273
___nl__im_ptr__70 = NULL;
#line 273
c_rt_lib0clear(&___nl__im__68);
#line 274
___nl__int__71 = 2;
#line 274
___nl__int_ptr__72 = &((*___ref___rec__0).pos0field);
#line 274
(*___nl__int_ptr__72) = (*___nl__int_ptr__72) + ___nl__int__71;
#line 274
___nl__int_ptr__72 = NULL;
#line 274
//clear ___nl__int__71;
#line 275
goto label_518;
#line 275
label_205:
;
#line 275
___nl__bool__40 = string0is_letter(___nl__im__39);
#line 275
___nl__bool__40 = !___nl__bool__40;
#line 275
if(___nl__bool__40){ goto label_285;}
#line 276
___nl__im_ptr__73 = &((*___ref___rec__0).next_token0field);
#line 276
c_rt_lib0copy(___nl__im_ptr__73, ___nl__im__39);
#line 276
___nl__im_ptr__73 = NULL;
#line 277
___nl__int_ptr__74 = &((*___ref___rec__0).pos0field);
#line 277
___nl__int__75 = 1;
#line 277
(*___nl__int_ptr__74) = (*___nl__int_ptr__74) + ___nl__int__75;
#line 277
___nl__int_ptr__74 = NULL;
#line 277
//clear ___nl__int__75;
#line 278
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 279
label_218:
;
#line 279
c_rt_lib0move(&___nl__im__78,___get_global_string_const(36));
#line 279
___nl__bool__76 = c_rt_lib0ne(___nl__im__39, ___nl__im__78);
#line 279
c_rt_lib0clear(&___nl__im__78);
#line 279
___nl__bool__77 = !___nl__bool__76;
#line 279
if(___nl__bool__77){ goto label_232;}
#line 279
___nl__bool__76 = string0is_letter(___nl__im__39);
#line 279
if(___nl__bool__76){ goto label_227;}
#line 279
___nl__bool__76 = string0is_digit(___nl__im__39);
#line 279
label_227:
;
#line 279
if(___nl__bool__76){ goto label_232;}
#line 279
c_rt_lib0move(&___nl__im__79,___get_global_string_const(107));
#line 279
___nl__bool__76 = c_rt_lib0eq(___nl__im__39, ___nl__im__79);
#line 279
c_rt_lib0clear(&___nl__im__79);
#line 279
label_232:
;
#line 279
//clear ___nl__bool__77;
#line 279
___nl__bool__76 = !___nl__bool__76;
#line 279
if(___nl__bool__76){ goto label_246;}
#line 280
___nl__im_ptr__80 = &((*___ref___rec__0).next_token0field);
#line 280
c_rt_lib0move(___nl__im_ptr__80, c_rt_lib0concat_add((*___nl__im_ptr__80), ___nl__im__39));
#line 280
___nl__im_ptr__80 = NULL;
#line 281
___nl__int_ptr__81 = &((*___ref___rec__0).pos0field);
#line 281
___nl__int__82 = 1;
#line 281
(*___nl__int_ptr__81) = (*___nl__int_ptr__81) + ___nl__int__82;
#line 281
___nl__int_ptr__81 = NULL;
#line 281
//clear ___nl__int__82;
#line 282
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 283
goto label_218;
#line 283
label_246:
;
#line 284
c_rt_lib0move(&___nl__im__84, ntokenizer_priv0get_lett_oper());
#line 284
___nl__im_ptr__86 = &((*___ref___rec__0).next_token0field);
#line 284
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 284
___nl__im_ptr__86 = NULL;
#line 284
___nl__bool__83 = hash0has_key(___nl__im__84, ___nl__im__85);
#line 284
c_rt_lib0clear(&___nl__im__84);
#line 284
c_rt_lib0clear(&___nl__im__85);
#line 284
___nl__bool__83 = !___nl__bool__83;
#line 284
if(___nl__bool__83){ goto label_262;}
#line 285
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_string_const(1129)));
#line 285
___nl__im_ptr__88 = &((*___ref___rec__0).type0field);
#line 285
c_rt_lib0copy(___nl__im_ptr__88, ___nl__im__87);
#line 285
___nl__im_ptr__88 = NULL;
#line 285
c_rt_lib0clear(&___nl__im__87);
#line 286
goto label_282;
#line 286
label_262:
;
#line 287
c_rt_lib0move(&___nl__im__91, ntokenizer_priv0get_keywords());
#line 287
___nl__im_ptr__93 = &((*___ref___rec__0).next_token0field);
#line 287
c_rt_lib0copy(&___nl__im__92, (*___nl__im_ptr__93));
#line 287
___nl__im_ptr__93 = NULL;
#line 287
___nl__bool__90 = hash0has_key(___nl__im__91, ___nl__im__92);
#line 287
c_rt_lib0clear(&___nl__im__91);
#line 287
c_rt_lib0clear(&___nl__im__92);
#line 287
if(___nl__bool__90){ goto label_273;}
#line 287
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_none(___get_global_string_const(1115)));
#line 287
goto label_275;
#line 287
label_273:
;
#line 287
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_none(___get_global_string_const(1131)));
#line 287
label_275:
;
#line 287
//clear ___nl__bool__90;
#line 287
___nl__im_ptr__94 = &((*___ref___rec__0).type0field);
#line 287
c_rt_lib0copy(___nl__im_ptr__94, ___nl__im__89);
#line 287
___nl__im_ptr__94 = NULL;
#line 287
c_rt_lib0clear(&___nl__im__89);
#line 288
goto label_282;
#line 288
label_282:
;
#line 288
//clear ___nl__bool__83;
#line 289
goto label_518;
#line 289
label_285:
;
#line 289
c_rt_lib0move(&___nl__im__95, ntokenizer_priv0try_get_operator(___ref___rec__0, &___nl__im__39));
#line 289
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__95);
#line 289
c_rt_lib0clear(&___nl__im__95);
#line 289
___nl__bool__40 = !___nl__bool__40;
#line 289
if(___nl__bool__40){ goto label_305;}
#line 290
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_none(___get_global_string_const(1129)));
#line 290
___nl__im_ptr__97 = &((*___ref___rec__0).type0field);
#line 290
c_rt_lib0copy(___nl__im_ptr__97, ___nl__im__96);
#line 290
___nl__im_ptr__97 = NULL;
#line 290
c_rt_lib0clear(&___nl__im__96);
#line 291
___nl__im_ptr__98 = &((*___ref___rec__0).next_token0field);
#line 291
c_rt_lib0copy(___nl__im_ptr__98, ___nl__im__39);
#line 291
___nl__im_ptr__98 = NULL;
#line 292
___nl__int__99 = string0length(___nl__im__39);
#line 292
___nl__int_ptr__100 = &((*___ref___rec__0).pos0field);
#line 292
(*___nl__int_ptr__100) = (*___nl__int_ptr__100) + ___nl__int__99;
#line 292
___nl__int_ptr__100 = NULL;
#line 292
//clear ___nl__int__99;
#line 293
goto label_518;
#line 293
label_305:
;
#line 293
c_rt_lib0move(&___nl__im__102,___get_global_string_const(1151));
#line 293
c_rt_lib0move(&___nl__im__101, string0index2(___nl__im__102, ___nl__im__39));
#line 293
c_rt_lib0clear(&___nl__im__102);
#line 293
___nl__int__103 = 0;
#line 293
___nl__int__104 = getIntFromImm(___nl__im__101);
#line 293
___nl__bool__40 = ___nl__int__104 >= ___nl__int__103;
#line 293
c_rt_lib0clear(&___nl__im__101);
#line 293
//clear ___nl__int__103;
#line 293
//clear ___nl__int__104;
#line 293
___nl__bool__40 = !___nl__bool__40;
#line 293
if(___nl__bool__40){ goto label_331;}
#line 294
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_none(___get_global_string_const(1146)));
#line 294
___nl__im_ptr__106 = &((*___ref___rec__0).type0field);
#line 294
c_rt_lib0copy(___nl__im_ptr__106, ___nl__im__105);
#line 294
___nl__im_ptr__106 = NULL;
#line 294
c_rt_lib0clear(&___nl__im__105);
#line 295
___nl__im_ptr__107 = &((*___ref___rec__0).next_token0field);
#line 295
c_rt_lib0copy(___nl__im_ptr__107, ___nl__im__39);
#line 295
___nl__im_ptr__107 = NULL;
#line 296
___nl__int_ptr__108 = &((*___ref___rec__0).pos0field);
#line 296
___nl__int__109 = 1;
#line 296
(*___nl__int_ptr__108) = (*___nl__int_ptr__108) + ___nl__int__109;
#line 296
___nl__int_ptr__108 = NULL;
#line 296
//clear ___nl__int__109;
#line 297
goto label_518;
#line 297
label_331:
;
#line 297
___nl__bool__40 = string0is_digit(___nl__im__39);
#line 297
if(___nl__bool__40){ goto label_349;}
#line 297
c_rt_lib0move(&___nl__im__111,___get_global_string_const(367));
#line 297
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__111);
#line 297
c_rt_lib0clear(&___nl__im__111);
#line 297
if(___nl__bool__40){ goto label_341;}
#line 297
c_rt_lib0move(&___nl__im__112,___get_global_string_const(369));
#line 297
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__112);
#line 297
c_rt_lib0clear(&___nl__im__112);
#line 297
label_341:
;
#line 297
___nl__bool__110 = !___nl__bool__40;
#line 297
if(___nl__bool__110){ goto label_347;}
#line 297
c_rt_lib0move(&___nl__im__113, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 297
___nl__bool__40 = string0is_digit(___nl__im__113);
#line 297
c_rt_lib0clear(&___nl__im__113);
#line 297
label_347:
;
#line 297
//clear ___nl__bool__110;
#line 297
label_349:
;
#line 297
___nl__bool__40 = !___nl__bool__40;
#line 297
if(___nl__bool__40){ goto label_508;}
#line 298
___nl__im_ptr__114 = &((*___ref___rec__0).next_token0field);
#line 298
c_rt_lib0copy(___nl__im_ptr__114, ___nl__im__39);
#line 298
___nl__im_ptr__114 = NULL;
#line 299
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_none(___get_global_string_const(1126)));
#line 299
___nl__im_ptr__116 = &((*___ref___rec__0).type0field);
#line 299
c_rt_lib0copy(___nl__im_ptr__116, ___nl__im__115);
#line 299
___nl__im_ptr__116 = NULL;
#line 299
c_rt_lib0clear(&___nl__im__115);
#line 300
___nl__int_ptr__117 = &((*___ref___rec__0).pos0field);
#line 300
___nl__int__118 = 1;
#line 300
(*___nl__int_ptr__117) = (*___nl__int_ptr__117) + ___nl__int__118;
#line 300
___nl__int_ptr__117 = NULL;
#line 300
//clear ___nl__int__118;
#line 301
c_rt_lib0move(&___nl__im__120,___get_global_string_const(367));
#line 301
___nl__bool__119 = c_rt_lib0eq(___nl__im__39, ___nl__im__120);
#line 301
c_rt_lib0clear(&___nl__im__120);
#line 301
if(___nl__bool__119){ goto label_372;}
#line 301
c_rt_lib0move(&___nl__im__121,___get_global_string_const(369));
#line 301
___nl__bool__119 = c_rt_lib0eq(___nl__im__39, ___nl__im__121);
#line 301
c_rt_lib0clear(&___nl__im__121);
#line 301
label_372:
;
#line 301
___nl__bool__119 = !___nl__bool__119;
#line 301
if(___nl__bool__119){ goto label_385;}
#line 302
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 303
___nl__im_ptr__122 = &((*___ref___rec__0).next_token0field);
#line 303
c_rt_lib0move(___nl__im_ptr__122, c_rt_lib0concat_add((*___nl__im_ptr__122), ___nl__im__39));
#line 303
___nl__im_ptr__122 = NULL;
#line 304
___nl__int_ptr__123 = &((*___ref___rec__0).pos0field);
#line 304
___nl__int__124 = 1;
#line 304
(*___nl__int_ptr__123) = (*___nl__int_ptr__123) + ___nl__int__124;
#line 304
___nl__int_ptr__123 = NULL;
#line 304
//clear ___nl__int__124;
#line 305
goto label_385;
#line 305
label_385:
;
#line 305
//clear ___nl__bool__119;
#line 306
c_rt_lib0move(&___nl__im__128,___get_global_string_const(20));
#line 306
___nl__bool__125 = c_rt_lib0eq(___nl__im__39, ___nl__im__128);
#line 306
c_rt_lib0clear(&___nl__im__128);
#line 306
___nl__bool__127 = !___nl__bool__125;
#line 306
if(___nl__bool__127){ goto label_397;}
#line 306
c_rt_lib0move(&___nl__im__129, ntokenizer_priv0get_char(___ref___rec__0));
#line 306
c_rt_lib0move(&___nl__im__130,___get_global_string_const(302));
#line 306
___nl__bool__125 = c_rt_lib0eq(___nl__im__129, ___nl__im__130);
#line 306
c_rt_lib0clear(&___nl__im__129);
#line 306
c_rt_lib0clear(&___nl__im__130);
#line 306
label_397:
;
#line 306
//clear ___nl__bool__127;
#line 306
___nl__bool__126 = !___nl__bool__125;
#line 306
if(___nl__bool__126){ goto label_404;}
#line 306
c_rt_lib0move(&___nl__im__131, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 306
___nl__bool__125 = ntokenizer_priv0is_hex_number(___nl__im__131);
#line 306
c_rt_lib0clear(&___nl__im__131);
#line 306
label_404:
;
#line 306
//clear ___nl__bool__126;
#line 306
___nl__bool__125 = !___nl__bool__125;
#line 306
if(___nl__bool__125){ goto label_435;}
#line 307
c_rt_lib0move(&___nl__im__132, ntokenizer_priv0get_char(___ref___rec__0));
#line 307
___nl__im_ptr__133 = &((*___ref___rec__0).next_token0field);
#line 307
c_rt_lib0move(___nl__im_ptr__133, c_rt_lib0concat_add((*___nl__im_ptr__133), ___nl__im__132));
#line 307
___nl__im_ptr__133 = NULL;
#line 307
c_rt_lib0clear(&___nl__im__132);
#line 308
___nl__int_ptr__134 = &((*___ref___rec__0).pos0field);
#line 308
___nl__int__135 = 1;
#line 308
(*___nl__int_ptr__134) = (*___nl__int_ptr__134) + ___nl__int__135;
#line 308
___nl__int_ptr__134 = NULL;
#line 308
//clear ___nl__int__135;
#line 309
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 310
label_419:
;
#line 310
___nl__bool__136 = ntokenizer_priv0is_hex_number(___nl__im__39);
#line 310
___nl__bool__136 = !___nl__bool__136;
#line 310
if(___nl__bool__136){ goto label_433;}
#line 311
___nl__im_ptr__137 = &((*___ref___rec__0).next_token0field);
#line 311
c_rt_lib0move(___nl__im_ptr__137, c_rt_lib0concat_add((*___nl__im_ptr__137), ___nl__im__39));
#line 311
___nl__im_ptr__137 = NULL;
#line 312
___nl__int_ptr__138 = &((*___ref___rec__0).pos0field);
#line 312
___nl__int__139 = 1;
#line 312
(*___nl__int_ptr__138) = (*___nl__int_ptr__138) + ___nl__int__139;
#line 312
___nl__int_ptr__138 = NULL;
#line 312
//clear ___nl__int__139;
#line 313
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 314
goto label_419;
#line 314
label_433:
;
#line 315
goto label_503;
#line 315
label_435:
;
#line 316
___nl__int__140 = 0;
#line 317
label_437:
;
#line 318
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___rec__0));
#line 319
___nl__int__142 = 1;
#line 319
___nl__bool__141 = ___nl__int__140 == ___nl__int__142;
#line 319
//clear ___nl__int__142;
#line 319
___nl__bool__141 = !___nl__bool__141;
#line 319
if(___nl__bool__141){ goto label_448;}
#line 319
___nl__int__143 = 1;
#line 319
___nl__int__140 = ___nl__int__140 + ___nl__int__143;
#line 319
//clear ___nl__int__143;
#line 319
goto label_448;
#line 319
label_448:
;
#line 319
//clear ___nl__bool__141;
#line 320
c_rt_lib0move(&___nl__im__147,___get_global_string_const(110));
#line 320
___nl__bool__144 = c_rt_lib0eq(___nl__im__39, ___nl__im__147);
#line 320
c_rt_lib0clear(&___nl__im__147);
#line 320
___nl__bool__146 = !___nl__bool__144;
#line 320
if(___nl__bool__146){ goto label_458;}
#line 320
c_rt_lib0move(&___nl__im__148, ntokenizer_priv0get_next_char(___ref___rec__0));
#line 320
___nl__bool__144 = string0is_digit(___nl__im__148);
#line 320
c_rt_lib0clear(&___nl__im__148);
#line 320
label_458:
;
#line 320
//clear ___nl__bool__146;
#line 320
___nl__bool__145 = !___nl__bool__144;
#line 320
if(___nl__bool__145){ goto label_465;}
#line 320
___nl__int__149 = 0;
#line 320
___nl__bool__144 = ___nl__int__140 == ___nl__int__149;
#line 320
//clear ___nl__int__149;
#line 320
label_465:
;
#line 320
//clear ___nl__bool__145;
#line 320
___nl__bool__144 = !___nl__bool__144;
#line 320
if(___nl__bool__144){ goto label_471;}
#line 320
___nl__int__140 = 1;
#line 320
goto label_471;
#line 320
label_471:
;
#line 320
//clear ___nl__bool__144;
#line 321
c_rt_lib0move(&___nl__im__151,___get_global_string_const(36));
#line 321
___nl__bool__150 = c_rt_lib0eq(___nl__im__39, ___nl__im__151);
#line 321
c_rt_lib0clear(&___nl__im__151);
#line 321
if(___nl__bool__150){ goto label_484;}
#line 321
___nl__bool__150 = string0is_digit(___nl__im__39);
#line 321
if(___nl__bool__150){ goto label_482;}
#line 321
___nl__int__152 = 1;
#line 321
___nl__bool__150 = ___nl__int__140 == ___nl__int__152;
#line 321
//clear ___nl__int__152;
#line 321
label_482:
;
#line 321
___nl__bool__150 = !___nl__bool__150;
#line 321
label_484:
;
#line 321
___nl__bool__150 = !___nl__bool__150;
#line 321
if(___nl__bool__150){ goto label_490;}
#line 321
//clear ___nl__bool__150;
#line 321
goto label_501;
#line 321
goto label_490;
#line 321
label_490:
;
#line 321
//clear ___nl__bool__150;
#line 322
___nl__im_ptr__153 = &((*___ref___rec__0).next_token0field);
#line 322
c_rt_lib0move(___nl__im_ptr__153, c_rt_lib0concat_add((*___nl__im_ptr__153), ___nl__im__39));
#line 322
___nl__im_ptr__153 = NULL;
#line 323
___nl__int_ptr__154 = &((*___ref___rec__0).pos0field);
#line 323
___nl__int__155 = 1;
#line 323
(*___nl__int_ptr__154) = (*___nl__int_ptr__154) + ___nl__int__155;
#line 323
___nl__int_ptr__154 = NULL;
#line 323
//clear ___nl__int__155;
#line 317
goto label_437;
#line 317
label_501:
;
#line 325
goto label_503;
#line 325
label_503:
;
#line 325
//clear ___nl__bool__125;
#line 325
//clear ___nl__bool__136;
#line 325
//clear ___nl__int__140;
#line 326
goto label_518;
#line 326
label_508:
;
#line 327
c_rt_lib0move(&___nl__im__156, c_rt_lib0ov_mk_none(___get_global_string_const(122)));
#line 327
___nl__im_ptr__157 = &((*___ref___rec__0).type0field);
#line 327
c_rt_lib0copy(___nl__im_ptr__157, ___nl__im__156);
#line 327
___nl__im_ptr__157 = NULL;
#line 327
c_rt_lib0clear(&___nl__im__156);
#line 328
___nl__im_ptr__158 = &((*___ref___rec__0).next_token0field);
#line 328
c_rt_lib0copy(___nl__im_ptr__158, ___nl__im__39);
#line 328
___nl__im_ptr__158 = NULL;
#line 329
goto label_518;
#line 329
label_518:
;
#line 329
//clear ___nl__bool__40;
#line 329
//clear ___nl__bool__76;
#line 329
c_rt_lib0clear(&___nl__im__39);
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(284), ___nl__im__4, ___get_global_string_const(1139), ___nl__im__5, ___get_global_string_const(1140), ___nl__im__7, ___get_global_string_const(285), ___nl__im__11, ___get_global_string_const(206), ___nl__im__12, ___get_global_string_const(1143), ___nl__im__14, ___get_global_string_const(1142), ___nl__im__18, ___get_global_string_const(1145), ___nl__im__19, ___get_global_string_const(1141), ___nl__im__23, ___get_global_string_const(1144), ___nl__im__24));
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
