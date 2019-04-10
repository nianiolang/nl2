
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "compiler.h"
#include "c_fe_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "dfile.h"
#include "dfile_dbg.h"
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "pretty_printer.h"
#include "generator_c.h"
#include "generator_js.h"
#include "translator.h"
#include "nlasm.h"
#include "post_processing.h"
#include "post_processing_t.h"
#include "tc_types.h"
#include "type_checker.h"
#include "module_checker.h"
#include "compiler_lib.h"
#include "profile.h"
#include "nsystem.h"
#include "string_utils.h"
#include "reference_generator.h"
#include "tct.h"
#include "interpreter_wrapper.h"
#include "module_checker.h"
#include "compiler_lib.h"
#include "reference_generator.h"
#include "nast.h"
#include "tc_types.h"
#include "compiler.h"
#line 1 "compiler.nl"

static ImmT *__const__f = NULL;
void compiler_priv0__const__init();
ImmT compiler_priv0__const__sim(int __nr);
ImmT compiler_priv0__const__sing(int __nr);

void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE rec) {
generator_c0const_t0type0clean(rec.int0field);;
generator_c0const_t0type0clean(rec.string0field);;
generator_c0const_t0type0clean(rec.singleton0field);;
;
}
void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0free(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE *rec) {
compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
bool  *compiler0anon_type00ownhashanon_type00bool0get_ptr(anon_type00ownhashanon_type00bool *hash, ImmT key, bool create_if_not_exist) {
if (hash->values == NULL) {
	hash->capacity = 16;
	hash->size = 0;
	hash->values = alloc_mem(hash->capacity*sizeof(bool ));
	hash->keys = alloc_mem(hash->capacity*sizeof(ImmT ));
	memset(hash->values, 0, hash->capacity*sizeof(bool ));
	memset(hash->keys, 0, hash->capacity*sizeof(ImmT ));
} else if (2*hash->size >= hash->capacity) {
	INT  old_capacity = hash->capacity;
	ImmT  *old_keys = hash->keys;
	bool  *old_values = hash->values;
	hash->capacity *= 2;
	hash->values = alloc_mem(hash->capacity*sizeof(bool ));
	hash->keys = alloc_mem(hash->capacity*sizeof(ImmT ));
	memset(hash->values, 0, hash->capacity*sizeof(bool ));
	memset(hash->keys, 0, hash->capacity*sizeof(ImmT ));
	for (int i = 0; i < old_capacity; i++) {
		if (old_keys[i] != NULL) {
		unsigned nr = get_hash_key(old_keys[i]) % hash->capacity;
		while (hash->keys[nr] != NULL && !nl_compare_internal(hash->keys[nr], old_keys[i])) {
			nr = (nr + 1) % hash->capacity;
		}
		hash->keys[nr] = old_keys[i];
		hash->values[nr] = old_values[i];
		}
	}
free_mem(old_keys, old_capacity*sizeof(ImmT ));
free_mem(old_values, old_capacity*sizeof(bool ));
}
unsigned nr = get_hash_key(key) % hash->capacity;
while (hash->keys[nr] != NULL && !nl_compare_internal(hash->keys[nr], key)) {
	nr = (nr + 1) % hash->capacity;
}
if (hash->keys[nr] == NULL) {
	if (create_if_not_exist) {
		c_rt_lib0copy(&hash->keys[nr], key);
		hash->size++;
	} else {
		nl_die();
	}
}
return &(hash->values[nr]);
}
INT compiler0anon_type00ownhashanon_type00bool0next_iter(anon_type00ownhashanon_type00bool *hash, INT last_iter){
	INT iter = last_iter + 1;
	while (iter + 1 < hash->capacity && hash->keys[iter] == NULL) {
		iter++;
	}
	if (iter == hash->capacity || hash->keys[iter] == NULL) return -1;
	return iter;
}
void compiler0anon_type00ownhashanon_type00bool0clean(anon_type00ownhashanon_type00bool hash) {
for (unsigned int i = 0; i < hash.capacity; i++) {
	if (hash.keys[i] != NULL) {
		c_rt_lib0delete(hash.keys[i]);
		;
	}
}
free_mem(hash.values, sizeof(bool )*hash.capacity);
free_mem(hash.keys, sizeof(ImmT)*hash.capacity);
}
void compiler0anon_type00ownhashanon_type00bool0free(anon_type00ownhashanon_type00bool *hash) {
compiler0anon_type00ownhashanon_type00bool0clean(*hash);
free_mem(hash, sizeof(*hash));
}
void compiler0anon_type00ownarranon_type00im0push(anon_type00ownarranon_type00im *arr, ImmT  arg) {
if (arr->value == NULL) {
arr->value = alloc_mem(16*sizeof(ImmT ));
arr->capacity = 16;
arr->size = 0;
}
if (arr->size+1 == arr->capacity) {
arr->value = realloc_mem(arr->value, arr->capacity*sizeof(ImmT ), arr->capacity*2*sizeof(ImmT ));
arr->capacity *= 2;
} 
arr->value[arr->size] = NULL;
c_rt_lib0copy(&(arr->value[arr->size++]), arg);
}
ImmT  *compiler0anon_type00ownarranon_type00im0get_ptr(anon_type00ownarranon_type00im *arr, INT index) {
if (index < 0 || index >= arr->size) {
nl_die();
}
return &(arr->value[index]);
}
INT compiler0anon_type00ownarranon_type00im0len(anon_type00ownarranon_type00im *arr) {
return arr->size;
}
void compiler0anon_type00ownarranon_type00im0clean(anon_type00ownarranon_type00im arr) {
if (arr.value == NULL) return;
for (unsigned int i = 0; i < arr.size; i++) {
	c_rt_lib0delete(arr.value[i]);
}
free_mem(arr.value, sizeof(ImmT )*arr.capacity);
}
void compiler0anon_type00ownarranon_type00im0free(anon_type00ownarranon_type00im *arr) {
compiler0anon_type00ownarranon_type00im0clean(*arr);
free_mem(arr, sizeof(*arr));
}
ImmT  compiler_priv0get_dir_cache_name();
ImmT  compiler_priv0get_dir_pretty_name();
ImmT  compiler_priv0get_default_deref_file();
ImmT  compiler_priv0get_default_math_file();
ImmT  compiler_priv0get_profile_file_name(ImmT  ___nl__im__0);
ImmT  compiler_priv0get_module_name(ImmT  ___nl__im__0);
bool  compiler_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  compiler_priv0get_out_ext(compiler0language_t0type ___nl__im__0);
ImmT  compiler_priv0mk_path(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  compiler_priv0mk_path_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,compiler0input_type0type ___nl__im__2);
ImmT  compiler_priv0get_all_nianio_file(ImmT  ___nl__im__0);
compiler0module_t0type compiler_priv0get_files_to_parse(compiler0input_type0type ___nl__im__0);
ImmT  compiler_priv0parse_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,compiler0errors_group_t0type* ___ref___im__2);
ImmT  compiler_priv0get_mathematical_func(compiler0input_type0type ___nl__im__0);
ImmT  compiler_priv0compile_ide(compiler0input_type0type ___nl__im__0);
INT  compiler_priv0compile_strict_file(compiler0input_type0type ___nl__im__0);
ImmT  compiler_priv0construct_error_message(compiler_lib0error_t0type ___nl__im__0,ImmT  ___nl__im__1);
INT  compiler_priv0show_and_count_errors(compiler0errors_group_t0type ___nl__im__0,compiler0input_type0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  compiler_priv0translate(ImmT  ___nl__im__0,ImmT  ___nl__im__1,post_processing_t0state_t0type* ___ref___im__2);
ImmT  compiler_priv0check_modules(ImmT * ___ref___im__0,compiler0errors_group_t0type* ___ref___im__1,compiler0deref_t0type ___nl__im__2,bool  ___nl__bool__3);
ImmT  compiler_priv0serialize_deref(tc_types0deref_types0type ___nl__im__0,reference_generator0refs0type ___nl__im__1);
reference_generator0refs0type compiler_priv0process_deref(tc_types0deref_types0type ___nl__im__0);
ImmT  compiler_priv0try_save_file(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  compiler_priv0generate_modules_to_files(ImmT  ___nl__im__0,compiler0module_t0type ___nl__im__1,ImmT  ___nl__im__2,generator_c0state_t0type* ___ref___rec__3,compiler0language_t0type ___nl__im__4);
compiler0file_t0type compiler_priv0save_module_to_file(nast0module_t0type ___nl__im__0,compiler0destination_t0type ___nl__im__1);
ImmT  compiler_priv0get_dir(ImmT  ___nl__im__0);
compiler0input_type0type compiler_priv0parse_command_line_args(ImmT  ___nl__im__0);


ImmT compiler_priv0get_dir_cache_name(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(0);
}
ImmT compiler_priv0get_dir_cache_name0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 34
c_rt_lib0move(&___nl__im__0,___get_global_string_const(41));
#line 34
return ___nl__im__0;
return NULL;

}

ImmT compiler_priv0get_dir_pretty_name(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(1);
}
ImmT compiler_priv0get_dir_pretty_name0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 38
c_rt_lib0move(&___nl__im__0,___get_global_string_const(42));
#line 38
return ___nl__im__0;
return NULL;

}

ImmT compiler_priv0get_default_deref_file(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(2);
}
ImmT compiler_priv0get_default_deref_file0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 42
c_rt_lib0move(&___nl__im__0,___get_global_string_const(43));
#line 42
return ___nl__im__0;
return NULL;

}

ImmT compiler_priv0get_default_math_file(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(3);
}
ImmT compiler_priv0get_default_math_file0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 46
c_rt_lib0move(&___nl__im__0,___get_global_string_const(44));
#line 46
return ___nl__im__0;
return NULL;

}

ImmT  compiler0parse_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0parse_check_t");
ImmT  res = compiler0parse_check_t();
return res;
}
ImmT compiler0parse_check_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(4);
}
ImmT compiler0parse_check_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 51
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_string_const(45), ___get_global_string_const(46)));
#line 51
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 51
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 51
c_rt_lib0clear(&___nl__im__3);
#line 52
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 52
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_string_const(47), ___get_global_string_const(48)));
#line 53
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(49), ___nl__im__2, ___get_global_string_const(50), ___nl__im__4, ___get_global_string_const(51), ___nl__im__6));
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0clear(&___nl__im__6);
#line 53
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
return ___nl__im__0;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
return NULL;
return NULL;

}

ImmT  compiler0errors_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_hash_t");
ImmT  res = compiler0errors_hash_t();
return res;
}
ImmT compiler0errors_hash_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(5);
}
ImmT compiler0errors_hash_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_string_const(52), ___get_global_string_const(53)));
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 58
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
return ___nl__im__0;
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
return NULL;
return NULL;

}

ImmT  compiler0errors_group_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_group_t");
ImmT  res = compiler0errors_group_t();
return res;
}
ImmT compiler0errors_group_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(6);
}
ImmT compiler0errors_group_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 63
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(54), ___get_global_string_const(55)));
#line 63
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 64
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(54), ___get_global_string_const(55)));
#line 64
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 65
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(54), ___get_global_string_const(55)));
#line 65
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(54), ___get_global_string_const(55)));
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 67
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(module_checker0ret_t0ptr, ___get_global_string_const(56), ___get_global_string_const(57)));
#line 67
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 67
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__2, ___get_global_string_const(59), ___nl__im__3, ___get_global_string_const(60), ___nl__im__4, ___get_global_string_const(61), ___nl__im__5, ___get_global_string_const(62), ___nl__im__6));
#line 67
c_rt_lib0clear(&___nl__im__2);
#line 67
c_rt_lib0clear(&___nl__im__3);
#line 67
c_rt_lib0clear(&___nl__im__4);
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 67
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 67
c_rt_lib0clear(&___nl__im__1);
#line 67
return ___nl__im__0;
#line 67
c_rt_lib0clear(&___nl__im__0);
#line 67
return NULL;
return NULL;

}

ImmT  compiler0language_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0language_t");
ImmT  res = compiler0language_t();
return res;
}
ImmT compiler0language_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(7);
}
ImmT compiler0language_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 73
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 74
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 75
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 75
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(1, ___get_global_string_const(63), ___nl__im__6));
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 75
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 76
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 77
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(64), ___nl__im__2, ___get_global_string_const(65), ___nl__im__3, ___get_global_string_const(66), ___nl__im__4, ___get_global_string_const(67), ___nl__im__7, ___get_global_string_const(68), ___nl__im__8, ___get_global_string_const(69), ___nl__im__9));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__3);
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0clear(&___nl__im__7);
#line 78
c_rt_lib0clear(&___nl__im__8);
#line 78
c_rt_lib0clear(&___nl__im__9);
#line 78
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return ___nl__im__0;
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
return NULL;
return NULL;

}

ImmT  compiler0destination_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0destination_t");
ImmT  res = compiler0destination_t();
return res;
}
ImmT compiler0destination_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(8);
}
ImmT compiler0destination_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 84
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 85
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 85
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 85
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__5, ___get_global_string_const(70), ___nl__im__6));
#line 85
c_rt_lib0clear(&___nl__im__5);
#line 85
c_rt_lib0clear(&___nl__im__6);
#line 85
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 85
c_rt_lib0clear(&___nl__im__4);
#line 86
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 87
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 88
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 89
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(7, ___get_global_string_const(64), ___nl__im__2, ___get_global_string_const(65), ___nl__im__3, ___get_global_string_const(67), ___nl__im__7, ___get_global_string_const(68), ___nl__im__8, ___get_global_string_const(66), ___nl__im__9, ___get_global_string_const(71), ___nl__im__10, ___get_global_string_const(69), ___nl__im__11));
#line 90
c_rt_lib0clear(&___nl__im__2);
#line 90
c_rt_lib0clear(&___nl__im__3);
#line 90
c_rt_lib0clear(&___nl__im__7);
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0clear(&___nl__im__9);
#line 90
c_rt_lib0clear(&___nl__im__10);
#line 90
c_rt_lib0clear(&___nl__im__11);
#line 90
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 90
c_rt_lib0clear(&___nl__im__1);
#line 90
return ___nl__im__0;
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
return NULL;
return NULL;

}

ImmT  compiler0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0module_t");
ImmT  res = compiler0module_t();
return res;
}
ImmT compiler0module_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(9);
}
ImmT compiler0module_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 95
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_string_const(54), ___get_global_string_const(72)));
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 95
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(74), ___nl__im__4));
#line 95
c_rt_lib0clear(&___nl__im__3);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
return ___nl__im__0;
#line 95
c_rt_lib0clear(&___nl__im__0);
#line 95
return NULL;
return NULL;

}

ImmT  compiler0deref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0deref_t");
ImmT  res = compiler0deref_t();
return res;
}
ImmT compiler0deref_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(10);
}
ImmT compiler0deref_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 99
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 99
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 99
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(75), ___nl__im__2, ___get_global_string_const(76), ___nl__im__3));
#line 99
c_rt_lib0clear(&___nl__im__2);
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 99
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 99
c_rt_lib0clear(&___nl__im__1);
#line 99
return ___nl__im__0;
#line 99
c_rt_lib0clear(&___nl__im__0);
#line 99
return NULL;
return NULL;

}

ImmT  compiler0try_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0try_t");
ImmT  res = compiler0try_t();
return res;
}
ImmT compiler0try_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(11);
}
ImmT compiler0try_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 103
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 103
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 103
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__2, ___get_global_string_const(78), ___nl__im__3));
#line 103
c_rt_lib0clear(&___nl__im__2);
#line 103
c_rt_lib0clear(&___nl__im__3);
#line 103
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
return ___nl__im__0;
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
return NULL;
return NULL;

}

ImmT  compiler0input_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0input_type");
ImmT  res = compiler0input_type();
return res;
}
ImmT compiler0input_type(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(12);
}
ImmT compiler0input_type0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 108
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 108
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 108
c_rt_lib0clear(&___nl__im__3);
#line 109
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 110
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_string_const(54), ___get_global_string_const(79)));
#line 110
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 112
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 113
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 114
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 115
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 116
c_rt_lib0move(&___nl__im__12, ptd0none());
#line 116
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(80), ___nl__im__8, ___get_global_string_const(81), ___nl__im__9, ___get_global_string_const(82), ___nl__im__10, ___get_global_string_const(83), ___nl__im__11, ___get_global_string_const(84), ___nl__im__12));
#line 116
c_rt_lib0clear(&___nl__im__8);
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
c_rt_lib0clear(&___nl__im__10);
#line 116
c_rt_lib0clear(&___nl__im__11);
#line 116
c_rt_lib0clear(&___nl__im__12);
#line 116
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 116
c_rt_lib0clear(&___nl__im__7);
#line 118
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 119
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 119
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 119
c_rt_lib0move(&___nl__im__18, ptd0none());
#line 119
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 119
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(4, ___get_global_string_const(85), ___nl__im__16, ___get_global_string_const(86), ___nl__im__17, ___get_global_string_const(87), ___nl__im__18, ___get_global_string_const(88), ___nl__im__19));
#line 119
c_rt_lib0clear(&___nl__im__16);
#line 119
c_rt_lib0clear(&___nl__im__17);
#line 119
c_rt_lib0clear(&___nl__im__18);
#line 119
c_rt_lib0clear(&___nl__im__19);
#line 119
c_rt_lib0move(&___nl__im__14, ptd0var(___nl__im__15));
#line 119
c_rt_lib0clear(&___nl__im__15);
#line 120
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_string_const(54), ___get_global_string_const(89)));
#line 120
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 121
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(90), ___nl__im__23, ___get_global_string_const(91), ___nl__im__24));
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0move(&___nl__im__21, ptd0var(___nl__im__22));
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 122
c_rt_lib0move(&___nl__im__25, ptd0bool());
#line 123
c_rt_lib0move(&___nl__im__26, ptd0bool());
#line 123
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(92), ___nl__im__2, ___get_global_string_const(93), ___nl__im__4, ___get_global_string_const(94), ___nl__im__5, ___get_global_string_const(95), ___nl__im__6, ___get_global_string_const(96), ___nl__im__13, ___get_global_string_const(97), ___nl__im__14, ___get_global_string_const(98), ___nl__im__20, ___get_global_string_const(99), ___nl__im__21, ___get_global_string_const(100), ___nl__im__25, ___get_global_string_const(101), ___nl__im__26));
#line 123
c_rt_lib0clear(&___nl__im__2);
#line 123
c_rt_lib0clear(&___nl__im__4);
#line 123
c_rt_lib0clear(&___nl__im__5);
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
c_rt_lib0clear(&___nl__im__13);
#line 123
c_rt_lib0clear(&___nl__im__14);
#line 123
c_rt_lib0clear(&___nl__im__20);
#line 123
c_rt_lib0clear(&___nl__im__21);
#line 123
c_rt_lib0clear(&___nl__im__25);
#line 123
c_rt_lib0clear(&___nl__im__26);
#line 123
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 123
c_rt_lib0clear(&___nl__im__1);
#line 123
return ___nl__im__0;
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
return NULL;
return NULL;

}

ImmT  compiler0file_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0file_t");
ImmT  res = compiler0file_t();
return res;
}
ImmT compiler0file_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(13);
}
ImmT compiler0file_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 128
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 128
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 128
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__2, ___get_global_string_const(77), ___nl__im__3));
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 128
c_rt_lib0clear(&___nl__im__3);
#line 128
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
return ___nl__im__0;
#line 128
c_rt_lib0clear(&___nl__im__0);
#line 128
return NULL;
return NULL;

}

ImmT  compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "compiler0compile");
ImmT  *var0 = &(_tab[0]);
INT  res = compiler0compile(*var0);
return c_rt_lib0int_new(res);
}
INT  compiler0compile(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 132
c_rt_lib0move(&___nl__im__1, compiler_priv0parse_command_line_args(___nl__im__0));
#line 133
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(93)));
#line 133
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__2));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 134
___nl__int__3 = 0;
#line 135
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 135
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(85));
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
___nl__bool__4 = !___nl__bool__4;
#line 135
if(___nl__bool__4){ goto label_15;}
#line 136
c_rt_lib0move(&___nl__im__6,___get_global_string_const(102));
#line 136
c_rt_lib0delete(c_fe_lib0print(___nl__im__6));
#line 136
c_rt_lib0clear(&___nl__im__6);
#line 137
___nl__int__3 = compiler_priv0compile_strict_file(___nl__im__1);
#line 138
goto label_48;
#line 138
label_15:
;
#line 138
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(87));
#line 138
c_rt_lib0clear(&___nl__im__7);
#line 138
if(___nl__bool__4){ goto label_23;}
#line 138
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(88));
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
label_23:
;
#line 138
___nl__bool__4 = !___nl__bool__4;
#line 138
if(___nl__bool__4){ goto label_32;}
#line 139
c_rt_lib0move(&___nl__im__9,___get_global_string_const(103));
#line 139
c_rt_lib0delete(c_fe_lib0print(___nl__im__9));
#line 139
c_rt_lib0clear(&___nl__im__9);
#line 140
c_rt_lib0delete(compiler_priv0compile_ide(___nl__im__1));
#line 141
___nl__int__3 = 0;
#line 142
goto label_48;
#line 142
label_32:
;
#line 142
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 142
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(86));
#line 142
c_rt_lib0clear(&___nl__im__10);
#line 142
___nl__bool__4 = !___nl__bool__4;
#line 142
if(___nl__bool__4){ goto label_44;}
#line 143
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(92)));
#line 143
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 143
___nl__int__3 = interpreter_wrapper0exec_interpreter(___nl__im__11, ___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__11);
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 144
goto label_48;
#line 144
label_44:
;
#line 145
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 145
nl_die_arg(___nl__im__13);
#line 146
goto label_48;
#line 146
label_48:
;
#line 146
//clear ___nl__bool__4;
#line 146
c_rt_lib0clear(&___nl__im__13);
#line 147
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(101)));
#line 147
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 147
c_rt_lib0clear(&___nl__im__15);
#line 147
___nl__bool__14 = !___nl__bool__14;
#line 147
if(___nl__bool__14){ goto label_66;}
#line 148
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(93)));
#line 148
c_rt_lib0move(&___nl__im__18,___get_global_string_const(104));
#line 148
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 148
c_rt_lib0clear(&___nl__im__17);
#line 148
c_rt_lib0clear(&___nl__im__18);
#line 149
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__16));
#line 150
c_rt_lib0move(&___nl__im__19, compiler_priv0get_profile_file_name(___nl__im__16));
#line 150
c_rt_lib0delete(profile0save(___nl__im__19));
#line 150
c_rt_lib0clear(&___nl__im__19);
#line 151
goto label_66;
#line 151
label_66:
;
#line 151
//clear ___nl__bool__14;
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
return ___nl__int__3;
return 0;

}

ImmT  compiler_priv0get_profile_file_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
#line 156
c_rt_lib0move(&___nl__im__2,___get_global_string_const(105));
#line 156
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 157
c_rt_lib0move(&___nl__im__4, nsystem0time());
#line 157
c_rt_lib0move(&___nl__im__3, nsystem0localtime(___nl__im__4));
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 158
c_rt_lib0move(&___nl__im__5, nsystem0get_pid());
#line 159
c_rt_lib0move(&___nl__im__6, nsystem0time_microsec());
#line 160
___nl__int__7 = 5;
#line 160
___nl__int__8 = 0;
#line 160
___nl__int__9 = 1;
#line 160
label_11:
;
#line 160
___nl__bool__10 = ___nl__int__8 >= ___nl__int__7;
#line 160
if(___nl__bool__10){ goto label_27;}
#line 161
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__3, ___nl__int__8));
#line 161
___nl__int__13 = 2;
#line 161
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 161
c_rt_lib0move(&___nl__im__11, string_utils0int2str(___nl__im__12, ___nl__im__14));
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
//clear ___nl__int__13;
#line 161
c_rt_lib0clear(&___nl__im__14);
#line 161
c_rt_lib0copy(&___nl__im__15, ___nl__im__11);
#line 161
c_rt_lib0array_set(&___nl__im__3, ___nl__int__8, ___nl__im__15);
#line 161
c_rt_lib0clear(&___nl__im__11);
#line 161
c_rt_lib0clear(&___nl__im__15);
#line 162
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 162
goto label_11;
#line 162
label_27:
;
#line 163
___nl__int__19 = 1;
#line 163
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 163
//clear ___nl__int__19;
#line 163
___nl__int__20 = 1000;
#line 163
___nl__int__21 = getIntFromImm(___nl__im__18);
#line 163
___nl__int__17 = ___nl__int__21 / ___nl__int__20;
#line 163
c_rt_lib0clear(&___nl__im__18);
#line 163
//clear ___nl__int__20;
#line 163
//clear ___nl__int__21;
#line 163
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__17));
#line 163
___nl__int__23 = 3;
#line 163
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__23));
#line 163
c_rt_lib0move(&___nl__im__16, string_utils0int2str(___nl__im__22, ___nl__im__24));
#line 163
//clear ___nl__int__17;
#line 163
c_rt_lib0clear(&___nl__im__22);
#line 163
//clear ___nl__int__23;
#line 163
c_rt_lib0clear(&___nl__im__24);
#line 164
c_rt_lib0move(&___nl__im__39,___get_global_string_const(106));
#line 164
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__1, ___nl__im__39));
#line 164
c_rt_lib0clear(&___nl__im__39);
#line 164
___nl__int__41 = 5;
#line 164
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__3, ___nl__int__41));
#line 164
//clear ___nl__int__41;
#line 164
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__40));
#line 164
c_rt_lib0clear(&___nl__im__38);
#line 164
c_rt_lib0clear(&___nl__im__40);
#line 164
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 164
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__42));
#line 164
c_rt_lib0clear(&___nl__im__37);
#line 164
c_rt_lib0clear(&___nl__im__42);
#line 164
___nl__int__44 = 4;
#line 164
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__3, ___nl__int__44));
#line 164
//clear ___nl__int__44;
#line 164
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 164
c_rt_lib0clear(&___nl__im__36);
#line 164
c_rt_lib0clear(&___nl__im__43);
#line 164
c_rt_lib0move(&___nl__im__45,___get_global_string_const(36));
#line 164
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__45));
#line 164
c_rt_lib0clear(&___nl__im__35);
#line 164
c_rt_lib0clear(&___nl__im__45);
#line 164
___nl__int__47 = 3;
#line 164
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__3, ___nl__int__47));
#line 164
//clear ___nl__int__47;
#line 164
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__46));
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 164
c_rt_lib0clear(&___nl__im__46);
#line 164
c_rt_lib0move(&___nl__im__48,___get_global_string_const(107));
#line 164
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__48));
#line 164
c_rt_lib0clear(&___nl__im__33);
#line 164
c_rt_lib0clear(&___nl__im__48);
#line 164
___nl__int__50 = 2;
#line 164
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__3, ___nl__int__50));
#line 164
//clear ___nl__int__50;
#line 164
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__49));
#line 164
c_rt_lib0clear(&___nl__im__32);
#line 164
c_rt_lib0clear(&___nl__im__49);
#line 164
___nl__int__52 = 1;
#line 164
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__3, ___nl__int__52));
#line 164
//clear ___nl__int__52;
#line 164
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__51));
#line 164
c_rt_lib0clear(&___nl__im__31);
#line 164
c_rt_lib0clear(&___nl__im__51);
#line 164
___nl__int__54 = 0;
#line 164
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__3, ___nl__int__54));
#line 164
//clear ___nl__int__54;
#line 164
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__53));
#line 164
c_rt_lib0clear(&___nl__im__30);
#line 164
c_rt_lib0clear(&___nl__im__53);
#line 164
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__16));
#line 164
c_rt_lib0clear(&___nl__im__29);
#line 164
c_rt_lib0move(&___nl__im__55,___get_global_string_const(107));
#line 164
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__55));
#line 164
c_rt_lib0clear(&___nl__im__28);
#line 164
c_rt_lib0clear(&___nl__im__55);
#line 164
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__5));
#line 164
c_rt_lib0clear(&___nl__im__27);
#line 165
c_rt_lib0move(&___nl__im__56,___get_global_string_const(108));
#line 165
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__56));
#line 165
c_rt_lib0clear(&___nl__im__26);
#line 165
c_rt_lib0clear(&___nl__im__56);
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
c_rt_lib0clear(&___nl__im__1);
#line 165
c_rt_lib0clear(&___nl__im__3);
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
//clear ___nl__int__7;
#line 165
//clear ___nl__int__8;
#line 165
//clear ___nl__int__9;
#line 165
//clear ___nl__bool__10;
#line 165
c_rt_lib0clear(&___nl__im__16);
#line 165
return ___nl__im__25;
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
c_rt_lib0clear(&___nl__im__1);
#line 165
c_rt_lib0clear(&___nl__im__3);
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
//clear ___nl__int__7;
#line 165
//clear ___nl__int__8;
#line 165
//clear ___nl__int__9;
#line 165
//clear ___nl__bool__10;
#line 165
c_rt_lib0clear(&___nl__im__16);
#line 165
c_rt_lib0clear(&___nl__im__25);
#line 165
return NULL;
return NULL;

}

