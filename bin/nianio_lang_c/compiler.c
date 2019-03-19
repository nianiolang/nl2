
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(42));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(43));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(44));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(45));
#line 46
return ___nl__im__0;
return NULL;

}

ImmT  compiler0parse_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0parse_check_t");
return compiler0parse_check_t();
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_string_const(46), ___get_global_string_const(47)));
#line 51
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_string_const(48), ___get_global_string_const(49)));
#line 53
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__6));
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(50), ___nl__im__2, ___get_global_string_const(51), ___nl__im__4, ___get_global_string_const(52), ___nl__im__6));
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
return compiler0errors_hash_t();
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_string_const(53), ___get_global_string_const(54)));
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
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
return compiler0errors_group_t();
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(55), ___get_global_string_const(56)));
#line 63
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 64
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(55), ___get_global_string_const(56)));
#line 64
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 65
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(55), ___get_global_string_const(56)));
#line 65
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_string_const(55), ___get_global_string_const(56)));
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 67
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(module_checker0ret_t0ptr, ___get_global_string_const(57), ___get_global_string_const(58)));
#line 67
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__6));
#line 67
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(59), ___nl__im__2, ___get_global_string_const(60), ___nl__im__3, ___get_global_string_const(61), ___nl__im__4, ___get_global_string_const(62), ___nl__im__5, ___get_global_string_const(63), ___nl__im__6));
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
return compiler0language_t();
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(1, ___get_global_string_const(64), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(65), ___nl__im__2, ___get_global_string_const(66), ___nl__im__3, ___get_global_string_const(67), ___nl__im__4, ___get_global_string_const(68), ___nl__im__7, ___get_global_string_const(69), ___nl__im__8, ___get_global_string_const(70), ___nl__im__9));
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
return compiler0destination_t();
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__5, ___get_global_string_const(71), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(7, ___get_global_string_const(65), ___nl__im__2, ___get_global_string_const(66), ___nl__im__3, ___get_global_string_const(68), ___nl__im__7, ___get_global_string_const(69), ___nl__im__8, ___get_global_string_const(67), ___nl__im__9, ___get_global_string_const(72), ___nl__im__10, ___get_global_string_const(70), ___nl__im__11));
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
return compiler0module_t();
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_string_const(55), ___get_global_string_const(73)));
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 95
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__3, ___get_global_string_const(75), ___nl__im__4));
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
return compiler0deref_t();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(76), ___nl__im__2, ___get_global_string_const(77), ___nl__im__3));
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
return compiler0try_t();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__2, ___get_global_string_const(79), ___nl__im__3));
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
return compiler0input_type();
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_string_const(55), ___get_global_string_const(80)));
#line 110
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(81), ___nl__im__8, ___get_global_string_const(82), ___nl__im__9, ___get_global_string_const(83), ___nl__im__10, ___get_global_string_const(84), ___nl__im__11, ___get_global_string_const(85), ___nl__im__12));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(4, ___get_global_string_const(86), ___nl__im__16, ___get_global_string_const(87), ___nl__im__17, ___get_global_string_const(88), ___nl__im__18, ___get_global_string_const(89), ___nl__im__19));
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
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_string_const(55), ___get_global_string_const(90)));
#line 120
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__20));
#line 121
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(91), ___nl__im__23, ___get_global_string_const(92), ___nl__im__24));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(93), ___nl__im__2, ___get_global_string_const(94), ___nl__im__4, ___get_global_string_const(95), ___nl__im__5, ___get_global_string_const(96), ___nl__im__6, ___get_global_string_const(97), ___nl__im__13, ___get_global_string_const(98), ___nl__im__14, ___get_global_string_const(99), ___nl__im__20, ___get_global_string_const(100), ___nl__im__21, ___get_global_string_const(101), ___nl__im__25, ___get_global_string_const(102), ___nl__im__26));
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
return compiler0file_t();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(79), ___nl__im__2, ___get_global_string_const(78), ___nl__im__3));
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

