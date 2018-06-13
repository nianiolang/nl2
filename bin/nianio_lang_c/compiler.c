
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
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "boolean_t.h"
#include "pretty_printer.h"
#include "generator_c.h"
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
#include "boolean_t.h"
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

void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE rec) {
generator_c0const_t0type0clean(rec.sim0field);;
generator_c0const_t0type0clean(rec.singleton0field);;
;
}
void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0free(anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE *rec) {
compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
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
bool *compiler0anon_type00ownhashanon_type00refbool0get_ptr(anon_type00ownhashanon_type00refbool *hash, ImmT key, bool create_if_not_exist) {
if (hash->values == NULL) {
	hash->capacity = 16;
	hash->size = 0;
	hash->values = alloc_mem(hash->capacity*sizeof(bool));
	hash->keys = alloc_mem(hash->capacity*sizeof(ImmT ));
	memset(hash->values, 0, hash->capacity*sizeof(bool));
	memset(hash->keys, 0, hash->capacity*sizeof(ImmT ));
} else if (2*hash->size >= hash->capacity) {
	INT  old_capacity = hash->capacity;
	ImmT  *old_keys = hash->keys;
	bool *old_values = hash->values;
	hash->capacity *= 2;
	hash->values = alloc_mem(hash->capacity*sizeof(bool));
	hash->keys = alloc_mem(hash->capacity*sizeof(ImmT ));
	memset(hash->values, 0, hash->capacity*sizeof(bool));
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
free_mem(old_values, old_capacity*sizeof(bool));
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
INT compiler0anon_type00ownhashanon_type00refbool0next_iter(anon_type00ownhashanon_type00refbool *hash, INT last_iter){
	INT iter = last_iter + 1;
	while (iter + 1 < hash->capacity && hash->keys[iter] == NULL) {
		iter++;
	}
	if (iter == hash->capacity || hash->keys[iter] == NULL) return -1;
	return iter;
}
void compiler0anon_type00ownhashanon_type00refbool0clean(anon_type00ownhashanon_type00refbool hash) {
for (unsigned int i = 0; i < hash.capacity; i++) {
	if (hash.keys[i] != NULL) {
		c_rt_lib0delete(hash.keys[i]);
		;
	}
}
free_mem(hash.values, sizeof(bool)*hash.capacity);
free_mem(hash.keys, sizeof(ImmT)*hash.capacity);
}
void compiler0anon_type00ownhashanon_type00refbool0free(anon_type00ownhashanon_type00refbool *hash) {
compiler0anon_type00ownhashanon_type00refbool0clean(*hash);
free_mem(hash, sizeof(*hash));
}
ImmT  compiler_priv0get_dir_cache_name();
ImmT  compiler_priv0get_dir_pretty_name();
ImmT  compiler_priv0get_default_deref_file();
ImmT  compiler_priv0get_default_math_file();
ImmT  compiler_priv0get_profile_file_name(ImmT  ___nl__im__0);
ImmT  compiler_priv0get_module_name(ImmT  ___nl__im__0);
bool compiler_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
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
ImmT  compiler_priv0check_modules(ImmT * ___ref___im__0,compiler0errors_group_t0type* ___ref___im__1,compiler0deref_t0type ___nl__im__2,bool ___nl__bool__3);
ImmT  compiler_priv0serialize_deref(tc_types0deref_types0type ___nl__im__0,reference_generator0refs0type ___nl__im__1);
reference_generator0refs0type compiler_priv0process_deref(tc_types0deref_types0type ___nl__im__0);
ImmT  compiler_priv0try_save_file(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  compiler_priv0generate_modules_to_files(ImmT  ___nl__im__0,compiler0module_t0type ___nl__im__1,ImmT  ___nl__im__2,generator_c0state_t0type* ___ref___rec__3,compiler0language_t0type ___nl__im__4);
compiler0file_t0type compiler_priv0save_module_to_file(nast0module_t0type ___nl__im__0,compiler0destination_t0type ___nl__im__1);
ImmT  compiler_priv0get_dir(ImmT  ___nl__im__0);
compiler0input_type0type compiler_priv0parse_command_line_args(ImmT  ___nl__im__0);


ImmT  compiler_priv0get_dir_cache_name() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 33
c_rt_lib0move(&___nl__im__0,___get_global_const(42));
#line 33
return ___nl__im__0;
}

ImmT  compiler_priv0get_dir_pretty_name() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 37
c_rt_lib0move(&___nl__im__0,___get_global_const(43));
#line 37
return ___nl__im__0;
}

ImmT  compiler_priv0get_default_deref_file() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 41
c_rt_lib0move(&___nl__im__0,___get_global_const(44));
#line 41
return ___nl__im__0;
}

ImmT  compiler_priv0get_default_math_file() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 45
c_rt_lib0move(&___nl__im__0,___get_global_const(45));
#line 45
return ___nl__im__0;
}

ImmT  compiler0parse_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0parse_check_t");
return compiler0parse_check_t();
}
ImmT  compiler0parse_check_t() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 50
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(46), ___get_global_const(47)));
#line 50
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 50
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 50
c_rt_lib0clear(&___nl__im__3);
#line 51
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 51
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 51
c_rt_lib0clear(&___nl__im__5);
#line 52
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(48), ___get_global_const(49)));
#line 52
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 52
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(50), ___nl__im__2, ___get_global_const(51), ___nl__im__4, ___get_global_const(52), ___nl__im__6));
#line 52
c_rt_lib0clear(&___nl__im__2);
#line 52
c_rt_lib0clear(&___nl__im__4);
#line 52
c_rt_lib0clear(&___nl__im__6);
#line 52
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 52
c_rt_lib0clear(&___nl__im__1);
#line 52
return ___nl__im__0;
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
return NULL;
}

ImmT  compiler0errors_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_hash_t");
return compiler0errors_hash_t();
}
ImmT  compiler0errors_hash_t() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 57
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(53), ___get_global_const(54)));
#line 57
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 57
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 57
c_rt_lib0clear(&___nl__im__2);
#line 57
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
return ___nl__im__0;
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
return NULL;
}

ImmT  compiler0errors_group_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_group_t");
return compiler0errors_group_t();
}
ImmT  compiler0errors_group_t() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(55), ___get_global_const(56)));
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(55), ___get_global_const(56)));
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(55), ___get_global_const(56)));
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(55), ___get_global_const(56)));
#line 65
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 66
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(module_checker0ret_t0ptr, ___get_global_const(57), ___get_global_const(58)));
#line 66
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 66
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(59), ___nl__im__2, ___get_global_const(60), ___nl__im__3, ___get_global_const(61), ___nl__im__4, ___get_global_const(62), ___nl__im__5, ___get_global_const(63), ___nl__im__6));
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
c_rt_lib0clear(&___nl__im__5);
#line 66
c_rt_lib0clear(&___nl__im__6);
#line 66
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
return ___nl__im__0;
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
return NULL;
}

ImmT  compiler0language_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0language_t");
return compiler0language_t();
}
ImmT  compiler0language_t() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 72
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 73
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 74
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 75
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 76
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 76
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(64), ___nl__im__2, ___get_global_const(65), ___nl__im__3, ___get_global_const(66), ___nl__im__4, ___get_global_const(67), ___nl__im__5, ___get_global_const(68), ___nl__im__6));
#line 76
c_rt_lib0clear(&___nl__im__2);
#line 76
c_rt_lib0clear(&___nl__im__3);
#line 76
c_rt_lib0clear(&___nl__im__4);
#line 76
c_rt_lib0clear(&___nl__im__5);
#line 76
c_rt_lib0clear(&___nl__im__6);
#line 76
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 76
c_rt_lib0clear(&___nl__im__1);
#line 76
return ___nl__im__0;
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
return NULL;
}

ImmT  compiler0destination_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0destination_t");
return compiler0destination_t();
}
ImmT  compiler0destination_t() {
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
#line 82
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 83
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(65), ___nl__im__6, ___get_global_const(69), ___nl__im__7));
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 84
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 85
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 86
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 87
c_rt_lib0move(&___nl__im__10, ptd0string());
#line 88
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 89
c_rt_lib0move(&___nl__im__12, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__13, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_const(70), ___nl__im__2, ___get_global_const(64), ___nl__im__3, ___get_global_const(65), ___nl__im__4, ___get_global_const(66), ___nl__im__8, ___get_global_const(67), ___nl__im__9, ___get_global_const(71), ___nl__im__10, ___get_global_const(72), ___nl__im__11, ___get_global_const(73), ___nl__im__12, ___get_global_const(68), ___nl__im__13));
#line 90
c_rt_lib0clear(&___nl__im__2);
#line 90
c_rt_lib0clear(&___nl__im__3);
#line 90
c_rt_lib0clear(&___nl__im__4);
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0clear(&___nl__im__9);
#line 90
c_rt_lib0clear(&___nl__im__10);
#line 90
c_rt_lib0clear(&___nl__im__11);
#line 90
c_rt_lib0clear(&___nl__im__12);
#line 90
c_rt_lib0clear(&___nl__im__13);
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
}

ImmT  compiler0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0module_t");
return compiler0module_t();
}
ImmT  compiler0module_t() {
compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 95
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_const(55), ___get_global_const(74)));
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 95
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(75), ___nl__im__3, ___get_global_const(76), ___nl__im__4));
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
}

ImmT  compiler0deref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0deref_t");
return compiler0deref_t();
}
ImmT  compiler0deref_t() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(77), ___nl__im__2, ___get_global_const(78), ___nl__im__3));
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
}

ImmT  compiler0try_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0try_t");
return compiler0try_t();
}
ImmT  compiler0try_t() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__2, ___get_global_const(80), ___nl__im__3));
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
}

ImmT  compiler0input_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0input_type");
return compiler0input_type();
}
ImmT  compiler0input_type() {
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_const(55), ___get_global_const(81)));
#line 110
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_const(82), ___nl__im__8, ___get_global_const(83), ___nl__im__9, ___get_global_const(84), ___nl__im__10, ___get_global_const(85), ___nl__im__11, ___get_global_const(86), ___nl__im__12));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(4, ___get_global_const(87), ___nl__im__16, ___get_global_const(88), ___nl__im__17, ___get_global_const(89), ___nl__im__18, ___get_global_const(90), ___nl__im__19));
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
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_const(55), ___get_global_const(91)));
#line 120
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 121
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 121
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(2, ___get_global_const(92), ___nl__im__23, ___get_global_const(93), ___nl__im__24));
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0move(&___nl__im__21, ptd0var(___nl__im__22));
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 122
c_rt_lib0move(&___nl__im__25, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(94), ___get_global_const(95)));
#line 122
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__25));
#line 123
c_rt_lib0move(&___nl__im__26, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(94), ___get_global_const(95)));
#line 123
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__26));
#line 123
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(96), ___nl__im__2, ___get_global_const(97), ___nl__im__4, ___get_global_const(98), ___nl__im__5, ___get_global_const(99), ___nl__im__6, ___get_global_const(100), ___nl__im__13, ___get_global_const(101), ___nl__im__14, ___get_global_const(102), ___nl__im__20, ___get_global_const(103), ___nl__im__21, ___get_global_const(104), ___nl__im__25, ___get_global_const(105), ___nl__im__26));
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
}

ImmT  compiler0file_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0file_t");
return compiler0file_t();
}
ImmT  compiler0file_t() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(79), ___nl__im__3));
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
bool  ___nl__bool__7 = false;
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(97)));
#line 133
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__2));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 134
___nl__int__3 = 0;
#line 135
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(101)));
#line 135
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(87));
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
___nl__bool__4 = !___nl__bool__4;
#line 135
if(___nl__bool__4){ goto label_2;}
#line 136
c_rt_lib0move(&___nl__im__6,___get_global_const(106));
#line 136
c_rt_lib0delete(c_fe_lib0print(___nl__im__6));
#line 136
c_rt_lib0clear(&___nl__im__6);
#line 137
___nl__int__3 = compiler_priv0compile_strict_file(___nl__im__1);
#line 138
goto label_1;
#line 138
label_2:
;
#line 138
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(101)));
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(89));
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
if(___nl__bool__4){ goto label_4;}
#line 138
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(101)));
#line 138
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(90));
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
label_4:
;
#line 138
//clear ___nl__bool__7;
#line 138
___nl__bool__4 = !___nl__bool__4;
#line 138
if(___nl__bool__4){ goto label_3;}
#line 139
c_rt_lib0move(&___nl__im__10,___get_global_const(107));
#line 139
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 139
c_rt_lib0clear(&___nl__im__10);
#line 140
c_rt_lib0delete(compiler_priv0compile_ide(___nl__im__1));
#line 141
___nl__int__3 = 0;
#line 142
goto label_1;
#line 142
label_3:
;
#line 142
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(101)));
#line 142
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(88));
#line 142
c_rt_lib0clear(&___nl__im__11);
#line 142
___nl__bool__4 = !___nl__bool__4;
#line 142
if(___nl__bool__4){ goto label_5;}
#line 143
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(96)));
#line 143
___nl__int__3 = interpreter_wrapper0exec_interpreter(___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 144
goto label_1;
#line 144
label_5:
;
#line 145
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 145
nl_die_arg(___nl__im__13);
#line 146
goto label_1;
#line 146
label_1:
;
#line 146
//clear ___nl__bool__4;
#line 146
c_rt_lib0clear(&___nl__im__13);
#line 147
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(105)));
#line 147
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 147
c_rt_lib0clear(&___nl__im__15);
#line 147
___nl__bool__14 = !___nl__bool__14;
#line 147
if(___nl__bool__14){ goto label_7;}
#line 148
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(97)));
#line 148
c_rt_lib0move(&___nl__im__18,___get_global_const(108));
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
goto label_6;
#line 151
label_7:
;
#line 151
label_6:
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
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
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
c_rt_lib0move(&___nl__im__2,___get_global_const(109));
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
label_3:
;
#line 160
___nl__int__11 = ___nl__int__8 >= ___nl__int__7;
#line 160
___nl__bool__10 = ___nl__int__11;
#line 160
if(___nl__bool__10){ goto label_1;}
#line 161
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__3, ___nl__int__8));
#line 161
___nl__int__15 = 2;
#line 161
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 161
c_rt_lib0move(&___nl__im__13, string_utils0int2str(___nl__im__14, ___nl__im__16));
#line 161
c_rt_lib0clear(&___nl__im__14);
#line 161
//clear ___nl__int__15;
#line 161
c_rt_lib0clear(&___nl__im__16);
#line 161
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 161
c_rt_lib0array_set(&___nl__im__3, ___nl__int__8, ___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
label_2:
;
#line 162
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 162
goto label_3;
#line 162
label_1:
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
c_rt_lib0move(&___nl__im__40,___get_global_const(110));
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
c_rt_lib0move(&___nl__im__43,___get_global_const(37));
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
c_rt_lib0move(&___nl__im__46,___get_global_const(37));
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
c_rt_lib0move(&___nl__im__49,___get_global_const(111));
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
c_rt_lib0move(&___nl__im__56,___get_global_const(111));
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
c_rt_lib0move(&___nl__im__57,___get_global_const(112));
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
label_2:
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
if(___nl__bool__6){ goto label_4;}
#line 170
___nl__int__10 = 1;
#line 170
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 170
//clear ___nl__int__10;
#line 170
c_rt_lib0move(&___nl__im__11,___get_global_const(109));
#line 170
___nl__bool__4 = c_rt_lib0ne(___nl__im__9, ___nl__im__11);
#line 170
c_rt_lib0clear(&___nl__im__9);
#line 170
c_rt_lib0clear(&___nl__im__11);
#line 170
label_4:
;
#line 170
//clear ___nl__bool__6;
#line 170
___nl__bool__5 = !___nl__bool__4;
#line 170
if(___nl__bool__5){ goto label_3;}
#line 170
___nl__int__13 = 1;
#line 170
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__13));
#line 170
//clear ___nl__int__13;
#line 170
c_rt_lib0move(&___nl__im__14,___get_global_const(113));
#line 170
___nl__bool__4 = c_rt_lib0ne(___nl__im__12, ___nl__im__14);
#line 170
c_rt_lib0clear(&___nl__im__12);
#line 170
c_rt_lib0clear(&___nl__im__14);
#line 170
label_3:
;
#line 170
//clear ___nl__bool__5;
#line 170
___nl__bool__4 = !___nl__bool__4;
#line 170
if(___nl__bool__4){ goto label_1;}
#line 171
___nl__int__17 = 1;
#line 171
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 171
//clear ___nl__int__17;
#line 171
c_rt_lib0move(&___nl__im__18,___get_global_const(114));
#line 171
___nl__bool__15 = c_rt_lib0eq(___nl__im__16, ___nl__im__18);
#line 171
c_rt_lib0clear(&___nl__im__16);
#line 171
c_rt_lib0clear(&___nl__im__18);
#line 171
___nl__bool__15 = !___nl__bool__15;
#line 171
if(___nl__bool__15){ goto label_6;}
#line 172
___nl__int__19 = 1;
#line 172
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 172
//clear ___nl__int__19;
#line 173
goto label_1;
#line 174
goto label_5;
#line 174
label_6:
;
#line 174
label_5:
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
goto label_2;
#line 176
label_1:
;
#line 177
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 178
label_8:
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
if(___nl__bool__24){ goto label_10;}
#line 178
___nl__int__28 = 1;
#line 178
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__28));
#line 178
//clear ___nl__int__28;
#line 178
c_rt_lib0move(&___nl__im__29,___get_global_const(109));
#line 178
___nl__bool__22 = c_rt_lib0ne(___nl__im__27, ___nl__im__29);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
c_rt_lib0clear(&___nl__im__29);
#line 178
label_10:
;
#line 178
//clear ___nl__bool__24;
#line 178
___nl__bool__23 = !___nl__bool__22;
#line 178
if(___nl__bool__23){ goto label_9;}
#line 178
___nl__int__31 = 1;
#line 178
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__31));
#line 178
//clear ___nl__int__31;
#line 178
c_rt_lib0move(&___nl__im__32,___get_global_const(113));
#line 178
___nl__bool__22 = c_rt_lib0ne(___nl__im__30, ___nl__im__32);
#line 178
c_rt_lib0clear(&___nl__im__30);
#line 178
c_rt_lib0clear(&___nl__im__32);
#line 178
label_9:
;
#line 178
//clear ___nl__bool__23;
#line 178
___nl__bool__22 = !___nl__bool__22;
#line 178
if(___nl__bool__22){ goto label_7;}
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
goto label_8;
#line 181
label_7:
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
}

bool compiler_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
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
if(___nl__bool__4){ goto label_2;}
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
goto label_1;
#line 187
label_2:
;
#line 187
label_1:
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
#line 193
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(64));
#line 193
if(___nl__bool__1){ goto label_2;}
#line 195
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(65));
#line 195
if(___nl__bool__1){ goto label_3;}
#line 197
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(67));
#line 197
if(___nl__bool__1){ goto label_4;}
#line 199
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(66));
#line 199
if(___nl__bool__1){ goto label_5;}
#line 201
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(68));
#line 201
if(___nl__bool__1){ goto label_6;}
#line 201
c_rt_lib0move(&___nl__im__2,___get_global_const(16));
#line 201
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 201
nl_die_arg(___nl__im__2);
#line 193
label_2:
;
#line 194
c_rt_lib0move(&___nl__im__3,___get_global_const(115));
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
//clear ___nl__bool__1;
#line 194
c_rt_lib0clear(&___nl__im__2);
#line 194
return ___nl__im__3;
#line 195
goto label_1;
#line 195
label_3:
;
#line 196
c_rt_lib0move(&___nl__im__4,___get_global_const(116));
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
goto label_1;
#line 197
label_4:
;
#line 198
c_rt_lib0move(&___nl__im__5,___get_global_const(117));
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
return ___nl__im__5;
#line 199
goto label_1;
#line 199
label_5:
;
#line 200
c_rt_lib0move(&___nl__im__6,___get_global_const(118));
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
return ___nl__im__6;
#line 201
goto label_1;
#line 201
label_6:
;
#line 202
c_rt_lib0move(&___nl__im__7,___get_global_const(119));
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
return ___nl__im__7;
#line 203
goto label_1;
#line 203
label_1:
;
}

