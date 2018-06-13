
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

ImmT  ntokenizer_priv0get_keywords();
ImmT  ntokenizer_priv0get_char_oper();
ImmT  ntokenizer_priv0get_lett_oper();
ImmT  ntokenizer_priv0get_char(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer_priv0get_next_char(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___im__0);
bool ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___im__0);
bool ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0);
ImmT  ntokenizer_priv0try_get_operator(ntokenizer0state_t0type ___nl__im__0,ImmT * ___ref___im__1);
ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___im__0);


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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(24, ___get_global_const(964), ___nl__im__2, ___get_global_const(844), ___nl__im__3, ___get_global_const(845), ___nl__im__4, ___get_global_const(843), ___nl__im__5, ___get_global_const(846), ___nl__im__6, ___get_global_const(160), ___nl__im__7, ___get_global_const(847), ___nl__im__8, ___get_global_const(842), ___nl__im__9, ___get_global_const(857), ___nl__im__10, ___get_global_const(858), ___nl__im__11, ___get_global_const(463), ___nl__im__12, ___get_global_const(689), ___nl__im__13, ___get_global_const(40), ___nl__im__14, ___get_global_const(852), ___nl__im__15, ___get_global_const(987), ___nl__im__16, ___get_global_const(959), ___nl__im__17, ___get_global_const(535), ___nl__im__18, ___get_global_const(536), ___nl__im__19, ___get_global_const(851), ___nl__im__20, ___get_global_const(850), ___nl__im__21, ___get_global_const(246), ___nl__im__22, ___get_global_const(854), ___nl__im__23, ___get_global_const(178), ___nl__im__24, ___get_global_const(247), ___nl__im__25));
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
#line 50
label_5:
;
#line 51
c_rt_lib0move(&___nl__im__18, c_rt_lib0next_iter(___nl__im__18));
#line 51
goto label_6;
#line 51
label_4:
;
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 51
label_2:
;
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
#line 62
label_5:
;
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0next_iter(___nl__im__15));
#line 63
goto label_6;
#line 63
label_4:
;
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
label_2:
;
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(960), ___get_global_const(988)));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__12, ___get_global_const(925), ___nl__im__13));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__16, ___get_global_const(925), ___nl__im__17));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(989), ___nl__im__2, ___get_global_const(282), ___nl__im__4, ___get_global_const(283), ___nl__im__5, ___get_global_const(95), ___nl__im__6, ___get_global_const(990), ___nl__im__7, ___get_global_const(991), ___nl__im__8, ___get_global_const(992), ___nl__im__9, ___get_global_const(993), ___nl__im__10, ___get_global_const(994), ___nl__im__14, ___get_global_const(995), ___nl__im__18));
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
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
return ___nl__im__0;
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_const(912), ___nl__im__2, ___get_global_const(996), ___nl__im__3, ___get_global_const(979), ___nl__im__4, ___get_global_const(976), ___nl__im__5, ___get_global_const(981), ___nl__im__6, ___get_global_const(965), ___nl__im__7, ___get_global_const(978), ___nl__im__8, ___get_global_const(527), ___nl__im__9, ___get_global_const(125), ___nl__im__10));
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
}

ntokenizer0state_t0type ntokenizer0init0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0init");
ImmT  *var0 = &(_tab[0]);
return ntokenizer0init(*var0);
}
ntokenizer0state_t0type ntokenizer0init(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
#line 99
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__0));
#line 100
___nl__int__3 = string0length(___nl__im__0);
#line 100
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__3));
#line 101
___nl__int__5 = 0;
#line 101
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__5));
#line 102
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(912)));
#line 103
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 104
___nl__int__9 = 1;
#line 104
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 105
___nl__int__11 = 1;
#line 105
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__11));
#line 106
___nl__int__14 = 1;
#line 106
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 106
___nl__int__16 = 0;
#line 106
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 106
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__15, ___get_global_const(925), ___nl__im__17));
#line 106
//clear ___nl__int__14;
#line 106
c_rt_lib0clear(&___nl__im__15);
#line 106
//clear ___nl__int__16;
#line 106
c_rt_lib0clear(&___nl__im__17);
#line 107
___nl__int__19 = 1;
#line 107
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 107
___nl__int__21 = 0;
#line 107
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 107
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__20, ___get_global_const(925), ___nl__im__22));
#line 107
//clear ___nl__int__19;
#line 107
c_rt_lib0clear(&___nl__im__20);
#line 107
//clear ___nl__int__21;
#line 107
c_rt_lib0clear(&___nl__im__22);
#line 108
c_rt_lib0move(&___nl__im__23,___get_global_const(37));
#line 108
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(989), ___nl__im__2, ___get_global_const(283), ___nl__im__4, ___get_global_const(282), ___nl__im__6, ___get_global_const(95), ___nl__im__7, ___get_global_const(990), ___nl__im__8, ___get_global_const(991), ___nl__im__10, ___get_global_const(992), ___nl__im__12, ___get_global_const(993), ___nl__im__13, ___get_global_const(994), ___nl__im__18, ___get_global_const(995), ___nl__im__23));
#line 108
c_rt_lib0clear(&___nl__im__2);
#line 108
//clear ___nl__int__3;
#line 108
c_rt_lib0clear(&___nl__im__4);
#line 108
//clear ___nl__int__5;
#line 108
c_rt_lib0clear(&___nl__im__6);
#line 108
c_rt_lib0clear(&___nl__im__7);
#line 108
c_rt_lib0clear(&___nl__im__8);
#line 108
//clear ___nl__int__9;
#line 108
c_rt_lib0clear(&___nl__im__10);
#line 108
//clear ___nl__int__11;
#line 108
c_rt_lib0clear(&___nl__im__12);
#line 108
c_rt_lib0clear(&___nl__im__13);
#line 108
c_rt_lib0clear(&___nl__im__18);
#line 108
c_rt_lib0clear(&___nl__im__23);
#line 110
c_rt_lib0delete(ntokenizer_priv0get_next_token(&___nl__im__1));
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
return ___nl__im__1;
}

ImmT  ntokenizer0get_last_comment0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_last_comment");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0get_last_comment(*var0);
}
ImmT  ntokenizer0get_last_comment(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 115
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(995)));
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
return ___nl__im__1;
}

ImmT  ntokenizer_priv0get_char(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 119
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(989)));
#line 119
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 119
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 119
___nl__int__7 = 1;
#line 119
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 119
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__im__6, ___nl__im__8));
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
//clear ___nl__int__4;
#line 119
c_rt_lib0clear(&___nl__im__6);
#line 119
//clear ___nl__int__7;
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 119
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__9));
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__9);
#line 119
return ___nl__im__1;
}

