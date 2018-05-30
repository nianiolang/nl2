
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "hash.h"
#include "c_std_lib.h"
#line 1 "hash.nl"

static ImmT *__const__f = NULL;
void hash_priv0__const__init();
ImmT hash_priv0__const__sim(int __nr);
ImmT hash_priv0__const__sing(int __nr);



ImmT  hash0get_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0get_value");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return hash0get_value(var0, var1);
}
ImmT  hash0get_value(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
hash_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 9
c_rt_lib0move(&___nl__im__2, c_std_lib0hash_get_value(___nl__im__0, ___nl__im__1));
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
c_rt_lib0clear(&___nl__im__1);
#line 9
return ___nl__im__2;
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
c_rt_lib0clear(&___nl__im__1);
#line 9
c_rt_lib0clear(&___nl__im__2);
#line 9
return NULL;
}

bool  hash0has_key0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0has_key");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return hash0has_key(var0, var1);
}
bool  hash0has_key(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
hash_priv0__const__init();
bool  ___nl__bool__2 = false;
#line 13
___nl__bool__2 = c_std_lib0hash_has_key(___nl__im__0, ___nl__im__1);
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
return ___nl__bool__2;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
//clear ___nl__bool__2;
#line 13
return false;
}

ImmT  hash0set_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0set_value");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return hash0set_value(&var0, var1, var2);
}
ImmT  hash0set_value(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
hash_priv0__const__init();
#line 17
c_rt_lib0delete(c_std_lib0hash_set_value(___ref___im__0, ___nl__im__1, ___nl__im__2));
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
c_rt_lib0clear(&___nl__im__2);
#line 17
return NULL;
}

ImmT  hash0delete0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0delete");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return hash0delete(&var0, var1);
}
ImmT  hash0delete(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
hash_priv0__const__init();
#line 21
c_rt_lib0delete(c_std_lib0hash_delete(___ref___im__0, ___nl__im__1));
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return NULL;
}

INT  hash0size0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0size");
ImmT  var0 = (_tab[0]);
return hash0size(var0);
}
INT  hash0size(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
hash_priv0__const__init();
INT  ___nl__int__1 = 0;
#line 25
___nl__int__1 = c_std_lib0hash_size(___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return ___nl__int__1;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
//clear ___nl__int__1;
#line 25
return 0;
}

ImmT  hash0keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0keys");
ImmT  var0 = (_tab[0]);
return hash0keys(var0);
}
ImmT  hash0keys(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
hash_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 30
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 30
label_3:
#line 30
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 30
if(___nl__bool__3){ goto label_1;}
#line 30
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 30
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 31
c_rt_lib0delete(c_std_lib0array_push(&___nl__im__1, ___nl__im__2));
#line 31
label_2:
#line 32
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 32
goto label_3;
#line 32
label_1:
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 33
//clear ___nl__bool__3;
#line 33
c_rt_lib0clear(&___nl__im__4);
#line 33
c_rt_lib0clear(&___nl__im__5);
#line 33
return ___nl__im__1;
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 33
//clear ___nl__bool__3;
#line 33
c_rt_lib0clear(&___nl__im__4);
#line 33
c_rt_lib0clear(&___nl__im__5);
#line 33
return NULL;
}

ImmT  hash0values0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0values");
ImmT  var0 = (_tab[0]);
return hash0values(var0);
}
ImmT  hash0values(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
hash_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 37
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 38
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 38
label_3:
#line 38
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 38
if(___nl__bool__3){ goto label_1;}
#line 38
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 38
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 39
c_rt_lib0delete(c_std_lib0array_push(&___nl__im__1, ___nl__im__4));
#line 39
label_2:
#line 40
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 40
goto label_3;
#line 40
label_1:
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
//clear ___nl__bool__3;
#line 41
c_rt_lib0clear(&___nl__im__4);
#line 41
c_rt_lib0clear(&___nl__im__5);
#line 41
return ___nl__im__1;
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
//clear ___nl__bool__3;
#line 41
c_rt_lib0clear(&___nl__im__4);
#line 41
c_rt_lib0clear(&___nl__im__5);
#line 41
return NULL;
}

ImmT  hash0merge0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0merge");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return hash0merge(var0, var1);
}
ImmT  hash0merge(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
hash_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 45
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 46
c_rt_lib0delete(hash0add_all(&___nl__im__2, ___nl__im__1));
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
return ___nl__im__2;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
return NULL;
}