ImmT  compiler_priv0mk_path(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
compiler_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 207
c_rt_lib0move(&___nl__im__3,___get_global_const(114));
#line 207
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 207
___nl__bool__2 = !___nl__bool__2;
#line 207
if(___nl__bool__2){ goto label_2;}
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
//clear ___nl__bool__2;
#line 207
return NULL;
#line 207
goto label_1;
#line 207
label_2:
;
#line 207
label_1:
;
#line 207
//clear ___nl__bool__2;
#line 208
c_rt_lib0move(&___nl__im__4, compiler_priv0get_dir(___nl__im__1));
#line 208
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__0, ___nl__im__4));
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 209
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__0, ___nl__im__1));
#line 209
c_rt_lib0delete(c_fe_lib0mk_path(___nl__im__5));
#line 209
c_rt_lib0clear(&___nl__im__5);
#line 209
c_rt_lib0clear(&___nl__im__0);
#line 209
c_rt_lib0clear(&___nl__im__1);
#line 209
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
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
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
#line 214
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(97)));
#line 214
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 215
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(120)));
#line 216
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(102)));
#line 216
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(64));
#line 216
if(___nl__bool__7){ goto label_2;}
#line 218
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(65));
#line 218
if(___nl__bool__7){ goto label_3;}
#line 220
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(66));
#line 220
if(___nl__bool__7){ goto label_4;}
#line 228
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(67));
#line 228
if(___nl__bool__7){ goto label_5;}
#line 230
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(68));
#line 230
if(___nl__bool__7){ goto label_6;}
#line 230
c_rt_lib0move(&___nl__im__8,___get_global_const(16));
#line 230
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 230
nl_die_arg(___nl__im__8);
#line 216
label_2:
;
#line 217
c_rt_lib0move(&___nl__im__12,___get_global_const(115));
#line 217
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__3, ___nl__im__12));
#line 217
c_rt_lib0clear(&___nl__im__12);
#line 217
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(64), ___nl__im__11));
#line 217
c_rt_lib0clear(&___nl__im__11);
#line 217
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(75), ___nl__im__5, ___get_global_const(76), ___nl__im__10));
#line 217
c_rt_lib0clear(&___nl__im__10);
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
c_rt_lib0clear(&___nl__im__2);
#line 217
c_rt_lib0clear(&___nl__im__3);
#line 217
c_rt_lib0clear(&___nl__im__5);
#line 217
c_rt_lib0clear(&___nl__im__6);
#line 217
//clear ___nl__bool__7;
#line 217
c_rt_lib0clear(&___nl__im__8);
#line 217
return ___nl__im__9;
#line 218
goto label_1;
#line 218
label_3:
;
#line 219
c_rt_lib0move(&___nl__im__17,___get_global_const(116));
#line 219
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__3, ___nl__im__17));
#line 219
c_rt_lib0clear(&___nl__im__17);
#line 219
c_rt_lib0move(&___nl__im__19,___get_global_const(121));
#line 219
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__3, ___nl__im__19));
#line 219
c_rt_lib0clear(&___nl__im__19);
#line 219
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(65), ___nl__im__16, ___get_global_const(69), ___nl__im__18));
#line 219
c_rt_lib0clear(&___nl__im__16);
#line 219
c_rt_lib0clear(&___nl__im__18);
#line 219
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(65), ___nl__im__15));
#line 219
c_rt_lib0clear(&___nl__im__15);
#line 219
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(75), ___nl__im__5, ___get_global_const(76), ___nl__im__14));
#line 219
c_rt_lib0clear(&___nl__im__14);
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
c_rt_lib0clear(&___nl__im__9);
#line 219
return ___nl__im__13;
#line 220
goto label_1;
#line 220
label_4:
;
#line 221
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(122)));
#line 221
___nl__int__20 = string0length(___nl__im__21);
#line 221
c_rt_lib0clear(&___nl__im__21);
#line 222
c_rt_lib0move(&___nl__im__22, compiler_priv0get_dir(___nl__im__5));
#line 223
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(97)));
#line 223
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__22));
#line 223
c_rt_lib0clear(&___nl__im__25);
#line 223
c_rt_lib0move(&___nl__im__26,___get_global_const(109));
#line 223
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__26));
#line 223
c_rt_lib0clear(&___nl__im__24);
#line 223
c_rt_lib0clear(&___nl__im__26);
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__23, ___nl__im__1));
#line 223
c_rt_lib0clear(&___nl__im__23);
#line 224
___nl__int__28 = string0length(___nl__im__22);
#line 224
___nl__int__29 = ___nl__int__20 < ___nl__int__28;
#line 224
___nl__bool__27 = ___nl__int__29;
#line 224
//clear ___nl__int__28;
#line 224
//clear ___nl__int__29;
#line 224
___nl__bool__27 = !___nl__bool__27;
#line 224
if(___nl__bool__27){ goto label_8;}
#line 225
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(97)));
#line 225
___nl__int__33 = 1;
#line 225
___nl__int__32 = ___nl__int__20 + ___nl__int__33;
#line 225
//clear ___nl__int__33;
#line 225
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__32));
#line 225
c_rt_lib0move(&___nl__im__31, string0substr2(___nl__im__22, ___nl__im__34));
#line 225
//clear ___nl__int__32;
#line 225
c_rt_lib0clear(&___nl__im__34);
#line 225
c_rt_lib0delete(compiler_priv0mk_path(___nl__im__30, ___nl__im__31));
#line 225
c_rt_lib0clear(&___nl__im__30);
#line 225
c_rt_lib0clear(&___nl__im__31);
#line 226
goto label_7;
#line 226
label_8:
;
#line 226
label_7:
;
#line 226
//clear ___nl__bool__27;
#line 227
c_rt_lib0move(&___nl__im__38,___get_global_const(118));
#line 227
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__3, ___nl__im__38));
#line 227
c_rt_lib0clear(&___nl__im__38);
#line 227
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(66), ___nl__im__37));
#line 227
c_rt_lib0clear(&___nl__im__37);
#line 227
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(2, ___get_global_const(75), ___nl__im__5, ___get_global_const(76), ___nl__im__36));
#line 227
c_rt_lib0clear(&___nl__im__36);
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
c_rt_lib0clear(&___nl__im__1);
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
c_rt_lib0clear(&___nl__im__3);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0clear(&___nl__im__6);
#line 227
//clear ___nl__bool__7;
#line 227
c_rt_lib0clear(&___nl__im__8);
#line 227
c_rt_lib0clear(&___nl__im__9);
#line 227
c_rt_lib0clear(&___nl__im__13);
#line 227
//clear ___nl__int__20;
#line 227
c_rt_lib0clear(&___nl__im__22);
#line 227
return ___nl__im__35;
#line 228
goto label_1;
#line 228
label_5:
;
#line 229
c_rt_lib0move(&___nl__im__42,___get_global_const(117));
#line 229
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__3, ___nl__im__42));
#line 229
c_rt_lib0clear(&___nl__im__42);
#line 229
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(67), ___nl__im__41));
#line 229
c_rt_lib0clear(&___nl__im__41);
#line 229
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(2, ___get_global_const(75), ___nl__im__5, ___get_global_const(76), ___nl__im__40));
#line 229
c_rt_lib0clear(&___nl__im__40);
#line 229
c_rt_lib0clear(&___nl__im__0);
#line 229
c_rt_lib0clear(&___nl__im__1);
#line 229
c_rt_lib0clear(&___nl__im__2);
#line 229
c_rt_lib0clear(&___nl__im__3);
#line 229
c_rt_lib0clear(&___nl__im__5);
#line 229
c_rt_lib0clear(&___nl__im__6);
#line 229
//clear ___nl__bool__7;
#line 229
c_rt_lib0clear(&___nl__im__8);
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 229
c_rt_lib0clear(&___nl__im__13);
#line 229
//clear ___nl__int__20;
#line 229
c_rt_lib0clear(&___nl__im__22);
#line 229
c_rt_lib0clear(&___nl__im__35);
#line 229
return ___nl__im__39;
#line 230
goto label_1;
#line 230
label_6:
;
#line 231
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(68)));
#line 231
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_const(75), ___nl__im__5, ___get_global_const(76), ___nl__im__44));
#line 231
c_rt_lib0clear(&___nl__im__44);
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
//clear ___nl__int__20;
#line 231
c_rt_lib0clear(&___nl__im__22);
#line 231
c_rt_lib0clear(&___nl__im__35);
#line 231
c_rt_lib0clear(&___nl__im__39);
#line 231
return ___nl__im__43;
#line 232
goto label_1;
#line 232
label_1:
;
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
#line 236
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 237
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 237
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 237
c_rt_lib0clear(&___nl__im__4);
#line 237
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 237
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 237
c_rt_lib0clear(&___nl__im__3);
#line 237
c_rt_lib0clear(&___nl__im__5);
#line 238
___nl__int__7 = 0;
#line 238
___nl__int__8 = 1;
#line 238
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 238
label_3:
;
#line 238
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 238
___nl__bool__10 = ___nl__int__11;
#line 238
if(___nl__bool__10){ goto label_1;}
#line 238
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 238
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 239
c_rt_lib0move(&___nl__im__14,___get_global_const(118));
#line 239
___nl__bool__13 = compiler_priv0has_extension(___nl__im__6, ___nl__im__14);
#line 239
c_rt_lib0clear(&___nl__im__14);
#line 239
___nl__bool__13 = !___nl__bool__13;
#line 239
if(___nl__bool__13){ goto label_5;}
#line 239
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 239
goto label_4;
#line 239
label_5:
;
#line 239
label_4:
;
#line 239
//clear ___nl__bool__13;
#line 239
c_rt_lib0clear(&___nl__im__6);
#line 239
label_2:
;
#line 240
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 240
goto label_3;
#line 240
label_1:
;
#line 241
c_rt_lib0clear(&___nl__im__0);
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__6);
#line 241
//clear ___nl__int__7;
#line 241
//clear ___nl__int__8;
#line 241
//clear ___nl__int__9;
#line 241
//clear ___nl__bool__10;
#line 241
//clear ___nl__int__11;
#line 241
c_rt_lib0clear(&___nl__im__12);
#line 241
return ___nl__im__1;
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
#line 245
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(97)));
#line 246
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 247
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(96)));
#line 247
___nl__int__5 = 0;
#line 247
___nl__int__6 = 1;
#line 247
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 247
label_3:
;
#line 247
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 247
___nl__bool__8 = ___nl__int__9;
#line 247
if(___nl__bool__8){ goto label_1;}
#line 247
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__3, ___nl__int__5));
#line 247
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 248
c_rt_lib0move(&___nl__im__12,___get_global_const(118));
#line 248
___nl__bool__11 = compiler_priv0has_extension(___nl__im__4, ___nl__im__12);
#line 248
c_rt_lib0clear(&___nl__im__12);
#line 248
___nl__bool__11 = !___nl__bool__11;
#line 248
if(___nl__bool__11){ goto label_5;}
#line 249
c_rt_lib0move(&___nl__im__14, compiler_priv0get_dir(___nl__im__4));
#line 249
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(122), ___nl__im__14, ___get_global_const(120), ___nl__im__4));
#line 249
c_rt_lib0clear(&___nl__im__14);
#line 249
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__13));
#line 249
c_rt_lib0clear(&___nl__im__13);
#line 250
goto label_4;
#line 250
label_5:
;
#line 251
c_rt_lib0move(&___nl__im__15, compiler_priv0get_all_nianio_file(___nl__im__4));
#line 251
___nl__int__17 = 0;
#line 251
___nl__int__18 = 1;
#line 251
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 251
label_8:
;
#line 251
___nl__int__21 = ___nl__int__17 >= ___nl__int__19;
#line 251
___nl__bool__20 = ___nl__int__21;
#line 251
if(___nl__bool__20){ goto label_6;}
#line 251
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 251
c_rt_lib0copy(&___nl__im__16, ___nl__im__22);
#line 252
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_const(122), ___nl__im__4, ___get_global_const(120), ___nl__im__16));
#line 252
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__23));
#line 252
c_rt_lib0clear(&___nl__im__23);
#line 252
c_rt_lib0clear(&___nl__im__16);
#line 252
label_7:
;
#line 253
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 253
goto label_8;
#line 253
label_6:
;
#line 254
goto label_4;
#line 254
label_4:
;
#line 254
//clear ___nl__bool__11;
#line 254
c_rt_lib0clear(&___nl__im__15);
#line 254
c_rt_lib0clear(&___nl__im__16);
#line 254
//clear ___nl__int__17;
#line 254
//clear ___nl__int__18;
#line 254
//clear ___nl__int__19;
#line 254
//clear ___nl__bool__20;
#line 254
//clear ___nl__int__21;
#line 254
c_rt_lib0clear(&___nl__im__22);
#line 254
c_rt_lib0clear(&___nl__im__4);
#line 254
label_2:
;
#line 255
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 255
goto label_3;
#line 255
label_1:
;
#line 256
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 256
c_rt_lib0move(&___nl__im__24, compiler_priv0get_out_ext(___nl__im__25));
#line 256
c_rt_lib0clear(&___nl__im__25);
#line 257
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 258
c_rt_lib0move(&___nl__im__27, c_fe_lib0get_module_files(___nl__im__1));
#line 258
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(80));
#line 258
if(___nl__bool__28){ goto label_10;}
#line 263
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(79));
#line 263
if(___nl__bool__28){ goto label_11;}
#line 263
c_rt_lib0move(&___nl__im__29,___get_global_const(16));
#line 263
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 263
nl_die_arg(___nl__im__29);
#line 258
label_10:
;
#line 258
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__27, ___get_global_const(80)));
#line 258
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 259
c_rt_lib0move(&___nl__im__34, ptd0string());
#line 259
c_rt_lib0move(&___nl__im__33, ptd0arr(___nl__im__34));
#line 259
c_rt_lib0clear(&___nl__im__34);
#line 259
c_rt_lib0move(&___nl__im__32, ptd0ensure(___nl__im__33, ___nl__im__30));
#line 259
c_rt_lib0clear(&___nl__im__33);
#line 259
___nl__int__36 = 0;
#line 259
___nl__int__37 = 1;
#line 259
___nl__int__38 = c_rt_lib0array_len(___nl__im__32);
#line 259
label_14:
;
#line 259
___nl__int__40 = ___nl__int__36 >= ___nl__int__38;
#line 259
___nl__bool__39 = ___nl__int__40;
#line 259
if(___nl__bool__39){ goto label_12;}
#line 259
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__32, ___nl__int__36));
#line 259
c_rt_lib0copy(&___nl__im__35, ___nl__im__41);
#line 260
___nl__bool__42 = compiler_priv0has_extension(___nl__im__35, ___nl__im__24);
#line 260
___nl__bool__42 = !___nl__bool__42;
#line 260
___nl__bool__42 = !___nl__bool__42;
#line 260
if(___nl__bool__42){ goto label_16;}
#line 260
goto label_13;
#line 260
goto label_15;
#line 260
label_16:
;
#line 260
label_15:
;
#line 260
//clear ___nl__bool__42;
#line 261
c_rt_lib0move(&___nl__im__43, compiler_priv0get_module_name(___nl__im__35));
#line 261
c_rt_lib0delete(hash0set_value(&___nl__im__26, ___nl__im__43, ___nl__im__35));
#line 261
c_rt_lib0clear(&___nl__im__43);
#line 261
c_rt_lib0clear(&___nl__im__35);
#line 261
label_13:
;
#line 262
___nl__int__36 = ___nl__int__36 + ___nl__int__37;
#line 262
goto label_14;
#line 262
label_12:
;
#line 263
goto label_9;
#line 263
label_11:
;
#line 263
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__27, ___get_global_const(79)));
#line 263
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 264
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 264
c_rt_lib0clear(&___nl__im__0);
#line 264
c_rt_lib0clear(&___nl__im__1);
#line 264
c_rt_lib0clear(&___nl__im__2);
#line 264
c_rt_lib0clear(&___nl__im__3);
#line 264
c_rt_lib0clear(&___nl__im__4);
#line 264
//clear ___nl__int__5;
#line 264
//clear ___nl__int__6;
#line 264
//clear ___nl__int__7;
#line 264
//clear ___nl__bool__8;
#line 264
//clear ___nl__int__9;
#line 264
c_rt_lib0clear(&___nl__im__10);
#line 264
c_rt_lib0clear(&___nl__im__24);
#line 264
c_rt_lib0clear(&___nl__im__26);
#line 264
c_rt_lib0clear(&___nl__im__27);
#line 264
//clear ___nl__bool__28;
#line 264
c_rt_lib0clear(&___nl__im__29);
#line 264
c_rt_lib0clear(&___nl__im__30);
#line 264
c_rt_lib0clear(&___nl__im__31);
#line 264
c_rt_lib0clear(&___nl__im__32);
#line 264
c_rt_lib0clear(&___nl__im__35);
#line 264
//clear ___nl__int__36;
#line 264
//clear ___nl__int__37;
#line 264
//clear ___nl__int__38;
#line 264
//clear ___nl__bool__39;
#line 264
//clear ___nl__int__40;
#line 264
c_rt_lib0clear(&___nl__im__41);
#line 264
c_rt_lib0clear(&___nl__im__44);
#line 264
c_rt_lib0clear(&___nl__im__45);
#line 264
return ___nl__im__46;
#line 265
goto label_9;
#line 265
label_9:
;
#line 266
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(0));
#line 267
___nl__int__49 = 0;
#line 267
___nl__int__50 = 1;
#line 267
___nl__int__51 = c_rt_lib0array_len(___nl__im__2);
#line 267
label_19:
;
#line 267
___nl__int__53 = ___nl__int__49 >= ___nl__int__51;
#line 267
___nl__bool__52 = ___nl__int__53;
#line 267
if(___nl__bool__52){ goto label_17;}
#line 267
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__2, ___nl__int__49));
#line 267
c_rt_lib0copy(&___nl__im__48, ___nl__im__54);
#line 268
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(120)));
#line 268
c_rt_lib0move(&___nl__im__55, compiler_priv0get_module_name(___nl__im__56));
#line 268
c_rt_lib0clear(&___nl__im__56);
#line 269
c_rt_lib0move(&___nl__im__57, compiler_priv0mk_path_module(___nl__im__48, ___nl__im__55, ___nl__im__0));
#line 270
c_rt_lib0delete(hash0set_value(&___nl__im__47, ___nl__im__55, ___nl__im__57));
#line 270
c_rt_lib0clear(&___nl__im__48);
#line 270
label_18:
;
#line 271
___nl__int__49 = ___nl__int__49 + ___nl__int__50;
#line 271
goto label_19;
#line 271
label_17:
;
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
c_rt_lib0clear(&___nl__im__1);
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 272
c_rt_lib0clear(&___nl__im__3);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
//clear ___nl__int__5;
#line 272
//clear ___nl__int__6;
#line 272
//clear ___nl__int__7;
#line 272
//clear ___nl__bool__8;
#line 272
//clear ___nl__int__9;
#line 272
c_rt_lib0clear(&___nl__im__10);
#line 272
c_rt_lib0clear(&___nl__im__24);
#line 272
c_rt_lib0clear(&___nl__im__26);
#line 272
c_rt_lib0clear(&___nl__im__27);
#line 272
//clear ___nl__bool__28;
#line 272
c_rt_lib0clear(&___nl__im__29);
#line 272
c_rt_lib0clear(&___nl__im__30);
#line 272
c_rt_lib0clear(&___nl__im__31);
#line 272
c_rt_lib0clear(&___nl__im__32);
#line 272
c_rt_lib0clear(&___nl__im__35);
#line 272
//clear ___nl__int__36;
#line 272
//clear ___nl__int__37;
#line 272
//clear ___nl__int__38;
#line 272
//clear ___nl__bool__39;
#line 272
//clear ___nl__int__40;
#line 272
c_rt_lib0clear(&___nl__im__41);
#line 272
c_rt_lib0clear(&___nl__im__44);
#line 272
c_rt_lib0clear(&___nl__im__45);
#line 272
c_rt_lib0clear(&___nl__im__46);
#line 272
c_rt_lib0clear(&___nl__im__48);
#line 272
//clear ___nl__int__49;
#line 272
//clear ___nl__int__50;
#line 272
//clear ___nl__int__51;
#line 272
//clear ___nl__bool__52;
#line 272
//clear ___nl__int__53;
#line 272
c_rt_lib0clear(&___nl__im__54);
#line 272
c_rt_lib0clear(&___nl__im__55);
#line 272
c_rt_lib0clear(&___nl__im__57);
#line 272
return ___nl__im__47;
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
#line 279
c_rt_lib0move(&___nl__im__5,___get_global_const(123));
#line 279
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 279
c_rt_lib0clear(&___nl__im__5);
#line 279
c_rt_lib0move(&___nl__im__6,___get_global_const(124));
#line 279
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 279
c_rt_lib0clear(&___nl__im__4);
#line 279
c_rt_lib0clear(&___nl__im__6);
#line 279
c_rt_lib0delete(c_fe_lib0print(___nl__im__3));
#line 279
c_rt_lib0clear(&___nl__im__3);
#line 280
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 280
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 280
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__12, ___get_global_const(79), ___nl__im__13));
#line 280
c_rt_lib0clear(&___nl__im__12);
#line 280
c_rt_lib0clear(&___nl__im__13);
#line 280
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 280
c_rt_lib0clear(&___nl__im__11);
#line 280
c_rt_lib0move(&___nl__im__14, c_fe_lib0file_to_string(___nl__im__1));
#line 280
c_rt_lib0move(&___nl__im__9, ptd0ensure(___nl__im__10, ___nl__im__14));
#line 280
c_rt_lib0clear(&___nl__im__10);
#line 280
c_rt_lib0clear(&___nl__im__14);
#line 280
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 280
if(___nl__bool__8){ goto label_1;}
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
c_rt_lib0clear(&___nl__im__7);
#line 280
//clear ___nl__bool__8;
#line 280
return ___nl__im__9;
#line 280
label_1:
;
#line 280
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 281
___nl__bool__16 = true;
#line 281
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 281
//clear ___nl__bool__16;
#line 282
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(80));
#line 282
if(___nl__bool__17){ goto label_3;}
#line 289
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(125));
#line 289
if(___nl__bool__17){ goto label_4;}
#line 289
c_rt_lib0move(&___nl__im__18,___get_global_const(16));
#line 289
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 289
nl_die_arg(___nl__im__18);
#line 282
label_3:
;
#line 282
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(80)));
#line 282
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 283
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 284
___nl__bool__23 = false;
#line 284
c_rt_lib0move(&___nl__im__24, c_rt_lib0bool_to_nl_native(___nl__bool__23));
#line 284
c_rt_lib0move(&___nl__im__22, module_checker0check_module(___nl__im__19, ___nl__im__24, &___nl__im__21));
#line 284
//clear ___nl__bool__23;
#line 284
c_rt_lib0clear(&___nl__im__24);
#line 285
c_rt_lib0move(&___nl__im__25,___get_global_const(60));
#line 285
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__25));
#line 285
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(126)));
#line 285
c_rt_lib0delete(hash0set_value(&___nl__im__25, ___nl__im__0, ___nl__im__26));
#line 285
c_rt_lib0move(&___nl__string__27,___get_global_const(60));
#line 285
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__27, ___nl__im__25));
#line 285
c_rt_lib0clear(&___nl__im__25);
#line 285
c_rt_lib0clear(&___nl__im__26);
#line 285
c_rt_lib0clear(&___nl__string__27);
#line 286
c_rt_lib0move(&___nl__im__28,___get_global_const(59));
#line 286
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__28));
#line 286
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(51)));
#line 286
c_rt_lib0delete(hash0set_value(&___nl__im__28, ___nl__im__0, ___nl__im__29));
#line 286
c_rt_lib0move(&___nl__string__30,___get_global_const(59));
#line 286
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__30, ___nl__im__28));
#line 286
c_rt_lib0clear(&___nl__im__28);
#line 286
c_rt_lib0clear(&___nl__im__29);
#line 286
c_rt_lib0clear(&___nl__string__30);
#line 287
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(51)));
#line 287
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 287
c_rt_lib0clear(&___nl__im__33);
#line 287
___nl__int__34 = 0;
#line 287
___nl__int__35 = ___nl__int__32 == ___nl__int__34;
#line 287
___nl__bool__31 = ___nl__int__35;
#line 287
//clear ___nl__int__32;
#line 287
//clear ___nl__int__34;
#line 287
//clear ___nl__int__35;
#line 287
___nl__bool__31 = !___nl__bool__31;
#line 287
___nl__bool__31 = !___nl__bool__31;
#line 287
if(___nl__bool__31){ goto label_6;}
#line 287
c_rt_lib0move(&___nl__im__37,___get_global_const(37));
#line 287
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__37));
#line 287
c_rt_lib0clear(&___nl__im__37);
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
c_rt_lib0clear(&___nl__im__7);
#line 287
//clear ___nl__bool__8;
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__15);
#line 287
//clear ___nl__bool__17;
#line 287
c_rt_lib0clear(&___nl__im__18);
#line 287
c_rt_lib0clear(&___nl__im__19);
#line 287
c_rt_lib0clear(&___nl__im__20);
#line 287
c_rt_lib0clear(&___nl__im__21);
#line 287
c_rt_lib0clear(&___nl__im__22);
#line 287
//clear ___nl__bool__31;
#line 287
return ___nl__im__36;
#line 287
goto label_5;
#line 287
label_6:
;
#line 287
label_5:
;
#line 287
//clear ___nl__bool__31;
#line 287
c_rt_lib0clear(&___nl__im__36);
#line 288
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__19));
#line 288
c_rt_lib0clear(&___nl__im__0);
#line 288
c_rt_lib0clear(&___nl__im__1);
#line 288
c_rt_lib0clear(&___nl__im__7);
#line 288
//clear ___nl__bool__8;
#line 288
c_rt_lib0clear(&___nl__im__9);
#line 288
c_rt_lib0clear(&___nl__im__15);
#line 288
//clear ___nl__bool__17;
#line 288
c_rt_lib0clear(&___nl__im__18);
#line 288
c_rt_lib0clear(&___nl__im__19);
#line 288
c_rt_lib0clear(&___nl__im__20);
#line 288
c_rt_lib0clear(&___nl__im__21);
#line 288
c_rt_lib0clear(&___nl__im__22);
#line 288
return ___nl__im__38;
#line 289
goto label_2;
#line 289
label_4:
;
#line 289
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(125)));
#line 289
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 290
c_rt_lib0move(&___nl__im__41,___get_global_const(60));
#line 290
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__41));
#line 290
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 290
c_rt_lib0delete(hash0set_value(&___nl__im__41, ___nl__im__0, ___nl__im__42));
#line 290
c_rt_lib0move(&___nl__string__43,___get_global_const(60));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__43, ___nl__im__41));
#line 290
c_rt_lib0clear(&___nl__im__41);
#line 290
c_rt_lib0clear(&___nl__im__42);
#line 290
c_rt_lib0clear(&___nl__string__43);
#line 291
c_rt_lib0move(&___nl__im__44,___get_global_const(59));
#line 291
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__44));
#line 291
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__0, ___nl__im__39));
#line 291
c_rt_lib0move(&___nl__string__45,___get_global_const(59));
#line 291
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__45, ___nl__im__44));
#line 291
c_rt_lib0clear(&___nl__im__44);
#line 291
c_rt_lib0clear(&___nl__string__45);
#line 292
c_rt_lib0move(&___nl__im__47,___get_global_const(37));
#line 292
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__47));
#line 292
c_rt_lib0clear(&___nl__im__47);
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
c_rt_lib0clear(&___nl__im__38);
#line 292
c_rt_lib0clear(&___nl__im__39);
#line 292
c_rt_lib0clear(&___nl__im__40);
#line 292
return ___nl__im__46;
#line 293
goto label_2;
#line 293
label_2:
;
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
#line 297
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 298
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(100)));
#line 298
c_rt_lib0move(&___nl__im__2, c_fe_lib0file_to_string(___nl__im__3));
#line 298
c_rt_lib0clear(&___nl__im__3);
#line 298
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(80));
#line 298
if(___nl__bool__4){ goto label_2;}
#line 311
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(79));
#line 311
if(___nl__bool__4){ goto label_3;}
#line 311
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 311
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__2));
#line 311
nl_die_arg(___nl__im__5);
#line 298
label_2:
;
#line 298
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(80)));
#line 298
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 299
c_rt_lib0move(&___nl__im__8,___get_global_const(127));
#line 299
c_rt_lib0delete(c_fe_lib0print(___nl__im__8));
#line 299
c_rt_lib0clear(&___nl__im__8);
#line 300
c_rt_lib0move(&___nl__im__9, dfile0try_sload(___nl__im__6));
#line 301
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 302
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 302
if(___nl__bool__11){ goto label_5;}
#line 304
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(79));
#line 304
if(___nl__bool__11){ goto label_6;}
#line 304
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 304
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__9));
#line 304
nl_die_arg(___nl__im__12);
#line 302
label_5:
;
#line 302
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 302
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 303
c_rt_lib0copy(&___nl__im__10, ___nl__im__13);
#line 304
goto label_4;
#line 304
label_6:
;
#line 304
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(79)));
#line 304
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 305
c_rt_lib0move(&___nl__im__17,___get_global_const(128));
#line 305
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 305
c_rt_lib0clear(&___nl__im__17);
#line 306
c_rt_lib0delete(c_fe_lib0print(___nl__im__15));
#line 307
goto label_4;
#line 307
label_4:
;
#line 308
___nl__int__19 = 0;
#line 308
___nl__int__20 = 1;
#line 308
___nl__int__21 = c_rt_lib0array_len(___nl__im__10);
#line 308
label_9:
;
#line 308
___nl__int__23 = ___nl__int__19 >= ___nl__int__21;
#line 308
___nl__bool__22 = ___nl__int__23;
#line 308
if(___nl__bool__22){ goto label_7;}
#line 308
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__10, ___nl__int__19));
#line 308
c_rt_lib0copy(&___nl__im__18, ___nl__im__24);
#line 309
___nl__int__25 = 1;
#line 309
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 309
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__26));
#line 309
//clear ___nl__int__25;
#line 309
c_rt_lib0clear(&___nl__im__26);
#line 309
c_rt_lib0clear(&___nl__im__18);
#line 309
label_8:
;
#line 310
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 310
goto label_9;
#line 310
label_7:
;
#line 311
goto label_1;
#line 311
label_3:
;
#line 311
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(79)));
#line 311
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 312
c_rt_lib0move(&___nl__im__29,___get_global_const(129));
#line 312
c_rt_lib0delete(c_fe_lib0print(___nl__im__29));
#line 312
c_rt_lib0clear(&___nl__im__29);
#line 313
goto label_1;
#line 313
label_1:
;
#line 314
c_rt_lib0clear(&___nl__im__0);
#line 314
c_rt_lib0clear(&___nl__im__2);
#line 314
//clear ___nl__bool__4;
#line 314
c_rt_lib0clear(&___nl__im__5);
#line 314
c_rt_lib0clear(&___nl__im__6);
#line 314
c_rt_lib0clear(&___nl__im__7);
#line 314
c_rt_lib0clear(&___nl__im__9);
#line 314
c_rt_lib0clear(&___nl__im__10);
#line 314
//clear ___nl__bool__11;
#line 314
c_rt_lib0clear(&___nl__im__12);
#line 314
c_rt_lib0clear(&___nl__im__13);
#line 314
c_rt_lib0clear(&___nl__im__14);
#line 314
c_rt_lib0clear(&___nl__im__15);
#line 314
c_rt_lib0clear(&___nl__im__16);
#line 314
c_rt_lib0clear(&___nl__im__18);
#line 314
//clear ___nl__int__19;
#line 314
//clear ___nl__int__20;
#line 314
//clear ___nl__int__21;
#line 314
//clear ___nl__bool__22;
#line 314
//clear ___nl__int__23;
#line 314
c_rt_lib0clear(&___nl__im__24);
#line 314
c_rt_lib0clear(&___nl__im__27);
#line 314
c_rt_lib0clear(&___nl__im__28);
#line 314
return ___nl__im__1;
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
ImmT * ___nl__im_ptr__23 = NULL;
ImmT * ___nl__im_ptr__24 = NULL;
ImmT * ___nl__im_ptr__25 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__26 = NULL;
INT * ___nl__int_ptr__27 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__28 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__31 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__32 = NULL;
ImmT * ___nl__im_ptr__33 = NULL;
ImmT * ___nl__im_ptr__34 = NULL;
anon_type00ownhashanon_type00refbool* ___nl__hash_ptr__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
bool  ___nl__bool__52 = false;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__string__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__string__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
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
bool  ___nl__bool__89 = false;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
INT  ___nl__int__92 = 0;
INT  ___nl__int__93 = 0;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
bool  ___nl__bool__107 = false;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
INT  ___nl__int__111 = 0;
INT  ___nl__int__112 = 0;
INT  ___nl__int__113 = 0;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
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
ImmT  ___nl__im__134 = NULL;
bool  ___nl__bool__135 = false;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
bool  ___nl__bool__143 = false;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
bool  ___nl__bool__151 = false;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
bool  ___nl__bool__159 = false;
INT  ___nl__int__160 = 0;
INT  ___nl__int__161 = 0;
INT  ___nl__int__162 = 0;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
INT  ___nl__int__167 = 0;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
bool  ___nl__bool__173 = false;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
#line 318
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 319
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 320
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 321
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 322
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 324
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 325
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 326
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 327
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 328
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(80)));
#line 328
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(5, ___get_global_const(59), ___nl__im__7, ___get_global_const(60), ___nl__im__8, ___get_global_const(61), ___nl__im__9, ___get_global_const(62), ___nl__im__10, ___get_global_const(63), ___nl__im__11));
#line 328
c_rt_lib0clear(&___nl__im__7);
#line 328
c_rt_lib0clear(&___nl__im__8);
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 328
c_rt_lib0clear(&___nl__im__11);
#line 330
c_rt_lib0move(&___nl__im__13, compiler_priv0get_mathematical_func(___nl__im__0));
#line 330
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(99)));
#line 330
c_rt_lib0move(&___nl__im__12, post_processing0init(___nl__im__13, ___nl__im__14));
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 330
c_rt_lib0clear(&___nl__im__14);
#line 331
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 332
;
#line 332
___nl__im_ptr__17 = &(___nl__rec__16.global_const0field);
#line 333
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 333
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(0));
#line 333
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 333
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(0));
#line 333
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(4, ___get_global_const(130), ___nl__im__18, ___get_global_const(131), ___nl__im__19, ___get_global_const(132), ___nl__im__20, ___get_global_const(133), ___nl__im__21));
#line 333
c_rt_lib0clear(&___nl__im__18);
#line 333
c_rt_lib0clear(&___nl__im__19);
#line 333
c_rt_lib0clear(&___nl__im__20);
#line 333
c_rt_lib0clear(&___nl__im__21);
#line 333
___nl__im_ptr__17 = NULL;
#line 333
___nl__im_ptr__22 = &(___nl__rec__16.ret0field);
#line 334
c_rt_lib0move(___nl__im_ptr__22,___get_global_const(37));
#line 334
___nl__im_ptr__22 = NULL;
#line 334
___nl__im_ptr__23 = &(___nl__rec__16.header0field);
#line 335
c_rt_lib0move(___nl__im_ptr__23,___get_global_const(37));
#line 335
___nl__im_ptr__23 = NULL;
#line 335
___nl__im_ptr__24 = &(___nl__rec__16.fun_args0field);
#line 336
c_rt_lib0move(___nl__im_ptr__24, c_rt_lib0array_mk(0));
#line 336
___nl__im_ptr__24 = NULL;
#line 336
___nl__im_ptr__25 = &(___nl__rec__16.ret_type0field);
#line 337
c_rt_lib0move(___nl__im_ptr__25, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 337
___nl__im_ptr__25 = NULL;
#line 337
___nl__rec_ptr__26 = &(___nl__rec__16.const0field);
#line 338
;
#line 338
___nl__int_ptr__27 = &(___nl__rec_ptr__26->dynamic_nr0field);
#line 338
(*___nl__int_ptr__27) = 0;
#line 338
___nl__int_ptr__27 = NULL;
#line 338
___nl__rec_ptr__28 = &(___nl__rec_ptr__26->sim0field);
#line 338
;
#line 338
___nl__arr_ptr__29 = &(___nl__rec_ptr__28->arr0field);
#line 338
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__29));
(*___nl__arr_ptr__29).size = 0;
(*___nl__arr_ptr__29).capacity = 0;
(*___nl__arr_ptr__29).value = NULL;
#line 338
___nl__arr_ptr__29 = NULL;
#line 338
___nl__im_ptr__30 = &(___nl__rec_ptr__28->hash0field);
#line 338
c_rt_lib0move(___nl__im_ptr__30, c_rt_lib0hash_mk(0));
#line 338
___nl__im_ptr__30 = NULL;
#line 338
___nl__rec_ptr__28 = NULL;
#line 338
___nl__rec_ptr__31 = &(___nl__rec_ptr__26->singleton0field);
#line 338
;
#line 338
___nl__arr_ptr__32 = &(___nl__rec_ptr__31->arr0field);
#line 338
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__32));
(*___nl__arr_ptr__32).size = 0;
(*___nl__arr_ptr__32).capacity = 0;
(*___nl__arr_ptr__32).value = NULL;
#line 338
___nl__arr_ptr__32 = NULL;
#line 338
___nl__im_ptr__33 = &(___nl__rec_ptr__31->hash0field);
#line 338
c_rt_lib0move(___nl__im_ptr__33, c_rt_lib0hash_mk(0));
#line 338
___nl__im_ptr__33 = NULL;
#line 338
___nl__rec_ptr__31 = NULL;
#line 338
___nl__rec_ptr__26 = NULL;
#line 338
___nl__im_ptr__34 = &(___nl__rec__16.mod_name0field);
#line 339
c_rt_lib0move(___nl__im_ptr__34,___get_global_const(37));
#line 339
___nl__im_ptr__34 = NULL;
#line 339
___nl__hash_ptr__35 = &(___nl__rec__16.additional_imports0field);
#line 340
compiler0anon_type00ownhashanon_type00refbool0clean((*___nl__hash_ptr__35));
(*___nl__hash_ptr__35).size = 0;
(*___nl__hash_ptr__35).capacity = 0;
(*___nl__hash_ptr__35).keys = NULL;
(*___nl__hash_ptr__35).values = NULL;
#line 340
___nl__hash_ptr__35 = NULL;
#line 340
___nl__im_ptr__36 = &(___nl__rec__16.defined_types0field);
#line 341
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_mk(0));
#line 341
___nl__im_ptr__36 = NULL;
#line 343
label_2:
;
#line 344
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(0));
#line 344
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 344
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(61), ___nl__im__37);
#line 344
c_rt_lib0clear(&___nl__im__37);
#line 344
c_rt_lib0clear(&___nl__im__38);
#line 345
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(0));
#line 345
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 345
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(62), ___nl__im__39);
#line 345
c_rt_lib0clear(&___nl__im__39);
#line 345
c_rt_lib0clear(&___nl__im__40);
#line 346
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(80)));
#line 346
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 346
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(63), ___nl__im__41);
#line 346
c_rt_lib0clear(&___nl__im__41);
#line 346
c_rt_lib0clear(&___nl__im__42);
#line 347
c_rt_lib0move(&___nl__im__43, compiler_priv0get_files_to_parse(___nl__im__0));
#line 348
___nl__int__44 = 0;
#line 349
c_rt_lib0move(&___nl__im__48, c_rt_lib0init_iter(___nl__im__43));
#line 349
label_5:
;
#line 349
___nl__bool__46 = c_rt_lib0is_end_hash(___nl__im__48);
#line 349
if(___nl__bool__46){ goto label_3;}
#line 349
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_key_iter(___nl__im__48));
#line 349
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value(___nl__im__43, ___nl__im__45));
#line 350
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(75)));
#line 350
c_rt_lib0move(&___nl__im__49, c_fe_lib0get_modif_time(___nl__im__50));
#line 350
c_rt_lib0clear(&___nl__im__50);
#line 351
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__49, ___get_global_const(79));
#line 351
___nl__bool__51 = !___nl__bool__51;
#line 351
if(___nl__bool__51){ goto label_7;}
#line 351
goto label_4;
#line 351
goto label_6;
#line 351
label_7:
;
#line 351
label_6:
;
#line 351
//clear ___nl__bool__51;
#line 352
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__49, ___get_global_const(80)));
#line 353
___nl__bool__52 = hash0has_key(___nl__im__1, ___nl__im__45);
#line 353
___nl__bool__52 = !___nl__bool__52;
#line 353
if(___nl__bool__52){ goto label_9;}
#line 354
c_rt_lib0move(&___nl__im__54, hash0get_value(___nl__im__1, ___nl__im__45));
#line 354
___nl__int__53 = getIntFromImm(___nl__im__54);
#line 354
c_rt_lib0clear(&___nl__im__54);
#line 355
___nl__int__56 = getIntFromImm(___nl__im__49);
#line 355
___nl__int__57 = ___nl__int__56 > ___nl__int__53;
#line 355
___nl__bool__55 = ___nl__int__57;
#line 355
//clear ___nl__int__56;
#line 355
//clear ___nl__int__57;
#line 355
___nl__bool__55 = !___nl__bool__55;
#line 355
___nl__bool__55 = !___nl__bool__55;
#line 355
if(___nl__bool__55){ goto label_11;}
#line 355
goto label_4;
#line 355
goto label_10;
#line 355
label_11:
;
#line 355
label_10:
;
#line 355
//clear ___nl__bool__55;
#line 356
goto label_8;
#line 356
label_9:
;
#line 356
label_8:
;
#line 356
//clear ___nl__bool__52;
#line 356
//clear ___nl__int__53;
#line 357
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__45, ___nl__im__49));
#line 358
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__45, ___nl__im__47));
#line 359
___nl__int__58 = 1;
#line 359
___nl__int__44 = ___nl__int__44 + ___nl__int__58;
#line 359
//clear ___nl__int__58;
#line 359
label_4:
;
#line 360
c_rt_lib0move(&___nl__im__48, c_rt_lib0next_iter(___nl__im__48));
#line 360
goto label_5;
#line 360
label_3:
;
#line 361
c_rt_lib0move(&___nl__im__62, c_rt_lib0init_iter(___nl__im__15));
#line 361
label_14:
;
#line 361
___nl__bool__60 = c_rt_lib0is_end_hash(___nl__im__62);
#line 361
if(___nl__bool__60){ goto label_12;}
#line 361
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_key_iter(___nl__im__62));
#line 361
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value(___nl__im__15, ___nl__im__59));
#line 362
___nl__bool__63 = hash0has_key(___nl__im__43, ___nl__im__59);
#line 362
___nl__bool__63 = !___nl__bool__63;
#line 362
___nl__bool__63 = !___nl__bool__63;
#line 362
if(___nl__bool__63){ goto label_16;}
#line 363
___nl__int__64 = 1;
#line 363
___nl__int__44 = ___nl__int__44 + ___nl__int__64;
#line 363
//clear ___nl__int__64;
#line 364
c_rt_lib0move(&___nl__im__65,___get_global_const(59));
#line 364
c_rt_lib0move(&___nl__im__65, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__65));
#line 364
c_rt_lib0delete(hash0delete(&___nl__im__65, ___nl__im__59));
#line 364
c_rt_lib0move(&___nl__string__66,___get_global_const(59));
#line 364
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__66, ___nl__im__65));
#line 364
c_rt_lib0clear(&___nl__im__65);
#line 364
c_rt_lib0clear(&___nl__string__66);
#line 365
c_rt_lib0move(&___nl__im__67,___get_global_const(60));
#line 365
c_rt_lib0move(&___nl__im__67, c_rt_lib0get_ref_hash(___nl__im__6, ___nl__im__67));
#line 365
c_rt_lib0delete(hash0delete(&___nl__im__67, ___nl__im__59));
#line 365
c_rt_lib0move(&___nl__string__68,___get_global_const(60));
#line 365
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__6, ___nl__string__68, ___nl__im__67));
#line 365
c_rt_lib0clear(&___nl__im__67);
#line 365
c_rt_lib0clear(&___nl__string__68);
#line 366
c_rt_lib0delete(hash0delete(&___nl__im__2, ___nl__im__59));
#line 367
c_rt_lib0delete(hash0delete(&___nl__im__1, ___nl__im__59));
#line 368
c_rt_lib0delete(hash0delete(&___nl__im__5, ___nl__im__59));
#line 369
c_rt_lib0delete(hash0delete(&___nl__im__4, ___nl__im__59));
#line 370
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__im__12, ___nl__im__59));
#line 371
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 371
___nl__bool__69 = c_rt_lib0priv_is(___nl__im__70, ___get_global_const(65));
#line 371
c_rt_lib0clear(&___nl__im__70);
#line 371
___nl__bool__69 = !___nl__bool__69;
#line 371
if(___nl__bool__69){ goto label_18;}
#line 372
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__rec__16, ___nl__im__59));
#line 373
goto label_17;
#line 373
label_18:
;
#line 373
label_17:
;
#line 373
//clear ___nl__bool__69;
#line 374
goto label_15;
#line 374
label_16:
;
#line 374
label_15:
;
#line 374
//clear ___nl__bool__63;
#line 374
label_13:
;
#line 375
c_rt_lib0move(&___nl__im__62, c_rt_lib0next_iter(___nl__im__62));
#line 375
goto label_14;
#line 375
label_12:
;
#line 376
c_rt_lib0copy(&___nl__im__15, ___nl__im__43);
#line 377
___nl__int__72 = 0;
#line 377
___nl__int__73 = ___nl__int__44 == ___nl__int__72;
#line 377
___nl__bool__71 = ___nl__int__73;
#line 377
//clear ___nl__int__72;
#line 377
//clear ___nl__int__73;
#line 377
___nl__bool__71 = !___nl__bool__71;
#line 377
if(___nl__bool__71){ goto label_20;}
#line 378
___nl__int__74 = 1;
#line 378
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 378
c_rt_lib0delete(c_fe_lib0sleep(___nl__im__75));
#line 378
//clear ___nl__int__74;
#line 378
c_rt_lib0clear(&___nl__im__75);
#line 379
goto label_2;
#line 380
goto label_19;
#line 380
label_20:
;
#line 380
label_19:
;
#line 380
//clear ___nl__bool__71;
#line 381
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_mk(0));
#line 382
c_rt_lib0move(&___nl__im__80, c_rt_lib0init_iter(___nl__im__5));
#line 382
label_23:
;
#line 382
___nl__bool__78 = c_rt_lib0is_end_hash(___nl__im__80);
#line 382
if(___nl__bool__78){ goto label_21;}
#line 382
c_rt_lib0move(&___nl__im__77, c_rt_lib0get_key_iter(___nl__im__80));
#line 382
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__77));
#line 383
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__79, ___get_global_const(75)));
#line 383
c_rt_lib0move(&___nl__im__81, compiler_priv0parse_module(___nl__im__77, ___nl__im__82, &___nl__im__6));
#line 383
c_rt_lib0clear(&___nl__im__82);
#line 383
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(80));
#line 383
if(___nl__bool__83){ goto label_25;}
#line 386
___nl__bool__83 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(79));
#line 386
if(___nl__bool__83){ goto label_26;}
#line 386
c_rt_lib0move(&___nl__im__84,___get_global_const(16));
#line 386
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_mk(2, ___nl__im__84, ___nl__im__81));
#line 386
nl_die_arg(___nl__im__84);
#line 383
label_25:
;
#line 383
c_rt_lib0move(&___nl__im__86, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(80)));
#line 383
c_rt_lib0copy(&___nl__im__85, ___nl__im__86);
#line 384
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__77, ___nl__im__85));
#line 385
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__77, ___nl__im__85));
#line 386
goto label_24;
#line 386
label_26:
;
#line 386
c_rt_lib0move(&___nl__im__88, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(79)));
#line 386
c_rt_lib0copy(&___nl__im__87, ___nl__im__88);
#line 387
c_rt_lib0delete(hash0set_value(&___nl__im__76, ___nl__im__77, ___nl__im__79));
#line 388
goto label_24;
#line 388
label_24:
;
#line 388
label_22:
;
#line 389
c_rt_lib0move(&___nl__im__80, c_rt_lib0next_iter(___nl__im__80));
#line 389
goto label_23;
#line 389
label_21:
;
#line 390
c_rt_lib0copy(&___nl__im__5, ___nl__im__76);
#line 391
___nl__int__90 = hash0size(___nl__im__5);
#line 391
___nl__int__91 = 0;
#line 391
___nl__int__92 = ___nl__int__90 > ___nl__int__91;
#line 391
___nl__bool__89 = ___nl__int__92;
#line 391
//clear ___nl__int__90;
#line 391
//clear ___nl__int__91;
#line 391
//clear ___nl__int__92;
#line 391
___nl__bool__89 = !___nl__bool__89;
#line 391
if(___nl__bool__89){ goto label_28;}
#line 392
___nl__int__93 = compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__43);
#line 392
//clear ___nl__int__93;
#line 393
c_rt_lib0move(&___nl__im__97, string0lf());
#line 393
c_rt_lib0move(&___nl__im__98,___get_global_const(134));
#line 393
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__98));
#line 393
c_rt_lib0clear(&___nl__im__97);
#line 393
c_rt_lib0clear(&___nl__im__98);
#line 393
___nl__int__100 = hash0size(___nl__im__5);
#line 393
c_rt_lib0move(&___nl__im__99, ptd0int_to_string(___nl__int__100));
#line 393
//clear ___nl__int__100;
#line 393
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__99));
#line 393
c_rt_lib0clear(&___nl__im__96);
#line 393
c_rt_lib0clear(&___nl__im__99);
#line 393
c_rt_lib0move(&___nl__im__101,___get_global_const(135));
#line 393
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__101));
#line 393
c_rt_lib0clear(&___nl__im__95);
#line 393
c_rt_lib0clear(&___nl__im__101);
#line 393
c_rt_lib0delete(c_fe_lib0print(___nl__im__94));
#line 393
c_rt_lib0clear(&___nl__im__94);
#line 394
c_rt_lib0move(&___nl__im__102,___get_global_const(136));
#line 394
c_rt_lib0delete(c_fe_lib0print(___nl__im__102));
#line 394
c_rt_lib0clear(&___nl__im__102);
#line 395
goto label_2;
#line 396
goto label_27;
#line 396
label_28:
;
#line 396
label_27:
;
#line 396
//clear ___nl__bool__89;
#line 397
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(98)));
#line 397
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(104)));
#line 397
___nl__bool__104 = c_rt_lib0check_true_native(___nl__im__105);
#line 397
c_rt_lib0clear(&___nl__im__105);
#line 397
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__2, &___nl__im__6, ___nl__im__103, ___nl__bool__104));
#line 397
c_rt_lib0clear(&___nl__im__103);
#line 397
//clear ___nl__bool__104;
#line 398
c_rt_lib0move(&___nl__im__109, c_rt_lib0init_iter(___nl__im__2));
#line 398
label_31:
;
#line 398
___nl__bool__107 = c_rt_lib0is_end_hash(___nl__im__109);
#line 398
if(___nl__bool__107){ goto label_29;}
#line 398
c_rt_lib0move(&___nl__im__106, c_rt_lib0get_key_iter(___nl__im__109));
#line 398
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__106));
#line 399
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__106, ___nl__im__108));
#line 399
label_30:
;
#line 400
c_rt_lib0move(&___nl__im__109, c_rt_lib0next_iter(___nl__im__109));
#line 400
goto label_31;
#line 400
label_29:
;
#line 402
___nl__int__111 = compiler_priv0show_and_count_errors(___nl__im__6, ___nl__im__0, ___nl__im__43);
#line 402
___nl__int__112 = 0;
#line 402
___nl__int__113 = ___nl__int__111 > ___nl__int__112;
#line 402
___nl__bool__110 = ___nl__int__113;
#line 402
//clear ___nl__int__111;
#line 402
//clear ___nl__int__112;
#line 402
//clear ___nl__int__113;
#line 402
___nl__bool__110 = !___nl__bool__110;
#line 402
if(___nl__bool__110){ goto label_33;}
#line 403
c_rt_lib0move(&___nl__im__114,___get_global_const(136));
#line 403
c_rt_lib0delete(c_fe_lib0print(___nl__im__114));
#line 403
c_rt_lib0clear(&___nl__im__114);
#line 404
goto label_2;
#line 405
goto label_32;
#line 405
label_33:
;
#line 405
label_32:
;
#line 405
//clear ___nl__bool__110;
#line 406
c_rt_lib0move(&___nl__im__118, c_rt_lib0init_iter(___nl__im__4));
#line 406
label_36:
;
#line 406
___nl__bool__116 = c_rt_lib0is_end_hash(___nl__im__118);
#line 406
if(___nl__bool__116){ goto label_34;}
#line 406
c_rt_lib0move(&___nl__im__115, c_rt_lib0get_key_iter(___nl__im__118));
#line 406
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__115));
#line 407
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__115));
#line 407
c_rt_lib0delete(hash0set_value(&___nl__im__4, ___nl__im__115, ___nl__im__119));
#line 407
c_rt_lib0clear(&___nl__im__119);
#line 407
label_35:
;
#line 408
c_rt_lib0move(&___nl__im__118, c_rt_lib0next_iter(___nl__im__118));
#line 408
goto label_36;
#line 408
label_34:
;
#line 409
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 409
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__122, ___get_global_const(67));
#line 409
c_rt_lib0clear(&___nl__im__122);
#line 409
if(___nl__bool__120){ goto label_39;}
#line 409
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 409
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__123, ___get_global_const(66));
#line 409
c_rt_lib0clear(&___nl__im__123);
#line 409
label_39:
;
#line 409
//clear ___nl__bool__121;
#line 409
___nl__bool__120 = !___nl__bool__120;
#line 409
___nl__bool__120 = !___nl__bool__120;
#line 409
if(___nl__bool__120){ goto label_38;}
#line 410
c_rt_lib0move(&___nl__im__124,___get_global_const(137));
#line 410
c_rt_lib0delete(c_fe_lib0print(___nl__im__124));
#line 410
c_rt_lib0clear(&___nl__im__124);
#line 411
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_mk(0));
#line 412
c_rt_lib0move(&___nl__im__126, compiler_priv0translate(___nl__im__4, ___nl__im__3, &___nl__im__12));
#line 413
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(97)));
#line 413
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 413
c_rt_lib0move(&___nl__im__127, compiler_priv0generate_modules_to_files(___nl__im__126, ___nl__im__43, ___nl__im__128, &___nl__rec__16, ___nl__im__129));
#line 413
c_rt_lib0clear(&___nl__im__128);
#line 413
c_rt_lib0clear(&___nl__im__129);
#line 414
___nl__bool__130 = c_rt_lib0priv_is(___nl__im__127, ___get_global_const(79));
#line 414
if(___nl__bool__130){ goto label_41;}
#line 418
___nl__bool__130 = c_rt_lib0priv_is(___nl__im__127, ___get_global_const(80));
#line 418
if(___nl__bool__130){ goto label_42;}
#line 418
c_rt_lib0move(&___nl__im__131,___get_global_const(16));
#line 418
c_rt_lib0move(&___nl__im__131, c_rt_lib0array_mk(2, ___nl__im__131, ___nl__im__127));
#line 418
nl_die_arg(___nl__im__131);
#line 414
label_41:
;
#line 414
c_rt_lib0move(&___nl__im__133, c_rt_lib0priv_as(___nl__im__127, ___get_global_const(79)));
#line 414
c_rt_lib0copy(&___nl__im__132, ___nl__im__133);
#line 415
c_rt_lib0move(&___nl__im__137, c_rt_lib0init_iter(___nl__im__132));
#line 415
label_45:
;
#line 415
___nl__bool__135 = c_rt_lib0is_end_hash(___nl__im__137);
#line 415
if(___nl__bool__135){ goto label_43;}
#line 415
c_rt_lib0move(&___nl__im__134, c_rt_lib0get_key_iter(___nl__im__137));
#line 415
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value(___nl__im__132, ___nl__im__134));
#line 416
c_rt_lib0move(&___nl__im__138, hash0get_value(___nl__im__2, ___nl__im__134));
#line 416
c_rt_lib0delete(hash0set_value(&___nl__im__125, ___nl__im__134, ___nl__im__138));
#line 416
c_rt_lib0clear(&___nl__im__138);
#line 416
label_44:
;
#line 417
c_rt_lib0move(&___nl__im__137, c_rt_lib0next_iter(___nl__im__137));
#line 417
goto label_45;
#line 417
label_43:
;
#line 418
goto label_40;
#line 418
label_42:
;
#line 418
c_rt_lib0move(&___nl__im__140, c_rt_lib0priv_as(___nl__im__127, ___get_global_const(80)));
#line 418
c_rt_lib0copy(&___nl__im__139, ___nl__im__140);
#line 419
goto label_40;
#line 419
label_40:
;
#line 420
c_rt_lib0copy(&___nl__im__4, ___nl__im__125);
#line 421
goto label_37;
#line 421
label_38:
;
#line 422
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_mk(0));
#line 423
c_rt_lib0move(&___nl__im__145, c_rt_lib0init_iter(___nl__im__4));
#line 423
label_48:
;
#line 423
___nl__bool__143 = c_rt_lib0is_end_hash(___nl__im__145);
#line 423
if(___nl__bool__143){ goto label_46;}
#line 423
c_rt_lib0move(&___nl__im__142, c_rt_lib0get_key_iter(___nl__im__145));
#line 423
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__142));
#line 424
c_rt_lib0move(&___nl__im__147,___get_global_const(138));
#line 424
c_rt_lib0move(&___nl__im__146, c_rt_lib0concat_new(___nl__im__147, ___nl__im__142));
#line 424
c_rt_lib0clear(&___nl__im__147);
#line 424
c_rt_lib0delete(c_fe_lib0print(___nl__im__146));
#line 424
c_rt_lib0clear(&___nl__im__146);
#line 425
c_rt_lib0move(&___nl__im__150, hash0get_value(___nl__im__43, ___nl__im__142));
#line 425
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_const(76)));
#line 425
c_rt_lib0clear(&___nl__im__150);
#line 425
c_rt_lib0move(&___nl__im__148, compiler_priv0save_module_to_file(___nl__im__144, ___nl__im__149));
#line 425
c_rt_lib0clear(&___nl__im__149);
#line 425
___nl__bool__151 = c_rt_lib0priv_is(___nl__im__148, ___get_global_const(79));
#line 425
if(___nl__bool__151){ goto label_50;}
#line 428
___nl__bool__151 = c_rt_lib0priv_is(___nl__im__148, ___get_global_const(80));
#line 428
if(___nl__bool__151){ goto label_51;}
#line 428
c_rt_lib0move(&___nl__im__152,___get_global_const(16));
#line 428
c_rt_lib0move(&___nl__im__152, c_rt_lib0array_mk(2, ___nl__im__152, ___nl__im__148));
#line 428
nl_die_arg(___nl__im__152);
#line 425
label_50:
;
#line 425
c_rt_lib0move(&___nl__im__154, c_rt_lib0priv_as(___nl__im__148, ___get_global_const(79)));
#line 425
c_rt_lib0copy(&___nl__im__153, ___nl__im__154);
#line 426
c_rt_lib0move(&___nl__im__156,___get_global_const(139));
#line 426
c_rt_lib0move(&___nl__im__155, c_rt_lib0concat_new(___nl__im__156, ___nl__im__153));
#line 426
c_rt_lib0clear(&___nl__im__156);
#line 426
c_rt_lib0delete(c_fe_lib0print(___nl__im__155));
#line 426
c_rt_lib0clear(&___nl__im__155);
#line 427
c_rt_lib0delete(hash0set_value(&___nl__im__141, ___nl__im__142, ___nl__im__144));
#line 428
goto label_49;
#line 428
label_51:
;
#line 428
c_rt_lib0move(&___nl__im__158, c_rt_lib0priv_as(___nl__im__148, ___get_global_const(80)));
#line 428
c_rt_lib0copy(&___nl__im__157, ___nl__im__158);
#line 429
goto label_49;
#line 429
label_49:
;
#line 429
label_47:
;
#line 430
c_rt_lib0move(&___nl__im__145, c_rt_lib0next_iter(___nl__im__145));
#line 430
goto label_48;
#line 430
label_46:
;
#line 431
c_rt_lib0copy(&___nl__im__4, ___nl__im__141);
#line 432
goto label_37;
#line 432
label_37:
;
#line 432
//clear ___nl__bool__120;
#line 432
c_rt_lib0clear(&___nl__im__125);
#line 432
c_rt_lib0clear(&___nl__im__126);
#line 432
c_rt_lib0clear(&___nl__im__127);
#line 432
//clear ___nl__bool__130;
#line 432
c_rt_lib0clear(&___nl__im__131);
#line 432
c_rt_lib0clear(&___nl__im__132);
#line 432
c_rt_lib0clear(&___nl__im__133);
#line 432
c_rt_lib0clear(&___nl__im__134);
#line 432
//clear ___nl__bool__135;
#line 432
c_rt_lib0clear(&___nl__im__136);
#line 432
c_rt_lib0clear(&___nl__im__137);
#line 432
c_rt_lib0clear(&___nl__im__139);
#line 432
c_rt_lib0clear(&___nl__im__140);
#line 432
c_rt_lib0clear(&___nl__im__141);
#line 432
c_rt_lib0clear(&___nl__im__142);
#line 432
//clear ___nl__bool__143;
#line 432
c_rt_lib0clear(&___nl__im__144);
#line 432
c_rt_lib0clear(&___nl__im__145);
#line 432
c_rt_lib0clear(&___nl__im__148);
#line 432
//clear ___nl__bool__151;
#line 432
c_rt_lib0clear(&___nl__im__152);
#line 432
c_rt_lib0clear(&___nl__im__153);
#line 432
c_rt_lib0clear(&___nl__im__154);
#line 432
c_rt_lib0clear(&___nl__im__157);
#line 432
c_rt_lib0clear(&___nl__im__158);
#line 433
___nl__int__160 = hash0size(___nl__im__4);
#line 433
___nl__int__161 = 0;
#line 433
___nl__int__162 = ___nl__int__160 > ___nl__int__161;
#line 433
___nl__bool__159 = ___nl__int__162;
#line 433
//clear ___nl__int__160;
#line 433
//clear ___nl__int__161;
#line 433
//clear ___nl__int__162;
#line 433
___nl__bool__159 = !___nl__bool__159;
#line 433
if(___nl__bool__159){ goto label_53;}
#line 434
c_rt_lib0move(&___nl__im__165,___get_global_const(140));
#line 434
___nl__int__167 = hash0size(___nl__im__4);
#line 434
c_rt_lib0move(&___nl__im__166, ptd0int_to_string(___nl__int__167));
#line 434
//clear ___nl__int__167;
#line 434
c_rt_lib0move(&___nl__im__164, c_rt_lib0concat_new(___nl__im__165, ___nl__im__166));
#line 434
c_rt_lib0clear(&___nl__im__165);
#line 434
c_rt_lib0clear(&___nl__im__166);
#line 434
c_rt_lib0move(&___nl__im__168,___get_global_const(141));
#line 434
c_rt_lib0move(&___nl__im__163, c_rt_lib0concat_new(___nl__im__164, ___nl__im__168));
#line 434
c_rt_lib0clear(&___nl__im__164);
#line 434
c_rt_lib0clear(&___nl__im__168);
#line 435
c_rt_lib0move(&___nl__im__171, string0lf());
#line 435
c_rt_lib0move(&___nl__im__172,___get_global_const(139));
#line 435
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__172));
#line 435
c_rt_lib0clear(&___nl__im__171);
#line 435
c_rt_lib0clear(&___nl__im__172);
#line 435
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_new(___nl__im__170, ___nl__im__163));
#line 435
c_rt_lib0clear(&___nl__im__170);
#line 435
c_rt_lib0delete(c_fe_lib0print(___nl__im__169));
#line 435
c_rt_lib0clear(&___nl__im__169);
#line 436
goto label_52;
#line 436
label_53:
;
#line 437
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(101)));
#line 437
___nl__bool__173 = c_rt_lib0priv_is(___nl__im__174, ___get_global_const(90));
#line 437
c_rt_lib0clear(&___nl__im__174);
#line 437
___nl__bool__173 = !___nl__bool__173;
#line 437
if(___nl__bool__173){ goto label_55;}
#line 437
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(101)));
#line 437
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(101)));
#line 437
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__177, ___get_global_const(90)));
#line 437
c_rt_lib0clear(&___nl__im__176);
#line 437
c_rt_lib0clear(&___nl__im__177);
#line 437
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__im__175));
#line 437
c_rt_lib0clear(&___nl__im__175);
#line 437
goto label_54;
#line 437
label_55:
;
#line 437
label_54:
;
#line 437
//clear ___nl__bool__173;
#line 438
c_rt_lib0move(&___nl__im__179, string0lf());
#line 438
c_rt_lib0move(&___nl__im__180,___get_global_const(142));
#line 438
c_rt_lib0move(&___nl__im__178, c_rt_lib0concat_new(___nl__im__179, ___nl__im__180));
#line 438
c_rt_lib0clear(&___nl__im__179);
#line 438
c_rt_lib0clear(&___nl__im__180);
#line 438
c_rt_lib0delete(c_fe_lib0print(___nl__im__178));
#line 438
c_rt_lib0clear(&___nl__im__178);
#line 439
goto label_52;
#line 439
label_52:
;
#line 439
//clear ___nl__bool__159;
#line 439
c_rt_lib0clear(&___nl__im__163);
#line 440
c_rt_lib0move(&___nl__im__181,___get_global_const(136));
#line 440
c_rt_lib0delete(c_fe_lib0print(___nl__im__181));
#line 440
c_rt_lib0clear(&___nl__im__181);
#line 343
goto label_2;
#line 343
label_1:
;
#line 343
c_rt_lib0clear(&___nl__im__0);
#line 343
c_rt_lib0clear(&___nl__im__1);
#line 343
c_rt_lib0clear(&___nl__im__2);
#line 343
c_rt_lib0clear(&___nl__im__3);
#line 343
c_rt_lib0clear(&___nl__im__4);
#line 343
c_rt_lib0clear(&___nl__im__5);
#line 343
c_rt_lib0clear(&___nl__im__6);
#line 343
c_rt_lib0clear(&___nl__im__12);
#line 343
c_rt_lib0clear(&___nl__im__15);
#line 343
generator_c0state_t0type0clean(___nl__rec__16);;
#line 343
c_rt_lib0clear(&___nl__im__43);
#line 343
//clear ___nl__int__44;
#line 343
c_rt_lib0clear(&___nl__im__45);
#line 343
//clear ___nl__bool__46;
#line 343
c_rt_lib0clear(&___nl__im__47);
#line 343
c_rt_lib0clear(&___nl__im__48);
#line 343
c_rt_lib0clear(&___nl__im__49);
#line 343
c_rt_lib0clear(&___nl__im__59);
#line 343
//clear ___nl__bool__60;
#line 343
c_rt_lib0clear(&___nl__im__61);
#line 343
c_rt_lib0clear(&___nl__im__62);
#line 343
c_rt_lib0clear(&___nl__im__76);
#line 343
c_rt_lib0clear(&___nl__im__77);
#line 343
//clear ___nl__bool__78;
#line 343
c_rt_lib0clear(&___nl__im__79);
#line 343
c_rt_lib0clear(&___nl__im__80);
#line 343
c_rt_lib0clear(&___nl__im__81);
#line 343
//clear ___nl__bool__83;
#line 343
c_rt_lib0clear(&___nl__im__84);
#line 343
c_rt_lib0clear(&___nl__im__85);
#line 343
c_rt_lib0clear(&___nl__im__86);
#line 343
c_rt_lib0clear(&___nl__im__87);
#line 343
c_rt_lib0clear(&___nl__im__88);
#line 343
c_rt_lib0clear(&___nl__im__106);
#line 343
//clear ___nl__bool__107;
#line 343
c_rt_lib0clear(&___nl__im__108);
#line 343
c_rt_lib0clear(&___nl__im__109);
#line 343
c_rt_lib0clear(&___nl__im__115);
#line 343
//clear ___nl__bool__116;
#line 343
c_rt_lib0clear(&___nl__im__117);
#line 343
c_rt_lib0clear(&___nl__im__118);
#line 343
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
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
bool  ___nl__bool__45 = false;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
generator_c0state_t0type ___nl__rec__50 = {};
ImmT * ___nl__im_ptr__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT * ___nl__im_ptr__56 = NULL;
ImmT * ___nl__im_ptr__57 = NULL;
ImmT * ___nl__im_ptr__58 = NULL;
ImmT * ___nl__im_ptr__59 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__60 = NULL;
INT * ___nl__int_ptr__61 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__62 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__63 = NULL;
ImmT * ___nl__im_ptr__64 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__65 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__66 = NULL;
ImmT * ___nl__im_ptr__67 = NULL;
ImmT * ___nl__im_ptr__68 = NULL;
anon_type00ownhashanon_type00refbool* ___nl__hash_ptr__69 = NULL;
ImmT * ___nl__im_ptr__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
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
bool  ___nl__bool__97 = false;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
INT  ___nl__int__103 = 0;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
INT  ___nl__int__106 = 0;
#line 445
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 447
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 448
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 449
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 450
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 451
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(80)));
#line 451
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_const(59), ___nl__im__3, ___get_global_const(60), ___nl__im__4, ___get_global_const(61), ___nl__im__5, ___get_global_const(62), ___nl__im__6, ___get_global_const(63), ___nl__im__7));
#line 451
c_rt_lib0clear(&___nl__im__3);
#line 451
c_rt_lib0clear(&___nl__im__4);
#line 451
c_rt_lib0clear(&___nl__im__5);
#line 451
c_rt_lib0clear(&___nl__im__6);
#line 451
c_rt_lib0clear(&___nl__im__7);
#line 454
c_rt_lib0move(&___nl__im__8,___get_global_const(143));
#line 454
c_rt_lib0delete(profile0begin(___nl__im__8));
#line 454
c_rt_lib0clear(&___nl__im__8);
#line 455
___nl__int__9 = 0;
#line 456
c_rt_lib0move(&___nl__im__10, compiler_priv0get_files_to_parse(___nl__im__0));
#line 457
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__10));
#line 457
label_3:
;
#line 457
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 457
if(___nl__bool__12){ goto label_1;}
#line 457
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 457
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__10, ___nl__im__11));
#line 458
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(75)));
#line 458
c_rt_lib0move(&___nl__im__15, compiler_priv0parse_module(___nl__im__11, ___nl__im__16, &___nl__im__2));
#line 458
c_rt_lib0clear(&___nl__im__16);
#line 458
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(80));
#line 458
if(___nl__bool__17){ goto label_5;}
#line 460
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(79));
#line 460
if(___nl__bool__17){ goto label_6;}
#line 460
c_rt_lib0move(&___nl__im__18,___get_global_const(16));
#line 460
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 460
nl_die_arg(___nl__im__18);
#line 458
label_5:
;
#line 458
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(80)));
#line 458
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 459
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__11, ___nl__im__19));
#line 460
goto label_4;
#line 460
label_6:
;
#line 460
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(79)));
#line 460
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 461
___nl__int__23 = 1;
#line 461
___nl__int__9 = ___nl__int__9 + ___nl__int__23;
#line 461
//clear ___nl__int__23;
#line 462
goto label_4;
#line 462
label_4:
;
#line 462
label_2:
;
#line 463
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 463
goto label_3;
#line 463
label_1:
;
#line 464
c_rt_lib0move(&___nl__im__24,___get_global_const(143));
#line 464
c_rt_lib0delete(profile0end(___nl__im__24));
#line 464
c_rt_lib0clear(&___nl__im__24);
#line 465
___nl__int__26 = 0;
#line 465
___nl__int__27 = ___nl__int__9 != ___nl__int__26;
#line 465
___nl__bool__25 = ___nl__int__27;
#line 465
//clear ___nl__int__26;
#line 465
//clear ___nl__int__27;
#line 465
___nl__bool__25 = !___nl__bool__25;
#line 465
if(___nl__bool__25){ goto label_8;}
#line 466
___nl__int__28 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 466
//clear ___nl__int__28;
#line 467
___nl__int__29 = 1;
#line 467
c_rt_lib0clear(&___nl__im__0);
#line 467
c_rt_lib0clear(&___nl__im__1);
#line 467
c_rt_lib0clear(&___nl__im__2);
#line 467
//clear ___nl__int__9;
#line 467
c_rt_lib0clear(&___nl__im__10);
#line 467
c_rt_lib0clear(&___nl__im__11);
#line 467
//clear ___nl__bool__12;
#line 467
c_rt_lib0clear(&___nl__im__13);
#line 467
c_rt_lib0clear(&___nl__im__14);
#line 467
c_rt_lib0clear(&___nl__im__15);
#line 467
//clear ___nl__bool__17;
#line 467
c_rt_lib0clear(&___nl__im__18);
#line 467
c_rt_lib0clear(&___nl__im__19);
#line 467
c_rt_lib0clear(&___nl__im__20);
#line 467
c_rt_lib0clear(&___nl__im__21);
#line 467
c_rt_lib0clear(&___nl__im__22);
#line 467
//clear ___nl__bool__25;
#line 467
return ___nl__int__29;
#line 468
goto label_7;
#line 468
label_8:
;
#line 468
label_7:
;
#line 468
//clear ___nl__bool__25;
#line 468
//clear ___nl__int__29;
#line 470
c_rt_lib0move(&___nl__im__30,___get_global_const(144));
#line 470
c_rt_lib0delete(profile0begin(___nl__im__30));
#line 470
c_rt_lib0clear(&___nl__im__30);
#line 471
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(98)));
#line 471
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(104)));
#line 471
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__33);
#line 471
c_rt_lib0clear(&___nl__im__33);
#line 471
c_rt_lib0delete(compiler_priv0check_modules(&___nl__im__1, &___nl__im__2, ___nl__im__31, ___nl__bool__32));
#line 471
c_rt_lib0clear(&___nl__im__31);
#line 471
//clear ___nl__bool__32;
#line 472
c_rt_lib0move(&___nl__im__34,___get_global_const(145));
#line 472
c_rt_lib0delete(profile0end(___nl__im__34));
#line 472
c_rt_lib0clear(&___nl__im__34);
#line 473
c_rt_lib0move(&___nl__im__36,___get_global_const(146));
#line 473
___nl__bool__35 = hash0has_key(___nl__im__1, ___nl__im__36);
#line 473
c_rt_lib0clear(&___nl__im__36);
#line 473
___nl__bool__35 = !___nl__bool__35;
#line 473
if(___nl__bool__35){ goto label_10;}
#line 474
c_rt_lib0move(&___nl__im__37,___get_global_const(147));
#line 474
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(146)));
#line 474
c_rt_lib0move(&___nl__im__38, dfile0ssave(___nl__im__39));
#line 474
c_rt_lib0clear(&___nl__im__39);
#line 474
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__37, ___nl__im__38));
#line 474
c_rt_lib0clear(&___nl__im__37);
#line 474
c_rt_lib0clear(&___nl__im__38);
#line 475
goto label_9;
#line 475
label_10:
;
#line 475
label_9:
;
#line 475
//clear ___nl__bool__35;
#line 476
___nl__int__41 = compiler_priv0show_and_count_errors(___nl__im__2, ___nl__im__0, ___nl__im__10);
#line 476
___nl__int__42 = 0;
#line 476
___nl__int__43 = ___nl__int__41 > ___nl__int__42;
#line 476
___nl__bool__40 = ___nl__int__43;
#line 476
//clear ___nl__int__41;
#line 476
//clear ___nl__int__42;
#line 476
//clear ___nl__int__43;
#line 476
___nl__bool__40 = !___nl__bool__40;
#line 476
if(___nl__bool__40){ goto label_12;}
#line 477
___nl__int__44 = 1;
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
//clear ___nl__bool__40;
#line 477
return ___nl__int__44;
#line 478
goto label_11;
#line 478
label_12:
;
#line 478
label_11:
;
#line 478
//clear ___nl__bool__40;
#line 478
//clear ___nl__int__44;
#line 479
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 479
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__47, ___get_global_const(67));
#line 479
c_rt_lib0clear(&___nl__im__47);
#line 479
if(___nl__bool__45){ goto label_15;}
#line 479
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 479
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(66));
#line 479
c_rt_lib0clear(&___nl__im__48);
#line 479
label_15:
;
#line 479
//clear ___nl__bool__46;
#line 479
___nl__bool__45 = !___nl__bool__45;
#line 479
___nl__bool__45 = !___nl__bool__45;
#line 479
if(___nl__bool__45){ goto label_14;}
#line 480
c_rt_lib0move(&___nl__im__49,___get_global_const(148));
#line 480
c_rt_lib0delete(profile0begin(___nl__im__49));
#line 480
c_rt_lib0clear(&___nl__im__49);
#line 481
;
#line 481
___nl__im_ptr__51 = &(___nl__rec__50.global_const0field);
#line 482
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(0));
#line 482
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(0));
#line 482
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 482
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(0));
#line 482
c_rt_lib0move(___nl__im_ptr__51, c_rt_lib0hash_mk(4, ___get_global_const(130), ___nl__im__52, ___get_global_const(131), ___nl__im__53, ___get_global_const(132), ___nl__im__54, ___get_global_const(133), ___nl__im__55));
#line 482
c_rt_lib0clear(&___nl__im__52);
#line 482
c_rt_lib0clear(&___nl__im__53);
#line 482
c_rt_lib0clear(&___nl__im__54);
#line 482
c_rt_lib0clear(&___nl__im__55);
#line 482
___nl__im_ptr__51 = NULL;
#line 482
___nl__im_ptr__56 = &(___nl__rec__50.ret0field);
#line 483
c_rt_lib0move(___nl__im_ptr__56,___get_global_const(37));
#line 483
___nl__im_ptr__56 = NULL;
#line 483
___nl__im_ptr__57 = &(___nl__rec__50.header0field);
#line 484
c_rt_lib0move(___nl__im_ptr__57,___get_global_const(37));
#line 484
___nl__im_ptr__57 = NULL;
#line 484
___nl__im_ptr__58 = &(___nl__rec__50.fun_args0field);
#line 485
c_rt_lib0move(___nl__im_ptr__58, c_rt_lib0array_mk(0));
#line 485
___nl__im_ptr__58 = NULL;
#line 485
___nl__im_ptr__59 = &(___nl__rec__50.ret_type0field);
#line 486
c_rt_lib0move(___nl__im_ptr__59, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 486
___nl__im_ptr__59 = NULL;
#line 486
___nl__rec_ptr__60 = &(___nl__rec__50.const0field);
#line 487
;
#line 487
___nl__int_ptr__61 = &(___nl__rec_ptr__60->dynamic_nr0field);
#line 487
(*___nl__int_ptr__61) = 0;
#line 487
___nl__int_ptr__61 = NULL;
#line 487
___nl__rec_ptr__62 = &(___nl__rec_ptr__60->sim0field);
#line 487
;
#line 487
___nl__arr_ptr__63 = &(___nl__rec_ptr__62->arr0field);
#line 487
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__63));
(*___nl__arr_ptr__63).size = 0;
(*___nl__arr_ptr__63).capacity = 0;
(*___nl__arr_ptr__63).value = NULL;
#line 487
___nl__arr_ptr__63 = NULL;
#line 487
___nl__im_ptr__64 = &(___nl__rec_ptr__62->hash0field);
#line 487
c_rt_lib0move(___nl__im_ptr__64, c_rt_lib0hash_mk(0));
#line 487
___nl__im_ptr__64 = NULL;
#line 487
___nl__rec_ptr__62 = NULL;
#line 487
___nl__rec_ptr__65 = &(___nl__rec_ptr__60->singleton0field);
#line 487
;
#line 487
___nl__arr_ptr__66 = &(___nl__rec_ptr__65->arr0field);
#line 487
compiler0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__66));
(*___nl__arr_ptr__66).size = 0;
(*___nl__arr_ptr__66).capacity = 0;
(*___nl__arr_ptr__66).value = NULL;
#line 487
___nl__arr_ptr__66 = NULL;
#line 487
___nl__im_ptr__67 = &(___nl__rec_ptr__65->hash0field);
#line 487
c_rt_lib0move(___nl__im_ptr__67, c_rt_lib0hash_mk(0));
#line 487
___nl__im_ptr__67 = NULL;
#line 487
___nl__rec_ptr__65 = NULL;
#line 487
___nl__rec_ptr__60 = NULL;
#line 487
___nl__im_ptr__68 = &(___nl__rec__50.mod_name0field);
#line 488
c_rt_lib0move(___nl__im_ptr__68,___get_global_const(37));
#line 488
___nl__im_ptr__68 = NULL;
#line 488
___nl__hash_ptr__69 = &(___nl__rec__50.additional_imports0field);
#line 489
compiler0anon_type00ownhashanon_type00refbool0clean((*___nl__hash_ptr__69));
(*___nl__hash_ptr__69).size = 0;
(*___nl__hash_ptr__69).capacity = 0;
(*___nl__hash_ptr__69).keys = NULL;
(*___nl__hash_ptr__69).values = NULL;
#line 489
___nl__hash_ptr__69 = NULL;
#line 489
___nl__im_ptr__70 = &(___nl__rec__50.defined_types0field);
#line 490
c_rt_lib0move(___nl__im_ptr__70, c_rt_lib0hash_mk(0));
#line 490
___nl__im_ptr__70 = NULL;
#line 492
c_rt_lib0move(&___nl__im__71,___get_global_const(137));
#line 492
c_rt_lib0delete(c_fe_lib0print(___nl__im__71));
#line 492
c_rt_lib0clear(&___nl__im__71);
#line 493
c_rt_lib0move(&___nl__im__73, compiler_priv0get_mathematical_func(___nl__im__0));
#line 493
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(99)));
#line 493
c_rt_lib0move(&___nl__im__72, post_processing0init(___nl__im__73, ___nl__im__74));
#line 493
c_rt_lib0clear(&___nl__im__73);
#line 493
c_rt_lib0clear(&___nl__im__74);
#line 494
c_rt_lib0move(&___nl__im__75,___get_global_const(148));
#line 494
c_rt_lib0delete(profile0end(___nl__im__75));
#line 494
c_rt_lib0clear(&___nl__im__75);
#line 496
c_rt_lib0move(&___nl__im__76,___get_global_const(149));
#line 496
c_rt_lib0delete(profile0begin(___nl__im__76));
#line 496
c_rt_lib0clear(&___nl__im__76);
#line 497
c_rt_lib0move(&___nl__im__77, compiler_priv0translate(___nl__im__1, ___nl__im__1, &___nl__im__72));
#line 498
c_rt_lib0move(&___nl__im__78,___get_global_const(149));
#line 498
c_rt_lib0delete(profile0end(___nl__im__78));
#line 498
c_rt_lib0clear(&___nl__im__78);
#line 500
c_rt_lib0move(&___nl__im__80,___get_global_const(146));
#line 500
___nl__bool__79 = hash0has_key(___nl__im__77, ___nl__im__80);
#line 500
c_rt_lib0clear(&___nl__im__80);
#line 500
___nl__bool__79 = !___nl__bool__79;
#line 500
if(___nl__bool__79){ goto label_17;}
#line 501
c_rt_lib0move(&___nl__im__81,___get_global_const(150));
#line 501
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__77, ___get_global_const(146)));
#line 501
c_rt_lib0move(&___nl__im__82, dfile0ssave(___nl__im__83));
#line 501
c_rt_lib0clear(&___nl__im__83);
#line 501
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__81, ___nl__im__82));
#line 501
c_rt_lib0clear(&___nl__im__81);
#line 501
c_rt_lib0clear(&___nl__im__82);
#line 502
goto label_16;
#line 502
label_17:
;
#line 502
label_16:
;
#line 502
//clear ___nl__bool__79;
#line 504
c_rt_lib0move(&___nl__im__84,___get_global_const(151));
#line 504
c_rt_lib0delete(profile0begin(___nl__im__84));
#line 504
c_rt_lib0clear(&___nl__im__84);
#line 505
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(97)));
#line 505
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(102)));
#line 505
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__im__77, ___nl__im__10, ___nl__im__85, &___nl__rec__50, ___nl__im__86));
#line 505
c_rt_lib0clear(&___nl__im__85);
#line 505
c_rt_lib0clear(&___nl__im__86);
#line 506
c_rt_lib0move(&___nl__im__87,___get_global_const(151));
#line 506
c_rt_lib0delete(profile0end(___nl__im__87));
#line 506
c_rt_lib0clear(&___nl__im__87);
#line 507
goto label_13;
#line 507
label_14:
;
#line 508
c_rt_lib0move(&___nl__im__91, c_rt_lib0init_iter(___nl__im__1));
#line 508
label_20:
;
#line 508
___nl__bool__89 = c_rt_lib0is_end_hash(___nl__im__91);
#line 508
if(___nl__bool__89){ goto label_18;}
#line 508
c_rt_lib0move(&___nl__im__88, c_rt_lib0get_key_iter(___nl__im__91));
#line 508
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__88));
#line 509
c_rt_lib0move(&___nl__im__93,___get_global_const(138));
#line 509
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__88));
#line 509
c_rt_lib0clear(&___nl__im__93);
#line 509
c_rt_lib0delete(c_fe_lib0print(___nl__im__92));
#line 509
c_rt_lib0clear(&___nl__im__92);
#line 510
c_rt_lib0move(&___nl__im__96, hash0get_value(___nl__im__10, ___nl__im__88));
#line 510
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_const(76)));
#line 510
c_rt_lib0clear(&___nl__im__96);
#line 510
c_rt_lib0move(&___nl__im__94, compiler_priv0save_module_to_file(___nl__im__90, ___nl__im__95));
#line 510
c_rt_lib0clear(&___nl__im__95);
#line 510
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__94, ___get_global_const(79));
#line 510
if(___nl__bool__97){ goto label_22;}
#line 513
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__94, ___get_global_const(80));
#line 513
if(___nl__bool__97){ goto label_23;}
#line 513
c_rt_lib0move(&___nl__im__98,___get_global_const(16));
#line 513
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(2, ___nl__im__98, ___nl__im__94));
#line 513
nl_die_arg(___nl__im__98);
#line 510
label_22:
;
#line 510
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__94, ___get_global_const(79)));
#line 510
c_rt_lib0copy(&___nl__im__99, ___nl__im__100);
#line 511
c_rt_lib0move(&___nl__im__102,___get_global_const(139));
#line 511
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__99));
#line 511
c_rt_lib0clear(&___nl__im__102);
#line 511
c_rt_lib0delete(c_fe_lib0print(___nl__im__101));
#line 511
c_rt_lib0clear(&___nl__im__101);
#line 512
___nl__int__103 = 1;
#line 512
c_rt_lib0clear(&___nl__im__0);
#line 512
c_rt_lib0clear(&___nl__im__1);
#line 512
c_rt_lib0clear(&___nl__im__2);
#line 512
//clear ___nl__int__9;
#line 512
c_rt_lib0clear(&___nl__im__10);
#line 512
c_rt_lib0clear(&___nl__im__11);
#line 512
//clear ___nl__bool__12;
#line 512
c_rt_lib0clear(&___nl__im__13);
#line 512
c_rt_lib0clear(&___nl__im__14);
#line 512
c_rt_lib0clear(&___nl__im__15);
#line 512
//clear ___nl__bool__17;
#line 512
c_rt_lib0clear(&___nl__im__18);
#line 512
c_rt_lib0clear(&___nl__im__19);
#line 512
c_rt_lib0clear(&___nl__im__20);
#line 512
c_rt_lib0clear(&___nl__im__21);
#line 512
c_rt_lib0clear(&___nl__im__22);
#line 512
//clear ___nl__bool__45;
#line 512
generator_c0state_t0type0clean(___nl__rec__50);;
#line 512
c_rt_lib0clear(&___nl__im__72);
#line 512
c_rt_lib0clear(&___nl__im__77);
#line 512
c_rt_lib0clear(&___nl__im__88);
#line 512
//clear ___nl__bool__89;
#line 512
c_rt_lib0clear(&___nl__im__90);
#line 512
c_rt_lib0clear(&___nl__im__91);
#line 512
c_rt_lib0clear(&___nl__im__94);
#line 512
//clear ___nl__bool__97;
#line 512
c_rt_lib0clear(&___nl__im__98);
#line 512
c_rt_lib0clear(&___nl__im__99);
#line 512
c_rt_lib0clear(&___nl__im__100);
#line 512
return ___nl__int__103;
#line 513
goto label_21;
#line 513
label_23:
;
#line 513
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__94, ___get_global_const(80)));
#line 513
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 514
goto label_21;
#line 514
label_21:
;
#line 514
label_19:
;
#line 515
c_rt_lib0move(&___nl__im__91, c_rt_lib0next_iter(___nl__im__91));
#line 515
goto label_20;
#line 515
label_18:
;
#line 516
goto label_13;
#line 516
label_13:
;
#line 516
//clear ___nl__bool__45;
#line 516
generator_c0state_t0type0clean(___nl__rec__50);;
#line 516
c_rt_lib0clear(&___nl__im__72);
#line 516
c_rt_lib0clear(&___nl__im__77);
#line 516
c_rt_lib0clear(&___nl__im__88);
#line 516
//clear ___nl__bool__89;
#line 516
c_rt_lib0clear(&___nl__im__90);
#line 516
c_rt_lib0clear(&___nl__im__91);
#line 516
c_rt_lib0clear(&___nl__im__94);
#line 516
//clear ___nl__bool__97;
#line 516
c_rt_lib0clear(&___nl__im__98);
#line 516
c_rt_lib0clear(&___nl__im__99);
#line 516
c_rt_lib0clear(&___nl__im__100);
#line 516
//clear ___nl__int__103;
#line 516
c_rt_lib0clear(&___nl__im__104);
#line 516
c_rt_lib0clear(&___nl__im__105);
#line 517
___nl__int__106 = 0;
#line 517
c_rt_lib0clear(&___nl__im__0);
#line 517
c_rt_lib0clear(&___nl__im__1);
#line 517
c_rt_lib0clear(&___nl__im__2);
#line 517
//clear ___nl__int__9;
#line 517
c_rt_lib0clear(&___nl__im__10);
#line 517
c_rt_lib0clear(&___nl__im__11);
#line 517
//clear ___nl__bool__12;
#line 517
c_rt_lib0clear(&___nl__im__13);
#line 517
c_rt_lib0clear(&___nl__im__14);
#line 517
c_rt_lib0clear(&___nl__im__15);
#line 517
//clear ___nl__bool__17;
#line 517
c_rt_lib0clear(&___nl__im__18);
#line 517
c_rt_lib0clear(&___nl__im__19);
#line 517
c_rt_lib0clear(&___nl__im__20);
#line 517
c_rt_lib0clear(&___nl__im__21);
#line 517
c_rt_lib0clear(&___nl__im__22);
#line 517
return ___nl__int__106;
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
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 521
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 525
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 525
___nl__int__4 = string0length(___nl__im__5);
#line 525
c_rt_lib0clear(&___nl__im__5);
#line 525
___nl__int__6 = 0;
#line 525
___nl__int__7 = ___nl__int__4 == ___nl__int__6;
#line 525
___nl__bool__3 = ___nl__int__7;
#line 525
//clear ___nl__int__4;
#line 525
//clear ___nl__int__6;
#line 525
//clear ___nl__int__7;
#line 525
___nl__bool__3 = !___nl__bool__3;
#line 525
___nl__bool__3 = !___nl__bool__3;
#line 525
if(___nl__bool__3){ goto label_2;}
#line 522
c_rt_lib0move(&___nl__im__9,___get_global_const(153));
#line 522
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 522
___nl__bool__11 = hash0has_key(___nl__im__1, ___nl__im__12);
#line 522
c_rt_lib0clear(&___nl__im__12);
#line 522
if(___nl__bool__11){ goto label_4;}
#line 524
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 524
goto label_3;
#line 524
label_4:
;
#line 523
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 523
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__1, ___nl__im__14));
#line 523
c_rt_lib0clear(&___nl__im__14);
#line 523
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(75)));
#line 523
c_rt_lib0clear(&___nl__im__13);
#line 523
label_3:
;
#line 523
//clear ___nl__bool__11;
#line 523
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 523
c_rt_lib0clear(&___nl__im__9);
#line 523
c_rt_lib0clear(&___nl__im__10);
#line 523
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 523
c_rt_lib0clear(&___nl__im__8);
#line 523
goto label_1;
#line 523
label_2:
;
#line 523
label_1:
;
#line 523
//clear ___nl__bool__3;
#line 527
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(154)));
#line 527
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 527
c_rt_lib0clear(&___nl__im__17);
#line 527
c_rt_lib0move(&___nl__im__18,___get_global_const(41));
#line 527
c_rt_lib0move(&___nl__im__18, c_rt_lib0unary_minus(___nl__im__18));
#line 527
___nl__int__19 = getIntFromImm(___nl__im__18);
#line 527
___nl__int__20 = ___nl__int__16 == ___nl__int__19;
#line 527
___nl__bool__15 = ___nl__int__20;
#line 527
//clear ___nl__int__16;
#line 527
c_rt_lib0clear(&___nl__im__18);
#line 527
//clear ___nl__int__19;
#line 527
//clear ___nl__int__20;
#line 527
___nl__bool__15 = !___nl__bool__15;
#line 527
___nl__bool__15 = !___nl__bool__15;
#line 527
if(___nl__bool__15){ goto label_6;}
#line 526
c_rt_lib0move(&___nl__im__22,___get_global_const(155));
#line 526
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(154)));
#line 526
___nl__int__24 = getIntFromImm(___nl__im__25);
#line 526
c_rt_lib0clear(&___nl__im__25);
#line 526
c_rt_lib0move(&___nl__im__23, ptd0int_to_string(___nl__int__24));
#line 526
//clear ___nl__int__24;
#line 526
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 526
c_rt_lib0clear(&___nl__im__22);
#line 526
c_rt_lib0clear(&___nl__im__23);
#line 526
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__21));
#line 526
c_rt_lib0clear(&___nl__im__21);
#line 526
goto label_5;
#line 526
label_6:
;
#line 526
label_5:
;
#line 526
//clear ___nl__bool__15;
#line 528
c_rt_lib0move(&___nl__im__28, string0lf());
#line 528
c_rt_lib0move(&___nl__im__29,___get_global_const(156));
#line 528
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 528
c_rt_lib0clear(&___nl__im__28);
#line 528
c_rt_lib0clear(&___nl__im__29);
#line 528
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(157)));
#line 528
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 528
c_rt_lib0clear(&___nl__im__27);
#line 528
c_rt_lib0clear(&___nl__im__30);
#line 528
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 528
c_rt_lib0clear(&___nl__im__26);
#line 529
c_rt_lib0clear(&___nl__im__0);
#line 529
c_rt_lib0clear(&___nl__im__1);
#line 529
return ___nl__im__2;
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
#line 533
___nl__int__3 = 0;
#line 534
___nl__int__4 = 0;
#line 535
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(60)));
#line 535
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__5));
#line 535
label_3:
;
#line 535
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 535
if(___nl__bool__7){ goto label_1;}
#line 535
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 535
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__6));
#line 536
c_rt_lib0move(&___nl__im__10,___get_global_const(158));
#line 537
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(103)));
#line 537
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(93));
#line 537
c_rt_lib0clear(&___nl__im__12);
#line 537
___nl__bool__11 = !___nl__bool__11;
#line 537
if(___nl__bool__11){ goto label_5;}
#line 537
c_rt_lib0move(&___nl__im__10,___get_global_const(159));
#line 537
goto label_4;
#line 537
label_5:
;
#line 537
label_4:
;
#line 537
//clear ___nl__bool__11;
#line 538
___nl__int__14 = 0;
#line 538
___nl__int__15 = 1;
#line 538
___nl__int__16 = c_rt_lib0array_len(___nl__im__8);
#line 538
label_8:
;
#line 538
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 538
___nl__bool__17 = ___nl__int__18;
#line 538
if(___nl__bool__17){ goto label_6;}
#line 538
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__8, ___nl__int__14));
#line 538
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 539
c_rt_lib0move(&___nl__im__21, compiler_priv0construct_error_message(___nl__im__13, ___nl__im__2));
#line 539
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__10, ___nl__im__21));
#line 539
c_rt_lib0clear(&___nl__im__21);
#line 539
c_rt_lib0delete(c_fe_lib0print(___nl__im__20));
#line 539
c_rt_lib0clear(&___nl__im__20);
#line 539
c_rt_lib0clear(&___nl__im__13);
#line 539
label_7:
;
#line 540
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 540
goto label_8;
#line 540
label_6:
;
#line 541
___nl__int__22 = c_rt_lib0array_len(___nl__im__8);
#line 541
___nl__int__3 = ___nl__int__3 + ___nl__int__22;
#line 541
//clear ___nl__int__22;
#line 542
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(62)));
#line 542
___nl__bool__23 = hash0has_key(___nl__im__24, ___nl__im__6);
#line 542
c_rt_lib0clear(&___nl__im__24);
#line 542
___nl__bool__23 = !___nl__bool__23;
#line 542
if(___nl__bool__23){ goto label_10;}
#line 543
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(62)));
#line 543
c_rt_lib0move(&___nl__im__25, hash0get_value(___nl__im__26, ___nl__im__6));
#line 543
c_rt_lib0clear(&___nl__im__26);
#line 544
___nl__int__28 = 0;
#line 544
___nl__int__29 = 1;
#line 544
___nl__int__30 = c_rt_lib0array_len(___nl__im__25);
#line 544
label_13:
;
#line 544
___nl__int__32 = ___nl__int__28 >= ___nl__int__30;
#line 544
___nl__bool__31 = ___nl__int__32;
#line 544
if(___nl__bool__31){ goto label_11;}
#line 544
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__25, ___nl__int__28));
#line 544
c_rt_lib0copy(&___nl__im__27, ___nl__im__33);
#line 545
c_rt_lib0move(&___nl__im__35, compiler_priv0construct_error_message(___nl__im__27, ___nl__im__2));
#line 545
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__10, ___nl__im__35));
#line 545
c_rt_lib0clear(&___nl__im__35);
#line 545
c_rt_lib0delete(c_fe_lib0print(___nl__im__34));
#line 545
c_rt_lib0clear(&___nl__im__34);
#line 545
c_rt_lib0clear(&___nl__im__27);
#line 545
label_12:
;
#line 546
___nl__int__28 = ___nl__int__28 + ___nl__int__29;
#line 546
goto label_13;
#line 546
label_11:
;
#line 547
___nl__int__36 = c_rt_lib0array_len(___nl__im__25);
#line 547
___nl__int__3 = ___nl__int__3 + ___nl__int__36;
#line 547
//clear ___nl__int__36;
#line 548
goto label_9;
#line 548
label_10:
;
#line 548
label_9:
;
#line 548
//clear ___nl__bool__23;
#line 548
c_rt_lib0clear(&___nl__im__25);
#line 548
c_rt_lib0clear(&___nl__im__27);
#line 548
//clear ___nl__int__28;
#line 548
//clear ___nl__int__29;
#line 548
//clear ___nl__int__30;
#line 548
//clear ___nl__bool__31;
#line 548
//clear ___nl__int__32;
#line 548
c_rt_lib0clear(&___nl__im__33);
#line 549
c_rt_lib0move(&___nl__im__10,___get_global_const(159));
#line 550
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(59)));
#line 550
c_rt_lib0move(&___nl__im__37, hash0get_value(___nl__im__38, ___nl__im__6));
#line 550
c_rt_lib0clear(&___nl__im__38);
#line 551
___nl__int__40 = 0;
#line 551
___nl__int__41 = 1;
#line 551
___nl__int__42 = c_rt_lib0array_len(___nl__im__37);
#line 551
label_16:
;
#line 551
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 551
___nl__bool__43 = ___nl__int__44;
#line 551
if(___nl__bool__43){ goto label_14;}
#line 551
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__37, ___nl__int__40));
#line 551
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 552
c_rt_lib0move(&___nl__im__47,___get_global_const(159));
#line 552
c_rt_lib0move(&___nl__im__48, compiler_priv0construct_error_message(___nl__im__39, ___nl__im__2));
#line 552
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 552
c_rt_lib0clear(&___nl__im__47);
#line 552
c_rt_lib0clear(&___nl__im__48);
#line 552
c_rt_lib0delete(c_fe_lib0print(___nl__im__46));
#line 552
c_rt_lib0clear(&___nl__im__46);
#line 552
c_rt_lib0clear(&___nl__im__39);
#line 552
label_15:
;
#line 553
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 553
goto label_16;
#line 553
label_14:
;
#line 554
___nl__int__49 = c_rt_lib0array_len(___nl__im__37);
#line 554
___nl__int__4 = ___nl__int__4 + ___nl__int__49;
#line 554
//clear ___nl__int__49;
#line 555
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(61)));
#line 555
___nl__bool__50 = hash0has_key(___nl__im__51, ___nl__im__6);
#line 555
c_rt_lib0clear(&___nl__im__51);
#line 555
___nl__bool__50 = !___nl__bool__50;
#line 555
if(___nl__bool__50){ goto label_18;}
#line 556
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(61)));
#line 556
c_rt_lib0move(&___nl__im__52, hash0get_value(___nl__im__53, ___nl__im__6));
#line 556
c_rt_lib0clear(&___nl__im__53);
#line 557
___nl__int__55 = 0;
#line 557
___nl__int__56 = 1;
#line 557
___nl__int__57 = c_rt_lib0array_len(___nl__im__52);
#line 557
label_21:
;
#line 557
___nl__int__59 = ___nl__int__55 >= ___nl__int__57;
#line 557
___nl__bool__58 = ___nl__int__59;
#line 557
if(___nl__bool__58){ goto label_19;}
#line 557
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__52, ___nl__int__55));
#line 557
c_rt_lib0copy(&___nl__im__54, ___nl__im__60);
#line 558
c_rt_lib0move(&___nl__im__62,___get_global_const(159));
#line 558
c_rt_lib0move(&___nl__im__63, compiler_priv0construct_error_message(___nl__im__54, ___nl__im__2));
#line 558
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__63));
#line 558
c_rt_lib0clear(&___nl__im__62);
#line 558
c_rt_lib0clear(&___nl__im__63);
#line 558
c_rt_lib0delete(c_fe_lib0print(___nl__im__61));
#line 558
c_rt_lib0clear(&___nl__im__61);
#line 558
c_rt_lib0clear(&___nl__im__54);
#line 558
label_20:
;
#line 559
___nl__int__55 = ___nl__int__55 + ___nl__int__56;
#line 559
goto label_21;
#line 559
label_19:
;
#line 560
___nl__int__64 = c_rt_lib0array_len(___nl__im__52);
#line 560
___nl__int__4 = ___nl__int__4 + ___nl__int__64;
#line 560
//clear ___nl__int__64;
#line 561
goto label_17;
#line 561
label_18:
;
#line 561
label_17:
;
#line 561
//clear ___nl__bool__50;
#line 561
c_rt_lib0clear(&___nl__im__52);
#line 561
c_rt_lib0clear(&___nl__im__54);
#line 561
//clear ___nl__int__55;
#line 561
//clear ___nl__int__56;
#line 561
//clear ___nl__int__57;
#line 561
//clear ___nl__bool__58;
#line 561
//clear ___nl__int__59;
#line 561
c_rt_lib0clear(&___nl__im__60);
#line 561
label_2:
;
#line 562
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 562
goto label_3;
#line 562
label_1:
;
#line 563
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(63)));
#line 563
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(160));
#line 563
if(___nl__bool__66){ goto label_23;}
#line 570
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(80));
#line 570
if(___nl__bool__66){ goto label_24;}
#line 570
c_rt_lib0move(&___nl__im__67,___get_global_const(16));
#line 570
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(2, ___nl__im__67, ___nl__im__65));
#line 570
nl_die_arg(___nl__im__67);
#line 563
label_23:
;
#line 563
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(160)));
#line 563
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 564
c_rt_lib0move(&___nl__im__70,___get_global_const(37));
#line 565
___nl__int__72 = 0;
#line 565
___nl__int__73 = 1;
#line 565
___nl__int__74 = c_rt_lib0array_len(___nl__im__68);
#line 565
label_27:
;
#line 565
___nl__int__76 = ___nl__int__72 >= ___nl__int__74;
#line 565
___nl__bool__75 = ___nl__int__76;
#line 565
if(___nl__bool__75){ goto label_25;}
#line 565
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_get(___nl__im__68, ___nl__int__72));
#line 565
c_rt_lib0copy(&___nl__im__71, ___nl__im__77);
#line 566
c_rt_lib0move(&___nl__im__79,___get_global_const(161));
#line 566
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__71, ___nl__im__79));
#line 566
c_rt_lib0clear(&___nl__im__79);
#line 566
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_add(___nl__im__70, ___nl__im__78));
#line 566
c_rt_lib0clear(&___nl__im__78);
#line 566
c_rt_lib0clear(&___nl__im__71);
#line 566
label_26:
;
#line 567
___nl__int__72 = ___nl__int__72 + ___nl__int__73;
#line 567
goto label_27;
#line 567
label_25:
;
#line 568
c_rt_lib0move(&___nl__im__82,___get_global_const(162));
#line 568
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__70));
#line 568
c_rt_lib0clear(&___nl__im__82);
#line 568
c_rt_lib0move(&___nl__im__83,___get_global_const(163));
#line 568
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__83));
#line 568
c_rt_lib0clear(&___nl__im__81);
#line 568
c_rt_lib0clear(&___nl__im__83);
#line 568
c_rt_lib0delete(c_fe_lib0print(___nl__im__80));
#line 568
c_rt_lib0clear(&___nl__im__80);
#line 569
___nl__int__84 = 1;
#line 569
___nl__int__4 = ___nl__int__4 + ___nl__int__84;
#line 569
//clear ___nl__int__84;
#line 570
goto label_22;
#line 570
label_24:
;
#line 571
goto label_22;
#line 571
label_22:
;
#line 572
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(103)));
#line 572
___nl__bool__85 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(93));
#line 572
c_rt_lib0clear(&___nl__im__86);
#line 572
___nl__bool__85 = !___nl__bool__85;
#line 572
if(___nl__bool__85){ goto label_29;}
#line 573
___nl__int__4 = ___nl__int__4 + ___nl__int__3;
#line 574
___nl__int__3 = 0;
#line 575
goto label_28;
#line 575
label_29:
;
#line 575
label_28:
;
#line 575
//clear ___nl__bool__85;
#line 576
c_rt_lib0move(&___nl__im__90,___get_global_const(164));
#line 576
c_rt_lib0move(&___nl__im__91, ptd0int_to_string(___nl__int__4));
#line 576
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__91));
#line 576
c_rt_lib0clear(&___nl__im__90);
#line 576
c_rt_lib0clear(&___nl__im__91);
#line 577
c_rt_lib0move(&___nl__im__92,___get_global_const(165));
#line 577
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__92));
#line 577
c_rt_lib0clear(&___nl__im__89);
#line 577
c_rt_lib0clear(&___nl__im__92);
#line 577
c_rt_lib0move(&___nl__im__93, ptd0int_to_string(___nl__int__3));
#line 577
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__93));
#line 577
c_rt_lib0clear(&___nl__im__88);
#line 577
c_rt_lib0clear(&___nl__im__93);
#line 577
c_rt_lib0delete(c_fe_lib0print(___nl__im__87));
#line 577
c_rt_lib0clear(&___nl__im__87);
#line 578
c_rt_lib0clear(&___nl__im__0);
#line 578
c_rt_lib0clear(&___nl__im__1);
#line 578
c_rt_lib0clear(&___nl__im__2);
#line 578
//clear ___nl__int__3;
#line 578
c_rt_lib0clear(&___nl__im__5);
#line 578
c_rt_lib0clear(&___nl__im__6);
#line 578
//clear ___nl__bool__7;
#line 578
c_rt_lib0clear(&___nl__im__8);
#line 578
c_rt_lib0clear(&___nl__im__9);
#line 578
c_rt_lib0clear(&___nl__im__10);
#line 578
c_rt_lib0clear(&___nl__im__13);
#line 578
//clear ___nl__int__14;
#line 578
//clear ___nl__int__15;
#line 578
//clear ___nl__int__16;
#line 578
//clear ___nl__bool__17;
#line 578
//clear ___nl__int__18;
#line 578
c_rt_lib0clear(&___nl__im__19);
#line 578
c_rt_lib0clear(&___nl__im__37);
#line 578
c_rt_lib0clear(&___nl__im__39);
#line 578
//clear ___nl__int__40;
#line 578
//clear ___nl__int__41;
#line 578
//clear ___nl__int__42;
#line 578
//clear ___nl__bool__43;
#line 578
//clear ___nl__int__44;
#line 578
c_rt_lib0clear(&___nl__im__45);
#line 578
c_rt_lib0clear(&___nl__im__65);
#line 578
//clear ___nl__bool__66;
#line 578
c_rt_lib0clear(&___nl__im__67);
#line 578
c_rt_lib0clear(&___nl__im__68);
#line 578
c_rt_lib0clear(&___nl__im__69);
#line 578
c_rt_lib0clear(&___nl__im__70);
#line 578
c_rt_lib0clear(&___nl__im__71);
#line 578
//clear ___nl__int__72;
#line 578
//clear ___nl__int__73;
#line 578
//clear ___nl__int__74;
#line 578
//clear ___nl__bool__75;
#line 578
//clear ___nl__int__76;
#line 578
c_rt_lib0clear(&___nl__im__77);
#line 578
return ___nl__int__4;
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
#line 583
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 584
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 585
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__1));
#line 585
label_3:
;
#line 585
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 585
if(___nl__bool__6){ goto label_1;}
#line 585
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 585
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__5));
#line 586
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(166)));
#line 586
___nl__int__11 = 0;
#line 586
___nl__int__12 = 1;
#line 586
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 586
label_6:
;
#line 586
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 586
___nl__bool__14 = ___nl__int__15;
#line 586
if(___nl__bool__14){ goto label_4;}
#line 586
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 586
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 587
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(167)));
#line 587
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(78));
#line 587
if(___nl__bool__18){ goto label_8;}
#line 588
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(77));
#line 588
if(___nl__bool__18){ goto label_9;}
#line 588
c_rt_lib0move(&___nl__im__19,___get_global_const(16));
#line 588
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__17));
#line 588
nl_die_arg(___nl__im__19);
#line 587
label_8:
;
#line 588
goto label_7;
#line 588
label_9:
;
#line 588
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(77)));
#line 588
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 589
c_rt_lib0move(&___nl__im__25,___get_global_const(35));
#line 589
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__5, ___nl__im__25));
#line 589
c_rt_lib0clear(&___nl__im__25);
#line 589
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(168)));
#line 589
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__26));
#line 589
c_rt_lib0clear(&___nl__im__24);
#line 589
c_rt_lib0clear(&___nl__im__26);
#line 589
c_rt_lib0copy(&___nl__im__22, ___nl__im__20);
#line 589
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__4, ___nl__im__23, ___nl__im__22));
#line 589
c_rt_lib0clear(&___nl__im__22);
#line 589
c_rt_lib0clear(&___nl__im__23);
#line 590
goto label_7;
#line 590
label_7:
;
#line 590
c_rt_lib0clear(&___nl__im__10);
#line 590
label_5:
;
#line 591
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 591
goto label_6;
#line 591
label_4:
;
#line 591
label_2:
;
#line 592
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 592
goto label_3;
#line 592
label_1:
;
#line 593
c_rt_lib0move(&___nl__im__30, c_rt_lib0init_iter(___nl__im__0));
#line 593
label_12:
;
#line 593
___nl__bool__28 = c_rt_lib0is_end_hash(___nl__im__30);
#line 593
if(___nl__bool__28){ goto label_10;}
#line 593
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_key_iter(___nl__im__30));
#line 593
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__27));
#line 594
c_rt_lib0move(&___nl__im__31, translator0translate(___nl__im__29, ___nl__im__4));
#line 595
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__27, ___nl__im__31));
#line 595
label_11:
;
#line 596
c_rt_lib0move(&___nl__im__30, c_rt_lib0next_iter(___nl__im__30));
#line 596
goto label_12;
#line 596
label_10:
;
#line 597
c_rt_lib0clear(&___nl__im__0);
#line 597
c_rt_lib0clear(&___nl__im__1);
#line 597
c_rt_lib0clear(&___nl__im__4);
#line 597
c_rt_lib0clear(&___nl__im__5);
#line 597
//clear ___nl__bool__6;
#line 597
c_rt_lib0clear(&___nl__im__7);
#line 597
c_rt_lib0clear(&___nl__im__8);
#line 597
c_rt_lib0clear(&___nl__im__9);
#line 597
c_rt_lib0clear(&___nl__im__10);
#line 597
//clear ___nl__int__11;
#line 597
//clear ___nl__int__12;
#line 597
//clear ___nl__int__13;
#line 597
//clear ___nl__bool__14;
#line 597
//clear ___nl__int__15;
#line 597
c_rt_lib0clear(&___nl__im__16);
#line 597
c_rt_lib0clear(&___nl__im__17);
#line 597
//clear ___nl__bool__18;
#line 597
c_rt_lib0clear(&___nl__im__19);
#line 597
c_rt_lib0clear(&___nl__im__20);
#line 597
c_rt_lib0clear(&___nl__im__21);
#line 597
c_rt_lib0clear(&___nl__im__27);
#line 597
//clear ___nl__bool__28;
#line 597
c_rt_lib0clear(&___nl__im__29);
#line 597
c_rt_lib0clear(&___nl__im__30);
#line 597
c_rt_lib0clear(&___nl__im__31);
#line 597
return ___nl__im__3;
}