ImmT  compiler_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
#line 169
___nl__int__2 = string0length(___nl__im__0);
#line 169
___nl__int__3 = 1;
#line 169
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 169
//clear ___nl__int__2;
#line 169
//clear ___nl__int__3;
#line 170
label_5:
;
#line 170
___nl__int__7 = 0;
#line 170
___nl__bool__4 = ___nl__int__1 >= ___nl__int__7;
#line 170
//clear ___nl__int__7;
#line 170
___nl__bool__6 = !___nl__bool__4;
#line 170
if(___nl__bool__6){ goto label_18;}
#line 170
___nl__int__9 = 1;
#line 170
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 170
//clear ___nl__int__9;
#line 170
c_rt_lib0move(&___nl__im__10,___get_global_string_const(105));
#line 170
___nl__bool__4 = c_rt_lib0ne(___nl__im__8, ___nl__im__10);
#line 170
c_rt_lib0clear(&___nl__im__8);
#line 170
c_rt_lib0clear(&___nl__im__10);
#line 170
label_18:
;
#line 170
//clear ___nl__bool__6;
#line 170
___nl__bool__5 = !___nl__bool__4;
#line 170
if(___nl__bool__5){ goto label_29;}
#line 170
___nl__int__12 = 1;
#line 170
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__12));
#line 170
//clear ___nl__int__12;
#line 170
c_rt_lib0move(&___nl__im__13,___get_global_string_const(109));
#line 170
___nl__bool__4 = c_rt_lib0ne(___nl__im__11, ___nl__im__13);
#line 170
c_rt_lib0clear(&___nl__im__11);
#line 170
c_rt_lib0clear(&___nl__im__13);
#line 170
label_29:
;
#line 170
//clear ___nl__bool__5;
#line 170
___nl__bool__4 = !___nl__bool__4;
#line 170
if(___nl__bool__4){ goto label_54;}
#line 171
___nl__int__16 = 1;
#line 171
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__16));
#line 171
//clear ___nl__int__16;
#line 171
c_rt_lib0move(&___nl__im__17,___get_global_string_const(110));
#line 171
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__17);
#line 171
c_rt_lib0clear(&___nl__im__15);
#line 171
c_rt_lib0clear(&___nl__im__17);
#line 171
___nl__bool__14 = !___nl__bool__14;
#line 171
if(___nl__bool__14){ goto label_48;}
#line 172
___nl__int__18 = 1;
#line 172
___nl__int__1 = ___nl__int__1 - ___nl__int__18;
#line 172
//clear ___nl__int__18;
#line 173
//clear ___nl__bool__14;
#line 173
goto label_54;
#line 174
goto label_48;
#line 174
label_48:
;
#line 174
//clear ___nl__bool__14;
#line 175
___nl__int__19 = 1;
#line 175
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 175
//clear ___nl__int__19;
#line 176
goto label_5;
#line 176
label_54:
;
#line 177
c_rt_lib0move(&___nl__im__20,___get_global_string_const(36));
#line 178
label_56:
;
#line 178
___nl__int__24 = 0;
#line 178
___nl__bool__21 = ___nl__int__1 >= ___nl__int__24;
#line 178
//clear ___nl__int__24;
#line 178
___nl__bool__23 = !___nl__bool__21;
#line 178
if(___nl__bool__23){ goto label_69;}
#line 178
___nl__int__26 = 1;
#line 178
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__26));
#line 178
//clear ___nl__int__26;
#line 178
c_rt_lib0move(&___nl__im__27,___get_global_string_const(105));
#line 178
___nl__bool__21 = c_rt_lib0ne(___nl__im__25, ___nl__im__27);
#line 178
c_rt_lib0clear(&___nl__im__25);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
label_69:
;
#line 178
//clear ___nl__bool__23;
#line 178
___nl__bool__22 = !___nl__bool__21;
#line 178
if(___nl__bool__22){ goto label_80;}
#line 178
___nl__int__29 = 1;
#line 178
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__29));
#line 178
//clear ___nl__int__29;
#line 178
c_rt_lib0move(&___nl__im__30,___get_global_string_const(109));
#line 178
___nl__bool__21 = c_rt_lib0ne(___nl__im__28, ___nl__im__30);
#line 178
c_rt_lib0clear(&___nl__im__28);
#line 178
c_rt_lib0clear(&___nl__im__30);
#line 178
label_80:
;
#line 178
//clear ___nl__bool__22;
#line 178
___nl__bool__21 = !___nl__bool__21;
#line 178
if(___nl__bool__21){ goto label_93;}
#line 179
___nl__int__32 = 1;
#line 179
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__32));
#line 179
//clear ___nl__int__32;
#line 179
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__31, ___nl__im__20));
#line 179
c_rt_lib0clear(&___nl__im__31);
#line 180
___nl__int__33 = 1;
#line 180
___nl__int__1 = ___nl__int__1 - ___nl__int__33;
#line 180
//clear ___nl__int__33;
#line 181
goto label_56;
#line 181
label_93:
;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
//clear ___nl__int__1;
#line 182
//clear ___nl__bool__4;
#line 182
//clear ___nl__bool__21;
#line 182
return ___nl__im__20;
return NULL;

}

bool  compiler_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
#line 186
___nl__int__3 = string0length(___nl__im__1);
#line 186
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 186
//clear ___nl__int__3;
#line 187
___nl__int__5 = string0length(___nl__im__0);
#line 187
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 187
___nl__bool__4 = ___nl__int__5 <= ___nl__int__6;
#line 187
//clear ___nl__int__5;
#line 187
//clear ___nl__int__6;
#line 187
___nl__bool__4 = !___nl__bool__4;
#line 187
if(___nl__bool__4){ goto label_17;}
#line 187
___nl__bool__7 = false;
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
c_rt_lib0clear(&___nl__im__2);
#line 187
//clear ___nl__bool__4;
#line 187
return ___nl__bool__7;
#line 187
goto label_17;
#line 187
label_17:
;
#line 187
//clear ___nl__bool__4;
#line 187
//clear ___nl__bool__7;
#line 188
___nl__int__9 = string0length(___nl__im__0);
#line 188
___nl__int__10 = getIntFromImm(___nl__im__2);
#line 188
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 188
//clear ___nl__int__9;
#line 188
//clear ___nl__int__10;
#line 188
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 188
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__11));
#line 188
//clear ___nl__int__8;
#line 188
//clear ___nl__int__11;
#line 189
___nl__bool__12 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 189
c_rt_lib0clear(&___nl__im__0);
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
c_rt_lib0clear(&___nl__im__2);
#line 189
return ___nl__bool__12;
return false;

}

ImmT  compiler_priv0get_out_ext(compiler0language_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 193
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(64));
#line 193
if(___nl__bool__1){ goto label_15;}
#line 195
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(65));
#line 195
if(___nl__bool__1){ goto label_22;}
#line 197
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(66));
#line 197
if(___nl__bool__1){ goto label_30;}
#line 199
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(68));
#line 199
if(___nl__bool__1){ goto label_43;}
#line 201
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(67));
#line 201
if(___nl__bool__1){ goto label_55;}
#line 203
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(69));
#line 203
if(___nl__bool__1){ goto label_68;}
#line 203
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 203
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 203
nl_die_arg(___nl__im__2);
#line 193
label_15:
;
#line 194
c_rt_lib0move(&___nl__im__3,___get_global_string_const(111));
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
//clear ___nl__bool__1;
#line 194
c_rt_lib0clear(&___nl__im__2);
#line 194
return ___nl__im__3;
#line 195
goto label_82;
#line 195
label_22:
;
#line 196
c_rt_lib0move(&___nl__im__4,___get_global_string_const(112));
#line 196
c_rt_lib0clear(&___nl__im__0);
#line 196
//clear ___nl__bool__1;
#line 196
c_rt_lib0clear(&___nl__im__2);
#line 196
c_rt_lib0clear(&___nl__im__3);
#line 196
return ___nl__im__4;
#line 197
goto label_82;
#line 197
label_30:
;
#line 197
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(66)));
#line 197
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 198
c_rt_lib0move(&___nl__im__7,___get_global_string_const(113));
#line 198
c_rt_lib0clear(&___nl__im__0);
#line 198
//clear ___nl__bool__1;
#line 198
c_rt_lib0clear(&___nl__im__2);
#line 198
c_rt_lib0clear(&___nl__im__3);
#line 198
c_rt_lib0clear(&___nl__im__4);
#line 198
c_rt_lib0clear(&___nl__im__5);
#line 198
c_rt_lib0clear(&___nl__im__6);
#line 198
return ___nl__im__7;
#line 199
goto label_82;
#line 199
label_43:
;
#line 200
c_rt_lib0move(&___nl__im__8,___get_global_string_const(114));
#line 200
c_rt_lib0clear(&___nl__im__0);
#line 200
//clear ___nl__bool__1;
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__3);
#line 200
c_rt_lib0clear(&___nl__im__4);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 200
c_rt_lib0clear(&___nl__im__6);
#line 200
c_rt_lib0clear(&___nl__im__7);
#line 200
return ___nl__im__8;
#line 201
goto label_82;
#line 201
label_55:
;
#line 202
c_rt_lib0move(&___nl__im__9,___get_global_string_const(115));
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
//clear ___nl__bool__1;
#line 202
c_rt_lib0clear(&___nl__im__2);
#line 202
c_rt_lib0clear(&___nl__im__3);
#line 202
c_rt_lib0clear(&___nl__im__4);
#line 202
c_rt_lib0clear(&___nl__im__5);
#line 202
c_rt_lib0clear(&___nl__im__6);
#line 202
c_rt_lib0clear(&___nl__im__7);
#line 202
c_rt_lib0clear(&___nl__im__8);
#line 202
return ___nl__im__9;
#line 203
goto label_82;
#line 203
label_68:
;
#line 204
c_rt_lib0move(&___nl__im__10,___get_global_string_const(116));
#line 204
c_rt_lib0clear(&___nl__im__0);
#line 204
//clear ___nl__bool__1;
#line 204
c_rt_lib0clear(&___nl__im__2);
#line 204
c_rt_lib0clear(&___nl__im__3);
#line 204
c_rt_lib0clear(&___nl__im__4);
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 204
c_rt_lib0clear(&___nl__im__6);
#line 204
c_rt_lib0clear(&___nl__im__7);
#line 204
c_rt_lib0clear(&___nl__im__8);
#line 204
c_rt_lib0clear(&___nl__im__9);
#line 204
return ___nl__im__10;
#line 205
goto label_82;
#line 205
label_82:
;
return NULL;

}

ImmT  compiler_priv0mk_path(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 209
c_rt_lib0move(&___nl__im__3,___get_global_string_const(110));
#line 209
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 209
c_rt_lib0clear(&___nl__im__3);
#line 209
___nl__bool__2 = !___nl__bool__2;
#line 209
if(___nl__bool__2){ goto label_10;}
#line 209
c_rt_lib0clear(&___nl__im__0);
#line 209
c_rt_lib0clear(&___nl__im__1);
#line 209
//clear ___nl__bool__2;
#line 209
return NULL;
#line 209
goto label_10;
#line 209
label_10:
;
#line 209
//clear ___nl__bool__2;
#line 210
c_rt_lib0move(&___nl__im__4, compiler_priv0get_dir(___nl__im__1));
#line 210
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__0, ___nl__im__4));
#line 210
c_rt_lib0clear(&___nl__im__4);
#line 211
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__0, ___nl__im__1));
#line 211
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__5));
#line 211
c_rt_lib0clear(&___nl__im__5);
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
c_rt_lib0clear(&___nl__im__1);
#line 211
return NULL;
return NULL;

}

ImmT  compiler_priv0mk_path_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,compiler0input_type0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
compiler_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
#line 216
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(93)));
#line 216
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 217
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(117)));
#line 218
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 218
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(64));
#line 218
if(___nl__bool__7){ goto label_20;}
#line 220
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(65));
#line 220
if(___nl__bool__7){ goto label_38;}
#line 222
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(66));
#line 222
if(___nl__bool__7){ goto label_63;}
#line 224
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(67));
#line 224
if(___nl__bool__7){ goto label_87;}
#line 232
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(68));
#line 232
if(___nl__bool__7){ goto label_144;}
#line 234
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(69));
#line 234
if(___nl__bool__7){ goto label_170;}
#line 234
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 234
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 234
nl_die_arg(___nl__im__8);
#line 218
label_20:
;
#line 219
c_rt_lib0move(&___nl__im__12,___get_global_string_const(111));
#line 219
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 219
c_rt_lib0clear(&___nl__im__12);
#line 219
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(64), ___nl__im__11));
#line 219
c_rt_lib0clear(&___nl__im__11);
#line 219
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__5, ___get_global_string_const(74), ___nl__im__10));
#line 219
c_rt_lib0clear(&___nl__im__10);
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__1);
#line 219
c_rt_lib0clear(&___nl__im__2);
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 219
c_rt_lib0clear(&___nl__im__5);
#line 219
c_rt_lib0clear(&___nl__im__6);
#line 219
//clear ___nl__bool__7;
#line 219
c_rt_lib0clear(&___nl__im__8);
#line 219
return ___nl__im__9;
#line 220
goto label_193;
#line 220
label_38:
;
#line 221
c_rt_lib0move(&___nl__im__17,___get_global_string_const(112));
#line 221
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__3, ___nl__im__17));
#line 221
c_rt_lib0clear(&___nl__im__17);
#line 221
c_rt_lib0move(&___nl__im__19,___get_global_string_const(118));
#line 221
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__3, ___nl__im__19));
#line 221
c_rt_lib0clear(&___nl__im__19);
#line 221
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__16, ___get_global_string_const(70), ___nl__im__18));
#line 221
c_rt_lib0clear(&___nl__im__16);
#line 221
c_rt_lib0clear(&___nl__im__18);
#line 221
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(65), ___nl__im__15));
#line 221
c_rt_lib0clear(&___nl__im__15);
#line 221
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__5, ___get_global_string_const(74), ___nl__im__14));
#line 221
c_rt_lib0clear(&___nl__im__14);
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
//clear ___nl__bool__7;
#line 221
c_rt_lib0clear(&___nl__im__8);
#line 221
c_rt_lib0clear(&___nl__im__9);
#line 221
return ___nl__im__13;
#line 222
goto label_193;
#line 222
label_63:
;
#line 222
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(66)));
#line 222
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 223
c_rt_lib0move(&___nl__im__25,___get_global_string_const(113));
#line 223
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 223
c_rt_lib0clear(&___nl__im__25);
#line 223
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__24));
#line 223
c_rt_lib0clear(&___nl__im__24);
#line 223
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__5, ___get_global_string_const(74), ___nl__im__23));
#line 223
c_rt_lib0clear(&___nl__im__23);
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
c_rt_lib0clear(&___nl__im__5);
#line 223
c_rt_lib0clear(&___nl__im__6);
#line 223
//clear ___nl__bool__7;
#line 223
c_rt_lib0clear(&___nl__im__8);
#line 223
c_rt_lib0clear(&___nl__im__9);
#line 223
c_rt_lib0clear(&___nl__im__13);
#line 223
c_rt_lib0clear(&___nl__im__20);
#line 223
c_rt_lib0clear(&___nl__im__21);
#line 223
return ___nl__im__22;
#line 224
goto label_193;
#line 224
label_87:
;
#line 225
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(119)));
#line 225
___nl__int__26 = string0length(___nl__im__27);
#line 225
c_rt_lib0clear(&___nl__im__27);
#line 226
c_rt_lib0move(&___nl__im__28, compiler_priv0get_dir(___nl__im__5));
#line 227
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(93)));
#line 227
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__28));
#line 227
c_rt_lib0clear(&___nl__im__31);
#line 227
c_rt_lib0move(&___nl__im__32,___get_global_string_const(105));
#line 227
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 227
c_rt_lib0clear(&___nl__im__30);
#line 227
c_rt_lib0clear(&___nl__im__32);
#line 227
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__29, ___nl__im__1));
#line 227
c_rt_lib0clear(&___nl__im__29);
#line 228
___nl__int__34 = string0length(___nl__im__28);
#line 228
___nl__bool__33 = ___nl__int__26 < ___nl__int__34;
#line 228
//clear ___nl__int__34;
#line 228
___nl__bool__33 = !___nl__bool__33;
#line 228
if(___nl__bool__33){ goto label_118;}
#line 229
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(93)));
#line 229
___nl__int__38 = 1;
#line 229
___nl__int__37 = ___nl__int__26 + ___nl__int__38;
#line 229
//clear ___nl__int__38;
#line 229
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__37));
#line 229
c_rt_lib0move(&___nl__im__36, string0substr2(___nl__im__28, ___nl__im__39));
#line 229
//clear ___nl__int__37;
#line 229
c_rt_lib0clear(&___nl__im__39);
#line 229
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__35, ___nl__im__36));
#line 229
c_rt_lib0clear(&___nl__im__35);
#line 229
c_rt_lib0clear(&___nl__im__36);
#line 230
goto label_118;
#line 230
label_118:
;
#line 230
//clear ___nl__bool__33;
#line 231
c_rt_lib0move(&___nl__im__43,___get_global_string_const(115));
#line 231
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__3, ___nl__im__43));
#line 231
c_rt_lib0clear(&___nl__im__43);
#line 231
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__42));
#line 231
c_rt_lib0clear(&___nl__im__42);
#line 231
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__5, ___get_global_string_const(74), ___nl__im__41));
#line 231
c_rt_lib0clear(&___nl__im__41);
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
c_rt_lib0clear(&___nl__im__3);
#line 231
c_rt_lib0clear(&___nl__im__5);
#line 231
c_rt_lib0clear(&___nl__im__6);
#line 231
//clear ___nl__bool__7;
#line 231
c_rt_lib0clear(&___nl__im__8);
#line 231
c_rt_lib0clear(&___nl__im__9);
#line 231
c_rt_lib0clear(&___nl__im__13);
#line 231
c_rt_lib0clear(&___nl__im__20);
#line 231
c_rt_lib0clear(&___nl__im__21);
#line 231
c_rt_lib0clear(&___nl__im__22);
#line 231
//clear ___nl__int__26;
#line 231
c_rt_lib0clear(&___nl__im__28);
#line 231
return ___nl__im__40;
#line 232
goto label_193;
#line 232
label_144:
;
#line 233
c_rt_lib0move(&___nl__im__47,___get_global_string_const(114));
#line 233
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__3, ___nl__im__47));
#line 233
c_rt_lib0clear(&___nl__im__47);
#line 233
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(68), ___nl__im__46));
#line 233
c_rt_lib0clear(&___nl__im__46);
#line 233
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__5, ___get_global_string_const(74), ___nl__im__45));
#line 233
c_rt_lib0clear(&___nl__im__45);
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
c_rt_lib0clear(&___nl__im__1);
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
c_rt_lib0clear(&___nl__im__3);
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
c_rt_lib0clear(&___nl__im__6);
#line 233
//clear ___nl__bool__7;
#line 233
c_rt_lib0clear(&___nl__im__8);
#line 233
c_rt_lib0clear(&___nl__im__9);
#line 233
c_rt_lib0clear(&___nl__im__13);
#line 233
c_rt_lib0clear(&___nl__im__20);
#line 233
c_rt_lib0clear(&___nl__im__21);
#line 233
c_rt_lib0clear(&___nl__im__22);
#line 233
//clear ___nl__int__26;
#line 233
c_rt_lib0clear(&___nl__im__28);
#line 233
c_rt_lib0clear(&___nl__im__40);
#line 233
return ___nl__im__44;
#line 234
goto label_193;
#line 234
label_170:
;
#line 235
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 235
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(2, ___get_global_string_const(73), ___nl__im__5, ___get_global_string_const(74), ___nl__im__49));
#line 235
c_rt_lib0clear(&___nl__im__49);
#line 235
c_rt_lib0clear(&___nl__im__0);
#line 235
c_rt_lib0clear(&___nl__im__1);
#line 235
c_rt_lib0clear(&___nl__im__2);
#line 235
c_rt_lib0clear(&___nl__im__3);
#line 235
c_rt_lib0clear(&___nl__im__5);
#line 235
c_rt_lib0clear(&___nl__im__6);
#line 235
//clear ___nl__bool__7;
#line 235
c_rt_lib0clear(&___nl__im__8);
#line 235
c_rt_lib0clear(&___nl__im__9);
#line 235
c_rt_lib0clear(&___nl__im__13);
#line 235
c_rt_lib0clear(&___nl__im__20);
#line 235
c_rt_lib0clear(&___nl__im__21);
#line 235
c_rt_lib0clear(&___nl__im__22);
#line 235
//clear ___nl__int__26;
#line 235
c_rt_lib0clear(&___nl__im__28);
#line 235
c_rt_lib0clear(&___nl__im__40);
#line 235
c_rt_lib0clear(&___nl__im__44);
#line 235
return ___nl__im__48;
#line 236
goto label_193;
#line 236
label_193:
;
return NULL;

}

ImmT  compiler_priv0get_all_nianio_file(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
#line 240
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 241
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 241
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 241
c_rt_lib0clear(&___nl__im__4);
#line 241
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 241
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 242
___nl__int__7 = 0;
#line 242
___nl__int__8 = 1;
#line 242
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 242
label_11:
;
#line 242
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 242
if(___nl__bool__10){ goto label_28;}
#line 242
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 242
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 243
c_rt_lib0move(&___nl__im__13,___get_global_string_const(115));
#line 243
___nl__bool__12 = compiler_priv0has_extension(___nl__im__6, ___nl__im__13);
#line 243
c_rt_lib0clear(&___nl__im__13);
#line 243
___nl__bool__12 = !___nl__bool__12;
#line 243
if(___nl__bool__12){ goto label_23;}
#line 243
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 243
goto label_23;
#line 243
label_23:
;
#line 243
//clear ___nl__bool__12;
#line 243
c_rt_lib0clear(&___nl__im__6);
#line 244
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 244
goto label_11;
#line 244
label_28:
;
#line 245
c_rt_lib0clear(&___nl__im__0);
#line 245
c_rt_lib0clear(&___nl__im__2);
#line 245
c_rt_lib0clear(&___nl__im__6);
#line 245
//clear ___nl__int__7;
#line 245
//clear ___nl__int__8;
#line 245
//clear ___nl__int__9;
#line 245
//clear ___nl__bool__10;
#line 245
c_rt_lib0clear(&___nl__im__11);
#line 245
return ___nl__im__1;
return NULL;

}

compiler0module_t0type compiler_priv0get_files_to_parse(compiler0input_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
#line 249
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(93)));
#line 250
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 251
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(92)));
#line 251
___nl__int__5 = 0;
#line 251
___nl__int__6 = 1;
#line 251
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 251
label_6:
;
#line 251
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 251
if(___nl__bool__8){ goto label_52;}
#line 251
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__5));
#line 251
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 252
c_rt_lib0move(&___nl__im__11,___get_global_string_const(115));
#line 252
___nl__bool__10 = compiler_priv0has_extension(___nl__im__4, ___nl__im__11);
#line 252
c_rt_lib0clear(&___nl__im__11);
#line 252
___nl__bool__10 = !___nl__bool__10;
#line 252
if(___nl__bool__10){ goto label_22;}
#line 253
c_rt_lib0move(&___nl__im__13, compiler_priv0get_dir(___nl__im__4));
#line 253
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(119), ___nl__im__13, ___get_global_string_const(117), ___nl__im__4));
#line 253
c_rt_lib0clear(&___nl__im__13);
#line 253
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__12));
#line 253
c_rt_lib0clear(&___nl__im__12);
#line 254
goto label_40;
#line 254
label_22:
;
#line 255
c_rt_lib0move(&___nl__im__14, compiler_priv0get_all_nianio_file(___nl__im__4));
#line 255
___nl__int__16 = 0;
#line 255
___nl__int__17 = 1;
#line 255
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 255
label_27:
;
#line 255
___nl__bool__19 = ___nl__int__16 >= ___nl__int__18;
#line 255
if(___nl__bool__19){ goto label_38;}
#line 255
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 255
c_rt_lib0copy(&___nl__im__15, ___nl__im__20);
#line 256
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(119), ___nl__im__4, ___get_global_string_const(117), ___nl__im__15));
#line 256
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__21));
#line 256
c_rt_lib0clear(&___nl__im__21);
#line 256
c_rt_lib0clear(&___nl__im__15);
#line 257
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 257
goto label_27;
#line 257
label_38:
;
#line 258
goto label_40;
#line 258
label_40:
;
#line 258
//clear ___nl__bool__10;
#line 258
c_rt_lib0clear(&___nl__im__14);
#line 258
c_rt_lib0clear(&___nl__im__15);
#line 258
//clear ___nl__int__16;
#line 258
//clear ___nl__int__17;
#line 258
//clear ___nl__int__18;
#line 258
//clear ___nl__bool__19;
#line 258
c_rt_lib0clear(&___nl__im__20);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 259
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 259
goto label_6;
#line 259
label_52:
;
#line 260
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 260
c_rt_lib0move(&___nl__im__22, compiler_priv0get_out_ext(___nl__im__23));
#line 260
c_rt_lib0clear(&___nl__im__23);
#line 261
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 262
c_rt_lib0move(&___nl__im__25, c_fe_lib0get_module_files(___nl__im__1));
#line 262
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(78));
#line 262
if(___nl__bool__26){ goto label_65;}
#line 267
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(77));
#line 267
if(___nl__bool__26){ goto label_99;}
#line 267
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 267
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 267
nl_die_arg(___nl__im__27);
#line 262
label_65:
;
#line 262
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(78)));
#line 262
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 263
c_rt_lib0move(&___nl__im__32, ptd0string());
#line 263
c_rt_lib0move(&___nl__im__31, ptd0arr(___nl__im__32));
#line 263
c_rt_lib0clear(&___nl__im__32);
#line 263
c_rt_lib0move(&___nl__im__30, ptd0ensure(___nl__im__31, ___nl__im__28));
#line 263
c_rt_lib0clear(&___nl__im__31);
#line 263
___nl__int__34 = 0;
#line 263
___nl__int__35 = 1;
#line 263
___nl__int__36 = c_rt_lib0array_len(___nl__im__30);
#line 263
label_76:
;
#line 263
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 263
if(___nl__bool__37){ goto label_97;}
#line 263
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__30, ___nl__int__34));
#line 263
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 264
___nl__bool__39 = compiler_priv0has_extension(___nl__im__33, ___nl__im__22);
#line 264
___nl__bool__39 = !___nl__bool__39;
#line 264
___nl__bool__39 = !___nl__bool__39;
#line 264
if(___nl__bool__39){ goto label_88;}
#line 264
//clear ___nl__bool__39;
#line 264
goto label_94;
#line 264
goto label_88;
#line 264
label_88:
;
#line 264
//clear ___nl__bool__39;
#line 265
c_rt_lib0move(&___nl__im__40, compiler_priv0get_module_name(___nl__im__33));
#line 265
c_rt_lib0delete(hash0set_value(&___nl__im__24, ___nl__im__40, ___nl__im__33));
#line 265
c_rt_lib0clear(&___nl__im__40);
#line 265
c_rt_lib0clear(&___nl__im__33);
#line 265
label_94:
;
#line 266
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 266
goto label_76;
#line 266
label_97:
;
#line 267
goto label_131;
#line 267
label_99:
;
#line 267
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(77)));
#line 267
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 268
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(0));
#line 268
c_rt_lib0clear(&___nl__im__0);
#line 268
c_rt_lib0clear(&___nl__im__1);
#line 268
c_rt_lib0clear(&___nl__im__2);
#line 268
c_rt_lib0clear(&___nl__im__3);
#line 268
c_rt_lib0clear(&___nl__im__4);
#line 268
//clear ___nl__int__5;
#line 268
//clear ___nl__int__6;
#line 268
//clear ___nl__int__7;
#line 268
//clear ___nl__bool__8;
#line 268
c_rt_lib0clear(&___nl__im__9);
#line 268
c_rt_lib0clear(&___nl__im__22);
#line 268
c_rt_lib0clear(&___nl__im__24);
#line 268
c_rt_lib0clear(&___nl__im__25);
#line 268
//clear ___nl__bool__26;
#line 268
c_rt_lib0clear(&___nl__im__27);
#line 268
c_rt_lib0clear(&___nl__im__28);
#line 268
c_rt_lib0clear(&___nl__im__29);
#line 268
c_rt_lib0clear(&___nl__im__30);
#line 268
c_rt_lib0clear(&___nl__im__33);
#line 268
//clear ___nl__int__34;
#line 268
//clear ___nl__int__35;
#line 268
//clear ___nl__int__36;
#line 268
//clear ___nl__bool__37;
#line 268
c_rt_lib0clear(&___nl__im__38);
#line 268
c_rt_lib0clear(&___nl__im__41);
#line 268
c_rt_lib0clear(&___nl__im__42);
#line 268
return ___nl__im__43;
#line 269
goto label_131;
#line 269
label_131:
;
#line 270
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(0));
#line 271
___nl__int__46 = 0;
#line 271
___nl__int__47 = 1;
#line 271
___nl__int__48 = c_rt_lib0array_len(___nl__im__2);
#line 271
label_136:
;
#line 271
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 271
if(___nl__bool__49){ goto label_149;}
#line 271
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__2, ___nl__int__46));
#line 271
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 272
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(117)));
#line 272
c_rt_lib0move(&___nl__im__51, compiler_priv0get_module_name(___nl__im__52));
#line 272
c_rt_lib0clear(&___nl__im__52);
#line 273
c_rt_lib0move(&___nl__im__53, compiler_priv0mk_path_module(___nl__im__45, ___nl__im__51, ___nl__im__0));
#line 274
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__51, ___nl__im__53));
#line 274
c_rt_lib0clear(&___nl__im__45);
#line 275
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 275
goto label_136;
#line 275
label_149:
;
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
c_rt_lib0clear(&___nl__im__1);
#line 276
c_rt_lib0clear(&___nl__im__2);
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
//clear ___nl__int__5;
#line 276
//clear ___nl__int__6;
#line 276
//clear ___nl__int__7;
#line 276
//clear ___nl__bool__8;
#line 276
c_rt_lib0clear(&___nl__im__9);
#line 276
c_rt_lib0clear(&___nl__im__22);
#line 276
c_rt_lib0clear(&___nl__im__24);
#line 276
c_rt_lib0clear(&___nl__im__25);
#line 276
//clear ___nl__bool__26;
#line 276
c_rt_lib0clear(&___nl__im__27);
#line 276
c_rt_lib0clear(&___nl__im__28);
#line 276
c_rt_lib0clear(&___nl__im__29);
#line 276
c_rt_lib0clear(&___nl__im__30);
#line 276
c_rt_lib0clear(&___nl__im__33);
#line 276
//clear ___nl__int__34;
#line 276
//clear ___nl__int__35;
#line 276
//clear ___nl__int__36;
#line 276
//clear ___nl__bool__37;
#line 276
c_rt_lib0clear(&___nl__im__38);
#line 276
c_rt_lib0clear(&___nl__im__41);
#line 276
c_rt_lib0clear(&___nl__im__42);
#line 276
c_rt_lib0clear(&___nl__im__43);
#line 276
c_rt_lib0clear(&___nl__im__45);
#line 276
//clear ___nl__int__46;
#line 276
//clear ___nl__int__47;
#line 276
//clear ___nl__int__48;
#line 276
//clear ___nl__bool__49;
#line 276
c_rt_lib0clear(&___nl__im__50);
#line 276
c_rt_lib0clear(&___nl__im__51);
#line 276
c_rt_lib0clear(&___nl__im__53);
#line 276
return ___nl__im__44;
return NULL;

}