ImmT  ntokenizer_priv0get_next_char(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
#line 123
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 123
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 123
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
___nl__int__7 = 1;
#line 123
___nl__int__4 = ___nl__int__5 + ___nl__int__7;
#line 123
//clear ___nl__int__5;
#line 123
//clear ___nl__int__7;
#line 123
___nl__int__8 = ___nl__int__2 <= ___nl__int__4;
#line 123
___nl__bool__1 = ___nl__int__8;
#line 123
//clear ___nl__int__2;
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__8;
#line 123
___nl__bool__1 = !___nl__bool__1;
#line 123
if(___nl__bool__1){ goto label_2;}
#line 123
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 123
//clear ___nl__bool__1;
#line 123
return ___nl__im__9;
#line 123
goto label_1;
#line 123
label_2:
;
#line 123
label_1:
;
#line 123
//clear ___nl__bool__1;
#line 123
c_rt_lib0clear(&___nl__im__9);
#line 124
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(989)));
#line 124
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 124
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 124
c_rt_lib0clear(&___nl__im__14);
#line 124
___nl__int__15 = 1;
#line 124
___nl__int__12 = ___nl__int__13 + ___nl__int__15;
#line 124
//clear ___nl__int__13;
#line 124
//clear ___nl__int__15;
#line 124
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__12));
#line 124
___nl__int__17 = 1;
#line 124
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__17));
#line 124
c_rt_lib0move(&___nl__im__10, c_std_lib0fast_substr(___nl__im__11, ___nl__im__16, ___nl__im__18));
#line 124
c_rt_lib0clear(&___nl__im__11);
#line 124
//clear ___nl__int__12;
#line 124
c_rt_lib0clear(&___nl__im__16);
#line 124
//clear ___nl__int__17;
#line 124
c_rt_lib0clear(&___nl__im__18);
#line 124
return ___nl__im__10;
}

ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
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
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__string__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
ImmT  ___nl__string__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
ImmT  ___nl__string__40 = NULL;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__string__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__string__50 = NULL;
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
ImmT  ___nl__string__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__string__65 = NULL;
bool  ___nl__bool__66 = false;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
ImmT  ___nl__im__70 = NULL;
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
ImmT  ___nl__string__74 = NULL;
#line 128
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 128
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 128
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(995), ___nl__im__1);
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 129
___nl__bool__3 = true;
#line 130
label_2:
;
#line 131
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 131
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 131
___nl__int__7 = getIntFromImm(___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
___nl__int__9 = ___nl__int__5 == ___nl__int__7;
#line 131
___nl__bool__4 = ___nl__int__9;
#line 131
//clear ___nl__int__5;
#line 131
//clear ___nl__int__7;
#line 131
//clear ___nl__int__9;
#line 131
___nl__bool__4 = !___nl__bool__4;
#line 131
if(___nl__bool__4){ goto label_4;}
#line 131
//clear ___nl__bool__3;
#line 131
//clear ___nl__bool__4;
#line 131
return NULL;
#line 131
goto label_3;
#line 131
label_4:
;
#line 131
label_3:
;
#line 131
//clear ___nl__bool__4;
#line 132
c_rt_lib0move(&___nl__im__10, ntokenizer_priv0get_char(___ref___im__0));
#line 133
___nl__int__11 = string0ord(___nl__im__10);
#line 134
___nl__int__15 = 9;
#line 134
___nl__int__16 = ___nl__int__11 == ___nl__int__15;
#line 134
___nl__bool__12 = ___nl__int__16;
#line 134
//clear ___nl__int__15;
#line 134
//clear ___nl__int__16;
#line 134
if(___nl__bool__12){ goto label_8;}
#line 134
___nl__int__17 = 13;
#line 134
___nl__int__18 = ___nl__int__11 == ___nl__int__17;
#line 134
___nl__bool__12 = ___nl__int__18;
#line 134
//clear ___nl__int__17;
#line 134
//clear ___nl__int__18;
#line 134
label_8:
;
#line 134
//clear ___nl__bool__14;
#line 134
if(___nl__bool__12){ goto label_7;}
#line 134
___nl__int__19 = 32;
#line 134
___nl__int__20 = ___nl__int__11 == ___nl__int__19;
#line 134
___nl__bool__12 = ___nl__int__20;
#line 134
//clear ___nl__int__19;
#line 134
//clear ___nl__int__20;
#line 134
label_7:
;
#line 134
//clear ___nl__bool__13;
#line 134
___nl__bool__12 = !___nl__bool__12;
#line 134
if(___nl__bool__12){ goto label_6;}
#line 135
c_rt_lib0move(&___nl__im__21,___get_global_const(282));
#line 135
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__21));
#line 135
___nl__int__22 = 1;
#line 135
___nl__int__23 = getIntFromImm(___nl__im__21);
#line 135
___nl__int__24 = ___nl__int__23 + ___nl__int__22;
#line 135
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__24));
#line 135
c_rt_lib0move(&___nl__string__25,___get_global_const(282));
#line 135
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__25, ___nl__im__21));
#line 135
c_rt_lib0clear(&___nl__im__21);
#line 135
//clear ___nl__int__22;
#line 135
//clear ___nl__int__23;
#line 135
//clear ___nl__int__24;
#line 135
c_rt_lib0clear(&___nl__string__25);
#line 136
___nl__bool__3 = false;
#line 137
goto label_5;
#line 137
label_6:
;
#line 137
___nl__int__26 = 10;
#line 137
___nl__int__27 = ___nl__int__11 == ___nl__int__26;
#line 137
___nl__bool__12 = ___nl__int__27;
#line 137
//clear ___nl__int__26;
#line 137
//clear ___nl__int__27;
#line 137
___nl__bool__12 = !___nl__bool__12;
#line 137
if(___nl__bool__12){ goto label_9;}
#line 138
c_rt_lib0move(&___nl__im__28,___get_global_const(282));
#line 138
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__28));
#line 138
___nl__int__29 = 1;
#line 138
___nl__int__30 = getIntFromImm(___nl__im__28);
#line 138
___nl__int__31 = ___nl__int__30 + ___nl__int__29;
#line 138
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__31));
#line 138
c_rt_lib0move(&___nl__string__32,___get_global_const(282));
#line 138
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__32, ___nl__im__28));
#line 138
c_rt_lib0clear(&___nl__im__28);
#line 138
//clear ___nl__int__29;
#line 138
//clear ___nl__int__30;
#line 138
//clear ___nl__int__31;
#line 138
c_rt_lib0clear(&___nl__string__32);
#line 139
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 139
___nl__int__34 = getIntFromImm(___nl__im__35);
#line 139
c_rt_lib0clear(&___nl__im__35);
#line 139
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__34));
#line 139
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(992), ___nl__im__33);
#line 139
c_rt_lib0clear(&___nl__im__33);
#line 139
//clear ___nl__int__34;
#line 140
c_rt_lib0move(&___nl__im__36,___get_global_const(991));
#line 140
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__36));
#line 140
___nl__int__37 = 1;
#line 140
___nl__int__38 = getIntFromImm(___nl__im__36);
#line 140
___nl__int__39 = ___nl__int__38 + ___nl__int__37;
#line 140
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__39));
#line 140
c_rt_lib0move(&___nl__string__40,___get_global_const(991));
#line 140
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__40, ___nl__im__36));
#line 140
c_rt_lib0clear(&___nl__im__36);
#line 140
//clear ___nl__int__37;
#line 140
//clear ___nl__int__38;
#line 140
//clear ___nl__int__39;
#line 140
c_rt_lib0clear(&___nl__string__40);
#line 141
___nl__bool__3 = false;
#line 142
goto label_5;
#line 142
label_9:
;
#line 142
___nl__int__41 = 35;
#line 142
___nl__int__42 = ___nl__int__11 == ___nl__int__41;
#line 142
___nl__bool__12 = ___nl__int__42;
#line 142
//clear ___nl__int__41;
#line 142
//clear ___nl__int__42;
#line 142
___nl__bool__12 = !___nl__bool__12;
#line 142
if(___nl__bool__12){ goto label_10;}
#line 143
___nl__bool__43 = ___nl__bool__3;
#line 143
___nl__bool__43 = !___nl__bool__43;
#line 143
if(___nl__bool__43){ goto label_12;}
#line 144
c_rt_lib0move(&___nl__im__44,___get_global_const(995));
#line 144
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__44));
#line 144
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_add(___nl__im__44, ___nl__im__10));
#line 144
c_rt_lib0move(&___nl__string__45,___get_global_const(995));
#line 144
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__45, ___nl__im__44));
#line 144
c_rt_lib0clear(&___nl__im__44);
#line 144
c_rt_lib0clear(&___nl__string__45);
#line 145
goto label_11;
#line 145
label_12:
;
#line 145
label_11:
;
#line 145
//clear ___nl__bool__43;
#line 146
c_rt_lib0move(&___nl__im__46,___get_global_const(282));
#line 146
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__46));
#line 146
___nl__int__47 = 1;
#line 146
___nl__int__48 = getIntFromImm(___nl__im__46);
#line 146
___nl__int__49 = ___nl__int__48 + ___nl__int__47;
#line 146
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__49));
#line 146
c_rt_lib0move(&___nl__string__50,___get_global_const(282));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__50, ___nl__im__46));
#line 146
c_rt_lib0clear(&___nl__im__46);
#line 146
//clear ___nl__int__47;
#line 146
//clear ___nl__int__48;
#line 146
//clear ___nl__int__49;
#line 146
c_rt_lib0clear(&___nl__string__50);
#line 147
label_14:
;
#line 148
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 148
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 148
c_rt_lib0clear(&___nl__im__53);
#line 148
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 148
___nl__int__54 = getIntFromImm(___nl__im__55);
#line 148
c_rt_lib0clear(&___nl__im__55);
#line 148
___nl__int__56 = ___nl__int__52 == ___nl__int__54;
#line 148
___nl__bool__51 = ___nl__int__56;
#line 148
//clear ___nl__int__52;
#line 148
//clear ___nl__int__54;
#line 148
//clear ___nl__int__56;
#line 148
___nl__bool__51 = !___nl__bool__51;
#line 148
if(___nl__bool__51){ goto label_16;}
#line 148
//clear ___nl__bool__3;
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
//clear ___nl__int__11;
#line 148
//clear ___nl__bool__12;
#line 148
//clear ___nl__bool__51;
#line 148
return NULL;
#line 148
goto label_15;
#line 148
label_16:
;
#line 148
label_15:
;
#line 148
//clear ___nl__bool__51;
#line 149
c_rt_lib0move(&___nl__im__57, ntokenizer_priv0get_char(___ref___im__0));
#line 150
c_rt_lib0move(&___nl__im__58,___get_global_const(282));
#line 150
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__58));
#line 150
___nl__int__59 = 1;
#line 150
___nl__int__60 = getIntFromImm(___nl__im__58);
#line 150
___nl__int__61 = ___nl__int__60 + ___nl__int__59;
#line 150
c_rt_lib0move(&___nl__im__58, c_rt_lib0int_new(___nl__int__61));
#line 150
c_rt_lib0move(&___nl__string__62,___get_global_const(282));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__62, ___nl__im__58));
#line 150
c_rt_lib0clear(&___nl__im__58);
#line 150
//clear ___nl__int__59;
#line 150
//clear ___nl__int__60;
#line 150
//clear ___nl__int__61;
#line 150
c_rt_lib0clear(&___nl__string__62);
#line 151
___nl__bool__63 = ___nl__bool__3;
#line 151
___nl__bool__63 = !___nl__bool__63;
#line 151
if(___nl__bool__63){ goto label_18;}
#line 152
c_rt_lib0move(&___nl__im__64,___get_global_const(995));
#line 152
c_rt_lib0move(&___nl__im__64, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__64));
#line 152
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_add(___nl__im__64, ___nl__im__57));
#line 152
c_rt_lib0move(&___nl__string__65,___get_global_const(995));
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__65, ___nl__im__64));
#line 152
c_rt_lib0clear(&___nl__im__64);
#line 152
c_rt_lib0clear(&___nl__string__65);
#line 153
goto label_17;
#line 153
label_18:
;
#line 153
label_17:
;
#line 153
//clear ___nl__bool__63;
#line 154
___nl__int__67 = string0ord(___nl__im__57);
#line 154
___nl__int__68 = 10;
#line 154
___nl__int__69 = ___nl__int__67 == ___nl__int__68;
#line 154
___nl__bool__66 = ___nl__int__69;
#line 154
//clear ___nl__int__67;
#line 154
//clear ___nl__int__68;
#line 154
//clear ___nl__int__69;
#line 154
___nl__bool__66 = !___nl__bool__66;
#line 154
if(___nl__bool__66){ goto label_20;}
#line 154
goto label_13;
#line 154
goto label_19;
#line 154
label_20:
;
#line 154
label_19:
;
#line 154
//clear ___nl__bool__66;
#line 147
goto label_14;
#line 147
label_13:
;
#line 156
c_rt_lib0move(&___nl__im__70,___get_global_const(991));
#line 156
c_rt_lib0move(&___nl__im__70, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__70));
#line 156
___nl__int__71 = 1;
#line 156
___nl__int__72 = getIntFromImm(___nl__im__70);
#line 156
___nl__int__73 = ___nl__int__72 + ___nl__int__71;
#line 156
c_rt_lib0move(&___nl__im__70, c_rt_lib0int_new(___nl__int__73));
#line 156
c_rt_lib0move(&___nl__string__74,___get_global_const(991));
#line 156
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__74, ___nl__im__70));
#line 156
c_rt_lib0clear(&___nl__im__70);
#line 156
//clear ___nl__int__71;
#line 156
//clear ___nl__int__72;
#line 156
//clear ___nl__int__73;
#line 156
c_rt_lib0clear(&___nl__string__74);
#line 157
goto label_5;
#line 157
label_10:
;
#line 158
//clear ___nl__bool__3;
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
//clear ___nl__int__11;
#line 158
//clear ___nl__bool__12;
#line 158
c_rt_lib0clear(&___nl__im__57);
#line 158
return NULL;
#line 159
goto label_5;
#line 159
label_5:
;
#line 159
//clear ___nl__bool__12;
#line 159
c_rt_lib0clear(&___nl__im__57);
#line 130
goto label_2;
#line 130
label_1:
;
#line 130
//clear ___nl__bool__3;
#line 130
c_rt_lib0clear(&___nl__im__10);
#line 130
//clear ___nl__int__11;
#line 130
return NULL;
}