INT  compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "compiler0compile");
ImmT  *var0 = &(_tab[0]);
return compiler0compile(*var0);
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(94)));
#line 133
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__2));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 134
___nl__int__3 = 0;
#line 135
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 135
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(86));
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
___nl__bool__4 = !___nl__bool__4;
#line 135
if(___nl__bool__4){ goto label_15;}
#line 136
c_rt_lib0move(&___nl__im__6,___get_global_string_const(103));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(88));
#line 138
c_rt_lib0clear(&___nl__im__7);
#line 138
if(___nl__bool__4){ goto label_23;}
#line 138
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(89));
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
c_rt_lib0move(&___nl__im__9,___get_global_string_const(104));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 142
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(87));
#line 142
c_rt_lib0clear(&___nl__im__10);
#line 142
___nl__bool__4 = !___nl__bool__4;
#line 142
if(___nl__bool__4){ goto label_44;}
#line 143
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(93)));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 147
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 147
c_rt_lib0clear(&___nl__im__15);
#line 147
___nl__bool__14 = !___nl__bool__14;
#line 147
if(___nl__bool__14){ goto label_66;}
#line 148
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(94)));
#line 148
c_rt_lib0move(&___nl__im__18,___get_global_string_const(105));
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
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
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
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
INT  ___nl__int__55 = 0;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
#line 156
c_rt_lib0move(&___nl__im__2,___get_global_string_const(106));
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
___nl__int__11 = ___nl__int__8 >= ___nl__int__7;
#line 160
___nl__bool__10 = ___nl__int__11;
#line 160
if(___nl__bool__10){ goto label_28;}
#line 161
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__3, ___nl__int__8));
#line 161
___nl__int__14 = 2;
#line 161
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 161
c_rt_lib0move(&___nl__im__12, string_utils0int2str(___nl__im__13, ___nl__im__15));
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
//clear ___nl__int__14;
#line 161
c_rt_lib0clear(&___nl__im__15);
#line 161
c_rt_lib0copy(&___nl__im__16, ___nl__im__12);
#line 161
c_rt_lib0array_set(&___nl__im__3, ___nl__int__8, ___nl__im__16);
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__16);
#line 162
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 162
goto label_11;
#line 162
label_28:
;
#line 163
___nl__int__20 = 1;
#line 163
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__6, ___nl__int__20));
#line 163
//clear ___nl__int__20;
#line 163
___nl__int__21 = 1000;
#line 163
___nl__int__22 = getIntFromImm(___nl__im__19);
#line 163
___nl__int__18 = ___nl__int__22 / ___nl__int__21;
#line 163
c_rt_lib0clear(&___nl__im__19);
#line 163
//clear ___nl__int__21;
#line 163
//clear ___nl__int__22;
#line 163
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__18));
#line 163
___nl__int__24 = 3;
#line 163
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__24));
#line 163
c_rt_lib0move(&___nl__im__17, string_utils0int2str(___nl__im__23, ___nl__im__25));
#line 163
//clear ___nl__int__18;
#line 163
c_rt_lib0clear(&___nl__im__23);
#line 163
//clear ___nl__int__24;
#line 163
c_rt_lib0clear(&___nl__im__25);
#line 164
c_rt_lib0move(&___nl__im__40,___get_global_string_const(107));
#line 164
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__1, ___nl__im__40));
#line 164
c_rt_lib0clear(&___nl__im__40);
#line 164
___nl__int__42 = 5;
#line 164
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__3, ___nl__int__42));
#line 164
//clear ___nl__int__42;
#line 164
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 164
c_rt_lib0clear(&___nl__im__39);
#line 164
c_rt_lib0clear(&___nl__im__41);
#line 164
c_rt_lib0move(&___nl__im__43,___get_global_string_const(37));
#line 164
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__43));
#line 164
c_rt_lib0clear(&___nl__im__38);
#line 164
c_rt_lib0clear(&___nl__im__43);
#line 164
___nl__int__45 = 4;
#line 164
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__3, ___nl__int__45));
#line 164
//clear ___nl__int__45;
#line 164
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__44));
#line 164
c_rt_lib0clear(&___nl__im__37);
#line 164
c_rt_lib0clear(&___nl__im__44);
#line 164
c_rt_lib0move(&___nl__im__46,___get_global_string_const(37));
#line 164
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__46));
#line 164
c_rt_lib0clear(&___nl__im__36);
#line 164
c_rt_lib0clear(&___nl__im__46);
#line 164
___nl__int__48 = 3;
#line 164
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__3, ___nl__int__48));
#line 164
//clear ___nl__int__48;
#line 164
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__47));
#line 164
c_rt_lib0clear(&___nl__im__35);
#line 164
c_rt_lib0clear(&___nl__im__47);
#line 164
c_rt_lib0move(&___nl__im__49,___get_global_string_const(108));
#line 164
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__49));
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 164
c_rt_lib0clear(&___nl__im__49);
#line 164
___nl__int__51 = 2;
#line 164
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__3, ___nl__int__51));
#line 164
//clear ___nl__int__51;
#line 164
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__50));
#line 164
c_rt_lib0clear(&___nl__im__33);
#line 164
c_rt_lib0clear(&___nl__im__50);
#line 164
___nl__int__53 = 1;
#line 164
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__3, ___nl__int__53));
#line 164
//clear ___nl__int__53;
#line 164
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__52));
#line 164
c_rt_lib0clear(&___nl__im__32);
#line 164
c_rt_lib0clear(&___nl__im__52);
#line 164
___nl__int__55 = 0;
#line 164
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__3, ___nl__int__55));
#line 164
//clear ___nl__int__55;
#line 164
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__54));
#line 164
c_rt_lib0clear(&___nl__im__31);
#line 164
c_rt_lib0clear(&___nl__im__54);
#line 164
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__17));
#line 164
c_rt_lib0clear(&___nl__im__30);
#line 164
c_rt_lib0move(&___nl__im__56,___get_global_string_const(108));
#line 164
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__56));
#line 164
c_rt_lib0clear(&___nl__im__29);
#line 164
c_rt_lib0clear(&___nl__im__56);
#line 164
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__5));
#line 164
c_rt_lib0clear(&___nl__im__28);
#line 165
c_rt_lib0move(&___nl__im__57,___get_global_string_const(109));
#line 165
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__57));
#line 165
c_rt_lib0clear(&___nl__im__27);
#line 165
c_rt_lib0clear(&___nl__im__57);
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
//clear ___nl__int__11;
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 165
return ___nl__im__26;
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
//clear ___nl__int__11;
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 165
c_rt_lib0clear(&___nl__im__26);
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
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
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
___nl__int__8 = ___nl__int__1 >= ___nl__int__7;
#line 170
___nl__bool__4 = ___nl__int__8;
#line 170
//clear ___nl__int__7;
#line 170
//clear ___nl__int__8;
#line 170
___nl__bool__6 = !___nl__bool__4;
#line 170
if(___nl__bool__6){ goto label_20;}
#line 170
___nl__int__10 = 1;
#line 170
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 170
//clear ___nl__int__10;
#line 170
c_rt_lib0move(&___nl__im__11,___get_global_string_const(106));
#line 170
___nl__bool__4 = c_rt_lib0ne(___nl__im__9, ___nl__im__11);
#line 170
c_rt_lib0clear(&___nl__im__9);
#line 170
c_rt_lib0clear(&___nl__im__11);
#line 170
label_20:
;
#line 170
//clear ___nl__bool__6;
#line 170
___nl__bool__5 = !___nl__bool__4;
#line 170
if(___nl__bool__5){ goto label_31;}
#line 170
___nl__int__13 = 1;
#line 170
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__13));
#line 170
//clear ___nl__int__13;
#line 170
c_rt_lib0move(&___nl__im__14,___get_global_string_const(110));
#line 170
___nl__bool__4 = c_rt_lib0ne(___nl__im__12, ___nl__im__14);
#line 170
c_rt_lib0clear(&___nl__im__12);
#line 170
c_rt_lib0clear(&___nl__im__14);
#line 170
label_31:
;
#line 170
//clear ___nl__bool__5;
#line 170
___nl__bool__4 = !___nl__bool__4;
#line 170
if(___nl__bool__4){ goto label_56;}
#line 171
___nl__int__17 = 1;
#line 171
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 171
//clear ___nl__int__17;
#line 171
c_rt_lib0move(&___nl__im__18,___get_global_string_const(111));
#line 171
___nl__bool__15 = c_rt_lib0eq(___nl__im__16, ___nl__im__18);
#line 171
c_rt_lib0clear(&___nl__im__16);
#line 171
c_rt_lib0clear(&___nl__im__18);
#line 171
___nl__bool__15 = !___nl__bool__15;
#line 171
if(___nl__bool__15){ goto label_50;}
#line 172
___nl__int__19 = 1;
#line 172
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 172
//clear ___nl__int__19;
#line 173
//clear ___nl__bool__15;
#line 173
goto label_56;
#line 174
goto label_50;
#line 174
label_50:
;
#line 174
//clear ___nl__bool__15;
#line 175
___nl__int__20 = 1;
#line 175
___nl__int__1 = ___nl__int__1 - ___nl__int__20;
#line 175
//clear ___nl__int__20;
#line 176
goto label_5;
#line 176
label_56:
;
#line 177
c_rt_lib0move(&___nl__im__21,___get_global_string_const(37));
#line 178
label_58:
;
#line 178
___nl__int__25 = 0;
#line 178
___nl__int__26 = ___nl__int__1 >= ___nl__int__25;
#line 178
___nl__bool__22 = ___nl__int__26;
#line 178
//clear ___nl__int__25;
#line 178
//clear ___nl__int__26;
#line 178
___nl__bool__24 = !___nl__bool__22;
#line 178
if(___nl__bool__24){ goto label_73;}
#line 178
___nl__int__28 = 1;
#line 178
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__28));
#line 178
//clear ___nl__int__28;
#line 178
c_rt_lib0move(&___nl__im__29,___get_global_string_const(106));
#line 178
___nl__bool__22 = c_rt_lib0ne(___nl__im__27, ___nl__im__29);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
c_rt_lib0clear(&___nl__im__29);
#line 178
label_73:
;
#line 178
//clear ___nl__bool__24;
#line 178
___nl__bool__23 = !___nl__bool__22;
#line 178
if(___nl__bool__23){ goto label_84;}
#line 178
___nl__int__31 = 1;
#line 178
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__31));
#line 178
//clear ___nl__int__31;
#line 178
c_rt_lib0move(&___nl__im__32,___get_global_string_const(110));
#line 178
___nl__bool__22 = c_rt_lib0ne(___nl__im__30, ___nl__im__32);
#line 178
c_rt_lib0clear(&___nl__im__30);
#line 178
c_rt_lib0clear(&___nl__im__32);
#line 178
label_84:
;
#line 178
//clear ___nl__bool__23;
#line 178
___nl__bool__22 = !___nl__bool__22;
#line 178
if(___nl__bool__22){ goto label_97;}
#line 179
___nl__int__34 = 1;
#line 179
c_rt_lib0move(&___nl__im__33, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__34));
#line 179
//clear ___nl__int__34;
#line 179
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__33, ___nl__im__21));
#line 179
c_rt_lib0clear(&___nl__im__33);
#line 180
___nl__int__35 = 1;
#line 180
___nl__int__1 = ___nl__int__1 - ___nl__int__35;
#line 180
//clear ___nl__int__35;
#line 181
goto label_58;
#line 181
label_97:
;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
//clear ___nl__int__1;
#line 182
//clear ___nl__bool__4;
#line 182
//clear ___nl__bool__22;
#line 182
return ___nl__im__21;
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
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
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
___nl__int__7 = ___nl__int__5 <= ___nl__int__6;
#line 187
___nl__bool__4 = ___nl__int__7;
#line 187
//clear ___nl__int__5;
#line 187
//clear ___nl__int__6;
#line 187
//clear ___nl__int__7;
#line 187
___nl__bool__4 = !___nl__bool__4;
#line 187
if(___nl__bool__4){ goto label_19;}
#line 187
___nl__bool__8 = false;
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
c_rt_lib0clear(&___nl__im__2);
#line 187
//clear ___nl__bool__4;
#line 187
return ___nl__bool__8;
#line 187
goto label_19;
#line 187
label_19:
;
#line 187
//clear ___nl__bool__4;
#line 187
//clear ___nl__bool__8;
#line 188
___nl__int__10 = string0length(___nl__im__0);
#line 188
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 188
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 188
//clear ___nl__int__10;
#line 188
//clear ___nl__int__11;
#line 188
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 188
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__9, ___nl__int__12));
#line 188
//clear ___nl__int__9;
#line 188
//clear ___nl__int__12;
#line 189
___nl__bool__13 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 189
c_rt_lib0clear(&___nl__im__0);
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
c_rt_lib0clear(&___nl__im__2);
#line 189
return ___nl__bool__13;
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
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(65));
#line 193
if(___nl__bool__1){ goto label_15;}
#line 195
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(66));
#line 195
if(___nl__bool__1){ goto label_22;}
#line 197
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(67));
#line 197
if(___nl__bool__1){ goto label_30;}
#line 199
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(69));
#line 199
if(___nl__bool__1){ goto label_43;}
#line 201
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(68));
#line 201
if(___nl__bool__1){ goto label_55;}
#line 203
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(70));
#line 203
if(___nl__bool__1){ goto label_68;}
#line 203
c_rt_lib0move(&___nl__im__2,___get_global_string_const(16));
#line 203
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 203
nl_die_arg(___nl__im__2);
#line 193
label_15:
;
#line 194
c_rt_lib0move(&___nl__im__3,___get_global_string_const(112));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(113));
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
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(67)));
#line 197
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 198
c_rt_lib0move(&___nl__im__7,___get_global_string_const(114));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(115));
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
c_rt_lib0move(&___nl__im__9,___get_global_string_const(116));
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
c_rt_lib0move(&___nl__im__10,___get_global_string_const(117));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(111));
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
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
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
ImmT  ___nl__im__50 = NULL;
#line 216
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(94)));
#line 216
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 217
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(118)));
#line 218
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(99)));
#line 218
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(65));
#line 218
if(___nl__bool__7){ goto label_20;}
#line 220
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(66));
#line 220
if(___nl__bool__7){ goto label_38;}
#line 222
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(67));
#line 222
if(___nl__bool__7){ goto label_63;}
#line 224
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(68));
#line 224
if(___nl__bool__7){ goto label_87;}
#line 232
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(69));
#line 232
if(___nl__bool__7){ goto label_146;}
#line 234
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(70));
#line 234
if(___nl__bool__7){ goto label_172;}
#line 234
c_rt_lib0move(&___nl__im__8,___get_global_string_const(16));
#line 234
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 234
nl_die_arg(___nl__im__8);
#line 218
label_20:
;
#line 219
c_rt_lib0move(&___nl__im__12,___get_global_string_const(112));
#line 219
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 219
c_rt_lib0clear(&___nl__im__12);
#line 219
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(65), ___nl__im__11));
#line 219
c_rt_lib0clear(&___nl__im__11);
#line 219
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__5, ___get_global_string_const(75), ___nl__im__10));
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
goto label_195;
#line 220
label_38:
;
#line 221
c_rt_lib0move(&___nl__im__17,___get_global_string_const(113));
#line 221
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__3, ___nl__im__17));
#line 221
c_rt_lib0clear(&___nl__im__17);
#line 221
c_rt_lib0move(&___nl__im__19,___get_global_string_const(119));
#line 221
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__3, ___nl__im__19));
#line 221
c_rt_lib0clear(&___nl__im__19);
#line 221
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__16, ___get_global_string_const(71), ___nl__im__18));
#line 221
c_rt_lib0clear(&___nl__im__16);
#line 221
c_rt_lib0clear(&___nl__im__18);
#line 221
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__15));
#line 221
c_rt_lib0clear(&___nl__im__15);
#line 221
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__5, ___get_global_string_const(75), ___nl__im__14));
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
goto label_195;
#line 222
label_63:
;
#line 222
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(67)));
#line 222
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 223
c_rt_lib0move(&___nl__im__25,___get_global_string_const(114));
#line 223
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 223
c_rt_lib0clear(&___nl__im__25);
#line 223
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__24));
#line 223
c_rt_lib0clear(&___nl__im__24);
#line 223
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__5, ___get_global_string_const(75), ___nl__im__23));
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
goto label_195;
#line 224
label_87:
;
#line 225
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(120)));
#line 225
___nl__int__26 = string0length(___nl__im__27);
#line 225
c_rt_lib0clear(&___nl__im__27);
#line 226
c_rt_lib0move(&___nl__im__28, compiler_priv0get_dir(___nl__im__5));
#line 227
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(94)));
#line 227
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__28));
#line 227
c_rt_lib0clear(&___nl__im__31);
#line 227
c_rt_lib0move(&___nl__im__32,___get_global_string_const(106));
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
___nl__int__35 = ___nl__int__26 < ___nl__int__34;
#line 228
___nl__bool__33 = ___nl__int__35;
#line 228
//clear ___nl__int__34;
#line 228
//clear ___nl__int__35;
#line 228
___nl__bool__33 = !___nl__bool__33;
#line 228
if(___nl__bool__33){ goto label_120;}
#line 229
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(94)));
#line 229
___nl__int__39 = 1;
#line 229
___nl__int__38 = ___nl__int__26 + ___nl__int__39;
#line 229
//clear ___nl__int__39;
#line 229
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__38));
#line 229
c_rt_lib0move(&___nl__im__37, string0substr2(___nl__im__28, ___nl__im__40));
#line 229
//clear ___nl__int__38;
#line 229
c_rt_lib0clear(&___nl__im__40);
#line 229
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__36, ___nl__im__37));
#line 229
c_rt_lib0clear(&___nl__im__36);
#line 229
c_rt_lib0clear(&___nl__im__37);
#line 230
goto label_120;
#line 230
label_120:
;
#line 230
//clear ___nl__bool__33;
#line 231
c_rt_lib0move(&___nl__im__44,___get_global_string_const(116));
#line 231
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__3, ___nl__im__44));
#line 231
c_rt_lib0clear(&___nl__im__44);
#line 231
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(68), ___nl__im__43));
#line 231
c_rt_lib0clear(&___nl__im__43);
#line 231
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__5, ___get_global_string_const(75), ___nl__im__42));
#line 231
c_rt_lib0clear(&___nl__im__42);
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
return ___nl__im__41;
#line 232
goto label_195;
#line 232
label_146:
;
#line 233
c_rt_lib0move(&___nl__im__48,___get_global_string_const(115));
#line 233
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__3, ___nl__im__48));
#line 233
c_rt_lib0clear(&___nl__im__48);
#line 233
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(69), ___nl__im__47));
#line 233
c_rt_lib0clear(&___nl__im__47);
#line 233
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__5, ___get_global_string_const(75), ___nl__im__46));
#line 233
c_rt_lib0clear(&___nl__im__46);
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
c_rt_lib0clear(&___nl__im__41);
#line 233
return ___nl__im__45;
#line 234
goto label_195;
#line 234
label_172:
;
#line 235
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_string_const(70)));
#line 235
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(2, ___get_global_string_const(74), ___nl__im__5, ___get_global_string_const(75), ___nl__im__50));
#line 235
c_rt_lib0clear(&___nl__im__50);
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
c_rt_lib0clear(&___nl__im__41);
#line 235
c_rt_lib0clear(&___nl__im__45);
#line 235
return ___nl__im__49;
#line 236
goto label_195;
#line 236
label_195:
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
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
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
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 242
___nl__bool__10 = ___nl__int__11;
#line 242
if(___nl__bool__10){ goto label_29;}
#line 242
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 242
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 243
c_rt_lib0move(&___nl__im__14,___get_global_string_const(116));
#line 243
___nl__bool__13 = compiler_priv0has_extension(___nl__im__6, ___nl__im__14);
#line 243
c_rt_lib0clear(&___nl__im__14);
#line 243
___nl__bool__13 = !___nl__bool__13;
#line 243
if(___nl__bool__13){ goto label_24;}
#line 243
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 243
goto label_24;
#line 243
label_24:
;
#line 243
//clear ___nl__bool__13;
#line 243
c_rt_lib0clear(&___nl__im__6);
#line 244
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 244
goto label_11;
#line 244
label_29:
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
//clear ___nl__int__11;
#line 245
c_rt_lib0clear(&___nl__im__12);
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
bool  ___nl__bool__52 = false;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
#line 249
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(94)));
#line 250
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 251
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(93)));
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
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 251
___nl__bool__8 = ___nl__int__9;
#line 251
if(___nl__bool__8){ goto label_55;}
#line 251
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__3, ___nl__int__5));
#line 251
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 252
c_rt_lib0move(&___nl__im__12,___get_global_string_const(116));
#line 252
___nl__bool__11 = compiler_priv0has_extension(___nl__im__4, ___nl__im__12);
#line 252
c_rt_lib0clear(&___nl__im__12);
#line 252
___nl__bool__11 = !___nl__bool__11;
#line 252
if(___nl__bool__11){ goto label_23;}
#line 253
c_rt_lib0move(&___nl__im__14, compiler_priv0get_dir(___nl__im__4));
#line 253
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(120), ___nl__im__14, ___get_global_string_const(118), ___nl__im__4));
#line 253
c_rt_lib0clear(&___nl__im__14);
#line 253
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__13));
#line 253
c_rt_lib0clear(&___nl__im__13);
#line 254
goto label_42;
#line 254
label_23:
;
#line 255
c_rt_lib0move(&___nl__im__15, compiler_priv0get_all_nianio_file(___nl__im__4));
#line 255
___nl__int__17 = 0;
#line 255
___nl__int__18 = 1;
#line 255
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 255
label_28:
;
#line 255
___nl__int__21 = ___nl__int__17 >= ___nl__int__19;
#line 255
___nl__bool__20 = ___nl__int__21;
#line 255
if(___nl__bool__20){ goto label_40;}
#line 255
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 255
c_rt_lib0copy(&___nl__im__16, ___nl__im__22);
#line 256
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_string_const(120), ___nl__im__4, ___get_global_string_const(118), ___nl__im__16));
#line 256
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__23));
#line 256
c_rt_lib0clear(&___nl__im__23);
#line 256
c_rt_lib0clear(&___nl__im__16);
#line 257
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 257
goto label_28;
#line 257
label_40:
;
#line 258
goto label_42;
#line 258
label_42:
;
#line 258
//clear ___nl__bool__11;
#line 258
c_rt_lib0clear(&___nl__im__15);
#line 258
c_rt_lib0clear(&___nl__im__16);
#line 258
//clear ___nl__int__17;
#line 258
//clear ___nl__int__18;
#line 258
//clear ___nl__int__19;
#line 258
//clear ___nl__bool__20;
#line 258
//clear ___nl__int__21;
#line 258
c_rt_lib0clear(&___nl__im__22);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 259
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 259
goto label_6;
#line 259
label_55:
;
#line 260
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 260
c_rt_lib0move(&___nl__im__24, compiler_priv0get_out_ext(___nl__im__25));
#line 260
c_rt_lib0clear(&___nl__im__25);
#line 261
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 262
c_rt_lib0move(&___nl__im__27, c_fe_lib0get_module_files(___nl__im__1));
#line 262
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(79));
#line 262
if(___nl__bool__28){ goto label_68;}
#line 267
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(78));
#line 267
if(___nl__bool__28){ goto label_103;}
#line 267
c_rt_lib0move(&___nl__im__29,___get_global_string_const(16));
#line 267
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 267
nl_die_arg(___nl__im__29);
#line 262
label_68:
;
#line 262
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__27, ___get_global_string_const(79)));
#line 262
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 263
c_rt_lib0move(&___nl__im__34, ptd0string());
#line 263
c_rt_lib0move(&___nl__im__33, ptd0arr(___nl__im__34));
#line 263
c_rt_lib0clear(&___nl__im__34);
#line 263
c_rt_lib0move(&___nl__im__32, ptd0ensure(___nl__im__33, ___nl__im__30));
#line 263
c_rt_lib0clear(&___nl__im__33);
#line 263
___nl__int__36 = 0;
#line 263
___nl__int__37 = 1;
#line 263
___nl__int__38 = c_rt_lib0array_len(___nl__im__32);
#line 263
label_79:
;
#line 263
___nl__int__40 = ___nl__int__36 >= ___nl__int__38;
#line 263
___nl__bool__39 = ___nl__int__40;
#line 263
if(___nl__bool__39){ goto label_101;}
#line 263
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__32, ___nl__int__36));
#line 263
c_rt_lib0copy(&___nl__im__35, ___nl__im__41);
#line 264
___nl__bool__42 = compiler_priv0has_extension(___nl__im__35, ___nl__im__24);
#line 264
___nl__bool__42 = !___nl__bool__42;
#line 264
___nl__bool__42 = !___nl__bool__42;
#line 264
if(___nl__bool__42){ goto label_92;}
#line 264
//clear ___nl__bool__42;
#line 264
goto label_98;
#line 264
goto label_92;
#line 264
label_92:
;
#line 264
//clear ___nl__bool__42;
#line 265
c_rt_lib0move(&___nl__im__43, compiler_priv0get_module_name(___nl__im__35));
#line 265
c_rt_lib0delete(hash0set_value(&___nl__im__26, ___nl__im__43, ___nl__im__35));
#line 265
c_rt_lib0clear(&___nl__im__43);
#line 265
c_rt_lib0clear(&___nl__im__35);
#line 265
label_98:
;
#line 266
___nl__int__36 = ___nl__int__36 + ___nl__int__37;
#line 266
goto label_79;
#line 266
label_101:
;
#line 267
goto label_137;
#line 267
label_103:
;
#line 267
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__27, ___get_global_string_const(78)));
#line 267
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 268
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
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
//clear ___nl__int__9;
#line 268
c_rt_lib0clear(&___nl__im__10);
#line 268
c_rt_lib0clear(&___nl__im__24);
#line 268
c_rt_lib0clear(&___nl__im__26);
#line 268
c_rt_lib0clear(&___nl__im__27);
#line 268
//clear ___nl__bool__28;
#line 268
c_rt_lib0clear(&___nl__im__29);
#line 268
c_rt_lib0clear(&___nl__im__30);
#line 268
c_rt_lib0clear(&___nl__im__31);
#line 268
c_rt_lib0clear(&___nl__im__32);
#line 268
c_rt_lib0clear(&___nl__im__35);
#line 268
//clear ___nl__int__36;
#line 268
//clear ___nl__int__37;
#line 268
//clear ___nl__int__38;
#line 268
//clear ___nl__bool__39;
#line 268
//clear ___nl__int__40;
#line 268
c_rt_lib0clear(&___nl__im__41);
#line 268
c_rt_lib0clear(&___nl__im__44);
#line 268
c_rt_lib0clear(&___nl__im__45);
#line 268
return ___nl__im__46;
#line 269
goto label_137;
#line 269
label_137:
;
#line 270
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 271
___nl__int__49 = 0;
#line 271
___nl__int__50 = 1;
#line 271
___nl__int__51 = c_rt_lib0array_len(___nl__im__2);
#line 271
label_142:
;
#line 271
___nl__int__53 = ___nl__int__49 >= ___nl__int__51;
#line 271
___nl__bool__52 = ___nl__int__53;
#line 271
if(___nl__bool__52){ goto label_156;}
#line 271
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__2, ___nl__int__49));
#line 271
c_rt_lib0copy(&___nl__im__48, ___nl__im__54);
#line 272
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(118)));
#line 272
c_rt_lib0move(&___nl__im__55, compiler_priv0get_module_name(___nl__im__56));
#line 272
c_rt_lib0clear(&___nl__im__56);
#line 273
c_rt_lib0move(&___nl__im__57, compiler_priv0mk_path_module(___nl__im__48, ___nl__im__55, ___nl__im__0));
#line 274
c_rt_lib0delete(hash0set_value(&___nl__im__47, ___nl__im__55, ___nl__im__57));
#line 274
c_rt_lib0clear(&___nl__im__48);
#line 275
___nl__int__49 = ___nl__int__49 + ___nl__int__50;
#line 275
goto label_142;
#line 275
label_156:
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
//clear ___nl__int__9;
#line 276
c_rt_lib0clear(&___nl__im__10);
#line 276
c_rt_lib0clear(&___nl__im__24);
#line 276
c_rt_lib0clear(&___nl__im__26);
#line 276
c_rt_lib0clear(&___nl__im__27);
#line 276
//clear ___nl__bool__28;
#line 276
c_rt_lib0clear(&___nl__im__29);
#line 276
c_rt_lib0clear(&___nl__im__30);
#line 276
c_rt_lib0clear(&___nl__im__31);
#line 276
c_rt_lib0clear(&___nl__im__32);
#line 276
c_rt_lib0clear(&___nl__im__35);
#line 276
//clear ___nl__int__36;
#line 276
//clear ___nl__int__37;
#line 276
//clear ___nl__int__38;
#line 276
//clear ___nl__bool__39;
#line 276
//clear ___nl__int__40;
#line 276
c_rt_lib0clear(&___nl__im__41);
#line 276
c_rt_lib0clear(&___nl__im__44);
#line 276
c_rt_lib0clear(&___nl__im__45);
#line 276
c_rt_lib0clear(&___nl__im__46);
#line 276
c_rt_lib0clear(&___nl__im__48);
#line 276
//clear ___nl__int__49;
#line 276
//clear ___nl__int__50;
#line 276
//clear ___nl__int__51;
#line 276
//clear ___nl__bool__52;
#line 276
//clear ___nl__int__53;
#line 276
c_rt_lib0clear(&___nl__im__54);
#line 276
c_rt_lib0clear(&___nl__im__55);
#line 276
c_rt_lib0clear(&___nl__im__57);
#line 276
return ___nl__im__47;
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
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__string__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
#line 283
c_rt_lib0move(&___nl__im__5,___get_global_string_const(121));
#line 283
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 283
c_rt_lib0clear(&___nl__im__5);
#line 283
c_rt_lib0move(&___nl__im__6,___get_global_string_const(122));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(79), ___nl__im__12, ___get_global_string_const(78), ___nl__im__13));
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
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(79));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(79)));
#line 285
___nl__bool__16 = true;
#line 285
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 285
//clear ___nl__bool__16;
#line 286
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(79));
#line 286
if(___nl__bool__17){ goto label_39;}
#line 293
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(123));
#line 293
if(___nl__bool__17){ goto label_114;}
#line 293
c_rt_lib0move(&___nl__im__18,___get_global_string_const(16));
#line 293
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 293
nl_die_arg(___nl__im__18);
#line 286
label_39:
;
#line 286
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(79)));
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
c_rt_lib0move(&___nl__im__25,___get_global_string_const(60));
#line 289
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__25));
#line 289
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(124)));
#line 289
c_rt_lib0delete(hash0set_value(&___nl__im__25, ___nl__im__0, ___nl__im__26));
#line 289
c_rt_lib0move(&___nl__string__27,___get_global_string_const(60));
#line 289
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__27, ___nl__im__25));
#line 289
c_rt_lib0clear(&___nl__im__25);
#line 289
c_rt_lib0clear(&___nl__im__26);
#line 289
c_rt_lib0clear(&___nl__string__27);
#line 290
c_rt_lib0move(&___nl__im__28,___get_global_string_const(59));
#line 290
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__28));
#line 290
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(51)));
#line 290
c_rt_lib0delete(hash0set_value(&___nl__im__28, ___nl__im__0, ___nl__im__29));
#line 290
c_rt_lib0move(&___nl__string__30,___get_global_string_const(59));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__28));
#line 290
c_rt_lib0clear(&___nl__im__28);
#line 290
c_rt_lib0clear(&___nl__im__29);
#line 290
c_rt_lib0clear(&___nl__string__30);
#line 291
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(51)));
#line 291
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 291
c_rt_lib0clear(&___nl__im__33);
#line 291
___nl__int__34 = 0;
#line 291
___nl__int__35 = ___nl__int__32 == ___nl__int__34;
#line 291
___nl__bool__31 = ___nl__int__35;
#line 291
//clear ___nl__int__32;
#line 291
//clear ___nl__int__34;
#line 291
//clear ___nl__int__35;
#line 291
___nl__bool__31 = !___nl__bool__31;
#line 291
___nl__bool__31 = !___nl__bool__31;
#line 291
if(___nl__bool__31){ goto label_96;}
#line 291
c_rt_lib0move(&___nl__im__37,___get_global_string_const(37));
#line 291
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__37));
#line 291
c_rt_lib0clear(&___nl__im__37);
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
return ___nl__im__36;
#line 291
goto label_96;
#line 291
label_96:
;
#line 291
//clear ___nl__bool__31;
#line 291
c_rt_lib0clear(&___nl__im__36);
#line 292
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(79), ___nl__im__19));
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
return ___nl__im__38;
#line 293
goto label_153;
#line 293
label_114:
;
#line 293
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(123)));
#line 293
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 294
c_rt_lib0move(&___nl__im__41,___get_global_string_const(60));
#line 294
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__41));
#line 294
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 294
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__0, ___nl__im__42));
#line 294
c_rt_lib0move(&___nl__string__43,___get_global_string_const(60));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__43, ___nl__im__41));
#line 294
c_rt_lib0clear(&___nl__im__41);
#line 294
c_rt_lib0clear(&___nl__im__42);
#line 294
c_rt_lib0clear(&___nl__string__43);
#line 295
c_rt_lib0move(&___nl__im__44,___get_global_string_const(59));
#line 295
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__44));
#line 295
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__0, ___nl__im__39));
#line 295
c_rt_lib0move(&___nl__string__45,___get_global_string_const(59));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__45, ___nl__im__44));
#line 295
c_rt_lib0clear(&___nl__im__44);
#line 295
c_rt_lib0clear(&___nl__string__45);
#line 296
c_rt_lib0move(&___nl__im__47,___get_global_string_const(37));
#line 296
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__47));
#line 296
c_rt_lib0clear(&___nl__im__47);
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
c_rt_lib0clear(&___nl__im__38);
#line 296
c_rt_lib0clear(&___nl__im__39);
#line 296
c_rt_lib0clear(&___nl__im__40);
#line 296
return ___nl__im__46;
#line 297
goto label_153;
#line 297
label_153:
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
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 301
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 302
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 302
c_rt_lib0move(&___nl__im__2, c_fe_lib0file_to_string(___nl__im__3));
#line 302
c_rt_lib0clear(&___nl__im__3);
#line 302
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(79));
#line 302
if(___nl__bool__4){ goto label_11;}
#line 315
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(78));
#line 315
if(___nl__bool__4){ goto label_59;}
#line 315
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
#line 315
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 315
nl_die_arg(___nl__im__5);
#line 302
label_11:
;
#line 302
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(79)));
#line 302
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 303
c_rt_lib0move(&___nl__im__8,___get_global_string_const(125));
#line 303
c_rt_lib0delete(c_fe_lib0print(___nl__im__8));
#line 303
c_rt_lib0clear(&___nl__im__8);
#line 304
c_rt_lib0move(&___nl__im__9, dfile0try_sload(___nl__im__6));
#line 305
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 306
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(79));
#line 306
if(___nl__bool__11){ goto label_26;}
#line 308
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(78));
#line 308
if(___nl__bool__11){ goto label_31;}
#line 308
c_rt_lib0move(&___nl__im__12,___get_global_string_const(16));
#line 308
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__9));
#line 308
nl_die_arg(___nl__im__12);
#line 306
label_26:
;
#line 306
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(79)));
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
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(78)));
#line 308
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 309
c_rt_lib0move(&___nl__im__17,___get_global_string_const(126));
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
___nl__int__23 = ___nl__int__19 >= ___nl__int__21;
#line 312
___nl__bool__22 = ___nl__int__23;
#line 312
if(___nl__bool__22){ goto label_57;}
#line 312
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__10, ___nl__int__19));
#line 312
c_rt_lib0copy(&___nl__im__18, ___nl__im__24);
#line 313
___nl__int__25 = 1;
#line 313
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 313
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__26));
#line 313
//clear ___nl__int__25;
#line 313
c_rt_lib0clear(&___nl__im__26);
#line 313
c_rt_lib0clear(&___nl__im__18);
#line 314
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 314
goto label_43;
#line 314
label_57:
;
#line 315
goto label_66;
#line 315
label_59:
;
#line 315
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(78)));
#line 315
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 316
c_rt_lib0move(&___nl__im__29,___get_global_string_const(127));
#line 316
c_rt_lib0delete(c_fe_lib0print(___nl__im__29));
#line 316
c_rt_lib0clear(&___nl__im__29);
#line 317
goto label_66;
#line 317
label_66:
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
//clear ___nl__int__23;
#line 318
c_rt_lib0clear(&___nl__im__24);
#line 318
c_rt_lib0clear(&___nl__im__27);
#line 318
c_rt_lib0clear(&___nl__im__28);
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
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
bool  ___nl__bool__68 = false;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__string__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__string__76 = NULL;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
bool  ___nl__bool__91 = false;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
bool  ___nl__bool__97 = false;
INT  ___nl__int__98 = 0;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
INT  ___nl__int__107 = 0;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
bool  ___nl__bool__112 = false;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
bool  ___nl__bool__115 = false;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
bool  ___nl__bool__118 = false;
INT  ___nl__int__119 = 0;
INT  ___nl__int__120 = 0;
INT  ___nl__int__121 = 0;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
bool  ___nl__bool__124 = false;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
bool  ___nl__bool__137 = false;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
bool  ___nl__bool__142 = false;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
bool  ___nl__bool__158 = false;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
bool  ___nl__bool__166 = false;
INT  ___nl__int__167 = 0;
INT  ___nl__int__168 = 0;
INT  ___nl__int__169 = 0;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
INT  ___nl__int__174 = 0;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
bool  ___nl__bool__181 = false;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(79)));
#line 332
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(5, ___get_global_string_const(59), ___nl__im__7, ___get_global_string_const(60), ___nl__im__8, ___get_global_string_const(61), ___nl__im__9, ___get_global_string_const(62), ___nl__im__10, ___get_global_string_const(63), ___nl__im__11));
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
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(96)));
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
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(4, ___get_global_string_const(128), ___nl__im__18, ___get_global_string_const(129), ___nl__im__19, ___get_global_string_const(130), ___nl__im__20, ___get_global_string_const(131), ___nl__im__21));
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
c_rt_lib0move(___nl__im_ptr__22, c_rt_lib0hash_mk(4, ___get_global_string_const(128), ___nl__im__23, ___get_global_string_const(129), ___nl__im__24, ___get_global_string_const(130), ___nl__im__25, ___get_global_string_const(131), ___nl__im__26));
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
c_rt_lib0move(___nl__im_ptr__27,___get_global_string_const(37));
#line 339
___nl__im_ptr__27 = NULL;
#line 339
___nl__im_ptr__28 = &(___nl__rec__16.header0field);
#line 340
c_rt_lib0move(___nl__im_ptr__28,___get_global_string_const(37));
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
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0ov_mk_none(___get_global_string_const(132)));
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
c_rt_lib0move(___nl__im_ptr__42,___get_global_string_const(37));
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
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(61), ___nl__im__46);
#line 354
c_rt_lib0clear(&___nl__im__45);
#line 354
c_rt_lib0clear(&___nl__im__46);
#line 355
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 355
c_rt_lib0copy(&___nl__im__48, ___nl__im__47);
#line 355
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(62), ___nl__im__48);
#line 355
c_rt_lib0clear(&___nl__im__47);
#line 355
c_rt_lib0clear(&___nl__im__48);
#line 356
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(79)));
#line 356
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 356
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(63), ___nl__im__50);
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
if(___nl__bool__54){ goto label_171;}
#line 359
c_rt_lib0move(&___nl__im__53, c_rt_lib0get_key_iter(___nl__im__56));
#line 359
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value(___nl__im__51, ___nl__im__53));
#line 360
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_string_const(74)));
#line 360
c_rt_lib0move(&___nl__im__57, c_fe_lib0get_modif_time(___nl__im__58));
#line 360
c_rt_lib0clear(&___nl__im__58);
#line 361
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__57, ___get_global_string_const(78));
#line 361
___nl__bool__59 = !___nl__bool__59;
#line 361
if(___nl__bool__59){ goto label_133;}
#line 361
c_rt_lib0clear(&___nl__im__57);
#line 361
//clear ___nl__bool__59;
#line 361
goto label_168;
#line 361
goto label_133;
#line 361
label_133:
;
#line 361
//clear ___nl__bool__59;
#line 362
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__57, ___get_global_string_const(79)));
#line 363
___nl__bool__60 = hash0has_key(___nl__im__1, ___nl__im__53);
#line 363
___nl__bool__60 = !___nl__bool__60;
#line 363
if(___nl__bool__60){ goto label_159;}
#line 364
c_rt_lib0move(&___nl__im__61, hash0get_value(___nl__im__1, ___nl__im__53));
#line 365
___nl__int__63 = getIntFromImm(___nl__im__57);
#line 365
___nl__int__64 = getIntFromImm(___nl__im__61);
#line 365
___nl__int__65 = ___nl__int__63 > ___nl__int__64;
#line 365
___nl__bool__62 = ___nl__int__65;
#line 365
//clear ___nl__int__63;
#line 365
//clear ___nl__int__64;
#line 365
//clear ___nl__int__65;
#line 365
___nl__bool__62 = !___nl__bool__62;
#line 365
___nl__bool__62 = !___nl__bool__62;
#line 365
if(___nl__bool__62){ goto label_156;}
#line 365
c_rt_lib0clear(&___nl__im__57);
#line 365
//clear ___nl__bool__60;
#line 365
c_rt_lib0clear(&___nl__im__61);
#line 365
//clear ___nl__bool__62;
#line 365
goto label_168;
#line 365
goto label_156;
#line 365
label_156:
;
#line 365
//clear ___nl__bool__62;
#line 366
goto label_159;
#line 366
label_159:
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
___nl__int__66 = 1;
#line 369
___nl__int__52 = ___nl__int__52 + ___nl__int__66;
#line 369
//clear ___nl__int__66;
#line 369
c_rt_lib0clear(&___nl__im__57);
#line 369
label_168:
;
#line 370
c_rt_lib0move(&___nl__im__56, c_rt_lib0next_iter(___nl__im__56));
#line 370
goto label_118;
#line 370
label_171:
;
#line 371
c_rt_lib0move(&___nl__im__70, c_rt_lib0init_iter(___nl__im__15));
#line 371
label_173:
;
#line 371
___nl__bool__68 = c_rt_lib0is_end_hash(___nl__im__70);
#line 371
if(___nl__bool__68){ goto label_218;}
#line 371
c_rt_lib0move(&___nl__im__67, c_rt_lib0get_key_iter(___nl__im__70));
#line 371
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__67));
#line 372
___nl__bool__71 = hash0has_key(___nl__im__51, ___nl__im__67);
#line 372
___nl__bool__71 = !___nl__bool__71;
#line 372
___nl__bool__71 = !___nl__bool__71;
#line 372
if(___nl__bool__71){ goto label_214;}
#line 373
___nl__int__72 = 1;
#line 373
___nl__int__52 = ___nl__int__52 + ___nl__int__72;
#line 373
//clear ___nl__int__72;
#line 374
c_rt_lib0move(&___nl__im__73,___get_global_string_const(59));
#line 374
c_rt_lib0move(&___nl__im__73, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__73));
#line 374
c_rt_lib0delete(hash0delete(&___nl__im__73, ___nl__im__67));
#line 374
c_rt_lib0move(&___nl__string__74,___get_global_string_const(59));
#line 374
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__74, ___nl__im__73));
#line 374
c_rt_lib0clear(&___nl__im__73);
#line 374
c_rt_lib0clear(&___nl__string__74);
#line 375
c_rt_lib0move(&___nl__im__75,___get_global_string_const(60));
#line 375
c_rt_lib0move(&___nl__im__75, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__75));
#line 375
c_rt_lib0delete(hash0delete(&___nl__im__75, ___nl__im__67));
#line 375
c_rt_lib0move(&___nl__string__76,___get_global_string_const(60));
#line 375
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__76, ___nl__im__75));
#line 375
c_rt_lib0clear(&___nl__im__75);
#line 375
c_rt_lib0clear(&___nl__string__76);
#line 376
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__67));
#line 377
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__67));
#line 378
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__67));
#line 379
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__67));
#line 380
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__12, ___nl__im__67));
#line 381
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 381
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(66));
#line 381
c_rt_lib0clear(&___nl__im__78);
#line 381
___nl__bool__77 = !___nl__bool__77;
#line 381
if(___nl__bool__77){ goto label_211;}
#line 382
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__16, ___nl__im__67));
#line 383
goto label_211;
#line 383
label_211:
;
#line 383
//clear ___nl__bool__77;
#line 384
goto label_214;
#line 384
label_214:
;
#line 384
//clear ___nl__bool__71;
#line 385
c_rt_lib0move(&___nl__im__70, c_rt_lib0next_iter(___nl__im__70));
#line 385
goto label_173;
#line 385
label_218:
;
#line 386
c_rt_lib0copy(&___nl__im__15, ___nl__im__51);
#line 387
___nl__int__80 = 0;
#line 387
___nl__int__81 = ___nl__int__52 == ___nl__int__80;
#line 387
___nl__bool__79 = ___nl__int__81;
#line 387
//clear ___nl__int__80;
#line 387
//clear ___nl__int__81;
#line 387
___nl__bool__79 = !___nl__bool__79;
#line 387
if(___nl__bool__79){ goto label_246;}
#line 388
___nl__int__82 = 1;
#line 388
c_rt_lib0move(&___nl__im__83, c_rt_lib0int_new(___nl__int__82));
#line 388
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__83));
#line 388
//clear ___nl__int__82;
#line 388
c_rt_lib0clear(&___nl__im__83);
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
c_rt_lib0clear(&___nl__im__67);
#line 389
//clear ___nl__bool__68;
#line 389
c_rt_lib0clear(&___nl__im__69);
#line 389
c_rt_lib0clear(&___nl__im__70);
#line 389
//clear ___nl__bool__79;
#line 389
goto label_99;
#line 390
goto label_246;
#line 390
label_246:
;
#line 390
//clear ___nl__bool__79;
#line 391
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(0));
#line 392
c_rt_lib0move(&___nl__im__88, c_rt_lib0init_iter(___nl__im__5));
#line 392
label_250:
;
#line 392
___nl__bool__86 = c_rt_lib0is_end_hash(___nl__im__88);
#line 392
if(___nl__bool__86){ goto label_286;}
#line 392
c_rt_lib0move(&___nl__im__85, c_rt_lib0get_key_iter(___nl__im__88));
#line 392
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__85));
#line 393
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__87, ___get_global_string_const(74)));
#line 393
c_rt_lib0move(&___nl__im__89, compiler_priv0parse_module(___nl__im__85, ___nl__im__90, &___nl__im__6));
#line 393
c_rt_lib0clear(&___nl__im__90);
#line 393
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__89, ___get_global_string_const(79));
#line 393
if(___nl__bool__91){ goto label_265;}
#line 396
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__89, ___get_global_string_const(78));
#line 396
if(___nl__bool__91){ goto label_271;}
#line 396
c_rt_lib0move(&___nl__im__92,___get_global_string_const(16));
#line 396
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(2, ___nl__im__92, ___nl__im__89));
#line 396
nl_die_arg(___nl__im__92);
#line 393
label_265:
;
#line 393
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__89, ___get_global_string_const(79)));
#line 393
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 394
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__85, ___nl__im__93));
#line 395
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__85, ___nl__im__93));
#line 396
goto label_276;
#line 396
label_271:
;
#line 396
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__89, ___get_global_string_const(78)));
#line 396
c_rt_lib0copy(&___nl__im__95, ___nl__im__96);
#line 397
c_rt_lib0delete(hash0set_value(&___nl__im__84, ___nl__im__85, ___nl__im__87));
#line 398
goto label_276;
#line 398
label_276:
;
#line 398
c_rt_lib0clear(&___nl__im__89);
#line 398
//clear ___nl__bool__91;
#line 398
c_rt_lib0clear(&___nl__im__92);
#line 398
c_rt_lib0clear(&___nl__im__93);
#line 398
c_rt_lib0clear(&___nl__im__94);
#line 398
c_rt_lib0clear(&___nl__im__95);
#line 398
c_rt_lib0clear(&___nl__im__96);
#line 399
c_rt_lib0move(&___nl__im__88, c_rt_lib0next_iter(___nl__im__88));
#line 399
goto label_250;
#line 399
label_286:
;
#line 400
c_rt_lib0copy(&___nl__im__5, ___nl__im__84);
#line 401
___nl__int__98 = hash0size(___nl__im__5);
#line 401
___nl__int__99 = 0;
#line 401
___nl__int__100 = ___nl__int__98 > ___nl__int__99;
#line 401
___nl__bool__97 = ___nl__int__100;
#line 401
//clear ___nl__int__98;
#line 401
//clear ___nl__int__99;
#line 401
//clear ___nl__int__100;
#line 401
___nl__bool__97 = !___nl__bool__97;
#line 401
if(___nl__bool__97){ goto label_346;}
#line 402
compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__51);
#line 403
c_rt_lib0move(&___nl__im__104, string0lf());
#line 403
c_rt_lib0move(&___nl__im__105,___get_global_string_const(133));
#line 403
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__105));
#line 403
c_rt_lib0clear(&___nl__im__104);
#line 403
c_rt_lib0clear(&___nl__im__105);
#line 403
___nl__int__107 = hash0size(___nl__im__5);
#line 403
c_rt_lib0move(&___nl__im__108, c_rt_lib0int_new(___nl__int__107));
#line 403
c_rt_lib0move(&___nl__im__106, ptd0int_to_string(___nl__im__108));
#line 403
//clear ___nl__int__107;
#line 403
c_rt_lib0clear(&___nl__im__108);
#line 403
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__106));
#line 403
c_rt_lib0clear(&___nl__im__103);
#line 403
c_rt_lib0clear(&___nl__im__106);
#line 403
c_rt_lib0move(&___nl__im__109,___get_global_string_const(134));
#line 403
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__109));
#line 403
c_rt_lib0clear(&___nl__im__102);
#line 403
c_rt_lib0clear(&___nl__im__109);
#line 403
c_rt_lib0delete(c_fe_lib0print(___nl__im__101));
#line 403
c_rt_lib0clear(&___nl__im__101);
#line 404
c_rt_lib0move(&___nl__im__110,___get_global_string_const(135));
#line 404
c_rt_lib0delete(c_fe_lib0print(___nl__im__110));
#line 404
c_rt_lib0clear(&___nl__im__110);
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
c_rt_lib0clear(&___nl__im__67);
#line 405
//clear ___nl__bool__68;
#line 405
c_rt_lib0clear(&___nl__im__69);
#line 405
c_rt_lib0clear(&___nl__im__70);
#line 405
c_rt_lib0clear(&___nl__im__84);
#line 405
c_rt_lib0clear(&___nl__im__85);
#line 405
//clear ___nl__bool__86;
#line 405
c_rt_lib0clear(&___nl__im__87);
#line 405
c_rt_lib0clear(&___nl__im__88);
#line 405
c_rt_lib0clear(&___nl__im__89);
#line 405
//clear ___nl__bool__91;
#line 405
c_rt_lib0clear(&___nl__im__92);
#line 405
c_rt_lib0clear(&___nl__im__93);
#line 405
c_rt_lib0clear(&___nl__im__94);
#line 405
c_rt_lib0clear(&___nl__im__95);
#line 405
c_rt_lib0clear(&___nl__im__96);
#line 405
//clear ___nl__bool__97;
#line 405
goto label_99;
#line 406
goto label_346;
#line 406
label_346:
;
#line 406
//clear ___nl__bool__97;
#line 407
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(95)));
#line 407
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(101)));
#line 407
___nl__bool__112 = c_rt_lib0check_true_native(___nl__im__113);
#line 407
c_rt_lib0clear(&___nl__im__113);
#line 407
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__6, ___nl__im__111, ___nl__bool__112));
#line 407
c_rt_lib0clear(&___nl__im__111);
#line 407
//clear ___nl__bool__112;
#line 408
c_rt_lib0move(&___nl__im__117, c_rt_lib0init_iter(___nl__im__2));
#line 408
label_356:
;
#line 408
___nl__bool__115 = c_rt_lib0is_end_hash(___nl__im__117);
#line 408
if(___nl__bool__115){ goto label_364;}
#line 408
c_rt_lib0move(&___nl__im__114, c_rt_lib0get_key_iter(___nl__im__117));
#line 408
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__114));
#line 409
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__114, ___nl__im__116));
#line 410
c_rt_lib0move(&___nl__im__117, c_rt_lib0next_iter(___nl__im__117));
#line 410
goto label_356;
#line 410
label_364:
;
#line 412
___nl__int__119 = compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__51);
#line 412
___nl__int__120 = 0;
#line 412
___nl__int__121 = ___nl__int__119 > ___nl__int__120;
#line 412
___nl__bool__118 = ___nl__int__121;
#line 412
//clear ___nl__int__119;
#line 412
//clear ___nl__int__120;
#line 412
//clear ___nl__int__121;
#line 412
___nl__bool__118 = !___nl__bool__118;
#line 412
if(___nl__bool__118){ goto label_407;}
#line 413
c_rt_lib0move(&___nl__im__122,___get_global_string_const(135));
#line 413
c_rt_lib0delete(c_fe_lib0print(___nl__im__122));
#line 413
c_rt_lib0clear(&___nl__im__122);
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
c_rt_lib0clear(&___nl__im__67);
#line 414
//clear ___nl__bool__68;
#line 414
c_rt_lib0clear(&___nl__im__69);
#line 414
c_rt_lib0clear(&___nl__im__70);
#line 414
c_rt_lib0clear(&___nl__im__84);
#line 414
c_rt_lib0clear(&___nl__im__85);
#line 414
//clear ___nl__bool__86;
#line 414
c_rt_lib0clear(&___nl__im__87);
#line 414
c_rt_lib0clear(&___nl__im__88);
#line 414
c_rt_lib0clear(&___nl__im__89);
#line 414
//clear ___nl__bool__91;
#line 414
c_rt_lib0clear(&___nl__im__92);
#line 414
c_rt_lib0clear(&___nl__im__93);
#line 414
c_rt_lib0clear(&___nl__im__94);
#line 414
c_rt_lib0clear(&___nl__im__95);
#line 414
c_rt_lib0clear(&___nl__im__96);
#line 414
c_rt_lib0clear(&___nl__im__114);
#line 414
//clear ___nl__bool__115;
#line 414
c_rt_lib0clear(&___nl__im__116);
#line 414
c_rt_lib0clear(&___nl__im__117);
#line 414
//clear ___nl__bool__118;
#line 414
goto label_99;
#line 415
goto label_407;
#line 415
label_407:
;
#line 415
//clear ___nl__bool__118;
#line 416
c_rt_lib0move(&___nl__im__126, c_rt_lib0init_iter(___nl__im__4));
#line 416
label_410:
;
#line 416
___nl__bool__124 = c_rt_lib0is_end_hash(___nl__im__126);
#line 416
if(___nl__bool__124){ goto label_420;}
#line 416
c_rt_lib0move(&___nl__im__123, c_rt_lib0get_key_iter(___nl__im__126));
#line 416
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__123));
#line 417
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__123));
#line 417
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__123, ___nl__im__127));
#line 417
c_rt_lib0clear(&___nl__im__127);
#line 418
c_rt_lib0move(&___nl__im__126, c_rt_lib0next_iter(___nl__im__126));
#line 418
goto label_410;
#line 418
label_420:
;
#line 419
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 419
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__129, ___get_global_string_const(69));
#line 419
c_rt_lib0clear(&___nl__im__129);
#line 419
if(___nl__bool__128){ goto label_428;}
#line 419
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 419
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__130, ___get_global_string_const(68));
#line 419
c_rt_lib0clear(&___nl__im__130);
#line 419
label_428:
;
#line 419
___nl__bool__128 = !___nl__bool__128;
#line 419
___nl__bool__128 = !___nl__bool__128;
#line 419
if(___nl__bool__128){ goto label_472;}
#line 420
c_rt_lib0move(&___nl__im__131,___get_global_string_const(136));
#line 420
c_rt_lib0delete(c_fe_lib0print(___nl__im__131));
#line 420
c_rt_lib0clear(&___nl__im__131);
#line 421
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_mk(0));
#line 422
c_rt_lib0move(&___nl__im__133, compiler_priv0translate(___nl__im__4, ___nl__im__3, &___nl__im__12));
#line 423
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(94)));
#line 423
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 423
c_rt_lib0move(&___nl__im__134, compiler_priv0generate_modules_to_files(___nl__im__133, ___nl__im__51, ___nl__im__135, &___nl__rec__16, ___nl__im__136));
#line 423
c_rt_lib0clear(&___nl__im__135);
#line 423
c_rt_lib0clear(&___nl__im__136);
#line 424
___nl__bool__137 = c_rt_lib0priv_is(___nl__im__134, ___get_global_string_const(78));
#line 424
if(___nl__bool__137){ goto label_449;}
#line 428
___nl__bool__137 = c_rt_lib0priv_is(___nl__im__134, ___get_global_string_const(79));
#line 428
if(___nl__bool__137){ goto label_465;}
#line 428
c_rt_lib0move(&___nl__im__138,___get_global_string_const(16));
#line 428
c_rt_lib0move(&___nl__im__138, c_rt_lib0array_mk(2, ___nl__im__138, ___nl__im__134));
#line 428
nl_die_arg(___nl__im__138);
#line 424
label_449:
;
#line 424
c_rt_lib0move(&___nl__im__140, c_rt_lib0priv_as(___nl__im__134, ___get_global_string_const(78)));
#line 424
c_rt_lib0copy(&___nl__im__139, ___nl__im__140);
#line 425
c_rt_lib0move(&___nl__im__144, c_rt_lib0init_iter(___nl__im__139));
#line 425
label_453:
;
#line 425
___nl__bool__142 = c_rt_lib0is_end_hash(___nl__im__144);
#line 425
if(___nl__bool__142){ goto label_463;}
#line 425
c_rt_lib0move(&___nl__im__141, c_rt_lib0get_key_iter(___nl__im__144));
#line 425
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value(___nl__im__139, ___nl__im__141));
#line 426
c_rt_lib0move(&___nl__im__145, hash0get_value(___nl__im__2, ___nl__im__141));
#line 426
c_rt_lib0delete(hash0set_value(&___nl__im__132, ___nl__im__141, ___nl__im__145));
#line 426
c_rt_lib0clear(&___nl__im__145);
#line 427
c_rt_lib0move(&___nl__im__144, c_rt_lib0next_iter(___nl__im__144));
#line 427
goto label_453;
#line 427
label_463:
;
#line 428
goto label_469;
#line 428
label_465:
;
#line 428
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__134, ___get_global_string_const(79)));
#line 428
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 429
goto label_469;
#line 429
label_469:
;
#line 430
c_rt_lib0copy(&___nl__im__4, ___nl__im__132);
#line 431
goto label_524;
#line 431
label_472:
;
#line 432
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_mk(0));
#line 433
c_rt_lib0move(&___nl__im__152, c_rt_lib0init_iter(___nl__im__4));
#line 433
label_475:
;
#line 433
___nl__bool__150 = c_rt_lib0is_end_hash(___nl__im__152);
#line 433
if(___nl__bool__150){ goto label_521;}
#line 433
c_rt_lib0move(&___nl__im__149, c_rt_lib0get_key_iter(___nl__im__152));
#line 433
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__149));
#line 434
c_rt_lib0move(&___nl__im__154,___get_global_string_const(137));
#line 434
c_rt_lib0move(&___nl__im__153, c_rt_lib0concat_new(___nl__im__154, ___nl__im__149));
#line 434
c_rt_lib0clear(&___nl__im__154);
#line 434
c_rt_lib0delete(c_fe_lib0print(___nl__im__153));
#line 434
c_rt_lib0clear(&___nl__im__153);
#line 435
c_rt_lib0move(&___nl__im__157, hash0get_value(___nl__im__51, ___nl__im__149));
#line 435
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(75)));
#line 435
c_rt_lib0clear(&___nl__im__157);
#line 435
c_rt_lib0move(&___nl__im__155, compiler_priv0save_module_to_file(___nl__im__151, ___nl__im__156));
#line 435
c_rt_lib0clear(&___nl__im__156);
#line 435
___nl__bool__158 = c_rt_lib0priv_is(___nl__im__155, ___get_global_string_const(78));
#line 435
if(___nl__bool__158){ goto label_497;}
#line 438
___nl__bool__158 = c_rt_lib0priv_is(___nl__im__155, ___get_global_string_const(79));
#line 438
if(___nl__bool__158){ goto label_507;}
#line 438
c_rt_lib0move(&___nl__im__159,___get_global_string_const(16));
#line 438
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(2, ___nl__im__159, ___nl__im__155));
#line 438
nl_die_arg(___nl__im__159);
#line 435
label_497:
;
#line 435
c_rt_lib0move(&___nl__im__161, c_rt_lib0priv_as(___nl__im__155, ___get_global_string_const(78)));
#line 435
c_rt_lib0copy(&___nl__im__160, ___nl__im__161);
#line 436
c_rt_lib0move(&___nl__im__163,___get_global_string_const(138));
#line 436
c_rt_lib0move(&___nl__im__162, c_rt_lib0concat_new(___nl__im__163, ___nl__im__160));
#line 436
c_rt_lib0clear(&___nl__im__163);
#line 436
c_rt_lib0delete(c_fe_lib0print(___nl__im__162));
#line 436
c_rt_lib0clear(&___nl__im__162);
#line 437
c_rt_lib0delete(hash0set_value(&___nl__im__148, ___nl__im__149, ___nl__im__151));
#line 438
goto label_511;
#line 438
label_507:
;
#line 438
c_rt_lib0move(&___nl__im__165, c_rt_lib0priv_as(___nl__im__155, ___get_global_string_const(79)));
#line 438
c_rt_lib0copy(&___nl__im__164, ___nl__im__165);
#line 439
goto label_511;
#line 439
label_511:
;
#line 439
c_rt_lib0clear(&___nl__im__155);
#line 439
//clear ___nl__bool__158;
#line 439
c_rt_lib0clear(&___nl__im__159);
#line 439
c_rt_lib0clear(&___nl__im__160);
#line 439
c_rt_lib0clear(&___nl__im__161);
#line 439
c_rt_lib0clear(&___nl__im__164);
#line 439
c_rt_lib0clear(&___nl__im__165);
#line 440
c_rt_lib0move(&___nl__im__152, c_rt_lib0next_iter(___nl__im__152));
#line 440
goto label_475;
#line 440
label_521:
;
#line 441
c_rt_lib0copy(&___nl__im__4, ___nl__im__148);
#line 442
goto label_524;
#line 442
label_524:
;
#line 442
//clear ___nl__bool__128;
#line 442
c_rt_lib0clear(&___nl__im__132);
#line 442
c_rt_lib0clear(&___nl__im__133);
#line 442
c_rt_lib0clear(&___nl__im__134);
#line 442
//clear ___nl__bool__137;
#line 442
c_rt_lib0clear(&___nl__im__138);
#line 442
c_rt_lib0clear(&___nl__im__139);
#line 442
c_rt_lib0clear(&___nl__im__140);
#line 442
c_rt_lib0clear(&___nl__im__141);
#line 442
//clear ___nl__bool__142;
#line 442
c_rt_lib0clear(&___nl__im__143);
#line 442
c_rt_lib0clear(&___nl__im__144);
#line 442
c_rt_lib0clear(&___nl__im__146);
#line 442
c_rt_lib0clear(&___nl__im__147);
#line 442
c_rt_lib0clear(&___nl__im__148);
#line 442
c_rt_lib0clear(&___nl__im__149);
#line 442
//clear ___nl__bool__150;
#line 442
c_rt_lib0clear(&___nl__im__151);
#line 442
c_rt_lib0clear(&___nl__im__152);
#line 442
c_rt_lib0clear(&___nl__im__155);
#line 442
//clear ___nl__bool__158;
#line 442
c_rt_lib0clear(&___nl__im__159);
#line 442
c_rt_lib0clear(&___nl__im__160);
#line 442
c_rt_lib0clear(&___nl__im__161);
#line 442
c_rt_lib0clear(&___nl__im__164);
#line 442
c_rt_lib0clear(&___nl__im__165);
#line 443
___nl__int__167 = hash0size(___nl__im__4);
#line 443
___nl__int__168 = 0;
#line 443
___nl__int__169 = ___nl__int__167 > ___nl__int__168;
#line 443
___nl__bool__166 = ___nl__int__169;
#line 443
//clear ___nl__int__167;
#line 443
//clear ___nl__int__168;
#line 443
//clear ___nl__int__169;
#line 443
___nl__bool__166 = !___nl__bool__166;
#line 443
if(___nl__bool__166){ goto label_583;}
#line 444
c_rt_lib0move(&___nl__im__172,___get_global_string_const(139));
#line 444
___nl__int__174 = hash0size(___nl__im__4);
#line 444
c_rt_lib0move(&___nl__im__175, c_rt_lib0int_new(___nl__int__174));
#line 444
c_rt_lib0move(&___nl__im__173, ptd0int_to_string(___nl__im__175));
#line 444
//clear ___nl__int__174;
#line 444
c_rt_lib0clear(&___nl__im__175);
#line 444
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__173));
#line 444
c_rt_lib0clear(&___nl__im__172);
#line 444
c_rt_lib0clear(&___nl__im__173);
#line 444
c_rt_lib0move(&___nl__im__176,___get_global_string_const(140));
#line 444
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__176));
#line 444
c_rt_lib0clear(&___nl__im__171);
#line 444
c_rt_lib0clear(&___nl__im__176);
#line 445
c_rt_lib0move(&___nl__im__179, string0lf());
#line 445
c_rt_lib0move(&___nl__im__180,___get_global_string_const(138));
#line 445
c_rt_lib0move(&___nl__im__178, c_rt_lib0concat_new(___nl__im__179, ___nl__im__180));
#line 445
c_rt_lib0clear(&___nl__im__179);
#line 445
c_rt_lib0clear(&___nl__im__180);
#line 445
c_rt_lib0move(&___nl__im__177, c_rt_lib0concat_new(___nl__im__178, ___nl__im__170));
#line 445
c_rt_lib0clear(&___nl__im__178);
#line 445
c_rt_lib0delete(c_fe_lib0print(___nl__im__177));
#line 445
c_rt_lib0clear(&___nl__im__177);
#line 446
goto label_607;
#line 446
label_583:
;
#line 447
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 447
___nl__bool__181 = c_rt_lib0priv_is(___nl__im__182, ___get_global_string_const(89));
#line 447
c_rt_lib0clear(&___nl__im__182);
#line 447
___nl__bool__181 = !___nl__bool__181;
#line 447
if(___nl__bool__181){ goto label_597;}
#line 447
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 447
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 447
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__185, ___get_global_string_const(89)));
#line 447
c_rt_lib0clear(&___nl__im__184);
#line 447
c_rt_lib0clear(&___nl__im__185);
#line 447
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__183));
#line 447
c_rt_lib0clear(&___nl__im__183);
#line 447
goto label_597;
#line 447
label_597:
;
#line 447
//clear ___nl__bool__181;
#line 448
c_rt_lib0move(&___nl__im__187, string0lf());
#line 448
c_rt_lib0move(&___nl__im__188,___get_global_string_const(141));
#line 448
c_rt_lib0move(&___nl__im__186, c_rt_lib0concat_new(___nl__im__187, ___nl__im__188));
#line 448
c_rt_lib0clear(&___nl__im__187);
#line 448
c_rt_lib0clear(&___nl__im__188);
#line 448
c_rt_lib0delete(c_fe_lib0print(___nl__im__186));
#line 448
c_rt_lib0clear(&___nl__im__186);
#line 449
goto label_607;
#line 449
label_607:
;
#line 449
//clear ___nl__bool__166;
#line 449
c_rt_lib0clear(&___nl__im__170);
#line 450
c_rt_lib0move(&___nl__im__189,___get_global_string_const(135));
#line 450
c_rt_lib0delete(c_fe_lib0print(___nl__im__189));
#line 450
c_rt_lib0clear(&___nl__im__189);
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
c_rt_lib0clear(&___nl__im__67);
#line 450
//clear ___nl__bool__68;
#line 450
c_rt_lib0clear(&___nl__im__69);
#line 450
c_rt_lib0clear(&___nl__im__70);
#line 450
c_rt_lib0clear(&___nl__im__84);
#line 450
c_rt_lib0clear(&___nl__im__85);
#line 450
//clear ___nl__bool__86;
#line 450
c_rt_lib0clear(&___nl__im__87);
#line 450
c_rt_lib0clear(&___nl__im__88);
#line 450
c_rt_lib0clear(&___nl__im__89);
#line 450
//clear ___nl__bool__91;
#line 450
c_rt_lib0clear(&___nl__im__92);
#line 450
c_rt_lib0clear(&___nl__im__93);
#line 450
c_rt_lib0clear(&___nl__im__94);
#line 450
c_rt_lib0clear(&___nl__im__95);
#line 450
c_rt_lib0clear(&___nl__im__96);
#line 450
c_rt_lib0clear(&___nl__im__114);
#line 450
//clear ___nl__bool__115;
#line 450
c_rt_lib0clear(&___nl__im__116);
#line 450
c_rt_lib0clear(&___nl__im__117);
#line 450
c_rt_lib0clear(&___nl__im__123);
#line 450
//clear ___nl__bool__124;
#line 450
c_rt_lib0clear(&___nl__im__125);
#line 450
c_rt_lib0clear(&___nl__im__126);
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
c_rt_lib0clear(&___nl__im__67);
#line 353
//clear ___nl__bool__68;
#line 353
c_rt_lib0clear(&___nl__im__69);
#line 353
c_rt_lib0clear(&___nl__im__70);
#line 353
c_rt_lib0clear(&___nl__im__84);
#line 353
c_rt_lib0clear(&___nl__im__85);
#line 353
//clear ___nl__bool__86;
#line 353
c_rt_lib0clear(&___nl__im__87);
#line 353
c_rt_lib0clear(&___nl__im__88);
#line 353
c_rt_lib0clear(&___nl__im__89);
#line 353
//clear ___nl__bool__91;
#line 353
c_rt_lib0clear(&___nl__im__92);
#line 353
c_rt_lib0clear(&___nl__im__93);
#line 353
c_rt_lib0clear(&___nl__im__94);
#line 353
c_rt_lib0clear(&___nl__im__95);
#line 353
c_rt_lib0clear(&___nl__im__96);
#line 353
c_rt_lib0clear(&___nl__im__114);
#line 353
//clear ___nl__bool__115;
#line 353
c_rt_lib0clear(&___nl__im__116);
#line 353
c_rt_lib0clear(&___nl__im__117);
#line 353
c_rt_lib0clear(&___nl__im__123);
#line 353
//clear ___nl__bool__124;
#line 353
c_rt_lib0clear(&___nl__im__125);
#line 353
c_rt_lib0clear(&___nl__im__126);
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
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
generator_c0state_t0type ___nl__rec__48 = {};
ImmT * ___nl__im_ptr__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT * ___nl__im_ptr__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT * ___nl__im_ptr__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
ImmT * ___nl__im_ptr__61 = NULL;
ImmT * ___nl__im_ptr__62 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__63 = NULL;
INT * ___nl__int_ptr__64 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__65 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__66 = NULL;
ImmT * ___nl__im_ptr__67 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__68 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__69 = NULL;
ImmT * ___nl__im_ptr__70 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__71 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__72 = NULL;
ImmT * ___nl__im_ptr__73 = NULL;
ImmT * ___nl__im_ptr__74 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__75 = NULL;
ImmT * ___nl__im_ptr__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
bool  ___nl__bool__103 = false;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
INT  ___nl__int__109 = 0;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
INT  ___nl__int__112 = 0;
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(79)));
#line 461
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(59), ___nl__im__3, ___get_global_string_const(60), ___nl__im__4, ___get_global_string_const(61), ___nl__im__5, ___get_global_string_const(62), ___nl__im__6, ___get_global_string_const(63), ___nl__im__7));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(142));
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
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(74)));
#line 468
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 468
c_rt_lib0clear(&___nl__im__16);
#line 468
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(79));
#line 468
if(___nl__bool__17){ goto label_33;}
#line 470
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(78));
#line 470
if(___nl__bool__17){ goto label_38;}
#line 470
c_rt_lib0move(&___nl__im__18,___get_global_string_const(16));
#line 470
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 470
nl_die_arg(___nl__im__18);
#line 468
label_33:
;
#line 468
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(79)));
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
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(78)));
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
c_rt_lib0move(&___nl__im__24,___get_global_string_const(142));
#line 474
c_rt_lib0delete(profile0end(___nl__im__24));
#line 474
c_rt_lib0clear(&___nl__im__24);
#line 475
___nl__int__26 = 0;
#line 475
___nl__int__27 = ___nl__int__9 != ___nl__int__26;
#line 475
___nl__bool__25 = ___nl__int__27;
#line 475
//clear ___nl__int__26;
#line 475
//clear ___nl__int__27;
#line 475
___nl__bool__25 = !___nl__bool__25;
#line 475
if(___nl__bool__25){ goto label_87;}
#line 476
compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 477
___nl__int__28 = 1;
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
return ___nl__int__28;
#line 478
goto label_87;
#line 478
label_87:
;
#line 478
//clear ___nl__bool__25;
#line 478
//clear ___nl__int__28;
#line 480
c_rt_lib0move(&___nl__im__29,___get_global_string_const(143));
#line 480
c_rt_lib0delete(profile0begin(___nl__im__29));
#line 480
c_rt_lib0clear(&___nl__im__29);
#line 481
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(95)));
#line 481
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(101)));
#line 481
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__32);
#line 481
c_rt_lib0clear(&___nl__im__32);
#line 481
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__30, ___nl__bool__31));
#line 481
c_rt_lib0clear(&___nl__im__30);
#line 481
//clear ___nl__bool__31;
#line 482
c_rt_lib0move(&___nl__im__33,___get_global_string_const(144));
#line 482
c_rt_lib0delete(profile0end(___nl__im__33));
#line 482
c_rt_lib0clear(&___nl__im__33);
#line 483
c_rt_lib0move(&___nl__im__35,___get_global_string_const(145));
#line 483
___nl__bool__34 = hash0has_key(___nl__im__1, ___nl__im__35);
#line 483
c_rt_lib0clear(&___nl__im__35);
#line 483
___nl__bool__34 = !___nl__bool__34;
#line 483
if(___nl__bool__34){ goto label_116;}
#line 484
c_rt_lib0move(&___nl__im__36,___get_global_string_const(146));
#line 484
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(145)));
#line 484
c_rt_lib0move(&___nl__im__37, dfile_dbg0ssave(___nl__im__38));
#line 484
c_rt_lib0clear(&___nl__im__38);
#line 484
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__36, ___nl__im__37));
#line 484
c_rt_lib0clear(&___nl__im__36);
#line 484
c_rt_lib0clear(&___nl__im__37);
#line 485
goto label_116;
#line 485
label_116:
;
#line 485
//clear ___nl__bool__34;
#line 486
___nl__int__40 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 486
___nl__int__41 = 0;
#line 486
___nl__int__42 = ___nl__int__40 > ___nl__int__41;
#line 486
___nl__bool__39 = ___nl__int__42;
#line 486
//clear ___nl__int__40;
#line 486
//clear ___nl__int__41;
#line 486
//clear ___nl__int__42;
#line 486
___nl__bool__39 = !___nl__bool__39;
#line 486
if(___nl__bool__39){ goto label_147;}
#line 487
___nl__int__43 = 1;
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
//clear ___nl__bool__39;
#line 487
return ___nl__int__43;
#line 488
goto label_147;
#line 488
label_147:
;
#line 488
//clear ___nl__bool__39;
#line 488
//clear ___nl__int__43;
#line 489
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 489
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(69));
#line 489
c_rt_lib0clear(&___nl__im__45);
#line 489
if(___nl__bool__44){ goto label_157;}
#line 489
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 489
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__46, ___get_global_string_const(68));
#line 489
c_rt_lib0clear(&___nl__im__46);
#line 489
label_157:
;
#line 489
___nl__bool__44 = !___nl__bool__44;
#line 489
___nl__bool__44 = !___nl__bool__44;
#line 489
if(___nl__bool__44){ goto label_286;}
#line 490
c_rt_lib0move(&___nl__im__47,___get_global_string_const(147));
#line 490
c_rt_lib0delete(profile0begin(___nl__im__47));
#line 490
c_rt_lib0clear(&___nl__im__47);
#line 491
;
#line 491
___nl__im_ptr__49 = &(___nl__rec__48.global_int_const0field);
#line 492
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 492
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(0));
#line 492
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(___nl__im_ptr__49, c_rt_lib0hash_mk(4, ___get_global_string_const(128), ___nl__im__50, ___get_global_string_const(129), ___nl__im__51, ___get_global_string_const(130), ___nl__im__52, ___get_global_string_const(131), ___nl__im__53));
#line 492
c_rt_lib0clear(&___nl__im__50);
#line 492
c_rt_lib0clear(&___nl__im__51);
#line 492
c_rt_lib0clear(&___nl__im__52);
#line 492
c_rt_lib0clear(&___nl__im__53);
#line 492
___nl__im_ptr__49 = NULL;
#line 492
___nl__im_ptr__54 = &(___nl__rec__48.global_string_const0field);
#line 493
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(0));
#line 493
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 493
c_rt_lib0move(&___nl__im__57, c_rt_lib0array_mk(0));
#line 493
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(0));
#line 493
c_rt_lib0move(___nl__im_ptr__54, c_rt_lib0hash_mk(4, ___get_global_string_const(128), ___nl__im__55, ___get_global_string_const(129), ___nl__im__56, ___get_global_string_const(130), ___nl__im__57, ___get_global_string_const(131), ___nl__im__58));
#line 493
c_rt_lib0clear(&___nl__im__55);
#line 493
c_rt_lib0clear(&___nl__im__56);
#line 493
c_rt_lib0clear(&___nl__im__57);
#line 493
c_rt_lib0clear(&___nl__im__58);
#line 493
___nl__im_ptr__54 = NULL;
#line 493
___nl__im_ptr__59 = &(___nl__rec__48.ret0field);
#line 494
c_rt_lib0move(___nl__im_ptr__59,___get_global_string_const(37));
#line 494
___nl__im_ptr__59 = NULL;
#line 494
___nl__im_ptr__60 = &(___nl__rec__48.header0field);
#line 495
c_rt_lib0move(___nl__im_ptr__60,___get_global_string_const(37));
#line 495
___nl__im_ptr__60 = NULL;
#line 495
___nl__im_ptr__61 = &(___nl__rec__48.fun_args0field);
#line 496
c_rt_lib0move(___nl__im_ptr__61, c_rt_lib0array_mk(0));
#line 496
___nl__im_ptr__61 = NULL;
#line 496
___nl__im_ptr__62 = &(___nl__rec__48.ret_reg_type0field);
#line 497
c_rt_lib0move(___nl__im_ptr__62, c_rt_lib0ov_mk_none(___get_global_string_const(132)));
#line 497
___nl__im_ptr__62 = NULL;
#line 497
___nl__rec_ptr__63 = &(___nl__rec__48.const0field);
#line 498
;
#line 498
___nl__int_ptr__64 = &(___nl__rec_ptr__63->dynamic_nr0field);
#line 499
(*___nl__int_ptr__64) = 0;
#line 499
___nl__int_ptr__64 = NULL;
#line 499
___nl__rec_ptr__65 = &(___nl__rec_ptr__63->int0field);
#line 500
;
#line 500
___nl__arr_ptr__66 = &(___nl__rec_ptr__65->arr0field);
#line 500
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__66));
(*___nl__arr_ptr__66).size = 0;
(*___nl__arr_ptr__66).capacity = 0;
(*___nl__arr_ptr__66).value = NULL;
#line 500
___nl__arr_ptr__66 = NULL;
#line 500
___nl__im_ptr__67 = &(___nl__rec_ptr__65->hash0field);
#line 500
c_rt_lib0move(___nl__im_ptr__67, c_rt_lib0hash_mk(0));
#line 500
___nl__im_ptr__67 = NULL;
#line 500
___nl__rec_ptr__65 = NULL;
#line 500
___nl__rec_ptr__68 = &(___nl__rec_ptr__63->string0field);
#line 501
;
#line 501
___nl__arr_ptr__69 = &(___nl__rec_ptr__68->arr0field);
#line 501
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__69));
(*___nl__arr_ptr__69).size = 0;
(*___nl__arr_ptr__69).capacity = 0;
(*___nl__arr_ptr__69).value = NULL;
#line 501
___nl__arr_ptr__69 = NULL;
#line 501
___nl__im_ptr__70 = &(___nl__rec_ptr__68->hash0field);
#line 501
c_rt_lib0move(___nl__im_ptr__70, c_rt_lib0hash_mk(0));
#line 501
___nl__im_ptr__70 = NULL;
#line 501
___nl__rec_ptr__68 = NULL;
#line 501
___nl__rec_ptr__71 = &(___nl__rec_ptr__63->singleton0field);
#line 502
;
#line 502
___nl__arr_ptr__72 = &(___nl__rec_ptr__71->arr0field);
#line 502
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__72));
(*___nl__arr_ptr__72).size = 0;
(*___nl__arr_ptr__72).capacity = 0;
(*___nl__arr_ptr__72).value = NULL;
#line 502
___nl__arr_ptr__72 = NULL;
#line 502
___nl__im_ptr__73 = &(___nl__rec_ptr__71->hash0field);
#line 502
c_rt_lib0move(___nl__im_ptr__73, c_rt_lib0hash_mk(0));
#line 502
___nl__im_ptr__73 = NULL;
#line 502
___nl__rec_ptr__71 = NULL;
#line 502
___nl__rec_ptr__63 = NULL;
#line 502
___nl__im_ptr__74 = &(___nl__rec__48.mod_name0field);
#line 504
c_rt_lib0move(___nl__im_ptr__74,___get_global_string_const(37));
#line 504
___nl__im_ptr__74 = NULL;
#line 504
___nl__hash_ptr__75 = &(___nl__rec__48.additional_imports0field);
#line 505
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__75));
(*___nl__hash_ptr__75).size = 0;
(*___nl__hash_ptr__75).capacity = 0;
(*___nl__hash_ptr__75).keys = NULL;
(*___nl__hash_ptr__75).values = NULL;
#line 505
___nl__hash_ptr__75 = NULL;
#line 505
___nl__im_ptr__76 = &(___nl__rec__48.defined_types0field);
#line 506
c_rt_lib0move(___nl__im_ptr__76, c_rt_lib0hash_mk(0));
#line 506
___nl__im_ptr__76 = NULL;
#line 508
c_rt_lib0move(&___nl__im__77,___get_global_string_const(136));
#line 508
c_rt_lib0delete(c_fe_lib0print(___nl__im__77));
#line 508
c_rt_lib0clear(&___nl__im__77);
#line 509
c_rt_lib0move(&___nl__im__79, compiler_priv0get_mathematical_func(___nl__im__0));
#line 509
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(96)));
#line 509
c_rt_lib0move(&___nl__im__78, post_processing0init(___nl__im__79, ___nl__im__80));
#line 509
c_rt_lib0clear(&___nl__im__79);
#line 509
c_rt_lib0clear(&___nl__im__80);
#line 510
c_rt_lib0move(&___nl__im__81,___get_global_string_const(147));
#line 510
c_rt_lib0delete(profile0end(___nl__im__81));
#line 510
c_rt_lib0clear(&___nl__im__81);
#line 512
c_rt_lib0move(&___nl__im__82,___get_global_string_const(148));
#line 512
c_rt_lib0delete(profile0begin(___nl__im__82));
#line 512
c_rt_lib0clear(&___nl__im__82);
#line 513
c_rt_lib0move(&___nl__im__83, compiler_priv0translate(___nl__im__1, ___nl__im__1, &___nl__im__78));
#line 514
c_rt_lib0move(&___nl__im__84,___get_global_string_const(148));
#line 514
c_rt_lib0delete(profile0end(___nl__im__84));
#line 514
c_rt_lib0clear(&___nl__im__84);
#line 516
c_rt_lib0move(&___nl__im__86,___get_global_string_const(145));
#line 516
___nl__bool__85 = hash0has_key(___nl__im__83, ___nl__im__86);
#line 516
c_rt_lib0clear(&___nl__im__86);
#line 516
___nl__bool__85 = !___nl__bool__85;
#line 516
if(___nl__bool__85){ goto label_272;}
#line 517
c_rt_lib0move(&___nl__im__87,___get_global_string_const(149));
#line 517
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(145)));
#line 517
c_rt_lib0move(&___nl__im__88, dfile_dbg0ssave(___nl__im__89));
#line 517
c_rt_lib0clear(&___nl__im__89);
#line 517
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__87, ___nl__im__88));
#line 517
c_rt_lib0clear(&___nl__im__87);
#line 517
c_rt_lib0clear(&___nl__im__88);
#line 518
goto label_272;
#line 518
label_272:
;
#line 518
//clear ___nl__bool__85;
#line 520
c_rt_lib0move(&___nl__im__90,___get_global_string_const(150));
#line 520
c_rt_lib0delete(profile0begin(___nl__im__90));
#line 520
c_rt_lib0clear(&___nl__im__90);
#line 521
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(94)));
#line 521
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 521
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__83, ___nl__im__10, ___nl__im__91, &___nl__rec__48, ___nl__im__92));
#line 521
c_rt_lib0clear(&___nl__im__91);
#line 521
c_rt_lib0clear(&___nl__im__92);
#line 522
c_rt_lib0move(&___nl__im__93,___get_global_string_const(150));
#line 522
c_rt_lib0delete(profile0end(___nl__im__93));
#line 522
c_rt_lib0clear(&___nl__im__93);
#line 523
goto label_367;
#line 523
label_286:
;
#line 524
c_rt_lib0move(&___nl__im__97, c_rt_lib0init_iter(___nl__im__1));
#line 524
label_288:
;
#line 524
___nl__bool__95 = c_rt_lib0is_end_hash(___nl__im__97);
#line 524
if(___nl__bool__95){ goto label_365;}
#line 524
c_rt_lib0move(&___nl__im__94, c_rt_lib0get_key_iter(___nl__im__97));
#line 524
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__94));
#line 525
c_rt_lib0move(&___nl__im__99,___get_global_string_const(137));
#line 525
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__94));
#line 525
c_rt_lib0clear(&___nl__im__99);
#line 525
c_rt_lib0delete(c_fe_lib0print(___nl__im__98));
#line 525
c_rt_lib0clear(&___nl__im__98);
#line 526
c_rt_lib0move(&___nl__im__102, hash0get_value(___nl__im__10, ___nl__im__94));
#line 526
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(75)));
#line 526
c_rt_lib0clear(&___nl__im__102);
#line 526
c_rt_lib0move(&___nl__im__100, compiler_priv0save_module_to_file(___nl__im__96, ___nl__im__101));
#line 526
c_rt_lib0clear(&___nl__im__101);
#line 526
___nl__bool__103 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(78));
#line 526
if(___nl__bool__103){ goto label_310;}
#line 529
___nl__bool__103 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(79));
#line 529
if(___nl__bool__103){ goto label_350;}
#line 529
c_rt_lib0move(&___nl__im__104,___get_global_string_const(16));
#line 529
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__104, ___nl__im__100));
#line 529
nl_die_arg(___nl__im__104);
#line 526
label_310:
;
#line 526
c_rt_lib0move(&___nl__im__106, c_rt_lib0priv_as(___nl__im__100, ___get_global_string_const(78)));
#line 526
c_rt_lib0copy(&___nl__im__105, ___nl__im__106);
#line 527
c_rt_lib0move(&___nl__im__108,___get_global_string_const(138));
#line 527
c_rt_lib0move(&___nl__im__107, c_rt_lib0concat_new(___nl__im__108, ___nl__im__105));
#line 527
c_rt_lib0clear(&___nl__im__108);
#line 527
c_rt_lib0delete(c_fe_lib0print(___nl__im__107));
#line 527
c_rt_lib0clear(&___nl__im__107);
#line 528
___nl__int__109 = 1;
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
//clear ___nl__bool__44;
#line 528
generator_c0state_t0type0clean(___nl__rec__48);;
#line 528
c_rt_lib0clear(&___nl__im__78);
#line 528
c_rt_lib0clear(&___nl__im__83);
#line 528
c_rt_lib0clear(&___nl__im__94);
#line 528
//clear ___nl__bool__95;
#line 528
c_rt_lib0clear(&___nl__im__96);
#line 528
c_rt_lib0clear(&___nl__im__97);
#line 528
c_rt_lib0clear(&___nl__im__100);
#line 528
//clear ___nl__bool__103;
#line 528
c_rt_lib0clear(&___nl__im__104);
#line 528
c_rt_lib0clear(&___nl__im__105);
#line 528
c_rt_lib0clear(&___nl__im__106);
#line 528
return ___nl__int__109;
#line 529
goto label_354;
#line 529
label_350:
;
#line 529
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__100, ___get_global_string_const(79)));
#line 529
c_rt_lib0copy(&___nl__im__110, ___nl__im__111);
#line 530
goto label_354;
#line 530
label_354:
;
#line 530
c_rt_lib0clear(&___nl__im__100);
#line 530
//clear ___nl__bool__103;
#line 530
c_rt_lib0clear(&___nl__im__104);
#line 530
c_rt_lib0clear(&___nl__im__105);
#line 530
c_rt_lib0clear(&___nl__im__106);
#line 530
//clear ___nl__int__109;
#line 530
c_rt_lib0clear(&___nl__im__110);
#line 530
c_rt_lib0clear(&___nl__im__111);
#line 531
c_rt_lib0move(&___nl__im__97, c_rt_lib0next_iter(___nl__im__97));
#line 531
goto label_288;
#line 531
label_365:
;
#line 532
goto label_367;
#line 532
label_367:
;
#line 532
//clear ___nl__bool__44;
#line 532
generator_c0state_t0type0clean(___nl__rec__48);;
#line 532
c_rt_lib0clear(&___nl__im__78);
#line 532
c_rt_lib0clear(&___nl__im__83);
#line 532
c_rt_lib0clear(&___nl__im__94);
#line 532
//clear ___nl__bool__95;
#line 532
c_rt_lib0clear(&___nl__im__96);
#line 532
c_rt_lib0clear(&___nl__im__97);
#line 532
c_rt_lib0clear(&___nl__im__100);
#line 532
//clear ___nl__bool__103;
#line 532
c_rt_lib0clear(&___nl__im__104);
#line 532
c_rt_lib0clear(&___nl__im__105);
#line 532
c_rt_lib0clear(&___nl__im__106);
#line 532
//clear ___nl__int__109;
#line 532
c_rt_lib0clear(&___nl__im__110);
#line 532
c_rt_lib0clear(&___nl__im__111);
#line 533
___nl__int__112 = 0;
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
return ___nl__int__112;
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 537
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 541
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(151)));
#line 541
___nl__int__4 = string0length(___nl__im__5);
#line 541
c_rt_lib0clear(&___nl__im__5);
#line 541
___nl__int__6 = 0;
#line 541
___nl__int__7 = ___nl__int__4 == ___nl__int__6;
#line 541
___nl__bool__3 = ___nl__int__7;
#line 541
//clear ___nl__int__4;
#line 541
//clear ___nl__int__6;
#line 541
//clear ___nl__int__7;
#line 541
___nl__bool__3 = !___nl__bool__3;
#line 541
___nl__bool__3 = !___nl__bool__3;
#line 541
if(___nl__bool__3){ goto label_34;}
#line 538
c_rt_lib0move(&___nl__im__9,___get_global_string_const(152));
#line 538
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(151)));
#line 538
___nl__bool__11 = hash0has_key(___nl__im__1, ___nl__im__12);
#line 538
c_rt_lib0clear(&___nl__im__12);
#line 538
if(___nl__bool__11){ goto label_20;}
#line 540
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(151)));
#line 540
goto label_26;
#line 540
label_20:
;
#line 539
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(151)));
#line 539
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__1, ___nl__im__14));
#line 539
c_rt_lib0clear(&___nl__im__14);
#line 539
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(74)));
#line 539
c_rt_lib0clear(&___nl__im__13);
#line 539
label_26:
;
#line 539
//clear ___nl__bool__11;
#line 539
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 539
c_rt_lib0clear(&___nl__im__9);
#line 539
c_rt_lib0clear(&___nl__im__10);
#line 539
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 539
c_rt_lib0clear(&___nl__im__8);
#line 539
goto label_34;
#line 539
label_34:
;
#line 539
//clear ___nl__bool__3;
#line 543
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(153)));
#line 543
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 543
c_rt_lib0clear(&___nl__im__17);
#line 543
___nl__int__18 = 1;
#line 543
___nl__int__18 = -___nl__int__18;
#line 543
___nl__int__19 = ___nl__int__16 == ___nl__int__18;
#line 543
___nl__bool__15 = ___nl__int__19;
#line 543
//clear ___nl__int__16;
#line 543
//clear ___nl__int__18;
#line 543
//clear ___nl__int__19;
#line 543
___nl__bool__15 = !___nl__bool__15;
#line 543
___nl__bool__15 = !___nl__bool__15;
#line 543
if(___nl__bool__15){ goto label_63;}
#line 542
c_rt_lib0move(&___nl__im__21,___get_global_string_const(154));
#line 542
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(153)));
#line 542
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 542
c_rt_lib0clear(&___nl__im__24);
#line 542
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__23));
#line 542
c_rt_lib0move(&___nl__im__22, ptd0int_to_string(___nl__im__25));
#line 542
//clear ___nl__int__23;
#line 542
c_rt_lib0clear(&___nl__im__25);
#line 542
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 542
c_rt_lib0clear(&___nl__im__22);
#line 542
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__20));
#line 542
c_rt_lib0clear(&___nl__im__20);
#line 542
goto label_63;
#line 542
label_63:
;
#line 542
//clear ___nl__bool__15;
#line 544
c_rt_lib0move(&___nl__im__28, string0lf());
#line 544
c_rt_lib0move(&___nl__im__29,___get_global_string_const(155));
#line 544
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 544
c_rt_lib0clear(&___nl__im__28);
#line 544
c_rt_lib0clear(&___nl__im__29);
#line 544
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(156)));
#line 544
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 544
c_rt_lib0clear(&___nl__im__27);
#line 544
c_rt_lib0clear(&___nl__im__30);
#line 544
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 544
c_rt_lib0clear(&___nl__im__26);
#line 545
c_rt_lib0clear(&___nl__im__0);
#line 545
c_rt_lib0clear(&___nl__im__1);
#line 545
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
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
bool  ___nl__bool__58 = false;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
bool  ___nl__bool__75 = false;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
INT  ___nl__int__84 = 0;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
#line 549
___nl__int__3 = 0;
#line 550
___nl__int__4 = 0;
#line 551
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 551
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 551
label_4:
;
#line 551
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 551
if(___nl__bool__7){ goto label_167;}
#line 551
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 551
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 552
c_rt_lib0move(&___nl__im__10,___get_global_string_const(157));
#line 553
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(100)));
#line 553
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(92));
#line 553
c_rt_lib0clear(&___nl__im__12);
#line 553
___nl__bool__11 = !___nl__bool__11;
#line 553
if(___nl__bool__11){ goto label_17;}
#line 553
c_rt_lib0move(&___nl__im__10,___get_global_string_const(158));
#line 553
goto label_17;
#line 553
label_17:
;
#line 553
//clear ___nl__bool__11;
#line 554
___nl__int__14 = 0;
#line 554
___nl__int__15 = 1;
#line 554
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 554
label_22:
;
#line 554
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 554
___nl__bool__17 = ___nl__int__18;
#line 554
if(___nl__bool__17){ goto label_36;}
#line 554
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 554
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 555
c_rt_lib0move(&___nl__im__21, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 555
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__10, ___nl__im__21));
#line 555
c_rt_lib0clear(&___nl__im__21);
#line 555
c_rt_lib0delete(c_fe_lib0print(___nl__im__20));
#line 555
c_rt_lib0clear(&___nl__im__20);
#line 555
c_rt_lib0clear(&___nl__im__13);
#line 556
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 556
goto label_22;
#line 556
label_36:
;
#line 557
___nl__int__22 = c_rt_lib0array_len(___nl__im__8);
#line 557
___nl__int__3 = ___nl__int__3 + ___nl__int__22;
#line 557
//clear ___nl__int__22;
#line 558
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 558
___nl__bool__23 = hash0has_key(___nl__im__24, ___nl__im__6);
#line 558
c_rt_lib0clear(&___nl__im__24);
#line 558
___nl__bool__23 = !___nl__bool__23;
#line 558
if(___nl__bool__23){ goto label_70;}
#line 559
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 559
c_rt_lib0move(&___nl__im__25, hash0get_value(___nl__im__26, ___nl__im__6));
#line 559
c_rt_lib0clear(&___nl__im__26);
#line 560
___nl__int__28 = 0;
#line 560
___nl__int__29 = 1;
#line 560
___nl__int__30 = c_rt_lib0array_len(___nl__im__25);
#line 560
label_51:
;
#line 560
___nl__int__32 = ___nl__int__28 >= ___nl__int__30;
#line 560
___nl__bool__31 = ___nl__int__32;
#line 560
if(___nl__bool__31){ goto label_65;}
#line 560
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__25, ___nl__int__28));
#line 560
c_rt_lib0copy(&___nl__im__27, ___nl__im__33);
#line 561
c_rt_lib0move(&___nl__im__35, compiler_priv0construct_error_message(___nl__im__27, ___nl__im__2));
#line 561
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__10, ___nl__im__35));
#line 561
c_rt_lib0clear(&___nl__im__35);
#line 561
c_rt_lib0delete(c_fe_lib0print(___nl__im__34));
#line 561
c_rt_lib0clear(&___nl__im__34);
#line 561
c_rt_lib0clear(&___nl__im__27);
#line 562
___nl__int__28 = ___nl__int__28 + ___nl__int__29;
#line 562
goto label_51;
#line 562
label_65:
;
#line 563
___nl__int__36 = c_rt_lib0array_len(___nl__im__25);
#line 563
___nl__int__3 = ___nl__int__3 + ___nl__int__36;
#line 563
//clear ___nl__int__36;
#line 564
goto label_70;
#line 564
label_70:
;
#line 564
//clear ___nl__bool__23;
#line 564
c_rt_lib0clear(&___nl__im__25);
#line 564
c_rt_lib0clear(&___nl__im__27);
#line 564
//clear ___nl__int__28;
#line 564
//clear ___nl__int__29;
#line 564
//clear ___nl__int__30;
#line 564
//clear ___nl__bool__31;
#line 564
//clear ___nl__int__32;
#line 564
c_rt_lib0clear(&___nl__im__33);
#line 565
c_rt_lib0move(&___nl__im__10,___get_global_string_const(158));
#line 566
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 566
c_rt_lib0move(&___nl__im__37, hash0get_value(___nl__im__38, ___nl__im__6));
#line 566
c_rt_lib0clear(&___nl__im__38);
#line 567
___nl__int__40 = 0;
#line 567
___nl__int__41 = 1;
#line 567
___nl__int__42 = c_rt_lib0array_len(___nl__im__37);
#line 567
label_87:
;
#line 567
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 567
___nl__bool__43 = ___nl__int__44;
#line 567
if(___nl__bool__43){ goto label_103;}
#line 567
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__37, ___nl__int__40));
#line 567
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 568
c_rt_lib0move(&___nl__im__47,___get_global_string_const(158));
#line 568
c_rt_lib0move(&___nl__im__48, compiler_priv0construct_error_message(___nl__im__39, ___nl__im__2));
#line 568
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 568
c_rt_lib0clear(&___nl__im__47);
#line 568
c_rt_lib0clear(&___nl__im__48);
#line 568
c_rt_lib0delete(c_fe_lib0print(___nl__im__46));
#line 568
c_rt_lib0clear(&___nl__im__46);
#line 568
c_rt_lib0clear(&___nl__im__39);
#line 569
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 569
goto label_87;
#line 569
label_103:
;
#line 570
___nl__int__49 = c_rt_lib0array_len(___nl__im__37);
#line 570
___nl__int__4 = ___nl__int__4 + ___nl__int__49;
#line 570
//clear ___nl__int__49;
#line 571
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 571
___nl__bool__50 = hash0has_key(___nl__im__51, ___nl__im__6);
#line 571
c_rt_lib0clear(&___nl__im__51);
#line 571
___nl__bool__50 = !___nl__bool__50;
#line 571
if(___nl__bool__50){ goto label_139;}
#line 572
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 572
c_rt_lib0move(&___nl__im__52, hash0get_value(___nl__im__53, ___nl__im__6));
#line 572
c_rt_lib0clear(&___nl__im__53);
#line 573
___nl__int__55 = 0;
#line 573
___nl__int__56 = 1;
#line 573
___nl__int__57 = c_rt_lib0array_len(___nl__im__52);
#line 573
label_118:
;
#line 573
___nl__int__59 = ___nl__int__55 >= ___nl__int__57;
#line 573
___nl__bool__58 = ___nl__int__59;
#line 573
if(___nl__bool__58){ goto label_134;}
#line 573
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__52, ___nl__int__55));
#line 573
c_rt_lib0copy(&___nl__im__54, ___nl__im__60);
#line 574
c_rt_lib0move(&___nl__im__62,___get_global_string_const(158));
#line 574
c_rt_lib0move(&___nl__im__63, compiler_priv0construct_error_message(___nl__im__54, ___nl__im__2));
#line 574
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__63));
#line 574
c_rt_lib0clear(&___nl__im__62);
#line 574
c_rt_lib0clear(&___nl__im__63);
#line 574
c_rt_lib0delete(c_fe_lib0print(___nl__im__61));
#line 574
c_rt_lib0clear(&___nl__im__61);
#line 574
c_rt_lib0clear(&___nl__im__54);
#line 575
___nl__int__55 = ___nl__int__55 + ___nl__int__56;
#line 575
goto label_118;
#line 575
label_134:
;
#line 576
___nl__int__64 = c_rt_lib0array_len(___nl__im__52);
#line 576
___nl__int__4 = ___nl__int__4 + ___nl__int__64;
#line 576
//clear ___nl__int__64;
#line 577
goto label_139;
#line 577
label_139:
;
#line 577
//clear ___nl__bool__50;
#line 577
c_rt_lib0clear(&___nl__im__52);
#line 577
c_rt_lib0clear(&___nl__im__54);
#line 577
//clear ___nl__int__55;
#line 577
//clear ___nl__int__56;
#line 577
//clear ___nl__int__57;
#line 577
//clear ___nl__bool__58;
#line 577
//clear ___nl__int__59;
#line 577
c_rt_lib0clear(&___nl__im__60);
#line 577
c_rt_lib0clear(&___nl__im__10);
#line 577
c_rt_lib0clear(&___nl__im__13);
#line 577
//clear ___nl__int__14;
#line 577
//clear ___nl__int__15;
#line 577
//clear ___nl__int__16;
#line 577
//clear ___nl__bool__17;
#line 577
//clear ___nl__int__18;
#line 577
c_rt_lib0clear(&___nl__im__19);
#line 577
c_rt_lib0clear(&___nl__im__37);
#line 577
c_rt_lib0clear(&___nl__im__39);
#line 577
//clear ___nl__int__40;
#line 577
//clear ___nl__int__41;
#line 577
//clear ___nl__int__42;
#line 577
//clear ___nl__bool__43;
#line 577
//clear ___nl__int__44;
#line 577
c_rt_lib0clear(&___nl__im__45);
#line 578
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 578
goto label_4;
#line 578
label_167:
;
#line 579
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(63)));
#line 579
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(159));
#line 579
if(___nl__bool__66){ goto label_176;}
#line 586
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(79));
#line 586
if(___nl__bool__66){ goto label_211;}
#line 586
c_rt_lib0move(&___nl__im__67,___get_global_string_const(16));
#line 586
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(2, ___nl__im__67, ___nl__im__65));
#line 586
nl_die_arg(___nl__im__67);
#line 579
label_176:
;
#line 579
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(159)));
#line 579
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 580
c_rt_lib0move(&___nl__im__70,___get_global_string_const(37));
#line 581
___nl__int__72 = 0;
#line 581
___nl__int__73 = 1;
#line 581
___nl__int__74 = c_rt_lib0array_len(___nl__im__68);
#line 581
label_183:
;
#line 581
___nl__int__76 = ___nl__int__72 >= ___nl__int__74;
#line 581
___nl__bool__75 = ___nl__int__76;
#line 581
if(___nl__bool__75){ goto label_197;}
#line 581
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_get(___nl__im__68, ___nl__int__72));
#line 581
c_rt_lib0copy(&___nl__im__71, ___nl__im__77);
#line 582
c_rt_lib0move(&___nl__im__79,___get_global_string_const(160));
#line 582
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__71, ___nl__im__79));
#line 582
c_rt_lib0clear(&___nl__im__79);
#line 582
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_add(___nl__im__70, ___nl__im__78));
#line 582
c_rt_lib0clear(&___nl__im__78);
#line 582
c_rt_lib0clear(&___nl__im__71);
#line 583
___nl__int__72 = ___nl__int__72 + ___nl__int__73;
#line 583
goto label_183;
#line 583
label_197:
;
#line 584
c_rt_lib0move(&___nl__im__82,___get_global_string_const(161));
#line 584
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__70));
#line 584
c_rt_lib0clear(&___nl__im__82);
#line 584
c_rt_lib0move(&___nl__im__83,___get_global_string_const(162));
#line 584
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__83));
#line 584
c_rt_lib0clear(&___nl__im__81);
#line 584
c_rt_lib0clear(&___nl__im__83);
#line 584
c_rt_lib0delete(c_fe_lib0print(___nl__im__80));
#line 584
c_rt_lib0clear(&___nl__im__80);
#line 585
___nl__int__84 = 1;
#line 585
___nl__int__4 = ___nl__int__4 + ___nl__int__84;
#line 585
//clear ___nl__int__84;
#line 586
goto label_213;
#line 586
label_211:
;
#line 587
goto label_213;
#line 587
label_213:
;
#line 588
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(100)));
#line 588
___nl__bool__85 = c_rt_lib0priv_is(___nl__im__86, ___get_global_string_const(92));
#line 588
c_rt_lib0clear(&___nl__im__86);
#line 588
___nl__bool__85 = !___nl__bool__85;
#line 588
if(___nl__bool__85){ goto label_222;}
#line 589
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 590
___nl__int__3 = 0;
#line 591
goto label_222;
#line 591
label_222:
;
#line 591
//clear ___nl__bool__85;
#line 592
c_rt_lib0move(&___nl__im__90,___get_global_string_const(163));
#line 592
c_rt_lib0move(&___nl__im__92, c_rt_lib0int_new(___nl__int__4));
#line 592
c_rt_lib0move(&___nl__im__91, ptd0int_to_string(___nl__im__92));
#line 592
c_rt_lib0clear(&___nl__im__92);
#line 592
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__91));
#line 592
c_rt_lib0clear(&___nl__im__90);
#line 592
c_rt_lib0clear(&___nl__im__91);
#line 593
c_rt_lib0move(&___nl__im__93,___get_global_string_const(164));
#line 593
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__93));
#line 593
c_rt_lib0clear(&___nl__im__89);
#line 593
c_rt_lib0clear(&___nl__im__93);
#line 593
c_rt_lib0move(&___nl__im__95, c_rt_lib0int_new(___nl__int__3));
#line 593
c_rt_lib0move(&___nl__im__94, ptd0int_to_string(___nl__im__95));
#line 593
c_rt_lib0clear(&___nl__im__95);
#line 593
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__94));
#line 593
c_rt_lib0clear(&___nl__im__88);
#line 593
c_rt_lib0clear(&___nl__im__94);
#line 593
c_rt_lib0delete(c_fe_lib0print(___nl__im__87));
#line 593
c_rt_lib0clear(&___nl__im__87);
#line 594
c_rt_lib0clear(&___nl__im__0);
#line 594
c_rt_lib0clear(&___nl__im__1);
#line 594
c_rt_lib0clear(&___nl__im__2);
#line 594
//clear ___nl__int__3;
#line 594
c_rt_lib0clear(&___nl__im__5);
#line 594
c_rt_lib0clear(&___nl__im__6);
#line 594
//clear ___nl__bool__7;
#line 594
c_rt_lib0clear(&___nl__im__8);
#line 594
c_rt_lib0clear(&___nl__im__9);
#line 594
c_rt_lib0clear(&___nl__im__10);
#line 594
c_rt_lib0clear(&___nl__im__13);
#line 594
//clear ___nl__int__14;
#line 594
//clear ___nl__int__15;
#line 594
//clear ___nl__int__16;
#line 594
//clear ___nl__bool__17;
#line 594
//clear ___nl__int__18;
#line 594
c_rt_lib0clear(&___nl__im__19);
#line 594
c_rt_lib0clear(&___nl__im__37);
#line 594
c_rt_lib0clear(&___nl__im__39);
#line 594
//clear ___nl__int__40;
#line 594
//clear ___nl__int__41;
#line 594
//clear ___nl__int__42;
#line 594
//clear ___nl__bool__43;
#line 594
//clear ___nl__int__44;
#line 594
c_rt_lib0clear(&___nl__im__45);
#line 594
c_rt_lib0clear(&___nl__im__65);
#line 594
//clear ___nl__bool__66;
#line 594
c_rt_lib0clear(&___nl__im__67);
#line 594
c_rt_lib0clear(&___nl__im__68);
#line 594
c_rt_lib0clear(&___nl__im__69);
#line 594
c_rt_lib0clear(&___nl__im__70);
#line 594
c_rt_lib0clear(&___nl__im__71);
#line 594
//clear ___nl__int__72;
#line 594
//clear ___nl__int__73;
#line 594
//clear ___nl__int__74;
#line 594
//clear ___nl__bool__75;
#line 594
//clear ___nl__int__76;
#line 594
c_rt_lib0clear(&___nl__im__77);
#line 594
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
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
#line 599
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 600
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 601
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__1));
#line 601
label_3:
;
#line 601
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 601
if(___nl__bool__6){ goto label_63;}
#line 601
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 601
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__5));
#line 602
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(165)));
#line 602
___nl__int__11 = 0;
#line 602
___nl__int__12 = 1;
#line 602
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 602
label_12:
;
#line 602
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 602
___nl__bool__14 = ___nl__int__15;
#line 602
if(___nl__bool__14){ goto label_47;}
#line 602
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 602
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 603
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(166)));
#line 603
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(77));
#line 603
if(___nl__bool__18){ goto label_26;}
#line 604
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(76));
#line 604
if(___nl__bool__18){ goto label_28;}
#line 604
c_rt_lib0move(&___nl__im__19,___get_global_string_const(16));
#line 604
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__17));
#line 604
nl_die_arg(___nl__im__19);
#line 603
label_26:
;
#line 604
goto label_43;
#line 604
label_28:
;
#line 604
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(76)));
#line 604
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 605
c_rt_lib0move(&___nl__im__25,___get_global_string_const(35));
#line 605
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__5, ___nl__im__25));
#line 605
c_rt_lib0clear(&___nl__im__25);
#line 605
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(167)));
#line 605
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__26));
#line 605
c_rt_lib0clear(&___nl__im__24);
#line 605
c_rt_lib0clear(&___nl__im__26);
#line 605
c_rt_lib0copy(&___nl__im__22, ___nl__im__20);
#line 605
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__4, ___nl__im__23, ___nl__im__22));
#line 605
c_rt_lib0clear(&___nl__im__22);
#line 605
c_rt_lib0clear(&___nl__im__23);
#line 606
goto label_43;
#line 606
label_43:
;
#line 606
c_rt_lib0clear(&___nl__im__10);
#line 607
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 607
goto label_12;
#line 607
label_47:
;
#line 607
c_rt_lib0clear(&___nl__im__9);
#line 607
c_rt_lib0clear(&___nl__im__10);
#line 607
//clear ___nl__int__11;
#line 607
//clear ___nl__int__12;
#line 607
//clear ___nl__int__13;
#line 607
//clear ___nl__bool__14;
#line 607
//clear ___nl__int__15;
#line 607
c_rt_lib0clear(&___nl__im__16);
#line 607
c_rt_lib0clear(&___nl__im__17);
#line 607
//clear ___nl__bool__18;
#line 607
c_rt_lib0clear(&___nl__im__19);
#line 607
c_rt_lib0clear(&___nl__im__20);
#line 607
c_rt_lib0clear(&___nl__im__21);
#line 608
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 608
goto label_3;
#line 608
label_63:
;
#line 609
c_rt_lib0move(&___nl__im__30, c_rt_lib0init_iter(___nl__im__0));
#line 609
label_65:
;
#line 609
___nl__bool__28 = c_rt_lib0is_end_hash(___nl__im__30);
#line 609
if(___nl__bool__28){ goto label_75;}
#line 609
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_key_iter(___nl__im__30));
#line 609
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__27));
#line 610
c_rt_lib0move(&___nl__im__31, translator0translate(___nl__im__29, ___nl__im__4));
#line 611
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__27, ___nl__im__31));
#line 611
c_rt_lib0clear(&___nl__im__31);
#line 612
c_rt_lib0move(&___nl__im__30, c_rt_lib0next_iter(___nl__im__30));
#line 612
goto label_65;
#line 612
label_75:
;
#line 613
c_rt_lib0delete(post_processing0find(___ref___im__2, &___nl__im__3));
#line 614
c_rt_lib0clear(&___nl__im__0);
#line 614
c_rt_lib0clear(&___nl__im__1);
#line 614
c_rt_lib0clear(&___nl__im__4);
#line 614
c_rt_lib0clear(&___nl__im__5);
#line 614
//clear ___nl__bool__6;
#line 614
c_rt_lib0clear(&___nl__im__7);
#line 614
c_rt_lib0clear(&___nl__im__8);
#line 614
c_rt_lib0clear(&___nl__im__9);
#line 614
c_rt_lib0clear(&___nl__im__10);
#line 614
//clear ___nl__int__11;
#line 614
//clear ___nl__int__12;
#line 614
//clear ___nl__int__13;
#line 614
//clear ___nl__bool__14;
#line 614
//clear ___nl__int__15;
#line 614
c_rt_lib0clear(&___nl__im__16);
#line 614
c_rt_lib0clear(&___nl__im__17);
#line 614
//clear ___nl__bool__18;
#line 614
c_rt_lib0clear(&___nl__im__19);
#line 614
c_rt_lib0clear(&___nl__im__20);
#line 614
c_rt_lib0clear(&___nl__im__21);
#line 614
c_rt_lib0clear(&___nl__im__27);
#line 614
//clear ___nl__bool__28;
#line 614
c_rt_lib0clear(&___nl__im__29);
#line 614
c_rt_lib0clear(&___nl__im__30);
#line 614
c_rt_lib0clear(&___nl__im__31);
#line 614
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
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__string__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
bool  ___nl__bool__50 = false;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
bool  ___nl__bool__54 = false;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__string__61 = NULL;
bool  ___nl__bool__62 = false;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
bool  ___nl__bool__73 = false;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
bool  ___nl__bool__82 = false;
INT  ___nl__int__83 = 0;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
INT  ___nl__int__99 = 0;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
#line 619
c_rt_lib0move(&___nl__im__4,___get_global_string_const(168));
#line 619
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 619
c_rt_lib0clear(&___nl__im__4);
#line 620
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 621
___nl__bool__6 = ___nl__bool__3;
#line 621
___nl__bool__6 = !___nl__bool__6;
#line 621
if(___nl__bool__6){ goto label_52;}
#line 622
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 623
c_rt_lib0move(&___nl__im__9,___get_global_string_const(169));
#line 623
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 623
c_rt_lib0clear(&___nl__im__9);
#line 623
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(79));
#line 623
if(___nl__bool__10){ goto label_18;}
#line 626
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(78));
#line 626
if(___nl__bool__10){ goto label_28;}
#line 626
c_rt_lib0move(&___nl__im__11,___get_global_string_const(16));
#line 626
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 626
nl_die_arg(___nl__im__11);
#line 623
label_18:
;
#line 623
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(79)));
#line 623
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 624
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 625
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 625
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 625
c_rt_lib0clear(&___nl__im__15);
#line 625
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 625
c_rt_lib0clear(&___nl__im__14);
#line 626
goto label_32;
#line 626
label_28:
;
#line 626
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(78)));
#line 626
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 627
goto label_32;
#line 627
label_32:
;
#line 628
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 629
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 630
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 630
label_36:
;
#line 630
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 630
if(___nl__bool__21){ goto label_49;}
#line 630
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 630
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 631
___nl__bool__24 = true;
#line 631
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 631
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 631
//clear ___nl__bool__24;
#line 631
c_rt_lib0clear(&___nl__im__25);
#line 632
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 633
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 633
goto label_36;
#line 633
label_49:
;
#line 635
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 636
goto label_52;
#line 636
label_52:
;
#line 636
//clear ___nl__bool__6;
#line 636
c_rt_lib0clear(&___nl__im__7);
#line 636
c_rt_lib0clear(&___nl__im__8);
#line 636
//clear ___nl__bool__10;
#line 636
c_rt_lib0clear(&___nl__im__11);
#line 636
c_rt_lib0clear(&___nl__im__12);
#line 636
c_rt_lib0clear(&___nl__im__13);
#line 636
c_rt_lib0clear(&___nl__im__16);
#line 636
c_rt_lib0clear(&___nl__im__17);
#line 636
c_rt_lib0clear(&___nl__im__18);
#line 636
c_rt_lib0clear(&___nl__im__19);
#line 636
c_rt_lib0clear(&___nl__im__20);
#line 636
//clear ___nl__bool__21;
#line 636
c_rt_lib0clear(&___nl__im__22);
#line 636
c_rt_lib0clear(&___nl__im__23);
#line 637
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(51)));
#line 637
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 637
c_rt_lib0clear(&___nl__im__27);
#line 638
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(51)));
#line 638
___nl__int__30 = 0;
#line 638
___nl__int__31 = 1;
#line 638
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 638
label_75:
;
#line 638
___nl__int__34 = ___nl__int__30 >= ___nl__int__32;
#line 638
___nl__bool__33 = ___nl__int__34;
#line 638
if(___nl__bool__33){ goto label_110;}
#line 638
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 638
c_rt_lib0copy(&___nl__im__29, ___nl__im__35);
#line 639
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 640
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 640
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(151)));
#line 640
___nl__bool__37 = hash0has_key(___nl__im__38, ___nl__im__39);
#line 640
c_rt_lib0clear(&___nl__im__38);
#line 640
c_rt_lib0clear(&___nl__im__39);
#line 640
___nl__bool__37 = !___nl__bool__37;
#line 640
if(___nl__bool__37){ goto label_95;}
#line 641
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 641
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(151)));
#line 641
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__40, ___nl__im__41));
#line 641
c_rt_lib0clear(&___nl__im__40);
#line 641
c_rt_lib0clear(&___nl__im__41);
#line 642
goto label_95;
#line 642
label_95:
;
#line 642
//clear ___nl__bool__37;
#line 643
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__29));
#line 644
c_rt_lib0move(&___nl__im__42,___get_global_string_const(61));
#line 644
c_rt_lib0move(&___nl__im__42, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__42));
#line 644
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(151)));
#line 644
c_rt_lib0delete(hash0set_value(&___nl__im__42, ___nl__im__43, ___nl__im__36));
#line 644
c_rt_lib0move(&___nl__string__44,___get_global_string_const(61));
#line 644
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__44, ___nl__im__42));
#line 644
c_rt_lib0clear(&___nl__im__42);
#line 644
c_rt_lib0clear(&___nl__im__43);
#line 644
c_rt_lib0clear(&___nl__string__44);
#line 644
c_rt_lib0clear(&___nl__im__29);
#line 645
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 645
goto label_75;
#line 645
label_110:
;
#line 646
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(124)));
#line 646
___nl__int__47 = 0;
#line 646
___nl__int__48 = 1;
#line 646
___nl__int__49 = c_rt_lib0array_len(___nl__im__45);
#line 646
label_115:
;
#line 646
___nl__int__51 = ___nl__int__47 >= ___nl__int__49;
#line 646
___nl__bool__50 = ___nl__int__51;
#line 646
if(___nl__bool__50){ goto label_150;}
#line 646
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__45, ___nl__int__47));
#line 646
c_rt_lib0copy(&___nl__im__46, ___nl__im__52);
#line 647
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 648
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(62)));
#line 648
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(151)));
#line 648
___nl__bool__54 = hash0has_key(___nl__im__55, ___nl__im__56);
#line 648
c_rt_lib0clear(&___nl__im__55);
#line 648
c_rt_lib0clear(&___nl__im__56);
#line 648
___nl__bool__54 = !___nl__bool__54;
#line 648
if(___nl__bool__54){ goto label_135;}
#line 649
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(62)));
#line 649
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(151)));
#line 649
c_rt_lib0move(&___nl__im__53, hash0get_value(___nl__im__57, ___nl__im__58));
#line 649
c_rt_lib0clear(&___nl__im__57);
#line 649
c_rt_lib0clear(&___nl__im__58);
#line 650
goto label_135;
#line 650
label_135:
;
#line 650
//clear ___nl__bool__54;
#line 651
c_rt_lib0delete(array0push(&___nl__im__53, ___nl__im__46));
#line 652
c_rt_lib0move(&___nl__im__59,___get_global_string_const(62));
#line 652
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__59));
#line 652
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(151)));
#line 652
c_rt_lib0delete(hash0set_value(&___nl__im__59, ___nl__im__60, ___nl__im__53));
#line 652
c_rt_lib0move(&___nl__string__61,___get_global_string_const(62));
#line 652
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__61, ___nl__im__59));
#line 652
c_rt_lib0clear(&___nl__im__59);
#line 652
c_rt_lib0clear(&___nl__im__60);
#line 652
c_rt_lib0clear(&___nl__string__61);
#line 652
c_rt_lib0clear(&___nl__im__46);
#line 653
___nl__int__47 = ___nl__int__47 + ___nl__int__48;
#line 653
goto label_115;
#line 653
label_150:
;
#line 654
___nl__int__63 = 0;
#line 654
___nl__int__64 = ___nl__int__26 == ___nl__int__63;
#line 654
___nl__bool__62 = ___nl__int__64;
#line 654
//clear ___nl__int__63;
#line 654
//clear ___nl__int__64;
#line 654
___nl__bool__62 = !___nl__bool__62;
#line 654
___nl__bool__62 = !___nl__bool__62;
#line 654
if(___nl__bool__62){ goto label_173;}
#line 654
c_rt_lib0move(&___nl__im__67,___get_global_string_const(170));
#line 654
c_rt_lib0move(&___nl__im__69, c_rt_lib0int_new(___nl__int__26));
#line 654
c_rt_lib0move(&___nl__im__68, ptd0int_to_string(___nl__im__69));
#line 654
c_rt_lib0clear(&___nl__im__69);
#line 654
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__68));
#line 654
c_rt_lib0clear(&___nl__im__67);
#line 654
c_rt_lib0clear(&___nl__im__68);
#line 654
c_rt_lib0move(&___nl__im__70,___get_global_string_const(171));
#line 654
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__70));
#line 654
c_rt_lib0clear(&___nl__im__66);
#line 654
c_rt_lib0clear(&___nl__im__70);
#line 654
c_rt_lib0delete(c_fe_lib0print(___nl__im__65));
#line 654
c_rt_lib0clear(&___nl__im__65);
#line 654
goto label_173;
#line 654
label_173:
;
#line 654
//clear ___nl__bool__62;
#line 655
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(0));
#line 656
c_rt_lib0move(&___nl__im__75, c_rt_lib0init_iter((*___ref___im__0)));
#line 656
label_177:
;
#line 656
___nl__bool__73 = c_rt_lib0is_end_hash(___nl__im__75);
#line 656
if(___nl__bool__73){ goto label_212;}
#line 656
c_rt_lib0move(&___nl__im__72, c_rt_lib0get_key_iter(___nl__im__75));
#line 656
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__72));
#line 657
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_mk(0));
#line 658
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(172)));
#line 658
___nl__int__79 = 0;
#line 658
___nl__int__80 = 1;
#line 658
___nl__int__81 = c_rt_lib0array_len(___nl__im__77);
#line 658
label_187:
;
#line 658
___nl__int__83 = ___nl__int__79 >= ___nl__int__81;
#line 658
___nl__bool__82 = ___nl__int__83;
#line 658
if(___nl__bool__82){ goto label_199;}
#line 658
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_get(___nl__im__77, ___nl__int__79));
#line 658
c_rt_lib0copy(&___nl__im__78, ___nl__im__84);
#line 659
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(167)));
#line 659
c_rt_lib0delete(array0push(&___nl__im__76, ___nl__im__85));
#line 659
c_rt_lib0clear(&___nl__im__85);
#line 659
c_rt_lib0clear(&___nl__im__78);
#line 660
___nl__int__79 = ___nl__int__79 + ___nl__int__80;
#line 660
goto label_187;
#line 660
label_199:
;
#line 661
c_rt_lib0delete(hash0set_value(&___nl__im__71, ___nl__im__72, ___nl__im__76));
#line 661
c_rt_lib0clear(&___nl__im__76);
#line 661
c_rt_lib0clear(&___nl__im__77);
#line 661
c_rt_lib0clear(&___nl__im__78);
#line 661
//clear ___nl__int__79;
#line 661
//clear ___nl__int__80;
#line 661
//clear ___nl__int__81;
#line 661
//clear ___nl__bool__82;
#line 661
//clear ___nl__int__83;
#line 661
c_rt_lib0clear(&___nl__im__84);
#line 662
c_rt_lib0move(&___nl__im__75, c_rt_lib0next_iter(___nl__im__75));
#line 662
goto label_177;
#line 662
label_212:
;
#line 663
c_rt_lib0move(&___nl__im__86, module_checker0search_loops(___nl__im__71));
#line 663
c_rt_lib0copy(&___nl__im__87, ___nl__im__86);
#line 663
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(63), ___nl__im__87);
#line 663
c_rt_lib0clear(&___nl__im__86);
#line 663
c_rt_lib0clear(&___nl__im__87);
#line 664
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(76));
#line 664
___nl__bool__88 = !___nl__bool__88;
#line 664
if(___nl__bool__88){ goto label_265;}
#line 665
c_rt_lib0move(&___nl__im__90,___get_global_string_const(173));
#line 665
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(95)));
#line 665
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(174)));
#line 665
c_rt_lib0clear(&___nl__im__94);
#line 665
___nl__int__92 = c_rt_lib0array_len(___nl__im__93);
#line 665
c_rt_lib0clear(&___nl__im__93);
#line 665
c_rt_lib0move(&___nl__im__95, c_rt_lib0int_new(___nl__int__92));
#line 665
c_rt_lib0move(&___nl__im__91, ptd0int_to_string(___nl__im__95));
#line 665
//clear ___nl__int__92;
#line 665
c_rt_lib0clear(&___nl__im__95);
#line 665
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__91));
#line 665
c_rt_lib0clear(&___nl__im__90);
#line 665
c_rt_lib0clear(&___nl__im__91);
#line 665
c_rt_lib0delete(c_fe_lib0print(___nl__im__89));
#line 665
c_rt_lib0clear(&___nl__im__89);
#line 666
c_rt_lib0move(&___nl__im__97,___get_global_string_const(175));
#line 666
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(95)));
#line 666
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__101, ___get_global_string_const(176)));
#line 666
c_rt_lib0clear(&___nl__im__101);
#line 666
___nl__int__99 = c_rt_lib0array_len(___nl__im__100);
#line 666
c_rt_lib0clear(&___nl__im__100);
#line 666
c_rt_lib0move(&___nl__im__102, c_rt_lib0int_new(___nl__int__99));
#line 666
c_rt_lib0move(&___nl__im__98, ptd0int_to_string(___nl__im__102));
#line 666
//clear ___nl__int__99;
#line 666
c_rt_lib0clear(&___nl__im__102);
#line 666
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__98));
#line 666
c_rt_lib0clear(&___nl__im__97);
#line 666
c_rt_lib0clear(&___nl__im__98);
#line 666
c_rt_lib0delete(c_fe_lib0print(___nl__im__96));
#line 666
c_rt_lib0clear(&___nl__im__96);
#line 667
c_rt_lib0move(&___nl__im__103, reference_generator0generate((*___ref___im__0)));
#line 668
c_rt_lib0move(&___nl__im__106, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(76)));
#line 668
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(95)));
#line 668
c_rt_lib0move(&___nl__im__107, compiler_priv0serialize_deref(___nl__im__108, ___nl__im__103));
#line 668
c_rt_lib0clear(&___nl__im__108);
#line 668
c_rt_lib0move(&___nl__im__105, c_fe_lib0string_to_file(___nl__im__106, ___nl__im__107));
#line 668
c_rt_lib0clear(&___nl__im__106);
#line 668
c_rt_lib0clear(&___nl__im__107);
#line 668
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__105, ___get_global_string_const(79));
#line 668
if(___nl__bool__104){ goto label_263;}
#line 668
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(177), ___nl__im__105));
#line 668
nl_die_arg(___nl__im__105);
#line 668
label_263:
;
#line 669
goto label_265;
#line 669
label_265:
;
#line 669
//clear ___nl__bool__88;
#line 669
c_rt_lib0clear(&___nl__im__103);
#line 669
//clear ___nl__bool__104;
#line 669
c_rt_lib0clear(&___nl__im__105);
#line 669
c_rt_lib0clear(&___nl__im__2);
#line 669
//clear ___nl__bool__3;
#line 669
c_rt_lib0clear(&___nl__im__5);
#line 669
//clear ___nl__int__26;
#line 669
c_rt_lib0clear(&___nl__im__28);
#line 669
c_rt_lib0clear(&___nl__im__29);
#line 669
//clear ___nl__int__30;
#line 669
//clear ___nl__int__31;
#line 669
//clear ___nl__int__32;
#line 669
//clear ___nl__bool__33;
#line 669
//clear ___nl__int__34;
#line 669
c_rt_lib0clear(&___nl__im__35);
#line 669
c_rt_lib0clear(&___nl__im__36);
#line 669
c_rt_lib0clear(&___nl__im__45);
#line 669
c_rt_lib0clear(&___nl__im__46);
#line 669
//clear ___nl__int__47;
#line 669
//clear ___nl__int__48;
#line 669
//clear ___nl__int__49;
#line 669
//clear ___nl__bool__50;
#line 669
//clear ___nl__int__51;
#line 669
c_rt_lib0clear(&___nl__im__52);
#line 669
c_rt_lib0clear(&___nl__im__53);
#line 669
c_rt_lib0clear(&___nl__im__71);
#line 669
c_rt_lib0clear(&___nl__im__72);
#line 669
//clear ___nl__bool__73;
#line 669
c_rt_lib0clear(&___nl__im__74);
#line 669
c_rt_lib0clear(&___nl__im__75);
#line 669
c_rt_lib0clear(&___nl__im__76);
#line 669
c_rt_lib0clear(&___nl__im__77);
#line 669
c_rt_lib0clear(&___nl__im__78);
#line 669
//clear ___nl__int__79;
#line 669
//clear ___nl__int__80;
#line 669
//clear ___nl__int__81;
#line 669
//clear ___nl__bool__82;
#line 669
//clear ___nl__int__83;
#line 669
c_rt_lib0clear(&___nl__im__84);
#line 669
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
#line 673
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 674
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 674
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 674
c_rt_lib0clear(&___nl__im__3);
#line 675
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 676
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_string_const(178), ___get_global_string_const(179)));
#line 676
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__6));
#line 676
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 676
c_rt_lib0clear(&___nl__im__6);
#line 676
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 676
c_rt_lib0clear(&___nl__im__5);
#line 676
c_rt_lib0clear(&___nl__im__0);
#line 676
c_rt_lib0clear(&___nl__im__1);
#line 676
c_rt_lib0clear(&___nl__im__2);
#line 676
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
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 681
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 682
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(176)));
#line 682
___nl__int__4 = 0;
#line 682
___nl__int__5 = 1;
#line 682
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 682
label_5:
;
#line 682
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 682
___nl__bool__7 = ___nl__int__8;
#line 682
if(___nl__bool__7){ goto label_19;}
#line 682
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 682
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 683
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(174), ___nl__im__3));
#line 683
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(95), ___nl__im__11));
#line 683
c_rt_lib0clear(&___nl__im__11);
#line 683
c_rt_lib0array_push(&___nl__im__1, ___nl__im__10);
#line 683
c_rt_lib0clear(&___nl__im__10);
#line 683
c_rt_lib0clear(&___nl__im__3);
#line 684
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 684
goto label_5;
#line 684
label_19:
;
#line 686
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(174)));
#line 686
___nl__int__14 = 0;
#line 686
___nl__int__15 = 1;
#line 686
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 686
label_24:
;
#line 686
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 686
___nl__bool__17 = ___nl__int__18;
#line 686
if(___nl__bool__17){ goto label_38;}
#line 686
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 686
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 687
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__13));
#line 687
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(95), ___nl__im__21));
#line 687
c_rt_lib0clear(&___nl__im__21);
#line 687
c_rt_lib0array_push(&___nl__im__1, ___nl__im__20);
#line 687
c_rt_lib0clear(&___nl__im__20);
#line 687
c_rt_lib0clear(&___nl__im__13);
#line 688
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 688
goto label_24;
#line 688
label_38:
;
#line 689
c_rt_lib0clear(&___nl__im__0);
#line 689
c_rt_lib0clear(&___nl__im__2);
#line 689
c_rt_lib0clear(&___nl__im__3);
#line 689
//clear ___nl__int__4;
#line 689
//clear ___nl__int__5;
#line 689
//clear ___nl__int__6;
#line 689
//clear ___nl__bool__7;
#line 689
//clear ___nl__int__8;
#line 689
c_rt_lib0clear(&___nl__im__9);
#line 689
c_rt_lib0clear(&___nl__im__12);
#line 689
c_rt_lib0clear(&___nl__im__13);
#line 689
//clear ___nl__int__14;
#line 689
//clear ___nl__int__15;
#line 689
//clear ___nl__int__16;
#line 689
//clear ___nl__bool__17;
#line 689
//clear ___nl__int__18;
#line 689
c_rt_lib0clear(&___nl__im__19);
#line 689
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
#line 693
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 693
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(79));
#line 693
if(___nl__bool__4){ goto label_8;}
#line 694
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(78));
#line 694
if(___nl__bool__4){ goto label_12;}
#line 694
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
#line 694
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 694
nl_die_arg(___nl__im__5);
#line 693
label_8:
;
#line 693
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(79)));
#line 693
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 694
goto label_22;
#line 694
label_12:
;
#line 694
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(78)));
#line 694
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 695
c_rt_lib0move(&___nl__im__11,___get_global_string_const(138));
#line 695
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 695
c_rt_lib0clear(&___nl__im__11);
#line 695
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 695
c_rt_lib0clear(&___nl__im__10);
#line 696
c_rt_lib0move(___ref___im__2, c_rt_lib0ov_mk_none(___get_global_string_const(180)));
#line 697
goto label_22;
#line 697
label_22:
;
#line 697
c_rt_lib0clear(&___nl__im__0);
#line 697
c_rt_lib0clear(&___nl__im__1);
#line 697
c_rt_lib0clear(&___nl__im__3);
#line 697
//clear ___nl__bool__4;
#line 697
c_rt_lib0clear(&___nl__im__5);
#line 697
c_rt_lib0clear(&___nl__im__6);
#line 697
c_rt_lib0clear(&___nl__im__7);
#line 697
c_rt_lib0clear(&___nl__im__8);
#line 697
c_rt_lib0clear(&___nl__im__9);
#line 697
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
INT  ___nl__int__83 = 0;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
#line 705
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 706
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(65));
#line 706
if(___nl__bool__6){ goto label_16;}
#line 714
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(66));
#line 714
if(___nl__bool__6){ goto label_56;}
#line 728
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(67));
#line 728
if(___nl__bool__6){ goto label_126;}
#line 737
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(68));
#line 737
if(___nl__bool__6){ goto label_170;}
#line 739
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(69));
#line 739
if(___nl__bool__6){ goto label_174;}
#line 741
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(70));
#line 741
if(___nl__bool__6){ goto label_178;}
#line 741
c_rt_lib0move(&___nl__im__7,___get_global_string_const(16));
#line 741
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 741
nl_die_arg(___nl__im__7);
#line 706
label_16:
;
#line 707
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 707
label_18:
;
#line 707
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 707
if(___nl__bool__9){ goto label_54;}
#line 707
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 707
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 708
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(181)));
#line 709
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 709
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(75)));
#line 709
c_rt_lib0clear(&___nl__im__15);
#line 709
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 709
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(75)));
#line 709
c_rt_lib0clear(&___nl__im__17);
#line 709
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(65)));
#line 709
c_rt_lib0clear(&___nl__im__14);
#line 709
c_rt_lib0clear(&___nl__im__16);
#line 710
c_rt_lib0move(&___nl__im__19,___get_global_string_const(137));
#line 710
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 710
c_rt_lib0clear(&___nl__im__19);
#line 710
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 710
c_rt_lib0clear(&___nl__im__18);
#line 711
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 711
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 711
c_rt_lib0clear(&___nl__im__20);
#line 712
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 712
___nl__bool__21 = !___nl__bool__21;
#line 712
if(___nl__bool__21){ goto label_48;}
#line 712
c_rt_lib0move(&___nl__im__22,___get_global_string_const(37));
#line 712
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 712
c_rt_lib0clear(&___nl__im__22);
#line 712
goto label_48;
#line 712
label_48:
;
#line 712
//clear ___nl__bool__21;
#line 712
c_rt_lib0clear(&___nl__im__12);
#line 712
c_rt_lib0clear(&___nl__im__13);
#line 713
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 713
goto label_18;
#line 713
label_54:
;
#line 714
goto label_201;
#line 714
label_56:
;
#line 715
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 716
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(181)));
#line 717
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(182)));
#line 717
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 717
label_61:
;
#line 717
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 717
if(___nl__bool__27){ goto label_103;}
#line 717
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 717
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 718
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(181)));
#line 719
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 719
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(75)));
#line 719
c_rt_lib0clear(&___nl__im__32);
#line 719
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 719
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(75)));
#line 719
c_rt_lib0clear(&___nl__im__34);
#line 719
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(66)));
#line 719
c_rt_lib0clear(&___nl__im__31);
#line 719
c_rt_lib0clear(&___nl__im__33);
#line 720
c_rt_lib0move(&___nl__im__36,___get_global_string_const(137));
#line 720
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 720
c_rt_lib0clear(&___nl__im__36);
#line 720
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 720
c_rt_lib0clear(&___nl__im__35);
#line 721
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(66)));
#line 721
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(66)));
#line 721
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 721
c_rt_lib0clear(&___nl__im__37);
#line 721
c_rt_lib0clear(&___nl__im__38);
#line 722
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(71)));
#line 722
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(71)));
#line 722
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 722
c_rt_lib0clear(&___nl__im__39);
#line 722
c_rt_lib0clear(&___nl__im__40);
#line 723
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 723
___nl__bool__41 = !___nl__bool__41;
#line 723
if(___nl__bool__41){ goto label_98;}
#line 723
c_rt_lib0move(&___nl__im__42,___get_global_string_const(37));
#line 723
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 723
c_rt_lib0clear(&___nl__im__42);
#line 723
goto label_98;
#line 723
label_98:
;
#line 723
//clear ___nl__bool__41;
#line 723
c_rt_lib0clear(&___nl__im__30);
#line 724
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 724
goto label_61;
#line 724
label_103:
;
#line 725
c_rt_lib0move(&___nl__im__43,___get_global_string_const(183));
#line 725
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 725
c_rt_lib0clear(&___nl__im__43);
#line 726
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(184)));
#line 726
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(66)));
#line 726
c_rt_lib0clear(&___nl__im__45);
#line 726
c_rt_lib0move(&___nl__im__47,___get_global_string_const(185));
#line 726
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 726
c_rt_lib0clear(&___nl__im__47);
#line 726
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 726
c_rt_lib0clear(&___nl__im__44);
#line 726
c_rt_lib0clear(&___nl__im__46);
#line 727
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(184)));
#line 727
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(71)));
#line 727
c_rt_lib0clear(&___nl__im__49);
#line 727
c_rt_lib0move(&___nl__im__51,___get_global_string_const(186));
#line 727
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 727
c_rt_lib0clear(&___nl__im__51);
#line 727
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 727
c_rt_lib0clear(&___nl__im__48);
#line 727
c_rt_lib0clear(&___nl__im__50);
#line 728
goto label_201;
#line 728
label_126:
;
#line 728
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(67)));
#line 728
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 729
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__0));
#line 729
label_130:
;
#line 729
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 729
if(___nl__bool__55){ goto label_168;}
#line 729
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 729
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__54));
#line 730
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(181)));
#line 731
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(64)));
#line 731
c_rt_lib0move(&___nl__im__59, generator_js0generate(___nl__im__56, ___nl__im__60));
#line 731
c_rt_lib0clear(&___nl__im__60);
#line 732
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 732
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(75)));
#line 732
c_rt_lib0clear(&___nl__im__63);
#line 732
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 732
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(75)));
#line 732
c_rt_lib0clear(&___nl__im__65);
#line 732
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__64, ___get_global_string_const(67)));
#line 732
c_rt_lib0clear(&___nl__im__62);
#line 732
c_rt_lib0clear(&___nl__im__64);
#line 733
c_rt_lib0move(&___nl__im__67,___get_global_string_const(137));
#line 733
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__54));
#line 733
c_rt_lib0clear(&___nl__im__67);
#line 733
c_rt_lib0delete(c_fe_lib0print(___nl__im__66));
#line 733
c_rt_lib0clear(&___nl__im__66);
#line 734
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__59, ___nl__im__61, &___nl__im__58));
#line 735
___nl__bool__68 = c_rt_lib0check_true_native(___nl__im__58);
#line 735
___nl__bool__68 = !___nl__bool__68;
#line 735
if(___nl__bool__68){ goto label_161;}
#line 735
c_rt_lib0move(&___nl__im__69,___get_global_string_const(37));
#line 735
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__69));
#line 735
c_rt_lib0clear(&___nl__im__69);
#line 735
goto label_161;
#line 735
label_161:
;
#line 735
//clear ___nl__bool__68;
#line 735
c_rt_lib0clear(&___nl__im__58);
#line 735
c_rt_lib0clear(&___nl__im__59);
#line 735
c_rt_lib0clear(&___nl__im__61);
#line 736
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 736
goto label_130;
#line 736
label_168:
;
#line 737
goto label_201;
#line 737
label_170:
;
#line 738
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 738
nl_die_arg(___nl__im__70);
#line 739
goto label_201;
#line 739
label_174:
;
#line 740
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(0));
#line 740
nl_die_arg(___nl__im__71);
#line 741
goto label_201;
#line 741
label_178:
;
#line 742
c_rt_lib0move(&___nl__im__72, post_processing0get_call_graph(___nl__im__0));
#line 743
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_string_const(181)));
#line 744
c_rt_lib0move(&___nl__im__74,___get_global_string_const(187));
#line 744
c_rt_lib0delete(c_fe_lib0print(___nl__im__74));
#line 744
c_rt_lib0clear(&___nl__im__74);
#line 745
c_rt_lib0move(&___nl__im__75, dfile0ssave(___nl__im__72));
#line 745
c_rt_lib0move(&___nl__im__77,___get_global_string_const(117));
#line 745
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__2, ___nl__im__77));
#line 745
c_rt_lib0clear(&___nl__im__77);
#line 745
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__75, ___nl__im__76, &___nl__im__73));
#line 745
c_rt_lib0clear(&___nl__im__75);
#line 745
c_rt_lib0clear(&___nl__im__76);
#line 746
___nl__bool__78 = c_rt_lib0check_true_native(___nl__im__73);
#line 746
___nl__bool__78 = !___nl__bool__78;
#line 746
if(___nl__bool__78){ goto label_198;}
#line 747
c_rt_lib0move(&___nl__im__79,___get_global_string_const(188));
#line 747
c_rt_lib0delete(c_fe_lib0print(___nl__im__79));
#line 747
c_rt_lib0clear(&___nl__im__79);
#line 748
goto label_198;
#line 748
label_198:
;
#line 748
//clear ___nl__bool__78;
#line 749
goto label_201;
#line 749
label_201:
;
#line 750
___nl__int__81 = hash0size(___nl__im__5);
#line 750
___nl__int__82 = 0;
#line 750
___nl__int__83 = ___nl__int__81 > ___nl__int__82;
#line 750
___nl__bool__80 = ___nl__int__83;
#line 750
//clear ___nl__int__81;
#line 750
//clear ___nl__int__82;
#line 750
//clear ___nl__int__83;
#line 750
___nl__bool__80 = !___nl__bool__80;
#line 750
if(___nl__bool__80){ goto label_249;}
#line 751
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__5));
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
return ___nl__im__84;
#line 752
goto label_291;
#line 752
label_249:
;
#line 753
c_rt_lib0move(&___nl__im__86,___get_global_string_const(37));
#line 753
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_string_const(79), ___nl__im__86));
#line 753
c_rt_lib0clear(&___nl__im__86);
#line 753
c_rt_lib0clear(&___nl__im__0);
#line 753
c_rt_lib0clear(&___nl__im__1);
#line 753
c_rt_lib0clear(&___nl__im__2);
#line 753
c_rt_lib0clear(&___nl__im__4);
#line 753
c_rt_lib0clear(&___nl__im__5);
#line 753
//clear ___nl__bool__6;
#line 753
c_rt_lib0clear(&___nl__im__7);
#line 753
c_rt_lib0clear(&___nl__im__8);
#line 753
//clear ___nl__bool__9;
#line 753
c_rt_lib0clear(&___nl__im__10);
#line 753
c_rt_lib0clear(&___nl__im__11);
#line 753
c_rt_lib0clear(&___nl__im__12);
#line 753
c_rt_lib0clear(&___nl__im__13);
#line 753
c_rt_lib0clear(&___nl__im__23);
#line 753
c_rt_lib0clear(&___nl__im__24);
#line 753
c_rt_lib0clear(&___nl__im__25);
#line 753
c_rt_lib0clear(&___nl__im__26);
#line 753
//clear ___nl__bool__27;
#line 753
c_rt_lib0clear(&___nl__im__28);
#line 753
c_rt_lib0clear(&___nl__im__29);
#line 753
c_rt_lib0clear(&___nl__im__30);
#line 753
c_rt_lib0clear(&___nl__im__52);
#line 753
c_rt_lib0clear(&___nl__im__53);
#line 753
c_rt_lib0clear(&___nl__im__54);
#line 753
//clear ___nl__bool__55;
#line 753
c_rt_lib0clear(&___nl__im__56);
#line 753
c_rt_lib0clear(&___nl__im__57);
#line 753
c_rt_lib0clear(&___nl__im__58);
#line 753
c_rt_lib0clear(&___nl__im__59);
#line 753
c_rt_lib0clear(&___nl__im__61);
#line 753
c_rt_lib0clear(&___nl__im__70);
#line 753
c_rt_lib0clear(&___nl__im__71);
#line 753
c_rt_lib0clear(&___nl__im__72);
#line 753
c_rt_lib0clear(&___nl__im__73);
#line 753
//clear ___nl__bool__80;
#line 753
c_rt_lib0clear(&___nl__im__84);
#line 753
return ___nl__im__85;
#line 754
goto label_291;
#line 754
label_291:
;
#line 754
//clear ___nl__bool__80;
#line 754
c_rt_lib0clear(&___nl__im__84);
#line 754
c_rt_lib0clear(&___nl__im__85);
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
#line 758
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(65));
#line 758
if(___nl__bool__2){ goto label_17;}
#line 760
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(66));
#line 760
if(___nl__bool__2){ goto label_23;}
#line 762
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(67));
#line 762
if(___nl__bool__2){ goto label_29;}
#line 764
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(68));
#line 764
if(___nl__bool__2){ goto label_35;}
#line 766
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(69));
#line 766
if(___nl__bool__2){ goto label_63;}
#line 768
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(72));
#line 768
if(___nl__bool__2){ goto label_94;}
#line 770
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(70));
#line 770
if(___nl__bool__2){ goto label_98;}
#line 770
c_rt_lib0move(&___nl__im__3,___get_global_string_const(16));
#line 770
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 770
nl_die_arg(___nl__im__3);
#line 758
label_17:
;
#line 758
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(65)));
#line 758
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 759
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 759
nl_die_arg(___nl__im__6);
#line 760
goto label_102;
#line 760
label_23:
;
#line 760
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(66)));
#line 760
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 761
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 761
nl_die_arg(___nl__im__9);
#line 762
goto label_102;
#line 762
label_29:
;
#line 762
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(67)));
#line 762
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 763
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 763
nl_die_arg(___nl__im__12);
#line 764
goto label_102;
#line 764
label_35:
;
#line 764
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(68)));
#line 764
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 765
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(55), ___get_global_string_const(189)));
#line 765
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__16));
#line 765
c_rt_lib0move(&___nl__im__18, pretty_printer0print_module_to_str(___nl__im__0));
#line 765
c_rt_lib0move(&___nl__im__17, c_fe_lib0string_to_file(___nl__im__13, ___nl__im__18));
#line 765
c_rt_lib0clear(&___nl__im__18);
#line 765
c_rt_lib0move(&___nl__im__15, ptd0ensure(___nl__im__16, ___nl__im__17));
#line 765
c_rt_lib0clear(&___nl__im__16);
#line 765
c_rt_lib0clear(&___nl__im__17);
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
return ___nl__im__15;
#line 766
goto label_102;
#line 766
label_63:
;
#line 766
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(69)));
#line 766
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 767
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(55), ___get_global_string_const(189)));
#line 767
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__22));
#line 767
c_rt_lib0move(&___nl__im__24, dfile0ssave(___nl__im__0));
#line 767
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 767
c_rt_lib0clear(&___nl__im__24);
#line 767
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 767
c_rt_lib0clear(&___nl__im__22);
#line 767
c_rt_lib0clear(&___nl__im__23);
#line 767
c_rt_lib0clear(&___nl__im__0);
#line 767
c_rt_lib0clear(&___nl__im__1);
#line 767
//clear ___nl__bool__2;
#line 767
c_rt_lib0clear(&___nl__im__3);
#line 767
c_rt_lib0clear(&___nl__im__4);
#line 767
c_rt_lib0clear(&___nl__im__5);
#line 767
c_rt_lib0clear(&___nl__im__6);
#line 767
c_rt_lib0clear(&___nl__im__7);
#line 767
c_rt_lib0clear(&___nl__im__8);
#line 767
c_rt_lib0clear(&___nl__im__9);
#line 767
c_rt_lib0clear(&___nl__im__10);
#line 767
c_rt_lib0clear(&___nl__im__11);
#line 767
c_rt_lib0clear(&___nl__im__12);
#line 767
c_rt_lib0clear(&___nl__im__13);
#line 767
c_rt_lib0clear(&___nl__im__14);
#line 767
c_rt_lib0clear(&___nl__im__15);
#line 767
c_rt_lib0clear(&___nl__im__19);
#line 767
c_rt_lib0clear(&___nl__im__20);
#line 767
return ___nl__im__21;
#line 768
goto label_102;
#line 768
label_94:
;
#line 769
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 769
nl_die_arg(___nl__im__25);
#line 770
goto label_102;
#line 770
label_98:
;
#line 771
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 771
nl_die_arg(___nl__im__26);
#line 772
goto label_102;
#line 772
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
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
#line 776
___nl__int__2 = string0length(___nl__im__0);
#line 776
___nl__int__3 = 1;
#line 776
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 776
//clear ___nl__int__2;
#line 776
//clear ___nl__int__3;
#line 777
___nl__int__6 = 1;
#line 777
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 777
//clear ___nl__int__6;
#line 777
c_rt_lib0move(&___nl__im__7,___get_global_string_const(106));
#line 777
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 777
c_rt_lib0clear(&___nl__im__5);
#line 777
c_rt_lib0clear(&___nl__im__7);
#line 777
if(___nl__bool__4){ goto label_20;}
#line 777
___nl__int__9 = 1;
#line 777
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 777
//clear ___nl__int__9;
#line 777
c_rt_lib0move(&___nl__im__10,___get_global_string_const(110));
#line 777
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 777
c_rt_lib0clear(&___nl__im__8);
#line 777
c_rt_lib0clear(&___nl__im__10);
#line 777
label_20:
;
#line 777
___nl__bool__4 = !___nl__bool__4;
#line 777
if(___nl__bool__4){ goto label_27;}
#line 777
___nl__int__11 = 1;
#line 777
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 777
//clear ___nl__int__11;
#line 777
goto label_27;
#line 777
label_27:
;
#line 777
//clear ___nl__bool__4;
#line 778
label_29:
;
#line 778
___nl__int__15 = 0;
#line 778
___nl__int__16 = ___nl__int__1 >= ___nl__int__15;
#line 778
___nl__bool__12 = ___nl__int__16;
#line 778
//clear ___nl__int__15;
#line 778
//clear ___nl__int__16;
#line 778
___nl__bool__14 = !___nl__bool__12;
#line 778
if(___nl__bool__14){ goto label_44;}
#line 778
___nl__int__18 = 1;
#line 778
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__18));
#line 778
//clear ___nl__int__18;
#line 778
c_rt_lib0move(&___nl__im__19,___get_global_string_const(106));
#line 778
___nl__bool__12 = c_rt_lib0ne(___nl__im__17, ___nl__im__19);
#line 778
c_rt_lib0clear(&___nl__im__17);
#line 778
c_rt_lib0clear(&___nl__im__19);
#line 778
label_44:
;
#line 778
//clear ___nl__bool__14;
#line 778
___nl__bool__13 = !___nl__bool__12;
#line 778
if(___nl__bool__13){ goto label_55;}
#line 778
___nl__int__21 = 1;
#line 778
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__21));
#line 778
//clear ___nl__int__21;
#line 778
c_rt_lib0move(&___nl__im__22,___get_global_string_const(110));
#line 778
___nl__bool__12 = c_rt_lib0ne(___nl__im__20, ___nl__im__22);
#line 778
c_rt_lib0clear(&___nl__im__20);
#line 778
c_rt_lib0clear(&___nl__im__22);
#line 778
label_55:
;
#line 778
//clear ___nl__bool__13;
#line 778
___nl__bool__12 = !___nl__bool__12;
#line 778
if(___nl__bool__12){ goto label_63;}
#line 778
___nl__int__23 = 1;
#line 778
___nl__int__1 = ___nl__int__1 - ___nl__int__23;
#line 778
//clear ___nl__int__23;
#line 778
goto label_29;
#line 778
label_63:
;
#line 779
___nl__int__25 = 0;
#line 779
___nl__int__26 = ___nl__int__1 <= ___nl__int__25;
#line 779
___nl__bool__24 = ___nl__int__26;
#line 779
//clear ___nl__int__25;
#line 779
//clear ___nl__int__26;
#line 779
___nl__bool__24 = !___nl__bool__24;
#line 779
if(___nl__bool__24){ goto label_78;}
#line 779
c_rt_lib0move(&___nl__im__27,___get_global_string_const(111));
#line 779
c_rt_lib0clear(&___nl__im__0);
#line 779
//clear ___nl__int__1;
#line 779
//clear ___nl__bool__12;
#line 779
//clear ___nl__bool__24;
#line 779
return ___nl__im__27;
#line 779
goto label_78;
#line 779
label_78:
;
#line 779
//clear ___nl__bool__24;
#line 779
c_rt_lib0clear(&___nl__im__27);
#line 780
___nl__int__29 = 0;
#line 780
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__0, ___nl__int__29, ___nl__int__1));
#line 780
//clear ___nl__int__29;
#line 780
c_rt_lib0clear(&___nl__im__0);
#line 780
//clear ___nl__int__1;
#line 780
//clear ___nl__bool__12;
#line 780
return ___nl__im__28;
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
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
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
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
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
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
INT  ___nl__int__67 = 0;
bool  ___nl__bool__68 = false;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
bool  ___nl__bool__84 = false;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
INT  ___nl__int__93 = 0;
bool  ___nl__bool__94 = false;
INT  ___nl__int__95 = 0;
INT  ___nl__int__96 = 0;
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
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
bool  ___nl__bool__122 = false;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
INT  ___nl__int__125 = 0;
bool  ___nl__bool__126 = false;
INT  ___nl__int__127 = 0;
INT  ___nl__int__128 = 0;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__string__140 = NULL;
INT  ___nl__int__141 = 0;
bool  ___nl__bool__142 = false;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
#line 785
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(66)));
#line 786
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 787
c_rt_lib0move(&___nl__im__5,___get_global_string_const(111));
#line 787
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 787
c_rt_lib0clear(&___nl__im__5);
#line 788
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(82)));
#line 789
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(77)));
#line 790
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 791
c_rt_lib0move(&___nl__im__9,___get_global_string_const(37));
#line 792
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(91)));
#line 793
___nl__bool__11 = false;
#line 793
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 794
___nl__bool__13 = false;
#line 794
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 794
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(99), ___nl__im__2, ___get_global_string_const(98), ___nl__im__3, ___get_global_string_const(93), ___nl__im__4, ___get_global_string_const(96), ___nl__im__6, ___get_global_string_const(95), ___nl__im__7, ___get_global_string_const(97), ___nl__im__8, ___get_global_string_const(94), ___nl__im__9, ___get_global_string_const(100), ___nl__im__10, ___get_global_string_const(101), ___nl__im__12, ___get_global_string_const(102), ___nl__im__14));
#line 794
c_rt_lib0clear(&___nl__im__2);
#line 794
c_rt_lib0clear(&___nl__im__3);
#line 794
c_rt_lib0clear(&___nl__im__4);
#line 794
c_rt_lib0clear(&___nl__im__6);
#line 794
c_rt_lib0clear(&___nl__im__7);
#line 794
c_rt_lib0clear(&___nl__im__8);
#line 794
c_rt_lib0clear(&___nl__im__9);
#line 794
c_rt_lib0clear(&___nl__im__10);
#line 794
//clear ___nl__bool__11;
#line 794
c_rt_lib0clear(&___nl__im__12);
#line 794
//clear ___nl__bool__13;
#line 794
c_rt_lib0clear(&___nl__im__14);
#line 796
___nl__bool__15 = false;
#line 797
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 798
___nl__int__17 = 1;
#line 798
label_30:
;
#line 798
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 798
___nl__int__20 = ___nl__int__17 < ___nl__int__19;
#line 798
___nl__bool__18 = ___nl__int__20;
#line 798
//clear ___nl__int__19;
#line 798
//clear ___nl__int__20;
#line 798
___nl__bool__18 = !___nl__bool__18;
#line 798
if(___nl__bool__18){ goto label_472;}
#line 799
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 800
___nl__int__24 = string0length(___nl__im__21);
#line 800
___nl__int__25 = 2;
#line 800
___nl__int__26 = ___nl__int__24 >= ___nl__int__25;
#line 800
___nl__bool__22 = ___nl__int__26;
#line 800
//clear ___nl__int__24;
#line 800
//clear ___nl__int__25;
#line 800
//clear ___nl__int__26;
#line 800
___nl__bool__23 = !___nl__bool__22;
#line 800
if(___nl__bool__23){ goto label_57;}
#line 800
___nl__int__28 = 0;
#line 800
___nl__int__29 = 2;
#line 800
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__21, ___nl__int__28, ___nl__int__29));
#line 800
//clear ___nl__int__28;
#line 800
//clear ___nl__int__29;
#line 800
c_rt_lib0move(&___nl__im__30,___get_global_string_const(190));
#line 800
___nl__bool__22 = c_rt_lib0eq(___nl__im__27, ___nl__im__30);
#line 800
c_rt_lib0clear(&___nl__im__27);
#line 800
c_rt_lib0clear(&___nl__im__30);
#line 800
label_57:
;
#line 800
//clear ___nl__bool__23;
#line 800
___nl__bool__22 = !___nl__bool__22;
#line 800
if(___nl__bool__22){ goto label_442;}
#line 801
___nl__int__32 = 2;
#line 801
___nl__int__34 = string0length(___nl__im__21);
#line 801
___nl__int__35 = 2;
#line 801
___nl__int__33 = ___nl__int__34 - ___nl__int__35;
#line 801
//clear ___nl__int__34;
#line 801
//clear ___nl__int__35;
#line 801
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__21, ___nl__int__32, ___nl__int__33));
#line 801
//clear ___nl__int__32;
#line 801
//clear ___nl__int__33;
#line 802
c_rt_lib0move(&___nl__im__37,___get_global_string_const(95));
#line 802
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__37);
#line 802
c_rt_lib0clear(&___nl__im__37);
#line 802
___nl__bool__36 = !___nl__bool__36;
#line 802
if(___nl__bool__36){ goto label_83;}
#line 803
c_rt_lib0move(&___nl__im__39,___get_global_string_const(37));
#line 803
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(76), ___nl__im__39));
#line 803
c_rt_lib0clear(&___nl__im__39);
#line 803
c_rt_lib0copy(&___nl__im__40, ___nl__im__38);
#line 803
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__40);
#line 803
c_rt_lib0clear(&___nl__im__38);
#line 803
c_rt_lib0clear(&___nl__im__40);
#line 804
goto label_439;
#line 804
label_83:
;
#line 804
c_rt_lib0move(&___nl__im__41,___get_global_string_const(65));
#line 804
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__41);
#line 804
c_rt_lib0clear(&___nl__im__41);
#line 804
___nl__bool__36 = !___nl__bool__36;
#line 804
if(___nl__bool__36){ goto label_95;}
#line 805
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 805
c_rt_lib0copy(&___nl__im__43, ___nl__im__42);
#line 805
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__43);
#line 805
c_rt_lib0clear(&___nl__im__42);
#line 805
c_rt_lib0clear(&___nl__im__43);
#line 806
goto label_439;
#line 806
label_95:
;
#line 806
c_rt_lib0move(&___nl__im__44,___get_global_string_const(69));
#line 806
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__44);
#line 806
c_rt_lib0clear(&___nl__im__44);
#line 806
___nl__bool__36 = !___nl__bool__36;
#line 806
if(___nl__bool__36){ goto label_107;}
#line 807
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 807
c_rt_lib0copy(&___nl__im__46, ___nl__im__45);
#line 807
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__46);
#line 807
c_rt_lib0clear(&___nl__im__45);
#line 807
c_rt_lib0clear(&___nl__im__46);
#line 808
goto label_439;
#line 808
label_107:
;
#line 808
c_rt_lib0move(&___nl__im__47,___get_global_string_const(66));
#line 808
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__47);
#line 808
c_rt_lib0clear(&___nl__im__47);
#line 808
___nl__bool__36 = !___nl__bool__36;
#line 808
if(___nl__bool__36){ goto label_119;}
#line 809
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_string_const(66)));
#line 809
c_rt_lib0copy(&___nl__im__49, ___nl__im__48);
#line 809
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__49);
#line 809
c_rt_lib0clear(&___nl__im__48);
#line 809
c_rt_lib0clear(&___nl__im__49);
#line 810
goto label_439;
#line 810
label_119:
;
#line 810
c_rt_lib0move(&___nl__im__50,___get_global_string_const(67));
#line 810
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__50);
#line 810
c_rt_lib0clear(&___nl__im__50);
#line 810
___nl__bool__36 = !___nl__bool__36;
#line 810
if(___nl__bool__36){ goto label_144;}
#line 811
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 811
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__52, ___get_global_string_const(67));
#line 811
c_rt_lib0clear(&___nl__im__52);
#line 811
___nl__bool__51 = !___nl__bool__51;
#line 811
___nl__bool__51 = !___nl__bool__51;
#line 811
if(___nl__bool__51){ goto label_141;}
#line 812
c_rt_lib0move(&___nl__im__55,___get_global_string_const(68));
#line 812
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(1, ___get_global_string_const(64), ___nl__im__55));
#line 812
c_rt_lib0clear(&___nl__im__55);
#line 812
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__54));
#line 812
c_rt_lib0clear(&___nl__im__54);
#line 812
c_rt_lib0copy(&___nl__im__56, ___nl__im__53);
#line 812
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__56);
#line 812
c_rt_lib0clear(&___nl__im__53);
#line 812
c_rt_lib0clear(&___nl__im__56);
#line 813
goto label_141;
#line 813
label_141:
;
#line 813
//clear ___nl__bool__51;
#line 814
goto label_439;
#line 814
label_144:
;
#line 814
c_rt_lib0move(&___nl__im__57,___get_global_string_const(70));
#line 814
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__57);
#line 814
c_rt_lib0clear(&___nl__im__57);
#line 814
___nl__bool__36 = !___nl__bool__36;
#line 814
if(___nl__bool__36){ goto label_156;}
#line 815
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(70)));
#line 815
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 815
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__59);
#line 815
c_rt_lib0clear(&___nl__im__58);
#line 815
c_rt_lib0clear(&___nl__im__59);
#line 816
goto label_439;
#line 816
label_156:
;
#line 816
c_rt_lib0move(&___nl__im__60,___get_global_string_const(68));
#line 816
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__60);
#line 816
c_rt_lib0clear(&___nl__im__60);
#line 816
___nl__bool__36 = !___nl__bool__36;
#line 816
if(___nl__bool__36){ goto label_169;}
#line 817
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(68)));
#line 817
c_rt_lib0copy(&___nl__im__62, ___nl__im__61);
#line 817
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__62);
#line 817
c_rt_lib0clear(&___nl__im__61);
#line 817
c_rt_lib0clear(&___nl__im__62);
#line 818
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 819
goto label_439;
#line 819
label_169:
;
#line 819
c_rt_lib0move(&___nl__im__63,___get_global_string_const(88));
#line 819
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__63);
#line 819
c_rt_lib0clear(&___nl__im__63);
#line 819
___nl__bool__36 = !___nl__bool__36;
#line 819
if(___nl__bool__36){ goto label_181;}
#line 820
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_string_const(88)));
#line 820
c_rt_lib0copy(&___nl__im__65, ___nl__im__64);
#line 820
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__65);
#line 820
c_rt_lib0clear(&___nl__im__64);
#line 820
c_rt_lib0clear(&___nl__im__65);
#line 821
goto label_439;
#line 821
label_181:
;
#line 821
c_rt_lib0move(&___nl__im__66,___get_global_string_const(89));
#line 821
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__66);
#line 821
c_rt_lib0clear(&___nl__im__66);
#line 821
___nl__bool__36 = !___nl__bool__36;
#line 821
if(___nl__bool__36){ goto label_212;}
#line 822
___nl__int__67 = 1;
#line 822
___nl__int__17 = ___nl__int__17 + ___nl__int__67;
#line 822
//clear ___nl__int__67;
#line 823
___nl__int__69 = c_rt_lib0array_len(___nl__im__0);
#line 823
___nl__int__70 = ___nl__int__17 < ___nl__int__69;
#line 823
___nl__bool__68 = ___nl__int__70;
#line 823
//clear ___nl__int__69;
#line 823
//clear ___nl__int__70;
#line 823
___nl__bool__68 = !___nl__bool__68;
#line 823
___nl__bool__68 = !___nl__bool__68;
#line 823
if(___nl__bool__68){ goto label_201;}
#line 823
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(0));
#line 823
nl_die_arg(___nl__im__71);
#line 823
goto label_201;
#line 823
label_201:
;
#line 823
//clear ___nl__bool__68;
#line 823
c_rt_lib0clear(&___nl__im__71);
#line 824
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 824
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_arg(___get_global_string_const(89), ___nl__im__73));
#line 824
c_rt_lib0clear(&___nl__im__73);
#line 824
c_rt_lib0copy(&___nl__im__74, ___nl__im__72);
#line 824
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__74);
#line 824
c_rt_lib0clear(&___nl__im__72);
#line 824
c_rt_lib0clear(&___nl__im__74);
#line 825
goto label_439;
#line 825
label_212:
;
#line 825
c_rt_lib0move(&___nl__im__75,___get_global_string_const(86));
#line 825
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__75);
#line 825
c_rt_lib0clear(&___nl__im__75);
#line 825
___nl__bool__36 = !___nl__bool__36;
#line 825
if(___nl__bool__36){ goto label_224;}
#line 826
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 826
c_rt_lib0copy(&___nl__im__77, ___nl__im__76);
#line 826
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__77);
#line 826
c_rt_lib0clear(&___nl__im__76);
#line 826
c_rt_lib0clear(&___nl__im__77);
#line 827
goto label_439;
#line 827
label_224:
;
#line 827
c_rt_lib0move(&___nl__im__78,___get_global_string_const(87));
#line 827
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__78);
#line 827
c_rt_lib0clear(&___nl__im__78);
#line 827
___nl__bool__36 = !___nl__bool__36;
#line 827
if(___nl__bool__36){ goto label_236;}
#line 828
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_none(___get_global_string_const(87)));
#line 828
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 828
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__80);
#line 828
c_rt_lib0clear(&___nl__im__79);
#line 828
c_rt_lib0clear(&___nl__im__80);
#line 829
goto label_439;
#line 829
label_236:
;
#line 829
c_rt_lib0move(&___nl__im__81,___get_global_string_const(191));
#line 829
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__81);
#line 829
c_rt_lib0clear(&___nl__im__81);
#line 829
if(___nl__bool__36){ goto label_244;}
#line 829
c_rt_lib0move(&___nl__im__82,___get_global_string_const(192));
#line 829
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__82);
#line 829
c_rt_lib0clear(&___nl__im__82);
#line 829
label_244:
;
#line 829
___nl__bool__36 = !___nl__bool__36;
#line 829
if(___nl__bool__36){ goto label_274;}
#line 830
___nl__int__83 = 1;
#line 830
___nl__int__17 = ___nl__int__17 + ___nl__int__83;
#line 830
//clear ___nl__int__83;
#line 831
___nl__int__85 = c_rt_lib0array_len(___nl__im__0);
#line 831
___nl__int__86 = ___nl__int__17 < ___nl__int__85;
#line 831
___nl__bool__84 = ___nl__int__86;
#line 831
//clear ___nl__int__85;
#line 831
//clear ___nl__int__86;
#line 831
___nl__bool__84 = !___nl__bool__84;
#line 831
___nl__bool__84 = !___nl__bool__84;
#line 831
if(___nl__bool__84){ goto label_261;}
#line 831
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(0));
#line 831
nl_die_arg(___nl__im__87);
#line 831
goto label_261;
#line 831
label_261:
;
#line 831
//clear ___nl__bool__84;
#line 831
c_rt_lib0clear(&___nl__im__87);
#line 832
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 832
c_rt_lib0move(&___nl__im__90,___get_global_string_const(106));
#line 832
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 832
c_rt_lib0clear(&___nl__im__89);
#line 832
c_rt_lib0clear(&___nl__im__90);
#line 832
c_rt_lib0copy(&___nl__im__91, ___nl__im__88);
#line 832
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(94), ___nl__im__91);
#line 832
c_rt_lib0clear(&___nl__im__88);
#line 832
c_rt_lib0clear(&___nl__im__91);
#line 833
goto label_439;
#line 833
label_274:
;
#line 833
c_rt_lib0move(&___nl__im__92,___get_global_string_const(193));
#line 833
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__92);
#line 833
c_rt_lib0clear(&___nl__im__92);
#line 833
___nl__bool__36 = !___nl__bool__36;
#line 833
if(___nl__bool__36){ goto label_303;}
#line 834
___nl__int__93 = 1;
#line 834
___nl__int__17 = ___nl__int__17 + ___nl__int__93;
#line 834
//clear ___nl__int__93;
#line 835
___nl__int__95 = c_rt_lib0array_len(___nl__im__0);
#line 835
___nl__int__96 = ___nl__int__17 < ___nl__int__95;
#line 835
___nl__bool__94 = ___nl__int__96;
#line 835
//clear ___nl__int__95;
#line 835
//clear ___nl__int__96;
#line 835
___nl__bool__94 = !___nl__bool__94;
#line 835
___nl__bool__94 = !___nl__bool__94;
#line 835
if(___nl__bool__94){ goto label_294;}
#line 835
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_mk(0));
#line 835
nl_die_arg(___nl__im__97);
#line 835
goto label_294;
#line 835
label_294:
;
#line 835
//clear ___nl__bool__94;
#line 835
c_rt_lib0clear(&___nl__im__97);
#line 836
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 836
c_rt_lib0copy(&___nl__im__99, ___nl__im__98);
#line 836
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__99);
#line 836
c_rt_lib0clear(&___nl__im__98);
#line 836
c_rt_lib0clear(&___nl__im__99);
#line 837
goto label_439;
#line 837
label_303:
;
#line 837
c_rt_lib0move(&___nl__im__100,___get_global_string_const(194));
#line 837
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__100);
#line 837
c_rt_lib0clear(&___nl__im__100);
#line 837
___nl__bool__36 = !___nl__bool__36;
#line 837
if(___nl__bool__36){ goto label_315;}
#line 838
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 838
c_rt_lib0copy(&___nl__im__102, ___nl__im__101);
#line 838
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(96), ___nl__im__102);
#line 838
c_rt_lib0clear(&___nl__im__101);
#line 838
c_rt_lib0clear(&___nl__im__102);
#line 839
goto label_439;
#line 839
label_315:
;
#line 839
c_rt_lib0move(&___nl__im__103,___get_global_string_const(195));
#line 839
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__103);
#line 839
c_rt_lib0clear(&___nl__im__103);
#line 839
___nl__bool__36 = !___nl__bool__36;
#line 839
if(___nl__bool__36){ goto label_327;}
#line 840
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_string_const(82)));
#line 840
c_rt_lib0copy(&___nl__im__105, ___nl__im__104);
#line 840
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(96), ___nl__im__105);
#line 840
c_rt_lib0clear(&___nl__im__104);
#line 840
c_rt_lib0clear(&___nl__im__105);
#line 841
goto label_439;
#line 841
label_327:
;
#line 841
c_rt_lib0move(&___nl__im__106,___get_global_string_const(196));
#line 841
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__106);
#line 841
c_rt_lib0clear(&___nl__im__106);
#line 841
___nl__bool__36 = !___nl__bool__36;
#line 841
if(___nl__bool__36){ goto label_339;}
#line 842
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 842
c_rt_lib0copy(&___nl__im__108, ___nl__im__107);
#line 842
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(96), ___nl__im__108);
#line 842
c_rt_lib0clear(&___nl__im__107);
#line 842
c_rt_lib0clear(&___nl__im__108);
#line 843
goto label_439;
#line 843
label_339:
;
#line 843
c_rt_lib0move(&___nl__im__109,___get_global_string_const(197));
#line 843
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__109);
#line 843
c_rt_lib0clear(&___nl__im__109);
#line 843
___nl__bool__36 = !___nl__bool__36;
#line 843
if(___nl__bool__36){ goto label_351;}
#line 844
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_string_const(84)));
#line 844
c_rt_lib0copy(&___nl__im__111, ___nl__im__110);
#line 844
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(96), ___nl__im__111);
#line 844
c_rt_lib0clear(&___nl__im__110);
#line 844
c_rt_lib0clear(&___nl__im__111);
#line 845
goto label_439;
#line 845
label_351:
;
#line 845
c_rt_lib0move(&___nl__im__112,___get_global_string_const(198));
#line 845
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__112);
#line 845
c_rt_lib0clear(&___nl__im__112);
#line 845
___nl__bool__36 = !___nl__bool__36;
#line 845
if(___nl__bool__36){ goto label_363;}
#line 846
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 846
c_rt_lib0copy(&___nl__im__114, ___nl__im__113);
#line 846
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(96), ___nl__im__114);
#line 846
c_rt_lib0clear(&___nl__im__113);
#line 846
c_rt_lib0clear(&___nl__im__114);
#line 847
goto label_439;
#line 847
label_363:
;
#line 847
c_rt_lib0move(&___nl__im__115,___get_global_string_const(199));
#line 847
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__115);
#line 847
c_rt_lib0clear(&___nl__im__115);
#line 847
___nl__bool__36 = !___nl__bool__36;
#line 847
if(___nl__bool__36){ goto label_375;}
#line 848
c_rt_lib0move(&___nl__im__116, c_rt_lib0ov_mk_none(___get_global_string_const(92)));
#line 848
c_rt_lib0copy(&___nl__im__117, ___nl__im__116);
#line 848
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__117);
#line 848
c_rt_lib0clear(&___nl__im__116);
#line 848
c_rt_lib0clear(&___nl__im__117);
#line 849
goto label_439;
#line 849
label_375:
;
#line 849
c_rt_lib0move(&___nl__im__118,___get_global_string_const(101));
#line 849
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__118);
#line 849
c_rt_lib0clear(&___nl__im__118);
#line 849
___nl__bool__36 = !___nl__bool__36;
#line 849
if(___nl__bool__36){ goto label_387;}
#line 850
___nl__bool__119 = true;
#line 850
c_rt_lib0move(&___nl__im__120, c_rt_lib0bool_to_nl_native(___nl__bool__119));
#line 850
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(101), ___nl__im__120);
#line 850
//clear ___nl__bool__119;
#line 850
c_rt_lib0clear(&___nl__im__120);
#line 851
goto label_439;
#line 851
label_387:
;
#line 851
c_rt_lib0move(&___nl__im__121,___get_global_string_const(102));
#line 851
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__121);
#line 851
c_rt_lib0clear(&___nl__im__121);
#line 851
___nl__bool__36 = !___nl__bool__36;
#line 851
if(___nl__bool__36){ goto label_399;}
#line 852
___nl__bool__122 = true;
#line 852
c_rt_lib0move(&___nl__im__123, c_rt_lib0bool_to_nl_native(___nl__bool__122));
#line 852
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__123);
#line 852
//clear ___nl__bool__122;
#line 852
c_rt_lib0clear(&___nl__im__123);
#line 853
goto label_439;
#line 853
label_399:
;
#line 853
c_rt_lib0move(&___nl__im__124,___get_global_string_const(64));
#line 853
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__124);
#line 853
c_rt_lib0clear(&___nl__im__124);
#line 853
___nl__bool__36 = !___nl__bool__36;
#line 853
if(___nl__bool__36){ goto label_432;}
#line 854
___nl__int__125 = 1;
#line 854
___nl__int__17 = ___nl__int__17 + ___nl__int__125;
#line 854
//clear ___nl__int__125;
#line 855
___nl__int__127 = c_rt_lib0array_len(___nl__im__0);
#line 855
___nl__int__128 = ___nl__int__17 < ___nl__int__127;
#line 855
___nl__bool__126 = ___nl__int__128;
#line 855
//clear ___nl__int__127;
#line 855
//clear ___nl__int__128;
#line 855
___nl__bool__126 = !___nl__bool__126;
#line 855
___nl__bool__126 = !___nl__bool__126;
#line 855
if(___nl__bool__126){ goto label_419;}
#line 855
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_mk(0));
#line 855
nl_die_arg(___nl__im__129);
#line 855
goto label_419;
#line 855
label_419:
;
#line 855
//clear ___nl__bool__126;
#line 855
c_rt_lib0clear(&___nl__im__129);
#line 856
c_rt_lib0move(&___nl__im__132, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 856
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_mk(1, ___get_global_string_const(64), ___nl__im__132));
#line 856
c_rt_lib0clear(&___nl__im__132);
#line 856
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__131));
#line 856
c_rt_lib0clear(&___nl__im__131);
#line 856
c_rt_lib0copy(&___nl__im__133, ___nl__im__130);
#line 856
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__133);
#line 856
c_rt_lib0clear(&___nl__im__130);
#line 856
c_rt_lib0clear(&___nl__im__133);
#line 857
goto label_439;
#line 857
label_432:
;
#line 858
c_rt_lib0move(&___nl__im__135,___get_global_string_const(200));
#line 858
c_rt_lib0move(&___nl__im__134, c_rt_lib0concat_new(___nl__im__135, ___nl__im__21));
#line 858
c_rt_lib0clear(&___nl__im__135);
#line 858
c_rt_lib0delete(c_fe_lib0print(___nl__im__134));
#line 858
c_rt_lib0clear(&___nl__im__134);
#line 859
goto label_439;
#line 859
label_439:
;
#line 859
//clear ___nl__bool__36;
#line 860
goto label_464;
#line 860
label_442:
;
#line 861
___nl__bool__136 = ___nl__bool__15;
#line 861
___nl__bool__136 = !___nl__bool__136;
#line 861
___nl__bool__136 = !___nl__bool__136;
#line 861
if(___nl__bool__136){ goto label_453;}
#line 861
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(0));
#line 861
c_rt_lib0copy(&___nl__im__138, ___nl__im__137);
#line 861
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(93), ___nl__im__138);
#line 861
c_rt_lib0clear(&___nl__im__137);
#line 861
c_rt_lib0clear(&___nl__im__138);
#line 861
goto label_453;
#line 861
label_453:
;
#line 861
//clear ___nl__bool__136;
#line 862
c_rt_lib0move(&___nl__im__139,___get_global_string_const(93));
#line 862
c_rt_lib0move(&___nl__im__139, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__139));
#line 862
c_rt_lib0delete(array0push(&___nl__im__139, ___nl__im__21));
#line 862
c_rt_lib0move(&___nl__string__140,___get_global_string_const(93));
#line 862
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__140, ___nl__im__139));
#line 862
c_rt_lib0clear(&___nl__im__139);
#line 862
c_rt_lib0clear(&___nl__string__140);
#line 863
___nl__bool__15 = true;
#line 864
goto label_464;
#line 864
label_464:
;
#line 864
//clear ___nl__bool__22;
#line 864
c_rt_lib0clear(&___nl__im__31);
#line 864
c_rt_lib0clear(&___nl__im__21);
#line 798
___nl__int__141 = 1;
#line 798
___nl__int__17 = ___nl__int__17 + ___nl__int__141;
#line 798
//clear ___nl__int__141;
#line 865
goto label_30;
#line 865
label_472:
;
#line 866
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(94)));
#line 866
c_rt_lib0move(&___nl__im__144,___get_global_string_const(37));
#line 866
___nl__bool__142 = c_rt_lib0eq(___nl__im__143, ___nl__im__144);
#line 866
c_rt_lib0clear(&___nl__im__143);
#line 866
c_rt_lib0clear(&___nl__im__144);
#line 866
___nl__bool__142 = !___nl__bool__142;
#line 866
if(___nl__bool__142){ goto label_492;}
#line 867
c_rt_lib0move(&___nl__im__147,___get_global_string_const(201));
#line 867
c_rt_lib0move(&___nl__im__146, c_rt_lib0concat_new(___nl__im__147, ___nl__im__16));
#line 867
c_rt_lib0clear(&___nl__im__147);
#line 867
c_rt_lib0move(&___nl__im__148,___get_global_string_const(106));
#line 867
c_rt_lib0move(&___nl__im__145, c_rt_lib0concat_new(___nl__im__146, ___nl__im__148));
#line 867
c_rt_lib0clear(&___nl__im__146);
#line 867
c_rt_lib0clear(&___nl__im__148);
#line 867
c_rt_lib0copy(&___nl__im__149, ___nl__im__145);
#line 867
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(94), ___nl__im__149);
#line 867
c_rt_lib0clear(&___nl__im__145);
#line 867
c_rt_lib0clear(&___nl__im__149);
#line 868
goto label_492;
#line 868
label_492:
;
#line 868
//clear ___nl__bool__142;
#line 869
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(95)));
#line 869
___nl__bool__150 = c_rt_lib0priv_is(___nl__im__151, ___get_global_string_const(76));
#line 869
c_rt_lib0clear(&___nl__im__151);
#line 869
___nl__bool__150 = !___nl__bool__150;
#line 869
if(___nl__bool__150){ goto label_511;}
#line 869
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(94)));
#line 869
c_rt_lib0move(&___nl__im__155, compiler_priv0get_default_deref_file());
#line 869
c_rt_lib0move(&___nl__im__153, c_rt_lib0concat_new(___nl__im__154, ___nl__im__155));
#line 869
c_rt_lib0clear(&___nl__im__154);
#line 869
c_rt_lib0clear(&___nl__im__155);
#line 869
c_rt_lib0move(&___nl__im__152, c_rt_lib0ov_mk_arg(___get_global_string_const(76), ___nl__im__153));
#line 869
c_rt_lib0clear(&___nl__im__153);
#line 869
c_rt_lib0copy(&___nl__im__156, ___nl__im__152);
#line 869
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(95), ___nl__im__156);
#line 869
c_rt_lib0clear(&___nl__im__152);
#line 869
c_rt_lib0clear(&___nl__im__156);
#line 869
goto label_511;
#line 869
label_511:
;
#line 869
//clear ___nl__bool__150;
#line 870
c_rt_lib0clear(&___nl__im__0);
#line 870
//clear ___nl__bool__15;
#line 870
c_rt_lib0clear(&___nl__im__16);
#line 870
//clear ___nl__int__17;
#line 870
//clear ___nl__bool__18;
#line 870
c_rt_lib0clear(&___nl__im__21);
#line 870
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
