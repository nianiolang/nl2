
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "boolean.h"
#line 1 "boolean.nl"

static ImmT *__const__f = NULL;
void boolean_priv0__const__init();
ImmT boolean_priv0__const__sim(int __nr);
ImmT boolean_priv0__const__sing(int __nr);



ImmT  boolean0to_nl0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "boolean0to_nl");
ImmT  var0 = (_tab[0]);
return boolean0to_nl(var0);
}
ImmT  boolean0to_nl(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
boolean_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 7
c_rt_lib0move(&___nl__im__2,___get_global_const(41));
#line 7
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 7
c_rt_lib0clear(&___nl__im__2);
#line 7
c_rt_lib0move(&___nl__im__3, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 7
c_rt_lib0clear(&___nl__im__0);
#line 7
//clear ___nl__bool__1;
#line 7
c_rt_lib0clear(&___nl__im__2);
#line 7
return ___nl__im__3;
#line 7
c_rt_lib0clear(&___nl__im__0);
#line 7
//clear ___nl__bool__1;
#line 7
c_rt_lib0clear(&___nl__im__2);
#line 7
c_rt_lib0clear(&___nl__im__3);
#line 7
return NULL;
}

ImmT  boolean0check_true0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "boolean0check_true");
ImmT  var0 = (_tab[0]);
return boolean0check_true(var0);
}
ImmT  boolean0check_true(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
boolean_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
#line 11
if(___nl__im__0){ goto label_2;}
#line 11
___nl__int__1 = 0;
#line 11
goto label_1;
#line 11
label_2:
#line 11
___nl__int__1 = 1;
#line 11
label_1:
#line 11
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__1));
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
//clear ___nl__int__1;
#line 11
return ___nl__im__2;
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
//clear ___nl__int__1;
#line 11
c_rt_lib0clear(&___nl__im__2);
#line 11
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void boolean_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT boolean_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT boolean_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
