
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
void compiler0anon_type00ownarranon_type00im0clear(anon_type00ownarranon_type00im arr) {
if (arr.value == NULL) return;
for (unsigned int i = 0; i < arr.size; i++) {
	c_rt_lib0delete(arr.value[i]);
}
free_mem(arr.value, sizeof(ImmT )*arr.capacity);
}
void compiler0anon_type00ownarranon_type00im0free(anon_type00ownarranon_type00im *arr) {
compiler0anon_type00ownarranon_type00im0clear(*arr);
free_mem(arr, sizeof(*arr));
}
void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clear(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE rec) {
generator_c0const_t0type0clear(rec.int0field);;
generator_c0const_t0type0clear(rec.string0field);;
generator_c0const_t0type0clear(rec.singleton0field);;
;
}
void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0free(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE *rec) {
compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clear(*rec);
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
void compiler0anon_type00ownhashanon_type00bool0clear(anon_type00ownhashanon_type00bool hash) {
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
compiler0anon_type00ownhashanon_type00bool0clear(*hash);
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
ImmT  compiler_priv0translate(ImmT  ___nl__im__0,post_processing_t0state_t0type* ___ref___im__1,ImmT  ___nl__im__2);
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
ImmT  compiler_priv0get_defined_types(ImmT  ___nl__im__0);
bool  compiler_priv0own_type_changed(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);


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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
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
#line 155
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 155
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 155
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 155
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(81), ___nl__im__14, ___get_global_string_const(80), ___nl__im__15));
#line 155
c_rt_lib0clear(&___nl__im__14);
#line 155
c_rt_lib0clear(&___nl__im__15);
#line 155
c_rt_lib0move(&___nl__im__12, ptd0var(___nl__im__13));
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(112), ___nl__im__3, ___get_global_string_const(113), ___nl__im__4, ___get_global_string_const(114), ___nl__im__12));
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0clear(&___nl__im__12);
#line 155
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
return ___nl__im__0;
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
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
#line 161
c_rt_lib0move(&___nl__im__1, compiler_priv0parse_command_line_args(___nl__im__0));
#line 162
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 162
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__2));
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 163
___nl__int__3 = 0;
#line 164
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 164
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(90));
#line 164
c_rt_lib0clear(&___nl__im__5);
#line 164
___nl__bool__4 = !___nl__bool__4;
#line 164
if(___nl__bool__4){ goto label_15;}
#line 165
c_rt_lib0move(&___nl__im__6,___get_global_string_const(115));
#line 165
c_rt_lib0delete(c_fe_lib0print(___nl__im__6));
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 166
___nl__int__3 = compiler_priv0compile_strict_file(___nl__im__1);
#line 167
goto label_48;
#line 167
label_15:
;
#line 167
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 167
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(92));
#line 167
c_rt_lib0clear(&___nl__im__7);
#line 167
if(___nl__bool__4){ goto label_23;}
#line 167
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 167
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(93));
#line 167
c_rt_lib0clear(&___nl__im__8);
#line 167
label_23:
;
#line 167
___nl__bool__4 = !___nl__bool__4;
#line 167
if(___nl__bool__4){ goto label_32;}
#line 168
c_rt_lib0move(&___nl__im__9,___get_global_string_const(116));
#line 168
c_rt_lib0delete(c_fe_lib0print(___nl__im__9));
#line 168
c_rt_lib0clear(&___nl__im__9);
#line 169
c_rt_lib0delete(compiler_priv0compile_ide(___nl__im__1));
#line 170
___nl__int__3 = 0;
#line 171
goto label_48;
#line 171
label_32:
;
#line 171
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(102)));
#line 171
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(91));
#line 171
c_rt_lib0clear(&___nl__im__10);
#line 171
___nl__bool__4 = !___nl__bool__4;
#line 171
if(___nl__bool__4){ goto label_44;}
#line 172
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(97)));
#line 172
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 172
___nl__int__3 = interpreter_wrapper0exec_interpreter(___nl__im__11, ___nl__im__12);
#line 172
c_rt_lib0clear(&___nl__im__11);
#line 172
c_rt_lib0clear(&___nl__im__12);
#line 173
goto label_48;
#line 173
label_44:
;
#line 174
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 174
nl_die_arg(___nl__im__13);
#line 175
goto label_48;
#line 175
label_48:
;
#line 175
//clear ___nl__bool__4;
#line 175
c_rt_lib0clear(&___nl__im__13);
#line 176
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(106)));
#line 176
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 176
c_rt_lib0clear(&___nl__im__15);
#line 176
___nl__bool__14 = !___nl__bool__14;
#line 176
if(___nl__bool__14){ goto label_66;}
#line 177
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 177
c_rt_lib0move(&___nl__im__18,___get_global_string_const(117));
#line 177
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 177
c_rt_lib0clear(&___nl__im__17);
#line 177
c_rt_lib0clear(&___nl__im__18);
#line 178
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__16));
#line 179
c_rt_lib0move(&___nl__im__19, compiler_priv0get_profile_file_name(___nl__im__16));
#line 179
c_rt_lib0delete(profile0save(___nl__im__19));
#line 179
c_rt_lib0clear(&___nl__im__19);
#line 180
goto label_66;
#line 180
label_66:
;
#line 180
//clear ___nl__bool__14;
#line 180
c_rt_lib0clear(&___nl__im__16);
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
c_rt_lib0clear(&___nl__im__1);
#line 181
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
#line 185
c_rt_lib0move(&___nl__im__2,___get_global_string_const(118));
#line 185
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 186
c_rt_lib0move(&___nl__im__4, nsystem0time());
#line 186
c_rt_lib0move(&___nl__im__3, nsystem0localtime(___nl__im__4));
#line 186
c_rt_lib0clear(&___nl__im__4);
#line 187
c_rt_lib0move(&___nl__im__5, nsystem0get_pid());
#line 188
c_rt_lib0move(&___nl__im__6, nsystem0time_microsec());
#line 189
___nl__int__7 = 5;
#line 189
___nl__int__8 = 0;
#line 189
___nl__int__9 = 1;
#line 189
label_11:
;
#line 189
___nl__bool__10 = ___nl__int__8 >= ___nl__int__7;
#line 189
if(___nl__bool__10){ goto label_27;}
#line 190
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__3, ___nl__int__8));
#line 190
___nl__int__13 = 2;
#line 190
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 190
c_rt_lib0move(&___nl__im__11, string_utils0int2str(___nl__im__12, ___nl__im__14));
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
//clear ___nl__int__13;
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0copy(&___nl__im__15, ___nl__im__11);
#line 190
c_rt_lib0array_set(&___nl__im__3, ___nl__int__8, ___nl__im__15);
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 191
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 191
goto label_11;
#line 191
label_27:
;
#line 192
___nl__int__19 = 1;
#line 192
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 192
//clear ___nl__int__19;
#line 192
___nl__int__20 = 1000;
#line 192
___nl__int__21 = getIntFromImm(___nl__im__18);
#line 192
___nl__int__17 = ___nl__int__21 / ___nl__int__20;
#line 192
c_rt_lib0clear(&___nl__im__18);
#line 192
//clear ___nl__int__20;
#line 192
//clear ___nl__int__21;
#line 192
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__17));
#line 192
___nl__int__23 = 3;
#line 192
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__23));
#line 192
c_rt_lib0move(&___nl__im__16, string_utils0int2str(___nl__im__22, ___nl__im__24));
#line 192
//clear ___nl__int__17;
#line 192
c_rt_lib0clear(&___nl__im__22);
#line 192
//clear ___nl__int__23;
#line 192
c_rt_lib0clear(&___nl__im__24);
#line 193
c_rt_lib0move(&___nl__im__39,___get_global_string_const(119));
#line 193
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__1, ___nl__im__39));
#line 193
c_rt_lib0clear(&___nl__im__39);
#line 193
___nl__int__41 = 5;
#line 193
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__3, ___nl__int__41));
#line 193
//clear ___nl__int__41;
#line 193
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__40));
#line 193
c_rt_lib0clear(&___nl__im__38);
#line 193
c_rt_lib0clear(&___nl__im__40);
#line 193
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 193
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__42));
#line 193
c_rt_lib0clear(&___nl__im__37);
#line 193
c_rt_lib0clear(&___nl__im__42);
#line 193
___nl__int__44 = 4;
#line 193
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__3, ___nl__int__44));
#line 193
//clear ___nl__int__44;
#line 193
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 193
c_rt_lib0clear(&___nl__im__36);
#line 193
c_rt_lib0clear(&___nl__im__43);
#line 193
c_rt_lib0move(&___nl__im__45,___get_global_string_const(36));
#line 193
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__45));
#line 193
c_rt_lib0clear(&___nl__im__35);
#line 193
c_rt_lib0clear(&___nl__im__45);
#line 193
___nl__int__47 = 3;
#line 193
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__3, ___nl__int__47));
#line 193
//clear ___nl__int__47;
#line 193
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__46));
#line 193
c_rt_lib0clear(&___nl__im__34);
#line 193
c_rt_lib0clear(&___nl__im__46);
#line 193
c_rt_lib0move(&___nl__im__48,___get_global_string_const(120));
#line 193
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__48));
#line 193
c_rt_lib0clear(&___nl__im__33);
#line 193
c_rt_lib0clear(&___nl__im__48);
#line 193
___nl__int__50 = 2;
#line 193
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__3, ___nl__int__50));
#line 193
//clear ___nl__int__50;
#line 193
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__49));
#line 193
c_rt_lib0clear(&___nl__im__32);
#line 193
c_rt_lib0clear(&___nl__im__49);
#line 193
___nl__int__52 = 1;
#line 193
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__3, ___nl__int__52));
#line 193
//clear ___nl__int__52;
#line 193
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__51));
#line 193
c_rt_lib0clear(&___nl__im__31);
#line 193
c_rt_lib0clear(&___nl__im__51);
#line 193
___nl__int__54 = 0;
#line 193
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__3, ___nl__int__54));
#line 193
//clear ___nl__int__54;
#line 193
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__53));
#line 193
c_rt_lib0clear(&___nl__im__30);
#line 193
c_rt_lib0clear(&___nl__im__53);
#line 193
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__16));
#line 193
c_rt_lib0clear(&___nl__im__29);
#line 193
c_rt_lib0move(&___nl__im__55,___get_global_string_const(120));
#line 193
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__55));
#line 193
c_rt_lib0clear(&___nl__im__28);
#line 193
c_rt_lib0clear(&___nl__im__55);
#line 193
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__5));
#line 193
c_rt_lib0clear(&___nl__im__27);
#line 194
c_rt_lib0move(&___nl__im__56,___get_global_string_const(121));
#line 194
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__56));
#line 194
c_rt_lib0clear(&___nl__im__26);
#line 194
c_rt_lib0clear(&___nl__im__56);
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
c_rt_lib0clear(&___nl__im__1);
#line 194
c_rt_lib0clear(&___nl__im__3);
#line 194
c_rt_lib0clear(&___nl__im__5);
#line 194
c_rt_lib0clear(&___nl__im__6);
#line 194
//clear ___nl__int__7;
#line 194
//clear ___nl__int__8;
#line 194
//clear ___nl__int__9;
#line 194
//clear ___nl__bool__10;
#line 194
c_rt_lib0clear(&___nl__im__16);
#line 194
return ___nl__im__25;
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
c_rt_lib0clear(&___nl__im__1);
#line 194
c_rt_lib0clear(&___nl__im__3);
#line 194
c_rt_lib0clear(&___nl__im__5);
#line 194
c_rt_lib0clear(&___nl__im__6);
#line 194
//clear ___nl__int__7;
#line 194
//clear ___nl__int__8;
#line 194
//clear ___nl__int__9;
#line 194
//clear ___nl__bool__10;
#line 194
c_rt_lib0clear(&___nl__im__16);
#line 194
c_rt_lib0clear(&___nl__im__25);
#line 194
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
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
#line 198
___nl__int__2 = string0length(___nl__im__0);
#line 198
___nl__int__3 = 1;
#line 198
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 198
//clear ___nl__int__2;
#line 198
//clear ___nl__int__3;
#line 199
label_5:
;
#line 199
___nl__int__7 = 0;
#line 199
___nl__bool__4 = ___nl__int__1 >= ___nl__int__7;
#line 199
//clear ___nl__int__7;
#line 199
___nl__bool__6 = !___nl__bool__4;
#line 199
if(___nl__bool__6){ goto label_22;}
#line 199
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__1));
#line 199
___nl__int__10 = 1;
#line 199
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 199
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 199
c_rt_lib0clear(&___nl__im__9);
#line 199
//clear ___nl__int__10;
#line 199
c_rt_lib0clear(&___nl__im__11);
#line 199
c_rt_lib0move(&___nl__im__12,___get_global_string_const(118));
#line 199
___nl__bool__4 = c_rt_lib0ne(___nl__im__8, ___nl__im__12);
#line 199
c_rt_lib0clear(&___nl__im__8);
#line 199
c_rt_lib0clear(&___nl__im__12);
#line 199
label_22:
;
#line 199
//clear ___nl__bool__6;
#line 199
___nl__bool__5 = !___nl__bool__4;
#line 199
if(___nl__bool__5){ goto label_37;}
#line 199
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__1));
#line 199
___nl__int__15 = 1;
#line 199
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 199
c_rt_lib0move(&___nl__im__13, string0substr(___nl__im__0, ___nl__im__14, ___nl__im__16));
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
//clear ___nl__int__15;
#line 199
c_rt_lib0clear(&___nl__im__16);
#line 199
c_rt_lib0move(&___nl__im__17,___get_global_string_const(122));
#line 199
___nl__bool__4 = c_rt_lib0ne(___nl__im__13, ___nl__im__17);
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__17);
#line 199
label_37:
;
#line 199
//clear ___nl__bool__5;
#line 199
___nl__bool__4 = !___nl__bool__4;
#line 199
if(___nl__bool__4){ goto label_66;}
#line 200
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__1));
#line 200
___nl__int__21 = 1;
#line 200
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 200
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__im__20, ___nl__im__22));
#line 200
c_rt_lib0clear(&___nl__im__20);
#line 200
//clear ___nl__int__21;
#line 200
c_rt_lib0clear(&___nl__im__22);
#line 200
c_rt_lib0move(&___nl__im__23,___get_global_string_const(123));
#line 200
___nl__bool__18 = c_rt_lib0eq(___nl__im__19, ___nl__im__23);
#line 200
c_rt_lib0clear(&___nl__im__19);
#line 200
c_rt_lib0clear(&___nl__im__23);
#line 200
___nl__bool__18 = !___nl__bool__18;
#line 200
if(___nl__bool__18){ goto label_60;}
#line 201
___nl__int__24 = 1;
#line 201
___nl__int__1 = ___nl__int__1 - ___nl__int__24;
#line 201
//clear ___nl__int__24;
#line 202
//clear ___nl__bool__18;
#line 202
goto label_66;
#line 203
goto label_60;
#line 203
label_60:
;
#line 203
//clear ___nl__bool__18;
#line 204
___nl__int__25 = 1;
#line 204
___nl__int__1 = ___nl__int__1 - ___nl__int__25;
#line 204
//clear ___nl__int__25;
#line 205
goto label_5;
#line 205
label_66:
;
#line 206
c_rt_lib0move(&___nl__im__26,___get_global_string_const(36));
#line 207
label_68:
;
#line 207
___nl__int__30 = 0;
#line 207
___nl__bool__27 = ___nl__int__1 >= ___nl__int__30;
#line 207
//clear ___nl__int__30;
#line 207
___nl__bool__29 = !___nl__bool__27;
#line 207
if(___nl__bool__29){ goto label_85;}
#line 207
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__1));
#line 207
___nl__int__33 = 1;
#line 207
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__33));
#line 207
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__0, ___nl__im__32, ___nl__im__34));
#line 207
c_rt_lib0clear(&___nl__im__32);
#line 207
//clear ___nl__int__33;
#line 207
c_rt_lib0clear(&___nl__im__34);
#line 207
c_rt_lib0move(&___nl__im__35,___get_global_string_const(118));
#line 207
___nl__bool__27 = c_rt_lib0ne(___nl__im__31, ___nl__im__35);
#line 207
c_rt_lib0clear(&___nl__im__31);
#line 207
c_rt_lib0clear(&___nl__im__35);
#line 207
label_85:
;
#line 207
//clear ___nl__bool__29;
#line 207
___nl__bool__28 = !___nl__bool__27;
#line 207
if(___nl__bool__28){ goto label_100;}
#line 207
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__1));
#line 207
___nl__int__38 = 1;
#line 207
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__38));
#line 207
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__0, ___nl__im__37, ___nl__im__39));
#line 207
c_rt_lib0clear(&___nl__im__37);
#line 207
//clear ___nl__int__38;
#line 207
c_rt_lib0clear(&___nl__im__39);
#line 207
c_rt_lib0move(&___nl__im__40,___get_global_string_const(122));
#line 207
___nl__bool__27 = c_rt_lib0ne(___nl__im__36, ___nl__im__40);
#line 207
c_rt_lib0clear(&___nl__im__36);
#line 207
c_rt_lib0clear(&___nl__im__40);
#line 207
label_100:
;
#line 207
//clear ___nl__bool__28;
#line 207
___nl__bool__27 = !___nl__bool__27;
#line 207
if(___nl__bool__27){ goto label_117;}
#line 208
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__1));
#line 208
___nl__int__43 = 1;
#line 208
c_rt_lib0move(&___nl__im__44, c_rt_lib0int_new(___nl__int__43));
#line 208
c_rt_lib0move(&___nl__im__41, string0substr(___nl__im__0, ___nl__im__42, ___nl__im__44));
#line 208
c_rt_lib0clear(&___nl__im__42);
#line 208
//clear ___nl__int__43;
#line 208
c_rt_lib0clear(&___nl__im__44);
#line 208
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__41, ___nl__im__26));
#line 208
c_rt_lib0clear(&___nl__im__41);
#line 209
___nl__int__45 = 1;
#line 209
___nl__int__1 = ___nl__int__1 - ___nl__int__45;
#line 209
//clear ___nl__int__45;
#line 210
goto label_68;
#line 210
label_117:
;
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
//clear ___nl__int__1;
#line 211
//clear ___nl__bool__4;
#line 211
//clear ___nl__bool__27;
#line 211
return ___nl__im__26;
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
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
#line 215
___nl__int__3 = string0length(___nl__im__1);
#line 215
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 215
//clear ___nl__int__3;
#line 216
___nl__int__5 = string0length(___nl__im__0);
#line 216
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 216
___nl__bool__4 = ___nl__int__5 <= ___nl__int__6;
#line 216
//clear ___nl__int__5;
#line 216
//clear ___nl__int__6;
#line 216
___nl__bool__4 = !___nl__bool__4;
#line 216
if(___nl__bool__4){ goto label_17;}
#line 216
___nl__bool__7 = false;
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
c_rt_lib0clear(&___nl__im__2);
#line 216
//clear ___nl__bool__4;
#line 216
return ___nl__bool__7;
#line 216
goto label_17;
#line 216
label_17:
;
#line 216
//clear ___nl__bool__4;
#line 216
//clear ___nl__bool__7;
#line 217
___nl__int__9 = string0length(___nl__im__0);
#line 217
___nl__int__10 = getIntFromImm(___nl__im__2);
#line 217
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 217
//clear ___nl__int__9;
#line 217
//clear ___nl__int__10;
#line 217
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__8));
#line 217
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__im__11, ___nl__im__2));
#line 217
//clear ___nl__int__8;
#line 217
c_rt_lib0clear(&___nl__im__11);
#line 218
___nl__bool__12 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 218
c_rt_lib0clear(&___nl__im__0);
#line 218
c_rt_lib0clear(&___nl__im__1);
#line 218
c_rt_lib0clear(&___nl__im__2);
#line 218
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
#line 222
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(64));
#line 222
if(___nl__bool__1){ goto label_15;}
#line 224
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(65));
#line 224
if(___nl__bool__1){ goto label_22;}
#line 226
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(66));
#line 226
if(___nl__bool__1){ goto label_30;}
#line 228
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(68));
#line 228
if(___nl__bool__1){ goto label_43;}
#line 230
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(67));
#line 230
if(___nl__bool__1){ goto label_55;}
#line 232
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(69));
#line 232
if(___nl__bool__1){ goto label_68;}
#line 232
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 232
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 232
nl_die_arg(___nl__im__2);
#line 222
label_15:
;
#line 223
c_rt_lib0move(&___nl__im__3,___get_global_string_const(124));
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
//clear ___nl__bool__1;
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
return ___nl__im__3;
#line 224
goto label_82;
#line 224
label_22:
;
#line 225
c_rt_lib0move(&___nl__im__4,___get_global_string_const(125));
#line 225
c_rt_lib0clear(&___nl__im__0);
#line 225
//clear ___nl__bool__1;
#line 225
c_rt_lib0clear(&___nl__im__2);
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 225
return ___nl__im__4;
#line 226
goto label_82;
#line 226
label_30:
;
#line 226
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(66)));
#line 226
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 227
c_rt_lib0move(&___nl__im__7,___get_global_string_const(126));
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
//clear ___nl__bool__1;
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
c_rt_lib0clear(&___nl__im__3);
#line 227
c_rt_lib0clear(&___nl__im__4);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0clear(&___nl__im__6);
#line 227
return ___nl__im__7;
#line 228
goto label_82;
#line 228
label_43:
;
#line 229
c_rt_lib0move(&___nl__im__8,___get_global_string_const(127));
#line 229
c_rt_lib0clear(&___nl__im__0);
#line 229
//clear ___nl__bool__1;
#line 229
c_rt_lib0clear(&___nl__im__2);
#line 229
c_rt_lib0clear(&___nl__im__3);
#line 229
c_rt_lib0clear(&___nl__im__4);
#line 229
c_rt_lib0clear(&___nl__im__5);
#line 229
c_rt_lib0clear(&___nl__im__6);
#line 229
c_rt_lib0clear(&___nl__im__7);
#line 229
return ___nl__im__8;
#line 230
goto label_82;
#line 230
label_55:
;
#line 231
c_rt_lib0move(&___nl__im__9,___get_global_string_const(128));
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
//clear ___nl__bool__1;
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
c_rt_lib0clear(&___nl__im__3);
#line 231
c_rt_lib0clear(&___nl__im__4);
#line 231
c_rt_lib0clear(&___nl__im__5);
#line 231
c_rt_lib0clear(&___nl__im__6);
#line 231
c_rt_lib0clear(&___nl__im__7);
#line 231
c_rt_lib0clear(&___nl__im__8);
#line 231
return ___nl__im__9;
#line 232
goto label_82;
#line 232
label_68:
;
#line 233
c_rt_lib0move(&___nl__im__10,___get_global_string_const(129));
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
//clear ___nl__bool__1;
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
c_rt_lib0clear(&___nl__im__3);
#line 233
c_rt_lib0clear(&___nl__im__4);
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
c_rt_lib0clear(&___nl__im__6);
#line 233
c_rt_lib0clear(&___nl__im__7);
#line 233
c_rt_lib0clear(&___nl__im__8);
#line 233
c_rt_lib0clear(&___nl__im__9);
#line 233
return ___nl__im__10;
#line 234
goto label_82;
#line 234
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
#line 238
c_rt_lib0move(&___nl__im__3,___get_global_string_const(123));
#line 238
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 238
c_rt_lib0clear(&___nl__im__3);
#line 238
___nl__bool__2 = !___nl__bool__2;
#line 238
if(___nl__bool__2){ goto label_10;}
#line 238
c_rt_lib0clear(&___nl__im__0);
#line 238
c_rt_lib0clear(&___nl__im__1);
#line 238
//clear ___nl__bool__2;
#line 238
return NULL;
#line 238
goto label_10;
#line 238
label_10:
;
#line 238
//clear ___nl__bool__2;
#line 239
c_rt_lib0move(&___nl__im__4, compiler_priv0get_dir(___nl__im__1));
#line 239
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__0, ___nl__im__4));
#line 239
c_rt_lib0clear(&___nl__im__4);
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__0, ___nl__im__1));
#line 240
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__5));
#line 240
c_rt_lib0clear(&___nl__im__5);
#line 240
c_rt_lib0clear(&___nl__im__0);
#line 240
c_rt_lib0clear(&___nl__im__1);
#line 240
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
#line 245
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 245
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 245
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(130)));
#line 247
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(103)));
#line 247
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(64));
#line 247
if(___nl__bool__7){ goto label_20;}
#line 249
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(65));
#line 249
if(___nl__bool__7){ goto label_38;}
#line 251
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(66));
#line 251
if(___nl__bool__7){ goto label_63;}
#line 260
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(67));
#line 260
if(___nl__bool__7){ goto label_115;}
#line 268
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(68));
#line 268
if(___nl__bool__7){ goto label_176;}
#line 270
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(69));
#line 270
if(___nl__bool__7){ goto label_206;}
#line 270
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 270
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 270
nl_die_arg(___nl__im__8);
#line 247
label_20:
;
#line 248
c_rt_lib0move(&___nl__im__12,___get_global_string_const(124));
#line 248
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 248
c_rt_lib0clear(&___nl__im__12);
#line 248
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(64), ___nl__im__11));
#line 248
c_rt_lib0clear(&___nl__im__11);
#line 248
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__10));
#line 248
c_rt_lib0clear(&___nl__im__10);
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
c_rt_lib0clear(&___nl__im__2);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
c_rt_lib0clear(&___nl__im__5);
#line 248
c_rt_lib0clear(&___nl__im__6);
#line 248
//clear ___nl__bool__7;
#line 248
c_rt_lib0clear(&___nl__im__8);
#line 248
return ___nl__im__9;
#line 249
goto label_233;
#line 249
label_38:
;
#line 250
c_rt_lib0move(&___nl__im__17,___get_global_string_const(125));
#line 250
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__3, ___nl__im__17));
#line 250
c_rt_lib0clear(&___nl__im__17);
#line 250
c_rt_lib0move(&___nl__im__19,___get_global_string_const(131));
#line 250
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__3, ___nl__im__19));
#line 250
c_rt_lib0clear(&___nl__im__19);
#line 250
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__16, ___get_global_string_const(72), ___nl__im__18));
#line 250
c_rt_lib0clear(&___nl__im__16);
#line 250
c_rt_lib0clear(&___nl__im__18);
#line 250
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(65), ___nl__im__15));
#line 250
c_rt_lib0clear(&___nl__im__15);
#line 250
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__14));
#line 250
c_rt_lib0clear(&___nl__im__14);
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
return ___nl__im__13;
#line 251
goto label_233;
#line 251
label_63:
;
#line 251
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(66)));
#line 251
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 252
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 252
c_rt_lib0move(&___nl__im__24,___get_global_string_const(132));
#line 252
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 252
c_rt_lib0clear(&___nl__im__23);
#line 252
c_rt_lib0clear(&___nl__im__24);
#line 253
c_rt_lib0move(&___nl__im__27,___get_global_string_const(132));
#line 253
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__1));
#line 253
c_rt_lib0clear(&___nl__im__27);
#line 253
c_rt_lib0move(&___nl__im__28,___get_global_string_const(133));
#line 253
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 253
c_rt_lib0clear(&___nl__im__26);
#line 253
c_rt_lib0clear(&___nl__im__28);
#line 254
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__22, ___nl__im__1));
#line 254
c_rt_lib0move(&___nl__im__31,___get_global_string_const(133));
#line 254
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 254
c_rt_lib0clear(&___nl__im__30);
#line 254
c_rt_lib0clear(&___nl__im__31);
#line 255
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__22, ___nl__im__1));
#line 255
c_rt_lib0move(&___nl__im__34,___get_global_string_const(128));
#line 255
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 255
c_rt_lib0clear(&___nl__im__33);
#line 255
c_rt_lib0clear(&___nl__im__34);
#line 258
c_rt_lib0move(&___nl__im__39,___get_global_string_const(126));
#line 258
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__3, ___nl__im__39));
#line 258
c_rt_lib0clear(&___nl__im__39);
#line 258
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__38, ___get_global_string_const(73), ___nl__im__22, ___get_global_string_const(74), ___nl__im__25, ___get_global_string_const(75), ___nl__im__29, ___get_global_string_const(67), ___nl__im__32));
#line 258
c_rt_lib0clear(&___nl__im__38);
#line 258
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__37));
#line 258
c_rt_lib0clear(&___nl__im__37);
#line 258
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__36));
#line 258
c_rt_lib0clear(&___nl__im__36);
#line 258
c_rt_lib0clear(&___nl__im__0);
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
c_rt_lib0clear(&___nl__im__2);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0clear(&___nl__im__6);
#line 258
//clear ___nl__bool__7;
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
c_rt_lib0clear(&___nl__im__9);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0clear(&___nl__im__20);
#line 258
c_rt_lib0clear(&___nl__im__21);
#line 258
c_rt_lib0clear(&___nl__im__22);
#line 258
c_rt_lib0clear(&___nl__im__25);
#line 258
c_rt_lib0clear(&___nl__im__29);
#line 258
c_rt_lib0clear(&___nl__im__32);
#line 258
return ___nl__im__35;
#line 260
goto label_233;
#line 260
label_115:
;
#line 261
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(134)));
#line 261
___nl__int__40 = string0length(___nl__im__41);
#line 261
c_rt_lib0clear(&___nl__im__41);
#line 262
c_rt_lib0move(&___nl__im__42, compiler_priv0get_dir(___nl__im__5));
#line 263
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 263
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__42));
#line 263
c_rt_lib0clear(&___nl__im__45);
#line 263
c_rt_lib0move(&___nl__im__46,___get_global_string_const(118));
#line 263
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 263
c_rt_lib0clear(&___nl__im__44);
#line 263
c_rt_lib0clear(&___nl__im__46);
#line 263
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__43, ___nl__im__1));
#line 263
c_rt_lib0clear(&___nl__im__43);
#line 264
___nl__int__48 = string0length(___nl__im__42);
#line 264
___nl__bool__47 = ___nl__int__40 < ___nl__int__48;
#line 264
//clear ___nl__int__48;
#line 264
___nl__bool__47 = !___nl__bool__47;
#line 264
if(___nl__bool__47){ goto label_146;}
#line 265
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(98)));
#line 265
___nl__int__52 = 1;
#line 265
___nl__int__51 = ___nl__int__40 + ___nl__int__52;
#line 265
//clear ___nl__int__52;
#line 265
c_rt_lib0move(&___nl__im__53, c_rt_lib0int_new(___nl__int__51));
#line 265
c_rt_lib0move(&___nl__im__50, string0substr2(___nl__im__42, ___nl__im__53));
#line 265
//clear ___nl__int__51;
#line 265
c_rt_lib0clear(&___nl__im__53);
#line 265
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__49, ___nl__im__50));
#line 265
c_rt_lib0clear(&___nl__im__49);
#line 265
c_rt_lib0clear(&___nl__im__50);
#line 266
goto label_146;
#line 266
label_146:
;
#line 266
//clear ___nl__bool__47;
#line 267
c_rt_lib0move(&___nl__im__57,___get_global_string_const(128));
#line 267
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__3, ___nl__im__57));
#line 267
c_rt_lib0clear(&___nl__im__57);
#line 267
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(67), ___nl__im__56));
#line 267
c_rt_lib0clear(&___nl__im__56);
#line 267
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__55));
#line 267
c_rt_lib0clear(&___nl__im__55);
#line 267
c_rt_lib0clear(&___nl__im__0);
#line 267
c_rt_lib0clear(&___nl__im__1);
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__3);
#line 267
c_rt_lib0clear(&___nl__im__5);
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
//clear ___nl__bool__7;
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
c_rt_lib0clear(&___nl__im__13);
#line 267
c_rt_lib0clear(&___nl__im__20);
#line 267
c_rt_lib0clear(&___nl__im__21);
#line 267
c_rt_lib0clear(&___nl__im__22);
#line 267
c_rt_lib0clear(&___nl__im__25);
#line 267
c_rt_lib0clear(&___nl__im__29);
#line 267
c_rt_lib0clear(&___nl__im__32);
#line 267
c_rt_lib0clear(&___nl__im__35);
#line 267
//clear ___nl__int__40;
#line 267
c_rt_lib0clear(&___nl__im__42);
#line 267
return ___nl__im__54;
#line 268
goto label_233;
#line 268
label_176:
;
#line 269
c_rt_lib0move(&___nl__im__61,___get_global_string_const(127));
#line 269
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__3, ___nl__im__61));
#line 269
c_rt_lib0clear(&___nl__im__61);
#line 269
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(68), ___nl__im__60));
#line 269
c_rt_lib0clear(&___nl__im__60);
#line 269
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__59));
#line 269
c_rt_lib0clear(&___nl__im__59);
#line 269
c_rt_lib0clear(&___nl__im__0);
#line 269
c_rt_lib0clear(&___nl__im__1);
#line 269
c_rt_lib0clear(&___nl__im__2);
#line 269
c_rt_lib0clear(&___nl__im__3);
#line 269
c_rt_lib0clear(&___nl__im__5);
#line 269
c_rt_lib0clear(&___nl__im__6);
#line 269
//clear ___nl__bool__7;
#line 269
c_rt_lib0clear(&___nl__im__8);
#line 269
c_rt_lib0clear(&___nl__im__9);
#line 269
c_rt_lib0clear(&___nl__im__13);
#line 269
c_rt_lib0clear(&___nl__im__20);
#line 269
c_rt_lib0clear(&___nl__im__21);
#line 269
c_rt_lib0clear(&___nl__im__22);
#line 269
c_rt_lib0clear(&___nl__im__25);
#line 269
c_rt_lib0clear(&___nl__im__29);
#line 269
c_rt_lib0clear(&___nl__im__32);
#line 269
c_rt_lib0clear(&___nl__im__35);
#line 269
//clear ___nl__int__40;
#line 269
c_rt_lib0clear(&___nl__im__42);
#line 269
c_rt_lib0clear(&___nl__im__54);
#line 269
return ___nl__im__58;
#line 270
goto label_233;
#line 270
label_206:
;
#line 271
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 271
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(2, ___get_global_string_const(78), ___nl__im__5, ___get_global_string_const(79), ___nl__im__63));
#line 271
c_rt_lib0clear(&___nl__im__63);
#line 271
c_rt_lib0clear(&___nl__im__0);
#line 271
c_rt_lib0clear(&___nl__im__1);
#line 271
c_rt_lib0clear(&___nl__im__2);
#line 271
c_rt_lib0clear(&___nl__im__3);
#line 271
c_rt_lib0clear(&___nl__im__5);
#line 271
c_rt_lib0clear(&___nl__im__6);
#line 271
//clear ___nl__bool__7;
#line 271
c_rt_lib0clear(&___nl__im__8);
#line 271
c_rt_lib0clear(&___nl__im__9);
#line 271
c_rt_lib0clear(&___nl__im__13);
#line 271
c_rt_lib0clear(&___nl__im__20);
#line 271
c_rt_lib0clear(&___nl__im__21);
#line 271
c_rt_lib0clear(&___nl__im__22);
#line 271
c_rt_lib0clear(&___nl__im__25);
#line 271
c_rt_lib0clear(&___nl__im__29);
#line 271
c_rt_lib0clear(&___nl__im__32);
#line 271
c_rt_lib0clear(&___nl__im__35);
#line 271
//clear ___nl__int__40;
#line 271
c_rt_lib0clear(&___nl__im__42);
#line 271
c_rt_lib0clear(&___nl__im__54);
#line 271
c_rt_lib0clear(&___nl__im__58);
#line 271
return ___nl__im__62;
#line 272
goto label_233;
#line 272
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
#line 276
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 277
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 277
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 277
c_rt_lib0clear(&___nl__im__4);
#line 277
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 277
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 277
c_rt_lib0clear(&___nl__im__3);
#line 277
c_rt_lib0clear(&___nl__im__5);
#line 278
___nl__int__7 = 0;
#line 278
___nl__int__8 = 1;
#line 278
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 278
label_11:
;
#line 278
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 278
if(___nl__bool__10){ goto label_28;}
#line 278
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 278
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 279
c_rt_lib0move(&___nl__im__13,___get_global_string_const(128));
#line 279
___nl__bool__12 = compiler_priv0has_extension(___nl__im__6, ___nl__im__13);
#line 279
c_rt_lib0clear(&___nl__im__13);
#line 279
___nl__bool__12 = !___nl__bool__12;
#line 279
if(___nl__bool__12){ goto label_23;}
#line 279
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 279
goto label_23;
#line 279
label_23:
;
#line 279
//clear ___nl__bool__12;
#line 279
c_rt_lib0clear(&___nl__im__6);
#line 280
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 280
goto label_11;
#line 280
label_28:
;
#line 281
c_rt_lib0clear(&___nl__im__0);
#line 281
c_rt_lib0clear(&___nl__im__2);
#line 281
c_rt_lib0clear(&___nl__im__6);
#line 281
//clear ___nl__int__7;
#line 281
//clear ___nl__int__8;
#line 281
//clear ___nl__int__9;
#line 281
//clear ___nl__bool__10;
#line 281
c_rt_lib0clear(&___nl__im__11);
#line 281
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
#line 285
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 286
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 287
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(97)));
#line 287
___nl__int__5 = 0;
#line 287
___nl__int__6 = 1;
#line 287
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 287
label_6:
;
#line 287
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 287
if(___nl__bool__8){ goto label_52;}
#line 287
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__5));
#line 287
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 288
c_rt_lib0move(&___nl__im__11,___get_global_string_const(128));
#line 288
___nl__bool__10 = compiler_priv0has_extension(___nl__im__4, ___nl__im__11);
#line 288
c_rt_lib0clear(&___nl__im__11);
#line 288
___nl__bool__10 = !___nl__bool__10;
#line 288
if(___nl__bool__10){ goto label_22;}
#line 289
c_rt_lib0move(&___nl__im__13, compiler_priv0get_dir(___nl__im__4));
#line 289
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(134), ___nl__im__13, ___get_global_string_const(130), ___nl__im__4));
#line 289
c_rt_lib0clear(&___nl__im__13);
#line 289
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__12));
#line 289
c_rt_lib0clear(&___nl__im__12);
#line 290
goto label_40;
#line 290
label_22:
;
#line 291
c_rt_lib0move(&___nl__im__14, compiler_priv0get_all_nianio_file(___nl__im__4));
#line 291
___nl__int__16 = 0;
#line 291
___nl__int__17 = 1;
#line 291
___nl__int__18 = c_rt_lib0array_len(___nl__im__14);
#line 291
label_27:
;
#line 291
___nl__bool__19 = ___nl__int__16 >= ___nl__int__18;
#line 291
if(___nl__bool__19){ goto label_38;}
#line 291
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__14, ___nl__int__16));
#line 291
c_rt_lib0copy(&___nl__im__15, ___nl__im__20);
#line 292
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(134), ___nl__im__4, ___get_global_string_const(130), ___nl__im__15));
#line 292
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__21));
#line 292
c_rt_lib0clear(&___nl__im__21);
#line 292
c_rt_lib0clear(&___nl__im__15);
#line 293
___nl__int__16 = ___nl__int__16 + ___nl__int__17;
#line 293
goto label_27;
#line 293
label_38:
;
#line 294
goto label_40;
#line 294
label_40:
;
#line 294
//clear ___nl__bool__10;
#line 294
c_rt_lib0clear(&___nl__im__14);
#line 294
c_rt_lib0clear(&___nl__im__15);
#line 294
//clear ___nl__int__16;
#line 294
//clear ___nl__int__17;
#line 294
//clear ___nl__int__18;
#line 294
//clear ___nl__bool__19;
#line 294
c_rt_lib0clear(&___nl__im__20);
#line 294
c_rt_lib0clear(&___nl__im__4);
#line 295
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 295
goto label_6;
#line 295
label_52:
;
#line 296
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 296
c_rt_lib0move(&___nl__im__22, compiler_priv0get_out_ext(___nl__im__23));
#line 296
c_rt_lib0clear(&___nl__im__23);
#line 297
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 298
c_rt_lib0move(&___nl__im__25, c_fe_lib0get_module_files(___nl__im__1));
#line 298
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
#line 298
if(___nl__bool__26){ goto label_65;}
#line 303
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(82));
#line 303
if(___nl__bool__26){ goto label_99;}
#line 303
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 303
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 303
nl_die_arg(___nl__im__27);
#line 298
label_65:
;
#line 298
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 298
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 299
c_rt_lib0move(&___nl__im__32, ptd0string());
#line 299
c_rt_lib0move(&___nl__im__31, ptd0arr(___nl__im__32));
#line 299
c_rt_lib0clear(&___nl__im__32);
#line 299
c_rt_lib0move(&___nl__im__30, ptd0ensure(___nl__im__31, ___nl__im__28));
#line 299
c_rt_lib0clear(&___nl__im__31);
#line 299
___nl__int__34 = 0;
#line 299
___nl__int__35 = 1;
#line 299
___nl__int__36 = c_rt_lib0array_len(___nl__im__30);
#line 299
label_76:
;
#line 299
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 299
if(___nl__bool__37){ goto label_97;}
#line 299
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__30, ___nl__int__34));
#line 299
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 300
___nl__bool__39 = compiler_priv0has_extension(___nl__im__33, ___nl__im__22);
#line 300
___nl__bool__39 = !___nl__bool__39;
#line 300
___nl__bool__39 = !___nl__bool__39;
#line 300
if(___nl__bool__39){ goto label_88;}
#line 300
//clear ___nl__bool__39;
#line 300
goto label_94;
#line 300
goto label_88;
#line 300
label_88:
;
#line 300
//clear ___nl__bool__39;
#line 301
c_rt_lib0move(&___nl__im__40, compiler_priv0get_module_name(___nl__im__33));
#line 301
c_rt_lib0delete(hash0set_value(&___nl__im__24, ___nl__im__40, ___nl__im__33));
#line 301
c_rt_lib0clear(&___nl__im__40);
#line 301
c_rt_lib0clear(&___nl__im__33);
#line 301
label_94:
;
#line 302
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 302
goto label_76;
#line 302
label_97:
;
#line 303
goto label_131;
#line 303
label_99:
;
#line 303
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(82)));
#line 303
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 304
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(0));
#line 304
c_rt_lib0clear(&___nl__im__0);
#line 304
c_rt_lib0clear(&___nl__im__1);
#line 304
c_rt_lib0clear(&___nl__im__2);
#line 304
c_rt_lib0clear(&___nl__im__3);
#line 304
c_rt_lib0clear(&___nl__im__4);
#line 304
//clear ___nl__int__5;
#line 304
//clear ___nl__int__6;
#line 304
//clear ___nl__int__7;
#line 304
//clear ___nl__bool__8;
#line 304
c_rt_lib0clear(&___nl__im__9);
#line 304
c_rt_lib0clear(&___nl__im__22);
#line 304
c_rt_lib0clear(&___nl__im__24);
#line 304
c_rt_lib0clear(&___nl__im__25);
#line 304
//clear ___nl__bool__26;
#line 304
c_rt_lib0clear(&___nl__im__27);
#line 304
c_rt_lib0clear(&___nl__im__28);
#line 304
c_rt_lib0clear(&___nl__im__29);
#line 304
c_rt_lib0clear(&___nl__im__30);
#line 304
c_rt_lib0clear(&___nl__im__33);
#line 304
//clear ___nl__int__34;
#line 304
//clear ___nl__int__35;
#line 304
//clear ___nl__int__36;
#line 304
//clear ___nl__bool__37;
#line 304
c_rt_lib0clear(&___nl__im__38);
#line 304
c_rt_lib0clear(&___nl__im__41);
#line 304
c_rt_lib0clear(&___nl__im__42);
#line 304
return ___nl__im__43;
#line 305
goto label_131;
#line 305
label_131:
;
#line 306
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(0));
#line 307
___nl__int__46 = 0;
#line 307
___nl__int__47 = 1;
#line 307
___nl__int__48 = c_rt_lib0array_len(___nl__im__2);
#line 307
label_136:
;
#line 307
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 307
if(___nl__bool__49){ goto label_149;}
#line 307
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__2, ___nl__int__46));
#line 307
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 308
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(130)));
#line 308
c_rt_lib0move(&___nl__im__51, compiler_priv0get_module_name(___nl__im__52));
#line 308
c_rt_lib0clear(&___nl__im__52);
#line 309
c_rt_lib0move(&___nl__im__53, compiler_priv0mk_path_module(___nl__im__45, ___nl__im__51, ___nl__im__0));
#line 310
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__51, ___nl__im__53));
#line 310
c_rt_lib0clear(&___nl__im__45);
#line 311
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 311
goto label_136;
#line 311
label_149:
;
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
c_rt_lib0clear(&___nl__im__2);
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
//clear ___nl__int__5;
#line 312
//clear ___nl__int__6;
#line 312
//clear ___nl__int__7;
#line 312
//clear ___nl__bool__8;
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
//clear ___nl__bool__26;
#line 312
c_rt_lib0clear(&___nl__im__27);
#line 312
c_rt_lib0clear(&___nl__im__28);
#line 312
c_rt_lib0clear(&___nl__im__29);
#line 312
c_rt_lib0clear(&___nl__im__30);
#line 312
c_rt_lib0clear(&___nl__im__33);
#line 312
//clear ___nl__int__34;
#line 312
//clear ___nl__int__35;
#line 312
//clear ___nl__int__36;
#line 312
//clear ___nl__bool__37;
#line 312
c_rt_lib0clear(&___nl__im__38);
#line 312
c_rt_lib0clear(&___nl__im__41);
#line 312
c_rt_lib0clear(&___nl__im__42);
#line 312
c_rt_lib0clear(&___nl__im__43);
#line 312
c_rt_lib0clear(&___nl__im__45);
#line 312
//clear ___nl__int__46;
#line 312
//clear ___nl__int__47;
#line 312
//clear ___nl__int__48;
#line 312
//clear ___nl__bool__49;
#line 312
c_rt_lib0clear(&___nl__im__50);
#line 312
c_rt_lib0clear(&___nl__im__51);
#line 312
c_rt_lib0clear(&___nl__im__53);
#line 312
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
#line 319
c_rt_lib0move(&___nl__im__5,___get_global_string_const(135));
#line 319
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 319
c_rt_lib0clear(&___nl__im__5);
#line 319
c_rt_lib0move(&___nl__im__6,___get_global_string_const(136));
#line 319
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 319
c_rt_lib0clear(&___nl__im__4);
#line 319
c_rt_lib0clear(&___nl__im__6);
#line 319
c_rt_lib0delete(c_fe_lib0print(___nl__im__3));
#line 319
c_rt_lib0clear(&___nl__im__3);
#line 320
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 320
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 320
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__12, ___get_global_string_const(82), ___nl__im__13));
#line 320
c_rt_lib0clear(&___nl__im__12);
#line 320
c_rt_lib0clear(&___nl__im__13);
#line 320
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 320
c_rt_lib0clear(&___nl__im__11);
#line 320
c_rt_lib0move(&___nl__im__14, c_fe_lib0file_to_string(___nl__im__1));
#line 320
c_rt_lib0move(&___nl__im__9, ptd0ensure(___nl__im__10, ___nl__im__14));
#line 320
c_rt_lib0clear(&___nl__im__10);
#line 320
c_rt_lib0clear(&___nl__im__14);
#line 320
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 320
if(___nl__bool__8){ goto label_27;}
#line 320
c_rt_lib0clear(&___nl__im__0);
#line 320
c_rt_lib0clear(&___nl__im__1);
#line 320
c_rt_lib0clear(&___nl__im__7);
#line 320
//clear ___nl__bool__8;
#line 320
return ___nl__im__9;
#line 320
label_27:
;
#line 320
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 321
___nl__bool__16 = true;
#line 321
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 321
//clear ___nl__bool__16;
#line 322
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 322
if(___nl__bool__17){ goto label_39;}
#line 329
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(137));
#line 329
if(___nl__bool__17){ goto label_112;}
#line 329
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 329
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 329
nl_die_arg(___nl__im__18);
#line 322
label_39:
;
#line 322
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 322
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 323
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 324
___nl__bool__23 = false;
#line 324
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
#line 324
c_rt_lib0move(&___nl__im__22, module_checker0check_module(___nl__im__19, ___nl__im__24, &___nl__im__21));
#line 324
//clear ___nl__bool__23;
#line 324
c_rt_lib0clear(&___nl__im__24);
#line 325
c_rt_lib0move(&___nl__im__25,___get_global_string_const(59));
#line 325
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__25));
#line 325
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(138)));
#line 325
c_rt_lib0delete(hash0set_value(&___nl__im__25, ___nl__im__0, ___nl__im__26));
#line 325
c_rt_lib0move(&___nl__string__27,___get_global_string_const(59));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__27, ___nl__im__25));
#line 325
c_rt_lib0clear(&___nl__im__25);
#line 325
c_rt_lib0clear(&___nl__im__26);
#line 325
c_rt_lib0clear(&___nl__string__27);
#line 326
c_rt_lib0move(&___nl__im__28,___get_global_string_const(58));
#line 326
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__28));
#line 326
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 326
c_rt_lib0delete(hash0set_value(&___nl__im__28, ___nl__im__0, ___nl__im__29));
#line 326
c_rt_lib0move(&___nl__string__30,___get_global_string_const(58));
#line 326
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__28));
#line 326
c_rt_lib0clear(&___nl__im__28);
#line 326
c_rt_lib0clear(&___nl__im__29);
#line 326
c_rt_lib0clear(&___nl__string__30);
#line 327
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(50)));
#line 327
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 327
c_rt_lib0clear(&___nl__im__33);
#line 327
___nl__int__34 = 0;
#line 327
___nl__bool__31 = ___nl__int__32 == ___nl__int__34;
#line 327
//clear ___nl__int__32;
#line 327
//clear ___nl__int__34;
#line 327
___nl__bool__31 = !___nl__bool__31;
#line 327
___nl__bool__31 = !___nl__bool__31;
#line 327
if(___nl__bool__31){ goto label_94;}
#line 327
c_rt_lib0move(&___nl__im__36,___get_global_string_const(36));
#line 327
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__36));
#line 327
c_rt_lib0clear(&___nl__im__36);
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
//clear ___nl__bool__31;
#line 327
return ___nl__im__35;
#line 327
goto label_94;
#line 327
label_94:
;
#line 327
//clear ___nl__bool__31;
#line 327
c_rt_lib0clear(&___nl__im__35);
#line 328
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__19));
#line 328
c_rt_lib0clear(&___nl__im__0);
#line 328
c_rt_lib0clear(&___nl__im__1);
#line 328
c_rt_lib0clear(&___nl__im__7);
#line 328
//clear ___nl__bool__8;
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
c_rt_lib0clear(&___nl__im__15);
#line 328
//clear ___nl__bool__17;
#line 328
c_rt_lib0clear(&___nl__im__18);
#line 328
c_rt_lib0clear(&___nl__im__19);
#line 328
c_rt_lib0clear(&___nl__im__20);
#line 328
c_rt_lib0clear(&___nl__im__21);
#line 328
c_rt_lib0clear(&___nl__im__22);
#line 328
return ___nl__im__37;
#line 329
goto label_151;
#line 329
label_112:
;
#line 329
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(137)));
#line 329
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 330
c_rt_lib0move(&___nl__im__40,___get_global_string_const(59));
#line 330
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__40));
#line 330
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 330
c_rt_lib0delete(hash0set_value(&___nl__im__40, ___nl__im__0, ___nl__im__41));
#line 330
c_rt_lib0move(&___nl__string__42,___get_global_string_const(59));
#line 330
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__42, ___nl__im__40));
#line 330
c_rt_lib0clear(&___nl__im__40);
#line 330
c_rt_lib0clear(&___nl__im__41);
#line 330
c_rt_lib0clear(&___nl__string__42);
#line 331
c_rt_lib0move(&___nl__im__43,___get_global_string_const(58));
#line 331
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__43));
#line 331
c_rt_lib0delete(hash0set_value(&___nl__im__43, ___nl__im__0, ___nl__im__38));
#line 331
c_rt_lib0move(&___nl__string__44,___get_global_string_const(58));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__44, ___nl__im__43));
#line 331
c_rt_lib0clear(&___nl__im__43);
#line 331
c_rt_lib0clear(&___nl__string__44);
#line 332
c_rt_lib0move(&___nl__im__46,___get_global_string_const(36));
#line 332
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__46));
#line 332
c_rt_lib0clear(&___nl__im__46);
#line 332
c_rt_lib0clear(&___nl__im__0);
#line 332
c_rt_lib0clear(&___nl__im__1);
#line 332
c_rt_lib0clear(&___nl__im__7);
#line 332
//clear ___nl__bool__8;
#line 332
c_rt_lib0clear(&___nl__im__9);
#line 332
c_rt_lib0clear(&___nl__im__15);
#line 332
//clear ___nl__bool__17;
#line 332
c_rt_lib0clear(&___nl__im__18);
#line 332
c_rt_lib0clear(&___nl__im__19);
#line 332
c_rt_lib0clear(&___nl__im__20);
#line 332
c_rt_lib0clear(&___nl__im__21);
#line 332
c_rt_lib0clear(&___nl__im__22);
#line 332
c_rt_lib0clear(&___nl__im__37);
#line 332
c_rt_lib0clear(&___nl__im__38);
#line 332
c_rt_lib0clear(&___nl__im__39);
#line 332
return ___nl__im__45;
#line 333
goto label_151;
#line 333
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
#line 337
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 338
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(101)));
#line 338
c_rt_lib0move(&___nl__im__2, c_fe_lib0file_to_string(___nl__im__3));
#line 338
c_rt_lib0clear(&___nl__im__3);
#line 338
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(83));
#line 338
if(___nl__bool__4){ goto label_11;}
#line 351
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(82));
#line 351
if(___nl__bool__4){ goto label_58;}
#line 351
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 351
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 351
nl_die_arg(___nl__im__5);
#line 338
label_11:
;
#line 338
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(83)));
#line 338
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 339
c_rt_lib0move(&___nl__im__8,___get_global_string_const(139));
#line 339
c_rt_lib0delete(c_fe_lib0print(___nl__im__8));
#line 339
c_rt_lib0clear(&___nl__im__8);
#line 340
c_rt_lib0move(&___nl__im__9, dfile0try_sload(___nl__im__6));
#line 341
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 342
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 342
if(___nl__bool__11){ goto label_26;}
#line 344
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(82));
#line 344
if(___nl__bool__11){ goto label_31;}
#line 344
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 344
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__9));
#line 344
nl_die_arg(___nl__im__12);
#line 342
label_26:
;
#line 342
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 342
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 343
c_rt_lib0copy(&___nl__im__10, ___nl__im__13);
#line 344
goto label_39;
#line 344
label_31:
;
#line 344
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(82)));
#line 344
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 345
c_rt_lib0move(&___nl__im__17,___get_global_string_const(140));
#line 345
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 345
c_rt_lib0clear(&___nl__im__17);
#line 346
c_rt_lib0delete(c_fe_lib0print(___nl__im__15));
#line 347
goto label_39;
#line 347
label_39:
;
#line 348
___nl__int__19 = 0;
#line 348
___nl__int__20 = 1;
#line 348
___nl__int__21 = c_rt_lib0array_len(___nl__im__10);
#line 348
label_43:
;
#line 348
___nl__bool__22 = ___nl__int__19 >= ___nl__int__21;
#line 348
if(___nl__bool__22){ goto label_56;}
#line 348
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__10, ___nl__int__19));
#line 348
c_rt_lib0copy(&___nl__im__18, ___nl__im__23);
#line 349
___nl__int__24 = 1;
#line 349
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__24));
#line 349
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__25));
#line 349
//clear ___nl__int__24;
#line 349
c_rt_lib0clear(&___nl__im__25);
#line 349
c_rt_lib0clear(&___nl__im__18);
#line 350
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 350
goto label_43;
#line 350
label_56:
;
#line 351
goto label_65;
#line 351
label_58:
;
#line 351
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(82)));
#line 351
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 352
c_rt_lib0move(&___nl__im__28,___get_global_string_const(141));
#line 352
c_rt_lib0delete(c_fe_lib0print(___nl__im__28));
#line 352
c_rt_lib0clear(&___nl__im__28);
#line 353
goto label_65;
#line 353
label_65:
;
#line 354
c_rt_lib0clear(&___nl__im__0);
#line 354
c_rt_lib0clear(&___nl__im__2);
#line 354
//clear ___nl__bool__4;
#line 354
c_rt_lib0clear(&___nl__im__5);
#line 354
c_rt_lib0clear(&___nl__im__6);
#line 354
c_rt_lib0clear(&___nl__im__7);
#line 354
c_rt_lib0clear(&___nl__im__9);
#line 354
c_rt_lib0clear(&___nl__im__10);
#line 354
//clear ___nl__bool__11;
#line 354
c_rt_lib0clear(&___nl__im__12);
#line 354
c_rt_lib0clear(&___nl__im__13);
#line 354
c_rt_lib0clear(&___nl__im__14);
#line 354
c_rt_lib0clear(&___nl__im__15);
#line 354
c_rt_lib0clear(&___nl__im__16);
#line 354
c_rt_lib0clear(&___nl__im__18);
#line 354
//clear ___nl__int__19;
#line 354
//clear ___nl__int__20;
#line 354
//clear ___nl__int__21;
#line 354
//clear ___nl__bool__22;
#line 354
c_rt_lib0clear(&___nl__im__23);
#line 354
c_rt_lib0clear(&___nl__im__26);
#line 354
c_rt_lib0clear(&___nl__im__27);
#line 354
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
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__string__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__string__79 = NULL;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
INT  ___nl__int__87 = 0;
bool  ___nl__bool__88 = false;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
bool  ___nl__bool__94 = false;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
bool  ___nl__bool__99 = false;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
bool  ___nl__bool__105 = false;
INT  ___nl__int__106 = 0;
INT  ___nl__int__107 = 0;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
INT  ___nl__int__113 = 0;
ImmT  ___nl__string__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
bool  ___nl__bool__118 = false;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
bool  ___nl__bool__127 = false;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
bool  ___nl__bool__134 = false;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
ImmT  ___nl__im__140 = NULL;
bool  ___nl__bool__141 = false;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
INT  ___nl__int__148 = 0;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
bool  ___nl__bool__153 = false;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
INT  ___nl__int__156 = 0;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
bool  ___nl__bool__162 = false;
INT  ___nl__int__163 = 0;
INT  ___nl__int__164 = 0;
bool  ___nl__bool__165 = false;
INT  ___nl__int__166 = 0;
INT  ___nl__int__167 = 0;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
bool  ___nl__bool__170 = false;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
bool  ___nl__bool__173 = false;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
bool  ___nl__bool__176 = false;
INT  ___nl__int__177 = 0;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
bool  ___nl__bool__184 = false;
INT  ___nl__int__185 = 0;
INT  ___nl__int__186 = 0;
bool  ___nl__bool__187 = false;
INT  ___nl__int__188 = 0;
INT  ___nl__int__189 = 0;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
bool  ___nl__bool__192 = false;
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
ImmT  ___nl__im__204 = NULL;
bool  ___nl__bool__205 = false;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
bool  ___nl__bool__210 = false;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__im__212 = NULL;
ImmT  ___nl__im__213 = NULL;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
ImmT  ___nl__im__217 = NULL;
bool  ___nl__bool__218 = false;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
bool  ___nl__bool__226 = false;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
bool  ___nl__bool__234 = false;
INT  ___nl__int__235 = 0;
INT  ___nl__int__236 = 0;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
INT  ___nl__int__240 = 0;
ImmT  ___nl__string__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
bool  ___nl__bool__247 = false;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
#line 358
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 359
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 360
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 361
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 362
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 363
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 365
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 366
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 367
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 368
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 369
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 369
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__8, ___get_global_string_const(59), ___nl__im__9, ___get_global_string_const(60), ___nl__im__10, ___get_global_string_const(61), ___nl__im__11, ___get_global_string_const(62), ___nl__im__12));
#line 369
c_rt_lib0clear(&___nl__im__8);
#line 369
c_rt_lib0clear(&___nl__im__9);
#line 369
c_rt_lib0clear(&___nl__im__10);
#line 369
c_rt_lib0clear(&___nl__im__11);
#line 369
c_rt_lib0clear(&___nl__im__12);
#line 371
c_rt_lib0move(&___nl__im__14, compiler_priv0get_mathematical_func(___nl__im__0));
#line 371
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 371
c_rt_lib0move(&___nl__im__13, post_processing0init(___nl__im__14, ___nl__im__15));
#line 371
c_rt_lib0clear(&___nl__im__14);
#line 371
c_rt_lib0clear(&___nl__im__15);
#line 372
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(0));
#line 373
;
#line 373
___nl__im_ptr__18 = &(___nl__rec__17.global_int_const0field);
#line 374
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 374
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 374
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 374
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 374
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(4, ___get_global_string_const(142), ___nl__im__19, ___get_global_string_const(143), ___nl__im__20, ___get_global_string_const(144), ___nl__im__21, ___get_global_string_const(145), ___nl__im__22));
#line 374
c_rt_lib0clear(&___nl__im__19);
#line 374
c_rt_lib0clear(&___nl__im__20);
#line 374
c_rt_lib0clear(&___nl__im__21);
#line 374
c_rt_lib0clear(&___nl__im__22);
#line 374
___nl__im_ptr__18 = NULL;
#line 374
___nl__im_ptr__23 = &(___nl__rec__17.global_string_const0field);
#line 375
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(0));
#line 375
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(0));
#line 375
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 375
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(0));
#line 375
c_rt_lib0move(___nl__im_ptr__23, c_rt_lib0hash_mk(4, ___get_global_string_const(142), ___nl__im__24, ___get_global_string_const(143), ___nl__im__25, ___get_global_string_const(144), ___nl__im__26, ___get_global_string_const(145), ___nl__im__27));
#line 375
c_rt_lib0clear(&___nl__im__24);
#line 375
c_rt_lib0clear(&___nl__im__25);
#line 375
c_rt_lib0clear(&___nl__im__26);
#line 375
c_rt_lib0clear(&___nl__im__27);
#line 375
___nl__im_ptr__23 = NULL;
#line 375
___nl__im_ptr__28 = &(___nl__rec__17.ret0field);
#line 376
c_rt_lib0move(___nl__im_ptr__28,___get_global_string_const(36));
#line 376
___nl__im_ptr__28 = NULL;
#line 376
___nl__im_ptr__29 = &(___nl__rec__17.header0field);
#line 377
c_rt_lib0move(___nl__im_ptr__29,___get_global_string_const(36));
#line 377
___nl__im_ptr__29 = NULL;
#line 377
___nl__im_ptr__30 = &(___nl__rec__17.fun_args0field);
#line 378
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0array_mk(0));
#line 378
___nl__im_ptr__30 = NULL;
#line 378
___nl__im_ptr__31 = &(___nl__rec__17.ret_reg_type0field);
#line 379
c_rt_lib0move(___nl__im_ptr__31, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 379
___nl__im_ptr__31 = NULL;
#line 379
___nl__rec_ptr__32 = &(___nl__rec__17.const0field);
#line 380
;
#line 380
___nl__int_ptr__33 = &(___nl__rec_ptr__32->dynamic_nr0field);
#line 381
(*___nl__int_ptr__33) = 0;
#line 381
___nl__int_ptr__33 = NULL;
#line 381
___nl__rec_ptr__34 = &(___nl__rec_ptr__32->int0field);
#line 382
;
#line 382
___nl__arr_ptr__35 = &(___nl__rec_ptr__34->arr0field);
#line 382
compiler0anon_type00ownarranon_type00im0clear((*___nl__arr_ptr__35));
(*___nl__arr_ptr__35).size = 0;
(*___nl__arr_ptr__35).capacity = 0;
(*___nl__arr_ptr__35).value = NULL;
#line 382
___nl__arr_ptr__35 = NULL;
#line 382
___nl__im_ptr__36 = &(___nl__rec_ptr__34->hash0field);
#line 382
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_mk(0));
#line 382
___nl__im_ptr__36 = NULL;
#line 382
___nl__rec_ptr__34 = NULL;
#line 382
___nl__rec_ptr__37 = &(___nl__rec_ptr__32->string0field);
#line 383
;
#line 383
___nl__arr_ptr__38 = &(___nl__rec_ptr__37->arr0field);
#line 383
compiler0anon_type00ownarranon_type00im0clear((*___nl__arr_ptr__38));
(*___nl__arr_ptr__38).size = 0;
(*___nl__arr_ptr__38).capacity = 0;
(*___nl__arr_ptr__38).value = NULL;
#line 383
___nl__arr_ptr__38 = NULL;
#line 383
___nl__im_ptr__39 = &(___nl__rec_ptr__37->hash0field);
#line 383
c_rt_lib0move(___nl__im_ptr__39, c_rt_lib0hash_mk(0));
#line 383
___nl__im_ptr__39 = NULL;
#line 383
___nl__rec_ptr__37 = NULL;
#line 383
___nl__rec_ptr__40 = &(___nl__rec_ptr__32->singleton0field);
#line 384
;
#line 384
___nl__arr_ptr__41 = &(___nl__rec_ptr__40->arr0field);
#line 384
compiler0anon_type00ownarranon_type00im0clear((*___nl__arr_ptr__41));
(*___nl__arr_ptr__41).size = 0;
(*___nl__arr_ptr__41).capacity = 0;
(*___nl__arr_ptr__41).value = NULL;
#line 384
___nl__arr_ptr__41 = NULL;
#line 384
___nl__im_ptr__42 = &(___nl__rec_ptr__40->hash0field);
#line 384
c_rt_lib0move(___nl__im_ptr__42, c_rt_lib0hash_mk(0));
#line 384
___nl__im_ptr__42 = NULL;
#line 384
___nl__rec_ptr__40 = NULL;
#line 384
___nl__rec_ptr__32 = NULL;
#line 384
___nl__im_ptr__43 = &(___nl__rec__17.mod_name0field);
#line 386
c_rt_lib0move(___nl__im_ptr__43,___get_global_string_const(36));
#line 386
___nl__im_ptr__43 = NULL;
#line 386
___nl__hash_ptr__44 = &(___nl__rec__17.additional_imports0field);
#line 387
compiler0anon_type00ownhashanon_type00bool0clear((*___nl__hash_ptr__44));
(*___nl__hash_ptr__44).size = 0;
(*___nl__hash_ptr__44).capacity = 0;
(*___nl__hash_ptr__44).keys = NULL;
(*___nl__hash_ptr__44).values = NULL;
#line 387
___nl__hash_ptr__44 = NULL;
#line 387
___nl__im_ptr__45 = &(___nl__rec__17.defined_types0field);
#line 388
c_rt_lib0move(___nl__im_ptr__45, c_rt_lib0hash_mk(0));
#line 388
___nl__im_ptr__45 = NULL;
#line 390
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 391
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 392
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(0));
#line 393
label_103:
;
#line 394
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 394
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 394
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(60), ___nl__im__50);
#line 394
c_rt_lib0clear(&___nl__im__49);
#line 394
c_rt_lib0clear(&___nl__im__50);
#line 395
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 395
c_rt_lib0copy(&___nl__im__52, ___nl__im__51);
#line 395
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(61), ___nl__im__52);
#line 395
c_rt_lib0clear(&___nl__im__51);
#line 395
c_rt_lib0clear(&___nl__im__52);
#line 396
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 396
c_rt_lib0copy(&___nl__im__54, ___nl__im__53);
#line 396
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(62), ___nl__im__54);
#line 396
c_rt_lib0clear(&___nl__im__53);
#line 396
c_rt_lib0clear(&___nl__im__54);
#line 397
c_rt_lib0move(&___nl__im__55, compiler_priv0get_files_to_parse(___nl__im__0));
#line 398
___nl__int__56 = 0;
#line 399
c_rt_lib0move(&___nl__im__60, c_rt_lib0init_iter(___nl__im__55));
#line 399
label_122:
;
#line 399
___nl__bool__58 = c_rt_lib0is_end_hash(___nl__im__60);
#line 399
if(___nl__bool__58){ goto label_173;}
#line 399
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_key_iter(___nl__im__60));
#line 399
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__55, ___nl__im__57));
#line 400
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(78)));
#line 400
c_rt_lib0move(&___nl__im__61, c_fe_lib0get_modif_time(___nl__im__62));
#line 400
c_rt_lib0clear(&___nl__im__62);
#line 401
___nl__bool__63 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(82));
#line 401
___nl__bool__63 = !___nl__bool__63;
#line 401
if(___nl__bool__63){ goto label_137;}
#line 401
c_rt_lib0clear(&___nl__im__61);
#line 401
//clear ___nl__bool__63;
#line 401
goto label_170;
#line 401
goto label_137;
#line 401
label_137:
;
#line 401
//clear ___nl__bool__63;
#line 402
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__61, ___get_global_string_const(83)));
#line 403
___nl__bool__64 = hash0has_key(___nl__im__1, ___nl__im__57);
#line 403
___nl__bool__64 = !___nl__bool__64;
#line 403
if(___nl__bool__64){ goto label_161;}
#line 404
c_rt_lib0move(&___nl__im__65, hash0get_value(___nl__im__1, ___nl__im__57));
#line 405
___nl__int__67 = getIntFromImm(___nl__im__61);
#line 405
___nl__int__68 = getIntFromImm(___nl__im__65);
#line 405
___nl__bool__66 = ___nl__int__67 > ___nl__int__68;
#line 405
//clear ___nl__int__67;
#line 405
//clear ___nl__int__68;
#line 405
___nl__bool__66 = !___nl__bool__66;
#line 405
___nl__bool__66 = !___nl__bool__66;
#line 405
if(___nl__bool__66){ goto label_158;}
#line 405
c_rt_lib0clear(&___nl__im__61);
#line 405
//clear ___nl__bool__64;
#line 405
c_rt_lib0clear(&___nl__im__65);
#line 405
//clear ___nl__bool__66;
#line 405
goto label_170;
#line 405
goto label_158;
#line 405
label_158:
;
#line 405
//clear ___nl__bool__66;
#line 406
goto label_161;
#line 406
label_161:
;
#line 406
//clear ___nl__bool__64;
#line 406
c_rt_lib0clear(&___nl__im__65);
#line 407
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__57, ___nl__im__61));
#line 408
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__57, ___nl__im__59));
#line 409
___nl__int__69 = 1;
#line 409
___nl__int__56 = ___nl__int__56 + ___nl__int__69;
#line 409
//clear ___nl__int__69;
#line 409
c_rt_lib0clear(&___nl__im__61);
#line 409
label_170:
;
#line 410
c_rt_lib0move(&___nl__im__60, c_rt_lib0next_iter(___nl__im__60));
#line 410
goto label_122;
#line 410
label_173:
;
#line 411
c_rt_lib0move(&___nl__im__73, c_rt_lib0init_iter(___nl__im__16));
#line 411
label_175:
;
#line 411
___nl__bool__71 = c_rt_lib0is_end_hash(___nl__im__73);
#line 411
if(___nl__bool__71){ goto label_220;}
#line 411
c_rt_lib0move(&___nl__im__70, c_rt_lib0get_key_iter(___nl__im__73));
#line 411
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value(___nl__im__16, ___nl__im__70));
#line 412
___nl__bool__74 = hash0has_key(___nl__im__55, ___nl__im__70);
#line 412
___nl__bool__74 = !___nl__bool__74;
#line 412
___nl__bool__74 = !___nl__bool__74;
#line 412
if(___nl__bool__74){ goto label_216;}
#line 413
___nl__int__75 = 1;
#line 413
___nl__int__56 = ___nl__int__56 + ___nl__int__75;
#line 413
//clear ___nl__int__75;
#line 414
c_rt_lib0move(&___nl__im__76,___get_global_string_const(58));
#line 414
c_rt_lib0move(&___nl__im__76, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__76));
#line 414
c_rt_lib0delete(hash0delete(&___nl__im__76, ___nl__im__70));
#line 414
c_rt_lib0move(&___nl__string__77,___get_global_string_const(58));
#line 414
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__77, ___nl__im__76));
#line 414
c_rt_lib0clear(&___nl__im__76);
#line 414
c_rt_lib0clear(&___nl__string__77);
#line 415
c_rt_lib0move(&___nl__im__78,___get_global_string_const(59));
#line 415
c_rt_lib0move(&___nl__im__78, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__78));
#line 415
c_rt_lib0delete(hash0delete(&___nl__im__78, ___nl__im__70));
#line 415
c_rt_lib0move(&___nl__string__79,___get_global_string_const(59));
#line 415
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__79, ___nl__im__78));
#line 415
c_rt_lib0clear(&___nl__im__78);
#line 415
c_rt_lib0clear(&___nl__string__79);
#line 416
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__70));
#line 417
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__70));
#line 418
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__70));
#line 419
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__70));
#line 420
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__13, ___nl__im__70));
#line 421
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 421
___nl__bool__80 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(65));
#line 421
c_rt_lib0clear(&___nl__im__81);
#line 421
___nl__bool__80 = !___nl__bool__80;
#line 421
if(___nl__bool__80){ goto label_213;}
#line 422
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__17, ___nl__im__70));
#line 423
goto label_213;
#line 423
label_213:
;
#line 423
//clear ___nl__bool__80;
#line 424
goto label_216;
#line 424
label_216:
;
#line 424
//clear ___nl__bool__74;
#line 425
c_rt_lib0move(&___nl__im__73, c_rt_lib0next_iter(___nl__im__73));
#line 425
goto label_175;
#line 425
label_220:
;
#line 426
c_rt_lib0move(&___nl__im__85, c_rt_lib0init_iter(___nl__im__6));
#line 426
label_222:
;
#line 426
___nl__bool__83 = c_rt_lib0is_end_hash(___nl__im__85);
#line 426
if(___nl__bool__83){ goto label_235;}
#line 426
c_rt_lib0move(&___nl__im__82, c_rt_lib0get_key_iter(___nl__im__85));
#line 426
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__82));
#line 427
c_rt_lib0copy(&___nl__im__86, ___nl__im__84);
#line 427
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__82, ___nl__im__86));
#line 427
c_rt_lib0clear(&___nl__im__86);
#line 428
___nl__int__87 = 1;
#line 428
___nl__int__56 = ___nl__int__56 + ___nl__int__87;
#line 428
//clear ___nl__int__87;
#line 429
c_rt_lib0move(&___nl__im__85, c_rt_lib0next_iter(___nl__im__85));
#line 429
goto label_222;
#line 429
label_235:
;
#line 430
c_rt_lib0copy(&___nl__im__16, ___nl__im__55);
#line 431
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 432
___nl__int__89 = 0;
#line 432
___nl__bool__88 = ___nl__int__56 == ___nl__int__89;
#line 432
//clear ___nl__int__89;
#line 432
___nl__bool__88 = !___nl__bool__88;
#line 432
if(___nl__bool__88){ goto label_266;}
#line 433
___nl__int__90 = 1;
#line 433
c_rt_lib0move(&___nl__im__91, c_rt_lib0int_new(___nl__int__90));
#line 433
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__91));
#line 433
//clear ___nl__int__90;
#line 433
c_rt_lib0clear(&___nl__im__91);
#line 434
c_rt_lib0clear(&___nl__im__55);
#line 434
//clear ___nl__int__56;
#line 434
c_rt_lib0clear(&___nl__im__57);
#line 434
//clear ___nl__bool__58;
#line 434
c_rt_lib0clear(&___nl__im__59);
#line 434
c_rt_lib0clear(&___nl__im__60);
#line 434
c_rt_lib0clear(&___nl__im__61);
#line 434
c_rt_lib0clear(&___nl__im__70);
#line 434
//clear ___nl__bool__71;
#line 434
c_rt_lib0clear(&___nl__im__72);
#line 434
c_rt_lib0clear(&___nl__im__73);
#line 434
c_rt_lib0clear(&___nl__im__82);
#line 434
//clear ___nl__bool__83;
#line 434
c_rt_lib0clear(&___nl__im__84);
#line 434
c_rt_lib0clear(&___nl__im__85);
#line 434
//clear ___nl__bool__88;
#line 434
goto label_103;
#line 435
goto label_266;
#line 435
label_266:
;
#line 435
//clear ___nl__bool__88;
#line 436
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_mk(0));
#line 437
c_rt_lib0move(&___nl__im__96, c_rt_lib0init_iter(___nl__im__5));
#line 437
label_270:
;
#line 437
___nl__bool__94 = c_rt_lib0is_end_hash(___nl__im__96);
#line 437
if(___nl__bool__94){ goto label_306;}
#line 437
c_rt_lib0move(&___nl__im__93, c_rt_lib0get_key_iter(___nl__im__96));
#line 437
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__93));
#line 438
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__95, ___get_global_string_const(78)));
#line 438
c_rt_lib0move(&___nl__im__97, compiler_priv0parse_module(___nl__im__93, ___nl__im__98, &___nl__im__7));
#line 438
c_rt_lib0clear(&___nl__im__98);
#line 438
___nl__bool__99 = c_rt_lib0priv_is(___nl__im__97, ___get_global_string_const(83));
#line 438
if(___nl__bool__99){ goto label_285;}
#line 441
___nl__bool__99 = c_rt_lib0priv_is(___nl__im__97, ___get_global_string_const(82));
#line 441
if(___nl__bool__99){ goto label_291;}
#line 441
c_rt_lib0move(&___nl__im__100,___get_global_string_const(15));
#line 441
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_mk(2, ___nl__im__100, ___nl__im__97));
#line 441
nl_die_arg(___nl__im__100);
#line 438
label_285:
;
#line 438
c_rt_lib0move(&___nl__im__102, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(83)));
#line 438
c_rt_lib0copy(&___nl__im__101, ___nl__im__102);
#line 439
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__93, ___nl__im__101));
#line 440
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__93, ___nl__im__101));
#line 441
goto label_296;
#line 441
label_291:
;
#line 441
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(82)));
#line 441
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 442
c_rt_lib0delete(hash0set_value(&___nl__im__92, ___nl__im__93, ___nl__im__95));
#line 443
goto label_296;
#line 443
label_296:
;
#line 443
c_rt_lib0clear(&___nl__im__97);
#line 443
//clear ___nl__bool__99;
#line 443
c_rt_lib0clear(&___nl__im__100);
#line 443
c_rt_lib0clear(&___nl__im__101);
#line 443
c_rt_lib0clear(&___nl__im__102);
#line 443
c_rt_lib0clear(&___nl__im__103);
#line 443
c_rt_lib0clear(&___nl__im__104);
#line 444
c_rt_lib0move(&___nl__im__96, c_rt_lib0next_iter(___nl__im__96));
#line 444
goto label_270;
#line 444
label_306:
;
#line 445
c_rt_lib0copy(&___nl__im__5, ___nl__im__92);
#line 446
___nl__int__106 = hash0size(___nl__im__5);
#line 446
___nl__int__107 = 0;
#line 446
___nl__bool__105 = ___nl__int__106 > ___nl__int__107;
#line 446
//clear ___nl__int__106;
#line 446
//clear ___nl__int__107;
#line 446
___nl__bool__105 = !___nl__bool__105;
#line 446
if(___nl__bool__105){ goto label_366;}
#line 447
compiler_priv0show_and_count_errors(___nl__im__7, ___nl__im__0, ___nl__im__55);
#line 448
c_rt_lib0move(&___nl__im__111, string0lf());
#line 448
c_rt_lib0move(&___nl__im__112,___get_global_string_const(147));
#line 448
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__112));
#line 448
c_rt_lib0clear(&___nl__im__111);
#line 448
c_rt_lib0clear(&___nl__im__112);
#line 448
___nl__int__113 = hash0size(___nl__im__5);
#line 448
c_rt_lib0move(&___nl__string__114, c_rt_lib0int_to_string(___nl__int__113));
#line 448
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__string__114));
#line 448
c_rt_lib0clear(&___nl__im__110);
#line 448
//clear ___nl__int__113;
#line 448
c_rt_lib0clear(&___nl__string__114);
#line 448
c_rt_lib0move(&___nl__im__115,___get_global_string_const(148));
#line 448
c_rt_lib0move(&___nl__im__108, c_rt_lib0concat_new(___nl__im__109, ___nl__im__115));
#line 448
c_rt_lib0clear(&___nl__im__109);
#line 448
c_rt_lib0clear(&___nl__im__115);
#line 448
c_rt_lib0delete(c_fe_lib0print(___nl__im__108));
#line 448
c_rt_lib0clear(&___nl__im__108);
#line 449
c_rt_lib0move(&___nl__im__116,___get_global_string_const(149));
#line 449
c_rt_lib0delete(c_fe_lib0print(___nl__im__116));
#line 449
c_rt_lib0clear(&___nl__im__116);
#line 450
c_rt_lib0clear(&___nl__im__55);
#line 450
//clear ___nl__int__56;
#line 450
c_rt_lib0clear(&___nl__im__57);
#line 450
//clear ___nl__bool__58;
#line 450
c_rt_lib0clear(&___nl__im__59);
#line 450
c_rt_lib0clear(&___nl__im__60);
#line 450
c_rt_lib0clear(&___nl__im__61);
#line 450
c_rt_lib0clear(&___nl__im__70);
#line 450
//clear ___nl__bool__71;
#line 450
c_rt_lib0clear(&___nl__im__72);
#line 450
c_rt_lib0clear(&___nl__im__73);
#line 450
c_rt_lib0clear(&___nl__im__82);
#line 450
//clear ___nl__bool__83;
#line 450
c_rt_lib0clear(&___nl__im__84);
#line 450
c_rt_lib0clear(&___nl__im__85);
#line 450
c_rt_lib0clear(&___nl__im__92);
#line 450
c_rt_lib0clear(&___nl__im__93);
#line 450
//clear ___nl__bool__94;
#line 450
c_rt_lib0clear(&___nl__im__95);
#line 450
c_rt_lib0clear(&___nl__im__96);
#line 450
c_rt_lib0clear(&___nl__im__97);
#line 450
//clear ___nl__bool__99;
#line 450
c_rt_lib0clear(&___nl__im__100);
#line 450
c_rt_lib0clear(&___nl__im__101);
#line 450
c_rt_lib0clear(&___nl__im__102);
#line 450
c_rt_lib0clear(&___nl__im__103);
#line 450
c_rt_lib0clear(&___nl__im__104);
#line 450
//clear ___nl__bool__105;
#line 450
goto label_103;
#line 451
goto label_366;
#line 451
label_366:
;
#line 451
//clear ___nl__bool__105;
#line 452
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 452
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 452
___nl__bool__118 = c_rt_lib0check_true_native(___nl__im__119);
#line 452
c_rt_lib0clear(&___nl__im__119);
#line 452
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__7, ___nl__im__117, ___nl__bool__118));
#line 452
c_rt_lib0clear(&___nl__im__117);
#line 452
//clear ___nl__bool__118;
#line 453
c_rt_lib0move(&___nl__im__123, c_rt_lib0init_iter(___nl__im__2));
#line 453
label_376:
;
#line 453
___nl__bool__121 = c_rt_lib0is_end_hash(___nl__im__123);
#line 453
if(___nl__bool__121){ goto label_384;}
#line 453
c_rt_lib0move(&___nl__im__120, c_rt_lib0get_key_iter(___nl__im__123));
#line 453
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__120));
#line 454
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__120, ___nl__im__122));
#line 455
c_rt_lib0move(&___nl__im__123, c_rt_lib0next_iter(___nl__im__123));
#line 455
goto label_376;
#line 455
label_384:
;
#line 456
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_mk(0));
#line 457
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_mk(0));
#line 458
c_rt_lib0move(&___nl__im__129, c_rt_lib0init_iter(___nl__im__4));
#line 458
label_388:
;
#line 458
___nl__bool__127 = c_rt_lib0is_end_hash(___nl__im__129);
#line 458
if(___nl__bool__127){ goto label_490;}
#line 458
c_rt_lib0move(&___nl__im__126, c_rt_lib0get_key_iter(___nl__im__129));
#line 458
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__126));
#line 459
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__126));
#line 459
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__126, ___nl__im__130));
#line 459
c_rt_lib0clear(&___nl__im__130);
#line 460
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_mk(0));
#line 461
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__126));
#line 461
c_rt_lib0move(&___nl__im__132, compiler_priv0get_functions(___nl__im__133));
#line 461
c_rt_lib0clear(&___nl__im__133);
#line 462
___nl__bool__134 = hash0has_key(___nl__im__46, ___nl__im__126);
#line 462
___nl__bool__134 = !___nl__bool__134;
#line 462
if(___nl__bool__134){ goto label_405;}
#line 463
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value(___nl__im__46, ___nl__im__126));
#line 464
goto label_405;
#line 464
label_405:
;
#line 464
//clear ___nl__bool__134;
#line 465
c_rt_lib0move(&___nl__im__138, c_rt_lib0init_iter(___nl__im__131));
#line 465
label_408:
;
#line 465
___nl__bool__136 = c_rt_lib0is_end_hash(___nl__im__138);
#line 465
if(___nl__bool__136){ goto label_478;}
#line 465
c_rt_lib0move(&___nl__im__135, c_rt_lib0get_key_iter(___nl__im__138));
#line 465
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value(___nl__im__131, ___nl__im__135));
#line 466
___nl__bool__139 = hash0has_key(___nl__im__132, ___nl__im__135);
#line 466
___nl__bool__139 = !___nl__bool__139;
#line 466
if(___nl__bool__139){ goto label_473;}
#line 467
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value(___nl__im__132, ___nl__im__135));
#line 468
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(112)));
#line 468
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(112)));
#line 468
c_rt_lib0move(&___nl__im__144, dfile0deep_eq(___nl__im__142, ___nl__im__143));
#line 468
___nl__bool__141 = c_rt_lib0check_true_native(___nl__im__144);
#line 468
c_rt_lib0clear(&___nl__im__142);
#line 468
c_rt_lib0clear(&___nl__im__143);
#line 468
c_rt_lib0clear(&___nl__im__144);
#line 468
___nl__bool__141 = !___nl__bool__141;
#line 468
if(___nl__bool__141){ goto label_434;}
#line 469
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(113)));
#line 469
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(113)));
#line 469
c_rt_lib0move(&___nl__im__147, dfile0deep_eq(___nl__im__145, ___nl__im__146));
#line 469
___nl__bool__141 = c_rt_lib0check_true_native(___nl__im__147);
#line 469
c_rt_lib0clear(&___nl__im__145);
#line 469
c_rt_lib0clear(&___nl__im__146);
#line 469
c_rt_lib0clear(&___nl__im__147);
#line 469
___nl__bool__141 = !___nl__bool__141;
#line 469
label_434:
;
#line 469
___nl__bool__141 = !___nl__bool__141;
#line 469
if(___nl__bool__141){ goto label_449;}
#line 470
___nl__int__148 = 1;
#line 470
c_rt_lib0move(&___nl__im__152,___get_global_string_const(34));
#line 470
c_rt_lib0move(&___nl__im__151, c_rt_lib0concat_new(___nl__im__126, ___nl__im__152));
#line 470
c_rt_lib0clear(&___nl__im__152);
#line 470
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__135));
#line 470
c_rt_lib0clear(&___nl__im__151);
#line 470
c_rt_lib0move(&___nl__im__149, c_rt_lib0int_new(___nl__int__148));
#line 470
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__124, ___nl__im__150, ___nl__im__149));
#line 470
//clear ___nl__int__148;
#line 470
c_rt_lib0clear(&___nl__im__149);
#line 470
c_rt_lib0clear(&___nl__im__150);
#line 471
goto label_449;
#line 471
label_449:
;
#line 471
//clear ___nl__bool__141;
#line 472
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(114)));
#line 472
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(114)));
#line 472
___nl__bool__153 = compiler_priv0own_type_changed(___nl__im__154, ___nl__im__155, ___nl__im__48);
#line 472
c_rt_lib0clear(&___nl__im__154);
#line 472
c_rt_lib0clear(&___nl__im__155);
#line 472
___nl__bool__153 = !___nl__bool__153;
#line 472
if(___nl__bool__153){ goto label_470;}
#line 473
___nl__int__156 = 1;
#line 473
c_rt_lib0move(&___nl__im__160,___get_global_string_const(34));
#line 473
c_rt_lib0move(&___nl__im__159, c_rt_lib0concat_new(___nl__im__126, ___nl__im__160));
#line 473
c_rt_lib0clear(&___nl__im__160);
#line 473
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__135));
#line 473
c_rt_lib0clear(&___nl__im__159);
#line 473
c_rt_lib0move(&___nl__im__157, c_rt_lib0int_new(___nl__int__156));
#line 473
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__125, ___nl__im__158, ___nl__im__157));
#line 473
//clear ___nl__int__156;
#line 473
c_rt_lib0clear(&___nl__im__157);
#line 473
c_rt_lib0clear(&___nl__im__158);
#line 474
goto label_470;
#line 474
label_470:
;
#line 474
//clear ___nl__bool__153;
#line 475
goto label_473;
#line 475
label_473:
;
#line 475
//clear ___nl__bool__139;
#line 475
c_rt_lib0clear(&___nl__im__140);
#line 476
c_rt_lib0move(&___nl__im__138, c_rt_lib0next_iter(___nl__im__138));
#line 476
goto label_408;
#line 476
label_478:
;
#line 477
c_rt_lib0copy(&___nl__im__161, ___nl__im__132);
#line 477
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__46, ___nl__im__126, ___nl__im__161));
#line 477
c_rt_lib0clear(&___nl__im__161);
#line 477
c_rt_lib0clear(&___nl__im__131);
#line 477
c_rt_lib0clear(&___nl__im__132);
#line 477
c_rt_lib0clear(&___nl__im__135);
#line 477
//clear ___nl__bool__136;
#line 477
c_rt_lib0clear(&___nl__im__137);
#line 477
c_rt_lib0clear(&___nl__im__138);
#line 478
c_rt_lib0move(&___nl__im__129, c_rt_lib0next_iter(___nl__im__129));
#line 478
goto label_388;
#line 478
label_490:
;
#line 479
___nl__int__163 = hash0size(___nl__im__125);
#line 479
___nl__int__164 = 0;
#line 479
___nl__bool__162 = ___nl__int__163 != ___nl__int__164;
#line 479
//clear ___nl__int__163;
#line 479
//clear ___nl__int__164;
#line 479
___nl__bool__162 = !___nl__bool__162;
#line 479
if(___nl__bool__162){ goto label_545;}
#line 480
c_rt_lib0move(&___nl__im__6, compiler_priv0get_files_to_parse(___nl__im__0));
#line 481
c_rt_lib0clear(&___nl__im__55);
#line 481
//clear ___nl__int__56;
#line 481
c_rt_lib0clear(&___nl__im__57);
#line 481
//clear ___nl__bool__58;
#line 481
c_rt_lib0clear(&___nl__im__59);
#line 481
c_rt_lib0clear(&___nl__im__60);
#line 481
c_rt_lib0clear(&___nl__im__61);
#line 481
c_rt_lib0clear(&___nl__im__70);
#line 481
//clear ___nl__bool__71;
#line 481
c_rt_lib0clear(&___nl__im__72);
#line 481
c_rt_lib0clear(&___nl__im__73);
#line 481
c_rt_lib0clear(&___nl__im__82);
#line 481
//clear ___nl__bool__83;
#line 481
c_rt_lib0clear(&___nl__im__84);
#line 481
c_rt_lib0clear(&___nl__im__85);
#line 481
c_rt_lib0clear(&___nl__im__92);
#line 481
c_rt_lib0clear(&___nl__im__93);
#line 481
//clear ___nl__bool__94;
#line 481
c_rt_lib0clear(&___nl__im__95);
#line 481
c_rt_lib0clear(&___nl__im__96);
#line 481
c_rt_lib0clear(&___nl__im__97);
#line 481
//clear ___nl__bool__99;
#line 481
c_rt_lib0clear(&___nl__im__100);
#line 481
c_rt_lib0clear(&___nl__im__101);
#line 481
c_rt_lib0clear(&___nl__im__102);
#line 481
c_rt_lib0clear(&___nl__im__103);
#line 481
c_rt_lib0clear(&___nl__im__104);
#line 481
c_rt_lib0clear(&___nl__im__120);
#line 481
//clear ___nl__bool__121;
#line 481
c_rt_lib0clear(&___nl__im__122);
#line 481
c_rt_lib0clear(&___nl__im__123);
#line 481
c_rt_lib0clear(&___nl__im__124);
#line 481
c_rt_lib0clear(&___nl__im__125);
#line 481
c_rt_lib0clear(&___nl__im__126);
#line 481
//clear ___nl__bool__127;
#line 481
c_rt_lib0clear(&___nl__im__128);
#line 481
c_rt_lib0clear(&___nl__im__129);
#line 481
c_rt_lib0clear(&___nl__im__131);
#line 481
c_rt_lib0clear(&___nl__im__132);
#line 481
c_rt_lib0clear(&___nl__im__135);
#line 481
//clear ___nl__bool__136;
#line 481
c_rt_lib0clear(&___nl__im__137);
#line 481
c_rt_lib0clear(&___nl__im__138);
#line 481
//clear ___nl__bool__162;
#line 481
goto label_103;
#line 482
goto label_545;
#line 482
label_545:
;
#line 482
//clear ___nl__bool__162;
#line 483
___nl__int__166 = hash0size(___nl__im__124);
#line 483
___nl__int__167 = 0;
#line 483
___nl__bool__165 = ___nl__int__166 != ___nl__int__167;
#line 483
//clear ___nl__int__166;
#line 483
//clear ___nl__int__167;
#line 483
___nl__bool__165 = !___nl__bool__165;
#line 483
if(___nl__bool__165){ goto label_659;}
#line 484
c_rt_lib0move(&___nl__im__168, compiler_priv0get_files_to_parse(___nl__im__0));
#line 485
c_rt_lib0move(&___nl__im__172, c_rt_lib0init_iter(___nl__im__124));
#line 485
label_556:
;
#line 485
___nl__bool__170 = c_rt_lib0is_end_hash(___nl__im__172);
#line 485
if(___nl__bool__170){ goto label_596;}
#line 485
c_rt_lib0move(&___nl__im__169, c_rt_lib0get_key_iter(___nl__im__172));
#line 485
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value(___nl__im__124, ___nl__im__169));
#line 486
___nl__bool__173 = hash0has_key(___nl__im__47, ___nl__im__169);
#line 486
___nl__bool__173 = !___nl__bool__173;
#line 486
if(___nl__bool__173){ goto label_586;}
#line 487
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value(___nl__im__47, ___nl__im__169));
#line 487
c_rt_lib0move(&___nl__im__178, c_rt_lib0init_iter(___nl__im__174));
#line 487
label_566:
;
#line 487
___nl__bool__176 = c_rt_lib0is_end_hash(___nl__im__178);
#line 487
if(___nl__bool__176){ goto label_584;}
#line 487
c_rt_lib0move(&___nl__im__175, c_rt_lib0get_key_iter(___nl__im__178));
#line 487
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value(___nl__im__174, ___nl__im__175));
#line 487
___nl__int__177 = getIntFromImm(___nl__im__179);
#line 488
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value(___nl__im__168, ___nl__im__175));
#line 488
c_rt_lib0copy(&___nl__im__181, ___nl__im__180);
#line 488
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__175, ___nl__im__181));
#line 488
c_rt_lib0clear(&___nl__im__180);
#line 488
c_rt_lib0clear(&___nl__im__181);
#line 489
c_rt_lib0move(&___nl__im__183,___get_global_string_const(150));
#line 489
c_rt_lib0move(&___nl__im__182, c_rt_lib0concat_new(___nl__im__183, ___nl__im__175));
#line 489
c_rt_lib0clear(&___nl__im__183);
#line 489
c_rt_lib0delete(c_fe_lib0print(___nl__im__182));
#line 489
c_rt_lib0clear(&___nl__im__182);
#line 490
c_rt_lib0move(&___nl__im__178, c_rt_lib0next_iter(___nl__im__178));
#line 490
goto label_566;
#line 490
label_584:
;
#line 491
goto label_586;
#line 491
label_586:
;
#line 491
//clear ___nl__bool__173;
#line 491
c_rt_lib0clear(&___nl__im__174);
#line 491
c_rt_lib0clear(&___nl__im__175);
#line 491
//clear ___nl__bool__176;
#line 491
//clear ___nl__int__177;
#line 491
c_rt_lib0clear(&___nl__im__178);
#line 491
c_rt_lib0clear(&___nl__im__179);
#line 492
c_rt_lib0move(&___nl__im__172, c_rt_lib0next_iter(___nl__im__172));
#line 492
goto label_556;
#line 492
label_596:
;
#line 493
___nl__int__185 = hash0size(___nl__im__6);
#line 493
___nl__int__186 = 0;
#line 493
___nl__bool__184 = ___nl__int__185 != ___nl__int__186;
#line 493
//clear ___nl__int__185;
#line 493
//clear ___nl__int__186;
#line 493
___nl__bool__184 = !___nl__bool__184;
#line 493
if(___nl__bool__184){ goto label_656;}
#line 494
c_rt_lib0clear(&___nl__im__55);
#line 494
//clear ___nl__int__56;
#line 494
c_rt_lib0clear(&___nl__im__57);
#line 494
//clear ___nl__bool__58;
#line 494
c_rt_lib0clear(&___nl__im__59);
#line 494
c_rt_lib0clear(&___nl__im__60);
#line 494
c_rt_lib0clear(&___nl__im__61);
#line 494
c_rt_lib0clear(&___nl__im__70);
#line 494
//clear ___nl__bool__71;
#line 494
c_rt_lib0clear(&___nl__im__72);
#line 494
c_rt_lib0clear(&___nl__im__73);
#line 494
c_rt_lib0clear(&___nl__im__82);
#line 494
//clear ___nl__bool__83;
#line 494
c_rt_lib0clear(&___nl__im__84);
#line 494
c_rt_lib0clear(&___nl__im__85);
#line 494
c_rt_lib0clear(&___nl__im__92);
#line 494
c_rt_lib0clear(&___nl__im__93);
#line 494
//clear ___nl__bool__94;
#line 494
c_rt_lib0clear(&___nl__im__95);
#line 494
c_rt_lib0clear(&___nl__im__96);
#line 494
c_rt_lib0clear(&___nl__im__97);
#line 494
//clear ___nl__bool__99;
#line 494
c_rt_lib0clear(&___nl__im__100);
#line 494
c_rt_lib0clear(&___nl__im__101);
#line 494
c_rt_lib0clear(&___nl__im__102);
#line 494
c_rt_lib0clear(&___nl__im__103);
#line 494
c_rt_lib0clear(&___nl__im__104);
#line 494
c_rt_lib0clear(&___nl__im__120);
#line 494
//clear ___nl__bool__121;
#line 494
c_rt_lib0clear(&___nl__im__122);
#line 494
c_rt_lib0clear(&___nl__im__123);
#line 494
c_rt_lib0clear(&___nl__im__124);
#line 494
c_rt_lib0clear(&___nl__im__125);
#line 494
c_rt_lib0clear(&___nl__im__126);
#line 494
//clear ___nl__bool__127;
#line 494
c_rt_lib0clear(&___nl__im__128);
#line 494
c_rt_lib0clear(&___nl__im__129);
#line 494
c_rt_lib0clear(&___nl__im__131);
#line 494
c_rt_lib0clear(&___nl__im__132);
#line 494
c_rt_lib0clear(&___nl__im__135);
#line 494
//clear ___nl__bool__136;
#line 494
c_rt_lib0clear(&___nl__im__137);
#line 494
c_rt_lib0clear(&___nl__im__138);
#line 494
//clear ___nl__bool__165;
#line 494
c_rt_lib0clear(&___nl__im__168);
#line 494
c_rt_lib0clear(&___nl__im__169);
#line 494
//clear ___nl__bool__170;
#line 494
c_rt_lib0clear(&___nl__im__171);
#line 494
c_rt_lib0clear(&___nl__im__172);
#line 494
//clear ___nl__bool__184;
#line 494
goto label_103;
#line 495
goto label_656;
#line 495
label_656:
;
#line 495
//clear ___nl__bool__184;
#line 496
goto label_659;
#line 496
label_659:
;
#line 496
//clear ___nl__bool__165;
#line 496
c_rt_lib0clear(&___nl__im__168);
#line 496
c_rt_lib0clear(&___nl__im__169);
#line 496
//clear ___nl__bool__170;
#line 496
c_rt_lib0clear(&___nl__im__171);
#line 496
c_rt_lib0clear(&___nl__im__172);
#line 497
___nl__int__188 = compiler_priv0show_and_count_errors(___nl__im__7, ___nl__im__0, ___nl__im__55);
#line 497
___nl__int__189 = 0;
#line 497
___nl__bool__187 = ___nl__int__188 > ___nl__int__189;
#line 497
//clear ___nl__int__188;
#line 497
//clear ___nl__int__189;
#line 497
___nl__bool__187 = !___nl__bool__187;
#line 497
if(___nl__bool__187){ goto label_722;}
#line 498
c_rt_lib0move(&___nl__im__190,___get_global_string_const(149));
#line 498
c_rt_lib0delete(c_fe_lib0print(___nl__im__190));
#line 498
c_rt_lib0clear(&___nl__im__190);
#line 499
c_rt_lib0clear(&___nl__im__55);
#line 499
//clear ___nl__int__56;
#line 499
c_rt_lib0clear(&___nl__im__57);
#line 499
//clear ___nl__bool__58;
#line 499
c_rt_lib0clear(&___nl__im__59);
#line 499
c_rt_lib0clear(&___nl__im__60);
#line 499
c_rt_lib0clear(&___nl__im__61);
#line 499
c_rt_lib0clear(&___nl__im__70);
#line 499
//clear ___nl__bool__71;
#line 499
c_rt_lib0clear(&___nl__im__72);
#line 499
c_rt_lib0clear(&___nl__im__73);
#line 499
c_rt_lib0clear(&___nl__im__82);
#line 499
//clear ___nl__bool__83;
#line 499
c_rt_lib0clear(&___nl__im__84);
#line 499
c_rt_lib0clear(&___nl__im__85);
#line 499
c_rt_lib0clear(&___nl__im__92);
#line 499
c_rt_lib0clear(&___nl__im__93);
#line 499
//clear ___nl__bool__94;
#line 499
c_rt_lib0clear(&___nl__im__95);
#line 499
c_rt_lib0clear(&___nl__im__96);
#line 499
c_rt_lib0clear(&___nl__im__97);
#line 499
//clear ___nl__bool__99;
#line 499
c_rt_lib0clear(&___nl__im__100);
#line 499
c_rt_lib0clear(&___nl__im__101);
#line 499
c_rt_lib0clear(&___nl__im__102);
#line 499
c_rt_lib0clear(&___nl__im__103);
#line 499
c_rt_lib0clear(&___nl__im__104);
#line 499
c_rt_lib0clear(&___nl__im__120);
#line 499
//clear ___nl__bool__121;
#line 499
c_rt_lib0clear(&___nl__im__122);
#line 499
c_rt_lib0clear(&___nl__im__123);
#line 499
c_rt_lib0clear(&___nl__im__124);
#line 499
c_rt_lib0clear(&___nl__im__125);
#line 499
c_rt_lib0clear(&___nl__im__126);
#line 499
//clear ___nl__bool__127;
#line 499
c_rt_lib0clear(&___nl__im__128);
#line 499
c_rt_lib0clear(&___nl__im__129);
#line 499
c_rt_lib0clear(&___nl__im__131);
#line 499
c_rt_lib0clear(&___nl__im__132);
#line 499
c_rt_lib0clear(&___nl__im__135);
#line 499
//clear ___nl__bool__136;
#line 499
c_rt_lib0clear(&___nl__im__137);
#line 499
c_rt_lib0clear(&___nl__im__138);
#line 499
//clear ___nl__bool__187;
#line 499
goto label_103;
#line 500
goto label_722;
#line 500
label_722:
;
#line 500
//clear ___nl__bool__187;
#line 501
c_rt_lib0move(&___nl__im__194, c_rt_lib0init_iter(___nl__im__4));
#line 501
label_725:
;
#line 501
___nl__bool__192 = c_rt_lib0is_end_hash(___nl__im__194);
#line 501
if(___nl__bool__192){ goto label_735;}
#line 501
c_rt_lib0move(&___nl__im__191, c_rt_lib0get_key_iter(___nl__im__194));
#line 501
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__191));
#line 502
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__191));
#line 502
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__191, ___nl__im__195));
#line 502
c_rt_lib0clear(&___nl__im__195);
#line 503
c_rt_lib0move(&___nl__im__194, c_rt_lib0next_iter(___nl__im__194));
#line 503
goto label_725;
#line 503
label_735:
;
#line 504
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 504
___nl__bool__196 = c_rt_lib0priv_is(___nl__im__197, ___get_global_string_const(68));
#line 504
c_rt_lib0clear(&___nl__im__197);
#line 504
if(___nl__bool__196){ goto label_743;}
#line 504
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 504
___nl__bool__196 = c_rt_lib0priv_is(___nl__im__198, ___get_global_string_const(67));
#line 504
c_rt_lib0clear(&___nl__im__198);
#line 504
label_743:
;
#line 504
___nl__bool__196 = !___nl__bool__196;
#line 504
___nl__bool__196 = !___nl__bool__196;
#line 504
if(___nl__bool__196){ goto label_789;}
#line 505
c_rt_lib0move(&___nl__im__199,___get_global_string_const(151));
#line 505
c_rt_lib0delete(c_fe_lib0print(___nl__im__199));
#line 505
c_rt_lib0clear(&___nl__im__199);
#line 506
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_mk(0));
#line 507
c_rt_lib0move(&___nl__im__48, compiler_priv0get_defined_types(___nl__im__3));
#line 508
c_rt_lib0move(&___nl__im__201, compiler_priv0translate(___nl__im__4, &___nl__im__13, ___nl__im__48));
#line 509
c_rt_lib0delete(compiler_priv0add_to_called_from(&___nl__im__47, ___nl__im__201));
#line 510
c_rt_lib0move(&___nl__im__203, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 511
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 511
c_rt_lib0move(&___nl__im__202, compiler_priv0generate_modules_to_files(___nl__im__201, ___nl__im__55, ___nl__im__203, &___nl__rec__17, ___nl__im__204));
#line 511
c_rt_lib0clear(&___nl__im__203);
#line 511
c_rt_lib0clear(&___nl__im__204);
#line 511
___nl__bool__205 = c_rt_lib0priv_is(___nl__im__202, ___get_global_string_const(82));
#line 511
if(___nl__bool__205){ goto label_766;}
#line 515
___nl__bool__205 = c_rt_lib0priv_is(___nl__im__202, ___get_global_string_const(83));
#line 515
if(___nl__bool__205){ goto label_782;}
#line 515
c_rt_lib0move(&___nl__im__206,___get_global_string_const(15));
#line 515
c_rt_lib0move(&___nl__im__206, c_rt_lib0array_mk(2, ___nl__im__206, ___nl__im__202));
#line 515
nl_die_arg(___nl__im__206);
#line 511
label_766:
;
#line 511
c_rt_lib0move(&___nl__im__208, c_rt_lib0priv_as(___nl__im__202, ___get_global_string_const(82)));
#line 511
c_rt_lib0copy(&___nl__im__207, ___nl__im__208);
#line 512
c_rt_lib0move(&___nl__im__212, c_rt_lib0init_iter(___nl__im__207));
#line 512
label_770:
;
#line 512
___nl__bool__210 = c_rt_lib0is_end_hash(___nl__im__212);
#line 512
if(___nl__bool__210){ goto label_780;}
#line 512
c_rt_lib0move(&___nl__im__209, c_rt_lib0get_key_iter(___nl__im__212));
#line 512
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value(___nl__im__207, ___nl__im__209));
#line 513
c_rt_lib0move(&___nl__im__213, hash0get_value(___nl__im__2, ___nl__im__209));
#line 513
c_rt_lib0delete(hash0set_value(&___nl__im__200, ___nl__im__209, ___nl__im__213));
#line 513
c_rt_lib0clear(&___nl__im__213);
#line 514
c_rt_lib0move(&___nl__im__212, c_rt_lib0next_iter(___nl__im__212));
#line 514
goto label_770;
#line 514
label_780:
;
#line 515
goto label_786;
#line 515
label_782:
;
#line 515
c_rt_lib0move(&___nl__im__215, c_rt_lib0priv_as(___nl__im__202, ___get_global_string_const(83)));
#line 515
c_rt_lib0copy(&___nl__im__214, ___nl__im__215);
#line 516
goto label_786;
#line 516
label_786:
;
#line 517
c_rt_lib0copy(&___nl__im__4, ___nl__im__200);
#line 518
goto label_841;
#line 518
label_789:
;
#line 519
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_mk(0));
#line 520
c_rt_lib0move(&___nl__im__220, c_rt_lib0init_iter(___nl__im__4));
#line 520
label_792:
;
#line 520
___nl__bool__218 = c_rt_lib0is_end_hash(___nl__im__220);
#line 520
if(___nl__bool__218){ goto label_838;}
#line 520
c_rt_lib0move(&___nl__im__217, c_rt_lib0get_key_iter(___nl__im__220));
#line 520
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__217));
#line 521
c_rt_lib0move(&___nl__im__222,___get_global_string_const(152));
#line 521
c_rt_lib0move(&___nl__im__221, c_rt_lib0concat_new(___nl__im__222, ___nl__im__217));
#line 521
c_rt_lib0clear(&___nl__im__222);
#line 521
c_rt_lib0delete(c_fe_lib0print(___nl__im__221));
#line 521
c_rt_lib0clear(&___nl__im__221);
#line 522
c_rt_lib0move(&___nl__im__225, hash0get_value(___nl__im__55, ___nl__im__217));
#line 522
c_rt_lib0move(&___nl__im__224, c_rt_lib0hash_get_value_dec(___nl__im__225, ___get_global_string_const(79)));
#line 522
c_rt_lib0clear(&___nl__im__225);
#line 522
c_rt_lib0move(&___nl__im__223, compiler_priv0save_module_to_file(___nl__im__219, ___nl__im__224));
#line 522
c_rt_lib0clear(&___nl__im__224);
#line 522
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__223, ___get_global_string_const(82));
#line 522
if(___nl__bool__226){ goto label_814;}
#line 525
___nl__bool__226 = c_rt_lib0priv_is(___nl__im__223, ___get_global_string_const(83));
#line 525
if(___nl__bool__226){ goto label_824;}
#line 525
c_rt_lib0move(&___nl__im__227,___get_global_string_const(15));
#line 525
c_rt_lib0move(&___nl__im__227, c_rt_lib0array_mk(2, ___nl__im__227, ___nl__im__223));
#line 525
nl_die_arg(___nl__im__227);
#line 522
label_814:
;
#line 522
c_rt_lib0move(&___nl__im__229, c_rt_lib0priv_as(___nl__im__223, ___get_global_string_const(82)));
#line 522
c_rt_lib0copy(&___nl__im__228, ___nl__im__229);
#line 523
c_rt_lib0move(&___nl__im__231,___get_global_string_const(153));
#line 523
c_rt_lib0move(&___nl__im__230, c_rt_lib0concat_new(___nl__im__231, ___nl__im__228));
#line 523
c_rt_lib0clear(&___nl__im__231);
#line 523
c_rt_lib0delete(c_fe_lib0print(___nl__im__230));
#line 523
c_rt_lib0clear(&___nl__im__230);
#line 524
c_rt_lib0delete(hash0set_value(&___nl__im__216, ___nl__im__217, ___nl__im__219));
#line 525
goto label_828;
#line 525
label_824:
;
#line 525
c_rt_lib0move(&___nl__im__233, c_rt_lib0priv_as(___nl__im__223, ___get_global_string_const(83)));
#line 525
c_rt_lib0copy(&___nl__im__232, ___nl__im__233);
#line 526
goto label_828;
#line 526
label_828:
;
#line 526
c_rt_lib0clear(&___nl__im__223);
#line 526
//clear ___nl__bool__226;
#line 526
c_rt_lib0clear(&___nl__im__227);
#line 526
c_rt_lib0clear(&___nl__im__228);
#line 526
c_rt_lib0clear(&___nl__im__229);
#line 526
c_rt_lib0clear(&___nl__im__232);
#line 526
c_rt_lib0clear(&___nl__im__233);
#line 527
c_rt_lib0move(&___nl__im__220, c_rt_lib0next_iter(___nl__im__220));
#line 527
goto label_792;
#line 527
label_838:
;
#line 528
c_rt_lib0copy(&___nl__im__4, ___nl__im__216);
#line 529
goto label_841;
#line 529
label_841:
;
#line 529
//clear ___nl__bool__196;
#line 529
c_rt_lib0clear(&___nl__im__200);
#line 529
c_rt_lib0clear(&___nl__im__201);
#line 529
c_rt_lib0clear(&___nl__im__202);
#line 529
//clear ___nl__bool__205;
#line 529
c_rt_lib0clear(&___nl__im__206);
#line 529
c_rt_lib0clear(&___nl__im__207);
#line 529
c_rt_lib0clear(&___nl__im__208);
#line 529
c_rt_lib0clear(&___nl__im__209);
#line 529
//clear ___nl__bool__210;
#line 529
c_rt_lib0clear(&___nl__im__211);
#line 529
c_rt_lib0clear(&___nl__im__212);
#line 529
c_rt_lib0clear(&___nl__im__214);
#line 529
c_rt_lib0clear(&___nl__im__215);
#line 529
c_rt_lib0clear(&___nl__im__216);
#line 529
c_rt_lib0clear(&___nl__im__217);
#line 529
//clear ___nl__bool__218;
#line 529
c_rt_lib0clear(&___nl__im__219);
#line 529
c_rt_lib0clear(&___nl__im__220);
#line 529
c_rt_lib0clear(&___nl__im__223);
#line 529
//clear ___nl__bool__226;
#line 529
c_rt_lib0clear(&___nl__im__227);
#line 529
c_rt_lib0clear(&___nl__im__228);
#line 529
c_rt_lib0clear(&___nl__im__229);
#line 529
c_rt_lib0clear(&___nl__im__232);
#line 529
c_rt_lib0clear(&___nl__im__233);
#line 530
___nl__int__235 = hash0size(___nl__im__4);
#line 530
___nl__int__236 = 0;
#line 530
___nl__bool__234 = ___nl__int__235 > ___nl__int__236;
#line 530
//clear ___nl__int__235;
#line 530
//clear ___nl__int__236;
#line 530
___nl__bool__234 = !___nl__bool__234;
#line 530
if(___nl__bool__234){ goto label_896;}
#line 531
c_rt_lib0move(&___nl__im__239,___get_global_string_const(154));
#line 531
___nl__int__240 = hash0size(___nl__im__4);
#line 531
c_rt_lib0move(&___nl__string__241, c_rt_lib0int_to_string(___nl__int__240));
#line 531
c_rt_lib0move(&___nl__im__238, c_rt_lib0concat_new(___nl__im__239, ___nl__string__241));
#line 531
c_rt_lib0clear(&___nl__im__239);
#line 531
//clear ___nl__int__240;
#line 531
c_rt_lib0clear(&___nl__string__241);
#line 531
c_rt_lib0move(&___nl__im__242,___get_global_string_const(155));
#line 531
c_rt_lib0move(&___nl__im__237, c_rt_lib0concat_new(___nl__im__238, ___nl__im__242));
#line 531
c_rt_lib0clear(&___nl__im__238);
#line 531
c_rt_lib0clear(&___nl__im__242);
#line 532
c_rt_lib0move(&___nl__im__245, string0lf());
#line 532
c_rt_lib0move(&___nl__im__246,___get_global_string_const(153));
#line 532
c_rt_lib0move(&___nl__im__244, c_rt_lib0concat_new(___nl__im__245, ___nl__im__246));
#line 532
c_rt_lib0clear(&___nl__im__245);
#line 532
c_rt_lib0clear(&___nl__im__246);
#line 532
c_rt_lib0move(&___nl__im__243, c_rt_lib0concat_new(___nl__im__244, ___nl__im__237));
#line 532
c_rt_lib0clear(&___nl__im__244);
#line 532
c_rt_lib0delete(c_fe_lib0print(___nl__im__243));
#line 532
c_rt_lib0clear(&___nl__im__243);
#line 533
goto label_920;
#line 533
label_896:
;
#line 534
c_rt_lib0move(&___nl__im__248, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 534
___nl__bool__247 = c_rt_lib0priv_is(___nl__im__248, ___get_global_string_const(93));
#line 534
c_rt_lib0clear(&___nl__im__248);
#line 534
___nl__bool__247 = !___nl__bool__247;
#line 534
if(___nl__bool__247){ goto label_910;}
#line 535
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 535
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(102)));
#line 535
c_rt_lib0move(&___nl__im__249, c_rt_lib0priv_as(___nl__im__251, ___get_global_string_const(93)));
#line 535
c_rt_lib0clear(&___nl__im__250);
#line 535
c_rt_lib0clear(&___nl__im__251);
#line 535
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__249));
#line 535
c_rt_lib0clear(&___nl__im__249);
#line 536
goto label_910;
#line 536
label_910:
;
#line 536
//clear ___nl__bool__247;
#line 537
c_rt_lib0move(&___nl__im__253, string0lf());
#line 537
c_rt_lib0move(&___nl__im__254,___get_global_string_const(156));
#line 537
c_rt_lib0move(&___nl__im__252, c_rt_lib0concat_new(___nl__im__253, ___nl__im__254));
#line 537
c_rt_lib0clear(&___nl__im__253);
#line 537
c_rt_lib0clear(&___nl__im__254);
#line 537
c_rt_lib0delete(c_fe_lib0print(___nl__im__252));
#line 537
c_rt_lib0clear(&___nl__im__252);
#line 538
goto label_920;
#line 538
label_920:
;
#line 538
//clear ___nl__bool__234;
#line 538
c_rt_lib0clear(&___nl__im__237);
#line 539
c_rt_lib0move(&___nl__im__255,___get_global_string_const(149));
#line 539
c_rt_lib0delete(c_fe_lib0print(___nl__im__255));
#line 539
c_rt_lib0clear(&___nl__im__255);
#line 539
c_rt_lib0clear(&___nl__im__55);
#line 539
//clear ___nl__int__56;
#line 539
c_rt_lib0clear(&___nl__im__57);
#line 539
//clear ___nl__bool__58;
#line 539
c_rt_lib0clear(&___nl__im__59);
#line 539
c_rt_lib0clear(&___nl__im__60);
#line 539
c_rt_lib0clear(&___nl__im__61);
#line 539
c_rt_lib0clear(&___nl__im__70);
#line 539
//clear ___nl__bool__71;
#line 539
c_rt_lib0clear(&___nl__im__72);
#line 539
c_rt_lib0clear(&___nl__im__73);
#line 539
c_rt_lib0clear(&___nl__im__82);
#line 539
//clear ___nl__bool__83;
#line 539
c_rt_lib0clear(&___nl__im__84);
#line 539
c_rt_lib0clear(&___nl__im__85);
#line 539
c_rt_lib0clear(&___nl__im__92);
#line 539
c_rt_lib0clear(&___nl__im__93);
#line 539
//clear ___nl__bool__94;
#line 539
c_rt_lib0clear(&___nl__im__95);
#line 539
c_rt_lib0clear(&___nl__im__96);
#line 539
c_rt_lib0clear(&___nl__im__97);
#line 539
//clear ___nl__bool__99;
#line 539
c_rt_lib0clear(&___nl__im__100);
#line 539
c_rt_lib0clear(&___nl__im__101);
#line 539
c_rt_lib0clear(&___nl__im__102);
#line 539
c_rt_lib0clear(&___nl__im__103);
#line 539
c_rt_lib0clear(&___nl__im__104);
#line 539
c_rt_lib0clear(&___nl__im__120);
#line 539
//clear ___nl__bool__121;
#line 539
c_rt_lib0clear(&___nl__im__122);
#line 539
c_rt_lib0clear(&___nl__im__123);
#line 539
c_rt_lib0clear(&___nl__im__124);
#line 539
c_rt_lib0clear(&___nl__im__125);
#line 539
c_rt_lib0clear(&___nl__im__126);
#line 539
//clear ___nl__bool__127;
#line 539
c_rt_lib0clear(&___nl__im__128);
#line 539
c_rt_lib0clear(&___nl__im__129);
#line 539
c_rt_lib0clear(&___nl__im__131);
#line 539
c_rt_lib0clear(&___nl__im__132);
#line 539
c_rt_lib0clear(&___nl__im__135);
#line 539
//clear ___nl__bool__136;
#line 539
c_rt_lib0clear(&___nl__im__137);
#line 539
c_rt_lib0clear(&___nl__im__138);
#line 539
c_rt_lib0clear(&___nl__im__191);
#line 539
//clear ___nl__bool__192;
#line 539
c_rt_lib0clear(&___nl__im__193);
#line 539
c_rt_lib0clear(&___nl__im__194);
#line 393
goto label_103;
#line 393
c_rt_lib0clear(&___nl__im__0);
#line 393
c_rt_lib0clear(&___nl__im__1);
#line 393
c_rt_lib0clear(&___nl__im__2);
#line 393
c_rt_lib0clear(&___nl__im__3);
#line 393
c_rt_lib0clear(&___nl__im__4);
#line 393
c_rt_lib0clear(&___nl__im__5);
#line 393
c_rt_lib0clear(&___nl__im__6);
#line 393
c_rt_lib0clear(&___nl__im__7);
#line 393
c_rt_lib0clear(&___nl__im__13);
#line 393
c_rt_lib0clear(&___nl__im__16);
#line 393
generator_c0state_t0type0clear(___nl__rec__17);;
#line 393
c_rt_lib0clear(&___nl__im__46);
#line 393
c_rt_lib0clear(&___nl__im__47);
#line 393
c_rt_lib0clear(&___nl__im__48);
#line 393
c_rt_lib0clear(&___nl__im__55);
#line 393
//clear ___nl__int__56;
#line 393
c_rt_lib0clear(&___nl__im__57);
#line 393
//clear ___nl__bool__58;
#line 393
c_rt_lib0clear(&___nl__im__59);
#line 393
c_rt_lib0clear(&___nl__im__60);
#line 393
c_rt_lib0clear(&___nl__im__61);
#line 393
c_rt_lib0clear(&___nl__im__70);
#line 393
//clear ___nl__bool__71;
#line 393
c_rt_lib0clear(&___nl__im__72);
#line 393
c_rt_lib0clear(&___nl__im__73);
#line 393
c_rt_lib0clear(&___nl__im__82);
#line 393
//clear ___nl__bool__83;
#line 393
c_rt_lib0clear(&___nl__im__84);
#line 393
c_rt_lib0clear(&___nl__im__85);
#line 393
c_rt_lib0clear(&___nl__im__92);
#line 393
c_rt_lib0clear(&___nl__im__93);
#line 393
//clear ___nl__bool__94;
#line 393
c_rt_lib0clear(&___nl__im__95);
#line 393
c_rt_lib0clear(&___nl__im__96);
#line 393
c_rt_lib0clear(&___nl__im__97);
#line 393
//clear ___nl__bool__99;
#line 393
c_rt_lib0clear(&___nl__im__100);
#line 393
c_rt_lib0clear(&___nl__im__101);
#line 393
c_rt_lib0clear(&___nl__im__102);
#line 393
c_rt_lib0clear(&___nl__im__103);
#line 393
c_rt_lib0clear(&___nl__im__104);
#line 393
c_rt_lib0clear(&___nl__im__120);
#line 393
//clear ___nl__bool__121;
#line 393
c_rt_lib0clear(&___nl__im__122);
#line 393
c_rt_lib0clear(&___nl__im__123);
#line 393
c_rt_lib0clear(&___nl__im__124);
#line 393
c_rt_lib0clear(&___nl__im__125);
#line 393
c_rt_lib0clear(&___nl__im__126);
#line 393
//clear ___nl__bool__127;
#line 393
c_rt_lib0clear(&___nl__im__128);
#line 393
c_rt_lib0clear(&___nl__im__129);
#line 393
c_rt_lib0clear(&___nl__im__131);
#line 393
c_rt_lib0clear(&___nl__im__132);
#line 393
c_rt_lib0clear(&___nl__im__135);
#line 393
//clear ___nl__bool__136;
#line 393
c_rt_lib0clear(&___nl__im__137);
#line 393
c_rt_lib0clear(&___nl__im__138);
#line 393
c_rt_lib0clear(&___nl__im__191);
#line 393
//clear ___nl__bool__192;
#line 393
c_rt_lib0clear(&___nl__im__193);
#line 393
c_rt_lib0clear(&___nl__im__194);
#line 393
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
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
bool  ___nl__bool__94 = false;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
bool  ___nl__bool__102 = false;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
INT  ___nl__int__108 = 0;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
INT  ___nl__int__111 = 0;
#line 544
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 546
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 547
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 548
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 549
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 550
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(83)));
#line 550
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(58), ___nl__im__3, ___get_global_string_const(59), ___nl__im__4, ___get_global_string_const(60), ___nl__im__5, ___get_global_string_const(61), ___nl__im__6, ___get_global_string_const(62), ___nl__im__7));
#line 550
c_rt_lib0clear(&___nl__im__3);
#line 550
c_rt_lib0clear(&___nl__im__4);
#line 550
c_rt_lib0clear(&___nl__im__5);
#line 550
c_rt_lib0clear(&___nl__im__6);
#line 550
c_rt_lib0clear(&___nl__im__7);
#line 553
c_rt_lib0move(&___nl__im__8,___get_global_string_const(157));
#line 553
c_rt_lib0delete(profile0begin(___nl__im__8));
#line 553
c_rt_lib0clear(&___nl__im__8);
#line 554
___nl__int__9 = 0;
#line 555
c_rt_lib0move(&___nl__im__10, compiler_priv0get_files_to_parse(___nl__im__0));
#line 556
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__10));
#line 556
label_18:
;
#line 556
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 556
if(___nl__bool__12){ goto label_55;}
#line 556
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 556
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__10, ___nl__im__11));
#line 557
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(78)));
#line 557
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 557
c_rt_lib0clear(&___nl__im__16);
#line 557
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 557
if(___nl__bool__17){ goto label_33;}
#line 559
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(82));
#line 559
if(___nl__bool__17){ goto label_38;}
#line 559
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 559
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 559
nl_die_arg(___nl__im__18);
#line 557
label_33:
;
#line 557
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 557
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 558
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__11, ___nl__im__19));
#line 559
goto label_45;
#line 559
label_38:
;
#line 559
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(82)));
#line 559
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 560
___nl__int__23 = 1;
#line 560
___nl__int__9 = ___nl__int__9 + ___nl__int__23;
#line 560
//clear ___nl__int__23;
#line 561
goto label_45;
#line 561
label_45:
;
#line 561
c_rt_lib0clear(&___nl__im__15);
#line 561
//clear ___nl__bool__17;
#line 561
c_rt_lib0clear(&___nl__im__18);
#line 561
c_rt_lib0clear(&___nl__im__19);
#line 561
c_rt_lib0clear(&___nl__im__20);
#line 561
c_rt_lib0clear(&___nl__im__21);
#line 561
c_rt_lib0clear(&___nl__im__22);
#line 562
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 562
goto label_18;
#line 562
label_55:
;
#line 563
c_rt_lib0move(&___nl__im__24,___get_global_string_const(157));
#line 563
c_rt_lib0delete(profile0end(___nl__im__24));
#line 563
c_rt_lib0clear(&___nl__im__24);
#line 564
___nl__int__26 = 0;
#line 564
___nl__bool__25 = ___nl__int__9 != ___nl__int__26;
#line 564
//clear ___nl__int__26;
#line 564
___nl__bool__25 = !___nl__bool__25;
#line 564
if(___nl__bool__25){ goto label_85;}
#line 565
compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 566
___nl__int__27 = 1;
#line 566
c_rt_lib0clear(&___nl__im__0);
#line 566
c_rt_lib0clear(&___nl__im__1);
#line 566
c_rt_lib0clear(&___nl__im__2);
#line 566
//clear ___nl__int__9;
#line 566
c_rt_lib0clear(&___nl__im__10);
#line 566
c_rt_lib0clear(&___nl__im__11);
#line 566
//clear ___nl__bool__12;
#line 566
c_rt_lib0clear(&___nl__im__13);
#line 566
c_rt_lib0clear(&___nl__im__14);
#line 566
c_rt_lib0clear(&___nl__im__15);
#line 566
//clear ___nl__bool__17;
#line 566
c_rt_lib0clear(&___nl__im__18);
#line 566
c_rt_lib0clear(&___nl__im__19);
#line 566
c_rt_lib0clear(&___nl__im__20);
#line 566
c_rt_lib0clear(&___nl__im__21);
#line 566
c_rt_lib0clear(&___nl__im__22);
#line 566
//clear ___nl__bool__25;
#line 566
return ___nl__int__27;
#line 567
goto label_85;
#line 567
label_85:
;
#line 567
//clear ___nl__bool__25;
#line 567
//clear ___nl__int__27;
#line 569
c_rt_lib0move(&___nl__im__28,___get_global_string_const(158));
#line 569
c_rt_lib0delete(profile0begin(___nl__im__28));
#line 569
c_rt_lib0clear(&___nl__im__28);
#line 570
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(99)));
#line 570
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(105)));
#line 570
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 570
c_rt_lib0clear(&___nl__im__31);
#line 570
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__29, ___nl__bool__30));
#line 570
c_rt_lib0clear(&___nl__im__29);
#line 570
//clear ___nl__bool__30;
#line 571
c_rt_lib0move(&___nl__im__32,___get_global_string_const(159));
#line 571
c_rt_lib0delete(profile0end(___nl__im__32));
#line 571
c_rt_lib0clear(&___nl__im__32);
#line 572
c_rt_lib0move(&___nl__im__34,___get_global_string_const(160));
#line 572
___nl__bool__33 = hash0has_key(___nl__im__1, ___nl__im__34);
#line 572
c_rt_lib0clear(&___nl__im__34);
#line 572
___nl__bool__33 = !___nl__bool__33;
#line 572
if(___nl__bool__33){ goto label_114;}
#line 573
c_rt_lib0move(&___nl__im__35,___get_global_string_const(161));
#line 573
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(160)));
#line 573
c_rt_lib0move(&___nl__im__36, dfile_dbg0ssave(___nl__im__37));
#line 573
c_rt_lib0clear(&___nl__im__37);
#line 573
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__35, ___nl__im__36));
#line 573
c_rt_lib0clear(&___nl__im__35);
#line 573
c_rt_lib0clear(&___nl__im__36);
#line 574
goto label_114;
#line 574
label_114:
;
#line 574
//clear ___nl__bool__33;
#line 575
___nl__int__39 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 575
___nl__int__40 = 0;
#line 575
___nl__bool__38 = ___nl__int__39 > ___nl__int__40;
#line 575
//clear ___nl__int__39;
#line 575
//clear ___nl__int__40;
#line 575
___nl__bool__38 = !___nl__bool__38;
#line 575
if(___nl__bool__38){ goto label_143;}
#line 576
___nl__int__41 = 1;
#line 576
c_rt_lib0clear(&___nl__im__0);
#line 576
c_rt_lib0clear(&___nl__im__1);
#line 576
c_rt_lib0clear(&___nl__im__2);
#line 576
//clear ___nl__int__9;
#line 576
c_rt_lib0clear(&___nl__im__10);
#line 576
c_rt_lib0clear(&___nl__im__11);
#line 576
//clear ___nl__bool__12;
#line 576
c_rt_lib0clear(&___nl__im__13);
#line 576
c_rt_lib0clear(&___nl__im__14);
#line 576
c_rt_lib0clear(&___nl__im__15);
#line 576
//clear ___nl__bool__17;
#line 576
c_rt_lib0clear(&___nl__im__18);
#line 576
c_rt_lib0clear(&___nl__im__19);
#line 576
c_rt_lib0clear(&___nl__im__20);
#line 576
c_rt_lib0clear(&___nl__im__21);
#line 576
c_rt_lib0clear(&___nl__im__22);
#line 576
//clear ___nl__bool__38;
#line 576
return ___nl__int__41;
#line 577
goto label_143;
#line 577
label_143:
;
#line 577
//clear ___nl__bool__38;
#line 577
//clear ___nl__int__41;
#line 578
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 578
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(68));
#line 578
c_rt_lib0clear(&___nl__im__43);
#line 578
if(___nl__bool__42){ goto label_153;}
#line 578
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 578
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(67));
#line 578
c_rt_lib0clear(&___nl__im__44);
#line 578
label_153:
;
#line 578
___nl__bool__42 = !___nl__bool__42;
#line 578
___nl__bool__42 = !___nl__bool__42;
#line 578
if(___nl__bool__42){ goto label_284;}
#line 579
c_rt_lib0move(&___nl__im__45,___get_global_string_const(162));
#line 579
c_rt_lib0delete(profile0begin(___nl__im__45));
#line 579
c_rt_lib0clear(&___nl__im__45);
#line 580
;
#line 580
___nl__im_ptr__47 = &(___nl__rec__46.global_int_const0field);
#line 581
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 581
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(0));
#line 581
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 581
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(0));
#line 581
c_rt_lib0move(___nl__im_ptr__47, c_rt_lib0hash_mk(4, ___get_global_string_const(142), ___nl__im__48, ___get_global_string_const(143), ___nl__im__49, ___get_global_string_const(144), ___nl__im__50, ___get_global_string_const(145), ___nl__im__51));
#line 581
c_rt_lib0clear(&___nl__im__48);
#line 581
c_rt_lib0clear(&___nl__im__49);
#line 581
c_rt_lib0clear(&___nl__im__50);
#line 581
c_rt_lib0clear(&___nl__im__51);
#line 581
___nl__im_ptr__47 = NULL;
#line 581
___nl__im_ptr__52 = &(___nl__rec__46.global_string_const0field);
#line 582
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 582
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 582
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(0));
#line 582
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 582
c_rt_lib0move(___nl__im_ptr__52, c_rt_lib0hash_mk(4, ___get_global_string_const(142), ___nl__im__53, ___get_global_string_const(143), ___nl__im__54, ___get_global_string_const(144), ___nl__im__55, ___get_global_string_const(145), ___nl__im__56));
#line 582
c_rt_lib0clear(&___nl__im__53);
#line 582
c_rt_lib0clear(&___nl__im__54);
#line 582
c_rt_lib0clear(&___nl__im__55);
#line 582
c_rt_lib0clear(&___nl__im__56);
#line 582
___nl__im_ptr__52 = NULL;
#line 582
___nl__im_ptr__57 = &(___nl__rec__46.ret0field);
#line 583
c_rt_lib0move(___nl__im_ptr__57,___get_global_string_const(36));
#line 583
___nl__im_ptr__57 = NULL;
#line 583
___nl__im_ptr__58 = &(___nl__rec__46.header0field);
#line 584
c_rt_lib0move(___nl__im_ptr__58,___get_global_string_const(36));
#line 584
___nl__im_ptr__58 = NULL;
#line 584
___nl__im_ptr__59 = &(___nl__rec__46.fun_args0field);
#line 585
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0array_mk(0));
#line 585
___nl__im_ptr__59 = NULL;
#line 585
___nl__im_ptr__60 = &(___nl__rec__46.ret_reg_type0field);
#line 586
c_rt_lib0move(___nl__im_ptr__60, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 586
___nl__im_ptr__60 = NULL;
#line 586
___nl__rec_ptr__61 = &(___nl__rec__46.const0field);
#line 587
;
#line 587
___nl__int_ptr__62 = &(___nl__rec_ptr__61->dynamic_nr0field);
#line 588
(*___nl__int_ptr__62) = 0;
#line 588
___nl__int_ptr__62 = NULL;
#line 588
___nl__rec_ptr__63 = &(___nl__rec_ptr__61->int0field);
#line 589
;
#line 589
___nl__arr_ptr__64 = &(___nl__rec_ptr__63->arr0field);
#line 589
compiler0anon_type00ownarranon_type00im0clear((*___nl__arr_ptr__64));
(*___nl__arr_ptr__64).size = 0;
(*___nl__arr_ptr__64).capacity = 0;
(*___nl__arr_ptr__64).value = NULL;
#line 589
___nl__arr_ptr__64 = NULL;
#line 589
___nl__im_ptr__65 = &(___nl__rec_ptr__63->hash0field);
#line 589
c_rt_lib0move(___nl__im_ptr__65, c_rt_lib0hash_mk(0));
#line 589
___nl__im_ptr__65 = NULL;
#line 589
___nl__rec_ptr__63 = NULL;
#line 589
___nl__rec_ptr__66 = &(___nl__rec_ptr__61->string0field);
#line 590
;
#line 590
___nl__arr_ptr__67 = &(___nl__rec_ptr__66->arr0field);
#line 590
compiler0anon_type00ownarranon_type00im0clear((*___nl__arr_ptr__67));
(*___nl__arr_ptr__67).size = 0;
(*___nl__arr_ptr__67).capacity = 0;
(*___nl__arr_ptr__67).value = NULL;
#line 590
___nl__arr_ptr__67 = NULL;
#line 590
___nl__im_ptr__68 = &(___nl__rec_ptr__66->hash0field);
#line 590
c_rt_lib0move(___nl__im_ptr__68, c_rt_lib0hash_mk(0));
#line 590
___nl__im_ptr__68 = NULL;
#line 590
___nl__rec_ptr__66 = NULL;
#line 590
___nl__rec_ptr__69 = &(___nl__rec_ptr__61->singleton0field);
#line 591
;
#line 591
___nl__arr_ptr__70 = &(___nl__rec_ptr__69->arr0field);
#line 591
compiler0anon_type00ownarranon_type00im0clear((*___nl__arr_ptr__70));
(*___nl__arr_ptr__70).size = 0;
(*___nl__arr_ptr__70).capacity = 0;
(*___nl__arr_ptr__70).value = NULL;
#line 591
___nl__arr_ptr__70 = NULL;
#line 591
___nl__im_ptr__71 = &(___nl__rec_ptr__69->hash0field);
#line 591
c_rt_lib0move(___nl__im_ptr__71, c_rt_lib0hash_mk(0));
#line 591
___nl__im_ptr__71 = NULL;
#line 591
___nl__rec_ptr__69 = NULL;
#line 591
___nl__rec_ptr__61 = NULL;
#line 591
___nl__im_ptr__72 = &(___nl__rec__46.mod_name0field);
#line 593
c_rt_lib0move(___nl__im_ptr__72,___get_global_string_const(36));
#line 593
___nl__im_ptr__72 = NULL;
#line 593
___nl__hash_ptr__73 = &(___nl__rec__46.additional_imports0field);
#line 594
compiler0anon_type00ownhashanon_type00bool0clear((*___nl__hash_ptr__73));
(*___nl__hash_ptr__73).size = 0;
(*___nl__hash_ptr__73).capacity = 0;
(*___nl__hash_ptr__73).keys = NULL;
(*___nl__hash_ptr__73).values = NULL;
#line 594
___nl__hash_ptr__73 = NULL;
#line 594
___nl__im_ptr__74 = &(___nl__rec__46.defined_types0field);
#line 595
c_rt_lib0move(___nl__im_ptr__74, c_rt_lib0hash_mk(0));
#line 595
___nl__im_ptr__74 = NULL;
#line 597
c_rt_lib0move(&___nl__im__75,___get_global_string_const(151));
#line 597
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 597
c_rt_lib0clear(&___nl__im__75);
#line 598
c_rt_lib0move(&___nl__im__77, compiler_priv0get_mathematical_func(___nl__im__0));
#line 598
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(100)));
#line 598
c_rt_lib0move(&___nl__im__76, post_processing0init(___nl__im__77, ___nl__im__78));
#line 598
c_rt_lib0clear(&___nl__im__77);
#line 598
c_rt_lib0clear(&___nl__im__78);
#line 599
c_rt_lib0move(&___nl__im__79,___get_global_string_const(162));
#line 599
c_rt_lib0delete(profile0end(___nl__im__79));
#line 599
c_rt_lib0clear(&___nl__im__79);
#line 601
c_rt_lib0move(&___nl__im__80,___get_global_string_const(163));
#line 601
c_rt_lib0delete(profile0begin(___nl__im__80));
#line 601
c_rt_lib0clear(&___nl__im__80);
#line 602
c_rt_lib0move(&___nl__im__82, compiler_priv0get_defined_types(___nl__im__1));
#line 602
c_rt_lib0move(&___nl__im__81, compiler_priv0translate(___nl__im__1, &___nl__im__76, ___nl__im__82));
#line 602
c_rt_lib0clear(&___nl__im__82);
#line 603
c_rt_lib0move(&___nl__im__83,___get_global_string_const(163));
#line 603
c_rt_lib0delete(profile0end(___nl__im__83));
#line 603
c_rt_lib0clear(&___nl__im__83);
#line 605
c_rt_lib0move(&___nl__im__85,___get_global_string_const(160));
#line 605
___nl__bool__84 = hash0has_key(___nl__im__81, ___nl__im__85);
#line 605
c_rt_lib0clear(&___nl__im__85);
#line 605
___nl__bool__84 = !___nl__bool__84;
#line 605
if(___nl__bool__84){ goto label_270;}
#line 606
c_rt_lib0move(&___nl__im__86,___get_global_string_const(164));
#line 606
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(160)));
#line 606
c_rt_lib0move(&___nl__im__87, dfile_dbg0ssave(___nl__im__88));
#line 606
c_rt_lib0clear(&___nl__im__88);
#line 606
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__86, ___nl__im__87));
#line 606
c_rt_lib0clear(&___nl__im__86);
#line 606
c_rt_lib0clear(&___nl__im__87);
#line 607
goto label_270;
#line 607
label_270:
;
#line 607
//clear ___nl__bool__84;
#line 609
c_rt_lib0move(&___nl__im__89,___get_global_string_const(165));
#line 609
c_rt_lib0delete(profile0begin(___nl__im__89));
#line 609
c_rt_lib0clear(&___nl__im__89);
#line 610
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(98)));
#line 610
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(103)));
#line 610
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__81, ___nl__im__10, ___nl__im__90, &___nl__rec__46, ___nl__im__91));
#line 610
c_rt_lib0clear(&___nl__im__90);
#line 610
c_rt_lib0clear(&___nl__im__91);
#line 611
c_rt_lib0move(&___nl__im__92,___get_global_string_const(165));
#line 611
c_rt_lib0delete(profile0end(___nl__im__92));
#line 611
c_rt_lib0clear(&___nl__im__92);
#line 612
goto label_365;
#line 612
label_284:
;
#line 613
c_rt_lib0move(&___nl__im__96, c_rt_lib0init_iter(___nl__im__1));
#line 613
label_286:
;
#line 613
___nl__bool__94 = c_rt_lib0is_end_hash(___nl__im__96);
#line 613
if(___nl__bool__94){ goto label_363;}
#line 613
c_rt_lib0move(&___nl__im__93, c_rt_lib0get_key_iter(___nl__im__96));
#line 613
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__93));
#line 614
c_rt_lib0move(&___nl__im__98,___get_global_string_const(152));
#line 614
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__93));
#line 614
c_rt_lib0clear(&___nl__im__98);
#line 614
c_rt_lib0delete(c_fe_lib0print(___nl__im__97));
#line 614
c_rt_lib0clear(&___nl__im__97);
#line 615
c_rt_lib0move(&___nl__im__101, hash0get_value(___nl__im__10, ___nl__im__93));
#line 615
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__101, ___get_global_string_const(79)));
#line 615
c_rt_lib0clear(&___nl__im__101);
#line 615
c_rt_lib0move(&___nl__im__99, compiler_priv0save_module_to_file(___nl__im__95, ___nl__im__100));
#line 615
c_rt_lib0clear(&___nl__im__100);
#line 615
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__99, ___get_global_string_const(82));
#line 615
if(___nl__bool__102){ goto label_308;}
#line 618
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__99, ___get_global_string_const(83));
#line 618
if(___nl__bool__102){ goto label_348;}
#line 618
c_rt_lib0move(&___nl__im__103,___get_global_string_const(15));
#line 618
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(2, ___nl__im__103, ___nl__im__99));
#line 618
nl_die_arg(___nl__im__103);
#line 615
label_308:
;
#line 615
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(82)));
#line 615
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 616
c_rt_lib0move(&___nl__im__107,___get_global_string_const(153));
#line 616
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__104));
#line 616
c_rt_lib0clear(&___nl__im__107);
#line 616
c_rt_lib0delete(c_fe_lib0print(___nl__im__106));
#line 616
c_rt_lib0clear(&___nl__im__106);
#line 617
___nl__int__108 = 1;
#line 617
c_rt_lib0clear(&___nl__im__0);
#line 617
c_rt_lib0clear(&___nl__im__1);
#line 617
c_rt_lib0clear(&___nl__im__2);
#line 617
//clear ___nl__int__9;
#line 617
c_rt_lib0clear(&___nl__im__10);
#line 617
c_rt_lib0clear(&___nl__im__11);
#line 617
//clear ___nl__bool__12;
#line 617
c_rt_lib0clear(&___nl__im__13);
#line 617
c_rt_lib0clear(&___nl__im__14);
#line 617
c_rt_lib0clear(&___nl__im__15);
#line 617
//clear ___nl__bool__17;
#line 617
c_rt_lib0clear(&___nl__im__18);
#line 617
c_rt_lib0clear(&___nl__im__19);
#line 617
c_rt_lib0clear(&___nl__im__20);
#line 617
c_rt_lib0clear(&___nl__im__21);
#line 617
c_rt_lib0clear(&___nl__im__22);
#line 617
//clear ___nl__bool__42;
#line 617
generator_c0state_t0type0clear(___nl__rec__46);;
#line 617
c_rt_lib0clear(&___nl__im__76);
#line 617
c_rt_lib0clear(&___nl__im__81);
#line 617
c_rt_lib0clear(&___nl__im__93);
#line 617
//clear ___nl__bool__94;
#line 617
c_rt_lib0clear(&___nl__im__95);
#line 617
c_rt_lib0clear(&___nl__im__96);
#line 617
c_rt_lib0clear(&___nl__im__99);
#line 617
//clear ___nl__bool__102;
#line 617
c_rt_lib0clear(&___nl__im__103);
#line 617
c_rt_lib0clear(&___nl__im__104);
#line 617
c_rt_lib0clear(&___nl__im__105);
#line 617
return ___nl__int__108;
#line 618
goto label_352;
#line 618
label_348:
;
#line 618
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(83)));
#line 618
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 619
goto label_352;
#line 619
label_352:
;
#line 619
c_rt_lib0clear(&___nl__im__99);
#line 619
//clear ___nl__bool__102;
#line 619
c_rt_lib0clear(&___nl__im__103);
#line 619
c_rt_lib0clear(&___nl__im__104);
#line 619
c_rt_lib0clear(&___nl__im__105);
#line 619
//clear ___nl__int__108;
#line 619
c_rt_lib0clear(&___nl__im__109);
#line 619
c_rt_lib0clear(&___nl__im__110);
#line 620
c_rt_lib0move(&___nl__im__96, c_rt_lib0next_iter(___nl__im__96));
#line 620
goto label_286;
#line 620
label_363:
;
#line 621
goto label_365;
#line 621
label_365:
;
#line 621
//clear ___nl__bool__42;
#line 621
generator_c0state_t0type0clear(___nl__rec__46);;
#line 621
c_rt_lib0clear(&___nl__im__76);
#line 621
c_rt_lib0clear(&___nl__im__81);
#line 621
c_rt_lib0clear(&___nl__im__93);
#line 621
//clear ___nl__bool__94;
#line 621
c_rt_lib0clear(&___nl__im__95);
#line 621
c_rt_lib0clear(&___nl__im__96);
#line 621
c_rt_lib0clear(&___nl__im__99);
#line 621
//clear ___nl__bool__102;
#line 621
c_rt_lib0clear(&___nl__im__103);
#line 621
c_rt_lib0clear(&___nl__im__104);
#line 621
c_rt_lib0clear(&___nl__im__105);
#line 621
//clear ___nl__int__108;
#line 621
c_rt_lib0clear(&___nl__im__109);
#line 621
c_rt_lib0clear(&___nl__im__110);
#line 622
___nl__int__111 = 0;
#line 622
c_rt_lib0clear(&___nl__im__0);
#line 622
c_rt_lib0clear(&___nl__im__1);
#line 622
c_rt_lib0clear(&___nl__im__2);
#line 622
//clear ___nl__int__9;
#line 622
c_rt_lib0clear(&___nl__im__10);
#line 622
c_rt_lib0clear(&___nl__im__11);
#line 622
//clear ___nl__bool__12;
#line 622
c_rt_lib0clear(&___nl__im__13);
#line 622
c_rt_lib0clear(&___nl__im__14);
#line 622
c_rt_lib0clear(&___nl__im__15);
#line 622
//clear ___nl__bool__17;
#line 622
c_rt_lib0clear(&___nl__im__18);
#line 622
c_rt_lib0clear(&___nl__im__19);
#line 622
c_rt_lib0clear(&___nl__im__20);
#line 622
c_rt_lib0clear(&___nl__im__21);
#line 622
c_rt_lib0clear(&___nl__im__22);
#line 622
return ___nl__int__111;
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
#line 626
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 630
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 630
___nl__int__4 = string0length(___nl__im__5);
#line 630
c_rt_lib0clear(&___nl__im__5);
#line 630
___nl__int__6 = 0;
#line 630
___nl__bool__3 = ___nl__int__4 == ___nl__int__6;
#line 630
//clear ___nl__int__4;
#line 630
//clear ___nl__int__6;
#line 630
___nl__bool__3 = !___nl__bool__3;
#line 630
___nl__bool__3 = !___nl__bool__3;
#line 630
if(___nl__bool__3){ goto label_32;}
#line 627
c_rt_lib0move(&___nl__im__8,___get_global_string_const(167));
#line 627
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 627
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 627
c_rt_lib0clear(&___nl__im__11);
#line 627
if(___nl__bool__10){ goto label_18;}
#line 629
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 629
goto label_24;
#line 629
label_18:
;
#line 628
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 628
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__1, ___nl__im__13));
#line 628
c_rt_lib0clear(&___nl__im__13);
#line 628
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(78)));
#line 628
c_rt_lib0clear(&___nl__im__12);
#line 628
label_24:
;
#line 628
//clear ___nl__bool__10;
#line 628
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 628
c_rt_lib0clear(&___nl__im__8);
#line 628
c_rt_lib0clear(&___nl__im__9);
#line 628
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__7));
#line 628
c_rt_lib0clear(&___nl__im__7);
#line 628
goto label_32;
#line 628
label_32:
;
#line 628
//clear ___nl__bool__3;
#line 631
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 631
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 631
c_rt_lib0clear(&___nl__im__16);
#line 631
___nl__int__17 = 1;
#line 631
___nl__int__17 = -___nl__int__17;
#line 631
___nl__bool__14 = ___nl__int__15 == ___nl__int__17;
#line 631
//clear ___nl__int__15;
#line 631
//clear ___nl__int__17;
#line 631
___nl__bool__14 = !___nl__bool__14;
#line 631
___nl__bool__14 = !___nl__bool__14;
#line 631
if(___nl__bool__14){ goto label_57;}
#line 631
c_rt_lib0move(&___nl__im__19,___get_global_string_const(169));
#line 631
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 631
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 631
c_rt_lib0clear(&___nl__im__21);
#line 631
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 631
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 631
c_rt_lib0clear(&___nl__im__19);
#line 631
//clear ___nl__int__20;
#line 631
c_rt_lib0clear(&___nl__string__22);
#line 631
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 631
c_rt_lib0clear(&___nl__im__18);
#line 631
goto label_57;
#line 631
label_57:
;
#line 631
//clear ___nl__bool__14;
#line 632
c_rt_lib0move(&___nl__im__25, string0lf());
#line 632
c_rt_lib0move(&___nl__im__26,___get_global_string_const(170));
#line 632
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 632
c_rt_lib0clear(&___nl__im__25);
#line 632
c_rt_lib0clear(&___nl__im__26);
#line 632
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(171)));
#line 632
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 632
c_rt_lib0clear(&___nl__im__24);
#line 632
c_rt_lib0clear(&___nl__im__27);
#line 632
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 632
c_rt_lib0clear(&___nl__im__23);
#line 633
c_rt_lib0clear(&___nl__im__0);
#line 633
c_rt_lib0clear(&___nl__im__1);
#line 633
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
#line 637
___nl__int__3 = 0;
#line 638
___nl__int__4 = 0;
#line 639
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 639
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 639
label_4:
;
#line 639
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 639
if(___nl__bool__7){ goto label_159;}
#line 639
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 639
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 640
c_rt_lib0move(&___nl__im__10,___get_global_string_const(172));
#line 641
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 641
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(96));
#line 641
c_rt_lib0clear(&___nl__im__12);
#line 641
___nl__bool__11 = !___nl__bool__11;
#line 641
if(___nl__bool__11){ goto label_17;}
#line 641
c_rt_lib0move(&___nl__im__10,___get_global_string_const(173));
#line 641
goto label_17;
#line 641
label_17:
;
#line 641
//clear ___nl__bool__11;
#line 642
___nl__int__14 = 0;
#line 642
___nl__int__15 = 1;
#line 642
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 642
label_22:
;
#line 642
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 642
if(___nl__bool__17){ goto label_35;}
#line 642
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 642
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 643
c_rt_lib0move(&___nl__im__20, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 643
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__10, ___nl__im__20));
#line 643
c_rt_lib0clear(&___nl__im__20);
#line 643
c_rt_lib0delete(c_fe_lib0print(___nl__im__19));
#line 643
c_rt_lib0clear(&___nl__im__19);
#line 643
c_rt_lib0clear(&___nl__im__13);
#line 644
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 644
goto label_22;
#line 644
label_35:
;
#line 645
___nl__int__21 = c_rt_lib0array_len(___nl__im__8);
#line 645
___nl__int__3 = ___nl__int__3 + ___nl__int__21;
#line 645
//clear ___nl__int__21;
#line 646
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 646
___nl__bool__22 = hash0has_key(___nl__im__23, ___nl__im__6);
#line 646
c_rt_lib0clear(&___nl__im__23);
#line 646
___nl__bool__22 = !___nl__bool__22;
#line 646
if(___nl__bool__22){ goto label_68;}
#line 647
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(61)));
#line 647
c_rt_lib0move(&___nl__im__24, hash0get_value(___nl__im__25, ___nl__im__6));
#line 647
c_rt_lib0clear(&___nl__im__25);
#line 648
___nl__int__27 = 0;
#line 648
___nl__int__28 = 1;
#line 648
___nl__int__29 = c_rt_lib0array_len(___nl__im__24);
#line 648
label_50:
;
#line 648
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 648
if(___nl__bool__30){ goto label_63;}
#line 648
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__24, ___nl__int__27));
#line 648
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 649
c_rt_lib0move(&___nl__im__33, compiler_priv0construct_error_message(___nl__im__26, ___nl__im__2));
#line 649
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__10, ___nl__im__33));
#line 649
c_rt_lib0clear(&___nl__im__33);
#line 649
c_rt_lib0delete(c_fe_lib0print(___nl__im__32));
#line 649
c_rt_lib0clear(&___nl__im__32);
#line 649
c_rt_lib0clear(&___nl__im__26);
#line 650
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 650
goto label_50;
#line 650
label_63:
;
#line 651
___nl__int__34 = c_rt_lib0array_len(___nl__im__24);
#line 651
___nl__int__3 = ___nl__int__3 + ___nl__int__34;
#line 651
//clear ___nl__int__34;
#line 652
goto label_68;
#line 652
label_68:
;
#line 652
//clear ___nl__bool__22;
#line 652
c_rt_lib0clear(&___nl__im__24);
#line 652
c_rt_lib0clear(&___nl__im__26);
#line 652
//clear ___nl__int__27;
#line 652
//clear ___nl__int__28;
#line 652
//clear ___nl__int__29;
#line 652
//clear ___nl__bool__30;
#line 652
c_rt_lib0clear(&___nl__im__31);
#line 653
c_rt_lib0move(&___nl__im__10,___get_global_string_const(173));
#line 654
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(58)));
#line 654
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__36, ___nl__im__6));
#line 654
c_rt_lib0clear(&___nl__im__36);
#line 655
___nl__int__38 = 0;
#line 655
___nl__int__39 = 1;
#line 655
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 655
label_84:
;
#line 655
___nl__bool__41 = ___nl__int__38 >= ___nl__int__40;
#line 655
if(___nl__bool__41){ goto label_99;}
#line 655
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 655
c_rt_lib0copy(&___nl__im__37, ___nl__im__42);
#line 656
c_rt_lib0move(&___nl__im__44,___get_global_string_const(173));
#line 656
c_rt_lib0move(&___nl__im__45, compiler_priv0construct_error_message(___nl__im__37, ___nl__im__2));
#line 656
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__45));
#line 656
c_rt_lib0clear(&___nl__im__44);
#line 656
c_rt_lib0clear(&___nl__im__45);
#line 656
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 656
c_rt_lib0clear(&___nl__im__43);
#line 656
c_rt_lib0clear(&___nl__im__37);
#line 657
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 657
goto label_84;
#line 657
label_99:
;
#line 658
___nl__int__46 = c_rt_lib0array_len(___nl__im__35);
#line 658
___nl__int__4 = ___nl__int__4 + ___nl__int__46;
#line 658
//clear ___nl__int__46;
#line 659
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 659
___nl__bool__47 = hash0has_key(___nl__im__48, ___nl__im__6);
#line 659
c_rt_lib0clear(&___nl__im__48);
#line 659
___nl__bool__47 = !___nl__bool__47;
#line 659
if(___nl__bool__47){ goto label_134;}
#line 660
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(60)));
#line 660
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__50, ___nl__im__6));
#line 660
c_rt_lib0clear(&___nl__im__50);
#line 661
___nl__int__52 = 0;
#line 661
___nl__int__53 = 1;
#line 661
___nl__int__54 = c_rt_lib0array_len(___nl__im__49);
#line 661
label_114:
;
#line 661
___nl__bool__55 = ___nl__int__52 >= ___nl__int__54;
#line 661
if(___nl__bool__55){ goto label_129;}
#line 661
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__49, ___nl__int__52));
#line 661
c_rt_lib0copy(&___nl__im__51, ___nl__im__56);
#line 662
c_rt_lib0move(&___nl__im__58,___get_global_string_const(173));
#line 662
c_rt_lib0move(&___nl__im__59, compiler_priv0construct_error_message(___nl__im__51, ___nl__im__2));
#line 662
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__59));
#line 662
c_rt_lib0clear(&___nl__im__58);
#line 662
c_rt_lib0clear(&___nl__im__59);
#line 662
c_rt_lib0delete(c_fe_lib0print(___nl__im__57));
#line 662
c_rt_lib0clear(&___nl__im__57);
#line 662
c_rt_lib0clear(&___nl__im__51);
#line 663
___nl__int__52 = ___nl__int__52 + ___nl__int__53;
#line 663
goto label_114;
#line 663
label_129:
;
#line 664
___nl__int__60 = c_rt_lib0array_len(___nl__im__49);
#line 664
___nl__int__4 = ___nl__int__4 + ___nl__int__60;
#line 664
//clear ___nl__int__60;
#line 665
goto label_134;
#line 665
label_134:
;
#line 665
//clear ___nl__bool__47;
#line 665
c_rt_lib0clear(&___nl__im__49);
#line 665
c_rt_lib0clear(&___nl__im__51);
#line 665
//clear ___nl__int__52;
#line 665
//clear ___nl__int__53;
#line 665
//clear ___nl__int__54;
#line 665
//clear ___nl__bool__55;
#line 665
c_rt_lib0clear(&___nl__im__56);
#line 665
c_rt_lib0clear(&___nl__im__10);
#line 665
c_rt_lib0clear(&___nl__im__13);
#line 665
//clear ___nl__int__14;
#line 665
//clear ___nl__int__15;
#line 665
//clear ___nl__int__16;
#line 665
//clear ___nl__bool__17;
#line 665
c_rt_lib0clear(&___nl__im__18);
#line 665
c_rt_lib0clear(&___nl__im__35);
#line 665
c_rt_lib0clear(&___nl__im__37);
#line 665
//clear ___nl__int__38;
#line 665
//clear ___nl__int__39;
#line 665
//clear ___nl__int__40;
#line 665
//clear ___nl__bool__41;
#line 665
c_rt_lib0clear(&___nl__im__42);
#line 666
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 666
goto label_4;
#line 666
label_159:
;
#line 667
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(62)));
#line 667
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(174));
#line 667
if(___nl__bool__62){ goto label_168;}
#line 674
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__61, ___get_global_string_const(83));
#line 674
if(___nl__bool__62){ goto label_202;}
#line 674
c_rt_lib0move(&___nl__im__63,___get_global_string_const(15));
#line 674
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__61));
#line 674
nl_die_arg(___nl__im__63);
#line 667
label_168:
;
#line 667
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__61, ___get_global_string_const(174)));
#line 667
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 668
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 669
___nl__int__68 = 0;
#line 669
___nl__int__69 = 1;
#line 669
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 669
label_175:
;
#line 669
___nl__bool__71 = ___nl__int__68 >= ___nl__int__70;
#line 669
if(___nl__bool__71){ goto label_188;}
#line 669
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__68));
#line 669
c_rt_lib0copy(&___nl__im__67, ___nl__im__72);
#line 670
c_rt_lib0move(&___nl__im__74,___get_global_string_const(175));
#line 670
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__67, ___nl__im__74));
#line 670
c_rt_lib0clear(&___nl__im__74);
#line 670
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_add(___nl__im__66, ___nl__im__73));
#line 670
c_rt_lib0clear(&___nl__im__73);
#line 670
c_rt_lib0clear(&___nl__im__67);
#line 671
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 671
goto label_175;
#line 671
label_188:
;
#line 672
c_rt_lib0move(&___nl__im__77,___get_global_string_const(176));
#line 672
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__66));
#line 672
c_rt_lib0clear(&___nl__im__77);
#line 672
c_rt_lib0move(&___nl__im__78,___get_global_string_const(177));
#line 672
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 672
c_rt_lib0clear(&___nl__im__76);
#line 672
c_rt_lib0clear(&___nl__im__78);
#line 672
c_rt_lib0delete(c_fe_lib0print(___nl__im__75));
#line 672
c_rt_lib0clear(&___nl__im__75);
#line 673
___nl__int__79 = 1;
#line 673
___nl__int__4 = ___nl__int__4 + ___nl__int__79;
#line 673
//clear ___nl__int__79;
#line 674
goto label_204;
#line 674
label_202:
;
#line 675
goto label_204;
#line 675
label_204:
;
#line 676
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(104)));
#line 676
___nl__bool__80 = c_rt_lib0priv_is(___nl__im__81, ___get_global_string_const(96));
#line 676
c_rt_lib0clear(&___nl__im__81);
#line 676
___nl__bool__80 = !___nl__bool__80;
#line 676
if(___nl__bool__80){ goto label_213;}
#line 677
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 678
___nl__int__3 = 0;
#line 679
goto label_213;
#line 679
label_213:
;
#line 679
//clear ___nl__bool__80;
#line 680
c_rt_lib0move(&___nl__im__85,___get_global_string_const(178));
#line 680
c_rt_lib0move(&___nl__string__86, c_rt_lib0int_to_string(___nl__int__4));
#line 680
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__86));
#line 680
c_rt_lib0clear(&___nl__im__85);
#line 680
c_rt_lib0clear(&___nl__string__86);
#line 680
c_rt_lib0move(&___nl__im__87,___get_global_string_const(179));
#line 680
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 680
c_rt_lib0clear(&___nl__im__84);
#line 680
c_rt_lib0clear(&___nl__im__87);
#line 680
c_rt_lib0move(&___nl__string__88, c_rt_lib0int_to_string(___nl__int__3));
#line 680
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__string__88));
#line 680
c_rt_lib0clear(&___nl__im__83);
#line 680
c_rt_lib0clear(&___nl__string__88);
#line 680
c_rt_lib0delete(c_fe_lib0print(___nl__im__82));
#line 680
c_rt_lib0clear(&___nl__im__82);
#line 681
c_rt_lib0clear(&___nl__im__0);
#line 681
c_rt_lib0clear(&___nl__im__1);
#line 681
c_rt_lib0clear(&___nl__im__2);
#line 681
//clear ___nl__int__3;
#line 681
c_rt_lib0clear(&___nl__im__5);
#line 681
c_rt_lib0clear(&___nl__im__6);
#line 681
//clear ___nl__bool__7;
#line 681
c_rt_lib0clear(&___nl__im__8);
#line 681
c_rt_lib0clear(&___nl__im__9);
#line 681
c_rt_lib0clear(&___nl__im__10);
#line 681
c_rt_lib0clear(&___nl__im__13);
#line 681
//clear ___nl__int__14;
#line 681
//clear ___nl__int__15;
#line 681
//clear ___nl__int__16;
#line 681
//clear ___nl__bool__17;
#line 681
c_rt_lib0clear(&___nl__im__18);
#line 681
c_rt_lib0clear(&___nl__im__35);
#line 681
c_rt_lib0clear(&___nl__im__37);
#line 681
//clear ___nl__int__38;
#line 681
//clear ___nl__int__39;
#line 681
//clear ___nl__int__40;
#line 681
//clear ___nl__bool__41;
#line 681
c_rt_lib0clear(&___nl__im__42);
#line 681
c_rt_lib0clear(&___nl__im__61);
#line 681
//clear ___nl__bool__62;
#line 681
c_rt_lib0clear(&___nl__im__63);
#line 681
c_rt_lib0clear(&___nl__im__64);
#line 681
c_rt_lib0clear(&___nl__im__65);
#line 681
c_rt_lib0clear(&___nl__im__66);
#line 681
c_rt_lib0clear(&___nl__im__67);
#line 681
//clear ___nl__int__68;
#line 681
//clear ___nl__int__69;
#line 681
//clear ___nl__int__70;
#line 681
//clear ___nl__bool__71;
#line 681
c_rt_lib0clear(&___nl__im__72);
#line 681
return ___nl__int__4;
return 0;

}

