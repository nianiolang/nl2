
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
#include "tct.h"
#include "nast.h"
#include "tc_types.h"
#include "compiler.h"
#line 1 "compiler.nl"

static ImmT *__const__f = NULL;
void compiler_priv0__const__init();
ImmT compiler_priv0__const__sim(int __nr);
ImmT compiler_priv0__const__sing(int __nr);

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
compiler0module_functions_t0type compiler_priv0get_functions(nast0module_t0type ___nl__im__0);
ImmT  compiler_priv0add_to_called_from(ImmT * ___ref___im__0,ImmT  ___nl__im__1);
ImmT  compiler_priv0add_cmd_to_called_from(ImmT * ___ref___im__0,nlasm0cmd_t0type ___nl__im__1,ImmT  ___nl__im__2);


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

ImmT  compiler0functions_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0functions_t");
ImmT  res = compiler0functions_t();
return res;
}
ImmT compiler0functions_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(15);
}
ImmT compiler0functions_t0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 144
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(compiler0module_functions_t0ptr, ___get_global_string_const(54), ___get_global_string_const(107)));
#line 144
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 144
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
return ___nl__im__0;
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
return NULL;
return NULL;

}

ImmT  compiler0module_functions_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0module_functions_t");
ImmT  res = compiler0module_functions_t();
return res;
}
ImmT compiler0module_functions_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(16);
}
ImmT compiler0module_functions_t0cal() {
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
#line 150
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 150
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 152
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 152
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 153
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 153
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 153
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(76), ___nl__im__10, ___get_global_string_const(39), ___nl__im__11));
#line 153
c_rt_lib0clear(&___nl__im__10);
#line 153
c_rt_lib0clear(&___nl__im__11);
#line 153
c_rt_lib0move(&___nl__im__8, ptd0var(___nl__im__9));
#line 153
c_rt_lib0clear(&___nl__im__9);
#line 153
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(110), ___nl__im__7, ___get_global_string_const(111), ___nl__im__8));
#line 153
c_rt_lib0clear(&___nl__im__7);
#line 153
c_rt_lib0clear(&___nl__im__8);
#line 153
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 153
c_rt_lib0clear(&___nl__im__6);
#line 153
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 153
c_rt_lib0clear(&___nl__im__5);
#line 153
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(112), ___nl__im__3, ___get_global_string_const(113), ___nl__im__4));
#line 153
c_rt_lib0clear(&___nl__im__3);
#line 153
c_rt_lib0clear(&___nl__im__4);
#line 153
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
return ___nl__im__0;
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
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
#line 160
c_rt_lib0move(&___nl__im__1, compiler_priv0parse_command_line_args(___nl__im__0));
#line 161
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 161
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__2));
#line 161
c_rt_lib0clear(&___nl__im__2);
#line 162
___nl__int__3 = 0;
#line 163
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 163
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(90));
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
___nl__bool__4 = !___nl__bool__4;
#line 163
if(___nl__bool__4){ goto label_15;}
#line 164
c_rt_lib0move(&___nl__im__6,___get_global_string_const(114));
#line 164
c_rt_lib0delete(c_fe_lib0print(___nl__im__6));
#line 164
c_rt_lib0clear(&___nl__im__6);
#line 165
___nl__int__3 = compiler_priv0compile_strict_file(___nl__im__1);
#line 166
goto label_48;
#line 166
label_15:
;
#line 166
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 166
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(92));
#line 166
c_rt_lib0clear(&___nl__im__7);
#line 166
if(___nl__bool__4){ goto label_23;}
#line 166
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 166
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(93));
#line 166
c_rt_lib0clear(&___nl__im__8);
#line 166
label_23:
;
#line 166
___nl__bool__4 = !___nl__bool__4;
#line 166
if(___nl__bool__4){ goto label_32;}
#line 167
c_rt_lib0move(&___nl__im__9,___get_global_string_const(115));
#line 167
c_rt_lib0delete(c_fe_lib0print(___nl__im__9));
#line 167
c_rt_lib0clear(&___nl__im__9);
#line 168
c_rt_lib0delete(compiler_priv0compile_ide(___nl__im__1));
#line 169
___nl__int__3 = 0;
#line 170
goto label_48;
#line 170
label_32:
;
#line 170
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 170
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(91));
#line 170
c_rt_lib0clear(&___nl__im__10);
#line 170
___nl__bool__4 = !___nl__bool__4;
#line 170
if(___nl__bool__4){ goto label_44;}
#line 171
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 171
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 171
___nl__int__3 = interpreter_wrapper0exec_interpreter(___nl__im__11, ___nl__im__12);
#line 171
c_rt_lib0clear(&___nl__im__11);
#line 171
c_rt_lib0clear(&___nl__im__12);
#line 172
goto label_48;
#line 172
label_44:
;
#line 173
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 173
nl_die_arg(___nl__im__13);
#line 174
goto label_48;
#line 174
label_48:
;
#line 174
//clear ___nl__bool__4;
#line 174
c_rt_lib0clear(&___nl__im__13);
#line 175
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(106)));
#line 175
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 175
c_rt_lib0clear(&___nl__im__15);
#line 175
___nl__bool__14 = !___nl__bool__14;
#line 175
if(___nl__bool__14){ goto label_66;}
#line 176
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 176
c_rt_lib0move(&___nl__im__18,___get_global_string_const(116));
#line 176
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 176
c_rt_lib0clear(&___nl__im__17);
#line 176
c_rt_lib0clear(&___nl__im__18);
#line 177
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__16));
#line 178
c_rt_lib0move(&___nl__im__19, compiler_priv0get_profile_file_name(___nl__im__16));
#line 178
c_rt_lib0delete(profile0save(___nl__im__19));
#line 178
c_rt_lib0clear(&___nl__im__19);
#line 179
goto label_66;
#line 179
label_66:
;
#line 179
//clear ___nl__bool__14;
#line 179
c_rt_lib0clear(&___nl__im__16);
#line 180
c_rt_lib0clear(&___nl__im__0);
#line 180
c_rt_lib0clear(&___nl__im__1);
#line 180
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
#line 184
c_rt_lib0move(&___nl__im__2,___get_global_string_const(117));
#line 184
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 185
c_rt_lib0move(&___nl__im__4, nsystem0time());
#line 185
c_rt_lib0move(&___nl__im__3, nsystem0localtime(___nl__im__4));
#line 185
c_rt_lib0clear(&___nl__im__4);
#line 186
c_rt_lib0move(&___nl__im__5, nsystem0get_pid());
#line 187
c_rt_lib0move(&___nl__im__6, nsystem0time_microsec());
#line 188
___nl__int__7 = 5;
#line 188
___nl__int__8 = 0;
#line 188
___nl__int__9 = 1;
#line 188
label_11:
;
#line 188
___nl__bool__10 = ___nl__int__8 >= ___nl__int__7;
#line 188
if(___nl__bool__10){ goto label_27;}
#line 189
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__3, ___nl__int__8));
#line 189
___nl__int__13 = 2;
#line 189
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 189
c_rt_lib0move(&___nl__im__11, string_utils0int2str(___nl__im__12, ___nl__im__14));
#line 189
c_rt_lib0clear(&___nl__im__12);
#line 189
//clear ___nl__int__13;
#line 189
c_rt_lib0clear(&___nl__im__14);
#line 189
c_rt_lib0copy(&___nl__im__15, ___nl__im__11);
#line 189
c_rt_lib0array_set(&___nl__im__3, ___nl__int__8, ___nl__im__15);
#line 189
c_rt_lib0clear(&___nl__im__11);
#line 189
c_rt_lib0clear(&___nl__im__15);
#line 190
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 190
goto label_11;
#line 190
label_27:
;
#line 191
___nl__int__19 = 1;
#line 191
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 191
//clear ___nl__int__19;
#line 191
___nl__int__20 = 1000;
#line 191
___nl__int__21 = getIntFromImm(___nl__im__18);
#line 191
___nl__int__17 = ___nl__int__21 / ___nl__int__20;
#line 191
c_rt_lib0clear(&___nl__im__18);
#line 191
//clear ___nl__int__20;
#line 191
//clear ___nl__int__21;
#line 191
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__17));
#line 191
___nl__int__23 = 3;
#line 191
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__23));
#line 191
c_rt_lib0move(&___nl__im__16, string_utils0int2str(___nl__im__22, ___nl__im__24));
#line 191
//clear ___nl__int__17;
#line 191
c_rt_lib0clear(&___nl__im__22);
#line 191
//clear ___nl__int__23;
#line 191
c_rt_lib0clear(&___nl__im__24);
#line 192
c_rt_lib0move(&___nl__im__39,___get_global_string_const(118));
#line 192
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__1, ___nl__im__39));
#line 192
c_rt_lib0clear(&___nl__im__39);
#line 192
___nl__int__41 = 5;
#line 192
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__3, ___nl__int__41));
#line 192
//clear ___nl__int__41;
#line 192
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__40));
#line 192
c_rt_lib0clear(&___nl__im__38);
#line 192
c_rt_lib0clear(&___nl__im__40);
#line 192
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 192
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__42));
#line 192
c_rt_lib0clear(&___nl__im__37);
#line 192
c_rt_lib0clear(&___nl__im__42);
#line 192
___nl__int__44 = 4;
#line 192
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__3, ___nl__int__44));
#line 192
//clear ___nl__int__44;
#line 192
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 192
c_rt_lib0clear(&___nl__im__36);
#line 192
c_rt_lib0clear(&___nl__im__43);
#line 192
c_rt_lib0move(&___nl__im__45,___get_global_string_const(36));
#line 192
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__45));
#line 192
c_rt_lib0clear(&___nl__im__35);
#line 192
c_rt_lib0clear(&___nl__im__45);
#line 192
___nl__int__47 = 3;
#line 192
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__3, ___nl__int__47));
#line 192
//clear ___nl__int__47;
#line 192
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__46));
#line 192
c_rt_lib0clear(&___nl__im__34);
#line 192
c_rt_lib0clear(&___nl__im__46);
#line 192
c_rt_lib0move(&___nl__im__48,___get_global_string_const(119));
#line 192
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__48));
#line 192
c_rt_lib0clear(&___nl__im__33);
#line 192
c_rt_lib0clear(&___nl__im__48);
#line 192
___nl__int__50 = 2;
#line 192
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__3, ___nl__int__50));
#line 192
//clear ___nl__int__50;
#line 192
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__49));
#line 192
c_rt_lib0clear(&___nl__im__32);
#line 192
c_rt_lib0clear(&___nl__im__49);
#line 192
___nl__int__52 = 1;
#line 192
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__3, ___nl__int__52));
#line 192
//clear ___nl__int__52;
#line 192
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__51));
#line 192
c_rt_lib0clear(&___nl__im__31);
#line 192
c_rt_lib0clear(&___nl__im__51);
#line 192
___nl__int__54 = 0;
#line 192
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__3, ___nl__int__54));
#line 192
//clear ___nl__int__54;
#line 192
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__53));
#line 192
c_rt_lib0clear(&___nl__im__30);
#line 192
c_rt_lib0clear(&___nl__im__53);
#line 192
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__16));
#line 192
c_rt_lib0clear(&___nl__im__29);
#line 192
c_rt_lib0move(&___nl__im__55,___get_global_string_const(119));
#line 192
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__55));
#line 192
c_rt_lib0clear(&___nl__im__28);
#line 192
c_rt_lib0clear(&___nl__im__55);
#line 192
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__5));
#line 192
c_rt_lib0clear(&___nl__im__27);
#line 193
c_rt_lib0move(&___nl__im__56,___get_global_string_const(120));
#line 193
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__56));
#line 193
c_rt_lib0clear(&___nl__im__26);
#line 193
c_rt_lib0clear(&___nl__im__56);
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
c_rt_lib0clear(&___nl__im__3);
#line 193
c_rt_lib0clear(&___nl__im__5);
#line 193
c_rt_lib0clear(&___nl__im__6);
#line 193
//clear ___nl__int__7;
#line 193
//clear ___nl__int__8;
#line 193
//clear ___nl__int__9;
#line 193
//clear ___nl__bool__10;
#line 193
c_rt_lib0clear(&___nl__im__16);
#line 193
return ___nl__im__25;
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
c_rt_lib0clear(&___nl__im__3);
#line 193
c_rt_lib0clear(&___nl__im__5);
#line 193
c_rt_lib0clear(&___nl__im__6);
#line 193
//clear ___nl__int__7;
#line 193
//clear ___nl__int__8;
#line 193
//clear ___nl__int__9;
#line 193
//clear ___nl__bool__10;
#line 193
c_rt_lib0clear(&___nl__im__16);
#line 193
c_rt_lib0clear(&___nl__im__25);
#line 193
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
#line 197
___nl__int__2 = string0length(___nl__im__0);
#line 197
___nl__int__3 = 1;
#line 197
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 197
//clear ___nl__int__2;
#line 197
//clear ___nl__int__3;
#line 198
label_5:
;
#line 198
___nl__int__7 = 0;
#line 198
___nl__bool__4 = ___nl__int__1 >= ___nl__int__7;
#line 198
//clear ___nl__int__7;
#line 198
___nl__bool__6 = !___nl__bool__4;
#line 198
if(___nl__bool__6){ goto label_18;}
#line 198
___nl__int__9 = 1;
#line 198
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 198
//clear ___nl__int__9;
#line 198
c_rt_lib0move(&___nl__im__10,___get_global_string_const(117));
#line 198
___nl__bool__4 = c_rt_lib0ne(___nl__im__8, ___nl__im__10);
#line 198
c_rt_lib0clear(&___nl__im__8);
#line 198
c_rt_lib0clear(&___nl__im__10);
#line 198
label_18:
;
#line 198
//clear ___nl__bool__6;
#line 198
___nl__bool__5 = !___nl__bool__4;
#line 198
if(___nl__bool__5){ goto label_29;}
#line 198
___nl__int__12 = 1;
#line 198
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__12));
#line 198
//clear ___nl__int__12;
#line 198
c_rt_lib0move(&___nl__im__13,___get_global_string_const(121));
#line 198
___nl__bool__4 = c_rt_lib0ne(___nl__im__11, ___nl__im__13);
#line 198
c_rt_lib0clear(&___nl__im__11);
#line 198
c_rt_lib0clear(&___nl__im__13);
#line 198
label_29:
;
#line 198
//clear ___nl__bool__5;
#line 198
___nl__bool__4 = !___nl__bool__4;
#line 198
if(___nl__bool__4){ goto label_54;}
#line 199
___nl__int__16 = 1;
#line 199
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__16));
#line 199
//clear ___nl__int__16;
#line 199
c_rt_lib0move(&___nl__im__17,___get_global_string_const(122));
#line 199
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__17);
#line 199
c_rt_lib0clear(&___nl__im__15);
#line 199
c_rt_lib0clear(&___nl__im__17);
#line 199
___nl__bool__14 = !___nl__bool__14;
#line 199
if(___nl__bool__14){ goto label_48;}
#line 200
___nl__int__18 = 1;
#line 200
___nl__int__1 = ___nl__int__1 - ___nl__int__18;
#line 200
//clear ___nl__int__18;
#line 201
//clear ___nl__bool__14;
#line 201
goto label_54;
#line 202
goto label_48;
#line 202
label_48:
;
#line 202
//clear ___nl__bool__14;
#line 203
___nl__int__19 = 1;
#line 203
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 203
//clear ___nl__int__19;
#line 204
goto label_5;
#line 204
label_54:
;
#line 205
c_rt_lib0move(&___nl__im__20,___get_global_string_const(36));
#line 206
label_56:
;
#line 206
___nl__int__24 = 0;
#line 206
___nl__bool__21 = ___nl__int__1 >= ___nl__int__24;
#line 206
//clear ___nl__int__24;
#line 206
___nl__bool__23 = !___nl__bool__21;
#line 206
if(___nl__bool__23){ goto label_69;}
#line 206
___nl__int__26 = 1;
#line 206
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__26));
#line 206
//clear ___nl__int__26;
#line 206
c_rt_lib0move(&___nl__im__27,___get_global_string_const(117));
#line 206
___nl__bool__21 = c_rt_lib0ne(___nl__im__25, ___nl__im__27);
#line 206
c_rt_lib0clear(&___nl__im__25);
#line 206
c_rt_lib0clear(&___nl__im__27);
#line 206
label_69:
;
#line 206
//clear ___nl__bool__23;
#line 206
___nl__bool__22 = !___nl__bool__21;
#line 206
if(___nl__bool__22){ goto label_80;}
#line 206
___nl__int__29 = 1;
#line 206
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__29));
#line 206
//clear ___nl__int__29;
#line 206
c_rt_lib0move(&___nl__im__30,___get_global_string_const(121));
#line 206
___nl__bool__21 = c_rt_lib0ne(___nl__im__28, ___nl__im__30);
#line 206
c_rt_lib0clear(&___nl__im__28);
#line 206
c_rt_lib0clear(&___nl__im__30);
#line 206
label_80:
;
#line 206
//clear ___nl__bool__22;
#line 206
___nl__bool__21 = !___nl__bool__21;
#line 206
if(___nl__bool__21){ goto label_93;}
#line 207
___nl__int__32 = 1;
#line 207
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__32));
#line 207
//clear ___nl__int__32;
#line 207
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__31, ___nl__im__20));
#line 207
c_rt_lib0clear(&___nl__im__31);
#line 208
___nl__int__33 = 1;
#line 208
___nl__int__1 = ___nl__int__1 - ___nl__int__33;
#line 208
//clear ___nl__int__33;
#line 209
goto label_56;
#line 209
label_93:
;
#line 210
c_rt_lib0clear(&___nl__im__0);
#line 210
//clear ___nl__int__1;
#line 210
//clear ___nl__bool__4;
#line 210
//clear ___nl__bool__21;
#line 210
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
#line 214
___nl__int__3 = string0length(___nl__im__1);
#line 214
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 214
//clear ___nl__int__3;
#line 215
___nl__int__5 = string0length(___nl__im__0);
#line 215
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 215
___nl__bool__4 = ___nl__int__5 <= ___nl__int__6;
#line 215
//clear ___nl__int__5;
#line 215
//clear ___nl__int__6;
#line 215
___nl__bool__4 = !___nl__bool__4;
#line 215
if(___nl__bool__4){ goto label_17;}
#line 215
___nl__bool__7 = false;
#line 215
c_rt_lib0clear(&___nl__im__0);
#line 215
c_rt_lib0clear(&___nl__im__1);
#line 215
c_rt_lib0clear(&___nl__im__2);
#line 215
//clear ___nl__bool__4;
#line 215
return ___nl__bool__7;
#line 215
goto label_17;
#line 215
label_17:
;
#line 215
//clear ___nl__bool__4;
#line 215
//clear ___nl__bool__7;
#line 216
___nl__int__9 = string0length(___nl__im__0);
#line 216
___nl__int__10 = getIntFromImm(___nl__im__2);
#line 216
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 216
//clear ___nl__int__9;
#line 216
//clear ___nl__int__10;
#line 216
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 216
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__11));
#line 216
//clear ___nl__int__8;
#line 216
//clear ___nl__int__11;
#line 217
___nl__bool__12 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
c_rt_lib0clear(&___nl__im__2);
#line 217
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
#line 221
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(64));
#line 221
if(___nl__bool__1){ goto label_15;}
#line 223
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(65));
#line 223
if(___nl__bool__1){ goto label_22;}
#line 225
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(66));
#line 225
if(___nl__bool__1){ goto label_30;}
#line 227
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(68));
#line 227
if(___nl__bool__1){ goto label_43;}
#line 229
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(67));
#line 229
if(___nl__bool__1){ goto label_55;}
#line 231
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(69));
#line 231
if(___nl__bool__1){ goto label_68;}
#line 231
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 231
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 231
nl_die_arg(___nl__im__2);
#line 221
label_15:
;
#line 222
c_rt_lib0move(&___nl__im__3,___get_global_string_const(123));
#line 222
c_rt_lib0clear(&___nl__im__0);
#line 222
//clear ___nl__bool__1;
#line 222
c_rt_lib0clear(&___nl__im__2);
#line 222
return ___nl__im__3;
#line 223
goto label_82;
#line 223
label_22:
;
#line 224
c_rt_lib0move(&___nl__im__4,___get_global_string_const(124));
#line 224
c_rt_lib0clear(&___nl__im__0);
#line 224
//clear ___nl__bool__1;
#line 224
c_rt_lib0clear(&___nl__im__2);
#line 224
c_rt_lib0clear(&___nl__im__3);
#line 224
return ___nl__im__4;
#line 225
goto label_82;
#line 225
label_30:
;
#line 225
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(66)));
#line 225
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 226
c_rt_lib0move(&___nl__im__7,___get_global_string_const(125));
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
//clear ___nl__bool__1;
#line 226
c_rt_lib0clear(&___nl__im__2);
#line 226
c_rt_lib0clear(&___nl__im__3);
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 226
return ___nl__im__7;
#line 227
goto label_82;
#line 227
label_43:
;
#line 228
c_rt_lib0move(&___nl__im__8,___get_global_string_const(126));
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
//clear ___nl__bool__1;
#line 228
c_rt_lib0clear(&___nl__im__2);
#line 228
c_rt_lib0clear(&___nl__im__3);
#line 228
c_rt_lib0clear(&___nl__im__4);
#line 228
c_rt_lib0clear(&___nl__im__5);
#line 228
c_rt_lib0clear(&___nl__im__6);
#line 228
c_rt_lib0clear(&___nl__im__7);
#line 228
return ___nl__im__8;
#line 229
goto label_82;
#line 229
label_55:
;
#line 230
c_rt_lib0move(&___nl__im__9,___get_global_string_const(127));
#line 230
c_rt_lib0clear(&___nl__im__0);
#line 230
//clear ___nl__bool__1;
#line 230
c_rt_lib0clear(&___nl__im__2);
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 230
c_rt_lib0clear(&___nl__im__4);
#line 230
c_rt_lib0clear(&___nl__im__5);
#line 230
c_rt_lib0clear(&___nl__im__6);
#line 230
c_rt_lib0clear(&___nl__im__7);
#line 230
c_rt_lib0clear(&___nl__im__8);
#line 230
return ___nl__im__9;
#line 231
goto label_82;
#line 231
label_68:
;
#line 232
c_rt_lib0move(&___nl__im__10,___get_global_string_const(128));
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
//clear ___nl__bool__1;
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__5);
#line 232
c_rt_lib0clear(&___nl__im__6);
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
return ___nl__im__10;
#line 233
goto label_82;
#line 233
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
#line 237
c_rt_lib0move(&___nl__im__3,___get_global_string_const(122));
#line 237
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 237
c_rt_lib0clear(&___nl__im__3);
#line 237
___nl__bool__2 = !___nl__bool__2;
#line 237
if(___nl__bool__2){ goto label_10;}
#line 237
c_rt_lib0clear(&___nl__im__0);
#line 237
c_rt_lib0clear(&___nl__im__1);
#line 237
//clear ___nl__bool__2;
#line 237
return NULL;
#line 237
goto label_10;
#line 237
label_10:
;
#line 237
//clear ___nl__bool__2;
#line 238
c_rt_lib0move(&___nl__im__4, compiler_priv0get_dir(___nl__im__1));
#line 238
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__0, ___nl__im__4));
#line 238
c_rt_lib0clear(&___nl__im__4);
#line 239
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__0, ___nl__im__1));
#line 239
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__5));
#line 239
c_rt_lib0clear(&___nl__im__5);
#line 239
c_rt_lib0clear(&___nl__im__0);
#line 239
c_rt_lib0clear(&___nl__im__1);
#line 239
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
#line 244
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 244
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 244
c_rt_lib0clear(&___nl__im__4);
#line 245
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(129)));
#line 246
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(103)));
#line 246
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(64));
#line 246
if(___nl__bool__7){ goto label_20;}
#line 248
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(65));
#line 248
if(___nl__bool__7){ goto label_38;}
#line 250
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(66));
#line 250
if(___nl__bool__7){ goto label_63;}
#line 259
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(67));
#line 259
if(___nl__bool__7){ goto label_115;}
#line 267
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(68));
#line 267
if(___nl__bool__7){ goto label_176;}
#line 269
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(69));
#line 269
if(___nl__bool__7){ goto label_206;}
#line 269
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 269
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 269
nl_die_arg(___nl__im__8);
#line 246
label_20:
;
#line 247
c_rt_lib0move(&___nl__im__12,___get_global_string_const(123));
#line 247
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 247
c_rt_lib0clear(&___nl__im__12);
#line 247
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(64), ___nl__im__11));
#line 247
c_rt_lib0clear(&___nl__im__11);
#line 247
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__10));
#line 247
c_rt_lib0clear(&___nl__im__10);
#line 247
c_rt_lib0clear(&___nl__im__0);
#line 247
c_rt_lib0clear(&___nl__im__1);
#line 247
c_rt_lib0clear(&___nl__im__2);
#line 247
c_rt_lib0clear(&___nl__im__3);
#line 247
c_rt_lib0clear(&___nl__im__5);
#line 247
c_rt_lib0clear(&___nl__im__6);
#line 247
//clear ___nl__bool__7;
#line 247
c_rt_lib0clear(&___nl__im__8);
#line 247
return ___nl__im__9;
#line 248
goto label_233;
#line 248
label_38:
;
#line 249
c_rt_lib0move(&___nl__im__17,___get_global_string_const(124));
#line 249
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__3, ___nl__im__17));
#line 249
c_rt_lib0clear(&___nl__im__17);
#line 249
c_rt_lib0move(&___nl__im__19,___get_global_string_const(130));
#line 249
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__3, ___nl__im__19));
#line 249
c_rt_lib0clear(&___nl__im__19);
#line 249
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__16, ___get_global_string_const(72), ___nl__im__18));
#line 249
c_rt_lib0clear(&___nl__im__16);
#line 249
c_rt_lib0clear(&___nl__im__18);
#line 249
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(65), ___nl__im__15));
#line 249
c_rt_lib0clear(&___nl__im__15);
#line 249
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__14));
#line 249
c_rt_lib0clear(&___nl__im__14);
#line 249
c_rt_lib0clear(&___nl__im__0);
#line 249
c_rt_lib0clear(&___nl__im__1);
#line 249
c_rt_lib0clear(&___nl__im__2);
#line 249
c_rt_lib0clear(&___nl__im__3);
#line 249
c_rt_lib0clear(&___nl__im__5);
#line 249
c_rt_lib0clear(&___nl__im__6);
#line 249
//clear ___nl__bool__7;
#line 249
c_rt_lib0clear(&___nl__im__8);
#line 249
c_rt_lib0clear(&___nl__im__9);
#line 249
return ___nl__im__13;
#line 250
goto label_233;
#line 250
label_63:
;
#line 250
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(66)));
#line 250
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 251
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 251
c_rt_lib0move(&___nl__im__24,___get_global_string_const(131));
#line 251
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 251
c_rt_lib0clear(&___nl__im__23);
#line 251
c_rt_lib0clear(&___nl__im__24);
#line 252
c_rt_lib0move(&___nl__im__27,___get_global_string_const(131));
#line 252
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__1));
#line 252
c_rt_lib0clear(&___nl__im__27);
#line 252
c_rt_lib0move(&___nl__im__28,___get_global_string_const(132));
#line 252
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 252
c_rt_lib0clear(&___nl__im__26);
#line 252
c_rt_lib0clear(&___nl__im__28);
#line 253
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__22, ___nl__im__1));
#line 253
c_rt_lib0move(&___nl__im__31,___get_global_string_const(132));
#line 253
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 253
c_rt_lib0clear(&___nl__im__30);
#line 253
c_rt_lib0clear(&___nl__im__31);
#line 254
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__22, ___nl__im__1));
#line 254
c_rt_lib0move(&___nl__im__34,___get_global_string_const(127));
#line 254
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 254
c_rt_lib0clear(&___nl__im__33);
#line 254
c_rt_lib0clear(&___nl__im__34);
#line 257
c_rt_lib0move(&___nl__im__39,___get_global_string_const(125));
#line 257
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__3, ___nl__im__39));
#line 257
c_rt_lib0clear(&___nl__im__39);
#line 257
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__38, ___get_global_string_const(73), ___nl__im__22, ___get_global_string_const(74), ___nl__im__25, ___get_global_string_const(75), ___nl__im__29, ___get_global_string_const(67), ___nl__im__32));
#line 257
c_rt_lib0clear(&___nl__im__38);
#line 257
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__37));
#line 257
c_rt_lib0clear(&___nl__im__37);
#line 257
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__36));
#line 257
c_rt_lib0clear(&___nl__im__36);
#line 257
c_rt_lib0clear(&___nl__im__0);
#line 257
c_rt_lib0clear(&___nl__im__1);
#line 257
c_rt_lib0clear(&___nl__im__2);
#line 257
c_rt_lib0clear(&___nl__im__3);
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
//clear ___nl__bool__7;
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__9);
#line 257
c_rt_lib0clear(&___nl__im__13);
#line 257
c_rt_lib0clear(&___nl__im__20);
#line 257
c_rt_lib0clear(&___nl__im__21);
#line 257
c_rt_lib0clear(&___nl__im__22);
#line 257
c_rt_lib0clear(&___nl__im__25);
#line 257
c_rt_lib0clear(&___nl__im__29);
#line 257
c_rt_lib0clear(&___nl__im__32);
#line 257
return ___nl__im__35;
#line 259
goto label_233;
#line 259
label_115:
;
#line 260
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(133)));
#line 260
___nl__int__40 = string0length(___nl__im__41);
#line 260
c_rt_lib0clear(&___nl__im__41);
#line 261
c_rt_lib0move(&___nl__im__42, compiler_priv0get_dir(___nl__im__5));
#line 262
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 262
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__42));
#line 262
c_rt_lib0clear(&___nl__im__45);
#line 262
c_rt_lib0move(&___nl__im__46,___get_global_string_const(117));
#line 262
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 262
c_rt_lib0clear(&___nl__im__44);
#line 262
c_rt_lib0clear(&___nl__im__46);
#line 262
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__43, ___nl__im__1));
#line 262
c_rt_lib0clear(&___nl__im__43);
#line 263
___nl__int__48 = string0length(___nl__im__42);
#line 263
___nl__bool__47 = ___nl__int__40 < ___nl__int__48;
#line 263
//clear ___nl__int__48;
#line 263
___nl__bool__47 = !___nl__bool__47;
#line 263
if(___nl__bool__47){ goto label_146;}
#line 264
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 264
___nl__int__52 = 1;
#line 264
___nl__int__51 = ___nl__int__40 + ___nl__int__52;
#line 264
//clear ___nl__int__52;
#line 264
c_rt_lib0move(&___nl__im__53, c_rt_lib0int_new(___nl__int__51));
#line 264
c_rt_lib0move(&___nl__im__50, string0substr2(___nl__im__42, ___nl__im__53));
#line 264
//clear ___nl__int__51;
#line 264
c_rt_lib0clear(&___nl__im__53);
#line 264
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__49, ___nl__im__50));
#line 264
c_rt_lib0clear(&___nl__im__49);
#line 264
c_rt_lib0clear(&___nl__im__50);
#line 265
goto label_146;
#line 265
label_146:
;
#line 265
//clear ___nl__bool__47;
#line 266
c_rt_lib0move(&___nl__im__57,___get_global_string_const(127));
#line 266
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__3, ___nl__im__57));
#line 266
c_rt_lib0clear(&___nl__im__57);
#line 266
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__56));
#line 266
c_rt_lib0clear(&___nl__im__56);
#line 266
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__55));
#line 266
c_rt_lib0clear(&___nl__im__55);
#line 266
c_rt_lib0clear(&___nl__im__0);
#line 266
c_rt_lib0clear(&___nl__im__1);
#line 266
c_rt_lib0clear(&___nl__im__2);
#line 266
c_rt_lib0clear(&___nl__im__3);
#line 266
c_rt_lib0clear(&___nl__im__5);
#line 266
c_rt_lib0clear(&___nl__im__6);
#line 266
//clear ___nl__bool__7;
#line 266
c_rt_lib0clear(&___nl__im__8);
#line 266
c_rt_lib0clear(&___nl__im__9);
#line 266
c_rt_lib0clear(&___nl__im__13);
#line 266
c_rt_lib0clear(&___nl__im__20);
#line 266
c_rt_lib0clear(&___nl__im__21);
#line 266
c_rt_lib0clear(&___nl__im__22);
#line 266
c_rt_lib0clear(&___nl__im__25);
#line 266
c_rt_lib0clear(&___nl__im__29);
#line 266
c_rt_lib0clear(&___nl__im__32);
#line 266
c_rt_lib0clear(&___nl__im__35);
#line 266
//clear ___nl__int__40;
#line 266
c_rt_lib0clear(&___nl__im__42);
#line 266
return ___nl__im__54;
#line 267
goto label_233;
#line 267
label_176:
;
#line 268
c_rt_lib0move(&___nl__im__61,___get_global_string_const(126));
#line 268
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__3, ___nl__im__61));
#line 268
c_rt_lib0clear(&___nl__im__61);
#line 268
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(68), ___nl__im__60));
#line 268
c_rt_lib0clear(&___nl__im__60);
#line 268
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__59));
#line 268
c_rt_lib0clear(&___nl__im__59);
#line 268
c_rt_lib0clear(&___nl__im__0);
#line 268
c_rt_lib0clear(&___nl__im__1);
#line 268
c_rt_lib0clear(&___nl__im__2);
#line 268
c_rt_lib0clear(&___nl__im__3);
#line 268
c_rt_lib0clear(&___nl__im__5);
#line 268
c_rt_lib0clear(&___nl__im__6);
#line 268
//clear ___nl__bool__7;
#line 268
c_rt_lib0clear(&___nl__im__8);
#line 268
c_rt_lib0clear(&___nl__im__9);
#line 268
c_rt_lib0clear(&___nl__im__13);
#line 268
c_rt_lib0clear(&___nl__im__20);
#line 268
c_rt_lib0clear(&___nl__im__21);
#line 268
c_rt_lib0clear(&___nl__im__22);
#line 268
c_rt_lib0clear(&___nl__im__25);
#line 268
c_rt_lib0clear(&___nl__im__29);
#line 268
c_rt_lib0clear(&___nl__im__32);
#line 268
c_rt_lib0clear(&___nl__im__35);
#line 268
//clear ___nl__int__40;
#line 268
c_rt_lib0clear(&___nl__im__42);
#line 268
c_rt_lib0clear(&___nl__im__54);
#line 268
return ___nl__im__58;
#line 269
goto label_233;
#line 269
label_206:
;
#line 270
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 270
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__63));
#line 270
c_rt_lib0clear(&___nl__im__63);
#line 270
c_rt_lib0clear(&___nl__im__0);
#line 270
c_rt_lib0clear(&___nl__im__1);
#line 270
c_rt_lib0clear(&___nl__im__2);
#line 270
c_rt_lib0clear(&___nl__im__3);
#line 270
c_rt_lib0clear(&___nl__im__5);
#line 270
c_rt_lib0clear(&___nl__im__6);
#line 270
//clear ___nl__bool__7;
#line 270
c_rt_lib0clear(&___nl__im__8);
#line 270
c_rt_lib0clear(&___nl__im__9);
#line 270
c_rt_lib0clear(&___nl__im__13);
#line 270
c_rt_lib0clear(&___nl__im__20);
#line 270
c_rt_lib0clear(&___nl__im__21);
#line 270
c_rt_lib0clear(&___nl__im__22);
#line 270
c_rt_lib0clear(&___nl__im__25);
#line 270
c_rt_lib0clear(&___nl__im__29);
#line 270
c_rt_lib0clear(&___nl__im__32);
#line 270
c_rt_lib0clear(&___nl__im__35);
#line 270
//clear ___nl__int__40;
#line 270
c_rt_lib0clear(&___nl__im__42);
#line 270
c_rt_lib0clear(&___nl__im__54);
#line 270
c_rt_lib0clear(&___nl__im__58);
#line 270
return ___nl__im__62;
#line 271
goto label_233;
#line 271
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
#line 275
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 276
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 276
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 276
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 277
___nl__int__7 = 0;
#line 277
___nl__int__8 = 1;
#line 277
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 277
label_11:
;
#line 277
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 277
if(___nl__bool__10){ goto label_28;}
#line 277
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 277
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 278
c_rt_lib0move(&___nl__im__13,___get_global_string_const(127));
#line 278
___nl__bool__12 = compiler_priv0has_extension(___nl__im__6, ___nl__im__13);
#line 278
c_rt_lib0clear(&___nl__im__13);
#line 278
___nl__bool__12 = !___nl__bool__12;
#line 278
if(___nl__bool__12){ goto label_23;}
#line 278
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 278
goto label_23;
#line 278
label_23:
;
#line 278
//clear ___nl__bool__12;
#line 278
c_rt_lib0clear(&___nl__im__6);
#line 279
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 279
goto label_11;
#line 279
label_28:
;
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__2);
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
//clear ___nl__int__7;
#line 280
//clear ___nl__int__8;
#line 280
//clear ___nl__int__9;
#line 280
//clear ___nl__bool__10;
#line 280
c_rt_lib0clear(&___nl__im__11);
#line 280
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
#line 284
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 285
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 286
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 286
___nl__int__5 = 0;
#line 286
___nl__int__6 = 1;
#line 286
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 286
label_6:
;
#line 286
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 286
if(___nl__bool__8){ goto label_52;}
#line 286
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__5));
#line 286
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 287
c_rt_lib0move(&___nl__im__11,___get_global_string_const(127));
#line 287
___nl__bool__10 = compiler_priv0has_extension(___nl__im__4, ___nl__im__11);
#line 287
c_rt_lib0clear(&___nl__im__11);
#line 287
___nl__bool__10 = !___nl__bool__10;
#line 287
if(___nl__bool__10){ goto label_22;}
#line 288
c_rt_lib0move(&___nl__im__13, compiler_priv0get_dir(___nl__im__4));
#line 288
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(133), ___nl__im__13, ___get_global_string_const(129), ___nl__im__4));
#line 288
c_rt_lib0clear(&___nl__im__13);
#line 288
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__12));
#line 288
c_rt_lib0clear(&___nl__im__12);
#line 289
goto label_40;
#line 289
label_22:
;
#line 290
c_rt_lib0move(&___nl__im__14, compiler_priv0get_all_nianio_file(___nl__im__4));
#line 290
___nl__int__16 = 0;
#line 290
___nl__int__17 = 1;
#line 290
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 290
label_27:
;
#line 290
___nl__bool__19 = ___nl__int__16 >= ___nl__int__18;
#line 290
if(___nl__bool__19){ goto label_38;}
#line 290
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 290
c_rt_lib0copy(&___nl__im__15, ___nl__im__20);
#line 291
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(133), ___nl__im__4, ___get_global_string_const(129), ___nl__im__15));
#line 291
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__21));
#line 291
c_rt_lib0clear(&___nl__im__21);
#line 291
c_rt_lib0clear(&___nl__im__15);
#line 292
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 292
goto label_27;
#line 292
label_38:
;
#line 293
goto label_40;
#line 293
label_40:
;
#line 293
//clear ___nl__bool__10;
#line 293
c_rt_lib0clear(&___nl__im__14);
#line 293
c_rt_lib0clear(&___nl__im__15);
#line 293
//clear ___nl__int__16;
#line 293
//clear ___nl__int__17;
#line 293
//clear ___nl__int__18;
#line 293
//clear ___nl__bool__19;
#line 293
c_rt_lib0clear(&___nl__im__20);
#line 293
c_rt_lib0clear(&___nl__im__4);
#line 294
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 294
goto label_6;
#line 294
label_52:
;
#line 295
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 295
c_rt_lib0move(&___nl__im__22, compiler_priv0get_out_ext(___nl__im__23));
#line 295
c_rt_lib0clear(&___nl__im__23);
#line 296
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 297
c_rt_lib0move(&___nl__im__25, c_fe_lib0get_module_files(___nl__im__1));
#line 297
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
#line 297
if(___nl__bool__26){ goto label_65;}
#line 302
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(82));
#line 302
if(___nl__bool__26){ goto label_99;}
#line 302
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 302
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 302
nl_die_arg(___nl__im__27);
#line 297
label_65:
;
#line 297
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 297
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 298
c_rt_lib0move(&___nl__im__32, ptd0string());
#line 298
c_rt_lib0move(&___nl__im__31, ptd0arr(___nl__im__32));
#line 298
c_rt_lib0clear(&___nl__im__32);
#line 298
c_rt_lib0move(&___nl__im__30, ptd0ensure(___nl__im__31, ___nl__im__28));
#line 298
c_rt_lib0clear(&___nl__im__31);
#line 298
___nl__int__34 = 0;
#line 298
___nl__int__35 = 1;
#line 298
___nl__int__36 = c_rt_lib0array_len(___nl__im__30);
#line 298
label_76:
;
#line 298
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 298
if(___nl__bool__37){ goto label_97;}
#line 298
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__30, ___nl__int__34));
#line 298
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 299
___nl__bool__39 = compiler_priv0has_extension(___nl__im__33, ___nl__im__22);
#line 299
___nl__bool__39 = !___nl__bool__39;
#line 299
___nl__bool__39 = !___nl__bool__39;
#line 299
if(___nl__bool__39){ goto label_88;}
#line 299
//clear ___nl__bool__39;
#line 299
goto label_94;
#line 299
goto label_88;
#line 299
label_88:
;
#line 299
//clear ___nl__bool__39;
#line 300
c_rt_lib0move(&___nl__im__40, compiler_priv0get_module_name(___nl__im__33));
#line 300
c_rt_lib0delete(hash0set_value(&___nl__im__24, ___nl__im__40, ___nl__im__33));
#line 300
c_rt_lib0clear(&___nl__im__40);
#line 300
c_rt_lib0clear(&___nl__im__33);
#line 300
label_94:
;
#line 301
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 301
goto label_76;
#line 301
label_97:
;
#line 302
goto label_131;
#line 302
label_99:
;
#line 302
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(82)));
#line 302
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 303
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(0));
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
c_rt_lib0clear(&___nl__im__2);
#line 303
c_rt_lib0clear(&___nl__im__3);
#line 303
c_rt_lib0clear(&___nl__im__4);
#line 303
//clear ___nl__int__5;
#line 303
//clear ___nl__int__6;
#line 303
//clear ___nl__int__7;
#line 303
//clear ___nl__bool__8;
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 303
c_rt_lib0clear(&___nl__im__22);
#line 303
c_rt_lib0clear(&___nl__im__24);
#line 303
c_rt_lib0clear(&___nl__im__25);
#line 303
//clear ___nl__bool__26;
#line 303
c_rt_lib0clear(&___nl__im__27);
#line 303
c_rt_lib0clear(&___nl__im__28);
#line 303
c_rt_lib0clear(&___nl__im__29);
#line 303
c_rt_lib0clear(&___nl__im__30);
#line 303
c_rt_lib0clear(&___nl__im__33);
#line 303
//clear ___nl__int__34;
#line 303
//clear ___nl__int__35;
#line 303
//clear ___nl__int__36;
#line 303
//clear ___nl__bool__37;
#line 303
c_rt_lib0clear(&___nl__im__38);
#line 303
c_rt_lib0clear(&___nl__im__41);
#line 303
c_rt_lib0clear(&___nl__im__42);
#line 303
return ___nl__im__43;
#line 304
goto label_131;
#line 304
label_131:
;
#line 305
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(0));
#line 306
___nl__int__46 = 0;
#line 306
___nl__int__47 = 1;
#line 306
___nl__int__48 = c_rt_lib0array_len(___nl__im__2);
#line 306
label_136:
;
#line 306
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 306
if(___nl__bool__49){ goto label_149;}
#line 306
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__2, ___nl__int__46));
#line 306
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 307
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(129)));
#line 307
c_rt_lib0move(&___nl__im__51, compiler_priv0get_module_name(___nl__im__52));
#line 307
c_rt_lib0clear(&___nl__im__52);
#line 308
c_rt_lib0move(&___nl__im__53, compiler_priv0mk_path_module(___nl__im__45, ___nl__im__51, ___nl__im__0));
#line 309
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__51, ___nl__im__53));
#line 309
c_rt_lib0clear(&___nl__im__45);
#line 310
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 310
goto label_136;
#line 310
label_149:
;
#line 311
c_rt_lib0clear(&___nl__im__0);
#line 311
c_rt_lib0clear(&___nl__im__1);
#line 311
c_rt_lib0clear(&___nl__im__2);
#line 311
c_rt_lib0clear(&___nl__im__3);
#line 311
c_rt_lib0clear(&___nl__im__4);
#line 311
//clear ___nl__int__5;
#line 311
//clear ___nl__int__6;
#line 311
//clear ___nl__int__7;
#line 311
//clear ___nl__bool__8;
#line 311
c_rt_lib0clear(&___nl__im__9);
#line 311
c_rt_lib0clear(&___nl__im__22);
#line 311
c_rt_lib0clear(&___nl__im__24);
#line 311
c_rt_lib0clear(&___nl__im__25);
#line 311
//clear ___nl__bool__26;
#line 311
c_rt_lib0clear(&___nl__im__27);
#line 311
c_rt_lib0clear(&___nl__im__28);
#line 311
c_rt_lib0clear(&___nl__im__29);
#line 311
c_rt_lib0clear(&___nl__im__30);
#line 311
c_rt_lib0clear(&___nl__im__33);
#line 311
//clear ___nl__int__34;
#line 311
//clear ___nl__int__35;
#line 311
//clear ___nl__int__36;
#line 311
//clear ___nl__bool__37;
#line 311
c_rt_lib0clear(&___nl__im__38);
#line 311
c_rt_lib0clear(&___nl__im__41);
#line 311
c_rt_lib0clear(&___nl__im__42);
#line 311
c_rt_lib0clear(&___nl__im__43);
#line 311
c_rt_lib0clear(&___nl__im__45);
#line 311
//clear ___nl__int__46;
#line 311
//clear ___nl__int__47;
#line 311
//clear ___nl__int__48;
#line 311
//clear ___nl__bool__49;
#line 311
c_rt_lib0clear(&___nl__im__50);
#line 311
c_rt_lib0clear(&___nl__im__51);
#line 311
c_rt_lib0clear(&___nl__im__53);
#line 311
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
#line 318
c_rt_lib0move(&___nl__im__5,___get_global_string_const(134));
#line 318
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 318
c_rt_lib0clear(&___nl__im__5);
#line 318
c_rt_lib0move(&___nl__im__6,___get_global_string_const(135));
#line 318
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 318
c_rt_lib0clear(&___nl__im__4);
#line 318
c_rt_lib0clear(&___nl__im__6);
#line 318
c_rt_lib0delete(c_fe_lib0print(___nl__im__3));
#line 318
c_rt_lib0clear(&___nl__im__3);
#line 319
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 319
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 319
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__12, ___get_global_string_const(82), ___nl__im__13));
#line 319
c_rt_lib0clear(&___nl__im__12);
#line 319
c_rt_lib0clear(&___nl__im__13);
#line 319
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 319
c_rt_lib0clear(&___nl__im__11);
#line 319
c_rt_lib0move(&___nl__im__14, c_fe_lib0file_to_string(___nl__im__1));
#line 319
c_rt_lib0move(&___nl__im__9, ptd0ensure(___nl__im__10, ___nl__im__14));
#line 319
c_rt_lib0clear(&___nl__im__10);
#line 319
c_rt_lib0clear(&___nl__im__14);
#line 319
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 319
if(___nl__bool__8){ goto label_27;}
#line 319
c_rt_lib0clear(&___nl__im__0);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
c_rt_lib0clear(&___nl__im__7);
#line 319
//clear ___nl__bool__8;
#line 319
return ___nl__im__9;
#line 319
label_27:
;
#line 319
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 320
___nl__bool__16 = true;
#line 320
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 320
//clear ___nl__bool__16;
#line 321
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 321
if(___nl__bool__17){ goto label_39;}
#line 328
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(136));
#line 328
if(___nl__bool__17){ goto label_112;}
#line 328
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 328
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 328
nl_die_arg(___nl__im__18);
#line 321
label_39:
;
#line 321
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 321
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 322
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 323
___nl__bool__23 = false;
#line 323
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
#line 323
c_rt_lib0move(&___nl__im__22, module_checker0check_module(___nl__im__19, ___nl__im__24, &___nl__im__21));
#line 323
//clear ___nl__bool__23;
#line 323
c_rt_lib0clear(&___nl__im__24);
#line 324
c_rt_lib0move(&___nl__im__25,___get_global_string_const(59));
#line 324
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__25));
#line 324
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(137)));
#line 324
c_rt_lib0delete(hash0set_value(&___nl__im__25, ___nl__im__0, ___nl__im__26));
#line 324
c_rt_lib0move(&___nl__string__27,___get_global_string_const(59));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__27, ___nl__im__25));
#line 324
c_rt_lib0clear(&___nl__im__25);
#line 324
c_rt_lib0clear(&___nl__im__26);
#line 324
c_rt_lib0clear(&___nl__string__27);
#line 325
c_rt_lib0move(&___nl__im__28,___get_global_string_const(58));
#line 325
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__28));
#line 325
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 325
c_rt_lib0delete(hash0set_value(&___nl__im__28, ___nl__im__0, ___nl__im__29));
#line 325
c_rt_lib0move(&___nl__string__30,___get_global_string_const(58));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__28));
#line 325
c_rt_lib0clear(&___nl__im__28);
#line 325
c_rt_lib0clear(&___nl__im__29);
#line 325
c_rt_lib0clear(&___nl__string__30);
#line 326
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 326
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 326
c_rt_lib0clear(&___nl__im__33);
#line 326
___nl__int__34 = 0;
#line 326
___nl__bool__31 = ___nl__int__32 == ___nl__int__34;
#line 326
//clear ___nl__int__32;
#line 326
//clear ___nl__int__34;
#line 326
___nl__bool__31 = !___nl__bool__31;
#line 326
___nl__bool__31 = !___nl__bool__31;
#line 326
if(___nl__bool__31){ goto label_94;}
#line 326
c_rt_lib0move(&___nl__im__36,___get_global_string_const(36));
#line 326
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__36));
#line 326
c_rt_lib0clear(&___nl__im__36);
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
c_rt_lib0clear(&___nl__im__7);
#line 326
//clear ___nl__bool__8;
#line 326
c_rt_lib0clear(&___nl__im__9);
#line 326
c_rt_lib0clear(&___nl__im__15);
#line 326
//clear ___nl__bool__17;
#line 326
c_rt_lib0clear(&___nl__im__18);
#line 326
c_rt_lib0clear(&___nl__im__19);
#line 326
c_rt_lib0clear(&___nl__im__20);
#line 326
c_rt_lib0clear(&___nl__im__21);
#line 326
c_rt_lib0clear(&___nl__im__22);
#line 326
//clear ___nl__bool__31;
#line 326
return ___nl__im__35;
#line 326
goto label_94;
#line 326
label_94:
;
#line 326
//clear ___nl__bool__31;
#line 326
c_rt_lib0clear(&___nl__im__35);
#line 327
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__19));
#line 327
c_rt_lib0clear(&___nl__im__0);
#line 327
c_rt_lib0clear(&___nl__im__1);
#line 327
c_rt_lib0clear(&___nl__im__7);
#line 327
//clear ___nl__bool__8;
#line 327
c_rt_lib0clear(&___nl__im__9);
#line 327
c_rt_lib0clear(&___nl__im__15);
#line 327
//clear ___nl__bool__17;
#line 327
c_rt_lib0clear(&___nl__im__18);
#line 327
c_rt_lib0clear(&___nl__im__19);
#line 327
c_rt_lib0clear(&___nl__im__20);
#line 327
c_rt_lib0clear(&___nl__im__21);
#line 327
c_rt_lib0clear(&___nl__im__22);
#line 327
return ___nl__im__37;
#line 328
goto label_151;
#line 328
label_112:
;
#line 328
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(136)));
#line 328
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 329
c_rt_lib0move(&___nl__im__40,___get_global_string_const(59));
#line 329
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__40));
#line 329
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 329
c_rt_lib0delete(hash0set_value(&___nl__im__40, ___nl__im__0, ___nl__im__41));
#line 329
c_rt_lib0move(&___nl__string__42,___get_global_string_const(59));
#line 329
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__42, ___nl__im__40));
#line 329
c_rt_lib0clear(&___nl__im__40);
#line 329
c_rt_lib0clear(&___nl__im__41);
#line 329
c_rt_lib0clear(&___nl__string__42);
#line 330
c_rt_lib0move(&___nl__im__43,___get_global_string_const(58));
#line 330
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__43));
#line 330
c_rt_lib0delete(hash0set_value(&___nl__im__43, ___nl__im__0, ___nl__im__38));
#line 330
c_rt_lib0move(&___nl__string__44,___get_global_string_const(58));
#line 330
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__44, ___nl__im__43));
#line 330
c_rt_lib0clear(&___nl__im__43);
#line 330
c_rt_lib0clear(&___nl__string__44);
#line 331
c_rt_lib0move(&___nl__im__46,___get_global_string_const(36));
#line 331
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__46));
#line 331
c_rt_lib0clear(&___nl__im__46);
#line 331
c_rt_lib0clear(&___nl__im__0);
#line 331
c_rt_lib0clear(&___nl__im__1);
#line 331
c_rt_lib0clear(&___nl__im__7);
#line 331
//clear ___nl__bool__8;
#line 331
c_rt_lib0clear(&___nl__im__9);
#line 331
c_rt_lib0clear(&___nl__im__15);
#line 331
//clear ___nl__bool__17;
#line 331
c_rt_lib0clear(&___nl__im__18);
#line 331
c_rt_lib0clear(&___nl__im__19);
#line 331
c_rt_lib0clear(&___nl__im__20);
#line 331
c_rt_lib0clear(&___nl__im__21);
#line 331
c_rt_lib0clear(&___nl__im__22);
#line 331
c_rt_lib0clear(&___nl__im__37);
#line 331
c_rt_lib0clear(&___nl__im__38);
#line 331
c_rt_lib0clear(&___nl__im__39);
#line 331
return ___nl__im__45;
#line 332
goto label_151;
#line 332
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
#line 336
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 337
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(101)));
#line 337
c_rt_lib0move(&___nl__im__2, c_fe_lib0file_to_string(___nl__im__3));
#line 337
c_rt_lib0clear(&___nl__im__3);
#line 337
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(83));
#line 337
if(___nl__bool__4){ goto label_11;}
#line 350
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(82));
#line 350
if(___nl__bool__4){ goto label_58;}
#line 350
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 350
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 350
nl_die_arg(___nl__im__5);
#line 337
label_11:
;
#line 337
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(83)));
#line 337
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 338
c_rt_lib0move(&___nl__im__8,___get_global_string_const(138));
#line 338
c_rt_lib0delete(c_fe_lib0print(___nl__im__8));
#line 338
c_rt_lib0clear(&___nl__im__8);
#line 339
c_rt_lib0move(&___nl__im__9, dfile0try_sload(___nl__im__6));
#line 340
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 341
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 341
if(___nl__bool__11){ goto label_26;}
#line 343
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(82));
#line 343
if(___nl__bool__11){ goto label_31;}
#line 343
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 343
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__9));
#line 343
nl_die_arg(___nl__im__12);
#line 341
label_26:
;
#line 341
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 341
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 342
c_rt_lib0copy(&___nl__im__10, ___nl__im__13);
#line 343
goto label_39;
#line 343
label_31:
;
#line 343
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(82)));
#line 343
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 344
c_rt_lib0move(&___nl__im__17,___get_global_string_const(139));
#line 344
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 344
c_rt_lib0clear(&___nl__im__17);
#line 345
c_rt_lib0delete(c_fe_lib0print(___nl__im__15));
#line 346
goto label_39;
#line 346
label_39:
;
#line 347
___nl__int__19 = 0;
#line 347
___nl__int__20 = 1;
#line 347
___nl__int__21 = c_rt_lib0array_len(___nl__im__10);
#line 347
label_43:
;
#line 347
___nl__bool__22 = ___nl__int__19 >= ___nl__int__21;
#line 347
if(___nl__bool__22){ goto label_56;}
#line 347
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__10, ___nl__int__19));
#line 347
c_rt_lib0copy(&___nl__im__18, ___nl__im__23);
#line 348
___nl__int__24 = 1;
#line 348
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__24));
#line 348
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__25));
#line 348
//clear ___nl__int__24;
#line 348
c_rt_lib0clear(&___nl__im__25);
#line 348
c_rt_lib0clear(&___nl__im__18);
#line 349
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 349
goto label_43;
#line 349
label_56:
;
#line 350
goto label_65;
#line 350
label_58:
;
#line 350
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(82)));
#line 350
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 351
c_rt_lib0move(&___nl__im__28,___get_global_string_const(140));
#line 351
c_rt_lib0delete(c_fe_lib0print(___nl__im__28));
#line 351
c_rt_lib0clear(&___nl__im__28);
#line 352
goto label_65;
#line 352
label_65:
;
#line 353
c_rt_lib0clear(&___nl__im__0);
#line 353
c_rt_lib0clear(&___nl__im__2);
#line 353
//clear ___nl__bool__4;
#line 353
c_rt_lib0clear(&___nl__im__5);
#line 353
c_rt_lib0clear(&___nl__im__6);
#line 353
c_rt_lib0clear(&___nl__im__7);
#line 353
c_rt_lib0clear(&___nl__im__9);
#line 353
c_rt_lib0clear(&___nl__im__10);
#line 353
//clear ___nl__bool__11;
#line 353
c_rt_lib0clear(&___nl__im__12);
#line 353
c_rt_lib0clear(&___nl__im__13);
#line 353
c_rt_lib0clear(&___nl__im__14);
#line 353
c_rt_lib0clear(&___nl__im__15);
#line 353
c_rt_lib0clear(&___nl__im__16);
#line 353
c_rt_lib0clear(&___nl__im__18);
#line 353
//clear ___nl__int__19;
#line 353
//clear ___nl__int__20;
#line 353
//clear ___nl__int__21;
#line 353
//clear ___nl__bool__22;
#line 353
c_rt_lib0clear(&___nl__im__23);
#line 353
c_rt_lib0clear(&___nl__im__26);
#line 353
c_rt_lib0clear(&___nl__im__27);
#line 353
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
generator_c0state_t0type ___nl__rec__16 = {
.own_to_im = (own_to_im_function*)generator_c0conv_to_im00state_t
};
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
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
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
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__string__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__string__74 = NULL;
bool  ___nl__bool__75 = false;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
INT  ___nl__int__78 = 0;
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
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
bool  ___nl__bool__123 = false;
ImmT  ___nl__im__124 = NULL;
bool  ___nl__bool__125 = false;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
bool  ___nl__bool__129 = false;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
INT  ___nl__int__132 = 0;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
bool  ___nl__bool__138 = false;
INT  ___nl__int__139 = 0;
INT  ___nl__int__140 = 0;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
bool  ___nl__bool__143 = false;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
bool  ___nl__bool__148 = false;
INT  ___nl__int__149 = 0;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
bool  ___nl__bool__156 = false;
INT  ___nl__int__157 = 0;
INT  ___nl__int__158 = 0;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
bool  ___nl__bool__161 = false;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
bool  ___nl__bool__165 = false;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
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
bool  ___nl__bool__179 = false;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
bool  ___nl__bool__187 = false;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
bool  ___nl__bool__195 = false;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
bool  ___nl__bool__203 = false;
INT  ___nl__int__204 = 0;
INT  ___nl__int__205 = 0;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
INT  ___nl__int__209 = 0;
ImmT  ___nl__string__210 = NULL;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__im__212 = NULL;
ImmT  ___nl__im__213 = NULL;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
bool  ___nl__bool__216 = false;
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
#line 357
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 358
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 359
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 360
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 361
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 363
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 364
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 365
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 366
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 367
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 367
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__7, ___get_global_string_const(59), ___nl__im__8, ___get_global_string_const(60), ___nl__im__9, ___get_global_string_const(61), ___nl__im__10, ___get_global_string_const(62), ___nl__im__11));
#line 367
c_rt_lib0clear(&___nl__im__7);
#line 367
c_rt_lib0clear(&___nl__im__8);
#line 367
c_rt_lib0clear(&___nl__im__9);
#line 367
c_rt_lib0clear(&___nl__im__10);
#line 367
c_rt_lib0clear(&___nl__im__11);
#line 369
c_rt_lib0move(&___nl__im__13, compiler_priv0get_mathematical_func(___nl__im__0));
#line 369
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 369
c_rt_lib0move(&___nl__im__12, post_processing0init(___nl__im__13, ___nl__im__14));
#line 369
c_rt_lib0clear(&___nl__im__13);
#line 369
c_rt_lib0clear(&___nl__im__14);
#line 370
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 371
;
#line 371
___nl__im_ptr__17 = &(___nl__rec__16.global_int_const0field);
#line 372
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 372
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 372
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__18, ___get_global_string_const(142), ___nl__im__19, ___get_global_string_const(143), ___nl__im__20, ___get_global_string_const(144), ___nl__im__21));
#line 372
c_rt_lib0clear(&___nl__im__18);
#line 372
c_rt_lib0clear(&___nl__im__19);
#line 372
c_rt_lib0clear(&___nl__im__20);
#line 372
c_rt_lib0clear(&___nl__im__21);
#line 372
___nl__im_ptr__17 = NULL;
#line 372
___nl__im_ptr__22 = &(___nl__rec__16.global_string_const0field);
#line 373
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 373
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 373
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(___nl__im_ptr__22, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__23, ___get_global_string_const(142), ___nl__im__24, ___get_global_string_const(143), ___nl__im__25, ___get_global_string_const(144), ___nl__im__26));
#line 373
c_rt_lib0clear(&___nl__im__23);
#line 373
c_rt_lib0clear(&___nl__im__24);
#line 373
c_rt_lib0clear(&___nl__im__25);
#line 373
c_rt_lib0clear(&___nl__im__26);
#line 373
___nl__im_ptr__22 = NULL;
#line 373
___nl__im_ptr__27 = &(___nl__rec__16.ret0field);
#line 374
c_rt_lib0move(___nl__im_ptr__27,___get_global_string_const(36));
#line 374
___nl__im_ptr__27 = NULL;
#line 374
___nl__im_ptr__28 = &(___nl__rec__16.header0field);
#line 375
c_rt_lib0move(___nl__im_ptr__28,___get_global_string_const(36));
#line 375
___nl__im_ptr__28 = NULL;
#line 375
___nl__im_ptr__29 = &(___nl__rec__16.fun_args0field);
#line 376
c_rt_lib0move(___nl__im_ptr__29, c_rt_lib0array_mk(0));
#line 376
___nl__im_ptr__29 = NULL;
#line 376
___nl__im_ptr__30 = &(___nl__rec__16.ret_reg_type0field);
#line 377
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0ov_mk_none(___get_global_string_const(145)));
#line 377
___nl__im_ptr__30 = NULL;
#line 377
___nl__rec_ptr__31 = &(___nl__rec__16.const0field);
#line 378
;
#line 378
___nl__int_ptr__32 = &(___nl__rec_ptr__31->dynamic_nr0field);
#line 379
(*___nl__int_ptr__32) = 0;
#line 379
___nl__int_ptr__32 = NULL;
#line 379
___nl__rec_ptr__33 = &(___nl__rec_ptr__31->int0field);
#line 380
;
#line 380
___nl__arr_ptr__34 = &(___nl__rec_ptr__33->arr0field);
#line 380
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__34));
(*___nl__arr_ptr__34).size = 0;
(*___nl__arr_ptr__34).capacity = 0;
(*___nl__arr_ptr__34).value = NULL;
#line 380
___nl__arr_ptr__34 = NULL;
#line 380
___nl__im_ptr__35 = &(___nl__rec_ptr__33->hash0field);
#line 380
c_rt_lib0move(___nl__im_ptr__35, c_rt_lib0hash_mk(0));
#line 380
___nl__im_ptr__35 = NULL;
#line 380
___nl__rec_ptr__33 = NULL;
#line 380
___nl__rec_ptr__36 = &(___nl__rec_ptr__31->string0field);
#line 381
;
#line 381
___nl__arr_ptr__37 = &(___nl__rec_ptr__36->arr0field);
#line 381
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__37));
(*___nl__arr_ptr__37).size = 0;
(*___nl__arr_ptr__37).capacity = 0;
(*___nl__arr_ptr__37).value = NULL;
#line 381
___nl__arr_ptr__37 = NULL;
#line 381
___nl__im_ptr__38 = &(___nl__rec_ptr__36->hash0field);
#line 381
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(0));
#line 381
___nl__im_ptr__38 = NULL;
#line 381
___nl__rec_ptr__36 = NULL;
#line 381
___nl__rec_ptr__39 = &(___nl__rec_ptr__31->singleton0field);
#line 382
;
#line 382
___nl__arr_ptr__40 = &(___nl__rec_ptr__39->arr0field);
#line 382
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__40));
(*___nl__arr_ptr__40).size = 0;
(*___nl__arr_ptr__40).capacity = 0;
(*___nl__arr_ptr__40).value = NULL;
#line 382
___nl__arr_ptr__40 = NULL;
#line 382
___nl__im_ptr__41 = &(___nl__rec_ptr__39->hash0field);
#line 382
c_rt_lib0move(___nl__im_ptr__41, c_rt_lib0hash_mk(0));
#line 382
___nl__im_ptr__41 = NULL;
#line 382
___nl__rec_ptr__39 = NULL;
#line 382
___nl__rec_ptr__31 = NULL;
#line 382
___nl__im_ptr__42 = &(___nl__rec__16.mod_name0field);
#line 384
c_rt_lib0move(___nl__im_ptr__42,___get_global_string_const(36));
#line 384
___nl__im_ptr__42 = NULL;
#line 384
___nl__hash_ptr__43 = &(___nl__rec__16.additional_imports0field);
#line 385
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__43));
(*___nl__hash_ptr__43).size = 0;
(*___nl__hash_ptr__43).capacity = 0;
(*___nl__hash_ptr__43).keys = NULL;
(*___nl__hash_ptr__43).values = NULL;
#line 385
___nl__hash_ptr__43 = NULL;
#line 385
___nl__im_ptr__44 = &(___nl__rec__16.defined_types0field);
#line 386
c_rt_lib0move(___nl__im_ptr__44, c_rt_lib0hash_mk(0));
#line 386
___nl__im_ptr__44 = NULL;
#line 388
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(0));
#line 389
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 390
label_101:
;
#line 391
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 391
c_rt_lib0copy(&___nl__im__48, ___nl__im__47);
#line 391
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(60), ___nl__im__48);
#line 391
c_rt_lib0clear(&___nl__im__47);
#line 391
c_rt_lib0clear(&___nl__im__48);
#line 392
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 392
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 392
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(61), ___nl__im__50);
#line 392
c_rt_lib0clear(&___nl__im__49);
#line 392
c_rt_lib0clear(&___nl__im__50);
#line 393
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 393
c_rt_lib0copy(&___nl__im__52, ___nl__im__51);
#line 393
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(62), ___nl__im__52);
#line 393
c_rt_lib0clear(&___nl__im__51);
#line 393
c_rt_lib0clear(&___nl__im__52);
#line 394
c_rt_lib0move(&___nl__im__53, compiler_priv0get_files_to_parse(___nl__im__0));
#line 395
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__53));
#line 395
label_119:
;
#line 395
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 395
if(___nl__bool__55){ goto label_167;}
#line 395
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 395
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__53, ___nl__im__54));
#line 396
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(78)));
#line 396
c_rt_lib0move(&___nl__im__58, c_fe_lib0get_modif_time(___nl__im__59));
#line 396
c_rt_lib0clear(&___nl__im__59);
#line 397
___nl__bool__60 = c_rt_lib0priv_is(___nl__im__58, ___get_global_string_const(82));
#line 397
___nl__bool__60 = !___nl__bool__60;
#line 397
if(___nl__bool__60){ goto label_134;}
#line 397
c_rt_lib0clear(&___nl__im__58);
#line 397
//clear ___nl__bool__60;
#line 397
goto label_164;
#line 397
goto label_134;
#line 397
label_134:
;
#line 397
//clear ___nl__bool__60;
#line 398
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__58, ___get_global_string_const(83)));
#line 399
___nl__bool__61 = hash0has_key(___nl__im__1, ___nl__im__54);
#line 399
___nl__bool__61 = !___nl__bool__61;
#line 399
if(___nl__bool__61){ goto label_158;}
#line 400
c_rt_lib0move(&___nl__im__62, hash0get_value(___nl__im__1, ___nl__im__54));
#line 401
___nl__int__64 = getIntFromImm(___nl__im__58);
#line 401
___nl__int__65 = getIntFromImm(___nl__im__62);
#line 401
___nl__bool__63 = ___nl__int__64 > ___nl__int__65;
#line 401
//clear ___nl__int__64;
#line 401
//clear ___nl__int__65;
#line 401
___nl__bool__63 = !___nl__bool__63;
#line 401
___nl__bool__63 = !___nl__bool__63;
#line 401
if(___nl__bool__63){ goto label_155;}
#line 401
c_rt_lib0clear(&___nl__im__58);
#line 401
//clear ___nl__bool__61;
#line 401
c_rt_lib0clear(&___nl__im__62);
#line 401
//clear ___nl__bool__63;
#line 401
goto label_164;
#line 401
goto label_155;
#line 401
label_155:
;
#line 401
//clear ___nl__bool__63;
#line 402
goto label_158;
#line 402
label_158:
;
#line 402
//clear ___nl__bool__61;
#line 402
c_rt_lib0clear(&___nl__im__62);
#line 403
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__54, ___nl__im__58));
#line 404
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__56));
#line 404
c_rt_lib0clear(&___nl__im__58);
#line 404
label_164:
;
#line 405
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 405
goto label_119;
#line 405
label_167:
;
#line 406
c_rt_lib0move(&___nl__im__69, c_rt_lib0init_iter(___nl__im__15));
#line 406
label_169:
;
#line 406
___nl__bool__67 = c_rt_lib0is_end_hash(___nl__im__69);
#line 406
if(___nl__bool__67){ goto label_211;}
#line 406
c_rt_lib0move(&___nl__im__66, c_rt_lib0get_key_iter(___nl__im__69));
#line 406
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__66));
#line 407
___nl__bool__70 = hash0has_key(___nl__im__53, ___nl__im__66);
#line 407
___nl__bool__70 = !___nl__bool__70;
#line 407
___nl__bool__70 = !___nl__bool__70;
#line 407
if(___nl__bool__70){ goto label_207;}
#line 408
c_rt_lib0move(&___nl__im__71,___get_global_string_const(58));
#line 408
c_rt_lib0move(&___nl__im__71, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__71));
#line 408
c_rt_lib0delete(hash0delete(&___nl__im__71, ___nl__im__66));
#line 408
c_rt_lib0move(&___nl__string__72,___get_global_string_const(58));
#line 408
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__72, ___nl__im__71));
#line 408
c_rt_lib0clear(&___nl__im__71);
#line 408
c_rt_lib0clear(&___nl__string__72);
#line 409
c_rt_lib0move(&___nl__im__73,___get_global_string_const(59));
#line 409
c_rt_lib0move(&___nl__im__73, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__73));
#line 409
c_rt_lib0delete(hash0delete(&___nl__im__73, ___nl__im__66));
#line 409
c_rt_lib0move(&___nl__string__74,___get_global_string_const(59));
#line 409
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__74, ___nl__im__73));
#line 409
c_rt_lib0clear(&___nl__im__73);
#line 409
c_rt_lib0clear(&___nl__string__74);
#line 410
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__66));
#line 411
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__66));
#line 412
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__66));
#line 413
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__66));
#line 414
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__12, ___nl__im__66));
#line 415
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 415
___nl__bool__75 = c_rt_lib0priv_is(___nl__im__76, ___get_global_string_const(65));
#line 415
c_rt_lib0clear(&___nl__im__76);
#line 415
___nl__bool__75 = !___nl__bool__75;
#line 415
if(___nl__bool__75){ goto label_204;}
#line 416
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__16, ___nl__im__66));
#line 417
goto label_204;
#line 417
label_204:
;
#line 417
//clear ___nl__bool__75;
#line 418
goto label_207;
#line 418
label_207:
;
#line 418
//clear ___nl__bool__70;
#line 419
c_rt_lib0move(&___nl__im__69, c_rt_lib0next_iter(___nl__im__69));
#line 419
goto label_169;
#line 419
label_211:
;
#line 420
c_rt_lib0copy(&___nl__im__15, ___nl__im__53);
#line 421
___nl__int__78 = hash0size(___nl__im__5);
#line 421
___nl__int__79 = 0;
#line 421
___nl__bool__77 = ___nl__int__78 == ___nl__int__79;
#line 421
//clear ___nl__int__78;
#line 421
//clear ___nl__int__79;
#line 421
___nl__bool__77 = !___nl__bool__77;
#line 421
if(___nl__bool__77){ goto label_238;}
#line 422
___nl__int__80 = 1;
#line 422
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 422
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__81));
#line 422
//clear ___nl__int__80;
#line 422
c_rt_lib0clear(&___nl__im__81);
#line 423
c_rt_lib0clear(&___nl__im__53);
#line 423
c_rt_lib0clear(&___nl__im__54);
#line 423
//clear ___nl__bool__55;
#line 423
c_rt_lib0clear(&___nl__im__56);
#line 423
c_rt_lib0clear(&___nl__im__57);
#line 423
c_rt_lib0clear(&___nl__im__58);
#line 423
c_rt_lib0clear(&___nl__im__66);
#line 423
//clear ___nl__bool__67;
#line 423
c_rt_lib0clear(&___nl__im__68);
#line 423
c_rt_lib0clear(&___nl__im__69);
#line 423
//clear ___nl__bool__77;
#line 423
goto label_101;
#line 424
goto label_238;
#line 424
label_238:
;
#line 424
//clear ___nl__bool__77;
#line 425
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(0));
#line 426
c_rt_lib0move(&___nl__im__86, c_rt_lib0init_iter(___nl__im__5));
#line 426
label_242:
;
#line 426
___nl__bool__84 = c_rt_lib0is_end_hash(___nl__im__86);
#line 426
if(___nl__bool__84){ goto label_278;}
#line 426
c_rt_lib0move(&___nl__im__83, c_rt_lib0get_key_iter(___nl__im__86));
#line 426
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__83));
#line 427
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(78)));
#line 427
c_rt_lib0move(&___nl__im__87, compiler_priv0parse_module(___nl__im__83, ___nl__im__88, &___nl__im__6));
#line 427
c_rt_lib0clear(&___nl__im__88);
#line 427
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(83));
#line 427
if(___nl__bool__89){ goto label_257;}
#line 430
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(82));
#line 430
if(___nl__bool__89){ goto label_263;}
#line 430
c_rt_lib0move(&___nl__im__90,___get_global_string_const(15));
#line 430
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__90, ___nl__im__87));
#line 430
nl_die_arg(___nl__im__90);
#line 427
label_257:
;
#line 427
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(83)));
#line 427
c_rt_lib0copy(&___nl__im__91, ___nl__im__92);
#line 428
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__83, ___nl__im__91));
#line 429
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__83, ___nl__im__91));
#line 430
goto label_268;
#line 430
label_263:
;
#line 430
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(82)));
#line 430
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 431
c_rt_lib0delete(hash0set_value(&___nl__im__82, ___nl__im__83, ___nl__im__85));
#line 432
goto label_268;
#line 432
label_268:
;
#line 432
c_rt_lib0clear(&___nl__im__87);
#line 432
//clear ___nl__bool__89;
#line 432
c_rt_lib0clear(&___nl__im__90);
#line 432
c_rt_lib0clear(&___nl__im__91);
#line 432
c_rt_lib0clear(&___nl__im__92);
#line 432
c_rt_lib0clear(&___nl__im__93);
#line 432
c_rt_lib0clear(&___nl__im__94);
#line 433
c_rt_lib0move(&___nl__im__86, c_rt_lib0next_iter(___nl__im__86));
#line 433
goto label_242;
#line 433
label_278:
;
#line 434
c_rt_lib0copy(&___nl__im__5, ___nl__im__82);
#line 435
___nl__int__96 = hash0size(___nl__im__5);
#line 435
___nl__int__97 = 0;
#line 435
___nl__bool__95 = ___nl__int__96 > ___nl__int__97;
#line 435
//clear ___nl__int__96;
#line 435
//clear ___nl__int__97;
#line 435
___nl__bool__95 = !___nl__bool__95;
#line 435
if(___nl__bool__95){ goto label_333;}
#line 436
compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__53);
#line 437
c_rt_lib0move(&___nl__im__101, string0lf());
#line 437
c_rt_lib0move(&___nl__im__102,___get_global_string_const(146));
#line 437
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__102));
#line 437
c_rt_lib0clear(&___nl__im__101);
#line 437
c_rt_lib0clear(&___nl__im__102);
#line 437
___nl__int__103 = hash0size(___nl__im__5);
#line 437
c_rt_lib0move(&___nl__string__104, c_rt_lib0int_to_string(___nl__int__103));
#line 437
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__string__104));
#line 437
c_rt_lib0clear(&___nl__im__100);
#line 437
//clear ___nl__int__103;
#line 437
c_rt_lib0clear(&___nl__string__104);
#line 437
c_rt_lib0move(&___nl__im__105,___get_global_string_const(147));
#line 437
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__105));
#line 437
c_rt_lib0clear(&___nl__im__99);
#line 437
c_rt_lib0clear(&___nl__im__105);
#line 437
c_rt_lib0delete(c_fe_lib0print(___nl__im__98));
#line 437
c_rt_lib0clear(&___nl__im__98);
#line 438
c_rt_lib0move(&___nl__im__106,___get_global_string_const(148));
#line 438
c_rt_lib0delete(c_fe_lib0print(___nl__im__106));
#line 438
c_rt_lib0clear(&___nl__im__106);
#line 439
c_rt_lib0clear(&___nl__im__53);
#line 439
c_rt_lib0clear(&___nl__im__54);
#line 439
//clear ___nl__bool__55;
#line 439
c_rt_lib0clear(&___nl__im__56);
#line 439
c_rt_lib0clear(&___nl__im__57);
#line 439
c_rt_lib0clear(&___nl__im__58);
#line 439
c_rt_lib0clear(&___nl__im__66);
#line 439
//clear ___nl__bool__67;
#line 439
c_rt_lib0clear(&___nl__im__68);
#line 439
c_rt_lib0clear(&___nl__im__69);
#line 439
c_rt_lib0clear(&___nl__im__82);
#line 439
c_rt_lib0clear(&___nl__im__83);
#line 439
//clear ___nl__bool__84;
#line 439
c_rt_lib0clear(&___nl__im__85);
#line 439
c_rt_lib0clear(&___nl__im__86);
#line 439
c_rt_lib0clear(&___nl__im__87);
#line 439
//clear ___nl__bool__89;
#line 439
c_rt_lib0clear(&___nl__im__90);
#line 439
c_rt_lib0clear(&___nl__im__91);
#line 439
c_rt_lib0clear(&___nl__im__92);
#line 439
c_rt_lib0clear(&___nl__im__93);
#line 439
c_rt_lib0clear(&___nl__im__94);
#line 439
//clear ___nl__bool__95;
#line 439
goto label_101;
#line 440
goto label_333;
#line 440
label_333:
;
#line 440
//clear ___nl__bool__95;
#line 441
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 441
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 441
___nl__bool__108 = c_rt_lib0check_true_native(___nl__im__109);
#line 441
c_rt_lib0clear(&___nl__im__109);
#line 441
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__6, ___nl__im__107, ___nl__bool__108));
#line 441
c_rt_lib0clear(&___nl__im__107);
#line 441
//clear ___nl__bool__108;
#line 442
c_rt_lib0move(&___nl__im__113, c_rt_lib0init_iter(___nl__im__2));
#line 442
label_343:
;
#line 442
___nl__bool__111 = c_rt_lib0is_end_hash(___nl__im__113);
#line 442
if(___nl__bool__111){ goto label_351;}
#line 442
c_rt_lib0move(&___nl__im__110, c_rt_lib0get_key_iter(___nl__im__113));
#line 442
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__110));
#line 443
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__110, ___nl__im__112));
#line 444
c_rt_lib0move(&___nl__im__113, c_rt_lib0next_iter(___nl__im__113));
#line 444
goto label_343;
#line 444
label_351:
;
#line 445
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_mk(0));
#line 446
c_rt_lib0move(&___nl__im__118, c_rt_lib0init_iter(___nl__im__4));
#line 446
label_354:
;
#line 446
___nl__bool__116 = c_rt_lib0is_end_hash(___nl__im__118);
#line 446
if(___nl__bool__116){ goto label_420;}
#line 446
c_rt_lib0move(&___nl__im__115, c_rt_lib0get_key_iter(___nl__im__118));
#line 446
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__115));
#line 447
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__115));
#line 447
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__115, ___nl__im__119));
#line 447
c_rt_lib0clear(&___nl__im__119);
#line 448
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_mk(0));
#line 449
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__115));
#line 449
c_rt_lib0move(&___nl__im__121, compiler_priv0get_functions(___nl__im__122));
#line 449
c_rt_lib0clear(&___nl__im__122);
#line 450
___nl__bool__123 = hash0has_key(___nl__im__45, ___nl__im__115);
#line 450
___nl__bool__123 = !___nl__bool__123;
#line 450
if(___nl__bool__123){ goto label_371;}
#line 451
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value(___nl__im__45, ___nl__im__115));
#line 452
goto label_371;
#line 452
label_371:
;
#line 452
//clear ___nl__bool__123;
#line 453
c_rt_lib0move(&___nl__im__127, c_rt_lib0init_iter(___nl__im__120));
#line 453
label_374:
;
#line 453
___nl__bool__125 = c_rt_lib0is_end_hash(___nl__im__127);
#line 453
if(___nl__bool__125){ goto label_408;}
#line 453
c_rt_lib0move(&___nl__im__124, c_rt_lib0get_key_iter(___nl__im__127));
#line 453
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value(___nl__im__120, ___nl__im__124));
#line 454
___nl__bool__128 = hash0has_key(___nl__im__121, ___nl__im__124);
#line 454
___nl__bool__129 = !___nl__bool__128;
#line 454
if(___nl__bool__129){ goto label_388;}
#line 454
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value(___nl__im__121, ___nl__im__124));
#line 454
c_rt_lib0move(&___nl__im__131, dfile0deep_eq(___nl__im__126, ___nl__im__130));
#line 454
___nl__bool__128 = c_rt_lib0check_true_native(___nl__im__131);
#line 454
c_rt_lib0clear(&___nl__im__130);
#line 454
c_rt_lib0clear(&___nl__im__131);
#line 454
___nl__bool__128 = !___nl__bool__128;
#line 454
label_388:
;
#line 454
//clear ___nl__bool__129;
#line 454
___nl__bool__128 = !___nl__bool__128;
#line 454
if(___nl__bool__128){ goto label_404;}
#line 455
___nl__int__132 = 1;
#line 455
c_rt_lib0move(&___nl__im__136,___get_global_string_const(34));
#line 455
c_rt_lib0move(&___nl__im__135, c_rt_lib0concat_new(___nl__im__115, ___nl__im__136));
#line 455
c_rt_lib0clear(&___nl__im__136);
#line 455
c_rt_lib0move(&___nl__im__134, c_rt_lib0concat_new(___nl__im__135, ___nl__im__124));
#line 455
c_rt_lib0clear(&___nl__im__135);
#line 455
c_rt_lib0move(&___nl__im__133, c_rt_lib0int_new(___nl__int__132));
#line 455
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__114, ___nl__im__134, ___nl__im__133));
#line 455
//clear ___nl__int__132;
#line 455
c_rt_lib0clear(&___nl__im__133);
#line 455
c_rt_lib0clear(&___nl__im__134);
#line 456
goto label_404;
#line 456
label_404:
;
#line 456
//clear ___nl__bool__128;
#line 457
c_rt_lib0move(&___nl__im__127, c_rt_lib0next_iter(___nl__im__127));
#line 457
goto label_374;
#line 457
label_408:
;
#line 458
c_rt_lib0copy(&___nl__im__137, ___nl__im__121);
#line 458
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__45, ___nl__im__115, ___nl__im__137));
#line 458
c_rt_lib0clear(&___nl__im__137);
#line 458
c_rt_lib0clear(&___nl__im__120);
#line 458
c_rt_lib0clear(&___nl__im__121);
#line 458
c_rt_lib0clear(&___nl__im__124);
#line 458
//clear ___nl__bool__125;
#line 458
c_rt_lib0clear(&___nl__im__126);
#line 458
c_rt_lib0clear(&___nl__im__127);
#line 459
c_rt_lib0move(&___nl__im__118, c_rt_lib0next_iter(___nl__im__118));
#line 459
goto label_354;
#line 459
label_420:
;
#line 460
___nl__int__139 = hash0size(___nl__im__114);
#line 460
___nl__int__140 = 0;
#line 460
___nl__bool__138 = ___nl__int__139 != ___nl__int__140;
#line 460
//clear ___nl__int__139;
#line 460
//clear ___nl__int__140;
#line 460
___nl__bool__138 = !___nl__bool__138;
#line 460
if(___nl__bool__138){ goto label_516;}
#line 461
c_rt_lib0move(&___nl__im__141, compiler_priv0get_files_to_parse(___nl__im__0));
#line 462
c_rt_lib0move(&___nl__im__145, c_rt_lib0init_iter(___nl__im__114));
#line 462
label_430:
;
#line 462
___nl__bool__143 = c_rt_lib0is_end_hash(___nl__im__145);
#line 462
if(___nl__bool__143){ goto label_464;}
#line 462
c_rt_lib0move(&___nl__im__142, c_rt_lib0get_key_iter(___nl__im__145));
#line 462
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value(___nl__im__114, ___nl__im__142));
#line 463
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value(___nl__im__46, ___nl__im__142));
#line 463
c_rt_lib0move(&___nl__im__150, c_rt_lib0init_iter(___nl__im__146));
#line 463
label_437:
;
#line 463
___nl__bool__148 = c_rt_lib0is_end_hash(___nl__im__150);
#line 463
if(___nl__bool__148){ goto label_455;}
#line 463
c_rt_lib0move(&___nl__im__147, c_rt_lib0get_key_iter(___nl__im__150));
#line 463
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value(___nl__im__146, ___nl__im__147));
#line 463
___nl__int__149 = getIntFromImm(___nl__im__151);
#line 464
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value(___nl__im__141, ___nl__im__147));
#line 464
c_rt_lib0copy(&___nl__im__153, ___nl__im__152);
#line 464
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__147, ___nl__im__153));
#line 464
c_rt_lib0clear(&___nl__im__152);
#line 464
c_rt_lib0clear(&___nl__im__153);
#line 465
c_rt_lib0move(&___nl__im__155,___get_global_string_const(149));
#line 465
c_rt_lib0move(&___nl__im__154, c_rt_lib0concat_new(___nl__im__155, ___nl__im__147));
#line 465
c_rt_lib0clear(&___nl__im__155);
#line 465
c_rt_lib0delete(c_fe_lib0print(___nl__im__154));
#line 465
c_rt_lib0clear(&___nl__im__154);
#line 466
c_rt_lib0move(&___nl__im__150, c_rt_lib0next_iter(___nl__im__150));
#line 466
goto label_437;
#line 466
label_455:
;
#line 466
c_rt_lib0clear(&___nl__im__146);
#line 466
c_rt_lib0clear(&___nl__im__147);
#line 466
//clear ___nl__bool__148;
#line 466
//clear ___nl__int__149;
#line 466
c_rt_lib0clear(&___nl__im__150);
#line 466
c_rt_lib0clear(&___nl__im__151);
#line 467
c_rt_lib0move(&___nl__im__145, c_rt_lib0next_iter(___nl__im__145));
#line 467
goto label_430;
#line 467
label_464:
;
#line 468
c_rt_lib0clear(&___nl__im__53);
#line 468
c_rt_lib0clear(&___nl__im__54);
#line 468
//clear ___nl__bool__55;
#line 468
c_rt_lib0clear(&___nl__im__56);
#line 468
c_rt_lib0clear(&___nl__im__57);
#line 468
c_rt_lib0clear(&___nl__im__58);
#line 468
c_rt_lib0clear(&___nl__im__66);
#line 468
//clear ___nl__bool__67;
#line 468
c_rt_lib0clear(&___nl__im__68);
#line 468
c_rt_lib0clear(&___nl__im__69);
#line 468
c_rt_lib0clear(&___nl__im__82);
#line 468
c_rt_lib0clear(&___nl__im__83);
#line 468
//clear ___nl__bool__84;
#line 468
c_rt_lib0clear(&___nl__im__85);
#line 468
c_rt_lib0clear(&___nl__im__86);
#line 468
c_rt_lib0clear(&___nl__im__87);
#line 468
//clear ___nl__bool__89;
#line 468
c_rt_lib0clear(&___nl__im__90);
#line 468
c_rt_lib0clear(&___nl__im__91);
#line 468
c_rt_lib0clear(&___nl__im__92);
#line 468
c_rt_lib0clear(&___nl__im__93);
#line 468
c_rt_lib0clear(&___nl__im__94);
#line 468
c_rt_lib0clear(&___nl__im__110);
#line 468
//clear ___nl__bool__111;
#line 468
c_rt_lib0clear(&___nl__im__112);
#line 468
c_rt_lib0clear(&___nl__im__113);
#line 468
c_rt_lib0clear(&___nl__im__114);
#line 468
c_rt_lib0clear(&___nl__im__115);
#line 468
//clear ___nl__bool__116;
#line 468
c_rt_lib0clear(&___nl__im__117);
#line 468
c_rt_lib0clear(&___nl__im__118);
#line 468
c_rt_lib0clear(&___nl__im__120);
#line 468
c_rt_lib0clear(&___nl__im__121);
#line 468
c_rt_lib0clear(&___nl__im__124);
#line 468
//clear ___nl__bool__125;
#line 468
c_rt_lib0clear(&___nl__im__126);
#line 468
c_rt_lib0clear(&___nl__im__127);
#line 468
//clear ___nl__bool__138;
#line 468
c_rt_lib0clear(&___nl__im__141);
#line 468
c_rt_lib0clear(&___nl__im__142);
#line 468
//clear ___nl__bool__143;
#line 468
c_rt_lib0clear(&___nl__im__144);
#line 468
c_rt_lib0clear(&___nl__im__145);
#line 468
c_rt_lib0clear(&___nl__im__146);
#line 468
c_rt_lib0clear(&___nl__im__147);
#line 468
//clear ___nl__bool__148;
#line 468
//clear ___nl__int__149;
#line 468
c_rt_lib0clear(&___nl__im__150);
#line 468
c_rt_lib0clear(&___nl__im__151);
#line 468
goto label_101;
#line 469
goto label_516;
#line 469
label_516:
;
#line 469
//clear ___nl__bool__138;
#line 469
c_rt_lib0clear(&___nl__im__141);
#line 469
c_rt_lib0clear(&___nl__im__142);
#line 469
//clear ___nl__bool__143;
#line 469
c_rt_lib0clear(&___nl__im__144);
#line 469
c_rt_lib0clear(&___nl__im__145);
#line 469
c_rt_lib0clear(&___nl__im__146);
#line 469
c_rt_lib0clear(&___nl__im__147);
#line 469
//clear ___nl__bool__148;
#line 469
//clear ___nl__int__149;
#line 469
c_rt_lib0clear(&___nl__im__150);
#line 469
c_rt_lib0clear(&___nl__im__151);
#line 470
___nl__int__157 = compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__53);
#line 470
___nl__int__158 = 0;
#line 470
___nl__bool__156 = ___nl__int__157 > ___nl__int__158;
#line 470
//clear ___nl__int__157;
#line 470
//clear ___nl__int__158;
#line 470
___nl__bool__156 = !___nl__bool__156;
#line 470
if(___nl__bool__156){ goto label_579;}
#line 471
c_rt_lib0move(&___nl__im__159,___get_global_string_const(148));
#line 471
c_rt_lib0delete(c_fe_lib0print(___nl__im__159));
#line 471
c_rt_lib0clear(&___nl__im__159);
#line 472
c_rt_lib0clear(&___nl__im__53);
#line 472
c_rt_lib0clear(&___nl__im__54);
#line 472
//clear ___nl__bool__55;
#line 472
c_rt_lib0clear(&___nl__im__56);
#line 472
c_rt_lib0clear(&___nl__im__57);
#line 472
c_rt_lib0clear(&___nl__im__58);
#line 472
c_rt_lib0clear(&___nl__im__66);
#line 472
//clear ___nl__bool__67;
#line 472
c_rt_lib0clear(&___nl__im__68);
#line 472
c_rt_lib0clear(&___nl__im__69);
#line 472
c_rt_lib0clear(&___nl__im__82);
#line 472
c_rt_lib0clear(&___nl__im__83);
#line 472
//clear ___nl__bool__84;
#line 472
c_rt_lib0clear(&___nl__im__85);
#line 472
c_rt_lib0clear(&___nl__im__86);
#line 472
c_rt_lib0clear(&___nl__im__87);
#line 472
//clear ___nl__bool__89;
#line 472
c_rt_lib0clear(&___nl__im__90);
#line 472
c_rt_lib0clear(&___nl__im__91);
#line 472
c_rt_lib0clear(&___nl__im__92);
#line 472
c_rt_lib0clear(&___nl__im__93);
#line 472
c_rt_lib0clear(&___nl__im__94);
#line 472
c_rt_lib0clear(&___nl__im__110);
#line 472
//clear ___nl__bool__111;
#line 472
c_rt_lib0clear(&___nl__im__112);
#line 472
c_rt_lib0clear(&___nl__im__113);
#line 472
c_rt_lib0clear(&___nl__im__114);
#line 472
c_rt_lib0clear(&___nl__im__115);
#line 472
//clear ___nl__bool__116;
#line 472
c_rt_lib0clear(&___nl__im__117);
#line 472
c_rt_lib0clear(&___nl__im__118);
#line 472
c_rt_lib0clear(&___nl__im__120);
#line 472
c_rt_lib0clear(&___nl__im__121);
#line 472
c_rt_lib0clear(&___nl__im__124);
#line 472
//clear ___nl__bool__125;
#line 472
c_rt_lib0clear(&___nl__im__126);
#line 472
c_rt_lib0clear(&___nl__im__127);
#line 472
//clear ___nl__bool__156;
#line 472
goto label_101;
#line 473
goto label_579;
#line 473
label_579:
;
#line 473
//clear ___nl__bool__156;
#line 474
c_rt_lib0move(&___nl__im__163, c_rt_lib0init_iter(___nl__im__4));
#line 474
label_582:
;
#line 474
___nl__bool__161 = c_rt_lib0is_end_hash(___nl__im__163);
#line 474
if(___nl__bool__161){ goto label_592;}
#line 474
c_rt_lib0move(&___nl__im__160, c_rt_lib0get_key_iter(___nl__im__163));
#line 474
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__160));
#line 475
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__160));
#line 475
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__160, ___nl__im__164));
#line 475
c_rt_lib0clear(&___nl__im__164);
#line 476
c_rt_lib0move(&___nl__im__163, c_rt_lib0next_iter(___nl__im__163));
#line 476
goto label_582;
#line 476
label_592:
;
#line 477
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 477
___nl__bool__165 = c_rt_lib0priv_is(___nl__im__166, ___get_global_string_const(68));
#line 477
c_rt_lib0clear(&___nl__im__166);
#line 477
if(___nl__bool__165){ goto label_600;}
#line 477
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 477
___nl__bool__165 = c_rt_lib0priv_is(___nl__im__167, ___get_global_string_const(67));
#line 477
c_rt_lib0clear(&___nl__im__167);
#line 477
label_600:
;
#line 477
___nl__bool__165 = !___nl__bool__165;
#line 477
___nl__bool__165 = !___nl__bool__165;
#line 477
if(___nl__bool__165){ goto label_645;}
#line 478
c_rt_lib0move(&___nl__im__168,___get_global_string_const(150));
#line 478
c_rt_lib0delete(c_fe_lib0print(___nl__im__168));
#line 478
c_rt_lib0clear(&___nl__im__168);
#line 479
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_mk(0));
#line 480
c_rt_lib0move(&___nl__im__170, compiler_priv0translate(___nl__im__4, ___nl__im__3, &___nl__im__12));
#line 481
c_rt_lib0delete(compiler_priv0add_to_called_from(&___nl__im__46, ___nl__im__170));
#line 482
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 483
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 483
c_rt_lib0move(&___nl__im__171, compiler_priv0generate_modules_to_files(___nl__im__170, ___nl__im__53, ___nl__im__172, &___nl__rec__16, ___nl__im__173));
#line 483
c_rt_lib0clear(&___nl__im__172);
#line 483
c_rt_lib0clear(&___nl__im__173);
#line 483
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__171, ___get_global_string_const(82));
#line 483
if(___nl__bool__174){ goto label_622;}
#line 487
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__171, ___get_global_string_const(83));
#line 487
if(___nl__bool__174){ goto label_638;}
#line 487
c_rt_lib0move(&___nl__im__175,___get_global_string_const(15));
#line 487
c_rt_lib0move(&___nl__im__175, c_rt_lib0array_mk(2, ___nl__im__175, ___nl__im__171));
#line 487
nl_die_arg(___nl__im__175);
#line 483
label_622:
;
#line 483
c_rt_lib0move(&___nl__im__177, c_rt_lib0priv_as(___nl__im__171, ___get_global_string_const(82)));
#line 483
c_rt_lib0copy(&___nl__im__176, ___nl__im__177);
#line 484
c_rt_lib0move(&___nl__im__181, c_rt_lib0init_iter(___nl__im__176));
#line 484
label_626:
;
#line 484
___nl__bool__179 = c_rt_lib0is_end_hash(___nl__im__181);
#line 484
if(___nl__bool__179){ goto label_636;}
#line 484
c_rt_lib0move(&___nl__im__178, c_rt_lib0get_key_iter(___nl__im__181));
#line 484
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value(___nl__im__176, ___nl__im__178));
#line 485
c_rt_lib0move(&___nl__im__182, hash0get_value(___nl__im__2, ___nl__im__178));
#line 485
c_rt_lib0delete(hash0set_value(&___nl__im__169, ___nl__im__178, ___nl__im__182));
#line 485
c_rt_lib0clear(&___nl__im__182);
#line 486
c_rt_lib0move(&___nl__im__181, c_rt_lib0next_iter(___nl__im__181));
#line 486
goto label_626;
#line 486
label_636:
;
#line 487
goto label_642;
#line 487
label_638:
;
#line 487
c_rt_lib0move(&___nl__im__184, c_rt_lib0priv_as(___nl__im__171, ___get_global_string_const(83)));
#line 487
c_rt_lib0copy(&___nl__im__183, ___nl__im__184);
#line 488
goto label_642;
#line 488
label_642:
;
#line 489
c_rt_lib0copy(&___nl__im__4, ___nl__im__169);
#line 490
goto label_697;
#line 490
label_645:
;
#line 491
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(&___nl__im__189, c_rt_lib0init_iter(___nl__im__4));
#line 492
label_648:
;
#line 492
___nl__bool__187 = c_rt_lib0is_end_hash(___nl__im__189);
#line 492
if(___nl__bool__187){ goto label_694;}
#line 492
c_rt_lib0move(&___nl__im__186, c_rt_lib0get_key_iter(___nl__im__189));
#line 492
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__186));
#line 493
c_rt_lib0move(&___nl__im__191,___get_global_string_const(151));
#line 493
c_rt_lib0move(&___nl__im__190, c_rt_lib0concat_new(___nl__im__191, ___nl__im__186));
#line 493
c_rt_lib0clear(&___nl__im__191);
#line 493
c_rt_lib0delete(c_fe_lib0print(___nl__im__190));
#line 493
c_rt_lib0clear(&___nl__im__190);
#line 494
c_rt_lib0move(&___nl__im__194, hash0get_value(___nl__im__53, ___nl__im__186));
#line 494
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__194, ___get_global_string_const(79)));
#line 494
c_rt_lib0clear(&___nl__im__194);
#line 494
c_rt_lib0move(&___nl__im__192, compiler_priv0save_module_to_file(___nl__im__188, ___nl__im__193));
#line 494
c_rt_lib0clear(&___nl__im__193);
#line 494
___nl__bool__195 = c_rt_lib0priv_is(___nl__im__192, ___get_global_string_const(82));
#line 494
if(___nl__bool__195){ goto label_670;}
#line 497
___nl__bool__195 = c_rt_lib0priv_is(___nl__im__192, ___get_global_string_const(83));
#line 497
if(___nl__bool__195){ goto label_680;}
#line 497
c_rt_lib0move(&___nl__im__196,___get_global_string_const(15));
#line 497
c_rt_lib0move(&___nl__im__196, c_rt_lib0array_mk(2, ___nl__im__196, ___nl__im__192));
#line 497
nl_die_arg(___nl__im__196);
#line 494
label_670:
;
#line 494
c_rt_lib0move(&___nl__im__198, c_rt_lib0priv_as(___nl__im__192, ___get_global_string_const(82)));
#line 494
c_rt_lib0copy(&___nl__im__197, ___nl__im__198);
#line 495
c_rt_lib0move(&___nl__im__200,___get_global_string_const(152));
#line 495
c_rt_lib0move(&___nl__im__199, c_rt_lib0concat_new(___nl__im__200, ___nl__im__197));
#line 495
c_rt_lib0clear(&___nl__im__200);
#line 495
c_rt_lib0delete(c_fe_lib0print(___nl__im__199));
#line 495
c_rt_lib0clear(&___nl__im__199);
#line 496
c_rt_lib0delete(hash0set_value(&___nl__im__185, ___nl__im__186, ___nl__im__188));
#line 497
goto label_684;
#line 497
label_680:
;
#line 497
c_rt_lib0move(&___nl__im__202, c_rt_lib0priv_as(___nl__im__192, ___get_global_string_const(83)));
#line 497
c_rt_lib0copy(&___nl__im__201, ___nl__im__202);
#line 498
goto label_684;
#line 498
label_684:
;
#line 498
c_rt_lib0clear(&___nl__im__192);
#line 498
//clear ___nl__bool__195;
#line 498
c_rt_lib0clear(&___nl__im__196);
#line 498
c_rt_lib0clear(&___nl__im__197);
#line 498
c_rt_lib0clear(&___nl__im__198);
#line 498
c_rt_lib0clear(&___nl__im__201);
#line 498
c_rt_lib0clear(&___nl__im__202);
#line 499
c_rt_lib0move(&___nl__im__189, c_rt_lib0next_iter(___nl__im__189));
#line 499
goto label_648;
#line 499
label_694:
;
#line 500
c_rt_lib0copy(&___nl__im__4, ___nl__im__185);
#line 501
goto label_697;
#line 501
label_697:
;
#line 501
//clear ___nl__bool__165;
#line 501
c_rt_lib0clear(&___nl__im__169);
#line 501
c_rt_lib0clear(&___nl__im__170);
#line 501
c_rt_lib0clear(&___nl__im__171);
#line 501
//clear ___nl__bool__174;
#line 501
c_rt_lib0clear(&___nl__im__175);
#line 501
c_rt_lib0clear(&___nl__im__176);
#line 501
c_rt_lib0clear(&___nl__im__177);
#line 501
c_rt_lib0clear(&___nl__im__178);
#line 501
//clear ___nl__bool__179;
#line 501
c_rt_lib0clear(&___nl__im__180);
#line 501
c_rt_lib0clear(&___nl__im__181);
#line 501
c_rt_lib0clear(&___nl__im__183);
#line 501
c_rt_lib0clear(&___nl__im__184);
#line 501
c_rt_lib0clear(&___nl__im__185);
#line 501
c_rt_lib0clear(&___nl__im__186);
#line 501
//clear ___nl__bool__187;
#line 501
c_rt_lib0clear(&___nl__im__188);
#line 501
c_rt_lib0clear(&___nl__im__189);
#line 501
c_rt_lib0clear(&___nl__im__192);
#line 501
//clear ___nl__bool__195;
#line 501
c_rt_lib0clear(&___nl__im__196);
#line 501
c_rt_lib0clear(&___nl__im__197);
#line 501
c_rt_lib0clear(&___nl__im__198);
#line 501
c_rt_lib0clear(&___nl__im__201);
#line 501
c_rt_lib0clear(&___nl__im__202);
#line 502
___nl__int__204 = hash0size(___nl__im__4);
#line 502
___nl__int__205 = 0;
#line 502
___nl__bool__203 = ___nl__int__204 > ___nl__int__205;
#line 502
//clear ___nl__int__204;
#line 502
//clear ___nl__int__205;
#line 502
___nl__bool__203 = !___nl__bool__203;
#line 502
if(___nl__bool__203){ goto label_752;}
#line 503
c_rt_lib0move(&___nl__im__208,___get_global_string_const(153));
#line 503
___nl__int__209 = hash0size(___nl__im__4);
#line 503
c_rt_lib0move(&___nl__string__210, c_rt_lib0int_to_string(___nl__int__209));
#line 503
c_rt_lib0move(&___nl__im__207, c_rt_lib0concat_new(___nl__im__208, ___nl__string__210));
#line 503
c_rt_lib0clear(&___nl__im__208);
#line 503
//clear ___nl__int__209;
#line 503
c_rt_lib0clear(&___nl__string__210);
#line 503
c_rt_lib0move(&___nl__im__211,___get_global_string_const(154));
#line 503
c_rt_lib0move(&___nl__im__206, c_rt_lib0concat_new(___nl__im__207, ___nl__im__211));
#line 503
c_rt_lib0clear(&___nl__im__207);
#line 503
c_rt_lib0clear(&___nl__im__211);
#line 504
c_rt_lib0move(&___nl__im__214, string0lf());
#line 504
c_rt_lib0move(&___nl__im__215,___get_global_string_const(152));
#line 504
c_rt_lib0move(&___nl__im__213, c_rt_lib0concat_new(___nl__im__214, ___nl__im__215));
#line 504
c_rt_lib0clear(&___nl__im__214);
#line 504
c_rt_lib0clear(&___nl__im__215);
#line 504
c_rt_lib0move(&___nl__im__212, c_rt_lib0concat_new(___nl__im__213, ___nl__im__206));
#line 504
c_rt_lib0clear(&___nl__im__213);
#line 504
c_rt_lib0delete(c_fe_lib0print(___nl__im__212));
#line 504
c_rt_lib0clear(&___nl__im__212);
#line 505
goto label_776;
#line 505
label_752:
;
#line 506
c_rt_lib0move(&___nl__im__217, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 506
___nl__bool__216 = c_rt_lib0priv_is(___nl__im__217, ___get_global_string_const(93));
#line 506
c_rt_lib0clear(&___nl__im__217);
#line 506
___nl__bool__216 = !___nl__bool__216;
#line 506
if(___nl__bool__216){ goto label_766;}
#line 507
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 507
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 507
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__220, ___get_global_string_const(93)));
#line 507
c_rt_lib0clear(&___nl__im__219);
#line 507
c_rt_lib0clear(&___nl__im__220);
#line 507
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__218));
#line 507
c_rt_lib0clear(&___nl__im__218);
#line 508
goto label_766;
#line 508
label_766:
;
#line 508
//clear ___nl__bool__216;
#line 509
c_rt_lib0move(&___nl__im__222, string0lf());
#line 509
c_rt_lib0move(&___nl__im__223,___get_global_string_const(155));
#line 509
c_rt_lib0move(&___nl__im__221, c_rt_lib0concat_new(___nl__im__222, ___nl__im__223));
#line 509
c_rt_lib0clear(&___nl__im__222);
#line 509
c_rt_lib0clear(&___nl__im__223);
#line 509
c_rt_lib0delete(c_fe_lib0print(___nl__im__221));
#line 509
c_rt_lib0clear(&___nl__im__221);
#line 510
goto label_776;
#line 510
label_776:
;
#line 510
//clear ___nl__bool__203;
#line 510
c_rt_lib0clear(&___nl__im__206);
#line 511
c_rt_lib0move(&___nl__im__224,___get_global_string_const(148));
#line 511
c_rt_lib0delete(c_fe_lib0print(___nl__im__224));
#line 511
c_rt_lib0clear(&___nl__im__224);
#line 511
c_rt_lib0clear(&___nl__im__53);
#line 511
c_rt_lib0clear(&___nl__im__54);
#line 511
//clear ___nl__bool__55;
#line 511
c_rt_lib0clear(&___nl__im__56);
#line 511
c_rt_lib0clear(&___nl__im__57);
#line 511
c_rt_lib0clear(&___nl__im__58);
#line 511
c_rt_lib0clear(&___nl__im__66);
#line 511
//clear ___nl__bool__67;
#line 511
c_rt_lib0clear(&___nl__im__68);
#line 511
c_rt_lib0clear(&___nl__im__69);
#line 511
c_rt_lib0clear(&___nl__im__82);
#line 511
c_rt_lib0clear(&___nl__im__83);
#line 511
//clear ___nl__bool__84;
#line 511
c_rt_lib0clear(&___nl__im__85);
#line 511
c_rt_lib0clear(&___nl__im__86);
#line 511
c_rt_lib0clear(&___nl__im__87);
#line 511
//clear ___nl__bool__89;
#line 511
c_rt_lib0clear(&___nl__im__90);
#line 511
c_rt_lib0clear(&___nl__im__91);
#line 511
c_rt_lib0clear(&___nl__im__92);
#line 511
c_rt_lib0clear(&___nl__im__93);
#line 511
c_rt_lib0clear(&___nl__im__94);
#line 511
c_rt_lib0clear(&___nl__im__110);
#line 511
//clear ___nl__bool__111;
#line 511
c_rt_lib0clear(&___nl__im__112);
#line 511
c_rt_lib0clear(&___nl__im__113);
#line 511
c_rt_lib0clear(&___nl__im__114);
#line 511
c_rt_lib0clear(&___nl__im__115);
#line 511
//clear ___nl__bool__116;
#line 511
c_rt_lib0clear(&___nl__im__117);
#line 511
c_rt_lib0clear(&___nl__im__118);
#line 511
c_rt_lib0clear(&___nl__im__120);
#line 511
c_rt_lib0clear(&___nl__im__121);
#line 511
c_rt_lib0clear(&___nl__im__124);
#line 511
//clear ___nl__bool__125;
#line 511
c_rt_lib0clear(&___nl__im__126);
#line 511
c_rt_lib0clear(&___nl__im__127);
#line 511
c_rt_lib0clear(&___nl__im__160);
#line 511
//clear ___nl__bool__161;
#line 511
c_rt_lib0clear(&___nl__im__162);
#line 511
c_rt_lib0clear(&___nl__im__163);
#line 390
goto label_101;
#line 390
c_rt_lib0clear(&___nl__im__0);
#line 390
c_rt_lib0clear(&___nl__im__1);
#line 390
c_rt_lib0clear(&___nl__im__2);
#line 390
c_rt_lib0clear(&___nl__im__3);
#line 390
c_rt_lib0clear(&___nl__im__4);
#line 390
c_rt_lib0clear(&___nl__im__5);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
c_rt_lib0clear(&___nl__im__12);
#line 390
c_rt_lib0clear(&___nl__im__15);
#line 390
generator_c0state_t0type0clean(___nl__rec__16);;
#line 390
c_rt_lib0clear(&___nl__im__45);
#line 390
c_rt_lib0clear(&___nl__im__46);
#line 390
c_rt_lib0clear(&___nl__im__53);
#line 390
c_rt_lib0clear(&___nl__im__54);
#line 390
//clear ___nl__bool__55;
#line 390
c_rt_lib0clear(&___nl__im__56);
#line 390
c_rt_lib0clear(&___nl__im__57);
#line 390
c_rt_lib0clear(&___nl__im__58);
#line 390
c_rt_lib0clear(&___nl__im__66);
#line 390
//clear ___nl__bool__67;
#line 390
c_rt_lib0clear(&___nl__im__68);
#line 390
c_rt_lib0clear(&___nl__im__69);
#line 390
c_rt_lib0clear(&___nl__im__82);
#line 390
c_rt_lib0clear(&___nl__im__83);
#line 390
//clear ___nl__bool__84;
#line 390
c_rt_lib0clear(&___nl__im__85);
#line 390
c_rt_lib0clear(&___nl__im__86);
#line 390
c_rt_lib0clear(&___nl__im__87);
#line 390
//clear ___nl__bool__89;
#line 390
c_rt_lib0clear(&___nl__im__90);
#line 390
c_rt_lib0clear(&___nl__im__91);
#line 390
c_rt_lib0clear(&___nl__im__92);
#line 390
c_rt_lib0clear(&___nl__im__93);
#line 390
c_rt_lib0clear(&___nl__im__94);
#line 390
c_rt_lib0clear(&___nl__im__110);
#line 390
//clear ___nl__bool__111;
#line 390
c_rt_lib0clear(&___nl__im__112);
#line 390
c_rt_lib0clear(&___nl__im__113);
#line 390
c_rt_lib0clear(&___nl__im__114);
#line 390
c_rt_lib0clear(&___nl__im__115);
#line 390
//clear ___nl__bool__116;
#line 390
c_rt_lib0clear(&___nl__im__117);
#line 390
c_rt_lib0clear(&___nl__im__118);
#line 390
c_rt_lib0clear(&___nl__im__120);
#line 390
c_rt_lib0clear(&___nl__im__121);
#line 390
c_rt_lib0clear(&___nl__im__124);
#line 390
//clear ___nl__bool__125;
#line 390
c_rt_lib0clear(&___nl__im__126);
#line 390
c_rt_lib0clear(&___nl__im__127);
#line 390
c_rt_lib0clear(&___nl__im__160);
#line 390
//clear ___nl__bool__161;
#line 390
c_rt_lib0clear(&___nl__im__162);
#line 390
c_rt_lib0clear(&___nl__im__163);
#line 390
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
generator_c0state_t0type ___nl__rec__46 = {
.own_to_im = (own_to_im_function*)generator_c0conv_to_im00state_t
};
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
#line 516
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 518
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 519
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 520
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 521
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 522
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 522
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__3, ___get_global_string_const(59), ___nl__im__4, ___get_global_string_const(60), ___nl__im__5, ___get_global_string_const(61), ___nl__im__6, ___get_global_string_const(62), ___nl__im__7));
#line 522
c_rt_lib0clear(&___nl__im__3);
#line 522
c_rt_lib0clear(&___nl__im__4);
#line 522
c_rt_lib0clear(&___nl__im__5);
#line 522
c_rt_lib0clear(&___nl__im__6);
#line 522
c_rt_lib0clear(&___nl__im__7);
#line 525
c_rt_lib0move(&___nl__im__8,___get_global_string_const(156));
#line 525
c_rt_lib0delete(profile0begin(___nl__im__8));
#line 525
c_rt_lib0clear(&___nl__im__8);
#line 526
___nl__int__9 = 0;
#line 527
c_rt_lib0move(&___nl__im__10, compiler_priv0get_files_to_parse(___nl__im__0));
#line 528
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__10));
#line 528
label_18:
;
#line 528
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 528
if(___nl__bool__12){ goto label_55;}
#line 528
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 528
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__10, ___nl__im__11));
#line 529
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(78)));
#line 529
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 529
c_rt_lib0clear(&___nl__im__16);
#line 529
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 529
if(___nl__bool__17){ goto label_33;}
#line 531
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(82));
#line 531
if(___nl__bool__17){ goto label_38;}
#line 531
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 531
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 531
nl_die_arg(___nl__im__18);
#line 529
label_33:
;
#line 529
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 529
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 530
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__11, ___nl__im__19));
#line 531
goto label_45;
#line 531
label_38:
;
#line 531
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(82)));
#line 531
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 532
___nl__int__23 = 1;
#line 532
___nl__int__9 = ___nl__int__9 + ___nl__int__23;
#line 532
//clear ___nl__int__23;
#line 533
goto label_45;
#line 533
label_45:
;
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
#line 534
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 534
goto label_18;
#line 534
label_55:
;
#line 535
c_rt_lib0move(&___nl__im__24,___get_global_string_const(156));
#line 535
c_rt_lib0delete(profile0end(___nl__im__24));
#line 535
c_rt_lib0clear(&___nl__im__24);
#line 536
___nl__int__26 = 0;
#line 536
___nl__bool__25 = ___nl__int__9 != ___nl__int__26;
#line 536
//clear ___nl__int__26;
#line 536
___nl__bool__25 = !___nl__bool__25;
#line 536
if(___nl__bool__25){ goto label_85;}
#line 537
compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 538
___nl__int__27 = 1;
#line 538
c_rt_lib0clear(&___nl__im__0);
#line 538
c_rt_lib0clear(&___nl__im__1);
#line 538
c_rt_lib0clear(&___nl__im__2);
#line 538
//clear ___nl__int__9;
#line 538
c_rt_lib0clear(&___nl__im__10);
#line 538
c_rt_lib0clear(&___nl__im__11);
#line 538
//clear ___nl__bool__12;
#line 538
c_rt_lib0clear(&___nl__im__13);
#line 538
c_rt_lib0clear(&___nl__im__14);
#line 538
c_rt_lib0clear(&___nl__im__15);
#line 538
//clear ___nl__bool__17;
#line 538
c_rt_lib0clear(&___nl__im__18);
#line 538
c_rt_lib0clear(&___nl__im__19);
#line 538
c_rt_lib0clear(&___nl__im__20);
#line 538
c_rt_lib0clear(&___nl__im__21);
#line 538
c_rt_lib0clear(&___nl__im__22);
#line 538
//clear ___nl__bool__25;
#line 538
return ___nl__int__27;
#line 539
goto label_85;
#line 539
label_85:
;
#line 539
//clear ___nl__bool__25;
#line 539
//clear ___nl__int__27;
#line 541
c_rt_lib0move(&___nl__im__28,___get_global_string_const(157));
#line 541
c_rt_lib0delete(profile0begin(___nl__im__28));
#line 541
c_rt_lib0clear(&___nl__im__28);
#line 542
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 542
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 542
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 542
c_rt_lib0clear(&___nl__im__31);
#line 542
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__29, ___nl__bool__30));
#line 542
c_rt_lib0clear(&___nl__im__29);
#line 542
//clear ___nl__bool__30;
#line 543
c_rt_lib0move(&___nl__im__32,___get_global_string_const(158));
#line 543
c_rt_lib0delete(profile0end(___nl__im__32));
#line 543
c_rt_lib0clear(&___nl__im__32);
#line 544
c_rt_lib0move(&___nl__im__34,___get_global_string_const(159));
#line 544
___nl__bool__33 = hash0has_key(___nl__im__1, ___nl__im__34);
#line 544
c_rt_lib0clear(&___nl__im__34);
#line 544
___nl__bool__33 = !___nl__bool__33;
#line 544
if(___nl__bool__33){ goto label_114;}
#line 545
c_rt_lib0move(&___nl__im__35,___get_global_string_const(160));
#line 545
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(159)));
#line 545
c_rt_lib0move(&___nl__im__36, dfile_dbg0ssave(___nl__im__37));
#line 545
c_rt_lib0clear(&___nl__im__37);
#line 545
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__35, ___nl__im__36));
#line 545
c_rt_lib0clear(&___nl__im__35);
#line 545
c_rt_lib0clear(&___nl__im__36);
#line 546
goto label_114;
#line 546
label_114:
;
#line 546
//clear ___nl__bool__33;
#line 547
___nl__int__39 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 547
___nl__int__40 = 0;
#line 547
___nl__bool__38 = ___nl__int__39 > ___nl__int__40;
#line 547
//clear ___nl__int__39;
#line 547
//clear ___nl__int__40;
#line 547
___nl__bool__38 = !___nl__bool__38;
#line 547
if(___nl__bool__38){ goto label_143;}
#line 548
___nl__int__41 = 1;
#line 548
c_rt_lib0clear(&___nl__im__0);
#line 548
c_rt_lib0clear(&___nl__im__1);
#line 548
c_rt_lib0clear(&___nl__im__2);
#line 548
//clear ___nl__int__9;
#line 548
c_rt_lib0clear(&___nl__im__10);
#line 548
c_rt_lib0clear(&___nl__im__11);
#line 548
//clear ___nl__bool__12;
#line 548
c_rt_lib0clear(&___nl__im__13);
#line 548
c_rt_lib0clear(&___nl__im__14);
#line 548
c_rt_lib0clear(&___nl__im__15);
#line 548
//clear ___nl__bool__17;
#line 548
c_rt_lib0clear(&___nl__im__18);
#line 548
c_rt_lib0clear(&___nl__im__19);
#line 548
c_rt_lib0clear(&___nl__im__20);
#line 548
c_rt_lib0clear(&___nl__im__21);
#line 548
c_rt_lib0clear(&___nl__im__22);
#line 548
//clear ___nl__bool__38;
#line 548
return ___nl__int__41;
#line 549
goto label_143;
#line 549
label_143:
;
#line 549
//clear ___nl__bool__38;
#line 549
//clear ___nl__int__41;
#line 550
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 550
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(68));
#line 550
c_rt_lib0clear(&___nl__im__43);
#line 550
if(___nl__bool__42){ goto label_153;}
#line 550
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 550
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(67));
#line 550
c_rt_lib0clear(&___nl__im__44);
#line 550
label_153:
;
#line 550
___nl__bool__42 = !___nl__bool__42;
#line 550
___nl__bool__42 = !___nl__bool__42;
#line 550
if(___nl__bool__42){ goto label_282;}
#line 551
c_rt_lib0move(&___nl__im__45,___get_global_string_const(161));
#line 551
c_rt_lib0delete(profile0begin(___nl__im__45));
#line 551
c_rt_lib0clear(&___nl__im__45);
#line 552
;
#line 552
___nl__im_ptr__47 = &(___nl__rec__46.global_int_const0field);
#line 553
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 553
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 553
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 553
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 553
c_rt_lib0move(___nl__im_ptr__47, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__48, ___get_global_string_const(142), ___nl__im__49, ___get_global_string_const(143), ___nl__im__50, ___get_global_string_const(144), ___nl__im__51));
#line 553
c_rt_lib0clear(&___nl__im__48);
#line 553
c_rt_lib0clear(&___nl__im__49);
#line 553
c_rt_lib0clear(&___nl__im__50);
#line 553
c_rt_lib0clear(&___nl__im__51);
#line 553
___nl__im_ptr__47 = NULL;
#line 553
___nl__im_ptr__52 = &(___nl__rec__46.global_string_const0field);
#line 554
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 554
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 554
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(0));
#line 554
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 554
c_rt_lib0move(___nl__im_ptr__52, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__53, ___get_global_string_const(142), ___nl__im__54, ___get_global_string_const(143), ___nl__im__55, ___get_global_string_const(144), ___nl__im__56));
#line 554
c_rt_lib0clear(&___nl__im__53);
#line 554
c_rt_lib0clear(&___nl__im__54);
#line 554
c_rt_lib0clear(&___nl__im__55);
#line 554
c_rt_lib0clear(&___nl__im__56);
#line 554
___nl__im_ptr__52 = NULL;
#line 554
___nl__im_ptr__57 = &(___nl__rec__46.ret0field);
#line 555
c_rt_lib0move(___nl__im_ptr__57,___get_global_string_const(36));
#line 555
___nl__im_ptr__57 = NULL;
#line 555
___nl__im_ptr__58 = &(___nl__rec__46.header0field);
#line 556
c_rt_lib0move(___nl__im_ptr__58,___get_global_string_const(36));
#line 556
___nl__im_ptr__58 = NULL;
#line 556
___nl__im_ptr__59 = &(___nl__rec__46.fun_args0field);
#line 557
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0array_mk(0));
#line 557
___nl__im_ptr__59 = NULL;
#line 557
___nl__im_ptr__60 = &(___nl__rec__46.ret_reg_type0field);
#line 558
c_rt_lib0move(___nl__im_ptr__60, c_rt_lib0ov_mk_none(___get_global_string_const(145)));
#line 558
___nl__im_ptr__60 = NULL;
#line 558
___nl__rec_ptr__61 = &(___nl__rec__46.const0field);
#line 559
;
#line 559
___nl__int_ptr__62 = &(___nl__rec_ptr__61->dynamic_nr0field);
#line 560
(*___nl__int_ptr__62) = 0;
#line 560
___nl__int_ptr__62 = NULL;
#line 560
___nl__rec_ptr__63 = &(___nl__rec_ptr__61->int0field);
#line 561
;
#line 561
___nl__arr_ptr__64 = &(___nl__rec_ptr__63->arr0field);
#line 561
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__64));
(*___nl__arr_ptr__64).size = 0;
(*___nl__arr_ptr__64).capacity = 0;
(*___nl__arr_ptr__64).value = NULL;
#line 561
___nl__arr_ptr__64 = NULL;
#line 561
___nl__im_ptr__65 = &(___nl__rec_ptr__63->hash0field);
#line 561
c_rt_lib0move(___nl__im_ptr__65, c_rt_lib0hash_mk(0));
#line 561
___nl__im_ptr__65 = NULL;
#line 561
___nl__rec_ptr__63 = NULL;
#line 561
___nl__rec_ptr__66 = &(___nl__rec_ptr__61->string0field);
#line 562
;
#line 562
___nl__arr_ptr__67 = &(___nl__rec_ptr__66->arr0field);
#line 562
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__67));
(*___nl__arr_ptr__67).size = 0;
(*___nl__arr_ptr__67).capacity = 0;
(*___nl__arr_ptr__67).value = NULL;
#line 562
___nl__arr_ptr__67 = NULL;
#line 562
___nl__im_ptr__68 = &(___nl__rec_ptr__66->hash0field);
#line 562
c_rt_lib0move(___nl__im_ptr__68, c_rt_lib0hash_mk(0));
#line 562
___nl__im_ptr__68 = NULL;
#line 562
___nl__rec_ptr__66 = NULL;
#line 562
___nl__rec_ptr__69 = &(___nl__rec_ptr__61->singleton0field);
#line 563
;
#line 563
___nl__arr_ptr__70 = &(___nl__rec_ptr__69->arr0field);
#line 563
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__70));
(*___nl__arr_ptr__70).size = 0;
(*___nl__arr_ptr__70).capacity = 0;
(*___nl__arr_ptr__70).value = NULL;
#line 563
___nl__arr_ptr__70 = NULL;
#line 563
___nl__im_ptr__71 = &(___nl__rec_ptr__69->hash0field);
#line 563
c_rt_lib0move(___nl__im_ptr__71, c_rt_lib0hash_mk(0));
#line 563
___nl__im_ptr__71 = NULL;
#line 563
___nl__rec_ptr__69 = NULL;
#line 563
___nl__rec_ptr__61 = NULL;
#line 563
___nl__im_ptr__72 = &(___nl__rec__46.mod_name0field);
#line 565
c_rt_lib0move(___nl__im_ptr__72,___get_global_string_const(36));
#line 565
___nl__im_ptr__72 = NULL;
#line 565
___nl__hash_ptr__73 = &(___nl__rec__46.additional_imports0field);
#line 566
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__73));
(*___nl__hash_ptr__73).size = 0;
(*___nl__hash_ptr__73).capacity = 0;
(*___nl__hash_ptr__73).keys = NULL;
(*___nl__hash_ptr__73).values = NULL;
#line 566
___nl__hash_ptr__73 = NULL;
#line 566
___nl__im_ptr__74 = &(___nl__rec__46.defined_types0field);
#line 567
c_rt_lib0move(___nl__im_ptr__74, c_rt_lib0hash_mk(0));
#line 567
___nl__im_ptr__74 = NULL;
#line 569
c_rt_lib0move(&___nl__im__75,___get_global_string_const(150));
#line 569
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 569
c_rt_lib0clear(&___nl__im__75);
#line 570
c_rt_lib0move(&___nl__im__77, compiler_priv0get_mathematical_func(___nl__im__0));
#line 570
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 570
c_rt_lib0move(&___nl__im__76, post_processing0init(___nl__im__77, ___nl__im__78));
#line 570
c_rt_lib0clear(&___nl__im__77);
#line 570
c_rt_lib0clear(&___nl__im__78);
#line 571
c_rt_lib0move(&___nl__im__79,___get_global_string_const(161));
#line 571
c_rt_lib0delete(profile0end(___nl__im__79));
#line 571
c_rt_lib0clear(&___nl__im__79);
#line 573
c_rt_lib0move(&___nl__im__80,___get_global_string_const(162));
#line 573
c_rt_lib0delete(profile0begin(___nl__im__80));
#line 573
c_rt_lib0clear(&___nl__im__80);
#line 574
c_rt_lib0move(&___nl__im__81, compiler_priv0translate(___nl__im__1, ___nl__im__1, &___nl__im__76));
#line 575
c_rt_lib0move(&___nl__im__82,___get_global_string_const(162));
#line 575
c_rt_lib0delete(profile0end(___nl__im__82));
#line 575
c_rt_lib0clear(&___nl__im__82);
#line 577
c_rt_lib0move(&___nl__im__84,___get_global_string_const(159));
#line 577
___nl__bool__83 = hash0has_key(___nl__im__81, ___nl__im__84);
#line 577
c_rt_lib0clear(&___nl__im__84);
#line 577
___nl__bool__83 = !___nl__bool__83;
#line 577
if(___nl__bool__83){ goto label_268;}
#line 578
c_rt_lib0move(&___nl__im__85,___get_global_string_const(163));
#line 578
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(159)));
#line 578
c_rt_lib0move(&___nl__im__86, dfile_dbg0ssave(___nl__im__87));
#line 578
c_rt_lib0clear(&___nl__im__87);
#line 578
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__85, ___nl__im__86));
#line 578
c_rt_lib0clear(&___nl__im__85);
#line 578
c_rt_lib0clear(&___nl__im__86);
#line 579
goto label_268;
#line 579
label_268:
;
#line 579
//clear ___nl__bool__83;
#line 581
c_rt_lib0move(&___nl__im__88,___get_global_string_const(164));
#line 581
c_rt_lib0delete(profile0begin(___nl__im__88));
#line 581
c_rt_lib0clear(&___nl__im__88);
#line 582
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 582
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 582
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__81, ___nl__im__10, ___nl__im__89, &___nl__rec__46, ___nl__im__90));
#line 582
c_rt_lib0clear(&___nl__im__89);
#line 582
c_rt_lib0clear(&___nl__im__90);
#line 583
c_rt_lib0move(&___nl__im__91,___get_global_string_const(164));
#line 583
c_rt_lib0delete(profile0end(___nl__im__91));
#line 583
c_rt_lib0clear(&___nl__im__91);
#line 584
goto label_363;
#line 584
label_282:
;
#line 585
c_rt_lib0move(&___nl__im__95, c_rt_lib0init_iter(___nl__im__1));
#line 585
label_284:
;
#line 585
___nl__bool__93 = c_rt_lib0is_end_hash(___nl__im__95);
#line 585
if(___nl__bool__93){ goto label_361;}
#line 585
c_rt_lib0move(&___nl__im__92, c_rt_lib0get_key_iter(___nl__im__95));
#line 585
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__92));
#line 586
c_rt_lib0move(&___nl__im__97,___get_global_string_const(151));
#line 586
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__92));
#line 586
c_rt_lib0clear(&___nl__im__97);
#line 586
c_rt_lib0delete(c_fe_lib0print(___nl__im__96));
#line 586
c_rt_lib0clear(&___nl__im__96);
#line 587
c_rt_lib0move(&___nl__im__100, hash0get_value(___nl__im__10, ___nl__im__92));
#line 587
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(79)));
#line 587
c_rt_lib0clear(&___nl__im__100);
#line 587
c_rt_lib0move(&___nl__im__98, compiler_priv0save_module_to_file(___nl__im__94, ___nl__im__99));
#line 587
c_rt_lib0clear(&___nl__im__99);
#line 587
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(82));
#line 587
if(___nl__bool__101){ goto label_306;}
#line 590
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 590
if(___nl__bool__101){ goto label_346;}
#line 590
c_rt_lib0move(&___nl__im__102,___get_global_string_const(15));
#line 590
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(2, ___nl__im__102, ___nl__im__98));
#line 590
nl_die_arg(___nl__im__102);
#line 587
label_306:
;
#line 587
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(82)));
#line 587
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 588
c_rt_lib0move(&___nl__im__106,___get_global_string_const(152));
#line 588
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__103));
#line 588
c_rt_lib0clear(&___nl__im__106);
#line 588
c_rt_lib0delete(c_fe_lib0print(___nl__im__105));
#line 588
c_rt_lib0clear(&___nl__im__105);
#line 589
___nl__int__107 = 1;
#line 589
c_rt_lib0clear(&___nl__im__0);
#line 589
c_rt_lib0clear(&___nl__im__1);
#line 589
c_rt_lib0clear(&___nl__im__2);
#line 589
//clear ___nl__int__9;
#line 589
c_rt_lib0clear(&___nl__im__10);
#line 589
c_rt_lib0clear(&___nl__im__11);
#line 589
//clear ___nl__bool__12;
#line 589
c_rt_lib0clear(&___nl__im__13);
#line 589
c_rt_lib0clear(&___nl__im__14);
#line 589
c_rt_lib0clear(&___nl__im__15);
#line 589
//clear ___nl__bool__17;
#line 589
c_rt_lib0clear(&___nl__im__18);
#line 589
c_rt_lib0clear(&___nl__im__19);
#line 589
c_rt_lib0clear(&___nl__im__20);
#line 589
c_rt_lib0clear(&___nl__im__21);
#line 589
c_rt_lib0clear(&___nl__im__22);
#line 589
//clear ___nl__bool__42;
#line 589
generator_c0state_t0type0clean(___nl__rec__46);;
#line 589
c_rt_lib0clear(&___nl__im__76);
#line 589
c_rt_lib0clear(&___nl__im__81);
#line 589
c_rt_lib0clear(&___nl__im__92);
#line 589
//clear ___nl__bool__93;
#line 589
c_rt_lib0clear(&___nl__im__94);
#line 589
c_rt_lib0clear(&___nl__im__95);
#line 589
c_rt_lib0clear(&___nl__im__98);
#line 589
//clear ___nl__bool__101;
#line 589
c_rt_lib0clear(&___nl__im__102);
#line 589
c_rt_lib0clear(&___nl__im__103);
#line 589
c_rt_lib0clear(&___nl__im__104);
#line 589
return ___nl__int__107;
#line 590
goto label_350;
#line 590
label_346:
;
#line 590
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(83)));
#line 590
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 591
goto label_350;
#line 591
label_350:
;
#line 591
c_rt_lib0clear(&___nl__im__98);
#line 591
//clear ___nl__bool__101;
#line 591
c_rt_lib0clear(&___nl__im__102);
#line 591
c_rt_lib0clear(&___nl__im__103);
#line 591
c_rt_lib0clear(&___nl__im__104);
#line 591
//clear ___nl__int__107;
#line 591
c_rt_lib0clear(&___nl__im__108);
#line 591
c_rt_lib0clear(&___nl__im__109);
#line 592
c_rt_lib0move(&___nl__im__95, c_rt_lib0next_iter(___nl__im__95));
#line 592
goto label_284;
#line 592
label_361:
;
#line 593
goto label_363;
#line 593
label_363:
;
#line 593
//clear ___nl__bool__42;
#line 593
generator_c0state_t0type0clean(___nl__rec__46);;
#line 593
c_rt_lib0clear(&___nl__im__76);
#line 593
c_rt_lib0clear(&___nl__im__81);
#line 593
c_rt_lib0clear(&___nl__im__92);
#line 593
//clear ___nl__bool__93;
#line 593
c_rt_lib0clear(&___nl__im__94);
#line 593
c_rt_lib0clear(&___nl__im__95);
#line 593
c_rt_lib0clear(&___nl__im__98);
#line 593
//clear ___nl__bool__101;
#line 593
c_rt_lib0clear(&___nl__im__102);
#line 593
c_rt_lib0clear(&___nl__im__103);
#line 593
c_rt_lib0clear(&___nl__im__104);
#line 593
//clear ___nl__int__107;
#line 593
c_rt_lib0clear(&___nl__im__108);
#line 593
c_rt_lib0clear(&___nl__im__109);
#line 594
___nl__int__110 = 0;
#line 594
c_rt_lib0clear(&___nl__im__0);
#line 594
c_rt_lib0clear(&___nl__im__1);
#line 594
c_rt_lib0clear(&___nl__im__2);
#line 594
//clear ___nl__int__9;
#line 594
c_rt_lib0clear(&___nl__im__10);
#line 594
c_rt_lib0clear(&___nl__im__11);
#line 594
//clear ___nl__bool__12;
#line 594
c_rt_lib0clear(&___nl__im__13);
#line 594
c_rt_lib0clear(&___nl__im__14);
#line 594
c_rt_lib0clear(&___nl__im__15);
#line 594
//clear ___nl__bool__17;
#line 594
c_rt_lib0clear(&___nl__im__18);
#line 594
c_rt_lib0clear(&___nl__im__19);
#line 594
c_rt_lib0clear(&___nl__im__20);
#line 594
c_rt_lib0clear(&___nl__im__21);
#line 594
c_rt_lib0clear(&___nl__im__22);
#line 594
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
#line 598
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 602
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 602
___nl__int__4 = string0length(___nl__im__5);
#line 602
c_rt_lib0clear(&___nl__im__5);
#line 602
___nl__int__6 = 0;
#line 602
___nl__bool__3 = ___nl__int__4 == ___nl__int__6;
#line 602
//clear ___nl__int__4;
#line 602
//clear ___nl__int__6;
#line 602
___nl__bool__3 = !___nl__bool__3;
#line 602
___nl__bool__3 = !___nl__bool__3;
#line 602
if(___nl__bool__3){ goto label_32;}
#line 599
c_rt_lib0move(&___nl__im__8,___get_global_string_const(166));
#line 599
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 599
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 599
c_rt_lib0clear(&___nl__im__11);
#line 599
if(___nl__bool__10){ goto label_18;}
#line 601
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 601
goto label_24;
#line 601
label_18:
;
#line 600
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 600
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__1, ___nl__im__13));
#line 600
c_rt_lib0clear(&___nl__im__13);
#line 600
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(78)));
#line 600
c_rt_lib0clear(&___nl__im__12);
#line 600
label_24:
;
#line 600
//clear ___nl__bool__10;
#line 600
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 600
c_rt_lib0clear(&___nl__im__8);
#line 600
c_rt_lib0clear(&___nl__im__9);
#line 600
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__7));
#line 600
c_rt_lib0clear(&___nl__im__7);
#line 600
goto label_32;
#line 600
label_32:
;
#line 600
//clear ___nl__bool__3;
#line 603
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
#line 603
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 603
c_rt_lib0clear(&___nl__im__16);
#line 603
___nl__int__17 = 1;
#line 603
___nl__int__17 = -___nl__int__17;
#line 603
___nl__bool__14 = ___nl__int__15 == ___nl__int__17;
#line 603
//clear ___nl__int__15;
#line 603
//clear ___nl__int__17;
#line 603
___nl__bool__14 = !___nl__bool__14;
#line 603
___nl__bool__14 = !___nl__bool__14;
#line 603
if(___nl__bool__14){ goto label_57;}
#line 603
c_rt_lib0move(&___nl__im__19,___get_global_string_const(168));
#line 603
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
#line 603
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 603
c_rt_lib0clear(&___nl__im__21);
#line 603
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 603
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 603
c_rt_lib0clear(&___nl__im__19);
#line 603
//clear ___nl__int__20;
#line 603
c_rt_lib0clear(&___nl__string__22);
#line 603
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 603
c_rt_lib0clear(&___nl__im__18);
#line 603
goto label_57;
#line 603
label_57:
;
#line 603
//clear ___nl__bool__14;
#line 604
c_rt_lib0move(&___nl__im__25, string0lf());
#line 604
c_rt_lib0move(&___nl__im__26,___get_global_string_const(169));
#line 604
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 604
c_rt_lib0clear(&___nl__im__25);
#line 604
c_rt_lib0clear(&___nl__im__26);
#line 604
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(170)));
#line 604
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 604
c_rt_lib0clear(&___nl__im__24);
#line 604
c_rt_lib0clear(&___nl__im__27);
#line 604
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 604
c_rt_lib0clear(&___nl__im__23);
#line 605
c_rt_lib0clear(&___nl__im__0);
#line 605
c_rt_lib0clear(&___nl__im__1);
#line 605
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
#line 609
___nl__int__3 = 0;
#line 610
___nl__int__4 = 0;
#line 611
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 611
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 611
label_4:
;
#line 611
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 611
if(___nl__bool__7){ goto label_159;}
#line 611
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 611
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 612
c_rt_lib0move(&___nl__im__10,___get_global_string_const(171));
#line 613
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 613
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(96));
#line 613
c_rt_lib0clear(&___nl__im__12);
#line 613
___nl__bool__11 = !___nl__bool__11;
#line 613
if(___nl__bool__11){ goto label_17;}
#line 613
c_rt_lib0move(&___nl__im__10,___get_global_string_const(172));
#line 613
goto label_17;
#line 613
label_17:
;
#line 613
//clear ___nl__bool__11;
#line 614
___nl__int__14 = 0;
#line 614
___nl__int__15 = 1;
#line 614
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 614
label_22:
;
#line 614
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 614
if(___nl__bool__17){ goto label_35;}
#line 614
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 614
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 615
c_rt_lib0move(&___nl__im__20, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 615
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__10, ___nl__im__20));
#line 615
c_rt_lib0clear(&___nl__im__20);
#line 615
c_rt_lib0delete(c_fe_lib0print(___nl__im__19));
#line 615
c_rt_lib0clear(&___nl__im__19);
#line 615
c_rt_lib0clear(&___nl__im__13);
#line 616
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 616
goto label_22;
#line 616
label_35:
;
#line 617
___nl__int__21 = c_rt_lib0array_len(___nl__im__8);
#line 617
___nl__int__3 = ___nl__int__3 + ___nl__int__21;
#line 617
//clear ___nl__int__21;
#line 618
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 618
___nl__bool__22 = hash0has_key(___nl__im__23, ___nl__im__6);
#line 618
c_rt_lib0clear(&___nl__im__23);
#line 618
___nl__bool__22 = !___nl__bool__22;
#line 618
if(___nl__bool__22){ goto label_68;}
#line 619
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 619
c_rt_lib0move(&___nl__im__24, hash0get_value(___nl__im__25, ___nl__im__6));
#line 619
c_rt_lib0clear(&___nl__im__25);
#line 620
___nl__int__27 = 0;
#line 620
___nl__int__28 = 1;
#line 620
___nl__int__29 = c_rt_lib0array_len(___nl__im__24);
#line 620
label_50:
;
#line 620
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 620
if(___nl__bool__30){ goto label_63;}
#line 620
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__24, ___nl__int__27));
#line 620
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 621
c_rt_lib0move(&___nl__im__33, compiler_priv0construct_error_message(___nl__im__26, ___nl__im__2));
#line 621
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__10, ___nl__im__33));
#line 621
c_rt_lib0clear(&___nl__im__33);
#line 621
c_rt_lib0delete(c_fe_lib0print(___nl__im__32));
#line 621
c_rt_lib0clear(&___nl__im__32);
#line 621
c_rt_lib0clear(&___nl__im__26);
#line 622
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 622
goto label_50;
#line 622
label_63:
;
#line 623
___nl__int__34 = c_rt_lib0array_len(___nl__im__24);
#line 623
___nl__int__3 = ___nl__int__3 + ___nl__int__34;
#line 623
//clear ___nl__int__34;
#line 624
goto label_68;
#line 624
label_68:
;
#line 624
//clear ___nl__bool__22;
#line 624
c_rt_lib0clear(&___nl__im__24);
#line 624
c_rt_lib0clear(&___nl__im__26);
#line 624
//clear ___nl__int__27;
#line 624
//clear ___nl__int__28;
#line 624
//clear ___nl__int__29;
#line 624
//clear ___nl__bool__30;
#line 624
c_rt_lib0clear(&___nl__im__31);
#line 625
c_rt_lib0move(&___nl__im__10,___get_global_string_const(172));
#line 626
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(58)));
#line 626
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__36, ___nl__im__6));
#line 626
c_rt_lib0clear(&___nl__im__36);
#line 627
___nl__int__38 = 0;
#line 627
___nl__int__39 = 1;
#line 627
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 627
label_84:
;
#line 627
___nl__bool__41 = ___nl__int__38 >= ___nl__int__40;
#line 627
if(___nl__bool__41){ goto label_99;}
#line 627
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 627
c_rt_lib0copy(&___nl__im__37, ___nl__im__42);
#line 628
c_rt_lib0move(&___nl__im__44,___get_global_string_const(172));
#line 628
c_rt_lib0move(&___nl__im__45, compiler_priv0construct_error_message(___nl__im__37, ___nl__im__2));
#line 628
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__45));
#line 628
c_rt_lib0clear(&___nl__im__44);
#line 628
c_rt_lib0clear(&___nl__im__45);
#line 628
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 628
c_rt_lib0clear(&___nl__im__43);
#line 628
c_rt_lib0clear(&___nl__im__37);
#line 629
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 629
goto label_84;
#line 629
label_99:
;
#line 630
___nl__int__46 = c_rt_lib0array_len(___nl__im__35);
#line 630
___nl__int__4 = ___nl__int__4 + ___nl__int__46;
#line 630
//clear ___nl__int__46;
#line 631
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 631
___nl__bool__47 = hash0has_key(___nl__im__48, ___nl__im__6);
#line 631
c_rt_lib0clear(&___nl__im__48);
#line 631
___nl__bool__47 = !___nl__bool__47;
#line 631
if(___nl__bool__47){ goto label_134;}
#line 632
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 632
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__50, ___nl__im__6));
#line 632
c_rt_lib0clear(&___nl__im__50);
#line 633
___nl__int__52 = 0;
#line 633
___nl__int__53 = 1;
#line 633
___nl__int__54 = c_rt_lib0array_len(___nl__im__49);
#line 633
label_114:
;
#line 633
___nl__bool__55 = ___nl__int__52 >= ___nl__int__54;
#line 633
if(___nl__bool__55){ goto label_129;}
#line 633
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__49, ___nl__int__52));
#line 633
c_rt_lib0copy(&___nl__im__51, ___nl__im__56);
#line 634
c_rt_lib0move(&___nl__im__58,___get_global_string_const(172));
#line 634
c_rt_lib0move(&___nl__im__59, compiler_priv0construct_error_message(___nl__im__51, ___nl__im__2));
#line 634
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 634
c_rt_lib0clear(&___nl__im__58);
#line 634
c_rt_lib0clear(&___nl__im__59);
#line 634
c_rt_lib0delete(c_fe_lib0print(___nl__im__57));
#line 634
c_rt_lib0clear(&___nl__im__57);
#line 634
c_rt_lib0clear(&___nl__im__51);
#line 635
___nl__int__52 = ___nl__int__52 + ___nl__int__53;
#line 635
goto label_114;
#line 635
label_129:
;
#line 636
___nl__int__60 = c_rt_lib0array_len(___nl__im__49);
#line 636
___nl__int__4 = ___nl__int__4 + ___nl__int__60;
#line 636
//clear ___nl__int__60;
#line 637
goto label_134;
#line 637
label_134:
;
#line 637
//clear ___nl__bool__47;
#line 637
c_rt_lib0clear(&___nl__im__49);
#line 637
c_rt_lib0clear(&___nl__im__51);
#line 637
//clear ___nl__int__52;
#line 637
//clear ___nl__int__53;
#line 637
//clear ___nl__int__54;
#line 637
//clear ___nl__bool__55;
#line 637
c_rt_lib0clear(&___nl__im__56);
#line 637
c_rt_lib0clear(&___nl__im__10);
#line 637
c_rt_lib0clear(&___nl__im__13);
#line 637
//clear ___nl__int__14;
#line 637
//clear ___nl__int__15;
#line 637
//clear ___nl__int__16;
#line 637
//clear ___nl__bool__17;
#line 637
c_rt_lib0clear(&___nl__im__18);
#line 637
c_rt_lib0clear(&___nl__im__35);
#line 637
c_rt_lib0clear(&___nl__im__37);
#line 637
//clear ___nl__int__38;
#line 637
//clear ___nl__int__39;
#line 637
//clear ___nl__int__40;
#line 637
//clear ___nl__bool__41;
#line 637
c_rt_lib0clear(&___nl__im__42);
#line 638
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 638
goto label_4;
#line 638
label_159:
;
#line 639
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 639
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(173));
#line 639
if(___nl__bool__62){ goto label_168;}
#line 646
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(83));
#line 646
if(___nl__bool__62){ goto label_202;}
#line 646
c_rt_lib0move(&___nl__im__63,___get_global_string_const(15));
#line 646
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__61));
#line 646
nl_die_arg(___nl__im__63);
#line 639
label_168:
;
#line 639
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__61, ___get_global_string_const(173)));
#line 639
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 640
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 641
___nl__int__68 = 0;
#line 641
___nl__int__69 = 1;
#line 641
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 641
label_175:
;
#line 641
___nl__bool__71 = ___nl__int__68 >= ___nl__int__70;
#line 641
if(___nl__bool__71){ goto label_188;}
#line 641
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__68));
#line 641
c_rt_lib0copy(&___nl__im__67, ___nl__im__72);
#line 642
c_rt_lib0move(&___nl__im__74,___get_global_string_const(174));
#line 642
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__67, ___nl__im__74));
#line 642
c_rt_lib0clear(&___nl__im__74);
#line 642
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__73));
#line 642
c_rt_lib0clear(&___nl__im__73);
#line 642
c_rt_lib0clear(&___nl__im__67);
#line 643
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 643
goto label_175;
#line 643
label_188:
;
#line 644
c_rt_lib0move(&___nl__im__77,___get_global_string_const(175));
#line 644
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__66));
#line 644
c_rt_lib0clear(&___nl__im__77);
#line 644
c_rt_lib0move(&___nl__im__78,___get_global_string_const(176));
#line 644
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 644
c_rt_lib0clear(&___nl__im__76);
#line 644
c_rt_lib0clear(&___nl__im__78);
#line 644
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 644
c_rt_lib0clear(&___nl__im__75);
#line 645
___nl__int__79 = 1;
#line 645
___nl__int__4 = ___nl__int__4 + ___nl__int__79;
#line 645
//clear ___nl__int__79;
#line 646
goto label_204;
#line 646
label_202:
;
#line 647
goto label_204;
#line 647
label_204:
;
#line 648
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 648
___nl__bool__80 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(96));
#line 648
c_rt_lib0clear(&___nl__im__81);
#line 648
___nl__bool__80 = !___nl__bool__80;
#line 648
if(___nl__bool__80){ goto label_213;}
#line 649
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 650
___nl__int__3 = 0;
#line 651
goto label_213;
#line 651
label_213:
;
#line 651
//clear ___nl__bool__80;
#line 652
c_rt_lib0move(&___nl__im__85,___get_global_string_const(177));
#line 652
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__4));
#line 652
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 652
c_rt_lib0clear(&___nl__im__85);
#line 652
c_rt_lib0clear(&___nl__string__86);
#line 652
c_rt_lib0move(&___nl__im__87,___get_global_string_const(178));
#line 652
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 652
c_rt_lib0clear(&___nl__im__84);
#line 652
c_rt_lib0clear(&___nl__im__87);
#line 652
c_rt_lib0move(&___nl__string__88, c_rt_lib0int_to_string(___nl__int__3));
#line 652
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__string__88));
#line 652
c_rt_lib0clear(&___nl__im__83);
#line 652
c_rt_lib0clear(&___nl__string__88);
#line 652
c_rt_lib0delete(c_fe_lib0print(___nl__im__82));
#line 652
c_rt_lib0clear(&___nl__im__82);
#line 653
c_rt_lib0clear(&___nl__im__0);
#line 653
c_rt_lib0clear(&___nl__im__1);
#line 653
c_rt_lib0clear(&___nl__im__2);
#line 653
//clear ___nl__int__3;
#line 653
c_rt_lib0clear(&___nl__im__5);
#line 653
c_rt_lib0clear(&___nl__im__6);
#line 653
//clear ___nl__bool__7;
#line 653
c_rt_lib0clear(&___nl__im__8);
#line 653
c_rt_lib0clear(&___nl__im__9);
#line 653
c_rt_lib0clear(&___nl__im__10);
#line 653
c_rt_lib0clear(&___nl__im__13);
#line 653
//clear ___nl__int__14;
#line 653
//clear ___nl__int__15;
#line 653
//clear ___nl__int__16;
#line 653
//clear ___nl__bool__17;
#line 653
c_rt_lib0clear(&___nl__im__18);
#line 653
c_rt_lib0clear(&___nl__im__35);
#line 653
c_rt_lib0clear(&___nl__im__37);
#line 653
//clear ___nl__int__38;
#line 653
//clear ___nl__int__39;
#line 653
//clear ___nl__int__40;
#line 653
//clear ___nl__bool__41;
#line 653
c_rt_lib0clear(&___nl__im__42);
#line 653
c_rt_lib0clear(&___nl__im__61);
#line 653
//clear ___nl__bool__62;
#line 653
c_rt_lib0clear(&___nl__im__63);
#line 653
c_rt_lib0clear(&___nl__im__64);
#line 653
c_rt_lib0clear(&___nl__im__65);
#line 653
c_rt_lib0clear(&___nl__im__66);
#line 653
c_rt_lib0clear(&___nl__im__67);
#line 653
//clear ___nl__int__68;
#line 653
//clear ___nl__int__69;
#line 653
//clear ___nl__int__70;
#line 653
//clear ___nl__bool__71;
#line 653
c_rt_lib0clear(&___nl__im__72);
#line 653
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
#line 658
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 659
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 660
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__1));
#line 660
label_3:
;
#line 660
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 660
if(___nl__bool__6){ goto label_61;}
#line 660
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 660
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__5));
#line 661
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(179)));
#line 661
___nl__int__11 = 0;
#line 661
___nl__int__12 = 1;
#line 661
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 661
label_12:
;
#line 661
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 661
if(___nl__bool__14){ goto label_46;}
#line 661
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 661
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 662
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(180)));
#line 662
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(81));
#line 662
if(___nl__bool__17){ goto label_25;}
#line 663
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(80));
#line 663
if(___nl__bool__17){ goto label_27;}
#line 663
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 663
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__16));
#line 663
nl_die_arg(___nl__im__18);
#line 662
label_25:
;
#line 663
goto label_42;
#line 663
label_27:
;
#line 663
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(80)));
#line 663
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 664
c_rt_lib0move(&___nl__im__24,___get_global_string_const(34));
#line 664
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__5, ___nl__im__24));
#line 664
c_rt_lib0clear(&___nl__im__24);
#line 664
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(181)));
#line 664
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 664
c_rt_lib0clear(&___nl__im__23);
#line 664
c_rt_lib0clear(&___nl__im__25);
#line 664
c_rt_lib0copy(&___nl__im__21, ___nl__im__19);
#line 664
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__4, ___nl__im__22, ___nl__im__21));
#line 664
c_rt_lib0clear(&___nl__im__21);
#line 664
c_rt_lib0clear(&___nl__im__22);
#line 665
goto label_42;
#line 665
label_42:
;
#line 665
c_rt_lib0clear(&___nl__im__10);
#line 666
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 666
goto label_12;
#line 666
label_46:
;
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
c_rt_lib0clear(&___nl__im__10);
#line 666
//clear ___nl__int__11;
#line 666
//clear ___nl__int__12;
#line 666
//clear ___nl__int__13;
#line 666
//clear ___nl__bool__14;
#line 666
c_rt_lib0clear(&___nl__im__15);
#line 666
c_rt_lib0clear(&___nl__im__16);
#line 666
//clear ___nl__bool__17;
#line 666
c_rt_lib0clear(&___nl__im__18);
#line 666
c_rt_lib0clear(&___nl__im__19);
#line 666
c_rt_lib0clear(&___nl__im__20);
#line 667
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 667
goto label_3;
#line 667
label_61:
;
#line 668
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__0));
#line 668
label_63:
;
#line 668
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 668
if(___nl__bool__27){ goto label_73;}
#line 668
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 668
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__26));
#line 669
c_rt_lib0move(&___nl__im__30, translator0translate(___nl__im__28, ___nl__im__4));
#line 670
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__26, ___nl__im__30));
#line 670
c_rt_lib0clear(&___nl__im__30);
#line 671
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 671
goto label_63;
#line 671
label_73:
;
#line 672
c_rt_lib0delete(post_processing0find(___ref___im__2, &___nl__im__3));
#line 673
c_rt_lib0clear(&___nl__im__0);
#line 673
c_rt_lib0clear(&___nl__im__1);
#line 673
c_rt_lib0clear(&___nl__im__4);
#line 673
c_rt_lib0clear(&___nl__im__5);
#line 673
//clear ___nl__bool__6;
#line 673
c_rt_lib0clear(&___nl__im__7);
#line 673
c_rt_lib0clear(&___nl__im__8);
#line 673
c_rt_lib0clear(&___nl__im__9);
#line 673
c_rt_lib0clear(&___nl__im__10);
#line 673
//clear ___nl__int__11;
#line 673
//clear ___nl__int__12;
#line 673
//clear ___nl__int__13;
#line 673
//clear ___nl__bool__14;
#line 673
c_rt_lib0clear(&___nl__im__15);
#line 673
c_rt_lib0clear(&___nl__im__16);
#line 673
//clear ___nl__bool__17;
#line 673
c_rt_lib0clear(&___nl__im__18);
#line 673
c_rt_lib0clear(&___nl__im__19);
#line 673
c_rt_lib0clear(&___nl__im__20);
#line 673
c_rt_lib0clear(&___nl__im__26);
#line 673
//clear ___nl__bool__27;
#line 673
c_rt_lib0clear(&___nl__im__28);
#line 673
c_rt_lib0clear(&___nl__im__29);
#line 673
c_rt_lib0clear(&___nl__im__30);
#line 673
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
#line 678
c_rt_lib0move(&___nl__im__4,___get_global_string_const(182));
#line 678
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 678
c_rt_lib0clear(&___nl__im__4);
#line 679
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 680
___nl__bool__6 = ___nl__bool__3;
#line 680
___nl__bool__6 = !___nl__bool__6;
#line 680
if(___nl__bool__6){ goto label_52;}
#line 681
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 682
c_rt_lib0move(&___nl__im__9,___get_global_string_const(183));
#line 682
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 682
c_rt_lib0clear(&___nl__im__9);
#line 682
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 682
if(___nl__bool__10){ goto label_18;}
#line 685
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(82));
#line 685
if(___nl__bool__10){ goto label_28;}
#line 685
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 685
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 685
nl_die_arg(___nl__im__11);
#line 682
label_18:
;
#line 682
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 682
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 683
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 684
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 684
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 684
c_rt_lib0clear(&___nl__im__15);
#line 684
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 684
c_rt_lib0clear(&___nl__im__14);
#line 685
goto label_32;
#line 685
label_28:
;
#line 685
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(82)));
#line 685
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 686
goto label_32;
#line 686
label_32:
;
#line 687
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 688
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 689
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 689
label_36:
;
#line 689
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 689
if(___nl__bool__21){ goto label_49;}
#line 689
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 689
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 690
___nl__bool__24 = true;
#line 690
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 690
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 690
//clear ___nl__bool__24;
#line 690
c_rt_lib0clear(&___nl__im__25);
#line 691
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 692
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 692
goto label_36;
#line 692
label_49:
;
#line 694
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 695
goto label_52;
#line 695
label_52:
;
#line 695
//clear ___nl__bool__6;
#line 695
c_rt_lib0clear(&___nl__im__7);
#line 695
c_rt_lib0clear(&___nl__im__8);
#line 695
//clear ___nl__bool__10;
#line 695
c_rt_lib0clear(&___nl__im__11);
#line 695
c_rt_lib0clear(&___nl__im__12);
#line 695
c_rt_lib0clear(&___nl__im__13);
#line 695
c_rt_lib0clear(&___nl__im__16);
#line 695
c_rt_lib0clear(&___nl__im__17);
#line 695
c_rt_lib0clear(&___nl__im__18);
#line 695
c_rt_lib0clear(&___nl__im__19);
#line 695
c_rt_lib0clear(&___nl__im__20);
#line 695
//clear ___nl__bool__21;
#line 695
c_rt_lib0clear(&___nl__im__22);
#line 695
c_rt_lib0clear(&___nl__im__23);
#line 696
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 696
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 696
c_rt_lib0clear(&___nl__im__27);
#line 697
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 697
___nl__int__30 = 0;
#line 697
___nl__int__31 = 1;
#line 697
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 697
label_75:
;
#line 697
___nl__bool__33 = ___nl__int__30 >= ___nl__int__32;
#line 697
if(___nl__bool__33){ goto label_109;}
#line 697
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 697
c_rt_lib0copy(&___nl__im__29, ___nl__im__34);
#line 698
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 699
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 699
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(165)));
#line 699
___nl__bool__36 = hash0has_key(___nl__im__37, ___nl__im__38);
#line 699
c_rt_lib0clear(&___nl__im__37);
#line 699
c_rt_lib0clear(&___nl__im__38);
#line 699
___nl__bool__36 = !___nl__bool__36;
#line 699
if(___nl__bool__36){ goto label_94;}
#line 700
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 700
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(165)));
#line 700
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__39, ___nl__im__40));
#line 700
c_rt_lib0clear(&___nl__im__39);
#line 700
c_rt_lib0clear(&___nl__im__40);
#line 701
goto label_94;
#line 701
label_94:
;
#line 701
//clear ___nl__bool__36;
#line 702
c_rt_lib0delete(array0push(&___nl__im__35, ___nl__im__29));
#line 703
c_rt_lib0move(&___nl__im__41,___get_global_string_const(60));
#line 703
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 703
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(165)));
#line 703
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__42, ___nl__im__35));
#line 703
c_rt_lib0move(&___nl__string__43,___get_global_string_const(60));
#line 703
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 703
c_rt_lib0clear(&___nl__im__41);
#line 703
c_rt_lib0clear(&___nl__im__42);
#line 703
c_rt_lib0clear(&___nl__string__43);
#line 703
c_rt_lib0clear(&___nl__im__29);
#line 704
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 704
goto label_75;
#line 704
label_109:
;
#line 705
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(137)));
#line 705
___nl__int__46 = 0;
#line 705
___nl__int__47 = 1;
#line 705
___nl__int__48 = c_rt_lib0array_len(___nl__im__44);
#line 705
label_114:
;
#line 705
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 705
if(___nl__bool__49){ goto label_148;}
#line 705
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__44, ___nl__int__46));
#line 705
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 706
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 707
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 707
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(165)));
#line 707
___nl__bool__52 = hash0has_key(___nl__im__53, ___nl__im__54);
#line 707
c_rt_lib0clear(&___nl__im__53);
#line 707
c_rt_lib0clear(&___nl__im__54);
#line 707
___nl__bool__52 = !___nl__bool__52;
#line 707
if(___nl__bool__52){ goto label_133;}
#line 708
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 708
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(165)));
#line 708
c_rt_lib0move(&___nl__im__51, hash0get_value(___nl__im__55, ___nl__im__56));
#line 708
c_rt_lib0clear(&___nl__im__55);
#line 708
c_rt_lib0clear(&___nl__im__56);
#line 709
goto label_133;
#line 709
label_133:
;
#line 709
//clear ___nl__bool__52;
#line 710
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__45));
#line 711
c_rt_lib0move(&___nl__im__57,___get_global_string_const(61));
#line 711
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 711
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(165)));
#line 711
c_rt_lib0delete(hash0set_value(&___nl__im__57, ___nl__im__58, ___nl__im__51));
#line 711
c_rt_lib0move(&___nl__string__59,___get_global_string_const(61));
#line 711
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 711
c_rt_lib0clear(&___nl__im__57);
#line 711
c_rt_lib0clear(&___nl__im__58);
#line 711
c_rt_lib0clear(&___nl__string__59);
#line 711
c_rt_lib0clear(&___nl__im__45);
#line 712
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 712
goto label_114;
#line 712
label_148:
;
#line 713
___nl__int__61 = 0;
#line 713
___nl__bool__60 = ___nl__int__26 == ___nl__int__61;
#line 713
//clear ___nl__int__61;
#line 713
___nl__bool__60 = !___nl__bool__60;
#line 713
___nl__bool__60 = !___nl__bool__60;
#line 713
if(___nl__bool__60){ goto label_167;}
#line 713
c_rt_lib0move(&___nl__im__64,___get_global_string_const(184));
#line 713
c_rt_lib0move(&___nl__string__65, c_rt_lib0int_to_string(___nl__int__26));
#line 713
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__string__65));
#line 713
c_rt_lib0clear(&___nl__im__64);
#line 713
c_rt_lib0clear(&___nl__string__65);
#line 713
c_rt_lib0move(&___nl__im__66,___get_global_string_const(185));
#line 713
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__66));
#line 713
c_rt_lib0clear(&___nl__im__63);
#line 713
c_rt_lib0clear(&___nl__im__66);
#line 713
c_rt_lib0delete(c_fe_lib0print(___nl__im__62));
#line 713
c_rt_lib0clear(&___nl__im__62);
#line 713
goto label_167;
#line 713
label_167:
;
#line 713
//clear ___nl__bool__60;
#line 714
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(0));
#line 715
c_rt_lib0move(&___nl__im__71, c_rt_lib0init_iter((*___ref___im__0)));
#line 715
label_171:
;
#line 715
___nl__bool__69 = c_rt_lib0is_end_hash(___nl__im__71);
#line 715
if(___nl__bool__69){ goto label_204;}
#line 715
c_rt_lib0move(&___nl__im__68, c_rt_lib0get_key_iter(___nl__im__71));
#line 715
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__68));
#line 716
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(0));
#line 717
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(186)));
#line 717
___nl__int__75 = 0;
#line 717
___nl__int__76 = 1;
#line 717
___nl__int__77 = c_rt_lib0array_len(___nl__im__73);
#line 717
label_181:
;
#line 717
___nl__bool__78 = ___nl__int__75 >= ___nl__int__77;
#line 717
if(___nl__bool__78){ goto label_192;}
#line 717
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__73, ___nl__int__75));
#line 717
c_rt_lib0copy(&___nl__im__74, ___nl__im__79);
#line 718
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(181)));
#line 718
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__80));
#line 718
c_rt_lib0clear(&___nl__im__80);
#line 718
c_rt_lib0clear(&___nl__im__74);
#line 719
___nl__int__75 = ___nl__int__75 + ___nl__int__76;
#line 719
goto label_181;
#line 719
label_192:
;
#line 720
c_rt_lib0delete(hash0set_value(&___nl__im__67, ___nl__im__68, ___nl__im__72));
#line 720
c_rt_lib0clear(&___nl__im__72);
#line 720
c_rt_lib0clear(&___nl__im__73);
#line 720
c_rt_lib0clear(&___nl__im__74);
#line 720
//clear ___nl__int__75;
#line 720
//clear ___nl__int__76;
#line 720
//clear ___nl__int__77;
#line 720
//clear ___nl__bool__78;
#line 720
c_rt_lib0clear(&___nl__im__79);
#line 721
c_rt_lib0move(&___nl__im__71, c_rt_lib0next_iter(___nl__im__71));
#line 721
goto label_171;
#line 721
label_204:
;
#line 722
c_rt_lib0move(&___nl__im__81, module_checker0search_loops(___nl__im__67));
#line 722
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 722
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(62), ___nl__im__82);
#line 722
c_rt_lib0clear(&___nl__im__81);
#line 722
c_rt_lib0clear(&___nl__im__82);
#line 723
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(80));
#line 723
___nl__bool__83 = !___nl__bool__83;
#line 723
if(___nl__bool__83){ goto label_253;}
#line 724
c_rt_lib0move(&___nl__im__85,___get_global_string_const(187));
#line 724
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 724
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(188)));
#line 724
c_rt_lib0clear(&___nl__im__88);
#line 724
___nl__int__86 = c_rt_lib0array_len(___nl__im__87);
#line 724
c_rt_lib0clear(&___nl__im__87);
#line 724
c_rt_lib0move(&___nl__string__89, c_rt_lib0int_to_string(___nl__int__86));
#line 724
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__89));
#line 724
c_rt_lib0clear(&___nl__im__85);
#line 724
//clear ___nl__int__86;
#line 724
c_rt_lib0clear(&___nl__string__89);
#line 724
c_rt_lib0delete(c_fe_lib0print(___nl__im__84));
#line 724
c_rt_lib0clear(&___nl__im__84);
#line 725
c_rt_lib0move(&___nl__im__91,___get_global_string_const(189));
#line 725
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 725
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(190)));
#line 725
c_rt_lib0clear(&___nl__im__94);
#line 725
___nl__int__92 = c_rt_lib0array_len(___nl__im__93);
#line 725
c_rt_lib0clear(&___nl__im__93);
#line 725
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__92));
#line 725
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__string__95));
#line 725
c_rt_lib0clear(&___nl__im__91);
#line 725
//clear ___nl__int__92;
#line 725
c_rt_lib0clear(&___nl__string__95);
#line 725
c_rt_lib0delete(c_fe_lib0print(___nl__im__90));
#line 725
c_rt_lib0clear(&___nl__im__90);
#line 726
c_rt_lib0move(&___nl__im__96, reference_generator0generate((*___ref___im__0)));
#line 727
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(80)));
#line 727
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 727
c_rt_lib0move(&___nl__im__100, compiler_priv0serialize_deref(___nl__im__101, ___nl__im__96));
#line 727
c_rt_lib0clear(&___nl__im__101);
#line 727
c_rt_lib0move(&___nl__im__98, c_fe_lib0string_to_file(___nl__im__99, ___nl__im__100));
#line 727
c_rt_lib0clear(&___nl__im__99);
#line 727
c_rt_lib0clear(&___nl__im__100);
#line 727
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 727
if(___nl__bool__97){ goto label_251;}
#line 727
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(191), ___nl__im__98));
#line 727
nl_die_arg(___nl__im__98);
#line 727
label_251:
;
#line 728
goto label_253;
#line 728
label_253:
;
#line 728
//clear ___nl__bool__83;
#line 728
c_rt_lib0clear(&___nl__im__96);
#line 728
//clear ___nl__bool__97;
#line 728
c_rt_lib0clear(&___nl__im__98);
#line 728
c_rt_lib0clear(&___nl__im__2);
#line 728
//clear ___nl__bool__3;
#line 728
c_rt_lib0clear(&___nl__im__5);
#line 728
//clear ___nl__int__26;
#line 728
c_rt_lib0clear(&___nl__im__28);
#line 728
c_rt_lib0clear(&___nl__im__29);
#line 728
//clear ___nl__int__30;
#line 728
//clear ___nl__int__31;
#line 728
//clear ___nl__int__32;
#line 728
//clear ___nl__bool__33;
#line 728
c_rt_lib0clear(&___nl__im__34);
#line 728
c_rt_lib0clear(&___nl__im__35);
#line 728
c_rt_lib0clear(&___nl__im__44);
#line 728
c_rt_lib0clear(&___nl__im__45);
#line 728
//clear ___nl__int__46;
#line 728
//clear ___nl__int__47;
#line 728
//clear ___nl__int__48;
#line 728
//clear ___nl__bool__49;
#line 728
c_rt_lib0clear(&___nl__im__50);
#line 728
c_rt_lib0clear(&___nl__im__51);
#line 728
c_rt_lib0clear(&___nl__im__67);
#line 728
c_rt_lib0clear(&___nl__im__68);
#line 728
//clear ___nl__bool__69;
#line 728
c_rt_lib0clear(&___nl__im__70);
#line 728
c_rt_lib0clear(&___nl__im__71);
#line 728
c_rt_lib0clear(&___nl__im__72);
#line 728
c_rt_lib0clear(&___nl__im__73);
#line 728
c_rt_lib0clear(&___nl__im__74);
#line 728
//clear ___nl__int__75;
#line 728
//clear ___nl__int__76;
#line 728
//clear ___nl__int__77;
#line 728
//clear ___nl__bool__78;
#line 728
c_rt_lib0clear(&___nl__im__79);
#line 728
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
#line 732
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 733
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 733
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 733
c_rt_lib0clear(&___nl__im__3);
#line 734
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 735
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_string_const(192), ___get_global_string_const(193)));
#line 735
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 735
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 735
c_rt_lib0clear(&___nl__im__6);
#line 735
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 735
c_rt_lib0clear(&___nl__im__5);
#line 735
c_rt_lib0clear(&___nl__im__0);
#line 735
c_rt_lib0clear(&___nl__im__1);
#line 735
c_rt_lib0clear(&___nl__im__2);
#line 735
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
#line 740
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 741
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(190)));
#line 741
___nl__int__4 = 0;
#line 741
___nl__int__5 = 1;
#line 741
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 741
label_5:
;
#line 741
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 741
if(___nl__bool__7){ goto label_18;}
#line 741
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 741
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 742
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(188), ___nl__im__3));
#line 742
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__10));
#line 742
c_rt_lib0clear(&___nl__im__10);
#line 742
c_rt_lib0array_push(&___nl__im__1, ___nl__im__9);
#line 742
c_rt_lib0clear(&___nl__im__9);
#line 742
c_rt_lib0clear(&___nl__im__3);
#line 743
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 743
goto label_5;
#line 743
label_18:
;
#line 745
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(188)));
#line 745
___nl__int__13 = 0;
#line 745
___nl__int__14 = 1;
#line 745
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 745
label_23:
;
#line 745
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 745
if(___nl__bool__16){ goto label_36;}
#line 745
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 745
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 746
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(190), ___nl__im__12));
#line 746
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__19));
#line 746
c_rt_lib0clear(&___nl__im__19);
#line 746
c_rt_lib0array_push(&___nl__im__1, ___nl__im__18);
#line 746
c_rt_lib0clear(&___nl__im__18);
#line 746
c_rt_lib0clear(&___nl__im__12);
#line 747
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 747
goto label_23;
#line 747
label_36:
;
#line 748
c_rt_lib0clear(&___nl__im__0);
#line 748
c_rt_lib0clear(&___nl__im__2);
#line 748
c_rt_lib0clear(&___nl__im__3);
#line 748
//clear ___nl__int__4;
#line 748
//clear ___nl__int__5;
#line 748
//clear ___nl__int__6;
#line 748
//clear ___nl__bool__7;
#line 748
c_rt_lib0clear(&___nl__im__8);
#line 748
c_rt_lib0clear(&___nl__im__11);
#line 748
c_rt_lib0clear(&___nl__im__12);
#line 748
//clear ___nl__int__13;
#line 748
//clear ___nl__int__14;
#line 748
//clear ___nl__int__15;
#line 748
//clear ___nl__bool__16;
#line 748
c_rt_lib0clear(&___nl__im__17);
#line 748
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
#line 752
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 752
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(83));
#line 752
if(___nl__bool__4){ goto label_8;}
#line 753
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(82));
#line 753
if(___nl__bool__4){ goto label_12;}
#line 753
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 753
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 753
nl_die_arg(___nl__im__5);
#line 752
label_8:
;
#line 752
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(83)));
#line 752
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 753
goto label_22;
#line 753
label_12:
;
#line 753
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(82)));
#line 753
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 754
c_rt_lib0move(&___nl__im__11,___get_global_string_const(152));
#line 754
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 754
c_rt_lib0clear(&___nl__im__11);
#line 754
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 754
c_rt_lib0clear(&___nl__im__10);
#line 755
c_rt_lib0move(___ref___im__2,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 756
goto label_22;
#line 756
label_22:
;
#line 756
c_rt_lib0clear(&___nl__im__0);
#line 756
c_rt_lib0clear(&___nl__im__1);
#line 756
c_rt_lib0clear(&___nl__im__3);
#line 756
//clear ___nl__bool__4;
#line 756
c_rt_lib0clear(&___nl__im__5);
#line 756
c_rt_lib0clear(&___nl__im__6);
#line 756
c_rt_lib0clear(&___nl__im__7);
#line 756
c_rt_lib0clear(&___nl__im__8);
#line 756
c_rt_lib0clear(&___nl__im__9);
#line 756
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
#line 764
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 765
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(64));
#line 765
if(___nl__bool__6){ goto label_16;}
#line 773
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(65));
#line 773
if(___nl__bool__6){ goto label_56;}
#line 787
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(66));
#line 787
if(___nl__bool__6){ goto label_126;}
#line 805
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(67));
#line 805
if(___nl__bool__6){ goto label_224;}
#line 807
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(68));
#line 807
if(___nl__bool__6){ goto label_228;}
#line 809
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(69));
#line 809
if(___nl__bool__6){ goto label_232;}
#line 809
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 809
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 809
nl_die_arg(___nl__im__7);
#line 765
label_16:
;
#line 766
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 766
label_18:
;
#line 766
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 766
if(___nl__bool__9){ goto label_54;}
#line 766
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 766
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 767
c_rt_lib0move(&___nl__im__12,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 768
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 768
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(79)));
#line 768
c_rt_lib0clear(&___nl__im__15);
#line 768
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 768
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(79)));
#line 768
c_rt_lib0clear(&___nl__im__17);
#line 768
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(64)));
#line 768
c_rt_lib0clear(&___nl__im__14);
#line 768
c_rt_lib0clear(&___nl__im__16);
#line 769
c_rt_lib0move(&___nl__im__19,___get_global_string_const(151));
#line 769
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 769
c_rt_lib0clear(&___nl__im__19);
#line 769
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 769
c_rt_lib0clear(&___nl__im__18);
#line 770
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 770
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 770
c_rt_lib0clear(&___nl__im__20);
#line 771
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 771
___nl__bool__21 = !___nl__bool__21;
#line 771
if(___nl__bool__21){ goto label_48;}
#line 771
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 771
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 771
c_rt_lib0clear(&___nl__im__22);
#line 771
goto label_48;
#line 771
label_48:
;
#line 771
//clear ___nl__bool__21;
#line 771
c_rt_lib0clear(&___nl__im__12);
#line 771
c_rt_lib0clear(&___nl__im__13);
#line 772
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 772
goto label_18;
#line 772
label_54:
;
#line 773
goto label_255;
#line 773
label_56:
;
#line 774
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 775
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 776
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(196)));
#line 776
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 776
label_61:
;
#line 776
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 776
if(___nl__bool__27){ goto label_103;}
#line 776
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 776
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 777
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 778
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 778
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(79)));
#line 778
c_rt_lib0clear(&___nl__im__32);
#line 778
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 778
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(79)));
#line 778
c_rt_lib0clear(&___nl__im__34);
#line 778
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(65)));
#line 778
c_rt_lib0clear(&___nl__im__31);
#line 778
c_rt_lib0clear(&___nl__im__33);
#line 779
c_rt_lib0move(&___nl__im__36,___get_global_string_const(151));
#line 779
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 779
c_rt_lib0clear(&___nl__im__36);
#line 779
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 779
c_rt_lib0clear(&___nl__im__35);
#line 780
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(65)));
#line 780
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(65)));
#line 780
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 780
c_rt_lib0clear(&___nl__im__37);
#line 780
c_rt_lib0clear(&___nl__im__38);
#line 781
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(72)));
#line 781
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(72)));
#line 781
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 781
c_rt_lib0clear(&___nl__im__39);
#line 781
c_rt_lib0clear(&___nl__im__40);
#line 782
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 782
___nl__bool__41 = !___nl__bool__41;
#line 782
if(___nl__bool__41){ goto label_98;}
#line 782
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 782
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 782
c_rt_lib0clear(&___nl__im__42);
#line 782
goto label_98;
#line 782
label_98:
;
#line 782
//clear ___nl__bool__41;
#line 782
c_rt_lib0clear(&___nl__im__30);
#line 783
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 783
goto label_61;
#line 783
label_103:
;
#line 784
c_rt_lib0move(&___nl__im__43,___get_global_string_const(197));
#line 784
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 784
c_rt_lib0clear(&___nl__im__43);
#line 785
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(198)));
#line 785
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(65)));
#line 785
c_rt_lib0clear(&___nl__im__45);
#line 785
c_rt_lib0move(&___nl__im__47,___get_global_string_const(199));
#line 785
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 785
c_rt_lib0clear(&___nl__im__47);
#line 785
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 785
c_rt_lib0clear(&___nl__im__44);
#line 785
c_rt_lib0clear(&___nl__im__46);
#line 786
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(198)));
#line 786
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(72)));
#line 786
c_rt_lib0clear(&___nl__im__49);
#line 786
c_rt_lib0move(&___nl__im__51,___get_global_string_const(200));
#line 786
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 786
c_rt_lib0clear(&___nl__im__51);
#line 786
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 786
c_rt_lib0clear(&___nl__im__48);
#line 786
c_rt_lib0clear(&___nl__im__50);
#line 787
goto label_255;
#line 787
label_126:
;
#line 787
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(66)));
#line 787
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 788
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__0));
#line 788
label_130:
;
#line 788
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 788
if(___nl__bool__55){ goto label_222;}
#line 788
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 788
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__54));
#line 789
c_rt_lib0move(&___nl__im__58,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 790
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 791
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 791
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(79)));
#line 791
c_rt_lib0clear(&___nl__im__62);
#line 791
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 791
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(79)));
#line 791
c_rt_lib0clear(&___nl__im__64);
#line 791
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(66)));
#line 791
c_rt_lib0clear(&___nl__im__61);
#line 791
c_rt_lib0clear(&___nl__im__63);
#line 792
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 792
___nl__bool__65 = c_rt_lib0check_true_native(___nl__im__66);
#line 792
c_rt_lib0clear(&___nl__im__66);
#line 792
___nl__bool__65 = !___nl__bool__65;
#line 792
if(___nl__bool__65){ goto label_155;}
#line 793
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(74)));
#line 793
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__67));
#line 793
c_rt_lib0clear(&___nl__im__67);
#line 794
goto label_155;
#line 794
label_155:
;
#line 794
//clear ___nl__bool__65;
#line 795
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(70)));
#line 795
c_rt_lib0move(&___nl__im__68, generator_js0generate(___nl__im__56, ___nl__im__69, ___nl__im__59));
#line 795
c_rt_lib0clear(&___nl__im__69);
#line 796
c_rt_lib0move(&___nl__im__71,___get_global_string_const(151));
#line 796
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__54));
#line 796
c_rt_lib0clear(&___nl__im__71);
#line 796
c_rt_lib0delete(c_fe_lib0print(___nl__im__70));
#line 796
c_rt_lib0clear(&___nl__im__70);
#line 797
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(66)));
#line 797
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(66)));
#line 797
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__72, ___nl__im__73, &___nl__im__58));
#line 797
c_rt_lib0clear(&___nl__im__72);
#line 797
c_rt_lib0clear(&___nl__im__73);
#line 798
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 798
___nl__bool__74 = c_rt_lib0check_true_native(___nl__im__75);
#line 798
c_rt_lib0clear(&___nl__im__75);
#line 798
___nl__bool__74 = !___nl__bool__74;
#line 798
if(___nl__bool__74){ goto label_205;}
#line 799
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(73)));
#line 799
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__76));
#line 799
c_rt_lib0clear(&___nl__im__76);
#line 800
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(71)));
#line 800
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(75)));
#line 800
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__77, ___nl__im__78, &___nl__im__58));
#line 800
c_rt_lib0clear(&___nl__im__77);
#line 800
c_rt_lib0clear(&___nl__im__78);
#line 801
c_rt_lib0move(&___nl__im__83,___get_global_string_const(201));
#line 801
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 801
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(78)));
#line 801
c_rt_lib0clear(&___nl__im__85);
#line 801
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 801
c_rt_lib0clear(&___nl__im__83);
#line 801
c_rt_lib0clear(&___nl__im__84);
#line 801
c_rt_lib0move(&___nl__im__86,___get_global_string_const(202));
#line 801
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__86));
#line 801
c_rt_lib0clear(&___nl__im__82);
#line 801
c_rt_lib0clear(&___nl__im__86);
#line 801
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(67)));
#line 801
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__87));
#line 801
c_rt_lib0clear(&___nl__im__81);
#line 801
c_rt_lib0clear(&___nl__im__87);
#line 801
c_rt_lib0move(&___nl__im__88,___get_global_string_const(203));
#line 801
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__88));
#line 801
c_rt_lib0clear(&___nl__im__80);
#line 801
c_rt_lib0clear(&___nl__im__88);
#line 801
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__79));
#line 801
c_rt_lib0clear(&___nl__im__79);
#line 802
goto label_205;
#line 802
label_205:
;
#line 802
//clear ___nl__bool__74;
#line 803
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__58);
#line 803
___nl__bool__89 = !___nl__bool__89;
#line 803
if(___nl__bool__89){ goto label_214;}
#line 803
c_rt_lib0move(&___nl__im__90,___get_global_string_const(36));
#line 803
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__90));
#line 803
c_rt_lib0clear(&___nl__im__90);
#line 803
goto label_214;
#line 803
label_214:
;
#line 803
//clear ___nl__bool__89;
#line 803
c_rt_lib0clear(&___nl__im__58);
#line 803
c_rt_lib0clear(&___nl__im__59);
#line 803
c_rt_lib0clear(&___nl__im__60);
#line 803
c_rt_lib0clear(&___nl__im__68);
#line 804
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 804
goto label_130;
#line 804
label_222:
;
#line 805
goto label_255;
#line 805
label_224:
;
#line 806
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 806
nl_die_arg(___nl__im__91);
#line 807
goto label_255;
#line 807
label_228:
;
#line 808
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 808
nl_die_arg(___nl__im__92);
#line 809
goto label_255;
#line 809
label_232:
;
#line 810
c_rt_lib0move(&___nl__im__93, post_processing0get_call_graph(___nl__im__0));
#line 811
c_rt_lib0move(&___nl__im__94,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 812
c_rt_lib0move(&___nl__im__95,___get_global_string_const(204));
#line 812
c_rt_lib0delete(c_fe_lib0print(___nl__im__95));
#line 812
c_rt_lib0clear(&___nl__im__95);
#line 813
c_rt_lib0move(&___nl__im__96, dfile0ssave(___nl__im__93));
#line 813
c_rt_lib0move(&___nl__im__98,___get_global_string_const(128));
#line 813
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__2, ___nl__im__98));
#line 813
c_rt_lib0clear(&___nl__im__98);
#line 813
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__96, ___nl__im__97, &___nl__im__94));
#line 813
c_rt_lib0clear(&___nl__im__96);
#line 813
c_rt_lib0clear(&___nl__im__97);
#line 814
___nl__bool__99 = c_rt_lib0check_true_native(___nl__im__94);
#line 814
___nl__bool__99 = !___nl__bool__99;
#line 814
if(___nl__bool__99){ goto label_252;}
#line 815
c_rt_lib0move(&___nl__im__100,___get_global_string_const(205));
#line 815
c_rt_lib0delete(c_fe_lib0print(___nl__im__100));
#line 815
c_rt_lib0clear(&___nl__im__100);
#line 816
goto label_252;
#line 816
label_252:
;
#line 816
//clear ___nl__bool__99;
#line 817
goto label_255;
#line 817
label_255:
;
#line 818
___nl__int__102 = hash0size(___nl__im__5);
#line 818
___nl__int__103 = 0;
#line 818
___nl__bool__101 = ___nl__int__102 > ___nl__int__103;
#line 818
//clear ___nl__int__102;
#line 818
//clear ___nl__int__103;
#line 818
___nl__bool__101 = !___nl__bool__101;
#line 818
if(___nl__bool__101){ goto label_302;}
#line 819
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__5));
#line 819
c_rt_lib0clear(&___nl__im__0);
#line 819
c_rt_lib0clear(&___nl__im__1);
#line 819
c_rt_lib0clear(&___nl__im__2);
#line 819
c_rt_lib0clear(&___nl__im__4);
#line 819
c_rt_lib0clear(&___nl__im__5);
#line 819
//clear ___nl__bool__6;
#line 819
c_rt_lib0clear(&___nl__im__7);
#line 819
c_rt_lib0clear(&___nl__im__8);
#line 819
//clear ___nl__bool__9;
#line 819
c_rt_lib0clear(&___nl__im__10);
#line 819
c_rt_lib0clear(&___nl__im__11);
#line 819
c_rt_lib0clear(&___nl__im__12);
#line 819
c_rt_lib0clear(&___nl__im__13);
#line 819
c_rt_lib0clear(&___nl__im__23);
#line 819
c_rt_lib0clear(&___nl__im__24);
#line 819
c_rt_lib0clear(&___nl__im__25);
#line 819
c_rt_lib0clear(&___nl__im__26);
#line 819
//clear ___nl__bool__27;
#line 819
c_rt_lib0clear(&___nl__im__28);
#line 819
c_rt_lib0clear(&___nl__im__29);
#line 819
c_rt_lib0clear(&___nl__im__30);
#line 819
c_rt_lib0clear(&___nl__im__52);
#line 819
c_rt_lib0clear(&___nl__im__53);
#line 819
c_rt_lib0clear(&___nl__im__54);
#line 819
//clear ___nl__bool__55;
#line 819
c_rt_lib0clear(&___nl__im__56);
#line 819
c_rt_lib0clear(&___nl__im__57);
#line 819
c_rt_lib0clear(&___nl__im__58);
#line 819
c_rt_lib0clear(&___nl__im__59);
#line 819
c_rt_lib0clear(&___nl__im__60);
#line 819
c_rt_lib0clear(&___nl__im__68);
#line 819
c_rt_lib0clear(&___nl__im__91);
#line 819
c_rt_lib0clear(&___nl__im__92);
#line 819
c_rt_lib0clear(&___nl__im__93);
#line 819
c_rt_lib0clear(&___nl__im__94);
#line 819
//clear ___nl__bool__101;
#line 819
return ___nl__im__104;
#line 820
goto label_345;
#line 820
label_302:
;
#line 821
c_rt_lib0move(&___nl__im__106,___get_global_string_const(36));
#line 821
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__106));
#line 821
c_rt_lib0clear(&___nl__im__106);
#line 821
c_rt_lib0clear(&___nl__im__0);
#line 821
c_rt_lib0clear(&___nl__im__1);
#line 821
c_rt_lib0clear(&___nl__im__2);
#line 821
c_rt_lib0clear(&___nl__im__4);
#line 821
c_rt_lib0clear(&___nl__im__5);
#line 821
//clear ___nl__bool__6;
#line 821
c_rt_lib0clear(&___nl__im__7);
#line 821
c_rt_lib0clear(&___nl__im__8);
#line 821
//clear ___nl__bool__9;
#line 821
c_rt_lib0clear(&___nl__im__10);
#line 821
c_rt_lib0clear(&___nl__im__11);
#line 821
c_rt_lib0clear(&___nl__im__12);
#line 821
c_rt_lib0clear(&___nl__im__13);
#line 821
c_rt_lib0clear(&___nl__im__23);
#line 821
c_rt_lib0clear(&___nl__im__24);
#line 821
c_rt_lib0clear(&___nl__im__25);
#line 821
c_rt_lib0clear(&___nl__im__26);
#line 821
//clear ___nl__bool__27;
#line 821
c_rt_lib0clear(&___nl__im__28);
#line 821
c_rt_lib0clear(&___nl__im__29);
#line 821
c_rt_lib0clear(&___nl__im__30);
#line 821
c_rt_lib0clear(&___nl__im__52);
#line 821
c_rt_lib0clear(&___nl__im__53);
#line 821
c_rt_lib0clear(&___nl__im__54);
#line 821
//clear ___nl__bool__55;
#line 821
c_rt_lib0clear(&___nl__im__56);
#line 821
c_rt_lib0clear(&___nl__im__57);
#line 821
c_rt_lib0clear(&___nl__im__58);
#line 821
c_rt_lib0clear(&___nl__im__59);
#line 821
c_rt_lib0clear(&___nl__im__60);
#line 821
c_rt_lib0clear(&___nl__im__68);
#line 821
c_rt_lib0clear(&___nl__im__91);
#line 821
c_rt_lib0clear(&___nl__im__92);
#line 821
c_rt_lib0clear(&___nl__im__93);
#line 821
c_rt_lib0clear(&___nl__im__94);
#line 821
//clear ___nl__bool__101;
#line 821
c_rt_lib0clear(&___nl__im__104);
#line 821
return ___nl__im__105;
#line 822
goto label_345;
#line 822
label_345:
;
#line 822
//clear ___nl__bool__101;
#line 822
c_rt_lib0clear(&___nl__im__104);
#line 822
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
#line 826
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(64));
#line 826
if(___nl__bool__2){ goto label_17;}
#line 828
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(65));
#line 828
if(___nl__bool__2){ goto label_23;}
#line 830
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(66));
#line 830
if(___nl__bool__2){ goto label_29;}
#line 832
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(67));
#line 832
if(___nl__bool__2){ goto label_35;}
#line 834
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(68));
#line 834
if(___nl__bool__2){ goto label_63;}
#line 836
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(76));
#line 836
if(___nl__bool__2){ goto label_94;}
#line 838
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(69));
#line 838
if(___nl__bool__2){ goto label_98;}
#line 838
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 838
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 838
nl_die_arg(___nl__im__3);
#line 826
label_17:
;
#line 826
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(64)));
#line 826
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 827
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 827
nl_die_arg(___nl__im__6);
#line 828
goto label_102;
#line 828
label_23:
;
#line 828
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(65)));
#line 828
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 829
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 829
nl_die_arg(___nl__im__9);
#line 830
goto label_102;
#line 830
label_29:
;
#line 830
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(66)));
#line 830
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 831
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 831
nl_die_arg(___nl__im__12);
#line 832
goto label_102;
#line 832
label_35:
;
#line 832
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(67)));
#line 832
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 833
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(206)));
#line 833
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 833
c_rt_lib0move(&___nl__im__18, pretty_printer0print_module_to_str(___nl__im__0));
#line 833
c_rt_lib0move(&___nl__im__17, c_fe_lib0string_to_file(___nl__im__13, ___nl__im__18));
#line 833
c_rt_lib0clear(&___nl__im__18);
#line 833
c_rt_lib0move(&___nl__im__15, ptd0ensure(___nl__im__16, ___nl__im__17));
#line 833
c_rt_lib0clear(&___nl__im__16);
#line 833
c_rt_lib0clear(&___nl__im__17);
#line 833
c_rt_lib0clear(&___nl__im__0);
#line 833
c_rt_lib0clear(&___nl__im__1);
#line 833
//clear ___nl__bool__2;
#line 833
c_rt_lib0clear(&___nl__im__3);
#line 833
c_rt_lib0clear(&___nl__im__4);
#line 833
c_rt_lib0clear(&___nl__im__5);
#line 833
c_rt_lib0clear(&___nl__im__6);
#line 833
c_rt_lib0clear(&___nl__im__7);
#line 833
c_rt_lib0clear(&___nl__im__8);
#line 833
c_rt_lib0clear(&___nl__im__9);
#line 833
c_rt_lib0clear(&___nl__im__10);
#line 833
c_rt_lib0clear(&___nl__im__11);
#line 833
c_rt_lib0clear(&___nl__im__12);
#line 833
c_rt_lib0clear(&___nl__im__13);
#line 833
c_rt_lib0clear(&___nl__im__14);
#line 833
return ___nl__im__15;
#line 834
goto label_102;
#line 834
label_63:
;
#line 834
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(68)));
#line 834
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 835
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(206)));
#line 835
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__22));
#line 835
c_rt_lib0move(&___nl__im__24, dfile0ssave(___nl__im__0));
#line 835
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 835
c_rt_lib0clear(&___nl__im__24);
#line 835
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 835
c_rt_lib0clear(&___nl__im__22);
#line 835
c_rt_lib0clear(&___nl__im__23);
#line 835
c_rt_lib0clear(&___nl__im__0);
#line 835
c_rt_lib0clear(&___nl__im__1);
#line 835
//clear ___nl__bool__2;
#line 835
c_rt_lib0clear(&___nl__im__3);
#line 835
c_rt_lib0clear(&___nl__im__4);
#line 835
c_rt_lib0clear(&___nl__im__5);
#line 835
c_rt_lib0clear(&___nl__im__6);
#line 835
c_rt_lib0clear(&___nl__im__7);
#line 835
c_rt_lib0clear(&___nl__im__8);
#line 835
c_rt_lib0clear(&___nl__im__9);
#line 835
c_rt_lib0clear(&___nl__im__10);
#line 835
c_rt_lib0clear(&___nl__im__11);
#line 835
c_rt_lib0clear(&___nl__im__12);
#line 835
c_rt_lib0clear(&___nl__im__13);
#line 835
c_rt_lib0clear(&___nl__im__14);
#line 835
c_rt_lib0clear(&___nl__im__15);
#line 835
c_rt_lib0clear(&___nl__im__19);
#line 835
c_rt_lib0clear(&___nl__im__20);
#line 835
return ___nl__im__21;
#line 836
goto label_102;
#line 836
label_94:
;
#line 837
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 837
nl_die_arg(___nl__im__25);
#line 838
goto label_102;
#line 838
label_98:
;
#line 839
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 839
nl_die_arg(___nl__im__26);
#line 840
goto label_102;
#line 840
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
#line 844
___nl__int__2 = string0length(___nl__im__0);
#line 844
___nl__int__3 = 1;
#line 844
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 844
//clear ___nl__int__2;
#line 844
//clear ___nl__int__3;
#line 845
___nl__int__6 = 1;
#line 845
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 845
//clear ___nl__int__6;
#line 845
c_rt_lib0move(&___nl__im__7,___get_global_string_const(117));
#line 845
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 845
c_rt_lib0clear(&___nl__im__5);
#line 845
c_rt_lib0clear(&___nl__im__7);
#line 845
if(___nl__bool__4){ goto label_20;}
#line 845
___nl__int__9 = 1;
#line 845
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 845
//clear ___nl__int__9;
#line 845
c_rt_lib0move(&___nl__im__10,___get_global_string_const(121));
#line 845
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 845
c_rt_lib0clear(&___nl__im__8);
#line 845
c_rt_lib0clear(&___nl__im__10);
#line 845
label_20:
;
#line 845
___nl__bool__4 = !___nl__bool__4;
#line 845
if(___nl__bool__4){ goto label_27;}
#line 845
___nl__int__11 = 1;
#line 845
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 845
//clear ___nl__int__11;
#line 845
goto label_27;
#line 845
label_27:
;
#line 845
//clear ___nl__bool__4;
#line 846
label_29:
;
#line 846
___nl__int__15 = 0;
#line 846
___nl__bool__12 = ___nl__int__1 >= ___nl__int__15;
#line 846
//clear ___nl__int__15;
#line 846
___nl__bool__14 = !___nl__bool__12;
#line 846
if(___nl__bool__14){ goto label_42;}
#line 846
___nl__int__17 = 1;
#line 846
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 846
//clear ___nl__int__17;
#line 846
c_rt_lib0move(&___nl__im__18,___get_global_string_const(117));
#line 846
___nl__bool__12 = c_rt_lib0ne(___nl__im__16, ___nl__im__18);
#line 846
c_rt_lib0clear(&___nl__im__16);
#line 846
c_rt_lib0clear(&___nl__im__18);
#line 846
label_42:
;
#line 846
//clear ___nl__bool__14;
#line 846
___nl__bool__13 = !___nl__bool__12;
#line 846
if(___nl__bool__13){ goto label_53;}
#line 846
___nl__int__20 = 1;
#line 846
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__20));
#line 846
//clear ___nl__int__20;
#line 846
c_rt_lib0move(&___nl__im__21,___get_global_string_const(121));
#line 846
___nl__bool__12 = c_rt_lib0ne(___nl__im__19, ___nl__im__21);
#line 846
c_rt_lib0clear(&___nl__im__19);
#line 846
c_rt_lib0clear(&___nl__im__21);
#line 846
label_53:
;
#line 846
//clear ___nl__bool__13;
#line 846
___nl__bool__12 = !___nl__bool__12;
#line 846
if(___nl__bool__12){ goto label_61;}
#line 846
___nl__int__22 = 1;
#line 846
___nl__int__1 = ___nl__int__1 - ___nl__int__22;
#line 846
//clear ___nl__int__22;
#line 846
goto label_29;
#line 846
label_61:
;
#line 847
___nl__int__24 = 0;
#line 847
___nl__bool__23 = ___nl__int__1 <= ___nl__int__24;
#line 847
//clear ___nl__int__24;
#line 847
___nl__bool__23 = !___nl__bool__23;
#line 847
if(___nl__bool__23){ goto label_74;}
#line 847
c_rt_lib0move(&___nl__im__25,___get_global_string_const(122));
#line 847
c_rt_lib0clear(&___nl__im__0);
#line 847
//clear ___nl__int__1;
#line 847
//clear ___nl__bool__12;
#line 847
//clear ___nl__bool__23;
#line 847
return ___nl__im__25;
#line 847
goto label_74;
#line 847
label_74:
;
#line 847
//clear ___nl__bool__23;
#line 847
c_rt_lib0clear(&___nl__im__25);
#line 848
___nl__int__27 = 0;
#line 848
c_rt_lib0move(&___nl__im__26, string0substr(___nl__im__0, ___nl__int__27, ___nl__int__1));
#line 848
//clear ___nl__int__27;
#line 848
c_rt_lib0clear(&___nl__im__0);
#line 848
//clear ___nl__int__1;
#line 848
//clear ___nl__bool__12;
#line 848
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
ImmT  ___nl__im__123 = NULL;
bool  ___nl__bool__124 = false;
ImmT  ___nl__im__125 = NULL;
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
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
bool  ___nl__bool__144 = false;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__string__148 = NULL;
INT  ___nl__int__149 = 0;
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
#line 853
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 854
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 855
c_rt_lib0move(&___nl__im__5,___get_global_string_const(122));
#line 855
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 855
c_rt_lib0clear(&___nl__im__5);
#line 856
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 857
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 858
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 859
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 860
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(95)));
#line 861
___nl__bool__11 = false;
#line 861
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 862
___nl__bool__13 = false;
#line 862
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 862
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(103), ___nl__im__2, ___get_global_string_const(102), ___nl__im__3, ___get_global_string_const(97), ___nl__im__4, ___get_global_string_const(100), ___nl__im__6, ___get_global_string_const(99), ___nl__im__7, ___get_global_string_const(101), ___nl__im__8, ___get_global_string_const(98), ___nl__im__9, ___get_global_string_const(104), ___nl__im__10, ___get_global_string_const(105), ___nl__im__12, ___get_global_string_const(106), ___nl__im__14));
#line 862
c_rt_lib0clear(&___nl__im__2);
#line 862
c_rt_lib0clear(&___nl__im__3);
#line 862
c_rt_lib0clear(&___nl__im__4);
#line 862
c_rt_lib0clear(&___nl__im__6);
#line 862
c_rt_lib0clear(&___nl__im__7);
#line 862
c_rt_lib0clear(&___nl__im__8);
#line 862
c_rt_lib0clear(&___nl__im__9);
#line 862
c_rt_lib0clear(&___nl__im__10);
#line 862
//clear ___nl__bool__11;
#line 862
c_rt_lib0clear(&___nl__im__12);
#line 862
//clear ___nl__bool__13;
#line 862
c_rt_lib0clear(&___nl__im__14);
#line 864
___nl__bool__15 = false;
#line 865
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 866
___nl__int__17 = 1;
#line 866
label_30:
;
#line 866
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 866
___nl__bool__18 = ___nl__int__17 < ___nl__int__19;
#line 866
//clear ___nl__int__19;
#line 866
___nl__bool__18 = !___nl__bool__18;
#line 866
if(___nl__bool__18){ goto label_510;}
#line 867
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 868
___nl__int__23 = string0length(___nl__im__20);
#line 868
___nl__int__24 = 2;
#line 868
___nl__bool__21 = ___nl__int__23 >= ___nl__int__24;
#line 868
//clear ___nl__int__23;
#line 868
//clear ___nl__int__24;
#line 868
___nl__bool__22 = !___nl__bool__21;
#line 868
if(___nl__bool__22){ goto label_53;}
#line 868
___nl__int__26 = 0;
#line 868
___nl__int__27 = 2;
#line 868
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__20, ___nl__int__26, ___nl__int__27));
#line 868
//clear ___nl__int__26;
#line 868
//clear ___nl__int__27;
#line 868
c_rt_lib0move(&___nl__im__28,___get_global_string_const(207));
#line 868
___nl__bool__21 = c_rt_lib0eq(___nl__im__25, ___nl__im__28);
#line 868
c_rt_lib0clear(&___nl__im__25);
#line 868
c_rt_lib0clear(&___nl__im__28);
#line 868
label_53:
;
#line 868
//clear ___nl__bool__22;
#line 868
___nl__bool__21 = !___nl__bool__21;
#line 868
if(___nl__bool__21){ goto label_480;}
#line 869
___nl__int__30 = 2;
#line 869
___nl__int__32 = string0length(___nl__im__20);
#line 869
___nl__int__33 = 2;
#line 869
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 869
//clear ___nl__int__32;
#line 869
//clear ___nl__int__33;
#line 869
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__20, ___nl__int__30, ___nl__int__31));
#line 869
//clear ___nl__int__30;
#line 869
//clear ___nl__int__31;
#line 870
c_rt_lib0move(&___nl__im__35,___get_global_string_const(99));
#line 870
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__35);
#line 870
c_rt_lib0clear(&___nl__im__35);
#line 870
___nl__bool__34 = !___nl__bool__34;
#line 870
if(___nl__bool__34){ goto label_79;}
#line 871
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 871
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__37));
#line 871
c_rt_lib0clear(&___nl__im__37);
#line 871
c_rt_lib0copy(&___nl__im__38, ___nl__im__36);
#line 871
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__38);
#line 871
c_rt_lib0clear(&___nl__im__36);
#line 871
c_rt_lib0clear(&___nl__im__38);
#line 872
goto label_475;
#line 872
label_79:
;
#line 872
c_rt_lib0move(&___nl__im__39,___get_global_string_const(64));
#line 872
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__39);
#line 872
c_rt_lib0clear(&___nl__im__39);
#line 872
___nl__bool__34 = !___nl__bool__34;
#line 872
if(___nl__bool__34){ goto label_91;}
#line 873
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_string_const(64)));
#line 873
c_rt_lib0copy(&___nl__im__41, ___nl__im__40);
#line 873
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__41);
#line 873
c_rt_lib0clear(&___nl__im__40);
#line 873
c_rt_lib0clear(&___nl__im__41);
#line 874
goto label_475;
#line 874
label_91:
;
#line 874
c_rt_lib0move(&___nl__im__42,___get_global_string_const(68));
#line 874
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__42);
#line 874
c_rt_lib0clear(&___nl__im__42);
#line 874
___nl__bool__34 = !___nl__bool__34;
#line 874
if(___nl__bool__34){ goto label_103;}
#line 875
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(68)));
#line 875
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 875
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__44);
#line 875
c_rt_lib0clear(&___nl__im__43);
#line 875
c_rt_lib0clear(&___nl__im__44);
#line 876
goto label_475;
#line 876
label_103:
;
#line 876
c_rt_lib0move(&___nl__im__45,___get_global_string_const(65));
#line 876
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__45);
#line 876
c_rt_lib0clear(&___nl__im__45);
#line 876
___nl__bool__34 = !___nl__bool__34;
#line 876
if(___nl__bool__34){ goto label_115;}
#line 877
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 877
c_rt_lib0copy(&___nl__im__47, ___nl__im__46);
#line 877
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__47);
#line 877
c_rt_lib0clear(&___nl__im__46);
#line 877
c_rt_lib0clear(&___nl__im__47);
#line 878
goto label_475;
#line 878
label_115:
;
#line 878
c_rt_lib0move(&___nl__im__48,___get_global_string_const(66));
#line 878
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__48);
#line 878
c_rt_lib0clear(&___nl__im__48);
#line 878
___nl__bool__34 = !___nl__bool__34;
#line 878
if(___nl__bool__34){ goto label_138;}
#line 879
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 879
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(66));
#line 879
c_rt_lib0clear(&___nl__im__50);
#line 879
___nl__bool__49 = !___nl__bool__49;
#line 879
___nl__bool__49 = !___nl__bool__49;
#line 879
if(___nl__bool__49){ goto label_135;}
#line 880
c_rt_lib0move(&___nl__im__52, compiler_priv0get_default_js_opts());
#line 880
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__52));
#line 880
c_rt_lib0clear(&___nl__im__52);
#line 880
c_rt_lib0copy(&___nl__im__53, ___nl__im__51);
#line 880
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__53);
#line 880
c_rt_lib0clear(&___nl__im__51);
#line 880
c_rt_lib0clear(&___nl__im__53);
#line 881
goto label_135;
#line 881
label_135:
;
#line 881
//clear ___nl__bool__49;
#line 882
goto label_475;
#line 882
label_138:
;
#line 882
c_rt_lib0move(&___nl__im__54,___get_global_string_const(69));
#line 882
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__54);
#line 882
c_rt_lib0clear(&___nl__im__54);
#line 882
___nl__bool__34 = !___nl__bool__34;
#line 882
if(___nl__bool__34){ goto label_150;}
#line 883
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 883
c_rt_lib0copy(&___nl__im__56, ___nl__im__55);
#line 883
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__56);
#line 883
c_rt_lib0clear(&___nl__im__55);
#line 883
c_rt_lib0clear(&___nl__im__56);
#line 884
goto label_475;
#line 884
label_150:
;
#line 884
c_rt_lib0move(&___nl__im__57,___get_global_string_const(67));
#line 884
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__57);
#line 884
c_rt_lib0clear(&___nl__im__57);
#line 884
___nl__bool__34 = !___nl__bool__34;
#line 884
if(___nl__bool__34){ goto label_163;}
#line 885
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(67)));
#line 885
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 885
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__59);
#line 885
c_rt_lib0clear(&___nl__im__58);
#line 885
c_rt_lib0clear(&___nl__im__59);
#line 886
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 887
goto label_475;
#line 887
label_163:
;
#line 887
c_rt_lib0move(&___nl__im__60,___get_global_string_const(92));
#line 887
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__60);
#line 887
c_rt_lib0clear(&___nl__im__60);
#line 887
___nl__bool__34 = !___nl__bool__34;
#line 887
if(___nl__bool__34){ goto label_175;}
#line 888
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(92)));
#line 888
c_rt_lib0copy(&___nl__im__62, ___nl__im__61);
#line 888
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__62);
#line 888
c_rt_lib0clear(&___nl__im__61);
#line 888
c_rt_lib0clear(&___nl__im__62);
#line 889
goto label_475;
#line 889
label_175:
;
#line 889
c_rt_lib0move(&___nl__im__63,___get_global_string_const(93));
#line 889
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__63);
#line 889
c_rt_lib0clear(&___nl__im__63);
#line 889
___nl__bool__34 = !___nl__bool__34;
#line 889
if(___nl__bool__34){ goto label_204;}
#line 890
___nl__int__64 = 1;
#line 890
___nl__int__17 = ___nl__int__17 + ___nl__int__64;
#line 890
//clear ___nl__int__64;
#line 891
___nl__int__66 = c_rt_lib0array_len(___nl__im__0);
#line 891
___nl__bool__65 = ___nl__int__17 < ___nl__int__66;
#line 891
//clear ___nl__int__66;
#line 891
___nl__bool__65 = !___nl__bool__65;
#line 891
___nl__bool__65 = !___nl__bool__65;
#line 891
if(___nl__bool__65){ goto label_193;}
#line 891
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 891
nl_die_arg(___nl__im__67);
#line 891
goto label_193;
#line 891
label_193:
;
#line 891
//clear ___nl__bool__65;
#line 891
c_rt_lib0clear(&___nl__im__67);
#line 892
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 892
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(93), ___nl__im__69));
#line 892
c_rt_lib0clear(&___nl__im__69);
#line 892
c_rt_lib0copy(&___nl__im__70, ___nl__im__68);
#line 892
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__70);
#line 892
c_rt_lib0clear(&___nl__im__68);
#line 892
c_rt_lib0clear(&___nl__im__70);
#line 893
goto label_475;
#line 893
label_204:
;
#line 893
c_rt_lib0move(&___nl__im__71,___get_global_string_const(90));
#line 893
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__71);
#line 893
c_rt_lib0clear(&___nl__im__71);
#line 893
___nl__bool__34 = !___nl__bool__34;
#line 893
if(___nl__bool__34){ goto label_216;}
#line 894
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 894
c_rt_lib0copy(&___nl__im__73, ___nl__im__72);
#line 894
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__73);
#line 894
c_rt_lib0clear(&___nl__im__72);
#line 894
c_rt_lib0clear(&___nl__im__73);
#line 895
goto label_475;
#line 895
label_216:
;
#line 895
c_rt_lib0move(&___nl__im__74,___get_global_string_const(91));
#line 895
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__74);
#line 895
c_rt_lib0clear(&___nl__im__74);
#line 895
___nl__bool__34 = !___nl__bool__34;
#line 895
if(___nl__bool__34){ goto label_228;}
#line 896
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_string_const(91)));
#line 896
c_rt_lib0copy(&___nl__im__76, ___nl__im__75);
#line 896
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__76);
#line 896
c_rt_lib0clear(&___nl__im__75);
#line 896
c_rt_lib0clear(&___nl__im__76);
#line 897
goto label_475;
#line 897
label_228:
;
#line 897
c_rt_lib0move(&___nl__im__77,___get_global_string_const(208));
#line 897
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__77);
#line 897
c_rt_lib0clear(&___nl__im__77);
#line 897
if(___nl__bool__34){ goto label_236;}
#line 897
c_rt_lib0move(&___nl__im__78,___get_global_string_const(209));
#line 897
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__78);
#line 897
c_rt_lib0clear(&___nl__im__78);
#line 897
label_236:
;
#line 897
___nl__bool__34 = !___nl__bool__34;
#line 897
if(___nl__bool__34){ goto label_264;}
#line 898
___nl__int__79 = 1;
#line 898
___nl__int__17 = ___nl__int__17 + ___nl__int__79;
#line 898
//clear ___nl__int__79;
#line 899
___nl__int__81 = c_rt_lib0array_len(___nl__im__0);
#line 899
___nl__bool__80 = ___nl__int__17 < ___nl__int__81;
#line 899
//clear ___nl__int__81;
#line 899
___nl__bool__80 = !___nl__bool__80;
#line 899
___nl__bool__80 = !___nl__bool__80;
#line 899
if(___nl__bool__80){ goto label_251;}
#line 899
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 899
nl_die_arg(___nl__im__82);
#line 899
goto label_251;
#line 899
label_251:
;
#line 899
//clear ___nl__bool__80;
#line 899
c_rt_lib0clear(&___nl__im__82);
#line 900
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 900
c_rt_lib0move(&___nl__im__85,___get_global_string_const(117));
#line 900
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 900
c_rt_lib0clear(&___nl__im__84);
#line 900
c_rt_lib0clear(&___nl__im__85);
#line 900
c_rt_lib0copy(&___nl__im__86, ___nl__im__83);
#line 900
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__86);
#line 900
c_rt_lib0clear(&___nl__im__83);
#line 900
c_rt_lib0clear(&___nl__im__86);
#line 901
goto label_475;
#line 901
label_264:
;
#line 901
c_rt_lib0move(&___nl__im__87,___get_global_string_const(210));
#line 901
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__87);
#line 901
c_rt_lib0clear(&___nl__im__87);
#line 901
___nl__bool__34 = !___nl__bool__34;
#line 901
if(___nl__bool__34){ goto label_291;}
#line 902
___nl__int__88 = 1;
#line 902
___nl__int__17 = ___nl__int__17 + ___nl__int__88;
#line 902
//clear ___nl__int__88;
#line 903
___nl__int__90 = c_rt_lib0array_len(___nl__im__0);
#line 903
___nl__bool__89 = ___nl__int__17 < ___nl__int__90;
#line 903
//clear ___nl__int__90;
#line 903
___nl__bool__89 = !___nl__bool__89;
#line 903
___nl__bool__89 = !___nl__bool__89;
#line 903
if(___nl__bool__89){ goto label_282;}
#line 903
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 903
nl_die_arg(___nl__im__91);
#line 903
goto label_282;
#line 903
label_282:
;
#line 903
//clear ___nl__bool__89;
#line 903
c_rt_lib0clear(&___nl__im__91);
#line 904
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 904
c_rt_lib0copy(&___nl__im__93, ___nl__im__92);
#line 904
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(101), ___nl__im__93);
#line 904
c_rt_lib0clear(&___nl__im__92);
#line 904
c_rt_lib0clear(&___nl__im__93);
#line 905
goto label_475;
#line 905
label_291:
;
#line 905
c_rt_lib0move(&___nl__im__94,___get_global_string_const(211));
#line 905
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__94);
#line 905
c_rt_lib0clear(&___nl__im__94);
#line 905
___nl__bool__34 = !___nl__bool__34;
#line 905
if(___nl__bool__34){ goto label_303;}
#line 906
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 906
c_rt_lib0copy(&___nl__im__96, ___nl__im__95);
#line 906
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__96);
#line 906
c_rt_lib0clear(&___nl__im__95);
#line 906
c_rt_lib0clear(&___nl__im__96);
#line 907
goto label_475;
#line 907
label_303:
;
#line 907
c_rt_lib0move(&___nl__im__97,___get_global_string_const(212));
#line 907
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__97);
#line 907
c_rt_lib0clear(&___nl__im__97);
#line 907
___nl__bool__34 = !___nl__bool__34;
#line 907
if(___nl__bool__34){ goto label_315;}
#line 908
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 908
c_rt_lib0copy(&___nl__im__99, ___nl__im__98);
#line 908
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__99);
#line 908
c_rt_lib0clear(&___nl__im__98);
#line 908
c_rt_lib0clear(&___nl__im__99);
#line 909
goto label_475;
#line 909
label_315:
;
#line 909
c_rt_lib0move(&___nl__im__100,___get_global_string_const(213));
#line 909
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__100);
#line 909
c_rt_lib0clear(&___nl__im__100);
#line 909
___nl__bool__34 = !___nl__bool__34;
#line 909
if(___nl__bool__34){ goto label_327;}
#line 910
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_string_const(87)));
#line 910
c_rt_lib0copy(&___nl__im__102, ___nl__im__101);
#line 910
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__102);
#line 910
c_rt_lib0clear(&___nl__im__101);
#line 910
c_rt_lib0clear(&___nl__im__102);
#line 911
goto label_475;
#line 911
label_327:
;
#line 911
c_rt_lib0move(&___nl__im__103,___get_global_string_const(214));
#line 911
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__103);
#line 911
c_rt_lib0clear(&___nl__im__103);
#line 911
___nl__bool__34 = !___nl__bool__34;
#line 911
if(___nl__bool__34){ goto label_339;}
#line 912
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_string_const(88)));
#line 912
c_rt_lib0copy(&___nl__im__105, ___nl__im__104);
#line 912
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__105);
#line 912
c_rt_lib0clear(&___nl__im__104);
#line 912
c_rt_lib0clear(&___nl__im__105);
#line 913
goto label_475;
#line 913
label_339:
;
#line 913
c_rt_lib0move(&___nl__im__106,___get_global_string_const(215));
#line 913
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__106);
#line 913
c_rt_lib0clear(&___nl__im__106);
#line 913
___nl__bool__34 = !___nl__bool__34;
#line 913
if(___nl__bool__34){ goto label_351;}
#line 914
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_none(___get_global_string_const(89)));
#line 914
c_rt_lib0copy(&___nl__im__108, ___nl__im__107);
#line 914
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__108);
#line 914
c_rt_lib0clear(&___nl__im__107);
#line 914
c_rt_lib0clear(&___nl__im__108);
#line 915
goto label_475;
#line 915
label_351:
;
#line 915
c_rt_lib0move(&___nl__im__109,___get_global_string_const(216));
#line 915
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__109);
#line 915
c_rt_lib0clear(&___nl__im__109);
#line 915
___nl__bool__34 = !___nl__bool__34;
#line 915
if(___nl__bool__34){ goto label_363;}
#line 916
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_string_const(96)));
#line 916
c_rt_lib0copy(&___nl__im__111, ___nl__im__110);
#line 916
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(104), ___nl__im__111);
#line 916
c_rt_lib0clear(&___nl__im__110);
#line 916
c_rt_lib0clear(&___nl__im__111);
#line 917
goto label_475;
#line 917
label_363:
;
#line 917
c_rt_lib0move(&___nl__im__112,___get_global_string_const(105));
#line 917
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__112);
#line 917
c_rt_lib0clear(&___nl__im__112);
#line 917
___nl__bool__34 = !___nl__bool__34;
#line 917
if(___nl__bool__34){ goto label_375;}
#line 918
___nl__bool__113 = true;
#line 918
c_rt_lib0move(&___nl__im__114, c_rt_lib0bool_to_nl_native(___nl__bool__113));
#line 918
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(105), ___nl__im__114);
#line 918
//clear ___nl__bool__113;
#line 918
c_rt_lib0clear(&___nl__im__114);
#line 919
goto label_475;
#line 919
label_375:
;
#line 919
c_rt_lib0move(&___nl__im__115,___get_global_string_const(106));
#line 919
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__115);
#line 919
c_rt_lib0clear(&___nl__im__115);
#line 919
___nl__bool__34 = !___nl__bool__34;
#line 919
if(___nl__bool__34){ goto label_387;}
#line 920
___nl__bool__116 = true;
#line 920
c_rt_lib0move(&___nl__im__117, c_rt_lib0bool_to_nl_native(___nl__bool__116));
#line 920
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(106), ___nl__im__117);
#line 920
//clear ___nl__bool__116;
#line 920
c_rt_lib0clear(&___nl__im__117);
#line 921
goto label_475;
#line 921
label_387:
;
#line 921
c_rt_lib0move(&___nl__im__118,___get_global_string_const(70));
#line 921
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__118);
#line 921
c_rt_lib0clear(&___nl__im__118);
#line 921
___nl__bool__34 = !___nl__bool__34;
#line 921
if(___nl__bool__34){ goto label_435;}
#line 922
___nl__int__119 = 1;
#line 922
___nl__int__17 = ___nl__int__17 + ___nl__int__119;
#line 922
//clear ___nl__int__119;
#line 923
___nl__int__121 = c_rt_lib0array_len(___nl__im__0);
#line 923
___nl__bool__120 = ___nl__int__17 < ___nl__int__121;
#line 923
//clear ___nl__int__121;
#line 923
___nl__bool__120 = !___nl__bool__120;
#line 923
___nl__bool__120 = !___nl__bool__120;
#line 923
if(___nl__bool__120){ goto label_405;}
#line 923
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 923
nl_die_arg(___nl__im__122);
#line 923
goto label_405;
#line 923
label_405:
;
#line 923
//clear ___nl__bool__120;
#line 923
c_rt_lib0clear(&___nl__im__122);
#line 925
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 925
___nl__bool__124 = c_rt_lib0priv_is(___nl__im__125, ___get_global_string_const(66));
#line 925
c_rt_lib0clear(&___nl__im__125);
#line 925
___nl__bool__124 = !___nl__bool__124;
#line 925
if(___nl__bool__124){ goto label_419;}
#line 926
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 926
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 926
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__127, ___get_global_string_const(66)));
#line 926
c_rt_lib0clear(&___nl__im__126);
#line 926
c_rt_lib0clear(&___nl__im__127);
#line 927
goto label_422;
#line 927
label_419:
;
#line 928
c_rt_lib0move(&___nl__im__123, compiler_priv0get_default_js_opts());
#line 929
goto label_422;
#line 929
label_422:
;
#line 929
//clear ___nl__bool__124;
#line 930
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 930
c_rt_lib0copy(&___nl__im__129, ___nl__im__128);
#line 930
c_rt_lib0hash_set_value_dec(&___nl__im__123, ___get_global_string_const(70), ___nl__im__129);
#line 930
c_rt_lib0clear(&___nl__im__128);
#line 930
c_rt_lib0clear(&___nl__im__129);
#line 931
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__123));
#line 931
c_rt_lib0copy(&___nl__im__131, ___nl__im__130);
#line 931
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__131);
#line 931
c_rt_lib0clear(&___nl__im__130);
#line 931
c_rt_lib0clear(&___nl__im__131);
#line 932
goto label_475;
#line 932
label_435:
;
#line 932
c_rt_lib0move(&___nl__im__132,___get_global_string_const(217));
#line 932
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__132);
#line 932
c_rt_lib0clear(&___nl__im__132);
#line 932
___nl__bool__34 = !___nl__bool__34;
#line 932
if(___nl__bool__34){ goto label_468;}
#line 934
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 934
___nl__bool__134 = c_rt_lib0priv_is(___nl__im__135, ___get_global_string_const(66));
#line 934
c_rt_lib0clear(&___nl__im__135);
#line 934
___nl__bool__134 = !___nl__bool__134;
#line 934
if(___nl__bool__134){ goto label_452;}
#line 935
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 935
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 935
c_rt_lib0move(&___nl__im__133, c_rt_lib0priv_as(___nl__im__137, ___get_global_string_const(66)));
#line 935
c_rt_lib0clear(&___nl__im__136);
#line 935
c_rt_lib0clear(&___nl__im__137);
#line 936
goto label_455;
#line 936
label_452:
;
#line 937
c_rt_lib0move(&___nl__im__133, compiler_priv0get_default_js_opts());
#line 938
goto label_455;
#line 938
label_455:
;
#line 938
//clear ___nl__bool__134;
#line 939
___nl__bool__138 = true;
#line 939
c_rt_lib0move(&___nl__im__139, c_rt_lib0bool_to_nl_native(___nl__bool__138));
#line 939
c_rt_lib0hash_set_value_dec(&___nl__im__133, ___get_global_string_const(71), ___nl__im__139);
#line 939
//clear ___nl__bool__138;
#line 939
c_rt_lib0clear(&___nl__im__139);
#line 940
c_rt_lib0move(&___nl__im__140, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__133));
#line 940
c_rt_lib0copy(&___nl__im__141, ___nl__im__140);
#line 940
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__141);
#line 940
c_rt_lib0clear(&___nl__im__140);
#line 940
c_rt_lib0clear(&___nl__im__141);
#line 941
goto label_475;
#line 941
label_468:
;
#line 942
c_rt_lib0move(&___nl__im__143,___get_global_string_const(218));
#line 942
c_rt_lib0move(&___nl__im__142, c_rt_lib0concat_new(___nl__im__143, ___nl__im__20));
#line 942
c_rt_lib0clear(&___nl__im__143);
#line 942
c_rt_lib0delete(c_fe_lib0print(___nl__im__142));
#line 942
c_rt_lib0clear(&___nl__im__142);
#line 943
goto label_475;
#line 943
label_475:
;
#line 943
//clear ___nl__bool__34;
#line 943
c_rt_lib0clear(&___nl__im__123);
#line 943
c_rt_lib0clear(&___nl__im__133);
#line 944
goto label_502;
#line 944
label_480:
;
#line 945
___nl__bool__144 = ___nl__bool__15;
#line 945
___nl__bool__144 = !___nl__bool__144;
#line 945
___nl__bool__144 = !___nl__bool__144;
#line 945
if(___nl__bool__144){ goto label_491;}
#line 945
c_rt_lib0move(&___nl__im__145, c_rt_lib0array_mk(0));
#line 945
c_rt_lib0copy(&___nl__im__146, ___nl__im__145);
#line 945
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__146);
#line 945
c_rt_lib0clear(&___nl__im__145);
#line 945
c_rt_lib0clear(&___nl__im__146);
#line 945
goto label_491;
#line 945
label_491:
;
#line 945
//clear ___nl__bool__144;
#line 946
c_rt_lib0move(&___nl__im__147,___get_global_string_const(97));
#line 946
c_rt_lib0move(&___nl__im__147, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__147));
#line 946
c_rt_lib0delete(array0push(&___nl__im__147, ___nl__im__20));
#line 946
c_rt_lib0move(&___nl__string__148,___get_global_string_const(97));
#line 946
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__148, ___nl__im__147));
#line 946
c_rt_lib0clear(&___nl__im__147);
#line 946
c_rt_lib0clear(&___nl__string__148);
#line 947
___nl__bool__15 = true;
#line 948
goto label_502;
#line 948
label_502:
;
#line 948
//clear ___nl__bool__21;
#line 948
c_rt_lib0clear(&___nl__im__29);
#line 948
c_rt_lib0clear(&___nl__im__20);
#line 866
___nl__int__149 = 1;
#line 866
___nl__int__17 = ___nl__int__17 + ___nl__int__149;
#line 866
//clear ___nl__int__149;
#line 949
goto label_30;
#line 949
label_510:
;
#line 950
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 950
c_rt_lib0move(&___nl__im__152,___get_global_string_const(36));
#line 950
___nl__bool__150 = c_rt_lib0eq(___nl__im__151, ___nl__im__152);
#line 950
c_rt_lib0clear(&___nl__im__151);
#line 950
c_rt_lib0clear(&___nl__im__152);
#line 950
___nl__bool__150 = !___nl__bool__150;
#line 950
if(___nl__bool__150){ goto label_530;}
#line 951
c_rt_lib0move(&___nl__im__155,___get_global_string_const(219));
#line 951
c_rt_lib0move(&___nl__im__154, c_rt_lib0concat_new(___nl__im__155, ___nl__im__16));
#line 951
c_rt_lib0clear(&___nl__im__155);
#line 951
c_rt_lib0move(&___nl__im__156,___get_global_string_const(117));
#line 951
c_rt_lib0move(&___nl__im__153, c_rt_lib0concat_new(___nl__im__154, ___nl__im__156));
#line 951
c_rt_lib0clear(&___nl__im__154);
#line 951
c_rt_lib0clear(&___nl__im__156);
#line 951
c_rt_lib0copy(&___nl__im__157, ___nl__im__153);
#line 951
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__157);
#line 951
c_rt_lib0clear(&___nl__im__153);
#line 951
c_rt_lib0clear(&___nl__im__157);
#line 952
goto label_530;
#line 952
label_530:
;
#line 952
//clear ___nl__bool__150;
#line 953
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 953
___nl__bool__158 = c_rt_lib0priv_is(___nl__im__159, ___get_global_string_const(80));
#line 953
c_rt_lib0clear(&___nl__im__159);
#line 953
___nl__bool__158 = !___nl__bool__158;
#line 953
if(___nl__bool__158){ goto label_549;}
#line 953
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 953
c_rt_lib0move(&___nl__im__163, compiler_priv0get_default_deref_file());
#line 953
c_rt_lib0move(&___nl__im__161, c_rt_lib0concat_new(___nl__im__162, ___nl__im__163));
#line 953
c_rt_lib0clear(&___nl__im__162);
#line 953
c_rt_lib0clear(&___nl__im__163);
#line 953
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__161));
#line 953
c_rt_lib0clear(&___nl__im__161);
#line 953
c_rt_lib0copy(&___nl__im__164, ___nl__im__160);
#line 953
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__164);
#line 953
c_rt_lib0clear(&___nl__im__160);
#line 953
c_rt_lib0clear(&___nl__im__164);
#line 953
goto label_549;
#line 953
label_549:
;
#line 953
//clear ___nl__bool__158;
#line 954
c_rt_lib0clear(&___nl__im__0);
#line 954
//clear ___nl__bool__15;
#line 954
c_rt_lib0clear(&___nl__im__16);
#line 954
//clear ___nl__int__17;
#line 954
//clear ___nl__bool__18;
#line 954
c_rt_lib0clear(&___nl__im__20);
#line 954
return ___nl__im__1;
return NULL;

}

