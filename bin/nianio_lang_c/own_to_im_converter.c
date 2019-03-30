
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "own_to_im_converter.h"
#include "tct.h"
#include "anon_naming.h"
#include "ptd.h"
#include "hash.h"
#include "array.h"
#include "string.h"
#include "tct.h"
#line 1 "own_to_im_converter.nl"

static ImmT *__const__f = NULL;
void own_to_im_converter_priv0__const__init();
ImmT own_to_im_converter_priv0__const__sim(int __nr);
ImmT own_to_im_converter_priv0__const__sing(int __nr);

ImmT  own_to_im_converter_priv0conv_priv_prefix();
ImmT  own_to_im_converter_priv0get_type_constructor(tct0meta_type0type ___nl__im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2);


ImmT own_to_im_converter_priv0conv_priv_prefix(){
own_to_im_converter_priv0__const__init();
return own_to_im_converter_priv0__const__sing(0);
}
ImmT own_to_im_converter_priv0conv_priv_prefix0cal() {
own_to_im_converter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 13
c_rt_lib0move(&___nl__im__0,___get_global_string_const(1134));
#line 13
return ___nl__im__0;
return NULL;

}

ImmT  own_to_im_converter0res_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "own_to_im_converter0res_t");
return own_to_im_converter0res_t();
}
ImmT own_to_im_converter0res_t(){
own_to_im_converter_priv0__const__init();
return own_to_im_converter_priv0__const__sing(1);
}
ImmT own_to_im_converter0res_t0cal() {
own_to_im_converter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 18
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 19
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 19
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 19
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1135), ___nl__im__2, ___get_global_string_const(1136), ___nl__im__3));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
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

ImmT  own_to_im_converter0name_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "own_to_im_converter0name_t");
return own_to_im_converter0name_t();
}
ImmT own_to_im_converter0name_t(){
own_to_im_converter_priv0__const__init();
return own_to_im_converter_priv0__const__sing(2);
}
ImmT own_to_im_converter0name_t0cal() {
own_to_im_converter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 25
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 26
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(166), ___nl__im__2, ___get_global_string_const(1137), ___nl__im__3));
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__3);
#line 26
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
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

ImmT  own_to_im_converter0get_function_name0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "own_to_im_converter0get_function_name");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return own_to_im_converter0get_function_name(*var0, *var1);
}
ImmT  own_to_im_converter0get_function_name(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
own_to_im_converter_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
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
#line 31
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 31
___nl__bool__2 = !___nl__bool__2;
#line 31
if(___nl__bool__2){ goto label_65;}
#line 32
___nl__bool__3 = tct0is_own_type(___nl__im__0, ___nl__im__1);
#line 32
___nl__bool__3 = !___nl__bool__3;
#line 32
___nl__bool__3 = !___nl__bool__3;
#line 32
if(___nl__bool__3){ goto label_14;}
#line 33
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
//clear ___nl__bool__2;
#line 33
//clear ___nl__bool__3;
#line 33
return ___nl__im__4;
#line 34
goto label_14;
#line 34
label_14:
;
#line 34
//clear ___nl__bool__3;
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 36
c_rt_lib0move(&___nl__im__7,___get_global_string_const(34));
#line 36
c_rt_lib0move(&___nl__im__6, string0index2(___nl__im__5, ___nl__im__7));
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 37
___nl__int__9 = 0;
#line 37
___nl__int__10 = getIntFromImm(___nl__im__6);
#line 37
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__5, ___nl__int__9, ___nl__int__10));
#line 37
//clear ___nl__int__9;
#line 37
//clear ___nl__int__10;
#line 38
___nl__int__13 = 2;
#line 38
___nl__int__14 = getIntFromImm(___nl__im__6);
#line 38
___nl__int__12 = ___nl__int__14 + ___nl__int__13;
#line 38
//clear ___nl__int__13;
#line 38
//clear ___nl__int__14;
#line 38
___nl__int__17 = string0length(___nl__im__5);
#line 38
___nl__int__18 = getIntFromImm(___nl__im__6);
#line 38
___nl__int__16 = ___nl__int__17 - ___nl__int__18;
#line 38
//clear ___nl__int__17;
#line 38
//clear ___nl__int__18;
#line 38
___nl__int__19 = 2;
#line 38
___nl__int__15 = ___nl__int__16 - ___nl__int__19;
#line 38
//clear ___nl__int__16;
#line 38
//clear ___nl__int__19;
#line 38
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__5, ___nl__int__12, ___nl__int__15));
#line 38
//clear ___nl__int__12;
#line 38
//clear ___nl__int__15;
#line 39
c_rt_lib0move(&___nl__im__24,___get_global_string_const(34));
#line 39
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__8, ___nl__im__24));
#line 39
c_rt_lib0clear(&___nl__im__24);
#line 39
c_rt_lib0move(&___nl__im__25, own_to_im_converter_priv0conv_priv_prefix());
#line 39
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 39
c_rt_lib0clear(&___nl__im__23);
#line 39
c_rt_lib0clear(&___nl__im__25);
#line 39
c_rt_lib0move(&___nl__im__26,___get_global_string_const(20));
#line 39
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 39
c_rt_lib0clear(&___nl__im__22);
#line 39
c_rt_lib0clear(&___nl__im__26);
#line 39
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__11));
#line 39
c_rt_lib0clear(&___nl__im__21);
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
//clear ___nl__bool__2;
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 39
c_rt_lib0clear(&___nl__im__8);
#line 39
c_rt_lib0clear(&___nl__im__11);
#line 39
return ___nl__im__20;
#line 40
goto label_65;
#line 40
label_65:
;
#line 40
//clear ___nl__bool__2;
#line 40
c_rt_lib0clear(&___nl__im__5);
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__8);
#line 40
c_rt_lib0clear(&___nl__im__11);
#line 40
c_rt_lib0clear(&___nl__im__20);
#line 41
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(0));
#line 41
___nl__bool__27 = tct0is_own_type(___nl__im__0, ___nl__im__28);
#line 41
c_rt_lib0clear(&___nl__im__28);
#line 41
___nl__bool__27 = !___nl__bool__27;
#line 41
if(___nl__bool__27){ goto label_87;}
#line 42
c_rt_lib0move(&___nl__im__30, own_to_im_converter_priv0conv_priv_prefix());
#line 42
c_rt_lib0move(&___nl__im__31, anon_naming0get_anon_name_loop(___nl__im__0));
#line 42
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 42
c_rt_lib0clear(&___nl__im__30);
#line 42
c_rt_lib0clear(&___nl__im__31);
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
//clear ___nl__bool__27;
#line 42
return ___nl__im__29;
#line 43
goto label_87;
#line 43
label_87:
;
#line 43
//clear ___nl__bool__27;
#line 43
c_rt_lib0clear(&___nl__im__29);
#line 44
c_rt_lib0move(&___nl__im__32,___get_global_string_const(36));
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
return ___nl__im__32;
return NULL;

}