bool ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___im__0) {
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
bool  ___nl__bool__10 = false;
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(95)));
#line 164
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(996));
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
___nl__bool__1 = !___nl__bool__1;
#line 164
if(___nl__bool__1){ goto label_2;}
#line 164
___nl__bool__3 = true;
#line 164
//clear ___nl__bool__1;
#line 164
return ___nl__bool__3;
#line 164
goto label_1;
#line 164
label_2:
;
#line 164
label_1:
;
#line 164
//clear ___nl__bool__1;
#line 164
//clear ___nl__bool__3;
#line 165
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(95)));
#line 165
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(979));
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
___nl__bool__4 = !___nl__bool__4;
#line 165
if(___nl__bool__4){ goto label_4;}
#line 165
___nl__bool__6 = true;
#line 165
//clear ___nl__bool__4;
#line 165
return ___nl__bool__6;
#line 165
goto label_3;
#line 165
label_4:
;
#line 165
label_3:
;
#line 165
//clear ___nl__bool__4;
#line 165
//clear ___nl__bool__6;
#line 166
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(95)));
#line 166
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(981));
#line 166
c_rt_lib0clear(&___nl__im__8);
#line 166
___nl__bool__7 = !___nl__bool__7;
#line 166
if(___nl__bool__7){ goto label_6;}
#line 166
___nl__bool__9 = true;
#line 166
//clear ___nl__bool__7;
#line 166
return ___nl__bool__9;
#line 166
goto label_5;
#line 166
label_6:
;
#line 166
label_5:
;
#line 166
//clear ___nl__bool__7;
#line 166
//clear ___nl__bool__9;
#line 167
___nl__bool__10 = false;
#line 167
return ___nl__bool__10;
}

bool ntokenizer0eat_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_token");
ntokenizer0state_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ntokenizer0eat_token(var0, *var1);
}
bool ntokenizer0eat_token(ntokenizer0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
#line 171
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 171
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 171
c_rt_lib0clear(&___nl__im__4);
#line 171
___nl__bool__3 = !___nl__bool__2;
#line 171
if(___nl__bool__3){ goto label_3;}
#line 171
___nl__bool__2 = ntokenizer_priv0is_token(___ref___im__0);
#line 171
label_3:
;
#line 171
//clear ___nl__bool__3;
#line 171
___nl__bool__2 = !___nl__bool__2;
#line 171
if(___nl__bool__2){ goto label_2;}
#line 172
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___im__0));
#line 173
___nl__bool__5 = true;
#line 173
c_rt_lib0clear(&___nl__im__1);
#line 173
//clear ___nl__bool__2;
#line 173
return ___nl__bool__5;
#line 174
goto label_1;
#line 174
label_2:
;
#line 174
label_1:
;
#line 174
//clear ___nl__bool__2;
#line 174
//clear ___nl__bool__5;
#line 175
___nl__bool__6 = false;
#line 175
c_rt_lib0clear(&___nl__im__1);
#line 175
return ___nl__bool__6;
}

INT  ntokenizer0get_line0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_line");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0get_line(*var0);
}
INT  ntokenizer0get_line(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
#line 179
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(991)));
#line 179
___nl__int__1 = getIntFromImm(___nl__im__2);
#line 179
c_rt_lib0clear(&___nl__im__2);
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
return ___nl__int__1;
}

INT  ntokenizer0get_column0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_column");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0get_column(*var0);
}
INT  ntokenizer0get_column(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
#line 182
___nl__int__4 = 1;
#line 182
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(282)));
#line 182
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 182
c_rt_lib0clear(&___nl__im__6);
#line 182
___nl__int__3 = ___nl__int__4 + ___nl__int__5;
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(992)));
#line 182
___nl__int__7 = getIntFromImm(___nl__im__8);
#line 182
c_rt_lib0clear(&___nl__im__8);
#line 182
___nl__int__2 = ___nl__int__3 - ___nl__int__7;
#line 182
//clear ___nl__int__3;
#line 182
//clear ___nl__int__7;
#line 182
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(990)));
#line 182
___nl__int__9 = string0length(___nl__im__10);
#line 182
c_rt_lib0clear(&___nl__im__10);
#line 182
___nl__int__1 = ___nl__int__2 - ___nl__int__9;
#line 182
//clear ___nl__int__2;
#line 182
//clear ___nl__int__9;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
return ___nl__int__1;
}

ImmT  ntokenizer0get_place0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0get_place(var0);
}
ImmT  ntokenizer0get_place(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 185
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(993)));
#line 185
return ___nl__im__1;
}

ImmT  ntokenizer0get_place_ws0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place_ws");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0get_place_ws(var0);
}
ImmT  ntokenizer0get_place_ws(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 189
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(994)));
#line 189
return ___nl__im__1;
}

ImmT  ntokenizer0get_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_token");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0get_token(var0);
}
ImmT  ntokenizer0get_token(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 193
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 193
return ___nl__im__1;
}

bool ntokenizer0is_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0is_type");
ntokenizer0state_t0type *var0 = &(_tab[0]);
ntokenizer0token_t0type *var1 = &(_tab[1]);
return ntokenizer0is_type(var0, *var1);
}
bool ntokenizer0is_type(ntokenizer0state_t0type* ___ref___im__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 197
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(95)));
#line 197
___nl__bool__2 = enum0eq(___nl__im__3, ___nl__im__1);
#line 197
c_rt_lib0clear(&___nl__im__3);
#line 197
c_rt_lib0clear(&___nl__im__1);
#line 197
return ___nl__bool__2;
}

bool ntokenizer0next_is0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0next_is");
ntokenizer0state_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return ntokenizer0next_is(var0, *var1);
}
bool ntokenizer0next_is(ntokenizer0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
#line 201
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 201
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
___nl__bool__3 = !___nl__bool__2;
#line 201
if(___nl__bool__3){ goto label_1;}
#line 201
___nl__bool__2 = ntokenizer_priv0is_token(___ref___im__0);
#line 201
label_1:
;
#line 201
//clear ___nl__bool__3;
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
return ___nl__bool__2;
}

ImmT  ntokenizer0eat_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_type");
ntokenizer0state_t0type *var0 = &(_tab[0]);
ntokenizer0token_t0type *var1 = &(_tab[1]);
return ntokenizer0eat_type(var0, *var1);
}
ImmT  ntokenizer0eat_type(ntokenizer0state_t0type* ___ref___im__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 205
___nl__bool__2 = ntokenizer0is_type(___ref___im__0, ___nl__im__1);
#line 205
___nl__bool__2 = !___nl__bool__2;
#line 205
___nl__bool__2 = !___nl__bool__2;
#line 205
if(___nl__bool__2){ goto label_2;}
#line 205
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 205
nl_die_arg(___nl__im__3);
#line 205
goto label_1;
#line 205
label_2:
;
#line 205
label_1:
;
#line 205
//clear ___nl__bool__2;
#line 205
c_rt_lib0clear(&___nl__im__3);
#line 206
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 207
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___im__0));
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
return ___nl__im__4;
}

bool ntokenizer0is_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0is_text");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0is_text(var0);
}
bool ntokenizer0is_text(ntokenizer0state_t0type* ___ref___im__0) {
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
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
#line 212
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(965)));
#line 212
___nl__bool__1 = ntokenizer0is_type(___ref___im__0, ___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
___nl__bool__1 = !___nl__bool__1;
#line 212
if(___nl__bool__1){ goto label_2;}
#line 212
___nl__bool__3 = true;
#line 212
//clear ___nl__bool__1;
#line 212
return ___nl__bool__3;
#line 212
goto label_1;
#line 212
label_2:
;
#line 212
label_1:
;
#line 212
//clear ___nl__bool__1;
#line 212
//clear ___nl__bool__3;
#line 213
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(981)));
#line 213
___nl__bool__4 = ntokenizer0is_type(___ref___im__0, ___nl__im__5);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
___nl__bool__4 = !___nl__bool__4;
#line 213
if(___nl__bool__4){ goto label_4;}
#line 213
___nl__bool__6 = true;
#line 213
//clear ___nl__bool__4;
#line 213
return ___nl__bool__6;
#line 213
goto label_3;
#line 213
label_4:
;
#line 213
label_3:
;
#line 213
//clear ___nl__bool__4;
#line 213
//clear ___nl__bool__6;
#line 214
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 214
___nl__bool__7 = ntokenizer0is_type(___ref___im__0, ___nl__im__8);
#line 214
c_rt_lib0clear(&___nl__im__8);
#line 214
___nl__bool__7 = !___nl__bool__7;
#line 214
if(___nl__bool__7){ goto label_6;}
#line 215
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 215
___nl__int__12 = 0;
#line 215
___nl__int__13 = 1;
#line 215
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__11, ___nl__int__12, ___nl__int__13));
#line 215
c_rt_lib0clear(&___nl__im__11);
#line 215
//clear ___nl__int__12;
#line 215
//clear ___nl__int__13;
#line 215
___nl__bool__9 = string0is_letter(___nl__im__10);
#line 215
c_rt_lib0clear(&___nl__im__10);
#line 215
___nl__bool__9 = !___nl__bool__9;
#line 215
if(___nl__bool__9){ goto label_8;}
#line 215
___nl__bool__14 = true;
#line 215
//clear ___nl__bool__7;
#line 215
//clear ___nl__bool__9;
#line 215
return ___nl__bool__14;
#line 215
goto label_7;
#line 215
label_8:
;
#line 215
label_7:
;
#line 215
//clear ___nl__bool__9;
#line 215
//clear ___nl__bool__14;
#line 216
goto label_5;
#line 216
label_6:
;
#line 216
label_5:
;
#line 216
//clear ___nl__bool__7;
#line 217
___nl__bool__15 = false;
#line 217
return ___nl__bool__15;
}

ImmT  ntokenizer0eat_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0eat_text");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0eat_text(var0);
}
ImmT  ntokenizer0eat_text(ntokenizer0state_t0type* ___ref___im__0) {
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
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 221
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(965)));
#line 221
___nl__bool__1 = ntokenizer0is_type(___ref___im__0, ___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
___nl__bool__1 = !___nl__bool__1;
#line 221
if(___nl__bool__1){ goto label_2;}
#line 221
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(965)));
#line 221
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_type(___ref___im__0, ___nl__im__4));
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
//clear ___nl__bool__1;
#line 221
return ___nl__im__3;
#line 221
goto label_1;
#line 221
label_2:
;
#line 221
label_1:
;
#line 221
//clear ___nl__bool__1;
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 222
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(981)));
#line 222
___nl__bool__5 = ntokenizer0is_type(___ref___im__0, ___nl__im__6);
#line 222
c_rt_lib0clear(&___nl__im__6);
#line 222
___nl__bool__5 = !___nl__bool__5;
#line 222
if(___nl__bool__5){ goto label_4;}
#line 222
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(981)));
#line 222
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_type(___ref___im__0, ___nl__im__8));
#line 222
c_rt_lib0clear(&___nl__im__8);
#line 222
//clear ___nl__bool__5;
#line 222
return ___nl__im__7;
#line 222
goto label_3;
#line 222
label_4:
;
#line 222
label_3:
;
#line 222
//clear ___nl__bool__5;
#line 222
c_rt_lib0clear(&___nl__im__7);
#line 223
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 223
___nl__bool__9 = ntokenizer0is_type(___ref___im__0, ___nl__im__10);
#line 223
c_rt_lib0clear(&___nl__im__10);
#line 223
___nl__bool__9 = !___nl__bool__9;
#line 223
if(___nl__bool__9){ goto label_6;}
#line 225
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 225
___nl__int__14 = 0;
#line 225
___nl__int__15 = 1;
#line 225
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__13, ___nl__int__14, ___nl__int__15));
#line 225
c_rt_lib0clear(&___nl__im__13);
#line 225
//clear ___nl__int__14;
#line 225
//clear ___nl__int__15;
#line 225
___nl__bool__11 = string0is_letter(___nl__im__12);
#line 225
c_rt_lib0clear(&___nl__im__12);
#line 225
___nl__bool__11 = !___nl__bool__11;
#line 225
if(___nl__bool__11){ goto label_8;}
#line 224
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 224
c_rt_lib0move(&___nl__im__16, ntokenizer0eat_type(___ref___im__0, ___nl__im__17));
#line 224
c_rt_lib0clear(&___nl__im__17);
#line 224
//clear ___nl__bool__9;
#line 224
//clear ___nl__bool__11;
#line 224
return ___nl__im__16;
#line 224
goto label_7;
#line 224
label_8:
;
#line 224
label_7:
;
#line 224
//clear ___nl__bool__11;
#line 224
c_rt_lib0clear(&___nl__im__16);
#line 226
goto label_5;
#line 226
label_6:
;
#line 226
label_5:
;
#line 226
//clear ___nl__bool__9;
#line 227
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 227
nl_die_arg(___nl__im__18);
}