ImmT compiler_priv0get_default_js_opts(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(17);
}
ImmT compiler_priv0get_default_js_opts0cal() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 959
c_rt_lib0move(&___nl__im__1,___get_global_string_const(67));
#line 960
___nl__bool__2 = false;
#line 960
c_rt_lib0move(&___nl__im__3, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 960
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_string_const(70), ___nl__im__1, ___get_global_string_const(71), ___nl__im__3));
#line 960
c_rt_lib0clear(&___nl__im__1);
#line 960
//clear ___nl__bool__2;
#line 960
c_rt_lib0clear(&___nl__im__3);
#line 960
return ___nl__im__0;
return NULL;

}

compiler0module_functions_t0type compiler_priv0get_functions(nast0module_t0type ___nl__im__0) {
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
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
#line 965
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 966
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(179)));
#line 966
___nl__int__4 = 0;
#line 966
___nl__int__5 = 1;
#line 966
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 966
label_5:
;
#line 966
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 966
if(___nl__bool__7){ goto label_44;}
#line 966
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 966
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 967
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(220)));
#line 967
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(221)));
#line 967
c_rt_lib0clear(&___nl__im__10);
#line 968
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 969
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(113)));
#line 969
___nl__int__14 = 0;
#line 969
___nl__int__15 = 1;
#line 969
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 969
label_18:
;
#line 969
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 969
if(___nl__bool__17){ goto label_33;}
#line 969
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 969
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 970
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(221)));
#line 970
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(111)));
#line 970
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(110), ___nl__im__20, ___get_global_string_const(111), ___nl__im__21));
#line 970
c_rt_lib0clear(&___nl__im__20);
#line 970
c_rt_lib0clear(&___nl__im__21);
#line 970
c_rt_lib0array_push(&___nl__im__11, ___nl__im__19);
#line 970
c_rt_lib0clear(&___nl__im__19);
#line 970
c_rt_lib0clear(&___nl__im__13);
#line 971
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 971
goto label_18;
#line 971
label_33:
;
#line 972
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(112), ___nl__im__9, ___get_global_string_const(113), ___nl__im__11));
#line 972
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(181)));
#line 972
c_rt_lib0copy(&___nl__im__23, ___nl__im__22);
#line 972
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__1, ___nl__im__24, ___nl__im__23));
#line 972
c_rt_lib0clear(&___nl__im__22);
#line 972
c_rt_lib0clear(&___nl__im__23);
#line 972
c_rt_lib0clear(&___nl__im__24);
#line 972
c_rt_lib0clear(&___nl__im__3);
#line 973
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 973
goto label_5;
#line 973
label_44:
;
#line 974
c_rt_lib0clear(&___nl__im__0);
#line 974
c_rt_lib0clear(&___nl__im__2);
#line 974
c_rt_lib0clear(&___nl__im__3);
#line 974
//clear ___nl__int__4;
#line 974
//clear ___nl__int__5;
#line 974
//clear ___nl__int__6;
#line 974
//clear ___nl__bool__7;
#line 974
c_rt_lib0clear(&___nl__im__8);
#line 974
c_rt_lib0clear(&___nl__im__9);
#line 974
c_rt_lib0clear(&___nl__im__11);
#line 974
c_rt_lib0clear(&___nl__im__12);
#line 974
c_rt_lib0clear(&___nl__im__13);
#line 974
//clear ___nl__int__14;
#line 974
//clear ___nl__int__15;
#line 974
//clear ___nl__int__16;
#line 974
//clear ___nl__bool__17;
#line 974
c_rt_lib0clear(&___nl__im__18);
#line 974
return ___nl__im__1;
return NULL;

}