ImmT  own_to_im_converter0get_required_arg_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "own_to_im_converter0get_required_arg_type");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return own_to_im_converter0get_required_arg_type(*var0, *var1);
}
ImmT  own_to_im_converter0get_required_arg_type(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
own_to_im_converter_priv0__const__init();
bool  ___nl__bool__2 = false;
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
#line 48
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 48
if(___nl__bool__2){ goto label_33;}
#line 50
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 50
if(___nl__bool__2){ goto label_45;}
#line 52
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 52
if(___nl__bool__2){ goto label_60;}
#line 54
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 54
if(___nl__bool__2){ goto label_78;}
#line 56
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 56
if(___nl__bool__2){ goto label_99;}
#line 58
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 58
if(___nl__bool__2){ goto label_123;}
#line 60
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 60
if(___nl__bool__2){ goto label_150;}
#line 62
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 62
if(___nl__bool__2){ goto label_180;}
#line 64
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 64
if(___nl__bool__2){ goto label_213;}
#line 66
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 66
if(___nl__bool__2){ goto label_251;}
#line 68
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 68
if(___nl__bool__2){ goto label_286;}
#line 70
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 70
if(___nl__bool__2){ goto label_322;}
#line 72
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 72
if(___nl__bool__2){ goto label_359;}
#line 74
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 74
if(___nl__bool__2){ goto label_363;}
#line 76
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 76
if(___nl__bool__2){ goto label_367;}
#line 76
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 76
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 76
nl_die_arg(___nl__im__3);
#line 48
label_33:
;
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 48
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 49
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 49
c_rt_lib0clear(&___nl__im__0);
#line 49
c_rt_lib0clear(&___nl__im__1);
#line 49
//clear ___nl__bool__2;
#line 49
c_rt_lib0clear(&___nl__im__3);
#line 49
c_rt_lib0clear(&___nl__im__4);
#line 49
c_rt_lib0clear(&___nl__im__5);
#line 49
return ___nl__im__6;
#line 50
goto label_407;
#line 50
label_45:
;
#line 50
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 50
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 51
c_rt_lib0move(&___nl__im__9,___get_global_string_const(39));
#line 51
c_rt_lib0clear(&___nl__im__0);
#line 51
c_rt_lib0clear(&___nl__im__1);
#line 51
//clear ___nl__bool__2;
#line 51
c_rt_lib0clear(&___nl__im__3);
#line 51
c_rt_lib0clear(&___nl__im__4);
#line 51
c_rt_lib0clear(&___nl__im__5);
#line 51
c_rt_lib0clear(&___nl__im__6);
#line 51
c_rt_lib0clear(&___nl__im__7);
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 51
return ___nl__im__9;
#line 52
goto label_407;
#line 52
label_60:
;
#line 52
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 52
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 53
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
//clear ___nl__bool__2;
#line 53
c_rt_lib0clear(&___nl__im__3);
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0clear(&___nl__im__6);
#line 53
c_rt_lib0clear(&___nl__im__7);
#line 53
c_rt_lib0clear(&___nl__im__8);
#line 53
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0clear(&___nl__im__10);
#line 53
c_rt_lib0clear(&___nl__im__11);
#line 53
return ___nl__im__12;
#line 54
goto label_407;
#line 54
label_78:
;
#line 54
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 54
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 55
c_rt_lib0move(&___nl__im__15,___get_global_string_const(39));
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
//clear ___nl__bool__2;
#line 55
c_rt_lib0clear(&___nl__im__3);
#line 55
c_rt_lib0clear(&___nl__im__4);
#line 55
c_rt_lib0clear(&___nl__im__5);
#line 55
c_rt_lib0clear(&___nl__im__6);
#line 55
c_rt_lib0clear(&___nl__im__7);
#line 55
c_rt_lib0clear(&___nl__im__8);
#line 55
c_rt_lib0clear(&___nl__im__9);
#line 55
c_rt_lib0clear(&___nl__im__10);
#line 55
c_rt_lib0clear(&___nl__im__11);
#line 55
c_rt_lib0clear(&___nl__im__12);
#line 55
c_rt_lib0clear(&___nl__im__13);
#line 55
c_rt_lib0clear(&___nl__im__14);
#line 55
return ___nl__im__15;
#line 56
goto label_407;
#line 56
label_99:
;
#line 56
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 56
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 57
c_rt_lib0move(&___nl__im__18,___get_global_string_const(36));
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
//clear ___nl__bool__2;
#line 57
c_rt_lib0clear(&___nl__im__3);
#line 57
c_rt_lib0clear(&___nl__im__4);
#line 57
c_rt_lib0clear(&___nl__im__5);
#line 57
c_rt_lib0clear(&___nl__im__6);
#line 57
c_rt_lib0clear(&___nl__im__7);
#line 57
c_rt_lib0clear(&___nl__im__8);
#line 57
c_rt_lib0clear(&___nl__im__9);
#line 57
c_rt_lib0clear(&___nl__im__10);
#line 57
c_rt_lib0clear(&___nl__im__11);
#line 57
c_rt_lib0clear(&___nl__im__12);
#line 57
c_rt_lib0clear(&___nl__im__13);
#line 57
c_rt_lib0clear(&___nl__im__14);
#line 57
c_rt_lib0clear(&___nl__im__15);
#line 57
c_rt_lib0clear(&___nl__im__16);
#line 57
c_rt_lib0clear(&___nl__im__17);
#line 57
return ___nl__im__18;
#line 58
goto label_407;
#line 58
label_123:
;
#line 58
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 58
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 59
c_rt_lib0move(&___nl__im__21,___get_global_string_const(39));
#line 59
c_rt_lib0clear(&___nl__im__0);
#line 59
c_rt_lib0clear(&___nl__im__1);
#line 59
//clear ___nl__bool__2;
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
c_rt_lib0clear(&___nl__im__6);
#line 59
c_rt_lib0clear(&___nl__im__7);
#line 59
c_rt_lib0clear(&___nl__im__8);
#line 59
c_rt_lib0clear(&___nl__im__9);
#line 59
c_rt_lib0clear(&___nl__im__10);
#line 59
c_rt_lib0clear(&___nl__im__11);
#line 59
c_rt_lib0clear(&___nl__im__12);
#line 59
c_rt_lib0clear(&___nl__im__13);
#line 59
c_rt_lib0clear(&___nl__im__14);
#line 59
c_rt_lib0clear(&___nl__im__15);
#line 59
c_rt_lib0clear(&___nl__im__16);
#line 59
c_rt_lib0clear(&___nl__im__17);
#line 59
c_rt_lib0clear(&___nl__im__18);
#line 59
c_rt_lib0clear(&___nl__im__19);
#line 59
c_rt_lib0clear(&___nl__im__20);
#line 59
return ___nl__im__21;
#line 60
goto label_407;
#line 60
label_150:
;
#line 60
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 60
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 61
c_rt_lib0move(&___nl__im__24,___get_global_string_const(36));
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
//clear ___nl__bool__2;
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
c_rt_lib0clear(&___nl__im__7);
#line 61
c_rt_lib0clear(&___nl__im__8);
#line 61
c_rt_lib0clear(&___nl__im__9);
#line 61
c_rt_lib0clear(&___nl__im__10);
#line 61
c_rt_lib0clear(&___nl__im__11);
#line 61
c_rt_lib0clear(&___nl__im__12);
#line 61
c_rt_lib0clear(&___nl__im__13);
#line 61
c_rt_lib0clear(&___nl__im__14);
#line 61
c_rt_lib0clear(&___nl__im__15);
#line 61
c_rt_lib0clear(&___nl__im__16);
#line 61
c_rt_lib0clear(&___nl__im__17);
#line 61
c_rt_lib0clear(&___nl__im__18);
#line 61
c_rt_lib0clear(&___nl__im__19);
#line 61
c_rt_lib0clear(&___nl__im__20);
#line 61
c_rt_lib0clear(&___nl__im__21);
#line 61
c_rt_lib0clear(&___nl__im__22);
#line 61
c_rt_lib0clear(&___nl__im__23);
#line 61
return ___nl__im__24;
#line 62
goto label_407;
#line 62
label_180:
;
#line 62
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 62
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 63
c_rt_lib0move(&___nl__im__27,___get_global_string_const(39));
#line 63
c_rt_lib0clear(&___nl__im__0);
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
//clear ___nl__bool__2;
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
c_rt_lib0clear(&___nl__im__6);
#line 63
c_rt_lib0clear(&___nl__im__7);
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 63
c_rt_lib0clear(&___nl__im__9);
#line 63
c_rt_lib0clear(&___nl__im__10);
#line 63
c_rt_lib0clear(&___nl__im__11);
#line 63
c_rt_lib0clear(&___nl__im__12);
#line 63
c_rt_lib0clear(&___nl__im__13);
#line 63
c_rt_lib0clear(&___nl__im__14);
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
c_rt_lib0clear(&___nl__im__17);
#line 63
c_rt_lib0clear(&___nl__im__18);
#line 63
c_rt_lib0clear(&___nl__im__19);
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 63
c_rt_lib0clear(&___nl__im__21);
#line 63
c_rt_lib0clear(&___nl__im__22);
#line 63
c_rt_lib0clear(&___nl__im__23);
#line 63
c_rt_lib0clear(&___nl__im__24);
#line 63
c_rt_lib0clear(&___nl__im__25);
#line 63
c_rt_lib0clear(&___nl__im__26);
#line 63
return ___nl__im__27;
#line 64
goto label_407;
#line 64
label_213:
;
#line 64
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 64
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 65
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 65
c_rt_lib0move(&___nl__im__30, own_to_im_converter0get_required_arg_type(___nl__im__31, ___nl__im__1));
#line 65
c_rt_lib0clear(&___nl__im__31);
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
//clear ___nl__bool__2;
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
c_rt_lib0clear(&___nl__im__7);
#line 65
c_rt_lib0clear(&___nl__im__8);
#line 65
c_rt_lib0clear(&___nl__im__9);
#line 65
c_rt_lib0clear(&___nl__im__10);
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 65
c_rt_lib0clear(&___nl__im__13);
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
c_rt_lib0clear(&___nl__im__15);
#line 65
c_rt_lib0clear(&___nl__im__16);
#line 65
c_rt_lib0clear(&___nl__im__17);
#line 65
c_rt_lib0clear(&___nl__im__18);
#line 65
c_rt_lib0clear(&___nl__im__19);
#line 65
c_rt_lib0clear(&___nl__im__20);
#line 65
c_rt_lib0clear(&___nl__im__21);
#line 65
c_rt_lib0clear(&___nl__im__22);
#line 65
c_rt_lib0clear(&___nl__im__23);
#line 65
c_rt_lib0clear(&___nl__im__24);
#line 65
c_rt_lib0clear(&___nl__im__25);
#line 65
c_rt_lib0clear(&___nl__im__26);
#line 65
c_rt_lib0clear(&___nl__im__27);
#line 65
c_rt_lib0clear(&___nl__im__28);
#line 65
c_rt_lib0clear(&___nl__im__29);
#line 65
return ___nl__im__30;
#line 66
goto label_407;
#line 66
label_251:
;
#line 67
c_rt_lib0move(&___nl__im__32,___get_global_string_const(36));
#line 67
c_rt_lib0clear(&___nl__im__0);
#line 67
c_rt_lib0clear(&___nl__im__1);
#line 67
//clear ___nl__bool__2;
#line 67
c_rt_lib0clear(&___nl__im__3);
#line 67
c_rt_lib0clear(&___nl__im__4);
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 67
c_rt_lib0clear(&___nl__im__7);
#line 67
c_rt_lib0clear(&___nl__im__8);
#line 67
c_rt_lib0clear(&___nl__im__9);
#line 67
c_rt_lib0clear(&___nl__im__10);
#line 67
c_rt_lib0clear(&___nl__im__11);
#line 67
c_rt_lib0clear(&___nl__im__12);
#line 67
c_rt_lib0clear(&___nl__im__13);
#line 67
c_rt_lib0clear(&___nl__im__14);
#line 67
c_rt_lib0clear(&___nl__im__15);
#line 67
c_rt_lib0clear(&___nl__im__16);
#line 67
c_rt_lib0clear(&___nl__im__17);
#line 67
c_rt_lib0clear(&___nl__im__18);
#line 67
c_rt_lib0clear(&___nl__im__19);
#line 67
c_rt_lib0clear(&___nl__im__20);
#line 67
c_rt_lib0clear(&___nl__im__21);
#line 67
c_rt_lib0clear(&___nl__im__22);
#line 67
c_rt_lib0clear(&___nl__im__23);
#line 67
c_rt_lib0clear(&___nl__im__24);
#line 67
c_rt_lib0clear(&___nl__im__25);
#line 67
c_rt_lib0clear(&___nl__im__26);
#line 67
c_rt_lib0clear(&___nl__im__27);
#line 67
c_rt_lib0clear(&___nl__im__28);
#line 67
c_rt_lib0clear(&___nl__im__29);
#line 67
c_rt_lib0clear(&___nl__im__30);
#line 67
return ___nl__im__32;
#line 68
goto label_407;
#line 68
label_286:
;
#line 69
c_rt_lib0move(&___nl__im__33,___get_global_string_const(36));
#line 69
c_rt_lib0clear(&___nl__im__0);
#line 69
c_rt_lib0clear(&___nl__im__1);
#line 69
//clear ___nl__bool__2;
#line 69
c_rt_lib0clear(&___nl__im__3);
#line 69
c_rt_lib0clear(&___nl__im__4);
#line 69
c_rt_lib0clear(&___nl__im__5);
#line 69
c_rt_lib0clear(&___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 69
c_rt_lib0clear(&___nl__im__8);
#line 69
c_rt_lib0clear(&___nl__im__9);
#line 69
c_rt_lib0clear(&___nl__im__10);
#line 69
c_rt_lib0clear(&___nl__im__11);
#line 69
c_rt_lib0clear(&___nl__im__12);
#line 69
c_rt_lib0clear(&___nl__im__13);
#line 69
c_rt_lib0clear(&___nl__im__14);
#line 69
c_rt_lib0clear(&___nl__im__15);
#line 69
c_rt_lib0clear(&___nl__im__16);
#line 69
c_rt_lib0clear(&___nl__im__17);
#line 69
c_rt_lib0clear(&___nl__im__18);
#line 69
c_rt_lib0clear(&___nl__im__19);
#line 69
c_rt_lib0clear(&___nl__im__20);
#line 69
c_rt_lib0clear(&___nl__im__21);
#line 69
c_rt_lib0clear(&___nl__im__22);
#line 69
c_rt_lib0clear(&___nl__im__23);
#line 69
c_rt_lib0clear(&___nl__im__24);
#line 69
c_rt_lib0clear(&___nl__im__25);
#line 69
c_rt_lib0clear(&___nl__im__26);
#line 69
c_rt_lib0clear(&___nl__im__27);
#line 69
c_rt_lib0clear(&___nl__im__28);
#line 69
c_rt_lib0clear(&___nl__im__29);
#line 69
c_rt_lib0clear(&___nl__im__30);
#line 69
c_rt_lib0clear(&___nl__im__32);
#line 69
return ___nl__im__33;
#line 70
goto label_407;
#line 70
label_322:
;
#line 71
c_rt_lib0move(&___nl__im__34,___get_global_string_const(36));
#line 71
c_rt_lib0clear(&___nl__im__0);
#line 71
c_rt_lib0clear(&___nl__im__1);
#line 71
//clear ___nl__bool__2;
#line 71
c_rt_lib0clear(&___nl__im__3);
#line 71
c_rt_lib0clear(&___nl__im__4);
#line 71
c_rt_lib0clear(&___nl__im__5);
#line 71
c_rt_lib0clear(&___nl__im__6);
#line 71
c_rt_lib0clear(&___nl__im__7);
#line 71
c_rt_lib0clear(&___nl__im__8);
#line 71
c_rt_lib0clear(&___nl__im__9);
#line 71
c_rt_lib0clear(&___nl__im__10);
#line 71
c_rt_lib0clear(&___nl__im__11);
#line 71
c_rt_lib0clear(&___nl__im__12);
#line 71
c_rt_lib0clear(&___nl__im__13);
#line 71
c_rt_lib0clear(&___nl__im__14);
#line 71
c_rt_lib0clear(&___nl__im__15);
#line 71
c_rt_lib0clear(&___nl__im__16);
#line 71
c_rt_lib0clear(&___nl__im__17);
#line 71
c_rt_lib0clear(&___nl__im__18);
#line 71
c_rt_lib0clear(&___nl__im__19);
#line 71
c_rt_lib0clear(&___nl__im__20);
#line 71
c_rt_lib0clear(&___nl__im__21);
#line 71
c_rt_lib0clear(&___nl__im__22);
#line 71
c_rt_lib0clear(&___nl__im__23);
#line 71
c_rt_lib0clear(&___nl__im__24);
#line 71
c_rt_lib0clear(&___nl__im__25);
#line 71
c_rt_lib0clear(&___nl__im__26);
#line 71
c_rt_lib0clear(&___nl__im__27);
#line 71
c_rt_lib0clear(&___nl__im__28);
#line 71
c_rt_lib0clear(&___nl__im__29);
#line 71
c_rt_lib0clear(&___nl__im__30);
#line 71
c_rt_lib0clear(&___nl__im__32);
#line 71
c_rt_lib0clear(&___nl__im__33);
#line 71
return ___nl__im__34;
#line 72
goto label_407;
#line 72
label_359:
;
#line 73
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 73
nl_die_arg(___nl__im__35);
#line 74
goto label_407;
#line 74
label_363:
;
#line 75
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 75
nl_die_arg(___nl__im__36);
#line 76
goto label_407;
#line 76
label_367:
;
#line 77
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 77
c_rt_lib0clear(&___nl__im__0);
#line 77
c_rt_lib0clear(&___nl__im__1);
#line 77
//clear ___nl__bool__2;
#line 77
c_rt_lib0clear(&___nl__im__3);
#line 77
c_rt_lib0clear(&___nl__im__4);
#line 77
c_rt_lib0clear(&___nl__im__5);
#line 77
c_rt_lib0clear(&___nl__im__6);
#line 77
c_rt_lib0clear(&___nl__im__7);
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 77
c_rt_lib0clear(&___nl__im__10);
#line 77
c_rt_lib0clear(&___nl__im__11);
#line 77
c_rt_lib0clear(&___nl__im__12);
#line 77
c_rt_lib0clear(&___nl__im__13);
#line 77
c_rt_lib0clear(&___nl__im__14);
#line 77
c_rt_lib0clear(&___nl__im__15);
#line 77
c_rt_lib0clear(&___nl__im__16);
#line 77
c_rt_lib0clear(&___nl__im__17);
#line 77
c_rt_lib0clear(&___nl__im__18);
#line 77
c_rt_lib0clear(&___nl__im__19);
#line 77
c_rt_lib0clear(&___nl__im__20);
#line 77
c_rt_lib0clear(&___nl__im__21);
#line 77
c_rt_lib0clear(&___nl__im__22);
#line 77
c_rt_lib0clear(&___nl__im__23);
#line 77
c_rt_lib0clear(&___nl__im__24);
#line 77
c_rt_lib0clear(&___nl__im__25);
#line 77
c_rt_lib0clear(&___nl__im__26);
#line 77
c_rt_lib0clear(&___nl__im__27);
#line 77
c_rt_lib0clear(&___nl__im__28);
#line 77
c_rt_lib0clear(&___nl__im__29);
#line 77
c_rt_lib0clear(&___nl__im__30);
#line 77
c_rt_lib0clear(&___nl__im__32);
#line 77
c_rt_lib0clear(&___nl__im__33);
#line 77
c_rt_lib0clear(&___nl__im__34);
#line 77
c_rt_lib0clear(&___nl__im__35);
#line 77
c_rt_lib0clear(&___nl__im__36);
#line 77
return ___nl__im__37;
#line 78
goto label_407;
#line 78
label_407:
;
return NULL;

}

ImmT  own_to_im_converter_priv0get_type_constructor(tct0meta_type0type ___nl__im__0,bool  ___nl__bool__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
own_to_im_converter_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
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
bool  ___nl__bool__25 = false;
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
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
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
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
bool  ___nl__bool__87 = false;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
bool  ___nl__bool__102 = false;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
#line 82
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 83
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1138));
#line 84
___nl__bool__5 = ___nl__bool__1;
#line 84
___nl__bool__5 = !___nl__bool__5;
#line 84
if(___nl__bool__5){ goto label_7;}
#line 85
c_rt_lib0move(&___nl__im__4,___get_global_string_const(302));
#line 86
goto label_7;
#line 86
label_7:
;
#line 86
//clear ___nl__bool__5;
#line 87
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 87
if(___nl__bool__6){ goto label_42;}
#line 93
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 93
if(___nl__bool__6){ goto label_72;}
#line 99
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 99
if(___nl__bool__6){ goto label_104;}
#line 101
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 101
if(___nl__bool__6){ goto label_117;}
#line 103
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 103
if(___nl__bool__6){ goto label_132;}
#line 105
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 105
if(___nl__bool__6){ goto label_145;}
#line 107
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 107
if(___nl__bool__6){ goto label_160;}
#line 117
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 117
if(___nl__bool__6){ goto label_213;}
#line 127
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 127
if(___nl__bool__6){ goto label_268;}
#line 133
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 133
if(___nl__bool__6){ goto label_286;}
#line 135
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 135
if(___nl__bool__6){ goto label_289;}
#line 137
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 137
if(___nl__bool__6){ goto label_292;}
#line 139
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 139
if(___nl__bool__6){ goto label_295;}
#line 141
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 141
if(___nl__bool__6){ goto label_299;}
#line 143
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 143
if(___nl__bool__6){ goto label_303;}
#line 143
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 143
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__0));
#line 143
nl_die_arg(___nl__im__7);
#line 87
label_42:
;
#line 87
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 87
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 88
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1139));
#line 89
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__8));
#line 89
label_47:
;
#line 89
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 89
if(___nl__bool__11){ goto label_67;}
#line 89
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 89
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__8, ___nl__im__10));
#line 90
c_rt_lib0move(&___nl__im__17,___get_global_string_const(325));
#line 90
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 90
c_rt_lib0clear(&___nl__im__17);
#line 90
c_rt_lib0move(&___nl__im__18, own_to_im_converter_priv0get_type_constructor(___nl__im__12, ___nl__bool__1, ___nl__im__2));
#line 90
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__18));
#line 90
c_rt_lib0clear(&___nl__im__16);
#line 90
c_rt_lib0clear(&___nl__im__18);
#line 90
c_rt_lib0move(&___nl__im__19,___get_global_string_const(326));
#line 90
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__19));
#line 90
c_rt_lib0clear(&___nl__im__15);
#line 90
c_rt_lib0clear(&___nl__im__19);
#line 90
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__14));
#line 90
c_rt_lib0clear(&___nl__im__14);
#line 91
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 91
goto label_47;
#line 91
label_67:
;
#line 92
c_rt_lib0move(&___nl__im__20,___get_global_string_const(777));
#line 92
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__20));
#line 92
c_rt_lib0clear(&___nl__im__20);
#line 93
goto label_306;
#line 93
label_72:
;
#line 93
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 93
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 94
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1140));
#line 94
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__23));
#line 94
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0move(&___nl__im__27, c_rt_lib0init_iter(___nl__im__21));
#line 95
label_79:
;
#line 95
___nl__bool__25 = c_rt_lib0is_end_hash(___nl__im__27);
#line 95
if(___nl__bool__25){ goto label_99;}
#line 95
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_key_iter(___nl__im__27));
#line 95
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value(___nl__im__21, ___nl__im__24));
#line 96
c_rt_lib0move(&___nl__im__31,___get_global_string_const(325));
#line 96
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__24, ___nl__im__31));
#line 96
c_rt_lib0clear(&___nl__im__31);
#line 96
c_rt_lib0move(&___nl__im__32, own_to_im_converter_priv0get_type_constructor(___nl__im__26, ___nl__bool__1, ___nl__im__2));
#line 96
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 96
c_rt_lib0clear(&___nl__im__30);
#line 96
c_rt_lib0clear(&___nl__im__32);
#line 96
c_rt_lib0move(&___nl__im__33,___get_global_string_const(326));
#line 96
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 96
c_rt_lib0clear(&___nl__im__29);
#line 96
c_rt_lib0clear(&___nl__im__33);
#line 96
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__28));
#line 96
c_rt_lib0clear(&___nl__im__28);
#line 97
c_rt_lib0move(&___nl__im__27, c_rt_lib0next_iter(___nl__im__27));
#line 97
goto label_79;
#line 97
label_99:
;
#line 98
c_rt_lib0move(&___nl__im__34,___get_global_string_const(777));
#line 98
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__34));
#line 98
c_rt_lib0clear(&___nl__im__34);
#line 99
goto label_306;
#line 99
label_104:
;
#line 99
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 99
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 100
c_rt_lib0move(&___nl__im__38,___get_global_string_const(1141));
#line 100
c_rt_lib0move(&___nl__im__39, own_to_im_converter_priv0get_type_constructor(___nl__im__35, ___nl__bool__1, ___nl__im__2));
#line 100
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 100
c_rt_lib0clear(&___nl__im__38);
#line 100
c_rt_lib0clear(&___nl__im__39);
#line 100
c_rt_lib0move(&___nl__im__40,___get_global_string_const(320));
#line 100
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__37, ___nl__im__40));
#line 100
c_rt_lib0clear(&___nl__im__37);
#line 100
c_rt_lib0clear(&___nl__im__40);
#line 101
goto label_306;
#line 101
label_117:
;
#line 101
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 101
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 102
c_rt_lib0move(&___nl__im__45,___get_global_string_const(1142));
#line 102
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__4, ___nl__im__45));
#line 102
c_rt_lib0clear(&___nl__im__45);
#line 102
c_rt_lib0move(&___nl__im__46, own_to_im_converter_priv0get_type_constructor(___nl__im__41, ___nl__bool__1, ___nl__im__2));
#line 102
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 102
c_rt_lib0clear(&___nl__im__44);
#line 102
c_rt_lib0clear(&___nl__im__46);
#line 102
c_rt_lib0move(&___nl__im__47,___get_global_string_const(320));
#line 102
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__43, ___nl__im__47));
#line 102
c_rt_lib0clear(&___nl__im__43);
#line 102
c_rt_lib0clear(&___nl__im__47);
#line 103
goto label_306;
#line 103
label_132:
;
#line 103
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 103
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 104
c_rt_lib0move(&___nl__im__51,___get_global_string_const(1143));
#line 104
c_rt_lib0move(&___nl__im__52, own_to_im_converter_priv0get_type_constructor(___nl__im__48, ___nl__bool__1, ___nl__im__2));
#line 104
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 104
c_rt_lib0clear(&___nl__im__51);
#line 104
c_rt_lib0clear(&___nl__im__52);
#line 104
c_rt_lib0move(&___nl__im__53,___get_global_string_const(320));
#line 104
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 104
c_rt_lib0clear(&___nl__im__50);
#line 104
c_rt_lib0clear(&___nl__im__53);
#line 105
goto label_306;
#line 105
label_145:
;
#line 105
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 105
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 106
c_rt_lib0move(&___nl__im__58,___get_global_string_const(1144));
#line 106
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__4, ___nl__im__58));
#line 106
c_rt_lib0clear(&___nl__im__58);
#line 106
c_rt_lib0move(&___nl__im__59, own_to_im_converter_priv0get_type_constructor(___nl__im__54, ___nl__bool__1, ___nl__im__2));
#line 106
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__59));
#line 106
c_rt_lib0clear(&___nl__im__57);
#line 106
c_rt_lib0clear(&___nl__im__59);
#line 106
c_rt_lib0move(&___nl__im__60,___get_global_string_const(320));
#line 106
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__56, ___nl__im__60));
#line 106
c_rt_lib0clear(&___nl__im__56);
#line 106
c_rt_lib0clear(&___nl__im__60);
#line 107
goto label_306;
#line 107
label_160:
;
#line 107
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 107
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 108
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1145));
#line 109
c_rt_lib0move(&___nl__im__66, c_rt_lib0init_iter(___nl__im__61));
#line 109
label_165:
;
#line 109
___nl__bool__64 = c_rt_lib0is_end_hash(___nl__im__66);
#line 109
if(___nl__bool__64){ goto label_208;}
#line 109
c_rt_lib0move(&___nl__im__63, c_rt_lib0get_key_iter(___nl__im__66));
#line 109
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value(___nl__im__61, ___nl__im__63));
#line 110
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(27));
#line 110
if(___nl__bool__67){ goto label_177;}
#line 112
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(28));
#line 112
if(___nl__bool__67){ goto label_194;}
#line 112
c_rt_lib0move(&___nl__im__68,___get_global_string_const(15));
#line 112
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(2, ___nl__im__68, ___nl__im__65));
#line 112
nl_die_arg(___nl__im__68);
#line 110
label_177:
;
#line 110
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(27)));
#line 110
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 111
c_rt_lib0move(&___nl__im__74,___get_global_string_const(325));
#line 111
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__63, ___nl__im__74));
#line 111
c_rt_lib0clear(&___nl__im__74);
#line 111
c_rt_lib0move(&___nl__im__75, own_to_im_converter_priv0get_type_constructor(___nl__im__69, ___nl__bool__1, ___nl__im__2));
#line 111
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__75));
#line 111
c_rt_lib0clear(&___nl__im__73);
#line 111
c_rt_lib0clear(&___nl__im__75);
#line 111
c_rt_lib0move(&___nl__im__76,___get_global_string_const(326));
#line 111
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__76));
#line 111
c_rt_lib0clear(&___nl__im__72);
#line 111
c_rt_lib0clear(&___nl__im__76);
#line 111
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__71));
#line 111
c_rt_lib0clear(&___nl__im__71);
#line 112
goto label_201;
#line 112
label_194:
;
#line 113
c_rt_lib0move(&___nl__im__78,___get_global_string_const(1146));
#line 113
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__63, ___nl__im__78));
#line 113
c_rt_lib0clear(&___nl__im__78);
#line 113
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__77));
#line 113
c_rt_lib0clear(&___nl__im__77);
#line 114
goto label_201;
#line 114
label_201:
;
#line 114
//clear ___nl__bool__67;
#line 114
c_rt_lib0clear(&___nl__im__68);
#line 114
c_rt_lib0clear(&___nl__im__69);
#line 114
c_rt_lib0clear(&___nl__im__70);
#line 115
c_rt_lib0move(&___nl__im__66, c_rt_lib0next_iter(___nl__im__66));
#line 115
goto label_165;
#line 115
label_208:
;
#line 116
c_rt_lib0move(&___nl__im__79,___get_global_string_const(777));
#line 116
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__79));
#line 116
c_rt_lib0clear(&___nl__im__79);
#line 117
goto label_306;
#line 117
label_213:
;
#line 117
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 117
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 118
c_rt_lib0move(&___nl__im__82,___get_global_string_const(1147));
#line 118
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__82));
#line 118
c_rt_lib0clear(&___nl__im__82);
#line 119
c_rt_lib0move(&___nl__im__86, c_rt_lib0init_iter(___nl__im__80));
#line 119
label_220:
;
#line 119
___nl__bool__84 = c_rt_lib0is_end_hash(___nl__im__86);
#line 119
if(___nl__bool__84){ goto label_263;}
#line 119
c_rt_lib0move(&___nl__im__83, c_rt_lib0get_key_iter(___nl__im__86));
#line 119
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__80, ___nl__im__83));
#line 120
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(27));
#line 120
if(___nl__bool__87){ goto label_232;}
#line 122
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(28));
#line 122
if(___nl__bool__87){ goto label_249;}
#line 122
c_rt_lib0move(&___nl__im__88,___get_global_string_const(15));
#line 122
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_mk(2, ___nl__im__88, ___nl__im__85));
#line 122
nl_die_arg(___nl__im__88);
#line 120
label_232:
;
#line 120
c_rt_lib0move(&___nl__im__90, c_rt_lib0priv_as(___nl__im__85, ___get_global_string_const(27)));
#line 120
c_rt_lib0copy(&___nl__im__89, ___nl__im__90);
#line 121
c_rt_lib0move(&___nl__im__94,___get_global_string_const(325));
#line 121
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__83, ___nl__im__94));
#line 121
c_rt_lib0clear(&___nl__im__94);
#line 121
c_rt_lib0move(&___nl__im__95, own_to_im_converter_priv0get_type_constructor(___nl__im__89, ___nl__bool__1, ___nl__im__2));
#line 121
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__95));
#line 121
c_rt_lib0clear(&___nl__im__93);
#line 121
c_rt_lib0clear(&___nl__im__95);
#line 121
c_rt_lib0move(&___nl__im__96,___get_global_string_const(326));
#line 121
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__96));
#line 121
c_rt_lib0clear(&___nl__im__92);
#line 121
c_rt_lib0clear(&___nl__im__96);
#line 121
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__91));
#line 121
c_rt_lib0clear(&___nl__im__91);
#line 122
goto label_256;
#line 122
label_249:
;
#line 123
c_rt_lib0move(&___nl__im__98,___get_global_string_const(1146));
#line 123
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__83, ___nl__im__98));
#line 123
c_rt_lib0clear(&___nl__im__98);
#line 123
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__97));
#line 123
c_rt_lib0clear(&___nl__im__97);
#line 124
goto label_256;
#line 124
label_256:
;
#line 124
//clear ___nl__bool__87;
#line 124
c_rt_lib0clear(&___nl__im__88);
#line 124
c_rt_lib0clear(&___nl__im__89);
#line 124
c_rt_lib0clear(&___nl__im__90);
#line 125
c_rt_lib0move(&___nl__im__86, c_rt_lib0next_iter(___nl__im__86));
#line 125
goto label_220;
#line 125
label_263:
;
#line 126
c_rt_lib0move(&___nl__im__99,___get_global_string_const(777));
#line 126
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__99));
#line 126
c_rt_lib0clear(&___nl__im__99);
#line 127
goto label_306;
#line 127
label_268:
;
#line 127
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 127
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 128
___nl__bool__102 = ___nl__bool__1;
#line 128
___nl__bool__102 = !___nl__bool__102;
#line 128
if(___nl__bool__102){ goto label_278;}
#line 129
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__100));
#line 129
c_rt_lib0move(&___nl__im__3, own_to_im_converter_priv0get_type_constructor(___nl__im__103, ___nl__bool__1, ___nl__im__2));
#line 129
c_rt_lib0clear(&___nl__im__103);
#line 130
goto label_283;
#line 130
label_278:
;
#line 131
c_rt_lib0move(&___nl__im__104,___get_global_string_const(298));
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__104, ___nl__im__100));
#line 131
c_rt_lib0clear(&___nl__im__104);
#line 132
goto label_283;
#line 132
label_283:
;
#line 132
//clear ___nl__bool__102;
#line 133
goto label_306;
#line 133
label_286:
;
#line 134
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1148));
#line 135
goto label_306;
#line 135
label_289:
;
#line 136
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1149));
#line 137
goto label_306;
#line 137
label_292:
;
#line 138
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1150));
#line 139
goto label_306;
#line 139
label_295:
;
#line 140
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(0));
#line 140
nl_die_arg(___nl__im__105);
#line 141
goto label_306;
#line 141
label_299:
;
#line 142
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_mk(0));
#line 142
nl_die_arg(___nl__im__106);
#line 143
goto label_306;
#line 143
label_303:
;
#line 144
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1151));
#line 145
goto label_306;
#line 145
label_306:
;
#line 146
c_rt_lib0clear(&___nl__im__0);
#line 146
//clear ___nl__bool__1;
#line 146
c_rt_lib0clear(&___nl__im__2);
#line 146
c_rt_lib0clear(&___nl__im__4);
#line 146
//clear ___nl__bool__6;
#line 146
c_rt_lib0clear(&___nl__im__7);
#line 146
c_rt_lib0clear(&___nl__im__8);
#line 146
c_rt_lib0clear(&___nl__im__9);
#line 146
c_rt_lib0clear(&___nl__im__10);
#line 146
//clear ___nl__bool__11;
#line 146
c_rt_lib0clear(&___nl__im__12);
#line 146
c_rt_lib0clear(&___nl__im__13);
#line 146
c_rt_lib0clear(&___nl__im__21);
#line 146
c_rt_lib0clear(&___nl__im__22);
#line 146
c_rt_lib0clear(&___nl__im__24);
#line 146
//clear ___nl__bool__25;
#line 146
c_rt_lib0clear(&___nl__im__26);
#line 146
c_rt_lib0clear(&___nl__im__27);
#line 146
c_rt_lib0clear(&___nl__im__35);
#line 146
c_rt_lib0clear(&___nl__im__36);
#line 146
c_rt_lib0clear(&___nl__im__41);
#line 146
c_rt_lib0clear(&___nl__im__42);
#line 146
c_rt_lib0clear(&___nl__im__48);
#line 146
c_rt_lib0clear(&___nl__im__49);
#line 146
c_rt_lib0clear(&___nl__im__54);
#line 146
c_rt_lib0clear(&___nl__im__55);
#line 146
c_rt_lib0clear(&___nl__im__61);
#line 146
c_rt_lib0clear(&___nl__im__62);
#line 146
c_rt_lib0clear(&___nl__im__63);
#line 146
//clear ___nl__bool__64;
#line 146
c_rt_lib0clear(&___nl__im__65);
#line 146
c_rt_lib0clear(&___nl__im__66);
#line 146
//clear ___nl__bool__67;
#line 146
c_rt_lib0clear(&___nl__im__68);
#line 146
c_rt_lib0clear(&___nl__im__69);
#line 146
c_rt_lib0clear(&___nl__im__70);
#line 146
c_rt_lib0clear(&___nl__im__80);
#line 146
c_rt_lib0clear(&___nl__im__81);
#line 146
c_rt_lib0clear(&___nl__im__83);
#line 146
//clear ___nl__bool__84;
#line 146
c_rt_lib0clear(&___nl__im__85);
#line 146
c_rt_lib0clear(&___nl__im__86);
#line 146
//clear ___nl__bool__87;
#line 146
c_rt_lib0clear(&___nl__im__88);
#line 146
c_rt_lib0clear(&___nl__im__89);
#line 146
c_rt_lib0clear(&___nl__im__90);
#line 146
c_rt_lib0clear(&___nl__im__100);
#line 146
c_rt_lib0clear(&___nl__im__101);
#line 146
c_rt_lib0clear(&___nl__im__105);
#line 146
c_rt_lib0clear(&___nl__im__106);
#line 146
return ___nl__im__3;
return NULL;

}

