
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "enum.h"
#include "ov.h"
#include "ptd.h"
#line 1 "enum.nl"

static ImmT *__const__f = NULL;
void enum_priv0__const__init();
ImmT enum_priv0__const__sim(int __nr);
ImmT enum_priv0__const__sing(int __nr);



ImmT  enum0eq0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "enum0eq");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
bool  res = enum0eq(*var0, *var1);
return c_rt_lib0bool_to_nl_native(res);
}
bool  enum0eq(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
enum_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 10
c_rt_lib0move(&___nl__im__3, ov0has_value(___nl__im__0));
#line 10
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__3);
#line 10
c_rt_lib0clear(&___nl__im__3);
#line 10
if(___nl__bool__2){ goto label_7;}
#line 10
c_rt_lib0move(&___nl__im__4, ov0has_value(___nl__im__1));
#line 10
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__4);
#line 10
c_rt_lib0clear(&___nl__im__4);
#line 10
label_7:
;
#line 10
___nl__bool__2 = !___nl__bool__2;
#line 10
if(___nl__bool__2){ goto label_13;}
#line 10
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 10
nl_die_arg(___nl__im__5);
#line 10
goto label_13;
#line 10
label_13:
;
#line 10
//clear ___nl__bool__2;
#line 10
c_rt_lib0clear(&___nl__im__5);
#line 11
c_rt_lib0move(&___nl__im__7, ov0get_element(___nl__im__0));
#line 11
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__1));
#line 11
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 11
c_rt_lib0clear(&___nl__im__7);
#line 11
c_rt_lib0clear(&___nl__im__8);
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
c_rt_lib0clear(&___nl__im__1);
#line 11
return ___nl__bool__6;
return false;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void enum_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT enum_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT enum_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
