
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nsystem.h"
#include "c_fe_lib.h"
#line 1 "nsystem.nl"

static ImmT *__const__f = NULL;
void nsystem_priv0__const__init();
ImmT nsystem_priv0__const__sim(int __nr);
ImmT nsystem_priv0__const__sing(int __nr);



ImmT  nsystem0time_microsec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0time_microsec");
ImmT  res = nsystem0time_microsec();
return res;
}
ImmT  nsystem0time_microsec() {
nsystem_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 9
c_rt_lib0move(&___nl__im__0, c_fe_lib0get_time());
#line 9
return ___nl__im__0;
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
return NULL;
return NULL;

}

ImmT  nsystem0get_pid0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0get_pid");
ImmT  res = nsystem0get_pid();
return res;
}
ImmT  nsystem0get_pid() {
nsystem_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 13
c_rt_lib0move(&___nl__im__0, c_fe_lib0get_pid());
#line 13
return ___nl__im__0;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
return NULL;
return NULL;

}

ImmT  nsystem0time0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0time");
ImmT  res = nsystem0time();
return res;
}
ImmT  nsystem0time() {
nsystem_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 17
c_rt_lib0move(&___nl__im__0, c_fe_lib0time());
#line 17
return ___nl__im__0;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return NULL;
return NULL;

}

ImmT  nsystem0localtime0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nsystem0localtime");
ImmT  *var0 = &(_tab[0]);
ImmT  res = nsystem0localtime(*var0);
return res;
}
ImmT  nsystem0localtime(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nsystem_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 21
c_rt_lib0move(&___nl__im__1, c_fe_lib0localtime(___nl__im__0));
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
return ___nl__im__1;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return NULL;
return NULL;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nsystem_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nsystem_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nsystem_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