own_to_im_converter0res_t0type own_to_im_converter0get_function0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "own_to_im_converter0get_function");
tct0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return own_to_im_converter0get_function(*var0, *var1);
}
own_to_im_converter0res_t0type own_to_im_converter0get_function(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
own_to_im_converter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
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
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
bool  ___nl__bool__124 = false;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
INT  ___nl__int__127 = 0;
INT  ___nl__int__128 = 0;
INT  ___nl__int__129 = 0;
bool  ___nl__bool__130 = false;
INT  ___nl__int__131 = 0;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
#line 151
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1152));
#line 151
c_rt_lib0move(&___nl__im__7, own_to_im_converter0get_function_name(___nl__im__0, ___nl__im__1));
#line 151
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 151
c_rt_lib0clear(&___nl__im__6);
#line 151
c_rt_lib0clear(&___nl__im__7);
#line 152
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1153));
#line 152
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 152
c_rt_lib0clear(&___nl__im__5);
#line 152
c_rt_lib0clear(&___nl__im__8);
#line 152
___nl__bool__10 = false;
#line 152
c_rt_lib0move(&___nl__im__9, own_to_im_converter_priv0get_type_constructor(___nl__im__0, ___nl__bool__10, ___nl__im__1));
#line 152
//clear ___nl__bool__10;
#line 152
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 152
c_rt_lib0clear(&___nl__im__4);
#line 152
c_rt_lib0clear(&___nl__im__9);
#line 152
c_rt_lib0move(&___nl__im__11,___get_global_string_const(753));
#line 152
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__11));
#line 152
c_rt_lib0clear(&___nl__im__3);
#line 152
c_rt_lib0clear(&___nl__im__11);
#line 153
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 153
___nl__bool__12 = !___nl__bool__12;
#line 153
if(___nl__bool__12){ goto label_26;}
#line 154
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 154
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__13));
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 155
goto label_26;
#line 155
label_26:
;
#line 155
//clear ___nl__bool__12;
#line 156
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 157
c_rt_lib0move(&___nl__im__15,___get_global_string_const(36));
#line 158
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 158
if(___nl__bool__16){ goto label_63;}
#line 160
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 160
if(___nl__bool__16){ goto label_69;}
#line 168
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 168
if(___nl__bool__16){ goto label_115;}
#line 170
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 170
if(___nl__bool__16){ goto label_121;}
#line 178
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 178
if(___nl__bool__16){ goto label_153;}
#line 180
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 180
if(___nl__bool__16){ goto label_159;}
#line 188
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 188
if(___nl__bool__16){ goto label_191;}
#line 190
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 190
if(___nl__bool__16){ goto label_197;}
#line 202
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 202
if(___nl__bool__16){ goto label_279;}
#line 204
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 204
if(___nl__bool__16){ goto label_285;}
#line 206
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 206
if(___nl__bool__16){ goto label_289;}
#line 208
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 208
if(___nl__bool__16){ goto label_293;}
#line 210
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 210
if(___nl__bool__16){ goto label_297;}
#line 212
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 212
if(___nl__bool__16){ goto label_301;}
#line 214
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 214
if(___nl__bool__16){ goto label_305;}
#line 214
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 214
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__0));
#line 214
nl_die_arg(___nl__im__17);
#line 158
label_63:
;
#line 158
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 158
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 159
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 159
nl_die_arg(___nl__im__20);
#line 160
goto label_309;
#line 160
label_69:
;
#line 160
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 160
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 161
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1154));
#line 161
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 161
c_rt_lib0clear(&___nl__im__23);
#line 162
c_rt_lib0move(&___nl__im__27, c_rt_lib0init_iter(___nl__im__21));
#line 162
label_76:
;
#line 162
___nl__bool__25 = c_rt_lib0is_end_hash(___nl__im__27);
#line 162
if(___nl__bool__25){ goto label_110;}
#line 162
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_key_iter(___nl__im__27));
#line 162
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value(___nl__im__21, ___nl__im__24));
#line 163
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__26, ___nl__im__1));
#line 164
c_rt_lib0move(&___nl__im__35,___get_global_string_const(325));
#line 164
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__24, ___nl__im__35));
#line 164
c_rt_lib0clear(&___nl__im__35);
#line 164
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__15));
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 164
c_rt_lib0move(&___nl__im__36,___get_global_string_const(455));
#line 164
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 164
c_rt_lib0clear(&___nl__im__33);
#line 164
c_rt_lib0clear(&___nl__im__36);
#line 164
c_rt_lib0move(&___nl__im__37, own_to_im_converter0get_required_arg_type(___nl__im__26, ___nl__im__1));
#line 164
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__37));
#line 164
c_rt_lib0clear(&___nl__im__32);
#line 164
c_rt_lib0clear(&___nl__im__37);
#line 164
c_rt_lib0move(&___nl__im__38,___get_global_string_const(1155));
#line 164
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__38));
#line 164
c_rt_lib0clear(&___nl__im__31);
#line 164
c_rt_lib0clear(&___nl__im__38);
#line 164
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__24));
#line 164
c_rt_lib0clear(&___nl__im__30);
#line 164
c_rt_lib0move(&___nl__im__39,___get_global_string_const(1156));
#line 164
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__39));
#line 164
c_rt_lib0clear(&___nl__im__29);
#line 164
c_rt_lib0clear(&___nl__im__39);
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 164
c_rt_lib0clear(&___nl__im__28);
#line 165
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__26));
#line 166
c_rt_lib0move(&___nl__im__27, c_rt_lib0next_iter(___nl__im__27));
#line 166
goto label_76;
#line 166
label_110:
;
#line 167
c_rt_lib0move(&___nl__im__40,___get_global_string_const(1157));
#line 167
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__40));
#line 167
c_rt_lib0clear(&___nl__im__40);
#line 168
goto label_309;
#line 168
label_115:
;
#line 168
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 168
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 169
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(0));
#line 169
nl_die_arg(___nl__im__43);
#line 170
goto label_309;
#line 170
label_121:
;
#line 170
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 170
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 171
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__44, ___nl__im__1));
#line 172
c_rt_lib0move(&___nl__im__46,___get_global_string_const(1158));
#line 172
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__46));
#line 172
c_rt_lib0clear(&___nl__im__46);
#line 173
c_rt_lib0move(&___nl__im__47,___get_global_string_const(1159));
#line 173
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__47));
#line 173
c_rt_lib0clear(&___nl__im__47);
#line 174
c_rt_lib0move(&___nl__im__52,___get_global_string_const(1160));
#line 174
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__15));
#line 174
c_rt_lib0clear(&___nl__im__52);
#line 174
c_rt_lib0move(&___nl__im__53,___get_global_string_const(455));
#line 174
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 174
c_rt_lib0clear(&___nl__im__51);
#line 174
c_rt_lib0clear(&___nl__im__53);
#line 174
c_rt_lib0move(&___nl__im__54, own_to_im_converter0get_required_arg_type(___nl__im__44, ___nl__im__1));
#line 174
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__54));
#line 174
c_rt_lib0clear(&___nl__im__50);
#line 174
c_rt_lib0clear(&___nl__im__54);
#line 175
c_rt_lib0move(&___nl__im__55,___get_global_string_const(1161));
#line 175
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__55));
#line 175
c_rt_lib0clear(&___nl__im__49);
#line 175
c_rt_lib0clear(&___nl__im__55);
#line 175
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__48));
#line 175
c_rt_lib0clear(&___nl__im__48);
#line 176
c_rt_lib0move(&___nl__im__56,___get_global_string_const(1162));
#line 176
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__56));
#line 176
c_rt_lib0clear(&___nl__im__56);
#line 177
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__44));
#line 178
goto label_309;
#line 178
label_153:
;
#line 178
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 178
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 179
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 179
nl_die_arg(___nl__im__59);
#line 180
goto label_309;
#line 180
label_159:
;
#line 180
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 180
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 181
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__60, ___nl__im__1));
#line 182
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__60));
#line 183
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1163));
#line 183
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__62));
#line 183
c_rt_lib0clear(&___nl__im__62);
#line 184
c_rt_lib0move(&___nl__im__63,___get_global_string_const(1164));
#line 184
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__63));
#line 184
c_rt_lib0clear(&___nl__im__63);
#line 185
c_rt_lib0move(&___nl__im__68,___get_global_string_const(1165));
#line 185
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__15));
#line 185
c_rt_lib0clear(&___nl__im__68);
#line 185
c_rt_lib0move(&___nl__im__69,___get_global_string_const(455));
#line 185
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__69));
#line 185
c_rt_lib0clear(&___nl__im__67);
#line 185
c_rt_lib0clear(&___nl__im__69);
#line 185
c_rt_lib0move(&___nl__im__70, own_to_im_converter0get_required_arg_type(___nl__im__60, ___nl__im__1));
#line 185
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__70));
#line 185
c_rt_lib0clear(&___nl__im__66);
#line 185
c_rt_lib0clear(&___nl__im__70);
#line 186
c_rt_lib0move(&___nl__im__71,___get_global_string_const(1166));
#line 186
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__71));
#line 186
c_rt_lib0clear(&___nl__im__65);
#line 186
c_rt_lib0clear(&___nl__im__71);
#line 186
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__64));
#line 186
c_rt_lib0clear(&___nl__im__64);
#line 187
c_rt_lib0move(&___nl__im__72,___get_global_string_const(1167));
#line 187
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__72));
#line 187
c_rt_lib0clear(&___nl__im__72);
#line 188
goto label_309;
#line 188
label_191:
;
#line 188
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 188
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 189
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(0));
#line 189
nl_die_arg(___nl__im__75);
#line 190
goto label_309;
#line 190
label_197:
;
#line 190
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 190
c_rt_lib0copy(&___nl__im__76, ___nl__im__77);
#line 191
c_rt_lib0move(&___nl__im__78,___get_global_string_const(1168));
#line 191
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__78));
#line 191
c_rt_lib0clear(&___nl__im__78);
#line 192
c_rt_lib0move(&___nl__im__82, c_rt_lib0init_iter(___nl__im__76));
#line 192
label_204:
;
#line 192
___nl__bool__80 = c_rt_lib0is_end_hash(___nl__im__82);
#line 192
if(___nl__bool__80){ goto label_277;}
#line 192
c_rt_lib0move(&___nl__im__79, c_rt_lib0get_key_iter(___nl__im__82));
#line 192
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value(___nl__im__76, ___nl__im__79));
#line 193
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(27));
#line 193
if(___nl__bool__83){ goto label_216;}
#line 198
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(28));
#line 198
if(___nl__bool__83){ goto label_253;}
#line 198
c_rt_lib0move(&___nl__im__84,___get_global_string_const(15));
#line 198
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_mk(2, ___nl__im__84, ___nl__im__81));
#line 198
nl_die_arg(___nl__im__84);
#line 193
label_216:
;
#line 193
c_rt_lib0move(&___nl__im__86, c_rt_lib0priv_as(___nl__im__81, ___get_global_string_const(27)));
#line 193
c_rt_lib0copy(&___nl__im__85, ___nl__im__86);
#line 194
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__85, ___nl__im__1));
#line 195
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__85));
#line 196
c_rt_lib0move(&___nl__im__95,___get_global_string_const(1169));
#line 196
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__79));
#line 196
c_rt_lib0clear(&___nl__im__95);
#line 196
c_rt_lib0move(&___nl__im__96,___get_global_string_const(1170));
#line 196
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__96));
#line 196
c_rt_lib0clear(&___nl__im__94);
#line 196
c_rt_lib0clear(&___nl__im__96);
#line 196
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__79));
#line 196
c_rt_lib0clear(&___nl__im__93);
#line 196
c_rt_lib0move(&___nl__im__97,___get_global_string_const(455));
#line 196
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__97));
#line 196
c_rt_lib0clear(&___nl__im__92);
#line 196
c_rt_lib0clear(&___nl__im__97);
#line 196
c_rt_lib0move(&___nl__im__98, own_to_im_converter0get_function_name(___nl__im__85, ___nl__im__1));
#line 196
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__98));
#line 196
c_rt_lib0clear(&___nl__im__91);
#line 196
c_rt_lib0clear(&___nl__im__98);
#line 197
c_rt_lib0move(&___nl__im__99,___get_global_string_const(455));
#line 197
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__99));
#line 197
c_rt_lib0clear(&___nl__im__90);
#line 197
c_rt_lib0clear(&___nl__im__99);
#line 197
c_rt_lib0move(&___nl__im__100, own_to_im_converter0get_required_arg_type(___nl__im__85, ___nl__im__1));
#line 197
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__100));
#line 197
c_rt_lib0clear(&___nl__im__89);
#line 197
c_rt_lib0clear(&___nl__im__100);
#line 197
c_rt_lib0move(&___nl__im__101,___get_global_string_const(1171));
#line 197
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__101));
#line 197
c_rt_lib0clear(&___nl__im__88);
#line 197
c_rt_lib0clear(&___nl__im__101);
#line 197
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__87));
#line 197
c_rt_lib0clear(&___nl__im__87);
#line 198
goto label_270;
#line 198
label_253:
;
#line 199
c_rt_lib0move(&___nl__im__106,___get_global_string_const(1169));
#line 199
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__79));
#line 199
c_rt_lib0clear(&___nl__im__106);
#line 199
c_rt_lib0move(&___nl__im__107,___get_global_string_const(1172));
#line 199
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__107));
#line 199
c_rt_lib0clear(&___nl__im__105);
#line 199
c_rt_lib0clear(&___nl__im__107);
#line 199
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__79));
#line 199
c_rt_lib0clear(&___nl__im__104);
#line 199
c_rt_lib0move(&___nl__im__108,___get_global_string_const(1173));
#line 199
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__108));
#line 199
c_rt_lib0clear(&___nl__im__103);
#line 199
c_rt_lib0clear(&___nl__im__108);
#line 199
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__102));
#line 199
c_rt_lib0clear(&___nl__im__102);
#line 200
goto label_270;
#line 200
label_270:
;
#line 200
//clear ___nl__bool__83;
#line 200
c_rt_lib0clear(&___nl__im__84);
#line 200
c_rt_lib0clear(&___nl__im__85);
#line 200
c_rt_lib0clear(&___nl__im__86);
#line 201
c_rt_lib0move(&___nl__im__82, c_rt_lib0next_iter(___nl__im__82));
#line 201
goto label_204;
#line 201
label_277:
;
#line 202
goto label_309;
#line 202
label_279:
;
#line 202
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 202
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 203
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_mk(0));
#line 203
nl_die_arg(___nl__im__111);
#line 204
goto label_309;
#line 204
label_285:
;
#line 205
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_mk(0));
#line 205
nl_die_arg(___nl__im__112);
#line 206
goto label_309;
#line 206
label_289:
;
#line 207
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_mk(0));
#line 207
nl_die_arg(___nl__im__113);
#line 208
goto label_309;
#line 208
label_293:
;
#line 209
c_rt_lib0move(&___nl__im__114, c_rt_lib0array_mk(0));
#line 209
nl_die_arg(___nl__im__114);
#line 210
goto label_309;
#line 210
label_297:
;
#line 211
c_rt_lib0move(&___nl__im__115, c_rt_lib0array_mk(0));
#line 211
nl_die_arg(___nl__im__115);
#line 212
goto label_309;
#line 212
label_301:
;
#line 213
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_mk(0));
#line 213
nl_die_arg(___nl__im__116);
#line 214
goto label_309;
#line 214
label_305:
;
#line 215
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_mk(0));
#line 215
nl_die_arg(___nl__im__117);
#line 216
goto label_309;
#line 216
label_309:
;
#line 217
c_rt_lib0move(&___nl__im__118,___get_global_string_const(305));
#line 217
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__118));
#line 217
c_rt_lib0clear(&___nl__im__118);
#line 218
c_rt_lib0move(&___nl__im__119, c_rt_lib0array_mk(0));
#line 219
c_rt_lib0move(&___nl__im__123, c_rt_lib0init_iter(___nl__im__14));
#line 219
label_315:
;
#line 219
___nl__bool__121 = c_rt_lib0is_end_hash(___nl__im__123);
#line 219
if(___nl__bool__121){ goto label_332;}
#line 219
c_rt_lib0move(&___nl__im__120, c_rt_lib0get_key_iter(___nl__im__123));
#line 219
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value(___nl__im__14, ___nl__im__120));
#line 220
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_mk(0));
#line 220
___nl__bool__124 = tct0is_own_type(___nl__im__122, ___nl__im__125);
#line 220
c_rt_lib0clear(&___nl__im__125);
#line 220
___nl__bool__124 = !___nl__bool__124;
#line 220
___nl__bool__124 = !___nl__bool__124;
#line 220
if(___nl__bool__124){ goto label_328;}
#line 221
c_rt_lib0delete(array0push(&___nl__im__119, ___nl__im__120));
#line 222
goto label_328;
#line 222
label_328:
;
#line 222
//clear ___nl__bool__124;
#line 223
c_rt_lib0move(&___nl__im__123, c_rt_lib0next_iter(___nl__im__123));
#line 223
goto label_315;
#line 223
label_332:
;
#line 224
___nl__int__127 = 0;
#line 224
___nl__int__128 = 1;
#line 224
___nl__int__129 = c_rt_lib0array_len(___nl__im__119);
#line 224
label_336:
;
#line 224
___nl__int__131 = ___nl__int__127 >= ___nl__int__129;
#line 224
___nl__bool__130 = ___nl__int__131;
#line 224
if(___nl__bool__130){ goto label_346;}
#line 224
c_rt_lib0move(&___nl__im__132, c_rt_lib0array_get(___nl__im__119, ___nl__int__127));
#line 224
c_rt_lib0copy(&___nl__im__126, ___nl__im__132);
#line 225
c_rt_lib0delete(hash0delete(&___nl__im__14, ___nl__im__126));
#line 225
c_rt_lib0clear(&___nl__im__126);
#line 226
___nl__int__127 = ___nl__int__127 + ___nl__int__128;
#line 226
goto label_336;
#line 226
label_346:
;
#line 227
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_mk(2, ___get_global_string_const(1135), ___nl__im__2, ___get_global_string_const(1136), ___nl__im__14));
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
c_rt_lib0clear(&___nl__im__1);
#line 228
c_rt_lib0clear(&___nl__im__2);
#line 228
c_rt_lib0clear(&___nl__im__14);
#line 228
c_rt_lib0clear(&___nl__im__15);
#line 228
//clear ___nl__bool__16;
#line 228
c_rt_lib0clear(&___nl__im__17);
#line 228
c_rt_lib0clear(&___nl__im__18);
#line 228
c_rt_lib0clear(&___nl__im__19);
#line 228
c_rt_lib0clear(&___nl__im__20);
#line 228
c_rt_lib0clear(&___nl__im__21);
#line 228
c_rt_lib0clear(&___nl__im__22);
#line 228
c_rt_lib0clear(&___nl__im__24);
#line 228
//clear ___nl__bool__25;
#line 228
c_rt_lib0clear(&___nl__im__26);
#line 228
c_rt_lib0clear(&___nl__im__27);
#line 228
c_rt_lib0clear(&___nl__im__41);
#line 228
c_rt_lib0clear(&___nl__im__42);
#line 228
c_rt_lib0clear(&___nl__im__43);
#line 228
c_rt_lib0clear(&___nl__im__44);
#line 228
c_rt_lib0clear(&___nl__im__45);
#line 228
c_rt_lib0clear(&___nl__im__57);
#line 228
c_rt_lib0clear(&___nl__im__58);
#line 228
c_rt_lib0clear(&___nl__im__59);
#line 228
c_rt_lib0clear(&___nl__im__60);
#line 228
c_rt_lib0clear(&___nl__im__61);
#line 228
c_rt_lib0clear(&___nl__im__73);
#line 228
c_rt_lib0clear(&___nl__im__74);
#line 228
c_rt_lib0clear(&___nl__im__75);
#line 228
c_rt_lib0clear(&___nl__im__76);
#line 228
c_rt_lib0clear(&___nl__im__77);
#line 228
c_rt_lib0clear(&___nl__im__79);
#line 228
//clear ___nl__bool__80;
#line 228
c_rt_lib0clear(&___nl__im__81);
#line 228
c_rt_lib0clear(&___nl__im__82);
#line 228
//clear ___nl__bool__83;
#line 228
c_rt_lib0clear(&___nl__im__84);
#line 228
c_rt_lib0clear(&___nl__im__85);
#line 228
c_rt_lib0clear(&___nl__im__86);
#line 228
c_rt_lib0clear(&___nl__im__109);
#line 228
c_rt_lib0clear(&___nl__im__110);
#line 228
c_rt_lib0clear(&___nl__im__111);
#line 228
c_rt_lib0clear(&___nl__im__112);
#line 228
c_rt_lib0clear(&___nl__im__113);
#line 228
c_rt_lib0clear(&___nl__im__114);
#line 228
c_rt_lib0clear(&___nl__im__115);
#line 228
c_rt_lib0clear(&___nl__im__116);
#line 228
c_rt_lib0clear(&___nl__im__117);
#line 228
c_rt_lib0clear(&___nl__im__119);
#line 228
c_rt_lib0clear(&___nl__im__120);
#line 228
//clear ___nl__bool__121;
#line 228
c_rt_lib0clear(&___nl__im__122);
#line 228
c_rt_lib0clear(&___nl__im__123);
#line 228
c_rt_lib0clear(&___nl__im__126);
#line 228
//clear ___nl__int__127;
#line 228
//clear ___nl__int__128;
#line 228
//clear ___nl__int__129;
#line 228
//clear ___nl__bool__130;
#line 228
//clear ___nl__int__131;
#line 228
c_rt_lib0clear(&___nl__im__132);
#line 228
return ___nl__im__133;
return NULL;

}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void own_to_im_converter_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT own_to_im_converter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT own_to_im_converter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = own_to_im_converter_priv0conv_priv_prefix0cal();
	break;
case 1:
	___const__[1] = own_to_im_converter0res_t0cal();
	break;
case 2:
	___const__[2] = own_to_im_converter0name_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
