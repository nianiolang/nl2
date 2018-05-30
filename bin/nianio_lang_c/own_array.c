
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "own_array.h"
#line 1 "own_array.nl"

static ImmT *__const__f = NULL;
void own_array_priv0__const__init();
ImmT own_array_priv0__const__sim(int __nr);
ImmT own_array_priv0__const__sing(int __nr);

void own_array0anon_type00ownarranon_type00im0push(anon_type00ownarranon_type00im *arr, ImmT  arg) {
if (arr->value == NULL) {
arr->value = alloc_mem(16*sizeof(ImmT ));
arr->capacity = 16;
arr->size = 0;
}
if (arr->size+1 == arr->capacity) {
arr->value = realloc_mem(arr->value, arr->capacity*sizeof(ImmT ), arr->capacity*2*sizeof(ImmT ));
arr->capacity *= 2;
}
arr->value[arr->size++] = arg;
}
ImmT  *own_array0anon_type00ownarranon_type00im0get_ptr(anon_type00ownarranon_type00im *arr, INT index) {
if (index < 0 || index >= arr->size) {
nl_die();
}
return &(arr->value[index]);
}
INT own_array0anon_type00ownarranon_type00im0len(anon_type00ownarranon_type00im *arr) {
return arr->size;
}
void own_array0anon_type00ownarranon_type00im0clean(anon_type00ownarranon_type00im arr) {
if (arr.value == NULL) return;
for (unsigned int i = 0; i < arr.size; i++) {
	;
}
free_mem(arr.value, sizeof(ImmT )*arr.capacity);
arr.value = NULL;
}
void own_array0anon_type00ownarranon_type00im0free(anon_type00ownarranon_type00im *arr) {
own_array0anon_type00ownarranon_type00im0clean(*arr);
free_mem(arr, sizeof(*arr));
}


INT  own_array0len(anon_type00ownarranon_type00im* ___ref___arr__0) {
own_array_priv0__const__init();
#line 2
return 0;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void own_array_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT own_array_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT own_array_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