ImmT  compiler_priv0parse_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,compiler0errors_group_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__string__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__string__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__string__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__string__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
#line 283
c_rt_lib0move(&___nl__im__5,___get_global_string_const(120));
#line 283
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 283
c_rt_lib0clear(&___nl__im__5);
#line 283
c_rt_lib0move(&___nl__im__6,___get_global_string_const(121));
#line 283
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 283
c_rt_lib0clear(&___nl__im__4);
#line 283
c_rt_lib0clear(&___nl__im__6);
#line 283
c_rt_lib0delete(c_fe_lib0print(___nl__im__3));
#line 283
c_rt_lib0clear(&___nl__im__3);
#line 284
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 284
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 284
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__12, ___get_global_string_const(77), ___nl__im__13));
#line 284
c_rt_lib0clear(&___nl__im__12);
#line 284
c_rt_lib0clear(&___nl__im__13);
#line 284
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 284
c_rt_lib0clear(&___nl__im__11);
#line 284
c_rt_lib0move(&___nl__im__14, c_fe_lib0file_to_string(___nl__im__1));
#line 284
c_rt_lib0move(&___nl__im__9, ptd0ensure(___nl__im__10, ___nl__im__14));
#line 284
c_rt_lib0clear(&___nl__im__10);
#line 284
c_rt_lib0clear(&___nl__im__14);
#line 284
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(78));
#line 284
if(___nl__bool__8){ goto label_27;}
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__1);
#line 284
c_rt_lib0clear(&___nl__im__7);
#line 284
//clear ___nl__bool__8;
#line 284
return ___nl__im__9;
#line 284
label_27:
;
#line 284
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(78)));
#line 285
___nl__bool__16 = true;
#line 285
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 285
//clear ___nl__bool__16;
#line 286
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(78));
#line 286
if(___nl__bool__17){ goto label_39;}
#line 293
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(122));
#line 293
if(___nl__bool__17){ goto label_112;}
#line 293
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 293
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 293
nl_die_arg(___nl__im__18);
#line 286
label_39:
;
#line 286
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(78)));
#line 286
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 287
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 288
___nl__bool__23 = false;
#line 288
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
#line 288
c_rt_lib0move(&___nl__im__22, module_checker0check_module(___nl__im__19, ___nl__im__24, &___nl__im__21));
#line 288
//clear ___nl__bool__23;
#line 288
c_rt_lib0clear(&___nl__im__24);
#line 289
c_rt_lib0move(&___nl__im__25,___get_global_string_const(59));
#line 289
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__25));
#line 289
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(123)));
#line 289
c_rt_lib0delete(hash0set_value(&___nl__im__25, ___nl__im__0, ___nl__im__26));
#line 289
c_rt_lib0move(&___nl__string__27,___get_global_string_const(59));
#line 289
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__27, ___nl__im__25));
#line 289
c_rt_lib0clear(&___nl__im__25);
#line 289
c_rt_lib0clear(&___nl__im__26);
#line 289
c_rt_lib0clear(&___nl__string__27);
#line 290
c_rt_lib0move(&___nl__im__28,___get_global_string_const(58));
#line 290
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__28));
#line 290
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 290
c_rt_lib0delete(hash0set_value(&___nl__im__28, ___nl__im__0, ___nl__im__29));
#line 290
c_rt_lib0move(&___nl__string__30,___get_global_string_const(58));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__28));
#line 290
c_rt_lib0clear(&___nl__im__28);
#line 290
c_rt_lib0clear(&___nl__im__29);
#line 290
c_rt_lib0clear(&___nl__string__30);
#line 291
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 291
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 291
c_rt_lib0clear(&___nl__im__33);
#line 291
___nl__int__34 = 0;
#line 291
___nl__bool__31 = ___nl__int__32 == ___nl__int__34;
#line 291
//clear ___nl__int__32;
#line 291
//clear ___nl__int__34;
#line 291
___nl__bool__31 = !___nl__bool__31;
#line 291
___nl__bool__31 = !___nl__bool__31;
#line 291
if(___nl__bool__31){ goto label_94;}
#line 291
c_rt_lib0move(&___nl__im__36,___get_global_string_const(36));
#line 291
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__36));
#line 291
c_rt_lib0clear(&___nl__im__36);
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
c_rt_lib0clear(&___nl__im__7);
#line 291
//clear ___nl__bool__8;
#line 291
c_rt_lib0clear(&___nl__im__9);
#line 291
c_rt_lib0clear(&___nl__im__15);
#line 291
//clear ___nl__bool__17;
#line 291
c_rt_lib0clear(&___nl__im__18);
#line 291
c_rt_lib0clear(&___nl__im__19);
#line 291
c_rt_lib0clear(&___nl__im__20);
#line 291
c_rt_lib0clear(&___nl__im__21);
#line 291
c_rt_lib0clear(&___nl__im__22);
#line 291
//clear ___nl__bool__31;
#line 291
return ___nl__im__35;
#line 291
goto label_94;
#line 291
label_94:
;
#line 291
//clear ___nl__bool__31;
#line 291
c_rt_lib0clear(&___nl__im__35);
#line 292
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__19));
#line 292
c_rt_lib0clear(&___nl__im__0);
#line 292
c_rt_lib0clear(&___nl__im__1);
#line 292
c_rt_lib0clear(&___nl__im__7);
#line 292
//clear ___nl__bool__8;
#line 292
c_rt_lib0clear(&___nl__im__9);
#line 292
c_rt_lib0clear(&___nl__im__15);
#line 292
//clear ___nl__bool__17;
#line 292
c_rt_lib0clear(&___nl__im__18);
#line 292
c_rt_lib0clear(&___nl__im__19);
#line 292
c_rt_lib0clear(&___nl__im__20);
#line 292
c_rt_lib0clear(&___nl__im__21);
#line 292
c_rt_lib0clear(&___nl__im__22);
#line 292
return ___nl__im__37;
#line 293
goto label_151;
#line 293
label_112:
;
#line 293
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(122)));
#line 293
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 294
c_rt_lib0move(&___nl__im__40,___get_global_string_const(59));
#line 294
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__40));
#line 294
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 294
c_rt_lib0delete(hash0set_value(&___nl__im__40, ___nl__im__0, ___nl__im__41));
#line 294
c_rt_lib0move(&___nl__string__42,___get_global_string_const(59));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__42, ___nl__im__40));
#line 294
c_rt_lib0clear(&___nl__im__40);
#line 294
c_rt_lib0clear(&___nl__im__41);
#line 294
c_rt_lib0clear(&___nl__string__42);
#line 295
c_rt_lib0move(&___nl__im__43,___get_global_string_const(58));
#line 295
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__43));
#line 295
c_rt_lib0delete(hash0set_value(&___nl__im__43, ___nl__im__0, ___nl__im__38));
#line 295
c_rt_lib0move(&___nl__string__44,___get_global_string_const(58));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__44, ___nl__im__43));
#line 295
c_rt_lib0clear(&___nl__im__43);
#line 295
c_rt_lib0clear(&___nl__string__44);
#line 296
c_rt_lib0move(&___nl__im__46,___get_global_string_const(36));
#line 296
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__46));
#line 296
c_rt_lib0clear(&___nl__im__46);
#line 296
c_rt_lib0clear(&___nl__im__0);
#line 296
c_rt_lib0clear(&___nl__im__1);
#line 296
c_rt_lib0clear(&___nl__im__7);
#line 296
//clear ___nl__bool__8;
#line 296
c_rt_lib0clear(&___nl__im__9);
#line 296
c_rt_lib0clear(&___nl__im__15);
#line 296
//clear ___nl__bool__17;
#line 296
c_rt_lib0clear(&___nl__im__18);
#line 296
c_rt_lib0clear(&___nl__im__19);
#line 296
c_rt_lib0clear(&___nl__im__20);
#line 296
c_rt_lib0clear(&___nl__im__21);
#line 296
c_rt_lib0clear(&___nl__im__22);
#line 296
c_rt_lib0clear(&___nl__im__37);
#line 296
c_rt_lib0clear(&___nl__im__38);
#line 296
c_rt_lib0clear(&___nl__im__39);
#line 296
return ___nl__im__45;
#line 297
goto label_151;
#line 297
label_151:
;
return NULL;

}

ImmT  compiler_priv0get_mathematical_func(compiler0input_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 301
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 302
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(96)));
#line 302
c_rt_lib0move(&___nl__im__2, c_fe_lib0file_to_string(___nl__im__3));
#line 302
c_rt_lib0clear(&___nl__im__3);
#line 302
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(78));
#line 302
if(___nl__bool__4){ goto label_11;}
#line 315
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(77));
#line 315
if(___nl__bool__4){ goto label_58;}
#line 315
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 315
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 315
nl_die_arg(___nl__im__5);
#line 302
label_11:
;
#line 302
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(78)));
#line 302
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 303
c_rt_lib0move(&___nl__im__8,___get_global_string_const(124));
#line 303
c_rt_lib0delete(c_fe_lib0print(___nl__im__8));
#line 303
c_rt_lib0clear(&___nl__im__8);
#line 304
c_rt_lib0move(&___nl__im__9, dfile0try_sload(___nl__im__6));
#line 305
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 306
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(78));
#line 306
if(___nl__bool__11){ goto label_26;}
#line 308
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(77));
#line 308
if(___nl__bool__11){ goto label_31;}
#line 308
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 308
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__9));
#line 308
nl_die_arg(___nl__im__12);
#line 306
label_26:
;
#line 306
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(78)));
#line 306
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 307
c_rt_lib0copy(&___nl__im__10, ___nl__im__13);
#line 308
goto label_39;
#line 308
label_31:
;
#line 308
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(77)));
#line 308
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 309
c_rt_lib0move(&___nl__im__17,___get_global_string_const(125));
#line 309
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 309
c_rt_lib0clear(&___nl__im__17);
#line 310
c_rt_lib0delete(c_fe_lib0print(___nl__im__15));
#line 311
goto label_39;
#line 311
label_39:
;
#line 312
___nl__int__19 = 0;
#line 312
___nl__int__20 = 1;
#line 312
___nl__int__21 = c_rt_lib0array_len(___nl__im__10);
#line 312
label_43:
;
#line 312
___nl__bool__22 = ___nl__int__19 >= ___nl__int__21;
#line 312
if(___nl__bool__22){ goto label_56;}
#line 312
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__10, ___nl__int__19));
#line 312
c_rt_lib0copy(&___nl__im__18, ___nl__im__23);
#line 313
___nl__int__24 = 1;
#line 313
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__24));
#line 313
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__25));
#line 313
//clear ___nl__int__24;
#line 313
c_rt_lib0clear(&___nl__im__25);
#line 313
c_rt_lib0clear(&___nl__im__18);
#line 314
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 314
goto label_43;
#line 314
label_56:
;
#line 315
goto label_65;
#line 315
label_58:
;
#line 315
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(77)));
#line 315
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 316
c_rt_lib0move(&___nl__im__28,___get_global_string_const(126));
#line 316
c_rt_lib0delete(c_fe_lib0print(___nl__im__28));
#line 316
c_rt_lib0clear(&___nl__im__28);
#line 317
goto label_65;
#line 317
label_65:
;
#line 318
c_rt_lib0clear(&___nl__im__0);
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 318
//clear ___nl__bool__4;
#line 318
c_rt_lib0clear(&___nl__im__5);
#line 318
c_rt_lib0clear(&___nl__im__6);
#line 318
c_rt_lib0clear(&___nl__im__7);
#line 318
c_rt_lib0clear(&___nl__im__9);
#line 318
c_rt_lib0clear(&___nl__im__10);
#line 318
//clear ___nl__bool__11;
#line 318
c_rt_lib0clear(&___nl__im__12);
#line 318
c_rt_lib0clear(&___nl__im__13);
#line 318
c_rt_lib0clear(&___nl__im__14);
#line 318
c_rt_lib0clear(&___nl__im__15);
#line 318
c_rt_lib0clear(&___nl__im__16);
#line 318
c_rt_lib0clear(&___nl__im__18);
#line 318
//clear ___nl__int__19;
#line 318
//clear ___nl__int__20;
#line 318
//clear ___nl__int__21;
#line 318
//clear ___nl__bool__22;
#line 318
c_rt_lib0clear(&___nl__im__23);
#line 318
c_rt_lib0clear(&___nl__im__26);
#line 318
c_rt_lib0clear(&___nl__im__27);
#line 318
return ___nl__im__1;
return NULL;

}

