
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "optional_libraries.h"
#include "ptd.h"
#include "nl.h"
#include "array.h"
#include "c_olympic_io.h"
#line 1 "optional_libraries.nl"

static ImmT *__const__f = NULL;
void optional_libraries_priv0__const__init();
ImmT optional_libraries_priv0__const__sim(int __nr);
ImmT optional_libraries_priv0__const__sing(int __nr);



ImmT  optional_libraries0c_olympic_io0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "optional_libraries0c_olympic_io");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return optional_libraries0c_olympic_io(*var0, var1, var2);
}
ImmT  optional_libraries0c_olympic_io(ImmT  ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
optional_libraries_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 12
c_rt_lib0move(&___nl__im__4,___get_global_const(731));
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__4));
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 13
c_rt_lib0move(&___nl__im__6,___get_global_const(793));
#line 13
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 13
c_rt_lib0clear(&___nl__im__6);
#line 13
___nl__bool__5 = !___nl__bool__5;
#line 13
if(___nl__bool__5){ goto label_2;}
#line 14
___nl__int__9 = c_rt_lib0array_len((*___ref___im__2));
#line 14
___nl__int__10 = 1;
#line 14
___nl__int__11 = ___nl__int__9 == ___nl__int__10;
#line 14
___nl__bool__7 = ___nl__int__11;
#line 14
//clear ___nl__int__9;
#line 14
//clear ___nl__int__10;
#line 14
//clear ___nl__int__11;
#line 14
___nl__bool__8 = !___nl__bool__7;
#line 14
if(___nl__bool__8){ goto label_5;}
#line 14
___nl__int__13 = 0;
#line 14
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get((*___ref___im__2), ___nl__int__13));
#line 14
//clear ___nl__int__13;
#line 14
___nl__bool__7 = nl0is_sim(___nl__im__12);
#line 14
c_rt_lib0clear(&___nl__im__12);
#line 14
label_5:
;
#line 14
//clear ___nl__bool__8;
#line 14
___nl__bool__7 = !___nl__bool__7;
#line 14
___nl__bool__7 = !___nl__bool__7;
#line 14
if(___nl__bool__7){ goto label_4;}
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
//clear ___nl__bool__5;
#line 14
//clear ___nl__bool__7;
#line 14
return ___nl__im__3;
#line 14
goto label_3;
#line 14
label_4:
;
#line 14
label_3:
;
#line 14
//clear ___nl__bool__7;
#line 15
c_rt_lib0move(&___nl__im__15,___get_global_const(21));
#line 15
___nl__int__16 = getIntFromImm(___nl__im__15);
#line 15
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get((*___ref___im__2), ___nl__int__16));
#line 15
c_rt_lib0clear(&___nl__im__15);
#line 15
//clear ___nl__int__16;
#line 15
c_rt_lib0delete(c_olympic_io0print(___nl__im__14));
#line 15
c_rt_lib0clear(&___nl__im__14);
#line 16
goto label_1;
#line 16
label_2:
;
#line 16
c_rt_lib0move(&___nl__im__17,___get_global_const(794));
#line 16
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__17);
#line 16
c_rt_lib0clear(&___nl__im__17);
#line 16
___nl__bool__5 = !___nl__bool__5;
#line 16
if(___nl__bool__5){ goto label_6;}
#line 17
___nl__int__19 = c_rt_lib0array_len((*___ref___im__2));
#line 17
___nl__int__20 = 0;
#line 17
___nl__int__21 = ___nl__int__19 == ___nl__int__20;
#line 17
___nl__bool__18 = ___nl__int__21;
#line 17
//clear ___nl__int__19;
#line 17
//clear ___nl__int__20;
#line 17
//clear ___nl__int__21;
#line 17
___nl__bool__18 = !___nl__bool__18;
#line 17
___nl__bool__18 = !___nl__bool__18;
#line 17
if(___nl__bool__18){ goto label_8;}
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
//clear ___nl__bool__5;
#line 17
//clear ___nl__bool__18;
#line 17
return ___nl__im__3;
#line 17
goto label_7;
#line 17
label_8:
;
#line 17
label_7:
;
#line 17
//clear ___nl__bool__18;
#line 18
c_rt_lib0move(___ref___im__1, c_olympic_io0readln());
#line 19
goto label_1;
#line 19
label_6:
;
#line 19
c_rt_lib0move(&___nl__im__22,___get_global_const(795));
#line 19
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__22);
#line 19
c_rt_lib0clear(&___nl__im__22);
#line 19
___nl__bool__5 = !___nl__bool__5;
#line 19
if(___nl__bool__5){ goto label_9;}
#line 20
___nl__int__24 = c_rt_lib0array_len((*___ref___im__2));
#line 20
___nl__int__25 = 0;
#line 20
___nl__int__26 = ___nl__int__24 == ___nl__int__25;
#line 20
___nl__bool__23 = ___nl__int__26;
#line 20
//clear ___nl__int__24;
#line 20
//clear ___nl__int__25;
#line 20
//clear ___nl__int__26;
#line 20
___nl__bool__23 = !___nl__bool__23;
#line 20
___nl__bool__23 = !___nl__bool__23;
#line 20
if(___nl__bool__23){ goto label_11;}
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
//clear ___nl__bool__5;
#line 20
//clear ___nl__bool__23;
#line 20
return ___nl__im__3;
#line 20
goto label_10;
#line 20
label_11:
;
#line 20
label_10:
;
#line 20
//clear ___nl__bool__23;
#line 21
___nl__int__27 = c_olympic_io0read_int();
#line 21
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__27));
#line 21
//clear ___nl__int__27;
#line 22
goto label_1;
#line 22
label_9:
;
#line 23
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 23
nl_die_arg(___nl__im__28);
#line 24
goto label_1;
#line 24
label_1:
;
#line 24
//clear ___nl__bool__5;
#line 24
c_rt_lib0clear(&___nl__im__28);
#line 25
c_rt_lib0move(&___nl__im__30,___get_global_const(37));
#line 25
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__30));
#line 25
c_rt_lib0clear(&___nl__im__30);
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
return ___nl__im__29;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void optional_libraries_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT optional_libraries_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT optional_libraries_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}