ImmT  ntokenizer0info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0info");
ntokenizer0state_t0type *var0 = &(_tab[0]);
return ntokenizer0info(*var0);
}
ImmT  ntokenizer0info(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
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
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 231
c_rt_lib0move(&___nl__im__9,___get_global_const(997));
#line 231
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(990)));
#line 231
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 231
c_rt_lib0clear(&___nl__im__9);
#line 231
c_rt_lib0clear(&___nl__im__10);
#line 231
c_rt_lib0move(&___nl__im__11,___get_global_const(998));
#line 231
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 231
c_rt_lib0clear(&___nl__im__8);
#line 231
c_rt_lib0clear(&___nl__im__11);
#line 232
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(991)));
#line 232
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 232
c_rt_lib0clear(&___nl__im__14);
#line 232
c_rt_lib0move(&___nl__im__12, ptd0int_to_string(___nl__int__13));
#line 232
//clear ___nl__int__13;
#line 232
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 232
c_rt_lib0clear(&___nl__im__12);
#line 232
c_rt_lib0move(&___nl__im__15,___get_global_const(999));
#line 232
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 232
c_rt_lib0clear(&___nl__im__6);
#line 232
c_rt_lib0clear(&___nl__im__15);
#line 233
___nl__int__20 = 1;
#line 233
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(282)));
#line 233
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 233
c_rt_lib0clear(&___nl__im__22);
#line 233
___nl__int__19 = ___nl__int__20 + ___nl__int__21;
#line 233
//clear ___nl__int__20;
#line 233
//clear ___nl__int__21;
#line 233
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(992)));
#line 233
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 233
c_rt_lib0clear(&___nl__im__24);
#line 233
___nl__int__18 = ___nl__int__19 - ___nl__int__23;
#line 233
//clear ___nl__int__19;
#line 233
//clear ___nl__int__23;
#line 233
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(990)));
#line 233
___nl__int__25 = string0length(___nl__im__26);
#line 233
c_rt_lib0clear(&___nl__im__26);
#line 233
___nl__int__17 = ___nl__int__18 - ___nl__int__25;
#line 233
//clear ___nl__int__18;
#line 233
//clear ___nl__int__25;
#line 233
c_rt_lib0move(&___nl__im__16, ptd0int_to_string(___nl__int__17));
#line 233
//clear ___nl__int__17;
#line 233
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__16));
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
c_rt_lib0clear(&___nl__im__16);
#line 233
c_rt_lib0move(&___nl__im__27,___get_global_const(1000));
#line 233
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__27));
#line 233
c_rt_lib0clear(&___nl__im__4);
#line 233
c_rt_lib0clear(&___nl__im__27);
#line 234
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 234
c_rt_lib0move(&___nl__im__28, ov0get_element(___nl__im__29));
#line 234
c_rt_lib0clear(&___nl__im__29);
#line 234
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__28));
#line 234
c_rt_lib0clear(&___nl__im__3);
#line 234
c_rt_lib0clear(&___nl__im__28);
#line 234
c_rt_lib0move(&___nl__im__30,___get_global_const(410));
#line 234
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__30));
#line 234
c_rt_lib0clear(&___nl__im__2);
#line 234
c_rt_lib0clear(&___nl__im__30);
#line 234
c_rt_lib0clear(&___nl__im__0);
#line 234
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
#line 239
___nl__bool__1 = string0is_digit(___nl__im__0);
#line 239
if(___nl__bool__1){ goto label_2;}
#line 239
___nl__int__5 = string0ord(___nl__im__0);
#line 239
___nl__int__6 = 65;
#line 239
___nl__int__7 = ___nl__int__5 >= ___nl__int__6;
#line 239
___nl__bool__1 = ___nl__int__7;
#line 239
//clear ___nl__int__5;
#line 239
//clear ___nl__int__6;
#line 239
//clear ___nl__int__7;
#line 239
___nl__bool__4 = !___nl__bool__1;
#line 239
if(___nl__bool__4){ goto label_3;}
#line 239
___nl__int__8 = string0ord(___nl__im__0);
#line 239
___nl__int__9 = 70;
#line 239
___nl__int__10 = ___nl__int__8 <= ___nl__int__9;
#line 239
___nl__bool__1 = ___nl__int__10;
#line 239
//clear ___nl__int__8;
#line 239
//clear ___nl__int__9;
#line 239
//clear ___nl__int__10;
#line 239
label_3:
;
#line 239
//clear ___nl__bool__4;
#line 239
label_2:
;
#line 239
//clear ___nl__bool__3;
#line 239
if(___nl__bool__1){ goto label_1;}
#line 240
___nl__int__12 = string0ord(___nl__im__0);
#line 240
___nl__int__13 = 97;
#line 240
___nl__int__14 = ___nl__int__12 >= ___nl__int__13;
#line 240
___nl__bool__1 = ___nl__int__14;
#line 240
//clear ___nl__int__12;
#line 240
//clear ___nl__int__13;
#line 240
//clear ___nl__int__14;
#line 240
___nl__bool__11 = !___nl__bool__1;
#line 240
if(___nl__bool__11){ goto label_4;}
#line 240
___nl__int__15 = string0ord(___nl__im__0);
#line 240
___nl__int__16 = 102;
#line 240
___nl__int__17 = ___nl__int__15 <= ___nl__int__16;
#line 240
___nl__bool__1 = ___nl__int__17;
#line 240
//clear ___nl__int__15;
#line 240
//clear ___nl__int__16;
#line 240
//clear ___nl__int__17;
#line 240
label_4:
;
#line 240
//clear ___nl__bool__11;
#line 240
label_1:
;
#line 240
//clear ___nl__bool__2;
#line 240
c_rt_lib0clear(&___nl__im__0);
#line 240
return ___nl__bool__1;
}

