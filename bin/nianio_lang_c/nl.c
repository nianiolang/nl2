
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



ImmT  nl0is_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_array");
ImmT  *var0 = &(_tab[0]);
bool  res = nl0is_array(*var0);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nl0is_array(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 9
___nl__bool__2 = c_std_lib0is_array(___nl__im__0);
#line 9
if(___nl__bool__2){ goto label_4;}
#line 9
___nl__bool__1 = false;
#line 9
goto label_6;
#line 9
label_4:
;
#line 9
___nl__bool__1 = true;
#line 9
label_6:
;
#line 9
//clear ___nl__bool__2;
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
return ___nl__bool__1;
return false;

}

ImmT  nl0is_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_hash");
ImmT  *var0 = &(_tab[0]);
bool  res = nl0is_hash(*var0);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nl0is_hash(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 13
___nl__bool__2 = c_std_lib0is_hash(___nl__im__0);
#line 13
if(___nl__bool__2){ goto label_4;}
#line 13
___nl__bool__1 = false;
#line 13
goto label_6;
#line 13
label_4:
;
#line 13
___nl__bool__1 = true;
#line 13
label_6:
;
#line 13
//clear ___nl__bool__2;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
return ___nl__bool__1;
return false;

}

ImmT  nl0is_int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_int");
ImmT  *var0 = &(_tab[0]);
bool  res = nl0is_int(*var0);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nl0is_int(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 17
___nl__bool__2 = c_std_lib0is_int(___nl__im__0);
#line 17
if(___nl__bool__2){ goto label_4;}
#line 17
___nl__bool__1 = false;
#line 17
goto label_6;
#line 17
label_4:
;
#line 17
___nl__bool__1 = true;
#line 17
label_6:
;
#line 17
//clear ___nl__bool__2;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return ___nl__bool__1;
return false;

}

ImmT  nl0is_string0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_string");
ImmT  *var0 = &(_tab[0]);
bool  res = nl0is_string(*var0);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nl0is_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 21
___nl__bool__2 = c_std_lib0is_string(___nl__im__0);
#line 21
if(___nl__bool__2){ goto label_4;}
#line 21
___nl__bool__1 = false;
#line 21
goto label_6;
#line 21
label_4:
;
#line 21
___nl__bool__1 = true;
#line 21
label_6:
;
#line 21
//clear ___nl__bool__2;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
return ___nl__bool__1;
return false;

}

ImmT  nl0is_printable0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_printable");
ImmT  *var0 = &(_tab[0]);
bool  res = nl0is_printable(*var0);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nl0is_printable(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 25
___nl__bool__2 = c_std_lib0is_printable(___nl__im__0);
#line 25
if(___nl__bool__2){ goto label_4;}
#line 25
___nl__bool__1 = false;
#line 25
goto label_6;
#line 25
label_4:
;
#line 25
___nl__bool__1 = true;
#line 25
label_6:
;
#line 25
//clear ___nl__bool__2;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return ___nl__bool__1;
return false;

}

ImmT  nl0is_variant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_variant");
ImmT  *var0 = &(_tab[0]);
bool  res = nl0is_variant(*var0);
return c_rt_lib0bool_to_nl_native(res);
}
bool  nl0is_variant(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nl_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
#line 29
___nl__bool__2 = c_std_lib0is_variant(___nl__im__0);
#line 29
if(___nl__bool__2){ goto label_4;}
#line 29
___nl__bool__1 = false;
#line 29
goto label_6;
#line 29
label_4:
;
#line 29
___nl__bool__1 = true;
#line 29
label_6:
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
ImmT  res = nl0print(*var0);
return res;
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
ImmT  res = nl0debug_die(*var0);
return res;
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