ImmT  compiler_priv0compile_ide(compiler0input_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
generator_c0state_t0type ___nl__rec__16 = {};
ImmT * ___nl__im_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT * ___nl__im_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__31 = NULL;
INT * ___nl__int_ptr__32 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__33 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__34 = NULL;
ImmT * ___nl__im_ptr__35 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__36 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__39 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
ImmT * ___nl__im_ptr__42 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__43 = NULL;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
bool  ___nl__bool__54 = false;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
INT  ___nl__int__71 = 0;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__string__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__string__75 = NULL;
bool  ___nl__bool__76 = false;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
INT  ___nl__int__96 = 0;
INT  ___nl__int__97 = 0;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
INT  ___nl__int__103 = 0;
ImmT  ___nl__string__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
bool  ___nl__bool__108 = false;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
INT  ___nl__int__115 = 0;
INT  ___nl__int__116 = 0;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
bool  ___nl__bool__123 = false;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
bool  ___nl__bool__132 = false;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
bool  ___nl__bool__137 = false;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
bool  ___nl__bool__145 = false;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
bool  ___nl__bool__153 = false;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
bool  ___nl__bool__161 = false;
INT  ___nl__int__162 = 0;
INT  ___nl__int__163 = 0;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
INT  ___nl__int__167 = 0;
ImmT  ___nl__string__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
bool  ___nl__bool__174 = false;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
#line 322
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 323
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 324
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 325
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 326
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 328
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 329
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 330
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 331
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 332
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(78)));
#line 332
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__7, ___get_global_string_const(59), ___nl__im__8, ___get_global_string_const(60), ___nl__im__9, ___get_global_string_const(61), ___nl__im__10, ___get_global_string_const(62), ___nl__im__11));
#line 332
c_rt_lib0clear(&___nl__im__7);
#line 332
c_rt_lib0clear(&___nl__im__8);
#line 332
c_rt_lib0clear(&___nl__im__9);
#line 332
c_rt_lib0clear(&___nl__im__10);
#line 332
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0move(&___nl__im__13, compiler_priv0get_mathematical_func(___nl__im__0));
#line 334
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(95)));
#line 334
c_rt_lib0move(&___nl__im__12, post_processing0init(___nl__im__13, ___nl__im__14));
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 336
;
#line 336
___nl__im_ptr__17 = &(___nl__rec__16.global_int_const0field);
#line 337
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 337
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(0));
#line 337
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 337
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 337
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(4, ___get_global_string_const(127), ___nl__im__18, ___get_global_string_const(128), ___nl__im__19, ___get_global_string_const(129), ___nl__im__20, ___get_global_string_const(130), ___nl__im__21));
#line 337
c_rt_lib0clear(&___nl__im__18);
#line 337
c_rt_lib0clear(&___nl__im__19);
#line 337
c_rt_lib0clear(&___nl__im__20);
#line 337
c_rt_lib0clear(&___nl__im__21);
#line 337
___nl__im_ptr__17 = NULL;
#line 337
___nl__im_ptr__22 = &(___nl__rec__16.global_string_const0field);
#line 338
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 338
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 338
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 338
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 338
c_rt_lib0move(___nl__im_ptr__22, c_rt_lib0hash_mk(4, ___get_global_string_const(127), ___nl__im__23, ___get_global_string_const(128), ___nl__im__24, ___get_global_string_const(129), ___nl__im__25, ___get_global_string_const(130), ___nl__im__26));
#line 338
c_rt_lib0clear(&___nl__im__23);
#line 338
c_rt_lib0clear(&___nl__im__24);
#line 338
c_rt_lib0clear(&___nl__im__25);
#line 338
c_rt_lib0clear(&___nl__im__26);
#line 338
___nl__im_ptr__22 = NULL;
#line 338
___nl__im_ptr__27 = &(___nl__rec__16.ret0field);
#line 339
c_rt_lib0move(___nl__im_ptr__27,___get_global_string_const(36));
#line 339
___nl__im_ptr__27 = NULL;
#line 339
___nl__im_ptr__28 = &(___nl__rec__16.header0field);
#line 340
c_rt_lib0move(___nl__im_ptr__28,___get_global_string_const(36));
#line 340
___nl__im_ptr__28 = NULL;
#line 340
___nl__im_ptr__29 = &(___nl__rec__16.fun_args0field);
#line 341
c_rt_lib0move(___nl__im_ptr__29, c_rt_lib0array_mk(0));
#line 341
___nl__im_ptr__29 = NULL;
#line 341
___nl__im_ptr__30 = &(___nl__rec__16.ret_reg_type0field);
#line 342
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 342
___nl__im_ptr__30 = NULL;
#line 342
___nl__rec_ptr__31 = &(___nl__rec__16.const0field);
#line 343
;
#line 343
___nl__int_ptr__32 = &(___nl__rec_ptr__31->dynamic_nr0field);
#line 344
(*___nl__int_ptr__32) = 0;
#line 344
___nl__int_ptr__32 = NULL;
#line 344
___nl__rec_ptr__33 = &(___nl__rec_ptr__31->int0field);
#line 345
;
#line 345
___nl__arr_ptr__34 = &(___nl__rec_ptr__33->arr0field);
#line 345
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__34));
(*___nl__arr_ptr__34).size = 0;
(*___nl__arr_ptr__34).capacity = 0;
(*___nl__arr_ptr__34).value = NULL;
#line 345
___nl__arr_ptr__34 = NULL;
#line 345
___nl__im_ptr__35 = &(___nl__rec_ptr__33->hash0field);
#line 345
c_rt_lib0move(___nl__im_ptr__35, c_rt_lib0hash_mk(0));
#line 345
___nl__im_ptr__35 = NULL;
#line 345
___nl__rec_ptr__33 = NULL;
#line 345
___nl__rec_ptr__36 = &(___nl__rec_ptr__31->string0field);
#line 346
;
#line 346
___nl__arr_ptr__37 = &(___nl__rec_ptr__36->arr0field);
#line 346
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__37));
(*___nl__arr_ptr__37).size = 0;
(*___nl__arr_ptr__37).capacity = 0;
(*___nl__arr_ptr__37).value = NULL;
#line 346
___nl__arr_ptr__37 = NULL;
#line 346
___nl__im_ptr__38 = &(___nl__rec_ptr__36->hash0field);
#line 346
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(0));
#line 346
___nl__im_ptr__38 = NULL;
#line 346
___nl__rec_ptr__36 = NULL;
#line 346
___nl__rec_ptr__39 = &(___nl__rec_ptr__31->singleton0field);
#line 347
;
#line 347
___nl__arr_ptr__40 = &(___nl__rec_ptr__39->arr0field);
#line 347
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__40));
(*___nl__arr_ptr__40).size = 0;
(*___nl__arr_ptr__40).capacity = 0;
(*___nl__arr_ptr__40).value = NULL;
#line 347
___nl__arr_ptr__40 = NULL;
#line 347
___nl__im_ptr__41 = &(___nl__rec_ptr__39->hash0field);
#line 347
c_rt_lib0move(___nl__im_ptr__41, c_rt_lib0hash_mk(0));
#line 347
___nl__im_ptr__41 = NULL;
#line 347
___nl__rec_ptr__39 = NULL;
#line 347
___nl__rec_ptr__31 = NULL;
#line 347
___nl__im_ptr__42 = &(___nl__rec__16.mod_name0field);
#line 349
c_rt_lib0move(___nl__im_ptr__42,___get_global_string_const(36));
#line 349
___nl__im_ptr__42 = NULL;
#line 349
___nl__hash_ptr__43 = &(___nl__rec__16.additional_imports0field);
#line 350
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__43));
(*___nl__hash_ptr__43).size = 0;
(*___nl__hash_ptr__43).capacity = 0;
(*___nl__hash_ptr__43).keys = NULL;
(*___nl__hash_ptr__43).values = NULL;
#line 350
___nl__hash_ptr__43 = NULL;
#line 350
___nl__im_ptr__44 = &(___nl__rec__16.defined_types0field);
#line 351
c_rt_lib0move(___nl__im_ptr__44, c_rt_lib0hash_mk(0));
#line 351
___nl__im_ptr__44 = NULL;
#line 353
label_99:
;
#line 354
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(0));
#line 354
c_rt_lib0copy(&___nl__im__46, ___nl__im__45);
#line 354
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(60), ___nl__im__46);
#line 354
c_rt_lib0clear(&___nl__im__45);
#line 354
c_rt_lib0clear(&___nl__im__46);
#line 355
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 355
c_rt_lib0copy(&___nl__im__48, ___nl__im__47);
#line 355
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(61), ___nl__im__48);
#line 355
c_rt_lib0clear(&___nl__im__47);
#line 355
c_rt_lib0clear(&___nl__im__48);
#line 356
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(78)));
#line 356
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 356
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(62), ___nl__im__50);
#line 356
c_rt_lib0clear(&___nl__im__49);
#line 356
c_rt_lib0clear(&___nl__im__50);
#line 357
c_rt_lib0move(&___nl__im__51, compiler_priv0get_files_to_parse(___nl__im__0));
#line 358
___nl__int__52 = 0;
#line 359
c_rt_lib0move(&___nl__im__56, c_rt_lib0init_iter(___nl__im__51));
#line 359
label_118:
;
#line 359
___nl__bool__54 = c_rt_lib0is_end_hash(___nl__im__56);
#line 359
if(___nl__bool__54){ goto label_169;}
#line 359
c_rt_lib0move(&___nl__im__53, c_rt_lib0get_key_iter(___nl__im__56));
#line 359
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value(___nl__im__51, ___nl__im__53));
#line 360
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_string_const(73)));
#line 360
c_rt_lib0move(&___nl__im__57, c_fe_lib0get_modif_time(___nl__im__58));
#line 360
c_rt_lib0clear(&___nl__im__58);
#line 361
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__57, ___get_global_string_const(77));
#line 361
___nl__bool__59 = !___nl__bool__59;
#line 361
if(___nl__bool__59){ goto label_133;}
#line 361
c_rt_lib0clear(&___nl__im__57);
#line 361
//clear ___nl__bool__59;
#line 361
goto label_166;
#line 361
goto label_133;
#line 361
label_133:
;
#line 361
//clear ___nl__bool__59;
#line 362
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__57, ___get_global_string_const(78)));
#line 363
___nl__bool__60 = hash0has_key(___nl__im__1, ___nl__im__53);
#line 363
___nl__bool__60 = !___nl__bool__60;
#line 363
if(___nl__bool__60){ goto label_157;}
#line 364
c_rt_lib0move(&___nl__im__61, hash0get_value(___nl__im__1, ___nl__im__53));
#line 365
___nl__int__63 = getIntFromImm(___nl__im__57);
#line 365
___nl__int__64 = getIntFromImm(___nl__im__61);
#line 365
___nl__bool__62 = ___nl__int__63 > ___nl__int__64;
#line 365
//clear ___nl__int__63;
#line 365
//clear ___nl__int__64;
#line 365
___nl__bool__62 = !___nl__bool__62;
#line 365
___nl__bool__62 = !___nl__bool__62;
#line 365
if(___nl__bool__62){ goto label_154;}
#line 365
c_rt_lib0clear(&___nl__im__57);
#line 365
//clear ___nl__bool__60;
#line 365
c_rt_lib0clear(&___nl__im__61);
#line 365
//clear ___nl__bool__62;
#line 365
goto label_166;
#line 365
goto label_154;
#line 365
label_154:
;
#line 365
//clear ___nl__bool__62;
#line 366
goto label_157;
#line 366
label_157:
;
#line 366
//clear ___nl__bool__60;
#line 366
c_rt_lib0clear(&___nl__im__61);
#line 367
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__53, ___nl__im__57));
#line 368
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__53, ___nl__im__55));
#line 369
___nl__int__65 = 1;
#line 369
___nl__int__52 = ___nl__int__52 + ___nl__int__65;
#line 369
//clear ___nl__int__65;
#line 369
c_rt_lib0clear(&___nl__im__57);
#line 369
label_166:
;
#line 370
c_rt_lib0move(&___nl__im__56, c_rt_lib0next_iter(___nl__im__56));
#line 370
goto label_118;
#line 370
label_169:
;
#line 371
c_rt_lib0move(&___nl__im__69, c_rt_lib0init_iter(___nl__im__15));
#line 371
label_171:
;
#line 371
___nl__bool__67 = c_rt_lib0is_end_hash(___nl__im__69);
#line 371
if(___nl__bool__67){ goto label_216;}
#line 371
c_rt_lib0move(&___nl__im__66, c_rt_lib0get_key_iter(___nl__im__69));
#line 371
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__66));
#line 372
___nl__bool__70 = hash0has_key(___nl__im__51, ___nl__im__66);
#line 372
___nl__bool__70 = !___nl__bool__70;
#line 372
___nl__bool__70 = !___nl__bool__70;
#line 372
if(___nl__bool__70){ goto label_212;}
#line 373
___nl__int__71 = 1;
#line 373
___nl__int__52 = ___nl__int__52 + ___nl__int__71;
#line 373
//clear ___nl__int__71;
#line 374
c_rt_lib0move(&___nl__im__72,___get_global_string_const(58));
#line 374
c_rt_lib0move(&___nl__im__72, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__72));
#line 374
c_rt_lib0delete(hash0delete(&___nl__im__72, ___nl__im__66));
#line 374
c_rt_lib0move(&___nl__string__73,___get_global_string_const(58));
#line 374
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__73, ___nl__im__72));
#line 374
c_rt_lib0clear(&___nl__im__72);
#line 374
c_rt_lib0clear(&___nl__string__73);
#line 375
c_rt_lib0move(&___nl__im__74,___get_global_string_const(59));
#line 375
c_rt_lib0move(&___nl__im__74, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__74));
#line 375
c_rt_lib0delete(hash0delete(&___nl__im__74, ___nl__im__66));
#line 375
c_rt_lib0move(&___nl__string__75,___get_global_string_const(59));
#line 375
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__75, ___nl__im__74));
#line 375
c_rt_lib0clear(&___nl__im__74);
#line 375
c_rt_lib0clear(&___nl__string__75);
#line 376
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__66));
#line 377
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__66));
#line 378
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__66));
#line 379
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__66));
#line 380
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__12, ___nl__im__66));
#line 381
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 381
___nl__bool__76 = c_rt_lib0priv_is(___nl__im__77, ___get_global_string_const(65));
#line 381
c_rt_lib0clear(&___nl__im__77);
#line 381
___nl__bool__76 = !___nl__bool__76;
#line 381
if(___nl__bool__76){ goto label_209;}
#line 382
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__16, ___nl__im__66));
#line 383
goto label_209;
#line 383
label_209:
;
#line 383
//clear ___nl__bool__76;
#line 384
goto label_212;
#line 384
label_212:
;
#line 384
//clear ___nl__bool__70;
#line 385
c_rt_lib0move(&___nl__im__69, c_rt_lib0next_iter(___nl__im__69));
#line 385
goto label_171;
#line 385
label_216:
;
#line 386
c_rt_lib0copy(&___nl__im__15, ___nl__im__51);
#line 387
___nl__int__79 = 0;
#line 387
___nl__bool__78 = ___nl__int__52 == ___nl__int__79;
#line 387
//clear ___nl__int__79;
#line 387
___nl__bool__78 = !___nl__bool__78;
#line 387
if(___nl__bool__78){ goto label_242;}
#line 388
___nl__int__80 = 1;
#line 388
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 388
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__81));
#line 388
//clear ___nl__int__80;
#line 388
c_rt_lib0clear(&___nl__im__81);
#line 389
c_rt_lib0clear(&___nl__im__51);
#line 389
//clear ___nl__int__52;
#line 389
c_rt_lib0clear(&___nl__im__53);
#line 389
//clear ___nl__bool__54;
#line 389
c_rt_lib0clear(&___nl__im__55);
#line 389
c_rt_lib0clear(&___nl__im__56);
#line 389
c_rt_lib0clear(&___nl__im__57);
#line 389
c_rt_lib0clear(&___nl__im__66);
#line 389
//clear ___nl__bool__67;
#line 389
c_rt_lib0clear(&___nl__im__68);
#line 389
c_rt_lib0clear(&___nl__im__69);
#line 389
//clear ___nl__bool__78;
#line 389
goto label_99;
#line 390
goto label_242;
#line 390
label_242:
;
#line 390
//clear ___nl__bool__78;
#line 391
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(0));
#line 392
c_rt_lib0move(&___nl__im__86, c_rt_lib0init_iter(___nl__im__5));
#line 392
label_246:
;
#line 392
___nl__bool__84 = c_rt_lib0is_end_hash(___nl__im__86);
#line 392
if(___nl__bool__84){ goto label_282;}
#line 392
c_rt_lib0move(&___nl__im__83, c_rt_lib0get_key_iter(___nl__im__86));
#line 392
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__83));
#line 393
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(73)));
#line 393
c_rt_lib0move(&___nl__im__87, compiler_priv0parse_module(___nl__im__83, ___nl__im__88, &___nl__im__6));
#line 393
c_rt_lib0clear(&___nl__im__88);
#line 393
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(78));
#line 393
if(___nl__bool__89){ goto label_261;}
#line 396
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(77));
#line 396
if(___nl__bool__89){ goto label_267;}
#line 396
c_rt_lib0move(&___nl__im__90,___get_global_string_const(15));
#line 396
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__90, ___nl__im__87));
#line 396
nl_die_arg(___nl__im__90);
#line 393
label_261:
;
#line 393
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(78)));
#line 393
c_rt_lib0copy(&___nl__im__91, ___nl__im__92);
#line 394
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__83, ___nl__im__91));
#line 395
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__83, ___nl__im__91));
#line 396
goto label_272;
#line 396
label_267:
;
#line 396
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(77)));
#line 396
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 397
c_rt_lib0delete(hash0set_value(&___nl__im__82, ___nl__im__83, ___nl__im__85));
#line 398
goto label_272;
#line 398
label_272:
;
#line 398
c_rt_lib0clear(&___nl__im__87);
#line 398
//clear ___nl__bool__89;
#line 398
c_rt_lib0clear(&___nl__im__90);
#line 398
c_rt_lib0clear(&___nl__im__91);
#line 398
c_rt_lib0clear(&___nl__im__92);
#line 398
c_rt_lib0clear(&___nl__im__93);
#line 398
c_rt_lib0clear(&___nl__im__94);
#line 399
c_rt_lib0move(&___nl__im__86, c_rt_lib0next_iter(___nl__im__86));
#line 399
goto label_246;
#line 399
label_282:
;
#line 400
c_rt_lib0copy(&___nl__im__5, ___nl__im__82);
#line 401
___nl__int__96 = hash0size(___nl__im__5);
#line 401
___nl__int__97 = 0;
#line 401
___nl__bool__95 = ___nl__int__96 > ___nl__int__97;
#line 401
//clear ___nl__int__96;
#line 401
//clear ___nl__int__97;
#line 401
___nl__bool__95 = !___nl__bool__95;
#line 401
if(___nl__bool__95){ goto label_338;}
#line 402
compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__51);
#line 403
c_rt_lib0move(&___nl__im__101, string0lf());
#line 403
c_rt_lib0move(&___nl__im__102,___get_global_string_const(132));
#line 403
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__102));
#line 403
c_rt_lib0clear(&___nl__im__101);
#line 403
c_rt_lib0clear(&___nl__im__102);
#line 403
___nl__int__103 = hash0size(___nl__im__5);
#line 403
c_rt_lib0move(&___nl__string__104, c_rt_lib0int_to_string(___nl__int__103));
#line 403
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__string__104));
#line 403
c_rt_lib0clear(&___nl__im__100);
#line 403
//clear ___nl__int__103;
#line 403
c_rt_lib0clear(&___nl__string__104);
#line 403
c_rt_lib0move(&___nl__im__105,___get_global_string_const(133));
#line 403
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__105));
#line 403
c_rt_lib0clear(&___nl__im__99);
#line 403
c_rt_lib0clear(&___nl__im__105);
#line 403
c_rt_lib0delete(c_fe_lib0print(___nl__im__98));
#line 403
c_rt_lib0clear(&___nl__im__98);
#line 404
c_rt_lib0move(&___nl__im__106,___get_global_string_const(134));
#line 404
c_rt_lib0delete(c_fe_lib0print(___nl__im__106));
#line 404
c_rt_lib0clear(&___nl__im__106);
#line 405
c_rt_lib0clear(&___nl__im__51);
#line 405
//clear ___nl__int__52;
#line 405
c_rt_lib0clear(&___nl__im__53);
#line 405
//clear ___nl__bool__54;
#line 405
c_rt_lib0clear(&___nl__im__55);
#line 405
c_rt_lib0clear(&___nl__im__56);
#line 405
c_rt_lib0clear(&___nl__im__57);
#line 405
c_rt_lib0clear(&___nl__im__66);
#line 405
//clear ___nl__bool__67;
#line 405
c_rt_lib0clear(&___nl__im__68);
#line 405
c_rt_lib0clear(&___nl__im__69);
#line 405
c_rt_lib0clear(&___nl__im__82);
#line 405
c_rt_lib0clear(&___nl__im__83);
#line 405
//clear ___nl__bool__84;
#line 405
c_rt_lib0clear(&___nl__im__85);
#line 405
c_rt_lib0clear(&___nl__im__86);
#line 405
c_rt_lib0clear(&___nl__im__87);
#line 405
//clear ___nl__bool__89;
#line 405
c_rt_lib0clear(&___nl__im__90);
#line 405
c_rt_lib0clear(&___nl__im__91);
#line 405
c_rt_lib0clear(&___nl__im__92);
#line 405
c_rt_lib0clear(&___nl__im__93);
#line 405
c_rt_lib0clear(&___nl__im__94);
#line 405
//clear ___nl__bool__95;
#line 405
goto label_99;
#line 406
goto label_338;
#line 406
label_338:
;
#line 406
//clear ___nl__bool__95;
#line 407
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(94)));
#line 407
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 407
___nl__bool__108 = c_rt_lib0check_true_native(___nl__im__109);
#line 407
c_rt_lib0clear(&___nl__im__109);
#line 407
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__6, ___nl__im__107, ___nl__bool__108));
#line 407
c_rt_lib0clear(&___nl__im__107);
#line 407
//clear ___nl__bool__108;
#line 408
c_rt_lib0move(&___nl__im__113, c_rt_lib0init_iter(___nl__im__2));
#line 408
label_348:
;
#line 408
___nl__bool__111 = c_rt_lib0is_end_hash(___nl__im__113);
#line 408
if(___nl__bool__111){ goto label_356;}
#line 408
c_rt_lib0move(&___nl__im__110, c_rt_lib0get_key_iter(___nl__im__113));
#line 408
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__110));
#line 409
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__110, ___nl__im__112));
#line 410
c_rt_lib0move(&___nl__im__113, c_rt_lib0next_iter(___nl__im__113));
#line 410
goto label_348;
#line 410
label_356:
;
#line 412
___nl__int__115 = compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__51);
#line 412
___nl__int__116 = 0;
#line 412
___nl__bool__114 = ___nl__int__115 > ___nl__int__116;
#line 412
//clear ___nl__int__115;
#line 412
//clear ___nl__int__116;
#line 412
___nl__bool__114 = !___nl__bool__114;
#line 412
if(___nl__bool__114){ goto label_397;}
#line 413
c_rt_lib0move(&___nl__im__117,___get_global_string_const(134));
#line 413
c_rt_lib0delete(c_fe_lib0print(___nl__im__117));
#line 413
c_rt_lib0clear(&___nl__im__117);
#line 414
c_rt_lib0clear(&___nl__im__51);
#line 414
//clear ___nl__int__52;
#line 414
c_rt_lib0clear(&___nl__im__53);
#line 414
//clear ___nl__bool__54;
#line 414
c_rt_lib0clear(&___nl__im__55);
#line 414
c_rt_lib0clear(&___nl__im__56);
#line 414
c_rt_lib0clear(&___nl__im__57);
#line 414
c_rt_lib0clear(&___nl__im__66);
#line 414
//clear ___nl__bool__67;
#line 414
c_rt_lib0clear(&___nl__im__68);
#line 414
c_rt_lib0clear(&___nl__im__69);
#line 414
c_rt_lib0clear(&___nl__im__82);
#line 414
c_rt_lib0clear(&___nl__im__83);
#line 414
//clear ___nl__bool__84;
#line 414
c_rt_lib0clear(&___nl__im__85);
#line 414
c_rt_lib0clear(&___nl__im__86);
#line 414
c_rt_lib0clear(&___nl__im__87);
#line 414
//clear ___nl__bool__89;
#line 414
c_rt_lib0clear(&___nl__im__90);
#line 414
c_rt_lib0clear(&___nl__im__91);
#line 414
c_rt_lib0clear(&___nl__im__92);
#line 414
c_rt_lib0clear(&___nl__im__93);
#line 414
c_rt_lib0clear(&___nl__im__94);
#line 414
c_rt_lib0clear(&___nl__im__110);
#line 414
//clear ___nl__bool__111;
#line 414
c_rt_lib0clear(&___nl__im__112);
#line 414
c_rt_lib0clear(&___nl__im__113);
#line 414
//clear ___nl__bool__114;
#line 414
goto label_99;
#line 415
goto label_397;
#line 415
label_397:
;
#line 415
//clear ___nl__bool__114;
#line 416
c_rt_lib0move(&___nl__im__121, c_rt_lib0init_iter(___nl__im__4));
#line 416
label_400:
;
#line 416
___nl__bool__119 = c_rt_lib0is_end_hash(___nl__im__121);
#line 416
if(___nl__bool__119){ goto label_410;}
#line 416
c_rt_lib0move(&___nl__im__118, c_rt_lib0get_key_iter(___nl__im__121));
#line 416
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__118));
#line 417
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__118));
#line 417
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__118, ___nl__im__122));
#line 417
c_rt_lib0clear(&___nl__im__122);
#line 418
c_rt_lib0move(&___nl__im__121, c_rt_lib0next_iter(___nl__im__121));
#line 418
goto label_400;
#line 418
label_410:
;
#line 419
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 419
___nl__bool__123 = c_rt_lib0priv_is(___nl__im__124, ___get_global_string_const(68));
#line 419
c_rt_lib0clear(&___nl__im__124);
#line 419
if(___nl__bool__123){ goto label_418;}
#line 419
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 419
___nl__bool__123 = c_rt_lib0priv_is(___nl__im__125, ___get_global_string_const(67));
#line 419
c_rt_lib0clear(&___nl__im__125);
#line 419
label_418:
;
#line 419
___nl__bool__123 = !___nl__bool__123;
#line 419
___nl__bool__123 = !___nl__bool__123;
#line 419
if(___nl__bool__123){ goto label_462;}
#line 420
c_rt_lib0move(&___nl__im__126,___get_global_string_const(135));
#line 420
c_rt_lib0delete(c_fe_lib0print(___nl__im__126));
#line 420
c_rt_lib0clear(&___nl__im__126);
#line 421
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_mk(0));
#line 422
c_rt_lib0move(&___nl__im__128, compiler_priv0translate(___nl__im__4, ___nl__im__3, &___nl__im__12));
#line 423
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(93)));
#line 423
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 423
c_rt_lib0move(&___nl__im__129, compiler_priv0generate_modules_to_files(___nl__im__128, ___nl__im__51, ___nl__im__130, &___nl__rec__16, ___nl__im__131));
#line 423
c_rt_lib0clear(&___nl__im__130);
#line 423
c_rt_lib0clear(&___nl__im__131);
#line 424
___nl__bool__132 = c_rt_lib0priv_is(___nl__im__129, ___get_global_string_const(77));
#line 424
if(___nl__bool__132){ goto label_439;}
#line 428
___nl__bool__132 = c_rt_lib0priv_is(___nl__im__129, ___get_global_string_const(78));
#line 428
if(___nl__bool__132){ goto label_455;}
#line 428
c_rt_lib0move(&___nl__im__133,___get_global_string_const(15));
#line 428
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_mk(2, ___nl__im__133, ___nl__im__129));
#line 428
nl_die_arg(___nl__im__133);
#line 424
label_439:
;
#line 424
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__129, ___get_global_string_const(77)));
#line 424
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 425
c_rt_lib0move(&___nl__im__139, c_rt_lib0init_iter(___nl__im__134));
#line 425
label_443:
;
#line 425
___nl__bool__137 = c_rt_lib0is_end_hash(___nl__im__139);
#line 425
if(___nl__bool__137){ goto label_453;}
#line 425
c_rt_lib0move(&___nl__im__136, c_rt_lib0get_key_iter(___nl__im__139));
#line 425
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value(___nl__im__134, ___nl__im__136));
#line 426
c_rt_lib0move(&___nl__im__140, hash0get_value(___nl__im__2, ___nl__im__136));
#line 426
c_rt_lib0delete(hash0set_value(&___nl__im__127, ___nl__im__136, ___nl__im__140));
#line 426
c_rt_lib0clear(&___nl__im__140);
#line 427
c_rt_lib0move(&___nl__im__139, c_rt_lib0next_iter(___nl__im__139));
#line 427
goto label_443;
#line 427
label_453:
;
#line 428
goto label_459;
#line 428
label_455:
;
#line 428
c_rt_lib0move(&___nl__im__142, c_rt_lib0priv_as(___nl__im__129, ___get_global_string_const(78)));
#line 428
c_rt_lib0copy(&___nl__im__141, ___nl__im__142);
#line 429
goto label_459;
#line 429
label_459:
;
#line 430
c_rt_lib0copy(&___nl__im__4, ___nl__im__127);
#line 431
goto label_514;
#line 431
label_462:
;
#line 432
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_mk(0));
#line 433
c_rt_lib0move(&___nl__im__147, c_rt_lib0init_iter(___nl__im__4));
#line 433
label_465:
;
#line 433
___nl__bool__145 = c_rt_lib0is_end_hash(___nl__im__147);
#line 433
if(___nl__bool__145){ goto label_511;}
#line 433
c_rt_lib0move(&___nl__im__144, c_rt_lib0get_key_iter(___nl__im__147));
#line 433
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__144));
#line 434
c_rt_lib0move(&___nl__im__149,___get_global_string_const(136));
#line 434
c_rt_lib0move(&___nl__im__148, c_rt_lib0concat_new(___nl__im__149, ___nl__im__144));
#line 434
c_rt_lib0clear(&___nl__im__149);
#line 434
c_rt_lib0delete(c_fe_lib0print(___nl__im__148));
#line 434
c_rt_lib0clear(&___nl__im__148);
#line 435
c_rt_lib0move(&___nl__im__152, hash0get_value(___nl__im__51, ___nl__im__144));
#line 435
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__152, ___get_global_string_const(74)));
#line 435
c_rt_lib0clear(&___nl__im__152);
#line 435
c_rt_lib0move(&___nl__im__150, compiler_priv0save_module_to_file(___nl__im__146, ___nl__im__151));
#line 435
c_rt_lib0clear(&___nl__im__151);
#line 435
___nl__bool__153 = c_rt_lib0priv_is(___nl__im__150, ___get_global_string_const(77));
#line 435
if(___nl__bool__153){ goto label_487;}
#line 438
___nl__bool__153 = c_rt_lib0priv_is(___nl__im__150, ___get_global_string_const(78));
#line 438
if(___nl__bool__153){ goto label_497;}
#line 438
c_rt_lib0move(&___nl__im__154,___get_global_string_const(15));
#line 438
c_rt_lib0move(&___nl__im__154, c_rt_lib0array_mk(2, ___nl__im__154, ___nl__im__150));
#line 438
nl_die_arg(___nl__im__154);
#line 435
label_487:
;
#line 435
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__150, ___get_global_string_const(77)));
#line 435
c_rt_lib0copy(&___nl__im__155, ___nl__im__156);
#line 436
c_rt_lib0move(&___nl__im__158,___get_global_string_const(137));
#line 436
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__158, ___nl__im__155));
#line 436
c_rt_lib0clear(&___nl__im__158);
#line 436
c_rt_lib0delete(c_fe_lib0print(___nl__im__157));
#line 436
c_rt_lib0clear(&___nl__im__157);
#line 437
c_rt_lib0delete(hash0set_value(&___nl__im__143, ___nl__im__144, ___nl__im__146));
#line 438
goto label_501;
#line 438
label_497:
;
#line 438
c_rt_lib0move(&___nl__im__160, c_rt_lib0priv_as(___nl__im__150, ___get_global_string_const(78)));
#line 438
c_rt_lib0copy(&___nl__im__159, ___nl__im__160);
#line 439
goto label_501;
#line 439
label_501:
;
#line 439
c_rt_lib0clear(&___nl__im__150);
#line 439
//clear ___nl__bool__153;
#line 439
c_rt_lib0clear(&___nl__im__154);
#line 439
c_rt_lib0clear(&___nl__im__155);
#line 439
c_rt_lib0clear(&___nl__im__156);
#line 439
c_rt_lib0clear(&___nl__im__159);
#line 439
c_rt_lib0clear(&___nl__im__160);
#line 440
c_rt_lib0move(&___nl__im__147, c_rt_lib0next_iter(___nl__im__147));
#line 440
goto label_465;
#line 440
label_511:
;
#line 441
c_rt_lib0copy(&___nl__im__4, ___nl__im__143);
#line 442
goto label_514;
#line 442
label_514:
;
#line 442
//clear ___nl__bool__123;
#line 442
c_rt_lib0clear(&___nl__im__127);
#line 442
c_rt_lib0clear(&___nl__im__128);
#line 442
c_rt_lib0clear(&___nl__im__129);
#line 442
//clear ___nl__bool__132;
#line 442
c_rt_lib0clear(&___nl__im__133);
#line 442
c_rt_lib0clear(&___nl__im__134);
#line 442
c_rt_lib0clear(&___nl__im__135);
#line 442
c_rt_lib0clear(&___nl__im__136);
#line 442
//clear ___nl__bool__137;
#line 442
c_rt_lib0clear(&___nl__im__138);
#line 442
c_rt_lib0clear(&___nl__im__139);
#line 442
c_rt_lib0clear(&___nl__im__141);
#line 442
c_rt_lib0clear(&___nl__im__142);
#line 442
c_rt_lib0clear(&___nl__im__143);
#line 442
c_rt_lib0clear(&___nl__im__144);
#line 442
//clear ___nl__bool__145;
#line 442
c_rt_lib0clear(&___nl__im__146);
#line 442
c_rt_lib0clear(&___nl__im__147);
#line 442
c_rt_lib0clear(&___nl__im__150);
#line 442
//clear ___nl__bool__153;
#line 442
c_rt_lib0clear(&___nl__im__154);
#line 442
c_rt_lib0clear(&___nl__im__155);
#line 442
c_rt_lib0clear(&___nl__im__156);
#line 442
c_rt_lib0clear(&___nl__im__159);
#line 442
c_rt_lib0clear(&___nl__im__160);
#line 443
___nl__int__162 = hash0size(___nl__im__4);
#line 443
___nl__int__163 = 0;
#line 443
___nl__bool__161 = ___nl__int__162 > ___nl__int__163;
#line 443
//clear ___nl__int__162;
#line 443
//clear ___nl__int__163;
#line 443
___nl__bool__161 = !___nl__bool__161;
#line 443
if(___nl__bool__161){ goto label_569;}
#line 444
c_rt_lib0move(&___nl__im__166,___get_global_string_const(138));
#line 444
___nl__int__167 = hash0size(___nl__im__4);
#line 444
c_rt_lib0move(&___nl__string__168, c_rt_lib0int_to_string(___nl__int__167));
#line 444
c_rt_lib0move(&___nl__im__165, c_rt_lib0concat_new(___nl__im__166, ___nl__string__168));
#line 444
c_rt_lib0clear(&___nl__im__166);
#line 444
//clear ___nl__int__167;
#line 444
c_rt_lib0clear(&___nl__string__168);
#line 444
c_rt_lib0move(&___nl__im__169,___get_global_string_const(139));
#line 444
c_rt_lib0move(&___nl__im__164, c_rt_lib0concat_new(___nl__im__165, ___nl__im__169));
#line 444
c_rt_lib0clear(&___nl__im__165);
#line 444
c_rt_lib0clear(&___nl__im__169);
#line 445
c_rt_lib0move(&___nl__im__172, string0lf());
#line 445
c_rt_lib0move(&___nl__im__173,___get_global_string_const(137));
#line 445
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__173));
#line 445
c_rt_lib0clear(&___nl__im__172);
#line 445
c_rt_lib0clear(&___nl__im__173);
#line 445
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__164));
#line 445
c_rt_lib0clear(&___nl__im__171);
#line 445
c_rt_lib0delete(c_fe_lib0print(___nl__im__170));
#line 445
c_rt_lib0clear(&___nl__im__170);
#line 446
goto label_593;
#line 446
label_569:
;
#line 447
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 447
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__175, ___get_global_string_const(88));
#line 447
c_rt_lib0clear(&___nl__im__175);
#line 447
___nl__bool__174 = !___nl__bool__174;
#line 447
if(___nl__bool__174){ goto label_583;}
#line 447
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 447
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 447
c_rt_lib0move(&___nl__im__176, c_rt_lib0priv_as(___nl__im__178, ___get_global_string_const(88)));
#line 447
c_rt_lib0clear(&___nl__im__177);
#line 447
c_rt_lib0clear(&___nl__im__178);
#line 447
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__176));
#line 447
c_rt_lib0clear(&___nl__im__176);
#line 447
goto label_583;
#line 447
label_583:
;
#line 447
//clear ___nl__bool__174;
#line 448
c_rt_lib0move(&___nl__im__180, string0lf());
#line 448
c_rt_lib0move(&___nl__im__181,___get_global_string_const(140));
#line 448
c_rt_lib0move(&___nl__im__179, c_rt_lib0concat_new(___nl__im__180, ___nl__im__181));
#line 448
c_rt_lib0clear(&___nl__im__180);
#line 448
c_rt_lib0clear(&___nl__im__181);
#line 448
c_rt_lib0delete(c_fe_lib0print(___nl__im__179));
#line 448
c_rt_lib0clear(&___nl__im__179);
#line 449
goto label_593;
#line 449
label_593:
;
#line 449
//clear ___nl__bool__161;
#line 449
c_rt_lib0clear(&___nl__im__164);
#line 450
c_rt_lib0move(&___nl__im__182,___get_global_string_const(134));
#line 450
c_rt_lib0delete(c_fe_lib0print(___nl__im__182));
#line 450
c_rt_lib0clear(&___nl__im__182);
#line 450
c_rt_lib0clear(&___nl__im__51);
#line 450
//clear ___nl__int__52;
#line 450
c_rt_lib0clear(&___nl__im__53);
#line 450
//clear ___nl__bool__54;
#line 450
c_rt_lib0clear(&___nl__im__55);
#line 450
c_rt_lib0clear(&___nl__im__56);
#line 450
c_rt_lib0clear(&___nl__im__57);
#line 450
c_rt_lib0clear(&___nl__im__66);
#line 450
//clear ___nl__bool__67;
#line 450
c_rt_lib0clear(&___nl__im__68);
#line 450
c_rt_lib0clear(&___nl__im__69);
#line 450
c_rt_lib0clear(&___nl__im__82);
#line 450
c_rt_lib0clear(&___nl__im__83);
#line 450
//clear ___nl__bool__84;
#line 450
c_rt_lib0clear(&___nl__im__85);
#line 450
c_rt_lib0clear(&___nl__im__86);
#line 450
c_rt_lib0clear(&___nl__im__87);
#line 450
//clear ___nl__bool__89;
#line 450
c_rt_lib0clear(&___nl__im__90);
#line 450
c_rt_lib0clear(&___nl__im__91);
#line 450
c_rt_lib0clear(&___nl__im__92);
#line 450
c_rt_lib0clear(&___nl__im__93);
#line 450
c_rt_lib0clear(&___nl__im__94);
#line 450
c_rt_lib0clear(&___nl__im__110);
#line 450
//clear ___nl__bool__111;
#line 450
c_rt_lib0clear(&___nl__im__112);
#line 450
c_rt_lib0clear(&___nl__im__113);
#line 450
c_rt_lib0clear(&___nl__im__118);
#line 450
//clear ___nl__bool__119;
#line 450
c_rt_lib0clear(&___nl__im__120);
#line 450
c_rt_lib0clear(&___nl__im__121);
#line 353
goto label_99;
#line 353
c_rt_lib0clear(&___nl__im__0);
#line 353
c_rt_lib0clear(&___nl__im__1);
#line 353
c_rt_lib0clear(&___nl__im__2);
#line 353
c_rt_lib0clear(&___nl__im__3);
#line 353
c_rt_lib0clear(&___nl__im__4);
#line 353
c_rt_lib0clear(&___nl__im__5);
#line 353
c_rt_lib0clear(&___nl__im__6);
#line 353
c_rt_lib0clear(&___nl__im__12);
#line 353
c_rt_lib0clear(&___nl__im__15);
#line 353
generator_c0state_t0type0clean(___nl__rec__16);;
#line 353
c_rt_lib0clear(&___nl__im__51);
#line 353
//clear ___nl__int__52;
#line 353
c_rt_lib0clear(&___nl__im__53);
#line 353
//clear ___nl__bool__54;
#line 353
c_rt_lib0clear(&___nl__im__55);
#line 353
c_rt_lib0clear(&___nl__im__56);
#line 353
c_rt_lib0clear(&___nl__im__57);
#line 353
c_rt_lib0clear(&___nl__im__66);
#line 353
//clear ___nl__bool__67;
#line 353
c_rt_lib0clear(&___nl__im__68);
#line 353
c_rt_lib0clear(&___nl__im__69);
#line 353
c_rt_lib0clear(&___nl__im__82);
#line 353
c_rt_lib0clear(&___nl__im__83);
#line 353
//clear ___nl__bool__84;
#line 353
c_rt_lib0clear(&___nl__im__85);
#line 353
c_rt_lib0clear(&___nl__im__86);
#line 353
c_rt_lib0clear(&___nl__im__87);
#line 353
//clear ___nl__bool__89;
#line 353
c_rt_lib0clear(&___nl__im__90);
#line 353
c_rt_lib0clear(&___nl__im__91);
#line 353
c_rt_lib0clear(&___nl__im__92);
#line 353
c_rt_lib0clear(&___nl__im__93);
#line 353
c_rt_lib0clear(&___nl__im__94);
#line 353
c_rt_lib0clear(&___nl__im__110);
#line 353
//clear ___nl__bool__111;
#line 353
c_rt_lib0clear(&___nl__im__112);
#line 353
c_rt_lib0clear(&___nl__im__113);
#line 353
c_rt_lib0clear(&___nl__im__118);
#line 353
//clear ___nl__bool__119;
#line 353
c_rt_lib0clear(&___nl__im__120);
#line 353
c_rt_lib0clear(&___nl__im__121);
#line 353
return NULL;

}