ImmT  compiler_priv0check_modules(ImmT * ___ref___im__0,compiler0errors_group_t0type* ___ref___im__1,compiler0deref_t0type ___nl__im__2,bool ___nl__bool__3) {
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
bool  ___nl__bool__72 = false;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
bool  ___nl__bool__81 = false;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
bool  ___nl__bool__87 = false;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
INT  ___nl__int__91 = 0;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
INT  ___nl__int__97 = 0;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
#line 602
c_rt_lib0move(&___nl__im__4,___get_global_const(169));
#line 602
c_rt_lib0delete(c_fe_lib0print(___nl__im__4));
#line 602
c_rt_lib0clear(&___nl__im__4);
#line 603
c_rt_lib0move(&___nl__im__5, type_checker0check_modules(___ref___im__0, (*___ref___im__0)));
#line 604
___nl__bool__6 = ___nl__bool__3;
#line 604
___nl__bool__6 = !___nl__bool__6;
#line 604
if(___nl__bool__6){ goto label_2;}
#line 605
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 606
c_rt_lib0move(&___nl__im__9,___get_global_const(170));
#line 606
c_rt_lib0move(&___nl__im__8, c_fe_lib0file_to_string(___nl__im__9));
#line 606
c_rt_lib0clear(&___nl__im__9);
#line 606
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 606
if(___nl__bool__10){ goto label_4;}
#line 609
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(79));
#line 609
if(___nl__bool__10){ goto label_5;}
#line 609
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 609
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__8));
#line 609
nl_die_arg(___nl__im__11);
#line 606
label_4:
;
#line 606
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 606
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 607
c_rt_lib0move(&___nl__im__7, dfile0sload(___nl__im__12));
#line 608
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 608
c_rt_lib0move(&___nl__im__14, ptd0hash(___nl__im__15));
#line 608
c_rt_lib0clear(&___nl__im__15);
#line 608
c_rt_lib0move(&___nl__im__7, ptd0ensure(___nl__im__14, ___nl__im__7));
#line 608
c_rt_lib0clear(&___nl__im__14);
#line 609
goto label_3;
#line 609
label_5:
;
#line 609
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(79)));
#line 609
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 610
goto label_3;
#line 610
label_3:
;
#line 611
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 612
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 613
c_rt_lib0move(&___nl__im__23, c_rt_lib0init_iter((*___ref___im__0)));
#line 613
label_8:
;
#line 613
___nl__bool__21 = c_rt_lib0is_end_hash(___nl__im__23);
#line 613
if(___nl__bool__21){ goto label_6;}
#line 613
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_key_iter(___nl__im__23));
#line 613
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__20));
#line 614
___nl__bool__24 = true;
#line 614
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 614
c_rt_lib0delete(module_checker0check_module(___nl__im__22, ___nl__im__25, &___nl__im__18));
#line 614
//clear ___nl__bool__24;
#line 614
c_rt_lib0clear(&___nl__im__25);
#line 615
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__22));
#line 615
label_7:
;
#line 616
c_rt_lib0move(&___nl__im__23, c_rt_lib0next_iter(___nl__im__23));
#line 616
goto label_8;
#line 616
label_6:
;
#line 618
c_rt_lib0delete(module_checker0check_used_functions(___nl__im__7, ___nl__im__18, ___nl__im__19, &___nl__im__5));
#line 619
goto label_1;
#line 619
label_2:
;
#line 619
label_1:
;
#line 619
//clear ___nl__bool__6;
#line 619
c_rt_lib0clear(&___nl__im__7);
#line 619
c_rt_lib0clear(&___nl__im__8);
#line 619
//clear ___nl__bool__10;
#line 619
c_rt_lib0clear(&___nl__im__11);
#line 619
c_rt_lib0clear(&___nl__im__12);
#line 619
c_rt_lib0clear(&___nl__im__13);
#line 619
c_rt_lib0clear(&___nl__im__16);
#line 619
c_rt_lib0clear(&___nl__im__17);
#line 619
c_rt_lib0clear(&___nl__im__18);
#line 619
c_rt_lib0clear(&___nl__im__19);
#line 619
c_rt_lib0clear(&___nl__im__20);
#line 619
//clear ___nl__bool__21;
#line 619
c_rt_lib0clear(&___nl__im__22);
#line 619
c_rt_lib0clear(&___nl__im__23);
#line 620
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(51)));
#line 620
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 620
c_rt_lib0clear(&___nl__im__27);
#line 621
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(51)));
#line 621
___nl__int__30 = 0;
#line 621
___nl__int__31 = 1;
#line 621
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 621
label_11:
;
#line 621
___nl__int__34 = ___nl__int__30 >= ___nl__int__32;
#line 621
___nl__bool__33 = ___nl__int__34;
#line 621
if(___nl__bool__33){ goto label_9;}
#line 621
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 621
c_rt_lib0copy(&___nl__im__29, ___nl__im__35);
#line 622
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 623
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(61)));
#line 623
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(152)));
#line 623
___nl__bool__37 = hash0has_key(___nl__im__38, ___nl__im__39);
#line 623
c_rt_lib0clear(&___nl__im__38);
#line 623
c_rt_lib0clear(&___nl__im__39);
#line 623
___nl__bool__37 = !___nl__bool__37;
#line 623
if(___nl__bool__37){ goto label_13;}
#line 624
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(61)));
#line 624
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(152)));
#line 624
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__40, ___nl__im__41));
#line 624
c_rt_lib0clear(&___nl__im__40);
#line 624
c_rt_lib0clear(&___nl__im__41);
#line 625
goto label_12;
#line 625
label_13:
;
#line 625
label_12:
;
#line 625
//clear ___nl__bool__37;
#line 626
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__29));
#line 627
c_rt_lib0move(&___nl__im__42,___get_global_const(61));
#line 627
c_rt_lib0move(&___nl__im__42, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__42));
#line 627
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(152)));
#line 627
c_rt_lib0delete(hash0set_value(&___nl__im__42, ___nl__im__43, ___nl__im__36));
#line 627
c_rt_lib0move(&___nl__string__44,___get_global_const(61));
#line 627
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__44, ___nl__im__42));
#line 627
c_rt_lib0clear(&___nl__im__42);
#line 627
c_rt_lib0clear(&___nl__im__43);
#line 627
c_rt_lib0clear(&___nl__string__44);
#line 627
c_rt_lib0clear(&___nl__im__29);
#line 627
label_10:
;
#line 628
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 628
goto label_11;
#line 628
label_9:
;
#line 629
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(126)));
#line 629
___nl__int__47 = 0;
#line 629
___nl__int__48 = 1;
#line 629
___nl__int__49 = c_rt_lib0array_len(___nl__im__45);
#line 629
label_16:
;
#line 629
___nl__int__51 = ___nl__int__47 >= ___nl__int__49;
#line 629
___nl__bool__50 = ___nl__int__51;
#line 629
if(___nl__bool__50){ goto label_14;}
#line 629
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__45, ___nl__int__47));
#line 629
c_rt_lib0copy(&___nl__im__46, ___nl__im__52);
#line 630
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 631
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(62)));
#line 631
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(152)));
#line 631
___nl__bool__54 = hash0has_key(___nl__im__55, ___nl__im__56);
#line 631
c_rt_lib0clear(&___nl__im__55);
#line 631
c_rt_lib0clear(&___nl__im__56);
#line 631
___nl__bool__54 = !___nl__bool__54;
#line 631
if(___nl__bool__54){ goto label_18;}
#line 632
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_const(62)));
#line 632
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(152)));
#line 632
c_rt_lib0move(&___nl__im__53, hash0get_value(___nl__im__57, ___nl__im__58));
#line 632
c_rt_lib0clear(&___nl__im__57);
#line 632
c_rt_lib0clear(&___nl__im__58);
#line 633
goto label_17;
#line 633
label_18:
;
#line 633
label_17:
;
#line 633
//clear ___nl__bool__54;
#line 634
c_rt_lib0delete(array0push(&___nl__im__53, ___nl__im__46));
#line 635
c_rt_lib0move(&___nl__im__59,___get_global_const(62));
#line 635
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__59));
#line 635
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(152)));
#line 635
c_rt_lib0delete(hash0set_value(&___nl__im__59, ___nl__im__60, ___nl__im__53));
#line 635
c_rt_lib0move(&___nl__string__61,___get_global_const(62));
#line 635
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__61, ___nl__im__59));
#line 635
c_rt_lib0clear(&___nl__im__59);
#line 635
c_rt_lib0clear(&___nl__im__60);
#line 635
c_rt_lib0clear(&___nl__string__61);
#line 635
c_rt_lib0clear(&___nl__im__46);
#line 635
label_15:
;
#line 636
___nl__int__47 = ___nl__int__47 + ___nl__int__48;
#line 636
goto label_16;
#line 636
label_14:
;
#line 637
___nl__int__63 = 0;
#line 637
___nl__int__64 = ___nl__int__26 == ___nl__int__63;
#line 637
___nl__bool__62 = ___nl__int__64;
#line 637
//clear ___nl__int__63;
#line 637
//clear ___nl__int__64;
#line 637
___nl__bool__62 = !___nl__bool__62;
#line 637
___nl__bool__62 = !___nl__bool__62;
#line 637
if(___nl__bool__62){ goto label_20;}
#line 637
c_rt_lib0move(&___nl__im__67,___get_global_const(171));
#line 637
c_rt_lib0move(&___nl__im__68, ptd0int_to_string(___nl__int__26));
#line 637
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__68));
#line 637
c_rt_lib0clear(&___nl__im__67);
#line 637
c_rt_lib0clear(&___nl__im__68);
#line 637
c_rt_lib0move(&___nl__im__69,___get_global_const(172));
#line 637
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 637
c_rt_lib0clear(&___nl__im__66);
#line 637
c_rt_lib0clear(&___nl__im__69);
#line 637
c_rt_lib0delete(c_fe_lib0print(___nl__im__65));
#line 637
c_rt_lib0clear(&___nl__im__65);
#line 637
goto label_19;
#line 637
label_20:
;
#line 637
label_19:
;
#line 637
//clear ___nl__bool__62;
#line 638
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(0));
#line 639
c_rt_lib0move(&___nl__im__74, c_rt_lib0init_iter((*___ref___im__0)));
#line 639
label_23:
;
#line 639
___nl__bool__72 = c_rt_lib0is_end_hash(___nl__im__74);
#line 639
if(___nl__bool__72){ goto label_21;}
#line 639
c_rt_lib0move(&___nl__im__71, c_rt_lib0get_key_iter(___nl__im__74));
#line 639
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value((*___ref___im__0), ___nl__im__71));
#line 640
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(0));
#line 641
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(173)));
#line 641
___nl__int__78 = 0;
#line 641
___nl__int__79 = 1;
#line 641
___nl__int__80 = c_rt_lib0array_len(___nl__im__76);
#line 641
label_26:
;
#line 641
___nl__int__82 = ___nl__int__78 >= ___nl__int__80;
#line 641
___nl__bool__81 = ___nl__int__82;
#line 641
if(___nl__bool__81){ goto label_24;}
#line 641
c_rt_lib0move(&___nl__im__83, c_rt_lib0array_get(___nl__im__76, ___nl__int__78));
#line 641
c_rt_lib0copy(&___nl__im__77, ___nl__im__83);
#line 642
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__77, ___get_global_const(168)));
#line 642
c_rt_lib0delete(array0push(&___nl__im__75, ___nl__im__84));
#line 642
c_rt_lib0clear(&___nl__im__84);
#line 642
c_rt_lib0clear(&___nl__im__77);
#line 642
label_25:
;
#line 643
___nl__int__78 = ___nl__int__78 + ___nl__int__79;
#line 643
goto label_26;
#line 643
label_24:
;
#line 644
c_rt_lib0delete(hash0set_value(&___nl__im__70, ___nl__im__71, ___nl__im__75));
#line 644
label_22:
;
#line 645
c_rt_lib0move(&___nl__im__74, c_rt_lib0next_iter(___nl__im__74));
#line 645
goto label_23;
#line 645
label_21:
;
#line 646
c_rt_lib0move(&___nl__im__86, module_checker0search_loops(___nl__im__70));
#line 646
c_rt_lib0copy(&___nl__im__85, ___nl__im__86);
#line 646
c_rt_lib0hash_set_value_dec(___ref___im__1, ___get_global_const(63), ___nl__im__85);
#line 646
c_rt_lib0clear(&___nl__im__85);
#line 646
c_rt_lib0clear(&___nl__im__86);
#line 647
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(77));
#line 647
___nl__bool__87 = !___nl__bool__87;
#line 647
if(___nl__bool__87){ goto label_28;}
#line 648
c_rt_lib0move(&___nl__im__89,___get_global_const(174));
#line 648
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(98)));
#line 648
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__93, ___get_global_const(175)));
#line 648
c_rt_lib0clear(&___nl__im__93);
#line 648
___nl__int__91 = c_rt_lib0array_len(___nl__im__92);
#line 648
c_rt_lib0clear(&___nl__im__92);
#line 648
c_rt_lib0move(&___nl__im__90, ptd0int_to_string(___nl__int__91));
#line 648
//clear ___nl__int__91;
#line 648
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 648
c_rt_lib0clear(&___nl__im__89);
#line 648
c_rt_lib0clear(&___nl__im__90);
#line 648
c_rt_lib0delete(c_fe_lib0print(___nl__im__88));
#line 648
c_rt_lib0clear(&___nl__im__88);
#line 649
c_rt_lib0move(&___nl__im__95,___get_global_const(176));
#line 649
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(98)));
#line 649
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(177)));
#line 649
c_rt_lib0clear(&___nl__im__99);
#line 649
___nl__int__97 = c_rt_lib0array_len(___nl__im__98);
#line 649
c_rt_lib0clear(&___nl__im__98);
#line 649
c_rt_lib0move(&___nl__im__96, ptd0int_to_string(___nl__int__97));
#line 649
//clear ___nl__int__97;
#line 649
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__96));
#line 649
c_rt_lib0clear(&___nl__im__95);
#line 649
c_rt_lib0clear(&___nl__im__96);
#line 649
c_rt_lib0delete(c_fe_lib0print(___nl__im__94));
#line 649
c_rt_lib0clear(&___nl__im__94);
#line 650
c_rt_lib0move(&___nl__im__100, reference_generator0generate((*___ref___im__0)));
#line 651
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(77)));
#line 651
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(98)));
#line 651
c_rt_lib0move(&___nl__im__104, compiler_priv0serialize_deref(___nl__im__105, ___nl__im__100));
#line 651
c_rt_lib0clear(&___nl__im__105);
#line 651
c_rt_lib0move(&___nl__im__102, c_fe_lib0string_to_file(___nl__im__103, ___nl__im__104));
#line 651
c_rt_lib0clear(&___nl__im__103);
#line 651
c_rt_lib0clear(&___nl__im__104);
#line 651
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(80));
#line 651
if(___nl__bool__101){ goto label_29;}
#line 651
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__102));
#line 651
nl_die_arg(___nl__im__102);
#line 651
label_29:
;
#line 652
goto label_27;
#line 652
label_28:
;
#line 652
label_27:
;
#line 652
//clear ___nl__bool__87;
#line 652
c_rt_lib0clear(&___nl__im__100);
#line 652
//clear ___nl__bool__101;
#line 652
c_rt_lib0clear(&___nl__im__102);
#line 652
c_rt_lib0clear(&___nl__im__2);
#line 652
//clear ___nl__bool__3;
#line 652
c_rt_lib0clear(&___nl__im__5);
#line 652
//clear ___nl__int__26;
#line 652
c_rt_lib0clear(&___nl__im__28);
#line 652
c_rt_lib0clear(&___nl__im__29);
#line 652
//clear ___nl__int__30;
#line 652
//clear ___nl__int__31;
#line 652
//clear ___nl__int__32;
#line 652
//clear ___nl__bool__33;
#line 652
//clear ___nl__int__34;
#line 652
c_rt_lib0clear(&___nl__im__35);
#line 652
c_rt_lib0clear(&___nl__im__36);
#line 652
c_rt_lib0clear(&___nl__im__45);
#line 652
c_rt_lib0clear(&___nl__im__46);
#line 652
//clear ___nl__int__47;
#line 652
//clear ___nl__int__48;
#line 652
//clear ___nl__int__49;
#line 652
//clear ___nl__bool__50;
#line 652
//clear ___nl__int__51;
#line 652
c_rt_lib0clear(&___nl__im__52);
#line 652
c_rt_lib0clear(&___nl__im__53);
#line 652
c_rt_lib0clear(&___nl__im__70);
#line 652
c_rt_lib0clear(&___nl__im__71);
#line 652
//clear ___nl__bool__72;
#line 652
c_rt_lib0clear(&___nl__im__73);
#line 652
c_rt_lib0clear(&___nl__im__74);
#line 652
c_rt_lib0clear(&___nl__im__75);
#line 652
c_rt_lib0clear(&___nl__im__76);
#line 652
c_rt_lib0clear(&___nl__im__77);
#line 652
//clear ___nl__int__78;
#line 652
//clear ___nl__int__79;
#line 652
//clear ___nl__int__80;
#line 652
//clear ___nl__bool__81;
#line 652
//clear ___nl__int__82;
#line 652
c_rt_lib0clear(&___nl__im__83);
#line 652
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
#line 656
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 657
c_rt_lib0move(&___nl__im__3, compiler_priv0process_deref(___nl__im__0));
#line 657
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__3));
#line 657
c_rt_lib0clear(&___nl__im__3);
#line 658
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 659
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_const(179), ___get_global_const(180)));
#line 659
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 659
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__2));
#line 659
c_rt_lib0clear(&___nl__im__6);
#line 659
c_rt_lib0move(&___nl__im__4, dfile0ssave_net_format(___nl__im__5));
#line 659
c_rt_lib0clear(&___nl__im__5);
#line 659
c_rt_lib0clear(&___nl__im__0);
#line 659
c_rt_lib0clear(&___nl__im__1);
#line 659
c_rt_lib0clear(&___nl__im__2);
#line 659
return ___nl__im__4;
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
#line 664
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 665
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(177)));
#line 665
___nl__int__4 = 0;
#line 665
___nl__int__5 = 1;
#line 665
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 665
label_3:
;
#line 665
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 665
___nl__bool__7 = ___nl__int__8;
#line 665
if(___nl__bool__7){ goto label_1;}
#line 665
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 665
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 666
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(175), ___nl__im__3));
#line 666
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(98), ___nl__im__11));
#line 666
c_rt_lib0clear(&___nl__im__11);
#line 666
c_rt_lib0array_push(&___nl__im__1, ___nl__im__10);
#line 666
c_rt_lib0clear(&___nl__im__10);
#line 666
c_rt_lib0clear(&___nl__im__3);
#line 666
label_2:
;
#line 667
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 667
goto label_3;
#line 667
label_1:
;
#line 669
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(175)));
#line 669
___nl__int__14 = 0;
#line 669
___nl__int__15 = 1;
#line 669
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 669
label_6:
;
#line 669
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 669
___nl__bool__17 = ___nl__int__18;
#line 669
if(___nl__bool__17){ goto label_4;}
#line 669
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 669
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 670
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__13));
#line 670
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(98), ___nl__im__21));
#line 670
c_rt_lib0clear(&___nl__im__21);
#line 670
c_rt_lib0array_push(&___nl__im__1, ___nl__im__20);
#line 670
c_rt_lib0clear(&___nl__im__20);
#line 670
c_rt_lib0clear(&___nl__im__13);
#line 670
label_5:
;
#line 671
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 671
goto label_6;
#line 671
label_4:
;
#line 672
c_rt_lib0clear(&___nl__im__0);
#line 672
c_rt_lib0clear(&___nl__im__2);
#line 672
c_rt_lib0clear(&___nl__im__3);
#line 672
//clear ___nl__int__4;
#line 672
//clear ___nl__int__5;
#line 672
//clear ___nl__int__6;
#line 672
//clear ___nl__bool__7;
#line 672
//clear ___nl__int__8;
#line 672
c_rt_lib0clear(&___nl__im__9);
#line 672
c_rt_lib0clear(&___nl__im__12);
#line 672
c_rt_lib0clear(&___nl__im__13);
#line 672
//clear ___nl__int__14;
#line 672
//clear ___nl__int__15;
#line 672
//clear ___nl__int__16;
#line 672
//clear ___nl__bool__17;
#line 672
//clear ___nl__int__18;
#line 672
c_rt_lib0clear(&___nl__im__19);
#line 672
return ___nl__im__1;
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
#line 676
c_rt_lib0move(&___nl__im__3, c_fe_lib0string_to_file(___nl__im__1, ___nl__im__0));
#line 676
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(80));
#line 676
if(___nl__bool__4){ goto label_2;}
#line 677
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(79));
#line 677
if(___nl__bool__4){ goto label_3;}
#line 677
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 677
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 677
nl_die_arg(___nl__im__5);
#line 676
label_2:
;
#line 676
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(80)));
#line 676
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 677
goto label_1;
#line 677
label_3:
;
#line 677
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(79)));
#line 677
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 678
c_rt_lib0move(&___nl__im__11,___get_global_const(139));
#line 678
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__8));
#line 678
c_rt_lib0clear(&___nl__im__11);
#line 678
c_rt_lib0delete(c_fe_lib0print(___nl__im__10));
#line 678
c_rt_lib0clear(&___nl__im__10);
#line 679
c_rt_lib0move(___ref___im__2, c_rt_lib0ov_mk_none(___get_global_const(181)));
#line 680
goto label_1;
#line 680
label_1:
;
#line 680
c_rt_lib0clear(&___nl__im__0);
#line 680
c_rt_lib0clear(&___nl__im__1);
#line 680
c_rt_lib0clear(&___nl__im__3);
#line 680
//clear ___nl__bool__4;
#line 680
c_rt_lib0clear(&___nl__im__5);
#line 680
c_rt_lib0clear(&___nl__im__6);
#line 680
c_rt_lib0clear(&___nl__im__7);
#line 680
c_rt_lib0clear(&___nl__im__8);
#line 680
c_rt_lib0clear(&___nl__im__9);
#line 680
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
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
#line 688
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 689
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(64));
#line 689
if(___nl__bool__6){ goto label_2;}
#line 697
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(65));
#line 697
if(___nl__bool__6){ goto label_3;}
#line 711
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(66));
#line 711
if(___nl__bool__6){ goto label_4;}
#line 713
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(67));
#line 713
if(___nl__bool__6){ goto label_5;}
#line 715
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(68));
#line 715
if(___nl__bool__6){ goto label_6;}
#line 715
c_rt_lib0move(&___nl__im__7,___get_global_const(16));
#line 715
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__4));
#line 715
nl_die_arg(___nl__im__7);
#line 689
label_2:
;
#line 690
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__0));
#line 690
label_9:
;
#line 690
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 690
if(___nl__bool__9){ goto label_7;}
#line 690
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 690
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__8));
#line 691
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(182)));
#line 692
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__1, ___nl__im__8));
#line 692
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(76)));
#line 692
c_rt_lib0clear(&___nl__im__15);
#line 692
c_rt_lib0move(&___nl__im__17, hash0get_value(___nl__im__1, ___nl__im__8));
#line 692
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(76)));
#line 692
c_rt_lib0clear(&___nl__im__17);
#line 692
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(64)));
#line 692
c_rt_lib0clear(&___nl__im__14);
#line 692
c_rt_lib0clear(&___nl__im__16);
#line 693
c_rt_lib0move(&___nl__im__19,___get_global_const(138));
#line 693
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__8));
#line 693
c_rt_lib0clear(&___nl__im__19);
#line 693
c_rt_lib0delete(c_fe_lib0print(___nl__im__18));
#line 693
c_rt_lib0clear(&___nl__im__18);
#line 694
c_rt_lib0move(&___nl__im__20, dfile0ssave(___nl__im__10));
#line 694
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__20, ___nl__im__13, &___nl__im__12));
#line 694
c_rt_lib0clear(&___nl__im__20);
#line 695
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__12);
#line 695
___nl__bool__21 = !___nl__bool__21;
#line 695
if(___nl__bool__21){ goto label_11;}
#line 695
c_rt_lib0move(&___nl__im__22,___get_global_const(37));
#line 695
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__8, ___nl__im__22));
#line 695
c_rt_lib0clear(&___nl__im__22);
#line 695
goto label_10;
#line 695
label_11:
;
#line 695
label_10:
;
#line 695
//clear ___nl__bool__21;
#line 695
label_8:
;
#line 696
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 696
goto label_9;
#line 696
label_7:
;
#line 697
goto label_1;
#line 697
label_3:
;
#line 698
c_rt_lib0move(&___nl__im__23, generator_c0generate(___nl__im__0, ___ref___rec__3));
#line 699
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(182)));
#line 700
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(183)));
#line 700
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__25));
#line 700
label_14:
;
#line 700
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 700
if(___nl__bool__27){ goto label_12;}
#line 700
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 700
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__26));
#line 701
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(182)));
#line 702
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__1, ___nl__im__26));
#line 702
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(76)));
#line 702
c_rt_lib0clear(&___nl__im__32);
#line 702
c_rt_lib0move(&___nl__im__34, hash0get_value(___nl__im__1, ___nl__im__26));
#line 702
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(76)));
#line 702
c_rt_lib0clear(&___nl__im__34);
#line 702
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(65)));
#line 702
c_rt_lib0clear(&___nl__im__31);
#line 702
c_rt_lib0clear(&___nl__im__33);
#line 703
c_rt_lib0move(&___nl__im__36,___get_global_const(138));
#line 703
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__26));
#line 703
c_rt_lib0clear(&___nl__im__36);
#line 703
c_rt_lib0delete(c_fe_lib0print(___nl__im__35));
#line 703
c_rt_lib0clear(&___nl__im__35);
#line 704
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(65)));
#line 704
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(65)));
#line 704
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__37, ___nl__im__38, &___nl__im__24));
#line 704
c_rt_lib0clear(&___nl__im__37);
#line 704
c_rt_lib0clear(&___nl__im__38);
#line 705
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(69)));
#line 705
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(69)));
#line 705
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__39, ___nl__im__40, &___nl__im__24));
#line 705
c_rt_lib0clear(&___nl__im__39);
#line 705
c_rt_lib0clear(&___nl__im__40);
#line 706
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__24);
#line 706
___nl__bool__41 = !___nl__bool__41;
#line 706
if(___nl__bool__41){ goto label_16;}
#line 706
c_rt_lib0move(&___nl__im__42,___get_global_const(37));
#line 706
c_rt_lib0delete(hash0set_value(&___nl__im__5, ___nl__im__26, ___nl__im__42));
#line 706
c_rt_lib0clear(&___nl__im__42);
#line 706
goto label_15;
#line 706
label_16:
;
#line 706
label_15:
;
#line 706
//clear ___nl__bool__41;
#line 706
label_13:
;
#line 707
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 707
goto label_14;
#line 707
label_12:
;
#line 708
c_rt_lib0move(&___nl__im__43,___get_global_const(184));
#line 708
c_rt_lib0delete(c_fe_lib0print(___nl__im__43));
#line 708
c_rt_lib0clear(&___nl__im__43);
#line 709
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(185)));
#line 709
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_const(65)));
#line 709
c_rt_lib0clear(&___nl__im__45);
#line 709
c_rt_lib0move(&___nl__im__47,___get_global_const(186));
#line 709
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__2, ___nl__im__47));
#line 709
c_rt_lib0clear(&___nl__im__47);
#line 709
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__44, ___nl__im__46, &___nl__im__24));
#line 709
c_rt_lib0clear(&___nl__im__44);
#line 709
c_rt_lib0clear(&___nl__im__46);
#line 710
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(185)));
#line 710
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(69)));
#line 710
c_rt_lib0clear(&___nl__im__49);
#line 710
c_rt_lib0move(&___nl__im__51,___get_global_const(187));
#line 710
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__2, ___nl__im__51));
#line 710
c_rt_lib0clear(&___nl__im__51);
#line 710
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__48, ___nl__im__50, &___nl__im__24));
#line 710
c_rt_lib0clear(&___nl__im__48);
#line 710
c_rt_lib0clear(&___nl__im__50);
#line 711
goto label_1;
#line 711
label_4:
;
#line 712
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(0));
#line 712
nl_die_arg(___nl__im__52);
#line 713
goto label_1;
#line 713
label_5:
;
#line 714
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 714
nl_die_arg(___nl__im__53);
#line 715
goto label_1;
#line 715
label_6:
;
#line 716
c_rt_lib0move(&___nl__im__54, post_processing0get_call_graph(___nl__im__0));
#line 717
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(182)));
#line 718
c_rt_lib0move(&___nl__im__56,___get_global_const(188));
#line 718
c_rt_lib0delete(c_fe_lib0print(___nl__im__56));
#line 718
c_rt_lib0clear(&___nl__im__56);
#line 719
c_rt_lib0move(&___nl__im__57, dfile0ssave(___nl__im__54));
#line 719
c_rt_lib0move(&___nl__im__59,___get_global_const(119));
#line 719
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__2, ___nl__im__59));
#line 719
c_rt_lib0clear(&___nl__im__59);
#line 719
c_rt_lib0delete(compiler_priv0try_save_file(___nl__im__57, ___nl__im__58, &___nl__im__55));
#line 719
c_rt_lib0clear(&___nl__im__57);
#line 719
c_rt_lib0clear(&___nl__im__58);
#line 720
___nl__bool__60 = c_rt_lib0check_true_native(___nl__im__55);
#line 720
___nl__bool__60 = !___nl__bool__60;
#line 720
if(___nl__bool__60){ goto label_18;}
#line 721
c_rt_lib0move(&___nl__im__61,___get_global_const(189));
#line 721
c_rt_lib0delete(c_fe_lib0print(___nl__im__61));
#line 721
c_rt_lib0clear(&___nl__im__61);
#line 722
goto label_17;
#line 722
label_18:
;
#line 722
label_17:
;
#line 722
//clear ___nl__bool__60;
#line 723
goto label_1;
#line 723
label_1:
;
#line 724
___nl__int__63 = hash0size(___nl__im__5);
#line 724
___nl__int__64 = 0;
#line 724
___nl__int__65 = ___nl__int__63 > ___nl__int__64;
#line 724
___nl__bool__62 = ___nl__int__65;
#line 724
//clear ___nl__int__63;
#line 724
//clear ___nl__int__64;
#line 724
//clear ___nl__int__65;
#line 724
___nl__bool__62 = !___nl__bool__62;
#line 724
if(___nl__bool__62){ goto label_20;}
#line 725
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__5));
#line 725
c_rt_lib0clear(&___nl__im__0);
#line 725
c_rt_lib0clear(&___nl__im__1);
#line 725
c_rt_lib0clear(&___nl__im__2);
#line 725
c_rt_lib0clear(&___nl__im__4);
#line 725
c_rt_lib0clear(&___nl__im__5);
#line 725
//clear ___nl__bool__6;
#line 725
c_rt_lib0clear(&___nl__im__7);
#line 725
c_rt_lib0clear(&___nl__im__8);
#line 725
//clear ___nl__bool__9;
#line 725
c_rt_lib0clear(&___nl__im__10);
#line 725
c_rt_lib0clear(&___nl__im__11);
#line 725
c_rt_lib0clear(&___nl__im__12);
#line 725
c_rt_lib0clear(&___nl__im__13);
#line 725
c_rt_lib0clear(&___nl__im__23);
#line 725
c_rt_lib0clear(&___nl__im__24);
#line 725
c_rt_lib0clear(&___nl__im__25);
#line 725
c_rt_lib0clear(&___nl__im__26);
#line 725
//clear ___nl__bool__27;
#line 725
c_rt_lib0clear(&___nl__im__28);
#line 725
c_rt_lib0clear(&___nl__im__29);
#line 725
c_rt_lib0clear(&___nl__im__30);
#line 725
c_rt_lib0clear(&___nl__im__52);
#line 725
c_rt_lib0clear(&___nl__im__53);
#line 725
c_rt_lib0clear(&___nl__im__54);
#line 725
c_rt_lib0clear(&___nl__im__55);
#line 725
//clear ___nl__bool__62;
#line 725
return ___nl__im__66;
#line 726
goto label_19;
#line 726
label_20:
;
#line 727
c_rt_lib0move(&___nl__im__68,___get_global_const(37));
#line 727
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__68));
#line 727
c_rt_lib0clear(&___nl__im__68);
#line 727
c_rt_lib0clear(&___nl__im__0);
#line 727
c_rt_lib0clear(&___nl__im__1);
#line 727
c_rt_lib0clear(&___nl__im__2);
#line 727
c_rt_lib0clear(&___nl__im__4);
#line 727
c_rt_lib0clear(&___nl__im__5);
#line 727
//clear ___nl__bool__6;
#line 727
c_rt_lib0clear(&___nl__im__7);
#line 727
c_rt_lib0clear(&___nl__im__8);
#line 727
//clear ___nl__bool__9;
#line 727
c_rt_lib0clear(&___nl__im__10);
#line 727
c_rt_lib0clear(&___nl__im__11);
#line 727
c_rt_lib0clear(&___nl__im__12);
#line 727
c_rt_lib0clear(&___nl__im__13);
#line 727
c_rt_lib0clear(&___nl__im__23);
#line 727
c_rt_lib0clear(&___nl__im__24);
#line 727
c_rt_lib0clear(&___nl__im__25);
#line 727
c_rt_lib0clear(&___nl__im__26);
#line 727
//clear ___nl__bool__27;
#line 727
c_rt_lib0clear(&___nl__im__28);
#line 727
c_rt_lib0clear(&___nl__im__29);
#line 727
c_rt_lib0clear(&___nl__im__30);
#line 727
c_rt_lib0clear(&___nl__im__52);
#line 727
c_rt_lib0clear(&___nl__im__53);
#line 727
c_rt_lib0clear(&___nl__im__54);
#line 727
c_rt_lib0clear(&___nl__im__55);
#line 727
//clear ___nl__bool__62;
#line 727
c_rt_lib0clear(&___nl__im__66);
#line 727
return ___nl__im__67;
#line 728
goto label_19;
#line 728
label_19:
;
#line 728
//clear ___nl__bool__62;
#line 728
c_rt_lib0clear(&___nl__im__66);
#line 728
c_rt_lib0clear(&___nl__im__67);
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
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
#line 732
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(64));
#line 732
if(___nl__bool__2){ goto label_2;}
#line 734
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(65));
#line 734
if(___nl__bool__2){ goto label_3;}
#line 736
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(70));
#line 736
if(___nl__bool__2){ goto label_4;}
#line 738
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(71));
#line 738
if(___nl__bool__2){ goto label_5;}
#line 740
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(72));
#line 740
if(___nl__bool__2){ goto label_6;}
#line 742
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(66));
#line 742
if(___nl__bool__2){ goto label_7;}
#line 744
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(67));
#line 744
if(___nl__bool__2){ goto label_8;}
#line 746
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 746
if(___nl__bool__2){ goto label_9;}
#line 748
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(68));
#line 748
if(___nl__bool__2){ goto label_10;}
#line 748
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 748
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 748
nl_die_arg(___nl__im__3);
#line 732
label_2:
;
#line 732
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(64)));
#line 732
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 733
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 733
nl_die_arg(___nl__im__6);
#line 734
goto label_1;
#line 734
label_3:
;
#line 734
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(65)));
#line 734
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 735
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 735
nl_die_arg(___nl__im__9);
#line 736
goto label_1;
#line 736
label_4:
;
#line 736
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(70)));
#line 736
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 737
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 737
nl_die_arg(___nl__im__12);
#line 738
goto label_1;
#line 738
label_5:
;
#line 738
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(71)));
#line 738
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 739
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 739
nl_die_arg(___nl__im__15);
#line 740
goto label_1;
#line 740
label_6:
;
#line 740
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(72)));
#line 740
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 741
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 741
nl_die_arg(___nl__im__18);
#line 742
goto label_1;
#line 742
label_7:
;
#line 742
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(66)));
#line 742
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 743
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(55), ___get_global_const(190)));
#line 743
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__22));
#line 743
c_rt_lib0move(&___nl__im__24, pretty_printer0print_module_to_str(___nl__im__0));
#line 743
c_rt_lib0move(&___nl__im__23, c_fe_lib0string_to_file(___nl__im__19, ___nl__im__24));
#line 743
c_rt_lib0clear(&___nl__im__24);
#line 743
c_rt_lib0move(&___nl__im__21, ptd0ensure(___nl__im__22, ___nl__im__23));
#line 743
c_rt_lib0clear(&___nl__im__22);
#line 743
c_rt_lib0clear(&___nl__im__23);
#line 743
c_rt_lib0clear(&___nl__im__0);
#line 743
c_rt_lib0clear(&___nl__im__1);
#line 743
//clear ___nl__bool__2;
#line 743
c_rt_lib0clear(&___nl__im__3);
#line 743
c_rt_lib0clear(&___nl__im__4);
#line 743
c_rt_lib0clear(&___nl__im__5);
#line 743
c_rt_lib0clear(&___nl__im__6);
#line 743
c_rt_lib0clear(&___nl__im__7);
#line 743
c_rt_lib0clear(&___nl__im__8);
#line 743
c_rt_lib0clear(&___nl__im__9);
#line 743
c_rt_lib0clear(&___nl__im__10);
#line 743
c_rt_lib0clear(&___nl__im__11);
#line 743
c_rt_lib0clear(&___nl__im__12);
#line 743
c_rt_lib0clear(&___nl__im__13);
#line 743
c_rt_lib0clear(&___nl__im__14);
#line 743
c_rt_lib0clear(&___nl__im__15);
#line 743
c_rt_lib0clear(&___nl__im__16);
#line 743
c_rt_lib0clear(&___nl__im__17);
#line 743
c_rt_lib0clear(&___nl__im__18);
#line 743
c_rt_lib0clear(&___nl__im__19);
#line 743
c_rt_lib0clear(&___nl__im__20);
#line 743
return ___nl__im__21;
#line 744
goto label_1;
#line 744
label_8:
;
#line 744
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__1, ___get_global_const(67)));
#line 744
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 745
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(55), ___get_global_const(190)));
#line 745
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 745
c_rt_lib0move(&___nl__im__30, dfile0ssave(___nl__im__0));
#line 745
c_rt_lib0move(&___nl__im__29, c_fe_lib0string_to_file(___nl__im__25, ___nl__im__30));
#line 745
c_rt_lib0clear(&___nl__im__30);
#line 745
c_rt_lib0move(&___nl__im__27, ptd0ensure(___nl__im__28, ___nl__im__29));
#line 745
c_rt_lib0clear(&___nl__im__28);
#line 745
c_rt_lib0clear(&___nl__im__29);
#line 745
c_rt_lib0clear(&___nl__im__0);
#line 745
c_rt_lib0clear(&___nl__im__1);
#line 745
//clear ___nl__bool__2;
#line 745
c_rt_lib0clear(&___nl__im__3);
#line 745
c_rt_lib0clear(&___nl__im__4);
#line 745
c_rt_lib0clear(&___nl__im__5);
#line 745
c_rt_lib0clear(&___nl__im__6);
#line 745
c_rt_lib0clear(&___nl__im__7);
#line 745
c_rt_lib0clear(&___nl__im__8);
#line 745
c_rt_lib0clear(&___nl__im__9);
#line 745
c_rt_lib0clear(&___nl__im__10);
#line 745
c_rt_lib0clear(&___nl__im__11);
#line 745
c_rt_lib0clear(&___nl__im__12);
#line 745
c_rt_lib0clear(&___nl__im__13);
#line 745
c_rt_lib0clear(&___nl__im__14);
#line 745
c_rt_lib0clear(&___nl__im__15);
#line 745
c_rt_lib0clear(&___nl__im__16);
#line 745
c_rt_lib0clear(&___nl__im__17);
#line 745
c_rt_lib0clear(&___nl__im__18);
#line 745
c_rt_lib0clear(&___nl__im__19);
#line 745
c_rt_lib0clear(&___nl__im__20);
#line 745
c_rt_lib0clear(&___nl__im__21);
#line 745
c_rt_lib0clear(&___nl__im__25);
#line 745
c_rt_lib0clear(&___nl__im__26);
#line 745
return ___nl__im__27;
#line 746
goto label_1;
#line 746
label_9:
;
#line 747
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 747
nl_die_arg(___nl__im__31);
#line 748
goto label_1;
#line 748
label_10:
;
#line 749
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 749
nl_die_arg(___nl__im__32);
#line 750
goto label_1;
#line 750
label_1:
;
}

