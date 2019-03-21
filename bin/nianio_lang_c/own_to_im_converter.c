
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(1129));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 19
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1130), ___nl__im__2, ___get_global_string_const(1131), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(1132), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
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
c_rt_lib0move(&___nl__im__7,___get_global_string_const(35));
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
c_rt_lib0move(&___nl__im__24,___get_global_string_const(35));
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
c_rt_lib0move(&___nl__im__26,___get_global_string_const(21));
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
c_rt_lib0move(&___nl__im__32,___get_global_string_const(37));
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
ImmT  ___nl__im__38 = NULL;
#line 48
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 48
if(___nl__bool__2){ goto label_35;}
#line 50
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 50
if(___nl__bool__2){ goto label_47;}
#line 52
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 52
if(___nl__bool__2){ goto label_62;}
#line 54
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 54
if(___nl__bool__2){ goto label_80;}
#line 56
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 56
if(___nl__bool__2){ goto label_101;}
#line 58
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 58
if(___nl__bool__2){ goto label_125;}
#line 60
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 60
if(___nl__bool__2){ goto label_152;}
#line 62
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 62
if(___nl__bool__2){ goto label_182;}
#line 64
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 64
if(___nl__bool__2){ goto label_215;}
#line 66
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 66
if(___nl__bool__2){ goto label_253;}
#line 68
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 68
if(___nl__bool__2){ goto label_288;}
#line 70
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 70
if(___nl__bool__2){ goto label_324;}
#line 72
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 72
if(___nl__bool__2){ goto label_361;}
#line 74
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 74
if(___nl__bool__2){ goto label_399;}
#line 76
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 76
if(___nl__bool__2){ goto label_403;}
#line 78
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 78
if(___nl__bool__2){ goto label_407;}
#line 78
c_rt_lib0move(&___nl__im__3,___get_global_string_const(16));
#line 78
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 78
nl_die_arg(___nl__im__3);
#line 48
label_35:
;
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 48
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 49
c_rt_lib0move(&___nl__im__6,___get_global_string_const(37));
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
goto label_448;
#line 50
label_47:
;
#line 50
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 50
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 51
c_rt_lib0move(&___nl__im__9,___get_global_string_const(40));
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
goto label_448;
#line 52
label_62:
;
#line 52
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 52
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 53
c_rt_lib0move(&___nl__im__12,___get_global_string_const(37));
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
goto label_448;
#line 54
label_80:
;
#line 54
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 54
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 55
c_rt_lib0move(&___nl__im__15,___get_global_string_const(40));
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
goto label_448;
#line 56
label_101:
;
#line 56
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 56
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 57
c_rt_lib0move(&___nl__im__18,___get_global_string_const(37));
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
goto label_448;
#line 58
label_125:
;
#line 58
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 58
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 59
c_rt_lib0move(&___nl__im__21,___get_global_string_const(40));
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
goto label_448;
#line 60
label_152:
;
#line 60
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 60
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 61
c_rt_lib0move(&___nl__im__24,___get_global_string_const(37));
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
goto label_448;
#line 62
label_182:
;
#line 62
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 62
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 63
c_rt_lib0move(&___nl__im__27,___get_global_string_const(40));
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
goto label_448;
#line 64
label_215:
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
goto label_448;
#line 66
label_253:
;
#line 67
c_rt_lib0move(&___nl__im__32,___get_global_string_const(37));
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
goto label_448;
#line 68
label_288:
;
#line 69
c_rt_lib0move(&___nl__im__33,___get_global_string_const(37));
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
goto label_448;
#line 70
label_324:
;
#line 71
c_rt_lib0move(&___nl__im__34,___get_global_string_const(37));
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
goto label_448;
#line 72
label_361:
;
#line 73
c_rt_lib0move(&___nl__im__35,___get_global_string_const(37));
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
//clear ___nl__bool__2;
#line 73
c_rt_lib0clear(&___nl__im__3);
#line 73
c_rt_lib0clear(&___nl__im__4);
#line 73
c_rt_lib0clear(&___nl__im__5);
#line 73
c_rt_lib0clear(&___nl__im__6);
#line 73
c_rt_lib0clear(&___nl__im__7);
#line 73
c_rt_lib0clear(&___nl__im__8);
#line 73
c_rt_lib0clear(&___nl__im__9);
#line 73
c_rt_lib0clear(&___nl__im__10);
#line 73
c_rt_lib0clear(&___nl__im__11);
#line 73
c_rt_lib0clear(&___nl__im__12);
#line 73
c_rt_lib0clear(&___nl__im__13);
#line 73
c_rt_lib0clear(&___nl__im__14);
#line 73
c_rt_lib0clear(&___nl__im__15);
#line 73
c_rt_lib0clear(&___nl__im__16);
#line 73
c_rt_lib0clear(&___nl__im__17);
#line 73
c_rt_lib0clear(&___nl__im__18);
#line 73
c_rt_lib0clear(&___nl__im__19);
#line 73
c_rt_lib0clear(&___nl__im__20);
#line 73
c_rt_lib0clear(&___nl__im__21);
#line 73
c_rt_lib0clear(&___nl__im__22);
#line 73
c_rt_lib0clear(&___nl__im__23);
#line 73
c_rt_lib0clear(&___nl__im__24);
#line 73
c_rt_lib0clear(&___nl__im__25);
#line 73
c_rt_lib0clear(&___nl__im__26);
#line 73
c_rt_lib0clear(&___nl__im__27);
#line 73
c_rt_lib0clear(&___nl__im__28);
#line 73
c_rt_lib0clear(&___nl__im__29);
#line 73
c_rt_lib0clear(&___nl__im__30);
#line 73
c_rt_lib0clear(&___nl__im__32);
#line 73
c_rt_lib0clear(&___nl__im__33);
#line 73
c_rt_lib0clear(&___nl__im__34);
#line 73
return ___nl__im__35;
#line 74
goto label_448;
#line 74
label_399:
;
#line 75
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 75
nl_die_arg(___nl__im__36);
#line 76
goto label_448;
#line 76
label_403:
;
#line 77
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 77
nl_die_arg(___nl__im__37);
#line 78
goto label_448;
#line 78
label_407:
;
#line 79
c_rt_lib0move(&___nl__im__38,___get_global_string_const(37));
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
//clear ___nl__bool__2;
#line 79
c_rt_lib0clear(&___nl__im__3);
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
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 79
c_rt_lib0clear(&___nl__im__21);
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
c_rt_lib0clear(&___nl__im__23);
#line 79
c_rt_lib0clear(&___nl__im__24);
#line 79
c_rt_lib0clear(&___nl__im__25);
#line 79
c_rt_lib0clear(&___nl__im__26);
#line 79
c_rt_lib0clear(&___nl__im__27);
#line 79
c_rt_lib0clear(&___nl__im__28);
#line 79
c_rt_lib0clear(&___nl__im__29);
#line 79
c_rt_lib0clear(&___nl__im__30);
#line 79
c_rt_lib0clear(&___nl__im__32);
#line 79
c_rt_lib0clear(&___nl__im__33);
#line 79
c_rt_lib0clear(&___nl__im__34);
#line 79
c_rt_lib0clear(&___nl__im__35);
#line 79
c_rt_lib0clear(&___nl__im__36);
#line 79
c_rt_lib0clear(&___nl__im__37);
#line 79
return ___nl__im__38;
#line 80
goto label_448;
#line 80
label_448:
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
#line 84
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 85
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1133));
#line 86
___nl__bool__5 = ___nl__bool__1;
#line 86
___nl__bool__5 = !___nl__bool__5;
#line 86
if(___nl__bool__5){ goto label_7;}
#line 87
c_rt_lib0move(&___nl__im__4,___get_global_string_const(302));
#line 88
goto label_7;
#line 88
label_7:
;
#line 88
//clear ___nl__bool__5;
#line 89
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 89
if(___nl__bool__6){ goto label_44;}
#line 95
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 95
if(___nl__bool__6){ goto label_74;}
#line 101
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 101
if(___nl__bool__6){ goto label_106;}
#line 103
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 103
if(___nl__bool__6){ goto label_119;}
#line 105
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 105
if(___nl__bool__6){ goto label_134;}
#line 107
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 107
if(___nl__bool__6){ goto label_147;}
#line 109
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 109
if(___nl__bool__6){ goto label_162;}
#line 119
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 119
if(___nl__bool__6){ goto label_215;}
#line 129
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 129
if(___nl__bool__6){ goto label_270;}
#line 135
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 135
if(___nl__bool__6){ goto label_288;}
#line 137
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 137
if(___nl__bool__6){ goto label_291;}
#line 139
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 139
if(___nl__bool__6){ goto label_294;}
#line 141
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 141
if(___nl__bool__6){ goto label_297;}
#line 143
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 143
if(___nl__bool__6){ goto label_300;}
#line 145
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 145
if(___nl__bool__6){ goto label_304;}
#line 147
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 147
if(___nl__bool__6){ goto label_308;}
#line 147
c_rt_lib0move(&___nl__im__7,___get_global_string_const(16));
#line 147
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__0));
#line 147
nl_die_arg(___nl__im__7);
#line 89
label_44:
;
#line 89
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 89
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 90
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1134));
#line 91
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__8));
#line 91
label_49:
;
#line 91
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 91
if(___nl__bool__11){ goto label_69;}
#line 91
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 91
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__8, ___nl__im__10));
#line 92
c_rt_lib0move(&___nl__im__17,___get_global_string_const(325));
#line 92
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 92
c_rt_lib0clear(&___nl__im__17);
#line 92
c_rt_lib0move(&___nl__im__18, own_to_im_converter_priv0get_type_constructor(___nl__im__12, ___nl__bool__1, ___nl__im__2));
#line 92
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__18));
#line 92
c_rt_lib0clear(&___nl__im__16);
#line 92
c_rt_lib0clear(&___nl__im__18);
#line 92
c_rt_lib0move(&___nl__im__19,___get_global_string_const(326));
#line 92
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__19));
#line 92
c_rt_lib0clear(&___nl__im__15);
#line 92
c_rt_lib0clear(&___nl__im__19);
#line 92
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__14));
#line 92
c_rt_lib0clear(&___nl__im__14);
#line 93
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 93
goto label_49;
#line 93
label_69:
;
#line 94
c_rt_lib0move(&___nl__im__20,___get_global_string_const(776));
#line 94
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__20));
#line 94
c_rt_lib0clear(&___nl__im__20);
#line 95
goto label_311;
#line 95
label_74:
;
#line 95
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 95
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 96
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1135));
#line 96
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__23));
#line 96
c_rt_lib0clear(&___nl__im__23);
#line 97
c_rt_lib0move(&___nl__im__27, c_rt_lib0init_iter(___nl__im__21));
#line 97
label_81:
;
#line 97
___nl__bool__25 = c_rt_lib0is_end_hash(___nl__im__27);
#line 97
if(___nl__bool__25){ goto label_101;}
#line 97
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_key_iter(___nl__im__27));
#line 97
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value(___nl__im__21, ___nl__im__24));
#line 98
c_rt_lib0move(&___nl__im__31,___get_global_string_const(325));
#line 98
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__24, ___nl__im__31));
#line 98
c_rt_lib0clear(&___nl__im__31);
#line 98
c_rt_lib0move(&___nl__im__32, own_to_im_converter_priv0get_type_constructor(___nl__im__26, ___nl__bool__1, ___nl__im__2));
#line 98
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 98
c_rt_lib0clear(&___nl__im__30);
#line 98
c_rt_lib0clear(&___nl__im__32);
#line 98
c_rt_lib0move(&___nl__im__33,___get_global_string_const(326));
#line 98
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 98
c_rt_lib0clear(&___nl__im__29);
#line 98
c_rt_lib0clear(&___nl__im__33);
#line 98
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__28));
#line 98
c_rt_lib0clear(&___nl__im__28);
#line 99
c_rt_lib0move(&___nl__im__27, c_rt_lib0next_iter(___nl__im__27));
#line 99
goto label_81;
#line 99
label_101:
;
#line 100
c_rt_lib0move(&___nl__im__34,___get_global_string_const(776));
#line 100
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__34));
#line 100
c_rt_lib0clear(&___nl__im__34);
#line 101
goto label_311;
#line 101
label_106:
;
#line 101
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 101
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 102
c_rt_lib0move(&___nl__im__38,___get_global_string_const(1136));
#line 102
c_rt_lib0move(&___nl__im__39, own_to_im_converter_priv0get_type_constructor(___nl__im__35, ___nl__bool__1, ___nl__im__2));
#line 102
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 102
c_rt_lib0clear(&___nl__im__38);
#line 102
c_rt_lib0clear(&___nl__im__39);
#line 102
c_rt_lib0move(&___nl__im__40,___get_global_string_const(320));
#line 102
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__37, ___nl__im__40));
#line 102
c_rt_lib0clear(&___nl__im__37);
#line 102
c_rt_lib0clear(&___nl__im__40);
#line 103
goto label_311;
#line 103
label_119:
;
#line 103
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 103
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 104
c_rt_lib0move(&___nl__im__45,___get_global_string_const(1137));
#line 104
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__4, ___nl__im__45));
#line 104
c_rt_lib0clear(&___nl__im__45);
#line 104
c_rt_lib0move(&___nl__im__46, own_to_im_converter_priv0get_type_constructor(___nl__im__41, ___nl__bool__1, ___nl__im__2));
#line 104
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 104
c_rt_lib0clear(&___nl__im__44);
#line 104
c_rt_lib0clear(&___nl__im__46);
#line 104
c_rt_lib0move(&___nl__im__47,___get_global_string_const(320));
#line 104
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__43, ___nl__im__47));
#line 104
c_rt_lib0clear(&___nl__im__43);
#line 104
c_rt_lib0clear(&___nl__im__47);
#line 105
goto label_311;
#line 105
label_134:
;
#line 105
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 105
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 106
c_rt_lib0move(&___nl__im__51,___get_global_string_const(1138));
#line 106
c_rt_lib0move(&___nl__im__52, own_to_im_converter_priv0get_type_constructor(___nl__im__48, ___nl__bool__1, ___nl__im__2));
#line 106
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 106
c_rt_lib0clear(&___nl__im__51);
#line 106
c_rt_lib0clear(&___nl__im__52);
#line 106
c_rt_lib0move(&___nl__im__53,___get_global_string_const(320));
#line 106
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 106
c_rt_lib0clear(&___nl__im__50);
#line 106
c_rt_lib0clear(&___nl__im__53);
#line 107
goto label_311;
#line 107
label_147:
;
#line 107
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 107
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 108
c_rt_lib0move(&___nl__im__58,___get_global_string_const(1139));
#line 108
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__4, ___nl__im__58));
#line 108
c_rt_lib0clear(&___nl__im__58);
#line 108
c_rt_lib0move(&___nl__im__59, own_to_im_converter_priv0get_type_constructor(___nl__im__54, ___nl__bool__1, ___nl__im__2));
#line 108
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__59));
#line 108
c_rt_lib0clear(&___nl__im__57);
#line 108
c_rt_lib0clear(&___nl__im__59);
#line 108
c_rt_lib0move(&___nl__im__60,___get_global_string_const(320));
#line 108
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__56, ___nl__im__60));
#line 108
c_rt_lib0clear(&___nl__im__56);
#line 108
c_rt_lib0clear(&___nl__im__60);
#line 109
goto label_311;
#line 109
label_162:
;
#line 109
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 109
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 110
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1140));
#line 111
c_rt_lib0move(&___nl__im__66, c_rt_lib0init_iter(___nl__im__61));
#line 111
label_167:
;
#line 111
___nl__bool__64 = c_rt_lib0is_end_hash(___nl__im__66);
#line 111
if(___nl__bool__64){ goto label_210;}
#line 111
c_rt_lib0move(&___nl__im__63, c_rt_lib0get_key_iter(___nl__im__66));
#line 111
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value(___nl__im__61, ___nl__im__63));
#line 112
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(28));
#line 112
if(___nl__bool__67){ goto label_179;}
#line 114
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(29));
#line 114
if(___nl__bool__67){ goto label_196;}
#line 114
c_rt_lib0move(&___nl__im__68,___get_global_string_const(16));
#line 114
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(2, ___nl__im__68, ___nl__im__65));
#line 114
nl_die_arg(___nl__im__68);
#line 112
label_179:
;
#line 112
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(28)));
#line 112
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 113
c_rt_lib0move(&___nl__im__74,___get_global_string_const(325));
#line 113
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__63, ___nl__im__74));
#line 113
c_rt_lib0clear(&___nl__im__74);
#line 113
c_rt_lib0move(&___nl__im__75, own_to_im_converter_priv0get_type_constructor(___nl__im__69, ___nl__bool__1, ___nl__im__2));
#line 113
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__75));
#line 113
c_rt_lib0clear(&___nl__im__73);
#line 113
c_rt_lib0clear(&___nl__im__75);
#line 113
c_rt_lib0move(&___nl__im__76,___get_global_string_const(326));
#line 113
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__76));
#line 113
c_rt_lib0clear(&___nl__im__72);
#line 113
c_rt_lib0clear(&___nl__im__76);
#line 113
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__71));
#line 113
c_rt_lib0clear(&___nl__im__71);
#line 114
goto label_203;
#line 114
label_196:
;
#line 115
c_rt_lib0move(&___nl__im__78,___get_global_string_const(1141));
#line 115
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__63, ___nl__im__78));
#line 115
c_rt_lib0clear(&___nl__im__78);
#line 115
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__77));
#line 115
c_rt_lib0clear(&___nl__im__77);
#line 116
goto label_203;
#line 116
label_203:
;
#line 116
//clear ___nl__bool__67;
#line 116
c_rt_lib0clear(&___nl__im__68);
#line 116
c_rt_lib0clear(&___nl__im__69);
#line 116
c_rt_lib0clear(&___nl__im__70);
#line 117
c_rt_lib0move(&___nl__im__66, c_rt_lib0next_iter(___nl__im__66));
#line 117
goto label_167;
#line 117
label_210:
;
#line 118
c_rt_lib0move(&___nl__im__79,___get_global_string_const(776));
#line 118
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__79));
#line 118
c_rt_lib0clear(&___nl__im__79);
#line 119
goto label_311;
#line 119
label_215:
;
#line 119
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 119
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 120
c_rt_lib0move(&___nl__im__82,___get_global_string_const(1142));
#line 120
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__82));
#line 120
c_rt_lib0clear(&___nl__im__82);
#line 121
c_rt_lib0move(&___nl__im__86, c_rt_lib0init_iter(___nl__im__80));
#line 121
label_222:
;
#line 121
___nl__bool__84 = c_rt_lib0is_end_hash(___nl__im__86);
#line 121
if(___nl__bool__84){ goto label_265;}
#line 121
c_rt_lib0move(&___nl__im__83, c_rt_lib0get_key_iter(___nl__im__86));
#line 121
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__80, ___nl__im__83));
#line 122
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(28));
#line 122
if(___nl__bool__87){ goto label_234;}
#line 124
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(29));
#line 124
if(___nl__bool__87){ goto label_251;}
#line 124
c_rt_lib0move(&___nl__im__88,___get_global_string_const(16));
#line 124
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_mk(2, ___nl__im__88, ___nl__im__85));
#line 124
nl_die_arg(___nl__im__88);
#line 122
label_234:
;
#line 122
c_rt_lib0move(&___nl__im__90, c_rt_lib0priv_as(___nl__im__85, ___get_global_string_const(28)));
#line 122
c_rt_lib0copy(&___nl__im__89, ___nl__im__90);
#line 123
c_rt_lib0move(&___nl__im__94,___get_global_string_const(325));
#line 123
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__83, ___nl__im__94));
#line 123
c_rt_lib0clear(&___nl__im__94);
#line 123
c_rt_lib0move(&___nl__im__95, own_to_im_converter_priv0get_type_constructor(___nl__im__89, ___nl__bool__1, ___nl__im__2));
#line 123
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__95));
#line 123
c_rt_lib0clear(&___nl__im__93);
#line 123
c_rt_lib0clear(&___nl__im__95);
#line 123
c_rt_lib0move(&___nl__im__96,___get_global_string_const(326));
#line 123
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__96));
#line 123
c_rt_lib0clear(&___nl__im__92);
#line 123
c_rt_lib0clear(&___nl__im__96);
#line 123
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__91));
#line 123
c_rt_lib0clear(&___nl__im__91);
#line 124
goto label_258;
#line 124
label_251:
;
#line 125
c_rt_lib0move(&___nl__im__98,___get_global_string_const(1141));
#line 125
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__83, ___nl__im__98));
#line 125
c_rt_lib0clear(&___nl__im__98);
#line 125
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__97));
#line 125
c_rt_lib0clear(&___nl__im__97);
#line 126
goto label_258;
#line 126
label_258:
;
#line 126
//clear ___nl__bool__87;
#line 126
c_rt_lib0clear(&___nl__im__88);
#line 126
c_rt_lib0clear(&___nl__im__89);
#line 126
c_rt_lib0clear(&___nl__im__90);
#line 127
c_rt_lib0move(&___nl__im__86, c_rt_lib0next_iter(___nl__im__86));
#line 127
goto label_222;
#line 127
label_265:
;
#line 128
c_rt_lib0move(&___nl__im__99,___get_global_string_const(776));
#line 128
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__99));
#line 128
c_rt_lib0clear(&___nl__im__99);
#line 129
goto label_311;
#line 129
label_270:
;
#line 129
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 129
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 130
___nl__bool__102 = ___nl__bool__1;
#line 130
___nl__bool__102 = !___nl__bool__102;
#line 130
if(___nl__bool__102){ goto label_280;}
#line 131
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__100));
#line 131
c_rt_lib0move(&___nl__im__3, own_to_im_converter_priv0get_type_constructor(___nl__im__103, ___nl__bool__1, ___nl__im__2));
#line 131
c_rt_lib0clear(&___nl__im__103);
#line 132
goto label_285;
#line 132
label_280:
;
#line 133
c_rt_lib0move(&___nl__im__104,___get_global_string_const(298));
#line 133
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__104, ___nl__im__100));
#line 133
c_rt_lib0clear(&___nl__im__104);
#line 134
goto label_285;
#line 134
label_285:
;
#line 134
//clear ___nl__bool__102;
#line 135
goto label_311;
#line 135
label_288:
;
#line 136
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1143));
#line 137
goto label_311;
#line 137
label_291:
;
#line 138
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1144));
#line 139
goto label_311;
#line 139
label_294:
;
#line 140
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1143));
#line 141
goto label_311;
#line 141
label_297:
;
#line 142
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1145));
#line 143
goto label_311;
#line 143
label_300:
;
#line 144
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(0));
#line 144
nl_die_arg(___nl__im__105);
#line 145
goto label_311;
#line 145
label_304:
;
#line 146
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_mk(0));
#line 146
nl_die_arg(___nl__im__106);
#line 147
goto label_311;
#line 147
label_308:
;
#line 148
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1146));
#line 149
goto label_311;
#line 149
label_311:
;
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
//clear ___nl__bool__1;
#line 150
c_rt_lib0clear(&___nl__im__2);
#line 150
c_rt_lib0clear(&___nl__im__4);
#line 150
//clear ___nl__bool__6;
#line 150
c_rt_lib0clear(&___nl__im__7);
#line 150
c_rt_lib0clear(&___nl__im__8);
#line 150
c_rt_lib0clear(&___nl__im__9);
#line 150
c_rt_lib0clear(&___nl__im__10);
#line 150
//clear ___nl__bool__11;
#line 150
c_rt_lib0clear(&___nl__im__12);
#line 150
c_rt_lib0clear(&___nl__im__13);
#line 150
c_rt_lib0clear(&___nl__im__21);
#line 150
c_rt_lib0clear(&___nl__im__22);
#line 150
c_rt_lib0clear(&___nl__im__24);
#line 150
//clear ___nl__bool__25;
#line 150
c_rt_lib0clear(&___nl__im__26);
#line 150
c_rt_lib0clear(&___nl__im__27);
#line 150
c_rt_lib0clear(&___nl__im__35);
#line 150
c_rt_lib0clear(&___nl__im__36);
#line 150
c_rt_lib0clear(&___nl__im__41);
#line 150
c_rt_lib0clear(&___nl__im__42);
#line 150
c_rt_lib0clear(&___nl__im__48);
#line 150
c_rt_lib0clear(&___nl__im__49);
#line 150
c_rt_lib0clear(&___nl__im__54);
#line 150
c_rt_lib0clear(&___nl__im__55);
#line 150
c_rt_lib0clear(&___nl__im__61);
#line 150
c_rt_lib0clear(&___nl__im__62);
#line 150
c_rt_lib0clear(&___nl__im__63);
#line 150
//clear ___nl__bool__64;
#line 150
c_rt_lib0clear(&___nl__im__65);
#line 150
c_rt_lib0clear(&___nl__im__66);
#line 150
//clear ___nl__bool__67;
#line 150
c_rt_lib0clear(&___nl__im__68);
#line 150
c_rt_lib0clear(&___nl__im__69);
#line 150
c_rt_lib0clear(&___nl__im__70);
#line 150
c_rt_lib0clear(&___nl__im__80);
#line 150
c_rt_lib0clear(&___nl__im__81);
#line 150
c_rt_lib0clear(&___nl__im__83);
#line 150
//clear ___nl__bool__84;
#line 150
c_rt_lib0clear(&___nl__im__85);
#line 150
c_rt_lib0clear(&___nl__im__86);
#line 150
//clear ___nl__bool__87;
#line 150
c_rt_lib0clear(&___nl__im__88);
#line 150
c_rt_lib0clear(&___nl__im__89);
#line 150
c_rt_lib0clear(&___nl__im__90);
#line 150
c_rt_lib0clear(&___nl__im__100);
#line 150
c_rt_lib0clear(&___nl__im__101);
#line 150
c_rt_lib0clear(&___nl__im__105);
#line 150
c_rt_lib0clear(&___nl__im__106);
#line 150
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
ImmT  ___nl__im__121 = NULL;
bool  ___nl__bool__122 = false;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
bool  ___nl__bool__125 = false;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
INT  ___nl__int__128 = 0;
INT  ___nl__int__129 = 0;
INT  ___nl__int__130 = 0;
bool  ___nl__bool__131 = false;
INT  ___nl__int__132 = 0;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
#line 155
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1147));
#line 155
c_rt_lib0move(&___nl__im__7, own_to_im_converter0get_function_name(___nl__im__0, ___nl__im__1));
#line 155
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 155
c_rt_lib0clear(&___nl__im__6);
#line 155
c_rt_lib0clear(&___nl__im__7);
#line 156
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1148));
#line 156
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 156
c_rt_lib0clear(&___nl__im__5);
#line 156
c_rt_lib0clear(&___nl__im__8);
#line 156
___nl__bool__10 = false;
#line 156
c_rt_lib0move(&___nl__im__9, own_to_im_converter_priv0get_type_constructor(___nl__im__0, ___nl__bool__10, ___nl__im__1));
#line 156
//clear ___nl__bool__10;
#line 156
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 156
c_rt_lib0clear(&___nl__im__4);
#line 156
c_rt_lib0clear(&___nl__im__9);
#line 156
c_rt_lib0move(&___nl__im__11,___get_global_string_const(753));
#line 156
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__11));
#line 156
c_rt_lib0clear(&___nl__im__3);
#line 156
c_rt_lib0clear(&___nl__im__11);
#line 157
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 157
___nl__bool__12 = !___nl__bool__12;
#line 157
if(___nl__bool__12){ goto label_26;}
#line 158
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 158
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__13));
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 159
goto label_26;
#line 159
label_26:
;
#line 159
//clear ___nl__bool__12;
#line 160
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 161
c_rt_lib0move(&___nl__im__15,___get_global_string_const(37));
#line 162
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 162
if(___nl__bool__16){ goto label_65;}
#line 164
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 164
if(___nl__bool__16){ goto label_71;}
#line 172
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 172
if(___nl__bool__16){ goto label_117;}
#line 174
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 174
if(___nl__bool__16){ goto label_123;}
#line 182
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 182
if(___nl__bool__16){ goto label_155;}
#line 184
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 184
if(___nl__bool__16){ goto label_161;}
#line 192
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 192
if(___nl__bool__16){ goto label_193;}
#line 194
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 194
if(___nl__bool__16){ goto label_199;}
#line 206
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 206
if(___nl__bool__16){ goto label_281;}
#line 208
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 208
if(___nl__bool__16){ goto label_287;}
#line 210
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 210
if(___nl__bool__16){ goto label_291;}
#line 212
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 212
if(___nl__bool__16){ goto label_295;}
#line 214
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 214
if(___nl__bool__16){ goto label_299;}
#line 216
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 216
if(___nl__bool__16){ goto label_303;}
#line 218
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 218
if(___nl__bool__16){ goto label_307;}
#line 220
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 220
if(___nl__bool__16){ goto label_311;}
#line 220
c_rt_lib0move(&___nl__im__17,___get_global_string_const(16));
#line 220
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__0));
#line 220
nl_die_arg(___nl__im__17);
#line 162
label_65:
;
#line 162
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 162
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 163
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 163
nl_die_arg(___nl__im__20);
#line 164
goto label_315;
#line 164
label_71:
;
#line 164
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 164
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 165
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1149));
#line 165
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 165
c_rt_lib0clear(&___nl__im__23);
#line 166
c_rt_lib0move(&___nl__im__27, c_rt_lib0init_iter(___nl__im__21));
#line 166
label_78:
;
#line 166
___nl__bool__25 = c_rt_lib0is_end_hash(___nl__im__27);
#line 166
if(___nl__bool__25){ goto label_112;}
#line 166
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_key_iter(___nl__im__27));
#line 166
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value(___nl__im__21, ___nl__im__24));
#line 167
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__26, ___nl__im__1));
#line 168
c_rt_lib0move(&___nl__im__35,___get_global_string_const(325));
#line 168
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__24, ___nl__im__35));
#line 168
c_rt_lib0clear(&___nl__im__35);
#line 168
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__15));
#line 168
c_rt_lib0clear(&___nl__im__34);
#line 168
c_rt_lib0move(&___nl__im__36,___get_global_string_const(455));
#line 168
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 168
c_rt_lib0clear(&___nl__im__33);
#line 168
c_rt_lib0clear(&___nl__im__36);
#line 168
c_rt_lib0move(&___nl__im__37, own_to_im_converter0get_required_arg_type(___nl__im__26, ___nl__im__1));
#line 168
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__37));
#line 168
c_rt_lib0clear(&___nl__im__32);
#line 168
c_rt_lib0clear(&___nl__im__37);
#line 168
c_rt_lib0move(&___nl__im__38,___get_global_string_const(1150));
#line 168
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__38));
#line 168
c_rt_lib0clear(&___nl__im__31);
#line 168
c_rt_lib0clear(&___nl__im__38);
#line 168
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__24));
#line 168
c_rt_lib0clear(&___nl__im__30);
#line 168
c_rt_lib0move(&___nl__im__39,___get_global_string_const(1151));
#line 168
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__39));
#line 168
c_rt_lib0clear(&___nl__im__29);
#line 168
c_rt_lib0clear(&___nl__im__39);
#line 168
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 169
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__26));
#line 170
c_rt_lib0move(&___nl__im__27, c_rt_lib0next_iter(___nl__im__27));
#line 170
goto label_78;
#line 170
label_112:
;
#line 171
c_rt_lib0move(&___nl__im__40,___get_global_string_const(1152));
#line 171
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__40));
#line 171
c_rt_lib0clear(&___nl__im__40);
#line 172
goto label_315;
#line 172
label_117:
;
#line 172
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 172
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 173
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(0));
#line 173
nl_die_arg(___nl__im__43);
#line 174
goto label_315;
#line 174
label_123:
;
#line 174
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 174
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 175
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__44, ___nl__im__1));
#line 176
c_rt_lib0move(&___nl__im__46,___get_global_string_const(1153));
#line 176
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__46));
#line 176
c_rt_lib0clear(&___nl__im__46);
#line 177
c_rt_lib0move(&___nl__im__47,___get_global_string_const(1154));
#line 177
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__47));
#line 177
c_rt_lib0clear(&___nl__im__47);
#line 178
c_rt_lib0move(&___nl__im__52,___get_global_string_const(1155));
#line 178
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__15));
#line 178
c_rt_lib0clear(&___nl__im__52);
#line 178
c_rt_lib0move(&___nl__im__53,___get_global_string_const(455));
#line 178
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 178
c_rt_lib0clear(&___nl__im__51);
#line 178
c_rt_lib0clear(&___nl__im__53);
#line 178
c_rt_lib0move(&___nl__im__54, own_to_im_converter0get_required_arg_type(___nl__im__44, ___nl__im__1));
#line 178
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__54));
#line 178
c_rt_lib0clear(&___nl__im__50);
#line 178
c_rt_lib0clear(&___nl__im__54);
#line 179
c_rt_lib0move(&___nl__im__55,___get_global_string_const(1156));
#line 179
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__55));
#line 179
c_rt_lib0clear(&___nl__im__49);
#line 179
c_rt_lib0clear(&___nl__im__55);
#line 179
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__48));
#line 179
c_rt_lib0clear(&___nl__im__48);
#line 180
c_rt_lib0move(&___nl__im__56,___get_global_string_const(1157));
#line 180
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__56));
#line 180
c_rt_lib0clear(&___nl__im__56);
#line 181
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__44));
#line 182
goto label_315;
#line 182
label_155:
;
#line 182
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 182
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 183
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 183
nl_die_arg(___nl__im__59);
#line 184
goto label_315;
#line 184
label_161:
;
#line 184
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 184
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 185
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__60, ___nl__im__1));
#line 186
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__60));
#line 187
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1158));
#line 187
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__62));
#line 187
c_rt_lib0clear(&___nl__im__62);
#line 188
c_rt_lib0move(&___nl__im__63,___get_global_string_const(1159));
#line 188
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__63));
#line 188
c_rt_lib0clear(&___nl__im__63);
#line 189
c_rt_lib0move(&___nl__im__68,___get_global_string_const(1160));
#line 189
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__15));
#line 189
c_rt_lib0clear(&___nl__im__68);
#line 189
c_rt_lib0move(&___nl__im__69,___get_global_string_const(455));
#line 189
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__69));
#line 189
c_rt_lib0clear(&___nl__im__67);
#line 189
c_rt_lib0clear(&___nl__im__69);
#line 189
c_rt_lib0move(&___nl__im__70, own_to_im_converter0get_required_arg_type(___nl__im__60, ___nl__im__1));
#line 189
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__70));
#line 189
c_rt_lib0clear(&___nl__im__66);
#line 189
c_rt_lib0clear(&___nl__im__70);
#line 190
c_rt_lib0move(&___nl__im__71,___get_global_string_const(1161));
#line 190
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__71));
#line 190
c_rt_lib0clear(&___nl__im__65);
#line 190
c_rt_lib0clear(&___nl__im__71);
#line 190
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__64));
#line 190
c_rt_lib0clear(&___nl__im__64);
#line 191
c_rt_lib0move(&___nl__im__72,___get_global_string_const(1162));
#line 191
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__72));
#line 191
c_rt_lib0clear(&___nl__im__72);
#line 192
goto label_315;
#line 192
label_193:
;
#line 192
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 192
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 193
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(0));
#line 193
nl_die_arg(___nl__im__75);
#line 194
goto label_315;
#line 194
label_199:
;
#line 194
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 194
c_rt_lib0copy(&___nl__im__76, ___nl__im__77);
#line 195
c_rt_lib0move(&___nl__im__78,___get_global_string_const(1163));
#line 195
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__78));
#line 195
c_rt_lib0clear(&___nl__im__78);
#line 196
c_rt_lib0move(&___nl__im__82, c_rt_lib0init_iter(___nl__im__76));
#line 196
label_206:
;
#line 196
___nl__bool__80 = c_rt_lib0is_end_hash(___nl__im__82);
#line 196
if(___nl__bool__80){ goto label_279;}
#line 196
c_rt_lib0move(&___nl__im__79, c_rt_lib0get_key_iter(___nl__im__82));
#line 196
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value(___nl__im__76, ___nl__im__79));
#line 197
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(28));
#line 197
if(___nl__bool__83){ goto label_218;}
#line 202
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(29));
#line 202
if(___nl__bool__83){ goto label_255;}
#line 202
c_rt_lib0move(&___nl__im__84,___get_global_string_const(16));
#line 202
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_mk(2, ___nl__im__84, ___nl__im__81));
#line 202
nl_die_arg(___nl__im__84);
#line 197
label_218:
;
#line 197
c_rt_lib0move(&___nl__im__86, c_rt_lib0priv_as(___nl__im__81, ___get_global_string_const(28)));
#line 197
c_rt_lib0copy(&___nl__im__85, ___nl__im__86);
#line 198
c_rt_lib0move(&___nl__im__15, own_to_im_converter0get_function_name(___nl__im__85, ___nl__im__1));
#line 199
c_rt_lib0delete(hash0set_value(&___nl__im__14, ___nl__im__15, ___nl__im__85));
#line 200
c_rt_lib0move(&___nl__im__95,___get_global_string_const(1164));
#line 200
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__79));
#line 200
c_rt_lib0clear(&___nl__im__95);
#line 200
c_rt_lib0move(&___nl__im__96,___get_global_string_const(1165));
#line 200
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__96));
#line 200
c_rt_lib0clear(&___nl__im__94);
#line 200
c_rt_lib0clear(&___nl__im__96);
#line 200
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__79));
#line 200
c_rt_lib0clear(&___nl__im__93);
#line 200
c_rt_lib0move(&___nl__im__97,___get_global_string_const(455));
#line 200
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__97));
#line 200
c_rt_lib0clear(&___nl__im__92);
#line 200
c_rt_lib0clear(&___nl__im__97);
#line 200
c_rt_lib0move(&___nl__im__98, own_to_im_converter0get_function_name(___nl__im__85, ___nl__im__1));
#line 200
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__98));
#line 200
c_rt_lib0clear(&___nl__im__91);
#line 200
c_rt_lib0clear(&___nl__im__98);
#line 201
c_rt_lib0move(&___nl__im__99,___get_global_string_const(455));
#line 201
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__99));
#line 201
c_rt_lib0clear(&___nl__im__90);
#line 201
c_rt_lib0clear(&___nl__im__99);
#line 201
c_rt_lib0move(&___nl__im__100, own_to_im_converter0get_required_arg_type(___nl__im__85, ___nl__im__1));
#line 201
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__100));
#line 201
c_rt_lib0clear(&___nl__im__89);
#line 201
c_rt_lib0clear(&___nl__im__100);
#line 201
c_rt_lib0move(&___nl__im__101,___get_global_string_const(1166));
#line 201
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__101));
#line 201
c_rt_lib0clear(&___nl__im__88);
#line 201
c_rt_lib0clear(&___nl__im__101);
#line 201
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__87));
#line 201
c_rt_lib0clear(&___nl__im__87);
#line 202
goto label_272;
#line 202
label_255:
;
#line 203
c_rt_lib0move(&___nl__im__106,___get_global_string_const(1164));
#line 203
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__79));
#line 203
c_rt_lib0clear(&___nl__im__106);
#line 203
c_rt_lib0move(&___nl__im__107,___get_global_string_const(1167));
#line 203
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__107));
#line 203
c_rt_lib0clear(&___nl__im__105);
#line 203
c_rt_lib0clear(&___nl__im__107);
#line 203
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__79));
#line 203
c_rt_lib0clear(&___nl__im__104);
#line 203
c_rt_lib0move(&___nl__im__108,___get_global_string_const(1168));
#line 203
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__108));
#line 203
c_rt_lib0clear(&___nl__im__103);
#line 203
c_rt_lib0clear(&___nl__im__108);
#line 203
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__102));
#line 203
c_rt_lib0clear(&___nl__im__102);
#line 204
goto label_272;
#line 204
label_272:
;
#line 204
//clear ___nl__bool__83;
#line 204
c_rt_lib0clear(&___nl__im__84);
#line 204
c_rt_lib0clear(&___nl__im__85);
#line 204
c_rt_lib0clear(&___nl__im__86);
#line 205
c_rt_lib0move(&___nl__im__82, c_rt_lib0next_iter(___nl__im__82));
#line 205
goto label_206;
#line 205
label_279:
;
#line 206
goto label_315;
#line 206
label_281:
;
#line 206
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 206
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 207
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_mk(0));
#line 207
nl_die_arg(___nl__im__111);
#line 208
goto label_315;
#line 208
label_287:
;
#line 209
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_mk(0));
#line 209
nl_die_arg(___nl__im__112);
#line 210
goto label_315;
#line 210
label_291:
;
#line 211
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_mk(0));
#line 211
nl_die_arg(___nl__im__113);
#line 212
goto label_315;
#line 212
label_295:
;
#line 213
c_rt_lib0move(&___nl__im__114, c_rt_lib0array_mk(0));
#line 213
nl_die_arg(___nl__im__114);
#line 214
goto label_315;
#line 214
label_299:
;
#line 215
c_rt_lib0move(&___nl__im__115, c_rt_lib0array_mk(0));
#line 215
nl_die_arg(___nl__im__115);
#line 216
goto label_315;
#line 216
label_303:
;
#line 217
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_mk(0));
#line 217
nl_die_arg(___nl__im__116);
#line 218
goto label_315;
#line 218
label_307:
;
#line 219
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_mk(0));
#line 219
nl_die_arg(___nl__im__117);
#line 220
goto label_315;
#line 220
label_311:
;
#line 221
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(0));
#line 221
nl_die_arg(___nl__im__118);
#line 222
goto label_315;
#line 222
label_315:
;
#line 223
c_rt_lib0move(&___nl__im__119,___get_global_string_const(305));
#line 223
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__119));
#line 223
c_rt_lib0clear(&___nl__im__119);
#line 224
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(0));
#line 225
c_rt_lib0move(&___nl__im__124, c_rt_lib0init_iter(___nl__im__14));
#line 225
label_321:
;
#line 225
___nl__bool__122 = c_rt_lib0is_end_hash(___nl__im__124);
#line 225
if(___nl__bool__122){ goto label_338;}
#line 225
c_rt_lib0move(&___nl__im__121, c_rt_lib0get_key_iter(___nl__im__124));
#line 225
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value(___nl__im__14, ___nl__im__121));
#line 226
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_mk(0));
#line 226
___nl__bool__125 = tct0is_own_type(___nl__im__123, ___nl__im__126);
#line 226
c_rt_lib0clear(&___nl__im__126);
#line 226
___nl__bool__125 = !___nl__bool__125;
#line 226
___nl__bool__125 = !___nl__bool__125;
#line 226
if(___nl__bool__125){ goto label_334;}
#line 227
c_rt_lib0delete(array0push(&___nl__im__120, ___nl__im__121));
#line 228
goto label_334;
#line 228
label_334:
;
#line 228
//clear ___nl__bool__125;
#line 229
c_rt_lib0move(&___nl__im__124, c_rt_lib0next_iter(___nl__im__124));
#line 229
goto label_321;
#line 229
label_338:
;
#line 230
___nl__int__128 = 0;
#line 230
___nl__int__129 = 1;
#line 230
___nl__int__130 = c_rt_lib0array_len(___nl__im__120);
#line 230
label_342:
;
#line 230
___nl__int__132 = ___nl__int__128 >= ___nl__int__130;
#line 230
___nl__bool__131 = ___nl__int__132;
#line 230
if(___nl__bool__131){ goto label_352;}
#line 230
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_get(___nl__im__120, ___nl__int__128));
#line 230
c_rt_lib0copy(&___nl__im__127, ___nl__im__133);
#line 231
c_rt_lib0delete(hash0delete(&___nl__im__14, ___nl__im__127));
#line 231
c_rt_lib0clear(&___nl__im__127);
#line 232
___nl__int__128 = ___nl__int__128 + ___nl__int__129;
#line 232
goto label_342;
#line 232
label_352:
;
#line 233
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_mk(2, ___get_global_string_const(1130), ___nl__im__2, ___get_global_string_const(1131), ___nl__im__14));
#line 234
c_rt_lib0clear(&___nl__im__0);
#line 234
c_rt_lib0clear(&___nl__im__1);
#line 234
c_rt_lib0clear(&___nl__im__2);
#line 234
c_rt_lib0clear(&___nl__im__14);
#line 234
c_rt_lib0clear(&___nl__im__15);
#line 234
//clear ___nl__bool__16;
#line 234
c_rt_lib0clear(&___nl__im__17);
#line 234
c_rt_lib0clear(&___nl__im__18);
#line 234
c_rt_lib0clear(&___nl__im__19);
#line 234
c_rt_lib0clear(&___nl__im__20);
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 234
c_rt_lib0clear(&___nl__im__22);
#line 234
c_rt_lib0clear(&___nl__im__24);
#line 234
//clear ___nl__bool__25;
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
c_rt_lib0clear(&___nl__im__27);
#line 234
c_rt_lib0clear(&___nl__im__41);
#line 234
c_rt_lib0clear(&___nl__im__42);
#line 234
c_rt_lib0clear(&___nl__im__43);
#line 234
c_rt_lib0clear(&___nl__im__44);
#line 234
c_rt_lib0clear(&___nl__im__45);
#line 234
c_rt_lib0clear(&___nl__im__57);
#line 234
c_rt_lib0clear(&___nl__im__58);
#line 234
c_rt_lib0clear(&___nl__im__59);
#line 234
c_rt_lib0clear(&___nl__im__60);
#line 234
c_rt_lib0clear(&___nl__im__61);
#line 234
c_rt_lib0clear(&___nl__im__73);
#line 234
c_rt_lib0clear(&___nl__im__74);
#line 234
c_rt_lib0clear(&___nl__im__75);
#line 234
c_rt_lib0clear(&___nl__im__76);
#line 234
c_rt_lib0clear(&___nl__im__77);
#line 234
c_rt_lib0clear(&___nl__im__79);
#line 234
//clear ___nl__bool__80;
#line 234
c_rt_lib0clear(&___nl__im__81);
#line 234
c_rt_lib0clear(&___nl__im__82);
#line 234
//clear ___nl__bool__83;
#line 234
c_rt_lib0clear(&___nl__im__84);
#line 234
c_rt_lib0clear(&___nl__im__85);
#line 234
c_rt_lib0clear(&___nl__im__86);
#line 234
c_rt_lib0clear(&___nl__im__109);
#line 234
c_rt_lib0clear(&___nl__im__110);
#line 234
c_rt_lib0clear(&___nl__im__111);
#line 234
c_rt_lib0clear(&___nl__im__112);
#line 234
c_rt_lib0clear(&___nl__im__113);
#line 234
c_rt_lib0clear(&___nl__im__114);
#line 234
c_rt_lib0clear(&___nl__im__115);
#line 234
c_rt_lib0clear(&___nl__im__116);
#line 234
c_rt_lib0clear(&___nl__im__117);
#line 234
c_rt_lib0clear(&___nl__im__118);
#line 234
c_rt_lib0clear(&___nl__im__120);
#line 234
c_rt_lib0clear(&___nl__im__121);
#line 234
//clear ___nl__bool__122;
#line 234
c_rt_lib0clear(&___nl__im__123);
#line 234
c_rt_lib0clear(&___nl__im__124);
#line 234
c_rt_lib0clear(&___nl__im__127);
#line 234
//clear ___nl__int__128;
#line 234
//clear ___nl__int__129;
#line 234
//clear ___nl__int__130;
#line 234
//clear ___nl__bool__131;
#line 234
//clear ___nl__int__132;
#line 234
c_rt_lib0clear(&___nl__im__133);
#line 234
return ___nl__im__134;
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