ImmT  compiler_priv0add_to_called_from(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
#line 978
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__1));
#line 978
label_1:
;
#line 978
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 978
if(___nl__bool__3){ goto label_49;}
#line 978
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 978
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__2));
#line 979
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(222)));
#line 979
___nl__int__8 = 0;
#line 979
___nl__int__9 = 1;
#line 979
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 979
label_10:
;
#line 979
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 979
if(___nl__bool__11){ goto label_32;}
#line 979
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 979
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 980
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(223)));
#line 980
___nl__int__15 = 0;
#line 980
___nl__int__16 = 1;
#line 980
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 980
label_19:
;
#line 980
___nl__bool__18 = ___nl__int__15 >= ___nl__int__17;
#line 980
if(___nl__bool__18){ goto label_28;}
#line 980
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 980
c_rt_lib0copy(&___nl__im__14, ___nl__im__19);
#line 981
c_rt_lib0delete(compiler_priv0add_cmd_to_called_from(___ref___im__0, ___nl__im__14, ___nl__im__2));
#line 981
c_rt_lib0clear(&___nl__im__14);
#line 982
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 982
goto label_19;
#line 982
label_28:
;
#line 982
c_rt_lib0clear(&___nl__im__7);
#line 983
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 983
goto label_10;
#line 983
label_32:
;
#line 983
c_rt_lib0clear(&___nl__im__6);
#line 983
c_rt_lib0clear(&___nl__im__7);
#line 983
//clear ___nl__int__8;
#line 983
//clear ___nl__int__9;
#line 983
//clear ___nl__int__10;
#line 983
//clear ___nl__bool__11;
#line 983
c_rt_lib0clear(&___nl__im__12);
#line 983
c_rt_lib0clear(&___nl__im__13);
#line 983
c_rt_lib0clear(&___nl__im__14);
#line 983
//clear ___nl__int__15;
#line 983
//clear ___nl__int__16;
#line 983
//clear ___nl__int__17;
#line 983
//clear ___nl__bool__18;
#line 983
c_rt_lib0clear(&___nl__im__19);
#line 984
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 984
goto label_1;
#line 984
label_49:
;
#line 984
c_rt_lib0clear(&___nl__im__1);
#line 984
c_rt_lib0clear(&___nl__im__2);
#line 984
//clear ___nl__bool__3;
#line 984
c_rt_lib0clear(&___nl__im__4);
#line 984
c_rt_lib0clear(&___nl__im__5);
#line 984
c_rt_lib0clear(&___nl__im__6);
#line 984
c_rt_lib0clear(&___nl__im__7);
#line 984
//clear ___nl__int__8;
#line 984
//clear ___nl__int__9;
#line 984
//clear ___nl__int__10;
#line 984
//clear ___nl__bool__11;
#line 984
c_rt_lib0clear(&___nl__im__12);
#line 984
c_rt_lib0clear(&___nl__im__13);
#line 984
c_rt_lib0clear(&___nl__im__14);
#line 984
//clear ___nl__int__15;
#line 984
//clear ___nl__int__16;
#line 984
//clear ___nl__int__17;
#line 984
//clear ___nl__bool__18;
#line 984
c_rt_lib0clear(&___nl__im__19);
#line 984
return NULL;
return NULL;

}