INT  compiler_priv0compile_strict_file(compiler0input_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
generator_c0state_t0type ___nl__rec__46 = {};
ImmT * ___nl__im_ptr__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT * ___nl__im_ptr__57 = NULL;
ImmT * ___nl__im_ptr__58 = NULL;
ImmT * ___nl__im_ptr__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__61 = NULL;
INT * ___nl__int_ptr__62 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__63 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__64 = NULL;
ImmT * ___nl__im_ptr__65 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__66 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__67 = NULL;
ImmT * ___nl__im_ptr__68 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__69 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__70 = NULL;
ImmT * ___nl__im_ptr__71 = NULL;
ImmT * ___nl__im_ptr__72 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__73 = NULL;
ImmT * ___nl__im_ptr__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
INT  ___nl__int__107 = 0;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
INT  ___nl__int__110 = 0;
#line 455
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 457
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 458
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 459
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 460
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 461
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(78)));
#line 461
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__3, ___get_global_string_const(59), ___nl__im__4, ___get_global_string_const(60), ___nl__im__5, ___get_global_string_const(61), ___nl__im__6, ___get_global_string_const(62), ___nl__im__7));
#line 461
c_rt_lib0clear(&___nl__im__3);
#line 461
c_rt_lib0clear(&___nl__im__4);
#line 461
c_rt_lib0clear(&___nl__im__5);
#line 461
c_rt_lib0clear(&___nl__im__6);
#line 461
c_rt_lib0clear(&___nl__im__7);
#line 464
c_rt_lib0move(&___nl__im__8,___get_global_string_const(141));
#line 464
c_rt_lib0delete(profile0begin(___nl__im__8));
#line 464
c_rt_lib0clear(&___nl__im__8);
#line 465
___nl__int__9 = 0;
#line 466
c_rt_lib0move(&___nl__im__10, compiler_priv0get_files_to_parse(___nl__im__0));
#line 467
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__10));
#line 467
label_18:
;
#line 467
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 467
if(___nl__bool__12){ goto label_55;}
#line 467
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 467
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__10, ___nl__im__11));
#line 468
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(73)));
#line 468
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 468
c_rt_lib0clear(&___nl__im__16);
#line 468
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(78));
#line 468
if(___nl__bool__17){ goto label_33;}
#line 470
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(77));
#line 470
if(___nl__bool__17){ goto label_38;}
#line 470
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 470
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 470
nl_die_arg(___nl__im__18);
#line 468
label_33:
;
#line 468
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(78)));
#line 468
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 469
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__11, ___nl__im__19));
#line 470
goto label_45;
#line 470
label_38:
;
#line 470
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(77)));
#line 470
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 471
___nl__int__23 = 1;
#line 471
___nl__int__9 = ___nl__int__9 + ___nl__int__23;
#line 471
//clear ___nl__int__23;
#line 472
goto label_45;
#line 472
label_45:
;
#line 472
c_rt_lib0clear(&___nl__im__15);
#line 472
//clear ___nl__bool__17;
#line 472
c_rt_lib0clear(&___nl__im__18);
#line 472
c_rt_lib0clear(&___nl__im__19);
#line 472
c_rt_lib0clear(&___nl__im__20);
#line 472
c_rt_lib0clear(&___nl__im__21);
#line 472
c_rt_lib0clear(&___nl__im__22);
#line 473
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 473
goto label_18;
#line 473
label_55:
;
#line 474
c_rt_lib0move(&___nl__im__24,___get_global_string_const(141));
#line 474
c_rt_lib0delete(profile0end(___nl__im__24));
#line 474
c_rt_lib0clear(&___nl__im__24);
#line 475
___nl__int__26 = 0;
#line 475
___nl__bool__25 = ___nl__int__9 != ___nl__int__26;
#line 475
//clear ___nl__int__26;
#line 475
___nl__bool__25 = !___nl__bool__25;
#line 475
if(___nl__bool__25){ goto label_85;}
#line 476
compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 477
___nl__int__27 = 1;
#line 477
c_rt_lib0clear(&___nl__im__0);
#line 477
c_rt_lib0clear(&___nl__im__1);
#line 477
c_rt_lib0clear(&___nl__im__2);
#line 477
//clear ___nl__int__9;
#line 477
c_rt_lib0clear(&___nl__im__10);
#line 477
c_rt_lib0clear(&___nl__im__11);
#line 477
//clear ___nl__bool__12;
#line 477
c_rt_lib0clear(&___nl__im__13);
#line 477
c_rt_lib0clear(&___nl__im__14);
#line 477
c_rt_lib0clear(&___nl__im__15);
#line 477
//clear ___nl__bool__17;
#line 477
c_rt_lib0clear(&___nl__im__18);
#line 477
c_rt_lib0clear(&___nl__im__19);
#line 477
c_rt_lib0clear(&___nl__im__20);
#line 477
c_rt_lib0clear(&___nl__im__21);
#line 477
c_rt_lib0clear(&___nl__im__22);
#line 477
//clear ___nl__bool__25;
#line 477
return ___nl__int__27;
#line 478
goto label_85;
#line 478
label_85:
;
#line 478
//clear ___nl__bool__25;
#line 478
//clear ___nl__int__27;
#line 480
c_rt_lib0move(&___nl__im__28,___get_global_string_const(142));
#line 480
c_rt_lib0delete(profile0begin(___nl__im__28));
#line 480
c_rt_lib0clear(&___nl__im__28);
#line 481
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(94)));
#line 481
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 481
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 481
c_rt_lib0clear(&___nl__im__31);
#line 481
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__29, ___nl__bool__30));
#line 481
c_rt_lib0clear(&___nl__im__29);
#line 481
//clear ___nl__bool__30;
#line 482
c_rt_lib0move(&___nl__im__32,___get_global_string_const(143));
#line 482
c_rt_lib0delete(profile0end(___nl__im__32));
#line 482
c_rt_lib0clear(&___nl__im__32);
#line 483
c_rt_lib0move(&___nl__im__34,___get_global_string_const(144));
#line 483
___nl__bool__33 = hash0has_key(___nl__im__1, ___nl__im__34);
#line 483
c_rt_lib0clear(&___nl__im__34);
#line 483
___nl__bool__33 = !___nl__bool__33;
#line 483
if(___nl__bool__33){ goto label_114;}
#line 484
c_rt_lib0move(&___nl__im__35,___get_global_string_const(145));
#line 484
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(144)));
#line 484
c_rt_lib0move(&___nl__im__36, dfile_dbg0ssave(___nl__im__37));
#line 484
c_rt_lib0clear(&___nl__im__37);
#line 484
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__35, ___nl__im__36));
#line 484
c_rt_lib0clear(&___nl__im__35);
#line 484
c_rt_lib0clear(&___nl__im__36);
#line 485
goto label_114;
#line 485
label_114:
;
#line 485
//clear ___nl__bool__33;
#line 486
___nl__int__39 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 486
___nl__int__40 = 0;
#line 486
___nl__bool__38 = ___nl__int__39 > ___nl__int__40;
#line 486
//clear ___nl__int__39;
#line 486
//clear ___nl__int__40;
#line 486
___nl__bool__38 = !___nl__bool__38;
#line 486
if(___nl__bool__38){ goto label_143;}
#line 487
___nl__int__41 = 1;
#line 487
c_rt_lib0clear(&___nl__im__0);
#line 487
c_rt_lib0clear(&___nl__im__1);
#line 487
c_rt_lib0clear(&___nl__im__2);
#line 487
//clear ___nl__int__9;
#line 487
c_rt_lib0clear(&___nl__im__10);
#line 487
c_rt_lib0clear(&___nl__im__11);
#line 487
//clear ___nl__bool__12;
#line 487
c_rt_lib0clear(&___nl__im__13);
#line 487
c_rt_lib0clear(&___nl__im__14);
#line 487
c_rt_lib0clear(&___nl__im__15);
#line 487
//clear ___nl__bool__17;
#line 487
c_rt_lib0clear(&___nl__im__18);
#line 487
c_rt_lib0clear(&___nl__im__19);
#line 487
c_rt_lib0clear(&___nl__im__20);
#line 487
c_rt_lib0clear(&___nl__im__21);
#line 487
c_rt_lib0clear(&___nl__im__22);
#line 487
//clear ___nl__bool__38;
#line 487
return ___nl__int__41;
#line 488
goto label_143;
#line 488
label_143:
;
#line 488
//clear ___nl__bool__38;
#line 488
//clear ___nl__int__41;
#line 489
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 489
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(68));
#line 489
c_rt_lib0clear(&___nl__im__43);
#line 489
if(___nl__bool__42){ goto label_153;}
#line 489
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 489
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(67));
#line 489
c_rt_lib0clear(&___nl__im__44);
#line 489
label_153:
;
#line 489
___nl__bool__42 = !___nl__bool__42;
#line 489
___nl__bool__42 = !___nl__bool__42;
#line 489
if(___nl__bool__42){ goto label_282;}
#line 490
c_rt_lib0move(&___nl__im__45,___get_global_string_const(146));
#line 490
c_rt_lib0delete(profile0begin(___nl__im__45));
#line 490
c_rt_lib0clear(&___nl__im__45);
#line 491
;
#line 491
___nl__im_ptr__47 = &(___nl__rec__46.global_int_const0field);
#line 492
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 492
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 492
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(___nl__im_ptr__47, c_rt_lib0hash_mk(4, ___get_global_string_const(127), ___nl__im__48, ___get_global_string_const(128), ___nl__im__49, ___get_global_string_const(129), ___nl__im__50, ___get_global_string_const(130), ___nl__im__51));
#line 492
c_rt_lib0clear(&___nl__im__48);
#line 492
c_rt_lib0clear(&___nl__im__49);
#line 492
c_rt_lib0clear(&___nl__im__50);
#line 492
c_rt_lib0clear(&___nl__im__51);
#line 492
___nl__im_ptr__47 = NULL;
#line 492
___nl__im_ptr__52 = &(___nl__rec__46.global_string_const0field);
#line 493
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 493
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 493
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(0));
#line 493
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 493
c_rt_lib0move(___nl__im_ptr__52, c_rt_lib0hash_mk(4, ___get_global_string_const(127), ___nl__im__53, ___get_global_string_const(128), ___nl__im__54, ___get_global_string_const(129), ___nl__im__55, ___get_global_string_const(130), ___nl__im__56));
#line 493
c_rt_lib0clear(&___nl__im__53);
#line 493
c_rt_lib0clear(&___nl__im__54);
#line 493
c_rt_lib0clear(&___nl__im__55);
#line 493
c_rt_lib0clear(&___nl__im__56);
#line 493
___nl__im_ptr__52 = NULL;
#line 493
___nl__im_ptr__57 = &(___nl__rec__46.ret0field);
#line 494
c_rt_lib0move(___nl__im_ptr__57,___get_global_string_const(36));
#line 494
___nl__im_ptr__57 = NULL;
#line 494
___nl__im_ptr__58 = &(___nl__rec__46.header0field);
#line 495
c_rt_lib0move(___nl__im_ptr__58,___get_global_string_const(36));
#line 495
___nl__im_ptr__58 = NULL;
#line 495
___nl__im_ptr__59 = &(___nl__rec__46.fun_args0field);
#line 496
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0array_mk(0));
#line 496
___nl__im_ptr__59 = NULL;
#line 496
___nl__im_ptr__60 = &(___nl__rec__46.ret_reg_type0field);
#line 497
c_rt_lib0move(___nl__im_ptr__60, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 497
___nl__im_ptr__60 = NULL;
#line 497
___nl__rec_ptr__61 = &(___nl__rec__46.const0field);
#line 498
;
#line 498
___nl__int_ptr__62 = &(___nl__rec_ptr__61->dynamic_nr0field);
#line 499
(*___nl__int_ptr__62) = 0;
#line 499
___nl__int_ptr__62 = NULL;
#line 499
___nl__rec_ptr__63 = &(___nl__rec_ptr__61->int0field);
#line 500
;
#line 500
___nl__arr_ptr__64 = &(___nl__rec_ptr__63->arr0field);
#line 500
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__64));
(*___nl__arr_ptr__64).size = 0;
(*___nl__arr_ptr__64).capacity = 0;
(*___nl__arr_ptr__64).value = NULL;
#line 500
___nl__arr_ptr__64 = NULL;
#line 500
___nl__im_ptr__65 = &(___nl__rec_ptr__63->hash0field);
#line 500
c_rt_lib0move(___nl__im_ptr__65, c_rt_lib0hash_mk(0));
#line 500
___nl__im_ptr__65 = NULL;
#line 500
___nl__rec_ptr__63 = NULL;
#line 500
___nl__rec_ptr__66 = &(___nl__rec_ptr__61->string0field);
#line 501
;
#line 501
___nl__arr_ptr__67 = &(___nl__rec_ptr__66->arr0field);
#line 501
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__67));
(*___nl__arr_ptr__67).size = 0;
(*___nl__arr_ptr__67).capacity = 0;
(*___nl__arr_ptr__67).value = NULL;
#line 501
___nl__arr_ptr__67 = NULL;
#line 501
___nl__im_ptr__68 = &(___nl__rec_ptr__66->hash0field);
#line 501
c_rt_lib0move(___nl__im_ptr__68, c_rt_lib0hash_mk(0));
#line 501
___nl__im_ptr__68 = NULL;
#line 501
___nl__rec_ptr__66 = NULL;
#line 501
___nl__rec_ptr__69 = &(___nl__rec_ptr__61->singleton0field);
#line 502
;
#line 502
___nl__arr_ptr__70 = &(___nl__rec_ptr__69->arr0field);
#line 502
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__70));
(*___nl__arr_ptr__70).size = 0;
(*___nl__arr_ptr__70).capacity = 0;
(*___nl__arr_ptr__70).value = NULL;
#line 502
___nl__arr_ptr__70 = NULL;
#line 502
___nl__im_ptr__71 = &(___nl__rec_ptr__69->hash0field);
#line 502
c_rt_lib0move(___nl__im_ptr__71, c_rt_lib0hash_mk(0));
#line 502
___nl__im_ptr__71 = NULL;
#line 502
___nl__rec_ptr__69 = NULL;
#line 502
___nl__rec_ptr__61 = NULL;
#line 502
___nl__im_ptr__72 = &(___nl__rec__46.mod_name0field);
#line 504
c_rt_lib0move(___nl__im_ptr__72,___get_global_string_const(36));
#line 504
___nl__im_ptr__72 = NULL;
#line 504
___nl__hash_ptr__73 = &(___nl__rec__46.additional_imports0field);
#line 505
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__73));
(*___nl__hash_ptr__73).size = 0;
(*___nl__hash_ptr__73).capacity = 0;
(*___nl__hash_ptr__73).keys = NULL;
(*___nl__hash_ptr__73).values = NULL;
#line 505
___nl__hash_ptr__73 = NULL;
#line 505
___nl__im_ptr__74 = &(___nl__rec__46.defined_types0field);
#line 506
c_rt_lib0move(___nl__im_ptr__74, c_rt_lib0hash_mk(0));
#line 506
___nl__im_ptr__74 = NULL;
#line 508
c_rt_lib0move(&___nl__im__75,___get_global_string_const(135));
#line 508
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 508
c_rt_lib0clear(&___nl__im__75);
#line 509
c_rt_lib0move(&___nl__im__77, compiler_priv0get_mathematical_func(___nl__im__0));
#line 509
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(95)));
#line 509
c_rt_lib0move(&___nl__im__76, post_processing0init(___nl__im__77, ___nl__im__78));
#line 509
c_rt_lib0clear(&___nl__im__77);
#line 509
c_rt_lib0clear(&___nl__im__78);
#line 510
c_rt_lib0move(&___nl__im__79,___get_global_string_const(146));
#line 510
c_rt_lib0delete(profile0end(___nl__im__79));
#line 510
c_rt_lib0clear(&___nl__im__79);
#line 512
c_rt_lib0move(&___nl__im__80,___get_global_string_const(147));
#line 512
c_rt_lib0delete(profile0begin(___nl__im__80));
#line 512
c_rt_lib0clear(&___nl__im__80);
#line 513
c_rt_lib0move(&___nl__im__81, compiler_priv0translate(___nl__im__1, ___nl__im__1, &___nl__im__76));
#line 514
c_rt_lib0move(&___nl__im__82,___get_global_string_const(147));
#line 514
c_rt_lib0delete(profile0end(___nl__im__82));
#line 514
c_rt_lib0clear(&___nl__im__82);
#line 516
c_rt_lib0move(&___nl__im__84,___get_global_string_const(144));
#line 516
___nl__bool__83 = hash0has_key(___nl__im__81, ___nl__im__84);
#line 516
c_rt_lib0clear(&___nl__im__84);
#line 516
___nl__bool__83 = !___nl__bool__83;
#line 516
if(___nl__bool__83){ goto label_268;}
#line 517
c_rt_lib0move(&___nl__im__85,___get_global_string_const(148));
#line 517
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(144)));
#line 517
c_rt_lib0move(&___nl__im__86, dfile_dbg0ssave(___nl__im__87));
#line 517
c_rt_lib0clear(&___nl__im__87);
#line 517
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__85, ___nl__im__86));
#line 517
c_rt_lib0clear(&___nl__im__85);
#line 517
c_rt_lib0clear(&___nl__im__86);
#line 518
goto label_268;
#line 518
label_268:
;
#line 518
//clear ___nl__bool__83;
#line 520
c_rt_lib0move(&___nl__im__88,___get_global_string_const(149));
#line 520
c_rt_lib0delete(profile0begin(___nl__im__88));
#line 520
c_rt_lib0clear(&___nl__im__88);
#line 521
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(93)));
#line 521
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 521
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__81, ___nl__im__10, ___nl__im__89, &___nl__rec__46, ___nl__im__90));
#line 521
c_rt_lib0clear(&___nl__im__89);
#line 521
c_rt_lib0clear(&___nl__im__90);
#line 522
c_rt_lib0move(&___nl__im__91,___get_global_string_const(149));
#line 522
c_rt_lib0delete(profile0end(___nl__im__91));
#line 522
c_rt_lib0clear(&___nl__im__91);
#line 523
goto label_363;
#line 523
label_282:
;
#line 524
c_rt_lib0move(&___nl__im__95, c_rt_lib0init_iter(___nl__im__1));
#line 524
label_284:
;
#line 524
___nl__bool__93 = c_rt_lib0is_end_hash(___nl__im__95);
#line 524
if(___nl__bool__93){ goto label_361;}
#line 524
c_rt_lib0move(&___nl__im__92, c_rt_lib0get_key_iter(___nl__im__95));
#line 524
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__92));
#line 525
c_rt_lib0move(&___nl__im__97,___get_global_string_const(136));
#line 525
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__92));
#line 525
c_rt_lib0clear(&___nl__im__97);
#line 525
c_rt_lib0delete(c_fe_lib0print(___nl__im__96));
#line 525
c_rt_lib0clear(&___nl__im__96);
#line 526
c_rt_lib0move(&___nl__im__100, hash0get_value(___nl__im__10, ___nl__im__92));
#line 526
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(74)));
#line 526
c_rt_lib0clear(&___nl__im__100);
#line 526
c_rt_lib0move(&___nl__im__98, compiler_priv0save_module_to_file(___nl__im__94, ___nl__im__99));
#line 526
c_rt_lib0clear(&___nl__im__99);
#line 526
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(77));
#line 526
if(___nl__bool__101){ goto label_306;}
#line 529
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(78));
#line 529
if(___nl__bool__101){ goto label_346;}
#line 529
c_rt_lib0move(&___nl__im__102,___get_global_string_const(15));
#line 529
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(2, ___nl__im__102, ___nl__im__98));
#line 529
nl_die_arg(___nl__im__102);
#line 526
label_306:
;
#line 526
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(77)));
#line 526
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 527
c_rt_lib0move(&___nl__im__106,___get_global_string_const(137));
#line 527
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__103));
#line 527
c_rt_lib0clear(&___nl__im__106);
#line 527
c_rt_lib0delete(c_fe_lib0print(___nl__im__105));
#line 527
c_rt_lib0clear(&___nl__im__105);
#line 528
___nl__int__107 = 1;
#line 528
c_rt_lib0clear(&___nl__im__0);
#line 528
c_rt_lib0clear(&___nl__im__1);
#line 528
c_rt_lib0clear(&___nl__im__2);
#line 528
//clear ___nl__int__9;
#line 528
c_rt_lib0clear(&___nl__im__10);
#line 528
c_rt_lib0clear(&___nl__im__11);
#line 528
//clear ___nl__bool__12;
#line 528
c_rt_lib0clear(&___nl__im__13);
#line 528
c_rt_lib0clear(&___nl__im__14);
#line 528
c_rt_lib0clear(&___nl__im__15);
#line 528
//clear ___nl__bool__17;
#line 528
c_rt_lib0clear(&___nl__im__18);
#line 528
c_rt_lib0clear(&___nl__im__19);
#line 528
c_rt_lib0clear(&___nl__im__20);
#line 528
c_rt_lib0clear(&___nl__im__21);
#line 528
c_rt_lib0clear(&___nl__im__22);
#line 528
//clear ___nl__bool__42;
#line 528
generator_c0state_t0type0clean(___nl__rec__46);;
#line 528
c_rt_lib0clear(&___nl__im__76);
#line 528
c_rt_lib0clear(&___nl__im__81);
#line 528
c_rt_lib0clear(&___nl__im__92);
#line 528
//clear ___nl__bool__93;
#line 528
c_rt_lib0clear(&___nl__im__94);
#line 528
c_rt_lib0clear(&___nl__im__95);
#line 528
c_rt_lib0clear(&___nl__im__98);
#line 528
//clear ___nl__bool__101;
#line 528
c_rt_lib0clear(&___nl__im__102);
#line 528
c_rt_lib0clear(&___nl__im__103);
#line 528
c_rt_lib0clear(&___nl__im__104);
#line 528
return ___nl__int__107;
#line 529
goto label_350;
#line 529
label_346:
;
#line 529
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(78)));
#line 529
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 530
goto label_350;
#line 530
label_350:
;
#line 530
c_rt_lib0clear(&___nl__im__98);
#line 530
//clear ___nl__bool__101;
#line 530
c_rt_lib0clear(&___nl__im__102);
#line 530
c_rt_lib0clear(&___nl__im__103);
#line 530
c_rt_lib0clear(&___nl__im__104);
#line 530
//clear ___nl__int__107;
#line 530
c_rt_lib0clear(&___nl__im__108);
#line 530
c_rt_lib0clear(&___nl__im__109);
#line 531
c_rt_lib0move(&___nl__im__95, c_rt_lib0next_iter(___nl__im__95));
#line 531
goto label_284;
#line 531
label_361:
;
#line 532
goto label_363;
#line 532
label_363:
;
#line 532
//clear ___nl__bool__42;
#line 532
generator_c0state_t0type0clean(___nl__rec__46);;
#line 532
c_rt_lib0clear(&___nl__im__76);
#line 532
c_rt_lib0clear(&___nl__im__81);
#line 532
c_rt_lib0clear(&___nl__im__92);
#line 532
//clear ___nl__bool__93;
#line 532
c_rt_lib0clear(&___nl__im__94);
#line 532
c_rt_lib0clear(&___nl__im__95);
#line 532
c_rt_lib0clear(&___nl__im__98);
#line 532
//clear ___nl__bool__101;
#line 532
c_rt_lib0clear(&___nl__im__102);
#line 532
c_rt_lib0clear(&___nl__im__103);
#line 532
c_rt_lib0clear(&___nl__im__104);
#line 532
//clear ___nl__int__107;
#line 532
c_rt_lib0clear(&___nl__im__108);
#line 532
c_rt_lib0clear(&___nl__im__109);
#line 533
___nl__int__110 = 0;
#line 533
c_rt_lib0clear(&___nl__im__0);
#line 533
c_rt_lib0clear(&___nl__im__1);
#line 533
c_rt_lib0clear(&___nl__im__2);
#line 533
//clear ___nl__int__9;
#line 533
c_rt_lib0clear(&___nl__im__10);
#line 533
c_rt_lib0clear(&___nl__im__11);
#line 533
//clear ___nl__bool__12;
#line 533
c_rt_lib0clear(&___nl__im__13);
#line 533
c_rt_lib0clear(&___nl__im__14);
#line 533
c_rt_lib0clear(&___nl__im__15);
#line 533
//clear ___nl__bool__17;
#line 533
c_rt_lib0clear(&___nl__im__18);
#line 533
c_rt_lib0clear(&___nl__im__19);
#line 533
c_rt_lib0clear(&___nl__im__20);
#line 533
c_rt_lib0clear(&___nl__im__21);
#line 533
c_rt_lib0clear(&___nl__im__22);
#line 533
return ___nl__int__110;
return 0;

}

ImmT  compiler_priv0construct_error_message(compiler_lib0error_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 537
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 541
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 541
___nl__int__4 = string0length(___nl__im__5);
#line 541
c_rt_lib0clear(&___nl__im__5);
#line 541
___nl__int__6 = 0;
#line 541
___nl__bool__3 = ___nl__int__4 == ___nl__int__6;
#line 541
//clear ___nl__int__4;
#line 541
//clear ___nl__int__6;
#line 541
___nl__bool__3 = !___nl__bool__3;
#line 541
___nl__bool__3 = !___nl__bool__3;
#line 541
if(___nl__bool__3){ goto label_32;}
#line 538
c_rt_lib0move(&___nl__im__8,___get_global_string_const(151));
#line 538
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 538
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 538
c_rt_lib0clear(&___nl__im__11);
#line 538
if(___nl__bool__10){ goto label_18;}
#line 540
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 540
goto label_24;
#line 540
label_18:
;
#line 539
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 539
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__1, ___nl__im__13));
#line 539
c_rt_lib0clear(&___nl__im__13);
#line 539
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(73)));
#line 539
c_rt_lib0clear(&___nl__im__12);
#line 539
label_24:
;
#line 539
//clear ___nl__bool__10;
#line 539
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 539
c_rt_lib0clear(&___nl__im__8);
#line 539
c_rt_lib0clear(&___nl__im__9);
#line 539
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__7));
#line 539
c_rt_lib0clear(&___nl__im__7);
#line 539
goto label_32;
#line 539
label_32:
;
#line 539
//clear ___nl__bool__3;
#line 542
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(152)));
#line 542
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 542
c_rt_lib0clear(&___nl__im__16);
#line 542
___nl__int__17 = 1;
#line 542
___nl__int__17 = -___nl__int__17;
#line 542
___nl__bool__14 = ___nl__int__15 == ___nl__int__17;
#line 542
//clear ___nl__int__15;
#line 542
//clear ___nl__int__17;
#line 542
___nl__bool__14 = !___nl__bool__14;
#line 542
___nl__bool__14 = !___nl__bool__14;
#line 542
if(___nl__bool__14){ goto label_57;}
#line 542
c_rt_lib0move(&___nl__im__19,___get_global_string_const(153));
#line 542
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(152)));
#line 542
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 542
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 542
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 542
c_rt_lib0clear(&___nl__im__19);
#line 542
//clear ___nl__int__20;
#line 542
c_rt_lib0clear(&___nl__string__22);
#line 542
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 542
c_rt_lib0clear(&___nl__im__18);
#line 542
goto label_57;
#line 542
label_57:
;
#line 542
//clear ___nl__bool__14;
#line 543
c_rt_lib0move(&___nl__im__25, string0lf());
#line 543
c_rt_lib0move(&___nl__im__26,___get_global_string_const(154));
#line 543
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 543
c_rt_lib0clear(&___nl__im__25);
#line 543
c_rt_lib0clear(&___nl__im__26);
#line 543
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(155)));
#line 543
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 543
c_rt_lib0clear(&___nl__im__24);
#line 543
c_rt_lib0clear(&___nl__im__27);
#line 543
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 543
c_rt_lib0clear(&___nl__im__23);
#line 544
c_rt_lib0clear(&___nl__im__0);
#line 544
c_rt_lib0clear(&___nl__im__1);
#line 544
return ___nl__im__2;
return NULL;

}