ImmT  ntokenizer_priv0try_get_operator(ntokenizer0state_t0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
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
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
#line 244
c_rt_lib0move(&___nl__im__2, ntokenizer_priv0get_char_oper());
#line 244
___nl__int__4 = 0;
#line 244
___nl__int__5 = 1;
#line 244
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 244
label_3:
;
#line 244
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 244
___nl__bool__7 = ___nl__int__8;
#line 244
if(___nl__bool__7){ goto label_1;}
#line 244
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 244
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 245
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(283)));
#line 245
___nl__int__11 = getIntFromImm(___nl__im__12);
#line 245
c_rt_lib0clear(&___nl__im__12);
#line 245
___nl__int__15 = 1;
#line 245
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(282)));
#line 245
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
___nl__int__14 = ___nl__int__15 + ___nl__int__16;
#line 245
//clear ___nl__int__15;
#line 245
//clear ___nl__int__16;
#line 245
___nl__int__18 = string0length(___nl__im__3);
#line 245
___nl__int__13 = ___nl__int__14 + ___nl__int__18;
#line 245
//clear ___nl__int__14;
#line 245
//clear ___nl__int__18;
#line 245
___nl__int__19 = ___nl__int__11 < ___nl__int__13;
#line 245
___nl__bool__10 = ___nl__int__19;
#line 245
//clear ___nl__int__11;
#line 245
//clear ___nl__int__13;
#line 245
//clear ___nl__int__19;
#line 245
___nl__bool__10 = !___nl__bool__10;
#line 245
if(___nl__bool__10){ goto label_5;}
#line 245
goto label_2;
#line 245
goto label_4;
#line 245
label_5:
;
#line 245
label_4:
;
#line 245
//clear ___nl__bool__10;
#line 246
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(989)));
#line 246
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(282)));
#line 246
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 246
c_rt_lib0clear(&___nl__im__24);
#line 246
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__23));
#line 246
___nl__int__26 = string0length(___nl__im__3);
#line 246
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__26));
#line 246
c_rt_lib0move(&___nl__im__21, c_std_lib0fast_substr(___nl__im__22, ___nl__im__25, ___nl__im__27));
#line 246
c_rt_lib0clear(&___nl__im__22);
#line 246
//clear ___nl__int__23;
#line 246
c_rt_lib0clear(&___nl__im__25);
#line 246
//clear ___nl__int__26;
#line 246
c_rt_lib0clear(&___nl__im__27);
#line 246
___nl__bool__20 = c_rt_lib0eq(___nl__im__21, ___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__21);
#line 246
___nl__bool__20 = !___nl__bool__20;
#line 246
if(___nl__bool__20){ goto label_7;}
#line 249
c_rt_lib0move(&___nl__im__30, ntokenizer_priv0get_char(&___nl__im__0));
#line 249
___nl__bool__28 = string0is_letter(___nl__im__30);
#line 249
c_rt_lib0clear(&___nl__im__30);
#line 249
___nl__bool__29 = !___nl__bool__28;
#line 249
if(___nl__bool__29){ goto label_10;}
#line 250
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(989)));
#line 250
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(282)));
#line 250
___nl__int__34 = getIntFromImm(___nl__im__35);
#line 250
c_rt_lib0clear(&___nl__im__35);
#line 250
___nl__int__36 = string0length(___nl__im__3);
#line 250
___nl__int__33 = ___nl__int__34 + ___nl__int__36;
#line 250
//clear ___nl__int__34;
#line 250
//clear ___nl__int__36;
#line 250
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__33));
#line 250
___nl__int__38 = 1;
#line 250
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__38));
#line 250
c_rt_lib0move(&___nl__im__31, c_std_lib0fast_substr(___nl__im__32, ___nl__im__37, ___nl__im__39));
#line 250
c_rt_lib0clear(&___nl__im__32);
#line 250
//clear ___nl__int__33;
#line 250
c_rt_lib0clear(&___nl__im__37);
#line 250
//clear ___nl__int__38;
#line 250
c_rt_lib0clear(&___nl__im__39);
#line 250
___nl__bool__28 = string0is_letter(___nl__im__31);
#line 250
c_rt_lib0clear(&___nl__im__31);
#line 250
label_10:
;
#line 250
//clear ___nl__bool__29;
#line 250
___nl__bool__28 = !___nl__bool__28;
#line 250
if(___nl__bool__28){ goto label_9;}
#line 247
goto label_2;
#line 247
goto label_8;
#line 247
label_9:
;
#line 247
label_8:
;
#line 247
//clear ___nl__bool__28;
#line 251
c_rt_lib0copy(___ref___im__1, ___nl__im__3);
#line 252
___nl__bool__40 = true;
#line 252
c_rt_lib0move(&___nl__im__41, c_rt_lib0bool_to_nl_native(___nl__bool__40));
#line 252
c_rt_lib0clear(&___nl__im__0);
#line 252
c_rt_lib0clear(&___nl__im__2);
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 252
//clear ___nl__int__4;
#line 252
//clear ___nl__int__5;
#line 252
//clear ___nl__int__6;
#line 252
//clear ___nl__bool__7;
#line 252
//clear ___nl__int__8;
#line 252
c_rt_lib0clear(&___nl__im__9);
#line 252
//clear ___nl__bool__20;
#line 252
//clear ___nl__bool__40;
#line 252
return ___nl__im__41;
#line 253
goto label_6;
#line 253
label_7:
;
#line 253
label_6:
;
#line 253
//clear ___nl__bool__20;
#line 253
//clear ___nl__bool__40;
#line 253
c_rt_lib0clear(&___nl__im__41);
#line 253
c_rt_lib0clear(&___nl__im__3);
#line 253
label_2:
;
#line 254
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 254
goto label_3;
#line 254
label_1:
;
#line 255
___nl__bool__42 = false;
#line 255
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__42));
#line 255
c_rt_lib0clear(&___nl__im__0);
#line 255
c_rt_lib0clear(&___nl__im__2);
#line 255
c_rt_lib0clear(&___nl__im__3);
#line 255
//clear ___nl__int__4;
#line 255
//clear ___nl__int__5;
#line 255
//clear ___nl__int__6;
#line 255
//clear ___nl__bool__7;
#line 255
//clear ___nl__int__8;
#line 255
c_rt_lib0clear(&___nl__im__9);
#line 255
//clear ___nl__bool__42;
#line 255
return ___nl__im__43;
#line 255
c_rt_lib0clear(&___nl__im__0);
#line 255
c_rt_lib0clear(&___nl__im__2);
#line 255
c_rt_lib0clear(&___nl__im__3);
#line 255
//clear ___nl__int__4;
#line 255
//clear ___nl__int__5;
#line 255
//clear ___nl__int__6;
#line 255
//clear ___nl__bool__7;
#line 255
//clear ___nl__int__8;
#line 255
c_rt_lib0clear(&___nl__im__9);
#line 255
//clear ___nl__bool__42;
#line 255
c_rt_lib0clear(&___nl__im__43);
#line 255
return NULL;
}

ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__string__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
ImmT  ___nl__string__57 = NULL;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__string__67 = NULL;
bool  ___nl__bool__68 = false;
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
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
ImmT  ___nl__string__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
INT  ___nl__int__87 = 0;
INT  ___nl__int__88 = 0;
INT  ___nl__int__89 = 0;
ImmT  ___nl__string__90 = NULL;
bool  ___nl__bool__91 = false;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
bool  ___nl__bool__94 = false;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__string__98 = NULL;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
INT  ___nl__int__101 = 0;
INT  ___nl__int__102 = 0;
ImmT  ___nl__string__103 = NULL;
bool  ___nl__bool__104 = false;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
INT  ___nl__int__118 = 0;
ImmT  ___nl__im__119 = NULL;
INT  ___nl__int__120 = 0;
INT  ___nl__int__121 = 0;
ImmT  ___nl__string__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
INT  ___nl__int__125 = 0;
INT  ___nl__int__126 = 0;
INT  ___nl__int__127 = 0;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
INT  ___nl__int__132 = 0;
INT  ___nl__int__133 = 0;
INT  ___nl__int__134 = 0;
ImmT  ___nl__string__135 = NULL;
bool  ___nl__bool__136 = false;
bool  ___nl__bool__137 = false;
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
INT  ___nl__int__146 = 0;
INT  ___nl__int__147 = 0;
INT  ___nl__int__148 = 0;
ImmT  ___nl__string__149 = NULL;
bool  ___nl__bool__150 = false;
bool  ___nl__bool__151 = false;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__string__155 = NULL;
ImmT  ___nl__im__156 = NULL;
INT  ___nl__int__157 = 0;
INT  ___nl__int__158 = 0;
INT  ___nl__int__159 = 0;
ImmT  ___nl__string__160 = NULL;
bool  ___nl__bool__161 = false;
bool  ___nl__bool__162 = false;
bool  ___nl__bool__163 = false;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__string__170 = NULL;
ImmT  ___nl__im__171 = NULL;
INT  ___nl__int__172 = 0;
INT  ___nl__int__173 = 0;
INT  ___nl__int__174 = 0;
ImmT  ___nl__string__175 = NULL;
bool  ___nl__bool__176 = false;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__string__178 = NULL;
ImmT  ___nl__im__179 = NULL;
INT  ___nl__int__180 = 0;
INT  ___nl__int__181 = 0;
INT  ___nl__int__182 = 0;
ImmT  ___nl__string__183 = NULL;
INT  ___nl__int__184 = 0;
bool  ___nl__bool__185 = false;
INT  ___nl__int__186 = 0;
INT  ___nl__int__187 = 0;
INT  ___nl__int__188 = 0;
bool  ___nl__bool__189 = false;
bool  ___nl__bool__190 = false;
bool  ___nl__bool__191 = false;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
INT  ___nl__int__194 = 0;
INT  ___nl__int__195 = 0;
bool  ___nl__bool__196 = false;
bool  ___nl__bool__197 = false;
ImmT  ___nl__im__198 = NULL;
bool  ___nl__bool__199 = false;
INT  ___nl__int__200 = 0;
INT  ___nl__int__201 = 0;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__string__203 = NULL;
ImmT  ___nl__im__204 = NULL;
INT  ___nl__int__205 = 0;
INT  ___nl__int__206 = 0;
INT  ___nl__int__207 = 0;
ImmT  ___nl__string__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
#line 259
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(991)));
#line 259
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 259
c_rt_lib0clear(&___nl__im__4);
#line 259
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 259
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 259
___nl__int__8 = getIntFromImm(___nl__im__9);
#line 259
c_rt_lib0clear(&___nl__im__9);
#line 259
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(992)));
#line 259
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 259
c_rt_lib0clear(&___nl__im__11);
#line 259
___nl__int__7 = ___nl__int__8 - ___nl__int__10;
#line 259
//clear ___nl__int__8;
#line 259
//clear ___nl__int__10;
#line 259
___nl__int__12 = 1;
#line 259
___nl__int__6 = ___nl__int__7 + ___nl__int__12;
#line 259
//clear ___nl__int__7;
#line 259
//clear ___nl__int__12;
#line 259
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__6));
#line 259
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__5, ___get_global_const(925), ___nl__im__13));
#line 259
//clear ___nl__int__3;
#line 259
c_rt_lib0clear(&___nl__im__5);
#line 259
//clear ___nl__int__6;
#line 259
c_rt_lib0clear(&___nl__im__13);
#line 259
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 259
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(994), ___nl__im__1);
#line 259
c_rt_lib0clear(&___nl__im__1);
#line 259
c_rt_lib0clear(&___nl__im__2);
#line 260
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___im__0));
#line 261
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(991)));
#line 261
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 261
c_rt_lib0clear(&___nl__im__17);
#line 261
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 261
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 261
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(992)));
#line 261
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 261
c_rt_lib0clear(&___nl__im__24);
#line 261
___nl__int__20 = ___nl__int__21 - ___nl__int__23;
#line 261
//clear ___nl__int__21;
#line 261
//clear ___nl__int__23;
#line 261
___nl__int__25 = 1;
#line 261
___nl__int__19 = ___nl__int__20 + ___nl__int__25;
#line 261
//clear ___nl__int__20;
#line 261
//clear ___nl__int__25;
#line 261
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__19));
#line 261
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__18, ___get_global_const(925), ___nl__im__26));
#line 261
//clear ___nl__int__16;
#line 261
c_rt_lib0clear(&___nl__im__18);
#line 261
//clear ___nl__int__19;
#line 261
c_rt_lib0clear(&___nl__im__26);
#line 261
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 261
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(993), ___nl__im__14);
#line 261
c_rt_lib0clear(&___nl__im__14);
#line 261
c_rt_lib0clear(&___nl__im__15);
#line 262
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(95)));
#line 262
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(125));
#line 262
c_rt_lib0clear(&___nl__im__28);
#line 262
___nl__bool__27 = !___nl__bool__27;
#line 262
if(___nl__bool__27){ goto label_2;}
#line 262
//clear ___nl__bool__27;
#line 262
return NULL;
#line 262
goto label_1;
#line 262
label_2:
;
#line 262
label_1:
;
#line 262
//clear ___nl__bool__27;
#line 263
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(282)));
#line 263
___nl__int__30 = getIntFromImm(___nl__im__31);
#line 263
c_rt_lib0clear(&___nl__im__31);
#line 263
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(283)));
#line 263
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 263
c_rt_lib0clear(&___nl__im__33);
#line 263
___nl__int__34 = ___nl__int__30 == ___nl__int__32;
#line 263
___nl__bool__29 = ___nl__int__34;
#line 263
//clear ___nl__int__30;
#line 263
//clear ___nl__int__32;
#line 263
//clear ___nl__int__34;
#line 263
___nl__bool__29 = !___nl__bool__29;
#line 263
if(___nl__bool__29){ goto label_4;}
#line 264
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(912)));
#line 264
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 264
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__35);
#line 264
c_rt_lib0clear(&___nl__im__35);
#line 264
c_rt_lib0clear(&___nl__im__36);
#line 265
c_rt_lib0move(&___nl__im__38,___get_global_const(37));
#line 265
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 265
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__37);
#line 265
c_rt_lib0clear(&___nl__im__37);
#line 265
c_rt_lib0clear(&___nl__im__38);
#line 266
//clear ___nl__bool__29;
#line 266
return NULL;
#line 267
goto label_3;
#line 267
label_4:
;
#line 267
label_3:
;
#line 267
//clear ___nl__bool__29;
#line 268
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 269
c_rt_lib0move(&___nl__im__41,___get_global_const(576));
#line 269
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__41);
#line 269
c_rt_lib0clear(&___nl__im__41);
#line 269
___nl__bool__40 = !___nl__bool__40;
#line 269
if(___nl__bool__40){ goto label_6;}
#line 270
c_rt_lib0move(&___nl__im__43,___get_global_const(37));
#line 270
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 270
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__42);
#line 270
c_rt_lib0clear(&___nl__im__42);
#line 270
c_rt_lib0clear(&___nl__im__43);
#line 271
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 271
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 271
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__44);
#line 271
c_rt_lib0clear(&___nl__im__44);
#line 271
c_rt_lib0clear(&___nl__im__45);
#line 272
label_8:
;
#line 273
___nl__int__46 = 1;
#line 273
c_rt_lib0move(&___nl__im__47,___get_global_const(282));
#line 273
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__47));
#line 273
___nl__int__48 = getIntFromImm(___nl__im__47);
#line 273
___nl__int__49 = ___nl__int__48 + ___nl__int__46;
#line 273
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__49));
#line 273
c_rt_lib0move(&___nl__string__50,___get_global_const(282));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__50, ___nl__im__47));
#line 273
//clear ___nl__int__46;
#line 273
c_rt_lib0clear(&___nl__im__47);
#line 273
//clear ___nl__int__48;
#line 273
//clear ___nl__int__49;
#line 273
c_rt_lib0clear(&___nl__string__50);
#line 274
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 275
c_rt_lib0move(&___nl__im__52,___get_global_const(576));
#line 275
___nl__bool__51 = c_rt_lib0eq(___nl__im__39, ___nl__im__52);
#line 275
c_rt_lib0clear(&___nl__im__52);
#line 275
___nl__bool__51 = !___nl__bool__51;
#line 275
if(___nl__bool__51){ goto label_10;}
#line 276
___nl__int__53 = 1;
#line 276
c_rt_lib0move(&___nl__im__54,___get_global_const(282));
#line 276
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__54));
#line 276
___nl__int__55 = getIntFromImm(___nl__im__54);
#line 276
___nl__int__56 = ___nl__int__55 + ___nl__int__53;
#line 276
c_rt_lib0move(&___nl__im__54, c_rt_lib0int_new(___nl__int__56));
#line 276
c_rt_lib0move(&___nl__string__57,___get_global_const(282));
#line 276
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__57, ___nl__im__54));
#line 276
//clear ___nl__int__53;
#line 276
c_rt_lib0clear(&___nl__im__54);
#line 276
//clear ___nl__int__55;
#line 276
//clear ___nl__int__56;
#line 276
c_rt_lib0clear(&___nl__string__57);
#line 277
c_rt_lib0move(&___nl__im__59, ntokenizer_priv0get_char(___ref___im__0));
#line 277
c_rt_lib0move(&___nl__im__60,___get_global_const(576));
#line 277
___nl__bool__58 = c_rt_lib0eq(___nl__im__59, ___nl__im__60);
#line 277
c_rt_lib0clear(&___nl__im__59);
#line 277
c_rt_lib0clear(&___nl__im__60);
#line 277
___nl__bool__58 = !___nl__bool__58;
#line 277
___nl__bool__58 = !___nl__bool__58;
#line 277
if(___nl__bool__58){ goto label_12;}
#line 277
c_rt_lib0clear(&___nl__im__39);
#line 277
//clear ___nl__bool__40;
#line 277
//clear ___nl__bool__51;
#line 277
//clear ___nl__bool__58;
#line 277
return NULL;
#line 277
goto label_11;
#line 277
label_12:
;
#line 277
label_11:
;
#line 277
//clear ___nl__bool__58;
#line 278
goto label_9;
#line 278
label_10:
;
#line 278
___nl__int__61 = string0ord(___nl__im__39);
#line 278
___nl__int__62 = 10;
#line 278
___nl__int__63 = ___nl__int__61 == ___nl__int__62;
#line 278
___nl__bool__51 = ___nl__int__63;
#line 278
//clear ___nl__int__61;
#line 278
//clear ___nl__int__62;
#line 278
//clear ___nl__int__63;
#line 278
___nl__bool__51 = !___nl__bool__51;
#line 278
if(___nl__bool__51){ goto label_13;}
#line 279
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(978)));
#line 279
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 279
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__64);
#line 279
c_rt_lib0clear(&___nl__im__64);
#line 279
c_rt_lib0clear(&___nl__im__65);
#line 280
c_rt_lib0clear(&___nl__im__39);
#line 280
//clear ___nl__bool__40;
#line 280
//clear ___nl__bool__51;
#line 280
return NULL;
#line 281
goto label_9;
#line 281
label_13:
;
#line 281
label_9:
;
#line 281
//clear ___nl__bool__51;
#line 282
c_rt_lib0move(&___nl__im__66,___get_global_const(990));
#line 282
c_rt_lib0move(&___nl__im__66, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__66));
#line 282
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__39));
#line 282
c_rt_lib0move(&___nl__string__67,___get_global_const(990));
#line 282
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__67, ___nl__im__66));
#line 282
c_rt_lib0clear(&___nl__im__66);
#line 282
c_rt_lib0clear(&___nl__string__67);
#line 272
goto label_8;
#line 272
label_7:
;
#line 284
goto label_5;
#line 284
label_6:
;
#line 284
c_rt_lib0move(&___nl__im__70, ntokenizer_priv0get_next_char(___ref___im__0));
#line 284
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__39, ___nl__im__70));
#line 284
c_rt_lib0clear(&___nl__im__70);
#line 284
c_rt_lib0move(&___nl__im__71,___get_global_const(293));
#line 284
___nl__bool__40 = c_rt_lib0eq(___nl__im__69, ___nl__im__71);
#line 284
c_rt_lib0clear(&___nl__im__69);
#line 284
c_rt_lib0clear(&___nl__im__71);
#line 284
if(___nl__bool__40){ goto label_15;}
#line 284
c_rt_lib0move(&___nl__im__73, ntokenizer_priv0get_next_char(___ref___im__0));
#line 284
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__39, ___nl__im__73));
#line 284
c_rt_lib0clear(&___nl__im__73);
#line 284
c_rt_lib0move(&___nl__im__74,___get_global_const(35));
#line 284
___nl__bool__40 = c_rt_lib0eq(___nl__im__72, ___nl__im__74);
#line 284
c_rt_lib0clear(&___nl__im__72);
#line 284
c_rt_lib0clear(&___nl__im__74);
#line 284
label_15:
;
#line 284
//clear ___nl__bool__68;
#line 284
___nl__bool__40 = !___nl__bool__40;
#line 284
if(___nl__bool__40){ goto label_14;}
#line 285
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_const(996)));
#line 285
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 285
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__75);
#line 285
c_rt_lib0clear(&___nl__im__75);
#line 285
c_rt_lib0clear(&___nl__im__76);
#line 286
c_rt_lib0move(&___nl__im__79, ntokenizer_priv0get_next_char(___ref___im__0));
#line 286
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__39, ___nl__im__79));
#line 286
c_rt_lib0clear(&___nl__im__79);
#line 286
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 286
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__77);
#line 286
c_rt_lib0clear(&___nl__im__77);
#line 286
c_rt_lib0clear(&___nl__im__78);
#line 287
___nl__int__80 = 2;
#line 287
c_rt_lib0move(&___nl__im__81,___get_global_const(282));
#line 287
c_rt_lib0move(&___nl__im__81, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__81));
#line 287
___nl__int__82 = getIntFromImm(___nl__im__81);
#line 287
___nl__int__83 = ___nl__int__82 + ___nl__int__80;
#line 287
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__83));
#line 287
c_rt_lib0move(&___nl__string__84,___get_global_const(282));
#line 287
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__84, ___nl__im__81));
#line 287
//clear ___nl__int__80;
#line 287
c_rt_lib0clear(&___nl__im__81);
#line 287
//clear ___nl__int__82;
#line 287
//clear ___nl__int__83;
#line 287
c_rt_lib0clear(&___nl__string__84);
#line 288
goto label_5;
#line 288
label_14:
;
#line 288
___nl__bool__40 = string0is_letter(___nl__im__39);
#line 288
___nl__bool__40 = !___nl__bool__40;
#line 288
if(___nl__bool__40){ goto label_16;}
#line 289
c_rt_lib0copy(&___nl__im__85, ___nl__im__39);
#line 289
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__85);
#line 289
c_rt_lib0clear(&___nl__im__85);
#line 290
c_rt_lib0move(&___nl__im__86,___get_global_const(282));
#line 290
c_rt_lib0move(&___nl__im__86, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__86));
#line 290
___nl__int__87 = 1;
#line 290
___nl__int__88 = getIntFromImm(___nl__im__86);
#line 290
___nl__int__89 = ___nl__int__88 + ___nl__int__87;
#line 290
c_rt_lib0move(&___nl__im__86, c_rt_lib0int_new(___nl__int__89));
#line 290
c_rt_lib0move(&___nl__string__90,___get_global_const(282));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__90, ___nl__im__86));
#line 290
c_rt_lib0clear(&___nl__im__86);
#line 290
//clear ___nl__int__87;
#line 290
//clear ___nl__int__88;
#line 290
//clear ___nl__int__89;
#line 290
c_rt_lib0clear(&___nl__string__90);
#line 291
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 292
label_18:
;
#line 292
c_rt_lib0move(&___nl__im__93,___get_global_const(37));
#line 292
___nl__bool__91 = c_rt_lib0ne(___nl__im__39, ___nl__im__93);
#line 292
c_rt_lib0clear(&___nl__im__93);
#line 292
___nl__bool__92 = !___nl__bool__91;
#line 292
if(___nl__bool__92){ goto label_19;}
#line 292
___nl__bool__91 = string0is_letter(___nl__im__39);
#line 292
if(___nl__bool__91){ goto label_21;}
#line 292
___nl__bool__91 = string0is_digit(___nl__im__39);
#line 292
label_21:
;
#line 292
//clear ___nl__bool__95;
#line 292
if(___nl__bool__91){ goto label_20;}
#line 292
c_rt_lib0move(&___nl__im__96,___get_global_const(111));
#line 292
___nl__bool__91 = c_rt_lib0eq(___nl__im__39, ___nl__im__96);
#line 292
c_rt_lib0clear(&___nl__im__96);
#line 292
label_20:
;
#line 292
//clear ___nl__bool__94;
#line 292
label_19:
;
#line 292
//clear ___nl__bool__92;
#line 292
___nl__bool__91 = !___nl__bool__91;
#line 292
if(___nl__bool__91){ goto label_17;}
#line 293
c_rt_lib0move(&___nl__im__97,___get_global_const(990));
#line 293
c_rt_lib0move(&___nl__im__97, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__97));
#line 293
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_add(___nl__im__97, ___nl__im__39));
#line 293
c_rt_lib0move(&___nl__string__98,___get_global_const(990));
#line 293
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__98, ___nl__im__97));
#line 293
c_rt_lib0clear(&___nl__im__97);
#line 293
c_rt_lib0clear(&___nl__string__98);
#line 294
c_rt_lib0move(&___nl__im__99,___get_global_const(282));
#line 294
c_rt_lib0move(&___nl__im__99, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__99));
#line 294
___nl__int__100 = 1;
#line 294
___nl__int__101 = getIntFromImm(___nl__im__99);
#line 294
___nl__int__102 = ___nl__int__101 + ___nl__int__100;
#line 294
c_rt_lib0move(&___nl__im__99, c_rt_lib0int_new(___nl__int__102));
#line 294
c_rt_lib0move(&___nl__string__103,___get_global_const(282));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__103, ___nl__im__99));
#line 294
c_rt_lib0clear(&___nl__im__99);
#line 294
//clear ___nl__int__100;
#line 294
//clear ___nl__int__101;
#line 294
//clear ___nl__int__102;
#line 294
c_rt_lib0clear(&___nl__string__103);
#line 295
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 296
goto label_18;
#line 296
label_17:
;
#line 297
c_rt_lib0move(&___nl__im__105, ntokenizer_priv0get_lett_oper());
#line 297
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 297
___nl__bool__104 = hash0has_key(___nl__im__105, ___nl__im__106);
#line 297
c_rt_lib0clear(&___nl__im__105);
#line 297
c_rt_lib0clear(&___nl__im__106);
#line 297
___nl__bool__104 = !___nl__bool__104;
#line 297
if(___nl__bool__104){ goto label_23;}
#line 298
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 298
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 298
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__107);
#line 298
c_rt_lib0clear(&___nl__im__107);
#line 298
c_rt_lib0clear(&___nl__im__108);
#line 299
goto label_22;
#line 299
label_23:
;
#line 300
c_rt_lib0move(&___nl__im__112, ntokenizer_priv0get_keywords());
#line 300
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(990)));
#line 300
___nl__bool__111 = hash0has_key(___nl__im__112, ___nl__im__113);
#line 300
c_rt_lib0clear(&___nl__im__112);
#line 300
c_rt_lib0clear(&___nl__im__113);
#line 300
if(___nl__bool__111){ goto label_25;}
#line 300
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_const(965)));
#line 300
goto label_24;
#line 300
label_25:
;
#line 300
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_const(981)));
#line 300
label_24:
;
#line 300
//clear ___nl__bool__111;
#line 300
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 300
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__109);
#line 300
c_rt_lib0clear(&___nl__im__109);
#line 300
c_rt_lib0clear(&___nl__im__110);
#line 301
goto label_22;
#line 301
label_22:
;
#line 301
//clear ___nl__bool__104;
#line 302
goto label_5;
#line 302
label_16:
;
#line 302
c_rt_lib0move(&___nl__im__114, ntokenizer_priv0try_get_operator((*___ref___im__0), &___nl__im__39));
#line 302
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__114);
#line 302
c_rt_lib0clear(&___nl__im__114);
#line 302
___nl__bool__40 = !___nl__bool__40;
#line 302
if(___nl__bool__40){ goto label_26;}
#line 303
c_rt_lib0move(&___nl__im__116, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 303
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 303
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__115);
#line 303
c_rt_lib0clear(&___nl__im__115);
#line 303
c_rt_lib0clear(&___nl__im__116);
#line 304
c_rt_lib0copy(&___nl__im__117, ___nl__im__39);
#line 304
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__117);
#line 304
c_rt_lib0clear(&___nl__im__117);
#line 305
___nl__int__118 = string0length(___nl__im__39);
#line 305
c_rt_lib0move(&___nl__im__119,___get_global_const(282));
#line 305
c_rt_lib0move(&___nl__im__119, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__119));
#line 305
___nl__int__120 = getIntFromImm(___nl__im__119);
#line 305
___nl__int__121 = ___nl__int__120 + ___nl__int__118;
#line 305
c_rt_lib0move(&___nl__im__119, c_rt_lib0int_new(___nl__int__121));
#line 305
c_rt_lib0move(&___nl__string__122,___get_global_const(282));
#line 305
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__122, ___nl__im__119));
#line 305
//clear ___nl__int__118;
#line 305
c_rt_lib0clear(&___nl__im__119);
#line 305
//clear ___nl__int__120;
#line 305
//clear ___nl__int__121;
#line 305
c_rt_lib0clear(&___nl__string__122);
#line 306
goto label_5;
#line 306
label_26:
;
#line 306
c_rt_lib0move(&___nl__im__124,___get_global_const(1001));
#line 306
c_rt_lib0move(&___nl__im__123, string0index2(___nl__im__124, ___nl__im__39));
#line 306
c_rt_lib0clear(&___nl__im__124);
#line 306
___nl__int__125 = 0;
#line 306
___nl__int__126 = getIntFromImm(___nl__im__123);
#line 306
___nl__int__127 = ___nl__int__126 >= ___nl__int__125;
#line 306
___nl__bool__40 = ___nl__int__127;
#line 306
c_rt_lib0clear(&___nl__im__123);
#line 306
//clear ___nl__int__125;
#line 306
//clear ___nl__int__126;
#line 306
//clear ___nl__int__127;
#line 306
___nl__bool__40 = !___nl__bool__40;
#line 306
if(___nl__bool__40){ goto label_27;}
#line 307
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_none(___get_global_const(996)));
#line 307
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 307
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__128);
#line 307
c_rt_lib0clear(&___nl__im__128);
#line 307
c_rt_lib0clear(&___nl__im__129);
#line 308
c_rt_lib0copy(&___nl__im__130, ___nl__im__39);
#line 308
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__130);
#line 308
c_rt_lib0clear(&___nl__im__130);
#line 309
c_rt_lib0move(&___nl__im__131,___get_global_const(282));
#line 309
c_rt_lib0move(&___nl__im__131, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__131));
#line 309
___nl__int__132 = 1;
#line 309
___nl__int__133 = getIntFromImm(___nl__im__131);
#line 309
___nl__int__134 = ___nl__int__133 + ___nl__int__132;
#line 309
c_rt_lib0move(&___nl__im__131, c_rt_lib0int_new(___nl__int__134));
#line 309
c_rt_lib0move(&___nl__string__135,___get_global_const(282));
#line 309
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__135, ___nl__im__131));
#line 309
c_rt_lib0clear(&___nl__im__131);
#line 309
//clear ___nl__int__132;
#line 309
//clear ___nl__int__133;
#line 309
//clear ___nl__int__134;
#line 309
c_rt_lib0clear(&___nl__string__135);
#line 310
goto label_5;
#line 310
label_27:
;
#line 310
___nl__bool__40 = string0is_digit(___nl__im__39);
#line 310
if(___nl__bool__40){ goto label_29;}
#line 310
c_rt_lib0move(&___nl__im__139,___get_global_const(339));
#line 310
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__139);
#line 310
c_rt_lib0clear(&___nl__im__139);
#line 310
if(___nl__bool__40){ goto label_31;}
#line 310
c_rt_lib0move(&___nl__im__140,___get_global_const(341));
#line 310
___nl__bool__40 = c_rt_lib0eq(___nl__im__39, ___nl__im__140);
#line 310
c_rt_lib0clear(&___nl__im__140);
#line 310
label_31:
;
#line 310
//clear ___nl__bool__138;
#line 310
___nl__bool__137 = !___nl__bool__40;
#line 310
if(___nl__bool__137){ goto label_30;}
#line 310
c_rt_lib0move(&___nl__im__141, ntokenizer_priv0get_next_char(___ref___im__0));
#line 310
___nl__bool__40 = string0is_digit(___nl__im__141);
#line 310
c_rt_lib0clear(&___nl__im__141);
#line 310
label_30:
;
#line 310
//clear ___nl__bool__137;
#line 310
label_29:
;
#line 310
//clear ___nl__bool__136;
#line 310
___nl__bool__40 = !___nl__bool__40;
#line 310
if(___nl__bool__40){ goto label_28;}
#line 311
c_rt_lib0copy(&___nl__im__142, ___nl__im__39);
#line 311
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__142);
#line 311
c_rt_lib0clear(&___nl__im__142);
#line 312
c_rt_lib0move(&___nl__im__144, c_rt_lib0ov_mk_none(___get_global_const(976)));
#line 312
c_rt_lib0copy(&___nl__im__143, ___nl__im__144);
#line 312
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__143);
#line 312
c_rt_lib0clear(&___nl__im__143);
#line 312
c_rt_lib0clear(&___nl__im__144);
#line 313
c_rt_lib0move(&___nl__im__145,___get_global_const(282));
#line 313
c_rt_lib0move(&___nl__im__145, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__145));
#line 313
___nl__int__146 = 1;
#line 313
___nl__int__147 = getIntFromImm(___nl__im__145);
#line 313
___nl__int__148 = ___nl__int__147 + ___nl__int__146;
#line 313
c_rt_lib0move(&___nl__im__145, c_rt_lib0int_new(___nl__int__148));
#line 313
c_rt_lib0move(&___nl__string__149,___get_global_const(282));
#line 313
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__149, ___nl__im__145));
#line 313
c_rt_lib0clear(&___nl__im__145);
#line 313
//clear ___nl__int__146;
#line 313
//clear ___nl__int__147;
#line 313
//clear ___nl__int__148;
#line 313
c_rt_lib0clear(&___nl__string__149);
#line 314
c_rt_lib0move(&___nl__im__152,___get_global_const(339));
#line 314
___nl__bool__150 = c_rt_lib0eq(___nl__im__39, ___nl__im__152);
#line 314
c_rt_lib0clear(&___nl__im__152);
#line 314
if(___nl__bool__150){ goto label_34;}
#line 314
c_rt_lib0move(&___nl__im__153,___get_global_const(341));
#line 314
___nl__bool__150 = c_rt_lib0eq(___nl__im__39, ___nl__im__153);
#line 314
c_rt_lib0clear(&___nl__im__153);
#line 314
label_34:
;
#line 314
//clear ___nl__bool__151;
#line 314
___nl__bool__150 = !___nl__bool__150;
#line 314
if(___nl__bool__150){ goto label_33;}
#line 315
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 316
c_rt_lib0move(&___nl__im__154,___get_global_const(990));
#line 316
c_rt_lib0move(&___nl__im__154, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__154));
#line 316
c_rt_lib0move(&___nl__im__154, c_rt_lib0concat_add(___nl__im__154, ___nl__im__39));
#line 316
c_rt_lib0move(&___nl__string__155,___get_global_const(990));
#line 316
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__155, ___nl__im__154));
#line 316
c_rt_lib0clear(&___nl__im__154);
#line 316
c_rt_lib0clear(&___nl__string__155);
#line 317
c_rt_lib0move(&___nl__im__156,___get_global_const(282));
#line 317
c_rt_lib0move(&___nl__im__156, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__156));
#line 317
___nl__int__157 = 1;
#line 317
___nl__int__158 = getIntFromImm(___nl__im__156);
#line 317
___nl__int__159 = ___nl__int__158 + ___nl__int__157;
#line 317
c_rt_lib0move(&___nl__im__156, c_rt_lib0int_new(___nl__int__159));
#line 317
c_rt_lib0move(&___nl__string__160,___get_global_const(282));
#line 317
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__160, ___nl__im__156));
#line 317
c_rt_lib0clear(&___nl__im__156);
#line 317
//clear ___nl__int__157;
#line 317
//clear ___nl__int__158;
#line 317
//clear ___nl__int__159;
#line 317
c_rt_lib0clear(&___nl__string__160);
#line 318
goto label_32;
#line 318
label_33:
;
#line 318
label_32:
;
#line 318
//clear ___nl__bool__150;
#line 319
c_rt_lib0move(&___nl__im__164,___get_global_const(21));
#line 319
___nl__bool__161 = c_rt_lib0eq(___nl__im__39, ___nl__im__164);
#line 319
c_rt_lib0clear(&___nl__im__164);
#line 319
___nl__bool__163 = !___nl__bool__161;
#line 319
if(___nl__bool__163){ goto label_38;}
#line 319
c_rt_lib0move(&___nl__im__165, ntokenizer_priv0get_char(___ref___im__0));
#line 319
c_rt_lib0move(&___nl__im__166,___get_global_const(1002));
#line 319
___nl__bool__161 = c_rt_lib0eq(___nl__im__165, ___nl__im__166);
#line 319
c_rt_lib0clear(&___nl__im__165);
#line 319
c_rt_lib0clear(&___nl__im__166);
#line 319
label_38:
;
#line 319
//clear ___nl__bool__163;
#line 319
___nl__bool__162 = !___nl__bool__161;
#line 319
if(___nl__bool__162){ goto label_37;}
#line 319
c_rt_lib0move(&___nl__im__167, ntokenizer_priv0get_next_char(___ref___im__0));
#line 319
___nl__bool__161 = ntokenizer_priv0is_hex_number(___nl__im__167);
#line 319
c_rt_lib0clear(&___nl__im__167);
#line 319
label_37:
;
#line 319
//clear ___nl__bool__162;
#line 319
___nl__bool__161 = !___nl__bool__161;
#line 319
if(___nl__bool__161){ goto label_36;}
#line 320
c_rt_lib0move(&___nl__im__168, ntokenizer_priv0get_char(___ref___im__0));
#line 320
c_rt_lib0move(&___nl__im__169,___get_global_const(990));
#line 320
c_rt_lib0move(&___nl__im__169, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__169));
#line 320
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_add(___nl__im__169, ___nl__im__168));
#line 320
c_rt_lib0move(&___nl__string__170,___get_global_const(990));
#line 320
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__170, ___nl__im__169));
#line 320
c_rt_lib0clear(&___nl__im__168);
#line 320
c_rt_lib0clear(&___nl__im__169);
#line 320
c_rt_lib0clear(&___nl__string__170);
#line 321
c_rt_lib0move(&___nl__im__171,___get_global_const(282));
#line 321
c_rt_lib0move(&___nl__im__171, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__171));
#line 321
___nl__int__172 = 1;
#line 321
___nl__int__173 = getIntFromImm(___nl__im__171);
#line 321
___nl__int__174 = ___nl__int__173 + ___nl__int__172;
#line 321
c_rt_lib0move(&___nl__im__171, c_rt_lib0int_new(___nl__int__174));
#line 321
c_rt_lib0move(&___nl__string__175,___get_global_const(282));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__175, ___nl__im__171));
#line 321
c_rt_lib0clear(&___nl__im__171);
#line 321
//clear ___nl__int__172;
#line 321
//clear ___nl__int__173;
#line 321
//clear ___nl__int__174;
#line 321
c_rt_lib0clear(&___nl__string__175);
#line 322
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 323
label_40:
;
#line 323
___nl__bool__176 = ntokenizer_priv0is_hex_number(___nl__im__39);
#line 323
___nl__bool__176 = !___nl__bool__176;
#line 323
if(___nl__bool__176){ goto label_39;}
#line 324
c_rt_lib0move(&___nl__im__177,___get_global_const(990));
#line 324
c_rt_lib0move(&___nl__im__177, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__177));
#line 324
c_rt_lib0move(&___nl__im__177, c_rt_lib0concat_add(___nl__im__177, ___nl__im__39));
#line 324
c_rt_lib0move(&___nl__string__178,___get_global_const(990));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__178, ___nl__im__177));
#line 324
c_rt_lib0clear(&___nl__im__177);
#line 324
c_rt_lib0clear(&___nl__string__178);
#line 325
c_rt_lib0move(&___nl__im__179,___get_global_const(282));
#line 325
c_rt_lib0move(&___nl__im__179, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__179));
#line 325
___nl__int__180 = 1;
#line 325
___nl__int__181 = getIntFromImm(___nl__im__179);
#line 325
___nl__int__182 = ___nl__int__181 + ___nl__int__180;
#line 325
c_rt_lib0move(&___nl__im__179, c_rt_lib0int_new(___nl__int__182));
#line 325
c_rt_lib0move(&___nl__string__183,___get_global_const(282));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__183, ___nl__im__179));
#line 325
c_rt_lib0clear(&___nl__im__179);
#line 325
//clear ___nl__int__180;
#line 325
//clear ___nl__int__181;
#line 325
//clear ___nl__int__182;
#line 325
c_rt_lib0clear(&___nl__string__183);
#line 326
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 327
goto label_40;
#line 327
label_39:
;
#line 328
goto label_35;
#line 328
label_36:
;
#line 329
___nl__int__184 = 0;
#line 330
label_42:
;
#line 331
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 332
___nl__int__186 = 1;
#line 332
___nl__int__187 = ___nl__int__184 == ___nl__int__186;
#line 332
___nl__bool__185 = ___nl__int__187;
#line 332
//clear ___nl__int__186;
#line 332
//clear ___nl__int__187;
#line 332
___nl__bool__185 = !___nl__bool__185;
#line 332
if(___nl__bool__185){ goto label_44;}
#line 332
___nl__int__188 = 1;
#line 332
___nl__int__184 = ___nl__int__184 + ___nl__int__188;
#line 332
//clear ___nl__int__188;
#line 332
goto label_43;
#line 332
label_44:
;
#line 332
label_43:
;
#line 332
//clear ___nl__bool__185;
#line 333
c_rt_lib0move(&___nl__im__192,___get_global_const(114));
#line 333
___nl__bool__189 = c_rt_lib0eq(___nl__im__39, ___nl__im__192);
#line 333
c_rt_lib0clear(&___nl__im__192);
#line 333
___nl__bool__191 = !___nl__bool__189;
#line 333
if(___nl__bool__191){ goto label_48;}
#line 333
c_rt_lib0move(&___nl__im__193, ntokenizer_priv0get_next_char(___ref___im__0));
#line 333
___nl__bool__189 = string0is_digit(___nl__im__193);
#line 333
c_rt_lib0clear(&___nl__im__193);
#line 333
label_48:
;
#line 333
//clear ___nl__bool__191;
#line 333
___nl__bool__190 = !___nl__bool__189;
#line 333
if(___nl__bool__190){ goto label_47;}
#line 333
___nl__int__194 = 0;
#line 333
___nl__int__195 = ___nl__int__184 == ___nl__int__194;
#line 333
___nl__bool__189 = ___nl__int__195;
#line 333
//clear ___nl__int__194;
#line 333
//clear ___nl__int__195;
#line 333
label_47:
;
#line 333
//clear ___nl__bool__190;
#line 333
___nl__bool__189 = !___nl__bool__189;
#line 333
if(___nl__bool__189){ goto label_46;}
#line 333
___nl__int__184 = 1;
#line 333
goto label_45;
#line 333
label_46:
;
#line 333
label_45:
;
#line 333
//clear ___nl__bool__189;
#line 334
c_rt_lib0move(&___nl__im__198,___get_global_const(37));
#line 334
___nl__bool__196 = c_rt_lib0eq(___nl__im__39, ___nl__im__198);
#line 334
c_rt_lib0clear(&___nl__im__198);
#line 334
if(___nl__bool__196){ goto label_51;}
#line 334
___nl__bool__196 = string0is_digit(___nl__im__39);
#line 334
if(___nl__bool__196){ goto label_52;}
#line 334
___nl__int__200 = 1;
#line 334
___nl__int__201 = ___nl__int__184 == ___nl__int__200;
#line 334
___nl__bool__196 = ___nl__int__201;
#line 334
//clear ___nl__int__200;
#line 334
//clear ___nl__int__201;
#line 334
label_52:
;
#line 334
//clear ___nl__bool__199;
#line 334
___nl__bool__196 = !___nl__bool__196;
#line 334
label_51:
;
#line 334
//clear ___nl__bool__197;
#line 334
___nl__bool__196 = !___nl__bool__196;
#line 334
if(___nl__bool__196){ goto label_50;}
#line 334
goto label_41;
#line 334
goto label_49;
#line 334
label_50:
;
#line 334
label_49:
;
#line 334
//clear ___nl__bool__196;
#line 335
c_rt_lib0move(&___nl__im__202,___get_global_const(990));
#line 335
c_rt_lib0move(&___nl__im__202, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__202));
#line 335
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_add(___nl__im__202, ___nl__im__39));
#line 335
c_rt_lib0move(&___nl__string__203,___get_global_const(990));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__203, ___nl__im__202));
#line 335
c_rt_lib0clear(&___nl__im__202);
#line 335
c_rt_lib0clear(&___nl__string__203);
#line 336
c_rt_lib0move(&___nl__im__204,___get_global_const(282));
#line 336
c_rt_lib0move(&___nl__im__204, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__204));
#line 336
___nl__int__205 = 1;
#line 336
___nl__int__206 = getIntFromImm(___nl__im__204);
#line 336
___nl__int__207 = ___nl__int__206 + ___nl__int__205;
#line 336
c_rt_lib0move(&___nl__im__204, c_rt_lib0int_new(___nl__int__207));
#line 336
c_rt_lib0move(&___nl__string__208,___get_global_const(282));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__208, ___nl__im__204));
#line 336
c_rt_lib0clear(&___nl__im__204);
#line 336
//clear ___nl__int__205;
#line 336
//clear ___nl__int__206;
#line 336
//clear ___nl__int__207;
#line 336
c_rt_lib0clear(&___nl__string__208);
#line 330
goto label_42;
#line 330
label_41:
;
#line 338
goto label_35;
#line 338
label_35:
;
#line 338
//clear ___nl__bool__161;
#line 338
//clear ___nl__bool__176;
#line 338
//clear ___nl__int__184;
#line 339
goto label_5;
#line 339
label_28:
;
#line 340
c_rt_lib0move(&___nl__im__210, c_rt_lib0ov_mk_none(___get_global_const(125)));
#line 340
c_rt_lib0copy(&___nl__im__209, ___nl__im__210);
#line 340
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(95), ___nl__im__209);
#line 340
c_rt_lib0clear(&___nl__im__209);
#line 340
c_rt_lib0clear(&___nl__im__210);
#line 341
c_rt_lib0copy(&___nl__im__211, ___nl__im__39);
#line 341
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(990), ___nl__im__211);
#line 341
c_rt_lib0clear(&___nl__im__211);
#line 342
goto label_5;
#line 342
label_5:
;
#line 342
//clear ___nl__bool__40;
#line 342
//clear ___nl__bool__91;
#line 342
c_rt_lib0clear(&___nl__im__39);
#line 342
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
