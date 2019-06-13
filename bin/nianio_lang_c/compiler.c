
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
ImmT  ___nl__im__16 = NULL;
generator_c0state_t0type ___nl__rec__17 = {
.own_to_im = (own_to_im_function*)generator_c0conv_to_im00state_t
};
ImmT * ___nl__im_ptr__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT * ___nl__im_ptr__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
ImmT * ___nl__im_ptr__31 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__32 = NULL;
INT * ___nl__int_ptr__33 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__34 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__37 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__38 = NULL;
ImmT * ___nl__im_ptr__39 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__40 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__41 = NULL;
ImmT * ___nl__im_ptr__42 = NULL;
ImmT * ___nl__im_ptr__43 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__44 = NULL;
ImmT * ___nl__im_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
INT  ___nl__int__55 = 0;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
bool  ___nl__bool__65 = false;
INT  ___nl__int__66 = 0;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
bool  ___nl__bool__73 = false;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__string__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__string__78 = NULL;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
bool  ___nl__bool__82 = false;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
INT  ___nl__int__86 = 0;
bool  ___nl__bool__87 = false;
INT  ___nl__int__88 = 0;
INT  ___nl__int__89 = 0;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
INT  ___nl__int__105 = 0;
INT  ___nl__int__106 = 0;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
INT  ___nl__int__112 = 0;
ImmT  ___nl__string__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
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
bool  ___nl__bool__132 = false;
ImmT  ___nl__im__133 = NULL;
bool  ___nl__bool__134 = false;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
bool  ___nl__bool__137 = false;
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
INT  ___nl__int__148 = 0;
INT  ___nl__int__149 = 0;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
bool  ___nl__bool__152 = false;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
bool  ___nl__bool__157 = false;
INT  ___nl__int__158 = 0;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
bool  ___nl__bool__165 = false;
INT  ___nl__int__166 = 0;
INT  ___nl__int__167 = 0;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
bool  ___nl__bool__170 = false;
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
bool  ___nl__bool__183 = false;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
bool  ___nl__bool__188 = false;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
ImmT  ___nl__im__195 = NULL;
bool  ___nl__bool__196 = false;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
bool  ___nl__bool__204 = false;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
bool  ___nl__bool__212 = false;
INT  ___nl__int__213 = 0;
INT  ___nl__int__214 = 0;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
ImmT  ___nl__im__217 = NULL;
INT  ___nl__int__218 = 0;
ImmT  ___nl__string__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
bool  ___nl__bool__225 = false;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
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
#line 362
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 364
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 365
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 366
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 367
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 368
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 368
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__8, ___get_global_string_const(59), ___nl__im__9, ___get_global_string_const(60), ___nl__im__10, ___get_global_string_const(61), ___nl__im__11, ___get_global_string_const(62), ___nl__im__12));
#line 368
c_rt_lib0clear(&___nl__im__8);
#line 368
c_rt_lib0clear(&___nl__im__9);
#line 368
c_rt_lib0clear(&___nl__im__10);
#line 368
c_rt_lib0clear(&___nl__im__11);
#line 368
c_rt_lib0clear(&___nl__im__12);
#line 370
c_rt_lib0move(&___nl__im__14, compiler_priv0get_mathematical_func(___nl__im__0));
#line 370
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 370
c_rt_lib0move(&___nl__im__13, post_processing0init(___nl__im__14, ___nl__im__15));
#line 370
c_rt_lib0clear(&___nl__im__14);
#line 370
c_rt_lib0clear(&___nl__im__15);
#line 371
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(0));
#line 372
;
#line 372
___nl__im_ptr__18 = &(___nl__rec__17.global_int_const0field);
#line 373
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 373
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 373
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__19, ___get_global_string_const(142), ___nl__im__20, ___get_global_string_const(143), ___nl__im__21, ___get_global_string_const(144), ___nl__im__22));
#line 373
c_rt_lib0clear(&___nl__im__19);
#line 373
c_rt_lib0clear(&___nl__im__20);
#line 373
c_rt_lib0clear(&___nl__im__21);
#line 373
c_rt_lib0clear(&___nl__im__22);
#line 373
___nl__im_ptr__18 = NULL;
#line 373
___nl__im_ptr__23 = &(___nl__rec__17.global_string_const0field);
#line 374
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(0));
#line 374
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(0));
#line 374
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 374
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(0));
#line 374
c_rt_lib0move(___nl__im_ptr__23, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__24, ___get_global_string_const(142), ___nl__im__25, ___get_global_string_const(143), ___nl__im__26, ___get_global_string_const(144), ___nl__im__27));
#line 374
c_rt_lib0clear(&___nl__im__24);
#line 374
c_rt_lib0clear(&___nl__im__25);
#line 374
c_rt_lib0clear(&___nl__im__26);
#line 374
c_rt_lib0clear(&___nl__im__27);
#line 374
___nl__im_ptr__23 = NULL;
#line 374
___nl__im_ptr__28 = &(___nl__rec__17.ret0field);
#line 375
c_rt_lib0move(___nl__im_ptr__28,___get_global_string_const(36));
#line 375
___nl__im_ptr__28 = NULL;
#line 375
___nl__im_ptr__29 = &(___nl__rec__17.header0field);
#line 376
c_rt_lib0move(___nl__im_ptr__29,___get_global_string_const(36));
#line 376
___nl__im_ptr__29 = NULL;
#line 376
___nl__im_ptr__30 = &(___nl__rec__17.fun_args0field);
#line 377
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0array_mk(0));
#line 377
___nl__im_ptr__30 = NULL;
#line 377
___nl__im_ptr__31 = &(___nl__rec__17.ret_reg_type0field);
#line 378
c_rt_lib0move(___nl__im_ptr__31, c_rt_lib0ov_mk_none(___get_global_string_const(145)));
#line 378
___nl__im_ptr__31 = NULL;
#line 378
___nl__rec_ptr__32 = &(___nl__rec__17.const0field);
#line 379
;
#line 379
___nl__int_ptr__33 = &(___nl__rec_ptr__32->dynamic_nr0field);
#line 380
(*___nl__int_ptr__33) = 0;
#line 380
___nl__int_ptr__33 = NULL;
#line 380
___nl__rec_ptr__34 = &(___nl__rec_ptr__32->int0field);
#line 381
;
#line 381
___nl__arr_ptr__35 = &(___nl__rec_ptr__34->arr0field);
#line 381
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__35));
(*___nl__arr_ptr__35).size = 0;
(*___nl__arr_ptr__35).capacity = 0;
(*___nl__arr_ptr__35).value = NULL;
#line 381
___nl__arr_ptr__35 = NULL;
#line 381
___nl__im_ptr__36 = &(___nl__rec_ptr__34->hash0field);
#line 381
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_mk(0));
#line 381
___nl__im_ptr__36 = NULL;
#line 381
___nl__rec_ptr__34 = NULL;
#line 381
___nl__rec_ptr__37 = &(___nl__rec_ptr__32->string0field);
#line 382
;
#line 382
___nl__arr_ptr__38 = &(___nl__rec_ptr__37->arr0field);
#line 382
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__38));
(*___nl__arr_ptr__38).size = 0;
(*___nl__arr_ptr__38).capacity = 0;
(*___nl__arr_ptr__38).value = NULL;
#line 382
___nl__arr_ptr__38 = NULL;
#line 382
___nl__im_ptr__39 = &(___nl__rec_ptr__37->hash0field);
#line 382
c_rt_lib0move(___nl__im_ptr__39, c_rt_lib0hash_mk(0));
#line 382
___nl__im_ptr__39 = NULL;
#line 382
___nl__rec_ptr__37 = NULL;
#line 382
___nl__rec_ptr__40 = &(___nl__rec_ptr__32->singleton0field);
#line 383
;
#line 383
___nl__arr_ptr__41 = &(___nl__rec_ptr__40->arr0field);
#line 383
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__41));
(*___nl__arr_ptr__41).size = 0;
(*___nl__arr_ptr__41).capacity = 0;
(*___nl__arr_ptr__41).value = NULL;
#line 383
___nl__arr_ptr__41 = NULL;
#line 383
___nl__im_ptr__42 = &(___nl__rec_ptr__40->hash0field);
#line 383
c_rt_lib0move(___nl__im_ptr__42, c_rt_lib0hash_mk(0));
#line 383
___nl__im_ptr__42 = NULL;
#line 383
___nl__rec_ptr__40 = NULL;
#line 383
___nl__rec_ptr__32 = NULL;
#line 383
___nl__im_ptr__43 = &(___nl__rec__17.mod_name0field);
#line 385
c_rt_lib0move(___nl__im_ptr__43,___get_global_string_const(36));
#line 385
___nl__im_ptr__43 = NULL;
#line 385
___nl__hash_ptr__44 = &(___nl__rec__17.additional_imports0field);
#line 386
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__44));
(*___nl__hash_ptr__44).size = 0;
(*___nl__hash_ptr__44).capacity = 0;
(*___nl__hash_ptr__44).keys = NULL;
(*___nl__hash_ptr__44).values = NULL;
#line 386
___nl__hash_ptr__44 = NULL;
#line 386
___nl__im_ptr__45 = &(___nl__rec__17.defined_types0field);
#line 387
c_rt_lib0move(___nl__im_ptr__45, c_rt_lib0hash_mk(0));
#line 387
___nl__im_ptr__45 = NULL;
#line 389
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 390
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 391
label_102:
;
#line 392
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(0));
#line 392
c_rt_lib0copy(&___nl__im__49, ___nl__im__48);
#line 392
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(60), ___nl__im__49);
#line 392
c_rt_lib0clear(&___nl__im__48);
#line 392
c_rt_lib0clear(&___nl__im__49);
#line 393
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(0));
#line 393
c_rt_lib0copy(&___nl__im__51, ___nl__im__50);
#line 393
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(61), ___nl__im__51);
#line 393
c_rt_lib0clear(&___nl__im__50);
#line 393
c_rt_lib0clear(&___nl__im__51);
#line 394
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 394
c_rt_lib0copy(&___nl__im__53, ___nl__im__52);
#line 394
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(62), ___nl__im__53);
#line 394
c_rt_lib0clear(&___nl__im__52);
#line 394
c_rt_lib0clear(&___nl__im__53);
#line 395
c_rt_lib0move(&___nl__im__54, compiler_priv0get_files_to_parse(___nl__im__0));
#line 396
___nl__int__55 = 0;
#line 397
c_rt_lib0move(&___nl__im__59, c_rt_lib0init_iter(___nl__im__54));
#line 397
label_121:
;
#line 397
___nl__bool__57 = c_rt_lib0is_end_hash(___nl__im__59);
#line 397
if(___nl__bool__57){ goto label_172;}
#line 397
c_rt_lib0move(&___nl__im__56, c_rt_lib0get_key_iter(___nl__im__59));
#line 397
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value(___nl__im__54, ___nl__im__56));
#line 398
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(78)));
#line 398
c_rt_lib0move(&___nl__im__60, c_fe_lib0get_modif_time(___nl__im__61));
#line 398
c_rt_lib0clear(&___nl__im__61);
#line 399
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(82));
#line 399
___nl__bool__62 = !___nl__bool__62;
#line 399
if(___nl__bool__62){ goto label_136;}
#line 399
c_rt_lib0clear(&___nl__im__60);
#line 399
//clear ___nl__bool__62;
#line 399
goto label_169;
#line 399
goto label_136;
#line 399
label_136:
;
#line 399
//clear ___nl__bool__62;
#line 400
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(83)));
#line 401
___nl__bool__63 = hash0has_key(___nl__im__1, ___nl__im__56);
#line 401
___nl__bool__63 = !___nl__bool__63;
#line 401
if(___nl__bool__63){ goto label_160;}
#line 402
c_rt_lib0move(&___nl__im__64, hash0get_value(___nl__im__1, ___nl__im__56));
#line 403
___nl__int__66 = getIntFromImm(___nl__im__60);
#line 403
___nl__int__67 = getIntFromImm(___nl__im__64);
#line 403
___nl__bool__65 = ___nl__int__66 > ___nl__int__67;
#line 403
//clear ___nl__int__66;
#line 403
//clear ___nl__int__67;
#line 403
___nl__bool__65 = !___nl__bool__65;
#line 403
___nl__bool__65 = !___nl__bool__65;
#line 403
if(___nl__bool__65){ goto label_157;}
#line 403
c_rt_lib0clear(&___nl__im__60);
#line 403
//clear ___nl__bool__63;
#line 403
c_rt_lib0clear(&___nl__im__64);
#line 403
//clear ___nl__bool__65;
#line 403
goto label_169;
#line 403
goto label_157;
#line 403
label_157:
;
#line 403
//clear ___nl__bool__65;
#line 404
goto label_160;
#line 404
label_160:
;
#line 404
//clear ___nl__bool__63;
#line 404
c_rt_lib0clear(&___nl__im__64);
#line 405
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__56, ___nl__im__60));
#line 406
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__56, ___nl__im__58));
#line 407
___nl__int__68 = 1;
#line 407
___nl__int__55 = ___nl__int__55 + ___nl__int__68;
#line 407
//clear ___nl__int__68;
#line 407
c_rt_lib0clear(&___nl__im__60);
#line 407
label_169:
;
#line 408
c_rt_lib0move(&___nl__im__59, c_rt_lib0next_iter(___nl__im__59));
#line 408
goto label_121;
#line 408
label_172:
;
#line 409
c_rt_lib0move(&___nl__im__72, c_rt_lib0init_iter(___nl__im__16));
#line 409
label_174:
;
#line 409
___nl__bool__70 = c_rt_lib0is_end_hash(___nl__im__72);
#line 409
if(___nl__bool__70){ goto label_219;}
#line 409
c_rt_lib0move(&___nl__im__69, c_rt_lib0get_key_iter(___nl__im__72));
#line 409
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value(___nl__im__16, ___nl__im__69));
#line 410
___nl__bool__73 = hash0has_key(___nl__im__54, ___nl__im__69);
#line 410
___nl__bool__73 = !___nl__bool__73;
#line 410
___nl__bool__73 = !___nl__bool__73;
#line 410
if(___nl__bool__73){ goto label_215;}
#line 411
___nl__int__74 = 1;
#line 411
___nl__int__55 = ___nl__int__55 + ___nl__int__74;
#line 411
//clear ___nl__int__74;
#line 412
c_rt_lib0move(&___nl__im__75,___get_global_string_const(58));
#line 412
c_rt_lib0move(&___nl__im__75, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__75));
#line 412
c_rt_lib0delete(hash0delete(&___nl__im__75, ___nl__im__69));
#line 412
c_rt_lib0move(&___nl__string__76,___get_global_string_const(58));
#line 412
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__76, ___nl__im__75));
#line 412
c_rt_lib0clear(&___nl__im__75);
#line 412
c_rt_lib0clear(&___nl__string__76);
#line 413
c_rt_lib0move(&___nl__im__77,___get_global_string_const(59));
#line 413
c_rt_lib0move(&___nl__im__77, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__77));
#line 413
c_rt_lib0delete(hash0delete(&___nl__im__77, ___nl__im__69));
#line 413
c_rt_lib0move(&___nl__string__78,___get_global_string_const(59));
#line 413
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__78, ___nl__im__77));
#line 413
c_rt_lib0clear(&___nl__im__77);
#line 413
c_rt_lib0clear(&___nl__string__78);
#line 414
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__69));
#line 415
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__69));
#line 416
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__69));
#line 417
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__69));
#line 418
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__13, ___nl__im__69));
#line 419
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 419
___nl__bool__79 = c_rt_lib0priv_is(___nl__im__80, ___get_global_string_const(65));
#line 419
c_rt_lib0clear(&___nl__im__80);
#line 419
___nl__bool__79 = !___nl__bool__79;
#line 419
if(___nl__bool__79){ goto label_212;}
#line 420
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__17, ___nl__im__69));
#line 421
goto label_212;
#line 421
label_212:
;
#line 421
//clear ___nl__bool__79;
#line 422
goto label_215;
#line 422
label_215:
;
#line 422
//clear ___nl__bool__73;
#line 423
c_rt_lib0move(&___nl__im__72, c_rt_lib0next_iter(___nl__im__72));
#line 423
goto label_174;
#line 423
label_219:
;
#line 424
c_rt_lib0move(&___nl__im__84, c_rt_lib0init_iter(___nl__im__6));
#line 424
label_221:
;
#line 424
___nl__bool__82 = c_rt_lib0is_end_hash(___nl__im__84);
#line 424
if(___nl__bool__82){ goto label_234;}
#line 424
c_rt_lib0move(&___nl__im__81, c_rt_lib0get_key_iter(___nl__im__84));
#line 424
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__81));
#line 425
c_rt_lib0copy(&___nl__im__85, ___nl__im__83);
#line 425
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__81, ___nl__im__85));
#line 425
c_rt_lib0clear(&___nl__im__85);
#line 426
___nl__int__86 = 1;
#line 426
___nl__int__55 = ___nl__int__55 + ___nl__int__86;
#line 426
//clear ___nl__int__86;
#line 427
c_rt_lib0move(&___nl__im__84, c_rt_lib0next_iter(___nl__im__84));
#line 427
goto label_221;
#line 427
label_234:
;
#line 428
c_rt_lib0copy(&___nl__im__16, ___nl__im__54);
#line 429
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 430
___nl__int__88 = 0;
#line 430
___nl__bool__87 = ___nl__int__55 == ___nl__int__88;
#line 430
//clear ___nl__int__88;
#line 430
___nl__bool__87 = !___nl__bool__87;
#line 430
if(___nl__bool__87){ goto label_265;}
#line 431
___nl__int__89 = 1;
#line 431
c_rt_lib0move(&___nl__im__90, c_rt_lib0int_new(___nl__int__89));
#line 431
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__90));
#line 431
//clear ___nl__int__89;
#line 431
c_rt_lib0clear(&___nl__im__90);
#line 432
c_rt_lib0clear(&___nl__im__54);
#line 432
//clear ___nl__int__55;
#line 432
c_rt_lib0clear(&___nl__im__56);
#line 432
//clear ___nl__bool__57;
#line 432
c_rt_lib0clear(&___nl__im__58);
#line 432
c_rt_lib0clear(&___nl__im__59);
#line 432
c_rt_lib0clear(&___nl__im__60);
#line 432
c_rt_lib0clear(&___nl__im__69);
#line 432
//clear ___nl__bool__70;
#line 432
c_rt_lib0clear(&___nl__im__71);
#line 432
c_rt_lib0clear(&___nl__im__72);
#line 432
c_rt_lib0clear(&___nl__im__81);
#line 432
//clear ___nl__bool__82;
#line 432
c_rt_lib0clear(&___nl__im__83);
#line 432
c_rt_lib0clear(&___nl__im__84);
#line 432
//clear ___nl__bool__87;
#line 432
goto label_102;
#line 433
goto label_265;
#line 433
label_265:
;
#line 433
//clear ___nl__bool__87;
#line 434
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(0));
#line 435
c_rt_lib0move(&___nl__im__95, c_rt_lib0init_iter(___nl__im__5));
#line 435
label_269:
;
#line 435
___nl__bool__93 = c_rt_lib0is_end_hash(___nl__im__95);
#line 435
if(___nl__bool__93){ goto label_305;}
#line 435
c_rt_lib0move(&___nl__im__92, c_rt_lib0get_key_iter(___nl__im__95));
#line 435
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__92));
#line 436
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(78)));
#line 436
c_rt_lib0move(&___nl__im__96, compiler_priv0parse_module(___nl__im__92, ___nl__im__97, &___nl__im__7));
#line 436
c_rt_lib0clear(&___nl__im__97);
#line 436
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__96, ___get_global_string_const(83));
#line 436
if(___nl__bool__98){ goto label_284;}
#line 439
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__96, ___get_global_string_const(82));
#line 439
if(___nl__bool__98){ goto label_290;}
#line 439
c_rt_lib0move(&___nl__im__99,___get_global_string_const(15));
#line 439
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(2, ___nl__im__99, ___nl__im__96));
#line 439
nl_die_arg(___nl__im__99);
#line 436
label_284:
;
#line 436
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__96, ___get_global_string_const(83)));
#line 436
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 437
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__92, ___nl__im__100));
#line 438
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__92, ___nl__im__100));
#line 439
goto label_295;
#line 439
label_290:
;
#line 439
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__96, ___get_global_string_const(82)));
#line 439
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 440
c_rt_lib0delete(hash0set_value(&___nl__im__91, ___nl__im__92, ___nl__im__94));
#line 441
goto label_295;
#line 441
label_295:
;
#line 441
c_rt_lib0clear(&___nl__im__96);
#line 441
//clear ___nl__bool__98;
#line 441
c_rt_lib0clear(&___nl__im__99);
#line 441
c_rt_lib0clear(&___nl__im__100);
#line 441
c_rt_lib0clear(&___nl__im__101);
#line 441
c_rt_lib0clear(&___nl__im__102);
#line 441
c_rt_lib0clear(&___nl__im__103);
#line 442
c_rt_lib0move(&___nl__im__95, c_rt_lib0next_iter(___nl__im__95));
#line 442
goto label_269;
#line 442
label_305:
;
#line 443
c_rt_lib0copy(&___nl__im__5, ___nl__im__91);
#line 444
___nl__int__105 = hash0size(___nl__im__5);
#line 444
___nl__int__106 = 0;
#line 444
___nl__bool__104 = ___nl__int__105 > ___nl__int__106;
#line 444
//clear ___nl__int__105;
#line 444
//clear ___nl__int__106;
#line 444
___nl__bool__104 = !___nl__bool__104;
#line 444
if(___nl__bool__104){ goto label_365;}
#line 445
compiler_priv0show_and_count_errors(___nl__im__7, ___nl__im__0, ___nl__im__54);
#line 446
c_rt_lib0move(&___nl__im__110, string0lf());
#line 446
c_rt_lib0move(&___nl__im__111,___get_global_string_const(146));
#line 446
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__111));
#line 446
c_rt_lib0clear(&___nl__im__110);
#line 446
c_rt_lib0clear(&___nl__im__111);
#line 446
___nl__int__112 = hash0size(___nl__im__5);
#line 446
c_rt_lib0move(&___nl__string__113, c_rt_lib0int_to_string(___nl__int__112));
#line 446
c_rt_lib0move(&___nl__im__108, c_rt_lib0concat_new(___nl__im__109, ___nl__string__113));
#line 446
c_rt_lib0clear(&___nl__im__109);
#line 446
//clear ___nl__int__112;
#line 446
c_rt_lib0clear(&___nl__string__113);
#line 446
c_rt_lib0move(&___nl__im__114,___get_global_string_const(147));
#line 446
c_rt_lib0move(&___nl__im__107, c_rt_lib0concat_new(___nl__im__108, ___nl__im__114));
#line 446
c_rt_lib0clear(&___nl__im__108);
#line 446
c_rt_lib0clear(&___nl__im__114);
#line 446
c_rt_lib0delete(c_fe_lib0print(___nl__im__107));
#line 446
c_rt_lib0clear(&___nl__im__107);
#line 447
c_rt_lib0move(&___nl__im__115,___get_global_string_const(148));
#line 447
c_rt_lib0delete(c_fe_lib0print(___nl__im__115));
#line 447
c_rt_lib0clear(&___nl__im__115);
#line 448
c_rt_lib0clear(&___nl__im__54);
#line 448
//clear ___nl__int__55;
#line 448
c_rt_lib0clear(&___nl__im__56);
#line 448
//clear ___nl__bool__57;
#line 448
c_rt_lib0clear(&___nl__im__58);
#line 448
c_rt_lib0clear(&___nl__im__59);
#line 448
c_rt_lib0clear(&___nl__im__60);
#line 448
c_rt_lib0clear(&___nl__im__69);
#line 448
//clear ___nl__bool__70;
#line 448
c_rt_lib0clear(&___nl__im__71);
#line 448
c_rt_lib0clear(&___nl__im__72);
#line 448
c_rt_lib0clear(&___nl__im__81);
#line 448
//clear ___nl__bool__82;
#line 448
c_rt_lib0clear(&___nl__im__83);
#line 448
c_rt_lib0clear(&___nl__im__84);
#line 448
c_rt_lib0clear(&___nl__im__91);
#line 448
c_rt_lib0clear(&___nl__im__92);
#line 448
//clear ___nl__bool__93;
#line 448
c_rt_lib0clear(&___nl__im__94);
#line 448
c_rt_lib0clear(&___nl__im__95);
#line 448
c_rt_lib0clear(&___nl__im__96);
#line 448
//clear ___nl__bool__98;
#line 448
c_rt_lib0clear(&___nl__im__99);
#line 448
c_rt_lib0clear(&___nl__im__100);
#line 448
c_rt_lib0clear(&___nl__im__101);
#line 448
c_rt_lib0clear(&___nl__im__102);
#line 448
c_rt_lib0clear(&___nl__im__103);
#line 448
//clear ___nl__bool__104;
#line 448
goto label_102;
#line 449
goto label_365;
#line 449
label_365:
;
#line 449
//clear ___nl__bool__104;
#line 450
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 450
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 450
___nl__bool__117 = c_rt_lib0check_true_native(___nl__im__118);
#line 450
c_rt_lib0clear(&___nl__im__118);
#line 450
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__7, ___nl__im__116, ___nl__bool__117));
#line 450
c_rt_lib0clear(&___nl__im__116);
#line 450
//clear ___nl__bool__117;
#line 451
c_rt_lib0move(&___nl__im__122, c_rt_lib0init_iter(___nl__im__2));
#line 451
label_375:
;
#line 451
___nl__bool__120 = c_rt_lib0is_end_hash(___nl__im__122);
#line 451
if(___nl__bool__120){ goto label_383;}
#line 451
c_rt_lib0move(&___nl__im__119, c_rt_lib0get_key_iter(___nl__im__122));
#line 451
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__119));
#line 452
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__119, ___nl__im__121));
#line 453
c_rt_lib0move(&___nl__im__122, c_rt_lib0next_iter(___nl__im__122));
#line 453
goto label_375;
#line 453
label_383:
;
#line 454
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_mk(0));
#line 455
c_rt_lib0move(&___nl__im__127, c_rt_lib0init_iter(___nl__im__4));
#line 455
label_386:
;
#line 455
___nl__bool__125 = c_rt_lib0is_end_hash(___nl__im__127);
#line 455
if(___nl__bool__125){ goto label_452;}
#line 455
c_rt_lib0move(&___nl__im__124, c_rt_lib0get_key_iter(___nl__im__127));
#line 455
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__124));
#line 456
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__124));
#line 456
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__124, ___nl__im__128));
#line 456
c_rt_lib0clear(&___nl__im__128);
#line 457
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_mk(0));
#line 458
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__124));
#line 458
c_rt_lib0move(&___nl__im__130, compiler_priv0get_functions(___nl__im__131));
#line 458
c_rt_lib0clear(&___nl__im__131);
#line 459
___nl__bool__132 = hash0has_key(___nl__im__46, ___nl__im__124);
#line 459
___nl__bool__132 = !___nl__bool__132;
#line 459
if(___nl__bool__132){ goto label_403;}
#line 460
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value(___nl__im__46, ___nl__im__124));
#line 461
goto label_403;
#line 461
label_403:
;
#line 461
//clear ___nl__bool__132;
#line 462
c_rt_lib0move(&___nl__im__136, c_rt_lib0init_iter(___nl__im__129));
#line 462
label_406:
;
#line 462
___nl__bool__134 = c_rt_lib0is_end_hash(___nl__im__136);
#line 462
if(___nl__bool__134){ goto label_440;}
#line 462
c_rt_lib0move(&___nl__im__133, c_rt_lib0get_key_iter(___nl__im__136));
#line 462
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value(___nl__im__129, ___nl__im__133));
#line 463
___nl__bool__137 = hash0has_key(___nl__im__130, ___nl__im__133);
#line 463
___nl__bool__138 = !___nl__bool__137;
#line 463
if(___nl__bool__138){ goto label_420;}
#line 463
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value(___nl__im__130, ___nl__im__133));
#line 463
c_rt_lib0move(&___nl__im__140, dfile0deep_eq(___nl__im__135, ___nl__im__139));
#line 463
___nl__bool__137 = c_rt_lib0check_true_native(___nl__im__140);
#line 463
c_rt_lib0clear(&___nl__im__139);
#line 463
c_rt_lib0clear(&___nl__im__140);
#line 463
___nl__bool__137 = !___nl__bool__137;
#line 463
label_420:
;
#line 463
//clear ___nl__bool__138;
#line 463
___nl__bool__137 = !___nl__bool__137;
#line 463
if(___nl__bool__137){ goto label_436;}
#line 464
___nl__int__141 = 1;
#line 464
c_rt_lib0move(&___nl__im__145,___get_global_string_const(34));
#line 464
c_rt_lib0move(&___nl__im__144, c_rt_lib0concat_new(___nl__im__124, ___nl__im__145));
#line 464
c_rt_lib0clear(&___nl__im__145);
#line 464
c_rt_lib0move(&___nl__im__143, c_rt_lib0concat_new(___nl__im__144, ___nl__im__133));
#line 464
c_rt_lib0clear(&___nl__im__144);
#line 464
c_rt_lib0move(&___nl__im__142, c_rt_lib0int_new(___nl__int__141));
#line 464
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__123, ___nl__im__143, ___nl__im__142));
#line 464
//clear ___nl__int__141;
#line 464
c_rt_lib0clear(&___nl__im__142);
#line 464
c_rt_lib0clear(&___nl__im__143);
#line 465
goto label_436;
#line 465
label_436:
;
#line 465
//clear ___nl__bool__137;
#line 466
c_rt_lib0move(&___nl__im__136, c_rt_lib0next_iter(___nl__im__136));
#line 466
goto label_406;
#line 466
label_440:
;
#line 467
c_rt_lib0copy(&___nl__im__146, ___nl__im__130);
#line 467
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__46, ___nl__im__124, ___nl__im__146));
#line 467
c_rt_lib0clear(&___nl__im__146);
#line 467
c_rt_lib0clear(&___nl__im__129);
#line 467
c_rt_lib0clear(&___nl__im__130);
#line 467
c_rt_lib0clear(&___nl__im__133);
#line 467
//clear ___nl__bool__134;
#line 467
c_rt_lib0clear(&___nl__im__135);
#line 467
c_rt_lib0clear(&___nl__im__136);
#line 468
c_rt_lib0move(&___nl__im__127, c_rt_lib0next_iter(___nl__im__127));
#line 468
goto label_386;
#line 468
label_452:
;
#line 469
___nl__int__148 = hash0size(___nl__im__123);
#line 469
___nl__int__149 = 0;
#line 469
___nl__bool__147 = ___nl__int__148 != ___nl__int__149;
#line 469
//clear ___nl__int__148;
#line 469
//clear ___nl__int__149;
#line 469
___nl__bool__147 = !___nl__bool__147;
#line 469
if(___nl__bool__147){ goto label_553;}
#line 470
c_rt_lib0move(&___nl__im__150, compiler_priv0get_files_to_parse(___nl__im__0));
#line 471
c_rt_lib0move(&___nl__im__154, c_rt_lib0init_iter(___nl__im__123));
#line 471
label_462:
;
#line 471
___nl__bool__152 = c_rt_lib0is_end_hash(___nl__im__154);
#line 471
if(___nl__bool__152){ goto label_496;}
#line 471
c_rt_lib0move(&___nl__im__151, c_rt_lib0get_key_iter(___nl__im__154));
#line 471
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value(___nl__im__123, ___nl__im__151));
#line 472
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value(___nl__im__47, ___nl__im__151));
#line 472
c_rt_lib0move(&___nl__im__159, c_rt_lib0init_iter(___nl__im__155));
#line 472
label_469:
;
#line 472
___nl__bool__157 = c_rt_lib0is_end_hash(___nl__im__159);
#line 472
if(___nl__bool__157){ goto label_487;}
#line 472
c_rt_lib0move(&___nl__im__156, c_rt_lib0get_key_iter(___nl__im__159));
#line 472
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value(___nl__im__155, ___nl__im__156));
#line 472
___nl__int__158 = getIntFromImm(___nl__im__160);
#line 473
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value(___nl__im__150, ___nl__im__156));
#line 473
c_rt_lib0copy(&___nl__im__162, ___nl__im__161);
#line 473
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__156, ___nl__im__162));
#line 473
c_rt_lib0clear(&___nl__im__161);
#line 473
c_rt_lib0clear(&___nl__im__162);
#line 474
c_rt_lib0move(&___nl__im__164,___get_global_string_const(149));
#line 474
c_rt_lib0move(&___nl__im__163, c_rt_lib0concat_new(___nl__im__164, ___nl__im__156));
#line 474
c_rt_lib0clear(&___nl__im__164);
#line 474
c_rt_lib0delete(c_fe_lib0print(___nl__im__163));
#line 474
c_rt_lib0clear(&___nl__im__163);
#line 475
c_rt_lib0move(&___nl__im__159, c_rt_lib0next_iter(___nl__im__159));
#line 475
goto label_469;
#line 475
label_487:
;
#line 475
c_rt_lib0clear(&___nl__im__155);
#line 475
c_rt_lib0clear(&___nl__im__156);
#line 475
//clear ___nl__bool__157;
#line 475
//clear ___nl__int__158;
#line 475
c_rt_lib0clear(&___nl__im__159);
#line 475
c_rt_lib0clear(&___nl__im__160);
#line 476
c_rt_lib0move(&___nl__im__154, c_rt_lib0next_iter(___nl__im__154));
#line 476
goto label_462;
#line 476
label_496:
;
#line 477
c_rt_lib0clear(&___nl__im__54);
#line 477
//clear ___nl__int__55;
#line 477
c_rt_lib0clear(&___nl__im__56);
#line 477
//clear ___nl__bool__57;
#line 477
c_rt_lib0clear(&___nl__im__58);
#line 477
c_rt_lib0clear(&___nl__im__59);
#line 477
c_rt_lib0clear(&___nl__im__60);
#line 477
c_rt_lib0clear(&___nl__im__69);
#line 477
//clear ___nl__bool__70;
#line 477
c_rt_lib0clear(&___nl__im__71);
#line 477
c_rt_lib0clear(&___nl__im__72);
#line 477
c_rt_lib0clear(&___nl__im__81);
#line 477
//clear ___nl__bool__82;
#line 477
c_rt_lib0clear(&___nl__im__83);
#line 477
c_rt_lib0clear(&___nl__im__84);
#line 477
c_rt_lib0clear(&___nl__im__91);
#line 477
c_rt_lib0clear(&___nl__im__92);
#line 477
//clear ___nl__bool__93;
#line 477
c_rt_lib0clear(&___nl__im__94);
#line 477
c_rt_lib0clear(&___nl__im__95);
#line 477
c_rt_lib0clear(&___nl__im__96);
#line 477
//clear ___nl__bool__98;
#line 477
c_rt_lib0clear(&___nl__im__99);
#line 477
c_rt_lib0clear(&___nl__im__100);
#line 477
c_rt_lib0clear(&___nl__im__101);
#line 477
c_rt_lib0clear(&___nl__im__102);
#line 477
c_rt_lib0clear(&___nl__im__103);
#line 477
c_rt_lib0clear(&___nl__im__119);
#line 477
//clear ___nl__bool__120;
#line 477
c_rt_lib0clear(&___nl__im__121);
#line 477
c_rt_lib0clear(&___nl__im__122);
#line 477
c_rt_lib0clear(&___nl__im__123);
#line 477
c_rt_lib0clear(&___nl__im__124);
#line 477
//clear ___nl__bool__125;
#line 477
c_rt_lib0clear(&___nl__im__126);
#line 477
c_rt_lib0clear(&___nl__im__127);
#line 477
c_rt_lib0clear(&___nl__im__129);
#line 477
c_rt_lib0clear(&___nl__im__130);
#line 477
c_rt_lib0clear(&___nl__im__133);
#line 477
//clear ___nl__bool__134;
#line 477
c_rt_lib0clear(&___nl__im__135);
#line 477
c_rt_lib0clear(&___nl__im__136);
#line 477
//clear ___nl__bool__147;
#line 477
c_rt_lib0clear(&___nl__im__150);
#line 477
c_rt_lib0clear(&___nl__im__151);
#line 477
//clear ___nl__bool__152;
#line 477
c_rt_lib0clear(&___nl__im__153);
#line 477
c_rt_lib0clear(&___nl__im__154);
#line 477
c_rt_lib0clear(&___nl__im__155);
#line 477
c_rt_lib0clear(&___nl__im__156);
#line 477
//clear ___nl__bool__157;
#line 477
//clear ___nl__int__158;
#line 477
c_rt_lib0clear(&___nl__im__159);
#line 477
c_rt_lib0clear(&___nl__im__160);
#line 477
goto label_102;
#line 478
goto label_553;
#line 478
label_553:
;
#line 478
//clear ___nl__bool__147;
#line 478
c_rt_lib0clear(&___nl__im__150);
#line 478
c_rt_lib0clear(&___nl__im__151);
#line 478
//clear ___nl__bool__152;
#line 478
c_rt_lib0clear(&___nl__im__153);
#line 478
c_rt_lib0clear(&___nl__im__154);
#line 478
c_rt_lib0clear(&___nl__im__155);
#line 478
c_rt_lib0clear(&___nl__im__156);
#line 478
//clear ___nl__bool__157;
#line 478
//clear ___nl__int__158;
#line 478
c_rt_lib0clear(&___nl__im__159);
#line 478
c_rt_lib0clear(&___nl__im__160);
#line 479
___nl__int__166 = compiler_priv0show_and_count_errors(___nl__im__7, ___nl__im__0, ___nl__im__54);
#line 479
___nl__int__167 = 0;
#line 479
___nl__bool__165 = ___nl__int__166 > ___nl__int__167;
#line 479
//clear ___nl__int__166;
#line 479
//clear ___nl__int__167;
#line 479
___nl__bool__165 = !___nl__bool__165;
#line 479
if(___nl__bool__165){ goto label_621;}
#line 480
c_rt_lib0move(&___nl__im__168,___get_global_string_const(148));
#line 480
c_rt_lib0delete(c_fe_lib0print(___nl__im__168));
#line 480
c_rt_lib0clear(&___nl__im__168);
#line 481
c_rt_lib0clear(&___nl__im__54);
#line 481
//clear ___nl__int__55;
#line 481
c_rt_lib0clear(&___nl__im__56);
#line 481
//clear ___nl__bool__57;
#line 481
c_rt_lib0clear(&___nl__im__58);
#line 481
c_rt_lib0clear(&___nl__im__59);
#line 481
c_rt_lib0clear(&___nl__im__60);
#line 481
c_rt_lib0clear(&___nl__im__69);
#line 481
//clear ___nl__bool__70;
#line 481
c_rt_lib0clear(&___nl__im__71);
#line 481
c_rt_lib0clear(&___nl__im__72);
#line 481
c_rt_lib0clear(&___nl__im__81);
#line 481
//clear ___nl__bool__82;
#line 481
c_rt_lib0clear(&___nl__im__83);
#line 481
c_rt_lib0clear(&___nl__im__84);
#line 481
c_rt_lib0clear(&___nl__im__91);
#line 481
c_rt_lib0clear(&___nl__im__92);
#line 481
//clear ___nl__bool__93;
#line 481
c_rt_lib0clear(&___nl__im__94);
#line 481
c_rt_lib0clear(&___nl__im__95);
#line 481
c_rt_lib0clear(&___nl__im__96);
#line 481
//clear ___nl__bool__98;
#line 481
c_rt_lib0clear(&___nl__im__99);
#line 481
c_rt_lib0clear(&___nl__im__100);
#line 481
c_rt_lib0clear(&___nl__im__101);
#line 481
c_rt_lib0clear(&___nl__im__102);
#line 481
c_rt_lib0clear(&___nl__im__103);
#line 481
c_rt_lib0clear(&___nl__im__119);
#line 481
//clear ___nl__bool__120;
#line 481
c_rt_lib0clear(&___nl__im__121);
#line 481
c_rt_lib0clear(&___nl__im__122);
#line 481
c_rt_lib0clear(&___nl__im__123);
#line 481
c_rt_lib0clear(&___nl__im__124);
#line 481
//clear ___nl__bool__125;
#line 481
c_rt_lib0clear(&___nl__im__126);
#line 481
c_rt_lib0clear(&___nl__im__127);
#line 481
c_rt_lib0clear(&___nl__im__129);
#line 481
c_rt_lib0clear(&___nl__im__130);
#line 481
c_rt_lib0clear(&___nl__im__133);
#line 481
//clear ___nl__bool__134;
#line 481
c_rt_lib0clear(&___nl__im__135);
#line 481
c_rt_lib0clear(&___nl__im__136);
#line 481
//clear ___nl__bool__165;
#line 481
goto label_102;
#line 482
goto label_621;
#line 482
label_621:
;
#line 482
//clear ___nl__bool__165;
#line 483
c_rt_lib0move(&___nl__im__172, c_rt_lib0init_iter(___nl__im__4));
#line 483
label_624:
;
#line 483
___nl__bool__170 = c_rt_lib0is_end_hash(___nl__im__172);
#line 483
if(___nl__bool__170){ goto label_634;}
#line 483
c_rt_lib0move(&___nl__im__169, c_rt_lib0get_key_iter(___nl__im__172));
#line 483
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__169));
#line 484
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__169));
#line 484
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__169, ___nl__im__173));
#line 484
c_rt_lib0clear(&___nl__im__173);
#line 485
c_rt_lib0move(&___nl__im__172, c_rt_lib0next_iter(___nl__im__172));
#line 485
goto label_624;
#line 485
label_634:
;
#line 486
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 486
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__175, ___get_global_string_const(68));
#line 486
c_rt_lib0clear(&___nl__im__175);
#line 486
if(___nl__bool__174){ goto label_642;}
#line 486
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 486
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__176, ___get_global_string_const(67));
#line 486
c_rt_lib0clear(&___nl__im__176);
#line 486
label_642:
;
#line 486
___nl__bool__174 = !___nl__bool__174;
#line 486
___nl__bool__174 = !___nl__bool__174;
#line 486
if(___nl__bool__174){ goto label_687;}
#line 487
c_rt_lib0move(&___nl__im__177,___get_global_string_const(150));
#line 487
c_rt_lib0delete(c_fe_lib0print(___nl__im__177));
#line 487
c_rt_lib0clear(&___nl__im__177);
#line 488
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_mk(0));
#line 489
c_rt_lib0move(&___nl__im__179, compiler_priv0translate(___nl__im__4, ___nl__im__3, &___nl__im__13));
#line 490
c_rt_lib0delete(compiler_priv0add_to_called_from(&___nl__im__47, ___nl__im__179));
#line 491
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 492
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 492
c_rt_lib0move(&___nl__im__180, compiler_priv0generate_modules_to_files(___nl__im__179, ___nl__im__54, ___nl__im__181, &___nl__rec__17, ___nl__im__182));
#line 492
c_rt_lib0clear(&___nl__im__181);
#line 492
c_rt_lib0clear(&___nl__im__182);
#line 492
___nl__bool__183 = c_rt_lib0priv_is(___nl__im__180, ___get_global_string_const(82));
#line 492
if(___nl__bool__183){ goto label_664;}
#line 496
___nl__bool__183 = c_rt_lib0priv_is(___nl__im__180, ___get_global_string_const(83));
#line 496
if(___nl__bool__183){ goto label_680;}
#line 496
c_rt_lib0move(&___nl__im__184,___get_global_string_const(15));
#line 496
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_mk(2, ___nl__im__184, ___nl__im__180));
#line 496
nl_die_arg(___nl__im__184);
#line 492
label_664:
;
#line 492
c_rt_lib0move(&___nl__im__186, c_rt_lib0priv_as(___nl__im__180, ___get_global_string_const(82)));
#line 492
c_rt_lib0copy(&___nl__im__185, ___nl__im__186);
#line 493
c_rt_lib0move(&___nl__im__190, c_rt_lib0init_iter(___nl__im__185));
#line 493
label_668:
;
#line 493
___nl__bool__188 = c_rt_lib0is_end_hash(___nl__im__190);
#line 493
if(___nl__bool__188){ goto label_678;}
#line 493
c_rt_lib0move(&___nl__im__187, c_rt_lib0get_key_iter(___nl__im__190));
#line 493
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_get_value(___nl__im__185, ___nl__im__187));
#line 494
c_rt_lib0move(&___nl__im__191, hash0get_value(___nl__im__2, ___nl__im__187));
#line 494
c_rt_lib0delete(hash0set_value(&___nl__im__178, ___nl__im__187, ___nl__im__191));
#line 494
c_rt_lib0clear(&___nl__im__191);
#line 495
c_rt_lib0move(&___nl__im__190, c_rt_lib0next_iter(___nl__im__190));
#line 495
goto label_668;
#line 495
label_678:
;
#line 496
goto label_684;
#line 496
label_680:
;
#line 496
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__180, ___get_global_string_const(83)));
#line 496
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 497
goto label_684;
#line 497
label_684:
;
#line 498
c_rt_lib0copy(&___nl__im__4, ___nl__im__178);
#line 499
goto label_739;
#line 499
label_687:
;
#line 500
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_mk(0));
#line 501
c_rt_lib0move(&___nl__im__198, c_rt_lib0init_iter(___nl__im__4));
#line 501
label_690:
;
#line 501
___nl__bool__196 = c_rt_lib0is_end_hash(___nl__im__198);
#line 501
if(___nl__bool__196){ goto label_736;}
#line 501
c_rt_lib0move(&___nl__im__195, c_rt_lib0get_key_iter(___nl__im__198));
#line 501
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__195));
#line 502
c_rt_lib0move(&___nl__im__200,___get_global_string_const(151));
#line 502
c_rt_lib0move(&___nl__im__199, c_rt_lib0concat_new(___nl__im__200, ___nl__im__195));
#line 502
c_rt_lib0clear(&___nl__im__200);
#line 502
c_rt_lib0delete(c_fe_lib0print(___nl__im__199));
#line 502
c_rt_lib0clear(&___nl__im__199);
#line 503
c_rt_lib0move(&___nl__im__203, hash0get_value(___nl__im__54, ___nl__im__195));
#line 503
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__203, ___get_global_string_const(79)));
#line 503
c_rt_lib0clear(&___nl__im__203);
#line 503
c_rt_lib0move(&___nl__im__201, compiler_priv0save_module_to_file(___nl__im__197, ___nl__im__202));
#line 503
c_rt_lib0clear(&___nl__im__202);
#line 503
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__201, ___get_global_string_const(82));
#line 503
if(___nl__bool__204){ goto label_712;}
#line 506
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__201, ___get_global_string_const(83));
#line 506
if(___nl__bool__204){ goto label_722;}
#line 506
c_rt_lib0move(&___nl__im__205,___get_global_string_const(15));
#line 506
c_rt_lib0move(&___nl__im__205, c_rt_lib0array_mk(2, ___nl__im__205, ___nl__im__201));
#line 506
nl_die_arg(___nl__im__205);
#line 503
label_712:
;
#line 503
c_rt_lib0move(&___nl__im__207, c_rt_lib0priv_as(___nl__im__201, ___get_global_string_const(82)));
#line 503
c_rt_lib0copy(&___nl__im__206, ___nl__im__207);
#line 504
c_rt_lib0move(&___nl__im__209,___get_global_string_const(152));
#line 504
c_rt_lib0move(&___nl__im__208, c_rt_lib0concat_new(___nl__im__209, ___nl__im__206));
#line 504
c_rt_lib0clear(&___nl__im__209);
#line 504
c_rt_lib0delete(c_fe_lib0print(___nl__im__208));
#line 504
c_rt_lib0clear(&___nl__im__208);
#line 505
c_rt_lib0delete(hash0set_value(&___nl__im__194, ___nl__im__195, ___nl__im__197));
#line 506
goto label_726;
#line 506
label_722:
;
#line 506
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__201, ___get_global_string_const(83)));
#line 506
c_rt_lib0copy(&___nl__im__210, ___nl__im__211);
#line 507
goto label_726;
#line 507
label_726:
;
#line 507
c_rt_lib0clear(&___nl__im__201);
#line 507
//clear ___nl__bool__204;
#line 507
c_rt_lib0clear(&___nl__im__205);
#line 507
c_rt_lib0clear(&___nl__im__206);
#line 507
c_rt_lib0clear(&___nl__im__207);
#line 507
c_rt_lib0clear(&___nl__im__210);
#line 507
c_rt_lib0clear(&___nl__im__211);
#line 508
c_rt_lib0move(&___nl__im__198, c_rt_lib0next_iter(___nl__im__198));
#line 508
goto label_690;
#line 508
label_736:
;
#line 509
c_rt_lib0copy(&___nl__im__4, ___nl__im__194);
#line 510
goto label_739;
#line 510
label_739:
;
#line 510
//clear ___nl__bool__174;
#line 510
c_rt_lib0clear(&___nl__im__178);
#line 510
c_rt_lib0clear(&___nl__im__179);
#line 510
c_rt_lib0clear(&___nl__im__180);
#line 510
//clear ___nl__bool__183;
#line 510
c_rt_lib0clear(&___nl__im__184);
#line 510
c_rt_lib0clear(&___nl__im__185);
#line 510
c_rt_lib0clear(&___nl__im__186);
#line 510
c_rt_lib0clear(&___nl__im__187);
#line 510
//clear ___nl__bool__188;
#line 510
c_rt_lib0clear(&___nl__im__189);
#line 510
c_rt_lib0clear(&___nl__im__190);
#line 510
c_rt_lib0clear(&___nl__im__192);
#line 510
c_rt_lib0clear(&___nl__im__193);
#line 510
c_rt_lib0clear(&___nl__im__194);
#line 510
c_rt_lib0clear(&___nl__im__195);
#line 510
//clear ___nl__bool__196;
#line 510
c_rt_lib0clear(&___nl__im__197);
#line 510
c_rt_lib0clear(&___nl__im__198);
#line 510
c_rt_lib0clear(&___nl__im__201);
#line 510
//clear ___nl__bool__204;
#line 510
c_rt_lib0clear(&___nl__im__205);
#line 510
c_rt_lib0clear(&___nl__im__206);
#line 510
c_rt_lib0clear(&___nl__im__207);
#line 510
c_rt_lib0clear(&___nl__im__210);
#line 510
c_rt_lib0clear(&___nl__im__211);
#line 511
___nl__int__213 = hash0size(___nl__im__4);
#line 511
___nl__int__214 = 0;
#line 511
___nl__bool__212 = ___nl__int__213 > ___nl__int__214;
#line 511
//clear ___nl__int__213;
#line 511
//clear ___nl__int__214;
#line 511
___nl__bool__212 = !___nl__bool__212;
#line 511
if(___nl__bool__212){ goto label_794;}
#line 512
c_rt_lib0move(&___nl__im__217,___get_global_string_const(153));
#line 512
___nl__int__218 = hash0size(___nl__im__4);
#line 512
c_rt_lib0move(&___nl__string__219, c_rt_lib0int_to_string(___nl__int__218));
#line 512
c_rt_lib0move(&___nl__im__216, c_rt_lib0concat_new(___nl__im__217, ___nl__string__219));
#line 512
c_rt_lib0clear(&___nl__im__217);
#line 512
//clear ___nl__int__218;
#line 512
c_rt_lib0clear(&___nl__string__219);
#line 512
c_rt_lib0move(&___nl__im__220,___get_global_string_const(154));
#line 512
c_rt_lib0move(&___nl__im__215, c_rt_lib0concat_new(___nl__im__216, ___nl__im__220));
#line 512
c_rt_lib0clear(&___nl__im__216);
#line 512
c_rt_lib0clear(&___nl__im__220);
#line 513
c_rt_lib0move(&___nl__im__223, string0lf());
#line 513
c_rt_lib0move(&___nl__im__224,___get_global_string_const(152));
#line 513
c_rt_lib0move(&___nl__im__222, c_rt_lib0concat_new(___nl__im__223, ___nl__im__224));
#line 513
c_rt_lib0clear(&___nl__im__223);
#line 513
c_rt_lib0clear(&___nl__im__224);
#line 513
c_rt_lib0move(&___nl__im__221, c_rt_lib0concat_new(___nl__im__222, ___nl__im__215));
#line 513
c_rt_lib0clear(&___nl__im__222);
#line 513
c_rt_lib0delete(c_fe_lib0print(___nl__im__221));
#line 513
c_rt_lib0clear(&___nl__im__221);
#line 514
goto label_818;
#line 514
label_794:
;
#line 515
c_rt_lib0move(&___nl__im__226, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 515
___nl__bool__225 = c_rt_lib0priv_is(___nl__im__226, ___get_global_string_const(93));
#line 515
c_rt_lib0clear(&___nl__im__226);
#line 515
___nl__bool__225 = !___nl__bool__225;
#line 515
if(___nl__bool__225){ goto label_808;}
#line 516
c_rt_lib0move(&___nl__im__228, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 516
c_rt_lib0move(&___nl__im__229, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 516
c_rt_lib0move(&___nl__im__227, c_rt_lib0priv_as(___nl__im__229, ___get_global_string_const(93)));
#line 516
c_rt_lib0clear(&___nl__im__228);
#line 516
c_rt_lib0clear(&___nl__im__229);
#line 516
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__227));
#line 516
c_rt_lib0clear(&___nl__im__227);
#line 517
goto label_808;
#line 517
label_808:
;
#line 517
//clear ___nl__bool__225;
#line 518
c_rt_lib0move(&___nl__im__231, string0lf());
#line 518
c_rt_lib0move(&___nl__im__232,___get_global_string_const(155));
#line 518
c_rt_lib0move(&___nl__im__230, c_rt_lib0concat_new(___nl__im__231, ___nl__im__232));
#line 518
c_rt_lib0clear(&___nl__im__231);
#line 518
c_rt_lib0clear(&___nl__im__232);
#line 518
c_rt_lib0delete(c_fe_lib0print(___nl__im__230));
#line 518
c_rt_lib0clear(&___nl__im__230);
#line 519
goto label_818;
#line 519
label_818:
;
#line 519
//clear ___nl__bool__212;
#line 519
c_rt_lib0clear(&___nl__im__215);
#line 520
c_rt_lib0move(&___nl__im__233,___get_global_string_const(148));
#line 520
c_rt_lib0delete(c_fe_lib0print(___nl__im__233));
#line 520
c_rt_lib0clear(&___nl__im__233);
#line 520
c_rt_lib0clear(&___nl__im__54);
#line 520
//clear ___nl__int__55;
#line 520
c_rt_lib0clear(&___nl__im__56);
#line 520
//clear ___nl__bool__57;
#line 520
c_rt_lib0clear(&___nl__im__58);
#line 520
c_rt_lib0clear(&___nl__im__59);
#line 520
c_rt_lib0clear(&___nl__im__60);
#line 520
c_rt_lib0clear(&___nl__im__69);
#line 520
//clear ___nl__bool__70;
#line 520
c_rt_lib0clear(&___nl__im__71);
#line 520
c_rt_lib0clear(&___nl__im__72);
#line 520
c_rt_lib0clear(&___nl__im__81);
#line 520
//clear ___nl__bool__82;
#line 520
c_rt_lib0clear(&___nl__im__83);
#line 520
c_rt_lib0clear(&___nl__im__84);
#line 520
c_rt_lib0clear(&___nl__im__91);
#line 520
c_rt_lib0clear(&___nl__im__92);
#line 520
//clear ___nl__bool__93;
#line 520
c_rt_lib0clear(&___nl__im__94);
#line 520
c_rt_lib0clear(&___nl__im__95);
#line 520
c_rt_lib0clear(&___nl__im__96);
#line 520
//clear ___nl__bool__98;
#line 520
c_rt_lib0clear(&___nl__im__99);
#line 520
c_rt_lib0clear(&___nl__im__100);
#line 520
c_rt_lib0clear(&___nl__im__101);
#line 520
c_rt_lib0clear(&___nl__im__102);
#line 520
c_rt_lib0clear(&___nl__im__103);
#line 520
c_rt_lib0clear(&___nl__im__119);
#line 520
//clear ___nl__bool__120;
#line 520
c_rt_lib0clear(&___nl__im__121);
#line 520
c_rt_lib0clear(&___nl__im__122);
#line 520
c_rt_lib0clear(&___nl__im__123);
#line 520
c_rt_lib0clear(&___nl__im__124);
#line 520
//clear ___nl__bool__125;
#line 520
c_rt_lib0clear(&___nl__im__126);
#line 520
c_rt_lib0clear(&___nl__im__127);
#line 520
c_rt_lib0clear(&___nl__im__129);
#line 520
c_rt_lib0clear(&___nl__im__130);
#line 520
c_rt_lib0clear(&___nl__im__133);
#line 520
//clear ___nl__bool__134;
#line 520
c_rt_lib0clear(&___nl__im__135);
#line 520
c_rt_lib0clear(&___nl__im__136);
#line 520
c_rt_lib0clear(&___nl__im__169);
#line 520
//clear ___nl__bool__170;
#line 520
c_rt_lib0clear(&___nl__im__171);
#line 520
c_rt_lib0clear(&___nl__im__172);
#line 391
goto label_102;
#line 391
c_rt_lib0clear(&___nl__im__0);
#line 391
c_rt_lib0clear(&___nl__im__1);
#line 391
c_rt_lib0clear(&___nl__im__2);
#line 391
c_rt_lib0clear(&___nl__im__3);
#line 391
c_rt_lib0clear(&___nl__im__4);
#line 391
c_rt_lib0clear(&___nl__im__5);
#line 391
c_rt_lib0clear(&___nl__im__6);
#line 391
c_rt_lib0clear(&___nl__im__7);
#line 391
c_rt_lib0clear(&___nl__im__13);
#line 391
c_rt_lib0clear(&___nl__im__16);
#line 391
generator_c0state_t0type0clean(___nl__rec__17);;
#line 391
c_rt_lib0clear(&___nl__im__46);
#line 391
c_rt_lib0clear(&___nl__im__47);
#line 391
c_rt_lib0clear(&___nl__im__54);
#line 391
//clear ___nl__int__55;
#line 391
c_rt_lib0clear(&___nl__im__56);
#line 391
//clear ___nl__bool__57;
#line 391
c_rt_lib0clear(&___nl__im__58);
#line 391
c_rt_lib0clear(&___nl__im__59);
#line 391
c_rt_lib0clear(&___nl__im__60);
#line 391
c_rt_lib0clear(&___nl__im__69);
#line 391
//clear ___nl__bool__70;
#line 391
c_rt_lib0clear(&___nl__im__71);
#line 391
c_rt_lib0clear(&___nl__im__72);
#line 391
c_rt_lib0clear(&___nl__im__81);
#line 391
//clear ___nl__bool__82;
#line 391
c_rt_lib0clear(&___nl__im__83);
#line 391
c_rt_lib0clear(&___nl__im__84);
#line 391
c_rt_lib0clear(&___nl__im__91);
#line 391
c_rt_lib0clear(&___nl__im__92);
#line 391
//clear ___nl__bool__93;
#line 391
c_rt_lib0clear(&___nl__im__94);
#line 391
c_rt_lib0clear(&___nl__im__95);
#line 391
c_rt_lib0clear(&___nl__im__96);
#line 391
//clear ___nl__bool__98;
#line 391
c_rt_lib0clear(&___nl__im__99);
#line 391
c_rt_lib0clear(&___nl__im__100);
#line 391
c_rt_lib0clear(&___nl__im__101);
#line 391
c_rt_lib0clear(&___nl__im__102);
#line 391
c_rt_lib0clear(&___nl__im__103);
#line 391
c_rt_lib0clear(&___nl__im__119);
#line 391
//clear ___nl__bool__120;
#line 391
c_rt_lib0clear(&___nl__im__121);
#line 391
c_rt_lib0clear(&___nl__im__122);
#line 391
c_rt_lib0clear(&___nl__im__123);
#line 391
c_rt_lib0clear(&___nl__im__124);
#line 391
//clear ___nl__bool__125;
#line 391
c_rt_lib0clear(&___nl__im__126);
#line 391
c_rt_lib0clear(&___nl__im__127);
#line 391
c_rt_lib0clear(&___nl__im__129);
#line 391
c_rt_lib0clear(&___nl__im__130);
#line 391
c_rt_lib0clear(&___nl__im__133);
#line 391
//clear ___nl__bool__134;
#line 391
c_rt_lib0clear(&___nl__im__135);
#line 391
c_rt_lib0clear(&___nl__im__136);
#line 391
c_rt_lib0clear(&___nl__im__169);
#line 391
//clear ___nl__bool__170;
#line 391
c_rt_lib0clear(&___nl__im__171);
#line 391
c_rt_lib0clear(&___nl__im__172);
#line 391
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
#line 525
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 527
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 528
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 529
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 530
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 531
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 531
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__3, ___get_global_string_const(59), ___nl__im__4, ___get_global_string_const(60), ___nl__im__5, ___get_global_string_const(61), ___nl__im__6, ___get_global_string_const(62), ___nl__im__7));
#line 531
c_rt_lib0clear(&___nl__im__3);
#line 531
c_rt_lib0clear(&___nl__im__4);
#line 531
c_rt_lib0clear(&___nl__im__5);
#line 531
c_rt_lib0clear(&___nl__im__6);
#line 531
c_rt_lib0clear(&___nl__im__7);
#line 534
c_rt_lib0move(&___nl__im__8,___get_global_string_const(156));
#line 534
c_rt_lib0delete(profile0begin(___nl__im__8));
#line 534
c_rt_lib0clear(&___nl__im__8);
#line 535
___nl__int__9 = 0;
#line 536
c_rt_lib0move(&___nl__im__10, compiler_priv0get_files_to_parse(___nl__im__0));
#line 537
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__10));
#line 537
label_18:
;
#line 537
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 537
if(___nl__bool__12){ goto label_55;}
#line 537
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 537
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__10, ___nl__im__11));
#line 538
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(78)));
#line 538
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 538
c_rt_lib0clear(&___nl__im__16);
#line 538
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 538
if(___nl__bool__17){ goto label_33;}
#line 540
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(82));
#line 540
if(___nl__bool__17){ goto label_38;}
#line 540
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 540
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 540
nl_die_arg(___nl__im__18);
#line 538
label_33:
;
#line 538
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 538
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 539
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__11, ___nl__im__19));
#line 540
goto label_45;
#line 540
label_38:
;
#line 540
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(82)));
#line 540
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 541
___nl__int__23 = 1;
#line 541
___nl__int__9 = ___nl__int__9 + ___nl__int__23;
#line 541
//clear ___nl__int__23;
#line 542
goto label_45;
#line 542
label_45:
;
#line 542
c_rt_lib0clear(&___nl__im__15);
#line 542
//clear ___nl__bool__17;
#line 542
c_rt_lib0clear(&___nl__im__18);
#line 542
c_rt_lib0clear(&___nl__im__19);
#line 542
c_rt_lib0clear(&___nl__im__20);
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 542
c_rt_lib0clear(&___nl__im__22);
#line 543
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 543
goto label_18;
#line 543
label_55:
;
#line 544
c_rt_lib0move(&___nl__im__24,___get_global_string_const(156));
#line 544
c_rt_lib0delete(profile0end(___nl__im__24));
#line 544
c_rt_lib0clear(&___nl__im__24);
#line 545
___nl__int__26 = 0;
#line 545
___nl__bool__25 = ___nl__int__9 != ___nl__int__26;
#line 545
//clear ___nl__int__26;
#line 545
___nl__bool__25 = !___nl__bool__25;
#line 545
if(___nl__bool__25){ goto label_85;}
#line 546
compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 547
___nl__int__27 = 1;
#line 547
c_rt_lib0clear(&___nl__im__0);
#line 547
c_rt_lib0clear(&___nl__im__1);
#line 547
c_rt_lib0clear(&___nl__im__2);
#line 547
//clear ___nl__int__9;
#line 547
c_rt_lib0clear(&___nl__im__10);
#line 547
c_rt_lib0clear(&___nl__im__11);
#line 547
//clear ___nl__bool__12;
#line 547
c_rt_lib0clear(&___nl__im__13);
#line 547
c_rt_lib0clear(&___nl__im__14);
#line 547
c_rt_lib0clear(&___nl__im__15);
#line 547
//clear ___nl__bool__17;
#line 547
c_rt_lib0clear(&___nl__im__18);
#line 547
c_rt_lib0clear(&___nl__im__19);
#line 547
c_rt_lib0clear(&___nl__im__20);
#line 547
c_rt_lib0clear(&___nl__im__21);
#line 547
c_rt_lib0clear(&___nl__im__22);
#line 547
//clear ___nl__bool__25;
#line 547
return ___nl__int__27;
#line 548
goto label_85;
#line 548
label_85:
;
#line 548
//clear ___nl__bool__25;
#line 548
//clear ___nl__int__27;
#line 550
c_rt_lib0move(&___nl__im__28,___get_global_string_const(157));
#line 550
c_rt_lib0delete(profile0begin(___nl__im__28));
#line 550
c_rt_lib0clear(&___nl__im__28);
#line 551
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 551
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 551
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 551
c_rt_lib0clear(&___nl__im__31);
#line 551
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__29, ___nl__bool__30));
#line 551
c_rt_lib0clear(&___nl__im__29);
#line 551
//clear ___nl__bool__30;
#line 552
c_rt_lib0move(&___nl__im__32,___get_global_string_const(158));
#line 552
c_rt_lib0delete(profile0end(___nl__im__32));
#line 552
c_rt_lib0clear(&___nl__im__32);
#line 553
c_rt_lib0move(&___nl__im__34,___get_global_string_const(159));
#line 553
___nl__bool__33 = hash0has_key(___nl__im__1, ___nl__im__34);
#line 553
c_rt_lib0clear(&___nl__im__34);
#line 553
___nl__bool__33 = !___nl__bool__33;
#line 553
if(___nl__bool__33){ goto label_114;}
#line 554
c_rt_lib0move(&___nl__im__35,___get_global_string_const(160));
#line 554
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(159)));
#line 554
c_rt_lib0move(&___nl__im__36, dfile_dbg0ssave(___nl__im__37));
#line 554
c_rt_lib0clear(&___nl__im__37);
#line 554
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__35, ___nl__im__36));
#line 554
c_rt_lib0clear(&___nl__im__35);
#line 554
c_rt_lib0clear(&___nl__im__36);
#line 555
goto label_114;
#line 555
label_114:
;
#line 555
//clear ___nl__bool__33;
#line 556
___nl__int__39 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 556
___nl__int__40 = 0;
#line 556
___nl__bool__38 = ___nl__int__39 > ___nl__int__40;
#line 556
//clear ___nl__int__39;
#line 556
//clear ___nl__int__40;
#line 556
___nl__bool__38 = !___nl__bool__38;
#line 556
if(___nl__bool__38){ goto label_143;}
#line 557
___nl__int__41 = 1;
#line 557
c_rt_lib0clear(&___nl__im__0);
#line 557
c_rt_lib0clear(&___nl__im__1);
#line 557
c_rt_lib0clear(&___nl__im__2);
#line 557
//clear ___nl__int__9;
#line 557
c_rt_lib0clear(&___nl__im__10);
#line 557
c_rt_lib0clear(&___nl__im__11);
#line 557
//clear ___nl__bool__12;
#line 557
c_rt_lib0clear(&___nl__im__13);
#line 557
c_rt_lib0clear(&___nl__im__14);
#line 557
c_rt_lib0clear(&___nl__im__15);
#line 557
//clear ___nl__bool__17;
#line 557
c_rt_lib0clear(&___nl__im__18);
#line 557
c_rt_lib0clear(&___nl__im__19);
#line 557
c_rt_lib0clear(&___nl__im__20);
#line 557
c_rt_lib0clear(&___nl__im__21);
#line 557
c_rt_lib0clear(&___nl__im__22);
#line 557
//clear ___nl__bool__38;
#line 557
return ___nl__int__41;
#line 558
goto label_143;
#line 558
label_143:
;
#line 558
//clear ___nl__bool__38;
#line 558
//clear ___nl__int__41;
#line 559
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 559
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(68));
#line 559
c_rt_lib0clear(&___nl__im__43);
#line 559
if(___nl__bool__42){ goto label_153;}
#line 559
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 559
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(67));
#line 559
c_rt_lib0clear(&___nl__im__44);
#line 559
label_153:
;
#line 559
___nl__bool__42 = !___nl__bool__42;
#line 559
___nl__bool__42 = !___nl__bool__42;
#line 559
if(___nl__bool__42){ goto label_282;}
#line 560
c_rt_lib0move(&___nl__im__45,___get_global_string_const(161));
#line 560
c_rt_lib0delete(profile0begin(___nl__im__45));
#line 560
c_rt_lib0clear(&___nl__im__45);
#line 561
;
#line 561
___nl__im_ptr__47 = &(___nl__rec__46.global_int_const0field);
#line 562
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 562
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 562
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 562
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 562
c_rt_lib0move(___nl__im_ptr__47, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__48, ___get_global_string_const(142), ___nl__im__49, ___get_global_string_const(143), ___nl__im__50, ___get_global_string_const(144), ___nl__im__51));
#line 562
c_rt_lib0clear(&___nl__im__48);
#line 562
c_rt_lib0clear(&___nl__im__49);
#line 562
c_rt_lib0clear(&___nl__im__50);
#line 562
c_rt_lib0clear(&___nl__im__51);
#line 562
___nl__im_ptr__47 = NULL;
#line 562
___nl__im_ptr__52 = &(___nl__rec__46.global_string_const0field);
#line 563
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 563
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 563
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(0));
#line 563
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 563
c_rt_lib0move(___nl__im_ptr__52, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__53, ___get_global_string_const(142), ___nl__im__54, ___get_global_string_const(143), ___nl__im__55, ___get_global_string_const(144), ___nl__im__56));
#line 563
c_rt_lib0clear(&___nl__im__53);
#line 563
c_rt_lib0clear(&___nl__im__54);
#line 563
c_rt_lib0clear(&___nl__im__55);
#line 563
c_rt_lib0clear(&___nl__im__56);
#line 563
___nl__im_ptr__52 = NULL;
#line 563
___nl__im_ptr__57 = &(___nl__rec__46.ret0field);
#line 564
c_rt_lib0move(___nl__im_ptr__57,___get_global_string_const(36));
#line 564
___nl__im_ptr__57 = NULL;
#line 564
___nl__im_ptr__58 = &(___nl__rec__46.header0field);
#line 565
c_rt_lib0move(___nl__im_ptr__58,___get_global_string_const(36));
#line 565
___nl__im_ptr__58 = NULL;
#line 565
___nl__im_ptr__59 = &(___nl__rec__46.fun_args0field);
#line 566
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0array_mk(0));
#line 566
___nl__im_ptr__59 = NULL;
#line 566
___nl__im_ptr__60 = &(___nl__rec__46.ret_reg_type0field);
#line 567
c_rt_lib0move(___nl__im_ptr__60, c_rt_lib0ov_mk_none(___get_global_string_const(145)));
#line 567
___nl__im_ptr__60 = NULL;
#line 567
___nl__rec_ptr__61 = &(___nl__rec__46.const0field);
#line 568
;
#line 568
___nl__int_ptr__62 = &(___nl__rec_ptr__61->dynamic_nr0field);
#line 569
(*___nl__int_ptr__62) = 0;
#line 569
___nl__int_ptr__62 = NULL;
#line 569
___nl__rec_ptr__63 = &(___nl__rec_ptr__61->int0field);
#line 570
;
#line 570
___nl__arr_ptr__64 = &(___nl__rec_ptr__63->arr0field);
#line 570
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__64));
(*___nl__arr_ptr__64).size = 0;
(*___nl__arr_ptr__64).capacity = 0;
(*___nl__arr_ptr__64).value = NULL;
#line 570
___nl__arr_ptr__64 = NULL;
#line 570
___nl__im_ptr__65 = &(___nl__rec_ptr__63->hash0field);
#line 570
c_rt_lib0move(___nl__im_ptr__65, c_rt_lib0hash_mk(0));
#line 570
___nl__im_ptr__65 = NULL;
#line 570
___nl__rec_ptr__63 = NULL;
#line 570
___nl__rec_ptr__66 = &(___nl__rec_ptr__61->string0field);
#line 571
;
#line 571
___nl__arr_ptr__67 = &(___nl__rec_ptr__66->arr0field);
#line 571
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__67));
(*___nl__arr_ptr__67).size = 0;
(*___nl__arr_ptr__67).capacity = 0;
(*___nl__arr_ptr__67).value = NULL;
#line 571
___nl__arr_ptr__67 = NULL;
#line 571
___nl__im_ptr__68 = &(___nl__rec_ptr__66->hash0field);
#line 571
c_rt_lib0move(___nl__im_ptr__68, c_rt_lib0hash_mk(0));
#line 571
___nl__im_ptr__68 = NULL;
#line 571
___nl__rec_ptr__66 = NULL;
#line 571
___nl__rec_ptr__69 = &(___nl__rec_ptr__61->singleton0field);
#line 572
;
#line 572
___nl__arr_ptr__70 = &(___nl__rec_ptr__69->arr0field);
#line 572
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__70));
(*___nl__arr_ptr__70).size = 0;
(*___nl__arr_ptr__70).capacity = 0;
(*___nl__arr_ptr__70).value = NULL;
#line 572
___nl__arr_ptr__70 = NULL;
#line 572
___nl__im_ptr__71 = &(___nl__rec_ptr__69->hash0field);
#line 572
c_rt_lib0move(___nl__im_ptr__71, c_rt_lib0hash_mk(0));
#line 572
___nl__im_ptr__71 = NULL;
#line 572
___nl__rec_ptr__69 = NULL;
#line 572
___nl__rec_ptr__61 = NULL;
#line 572
___nl__im_ptr__72 = &(___nl__rec__46.mod_name0field);
#line 574
c_rt_lib0move(___nl__im_ptr__72,___get_global_string_const(36));
#line 574
___nl__im_ptr__72 = NULL;
#line 574
___nl__hash_ptr__73 = &(___nl__rec__46.additional_imports0field);
#line 575
compiler0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__73));
(*___nl__hash_ptr__73).size = 0;
(*___nl__hash_ptr__73).capacity = 0;
(*___nl__hash_ptr__73).keys = NULL;
(*___nl__hash_ptr__73).values = NULL;
#line 575
___nl__hash_ptr__73 = NULL;
#line 575
___nl__im_ptr__74 = &(___nl__rec__46.defined_types0field);
#line 576
c_rt_lib0move(___nl__im_ptr__74, c_rt_lib0hash_mk(0));
#line 576
___nl__im_ptr__74 = NULL;
#line 578
c_rt_lib0move(&___nl__im__75,___get_global_string_const(150));
#line 578
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 578
c_rt_lib0clear(&___nl__im__75);
#line 579
c_rt_lib0move(&___nl__im__77, compiler_priv0get_mathematical_func(___nl__im__0));
#line 579
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 579
c_rt_lib0move(&___nl__im__76, post_processing0init(___nl__im__77, ___nl__im__78));
#line 579
c_rt_lib0clear(&___nl__im__77);
#line 579
c_rt_lib0clear(&___nl__im__78);
#line 580
c_rt_lib0move(&___nl__im__79,___get_global_string_const(161));
#line 580
c_rt_lib0delete(profile0end(___nl__im__79));
#line 580
c_rt_lib0clear(&___nl__im__79);
#line 582
c_rt_lib0move(&___nl__im__80,___get_global_string_const(162));
#line 582
c_rt_lib0delete(profile0begin(___nl__im__80));
#line 582
c_rt_lib0clear(&___nl__im__80);
#line 583
c_rt_lib0move(&___nl__im__81, compiler_priv0translate(___nl__im__1, ___nl__im__1, &___nl__im__76));
#line 584
c_rt_lib0move(&___nl__im__82,___get_global_string_const(162));
#line 584
c_rt_lib0delete(profile0end(___nl__im__82));
#line 584
c_rt_lib0clear(&___nl__im__82);
#line 586
c_rt_lib0move(&___nl__im__84,___get_global_string_const(159));
#line 586
___nl__bool__83 = hash0has_key(___nl__im__81, ___nl__im__84);
#line 586
c_rt_lib0clear(&___nl__im__84);
#line 586
___nl__bool__83 = !___nl__bool__83;
#line 586
if(___nl__bool__83){ goto label_268;}
#line 587
c_rt_lib0move(&___nl__im__85,___get_global_string_const(163));
#line 587
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(159)));
#line 587
c_rt_lib0move(&___nl__im__86, dfile_dbg0ssave(___nl__im__87));
#line 587
c_rt_lib0clear(&___nl__im__87);
#line 587
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__85, ___nl__im__86));
#line 587
c_rt_lib0clear(&___nl__im__85);
#line 587
c_rt_lib0clear(&___nl__im__86);
#line 588
goto label_268;
#line 588
label_268:
;
#line 588
//clear ___nl__bool__83;
#line 590
c_rt_lib0move(&___nl__im__88,___get_global_string_const(164));
#line 590
c_rt_lib0delete(profile0begin(___nl__im__88));
#line 590
c_rt_lib0clear(&___nl__im__88);
#line 591
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 591
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 591
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__81, ___nl__im__10, ___nl__im__89, &___nl__rec__46, ___nl__im__90));
#line 591
c_rt_lib0clear(&___nl__im__89);
#line 591
c_rt_lib0clear(&___nl__im__90);
#line 592
c_rt_lib0move(&___nl__im__91,___get_global_string_const(164));
#line 592
c_rt_lib0delete(profile0end(___nl__im__91));
#line 592
c_rt_lib0clear(&___nl__im__91);
#line 593
goto label_363;
#line 593
label_282:
;
#line 594
c_rt_lib0move(&___nl__im__95, c_rt_lib0init_iter(___nl__im__1));
#line 594
label_284:
;
#line 594
___nl__bool__93 = c_rt_lib0is_end_hash(___nl__im__95);
#line 594
if(___nl__bool__93){ goto label_361;}
#line 594
c_rt_lib0move(&___nl__im__92, c_rt_lib0get_key_iter(___nl__im__95));
#line 594
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__92));
#line 595
c_rt_lib0move(&___nl__im__97,___get_global_string_const(151));
#line 595
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__92));
#line 595
c_rt_lib0clear(&___nl__im__97);
#line 595
c_rt_lib0delete(c_fe_lib0print(___nl__im__96));
#line 595
c_rt_lib0clear(&___nl__im__96);
#line 596
c_rt_lib0move(&___nl__im__100, hash0get_value(___nl__im__10, ___nl__im__92));
#line 596
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(79)));
#line 596
c_rt_lib0clear(&___nl__im__100);
#line 596
c_rt_lib0move(&___nl__im__98, compiler_priv0save_module_to_file(___nl__im__94, ___nl__im__99));
#line 596
c_rt_lib0clear(&___nl__im__99);
#line 596
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(82));
#line 596
if(___nl__bool__101){ goto label_306;}
#line 599
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 599
if(___nl__bool__101){ goto label_346;}
#line 599
c_rt_lib0move(&___nl__im__102,___get_global_string_const(15));
#line 599
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(2, ___nl__im__102, ___nl__im__98));
#line 599
nl_die_arg(___nl__im__102);
#line 596
label_306:
;
#line 596
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(82)));
#line 596
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 597
c_rt_lib0move(&___nl__im__106,___get_global_string_const(152));
#line 597
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__103));
#line 597
c_rt_lib0clear(&___nl__im__106);
#line 597
c_rt_lib0delete(c_fe_lib0print(___nl__im__105));
#line 597
c_rt_lib0clear(&___nl__im__105);
#line 598
___nl__int__107 = 1;
#line 598
c_rt_lib0clear(&___nl__im__0);
#line 598
c_rt_lib0clear(&___nl__im__1);
#line 598
c_rt_lib0clear(&___nl__im__2);
#line 598
//clear ___nl__int__9;
#line 598
c_rt_lib0clear(&___nl__im__10);
#line 598
c_rt_lib0clear(&___nl__im__11);
#line 598
//clear ___nl__bool__12;
#line 598
c_rt_lib0clear(&___nl__im__13);
#line 598
c_rt_lib0clear(&___nl__im__14);
#line 598
c_rt_lib0clear(&___nl__im__15);
#line 598
//clear ___nl__bool__17;
#line 598
c_rt_lib0clear(&___nl__im__18);
#line 598
c_rt_lib0clear(&___nl__im__19);
#line 598
c_rt_lib0clear(&___nl__im__20);
#line 598
c_rt_lib0clear(&___nl__im__21);
#line 598
c_rt_lib0clear(&___nl__im__22);
#line 598
//clear ___nl__bool__42;
#line 598
generator_c0state_t0type0clean(___nl__rec__46);;
#line 598
c_rt_lib0clear(&___nl__im__76);
#line 598
c_rt_lib0clear(&___nl__im__81);
#line 598
c_rt_lib0clear(&___nl__im__92);
#line 598
//clear ___nl__bool__93;
#line 598
c_rt_lib0clear(&___nl__im__94);
#line 598
c_rt_lib0clear(&___nl__im__95);
#line 598
c_rt_lib0clear(&___nl__im__98);
#line 598
//clear ___nl__bool__101;
#line 598
c_rt_lib0clear(&___nl__im__102);
#line 598
c_rt_lib0clear(&___nl__im__103);
#line 598
c_rt_lib0clear(&___nl__im__104);
#line 598
return ___nl__int__107;
#line 599
goto label_350;
#line 599
label_346:
;
#line 599
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(83)));
#line 599
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 600
goto label_350;
#line 600
label_350:
;
#line 600
c_rt_lib0clear(&___nl__im__98);
#line 600
//clear ___nl__bool__101;
#line 600
c_rt_lib0clear(&___nl__im__102);
#line 600
c_rt_lib0clear(&___nl__im__103);
#line 600
c_rt_lib0clear(&___nl__im__104);
#line 600
//clear ___nl__int__107;
#line 600
c_rt_lib0clear(&___nl__im__108);
#line 600
c_rt_lib0clear(&___nl__im__109);
#line 601
c_rt_lib0move(&___nl__im__95, c_rt_lib0next_iter(___nl__im__95));
#line 601
goto label_284;
#line 601
label_361:
;
#line 602
goto label_363;
#line 602
label_363:
;
#line 602
//clear ___nl__bool__42;
#line 602
generator_c0state_t0type0clean(___nl__rec__46);;
#line 602
c_rt_lib0clear(&___nl__im__76);
#line 602
c_rt_lib0clear(&___nl__im__81);
#line 602
c_rt_lib0clear(&___nl__im__92);
#line 602
//clear ___nl__bool__93;
#line 602
c_rt_lib0clear(&___nl__im__94);
#line 602
c_rt_lib0clear(&___nl__im__95);
#line 602
c_rt_lib0clear(&___nl__im__98);
#line 602
//clear ___nl__bool__101;
#line 602
c_rt_lib0clear(&___nl__im__102);
#line 602
c_rt_lib0clear(&___nl__im__103);
#line 602
c_rt_lib0clear(&___nl__im__104);
#line 602
//clear ___nl__int__107;
#line 602
c_rt_lib0clear(&___nl__im__108);
#line 602
c_rt_lib0clear(&___nl__im__109);
#line 603
___nl__int__110 = 0;
#line 603
c_rt_lib0clear(&___nl__im__0);
#line 603
c_rt_lib0clear(&___nl__im__1);
#line 603
c_rt_lib0clear(&___nl__im__2);
#line 603
//clear ___nl__int__9;
#line 603
c_rt_lib0clear(&___nl__im__10);
#line 603
c_rt_lib0clear(&___nl__im__11);
#line 603
//clear ___nl__bool__12;
#line 603
c_rt_lib0clear(&___nl__im__13);
#line 603
c_rt_lib0clear(&___nl__im__14);
#line 603
c_rt_lib0clear(&___nl__im__15);
#line 603
//clear ___nl__bool__17;
#line 603
c_rt_lib0clear(&___nl__im__18);
#line 603
c_rt_lib0clear(&___nl__im__19);
#line 603
c_rt_lib0clear(&___nl__im__20);
#line 603
c_rt_lib0clear(&___nl__im__21);
#line 603
c_rt_lib0clear(&___nl__im__22);
#line 603
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
#line 607
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 611
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 611
___nl__int__4 = string0length(___nl__im__5);
#line 611
c_rt_lib0clear(&___nl__im__5);
#line 611
___nl__int__6 = 0;
#line 611
___nl__bool__3 = ___nl__int__4 == ___nl__int__6;
#line 611
//clear ___nl__int__4;
#line 611
//clear ___nl__int__6;
#line 611
___nl__bool__3 = !___nl__bool__3;
#line 611
___nl__bool__3 = !___nl__bool__3;
#line 611
if(___nl__bool__3){ goto label_32;}
#line 608
c_rt_lib0move(&___nl__im__8,___get_global_string_const(166));
#line 608
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 608
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 608
c_rt_lib0clear(&___nl__im__11);
#line 608
if(___nl__bool__10){ goto label_18;}
#line 610
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 610
goto label_24;
#line 610
label_18:
;
#line 609
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(165)));
#line 609
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__1, ___nl__im__13));
#line 609
c_rt_lib0clear(&___nl__im__13);
#line 609
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(78)));
#line 609
c_rt_lib0clear(&___nl__im__12);
#line 609
label_24:
;
#line 609
//clear ___nl__bool__10;
#line 609
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 609
c_rt_lib0clear(&___nl__im__8);
#line 609
c_rt_lib0clear(&___nl__im__9);
#line 609
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__7));
#line 609
c_rt_lib0clear(&___nl__im__7);
#line 609
goto label_32;
#line 609
label_32:
;
#line 609
//clear ___nl__bool__3;
#line 612
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
#line 612
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 612
c_rt_lib0clear(&___nl__im__16);
#line 612
___nl__int__17 = 1;
#line 612
___nl__int__17 = -___nl__int__17;
#line 612
___nl__bool__14 = ___nl__int__15 == ___nl__int__17;
#line 612
//clear ___nl__int__15;
#line 612
//clear ___nl__int__17;
#line 612
___nl__bool__14 = !___nl__bool__14;
#line 612
___nl__bool__14 = !___nl__bool__14;
#line 612
if(___nl__bool__14){ goto label_57;}
#line 612
c_rt_lib0move(&___nl__im__19,___get_global_string_const(168));
#line 612
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
#line 612
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 612
c_rt_lib0clear(&___nl__im__21);
#line 612
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 612
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 612
c_rt_lib0clear(&___nl__im__19);
#line 612
//clear ___nl__int__20;
#line 612
c_rt_lib0clear(&___nl__string__22);
#line 612
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 612
c_rt_lib0clear(&___nl__im__18);
#line 612
goto label_57;
#line 612
label_57:
;
#line 612
//clear ___nl__bool__14;
#line 613
c_rt_lib0move(&___nl__im__25, string0lf());
#line 613
c_rt_lib0move(&___nl__im__26,___get_global_string_const(169));
#line 613
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 613
c_rt_lib0clear(&___nl__im__25);
#line 613
c_rt_lib0clear(&___nl__im__26);
#line 613
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(170)));
#line 613
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 613
c_rt_lib0clear(&___nl__im__24);
#line 613
c_rt_lib0clear(&___nl__im__27);
#line 613
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 613
c_rt_lib0clear(&___nl__im__23);
#line 614
c_rt_lib0clear(&___nl__im__0);
#line 614
c_rt_lib0clear(&___nl__im__1);
#line 614
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
#line 618
___nl__int__3 = 0;
#line 619
___nl__int__4 = 0;
#line 620
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 620
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 620
label_4:
;
#line 620
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 620
if(___nl__bool__7){ goto label_159;}
#line 620
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 620
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 621
c_rt_lib0move(&___nl__im__10,___get_global_string_const(171));
#line 622
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 622
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(96));
#line 622
c_rt_lib0clear(&___nl__im__12);
#line 622
___nl__bool__11 = !___nl__bool__11;
#line 622
if(___nl__bool__11){ goto label_17;}
#line 622
c_rt_lib0move(&___nl__im__10,___get_global_string_const(172));
#line 622
goto label_17;
#line 622
label_17:
;
#line 622
//clear ___nl__bool__11;
#line 623
___nl__int__14 = 0;
#line 623
___nl__int__15 = 1;
#line 623
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 623
label_22:
;
#line 623
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 623
if(___nl__bool__17){ goto label_35;}
#line 623
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 623
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 624
c_rt_lib0move(&___nl__im__20, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 624
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__10, ___nl__im__20));
#line 624
c_rt_lib0clear(&___nl__im__20);
#line 624
c_rt_lib0delete(c_fe_lib0print(___nl__im__19));
#line 624
c_rt_lib0clear(&___nl__im__19);
#line 624
c_rt_lib0clear(&___nl__im__13);
#line 625
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 625
goto label_22;
#line 625
label_35:
;
#line 626
___nl__int__21 = c_rt_lib0array_len(___nl__im__8);
#line 626
___nl__int__3 = ___nl__int__3 + ___nl__int__21;
#line 626
//clear ___nl__int__21;
#line 627
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 627
___nl__bool__22 = hash0has_key(___nl__im__23, ___nl__im__6);
#line 627
c_rt_lib0clear(&___nl__im__23);
#line 627
___nl__bool__22 = !___nl__bool__22;
#line 627
if(___nl__bool__22){ goto label_68;}
#line 628
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 628
c_rt_lib0move(&___nl__im__24, hash0get_value(___nl__im__25, ___nl__im__6));
#line 628
c_rt_lib0clear(&___nl__im__25);
#line 629
___nl__int__27 = 0;
#line 629
___nl__int__28 = 1;
#line 629
___nl__int__29 = c_rt_lib0array_len(___nl__im__24);
#line 629
label_50:
;
#line 629
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 629
if(___nl__bool__30){ goto label_63;}
#line 629
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__24, ___nl__int__27));
#line 629
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 630
c_rt_lib0move(&___nl__im__33, compiler_priv0construct_error_message(___nl__im__26, ___nl__im__2));
#line 630
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__10, ___nl__im__33));
#line 630
c_rt_lib0clear(&___nl__im__33);
#line 630
c_rt_lib0delete(c_fe_lib0print(___nl__im__32));
#line 630
c_rt_lib0clear(&___nl__im__32);
#line 630
c_rt_lib0clear(&___nl__im__26);
#line 631
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 631
goto label_50;
#line 631
label_63:
;
#line 632
___nl__int__34 = c_rt_lib0array_len(___nl__im__24);
#line 632
___nl__int__3 = ___nl__int__3 + ___nl__int__34;
#line 632
//clear ___nl__int__34;
#line 633
goto label_68;
#line 633
label_68:
;
#line 633
//clear ___nl__bool__22;
#line 633
c_rt_lib0clear(&___nl__im__24);
#line 633
c_rt_lib0clear(&___nl__im__26);
#line 633
//clear ___nl__int__27;
#line 633
//clear ___nl__int__28;
#line 633
//clear ___nl__int__29;
#line 633
//clear ___nl__bool__30;
#line 633
c_rt_lib0clear(&___nl__im__31);
#line 634
c_rt_lib0move(&___nl__im__10,___get_global_string_const(172));
#line 635
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(58)));
#line 635
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__36, ___nl__im__6));
#line 635
c_rt_lib0clear(&___nl__im__36);
#line 636
___nl__int__38 = 0;
#line 636
___nl__int__39 = 1;
#line 636
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 636
label_84:
;
#line 636
___nl__bool__41 = ___nl__int__38 >= ___nl__int__40;
#line 636
if(___nl__bool__41){ goto label_99;}
#line 636
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 636
c_rt_lib0copy(&___nl__im__37, ___nl__im__42);
#line 637
c_rt_lib0move(&___nl__im__44,___get_global_string_const(172));
#line 637
c_rt_lib0move(&___nl__im__45, compiler_priv0construct_error_message(___nl__im__37, ___nl__im__2));
#line 637
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__45));
#line 637
c_rt_lib0clear(&___nl__im__44);
#line 637
c_rt_lib0clear(&___nl__im__45);
#line 637
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 637
c_rt_lib0clear(&___nl__im__43);
#line 637
c_rt_lib0clear(&___nl__im__37);
#line 638
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 638
goto label_84;
#line 638
label_99:
;
#line 639
___nl__int__46 = c_rt_lib0array_len(___nl__im__35);
#line 639
___nl__int__4 = ___nl__int__4 + ___nl__int__46;
#line 639
//clear ___nl__int__46;
#line 640
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 640
___nl__bool__47 = hash0has_key(___nl__im__48, ___nl__im__6);
#line 640
c_rt_lib0clear(&___nl__im__48);
#line 640
___nl__bool__47 = !___nl__bool__47;
#line 640
if(___nl__bool__47){ goto label_134;}
#line 641
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 641
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__50, ___nl__im__6));
#line 641
c_rt_lib0clear(&___nl__im__50);
#line 642
___nl__int__52 = 0;
#line 642
___nl__int__53 = 1;
#line 642
___nl__int__54 = c_rt_lib0array_len(___nl__im__49);
#line 642
label_114:
;
#line 642
___nl__bool__55 = ___nl__int__52 >= ___nl__int__54;
#line 642
if(___nl__bool__55){ goto label_129;}
#line 642
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__49, ___nl__int__52));
#line 642
c_rt_lib0copy(&___nl__im__51, ___nl__im__56);
#line 643
c_rt_lib0move(&___nl__im__58,___get_global_string_const(172));
#line 643
c_rt_lib0move(&___nl__im__59, compiler_priv0construct_error_message(___nl__im__51, ___nl__im__2));
#line 643
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 643
c_rt_lib0clear(&___nl__im__58);
#line 643
c_rt_lib0clear(&___nl__im__59);
#line 643
c_rt_lib0delete(c_fe_lib0print(___nl__im__57));
#line 643
c_rt_lib0clear(&___nl__im__57);
#line 643
c_rt_lib0clear(&___nl__im__51);
#line 644
___nl__int__52 = ___nl__int__52 + ___nl__int__53;
#line 644
goto label_114;
#line 644
label_129:
;
#line 645
___nl__int__60 = c_rt_lib0array_len(___nl__im__49);
#line 645
___nl__int__4 = ___nl__int__4 + ___nl__int__60;
#line 645
//clear ___nl__int__60;
#line 646
goto label_134;
#line 646
label_134:
;
#line 646
//clear ___nl__bool__47;
#line 646
c_rt_lib0clear(&___nl__im__49);
#line 646
c_rt_lib0clear(&___nl__im__51);
#line 646
//clear ___nl__int__52;
#line 646
//clear ___nl__int__53;
#line 646
//clear ___nl__int__54;
#line 646
//clear ___nl__bool__55;
#line 646
c_rt_lib0clear(&___nl__im__56);
#line 646
c_rt_lib0clear(&___nl__im__10);
#line 646
c_rt_lib0clear(&___nl__im__13);
#line 646
//clear ___nl__int__14;
#line 646
//clear ___nl__int__15;
#line 646
//clear ___nl__int__16;
#line 646
//clear ___nl__bool__17;
#line 646
c_rt_lib0clear(&___nl__im__18);
#line 646
c_rt_lib0clear(&___nl__im__35);
#line 646
c_rt_lib0clear(&___nl__im__37);
#line 646
//clear ___nl__int__38;
#line 646
//clear ___nl__int__39;
#line 646
//clear ___nl__int__40;
#line 646
//clear ___nl__bool__41;
#line 646
c_rt_lib0clear(&___nl__im__42);
#line 647
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 647
goto label_4;
#line 647
label_159:
;
#line 648
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 648
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(173));
#line 648
if(___nl__bool__62){ goto label_168;}
#line 655
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(83));
#line 655
if(___nl__bool__62){ goto label_202;}
#line 655
c_rt_lib0move(&___nl__im__63,___get_global_string_const(15));
#line 655
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__61));
#line 655
nl_die_arg(___nl__im__63);
#line 648
label_168:
;
#line 648
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__61, ___get_global_string_const(173)));
#line 648
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 649
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 650
___nl__int__68 = 0;
#line 650
___nl__int__69 = 1;
#line 650
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 650
label_175:
;
#line 650
___nl__bool__71 = ___nl__int__68 >= ___nl__int__70;
#line 650
if(___nl__bool__71){ goto label_188;}
#line 650
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__68));
#line 650
c_rt_lib0copy(&___nl__im__67, ___nl__im__72);
#line 651
c_rt_lib0move(&___nl__im__74,___get_global_string_const(174));
#line 651
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__67, ___nl__im__74));
#line 651
c_rt_lib0clear(&___nl__im__74);
#line 651
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__73));
#line 651
c_rt_lib0clear(&___nl__im__73);
#line 651
c_rt_lib0clear(&___nl__im__67);
#line 652
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 652
goto label_175;
#line 652
label_188:
;
#line 653
c_rt_lib0move(&___nl__im__77,___get_global_string_const(175));
#line 653
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__66));
#line 653
c_rt_lib0clear(&___nl__im__77);
#line 653
c_rt_lib0move(&___nl__im__78,___get_global_string_const(176));
#line 653
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 653
c_rt_lib0clear(&___nl__im__76);
#line 653
c_rt_lib0clear(&___nl__im__78);
#line 653
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 653
c_rt_lib0clear(&___nl__im__75);
#line 654
___nl__int__79 = 1;
#line 654
___nl__int__4 = ___nl__int__4 + ___nl__int__79;
#line 654
//clear ___nl__int__79;
#line 655
goto label_204;
#line 655
label_202:
;
#line 656
goto label_204;
#line 656
label_204:
;
#line 657
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 657
___nl__bool__80 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(96));
#line 657
c_rt_lib0clear(&___nl__im__81);
#line 657
___nl__bool__80 = !___nl__bool__80;
#line 657
if(___nl__bool__80){ goto label_213;}
#line 658
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 659
___nl__int__3 = 0;
#line 660
goto label_213;
#line 660
label_213:
;
#line 660
//clear ___nl__bool__80;
#line 661
c_rt_lib0move(&___nl__im__85,___get_global_string_const(177));
#line 661
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__4));
#line 661
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 661
c_rt_lib0clear(&___nl__im__85);
#line 661
c_rt_lib0clear(&___nl__string__86);
#line 661
c_rt_lib0move(&___nl__im__87,___get_global_string_const(178));
#line 661
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 661
c_rt_lib0clear(&___nl__im__84);
#line 661
c_rt_lib0clear(&___nl__im__87);
#line 661
c_rt_lib0move(&___nl__string__88, c_rt_lib0int_to_string(___nl__int__3));
#line 661
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__string__88));
#line 661
c_rt_lib0clear(&___nl__im__83);
#line 661
c_rt_lib0clear(&___nl__string__88);
#line 661
c_rt_lib0delete(c_fe_lib0print(___nl__im__82));
#line 661
c_rt_lib0clear(&___nl__im__82);
#line 662
c_rt_lib0clear(&___nl__im__0);
#line 662
c_rt_lib0clear(&___nl__im__1);
#line 662
c_rt_lib0clear(&___nl__im__2);
#line 662
//clear ___nl__int__3;
#line 662
c_rt_lib0clear(&___nl__im__5);
#line 662
c_rt_lib0clear(&___nl__im__6);
#line 662
//clear ___nl__bool__7;
#line 662
c_rt_lib0clear(&___nl__im__8);
#line 662
c_rt_lib0clear(&___nl__im__9);
#line 662
c_rt_lib0clear(&___nl__im__10);
#line 662
c_rt_lib0clear(&___nl__im__13);
#line 662
//clear ___nl__int__14;
#line 662
//clear ___nl__int__15;
#line 662
//clear ___nl__int__16;
#line 662
//clear ___nl__bool__17;
#line 662
c_rt_lib0clear(&___nl__im__18);
#line 662
c_rt_lib0clear(&___nl__im__35);
#line 662
c_rt_lib0clear(&___nl__im__37);
#line 662
//clear ___nl__int__38;
#line 662
//clear ___nl__int__39;
#line 662
//clear ___nl__int__40;
#line 662
//clear ___nl__bool__41;
#line 662
c_rt_lib0clear(&___nl__im__42);
#line 662
c_rt_lib0clear(&___nl__im__61);
#line 662
//clear ___nl__bool__62;
#line 662
c_rt_lib0clear(&___nl__im__63);
#line 662
c_rt_lib0clear(&___nl__im__64);
#line 662
c_rt_lib0clear(&___nl__im__65);
#line 662
c_rt_lib0clear(&___nl__im__66);
#line 662
c_rt_lib0clear(&___nl__im__67);
#line 662
//clear ___nl__int__68;
#line 662
//clear ___nl__int__69;
#line 662
//clear ___nl__int__70;
#line 662
//clear ___nl__bool__71;
#line 662
c_rt_lib0clear(&___nl__im__72);
#line 662
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
#line 667
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 668
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 669
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__1));
#line 669
label_3:
;
#line 669
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 669
if(___nl__bool__6){ goto label_61;}
#line 669
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 669
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__5));
#line 670
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(179)));
#line 670
___nl__int__11 = 0;
#line 670
___nl__int__12 = 1;
#line 670
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 670
label_12:
;
#line 670
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 670
if(___nl__bool__14){ goto label_46;}
#line 670
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 670
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 671
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(180)));
#line 671
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(81));
#line 671
if(___nl__bool__17){ goto label_25;}
#line 672
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(80));
#line 672
if(___nl__bool__17){ goto label_27;}
#line 672
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 672
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__16));
#line 672
nl_die_arg(___nl__im__18);
#line 671
label_25:
;
#line 672
goto label_42;
#line 672
label_27:
;
#line 672
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(80)));
#line 672
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 673
c_rt_lib0move(&___nl__im__24,___get_global_string_const(34));
#line 673
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__5, ___nl__im__24));
#line 673
c_rt_lib0clear(&___nl__im__24);
#line 673
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(181)));
#line 673
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 673
c_rt_lib0clear(&___nl__im__23);
#line 673
c_rt_lib0clear(&___nl__im__25);
#line 673
c_rt_lib0copy(&___nl__im__21, ___nl__im__19);
#line 673
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__4, ___nl__im__22, ___nl__im__21));
#line 673
c_rt_lib0clear(&___nl__im__21);
#line 673
c_rt_lib0clear(&___nl__im__22);
#line 674
goto label_42;
#line 674
label_42:
;
#line 674
c_rt_lib0clear(&___nl__im__10);
#line 675
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 675
goto label_12;
#line 675
label_46:
;
#line 675
c_rt_lib0clear(&___nl__im__9);
#line 675
c_rt_lib0clear(&___nl__im__10);
#line 675
//clear ___nl__int__11;
#line 675
//clear ___nl__int__12;
#line 675
//clear ___nl__int__13;
#line 675
//clear ___nl__bool__14;
#line 675
c_rt_lib0clear(&___nl__im__15);
#line 675
c_rt_lib0clear(&___nl__im__16);
#line 675
//clear ___nl__bool__17;
#line 675
c_rt_lib0clear(&___nl__im__18);
#line 675
c_rt_lib0clear(&___nl__im__19);
#line 675
c_rt_lib0clear(&___nl__im__20);
#line 676
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 676
goto label_3;
#line 676
label_61:
;
#line 677
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__0));
#line 677
label_63:
;
#line 677
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 677
if(___nl__bool__27){ goto label_73;}
#line 677
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 677
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__26));
#line 678
c_rt_lib0move(&___nl__im__30, translator0translate(___nl__im__28, ___nl__im__4));
#line 679
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__26, ___nl__im__30));
#line 679
c_rt_lib0clear(&___nl__im__30);
#line 680
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 680
goto label_63;
#line 680
label_73:
;
#line 681
c_rt_lib0delete(post_processing0find(___ref___im__2, &___nl__im__3));
#line 682
c_rt_lib0clear(&___nl__im__0);
#line 682
c_rt_lib0clear(&___nl__im__1);
#line 682
c_rt_lib0clear(&___nl__im__4);
#line 682
c_rt_lib0clear(&___nl__im__5);
#line 682
//clear ___nl__bool__6;
#line 682
c_rt_lib0clear(&___nl__im__7);
#line 682
c_rt_lib0clear(&___nl__im__8);
#line 682
c_rt_lib0clear(&___nl__im__9);
#line 682
c_rt_lib0clear(&___nl__im__10);
#line 682
//clear ___nl__int__11;
#line 682
//clear ___nl__int__12;
#line 682
//clear ___nl__int__13;
#line 682
//clear ___nl__bool__14;
#line 682
c_rt_lib0clear(&___nl__im__15);
#line 682
c_rt_lib0clear(&___nl__im__16);
#line 682
//clear ___nl__bool__17;
#line 682
c_rt_lib0clear(&___nl__im__18);
#line 682
c_rt_lib0clear(&___nl__im__19);
#line 682
c_rt_lib0clear(&___nl__im__20);
#line 682
c_rt_lib0clear(&___nl__im__26);
#line 682
//clear ___nl__bool__27;
#line 682
c_rt_lib0clear(&___nl__im__28);
#line 682
c_rt_lib0clear(&___nl__im__29);
#line 682
c_rt_lib0clear(&___nl__im__30);
#line 682
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
#line 687
c_rt_lib0move(&___nl__im__4,___get_global_string_const(182));
#line 687
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 687
c_rt_lib0clear(&___nl__im__4);
#line 688
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 689
___nl__bool__6 = ___nl__bool__3;
#line 689
___nl__bool__6 = !___nl__bool__6;
#line 689
if(___nl__bool__6){ goto label_52;}
#line 690
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 691
c_rt_lib0move(&___nl__im__9,___get_global_string_const(183));
#line 691
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 691
c_rt_lib0clear(&___nl__im__9);
#line 691
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 691
if(___nl__bool__10){ goto label_18;}
#line 694
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(82));
#line 694
if(___nl__bool__10){ goto label_28;}
#line 694
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 694
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 694
nl_die_arg(___nl__im__11);
#line 691
label_18:
;
#line 691
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 691
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 692
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 693
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 693
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 693
c_rt_lib0clear(&___nl__im__15);
#line 693
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 693
c_rt_lib0clear(&___nl__im__14);
#line 694
goto label_32;
#line 694
label_28:
;
#line 694
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(82)));
#line 694
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 695
goto label_32;
#line 695
label_32:
;
#line 696
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 697
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 698
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 698
label_36:
;
#line 698
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 698
if(___nl__bool__21){ goto label_49;}
#line 698
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 698
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 699
___nl__bool__24 = true;
#line 699
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 699
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 699
//clear ___nl__bool__24;
#line 699
c_rt_lib0clear(&___nl__im__25);
#line 700
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 701
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 701
goto label_36;
#line 701
label_49:
;
#line 703
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 704
goto label_52;
#line 704
label_52:
;
#line 704
//clear ___nl__bool__6;
#line 704
c_rt_lib0clear(&___nl__im__7);
#line 704
c_rt_lib0clear(&___nl__im__8);
#line 704
//clear ___nl__bool__10;
#line 704
c_rt_lib0clear(&___nl__im__11);
#line 704
c_rt_lib0clear(&___nl__im__12);
#line 704
c_rt_lib0clear(&___nl__im__13);
#line 704
c_rt_lib0clear(&___nl__im__16);
#line 704
c_rt_lib0clear(&___nl__im__17);
#line 704
c_rt_lib0clear(&___nl__im__18);
#line 704
c_rt_lib0clear(&___nl__im__19);
#line 704
c_rt_lib0clear(&___nl__im__20);
#line 704
//clear ___nl__bool__21;
#line 704
c_rt_lib0clear(&___nl__im__22);
#line 704
c_rt_lib0clear(&___nl__im__23);
#line 705
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 705
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 705
c_rt_lib0clear(&___nl__im__27);
#line 706
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 706
___nl__int__30 = 0;
#line 706
___nl__int__31 = 1;
#line 706
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 706
label_75:
;
#line 706
___nl__bool__33 = ___nl__int__30 >= ___nl__int__32;
#line 706
if(___nl__bool__33){ goto label_109;}
#line 706
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 706
c_rt_lib0copy(&___nl__im__29, ___nl__im__34);
#line 707
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 708
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 708
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(165)));
#line 708
___nl__bool__36 = hash0has_key(___nl__im__37, ___nl__im__38);
#line 708
c_rt_lib0clear(&___nl__im__37);
#line 708
c_rt_lib0clear(&___nl__im__38);
#line 708
___nl__bool__36 = !___nl__bool__36;
#line 708
if(___nl__bool__36){ goto label_94;}
#line 709
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 709
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(165)));
#line 709
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__39, ___nl__im__40));
#line 709
c_rt_lib0clear(&___nl__im__39);
#line 709
c_rt_lib0clear(&___nl__im__40);
#line 710
goto label_94;
#line 710
label_94:
;
#line 710
//clear ___nl__bool__36;
#line 711
c_rt_lib0delete(array0push(&___nl__im__35, ___nl__im__29));
#line 712
c_rt_lib0move(&___nl__im__41,___get_global_string_const(60));
#line 712
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 712
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(165)));
#line 712
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__42, ___nl__im__35));
#line 712
c_rt_lib0move(&___nl__string__43,___get_global_string_const(60));
#line 712
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 712
c_rt_lib0clear(&___nl__im__41);
#line 712
c_rt_lib0clear(&___nl__im__42);
#line 712
c_rt_lib0clear(&___nl__string__43);
#line 712
c_rt_lib0clear(&___nl__im__29);
#line 713
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 713
goto label_75;
#line 713
label_109:
;
#line 714
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(137)));
#line 714
___nl__int__46 = 0;
#line 714
___nl__int__47 = 1;
#line 714
___nl__int__48 = c_rt_lib0array_len(___nl__im__44);
#line 714
label_114:
;
#line 714
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 714
if(___nl__bool__49){ goto label_148;}
#line 714
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__44, ___nl__int__46));
#line 714
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 715
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 716
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 716
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(165)));
#line 716
___nl__bool__52 = hash0has_key(___nl__im__53, ___nl__im__54);
#line 716
c_rt_lib0clear(&___nl__im__53);
#line 716
c_rt_lib0clear(&___nl__im__54);
#line 716
___nl__bool__52 = !___nl__bool__52;
#line 716
if(___nl__bool__52){ goto label_133;}
#line 717
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 717
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(165)));
#line 717
c_rt_lib0move(&___nl__im__51, hash0get_value(___nl__im__55, ___nl__im__56));
#line 717
c_rt_lib0clear(&___nl__im__55);
#line 717
c_rt_lib0clear(&___nl__im__56);
#line 718
goto label_133;
#line 718
label_133:
;
#line 718
//clear ___nl__bool__52;
#line 719
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__45));
#line 720
c_rt_lib0move(&___nl__im__57,___get_global_string_const(61));
#line 720
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 720
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(165)));
#line 720
c_rt_lib0delete(hash0set_value(&___nl__im__57, ___nl__im__58, ___nl__im__51));
#line 720
c_rt_lib0move(&___nl__string__59,___get_global_string_const(61));
#line 720
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 720
c_rt_lib0clear(&___nl__im__57);
#line 720
c_rt_lib0clear(&___nl__im__58);
#line 720
c_rt_lib0clear(&___nl__string__59);
#line 720
c_rt_lib0clear(&___nl__im__45);
#line 721
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 721
goto label_114;
#line 721
label_148:
;
#line 722
___nl__int__61 = 0;
#line 722
___nl__bool__60 = ___nl__int__26 == ___nl__int__61;
#line 722
//clear ___nl__int__61;
#line 722
___nl__bool__60 = !___nl__bool__60;
#line 722
___nl__bool__60 = !___nl__bool__60;
#line 722
if(___nl__bool__60){ goto label_167;}
#line 722
c_rt_lib0move(&___nl__im__64,___get_global_string_const(184));
#line 722
c_rt_lib0move(&___nl__string__65, c_rt_lib0int_to_string(___nl__int__26));
#line 722
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__string__65));
#line 722
c_rt_lib0clear(&___nl__im__64);
#line 722
c_rt_lib0clear(&___nl__string__65);
#line 722
c_rt_lib0move(&___nl__im__66,___get_global_string_const(185));
#line 722
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__66));
#line 722
c_rt_lib0clear(&___nl__im__63);
#line 722
c_rt_lib0clear(&___nl__im__66);
#line 722
c_rt_lib0delete(c_fe_lib0print(___nl__im__62));
#line 722
c_rt_lib0clear(&___nl__im__62);
#line 722
goto label_167;
#line 722
label_167:
;
#line 722
//clear ___nl__bool__60;
#line 723
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(0));
#line 724
c_rt_lib0move(&___nl__im__71, c_rt_lib0init_iter((*___ref___im__0)));
#line 724
label_171:
;
#line 724
___nl__bool__69 = c_rt_lib0is_end_hash(___nl__im__71);
#line 724
if(___nl__bool__69){ goto label_204;}
#line 724
c_rt_lib0move(&___nl__im__68, c_rt_lib0get_key_iter(___nl__im__71));
#line 724
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__68));
#line 725
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(0));
#line 726
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(186)));
#line 726
___nl__int__75 = 0;
#line 726
___nl__int__76 = 1;
#line 726
___nl__int__77 = c_rt_lib0array_len(___nl__im__73);
#line 726
label_181:
;
#line 726
___nl__bool__78 = ___nl__int__75 >= ___nl__int__77;
#line 726
if(___nl__bool__78){ goto label_192;}
#line 726
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__73, ___nl__int__75));
#line 726
c_rt_lib0copy(&___nl__im__74, ___nl__im__79);
#line 727
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(181)));
#line 727
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__80));
#line 727
c_rt_lib0clear(&___nl__im__80);
#line 727
c_rt_lib0clear(&___nl__im__74);
#line 728
___nl__int__75 = ___nl__int__75 + ___nl__int__76;
#line 728
goto label_181;
#line 728
label_192:
;
#line 729
c_rt_lib0delete(hash0set_value(&___nl__im__67, ___nl__im__68, ___nl__im__72));
#line 729
c_rt_lib0clear(&___nl__im__72);
#line 729
c_rt_lib0clear(&___nl__im__73);
#line 729
c_rt_lib0clear(&___nl__im__74);
#line 729
//clear ___nl__int__75;
#line 729
//clear ___nl__int__76;
#line 729
//clear ___nl__int__77;
#line 729
//clear ___nl__bool__78;
#line 729
c_rt_lib0clear(&___nl__im__79);
#line 730
c_rt_lib0move(&___nl__im__71, c_rt_lib0next_iter(___nl__im__71));
#line 730
goto label_171;
#line 730
label_204:
;
#line 731
c_rt_lib0move(&___nl__im__81, module_checker0search_loops(___nl__im__67));
#line 731
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 731
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(62), ___nl__im__82);
#line 731
c_rt_lib0clear(&___nl__im__81);
#line 731
c_rt_lib0clear(&___nl__im__82);
#line 732
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(80));
#line 732
___nl__bool__83 = !___nl__bool__83;
#line 732
if(___nl__bool__83){ goto label_253;}
#line 733
c_rt_lib0move(&___nl__im__85,___get_global_string_const(187));
#line 733
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 733
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(188)));
#line 733
c_rt_lib0clear(&___nl__im__88);
#line 733
___nl__int__86 = c_rt_lib0array_len(___nl__im__87);
#line 733
c_rt_lib0clear(&___nl__im__87);
#line 733
c_rt_lib0move(&___nl__string__89, c_rt_lib0int_to_string(___nl__int__86));
#line 733
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__89));
#line 733
c_rt_lib0clear(&___nl__im__85);
#line 733
//clear ___nl__int__86;
#line 733
c_rt_lib0clear(&___nl__string__89);
#line 733
c_rt_lib0delete(c_fe_lib0print(___nl__im__84));
#line 733
c_rt_lib0clear(&___nl__im__84);
#line 734
c_rt_lib0move(&___nl__im__91,___get_global_string_const(189));
#line 734
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 734
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(190)));
#line 734
c_rt_lib0clear(&___nl__im__94);
#line 734
___nl__int__92 = c_rt_lib0array_len(___nl__im__93);
#line 734
c_rt_lib0clear(&___nl__im__93);
#line 734
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__92));
#line 734
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__string__95));
#line 734
c_rt_lib0clear(&___nl__im__91);
#line 734
//clear ___nl__int__92;
#line 734
c_rt_lib0clear(&___nl__string__95);
#line 734
c_rt_lib0delete(c_fe_lib0print(___nl__im__90));
#line 734
c_rt_lib0clear(&___nl__im__90);
#line 735
c_rt_lib0move(&___nl__im__96, reference_generator0generate((*___ref___im__0)));
#line 736
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(80)));
#line 736
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 736
c_rt_lib0move(&___nl__im__100, compiler_priv0serialize_deref(___nl__im__101, ___nl__im__96));
#line 736
c_rt_lib0clear(&___nl__im__101);
#line 736
c_rt_lib0move(&___nl__im__98, c_fe_lib0string_to_file(___nl__im__99, ___nl__im__100));
#line 736
c_rt_lib0clear(&___nl__im__99);
#line 736
c_rt_lib0clear(&___nl__im__100);
#line 736
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 736
if(___nl__bool__97){ goto label_251;}
#line 736
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(191), ___nl__im__98));
#line 736
nl_die_arg(___nl__im__98);
#line 736
label_251:
;
#line 737
goto label_253;
#line 737
label_253:
;
#line 737
//clear ___nl__bool__83;
#line 737
c_rt_lib0clear(&___nl__im__96);
#line 737
//clear ___nl__bool__97;
#line 737
c_rt_lib0clear(&___nl__im__98);
#line 737
c_rt_lib0clear(&___nl__im__2);
#line 737
//clear ___nl__bool__3;
#line 737
c_rt_lib0clear(&___nl__im__5);
#line 737
//clear ___nl__int__26;
#line 737
c_rt_lib0clear(&___nl__im__28);
#line 737
c_rt_lib0clear(&___nl__im__29);
#line 737
//clear ___nl__int__30;
#line 737
//clear ___nl__int__31;
#line 737
//clear ___nl__int__32;
#line 737
//clear ___nl__bool__33;
#line 737
c_rt_lib0clear(&___nl__im__34);
#line 737
c_rt_lib0clear(&___nl__im__35);
#line 737
c_rt_lib0clear(&___nl__im__44);
#line 737
c_rt_lib0clear(&___nl__im__45);
#line 737
//clear ___nl__int__46;
#line 737
//clear ___nl__int__47;
#line 737
//clear ___nl__int__48;
#line 737
//clear ___nl__bool__49;
#line 737
c_rt_lib0clear(&___nl__im__50);
#line 737
c_rt_lib0clear(&___nl__im__51);
#line 737
c_rt_lib0clear(&___nl__im__67);
#line 737
c_rt_lib0clear(&___nl__im__68);
#line 737
//clear ___nl__bool__69;
#line 737
c_rt_lib0clear(&___nl__im__70);
#line 737
c_rt_lib0clear(&___nl__im__71);
#line 737
c_rt_lib0clear(&___nl__im__72);
#line 737
c_rt_lib0clear(&___nl__im__73);
#line 737
c_rt_lib0clear(&___nl__im__74);
#line 737
//clear ___nl__int__75;
#line 737
//clear ___nl__int__76;
#line 737
//clear ___nl__int__77;
#line 737
//clear ___nl__bool__78;
#line 737
c_rt_lib0clear(&___nl__im__79);
#line 737
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
#line 741
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 742
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 742
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 742
c_rt_lib0clear(&___nl__im__3);
#line 743
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 744
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_string_const(192), ___get_global_string_const(193)));
#line 744
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 744
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 744
c_rt_lib0clear(&___nl__im__6);
#line 744
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 744
c_rt_lib0clear(&___nl__im__5);
#line 744
c_rt_lib0clear(&___nl__im__0);
#line 744
c_rt_lib0clear(&___nl__im__1);
#line 744
c_rt_lib0clear(&___nl__im__2);
#line 744
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
#line 749
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 750
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(190)));
#line 750
___nl__int__4 = 0;
#line 750
___nl__int__5 = 1;
#line 750
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 750
label_5:
;
#line 750
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 750
if(___nl__bool__7){ goto label_18;}
#line 750
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 750
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 751
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(188), ___nl__im__3));
#line 751
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__10));
#line 751
c_rt_lib0clear(&___nl__im__10);
#line 751
c_rt_lib0array_push(&___nl__im__1, ___nl__im__9);
#line 751
c_rt_lib0clear(&___nl__im__9);
#line 751
c_rt_lib0clear(&___nl__im__3);
#line 752
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 752
goto label_5;
#line 752
label_18:
;
#line 754
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(188)));
#line 754
___nl__int__13 = 0;
#line 754
___nl__int__14 = 1;
#line 754
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 754
label_23:
;
#line 754
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 754
if(___nl__bool__16){ goto label_36;}
#line 754
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 754
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 755
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(190), ___nl__im__12));
#line 755
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__19));
#line 755
c_rt_lib0clear(&___nl__im__19);
#line 755
c_rt_lib0array_push(&___nl__im__1, ___nl__im__18);
#line 755
c_rt_lib0clear(&___nl__im__18);
#line 755
c_rt_lib0clear(&___nl__im__12);
#line 756
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 756
goto label_23;
#line 756
label_36:
;
#line 757
c_rt_lib0clear(&___nl__im__0);
#line 757
c_rt_lib0clear(&___nl__im__2);
#line 757
c_rt_lib0clear(&___nl__im__3);
#line 757
//clear ___nl__int__4;
#line 757
//clear ___nl__int__5;
#line 757
//clear ___nl__int__6;
#line 757
//clear ___nl__bool__7;
#line 757
c_rt_lib0clear(&___nl__im__8);
#line 757
c_rt_lib0clear(&___nl__im__11);
#line 757
c_rt_lib0clear(&___nl__im__12);
#line 757
//clear ___nl__int__13;
#line 757
//clear ___nl__int__14;
#line 757
//clear ___nl__int__15;
#line 757
//clear ___nl__bool__16;
#line 757
c_rt_lib0clear(&___nl__im__17);
#line 757
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
#line 761
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 761
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(83));
#line 761
if(___nl__bool__4){ goto label_8;}
#line 762
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(82));
#line 762
if(___nl__bool__4){ goto label_12;}
#line 762
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 762
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 762
nl_die_arg(___nl__im__5);
#line 761
label_8:
;
#line 761
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(83)));
#line 761
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 762
goto label_22;
#line 762
label_12:
;
#line 762
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(82)));
#line 762
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 763
c_rt_lib0move(&___nl__im__11,___get_global_string_const(152));
#line 763
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 763
c_rt_lib0clear(&___nl__im__11);
#line 763
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 763
c_rt_lib0clear(&___nl__im__10);
#line 764
c_rt_lib0move(___ref___im__2,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 765
goto label_22;
#line 765
label_22:
;
#line 765
c_rt_lib0clear(&___nl__im__0);
#line 765
c_rt_lib0clear(&___nl__im__1);
#line 765
c_rt_lib0clear(&___nl__im__3);
#line 765
//clear ___nl__bool__4;
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
#line 773
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 774
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(64));
#line 774
if(___nl__bool__6){ goto label_16;}
#line 782
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(65));
#line 782
if(___nl__bool__6){ goto label_56;}
#line 796
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(66));
#line 796
if(___nl__bool__6){ goto label_126;}
#line 814
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(67));
#line 814
if(___nl__bool__6){ goto label_224;}
#line 816
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(68));
#line 816
if(___nl__bool__6){ goto label_228;}
#line 818
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(69));
#line 818
if(___nl__bool__6){ goto label_232;}
#line 818
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 818
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 818
nl_die_arg(___nl__im__7);
#line 774
label_16:
;
#line 775
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 775
label_18:
;
#line 775
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 775
if(___nl__bool__9){ goto label_54;}
#line 775
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 775
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 776
c_rt_lib0move(&___nl__im__12,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 777
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 777
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(79)));
#line 777
c_rt_lib0clear(&___nl__im__15);
#line 777
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 777
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(79)));
#line 777
c_rt_lib0clear(&___nl__im__17);
#line 777
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(64)));
#line 777
c_rt_lib0clear(&___nl__im__14);
#line 777
c_rt_lib0clear(&___nl__im__16);
#line 778
c_rt_lib0move(&___nl__im__19,___get_global_string_const(151));
#line 778
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 778
c_rt_lib0clear(&___nl__im__19);
#line 778
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 778
c_rt_lib0clear(&___nl__im__18);
#line 779
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 779
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 779
c_rt_lib0clear(&___nl__im__20);
#line 780
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 780
___nl__bool__21 = !___nl__bool__21;
#line 780
if(___nl__bool__21){ goto label_48;}
#line 780
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 780
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 780
c_rt_lib0clear(&___nl__im__22);
#line 780
goto label_48;
#line 780
label_48:
;
#line 780
//clear ___nl__bool__21;
#line 780
c_rt_lib0clear(&___nl__im__12);
#line 780
c_rt_lib0clear(&___nl__im__13);
#line 781
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 781
goto label_18;
#line 781
label_54:
;
#line 782
goto label_255;
#line 782
label_56:
;
#line 783
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 784
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 785
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(196)));
#line 785
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 785
label_61:
;
#line 785
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 785
if(___nl__bool__27){ goto label_103;}
#line 785
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 785
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 786
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 787
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 787
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(79)));
#line 787
c_rt_lib0clear(&___nl__im__32);
#line 787
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 787
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(79)));
#line 787
c_rt_lib0clear(&___nl__im__34);
#line 787
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(65)));
#line 787
c_rt_lib0clear(&___nl__im__31);
#line 787
c_rt_lib0clear(&___nl__im__33);
#line 788
c_rt_lib0move(&___nl__im__36,___get_global_string_const(151));
#line 788
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 788
c_rt_lib0clear(&___nl__im__36);
#line 788
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 788
c_rt_lib0clear(&___nl__im__35);
#line 789
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(65)));
#line 789
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(65)));
#line 789
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 789
c_rt_lib0clear(&___nl__im__37);
#line 789
c_rt_lib0clear(&___nl__im__38);
#line 790
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(72)));
#line 790
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(72)));
#line 790
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 790
c_rt_lib0clear(&___nl__im__39);
#line 790
c_rt_lib0clear(&___nl__im__40);
#line 791
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 791
___nl__bool__41 = !___nl__bool__41;
#line 791
if(___nl__bool__41){ goto label_98;}
#line 791
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 791
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 791
c_rt_lib0clear(&___nl__im__42);
#line 791
goto label_98;
#line 791
label_98:
;
#line 791
//clear ___nl__bool__41;
#line 791
c_rt_lib0clear(&___nl__im__30);
#line 792
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 792
goto label_61;
#line 792
label_103:
;
#line 793
c_rt_lib0move(&___nl__im__43,___get_global_string_const(197));
#line 793
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 793
c_rt_lib0clear(&___nl__im__43);
#line 794
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(198)));
#line 794
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(65)));
#line 794
c_rt_lib0clear(&___nl__im__45);
#line 794
c_rt_lib0move(&___nl__im__47,___get_global_string_const(199));
#line 794
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 794
c_rt_lib0clear(&___nl__im__47);
#line 794
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 794
c_rt_lib0clear(&___nl__im__44);
#line 794
c_rt_lib0clear(&___nl__im__46);
#line 795
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(198)));
#line 795
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(72)));
#line 795
c_rt_lib0clear(&___nl__im__49);
#line 795
c_rt_lib0move(&___nl__im__51,___get_global_string_const(200));
#line 795
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 795
c_rt_lib0clear(&___nl__im__51);
#line 795
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 795
c_rt_lib0clear(&___nl__im__48);
#line 795
c_rt_lib0clear(&___nl__im__50);
#line 796
goto label_255;
#line 796
label_126:
;
#line 796
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(66)));
#line 796
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 797
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__0));
#line 797
label_130:
;
#line 797
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 797
if(___nl__bool__55){ goto label_222;}
#line 797
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 797
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__54));
#line 798
c_rt_lib0move(&___nl__im__58,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 799
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 800
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 800
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(79)));
#line 800
c_rt_lib0clear(&___nl__im__62);
#line 800
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 800
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(79)));
#line 800
c_rt_lib0clear(&___nl__im__64);
#line 800
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(66)));
#line 800
c_rt_lib0clear(&___nl__im__61);
#line 800
c_rt_lib0clear(&___nl__im__63);
#line 801
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 801
___nl__bool__65 = c_rt_lib0check_true_native(___nl__im__66);
#line 801
c_rt_lib0clear(&___nl__im__66);
#line 801
___nl__bool__65 = !___nl__bool__65;
#line 801
if(___nl__bool__65){ goto label_155;}
#line 802
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(74)));
#line 802
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__67));
#line 802
c_rt_lib0clear(&___nl__im__67);
#line 803
goto label_155;
#line 803
label_155:
;
#line 803
//clear ___nl__bool__65;
#line 804
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(70)));
#line 804
c_rt_lib0move(&___nl__im__68, generator_js0generate(___nl__im__56, ___nl__im__69, ___nl__im__59));
#line 804
c_rt_lib0clear(&___nl__im__69);
#line 805
c_rt_lib0move(&___nl__im__71,___get_global_string_const(151));
#line 805
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__54));
#line 805
c_rt_lib0clear(&___nl__im__71);
#line 805
c_rt_lib0delete(c_fe_lib0print(___nl__im__70));
#line 805
c_rt_lib0clear(&___nl__im__70);
#line 806
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(66)));
#line 806
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(66)));
#line 806
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__72, ___nl__im__73, &___nl__im__58));
#line 806
c_rt_lib0clear(&___nl__im__72);
#line 806
c_rt_lib0clear(&___nl__im__73);
#line 807
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 807
___nl__bool__74 = c_rt_lib0check_true_native(___nl__im__75);
#line 807
c_rt_lib0clear(&___nl__im__75);
#line 807
___nl__bool__74 = !___nl__bool__74;
#line 807
if(___nl__bool__74){ goto label_205;}
#line 808
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(73)));
#line 808
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__76));
#line 808
c_rt_lib0clear(&___nl__im__76);
#line 809
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(71)));
#line 809
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(75)));
#line 809
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__77, ___nl__im__78, &___nl__im__58));
#line 809
c_rt_lib0clear(&___nl__im__77);
#line 809
c_rt_lib0clear(&___nl__im__78);
#line 810
c_rt_lib0move(&___nl__im__83,___get_global_string_const(201));
#line 810
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 810
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(78)));
#line 810
c_rt_lib0clear(&___nl__im__85);
#line 810
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 810
c_rt_lib0clear(&___nl__im__83);
#line 810
c_rt_lib0clear(&___nl__im__84);
#line 810
c_rt_lib0move(&___nl__im__86,___get_global_string_const(202));
#line 810
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__86));
#line 810
c_rt_lib0clear(&___nl__im__82);
#line 810
c_rt_lib0clear(&___nl__im__86);
#line 810
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(67)));
#line 810
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__87));
#line 810
c_rt_lib0clear(&___nl__im__81);
#line 810
c_rt_lib0clear(&___nl__im__87);
#line 810
c_rt_lib0move(&___nl__im__88,___get_global_string_const(203));
#line 810
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__88));
#line 810
c_rt_lib0clear(&___nl__im__80);
#line 810
c_rt_lib0clear(&___nl__im__88);
#line 810
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__79));
#line 810
c_rt_lib0clear(&___nl__im__79);
#line 811
goto label_205;
#line 811
label_205:
;
#line 811
//clear ___nl__bool__74;
#line 812
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__58);
#line 812
___nl__bool__89 = !___nl__bool__89;
#line 812
if(___nl__bool__89){ goto label_214;}
#line 812
c_rt_lib0move(&___nl__im__90,___get_global_string_const(36));
#line 812
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__90));
#line 812
c_rt_lib0clear(&___nl__im__90);
#line 812
goto label_214;
#line 812
label_214:
;
#line 812
//clear ___nl__bool__89;
#line 812
c_rt_lib0clear(&___nl__im__58);
#line 812
c_rt_lib0clear(&___nl__im__59);
#line 812
c_rt_lib0clear(&___nl__im__60);
#line 812
c_rt_lib0clear(&___nl__im__68);
#line 813
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 813
goto label_130;
#line 813
label_222:
;
#line 814
goto label_255;
#line 814
label_224:
;
#line 815
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 815
nl_die_arg(___nl__im__91);
#line 816
goto label_255;
#line 816
label_228:
;
#line 817
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 817
nl_die_arg(___nl__im__92);
#line 818
goto label_255;
#line 818
label_232:
;
#line 819
c_rt_lib0move(&___nl__im__93, post_processing0get_call_graph(___nl__im__0));
#line 820
c_rt_lib0move(&___nl__im__94,c_rt_lib0ov_mk_none(___get_global_string_const(195)));
#line 821
c_rt_lib0move(&___nl__im__95,___get_global_string_const(204));
#line 821
c_rt_lib0delete(c_fe_lib0print(___nl__im__95));
#line 821
c_rt_lib0clear(&___nl__im__95);
#line 822
c_rt_lib0move(&___nl__im__96, dfile0ssave(___nl__im__93));
#line 822
c_rt_lib0move(&___nl__im__98,___get_global_string_const(128));
#line 822
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__2, ___nl__im__98));
#line 822
c_rt_lib0clear(&___nl__im__98);
#line 822
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__96, ___nl__im__97, &___nl__im__94));
#line 822
c_rt_lib0clear(&___nl__im__96);
#line 822
c_rt_lib0clear(&___nl__im__97);
#line 823
___nl__bool__99 = c_rt_lib0check_true_native(___nl__im__94);
#line 823
___nl__bool__99 = !___nl__bool__99;
#line 823
if(___nl__bool__99){ goto label_252;}
#line 824
c_rt_lib0move(&___nl__im__100,___get_global_string_const(205));
#line 824
c_rt_lib0delete(c_fe_lib0print(___nl__im__100));
#line 824
c_rt_lib0clear(&___nl__im__100);
#line 825
goto label_252;
#line 825
label_252:
;
#line 825
//clear ___nl__bool__99;
#line 826
goto label_255;
#line 826
label_255:
;
#line 827
___nl__int__102 = hash0size(___nl__im__5);
#line 827
___nl__int__103 = 0;
#line 827
___nl__bool__101 = ___nl__int__102 > ___nl__int__103;
#line 827
//clear ___nl__int__102;
#line 827
//clear ___nl__int__103;
#line 827
___nl__bool__101 = !___nl__bool__101;
#line 827
if(___nl__bool__101){ goto label_302;}
#line 828
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__5));
#line 828
c_rt_lib0clear(&___nl__im__0);
#line 828
c_rt_lib0clear(&___nl__im__1);
#line 828
c_rt_lib0clear(&___nl__im__2);
#line 828
c_rt_lib0clear(&___nl__im__4);
#line 828
c_rt_lib0clear(&___nl__im__5);
#line 828
//clear ___nl__bool__6;
#line 828
c_rt_lib0clear(&___nl__im__7);
#line 828
c_rt_lib0clear(&___nl__im__8);
#line 828
//clear ___nl__bool__9;
#line 828
c_rt_lib0clear(&___nl__im__10);
#line 828
c_rt_lib0clear(&___nl__im__11);
#line 828
c_rt_lib0clear(&___nl__im__12);
#line 828
c_rt_lib0clear(&___nl__im__13);
#line 828
c_rt_lib0clear(&___nl__im__23);
#line 828
c_rt_lib0clear(&___nl__im__24);
#line 828
c_rt_lib0clear(&___nl__im__25);
#line 828
c_rt_lib0clear(&___nl__im__26);
#line 828
//clear ___nl__bool__27;
#line 828
c_rt_lib0clear(&___nl__im__28);
#line 828
c_rt_lib0clear(&___nl__im__29);
#line 828
c_rt_lib0clear(&___nl__im__30);
#line 828
c_rt_lib0clear(&___nl__im__52);
#line 828
c_rt_lib0clear(&___nl__im__53);
#line 828
c_rt_lib0clear(&___nl__im__54);
#line 828
//clear ___nl__bool__55;
#line 828
c_rt_lib0clear(&___nl__im__56);
#line 828
c_rt_lib0clear(&___nl__im__57);
#line 828
c_rt_lib0clear(&___nl__im__58);
#line 828
c_rt_lib0clear(&___nl__im__59);
#line 828
c_rt_lib0clear(&___nl__im__60);
#line 828
c_rt_lib0clear(&___nl__im__68);
#line 828
c_rt_lib0clear(&___nl__im__91);
#line 828
c_rt_lib0clear(&___nl__im__92);
#line 828
c_rt_lib0clear(&___nl__im__93);
#line 828
c_rt_lib0clear(&___nl__im__94);
#line 828
//clear ___nl__bool__101;
#line 828
return ___nl__im__104;
#line 829
goto label_345;
#line 829
label_302:
;
#line 830
c_rt_lib0move(&___nl__im__106,___get_global_string_const(36));
#line 830
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__106));
#line 830
c_rt_lib0clear(&___nl__im__106);
#line 830
c_rt_lib0clear(&___nl__im__0);
#line 830
c_rt_lib0clear(&___nl__im__1);
#line 830
c_rt_lib0clear(&___nl__im__2);
#line 830
c_rt_lib0clear(&___nl__im__4);
#line 830
c_rt_lib0clear(&___nl__im__5);
#line 830
//clear ___nl__bool__6;
#line 830
c_rt_lib0clear(&___nl__im__7);
#line 830
c_rt_lib0clear(&___nl__im__8);
#line 830
//clear ___nl__bool__9;
#line 830
c_rt_lib0clear(&___nl__im__10);
#line 830
c_rt_lib0clear(&___nl__im__11);
#line 830
c_rt_lib0clear(&___nl__im__12);
#line 830
c_rt_lib0clear(&___nl__im__13);
#line 830
c_rt_lib0clear(&___nl__im__23);
#line 830
c_rt_lib0clear(&___nl__im__24);
#line 830
c_rt_lib0clear(&___nl__im__25);
#line 830
c_rt_lib0clear(&___nl__im__26);
#line 830
//clear ___nl__bool__27;
#line 830
c_rt_lib0clear(&___nl__im__28);
#line 830
c_rt_lib0clear(&___nl__im__29);
#line 830
c_rt_lib0clear(&___nl__im__30);
#line 830
c_rt_lib0clear(&___nl__im__52);
#line 830
c_rt_lib0clear(&___nl__im__53);
#line 830
c_rt_lib0clear(&___nl__im__54);
#line 830
//clear ___nl__bool__55;
#line 830
c_rt_lib0clear(&___nl__im__56);
#line 830
c_rt_lib0clear(&___nl__im__57);
#line 830
c_rt_lib0clear(&___nl__im__58);
#line 830
c_rt_lib0clear(&___nl__im__59);
#line 830
c_rt_lib0clear(&___nl__im__60);
#line 830
c_rt_lib0clear(&___nl__im__68);
#line 830
c_rt_lib0clear(&___nl__im__91);
#line 830
c_rt_lib0clear(&___nl__im__92);
#line 830
c_rt_lib0clear(&___nl__im__93);
#line 830
c_rt_lib0clear(&___nl__im__94);
#line 830
//clear ___nl__bool__101;
#line 830
c_rt_lib0clear(&___nl__im__104);
#line 830
return ___nl__im__105;
#line 831
goto label_345;
#line 831
label_345:
;
#line 831
//clear ___nl__bool__101;
#line 831
c_rt_lib0clear(&___nl__im__104);
#line 831
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
#line 835
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(64));
#line 835
if(___nl__bool__2){ goto label_17;}
#line 837
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(65));
#line 837
if(___nl__bool__2){ goto label_23;}
#line 839
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(66));
#line 839
if(___nl__bool__2){ goto label_29;}
#line 841
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(67));
#line 841
if(___nl__bool__2){ goto label_35;}
#line 843
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(68));
#line 843
if(___nl__bool__2){ goto label_63;}
#line 845
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(76));
#line 845
if(___nl__bool__2){ goto label_94;}
#line 847
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(69));
#line 847
if(___nl__bool__2){ goto label_98;}
#line 847
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 847
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 847
nl_die_arg(___nl__im__3);
#line 835
label_17:
;
#line 835
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(64)));
#line 835
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 836
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 836
nl_die_arg(___nl__im__6);
#line 837
goto label_102;
#line 837
label_23:
;
#line 837
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(65)));
#line 837
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 838
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 838
nl_die_arg(___nl__im__9);
#line 839
goto label_102;
#line 839
label_29:
;
#line 839
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(66)));
#line 839
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 840
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 840
nl_die_arg(___nl__im__12);
#line 841
goto label_102;
#line 841
label_35:
;
#line 841
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(67)));
#line 841
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 842
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(206)));
#line 842
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 842
c_rt_lib0move(&___nl__im__18, pretty_printer0print_module_to_str(___nl__im__0));
#line 842
c_rt_lib0move(&___nl__im__17, c_fe_lib0string_to_file(___nl__im__13, ___nl__im__18));
#line 842
c_rt_lib0clear(&___nl__im__18);
#line 842
c_rt_lib0move(&___nl__im__15, ptd0ensure(___nl__im__16, ___nl__im__17));
#line 842
c_rt_lib0clear(&___nl__im__16);
#line 842
c_rt_lib0clear(&___nl__im__17);
#line 842
c_rt_lib0clear(&___nl__im__0);
#line 842
c_rt_lib0clear(&___nl__im__1);
#line 842
//clear ___nl__bool__2;
#line 842
c_rt_lib0clear(&___nl__im__3);
#line 842
c_rt_lib0clear(&___nl__im__4);
#line 842
c_rt_lib0clear(&___nl__im__5);
#line 842
c_rt_lib0clear(&___nl__im__6);
#line 842
c_rt_lib0clear(&___nl__im__7);
#line 842
c_rt_lib0clear(&___nl__im__8);
#line 842
c_rt_lib0clear(&___nl__im__9);
#line 842
c_rt_lib0clear(&___nl__im__10);
#line 842
c_rt_lib0clear(&___nl__im__11);
#line 842
c_rt_lib0clear(&___nl__im__12);
#line 842
c_rt_lib0clear(&___nl__im__13);
#line 842
c_rt_lib0clear(&___nl__im__14);
#line 842
return ___nl__im__15;
#line 843
goto label_102;
#line 843
label_63:
;
#line 843
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(68)));
#line 843
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 844
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(206)));
#line 844
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__22));
#line 844
c_rt_lib0move(&___nl__im__24, dfile0ssave(___nl__im__0));
#line 844
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 844
c_rt_lib0clear(&___nl__im__24);
#line 844
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 844
c_rt_lib0clear(&___nl__im__22);
#line 844
c_rt_lib0clear(&___nl__im__23);
#line 844
c_rt_lib0clear(&___nl__im__0);
#line 844
c_rt_lib0clear(&___nl__im__1);
#line 844
//clear ___nl__bool__2;
#line 844
c_rt_lib0clear(&___nl__im__3);
#line 844
c_rt_lib0clear(&___nl__im__4);
#line 844
c_rt_lib0clear(&___nl__im__5);
#line 844
c_rt_lib0clear(&___nl__im__6);
#line 844
c_rt_lib0clear(&___nl__im__7);
#line 844
c_rt_lib0clear(&___nl__im__8);
#line 844
c_rt_lib0clear(&___nl__im__9);
#line 844
c_rt_lib0clear(&___nl__im__10);
#line 844
c_rt_lib0clear(&___nl__im__11);
#line 844
c_rt_lib0clear(&___nl__im__12);
#line 844
c_rt_lib0clear(&___nl__im__13);
#line 844
c_rt_lib0clear(&___nl__im__14);
#line 844
c_rt_lib0clear(&___nl__im__15);
#line 844
c_rt_lib0clear(&___nl__im__19);
#line 844
c_rt_lib0clear(&___nl__im__20);
#line 844
return ___nl__im__21;
#line 845
goto label_102;
#line 845
label_94:
;
#line 846
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 846
nl_die_arg(___nl__im__25);
#line 847
goto label_102;
#line 847
label_98:
;
#line 848
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 848
nl_die_arg(___nl__im__26);
#line 849
goto label_102;
#line 849
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
#line 853
___nl__int__2 = string0length(___nl__im__0);
#line 853
___nl__int__3 = 1;
#line 853
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 853
//clear ___nl__int__2;
#line 853
//clear ___nl__int__3;
#line 854
___nl__int__6 = 1;
#line 854
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 854
//clear ___nl__int__6;
#line 854
c_rt_lib0move(&___nl__im__7,___get_global_string_const(117));
#line 854
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 854
c_rt_lib0clear(&___nl__im__5);
#line 854
c_rt_lib0clear(&___nl__im__7);
#line 854
if(___nl__bool__4){ goto label_20;}
#line 854
___nl__int__9 = 1;
#line 854
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 854
//clear ___nl__int__9;
#line 854
c_rt_lib0move(&___nl__im__10,___get_global_string_const(121));
#line 854
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 854
c_rt_lib0clear(&___nl__im__8);
#line 854
c_rt_lib0clear(&___nl__im__10);
#line 854
label_20:
;
#line 854
___nl__bool__4 = !___nl__bool__4;
#line 854
if(___nl__bool__4){ goto label_27;}
#line 854
___nl__int__11 = 1;
#line 854
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 854
//clear ___nl__int__11;
#line 854
goto label_27;
#line 854
label_27:
;
#line 854
//clear ___nl__bool__4;
#line 855
label_29:
;
#line 855
___nl__int__15 = 0;
#line 855
___nl__bool__12 = ___nl__int__1 >= ___nl__int__15;
#line 855
//clear ___nl__int__15;
#line 855
___nl__bool__14 = !___nl__bool__12;
#line 855
if(___nl__bool__14){ goto label_42;}
#line 855
___nl__int__17 = 1;
#line 855
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 855
//clear ___nl__int__17;
#line 855
c_rt_lib0move(&___nl__im__18,___get_global_string_const(117));
#line 855
___nl__bool__12 = c_rt_lib0ne(___nl__im__16, ___nl__im__18);
#line 855
c_rt_lib0clear(&___nl__im__16);
#line 855
c_rt_lib0clear(&___nl__im__18);
#line 855
label_42:
;
#line 855
//clear ___nl__bool__14;
#line 855
___nl__bool__13 = !___nl__bool__12;
#line 855
if(___nl__bool__13){ goto label_53;}
#line 855
___nl__int__20 = 1;
#line 855
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__20));
#line 855
//clear ___nl__int__20;
#line 855
c_rt_lib0move(&___nl__im__21,___get_global_string_const(121));
#line 855
___nl__bool__12 = c_rt_lib0ne(___nl__im__19, ___nl__im__21);
#line 855
c_rt_lib0clear(&___nl__im__19);
#line 855
c_rt_lib0clear(&___nl__im__21);
#line 855
label_53:
;
#line 855
//clear ___nl__bool__13;
#line 855
___nl__bool__12 = !___nl__bool__12;
#line 855
if(___nl__bool__12){ goto label_61;}
#line 855
___nl__int__22 = 1;
#line 855
___nl__int__1 = ___nl__int__1 - ___nl__int__22;
#line 855
//clear ___nl__int__22;
#line 855
goto label_29;
#line 855
label_61:
;
#line 856
___nl__int__24 = 0;
#line 856
___nl__bool__23 = ___nl__int__1 <= ___nl__int__24;
#line 856
//clear ___nl__int__24;
#line 856
___nl__bool__23 = !___nl__bool__23;
#line 856
if(___nl__bool__23){ goto label_74;}
#line 856
c_rt_lib0move(&___nl__im__25,___get_global_string_const(122));
#line 856
c_rt_lib0clear(&___nl__im__0);
#line 856
//clear ___nl__int__1;
#line 856
//clear ___nl__bool__12;
#line 856
//clear ___nl__bool__23;
#line 856
return ___nl__im__25;
#line 856
goto label_74;
#line 856
label_74:
;
#line 856
//clear ___nl__bool__23;
#line 856
c_rt_lib0clear(&___nl__im__25);
#line 857
___nl__int__27 = 0;
#line 857
c_rt_lib0move(&___nl__im__26, string0substr(___nl__im__0, ___nl__int__27, ___nl__int__1));
#line 857
//clear ___nl__int__27;
#line 857
c_rt_lib0clear(&___nl__im__0);
#line 857
//clear ___nl__int__1;
#line 857
//clear ___nl__bool__12;
#line 857
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
#line 862
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 863
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 864
c_rt_lib0move(&___nl__im__5,___get_global_string_const(122));
#line 864
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 864
c_rt_lib0clear(&___nl__im__5);
#line 865
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 866
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 867
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 868
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 869
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(95)));
#line 870
___nl__bool__11 = false;
#line 870
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 871
___nl__bool__13 = false;
#line 871
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 871
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(103), ___nl__im__2, ___get_global_string_const(102), ___nl__im__3, ___get_global_string_const(97), ___nl__im__4, ___get_global_string_const(100), ___nl__im__6, ___get_global_string_const(99), ___nl__im__7, ___get_global_string_const(101), ___nl__im__8, ___get_global_string_const(98), ___nl__im__9, ___get_global_string_const(104), ___nl__im__10, ___get_global_string_const(105), ___nl__im__12, ___get_global_string_const(106), ___nl__im__14));
#line 871
c_rt_lib0clear(&___nl__im__2);
#line 871
c_rt_lib0clear(&___nl__im__3);
#line 871
c_rt_lib0clear(&___nl__im__4);
#line 871
c_rt_lib0clear(&___nl__im__6);
#line 871
c_rt_lib0clear(&___nl__im__7);
#line 871
c_rt_lib0clear(&___nl__im__8);
#line 871
c_rt_lib0clear(&___nl__im__9);
#line 871
c_rt_lib0clear(&___nl__im__10);
#line 871
//clear ___nl__bool__11;
#line 871
c_rt_lib0clear(&___nl__im__12);
#line 871
//clear ___nl__bool__13;
#line 871
c_rt_lib0clear(&___nl__im__14);
#line 873
___nl__bool__15 = false;
#line 874
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 875
___nl__int__17 = 1;
#line 875
label_30:
;
#line 875
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 875
___nl__bool__18 = ___nl__int__17 < ___nl__int__19;
#line 875
//clear ___nl__int__19;
#line 875
___nl__bool__18 = !___nl__bool__18;
#line 875
if(___nl__bool__18){ goto label_510;}
#line 876
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 877
___nl__int__23 = string0length(___nl__im__20);
#line 877
___nl__int__24 = 2;
#line 877
___nl__bool__21 = ___nl__int__23 >= ___nl__int__24;
#line 877
//clear ___nl__int__23;
#line 877
//clear ___nl__int__24;
#line 877
___nl__bool__22 = !___nl__bool__21;
#line 877
if(___nl__bool__22){ goto label_53;}
#line 877
___nl__int__26 = 0;
#line 877
___nl__int__27 = 2;
#line 877
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__20, ___nl__int__26, ___nl__int__27));
#line 877
//clear ___nl__int__26;
#line 877
//clear ___nl__int__27;
#line 877
c_rt_lib0move(&___nl__im__28,___get_global_string_const(207));
#line 877
___nl__bool__21 = c_rt_lib0eq(___nl__im__25, ___nl__im__28);
#line 877
c_rt_lib0clear(&___nl__im__25);
#line 877
c_rt_lib0clear(&___nl__im__28);
#line 877
label_53:
;
#line 877
//clear ___nl__bool__22;
#line 877
___nl__bool__21 = !___nl__bool__21;
#line 877
if(___nl__bool__21){ goto label_480;}
#line 878
___nl__int__30 = 2;
#line 878
___nl__int__32 = string0length(___nl__im__20);
#line 878
___nl__int__33 = 2;
#line 878
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 878
//clear ___nl__int__32;
#line 878
//clear ___nl__int__33;
#line 878
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__20, ___nl__int__30, ___nl__int__31));
#line 878
//clear ___nl__int__30;
#line 878
//clear ___nl__int__31;
#line 879
c_rt_lib0move(&___nl__im__35,___get_global_string_const(99));
#line 879
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__35);
#line 879
c_rt_lib0clear(&___nl__im__35);
#line 879
___nl__bool__34 = !___nl__bool__34;
#line 879
if(___nl__bool__34){ goto label_79;}
#line 880
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 880
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__37));
#line 880
c_rt_lib0clear(&___nl__im__37);
#line 880
c_rt_lib0copy(&___nl__im__38, ___nl__im__36);
#line 880
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__38);
#line 880
c_rt_lib0clear(&___nl__im__36);
#line 880
c_rt_lib0clear(&___nl__im__38);
#line 881
goto label_475;
#line 881
label_79:
;
#line 881
c_rt_lib0move(&___nl__im__39,___get_global_string_const(64));
#line 881
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__39);
#line 881
c_rt_lib0clear(&___nl__im__39);
#line 881
___nl__bool__34 = !___nl__bool__34;
#line 881
if(___nl__bool__34){ goto label_91;}
#line 882
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_string_const(64)));
#line 882
c_rt_lib0copy(&___nl__im__41, ___nl__im__40);
#line 882
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__41);
#line 882
c_rt_lib0clear(&___nl__im__40);
#line 882
c_rt_lib0clear(&___nl__im__41);
#line 883
goto label_475;
#line 883
label_91:
;
#line 883
c_rt_lib0move(&___nl__im__42,___get_global_string_const(68));
#line 883
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__42);
#line 883
c_rt_lib0clear(&___nl__im__42);
#line 883
___nl__bool__34 = !___nl__bool__34;
#line 883
if(___nl__bool__34){ goto label_103;}
#line 884
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(68)));
#line 884
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 884
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__44);
#line 884
c_rt_lib0clear(&___nl__im__43);
#line 884
c_rt_lib0clear(&___nl__im__44);
#line 885
goto label_475;
#line 885
label_103:
;
#line 885
c_rt_lib0move(&___nl__im__45,___get_global_string_const(65));
#line 885
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__45);
#line 885
c_rt_lib0clear(&___nl__im__45);
#line 885
___nl__bool__34 = !___nl__bool__34;
#line 885
if(___nl__bool__34){ goto label_115;}
#line 886
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 886
c_rt_lib0copy(&___nl__im__47, ___nl__im__46);
#line 886
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__47);
#line 886
c_rt_lib0clear(&___nl__im__46);
#line 886
c_rt_lib0clear(&___nl__im__47);
#line 887
goto label_475;
#line 887
label_115:
;
#line 887
c_rt_lib0move(&___nl__im__48,___get_global_string_const(66));
#line 887
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__48);
#line 887
c_rt_lib0clear(&___nl__im__48);
#line 887
___nl__bool__34 = !___nl__bool__34;
#line 887
if(___nl__bool__34){ goto label_138;}
#line 888
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 888
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(66));
#line 888
c_rt_lib0clear(&___nl__im__50);
#line 888
___nl__bool__49 = !___nl__bool__49;
#line 888
___nl__bool__49 = !___nl__bool__49;
#line 888
if(___nl__bool__49){ goto label_135;}
#line 889
c_rt_lib0move(&___nl__im__52, compiler_priv0get_default_js_opts());
#line 889
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__52));
#line 889
c_rt_lib0clear(&___nl__im__52);
#line 889
c_rt_lib0copy(&___nl__im__53, ___nl__im__51);
#line 889
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__53);
#line 889
c_rt_lib0clear(&___nl__im__51);
#line 889
c_rt_lib0clear(&___nl__im__53);
#line 890
goto label_135;
#line 890
label_135:
;
#line 890
//clear ___nl__bool__49;
#line 891
goto label_475;
#line 891
label_138:
;
#line 891
c_rt_lib0move(&___nl__im__54,___get_global_string_const(69));
#line 891
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__54);
#line 891
c_rt_lib0clear(&___nl__im__54);
#line 891
___nl__bool__34 = !___nl__bool__34;
#line 891
if(___nl__bool__34){ goto label_150;}
#line 892
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 892
c_rt_lib0copy(&___nl__im__56, ___nl__im__55);
#line 892
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__56);
#line 892
c_rt_lib0clear(&___nl__im__55);
#line 892
c_rt_lib0clear(&___nl__im__56);
#line 893
goto label_475;
#line 893
label_150:
;
#line 893
c_rt_lib0move(&___nl__im__57,___get_global_string_const(67));
#line 893
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__57);
#line 893
c_rt_lib0clear(&___nl__im__57);
#line 893
___nl__bool__34 = !___nl__bool__34;
#line 893
if(___nl__bool__34){ goto label_163;}
#line 894
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(67)));
#line 894
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 894
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__59);
#line 894
c_rt_lib0clear(&___nl__im__58);
#line 894
c_rt_lib0clear(&___nl__im__59);
#line 895
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 896
goto label_475;
#line 896
label_163:
;
#line 896
c_rt_lib0move(&___nl__im__60,___get_global_string_const(92));
#line 896
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__60);
#line 896
c_rt_lib0clear(&___nl__im__60);
#line 896
___nl__bool__34 = !___nl__bool__34;
#line 896
if(___nl__bool__34){ goto label_175;}
#line 897
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(92)));
#line 897
c_rt_lib0copy(&___nl__im__62, ___nl__im__61);
#line 897
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__62);
#line 897
c_rt_lib0clear(&___nl__im__61);
#line 897
c_rt_lib0clear(&___nl__im__62);
#line 898
goto label_475;
#line 898
label_175:
;
#line 898
c_rt_lib0move(&___nl__im__63,___get_global_string_const(93));
#line 898
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__63);
#line 898
c_rt_lib0clear(&___nl__im__63);
#line 898
___nl__bool__34 = !___nl__bool__34;
#line 898
if(___nl__bool__34){ goto label_204;}
#line 899
___nl__int__64 = 1;
#line 899
___nl__int__17 = ___nl__int__17 + ___nl__int__64;
#line 899
//clear ___nl__int__64;
#line 900
___nl__int__66 = c_rt_lib0array_len(___nl__im__0);
#line 900
___nl__bool__65 = ___nl__int__17 < ___nl__int__66;
#line 900
//clear ___nl__int__66;
#line 900
___nl__bool__65 = !___nl__bool__65;
#line 900
___nl__bool__65 = !___nl__bool__65;
#line 900
if(___nl__bool__65){ goto label_193;}
#line 900
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 900
nl_die_arg(___nl__im__67);
#line 900
goto label_193;
#line 900
label_193:
;
#line 900
//clear ___nl__bool__65;
#line 900
c_rt_lib0clear(&___nl__im__67);
#line 901
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 901
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(93), ___nl__im__69));
#line 901
c_rt_lib0clear(&___nl__im__69);
#line 901
c_rt_lib0copy(&___nl__im__70, ___nl__im__68);
#line 901
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__70);
#line 901
c_rt_lib0clear(&___nl__im__68);
#line 901
c_rt_lib0clear(&___nl__im__70);
#line 902
goto label_475;
#line 902
label_204:
;
#line 902
c_rt_lib0move(&___nl__im__71,___get_global_string_const(90));
#line 902
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__71);
#line 902
c_rt_lib0clear(&___nl__im__71);
#line 902
___nl__bool__34 = !___nl__bool__34;
#line 902
if(___nl__bool__34){ goto label_216;}
#line 903
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 903
c_rt_lib0copy(&___nl__im__73, ___nl__im__72);
#line 903
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__73);
#line 903
c_rt_lib0clear(&___nl__im__72);
#line 903
c_rt_lib0clear(&___nl__im__73);
#line 904
goto label_475;
#line 904
label_216:
;
#line 904
c_rt_lib0move(&___nl__im__74,___get_global_string_const(91));
#line 904
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__74);
#line 904
c_rt_lib0clear(&___nl__im__74);
#line 904
___nl__bool__34 = !___nl__bool__34;
#line 904
if(___nl__bool__34){ goto label_228;}
#line 905
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_string_const(91)));
#line 905
c_rt_lib0copy(&___nl__im__76, ___nl__im__75);
#line 905
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__76);
#line 905
c_rt_lib0clear(&___nl__im__75);
#line 905
c_rt_lib0clear(&___nl__im__76);
#line 906
goto label_475;
#line 906
label_228:
;
#line 906
c_rt_lib0move(&___nl__im__77,___get_global_string_const(208));
#line 906
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__77);
#line 906
c_rt_lib0clear(&___nl__im__77);
#line 906
if(___nl__bool__34){ goto label_236;}
#line 906
c_rt_lib0move(&___nl__im__78,___get_global_string_const(209));
#line 906
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__78);
#line 906
c_rt_lib0clear(&___nl__im__78);
#line 906
label_236:
;
#line 906
___nl__bool__34 = !___nl__bool__34;
#line 906
if(___nl__bool__34){ goto label_264;}
#line 907
___nl__int__79 = 1;
#line 907
___nl__int__17 = ___nl__int__17 + ___nl__int__79;
#line 907
//clear ___nl__int__79;
#line 908
___nl__int__81 = c_rt_lib0array_len(___nl__im__0);
#line 908
___nl__bool__80 = ___nl__int__17 < ___nl__int__81;
#line 908
//clear ___nl__int__81;
#line 908
___nl__bool__80 = !___nl__bool__80;
#line 908
___nl__bool__80 = !___nl__bool__80;
#line 908
if(___nl__bool__80){ goto label_251;}
#line 908
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 908
nl_die_arg(___nl__im__82);
#line 908
goto label_251;
#line 908
label_251:
;
#line 908
//clear ___nl__bool__80;
#line 908
c_rt_lib0clear(&___nl__im__82);
#line 909
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 909
c_rt_lib0move(&___nl__im__85,___get_global_string_const(117));
#line 909
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 909
c_rt_lib0clear(&___nl__im__84);
#line 909
c_rt_lib0clear(&___nl__im__85);
#line 909
c_rt_lib0copy(&___nl__im__86, ___nl__im__83);
#line 909
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__86);
#line 909
c_rt_lib0clear(&___nl__im__83);
#line 909
c_rt_lib0clear(&___nl__im__86);
#line 910
goto label_475;
#line 910
label_264:
;
#line 910
c_rt_lib0move(&___nl__im__87,___get_global_string_const(210));
#line 910
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__87);
#line 910
c_rt_lib0clear(&___nl__im__87);
#line 910
___nl__bool__34 = !___nl__bool__34;
#line 910
if(___nl__bool__34){ goto label_291;}
#line 911
___nl__int__88 = 1;
#line 911
___nl__int__17 = ___nl__int__17 + ___nl__int__88;
#line 911
//clear ___nl__int__88;
#line 912
___nl__int__90 = c_rt_lib0array_len(___nl__im__0);
#line 912
___nl__bool__89 = ___nl__int__17 < ___nl__int__90;
#line 912
//clear ___nl__int__90;
#line 912
___nl__bool__89 = !___nl__bool__89;
#line 912
___nl__bool__89 = !___nl__bool__89;
#line 912
if(___nl__bool__89){ goto label_282;}
#line 912
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 912
nl_die_arg(___nl__im__91);
#line 912
goto label_282;
#line 912
label_282:
;
#line 912
//clear ___nl__bool__89;
#line 912
c_rt_lib0clear(&___nl__im__91);
#line 913
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 913
c_rt_lib0copy(&___nl__im__93, ___nl__im__92);
#line 913
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(101), ___nl__im__93);
#line 913
c_rt_lib0clear(&___nl__im__92);
#line 913
c_rt_lib0clear(&___nl__im__93);
#line 914
goto label_475;
#line 914
label_291:
;
#line 914
c_rt_lib0move(&___nl__im__94,___get_global_string_const(211));
#line 914
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__94);
#line 914
c_rt_lib0clear(&___nl__im__94);
#line 914
___nl__bool__34 = !___nl__bool__34;
#line 914
if(___nl__bool__34){ goto label_303;}
#line 915
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 915
c_rt_lib0copy(&___nl__im__96, ___nl__im__95);
#line 915
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__96);
#line 915
c_rt_lib0clear(&___nl__im__95);
#line 915
c_rt_lib0clear(&___nl__im__96);
#line 916
goto label_475;
#line 916
label_303:
;
#line 916
c_rt_lib0move(&___nl__im__97,___get_global_string_const(212));
#line 916
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__97);
#line 916
c_rt_lib0clear(&___nl__im__97);
#line 916
___nl__bool__34 = !___nl__bool__34;
#line 916
if(___nl__bool__34){ goto label_315;}
#line 917
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 917
c_rt_lib0copy(&___nl__im__99, ___nl__im__98);
#line 917
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__99);
#line 917
c_rt_lib0clear(&___nl__im__98);
#line 917
c_rt_lib0clear(&___nl__im__99);
#line 918
goto label_475;
#line 918
label_315:
;
#line 918
c_rt_lib0move(&___nl__im__100,___get_global_string_const(213));
#line 918
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__100);
#line 918
c_rt_lib0clear(&___nl__im__100);
#line 918
___nl__bool__34 = !___nl__bool__34;
#line 918
if(___nl__bool__34){ goto label_327;}
#line 919
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_string_const(87)));
#line 919
c_rt_lib0copy(&___nl__im__102, ___nl__im__101);
#line 919
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__102);
#line 919
c_rt_lib0clear(&___nl__im__101);
#line 919
c_rt_lib0clear(&___nl__im__102);
#line 920
goto label_475;
#line 920
label_327:
;
#line 920
c_rt_lib0move(&___nl__im__103,___get_global_string_const(214));
#line 920
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__103);
#line 920
c_rt_lib0clear(&___nl__im__103);
#line 920
___nl__bool__34 = !___nl__bool__34;
#line 920
if(___nl__bool__34){ goto label_339;}
#line 921
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_string_const(88)));
#line 921
c_rt_lib0copy(&___nl__im__105, ___nl__im__104);
#line 921
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__105);
#line 921
c_rt_lib0clear(&___nl__im__104);
#line 921
c_rt_lib0clear(&___nl__im__105);
#line 922
goto label_475;
#line 922
label_339:
;
#line 922
c_rt_lib0move(&___nl__im__106,___get_global_string_const(215));
#line 922
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__106);
#line 922
c_rt_lib0clear(&___nl__im__106);
#line 922
___nl__bool__34 = !___nl__bool__34;
#line 922
if(___nl__bool__34){ goto label_351;}
#line 923
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_none(___get_global_string_const(89)));
#line 923
c_rt_lib0copy(&___nl__im__108, ___nl__im__107);
#line 923
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__108);
#line 923
c_rt_lib0clear(&___nl__im__107);
#line 923
c_rt_lib0clear(&___nl__im__108);
#line 924
goto label_475;
#line 924
label_351:
;
#line 924
c_rt_lib0move(&___nl__im__109,___get_global_string_const(216));
#line 924
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__109);
#line 924
c_rt_lib0clear(&___nl__im__109);
#line 924
___nl__bool__34 = !___nl__bool__34;
#line 924
if(___nl__bool__34){ goto label_363;}
#line 925
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_string_const(96)));
#line 925
c_rt_lib0copy(&___nl__im__111, ___nl__im__110);
#line 925
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(104), ___nl__im__111);
#line 925
c_rt_lib0clear(&___nl__im__110);
#line 925
c_rt_lib0clear(&___nl__im__111);
#line 926
goto label_475;
#line 926
label_363:
;
#line 926
c_rt_lib0move(&___nl__im__112,___get_global_string_const(105));
#line 926
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__112);
#line 926
c_rt_lib0clear(&___nl__im__112);
#line 926
___nl__bool__34 = !___nl__bool__34;
#line 926
if(___nl__bool__34){ goto label_375;}
#line 927
___nl__bool__113 = true;
#line 927
c_rt_lib0move(&___nl__im__114, c_rt_lib0bool_to_nl_native(___nl__bool__113));
#line 927
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(105), ___nl__im__114);
#line 927
//clear ___nl__bool__113;
#line 927
c_rt_lib0clear(&___nl__im__114);
#line 928
goto label_475;
#line 928
label_375:
;
#line 928
c_rt_lib0move(&___nl__im__115,___get_global_string_const(106));
#line 928
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__115);
#line 928
c_rt_lib0clear(&___nl__im__115);
#line 928
___nl__bool__34 = !___nl__bool__34;
#line 928
if(___nl__bool__34){ goto label_387;}
#line 929
___nl__bool__116 = true;
#line 929
c_rt_lib0move(&___nl__im__117, c_rt_lib0bool_to_nl_native(___nl__bool__116));
#line 929
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(106), ___nl__im__117);
#line 929
//clear ___nl__bool__116;
#line 929
c_rt_lib0clear(&___nl__im__117);
#line 930
goto label_475;
#line 930
label_387:
;
#line 930
c_rt_lib0move(&___nl__im__118,___get_global_string_const(70));
#line 930
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__118);
#line 930
c_rt_lib0clear(&___nl__im__118);
#line 930
___nl__bool__34 = !___nl__bool__34;
#line 930
if(___nl__bool__34){ goto label_435;}
#line 931
___nl__int__119 = 1;
#line 931
___nl__int__17 = ___nl__int__17 + ___nl__int__119;
#line 931
//clear ___nl__int__119;
#line 932
___nl__int__121 = c_rt_lib0array_len(___nl__im__0);
#line 932
___nl__bool__120 = ___nl__int__17 < ___nl__int__121;
#line 932
//clear ___nl__int__121;
#line 932
___nl__bool__120 = !___nl__bool__120;
#line 932
___nl__bool__120 = !___nl__bool__120;
#line 932
if(___nl__bool__120){ goto label_405;}
#line 932
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 932
nl_die_arg(___nl__im__122);
#line 932
goto label_405;
#line 932
label_405:
;
#line 932
//clear ___nl__bool__120;
#line 932
c_rt_lib0clear(&___nl__im__122);
#line 934
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 934
___nl__bool__124 = c_rt_lib0priv_is(___nl__im__125, ___get_global_string_const(66));
#line 934
c_rt_lib0clear(&___nl__im__125);
#line 934
___nl__bool__124 = !___nl__bool__124;
#line 934
if(___nl__bool__124){ goto label_419;}
#line 935
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 935
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 935
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__127, ___get_global_string_const(66)));
#line 935
c_rt_lib0clear(&___nl__im__126);
#line 935
c_rt_lib0clear(&___nl__im__127);
#line 936
goto label_422;
#line 936
label_419:
;
#line 937
c_rt_lib0move(&___nl__im__123, compiler_priv0get_default_js_opts());
#line 938
goto label_422;
#line 938
label_422:
;
#line 938
//clear ___nl__bool__124;
#line 939
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 939
c_rt_lib0copy(&___nl__im__129, ___nl__im__128);
#line 939
c_rt_lib0hash_set_value_dec(&___nl__im__123, ___get_global_string_const(70), ___nl__im__129);
#line 939
c_rt_lib0clear(&___nl__im__128);
#line 939
c_rt_lib0clear(&___nl__im__129);
#line 940
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__123));
#line 940
c_rt_lib0copy(&___nl__im__131, ___nl__im__130);
#line 940
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__131);
#line 940
c_rt_lib0clear(&___nl__im__130);
#line 940
c_rt_lib0clear(&___nl__im__131);
#line 941
goto label_475;
#line 941
label_435:
;
#line 941
c_rt_lib0move(&___nl__im__132,___get_global_string_const(217));
#line 941
___nl__bool__34 = c_rt_lib0eq(___nl__im__29, ___nl__im__132);
#line 941
c_rt_lib0clear(&___nl__im__132);
#line 941
___nl__bool__34 = !___nl__bool__34;
#line 941
if(___nl__bool__34){ goto label_468;}
#line 943
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 943
___nl__bool__134 = c_rt_lib0priv_is(___nl__im__135, ___get_global_string_const(66));
#line 943
c_rt_lib0clear(&___nl__im__135);
#line 943
___nl__bool__134 = !___nl__bool__134;
#line 943
if(___nl__bool__134){ goto label_452;}
#line 944
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 944
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 944
c_rt_lib0move(&___nl__im__133, c_rt_lib0priv_as(___nl__im__137, ___get_global_string_const(66)));
#line 944
c_rt_lib0clear(&___nl__im__136);
#line 944
c_rt_lib0clear(&___nl__im__137);
#line 945
goto label_455;
#line 945
label_452:
;
#line 946
c_rt_lib0move(&___nl__im__133, compiler_priv0get_default_js_opts());
#line 947
goto label_455;
#line 947
label_455:
;
#line 947
//clear ___nl__bool__134;
#line 948
___nl__bool__138 = true;
#line 948
c_rt_lib0move(&___nl__im__139, c_rt_lib0bool_to_nl_native(___nl__bool__138));
#line 948
c_rt_lib0hash_set_value_dec(&___nl__im__133, ___get_global_string_const(71), ___nl__im__139);
#line 948
//clear ___nl__bool__138;
#line 948
c_rt_lib0clear(&___nl__im__139);
#line 949
c_rt_lib0move(&___nl__im__140, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__133));
#line 949
c_rt_lib0copy(&___nl__im__141, ___nl__im__140);
#line 949
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__141);
#line 949
c_rt_lib0clear(&___nl__im__140);
#line 949
c_rt_lib0clear(&___nl__im__141);
#line 950
goto label_475;
#line 950
label_468:
;
#line 951
c_rt_lib0move(&___nl__im__143,___get_global_string_const(218));
#line 951
c_rt_lib0move(&___nl__im__142, c_rt_lib0concat_new(___nl__im__143, ___nl__im__20));
#line 951
c_rt_lib0clear(&___nl__im__143);
#line 951
c_rt_lib0delete(c_fe_lib0print(___nl__im__142));
#line 951
c_rt_lib0clear(&___nl__im__142);
#line 952
goto label_475;
#line 952
label_475:
;
#line 952
//clear ___nl__bool__34;
#line 952
c_rt_lib0clear(&___nl__im__123);
#line 952
c_rt_lib0clear(&___nl__im__133);
#line 953
goto label_502;
#line 953
label_480:
;
#line 954
___nl__bool__144 = ___nl__bool__15;
#line 954
___nl__bool__144 = !___nl__bool__144;
#line 954
___nl__bool__144 = !___nl__bool__144;
#line 954
if(___nl__bool__144){ goto label_491;}
#line 954
c_rt_lib0move(&___nl__im__145, c_rt_lib0array_mk(0));
#line 954
c_rt_lib0copy(&___nl__im__146, ___nl__im__145);
#line 954
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__146);
#line 954
c_rt_lib0clear(&___nl__im__145);
#line 954
c_rt_lib0clear(&___nl__im__146);
#line 954
goto label_491;
#line 954
label_491:
;
#line 954
//clear ___nl__bool__144;
#line 955
c_rt_lib0move(&___nl__im__147,___get_global_string_const(97));
#line 955
c_rt_lib0move(&___nl__im__147, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__147));
#line 955
c_rt_lib0delete(array0push(&___nl__im__147, ___nl__im__20));
#line 955
c_rt_lib0move(&___nl__string__148,___get_global_string_const(97));
#line 955
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__148, ___nl__im__147));
#line 955
c_rt_lib0clear(&___nl__im__147);
#line 955
c_rt_lib0clear(&___nl__string__148);
#line 956
___nl__bool__15 = true;
#line 957
goto label_502;
#line 957
label_502:
;
#line 957
//clear ___nl__bool__21;
#line 957
c_rt_lib0clear(&___nl__im__29);
#line 957
c_rt_lib0clear(&___nl__im__20);
#line 875
___nl__int__149 = 1;
#line 875
___nl__int__17 = ___nl__int__17 + ___nl__int__149;
#line 875
//clear ___nl__int__149;
#line 958
goto label_30;
#line 958
label_510:
;
#line 959
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 959
c_rt_lib0move(&___nl__im__152,___get_global_string_const(36));
#line 959
___nl__bool__150 = c_rt_lib0eq(___nl__im__151, ___nl__im__152);
#line 959
c_rt_lib0clear(&___nl__im__151);
#line 959
c_rt_lib0clear(&___nl__im__152);
#line 959
___nl__bool__150 = !___nl__bool__150;
#line 959
if(___nl__bool__150){ goto label_530;}
#line 960
c_rt_lib0move(&___nl__im__155,___get_global_string_const(219));
#line 960
c_rt_lib0move(&___nl__im__154, c_rt_lib0concat_new(___nl__im__155, ___nl__im__16));
#line 960
c_rt_lib0clear(&___nl__im__155);
#line 960
c_rt_lib0move(&___nl__im__156,___get_global_string_const(117));
#line 960
c_rt_lib0move(&___nl__im__153, c_rt_lib0concat_new(___nl__im__154, ___nl__im__156));
#line 960
c_rt_lib0clear(&___nl__im__154);
#line 960
c_rt_lib0clear(&___nl__im__156);
#line 960
c_rt_lib0copy(&___nl__im__157, ___nl__im__153);
#line 960
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__157);
#line 960
c_rt_lib0clear(&___nl__im__153);
#line 960
c_rt_lib0clear(&___nl__im__157);
#line 961
goto label_530;
#line 961
label_530:
;
#line 961
//clear ___nl__bool__150;
#line 962
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 962
___nl__bool__158 = c_rt_lib0priv_is(___nl__im__159, ___get_global_string_const(80));
#line 962
c_rt_lib0clear(&___nl__im__159);
#line 962
___nl__bool__158 = !___nl__bool__158;
#line 962
if(___nl__bool__158){ goto label_549;}
#line 962
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 962
c_rt_lib0move(&___nl__im__163, compiler_priv0get_default_deref_file());
#line 962
c_rt_lib0move(&___nl__im__161, c_rt_lib0concat_new(___nl__im__162, ___nl__im__163));
#line 962
c_rt_lib0clear(&___nl__im__162);
#line 962
c_rt_lib0clear(&___nl__im__163);
#line 962
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__161));
#line 962
c_rt_lib0clear(&___nl__im__161);
#line 962
c_rt_lib0copy(&___nl__im__164, ___nl__im__160);
#line 962
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__164);
#line 962
c_rt_lib0clear(&___nl__im__160);
#line 962
c_rt_lib0clear(&___nl__im__164);
#line 962
goto label_549;
#line 962
label_549:
;
#line 962
//clear ___nl__bool__158;
#line 963
c_rt_lib0clear(&___nl__im__0);
#line 963
//clear ___nl__bool__15;
#line 963
c_rt_lib0clear(&___nl__im__16);
#line 963
//clear ___nl__int__17;
#line 963
//clear ___nl__bool__18;
#line 963
c_rt_lib0clear(&___nl__im__20);
#line 963
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
#line 968
c_rt_lib0move(&___nl__im__1,___get_global_string_const(67));
#line 969
___nl__bool__2 = false;
#line 969
c_rt_lib0move(&___nl__im__3, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 969
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_string_const(70), ___nl__im__1, ___get_global_string_const(71), ___nl__im__3));
#line 969
c_rt_lib0clear(&___nl__im__1);
#line 969
//clear ___nl__bool__2;
#line 969
c_rt_lib0clear(&___nl__im__3);
#line 969
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
#line 974
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 975
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(179)));
#line 975
___nl__int__4 = 0;
#line 975
___nl__int__5 = 1;
#line 975
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 975
label_5:
;
#line 975
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 975
if(___nl__bool__7){ goto label_44;}
#line 975
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 975
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 976
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(220)));
#line 976
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(221)));
#line 976
c_rt_lib0clear(&___nl__im__10);
#line 977
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 978
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(113)));
#line 978
___nl__int__14 = 0;
#line 978
___nl__int__15 = 1;
#line 978
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 978
label_18:
;
#line 978
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 978
if(___nl__bool__17){ goto label_33;}
#line 978
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 978
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 979
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(221)));
#line 979
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(111)));
#line 979
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(110), ___nl__im__20, ___get_global_string_const(111), ___nl__im__21));
#line 979
c_rt_lib0clear(&___nl__im__20);
#line 979
c_rt_lib0clear(&___nl__im__21);
#line 979
c_rt_lib0array_push(&___nl__im__11, ___nl__im__19);
#line 979
c_rt_lib0clear(&___nl__im__19);
#line 979
c_rt_lib0clear(&___nl__im__13);
#line 980
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 980
goto label_18;
#line 980
label_33:
;
#line 981
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_string_const(112), ___nl__im__9, ___get_global_string_const(113), ___nl__im__11));
#line 981
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(181)));
#line 981
c_rt_lib0copy(&___nl__im__23, ___nl__im__22);
#line 981
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__1, ___nl__im__24, ___nl__im__23));
#line 981
c_rt_lib0clear(&___nl__im__22);
#line 981
c_rt_lib0clear(&___nl__im__23);
#line 981
c_rt_lib0clear(&___nl__im__24);
#line 981
c_rt_lib0clear(&___nl__im__3);
#line 982
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 982
goto label_5;
#line 982
label_44:
;
#line 983
c_rt_lib0clear(&___nl__im__0);
#line 983
c_rt_lib0clear(&___nl__im__2);
#line 983
c_rt_lib0clear(&___nl__im__3);
#line 983
//clear ___nl__int__4;
#line 983
//clear ___nl__int__5;
#line 983
//clear ___nl__int__6;
#line 983
//clear ___nl__bool__7;
#line 983
c_rt_lib0clear(&___nl__im__8);
#line 983
c_rt_lib0clear(&___nl__im__9);
#line 983
c_rt_lib0clear(&___nl__im__11);
#line 983
c_rt_lib0clear(&___nl__im__12);
#line 983
c_rt_lib0clear(&___nl__im__13);
#line 983
//clear ___nl__int__14;
#line 983
//clear ___nl__int__15;
#line 983
//clear ___nl__int__16;
#line 983
//clear ___nl__bool__17;
#line 983
c_rt_lib0clear(&___nl__im__18);
#line 983
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
#line 987
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__1));
#line 987
label_1:
;
#line 987
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 987
if(___nl__bool__3){ goto label_49;}
#line 987
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 987
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__2));
#line 988
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(222)));
#line 988
___nl__int__8 = 0;
#line 988
___nl__int__9 = 1;
#line 988
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 988
label_10:
;
#line 988
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 988
if(___nl__bool__11){ goto label_32;}
#line 988
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 988
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 989
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(223)));
#line 989
___nl__int__15 = 0;
#line 989
___nl__int__16 = 1;
#line 989
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 989
label_19:
;
#line 989
___nl__bool__18 = ___nl__int__15 >= ___nl__int__17;
#line 989
if(___nl__bool__18){ goto label_28;}
#line 989
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 989
c_rt_lib0copy(&___nl__im__14, ___nl__im__19);
#line 990
c_rt_lib0delete(compiler_priv0add_cmd_to_called_from(___ref___im__0, ___nl__im__14, ___nl__im__2));
#line 990
c_rt_lib0clear(&___nl__im__14);
#line 991
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 991
goto label_19;
#line 991
label_28:
;
#line 991
c_rt_lib0clear(&___nl__im__7);
#line 992
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 992
goto label_10;
#line 992
label_32:
;
#line 992
c_rt_lib0clear(&___nl__im__6);
#line 992
c_rt_lib0clear(&___nl__im__7);
#line 992
//clear ___nl__int__8;
#line 992
//clear ___nl__int__9;
#line 992
//clear ___nl__int__10;
#line 992
//clear ___nl__bool__11;
#line 992
c_rt_lib0clear(&___nl__im__12);
#line 992
c_rt_lib0clear(&___nl__im__13);
#line 992
c_rt_lib0clear(&___nl__im__14);
#line 992
//clear ___nl__int__15;
#line 992
//clear ___nl__int__16;
#line 992
//clear ___nl__int__17;
#line 992
//clear ___nl__bool__18;
#line 992
c_rt_lib0clear(&___nl__im__19);
#line 993
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 993
goto label_1;
#line 993
label_49:
;
#line 993
c_rt_lib0clear(&___nl__im__1);
#line 993
c_rt_lib0clear(&___nl__im__2);
#line 993
//clear ___nl__bool__3;
#line 993
c_rt_lib0clear(&___nl__im__4);
#line 993
c_rt_lib0clear(&___nl__im__5);
#line 993
c_rt_lib0clear(&___nl__im__6);
#line 993
c_rt_lib0clear(&___nl__im__7);
#line 993
//clear ___nl__int__8;
#line 993
//clear ___nl__int__9;
#line 993
//clear ___nl__int__10;
#line 993
//clear ___nl__bool__11;
#line 993
c_rt_lib0clear(&___nl__im__12);
#line 993
c_rt_lib0clear(&___nl__im__13);
#line 993
c_rt_lib0clear(&___nl__im__14);
#line 993
//clear ___nl__int__15;
#line 993
//clear ___nl__int__16;
#line 993
//clear ___nl__int__17;
#line 993
//clear ___nl__bool__18;
#line 993
c_rt_lib0clear(&___nl__im__19);
#line 993
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
#line 998
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 998
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(225));
#line 998
c_rt_lib0clear(&___nl__im__4);
#line 998
___nl__bool__3 = !___nl__bool__3;
#line 998
if(___nl__bool__3){ goto label_40;}
#line 999
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 999
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 999
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(225)));
#line 999
c_rt_lib0clear(&___nl__im__6);
#line 999
c_rt_lib0clear(&___nl__im__7);
#line 1000
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(111)));
#line 1000
c_rt_lib0move(&___nl__im__11,___get_global_string_const(34));
#line 1000
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 1000
c_rt_lib0clear(&___nl__im__10);
#line 1000
c_rt_lib0clear(&___nl__im__11);
#line 1000
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(226)));
#line 1000
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 1000
c_rt_lib0clear(&___nl__im__9);
#line 1000
c_rt_lib0clear(&___nl__im__12);
#line 1001
___nl__bool__13 = hash0has_key((*___ref___im__0), ___nl__im__8);
#line 1001
___nl__bool__13 = !___nl__bool__13;
#line 1001
___nl__bool__13 = !___nl__bool__13;
#line 1001
if(___nl__bool__13){ goto label_29;}
#line 1002
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 1002
c_rt_lib0copy(&___nl__im__15, ___nl__im__14);
#line 1002
c_rt_lib0delete(c_rt_lib0hash_set_value(___ref___im__0, ___nl__im__8, ___nl__im__15));
#line 1002
c_rt_lib0clear(&___nl__im__14);
#line 1002
c_rt_lib0clear(&___nl__im__15);
#line 1003
goto label_29;
#line 1003
label_29:
;
#line 1003
//clear ___nl__bool__13;
#line 1004
___nl__int__16 = 1;
#line 1004
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__8));
#line 1004
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 1004
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__17, ___nl__im__2, ___nl__im__18));
#line 1004
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__im__8, ___nl__im__17));
#line 1004
//clear ___nl__int__16;
#line 1004
c_rt_lib0clear(&___nl__im__17);
#line 1004
c_rt_lib0clear(&___nl__im__18);
#line 1005
goto label_40;
#line 1005
label_40:
;
#line 1005
//clear ___nl__bool__3;
#line 1005
c_rt_lib0clear(&___nl__im__5);
#line 1005
c_rt_lib0clear(&___nl__im__8);
#line 1005
c_rt_lib0clear(&___nl__im__1);
#line 1005
c_rt_lib0clear(&___nl__im__2);
#line 1005
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
