
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nl.h"
#include "c_std_lib.h"
#include "ptd.h"
#line 1 "nl.nl"

static ImmT *__const__f = NULL;
void nl_priv0__const__init();
ImmT nl_priv0__const__sim(int __nr);
ImmT nl_priv0__const__sing(int __nr);



bool  nl0is_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_array");
ImmT  *var0 = &(_tab[0]);
return nl0is_array(*var0);
}
bool  nl0is_array(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 9
___nl__bool__2 = c_std_lib0is_array(___nl__im__0);
#line 9
if(___nl__bool__2){ goto label_2;}
#line 9
___nl__bool__1 = false;
#line 9
goto label_1;
#line 9
label_2:
;
#line 9
___nl__bool__1 = true;
#line 9
label_1:
;
#line 9
//clear ___nl__bool__2;
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
return ___nl__bool__1;
return false;
}

bool  nl0is_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_hash");
ImmT  *var0 = &(_tab[0]);
return nl0is_hash(*var0);
}
bool  nl0is_hash(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 13
___nl__bool__2 = c_std_lib0is_hash(___nl__im__0);
#line 13
if(___nl__bool__2){ goto label_2;}
#line 13
___nl__bool__1 = false;
#line 13
goto label_1;
#line 13
label_2:
;
#line 13
___nl__bool__1 = true;
#line 13
label_1:
;
#line 13
//clear ___nl__bool__2;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
return ___nl__bool__1;
return false;
}

bool  nl0is_sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_sim");
ImmT  *var0 = &(_tab[0]);
return nl0is_sim(*var0);
}
bool  nl0is_sim(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 17
___nl__bool__2 = c_std_lib0is_sim(___nl__im__0);
#line 17
if(___nl__bool__2){ goto label_2;}
#line 17
___nl__bool__1 = false;
#line 17
goto label_1;
#line 17
label_2:
;
#line 17
___nl__bool__1 = true;
#line 17
label_1:
;
#line 17
//clear ___nl__bool__2;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return ___nl__bool__1;
return false;
}

bool  nl0is_variant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_variant");
ImmT  *var0 = &(_tab[0]);
return nl0is_variant(*var0);
}
bool  nl0is_variant(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 29
___nl__bool__2 = c_std_lib0is_variant(___nl__im__0);
#line 29
if(___nl__bool__2){ goto label_2;}
#line 29
___nl__bool__1 = false;
#line 29
goto label_1;
#line 29
label_2:
;
#line 29
___nl__bool__1 = true;
#line 29
label_1:
;
#line 29
//clear ___nl__bool__2;
#line 29
c_rt_lib0clear(&___nl__im__0);
#line 29
return ___nl__bool__1;
return false;
}

ImmT  nl0print0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0print");
ImmT  *var0 = &(_tab[0]);
return nl0print(*var0);
}
ImmT  nl0print(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
#line 33
c_rt_lib0delete(c_std_lib0print(___nl__im__0));
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
return NULL;
return NULL;
}

ImmT  nl0debug_die0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0debug_die");
ImmT  *var0 = &(_tab[0]);
return nl0debug_die(*var0);
}
ImmT  nl0debug_die(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 38
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 38
nl_die_arg(___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
return NULL;
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nl_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nl_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nl_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