ImmT  compiler_priv0translate(ImmT  ___nl__im__0,post_processing_t0state_t0type* ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
compiler_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 686
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 687
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__0));
#line 687
label_2:
;
#line 687
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 687
if(___nl__bool__5){ goto label_12;}
#line 687
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 687
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__4));
#line 688
c_rt_lib0move(&___nl__im__8, translator0translate(___nl__im__6, ___nl__im__2));
#line 689
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__4, ___nl__im__8));
#line 689
c_rt_lib0clear(&___nl__im__8);
#line 690
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 690
goto label_2;
#line 690
label_12:
;
#line 691
c_rt_lib0delete(post_processing0find(___ref___im__1, &___nl__im__3));
#line 692
c_rt_lib0clear(&___nl__im__0);
#line 692
c_rt_lib0clear(&___nl__im__2);
#line 692
c_rt_lib0clear(&___nl__im__4);
#line 692
//clear ___nl__bool__5;
#line 692
c_rt_lib0clear(&___nl__im__6);
#line 692
c_rt_lib0clear(&___nl__im__7);
#line 692
c_rt_lib0clear(&___nl__im__8);
#line 692
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
#line 697
c_rt_lib0move(&___nl__im__4,___get_global_string_const(180));
#line 697
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 697
c_rt_lib0clear(&___nl__im__4);
#line 698
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 699
___nl__bool__6 = ___nl__bool__3;
#line 699
___nl__bool__6 = !___nl__bool__6;
#line 699
if(___nl__bool__6){ goto label_52;}
#line 700
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 701
c_rt_lib0move(&___nl__im__9,___get_global_string_const(181));
#line 701
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 701
c_rt_lib0clear(&___nl__im__9);
#line 701
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 701
if(___nl__bool__10){ goto label_18;}
#line 704
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(82));
#line 704
if(___nl__bool__10){ goto label_28;}
#line 704
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 704
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 704
nl_die_arg(___nl__im__11);
#line 701
label_18:
;
#line 701
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 701
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 702
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 703
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 703
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 703
c_rt_lib0clear(&___nl__im__15);
#line 703
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 703
c_rt_lib0clear(&___nl__im__14);
#line 704
goto label_32;
#line 704
label_28:
;
#line 704
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(82)));
#line 704
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 705
goto label_32;
#line 705
label_32:
;
#line 706
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 707
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 708
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 708
label_36:
;
#line 708
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 708
if(___nl__bool__21){ goto label_49;}
#line 708
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 708
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 709
___nl__bool__24 = true;
#line 709
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 709
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 709
//clear ___nl__bool__24;
#line 709
c_rt_lib0clear(&___nl__im__25);
#line 710
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 711
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 711
goto label_36;
#line 711
label_49:
;
#line 713
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 714
goto label_52;
#line 714
label_52:
;
#line 714
//clear ___nl__bool__6;
#line 714
c_rt_lib0clear(&___nl__im__7);
#line 714
c_rt_lib0clear(&___nl__im__8);
#line 714
//clear ___nl__bool__10;
#line 714
c_rt_lib0clear(&___nl__im__11);
#line 714
c_rt_lib0clear(&___nl__im__12);
#line 714
c_rt_lib0clear(&___nl__im__13);
#line 714
c_rt_lib0clear(&___nl__im__16);
#line 714
c_rt_lib0clear(&___nl__im__17);
#line 714
c_rt_lib0clear(&___nl__im__18);
#line 714
c_rt_lib0clear(&___nl__im__19);
#line 714
c_rt_lib0clear(&___nl__im__20);
#line 714
//clear ___nl__bool__21;
#line 714
c_rt_lib0clear(&___nl__im__22);
#line 714
c_rt_lib0clear(&___nl__im__23);
#line 715
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 715
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 715
c_rt_lib0clear(&___nl__im__27);
#line 716
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(50)));
#line 716
___nl__int__30 = 0;
#line 716
___nl__int__31 = 1;
#line 716
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 716
label_75:
;
#line 716
___nl__bool__33 = ___nl__int__30 >= ___nl__int__32;
#line 716
if(___nl__bool__33){ goto label_109;}
#line 716
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 716
c_rt_lib0copy(&___nl__im__29, ___nl__im__34);
#line 717
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 718
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 718
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 718
___nl__bool__36 = hash0has_key(___nl__im__37, ___nl__im__38);
#line 718
c_rt_lib0clear(&___nl__im__37);
#line 718
c_rt_lib0clear(&___nl__im__38);
#line 718
___nl__bool__36 = !___nl__bool__36;
#line 718
if(___nl__bool__36){ goto label_94;}
#line 719
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(60)));
#line 719
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 719
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__39, ___nl__im__40));
#line 719
c_rt_lib0clear(&___nl__im__39);
#line 719
c_rt_lib0clear(&___nl__im__40);
#line 720
goto label_94;
#line 720
label_94:
;
#line 720
//clear ___nl__bool__36;
#line 721
c_rt_lib0delete(array0push(&___nl__im__35, ___nl__im__29));
#line 722
c_rt_lib0move(&___nl__im__41,___get_global_string_const(60));
#line 722
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 722
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 722
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__42, ___nl__im__35));
#line 722
c_rt_lib0move(&___nl__string__43,___get_global_string_const(60));
#line 722
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 722
c_rt_lib0clear(&___nl__im__41);
#line 722
c_rt_lib0clear(&___nl__im__42);
#line 722
c_rt_lib0clear(&___nl__string__43);
#line 722
c_rt_lib0clear(&___nl__im__29);
#line 723
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 723
goto label_75;
#line 723
label_109:
;
#line 724
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(138)));
#line 724
___nl__int__46 = 0;
#line 724
___nl__int__47 = 1;
#line 724
___nl__int__48 = c_rt_lib0array_len(___nl__im__44);
#line 724
label_114:
;
#line 724
___nl__bool__49 = ___nl__int__46 >= ___nl__int__48;
#line 724
if(___nl__bool__49){ goto label_148;}
#line 724
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__44, ___nl__int__46));
#line 724
c_rt_lib0copy(&___nl__im__45, ___nl__im__50);
#line 725
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 726
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 726
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(166)));
#line 726
___nl__bool__52 = hash0has_key(___nl__im__53, ___nl__im__54);
#line 726
c_rt_lib0clear(&___nl__im__53);
#line 726
c_rt_lib0clear(&___nl__im__54);
#line 726
___nl__bool__52 = !___nl__bool__52;
#line 726
if(___nl__bool__52){ goto label_133;}
#line 727
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(61)));
#line 727
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(166)));
#line 727
c_rt_lib0move(&___nl__im__51, hash0get_value(___nl__im__55, ___nl__im__56));
#line 727
c_rt_lib0clear(&___nl__im__55);
#line 727
c_rt_lib0clear(&___nl__im__56);
#line 728
goto label_133;
#line 728
label_133:
;
#line 728
//clear ___nl__bool__52;
#line 729
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__45));
#line 730
c_rt_lib0move(&___nl__im__57,___get_global_string_const(61));
#line 730
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 730
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(166)));
#line 730
c_rt_lib0delete(hash0set_value(&___nl__im__57, ___nl__im__58, ___nl__im__51));
#line 730
c_rt_lib0move(&___nl__string__59,___get_global_string_const(61));
#line 730
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 730
c_rt_lib0clear(&___nl__im__57);
#line 730
c_rt_lib0clear(&___nl__im__58);
#line 730
c_rt_lib0clear(&___nl__string__59);
#line 730
c_rt_lib0clear(&___nl__im__45);
#line 731
___nl__int__46 = ___nl__int__46 + ___nl__int__47;
#line 731
goto label_114;
#line 731
label_148:
;
#line 732
___nl__int__61 = 0;
#line 732
___nl__bool__60 = ___nl__int__26 == ___nl__int__61;
#line 732
//clear ___nl__int__61;
#line 732
___nl__bool__60 = !___nl__bool__60;
#line 732
___nl__bool__60 = !___nl__bool__60;
#line 732
if(___nl__bool__60){ goto label_167;}
#line 732
c_rt_lib0move(&___nl__im__64,___get_global_string_const(182));
#line 732
c_rt_lib0move(&___nl__string__65, c_rt_lib0int_to_string(___nl__int__26));
#line 732
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__string__65));
#line 732
c_rt_lib0clear(&___nl__im__64);
#line 732
c_rt_lib0clear(&___nl__string__65);
#line 732
c_rt_lib0move(&___nl__im__66,___get_global_string_const(183));
#line 732
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__66));
#line 732
c_rt_lib0clear(&___nl__im__63);
#line 732
c_rt_lib0clear(&___nl__im__66);
#line 732
c_rt_lib0delete(c_fe_lib0print(___nl__im__62));
#line 732
c_rt_lib0clear(&___nl__im__62);
#line 732
goto label_167;
#line 732
label_167:
;
#line 732
//clear ___nl__bool__60;
#line 733
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(0));
#line 734
c_rt_lib0move(&___nl__im__71, c_rt_lib0init_iter((*___ref___im__0)));
#line 734
label_171:
;
#line 734
___nl__bool__69 = c_rt_lib0is_end_hash(___nl__im__71);
#line 734
if(___nl__bool__69){ goto label_204;}
#line 734
c_rt_lib0move(&___nl__im__68, c_rt_lib0get_key_iter(___nl__im__71));
#line 734
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__68));
#line 735
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(0));
#line 736
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(184)));
#line 736
___nl__int__75 = 0;
#line 736
___nl__int__76 = 1;
#line 736
___nl__int__77 = c_rt_lib0array_len(___nl__im__73);
#line 736
label_181:
;
#line 736
___nl__bool__78 = ___nl__int__75 >= ___nl__int__77;
#line 736
if(___nl__bool__78){ goto label_192;}
#line 736
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__73, ___nl__int__75));
#line 736
c_rt_lib0copy(&___nl__im__74, ___nl__im__79);
#line 737
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(185)));
#line 737
c_rt_lib0delete(array0push(&___nl__im__72, ___nl__im__80));
#line 737
c_rt_lib0clear(&___nl__im__80);
#line 737
c_rt_lib0clear(&___nl__im__74);
#line 738
___nl__int__75 = ___nl__int__75 + ___nl__int__76;
#line 738
goto label_181;
#line 738
label_192:
;
#line 739
c_rt_lib0delete(hash0set_value(&___nl__im__67, ___nl__im__68, ___nl__im__72));
#line 739
c_rt_lib0clear(&___nl__im__72);
#line 739
c_rt_lib0clear(&___nl__im__73);
#line 739
c_rt_lib0clear(&___nl__im__74);
#line 739
//clear ___nl__int__75;
#line 739
//clear ___nl__int__76;
#line 739
//clear ___nl__int__77;
#line 739
//clear ___nl__bool__78;
#line 739
c_rt_lib0clear(&___nl__im__79);
#line 740
c_rt_lib0move(&___nl__im__71, c_rt_lib0next_iter(___nl__im__71));
#line 740
goto label_171;
#line 740
label_204:
;
#line 741
c_rt_lib0move(&___nl__im__81, module_checker0search_loops(___nl__im__67));
#line 741
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 741
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_string_const(62), ___nl__im__82);
#line 741
c_rt_lib0clear(&___nl__im__81);
#line 741
c_rt_lib0clear(&___nl__im__82);
#line 742
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(80));
#line 742
___nl__bool__83 = !___nl__bool__83;
#line 742
if(___nl__bool__83){ goto label_253;}
#line 743
c_rt_lib0move(&___nl__im__85,___get_global_string_const(186));
#line 743
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 743
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(187)));
#line 743
c_rt_lib0clear(&___nl__im__88);
#line 743
___nl__int__86 = c_rt_lib0array_len(___nl__im__87);
#line 743
c_rt_lib0clear(&___nl__im__87);
#line 743
c_rt_lib0move(&___nl__string__89, c_rt_lib0int_to_string(___nl__int__86));
#line 743
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__string__89));
#line 743
c_rt_lib0clear(&___nl__im__85);
#line 743
//clear ___nl__int__86;
#line 743
c_rt_lib0clear(&___nl__string__89);
#line 743
c_rt_lib0delete(c_fe_lib0print(___nl__im__84));
#line 743
c_rt_lib0clear(&___nl__im__84);
#line 744
c_rt_lib0move(&___nl__im__91,___get_global_string_const(188));
#line 744
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 744
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(189)));
#line 744
c_rt_lib0clear(&___nl__im__94);
#line 744
___nl__int__92 = c_rt_lib0array_len(___nl__im__93);
#line 744
c_rt_lib0clear(&___nl__im__93);
#line 744
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__92));
#line 744
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__string__95));
#line 744
c_rt_lib0clear(&___nl__im__91);
#line 744
//clear ___nl__int__92;
#line 744
c_rt_lib0clear(&___nl__string__95);
#line 744
c_rt_lib0delete(c_fe_lib0print(___nl__im__90));
#line 744
c_rt_lib0clear(&___nl__im__90);
#line 745
c_rt_lib0move(&___nl__im__96, reference_generator0generate((*___ref___im__0)));
#line 746
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(80)));
#line 746
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(99)));
#line 746
c_rt_lib0move(&___nl__im__100, compiler_priv0serialize_deref(___nl__im__101, ___nl__im__96));
#line 746
c_rt_lib0clear(&___nl__im__101);
#line 746
c_rt_lib0move(&___nl__im__98, c_fe_lib0string_to_file(___nl__im__99, ___nl__im__100));
#line 746
c_rt_lib0clear(&___nl__im__99);
#line 746
c_rt_lib0clear(&___nl__im__100);
#line 746
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 746
if(___nl__bool__97){ goto label_251;}
#line 746
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(190), ___nl__im__98));
#line 746
nl_die_arg(___nl__im__98);
#line 746
label_251:
;
#line 747
goto label_253;
#line 747
label_253:
;
#line 747
//clear ___nl__bool__83;
#line 747
c_rt_lib0clear(&___nl__im__96);
#line 747
//clear ___nl__bool__97;
#line 747
c_rt_lib0clear(&___nl__im__98);
#line 747
c_rt_lib0clear(&___nl__im__2);
#line 747
//clear ___nl__bool__3;
#line 747
c_rt_lib0clear(&___nl__im__5);
#line 747
//clear ___nl__int__26;
#line 747
c_rt_lib0clear(&___nl__im__28);
#line 747
c_rt_lib0clear(&___nl__im__29);
#line 747
//clear ___nl__int__30;
#line 747
//clear ___nl__int__31;
#line 747
//clear ___nl__int__32;
#line 747
//clear ___nl__bool__33;
#line 747
c_rt_lib0clear(&___nl__im__34);
#line 747
c_rt_lib0clear(&___nl__im__35);
#line 747
c_rt_lib0clear(&___nl__im__44);
#line 747
c_rt_lib0clear(&___nl__im__45);
#line 747
//clear ___nl__int__46;
#line 747
//clear ___nl__int__47;
#line 747
//clear ___nl__int__48;
#line 747
//clear ___nl__bool__49;
#line 747
c_rt_lib0clear(&___nl__im__50);
#line 747
c_rt_lib0clear(&___nl__im__51);
#line 747
c_rt_lib0clear(&___nl__im__67);
#line 747
c_rt_lib0clear(&___nl__im__68);
#line 747
//clear ___nl__bool__69;
#line 747
c_rt_lib0clear(&___nl__im__70);
#line 747
c_rt_lib0clear(&___nl__im__71);
#line 747
c_rt_lib0clear(&___nl__im__72);
#line 747
c_rt_lib0clear(&___nl__im__73);
#line 747
c_rt_lib0clear(&___nl__im__74);
#line 747
//clear ___nl__int__75;
#line 747
//clear ___nl__int__76;
#line 747
//clear ___nl__int__77;
#line 747
//clear ___nl__bool__78;
#line 747
c_rt_lib0clear(&___nl__im__79);
#line 747
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
#line 751
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 752
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 752
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 752
c_rt_lib0clear(&___nl__im__3);
#line 753
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 754
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_string_const(191), ___get_global_string_const(192)));
#line 754
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 754
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 754
c_rt_lib0clear(&___nl__im__6);
#line 754
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 754
c_rt_lib0clear(&___nl__im__5);
#line 754
c_rt_lib0clear(&___nl__im__0);
#line 754
c_rt_lib0clear(&___nl__im__1);
#line 754
c_rt_lib0clear(&___nl__im__2);
#line 754
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
#line 759
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 760
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(189)));
#line 760
___nl__int__4 = 0;
#line 760
___nl__int__5 = 1;
#line 760
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 760
label_5:
;
#line 760
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 760
if(___nl__bool__7){ goto label_18;}
#line 760
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 760
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 761
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(187), ___nl__im__3));
#line 761
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__10));
#line 761
c_rt_lib0clear(&___nl__im__10);
#line 761
c_rt_lib0array_push(&___nl__im__1, ___nl__im__9);
#line 761
c_rt_lib0clear(&___nl__im__9);
#line 761
c_rt_lib0clear(&___nl__im__3);
#line 762
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 762
goto label_5;
#line 762
label_18:
;
#line 764
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(187)));
#line 764
___nl__int__13 = 0;
#line 764
___nl__int__14 = 1;
#line 764
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 764
label_23:
;
#line 764
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 764
if(___nl__bool__16){ goto label_36;}
#line 764
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 764
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 765
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(189), ___nl__im__12));
#line 765
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(99), ___nl__im__19));
#line 765
c_rt_lib0clear(&___nl__im__19);
#line 765
c_rt_lib0array_push(&___nl__im__1, ___nl__im__18);
#line 765
c_rt_lib0clear(&___nl__im__18);
#line 765
c_rt_lib0clear(&___nl__im__12);
#line 766
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 766
goto label_23;
#line 766
label_36:
;
#line 767
c_rt_lib0clear(&___nl__im__0);
#line 767
c_rt_lib0clear(&___nl__im__2);
#line 767
c_rt_lib0clear(&___nl__im__3);
#line 767
//clear ___nl__int__4;
#line 767
//clear ___nl__int__5;
#line 767
//clear ___nl__int__6;
#line 767
//clear ___nl__bool__7;
#line 767
c_rt_lib0clear(&___nl__im__8);
#line 767
c_rt_lib0clear(&___nl__im__11);
#line 767
c_rt_lib0clear(&___nl__im__12);
#line 767
//clear ___nl__int__13;
#line 767
//clear ___nl__int__14;
#line 767
//clear ___nl__int__15;
#line 767
//clear ___nl__bool__16;
#line 767
c_rt_lib0clear(&___nl__im__17);
#line 767
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
#line 771
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 771
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(83));
#line 771
if(___nl__bool__4){ goto label_8;}
#line 772
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(82));
#line 772
if(___nl__bool__4){ goto label_12;}
#line 772
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 772
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 772
nl_die_arg(___nl__im__5);
#line 771
label_8:
;
#line 771
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(83)));
#line 771
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 772
goto label_22;
#line 772
label_12:
;
#line 772
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(82)));
#line 772
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 773
c_rt_lib0move(&___nl__im__11,___get_global_string_const(153));
#line 773
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 773
c_rt_lib0clear(&___nl__im__11);
#line 773
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 773
c_rt_lib0clear(&___nl__im__10);
#line 774
c_rt_lib0move(___ref___im__2,c_rt_lib0ov_mk_none(___get_global_string_const(193)));
#line 775
goto label_22;
#line 775
label_22:
;
#line 775
c_rt_lib0clear(&___nl__im__0);
#line 775
c_rt_lib0clear(&___nl__im__1);
#line 775
c_rt_lib0clear(&___nl__im__3);
#line 775
//clear ___nl__bool__4;
#line 775
c_rt_lib0clear(&___nl__im__5);
#line 775
c_rt_lib0clear(&___nl__im__6);
#line 775
c_rt_lib0clear(&___nl__im__7);
#line 775
c_rt_lib0clear(&___nl__im__8);
#line 775
c_rt_lib0clear(&___nl__im__9);
#line 775
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
#line 783
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 784
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(64));
#line 784
if(___nl__bool__6){ goto label_16;}
#line 792
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(65));
#line 792
if(___nl__bool__6){ goto label_56;}
#line 806
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(66));
#line 806
if(___nl__bool__6){ goto label_126;}
#line 824
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(67));
#line 824
if(___nl__bool__6){ goto label_224;}
#line 826
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(68));
#line 826
if(___nl__bool__6){ goto label_228;}
#line 828
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(69));
#line 828
if(___nl__bool__6){ goto label_232;}
#line 828
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 828
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 828
nl_die_arg(___nl__im__7);
#line 784
label_16:
;
#line 785
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 785
label_18:
;
#line 785
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 785
if(___nl__bool__9){ goto label_54;}
#line 785
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 785
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 786
c_rt_lib0move(&___nl__im__12,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 787
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 787
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(79)));
#line 787
c_rt_lib0clear(&___nl__im__15);
#line 787
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 787
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(79)));
#line 787
c_rt_lib0clear(&___nl__im__17);
#line 787
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(64)));
#line 787
c_rt_lib0clear(&___nl__im__14);
#line 787
c_rt_lib0clear(&___nl__im__16);
#line 788
c_rt_lib0move(&___nl__im__19,___get_global_string_const(152));
#line 788
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 788
c_rt_lib0clear(&___nl__im__19);
#line 788
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 788
c_rt_lib0clear(&___nl__im__18);
#line 789
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 789
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 789
c_rt_lib0clear(&___nl__im__20);
#line 790
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 790
___nl__bool__21 = !___nl__bool__21;
#line 790
if(___nl__bool__21){ goto label_48;}
#line 790
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 790
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 790
c_rt_lib0clear(&___nl__im__22);
#line 790
goto label_48;
#line 790
label_48:
;
#line 790
//clear ___nl__bool__21;
#line 790
c_rt_lib0clear(&___nl__im__12);
#line 790
c_rt_lib0clear(&___nl__im__13);
#line 791
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 791
goto label_18;
#line 791
label_54:
;
#line 792
goto label_255;
#line 792
label_56:
;
#line 793
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 794
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 795
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(195)));
#line 795
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 795
label_61:
;
#line 795
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 795
if(___nl__bool__27){ goto label_103;}
#line 795
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 795
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 796
c_rt_lib0move(&___nl__im__24,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 797
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 797
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(79)));
#line 797
c_rt_lib0clear(&___nl__im__32);
#line 797
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 797
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(79)));
#line 797
c_rt_lib0clear(&___nl__im__34);
#line 797
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(65)));
#line 797
c_rt_lib0clear(&___nl__im__31);
#line 797
c_rt_lib0clear(&___nl__im__33);
#line 798
c_rt_lib0move(&___nl__im__36,___get_global_string_const(152));
#line 798
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 798
c_rt_lib0clear(&___nl__im__36);
#line 798
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 798
c_rt_lib0clear(&___nl__im__35);
#line 799
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(65)));
#line 799
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(65)));
#line 799
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 799
c_rt_lib0clear(&___nl__im__37);
#line 799
c_rt_lib0clear(&___nl__im__38);
#line 800
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(72)));
#line 800
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(72)));
#line 800
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 800
c_rt_lib0clear(&___nl__im__39);
#line 800
c_rt_lib0clear(&___nl__im__40);
#line 801
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 801
___nl__bool__41 = !___nl__bool__41;
#line 801
if(___nl__bool__41){ goto label_98;}
#line 801
c_rt_lib0move(&___nl__im__42,___get_global_string_const(36));
#line 801
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 801
c_rt_lib0clear(&___nl__im__42);
#line 801
goto label_98;
#line 801
label_98:
;
#line 801
//clear ___nl__bool__41;
#line 801
c_rt_lib0clear(&___nl__im__30);
#line 802
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 802
goto label_61;
#line 802
label_103:
;
#line 803
c_rt_lib0move(&___nl__im__43,___get_global_string_const(196));
#line 803
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 803
c_rt_lib0clear(&___nl__im__43);
#line 804
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(197)));
#line 804
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(65)));
#line 804
c_rt_lib0clear(&___nl__im__45);
#line 804
c_rt_lib0move(&___nl__im__47,___get_global_string_const(198));
#line 804
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 804
c_rt_lib0clear(&___nl__im__47);
#line 804
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 804
c_rt_lib0clear(&___nl__im__44);
#line 804
c_rt_lib0clear(&___nl__im__46);
#line 805
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(197)));
#line 805
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(72)));
#line 805
c_rt_lib0clear(&___nl__im__49);
#line 805
c_rt_lib0move(&___nl__im__51,___get_global_string_const(199));
#line 805
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 805
c_rt_lib0clear(&___nl__im__51);
#line 805
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 805
c_rt_lib0clear(&___nl__im__48);
#line 805
c_rt_lib0clear(&___nl__im__50);
#line 806
goto label_255;
#line 806
label_126:
;
#line 806
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(66)));
#line 806
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 807
c_rt_lib0move(&___nl__im__57, c_rt_lib0init_iter(___nl__im__0));
#line 807
label_130:
;
#line 807
___nl__bool__55 = c_rt_lib0is_end_hash(___nl__im__57);
#line 807
if(___nl__bool__55){ goto label_222;}
#line 807
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_key_iter(___nl__im__57));
#line 807
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__54));
#line 808
c_rt_lib0move(&___nl__im__58,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 809
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 810
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 810
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(79)));
#line 810
c_rt_lib0clear(&___nl__im__62);
#line 810
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 810
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(79)));
#line 810
c_rt_lib0clear(&___nl__im__64);
#line 810
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(66)));
#line 810
c_rt_lib0clear(&___nl__im__61);
#line 810
c_rt_lib0clear(&___nl__im__63);
#line 811
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 811
___nl__bool__65 = c_rt_lib0check_true_native(___nl__im__66);
#line 811
c_rt_lib0clear(&___nl__im__66);
#line 811
___nl__bool__65 = !___nl__bool__65;
#line 811
if(___nl__bool__65){ goto label_155;}
#line 812
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(74)));
#line 812
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__67));
#line 812
c_rt_lib0clear(&___nl__im__67);
#line 813
goto label_155;
#line 813
label_155:
;
#line 813
//clear ___nl__bool__65;
#line 814
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(70)));
#line 814
c_rt_lib0move(&___nl__im__68, generator_js0generate(___nl__im__56, ___nl__im__69, ___nl__im__59));
#line 814
c_rt_lib0clear(&___nl__im__69);
#line 815
c_rt_lib0move(&___nl__im__71,___get_global_string_const(152));
#line 815
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__54));
#line 815
c_rt_lib0clear(&___nl__im__71);
#line 815
c_rt_lib0delete(c_fe_lib0print(___nl__im__70));
#line 815
c_rt_lib0clear(&___nl__im__70);
#line 816
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(66)));
#line 816
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(66)));
#line 816
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__72, ___nl__im__73, &___nl__im__58));
#line 816
c_rt_lib0clear(&___nl__im__72);
#line 816
c_rt_lib0clear(&___nl__im__73);
#line 817
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(71)));
#line 817
___nl__bool__74 = c_rt_lib0check_true_native(___nl__im__75);
#line 817
c_rt_lib0clear(&___nl__im__75);
#line 817
___nl__bool__74 = !___nl__bool__74;
#line 817
if(___nl__bool__74){ goto label_205;}
#line 818
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(73)));
#line 818
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__76));
#line 818
c_rt_lib0clear(&___nl__im__76);
#line 819
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_string_const(71)));
#line 819
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(75)));
#line 819
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__77, ___nl__im__78, &___nl__im__58));
#line 819
c_rt_lib0clear(&___nl__im__77);
#line 819
c_rt_lib0clear(&___nl__im__78);
#line 820
c_rt_lib0move(&___nl__im__83,___get_global_string_const(200));
#line 820
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__54));
#line 820
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(78)));
#line 820
c_rt_lib0clear(&___nl__im__85);
#line 820
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__84));
#line 820
c_rt_lib0clear(&___nl__im__83);
#line 820
c_rt_lib0clear(&___nl__im__84);
#line 820
c_rt_lib0move(&___nl__im__86,___get_global_string_const(201));
#line 820
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__86));
#line 820
c_rt_lib0clear(&___nl__im__82);
#line 820
c_rt_lib0clear(&___nl__im__86);
#line 820
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(67)));
#line 820
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__87));
#line 820
c_rt_lib0clear(&___nl__im__81);
#line 820
c_rt_lib0clear(&___nl__im__87);
#line 820
c_rt_lib0move(&___nl__im__88,___get_global_string_const(202));
#line 820
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__88));
#line 820
c_rt_lib0clear(&___nl__im__80);
#line 820
c_rt_lib0clear(&___nl__im__88);
#line 820
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__79));
#line 820
c_rt_lib0clear(&___nl__im__79);
#line 821
goto label_205;
#line 821
label_205:
;
#line 821
//clear ___nl__bool__74;
#line 822
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__58);
#line 822
___nl__bool__89 = !___nl__bool__89;
#line 822
if(___nl__bool__89){ goto label_214;}
#line 822
c_rt_lib0move(&___nl__im__90,___get_global_string_const(36));
#line 822
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__54, ___nl__im__90));
#line 822
c_rt_lib0clear(&___nl__im__90);
#line 822
goto label_214;
#line 822
label_214:
;
#line 822
//clear ___nl__bool__89;
#line 822
c_rt_lib0clear(&___nl__im__58);
#line 822
c_rt_lib0clear(&___nl__im__59);
#line 822
c_rt_lib0clear(&___nl__im__60);
#line 822
c_rt_lib0clear(&___nl__im__68);
#line 823
c_rt_lib0move(&___nl__im__57, c_rt_lib0next_iter(___nl__im__57));
#line 823
goto label_130;
#line 823
label_222:
;
#line 824
goto label_255;
#line 824
label_224:
;
#line 825
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 825
nl_die_arg(___nl__im__91);
#line 826
goto label_255;
#line 826
label_228:
;
#line 827
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 827
nl_die_arg(___nl__im__92);
#line 828
goto label_255;
#line 828
label_232:
;
#line 829
c_rt_lib0move(&___nl__im__93, post_processing0get_call_graph(___nl__im__0));
#line 830
c_rt_lib0move(&___nl__im__94,c_rt_lib0ov_mk_none(___get_global_string_const(194)));
#line 831
c_rt_lib0move(&___nl__im__95,___get_global_string_const(203));
#line 831
c_rt_lib0delete(c_fe_lib0print(___nl__im__95));
#line 831
c_rt_lib0clear(&___nl__im__95);
#line 832
c_rt_lib0move(&___nl__im__96, dfile0ssave(___nl__im__93));
#line 832
c_rt_lib0move(&___nl__im__98,___get_global_string_const(129));
#line 832
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__2, ___nl__im__98));
#line 832
c_rt_lib0clear(&___nl__im__98);
#line 832
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__96, ___nl__im__97, &___nl__im__94));
#line 832
c_rt_lib0clear(&___nl__im__96);
#line 832
c_rt_lib0clear(&___nl__im__97);
#line 833
___nl__bool__99 = c_rt_lib0check_true_native(___nl__im__94);
#line 833
___nl__bool__99 = !___nl__bool__99;
#line 833
if(___nl__bool__99){ goto label_252;}
#line 834
c_rt_lib0move(&___nl__im__100,___get_global_string_const(204));
#line 834
c_rt_lib0delete(c_fe_lib0print(___nl__im__100));
#line 834
c_rt_lib0clear(&___nl__im__100);
#line 835
goto label_252;
#line 835
label_252:
;
#line 835
//clear ___nl__bool__99;
#line 836
goto label_255;
#line 836
label_255:
;
#line 837
___nl__int__102 = hash0size(___nl__im__5);
#line 837
___nl__int__103 = 0;
#line 837
___nl__bool__101 = ___nl__int__102 > ___nl__int__103;
#line 837
//clear ___nl__int__102;
#line 837
//clear ___nl__int__103;
#line 837
___nl__bool__101 = !___nl__bool__101;
#line 837
if(___nl__bool__101){ goto label_302;}
#line 838
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__5));
#line 838
c_rt_lib0clear(&___nl__im__0);
#line 838
c_rt_lib0clear(&___nl__im__1);
#line 838
c_rt_lib0clear(&___nl__im__2);
#line 838
c_rt_lib0clear(&___nl__im__4);
#line 838
c_rt_lib0clear(&___nl__im__5);
#line 838
//clear ___nl__bool__6;
#line 838
c_rt_lib0clear(&___nl__im__7);
#line 838
c_rt_lib0clear(&___nl__im__8);
#line 838
//clear ___nl__bool__9;
#line 838
c_rt_lib0clear(&___nl__im__10);
#line 838
c_rt_lib0clear(&___nl__im__11);
#line 838
c_rt_lib0clear(&___nl__im__12);
#line 838
c_rt_lib0clear(&___nl__im__13);
#line 838
c_rt_lib0clear(&___nl__im__23);
#line 838
c_rt_lib0clear(&___nl__im__24);
#line 838
c_rt_lib0clear(&___nl__im__25);
#line 838
c_rt_lib0clear(&___nl__im__26);
#line 838
//clear ___nl__bool__27;
#line 838
c_rt_lib0clear(&___nl__im__28);
#line 838
c_rt_lib0clear(&___nl__im__29);
#line 838
c_rt_lib0clear(&___nl__im__30);
#line 838
c_rt_lib0clear(&___nl__im__52);
#line 838
c_rt_lib0clear(&___nl__im__53);
#line 838
c_rt_lib0clear(&___nl__im__54);
#line 838
//clear ___nl__bool__55;
#line 838
c_rt_lib0clear(&___nl__im__56);
#line 838
c_rt_lib0clear(&___nl__im__57);
#line 838
c_rt_lib0clear(&___nl__im__58);
#line 838
c_rt_lib0clear(&___nl__im__59);
#line 838
c_rt_lib0clear(&___nl__im__60);
#line 838
c_rt_lib0clear(&___nl__im__68);
#line 838
c_rt_lib0clear(&___nl__im__91);
#line 838
c_rt_lib0clear(&___nl__im__92);
#line 838
c_rt_lib0clear(&___nl__im__93);
#line 838
c_rt_lib0clear(&___nl__im__94);
#line 838
//clear ___nl__bool__101;
#line 838
return ___nl__im__104;
#line 839
goto label_345;
#line 839
label_302:
;
#line 840
c_rt_lib0move(&___nl__im__106,___get_global_string_const(36));
#line 840
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__106));
#line 840
c_rt_lib0clear(&___nl__im__106);
#line 840
c_rt_lib0clear(&___nl__im__0);
#line 840
c_rt_lib0clear(&___nl__im__1);
#line 840
c_rt_lib0clear(&___nl__im__2);
#line 840
c_rt_lib0clear(&___nl__im__4);
#line 840
c_rt_lib0clear(&___nl__im__5);
#line 840
//clear ___nl__bool__6;
#line 840
c_rt_lib0clear(&___nl__im__7);
#line 840
c_rt_lib0clear(&___nl__im__8);
#line 840
//clear ___nl__bool__9;
#line 840
c_rt_lib0clear(&___nl__im__10);
#line 840
c_rt_lib0clear(&___nl__im__11);
#line 840
c_rt_lib0clear(&___nl__im__12);
#line 840
c_rt_lib0clear(&___nl__im__13);
#line 840
c_rt_lib0clear(&___nl__im__23);
#line 840
c_rt_lib0clear(&___nl__im__24);
#line 840
c_rt_lib0clear(&___nl__im__25);
#line 840
c_rt_lib0clear(&___nl__im__26);
#line 840
//clear ___nl__bool__27;
#line 840
c_rt_lib0clear(&___nl__im__28);
#line 840
c_rt_lib0clear(&___nl__im__29);
#line 840
c_rt_lib0clear(&___nl__im__30);
#line 840
c_rt_lib0clear(&___nl__im__52);
#line 840
c_rt_lib0clear(&___nl__im__53);
#line 840
c_rt_lib0clear(&___nl__im__54);
#line 840
//clear ___nl__bool__55;
#line 840
c_rt_lib0clear(&___nl__im__56);
#line 840
c_rt_lib0clear(&___nl__im__57);
#line 840
c_rt_lib0clear(&___nl__im__58);
#line 840
c_rt_lib0clear(&___nl__im__59);
#line 840
c_rt_lib0clear(&___nl__im__60);
#line 840
c_rt_lib0clear(&___nl__im__68);
#line 840
c_rt_lib0clear(&___nl__im__91);
#line 840
c_rt_lib0clear(&___nl__im__92);
#line 840
c_rt_lib0clear(&___nl__im__93);
#line 840
c_rt_lib0clear(&___nl__im__94);
#line 840
//clear ___nl__bool__101;
#line 840
c_rt_lib0clear(&___nl__im__104);
#line 840
return ___nl__im__105;
#line 841
goto label_345;
#line 841
label_345:
;
#line 841
//clear ___nl__bool__101;
#line 841
c_rt_lib0clear(&___nl__im__104);
#line 841
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
#line 845
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(64));
#line 845
if(___nl__bool__2){ goto label_17;}
#line 847
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(65));
#line 847
if(___nl__bool__2){ goto label_23;}
#line 849
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(66));
#line 849
if(___nl__bool__2){ goto label_29;}
#line 851
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(67));
#line 851
if(___nl__bool__2){ goto label_35;}
#line 853
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(68));
#line 853
if(___nl__bool__2){ goto label_63;}
#line 855
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(76));
#line 855
if(___nl__bool__2){ goto label_94;}
#line 857
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(69));
#line 857
if(___nl__bool__2){ goto label_98;}
#line 857
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 857
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 857
nl_die_arg(___nl__im__3);
#line 845
label_17:
;
#line 845
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(64)));
#line 845
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 846
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 846
nl_die_arg(___nl__im__6);
#line 847
goto label_102;
#line 847
label_23:
;
#line 847
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(65)));
#line 847
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 848
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 848
nl_die_arg(___nl__im__9);
#line 849
goto label_102;
#line 849
label_29:
;
#line 849
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(66)));
#line 849
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 850
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 850
nl_die_arg(___nl__im__12);
#line 851
goto label_102;
#line 851
label_35:
;
#line 851
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(67)));
#line 851
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 852
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(205)));
#line 852
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 852
c_rt_lib0move(&___nl__im__18, pretty_printer0print_module_to_str(___nl__im__0));
#line 852
c_rt_lib0move(&___nl__im__17, c_fe_lib0string_to_file(___nl__im__13, ___nl__im__18));
#line 852
c_rt_lib0clear(&___nl__im__18);
#line 852
c_rt_lib0move(&___nl__im__15, ptd0ensure(___nl__im__16, ___nl__im__17));
#line 852
c_rt_lib0clear(&___nl__im__16);
#line 852
c_rt_lib0clear(&___nl__im__17);
#line 852
c_rt_lib0clear(&___nl__im__0);
#line 852
c_rt_lib0clear(&___nl__im__1);
#line 852
//clear ___nl__bool__2;
#line 852
c_rt_lib0clear(&___nl__im__3);
#line 852
c_rt_lib0clear(&___nl__im__4);
#line 852
c_rt_lib0clear(&___nl__im__5);
#line 852
c_rt_lib0clear(&___nl__im__6);
#line 852
c_rt_lib0clear(&___nl__im__7);
#line 852
c_rt_lib0clear(&___nl__im__8);
#line 852
c_rt_lib0clear(&___nl__im__9);
#line 852
c_rt_lib0clear(&___nl__im__10);
#line 852
c_rt_lib0clear(&___nl__im__11);
#line 852
c_rt_lib0clear(&___nl__im__12);
#line 852
c_rt_lib0clear(&___nl__im__13);
#line 852
c_rt_lib0clear(&___nl__im__14);
#line 852
return ___nl__im__15;
#line 853
goto label_102;
#line 853
label_63:
;
#line 853
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(68)));
#line 853
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 854
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_string_const(54), ___get_global_string_const(205)));
#line 854
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__22));
#line 854
c_rt_lib0move(&___nl__im__24, dfile0ssave(___nl__im__0));
#line 854
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 854
c_rt_lib0clear(&___nl__im__24);
#line 854
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 854
c_rt_lib0clear(&___nl__im__22);
#line 854
c_rt_lib0clear(&___nl__im__23);
#line 854
c_rt_lib0clear(&___nl__im__0);
#line 854
c_rt_lib0clear(&___nl__im__1);
#line 854
//clear ___nl__bool__2;
#line 854
c_rt_lib0clear(&___nl__im__3);
#line 854
c_rt_lib0clear(&___nl__im__4);
#line 854
c_rt_lib0clear(&___nl__im__5);
#line 854
c_rt_lib0clear(&___nl__im__6);
#line 854
c_rt_lib0clear(&___nl__im__7);
#line 854
c_rt_lib0clear(&___nl__im__8);
#line 854
c_rt_lib0clear(&___nl__im__9);
#line 854
c_rt_lib0clear(&___nl__im__10);
#line 854
c_rt_lib0clear(&___nl__im__11);
#line 854
c_rt_lib0clear(&___nl__im__12);
#line 854
c_rt_lib0clear(&___nl__im__13);
#line 854
c_rt_lib0clear(&___nl__im__14);
#line 854
c_rt_lib0clear(&___nl__im__15);
#line 854
c_rt_lib0clear(&___nl__im__19);
#line 854
c_rt_lib0clear(&___nl__im__20);
#line 854
return ___nl__im__21;
#line 855
goto label_102;
#line 855
label_94:
;
#line 856
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 856
nl_die_arg(___nl__im__25);
#line 857
goto label_102;
#line 857
label_98:
;
#line 858
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 858
nl_die_arg(___nl__im__26);
#line 859
goto label_102;
#line 859
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
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
bool  ___nl__bool__17 = false;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
#line 863
___nl__int__2 = string0length(___nl__im__0);
#line 863
___nl__int__3 = 1;
#line 863
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 863
//clear ___nl__int__2;
#line 863
//clear ___nl__int__3;
#line 864
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__1));
#line 864
___nl__int__7 = 1;
#line 864
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 864
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__im__6, ___nl__im__8));
#line 864
c_rt_lib0clear(&___nl__im__6);
#line 864
//clear ___nl__int__7;
#line 864
c_rt_lib0clear(&___nl__im__8);
#line 864
c_rt_lib0move(&___nl__im__9,___get_global_string_const(118));
#line 864
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__9);
#line 864
c_rt_lib0clear(&___nl__im__5);
#line 864
c_rt_lib0clear(&___nl__im__9);
#line 864
if(___nl__bool__4){ goto label_28;}
#line 864
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__1));
#line 864
___nl__int__12 = 1;
#line 864
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 864
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__0, ___nl__im__11, ___nl__im__13));
#line 864
c_rt_lib0clear(&___nl__im__11);
#line 864
//clear ___nl__int__12;
#line 864
c_rt_lib0clear(&___nl__im__13);
#line 864
c_rt_lib0move(&___nl__im__14,___get_global_string_const(122));
#line 864
___nl__bool__4 = c_rt_lib0eq(___nl__im__10, ___nl__im__14);
#line 864
c_rt_lib0clear(&___nl__im__10);
#line 864
c_rt_lib0clear(&___nl__im__14);
#line 864
label_28:
;
#line 864
___nl__bool__4 = !___nl__bool__4;
#line 864
if(___nl__bool__4){ goto label_35;}
#line 864
___nl__int__15 = 1;
#line 864
___nl__int__1 = ___nl__int__1 - ___nl__int__15;
#line 864
//clear ___nl__int__15;
#line 864
goto label_35;
#line 864
label_35:
;
#line 864
//clear ___nl__bool__4;
#line 865
label_37:
;
#line 865
___nl__int__19 = 0;
#line 865
___nl__bool__16 = ___nl__int__1 >= ___nl__int__19;
#line 865
//clear ___nl__int__19;
#line 865
___nl__bool__18 = !___nl__bool__16;
#line 865
if(___nl__bool__18){ goto label_54;}
#line 865
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__1));
#line 865
___nl__int__22 = 1;
#line 865
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__22));
#line 865
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__0, ___nl__im__21, ___nl__im__23));
#line 865
c_rt_lib0clear(&___nl__im__21);
#line 865
//clear ___nl__int__22;
#line 865
c_rt_lib0clear(&___nl__im__23);
#line 865
c_rt_lib0move(&___nl__im__24,___get_global_string_const(118));
#line 865
___nl__bool__16 = c_rt_lib0ne(___nl__im__20, ___nl__im__24);
#line 865
c_rt_lib0clear(&___nl__im__20);
#line 865
c_rt_lib0clear(&___nl__im__24);
#line 865
label_54:
;
#line 865
//clear ___nl__bool__18;
#line 865
___nl__bool__17 = !___nl__bool__16;
#line 865
if(___nl__bool__17){ goto label_69;}
#line 865
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__1));
#line 865
___nl__int__27 = 1;
#line 865
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__27));
#line 865
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__0, ___nl__im__26, ___nl__im__28));
#line 865
c_rt_lib0clear(&___nl__im__26);
#line 865
//clear ___nl__int__27;
#line 865
c_rt_lib0clear(&___nl__im__28);
#line 865
c_rt_lib0move(&___nl__im__29,___get_global_string_const(122));
#line 865
___nl__bool__16 = c_rt_lib0ne(___nl__im__25, ___nl__im__29);
#line 865
c_rt_lib0clear(&___nl__im__25);
#line 865
c_rt_lib0clear(&___nl__im__29);
#line 865
label_69:
;
#line 865
//clear ___nl__bool__17;
#line 865
___nl__bool__16 = !___nl__bool__16;
#line 865
if(___nl__bool__16){ goto label_77;}
#line 865
___nl__int__30 = 1;
#line 865
___nl__int__1 = ___nl__int__1 - ___nl__int__30;
#line 865
//clear ___nl__int__30;
#line 865
goto label_37;
#line 865
label_77:
;
#line 866
___nl__int__32 = 0;
#line 866
___nl__bool__31 = ___nl__int__1 <= ___nl__int__32;
#line 866
//clear ___nl__int__32;
#line 866
___nl__bool__31 = !___nl__bool__31;
#line 866
if(___nl__bool__31){ goto label_90;}
#line 866
c_rt_lib0move(&___nl__im__33,___get_global_string_const(123));
#line 866
c_rt_lib0clear(&___nl__im__0);
#line 866
//clear ___nl__int__1;
#line 866
//clear ___nl__bool__16;
#line 866
//clear ___nl__bool__31;
#line 866
return ___nl__im__33;
#line 866
goto label_90;
#line 866
label_90:
;
#line 866
//clear ___nl__bool__31;
#line 866
c_rt_lib0clear(&___nl__im__33);
#line 867
___nl__int__35 = 0;
#line 867
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__35));
#line 867
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__1));
#line 867
c_rt_lib0move(&___nl__im__34, string0substr(___nl__im__0, ___nl__im__36, ___nl__im__37));
#line 867
//clear ___nl__int__35;
#line 867
c_rt_lib0clear(&___nl__im__36);
#line 867
c_rt_lib0clear(&___nl__im__37);
#line 867
c_rt_lib0clear(&___nl__im__0);
#line 867
//clear ___nl__int__1;
#line 867
//clear ___nl__bool__16;
#line 867
return ___nl__im__34;
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
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
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
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
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
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
bool  ___nl__bool__69 = false;
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
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
bool  ___nl__bool__93 = false;
INT  ___nl__int__94 = 0;
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
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
bool  ___nl__bool__124 = false;
INT  ___nl__int__125 = 0;
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
ImmT  ___nl__im__137 = NULL;
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
bool  ___nl__bool__142 = false;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
bool  ___nl__bool__148 = false;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__string__152 = NULL;
INT  ___nl__int__153 = 0;
bool  ___nl__bool__154 = false;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
bool  ___nl__bool__162 = false;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
#line 872
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 873
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 874
c_rt_lib0move(&___nl__im__5,___get_global_string_const(123));
#line 874
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 874
c_rt_lib0clear(&___nl__im__5);
#line 875
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 876
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 877
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 878
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 879
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(95)));
#line 880
___nl__bool__11 = false;
#line 880
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 881
___nl__bool__13 = false;
#line 881
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 881
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(103), ___nl__im__2, ___get_global_string_const(102), ___nl__im__3, ___get_global_string_const(97), ___nl__im__4, ___get_global_string_const(100), ___nl__im__6, ___get_global_string_const(99), ___nl__im__7, ___get_global_string_const(101), ___nl__im__8, ___get_global_string_const(98), ___nl__im__9, ___get_global_string_const(104), ___nl__im__10, ___get_global_string_const(105), ___nl__im__12, ___get_global_string_const(106), ___nl__im__14));
#line 881
c_rt_lib0clear(&___nl__im__2);
#line 881
c_rt_lib0clear(&___nl__im__3);
#line 881
c_rt_lib0clear(&___nl__im__4);
#line 881
c_rt_lib0clear(&___nl__im__6);
#line 881
c_rt_lib0clear(&___nl__im__7);
#line 881
c_rt_lib0clear(&___nl__im__8);
#line 881
c_rt_lib0clear(&___nl__im__9);
#line 881
c_rt_lib0clear(&___nl__im__10);
#line 881
//clear ___nl__bool__11;
#line 881
c_rt_lib0clear(&___nl__im__12);
#line 881
//clear ___nl__bool__13;
#line 881
c_rt_lib0clear(&___nl__im__14);
#line 883
___nl__bool__15 = false;
#line 884
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 885
___nl__int__17 = 1;
#line 885
label_30:
;
#line 885
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 885
___nl__bool__18 = ___nl__int__17 < ___nl__int__19;
#line 885
//clear ___nl__int__19;
#line 885
___nl__bool__18 = !___nl__bool__18;
#line 885
if(___nl__bool__18){ goto label_518;}
#line 886
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 887
___nl__int__23 = string0length(___nl__im__20);
#line 887
___nl__int__24 = 2;
#line 887
___nl__bool__21 = ___nl__int__23 >= ___nl__int__24;
#line 887
//clear ___nl__int__23;
#line 887
//clear ___nl__int__24;
#line 887
___nl__bool__22 = !___nl__bool__21;
#line 887
if(___nl__bool__22){ goto label_57;}
#line 887
___nl__int__26 = 0;
#line 887
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__26));
#line 887
___nl__int__28 = 2;
#line 887
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__28));
#line 887
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__20, ___nl__im__27, ___nl__im__29));
#line 887
//clear ___nl__int__26;
#line 887
c_rt_lib0clear(&___nl__im__27);
#line 887
//clear ___nl__int__28;
#line 887
c_rt_lib0clear(&___nl__im__29);
#line 887
c_rt_lib0move(&___nl__im__30,___get_global_string_const(206));
#line 887
___nl__bool__21 = c_rt_lib0eq(___nl__im__25, ___nl__im__30);
#line 887
c_rt_lib0clear(&___nl__im__25);
#line 887
c_rt_lib0clear(&___nl__im__30);
#line 887
label_57:
;
#line 887
//clear ___nl__bool__22;
#line 887
___nl__bool__21 = !___nl__bool__21;
#line 887
if(___nl__bool__21){ goto label_488;}
#line 888
___nl__int__32 = 2;
#line 888
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__32));
#line 888
___nl__int__35 = string0length(___nl__im__20);
#line 888
___nl__int__36 = 2;
#line 888
___nl__int__34 = ___nl__int__35 - ___nl__int__36;
#line 888
//clear ___nl__int__35;
#line 888
//clear ___nl__int__36;
#line 888
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__34));
#line 888
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__20, ___nl__im__33, ___nl__im__37));
#line 888
//clear ___nl__int__32;
#line 888
c_rt_lib0clear(&___nl__im__33);
#line 888
//clear ___nl__int__34;
#line 888
c_rt_lib0clear(&___nl__im__37);
#line 889
c_rt_lib0move(&___nl__im__39,___get_global_string_const(99));
#line 889
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__39);
#line 889
c_rt_lib0clear(&___nl__im__39);
#line 889
___nl__bool__38 = !___nl__bool__38;
#line 889
if(___nl__bool__38){ goto label_87;}
#line 890
c_rt_lib0move(&___nl__im__41,___get_global_string_const(36));
#line 890
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__41));
#line 890
c_rt_lib0clear(&___nl__im__41);
#line 890
c_rt_lib0copy(&___nl__im__42, ___nl__im__40);
#line 890
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__42);
#line 890
c_rt_lib0clear(&___nl__im__40);
#line 890
c_rt_lib0clear(&___nl__im__42);
#line 891
goto label_483;
#line 891
label_87:
;
#line 891
c_rt_lib0move(&___nl__im__43,___get_global_string_const(64));
#line 891
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__43);
#line 891
c_rt_lib0clear(&___nl__im__43);
#line 891
___nl__bool__38 = !___nl__bool__38;
#line 891
if(___nl__bool__38){ goto label_99;}
#line 892
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(64)));
#line 892
c_rt_lib0copy(&___nl__im__45, ___nl__im__44);
#line 892
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__45);
#line 892
c_rt_lib0clear(&___nl__im__44);
#line 892
c_rt_lib0clear(&___nl__im__45);
#line 893
goto label_483;
#line 893
label_99:
;
#line 893
c_rt_lib0move(&___nl__im__46,___get_global_string_const(68));
#line 893
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__46);
#line 893
c_rt_lib0clear(&___nl__im__46);
#line 893
___nl__bool__38 = !___nl__bool__38;
#line 893
if(___nl__bool__38){ goto label_111;}
#line 894
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(68)));
#line 894
c_rt_lib0copy(&___nl__im__48, ___nl__im__47);
#line 894
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__48);
#line 894
c_rt_lib0clear(&___nl__im__47);
#line 894
c_rt_lib0clear(&___nl__im__48);
#line 895
goto label_483;
#line 895
label_111:
;
#line 895
c_rt_lib0move(&___nl__im__49,___get_global_string_const(65));
#line 895
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__49);
#line 895
c_rt_lib0clear(&___nl__im__49);
#line 895
___nl__bool__38 = !___nl__bool__38;
#line 895
if(___nl__bool__38){ goto label_123;}
#line 896
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_string_const(65)));
#line 896
c_rt_lib0copy(&___nl__im__51, ___nl__im__50);
#line 896
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__51);
#line 896
c_rt_lib0clear(&___nl__im__50);
#line 896
c_rt_lib0clear(&___nl__im__51);
#line 897
goto label_483;
#line 897
label_123:
;
#line 897
c_rt_lib0move(&___nl__im__52,___get_global_string_const(66));
#line 897
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__52);
#line 897
c_rt_lib0clear(&___nl__im__52);
#line 897
___nl__bool__38 = !___nl__bool__38;
#line 897
if(___nl__bool__38){ goto label_146;}
#line 898
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 898
___nl__bool__53 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(66));
#line 898
c_rt_lib0clear(&___nl__im__54);
#line 898
___nl__bool__53 = !___nl__bool__53;
#line 898
___nl__bool__53 = !___nl__bool__53;
#line 898
if(___nl__bool__53){ goto label_143;}
#line 899
c_rt_lib0move(&___nl__im__56, compiler_priv0get_default_js_opts());
#line 899
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__56));
#line 899
c_rt_lib0clear(&___nl__im__56);
#line 899
c_rt_lib0copy(&___nl__im__57, ___nl__im__55);
#line 899
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__57);
#line 899
c_rt_lib0clear(&___nl__im__55);
#line 899
c_rt_lib0clear(&___nl__im__57);
#line 900
goto label_143;
#line 900
label_143:
;
#line 900
//clear ___nl__bool__53;
#line 901
goto label_483;
#line 901
label_146:
;
#line 901
c_rt_lib0move(&___nl__im__58,___get_global_string_const(69));
#line 901
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__58);
#line 901
c_rt_lib0clear(&___nl__im__58);
#line 901
___nl__bool__38 = !___nl__bool__38;
#line 901
if(___nl__bool__38){ goto label_158;}
#line 902
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(69)));
#line 902
c_rt_lib0copy(&___nl__im__60, ___nl__im__59);
#line 902
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__60);
#line 902
c_rt_lib0clear(&___nl__im__59);
#line 902
c_rt_lib0clear(&___nl__im__60);
#line 903
goto label_483;
#line 903
label_158:
;
#line 903
c_rt_lib0move(&___nl__im__61,___get_global_string_const(67));
#line 903
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__61);
#line 903
c_rt_lib0clear(&___nl__im__61);
#line 903
___nl__bool__38 = !___nl__bool__38;
#line 903
if(___nl__bool__38){ goto label_171;}
#line 904
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_string_const(67)));
#line 904
c_rt_lib0copy(&___nl__im__63, ___nl__im__62);
#line 904
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__63);
#line 904
c_rt_lib0clear(&___nl__im__62);
#line 904
c_rt_lib0clear(&___nl__im__63);
#line 905
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 906
goto label_483;
#line 906
label_171:
;
#line 906
c_rt_lib0move(&___nl__im__64,___get_global_string_const(92));
#line 906
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__64);
#line 906
c_rt_lib0clear(&___nl__im__64);
#line 906
___nl__bool__38 = !___nl__bool__38;
#line 906
if(___nl__bool__38){ goto label_183;}
#line 907
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(92)));
#line 907
c_rt_lib0copy(&___nl__im__66, ___nl__im__65);
#line 907
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__66);
#line 907
c_rt_lib0clear(&___nl__im__65);
#line 907
c_rt_lib0clear(&___nl__im__66);
#line 908
goto label_483;
#line 908
label_183:
;
#line 908
c_rt_lib0move(&___nl__im__67,___get_global_string_const(93));
#line 908
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__67);
#line 908
c_rt_lib0clear(&___nl__im__67);
#line 908
___nl__bool__38 = !___nl__bool__38;
#line 908
if(___nl__bool__38){ goto label_212;}
#line 909
___nl__int__68 = 1;
#line 909
___nl__int__17 = ___nl__int__17 + ___nl__int__68;
#line 909
//clear ___nl__int__68;
#line 910
___nl__int__70 = c_rt_lib0array_len(___nl__im__0);
#line 910
___nl__bool__69 = ___nl__int__17 < ___nl__int__70;
#line 910
//clear ___nl__int__70;
#line 910
___nl__bool__69 = !___nl__bool__69;
#line 910
___nl__bool__69 = !___nl__bool__69;
#line 910
if(___nl__bool__69){ goto label_201;}
#line 910
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(0));
#line 910
nl_die_arg(___nl__im__71);
#line 910
goto label_201;
#line 910
label_201:
;
#line 910
//clear ___nl__bool__69;
#line 910
c_rt_lib0clear(&___nl__im__71);
#line 911
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 911
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_arg(___get_global_string_const(93), ___nl__im__73));
#line 911
c_rt_lib0clear(&___nl__im__73);
#line 911
c_rt_lib0copy(&___nl__im__74, ___nl__im__72);
#line 911
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__74);
#line 911
c_rt_lib0clear(&___nl__im__72);
#line 911
c_rt_lib0clear(&___nl__im__74);
#line 912
goto label_483;
#line 912
label_212:
;
#line 912
c_rt_lib0move(&___nl__im__75,___get_global_string_const(90));
#line 912
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__75);
#line 912
c_rt_lib0clear(&___nl__im__75);
#line 912
___nl__bool__38 = !___nl__bool__38;
#line 912
if(___nl__bool__38){ goto label_224;}
#line 913
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_string_const(90)));
#line 913
c_rt_lib0copy(&___nl__im__77, ___nl__im__76);
#line 913
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__77);
#line 913
c_rt_lib0clear(&___nl__im__76);
#line 913
c_rt_lib0clear(&___nl__im__77);
#line 914
goto label_483;
#line 914
label_224:
;
#line 914
c_rt_lib0move(&___nl__im__78,___get_global_string_const(91));
#line 914
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__78);
#line 914
c_rt_lib0clear(&___nl__im__78);
#line 914
___nl__bool__38 = !___nl__bool__38;
#line 914
if(___nl__bool__38){ goto label_236;}
#line 915
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_none(___get_global_string_const(91)));
#line 915
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 915
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(102), ___nl__im__80);
#line 915
c_rt_lib0clear(&___nl__im__79);
#line 915
c_rt_lib0clear(&___nl__im__80);
#line 916
goto label_483;
#line 916
label_236:
;
#line 916
c_rt_lib0move(&___nl__im__81,___get_global_string_const(207));
#line 916
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__81);
#line 916
c_rt_lib0clear(&___nl__im__81);
#line 916
if(___nl__bool__38){ goto label_244;}
#line 916
c_rt_lib0move(&___nl__im__82,___get_global_string_const(208));
#line 916
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__82);
#line 916
c_rt_lib0clear(&___nl__im__82);
#line 916
label_244:
;
#line 916
___nl__bool__38 = !___nl__bool__38;
#line 916
if(___nl__bool__38){ goto label_272;}
#line 917
___nl__int__83 = 1;
#line 917
___nl__int__17 = ___nl__int__17 + ___nl__int__83;
#line 917
//clear ___nl__int__83;
#line 918
___nl__int__85 = c_rt_lib0array_len(___nl__im__0);
#line 918
___nl__bool__84 = ___nl__int__17 < ___nl__int__85;
#line 918
//clear ___nl__int__85;
#line 918
___nl__bool__84 = !___nl__bool__84;
#line 918
___nl__bool__84 = !___nl__bool__84;
#line 918
if(___nl__bool__84){ goto label_259;}
#line 918
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(0));
#line 918
nl_die_arg(___nl__im__86);
#line 918
goto label_259;
#line 918
label_259:
;
#line 918
//clear ___nl__bool__84;
#line 918
c_rt_lib0clear(&___nl__im__86);
#line 919
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 919
c_rt_lib0move(&___nl__im__89,___get_global_string_const(118));
#line 919
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__89));
#line 919
c_rt_lib0clear(&___nl__im__88);
#line 919
c_rt_lib0clear(&___nl__im__89);
#line 919
c_rt_lib0copy(&___nl__im__90, ___nl__im__87);
#line 919
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__90);
#line 919
c_rt_lib0clear(&___nl__im__87);
#line 919
c_rt_lib0clear(&___nl__im__90);
#line 920
goto label_483;
#line 920
label_272:
;
#line 920
c_rt_lib0move(&___nl__im__91,___get_global_string_const(209));
#line 920
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__91);
#line 920
c_rt_lib0clear(&___nl__im__91);
#line 920
___nl__bool__38 = !___nl__bool__38;
#line 920
if(___nl__bool__38){ goto label_299;}
#line 921
___nl__int__92 = 1;
#line 921
___nl__int__17 = ___nl__int__17 + ___nl__int__92;
#line 921
//clear ___nl__int__92;
#line 922
___nl__int__94 = c_rt_lib0array_len(___nl__im__0);
#line 922
___nl__bool__93 = ___nl__int__17 < ___nl__int__94;
#line 922
//clear ___nl__int__94;
#line 922
___nl__bool__93 = !___nl__bool__93;
#line 922
___nl__bool__93 = !___nl__bool__93;
#line 922
if(___nl__bool__93){ goto label_290;}
#line 922
c_rt_lib0move(&___nl__im__95, c_rt_lib0array_mk(0));
#line 922
nl_die_arg(___nl__im__95);
#line 922
goto label_290;
#line 922
label_290:
;
#line 922
//clear ___nl__bool__93;
#line 922
c_rt_lib0clear(&___nl__im__95);
#line 923
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 923
c_rt_lib0copy(&___nl__im__97, ___nl__im__96);
#line 923
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(101), ___nl__im__97);
#line 923
c_rt_lib0clear(&___nl__im__96);
#line 923
c_rt_lib0clear(&___nl__im__97);
#line 924
goto label_483;
#line 924
label_299:
;
#line 924
c_rt_lib0move(&___nl__im__98,___get_global_string_const(210));
#line 924
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__98);
#line 924
c_rt_lib0clear(&___nl__im__98);
#line 924
___nl__bool__38 = !___nl__bool__38;
#line 924
if(___nl__bool__38){ goto label_311;}
#line 925
c_rt_lib0move(&___nl__im__99, c_rt_lib0ov_mk_none(___get_global_string_const(85)));
#line 925
c_rt_lib0copy(&___nl__im__100, ___nl__im__99);
#line 925
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__100);
#line 925
c_rt_lib0clear(&___nl__im__99);
#line 925
c_rt_lib0clear(&___nl__im__100);
#line 926
goto label_483;
#line 926
label_311:
;
#line 926
c_rt_lib0move(&___nl__im__101,___get_global_string_const(211));
#line 926
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__101);
#line 926
c_rt_lib0clear(&___nl__im__101);
#line 926
___nl__bool__38 = !___nl__bool__38;
#line 926
if(___nl__bool__38){ goto label_323;}
#line 927
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_none(___get_global_string_const(86)));
#line 927
c_rt_lib0copy(&___nl__im__103, ___nl__im__102);
#line 927
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__103);
#line 927
c_rt_lib0clear(&___nl__im__102);
#line 927
c_rt_lib0clear(&___nl__im__103);
#line 928
goto label_483;
#line 928
label_323:
;
#line 928
c_rt_lib0move(&___nl__im__104,___get_global_string_const(212));
#line 928
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__104);
#line 928
c_rt_lib0clear(&___nl__im__104);
#line 928
___nl__bool__38 = !___nl__bool__38;
#line 928
if(___nl__bool__38){ goto label_335;}
#line 929
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_none(___get_global_string_const(87)));
#line 929
c_rt_lib0copy(&___nl__im__106, ___nl__im__105);
#line 929
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__106);
#line 929
c_rt_lib0clear(&___nl__im__105);
#line 929
c_rt_lib0clear(&___nl__im__106);
#line 930
goto label_483;
#line 930
label_335:
;
#line 930
c_rt_lib0move(&___nl__im__107,___get_global_string_const(213));
#line 930
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__107);
#line 930
c_rt_lib0clear(&___nl__im__107);
#line 930
___nl__bool__38 = !___nl__bool__38;
#line 930
if(___nl__bool__38){ goto label_347;}
#line 931
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_none(___get_global_string_const(88)));
#line 931
c_rt_lib0copy(&___nl__im__109, ___nl__im__108);
#line 931
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__109);
#line 931
c_rt_lib0clear(&___nl__im__108);
#line 931
c_rt_lib0clear(&___nl__im__109);
#line 932
goto label_483;
#line 932
label_347:
;
#line 932
c_rt_lib0move(&___nl__im__110,___get_global_string_const(214));
#line 932
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__110);
#line 932
c_rt_lib0clear(&___nl__im__110);
#line 932
___nl__bool__38 = !___nl__bool__38;
#line 932
if(___nl__bool__38){ goto label_359;}
#line 933
c_rt_lib0move(&___nl__im__111, c_rt_lib0ov_mk_none(___get_global_string_const(89)));
#line 933
c_rt_lib0copy(&___nl__im__112, ___nl__im__111);
#line 933
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(100), ___nl__im__112);
#line 933
c_rt_lib0clear(&___nl__im__111);
#line 933
c_rt_lib0clear(&___nl__im__112);
#line 934
goto label_483;
#line 934
label_359:
;
#line 934
c_rt_lib0move(&___nl__im__113,___get_global_string_const(215));
#line 934
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__113);
#line 934
c_rt_lib0clear(&___nl__im__113);
#line 934
___nl__bool__38 = !___nl__bool__38;
#line 934
if(___nl__bool__38){ goto label_371;}
#line 935
c_rt_lib0move(&___nl__im__114, c_rt_lib0ov_mk_none(___get_global_string_const(96)));
#line 935
c_rt_lib0copy(&___nl__im__115, ___nl__im__114);
#line 935
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(104), ___nl__im__115);
#line 935
c_rt_lib0clear(&___nl__im__114);
#line 935
c_rt_lib0clear(&___nl__im__115);
#line 936
goto label_483;
#line 936
label_371:
;
#line 936
c_rt_lib0move(&___nl__im__116,___get_global_string_const(105));
#line 936
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__116);
#line 936
c_rt_lib0clear(&___nl__im__116);
#line 936
___nl__bool__38 = !___nl__bool__38;
#line 936
if(___nl__bool__38){ goto label_383;}
#line 937
___nl__bool__117 = true;
#line 937
c_rt_lib0move(&___nl__im__118, c_rt_lib0bool_to_nl_native(___nl__bool__117));
#line 937
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(105), ___nl__im__118);
#line 937
//clear ___nl__bool__117;
#line 937
c_rt_lib0clear(&___nl__im__118);
#line 938
goto label_483;
#line 938
label_383:
;
#line 938
c_rt_lib0move(&___nl__im__119,___get_global_string_const(106));
#line 938
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__119);
#line 938
c_rt_lib0clear(&___nl__im__119);
#line 938
___nl__bool__38 = !___nl__bool__38;
#line 938
if(___nl__bool__38){ goto label_395;}
#line 939
___nl__bool__120 = true;
#line 939
c_rt_lib0move(&___nl__im__121, c_rt_lib0bool_to_nl_native(___nl__bool__120));
#line 939
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(106), ___nl__im__121);
#line 939
//clear ___nl__bool__120;
#line 939
c_rt_lib0clear(&___nl__im__121);
#line 940
goto label_483;
#line 940
label_395:
;
#line 940
c_rt_lib0move(&___nl__im__122,___get_global_string_const(70));
#line 940
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__122);
#line 940
c_rt_lib0clear(&___nl__im__122);
#line 940
___nl__bool__38 = !___nl__bool__38;
#line 940
if(___nl__bool__38){ goto label_443;}
#line 941
___nl__int__123 = 1;
#line 941
___nl__int__17 = ___nl__int__17 + ___nl__int__123;
#line 941
//clear ___nl__int__123;
#line 942
___nl__int__125 = c_rt_lib0array_len(___nl__im__0);
#line 942
___nl__bool__124 = ___nl__int__17 < ___nl__int__125;
#line 942
//clear ___nl__int__125;
#line 942
___nl__bool__124 = !___nl__bool__124;
#line 942
___nl__bool__124 = !___nl__bool__124;
#line 942
if(___nl__bool__124){ goto label_413;}
#line 942
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_mk(0));
#line 942
nl_die_arg(___nl__im__126);
#line 942
goto label_413;
#line 942
label_413:
;
#line 942
//clear ___nl__bool__124;
#line 942
c_rt_lib0clear(&___nl__im__126);
#line 944
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 944
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__129, ___get_global_string_const(66));
#line 944
c_rt_lib0clear(&___nl__im__129);
#line 944
___nl__bool__128 = !___nl__bool__128;
#line 944
if(___nl__bool__128){ goto label_427;}
#line 945
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 945
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 945
c_rt_lib0move(&___nl__im__127, c_rt_lib0priv_as(___nl__im__131, ___get_global_string_const(66)));
#line 945
c_rt_lib0clear(&___nl__im__130);
#line 945
c_rt_lib0clear(&___nl__im__131);
#line 946
goto label_430;
#line 946
label_427:
;
#line 947
c_rt_lib0move(&___nl__im__127, compiler_priv0get_default_js_opts());
#line 948
goto label_430;
#line 948
label_430:
;
#line 948
//clear ___nl__bool__128;
#line 949
c_rt_lib0move(&___nl__im__132, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 949
c_rt_lib0copy(&___nl__im__133, ___nl__im__132);
#line 949
c_rt_lib0hash_set_value_dec(&___nl__im__127, ___get_global_string_const(70), ___nl__im__133);
#line 949
c_rt_lib0clear(&___nl__im__132);
#line 949
c_rt_lib0clear(&___nl__im__133);
#line 950
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__127));
#line 950
c_rt_lib0copy(&___nl__im__135, ___nl__im__134);
#line 950
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__135);
#line 950
c_rt_lib0clear(&___nl__im__134);
#line 950
c_rt_lib0clear(&___nl__im__135);
#line 951
goto label_483;
#line 951
label_443:
;
#line 951
c_rt_lib0move(&___nl__im__136,___get_global_string_const(216));
#line 951
___nl__bool__38 = c_rt_lib0eq(___nl__im__31, ___nl__im__136);
#line 951
c_rt_lib0clear(&___nl__im__136);
#line 951
___nl__bool__38 = !___nl__bool__38;
#line 951
if(___nl__bool__38){ goto label_476;}
#line 953
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 953
___nl__bool__138 = c_rt_lib0priv_is(___nl__im__139, ___get_global_string_const(66));
#line 953
c_rt_lib0clear(&___nl__im__139);
#line 953
___nl__bool__138 = !___nl__bool__138;
#line 953
if(___nl__bool__138){ goto label_460;}
#line 954
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 954
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(103)));
#line 954
c_rt_lib0move(&___nl__im__137, c_rt_lib0priv_as(___nl__im__141, ___get_global_string_const(66)));
#line 954
c_rt_lib0clear(&___nl__im__140);
#line 954
c_rt_lib0clear(&___nl__im__141);
#line 955
goto label_463;
#line 955
label_460:
;
#line 956
c_rt_lib0move(&___nl__im__137, compiler_priv0get_default_js_opts());
#line 957
goto label_463;
#line 957
label_463:
;
#line 957
//clear ___nl__bool__138;
#line 958
___nl__bool__142 = true;
#line 958
c_rt_lib0move(&___nl__im__143, c_rt_lib0bool_to_nl_native(___nl__bool__142));
#line 958
c_rt_lib0hash_set_value_dec(&___nl__im__137, ___get_global_string_const(71), ___nl__im__143);
#line 958
//clear ___nl__bool__142;
#line 958
c_rt_lib0clear(&___nl__im__143);
#line 959
c_rt_lib0move(&___nl__im__144, c_rt_lib0ov_mk_arg(___get_global_string_const(66), ___nl__im__137));
#line 959
c_rt_lib0copy(&___nl__im__145, ___nl__im__144);
#line 959
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(103), ___nl__im__145);
#line 959
c_rt_lib0clear(&___nl__im__144);
#line 959
c_rt_lib0clear(&___nl__im__145);
#line 960
goto label_483;
#line 960
label_476:
;
#line 961
c_rt_lib0move(&___nl__im__147,___get_global_string_const(217));
#line 961
c_rt_lib0move(&___nl__im__146, c_rt_lib0concat_new(___nl__im__147, ___nl__im__20));
#line 961
c_rt_lib0clear(&___nl__im__147);
#line 961
c_rt_lib0delete(c_fe_lib0print(___nl__im__146));
#line 961
c_rt_lib0clear(&___nl__im__146);
#line 962
goto label_483;
#line 962
label_483:
;
#line 962
//clear ___nl__bool__38;
#line 962
c_rt_lib0clear(&___nl__im__127);
#line 962
c_rt_lib0clear(&___nl__im__137);
#line 963
goto label_510;
#line 963
label_488:
;
#line 964
___nl__bool__148 = ___nl__bool__15;
#line 964
___nl__bool__148 = !___nl__bool__148;
#line 964
___nl__bool__148 = !___nl__bool__148;
#line 964
if(___nl__bool__148){ goto label_499;}
#line 964
c_rt_lib0move(&___nl__im__149, c_rt_lib0array_mk(0));
#line 964
c_rt_lib0copy(&___nl__im__150, ___nl__im__149);
#line 964
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(97), ___nl__im__150);
#line 964
c_rt_lib0clear(&___nl__im__149);
#line 964
c_rt_lib0clear(&___nl__im__150);
#line 964
goto label_499;
#line 964
label_499:
;
#line 964
//clear ___nl__bool__148;
#line 965
c_rt_lib0move(&___nl__im__151,___get_global_string_const(97));
#line 965
c_rt_lib0move(&___nl__im__151, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__151));
#line 965
c_rt_lib0delete(array0push(&___nl__im__151, ___nl__im__20));
#line 965
c_rt_lib0move(&___nl__string__152,___get_global_string_const(97));
#line 965
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__152, ___nl__im__151));
#line 965
c_rt_lib0clear(&___nl__im__151);
#line 965
c_rt_lib0clear(&___nl__string__152);
#line 966
___nl__bool__15 = true;
#line 967
goto label_510;
#line 967
label_510:
;
#line 967
//clear ___nl__bool__21;
#line 967
c_rt_lib0clear(&___nl__im__31);
#line 967
c_rt_lib0clear(&___nl__im__20);
#line 885
___nl__int__153 = 1;
#line 885
___nl__int__17 = ___nl__int__17 + ___nl__int__153;
#line 885
//clear ___nl__int__153;
#line 968
goto label_30;
#line 968
label_518:
;
#line 969
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 969
c_rt_lib0move(&___nl__im__156,___get_global_string_const(36));
#line 969
___nl__bool__154 = c_rt_lib0eq(___nl__im__155, ___nl__im__156);
#line 969
c_rt_lib0clear(&___nl__im__155);
#line 969
c_rt_lib0clear(&___nl__im__156);
#line 969
___nl__bool__154 = !___nl__bool__154;
#line 969
if(___nl__bool__154){ goto label_538;}
#line 970
c_rt_lib0move(&___nl__im__159,___get_global_string_const(218));
#line 970
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__16));
#line 970
c_rt_lib0clear(&___nl__im__159);
#line 970
c_rt_lib0move(&___nl__im__160,___get_global_string_const(118));
#line 970
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__158, ___nl__im__160));
#line 970
c_rt_lib0clear(&___nl__im__158);
#line 970
c_rt_lib0clear(&___nl__im__160);
#line 970
c_rt_lib0copy(&___nl__im__161, ___nl__im__157);
#line 970
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(98), ___nl__im__161);
#line 970
c_rt_lib0clear(&___nl__im__157);
#line 970
c_rt_lib0clear(&___nl__im__161);
#line 971
goto label_538;
#line 971
label_538:
;
#line 971
//clear ___nl__bool__154;
#line 972
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(99)));
#line 972
___nl__bool__162 = c_rt_lib0priv_is(___nl__im__163, ___get_global_string_const(80));
#line 972
c_rt_lib0clear(&___nl__im__163);
#line 972
___nl__bool__162 = !___nl__bool__162;
#line 972
if(___nl__bool__162){ goto label_557;}
#line 972
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(98)));
#line 972
c_rt_lib0move(&___nl__im__167, compiler_priv0get_default_deref_file());
#line 972
c_rt_lib0move(&___nl__im__165, c_rt_lib0concat_new(___nl__im__166, ___nl__im__167));
#line 972
c_rt_lib0clear(&___nl__im__166);
#line 972
c_rt_lib0clear(&___nl__im__167);
#line 972
c_rt_lib0move(&___nl__im__164, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__165));
#line 972
c_rt_lib0clear(&___nl__im__165);
#line 972
c_rt_lib0copy(&___nl__im__168, ___nl__im__164);
#line 972
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(99), ___nl__im__168);
#line 972
c_rt_lib0clear(&___nl__im__164);
#line 972
c_rt_lib0clear(&___nl__im__168);
#line 972
goto label_557;
#line 972
label_557:
;
#line 972
//clear ___nl__bool__162;
#line 973
c_rt_lib0clear(&___nl__im__0);
#line 973
//clear ___nl__bool__15;
#line 973
c_rt_lib0clear(&___nl__im__16);
#line 973
//clear ___nl__int__17;
#line 973
//clear ___nl__bool__18;
#line 973
c_rt_lib0clear(&___nl__im__20);
#line 973
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
#line 978
c_rt_lib0move(&___nl__im__1,___get_global_string_const(67));
#line 979
___nl__bool__2 = false;
#line 979
c_rt_lib0move(&___nl__im__3, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 979
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_string_const(70), ___nl__im__1, ___get_global_string_const(71), ___nl__im__3));
#line 979
c_rt_lib0clear(&___nl__im__1);
#line 979
//clear ___nl__bool__2;
#line 979
c_rt_lib0clear(&___nl__im__3);
#line 979
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
ImmT  ___nl__im__25 = NULL;
#line 984
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 985
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 985
___nl__int__4 = 0;
#line 985
___nl__int__5 = 1;
#line 985
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 985
label_5:
;
#line 985
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 985
if(___nl__bool__7){ goto label_46;}
#line 985
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 985
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 986
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(220)));
#line 986
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(221)));
#line 986
c_rt_lib0clear(&___nl__im__10);
#line 987
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 988
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(113)));
#line 988
___nl__int__14 = 0;
#line 988
___nl__int__15 = 1;
#line 988
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 988
label_18:
;
#line 988
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 988
if(___nl__bool__17){ goto label_33;}
#line 988
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 988
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 989
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(221)));
#line 989
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(111)));
#line 989
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(110), ___nl__im__20, ___get_global_string_const(111), ___nl__im__21));
#line 989
c_rt_lib0clear(&___nl__im__20);
#line 989
c_rt_lib0clear(&___nl__im__21);
#line 989
c_rt_lib0array_push(&___nl__im__11, ___nl__im__19);
#line 989
c_rt_lib0clear(&___nl__im__19);
#line 989
c_rt_lib0clear(&___nl__im__13);
#line 990
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 990
goto label_18;
#line 990
label_33:
;
#line 991
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(114)));
#line 991
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(3, ___get_global_string_const(112), ___nl__im__9, ___get_global_string_const(113), ___nl__im__11, ___get_global_string_const(114), ___nl__im__23));
#line 991
c_rt_lib0clear(&___nl__im__23);
#line 991
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(185)));
#line 991
c_rt_lib0copy(&___nl__im__24, ___nl__im__22);
#line 991
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__1, ___nl__im__25, ___nl__im__24));
#line 991
c_rt_lib0clear(&___nl__im__22);
#line 991
c_rt_lib0clear(&___nl__im__24);
#line 991
c_rt_lib0clear(&___nl__im__25);
#line 991
c_rt_lib0clear(&___nl__im__3);
#line 992
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 992
goto label_5;
#line 992
label_46:
;
#line 993
c_rt_lib0clear(&___nl__im__0);
#line 993
c_rt_lib0clear(&___nl__im__2);
#line 993
c_rt_lib0clear(&___nl__im__3);
#line 993
//clear ___nl__int__4;
#line 993
//clear ___nl__int__5;
#line 993
//clear ___nl__int__6;
#line 993
//clear ___nl__bool__7;
#line 993
c_rt_lib0clear(&___nl__im__8);
#line 993
c_rt_lib0clear(&___nl__im__9);
#line 993
c_rt_lib0clear(&___nl__im__11);
#line 993
c_rt_lib0clear(&___nl__im__12);
#line 993
c_rt_lib0clear(&___nl__im__13);
#line 993
//clear ___nl__int__14;
#line 993
//clear ___nl__int__15;
#line 993
//clear ___nl__int__16;
#line 993
//clear ___nl__bool__17;
#line 993
c_rt_lib0clear(&___nl__im__18);
#line 993
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
#line 997
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__1));
#line 997
label_1:
;
#line 997
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 997
if(___nl__bool__3){ goto label_49;}
#line 997
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 997
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__2));
#line 998
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(222)));
#line 998
___nl__int__8 = 0;
#line 998
___nl__int__9 = 1;
#line 998
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 998
label_10:
;
#line 998
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 998
if(___nl__bool__11){ goto label_32;}
#line 998
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 998
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 999
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(223)));
#line 999
___nl__int__15 = 0;
#line 999
___nl__int__16 = 1;
#line 999
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 999
label_19:
;
#line 999
___nl__bool__18 = ___nl__int__15 >= ___nl__int__17;
#line 999
if(___nl__bool__18){ goto label_28;}
#line 999
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 999
c_rt_lib0copy(&___nl__im__14, ___nl__im__19);
#line 1000
c_rt_lib0delete(compiler_priv0add_cmd_to_called_from(___ref___im__0, ___nl__im__14, ___nl__im__2));
#line 1000
c_rt_lib0clear(&___nl__im__14);
#line 1001
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 1001
goto label_19;
#line 1001
label_28:
;
#line 1001
c_rt_lib0clear(&___nl__im__7);
#line 1002
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 1002
goto label_10;
#line 1002
label_32:
;
#line 1002
c_rt_lib0clear(&___nl__im__6);
#line 1002
c_rt_lib0clear(&___nl__im__7);
#line 1002
//clear ___nl__int__8;
#line 1002
//clear ___nl__int__9;
#line 1002
//clear ___nl__int__10;
#line 1002
//clear ___nl__bool__11;
#line 1002
c_rt_lib0clear(&___nl__im__12);
#line 1002
c_rt_lib0clear(&___nl__im__13);
#line 1002
c_rt_lib0clear(&___nl__im__14);
#line 1002
//clear ___nl__int__15;
#line 1002
//clear ___nl__int__16;
#line 1002
//clear ___nl__int__17;
#line 1002
//clear ___nl__bool__18;
#line 1002
c_rt_lib0clear(&___nl__im__19);
#line 1003
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 1003
goto label_1;
#line 1003
label_49:
;
#line 1003
c_rt_lib0clear(&___nl__im__1);
#line 1003
c_rt_lib0clear(&___nl__im__2);
#line 1003
//clear ___nl__bool__3;
#line 1003
c_rt_lib0clear(&___nl__im__4);
#line 1003
c_rt_lib0clear(&___nl__im__5);
#line 1003
c_rt_lib0clear(&___nl__im__6);
#line 1003
c_rt_lib0clear(&___nl__im__7);
#line 1003
//clear ___nl__int__8;
#line 1003
//clear ___nl__int__9;
#line 1003
//clear ___nl__int__10;
#line 1003
//clear ___nl__bool__11;
#line 1003
c_rt_lib0clear(&___nl__im__12);
#line 1003
c_rt_lib0clear(&___nl__im__13);
#line 1003
c_rt_lib0clear(&___nl__im__14);
#line 1003
//clear ___nl__int__15;
#line 1003
//clear ___nl__int__16;
#line 1003
//clear ___nl__int__17;
#line 1003
//clear ___nl__bool__18;
#line 1003
c_rt_lib0clear(&___nl__im__19);
#line 1003
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
#line 1008
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1008
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(225));
#line 1008
c_rt_lib0clear(&___nl__im__4);
#line 1008
___nl__bool__3 = !___nl__bool__3;
#line 1008
if(___nl__bool__3){ goto label_40;}
#line 1009
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1009
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1009
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(225)));
#line 1009
c_rt_lib0clear(&___nl__im__6);
#line 1009
c_rt_lib0clear(&___nl__im__7);
#line 1010
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(111)));
#line 1010
c_rt_lib0move(&___nl__im__11,___get_global_string_const(34));
#line 1010
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 1010
c_rt_lib0clear(&___nl__im__10);
#line 1010
c_rt_lib0clear(&___nl__im__11);
#line 1010
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(226)));
#line 1010
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 1010
c_rt_lib0clear(&___nl__im__9);
#line 1010
c_rt_lib0clear(&___nl__im__12);
#line 1011
___nl__bool__13 = hash0has_key((*___ref___im__0), ___nl__im__8);
#line 1011
___nl__bool__13 = !___nl__bool__13;
#line 1011
___nl__bool__13 = !___nl__bool__13;
#line 1011
if(___nl__bool__13){ goto label_29;}
#line 1012
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 1012
c_rt_lib0copy(&___nl__im__15, ___nl__im__14);
#line 1012
c_rt_lib0delete(c_rt_lib0hash_set_value(___ref___im__0, ___nl__im__8, ___nl__im__15));
#line 1012
c_rt_lib0clear(&___nl__im__14);
#line 1012
c_rt_lib0clear(&___nl__im__15);
#line 1013
goto label_29;
#line 1013
label_29:
;
#line 1013
//clear ___nl__bool__13;
#line 1014
___nl__int__16 = 1;
#line 1014
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__8));
#line 1014
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 1014
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__17, ___nl__im__2, ___nl__im__18));
#line 1014
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__im__8, ___nl__im__17));
#line 1014
//clear ___nl__int__16;
#line 1014
c_rt_lib0clear(&___nl__im__17);
#line 1014
c_rt_lib0clear(&___nl__im__18);
#line 1015
goto label_40;
#line 1015
label_40:
;
#line 1015
//clear ___nl__bool__3;
#line 1015
c_rt_lib0clear(&___nl__im__5);
#line 1015
c_rt_lib0clear(&___nl__im__8);
#line 1015
c_rt_lib0clear(&___nl__im__1);
#line 1015
c_rt_lib0clear(&___nl__im__2);
#line 1015
return NULL;
return NULL;

}

