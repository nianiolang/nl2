
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
compiler0js_opts0type compiler_priv0get_default_js_opts();


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
#line 73
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 74
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0js_opts0ptr, ___get_global_string_const(54), ___get_global_string_const(63)));
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 76
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 77
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(64), ___nl__im__2, ___get_global_string_const(65), ___nl__im__3, ___get_global_string_const(66), ___nl__im__4, ___get_global_string_const(67), ___nl__im__5, ___get_global_string_const(68), ___nl__im__6, ___get_global_string_const(69), ___nl__im__7));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__3);
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0clear(&___nl__im__5);
#line 78
c_rt_lib0clear(&___nl__im__6);
#line 78
c_rt_lib0clear(&___nl__im__7);
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

ImmT  compiler0js_opts0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0js_opts");
ImmT  res = compiler0js_opts();
return res;
}
ImmT compiler0js_opts(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(8);
}
ImmT compiler0js_opts0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 84
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 85
c_rt_lib0move(&___nl__im__3, ptd0bool());
#line 85
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(70), ___nl__im__2, ___get_global_string_const(71), ___nl__im__3));
#line 85
c_rt_lib0clear(&___nl__im__2);
#line 85
c_rt_lib0clear(&___nl__im__3);
#line 85
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 85
c_rt_lib0clear(&___nl__im__1);
#line 85
return ___nl__im__0;
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
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
return compiler_priv0__const__sing(9);
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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 91
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 92
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 92
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 92
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__5, ___get_global_string_const(72), ___nl__im__6));
#line 92
c_rt_lib0clear(&___nl__im__5);
#line 92
c_rt_lib0clear(&___nl__im__6);
#line 92
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 92
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 94
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 96
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 97
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 98
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 99
c_rt_lib0move(&___nl__im__14, ptd0string());
#line 100
c_rt_lib0move(&___nl__im__15, ptd0string());
#line 100
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__11, ___get_global_string_const(73), ___nl__im__12, ___get_global_string_const(74), ___nl__im__13, ___get_global_string_const(75), ___nl__im__14, ___get_global_string_const(67), ___nl__im__15));
#line 100
c_rt_lib0clear(&___nl__im__11);
#line 100
c_rt_lib0clear(&___nl__im__12);
#line 100
c_rt_lib0clear(&___nl__im__13);
#line 100
c_rt_lib0clear(&___nl__im__14);
#line 100
c_rt_lib0clear(&___nl__im__15);
#line 100
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 100
c_rt_lib0clear(&___nl__im__10);
#line 101
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 102
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 102
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(7, ___get_global_string_const(64), ___nl__im__2, ___get_global_string_const(65), ___nl__im__3, ___get_global_string_const(67), ___nl__im__7, ___get_global_string_const(68), ___nl__im__8, ___get_global_string_const(66), ___nl__im__9, ___get_global_string_const(76), ___nl__im__16, ___get_global_string_const(69), ___nl__im__17));
#line 102
c_rt_lib0clear(&___nl__im__2);
#line 102
c_rt_lib0clear(&___nl__im__3);
#line 102
c_rt_lib0clear(&___nl__im__7);
#line 102
c_rt_lib0clear(&___nl__im__8);
#line 102
c_rt_lib0clear(&___nl__im__9);
#line 102
c_rt_lib0clear(&___nl__im__16);
#line 102
c_rt_lib0clear(&___nl__im__17);
#line 102
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
return ___nl__im__0;
#line 102
c_rt_lib0clear(&___nl__im__0);
#line 102
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
return compiler_priv0__const__sing(10);
}
ImmT compiler0module_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 107
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 107
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_string_const(54), ___get_global_string_const(77)));
#line 107
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 107
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__3, ___get_global_string_const(79), ___nl__im__4));
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 107
c_rt_lib0clear(&___nl__im__1);
#line 107
return ___nl__im__0;
#line 107
c_rt_lib0clear(&___nl__im__0);
#line 107
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
return compiler_priv0__const__sing(11);
}
ImmT compiler0deref_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 111
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 111
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 111
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(80), ___nl__im__2, ___get_global_string_const(81), ___nl__im__3));
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
c_rt_lib0clear(&___nl__im__3);
#line 111
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
return ___nl__im__0;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
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
return compiler_priv0__const__sing(12);
}
ImmT compiler0try_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 115
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 115
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 115
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(82), ___nl__im__2, ___get_global_string_const(83), ___nl__im__3));
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
return ___nl__im__0;
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
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
return compiler_priv0__const__sing(13);
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
#line 120
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 120
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 121
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 122
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_string_const(54), ___get_global_string_const(84)));
#line 122
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__5));
#line 124
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 125
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 126
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 127
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 128
c_rt_lib0move(&___nl__im__12, ptd0none());
#line 128
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(85), ___nl__im__8, ___get_global_string_const(86), ___nl__im__9, ___get_global_string_const(87), ___nl__im__10, ___get_global_string_const(88), ___nl__im__11, ___get_global_string_const(89), ___nl__im__12));
#line 128
c_rt_lib0clear(&___nl__im__8);
#line 128
c_rt_lib0clear(&___nl__im__9);
#line 128
c_rt_lib0clear(&___nl__im__10);
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 128
c_rt_lib0clear(&___nl__im__12);
#line 128
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 128
c_rt_lib0clear(&___nl__im__7);
#line 130
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 131
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__18, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 131
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(4, ___get_global_string_const(90), ___nl__im__16, ___get_global_string_const(91), ___nl__im__17, ___get_global_string_const(92), ___nl__im__18, ___get_global_string_const(93), ___nl__im__19));
#line 131
c_rt_lib0clear(&___nl__im__16);
#line 131
c_rt_lib0clear(&___nl__im__17);
#line 131
c_rt_lib0clear(&___nl__im__18);
#line 131
c_rt_lib0clear(&___nl__im__19);
#line 131
c_rt_lib0move(&___nl__im__14, ptd0var(___nl__im__15));
#line 131
c_rt_lib0clear(&___nl__im__15);
#line 132
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_string_const(54), ___get_global_string_const(94)));
#line 132
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 133
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 133
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 133
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(95), ___nl__im__23, ___get_global_string_const(96), ___nl__im__24));
#line 133
c_rt_lib0clear(&___nl__im__23);
#line 133
c_rt_lib0clear(&___nl__im__24);
#line 133
c_rt_lib0move(&___nl__im__21, ptd0var(___nl__im__22));
#line 133
c_rt_lib0clear(&___nl__im__22);
#line 134
c_rt_lib0move(&___nl__im__25, ptd0bool());
#line 135
c_rt_lib0move(&___nl__im__26, ptd0bool());
#line 135
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(97), ___nl__im__2, ___get_global_string_const(98), ___nl__im__4, ___get_global_string_const(99), ___nl__im__5, ___get_global_string_const(100), ___nl__im__6, ___get_global_string_const(101), ___nl__im__13, ___get_global_string_const(102), ___nl__im__14, ___get_global_string_const(103), ___nl__im__20, ___get_global_string_const(104), ___nl__im__21, ___get_global_string_const(105), ___nl__im__25, ___get_global_string_const(106), ___nl__im__26));
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__13);
#line 135
c_rt_lib0clear(&___nl__im__14);
#line 135
c_rt_lib0clear(&___nl__im__20);
#line 135
c_rt_lib0clear(&___nl__im__21);
#line 135
c_rt_lib0clear(&___nl__im__25);
#line 135
c_rt_lib0clear(&___nl__im__26);
#line 135
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
return ___nl__im__0;
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
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
return compiler_priv0__const__sing(14);
}
ImmT compiler0file_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 140
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 140
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 140
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__2, ___get_global_string_const(82), ___nl__im__3));
#line 140
c_rt_lib0clear(&___nl__im__2);
#line 140
c_rt_lib0clear(&___nl__im__3);
#line 140
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
return ___nl__im__0;
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
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
#line 144
c_rt_lib0move(&___nl__im__1, compiler_priv0parse_command_line_args(___nl__im__0));
#line 145
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 145
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__2));
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 146
___nl__int__3 = 0;
#line 147
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 147
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(90));
#line 147
c_rt_lib0clear(&___nl__im__5);
#line 147
___nl__bool__4 = !___nl__bool__4;
#line 147
if(___nl__bool__4){ goto label_15;}
#line 148
c_rt_lib0move(&___nl__im__6,___get_global_string_const(107));
#line 148
c_rt_lib0delete(c_fe_lib0print(___nl__im__6));
#line 148
c_rt_lib0clear(&___nl__im__6);
#line 149
___nl__int__3 = compiler_priv0compile_strict_file(___nl__im__1);
#line 150
goto label_48;
#line 150
label_15:
;
#line 150
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 150
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(92));
#line 150
c_rt_lib0clear(&___nl__im__7);
#line 150
if(___nl__bool__4){ goto label_23;}
#line 150
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 150
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(93));
#line 150
c_rt_lib0clear(&___nl__im__8);
#line 150
label_23:
;
#line 150
___nl__bool__4 = !___nl__bool__4;
#line 150
if(___nl__bool__4){ goto label_32;}
#line 151
c_rt_lib0move(&___nl__im__9,___get_global_string_const(108));
#line 151
c_rt_lib0delete(c_fe_lib0print(___nl__im__9));
#line 151
c_rt_lib0clear(&___nl__im__9);
#line 152
c_rt_lib0delete(compiler_priv0compile_ide(___nl__im__1));
#line 153
___nl__int__3 = 0;
#line 154
goto label_48;
#line 154
label_32:
;
#line 154
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 154
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(91));
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
___nl__bool__4 = !___nl__bool__4;
#line 154
if(___nl__bool__4){ goto label_44;}
#line 155
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 155
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 155
___nl__int__3 = interpreter_wrapper0exec_interpreter(___nl__im__11, ___nl__im__12);
#line 155
c_rt_lib0clear(&___nl__im__11);
#line 155
c_rt_lib0clear(&___nl__im__12);
#line 156
goto label_48;
#line 156
label_44:
;
#line 157
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 157
nl_die_arg(___nl__im__13);
#line 158
goto label_48;
#line 158
label_48:
;
#line 158
//clear ___nl__bool__4;
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 159
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(106)));
#line 159
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 159
c_rt_lib0clear(&___nl__im__15);
#line 159
___nl__bool__14 = !___nl__bool__14;
#line 159
if(___nl__bool__14){ goto label_66;}
#line 160
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 160
c_rt_lib0move(&___nl__im__18,___get_global_string_const(109));
#line 160
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 160
c_rt_lib0clear(&___nl__im__17);
#line 160
c_rt_lib0clear(&___nl__im__18);
#line 161
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__16));
#line 162
c_rt_lib0move(&___nl__im__19, compiler_priv0get_profile_file_name(___nl__im__16));
#line 162
c_rt_lib0delete(profile0save(___nl__im__19));
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 163
goto label_66;
#line 163
label_66:
;
#line 163
//clear ___nl__bool__14;
#line 163
c_rt_lib0clear(&___nl__im__16);
#line 164
c_rt_lib0clear(&___nl__im__0);
#line 164
c_rt_lib0clear(&___nl__im__1);
#line 164
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
#line 168
c_rt_lib0move(&___nl__im__2,___get_global_string_const(110));
#line 168
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 168
c_rt_lib0clear(&___nl__im__2);
#line 169
c_rt_lib0move(&___nl__im__4, nsystem0time());
#line 169
c_rt_lib0move(&___nl__im__3, nsystem0localtime(___nl__im__4));
#line 169
c_rt_lib0clear(&___nl__im__4);
#line 170
c_rt_lib0move(&___nl__im__5, nsystem0get_pid());
#line 171
c_rt_lib0move(&___nl__im__6, nsystem0time_microsec());
#line 172
___nl__int__7 = 5;
#line 172
___nl__int__8 = 0;
#line 172
___nl__int__9 = 1;
#line 172
label_11:
;
#line 172
___nl__bool__10 = ___nl__int__8 >= ___nl__int__7;
#line 172
if(___nl__bool__10){ goto label_27;}
#line 173
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__3, ___nl__int__8));
#line 173
___nl__int__13 = 2;
#line 173
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 173
c_rt_lib0move(&___nl__im__11, string_utils0int2str(___nl__im__12, ___nl__im__14));
#line 173
c_rt_lib0clear(&___nl__im__12);
#line 173
//clear ___nl__int__13;
#line 173
c_rt_lib0clear(&___nl__im__14);
#line 173
c_rt_lib0copy(&___nl__im__15, ___nl__im__11);
#line 173
c_rt_lib0array_set(&___nl__im__3, ___nl__int__8, ___nl__im__15);
#line 173
c_rt_lib0clear(&___nl__im__11);
#line 173
c_rt_lib0clear(&___nl__im__15);
#line 174
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 174
goto label_11;
#line 174
label_27:
;
#line 175
___nl__int__19 = 1;
#line 175
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 175
//clear ___nl__int__19;
#line 175
___nl__int__20 = 1000;
#line 175
___nl__int__21 = getIntFromImm(___nl__im__18);
#line 175
___nl__int__17 = ___nl__int__21 / ___nl__int__20;
#line 175
c_rt_lib0clear(&___nl__im__18);
#line 175
//clear ___nl__int__20;
#line 175
//clear ___nl__int__21;
#line 175
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__17));
#line 175
___nl__int__23 = 3;
#line 175
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__23));
#line 175
c_rt_lib0move(&___nl__im__16, string_utils0int2str(___nl__im__22, ___nl__im__24));
#line 175
//clear ___nl__int__17;
#line 175
c_rt_lib0clear(&___nl__im__22);
#line 175
//clear ___nl__int__23;
#line 175
c_rt_lib0clear(&___nl__im__24);
#line 176
c_rt_lib0move(&___nl__im__39,___get_global_string_const(111));
#line 176
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__1, ___nl__im__39));
#line 176
c_rt_lib0clear(&___nl__im__39);
#line 176
___nl__int__41 = 5;
#line 176
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__3, ___nl__int__41));
#line 176
//clear ___nl__int__41;
#line 176
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__40));
#line 176
c_rt_lib0clear(&___nl__im__38);
#line 176
c_rt_lib0clear(&___nl__im__40);
#line 176
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 176
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__42));
#line 176
c_rt_lib0clear(&___nl__im__37);
#line 176
c_rt_lib0clear(&___nl__im__42);
#line 176
___nl__int__44 = 4;
#line 176
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__3, ___nl__int__44));
#line 176
//clear ___nl__int__44;
#line 176
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 176
c_rt_lib0clear(&___nl__im__36);
#line 176
c_rt_lib0clear(&___nl__im__43);
#line 176
c_rt_lib0move(&___nl__im__45,___get_global_string_const(36));
#line 176
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__45));
#line 176
c_rt_lib0clear(&___nl__im__35);
#line 176
c_rt_lib0clear(&___nl__im__45);
#line 176
___nl__int__47 = 3;
#line 176
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__3, ___nl__int__47));
#line 176
//clear ___nl__int__47;
#line 176
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__46));
#line 176
c_rt_lib0clear(&___nl__im__34);
#line 176
c_rt_lib0clear(&___nl__im__46);
#line 176
c_rt_lib0move(&___nl__im__48,___get_global_string_const(112));
#line 176
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__48));
#line 176
c_rt_lib0clear(&___nl__im__33);
#line 176
c_rt_lib0clear(&___nl__im__48);
#line 176
___nl__int__50 = 2;
#line 176
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__3, ___nl__int__50));
#line 176
//clear ___nl__int__50;
#line 176
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__49));
#line 176
c_rt_lib0clear(&___nl__im__32);
#line 176
c_rt_lib0clear(&___nl__im__49);
#line 176
___nl__int__52 = 1;
#line 176
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__3, ___nl__int__52));
#line 176
//clear ___nl__int__52;
#line 176
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__51));
#line 176
c_rt_lib0clear(&___nl__im__31);
#line 176
c_rt_lib0clear(&___nl__im__51);
#line 176
___nl__int__54 = 0;
#line 176
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__3, ___nl__int__54));
#line 176
//clear ___nl__int__54;
#line 176
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__53));
#line 176
c_rt_lib0clear(&___nl__im__30);
#line 176
c_rt_lib0clear(&___nl__im__53);
#line 176
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__16));
#line 176
c_rt_lib0clear(&___nl__im__29);
#line 176
c_rt_lib0move(&___nl__im__55,___get_global_string_const(112));
#line 176
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__55));
#line 176
c_rt_lib0clear(&___nl__im__28);
#line 176
c_rt_lib0clear(&___nl__im__55);
#line 176
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__5));
#line 176
c_rt_lib0clear(&___nl__im__27);
#line 177
c_rt_lib0move(&___nl__im__56,___get_global_string_const(113));
#line 177
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__56));
#line 177
c_rt_lib0clear(&___nl__im__26);
#line 177
c_rt_lib0clear(&___nl__im__56);
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
c_rt_lib0clear(&___nl__im__1);
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
//clear ___nl__int__7;
#line 177
//clear ___nl__int__8;
#line 177
//clear ___nl__int__9;
#line 177
//clear ___nl__bool__10;
#line 177
c_rt_lib0clear(&___nl__im__16);
#line 177
return ___nl__im__25;
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
c_rt_lib0clear(&___nl__im__1);
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
//clear ___nl__int__7;
#line 177
//clear ___nl__int__8;
#line 177
//clear ___nl__int__9;
#line 177
//clear ___nl__bool__10;
#line 177
c_rt_lib0clear(&___nl__im__16);
#line 177
c_rt_lib0clear(&___nl__im__25);
#line 177
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
#line 181
___nl__int__2 = string0length(___nl__im__0);
#line 181
___nl__int__3 = 1;
#line 181
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 181
//clear ___nl__int__2;
#line 181
//clear ___nl__int__3;
#line 182
label_5:
;
#line 182
___nl__int__7 = 0;
#line 182
___nl__bool__4 = ___nl__int__1 >= ___nl__int__7;
#line 182
//clear ___nl__int__7;
#line 182
___nl__bool__6 = !___nl__bool__4;
#line 182
if(___nl__bool__6){ goto label_18;}
#line 182
___nl__int__9 = 1;
#line 182
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 182
//clear ___nl__int__9;
#line 182
c_rt_lib0move(&___nl__im__10,___get_global_string_const(110));
#line 182
___nl__bool__4 = c_rt_lib0ne(___nl__im__8, ___nl__im__10);
#line 182
c_rt_lib0clear(&___nl__im__8);
#line 182
c_rt_lib0clear(&___nl__im__10);
#line 182
label_18:
;
#line 182
//clear ___nl__bool__6;
#line 182
___nl__bool__5 = !___nl__bool__4;
#line 182
if(___nl__bool__5){ goto label_29;}
#line 182
___nl__int__12 = 1;
#line 182
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__12));
#line 182
//clear ___nl__int__12;
#line 182
c_rt_lib0move(&___nl__im__13,___get_global_string_const(114));
#line 182
___nl__bool__4 = c_rt_lib0ne(___nl__im__11, ___nl__im__13);
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__13);
#line 182
label_29:
;
#line 182
//clear ___nl__bool__5;
#line 182
___nl__bool__4 = !___nl__bool__4;
#line 182
if(___nl__bool__4){ goto label_54;}
#line 183
___nl__int__16 = 1;
#line 183
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__16));
#line 183
//clear ___nl__int__16;
#line 183
c_rt_lib0move(&___nl__im__17,___get_global_string_const(115));
#line 183
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__17);
#line 183
c_rt_lib0clear(&___nl__im__15);
#line 183
c_rt_lib0clear(&___nl__im__17);
#line 183
___nl__bool__14 = !___nl__bool__14;
#line 183
if(___nl__bool__14){ goto label_48;}
#line 184
___nl__int__18 = 1;
#line 184
___nl__int__1 = ___nl__int__1 - ___nl__int__18;
#line 184
//clear ___nl__int__18;
#line 185
//clear ___nl__bool__14;
#line 185
goto label_54;
#line 186
goto label_48;
#line 186
label_48:
;
#line 186
//clear ___nl__bool__14;
#line 187
___nl__int__19 = 1;
#line 187
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 187
//clear ___nl__int__19;
#line 188
goto label_5;
#line 188
label_54:
;
#line 189
c_rt_lib0move(&___nl__im__20,___get_global_string_const(36));
#line 190
label_56:
;
#line 190
___nl__int__24 = 0;
#line 190
___nl__bool__21 = ___nl__int__1 >= ___nl__int__24;
#line 190
//clear ___nl__int__24;
#line 190
___nl__bool__23 = !___nl__bool__21;
#line 190
if(___nl__bool__23){ goto label_69;}
#line 190
___nl__int__26 = 1;
#line 190
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__26));
#line 190
//clear ___nl__int__26;
#line 190
c_rt_lib0move(&___nl__im__27,___get_global_string_const(110));
#line 190
___nl__bool__21 = c_rt_lib0ne(___nl__im__25, ___nl__im__27);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 190
c_rt_lib0clear(&___nl__im__27);
#line 190
label_69:
;
#line 190
//clear ___nl__bool__23;
#line 190
___nl__bool__22 = !___nl__bool__21;
#line 190
if(___nl__bool__22){ goto label_80;}
#line 190
___nl__int__29 = 1;
#line 190
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__29));
#line 190
//clear ___nl__int__29;
#line 190
c_rt_lib0move(&___nl__im__30,___get_global_string_const(114));
#line 190
___nl__bool__21 = c_rt_lib0ne(___nl__im__28, ___nl__im__30);
#line 190
c_rt_lib0clear(&___nl__im__28);
#line 190
c_rt_lib0clear(&___nl__im__30);
#line 190
label_80:
;
#line 190
//clear ___nl__bool__22;
#line 190
___nl__bool__21 = !___nl__bool__21;
#line 190
if(___nl__bool__21){ goto label_93;}
#line 191
___nl__int__32 = 1;
#line 191
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__32));
#line 191
//clear ___nl__int__32;
#line 191
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__31, ___nl__im__20));
#line 191
c_rt_lib0clear(&___nl__im__31);
#line 192
___nl__int__33 = 1;
#line 192
___nl__int__1 = ___nl__int__1 - ___nl__int__33;
#line 192
//clear ___nl__int__33;
#line 193
goto label_56;
#line 193
label_93:
;
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
//clear ___nl__int__1;
#line 194
//clear ___nl__bool__4;
#line 194
//clear ___nl__bool__21;
#line 194
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
#line 198
___nl__int__3 = string0length(___nl__im__1);
#line 198
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 198
//clear ___nl__int__3;
#line 199
___nl__int__5 = string0length(___nl__im__0);
#line 199
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 199
___nl__bool__4 = ___nl__int__5 <= ___nl__int__6;
#line 199
//clear ___nl__int__5;
#line 199
//clear ___nl__int__6;
#line 199
___nl__bool__4 = !___nl__bool__4;
#line 199
if(___nl__bool__4){ goto label_17;}
#line 199
___nl__bool__7 = false;
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
//clear ___nl__bool__4;
#line 199
return ___nl__bool__7;
#line 199
goto label_17;
#line 199
label_17:
;
#line 199
//clear ___nl__bool__4;
#line 199
//clear ___nl__bool__7;
#line 200
___nl__int__9 = string0length(___nl__im__0);
#line 200
___nl__int__10 = getIntFromImm(___nl__im__2);
#line 200
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 200
//clear ___nl__int__9;
#line 200
//clear ___nl__int__10;
#line 200
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 200
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__11));
#line 200
//clear ___nl__int__8;
#line 200
//clear ___nl__int__11;
#line 201
___nl__bool__12 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
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
#line 205
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(64));
#line 205
if(___nl__bool__1){ goto label_15;}
#line 207
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(65));
#line 207
if(___nl__bool__1){ goto label_22;}
#line 209
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(66));
#line 209
if(___nl__bool__1){ goto label_30;}
#line 211
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(68));
#line 211
if(___nl__bool__1){ goto label_43;}
#line 213
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(67));
#line 213
if(___nl__bool__1){ goto label_55;}
#line 215
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(69));
#line 215
if(___nl__bool__1){ goto label_68;}
#line 215
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 215
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 215
nl_die_arg(___nl__im__2);
#line 205
label_15:
;
#line 206
c_rt_lib0move(&___nl__im__3,___get_global_string_const(116));
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
//clear ___nl__bool__1;
#line 206
c_rt_lib0clear(&___nl__im__2);
#line 206
return ___nl__im__3;
#line 207
goto label_82;
#line 207
label_22:
;
#line 208
c_rt_lib0move(&___nl__im__4,___get_global_string_const(117));
#line 208
c_rt_lib0clear(&___nl__im__0);
#line 208
//clear ___nl__bool__1;
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
return ___nl__im__4;
#line 209
goto label_82;
#line 209
label_30:
;
#line 209
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(66)));
#line 209
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 210
c_rt_lib0move(&___nl__im__7,___get_global_string_const(118));
#line 210
c_rt_lib0clear(&___nl__im__0);
#line 210
//clear ___nl__bool__1;
#line 210
c_rt_lib0clear(&___nl__im__2);
#line 210
c_rt_lib0clear(&___nl__im__3);
#line 210
c_rt_lib0clear(&___nl__im__4);
#line 210
c_rt_lib0clear(&___nl__im__5);
#line 210
c_rt_lib0clear(&___nl__im__6);
#line 210
return ___nl__im__7;
#line 211
goto label_82;
#line 211
label_43:
;
#line 212
c_rt_lib0move(&___nl__im__8,___get_global_string_const(119));
#line 212
c_rt_lib0clear(&___nl__im__0);
#line 212
//clear ___nl__bool__1;
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
c_rt_lib0clear(&___nl__im__5);
#line 212
c_rt_lib0clear(&___nl__im__6);
#line 212
c_rt_lib0clear(&___nl__im__7);
#line 212
return ___nl__im__8;
#line 213
goto label_82;
#line 213
label_55:
;
#line 214
c_rt_lib0move(&___nl__im__9,___get_global_string_const(120));
#line 214
c_rt_lib0clear(&___nl__im__0);
#line 214
//clear ___nl__bool__1;
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
c_rt_lib0clear(&___nl__im__3);
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
c_rt_lib0clear(&___nl__im__5);
#line 214
c_rt_lib0clear(&___nl__im__6);
#line 214
c_rt_lib0clear(&___nl__im__7);
#line 214
c_rt_lib0clear(&___nl__im__8);
#line 214
return ___nl__im__9;
#line 215
goto label_82;
#line 215
label_68:
;
#line 216
c_rt_lib0move(&___nl__im__10,___get_global_string_const(121));
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
//clear ___nl__bool__1;
#line 216
c_rt_lib0clear(&___nl__im__2);
#line 216
c_rt_lib0clear(&___nl__im__3);
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 216
c_rt_lib0clear(&___nl__im__5);
#line 216
c_rt_lib0clear(&___nl__im__6);
#line 216
c_rt_lib0clear(&___nl__im__7);
#line 216
c_rt_lib0clear(&___nl__im__8);
#line 216
c_rt_lib0clear(&___nl__im__9);
#line 216
return ___nl__im__10;
#line 217
goto label_82;
#line 217
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
#line 221
c_rt_lib0move(&___nl__im__3,___get_global_string_const(115));
#line 221
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
___nl__bool__2 = !___nl__bool__2;
#line 221
if(___nl__bool__2){ goto label_10;}
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
//clear ___nl__bool__2;
#line 221
return NULL;
#line 221
goto label_10;
#line 221
label_10:
;
#line 221
//clear ___nl__bool__2;
#line 222
c_rt_lib0move(&___nl__im__4, compiler_priv0get_dir(___nl__im__1));
#line 222
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__0, ___nl__im__4));
#line 222
c_rt_lib0clear(&___nl__im__4);
#line 223
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__0, ___nl__im__1));
#line 223
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__5));
#line 223
c_rt_lib0clear(&___nl__im__5);
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
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
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
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
#line 228
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 228
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 228
c_rt_lib0clear(&___nl__im__4);
#line 229
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(122)));
#line 230
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(103)));
#line 230
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(64));
#line 230
if(___nl__bool__7){ goto label_20;}
#line 232
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(65));
#line 232
if(___nl__bool__7){ goto label_38;}
#line 234
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(66));
#line 234
if(___nl__bool__7){ goto label_63;}
#line 243
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(67));
#line 243
if(___nl__bool__7){ goto label_115;}
#line 251
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(68));
#line 251
if(___nl__bool__7){ goto label_176;}
#line 253
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(69));
#line 253
if(___nl__bool__7){ goto label_206;}
#line 253
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 253
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 253
nl_die_arg(___nl__im__8);
#line 230
label_20:
;
#line 231
c_rt_lib0move(&___nl__im__12,___get_global_string_const(116));
#line 231
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 231
c_rt_lib0clear(&___nl__im__12);
#line 231
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(64), ___nl__im__11));
#line 231
c_rt_lib0clear(&___nl__im__11);
#line 231
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__10));
#line 231
c_rt_lib0clear(&___nl__im__10);
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
return ___nl__im__9;
#line 232
goto label_233;
#line 232
label_38:
;
#line 233
c_rt_lib0move(&___nl__im__17,___get_global_string_const(117));
#line 233
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__3, ___nl__im__17));
#line 233
c_rt_lib0clear(&___nl__im__17);
#line 233
c_rt_lib0move(&___nl__im__19,___get_global_string_const(123));
#line 233
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__3, ___nl__im__19));
#line 233
c_rt_lib0clear(&___nl__im__19);
#line 233
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__16, ___get_global_string_const(72), ___nl__im__18));
#line 233
c_rt_lib0clear(&___nl__im__16);
#line 233
c_rt_lib0clear(&___nl__im__18);
#line 233
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(65), ___nl__im__15));
#line 233
c_rt_lib0clear(&___nl__im__15);
#line 233
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__14));
#line 233
c_rt_lib0clear(&___nl__im__14);
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
return ___nl__im__13;
#line 234
goto label_233;
#line 234
label_63:
;
#line 234
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(66)));
#line 234
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 235
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 235
c_rt_lib0move(&___nl__im__24,___get_global_string_const(124));
#line 235
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 235
c_rt_lib0clear(&___nl__im__23);
#line 235
c_rt_lib0clear(&___nl__im__24);
#line 236
c_rt_lib0move(&___nl__im__27,___get_global_string_const(124));
#line 236
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__1));
#line 236
c_rt_lib0clear(&___nl__im__27);
#line 236
c_rt_lib0move(&___nl__im__28,___get_global_string_const(125));
#line 236
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 236
c_rt_lib0clear(&___nl__im__26);
#line 236
c_rt_lib0clear(&___nl__im__28);
#line 237
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__22, ___nl__im__1));
#line 237
c_rt_lib0move(&___nl__im__31,___get_global_string_const(125));
#line 237
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 237
c_rt_lib0clear(&___nl__im__30);
#line 237
c_rt_lib0clear(&___nl__im__31);
#line 238
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__22, ___nl__im__1));
#line 238
c_rt_lib0move(&___nl__im__34,___get_global_string_const(120));
#line 238
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 238
c_rt_lib0clear(&___nl__im__33);
#line 238
c_rt_lib0clear(&___nl__im__34);
#line 241
c_rt_lib0move(&___nl__im__39,___get_global_string_const(118));
#line 241
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__3, ___nl__im__39));
#line 241
c_rt_lib0clear(&___nl__im__39);
#line 241
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__38, ___get_global_string_const(73), ___nl__im__22, ___get_global_string_const(74), ___nl__im__25, ___get_global_string_const(75), ___nl__im__29, ___get_global_string_const(67), ___nl__im__32));
#line 241
c_rt_lib0clear(&___nl__im__38);
#line 241
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__37));
#line 241
c_rt_lib0clear(&___nl__im__37);
#line 241
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__36));
#line 241
c_rt_lib0clear(&___nl__im__36);
#line 241
c_rt_lib0clear(&___nl__im__0);
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
c_rt_lib0clear(&___nl__im__6);
#line 241
//clear ___nl__bool__7;
#line 241
c_rt_lib0clear(&___nl__im__8);
#line 241
c_rt_lib0clear(&___nl__im__9);
#line 241
c_rt_lib0clear(&___nl__im__13);
#line 241
c_rt_lib0clear(&___nl__im__20);
#line 241
c_rt_lib0clear(&___nl__im__21);
#line 241
c_rt_lib0clear(&___nl__im__22);
#line 241
c_rt_lib0clear(&___nl__im__25);
#line 241
c_rt_lib0clear(&___nl__im__29);
#line 241
c_rt_lib0clear(&___nl__im__32);
#line 241
return ___nl__im__35;
#line 243
goto label_233;
#line 243
label_115:
;
#line 244
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(126)));
#line 244
___nl__int__40 = string0length(___nl__im__41);
#line 244
c_rt_lib0clear(&___nl__im__41);
#line 245
c_rt_lib0move(&___nl__im__42, compiler_priv0get_dir(___nl__im__5));
#line 246
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 246
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__42));
#line 246
c_rt_lib0clear(&___nl__im__45);
#line 246
c_rt_lib0move(&___nl__im__46,___get_global_string_const(110));
#line 246
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 246
c_rt_lib0clear(&___nl__im__44);
#line 246
c_rt_lib0clear(&___nl__im__46);
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__43, ___nl__im__1));
#line 246
c_rt_lib0clear(&___nl__im__43);
#line 247
___nl__int__48 = string0length(___nl__im__42);
#line 247
___nl__bool__47 = ___nl__int__40 < ___nl__int__48;
#line 247
//clear ___nl__int__48;
#line 247
___nl__bool__47 = !___nl__bool__47;
#line 247
if(___nl__bool__47){ goto label_146;}
#line 248
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 248
___nl__int__52 = 1;
#line 248
___nl__int__51 = ___nl__int__40 + ___nl__int__52;
#line 248
//clear ___nl__int__52;
#line 248
c_rt_lib0move(&___nl__im__53, c_rt_lib0int_new(___nl__int__51));
#line 248
c_rt_lib0move(&___nl__im__50, string0substr2(___nl__im__42, ___nl__im__53));
#line 248
//clear ___nl__int__51;
#line 248
c_rt_lib0clear(&___nl__im__53);
#line 248
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__49, ___nl__im__50));
#line 248
c_rt_lib0clear(&___nl__im__49);
#line 248
c_rt_lib0clear(&___nl__im__50);
#line 249
goto label_146;
#line 249
label_146:
;
#line 249
//clear ___nl__bool__47;
#line 250
c_rt_lib0move(&___nl__im__57,___get_global_string_const(120));
#line 250
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__3, ___nl__im__57));
#line 250
c_rt_lib0clear(&___nl__im__57);
#line 250
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__56));
#line 250
c_rt_lib0clear(&___nl__im__56);
#line 250
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__55));
#line 250
c_rt_lib0clear(&___nl__im__55);
#line 250
c_rt_lib0clear(&___nl__im__0);
#line 250
c_rt_lib0clear(&___nl__im__1);
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
c_rt_lib0clear(&___nl__im__6);
#line 250
//clear ___nl__bool__7;
#line 250
c_rt_lib0clear(&___nl__im__8);
#line 250
c_rt_lib0clear(&___nl__im__9);
#line 250
c_rt_lib0clear(&___nl__im__13);
#line 250
c_rt_lib0clear(&___nl__im__20);
#line 250
c_rt_lib0clear(&___nl__im__21);
#line 250
c_rt_lib0clear(&___nl__im__22);
#line 250
c_rt_lib0clear(&___nl__im__25);
#line 250
c_rt_lib0clear(&___nl__im__29);
#line 250
c_rt_lib0clear(&___nl__im__32);
#line 250
c_rt_lib0clear(&___nl__im__35);
#line 250
//clear ___nl__int__40;
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
return ___nl__im__54;
#line 251
goto label_233;
#line 251
label_176:
;
#line 252
c_rt_lib0move(&___nl__im__61,___get_global_string_const(119));
#line 252
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__3, ___nl__im__61));
#line 252
c_rt_lib0clear(&___nl__im__61);
#line 252
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(68), ___nl__im__60));
#line 252
c_rt_lib0clear(&___nl__im__60);
#line 252
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__59));
#line 252
c_rt_lib0clear(&___nl__im__59);
#line 252
c_rt_lib0clear(&___nl__im__0);
#line 252
c_rt_lib0clear(&___nl__im__1);
#line 252
c_rt_lib0clear(&___nl__im__2);
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 252
c_rt_lib0clear(&___nl__im__5);
#line 252
c_rt_lib0clear(&___nl__im__6);
#line 252
//clear ___nl__bool__7;
#line 252
c_rt_lib0clear(&___nl__im__8);
#line 252
c_rt_lib0clear(&___nl__im__9);
#line 252
c_rt_lib0clear(&___nl__im__13);
#line 252
c_rt_lib0clear(&___nl__im__20);
#line 252
c_rt_lib0clear(&___nl__im__21);
#line 252
c_rt_lib0clear(&___nl__im__22);
#line 252
c_rt_lib0clear(&___nl__im__25);
#line 252
c_rt_lib0clear(&___nl__im__29);
#line 252
c_rt_lib0clear(&___nl__im__32);
#line 252
c_rt_lib0clear(&___nl__im__35);
#line 252
//clear ___nl__int__40;
#line 252
c_rt_lib0clear(&___nl__im__42);
#line 252
c_rt_lib0clear(&___nl__im__54);
#line 252
return ___nl__im__58;
#line 253
goto label_233;
#line 253
label_206:
;
#line 254
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 254
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__63));
#line 254
c_rt_lib0clear(&___nl__im__63);
#line 254
c_rt_lib0clear(&___nl__im__0);
#line 254
c_rt_lib0clear(&___nl__im__1);
#line 254
c_rt_lib0clear(&___nl__im__2);
#line 254
c_rt_lib0clear(&___nl__im__3);
#line 254
c_rt_lib0clear(&___nl__im__5);
#line 254
c_rt_lib0clear(&___nl__im__6);
#line 254
//clear ___nl__bool__7;
#line 254
c_rt_lib0clear(&___nl__im__8);
#line 254
c_rt_lib0clear(&___nl__im__9);
#line 254
c_rt_lib0clear(&___nl__im__13);
#line 254
c_rt_lib0clear(&___nl__im__20);
#line 254
c_rt_lib0clear(&___nl__im__21);
#line 254
c_rt_lib0clear(&___nl__im__22);
#line 254
c_rt_lib0clear(&___nl__im__25);
#line 254
c_rt_lib0clear(&___nl__im__29);
#line 254
c_rt_lib0clear(&___nl__im__32);
#line 254
c_rt_lib0clear(&___nl__im__35);
#line 254
//clear ___nl__int__40;
#line 254
c_rt_lib0clear(&___nl__im__42);
#line 254
c_rt_lib0clear(&___nl__im__54);
#line 254
c_rt_lib0clear(&___nl__im__58);
#line 254
return ___nl__im__62;
#line 255
goto label_233;
#line 255
label_233:
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
#line 259
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 260
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 260
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 260
c_rt_lib0clear(&___nl__im__4);
#line 260
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 260
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 260
c_rt_lib0clear(&___nl__im__3);
#line 260
c_rt_lib0clear(&___nl__im__5);
#line 261
___nl__int__7 = 0;
#line 261
___nl__int__8 = 1;
#line 261
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 261
label_11:
;
#line 261
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 261
if(___nl__bool__10){ goto label_28;}
#line 261
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 261
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 262
c_rt_lib0move(&___nl__im__13,___get_global_string_const(120));
#line 262
___nl__bool__12 = compiler_priv0has_extension(___nl__im__6, ___nl__im__13);
#line 262
c_rt_lib0clear(&___nl__im__13);
#line 262
___nl__bool__12 = !___nl__bool__12;
#line 262
if(___nl__bool__12){ goto label_23;}
#line 262
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 262
goto label_23;
#line 262
label_23:
;
#line 262
//clear ___nl__bool__12;
#line 262
c_rt_lib0clear(&___nl__im__6);
#line 263
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 263
goto label_11;
#line 263
label_28:
;
#line 264
c_rt_lib0clear(&___nl__im__0);
#line 264
c_rt_lib0clear(&___nl__im__2);
#line 264
c_rt_lib0clear(&___nl__im__6);
#line 264
//clear ___nl__int__7;
#line 264
//clear ___nl__int__8;
#line 264
//clear ___nl__int__9;
#line 264
//clear ___nl__bool__10;
#line 264
c_rt_lib0clear(&___nl__im__11);
#line 264
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
#line 268
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 269
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 270
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 270
___nl__int__5 = 0;
#line 270
___nl__int__6 = 1;
#line 270
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 270
label_6:
;
#line 270
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 270
if(___nl__bool__8){ goto label_52;}
#line 270
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__5));
#line 270
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 271
c_rt_lib0move(&___nl__im__11,___get_global_string_const(120));
#line 271
___nl__bool__10 = compiler_priv0has_extension(___nl__im__4, ___nl__im__11);
#line 271
c_rt_lib0clear(&___nl__im__11);
#line 271
___nl__bool__10 = !___nl__bool__10;
#line 271
if(___nl__bool__10){ goto label_22;}
#line 272
c_rt_lib0move(&___nl__im__13, compiler_priv0get_dir(___nl__im__4));
#line 272
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(126), ___nl__im__13, ___get_global_string_const(122), ___nl__im__4));
#line 272
c_rt_lib0clear(&___nl__im__13);
#line 272
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__12));
#line 272
c_rt_lib0clear(&___nl__im__12);
#line 273
goto label_40;
#line 273
label_22:
;
#line 274
c_rt_lib0move(&___nl__im__14, compiler_priv0get_all_nianio_file(___nl__im__4));
#line 274
___nl__int__16 = 0;
#line 274
___nl__int__17 = 1;
#line 274
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 274
label_27:
;
#line 274
___nl__bool__19 = ___nl__int__16 >= ___nl__int__18;
#line 274
if(___nl__bool__19){ goto label_38;}
#line 274
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 274
c_rt_lib0copy(&___nl__im__15, ___nl__im__20);
#line 275
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(126), ___nl__im__4, ___get_global_string_const(122), ___nl__im__15));
#line 275
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__21));
#line 275
c_rt_lib0clear(&___nl__im__21);
#line 275
c_rt_lib0clear(&___nl__im__15);
#line 276
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 276
goto label_27;
#line 276
label_38:
;
#line 277
goto label_40;
#line 277
label_40:
;
#line 277
//clear ___nl__bool__10;
#line 277
c_rt_lib0clear(&___nl__im__14);
#line 277
c_rt_lib0clear(&___nl__im__15);
#line 277
//clear ___nl__int__16;
#line 277
//clear ___nl__int__17;
#line 277
//clear ___nl__int__18;
#line 277
//clear ___nl__bool__19;
#line 277
c_rt_lib0clear(&___nl__im__20);
#line 277
c_rt_lib0clear(&___nl__im__4);
#line 278
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 278
goto label_6;
#line 278
label_52:
;
#line 279
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 279
c_rt_lib0move(&___nl__im__22, compiler_priv0get_out_ext(___nl__im__23));
#line 279
c_rt_lib0clear(&___nl__im__23);
#line 280
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 281
c_rt_lib0move(&___nl__im__25, c_fe_lib0get_module_files(___nl__im__1));
#line 281
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
#line 281
if(___nl__bool__26){ goto label_65;}
#line 286
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(82));
#line 286
if(___nl__bool__26){ goto label_99;}
#line 286
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 286
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 286
nl_die_arg(___nl__im__27);
#line 281
label_65:
;
#line 281
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 281
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 282
c_rt_lib0move(&___nl__im__32, ptd0string());
#line 282
c_rt_lib0move(&___nl__im__31, ptd0arr(___nl__im__32));
#line 282
c_rt_lib0clear(&___nl__im__32);
#line 282
c_rt_lib0move(&___nl__im__30, ptd0ensure(___nl__im__31, ___nl__im__28));
#line 282
c_rt_lib0clear(&___nl__im__31);
#line 282
___nl__int__34 = 0;
#line 282
___nl__int__35 = 1;
#line 282
___nl__int__36 = c_rt_lib0array_len(___nl__im__30);
#line 282
label_76:
;
#line 282
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 282
if(___nl__bool__37){ goto label_97;}
#line 282
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__30, ___nl__int__34));
#line 282
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 283
___nl__bool__39 = compiler_priv0has_extension(___nl__im__33, ___nl__im__22);
#line 283
___nl__bool__39 = !___nl__bool__39;
#line 283
___nl__bool__39 = !___nl__bool__39;
#line 283
if(___nl__bool__39){ goto label_88;}
#line 283
//clear ___nl__bool__39;
#line 283
goto label_94;
#line 283
goto label_88;
#line 283
label_88:
;
#line 283
//clear ___nl__bool__39;
#line 284
c_rt_lib0move(&___nl__im__40, compiler_priv0get_module_name(___nl__im__33));
#line 284
c_rt_lib0delete(hash0set_value(&___nl__im__24, ___nl__im__40, ___nl__im__33));
#line 284
c_rt_lib0clear(&___nl__im__40);
#line 284
c_rt_lib0clear(&___nl__im__33);
#line 284
label_94:
;
#line 285
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 285
goto label_76;
#line 285
label_97:
;
#line 286
goto label_131;
#line 286
label_99:
;
#line 286
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(82)));
#line 286
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 287
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(0));
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
c_rt_lib0clear(&___nl__im__2);
#line 287
c_rt_lib0clear(&___nl__im__3);
#line 287
c_rt_lib0clear(&___nl__im__4);
#line 287
//clear ___nl__int__5;
#line 287
//clear ___nl__int__6;
#line 287
//clear ___nl__int__7;
#line 287
//clear ___nl__bool__8;
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__22);
#line 287
c_rt_lib0clear(&___nl__im__24);
#line 287
c_rt_lib0clear(&___nl__im__25);
#line 287
//clear ___nl__bool__26;
#line 287
c_rt_lib0clear(&___nl__im__27);
#line 287
c_rt_lib0clear(&___nl__im__28);
#line 287
c_rt_lib0clear(&___nl__im__29);
#line 287
c_rt_lib0clear(&___nl__im__30);
#line 287
c_rt_lib0clear(&___nl__im__33);
#line 287
//clear ___nl__int__34;
#line 287
//clear ___nl__int__35;
#line 287
//clear ___nl__int__36;
#line 287
//clear ___nl__bool__37;
#line 287
c_rt_lib0clear(&___nl__im__38);
#line 287
c_rt_lib0clear(&___nl__im__41);
#line 287
c_rt_lib0clear(&___nl__im__42);
#line 287
return ___nl__im__43;
#line 288
goto label_131;
#line 288
label_131:
;
#line 289
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(0));
#line 290
___nl__int__46 = 0;
#line 290
___nl__int__47 = 1;
#line 290
___nl__int__48 = c_rt_lib0array_len(___nl__im__2);
#line 290
label_136:
;
#line 290
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 290
if(___nl__bool__49){ goto label_149;}
#line 290
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__2, ___nl__int__46));
#line 290
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 291
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(122)));
#line 291
c_rt_lib0move(&___nl__im__51, compiler_priv0get_module_name(___nl__im__52));
#line 291
c_rt_lib0clear(&___nl__im__52);
#line 292
c_rt_lib0move(&___nl__im__53, compiler_priv0mk_path_module(___nl__im__45, ___nl__im__51, ___nl__im__0));
#line 293
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__51, ___nl__im__53));
#line 293
c_rt_lib0clear(&___nl__im__45);
#line 294
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 294
goto label_136;
#line 294
label_149:
;
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
c_rt_lib0clear(&___nl__im__2);
#line 295
c_rt_lib0clear(&___nl__im__3);
#line 295
c_rt_lib0clear(&___nl__im__4);
#line 295
//clear ___nl__int__5;
#line 295
//clear ___nl__int__6;
#line 295
//clear ___nl__int__7;
#line 295
//clear ___nl__bool__8;
#line 295
c_rt_lib0clear(&___nl__im__9);
#line 295
c_rt_lib0clear(&___nl__im__22);
#line 295
c_rt_lib0clear(&___nl__im__24);
#line 295
c_rt_lib0clear(&___nl__im__25);
#line 295
//clear ___nl__bool__26;
#line 295
c_rt_lib0clear(&___nl__im__27);
#line 295
c_rt_lib0clear(&___nl__im__28);
#line 295
c_rt_lib0clear(&___nl__im__29);
#line 295
c_rt_lib0clear(&___nl__im__30);
#line 295
c_rt_lib0clear(&___nl__im__33);
#line 295
//clear ___nl__int__34;
#line 295
//clear ___nl__int__35;
#line 295
//clear ___nl__int__36;
#line 295
//clear ___nl__bool__37;
#line 295
c_rt_lib0clear(&___nl__im__38);
#line 295
c_rt_lib0clear(&___nl__im__41);
#line 295
c_rt_lib0clear(&___nl__im__42);
#line 295
c_rt_lib0clear(&___nl__im__43);
#line 295
c_rt_lib0clear(&___nl__im__45);
#line 295
//clear ___nl__int__46;
#line 295
//clear ___nl__int__47;
#line 295
//clear ___nl__int__48;
#line 295
//clear ___nl__bool__49;
#line 295
c_rt_lib0clear(&___nl__im__50);
#line 295
c_rt_lib0clear(&___nl__im__51);
#line 295
c_rt_lib0clear(&___nl__im__53);
#line 295
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
#line 302
c_rt_lib0move(&___nl__im__5,___get_global_string_const(127));
#line 302
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 302
c_rt_lib0clear(&___nl__im__5);
#line 302
c_rt_lib0move(&___nl__im__6,___get_global_string_const(128));
#line 302
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 302
c_rt_lib0clear(&___nl__im__4);
#line 302
c_rt_lib0clear(&___nl__im__6);
#line 302
c_rt_lib0delete(c_fe_lib0print(___nl__im__3));
#line 302
c_rt_lib0clear(&___nl__im__3);
#line 303
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 303
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 303
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__12, ___get_global_string_const(82), ___nl__im__13));
#line 303
c_rt_lib0clear(&___nl__im__12);
#line 303
c_rt_lib0clear(&___nl__im__13);
#line 303
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 303
c_rt_lib0clear(&___nl__im__11);
#line 303
c_rt_lib0move(&___nl__im__14, c_fe_lib0file_to_string(___nl__im__1));
#line 303
c_rt_lib0move(&___nl__im__9, ptd0ensure(___nl__im__10, ___nl__im__14));
#line 303
c_rt_lib0clear(&___nl__im__10);
#line 303
c_rt_lib0clear(&___nl__im__14);
#line 303
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 303
if(___nl__bool__8){ goto label_27;}
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
c_rt_lib0clear(&___nl__im__7);
#line 303
//clear ___nl__bool__8;
#line 303
return ___nl__im__9;
#line 303
label_27:
;
#line 303
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 304
___nl__bool__16 = true;
#line 304
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 304
//clear ___nl__bool__16;
#line 305
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 305
if(___nl__bool__17){ goto label_39;}
#line 312
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(129));
#line 312
if(___nl__bool__17){ goto label_112;}
#line 312
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 312
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 312
nl_die_arg(___nl__im__18);
#line 305
label_39:
;
#line 305
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 305
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 306
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 307
___nl__bool__23 = false;
#line 307
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
#line 307
c_rt_lib0move(&___nl__im__22, module_checker0check_module(___nl__im__19, ___nl__im__24, &___nl__im__21));
#line 307
//clear ___nl__bool__23;
#line 307
c_rt_lib0clear(&___nl__im__24);
#line 308
c_rt_lib0move(&___nl__im__25,___get_global_string_const(59));
#line 308
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__25));
#line 308
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(130)));
#line 308
c_rt_lib0delete(hash0set_value(&___nl__im__25, ___nl__im__0, ___nl__im__26));
#line 308
c_rt_lib0move(&___nl__string__27,___get_global_string_const(59));
#line 308
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__27, ___nl__im__25));
#line 308
c_rt_lib0clear(&___nl__im__25);
#line 308
c_rt_lib0clear(&___nl__im__26);
#line 308
c_rt_lib0clear(&___nl__string__27);
#line 309
c_rt_lib0move(&___nl__im__28,___get_global_string_const(58));
#line 309
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__28));
#line 309
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 309
c_rt_lib0delete(hash0set_value(&___nl__im__28, ___nl__im__0, ___nl__im__29));
#line 309
c_rt_lib0move(&___nl__string__30,___get_global_string_const(58));
#line 309
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__28));
#line 309
c_rt_lib0clear(&___nl__im__28);
#line 309
c_rt_lib0clear(&___nl__im__29);
#line 309
c_rt_lib0clear(&___nl__string__30);
#line 310
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 310
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 310
c_rt_lib0clear(&___nl__im__33);
#line 310
___nl__int__34 = 0;
#line 310
___nl__bool__31 = ___nl__int__32 == ___nl__int__34;
#line 310
//clear ___nl__int__32;
#line 310
//clear ___nl__int__34;
#line 310
___nl__bool__31 = !___nl__bool__31;
#line 310
___nl__bool__31 = !___nl__bool__31;
#line 310
if(___nl__bool__31){ goto label_94;}
#line 310
c_rt_lib0move(&___nl__im__36,___get_global_string_const(36));
#line 310
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__36));
#line 310
c_rt_lib0clear(&___nl__im__36);
#line 310
c_rt_lib0clear(&___nl__im__0);
#line 310
c_rt_lib0clear(&___nl__im__1);
#line 310
c_rt_lib0clear(&___nl__im__7);
#line 310
//clear ___nl__bool__8;
#line 310
c_rt_lib0clear(&___nl__im__9);
#line 310
c_rt_lib0clear(&___nl__im__15);
#line 310
//clear ___nl__bool__17;
#line 310
c_rt_lib0clear(&___nl__im__18);
#line 310
c_rt_lib0clear(&___nl__im__19);
#line 310
c_rt_lib0clear(&___nl__im__20);
#line 310
c_rt_lib0clear(&___nl__im__21);
#line 310
c_rt_lib0clear(&___nl__im__22);
#line 310
//clear ___nl__bool__31;
#line 310
return ___nl__im__35;
#line 310
goto label_94;
#line 310
label_94:
;
#line 310
//clear ___nl__bool__31;
#line 310
c_rt_lib0clear(&___nl__im__35);
#line 311
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__19));
#line 311
c_rt_lib0clear(&___nl__im__0);
#line 311
c_rt_lib0clear(&___nl__im__1);
#line 311
c_rt_lib0clear(&___nl__im__7);
#line 311
//clear ___nl__bool__8;
#line 311
c_rt_lib0clear(&___nl__im__9);
#line 311
c_rt_lib0clear(&___nl__im__15);
#line 311
//clear ___nl__bool__17;
#line 311
c_rt_lib0clear(&___nl__im__18);
#line 311
c_rt_lib0clear(&___nl__im__19);
#line 311
c_rt_lib0clear(&___nl__im__20);
#line 311
c_rt_lib0clear(&___nl__im__21);
#line 311
c_rt_lib0clear(&___nl__im__22);
#line 311
return ___nl__im__37;
#line 312
goto label_151;
#line 312
label_112:
;
#line 312
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(129)));
#line 312
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 313
c_rt_lib0move(&___nl__im__40,___get_global_string_const(59));
#line 313
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__40));
#line 313
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 313
c_rt_lib0delete(hash0set_value(&___nl__im__40, ___nl__im__0, ___nl__im__41));
#line 313
c_rt_lib0move(&___nl__string__42,___get_global_string_const(59));
#line 313
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__42, ___nl__im__40));
#line 313
c_rt_lib0clear(&___nl__im__40);
#line 313
c_rt_lib0clear(&___nl__im__41);
#line 313
c_rt_lib0clear(&___nl__string__42);
#line 314
c_rt_lib0move(&___nl__im__43,___get_global_string_const(58));
#line 314
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__43));
#line 314
c_rt_lib0delete(hash0set_value(&___nl__im__43, ___nl__im__0, ___nl__im__38));
#line 314
c_rt_lib0move(&___nl__string__44,___get_global_string_const(58));
#line 314
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__44, ___nl__im__43));
#line 314
c_rt_lib0clear(&___nl__im__43);
#line 314
c_rt_lib0clear(&___nl__string__44);
#line 315
c_rt_lib0move(&___nl__im__46,___get_global_string_const(36));
#line 315
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__46));
#line 315
c_rt_lib0clear(&___nl__im__46);
#line 315
c_rt_lib0clear(&___nl__im__0);
#line 315
c_rt_lib0clear(&___nl__im__1);
#line 315
c_rt_lib0clear(&___nl__im__7);
#line 315
//clear ___nl__bool__8;
#line 315
c_rt_lib0clear(&___nl__im__9);
#line 315
c_rt_lib0clear(&___nl__im__15);
#line 315
//clear ___nl__bool__17;
#line 315
c_rt_lib0clear(&___nl__im__18);
#line 315
c_rt_lib0clear(&___nl__im__19);
#line 315
c_rt_lib0clear(&___nl__im__20);
#line 315
c_rt_lib0clear(&___nl__im__21);
#line 315
c_rt_lib0clear(&___nl__im__22);
#line 315
c_rt_lib0clear(&___nl__im__37);
#line 315
c_rt_lib0clear(&___nl__im__38);
#line 315
c_rt_lib0clear(&___nl__im__39);
#line 315
return ___nl__im__45;
#line 316
goto label_151;
#line 316
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
#line 320
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 321
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(101)));
#line 321
c_rt_lib0move(&___nl__im__2, c_fe_lib0file_to_string(___nl__im__3));
#line 321
c_rt_lib0clear(&___nl__im__3);
#line 321
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(83));
#line 321
if(___nl__bool__4){ goto label_11;}
#line 334
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(82));
#line 334
if(___nl__bool__4){ goto label_58;}
#line 334
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 334
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 334
nl_die_arg(___nl__im__5);
#line 321
label_11:
;
#line 321
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(83)));
#line 321
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 322
c_rt_lib0move(&___nl__im__8,___get_global_string_const(131));
#line 322
c_rt_lib0delete(c_fe_lib0print(___nl__im__8));
#line 322
c_rt_lib0clear(&___nl__im__8);
#line 323
c_rt_lib0move(&___nl__im__9, dfile0try_sload(___nl__im__6));
#line 324
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 325
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 325
if(___nl__bool__11){ goto label_26;}
#line 327
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(82));
#line 327
if(___nl__bool__11){ goto label_31;}
#line 327
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 327
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__9));
#line 327
nl_die_arg(___nl__im__12);
#line 325
label_26:
;
#line 325
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 325
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 326
c_rt_lib0copy(&___nl__im__10, ___nl__im__13);
#line 327
goto label_39;
#line 327
label_31:
;
#line 327
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(82)));
#line 327
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 328
c_rt_lib0move(&___nl__im__17,___get_global_string_const(132));
#line 328
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 328
c_rt_lib0clear(&___nl__im__17);
#line 329
c_rt_lib0delete(c_fe_lib0print(___nl__im__15));
#line 330
goto label_39;
#line 330
label_39:
;
#line 331
___nl__int__19 = 0;
#line 331
___nl__int__20 = 1;
#line 331
___nl__int__21 = c_rt_lib0array_len(___nl__im__10);
#line 331
label_43:
;
#line 331
___nl__bool__22 = ___nl__int__19 >= ___nl__int__21;
#line 331
if(___nl__bool__22){ goto label_56;}
#line 331
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__10, ___nl__int__19));
#line 331
c_rt_lib0copy(&___nl__im__18, ___nl__im__23);
#line 332
___nl__int__24 = 1;
#line 332
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__24));
#line 332
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__25));
#line 332
//clear ___nl__int__24;
#line 332
c_rt_lib0clear(&___nl__im__25);
#line 332
c_rt_lib0clear(&___nl__im__18);
#line 333
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 333
goto label_43;
#line 333
label_56:
;
#line 334
goto label_65;
#line 334
label_58:
;
#line 334
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(82)));
#line 334
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 335
c_rt_lib0move(&___nl__im__28,___get_global_string_const(133));
#line 335
c_rt_lib0delete(c_fe_lib0print(___nl__im__28));
#line 335
c_rt_lib0clear(&___nl__im__28);
#line 336
goto label_65;
#line 336
label_65:
;
#line 337
c_rt_lib0clear(&___nl__im__0);
#line 337
c_rt_lib0clear(&___nl__im__2);
#line 337
//clear ___nl__bool__4;
#line 337
c_rt_lib0clear(&___nl__im__5);
#line 337
c_rt_lib0clear(&___nl__im__6);
#line 337
c_rt_lib0clear(&___nl__im__7);
#line 337
c_rt_lib0clear(&___nl__im__9);
#line 337
c_rt_lib0clear(&___nl__im__10);
#line 337
//clear ___nl__bool__11;
#line 337
c_rt_lib0clear(&___nl__im__12);
#line 337
c_rt_lib0clear(&___nl__im__13);
#line 337
c_rt_lib0clear(&___nl__im__14);
#line 337
c_rt_lib0clear(&___nl__im__15);
#line 337
c_rt_lib0clear(&___nl__im__16);
#line 337
c_rt_lib0clear(&___nl__im__18);
#line 337
//clear ___nl__int__19;
#line 337
//clear ___nl__int__20;
#line 337
//clear ___nl__int__21;
#line 337
//clear ___nl__bool__22;
#line 337
c_rt_lib0clear(&___nl__im__23);
#line 337
c_rt_lib0clear(&___nl__im__26);
#line 337
c_rt_lib0clear(&___nl__im__27);
#line 337
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
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
bool  ___nl__bool__61 = false;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
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
bool  ___nl__bool__80 = false;
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
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
INT  ___nl__int__105 = 0;
ImmT  ___nl__string__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
bool  ___nl__bool__113 = false;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
bool  ___nl__bool__116 = false;
INT  ___nl__int__117 = 0;
INT  ___nl__int__118 = 0;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
bool  ___nl__bool__125 = false;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
bool  ___nl__bool__134 = false;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
bool  ___nl__bool__155 = false;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
bool  ___nl__bool__163 = false;
INT  ___nl__int__164 = 0;
INT  ___nl__int__165 = 0;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
INT  ___nl__int__169 = 0;
ImmT  ___nl__string__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
bool  ___nl__bool__176 = false;
ImmT  ___nl__im__177 = NULL;
bool  ___nl__bool__178 = false;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
INT  ___nl__int__183 = 0;
INT  ___nl__int__184 = 0;
bool  ___nl__bool__185 = false;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
#line 341
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 342
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 343
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 344
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 345
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 347
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 348
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 349
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 350
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 351
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 351
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__7, ___get_global_string_const(59), ___nl__im__8, ___get_global_string_const(60), ___nl__im__9, ___get_global_string_const(61), ___nl__im__10, ___get_global_string_const(62), ___nl__im__11));
#line 351
c_rt_lib0clear(&___nl__im__7);
#line 351
c_rt_lib0clear(&___nl__im__8);
#line 351
c_rt_lib0clear(&___nl__im__9);
#line 351
c_rt_lib0clear(&___nl__im__10);
#line 351
c_rt_lib0clear(&___nl__im__11);
#line 353
c_rt_lib0move(&___nl__im__13, compiler_priv0get_mathematical_func(___nl__im__0));
#line 353
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 353
c_rt_lib0move(&___nl__im__12, post_processing0init(___nl__im__13, ___nl__im__14));
#line 353
c_rt_lib0clear(&___nl__im__13);
#line 353
c_rt_lib0clear(&___nl__im__14);
#line 354
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 355
;
#line 355
___nl__im_ptr__17 = &(___nl__rec__16.global_int_const0field);
#line 356
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 356
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(0));
#line 356
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 356
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 356
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(4, ___get_global_string_const(134), ___nl__im__18, ___get_global_string_const(135), ___nl__im__19, ___get_global_string_const(136), ___nl__im__20, ___get_global_string_const(137), ___nl__im__21));
#line 356
c_rt_lib0clear(&___nl__im__18);
#line 356
c_rt_lib0clear(&___nl__im__19);
#line 356
c_rt_lib0clear(&___nl__im__20);
#line 356
c_rt_lib0clear(&___nl__im__21);
#line 356
___nl__im_ptr__17 = NULL;
#line 356
___nl__im_ptr__22 = &(___nl__rec__16.global_string_const0field);
#line 357
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 357
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 357
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 357
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 357
c_rt_lib0move(___nl__im_ptr__22, c_rt_lib0hash_mk(4, ___get_global_string_const(134), ___nl__im__23, ___get_global_string_const(135), ___nl__im__24, ___get_global_string_const(136), ___nl__im__25, ___get_global_string_const(137), ___nl__im__26));
#line 357
c_rt_lib0clear(&___nl__im__23);
#line 357
c_rt_lib0clear(&___nl__im__24);
#line 357
c_rt_lib0clear(&___nl__im__25);
#line 357
c_rt_lib0clear(&___nl__im__26);
#line 357
___nl__im_ptr__22 = NULL;
#line 357
___nl__im_ptr__27 = &(___nl__rec__16.ret0field);
#line 358
c_rt_lib0move(___nl__im_ptr__27,___get_global_string_const(36));
#line 358
___nl__im_ptr__27 = NULL;
#line 358
___nl__im_ptr__28 = &(___nl__rec__16.header0field);
#line 359
c_rt_lib0move(___nl__im_ptr__28,___get_global_string_const(36));
#line 359
___nl__im_ptr__28 = NULL;
#line 359
___nl__im_ptr__29 = &(___nl__rec__16.fun_args0field);
#line 360
c_rt_lib0move(___nl__im_ptr__29, c_rt_lib0array_mk(0));
#line 360
___nl__im_ptr__29 = NULL;
#line 360
___nl__im_ptr__30 = &(___nl__rec__16.ret_reg_type0field);
#line 361
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0ov_mk_none(___get_global_string_const(138)));
#line 361
___nl__im_ptr__30 = NULL;
#line 361
___nl__rec_ptr__31 = &(___nl__rec__16.const0field);
#line 362
;
#line 362
___nl__int_ptr__32 = &(___nl__rec_ptr__31->dynamic_nr0field);
#line 363
(*___nl__int_ptr__32) = 0;
#line 363
___nl__int_ptr__32 = NULL;
#line 363
___nl__rec_ptr__33 = &(___nl__rec_ptr__31->int0field);
#line 364
;
#line 364
___nl__arr_ptr__34 = &(___nl__rec_ptr__33->arr0field);
#line 364
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__34));
(*___nl__arr_ptr__34).size = 0;
(*___nl__arr_ptr__34).capacity = 0;
(*___nl__arr_ptr__34).value = NULL;
#line 364
___nl__arr_ptr__34 = NULL;
#line 364
___nl__im_ptr__35 = &(___nl__rec_ptr__33->hash0field);
#line 364
c_rt_lib0move(___nl__im_ptr__35, c_rt_lib0hash_mk(0));
#line 364
___nl__im_ptr__35 = NULL;
#line 364
___nl__rec_ptr__33 = NULL;
#line 364
___nl__rec_ptr__36 = &(___nl__rec_ptr__31->string0field);
#line 365
;
#line 365
___nl__arr_ptr__37 = &(___nl__rec_ptr__36->arr0field);
#line 365
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__37));
(*___nl__arr_ptr__37).size = 0;
(*___nl__arr_ptr__37).capacity = 0;
(*___nl__arr_ptr__37).value = NULL;
#line 365
___nl__arr_ptr__37 = NULL;
#line 365
___nl__im_ptr__38 = &(___nl__rec_ptr__36->hash0field);
#line 365
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(0));
#line 365
___nl__im_ptr__38 = NULL;
#line 365
___nl__rec_ptr__36 = NULL;
#line 365
___nl__rec_ptr__39 = &(___nl__rec_ptr__31->singleton0field);
#line 366
;
#line 366
___nl__arr_ptr__40 = &(___nl__rec_ptr__39->arr0field);
#line 366
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__40));
(*___nl__arr_ptr__40).size = 0;
(*___nl__arr_ptr__40).capacity = 0;
(*___nl__arr_ptr__40).value = NULL;
#line 366
___nl__arr_ptr__40 = NULL;
#line 366
___nl__im_ptr__41 = &(___nl__rec_ptr__39->hash0field);
#line 366
c_rt_lib0move(___nl__im_ptr__41, c_rt_lib0hash_mk(0));
#line 366
___nl__im_ptr__41 = NULL;
#line 366
___nl__rec_ptr__39 = NULL;
#line 366
___nl__rec_ptr__31 = NULL;
#line 366
___nl__im_ptr__42 = &(___nl__rec__16.mod_name0field);
#line 368
c_rt_lib0move(___nl__im_ptr__42,___get_global_string_const(36));
#line 368
___nl__im_ptr__42 = NULL;
#line 368
___nl__hash_ptr__43 = &(___nl__rec__16.additional_imports0field);
#line 369
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__43));
(*___nl__hash_ptr__43).size = 0;
(*___nl__hash_ptr__43).capacity = 0;
(*___nl__hash_ptr__43).keys = NULL;
(*___nl__hash_ptr__43).values = NULL;
#line 369
___nl__hash_ptr__43 = NULL;
#line 369
___nl__im_ptr__44 = &(___nl__rec__16.defined_types0field);
#line 370
c_rt_lib0move(___nl__im_ptr__44, c_rt_lib0hash_mk(0));
#line 370
___nl__im_ptr__44 = NULL;
#line 372
___nl__bool__45 = false;
#line 373
label_100:
;
#line 374
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 374
c_rt_lib0copy(&___nl__im__47, ___nl__im__46);
#line 374
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(60), ___nl__im__47);
#line 374
c_rt_lib0clear(&___nl__im__46);
#line 374
c_rt_lib0clear(&___nl__im__47);
#line 375
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(0));
#line 375
c_rt_lib0copy(&___nl__im__49, ___nl__im__48);
#line 375
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(61), ___nl__im__49);
#line 375
c_rt_lib0clear(&___nl__im__48);
#line 375
c_rt_lib0clear(&___nl__im__49);
#line 376
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 376
c_rt_lib0copy(&___nl__im__51, ___nl__im__50);
#line 376
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(62), ___nl__im__51);
#line 376
c_rt_lib0clear(&___nl__im__50);
#line 376
c_rt_lib0clear(&___nl__im__51);
#line 377
c_rt_lib0move(&___nl__im__52, compiler_priv0get_files_to_parse(___nl__im__0));
#line 378
___nl__int__53 = 0;
#line 379
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__52));
#line 379
label_119:
;
#line 379
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 379
if(___nl__bool__55){ goto label_170;}
#line 379
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 379
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__52, ___nl__im__54));
#line 380
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(78)));
#line 380
c_rt_lib0move(&___nl__im__58, c_fe_lib0get_modif_time(___nl__im__59));
#line 380
c_rt_lib0clear(&___nl__im__59);
#line 381
___nl__bool__60 = c_rt_lib0priv_is(___nl__im__58, ___get_global_string_const(82));
#line 381
___nl__bool__60 = !___nl__bool__60;
#line 381
if(___nl__bool__60){ goto label_134;}
#line 381
c_rt_lib0clear(&___nl__im__58);
#line 381
//clear ___nl__bool__60;
#line 381
goto label_167;
#line 381
goto label_134;
#line 381
label_134:
;
#line 381
//clear ___nl__bool__60;
#line 382
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__58, ___get_global_string_const(83)));
#line 383
___nl__bool__61 = hash0has_key(___nl__im__1, ___nl__im__54);
#line 383
___nl__bool__61 = !___nl__bool__61;
#line 383
if(___nl__bool__61){ goto label_158;}
#line 384
c_rt_lib0move(&___nl__im__62, hash0get_value(___nl__im__1, ___nl__im__54));
#line 385
___nl__int__64 = getIntFromImm(___nl__im__58);
#line 385
___nl__int__65 = getIntFromImm(___nl__im__62);
#line 385
___nl__bool__63 = ___nl__int__64 > ___nl__int__65;
#line 385
//clear ___nl__int__64;
#line 385
//clear ___nl__int__65;
#line 385
___nl__bool__63 = !___nl__bool__63;
#line 385
___nl__bool__63 = !___nl__bool__63;
#line 385
if(___nl__bool__63){ goto label_155;}
#line 385
c_rt_lib0clear(&___nl__im__58);
#line 385
//clear ___nl__bool__61;
#line 385
c_rt_lib0clear(&___nl__im__62);
#line 385
//clear ___nl__bool__63;
#line 385
goto label_167;
#line 385
goto label_155;
#line 385
label_155:
;
#line 385
//clear ___nl__bool__63;
#line 386
goto label_158;
#line 386
label_158:
;
#line 386
//clear ___nl__bool__61;
#line 386
c_rt_lib0clear(&___nl__im__62);
#line 387
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__54, ___nl__im__58));
#line 388
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__56));
#line 389
___nl__int__66 = 1;
#line 389
___nl__int__53 = ___nl__int__53 + ___nl__int__66;
#line 389
//clear ___nl__int__66;
#line 389
c_rt_lib0clear(&___nl__im__58);
#line 389
label_167:
;
#line 390
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 390
goto label_119;
#line 390
label_170:
;
#line 391
c_rt_lib0move(&___nl__im__70, c_rt_lib0init_iter(___nl__im__15));
#line 391
label_172:
;
#line 391
___nl__bool__68 = c_rt_lib0is_end_hash(___nl__im__70);
#line 391
if(___nl__bool__68){ goto label_217;}
#line 391
c_rt_lib0move(&___nl__im__67, c_rt_lib0get_key_iter(___nl__im__70));
#line 391
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__67));
#line 392
___nl__bool__71 = hash0has_key(___nl__im__52, ___nl__im__67);
#line 392
___nl__bool__71 = !___nl__bool__71;
#line 392
___nl__bool__71 = !___nl__bool__71;
#line 392
if(___nl__bool__71){ goto label_213;}
#line 393
___nl__int__72 = 1;
#line 393
___nl__int__53 = ___nl__int__53 + ___nl__int__72;
#line 393
//clear ___nl__int__72;
#line 394
c_rt_lib0move(&___nl__im__73,___get_global_string_const(58));
#line 394
c_rt_lib0move(&___nl__im__73, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__73));
#line 394
c_rt_lib0delete(hash0delete(&___nl__im__73, ___nl__im__67));
#line 394
c_rt_lib0move(&___nl__string__74,___get_global_string_const(58));
#line 394
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__74, ___nl__im__73));
#line 394
c_rt_lib0clear(&___nl__im__73);
#line 394
c_rt_lib0clear(&___nl__string__74);
#line 395
c_rt_lib0move(&___nl__im__75,___get_global_string_const(59));
#line 395
c_rt_lib0move(&___nl__im__75, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__75));
#line 395
c_rt_lib0delete(hash0delete(&___nl__im__75, ___nl__im__67));
#line 395
c_rt_lib0move(&___nl__string__76,___get_global_string_const(59));
#line 395
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__76, ___nl__im__75));
#line 395
c_rt_lib0clear(&___nl__im__75);
#line 395
c_rt_lib0clear(&___nl__string__76);
#line 396
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__67));
#line 397
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__67));
#line 398
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__67));
#line 399
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__67));
#line 400
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__12, ___nl__im__67));
#line 401
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 401
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(65));
#line 401
c_rt_lib0clear(&___nl__im__78);
#line 401
___nl__bool__77 = !___nl__bool__77;
#line 401
if(___nl__bool__77){ goto label_210;}
#line 402
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__16, ___nl__im__67));
#line 403
goto label_210;
#line 403
label_210:
;
#line 403
//clear ___nl__bool__77;
#line 404
goto label_213;
#line 404
label_213:
;
#line 404
//clear ___nl__bool__71;
#line 405
c_rt_lib0move(&___nl__im__70, c_rt_lib0next_iter(___nl__im__70));
#line 405
goto label_172;
#line 405
label_217:
;
#line 406
c_rt_lib0copy(&___nl__im__15, ___nl__im__52);
#line 407
___nl__int__81 = 0;
#line 407
___nl__bool__79 = ___nl__int__53 == ___nl__int__81;
#line 407
//clear ___nl__int__81;
#line 407
___nl__bool__80 = !___nl__bool__79;
#line 407
if(___nl__bool__80){ goto label_226;}
#line 407
___nl__bool__79 = ___nl__bool__45;
#line 407
___nl__bool__79 = !___nl__bool__79;
#line 407
label_226:
;
#line 407
//clear ___nl__bool__80;
#line 407
___nl__bool__79 = !___nl__bool__79;
#line 407
if(___nl__bool__79){ goto label_249;}
#line 408
___nl__int__82 = 1;
#line 408
c_rt_lib0move(&___nl__im__83, c_rt_lib0int_new(___nl__int__82));
#line 408
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__83));
#line 408
//clear ___nl__int__82;
#line 408
c_rt_lib0clear(&___nl__im__83);
#line 409
c_rt_lib0clear(&___nl__im__52);
#line 409
//clear ___nl__int__53;
#line 409
c_rt_lib0clear(&___nl__im__54);
#line 409
//clear ___nl__bool__55;
#line 409
c_rt_lib0clear(&___nl__im__56);
#line 409
c_rt_lib0clear(&___nl__im__57);
#line 409
c_rt_lib0clear(&___nl__im__58);
#line 409
c_rt_lib0clear(&___nl__im__67);
#line 409
//clear ___nl__bool__68;
#line 409
c_rt_lib0clear(&___nl__im__69);
#line 409
c_rt_lib0clear(&___nl__im__70);
#line 409
//clear ___nl__bool__79;
#line 409
goto label_100;
#line 410
goto label_249;
#line 410
label_249:
;
#line 410
//clear ___nl__bool__79;
#line 411
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(0));
#line 412
c_rt_lib0move(&___nl__im__88, c_rt_lib0init_iter(___nl__im__5));
#line 412
label_253:
;
#line 412
___nl__bool__86 = c_rt_lib0is_end_hash(___nl__im__88);
#line 412
if(___nl__bool__86){ goto label_289;}
#line 412
c_rt_lib0move(&___nl__im__85, c_rt_lib0get_key_iter(___nl__im__88));
#line 412
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__85));
#line 413
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__87, ___get_global_string_const(78)));
#line 413
c_rt_lib0move(&___nl__im__89, compiler_priv0parse_module(___nl__im__85, ___nl__im__90, &___nl__im__6));
#line 413
c_rt_lib0clear(&___nl__im__90);
#line 413
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__89, ___get_global_string_const(83));
#line 413
if(___nl__bool__91){ goto label_268;}
#line 416
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__89, ___get_global_string_const(82));
#line 416
if(___nl__bool__91){ goto label_274;}
#line 416
c_rt_lib0move(&___nl__im__92,___get_global_string_const(15));
#line 416
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(2, ___nl__im__92, ___nl__im__89));
#line 416
nl_die_arg(___nl__im__92);
#line 413
label_268:
;
#line 413
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__89, ___get_global_string_const(83)));
#line 413
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 414
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__85, ___nl__im__93));
#line 415
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__85, ___nl__im__93));
#line 416
goto label_279;
#line 416
label_274:
;
#line 416
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__89, ___get_global_string_const(82)));
#line 416
c_rt_lib0copy(&___nl__im__95, ___nl__im__96);
#line 417
c_rt_lib0delete(hash0set_value(&___nl__im__84, ___nl__im__85, ___nl__im__87));
#line 418
goto label_279;
#line 418
label_279:
;
#line 418
c_rt_lib0clear(&___nl__im__89);
#line 418
//clear ___nl__bool__91;
#line 418
c_rt_lib0clear(&___nl__im__92);
#line 418
c_rt_lib0clear(&___nl__im__93);
#line 418
c_rt_lib0clear(&___nl__im__94);
#line 418
c_rt_lib0clear(&___nl__im__95);
#line 418
c_rt_lib0clear(&___nl__im__96);
#line 419
c_rt_lib0move(&___nl__im__88, c_rt_lib0next_iter(___nl__im__88));
#line 419
goto label_253;
#line 419
label_289:
;
#line 420
c_rt_lib0copy(&___nl__im__5, ___nl__im__84);
#line 421
___nl__int__98 = hash0size(___nl__im__5);
#line 421
___nl__int__99 = 0;
#line 421
___nl__bool__97 = ___nl__int__98 > ___nl__int__99;
#line 421
//clear ___nl__int__98;
#line 421
//clear ___nl__int__99;
#line 421
___nl__bool__97 = !___nl__bool__97;
#line 421
if(___nl__bool__97){ goto label_345;}
#line 422
compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__52);
#line 423
c_rt_lib0move(&___nl__im__103, string0lf());
#line 423
c_rt_lib0move(&___nl__im__104,___get_global_string_const(139));
#line 423
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__104));
#line 423
c_rt_lib0clear(&___nl__im__103);
#line 423
c_rt_lib0clear(&___nl__im__104);
#line 423
___nl__int__105 = hash0size(___nl__im__5);
#line 423
c_rt_lib0move(&___nl__string__106, c_rt_lib0int_to_string(___nl__int__105));
#line 423
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__string__106));
#line 423
c_rt_lib0clear(&___nl__im__102);
#line 423
//clear ___nl__int__105;
#line 423
c_rt_lib0clear(&___nl__string__106);
#line 423
c_rt_lib0move(&___nl__im__107,___get_global_string_const(140));
#line 423
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__107));
#line 423
c_rt_lib0clear(&___nl__im__101);
#line 423
c_rt_lib0clear(&___nl__im__107);
#line 423
c_rt_lib0delete(c_fe_lib0print(___nl__im__100));
#line 423
c_rt_lib0clear(&___nl__im__100);
#line 424
c_rt_lib0move(&___nl__im__108,___get_global_string_const(141));
#line 424
c_rt_lib0delete(c_fe_lib0print(___nl__im__108));
#line 424
c_rt_lib0clear(&___nl__im__108);
#line 425
c_rt_lib0clear(&___nl__im__52);
#line 425
//clear ___nl__int__53;
#line 425
c_rt_lib0clear(&___nl__im__54);
#line 425
//clear ___nl__bool__55;
#line 425
c_rt_lib0clear(&___nl__im__56);
#line 425
c_rt_lib0clear(&___nl__im__57);
#line 425
c_rt_lib0clear(&___nl__im__58);
#line 425
c_rt_lib0clear(&___nl__im__67);
#line 425
//clear ___nl__bool__68;
#line 425
c_rt_lib0clear(&___nl__im__69);
#line 425
c_rt_lib0clear(&___nl__im__70);
#line 425
c_rt_lib0clear(&___nl__im__84);
#line 425
c_rt_lib0clear(&___nl__im__85);
#line 425
//clear ___nl__bool__86;
#line 425
c_rt_lib0clear(&___nl__im__87);
#line 425
c_rt_lib0clear(&___nl__im__88);
#line 425
c_rt_lib0clear(&___nl__im__89);
#line 425
//clear ___nl__bool__91;
#line 425
c_rt_lib0clear(&___nl__im__92);
#line 425
c_rt_lib0clear(&___nl__im__93);
#line 425
c_rt_lib0clear(&___nl__im__94);
#line 425
c_rt_lib0clear(&___nl__im__95);
#line 425
c_rt_lib0clear(&___nl__im__96);
#line 425
//clear ___nl__bool__97;
#line 425
goto label_100;
#line 426
goto label_345;
#line 426
label_345:
;
#line 426
//clear ___nl__bool__97;
#line 427
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 427
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 427
___nl__bool__110 = c_rt_lib0check_true_native(___nl__im__111);
#line 427
c_rt_lib0clear(&___nl__im__111);
#line 427
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__6, ___nl__im__109, ___nl__bool__110));
#line 427
c_rt_lib0clear(&___nl__im__109);
#line 427
//clear ___nl__bool__110;
#line 428
c_rt_lib0move(&___nl__im__115, c_rt_lib0init_iter(___nl__im__2));
#line 428
label_355:
;
#line 428
___nl__bool__113 = c_rt_lib0is_end_hash(___nl__im__115);
#line 428
if(___nl__bool__113){ goto label_363;}
#line 428
c_rt_lib0move(&___nl__im__112, c_rt_lib0get_key_iter(___nl__im__115));
#line 428
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__112));
#line 429
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__112, ___nl__im__114));
#line 430
c_rt_lib0move(&___nl__im__115, c_rt_lib0next_iter(___nl__im__115));
#line 430
goto label_355;
#line 430
label_363:
;
#line 432
___nl__int__117 = compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__52);
#line 432
___nl__int__118 = 0;
#line 432
___nl__bool__116 = ___nl__int__117 > ___nl__int__118;
#line 432
//clear ___nl__int__117;
#line 432
//clear ___nl__int__118;
#line 432
___nl__bool__116 = !___nl__bool__116;
#line 432
if(___nl__bool__116){ goto label_404;}
#line 433
c_rt_lib0move(&___nl__im__119,___get_global_string_const(141));
#line 433
c_rt_lib0delete(c_fe_lib0print(___nl__im__119));
#line 433
c_rt_lib0clear(&___nl__im__119);
#line 434
c_rt_lib0clear(&___nl__im__52);
#line 434
//clear ___nl__int__53;
#line 434
c_rt_lib0clear(&___nl__im__54);
#line 434
//clear ___nl__bool__55;
#line 434
c_rt_lib0clear(&___nl__im__56);
#line 434
c_rt_lib0clear(&___nl__im__57);
#line 434
c_rt_lib0clear(&___nl__im__58);
#line 434
c_rt_lib0clear(&___nl__im__67);
#line 434
//clear ___nl__bool__68;
#line 434
c_rt_lib0clear(&___nl__im__69);
#line 434
c_rt_lib0clear(&___nl__im__70);
#line 434
c_rt_lib0clear(&___nl__im__84);
#line 434
c_rt_lib0clear(&___nl__im__85);
#line 434
//clear ___nl__bool__86;
#line 434
c_rt_lib0clear(&___nl__im__87);
#line 434
c_rt_lib0clear(&___nl__im__88);
#line 434
c_rt_lib0clear(&___nl__im__89);
#line 434
//clear ___nl__bool__91;
#line 434
c_rt_lib0clear(&___nl__im__92);
#line 434
c_rt_lib0clear(&___nl__im__93);
#line 434
c_rt_lib0clear(&___nl__im__94);
#line 434
c_rt_lib0clear(&___nl__im__95);
#line 434
c_rt_lib0clear(&___nl__im__96);
#line 434
c_rt_lib0clear(&___nl__im__112);
#line 434
//clear ___nl__bool__113;
#line 434
c_rt_lib0clear(&___nl__im__114);
#line 434
c_rt_lib0clear(&___nl__im__115);
#line 434
//clear ___nl__bool__116;
#line 434
goto label_100;
#line 435
goto label_404;
#line 435
label_404:
;
#line 435
//clear ___nl__bool__116;
#line 436
c_rt_lib0move(&___nl__im__123, c_rt_lib0init_iter(___nl__im__4));
#line 436
label_407:
;
#line 436
___nl__bool__121 = c_rt_lib0is_end_hash(___nl__im__123);
#line 436
if(___nl__bool__121){ goto label_417;}
#line 436
c_rt_lib0move(&___nl__im__120, c_rt_lib0get_key_iter(___nl__im__123));
#line 436
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__120));
#line 437
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__120));
#line 437
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__120, ___nl__im__124));
#line 437
c_rt_lib0clear(&___nl__im__124);
#line 438
c_rt_lib0move(&___nl__im__123, c_rt_lib0next_iter(___nl__im__123));
#line 438
goto label_407;
#line 438
label_417:
;
#line 439
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 439
___nl__bool__125 = c_rt_lib0priv_is(___nl__im__126, ___get_global_string_const(68));
#line 439
c_rt_lib0clear(&___nl__im__126);
#line 439
if(___nl__bool__125){ goto label_425;}
#line 439
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 439
___nl__bool__125 = c_rt_lib0priv_is(___nl__im__127, ___get_global_string_const(67));
#line 439
c_rt_lib0clear(&___nl__im__127);
#line 439
label_425:
;
#line 439
___nl__bool__125 = !___nl__bool__125;
#line 439
___nl__bool__125 = !___nl__bool__125;
#line 439
if(___nl__bool__125){ goto label_469;}
#line 440
c_rt_lib0move(&___nl__im__128,___get_global_string_const(142));
#line 440
c_rt_lib0delete(c_fe_lib0print(___nl__im__128));
#line 440
c_rt_lib0clear(&___nl__im__128);
#line 441
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_mk(0));
#line 442
c_rt_lib0move(&___nl__im__130, compiler_priv0translate(___nl__im__4, ___nl__im__3, &___nl__im__12));
#line 443
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 443
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 443
c_rt_lib0move(&___nl__im__131, compiler_priv0generate_modules_to_files(___nl__im__130, ___nl__im__52, ___nl__im__132, &___nl__rec__16, ___nl__im__133));
#line 443
c_rt_lib0clear(&___nl__im__132);
#line 443
c_rt_lib0clear(&___nl__im__133);
#line 444
___nl__bool__134 = c_rt_lib0priv_is(___nl__im__131, ___get_global_string_const(82));
#line 444
if(___nl__bool__134){ goto label_446;}
#line 448
___nl__bool__134 = c_rt_lib0priv_is(___nl__im__131, ___get_global_string_const(83));
#line 448
if(___nl__bool__134){ goto label_462;}
#line 448
c_rt_lib0move(&___nl__im__135,___get_global_string_const(15));
#line 448
c_rt_lib0move(&___nl__im__135, c_rt_lib0array_mk(2, ___nl__im__135, ___nl__im__131));
#line 448
nl_die_arg(___nl__im__135);
#line 444
label_446:
;
#line 444
c_rt_lib0move(&___nl__im__137, c_rt_lib0priv_as(___nl__im__131, ___get_global_string_const(82)));
#line 444
c_rt_lib0copy(&___nl__im__136, ___nl__im__137);
#line 445
c_rt_lib0move(&___nl__im__141, c_rt_lib0init_iter(___nl__im__136));
#line 445
label_450:
;
#line 445
___nl__bool__139 = c_rt_lib0is_end_hash(___nl__im__141);
#line 445
if(___nl__bool__139){ goto label_460;}
#line 445
c_rt_lib0move(&___nl__im__138, c_rt_lib0get_key_iter(___nl__im__141));
#line 445
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value(___nl__im__136, ___nl__im__138));
#line 446
c_rt_lib0move(&___nl__im__142, hash0get_value(___nl__im__2, ___nl__im__138));
#line 446
c_rt_lib0delete(hash0set_value(&___nl__im__129, ___nl__im__138, ___nl__im__142));
#line 446
c_rt_lib0clear(&___nl__im__142);
#line 447
c_rt_lib0move(&___nl__im__141, c_rt_lib0next_iter(___nl__im__141));
#line 447
goto label_450;
#line 447
label_460:
;
#line 448
goto label_466;
#line 448
label_462:
;
#line 448
c_rt_lib0move(&___nl__im__144, c_rt_lib0priv_as(___nl__im__131, ___get_global_string_const(83)));
#line 448
c_rt_lib0copy(&___nl__im__143, ___nl__im__144);
#line 449
goto label_466;
#line 449
label_466:
;
#line 450
c_rt_lib0copy(&___nl__im__4, ___nl__im__129);
#line 451
goto label_521;
#line 451
label_469:
;
#line 452
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_mk(0));
#line 453
c_rt_lib0move(&___nl__im__149, c_rt_lib0init_iter(___nl__im__4));
#line 453
label_472:
;
#line 453
___nl__bool__147 = c_rt_lib0is_end_hash(___nl__im__149);
#line 453
if(___nl__bool__147){ goto label_518;}
#line 453
c_rt_lib0move(&___nl__im__146, c_rt_lib0get_key_iter(___nl__im__149));
#line 453
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__146));
#line 454
c_rt_lib0move(&___nl__im__151,___get_global_string_const(143));
#line 454
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__146));
#line 454
c_rt_lib0clear(&___nl__im__151);
#line 454
c_rt_lib0delete(c_fe_lib0print(___nl__im__150));
#line 454
c_rt_lib0clear(&___nl__im__150);
#line 455
c_rt_lib0move(&___nl__im__154, hash0get_value(___nl__im__52, ___nl__im__146));
#line 455
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(79)));
#line 455
c_rt_lib0clear(&___nl__im__154);
#line 455
c_rt_lib0move(&___nl__im__152, compiler_priv0save_module_to_file(___nl__im__148, ___nl__im__153));
#line 455
c_rt_lib0clear(&___nl__im__153);
#line 455
___nl__bool__155 = c_rt_lib0priv_is(___nl__im__152, ___get_global_string_const(82));
#line 455
if(___nl__bool__155){ goto label_494;}
#line 458
___nl__bool__155 = c_rt_lib0priv_is(___nl__im__152, ___get_global_string_const(83));
#line 458
if(___nl__bool__155){ goto label_504;}
#line 458
c_rt_lib0move(&___nl__im__156,___get_global_string_const(15));
#line 458
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_mk(2, ___nl__im__156, ___nl__im__152));
#line 458
nl_die_arg(___nl__im__156);
#line 455
label_494:
;
#line 455
c_rt_lib0move(&___nl__im__158, c_rt_lib0priv_as(___nl__im__152, ___get_global_string_const(82)));
#line 455
c_rt_lib0copy(&___nl__im__157, ___nl__im__158);
#line 456
c_rt_lib0move(&___nl__im__160,___get_global_string_const(144));
#line 456
c_rt_lib0move(&___nl__im__159, c_rt_lib0concat_new(___nl__im__160, ___nl__im__157));
#line 456
c_rt_lib0clear(&___nl__im__160);
#line 456
c_rt_lib0delete(c_fe_lib0print(___nl__im__159));
#line 456
c_rt_lib0clear(&___nl__im__159);
#line 457
c_rt_lib0delete(hash0set_value(&___nl__im__145, ___nl__im__146, ___nl__im__148));
#line 458
goto label_508;
#line 458
label_504:
;
#line 458
c_rt_lib0move(&___nl__im__162, c_rt_lib0priv_as(___nl__im__152, ___get_global_string_const(83)));
#line 458
c_rt_lib0copy(&___nl__im__161, ___nl__im__162);
#line 459
goto label_508;
#line 459
label_508:
;
#line 459
c_rt_lib0clear(&___nl__im__152);
#line 459
//clear ___nl__bool__155;
#line 459
c_rt_lib0clear(&___nl__im__156);
#line 459
c_rt_lib0clear(&___nl__im__157);
#line 459
c_rt_lib0clear(&___nl__im__158);
#line 459
c_rt_lib0clear(&___nl__im__161);
#line 459
c_rt_lib0clear(&___nl__im__162);
#line 460
c_rt_lib0move(&___nl__im__149, c_rt_lib0next_iter(___nl__im__149));
#line 460
goto label_472;
#line 460
label_518:
;
#line 461
c_rt_lib0copy(&___nl__im__4, ___nl__im__145);
#line 462
goto label_521;
#line 462
label_521:
;
#line 462
//clear ___nl__bool__125;
#line 462
c_rt_lib0clear(&___nl__im__129);
#line 462
c_rt_lib0clear(&___nl__im__130);
#line 462
c_rt_lib0clear(&___nl__im__131);
#line 462
//clear ___nl__bool__134;
#line 462
c_rt_lib0clear(&___nl__im__135);
#line 462
c_rt_lib0clear(&___nl__im__136);
#line 462
c_rt_lib0clear(&___nl__im__137);
#line 462
c_rt_lib0clear(&___nl__im__138);
#line 462
//clear ___nl__bool__139;
#line 462
c_rt_lib0clear(&___nl__im__140);
#line 462
c_rt_lib0clear(&___nl__im__141);
#line 462
c_rt_lib0clear(&___nl__im__143);
#line 462
c_rt_lib0clear(&___nl__im__144);
#line 462
c_rt_lib0clear(&___nl__im__145);
#line 462
c_rt_lib0clear(&___nl__im__146);
#line 462
//clear ___nl__bool__147;
#line 462
c_rt_lib0clear(&___nl__im__148);
#line 462
c_rt_lib0clear(&___nl__im__149);
#line 462
c_rt_lib0clear(&___nl__im__152);
#line 462
//clear ___nl__bool__155;
#line 462
c_rt_lib0clear(&___nl__im__156);
#line 462
c_rt_lib0clear(&___nl__im__157);
#line 462
c_rt_lib0clear(&___nl__im__158);
#line 462
c_rt_lib0clear(&___nl__im__161);
#line 462
c_rt_lib0clear(&___nl__im__162);
#line 463
___nl__int__164 = hash0size(___nl__im__4);
#line 463
___nl__int__165 = 0;
#line 463
___nl__bool__163 = ___nl__int__164 > ___nl__int__165;
#line 463
//clear ___nl__int__164;
#line 463
//clear ___nl__int__165;
#line 463
___nl__bool__163 = !___nl__bool__163;
#line 463
if(___nl__bool__163){ goto label_576;}
#line 464
c_rt_lib0move(&___nl__im__168,___get_global_string_const(145));
#line 464
___nl__int__169 = hash0size(___nl__im__4);
#line 464
c_rt_lib0move(&___nl__string__170, c_rt_lib0int_to_string(___nl__int__169));
#line 464
c_rt_lib0move(&___nl__im__167, c_rt_lib0concat_new(___nl__im__168, ___nl__string__170));
#line 464
c_rt_lib0clear(&___nl__im__168);
#line 464
//clear ___nl__int__169;
#line 464
c_rt_lib0clear(&___nl__string__170);
#line 464
c_rt_lib0move(&___nl__im__171,___get_global_string_const(146));
#line 464
c_rt_lib0move(&___nl__im__166, c_rt_lib0concat_new(___nl__im__167, ___nl__im__171));
#line 464
c_rt_lib0clear(&___nl__im__167);
#line 464
c_rt_lib0clear(&___nl__im__171);
#line 465
c_rt_lib0move(&___nl__im__174, string0lf());
#line 465
c_rt_lib0move(&___nl__im__175,___get_global_string_const(144));
#line 465
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__im__175));
#line 465
c_rt_lib0clear(&___nl__im__174);
#line 465
c_rt_lib0clear(&___nl__im__175);
#line 465
c_rt_lib0move(&___nl__im__172, c_rt_lib0concat_new(___nl__im__173, ___nl__im__166));
#line 465
c_rt_lib0clear(&___nl__im__173);
#line 465
c_rt_lib0delete(c_fe_lib0print(___nl__im__172));
#line 465
c_rt_lib0clear(&___nl__im__172);
#line 466
goto label_684;
#line 466
label_576:
;
#line 467
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 467
___nl__bool__176 = c_rt_lib0priv_is(___nl__im__177, ___get_global_string_const(93));
#line 467
c_rt_lib0clear(&___nl__im__177);
#line 467
___nl__bool__176 = !___nl__bool__176;
#line 467
if(___nl__bool__176){ goto label_674;}
#line 468
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 468
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 468
c_rt_lib0move(&___nl__im__180, c_rt_lib0priv_as(___nl__im__182, ___get_global_string_const(93)));
#line 468
c_rt_lib0clear(&___nl__im__181);
#line 468
c_rt_lib0clear(&___nl__im__182);
#line 468
c_rt_lib0move(&___nl__im__179, c_fe_lib0try_exec_cmd(___nl__im__180));
#line 468
c_rt_lib0clear(&___nl__im__180);
#line 468
___nl__int__183 = 0;
#line 468
___nl__int__184 = getIntFromImm(___nl__im__179);
#line 468
___nl__bool__178 = ___nl__int__184 == ___nl__int__183;
#line 468
c_rt_lib0clear(&___nl__im__179);
#line 468
//clear ___nl__int__183;
#line 468
//clear ___nl__int__184;
#line 468
___nl__bool__178 = !___nl__bool__178;
#line 468
if(___nl__bool__178){ goto label_599;}
#line 469
___nl__bool__45 = false;
#line 470
goto label_671;
#line 470
label_599:
;
#line 471
___nl__bool__185 = ___nl__bool__45;
#line 471
___nl__bool__185 = !___nl__bool__185;
#line 471
if(___nl__bool__185){ goto label_606;}
#line 471
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_mk(0));
#line 471
nl_die_arg(___nl__im__186);
#line 471
goto label_606;
#line 471
label_606:
;
#line 471
//clear ___nl__bool__185;
#line 471
c_rt_lib0clear(&___nl__im__186);
#line 472
c_rt_lib0move(&___nl__im__191, string0lf());
#line 472
c_rt_lib0move(&___nl__im__192,___get_global_string_const(147));
#line 472
c_rt_lib0move(&___nl__im__190, c_rt_lib0concat_new(___nl__im__191, ___nl__im__192));
#line 472
c_rt_lib0clear(&___nl__im__191);
#line 472
c_rt_lib0clear(&___nl__im__192);
#line 472
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 472
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 472
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__195, ___get_global_string_const(93)));
#line 472
c_rt_lib0clear(&___nl__im__194);
#line 472
c_rt_lib0clear(&___nl__im__195);
#line 472
c_rt_lib0move(&___nl__im__189, c_rt_lib0concat_new(___nl__im__190, ___nl__im__193));
#line 472
c_rt_lib0clear(&___nl__im__190);
#line 472
c_rt_lib0clear(&___nl__im__193);
#line 472
c_rt_lib0move(&___nl__im__196,___get_global_string_const(148));
#line 472
c_rt_lib0move(&___nl__im__188, c_rt_lib0concat_new(___nl__im__189, ___nl__im__196));
#line 472
c_rt_lib0clear(&___nl__im__189);
#line 472
c_rt_lib0clear(&___nl__im__196);
#line 473
c_rt_lib0move(&___nl__im__197, string0lf());
#line 473
c_rt_lib0move(&___nl__im__187, c_rt_lib0concat_new(___nl__im__188, ___nl__im__197));
#line 473
c_rt_lib0clear(&___nl__im__188);
#line 473
c_rt_lib0clear(&___nl__im__197);
#line 473
c_rt_lib0delete(c_fe_lib0print(___nl__im__187));
#line 473
c_rt_lib0clear(&___nl__im__187);
#line 474
___nl__bool__45 = true;
#line 475
c_rt_lib0move(&___nl__im__5, compiler_priv0get_files_to_parse(___nl__im__0));
#line 476
c_rt_lib0clear(&___nl__im__52);
#line 476
//clear ___nl__int__53;
#line 476
c_rt_lib0clear(&___nl__im__54);
#line 476
//clear ___nl__bool__55;
#line 476
c_rt_lib0clear(&___nl__im__56);
#line 476
c_rt_lib0clear(&___nl__im__57);
#line 476
c_rt_lib0clear(&___nl__im__58);
#line 476
c_rt_lib0clear(&___nl__im__67);
#line 476
//clear ___nl__bool__68;
#line 476
c_rt_lib0clear(&___nl__im__69);
#line 476
c_rt_lib0clear(&___nl__im__70);
#line 476
c_rt_lib0clear(&___nl__im__84);
#line 476
c_rt_lib0clear(&___nl__im__85);
#line 476
//clear ___nl__bool__86;
#line 476
c_rt_lib0clear(&___nl__im__87);
#line 476
c_rt_lib0clear(&___nl__im__88);
#line 476
c_rt_lib0clear(&___nl__im__89);
#line 476
//clear ___nl__bool__91;
#line 476
c_rt_lib0clear(&___nl__im__92);
#line 476
c_rt_lib0clear(&___nl__im__93);
#line 476
c_rt_lib0clear(&___nl__im__94);
#line 476
c_rt_lib0clear(&___nl__im__95);
#line 476
c_rt_lib0clear(&___nl__im__96);
#line 476
c_rt_lib0clear(&___nl__im__112);
#line 476
//clear ___nl__bool__113;
#line 476
c_rt_lib0clear(&___nl__im__114);
#line 476
c_rt_lib0clear(&___nl__im__115);
#line 476
c_rt_lib0clear(&___nl__im__120);
#line 476
//clear ___nl__bool__121;
#line 476
c_rt_lib0clear(&___nl__im__122);
#line 476
c_rt_lib0clear(&___nl__im__123);
#line 476
//clear ___nl__bool__163;
#line 476
c_rt_lib0clear(&___nl__im__166);
#line 476
//clear ___nl__bool__176;
#line 476
//clear ___nl__bool__178;
#line 476
goto label_100;
#line 477
goto label_671;
#line 477
label_671:
;
#line 477
//clear ___nl__bool__178;
#line 478
goto label_674;
#line 478
label_674:
;
#line 478
//clear ___nl__bool__176;
#line 479
c_rt_lib0move(&___nl__im__199, string0lf());
#line 479
c_rt_lib0move(&___nl__im__200,___get_global_string_const(149));
#line 479
c_rt_lib0move(&___nl__im__198, c_rt_lib0concat_new(___nl__im__199, ___nl__im__200));
#line 479
c_rt_lib0clear(&___nl__im__199);
#line 479
c_rt_lib0clear(&___nl__im__200);
#line 479
c_rt_lib0delete(c_fe_lib0print(___nl__im__198));
#line 479
c_rt_lib0clear(&___nl__im__198);
#line 480
goto label_684;
#line 480
label_684:
;
#line 480
//clear ___nl__bool__163;
#line 480
c_rt_lib0clear(&___nl__im__166);
#line 481
c_rt_lib0move(&___nl__im__201,___get_global_string_const(141));
#line 481
c_rt_lib0delete(c_fe_lib0print(___nl__im__201));
#line 481
c_rt_lib0clear(&___nl__im__201);
#line 481
c_rt_lib0clear(&___nl__im__52);
#line 481
//clear ___nl__int__53;
#line 481
c_rt_lib0clear(&___nl__im__54);
#line 481
//clear ___nl__bool__55;
#line 481
c_rt_lib0clear(&___nl__im__56);
#line 481
c_rt_lib0clear(&___nl__im__57);
#line 481
c_rt_lib0clear(&___nl__im__58);
#line 481
c_rt_lib0clear(&___nl__im__67);
#line 481
//clear ___nl__bool__68;
#line 481
c_rt_lib0clear(&___nl__im__69);
#line 481
c_rt_lib0clear(&___nl__im__70);
#line 481
c_rt_lib0clear(&___nl__im__84);
#line 481
c_rt_lib0clear(&___nl__im__85);
#line 481
//clear ___nl__bool__86;
#line 481
c_rt_lib0clear(&___nl__im__87);
#line 481
c_rt_lib0clear(&___nl__im__88);
#line 481
c_rt_lib0clear(&___nl__im__89);
#line 481
//clear ___nl__bool__91;
#line 481
c_rt_lib0clear(&___nl__im__92);
#line 481
c_rt_lib0clear(&___nl__im__93);
#line 481
c_rt_lib0clear(&___nl__im__94);
#line 481
c_rt_lib0clear(&___nl__im__95);
#line 481
c_rt_lib0clear(&___nl__im__96);
#line 481
c_rt_lib0clear(&___nl__im__112);
#line 481
//clear ___nl__bool__113;
#line 481
c_rt_lib0clear(&___nl__im__114);
#line 481
c_rt_lib0clear(&___nl__im__115);
#line 481
c_rt_lib0clear(&___nl__im__120);
#line 481
//clear ___nl__bool__121;
#line 481
c_rt_lib0clear(&___nl__im__122);
#line 481
c_rt_lib0clear(&___nl__im__123);
#line 373
goto label_100;
#line 373
c_rt_lib0clear(&___nl__im__0);
#line 373
c_rt_lib0clear(&___nl__im__1);
#line 373
c_rt_lib0clear(&___nl__im__2);
#line 373
c_rt_lib0clear(&___nl__im__3);
#line 373
c_rt_lib0clear(&___nl__im__4);
#line 373
c_rt_lib0clear(&___nl__im__5);
#line 373
c_rt_lib0clear(&___nl__im__6);
#line 373
c_rt_lib0clear(&___nl__im__12);
#line 373
c_rt_lib0clear(&___nl__im__15);
#line 373
generator_c0state_t0type0clean(___nl__rec__16);;
#line 373
//clear ___nl__bool__45;
#line 373
c_rt_lib0clear(&___nl__im__52);
#line 373
//clear ___nl__int__53;
#line 373
c_rt_lib0clear(&___nl__im__54);
#line 373
//clear ___nl__bool__55;
#line 373
c_rt_lib0clear(&___nl__im__56);
#line 373
c_rt_lib0clear(&___nl__im__57);
#line 373
c_rt_lib0clear(&___nl__im__58);
#line 373
c_rt_lib0clear(&___nl__im__67);
#line 373
//clear ___nl__bool__68;
#line 373
c_rt_lib0clear(&___nl__im__69);
#line 373
c_rt_lib0clear(&___nl__im__70);
#line 373
c_rt_lib0clear(&___nl__im__84);
#line 373
c_rt_lib0clear(&___nl__im__85);
#line 373
//clear ___nl__bool__86;
#line 373
c_rt_lib0clear(&___nl__im__87);
#line 373
c_rt_lib0clear(&___nl__im__88);
#line 373
c_rt_lib0clear(&___nl__im__89);
#line 373
//clear ___nl__bool__91;
#line 373
c_rt_lib0clear(&___nl__im__92);
#line 373
c_rt_lib0clear(&___nl__im__93);
#line 373
c_rt_lib0clear(&___nl__im__94);
#line 373
c_rt_lib0clear(&___nl__im__95);
#line 373
c_rt_lib0clear(&___nl__im__96);
#line 373
c_rt_lib0clear(&___nl__im__112);
#line 373
//clear ___nl__bool__113;
#line 373
c_rt_lib0clear(&___nl__im__114);
#line 373
c_rt_lib0clear(&___nl__im__115);
#line 373
c_rt_lib0clear(&___nl__im__120);
#line 373
//clear ___nl__bool__121;
#line 373
c_rt_lib0clear(&___nl__im__122);
#line 373
c_rt_lib0clear(&___nl__im__123);
#line 373
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
#line 486
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 488
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 489
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 490
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 491
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 492
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__3, ___get_global_string_const(59), ___nl__im__4, ___get_global_string_const(60), ___nl__im__5, ___get_global_string_const(61), ___nl__im__6, ___get_global_string_const(62), ___nl__im__7));
#line 492
c_rt_lib0clear(&___nl__im__3);
#line 492
c_rt_lib0clear(&___nl__im__4);
#line 492
c_rt_lib0clear(&___nl__im__5);
#line 492
c_rt_lib0clear(&___nl__im__6);
#line 492
c_rt_lib0clear(&___nl__im__7);
#line 495
c_rt_lib0move(&___nl__im__8,___get_global_string_const(150));
#line 495
c_rt_lib0delete(profile0begin(___nl__im__8));
#line 495
c_rt_lib0clear(&___nl__im__8);
#line 496
___nl__int__9 = 0;
#line 497
c_rt_lib0move(&___nl__im__10, compiler_priv0get_files_to_parse(___nl__im__0));
#line 498
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__10));
#line 498
label_18:
;
#line 498
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 498
if(___nl__bool__12){ goto label_55;}
#line 498
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 498
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__10, ___nl__im__11));
#line 499
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(78)));
#line 499
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 499
c_rt_lib0clear(&___nl__im__16);
#line 499
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 499
if(___nl__bool__17){ goto label_33;}
#line 501
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(82));
#line 501
if(___nl__bool__17){ goto label_38;}
#line 501
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 501
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 501
nl_die_arg(___nl__im__18);
#line 499
label_33:
;
#line 499
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 499
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 500
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__11, ___nl__im__19));
#line 501
goto label_45;
#line 501
label_38:
;
#line 501
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(82)));
#line 501
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 502
___nl__int__23 = 1;
#line 502
___nl__int__9 = ___nl__int__9 + ___nl__int__23;
#line 502
//clear ___nl__int__23;
#line 503
goto label_45;
#line 503
label_45:
;
#line 503
c_rt_lib0clear(&___nl__im__15);
#line 503
//clear ___nl__bool__17;
#line 503
c_rt_lib0clear(&___nl__im__18);
#line 503
c_rt_lib0clear(&___nl__im__19);
#line 503
c_rt_lib0clear(&___nl__im__20);
#line 503
c_rt_lib0clear(&___nl__im__21);
#line 503
c_rt_lib0clear(&___nl__im__22);
#line 504
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 504
goto label_18;
#line 504
label_55:
;
#line 505
c_rt_lib0move(&___nl__im__24,___get_global_string_const(150));
#line 505
c_rt_lib0delete(profile0end(___nl__im__24));
#line 505
c_rt_lib0clear(&___nl__im__24);
#line 506
___nl__int__26 = 0;
#line 506
___nl__bool__25 = ___nl__int__9 != ___nl__int__26;
#line 506
//clear ___nl__int__26;
#line 506
___nl__bool__25 = !___nl__bool__25;
#line 506
if(___nl__bool__25){ goto label_85;}
#line 507
compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 508
___nl__int__27 = 1;
#line 508
c_rt_lib0clear(&___nl__im__0);
#line 508
c_rt_lib0clear(&___nl__im__1);
#line 508
c_rt_lib0clear(&___nl__im__2);
#line 508
//clear ___nl__int__9;
#line 508
c_rt_lib0clear(&___nl__im__10);
#line 508
c_rt_lib0clear(&___nl__im__11);
#line 508
//clear ___nl__bool__12;
#line 508
c_rt_lib0clear(&___nl__im__13);
#line 508
c_rt_lib0clear(&___nl__im__14);
#line 508
c_rt_lib0clear(&___nl__im__15);
#line 508
//clear ___nl__bool__17;
#line 508
c_rt_lib0clear(&___nl__im__18);
#line 508
c_rt_lib0clear(&___nl__im__19);
#line 508
c_rt_lib0clear(&___nl__im__20);
#line 508
c_rt_lib0clear(&___nl__im__21);
#line 508
c_rt_lib0clear(&___nl__im__22);
#line 508
//clear ___nl__bool__25;
#line 508
return ___nl__int__27;
#line 509
goto label_85;
#line 509
label_85:
;
#line 509
//clear ___nl__bool__25;
#line 509
//clear ___nl__int__27;
#line 511
c_rt_lib0move(&___nl__im__28,___get_global_string_const(151));
#line 511
c_rt_lib0delete(profile0begin(___nl__im__28));
#line 511
c_rt_lib0clear(&___nl__im__28);
#line 512
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 512
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 512
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 512
c_rt_lib0clear(&___nl__im__31);
#line 512
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__29, ___nl__bool__30));
#line 512
c_rt_lib0clear(&___nl__im__29);
#line 512
//clear ___nl__bool__30;
#line 513
c_rt_lib0move(&___nl__im__32,___get_global_string_const(152));
#line 513
c_rt_lib0delete(profile0end(___nl__im__32));
#line 513
c_rt_lib0clear(&___nl__im__32);
#line 514
c_rt_lib0move(&___nl__im__34,___get_global_string_const(153));
#line 514
___nl__bool__33 = hash0has_key(___nl__im__1, ___nl__im__34);
#line 514
c_rt_lib0clear(&___nl__im__34);
#line 514
___nl__bool__33 = !___nl__bool__33;
#line 514
if(___nl__bool__33){ goto label_114;}
#line 515
c_rt_lib0move(&___nl__im__35,___get_global_string_const(154));
#line 515
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(153)));
#line 515
c_rt_lib0move(&___nl__im__36, dfile_dbg0ssave(___nl__im__37));
#line 515
c_rt_lib0clear(&___nl__im__37);
#line 515
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__35, ___nl__im__36));
#line 515
c_rt_lib0clear(&___nl__im__35);
#line 515
c_rt_lib0clear(&___nl__im__36);
#line 516
goto label_114;
#line 516
label_114:
;
#line 516
//clear ___nl__bool__33;
#line 517
___nl__int__39 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 517
___nl__int__40 = 0;
#line 517
___nl__bool__38 = ___nl__int__39 > ___nl__int__40;
#line 517
//clear ___nl__int__39;
#line 517
//clear ___nl__int__40;
#line 517
___nl__bool__38 = !___nl__bool__38;
#line 517
if(___nl__bool__38){ goto label_143;}
#line 518
___nl__int__41 = 1;
#line 518
c_rt_lib0clear(&___nl__im__0);
#line 518
c_rt_lib0clear(&___nl__im__1);
#line 518
c_rt_lib0clear(&___nl__im__2);
#line 518
//clear ___nl__int__9;
#line 518
c_rt_lib0clear(&___nl__im__10);
#line 518
c_rt_lib0clear(&___nl__im__11);
#line 518
//clear ___nl__bool__12;
#line 518
c_rt_lib0clear(&___nl__im__13);
#line 518
c_rt_lib0clear(&___nl__im__14);
#line 518
c_rt_lib0clear(&___nl__im__15);
#line 518
//clear ___nl__bool__17;
#line 518
c_rt_lib0clear(&___nl__im__18);
#line 518
c_rt_lib0clear(&___nl__im__19);
#line 518
c_rt_lib0clear(&___nl__im__20);
#line 518
c_rt_lib0clear(&___nl__im__21);
#line 518
c_rt_lib0clear(&___nl__im__22);
#line 518
//clear ___nl__bool__38;
#line 518
return ___nl__int__41;
#line 519
goto label_143;
#line 519
label_143:
;
#line 519
//clear ___nl__bool__38;
#line 519
//clear ___nl__int__41;
#line 520
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 520
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(68));
#line 520
c_rt_lib0clear(&___nl__im__43);
#line 520
if(___nl__bool__42){ goto label_153;}
#line 520
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 520
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(67));
#line 520
c_rt_lib0clear(&___nl__im__44);
#line 520
label_153:
;
#line 520
___nl__bool__42 = !___nl__bool__42;
#line 520
___nl__bool__42 = !___nl__bool__42;
#line 520
if(___nl__bool__42){ goto label_282;}
#line 521
c_rt_lib0move(&___nl__im__45,___get_global_string_const(155));
#line 521
c_rt_lib0delete(profile0begin(___nl__im__45));
#line 521
c_rt_lib0clear(&___nl__im__45);
#line 522
;
#line 522
___nl__im_ptr__47 = &(___nl__rec__46.global_int_const0field);
#line 523
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 523
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 523
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 523
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 523
c_rt_lib0move(___nl__im_ptr__47, c_rt_lib0hash_mk(4, ___get_global_string_const(134), ___nl__im__48, ___get_global_string_const(135), ___nl__im__49, ___get_global_string_const(136), ___nl__im__50, ___get_global_string_const(137), ___nl__im__51));
#line 523
c_rt_lib0clear(&___nl__im__48);
#line 523
c_rt_lib0clear(&___nl__im__49);
#line 523
c_rt_lib0clear(&___nl__im__50);
#line 523
c_rt_lib0clear(&___nl__im__51);
#line 523
___nl__im_ptr__47 = NULL;
#line 523
___nl__im_ptr__52 = &(___nl__rec__46.global_string_const0field);
#line 524
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 524
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 524
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(0));
#line 524
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 524
c_rt_lib0move(___nl__im_ptr__52, c_rt_lib0hash_mk(4, ___get_global_string_const(134), ___nl__im__53, ___get_global_string_const(135), ___nl__im__54, ___get_global_string_const(136), ___nl__im__55, ___get_global_string_const(137), ___nl__im__56));
#line 524
c_rt_lib0clear(&___nl__im__53);
#line 524
c_rt_lib0clear(&___nl__im__54);
#line 524
c_rt_lib0clear(&___nl__im__55);
#line 524
c_rt_lib0clear(&___nl__im__56);
#line 524
___nl__im_ptr__52 = NULL;
#line 524
___nl__im_ptr__57 = &(___nl__rec__46.ret0field);
#line 525
c_rt_lib0move(___nl__im_ptr__57,___get_global_string_const(36));
#line 525
___nl__im_ptr__57 = NULL;
#line 525
___nl__im_ptr__58 = &(___nl__rec__46.header0field);
#line 526
c_rt_lib0move(___nl__im_ptr__58,___get_global_string_const(36));
#line 526
___nl__im_ptr__58 = NULL;
#line 526
___nl__im_ptr__59 = &(___nl__rec__46.fun_args0field);
#line 527
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0array_mk(0));
#line 527
___nl__im_ptr__59 = NULL;
#line 527
___nl__im_ptr__60 = &(___nl__rec__46.ret_reg_type0field);
#line 528
c_rt_lib0move(___nl__im_ptr__60, c_rt_lib0ov_mk_none(___get_global_string_const(138)));
#line 528
___nl__im_ptr__60 = NULL;
#line 528
___nl__rec_ptr__61 = &(___nl__rec__46.const0field);
#line 529
;
#line 529
___nl__int_ptr__62 = &(___nl__rec_ptr__61->dynamic_nr0field);
#line 530
(*___nl__int_ptr__62) = 0;
#line 530
___nl__int_ptr__62 = NULL;
#line 530
___nl__rec_ptr__63 = &(___nl__rec_ptr__61->int0field);
#line 531
;
#line 531
___nl__arr_ptr__64 = &(___nl__rec_ptr__63->arr0field);
#line 531
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__64));
(*___nl__arr_ptr__64).size = 0;
(*___nl__arr_ptr__64).capacity = 0;
(*___nl__arr_ptr__64).value = NULL;
#line 531
___nl__arr_ptr__64 = NULL;
#line 531
___nl__im_ptr__65 = &(___nl__rec_ptr__63->hash0field);
#line 531
c_rt_lib0move(___nl__im_ptr__65, c_rt_lib0hash_mk(0));
#line 531
___nl__im_ptr__65 = NULL;
#line 531
___nl__rec_ptr__63 = NULL;
#line 531
___nl__rec_ptr__66 = &(___nl__rec_ptr__61->string0field);
#line 532
;
#line 532
___nl__arr_ptr__67 = &(___nl__rec_ptr__66->arr0field);
#line 532
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__67));
(*___nl__arr_ptr__67).size = 0;
(*___nl__arr_ptr__67).capacity = 0;
(*___nl__arr_ptr__67).value = NULL;
#line 532
___nl__arr_ptr__67 = NULL;
#line 532
___nl__im_ptr__68 = &(___nl__rec_ptr__66->hash0field);
#line 532
c_rt_lib0move(___nl__im_ptr__68, c_rt_lib0hash_mk(0));
#line 532
___nl__im_ptr__68 = NULL;
#line 532
___nl__rec_ptr__66 = NULL;
#line 532
___nl__rec_ptr__69 = &(___nl__rec_ptr__61->singleton0field);
#line 533
;
#line 533
___nl__arr_ptr__70 = &(___nl__rec_ptr__69->arr0field);
#line 533
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__70));
(*___nl__arr_ptr__70).size = 0;
(*___nl__arr_ptr__70).capacity = 0;
(*___nl__arr_ptr__70).value = NULL;
#line 533
___nl__arr_ptr__70 = NULL;
#line 533
___nl__im_ptr__71 = &(___nl__rec_ptr__69->hash0field);
#line 533
c_rt_lib0move(___nl__im_ptr__71, c_rt_lib0hash_mk(0));
#line 533
___nl__im_ptr__71 = NULL;
#line 533
___nl__rec_ptr__69 = NULL;
#line 533
___nl__rec_ptr__61 = NULL;
#line 533
___nl__im_ptr__72 = &(___nl__rec__46.mod_name0field);
#line 535
c_rt_lib0move(___nl__im_ptr__72,___get_global_string_const(36));
#line 535
___nl__im_ptr__72 = NULL;
#line 535
___nl__hash_ptr__73 = &(___nl__rec__46.additional_imports0field);
#line 536
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__73));
(*___nl__hash_ptr__73).size = 0;
(*___nl__hash_ptr__73).capacity = 0;
(*___nl__hash_ptr__73).keys = NULL;
(*___nl__hash_ptr__73).values = NULL;
#line 536
___nl__hash_ptr__73 = NULL;
#line 536
___nl__im_ptr__74 = &(___nl__rec__46.defined_types0field);
#line 537
c_rt_lib0move(___nl__im_ptr__74, c_rt_lib0hash_mk(0));
#line 537
___nl__im_ptr__74 = NULL;
#line 539
c_rt_lib0move(&___nl__im__75,___get_global_string_const(142));
#line 539
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 539
c_rt_lib0clear(&___nl__im__75);
#line 540
c_rt_lib0move(&___nl__im__77, compiler_priv0get_mathematical_func(___nl__im__0));
#line 540
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 540
c_rt_lib0move(&___nl__im__76, post_processing0init(___nl__im__77, ___nl__im__78));
#line 540
c_rt_lib0clear(&___nl__im__77);
#line 540
c_rt_lib0clear(&___nl__im__78);
#line 541
c_rt_lib0move(&___nl__im__79,___get_global_string_const(155));
#line 541
c_rt_lib0delete(profile0end(___nl__im__79));
#line 541
c_rt_lib0clear(&___nl__im__79);
#line 543
c_rt_lib0move(&___nl__im__80,___get_global_string_const(156));
#line 543
c_rt_lib0delete(profile0begin(___nl__im__80));
#line 543
c_rt_lib0clear(&___nl__im__80);
#line 544
c_rt_lib0move(&___nl__im__81, compiler_priv0translate(___nl__im__1, ___nl__im__1, &___nl__im__76));
#line 545
c_rt_lib0move(&___nl__im__82,___get_global_string_const(156));
#line 545
c_rt_lib0delete(profile0end(___nl__im__82));
#line 545
c_rt_lib0clear(&___nl__im__82);
#line 547
c_rt_lib0move(&___nl__im__84,___get_global_string_const(153));
#line 547
___nl__bool__83 = hash0has_key(___nl__im__81, ___nl__im__84);
#line 547
c_rt_lib0clear(&___nl__im__84);
#line 547
___nl__bool__83 = !___nl__bool__83;
#line 547
if(___nl__bool__83){ goto label_268;}
#line 548
c_rt_lib0move(&___nl__im__85,___get_global_string_const(157));
#line 548
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(153)));
#line 548
c_rt_lib0move(&___nl__im__86, dfile_dbg0ssave(___nl__im__87));
#line 548
c_rt_lib0clear(&___nl__im__87);
#line 548
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__85, ___nl__im__86));
#line 548
c_rt_lib0clear(&___nl__im__85);
#line 548
c_rt_lib0clear(&___nl__im__86);
#line 549
goto label_268;
#line 549
label_268:
;
#line 549
//clear ___nl__bool__83;
#line 551
c_rt_lib0move(&___nl__im__88,___get_global_string_const(158));
#line 551
c_rt_lib0delete(profile0begin(___nl__im__88));
#line 551
c_rt_lib0clear(&___nl__im__88);
#line 552
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 552
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 552
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__81, ___nl__im__10, ___nl__im__89, &___nl__rec__46, ___nl__im__90));
#line 552
c_rt_lib0clear(&___nl__im__89);
#line 552
c_rt_lib0clear(&___nl__im__90);
#line 553
c_rt_lib0move(&___nl__im__91,___get_global_string_const(158));
#line 553
c_rt_lib0delete(profile0end(___nl__im__91));
#line 553
c_rt_lib0clear(&___nl__im__91);
#line 554
goto label_363;
#line 554
label_282:
;
#line 555
c_rt_lib0move(&___nl__im__95, c_rt_lib0init_iter(___nl__im__1));
#line 555
label_284:
;
#line 555
___nl__bool__93 = c_rt_lib0is_end_hash(___nl__im__95);
#line 555
if(___nl__bool__93){ goto label_361;}
#line 555
c_rt_lib0move(&___nl__im__92, c_rt_lib0get_key_iter(___nl__im__95));
#line 555
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__92));
#line 556
c_rt_lib0move(&___nl__im__97,___get_global_string_const(143));
#line 556
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__92));
#line 556
c_rt_lib0clear(&___nl__im__97);
#line 556
c_rt_lib0delete(c_fe_lib0print(___nl__im__96));
#line 556
c_rt_lib0clear(&___nl__im__96);
#line 557
c_rt_lib0move(&___nl__im__100, hash0get_value(___nl__im__10, ___nl__im__92));
#line 557
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(79)));
#line 557
c_rt_lib0clear(&___nl__im__100);
#line 557
c_rt_lib0move(&___nl__im__98, compiler_priv0save_module_to_file(___nl__im__94, ___nl__im__99));
#line 557
c_rt_lib0clear(&___nl__im__99);
#line 557
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(82));
#line 557
if(___nl__bool__101){ goto label_306;}
#line 560
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 560
if(___nl__bool__101){ goto label_346;}
#line 560
c_rt_lib0move(&___nl__im__102,___get_global_string_const(15));
#line 560
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(2, ___nl__im__102, ___nl__im__98));
#line 560
nl_die_arg(___nl__im__102);
#line 557
label_306:
;
#line 557
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(82)));
#line 557
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 558
c_rt_lib0move(&___nl__im__106,___get_global_string_const(144));
#line 558
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__103));
#line 558
c_rt_lib0clear(&___nl__im__106);
#line 558
c_rt_lib0delete(c_fe_lib0print(___nl__im__105));
#line 558
c_rt_lib0clear(&___nl__im__105);
#line 559
___nl__int__107 = 1;
#line 559
c_rt_lib0clear(&___nl__im__0);
#line 559
c_rt_lib0clear(&___nl__im__1);
#line 559
c_rt_lib0clear(&___nl__im__2);
#line 559
//clear ___nl__int__9;
#line 559
c_rt_lib0clear(&___nl__im__10);
#line 559
c_rt_lib0clear(&___nl__im__11);
#line 559
//clear ___nl__bool__12;
#line 559
c_rt_lib0clear(&___nl__im__13);
#line 559
c_rt_lib0clear(&___nl__im__14);
#line 559
c_rt_lib0clear(&___nl__im__15);
#line 559
//clear ___nl__bool__17;
#line 559
c_rt_lib0clear(&___nl__im__18);
#line 559
c_rt_lib0clear(&___nl__im__19);
#line 559
c_rt_lib0clear(&___nl__im__20);
#line 559
c_rt_lib0clear(&___nl__im__21);
#line 559
c_rt_lib0clear(&___nl__im__22);
#line 559
//clear ___nl__bool__42;
#line 559
generator_c0state_t0type0clean(___nl__rec__46);;
#line 559
c_rt_lib0clear(&___nl__im__76);
#line 559
c_rt_lib0clear(&___nl__im__81);
#line 559
c_rt_lib0clear(&___nl__im__92);
#line 559
//clear ___nl__bool__93;
#line 559
c_rt_lib0clear(&___nl__im__94);
#line 559
c_rt_lib0clear(&___nl__im__95);
#line 559
c_rt_lib0clear(&___nl__im__98);
#line 559
//clear ___nl__bool__101;
#line 559
c_rt_lib0clear(&___nl__im__102);
#line 559
c_rt_lib0clear(&___nl__im__103);
#line 559
c_rt_lib0clear(&___nl__im__104);
#line 559
return ___nl__int__107;
#line 560
goto label_350;
#line 560
label_346:
;
#line 560
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(83)));
#line 560
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 561
goto label_350;
#line 561
label_350:
;
#line 561
c_rt_lib0clear(&___nl__im__98);
#line 561
//clear ___nl__bool__101;
#line 561
c_rt_lib0clear(&___nl__im__102);
#line 561
c_rt_lib0clear(&___nl__im__103);
#line 561
c_rt_lib0clear(&___nl__im__104);
#line 561
//clear ___nl__int__107;
#line 561
c_rt_lib0clear(&___nl__im__108);
#line 561
c_rt_lib0clear(&___nl__im__109);
#line 562
c_rt_lib0move(&___nl__im__95, c_rt_lib0next_iter(___nl__im__95));
#line 562
goto label_284;
#line 562
label_361:
;
#line 563
goto label_363;
#line 563
label_363:
;
#line 563
//clear ___nl__bool__42;
#line 563
generator_c0state_t0type0clean(___nl__rec__46);;
#line 563
c_rt_lib0clear(&___nl__im__76);
#line 563
c_rt_lib0clear(&___nl__im__81);
#line 563
c_rt_lib0clear(&___nl__im__92);
#line 563
//clear ___nl__bool__93;
#line 563
c_rt_lib0clear(&___nl__im__94);
#line 563
c_rt_lib0clear(&___nl__im__95);
#line 563
c_rt_lib0clear(&___nl__im__98);
#line 563
//clear ___nl__bool__101;
#line 563
c_rt_lib0clear(&___nl__im__102);
#line 563
c_rt_lib0clear(&___nl__im__103);
#line 563
c_rt_lib0clear(&___nl__im__104);
#line 563
//clear ___nl__int__107;
#line 563
c_rt_lib0clear(&___nl__im__108);
#line 563
c_rt_lib0clear(&___nl__im__109);
#line 564
___nl__int__110 = 0;
#line 564
c_rt_lib0clear(&___nl__im__0);
#line 564
c_rt_lib0clear(&___nl__im__1);
#line 564
c_rt_lib0clear(&___nl__im__2);
#line 564
//clear ___nl__int__9;
#line 564
c_rt_lib0clear(&___nl__im__10);
#line 564
c_rt_lib0clear(&___nl__im__11);
#line 564
//clear ___nl__bool__12;
#line 564
c_rt_lib0clear(&___nl__im__13);
#line 564
c_rt_lib0clear(&___nl__im__14);
#line 564
c_rt_lib0clear(&___nl__im__15);
#line 564
//clear ___nl__bool__17;
#line 564
c_rt_lib0clear(&___nl__im__18);
#line 564
c_rt_lib0clear(&___nl__im__19);
#line 564
c_rt_lib0clear(&___nl__im__20);
#line 564
c_rt_lib0clear(&___nl__im__21);
#line 564
c_rt_lib0clear(&___nl__im__22);
#line 564
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
#line 568
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 572
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 572
___nl__int__4 = string0length(___nl__im__5);
#line 572
c_rt_lib0clear(&___nl__im__5);
#line 572
___nl__int__6 = 0;
#line 572
___nl__bool__3 = ___nl__int__4 == ___nl__int__6;
#line 572
//clear ___nl__int__4;
#line 572
//clear ___nl__int__6;
#line 572
___nl__bool__3 = !___nl__bool__3;
#line 572
___nl__bool__3 = !___nl__bool__3;
#line 572
if(___nl__bool__3){ goto label_32;}
#line 569
c_rt_lib0move(&___nl__im__8,___get_global_string_const(160));
#line 569
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 569
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 569
c_rt_lib0clear(&___nl__im__11);
#line 569
if(___nl__bool__10){ goto label_18;}
#line 571
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 571
goto label_24;
#line 571
label_18:
;
#line 570
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 570
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__1, ___nl__im__13));
#line 570
c_rt_lib0clear(&___nl__im__13);
#line 570
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(78)));
#line 570
c_rt_lib0clear(&___nl__im__12);
#line 570
label_24:
;
#line 570
//clear ___nl__bool__10;
#line 570
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 570
c_rt_lib0clear(&___nl__im__8);
#line 570
c_rt_lib0clear(&___nl__im__9);
#line 570
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__7));
#line 570
c_rt_lib0clear(&___nl__im__7);
#line 570
goto label_32;
#line 570
label_32:
;
#line 570
//clear ___nl__bool__3;
#line 573
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 573
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 573
c_rt_lib0clear(&___nl__im__16);
#line 573
___nl__int__17 = 1;
#line 573
___nl__int__17 = -___nl__int__17;
#line 573
___nl__bool__14 = ___nl__int__15 == ___nl__int__17;
#line 573
//clear ___nl__int__15;
#line 573
//clear ___nl__int__17;
#line 573
___nl__bool__14 = !___nl__bool__14;
#line 573
___nl__bool__14 = !___nl__bool__14;
#line 573
if(___nl__bool__14){ goto label_57;}
#line 573
c_rt_lib0move(&___nl__im__19,___get_global_string_const(162));
#line 573
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 573
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 573
c_rt_lib0clear(&___nl__im__21);
#line 573
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 573
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 573
c_rt_lib0clear(&___nl__im__19);
#line 573
//clear ___nl__int__20;
#line 573
c_rt_lib0clear(&___nl__string__22);
#line 573
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 573
c_rt_lib0clear(&___nl__im__18);
#line 573
goto label_57;
#line 573
label_57:
;
#line 573
//clear ___nl__bool__14;
#line 574
c_rt_lib0move(&___nl__im__25, string0lf());
#line 574
c_rt_lib0move(&___nl__im__26,___get_global_string_const(163));
#line 574
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 574
c_rt_lib0clear(&___nl__im__25);
#line 574
c_rt_lib0clear(&___nl__im__26);
#line 574
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(164)));
#line 574
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 574
c_rt_lib0clear(&___nl__im__24);
#line 574
c_rt_lib0clear(&___nl__im__27);
#line 574
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 574
c_rt_lib0clear(&___nl__im__23);
#line 575
c_rt_lib0clear(&___nl__im__0);
#line 575
c_rt_lib0clear(&___nl__im__1);
#line 575
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
#line 579
___nl__int__3 = 0;
#line 580
___nl__int__4 = 0;
#line 581
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 581
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 581
label_4:
;
#line 581
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 581
if(___nl__bool__7){ goto label_159;}
#line 581
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 581
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 582
c_rt_lib0move(&___nl__im__10,___get_global_string_const(165));
#line 583
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 583
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(96));
#line 583
c_rt_lib0clear(&___nl__im__12);
#line 583
___nl__bool__11 = !___nl__bool__11;
#line 583
if(___nl__bool__11){ goto label_17;}
#line 583
c_rt_lib0move(&___nl__im__10,___get_global_string_const(166));
#line 583
goto label_17;
#line 583
label_17:
;
#line 583
//clear ___nl__bool__11;
#line 584
___nl__int__14 = 0;
#line 584
___nl__int__15 = 1;
#line 584
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 584
label_22:
;
#line 584
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 584
if(___nl__bool__17){ goto label_35;}
#line 584
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 584
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 585
c_rt_lib0move(&___nl__im__20, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 585
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__10, ___nl__im__20));
#line 585
c_rt_lib0clear(&___nl__im__20);
#line 585
c_rt_lib0delete(c_fe_lib0print(___nl__im__19));
#line 585
c_rt_lib0clear(&___nl__im__19);
#line 585
c_rt_lib0clear(&___nl__im__13);
#line 586
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 586
goto label_22;
#line 586
label_35:
;
#line 587
___nl__int__21 = c_rt_lib0array_len(___nl__im__8);
#line 587
___nl__int__3 = ___nl__int__3 + ___nl__int__21;
#line 587
//clear ___nl__int__21;
#line 588
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 588
___nl__bool__22 = hash0has_key(___nl__im__23, ___nl__im__6);
#line 588
c_rt_lib0clear(&___nl__im__23);
#line 588
___nl__bool__22 = !___nl__bool__22;
#line 588
if(___nl__bool__22){ goto label_68;}
#line 589
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 589
c_rt_lib0move(&___nl__im__24, hash0get_value(___nl__im__25, ___nl__im__6));
#line 589
c_rt_lib0clear(&___nl__im__25);
#line 590
___nl__int__27 = 0;
#line 590
___nl__int__28 = 1;
#line 590
___nl__int__29 = c_rt_lib0array_len(___nl__im__24);
#line 590
label_50:
;
#line 590
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 590
if(___nl__bool__30){ goto label_63;}
#line 590
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__24, ___nl__int__27));
#line 590
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 591
c_rt_lib0move(&___nl__im__33, compiler_priv0construct_error_message(___nl__im__26, ___nl__im__2));
#line 591
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__10, ___nl__im__33));
#line 591
c_rt_lib0clear(&___nl__im__33);
#line 591
c_rt_lib0delete(c_fe_lib0print(___nl__im__32));
#line 591
c_rt_lib0clear(&___nl__im__32);
#line 591
c_rt_lib0clear(&___nl__im__26);
#line 592
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 592
goto label_50;
#line 592
label_63:
;
#line 593
___nl__int__34 = c_rt_lib0array_len(___nl__im__24);
#line 593
___nl__int__3 = ___nl__int__3 + ___nl__int__34;
#line 593
//clear ___nl__int__34;
#line 594
goto label_68;
#line 594
label_68:
;
#line 594
//clear ___nl__bool__22;
#line 594
c_rt_lib0clear(&___nl__im__24);
#line 594
c_rt_lib0clear(&___nl__im__26);
#line 594
//clear ___nl__int__27;
#line 594
//clear ___nl__int__28;
#line 594
//clear ___nl__int__29;
#line 594
//clear ___nl__bool__30;
#line 594
c_rt_lib0clear(&___nl__im__31);
#line 595
c_rt_lib0move(&___nl__im__10,___get_global_string_const(166));
#line 596
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(58)));
#line 596
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__36, ___nl__im__6));
#line 596
c_rt_lib0clear(&___nl__im__36);
#line 597
___nl__int__38 = 0;
#line 597
___nl__int__39 = 1;
#line 597
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 597
label_84:
;
#line 597
___nl__bool__41 = ___nl__int__38 >= ___nl__int__40;
#line 597
if(___nl__bool__41){ goto label_99;}
#line 597
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 597
c_rt_lib0copy(&___nl__im__37, ___nl__im__42);
#line 598
c_rt_lib0move(&___nl__im__44,___get_global_string_const(166));
#line 598
c_rt_lib0move(&___nl__im__45, compiler_priv0construct_error_message(___nl__im__37, ___nl__im__2));
#line 598
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__45));
#line 598
c_rt_lib0clear(&___nl__im__44);
#line 598
c_rt_lib0clear(&___nl__im__45);
#line 598
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 598
c_rt_lib0clear(&___nl__im__43);
#line 598
c_rt_lib0clear(&___nl__im__37);
#line 599
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 599
goto label_84;
#line 599
label_99:
;
#line 600
___nl__int__46 = c_rt_lib0array_len(___nl__im__35);
#line 600
___nl__int__4 = ___nl__int__4 + ___nl__int__46;
#line 600
//clear ___nl__int__46;
#line 601
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 601
___nl__bool__47 = hash0has_key(___nl__im__48, ___nl__im__6);
#line 601
c_rt_lib0clear(&___nl__im__48);
#line 601
___nl__bool__47 = !___nl__bool__47;
#line 601
if(___nl__bool__47){ goto label_134;}
#line 602
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 602
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__50, ___nl__im__6));
#line 602
c_rt_lib0clear(&___nl__im__50);
#line 603
___nl__int__52 = 0;
#line 603
___nl__int__53 = 1;
#line 603
___nl__int__54 = c_rt_lib0array_len(___nl__im__49);
#line 603
label_114:
;
#line 603
___nl__bool__55 = ___nl__int__52 >= ___nl__int__54;
#line 603
if(___nl__bool__55){ goto label_129;}
#line 603
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__49, ___nl__int__52));
#line 603
c_rt_lib0copy(&___nl__im__51, ___nl__im__56);
#line 604
c_rt_lib0move(&___nl__im__58,___get_global_string_const(166));
#line 604
c_rt_lib0move(&___nl__im__59, compiler_priv0construct_error_message(___nl__im__51, ___nl__im__2));
#line 604
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 604
c_rt_lib0clear(&___nl__im__58);
#line 604
c_rt_lib0clear(&___nl__im__59);
#line 604
c_rt_lib0delete(c_fe_lib0print(___nl__im__57));
#line 604
c_rt_lib0clear(&___nl__im__57);
#line 604
c_rt_lib0clear(&___nl__im__51);
#line 605
___nl__int__52 = ___nl__int__52 + ___nl__int__53;
#line 605
goto label_114;
#line 605
label_129:
;
#line 606
___nl__int__60 = c_rt_lib0array_len(___nl__im__49);
#line 606
___nl__int__4 = ___nl__int__4 + ___nl__int__60;
#line 606
//clear ___nl__int__60;
#line 607
goto label_134;
#line 607
label_134:
;
#line 607
//clear ___nl__bool__47;
#line 607
c_rt_lib0clear(&___nl__im__49);
#line 607
c_rt_lib0clear(&___nl__im__51);
#line 607
//clear ___nl__int__52;
#line 607
//clear ___nl__int__53;
#line 607
//clear ___nl__int__54;
#line 607
//clear ___nl__bool__55;
#line 607
c_rt_lib0clear(&___nl__im__56);
#line 607
c_rt_lib0clear(&___nl__im__10);
#line 607
c_rt_lib0clear(&___nl__im__13);
#line 607
//clear ___nl__int__14;
#line 607
//clear ___nl__int__15;
#line 607
//clear ___nl__int__16;
#line 607
//clear ___nl__bool__17;
#line 607
c_rt_lib0clear(&___nl__im__18);
#line 607
c_rt_lib0clear(&___nl__im__35);
#line 607
c_rt_lib0clear(&___nl__im__37);
#line 607
//clear ___nl__int__38;
#line 607
//clear ___nl__int__39;
#line 607
//clear ___nl__int__40;
#line 607
//clear ___nl__bool__41;
#line 607
c_rt_lib0clear(&___nl__im__42);
#line 608
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 608
goto label_4;
#line 608
label_159:
;
#line 609
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 609
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(167));
#line 609
if(___nl__bool__62){ goto label_168;}
#line 616
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(83));
#line 616
if(___nl__bool__62){ goto label_202;}
#line 616
c_rt_lib0move(&___nl__im__63,___get_global_string_const(15));
#line 616
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__61));
#line 616
nl_die_arg(___nl__im__63);
#line 609
label_168:
;
#line 609
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__61, ___get_global_string_const(167)));
#line 609
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 610
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 611
___nl__int__68 = 0;
#line 611
___nl__int__69 = 1;
#line 611
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 611
label_175:
;
#line 611
___nl__bool__71 = ___nl__int__68 >= ___nl__int__70;
#line 611
if(___nl__bool__71){ goto label_188;}
#line 611
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__68));
#line 611
c_rt_lib0copy(&___nl__im__67, ___nl__im__72);
#line 612
c_rt_lib0move(&___nl__im__74,___get_global_string_const(168));
#line 612
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__67, ___nl__im__74));
#line 612
c_rt_lib0clear(&___nl__im__74);
#line 612
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__73));
#line 612
c_rt_lib0clear(&___nl__im__73);
#line 612
c_rt_lib0clear(&___nl__im__67);
#line 613
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 613
goto label_175;
#line 613
label_188:
;
#line 614
c_rt_lib0move(&___nl__im__77,___get_global_string_const(169));
#line 614
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__66));
#line 614
c_rt_lib0clear(&___nl__im__77);
#line 614
c_rt_lib0move(&___nl__im__78,___get_global_string_const(170));
#line 614
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 614
c_rt_lib0clear(&___nl__im__76);
#line 614
c_rt_lib0clear(&___nl__im__78);
#line 614
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 614
c_rt_lib0clear(&___nl__im__75);
#line 615
___nl__int__79 = 1;
#line 615
___nl__int__4 = ___nl__int__4 + ___nl__int__79;
#line 615
//clear ___nl__int__79;
#line 616
goto label_204;
#line 616
label_202:
;
#line 617
goto label_204;
#line 617
label_204:
;
#line 618
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 618
___nl__bool__80 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(96));
#line 618
c_rt_lib0clear(&___nl__im__81);
#line 618
___nl__bool__80 = !___nl__bool__80;
#line 618
if(___nl__bool__80){ goto label_213;}
#line 619
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 620
___nl__int__3 = 0;
#line 621
goto label_213;
#line 621
label_213:
;
#line 621
//clear ___nl__bool__80;
#line 622
c_rt_lib0move(&___nl__im__85,___get_global_string_const(171));
#line 622
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__4));
#line 622
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 622
c_rt_lib0clear(&___nl__im__85);
#line 622
c_rt_lib0clear(&___nl__string__86);
#line 622
c_rt_lib0move(&___nl__im__87,___get_global_string_const(172));
#line 622
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 622
c_rt_lib0clear(&___nl__im__84);
#line 622
c_rt_lib0clear(&___nl__im__87);
#line 622
c_rt_lib0move(&___nl__string__88, c_rt_lib0int_to_string(___nl__int__3));
#line 622
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__string__88));
#line 622
c_rt_lib0clear(&___nl__im__83);
#line 622
c_rt_lib0clear(&___nl__string__88);
#line 622
c_rt_lib0delete(c_fe_lib0print(___nl__im__82));
#line 622
c_rt_lib0clear(&___nl__im__82);
#line 623
c_rt_lib0clear(&___nl__im__0);
#line 623
c_rt_lib0clear(&___nl__im__1);
#line 623
c_rt_lib0clear(&___nl__im__2);
#line 623
//clear ___nl__int__3;
#line 623
c_rt_lib0clear(&___nl__im__5);
#line 623
c_rt_lib0clear(&___nl__im__6);
#line 623
//clear ___nl__bool__7;
#line 623
c_rt_lib0clear(&___nl__im__8);
#line 623
c_rt_lib0clear(&___nl__im__9);
#line 623
c_rt_lib0clear(&___nl__im__10);
#line 623
c_rt_lib0clear(&___nl__im__13);
#line 623
//clear ___nl__int__14;
#line 623
//clear ___nl__int__15;
#line 623
//clear ___nl__int__16;
#line 623
//clear ___nl__bool__17;
#line 623
c_rt_lib0clear(&___nl__im__18);
#line 623
c_rt_lib0clear(&___nl__im__35);
#line 623
c_rt_lib0clear(&___nl__im__37);
#line 623
//clear ___nl__int__38;
#line 623
//clear ___nl__int__39;
#line 623
//clear ___nl__int__40;
#line 623
//clear ___nl__bool__41;
#line 623
c_rt_lib0clear(&___nl__im__42);
#line 623
c_rt_lib0clear(&___nl__im__61);
#line 623
//clear ___nl__bool__62;
#line 623
c_rt_lib0clear(&___nl__im__63);
#line 623
c_rt_lib0clear(&___nl__im__64);
#line 623
c_rt_lib0clear(&___nl__im__65);
#line 623
c_rt_lib0clear(&___nl__im__66);
#line 623
c_rt_lib0clear(&___nl__im__67);
#line 623
//clear ___nl__int__68;
#line 623
//clear ___nl__int__69;
#line 623
//clear ___nl__int__70;
#line 623
//clear ___nl__bool__71;
#line 623
c_rt_lib0clear(&___nl__im__72);
#line 623
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
#line 628
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 629
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 630
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__1));
#line 630
label_3:
;
#line 630
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 630
if(___nl__bool__6){ goto label_61;}
#line 630
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 630
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__5));
#line 631
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(173)));
#line 631
___nl__int__11 = 0;
#line 631
___nl__int__12 = 1;
#line 631
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 631
label_12:
;
#line 631
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 631
if(___nl__bool__14){ goto label_46;}
#line 631
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 631
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 632
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(174)));
#line 632
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(81));
#line 632
if(___nl__bool__17){ goto label_25;}
#line 633
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(80));
#line 633
if(___nl__bool__17){ goto label_27;}
#line 633
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 633
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__16));
#line 633
nl_die_arg(___nl__im__18);
#line 632
label_25:
;
#line 633
goto label_42;
#line 633
label_27:
;
#line 633
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(80)));
#line 633
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 634
c_rt_lib0move(&___nl__im__24,___get_global_string_const(34));
#line 634
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__5, ___nl__im__24));
#line 634
c_rt_lib0clear(&___nl__im__24);
#line 634
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(175)));
#line 634
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 634
c_rt_lib0clear(&___nl__im__23);
#line 634
c_rt_lib0clear(&___nl__im__25);
#line 634
c_rt_lib0copy(&___nl__im__21, ___nl__im__19);
#line 634
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__4, ___nl__im__22, ___nl__im__21));
#line 634
c_rt_lib0clear(&___nl__im__21);
#line 634
c_rt_lib0clear(&___nl__im__22);
#line 635
goto label_42;
#line 635
label_42:
;
#line 635
c_rt_lib0clear(&___nl__im__10);
#line 636
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 636
goto label_12;
#line 636
label_46:
;
#line 636
c_rt_lib0clear(&___nl__im__9);
#line 636
c_rt_lib0clear(&___nl__im__10);
#line 636
//clear ___nl__int__11;
#line 636
//clear ___nl__int__12;
#line 636
//clear ___nl__int__13;
#line 636
//clear ___nl__bool__14;
#line 636
c_rt_lib0clear(&___nl__im__15);
#line 636
c_rt_lib0clear(&___nl__im__16);
#line 636
//clear ___nl__bool__17;
#line 636
c_rt_lib0clear(&___nl__im__18);
#line 636
c_rt_lib0clear(&___nl__im__19);
#line 636
c_rt_lib0clear(&___nl__im__20);
#line 637
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 637
goto label_3;
#line 637
label_61:
;
#line 638
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__0));
#line 638
label_63:
;
#line 638
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 638
if(___nl__bool__27){ goto label_73;}
#line 638
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 638
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__26));
#line 639
c_rt_lib0move(&___nl__im__30, translator0translate(___nl__im__28, ___nl__im__4));
#line 640
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__26, ___nl__im__30));
#line 640
c_rt_lib0clear(&___nl__im__30);
#line 641
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 641
goto label_63;
#line 641
label_73:
;
#line 642
c_rt_lib0delete(post_processing0find(___ref___im__2, &___nl__im__3));
#line 643
c_rt_lib0clear(&___nl__im__0);
#line 643
c_rt_lib0clear(&___nl__im__1);
#line 643
c_rt_lib0clear(&___nl__im__4);
#line 643
c_rt_lib0clear(&___nl__im__5);
#line 643
//clear ___nl__bool__6;
#line 643
c_rt_lib0clear(&___nl__im__7);
#line 643
c_rt_lib0clear(&___nl__im__8);
#line 643
c_rt_lib0clear(&___nl__im__9);
#line 643
c_rt_lib0clear(&___nl__im__10);
#line 643
//clear ___nl__int__11;
#line 643
//clear ___nl__int__12;
#line 643
//clear ___nl__int__13;
#line 643
//clear ___nl__bool__14;
#line 643
c_rt_lib0clear(&___nl__im__15);
#line 643
c_rt_lib0clear(&___nl__im__16);
#line 643
//clear ___nl__bool__17;
#line 643
c_rt_lib0clear(&___nl__im__18);
#line 643
c_rt_lib0clear(&___nl__im__19);
#line 643
c_rt_lib0clear(&___nl__im__20);
#line 643
c_rt_lib0clear(&___nl__im__26);
#line 643
//clear ___nl__bool__27;
#line 643
c_rt_lib0clear(&___nl__im__28);
#line 643
c_rt_lib0clear(&___nl__im__29);
#line 643
c_rt_lib0clear(&___nl__im__30);
#line 643
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
#line 648
c_rt_lib0move(&___nl__im__4,___get_global_string_const(176));
#line 648
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 648
c_rt_lib0clear(&___nl__im__4);
#line 649
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 650
___nl__bool__6 = ___nl__bool__3;
#line 650
___nl__bool__6 = !___nl__bool__6;
#line 650
if(___nl__bool__6){ goto label_52;}
#line 651
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 652
c_rt_lib0move(&___nl__im__9,___get_global_string_const(177));
#line 652
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 652
c_rt_lib0clear(&___nl__im__9);
#line 652
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 652
if(___nl__bool__10){ goto label_18;}
#line 655
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(82));
#line 655
if(___nl__bool__10){ goto label_28;}
#line 655
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 655
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 655
nl_die_arg(___nl__im__11);
#line 652
label_18:
;
#line 652
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 652
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 653
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 654
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 654
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 654
c_rt_lib0clear(&___nl__im__15);
#line 654
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 654
c_rt_lib0clear(&___nl__im__14);
#line 655
goto label_32;
#line 655
label_28:
;
#line 655
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(82)));
#line 655
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 656
goto label_32;
#line 656
label_32:
;
#line 657
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 658
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 659
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 659
label_36:
;
#line 659
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 659
if(___nl__bool__21){ goto label_49;}
#line 659
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 659
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 660
___nl__bool__24 = true;
#line 660
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 660
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 660
//clear ___nl__bool__24;
#line 660
c_rt_lib0clear(&___nl__im__25);
#line 661
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 662
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 662
goto label_36;
#line 662
label_49:
;
#line 664
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 665
goto label_52;
#line 665
label_52:
;
#line 665
//clear ___nl__bool__6;
#line 665
c_rt_lib0clear(&___nl__im__7);
#line 665
c_rt_lib0clear(&___nl__im__8);
#line 665
//clear ___nl__bool__10;
#line 665
c_rt_lib0clear(&___nl__im__11);
#line 665
c_rt_lib0clear(&___nl__im__12);
#line 665
c_rt_lib0clear(&___nl__im__13);
#line 665
c_rt_lib0clear(&___nl__im__16);
#line 665
c_rt_lib0clear(&___nl__im__17);
#line 665
c_rt_lib0clear(&___nl__im__18);
#line 665
c_rt_lib0clear(&___nl__im__19);
#line 665
c_rt_lib0clear(&___nl__im__20);
#line 665
//clear ___nl__bool__21;
#line 665
c_rt_lib0clear(&___nl__im__22);
#line 665
c_rt_lib0clear(&___nl__im__23);
#line 666
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 666
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 666
c_rt_lib0clear(&___nl__im__27);
#line 667
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 667
___nl__int__30 = 0;
#line 667
___nl__int__31 = 1;
#line 667
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 667
label_75:
;
#line 667
___nl__bool__33 = ___nl__int__30 >= ___nl__int__32;
#line 667
if(___nl__bool__33){ goto label_109;}
#line 667
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 667
c_rt_lib0copy(&___nl__im__29, ___nl__im__34);
#line 668
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 669
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 669
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(159)));
#line 669
___nl__bool__36 = hash0has_key(___nl__im__37, ___nl__im__38);
#line 669
c_rt_lib0clear(&___nl__im__37);
#line 669
c_rt_lib0clear(&___nl__im__38);
#line 669
___nl__bool__36 = !___nl__bool__36;
#line 669
if(___nl__bool__36){ goto label_94;}
#line 670
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 670
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(159)));
#line 670
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__39, ___nl__im__40));
#line 670
c_rt_lib0clear(&___nl__im__39);
#line 670
c_rt_lib0clear(&___nl__im__40);
#line 671
goto label_94;
#line 671
label_94:
;
#line 671
//clear ___nl__bool__36;
#line 672
c_rt_lib0delete(array0push(&___nl__im__35, ___nl__im__29));
#line 673
c_rt_lib0move(&___nl__im__41,___get_global_string_const(60));
#line 673
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 673
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(159)));
#line 673
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__42, ___nl__im__35));
#line 673
c_rt_lib0move(&___nl__string__43,___get_global_string_const(60));
#line 673
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 673
c_rt_lib0clear(&___nl__im__41);
#line 673
c_rt_lib0clear(&___nl__im__42);
#line 673
c_rt_lib0clear(&___nl__string__43);
#line 673
c_rt_lib0clear(&___nl__im__29);
#line 674
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 674
goto label_75;
#line 674
label_109:
;
#line 675
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(130)));
#line 675
___nl__int__46 = 0;
#line 675
___nl__int__47 = 1;
#line 675
___nl__int__48 = c_rt_lib0array_len(___nl__im__44);
#line 675
label_114:
;
#line 675
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 675
if(___nl__bool__49){ goto label_148;}
#line 675
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__44, ___nl__int__46));
#line 675
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 676
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 677
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 677
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(159)));
#line 677
___nl__bool__52 = hash0has_key(___nl__im__53, ___nl__im__54);
#line 677
c_rt_lib0clear(&___nl__im__53);
#line 677
c_rt_lib0clear(&___nl__im__54);
#line 677
___nl__bool__52 = !___nl__bool__52;
#line 677
if(___nl__bool__52){ goto label_133;}
#line 678
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 678
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(159)));
#line 678
c_rt_lib0move(&___nl__im__51, hash0get_value(___nl__im__55, ___nl__im__56));
#line 678
c_rt_lib0clear(&___nl__im__55);
#line 678
c_rt_lib0clear(&___nl__im__56);
#line 679
goto label_133;
#line 679
label_133:
;
#line 679
//clear ___nl__bool__52;
#line 680
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__45));
#line 681
c_rt_lib0move(&___nl__im__57,___get_global_string_const(61));
#line 681
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 681
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(159)));
#line 681
c_rt_lib0delete(hash0set_value(&___nl__im__57, ___nl__im__58, ___nl__im__51));
#line 681
c_rt_lib0move(&___nl__string__59,___get_global_string_const(61));
#line 681
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 681
c_rt_lib0clear(&___nl__im__57);
#line 681
c_rt_lib0clear(&___nl__im__58);
#line 681
c_rt_lib0clear(&___nl__string__59);
#line 681
c_rt_lib0clear(&___nl__im__45);
#line 682
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 682
goto label_114;
#line 682
label_148:
;
#line 683
___nl__int__61 = 0;
#line 683
___nl__bool__60 = ___nl__int__26 == ___nl__int__61;
#line 683
//clear ___nl__int__61;
#line 683
___nl__bool__60 = !___nl__bool__60;
#line 683
___nl__bool__60 = !___nl__bool__60;
#line 683
if(___nl__bool__60){ goto label_167;}
#line 683
c_rt_lib0move(&___nl__im__64,___get_global_string_const(178));
#line 683
c_rt_lib0move(&___nl__string__65, c_rt_lib0int_to_string(___nl__int__26));
#line 683
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__string__65));
#line 683
c_rt_lib0clear(&___nl__im__64);
#line 683
c_rt_lib0clear(&___nl__string__65);
#line 683
c_rt_lib0move(&___nl__im__66,___get_global_string_const(179));
#line 683
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__66));
#line 683
c_rt_lib0clear(&___nl__im__63);
#line 683
c_rt_lib0clear(&___nl__im__66);
#line 683
c_rt_lib0delete(c_fe_lib0print(___nl__im__62));
#line 683
c_rt_lib0clear(&___nl__im__62);
#line 683
goto label_167;
#line 683
label_167:
;
#line 683
//clear ___nl__bool__60;
#line 684
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(0));
#line 685
c_rt_lib0move(&___nl__im__71, c_rt_lib0init_iter((*___ref___im__0)));
#line 685
label_171:
;
#line 685
___nl__bool__69 = c_rt_lib0is_end_hash(___nl__im__71);
#line 685
if(___nl__bool__69){ goto label_204;}
#line 685
c_rt_lib0move(&___nl__im__68, c_rt_lib0get_key_iter(___nl__im__71));
#line 685
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__68));
#line 686
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(0));
#line 687
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(180)));
#line 687
___nl__int__75 = 0;
#line 687
___nl__int__76 = 1;
#line 687
___nl__int__77 = c_rt_lib0array_len(___nl__im__73);
#line 687
label_181:
;
#line 687
___nl__bool__78 = ___nl__int__75 >= ___nl__int__77;
#line 687
if(___nl__bool__78){ goto label_192;}
#line 687
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__73, ___nl__int__75));
#line 687
c_rt_lib0copy(&___nl__im__74, ___nl__im__79);
#line 688
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(175)));
#line 688
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__80));
#line 688
c_rt_lib0clear(&___nl__im__80);
#line 688
c_rt_lib0clear(&___nl__im__74);
#line 689
___nl__int__75 = ___nl__int__75 + ___nl__int__76;
#line 689
goto label_181;
#line 689
label_192:
;
#line 690
c_rt_lib0delete(hash0set_value(&___nl__im__67, ___nl__im__68, ___nl__im__72));
#line 690
c_rt_lib0clear(&___nl__im__72);
#line 690
c_rt_lib0clear(&___nl__im__73);
#line 690
c_rt_lib0clear(&___nl__im__74);
#line 690
//clear ___nl__int__75;
#line 690
//clear ___nl__int__76;
#line 690
//clear ___nl__int__77;
#line 690
//clear ___nl__bool__78;
#line 690
c_rt_lib0clear(&___nl__im__79);
#line 691
c_rt_lib0move(&___nl__im__71, c_rt_lib0next_iter(___nl__im__71));
#line 691
goto label_171;
#line 691
label_204:
;
#line 692
c_rt_lib0move(&___nl__im__81, module_checker0search_loops(___nl__im__67));
#line 692
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 692
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(62), ___nl__im__82);
#line 692
c_rt_lib0clear(&___nl__im__81);
#line 692
c_rt_lib0clear(&___nl__im__82);
#line 693
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(80));
#line 693
___nl__bool__83 = !___nl__bool__83;
#line 693
if(___nl__bool__83){ goto label_253;}
#line 694
c_rt_lib0move(&___nl__im__85,___get_global_string_const(181));
#line 694
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 694
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(182)));
#line 694
c_rt_lib0clear(&___nl__im__88);
#line 694
___nl__int__86 = c_rt_lib0array_len(___nl__im__87);
#line 694
c_rt_lib0clear(&___nl__im__87);
#line 694
c_rt_lib0move(&___nl__string__89, c_rt_lib0int_to_string(___nl__int__86));
#line 694
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__89));
#line 694
c_rt_lib0clear(&___nl__im__85);
#line 694
//clear ___nl__int__86;
#line 694
c_rt_lib0clear(&___nl__string__89);
#line 694
c_rt_lib0delete(c_fe_lib0print(___nl__im__84));
#line 694
c_rt_lib0clear(&___nl__im__84);
#line 695
c_rt_lib0move(&___nl__im__91,___get_global_string_const(183));
#line 695
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 695
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(184)));
#line 695
c_rt_lib0clear(&___nl__im__94);
#line 695
___nl__int__92 = c_rt_lib0array_len(___nl__im__93);
#line 695
c_rt_lib0clear(&___nl__im__93);
#line 695
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__92));
#line 695
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__string__95));
#line 695
c_rt_lib0clear(&___nl__im__91);
#line 695
//clear ___nl__int__92;
#line 695
c_rt_lib0clear(&___nl__string__95);
#line 695
c_rt_lib0delete(c_fe_lib0print(___nl__im__90));
#line 695
c_rt_lib0clear(&___nl__im__90);
#line 696
c_rt_lib0move(&___nl__im__96, reference_generator0generate((*___ref___im__0)));
#line 697
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(80)));
#line 697
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 697
c_rt_lib0move(&___nl__im__100, compiler_priv0serialize_deref(___nl__im__101, ___nl__im__96));
#line 697
c_rt_lib0clear(&___nl__im__101);
#line 697
c_rt_lib0move(&___nl__im__98, c_fe_lib0string_to_file(___nl__im__99, ___nl__im__100));
#line 697
c_rt_lib0clear(&___nl__im__99);
#line 697
c_rt_lib0clear(&___nl__im__100);
#line 697
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 697
if(___nl__bool__97){ goto label_251;}
#line 697
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(185), ___nl__im__98));
#line 697
nl_die_arg(___nl__im__98);
#line 697
label_251:
;
#line 698
goto label_253;
#line 698
label_253:
;
#line 698
//clear ___nl__bool__83;
#line 698
c_rt_lib0clear(&___nl__im__96);
#line 698
//clear ___nl__bool__97;
#line 698
c_rt_lib0clear(&___nl__im__98);
#line 698
c_rt_lib0clear(&___nl__im__2);
#line 698
//clear ___nl__bool__3;
#line 698
c_rt_lib0clear(&___nl__im__5);
#line 698
//clear ___nl__int__26;
#line 698
c_rt_lib0clear(&___nl__im__28);
#line 698
c_rt_lib0clear(&___nl__im__29);
#line 698
//clear ___nl__int__30;
#line 698
//clear ___nl__int__31;
#line 698
//clear ___nl__int__32;
#line 698
//clear ___nl__bool__33;
#line 698
c_rt_lib0clear(&___nl__im__34);
#line 698
c_rt_lib0clear(&___nl__im__35);
#line 698
c_rt_lib0clear(&___nl__im__44);
#line 698
c_rt_lib0clear(&___nl__im__45);
#line 698
//clear ___nl__int__46;
#line 698
//clear ___nl__int__47;
#line 698
//clear ___nl__int__48;
#line 698
//clear ___nl__bool__49;
#line 698
c_rt_lib0clear(&___nl__im__50);
#line 698
c_rt_lib0clear(&___nl__im__51);
#line 698
c_rt_lib0clear(&___nl__im__67);
#line 698
c_rt_lib0clear(&___nl__im__68);
#line 698
//clear ___nl__bool__69;
#line 698
c_rt_lib0clear(&___nl__im__70);
#line 698
c_rt_lib0clear(&___nl__im__71);
#line 698
c_rt_lib0clear(&___nl__im__72);
#line 698
c_rt_lib0clear(&___nl__im__73);
#line 698
c_rt_lib0clear(&___nl__im__74);
#line 698
//clear ___nl__int__75;
#line 698
//clear ___nl__int__76;
#line 698
//clear ___nl__int__77;
#line 698
//clear ___nl__bool__78;
#line 698
c_rt_lib0clear(&___nl__im__79);
#line 698
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
#line 702
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 703
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 703
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 703
c_rt_lib0clear(&___nl__im__3);
#line 704
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 705
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_string_const(186), ___get_global_string_const(187)));
#line 705
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 705
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 705
c_rt_lib0clear(&___nl__im__6);
#line 705
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 705
c_rt_lib0clear(&___nl__im__5);
#line 705
c_rt_lib0clear(&___nl__im__0);
#line 705
c_rt_lib0clear(&___nl__im__1);
#line 705
c_rt_lib0clear(&___nl__im__2);
#line 705
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
#line 710
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 711
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(184)));
#line 711
___nl__int__4 = 0;
#line 711
___nl__int__5 = 1;
#line 711
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 711
label_5:
;
#line 711
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 711
if(___nl__bool__7){ goto label_18;}
#line 711
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 711
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 712
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(182), ___nl__im__3));
#line 712
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__10));
#line 712
c_rt_lib0clear(&___nl__im__10);
#line 712
c_rt_lib0array_push(&___nl__im__1, ___nl__im__9);
#line 712
c_rt_lib0clear(&___nl__im__9);
#line 712
c_rt_lib0clear(&___nl__im__3);
#line 713
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 713
goto label_5;
#line 713
label_18:
;
#line 715
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(182)));
#line 715
___nl__int__13 = 0;
#line 715
___nl__int__14 = 1;
#line 715
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 715
label_23:
;
#line 715
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 715
if(___nl__bool__16){ goto label_36;}
#line 715
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 715
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 716
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(184), ___nl__im__12));
#line 716
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__19));
#line 716
c_rt_lib0clear(&___nl__im__19);
#line 716
c_rt_lib0array_push(&___nl__im__1, ___nl__im__18);
#line 716
c_rt_lib0clear(&___nl__im__18);
#line 716
c_rt_lib0clear(&___nl__im__12);
#line 717
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 717
goto label_23;
#line 717
label_36:
;
#line 718
c_rt_lib0clear(&___nl__im__0);
#line 718
c_rt_lib0clear(&___nl__im__2);
#line 718
c_rt_lib0clear(&___nl__im__3);
#line 718
//clear ___nl__int__4;
#line 718
//clear ___nl__int__5;
#line 718
//clear ___nl__int__6;
#line 718
//clear ___nl__bool__7;
#line 718
c_rt_lib0clear(&___nl__im__8);
#line 718
c_rt_lib0clear(&___nl__im__11);
#line 718
c_rt_lib0clear(&___nl__im__12);
#line 718
//clear ___nl__int__13;
#line 718
//clear ___nl__int__14;
#line 718
//clear ___nl__int__15;
#line 718
//clear ___nl__bool__16;
#line 718
c_rt_lib0clear(&___nl__im__17);
#line 718
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
#line 722
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 722
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(83));
#line 722
if(___nl__bool__4){ goto label_8;}
#line 723
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(82));
#line 723
if(___nl__bool__4){ goto label_12;}
#line 723
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 723
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 723
nl_die_arg(___nl__im__5);
#line 722
label_8:
;
#line 722
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(83)));
#line 722
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 723
goto label_22;
#line 723
label_12:
;
#line 723
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(82)));
#line 723
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 724
c_rt_lib0move(&___nl__im__11,___get_global_string_const(144));
#line 724
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 724
c_rt_lib0clear(&___nl__im__11);
#line 724
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 724
c_rt_lib0clear(&___nl__im__10);
#line 725
c_rt_lib0move(___ref___im__2,c_rt_lib0ov_mk_none(___get_global_string_const(188)));
#line 726
goto label_22;
#line 726
label_22:
;
#line 726
c_rt_lib0clear(&___nl__im__0);
#line 726
c_rt_lib0clear(&___nl__im__1);
#line 726
c_rt_lib0clear(&___nl__im__3);
#line 726
//clear ___nl__bool__4;
#line 726
c_rt_lib0clear(&___nl__im__5);
#line 726
c_rt_lib0clear(&___nl__im__6);
#line 726
c_rt_lib0clear(&___nl__im__7);
#line 726
c_rt_lib0clear(&___nl__im__8);
#line 726
c_rt_lib0clear(&___nl__im__9);
#line 726
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
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
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
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
bool  ___nl__bool__99 = false;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
INT  ___nl__int__102 = 0;
INT  ___nl__int__103 = 0;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
#line 734
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 735
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(64));
#line 735
if(___nl__bool__6){ goto label_16;}
#line 743
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(65));
#line 743
if(___nl__bool__6){ goto label_56;}
#line 757
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(66));
#line 757
if(___nl__bool__6){ goto label_126;}
#line 775
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(67));
#line 775
if(___nl__bool__6){ goto label_224;}
#line 777
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(68));
#line 777
if(___nl__bool__6){ goto label_228;}
#line 779
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(69));
#line 779
if(___nl__bool__6){ goto label_232;}
#line 779
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 779
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 779
nl_die_arg(___nl__im__7);
#line 735
label_16:
;
#line 736
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 736
label_18:
;
#line 736
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 736
if(___nl__bool__9){ goto label_54;}
#line 736
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 736
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 737
c_rt_lib0move(&___nl__im__12,c_rt_lib0ov_mk_none(___get_global_string_const(189)));
#line 738
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 738
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(79)));
#line 738
c_rt_lib0clear(&___nl__im__15);
#line 738
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 738
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(79)));
#line 738
c_rt_lib0clear(&___nl__im__17);
#line 738
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(64)));
#line 738
c_rt_lib0clear(&___nl__im__14);
#line 738
c_rt_lib0clear(&___nl__im__16);
#line 739
c_rt_lib0move(&___nl__im__19,___get_global_string_const(143));
#line 739
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 739
c_rt_lib0clear(&___nl__im__19);
#line 739
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 739
c_rt_lib0clear(&___nl__im__18);
#line 740
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 740
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 740
c_rt_lib0clear(&___nl__im__20);
#line 741
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 741
___nl__bool__21 = !___nl__bool__21;
#line 741
if(___nl__bool__21){ goto label_48;}
#line 741
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 741
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 741
c_rt_lib0clear(&___nl__im__22);
#line 741
goto label_48;
#line 741
label_48:
;
#line 741
//clear ___nl__bool__21;
#line 741
c_rt_lib0clear(&___nl__im__12);
#line 741
c_rt_lib0clear(&___nl__im__13);
#line 742
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 742
goto label_18;
#line 742
label_54:
;
#line 743
goto label_255;
#line 743
label_56:
;
#line 744
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 745
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(189)));
#line 746
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(190)));
#line 746
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 746
label_61:
;
#line 746
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 746
if(___nl__bool__27){ goto label_103;}
#line 746
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 746
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 747
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(189)));
#line 748
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 748
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(79)));
#line 748
c_rt_lib0clear(&___nl__im__32);
#line 748
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 748
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(79)));
#line 748
c_rt_lib0clear(&___nl__im__34);
#line 748
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(65)));
#line 748
c_rt_lib0clear(&___nl__im__31);
#line 748
c_rt_lib0clear(&___nl__im__33);
#line 749
c_rt_lib0move(&___nl__im__36,___get_global_string_const(143));
#line 749
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 749
c_rt_lib0clear(&___nl__im__36);
#line 749
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 749
c_rt_lib0clear(&___nl__im__35);
#line 750
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(65)));
#line 750
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(65)));
#line 750
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 750
c_rt_lib0clear(&___nl__im__37);
#line 750
c_rt_lib0clear(&___nl__im__38);
#line 751
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(72)));
#line 751
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(72)));
#line 751
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 751
c_rt_lib0clear(&___nl__im__39);
#line 751
c_rt_lib0clear(&___nl__im__40);
#line 752
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 752
___nl__bool__41 = !___nl__bool__41;
#line 752
if(___nl__bool__41){ goto label_98;}
#line 752
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 752
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 752
c_rt_lib0clear(&___nl__im__42);
#line 752
goto label_98;
#line 752
label_98:
;
#line 752
//clear ___nl__bool__41;
#line 752
c_rt_lib0clear(&___nl__im__30);
#line 753
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 753
goto label_61;
#line 753
label_103:
;
#line 754
c_rt_lib0move(&___nl__im__43,___get_global_string_const(191));
#line 754
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 754
c_rt_lib0clear(&___nl__im__43);
#line 755
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(192)));
#line 755
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(65)));
#line 755
c_rt_lib0clear(&___nl__im__45);
#line 755
c_rt_lib0move(&___nl__im__47,___get_global_string_const(193));
#line 755
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 755
c_rt_lib0clear(&___nl__im__47);
#line 755
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 755
c_rt_lib0clear(&___nl__im__44);
#line 755
c_rt_lib0clear(&___nl__im__46);
#line 756
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(192)));
#line 756
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(72)));
#line 756
c_rt_lib0clear(&___nl__im__49);
#line 756
c_rt_lib0move(&___nl__im__51,___get_global_string_const(194));
#line 756
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 756
c_rt_lib0clear(&___nl__im__51);
#line 756
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 756
c_rt_lib0clear(&___nl__im__48);
#line 756
c_rt_lib0clear(&___nl__im__50);
#line 757
goto label_255;
#line 757
label_126:
;
#line 757
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(66)));
#line 757
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 758
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__0));
#line 758
label_130:
;
#line 758
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 758
if(___nl__bool__55){ goto label_222;}
#line 758
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 758
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__54));
#line 759
c_rt_lib0move(&___nl__im__58,c_rt_lib0ov_mk_none(___get_global_string_const(189)));
#line 760
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 761
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 761
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(79)));
#line 761
c_rt_lib0clear(&___nl__im__62);
#line 761
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 761
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(79)));
#line 761
c_rt_lib0clear(&___nl__im__64);
#line 761
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(66)));
#line 761
c_rt_lib0clear(&___nl__im__61);
#line 761
c_rt_lib0clear(&___nl__im__63);
#line 762
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 762
___nl__bool__65 = c_rt_lib0check_true_native(___nl__im__66);
#line 762
c_rt_lib0clear(&___nl__im__66);
#line 762
___nl__bool__65 = !___nl__bool__65;
#line 762
if(___nl__bool__65){ goto label_155;}
#line 763
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(74)));
#line 763
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__67));
#line 763
c_rt_lib0clear(&___nl__im__67);
#line 764
goto label_155;
#line 764
label_155:
;
#line 764
//clear ___nl__bool__65;
#line 765
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(70)));
#line 765
c_rt_lib0move(&___nl__im__68, generator_js0generate(___nl__im__56, ___nl__im__69, ___nl__im__59));
#line 765
c_rt_lib0clear(&___nl__im__69);
#line 766
c_rt_lib0move(&___nl__im__71,___get_global_string_const(143));
#line 766
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__54));
#line 766
c_rt_lib0clear(&___nl__im__71);
#line 766
c_rt_lib0delete(c_fe_lib0print(___nl__im__70));
#line 766
c_rt_lib0clear(&___nl__im__70);
#line 767
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(66)));
#line 767
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(66)));
#line 767
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__72, ___nl__im__73, &___nl__im__58));
#line 767
c_rt_lib0clear(&___nl__im__72);
#line 767
c_rt_lib0clear(&___nl__im__73);
#line 768
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 768
___nl__bool__74 = c_rt_lib0check_true_native(___nl__im__75);
#line 768
c_rt_lib0clear(&___nl__im__75);
#line 768
___nl__bool__74 = !___nl__bool__74;
#line 768
if(___nl__bool__74){ goto label_205;}
#line 769
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(73)));
#line 769
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__76));
#line 769
c_rt_lib0clear(&___nl__im__76);
#line 770
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(71)));
#line 770
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(75)));
#line 770
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__77, ___nl__im__78, &___nl__im__58));
#line 770
c_rt_lib0clear(&___nl__im__77);
#line 770
c_rt_lib0clear(&___nl__im__78);
#line 771
c_rt_lib0move(&___nl__im__83,___get_global_string_const(195));
#line 771
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 771
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(78)));
#line 771
c_rt_lib0clear(&___nl__im__85);
#line 771
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 771
c_rt_lib0clear(&___nl__im__83);
#line 771
c_rt_lib0clear(&___nl__im__84);
#line 771
c_rt_lib0move(&___nl__im__86,___get_global_string_const(196));
#line 771
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__86));
#line 771
c_rt_lib0clear(&___nl__im__82);
#line 771
c_rt_lib0clear(&___nl__im__86);
#line 771
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(67)));
#line 771
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__87));
#line 771
c_rt_lib0clear(&___nl__im__81);
#line 771
c_rt_lib0clear(&___nl__im__87);
#line 771
c_rt_lib0move(&___nl__im__88,___get_global_string_const(147));
#line 771
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__88));
#line 771
c_rt_lib0clear(&___nl__im__80);
#line 771
c_rt_lib0clear(&___nl__im__88);
#line 771
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__79));
#line 771
c_rt_lib0clear(&___nl__im__79);
#line 772
goto label_205;
#line 772
label_205:
;
#line 772
//clear ___nl__bool__74;
#line 773
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__58);
#line 773
___nl__bool__89 = !___nl__bool__89;
#line 773
if(___nl__bool__89){ goto label_214;}
#line 773
c_rt_lib0move(&___nl__im__90,___get_global_string_const(36));
#line 773
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__90));
#line 773
c_rt_lib0clear(&___nl__im__90);
#line 773
goto label_214;
#line 773
label_214:
;
#line 773
//clear ___nl__bool__89;
#line 773
c_rt_lib0clear(&___nl__im__58);
#line 773
c_rt_lib0clear(&___nl__im__59);
#line 773
c_rt_lib0clear(&___nl__im__60);
#line 773
c_rt_lib0clear(&___nl__im__68);
#line 774
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 774
goto label_130;
#line 774
label_222:
;
#line 775
goto label_255;
#line 775
label_224:
;
#line 776
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 776
nl_die_arg(___nl__im__91);
#line 777
goto label_255;
#line 777
label_228:
;
#line 778
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 778
nl_die_arg(___nl__im__92);
#line 779
goto label_255;
#line 779
label_232:
;
#line 780
c_rt_lib0move(&___nl__im__93, post_processing0get_call_graph(___nl__im__0));
#line 781
c_rt_lib0move(&___nl__im__94,c_rt_lib0ov_mk_none(___get_global_string_const(189)));
#line 782
c_rt_lib0move(&___nl__im__95,___get_global_string_const(197));
#line 782
c_rt_lib0delete(c_fe_lib0print(___nl__im__95));
#line 782
c_rt_lib0clear(&___nl__im__95);
#line 783
c_rt_lib0move(&___nl__im__96, dfile0ssave(___nl__im__93));
#line 783
c_rt_lib0move(&___nl__im__98,___get_global_string_const(121));
#line 783
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__2, ___nl__im__98));
#line 783
c_rt_lib0clear(&___nl__im__98);
#line 783
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__96, ___nl__im__97, &___nl__im__94));
#line 783
c_rt_lib0clear(&___nl__im__96);
#line 783
c_rt_lib0clear(&___nl__im__97);
#line 784
___nl__bool__99 = c_rt_lib0check_true_native(___nl__im__94);
#line 784
___nl__bool__99 = !___nl__bool__99;
#line 784
if(___nl__bool__99){ goto label_252;}
#line 785
c_rt_lib0move(&___nl__im__100,___get_global_string_const(198));
#line 785
c_rt_lib0delete(c_fe_lib0print(___nl__im__100));
#line 785
c_rt_lib0clear(&___nl__im__100);
#line 786
goto label_252;
#line 786
label_252:
;
#line 786
//clear ___nl__bool__99;
#line 787
goto label_255;
#line 787
label_255:
;
#line 788
___nl__int__102 = hash0size(___nl__im__5);
#line 788
___nl__int__103 = 0;
#line 788
___nl__bool__101 = ___nl__int__102 > ___nl__int__103;
#line 788
//clear ___nl__int__102;
#line 788
//clear ___nl__int__103;
#line 788
___nl__bool__101 = !___nl__bool__101;
#line 788
if(___nl__bool__101){ goto label_302;}
#line 789
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__5));
#line 789
c_rt_lib0clear(&___nl__im__0);
#line 789
c_rt_lib0clear(&___nl__im__1);
#line 789
c_rt_lib0clear(&___nl__im__2);
#line 789
c_rt_lib0clear(&___nl__im__4);
#line 789
c_rt_lib0clear(&___nl__im__5);
#line 789
//clear ___nl__bool__6;
#line 789
c_rt_lib0clear(&___nl__im__7);
#line 789
c_rt_lib0clear(&___nl__im__8);
#line 789
//clear ___nl__bool__9;
#line 789
c_rt_lib0clear(&___nl__im__10);
#line 789
c_rt_lib0clear(&___nl__im__11);
#line 789
c_rt_lib0clear(&___nl__im__12);
#line 789
c_rt_lib0clear(&___nl__im__13);
#line 789
c_rt_lib0clear(&___nl__im__23);
#line 789
c_rt_lib0clear(&___nl__im__24);
#line 789
c_rt_lib0clear(&___nl__im__25);
#line 789
c_rt_lib0clear(&___nl__im__26);
#line 789
//clear ___nl__bool__27;
#line 789
c_rt_lib0clear(&___nl__im__28);
#line 789
c_rt_lib0clear(&___nl__im__29);
#line 789
c_rt_lib0clear(&___nl__im__30);
#line 789
c_rt_lib0clear(&___nl__im__52);
#line 789
c_rt_lib0clear(&___nl__im__53);
#line 789
c_rt_lib0clear(&___nl__im__54);
#line 789
//clear ___nl__bool__55;
#line 789
c_rt_lib0clear(&___nl__im__56);
#line 789
c_rt_lib0clear(&___nl__im__57);
#line 789
c_rt_lib0clear(&___nl__im__58);
#line 789
c_rt_lib0clear(&___nl__im__59);
#line 789
c_rt_lib0clear(&___nl__im__60);
#line 789
c_rt_lib0clear(&___nl__im__68);
#line 789
c_rt_lib0clear(&___nl__im__91);
#line 789
c_rt_lib0clear(&___nl__im__92);
#line 789
c_rt_lib0clear(&___nl__im__93);
#line 789
c_rt_lib0clear(&___nl__im__94);
#line 789
//clear ___nl__bool__101;
#line 789
return ___nl__im__104;
#line 790
goto label_345;
#line 790
label_302:
;
#line 791
c_rt_lib0move(&___nl__im__106,___get_global_string_const(36));
#line 791
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__106));
#line 791
c_rt_lib0clear(&___nl__im__106);
#line 791
c_rt_lib0clear(&___nl__im__0);
#line 791
c_rt_lib0clear(&___nl__im__1);
#line 791
c_rt_lib0clear(&___nl__im__2);
#line 791
c_rt_lib0clear(&___nl__im__4);
#line 791
c_rt_lib0clear(&___nl__im__5);
#line 791
//clear ___nl__bool__6;
#line 791
c_rt_lib0clear(&___nl__im__7);
#line 791
c_rt_lib0clear(&___nl__im__8);
#line 791
//clear ___nl__bool__9;
#line 791
c_rt_lib0clear(&___nl__im__10);
#line 791
c_rt_lib0clear(&___nl__im__11);
#line 791
c_rt_lib0clear(&___nl__im__12);
#line 791
c_rt_lib0clear(&___nl__im__13);
#line 791
c_rt_lib0clear(&___nl__im__23);
#line 791
c_rt_lib0clear(&___nl__im__24);
#line 791
c_rt_lib0clear(&___nl__im__25);
#line 791
c_rt_lib0clear(&___nl__im__26);
#line 791
//clear ___nl__bool__27;
#line 791
c_rt_lib0clear(&___nl__im__28);
#line 791
c_rt_lib0clear(&___nl__im__29);
#line 791
c_rt_lib0clear(&___nl__im__30);
#line 791
c_rt_lib0clear(&___nl__im__52);
#line 791
c_rt_lib0clear(&___nl__im__53);
#line 791
c_rt_lib0clear(&___nl__im__54);
#line 791
//clear ___nl__bool__55;
#line 791
c_rt_lib0clear(&___nl__im__56);
#line 791
c_rt_lib0clear(&___nl__im__57);
#line 791
c_rt_lib0clear(&___nl__im__58);
#line 791
c_rt_lib0clear(&___nl__im__59);
#line 791
c_rt_lib0clear(&___nl__im__60);
#line 791
c_rt_lib0clear(&___nl__im__68);
#line 791
c_rt_lib0clear(&___nl__im__91);
#line 791
c_rt_lib0clear(&___nl__im__92);
#line 791
c_rt_lib0clear(&___nl__im__93);
#line 791
c_rt_lib0clear(&___nl__im__94);
#line 791
//clear ___nl__bool__101;
#line 791
c_rt_lib0clear(&___nl__im__104);
#line 791
return ___nl__im__105;
#line 792
goto label_345;
#line 792
label_345:
;
#line 792
//clear ___nl__bool__101;
#line 792
c_rt_lib0clear(&___nl__im__104);
#line 792
c_rt_lib0clear(&___nl__im__105);
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
#line 796
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(64));
#line 796
if(___nl__bool__2){ goto label_17;}
#line 798
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(65));
#line 798
if(___nl__bool__2){ goto label_23;}
#line 800
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(66));
#line 800
if(___nl__bool__2){ goto label_29;}
#line 802
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(67));
#line 802
if(___nl__bool__2){ goto label_35;}
#line 804
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(68));
#line 804
if(___nl__bool__2){ goto label_63;}
#line 806
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(76));
#line 806
if(___nl__bool__2){ goto label_94;}
#line 808
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(69));
#line 808
if(___nl__bool__2){ goto label_98;}
#line 808
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 808
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 808
nl_die_arg(___nl__im__3);
#line 796
label_17:
;
#line 796
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(64)));
#line 796
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 797
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 797
nl_die_arg(___nl__im__6);
#line 798
goto label_102;
#line 798
label_23:
;
#line 798
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(65)));
#line 798
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 799
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 799
nl_die_arg(___nl__im__9);
#line 800
goto label_102;
#line 800
label_29:
;
#line 800
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(66)));
#line 800
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 801
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 801
nl_die_arg(___nl__im__12);
#line 802
goto label_102;
#line 802
label_35:
;
#line 802
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(67)));
#line 802
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 803
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(199)));
#line 803
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 803
c_rt_lib0move(&___nl__im__18, pretty_printer0print_module_to_str(___nl__im__0));
#line 803
c_rt_lib0move(&___nl__im__17, c_fe_lib0string_to_file(___nl__im__13, ___nl__im__18));
#line 803
c_rt_lib0clear(&___nl__im__18);
#line 803
c_rt_lib0move(&___nl__im__15, ptd0ensure(___nl__im__16, ___nl__im__17));
#line 803
c_rt_lib0clear(&___nl__im__16);
#line 803
c_rt_lib0clear(&___nl__im__17);
#line 803
c_rt_lib0clear(&___nl__im__0);
#line 803
c_rt_lib0clear(&___nl__im__1);
#line 803
//clear ___nl__bool__2;
#line 803
c_rt_lib0clear(&___nl__im__3);
#line 803
c_rt_lib0clear(&___nl__im__4);
#line 803
c_rt_lib0clear(&___nl__im__5);
#line 803
c_rt_lib0clear(&___nl__im__6);
#line 803
c_rt_lib0clear(&___nl__im__7);
#line 803
c_rt_lib0clear(&___nl__im__8);
#line 803
c_rt_lib0clear(&___nl__im__9);
#line 803
c_rt_lib0clear(&___nl__im__10);
#line 803
c_rt_lib0clear(&___nl__im__11);
#line 803
c_rt_lib0clear(&___nl__im__12);
#line 803
c_rt_lib0clear(&___nl__im__13);
#line 803
c_rt_lib0clear(&___nl__im__14);
#line 803
return ___nl__im__15;
#line 804
goto label_102;
#line 804
label_63:
;
#line 804
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(68)));
#line 804
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 805
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(199)));
#line 805
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__22));
#line 805
c_rt_lib0move(&___nl__im__24, dfile0ssave(___nl__im__0));
#line 805
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 805
c_rt_lib0clear(&___nl__im__24);
#line 805
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 805
c_rt_lib0clear(&___nl__im__22);
#line 805
c_rt_lib0clear(&___nl__im__23);
#line 805
c_rt_lib0clear(&___nl__im__0);
#line 805
c_rt_lib0clear(&___nl__im__1);
#line 805
//clear ___nl__bool__2;
#line 805
c_rt_lib0clear(&___nl__im__3);
#line 805
c_rt_lib0clear(&___nl__im__4);
#line 805
c_rt_lib0clear(&___nl__im__5);
#line 805
c_rt_lib0clear(&___nl__im__6);
#line 805
c_rt_lib0clear(&___nl__im__7);
#line 805
c_rt_lib0clear(&___nl__im__8);
#line 805
c_rt_lib0clear(&___nl__im__9);
#line 805
c_rt_lib0clear(&___nl__im__10);
#line 805
c_rt_lib0clear(&___nl__im__11);
#line 805
c_rt_lib0clear(&___nl__im__12);
#line 805
c_rt_lib0clear(&___nl__im__13);
#line 805
c_rt_lib0clear(&___nl__im__14);
#line 805
c_rt_lib0clear(&___nl__im__15);
#line 805
c_rt_lib0clear(&___nl__im__19);
#line 805
c_rt_lib0clear(&___nl__im__20);
#line 805
return ___nl__im__21;
#line 806
goto label_102;
#line 806
label_94:
;
#line 807
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 807
nl_die_arg(___nl__im__25);
#line 808
goto label_102;
#line 808
label_98:
;
#line 809
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 809
nl_die_arg(___nl__im__26);
#line 810
goto label_102;
#line 810
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
#line 814
___nl__int__2 = string0length(___nl__im__0);
#line 814
___nl__int__3 = 1;
#line 814
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 814
//clear ___nl__int__2;
#line 814
//clear ___nl__int__3;
#line 815
___nl__int__6 = 1;
#line 815
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 815
//clear ___nl__int__6;
#line 815
c_rt_lib0move(&___nl__im__7,___get_global_string_const(110));
#line 815
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 815
c_rt_lib0clear(&___nl__im__5);
#line 815
c_rt_lib0clear(&___nl__im__7);
#line 815
if(___nl__bool__4){ goto label_20;}
#line 815
___nl__int__9 = 1;
#line 815
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 815
//clear ___nl__int__9;
#line 815
c_rt_lib0move(&___nl__im__10,___get_global_string_const(114));
#line 815
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 815
c_rt_lib0clear(&___nl__im__8);
#line 815
c_rt_lib0clear(&___nl__im__10);
#line 815
label_20:
;
#line 815
___nl__bool__4 = !___nl__bool__4;
#line 815
if(___nl__bool__4){ goto label_27;}
#line 815
___nl__int__11 = 1;
#line 815
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 815
//clear ___nl__int__11;
#line 815
goto label_27;
#line 815
label_27:
;
#line 815
//clear ___nl__bool__4;
#line 816
label_29:
;
#line 816
___nl__int__15 = 0;
#line 816
___nl__bool__12 = ___nl__int__1 >= ___nl__int__15;
#line 816
//clear ___nl__int__15;
#line 816
___nl__bool__14 = !___nl__bool__12;
#line 816
if(___nl__bool__14){ goto label_42;}
#line 816
___nl__int__17 = 1;
#line 816
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 816
//clear ___nl__int__17;
#line 816
c_rt_lib0move(&___nl__im__18,___get_global_string_const(110));
#line 816
___nl__bool__12 = c_rt_lib0ne(___nl__im__16, ___nl__im__18);
#line 816
c_rt_lib0clear(&___nl__im__16);
#line 816
c_rt_lib0clear(&___nl__im__18);
#line 816
label_42:
;
#line 816
//clear ___nl__bool__14;
#line 816
___nl__bool__13 = !___nl__bool__12;
#line 816
if(___nl__bool__13){ goto label_53;}
#line 816
___nl__int__20 = 1;
#line 816
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__20));
#line 816
//clear ___nl__int__20;
#line 816
c_rt_lib0move(&___nl__im__21,___get_global_string_const(114));
#line 816
___nl__bool__12 = c_rt_lib0ne(___nl__im__19, ___nl__im__21);
#line 816
c_rt_lib0clear(&___nl__im__19);
#line 816
c_rt_lib0clear(&___nl__im__21);
#line 816
label_53:
;
#line 816
//clear ___nl__bool__13;
#line 816
___nl__bool__12 = !___nl__bool__12;
#line 816
if(___nl__bool__12){ goto label_61;}
#line 816
___nl__int__22 = 1;
#line 816
___nl__int__1 = ___nl__int__1 - ___nl__int__22;
#line 816
//clear ___nl__int__22;
#line 816
goto label_29;
#line 816
label_61:
;
#line 817
___nl__int__24 = 0;
#line 817
___nl__bool__23 = ___nl__int__1 <= ___nl__int__24;
#line 817
//clear ___nl__int__24;
#line 817
___nl__bool__23 = !___nl__bool__23;
#line 817
if(___nl__bool__23){ goto label_74;}
#line 817
c_rt_lib0move(&___nl__im__25,___get_global_string_const(115));
#line 817
c_rt_lib0clear(&___nl__im__0);
#line 817
//clear ___nl__int__1;
#line 817
//clear ___nl__bool__12;
#line 817
//clear ___nl__bool__23;
#line 817
return ___nl__im__25;
#line 817
goto label_74;
#line 817
label_74:
;
#line 817
//clear ___nl__bool__23;
#line 817
c_rt_lib0clear(&___nl__im__25);
#line 818
___nl__int__27 = 0;
#line 818
c_rt_lib0move(&___nl__im__26, string0substr(___nl__im__0, ___nl__int__27, ___nl__int__1));
#line 818
//clear ___nl__int__27;
#line 818
c_rt_lib0clear(&___nl__im__0);
#line 818
//clear ___nl__int__1;
#line 818
//clear ___nl__bool__12;
#line 818
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
INT  ___nl__int__64 = 0;
bool  ___nl__bool__65 = false;
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
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
INT  ___nl__int__79 = 0;
bool  ___nl__bool__80 = false;
INT  ___nl__int__81 = 0;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
INT  ___nl__int__88 = 0;
bool  ___nl__bool__89 = false;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
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
bool  ___nl__bool__113 = false;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
INT  ___nl__int__119 = 0;
bool  ___nl__bool__120 = false;
INT  ___nl__int__121 = 0;
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
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
bool  ___nl__bool__141 = false;
ImmT  ___nl__im__142 = NULL;
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
ImmT  ___nl__string__154 = NULL;
INT  ___nl__int__155 = 0;
bool  ___nl__bool__156 = false;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
bool  ___nl__bool__164 = false;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
#line 823
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 824
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 825
c_rt_lib0move(&___nl__im__5,___get_global_string_const(115));
#line 825
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 825
c_rt_lib0clear(&___nl__im__5);
#line 826
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 827
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 828
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 829
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 830
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(95)));
#line 831
___nl__bool__11 = false;
#line 831
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 832
___nl__bool__13 = false;
#line 832
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 832
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(103), ___nl__im__2, ___get_global_string_const(102), ___nl__im__3, ___get_global_string_const(97), ___nl__im__4, ___get_global_string_const(100), ___nl__im__6, ___get_global_string_const(99), ___nl__im__7, ___get_global_string_const(101), ___nl__im__8, ___get_global_string_const(98), ___nl__im__9, ___get_global_string_const(104), ___nl__im__10, ___get_global_string_const(105), ___nl__im__12, ___get_global_string_const(106), ___nl__im__14));
#line 832
c_rt_lib0clear(&___nl__im__2);
#line 832
c_rt_lib0clear(&___nl__im__3);
#line 832
c_rt_lib0clear(&___nl__im__4);
#line 832
c_rt_lib0clear(&___nl__im__6);
#line 832
c_rt_lib0clear(&___nl__im__7);
#line 832
c_rt_lib0clear(&___nl__im__8);
#line 832
c_rt_lib0clear(&___nl__im__9);
#line 832
c_rt_lib0clear(&___nl__im__10);
#line 832
//clear ___nl__bool__11;
#line 832
c_rt_lib0clear(&___nl__im__12);
#line 832
//clear ___nl__bool__13;
#line 832
c_rt_lib0clear(&___nl__im__14);
#line 834
___nl__bool__15 = false;
#line 835
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 836
___nl__int__17 = 1;
#line 836
label_30:
;
#line 836
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 836
___nl__bool__18 = ___nl__int__17 < ___nl__int__19;
#line 836
//clear ___nl__int__19;
#line 836
___nl__bool__18 = !___nl__bool__18;
#line 836
if(___nl__bool__18){ goto label_522;}
#line 837
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 838
___nl__int__23 = string0length(___nl__im__20);
#line 838
___nl__int__24 = 2;
#line 838
___nl__bool__21 = ___nl__int__23 >= ___nl__int__24;
#line 838
//clear ___nl__int__23;
#line 838
//clear ___nl__int__24;
#line 838
___nl__bool__22 = !___nl__bool__21;
#line 838
if(___nl__bool__22){ goto label_53;}
#line 838
___nl__int__26 = 0;
#line 838
___nl__int__27 = 2;
#line 838
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__20, ___nl__int__26, ___nl__int__27));
#line 838
//clear ___nl__int__26;
#line 838
//clear ___nl__int__27;
#line 838
c_rt_lib0move(&___nl__im__28,___get_global_string_const(200));
#line 838
___nl__bool__21 = c_rt_lib0eq(___nl__im__25, ___nl__im__28);
#line 838
c_rt_lib0clear(&___nl__im__25);
#line 838
c_rt_lib0clear(&___nl__im__28);
#line 838
label_53:
;
#line 838
//clear ___nl__bool__22;
#line 838
___nl__bool__21 = !___nl__bool__21;
#line 838
if(___nl__bool__21){ goto label_492;}
#line 839
___nl__int__30 = 2;
#line 839
___nl__int__32 = string0length(___nl__im__20);
#line 839
___nl__int__33 = 2;
#line 839
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 839
//clear ___nl__int__32;
#line 839
//clear ___nl__int__33;
#line 839
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__20, ___nl__int__30, ___nl__int__31));
#line 839
//clear ___nl__int__30;
#line 839
//clear ___nl__int__31;
#line 840
c_rt_lib0move(&___nl__im__35,___get_global_string_const(99));
#line 840
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__35);
#line 840
c_rt_lib0clear(&___nl__im__35);
#line 840
___nl__bool__34 = !___nl__bool__34;
#line 840
if(___nl__bool__34){ goto label_79;}
#line 841
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 841
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__37));
#line 841
c_rt_lib0clear(&___nl__im__37);
#line 841
c_rt_lib0copy(&___nl__im__38, ___nl__im__36);
#line 841
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__38);
#line 841
c_rt_lib0clear(&___nl__im__36);
#line 841
c_rt_lib0clear(&___nl__im__38);
#line 842
goto label_489;
#line 842
label_79:
;
#line 842
c_rt_lib0move(&___nl__im__39,___get_global_string_const(64));
#line 842
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__39);
#line 842
c_rt_lib0clear(&___nl__im__39);
#line 842
___nl__bool__34 = !___nl__bool__34;
#line 842
if(___nl__bool__34){ goto label_91;}
#line 843
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_string_const(64)));
#line 843
c_rt_lib0copy(&___nl__im__41, ___nl__im__40);
#line 843
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__41);
#line 843
c_rt_lib0clear(&___nl__im__40);
#line 843
c_rt_lib0clear(&___nl__im__41);
#line 844
goto label_489;
#line 844
label_91:
;
#line 844
c_rt_lib0move(&___nl__im__42,___get_global_string_const(68));
#line 844
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__42);
#line 844
c_rt_lib0clear(&___nl__im__42);
#line 844
___nl__bool__34 = !___nl__bool__34;
#line 844
if(___nl__bool__34){ goto label_103;}
#line 845
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(68)));
#line 845
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 845
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__44);
#line 845
c_rt_lib0clear(&___nl__im__43);
#line 845
c_rt_lib0clear(&___nl__im__44);
#line 846
goto label_489;
#line 846
label_103:
;
#line 846
c_rt_lib0move(&___nl__im__45,___get_global_string_const(65));
#line 846
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__45);
#line 846
c_rt_lib0clear(&___nl__im__45);
#line 846
___nl__bool__34 = !___nl__bool__34;
#line 846
if(___nl__bool__34){ goto label_115;}
#line 847
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 847
c_rt_lib0copy(&___nl__im__47, ___nl__im__46);
#line 847
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__47);
#line 847
c_rt_lib0clear(&___nl__im__46);
#line 847
c_rt_lib0clear(&___nl__im__47);
#line 848
goto label_489;
#line 848
label_115:
;
#line 848
c_rt_lib0move(&___nl__im__48,___get_global_string_const(66));
#line 848
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__48);
#line 848
c_rt_lib0clear(&___nl__im__48);
#line 848
___nl__bool__34 = !___nl__bool__34;
#line 848
if(___nl__bool__34){ goto label_138;}
#line 849
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 849
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(66));
#line 849
c_rt_lib0clear(&___nl__im__50);
#line 849
___nl__bool__49 = !___nl__bool__49;
#line 849
___nl__bool__49 = !___nl__bool__49;
#line 849
if(___nl__bool__49){ goto label_135;}
#line 850
c_rt_lib0move(&___nl__im__52, compiler_priv0get_default_js_opts());
#line 850
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__52));
#line 850
c_rt_lib0clear(&___nl__im__52);
#line 850
c_rt_lib0copy(&___nl__im__53, ___nl__im__51);
#line 850
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__53);
#line 850
c_rt_lib0clear(&___nl__im__51);
#line 850
c_rt_lib0clear(&___nl__im__53);
#line 851
goto label_135;
#line 851
label_135:
;
#line 851
//clear ___nl__bool__49;
#line 852
goto label_489;
#line 852
label_138:
;
#line 852
c_rt_lib0move(&___nl__im__54,___get_global_string_const(69));
#line 852
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__54);
#line 852
c_rt_lib0clear(&___nl__im__54);
#line 852
___nl__bool__34 = !___nl__bool__34;
#line 852
if(___nl__bool__34){ goto label_150;}
#line 853
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 853
c_rt_lib0copy(&___nl__im__56, ___nl__im__55);
#line 853
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__56);
#line 853
c_rt_lib0clear(&___nl__im__55);
#line 853
c_rt_lib0clear(&___nl__im__56);
#line 854
goto label_489;
#line 854
label_150:
;
#line 854
c_rt_lib0move(&___nl__im__57,___get_global_string_const(67));
#line 854
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__57);
#line 854
c_rt_lib0clear(&___nl__im__57);
#line 854
___nl__bool__34 = !___nl__bool__34;
#line 854
if(___nl__bool__34){ goto label_163;}
#line 855
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(67)));
#line 855
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 855
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__59);
#line 855
c_rt_lib0clear(&___nl__im__58);
#line 855
c_rt_lib0clear(&___nl__im__59);
#line 856
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 857
goto label_489;
#line 857
label_163:
;
#line 857
c_rt_lib0move(&___nl__im__60,___get_global_string_const(92));
#line 857
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__60);
#line 857
c_rt_lib0clear(&___nl__im__60);
#line 857
___nl__bool__34 = !___nl__bool__34;
#line 857
if(___nl__bool__34){ goto label_175;}
#line 858
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(92)));
#line 858
c_rt_lib0copy(&___nl__im__62, ___nl__im__61);
#line 858
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__62);
#line 858
c_rt_lib0clear(&___nl__im__61);
#line 858
c_rt_lib0clear(&___nl__im__62);
#line 859
goto label_489;
#line 859
label_175:
;
#line 859
c_rt_lib0move(&___nl__im__63,___get_global_string_const(93));
#line 859
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__63);
#line 859
c_rt_lib0clear(&___nl__im__63);
#line 859
___nl__bool__34 = !___nl__bool__34;
#line 859
if(___nl__bool__34){ goto label_204;}
#line 860
___nl__int__64 = 1;
#line 860
___nl__int__17 = ___nl__int__17 + ___nl__int__64;
#line 860
//clear ___nl__int__64;
#line 861
___nl__int__66 = c_rt_lib0array_len(___nl__im__0);
#line 861
___nl__bool__65 = ___nl__int__17 < ___nl__int__66;
#line 861
//clear ___nl__int__66;
#line 861
___nl__bool__65 = !___nl__bool__65;
#line 861
___nl__bool__65 = !___nl__bool__65;
#line 861
if(___nl__bool__65){ goto label_193;}
#line 861
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 861
nl_die_arg(___nl__im__67);
#line 861
goto label_193;
#line 861
label_193:
;
#line 861
//clear ___nl__bool__65;
#line 861
c_rt_lib0clear(&___nl__im__67);
#line 862
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 862
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(93), ___nl__im__69));
#line 862
c_rt_lib0clear(&___nl__im__69);
#line 862
c_rt_lib0copy(&___nl__im__70, ___nl__im__68);
#line 862
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__70);
#line 862
c_rt_lib0clear(&___nl__im__68);
#line 862
c_rt_lib0clear(&___nl__im__70);
#line 863
goto label_489;
#line 863
label_204:
;
#line 863
c_rt_lib0move(&___nl__im__71,___get_global_string_const(90));
#line 863
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__71);
#line 863
c_rt_lib0clear(&___nl__im__71);
#line 863
___nl__bool__34 = !___nl__bool__34;
#line 863
if(___nl__bool__34){ goto label_216;}
#line 864
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 864
c_rt_lib0copy(&___nl__im__73, ___nl__im__72);
#line 864
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__73);
#line 864
c_rt_lib0clear(&___nl__im__72);
#line 864
c_rt_lib0clear(&___nl__im__73);
#line 865
goto label_489;
#line 865
label_216:
;
#line 865
c_rt_lib0move(&___nl__im__74,___get_global_string_const(91));
#line 865
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__74);
#line 865
c_rt_lib0clear(&___nl__im__74);
#line 865
___nl__bool__34 = !___nl__bool__34;
#line 865
if(___nl__bool__34){ goto label_228;}
#line 866
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_string_const(91)));
#line 866
c_rt_lib0copy(&___nl__im__76, ___nl__im__75);
#line 866
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__76);
#line 866
c_rt_lib0clear(&___nl__im__75);
#line 866
c_rt_lib0clear(&___nl__im__76);
#line 867
goto label_489;
#line 867
label_228:
;
#line 867
c_rt_lib0move(&___nl__im__77,___get_global_string_const(201));
#line 867
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__77);
#line 867
c_rt_lib0clear(&___nl__im__77);
#line 867
if(___nl__bool__34){ goto label_236;}
#line 867
c_rt_lib0move(&___nl__im__78,___get_global_string_const(202));
#line 867
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__78);
#line 867
c_rt_lib0clear(&___nl__im__78);
#line 867
label_236:
;
#line 867
___nl__bool__34 = !___nl__bool__34;
#line 867
if(___nl__bool__34){ goto label_264;}
#line 868
___nl__int__79 = 1;
#line 868
___nl__int__17 = ___nl__int__17 + ___nl__int__79;
#line 868
//clear ___nl__int__79;
#line 869
___nl__int__81 = c_rt_lib0array_len(___nl__im__0);
#line 869
___nl__bool__80 = ___nl__int__17 < ___nl__int__81;
#line 869
//clear ___nl__int__81;
#line 869
___nl__bool__80 = !___nl__bool__80;
#line 869
___nl__bool__80 = !___nl__bool__80;
#line 869
if(___nl__bool__80){ goto label_251;}
#line 869
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 869
nl_die_arg(___nl__im__82);
#line 869
goto label_251;
#line 869
label_251:
;
#line 869
//clear ___nl__bool__80;
#line 869
c_rt_lib0clear(&___nl__im__82);
#line 870
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 870
c_rt_lib0move(&___nl__im__85,___get_global_string_const(110));
#line 870
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 870
c_rt_lib0clear(&___nl__im__84);
#line 870
c_rt_lib0clear(&___nl__im__85);
#line 870
c_rt_lib0copy(&___nl__im__86, ___nl__im__83);
#line 870
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__86);
#line 870
c_rt_lib0clear(&___nl__im__83);
#line 870
c_rt_lib0clear(&___nl__im__86);
#line 871
goto label_489;
#line 871
label_264:
;
#line 871
c_rt_lib0move(&___nl__im__87,___get_global_string_const(203));
#line 871
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__87);
#line 871
c_rt_lib0clear(&___nl__im__87);
#line 871
___nl__bool__34 = !___nl__bool__34;
#line 871
if(___nl__bool__34){ goto label_291;}
#line 872
___nl__int__88 = 1;
#line 872
___nl__int__17 = ___nl__int__17 + ___nl__int__88;
#line 872
//clear ___nl__int__88;
#line 873
___nl__int__90 = c_rt_lib0array_len(___nl__im__0);
#line 873
___nl__bool__89 = ___nl__int__17 < ___nl__int__90;
#line 873
//clear ___nl__int__90;
#line 873
___nl__bool__89 = !___nl__bool__89;
#line 873
___nl__bool__89 = !___nl__bool__89;
#line 873
if(___nl__bool__89){ goto label_282;}
#line 873
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 873
nl_die_arg(___nl__im__91);
#line 873
goto label_282;
#line 873
label_282:
;
#line 873
//clear ___nl__bool__89;
#line 873
c_rt_lib0clear(&___nl__im__91);
#line 874
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 874
c_rt_lib0copy(&___nl__im__93, ___nl__im__92);
#line 874
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(101), ___nl__im__93);
#line 874
c_rt_lib0clear(&___nl__im__92);
#line 874
c_rt_lib0clear(&___nl__im__93);
#line 875
goto label_489;
#line 875
label_291:
;
#line 875
c_rt_lib0move(&___nl__im__94,___get_global_string_const(204));
#line 875
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__94);
#line 875
c_rt_lib0clear(&___nl__im__94);
#line 875
___nl__bool__34 = !___nl__bool__34;
#line 875
if(___nl__bool__34){ goto label_303;}
#line 876
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 876
c_rt_lib0copy(&___nl__im__96, ___nl__im__95);
#line 876
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__96);
#line 876
c_rt_lib0clear(&___nl__im__95);
#line 876
c_rt_lib0clear(&___nl__im__96);
#line 877
goto label_489;
#line 877
label_303:
;
#line 877
c_rt_lib0move(&___nl__im__97,___get_global_string_const(205));
#line 877
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__97);
#line 877
c_rt_lib0clear(&___nl__im__97);
#line 877
___nl__bool__34 = !___nl__bool__34;
#line 877
if(___nl__bool__34){ goto label_315;}
#line 878
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 878
c_rt_lib0copy(&___nl__im__99, ___nl__im__98);
#line 878
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__99);
#line 878
c_rt_lib0clear(&___nl__im__98);
#line 878
c_rt_lib0clear(&___nl__im__99);
#line 879
goto label_489;
#line 879
label_315:
;
#line 879
c_rt_lib0move(&___nl__im__100,___get_global_string_const(206));
#line 879
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__100);
#line 879
c_rt_lib0clear(&___nl__im__100);
#line 879
___nl__bool__34 = !___nl__bool__34;
#line 879
if(___nl__bool__34){ goto label_327;}
#line 880
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_string_const(87)));
#line 880
c_rt_lib0copy(&___nl__im__102, ___nl__im__101);
#line 880
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__102);
#line 880
c_rt_lib0clear(&___nl__im__101);
#line 880
c_rt_lib0clear(&___nl__im__102);
#line 881
goto label_489;
#line 881
label_327:
;
#line 881
c_rt_lib0move(&___nl__im__103,___get_global_string_const(207));
#line 881
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__103);
#line 881
c_rt_lib0clear(&___nl__im__103);
#line 881
___nl__bool__34 = !___nl__bool__34;
#line 881
if(___nl__bool__34){ goto label_339;}
#line 882
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_string_const(88)));
#line 882
c_rt_lib0copy(&___nl__im__105, ___nl__im__104);
#line 882
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__105);
#line 882
c_rt_lib0clear(&___nl__im__104);
#line 882
c_rt_lib0clear(&___nl__im__105);
#line 883
goto label_489;
#line 883
label_339:
;
#line 883
c_rt_lib0move(&___nl__im__106,___get_global_string_const(208));
#line 883
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__106);
#line 883
c_rt_lib0clear(&___nl__im__106);
#line 883
___nl__bool__34 = !___nl__bool__34;
#line 883
if(___nl__bool__34){ goto label_351;}
#line 884
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_none(___get_global_string_const(89)));
#line 884
c_rt_lib0copy(&___nl__im__108, ___nl__im__107);
#line 884
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__108);
#line 884
c_rt_lib0clear(&___nl__im__107);
#line 884
c_rt_lib0clear(&___nl__im__108);
#line 885
goto label_489;
#line 885
label_351:
;
#line 885
c_rt_lib0move(&___nl__im__109,___get_global_string_const(209));
#line 885
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__109);
#line 885
c_rt_lib0clear(&___nl__im__109);
#line 885
___nl__bool__34 = !___nl__bool__34;
#line 885
if(___nl__bool__34){ goto label_363;}
#line 886
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_string_const(96)));
#line 886
c_rt_lib0copy(&___nl__im__111, ___nl__im__110);
#line 886
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(104), ___nl__im__111);
#line 886
c_rt_lib0clear(&___nl__im__110);
#line 886
c_rt_lib0clear(&___nl__im__111);
#line 887
goto label_489;
#line 887
label_363:
;
#line 887
c_rt_lib0move(&___nl__im__112,___get_global_string_const(105));
#line 887
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__112);
#line 887
c_rt_lib0clear(&___nl__im__112);
#line 887
___nl__bool__34 = !___nl__bool__34;
#line 887
if(___nl__bool__34){ goto label_375;}
#line 888
___nl__bool__113 = true;
#line 888
c_rt_lib0move(&___nl__im__114, c_rt_lib0bool_to_nl_native(___nl__bool__113));
#line 888
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(105), ___nl__im__114);
#line 888
//clear ___nl__bool__113;
#line 888
c_rt_lib0clear(&___nl__im__114);
#line 889
goto label_489;
#line 889
label_375:
;
#line 889
c_rt_lib0move(&___nl__im__115,___get_global_string_const(106));
#line 889
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__115);
#line 889
c_rt_lib0clear(&___nl__im__115);
#line 889
___nl__bool__34 = !___nl__bool__34;
#line 889
if(___nl__bool__34){ goto label_387;}
#line 890
___nl__bool__116 = true;
#line 890
c_rt_lib0move(&___nl__im__117, c_rt_lib0bool_to_nl_native(___nl__bool__116));
#line 890
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(106), ___nl__im__117);
#line 890
//clear ___nl__bool__116;
#line 890
c_rt_lib0clear(&___nl__im__117);
#line 891
goto label_489;
#line 891
label_387:
;
#line 891
c_rt_lib0move(&___nl__im__118,___get_global_string_const(70));
#line 891
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__118);
#line 891
c_rt_lib0clear(&___nl__im__118);
#line 891
___nl__bool__34 = !___nl__bool__34;
#line 891
if(___nl__bool__34){ goto label_442;}
#line 892
___nl__int__119 = 1;
#line 892
___nl__int__17 = ___nl__int__17 + ___nl__int__119;
#line 892
//clear ___nl__int__119;
#line 893
___nl__int__121 = c_rt_lib0array_len(___nl__im__0);
#line 893
___nl__bool__120 = ___nl__int__17 < ___nl__int__121;
#line 893
//clear ___nl__int__121;
#line 893
___nl__bool__120 = !___nl__bool__120;
#line 893
___nl__bool__120 = !___nl__bool__120;
#line 893
if(___nl__bool__120){ goto label_405;}
#line 893
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 893
nl_die_arg(___nl__im__122);
#line 893
goto label_405;
#line 893
label_405:
;
#line 893
//clear ___nl__bool__120;
#line 893
c_rt_lib0clear(&___nl__im__122);
#line 894
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 894
___nl__bool__123 = c_rt_lib0priv_is(___nl__im__124, ___get_global_string_const(66));
#line 894
c_rt_lib0clear(&___nl__im__124);
#line 894
___nl__bool__123 = !___nl__bool__123;
#line 894
if(___nl__bool__123){ goto label_429;}
#line 895
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 895
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 895
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__127, ___get_global_string_const(66)));
#line 895
c_rt_lib0clear(&___nl__im__126);
#line 895
c_rt_lib0clear(&___nl__im__127);
#line 896
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 896
c_rt_lib0copy(&___nl__im__129, ___nl__im__128);
#line 896
c_rt_lib0hash_set_value_dec(&___nl__im__125, ___get_global_string_const(70), ___nl__im__129);
#line 896
c_rt_lib0clear(&___nl__im__128);
#line 896
c_rt_lib0clear(&___nl__im__129);
#line 897
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__125));
#line 897
c_rt_lib0copy(&___nl__im__131, ___nl__im__130);
#line 897
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__131);
#line 897
c_rt_lib0clear(&___nl__im__130);
#line 897
c_rt_lib0clear(&___nl__im__131);
#line 898
goto label_438;
#line 898
label_429:
;
#line 899
c_rt_lib0move(&___nl__im__133, compiler_priv0get_default_js_opts());
#line 899
c_rt_lib0move(&___nl__im__132, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__133));
#line 899
c_rt_lib0clear(&___nl__im__133);
#line 899
c_rt_lib0copy(&___nl__im__134, ___nl__im__132);
#line 899
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__134);
#line 899
c_rt_lib0clear(&___nl__im__132);
#line 899
c_rt_lib0clear(&___nl__im__134);
#line 900
goto label_438;
#line 900
label_438:
;
#line 900
//clear ___nl__bool__123;
#line 900
c_rt_lib0clear(&___nl__im__125);
#line 901
goto label_489;
#line 901
label_442:
;
#line 901
c_rt_lib0move(&___nl__im__135,___get_global_string_const(71));
#line 901
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__135);
#line 901
c_rt_lib0clear(&___nl__im__135);
#line 901
___nl__bool__34 = !___nl__bool__34;
#line 901
if(___nl__bool__34){ goto label_482;}
#line 902
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 902
___nl__bool__136 = c_rt_lib0priv_is(___nl__im__137, ___get_global_string_const(66));
#line 902
c_rt_lib0clear(&___nl__im__137);
#line 902
___nl__bool__136 = !___nl__bool__136;
#line 902
if(___nl__bool__136){ goto label_469;}
#line 903
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 903
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 903
c_rt_lib0move(&___nl__im__138, c_rt_lib0priv_as(___nl__im__140, ___get_global_string_const(66)));
#line 903
c_rt_lib0clear(&___nl__im__139);
#line 903
c_rt_lib0clear(&___nl__im__140);
#line 904
___nl__bool__141 = true;
#line 904
c_rt_lib0move(&___nl__im__142, c_rt_lib0bool_to_nl_native(___nl__bool__141));
#line 904
c_rt_lib0hash_set_value_dec(&___nl__im__138, ___get_global_string_const(71), ___nl__im__142);
#line 904
//clear ___nl__bool__141;
#line 904
c_rt_lib0clear(&___nl__im__142);
#line 905
c_rt_lib0move(&___nl__im__143, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__138));
#line 905
c_rt_lib0copy(&___nl__im__144, ___nl__im__143);
#line 905
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__144);
#line 905
c_rt_lib0clear(&___nl__im__143);
#line 905
c_rt_lib0clear(&___nl__im__144);
#line 906
goto label_478;
#line 906
label_469:
;
#line 907
c_rt_lib0move(&___nl__im__146, compiler_priv0get_default_js_opts());
#line 907
c_rt_lib0move(&___nl__im__145, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__146));
#line 907
c_rt_lib0clear(&___nl__im__146);
#line 907
c_rt_lib0copy(&___nl__im__147, ___nl__im__145);
#line 907
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__147);
#line 907
c_rt_lib0clear(&___nl__im__145);
#line 907
c_rt_lib0clear(&___nl__im__147);
#line 908
goto label_478;
#line 908
label_478:
;
#line 908
//clear ___nl__bool__136;
#line 908
c_rt_lib0clear(&___nl__im__138);
#line 909
goto label_489;
#line 909
label_482:
;
#line 910
c_rt_lib0move(&___nl__im__149,___get_global_string_const(210));
#line 910
c_rt_lib0move(&___nl__im__148, c_rt_lib0concat_new(___nl__im__149, ___nl__im__20));
#line 910
c_rt_lib0clear(&___nl__im__149);
#line 910
c_rt_lib0delete(c_fe_lib0print(___nl__im__148));
#line 910
c_rt_lib0clear(&___nl__im__148);
#line 911
goto label_489;
#line 911
label_489:
;
#line 911
//clear ___nl__bool__34;
#line 912
goto label_514;
#line 912
label_492:
;
#line 913
___nl__bool__150 = ___nl__bool__15;
#line 913
___nl__bool__150 = !___nl__bool__150;
#line 913
___nl__bool__150 = !___nl__bool__150;
#line 913
if(___nl__bool__150){ goto label_503;}
#line 913
c_rt_lib0move(&___nl__im__151, c_rt_lib0array_mk(0));
#line 913
c_rt_lib0copy(&___nl__im__152, ___nl__im__151);
#line 913
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__152);
#line 913
c_rt_lib0clear(&___nl__im__151);
#line 913
c_rt_lib0clear(&___nl__im__152);
#line 913
goto label_503;
#line 913
label_503:
;
#line 913
//clear ___nl__bool__150;
#line 914
c_rt_lib0move(&___nl__im__153,___get_global_string_const(97));
#line 914
c_rt_lib0move(&___nl__im__153, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__153));
#line 914
c_rt_lib0delete(array0push(&___nl__im__153, ___nl__im__20));
#line 914
c_rt_lib0move(&___nl__string__154,___get_global_string_const(97));
#line 914
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__154, ___nl__im__153));
#line 914
c_rt_lib0clear(&___nl__im__153);
#line 914
c_rt_lib0clear(&___nl__string__154);
#line 915
___nl__bool__15 = true;
#line 916
goto label_514;
#line 916
label_514:
;
#line 916
//clear ___nl__bool__21;
#line 916
c_rt_lib0clear(&___nl__im__29);
#line 916
c_rt_lib0clear(&___nl__im__20);
#line 836
___nl__int__155 = 1;
#line 836
___nl__int__17 = ___nl__int__17 + ___nl__int__155;
#line 836
//clear ___nl__int__155;
#line 917
goto label_30;
#line 917
label_522:
;
#line 918
c_rt_lib0move(&___nl__im__157, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 918
c_rt_lib0move(&___nl__im__158,___get_global_string_const(36));
#line 918
___nl__bool__156 = c_rt_lib0eq(___nl__im__157, ___nl__im__158);
#line 918
c_rt_lib0clear(&___nl__im__157);
#line 918
c_rt_lib0clear(&___nl__im__158);
#line 918
___nl__bool__156 = !___nl__bool__156;
#line 918
if(___nl__bool__156){ goto label_542;}
#line 919
c_rt_lib0move(&___nl__im__161,___get_global_string_const(211));
#line 919
c_rt_lib0move(&___nl__im__160, c_rt_lib0concat_new(___nl__im__161, ___nl__im__16));
#line 919
c_rt_lib0clear(&___nl__im__161);
#line 919
c_rt_lib0move(&___nl__im__162,___get_global_string_const(110));
#line 919
c_rt_lib0move(&___nl__im__159, c_rt_lib0concat_new(___nl__im__160, ___nl__im__162));
#line 919
c_rt_lib0clear(&___nl__im__160);
#line 919
c_rt_lib0clear(&___nl__im__162);
#line 919
c_rt_lib0copy(&___nl__im__163, ___nl__im__159);
#line 919
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__163);
#line 919
c_rt_lib0clear(&___nl__im__159);
#line 919
c_rt_lib0clear(&___nl__im__163);
#line 920
goto label_542;
#line 920
label_542:
;
#line 920
//clear ___nl__bool__156;
#line 921
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 921
___nl__bool__164 = c_rt_lib0priv_is(___nl__im__165, ___get_global_string_const(80));
#line 921
c_rt_lib0clear(&___nl__im__165);
#line 921
___nl__bool__164 = !___nl__bool__164;
#line 921
if(___nl__bool__164){ goto label_561;}
#line 921
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 921
c_rt_lib0move(&___nl__im__169, compiler_priv0get_default_deref_file());
#line 921
c_rt_lib0move(&___nl__im__167, c_rt_lib0concat_new(___nl__im__168, ___nl__im__169));
#line 921
c_rt_lib0clear(&___nl__im__168);
#line 921
c_rt_lib0clear(&___nl__im__169);
#line 921
c_rt_lib0move(&___nl__im__166, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__167));
#line 921
c_rt_lib0clear(&___nl__im__167);
#line 921
c_rt_lib0copy(&___nl__im__170, ___nl__im__166);
#line 921
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__170);
#line 921
c_rt_lib0clear(&___nl__im__166);
#line 921
c_rt_lib0clear(&___nl__im__170);
#line 921
goto label_561;
#line 921
label_561:
;
#line 921
//clear ___nl__bool__164;
#line 922
c_rt_lib0clear(&___nl__im__0);
#line 922
//clear ___nl__bool__15;
#line 922
c_rt_lib0clear(&___nl__im__16);
#line 922
//clear ___nl__int__17;
#line 922
//clear ___nl__bool__18;
#line 922
c_rt_lib0clear(&___nl__im__20);
#line 922
return ___nl__im__1;
return NULL;

}