INT  compiler_priv0show_and_count_errors(compiler0errors_group_t0type ___nl__im__0,compiler0input_type0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
compiler_priv0__const__init();
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
bool  ___nl__bool__71 = false;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__string__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__string__88 = NULL;
#line 548
___nl__int__3 = 0;
#line 549
___nl__int__4 = 0;
#line 550
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 550
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 550
label_4:
;
#line 550
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 550
if(___nl__bool__7){ goto label_159;}
#line 550
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 550
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 551
c_rt_lib0move(&___nl__im__10,___get_global_string_const(156));
#line 552
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 552
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(91));
#line 552
c_rt_lib0clear(&___nl__im__12);
#line 552
___nl__bool__11 = !___nl__bool__11;
#line 552
if(___nl__bool__11){ goto label_17;}
#line 552
c_rt_lib0move(&___nl__im__10,___get_global_string_const(157));
#line 552
goto label_17;
#line 552
label_17:
;
#line 552
//clear ___nl__bool__11;
#line 553
___nl__int__14 = 0;
#line 553
___nl__int__15 = 1;
#line 553
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 553
label_22:
;
#line 553
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 553
if(___nl__bool__17){ goto label_35;}
#line 553
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 553
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 554
c_rt_lib0move(&___nl__im__20, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 554
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__10, ___nl__im__20));
#line 554
c_rt_lib0clear(&___nl__im__20);
#line 554
c_rt_lib0delete(c_fe_lib0print(___nl__im__19));
#line 554
c_rt_lib0clear(&___nl__im__19);
#line 554
c_rt_lib0clear(&___nl__im__13);
#line 555
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 555
goto label_22;
#line 555
label_35:
;
#line 556
___nl__int__21 = c_rt_lib0array_len(___nl__im__8);
#line 556
___nl__int__3 = ___nl__int__3 + ___nl__int__21;
#line 556
//clear ___nl__int__21;
#line 557
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 557
___nl__bool__22 = hash0has_key(___nl__im__23, ___nl__im__6);
#line 557
c_rt_lib0clear(&___nl__im__23);
#line 557
___nl__bool__22 = !___nl__bool__22;
#line 557
if(___nl__bool__22){ goto label_68;}
#line 558
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 558
c_rt_lib0move(&___nl__im__24, hash0get_value(___nl__im__25, ___nl__im__6));
#line 558
c_rt_lib0clear(&___nl__im__25);
#line 559
___nl__int__27 = 0;
#line 559
___nl__int__28 = 1;
#line 559
___nl__int__29 = c_rt_lib0array_len(___nl__im__24);
#line 559
label_50:
;
#line 559
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 559
if(___nl__bool__30){ goto label_63;}
#line 559
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__24, ___nl__int__27));
#line 559
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 560
c_rt_lib0move(&___nl__im__33, compiler_priv0construct_error_message(___nl__im__26, ___nl__im__2));
#line 560
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__10, ___nl__im__33));
#line 560
c_rt_lib0clear(&___nl__im__33);
#line 560
c_rt_lib0delete(c_fe_lib0print(___nl__im__32));
#line 560
c_rt_lib0clear(&___nl__im__32);
#line 560
c_rt_lib0clear(&___nl__im__26);
#line 561
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 561
goto label_50;
#line 561
label_63:
;
#line 562
___nl__int__34 = c_rt_lib0array_len(___nl__im__24);
#line 562
___nl__int__3 = ___nl__int__3 + ___nl__int__34;
#line 562
//clear ___nl__int__34;
#line 563
goto label_68;
#line 563
label_68:
;
#line 563
//clear ___nl__bool__22;
#line 563
c_rt_lib0clear(&___nl__im__24);
#line 563
c_rt_lib0clear(&___nl__im__26);
#line 563
//clear ___nl__int__27;
#line 563
//clear ___nl__int__28;
#line 563
//clear ___nl__int__29;
#line 563
//clear ___nl__bool__30;
#line 563
c_rt_lib0clear(&___nl__im__31);
#line 564
c_rt_lib0move(&___nl__im__10,___get_global_string_const(157));
#line 565
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(58)));
#line 565
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__36, ___nl__im__6));
#line 565
c_rt_lib0clear(&___nl__im__36);
#line 566
___nl__int__38 = 0;
#line 566
___nl__int__39 = 1;
#line 566
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 566
label_84:
;
#line 566
___nl__bool__41 = ___nl__int__38 >= ___nl__int__40;
#line 566
if(___nl__bool__41){ goto label_99;}
#line 566
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 566
c_rt_lib0copy(&___nl__im__37, ___nl__im__42);
#line 567
c_rt_lib0move(&___nl__im__44,___get_global_string_const(157));
#line 567
c_rt_lib0move(&___nl__im__45, compiler_priv0construct_error_message(___nl__im__37, ___nl__im__2));
#line 567
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__45));
#line 567
c_rt_lib0clear(&___nl__im__44);
#line 567
c_rt_lib0clear(&___nl__im__45);
#line 567
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 567
c_rt_lib0clear(&___nl__im__43);
#line 567
c_rt_lib0clear(&___nl__im__37);
#line 568
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 568
goto label_84;
#line 568
label_99:
;
#line 569
___nl__int__46 = c_rt_lib0array_len(___nl__im__35);
#line 569
___nl__int__4 = ___nl__int__4 + ___nl__int__46;
#line 569
//clear ___nl__int__46;
#line 570
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 570
___nl__bool__47 = hash0has_key(___nl__im__48, ___nl__im__6);
#line 570
c_rt_lib0clear(&___nl__im__48);
#line 570
___nl__bool__47 = !___nl__bool__47;
#line 570
if(___nl__bool__47){ goto label_134;}
#line 571
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 571
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__50, ___nl__im__6));
#line 571
c_rt_lib0clear(&___nl__im__50);
#line 572
___nl__int__52 = 0;
#line 572
___nl__int__53 = 1;
#line 572
___nl__int__54 = c_rt_lib0array_len(___nl__im__49);
#line 572
label_114:
;
#line 572
___nl__bool__55 = ___nl__int__52 >= ___nl__int__54;
#line 572
if(___nl__bool__55){ goto label_129;}
#line 572
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__49, ___nl__int__52));
#line 572
c_rt_lib0copy(&___nl__im__51, ___nl__im__56);
#line 573
c_rt_lib0move(&___nl__im__58,___get_global_string_const(157));
#line 573
c_rt_lib0move(&___nl__im__59, compiler_priv0construct_error_message(___nl__im__51, ___nl__im__2));
#line 573
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 573
c_rt_lib0clear(&___nl__im__58);
#line 573
c_rt_lib0clear(&___nl__im__59);
#line 573
c_rt_lib0delete(c_fe_lib0print(___nl__im__57));
#line 573
c_rt_lib0clear(&___nl__im__57);
#line 573
c_rt_lib0clear(&___nl__im__51);
#line 574
___nl__int__52 = ___nl__int__52 + ___nl__int__53;
#line 574
goto label_114;
#line 574
label_129:
;
#line 575
___nl__int__60 = c_rt_lib0array_len(___nl__im__49);
#line 575
___nl__int__4 = ___nl__int__4 + ___nl__int__60;
#line 575
//clear ___nl__int__60;
#line 576
goto label_134;
#line 576
label_134:
;
#line 576
//clear ___nl__bool__47;
#line 576
c_rt_lib0clear(&___nl__im__49);
#line 576
c_rt_lib0clear(&___nl__im__51);
#line 576
//clear ___nl__int__52;
#line 576
//clear ___nl__int__53;
#line 576
//clear ___nl__int__54;
#line 576
//clear ___nl__bool__55;
#line 576
c_rt_lib0clear(&___nl__im__56);
#line 576
c_rt_lib0clear(&___nl__im__10);
#line 576
c_rt_lib0clear(&___nl__im__13);
#line 576
//clear ___nl__int__14;
#line 576
//clear ___nl__int__15;
#line 576
//clear ___nl__int__16;
#line 576
//clear ___nl__bool__17;
#line 576
c_rt_lib0clear(&___nl__im__18);
#line 576
c_rt_lib0clear(&___nl__im__35);
#line 576
c_rt_lib0clear(&___nl__im__37);
#line 576
//clear ___nl__int__38;
#line 576
//clear ___nl__int__39;
#line 576
//clear ___nl__int__40;
#line 576
//clear ___nl__bool__41;
#line 576
c_rt_lib0clear(&___nl__im__42);
#line 577
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 577
goto label_4;
#line 577
label_159:
;
#line 578
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 578
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(158));
#line 578
if(___nl__bool__62){ goto label_168;}
#line 585
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(78));
#line 585
if(___nl__bool__62){ goto label_202;}
#line 585
c_rt_lib0move(&___nl__im__63,___get_global_string_const(15));
#line 585
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__61));
#line 585
nl_die_arg(___nl__im__63);
#line 578
label_168:
;
#line 578
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__61, ___get_global_string_const(158)));
#line 578
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 579
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 580
___nl__int__68 = 0;
#line 580
___nl__int__69 = 1;
#line 580
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 580
label_175:
;
#line 580
___nl__bool__71 = ___nl__int__68 >= ___nl__int__70;
#line 580
if(___nl__bool__71){ goto label_188;}
#line 580
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__68));
#line 580
c_rt_lib0copy(&___nl__im__67, ___nl__im__72);
#line 581
c_rt_lib0move(&___nl__im__74,___get_global_string_const(159));
#line 581
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__67, ___nl__im__74));
#line 581
c_rt_lib0clear(&___nl__im__74);
#line 581
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__73));
#line 581
c_rt_lib0clear(&___nl__im__73);
#line 581
c_rt_lib0clear(&___nl__im__67);
#line 582
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 582
goto label_175;
#line 582
label_188:
;
#line 583
c_rt_lib0move(&___nl__im__77,___get_global_string_const(160));
#line 583
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__66));
#line 583
c_rt_lib0clear(&___nl__im__77);
#line 583
c_rt_lib0move(&___nl__im__78,___get_global_string_const(161));
#line 583
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 583
c_rt_lib0clear(&___nl__im__76);
#line 583
c_rt_lib0clear(&___nl__im__78);
#line 583
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 583
c_rt_lib0clear(&___nl__im__75);
#line 584
___nl__int__79 = 1;
#line 584
___nl__int__4 = ___nl__int__4 + ___nl__int__79;
#line 584
//clear ___nl__int__79;
#line 585
goto label_204;
#line 585
label_202:
;
#line 586
goto label_204;
#line 586
label_204:
;
#line 587
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 587
___nl__bool__80 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(91));
#line 587
c_rt_lib0clear(&___nl__im__81);
#line 587
___nl__bool__80 = !___nl__bool__80;
#line 587
if(___nl__bool__80){ goto label_213;}
#line 588
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 589
___nl__int__3 = 0;
#line 590
goto label_213;
#line 590
label_213:
;
#line 590
//clear ___nl__bool__80;
#line 591
c_rt_lib0move(&___nl__im__85,___get_global_string_const(162));
#line 591
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__4));
#line 591
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 591
c_rt_lib0clear(&___nl__im__85);
#line 591
c_rt_lib0clear(&___nl__string__86);
#line 591
c_rt_lib0move(&___nl__im__87,___get_global_string_const(163));
#line 591
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 591
c_rt_lib0clear(&___nl__im__84);
#line 591
c_rt_lib0clear(&___nl__im__87);
#line 591
c_rt_lib0move(&___nl__string__88, c_rt_lib0int_to_string(___nl__int__3));
#line 591
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__string__88));
#line 591
c_rt_lib0clear(&___nl__im__83);
#line 591
c_rt_lib0clear(&___nl__string__88);
#line 591
c_rt_lib0delete(c_fe_lib0print(___nl__im__82));
#line 591
c_rt_lib0clear(&___nl__im__82);
#line 592
c_rt_lib0clear(&___nl__im__0);
#line 592
c_rt_lib0clear(&___nl__im__1);
#line 592
c_rt_lib0clear(&___nl__im__2);
#line 592
//clear ___nl__int__3;
#line 592
c_rt_lib0clear(&___nl__im__5);
#line 592
c_rt_lib0clear(&___nl__im__6);
#line 592
//clear ___nl__bool__7;
#line 592
c_rt_lib0clear(&___nl__im__8);
#line 592
c_rt_lib0clear(&___nl__im__9);
#line 592
c_rt_lib0clear(&___nl__im__10);
#line 592
c_rt_lib0clear(&___nl__im__13);
#line 592
//clear ___nl__int__14;
#line 592
//clear ___nl__int__15;
#line 592
//clear ___nl__int__16;
#line 592
//clear ___nl__bool__17;
#line 592
c_rt_lib0clear(&___nl__im__18);
#line 592
c_rt_lib0clear(&___nl__im__35);
#line 592
c_rt_lib0clear(&___nl__im__37);
#line 592
//clear ___nl__int__38;
#line 592
//clear ___nl__int__39;
#line 592
//clear ___nl__int__40;
#line 592
//clear ___nl__bool__41;
#line 592
c_rt_lib0clear(&___nl__im__42);
#line 592
c_rt_lib0clear(&___nl__im__61);
#line 592
//clear ___nl__bool__62;
#line 592
c_rt_lib0clear(&___nl__im__63);
#line 592
c_rt_lib0clear(&___nl__im__64);
#line 592
c_rt_lib0clear(&___nl__im__65);
#line 592
c_rt_lib0clear(&___nl__im__66);
#line 592
c_rt_lib0clear(&___nl__im__67);
#line 592
//clear ___nl__int__68;
#line 592
//clear ___nl__int__69;
#line 592
//clear ___nl__int__70;
#line 592
//clear ___nl__bool__71;
#line 592
c_rt_lib0clear(&___nl__im__72);
#line 592
return ___nl__int__4;
return 0;

}

ImmT  compiler_priv0translate(ImmT  ___nl__im__0,ImmT  ___nl__im__1,post_processing_t0state_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 597
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 598
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 599
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__1));
#line 599
label_3:
;
#line 599
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 599
if(___nl__bool__6){ goto label_61;}
#line 599
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 599
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__5));
#line 600
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(164)));
#line 600
___nl__int__11 = 0;
#line 600
___nl__int__12 = 1;
#line 600
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 600
label_12:
;
#line 600
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 600
if(___nl__bool__14){ goto label_46;}
#line 600
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 600
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 601
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(165)));
#line 601
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(76));
#line 601
if(___nl__bool__17){ goto label_25;}
#line 602
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(75));
#line 602
if(___nl__bool__17){ goto label_27;}
#line 602
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 602
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__16));
#line 602
nl_die_arg(___nl__im__18);
#line 601
label_25:
;
#line 602
goto label_42;
#line 602
label_27:
;
#line 602
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(75)));
#line 602
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 603
c_rt_lib0move(&___nl__im__24,___get_global_string_const(34));
#line 603
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__5, ___nl__im__24));
#line 603
c_rt_lib0clear(&___nl__im__24);
#line 603
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(166)));
#line 603
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 603
c_rt_lib0clear(&___nl__im__23);
#line 603
c_rt_lib0clear(&___nl__im__25);
#line 603
c_rt_lib0copy(&___nl__im__21, ___nl__im__19);
#line 603
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__4, ___nl__im__22, ___nl__im__21));
#line 603
c_rt_lib0clear(&___nl__im__21);
#line 603
c_rt_lib0clear(&___nl__im__22);
#line 604
goto label_42;
#line 604
label_42:
;
#line 604
c_rt_lib0clear(&___nl__im__10);
#line 605
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 605
goto label_12;
#line 605
label_46:
;
#line 605
c_rt_lib0clear(&___nl__im__9);
#line 605
c_rt_lib0clear(&___nl__im__10);
#line 605
//clear ___nl__int__11;
#line 605
//clear ___nl__int__12;
#line 605
//clear ___nl__int__13;
#line 605
//clear ___nl__bool__14;
#line 605
c_rt_lib0clear(&___nl__im__15);
#line 605
c_rt_lib0clear(&___nl__im__16);
#line 605
//clear ___nl__bool__17;
#line 605
c_rt_lib0clear(&___nl__im__18);
#line 605
c_rt_lib0clear(&___nl__im__19);
#line 605
c_rt_lib0clear(&___nl__im__20);
#line 606
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 606
goto label_3;
#line 606
label_61:
;
#line 607
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__0));
#line 607
label_63:
;
#line 607
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 607
if(___nl__bool__27){ goto label_73;}
#line 607
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 607
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__26));
#line 608
c_rt_lib0move(&___nl__im__30, translator0translate(___nl__im__28, ___nl__im__4));
#line 609
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__26, ___nl__im__30));
#line 609
c_rt_lib0clear(&___nl__im__30);
#line 610
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 610
goto label_63;
#line 610
label_73:
;
#line 611
c_rt_lib0delete(post_processing0find(___ref___im__2, &___nl__im__3));
#line 612
c_rt_lib0clear(&___nl__im__0);
#line 612
c_rt_lib0clear(&___nl__im__1);
#line 612
c_rt_lib0clear(&___nl__im__4);
#line 612
c_rt_lib0clear(&___nl__im__5);
#line 612
//clear ___nl__bool__6;
#line 612
c_rt_lib0clear(&___nl__im__7);
#line 612
c_rt_lib0clear(&___nl__im__8);
#line 612
c_rt_lib0clear(&___nl__im__9);
#line 612
c_rt_lib0clear(&___nl__im__10);
#line 612
//clear ___nl__int__11;
#line 612
//clear ___nl__int__12;
#line 612
//clear ___nl__int__13;
#line 612
//clear ___nl__bool__14;
#line 612
c_rt_lib0clear(&___nl__im__15);
#line 612
c_rt_lib0clear(&___nl__im__16);
#line 612
//clear ___nl__bool__17;
#line 612
c_rt_lib0clear(&___nl__im__18);
#line 612
c_rt_lib0clear(&___nl__im__19);
#line 612
c_rt_lib0clear(&___nl__im__20);
#line 612
c_rt_lib0clear(&___nl__im__26);
#line 612
//clear ___nl__bool__27;
#line 612
c_rt_lib0clear(&___nl__im__28);
#line 612
c_rt_lib0clear(&___nl__im__29);
#line 612
c_rt_lib0clear(&___nl__im__30);
#line 612
return ___nl__im__3;
return NULL;

}

ImmT  compiler_priv0check_modules(ImmT * ___ref___im__0,compiler0errors_group_t0type* ___ref___im__1,compiler0deref_t0type ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__2);
compiler_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__string__59 = NULL;
bool  ___nl__bool__60 = false;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__string__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
INT  ___nl__int__77 = 0;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__string__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__string__95 = NULL;
ImmT  ___nl__im__96 = NULL;
bool  ___nl__bool__97 = false;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
#line 617
c_rt_lib0move(&___nl__im__4,___get_global_string_const(167));
#line 617
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 617
c_rt_lib0clear(&___nl__im__4);
#line 618
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 619
___nl__bool__6 = ___nl__bool__3;
#line 619
___nl__bool__6 = !___nl__bool__6;
#line 619
if(___nl__bool__6){ goto label_52;}
#line 620
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 621
c_rt_lib0move(&___nl__im__9,___get_global_string_const(168));
#line 621
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 621
c_rt_lib0clear(&___nl__im__9);
#line 621
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(78));
#line 621
if(___nl__bool__10){ goto label_18;}
#line 624
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(77));
#line 624
if(___nl__bool__10){ goto label_28;}
#line 624
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 624
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 624
nl_die_arg(___nl__im__11);
#line 621
label_18:
;
#line 621
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(78)));
#line 621
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 622
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 623
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 623
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 623
c_rt_lib0clear(&___nl__im__15);
#line 623
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 623
c_rt_lib0clear(&___nl__im__14);
#line 624
goto label_32;
#line 624
label_28:
;
#line 624
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(77)));
#line 624
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 625
goto label_32;
#line 625
label_32:
;
#line 626
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 627
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 628
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 628
label_36:
;
#line 628
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 628
if(___nl__bool__21){ goto label_49;}
#line 628
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 628
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 629
___nl__bool__24 = true;
#line 629
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 629
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 629
//clear ___nl__bool__24;
#line 629
c_rt_lib0clear(&___nl__im__25);
#line 630
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 631
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 631
goto label_36;
#line 631
label_49:
;
#line 633
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 634
goto label_52;
#line 634
label_52:
;
#line 634
//clear ___nl__bool__6;
#line 634
c_rt_lib0clear(&___nl__im__7);
#line 634
c_rt_lib0clear(&___nl__im__8);
#line 634
//clear ___nl__bool__10;
#line 634
c_rt_lib0clear(&___nl__im__11);
#line 634
c_rt_lib0clear(&___nl__im__12);
#line 634
c_rt_lib0clear(&___nl__im__13);
#line 634
c_rt_lib0clear(&___nl__im__16);
#line 634
c_rt_lib0clear(&___nl__im__17);
#line 634
c_rt_lib0clear(&___nl__im__18);
#line 634
c_rt_lib0clear(&___nl__im__19);
#line 634
c_rt_lib0clear(&___nl__im__20);
#line 634
//clear ___nl__bool__21;
#line 634
c_rt_lib0clear(&___nl__im__22);
#line 634
c_rt_lib0clear(&___nl__im__23);
#line 635
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 635
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 635
c_rt_lib0clear(&___nl__im__27);
#line 636
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 636
___nl__int__30 = 0;
#line 636
___nl__int__31 = 1;
#line 636
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 636
label_75:
;
#line 636
___nl__bool__33 = ___nl__int__30 >= ___nl__int__32;
#line 636
if(___nl__bool__33){ goto label_109;}
#line 636
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 636
c_rt_lib0copy(&___nl__im__29, ___nl__im__34);
#line 637
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 638
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 638
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(150)));
#line 638
___nl__bool__36 = hash0has_key(___nl__im__37, ___nl__im__38);
#line 638
c_rt_lib0clear(&___nl__im__37);
#line 638
c_rt_lib0clear(&___nl__im__38);
#line 638
___nl__bool__36 = !___nl__bool__36;
#line 638
if(___nl__bool__36){ goto label_94;}
#line 639
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 639
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(150)));
#line 639
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__39, ___nl__im__40));
#line 639
c_rt_lib0clear(&___nl__im__39);
#line 639
c_rt_lib0clear(&___nl__im__40);
#line 640
goto label_94;
#line 640
label_94:
;
#line 640
//clear ___nl__bool__36;
#line 641
c_rt_lib0delete(array0push(&___nl__im__35, ___nl__im__29));
#line 642
c_rt_lib0move(&___nl__im__41,___get_global_string_const(60));
#line 642
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 642
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(150)));
#line 642
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__42, ___nl__im__35));
#line 642
c_rt_lib0move(&___nl__string__43,___get_global_string_const(60));
#line 642
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 642
c_rt_lib0clear(&___nl__im__41);
#line 642
c_rt_lib0clear(&___nl__im__42);
#line 642
c_rt_lib0clear(&___nl__string__43);
#line 642
c_rt_lib0clear(&___nl__im__29);
#line 643
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 643
goto label_75;
#line 643
label_109:
;
#line 644
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(123)));
#line 644
___nl__int__46 = 0;
#line 644
___nl__int__47 = 1;
#line 644
___nl__int__48 = c_rt_lib0array_len(___nl__im__44);
#line 644
label_114:
;
#line 644
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 644
if(___nl__bool__49){ goto label_148;}
#line 644
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__44, ___nl__int__46));
#line 644
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 645
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 646
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 646
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(150)));
#line 646
___nl__bool__52 = hash0has_key(___nl__im__53, ___nl__im__54);
#line 646
c_rt_lib0clear(&___nl__im__53);
#line 646
c_rt_lib0clear(&___nl__im__54);
#line 646
___nl__bool__52 = !___nl__bool__52;
#line 646
if(___nl__bool__52){ goto label_133;}
#line 647
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 647
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(150)));
#line 647
c_rt_lib0move(&___nl__im__51, hash0get_value(___nl__im__55, ___nl__im__56));
#line 647
c_rt_lib0clear(&___nl__im__55);
#line 647
c_rt_lib0clear(&___nl__im__56);
#line 648
goto label_133;
#line 648
label_133:
;
#line 648
//clear ___nl__bool__52;
#line 649
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__45));
#line 650
c_rt_lib0move(&___nl__im__57,___get_global_string_const(61));
#line 650
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 650
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(150)));
#line 650
c_rt_lib0delete(hash0set_value(&___nl__im__57, ___nl__im__58, ___nl__im__51));
#line 650
c_rt_lib0move(&___nl__string__59,___get_global_string_const(61));
#line 650
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 650
c_rt_lib0clear(&___nl__im__57);
#line 650
c_rt_lib0clear(&___nl__im__58);
#line 650
c_rt_lib0clear(&___nl__string__59);
#line 650
c_rt_lib0clear(&___nl__im__45);
#line 651
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 651
goto label_114;
#line 651
label_148:
;
#line 652
___nl__int__61 = 0;
#line 652
___nl__bool__60 = ___nl__int__26 == ___nl__int__61;
#line 652
//clear ___nl__int__61;
#line 652
___nl__bool__60 = !___nl__bool__60;
#line 652
___nl__bool__60 = !___nl__bool__60;
#line 652
if(___nl__bool__60){ goto label_167;}
#line 652
c_rt_lib0move(&___nl__im__64,___get_global_string_const(169));
#line 652
c_rt_lib0move(&___nl__string__65, c_rt_lib0int_to_string(___nl__int__26));
#line 652
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__string__65));
#line 652
c_rt_lib0clear(&___nl__im__64);
#line 652
c_rt_lib0clear(&___nl__string__65);
#line 652
c_rt_lib0move(&___nl__im__66,___get_global_string_const(170));
#line 652
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__66));
#line 652
c_rt_lib0clear(&___nl__im__63);
#line 652
c_rt_lib0clear(&___nl__im__66);
#line 652
c_rt_lib0delete(c_fe_lib0print(___nl__im__62));
#line 652
c_rt_lib0clear(&___nl__im__62);
#line 652
goto label_167;
#line 652
label_167:
;
#line 652
//clear ___nl__bool__60;
#line 653
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(0));
#line 654
c_rt_lib0move(&___nl__im__71, c_rt_lib0init_iter((*___ref___im__0)));
#line 654
label_171:
;
#line 654
___nl__bool__69 = c_rt_lib0is_end_hash(___nl__im__71);
#line 654
if(___nl__bool__69){ goto label_204;}
#line 654
c_rt_lib0move(&___nl__im__68, c_rt_lib0get_key_iter(___nl__im__71));
#line 654
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__68));
#line 655
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(0));
#line 656
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(171)));
#line 656
___nl__int__75 = 0;
#line 656
___nl__int__76 = 1;
#line 656
___nl__int__77 = c_rt_lib0array_len(___nl__im__73);
#line 656
label_181:
;
#line 656
___nl__bool__78 = ___nl__int__75 >= ___nl__int__77;
#line 656
if(___nl__bool__78){ goto label_192;}
#line 656
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__73, ___nl__int__75));
#line 656
c_rt_lib0copy(&___nl__im__74, ___nl__im__79);
#line 657
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(166)));
#line 657
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__80));
#line 657
c_rt_lib0clear(&___nl__im__80);
#line 657
c_rt_lib0clear(&___nl__im__74);
#line 658
___nl__int__75 = ___nl__int__75 + ___nl__int__76;
#line 658
goto label_181;
#line 658
label_192:
;
#line 659
c_rt_lib0delete(hash0set_value(&___nl__im__67, ___nl__im__68, ___nl__im__72));
#line 659
c_rt_lib0clear(&___nl__im__72);
#line 659
c_rt_lib0clear(&___nl__im__73);
#line 659
c_rt_lib0clear(&___nl__im__74);
#line 659
//clear ___nl__int__75;
#line 659
//clear ___nl__int__76;
#line 659
//clear ___nl__int__77;
#line 659
//clear ___nl__bool__78;
#line 659
c_rt_lib0clear(&___nl__im__79);
#line 660
c_rt_lib0move(&___nl__im__71, c_rt_lib0next_iter(___nl__im__71));
#line 660
goto label_171;
#line 660
label_204:
;
#line 661
c_rt_lib0move(&___nl__im__81, module_checker0search_loops(___nl__im__67));
#line 661
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 661
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(62), ___nl__im__82);
#line 661
c_rt_lib0clear(&___nl__im__81);
#line 661
c_rt_lib0clear(&___nl__im__82);
#line 662
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(75));
#line 662
___nl__bool__83 = !___nl__bool__83;
#line 662
if(___nl__bool__83){ goto label_253;}
#line 663
c_rt_lib0move(&___nl__im__85,___get_global_string_const(172));
#line 663
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(94)));
#line 663
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(173)));
#line 663
c_rt_lib0clear(&___nl__im__88);
#line 663
___nl__int__86 = c_rt_lib0array_len(___nl__im__87);
#line 663
c_rt_lib0clear(&___nl__im__87);
#line 663
c_rt_lib0move(&___nl__string__89, c_rt_lib0int_to_string(___nl__int__86));
#line 663
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__89));
#line 663
c_rt_lib0clear(&___nl__im__85);
#line 663
//clear ___nl__int__86;
#line 663
c_rt_lib0clear(&___nl__string__89);
#line 663
c_rt_lib0delete(c_fe_lib0print(___nl__im__84));
#line 663
c_rt_lib0clear(&___nl__im__84);
#line 664
c_rt_lib0move(&___nl__im__91,___get_global_string_const(174));
#line 664
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(94)));
#line 664
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(175)));
#line 664
c_rt_lib0clear(&___nl__im__94);
#line 664
___nl__int__92 = c_rt_lib0array_len(___nl__im__93);
#line 664
c_rt_lib0clear(&___nl__im__93);
#line 664
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__92));
#line 664
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__string__95));
#line 664
c_rt_lib0clear(&___nl__im__91);
#line 664
//clear ___nl__int__92;
#line 664
c_rt_lib0clear(&___nl__string__95);
#line 664
c_rt_lib0delete(c_fe_lib0print(___nl__im__90));
#line 664
c_rt_lib0clear(&___nl__im__90);
#line 665
c_rt_lib0move(&___nl__im__96, reference_generator0generate((*___ref___im__0)));
#line 666
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(75)));
#line 666
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(94)));
#line 666
c_rt_lib0move(&___nl__im__100, compiler_priv0serialize_deref(___nl__im__101, ___nl__im__96));
#line 666
c_rt_lib0clear(&___nl__im__101);
#line 666
c_rt_lib0move(&___nl__im__98, c_fe_lib0string_to_file(___nl__im__99, ___nl__im__100));
#line 666
c_rt_lib0clear(&___nl__im__99);
#line 666
c_rt_lib0clear(&___nl__im__100);
#line 666
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(78));
#line 666
if(___nl__bool__97){ goto label_251;}
#line 666
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__98));
#line 666
nl_die_arg(___nl__im__98);
#line 666
label_251:
;
#line 667
goto label_253;
#line 667
label_253:
;
#line 667
//clear ___nl__bool__83;
#line 667
c_rt_lib0clear(&___nl__im__96);
#line 667
//clear ___nl__bool__97;
#line 667
c_rt_lib0clear(&___nl__im__98);
#line 667
c_rt_lib0clear(&___nl__im__2);
#line 667
//clear ___nl__bool__3;
#line 667
c_rt_lib0clear(&___nl__im__5);
#line 667
//clear ___nl__int__26;
#line 667
c_rt_lib0clear(&___nl__im__28);
#line 667
c_rt_lib0clear(&___nl__im__29);
#line 667
//clear ___nl__int__30;
#line 667
//clear ___nl__int__31;
#line 667
//clear ___nl__int__32;
#line 667
//clear ___nl__bool__33;
#line 667
c_rt_lib0clear(&___nl__im__34);
#line 667
c_rt_lib0clear(&___nl__im__35);
#line 667
c_rt_lib0clear(&___nl__im__44);
#line 667
c_rt_lib0clear(&___nl__im__45);
#line 667
//clear ___nl__int__46;
#line 667
//clear ___nl__int__47;
#line 667
//clear ___nl__int__48;
#line 667
//clear ___nl__bool__49;
#line 667
c_rt_lib0clear(&___nl__im__50);
#line 667
c_rt_lib0clear(&___nl__im__51);
#line 667
c_rt_lib0clear(&___nl__im__67);
#line 667
c_rt_lib0clear(&___nl__im__68);
#line 667
//clear ___nl__bool__69;
#line 667
c_rt_lib0clear(&___nl__im__70);
#line 667
c_rt_lib0clear(&___nl__im__71);
#line 667
c_rt_lib0clear(&___nl__im__72);
#line 667
c_rt_lib0clear(&___nl__im__73);
#line 667
c_rt_lib0clear(&___nl__im__74);
#line 667
//clear ___nl__int__75;
#line 667
//clear ___nl__int__76;
#line 667
//clear ___nl__int__77;
#line 667
//clear ___nl__bool__78;
#line 667
c_rt_lib0clear(&___nl__im__79);
#line 667
return NULL;

}