ImmT  compiler_priv0add_cmd_to_called_from(ImmT * ___ref___im__0,nlasm0cmd_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
compiler_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 989
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 989
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(225));
#line 989
c_rt_lib0clear(&___nl__im__4);
#line 989
___nl__bool__3 = !___nl__bool__3;
#line 989
if(___nl__bool__3){ goto label_40;}
#line 990
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 990
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 990
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(225)));
#line 990
c_rt_lib0clear(&___nl__im__6);
#line 990
c_rt_lib0clear(&___nl__im__7);
#line 991
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(111)));
#line 991
c_rt_lib0move(&___nl__im__11,___get_global_string_const(34));
#line 991
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 991
c_rt_lib0clear(&___nl__im__10);
#line 991
c_rt_lib0clear(&___nl__im__11);
#line 991
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(226)));
#line 991
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 991
c_rt_lib0clear(&___nl__im__9);
#line 991
c_rt_lib0clear(&___nl__im__12);
#line 992
___nl__bool__13 = hash0has_key((*___ref___im__0), ___nl__im__8);
#line 992
___nl__bool__13 = !___nl__bool__13;
#line 992
___nl__bool__13 = !___nl__bool__13;
#line 992
if(___nl__bool__13){ goto label_29;}
#line 993
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 993
c_rt_lib0copy(&___nl__im__15, ___nl__im__14);
#line 993
c_rt_lib0delete(c_rt_lib0hash_set_value(___ref___im__0, ___nl__im__8, ___nl__im__15));
#line 993
c_rt_lib0clear(&___nl__im__14);
#line 993
c_rt_lib0clear(&___nl__im__15);
#line 994
goto label_29;
#line 994
label_29:
;
#line 994
//clear ___nl__bool__13;
#line 995
___nl__int__16 = 1;
#line 995
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__8));
#line 995
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 995
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__17, ___nl__im__2, ___nl__im__18));
#line 995
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__im__8, ___nl__im__17));
#line 995
//clear ___nl__int__16;
#line 995
c_rt_lib0clear(&___nl__im__17);
#line 995
c_rt_lib0clear(&___nl__im__18);
#line 996
goto label_40;
#line 996
label_40:
;
#line 996
//clear ___nl__bool__3;
#line 996
c_rt_lib0clear(&___nl__im__5);
#line 996
c_rt_lib0clear(&___nl__im__8);
#line 996
c_rt_lib0clear(&___nl__im__1);
#line 996
c_rt_lib0clear(&___nl__im__2);
#line 996
return NULL;
return NULL;

}


static ImmT ___const__[19];
static int ___const_init__ = 1;
void compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[18];


for(int i=0;i<18;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 18);
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
	___const__[15] = compiler0functions_t0cal();
	break;
case 16:
	___const__[16] = compiler0module_functions_t0cal();
	break;
case 17:
	___const__[17] = compiler_priv0get_default_js_opts0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