ImmT compiler_priv0get_default_js_opts(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(15);
}
ImmT compiler_priv0get_default_js_opts0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 927
c_rt_lib0move(&___nl__im__1,___get_global_string_const(67));
#line 928
___nl__bool__2 = false;
#line 928
c_rt_lib0move(&___nl__im__3, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 928
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_string_const(70), ___nl__im__1, ___get_global_string_const(71), ___nl__im__3));
#line 928
c_rt_lib0clear(&___nl__im__1);
#line 928
//clear ___nl__bool__2;
#line 928
c_rt_lib0clear(&___nl__im__3);
#line 928
return ___nl__im__0;
return NULL;

}


static ImmT ___const__[17];
static int ___const_init__ = 1;
void compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[16];


for(int i=0;i<16;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 16);
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
	___const__[8] = compiler0js_opts0cal();
	break;
case 9:
	___const__[9] = compiler0destination_t0cal();
	break;
case 10:
	___const__[10] = compiler0module_t0cal();
	break;
case 11:
	___const__[11] = compiler0deref_t0cal();
	break;
case 12:
	___const__[12] = compiler0try_t0cal();
	break;
case 13:
	___const__[13] = compiler0input_type0cal();
	break;
case 14:
	___const__[14] = compiler0file_t0cal();
	break;
case 15:
	___const__[15] = compiler_priv0get_default_js_opts0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