ImmT  compiler_priv0get_defined_types(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
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
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
#line 1019
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 1020
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 1020
label_2:
;
#line 1020
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 1020
if(___nl__bool__3){ goto label_60;}
#line 1020
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 1020
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 1021
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(219)));
#line 1021
___nl__int__8 = 0;
#line 1021
___nl__int__9 = 1;
#line 1021
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 1021
label_11:
;
#line 1021
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 1021
if(___nl__bool__11){ goto label_45;}
#line 1021
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 1021
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 1022
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(114)));
#line 1022
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(81));
#line 1022
if(___nl__bool__14){ goto label_24;}
#line 1023
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(80));
#line 1023
if(___nl__bool__14){ goto label_26;}
#line 1023
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 1023
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 1023
nl_die_arg(___nl__im__15);
#line 1022
label_24:
;
#line 1023
goto label_41;
#line 1023
label_26:
;
#line 1023
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(80)));
#line 1023
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1024
c_rt_lib0move(&___nl__im__21,___get_global_string_const(34));
#line 1024
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__2, ___nl__im__21));
#line 1024
c_rt_lib0clear(&___nl__im__21);
#line 1024
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(185)));
#line 1024
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 1024
c_rt_lib0clear(&___nl__im__20);
#line 1024
c_rt_lib0clear(&___nl__im__22);
#line 1024
c_rt_lib0copy(&___nl__im__18, ___nl__im__16);
#line 1024
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__1, ___nl__im__19, ___nl__im__18));
#line 1024
c_rt_lib0clear(&___nl__im__18);
#line 1024
c_rt_lib0clear(&___nl__im__19);
#line 1025
goto label_41;
#line 1025
label_41:
;
#line 1025
c_rt_lib0clear(&___nl__im__7);
#line 1026
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 1026
goto label_11;
#line 1026
label_45:
;
#line 1026
c_rt_lib0clear(&___nl__im__6);
#line 1026
c_rt_lib0clear(&___nl__im__7);
#line 1026
//clear ___nl__int__8;
#line 1026
//clear ___nl__int__9;
#line 1026
//clear ___nl__int__10;
#line 1026
//clear ___nl__bool__11;
#line 1026
c_rt_lib0clear(&___nl__im__12);
#line 1026
c_rt_lib0clear(&___nl__im__13);
#line 1026
//clear ___nl__bool__14;
#line 1026
c_rt_lib0clear(&___nl__im__15);
#line 1026
c_rt_lib0clear(&___nl__im__16);
#line 1026
c_rt_lib0clear(&___nl__im__17);
#line 1027
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 1027
goto label_2;
#line 1027
label_60:
;
#line 1028
c_rt_lib0clear(&___nl__im__0);
#line 1028
c_rt_lib0clear(&___nl__im__2);
#line 1028
//clear ___nl__bool__3;
#line 1028
c_rt_lib0clear(&___nl__im__4);
#line 1028
c_rt_lib0clear(&___nl__im__5);
#line 1028
c_rt_lib0clear(&___nl__im__6);
#line 1028
c_rt_lib0clear(&___nl__im__7);
#line 1028
//clear ___nl__int__8;
#line 1028
//clear ___nl__int__9;
#line 1028
//clear ___nl__int__10;
#line 1028
//clear ___nl__bool__11;
#line 1028
c_rt_lib0clear(&___nl__im__12);
#line 1028
c_rt_lib0clear(&___nl__im__13);
#line 1028
//clear ___nl__bool__14;
#line 1028
c_rt_lib0clear(&___nl__im__15);
#line 1028
c_rt_lib0clear(&___nl__im__16);
#line 1028
c_rt_lib0clear(&___nl__im__17);
#line 1028
return ___nl__im__1;
return NULL;

}

