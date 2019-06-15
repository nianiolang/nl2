
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "own.h"
#include "ptd.h"
#include "ptd.h"
#line 1 "own.nl"

static ImmT *__const__f = NULL;
void own_priv0__const__init();
ImmT own_priv0__const__sim(int __nr);
ImmT own_priv0__const__sing(int __nr);



ImmT  own0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "own0arr");
ptd0meta_type0type *var0 = &(_tab[0]);
ptd0meta_type0type res = own0arr(*var0);
return res;
}
ptd0meta_type0type own0arr(ptd0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
own_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 4
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(1237), ___nl__im__0));
#line 4
c_rt_lib0clear(&___nl__im__0);
#line 4
return ___nl__im__1;
return NULL;

}

ImmT  own0rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "own0rec");
ImmT  *var0 = &(_tab[0]);
ptd0meta_type0type res = own0rec(*var0);
return res;
}
ptd0meta_type0type own0rec(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
own_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 8
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(1238), ___nl__im__0));
#line 8
c_rt_lib0clear(&___nl__im__0);
#line 8
return ___nl__im__1;
return NULL;

}

ImmT  own0hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "own0hash");
ptd0meta_type0type *var0 = &(_tab[0]);
ptd0meta_type0type res = own0hash(*var0);
return res;
}
ptd0meta_type0type own0hash(ptd0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
own_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 12
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(1239), ___nl__im__0));
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
return ___nl__im__1;
return NULL;

}

ImmT  own0var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "own0var");
ImmT  *var0 = &(_tab[0]);
ptd0meta_type0type res = own0var(*var0);
return res;
}
ptd0meta_type0type own0var(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
own_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 16
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 17
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 17
label_2:
;
#line 17
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 17
if(___nl__bool__3){ goto label_23;}
#line 17
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 17
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 19
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1240));
#line 19
___nl__bool__7 = !___nl__bool__7;
#line 19
if(___nl__bool__7){ goto label_12;}
#line 20
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(28)));
#line 21
goto label_15;
#line 21
label_12:
;
#line 22
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(27), ___nl__im__4));
#line 23
goto label_15;
#line 23
label_15:
;
#line 23
//clear ___nl__bool__7;
#line 24
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 24
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__1, ___nl__im__2, ___nl__im__8));
#line 24
c_rt_lib0clear(&___nl__im__8);
#line 24
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 25
goto label_2;
#line 25
label_23:
;
#line 26
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(319), ___get_global_string_const(109)));
#line 26
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 26
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(1241), ___nl__im__1));
#line 26
c_rt_lib0move(&___nl__im__9, ptd0ensure_only_static_do_not_touch_without_permission(___nl__im__10, ___nl__im__11));
#line 26
c_rt_lib0clear(&___nl__im__10);
#line 26
c_rt_lib0clear(&___nl__im__11);
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
//clear ___nl__bool__3;
#line 26
c_rt_lib0clear(&___nl__im__4);
#line 26
c_rt_lib0clear(&___nl__im__5);
#line 26
c_rt_lib0clear(&___nl__im__6);
#line 26
return ___nl__im__9;
return NULL;

}

ImmT  own0to_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "own0to_im");
ImmT  *var0 = &(_tab[0]);
ImmT  res = own0to_im(*var0);
return res;
}
ImmT  own0to_im(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
own_priv0__const__init();
#line 30
return ___nl__im__0;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
return NULL;
return NULL;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void own_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT own_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT own_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