ImmT  hash0add_all0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0add_all");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return hash0add_all(&var0, var1);
}
ImmT  hash0add_all(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
hash_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 51
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__1));
#line 51
label_3:
#line 51
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 51
if(___nl__bool__3){ goto label_1;}
#line 51
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 51
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__2));
#line 51
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__2, ___nl__im__4));
#line 51
label_2:
#line 51
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 51
goto label_3;
#line 51
label_1:
#line 51
c_rt_lib0clear(&___nl__im__1);
#line 51
c_rt_lib0clear(&___nl__im__2);
#line 51
//clear ___nl__bool__3;
#line 51
c_rt_lib0clear(&___nl__im__4);
#line 51
c_rt_lib0clear(&___nl__im__5);
#line 51
return NULL;
}

ImmT  hash0set2keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "hash0set2keys");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
ImmT  var3 = (_tab[3]);
return hash0set2keys(&var0, var1, var2, var3);
}
ImmT  hash0set2keys(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
hash_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 55
___nl__bool__5 = hash0has_key((*___ref___im__0), ___nl__im__1);
#line 55
if(___nl__bool__5){ goto label_2;}
#line 55
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 55
goto label_1;
#line 55
label_2:
#line 55
c_rt_lib0move(&___nl__im__4, hash0get_value((*___ref___im__0), ___nl__im__1));
#line 55
label_1:
#line 55
//clear ___nl__bool__5;
#line 56
___nl__int__6 = 0;
#line 56
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 56
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__1, ___nl__im__7));
#line 56
//clear ___nl__int__6;
#line 56
c_rt_lib0clear(&___nl__im__7);
#line 57
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__2, ___nl__im__3));
#line 58
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
c_rt_lib0clear(&___nl__im__3);
#line 58
c_rt_lib0clear(&___nl__im__4);
#line 58
//clear ___nl__bool__5;
#line 58
//clear ___nl__int__6;
#line 58
c_rt_lib0clear(&___nl__im__7);
#line 58
return NULL;
}

ImmT  hash0has2keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0has2keys");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return hash0has2keys(var0, var1, var2);
}
ImmT  hash0has2keys(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
hash_priv0__const__init();
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 62
___nl__bool__3 = hash0has_key(___nl__im__0, ___nl__im__1);
#line 62
___nl__bool__4 = !___nl__bool__3;
#line 62
if(___nl__bool__4){ goto label_1;}
#line 62
c_rt_lib0move(&___nl__im__5, hash0get_value(___nl__im__0, ___nl__im__1));
#line 62
___nl__bool__3 = hash0has_key(___nl__im__5, ___nl__im__2);
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
label_1:
#line 62
//clear ___nl__bool__4;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 62
//clear ___nl__bool__3;
#line 62
//clear ___nl__bool__4;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
return ___nl__im__6;
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 62
//clear ___nl__bool__3;
#line 62
//clear ___nl__bool__4;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
c_rt_lib0clear(&___nl__im__6);
#line 62
return NULL;
}

ImmT  hash0get2keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0get2keys");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return hash0get2keys(var0, var1, var2);
}
ImmT  hash0get2keys(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
hash_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 66
c_rt_lib0move(&___nl__im__4, hash0get_value(___nl__im__0, ___nl__im__1));
#line 66
c_rt_lib0move(&___nl__im__3, hash0get_value(___nl__im__4, ___nl__im__2));
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
return ___nl__im__3;
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
return NULL;
}

ImmT  hash0set3keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "hash0set3keys");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
ImmT  var3 = (_tab[3]);
ImmT  var4 = (_tab[4]);
return hash0set3keys(&var0, var1, var2, var3, var4);
}
ImmT  hash0set3keys(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
hash_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 70
___nl__bool__6 = hash0has_key((*___ref___im__0), ___nl__im__1);
#line 70
if(___nl__bool__6){ goto label_2;}
#line 70
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 70
goto label_1;
#line 70
label_2:
#line 70
c_rt_lib0move(&___nl__im__5, hash0get_value((*___ref___im__0), ___nl__im__1));
#line 70
label_1:
#line 70
//clear ___nl__bool__6;
#line 71
___nl__int__7 = 0;
#line 71
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 71
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__1, ___nl__im__8));
#line 71
//clear ___nl__int__7;
#line 71
c_rt_lib0clear(&___nl__im__8);
#line 72
c_rt_lib0delete(hash0set2keys(&___nl__im__5, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 73
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
c_rt_lib0clear(&___nl__im__2);
#line 73
c_rt_lib0clear(&___nl__im__3);
#line 73
c_rt_lib0clear(&___nl__im__4);
#line 73
c_rt_lib0clear(&___nl__im__5);
#line 73
//clear ___nl__bool__6;
#line 73
//clear ___nl__int__7;
#line 73
c_rt_lib0clear(&___nl__im__8);
#line 73
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void hash_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT hash_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT hash_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