bool  compiler_priv0own_type_changed(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
compiler_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
#line 1034
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(81));
#line 1034
if(___nl__bool__3){ goto label_7;}
#line 1040
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(80));
#line 1040
if(___nl__bool__3){ goto label_44;}
#line 1040
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 1040
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 1040
nl_die_arg(___nl__im__4);
#line 1034
label_7:
;
#line 1035
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(81));
#line 1035
if(___nl__bool__5){ goto label_15;}
#line 1037
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(80));
#line 1037
if(___nl__bool__5){ goto label_26;}
#line 1037
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1037
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__1));
#line 1037
nl_die_arg(___nl__im__6);
#line 1035
label_15:
;
#line 1036
___nl__bool__7 = false;
#line 1036
c_rt_lib0clear(&___nl__im__0);
#line 1036
c_rt_lib0clear(&___nl__im__1);
#line 1036
c_rt_lib0clear(&___nl__im__2);
#line 1036
//clear ___nl__bool__3;
#line 1036
c_rt_lib0clear(&___nl__im__4);
#line 1036
//clear ___nl__bool__5;
#line 1036
c_rt_lib0clear(&___nl__im__6);
#line 1036
return ___nl__bool__7;
#line 1037
goto label_42;
#line 1037
label_26:
;
#line 1037
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(80)));
#line 1037
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1038
___nl__bool__10 = tct0is_own_type(___nl__im__8, ___nl__im__2);
#line 1038
c_rt_lib0clear(&___nl__im__0);
#line 1038
c_rt_lib0clear(&___nl__im__1);
#line 1038
c_rt_lib0clear(&___nl__im__2);
#line 1038
//clear ___nl__bool__3;
#line 1038
c_rt_lib0clear(&___nl__im__4);
#line 1038
//clear ___nl__bool__5;
#line 1038
c_rt_lib0clear(&___nl__im__6);
#line 1038
//clear ___nl__bool__7;
#line 1038
c_rt_lib0clear(&___nl__im__8);
#line 1038
c_rt_lib0clear(&___nl__im__9);
#line 1038
return ___nl__bool__10;
#line 1039
goto label_42;
#line 1039
label_42:
;
#line 1040
goto label_137;
#line 1040
label_44:
;
#line 1040
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(80)));
#line 1040
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1041
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(81));
#line 1041
if(___nl__bool__13){ goto label_54;}
#line 1043
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(80));
#line 1043
if(___nl__bool__13){ goto label_73;}
#line 1043
c_rt_lib0move(&___nl__im__14,___get_global_string_const(15));
#line 1043
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__1));
#line 1043
nl_die_arg(___nl__im__14);
#line 1041
label_54:
;
#line 1042
___nl__bool__15 = tct0is_own_type(___nl__im__11, ___nl__im__2);
#line 1042
c_rt_lib0clear(&___nl__im__0);
#line 1042
c_rt_lib0clear(&___nl__im__1);
#line 1042
c_rt_lib0clear(&___nl__im__2);
#line 1042
//clear ___nl__bool__3;
#line 1042
c_rt_lib0clear(&___nl__im__4);
#line 1042
//clear ___nl__bool__5;
#line 1042
c_rt_lib0clear(&___nl__im__6);
#line 1042
//clear ___nl__bool__7;
#line 1042
c_rt_lib0clear(&___nl__im__8);
#line 1042
c_rt_lib0clear(&___nl__im__9);
#line 1042
//clear ___nl__bool__10;
#line 1042
c_rt_lib0clear(&___nl__im__11);
#line 1042
c_rt_lib0clear(&___nl__im__12);
#line 1042
//clear ___nl__bool__13;
#line 1042
c_rt_lib0clear(&___nl__im__14);
#line 1042
return ___nl__bool__15;
#line 1043
goto label_135;
#line 1043
label_73:
;
#line 1043
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(80)));
#line 1043
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1044
c_rt_lib0move(&___nl__im__19, dfile0deep_eq(___nl__im__11, ___nl__im__16));
#line 1044
___nl__bool__18 = c_rt_lib0check_true_native(___nl__im__19);
#line 1044
c_rt_lib0clear(&___nl__im__19);
#line 1044
___nl__bool__18 = !___nl__bool__18;
#line 1044
if(___nl__bool__18){ goto label_103;}
#line 1045
___nl__bool__20 = false;
#line 1045
c_rt_lib0clear(&___nl__im__0);
#line 1045
c_rt_lib0clear(&___nl__im__1);
#line 1045
c_rt_lib0clear(&___nl__im__2);
#line 1045
//clear ___nl__bool__3;
#line 1045
c_rt_lib0clear(&___nl__im__4);
#line 1045
//clear ___nl__bool__5;
#line 1045
c_rt_lib0clear(&___nl__im__6);
#line 1045
//clear ___nl__bool__7;
#line 1045
c_rt_lib0clear(&___nl__im__8);
#line 1045
c_rt_lib0clear(&___nl__im__9);
#line 1045
//clear ___nl__bool__10;
#line 1045
c_rt_lib0clear(&___nl__im__11);
#line 1045
c_rt_lib0clear(&___nl__im__12);
#line 1045
//clear ___nl__bool__13;
#line 1045
c_rt_lib0clear(&___nl__im__14);
#line 1045
//clear ___nl__bool__15;
#line 1045
c_rt_lib0clear(&___nl__im__16);
#line 1045
c_rt_lib0clear(&___nl__im__17);
#line 1045
//clear ___nl__bool__18;
#line 1045
return ___nl__bool__20;
#line 1046
goto label_130;
#line 1046
label_103:
;
#line 1047
___nl__bool__21 = tct0is_own_type(___nl__im__16, ___nl__im__2);
#line 1047
if(___nl__bool__21){ goto label_107;}
#line 1047
___nl__bool__21 = tct0is_own_type(___nl__im__11, ___nl__im__2);
#line 1047
label_107:
;
#line 1047
c_rt_lib0clear(&___nl__im__0);
#line 1047
c_rt_lib0clear(&___nl__im__1);
#line 1047
c_rt_lib0clear(&___nl__im__2);
#line 1047
//clear ___nl__bool__3;
#line 1047
c_rt_lib0clear(&___nl__im__4);
#line 1047
//clear ___nl__bool__5;
#line 1047
c_rt_lib0clear(&___nl__im__6);
#line 1047
//clear ___nl__bool__7;
#line 1047
c_rt_lib0clear(&___nl__im__8);
#line 1047
c_rt_lib0clear(&___nl__im__9);
#line 1047
//clear ___nl__bool__10;
#line 1047
c_rt_lib0clear(&___nl__im__11);
#line 1047
c_rt_lib0clear(&___nl__im__12);
#line 1047
//clear ___nl__bool__13;
#line 1047
c_rt_lib0clear(&___nl__im__14);
#line 1047
//clear ___nl__bool__15;
#line 1047
c_rt_lib0clear(&___nl__im__16);
#line 1047
c_rt_lib0clear(&___nl__im__17);
#line 1047
//clear ___nl__bool__18;
#line 1047
//clear ___nl__bool__20;
#line 1047
return ___nl__bool__21;
#line 1048
goto label_130;
#line 1048
label_130:
;
#line 1048
//clear ___nl__bool__18;
#line 1048
//clear ___nl__bool__20;
#line 1048
//clear ___nl__bool__21;
#line 1049
goto label_135;
#line 1049
label_135:
;
#line 1050
goto label_137;
#line 1050
label_137:
;
return false;

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