ImmT  compiler_priv0serialize_deref(tc_types0deref_types0type ___nl__im__0,reference_generator0refs0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 671
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 672
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 672
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 672
c_rt_lib0clear(&___nl__im__3);
#line 673
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 674
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_string_const(177), ___get_global_string_const(178)));
#line 674
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 674
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 674
c_rt_lib0clear(&___nl__im__6);
#line 674
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 674
c_rt_lib0clear(&___nl__im__5);
#line 674
c_rt_lib0clear(&___nl__im__0);
#line 674
c_rt_lib0clear(&___nl__im__1);
#line 674
c_rt_lib0clear(&___nl__im__2);
#line 674
return ___nl__im__4;
return NULL;

}

reference_generator0refs0type compiler_priv0process_deref(tc_types0deref_types0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 679
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 680
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 680
___nl__int__4 = 0;
#line 680
___nl__int__5 = 1;
#line 680
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 680
label_5:
;
#line 680
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 680
if(___nl__bool__7){ goto label_18;}
#line 680
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 680
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 681
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(173), ___nl__im__3));
#line 681
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(94), ___nl__im__10));
#line 681
c_rt_lib0clear(&___nl__im__10);
#line 681
c_rt_lib0array_push(&___nl__im__1, ___nl__im__9);
#line 681
c_rt_lib0clear(&___nl__im__9);
#line 681
c_rt_lib0clear(&___nl__im__3);
#line 682
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 682
goto label_5;
#line 682
label_18:
;
#line 684
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(173)));
#line 684
___nl__int__13 = 0;
#line 684
___nl__int__14 = 1;
#line 684
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 684
label_23:
;
#line 684
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 684
if(___nl__bool__16){ goto label_36;}
#line 684
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 684
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 685
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(175), ___nl__im__12));
#line 685
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(94), ___nl__im__19));
#line 685
c_rt_lib0clear(&___nl__im__19);
#line 685
c_rt_lib0array_push(&___nl__im__1, ___nl__im__18);
#line 685
c_rt_lib0clear(&___nl__im__18);
#line 685
c_rt_lib0clear(&___nl__im__12);
#line 686
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 686
goto label_23;
#line 686
label_36:
;
#line 687
c_rt_lib0clear(&___nl__im__0);
#line 687
c_rt_lib0clear(&___nl__im__2);
#line 687
c_rt_lib0clear(&___nl__im__3);
#line 687
//clear ___nl__int__4;
#line 687
//clear ___nl__int__5;
#line 687
//clear ___nl__int__6;
#line 687
//clear ___nl__bool__7;
#line 687
c_rt_lib0clear(&___nl__im__8);
#line 687
c_rt_lib0clear(&___nl__im__11);
#line 687
c_rt_lib0clear(&___nl__im__12);
#line 687
//clear ___nl__int__13;
#line 687
//clear ___nl__int__14;
#line 687
//clear ___nl__int__15;
#line 687
//clear ___nl__bool__16;
#line 687
c_rt_lib0clear(&___nl__im__17);
#line 687
return ___nl__im__1;
return NULL;

}

ImmT  compiler_priv0try_save_file(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 691
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 691
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(78));
#line 691
if(___nl__bool__4){ goto label_8;}
#line 692
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(77));
#line 692
if(___nl__bool__4){ goto label_12;}
#line 692
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 692
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 692
nl_die_arg(___nl__im__5);
#line 691
label_8:
;
#line 691
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(78)));
#line 691
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 692
goto label_22;
#line 692
label_12:
;
#line 692
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(77)));
#line 692
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 693
c_rt_lib0move(&___nl__im__11,___get_global_string_const(137));
#line 693
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 693
c_rt_lib0clear(&___nl__im__11);
#line 693
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 693
c_rt_lib0clear(&___nl__im__10);
#line 694
c_rt_lib0move(___ref___im__2,c_rt_lib0ov_mk_none(___get_global_string_const(179)));
#line 695
goto label_22;
#line 695
label_22:
;
#line 695
c_rt_lib0clear(&___nl__im__0);
#line 695
c_rt_lib0clear(&___nl__im__1);
#line 695
c_rt_lib0clear(&___nl__im__3);
#line 695
//clear ___nl__bool__4;
#line 695
c_rt_lib0clear(&___nl__im__5);
#line 695
c_rt_lib0clear(&___nl__im__6);
#line 695
c_rt_lib0clear(&___nl__im__7);
#line 695
c_rt_lib0clear(&___nl__im__8);
#line 695
c_rt_lib0clear(&___nl__im__9);
#line 695
return NULL;
return NULL;

}

ImmT  compiler_priv0generate_modules_to_files(ImmT  ___nl__im__0,compiler0module_t0type ___nl__im__1,ImmT  ___nl__im__2,generator_c0state_t0type* ___ref___rec__3,compiler0language_t0type ___nl__im__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__4);
compiler_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
bool  ___nl__bool__68 = false;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
bool  ___nl__bool__80 = false;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
#line 703
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 704
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(64));
#line 704
if(___nl__bool__6){ goto label_16;}
#line 712
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(65));
#line 712
if(___nl__bool__6){ goto label_56;}
#line 726
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(66));
#line 726
if(___nl__bool__6){ goto label_126;}
#line 735
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(67));
#line 735
if(___nl__bool__6){ goto label_170;}
#line 737
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(68));
#line 737
if(___nl__bool__6){ goto label_174;}
#line 739
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(69));
#line 739
if(___nl__bool__6){ goto label_178;}
#line 739
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 739
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 739
nl_die_arg(___nl__im__7);
#line 704
label_16:
;
#line 705
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 705
label_18:
;
#line 705
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 705
if(___nl__bool__9){ goto label_54;}
#line 705
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 705
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 706
c_rt_lib0move(&___nl__im__12,c_rt_lib0ov_mk_none(___get_global_string_const(180)));
#line 707
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 707
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(74)));
#line 707
c_rt_lib0clear(&___nl__im__15);
#line 707
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 707
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(74)));
#line 707
c_rt_lib0clear(&___nl__im__17);
#line 707
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(64)));
#line 707
c_rt_lib0clear(&___nl__im__14);
#line 707
c_rt_lib0clear(&___nl__im__16);
#line 708
c_rt_lib0move(&___nl__im__19,___get_global_string_const(136));
#line 708
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 708
c_rt_lib0clear(&___nl__im__19);
#line 708
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 708
c_rt_lib0clear(&___nl__im__18);
#line 709
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 709
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 709
c_rt_lib0clear(&___nl__im__20);
#line 710
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 710
___nl__bool__21 = !___nl__bool__21;
#line 710
if(___nl__bool__21){ goto label_48;}
#line 710
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 710
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 710
c_rt_lib0clear(&___nl__im__22);
#line 710
goto label_48;
#line 710
label_48:
;
#line 710
//clear ___nl__bool__21;
#line 710
c_rt_lib0clear(&___nl__im__12);
#line 710
c_rt_lib0clear(&___nl__im__13);
#line 711
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 711
goto label_18;
#line 711
label_54:
;
#line 712
goto label_201;
#line 712
label_56:
;
#line 713
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 714
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(180)));
#line 715
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(181)));
#line 715
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 715
label_61:
;
#line 715
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 715
if(___nl__bool__27){ goto label_103;}
#line 715
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 715
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 716
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(180)));
#line 717
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 717
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(74)));
#line 717
c_rt_lib0clear(&___nl__im__32);
#line 717
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 717
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(74)));
#line 717
c_rt_lib0clear(&___nl__im__34);
#line 717
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(65)));
#line 717
c_rt_lib0clear(&___nl__im__31);
#line 717
c_rt_lib0clear(&___nl__im__33);
#line 718
c_rt_lib0move(&___nl__im__36,___get_global_string_const(136));
#line 718
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 718
c_rt_lib0clear(&___nl__im__36);
#line 718
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 718
c_rt_lib0clear(&___nl__im__35);
#line 719
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(65)));
#line 719
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(65)));
#line 719
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 719
c_rt_lib0clear(&___nl__im__37);
#line 719
c_rt_lib0clear(&___nl__im__38);
#line 720
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(70)));
#line 720
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(70)));
#line 720
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 720
c_rt_lib0clear(&___nl__im__39);
#line 720
c_rt_lib0clear(&___nl__im__40);
#line 721
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 721
___nl__bool__41 = !___nl__bool__41;
#line 721
if(___nl__bool__41){ goto label_98;}
#line 721
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 721
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 721
c_rt_lib0clear(&___nl__im__42);
#line 721
goto label_98;
#line 721
label_98:
;
#line 721
//clear ___nl__bool__41;
#line 721
c_rt_lib0clear(&___nl__im__30);
#line 722
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 722
goto label_61;
#line 722
label_103:
;
#line 723
c_rt_lib0move(&___nl__im__43,___get_global_string_const(182));
#line 723
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 723
c_rt_lib0clear(&___nl__im__43);
#line 724
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(183)));
#line 724
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(65)));
#line 724
c_rt_lib0clear(&___nl__im__45);
#line 724
c_rt_lib0move(&___nl__im__47,___get_global_string_const(184));
#line 724
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 724
c_rt_lib0clear(&___nl__im__47);
#line 724
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 724
c_rt_lib0clear(&___nl__im__44);
#line 724
c_rt_lib0clear(&___nl__im__46);
#line 725
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(183)));
#line 725
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(70)));
#line 725
c_rt_lib0clear(&___nl__im__49);
#line 725
c_rt_lib0move(&___nl__im__51,___get_global_string_const(185));
#line 725
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 725
c_rt_lib0clear(&___nl__im__51);
#line 725
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 725
c_rt_lib0clear(&___nl__im__48);
#line 725
c_rt_lib0clear(&___nl__im__50);
#line 726
goto label_201;
#line 726
label_126:
;
#line 726
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(66)));
#line 726
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 727
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__0));
#line 727
label_130:
;
#line 727
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 727
if(___nl__bool__55){ goto label_168;}
#line 727
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 727
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__54));
#line 728
c_rt_lib0move(&___nl__im__58,c_rt_lib0ov_mk_none(___get_global_string_const(180)));
#line 729
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(63)));
#line 729
c_rt_lib0move(&___nl__im__59, generator_js0generate(___nl__im__56, ___nl__im__60));
#line 729
c_rt_lib0clear(&___nl__im__60);
#line 730
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 730
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(74)));
#line 730
c_rt_lib0clear(&___nl__im__63);
#line 730
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 730
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(74)));
#line 730
c_rt_lib0clear(&___nl__im__65);
#line 730
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__64, ___get_global_string_const(66)));
#line 730
c_rt_lib0clear(&___nl__im__62);
#line 730
c_rt_lib0clear(&___nl__im__64);
#line 731
c_rt_lib0move(&___nl__im__67,___get_global_string_const(136));
#line 731
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__54));
#line 731
c_rt_lib0clear(&___nl__im__67);
#line 731
c_rt_lib0delete(c_fe_lib0print(___nl__im__66));
#line 731
c_rt_lib0clear(&___nl__im__66);
#line 732
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__59, ___nl__im__61, &___nl__im__58));
#line 733
___nl__bool__68 = c_rt_lib0check_true_native(___nl__im__58);
#line 733
___nl__bool__68 = !___nl__bool__68;
#line 733
if(___nl__bool__68){ goto label_161;}
#line 733
c_rt_lib0move(&___nl__im__69,___get_global_string_const(36));
#line 733
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__69));
#line 733
c_rt_lib0clear(&___nl__im__69);
#line 733
goto label_161;
#line 733
label_161:
;
#line 733
//clear ___nl__bool__68;
#line 733
c_rt_lib0clear(&___nl__im__58);
#line 733
c_rt_lib0clear(&___nl__im__59);
#line 733
c_rt_lib0clear(&___nl__im__61);
#line 734
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 734
goto label_130;
#line 734
label_168:
;
#line 735
goto label_201;
#line 735
label_170:
;
#line 736
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 736
nl_die_arg(___nl__im__70);
#line 737
goto label_201;
#line 737
label_174:
;
#line 738
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(0));
#line 738
nl_die_arg(___nl__im__71);
#line 739
goto label_201;
#line 739
label_178:
;
#line 740
c_rt_lib0move(&___nl__im__72, post_processing0get_call_graph(___nl__im__0));
#line 741
c_rt_lib0move(&___nl__im__73,c_rt_lib0ov_mk_none(___get_global_string_const(180)));
#line 742
c_rt_lib0move(&___nl__im__74,___get_global_string_const(186));
#line 742
c_rt_lib0delete(c_fe_lib0print(___nl__im__74));
#line 742
c_rt_lib0clear(&___nl__im__74);
#line 743
c_rt_lib0move(&___nl__im__75, dfile0ssave(___nl__im__72));
#line 743
c_rt_lib0move(&___nl__im__77,___get_global_string_const(116));
#line 743
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__2, ___nl__im__77));
#line 743
c_rt_lib0clear(&___nl__im__77);
#line 743
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__75, ___nl__im__76, &___nl__im__73));
#line 743
c_rt_lib0clear(&___nl__im__75);
#line 743
c_rt_lib0clear(&___nl__im__76);
#line 744
___nl__bool__78 = c_rt_lib0check_true_native(___nl__im__73);
#line 744
___nl__bool__78 = !___nl__bool__78;
#line 744
if(___nl__bool__78){ goto label_198;}
#line 745
c_rt_lib0move(&___nl__im__79,___get_global_string_const(187));
#line 745
c_rt_lib0delete(c_fe_lib0print(___nl__im__79));
#line 745
c_rt_lib0clear(&___nl__im__79);
#line 746
goto label_198;
#line 746
label_198:
;
#line 746
//clear ___nl__bool__78;
#line 747
goto label_201;
#line 747
label_201:
;
#line 748
___nl__int__81 = hash0size(___nl__im__5);
#line 748
___nl__int__82 = 0;
#line 748
___nl__bool__80 = ___nl__int__81 > ___nl__int__82;
#line 748
//clear ___nl__int__81;
#line 748
//clear ___nl__int__82;
#line 748
___nl__bool__80 = !___nl__bool__80;
#line 748
if(___nl__bool__80){ goto label_247;}
#line 749
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__5));
#line 749
c_rt_lib0clear(&___nl__im__0);
#line 749
c_rt_lib0clear(&___nl__im__1);
#line 749
c_rt_lib0clear(&___nl__im__2);
#line 749
c_rt_lib0clear(&___nl__im__4);
#line 749
c_rt_lib0clear(&___nl__im__5);
#line 749
//clear ___nl__bool__6;
#line 749
c_rt_lib0clear(&___nl__im__7);
#line 749
c_rt_lib0clear(&___nl__im__8);
#line 749
//clear ___nl__bool__9;
#line 749
c_rt_lib0clear(&___nl__im__10);
#line 749
c_rt_lib0clear(&___nl__im__11);
#line 749
c_rt_lib0clear(&___nl__im__12);
#line 749
c_rt_lib0clear(&___nl__im__13);
#line 749
c_rt_lib0clear(&___nl__im__23);
#line 749
c_rt_lib0clear(&___nl__im__24);
#line 749
c_rt_lib0clear(&___nl__im__25);
#line 749
c_rt_lib0clear(&___nl__im__26);
#line 749
//clear ___nl__bool__27;
#line 749
c_rt_lib0clear(&___nl__im__28);
#line 749
c_rt_lib0clear(&___nl__im__29);
#line 749
c_rt_lib0clear(&___nl__im__30);
#line 749
c_rt_lib0clear(&___nl__im__52);
#line 749
c_rt_lib0clear(&___nl__im__53);
#line 749
c_rt_lib0clear(&___nl__im__54);
#line 749
//clear ___nl__bool__55;
#line 749
c_rt_lib0clear(&___nl__im__56);
#line 749
c_rt_lib0clear(&___nl__im__57);
#line 749
c_rt_lib0clear(&___nl__im__58);
#line 749
c_rt_lib0clear(&___nl__im__59);
#line 749
c_rt_lib0clear(&___nl__im__61);
#line 749
c_rt_lib0clear(&___nl__im__70);
#line 749
c_rt_lib0clear(&___nl__im__71);
#line 749
c_rt_lib0clear(&___nl__im__72);
#line 749
c_rt_lib0clear(&___nl__im__73);
#line 749
//clear ___nl__bool__80;
#line 749
return ___nl__im__83;
#line 750
goto label_289;
#line 750
label_247:
;
#line 751
c_rt_lib0move(&___nl__im__85,___get_global_string_const(36));
#line 751
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__85));
#line 751
c_rt_lib0clear(&___nl__im__85);
#line 751
c_rt_lib0clear(&___nl__im__0);
#line 751
c_rt_lib0clear(&___nl__im__1);
#line 751
c_rt_lib0clear(&___nl__im__2);
#line 751
c_rt_lib0clear(&___nl__im__4);
#line 751
c_rt_lib0clear(&___nl__im__5);
#line 751
//clear ___nl__bool__6;
#line 751
c_rt_lib0clear(&___nl__im__7);
#line 751
c_rt_lib0clear(&___nl__im__8);
#line 751
//clear ___nl__bool__9;
#line 751
c_rt_lib0clear(&___nl__im__10);
#line 751
c_rt_lib0clear(&___nl__im__11);
#line 751
c_rt_lib0clear(&___nl__im__12);
#line 751
c_rt_lib0clear(&___nl__im__13);
#line 751
c_rt_lib0clear(&___nl__im__23);
#line 751
c_rt_lib0clear(&___nl__im__24);
#line 751
c_rt_lib0clear(&___nl__im__25);
#line 751
c_rt_lib0clear(&___nl__im__26);
#line 751
//clear ___nl__bool__27;
#line 751
c_rt_lib0clear(&___nl__im__28);
#line 751
c_rt_lib0clear(&___nl__im__29);
#line 751
c_rt_lib0clear(&___nl__im__30);
#line 751
c_rt_lib0clear(&___nl__im__52);
#line 751
c_rt_lib0clear(&___nl__im__53);
#line 751
c_rt_lib0clear(&___nl__im__54);
#line 751
//clear ___nl__bool__55;
#line 751
c_rt_lib0clear(&___nl__im__56);
#line 751
c_rt_lib0clear(&___nl__im__57);
#line 751
c_rt_lib0clear(&___nl__im__58);
#line 751
c_rt_lib0clear(&___nl__im__59);
#line 751
c_rt_lib0clear(&___nl__im__61);
#line 751
c_rt_lib0clear(&___nl__im__70);
#line 751
c_rt_lib0clear(&___nl__im__71);
#line 751
c_rt_lib0clear(&___nl__im__72);
#line 751
c_rt_lib0clear(&___nl__im__73);
#line 751
//clear ___nl__bool__80;
#line 751
c_rt_lib0clear(&___nl__im__83);
#line 751
return ___nl__im__84;
#line 752
goto label_289;
#line 752
label_289:
;
#line 752
//clear ___nl__bool__80;
#line 752
c_rt_lib0clear(&___nl__im__83);
#line 752
c_rt_lib0clear(&___nl__im__84);
return NULL;

}

compiler0file_t0type compiler_priv0save_module_to_file(nast0module_t0type ___nl__im__0,compiler0destination_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 756
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(64));
#line 756
if(___nl__bool__2){ goto label_17;}
#line 758
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(65));
#line 758
if(___nl__bool__2){ goto label_23;}
#line 760
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(66));
#line 760
if(___nl__bool__2){ goto label_29;}
#line 762
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(67));
#line 762
if(___nl__bool__2){ goto label_35;}
#line 764
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(68));
#line 764
if(___nl__bool__2){ goto label_63;}
#line 766
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(71));
#line 766
if(___nl__bool__2){ goto label_94;}
#line 768
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(69));
#line 768
if(___nl__bool__2){ goto label_98;}
#line 768
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 768
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 768
nl_die_arg(___nl__im__3);
#line 756
label_17:
;
#line 756
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(64)));
#line 756
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 757
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 757
nl_die_arg(___nl__im__6);
#line 758
goto label_102;
#line 758
label_23:
;
#line 758
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(65)));
#line 758
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 759
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 759
nl_die_arg(___nl__im__9);
#line 760
goto label_102;
#line 760
label_29:
;
#line 760
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(66)));
#line 760
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 761
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 761
nl_die_arg(___nl__im__12);
#line 762
goto label_102;
#line 762
label_35:
;
#line 762
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(67)));
#line 762
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 763
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(188)));
#line 763
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 763
c_rt_lib0move(&___nl__im__18, pretty_printer0print_module_to_str(___nl__im__0));
#line 763
c_rt_lib0move(&___nl__im__17, c_fe_lib0string_to_file(___nl__im__13, ___nl__im__18));
#line 763
c_rt_lib0clear(&___nl__im__18);
#line 763
c_rt_lib0move(&___nl__im__15, ptd0ensure(___nl__im__16, ___nl__im__17));
#line 763
c_rt_lib0clear(&___nl__im__16);
#line 763
c_rt_lib0clear(&___nl__im__17);
#line 763
c_rt_lib0clear(&___nl__im__0);
#line 763
c_rt_lib0clear(&___nl__im__1);
#line 763
//clear ___nl__bool__2;
#line 763
c_rt_lib0clear(&___nl__im__3);
#line 763
c_rt_lib0clear(&___nl__im__4);
#line 763
c_rt_lib0clear(&___nl__im__5);
#line 763
c_rt_lib0clear(&___nl__im__6);
#line 763
c_rt_lib0clear(&___nl__im__7);
#line 763
c_rt_lib0clear(&___nl__im__8);
#line 763
c_rt_lib0clear(&___nl__im__9);
#line 763
c_rt_lib0clear(&___nl__im__10);
#line 763
c_rt_lib0clear(&___nl__im__11);
#line 763
c_rt_lib0clear(&___nl__im__12);
#line 763
c_rt_lib0clear(&___nl__im__13);
#line 763
c_rt_lib0clear(&___nl__im__14);
#line 763
return ___nl__im__15;
#line 764
goto label_102;
#line 764
label_63:
;
#line 764
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(68)));
#line 764
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 765
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(188)));
#line 765
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__22));
#line 765
c_rt_lib0move(&___nl__im__24, dfile0ssave(___nl__im__0));
#line 765
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 765
c_rt_lib0clear(&___nl__im__24);
#line 765
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 765
c_rt_lib0clear(&___nl__im__22);
#line 765
c_rt_lib0clear(&___nl__im__23);
#line 765
c_rt_lib0clear(&___nl__im__0);
#line 765
c_rt_lib0clear(&___nl__im__1);
#line 765
//clear ___nl__bool__2;
#line 765
c_rt_lib0clear(&___nl__im__3);
#line 765
c_rt_lib0clear(&___nl__im__4);
#line 765
c_rt_lib0clear(&___nl__im__5);
#line 765
c_rt_lib0clear(&___nl__im__6);
#line 765
c_rt_lib0clear(&___nl__im__7);
#line 765
c_rt_lib0clear(&___nl__im__8);
#line 765
c_rt_lib0clear(&___nl__im__9);
#line 765
c_rt_lib0clear(&___nl__im__10);
#line 765
c_rt_lib0clear(&___nl__im__11);
#line 765
c_rt_lib0clear(&___nl__im__12);
#line 765
c_rt_lib0clear(&___nl__im__13);
#line 765
c_rt_lib0clear(&___nl__im__14);
#line 765
c_rt_lib0clear(&___nl__im__15);
#line 765
c_rt_lib0clear(&___nl__im__19);
#line 765
c_rt_lib0clear(&___nl__im__20);
#line 765
return ___nl__im__21;
#line 766
goto label_102;
#line 766
label_94:
;
#line 767
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 767
nl_die_arg(___nl__im__25);
#line 768
goto label_102;
#line 768
label_98:
;
#line 769
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 769
nl_die_arg(___nl__im__26);
#line 770
goto label_102;
#line 770
label_102:
;
return NULL;

}

ImmT  compiler_priv0get_dir(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
#line 774
___nl__int__2 = string0length(___nl__im__0);
#line 774
___nl__int__3 = 1;
#line 774
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 774
//clear ___nl__int__2;
#line 774
//clear ___nl__int__3;
#line 775
___nl__int__6 = 1;
#line 775
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 775
//clear ___nl__int__6;
#line 775
c_rt_lib0move(&___nl__im__7,___get_global_string_const(105));
#line 775
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 775
c_rt_lib0clear(&___nl__im__5);
#line 775
c_rt_lib0clear(&___nl__im__7);
#line 775
if(___nl__bool__4){ goto label_20;}
#line 775
___nl__int__9 = 1;
#line 775
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 775
//clear ___nl__int__9;
#line 775
c_rt_lib0move(&___nl__im__10,___get_global_string_const(109));
#line 775
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 775
c_rt_lib0clear(&___nl__im__8);
#line 775
c_rt_lib0clear(&___nl__im__10);
#line 775
label_20:
;
#line 775
___nl__bool__4 = !___nl__bool__4;
#line 775
if(___nl__bool__4){ goto label_27;}
#line 775
___nl__int__11 = 1;
#line 775
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 775
//clear ___nl__int__11;
#line 775
goto label_27;
#line 775
label_27:
;
#line 775
//clear ___nl__bool__4;
#line 776
label_29:
;
#line 776
___nl__int__15 = 0;
#line 776
___nl__bool__12 = ___nl__int__1 >= ___nl__int__15;
#line 776
//clear ___nl__int__15;
#line 776
___nl__bool__14 = !___nl__bool__12;
#line 776
if(___nl__bool__14){ goto label_42;}
#line 776
___nl__int__17 = 1;
#line 776
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 776
//clear ___nl__int__17;
#line 776
c_rt_lib0move(&___nl__im__18,___get_global_string_const(105));
#line 776
___nl__bool__12 = c_rt_lib0ne(___nl__im__16, ___nl__im__18);
#line 776
c_rt_lib0clear(&___nl__im__16);
#line 776
c_rt_lib0clear(&___nl__im__18);
#line 776
label_42:
;
#line 776
//clear ___nl__bool__14;
#line 776
___nl__bool__13 = !___nl__bool__12;
#line 776
if(___nl__bool__13){ goto label_53;}
#line 776
___nl__int__20 = 1;
#line 776
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__20));
#line 776
//clear ___nl__int__20;
#line 776
c_rt_lib0move(&___nl__im__21,___get_global_string_const(109));
#line 776
___nl__bool__12 = c_rt_lib0ne(___nl__im__19, ___nl__im__21);
#line 776
c_rt_lib0clear(&___nl__im__19);
#line 776
c_rt_lib0clear(&___nl__im__21);
#line 776
label_53:
;
#line 776
//clear ___nl__bool__13;
#line 776
___nl__bool__12 = !___nl__bool__12;
#line 776
if(___nl__bool__12){ goto label_61;}
#line 776
___nl__int__22 = 1;
#line 776
___nl__int__1 = ___nl__int__1 - ___nl__int__22;
#line 776
//clear ___nl__int__22;
#line 776
goto label_29;
#line 776
label_61:
;
#line 777
___nl__int__24 = 0;
#line 777
___nl__bool__23 = ___nl__int__1 <= ___nl__int__24;
#line 777
//clear ___nl__int__24;
#line 777
___nl__bool__23 = !___nl__bool__23;
#line 777
if(___nl__bool__23){ goto label_74;}
#line 777
c_rt_lib0move(&___nl__im__25,___get_global_string_const(110));
#line 777
c_rt_lib0clear(&___nl__im__0);
#line 777
//clear ___nl__int__1;
#line 777
//clear ___nl__bool__12;
#line 777
//clear ___nl__bool__23;
#line 777
return ___nl__im__25;
#line 777
goto label_74;
#line 777
label_74:
;
#line 777
//clear ___nl__bool__23;
#line 777
c_rt_lib0clear(&___nl__im__25);
#line 778
___nl__int__27 = 0;
#line 778
c_rt_lib0move(&___nl__im__26, string0substr(___nl__im__0, ___nl__int__27, ___nl__int__1));
#line 778
//clear ___nl__int__27;
#line 778
c_rt_lib0clear(&___nl__im__0);
#line 778
//clear ___nl__int__1;
#line 778
//clear ___nl__bool__12;
#line 778
return ___nl__im__26;
return NULL;

}