ImmT  compiler_priv0get_dir(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
compiler_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
#line 754
___nl__int__2 = string0length(___nl__im__0);
#line 754
___nl__int__3 = 1;
#line 754
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 754
//clear ___nl__int__2;
#line 754
//clear ___nl__int__3;
#line 755
___nl__int__7 = 1;
#line 755
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__7));
#line 755
//clear ___nl__int__7;
#line 755
c_rt_lib0move(&___nl__im__8,___get_global_const(109));
#line 755
___nl__bool__4 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 755
c_rt_lib0clear(&___nl__im__6);
#line 755
c_rt_lib0clear(&___nl__im__8);
#line 755
if(___nl__bool__4){ goto label_3;}
#line 755
___nl__int__10 = 1;
#line 755
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 755
//clear ___nl__int__10;
#line 755
c_rt_lib0move(&___nl__im__11,___get_global_const(113));
#line 755
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 755
c_rt_lib0clear(&___nl__im__9);
#line 755
c_rt_lib0clear(&___nl__im__11);
#line 755
label_3:
;
#line 755
//clear ___nl__bool__5;
#line 755
___nl__bool__4 = !___nl__bool__4;
#line 755
if(___nl__bool__4){ goto label_2;}
#line 755
___nl__int__12 = 1;
#line 755
___nl__int__1 = ___nl__int__1 - ___nl__int__12;
#line 755
//clear ___nl__int__12;
#line 755
goto label_1;
#line 755
label_2:
;
#line 755
label_1:
;
#line 755
//clear ___nl__bool__4;
#line 756
label_5:
;
#line 756
___nl__int__16 = 0;
#line 756
___nl__int__17 = ___nl__int__1 >= ___nl__int__16;
#line 756
___nl__bool__13 = ___nl__int__17;
#line 756
//clear ___nl__int__16;
#line 756
//clear ___nl__int__17;
#line 756
___nl__bool__15 = !___nl__bool__13;
#line 756
if(___nl__bool__15){ goto label_7;}
#line 756
___nl__int__19 = 1;
#line 756
c_rt_lib0move(&___nl__im__18, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__19));
#line 756
//clear ___nl__int__19;
#line 756
c_rt_lib0move(&___nl__im__20,___get_global_const(109));
#line 756
___nl__bool__13 = c_rt_lib0ne(___nl__im__18, ___nl__im__20);
#line 756
c_rt_lib0clear(&___nl__im__18);
#line 756
c_rt_lib0clear(&___nl__im__20);
#line 756
label_7:
;
#line 756
//clear ___nl__bool__15;
#line 756
___nl__bool__14 = !___nl__bool__13;
#line 756
if(___nl__bool__14){ goto label_6;}
#line 756
___nl__int__22 = 1;
#line 756
c_rt_lib0move(&___nl__im__21, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__22));
#line 756
//clear ___nl__int__22;
#line 756
c_rt_lib0move(&___nl__im__23,___get_global_const(113));
#line 756
___nl__bool__13 = c_rt_lib0ne(___nl__im__21, ___nl__im__23);
#line 756
c_rt_lib0clear(&___nl__im__21);
#line 756
c_rt_lib0clear(&___nl__im__23);
#line 756
label_6:
;
#line 756
//clear ___nl__bool__14;
#line 756
___nl__bool__13 = !___nl__bool__13;
#line 756
if(___nl__bool__13){ goto label_4;}
#line 756
___nl__int__24 = 1;
#line 756
___nl__int__1 = ___nl__int__1 - ___nl__int__24;
#line 756
//clear ___nl__int__24;
#line 756
goto label_5;
#line 756
label_4:
;
#line 757
___nl__int__26 = 0;
#line 757
___nl__int__27 = ___nl__int__1 <= ___nl__int__26;
#line 757
___nl__bool__25 = ___nl__int__27;
#line 757
//clear ___nl__int__26;
#line 757
//clear ___nl__int__27;
#line 757
___nl__bool__25 = !___nl__bool__25;
#line 757
if(___nl__bool__25){ goto label_9;}
#line 757
c_rt_lib0move(&___nl__im__28,___get_global_const(114));
#line 757
c_rt_lib0clear(&___nl__im__0);
#line 757
//clear ___nl__int__1;
#line 757
//clear ___nl__bool__13;
#line 757
//clear ___nl__bool__25;
#line 757
return ___nl__im__28;
#line 757
goto label_8;
#line 757
label_9:
;
#line 757
label_8:
;
#line 757
//clear ___nl__bool__25;
#line 757
c_rt_lib0clear(&___nl__im__28);
#line 758
___nl__int__30 = 0;
#line 758
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__0, ___nl__int__30, ___nl__int__1));
#line 758
//clear ___nl__int__30;
#line 758
c_rt_lib0clear(&___nl__im__0);
#line 758
//clear ___nl__int__1;
#line 758
//clear ___nl__bool__13;
#line 758
return ___nl__im__29;
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
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
bool  ___nl__bool__61 = false;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
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
INT  ___nl__int__77 = 0;
bool  ___nl__bool__78 = false;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
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
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__string__124 = NULL;
INT  ___nl__int__125 = 0;
bool  ___nl__bool__126 = false;
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
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
#line 763
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(65)));
#line 764
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(87)));
#line 765
c_rt_lib0move(&___nl__im__5,___get_global_const(114));
#line 765
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(1, ___nl__im__5));
#line 765
c_rt_lib0clear(&___nl__im__5);
#line 766
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(83)));
#line 767
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 768
c_rt_lib0move(&___nl__im__8, compiler_priv0get_default_math_file());
#line 769
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 770
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(92)));
#line 771
___nl__bool__11 = false;
#line 771
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 772
___nl__bool__13 = false;
#line 772
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 772
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(102), ___nl__im__2, ___get_global_const(101), ___nl__im__3, ___get_global_const(96), ___nl__im__4, ___get_global_const(99), ___nl__im__6, ___get_global_const(98), ___nl__im__7, ___get_global_const(100), ___nl__im__8, ___get_global_const(97), ___nl__im__9, ___get_global_const(103), ___nl__im__10, ___get_global_const(104), ___nl__im__12, ___get_global_const(105), ___nl__im__14));
#line 772
c_rt_lib0clear(&___nl__im__2);
#line 772
c_rt_lib0clear(&___nl__im__3);
#line 772
c_rt_lib0clear(&___nl__im__4);
#line 772
c_rt_lib0clear(&___nl__im__6);
#line 772
c_rt_lib0clear(&___nl__im__7);
#line 772
c_rt_lib0clear(&___nl__im__8);
#line 772
c_rt_lib0clear(&___nl__im__9);
#line 772
c_rt_lib0clear(&___nl__im__10);
#line 772
//clear ___nl__bool__11;
#line 772
c_rt_lib0clear(&___nl__im__12);
#line 772
//clear ___nl__bool__13;
#line 772
c_rt_lib0clear(&___nl__im__14);
#line 774
___nl__bool__15 = false;
#line 775
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_cache_name());
#line 776
___nl__int__17 = 1;
#line 776
label_2:
;
#line 776
___nl__int__19 = c_rt_lib0array_len(___nl__im__0);
#line 776
___nl__int__20 = ___nl__int__17 < ___nl__int__19;
#line 776
___nl__bool__18 = ___nl__int__20;
#line 776
//clear ___nl__int__19;
#line 776
//clear ___nl__int__20;
#line 776
___nl__bool__18 = !___nl__bool__18;
#line 776
if(___nl__bool__18){ goto label_1;}
#line 777
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 778
___nl__int__24 = string0length(___nl__im__21);
#line 778
___nl__int__25 = 2;
#line 778
___nl__int__26 = ___nl__int__24 >= ___nl__int__25;
#line 778
___nl__bool__22 = ___nl__int__26;
#line 778
//clear ___nl__int__24;
#line 778
//clear ___nl__int__25;
#line 778
//clear ___nl__int__26;
#line 778
___nl__bool__23 = !___nl__bool__22;
#line 778
if(___nl__bool__23){ goto label_6;}
#line 778
___nl__int__28 = 0;
#line 778
___nl__int__29 = 2;
#line 778
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__21, ___nl__int__28, ___nl__int__29));
#line 778
//clear ___nl__int__28;
#line 778
//clear ___nl__int__29;
#line 778
c_rt_lib0move(&___nl__im__30,___get_global_const(191));
#line 778
___nl__bool__22 = c_rt_lib0eq(___nl__im__27, ___nl__im__30);
#line 778
c_rt_lib0clear(&___nl__im__27);
#line 778
c_rt_lib0clear(&___nl__im__30);
#line 778
label_6:
;
#line 778
//clear ___nl__bool__23;
#line 778
___nl__bool__22 = !___nl__bool__22;
#line 778
if(___nl__bool__22){ goto label_5;}
#line 779
___nl__int__32 = 2;
#line 779
___nl__int__34 = string0length(___nl__im__21);
#line 779
___nl__int__35 = 2;
#line 779
___nl__int__33 = ___nl__int__34 - ___nl__int__35;
#line 779
//clear ___nl__int__34;
#line 779
//clear ___nl__int__35;
#line 779
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__21, ___nl__int__32, ___nl__int__33));
#line 779
//clear ___nl__int__32;
#line 779
//clear ___nl__int__33;
#line 780
c_rt_lib0move(&___nl__im__37,___get_global_const(98));
#line 780
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__37);
#line 780
c_rt_lib0clear(&___nl__im__37);
#line 780
___nl__bool__36 = !___nl__bool__36;
#line 780
if(___nl__bool__36){ goto label_8;}
#line 781
c_rt_lib0move(&___nl__im__40,___get_global_const(37));
#line 781
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(77), ___nl__im__40));
#line 781
c_rt_lib0clear(&___nl__im__40);
#line 781
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 781
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(98), ___nl__im__38);
#line 781
c_rt_lib0clear(&___nl__im__38);
#line 781
c_rt_lib0clear(&___nl__im__39);
#line 782
goto label_7;
#line 782
label_8:
;
#line 782
c_rt_lib0move(&___nl__im__41,___get_global_const(64));
#line 782
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__41);
#line 782
c_rt_lib0clear(&___nl__im__41);
#line 782
___nl__bool__36 = !___nl__bool__36;
#line 782
if(___nl__bool__36){ goto label_9;}
#line 783
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(64)));
#line 783
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 783
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(102), ___nl__im__42);
#line 783
c_rt_lib0clear(&___nl__im__42);
#line 783
c_rt_lib0clear(&___nl__im__43);
#line 784
goto label_7;
#line 784
label_9:
;
#line 784
c_rt_lib0move(&___nl__im__44,___get_global_const(67));
#line 784
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__44);
#line 784
c_rt_lib0clear(&___nl__im__44);
#line 784
___nl__bool__36 = !___nl__bool__36;
#line 784
if(___nl__bool__36){ goto label_10;}
#line 785
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(67)));
#line 785
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 785
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(102), ___nl__im__45);
#line 785
c_rt_lib0clear(&___nl__im__45);
#line 785
c_rt_lib0clear(&___nl__im__46);
#line 786
goto label_7;
#line 786
label_10:
;
#line 786
c_rt_lib0move(&___nl__im__47,___get_global_const(65));
#line 786
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__47);
#line 786
c_rt_lib0clear(&___nl__im__47);
#line 786
___nl__bool__36 = !___nl__bool__36;
#line 786
if(___nl__bool__36){ goto label_11;}
#line 787
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_const(65)));
#line 787
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 787
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(102), ___nl__im__48);
#line 787
c_rt_lib0clear(&___nl__im__48);
#line 787
c_rt_lib0clear(&___nl__im__49);
#line 788
goto label_7;
#line 788
label_11:
;
#line 788
c_rt_lib0move(&___nl__im__50,___get_global_const(68));
#line 788
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__50);
#line 788
c_rt_lib0clear(&___nl__im__50);
#line 788
___nl__bool__36 = !___nl__bool__36;
#line 788
if(___nl__bool__36){ goto label_12;}
#line 789
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_none(___get_global_const(68)));
#line 789
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 789
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(102), ___nl__im__51);
#line 789
c_rt_lib0clear(&___nl__im__51);
#line 789
c_rt_lib0clear(&___nl__im__52);
#line 790
goto label_7;
#line 790
label_12:
;
#line 790
c_rt_lib0move(&___nl__im__53,___get_global_const(66));
#line 790
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__53);
#line 790
c_rt_lib0clear(&___nl__im__53);
#line 790
___nl__bool__36 = !___nl__bool__36;
#line 790
if(___nl__bool__36){ goto label_13;}
#line 791
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(66)));
#line 791
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 791
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(102), ___nl__im__54);
#line 791
c_rt_lib0clear(&___nl__im__54);
#line 791
c_rt_lib0clear(&___nl__im__55);
#line 792
c_rt_lib0move(&___nl__im__16, compiler_priv0get_dir_pretty_name());
#line 793
goto label_7;
#line 793
label_13:
;
#line 793
c_rt_lib0move(&___nl__im__56,___get_global_const(89));
#line 793
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__56);
#line 793
c_rt_lib0clear(&___nl__im__56);
#line 793
___nl__bool__36 = !___nl__bool__36;
#line 793
if(___nl__bool__36){ goto label_14;}
#line 794
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_const(89)));
#line 794
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 794
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(101), ___nl__im__57);
#line 794
c_rt_lib0clear(&___nl__im__57);
#line 794
c_rt_lib0clear(&___nl__im__58);
#line 795
goto label_7;
#line 795
label_14:
;
#line 795
c_rt_lib0move(&___nl__im__59,___get_global_const(90));
#line 795
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__59);
#line 795
c_rt_lib0clear(&___nl__im__59);
#line 795
___nl__bool__36 = !___nl__bool__36;
#line 795
if(___nl__bool__36){ goto label_15;}
#line 796
___nl__int__60 = 1;
#line 796
___nl__int__17 = ___nl__int__17 + ___nl__int__60;
#line 796
//clear ___nl__int__60;
#line 797
___nl__int__62 = c_rt_lib0array_len(___nl__im__0);
#line 797
___nl__int__63 = ___nl__int__17 < ___nl__int__62;
#line 797
___nl__bool__61 = ___nl__int__63;
#line 797
//clear ___nl__int__62;
#line 797
//clear ___nl__int__63;
#line 797
___nl__bool__61 = !___nl__bool__61;
#line 797
___nl__bool__61 = !___nl__bool__61;
#line 797
if(___nl__bool__61){ goto label_17;}
#line 797
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(0));
#line 797
nl_die_arg(___nl__im__64);
#line 797
goto label_16;
#line 797
label_17:
;
#line 797
label_16:
;
#line 797
//clear ___nl__bool__61;
#line 797
c_rt_lib0clear(&___nl__im__64);
#line 798
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 798
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(90), ___nl__im__67));
#line 798
c_rt_lib0clear(&___nl__im__67);
#line 798
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 798
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(101), ___nl__im__65);
#line 798
c_rt_lib0clear(&___nl__im__65);
#line 798
c_rt_lib0clear(&___nl__im__66);
#line 799
goto label_7;
#line 799
label_15:
;
#line 799
c_rt_lib0move(&___nl__im__68,___get_global_const(87));
#line 799
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__68);
#line 799
c_rt_lib0clear(&___nl__im__68);
#line 799
___nl__bool__36 = !___nl__bool__36;
#line 799
if(___nl__bool__36){ goto label_18;}
#line 800
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_const(87)));
#line 800
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 800
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(101), ___nl__im__69);
#line 800
c_rt_lib0clear(&___nl__im__69);
#line 800
c_rt_lib0clear(&___nl__im__70);
#line 801
goto label_7;
#line 801
label_18:
;
#line 801
c_rt_lib0move(&___nl__im__71,___get_global_const(88));
#line 801
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__71);
#line 801
c_rt_lib0clear(&___nl__im__71);
#line 801
___nl__bool__36 = !___nl__bool__36;
#line 801
if(___nl__bool__36){ goto label_19;}
#line 802
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_const(88)));
#line 802
c_rt_lib0copy(&___nl__im__72, ___nl__im__73);
#line 802
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(101), ___nl__im__72);
#line 802
c_rt_lib0clear(&___nl__im__72);
#line 802
c_rt_lib0clear(&___nl__im__73);
#line 803
goto label_7;
#line 803
label_19:
;
#line 803
c_rt_lib0move(&___nl__im__75,___get_global_const(192));
#line 803
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__75);
#line 803
c_rt_lib0clear(&___nl__im__75);
#line 803
if(___nl__bool__36){ goto label_21;}
#line 803
c_rt_lib0move(&___nl__im__76,___get_global_const(193));
#line 803
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__76);
#line 803
c_rt_lib0clear(&___nl__im__76);
#line 803
label_21:
;
#line 803
//clear ___nl__bool__74;
#line 803
___nl__bool__36 = !___nl__bool__36;
#line 803
if(___nl__bool__36){ goto label_20;}
#line 804
___nl__int__77 = 1;
#line 804
___nl__int__17 = ___nl__int__17 + ___nl__int__77;
#line 804
//clear ___nl__int__77;
#line 805
___nl__int__79 = c_rt_lib0array_len(___nl__im__0);
#line 805
___nl__int__80 = ___nl__int__17 < ___nl__int__79;
#line 805
___nl__bool__78 = ___nl__int__80;
#line 805
//clear ___nl__int__79;
#line 805
//clear ___nl__int__80;
#line 805
___nl__bool__78 = !___nl__bool__78;
#line 805
___nl__bool__78 = !___nl__bool__78;
#line 805
if(___nl__bool__78){ goto label_23;}
#line 805
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(0));
#line 805
nl_die_arg(___nl__im__81);
#line 805
goto label_22;
#line 805
label_23:
;
#line 805
label_22:
;
#line 805
//clear ___nl__bool__78;
#line 805
c_rt_lib0clear(&___nl__im__81);
#line 806
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 806
c_rt_lib0move(&___nl__im__85,___get_global_const(109));
#line 806
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 806
c_rt_lib0clear(&___nl__im__84);
#line 806
c_rt_lib0clear(&___nl__im__85);
#line 806
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 806
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(97), ___nl__im__82);
#line 806
c_rt_lib0clear(&___nl__im__82);
#line 806
c_rt_lib0clear(&___nl__im__83);
#line 807
goto label_7;
#line 807
label_20:
;
#line 807
c_rt_lib0move(&___nl__im__86,___get_global_const(194));
#line 807
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__86);
#line 807
c_rt_lib0clear(&___nl__im__86);
#line 807
___nl__bool__36 = !___nl__bool__36;
#line 807
if(___nl__bool__36){ goto label_24;}
#line 808
___nl__int__87 = 1;
#line 808
___nl__int__17 = ___nl__int__17 + ___nl__int__87;
#line 808
//clear ___nl__int__87;
#line 809
___nl__int__89 = c_rt_lib0array_len(___nl__im__0);
#line 809
___nl__int__90 = ___nl__int__17 < ___nl__int__89;
#line 809
___nl__bool__88 = ___nl__int__90;
#line 809
//clear ___nl__int__89;
#line 809
//clear ___nl__int__90;
#line 809
___nl__bool__88 = !___nl__bool__88;
#line 809
___nl__bool__88 = !___nl__bool__88;
#line 809
if(___nl__bool__88){ goto label_26;}
#line 809
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 809
nl_die_arg(___nl__im__91);
#line 809
goto label_25;
#line 809
label_26:
;
#line 809
label_25:
;
#line 809
//clear ___nl__bool__88;
#line 809
c_rt_lib0clear(&___nl__im__91);
#line 810
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get(___nl__im__0, ___nl__int__17));
#line 810
c_rt_lib0copy(&___nl__im__92, ___nl__im__93);
#line 810
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(100), ___nl__im__92);
#line 810
c_rt_lib0clear(&___nl__im__92);
#line 810
c_rt_lib0clear(&___nl__im__93);
#line 811
goto label_7;
#line 811
label_24:
;
#line 811
c_rt_lib0move(&___nl__im__94,___get_global_const(195));
#line 811
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__94);
#line 811
c_rt_lib0clear(&___nl__im__94);
#line 811
___nl__bool__36 = !___nl__bool__36;
#line 811
if(___nl__bool__36){ goto label_27;}
#line 812
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_none(___get_global_const(82)));
#line 812
c_rt_lib0copy(&___nl__im__95, ___nl__im__96);
#line 812
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(99), ___nl__im__95);
#line 812
c_rt_lib0clear(&___nl__im__95);
#line 812
c_rt_lib0clear(&___nl__im__96);
#line 813
goto label_7;
#line 813
label_27:
;
#line 813
c_rt_lib0move(&___nl__im__97,___get_global_const(196));
#line 813
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__97);
#line 813
c_rt_lib0clear(&___nl__im__97);
#line 813
___nl__bool__36 = !___nl__bool__36;
#line 813
if(___nl__bool__36){ goto label_28;}
#line 814
c_rt_lib0move(&___nl__im__99, c_rt_lib0ov_mk_none(___get_global_const(83)));
#line 814
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 814
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(99), ___nl__im__98);
#line 814
c_rt_lib0clear(&___nl__im__98);
#line 814
c_rt_lib0clear(&___nl__im__99);
#line 815
goto label_7;
#line 815
label_28:
;
#line 815
c_rt_lib0move(&___nl__im__100,___get_global_const(197));
#line 815
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__100);
#line 815
c_rt_lib0clear(&___nl__im__100);
#line 815
___nl__bool__36 = !___nl__bool__36;
#line 815
if(___nl__bool__36){ goto label_29;}
#line 816
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_none(___get_global_const(84)));
#line 816
c_rt_lib0copy(&___nl__im__101, ___nl__im__102);
#line 816
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(99), ___nl__im__101);
#line 816
c_rt_lib0clear(&___nl__im__101);
#line 816
c_rt_lib0clear(&___nl__im__102);
#line 817
goto label_7;
#line 817
label_29:
;
#line 817
c_rt_lib0move(&___nl__im__103,___get_global_const(198));
#line 817
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__103);
#line 817
c_rt_lib0clear(&___nl__im__103);
#line 817
___nl__bool__36 = !___nl__bool__36;
#line 817
if(___nl__bool__36){ goto label_30;}
#line 818
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_none(___get_global_const(85)));
#line 818
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 818
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(99), ___nl__im__104);
#line 818
c_rt_lib0clear(&___nl__im__104);
#line 818
c_rt_lib0clear(&___nl__im__105);
#line 819
goto label_7;
#line 819
label_30:
;
#line 819
c_rt_lib0move(&___nl__im__106,___get_global_const(199));
#line 819
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__106);
#line 819
c_rt_lib0clear(&___nl__im__106);
#line 819
___nl__bool__36 = !___nl__bool__36;
#line 819
if(___nl__bool__36){ goto label_31;}
#line 820
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_none(___get_global_const(86)));
#line 820
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 820
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(99), ___nl__im__107);
#line 820
c_rt_lib0clear(&___nl__im__107);
#line 820
c_rt_lib0clear(&___nl__im__108);
#line 821
goto label_7;
#line 821
label_31:
;
#line 821
c_rt_lib0move(&___nl__im__109,___get_global_const(200));
#line 821
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__109);
#line 821
c_rt_lib0clear(&___nl__im__109);
#line 821
___nl__bool__36 = !___nl__bool__36;
#line 821
if(___nl__bool__36){ goto label_32;}
#line 822
c_rt_lib0move(&___nl__im__111, c_rt_lib0ov_mk_none(___get_global_const(93)));
#line 822
c_rt_lib0copy(&___nl__im__110, ___nl__im__111);
#line 822
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(103), ___nl__im__110);
#line 822
c_rt_lib0clear(&___nl__im__110);
#line 822
c_rt_lib0clear(&___nl__im__111);
#line 823
goto label_7;
#line 823
label_32:
;
#line 823
c_rt_lib0move(&___nl__im__112,___get_global_const(104));
#line 823
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__112);
#line 823
c_rt_lib0clear(&___nl__im__112);
#line 823
___nl__bool__36 = !___nl__bool__36;
#line 823
if(___nl__bool__36){ goto label_33;}
#line 824
___nl__bool__114 = true;
#line 824
c_rt_lib0move(&___nl__im__113, c_rt_lib0bool_to_nl_native(___nl__bool__114));
#line 824
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(104), ___nl__im__113);
#line 824
c_rt_lib0clear(&___nl__im__113);
#line 824
//clear ___nl__bool__114;
#line 825
goto label_7;
#line 825
label_33:
;
#line 825
c_rt_lib0move(&___nl__im__115,___get_global_const(105));
#line 825
___nl__bool__36 = c_rt_lib0eq(___nl__im__31, ___nl__im__115);
#line 825
c_rt_lib0clear(&___nl__im__115);
#line 825
___nl__bool__36 = !___nl__bool__36;
#line 825
if(___nl__bool__36){ goto label_34;}
#line 826
___nl__bool__117 = true;
#line 826
c_rt_lib0move(&___nl__im__116, c_rt_lib0bool_to_nl_native(___nl__bool__117));
#line 826
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(105), ___nl__im__116);
#line 826
c_rt_lib0clear(&___nl__im__116);
#line 826
//clear ___nl__bool__117;
#line 827
goto label_7;
#line 827
label_34:
;
#line 828
c_rt_lib0move(&___nl__im__119,___get_global_const(201));
#line 828
c_rt_lib0move(&___nl__im__118, c_rt_lib0concat_new(___nl__im__119, ___nl__im__21));
#line 828
c_rt_lib0clear(&___nl__im__119);
#line 828
c_rt_lib0delete(c_fe_lib0print(___nl__im__118));
#line 828
c_rt_lib0clear(&___nl__im__118);
#line 829
goto label_7;
#line 829
label_7:
;
#line 829
//clear ___nl__bool__36;
#line 830
goto label_4;
#line 830
label_5:
;
#line 831
___nl__bool__120 = ___nl__bool__15;
#line 831
___nl__bool__120 = !___nl__bool__120;
#line 831
___nl__bool__120 = !___nl__bool__120;
#line 831
if(___nl__bool__120){ goto label_36;}
#line 831
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 831
c_rt_lib0copy(&___nl__im__121, ___nl__im__122);
#line 831
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(96), ___nl__im__121);
#line 831
c_rt_lib0clear(&___nl__im__121);
#line 831
c_rt_lib0clear(&___nl__im__122);
#line 831
goto label_35;
#line 831
label_36:
;
#line 831
label_35:
;
#line 831
//clear ___nl__bool__120;
#line 832
c_rt_lib0move(&___nl__im__123,___get_global_const(96));
#line 832
c_rt_lib0move(&___nl__im__123, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__123));
#line 832
c_rt_lib0delete(array0push(&___nl__im__123, ___nl__im__21));
#line 832
c_rt_lib0move(&___nl__string__124,___get_global_const(96));
#line 832
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__124, ___nl__im__123));
#line 832
c_rt_lib0clear(&___nl__im__123);
#line 832
c_rt_lib0clear(&___nl__string__124);
#line 833
___nl__bool__15 = true;
#line 834
goto label_4;
#line 834
label_4:
;
#line 834
//clear ___nl__bool__22;
#line 834
c_rt_lib0clear(&___nl__im__31);
#line 834
label_3:
;
#line 776
___nl__int__125 = 1;
#line 776
___nl__int__17 = ___nl__int__17 + ___nl__int__125;
#line 776
//clear ___nl__int__125;
#line 835
goto label_2;
#line 835
label_1:
;
#line 836
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(97)));
#line 836
c_rt_lib0move(&___nl__im__128,___get_global_const(37));
#line 836
___nl__bool__126 = c_rt_lib0eq(___nl__im__127, ___nl__im__128);
#line 836
c_rt_lib0clear(&___nl__im__127);
#line 836
c_rt_lib0clear(&___nl__im__128);
#line 836
___nl__bool__126 = !___nl__bool__126;
#line 836
if(___nl__bool__126){ goto label_38;}
#line 837
c_rt_lib0move(&___nl__im__132,___get_global_const(202));
#line 837
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__im__16));
#line 837
c_rt_lib0clear(&___nl__im__132);
#line 837
c_rt_lib0move(&___nl__im__133,___get_global_const(109));
#line 837
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__131, ___nl__im__133));
#line 837
c_rt_lib0clear(&___nl__im__131);
#line 837
c_rt_lib0clear(&___nl__im__133);
#line 837
c_rt_lib0copy(&___nl__im__129, ___nl__im__130);
#line 837
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(97), ___nl__im__129);
#line 837
c_rt_lib0clear(&___nl__im__129);
#line 837
c_rt_lib0clear(&___nl__im__130);
#line 838
goto label_37;
#line 838
label_38:
;
#line 838
label_37:
;
#line 838
//clear ___nl__bool__126;
#line 839
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(98)));
#line 839
___nl__bool__134 = c_rt_lib0priv_is(___nl__im__135, ___get_global_const(77));
#line 839
c_rt_lib0clear(&___nl__im__135);
#line 839
___nl__bool__134 = !___nl__bool__134;
#line 839
if(___nl__bool__134){ goto label_40;}
#line 839
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(97)));
#line 839
c_rt_lib0move(&___nl__im__140, compiler_priv0get_default_deref_file());
#line 839
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__140));
#line 839
c_rt_lib0clear(&___nl__im__139);
#line 839
c_rt_lib0clear(&___nl__im__140);
#line 839
c_rt_lib0move(&___nl__im__137, c_rt_lib0ov_mk_arg(___get_global_const(77), ___nl__im__138));
#line 839
c_rt_lib0clear(&___nl__im__138);
#line 839
c_rt_lib0copy(&___nl__im__136, ___nl__im__137);
#line 839
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(98), ___nl__im__136);
#line 839
c_rt_lib0clear(&___nl__im__136);
#line 839
c_rt_lib0clear(&___nl__im__137);
#line 839
goto label_39;
#line 839
label_40:
;
#line 839
label_39:
;
#line 839
//clear ___nl__bool__134;
#line 840
c_rt_lib0clear(&___nl__im__0);
#line 840
//clear ___nl__bool__15;
#line 840
c_rt_lib0clear(&___nl__im__16);
#line 840
//clear ___nl__int__17;
#line 840
//clear ___nl__bool__18;
#line 840
c_rt_lib0clear(&___nl__im__21);
#line 840
return ___nl__im__1;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
