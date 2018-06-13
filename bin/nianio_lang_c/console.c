
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "console.h"
#include "ptd.h"
#include "string.h"
#include "c_olympic_io.h"
#line 1 "console.nl"

static ImmT *__const__f = NULL;
void console_priv0__const__init();
ImmT console_priv0__const__sim(int __nr);
ImmT console_priv0__const__sing(int __nr);



ImmT  console0println0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "console0println");
ImmT  *var0 = &(_tab[0]);
return console0println(*var0);
}
ImmT  console0println(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
console_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 10
c_rt_lib0move(&___nl__im__2, string0lf());
#line 10
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 10
c_rt_lib0clear(&___nl__im__2);
#line 10
c_rt_lib0delete(c_olympic_io0print(___nl__im__1));
#line 10
c_rt_lib0clear(&___nl__im__1);
#line 10
c_rt_lib0clear(&___nl__im__0);
#line 10
return NULL;
}

ImmT  console0print0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "console0print");
ImmT  *var0 = &(_tab[0]);
return console0print(*var0);
}
ImmT  console0print(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
console_priv0__const__init();
#line 14
c_rt_lib0delete(c_olympic_io0print(___nl__im__0));
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
return NULL;
}

ImmT  console0readln0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "console0readln");
return console0readln();
}
ImmT  console0readln() {
console_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 18
c_rt_lib0move(&___nl__im__0, c_olympic_io0readln());
#line 18
return ___nl__im__0;
}

INT  console0read_int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "console0read_int");
return console0read_int();
}
INT  console0read_int() {
console_priv0__const__init();
INT  ___nl__int__0 = 0;
#line 22
___nl__int__0 = c_olympic_io0read_int();
#line 22
return ___nl__int__0;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void console_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT console_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT console_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