compiler0input_type0type compiler_priv0parse_command_line_args(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
bool  ___nl__bool__66 = false;
INT  ___nl__int__67 = 0;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
bool  ___nl__bool__81 = false;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
bool  ___nl__bool__90 = false;
INT  ___nl__int__91 = 0;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
INT  ___nl__int__120 = 0;
bool  ___nl__bool__121 = false;
INT  ___nl__int__122 = 0;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
bool  ___nl__bool__130 = false;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__string__134 = NULL;
INT  ___nl__int__135 = 0;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
bool  ___nl__bool__144 = false;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
#line 783
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 784
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 785
c_rt_lib0move(&___nl__im__5,___get_global_string_const(110));
#line 785
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 785
c_rt_lib0clear(&___nl__im__5);
#line 786
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 787
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 788
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 789
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 790
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 791
___nl__bool__11 = false;
#line 791
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 792
___nl__bool__13 = false;
#line 792
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 792
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(98), ___nl__im__2, ___get_global_string_const(97), ___nl__im__3, ___get_global_string_const(92), ___nl__im__4, ___get_global_string_const(95), ___nl__im__6, ___get_global_string_const(94), ___nl__im__7, ___get_global_string_const(96), ___nl__im__8, ___get_global_string_const(93), ___nl__im__9, ___get_global_string_const(99), ___nl__im__10, ___get_global_string_const(100), ___nl__im__12, ___get_global_string_const(101), ___nl__im__14));
#line 792
c_rt_lib0clear(&___nl__im__2);
#line 792
c_rt_lib0clear(&___nl__im__3);
#line 792
c_rt_lib0clear(&___nl__im__4);
#line 792
c_rt_lib0clear(&___nl__im__6);
#line 792
c_rt_lib0clear(&___nl__im__7);
#line 792
c_rt_lib0clear(&___nl__im__8);
#line 792
c_rt_lib0clear(&___nl__im__9);
#line 792
c_rt_lib0clear(&___nl__im__10);
#line 792
//clear ___nl__bool__11;
#line 792
c_rt_lib0clear(&___nl__im__12);
#line 792
//clear ___nl__bool__13;
#line 792
c_rt_lib0clear(&___nl__im__14);
#line 794
___nl__bool__15 = false;
#line 795
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 796
___nl__int__17 = 1;
#line 796
label_30:
;
#line 796
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 796
___nl__bool__18 = ___nl__int__17 < ___nl__int__19;
#line 796
//clear ___nl__int__19;
#line 796
___nl__bool__18 = !___nl__bool__18;
#line 796
if(___nl__bool__18){ goto label_460;}
#line 797
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 798
___nl__int__23 = string0length(___nl__im__20);
#line 798
___nl__int__24 = 2;
#line 798
___nl__bool__21 = ___nl__int__23 >= ___nl__int__24;
#line 798
//clear ___nl__int__23;
#line 798
//clear ___nl__int__24;
#line 798
___nl__bool__22 = !___nl__bool__21;
#line 798
if(___nl__bool__22){ goto label_53;}
#line 798
___nl__int__26 = 0;
#line 798
___nl__int__27 = 2;
#line 798
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__20, ___nl__int__26, ___nl__int__27));
#line 798
//clear ___nl__int__26;
#line 798
//clear ___nl__int__27;
#line 798
c_rt_lib0move(&___nl__im__28,___get_global_string_const(189));
#line 798
___nl__bool__21 = c_rt_lib0eq(___nl__im__25, ___nl__im__28);
#line 798
c_rt_lib0clear(&___nl__im__25);
#line 798
c_rt_lib0clear(&___nl__im__28);
#line 798
label_53:
;
#line 798
//clear ___nl__bool__22;
#line 798
___nl__bool__21 = !___nl__bool__21;
#line 798
if(___nl__bool__21){ goto label_430;}
#line 799
___nl__int__30 = 2;
#line 799
___nl__int__32 = string0length(___nl__im__20);
#line 799
___nl__int__33 = 2;
#line 799
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 799
//clear ___nl__int__32;
#line 799
//clear ___nl__int__33;
#line 799
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__20, ___nl__int__30, ___nl__int__31));
#line 799
//clear ___nl__int__30;
#line 799
//clear ___nl__int__31;
#line 800
c_rt_lib0move(&___nl__im__35,___get_global_string_const(94));
#line 800
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__35);
#line 800
c_rt_lib0clear(&___nl__im__35);
#line 800
___nl__bool__34 = !___nl__bool__34;
#line 800
if(___nl__bool__34){ goto label_79;}
#line 801
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 801
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(75), ___nl__im__37));
#line 801
c_rt_lib0clear(&___nl__im__37);
#line 801
c_rt_lib0copy(&___nl__im__38, ___nl__im__36);
#line 801
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(94), ___nl__im__38);
#line 801
c_rt_lib0clear(&___nl__im__36);
#line 801
c_rt_lib0clear(&___nl__im__38);
#line 802
goto label_427;
#line 802
label_79:
;
#line 802
c_rt_lib0move(&___nl__im__39,___get_global_string_const(64));
#line 802
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__39);
#line 802
c_rt_lib0clear(&___nl__im__39);
#line 802
___nl__bool__34 = !___nl__bool__34;
#line 802
if(___nl__bool__34){ goto label_91;}
#line 803
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_string_const(64)));
#line 803
c_rt_lib0copy(&___nl__im__41, ___nl__im__40);
#line 803
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__41);
#line 803
c_rt_lib0clear(&___nl__im__40);
#line 803
c_rt_lib0clear(&___nl__im__41);
#line 804
goto label_427;
#line 804
label_91:
;
#line 804
c_rt_lib0move(&___nl__im__42,___get_global_string_const(68));
#line 804
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__42);
#line 804
c_rt_lib0clear(&___nl__im__42);
#line 804
___nl__bool__34 = !___nl__bool__34;
#line 804
if(___nl__bool__34){ goto label_103;}
#line 805
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(68)));
#line 805
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 805
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__44);
#line 805
c_rt_lib0clear(&___nl__im__43);
#line 805
c_rt_lib0clear(&___nl__im__44);
#line 806
goto label_427;
#line 806
label_103:
;
#line 806
c_rt_lib0move(&___nl__im__45,___get_global_string_const(65));
#line 806
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__45);
#line 806
c_rt_lib0clear(&___nl__im__45);
#line 806
___nl__bool__34 = !___nl__bool__34;
#line 806
if(___nl__bool__34){ goto label_115;}
#line 807
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 807
c_rt_lib0copy(&___nl__im__47, ___nl__im__46);
#line 807
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__47);
#line 807
c_rt_lib0clear(&___nl__im__46);
#line 807
c_rt_lib0clear(&___nl__im__47);
#line 808
goto label_427;
#line 808
label_115:
;
#line 808
c_rt_lib0move(&___nl__im__48,___get_global_string_const(66));
#line 808
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__48);
#line 808
c_rt_lib0clear(&___nl__im__48);
#line 808
___nl__bool__34 = !___nl__bool__34;
#line 808
if(___nl__bool__34){ goto label_140;}
#line 809
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 809
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(66));
#line 809
c_rt_lib0clear(&___nl__im__50);
#line 809
___nl__bool__49 = !___nl__bool__49;
#line 809
___nl__bool__49 = !___nl__bool__49;
#line 809
if(___nl__bool__49){ goto label_137;}
#line 810
c_rt_lib0move(&___nl__im__53,___get_global_string_const(67));
#line 810
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(1, ___get_global_string_const(63), ___nl__im__53));
#line 810
c_rt_lib0clear(&___nl__im__53);
#line 810
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__52));
#line 810
c_rt_lib0clear(&___nl__im__52);
#line 810
c_rt_lib0copy(&___nl__im__54, ___nl__im__51);
#line 810
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__54);
#line 810
c_rt_lib0clear(&___nl__im__51);
#line 810
c_rt_lib0clear(&___nl__im__54);
#line 811
goto label_137;
#line 811
label_137:
;
#line 811
//clear ___nl__bool__49;
#line 812
goto label_427;
#line 812
label_140:
;
#line 812
c_rt_lib0move(&___nl__im__55,___get_global_string_const(69));
#line 812
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__55);
#line 812
c_rt_lib0clear(&___nl__im__55);
#line 812
___nl__bool__34 = !___nl__bool__34;
#line 812
if(___nl__bool__34){ goto label_152;}
#line 813
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 813
c_rt_lib0copy(&___nl__im__57, ___nl__im__56);
#line 813
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__57);
#line 813
c_rt_lib0clear(&___nl__im__56);
#line 813
c_rt_lib0clear(&___nl__im__57);
#line 814
goto label_427;
#line 814
label_152:
;
#line 814
c_rt_lib0move(&___nl__im__58,___get_global_string_const(67));
#line 814
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__58);
#line 814
c_rt_lib0clear(&___nl__im__58);
#line 814
___nl__bool__34 = !___nl__bool__34;
#line 814
if(___nl__bool__34){ goto label_165;}
#line 815
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(67)));
#line 815
c_rt_lib0copy(&___nl__im__60, ___nl__im__59);
#line 815
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__60);
#line 815
c_rt_lib0clear(&___nl__im__59);
#line 815
c_rt_lib0clear(&___nl__im__60);
#line 816
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 817
goto label_427;
#line 817
label_165:
;
#line 817
c_rt_lib0move(&___nl__im__61,___get_global_string_const(87));
#line 817
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__61);
#line 817
c_rt_lib0clear(&___nl__im__61);
#line 817
___nl__bool__34 = !___nl__bool__34;
#line 817
if(___nl__bool__34){ goto label_177;}
#line 818
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_string_const(87)));
#line 818
c_rt_lib0copy(&___nl__im__63, ___nl__im__62);
#line 818
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__63);
#line 818
c_rt_lib0clear(&___nl__im__62);
#line 818
c_rt_lib0clear(&___nl__im__63);
#line 819
goto label_427;
#line 819
label_177:
;
#line 819
c_rt_lib0move(&___nl__im__64,___get_global_string_const(88));
#line 819
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__64);
#line 819
c_rt_lib0clear(&___nl__im__64);
#line 819
___nl__bool__34 = !___nl__bool__34;
#line 819
if(___nl__bool__34){ goto label_206;}
#line 820
___nl__int__65 = 1;
#line 820
___nl__int__17 = ___nl__int__17 + ___nl__int__65;
#line 820
//clear ___nl__int__65;
#line 821
___nl__int__67 = c_rt_lib0array_len(___nl__im__0);
#line 821
___nl__bool__66 = ___nl__int__17 < ___nl__int__67;
#line 821
//clear ___nl__int__67;
#line 821
___nl__bool__66 = !___nl__bool__66;
#line 821
___nl__bool__66 = !___nl__bool__66;
#line 821
if(___nl__bool__66){ goto label_195;}
#line 821
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(0));
#line 821
nl_die_arg(___nl__im__68);
#line 821
goto label_195;
#line 821
label_195:
;
#line 821
//clear ___nl__bool__66;
#line 821
c_rt_lib0clear(&___nl__im__68);
#line 822
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 822
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_string_const(88), ___nl__im__70));
#line 822
c_rt_lib0clear(&___nl__im__70);
#line 822
c_rt_lib0copy(&___nl__im__71, ___nl__im__69);
#line 822
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__71);
#line 822
c_rt_lib0clear(&___nl__im__69);
#line 822
c_rt_lib0clear(&___nl__im__71);
#line 823
goto label_427;
#line 823
label_206:
;
#line 823
c_rt_lib0move(&___nl__im__72,___get_global_string_const(85));
#line 823
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__72);
#line 823
c_rt_lib0clear(&___nl__im__72);
#line 823
___nl__bool__34 = !___nl__bool__34;
#line 823
if(___nl__bool__34){ goto label_218;}
#line 824
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 824
c_rt_lib0copy(&___nl__im__74, ___nl__im__73);
#line 824
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__74);
#line 824
c_rt_lib0clear(&___nl__im__73);
#line 824
c_rt_lib0clear(&___nl__im__74);
#line 825
goto label_427;
#line 825
label_218:
;
#line 825
c_rt_lib0move(&___nl__im__75,___get_global_string_const(86));
#line 825
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__75);
#line 825
c_rt_lib0clear(&___nl__im__75);
#line 825
___nl__bool__34 = !___nl__bool__34;
#line 825
if(___nl__bool__34){ goto label_230;}
#line 826
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 826
c_rt_lib0copy(&___nl__im__77, ___nl__im__76);
#line 826
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__77);
#line 826
c_rt_lib0clear(&___nl__im__76);
#line 826
c_rt_lib0clear(&___nl__im__77);
#line 827
goto label_427;
#line 827
label_230:
;
#line 827
c_rt_lib0move(&___nl__im__78,___get_global_string_const(190));
#line 827
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__78);
#line 827
c_rt_lib0clear(&___nl__im__78);
#line 827
if(___nl__bool__34){ goto label_238;}
#line 827
c_rt_lib0move(&___nl__im__79,___get_global_string_const(191));
#line 827
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__79);
#line 827
c_rt_lib0clear(&___nl__im__79);
#line 827
label_238:
;
#line 827
___nl__bool__34 = !___nl__bool__34;
#line 827
if(___nl__bool__34){ goto label_266;}
#line 828
___nl__int__80 = 1;
#line 828
___nl__int__17 = ___nl__int__17 + ___nl__int__80;
#line 828
//clear ___nl__int__80;
#line 829
___nl__int__82 = c_rt_lib0array_len(___nl__im__0);
#line 829
___nl__bool__81 = ___nl__int__17 < ___nl__int__82;
#line 829
//clear ___nl__int__82;
#line 829
___nl__bool__81 = !___nl__bool__81;
#line 829
___nl__bool__81 = !___nl__bool__81;
#line 829
if(___nl__bool__81){ goto label_253;}
#line 829
c_rt_lib0move(&___nl__im__83, c_rt_lib0array_mk(0));
#line 829
nl_die_arg(___nl__im__83);
#line 829
goto label_253;
#line 829
label_253:
;
#line 829
//clear ___nl__bool__81;
#line 829
c_rt_lib0clear(&___nl__im__83);
#line 830
c_rt_lib0move(&___nl__im__85, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 830
c_rt_lib0move(&___nl__im__86,___get_global_string_const(105));
#line 830
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__im__86));
#line 830
c_rt_lib0clear(&___nl__im__85);
#line 830
c_rt_lib0clear(&___nl__im__86);
#line 830
c_rt_lib0copy(&___nl__im__87, ___nl__im__84);
#line 830
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(93), ___nl__im__87);
#line 830
c_rt_lib0clear(&___nl__im__84);
#line 830
c_rt_lib0clear(&___nl__im__87);
#line 831
goto label_427;
#line 831
label_266:
;
#line 831
c_rt_lib0move(&___nl__im__88,___get_global_string_const(192));
#line 831
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__88);
#line 831
c_rt_lib0clear(&___nl__im__88);
#line 831
___nl__bool__34 = !___nl__bool__34;
#line 831
if(___nl__bool__34){ goto label_293;}
#line 832
___nl__int__89 = 1;
#line 832
___nl__int__17 = ___nl__int__17 + ___nl__int__89;
#line 832
//clear ___nl__int__89;
#line 833
___nl__int__91 = c_rt_lib0array_len(___nl__im__0);
#line 833
___nl__bool__90 = ___nl__int__17 < ___nl__int__91;
#line 833
//clear ___nl__int__91;
#line 833
___nl__bool__90 = !___nl__bool__90;
#line 833
___nl__bool__90 = !___nl__bool__90;
#line 833
if(___nl__bool__90){ goto label_284;}
#line 833
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 833
nl_die_arg(___nl__im__92);
#line 833
goto label_284;
#line 833
label_284:
;
#line 833
//clear ___nl__bool__90;
#line 833
c_rt_lib0clear(&___nl__im__92);
#line 834
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 834
c_rt_lib0copy(&___nl__im__94, ___nl__im__93);
#line 834
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(96), ___nl__im__94);
#line 834
c_rt_lib0clear(&___nl__im__93);
#line 834
c_rt_lib0clear(&___nl__im__94);
#line 835
goto label_427;
#line 835
label_293:
;
#line 835
c_rt_lib0move(&___nl__im__95,___get_global_string_const(193));
#line 835
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__95);
#line 835
c_rt_lib0clear(&___nl__im__95);
#line 835
___nl__bool__34 = !___nl__bool__34;
#line 835
if(___nl__bool__34){ goto label_305;}
#line 836
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_none(___get_global_string_const(80)));
#line 836
c_rt_lib0copy(&___nl__im__97, ___nl__im__96);
#line 836
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__97);
#line 836
c_rt_lib0clear(&___nl__im__96);
#line 836
c_rt_lib0clear(&___nl__im__97);
#line 837
goto label_427;
#line 837
label_305:
;
#line 837
c_rt_lib0move(&___nl__im__98,___get_global_string_const(194));
#line 837
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__98);
#line 837
c_rt_lib0clear(&___nl__im__98);
#line 837
___nl__bool__34 = !___nl__bool__34;
#line 837
if(___nl__bool__34){ goto label_317;}
#line 838
c_rt_lib0move(&___nl__im__99, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 838
c_rt_lib0copy(&___nl__im__100, ___nl__im__99);
#line 838
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__100);
#line 838
c_rt_lib0clear(&___nl__im__99);
#line 838
c_rt_lib0clear(&___nl__im__100);
#line 839
goto label_427;
#line 839
label_317:
;
#line 839
c_rt_lib0move(&___nl__im__101,___get_global_string_const(195));
#line 839
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__101);
#line 839
c_rt_lib0clear(&___nl__im__101);
#line 839
___nl__bool__34 = !___nl__bool__34;
#line 839
if(___nl__bool__34){ goto label_329;}
#line 840
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_none(___get_global_string_const(82)));
#line 840
c_rt_lib0copy(&___nl__im__103, ___nl__im__102);
#line 840
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__103);
#line 840
c_rt_lib0clear(&___nl__im__102);
#line 840
c_rt_lib0clear(&___nl__im__103);
#line 841
goto label_427;
#line 841
label_329:
;
#line 841
c_rt_lib0move(&___nl__im__104,___get_global_string_const(196));
#line 841
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__104);
#line 841
c_rt_lib0clear(&___nl__im__104);
#line 841
___nl__bool__34 = !___nl__bool__34;
#line 841
if(___nl__bool__34){ goto label_341;}
#line 842
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 842
c_rt_lib0copy(&___nl__im__106, ___nl__im__105);
#line 842
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__106);
#line 842
c_rt_lib0clear(&___nl__im__105);
#line 842
c_rt_lib0clear(&___nl__im__106);
#line 843
goto label_427;
#line 843
label_341:
;
#line 843
c_rt_lib0move(&___nl__im__107,___get_global_string_const(197));
#line 843
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__107);
#line 843
c_rt_lib0clear(&___nl__im__107);
#line 843
___nl__bool__34 = !___nl__bool__34;
#line 843
if(___nl__bool__34){ goto label_353;}
#line 844
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_none(___get_global_string_const(84)));
#line 844
c_rt_lib0copy(&___nl__im__109, ___nl__im__108);
#line 844
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__109);
#line 844
c_rt_lib0clear(&___nl__im__108);
#line 844
c_rt_lib0clear(&___nl__im__109);
#line 845
goto label_427;
#line 845
label_353:
;
#line 845
c_rt_lib0move(&___nl__im__110,___get_global_string_const(198));
#line 845
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__110);
#line 845
c_rt_lib0clear(&___nl__im__110);
#line 845
___nl__bool__34 = !___nl__bool__34;
#line 845
if(___nl__bool__34){ goto label_365;}
#line 846
c_rt_lib0move(&___nl__im__111, c_rt_lib0ov_mk_none(___get_global_string_const(91)));
#line 846
c_rt_lib0copy(&___nl__im__112, ___nl__im__111);
#line 846
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__112);
#line 846
c_rt_lib0clear(&___nl__im__111);
#line 846
c_rt_lib0clear(&___nl__im__112);
#line 847
goto label_427;
#line 847
label_365:
;
#line 847
c_rt_lib0move(&___nl__im__113,___get_global_string_const(100));
#line 847
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__113);
#line 847
c_rt_lib0clear(&___nl__im__113);
#line 847
___nl__bool__34 = !___nl__bool__34;
#line 847
if(___nl__bool__34){ goto label_377;}
#line 848
___nl__bool__114 = true;
#line 848
c_rt_lib0move(&___nl__im__115, c_rt_lib0bool_to_nl_native(___nl__bool__114));
#line 848
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__115);
#line 848
//clear ___nl__bool__114;
#line 848
c_rt_lib0clear(&___nl__im__115);
#line 849
goto label_427;
#line 849
label_377:
;
#line 849
c_rt_lib0move(&___nl__im__116,___get_global_string_const(101));
#line 849
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__116);
#line 849
c_rt_lib0clear(&___nl__im__116);
#line 849
___nl__bool__34 = !___nl__bool__34;
#line 849
if(___nl__bool__34){ goto label_389;}
#line 850
___nl__bool__117 = true;
#line 850
c_rt_lib0move(&___nl__im__118, c_rt_lib0bool_to_nl_native(___nl__bool__117));
#line 850
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(101), ___nl__im__118);
#line 850
//clear ___nl__bool__117;
#line 850
c_rt_lib0clear(&___nl__im__118);
#line 851
goto label_427;
#line 851
label_389:
;
#line 851
c_rt_lib0move(&___nl__im__119,___get_global_string_const(63));
#line 851
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__119);
#line 851
c_rt_lib0clear(&___nl__im__119);
#line 851
___nl__bool__34 = !___nl__bool__34;
#line 851
if(___nl__bool__34){ goto label_420;}
#line 852
___nl__int__120 = 1;
#line 852
___nl__int__17 = ___nl__int__17 + ___nl__int__120;
#line 852
//clear ___nl__int__120;
#line 853
___nl__int__122 = c_rt_lib0array_len(___nl__im__0);
#line 853
___nl__bool__121 = ___nl__int__17 < ___nl__int__122;
#line 853
//clear ___nl__int__122;
#line 853
___nl__bool__121 = !___nl__bool__121;
#line 853
___nl__bool__121 = !___nl__bool__121;
#line 853
if(___nl__bool__121){ goto label_407;}
#line 853
c_rt_lib0move(&___nl__im__123, c_rt_lib0array_mk(0));
#line 853
nl_die_arg(___nl__im__123);
#line 853
goto label_407;
#line 853
label_407:
;
#line 853
//clear ___nl__bool__121;
#line 853
c_rt_lib0clear(&___nl__im__123);
#line 854
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 854
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_mk(1, ___get_global_string_const(63), ___nl__im__126));
#line 854
c_rt_lib0clear(&___nl__im__126);
#line 854
c_rt_lib0move(&___nl__im__124, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__125));
#line 854
c_rt_lib0clear(&___nl__im__125);
#line 854
c_rt_lib0copy(&___nl__im__127, ___nl__im__124);
#line 854
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__127);
#line 854
c_rt_lib0clear(&___nl__im__124);
#line 854
c_rt_lib0clear(&___nl__im__127);
#line 855
goto label_427;
#line 855
label_420:
;
#line 856
c_rt_lib0move(&___nl__im__129,___get_global_string_const(199));
#line 856
c_rt_lib0move(&___nl__im__128, c_rt_lib0concat_new(___nl__im__129, ___nl__im__20));
#line 856
c_rt_lib0clear(&___nl__im__129);
#line 856
c_rt_lib0delete(c_fe_lib0print(___nl__im__128));
#line 856
c_rt_lib0clear(&___nl__im__128);
#line 857
goto label_427;
#line 857
label_427:
;
#line 857
//clear ___nl__bool__34;
#line 858
goto label_452;
#line 858
label_430:
;
#line 859
___nl__bool__130 = ___nl__bool__15;
#line 859
___nl__bool__130 = !___nl__bool__130;
#line 859
___nl__bool__130 = !___nl__bool__130;
#line 859
if(___nl__bool__130){ goto label_441;}
#line 859
c_rt_lib0move(&___nl__im__131, c_rt_lib0array_mk(0));
#line 859
c_rt_lib0copy(&___nl__im__132, ___nl__im__131);
#line 859
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(92), ___nl__im__132);
#line 859
c_rt_lib0clear(&___nl__im__131);
#line 859
c_rt_lib0clear(&___nl__im__132);
#line 859
goto label_441;
#line 859
label_441:
;
#line 859
//clear ___nl__bool__130;
#line 860
c_rt_lib0move(&___nl__im__133,___get_global_string_const(92));
#line 860
c_rt_lib0move(&___nl__im__133, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__133));
#line 860
c_rt_lib0delete(array0push(&___nl__im__133, ___nl__im__20));
#line 860
c_rt_lib0move(&___nl__string__134,___get_global_string_const(92));
#line 860
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__134, ___nl__im__133));
#line 860
c_rt_lib0clear(&___nl__im__133);
#line 860
c_rt_lib0clear(&___nl__string__134);
#line 861
___nl__bool__15 = true;
#line 862
goto label_452;
#line 862
label_452:
;
#line 862
//clear ___nl__bool__21;
#line 862
c_rt_lib0clear(&___nl__im__29);
#line 862
c_rt_lib0clear(&___nl__im__20);
#line 796
___nl__int__135 = 1;
#line 796
___nl__int__17 = ___nl__int__17 + ___nl__int__135;
#line 796
//clear ___nl__int__135;
#line 863
goto label_30;
#line 863
label_460:
;
#line 864
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(93)));
#line 864
c_rt_lib0move(&___nl__im__138,___get_global_string_const(36));
#line 864
___nl__bool__136 = c_rt_lib0eq(___nl__im__137, ___nl__im__138);
#line 864
c_rt_lib0clear(&___nl__im__137);
#line 864
c_rt_lib0clear(&___nl__im__138);
#line 864
___nl__bool__136 = !___nl__bool__136;
#line 864
if(___nl__bool__136){ goto label_480;}
#line 865
c_rt_lib0move(&___nl__im__141,___get_global_string_const(200));
#line 865
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__16));
#line 865
c_rt_lib0clear(&___nl__im__141);
#line 865
c_rt_lib0move(&___nl__im__142,___get_global_string_const(105));
#line 865
c_rt_lib0move(&___nl__im__139, c_rt_lib0concat_new(___nl__im__140, ___nl__im__142));
#line 865
c_rt_lib0clear(&___nl__im__140);
#line 865
c_rt_lib0clear(&___nl__im__142);
#line 865
c_rt_lib0copy(&___nl__im__143, ___nl__im__139);
#line 865
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(93), ___nl__im__143);
#line 865
c_rt_lib0clear(&___nl__im__139);
#line 865
c_rt_lib0clear(&___nl__im__143);
#line 866
goto label_480;
#line 866
label_480:
;
#line 866
//clear ___nl__bool__136;
#line 867
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(94)));
#line 867
___nl__bool__144 = c_rt_lib0priv_is(___nl__im__145, ___get_global_string_const(75));
#line 867
c_rt_lib0clear(&___nl__im__145);
#line 867
___nl__bool__144 = !___nl__bool__144;
#line 867
if(___nl__bool__144){ goto label_499;}
#line 867
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(93)));
#line 867
c_rt_lib0move(&___nl__im__149, compiler_priv0get_default_deref_file());
#line 867
c_rt_lib0move(&___nl__im__147, c_rt_lib0concat_new(___nl__im__148, ___nl__im__149));
#line 867
c_rt_lib0clear(&___nl__im__148);
#line 867
c_rt_lib0clear(&___nl__im__149);
#line 867
c_rt_lib0move(&___nl__im__146, c_rt_lib0ov_mk_arg(___get_global_string_const(75), ___nl__im__147));
#line 867
c_rt_lib0clear(&___nl__im__147);
#line 867
c_rt_lib0copy(&___nl__im__150, ___nl__im__146);
#line 867
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(94), ___nl__im__150);
#line 867
c_rt_lib0clear(&___nl__im__146);
#line 867
c_rt_lib0clear(&___nl__im__150);
#line 867
goto label_499;
#line 867
label_499:
;
#line 867
//clear ___nl__bool__144;
#line 868
c_rt_lib0clear(&___nl__im__0);
#line 868
//clear ___nl__bool__15;
#line 868
c_rt_lib0clear(&___nl__im__16);
#line 868
//clear ___nl__int__17;
#line 868
//clear ___nl__bool__18;
#line 868
c_rt_lib0clear(&___nl__im__20);
#line 868
return ___nl__im__1;
return NULL;

}


static ImmT ___const__[15];
static int ___const_init__ = 1;
void compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[14];


for(int i=0;i<14;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 14);
}}
ImmT compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = compiler_priv0get_dir_cache_name0cal();
	break;
case 1:
	___const__[1] = compiler_priv0get_dir_pretty_name0cal();
	break;
case 2:
	___const__[2] = compiler_priv0get_default_deref_file0cal();
	break;
case 3:
	___const__[3] = compiler_priv0get_default_math_file0cal();
	break;
case 4:
	___const__[4] = compiler0parse_check_t0cal();
	break;
case 5:
	___const__[5] = compiler0errors_hash_t0cal();
	break;
case 6:
	___const__[6] = compiler0errors_group_t0cal();
	break;
case 7:
	___const__[7] = compiler0language_t0cal();
	break;
case 8:
	___const__[8] = compiler0destination_t0cal();
	break;
case 9:
	___const__[9] = compiler0module_t0cal();
	break;
case 10:
	___const__[10] = compiler0deref_t0cal();
	break;
case 11:
	___const__[11] = compiler0try_t0cal();
	break;
case 12:
	___const__[12] = compiler0input_type0cal();
	break;
case 13:
	___const__[13] = compiler0file_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
