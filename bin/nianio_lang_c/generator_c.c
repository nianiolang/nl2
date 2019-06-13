
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "generator_c.h"
#include "own.h"
#include "own_array.h"
#include "ptd.h"
#include "nlasm.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "singleton.h"
#include "nl.h"
#include "tct.h"
#include "generator_c_struct_dependence_sort.h"
#include "anon_naming.h"
#include "own_to_im_converter.h"
#include "generator_c.h"
#include "tct.h"
#include "nlasm.h"
#line 1 "generator_c.nl"

static ImmT *__const__f = NULL;
void generator_c_priv0__const__init();
ImmT generator_c_priv0__const__sim(int __nr);
ImmT generator_c_priv0__const__sing(int __nr);

void generator_c0anon_type00RBanon_type00ownarranon_type00im0arr0anon_type00im0hash0RE0clean(anon_type00RBanon_type00ownarranon_type00im0arr0anon_type00im0hash0RE rec) {
generator_c0anon_type00ownarranon_type00im0clean(rec.arr0field);;
c_rt_lib0delete(rec.hash0field);
}
void generator_c0anon_type00RBanon_type00ownarranon_type00im0arr0anon_type00im0hash0RE0free(anon_type00RBanon_type00ownarranon_type00im0arr0anon_type00im0hash0RE *rec) {
generator_c0anon_type00RBanon_type00ownarranon_type00im0arr0anon_type00im0hash0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void generator_c0const_t0type0clean(generator_c0const_t0type rec) {
generator_c0anon_type00ownarranon_type00im0clean(rec.arr0field);;
c_rt_lib0delete(rec.hash0field);
}
void generator_c0const_t0type0free(generator_c0const_t0type *rec) {
generator_c0const_t0type0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void generator_c0anon_type00RBanon_type00im0defined_types0anon_type00ownhashanon_type00bool0additional_imports0anon_type00refnlasm0reg_type0type0ret_reg_type0anon_type00im0header0anon_type00refgenerator_c0global_const_t0type0global_string_const0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0const0anon_type00im0mod_name0anon_type00refgenerator_c0global_const_t0type0global_int_const0anon_type00im0ret0anon_type00refgenerator_c0fun_args_t0type0fun_args0RE0clean(anon_type00RBanon_type00im0defined_types0anon_type00ownhashanon_type00bool0additional_imports0anon_type00refnlasm0reg_type0type0ret_reg_type0anon_type00im0header0anon_type00refgenerator_c0global_const_t0type0global_string_const0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0const0anon_type00im0mod_name0anon_type00refgenerator_c0global_const_t0type0global_int_const0anon_type00im0ret0anon_type00refgenerator_c0fun_args_t0type0fun_args0RE rec) {
c_rt_lib0delete(rec.defined_types0field);
generator_c0anon_type00ownhashanon_type00bool0clean(rec.additional_imports0field);;
c_rt_lib0delete(rec.ret_reg_type0field);
c_rt_lib0delete(rec.header0field);
c_rt_lib0delete(rec.global_string_const0field);
generator_c0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(rec.const0field);;
c_rt_lib0delete(rec.mod_name0field);
c_rt_lib0delete(rec.global_int_const0field);
c_rt_lib0delete(rec.ret0field);
c_rt_lib0delete(rec.fun_args0field);
}
void generator_c0anon_type00RBanon_type00im0defined_types0anon_type00ownhashanon_type00bool0additional_imports0anon_type00refnlasm0reg_type0type0ret_reg_type0anon_type00im0header0anon_type00refgenerator_c0global_const_t0type0global_string_const0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0const0anon_type00im0mod_name0anon_type00refgenerator_c0global_const_t0type0global_int_const0anon_type00im0ret0anon_type00refgenerator_c0fun_args_t0type0fun_args0RE0free(anon_type00RBanon_type00im0defined_types0anon_type00ownhashanon_type00bool0additional_imports0anon_type00refnlasm0reg_type0type0ret_reg_type0anon_type00im0header0anon_type00refgenerator_c0global_const_t0type0global_string_const0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0const0anon_type00im0mod_name0anon_type00refgenerator_c0global_const_t0type0global_int_const0anon_type00im0ret0anon_type00refgenerator_c0fun_args_t0type0fun_args0RE *rec) {
generator_c0anon_type00RBanon_type00im0defined_types0anon_type00ownhashanon_type00bool0additional_imports0anon_type00refnlasm0reg_type0type0ret_reg_type0anon_type00im0header0anon_type00refgenerator_c0global_const_t0type0global_string_const0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0const0anon_type00im0mod_name0anon_type00refgenerator_c0global_const_t0type0global_int_const0anon_type00im0ret0anon_type00refgenerator_c0fun_args_t0type0fun_args0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void generator_c0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE rec) {
generator_c0const_t0type0clean(rec.int0field);;
generator_c0const_t0type0clean(rec.string0field);;
generator_c0const_t0type0clean(rec.singleton0field);;
;
}
void generator_c0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0free(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE *rec) {
generator_c0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
bool  *generator_c0anon_type00ownhashanon_type00bool0get_ptr(anon_type00ownhashanon_type00bool *hash, ImmT key, bool create_if_not_exist) {
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
INT generator_c0anon_type00ownhashanon_type00bool0next_iter(anon_type00ownhashanon_type00bool *hash, INT last_iter){
	INT iter = last_iter + 1;
	while (iter + 1 < hash->capacity && hash->keys[iter] == NULL) {
		iter++;
	}
	if (iter == hash->capacity || hash->keys[iter] == NULL) return -1;
	return iter;
}
void generator_c0anon_type00ownhashanon_type00bool0clean(anon_type00ownhashanon_type00bool hash) {
for (unsigned int i = 0; i < hash.capacity; i++) {
	if (hash.keys[i] != NULL) {
		c_rt_lib0delete(hash.keys[i]);
		;
	}
}
free_mem(hash.values, sizeof(bool )*hash.capacity);
free_mem(hash.keys, sizeof(ImmT)*hash.capacity);
}
void generator_c0anon_type00ownhashanon_type00bool0free(anon_type00ownhashanon_type00bool *hash) {
generator_c0anon_type00ownhashanon_type00bool0clean(*hash);
free_mem(hash, sizeof(*hash));
}
void generator_c0anon_type00ownarranon_type00im0push(anon_type00ownarranon_type00im *arr, ImmT  arg) {
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
ImmT  *generator_c0anon_type00ownarranon_type00im0get_ptr(anon_type00ownarranon_type00im *arr, INT index) {
if (index < 0 || index >= arr->size) {
nl_die();
}
return &(arr->value[index]);
}
INT generator_c0anon_type00ownarranon_type00im0len(anon_type00ownarranon_type00im *arr) {
return arr->size;
}
void generator_c0anon_type00ownarranon_type00im0clean(anon_type00ownarranon_type00im arr) {
if (arr.value == NULL) return;
for (unsigned int i = 0; i < arr.size; i++) {
	c_rt_lib0delete(arr.value[i]);
}
free_mem(arr.value, sizeof(ImmT )*arr.capacity);
}
void generator_c0anon_type00ownarranon_type00im0free(anon_type00ownarranon_type00im *arr) {
generator_c0anon_type00ownarranon_type00im0clean(*arr);
free_mem(arr, sizeof(*arr));
}
void generator_c0state_t0type0clean(generator_c0state_t0type rec) {
c_rt_lib0delete(rec.defined_types0field);
generator_c0anon_type00ownhashanon_type00bool0clean(rec.additional_imports0field);;
c_rt_lib0delete(rec.ret_reg_type0field);
c_rt_lib0delete(rec.header0field);
c_rt_lib0delete(rec.global_string_const0field);
generator_c0anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(rec.const0field);;
c_rt_lib0delete(rec.mod_name0field);
c_rt_lib0delete(rec.global_int_const0field);
c_rt_lib0delete(rec.ret0field);
c_rt_lib0delete(rec.fun_args0field);
}
void generator_c0state_t0type0free(generator_c0state_t0type *rec) {
generator_c0state_t0type0clean(*rec);
free_mem(rec, sizeof(*rec));
}
ImmT  generator_c_priv0get_bin_ops();
ImmT  generator_c_priv0get_bin_ops_mod();
ImmT  generator_c_priv0get_unary_ops();
ImmT  generator_c_priv0gen_unary_ops();
ImmT  generator_c_priv0gen_bin_ops();
ImmT  generator_c_priv0gen_bin_ops_mod();
ImmT  generator_c_priv0print(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0print_to_header(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0println_to_header(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0im_t();
ImmT  generator_c_priv0int_t();
ImmT  generator_c_priv0bool_t();
ImmT  generator_c_priv0println(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_reg_value(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1);
ImmT  generator_c_priv0get_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1);
ImmT  generator_c_priv0get_reg_ref(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1);
ImmT  generator_c_priv0get_string(ImmT  ___nl__im__0);
ImmT  generator_c_priv0gather_types(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
generator_c0module_out_t0type generator_c_priv0generate_global_const_files(generator_c0state_t0type* ___ref___rec__0);
ImmT  generator_c_priv0get_include(ImmT  ___nl__im__0);
ImmT  generator_c_priv0get_system_include(ImmT  ___nl__im__0);
ImmT  generator_c_priv0get_cr();
ImmT  generator_c_priv0get_function_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_function_header(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
INT  generator_c_priv0get_const(generator_c0const_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0insert_const_to_modules_hash(generator_c0global_const_t0type* ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
INT  generator_c_priv0get_global_const(generator_c0global_const_t0type* ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3);
ImmT  generator_c_priv0clear_module_from_const(generator_c0global_const_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_const_int(generator_c0state_t0type* ___ref___rec__0,INT  ___nl__int__1);
ImmT  generator_c_priv0get_const_string(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_const_singleton(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_func_ptr_header(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0print_mod(generator_c0state_t0type* ___ref___rec__0,nlasm0result_t0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0print_init_const(generator_c0state_t0type* ___ref___rec__0);
ImmT  generator_c_priv0print_function_block(generator_c0state_t0type* ___ref___rec__0,nlasm0function_t0type ___nl__im__1,ImmT  ___nl__im__2);
bool  generator_c_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0);
ImmT  generator_c_priv0move_args_to_register(generator_c0state_t0type* ___ref___rec__0);
ImmT  generator_c_priv0get_fun_lib(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_module_name(ImmT  ___nl__im__0);
ImmT  generator_c_priv0get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0get_lib_fun(ImmT  ___nl__im__0);
ImmT  generator_c_priv0generate_imm(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_func_pointer(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0print_cmd(generator_c0state_t0type* ___ref___rec__0,nlasm0cmd_t0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0print_declaration(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0get_own_to_im_fun(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0print_move(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2);
ImmT  generator_c_priv0print_move_to_im(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2);
ImmT  generator_c_priv0print_move_to_string(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2);
ImmT  generator_c_priv0get_im_from_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1);
ImmT  generator_c_priv0get_im_from_value(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_value_from_im(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0print_bin_op(generator_c0state_t0type* ___ref___rec__0,nlasm0bin_op0type ___nl__im__1);
ImmT  generator_c_priv0print_hash_declaration(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_decl_t0type ___nl__im__1);
ImmT  generator_c_priv0print_use_field(generator_c0state_t0type* ___ref___rec__0,nlasm0use_field_t0type ___nl__im__1);
ImmT  generator_c_priv0print_use_index(generator_c0state_t0type* ___ref___rec__0,nlasm0use_index_t0type ___nl__im__1);
ImmT  generator_c_priv0print_use_hash_index(generator_c0state_t0type* ___ref___rec__0,nlasm0use_hash_index_t0type ___nl__im__1);
ImmT  generator_c_priv0print_use_variant(generator_c0state_t0type* ___ref___rec__0,nlasm0use_variant_t0type ___nl__im__1);
ImmT  generator_c_priv0print_hash_init_iter(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_iter_t0type ___nl__im__1);
ImmT  generator_c_priv0print_hash_next_iter(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_iter_t0type ___nl__im__1);
ImmT  generator_c_priv0print_hash_get_key_iter(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_dest_iter_t0type ___nl__im__1);
ImmT  generator_c_priv0print_hash_is_end(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_dest_iter_t0type ___nl__im__1);
ImmT  generator_c_priv0print_get_val(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,ImmT  ___nl__im__3);
ImmT  generator_c_priv0get_assign(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0generate_call(generator_c0state_t0type* ___ref___rec__0,nlasm0call_t0type ___nl__im__1);
ImmT  generator_c_priv0create_int(ImmT  ___nl__im__0);
ImmT  generator_c_priv0create_string(ImmT  ___nl__im__0);
ImmT  generator_c_priv0create_int_to_memory(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0create_string_to_memory(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_type_to_c(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_priv0get_field_name(ImmT  ___nl__im__0);
ImmT  generator_c_priv0get_case_name(ImmT  ___nl__im__0);
ImmT  generator_c_priv0get_type_name(tct0meta_type0type ___nl__im__0);
ImmT  generator_c_priv0print_func_type_struct_decl(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4,ImmT  ___nl__im__5);
ImmT  generator_c_priv0print_func_type_struct_def(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4);
ImmT  generator_c_priv0get_inline_bin_op(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,ImmT  ___nl__im__3);
ImmT  generator_c_priv0reg_suffix(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_c_priv0get_empty_value(nlasm0reg_type0type ___nl__im__0);
ImmT  generator_c_priv0get_additional_type_functions_decl(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,generator_c0state_t0type* ___ref___rec__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_additional_type_functions_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,generator_c0state_t0type* ___ref___rec__2,ImmT  ___nl__im__3,bool  ___nl__bool__4);
ImmT  generator_c_priv0get_spec_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_array_push_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_push_fun_header(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_array_push_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_array_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_get_fun_header(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_array_get_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_array_len_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_len_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_len_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_get_fun_header(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_hash_get_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_hash_next_iter_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_next_iter_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_next_iter_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_variant_make_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_variant_make_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_variant_make_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
bool  generator_c_priv0takes_own_arg(nlasm0function_t0type ___nl__im__0);
bool  generator_c_priv0is_own(nlasm0reg_type0type ___nl__im__0);
ImmT  generator_c_priv0get_access_op(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_c_priv0get_type_module_name(ImmT  ___nl__im__0);
ImmT  generator_c_priv0get_clean_fun_call(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3);
ImmT  generator_c_priv0get_clean_fun_call_exact(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4,bool  ___nl__bool__5);
ImmT  generator_c_priv0get_clean_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_rec_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_rec_clean_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4);
ImmT  generator_c_priv0get_hash_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_clean_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4);
ImmT  generator_c_priv0get_array_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_clean_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4);
ImmT  generator_c_priv0get_variant_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_variant_clean_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3);
ImmT  generator_c_priv0get_free_fun_call(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_c_priv0get_free_fun_call_exact(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3);
ImmT  generator_c_priv0get_free_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_rec_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_rec_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_hash_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_array_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_variant_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
ImmT  generator_c_priv0get_variant_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2);
bool  generator_c_priv0is_anon(tct0meta_type0type ___nl__im__0);
ImmT  generator_c_priv0conv_to_im00ownarranon_type0000im(anon_type00ownarranon_type00im* ___ref___arr__0);
ImmT  generator_c_priv0conv_to_im00ownhashanon_type0000bool(anon_type00ownhashanon_type00bool* ___ref___hash__0);
ImmT  generator_c_priv0conv_to_im00RBanon_type0000refgenerator_c00const_t00type00int00anon_type0000refgenerator_c00const_t00type00string00anon_type0000refgenerator_c00const_t00type00singleton00anon_type0000int00dynamic_nr00RE(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___ref___rec__0);


ImmT generator_c_priv0get_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(0);
}
ImmT generator_c_priv0get_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 21
c_rt_lib0move(&___nl__im__1, generator_c_priv0gen_bin_ops());
#line 21
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0get_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(1);
}
ImmT generator_c_priv0get_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 25
c_rt_lib0move(&___nl__im__1, generator_c_priv0gen_bin_ops_mod());
#line 25
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0get_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(2);
}
ImmT generator_c_priv0get_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 29
c_rt_lib0move(&___nl__im__1, generator_c_priv0gen_unary_ops());
#line 29
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 29
c_rt_lib0clear(&___nl__im__1);
#line 29
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0gen_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(3);
}
ImmT generator_c_priv0gen_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 33
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 34
c_rt_lib0move(&___nl__im__1,___get_global_string_const(379));
#line 34
c_rt_lib0move(&___nl__im__2,___get_global_string_const(380));
#line 34
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 34
c_rt_lib0clear(&___nl__im__1);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0move(&___nl__im__3,___get_global_string_const(381));
#line 35
c_rt_lib0move(&___nl__im__4,___get_global_string_const(382));
#line 35
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 36
c_rt_lib0move(&___nl__im__5,___get_global_string_const(383));
#line 36
c_rt_lib0move(&___nl__im__6,___get_global_string_const(384));
#line 36
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 37
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0gen_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(4);
}
ImmT generator_c_priv0gen_bin_ops0cal() {
generator_c_priv0__const__init();
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
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 41
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 42
c_rt_lib0move(&___nl__im__1,___get_global_string_const(385));
#line 42
c_rt_lib0move(&___nl__im__2,___get_global_string_const(385));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 43
c_rt_lib0move(&___nl__im__3,___get_global_string_const(386));
#line 43
c_rt_lib0move(&___nl__im__4,___get_global_string_const(386));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 43
c_rt_lib0clear(&___nl__im__3);
#line 43
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0move(&___nl__im__5,___get_global_string_const(383));
#line 44
c_rt_lib0move(&___nl__im__6,___get_global_string_const(387));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 45
c_rt_lib0move(&___nl__im__7,___get_global_string_const(381));
#line 45
c_rt_lib0move(&___nl__im__8,___get_global_string_const(388));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 45
c_rt_lib0clear(&___nl__im__7);
#line 45
c_rt_lib0clear(&___nl__im__8);
#line 46
c_rt_lib0move(&___nl__im__9,___get_global_string_const(389));
#line 46
c_rt_lib0move(&___nl__im__10,___get_global_string_const(390));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 46
c_rt_lib0clear(&___nl__im__9);
#line 46
c_rt_lib0clear(&___nl__im__10);
#line 47
c_rt_lib0move(&___nl__im__11,___get_global_string_const(117));
#line 47
c_rt_lib0move(&___nl__im__12,___get_global_string_const(391));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 47
c_rt_lib0clear(&___nl__im__11);
#line 47
c_rt_lib0clear(&___nl__im__12);
#line 48
c_rt_lib0move(&___nl__im__13,___get_global_string_const(392));
#line 48
c_rt_lib0move(&___nl__im__14,___get_global_string_const(111));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__13, ___nl__im__14));
#line 48
c_rt_lib0clear(&___nl__im__13);
#line 48
c_rt_lib0clear(&___nl__im__14);
#line 49
c_rt_lib0move(&___nl__im__15,___get_global_string_const(393));
#line 49
c_rt_lib0move(&___nl__im__16,___get_global_string_const(394));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__15, ___nl__im__16));
#line 49
c_rt_lib0clear(&___nl__im__15);
#line 49
c_rt_lib0clear(&___nl__im__16);
#line 50
c_rt_lib0move(&___nl__im__17,___get_global_string_const(395));
#line 50
c_rt_lib0move(&___nl__im__18,___get_global_string_const(396));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__17, ___nl__im__18));
#line 50
c_rt_lib0clear(&___nl__im__17);
#line 50
c_rt_lib0clear(&___nl__im__18);
#line 51
c_rt_lib0move(&___nl__im__19,___get_global_string_const(397));
#line 51
c_rt_lib0move(&___nl__im__20,___get_global_string_const(398));
#line 51
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__19, ___nl__im__20));
#line 51
c_rt_lib0clear(&___nl__im__19);
#line 51
c_rt_lib0clear(&___nl__im__20);
#line 52
c_rt_lib0move(&___nl__im__21,___get_global_string_const(399));
#line 52
c_rt_lib0move(&___nl__im__22,___get_global_string_const(400));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__21, ___nl__im__22));
#line 52
c_rt_lib0clear(&___nl__im__21);
#line 52
c_rt_lib0clear(&___nl__im__22);
#line 53
c_rt_lib0move(&___nl__im__23,___get_global_string_const(401));
#line 53
c_rt_lib0move(&___nl__im__24,___get_global_string_const(402));
#line 53
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__23, ___nl__im__24));
#line 53
c_rt_lib0clear(&___nl__im__23);
#line 53
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0move(&___nl__im__25,___get_global_string_const(403));
#line 54
c_rt_lib0move(&___nl__im__26,___get_global_string_const(404));
#line 54
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__25, ___nl__im__26));
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0clear(&___nl__im__26);
#line 55
c_rt_lib0move(&___nl__im__27,___get_global_string_const(122));
#line 55
c_rt_lib0move(&___nl__im__28,___get_global_string_const(405));
#line 55
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__27, ___nl__im__28));
#line 55
c_rt_lib0clear(&___nl__im__27);
#line 55
c_rt_lib0clear(&___nl__im__28);
#line 56
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0gen_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(5);
}
ImmT generator_c_priv0gen_bin_ops_mod0cal() {
generator_c_priv0__const__init();
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
#line 60
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 61
c_rt_lib0move(&___nl__im__1,___get_global_string_const(383));
#line 61
c_rt_lib0move(&___nl__im__2,___get_global_string_const(406));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 62
c_rt_lib0move(&___nl__im__3,___get_global_string_const(381));
#line 62
c_rt_lib0move(&___nl__im__4,___get_global_string_const(407));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0move(&___nl__im__5,___get_global_string_const(389));
#line 63
c_rt_lib0move(&___nl__im__6,___get_global_string_const(408));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
c_rt_lib0clear(&___nl__im__6);
#line 64
c_rt_lib0move(&___nl__im__7,___get_global_string_const(117));
#line 64
c_rt_lib0move(&___nl__im__8,___get_global_string_const(409));
#line 64
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 64
c_rt_lib0clear(&___nl__im__7);
#line 64
c_rt_lib0clear(&___nl__im__8);
#line 65
c_rt_lib0move(&___nl__im__9,___get_global_string_const(392));
#line 65
c_rt_lib0move(&___nl__im__10,___get_global_string_const(410));
#line 65
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 65
c_rt_lib0clear(&___nl__im__9);
#line 65
c_rt_lib0clear(&___nl__im__10);
#line 66
c_rt_lib0move(&___nl__im__11,___get_global_string_const(122));
#line 66
c_rt_lib0move(&___nl__im__12,___get_global_string_const(411));
#line 66
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 66
c_rt_lib0clear(&___nl__im__11);
#line 66
c_rt_lib0clear(&___nl__im__12);
#line 67
return ___nl__im__0;
return NULL;

}

ImmT  generator_c0const_dict0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_dict");
ImmT  res = generator_c0const_dict();
return res;
}
ImmT generator_c0const_dict(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(6);
}
ImmT generator_c0const_dict0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 71
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 71
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 71
c_rt_lib0clear(&___nl__im__3);
#line 71
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 71
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 71
c_rt_lib0clear(&___nl__im__5);
#line 71
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(141), ___nl__im__2, ___get_global_string_const(142), ___nl__im__4));
#line 71
c_rt_lib0clear(&___nl__im__2);
#line 71
c_rt_lib0clear(&___nl__im__4);
#line 71
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 71
c_rt_lib0clear(&___nl__im__1);
#line 71
return ___nl__im__0;
#line 71
c_rt_lib0clear(&___nl__im__0);
#line 71
return NULL;
return NULL;

}

ImmT  generator_c0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0fun_args_t");
ImmT  res = generator_c0fun_args_t();
return res;
}
ImmT generator_c0fun_args_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(7);
}
ImmT generator_c0fun_args_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 75
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_string_const(351), ___get_global_string_const(412)));
#line 75
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 75
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 75
c_rt_lib0clear(&___nl__im__1);
#line 75
return ___nl__im__0;
#line 75
c_rt_lib0clear(&___nl__im__0);
#line 75
return NULL;
return NULL;

}

ImmT  generator_c0const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_t");
ImmT  res = generator_c0const_t();
return res;
}
ImmT generator_c0const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(8);
}
ImmT generator_c0const_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 79
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 79
c_rt_lib0move(&___nl__im__2, own0arr(___nl__im__3));
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 79
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(141), ___nl__im__2, ___get_global_string_const(142), ___nl__im__4));
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
return ___nl__im__0;
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
return NULL;
return NULL;

}

ImmT  generator_c0global_const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0global_const_t");
ImmT  res = generator_c0global_const_t();
return res;
}
ImmT generator_c0global_const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(9);
}
ImmT generator_c0global_const_t0cal() {
generator_c_priv0__const__init();
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
#line 84
c_rt_lib0move(&___nl__im__5, ptd0ptd_im());
#line 84
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 84
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__5, ___get_global_string_const(413), ___nl__im__6));
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 85
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 85
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 85
c_rt_lib0clear(&___nl__im__8);
#line 86
c_rt_lib0move(&___nl__im__10, ptd0int());
#line 86
c_rt_lib0move(&___nl__im__9, ptd0arr(___nl__im__10));
#line 86
c_rt_lib0clear(&___nl__im__10);
#line 87
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 87
c_rt_lib0move(&___nl__im__12, ptd0hash(___nl__im__13));
#line 87
c_rt_lib0clear(&___nl__im__13);
#line 87
c_rt_lib0move(&___nl__im__11, ptd0hash(___nl__im__12));
#line 87
c_rt_lib0clear(&___nl__im__12);
#line 87
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(141), ___nl__im__2, ___get_global_string_const(142), ___nl__im__7, ___get_global_string_const(143), ___nl__im__9, ___get_global_string_const(144), ___nl__im__11));
#line 87
c_rt_lib0clear(&___nl__im__2);
#line 87
c_rt_lib0clear(&___nl__im__7);
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 87
c_rt_lib0clear(&___nl__im__11);
#line 87
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 87
c_rt_lib0clear(&___nl__im__1);
#line 87
return ___nl__im__0;
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
return NULL;
return NULL;

}

ImmT  generator_c0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0state_t");
ImmT  res = generator_c0state_t();
return res;
}
ImmT generator_c0state_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(10);
}
ImmT generator_c0state_t0cal() {
generator_c_priv0__const__init();
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
#line 93
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_string_const(414), ___get_global_string_const(415)));
#line 93
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 94
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_string_const(414), ___get_global_string_const(415)));
#line 94
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 95
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 96
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 97
c_rt_lib0move(&___nl__im__7, ptd0bool());
#line 97
c_rt_lib0move(&___nl__im__6, own0hash(___nl__im__7));
#line 97
c_rt_lib0clear(&___nl__im__7);
#line 98
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 99
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_string_const(414), ___get_global_string_const(416)));
#line 99
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 100
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_string_const(351), ___get_global_string_const(417)));
#line 100
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 102
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(414), ___get_global_string_const(418)));
#line 102
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 103
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(414), ___get_global_string_const(418)));
#line 103
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 104
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(414), ___get_global_string_const(418)));
#line 104
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 105
c_rt_lib0move(&___nl__im__16, ptd0int());
#line 105
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(4, ___get_global_string_const(419), ___nl__im__13, ___get_global_string_const(420), ___nl__im__14, ___get_global_string_const(421), ___nl__im__15, ___get_global_string_const(422), ___nl__im__16));
#line 105
c_rt_lib0clear(&___nl__im__13);
#line 105
c_rt_lib0clear(&___nl__im__14);
#line 105
c_rt_lib0clear(&___nl__im__15);
#line 105
c_rt_lib0clear(&___nl__im__16);
#line 105
c_rt_lib0move(&___nl__im__11, own0rec(___nl__im__12));
#line 105
c_rt_lib0clear(&___nl__im__12);
#line 107
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 107
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__18));
#line 107
c_rt_lib0move(&___nl__im__17, ptd0hash(___nl__im__18));
#line 107
c_rt_lib0clear(&___nl__im__18);
#line 107
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(423), ___nl__im__2, ___get_global_string_const(424), ___nl__im__3, ___get_global_string_const(425), ___nl__im__4, ___get_global_string_const(112), ___nl__im__5, ___get_global_string_const(426), ___nl__im__6, ___get_global_string_const(427), ___nl__im__8, ___get_global_string_const(428), ___nl__im__9, ___get_global_string_const(429), ___nl__im__10, ___get_global_string_const(243), ___nl__im__11, ___get_global_string_const(430), ___nl__im__17));
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0clear(&___nl__im__5);
#line 107
c_rt_lib0clear(&___nl__im__6);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0clear(&___nl__im__10);
#line 107
c_rt_lib0clear(&___nl__im__11);
#line 107
c_rt_lib0clear(&___nl__im__17);
#line 107
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
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

ImmT  generator_c_priv0print(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
#line 112
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 112
c_rt_lib0move(___nl__im_ptr__2, c_rt_lib0concat_add((*___nl__im_ptr__2), ___nl__im__1));
#line 112
___nl__im_ptr__2 = NULL;
#line 112
c_rt_lib0clear(&___nl__im__1);
#line 112
return NULL;

}

ImmT  generator_c_priv0print_to_header(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
#line 116
___nl__im_ptr__2 = &((*___ref___rec__0).header0field);
#line 116
c_rt_lib0move(___nl__im_ptr__2, c_rt_lib0concat_add((*___nl__im_ptr__2), ___nl__im__1));
#line 116
___nl__im_ptr__2 = NULL;
#line 116
c_rt_lib0clear(&___nl__im__1);
#line 116
return NULL;
return NULL;

}

ImmT  generator_c_priv0println_to_header(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 120
c_rt_lib0move(&___nl__im__3, string0lf());
#line 120
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__1, ___nl__im__3));
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 120
___nl__im_ptr__4 = &((*___ref___rec__0).header0field);
#line 120
c_rt_lib0move(___nl__im_ptr__4, c_rt_lib0concat_add((*___nl__im_ptr__4), ___nl__im__2));
#line 120
___nl__im_ptr__4 = NULL;
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
c_rt_lib0clear(&___nl__im__1);
#line 120
return NULL;
return NULL;

}

ImmT generator_c_priv0im_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(11);
}
ImmT generator_c_priv0im_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 124
c_rt_lib0move(&___nl__im__0,___get_global_string_const(431));
#line 124
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0int_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(12);
}
ImmT generator_c_priv0int_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 128
c_rt_lib0move(&___nl__im__0,___get_global_string_const(432));
#line 128
return ___nl__im__0;
return NULL;

}

ImmT generator_c_priv0bool_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(13);
}
ImmT generator_c_priv0bool_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 132
c_rt_lib0move(&___nl__im__0,___get_global_string_const(433));
#line 132
return ___nl__im__0;
return NULL;

}

ImmT  generator_c_priv0println(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 136
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 136
c_rt_lib0move(___nl__im_ptr__2, c_rt_lib0concat_add((*___nl__im_ptr__2), ___nl__im__1));
#line 136
___nl__im_ptr__2 = NULL;
#line 137
c_rt_lib0move(&___nl__im__3, string0lf());
#line 137
___nl__im_ptr__4 = &((*___ref___rec__0).ret0field);
#line 137
c_rt_lib0move(___nl__im_ptr__4, c_rt_lib0concat_add((*___nl__im_ptr__4), ___nl__im__3));
#line 137
___nl__im_ptr__4 = NULL;
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_reg_value(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 141
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(367)));
#line 141
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(241));
#line 141
if(___nl__bool__3){ goto label_8;}
#line 143
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(434));
#line 143
if(___nl__bool__3){ goto label_16;}
#line 143
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 143
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 143
nl_die_arg(___nl__im__4);
#line 141
label_8:
;
#line 142
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 142
c_rt_lib0clear(&___nl__im__1);
#line 142
c_rt_lib0clear(&___nl__im__2);
#line 142
//clear ___nl__bool__3;
#line 142
c_rt_lib0clear(&___nl__im__4);
#line 142
return ___nl__im__5;
#line 143
goto label_33;
#line 143
label_16:
;
#line 144
c_rt_lib0move(&___nl__im__8,___get_global_string_const(435));
#line 144
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 144
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0move(&___nl__im__10,___get_global_string_const(336));
#line 144
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
//clear ___nl__bool__3;
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
return ___nl__im__6;
#line 145
goto label_33;
#line 145
label_33:
;
return NULL;

}

ImmT  generator_c_priv0get_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
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
#line 149
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 149
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 149
___nl__im_ptr__3 = NULL;
#line 150
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(240)));
#line 150
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 150
c_rt_lib0clear(&___nl__im__5);
#line 151
___nl__int__8 = c_rt_lib0array_len(___nl__im__2);
#line 151
___nl__bool__6 = ___nl__int__8 > ___nl__int__4;
#line 151
//clear ___nl__int__8;
#line 151
___nl__bool__7 = !___nl__bool__6;
#line 151
if(___nl__bool__7){ goto label_16;}
#line 151
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 151
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(369)));
#line 151
c_rt_lib0clear(&___nl__im__10);
#line 151
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(39));
#line 151
c_rt_lib0clear(&___nl__im__9);
#line 151
label_16:
;
#line 151
//clear ___nl__bool__7;
#line 151
___nl__bool__6 = !___nl__bool__6;
#line 151
if(___nl__bool__6){ goto label_35;}
#line 152
c_rt_lib0move(&___nl__im__13,___get_global_string_const(436));
#line 152
c_rt_lib0move(&___nl__im__14, generator_c_priv0reg_suffix(___nl__im__1));
#line 152
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 152
c_rt_lib0clear(&___nl__im__13);
#line 152
c_rt_lib0clear(&___nl__im__14);
#line 152
c_rt_lib0move(&___nl__im__15,___get_global_string_const(336));
#line 152
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 152
c_rt_lib0clear(&___nl__im__12);
#line 152
c_rt_lib0clear(&___nl__im__15);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
//clear ___nl__int__4;
#line 152
//clear ___nl__bool__6;
#line 152
return ___nl__im__11;
#line 153
goto label_48;
#line 153
label_35:
;
#line 154
c_rt_lib0move(&___nl__im__17,___get_global_string_const(437));
#line 154
c_rt_lib0move(&___nl__im__18, generator_c_priv0reg_suffix(___nl__im__1));
#line 154
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 154
c_rt_lib0clear(&___nl__im__17);
#line 154
c_rt_lib0clear(&___nl__im__18);
#line 154
c_rt_lib0clear(&___nl__im__1);
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
//clear ___nl__int__4;
#line 154
//clear ___nl__bool__6;
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
return ___nl__im__16;
#line 155
goto label_48;
#line 155
label_48:
;
#line 155
//clear ___nl__bool__6;
#line 155
c_rt_lib0clear(&___nl__im__11);
#line 155
c_rt_lib0clear(&___nl__im__16);
return NULL;

}

ImmT  generator_c_priv0get_reg_ref(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 159
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 159
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 159
___nl__im_ptr__3 = NULL;
#line 160
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(240)));
#line 160
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 160
c_rt_lib0clear(&___nl__im__5);
#line 161
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(367)));
#line 161
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(241));
#line 161
if(___nl__bool__7){ goto label_14;}
#line 167
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(434));
#line 167
if(___nl__bool__7){ goto label_64;}
#line 167
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 167
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 167
nl_die_arg(___nl__im__8);
#line 161
label_14:
;
#line 162
___nl__int__11 = c_rt_lib0array_len(___nl__im__2);
#line 162
___nl__bool__9 = ___nl__int__11 > ___nl__int__4;
#line 162
//clear ___nl__int__11;
#line 162
___nl__bool__10 = !___nl__bool__9;
#line 162
if(___nl__bool__10){ goto label_25;}
#line 162
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 162
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(369)));
#line 162
c_rt_lib0clear(&___nl__im__13);
#line 162
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(39));
#line 162
c_rt_lib0clear(&___nl__im__12);
#line 162
label_25:
;
#line 162
//clear ___nl__bool__10;
#line 162
___nl__bool__9 = !___nl__bool__9;
#line 162
if(___nl__bool__9){ goto label_43;}
#line 163
c_rt_lib0move(&___nl__im__15,___get_global_string_const(438));
#line 163
c_rt_lib0move(&___nl__im__16, generator_c_priv0reg_suffix(___nl__im__1));
#line 163
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 163
c_rt_lib0clear(&___nl__im__15);
#line 163
c_rt_lib0clear(&___nl__im__16);
#line 163
c_rt_lib0clear(&___nl__im__1);
#line 163
c_rt_lib0clear(&___nl__im__2);
#line 163
//clear ___nl__int__4;
#line 163
c_rt_lib0clear(&___nl__im__6);
#line 163
//clear ___nl__bool__7;
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
//clear ___nl__bool__9;
#line 163
return ___nl__im__14;
#line 164
goto label_59;
#line 164
label_43:
;
#line 165
c_rt_lib0move(&___nl__im__18,___get_global_string_const(439));
#line 165
c_rt_lib0move(&___nl__im__19, generator_c_priv0reg_suffix(___nl__im__1));
#line 165
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 165
c_rt_lib0clear(&___nl__im__18);
#line 165
c_rt_lib0clear(&___nl__im__19);
#line 165
c_rt_lib0clear(&___nl__im__1);
#line 165
c_rt_lib0clear(&___nl__im__2);
#line 165
//clear ___nl__int__4;
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
//clear ___nl__bool__7;
#line 165
c_rt_lib0clear(&___nl__im__8);
#line 165
//clear ___nl__bool__9;
#line 165
c_rt_lib0clear(&___nl__im__14);
#line 165
return ___nl__im__17;
#line 166
goto label_59;
#line 166
label_59:
;
#line 166
//clear ___nl__bool__9;
#line 166
c_rt_lib0clear(&___nl__im__14);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 167
goto label_114;
#line 167
label_64:
;
#line 168
___nl__int__22 = c_rt_lib0array_len(___nl__im__2);
#line 168
___nl__bool__20 = ___nl__int__22 > ___nl__int__4;
#line 168
//clear ___nl__int__22;
#line 168
___nl__bool__21 = !___nl__bool__20;
#line 168
if(___nl__bool__21){ goto label_75;}
#line 168
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 168
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(369)));
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(39));
#line 168
c_rt_lib0clear(&___nl__im__23);
#line 168
label_75:
;
#line 168
//clear ___nl__bool__21;
#line 168
___nl__bool__20 = !___nl__bool__20;
#line 168
if(___nl__bool__20){ goto label_93;}
#line 169
c_rt_lib0move(&___nl__im__26,___get_global_string_const(440));
#line 169
c_rt_lib0move(&___nl__im__27, generator_c_priv0reg_suffix(___nl__im__1));
#line 169
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 169
c_rt_lib0clear(&___nl__im__26);
#line 169
c_rt_lib0clear(&___nl__im__27);
#line 169
c_rt_lib0clear(&___nl__im__1);
#line 169
c_rt_lib0clear(&___nl__im__2);
#line 169
//clear ___nl__int__4;
#line 169
c_rt_lib0clear(&___nl__im__6);
#line 169
//clear ___nl__bool__7;
#line 169
c_rt_lib0clear(&___nl__im__8);
#line 169
//clear ___nl__bool__20;
#line 169
return ___nl__im__25;
#line 170
goto label_109;
#line 170
label_93:
;
#line 171
c_rt_lib0move(&___nl__im__29,___get_global_string_const(437));
#line 171
c_rt_lib0move(&___nl__im__30, generator_c_priv0reg_suffix(___nl__im__1));
#line 171
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 171
c_rt_lib0clear(&___nl__im__29);
#line 171
c_rt_lib0clear(&___nl__im__30);
#line 171
c_rt_lib0clear(&___nl__im__1);
#line 171
c_rt_lib0clear(&___nl__im__2);
#line 171
//clear ___nl__int__4;
#line 171
c_rt_lib0clear(&___nl__im__6);
#line 171
//clear ___nl__bool__7;
#line 171
c_rt_lib0clear(&___nl__im__8);
#line 171
//clear ___nl__bool__20;
#line 171
c_rt_lib0clear(&___nl__im__25);
#line 171
return ___nl__im__28;
#line 172
goto label_109;
#line 172
label_109:
;
#line 172
//clear ___nl__bool__20;
#line 172
c_rt_lib0clear(&___nl__im__25);
#line 172
c_rt_lib0clear(&___nl__im__28);
#line 173
goto label_114;
#line 173
label_114:
;
return NULL;

}

ImmT  generator_c_priv0get_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 177
c_rt_lib0move(&___nl__im__3,___get_global_string_const(296));
#line 177
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0move(&___nl__im__4,___get_global_string_const(296));
#line 177
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
c_rt_lib0clear(&___nl__im__4);
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
return ___nl__im__1;
return NULL;

}

ImmT  generator_c0module_out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0module_out_t");
ImmT  res = generator_c0module_out_t();
return res;
}
ImmT generator_c0module_out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(14);
}
ImmT generator_c0module_out_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 181
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 181
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 181
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__2, ___get_global_string_const(72), ___nl__im__3));
#line 181
c_rt_lib0clear(&___nl__im__2);
#line 181
c_rt_lib0clear(&___nl__im__3);
#line 181
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 181
c_rt_lib0clear(&___nl__im__1);
#line 181
return ___nl__im__0;
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
return NULL;
return NULL;

}

ImmT  generator_c0out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0out_t");
ImmT  res = generator_c0out_t();
return res;
}
ImmT generator_c0out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(15);
}
ImmT generator_c0out_t0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 185
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_string_const(414), ___get_global_string_const(441)));
#line 185
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 185
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 185
c_rt_lib0clear(&___nl__im__3);
#line 185
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_string_const(414), ___get_global_string_const(441)));
#line 185
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 185
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(196), ___nl__im__2, ___get_global_string_const(198), ___nl__im__4));
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
c_rt_lib0clear(&___nl__im__4);
#line 185
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
return ___nl__im__0;
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
return NULL;
return NULL;

}

generator_c0out_t0type generator_c0generate(ImmT  ___nl__im__0,generator_c0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT * ___nl__im_ptr__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT * ___nl__im_ptr__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__string__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT * ___nl__im_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__30 = NULL;
INT * ___nl__int_ptr__31 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__32 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__33 = NULL;
ImmT * ___nl__im_ptr__34 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__35 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__36 = NULL;
ImmT * ___nl__im_ptr__37 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__38 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__39 = NULL;
ImmT * ___nl__im_ptr__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT * ___nl__im_ptr__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT * ___nl__im_ptr__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
#line 189
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 190
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 191
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__0));
#line 191
label_3:
;
#line 191
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 191
if(___nl__bool__5){ goto label_11;}
#line 191
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 191
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__4));
#line 192
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__4));
#line 193
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 193
goto label_3;
#line 193
label_11:
;
#line 194
___nl__im_ptr__8 = &((*___ref___rec__1).defined_types0field);
#line 194
c_rt_lib0delete(generator_c_priv0gather_types(___nl__im__0, ___nl__im_ptr__8));
#line 194
___nl__im_ptr__8 = NULL;
#line 195
c_rt_lib0delete(array0sort(&___nl__im__3));
#line 196
___nl__int__10 = 0;
#line 196
___nl__int__11 = 1;
#line 196
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 196
label_19:
;
#line 196
___nl__bool__13 = ___nl__int__10 >= ___nl__int__12;
#line 196
if(___nl__bool__13){ goto label_121;}
#line 196
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__3, ___nl__int__10));
#line 196
c_rt_lib0copy(&___nl__im__9, ___nl__im__14);
#line 197
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__0, ___nl__im__9));
#line 198
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___rec__1, ___nl__im__9));
#line 199
___nl__im_ptr__16 = &((*___ref___rec__1).global_int_const0field);
#line 199
c_rt_lib0move(&___nl__im__17,___get_global_string_const(144));
#line 199
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___nl__im_ptr__16), ___nl__im__17));
#line 199
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 199
c_rt_lib0delete(hash0set_value(&___nl__im__17, ___nl__im__9, ___nl__im__18));
#line 199
c_rt_lib0move(&___nl__string__19,___get_global_string_const(144));
#line 199
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__16, ___nl__string__19, ___nl__im__17));
#line 199
___nl__im_ptr__16 = NULL;
#line 199
c_rt_lib0clear(&___nl__im__17);
#line 199
c_rt_lib0clear(&___nl__im__18);
#line 199
c_rt_lib0clear(&___nl__string__19);
#line 200
___nl__im_ptr__20 = &((*___ref___rec__1).global_string_const0field);
#line 200
c_rt_lib0move(&___nl__im__21,___get_global_string_const(144));
#line 200
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___nl__im_ptr__20), ___nl__im__21));
#line 200
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 200
c_rt_lib0delete(hash0set_value(&___nl__im__21, ___nl__im__9, ___nl__im__22));
#line 200
c_rt_lib0move(&___nl__string__23,___get_global_string_const(144));
#line 200
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__20, ___nl__string__23, ___nl__im__21));
#line 200
___nl__im_ptr__20 = NULL;
#line 200
c_rt_lib0clear(&___nl__im__21);
#line 200
c_rt_lib0clear(&___nl__im__22);
#line 200
c_rt_lib0clear(&___nl__string__23);
#line 201
c_rt_lib0move(&___nl__im__24,___get_global_string_const(36));
#line 201
___nl__im_ptr__25 = &((*___ref___rec__1).ret0field);
#line 201
c_rt_lib0copy(___nl__im_ptr__25, ___nl__im__24);
#line 201
___nl__im_ptr__25 = NULL;
#line 201
c_rt_lib0clear(&___nl__im__24);
#line 202
c_rt_lib0move(&___nl__im__26,___get_global_string_const(36));
#line 202
___nl__im_ptr__27 = &((*___ref___rec__1).header0field);
#line 202
c_rt_lib0copy(___nl__im_ptr__27, ___nl__im__26);
#line 202
___nl__im_ptr__27 = NULL;
#line 202
c_rt_lib0clear(&___nl__im__26);
#line 203
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 203
___nl__im_ptr__29 = &((*___ref___rec__1).fun_args0field);
#line 203
c_rt_lib0copy(___nl__im_ptr__29, ___nl__im__28);
#line 203
___nl__im_ptr__29 = NULL;
#line 203
c_rt_lib0clear(&___nl__im__28);
#line 204
___nl__rec_ptr__30 = &((*___ref___rec__1).const0field);
#line 204
;
#line 204
___nl__int_ptr__31 = &(___nl__rec_ptr__30->dynamic_nr0field);
#line 205
(*___nl__int_ptr__31) = 0;
#line 205
___nl__int_ptr__31 = NULL;
#line 205
___nl__rec_ptr__32 = &(___nl__rec_ptr__30->int0field);
#line 206
;
#line 206
___nl__arr_ptr__33 = &(___nl__rec_ptr__32->arr0field);
#line 206
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__33));
(*___nl__arr_ptr__33).size = 0;
(*___nl__arr_ptr__33).capacity = 0;
(*___nl__arr_ptr__33).value = NULL;
#line 206
___nl__arr_ptr__33 = NULL;
#line 206
___nl__im_ptr__34 = &(___nl__rec_ptr__32->hash0field);
#line 206
c_rt_lib0move(___nl__im_ptr__34, c_rt_lib0hash_mk(0));
#line 206
___nl__im_ptr__34 = NULL;
#line 206
___nl__rec_ptr__32 = NULL;
#line 206
___nl__rec_ptr__35 = &(___nl__rec_ptr__30->string0field);
#line 207
;
#line 207
___nl__arr_ptr__36 = &(___nl__rec_ptr__35->arr0field);
#line 207
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__36));
(*___nl__arr_ptr__36).size = 0;
(*___nl__arr_ptr__36).capacity = 0;
(*___nl__arr_ptr__36).value = NULL;
#line 207
___nl__arr_ptr__36 = NULL;
#line 207
___nl__im_ptr__37 = &(___nl__rec_ptr__35->hash0field);
#line 207
c_rt_lib0move(___nl__im_ptr__37, c_rt_lib0hash_mk(0));
#line 207
___nl__im_ptr__37 = NULL;
#line 207
___nl__rec_ptr__35 = NULL;
#line 207
___nl__rec_ptr__38 = &(___nl__rec_ptr__30->singleton0field);
#line 208
;
#line 208
___nl__arr_ptr__39 = &(___nl__rec_ptr__38->arr0field);
#line 208
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__39));
(*___nl__arr_ptr__39).size = 0;
(*___nl__arr_ptr__39).capacity = 0;
(*___nl__arr_ptr__39).value = NULL;
#line 208
___nl__arr_ptr__39 = NULL;
#line 208
___nl__im_ptr__40 = &(___nl__rec_ptr__38->hash0field);
#line 208
c_rt_lib0move(___nl__im_ptr__40, c_rt_lib0hash_mk(0));
#line 208
___nl__im_ptr__40 = NULL;
#line 208
___nl__rec_ptr__38 = NULL;
#line 208
___nl__rec_ptr__30 = NULL;
#line 210
___nl__im_ptr__41 = &((*___ref___rec__1).mod_name0field);
#line 210
c_rt_lib0copy(___nl__im_ptr__41, ___nl__im__9);
#line 210
___nl__im_ptr__41 = NULL;
#line 211
___nl__hash_ptr__42 = &((*___ref___rec__1).additional_imports0field);
#line 211
generator_c0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__42));
(*___nl__hash_ptr__42).size = 0;
(*___nl__hash_ptr__42).capacity = 0;
(*___nl__hash_ptr__42).keys = NULL;
(*___nl__hash_ptr__42).values = NULL;
#line 211
___nl__hash_ptr__42 = NULL;
#line 212
___nl__im_ptr__44 = &((*___ref___rec__1).defined_types0field);
#line 212
c_rt_lib0copy(&___nl__im__43, (*___nl__im_ptr__44));
#line 212
___nl__im_ptr__44 = NULL;
#line 212
c_rt_lib0delete(generator_c_priv0print_mod(___ref___rec__1, ___nl__im__15, ___nl__im__43));
#line 212
c_rt_lib0clear(&___nl__im__43);
#line 213
___nl__im_ptr__47 = &((*___ref___rec__1).ret0field);
#line 213
c_rt_lib0copy(&___nl__im__46, (*___nl__im_ptr__47));
#line 213
___nl__im_ptr__47 = NULL;
#line 213
___nl__im_ptr__49 = &((*___ref___rec__1).header0field);
#line 213
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 213
___nl__im_ptr__49 = NULL;
#line 213
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__46, ___get_global_string_const(72), ___nl__im__48));
#line 213
c_rt_lib0clear(&___nl__im__46);
#line 213
c_rt_lib0clear(&___nl__im__48);
#line 213
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__9, ___nl__im__45));
#line 213
c_rt_lib0clear(&___nl__im__45);
#line 213
c_rt_lib0clear(&___nl__im__9);
#line 214
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 214
goto label_19;
#line 214
label_121:
;
#line 215
c_rt_lib0move(&___nl__im__51, generator_c_priv0generate_global_const_files(___ref___rec__1));
#line 215
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(2, ___get_global_string_const(196), ___nl__im__2, ___get_global_string_const(198), ___nl__im__51));
#line 215
c_rt_lib0clear(&___nl__im__51);
#line 215
c_rt_lib0clear(&___nl__im__0);
#line 215
c_rt_lib0clear(&___nl__im__2);
#line 215
c_rt_lib0clear(&___nl__im__3);
#line 215
c_rt_lib0clear(&___nl__im__4);
#line 215
//clear ___nl__bool__5;
#line 215
c_rt_lib0clear(&___nl__im__6);
#line 215
c_rt_lib0clear(&___nl__im__7);
#line 215
c_rt_lib0clear(&___nl__im__9);
#line 215
//clear ___nl__int__10;
#line 215
//clear ___nl__int__11;
#line 215
//clear ___nl__int__12;
#line 215
//clear ___nl__bool__13;
#line 215
c_rt_lib0clear(&___nl__im__14);
#line 215
c_rt_lib0clear(&___nl__im__15);
#line 215
return ___nl__im__50;
return NULL;

}

ImmT  generator_c_priv0gather_types(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
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
ImmT  ___nl__im__23 = NULL;
#line 219
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 219
label_1:
;
#line 219
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 219
if(___nl__bool__3){ goto label_59;}
#line 219
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 219
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 220
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(222)));
#line 220
___nl__int__8 = 0;
#line 220
___nl__int__9 = 1;
#line 220
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 220
label_10:
;
#line 220
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 220
if(___nl__bool__11){ goto label_44;}
#line 220
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 220
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 221
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(180)));
#line 221
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(81));
#line 221
if(___nl__bool__14){ goto label_23;}
#line 222
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(80));
#line 222
if(___nl__bool__14){ goto label_25;}
#line 222
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 222
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 222
nl_die_arg(___nl__im__15);
#line 221
label_23:
;
#line 222
goto label_40;
#line 222
label_25:
;
#line 222
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(80)));
#line 222
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 223
c_rt_lib0move(&___nl__im__21,___get_global_string_const(34));
#line 223
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__2, ___nl__im__21));
#line 223
c_rt_lib0clear(&___nl__im__21);
#line 223
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(181)));
#line 223
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 223
c_rt_lib0clear(&___nl__im__20);
#line 223
c_rt_lib0clear(&___nl__im__22);
#line 223
c_rt_lib0copy(&___nl__im__18, ___nl__im__16);
#line 223
c_rt_lib0delete(c_rt_lib0hash_set_value(___ref___im__1, ___nl__im__19, ___nl__im__18));
#line 223
c_rt_lib0clear(&___nl__im__18);
#line 223
c_rt_lib0clear(&___nl__im__19);
#line 224
goto label_40;
#line 224
label_40:
;
#line 224
c_rt_lib0clear(&___nl__im__7);
#line 225
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 225
goto label_10;
#line 225
label_44:
;
#line 225
c_rt_lib0clear(&___nl__im__6);
#line 225
c_rt_lib0clear(&___nl__im__7);
#line 225
//clear ___nl__int__8;
#line 225
//clear ___nl__int__9;
#line 225
//clear ___nl__int__10;
#line 225
//clear ___nl__bool__11;
#line 225
c_rt_lib0clear(&___nl__im__12);
#line 225
c_rt_lib0clear(&___nl__im__13);
#line 225
//clear ___nl__bool__14;
#line 225
c_rt_lib0clear(&___nl__im__15);
#line 225
c_rt_lib0clear(&___nl__im__16);
#line 225
c_rt_lib0clear(&___nl__im__17);
#line 226
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 226
goto label_1;
#line 226
label_59:
;
#line 227
c_rt_lib0copy(&___nl__im__23, (*___ref___im__1));
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
//clear ___nl__bool__3;
#line 227
c_rt_lib0clear(&___nl__im__4);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0clear(&___nl__im__6);
#line 227
c_rt_lib0clear(&___nl__im__7);
#line 227
//clear ___nl__int__8;
#line 227
//clear ___nl__int__9;
#line 227
//clear ___nl__int__10;
#line 227
//clear ___nl__bool__11;
#line 227
c_rt_lib0clear(&___nl__im__12);
#line 227
c_rt_lib0clear(&___nl__im__13);
#line 227
//clear ___nl__bool__14;
#line 227
c_rt_lib0clear(&___nl__im__15);
#line 227
c_rt_lib0clear(&___nl__im__16);
#line 227
c_rt_lib0clear(&___nl__im__17);
#line 227
return ___nl__im__23;
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
//clear ___nl__bool__3;
#line 227
c_rt_lib0clear(&___nl__im__4);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0clear(&___nl__im__6);
#line 227
c_rt_lib0clear(&___nl__im__7);
#line 227
//clear ___nl__int__8;
#line 227
//clear ___nl__int__9;
#line 227
//clear ___nl__int__10;
#line 227
//clear ___nl__bool__11;
#line 227
c_rt_lib0clear(&___nl__im__12);
#line 227
c_rt_lib0clear(&___nl__im__13);
#line 227
//clear ___nl__bool__14;
#line 227
c_rt_lib0clear(&___nl__im__15);
#line 227
c_rt_lib0clear(&___nl__im__16);
#line 227
c_rt_lib0clear(&___nl__im__17);
#line 227
c_rt_lib0clear(&___nl__im__23);
#line 227
return NULL;
return NULL;

}

generator_c0module_out_t0type generator_c_priv0generate_global_const_files(generator_c0state_t0type* ___ref___rec__0) {
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__7 = NULL;
INT * ___nl__int_ptr__8 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__9 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__12 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__15 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__16 = NULL;
ImmT * ___nl__im_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
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
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__string__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__string__58 = NULL;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__string__69 = NULL;
ImmT  ___nl__im__70 = NULL;
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
bool  ___nl__bool__73 = false;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__string__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
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
ImmT  ___nl__string__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__string__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
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
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT * ___nl__im_ptr__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT * ___nl__im_ptr__159 = NULL;
#line 231
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 231
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 231
c_rt_lib0copy(___nl__im_ptr__2, ___nl__im__1);
#line 231
___nl__im_ptr__2 = NULL;
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 232
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 232
___nl__im_ptr__4 = &((*___ref___rec__0).header0field);
#line 232
c_rt_lib0copy(___nl__im_ptr__4, ___nl__im__3);
#line 232
___nl__im_ptr__4 = NULL;
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 233
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 233
___nl__im_ptr__6 = &((*___ref___rec__0).fun_args0field);
#line 233
c_rt_lib0copy(___nl__im_ptr__6, ___nl__im__5);
#line 233
___nl__im_ptr__6 = NULL;
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 234
___nl__rec_ptr__7 = &((*___ref___rec__0).const0field);
#line 234
;
#line 234
___nl__int_ptr__8 = &(___nl__rec_ptr__7->dynamic_nr0field);
#line 235
(*___nl__int_ptr__8) = 0;
#line 235
___nl__int_ptr__8 = NULL;
#line 235
___nl__rec_ptr__9 = &(___nl__rec_ptr__7->int0field);
#line 236
;
#line 236
___nl__arr_ptr__10 = &(___nl__rec_ptr__9->arr0field);
#line 236
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__10));
(*___nl__arr_ptr__10).size = 0;
(*___nl__arr_ptr__10).capacity = 0;
(*___nl__arr_ptr__10).value = NULL;
#line 236
___nl__arr_ptr__10 = NULL;
#line 236
___nl__im_ptr__11 = &(___nl__rec_ptr__9->hash0field);
#line 236
c_rt_lib0move(___nl__im_ptr__11, c_rt_lib0hash_mk(0));
#line 236
___nl__im_ptr__11 = NULL;
#line 236
___nl__rec_ptr__9 = NULL;
#line 236
___nl__rec_ptr__12 = &(___nl__rec_ptr__7->string0field);
#line 237
;
#line 237
___nl__arr_ptr__13 = &(___nl__rec_ptr__12->arr0field);
#line 237
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__13));
(*___nl__arr_ptr__13).size = 0;
(*___nl__arr_ptr__13).capacity = 0;
(*___nl__arr_ptr__13).value = NULL;
#line 237
___nl__arr_ptr__13 = NULL;
#line 237
___nl__im_ptr__14 = &(___nl__rec_ptr__12->hash0field);
#line 237
c_rt_lib0move(___nl__im_ptr__14, c_rt_lib0hash_mk(0));
#line 237
___nl__im_ptr__14 = NULL;
#line 237
___nl__rec_ptr__12 = NULL;
#line 237
___nl__rec_ptr__15 = &(___nl__rec_ptr__7->singleton0field);
#line 238
;
#line 238
___nl__arr_ptr__16 = &(___nl__rec_ptr__15->arr0field);
#line 238
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__16));
(*___nl__arr_ptr__16).size = 0;
(*___nl__arr_ptr__16).capacity = 0;
(*___nl__arr_ptr__16).value = NULL;
#line 238
___nl__arr_ptr__16 = NULL;
#line 238
___nl__im_ptr__17 = &(___nl__rec_ptr__15->hash0field);
#line 238
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(0));
#line 238
___nl__im_ptr__17 = NULL;
#line 238
___nl__rec_ptr__15 = NULL;
#line 238
___nl__rec_ptr__7 = NULL;
#line 240
c_rt_lib0move(&___nl__im__18,___get_global_string_const(36));
#line 240
___nl__im_ptr__19 = &((*___ref___rec__0).mod_name0field);
#line 240
c_rt_lib0copy(___nl__im_ptr__19, ___nl__im__18);
#line 240
___nl__im_ptr__19 = NULL;
#line 240
c_rt_lib0clear(&___nl__im__18);
#line 241
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_cr());
#line 241
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__20));
#line 241
c_rt_lib0clear(&___nl__im__20);
#line 242
c_rt_lib0move(&___nl__im__21,___get_global_string_const(442));
#line 242
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__21));
#line 242
c_rt_lib0clear(&___nl__im__21);
#line 243
c_rt_lib0move(&___nl__im__23,___get_global_string_const(286));
#line 243
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_include(___nl__im__23));
#line 243
c_rt_lib0clear(&___nl__im__23);
#line 243
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__22));
#line 243
c_rt_lib0clear(&___nl__im__22);
#line 244
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_cr());
#line 244
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__24));
#line 244
c_rt_lib0clear(&___nl__im__24);
#line 245
c_rt_lib0move(&___nl__im__26,___get_global_string_const(443));
#line 245
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_include(___nl__im__26));
#line 245
c_rt_lib0clear(&___nl__im__26);
#line 245
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__25));
#line 245
c_rt_lib0clear(&___nl__im__25);
#line 246
___nl__im_ptr__29 = &((*___ref___rec__0).global_int_const0field);
#line 246
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 246
___nl__im_ptr__29 = NULL;
#line 246
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(141)));
#line 246
c_rt_lib0clear(&___nl__im__28);
#line 247
___nl__im_ptr__32 = &((*___ref___rec__0).global_string_const0field);
#line 247
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 247
___nl__im_ptr__32 = NULL;
#line 247
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(141)));
#line 247
c_rt_lib0clear(&___nl__im__31);
#line 248
___nl__int__33 = c_rt_lib0array_len(___nl__im__27);
#line 249
___nl__int__34 = c_rt_lib0array_len(___nl__im__30);
#line 250
c_rt_lib0move(&___nl__im__35,___get_global_string_const(444));
#line 250
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__35));
#line 250
c_rt_lib0clear(&___nl__im__35);
#line 251
c_rt_lib0move(&___nl__im__37, generator_c_priv0im_t());
#line 251
c_rt_lib0move(&___nl__im__38,___get_global_string_const(445));
#line 251
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 251
c_rt_lib0clear(&___nl__im__37);
#line 251
c_rt_lib0clear(&___nl__im__38);
#line 251
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__36));
#line 251
c_rt_lib0clear(&___nl__im__36);
#line 252
c_rt_lib0move(&___nl__im__40, generator_c_priv0im_t());
#line 252
c_rt_lib0move(&___nl__im__41,___get_global_string_const(446));
#line 252
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 252
c_rt_lib0clear(&___nl__im__40);
#line 252
c_rt_lib0clear(&___nl__im__41);
#line 252
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__39));
#line 252
c_rt_lib0clear(&___nl__im__39);
#line 253
c_rt_lib0move(&___nl__im__46,___get_global_string_const(447));
#line 254
c_rt_lib0move(&___nl__im__47, generator_c_priv0im_t());
#line 254
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__47));
#line 254
c_rt_lib0clear(&___nl__im__46);
#line 254
c_rt_lib0clear(&___nl__im__47);
#line 254
c_rt_lib0move(&___nl__im__48,___get_global_string_const(448));
#line 254
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__48));
#line 254
c_rt_lib0clear(&___nl__im__45);
#line 254
c_rt_lib0clear(&___nl__im__48);
#line 255
c_rt_lib0move(&___nl__im__49, generator_c_priv0im_t());
#line 255
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__49));
#line 255
c_rt_lib0clear(&___nl__im__44);
#line 255
c_rt_lib0clear(&___nl__im__49);
#line 255
c_rt_lib0move(&___nl__im__50,___get_global_string_const(449));
#line 255
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__50));
#line 255
c_rt_lib0clear(&___nl__im__43);
#line 255
c_rt_lib0clear(&___nl__im__50);
#line 255
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__42));
#line 255
c_rt_lib0clear(&___nl__im__42);
#line 258
c_rt_lib0move(&___nl__im__55,___get_global_string_const(450));
#line 258
c_rt_lib0move(&___nl__string__56, c_rt_lib0int_to_string(___nl__int__33));
#line 258
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__string__56));
#line 258
c_rt_lib0clear(&___nl__im__55);
#line 258
c_rt_lib0clear(&___nl__string__56);
#line 262
c_rt_lib0move(&___nl__im__57,___get_global_string_const(451));
#line 262
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__57));
#line 262
c_rt_lib0clear(&___nl__im__54);
#line 262
c_rt_lib0clear(&___nl__im__57);
#line 262
c_rt_lib0move(&___nl__string__58, c_rt_lib0int_to_string(___nl__int__34));
#line 262
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__string__58));
#line 262
c_rt_lib0clear(&___nl__im__53);
#line 262
c_rt_lib0clear(&___nl__string__58);
#line 263
c_rt_lib0move(&___nl__im__59,___get_global_string_const(452));
#line 263
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__59));
#line 263
c_rt_lib0clear(&___nl__im__52);
#line 263
c_rt_lib0clear(&___nl__im__59);
#line 263
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__51));
#line 263
c_rt_lib0clear(&___nl__im__51);
#line 265
___nl__int__60 = 0;
#line 265
___nl__int__61 = 1;
#line 265
label_141:
;
#line 265
___nl__bool__62 = ___nl__int__60 >= ___nl__int__33;
#line 265
if(___nl__bool__62){ goto label_163;}
#line 266
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_get(___nl__im__27, ___nl__int__60));
#line 266
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(241)));
#line 266
c_rt_lib0clear(&___nl__im__66);
#line 267
c_rt_lib0move(&___nl__im__68,___get_global_string_const(453));
#line 267
c_rt_lib0move(&___nl__string__69, c_rt_lib0int_to_string(___nl__int__60));
#line 267
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__string__69));
#line 267
c_rt_lib0clear(&___nl__im__68);
#line 267
c_rt_lib0clear(&___nl__string__69);
#line 267
c_rt_lib0move(&___nl__im__64, generator_c_priv0create_int_to_memory(___nl__im__65, ___nl__im__67));
#line 267
c_rt_lib0clear(&___nl__im__65);
#line 267
c_rt_lib0clear(&___nl__im__67);
#line 267
c_rt_lib0move(&___nl__im__70,___get_global_string_const(454));
#line 267
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__70));
#line 267
c_rt_lib0clear(&___nl__im__64);
#line 267
c_rt_lib0clear(&___nl__im__70);
#line 267
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__63));
#line 267
c_rt_lib0clear(&___nl__im__63);
#line 268
___nl__int__60 = ___nl__int__60 + ___nl__int__61;
#line 268
goto label_141;
#line 268
label_163:
;
#line 269
___nl__int__71 = 0;
#line 269
___nl__int__72 = 1;
#line 269
label_166:
;
#line 269
___nl__bool__73 = ___nl__int__71 >= ___nl__int__34;
#line 269
if(___nl__bool__73){ goto label_188;}
#line 270
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_get(___nl__im__30, ___nl__int__71));
#line 270
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__77, ___get_global_string_const(241)));
#line 270
c_rt_lib0clear(&___nl__im__77);
#line 271
c_rt_lib0move(&___nl__im__79,___get_global_string_const(455));
#line 271
c_rt_lib0move(&___nl__string__80, c_rt_lib0int_to_string(___nl__int__71));
#line 271
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__string__80));
#line 271
c_rt_lib0clear(&___nl__im__79);
#line 271
c_rt_lib0clear(&___nl__string__80);
#line 271
c_rt_lib0move(&___nl__im__75, generator_c_priv0create_string_to_memory(___nl__im__76, ___nl__im__78));
#line 271
c_rt_lib0clear(&___nl__im__76);
#line 271
c_rt_lib0clear(&___nl__im__78);
#line 271
c_rt_lib0move(&___nl__im__81,___get_global_string_const(454));
#line 271
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__81));
#line 271
c_rt_lib0clear(&___nl__im__75);
#line 271
c_rt_lib0clear(&___nl__im__81);
#line 271
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__74));
#line 271
c_rt_lib0clear(&___nl__im__74);
#line 272
___nl__int__71 = ___nl__int__71 + ___nl__int__72;
#line 272
goto label_166;
#line 272
label_188:
;
#line 273
c_rt_lib0move(&___nl__im__98,___get_global_string_const(456));
#line 274
c_rt_lib0move(&___nl__im__100,___get_global_string_const(457));
#line 274
c_rt_lib0move(&___nl__im__99, generator_c_priv0get_lib_fun(___nl__im__100));
#line 274
c_rt_lib0clear(&___nl__im__100);
#line 274
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__99));
#line 274
c_rt_lib0clear(&___nl__im__98);
#line 274
c_rt_lib0clear(&___nl__im__99);
#line 274
c_rt_lib0move(&___nl__im__101,___get_global_string_const(458));
#line 274
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__101));
#line 274
c_rt_lib0clear(&___nl__im__97);
#line 274
c_rt_lib0clear(&___nl__im__101);
#line 274
c_rt_lib0move(&___nl__im__102, generator_c_priv0im_t());
#line 274
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__102));
#line 274
c_rt_lib0clear(&___nl__im__96);
#line 274
c_rt_lib0clear(&___nl__im__102);
#line 274
c_rt_lib0move(&___nl__im__103,___get_global_string_const(459));
#line 274
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__103));
#line 274
c_rt_lib0clear(&___nl__im__95);
#line 274
c_rt_lib0clear(&___nl__im__103);
#line 274
c_rt_lib0move(&___nl__im__104, generator_c_priv0im_t());
#line 274
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__104));
#line 274
c_rt_lib0clear(&___nl__im__94);
#line 274
c_rt_lib0clear(&___nl__im__104);
#line 275
c_rt_lib0move(&___nl__im__105,___get_global_string_const(460));
#line 275
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__105));
#line 275
c_rt_lib0clear(&___nl__im__93);
#line 275
c_rt_lib0clear(&___nl__im__105);
#line 275
c_rt_lib0move(&___nl__string__106, c_rt_lib0int_to_string(___nl__int__33));
#line 275
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__string__106));
#line 275
c_rt_lib0clear(&___nl__im__92);
#line 275
c_rt_lib0clear(&___nl__string__106);
#line 275
c_rt_lib0move(&___nl__im__107,___get_global_string_const(452));
#line 275
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__107));
#line 275
c_rt_lib0clear(&___nl__im__91);
#line 275
c_rt_lib0clear(&___nl__im__107);
#line 276
c_rt_lib0move(&___nl__im__109,___get_global_string_const(461));
#line 276
c_rt_lib0move(&___nl__im__108, generator_c_priv0get_lib_fun(___nl__im__109));
#line 276
c_rt_lib0clear(&___nl__im__109);
#line 276
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__108));
#line 276
c_rt_lib0clear(&___nl__im__90);
#line 276
c_rt_lib0clear(&___nl__im__108);
#line 276
c_rt_lib0move(&___nl__im__110,___get_global_string_const(458));
#line 276
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__110));
#line 276
c_rt_lib0clear(&___nl__im__89);
#line 276
c_rt_lib0clear(&___nl__im__110);
#line 276
c_rt_lib0move(&___nl__im__111, generator_c_priv0im_t());
#line 276
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__111));
#line 276
c_rt_lib0clear(&___nl__im__88);
#line 276
c_rt_lib0clear(&___nl__im__111);
#line 276
c_rt_lib0move(&___nl__im__112,___get_global_string_const(462));
#line 276
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__112));
#line 276
c_rt_lib0clear(&___nl__im__87);
#line 276
c_rt_lib0clear(&___nl__im__112);
#line 276
c_rt_lib0move(&___nl__im__113, generator_c_priv0im_t());
#line 276
c_rt_lib0move(&___nl__im__85, c_rt_lib0concat_new(___nl__im__86, ___nl__im__113));
#line 276
c_rt_lib0clear(&___nl__im__86);
#line 276
c_rt_lib0clear(&___nl__im__113);
#line 277
c_rt_lib0move(&___nl__im__114,___get_global_string_const(463));
#line 277
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__im__114));
#line 277
c_rt_lib0clear(&___nl__im__85);
#line 277
c_rt_lib0clear(&___nl__im__114);
#line 277
c_rt_lib0move(&___nl__string__115, c_rt_lib0int_to_string(___nl__int__34));
#line 277
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__string__115));
#line 277
c_rt_lib0clear(&___nl__im__84);
#line 277
c_rt_lib0clear(&___nl__string__115);
#line 277
c_rt_lib0move(&___nl__im__116,___get_global_string_const(464));
#line 277
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__116));
#line 277
c_rt_lib0clear(&___nl__im__83);
#line 277
c_rt_lib0clear(&___nl__im__116);
#line 277
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__82));
#line 277
c_rt_lib0clear(&___nl__im__82);
#line 280
c_rt_lib0move(&___nl__im__122, generator_c_priv0im_t());
#line 280
c_rt_lib0move(&___nl__im__123,___get_global_string_const(465));
#line 280
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__im__123));
#line 280
c_rt_lib0clear(&___nl__im__122);
#line 280
c_rt_lib0clear(&___nl__im__123);
#line 281
c_rt_lib0move(&___nl__im__124, generator_c_priv0im_t());
#line 281
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__124));
#line 281
c_rt_lib0clear(&___nl__im__121);
#line 281
c_rt_lib0clear(&___nl__im__124);
#line 281
c_rt_lib0move(&___nl__im__125,___get_global_string_const(466));
#line 281
c_rt_lib0move(&___nl__im__119, c_rt_lib0concat_new(___nl__im__120, ___nl__im__125));
#line 281
c_rt_lib0clear(&___nl__im__120);
#line 281
c_rt_lib0clear(&___nl__im__125);
#line 282
c_rt_lib0move(&___nl__im__127,___get_global_string_const(467));
#line 282
c_rt_lib0move(&___nl__im__129,___get_global_string_const(468));
#line 282
c_rt_lib0move(&___nl__im__132,___get_global_string_const(469));
#line 282
c_rt_lib0move(&___nl__im__133, generator_c_priv0im_t());
#line 282
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__im__133));
#line 282
c_rt_lib0clear(&___nl__im__132);
#line 282
c_rt_lib0clear(&___nl__im__133);
#line 282
c_rt_lib0move(&___nl__im__134,___get_global_string_const(470));
#line 282
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__131, ___nl__im__134));
#line 282
c_rt_lib0clear(&___nl__im__131);
#line 282
c_rt_lib0clear(&___nl__im__134);
#line 282
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_mk(2, ___nl__im__129, ___nl__im__130));
#line 282
c_rt_lib0clear(&___nl__im__129);
#line 282
c_rt_lib0clear(&___nl__im__130);
#line 282
c_rt_lib0move(&___nl__im__126, generator_c_priv0get_fun_lib(___nl__im__127, ___nl__im__128));
#line 282
c_rt_lib0clear(&___nl__im__127);
#line 282
c_rt_lib0clear(&___nl__im__128);
#line 282
c_rt_lib0move(&___nl__im__118, c_rt_lib0concat_new(___nl__im__119, ___nl__im__126));
#line 282
c_rt_lib0clear(&___nl__im__119);
#line 282
c_rt_lib0clear(&___nl__im__126);
#line 282
c_rt_lib0move(&___nl__im__135,___get_global_string_const(471));
#line 282
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__135));
#line 282
c_rt_lib0clear(&___nl__im__118);
#line 282
c_rt_lib0clear(&___nl__im__135);
#line 282
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__117));
#line 282
c_rt_lib0clear(&___nl__im__117);
#line 285
c_rt_lib0move(&___nl__im__141, generator_c_priv0im_t());
#line 285
c_rt_lib0move(&___nl__im__142,___get_global_string_const(472));
#line 285
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__142));
#line 285
c_rt_lib0clear(&___nl__im__141);
#line 285
c_rt_lib0clear(&___nl__im__142);
#line 286
c_rt_lib0move(&___nl__im__143, generator_c_priv0im_t());
#line 286
c_rt_lib0move(&___nl__im__139, c_rt_lib0concat_new(___nl__im__140, ___nl__im__143));
#line 286
c_rt_lib0clear(&___nl__im__140);
#line 286
c_rt_lib0clear(&___nl__im__143);
#line 286
c_rt_lib0move(&___nl__im__144,___get_global_string_const(466));
#line 286
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__144));
#line 286
c_rt_lib0clear(&___nl__im__139);
#line 286
c_rt_lib0clear(&___nl__im__144);
#line 287
c_rt_lib0move(&___nl__im__146,___get_global_string_const(467));
#line 287
c_rt_lib0move(&___nl__im__148,___get_global_string_const(468));
#line 287
c_rt_lib0move(&___nl__im__151,___get_global_string_const(469));
#line 287
c_rt_lib0move(&___nl__im__152, generator_c_priv0im_t());
#line 287
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__152));
#line 287
c_rt_lib0clear(&___nl__im__151);
#line 287
c_rt_lib0clear(&___nl__im__152);
#line 287
c_rt_lib0move(&___nl__im__153,___get_global_string_const(473));
#line 287
c_rt_lib0move(&___nl__im__149, c_rt_lib0concat_new(___nl__im__150, ___nl__im__153));
#line 287
c_rt_lib0clear(&___nl__im__150);
#line 287
c_rt_lib0clear(&___nl__im__153);
#line 287
c_rt_lib0move(&___nl__im__147, c_rt_lib0array_mk(2, ___nl__im__148, ___nl__im__149));
#line 287
c_rt_lib0clear(&___nl__im__148);
#line 287
c_rt_lib0clear(&___nl__im__149);
#line 287
c_rt_lib0move(&___nl__im__145, generator_c_priv0get_fun_lib(___nl__im__146, ___nl__im__147));
#line 287
c_rt_lib0clear(&___nl__im__146);
#line 287
c_rt_lib0clear(&___nl__im__147);
#line 287
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__145));
#line 287
c_rt_lib0clear(&___nl__im__138);
#line 287
c_rt_lib0clear(&___nl__im__145);
#line 287
c_rt_lib0move(&___nl__im__154,___get_global_string_const(471));
#line 287
c_rt_lib0move(&___nl__im__136, c_rt_lib0concat_new(___nl__im__137, ___nl__im__154));
#line 287
c_rt_lib0clear(&___nl__im__137);
#line 287
c_rt_lib0clear(&___nl__im__154);
#line 287
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__136));
#line 287
c_rt_lib0clear(&___nl__im__136);
#line 290
___nl__im_ptr__157 = &((*___ref___rec__0).ret0field);
#line 290
c_rt_lib0copy(&___nl__im__156, (*___nl__im_ptr__157));
#line 290
___nl__im_ptr__157 = NULL;
#line 290
___nl__im_ptr__159 = &((*___ref___rec__0).header0field);
#line 290
c_rt_lib0copy(&___nl__im__158, (*___nl__im_ptr__159));
#line 290
___nl__im_ptr__159 = NULL;
#line 290
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__156, ___get_global_string_const(72), ___nl__im__158));
#line 290
c_rt_lib0clear(&___nl__im__156);
#line 290
c_rt_lib0clear(&___nl__im__158);
#line 290
c_rt_lib0clear(&___nl__im__27);
#line 290
c_rt_lib0clear(&___nl__im__30);
#line 290
//clear ___nl__int__33;
#line 290
//clear ___nl__int__34;
#line 290
//clear ___nl__int__60;
#line 290
//clear ___nl__int__61;
#line 290
//clear ___nl__bool__62;
#line 290
//clear ___nl__int__71;
#line 290
//clear ___nl__int__72;
#line 290
//clear ___nl__bool__73;
#line 290
return ___nl__im__155;
return NULL;

}

ImmT  generator_c_priv0get_include(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 294
c_rt_lib0move(&___nl__im__3,___get_global_string_const(474));
#line 294
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 294
c_rt_lib0clear(&___nl__im__3);
#line 294
c_rt_lib0move(&___nl__im__4,___get_global_string_const(475));
#line 294
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 294
c_rt_lib0clear(&___nl__im__2);
#line 294
c_rt_lib0clear(&___nl__im__4);
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_system_include(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 298
c_rt_lib0move(&___nl__im__3,___get_global_string_const(476));
#line 298
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 298
c_rt_lib0clear(&___nl__im__3);
#line 298
c_rt_lib0move(&___nl__im__4,___get_global_string_const(477));
#line 298
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 298
c_rt_lib0clear(&___nl__im__2);
#line 298
c_rt_lib0clear(&___nl__im__4);
#line 298
c_rt_lib0clear(&___nl__im__0);
#line 298
return ___nl__im__1;
return NULL;

}

ImmT generator_c_priv0get_cr(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(16);
}
ImmT generator_c_priv0get_cr0cal() {
generator_c_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 302
c_rt_lib0move(&___nl__im__0,___get_global_string_const(478));
#line 302
return ___nl__im__0;
return NULL;

}

ImmT  generator_c_priv0get_function_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 311
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(232)));
#line 311
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(233));
#line 311
if(___nl__bool__4){ goto label_8;}
#line 313
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(479));
#line 313
if(___nl__bool__4){ goto label_11;}
#line 313
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 313
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 313
nl_die_arg(___nl__im__5);
#line 311
label_8:
;
#line 312
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 313
goto label_14;
#line 313
label_11:
;
#line 314
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 315
goto label_14;
#line 315
label_14:
;
#line 316
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(181)));
#line 316
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_name(___nl__im__2, ___nl__im__7, ___nl__im__1));
#line 316
c_rt_lib0clear(&___nl__im__7);
#line 316
c_rt_lib0clear(&___nl__im__0);
#line 316
c_rt_lib0clear(&___nl__im__1);
#line 316
c_rt_lib0clear(&___nl__im__2);
#line 316
c_rt_lib0clear(&___nl__im__3);
#line 316
//clear ___nl__bool__4;
#line 316
c_rt_lib0clear(&___nl__im__5);
#line 316
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_function_header(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
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
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
#line 320
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 321
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 322
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 322
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_type_name(___nl__im__8));
#line 322
c_rt_lib0clear(&___nl__im__8);
#line 322
c_rt_lib0move(&___nl__im__9,___get_global_string_const(480));
#line 322
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 322
c_rt_lib0clear(&___nl__im__7);
#line 322
c_rt_lib0clear(&___nl__im__9);
#line 322
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__3));
#line 322
c_rt_lib0clear(&___nl__im__6);
#line 322
c_rt_lib0move(&___nl__im__10,___get_global_string_const(469));
#line 322
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 322
c_rt_lib0clear(&___nl__im__5);
#line 322
c_rt_lib0clear(&___nl__im__10);
#line 322
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 322
c_rt_lib0clear(&___nl__im__4);
#line 323
___nl__int__11 = 0;
#line 324
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 324
___nl__int__14 = 0;
#line 324
___nl__int__15 = 1;
#line 324
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 324
label_22:
;
#line 324
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 324
if(___nl__bool__17){ goto label_88;}
#line 324
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 324
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 325
___nl__int__20 = 0;
#line 325
___nl__bool__19 = ___nl__int__20 == ___nl__int__11;
#line 325
//clear ___nl__int__20;
#line 325
___nl__bool__19 = !___nl__bool__19;
#line 325
___nl__bool__19 = !___nl__bool__19;
#line 325
if(___nl__bool__19){ goto label_37;}
#line 325
c_rt_lib0move(&___nl__im__21,___get_global_string_const(328));
#line 325
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__21));
#line 325
c_rt_lib0clear(&___nl__im__21);
#line 325
goto label_37;
#line 325
label_37:
;
#line 325
//clear ___nl__bool__19;
#line 326
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(369)));
#line 326
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(245));
#line 326
if(___nl__bool__23){ goto label_47;}
#line 328
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(39));
#line 328
if(___nl__bool__23){ goto label_64;}
#line 328
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 328
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__22));
#line 328
nl_die_arg(___nl__im__24);
#line 326
label_47:
;
#line 327
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(110)));
#line 327
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_type_name(___nl__im__28));
#line 327
c_rt_lib0clear(&___nl__im__28);
#line 327
c_rt_lib0move(&___nl__im__29,___get_global_string_const(481));
#line 327
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 327
c_rt_lib0clear(&___nl__im__27);
#line 327
c_rt_lib0clear(&___nl__im__29);
#line 327
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(482)));
#line 327
c_rt_lib0move(&___nl__im__30, generator_c_priv0reg_suffix(___nl__im__31));
#line 327
c_rt_lib0clear(&___nl__im__31);
#line 327
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 327
c_rt_lib0clear(&___nl__im__26);
#line 327
c_rt_lib0clear(&___nl__im__30);
#line 327
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 327
c_rt_lib0clear(&___nl__im__25);
#line 328
goto label_81;
#line 328
label_64:
;
#line 329
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(110)));
#line 329
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_type_name(___nl__im__35));
#line 329
c_rt_lib0clear(&___nl__im__35);
#line 329
c_rt_lib0move(&___nl__im__36,___get_global_string_const(483));
#line 329
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__36));
#line 329
c_rt_lib0clear(&___nl__im__34);
#line 329
c_rt_lib0clear(&___nl__im__36);
#line 329
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(482)));
#line 329
c_rt_lib0move(&___nl__im__37, generator_c_priv0reg_suffix(___nl__im__38));
#line 329
c_rt_lib0clear(&___nl__im__38);
#line 329
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__37));
#line 329
c_rt_lib0clear(&___nl__im__33);
#line 329
c_rt_lib0clear(&___nl__im__37);
#line 329
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__32));
#line 329
c_rt_lib0clear(&___nl__im__32);
#line 330
goto label_81;
#line 330
label_81:
;
#line 331
___nl__int__39 = 1;
#line 331
___nl__int__11 = ___nl__int__11 + ___nl__int__39;
#line 331
//clear ___nl__int__39;
#line 331
c_rt_lib0clear(&___nl__im__13);
#line 332
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 332
goto label_22;
#line 332
label_88:
;
#line 333
c_rt_lib0move(&___nl__im__40,___get_global_string_const(336));
#line 333
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__40));
#line 333
c_rt_lib0clear(&___nl__im__40);
#line 334
c_rt_lib0clear(&___nl__im__0);
#line 334
c_rt_lib0clear(&___nl__im__1);
#line 334
c_rt_lib0clear(&___nl__im__3);
#line 334
//clear ___nl__int__11;
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
//clear ___nl__int__14;
#line 334
//clear ___nl__int__15;
#line 334
//clear ___nl__int__16;
#line 334
//clear ___nl__bool__17;
#line 334
c_rt_lib0clear(&___nl__im__18);
#line 334
c_rt_lib0clear(&___nl__im__22);
#line 334
//clear ___nl__bool__23;
#line 334
c_rt_lib0clear(&___nl__im__24);
#line 334
return ___nl__im__2;
return NULL;

}

INT  generator_c_priv0get_const(generator_c0const_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__6 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 338
___nl__int__2 = 1;
#line 338
___nl__int__2 = -___nl__int__2;
#line 339
___nl__im_ptr__5 = &((*___ref___rec__0).hash0field);
#line 339
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 339
___nl__im_ptr__5 = NULL;
#line 339
___nl__bool__3 = hash0has_key(___nl__im__4, ___nl__im__1);
#line 339
c_rt_lib0clear(&___nl__im__4);
#line 339
___nl__bool__3 = !___nl__bool__3;
#line 339
___nl__bool__3 = !___nl__bool__3;
#line 339
if(___nl__bool__3){ goto label_22;}
#line 340
___nl__arr_ptr__6 = &((*___ref___rec__0).arr0field);
#line 340
___nl__int__2 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__6);
#line 340
___nl__arr_ptr__6 = NULL;
#line 341
___nl__arr_ptr__7 = &((*___ref___rec__0).arr0field);
#line 341
generator_c0anon_type00ownarranon_type00im0push(___nl__arr_ptr__7, ___nl__im__1);
#line 341
___nl__arr_ptr__7 = NULL;
#line 342
___nl__im_ptr__8 = &((*___ref___rec__0).hash0field);
#line 342
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 342
c_rt_lib0delete(hash0set_value(___nl__im_ptr__8, ___nl__im__1, ___nl__im__9));
#line 342
___nl__im_ptr__8 = NULL;
#line 342
c_rt_lib0clear(&___nl__im__9);
#line 343
goto label_31;
#line 343
label_22:
;
#line 344
___nl__im_ptr__11 = &((*___ref___rec__0).hash0field);
#line 344
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 344
___nl__im_ptr__11 = NULL;
#line 344
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__10, ___nl__im__1));
#line 344
___nl__int__2 = getIntFromImm(___nl__im__12);
#line 344
c_rt_lib0clear(&___nl__im__10);
#line 344
c_rt_lib0clear(&___nl__im__12);
#line 345
goto label_31;
#line 345
label_31:
;
#line 345
//clear ___nl__bool__3;
#line 346
c_rt_lib0clear(&___nl__im__1);
#line 346
return ___nl__int__2;
return 0;

}

ImmT  generator_c_priv0insert_const_to_modules_hash(generator_c0global_const_t0type* ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
#line 350
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(144)));
#line 350
c_rt_lib0move(&___nl__im__3, hash0get_value(___nl__im__4, ___nl__im__2));
#line 350
c_rt_lib0clear(&___nl__im__4);
#line 351
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 351
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__1, ___nl__im__5));
#line 351
c_rt_lib0clear(&___nl__im__5);
#line 352
c_rt_lib0move(&___nl__im__6,___get_global_string_const(144));
#line 352
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 352
c_rt_lib0delete(hash0set_value(&___nl__im__6, ___nl__im__2, ___nl__im__3));
#line 352
c_rt_lib0move(&___nl__string__7,___get_global_string_const(144));
#line 352
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__6));
#line 352
c_rt_lib0clear(&___nl__im__6);
#line 352
c_rt_lib0clear(&___nl__string__7);
#line 352
c_rt_lib0clear(&___nl__im__1);
#line 352
c_rt_lib0clear(&___nl__im__2);
#line 352
c_rt_lib0clear(&___nl__im__3);
#line 352
return NULL;
return NULL;

}

INT  generator_c_priv0get_global_const(generator_c0global_const_t0type* ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__string__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__string__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__string__45 = NULL;
#line 357
___nl__int__4 = 1;
#line 357
___nl__int__4 = -___nl__int__4;
#line 358
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(142)));
#line 358
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__1);
#line 358
c_rt_lib0clear(&___nl__im__6);
#line 358
___nl__bool__5 = !___nl__bool__5;
#line 358
___nl__bool__5 = !___nl__bool__5;
#line 358
if(___nl__bool__5){ goto label_84;}
#line 359
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(143)));
#line 359
___nl__int__8 = c_rt_lib0array_len(___nl__im__9);
#line 359
c_rt_lib0clear(&___nl__im__9);
#line 359
___nl__int__10 = 0;
#line 359
___nl__bool__7 = ___nl__int__8 > ___nl__int__10;
#line 359
//clear ___nl__int__8;
#line 359
//clear ___nl__int__10;
#line 359
___nl__bool__7 = !___nl__bool__7;
#line 359
if(___nl__bool__7){ goto label_53;}
#line 360
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(143)));
#line 360
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(143)));
#line 360
___nl__int__13 = c_rt_lib0array_len(___nl__im__14);
#line 360
c_rt_lib0clear(&___nl__im__14);
#line 360
___nl__int__15 = 1;
#line 360
___nl__int__12 = ___nl__int__13 - ___nl__int__15;
#line 360
//clear ___nl__int__13;
#line 360
//clear ___nl__int__15;
#line 360
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__11, ___nl__int__12));
#line 360
___nl__int__4 = getIntFromImm(___nl__im__16);
#line 360
c_rt_lib0clear(&___nl__im__11);
#line 360
//clear ___nl__int__12;
#line 360
c_rt_lib0clear(&___nl__im__16);
#line 361
c_rt_lib0move(&___nl__im__17,___get_global_string_const(143));
#line 361
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__17));
#line 361
c_rt_lib0delete(array0pop(&___nl__im__17));
#line 361
c_rt_lib0move(&___nl__string__18,___get_global_string_const(143));
#line 361
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__18, ___nl__im__17));
#line 361
c_rt_lib0clear(&___nl__im__17);
#line 361
c_rt_lib0clear(&___nl__string__18);
#line 362
___nl__int__20 = 1;
#line 362
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__20));
#line 362
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__2, ___get_global_string_const(413), ___nl__im__21));
#line 362
//clear ___nl__int__20;
#line 362
c_rt_lib0clear(&___nl__im__21);
#line 362
c_rt_lib0move(&___nl__im__22,___get_global_string_const(141));
#line 362
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__22));
#line 362
c_rt_lib0copy(&___nl__im__23, ___nl__im__19);
#line 362
c_rt_lib0array_set(&___nl__im__22, ___nl__int__4, ___nl__im__23);
#line 362
c_rt_lib0move(&___nl__string__24,___get_global_string_const(141));
#line 362
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__24, ___nl__im__22));
#line 362
c_rt_lib0clear(&___nl__im__19);
#line 362
c_rt_lib0clear(&___nl__im__22);
#line 362
c_rt_lib0clear(&___nl__im__23);
#line 362
c_rt_lib0clear(&___nl__string__24);
#line 363
goto label_71;
#line 363
label_53:
;
#line 364
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(141)));
#line 364
___nl__int__4 = c_rt_lib0array_len(___nl__im__25);
#line 364
c_rt_lib0clear(&___nl__im__25);
#line 365
c_rt_lib0move(&___nl__im__26,___get_global_string_const(141));
#line 365
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__26));
#line 365
___nl__int__28 = 1;
#line 365
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__28));
#line 365
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__2, ___get_global_string_const(413), ___nl__im__29));
#line 365
//clear ___nl__int__28;
#line 365
c_rt_lib0clear(&___nl__im__29);
#line 365
c_rt_lib0delete(array0push(&___nl__im__26, ___nl__im__27));
#line 365
c_rt_lib0move(&___nl__string__30,___get_global_string_const(141));
#line 365
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__30, ___nl__im__26));
#line 365
c_rt_lib0clear(&___nl__im__26);
#line 365
c_rt_lib0clear(&___nl__im__27);
#line 365
c_rt_lib0clear(&___nl__string__30);
#line 366
goto label_71;
#line 366
label_71:
;
#line 366
//clear ___nl__bool__7;
#line 367
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 368
c_rt_lib0move(&___nl__im__31,___get_global_string_const(142));
#line 368
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__31));
#line 368
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__4));
#line 368
c_rt_lib0delete(hash0set_value(&___nl__im__31, ___nl__im__1, ___nl__im__32));
#line 368
c_rt_lib0move(&___nl__string__33,___get_global_string_const(142));
#line 368
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__33, ___nl__im__31));
#line 368
c_rt_lib0clear(&___nl__im__31);
#line 368
c_rt_lib0clear(&___nl__im__32);
#line 368
c_rt_lib0clear(&___nl__string__33);
#line 369
goto label_123;
#line 369
label_84:
;
#line 370
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(142)));
#line 370
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__34, ___nl__im__1));
#line 370
___nl__int__4 = getIntFromImm(___nl__im__35);
#line 370
c_rt_lib0clear(&___nl__im__34);
#line 370
c_rt_lib0clear(&___nl__im__35);
#line 371
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(144)));
#line 371
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__37, ___nl__im__3));
#line 371
c_rt_lib0clear(&___nl__im__37);
#line 372
___nl__bool__38 = hash0has_key(___nl__im__36, ___nl__im__1);
#line 372
___nl__bool__38 = !___nl__bool__38;
#line 372
___nl__bool__38 = !___nl__bool__38;
#line 372
if(___nl__bool__38){ goto label_120;}
#line 373
c_rt_lib0move(&___nl__im__39,___get_global_string_const(141));
#line 373
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__39));
#line 373
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_arr(___nl__im__39, ___nl__int__4));
#line 373
c_rt_lib0move(&___nl__im__41,___get_global_string_const(413));
#line 373
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash(___nl__im__40, ___nl__im__41));
#line 373
___nl__int__42 = 1;
#line 373
___nl__int__43 = getIntFromImm(___nl__im__41);
#line 373
___nl__int__44 = ___nl__int__43 + ___nl__int__42;
#line 373
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__44));
#line 373
c_rt_lib0move(&___nl__string__45,___get_global_string_const(413));
#line 373
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__40, ___nl__string__45, ___nl__im__41));
#line 373
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__39, ___nl__int__4, ___nl__im__40));
#line 373
c_rt_lib0move(&___nl__string__45,___get_global_string_const(141));
#line 373
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__45, ___nl__im__39));
#line 373
c_rt_lib0clear(&___nl__im__39);
#line 373
c_rt_lib0clear(&___nl__im__40);
#line 373
c_rt_lib0clear(&___nl__im__41);
#line 373
//clear ___nl__int__42;
#line 373
//clear ___nl__int__43;
#line 373
//clear ___nl__int__44;
#line 373
c_rt_lib0clear(&___nl__string__45);
#line 374
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 375
goto label_120;
#line 375
label_120:
;
#line 375
//clear ___nl__bool__38;
#line 376
goto label_123;
#line 376
label_123:
;
#line 376
//clear ___nl__bool__5;
#line 376
c_rt_lib0clear(&___nl__im__36);
#line 377
c_rt_lib0clear(&___nl__im__1);
#line 377
c_rt_lib0clear(&___nl__im__2);
#line 377
c_rt_lib0clear(&___nl__im__3);
#line 377
return ___nl__int__4;
return 0;

}

ImmT  generator_c0clear_module_from_state(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
#line 381
___nl__im_ptr__2 = &((*___ref___rec__0).global_int_const0field);
#line 381
c_rt_lib0delete(generator_c_priv0clear_module_from_const(___nl__im_ptr__2, ___nl__im__1));
#line 381
___nl__im_ptr__2 = NULL;
#line 382
___nl__im_ptr__3 = &((*___ref___rec__0).global_string_const0field);
#line 382
c_rt_lib0delete(generator_c_priv0clear_module_from_const(___nl__im_ptr__3, ___nl__im__1));
#line 382
___nl__im_ptr__3 = NULL;
#line 382
c_rt_lib0clear(&___nl__im__1);
#line 382
return NULL;
return NULL;

}

ImmT  generator_c_priv0clear_module_from_const(generator_c0global_const_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__string__19 = NULL;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__string__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__string__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__string__32 = NULL;
#line 386
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(144)));
#line 386
___nl__bool__2 = hash0has_key(___nl__im__3, ___nl__im__1);
#line 386
c_rt_lib0clear(&___nl__im__3);
#line 386
___nl__bool__2 = !___nl__bool__2;
#line 386
if(___nl__bool__2){ goto label_84;}
#line 387
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(144)));
#line 387
c_rt_lib0move(&___nl__im__4, hash0get_value(___nl__im__5, ___nl__im__1));
#line 387
c_rt_lib0clear(&___nl__im__5);
#line 388
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__4));
#line 388
label_9:
;
#line 388
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 388
if(___nl__bool__7){ goto label_75;}
#line 388
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 388
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__6));
#line 389
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(142)));
#line 389
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__11, ___nl__im__6));
#line 389
___nl__int__10 = getIntFromImm(___nl__im__12);
#line 389
c_rt_lib0clear(&___nl__im__11);
#line 389
c_rt_lib0clear(&___nl__im__12);
#line 390
c_rt_lib0move(&___nl__im__13,___get_global_string_const(141));
#line 390
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__13));
#line 390
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_arr(___nl__im__13, ___nl__int__10));
#line 390
c_rt_lib0move(&___nl__im__15,___get_global_string_const(413));
#line 390
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash(___nl__im__14, ___nl__im__15));
#line 390
___nl__int__16 = 1;
#line 390
___nl__int__17 = getIntFromImm(___nl__im__15);
#line 390
___nl__int__18 = ___nl__int__17 - ___nl__int__16;
#line 390
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__18));
#line 390
c_rt_lib0move(&___nl__string__19,___get_global_string_const(413));
#line 390
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__14, ___nl__string__19, ___nl__im__15));
#line 390
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__13, ___nl__int__10, ___nl__im__14));
#line 390
c_rt_lib0move(&___nl__string__19,___get_global_string_const(141));
#line 390
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__19, ___nl__im__13));
#line 390
c_rt_lib0clear(&___nl__im__13);
#line 390
c_rt_lib0clear(&___nl__im__14);
#line 390
c_rt_lib0clear(&___nl__im__15);
#line 390
//clear ___nl__int__16;
#line 390
//clear ___nl__int__17;
#line 390
//clear ___nl__int__18;
#line 390
c_rt_lib0clear(&___nl__string__19);
#line 391
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(141)));
#line 391
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__23, ___nl__int__10));
#line 391
c_rt_lib0clear(&___nl__im__23);
#line 391
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(413)));
#line 391
___nl__int__21 = getIntFromImm(___nl__im__24);
#line 391
c_rt_lib0clear(&___nl__im__22);
#line 391
c_rt_lib0clear(&___nl__im__24);
#line 391
___nl__int__25 = 0;
#line 391
___nl__bool__20 = ___nl__int__21 == ___nl__int__25;
#line 391
//clear ___nl__int__21;
#line 391
//clear ___nl__int__25;
#line 391
___nl__bool__20 = !___nl__bool__20;
#line 391
if(___nl__bool__20){ goto label_70;}
#line 392
c_rt_lib0move(&___nl__im__26,___get_global_string_const(142));
#line 392
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__26));
#line 392
c_rt_lib0delete(hash0delete(&___nl__im__26, ___nl__im__6));
#line 392
c_rt_lib0move(&___nl__string__27,___get_global_string_const(142));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__27, ___nl__im__26));
#line 392
c_rt_lib0clear(&___nl__im__26);
#line 392
c_rt_lib0clear(&___nl__string__27);
#line 393
c_rt_lib0move(&___nl__im__28,___get_global_string_const(143));
#line 393
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__28));
#line 393
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__10));
#line 393
c_rt_lib0delete(array0push(&___nl__im__28, ___nl__im__29));
#line 393
c_rt_lib0move(&___nl__string__30,___get_global_string_const(143));
#line 393
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__30, ___nl__im__28));
#line 393
c_rt_lib0clear(&___nl__im__28);
#line 393
c_rt_lib0clear(&___nl__im__29);
#line 393
c_rt_lib0clear(&___nl__string__30);
#line 394
goto label_70;
#line 394
label_70:
;
#line 394
//clear ___nl__bool__20;
#line 394
//clear ___nl__int__10;
#line 395
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 395
goto label_9;
#line 395
label_75:
;
#line 396
c_rt_lib0move(&___nl__im__31,___get_global_string_const(144));
#line 396
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__31));
#line 396
c_rt_lib0delete(hash0delete(&___nl__im__31, ___nl__im__1));
#line 396
c_rt_lib0move(&___nl__string__32,___get_global_string_const(144));
#line 396
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__32, ___nl__im__31));
#line 396
c_rt_lib0clear(&___nl__im__31);
#line 396
c_rt_lib0clear(&___nl__string__32);
#line 397
goto label_84;
#line 397
label_84:
;
#line 397
//clear ___nl__bool__2;
#line 397
c_rt_lib0clear(&___nl__im__4);
#line 397
c_rt_lib0clear(&___nl__im__6);
#line 397
//clear ___nl__bool__7;
#line 397
c_rt_lib0clear(&___nl__im__8);
#line 397
c_rt_lib0clear(&___nl__im__9);
#line 397
//clear ___nl__int__10;
#line 397
c_rt_lib0clear(&___nl__im__1);
#line 397
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_const_int(generator_c0state_t0type* ___ref___rec__0,INT  ___nl__int__1) {
generator_c_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 401
___nl__im_ptr__3 = &((*___ref___rec__0).global_int_const0field);
#line 401
c_rt_lib0move(&___nl__im__4, ptd0int_to_string(___nl__int__1));
#line 401
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__1));
#line 401
___nl__im_ptr__7 = &((*___ref___rec__0).mod_name0field);
#line 401
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 401
___nl__im_ptr__7 = NULL;
#line 401
___nl__int__2 = generator_c_priv0get_global_const(___nl__im_ptr__3, ___nl__im__4, ___nl__im__5, ___nl__im__6);
#line 401
___nl__im_ptr__3 = NULL;
#line 401
c_rt_lib0clear(&___nl__im__4);
#line 401
c_rt_lib0clear(&___nl__im__5);
#line 401
c_rt_lib0clear(&___nl__im__6);
#line 402
c_rt_lib0move(&___nl__im__10,___get_global_string_const(484));
#line 402
c_rt_lib0move(&___nl__string__11, c_rt_lib0int_to_string(___nl__int__2));
#line 402
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__string__11));
#line 402
c_rt_lib0clear(&___nl__im__10);
#line 402
c_rt_lib0clear(&___nl__string__11);
#line 402
c_rt_lib0move(&___nl__im__12,___get_global_string_const(336));
#line 402
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 402
c_rt_lib0clear(&___nl__im__9);
#line 402
c_rt_lib0clear(&___nl__im__12);
#line 402
//clear ___nl__int__1;
#line 402
//clear ___nl__int__2;
#line 402
return ___nl__im__8;
return NULL;

}

ImmT  generator_c_priv0get_const_string(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 406
___nl__im_ptr__3 = &((*___ref___rec__0).global_string_const0field);
#line 406
___nl__im_ptr__5 = &((*___ref___rec__0).mod_name0field);
#line 406
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 406
___nl__im_ptr__5 = NULL;
#line 406
___nl__int__2 = generator_c_priv0get_global_const(___nl__im_ptr__3, ___nl__im__1, ___nl__im__1, ___nl__im__4);
#line 406
___nl__im_ptr__3 = NULL;
#line 406
c_rt_lib0clear(&___nl__im__4);
#line 407
c_rt_lib0move(&___nl__im__8,___get_global_string_const(485));
#line 407
c_rt_lib0move(&___nl__string__9, c_rt_lib0int_to_string(___nl__int__2));
#line 407
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__string__9));
#line 407
c_rt_lib0clear(&___nl__im__8);
#line 407
c_rt_lib0clear(&___nl__string__9);
#line 407
c_rt_lib0move(&___nl__im__10,___get_global_string_const(336));
#line 407
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 407
c_rt_lib0clear(&___nl__im__7);
#line 407
c_rt_lib0clear(&___nl__im__10);
#line 407
c_rt_lib0clear(&___nl__im__1);
#line 407
//clear ___nl__int__2;
#line 407
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_const_singleton(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
INT  ___nl__int__2 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__3 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__string__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 411
___nl__rec_ptr__3 = &((*___ref___rec__0).const0field);
#line 411
___nl__rec_ptr__4 = &(___nl__rec_ptr__3->singleton0field);
#line 411
___nl__int__2 = generator_c_priv0get_const(___nl__rec_ptr__4, ___nl__im__1);
#line 411
___nl__rec_ptr__4 = NULL;
#line 411
___nl__rec_ptr__3 = NULL;
#line 412
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 412
c_rt_lib0move(&___nl__im__10,___get_global_string_const(486));
#line 412
___nl__im_ptr__12 = &((*___ref___rec__0).mod_name0field);
#line 412
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 412
___nl__im_ptr__12 = NULL;
#line 412
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_fun_name(___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 412
c_rt_lib0clear(&___nl__im__9);
#line 412
c_rt_lib0clear(&___nl__im__10);
#line 412
c_rt_lib0clear(&___nl__im__11);
#line 412
c_rt_lib0move(&___nl__im__13,___get_global_string_const(469));
#line 412
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 412
c_rt_lib0clear(&___nl__im__8);
#line 412
c_rt_lib0clear(&___nl__im__13);
#line 412
c_rt_lib0move(&___nl__string__14, c_rt_lib0int_to_string(___nl__int__2));
#line 412
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__14));
#line 412
c_rt_lib0clear(&___nl__im__7);
#line 412
c_rt_lib0clear(&___nl__string__14);
#line 412
c_rt_lib0move(&___nl__im__15,___get_global_string_const(336));
#line 412
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 412
c_rt_lib0clear(&___nl__im__6);
#line 412
c_rt_lib0clear(&___nl__im__15);
#line 412
c_rt_lib0clear(&___nl__im__1);
#line 412
//clear ___nl__int__2;
#line 412
return ___nl__im__5;
return NULL;

}

ImmT  generator_c_priv0get_func_ptr_header(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 416
c_rt_lib0move(&___nl__im__5, generator_c_priv0im_t());
#line 416
c_rt_lib0move(&___nl__im__6,___get_global_string_const(480));
#line 416
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 416
c_rt_lib0clear(&___nl__im__5);
#line 416
c_rt_lib0clear(&___nl__im__6);
#line 416
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 416
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__7));
#line 416
c_rt_lib0clear(&___nl__im__4);
#line 416
c_rt_lib0clear(&___nl__im__7);
#line 416
c_rt_lib0move(&___nl__im__8,___get_global_string_const(487));
#line 416
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 416
c_rt_lib0clear(&___nl__im__3);
#line 416
c_rt_lib0clear(&___nl__im__8);
#line 416
c_rt_lib0clear(&___nl__im__0);
#line 416
c_rt_lib0clear(&___nl__im__1);
#line 416
return ___nl__im__2;
return NULL;

}

ImmT  generator_c_priv0print_mod(generator_c0state_t0type* ___ref___rec__0,nlasm0result_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
ImmT * ___nl__im_ptr__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT * ___nl__im_ptr__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT * ___nl__im_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
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
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT * ___nl__im_ptr__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT * ___nl__im_ptr__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT * ___nl__im_ptr__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
INT  ___nl__int__111 = 0;
bool  ___nl__bool__112 = false;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT * ___nl__im_ptr__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT * ___nl__im_ptr__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT * ___nl__im_ptr__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT * ___nl__im_ptr__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
INT  ___nl__int__142 = 0;
INT  ___nl__int__143 = 0;
bool  ___nl__bool__144 = false;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT * ___nl__im_ptr__148 = NULL;
ImmT  ___nl__im__149 = NULL;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
bool  ___nl__bool__156 = false;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT * ___nl__im_ptr__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
INT  ___nl__int__169 = 0;
INT  ___nl__int__170 = 0;
INT  ___nl__int__171 = 0;
bool  ___nl__bool__172 = false;
ImmT  ___nl__im__173 = NULL;
bool  ___nl__bool__174 = false;
bool  ___nl__bool__175 = false;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT * ___nl__im_ptr__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT * ___nl__im_ptr__183 = NULL;
ImmT  ___nl__im__184 = NULL;
INT  ___nl__int__185 = 0;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
INT  ___nl__int__195 = 0;
INT  ___nl__int__196 = 0;
bool  ___nl__bool__197 = false;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__string__211 = NULL;
ImmT  ___nl__im__212 = NULL;
bool  ___nl__bool__213 = false;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__string__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__string__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
INT  ___nl__int__244 = 0;
INT  ___nl__int__245 = 0;
bool  ___nl__bool__246 = false;
bool  ___nl__bool__247 = false;
INT  ___nl__int__248 = 0;
ImmT  ___nl__im__249 = NULL;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
bool  ___nl__bool__254 = false;
ImmT  ___nl__im__255 = NULL;
bool  ___nl__bool__256 = false;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
bool  ___nl__bool__261 = false;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__string__269 = NULL;
ImmT  ___nl__im__270 = NULL;
INT  ___nl__int__271 = 0;
INT  ___nl__int__272 = 0;
bool  ___nl__bool__273 = false;
bool  ___nl__bool__274 = false;
ImmT  ___nl__im__275 = NULL;
ImmT  ___nl__im__276 = NULL;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
ImmT  ___nl__im__280 = NULL;
ImmT  ___nl__im__281 = NULL;
ImmT  ___nl__string__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
ImmT  ___nl__im__287 = NULL;
ImmT  ___nl__im__288 = NULL;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__string__291 = NULL;
ImmT  ___nl__im__292 = NULL;
ImmT  ___nl__im__293 = NULL;
ImmT  ___nl__im__294 = NULL;
ImmT  ___nl__im__295 = NULL;
ImmT  ___nl__im__296 = NULL;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
ImmT  ___nl__im__299 = NULL;
ImmT  ___nl__im__300 = NULL;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
ImmT  ___nl__im__303 = NULL;
ImmT  ___nl__im__304 = NULL;
bool  ___nl__bool__305 = false;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__im__307 = NULL;
ImmT * ___nl__im_ptr__308 = NULL;
ImmT  ___nl__im__309 = NULL;
ImmT  ___nl__im__310 = NULL;
ImmT  ___nl__im__311 = NULL;
ImmT  ___nl__im__312 = NULL;
ImmT  ___nl__im__313 = NULL;
ImmT  ___nl__im__314 = NULL;
ImmT  ___nl__im__315 = NULL;
ImmT  ___nl__im__316 = NULL;
ImmT  ___nl__im__317 = NULL;
ImmT * ___nl__im_ptr__318 = NULL;
ImmT  ___nl__im__319 = NULL;
ImmT  ___nl__im__320 = NULL;
ImmT  ___nl__im__321 = NULL;
ImmT  ___nl__im__322 = NULL;
ImmT  ___nl__im__323 = NULL;
ImmT  ___nl__im__324 = NULL;
ImmT  ___nl__im__325 = NULL;
ImmT  ___nl__im__326 = NULL;
ImmT  ___nl__im__327 = NULL;
ImmT  ___nl__im__328 = NULL;
ImmT  ___nl__im__329 = NULL;
ImmT  ___nl__im__330 = NULL;
ImmT  ___nl__im__331 = NULL;
ImmT  ___nl__im__332 = NULL;
ImmT  ___nl__im__333 = NULL;
ImmT  ___nl__im__334 = NULL;
ImmT * ___nl__im_ptr__335 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__336 = NULL;
ImmT  ___nl__im__337 = NULL;
bool  ___nl__bool__338 = false;
bool * ___nl__bool_ptr__339 = NULL;
INT  ___nl__int__340 = 0;
ImmT  ___nl__im__341 = NULL;
ImmT  ___nl__im__342 = NULL;
ImmT  ___nl__im__343 = NULL;
ImmT  ___nl__im__344 = NULL;
ImmT  ___nl__im__345 = NULL;
ImmT * ___nl__im_ptr__346 = NULL;
ImmT * ___nl__im_ptr__347 = NULL;
#line 420
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_cr());
#line 420
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__3));
#line 420
c_rt_lib0clear(&___nl__im__3);
#line 421
c_rt_lib0move(&___nl__im__5,___get_global_string_const(442));
#line 421
c_rt_lib0move(&___nl__im__6, string0lf());
#line 421
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 421
c_rt_lib0clear(&___nl__im__5);
#line 421
c_rt_lib0clear(&___nl__im__6);
#line 421
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__4));
#line 421
c_rt_lib0clear(&___nl__im__4);
#line 422
c_rt_lib0move(&___nl__im__9,___get_global_string_const(286));
#line 422
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_include(___nl__im__9));
#line 422
c_rt_lib0clear(&___nl__im__9);
#line 422
c_rt_lib0move(&___nl__im__10, string0lf());
#line 422
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 422
c_rt_lib0clear(&___nl__im__8);
#line 422
c_rt_lib0clear(&___nl__im__10);
#line 422
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__7));
#line 422
c_rt_lib0clear(&___nl__im__7);
#line 423
c_rt_lib0move(&___nl__im__13,___get_global_string_const(488));
#line 423
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_system_include(___nl__im__13));
#line 423
c_rt_lib0clear(&___nl__im__13);
#line 423
c_rt_lib0move(&___nl__im__14, string0lf());
#line 423
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 423
c_rt_lib0clear(&___nl__im__12);
#line 423
c_rt_lib0clear(&___nl__im__14);
#line 423
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__11));
#line 423
c_rt_lib0clear(&___nl__im__11);
#line 424
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_cr());
#line 424
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__15));
#line 424
c_rt_lib0clear(&___nl__im__15);
#line 425
c_rt_lib0move(&___nl__im__17,___get_global_string_const(286));
#line 425
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_include(___nl__im__17));
#line 425
c_rt_lib0clear(&___nl__im__17);
#line 425
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__16));
#line 425
c_rt_lib0clear(&___nl__im__16);
#line 426
c_rt_lib0move(&___nl__im__19,___get_global_string_const(443));
#line 426
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_include(___nl__im__19));
#line 426
c_rt_lib0clear(&___nl__im__19);
#line 426
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__18));
#line 426
c_rt_lib0clear(&___nl__im__18);
#line 427
c_rt_lib0move(&___nl__im__21,___get_global_string_const(489));
#line 427
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_system_include(___nl__im__21));
#line 427
c_rt_lib0clear(&___nl__im__21);
#line 427
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__20));
#line 427
c_rt_lib0clear(&___nl__im__20);
#line 428
___nl__im_ptr__24 = &((*___ref___rec__0).mod_name0field);
#line 428
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 428
___nl__im_ptr__24 = NULL;
#line 428
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_include(___nl__im__23));
#line 428
c_rt_lib0clear(&___nl__im__23);
#line 428
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__22));
#line 428
c_rt_lib0clear(&___nl__im__22);
#line 429
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(490)));
#line 429
___nl__int__27 = 0;
#line 429
___nl__int__28 = 1;
#line 429
___nl__int__29 = c_rt_lib0array_len(___nl__im__25);
#line 429
label_57:
;
#line 429
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 429
if(___nl__bool__30){ goto label_75;}
#line 429
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 429
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 430
c_rt_lib0move(&___nl__im__32, generator_c_priv0get_include(___nl__im__26));
#line 430
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__32));
#line 430
c_rt_lib0clear(&___nl__im__32);
#line 431
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_include(___nl__im__26));
#line 431
c_rt_lib0move(&___nl__im__35, string0lf());
#line 431
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 431
c_rt_lib0clear(&___nl__im__34);
#line 431
c_rt_lib0clear(&___nl__im__35);
#line 431
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__33));
#line 431
c_rt_lib0clear(&___nl__im__33);
#line 431
c_rt_lib0clear(&___nl__im__26);
#line 432
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 432
goto label_57;
#line 432
label_75:
;
#line 433
___nl__im_ptr__37 = &((*___ref___rec__0).ret0field);
#line 433
c_rt_lib0copy(&___nl__im__36, (*___nl__im_ptr__37));
#line 433
___nl__im_ptr__37 = NULL;
#line 434
c_rt_lib0move(&___nl__im__38,___get_global_string_const(36));
#line 434
___nl__im_ptr__39 = &((*___ref___rec__0).ret0field);
#line 434
c_rt_lib0copy(___nl__im_ptr__39, ___nl__im__38);
#line 434
___nl__im_ptr__39 = NULL;
#line 434
c_rt_lib0clear(&___nl__im__38);
#line 435
c_rt_lib0move(&___nl__im__43,___get_global_string_const(491));
#line 435
___nl__im_ptr__45 = &((*___ref___rec__0).mod_name0field);
#line 435
c_rt_lib0copy(&___nl__im__44, (*___nl__im_ptr__45));
#line 435
___nl__im_ptr__45 = NULL;
#line 435
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__44));
#line 435
c_rt_lib0clear(&___nl__im__43);
#line 435
c_rt_lib0clear(&___nl__im__44);
#line 435
c_rt_lib0move(&___nl__im__46,___get_global_string_const(492));
#line 435
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__46));
#line 435
c_rt_lib0clear(&___nl__im__42);
#line 435
c_rt_lib0clear(&___nl__im__46);
#line 435
c_rt_lib0move(&___nl__im__47, string0lf());
#line 435
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__47));
#line 435
c_rt_lib0clear(&___nl__im__41);
#line 435
c_rt_lib0clear(&___nl__im__47);
#line 435
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__40));
#line 435
c_rt_lib0clear(&___nl__im__40);
#line 436
c_rt_lib0move(&___nl__im__50,___get_global_string_const(493));
#line 436
c_rt_lib0move(&___nl__im__51, generator_c_priv0im_t());
#line 436
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 436
c_rt_lib0clear(&___nl__im__50);
#line 436
c_rt_lib0clear(&___nl__im__51);
#line 436
c_rt_lib0move(&___nl__im__52,___get_global_string_const(494));
#line 436
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 436
c_rt_lib0clear(&___nl__im__49);
#line 436
c_rt_lib0clear(&___nl__im__52);
#line 436
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__48));
#line 436
c_rt_lib0clear(&___nl__im__48);
#line 437
c_rt_lib0move(&___nl__im__55,___get_global_string_const(495));
#line 437
c_rt_lib0move(&___nl__im__57,___get_global_string_const(36));
#line 437
c_rt_lib0move(&___nl__im__58,___get_global_string_const(496));
#line 437
___nl__im_ptr__60 = &((*___ref___rec__0).mod_name0field);
#line 437
c_rt_lib0copy(&___nl__im__59, (*___nl__im_ptr__60));
#line 437
___nl__im_ptr__60 = NULL;
#line 437
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_fun_name(___nl__im__57, ___nl__im__58, ___nl__im__59));
#line 437
c_rt_lib0clear(&___nl__im__57);
#line 437
c_rt_lib0clear(&___nl__im__58);
#line 437
c_rt_lib0clear(&___nl__im__59);
#line 437
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__56));
#line 437
c_rt_lib0clear(&___nl__im__55);
#line 437
c_rt_lib0clear(&___nl__im__56);
#line 437
c_rt_lib0move(&___nl__im__61,___get_global_string_const(497));
#line 437
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 437
c_rt_lib0clear(&___nl__im__54);
#line 437
c_rt_lib0clear(&___nl__im__61);
#line 437
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__53));
#line 437
c_rt_lib0clear(&___nl__im__53);
#line 438
c_rt_lib0move(&___nl__im__64, generator_c_priv0im_t());
#line 438
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 438
c_rt_lib0move(&___nl__im__67,___get_global_string_const(498));
#line 438
___nl__im_ptr__69 = &((*___ref___rec__0).mod_name0field);
#line 438
c_rt_lib0copy(&___nl__im__68, (*___nl__im_ptr__69));
#line 438
___nl__im_ptr__69 = NULL;
#line 438
c_rt_lib0move(&___nl__im__65, generator_c_priv0get_fun_name(___nl__im__66, ___nl__im__67, ___nl__im__68));
#line 438
c_rt_lib0clear(&___nl__im__66);
#line 438
c_rt_lib0clear(&___nl__im__67);
#line 438
c_rt_lib0clear(&___nl__im__68);
#line 438
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__65));
#line 438
c_rt_lib0clear(&___nl__im__64);
#line 438
c_rt_lib0clear(&___nl__im__65);
#line 438
c_rt_lib0move(&___nl__im__70,___get_global_string_const(499));
#line 438
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__70));
#line 438
c_rt_lib0clear(&___nl__im__63);
#line 438
c_rt_lib0clear(&___nl__im__70);
#line 438
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__62));
#line 438
c_rt_lib0clear(&___nl__im__62);
#line 439
c_rt_lib0move(&___nl__im__74, generator_c_priv0im_t());
#line 439
c_rt_lib0move(&___nl__im__76,___get_global_string_const(36));
#line 439
c_rt_lib0move(&___nl__im__77,___get_global_string_const(486));
#line 439
___nl__im_ptr__79 = &((*___ref___rec__0).mod_name0field);
#line 439
c_rt_lib0copy(&___nl__im__78, (*___nl__im_ptr__79));
#line 439
___nl__im_ptr__79 = NULL;
#line 439
c_rt_lib0move(&___nl__im__75, generator_c_priv0get_fun_name(___nl__im__76, ___nl__im__77, ___nl__im__78));
#line 439
c_rt_lib0clear(&___nl__im__76);
#line 439
c_rt_lib0clear(&___nl__im__77);
#line 439
c_rt_lib0clear(&___nl__im__78);
#line 439
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__75));
#line 439
c_rt_lib0clear(&___nl__im__74);
#line 439
c_rt_lib0clear(&___nl__im__75);
#line 439
c_rt_lib0move(&___nl__im__80,___get_global_string_const(499));
#line 439
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__80));
#line 439
c_rt_lib0clear(&___nl__im__73);
#line 439
c_rt_lib0clear(&___nl__im__80);
#line 439
c_rt_lib0move(&___nl__im__81, string0lf());
#line 439
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__81));
#line 439
c_rt_lib0clear(&___nl__im__72);
#line 439
c_rt_lib0clear(&___nl__im__81);
#line 439
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__71));
#line 439
c_rt_lib0clear(&___nl__im__71);
#line 440
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(222)));
#line 440
___nl__im_ptr__85 = &((*___ref___rec__0).mod_name0field);
#line 440
c_rt_lib0copy(&___nl__im__84, (*___nl__im_ptr__85));
#line 440
___nl__im_ptr__85 = NULL;
#line 440
c_rt_lib0move(&___nl__im__82, generator_c_struct_dependence_sort0sort(___nl__im__83, ___nl__im__84));
#line 440
c_rt_lib0clear(&___nl__im__83);
#line 440
c_rt_lib0clear(&___nl__im__84);
#line 441
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(0));
#line 442
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(222)));
#line 442
___nl__int__89 = 0;
#line 442
___nl__int__90 = 1;
#line 442
___nl__int__91 = c_rt_lib0array_len(___nl__im__87);
#line 442
label_185:
;
#line 442
___nl__bool__92 = ___nl__int__89 >= ___nl__int__91;
#line 442
if(___nl__bool__92){ goto label_226;}
#line 442
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get(___nl__im__87, ___nl__int__89));
#line 442
c_rt_lib0copy(&___nl__im__88, ___nl__im__93);
#line 443
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(232)));
#line 443
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(233));
#line 443
if(___nl__bool__95){ goto label_198;}
#line 448
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(479));
#line 448
if(___nl__bool__95){ goto label_220;}
#line 448
c_rt_lib0move(&___nl__im__96,___get_global_string_const(15));
#line 448
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_mk(2, ___nl__im__96, ___nl__im__94));
#line 448
nl_die_arg(___nl__im__96);
#line 443
label_198:
;
#line 444
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(180)));
#line 444
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__97, ___get_global_string_const(80));
#line 444
if(___nl__bool__98){ goto label_207;}
#line 446
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__97, ___get_global_string_const(81));
#line 446
if(___nl__bool__98){ goto label_216;}
#line 446
c_rt_lib0move(&___nl__im__99,___get_global_string_const(15));
#line 446
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(2, ___nl__im__99, ___nl__im__97));
#line 446
nl_die_arg(___nl__im__99);
#line 444
label_207:
;
#line 444
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(80)));
#line 444
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 445
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(181)));
#line 445
c_rt_lib0move(&___nl__im__103,___get_global_string_const(36));
#line 445
c_rt_lib0delete(hash0set_value(&___nl__im__86, ___nl__im__102, ___nl__im__103));
#line 445
c_rt_lib0clear(&___nl__im__102);
#line 445
c_rt_lib0clear(&___nl__im__103);
#line 446
goto label_218;
#line 446
label_216:
;
#line 447
goto label_218;
#line 447
label_218:
;
#line 448
goto label_222;
#line 448
label_220:
;
#line 449
goto label_222;
#line 449
label_222:
;
#line 449
c_rt_lib0clear(&___nl__im__88);
#line 450
___nl__int__89 = ___nl__int__89 + ___nl__int__90;
#line 450
goto label_185;
#line 450
label_226:
;
#line 451
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__82, ___get_global_string_const(500));
#line 451
if(___nl__bool__104){ goto label_234;}
#line 463
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__82, ___get_global_string_const(501));
#line 463
if(___nl__bool__104){ goto label_307;}
#line 463
c_rt_lib0move(&___nl__im__105,___get_global_string_const(15));
#line 463
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__82));
#line 463
nl_die_arg(___nl__im__105);
#line 451
label_234:
;
#line 451
c_rt_lib0move(&___nl__im__107, c_rt_lib0priv_as(___nl__im__82, ___get_global_string_const(500)));
#line 451
c_rt_lib0copy(&___nl__im__106, ___nl__im__107);
#line 452
___nl__int__109 = 0;
#line 452
___nl__int__110 = 1;
#line 452
___nl__int__111 = c_rt_lib0array_len(___nl__im__106);
#line 452
label_240:
;
#line 452
___nl__bool__112 = ___nl__int__109 >= ___nl__int__111;
#line 452
if(___nl__bool__112){ goto label_305;}
#line 452
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_get(___nl__im__106, ___nl__int__109));
#line 452
c_rt_lib0copy(&___nl__im__108, ___nl__im__113);
#line 453
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(181)));
#line 453
___nl__bool__114 = hash0has_key(___nl__im__86, ___nl__im__115);
#line 453
c_rt_lib0clear(&___nl__im__115);
#line 453
___nl__bool__114 = !___nl__bool__114;
#line 454
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(502)));
#line 454
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(503));
#line 454
if(___nl__bool__117){ goto label_259;}
#line 456
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(504));
#line 456
if(___nl__bool__117){ goto label_270;}
#line 458
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(505));
#line 458
if(___nl__bool__117){ goto label_281;}
#line 458
c_rt_lib0move(&___nl__im__118,___get_global_string_const(15));
#line 458
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(2, ___nl__im__118, ___nl__im__116));
#line 458
nl_die_arg(___nl__im__118);
#line 454
label_259:
;
#line 455
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(181)));
#line 455
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(221)));
#line 455
___nl__im_ptr__122 = &((*___ref___rec__0).mod_name0field);
#line 455
c_rt_lib0copy(&___nl__im__121, (*___nl__im_ptr__122));
#line 455
___nl__im_ptr__122 = NULL;
#line 455
c_rt_lib0delete(generator_c_priv0print_func_type_struct_def(___ref___rec__0, ___nl__im__119, ___nl__im__120, ___nl__im__121, ___nl__bool__114));
#line 455
c_rt_lib0clear(&___nl__im__119);
#line 455
c_rt_lib0clear(&___nl__im__120);
#line 455
c_rt_lib0clear(&___nl__im__121);
#line 456
goto label_301;
#line 456
label_270:
;
#line 457
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(181)));
#line 457
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(221)));
#line 457
___nl__im_ptr__126 = &((*___ref___rec__0).mod_name0field);
#line 457
c_rt_lib0copy(&___nl__im__125, (*___nl__im_ptr__126));
#line 457
___nl__im_ptr__126 = NULL;
#line 457
c_rt_lib0delete(generator_c_priv0print_func_type_struct_decl(___ref___rec__0, ___nl__im__123, ___nl__im__124, ___nl__im__125, ___nl__bool__114, ___nl__im__2));
#line 457
c_rt_lib0clear(&___nl__im__123);
#line 457
c_rt_lib0clear(&___nl__im__124);
#line 457
c_rt_lib0clear(&___nl__im__125);
#line 458
goto label_301;
#line 458
label_281:
;
#line 459
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(181)));
#line 459
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(221)));
#line 459
___nl__im_ptr__130 = &((*___ref___rec__0).mod_name0field);
#line 459
c_rt_lib0copy(&___nl__im__129, (*___nl__im_ptr__130));
#line 459
___nl__im_ptr__130 = NULL;
#line 459
c_rt_lib0delete(generator_c_priv0print_func_type_struct_def(___ref___rec__0, ___nl__im__127, ___nl__im__128, ___nl__im__129, ___nl__bool__114));
#line 459
c_rt_lib0clear(&___nl__im__127);
#line 459
c_rt_lib0clear(&___nl__im__128);
#line 459
c_rt_lib0clear(&___nl__im__129);
#line 460
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(181)));
#line 460
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(221)));
#line 460
___nl__im_ptr__134 = &((*___ref___rec__0).mod_name0field);
#line 460
c_rt_lib0copy(&___nl__im__133, (*___nl__im_ptr__134));
#line 460
___nl__im_ptr__134 = NULL;
#line 460
c_rt_lib0delete(generator_c_priv0print_func_type_struct_decl(___ref___rec__0, ___nl__im__131, ___nl__im__132, ___nl__im__133, ___nl__bool__114, ___nl__im__2));
#line 460
c_rt_lib0clear(&___nl__im__131);
#line 460
c_rt_lib0clear(&___nl__im__132);
#line 460
c_rt_lib0clear(&___nl__im__133);
#line 461
goto label_301;
#line 461
label_301:
;
#line 461
c_rt_lib0clear(&___nl__im__108);
#line 462
___nl__int__109 = ___nl__int__109 + ___nl__int__110;
#line 462
goto label_240;
#line 462
label_305:
;
#line 463
goto label_318;
#line 463
label_307:
;
#line 464
c_rt_lib0move(&___nl__im__136,___get_global_string_const(506));
#line 464
c_rt_lib0move(&___nl__im__137, string0lf());
#line 464
c_rt_lib0move(&___nl__im__135, c_rt_lib0concat_new(___nl__im__136, ___nl__im__137));
#line 464
c_rt_lib0clear(&___nl__im__136);
#line 464
c_rt_lib0clear(&___nl__im__137);
#line 464
c_rt_lib0delete(nl0print(___nl__im__135));
#line 464
c_rt_lib0clear(&___nl__im__135);
#line 465
c_rt_lib0move(&___nl__im__138, c_rt_lib0array_mk(0));
#line 465
nl_die_arg(___nl__im__138);
#line 466
goto label_318;
#line 466
label_318:
;
#line 467
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(222)));
#line 467
___nl__int__141 = 0;
#line 467
___nl__int__142 = 1;
#line 467
___nl__int__143 = c_rt_lib0array_len(___nl__im__139);
#line 467
label_323:
;
#line 467
___nl__bool__144 = ___nl__int__141 >= ___nl__int__143;
#line 467
if(___nl__bool__144){ goto label_385;}
#line 467
c_rt_lib0move(&___nl__im__145, c_rt_lib0array_get(___nl__im__139, ___nl__int__141));
#line 467
c_rt_lib0copy(&___nl__im__140, ___nl__im__145);
#line 468
___nl__im_ptr__148 = &((*___ref___rec__0).mod_name0field);
#line 468
c_rt_lib0copy(&___nl__im__147, (*___nl__im_ptr__148));
#line 468
___nl__im_ptr__148 = NULL;
#line 468
c_rt_lib0move(&___nl__im__146, generator_c_priv0get_function_header(___nl__im__140, ___nl__im__147));
#line 468
c_rt_lib0clear(&___nl__im__147);
#line 469
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(232)));
#line 469
___nl__bool__150 = c_rt_lib0priv_is(___nl__im__149, ___get_global_string_const(233));
#line 469
if(___nl__bool__150){ goto label_341;}
#line 474
___nl__bool__150 = c_rt_lib0priv_is(___nl__im__149, ___get_global_string_const(479));
#line 474
if(___nl__bool__150){ goto label_374;}
#line 474
c_rt_lib0move(&___nl__im__151,___get_global_string_const(15));
#line 474
c_rt_lib0move(&___nl__im__151, c_rt_lib0array_mk(2, ___nl__im__151, ___nl__im__149));
#line 474
nl_die_arg(___nl__im__151);
#line 469
label_341:
;
#line 470
c_rt_lib0move(&___nl__im__154,___get_global_string_const(454));
#line 470
c_rt_lib0move(&___nl__im__153, c_rt_lib0concat_new(___nl__im__146, ___nl__im__154));
#line 470
c_rt_lib0clear(&___nl__im__154);
#line 470
c_rt_lib0move(&___nl__im__155, string0lf());
#line 470
c_rt_lib0move(&___nl__im__152, c_rt_lib0concat_new(___nl__im__153, ___nl__im__155));
#line 470
c_rt_lib0clear(&___nl__im__153);
#line 470
c_rt_lib0clear(&___nl__im__155);
#line 470
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__152));
#line 470
c_rt_lib0clear(&___nl__im__152);
#line 471
___nl__bool__156 = generator_c_priv0takes_own_arg(___nl__im__140);
#line 471
___nl__bool__156 = !___nl__bool__156;
#line 471
___nl__bool__156 = !___nl__bool__156;
#line 471
if(___nl__bool__156){ goto label_371;}
#line 472
___nl__im_ptr__161 = &((*___ref___rec__0).mod_name0field);
#line 472
c_rt_lib0copy(&___nl__im__160, (*___nl__im_ptr__161));
#line 472
___nl__im_ptr__161 = NULL;
#line 472
c_rt_lib0move(&___nl__im__159, generator_c_priv0get_func_ptr_header(___nl__im__140, ___nl__im__160));
#line 472
c_rt_lib0clear(&___nl__im__160);
#line 472
c_rt_lib0move(&___nl__im__162,___get_global_string_const(454));
#line 472
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__162));
#line 472
c_rt_lib0clear(&___nl__im__159);
#line 472
c_rt_lib0clear(&___nl__im__162);
#line 472
c_rt_lib0move(&___nl__im__163, string0lf());
#line 472
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__158, ___nl__im__163));
#line 472
c_rt_lib0clear(&___nl__im__158);
#line 472
c_rt_lib0clear(&___nl__im__163);
#line 472
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__157));
#line 472
c_rt_lib0clear(&___nl__im__157);
#line 473
goto label_371;
#line 473
label_371:
;
#line 473
//clear ___nl__bool__156;
#line 474
goto label_381;
#line 474
label_374:
;
#line 475
c_rt_lib0move(&___nl__im__165,___get_global_string_const(454));
#line 475
c_rt_lib0move(&___nl__im__164, c_rt_lib0concat_new(___nl__im__146, ___nl__im__165));
#line 475
c_rt_lib0clear(&___nl__im__165);
#line 475
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__164));
#line 475
c_rt_lib0clear(&___nl__im__164);
#line 476
goto label_381;
#line 476
label_381:
;
#line 476
c_rt_lib0clear(&___nl__im__140);
#line 477
___nl__int__141 = ___nl__int__141 + ___nl__int__142;
#line 477
goto label_323;
#line 477
label_385:
;
#line 479
c_rt_lib0move(&___nl__im__166, string0lf());
#line 479
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__166));
#line 479
c_rt_lib0clear(&___nl__im__166);
#line 480
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(222)));
#line 480
___nl__int__169 = 0;
#line 480
___nl__int__170 = 1;
#line 480
___nl__int__171 = c_rt_lib0array_len(___nl__im__167);
#line 480
label_393:
;
#line 480
___nl__bool__172 = ___nl__int__169 >= ___nl__int__171;
#line 480
if(___nl__bool__172){ goto label_813;}
#line 480
c_rt_lib0move(&___nl__im__173, c_rt_lib0array_get(___nl__im__167, ___nl__int__169));
#line 480
c_rt_lib0copy(&___nl__im__168, ___nl__im__173);
#line 481
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(232)));
#line 481
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__176, ___get_global_string_const(233));
#line 481
c_rt_lib0clear(&___nl__im__176);
#line 481
___nl__bool__175 = !___nl__bool__174;
#line 481
if(___nl__bool__175){ goto label_405;}
#line 481
___nl__bool__174 = generator_c_priv0takes_own_arg(___nl__im__168);
#line 481
___nl__bool__174 = !___nl__bool__174;
#line 481
label_405:
;
#line 481
//clear ___nl__bool__175;
#line 481
___nl__bool__174 = !___nl__bool__174;
#line 481
if(___nl__bool__174){ goto label_717;}
#line 482
___nl__im_ptr__179 = &((*___ref___rec__0).mod_name0field);
#line 482
c_rt_lib0copy(&___nl__im__178, (*___nl__im_ptr__179));
#line 482
___nl__im_ptr__179 = NULL;
#line 482
c_rt_lib0move(&___nl__im__177, generator_c_priv0get_function_name(___nl__im__168, ___nl__im__178));
#line 482
c_rt_lib0clear(&___nl__im__178);
#line 483
___nl__im_ptr__183 = &((*___ref___rec__0).mod_name0field);
#line 483
c_rt_lib0copy(&___nl__im__182, (*___nl__im_ptr__183));
#line 483
___nl__im_ptr__183 = NULL;
#line 483
c_rt_lib0move(&___nl__im__181, generator_c_priv0get_func_ptr_header(___nl__im__168, ___nl__im__182));
#line 483
c_rt_lib0clear(&___nl__im__182);
#line 483
c_rt_lib0move(&___nl__im__184,___get_global_string_const(320));
#line 483
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__184));
#line 483
c_rt_lib0clear(&___nl__im__181);
#line 483
c_rt_lib0clear(&___nl__im__184);
#line 483
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__180));
#line 483
c_rt_lib0clear(&___nl__im__180);
#line 484
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 484
___nl__int__185 = c_rt_lib0array_len(___nl__im__186);
#line 484
c_rt_lib0clear(&___nl__im__186);
#line 485
c_rt_lib0move(&___nl__im__189,___get_global_string_const(507));
#line 485
c_rt_lib0move(&___nl__im__191,___get_global_string_const(508));
#line 485
c_rt_lib0move(&___nl__im__192, ptd0int_to_string(___nl__int__185));
#line 485
c_rt_lib0move(&___nl__im__193, generator_c_priv0get_string(___nl__im__177));
#line 485
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(3, ___nl__im__191, ___nl__im__192, ___nl__im__193));
#line 485
c_rt_lib0clear(&___nl__im__191);
#line 485
c_rt_lib0clear(&___nl__im__192);
#line 485
c_rt_lib0clear(&___nl__im__193);
#line 485
c_rt_lib0move(&___nl__im__188, generator_c_priv0get_fun_lib(___nl__im__189, ___nl__im__190));
#line 485
c_rt_lib0clear(&___nl__im__189);
#line 485
c_rt_lib0clear(&___nl__im__190);
#line 485
c_rt_lib0move(&___nl__im__194,___get_global_string_const(454));
#line 485
c_rt_lib0move(&___nl__im__187, c_rt_lib0concat_new(___nl__im__188, ___nl__im__194));
#line 485
c_rt_lib0clear(&___nl__im__188);
#line 485
c_rt_lib0clear(&___nl__im__194);
#line 485
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__187));
#line 485
c_rt_lib0clear(&___nl__im__187);
#line 486
___nl__int__195 = 0;
#line 486
___nl__int__196 = 1;
#line 486
label_447:
;
#line 486
___nl__bool__197 = ___nl__int__195 >= ___nl__int__185;
#line 486
if(___nl__bool__197){ goto label_536;}
#line 487
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 487
c_rt_lib0move(&___nl__im__200, c_rt_lib0array_get(___nl__im__201, ___nl__int__195));
#line 487
c_rt_lib0clear(&___nl__im__201);
#line 487
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__200, ___get_global_string_const(110)));
#line 487
c_rt_lib0clear(&___nl__im__200);
#line 487
c_rt_lib0move(&___nl__im__202,___get_global_string_const(36));
#line 487
c_rt_lib0move(&___nl__im__198, generator_c_priv0get_type_to_c(___nl__im__199, ___nl__im__202));
#line 487
c_rt_lib0clear(&___nl__im__199);
#line 487
c_rt_lib0clear(&___nl__im__202);
#line 488
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 488
c_rt_lib0move(&___nl__im__206, c_rt_lib0array_get(___nl__im__207, ___nl__int__195));
#line 488
c_rt_lib0clear(&___nl__im__207);
#line 488
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__206, ___get_global_string_const(482)));
#line 488
c_rt_lib0clear(&___nl__im__206);
#line 488
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__205, ___get_global_string_const(110)));
#line 488
c_rt_lib0clear(&___nl__im__205);
#line 488
c_rt_lib0move(&___nl__im__210,___get_global_string_const(509));
#line 488
c_rt_lib0move(&___nl__string__211, c_rt_lib0int_to_string(___nl__int__195));
#line 488
c_rt_lib0move(&___nl__im__209, c_rt_lib0concat_new(___nl__im__210, ___nl__string__211));
#line 488
c_rt_lib0clear(&___nl__im__210);
#line 488
c_rt_lib0clear(&___nl__string__211);
#line 488
c_rt_lib0move(&___nl__im__212,___get_global_string_const(510));
#line 488
c_rt_lib0move(&___nl__im__208, c_rt_lib0concat_new(___nl__im__209, ___nl__im__212));
#line 488
c_rt_lib0clear(&___nl__im__209);
#line 488
c_rt_lib0clear(&___nl__im__212);
#line 488
c_rt_lib0move(&___nl__im__203, generator_c_priv0get_value_from_im(___nl__im__204, ___nl__im__208));
#line 488
c_rt_lib0clear(&___nl__im__204);
#line 488
c_rt_lib0clear(&___nl__im__208);
#line 489
c_rt_lib0move(&___nl__im__217, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 489
c_rt_lib0move(&___nl__im__216, c_rt_lib0array_get(___nl__im__217, ___nl__int__195));
#line 489
c_rt_lib0clear(&___nl__im__217);
#line 489
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__216, ___get_global_string_const(482)));
#line 489
c_rt_lib0clear(&___nl__im__216);
#line 489
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__215, ___get_global_string_const(110)));
#line 489
c_rt_lib0clear(&___nl__im__215);
#line 489
___nl__bool__213 = c_rt_lib0priv_is(___nl__im__214, ___get_global_string_const(145));
#line 489
c_rt_lib0clear(&___nl__im__214);
#line 489
___nl__bool__213 = !___nl__bool__213;
#line 489
if(___nl__bool__213){ goto label_509;}
#line 490
c_rt_lib0move(&___nl__im__223,___get_global_string_const(511));
#line 490
c_rt_lib0move(&___nl__im__222, c_rt_lib0concat_new(___nl__im__198, ___nl__im__223));
#line 490
c_rt_lib0clear(&___nl__im__223);
#line 490
c_rt_lib0move(&___nl__string__224, c_rt_lib0int_to_string(___nl__int__195));
#line 490
c_rt_lib0move(&___nl__im__221, c_rt_lib0concat_new(___nl__im__222, ___nl__string__224));
#line 490
c_rt_lib0clear(&___nl__im__222);
#line 490
c_rt_lib0clear(&___nl__string__224);
#line 490
c_rt_lib0move(&___nl__im__225,___get_global_string_const(512));
#line 490
c_rt_lib0move(&___nl__im__220, c_rt_lib0concat_new(___nl__im__221, ___nl__im__225));
#line 490
c_rt_lib0clear(&___nl__im__221);
#line 490
c_rt_lib0clear(&___nl__im__225);
#line 490
c_rt_lib0move(&___nl__im__219, c_rt_lib0concat_new(___nl__im__220, ___nl__im__203));
#line 490
c_rt_lib0clear(&___nl__im__220);
#line 490
c_rt_lib0move(&___nl__im__226,___get_global_string_const(454));
#line 490
c_rt_lib0move(&___nl__im__218, c_rt_lib0concat_new(___nl__im__219, ___nl__im__226));
#line 490
c_rt_lib0clear(&___nl__im__219);
#line 490
c_rt_lib0clear(&___nl__im__226);
#line 490
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__218));
#line 490
c_rt_lib0clear(&___nl__im__218);
#line 491
goto label_530;
#line 491
label_509:
;
#line 492
c_rt_lib0move(&___nl__im__232,___get_global_string_const(513));
#line 492
c_rt_lib0move(&___nl__im__231, c_rt_lib0concat_new(___nl__im__198, ___nl__im__232));
#line 492
c_rt_lib0clear(&___nl__im__232);
#line 492
c_rt_lib0move(&___nl__string__233, c_rt_lib0int_to_string(___nl__int__195));
#line 492
c_rt_lib0move(&___nl__im__230, c_rt_lib0concat_new(___nl__im__231, ___nl__string__233));
#line 492
c_rt_lib0clear(&___nl__im__231);
#line 492
c_rt_lib0clear(&___nl__string__233);
#line 492
c_rt_lib0move(&___nl__im__234,___get_global_string_const(514));
#line 492
c_rt_lib0move(&___nl__im__229, c_rt_lib0concat_new(___nl__im__230, ___nl__im__234));
#line 492
c_rt_lib0clear(&___nl__im__230);
#line 492
c_rt_lib0clear(&___nl__im__234);
#line 492
c_rt_lib0move(&___nl__im__228, c_rt_lib0concat_new(___nl__im__229, ___nl__im__203));
#line 492
c_rt_lib0clear(&___nl__im__229);
#line 492
c_rt_lib0move(&___nl__im__235,___get_global_string_const(454));
#line 492
c_rt_lib0move(&___nl__im__227, c_rt_lib0concat_new(___nl__im__228, ___nl__im__235));
#line 492
c_rt_lib0clear(&___nl__im__228);
#line 492
c_rt_lib0clear(&___nl__im__235);
#line 492
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__227));
#line 492
c_rt_lib0clear(&___nl__im__227);
#line 493
goto label_530;
#line 493
label_530:
;
#line 493
//clear ___nl__bool__213;
#line 493
c_rt_lib0clear(&___nl__im__198);
#line 493
c_rt_lib0clear(&___nl__im__203);
#line 494
___nl__int__195 = ___nl__int__195 + ___nl__int__196;
#line 494
goto label_447;
#line 494
label_536:
;
#line 495
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(220)));
#line 495
c_rt_lib0move(&___nl__im__241,___get_global_string_const(36));
#line 495
c_rt_lib0move(&___nl__im__239, generator_c_priv0get_type_to_c(___nl__im__240, ___nl__im__241));
#line 495
c_rt_lib0clear(&___nl__im__240);
#line 495
c_rt_lib0clear(&___nl__im__241);
#line 495
c_rt_lib0move(&___nl__im__242,___get_global_string_const(515));
#line 495
c_rt_lib0move(&___nl__im__238, c_rt_lib0concat_new(___nl__im__239, ___nl__im__242));
#line 495
c_rt_lib0clear(&___nl__im__239);
#line 495
c_rt_lib0clear(&___nl__im__242);
#line 495
c_rt_lib0move(&___nl__im__237, c_rt_lib0concat_new(___nl__im__238, ___nl__im__177));
#line 495
c_rt_lib0clear(&___nl__im__238);
#line 495
c_rt_lib0move(&___nl__im__243,___get_global_string_const(469));
#line 495
c_rt_lib0move(&___nl__im__236, c_rt_lib0concat_new(___nl__im__237, ___nl__im__243));
#line 495
c_rt_lib0clear(&___nl__im__237);
#line 495
c_rt_lib0clear(&___nl__im__243);
#line 495
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__236));
#line 495
c_rt_lib0clear(&___nl__im__236);
#line 496
___nl__int__244 = 0;
#line 496
___nl__int__245 = 1;
#line 496
label_556:
;
#line 496
___nl__bool__246 = ___nl__int__244 >= ___nl__int__185;
#line 496
if(___nl__bool__246){ goto label_634;}
#line 497
___nl__int__248 = 0;
#line 497
___nl__bool__247 = ___nl__int__244 > ___nl__int__248;
#line 497
//clear ___nl__int__248;
#line 497
___nl__bool__247 = !___nl__bool__247;
#line 497
if(___nl__bool__247){ goto label_568;}
#line 497
c_rt_lib0move(&___nl__im__249,___get_global_string_const(343));
#line 497
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__249));
#line 497
c_rt_lib0clear(&___nl__im__249);
#line 497
goto label_568;
#line 497
label_568:
;
#line 497
//clear ___nl__bool__247;
#line 498
c_rt_lib0move(&___nl__im__250,___get_global_string_const(36));
#line 499
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 499
c_rt_lib0move(&___nl__im__252, c_rt_lib0array_get(___nl__im__253, ___nl__int__244));
#line 499
c_rt_lib0clear(&___nl__im__253);
#line 499
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(369)));
#line 499
c_rt_lib0clear(&___nl__im__252);
#line 499
___nl__bool__254 = c_rt_lib0priv_is(___nl__im__251, ___get_global_string_const(39));
#line 499
if(___nl__bool__254){ goto label_583;}
#line 501
___nl__bool__254 = c_rt_lib0priv_is(___nl__im__251, ___get_global_string_const(245));
#line 501
if(___nl__bool__254){ goto label_601;}
#line 501
c_rt_lib0move(&___nl__im__255,___get_global_string_const(15));
#line 501
c_rt_lib0move(&___nl__im__255, c_rt_lib0array_mk(2, ___nl__im__255, ___nl__im__251));
#line 501
nl_die_arg(___nl__im__255);
#line 499
label_583:
;
#line 500
c_rt_lib0move(&___nl__im__260, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 500
c_rt_lib0move(&___nl__im__259, c_rt_lib0array_get(___nl__im__260, ___nl__int__244));
#line 500
c_rt_lib0clear(&___nl__im__260);
#line 500
c_rt_lib0move(&___nl__im__258, c_rt_lib0hash_get_value_dec(___nl__im__259, ___get_global_string_const(482)));
#line 500
c_rt_lib0clear(&___nl__im__259);
#line 500
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__258, ___get_global_string_const(110)));
#line 500
c_rt_lib0clear(&___nl__im__258);
#line 500
___nl__bool__256 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(145));
#line 500
c_rt_lib0clear(&___nl__im__257);
#line 500
___nl__bool__256 = !___nl__bool__256;
#line 500
___nl__bool__256 = !___nl__bool__256;
#line 500
if(___nl__bool__256){ goto label_598;}
#line 500
c_rt_lib0move(&___nl__im__250,___get_global_string_const(516));
#line 500
goto label_598;
#line 500
label_598:
;
#line 500
//clear ___nl__bool__256;
#line 501
goto label_618;
#line 501
label_601:
;
#line 502
c_rt_lib0move(&___nl__im__265, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 502
c_rt_lib0move(&___nl__im__264, c_rt_lib0array_get(___nl__im__265, ___nl__int__244));
#line 502
c_rt_lib0clear(&___nl__im__265);
#line 502
c_rt_lib0move(&___nl__im__263, c_rt_lib0hash_get_value_dec(___nl__im__264, ___get_global_string_const(482)));
#line 502
c_rt_lib0clear(&___nl__im__264);
#line 502
c_rt_lib0move(&___nl__im__262, c_rt_lib0hash_get_value_dec(___nl__im__263, ___get_global_string_const(110)));
#line 502
c_rt_lib0clear(&___nl__im__263);
#line 502
___nl__bool__261 = c_rt_lib0priv_is(___nl__im__262, ___get_global_string_const(145));
#line 502
c_rt_lib0clear(&___nl__im__262);
#line 502
___nl__bool__261 = !___nl__bool__261;
#line 502
if(___nl__bool__261){ goto label_615;}
#line 502
c_rt_lib0move(&___nl__im__250,___get_global_string_const(389));
#line 502
goto label_615;
#line 502
label_615:
;
#line 502
//clear ___nl__bool__261;
#line 503
goto label_618;
#line 503
label_618:
;
#line 504
c_rt_lib0move(&___nl__im__268,___get_global_string_const(517));
#line 504
c_rt_lib0move(&___nl__im__267, c_rt_lib0concat_new(___nl__im__250, ___nl__im__268));
#line 504
c_rt_lib0clear(&___nl__im__268);
#line 504
c_rt_lib0move(&___nl__string__269, c_rt_lib0int_to_string(___nl__int__244));
#line 504
c_rt_lib0move(&___nl__im__266, c_rt_lib0concat_new(___nl__im__267, ___nl__string__269));
#line 504
c_rt_lib0clear(&___nl__im__267);
#line 504
c_rt_lib0clear(&___nl__string__269);
#line 504
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__266));
#line 504
c_rt_lib0clear(&___nl__im__266);
#line 504
c_rt_lib0clear(&___nl__im__250);
#line 504
c_rt_lib0clear(&___nl__im__251);
#line 504
//clear ___nl__bool__254;
#line 504
c_rt_lib0clear(&___nl__im__255);
#line 505
___nl__int__244 = ___nl__int__244 + ___nl__int__245;
#line 505
goto label_556;
#line 505
label_634:
;
#line 506
c_rt_lib0move(&___nl__im__270,___get_global_string_const(518));
#line 506
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__270));
#line 506
c_rt_lib0clear(&___nl__im__270);
#line 507
___nl__int__271 = 0;
#line 507
___nl__int__272 = 1;
#line 507
label_640:
;
#line 507
___nl__bool__273 = ___nl__int__271 >= ___nl__int__185;
#line 507
if(___nl__bool__273){ goto label_697;}
#line 508
c_rt_lib0move(&___nl__im__278, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 508
c_rt_lib0move(&___nl__im__277, c_rt_lib0array_get(___nl__im__278, ___nl__int__271));
#line 508
c_rt_lib0clear(&___nl__im__278);
#line 508
c_rt_lib0move(&___nl__im__276, c_rt_lib0hash_get_value_dec(___nl__im__277, ___get_global_string_const(482)));
#line 508
c_rt_lib0clear(&___nl__im__277);
#line 508
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_get_value_dec(___nl__im__276, ___get_global_string_const(110)));
#line 508
c_rt_lib0clear(&___nl__im__276);
#line 508
___nl__bool__274 = c_rt_lib0priv_is(___nl__im__275, ___get_global_string_const(145));
#line 508
c_rt_lib0clear(&___nl__im__275);
#line 508
___nl__bool__274 = !___nl__bool__274;
#line 508
___nl__bool__274 = !___nl__bool__274;
#line 508
if(___nl__bool__274){ goto label_691;}
#line 509
c_rt_lib0move(&___nl__im__281,___get_global_string_const(519));
#line 509
c_rt_lib0move(&___nl__string__282, c_rt_lib0int_to_string(___nl__int__271));
#line 509
c_rt_lib0move(&___nl__im__280, c_rt_lib0concat_new(___nl__im__281, ___nl__string__282));
#line 509
c_rt_lib0clear(&___nl__im__281);
#line 509
c_rt_lib0clear(&___nl__string__282);
#line 509
c_rt_lib0move(&___nl__im__283,___get_global_string_const(331));
#line 509
c_rt_lib0move(&___nl__im__279, c_rt_lib0concat_new(___nl__im__280, ___nl__im__283));
#line 509
c_rt_lib0clear(&___nl__im__280);
#line 509
c_rt_lib0clear(&___nl__im__283);
#line 510
c_rt_lib0move(&___nl__im__288, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(236)));
#line 510
c_rt_lib0move(&___nl__im__287, c_rt_lib0array_get(___nl__im__288, ___nl__int__271));
#line 510
c_rt_lib0clear(&___nl__im__288);
#line 510
c_rt_lib0move(&___nl__im__286, c_rt_lib0hash_get_value_dec(___nl__im__287, ___get_global_string_const(482)));
#line 510
c_rt_lib0clear(&___nl__im__287);
#line 510
c_rt_lib0move(&___nl__im__285, c_rt_lib0hash_get_value_dec(___nl__im__286, ___get_global_string_const(110)));
#line 510
c_rt_lib0clear(&___nl__im__286);
#line 510
c_rt_lib0move(&___nl__im__290,___get_global_string_const(517));
#line 510
c_rt_lib0move(&___nl__string__291, c_rt_lib0int_to_string(___nl__int__271));
#line 510
c_rt_lib0move(&___nl__im__289, c_rt_lib0concat_new(___nl__im__290, ___nl__string__291));
#line 510
c_rt_lib0clear(&___nl__im__290);
#line 510
c_rt_lib0clear(&___nl__string__291);
#line 510
c_rt_lib0move(&___nl__im__284, generator_c_priv0get_im_from_value(___nl__im__285, ___nl__im__289));
#line 510
c_rt_lib0clear(&___nl__im__285);
#line 510
c_rt_lib0clear(&___nl__im__289);
#line 511
c_rt_lib0move(&___nl__im__294,___get_global_string_const(258));
#line 511
c_rt_lib0move(&___nl__im__295, c_rt_lib0array_mk(2, ___nl__im__279, ___nl__im__284));
#line 511
c_rt_lib0move(&___nl__im__293, generator_c_priv0get_fun_lib(___nl__im__294, ___nl__im__295));
#line 511
c_rt_lib0clear(&___nl__im__294);
#line 511
c_rt_lib0clear(&___nl__im__295);
#line 511
c_rt_lib0move(&___nl__im__296,___get_global_string_const(454));
#line 511
c_rt_lib0move(&___nl__im__292, c_rt_lib0concat_new(___nl__im__293, ___nl__im__296));
#line 511
c_rt_lib0clear(&___nl__im__293);
#line 511
c_rt_lib0clear(&___nl__im__296);
#line 511
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__292));
#line 511
c_rt_lib0clear(&___nl__im__292);
#line 512
goto label_691;
#line 512
label_691:
;
#line 512
//clear ___nl__bool__274;
#line 512
c_rt_lib0clear(&___nl__im__279);
#line 512
c_rt_lib0clear(&___nl__im__284);
#line 513
___nl__int__271 = ___nl__int__271 + ___nl__int__272;
#line 513
goto label_640;
#line 513
label_697:
;
#line 514
c_rt_lib0move(&___nl__im__299,___get_global_string_const(520));
#line 514
c_rt_lib0move(&___nl__im__301, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(429)));
#line 514
c_rt_lib0move(&___nl__im__302,___get_global_string_const(521));
#line 514
c_rt_lib0move(&___nl__im__300, generator_c_priv0get_im_from_value(___nl__im__301, ___nl__im__302));
#line 514
c_rt_lib0clear(&___nl__im__301);
#line 514
c_rt_lib0clear(&___nl__im__302);
#line 514
c_rt_lib0move(&___nl__im__298, c_rt_lib0concat_new(___nl__im__299, ___nl__im__300));
#line 514
c_rt_lib0clear(&___nl__im__299);
#line 514
c_rt_lib0clear(&___nl__im__300);
#line 514
c_rt_lib0move(&___nl__im__303,___get_global_string_const(454));
#line 514
c_rt_lib0move(&___nl__im__297, c_rt_lib0concat_new(___nl__im__298, ___nl__im__303));
#line 514
c_rt_lib0clear(&___nl__im__298);
#line 514
c_rt_lib0clear(&___nl__im__303);
#line 514
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__297));
#line 514
c_rt_lib0clear(&___nl__im__297);
#line 515
c_rt_lib0move(&___nl__im__304,___get_global_string_const(321));
#line 515
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__304));
#line 515
c_rt_lib0clear(&___nl__im__304);
#line 516
goto label_717;
#line 516
label_717:
;
#line 516
//clear ___nl__bool__174;
#line 516
c_rt_lib0clear(&___nl__im__177);
#line 516
//clear ___nl__int__185;
#line 516
//clear ___nl__int__195;
#line 516
//clear ___nl__int__196;
#line 516
//clear ___nl__bool__197;
#line 516
c_rt_lib0clear(&___nl__im__198);
#line 516
c_rt_lib0clear(&___nl__im__203);
#line 516
//clear ___nl__int__244;
#line 516
//clear ___nl__int__245;
#line 516
//clear ___nl__bool__246;
#line 516
c_rt_lib0clear(&___nl__im__250);
#line 516
c_rt_lib0clear(&___nl__im__251);
#line 516
//clear ___nl__bool__254;
#line 516
c_rt_lib0clear(&___nl__im__255);
#line 516
//clear ___nl__int__271;
#line 516
//clear ___nl__int__272;
#line 516
//clear ___nl__bool__273;
#line 517
___nl__bool__305 = generator_c_priv0is_singleton_use_function(___nl__im__168);
#line 517
___nl__bool__305 = !___nl__bool__305;
#line 517
if(___nl__bool__305){ goto label_797;}
#line 518
___nl__im_ptr__308 = &((*___ref___rec__0).mod_name0field);
#line 518
c_rt_lib0copy(&___nl__im__307, (*___nl__im_ptr__308));
#line 518
___nl__im_ptr__308 = NULL;
#line 518
c_rt_lib0move(&___nl__im__306, generator_c_priv0get_function_name(___nl__im__168, ___nl__im__307));
#line 518
c_rt_lib0clear(&___nl__im__307);
#line 519
c_rt_lib0move(&___nl__im__311, generator_c_priv0im_t());
#line 519
c_rt_lib0move(&___nl__im__310, c_rt_lib0concat_new(___nl__im__311, ___nl__im__306));
#line 519
c_rt_lib0clear(&___nl__im__311);
#line 519
c_rt_lib0move(&___nl__im__312,___get_global_string_const(522));
#line 519
c_rt_lib0move(&___nl__im__309, c_rt_lib0concat_new(___nl__im__310, ___nl__im__312));
#line 519
c_rt_lib0clear(&___nl__im__310);
#line 519
c_rt_lib0clear(&___nl__im__312);
#line 519
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__309));
#line 519
c_rt_lib0clear(&___nl__im__309);
#line 520
c_rt_lib0move(&___nl__im__315,___get_global_string_const(36));
#line 520
c_rt_lib0move(&___nl__im__316,___get_global_string_const(496));
#line 520
___nl__im_ptr__318 = &((*___ref___rec__0).mod_name0field);
#line 520
c_rt_lib0copy(&___nl__im__317, (*___nl__im_ptr__318));
#line 520
___nl__im_ptr__318 = NULL;
#line 520
c_rt_lib0move(&___nl__im__314, generator_c_priv0get_fun_name(___nl__im__315, ___nl__im__316, ___nl__im__317));
#line 520
c_rt_lib0clear(&___nl__im__315);
#line 520
c_rt_lib0clear(&___nl__im__316);
#line 520
c_rt_lib0clear(&___nl__im__317);
#line 520
c_rt_lib0move(&___nl__im__319,___get_global_string_const(497));
#line 520
c_rt_lib0move(&___nl__im__313, c_rt_lib0concat_new(___nl__im__314, ___nl__im__319));
#line 520
c_rt_lib0clear(&___nl__im__314);
#line 520
c_rt_lib0clear(&___nl__im__319);
#line 520
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__313));
#line 520
c_rt_lib0clear(&___nl__im__313);
#line 521
c_rt_lib0move(&___nl__im__324,___get_global_string_const(520));
#line 521
c_rt_lib0move(&___nl__im__325, generator_c_priv0get_const_singleton(___ref___rec__0, ___nl__im__306));
#line 521
c_rt_lib0move(&___nl__im__323, c_rt_lib0concat_new(___nl__im__324, ___nl__im__325));
#line 521
c_rt_lib0clear(&___nl__im__324);
#line 521
c_rt_lib0clear(&___nl__im__325);
#line 521
c_rt_lib0move(&___nl__im__326,___get_global_string_const(454));
#line 521
c_rt_lib0move(&___nl__im__322, c_rt_lib0concat_new(___nl__im__323, ___nl__im__326));
#line 521
c_rt_lib0clear(&___nl__im__323);
#line 521
c_rt_lib0clear(&___nl__im__326);
#line 521
c_rt_lib0move(&___nl__im__327, string0lf());
#line 521
c_rt_lib0move(&___nl__im__321, c_rt_lib0concat_new(___nl__im__322, ___nl__im__327));
#line 521
c_rt_lib0clear(&___nl__im__322);
#line 521
c_rt_lib0clear(&___nl__im__327);
#line 521
c_rt_lib0move(&___nl__im__328,___get_global_string_const(321));
#line 521
c_rt_lib0move(&___nl__im__320, c_rt_lib0concat_new(___nl__im__321, ___nl__im__328));
#line 521
c_rt_lib0clear(&___nl__im__321);
#line 521
c_rt_lib0clear(&___nl__im__328);
#line 521
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__320));
#line 521
c_rt_lib0clear(&___nl__im__320);
#line 522
c_rt_lib0move(&___nl__im__331, generator_c_priv0im_t());
#line 522
c_rt_lib0move(&___nl__im__330, c_rt_lib0concat_new(___nl__im__331, ___nl__im__306));
#line 522
c_rt_lib0clear(&___nl__im__331);
#line 522
c_rt_lib0move(&___nl__im__332,___get_global_string_const(523));
#line 522
c_rt_lib0move(&___nl__im__329, c_rt_lib0concat_new(___nl__im__330, ___nl__im__332));
#line 522
c_rt_lib0clear(&___nl__im__330);
#line 522
c_rt_lib0clear(&___nl__im__332);
#line 522
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__329));
#line 522
c_rt_lib0clear(&___nl__im__329);
#line 523
goto label_806;
#line 523
label_797:
;
#line 524
___nl__im_ptr__335 = &((*___ref___rec__0).mod_name0field);
#line 524
c_rt_lib0copy(&___nl__im__334, (*___nl__im_ptr__335));
#line 524
___nl__im_ptr__335 = NULL;
#line 524
c_rt_lib0move(&___nl__im__333, generator_c_priv0get_function_header(___nl__im__168, ___nl__im__334));
#line 524
c_rt_lib0clear(&___nl__im__334);
#line 524
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__333));
#line 524
c_rt_lib0clear(&___nl__im__333);
#line 525
goto label_806;
#line 525
label_806:
;
#line 525
//clear ___nl__bool__305;
#line 525
c_rt_lib0clear(&___nl__im__306);
#line 526
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___rec__0, ___nl__im__168, ___nl__im__2));
#line 526
c_rt_lib0clear(&___nl__im__168);
#line 527
___nl__int__169 = ___nl__int__169 + ___nl__int__170;
#line 527
goto label_393;
#line 527
label_813:
;
#line 528
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___rec__0));
#line 529
___nl__hash_ptr__336 = &((*___ref___rec__0).additional_imports0field);
#line 529
___nl__int__340 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___nl__hash_ptr__336, -1);
#line 529
label_817:
;
#line 529
___nl__bool__338 = ___nl__int__340 == -1;
#line 529
if(___nl__bool__338){ goto label_832;}
#line 529
c_rt_lib0copy(&___nl__im__337, (*___nl__hash_ptr__336).keys[___nl__int__340]);
#line 529
___nl__bool_ptr__339 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(___nl__hash_ptr__336, ___nl__im__337, false);
#line 530
c_rt_lib0move(&___nl__im__342, generator_c_priv0get_include(___nl__im__337));
#line 530
c_rt_lib0move(&___nl__im__343, string0lf());
#line 530
c_rt_lib0move(&___nl__im__341, c_rt_lib0concat_new(___nl__im__342, ___nl__im__343));
#line 530
c_rt_lib0clear(&___nl__im__342);
#line 530
c_rt_lib0clear(&___nl__im__343);
#line 530
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_add(___nl__im__36, ___nl__im__341));
#line 530
c_rt_lib0clear(&___nl__im__341);
#line 530
___nl__bool_ptr__339 = NULL;
#line 531
___nl__int__340 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___nl__hash_ptr__336, ___nl__int__340);
#line 531
goto label_817;
#line 531
label_832:
;
#line 531
___nl__hash_ptr__336 = NULL;
#line 532
___nl__im_ptr__346 = &((*___ref___rec__0).ret0field);
#line 532
c_rt_lib0copy(&___nl__im__345, (*___nl__im_ptr__346));
#line 532
___nl__im_ptr__346 = NULL;
#line 532
c_rt_lib0move(&___nl__im__344, c_rt_lib0concat_new(___nl__im__36, ___nl__im__345));
#line 532
c_rt_lib0clear(&___nl__im__345);
#line 532
___nl__im_ptr__347 = &((*___ref___rec__0).ret0field);
#line 532
c_rt_lib0copy(___nl__im_ptr__347, ___nl__im__344);
#line 532
___nl__im_ptr__347 = NULL;
#line 532
c_rt_lib0clear(&___nl__im__344);
#line 532
c_rt_lib0clear(&___nl__im__1);
#line 532
c_rt_lib0clear(&___nl__im__2);
#line 532
c_rt_lib0clear(&___nl__im__25);
#line 532
c_rt_lib0clear(&___nl__im__26);
#line 532
//clear ___nl__int__27;
#line 532
//clear ___nl__int__28;
#line 532
//clear ___nl__int__29;
#line 532
//clear ___nl__bool__30;
#line 532
c_rt_lib0clear(&___nl__im__31);
#line 532
c_rt_lib0clear(&___nl__im__36);
#line 532
c_rt_lib0clear(&___nl__im__82);
#line 532
c_rt_lib0clear(&___nl__im__86);
#line 532
c_rt_lib0clear(&___nl__im__87);
#line 532
c_rt_lib0clear(&___nl__im__88);
#line 532
//clear ___nl__int__89;
#line 532
//clear ___nl__int__90;
#line 532
//clear ___nl__int__91;
#line 532
//clear ___nl__bool__92;
#line 532
c_rt_lib0clear(&___nl__im__93);
#line 532
c_rt_lib0clear(&___nl__im__94);
#line 532
//clear ___nl__bool__95;
#line 532
c_rt_lib0clear(&___nl__im__96);
#line 532
c_rt_lib0clear(&___nl__im__97);
#line 532
//clear ___nl__bool__98;
#line 532
c_rt_lib0clear(&___nl__im__99);
#line 532
c_rt_lib0clear(&___nl__im__100);
#line 532
c_rt_lib0clear(&___nl__im__101);
#line 532
//clear ___nl__bool__104;
#line 532
c_rt_lib0clear(&___nl__im__105);
#line 532
c_rt_lib0clear(&___nl__im__106);
#line 532
c_rt_lib0clear(&___nl__im__107);
#line 532
c_rt_lib0clear(&___nl__im__108);
#line 532
//clear ___nl__int__109;
#line 532
//clear ___nl__int__110;
#line 532
//clear ___nl__int__111;
#line 532
//clear ___nl__bool__112;
#line 532
c_rt_lib0clear(&___nl__im__113);
#line 532
//clear ___nl__bool__114;
#line 532
c_rt_lib0clear(&___nl__im__116);
#line 532
//clear ___nl__bool__117;
#line 532
c_rt_lib0clear(&___nl__im__118);
#line 532
c_rt_lib0clear(&___nl__im__138);
#line 532
c_rt_lib0clear(&___nl__im__139);
#line 532
c_rt_lib0clear(&___nl__im__140);
#line 532
//clear ___nl__int__141;
#line 532
//clear ___nl__int__142;
#line 532
//clear ___nl__int__143;
#line 532
//clear ___nl__bool__144;
#line 532
c_rt_lib0clear(&___nl__im__145);
#line 532
c_rt_lib0clear(&___nl__im__146);
#line 532
c_rt_lib0clear(&___nl__im__149);
#line 532
//clear ___nl__bool__150;
#line 532
c_rt_lib0clear(&___nl__im__151);
#line 532
c_rt_lib0clear(&___nl__im__167);
#line 532
c_rt_lib0clear(&___nl__im__168);
#line 532
//clear ___nl__int__169;
#line 532
//clear ___nl__int__170;
#line 532
//clear ___nl__int__171;
#line 532
//clear ___nl__bool__172;
#line 532
c_rt_lib0clear(&___nl__im__173);
#line 532
c_rt_lib0clear(&___nl__im__337);
#line 532
//clear ___nl__bool__338;
#line 532
//clear ___nl__int__340;
#line 532
return NULL;
return NULL;

}

ImmT  generator_c_priv0print_init_const(generator_c0state_t0type* ___ref___rec__0) {
generator_c_priv0__const__init();
INT  ___nl__int__1 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__2 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__3 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__4 = NULL;
INT  ___nl__int__5 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__6 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__7 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__10 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__11 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__12 = NULL;
INT  ___nl__int__13 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__14 = NULL;
INT * ___nl__int_ptr__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__string__28 = NULL;
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
ImmT * ___nl__im_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__57 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__58 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
INT  ___nl__int__70 = 0;
ImmT  ___nl__string__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__75 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__76 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__77 = NULL;
ImmT * ___nl__im_ptr__78 = NULL;
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
INT  ___nl__int__89 = 0;
ImmT  ___nl__string__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__string__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__string__97 = NULL;
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
ImmT * ___nl__im_ptr__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT * ___nl__im_ptr__129 = NULL;
ImmT  ___nl__im__130 = NULL;
INT  ___nl__int__131 = 0;
ImmT  ___nl__string__132 = NULL;
ImmT  ___nl__im__133 = NULL;
INT  ___nl__int__134 = 0;
INT  ___nl__int__135 = 0;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__string__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
INT  ___nl__int__147 = 0;
INT  ___nl__int__148 = 0;
ImmT  ___nl__string__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__152 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__153 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__154 = NULL;
ImmT * ___nl__im_ptr__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
INT  ___nl__int__172 = 0;
ImmT  ___nl__string__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
#line 536
___nl__rec_ptr__2 = &((*___ref___rec__0).const0field);
#line 536
___nl__rec_ptr__3 = &(___nl__rec_ptr__2->int0field);
#line 536
___nl__arr_ptr__4 = &(___nl__rec_ptr__3->arr0field);
#line 536
___nl__int__1 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__4);
#line 536
___nl__arr_ptr__4 = NULL;
#line 536
___nl__rec_ptr__3 = NULL;
#line 536
___nl__rec_ptr__2 = NULL;
#line 537
___nl__rec_ptr__6 = &((*___ref___rec__0).const0field);
#line 537
___nl__rec_ptr__7 = &(___nl__rec_ptr__6->string0field);
#line 537
___nl__arr_ptr__8 = &(___nl__rec_ptr__7->arr0field);
#line 537
___nl__int__5 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__8);
#line 537
___nl__arr_ptr__8 = NULL;
#line 537
___nl__rec_ptr__7 = NULL;
#line 537
___nl__rec_ptr__6 = NULL;
#line 538
___nl__rec_ptr__10 = &((*___ref___rec__0).const0field);
#line 538
___nl__rec_ptr__11 = &(___nl__rec_ptr__10->singleton0field);
#line 538
___nl__arr_ptr__12 = &(___nl__rec_ptr__11->arr0field);
#line 538
___nl__int__9 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__12);
#line 538
___nl__arr_ptr__12 = NULL;
#line 538
___nl__rec_ptr__11 = NULL;
#line 538
___nl__rec_ptr__10 = NULL;
#line 539
___nl__rec_ptr__14 = &((*___ref___rec__0).const0field);
#line 539
___nl__int_ptr__15 = &(___nl__rec_ptr__14->dynamic_nr0field);
#line 539
___nl__int__13 = (*___nl__int_ptr__15);
#line 539
___nl__int_ptr__15 = NULL;
#line 539
___nl__rec_ptr__14 = NULL;
#line 540
___nl__int__18 = ___nl__int__1 + ___nl__int__5;
#line 540
___nl__int__17 = ___nl__int__18 + ___nl__int__9;
#line 540
//clear ___nl__int__18;
#line 540
___nl__int__16 = ___nl__int__17 + ___nl__int__13;
#line 540
//clear ___nl__int__17;
#line 541
c_rt_lib0move(&___nl__im__23,___get_global_string_const(447));
#line 542
c_rt_lib0move(&___nl__im__24, generator_c_priv0im_t());
#line 542
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 542
c_rt_lib0clear(&___nl__im__23);
#line 542
c_rt_lib0clear(&___nl__im__24);
#line 542
c_rt_lib0move(&___nl__im__25,___get_global_string_const(524));
#line 542
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 542
c_rt_lib0clear(&___nl__im__22);
#line 542
c_rt_lib0clear(&___nl__im__25);
#line 542
___nl__int__27 = 1;
#line 542
___nl__int__26 = ___nl__int__27 + ___nl__int__16;
#line 542
//clear ___nl__int__27;
#line 542
c_rt_lib0move(&___nl__string__28, c_rt_lib0int_to_string(___nl__int__26));
#line 542
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__28));
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 542
//clear ___nl__int__26;
#line 542
c_rt_lib0clear(&___nl__string__28);
#line 542
c_rt_lib0move(&___nl__im__29,___get_global_string_const(525));
#line 542
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__29));
#line 542
c_rt_lib0clear(&___nl__im__20);
#line 542
c_rt_lib0clear(&___nl__im__29);
#line 542
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__19));
#line 542
c_rt_lib0clear(&___nl__im__19);
#line 544
c_rt_lib0move(&___nl__im__34,___get_global_string_const(495));
#line 544
c_rt_lib0move(&___nl__im__36,___get_global_string_const(36));
#line 544
c_rt_lib0move(&___nl__im__37,___get_global_string_const(496));
#line 544
___nl__im_ptr__39 = &((*___ref___rec__0).mod_name0field);
#line 544
c_rt_lib0copy(&___nl__im__38, (*___nl__im_ptr__39));
#line 544
___nl__im_ptr__39 = NULL;
#line 544
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_fun_name(___nl__im__36, ___nl__im__37, ___nl__im__38));
#line 544
c_rt_lib0clear(&___nl__im__36);
#line 544
c_rt_lib0clear(&___nl__im__37);
#line 544
c_rt_lib0clear(&___nl__im__38);
#line 544
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 544
c_rt_lib0clear(&___nl__im__34);
#line 544
c_rt_lib0clear(&___nl__im__35);
#line 544
c_rt_lib0move(&___nl__im__40,___get_global_string_const(526));
#line 544
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__40));
#line 544
c_rt_lib0clear(&___nl__im__33);
#line 544
c_rt_lib0clear(&___nl__im__40);
#line 547
___nl__int__42 = ___nl__int__1 + ___nl__int__5;
#line 547
___nl__int__41 = ___nl__int__42 + ___nl__int__9;
#line 547
//clear ___nl__int__42;
#line 547
c_rt_lib0move(&___nl__string__43, c_rt_lib0int_to_string(___nl__int__41));
#line 547
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__43));
#line 547
c_rt_lib0clear(&___nl__im__32);
#line 547
//clear ___nl__int__41;
#line 547
c_rt_lib0clear(&___nl__string__43);
#line 547
c_rt_lib0move(&___nl__im__44,___get_global_string_const(527));
#line 547
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__44));
#line 547
c_rt_lib0clear(&___nl__im__31);
#line 547
c_rt_lib0clear(&___nl__im__44);
#line 547
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__30));
#line 547
c_rt_lib0clear(&___nl__im__30);
#line 549
___nl__int__45 = 0;
#line 549
___nl__int__46 = 1;
#line 549
label_87:
;
#line 549
___nl__bool__47 = ___nl__int__45 >= ___nl__int__1;
#line 549
if(___nl__bool__47){ goto label_121;}
#line 550
c_rt_lib0move(&___nl__im__52,___get_global_string_const(524));
#line 550
c_rt_lib0move(&___nl__string__53, c_rt_lib0int_to_string(___nl__int__45));
#line 550
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__string__53));
#line 550
c_rt_lib0clear(&___nl__im__52);
#line 550
c_rt_lib0clear(&___nl__string__53);
#line 550
c_rt_lib0move(&___nl__im__54,___get_global_string_const(528));
#line 550
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__54));
#line 550
c_rt_lib0clear(&___nl__im__51);
#line 550
c_rt_lib0clear(&___nl__im__54);
#line 550
___nl__rec_ptr__57 = &((*___ref___rec__0).const0field);
#line 550
___nl__rec_ptr__58 = &(___nl__rec_ptr__57->int0field);
#line 550
___nl__arr_ptr__59 = &(___nl__rec_ptr__58->arr0field);
#line 550
___nl__im_ptr__60 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__59, ___nl__int__45);
#line 550
c_rt_lib0copy(&___nl__im__56, (*___nl__im_ptr__60));
#line 550
//release ___nl__im_ptr__60;
#line 550
___nl__arr_ptr__59 = NULL;
#line 550
___nl__rec_ptr__58 = NULL;
#line 550
___nl__rec_ptr__57 = NULL;
#line 550
c_rt_lib0move(&___nl__im__55, generator_c_priv0create_int(___nl__im__56));
#line 550
c_rt_lib0clear(&___nl__im__56);
#line 550
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__55));
#line 550
c_rt_lib0clear(&___nl__im__50);
#line 550
c_rt_lib0clear(&___nl__im__55);
#line 550
c_rt_lib0move(&___nl__im__61,___get_global_string_const(454));
#line 550
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__61));
#line 550
c_rt_lib0clear(&___nl__im__49);
#line 550
c_rt_lib0clear(&___nl__im__61);
#line 550
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__48));
#line 550
c_rt_lib0clear(&___nl__im__48);
#line 551
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 551
goto label_87;
#line 551
label_121:
;
#line 552
___nl__int__62 = 0;
#line 552
___nl__int__63 = 1;
#line 552
label_124:
;
#line 552
___nl__bool__64 = ___nl__int__62 >= ___nl__int__5;
#line 552
if(___nl__bool__64){ goto label_160;}
#line 553
c_rt_lib0move(&___nl__im__69,___get_global_string_const(524));
#line 553
___nl__int__70 = ___nl__int__62 + ___nl__int__1;
#line 553
c_rt_lib0move(&___nl__string__71, c_rt_lib0int_to_string(___nl__int__70));
#line 553
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__string__71));
#line 553
c_rt_lib0clear(&___nl__im__69);
#line 553
//clear ___nl__int__70;
#line 553
c_rt_lib0clear(&___nl__string__71);
#line 553
c_rt_lib0move(&___nl__im__72,___get_global_string_const(528));
#line 553
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__72));
#line 553
c_rt_lib0clear(&___nl__im__68);
#line 553
c_rt_lib0clear(&___nl__im__72);
#line 554
___nl__rec_ptr__75 = &((*___ref___rec__0).const0field);
#line 554
___nl__rec_ptr__76 = &(___nl__rec_ptr__75->string0field);
#line 554
___nl__arr_ptr__77 = &(___nl__rec_ptr__76->arr0field);
#line 554
___nl__im_ptr__78 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__77, ___nl__int__62);
#line 554
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__78));
#line 554
//release ___nl__im_ptr__78;
#line 554
___nl__arr_ptr__77 = NULL;
#line 554
___nl__rec_ptr__76 = NULL;
#line 554
___nl__rec_ptr__75 = NULL;
#line 554
c_rt_lib0move(&___nl__im__73, generator_c_priv0create_string(___nl__im__74));
#line 554
c_rt_lib0clear(&___nl__im__74);
#line 554
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__73));
#line 554
c_rt_lib0clear(&___nl__im__67);
#line 554
c_rt_lib0clear(&___nl__im__73);
#line 554
c_rt_lib0move(&___nl__im__79,___get_global_string_const(454));
#line 554
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__79));
#line 554
c_rt_lib0clear(&___nl__im__66);
#line 554
c_rt_lib0clear(&___nl__im__79);
#line 554
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__65));
#line 554
c_rt_lib0clear(&___nl__im__65);
#line 555
___nl__int__62 = ___nl__int__62 + ___nl__int__63;
#line 555
goto label_124;
#line 555
label_160:
;
#line 556
c_rt_lib0move(&___nl__im__88,___get_global_string_const(529));
#line 557
___nl__int__89 = ___nl__int__1 + ___nl__int__5;
#line 557
c_rt_lib0move(&___nl__string__90, c_rt_lib0int_to_string(___nl__int__89));
#line 557
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__string__90));
#line 557
c_rt_lib0clear(&___nl__im__88);
#line 557
//clear ___nl__int__89;
#line 557
c_rt_lib0clear(&___nl__string__90);
#line 557
c_rt_lib0move(&___nl__im__91,___get_global_string_const(530));
#line 557
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__91));
#line 557
c_rt_lib0clear(&___nl__im__87);
#line 557
c_rt_lib0clear(&___nl__im__91);
#line 557
c_rt_lib0move(&___nl__string__92, c_rt_lib0int_to_string(___nl__int__16));
#line 557
c_rt_lib0move(&___nl__im__85, c_rt_lib0concat_new(___nl__im__86, ___nl__string__92));
#line 557
c_rt_lib0clear(&___nl__im__86);
#line 557
c_rt_lib0clear(&___nl__string__92);
#line 557
c_rt_lib0move(&___nl__im__93,___get_global_string_const(531));
#line 557
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__im__93));
#line 557
c_rt_lib0clear(&___nl__im__85);
#line 557
c_rt_lib0clear(&___nl__im__93);
#line 558
c_rt_lib0move(&___nl__im__95,___get_global_string_const(532));
#line 558
c_rt_lib0move(&___nl__im__94, generator_c_priv0get_lib_fun(___nl__im__95));
#line 558
c_rt_lib0clear(&___nl__im__95);
#line 558
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__94));
#line 558
c_rt_lib0clear(&___nl__im__84);
#line 558
c_rt_lib0clear(&___nl__im__94);
#line 558
c_rt_lib0move(&___nl__im__96,___get_global_string_const(533));
#line 558
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__96));
#line 558
c_rt_lib0clear(&___nl__im__83);
#line 558
c_rt_lib0clear(&___nl__im__96);
#line 558
c_rt_lib0move(&___nl__string__97, c_rt_lib0int_to_string(___nl__int__16));
#line 558
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__string__97));
#line 558
c_rt_lib0clear(&___nl__im__82);
#line 558
c_rt_lib0clear(&___nl__string__97);
#line 558
c_rt_lib0move(&___nl__im__98,___get_global_string_const(534));
#line 558
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__98));
#line 558
c_rt_lib0clear(&___nl__im__81);
#line 558
c_rt_lib0clear(&___nl__im__98);
#line 558
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__80));
#line 558
c_rt_lib0clear(&___nl__im__80);
#line 560
c_rt_lib0move(&___nl__im__105, generator_c_priv0im_t());
#line 560
c_rt_lib0move(&___nl__im__107,___get_global_string_const(36));
#line 560
c_rt_lib0move(&___nl__im__108,___get_global_string_const(498));
#line 560
___nl__im_ptr__110 = &((*___ref___rec__0).mod_name0field);
#line 560
c_rt_lib0copy(&___nl__im__109, (*___nl__im_ptr__110));
#line 560
___nl__im_ptr__110 = NULL;
#line 560
c_rt_lib0move(&___nl__im__106, generator_c_priv0get_fun_name(___nl__im__107, ___nl__im__108, ___nl__im__109));
#line 560
c_rt_lib0clear(&___nl__im__107);
#line 560
c_rt_lib0clear(&___nl__im__108);
#line 560
c_rt_lib0clear(&___nl__im__109);
#line 560
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__106));
#line 560
c_rt_lib0clear(&___nl__im__105);
#line 560
c_rt_lib0clear(&___nl__im__106);
#line 560
c_rt_lib0move(&___nl__im__111,___get_global_string_const(535));
#line 560
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__111));
#line 560
c_rt_lib0clear(&___nl__im__104);
#line 560
c_rt_lib0clear(&___nl__im__111);
#line 561
c_rt_lib0move(&___nl__im__112, generator_c_priv0im_t());
#line 561
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__112));
#line 561
c_rt_lib0clear(&___nl__im__103);
#line 561
c_rt_lib0clear(&___nl__im__112);
#line 561
c_rt_lib0move(&___nl__im__113,___get_global_string_const(466));
#line 561
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__113));
#line 561
c_rt_lib0clear(&___nl__im__102);
#line 561
c_rt_lib0clear(&___nl__im__113);
#line 562
c_rt_lib0move(&___nl__im__115,___get_global_string_const(467));
#line 562
c_rt_lib0move(&___nl__im__117,___get_global_string_const(468));
#line 562
c_rt_lib0move(&___nl__im__118,___get_global_string_const(536));
#line 562
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_mk(2, ___nl__im__117, ___nl__im__118));
#line 562
c_rt_lib0clear(&___nl__im__117);
#line 562
c_rt_lib0clear(&___nl__im__118);
#line 562
c_rt_lib0move(&___nl__im__114, generator_c_priv0get_fun_lib(___nl__im__115, ___nl__im__116));
#line 562
c_rt_lib0clear(&___nl__im__115);
#line 562
c_rt_lib0clear(&___nl__im__116);
#line 562
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__114));
#line 562
c_rt_lib0clear(&___nl__im__101);
#line 562
c_rt_lib0clear(&___nl__im__114);
#line 562
c_rt_lib0move(&___nl__im__119,___get_global_string_const(471));
#line 562
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__im__119));
#line 562
c_rt_lib0clear(&___nl__im__100);
#line 562
c_rt_lib0clear(&___nl__im__119);
#line 562
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__99));
#line 562
c_rt_lib0clear(&___nl__im__99);
#line 565
c_rt_lib0move(&___nl__im__124, generator_c_priv0im_t());
#line 565
c_rt_lib0move(&___nl__im__126,___get_global_string_const(36));
#line 565
c_rt_lib0move(&___nl__im__127,___get_global_string_const(486));
#line 565
___nl__im_ptr__129 = &((*___ref___rec__0).mod_name0field);
#line 565
c_rt_lib0copy(&___nl__im__128, (*___nl__im_ptr__129));
#line 565
___nl__im_ptr__129 = NULL;
#line 565
c_rt_lib0move(&___nl__im__125, generator_c_priv0get_fun_name(___nl__im__126, ___nl__im__127, ___nl__im__128));
#line 565
c_rt_lib0clear(&___nl__im__126);
#line 565
c_rt_lib0clear(&___nl__im__127);
#line 565
c_rt_lib0clear(&___nl__im__128);
#line 565
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__125));
#line 565
c_rt_lib0clear(&___nl__im__124);
#line 565
c_rt_lib0clear(&___nl__im__125);
#line 565
c_rt_lib0move(&___nl__im__130,___get_global_string_const(537));
#line 565
c_rt_lib0move(&___nl__im__122, c_rt_lib0concat_new(___nl__im__123, ___nl__im__130));
#line 565
c_rt_lib0clear(&___nl__im__123);
#line 565
c_rt_lib0clear(&___nl__im__130);
#line 566
___nl__int__131 = ___nl__int__1 + ___nl__int__5;
#line 566
c_rt_lib0move(&___nl__string__132, c_rt_lib0int_to_string(___nl__int__131));
#line 566
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__string__132));
#line 566
c_rt_lib0clear(&___nl__im__122);
#line 566
//clear ___nl__int__131;
#line 566
c_rt_lib0clear(&___nl__string__132);
#line 566
c_rt_lib0move(&___nl__im__133,___get_global_string_const(538));
#line 566
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__133));
#line 566
c_rt_lib0clear(&___nl__im__121);
#line 566
c_rt_lib0clear(&___nl__im__133);
#line 566
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__120));
#line 566
c_rt_lib0clear(&___nl__im__120);
#line 568
___nl__int__134 = 0;
#line 568
___nl__int__135 = 1;
#line 568
label_274:
;
#line 568
___nl__bool__136 = ___nl__int__134 >= ___nl__int__9;
#line 568
if(___nl__bool__136){ goto label_324;}
#line 569
c_rt_lib0move(&___nl__im__139,___get_global_string_const(539));
#line 569
c_rt_lib0move(&___nl__string__140, c_rt_lib0int_to_string(___nl__int__134));
#line 569
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__string__140));
#line 569
c_rt_lib0clear(&___nl__im__139);
#line 569
c_rt_lib0clear(&___nl__string__140);
#line 569
c_rt_lib0move(&___nl__im__141,___get_global_string_const(540));
#line 569
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__141));
#line 569
c_rt_lib0clear(&___nl__im__138);
#line 569
c_rt_lib0clear(&___nl__im__141);
#line 569
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__137));
#line 569
c_rt_lib0clear(&___nl__im__137);
#line 570
c_rt_lib0move(&___nl__im__146,___get_global_string_const(541));
#line 570
___nl__int__148 = ___nl__int__134 + ___nl__int__1;
#line 570
___nl__int__147 = ___nl__int__148 + ___nl__int__5;
#line 570
//clear ___nl__int__148;
#line 570
c_rt_lib0move(&___nl__string__149, c_rt_lib0int_to_string(___nl__int__147));
#line 570
c_rt_lib0move(&___nl__im__145, c_rt_lib0concat_new(___nl__im__146, ___nl__string__149));
#line 570
c_rt_lib0clear(&___nl__im__146);
#line 570
//clear ___nl__int__147;
#line 570
c_rt_lib0clear(&___nl__string__149);
#line 570
c_rt_lib0move(&___nl__im__150,___get_global_string_const(528));
#line 570
c_rt_lib0move(&___nl__im__144, c_rt_lib0concat_new(___nl__im__145, ___nl__im__150));
#line 570
c_rt_lib0clear(&___nl__im__145);
#line 570
c_rt_lib0clear(&___nl__im__150);
#line 571
___nl__rec_ptr__152 = &((*___ref___rec__0).const0field);
#line 571
___nl__rec_ptr__153 = &(___nl__rec_ptr__152->singleton0field);
#line 571
___nl__arr_ptr__154 = &(___nl__rec_ptr__153->arr0field);
#line 571
___nl__im_ptr__155 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__154, ___nl__int__134);
#line 571
c_rt_lib0copy(&___nl__im__151, (*___nl__im_ptr__155));
#line 571
//release ___nl__im_ptr__155;
#line 571
___nl__arr_ptr__154 = NULL;
#line 571
___nl__rec_ptr__153 = NULL;
#line 571
___nl__rec_ptr__152 = NULL;
#line 571
c_rt_lib0move(&___nl__im__143, c_rt_lib0concat_new(___nl__im__144, ___nl__im__151));
#line 571
c_rt_lib0clear(&___nl__im__144);
#line 571
c_rt_lib0clear(&___nl__im__151);
#line 571
c_rt_lib0move(&___nl__im__156,___get_global_string_const(542));
#line 571
c_rt_lib0move(&___nl__im__142, c_rt_lib0concat_new(___nl__im__143, ___nl__im__156));
#line 571
c_rt_lib0clear(&___nl__im__143);
#line 571
c_rt_lib0clear(&___nl__im__156);
#line 571
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__142));
#line 571
c_rt_lib0clear(&___nl__im__142);
#line 572
c_rt_lib0move(&___nl__im__157,___get_global_string_const(543));
#line 572
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__157));
#line 572
c_rt_lib0clear(&___nl__im__157);
#line 573
___nl__int__134 = ___nl__int__134 + ___nl__int__135;
#line 573
goto label_274;
#line 573
label_324:
;
#line 574
c_rt_lib0move(&___nl__im__162,___get_global_string_const(544));
#line 577
c_rt_lib0move(&___nl__im__163, generator_c_priv0im_t());
#line 577
c_rt_lib0move(&___nl__im__161, c_rt_lib0concat_new(___nl__im__162, ___nl__im__163));
#line 577
c_rt_lib0clear(&___nl__im__162);
#line 577
c_rt_lib0clear(&___nl__im__163);
#line 577
c_rt_lib0move(&___nl__im__164,___get_global_string_const(466));
#line 577
c_rt_lib0move(&___nl__im__160, c_rt_lib0concat_new(___nl__im__161, ___nl__im__164));
#line 577
c_rt_lib0clear(&___nl__im__161);
#line 577
c_rt_lib0clear(&___nl__im__164);
#line 578
c_rt_lib0move(&___nl__im__166,___get_global_string_const(467));
#line 578
c_rt_lib0move(&___nl__im__168,___get_global_string_const(468));
#line 578
c_rt_lib0move(&___nl__im__171,___get_global_string_const(545));
#line 578
___nl__int__172 = ___nl__int__1 + ___nl__int__5;
#line 578
c_rt_lib0move(&___nl__string__173, c_rt_lib0int_to_string(___nl__int__172));
#line 578
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__string__173));
#line 578
c_rt_lib0clear(&___nl__im__171);
#line 578
//clear ___nl__int__172;
#line 578
c_rt_lib0clear(&___nl__string__173);
#line 578
c_rt_lib0move(&___nl__im__174,___get_global_string_const(331));
#line 578
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_new(___nl__im__170, ___nl__im__174));
#line 578
c_rt_lib0clear(&___nl__im__170);
#line 578
c_rt_lib0clear(&___nl__im__174);
#line 578
c_rt_lib0move(&___nl__im__167, c_rt_lib0array_mk(2, ___nl__im__168, ___nl__im__169));
#line 578
c_rt_lib0clear(&___nl__im__168);
#line 578
c_rt_lib0clear(&___nl__im__169);
#line 578
c_rt_lib0move(&___nl__im__165, generator_c_priv0get_fun_lib(___nl__im__166, ___nl__im__167));
#line 578
c_rt_lib0clear(&___nl__im__166);
#line 578
c_rt_lib0clear(&___nl__im__167);
#line 578
c_rt_lib0move(&___nl__im__159, c_rt_lib0concat_new(___nl__im__160, ___nl__im__165));
#line 578
c_rt_lib0clear(&___nl__im__160);
#line 578
c_rt_lib0clear(&___nl__im__165);
#line 578
c_rt_lib0move(&___nl__im__175,___get_global_string_const(471));
#line 578
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__175));
#line 578
c_rt_lib0clear(&___nl__im__159);
#line 578
c_rt_lib0clear(&___nl__im__175);
#line 578
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__158));
#line 578
c_rt_lib0clear(&___nl__im__158);
#line 578
//clear ___nl__int__1;
#line 578
//clear ___nl__int__5;
#line 578
//clear ___nl__int__9;
#line 578
//clear ___nl__int__13;
#line 578
//clear ___nl__int__16;
#line 578
//clear ___nl__int__45;
#line 578
//clear ___nl__int__46;
#line 578
//clear ___nl__bool__47;
#line 578
//clear ___nl__int__62;
#line 578
//clear ___nl__int__63;
#line 578
//clear ___nl__bool__64;
#line 578
//clear ___nl__int__134;
#line 578
//clear ___nl__int__135;
#line 578
//clear ___nl__bool__136;
#line 578
return NULL;

}

ImmT  generator_c_priv0print_function_block(generator_c0state_t0type* ___ref___rec__0,nlasm0function_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__55 = NULL;
INT * ___nl__int_ptr__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__string__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__string__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
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
ImmT  ___nl__string__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
INT  ___nl__int__98 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__99 = NULL;
INT * ___nl__int_ptr__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT * ___nl__im_ptr__103 = NULL;
bool  ___nl__bool__104 = false;
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
#line 584
c_rt_lib0move(&___nl__im__3,___get_global_string_const(546));
#line 584
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__3));
#line 584
c_rt_lib0clear(&___nl__im__3);
#line 585
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(236)));
#line 585
___nl__im_ptr__5 = &((*___ref___rec__0).fun_args0field);
#line 585
c_rt_lib0copy(___nl__im_ptr__5, ___nl__im__4);
#line 585
___nl__im_ptr__5 = NULL;
#line 585
c_rt_lib0clear(&___nl__im__4);
#line 586
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(429)));
#line 586
___nl__im_ptr__7 = &((*___ref___rec__0).ret_reg_type0field);
#line 586
c_rt_lib0copy(___nl__im_ptr__7, ___nl__im__6);
#line 586
___nl__im_ptr__7 = NULL;
#line 586
c_rt_lib0clear(&___nl__im__6);
#line 587
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___rec__0));
#line 588
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
#line 588
c_rt_lib0move(&___nl__im__11,___get_global_string_const(496));
#line 588
___nl__im_ptr__13 = &((*___ref___rec__0).mod_name0field);
#line 588
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 588
___nl__im_ptr__13 = NULL;
#line 588
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_name(___nl__im__10, ___nl__im__11, ___nl__im__12));
#line 588
c_rt_lib0clear(&___nl__im__10);
#line 588
c_rt_lib0clear(&___nl__im__11);
#line 588
c_rt_lib0clear(&___nl__im__12);
#line 588
c_rt_lib0move(&___nl__im__14,___get_global_string_const(497));
#line 588
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 588
c_rt_lib0clear(&___nl__im__9);
#line 588
c_rt_lib0clear(&___nl__im__14);
#line 588
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__8));
#line 588
c_rt_lib0clear(&___nl__im__8);
#line 590
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(236)));
#line 590
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 590
c_rt_lib0clear(&___nl__im__16);
#line 590
label_32:
;
#line 590
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(237)));
#line 590
___nl__int__18 = c_rt_lib0array_len(___nl__im__19);
#line 590
c_rt_lib0clear(&___nl__im__19);
#line 590
___nl__bool__17 = ___nl__int__15 < ___nl__int__18;
#line 590
//clear ___nl__int__18;
#line 590
___nl__bool__17 = !___nl__bool__17;
#line 590
if(___nl__bool__17){ goto label_49;}
#line 591
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(237)));
#line 591
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__21, ___nl__int__15));
#line 591
c_rt_lib0clear(&___nl__im__21);
#line 591
c_rt_lib0delete(generator_c_priv0print_declaration(___ref___rec__0, ___nl__im__20, ___nl__im__2));
#line 591
c_rt_lib0clear(&___nl__im__20);
#line 590
___nl__int__22 = 1;
#line 590
___nl__int__15 = ___nl__int__15 + ___nl__int__22;
#line 590
//clear ___nl__int__22;
#line 592
goto label_32;
#line 592
label_49:
;
#line 593
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 593
___nl__int__25 = 0;
#line 593
___nl__int__26 = 1;
#line 593
___nl__int__27 = c_rt_lib0array_len(___nl__im__23);
#line 593
label_54:
;
#line 593
___nl__bool__28 = ___nl__int__25 >= ___nl__int__27;
#line 593
if(___nl__bool__28){ goto label_283;}
#line 593
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__23, ___nl__int__25));
#line 593
c_rt_lib0copy(&___nl__im__24, ___nl__im__29);
#line 594
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(247)));
#line 594
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(76));
#line 594
if(___nl__bool__31){ goto label_67;}
#line 596
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(243));
#line 596
if(___nl__bool__31){ goto label_70;}
#line 596
c_rt_lib0move(&___nl__im__32,___get_global_string_const(15));
#line 596
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__30));
#line 596
nl_die_arg(___nl__im__32);
#line 594
label_67:
;
#line 595
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 596
goto label_278;
#line 596
label_70:
;
#line 596
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__30, ___get_global_string_const(243)));
#line 596
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 597
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 597
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_string_const(246));
#line 597
c_rt_lib0clear(&___nl__im__36);
#line 597
___nl__bool__35 = !___nl__bool__35;
#line 597
if(___nl__bool__35){ goto label_105;}
#line 598
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 598
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(224)));
#line 598
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(246)));
#line 598
c_rt_lib0clear(&___nl__im__39);
#line 598
c_rt_lib0clear(&___nl__im__40);
#line 598
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(245)));
#line 598
c_rt_lib0clear(&___nl__im__38);
#line 599
___nl__bool__41 = nl0is_int(___nl__im__37);
#line 599
if(___nl__bool__41){ goto label_88;}
#line 599
___nl__bool__41 = nl0is_string(___nl__im__37);
#line 599
label_88:
;
#line 599
___nl__bool__41 = !___nl__bool__41;
#line 599
if(___nl__bool__41){ goto label_102;}
#line 600
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 601
c_rt_lib0clear(&___nl__im__30);
#line 601
//clear ___nl__bool__31;
#line 601
c_rt_lib0clear(&___nl__im__32);
#line 601
c_rt_lib0clear(&___nl__im__33);
#line 601
c_rt_lib0clear(&___nl__im__34);
#line 601
//clear ___nl__bool__35;
#line 601
c_rt_lib0clear(&___nl__im__37);
#line 601
//clear ___nl__bool__41;
#line 601
goto label_280;
#line 602
goto label_102;
#line 602
label_102:
;
#line 602
//clear ___nl__bool__41;
#line 603
goto label_105;
#line 603
label_105:
;
#line 603
//clear ___nl__bool__35;
#line 603
c_rt_lib0clear(&___nl__im__37);
#line 604
___nl__int__42 = c_rt_lib0array_len(___nl__im__33);
#line 605
___nl__bool__43 = true;
#line 606
___nl__int__45 = 0;
#line 606
___nl__int__46 = 1;
#line 606
___nl__int__47 = c_rt_lib0array_len(___nl__im__33);
#line 606
label_113:
;
#line 606
___nl__bool__48 = ___nl__int__45 >= ___nl__int__47;
#line 606
if(___nl__bool__48){ goto label_131;}
#line 606
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__33, ___nl__int__45));
#line 606
c_rt_lib0copy(&___nl__im__44, ___nl__im__49);
#line 607
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(110)));
#line 607
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_string_const(145));
#line 607
c_rt_lib0clear(&___nl__im__51);
#line 607
___nl__bool__50 = !___nl__bool__50;
#line 607
___nl__bool__50 = !___nl__bool__50;
#line 607
if(___nl__bool__50){ goto label_126;}
#line 607
___nl__bool__43 = false;
#line 607
goto label_126;
#line 607
label_126:
;
#line 607
//clear ___nl__bool__50;
#line 607
c_rt_lib0clear(&___nl__im__44);
#line 608
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 608
goto label_113;
#line 608
label_131:
;
#line 609
___nl__int__53 = 0;
#line 609
___nl__bool__52 = ___nl__int__42 == ___nl__int__53;
#line 609
//clear ___nl__int__53;
#line 609
if(___nl__bool__52){ goto label_138;}
#line 609
___nl__bool__52 = ___nl__bool__43;
#line 609
___nl__bool__52 = !___nl__bool__52;
#line 609
label_138:
;
#line 609
___nl__bool__52 = !___nl__bool__52;
#line 609
if(___nl__bool__52){ goto label_158;}
#line 610
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 611
c_rt_lib0clear(&___nl__im__30);
#line 611
//clear ___nl__bool__31;
#line 611
c_rt_lib0clear(&___nl__im__32);
#line 611
c_rt_lib0clear(&___nl__im__33);
#line 611
c_rt_lib0clear(&___nl__im__34);
#line 611
//clear ___nl__int__42;
#line 611
//clear ___nl__bool__43;
#line 611
c_rt_lib0clear(&___nl__im__44);
#line 611
//clear ___nl__int__45;
#line 611
//clear ___nl__int__46;
#line 611
//clear ___nl__int__47;
#line 611
//clear ___nl__bool__48;
#line 611
c_rt_lib0clear(&___nl__im__49);
#line 611
//clear ___nl__bool__52;
#line 611
goto label_280;
#line 612
goto label_262;
#line 612
label_158:
;
#line 613
___nl__rec_ptr__55 = &((*___ref___rec__0).const0field);
#line 613
___nl__int_ptr__56 = &(___nl__rec_ptr__55->dynamic_nr0field);
#line 613
___nl__int__54 = (*___nl__int_ptr__56);
#line 613
___nl__int_ptr__56 = NULL;
#line 613
___nl__rec_ptr__55 = NULL;
#line 614
c_rt_lib0move(&___nl__im__59,___get_global_string_const(547));
#line 614
c_rt_lib0move(&___nl__string__60, c_rt_lib0int_to_string(___nl__int__54));
#line 614
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__string__60));
#line 614
c_rt_lib0clear(&___nl__im__59);
#line 614
c_rt_lib0clear(&___nl__string__60);
#line 614
c_rt_lib0move(&___nl__im__61,___get_global_string_const(548));
#line 614
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__61));
#line 614
c_rt_lib0clear(&___nl__im__58);
#line 614
c_rt_lib0clear(&___nl__im__61);
#line 614
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__57));
#line 614
c_rt_lib0clear(&___nl__im__57);
#line 615
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 616
___nl__int__63 = 0;
#line 616
___nl__int__64 = 1;
#line 616
___nl__int__65 = c_rt_lib0array_len(___nl__im__33);
#line 616
label_179:
;
#line 616
___nl__bool__66 = ___nl__int__63 >= ___nl__int__65;
#line 616
if(___nl__bool__66){ goto label_213;}
#line 616
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__33, ___nl__int__63));
#line 616
c_rt_lib0copy(&___nl__im__62, ___nl__im__67);
#line 617
c_rt_lib0move(&___nl__im__70,___get_global_string_const(467));
#line 617
c_rt_lib0move(&___nl__im__74,___get_global_string_const(549));
#line 617
c_rt_lib0move(&___nl__string__75, c_rt_lib0int_to_string(___nl__int__54));
#line 617
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__string__75));
#line 617
c_rt_lib0clear(&___nl__im__74);
#line 617
c_rt_lib0clear(&___nl__string__75);
#line 617
c_rt_lib0move(&___nl__im__76,___get_global_string_const(331));
#line 617
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__76));
#line 617
c_rt_lib0clear(&___nl__im__73);
#line 617
c_rt_lib0clear(&___nl__im__76);
#line 618
c_rt_lib0move(&___nl__im__77, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__62));
#line 618
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(2, ___nl__im__72, ___nl__im__77));
#line 618
c_rt_lib0clear(&___nl__im__72);
#line 618
c_rt_lib0clear(&___nl__im__77);
#line 618
c_rt_lib0move(&___nl__im__69, generator_c_priv0get_fun_lib(___nl__im__70, ___nl__im__71));
#line 618
c_rt_lib0clear(&___nl__im__70);
#line 618
c_rt_lib0clear(&___nl__im__71);
#line 618
c_rt_lib0move(&___nl__im__78,___get_global_string_const(454));
#line 618
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__78));
#line 618
c_rt_lib0clear(&___nl__im__69);
#line 618
c_rt_lib0clear(&___nl__im__78);
#line 618
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__68));
#line 618
c_rt_lib0clear(&___nl__im__68);
#line 619
___nl__int__79 = 1;
#line 619
___nl__int__54 = ___nl__int__54 + ___nl__int__79;
#line 619
//clear ___nl__int__79;
#line 619
c_rt_lib0clear(&___nl__im__62);
#line 620
___nl__int__63 = ___nl__int__63 + ___nl__int__64;
#line 620
goto label_179;
#line 620
label_213:
;
#line 621
c_rt_lib0move(&___nl__im__80,___get_global_string_const(321));
#line 621
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__80));
#line 621
c_rt_lib0clear(&___nl__im__80);
#line 622
___nl__int__54 = ___nl__int__54 - ___nl__int__42;
#line 623
___nl__int__82 = 0;
#line 623
___nl__int__83 = 1;
#line 623
___nl__int__84 = c_rt_lib0array_len(___nl__im__33);
#line 623
label_221:
;
#line 623
___nl__bool__85 = ___nl__int__82 >= ___nl__int__84;
#line 623
if(___nl__bool__85){ goto label_255;}
#line 623
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_get(___nl__im__33, ___nl__int__82));
#line 623
c_rt_lib0copy(&___nl__im__81, ___nl__im__86);
#line 624
c_rt_lib0move(&___nl__im__89,___get_global_string_const(467));
#line 624
c_rt_lib0move(&___nl__im__91, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__81));
#line 625
c_rt_lib0move(&___nl__im__94,___get_global_string_const(550));
#line 625
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__54));
#line 625
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__string__95));
#line 625
c_rt_lib0clear(&___nl__im__94);
#line 625
c_rt_lib0clear(&___nl__string__95);
#line 625
c_rt_lib0move(&___nl__im__96,___get_global_string_const(331));
#line 625
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__96));
#line 625
c_rt_lib0clear(&___nl__im__93);
#line 625
c_rt_lib0clear(&___nl__im__96);
#line 625
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__91, ___nl__im__92));
#line 625
c_rt_lib0clear(&___nl__im__91);
#line 625
c_rt_lib0clear(&___nl__im__92);
#line 625
c_rt_lib0move(&___nl__im__88, generator_c_priv0get_fun_lib(___nl__im__89, ___nl__im__90));
#line 625
c_rt_lib0clear(&___nl__im__89);
#line 625
c_rt_lib0clear(&___nl__im__90);
#line 625
c_rt_lib0move(&___nl__im__97,___get_global_string_const(454));
#line 625
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__97));
#line 625
c_rt_lib0clear(&___nl__im__88);
#line 625
c_rt_lib0clear(&___nl__im__97);
#line 625
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__87));
#line 625
c_rt_lib0clear(&___nl__im__87);
#line 626
___nl__int__98 = 1;
#line 626
___nl__int__54 = ___nl__int__54 + ___nl__int__98;
#line 626
//clear ___nl__int__98;
#line 626
c_rt_lib0clear(&___nl__im__81);
#line 627
___nl__int__82 = ___nl__int__82 + ___nl__int__83;
#line 627
goto label_221;
#line 627
label_255:
;
#line 628
___nl__rec_ptr__99 = &((*___ref___rec__0).const0field);
#line 628
___nl__int_ptr__100 = &(___nl__rec_ptr__99->dynamic_nr0field);
#line 628
(*___nl__int_ptr__100) = ___nl__int__54;
#line 628
___nl__int_ptr__100 = NULL;
#line 628
___nl__rec_ptr__99 = NULL;
#line 629
goto label_262;
#line 629
label_262:
;
#line 629
//clear ___nl__bool__52;
#line 629
//clear ___nl__int__54;
#line 629
c_rt_lib0clear(&___nl__im__62);
#line 629
//clear ___nl__int__63;
#line 629
//clear ___nl__int__64;
#line 629
//clear ___nl__int__65;
#line 629
//clear ___nl__bool__66;
#line 629
c_rt_lib0clear(&___nl__im__67);
#line 629
c_rt_lib0clear(&___nl__im__81);
#line 629
//clear ___nl__int__82;
#line 629
//clear ___nl__int__83;
#line 629
//clear ___nl__int__84;
#line 629
//clear ___nl__bool__85;
#line 629
c_rt_lib0clear(&___nl__im__86);
#line 630
goto label_278;
#line 630
label_278:
;
#line 630
c_rt_lib0clear(&___nl__im__24);
#line 630
label_280:
;
#line 631
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 631
goto label_54;
#line 631
label_283:
;
#line 632
___nl__im_ptr__103 = &((*___ref___rec__0).ret_reg_type0field);
#line 632
c_rt_lib0copy(&___nl__im__102, (*___nl__im_ptr__103));
#line 632
___nl__im_ptr__103 = NULL;
#line 632
c_rt_lib0move(&___nl__im__101, generator_c_priv0get_empty_value(___nl__im__102));
#line 632
c_rt_lib0clear(&___nl__im__102);
#line 633
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(220)));
#line 633
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__105, ___get_global_string_const(8));
#line 633
c_rt_lib0clear(&___nl__im__105);
#line 633
___nl__bool__104 = !___nl__bool__104;
#line 633
___nl__bool__104 = !___nl__bool__104;
#line 633
if(___nl__bool__104){ goto label_305;}
#line 633
c_rt_lib0move(&___nl__im__108,___get_global_string_const(520));
#line 633
c_rt_lib0move(&___nl__im__107, c_rt_lib0concat_new(___nl__im__108, ___nl__im__101));
#line 633
c_rt_lib0clear(&___nl__im__108);
#line 633
c_rt_lib0move(&___nl__im__109,___get_global_string_const(454));
#line 633
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 633
c_rt_lib0clear(&___nl__im__107);
#line 633
c_rt_lib0clear(&___nl__im__109);
#line 633
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__106));
#line 633
c_rt_lib0clear(&___nl__im__106);
#line 633
goto label_305;
#line 633
label_305:
;
#line 633
//clear ___nl__bool__104;
#line 634
c_rt_lib0move(&___nl__im__112, string0lf());
#line 634
c_rt_lib0move(&___nl__im__113,___get_global_string_const(321));
#line 634
c_rt_lib0move(&___nl__im__111, c_rt_lib0concat_new(___nl__im__112, ___nl__im__113));
#line 634
c_rt_lib0clear(&___nl__im__112);
#line 634
c_rt_lib0clear(&___nl__im__113);
#line 634
c_rt_lib0move(&___nl__im__114, string0lf());
#line 634
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__114));
#line 634
c_rt_lib0clear(&___nl__im__111);
#line 634
c_rt_lib0clear(&___nl__im__114);
#line 634
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__110));
#line 634
c_rt_lib0clear(&___nl__im__110);
#line 634
c_rt_lib0clear(&___nl__im__1);
#line 634
c_rt_lib0clear(&___nl__im__2);
#line 634
//clear ___nl__int__15;
#line 634
//clear ___nl__bool__17;
#line 634
c_rt_lib0clear(&___nl__im__23);
#line 634
c_rt_lib0clear(&___nl__im__24);
#line 634
//clear ___nl__int__25;
#line 634
//clear ___nl__int__26;
#line 634
//clear ___nl__int__27;
#line 634
//clear ___nl__bool__28;
#line 634
c_rt_lib0clear(&___nl__im__29);
#line 634
c_rt_lib0clear(&___nl__im__30);
#line 634
//clear ___nl__bool__31;
#line 634
c_rt_lib0clear(&___nl__im__32);
#line 634
c_rt_lib0clear(&___nl__im__33);
#line 634
c_rt_lib0clear(&___nl__im__34);
#line 634
//clear ___nl__int__42;
#line 634
//clear ___nl__bool__43;
#line 634
c_rt_lib0clear(&___nl__im__44);
#line 634
//clear ___nl__int__45;
#line 634
//clear ___nl__int__46;
#line 634
//clear ___nl__int__47;
#line 634
//clear ___nl__bool__48;
#line 634
c_rt_lib0clear(&___nl__im__49);
#line 634
c_rt_lib0clear(&___nl__im__101);
#line 634
return NULL;

}

bool  generator_c_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
bool  ___nl__bool__31 = false;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
bool  ___nl__bool__36 = false;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
#line 638
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 638
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 638
c_rt_lib0clear(&___nl__im__3);
#line 638
___nl__int__4 = 0;
#line 638
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 638
//clear ___nl__int__2;
#line 638
//clear ___nl__int__4;
#line 638
if(___nl__bool__1){ goto label_12;}
#line 638
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(429)));
#line 638
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(145));
#line 638
c_rt_lib0clear(&___nl__im__5);
#line 638
___nl__bool__1 = !___nl__bool__1;
#line 638
label_12:
;
#line 638
___nl__bool__1 = !___nl__bool__1;
#line 638
if(___nl__bool__1){ goto label_20;}
#line 638
___nl__bool__6 = false;
#line 638
c_rt_lib0clear(&___nl__im__0);
#line 638
//clear ___nl__bool__1;
#line 638
return ___nl__bool__6;
#line 638
goto label_20;
#line 638
label_20:
;
#line 638
//clear ___nl__bool__1;
#line 638
//clear ___nl__bool__6;
#line 639
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(247)));
#line 639
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(210));
#line 639
c_rt_lib0clear(&___nl__im__8);
#line 640
___nl__bool__9 = false;
#line 641
___nl__int__10 = 1;
#line 641
___nl__int__10 = -___nl__int__10;
#line 642
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 642
___nl__int__13 = 0;
#line 642
___nl__int__14 = 1;
#line 642
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 642
label_33:
;
#line 642
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 642
if(___nl__bool__16){ goto label_235;}
#line 642
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 642
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 643
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(224)));
#line 644
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(225));
#line 644
___nl__bool__19 = !___nl__bool__19;
#line 644
if(___nl__bool__19){ goto label_82;}
#line 645
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(225)));
#line 646
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(226)));
#line 646
c_rt_lib0move(&___nl__im__23,___get_global_string_const(551));
#line 646
___nl__bool__21 = c_rt_lib0eq(___nl__im__22, ___nl__im__23);
#line 646
c_rt_lib0clear(&___nl__im__22);
#line 646
c_rt_lib0clear(&___nl__im__23);
#line 646
___nl__bool__21 = !___nl__bool__21;
#line 646
___nl__bool__21 = !___nl__bool__21;
#line 646
if(___nl__bool__21){ goto label_57;}
#line 646
c_rt_lib0clear(&___nl__im__18);
#line 646
//clear ___nl__bool__19;
#line 646
c_rt_lib0clear(&___nl__im__20);
#line 646
//clear ___nl__bool__21;
#line 646
goto label_232;
#line 646
goto label_57;
#line 646
label_57:
;
#line 646
//clear ___nl__bool__21;
#line 647
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(111)));
#line 647
c_rt_lib0move(&___nl__im__26,___get_global_string_const(421));
#line 647
___nl__bool__24 = c_rt_lib0eq(___nl__im__25, ___nl__im__26);
#line 647
c_rt_lib0clear(&___nl__im__25);
#line 647
c_rt_lib0clear(&___nl__im__26);
#line 647
___nl__bool__24 = !___nl__bool__24;
#line 647
___nl__bool__24 = !___nl__bool__24;
#line 647
if(___nl__bool__24){ goto label_73;}
#line 647
c_rt_lib0clear(&___nl__im__18);
#line 647
//clear ___nl__bool__19;
#line 647
c_rt_lib0clear(&___nl__im__20);
#line 647
//clear ___nl__bool__24;
#line 647
goto label_232;
#line 647
goto label_73;
#line 647
label_73:
;
#line 647
//clear ___nl__bool__24;
#line 648
___nl__bool__9 = true;
#line 649
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(244)));
#line 649
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(240)));
#line 649
___nl__int__10 = getIntFromImm(___nl__im__28);
#line 649
c_rt_lib0clear(&___nl__im__27);
#line 649
c_rt_lib0clear(&___nl__im__28);
#line 650
goto label_226;
#line 650
label_82:
;
#line 650
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(266));
#line 650
___nl__bool__19 = !___nl__bool__19;
#line 650
if(___nl__bool__19){ goto label_188;}
#line 651
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(266)));
#line 652
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__29, ___get_global_string_const(245));
#line 652
___nl__bool__30 = !___nl__bool__30;
#line 652
___nl__bool__30 = !___nl__bool__30;
#line 652
if(___nl__bool__30){ goto label_110;}
#line 652
___nl__bool__31 = false;
#line 652
c_rt_lib0clear(&___nl__im__0);
#line 652
//clear ___nl__bool__7;
#line 652
//clear ___nl__bool__9;
#line 652
//clear ___nl__int__10;
#line 652
c_rt_lib0clear(&___nl__im__11);
#line 652
c_rt_lib0clear(&___nl__im__12);
#line 652
//clear ___nl__int__13;
#line 652
//clear ___nl__int__14;
#line 652
//clear ___nl__int__15;
#line 652
//clear ___nl__bool__16;
#line 652
c_rt_lib0clear(&___nl__im__17);
#line 652
c_rt_lib0clear(&___nl__im__18);
#line 652
//clear ___nl__bool__19;
#line 652
c_rt_lib0clear(&___nl__im__20);
#line 652
c_rt_lib0clear(&___nl__im__29);
#line 652
//clear ___nl__bool__30;
#line 652
return ___nl__bool__31;
#line 652
goto label_110;
#line 652
label_110:
;
#line 652
//clear ___nl__bool__30;
#line 652
//clear ___nl__bool__31;
#line 653
___nl__bool__32 = ___nl__bool__7;
#line 653
___nl__bool__32 = !___nl__bool__32;
#line 653
if(___nl__bool__32){ goto label_135;}
#line 653
___nl__bool__33 = true;
#line 653
c_rt_lib0clear(&___nl__im__0);
#line 653
//clear ___nl__bool__7;
#line 653
//clear ___nl__bool__9;
#line 653
//clear ___nl__int__10;
#line 653
c_rt_lib0clear(&___nl__im__11);
#line 653
c_rt_lib0clear(&___nl__im__12);
#line 653
//clear ___nl__int__13;
#line 653
//clear ___nl__int__14;
#line 653
//clear ___nl__int__15;
#line 653
//clear ___nl__bool__16;
#line 653
c_rt_lib0clear(&___nl__im__17);
#line 653
c_rt_lib0clear(&___nl__im__18);
#line 653
//clear ___nl__bool__19;
#line 653
c_rt_lib0clear(&___nl__im__20);
#line 653
c_rt_lib0clear(&___nl__im__29);
#line 653
//clear ___nl__bool__32;
#line 653
return ___nl__bool__33;
#line 653
goto label_135;
#line 653
label_135:
;
#line 653
//clear ___nl__bool__32;
#line 653
//clear ___nl__bool__33;
#line 654
___nl__bool__34 = ___nl__bool__9;
#line 654
___nl__bool__34 = !___nl__bool__34;
#line 654
___nl__bool__34 = !___nl__bool__34;
#line 654
if(___nl__bool__34){ goto label_161;}
#line 654
___nl__bool__35 = false;
#line 654
c_rt_lib0clear(&___nl__im__0);
#line 654
//clear ___nl__bool__7;
#line 654
//clear ___nl__bool__9;
#line 654
//clear ___nl__int__10;
#line 654
c_rt_lib0clear(&___nl__im__11);
#line 654
c_rt_lib0clear(&___nl__im__12);
#line 654
//clear ___nl__int__13;
#line 654
//clear ___nl__int__14;
#line 654
//clear ___nl__int__15;
#line 654
//clear ___nl__bool__16;
#line 654
c_rt_lib0clear(&___nl__im__17);
#line 654
c_rt_lib0clear(&___nl__im__18);
#line 654
//clear ___nl__bool__19;
#line 654
c_rt_lib0clear(&___nl__im__20);
#line 654
c_rt_lib0clear(&___nl__im__29);
#line 654
//clear ___nl__bool__34;
#line 654
return ___nl__bool__35;
#line 654
goto label_161;
#line 654
label_161:
;
#line 654
//clear ___nl__bool__34;
#line 654
//clear ___nl__bool__35;
#line 655
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__29, ___get_global_string_const(245)));
#line 655
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(240)));
#line 655
___nl__int__37 = getIntFromImm(___nl__im__39);
#line 655
c_rt_lib0clear(&___nl__im__38);
#line 655
c_rt_lib0clear(&___nl__im__39);
#line 655
___nl__bool__36 = ___nl__int__37 == ___nl__int__10;
#line 655
//clear ___nl__int__37;
#line 655
c_rt_lib0clear(&___nl__im__0);
#line 655
//clear ___nl__bool__7;
#line 655
//clear ___nl__bool__9;
#line 655
//clear ___nl__int__10;
#line 655
c_rt_lib0clear(&___nl__im__11);
#line 655
c_rt_lib0clear(&___nl__im__12);
#line 655
//clear ___nl__int__13;
#line 655
//clear ___nl__int__14;
#line 655
//clear ___nl__int__15;
#line 655
//clear ___nl__bool__16;
#line 655
c_rt_lib0clear(&___nl__im__17);
#line 655
c_rt_lib0clear(&___nl__im__18);
#line 655
//clear ___nl__bool__19;
#line 655
c_rt_lib0clear(&___nl__im__20);
#line 655
c_rt_lib0clear(&___nl__im__29);
#line 655
return ___nl__bool__36;
#line 656
goto label_226;
#line 656
label_188:
;
#line 656
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(268));
#line 656
___nl__bool__19 = !___nl__bool__19;
#line 656
if(___nl__bool__19){ goto label_193;}
#line 657
goto label_226;
#line 657
label_193:
;
#line 657
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(271));
#line 657
___nl__bool__19 = !___nl__bool__19;
#line 657
if(___nl__bool__19){ goto label_198;}
#line 658
goto label_226;
#line 658
label_198:
;
#line 659
___nl__bool__40 = ___nl__bool__9;
#line 659
___nl__bool__40 = !___nl__bool__40;
#line 659
if(___nl__bool__40){ goto label_222;}
#line 659
___nl__bool__41 = false;
#line 659
c_rt_lib0clear(&___nl__im__0);
#line 659
//clear ___nl__bool__7;
#line 659
//clear ___nl__bool__9;
#line 659
//clear ___nl__int__10;
#line 659
c_rt_lib0clear(&___nl__im__11);
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
//clear ___nl__int__13;
#line 659
//clear ___nl__int__14;
#line 659
//clear ___nl__int__15;
#line 659
//clear ___nl__bool__16;
#line 659
c_rt_lib0clear(&___nl__im__17);
#line 659
c_rt_lib0clear(&___nl__im__18);
#line 659
//clear ___nl__bool__19;
#line 659
c_rt_lib0clear(&___nl__im__20);
#line 659
c_rt_lib0clear(&___nl__im__29);
#line 659
//clear ___nl__bool__36;
#line 659
//clear ___nl__bool__40;
#line 659
return ___nl__bool__41;
#line 659
goto label_222;
#line 659
label_222:
;
#line 659
//clear ___nl__bool__40;
#line 659
//clear ___nl__bool__41;
#line 660
goto label_226;
#line 660
label_226:
;
#line 660
//clear ___nl__bool__19;
#line 660
c_rt_lib0clear(&___nl__im__20);
#line 660
c_rt_lib0clear(&___nl__im__29);
#line 660
//clear ___nl__bool__36;
#line 660
c_rt_lib0clear(&___nl__im__12);
#line 660
label_232:
;
#line 661
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 661
goto label_33;
#line 661
label_235:
;
#line 662
___nl__bool__42 = false;
#line 662
c_rt_lib0clear(&___nl__im__0);
#line 662
//clear ___nl__bool__7;
#line 662
//clear ___nl__bool__9;
#line 662
//clear ___nl__int__10;
#line 662
c_rt_lib0clear(&___nl__im__11);
#line 662
c_rt_lib0clear(&___nl__im__12);
#line 662
//clear ___nl__int__13;
#line 662
//clear ___nl__int__14;
#line 662
//clear ___nl__int__15;
#line 662
//clear ___nl__bool__16;
#line 662
c_rt_lib0clear(&___nl__im__17);
#line 662
c_rt_lib0clear(&___nl__im__18);
#line 662
return ___nl__bool__42;
return false;

}

ImmT  generator_c_priv0move_args_to_register(generator_c0state_t0type* ___ref___rec__0) {
generator_c_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT * ___nl__im_ptr__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT * ___nl__im_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 666
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 666
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 666
___nl__im_ptr__3 = NULL;
#line 666
___nl__int__1 = c_rt_lib0array_len(___nl__im__2);
#line 666
c_rt_lib0clear(&___nl__im__2);
#line 666
___nl__int__4 = 0;
#line 666
___nl__int__5 = 1;
#line 666
label_7:
;
#line 666
___nl__bool__6 = ___nl__int__4 >= ___nl__int__1;
#line 666
if(___nl__bool__6){ goto label_70;}
#line 667
___nl__im_ptr__10 = &((*___ref___rec__0).fun_args0field);
#line 667
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 667
___nl__im_ptr__10 = NULL;
#line 667
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__9, ___nl__int__4));
#line 667
c_rt_lib0clear(&___nl__im__9);
#line 667
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(369)));
#line 667
c_rt_lib0clear(&___nl__im__8);
#line 667
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(245));
#line 667
if(___nl__bool__11){ goto label_24;}
#line 672
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(39));
#line 672
if(___nl__bool__11){ goto label_62;}
#line 672
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 672
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__7));
#line 672
nl_die_arg(___nl__im__12);
#line 667
label_24:
;
#line 668
___nl__im_ptr__18 = &((*___ref___rec__0).fun_args0field);
#line 668
c_rt_lib0copy(&___nl__im__17, (*___nl__im_ptr__18));
#line 668
___nl__im_ptr__18 = NULL;
#line 668
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__17, ___nl__int__4));
#line 668
c_rt_lib0clear(&___nl__im__17);
#line 668
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(482)));
#line 668
c_rt_lib0clear(&___nl__im__16);
#line 668
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(110)));
#line 668
c_rt_lib0clear(&___nl__im__15);
#line 668
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(145));
#line 668
c_rt_lib0clear(&___nl__im__14);
#line 668
___nl__bool__13 = !___nl__bool__13;
#line 668
if(___nl__bool__13){ goto label_59;}
#line 669
c_rt_lib0move(&___nl__im__20,___get_global_string_const(552));
#line 669
___nl__im_ptr__26 = &((*___ref___rec__0).fun_args0field);
#line 669
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 669
___nl__im_ptr__26 = NULL;
#line 669
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__25, ___nl__int__4));
#line 669
c_rt_lib0clear(&___nl__im__25);
#line 669
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(482)));
#line 669
c_rt_lib0clear(&___nl__im__24);
#line 669
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__23));
#line 669
c_rt_lib0clear(&___nl__im__23);
#line 669
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(1, ___nl__im__22));
#line 669
c_rt_lib0clear(&___nl__im__22);
#line 669
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_fun_lib(___nl__im__20, ___nl__im__21));
#line 669
c_rt_lib0clear(&___nl__im__20);
#line 669
c_rt_lib0clear(&___nl__im__21);
#line 669
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 669
c_rt_lib0clear(&___nl__im__19);
#line 670
c_rt_lib0move(&___nl__im__27,___get_global_string_const(454));
#line 670
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__27));
#line 670
c_rt_lib0clear(&___nl__im__27);
#line 671
goto label_59;
#line 671
label_59:
;
#line 671
//clear ___nl__bool__13;
#line 672
goto label_64;
#line 672
label_62:
;
#line 673
goto label_64;
#line 673
label_64:
;
#line 673
c_rt_lib0clear(&___nl__im__7);
#line 673
//clear ___nl__bool__11;
#line 673
c_rt_lib0clear(&___nl__im__12);
#line 674
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 674
goto label_7;
#line 674
label_70:
;
#line 674
//clear ___nl__int__1;
#line 674
//clear ___nl__int__4;
#line 674
//clear ___nl__int__5;
#line 674
//clear ___nl__bool__6;
#line 674
c_rt_lib0clear(&___nl__im__7);
#line 674
//clear ___nl__bool__11;
#line 674
c_rt_lib0clear(&___nl__im__12);
#line 674
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_fun_lib(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 678
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_lib_fun(___nl__im__0));
#line 678
c_rt_lib0move(&___nl__im__4,___get_global_string_const(469));
#line 678
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 678
c_rt_lib0clear(&___nl__im__3);
#line 678
c_rt_lib0clear(&___nl__im__4);
#line 679
___nl__int__5 = 0;
#line 680
___nl__int__7 = 0;
#line 680
___nl__int__8 = 1;
#line 680
___nl__int__9 = c_rt_lib0array_len(___nl__im__1);
#line 680
label_9:
;
#line 680
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 680
if(___nl__bool__10){ goto label_33;}
#line 680
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__7));
#line 680
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 681
___nl__int__13 = 0;
#line 681
___nl__bool__12 = ___nl__int__13 == ___nl__int__5;
#line 681
//clear ___nl__int__13;
#line 681
___nl__bool__12 = !___nl__bool__12;
#line 681
___nl__bool__12 = !___nl__bool__12;
#line 681
if(___nl__bool__12){ goto label_24;}
#line 681
c_rt_lib0move(&___nl__im__14,___get_global_string_const(343));
#line 681
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 681
c_rt_lib0clear(&___nl__im__14);
#line 681
goto label_24;
#line 681
label_24:
;
#line 681
//clear ___nl__bool__12;
#line 682
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__6));
#line 683
___nl__int__15 = 1;
#line 683
___nl__int__5 = ___nl__int__5 + ___nl__int__15;
#line 683
//clear ___nl__int__15;
#line 683
c_rt_lib0clear(&___nl__im__6);
#line 684
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 684
goto label_9;
#line 684
label_33:
;
#line 685
c_rt_lib0move(&___nl__im__17,___get_global_string_const(336));
#line 685
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 685
c_rt_lib0clear(&___nl__im__17);
#line 685
c_rt_lib0clear(&___nl__im__0);
#line 685
c_rt_lib0clear(&___nl__im__1);
#line 685
c_rt_lib0clear(&___nl__im__2);
#line 685
//clear ___nl__int__5;
#line 685
c_rt_lib0clear(&___nl__im__6);
#line 685
//clear ___nl__int__7;
#line 685
//clear ___nl__int__8;
#line 685
//clear ___nl__int__9;
#line 685
//clear ___nl__bool__10;
#line 685
c_rt_lib0clear(&___nl__im__11);
#line 685
return ___nl__im__16;
return NULL;

}

ImmT  generator_c_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 689
c_rt_lib0move(&___nl__im__2,___get_global_string_const(20));
#line 689
c_rt_lib0move(&___nl__im__3,___get_global_string_const(553));
#line 689
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__0, ___nl__im__2, ___nl__im__3));
#line 689
c_rt_lib0clear(&___nl__im__2);
#line 689
c_rt_lib0clear(&___nl__im__3);
#line 689
c_rt_lib0clear(&___nl__im__0);
#line 689
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
#line 693
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 693
___nl__bool__3 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 693
c_rt_lib0clear(&___nl__im__4);
#line 693
___nl__bool__3 = !___nl__bool__3;
#line 693
if(___nl__bool__3){ goto label_9;}
#line 693
c_rt_lib0move(&___nl__im__5,___get_global_string_const(285));
#line 693
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 693
c_rt_lib0clear(&___nl__im__5);
#line 693
goto label_9;
#line 693
label_9:
;
#line 693
//clear ___nl__bool__3;
#line 694
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_module_name(___nl__im__0));
#line 694
c_rt_lib0move(&___nl__im__9,___get_global_string_const(20));
#line 694
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 694
c_rt_lib0clear(&___nl__im__8);
#line 694
c_rt_lib0clear(&___nl__im__9);
#line 694
c_rt_lib0move(&___nl__im__11,___get_global_string_const(20));
#line 694
c_rt_lib0move(&___nl__im__12,___get_global_string_const(553));
#line 694
c_rt_lib0move(&___nl__im__10, string0replace(___nl__im__1, ___nl__im__11, ___nl__im__12));
#line 694
c_rt_lib0clear(&___nl__im__11);
#line 694
c_rt_lib0clear(&___nl__im__12);
#line 694
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 694
c_rt_lib0clear(&___nl__im__7);
#line 694
c_rt_lib0clear(&___nl__im__10);
#line 694
c_rt_lib0clear(&___nl__im__0);
#line 694
c_rt_lib0clear(&___nl__im__1);
#line 694
c_rt_lib0clear(&___nl__im__2);
#line 694
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_lib_fun(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 698
c_rt_lib0move(&___nl__im__2,___get_global_string_const(286));
#line 698
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 698
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_fun_name(___nl__im__2, ___nl__im__0, ___nl__im__3));
#line 698
c_rt_lib0clear(&___nl__im__2);
#line 698
c_rt_lib0clear(&___nl__im__3);
#line 698
c_rt_lib0clear(&___nl__im__0);
#line 698
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0generate_imm(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
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
INT  ___nl__int__23 = 0;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
bool  ___nl__bool__48 = false;
bool  ___nl__bool__49 = false;
bool  ___nl__bool__50 = false;
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
bool  ___nl__bool__57 = false;
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
ImmT  ___nl__im__80 = NULL;
INT  ___nl__int__81 = 0;
ImmT  ___nl__im__82 = NULL;
#line 702
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 702
___nl__bool__2 = !___nl__bool__2;
#line 702
if(___nl__bool__2){ goto label_41;}
#line 703
c_rt_lib0move(&___nl__im__6,___get_global_string_const(554));
#line 703
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_lib_fun(___nl__im__6));
#line 703
c_rt_lib0clear(&___nl__im__6);
#line 703
c_rt_lib0move(&___nl__im__7,___get_global_string_const(469));
#line 703
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 703
c_rt_lib0clear(&___nl__im__5);
#line 703
c_rt_lib0clear(&___nl__im__7);
#line 703
___nl__int__8 = hash0size(___nl__im__1);
#line 703
c_rt_lib0move(&___nl__string__9, c_rt_lib0int_to_string(___nl__int__8));
#line 703
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__string__9));
#line 703
c_rt_lib0clear(&___nl__im__4);
#line 703
//clear ___nl__int__8;
#line 703
c_rt_lib0clear(&___nl__string__9);
#line 703
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__3));
#line 703
c_rt_lib0clear(&___nl__im__3);
#line 704
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 704
label_19:
;
#line 704
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 704
if(___nl__bool__11){ goto label_36;}
#line 704
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 704
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 705
c_rt_lib0move(&___nl__im__14,___get_global_string_const(343));
#line 705
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__14));
#line 705
c_rt_lib0clear(&___nl__im__14);
#line 706
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__10));
#line 706
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__15));
#line 706
c_rt_lib0clear(&___nl__im__15);
#line 707
c_rt_lib0move(&___nl__im__16,___get_global_string_const(343));
#line 707
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__16));
#line 707
c_rt_lib0clear(&___nl__im__16);
#line 708
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__12));
#line 709
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 709
goto label_19;
#line 709
label_36:
;
#line 710
c_rt_lib0move(&___nl__im__17,___get_global_string_const(336));
#line 710
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__17));
#line 710
c_rt_lib0clear(&___nl__im__17);
#line 711
goto label_237;
#line 711
label_41:
;
#line 711
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 711
___nl__bool__2 = !___nl__bool__2;
#line 711
if(___nl__bool__2){ goto label_80;}
#line 712
c_rt_lib0move(&___nl__im__21,___get_global_string_const(555));
#line 712
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_lib_fun(___nl__im__21));
#line 712
c_rt_lib0clear(&___nl__im__21);
#line 712
c_rt_lib0move(&___nl__im__22,___get_global_string_const(469));
#line 712
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 712
c_rt_lib0clear(&___nl__im__20);
#line 712
c_rt_lib0clear(&___nl__im__22);
#line 712
___nl__int__23 = c_rt_lib0array_len(___nl__im__1);
#line 712
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__23));
#line 712
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__24));
#line 712
c_rt_lib0clear(&___nl__im__19);
#line 712
//clear ___nl__int__23;
#line 712
c_rt_lib0clear(&___nl__string__24);
#line 712
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__18));
#line 712
c_rt_lib0clear(&___nl__im__18);
#line 713
___nl__int__26 = 0;
#line 713
___nl__int__27 = 1;
#line 713
___nl__int__28 = c_rt_lib0array_len(___nl__im__1);
#line 713
label_63:
;
#line 713
___nl__bool__29 = ___nl__int__26 >= ___nl__int__28;
#line 713
if(___nl__bool__29){ goto label_75;}
#line 713
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__1, ___nl__int__26));
#line 713
c_rt_lib0copy(&___nl__im__25, ___nl__im__30);
#line 714
c_rt_lib0move(&___nl__im__31,___get_global_string_const(343));
#line 714
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__31));
#line 714
c_rt_lib0clear(&___nl__im__31);
#line 715
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__25));
#line 715
c_rt_lib0clear(&___nl__im__25);
#line 716
___nl__int__26 = ___nl__int__26 + ___nl__int__27;
#line 716
goto label_63;
#line 716
label_75:
;
#line 717
c_rt_lib0move(&___nl__im__32,___get_global_string_const(336));
#line 717
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__32));
#line 717
c_rt_lib0clear(&___nl__im__32);
#line 718
goto label_237;
#line 718
label_80:
;
#line 718
___nl__bool__2 = nl0is_variant(___nl__im__1);
#line 718
___nl__bool__2 = !___nl__bool__2;
#line 718
if(___nl__bool__2){ goto label_207;}
#line 720
c_rt_lib0move(&___nl__im__35, ptd0string());
#line 720
c_rt_lib0move(&___nl__im__36, ov0get_element(___nl__im__1));
#line 720
c_rt_lib0move(&___nl__im__34, ptd0ensure(___nl__im__35, ___nl__im__36));
#line 720
c_rt_lib0clear(&___nl__im__35);
#line 720
c_rt_lib0clear(&___nl__im__36);
#line 720
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__34));
#line 720
c_rt_lib0clear(&___nl__im__34);
#line 721
c_rt_lib0move(&___nl__im__38, ov0has_value(___nl__im__1));
#line 721
___nl__bool__37 = c_rt_lib0check_true_native(___nl__im__38);
#line 721
c_rt_lib0clear(&___nl__im__38);
#line 721
___nl__bool__37 = !___nl__bool__37;
#line 721
if(___nl__bool__37){ goto label_186;}
#line 722
c_rt_lib0move(&___nl__im__43,___get_global_string_const(556));
#line 722
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_lib_fun(___nl__im__43));
#line 722
c_rt_lib0clear(&___nl__im__43);
#line 722
c_rt_lib0move(&___nl__im__44,___get_global_string_const(469));
#line 722
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__44));
#line 722
c_rt_lib0clear(&___nl__im__42);
#line 722
c_rt_lib0clear(&___nl__im__44);
#line 722
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__33));
#line 722
c_rt_lib0clear(&___nl__im__41);
#line 722
c_rt_lib0move(&___nl__im__45,___get_global_string_const(343));
#line 722
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__45));
#line 722
c_rt_lib0clear(&___nl__im__40);
#line 722
c_rt_lib0clear(&___nl__im__45);
#line 722
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__39));
#line 722
c_rt_lib0clear(&___nl__im__39);
#line 724
c_rt_lib0move(&___nl__im__46, ov0get_value(___nl__im__1));
#line 725
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(39));
#line 725
___nl__bool__51 = !___nl__bool__47;
#line 725
if(___nl__bool__51){ goto label_116;}
#line 725
___nl__bool__47 = nl0is_hash(___nl__im__46);
#line 725
label_116:
;
#line 725
//clear ___nl__bool__51;
#line 725
___nl__bool__50 = !___nl__bool__47;
#line 725
if(___nl__bool__50){ goto label_125;}
#line 725
___nl__int__52 = hash0size(___nl__im__46);
#line 725
___nl__int__53 = 2;
#line 725
___nl__bool__47 = ___nl__int__52 == ___nl__int__53;
#line 725
//clear ___nl__int__52;
#line 725
//clear ___nl__int__53;
#line 725
label_125:
;
#line 725
//clear ___nl__bool__50;
#line 725
___nl__bool__49 = !___nl__bool__47;
#line 725
if(___nl__bool__49){ goto label_132;}
#line 725
c_rt_lib0move(&___nl__im__54,___get_global_string_const(181));
#line 725
___nl__bool__47 = hash0has_key(___nl__im__46, ___nl__im__54);
#line 725
c_rt_lib0clear(&___nl__im__54);
#line 725
label_132:
;
#line 725
//clear ___nl__bool__49;
#line 725
___nl__bool__48 = !___nl__bool__47;
#line 725
if(___nl__bool__48){ goto label_139;}
#line 725
c_rt_lib0move(&___nl__im__55,___get_global_string_const(165));
#line 725
___nl__bool__47 = hash0has_key(___nl__im__46, ___nl__im__55);
#line 725
c_rt_lib0clear(&___nl__im__55);
#line 725
label_139:
;
#line 725
//clear ___nl__bool__48;
#line 725
___nl__bool__47 = !___nl__bool__47;
#line 725
if(___nl__bool__47){ goto label_177;}
#line 726
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(181)));
#line 726
___nl__bool__56 = nl0is_string(___nl__im__58);
#line 726
c_rt_lib0clear(&___nl__im__58);
#line 726
___nl__bool__57 = !___nl__bool__56;
#line 726
if(___nl__bool__57){ goto label_151;}
#line 726
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(165)));
#line 726
___nl__bool__56 = nl0is_string(___nl__im__59);
#line 726
c_rt_lib0clear(&___nl__im__59);
#line 726
label_151:
;
#line 726
//clear ___nl__bool__57;
#line 726
___nl__bool__56 = !___nl__bool__56;
#line 726
if(___nl__bool__56){ goto label_171;}
#line 727
c_rt_lib0move(&___nl__im__62, ptd0string());
#line 727
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(165)));
#line 727
c_rt_lib0move(&___nl__im__61, ptd0ensure(___nl__im__62, ___nl__im__63));
#line 727
c_rt_lib0clear(&___nl__im__62);
#line 727
c_rt_lib0clear(&___nl__im__63);
#line 727
c_rt_lib0move(&___nl__im__65, ptd0string());
#line 727
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(181)));
#line 727
c_rt_lib0move(&___nl__im__64, ptd0ensure(___nl__im__65, ___nl__im__66));
#line 727
c_rt_lib0clear(&___nl__im__65);
#line 727
c_rt_lib0clear(&___nl__im__66);
#line 727
c_rt_lib0move(&___nl__im__60, generator_c_priv0get_func_pointer(___ref___rec__0, ___nl__im__61, ___nl__im__64));
#line 727
c_rt_lib0clear(&___nl__im__61);
#line 727
c_rt_lib0clear(&___nl__im__64);
#line 727
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__60));
#line 727
c_rt_lib0clear(&___nl__im__60);
#line 728
goto label_174;
#line 728
label_171:
;
#line 729
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__46));
#line 730
goto label_174;
#line 730
label_174:
;
#line 730
//clear ___nl__bool__56;
#line 731
goto label_180;
#line 731
label_177:
;
#line 732
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__46));
#line 733
goto label_180;
#line 733
label_180:
;
#line 733
//clear ___nl__bool__47;
#line 735
c_rt_lib0move(&___nl__im__67,___get_global_string_const(336));
#line 735
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__67));
#line 735
c_rt_lib0clear(&___nl__im__67);
#line 736
goto label_203;
#line 736
label_186:
;
#line 737
c_rt_lib0move(&___nl__im__72,___get_global_string_const(557));
#line 737
c_rt_lib0move(&___nl__im__71, generator_c_priv0get_lib_fun(___nl__im__72));
#line 737
c_rt_lib0clear(&___nl__im__72);
#line 737
c_rt_lib0move(&___nl__im__73,___get_global_string_const(469));
#line 737
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 737
c_rt_lib0clear(&___nl__im__71);
#line 737
c_rt_lib0clear(&___nl__im__73);
#line 737
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__33));
#line 737
c_rt_lib0clear(&___nl__im__70);
#line 737
c_rt_lib0move(&___nl__im__74,___get_global_string_const(336));
#line 737
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 737
c_rt_lib0clear(&___nl__im__69);
#line 737
c_rt_lib0clear(&___nl__im__74);
#line 737
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__68));
#line 737
c_rt_lib0clear(&___nl__im__68);
#line 738
goto label_203;
#line 738
label_203:
;
#line 738
//clear ___nl__bool__37;
#line 738
c_rt_lib0clear(&___nl__im__46);
#line 739
goto label_237;
#line 739
label_207:
;
#line 739
___nl__bool__2 = nl0is_string(___nl__im__1);
#line 739
___nl__bool__2 = !___nl__bool__2;
#line 739
if(___nl__bool__2){ goto label_219;}
#line 740
c_rt_lib0move(&___nl__im__77, ptd0string());
#line 740
c_rt_lib0move(&___nl__im__76, ptd0ensure(___nl__im__77, ___nl__im__1));
#line 740
c_rt_lib0clear(&___nl__im__77);
#line 740
c_rt_lib0move(&___nl__im__75, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__76));
#line 740
c_rt_lib0clear(&___nl__im__76);
#line 740
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__75));
#line 740
c_rt_lib0clear(&___nl__im__75);
#line 741
goto label_237;
#line 741
label_219:
;
#line 741
___nl__bool__2 = nl0is_int(___nl__im__1);
#line 741
___nl__bool__2 = !___nl__bool__2;
#line 741
if(___nl__bool__2){ goto label_233;}
#line 742
c_rt_lib0move(&___nl__im__80, ptd0int());
#line 742
c_rt_lib0move(&___nl__im__79, ptd0ensure(___nl__im__80, ___nl__im__1));
#line 742
c_rt_lib0clear(&___nl__im__80);
#line 742
___nl__int__81 = getIntFromImm(___nl__im__79);
#line 742
c_rt_lib0move(&___nl__im__78, generator_c_priv0get_const_int(___ref___rec__0, ___nl__int__81));
#line 742
c_rt_lib0clear(&___nl__im__79);
#line 742
//clear ___nl__int__81;
#line 742
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__78));
#line 742
c_rt_lib0clear(&___nl__im__78);
#line 743
goto label_237;
#line 743
label_233:
;
#line 744
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 744
nl_die_arg(___nl__im__82);
#line 745
goto label_237;
#line 745
label_237:
;
#line 745
//clear ___nl__bool__2;
#line 745
c_rt_lib0clear(&___nl__im__10);
#line 745
//clear ___nl__bool__11;
#line 745
c_rt_lib0clear(&___nl__im__12);
#line 745
c_rt_lib0clear(&___nl__im__13);
#line 745
c_rt_lib0clear(&___nl__im__25);
#line 745
//clear ___nl__int__26;
#line 745
//clear ___nl__int__27;
#line 745
//clear ___nl__int__28;
#line 745
//clear ___nl__bool__29;
#line 745
c_rt_lib0clear(&___nl__im__30);
#line 745
c_rt_lib0clear(&___nl__im__33);
#line 745
c_rt_lib0clear(&___nl__im__82);
#line 745
c_rt_lib0clear(&___nl__im__1);
#line 745
return NULL;

}

ImmT  generator_c_priv0get_func_pointer(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
bool  ___nl__bool__3 = false;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__4 = NULL;
bool * ___nl__bool_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 750
___nl__bool__3 = true;
#line 750
___nl__hash_ptr__4 = &((*___ref___rec__0).additional_imports0field);
#line 750
___nl__bool_ptr__5 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(___nl__hash_ptr__4, ___nl__im__1, true);
#line 750
(*___nl__bool_ptr__5) = ___nl__bool__3;
#line 750
___nl__bool_ptr__5 = NULL;
#line 750
___nl__hash_ptr__4 = NULL;
#line 750
//clear ___nl__bool__3;
#line 751
c_rt_lib0move(&___nl__im__7,___get_global_string_const(558));
#line 752
___nl__im_ptr__12 = &((*___ref___rec__0).mod_name0field);
#line 752
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 752
___nl__im_ptr__12 = NULL;
#line 752
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_fun_name(___nl__im__1, ___nl__im__2, ___nl__im__11));
#line 752
c_rt_lib0clear(&___nl__im__11);
#line 752
c_rt_lib0move(&___nl__im__13,___get_global_string_const(559));
#line 752
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 752
c_rt_lib0clear(&___nl__im__10);
#line 752
c_rt_lib0clear(&___nl__im__13);
#line 753
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__1));
#line 754
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__2));
#line 754
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__14, ___nl__im__15));
#line 754
c_rt_lib0clear(&___nl__im__9);
#line 754
c_rt_lib0clear(&___nl__im__14);
#line 754
c_rt_lib0clear(&___nl__im__15);
#line 754
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__7, ___nl__im__8));
#line 754
c_rt_lib0clear(&___nl__im__7);
#line 754
c_rt_lib0clear(&___nl__im__8);
#line 754
c_rt_lib0clear(&___nl__im__1);
#line 754
c_rt_lib0clear(&___nl__im__2);
#line 754
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0print_cmd(generator_c0state_t0type* ___ref___rec__0,nlasm0cmd_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
bool  ___nl__bool__31 = false;
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
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT * ___nl__im_ptr__47 = NULL;
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
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
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
ImmT * ___nl__im_ptr__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
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
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
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
ImmT  ___nl__im__143 = NULL;
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
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
INT  ___nl__int__178 = 0;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__string__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
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
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__im__212 = NULL;
bool  ___nl__bool__213 = false;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
bool  ___nl__bool__229 = false;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT * ___nl__im_ptr__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
bool  ___nl__bool__252 = false;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
bool  ___nl__bool__257 = false;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__im__271 = NULL;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
ImmT  ___nl__im__276 = NULL;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
ImmT  ___nl__im__280 = NULL;
ImmT  ___nl__im__281 = NULL;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
ImmT  ___nl__im__287 = NULL;
ImmT  ___nl__im__288 = NULL;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
ImmT  ___nl__im__293 = NULL;
bool  ___nl__bool__294 = false;
ImmT  ___nl__im__295 = NULL;
ImmT  ___nl__im__296 = NULL;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
ImmT  ___nl__im__299 = NULL;
ImmT  ___nl__im__300 = NULL;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
ImmT  ___nl__im__303 = NULL;
ImmT  ___nl__im__304 = NULL;
ImmT  ___nl__im__305 = NULL;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__im__307 = NULL;
ImmT  ___nl__im__308 = NULL;
ImmT  ___nl__im__309 = NULL;
ImmT  ___nl__im__310 = NULL;
ImmT  ___nl__im__311 = NULL;
ImmT  ___nl__im__312 = NULL;
ImmT  ___nl__im__313 = NULL;
ImmT  ___nl__im__314 = NULL;
ImmT  ___nl__im__315 = NULL;
ImmT  ___nl__im__316 = NULL;
ImmT  ___nl__im__317 = NULL;
ImmT  ___nl__im__318 = NULL;
ImmT  ___nl__im__319 = NULL;
ImmT  ___nl__im__320 = NULL;
ImmT  ___nl__im__321 = NULL;
ImmT  ___nl__im__322 = NULL;
ImmT  ___nl__im__323 = NULL;
ImmT  ___nl__im__324 = NULL;
ImmT  ___nl__im__325 = NULL;
ImmT  ___nl__im__326 = NULL;
ImmT  ___nl__im__327 = NULL;
ImmT  ___nl__im__328 = NULL;
ImmT  ___nl__im__329 = NULL;
ImmT  ___nl__im__330 = NULL;
bool  ___nl__bool__331 = false;
ImmT  ___nl__im__332 = NULL;
ImmT  ___nl__im__333 = NULL;
ImmT  ___nl__im__334 = NULL;
ImmT  ___nl__im__335 = NULL;
ImmT  ___nl__im__336 = NULL;
ImmT  ___nl__im__337 = NULL;
ImmT  ___nl__im__338 = NULL;
ImmT  ___nl__im__339 = NULL;
ImmT  ___nl__im__340 = NULL;
ImmT  ___nl__im__341 = NULL;
ImmT  ___nl__im__342 = NULL;
ImmT  ___nl__im__343 = NULL;
ImmT  ___nl__im__344 = NULL;
ImmT  ___nl__im__345 = NULL;
ImmT  ___nl__im__346 = NULL;
ImmT * ___nl__im_ptr__347 = NULL;
bool  ___nl__bool__348 = false;
ImmT  ___nl__im__349 = NULL;
ImmT  ___nl__im__350 = NULL;
ImmT  ___nl__im__351 = NULL;
ImmT  ___nl__im__352 = NULL;
ImmT  ___nl__im__353 = NULL;
ImmT  ___nl__im__354 = NULL;
ImmT  ___nl__im__355 = NULL;
ImmT  ___nl__im__356 = NULL;
ImmT  ___nl__im__357 = NULL;
ImmT  ___nl__im__358 = NULL;
ImmT  ___nl__im__359 = NULL;
ImmT  ___nl__im__360 = NULL;
ImmT  ___nl__im__361 = NULL;
ImmT  ___nl__im__362 = NULL;
ImmT  ___nl__im__363 = NULL;
ImmT  ___nl__im__364 = NULL;
ImmT  ___nl__im__365 = NULL;
ImmT  ___nl__im__366 = NULL;
ImmT  ___nl__im__367 = NULL;
ImmT  ___nl__im__368 = NULL;
ImmT  ___nl__im__369 = NULL;
ImmT  ___nl__im__370 = NULL;
ImmT  ___nl__im__371 = NULL;
ImmT  ___nl__im__372 = NULL;
ImmT  ___nl__im__373 = NULL;
bool  ___nl__bool__374 = false;
ImmT  ___nl__im__375 = NULL;
ImmT  ___nl__im__376 = NULL;
ImmT  ___nl__im__377 = NULL;
ImmT  ___nl__im__378 = NULL;
ImmT  ___nl__im__379 = NULL;
ImmT  ___nl__im__380 = NULL;
ImmT  ___nl__im__381 = NULL;
ImmT  ___nl__im__382 = NULL;
bool  ___nl__bool__383 = false;
ImmT  ___nl__im__384 = NULL;
ImmT  ___nl__im__385 = NULL;
ImmT  ___nl__im__386 = NULL;
ImmT  ___nl__im__387 = NULL;
ImmT  ___nl__im__388 = NULL;
ImmT  ___nl__im__389 = NULL;
ImmT  ___nl__im__390 = NULL;
ImmT  ___nl__im__391 = NULL;
ImmT  ___nl__im__392 = NULL;
ImmT * ___nl__im_ptr__393 = NULL;
ImmT  ___nl__im__394 = NULL;
ImmT  ___nl__im__395 = NULL;
ImmT  ___nl__im__396 = NULL;
ImmT  ___nl__im__397 = NULL;
ImmT  ___nl__im__398 = NULL;
ImmT  ___nl__im__399 = NULL;
ImmT  ___nl__im__400 = NULL;
ImmT  ___nl__im__401 = NULL;
ImmT  ___nl__im__402 = NULL;
ImmT  ___nl__im__403 = NULL;
ImmT  ___nl__im__404 = NULL;
ImmT  ___nl__im__405 = NULL;
ImmT  ___nl__im__406 = NULL;
ImmT  ___nl__im__407 = NULL;
ImmT  ___nl__im__408 = NULL;
ImmT  ___nl__im__409 = NULL;
ImmT  ___nl__im__410 = NULL;
ImmT  ___nl__im__411 = NULL;
ImmT  ___nl__im__412 = NULL;
ImmT  ___nl__im__413 = NULL;
ImmT  ___nl__im__414 = NULL;
bool  ___nl__bool__415 = false;
ImmT  ___nl__im__416 = NULL;
ImmT  ___nl__im__417 = NULL;
ImmT  ___nl__im__418 = NULL;
ImmT  ___nl__im__419 = NULL;
ImmT  ___nl__im__420 = NULL;
ImmT  ___nl__im__421 = NULL;
ImmT  ___nl__im__422 = NULL;
bool  ___nl__bool__423 = false;
ImmT  ___nl__im__424 = NULL;
ImmT  ___nl__im__425 = NULL;
ImmT  ___nl__im__426 = NULL;
ImmT  ___nl__im__427 = NULL;
ImmT  ___nl__im__428 = NULL;
ImmT  ___nl__im__429 = NULL;
ImmT  ___nl__im__430 = NULL;
ImmT  ___nl__im__431 = NULL;
ImmT  ___nl__im__432 = NULL;
ImmT  ___nl__im__433 = NULL;
ImmT  ___nl__im__434 = NULL;
ImmT  ___nl__im__435 = NULL;
ImmT  ___nl__im__436 = NULL;
ImmT  ___nl__im__437 = NULL;
ImmT  ___nl__im__438 = NULL;
ImmT  ___nl__im__439 = NULL;
ImmT  ___nl__im__440 = NULL;
ImmT  ___nl__im__441 = NULL;
ImmT  ___nl__im__442 = NULL;
ImmT  ___nl__im__443 = NULL;
ImmT  ___nl__im__444 = NULL;
ImmT  ___nl__im__445 = NULL;
ImmT  ___nl__im__446 = NULL;
ImmT  ___nl__im__447 = NULL;
ImmT  ___nl__im__448 = NULL;
ImmT  ___nl__im__449 = NULL;
ImmT  ___nl__im__450 = NULL;
ImmT  ___nl__im__451 = NULL;
ImmT  ___nl__im__452 = NULL;
ImmT  ___nl__im__453 = NULL;
ImmT  ___nl__im__454 = NULL;
ImmT  ___nl__im__455 = NULL;
ImmT  ___nl__im__456 = NULL;
ImmT  ___nl__im__457 = NULL;
bool  ___nl__bool__458 = false;
ImmT  ___nl__im__459 = NULL;
ImmT  ___nl__im__460 = NULL;
ImmT  ___nl__im__461 = NULL;
ImmT  ___nl__im__462 = NULL;
bool  ___nl__bool__463 = false;
ImmT  ___nl__im__464 = NULL;
ImmT  ___nl__im__465 = NULL;
ImmT  ___nl__im__466 = NULL;
ImmT  ___nl__im__467 = NULL;
ImmT  ___nl__im__468 = NULL;
ImmT  ___nl__im__469 = NULL;
ImmT  ___nl__im__470 = NULL;
ImmT  ___nl__im__471 = NULL;
ImmT  ___nl__im__472 = NULL;
ImmT  ___nl__im__473 = NULL;
ImmT  ___nl__im__474 = NULL;
ImmT  ___nl__im__475 = NULL;
ImmT  ___nl__im__476 = NULL;
ImmT  ___nl__im__477 = NULL;
ImmT  ___nl__im__478 = NULL;
ImmT  ___nl__im__479 = NULL;
ImmT  ___nl__im__480 = NULL;
ImmT  ___nl__im__481 = NULL;
ImmT  ___nl__im__482 = NULL;
ImmT  ___nl__im__483 = NULL;
ImmT  ___nl__im__484 = NULL;
ImmT  ___nl__im__485 = NULL;
bool  ___nl__bool__486 = false;
ImmT  ___nl__im__487 = NULL;
ImmT  ___nl__im__488 = NULL;
ImmT  ___nl__im__489 = NULL;
ImmT  ___nl__im__490 = NULL;
ImmT  ___nl__im__491 = NULL;
ImmT  ___nl__im__492 = NULL;
ImmT  ___nl__im__493 = NULL;
ImmT  ___nl__im__494 = NULL;
bool  ___nl__bool__495 = false;
ImmT  ___nl__im__496 = NULL;
ImmT  ___nl__im__497 = NULL;
ImmT  ___nl__im__498 = NULL;
ImmT  ___nl__im__499 = NULL;
ImmT  ___nl__im__500 = NULL;
ImmT  ___nl__im__501 = NULL;
ImmT  ___nl__im__502 = NULL;
ImmT  ___nl__im__503 = NULL;
ImmT  ___nl__im__504 = NULL;
ImmT  ___nl__im__505 = NULL;
ImmT  ___nl__im__506 = NULL;
ImmT  ___nl__im__507 = NULL;
ImmT  ___nl__im__508 = NULL;
ImmT  ___nl__im__509 = NULL;
ImmT  ___nl__im__510 = NULL;
ImmT  ___nl__im__511 = NULL;
ImmT  ___nl__im__512 = NULL;
ImmT  ___nl__im__513 = NULL;
ImmT  ___nl__im__514 = NULL;
ImmT * ___nl__im_ptr__515 = NULL;
ImmT  ___nl__im__516 = NULL;
ImmT  ___nl__im__517 = NULL;
ImmT  ___nl__im__518 = NULL;
ImmT  ___nl__im__519 = NULL;
INT  ___nl__int__520 = 0;
ImmT  ___nl__im__521 = NULL;
ImmT  ___nl__string__522 = NULL;
ImmT  ___nl__im__523 = NULL;
ImmT  ___nl__im__524 = NULL;
ImmT  ___nl__im__525 = NULL;
ImmT  ___nl__im__526 = NULL;
INT  ___nl__int__527 = 0;
ImmT  ___nl__im__528 = NULL;
ImmT  ___nl__im__529 = NULL;
ImmT  ___nl__im__530 = NULL;
ImmT  ___nl__im__531 = NULL;
ImmT  ___nl__im__532 = NULL;
ImmT  ___nl__im__533 = NULL;
ImmT  ___nl__im__534 = NULL;
ImmT  ___nl__string__535 = NULL;
ImmT  ___nl__im__536 = NULL;
ImmT  ___nl__im__537 = NULL;
ImmT  ___nl__im__538 = NULL;
ImmT  ___nl__im__539 = NULL;
ImmT  ___nl__im__540 = NULL;
ImmT  ___nl__im__541 = NULL;
ImmT  ___nl__im__542 = NULL;
ImmT  ___nl__im__543 = NULL;
ImmT  ___nl__im__544 = NULL;
ImmT  ___nl__im__545 = NULL;
ImmT  ___nl__im__546 = NULL;
ImmT  ___nl__im__547 = NULL;
ImmT  ___nl__im__548 = NULL;
INT  ___nl__int__549 = 0;
ImmT  ___nl__im__550 = NULL;
ImmT  ___nl__string__551 = NULL;
ImmT  ___nl__im__552 = NULL;
ImmT  ___nl__im__553 = NULL;
INT  ___nl__int__554 = 0;
ImmT  ___nl__im__555 = NULL;
ImmT  ___nl__im__556 = NULL;
ImmT  ___nl__im__557 = NULL;
ImmT  ___nl__string__558 = NULL;
ImmT  ___nl__im__559 = NULL;
ImmT  ___nl__im__560 = NULL;
ImmT  ___nl__im__561 = NULL;
bool  ___nl__bool__562 = false;
ImmT  ___nl__im__563 = NULL;
ImmT  ___nl__im__564 = NULL;
ImmT  ___nl__im__565 = NULL;
ImmT  ___nl__im__566 = NULL;
ImmT  ___nl__im__567 = NULL;
ImmT  ___nl__im__568 = NULL;
ImmT  ___nl__im__569 = NULL;
ImmT  ___nl__im__570 = NULL;
ImmT  ___nl__im__571 = NULL;
ImmT  ___nl__im__572 = NULL;
ImmT  ___nl__im__573 = NULL;
ImmT  ___nl__im__574 = NULL;
ImmT  ___nl__im__575 = NULL;
ImmT  ___nl__im__576 = NULL;
ImmT  ___nl__im__577 = NULL;
ImmT  ___nl__im__578 = NULL;
ImmT  ___nl__im__579 = NULL;
ImmT  ___nl__im__580 = NULL;
ImmT  ___nl__im__581 = NULL;
ImmT * ___nl__im_ptr__582 = NULL;
ImmT  ___nl__im__583 = NULL;
ImmT  ___nl__im__584 = NULL;
ImmT  ___nl__im__585 = NULL;
ImmT  ___nl__im__586 = NULL;
ImmT  ___nl__im__587 = NULL;
ImmT  ___nl__im__588 = NULL;
ImmT  ___nl__im__589 = NULL;
ImmT * ___nl__im_ptr__590 = NULL;
ImmT  ___nl__im__591 = NULL;
ImmT  ___nl__im__592 = NULL;
ImmT  ___nl__im__593 = NULL;
ImmT  ___nl__im__594 = NULL;
ImmT  ___nl__im__595 = NULL;
ImmT * ___nl__im_ptr__596 = NULL;
ImmT  ___nl__im__597 = NULL;
ImmT  ___nl__im__598 = NULL;
ImmT  ___nl__im__599 = NULL;
ImmT  ___nl__im__600 = NULL;
ImmT  ___nl__im__601 = NULL;
ImmT * ___nl__im_ptr__602 = NULL;
ImmT  ___nl__im__603 = NULL;
ImmT  ___nl__im__604 = NULL;
ImmT  ___nl__im__605 = NULL;
ImmT  ___nl__im__606 = NULL;
ImmT  ___nl__im__607 = NULL;
ImmT  ___nl__im__608 = NULL;
ImmT  ___nl__im__609 = NULL;
ImmT  ___nl__im__610 = NULL;
ImmT  ___nl__im__611 = NULL;
ImmT  ___nl__im__612 = NULL;
ImmT  ___nl__im__613 = NULL;
ImmT  ___nl__im__614 = NULL;
ImmT  ___nl__im__615 = NULL;
ImmT  ___nl__im__616 = NULL;
ImmT  ___nl__im__617 = NULL;
bool  ___nl__bool__618 = false;
ImmT  ___nl__im__619 = NULL;
ImmT  ___nl__im__620 = NULL;
ImmT  ___nl__im__621 = NULL;
ImmT  ___nl__im__622 = NULL;
ImmT  ___nl__im__623 = NULL;
ImmT  ___nl__im__624 = NULL;
ImmT  ___nl__im__625 = NULL;
ImmT  ___nl__im__626 = NULL;
ImmT  ___nl__im__627 = NULL;
ImmT  ___nl__im__628 = NULL;
ImmT  ___nl__im__629 = NULL;
ImmT  ___nl__im__630 = NULL;
ImmT  ___nl__im__631 = NULL;
ImmT  ___nl__im__632 = NULL;
ImmT  ___nl__im__633 = NULL;
ImmT  ___nl__im__634 = NULL;
ImmT  ___nl__im__635 = NULL;
ImmT  ___nl__im__636 = NULL;
ImmT  ___nl__im__637 = NULL;
ImmT  ___nl__im__638 = NULL;
ImmT  ___nl__im__639 = NULL;
ImmT  ___nl__im__640 = NULL;
bool  ___nl__bool__641 = false;
ImmT  ___nl__im__642 = NULL;
ImmT  ___nl__im__643 = NULL;
ImmT  ___nl__im__644 = NULL;
ImmT  ___nl__im__645 = NULL;
ImmT  ___nl__im__646 = NULL;
ImmT  ___nl__im__647 = NULL;
ImmT  ___nl__im__648 = NULL;
ImmT  ___nl__im__649 = NULL;
ImmT  ___nl__im__650 = NULL;
ImmT  ___nl__im__651 = NULL;
ImmT  ___nl__im__652 = NULL;
ImmT  ___nl__im__653 = NULL;
ImmT  ___nl__im__654 = NULL;
ImmT  ___nl__im__655 = NULL;
ImmT  ___nl__im__656 = NULL;
ImmT  ___nl__im__657 = NULL;
bool  ___nl__bool__658 = false;
ImmT  ___nl__im__659 = NULL;
ImmT  ___nl__im__660 = NULL;
ImmT  ___nl__im__661 = NULL;
#line 759
c_rt_lib0move(&___nl__im__5,___get_global_string_const(560));
#line 759
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(217)));
#line 759
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(561)));
#line 759
c_rt_lib0clear(&___nl__im__9);
#line 759
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(562)));
#line 759
c_rt_lib0clear(&___nl__im__8);
#line 759
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(167)));
#line 759
___nl__int__6 = getIntFromImm(___nl__im__10);
#line 759
c_rt_lib0clear(&___nl__im__7);
#line 759
c_rt_lib0clear(&___nl__im__10);
#line 759
c_rt_lib0move(&___nl__string__11, c_rt_lib0int_to_string(___nl__int__6));
#line 759
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__string__11));
#line 759
c_rt_lib0clear(&___nl__im__5);
#line 759
//clear ___nl__int__6;
#line 759
c_rt_lib0clear(&___nl__string__11);
#line 759
c_rt_lib0move(&___nl__im__12, string0lf());
#line 759
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__12));
#line 759
c_rt_lib0clear(&___nl__im__4);
#line 759
c_rt_lib0clear(&___nl__im__12);
#line 759
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__3));
#line 759
c_rt_lib0clear(&___nl__im__3);
#line 760
___nl__bool__13 = false;
#line 761
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 761
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(250));
#line 761
if(___nl__bool__15){ goto label_100;}
#line 777
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(251));
#line 777
if(___nl__bool__15){ goto label_228;}
#line 792
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(252));
#line 792
if(___nl__bool__15){ goto label_339;}
#line 793
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(257));
#line 793
if(___nl__bool__15){ goto label_343;}
#line 796
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(225));
#line 796
if(___nl__bool__15){ goto label_357;}
#line 798
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(253));
#line 798
if(___nl__bool__15){ goto label_362;}
#line 809
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(254));
#line 809
if(___nl__bool__15){ goto label_423;}
#line 811
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(255));
#line 811
if(___nl__bool__15){ goto label_428;}
#line 821
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(256));
#line 821
if(___nl__bool__15){ goto label_510;}
#line 839
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(266));
#line 839
if(___nl__bool__15){ goto label_619;}
#line 847
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(267));
#line 847
if(___nl__bool__15){ goto label_653;}
#line 849
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(258));
#line 849
if(___nl__bool__15){ goto label_668;}
#line 851
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(246));
#line 851
if(___nl__bool__15){ goto label_677;}
#line 874
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(259));
#line 874
if(___nl__bool__15){ goto label_872;}
#line 877
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(260));
#line 877
if(___nl__bool__15){ goto label_894;}
#line 883
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(261));
#line 883
if(___nl__bool__15){ goto label_917;}
#line 897
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(262));
#line 897
if(___nl__bool__15){ goto label_1015;}
#line 910
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(263));
#line 910
if(___nl__bool__15){ goto label_1106;}
#line 925
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(264));
#line 925
if(___nl__bool__15){ goto label_1197;}
#line 931
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(265));
#line 931
if(___nl__bool__15){ goto label_1220;}
#line 958
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(268));
#line 958
if(___nl__bool__15){ goto label_1399;}
#line 961
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(269));
#line 961
if(___nl__bool__15){ goto label_1503;}
#line 966
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(270));
#line 966
if(___nl__bool__15){ goto label_1613;}
#line 968
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(271));
#line 968
if(___nl__bool__15){ goto label_1624;}
#line 986
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(272));
#line 986
if(___nl__bool__15){ goto label_1745;}
#line 987
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(273));
#line 987
if(___nl__bool__15){ goto label_1749;}
#line 989
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(274));
#line 989
if(___nl__bool__15){ goto label_1754;}
#line 991
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(275));
#line 991
if(___nl__bool__15){ goto label_1767;}
#line 993
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(276));
#line 993
if(___nl__bool__15){ goto label_1772;}
#line 999
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(277));
#line 999
if(___nl__bool__15){ goto label_1806;}
#line 1001
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(278));
#line 1001
if(___nl__bool__15){ goto label_1811;}
#line 1003
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(279));
#line 1003
if(___nl__bool__15){ goto label_1824;}
#line 1005
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(280));
#line 1005
if(___nl__bool__15){ goto label_1829;}
#line 1009
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(281));
#line 1009
if(___nl__bool__15){ goto label_1859;}
#line 1011
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(282));
#line 1011
if(___nl__bool__15){ goto label_1864;}
#line 1013
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(283));
#line 1013
if(___nl__bool__15){ goto label_1869;}
#line 1015
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(284));
#line 1015
if(___nl__bool__15){ goto label_1874;}
#line 1015
c_rt_lib0move(&___nl__im__16,___get_global_string_const(15));
#line 1015
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1015
nl_die_arg(___nl__im__16);
#line 761
label_100:
;
#line 761
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(250)));
#line 761
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 762
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 762
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(110)));
#line 762
c_rt_lib0clear(&___nl__im__21);
#line 762
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(145));
#line 762
c_rt_lib0clear(&___nl__im__20);
#line 762
___nl__bool__19 = !___nl__bool__19;
#line 762
if(___nl__bool__19){ goto label_142;}
#line 763
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(78)));
#line 763
___nl__int__24 = c_rt_lib0array_len(___nl__im__25);
#line 763
c_rt_lib0clear(&___nl__im__25);
#line 763
c_rt_lib0move(&___nl__im__23, ptd0int_to_string(___nl__int__24));
#line 763
//clear ___nl__int__24;
#line 763
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(1, ___nl__im__23));
#line 763
c_rt_lib0clear(&___nl__im__23);
#line 764
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(78)));
#line 764
___nl__int__28 = 0;
#line 764
___nl__int__29 = 1;
#line 764
___nl__int__30 = c_rt_lib0array_len(___nl__im__26);
#line 764
label_121:
;
#line 764
___nl__bool__31 = ___nl__int__28 >= ___nl__int__30;
#line 764
if(___nl__bool__31){ goto label_132;}
#line 764
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__26, ___nl__int__28));
#line 764
c_rt_lib0copy(&___nl__im__27, ___nl__im__32);
#line 764
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__27));
#line 764
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__33));
#line 764
c_rt_lib0clear(&___nl__im__33);
#line 764
c_rt_lib0clear(&___nl__im__27);
#line 764
___nl__int__28 = ___nl__int__28 + ___nl__int__29;
#line 764
goto label_121;
#line 764
label_132:
;
#line 765
c_rt_lib0move(&___nl__im__35,___get_global_string_const(563));
#line 765
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_fun_lib(___nl__im__35, ___nl__im__22));
#line 765
c_rt_lib0clear(&___nl__im__35);
#line 766
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 766
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__37, ___nl__im__34));
#line 766
c_rt_lib0clear(&___nl__im__37);
#line 766
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__36));
#line 766
c_rt_lib0clear(&___nl__im__36);
#line 767
goto label_214;
#line 767
label_142:
;
#line 767
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 767
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(110)));
#line 767
c_rt_lib0clear(&___nl__im__39);
#line 767
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(141));
#line 767
c_rt_lib0clear(&___nl__im__38);
#line 767
___nl__bool__19 = !___nl__bool__19;
#line 767
if(___nl__bool__19){ goto label_210;}
#line 768
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 768
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(110)));
#line 768
c_rt_lib0clear(&___nl__im__43);
#line 768
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 768
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(110)));
#line 768
c_rt_lib0clear(&___nl__im__45);
#line 768
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__44, ___get_global_string_const(141)));
#line 768
c_rt_lib0clear(&___nl__im__42);
#line 768
c_rt_lib0clear(&___nl__im__44);
#line 768
___nl__im_ptr__47 = &((*___ref___rec__0).mod_name0field);
#line 768
c_rt_lib0copy(&___nl__im__46, (*___nl__im_ptr__47));
#line 768
___nl__im_ptr__47 = NULL;
#line 768
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 768
c_rt_lib0move(&___nl__im__48, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__49));
#line 768
c_rt_lib0clear(&___nl__im__49);
#line 768
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_clean_fun_call(___nl__im__41, ___nl__im__46, ___nl__im__48, ___nl__im__2));
#line 768
c_rt_lib0clear(&___nl__im__41);
#line 768
c_rt_lib0clear(&___nl__im__46);
#line 768
c_rt_lib0clear(&___nl__im__48);
#line 770
c_rt_lib0move(&___nl__im__51, string0lf());
#line 770
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__40, ___nl__im__51));
#line 770
c_rt_lib0clear(&___nl__im__51);
#line 770
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__50));
#line 770
c_rt_lib0clear(&___nl__im__50);
#line 771
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 771
c_rt_lib0move(&___nl__im__54, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__55));
#line 771
c_rt_lib0clear(&___nl__im__55);
#line 771
c_rt_lib0move(&___nl__im__56,___get_global_string_const(564));
#line 771
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__56));
#line 771
c_rt_lib0clear(&___nl__im__54);
#line 771
c_rt_lib0clear(&___nl__im__56);
#line 771
c_rt_lib0move(&___nl__im__57, string0lf());
#line 771
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__57));
#line 771
c_rt_lib0clear(&___nl__im__53);
#line 771
c_rt_lib0clear(&___nl__im__57);
#line 771
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__52));
#line 771
c_rt_lib0clear(&___nl__im__52);
#line 772
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 772
c_rt_lib0move(&___nl__im__60, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__61));
#line 772
c_rt_lib0clear(&___nl__im__61);
#line 772
c_rt_lib0move(&___nl__im__62,___get_global_string_const(565));
#line 772
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__62));
#line 772
c_rt_lib0clear(&___nl__im__60);
#line 772
c_rt_lib0clear(&___nl__im__62);
#line 772
c_rt_lib0move(&___nl__im__63, string0lf());
#line 772
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__63));
#line 772
c_rt_lib0clear(&___nl__im__59);
#line 772
c_rt_lib0clear(&___nl__im__63);
#line 772
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__58));
#line 772
c_rt_lib0clear(&___nl__im__58);
#line 773
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(244)));
#line 773
c_rt_lib0move(&___nl__im__65, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__66));
#line 773
c_rt_lib0clear(&___nl__im__66);
#line 773
c_rt_lib0move(&___nl__im__67,___get_global_string_const(566));
#line 773
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__67));
#line 773
c_rt_lib0clear(&___nl__im__65);
#line 773
c_rt_lib0clear(&___nl__im__67);
#line 773
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__64));
#line 773
c_rt_lib0clear(&___nl__im__64);
#line 774
goto label_214;
#line 774
label_210:
;
#line 775
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(0));
#line 775
nl_die_arg(___nl__im__68);
#line 776
goto label_214;
#line 776
label_214:
;
#line 776
//clear ___nl__bool__19;
#line 776
c_rt_lib0clear(&___nl__im__22);
#line 776
c_rt_lib0clear(&___nl__im__26);
#line 776
c_rt_lib0clear(&___nl__im__27);
#line 776
//clear ___nl__int__28;
#line 776
//clear ___nl__int__29;
#line 776
//clear ___nl__int__30;
#line 776
//clear ___nl__bool__31;
#line 776
c_rt_lib0clear(&___nl__im__32);
#line 776
c_rt_lib0clear(&___nl__im__34);
#line 776
c_rt_lib0clear(&___nl__im__40);
#line 776
c_rt_lib0clear(&___nl__im__68);
#line 777
goto label_1879;
#line 777
label_228:
;
#line 777
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(251)));
#line 777
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 778
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 778
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(110)));
#line 778
c_rt_lib0clear(&___nl__im__73);
#line 778
___nl__bool__71 = c_rt_lib0priv_is(___nl__im__72, ___get_global_string_const(145));
#line 778
c_rt_lib0clear(&___nl__im__72);
#line 778
___nl__bool__71 = !___nl__bool__71;
#line 778
if(___nl__bool__71){ goto label_240;}
#line 779
c_rt_lib0delete(generator_c_priv0print_hash_declaration(___ref___rec__0, ___nl__im__69));
#line 780
goto label_334;
#line 780
label_240:
;
#line 780
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 780
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(110)));
#line 780
c_rt_lib0clear(&___nl__im__75);
#line 780
___nl__bool__71 = c_rt_lib0priv_is(___nl__im__74, ___get_global_string_const(142));
#line 780
c_rt_lib0clear(&___nl__im__74);
#line 780
___nl__bool__71 = !___nl__bool__71;
#line 780
if(___nl__bool__71){ goto label_321;}
#line 781
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 781
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__79, ___get_global_string_const(110)));
#line 781
c_rt_lib0clear(&___nl__im__79);
#line 781
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 781
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(110)));
#line 781
c_rt_lib0clear(&___nl__im__81);
#line 781
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__80, ___get_global_string_const(142)));
#line 781
c_rt_lib0clear(&___nl__im__78);
#line 781
c_rt_lib0clear(&___nl__im__80);
#line 781
___nl__im_ptr__83 = &((*___ref___rec__0).mod_name0field);
#line 781
c_rt_lib0copy(&___nl__im__82, (*___nl__im_ptr__83));
#line 781
___nl__im_ptr__83 = NULL;
#line 781
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 781
c_rt_lib0move(&___nl__im__84, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__85));
#line 781
c_rt_lib0clear(&___nl__im__85);
#line 781
c_rt_lib0move(&___nl__im__76, generator_c_priv0get_clean_fun_call(___nl__im__77, ___nl__im__82, ___nl__im__84, ___nl__im__2));
#line 781
c_rt_lib0clear(&___nl__im__77);
#line 781
c_rt_lib0clear(&___nl__im__82);
#line 781
c_rt_lib0clear(&___nl__im__84);
#line 783
c_rt_lib0move(&___nl__im__87, string0lf());
#line 783
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__76, ___nl__im__87));
#line 783
c_rt_lib0clear(&___nl__im__87);
#line 783
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__86));
#line 783
c_rt_lib0clear(&___nl__im__86);
#line 784
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 784
c_rt_lib0move(&___nl__im__90, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__91));
#line 784
c_rt_lib0clear(&___nl__im__91);
#line 784
c_rt_lib0move(&___nl__im__92,___get_global_string_const(564));
#line 784
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__92));
#line 784
c_rt_lib0clear(&___nl__im__90);
#line 784
c_rt_lib0clear(&___nl__im__92);
#line 784
c_rt_lib0move(&___nl__im__93, string0lf());
#line 784
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__93));
#line 784
c_rt_lib0clear(&___nl__im__89);
#line 784
c_rt_lib0clear(&___nl__im__93);
#line 784
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__88));
#line 784
c_rt_lib0clear(&___nl__im__88);
#line 785
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 785
c_rt_lib0move(&___nl__im__96, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__97));
#line 785
c_rt_lib0clear(&___nl__im__97);
#line 785
c_rt_lib0move(&___nl__im__98,___get_global_string_const(565));
#line 785
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__98));
#line 785
c_rt_lib0clear(&___nl__im__96);
#line 785
c_rt_lib0clear(&___nl__im__98);
#line 785
c_rt_lib0move(&___nl__im__99, string0lf());
#line 785
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__99));
#line 785
c_rt_lib0clear(&___nl__im__95);
#line 785
c_rt_lib0clear(&___nl__im__99);
#line 785
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__94));
#line 785
c_rt_lib0clear(&___nl__im__94);
#line 786
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 786
c_rt_lib0move(&___nl__im__102, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__103));
#line 786
c_rt_lib0clear(&___nl__im__103);
#line 786
c_rt_lib0move(&___nl__im__104,___get_global_string_const(567));
#line 786
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__104));
#line 786
c_rt_lib0clear(&___nl__im__102);
#line 786
c_rt_lib0clear(&___nl__im__104);
#line 786
c_rt_lib0move(&___nl__im__105, string0lf());
#line 786
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__105));
#line 786
c_rt_lib0clear(&___nl__im__101);
#line 786
c_rt_lib0clear(&___nl__im__105);
#line 786
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__100));
#line 786
c_rt_lib0clear(&___nl__im__100);
#line 787
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 787
c_rt_lib0move(&___nl__im__107, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__108));
#line 787
c_rt_lib0clear(&___nl__im__108);
#line 787
c_rt_lib0move(&___nl__im__109,___get_global_string_const(568));
#line 787
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 787
c_rt_lib0clear(&___nl__im__107);
#line 787
c_rt_lib0clear(&___nl__im__109);
#line 787
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__106));
#line 787
c_rt_lib0clear(&___nl__im__106);
#line 788
goto label_334;
#line 788
label_321:
;
#line 788
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(244)));
#line 788
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_string_const(110)));
#line 788
c_rt_lib0clear(&___nl__im__111);
#line 788
___nl__bool__71 = c_rt_lib0priv_is(___nl__im__110, ___get_global_string_const(569));
#line 788
c_rt_lib0clear(&___nl__im__110);
#line 788
___nl__bool__71 = !___nl__bool__71;
#line 788
if(___nl__bool__71){ goto label_330;}
#line 789
goto label_334;
#line 789
label_330:
;
#line 790
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_mk(0));
#line 790
nl_die_arg(___nl__im__112);
#line 791
goto label_334;
#line 791
label_334:
;
#line 791
//clear ___nl__bool__71;
#line 791
c_rt_lib0clear(&___nl__im__76);
#line 791
c_rt_lib0clear(&___nl__im__112);
#line 792
goto label_1879;
#line 792
label_339:
;
#line 792
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(252)));
#line 792
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 793
goto label_1879;
#line 793
label_343:
;
#line 793
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(257)));
#line 793
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 794
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(165)));
#line 794
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(181)));
#line 794
c_rt_lib0move(&___nl__im__117, generator_c_priv0get_func_pointer(___ref___rec__0, ___nl__im__118, ___nl__im__119));
#line 794
c_rt_lib0clear(&___nl__im__118);
#line 794
c_rt_lib0clear(&___nl__im__119);
#line 795
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(244)));
#line 795
c_rt_lib0move(&___nl__im__120, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__121, ___nl__im__117));
#line 795
c_rt_lib0clear(&___nl__im__121);
#line 795
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__120));
#line 795
c_rt_lib0clear(&___nl__im__120);
#line 796
goto label_1879;
#line 796
label_357:
;
#line 796
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(225)));
#line 796
c_rt_lib0copy(&___nl__im__122, ___nl__im__123);
#line 797
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__122));
#line 798
goto label_1879;
#line 798
label_362:
;
#line 798
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(253)));
#line 798
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 799
c_rt_lib0move(&___nl__im__127, generator_c_priv0get_unary_ops());
#line 799
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(570)));
#line 799
c_rt_lib0move(&___nl__im__126, hash0get_value(___nl__im__127, ___nl__im__128));
#line 799
c_rt_lib0clear(&___nl__im__127);
#line 799
c_rt_lib0clear(&___nl__im__128);
#line 801
c_rt_lib0move(&___nl__im__131,___get_global_string_const(380));
#line 801
___nl__bool__130 = c_rt_lib0eq(___nl__im__126, ___nl__im__131);
#line 801
c_rt_lib0clear(&___nl__im__131);
#line 801
___nl__bool__130 = !___nl__bool__130;
#line 801
if(___nl__bool__130){ goto label_383;}
#line 802
c_rt_lib0move(&___nl__im__132,___get_global_string_const(379));
#line 802
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(78)));
#line 802
c_rt_lib0move(&___nl__im__133, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__134));
#line 802
c_rt_lib0clear(&___nl__im__134);
#line 802
c_rt_lib0move(&___nl__im__129, c_rt_lib0concat_new(___nl__im__132, ___nl__im__133));
#line 802
c_rt_lib0clear(&___nl__im__132);
#line 802
c_rt_lib0clear(&___nl__im__133);
#line 803
goto label_415;
#line 803
label_383:
;
#line 803
c_rt_lib0move(&___nl__im__136,___get_global_string_const(382));
#line 803
___nl__bool__130 = c_rt_lib0eq(___nl__im__126, ___nl__im__136);
#line 803
c_rt_lib0clear(&___nl__im__136);
#line 803
___nl__bool__135 = !___nl__bool__130;
#line 803
if(___nl__bool__135){ goto label_394;}
#line 803
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(78)));
#line 803
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(110)));
#line 803
c_rt_lib0clear(&___nl__im__138);
#line 803
___nl__bool__130 = c_rt_lib0priv_is(___nl__im__137, ___get_global_string_const(419));
#line 803
c_rt_lib0clear(&___nl__im__137);
#line 803
label_394:
;
#line 803
//clear ___nl__bool__135;
#line 803
___nl__bool__130 = !___nl__bool__130;
#line 803
if(___nl__bool__130){ goto label_406;}
#line 804
c_rt_lib0move(&___nl__im__139,___get_global_string_const(381));
#line 804
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(78)));
#line 804
c_rt_lib0move(&___nl__im__140, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__141));
#line 804
c_rt_lib0clear(&___nl__im__141);
#line 804
c_rt_lib0move(&___nl__im__129, c_rt_lib0concat_new(___nl__im__139, ___nl__im__140));
#line 804
c_rt_lib0clear(&___nl__im__139);
#line 804
c_rt_lib0clear(&___nl__im__140);
#line 805
goto label_415;
#line 805
label_406:
;
#line 806
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(78)));
#line 806
c_rt_lib0move(&___nl__im__143, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__144));
#line 806
c_rt_lib0clear(&___nl__im__144);
#line 806
c_rt_lib0move(&___nl__im__142, c_rt_lib0array_mk(1, ___nl__im__143));
#line 806
c_rt_lib0clear(&___nl__im__143);
#line 806
c_rt_lib0move(&___nl__im__129, generator_c_priv0get_fun_lib(___nl__im__126, ___nl__im__142));
#line 806
c_rt_lib0clear(&___nl__im__142);
#line 807
goto label_415;
#line 807
label_415:
;
#line 807
//clear ___nl__bool__130;
#line 808
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(244)));
#line 808
c_rt_lib0move(&___nl__im__145, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__146, ___nl__im__129));
#line 808
c_rt_lib0clear(&___nl__im__146);
#line 808
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__145));
#line 808
c_rt_lib0clear(&___nl__im__145);
#line 809
goto label_1879;
#line 809
label_423:
;
#line 809
c_rt_lib0move(&___nl__im__148, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(254)));
#line 809
c_rt_lib0copy(&___nl__im__147, ___nl__im__148);
#line 810
c_rt_lib0delete(generator_c_priv0print_bin_op(___ref___rec__0, ___nl__im__147));
#line 811
goto label_1879;
#line 811
label_428:
;
#line 811
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(255)));
#line 811
c_rt_lib0copy(&___nl__im__149, ___nl__im__150);
#line 812
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(78)));
#line 812
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__153, ___get_global_string_const(110)));
#line 812
c_rt_lib0clear(&___nl__im__153);
#line 812
___nl__bool__151 = c_rt_lib0priv_is(___nl__im__152, ___get_global_string_const(145));
#line 812
c_rt_lib0clear(&___nl__im__152);
#line 812
___nl__bool__151 = !___nl__bool__151;
#line 812
if(___nl__bool__151){ goto label_457;}
#line 813
c_rt_lib0move(&___nl__im__155,___get_global_string_const(571));
#line 813
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(78)));
#line 813
c_rt_lib0move(&___nl__im__157, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__158));
#line 813
c_rt_lib0clear(&___nl__im__158);
#line 813
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(572)));
#line 813
c_rt_lib0move(&___nl__im__159, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__160));
#line 813
c_rt_lib0clear(&___nl__im__160);
#line 813
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_mk(2, ___nl__im__157, ___nl__im__159));
#line 813
c_rt_lib0clear(&___nl__im__157);
#line 813
c_rt_lib0clear(&___nl__im__159);
#line 813
c_rt_lib0move(&___nl__im__154, generator_c_priv0get_fun_lib(___nl__im__155, ___nl__im__156));
#line 813
c_rt_lib0clear(&___nl__im__155);
#line 813
c_rt_lib0clear(&___nl__im__156);
#line 814
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(244)));
#line 814
c_rt_lib0move(&___nl__im__161, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__162, ___nl__im__154));
#line 814
c_rt_lib0clear(&___nl__im__162);
#line 814
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__161));
#line 814
c_rt_lib0clear(&___nl__im__161);
#line 815
goto label_505;
#line 815
label_457:
;
#line 815
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(78)));
#line 815
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__164, ___get_global_string_const(110)));
#line 815
c_rt_lib0clear(&___nl__im__164);
#line 815
___nl__bool__151 = c_rt_lib0priv_is(___nl__im__163, ___get_global_string_const(573));
#line 815
c_rt_lib0clear(&___nl__im__163);
#line 815
___nl__bool__151 = !___nl__bool__151;
#line 815
if(___nl__bool__151){ goto label_501;}
#line 816
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(244)));
#line 816
c_rt_lib0move(&___nl__im__171, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__172));
#line 816
c_rt_lib0clear(&___nl__im__172);
#line 816
c_rt_lib0move(&___nl__im__173,___get_global_string_const(574));
#line 816
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__173));
#line 816
c_rt_lib0clear(&___nl__im__171);
#line 816
c_rt_lib0clear(&___nl__im__173);
#line 817
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(78)));
#line 817
c_rt_lib0move(&___nl__im__174, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__175));
#line 817
c_rt_lib0clear(&___nl__im__175);
#line 817
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_new(___nl__im__170, ___nl__im__174));
#line 817
c_rt_lib0clear(&___nl__im__170);
#line 817
c_rt_lib0clear(&___nl__im__174);
#line 817
c_rt_lib0move(&___nl__im__176,___get_global_string_const(575));
#line 817
c_rt_lib0move(&___nl__im__168, c_rt_lib0concat_new(___nl__im__169, ___nl__im__176));
#line 817
c_rt_lib0clear(&___nl__im__169);
#line 817
c_rt_lib0clear(&___nl__im__176);
#line 817
c_rt_lib0move(&___nl__im__177,___get_global_string_const(576));
#line 817
c_rt_lib0move(&___nl__im__167, c_rt_lib0concat_new(___nl__im__168, ___nl__im__177));
#line 817
c_rt_lib0clear(&___nl__im__168);
#line 817
c_rt_lib0clear(&___nl__im__177);
#line 817
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(577)));
#line 817
___nl__int__178 = getIntFromImm(___nl__im__179);
#line 817
c_rt_lib0clear(&___nl__im__179);
#line 817
c_rt_lib0move(&___nl__string__180, c_rt_lib0int_to_string(___nl__int__178));
#line 817
c_rt_lib0move(&___nl__im__166, c_rt_lib0concat_new(___nl__im__167, ___nl__string__180));
#line 817
c_rt_lib0clear(&___nl__im__167);
#line 817
//clear ___nl__int__178;
#line 817
c_rt_lib0clear(&___nl__string__180);
#line 817
c_rt_lib0move(&___nl__im__181,___get_global_string_const(336));
#line 817
c_rt_lib0move(&___nl__im__165, c_rt_lib0concat_new(___nl__im__166, ___nl__im__181));
#line 817
c_rt_lib0clear(&___nl__im__166);
#line 817
c_rt_lib0clear(&___nl__im__181);
#line 817
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__165));
#line 817
c_rt_lib0clear(&___nl__im__165);
#line 818
goto label_505;
#line 818
label_501:
;
#line 819
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_mk(0));
#line 819
nl_die_arg(___nl__im__182);
#line 820
goto label_505;
#line 820
label_505:
;
#line 820
//clear ___nl__bool__151;
#line 820
c_rt_lib0clear(&___nl__im__154);
#line 820
c_rt_lib0clear(&___nl__im__182);
#line 821
goto label_1879;
#line 821
label_510:
;
#line 821
c_rt_lib0move(&___nl__im__184, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(256)));
#line 821
c_rt_lib0copy(&___nl__im__183, ___nl__im__184);
#line 822
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(78)));
#line 822
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__187, ___get_global_string_const(110)));
#line 822
c_rt_lib0clear(&___nl__im__187);
#line 822
___nl__bool__185 = c_rt_lib0priv_is(___nl__im__186, ___get_global_string_const(145));
#line 822
c_rt_lib0clear(&___nl__im__186);
#line 822
___nl__bool__185 = !___nl__bool__185;
#line 822
if(___nl__bool__185){ goto label_539;}
#line 823
c_rt_lib0move(&___nl__im__189,___get_global_string_const(578));
#line 824
c_rt_lib0move(&___nl__im__192, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(78)));
#line 824
c_rt_lib0move(&___nl__im__191, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__192));
#line 824
c_rt_lib0clear(&___nl__im__192);
#line 824
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(572)));
#line 824
c_rt_lib0move(&___nl__im__193, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__194));
#line 824
c_rt_lib0clear(&___nl__im__194);
#line 824
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(2, ___nl__im__191, ___nl__im__193));
#line 824
c_rt_lib0clear(&___nl__im__191);
#line 824
c_rt_lib0clear(&___nl__im__193);
#line 824
c_rt_lib0move(&___nl__im__188, generator_c_priv0get_fun_lib(___nl__im__189, ___nl__im__190));
#line 824
c_rt_lib0clear(&___nl__im__189);
#line 824
c_rt_lib0clear(&___nl__im__190);
#line 825
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(244)));
#line 825
c_rt_lib0move(&___nl__im__195, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__196, ___nl__im__188));
#line 825
c_rt_lib0clear(&___nl__im__196);
#line 825
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__195));
#line 825
c_rt_lib0clear(&___nl__im__195);
#line 826
goto label_612;
#line 826
label_539:
;
#line 826
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(78)));
#line 826
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(110)));
#line 826
c_rt_lib0clear(&___nl__im__198);
#line 826
___nl__bool__185 = c_rt_lib0priv_is(___nl__im__197, ___get_global_string_const(573));
#line 826
c_rt_lib0clear(&___nl__im__197);
#line 826
___nl__bool__185 = !___nl__bool__185;
#line 826
if(___nl__bool__185){ goto label_608;}
#line 827
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(78)));
#line 827
c_rt_lib0move(&___nl__im__199, generator_c_priv0get_access_op(___nl__im__200));
#line 827
c_rt_lib0clear(&___nl__im__200);
#line 828
c_rt_lib0move(&___nl__im__206,___get_global_string_const(579));
#line 828
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(78)));
#line 828
c_rt_lib0move(&___nl__im__207, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__208));
#line 828
c_rt_lib0clear(&___nl__im__208);
#line 828
c_rt_lib0move(&___nl__im__205, c_rt_lib0concat_new(___nl__im__206, ___nl__im__207));
#line 828
c_rt_lib0clear(&___nl__im__206);
#line 828
c_rt_lib0clear(&___nl__im__207);
#line 828
c_rt_lib0move(&___nl__im__204, c_rt_lib0concat_new(___nl__im__205, ___nl__im__199));
#line 828
c_rt_lib0clear(&___nl__im__205);
#line 828
c_rt_lib0move(&___nl__im__209,___get_global_string_const(580));
#line 828
c_rt_lib0move(&___nl__im__203, c_rt_lib0concat_new(___nl__im__204, ___nl__im__209));
#line 828
c_rt_lib0clear(&___nl__im__204);
#line 828
c_rt_lib0clear(&___nl__im__209);
#line 828
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(572)));
#line 828
c_rt_lib0move(&___nl__im__210, generator_c_priv0get_case_name(___nl__im__211));
#line 828
c_rt_lib0clear(&___nl__im__211);
#line 828
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__210));
#line 828
c_rt_lib0clear(&___nl__im__203);
#line 828
c_rt_lib0clear(&___nl__im__210);
#line 828
c_rt_lib0move(&___nl__im__212,___get_global_string_const(336));
#line 828
c_rt_lib0move(&___nl__im__201, c_rt_lib0concat_new(___nl__im__202, ___nl__im__212));
#line 828
c_rt_lib0clear(&___nl__im__202);
#line 828
c_rt_lib0clear(&___nl__im__212);
#line 829
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(244)));
#line 829
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__215, ___get_global_string_const(110)));
#line 829
c_rt_lib0clear(&___nl__im__215);
#line 829
___nl__bool__213 = c_rt_lib0priv_is(___nl__im__214, ___get_global_string_const(145));
#line 829
c_rt_lib0clear(&___nl__im__214);
#line 829
___nl__bool__213 = !___nl__bool__213;
#line 829
if(___nl__bool__213){ goto label_591;}
#line 830
c_rt_lib0move(&___nl__im__217, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(244)));
#line 830
c_rt_lib0move(&___nl__im__216, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__217));
#line 830
c_rt_lib0clear(&___nl__im__217);
#line 831
c_rt_lib0move(&___nl__im__219,___get_global_string_const(467));
#line 831
c_rt_lib0move(&___nl__im__220, c_rt_lib0array_mk(2, ___nl__im__216, ___nl__im__201));
#line 831
c_rt_lib0move(&___nl__im__218, generator_c_priv0get_fun_lib(___nl__im__219, ___nl__im__220));
#line 831
c_rt_lib0clear(&___nl__im__219);
#line 831
c_rt_lib0clear(&___nl__im__220);
#line 831
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__218));
#line 831
c_rt_lib0clear(&___nl__im__218);
#line 832
goto label_603;
#line 832
label_591:
;
#line 833
c_rt_lib0move(&___nl__im__222, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(244)));
#line 833
c_rt_lib0move(&___nl__im__221, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__222));
#line 833
c_rt_lib0clear(&___nl__im__222);
#line 834
c_rt_lib0move(&___nl__im__225,___get_global_string_const(514));
#line 834
c_rt_lib0move(&___nl__im__224, c_rt_lib0concat_new(___nl__im__221, ___nl__im__225));
#line 834
c_rt_lib0clear(&___nl__im__225);
#line 834
c_rt_lib0move(&___nl__im__223, c_rt_lib0concat_new(___nl__im__224, ___nl__im__201));
#line 834
c_rt_lib0clear(&___nl__im__224);
#line 834
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__223));
#line 834
c_rt_lib0clear(&___nl__im__223);
#line 835
goto label_603;
#line 835
label_603:
;
#line 835
//clear ___nl__bool__213;
#line 835
c_rt_lib0clear(&___nl__im__216);
#line 835
c_rt_lib0clear(&___nl__im__221);
#line 836
goto label_612;
#line 836
label_608:
;
#line 837
c_rt_lib0move(&___nl__im__226, c_rt_lib0array_mk(0));
#line 837
nl_die_arg(___nl__im__226);
#line 838
goto label_612;
#line 838
label_612:
;
#line 838
//clear ___nl__bool__185;
#line 838
c_rt_lib0clear(&___nl__im__188);
#line 838
c_rt_lib0clear(&___nl__im__199);
#line 838
c_rt_lib0clear(&___nl__im__201);
#line 838
c_rt_lib0clear(&___nl__im__226);
#line 839
goto label_1879;
#line 839
label_619:
;
#line 839
c_rt_lib0move(&___nl__im__228, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(266)));
#line 839
c_rt_lib0copy(&___nl__im__227, ___nl__im__228);
#line 840
___nl__bool__229 = c_rt_lib0priv_is(___nl__im__227, ___get_global_string_const(245));
#line 840
if(___nl__bool__229){ goto label_629;}
#line 843
___nl__bool__229 = c_rt_lib0priv_is(___nl__im__227, ___get_global_string_const(366));
#line 843
if(___nl__bool__229){ goto label_639;}
#line 843
c_rt_lib0move(&___nl__im__230,___get_global_string_const(15));
#line 843
c_rt_lib0move(&___nl__im__230, c_rt_lib0array_mk(2, ___nl__im__230, ___nl__im__227));
#line 843
nl_die_arg(___nl__im__230);
#line 840
label_629:
;
#line 840
c_rt_lib0move(&___nl__im__232, c_rt_lib0priv_as(___nl__im__227, ___get_global_string_const(245)));
#line 840
c_rt_lib0copy(&___nl__im__231, ___nl__im__232);
#line 841
c_rt_lib0move(&___nl__im__233,___get_global_string_const(520));
#line 841
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__233));
#line 841
c_rt_lib0clear(&___nl__im__233);
#line 842
c_rt_lib0move(&___nl__im__234, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__231));
#line 842
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__234));
#line 842
c_rt_lib0clear(&___nl__im__234);
#line 843
goto label_651;
#line 843
label_639:
;
#line 844
c_rt_lib0move(&___nl__im__235,___get_global_string_const(520));
#line 844
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__235));
#line 844
c_rt_lib0clear(&___nl__im__235);
#line 845
___nl__im_ptr__238 = &((*___ref___rec__0).ret_reg_type0field);
#line 845
c_rt_lib0copy(&___nl__im__237, (*___nl__im_ptr__238));
#line 845
___nl__im_ptr__238 = NULL;
#line 845
c_rt_lib0move(&___nl__im__236, generator_c_priv0get_empty_value(___nl__im__237));
#line 845
c_rt_lib0clear(&___nl__im__237);
#line 845
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__236));
#line 845
c_rt_lib0clear(&___nl__im__236);
#line 846
goto label_651;
#line 846
label_651:
;
#line 847
goto label_1879;
#line 847
label_653:
;
#line 847
c_rt_lib0move(&___nl__im__240, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(267)));
#line 847
c_rt_lib0copy(&___nl__im__239, ___nl__im__240);
#line 848
c_rt_lib0move(&___nl__im__243,___get_global_string_const(581));
#line 848
c_rt_lib0move(&___nl__im__244, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__239));
#line 848
c_rt_lib0move(&___nl__im__242, c_rt_lib0concat_new(___nl__im__243, ___nl__im__244));
#line 848
c_rt_lib0clear(&___nl__im__243);
#line 848
c_rt_lib0clear(&___nl__im__244);
#line 848
c_rt_lib0move(&___nl__im__245,___get_global_string_const(336));
#line 848
c_rt_lib0move(&___nl__im__241, c_rt_lib0concat_new(___nl__im__242, ___nl__im__245));
#line 848
c_rt_lib0clear(&___nl__im__242);
#line 848
c_rt_lib0clear(&___nl__im__245);
#line 848
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__241));
#line 848
c_rt_lib0clear(&___nl__im__241);
#line 849
goto label_1879;
#line 849
label_668:
;
#line 849
c_rt_lib0move(&___nl__im__247, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(258)));
#line 849
c_rt_lib0copy(&___nl__im__246, ___nl__im__247);
#line 850
c_rt_lib0move(&___nl__im__248, c_rt_lib0hash_get_value_dec(___nl__im__246, ___get_global_string_const(78)));
#line 850
c_rt_lib0move(&___nl__im__249, c_rt_lib0hash_get_value_dec(___nl__im__246, ___get_global_string_const(244)));
#line 850
c_rt_lib0delete(generator_c_priv0print_move(___ref___rec__0, ___nl__im__248, ___nl__im__249));
#line 850
c_rt_lib0clear(&___nl__im__248);
#line 850
c_rt_lib0clear(&___nl__im__249);
#line 851
goto label_1879;
#line 851
label_677:
;
#line 851
c_rt_lib0move(&___nl__im__251, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(246)));
#line 851
c_rt_lib0copy(&___nl__im__250, ___nl__im__251);
#line 852
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(244)));
#line 852
c_rt_lib0move(&___nl__im__254, nlasm0is_empty(___nl__im__253));
#line 852
___nl__bool__252 = c_rt_lib0check_true_native(___nl__im__254);
#line 852
c_rt_lib0clear(&___nl__im__253);
#line 852
c_rt_lib0clear(&___nl__im__254);
#line 852
___nl__bool__252 = !___nl__bool__252;
#line 852
if(___nl__bool__252){ goto label_729;}
#line 852
c_rt_lib0clear(&___nl__im__1);
#line 852
c_rt_lib0clear(&___nl__im__2);
#line 852
//clear ___nl__bool__13;
#line 852
c_rt_lib0clear(&___nl__im__14);
#line 852
//clear ___nl__bool__15;
#line 852
c_rt_lib0clear(&___nl__im__16);
#line 852
c_rt_lib0clear(&___nl__im__17);
#line 852
c_rt_lib0clear(&___nl__im__18);
#line 852
c_rt_lib0clear(&___nl__im__69);
#line 852
c_rt_lib0clear(&___nl__im__70);
#line 852
c_rt_lib0clear(&___nl__im__113);
#line 852
c_rt_lib0clear(&___nl__im__114);
#line 852
c_rt_lib0clear(&___nl__im__115);
#line 852
c_rt_lib0clear(&___nl__im__116);
#line 852
c_rt_lib0clear(&___nl__im__117);
#line 852
c_rt_lib0clear(&___nl__im__122);
#line 852
c_rt_lib0clear(&___nl__im__123);
#line 852
c_rt_lib0clear(&___nl__im__124);
#line 852
c_rt_lib0clear(&___nl__im__125);
#line 852
c_rt_lib0clear(&___nl__im__126);
#line 852
c_rt_lib0clear(&___nl__im__129);
#line 852
c_rt_lib0clear(&___nl__im__147);
#line 852
c_rt_lib0clear(&___nl__im__148);
#line 852
c_rt_lib0clear(&___nl__im__149);
#line 852
c_rt_lib0clear(&___nl__im__150);
#line 852
c_rt_lib0clear(&___nl__im__183);
#line 852
c_rt_lib0clear(&___nl__im__184);
#line 852
c_rt_lib0clear(&___nl__im__227);
#line 852
c_rt_lib0clear(&___nl__im__228);
#line 852
//clear ___nl__bool__229;
#line 852
c_rt_lib0clear(&___nl__im__230);
#line 852
c_rt_lib0clear(&___nl__im__231);
#line 852
c_rt_lib0clear(&___nl__im__232);
#line 852
c_rt_lib0clear(&___nl__im__239);
#line 852
c_rt_lib0clear(&___nl__im__240);
#line 852
c_rt_lib0clear(&___nl__im__246);
#line 852
c_rt_lib0clear(&___nl__im__247);
#line 852
c_rt_lib0clear(&___nl__im__250);
#line 852
c_rt_lib0clear(&___nl__im__251);
#line 852
//clear ___nl__bool__252;
#line 852
return NULL;
#line 852
goto label_729;
#line 852
label_729:
;
#line 852
//clear ___nl__bool__252;
#line 853
c_rt_lib0move(&___nl__im__256, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(244)));
#line 853
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__256, ___get_global_string_const(110)));
#line 853
c_rt_lib0clear(&___nl__im__256);
#line 853
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(145));
#line 853
if(___nl__bool__257){ goto label_753;}
#line 857
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(419));
#line 857
if(___nl__bool__257){ goto label_780;}
#line 859
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(420));
#line 859
if(___nl__bool__257){ goto label_795;}
#line 863
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(33));
#line 863
if(___nl__bool__257){ goto label_822;}
#line 865
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(569));
#line 865
if(___nl__bool__257){ goto label_846;}
#line 867
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(141));
#line 867
if(___nl__bool__257){ goto label_852;}
#line 869
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(573));
#line 869
if(___nl__bool__257){ goto label_858;}
#line 871
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__255, ___get_global_string_const(142));
#line 871
if(___nl__bool__257){ goto label_864;}
#line 871
c_rt_lib0move(&___nl__im__258,___get_global_string_const(15));
#line 871
c_rt_lib0move(&___nl__im__258, c_rt_lib0array_mk(2, ___nl__im__258, ___nl__im__255));
#line 871
nl_die_arg(___nl__im__258);
#line 853
label_753:
;
#line 854
c_rt_lib0move(&___nl__im__263,___get_global_string_const(258));
#line 854
c_rt_lib0move(&___nl__im__262, generator_c_priv0get_lib_fun(___nl__im__263));
#line 854
c_rt_lib0clear(&___nl__im__263);
#line 854
c_rt_lib0move(&___nl__im__264,___get_global_string_const(469));
#line 854
c_rt_lib0move(&___nl__im__261, c_rt_lib0concat_new(___nl__im__262, ___nl__im__264));
#line 854
c_rt_lib0clear(&___nl__im__262);
#line 854
c_rt_lib0clear(&___nl__im__264);
#line 854
c_rt_lib0move(&___nl__im__266, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(244)));
#line 854
c_rt_lib0move(&___nl__im__265, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__266));
#line 854
c_rt_lib0clear(&___nl__im__266);
#line 854
c_rt_lib0move(&___nl__im__260, c_rt_lib0concat_new(___nl__im__261, ___nl__im__265));
#line 854
c_rt_lib0clear(&___nl__im__261);
#line 854
c_rt_lib0clear(&___nl__im__265);
#line 854
c_rt_lib0move(&___nl__im__267,___get_global_string_const(328));
#line 854
c_rt_lib0move(&___nl__im__259, c_rt_lib0concat_new(___nl__im__260, ___nl__im__267));
#line 854
c_rt_lib0clear(&___nl__im__260);
#line 854
c_rt_lib0clear(&___nl__im__267);
#line 854
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__259));
#line 854
c_rt_lib0clear(&___nl__im__259);
#line 855
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(245)));
#line 855
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__268));
#line 855
c_rt_lib0clear(&___nl__im__268);
#line 856
c_rt_lib0move(&___nl__im__269,___get_global_string_const(336));
#line 856
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__269));
#line 856
c_rt_lib0clear(&___nl__im__269);
#line 857
goto label_870;
#line 857
label_780:
;
#line 858
c_rt_lib0move(&___nl__im__273, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(244)));
#line 858
c_rt_lib0move(&___nl__im__272, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__273));
#line 858
c_rt_lib0clear(&___nl__im__273);
#line 858
c_rt_lib0move(&___nl__im__274,___get_global_string_const(514));
#line 858
c_rt_lib0move(&___nl__im__271, c_rt_lib0concat_new(___nl__im__272, ___nl__im__274));
#line 858
c_rt_lib0clear(&___nl__im__272);
#line 858
c_rt_lib0clear(&___nl__im__274);
#line 858
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(245)));
#line 858
c_rt_lib0move(&___nl__im__270, c_rt_lib0concat_new(___nl__im__271, ___nl__im__275));
#line 858
c_rt_lib0clear(&___nl__im__271);
#line 858
c_rt_lib0clear(&___nl__im__275);
#line 858
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__270));
#line 858
c_rt_lib0clear(&___nl__im__270);
#line 859
goto label_870;
#line 859
label_795:
;
#line 860
c_rt_lib0move(&___nl__im__280,___get_global_string_const(258));
#line 860
c_rt_lib0move(&___nl__im__279, generator_c_priv0get_lib_fun(___nl__im__280));
#line 860
c_rt_lib0clear(&___nl__im__280);
#line 860
c_rt_lib0move(&___nl__im__281,___get_global_string_const(469));
#line 860
c_rt_lib0move(&___nl__im__278, c_rt_lib0concat_new(___nl__im__279, ___nl__im__281));
#line 860
c_rt_lib0clear(&___nl__im__279);
#line 860
c_rt_lib0clear(&___nl__im__281);
#line 860
c_rt_lib0move(&___nl__im__283, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(244)));
#line 860
c_rt_lib0move(&___nl__im__282, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__283));
#line 860
c_rt_lib0clear(&___nl__im__283);
#line 860
c_rt_lib0move(&___nl__im__277, c_rt_lib0concat_new(___nl__im__278, ___nl__im__282));
#line 860
c_rt_lib0clear(&___nl__im__278);
#line 860
c_rt_lib0clear(&___nl__im__282);
#line 860
c_rt_lib0move(&___nl__im__284,___get_global_string_const(328));
#line 860
c_rt_lib0move(&___nl__im__276, c_rt_lib0concat_new(___nl__im__277, ___nl__im__284));
#line 860
c_rt_lib0clear(&___nl__im__277);
#line 860
c_rt_lib0clear(&___nl__im__284);
#line 860
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__276));
#line 860
c_rt_lib0clear(&___nl__im__276);
#line 861
c_rt_lib0move(&___nl__im__285, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(245)));
#line 861
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__285));
#line 861
c_rt_lib0clear(&___nl__im__285);
#line 862
c_rt_lib0move(&___nl__im__286,___get_global_string_const(336));
#line 862
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__286));
#line 862
c_rt_lib0clear(&___nl__im__286);
#line 863
goto label_870;
#line 863
label_822:
;
#line 864
c_rt_lib0move(&___nl__im__290, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(244)));
#line 864
c_rt_lib0move(&___nl__im__289, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__290));
#line 864
c_rt_lib0clear(&___nl__im__290);
#line 864
c_rt_lib0move(&___nl__im__291,___get_global_string_const(514));
#line 864
c_rt_lib0move(&___nl__im__288, c_rt_lib0concat_new(___nl__im__289, ___nl__im__291));
#line 864
c_rt_lib0clear(&___nl__im__289);
#line 864
c_rt_lib0clear(&___nl__im__291);
#line 864
c_rt_lib0move(&___nl__im__293, c_rt_lib0hash_get_value_dec(___nl__im__250, ___get_global_string_const(245)));
#line 864
___nl__bool__294 = c_rt_lib0check_true_native(___nl__im__293);
#line 864
if(___nl__bool__294){ goto label_835;}
#line 864
c_rt_lib0move(&___nl__im__292,___get_global_string_const(582));
#line 864
goto label_837;
#line 864
label_835:
;
#line 864
c_rt_lib0move(&___nl__im__292,___get_global_string_const(583));
#line 864
label_837:
;
#line 864
c_rt_lib0clear(&___nl__im__293);
#line 864
//clear ___nl__bool__294;
#line 864
c_rt_lib0move(&___nl__im__287, c_rt_lib0concat_new(___nl__im__288, ___nl__im__292));
#line 864
c_rt_lib0clear(&___nl__im__288);
#line 864
c_rt_lib0clear(&___nl__im__292);
#line 864
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__287));
#line 864
c_rt_lib0clear(&___nl__im__287);
#line 865
goto label_870;
#line 865
label_846:
;
#line 865
c_rt_lib0move(&___nl__im__296, c_rt_lib0priv_as(___nl__im__255, ___get_global_string_const(569)));
#line 865
c_rt_lib0copy(&___nl__im__295, ___nl__im__296);
#line 866
c_rt_lib0move(&___nl__im__297, c_rt_lib0array_mk(0));
#line 866
nl_die_arg(___nl__im__297);
#line 867
goto label_870;
#line 867
label_852:
;
#line 867
c_rt_lib0move(&___nl__im__299, c_rt_lib0priv_as(___nl__im__255, ___get_global_string_const(141)));
#line 867
c_rt_lib0copy(&___nl__im__298, ___nl__im__299);
#line 868
c_rt_lib0move(&___nl__im__300, c_rt_lib0array_mk(0));
#line 868
nl_die_arg(___nl__im__300);
#line 869
goto label_870;
#line 869
label_858:
;
#line 869
c_rt_lib0move(&___nl__im__302, c_rt_lib0priv_as(___nl__im__255, ___get_global_string_const(573)));
#line 869
c_rt_lib0copy(&___nl__im__301, ___nl__im__302);
#line 870
c_rt_lib0move(&___nl__im__303, c_rt_lib0array_mk(0));
#line 870
nl_die_arg(___nl__im__303);
#line 871
goto label_870;
#line 871
label_864:
;
#line 871
c_rt_lib0move(&___nl__im__305, c_rt_lib0priv_as(___nl__im__255, ___get_global_string_const(142)));
#line 871
c_rt_lib0copy(&___nl__im__304, ___nl__im__305);
#line 872
c_rt_lib0move(&___nl__im__306, c_rt_lib0array_mk(0));
#line 872
nl_die_arg(___nl__im__306);
#line 873
goto label_870;
#line 873
label_870:
;
#line 874
goto label_1879;
#line 874
label_872:
;
#line 874
c_rt_lib0move(&___nl__im__308, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(259)));
#line 874
c_rt_lib0copy(&___nl__im__307, ___nl__im__308);
#line 875
c_rt_lib0move(&___nl__im__310,___get_global_string_const(584));
#line 875
c_rt_lib0move(&___nl__im__313, c_rt_lib0hash_get_value_dec(___nl__im__307, ___get_global_string_const(78)));
#line 875
c_rt_lib0move(&___nl__im__312, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__313));
#line 875
c_rt_lib0clear(&___nl__im__313);
#line 875
c_rt_lib0move(&___nl__im__315, c_rt_lib0hash_get_value_dec(___nl__im__307, ___get_global_string_const(293)));
#line 875
c_rt_lib0move(&___nl__im__314, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__315));
#line 875
c_rt_lib0clear(&___nl__im__315);
#line 875
c_rt_lib0move(&___nl__im__311, c_rt_lib0array_mk(2, ___nl__im__312, ___nl__im__314));
#line 875
c_rt_lib0clear(&___nl__im__312);
#line 875
c_rt_lib0clear(&___nl__im__314);
#line 875
c_rt_lib0move(&___nl__im__309, generator_c_priv0get_fun_lib(___nl__im__310, ___nl__im__311));
#line 875
c_rt_lib0clear(&___nl__im__310);
#line 875
c_rt_lib0clear(&___nl__im__311);
#line 876
c_rt_lib0move(&___nl__im__317, c_rt_lib0hash_get_value_dec(___nl__im__307, ___get_global_string_const(244)));
#line 876
c_rt_lib0move(&___nl__im__316, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__317, ___nl__im__309));
#line 876
c_rt_lib0clear(&___nl__im__317);
#line 876
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__316));
#line 876
c_rt_lib0clear(&___nl__im__316);
#line 877
goto label_1879;
#line 877
label_894:
;
#line 877
c_rt_lib0move(&___nl__im__319, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(260)));
#line 877
c_rt_lib0copy(&___nl__im__318, ___nl__im__319);
#line 878
c_rt_lib0move(&___nl__im__321,___get_global_string_const(585));
#line 879
c_rt_lib0move(&___nl__im__324, c_rt_lib0hash_get_value_dec(___nl__im__318, ___get_global_string_const(78)));
#line 879
c_rt_lib0move(&___nl__im__323, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__324));
#line 879
c_rt_lib0clear(&___nl__im__324);
#line 880
c_rt_lib0move(&___nl__im__326, c_rt_lib0hash_get_value_dec(___nl__im__318, ___get_global_string_const(293)));
#line 880
c_rt_lib0move(&___nl__im__325, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__326));
#line 880
c_rt_lib0clear(&___nl__im__326);
#line 881
c_rt_lib0move(&___nl__im__328, c_rt_lib0hash_get_value_dec(___nl__im__318, ___get_global_string_const(245)));
#line 881
c_rt_lib0move(&___nl__im__327, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__328));
#line 881
c_rt_lib0clear(&___nl__im__328);
#line 881
c_rt_lib0move(&___nl__im__322, c_rt_lib0array_mk(3, ___nl__im__323, ___nl__im__325, ___nl__im__327));
#line 881
c_rt_lib0clear(&___nl__im__323);
#line 881
c_rt_lib0clear(&___nl__im__325);
#line 881
c_rt_lib0clear(&___nl__im__327);
#line 881
c_rt_lib0move(&___nl__im__320, generator_c_priv0get_fun_lib(___nl__im__321, ___nl__im__322));
#line 881
c_rt_lib0clear(&___nl__im__321);
#line 881
c_rt_lib0clear(&___nl__im__322);
#line 881
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__320));
#line 881
c_rt_lib0clear(&___nl__im__320);
#line 883
goto label_1879;
#line 883
label_917:
;
#line 883
c_rt_lib0move(&___nl__im__330, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(261)));
#line 883
c_rt_lib0copy(&___nl__im__329, ___nl__im__330);
#line 884
c_rt_lib0move(&___nl__im__333, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 884
c_rt_lib0move(&___nl__im__332, c_rt_lib0hash_get_value_dec(___nl__im__333, ___get_global_string_const(110)));
#line 884
c_rt_lib0clear(&___nl__im__333);
#line 884
___nl__bool__331 = c_rt_lib0priv_is(___nl__im__332, ___get_global_string_const(141));
#line 884
c_rt_lib0clear(&___nl__im__332);
#line 884
___nl__bool__331 = !___nl__bool__331;
#line 884
if(___nl__bool__331){ goto label_982;}
#line 885
c_rt_lib0move(&___nl__im__337, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 885
c_rt_lib0move(&___nl__im__336, c_rt_lib0hash_get_value_dec(___nl__im__337, ___get_global_string_const(110)));
#line 885
c_rt_lib0clear(&___nl__im__337);
#line 885
c_rt_lib0move(&___nl__im__339, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 885
c_rt_lib0move(&___nl__im__338, c_rt_lib0hash_get_value_dec(___nl__im__339, ___get_global_string_const(110)));
#line 885
c_rt_lib0clear(&___nl__im__339);
#line 885
c_rt_lib0move(&___nl__im__335, c_rt_lib0priv_as(___nl__im__338, ___get_global_string_const(141)));
#line 885
c_rt_lib0clear(&___nl__im__336);
#line 885
c_rt_lib0clear(&___nl__im__338);
#line 885
c_rt_lib0move(&___nl__im__334, generator_c_priv0get_type_name(___nl__im__335));
#line 885
c_rt_lib0clear(&___nl__im__335);
#line 886
___nl__im_ptr__347 = &((*___ref___rec__0).mod_name0field);
#line 886
c_rt_lib0copy(&___nl__im__346, (*___nl__im_ptr__347));
#line 886
___nl__im_ptr__347 = NULL;
#line 886
c_rt_lib0move(&___nl__im__351, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 886
c_rt_lib0move(&___nl__im__350, c_rt_lib0hash_get_value_dec(___nl__im__351, ___get_global_string_const(110)));
#line 886
c_rt_lib0clear(&___nl__im__351);
#line 886
c_rt_lib0move(&___nl__im__353, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 886
c_rt_lib0move(&___nl__im__352, c_rt_lib0hash_get_value_dec(___nl__im__353, ___get_global_string_const(110)));
#line 886
c_rt_lib0clear(&___nl__im__353);
#line 886
c_rt_lib0move(&___nl__im__349, c_rt_lib0priv_as(___nl__im__352, ___get_global_string_const(141)));
#line 886
c_rt_lib0clear(&___nl__im__350);
#line 886
c_rt_lib0clear(&___nl__im__352);
#line 886
___nl__bool__348 = generator_c_priv0is_anon(___nl__im__349);
#line 886
c_rt_lib0clear(&___nl__im__349);
#line 886
c_rt_lib0move(&___nl__im__345, generator_c_priv0get_array_push_fun_name(___nl__im__334, ___nl__im__346, ___nl__bool__348));
#line 886
c_rt_lib0clear(&___nl__im__346);
#line 886
//clear ___nl__bool__348;
#line 886
c_rt_lib0move(&___nl__im__354,___get_global_string_const(469));
#line 886
c_rt_lib0move(&___nl__im__344, c_rt_lib0concat_new(___nl__im__345, ___nl__im__354));
#line 886
c_rt_lib0clear(&___nl__im__345);
#line 886
c_rt_lib0clear(&___nl__im__354);
#line 887
c_rt_lib0move(&___nl__im__356, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 887
c_rt_lib0move(&___nl__im__355, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__356));
#line 887
c_rt_lib0clear(&___nl__im__356);
#line 887
c_rt_lib0move(&___nl__im__343, c_rt_lib0concat_new(___nl__im__344, ___nl__im__355));
#line 887
c_rt_lib0clear(&___nl__im__344);
#line 887
c_rt_lib0clear(&___nl__im__355);
#line 887
c_rt_lib0move(&___nl__im__357,___get_global_string_const(343));
#line 887
c_rt_lib0move(&___nl__im__342, c_rt_lib0concat_new(___nl__im__343, ___nl__im__357));
#line 887
c_rt_lib0clear(&___nl__im__343);
#line 887
c_rt_lib0clear(&___nl__im__357);
#line 888
c_rt_lib0move(&___nl__im__359, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(245)));
#line 888
c_rt_lib0move(&___nl__im__358, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__359));
#line 888
c_rt_lib0clear(&___nl__im__359);
#line 888
c_rt_lib0move(&___nl__im__341, c_rt_lib0concat_new(___nl__im__342, ___nl__im__358));
#line 888
c_rt_lib0clear(&___nl__im__342);
#line 888
c_rt_lib0clear(&___nl__im__358);
#line 888
c_rt_lib0move(&___nl__im__360,___get_global_string_const(336));
#line 888
c_rt_lib0move(&___nl__im__340, c_rt_lib0concat_new(___nl__im__341, ___nl__im__360));
#line 888
c_rt_lib0clear(&___nl__im__341);
#line 888
c_rt_lib0clear(&___nl__im__360);
#line 888
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__340));
#line 888
c_rt_lib0clear(&___nl__im__340);
#line 889
goto label_1010;
#line 889
label_982:
;
#line 889
c_rt_lib0move(&___nl__im__362, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 889
c_rt_lib0move(&___nl__im__361, c_rt_lib0hash_get_value_dec(___nl__im__362, ___get_global_string_const(110)));
#line 889
c_rt_lib0clear(&___nl__im__362);
#line 889
___nl__bool__331 = c_rt_lib0priv_is(___nl__im__361, ___get_global_string_const(145));
#line 889
c_rt_lib0clear(&___nl__im__361);
#line 889
___nl__bool__331 = !___nl__bool__331;
#line 889
if(___nl__bool__331){ goto label_1006;}
#line 890
c_rt_lib0move(&___nl__im__364,___get_global_string_const(261));
#line 891
c_rt_lib0move(&___nl__im__367, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(244)));
#line 891
c_rt_lib0move(&___nl__im__366, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__367));
#line 891
c_rt_lib0clear(&___nl__im__367);
#line 892
c_rt_lib0move(&___nl__im__369, c_rt_lib0hash_get_value_dec(___nl__im__329, ___get_global_string_const(245)));
#line 892
c_rt_lib0move(&___nl__im__368, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__369));
#line 892
c_rt_lib0clear(&___nl__im__369);
#line 892
c_rt_lib0move(&___nl__im__365, c_rt_lib0array_mk(2, ___nl__im__366, ___nl__im__368));
#line 892
c_rt_lib0clear(&___nl__im__366);
#line 892
c_rt_lib0clear(&___nl__im__368);
#line 892
c_rt_lib0move(&___nl__im__363, generator_c_priv0get_fun_lib(___nl__im__364, ___nl__im__365));
#line 892
c_rt_lib0clear(&___nl__im__364);
#line 892
c_rt_lib0clear(&___nl__im__365);
#line 892
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__363));
#line 892
c_rt_lib0clear(&___nl__im__363);
#line 894
goto label_1010;
#line 894
label_1006:
;
#line 895
c_rt_lib0move(&___nl__im__370, c_rt_lib0array_mk(0));
#line 895
nl_die_arg(___nl__im__370);
#line 896
goto label_1010;
#line 896
label_1010:
;
#line 896
//clear ___nl__bool__331;
#line 896
c_rt_lib0clear(&___nl__im__334);
#line 896
c_rt_lib0clear(&___nl__im__370);
#line 897
goto label_1879;
#line 897
label_1015:
;
#line 897
c_rt_lib0move(&___nl__im__372, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(262)));
#line 897
c_rt_lib0copy(&___nl__im__371, ___nl__im__372);
#line 899
c_rt_lib0move(&___nl__im__376, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 899
c_rt_lib0move(&___nl__im__375, c_rt_lib0hash_get_value_dec(___nl__im__376, ___get_global_string_const(110)));
#line 899
c_rt_lib0clear(&___nl__im__376);
#line 899
___nl__bool__374 = c_rt_lib0priv_is(___nl__im__375, ___get_global_string_const(141));
#line 899
c_rt_lib0clear(&___nl__im__375);
#line 899
___nl__bool__374 = !___nl__bool__374;
#line 899
if(___nl__bool__374){ goto label_1067;}
#line 900
c_rt_lib0move(&___nl__im__380, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 900
c_rt_lib0move(&___nl__im__379, c_rt_lib0hash_get_value_dec(___nl__im__380, ___get_global_string_const(110)));
#line 900
c_rt_lib0clear(&___nl__im__380);
#line 900
c_rt_lib0move(&___nl__im__382, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 900
c_rt_lib0move(&___nl__im__381, c_rt_lib0hash_get_value_dec(___nl__im__382, ___get_global_string_const(110)));
#line 900
c_rt_lib0clear(&___nl__im__382);
#line 900
c_rt_lib0move(&___nl__im__378, c_rt_lib0priv_as(___nl__im__381, ___get_global_string_const(141)));
#line 900
c_rt_lib0clear(&___nl__im__379);
#line 900
c_rt_lib0clear(&___nl__im__381);
#line 900
c_rt_lib0move(&___nl__im__377, generator_c_priv0get_type_name(___nl__im__378));
#line 900
c_rt_lib0clear(&___nl__im__378);
#line 901
c_rt_lib0move(&___nl__im__386, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 901
c_rt_lib0move(&___nl__im__385, c_rt_lib0hash_get_value_dec(___nl__im__386, ___get_global_string_const(110)));
#line 901
c_rt_lib0clear(&___nl__im__386);
#line 901
c_rt_lib0move(&___nl__im__388, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 901
c_rt_lib0move(&___nl__im__387, c_rt_lib0hash_get_value_dec(___nl__im__388, ___get_global_string_const(110)));
#line 901
c_rt_lib0clear(&___nl__im__388);
#line 901
c_rt_lib0move(&___nl__im__384, c_rt_lib0priv_as(___nl__im__387, ___get_global_string_const(141)));
#line 901
c_rt_lib0clear(&___nl__im__385);
#line 901
c_rt_lib0clear(&___nl__im__387);
#line 901
___nl__bool__383 = generator_c_priv0is_anon(___nl__im__384);
#line 901
c_rt_lib0clear(&___nl__im__384);
#line 902
___nl__im_ptr__393 = &((*___ref___rec__0).mod_name0field);
#line 902
c_rt_lib0copy(&___nl__im__392, (*___nl__im_ptr__393));
#line 902
___nl__im_ptr__393 = NULL;
#line 902
c_rt_lib0move(&___nl__im__391, generator_c_priv0get_array_len_fun_name(___nl__im__377, ___nl__im__392, ___nl__bool__383));
#line 902
c_rt_lib0clear(&___nl__im__392);
#line 902
c_rt_lib0move(&___nl__im__394,___get_global_string_const(469));
#line 902
c_rt_lib0move(&___nl__im__390, c_rt_lib0concat_new(___nl__im__391, ___nl__im__394));
#line 902
c_rt_lib0clear(&___nl__im__391);
#line 902
c_rt_lib0clear(&___nl__im__394);
#line 903
c_rt_lib0move(&___nl__im__396, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 903
c_rt_lib0move(&___nl__im__395, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__396));
#line 903
c_rt_lib0clear(&___nl__im__396);
#line 903
c_rt_lib0move(&___nl__im__389, c_rt_lib0concat_new(___nl__im__390, ___nl__im__395));
#line 903
c_rt_lib0clear(&___nl__im__390);
#line 903
c_rt_lib0clear(&___nl__im__395);
#line 903
c_rt_lib0move(&___nl__im__397,___get_global_string_const(336));
#line 903
c_rt_lib0move(&___nl__im__373, c_rt_lib0concat_new(___nl__im__389, ___nl__im__397));
#line 903
c_rt_lib0clear(&___nl__im__389);
#line 903
c_rt_lib0clear(&___nl__im__397);
#line 904
goto label_1089;
#line 904
label_1067:
;
#line 904
c_rt_lib0move(&___nl__im__399, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 904
c_rt_lib0move(&___nl__im__398, c_rt_lib0hash_get_value_dec(___nl__im__399, ___get_global_string_const(110)));
#line 904
c_rt_lib0clear(&___nl__im__399);
#line 904
___nl__bool__374 = c_rt_lib0priv_is(___nl__im__398, ___get_global_string_const(145));
#line 904
c_rt_lib0clear(&___nl__im__398);
#line 904
___nl__bool__374 = !___nl__bool__374;
#line 904
if(___nl__bool__374){ goto label_1085;}
#line 905
c_rt_lib0move(&___nl__im__400,___get_global_string_const(262));
#line 905
c_rt_lib0move(&___nl__im__403, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(78)));
#line 905
c_rt_lib0move(&___nl__im__402, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__403));
#line 905
c_rt_lib0clear(&___nl__im__403);
#line 905
c_rt_lib0move(&___nl__im__401, c_rt_lib0array_mk(1, ___nl__im__402));
#line 905
c_rt_lib0clear(&___nl__im__402);
#line 905
c_rt_lib0move(&___nl__im__373, generator_c_priv0get_fun_lib(___nl__im__400, ___nl__im__401));
#line 905
c_rt_lib0clear(&___nl__im__400);
#line 905
c_rt_lib0clear(&___nl__im__401);
#line 906
goto label_1089;
#line 906
label_1085:
;
#line 907
c_rt_lib0move(&___nl__im__404, c_rt_lib0array_mk(0));
#line 907
nl_die_arg(___nl__im__404);
#line 908
goto label_1089;
#line 908
label_1089:
;
#line 908
//clear ___nl__bool__374;
#line 908
c_rt_lib0clear(&___nl__im__377);
#line 908
//clear ___nl__bool__383;
#line 908
c_rt_lib0clear(&___nl__im__404);
#line 909
c_rt_lib0move(&___nl__im__408, c_rt_lib0hash_get_value_dec(___nl__im__371, ___get_global_string_const(244)));
#line 909
c_rt_lib0move(&___nl__im__407, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__408));
#line 909
c_rt_lib0clear(&___nl__im__408);
#line 909
c_rt_lib0move(&___nl__im__409,___get_global_string_const(514));
#line 909
c_rt_lib0move(&___nl__im__406, c_rt_lib0concat_new(___nl__im__407, ___nl__im__409));
#line 909
c_rt_lib0clear(&___nl__im__407);
#line 909
c_rt_lib0clear(&___nl__im__409);
#line 909
c_rt_lib0move(&___nl__im__405, c_rt_lib0concat_new(___nl__im__406, ___nl__im__373));
#line 909
c_rt_lib0clear(&___nl__im__406);
#line 909
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__405));
#line 909
c_rt_lib0clear(&___nl__im__405);
#line 910
goto label_1879;
#line 910
label_1106:
;
#line 910
c_rt_lib0move(&___nl__im__411, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(263)));
#line 910
c_rt_lib0copy(&___nl__im__410, ___nl__im__411);
#line 912
c_rt_lib0move(&___nl__im__414, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(78)));
#line 912
c_rt_lib0move(&___nl__im__413, c_rt_lib0hash_get_value_dec(___nl__im__414, ___get_global_string_const(367)));
#line 912
c_rt_lib0clear(&___nl__im__414);
#line 912
___nl__bool__415 = c_rt_lib0priv_is(___nl__im__413, ___get_global_string_const(241));
#line 912
if(___nl__bool__415){ goto label_1119;}
#line 914
___nl__bool__415 = c_rt_lib0priv_is(___nl__im__413, ___get_global_string_const(434));
#line 914
if(___nl__bool__415){ goto label_1134;}
#line 914
c_rt_lib0move(&___nl__im__416,___get_global_string_const(15));
#line 914
c_rt_lib0move(&___nl__im__416, c_rt_lib0array_mk(2, ___nl__im__416, ___nl__im__413));
#line 914
nl_die_arg(___nl__im__416);
#line 912
label_1119:
;
#line 913
c_rt_lib0move(&___nl__im__417,___get_global_string_const(586));
#line 913
c_rt_lib0move(&___nl__im__420, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(78)));
#line 913
c_rt_lib0move(&___nl__im__419, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__420));
#line 913
c_rt_lib0clear(&___nl__im__420);
#line 913
c_rt_lib0move(&___nl__im__422, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(587)));
#line 913
c_rt_lib0move(&___nl__im__421, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__422));
#line 913
c_rt_lib0clear(&___nl__im__422);
#line 913
c_rt_lib0move(&___nl__im__418, c_rt_lib0array_mk(2, ___nl__im__419, ___nl__im__421));
#line 913
c_rt_lib0clear(&___nl__im__419);
#line 913
c_rt_lib0clear(&___nl__im__421);
#line 913
c_rt_lib0move(&___nl__im__412, generator_c_priv0get_fun_lib(___nl__im__417, ___nl__im__418));
#line 913
c_rt_lib0clear(&___nl__im__417);
#line 913
c_rt_lib0clear(&___nl__im__418);
#line 914
goto label_1190;
#line 914
label_1134:
;
#line 915
c_rt_lib0move(&___nl__im__425, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(78)));
#line 915
c_rt_lib0move(&___nl__im__424, c_rt_lib0hash_get_value_dec(___nl__im__425, ___get_global_string_const(110)));
#line 915
c_rt_lib0clear(&___nl__im__425);
#line 915
___nl__bool__423 = c_rt_lib0priv_is(___nl__im__424, ___get_global_string_const(569));
#line 915
c_rt_lib0clear(&___nl__im__424);
#line 915
___nl__bool__423 = !___nl__bool__423;
#line 915
if(___nl__bool__423){ goto label_1156;}
#line 916
c_rt_lib0move(&___nl__im__428, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(78)));
#line 916
c_rt_lib0move(&___nl__im__427, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__428));
#line 916
c_rt_lib0clear(&___nl__im__428);
#line 916
c_rt_lib0move(&___nl__im__429,___get_global_string_const(588));
#line 916
c_rt_lib0move(&___nl__im__426, c_rt_lib0concat_new(___nl__im__427, ___nl__im__429));
#line 916
c_rt_lib0clear(&___nl__im__427);
#line 916
c_rt_lib0clear(&___nl__im__429);
#line 916
c_rt_lib0move(&___nl__im__431, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(587)));
#line 916
c_rt_lib0move(&___nl__im__430, generator_c_priv0get_field_name(___nl__im__431));
#line 916
c_rt_lib0clear(&___nl__im__431);
#line 916
c_rt_lib0move(&___nl__im__412, c_rt_lib0concat_new(___nl__im__426, ___nl__im__430));
#line 916
c_rt_lib0clear(&___nl__im__426);
#line 916
c_rt_lib0clear(&___nl__im__430);
#line 917
goto label_1186;
#line 917
label_1156:
;
#line 917
c_rt_lib0move(&___nl__im__433, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(78)));
#line 917
c_rt_lib0move(&___nl__im__432, c_rt_lib0hash_get_value_dec(___nl__im__433, ___get_global_string_const(110)));
#line 917
c_rt_lib0clear(&___nl__im__433);
#line 917
___nl__bool__423 = c_rt_lib0priv_is(___nl__im__432, ___get_global_string_const(145));
#line 917
c_rt_lib0clear(&___nl__im__432);
#line 917
___nl__bool__423 = !___nl__bool__423;
#line 917
if(___nl__bool__423){ goto label_1182;}
#line 918
c_rt_lib0move(&___nl__im__434,___get_global_string_const(586));
#line 919
c_rt_lib0move(&___nl__im__437,___get_global_string_const(389));
#line 919
c_rt_lib0move(&___nl__im__439, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(78)));
#line 919
c_rt_lib0move(&___nl__im__438, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__439));
#line 919
c_rt_lib0clear(&___nl__im__439);
#line 919
c_rt_lib0move(&___nl__im__436, c_rt_lib0concat_new(___nl__im__437, ___nl__im__438));
#line 919
c_rt_lib0clear(&___nl__im__437);
#line 919
c_rt_lib0clear(&___nl__im__438);
#line 919
c_rt_lib0move(&___nl__im__441, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(587)));
#line 919
c_rt_lib0move(&___nl__im__440, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__441));
#line 919
c_rt_lib0clear(&___nl__im__441);
#line 919
c_rt_lib0move(&___nl__im__435, c_rt_lib0array_mk(2, ___nl__im__436, ___nl__im__440));
#line 919
c_rt_lib0clear(&___nl__im__436);
#line 919
c_rt_lib0clear(&___nl__im__440);
#line 919
c_rt_lib0move(&___nl__im__412, generator_c_priv0get_fun_lib(___nl__im__434, ___nl__im__435));
#line 919
c_rt_lib0clear(&___nl__im__434);
#line 919
c_rt_lib0clear(&___nl__im__435);
#line 920
goto label_1186;
#line 920
label_1182:
;
#line 921
c_rt_lib0move(&___nl__im__442, c_rt_lib0array_mk(0));
#line 921
nl_die_arg(___nl__im__442);
#line 922
goto label_1186;
#line 922
label_1186:
;
#line 922
//clear ___nl__bool__423;
#line 922
c_rt_lib0clear(&___nl__im__442);
#line 923
goto label_1190;
#line 923
label_1190:
;
#line 924
c_rt_lib0move(&___nl__im__444, c_rt_lib0hash_get_value_dec(___nl__im__410, ___get_global_string_const(244)));
#line 924
c_rt_lib0move(&___nl__im__443, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__444, ___nl__im__412));
#line 924
c_rt_lib0clear(&___nl__im__444);
#line 924
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__443));
#line 924
c_rt_lib0clear(&___nl__im__443);
#line 925
goto label_1879;
#line 925
label_1197:
;
#line 925
c_rt_lib0move(&___nl__im__446, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(264)));
#line 925
c_rt_lib0copy(&___nl__im__445, ___nl__im__446);
#line 926
c_rt_lib0move(&___nl__im__448,___get_global_string_const(589));
#line 927
c_rt_lib0move(&___nl__im__451, c_rt_lib0hash_get_value_dec(___nl__im__445, ___get_global_string_const(78)));
#line 927
c_rt_lib0move(&___nl__im__450, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__451));
#line 927
c_rt_lib0clear(&___nl__im__451);
#line 928
c_rt_lib0move(&___nl__im__453, c_rt_lib0hash_get_value_dec(___nl__im__445, ___get_global_string_const(587)));
#line 928
c_rt_lib0move(&___nl__im__452, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__453));
#line 928
c_rt_lib0clear(&___nl__im__453);
#line 929
c_rt_lib0move(&___nl__im__455, c_rt_lib0hash_get_value_dec(___nl__im__445, ___get_global_string_const(245)));
#line 929
c_rt_lib0move(&___nl__im__454, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__455));
#line 929
c_rt_lib0clear(&___nl__im__455);
#line 929
c_rt_lib0move(&___nl__im__449, c_rt_lib0array_mk(3, ___nl__im__450, ___nl__im__452, ___nl__im__454));
#line 929
c_rt_lib0clear(&___nl__im__450);
#line 929
c_rt_lib0clear(&___nl__im__452);
#line 929
c_rt_lib0clear(&___nl__im__454);
#line 929
c_rt_lib0move(&___nl__im__447, generator_c_priv0get_fun_lib(___nl__im__448, ___nl__im__449));
#line 929
c_rt_lib0clear(&___nl__im__448);
#line 929
c_rt_lib0clear(&___nl__im__449);
#line 929
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__447));
#line 929
c_rt_lib0clear(&___nl__im__447);
#line 931
goto label_1879;
#line 931
label_1220:
;
#line 931
c_rt_lib0move(&___nl__im__457, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(265)));
#line 931
c_rt_lib0copy(&___nl__im__456, ___nl__im__457);
#line 932
c_rt_lib0move(&___nl__im__460, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 932
c_rt_lib0move(&___nl__im__459, c_rt_lib0hash_get_value_dec(___nl__im__460, ___get_global_string_const(110)));
#line 932
c_rt_lib0clear(&___nl__im__460);
#line 932
___nl__bool__458 = c_rt_lib0priv_is(___nl__im__459, ___get_global_string_const(145));
#line 932
c_rt_lib0clear(&___nl__im__459);
#line 932
___nl__bool__458 = !___nl__bool__458;
#line 932
if(___nl__bool__458){ goto label_1271;}
#line 934
c_rt_lib0move(&___nl__im__462, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(78)));
#line 934
___nl__bool__463 = c_rt_lib0priv_is(___nl__im__462, ___get_global_string_const(294));
#line 934
if(___nl__bool__463){ goto label_1238;}
#line 936
___nl__bool__463 = c_rt_lib0priv_is(___nl__im__462, ___get_global_string_const(366));
#line 936
if(___nl__bool__463){ goto label_1253;}
#line 936
c_rt_lib0move(&___nl__im__464,___get_global_string_const(15));
#line 936
c_rt_lib0move(&___nl__im__464, c_rt_lib0array_mk(2, ___nl__im__464, ___nl__im__462));
#line 936
nl_die_arg(___nl__im__464);
#line 934
label_1238:
;
#line 934
c_rt_lib0move(&___nl__im__466, c_rt_lib0priv_as(___nl__im__462, ___get_global_string_const(294)));
#line 934
c_rt_lib0copy(&___nl__im__465, ___nl__im__466);
#line 935
c_rt_lib0move(&___nl__im__467,___get_global_string_const(590));
#line 935
c_rt_lib0move(&___nl__im__470, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(572)));
#line 935
c_rt_lib0move(&___nl__im__469, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__470));
#line 935
c_rt_lib0clear(&___nl__im__470);
#line 935
c_rt_lib0move(&___nl__im__471, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__465));
#line 935
c_rt_lib0move(&___nl__im__468, c_rt_lib0array_mk(2, ___nl__im__469, ___nl__im__471));
#line 935
c_rt_lib0clear(&___nl__im__469);
#line 935
c_rt_lib0clear(&___nl__im__471);
#line 935
c_rt_lib0move(&___nl__im__461, generator_c_priv0get_fun_lib(___nl__im__467, ___nl__im__468));
#line 935
c_rt_lib0clear(&___nl__im__467);
#line 935
c_rt_lib0clear(&___nl__im__468);
#line 936
goto label_1264;
#line 936
label_1253:
;
#line 937
c_rt_lib0move(&___nl__im__472,___get_global_string_const(557));
#line 937
c_rt_lib0move(&___nl__im__475, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(572)));
#line 937
c_rt_lib0move(&___nl__im__474, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__475));
#line 937
c_rt_lib0clear(&___nl__im__475);
#line 937
c_rt_lib0move(&___nl__im__473, c_rt_lib0array_mk(1, ___nl__im__474));
#line 937
c_rt_lib0clear(&___nl__im__474);
#line 937
c_rt_lib0move(&___nl__im__461, generator_c_priv0get_fun_lib(___nl__im__472, ___nl__im__473));
#line 937
c_rt_lib0clear(&___nl__im__472);
#line 937
c_rt_lib0clear(&___nl__im__473);
#line 938
goto label_1264;
#line 938
label_1264:
;
#line 939
c_rt_lib0move(&___nl__im__477, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 939
c_rt_lib0move(&___nl__im__476, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__477, ___nl__im__461));
#line 939
c_rt_lib0clear(&___nl__im__477);
#line 939
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__476));
#line 939
c_rt_lib0clear(&___nl__im__476);
#line 940
goto label_1380;
#line 940
label_1271:
;
#line 940
c_rt_lib0move(&___nl__im__479, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 940
c_rt_lib0move(&___nl__im__478, c_rt_lib0hash_get_value_dec(___nl__im__479, ___get_global_string_const(110)));
#line 940
c_rt_lib0clear(&___nl__im__479);
#line 940
___nl__bool__458 = c_rt_lib0priv_is(___nl__im__478, ___get_global_string_const(573));
#line 940
c_rt_lib0clear(&___nl__im__478);
#line 940
___nl__bool__458 = !___nl__bool__458;
#line 940
if(___nl__bool__458){ goto label_1376;}
#line 941
c_rt_lib0move(&___nl__im__483, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 941
c_rt_lib0move(&___nl__im__482, c_rt_lib0hash_get_value_dec(___nl__im__483, ___get_global_string_const(110)));
#line 941
c_rt_lib0clear(&___nl__im__483);
#line 941
c_rt_lib0move(&___nl__im__485, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 941
c_rt_lib0move(&___nl__im__484, c_rt_lib0hash_get_value_dec(___nl__im__485, ___get_global_string_const(110)));
#line 941
c_rt_lib0clear(&___nl__im__485);
#line 941
c_rt_lib0move(&___nl__im__481, c_rt_lib0priv_as(___nl__im__484, ___get_global_string_const(573)));
#line 941
c_rt_lib0clear(&___nl__im__482);
#line 941
c_rt_lib0clear(&___nl__im__484);
#line 941
c_rt_lib0move(&___nl__im__480, generator_c_priv0get_type_name(___nl__im__481));
#line 941
c_rt_lib0clear(&___nl__im__481);
#line 942
c_rt_lib0move(&___nl__im__489, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 942
c_rt_lib0move(&___nl__im__488, c_rt_lib0hash_get_value_dec(___nl__im__489, ___get_global_string_const(110)));
#line 942
c_rt_lib0clear(&___nl__im__489);
#line 942
c_rt_lib0move(&___nl__im__491, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 942
c_rt_lib0move(&___nl__im__490, c_rt_lib0hash_get_value_dec(___nl__im__491, ___get_global_string_const(110)));
#line 942
c_rt_lib0clear(&___nl__im__491);
#line 942
c_rt_lib0move(&___nl__im__487, c_rt_lib0priv_as(___nl__im__490, ___get_global_string_const(573)));
#line 942
c_rt_lib0clear(&___nl__im__488);
#line 942
c_rt_lib0clear(&___nl__im__490);
#line 942
___nl__bool__486 = generator_c_priv0is_anon(___nl__im__487);
#line 942
c_rt_lib0clear(&___nl__im__487);
#line 945
c_rt_lib0move(&___nl__im__494, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(78)));
#line 945
___nl__bool__495 = c_rt_lib0priv_is(___nl__im__494, ___get_global_string_const(294));
#line 945
if(___nl__bool__495){ goto label_1309;}
#line 948
___nl__bool__495 = c_rt_lib0priv_is(___nl__im__494, ___get_global_string_const(366));
#line 948
if(___nl__bool__495){ goto label_1325;}
#line 948
c_rt_lib0move(&___nl__im__496,___get_global_string_const(15));
#line 948
c_rt_lib0move(&___nl__im__496, c_rt_lib0array_mk(2, ___nl__im__496, ___nl__im__494));
#line 948
nl_die_arg(___nl__im__496);
#line 945
label_1309:
;
#line 945
c_rt_lib0move(&___nl__im__498, c_rt_lib0priv_as(___nl__im__494, ___get_global_string_const(294)));
#line 945
c_rt_lib0copy(&___nl__im__497, ___nl__im__498);
#line 946
c_rt_lib0move(&___nl__im__492, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__497));
#line 947
c_rt_lib0move(&___nl__im__500,___get_global_string_const(591));
#line 947
c_rt_lib0move(&___nl__im__502, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(592)));
#line 947
c_rt_lib0move(&___nl__im__501, generator_c_priv0get_type_name(___nl__im__502));
#line 947
c_rt_lib0clear(&___nl__im__502);
#line 947
c_rt_lib0move(&___nl__im__499, c_rt_lib0concat_new(___nl__im__500, ___nl__im__501));
#line 947
c_rt_lib0clear(&___nl__im__500);
#line 947
c_rt_lib0clear(&___nl__im__501);
#line 947
c_rt_lib0move(&___nl__im__503,___get_global_string_const(336));
#line 947
c_rt_lib0move(&___nl__im__493, c_rt_lib0concat_new(___nl__im__499, ___nl__im__503));
#line 947
c_rt_lib0clear(&___nl__im__499);
#line 947
c_rt_lib0clear(&___nl__im__503);
#line 948
goto label_1329;
#line 948
label_1325:
;
#line 949
c_rt_lib0move(&___nl__im__492,___get_global_string_const(593));
#line 950
c_rt_lib0move(&___nl__im__493,___get_global_string_const(20));
#line 951
goto label_1329;
#line 951
label_1329:
;
#line 952
___nl__im_ptr__515 = &((*___ref___rec__0).mod_name0field);
#line 952
c_rt_lib0copy(&___nl__im__514, (*___nl__im_ptr__515));
#line 952
___nl__im_ptr__515 = NULL;
#line 952
c_rt_lib0move(&___nl__im__513, generator_c_priv0get_variant_make_fun_name(___nl__im__480, ___nl__im__514, ___nl__bool__486));
#line 952
c_rt_lib0clear(&___nl__im__514);
#line 952
c_rt_lib0move(&___nl__im__516,___get_global_string_const(469));
#line 952
c_rt_lib0move(&___nl__im__512, c_rt_lib0concat_new(___nl__im__513, ___nl__im__516));
#line 952
c_rt_lib0clear(&___nl__im__513);
#line 952
c_rt_lib0clear(&___nl__im__516);
#line 953
c_rt_lib0move(&___nl__im__518, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(244)));
#line 953
c_rt_lib0move(&___nl__im__517, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__518));
#line 953
c_rt_lib0clear(&___nl__im__518);
#line 953
c_rt_lib0move(&___nl__im__511, c_rt_lib0concat_new(___nl__im__512, ___nl__im__517));
#line 953
c_rt_lib0clear(&___nl__im__512);
#line 953
c_rt_lib0clear(&___nl__im__517);
#line 953
c_rt_lib0move(&___nl__im__519,___get_global_string_const(343));
#line 953
c_rt_lib0move(&___nl__im__510, c_rt_lib0concat_new(___nl__im__511, ___nl__im__519));
#line 953
c_rt_lib0clear(&___nl__im__511);
#line 953
c_rt_lib0clear(&___nl__im__519);
#line 953
c_rt_lib0move(&___nl__im__521, c_rt_lib0hash_get_value_dec(___nl__im__456, ___get_global_string_const(577)));
#line 953
___nl__int__520 = getIntFromImm(___nl__im__521);
#line 953
c_rt_lib0clear(&___nl__im__521);
#line 953
c_rt_lib0move(&___nl__string__522, c_rt_lib0int_to_string(___nl__int__520));
#line 953
c_rt_lib0move(&___nl__im__509, c_rt_lib0concat_new(___nl__im__510, ___nl__string__522));
#line 953
c_rt_lib0clear(&___nl__im__510);
#line 953
//clear ___nl__int__520;
#line 953
c_rt_lib0clear(&___nl__string__522);
#line 953
c_rt_lib0move(&___nl__im__523,___get_global_string_const(343));
#line 953
c_rt_lib0move(&___nl__im__508, c_rt_lib0concat_new(___nl__im__509, ___nl__im__523));
#line 953
c_rt_lib0clear(&___nl__im__509);
#line 953
c_rt_lib0clear(&___nl__im__523);
#line 953
c_rt_lib0move(&___nl__im__507, c_rt_lib0concat_new(___nl__im__508, ___nl__im__492));
#line 953
c_rt_lib0clear(&___nl__im__508);
#line 954
c_rt_lib0move(&___nl__im__524,___get_global_string_const(343));
#line 954
c_rt_lib0move(&___nl__im__506, c_rt_lib0concat_new(___nl__im__507, ___nl__im__524));
#line 954
c_rt_lib0clear(&___nl__im__507);
#line 954
c_rt_lib0clear(&___nl__im__524);
#line 954
c_rt_lib0move(&___nl__im__505, c_rt_lib0concat_new(___nl__im__506, ___nl__im__493));
#line 954
c_rt_lib0clear(&___nl__im__506);
#line 954
c_rt_lib0move(&___nl__im__525,___get_global_string_const(336));
#line 954
c_rt_lib0move(&___nl__im__504, c_rt_lib0concat_new(___nl__im__505, ___nl__im__525));
#line 954
c_rt_lib0clear(&___nl__im__505);
#line 954
c_rt_lib0clear(&___nl__im__525);
#line 954
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__504));
#line 954
c_rt_lib0clear(&___nl__im__504);
#line 955
goto label_1380;
#line 955
label_1376:
;
#line 956
c_rt_lib0move(&___nl__im__526, c_rt_lib0array_mk(0));
#line 956
nl_die_arg(___nl__im__526);
#line 957
goto label_1380;
#line 957
label_1380:
;
#line 957
//clear ___nl__bool__458;
#line 957
c_rt_lib0clear(&___nl__im__461);
#line 957
c_rt_lib0clear(&___nl__im__462);
#line 957
//clear ___nl__bool__463;
#line 957
c_rt_lib0clear(&___nl__im__464);
#line 957
c_rt_lib0clear(&___nl__im__465);
#line 957
c_rt_lib0clear(&___nl__im__466);
#line 957
c_rt_lib0clear(&___nl__im__480);
#line 957
//clear ___nl__bool__486;
#line 957
c_rt_lib0clear(&___nl__im__492);
#line 957
c_rt_lib0clear(&___nl__im__493);
#line 957
c_rt_lib0clear(&___nl__im__494);
#line 957
//clear ___nl__bool__495;
#line 957
c_rt_lib0clear(&___nl__im__496);
#line 957
c_rt_lib0clear(&___nl__im__497);
#line 957
c_rt_lib0clear(&___nl__im__498);
#line 957
c_rt_lib0clear(&___nl__im__526);
#line 958
goto label_1879;
#line 958
label_1399:
;
#line 958
c_rt_lib0move(&___nl__im__528, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(268)));
#line 958
___nl__int__527 = getIntFromImm(___nl__im__528);
#line 959
c_rt_lib0move(&___nl__im__534,___get_global_string_const(594));
#line 959
c_rt_lib0move(&___nl__string__535, c_rt_lib0int_to_string(___nl__int__527));
#line 959
c_rt_lib0move(&___nl__im__533, c_rt_lib0concat_new(___nl__im__534, ___nl__string__535));
#line 959
c_rt_lib0clear(&___nl__im__534);
#line 959
c_rt_lib0clear(&___nl__string__535);
#line 959
c_rt_lib0move(&___nl__im__536,___get_global_string_const(540));
#line 959
c_rt_lib0move(&___nl__im__532, c_rt_lib0concat_new(___nl__im__533, ___nl__im__536));
#line 959
c_rt_lib0clear(&___nl__im__533);
#line 959
c_rt_lib0clear(&___nl__im__536);
#line 959
c_rt_lib0move(&___nl__im__537, string0lf());
#line 959
c_rt_lib0move(&___nl__im__531, c_rt_lib0concat_new(___nl__im__532, ___nl__im__537));
#line 959
c_rt_lib0clear(&___nl__im__532);
#line 959
c_rt_lib0clear(&___nl__im__537);
#line 959
c_rt_lib0move(&___nl__im__538,___get_global_string_const(454));
#line 959
c_rt_lib0move(&___nl__im__530, c_rt_lib0concat_new(___nl__im__531, ___nl__im__538));
#line 959
c_rt_lib0clear(&___nl__im__531);
#line 959
c_rt_lib0clear(&___nl__im__538);
#line 959
c_rt_lib0move(&___nl__im__539, string0lf());
#line 959
c_rt_lib0move(&___nl__im__529, c_rt_lib0concat_new(___nl__im__530, ___nl__im__539));
#line 959
c_rt_lib0clear(&___nl__im__530);
#line 959
c_rt_lib0clear(&___nl__im__539);
#line 959
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__529));
#line 959
c_rt_lib0clear(&___nl__im__529);
#line 960
c_rt_lib0clear(&___nl__im__1);
#line 960
c_rt_lib0clear(&___nl__im__2);
#line 960
//clear ___nl__bool__13;
#line 960
c_rt_lib0clear(&___nl__im__14);
#line 960
//clear ___nl__bool__15;
#line 960
c_rt_lib0clear(&___nl__im__16);
#line 960
c_rt_lib0clear(&___nl__im__17);
#line 960
c_rt_lib0clear(&___nl__im__18);
#line 960
c_rt_lib0clear(&___nl__im__69);
#line 960
c_rt_lib0clear(&___nl__im__70);
#line 960
c_rt_lib0clear(&___nl__im__113);
#line 960
c_rt_lib0clear(&___nl__im__114);
#line 960
c_rt_lib0clear(&___nl__im__115);
#line 960
c_rt_lib0clear(&___nl__im__116);
#line 960
c_rt_lib0clear(&___nl__im__117);
#line 960
c_rt_lib0clear(&___nl__im__122);
#line 960
c_rt_lib0clear(&___nl__im__123);
#line 960
c_rt_lib0clear(&___nl__im__124);
#line 960
c_rt_lib0clear(&___nl__im__125);
#line 960
c_rt_lib0clear(&___nl__im__126);
#line 960
c_rt_lib0clear(&___nl__im__129);
#line 960
c_rt_lib0clear(&___nl__im__147);
#line 960
c_rt_lib0clear(&___nl__im__148);
#line 960
c_rt_lib0clear(&___nl__im__149);
#line 960
c_rt_lib0clear(&___nl__im__150);
#line 960
c_rt_lib0clear(&___nl__im__183);
#line 960
c_rt_lib0clear(&___nl__im__184);
#line 960
c_rt_lib0clear(&___nl__im__227);
#line 960
c_rt_lib0clear(&___nl__im__228);
#line 960
//clear ___nl__bool__229;
#line 960
c_rt_lib0clear(&___nl__im__230);
#line 960
c_rt_lib0clear(&___nl__im__231);
#line 960
c_rt_lib0clear(&___nl__im__232);
#line 960
c_rt_lib0clear(&___nl__im__239);
#line 960
c_rt_lib0clear(&___nl__im__240);
#line 960
c_rt_lib0clear(&___nl__im__246);
#line 960
c_rt_lib0clear(&___nl__im__247);
#line 960
c_rt_lib0clear(&___nl__im__250);
#line 960
c_rt_lib0clear(&___nl__im__251);
#line 960
c_rt_lib0clear(&___nl__im__255);
#line 960
//clear ___nl__bool__257;
#line 960
c_rt_lib0clear(&___nl__im__258);
#line 960
c_rt_lib0clear(&___nl__im__295);
#line 960
c_rt_lib0clear(&___nl__im__296);
#line 960
c_rt_lib0clear(&___nl__im__297);
#line 960
c_rt_lib0clear(&___nl__im__298);
#line 960
c_rt_lib0clear(&___nl__im__299);
#line 960
c_rt_lib0clear(&___nl__im__300);
#line 960
c_rt_lib0clear(&___nl__im__301);
#line 960
c_rt_lib0clear(&___nl__im__302);
#line 960
c_rt_lib0clear(&___nl__im__303);
#line 960
c_rt_lib0clear(&___nl__im__304);
#line 960
c_rt_lib0clear(&___nl__im__305);
#line 960
c_rt_lib0clear(&___nl__im__306);
#line 960
c_rt_lib0clear(&___nl__im__307);
#line 960
c_rt_lib0clear(&___nl__im__308);
#line 960
c_rt_lib0clear(&___nl__im__309);
#line 960
c_rt_lib0clear(&___nl__im__318);
#line 960
c_rt_lib0clear(&___nl__im__319);
#line 960
c_rt_lib0clear(&___nl__im__329);
#line 960
c_rt_lib0clear(&___nl__im__330);
#line 960
c_rt_lib0clear(&___nl__im__371);
#line 960
c_rt_lib0clear(&___nl__im__372);
#line 960
c_rt_lib0clear(&___nl__im__373);
#line 960
c_rt_lib0clear(&___nl__im__410);
#line 960
c_rt_lib0clear(&___nl__im__411);
#line 960
c_rt_lib0clear(&___nl__im__412);
#line 960
c_rt_lib0clear(&___nl__im__413);
#line 960
//clear ___nl__bool__415;
#line 960
c_rt_lib0clear(&___nl__im__416);
#line 960
c_rt_lib0clear(&___nl__im__445);
#line 960
c_rt_lib0clear(&___nl__im__446);
#line 960
c_rt_lib0clear(&___nl__im__456);
#line 960
c_rt_lib0clear(&___nl__im__457);
#line 960
//clear ___nl__int__527;
#line 960
c_rt_lib0clear(&___nl__im__528);
#line 960
return NULL;
#line 961
goto label_1879;
#line 961
label_1503:
;
#line 961
c_rt_lib0move(&___nl__im__541, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(269)));
#line 961
c_rt_lib0copy(&___nl__im__540, ___nl__im__541);
#line 962
c_rt_lib0move(&___nl__im__542,___get_global_string_const(595));
#line 962
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__542));
#line 962
c_rt_lib0clear(&___nl__im__542);
#line 963
c_rt_lib0move(&___nl__im__544, c_rt_lib0hash_get_value_dec(___nl__im__540, ___get_global_string_const(78)));
#line 963
c_rt_lib0move(&___nl__im__543, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__544));
#line 963
c_rt_lib0clear(&___nl__im__544);
#line 963
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__543));
#line 963
c_rt_lib0clear(&___nl__im__543);
#line 964
c_rt_lib0move(&___nl__im__548,___get_global_string_const(596));
#line 964
c_rt_lib0move(&___nl__im__550, c_rt_lib0hash_get_value_dec(___nl__im__540, ___get_global_string_const(244)));
#line 964
___nl__int__549 = getIntFromImm(___nl__im__550);
#line 964
c_rt_lib0clear(&___nl__im__550);
#line 964
c_rt_lib0move(&___nl__string__551, c_rt_lib0int_to_string(___nl__int__549));
#line 964
c_rt_lib0move(&___nl__im__547, c_rt_lib0concat_new(___nl__im__548, ___nl__string__551));
#line 964
c_rt_lib0clear(&___nl__im__548);
#line 964
//clear ___nl__int__549;
#line 964
c_rt_lib0clear(&___nl__string__551);
#line 964
c_rt_lib0move(&___nl__im__552,___get_global_string_const(597));
#line 964
c_rt_lib0move(&___nl__im__546, c_rt_lib0concat_new(___nl__im__547, ___nl__im__552));
#line 964
c_rt_lib0clear(&___nl__im__547);
#line 964
c_rt_lib0clear(&___nl__im__552);
#line 964
c_rt_lib0move(&___nl__im__553, string0lf());
#line 964
c_rt_lib0move(&___nl__im__545, c_rt_lib0concat_new(___nl__im__546, ___nl__im__553));
#line 964
c_rt_lib0clear(&___nl__im__546);
#line 964
c_rt_lib0clear(&___nl__im__553);
#line 964
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__545));
#line 964
c_rt_lib0clear(&___nl__im__545);
#line 965
c_rt_lib0clear(&___nl__im__1);
#line 965
c_rt_lib0clear(&___nl__im__2);
#line 965
//clear ___nl__bool__13;
#line 965
c_rt_lib0clear(&___nl__im__14);
#line 965
//clear ___nl__bool__15;
#line 965
c_rt_lib0clear(&___nl__im__16);
#line 965
c_rt_lib0clear(&___nl__im__17);
#line 965
c_rt_lib0clear(&___nl__im__18);
#line 965
c_rt_lib0clear(&___nl__im__69);
#line 965
c_rt_lib0clear(&___nl__im__70);
#line 965
c_rt_lib0clear(&___nl__im__113);
#line 965
c_rt_lib0clear(&___nl__im__114);
#line 965
c_rt_lib0clear(&___nl__im__115);
#line 965
c_rt_lib0clear(&___nl__im__116);
#line 965
c_rt_lib0clear(&___nl__im__117);
#line 965
c_rt_lib0clear(&___nl__im__122);
#line 965
c_rt_lib0clear(&___nl__im__123);
#line 965
c_rt_lib0clear(&___nl__im__124);
#line 965
c_rt_lib0clear(&___nl__im__125);
#line 965
c_rt_lib0clear(&___nl__im__126);
#line 965
c_rt_lib0clear(&___nl__im__129);
#line 965
c_rt_lib0clear(&___nl__im__147);
#line 965
c_rt_lib0clear(&___nl__im__148);
#line 965
c_rt_lib0clear(&___nl__im__149);
#line 965
c_rt_lib0clear(&___nl__im__150);
#line 965
c_rt_lib0clear(&___nl__im__183);
#line 965
c_rt_lib0clear(&___nl__im__184);
#line 965
c_rt_lib0clear(&___nl__im__227);
#line 965
c_rt_lib0clear(&___nl__im__228);
#line 965
//clear ___nl__bool__229;
#line 965
c_rt_lib0clear(&___nl__im__230);
#line 965
c_rt_lib0clear(&___nl__im__231);
#line 965
c_rt_lib0clear(&___nl__im__232);
#line 965
c_rt_lib0clear(&___nl__im__239);
#line 965
c_rt_lib0clear(&___nl__im__240);
#line 965
c_rt_lib0clear(&___nl__im__246);
#line 965
c_rt_lib0clear(&___nl__im__247);
#line 965
c_rt_lib0clear(&___nl__im__250);
#line 965
c_rt_lib0clear(&___nl__im__251);
#line 965
c_rt_lib0clear(&___nl__im__255);
#line 965
//clear ___nl__bool__257;
#line 965
c_rt_lib0clear(&___nl__im__258);
#line 965
c_rt_lib0clear(&___nl__im__295);
#line 965
c_rt_lib0clear(&___nl__im__296);
#line 965
c_rt_lib0clear(&___nl__im__297);
#line 965
c_rt_lib0clear(&___nl__im__298);
#line 965
c_rt_lib0clear(&___nl__im__299);
#line 965
c_rt_lib0clear(&___nl__im__300);
#line 965
c_rt_lib0clear(&___nl__im__301);
#line 965
c_rt_lib0clear(&___nl__im__302);
#line 965
c_rt_lib0clear(&___nl__im__303);
#line 965
c_rt_lib0clear(&___nl__im__304);
#line 965
c_rt_lib0clear(&___nl__im__305);
#line 965
c_rt_lib0clear(&___nl__im__306);
#line 965
c_rt_lib0clear(&___nl__im__307);
#line 965
c_rt_lib0clear(&___nl__im__308);
#line 965
c_rt_lib0clear(&___nl__im__309);
#line 965
c_rt_lib0clear(&___nl__im__318);
#line 965
c_rt_lib0clear(&___nl__im__319);
#line 965
c_rt_lib0clear(&___nl__im__329);
#line 965
c_rt_lib0clear(&___nl__im__330);
#line 965
c_rt_lib0clear(&___nl__im__371);
#line 965
c_rt_lib0clear(&___nl__im__372);
#line 965
c_rt_lib0clear(&___nl__im__373);
#line 965
c_rt_lib0clear(&___nl__im__410);
#line 965
c_rt_lib0clear(&___nl__im__411);
#line 965
c_rt_lib0clear(&___nl__im__412);
#line 965
c_rt_lib0clear(&___nl__im__413);
#line 965
//clear ___nl__bool__415;
#line 965
c_rt_lib0clear(&___nl__im__416);
#line 965
c_rt_lib0clear(&___nl__im__445);
#line 965
c_rt_lib0clear(&___nl__im__446);
#line 965
c_rt_lib0clear(&___nl__im__456);
#line 965
c_rt_lib0clear(&___nl__im__457);
#line 965
//clear ___nl__int__527;
#line 965
c_rt_lib0clear(&___nl__im__528);
#line 965
c_rt_lib0clear(&___nl__im__540);
#line 965
c_rt_lib0clear(&___nl__im__541);
#line 965
return NULL;
#line 966
goto label_1879;
#line 966
label_1613:
;
#line 966
c_rt_lib0move(&___nl__im__555, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(270)));
#line 966
___nl__int__554 = getIntFromImm(___nl__im__555);
#line 967
c_rt_lib0move(&___nl__im__557,___get_global_string_const(598));
#line 967
c_rt_lib0move(&___nl__string__558, c_rt_lib0int_to_string(___nl__int__554));
#line 967
c_rt_lib0move(&___nl__im__556, c_rt_lib0concat_new(___nl__im__557, ___nl__string__558));
#line 967
c_rt_lib0clear(&___nl__im__557);
#line 967
c_rt_lib0clear(&___nl__string__558);
#line 967
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__556));
#line 967
c_rt_lib0clear(&___nl__im__556);
#line 968
goto label_1879;
#line 968
label_1624:
;
#line 968
c_rt_lib0move(&___nl__im__560, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(271)));
#line 968
c_rt_lib0copy(&___nl__im__559, ___nl__im__560);
#line 969
c_rt_lib0move(&___nl__im__561, c_rt_lib0hash_get_value_dec(___nl__im__559, ___get_global_string_const(110)));
#line 969
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(145));
#line 969
if(___nl__bool__562){ goto label_1647;}
#line 971
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(419));
#line 971
if(___nl__bool__562){ goto label_1658;}
#line 973
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(33));
#line 973
if(___nl__bool__562){ goto label_1667;}
#line 975
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(420));
#line 975
if(___nl__bool__562){ goto label_1676;}
#line 977
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(569));
#line 977
if(___nl__bool__562){ goto label_1687;}
#line 979
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(141));
#line 979
if(___nl__bool__562){ goto label_1700;}
#line 981
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(573));
#line 981
if(___nl__bool__562){ goto label_1717;}
#line 983
___nl__bool__562 = c_rt_lib0priv_is(___nl__im__561, ___get_global_string_const(142));
#line 983
if(___nl__bool__562){ goto label_1730;}
#line 983
c_rt_lib0move(&___nl__im__563,___get_global_string_const(15));
#line 983
c_rt_lib0move(&___nl__im__563, c_rt_lib0array_mk(2, ___nl__im__563, ___nl__im__561));
#line 983
nl_die_arg(___nl__im__563);
#line 969
label_1647:
;
#line 970
c_rt_lib0move(&___nl__im__565,___get_global_string_const(271));
#line 970
c_rt_lib0move(&___nl__im__567, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__559));
#line 970
c_rt_lib0move(&___nl__im__566, c_rt_lib0array_mk(1, ___nl__im__567));
#line 970
c_rt_lib0clear(&___nl__im__567);
#line 970
c_rt_lib0move(&___nl__im__564, generator_c_priv0get_fun_lib(___nl__im__565, ___nl__im__566));
#line 970
c_rt_lib0clear(&___nl__im__565);
#line 970
c_rt_lib0clear(&___nl__im__566);
#line 970
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__564));
#line 970
c_rt_lib0clear(&___nl__im__564);
#line 971
goto label_1743;
#line 971
label_1658:
;
#line 972
c_rt_lib0move(&___nl__im__569,___get_global_string_const(599));
#line 972
c_rt_lib0move(&___nl__im__570, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__559));
#line 972
c_rt_lib0move(&___nl__im__568, c_rt_lib0concat_new(___nl__im__569, ___nl__im__570));
#line 972
c_rt_lib0clear(&___nl__im__569);
#line 972
c_rt_lib0clear(&___nl__im__570);
#line 972
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__568));
#line 972
c_rt_lib0clear(&___nl__im__568);
#line 973
goto label_1743;
#line 973
label_1667:
;
#line 974
c_rt_lib0move(&___nl__im__572,___get_global_string_const(599));
#line 974
c_rt_lib0move(&___nl__im__573, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__559));
#line 974
c_rt_lib0move(&___nl__im__571, c_rt_lib0concat_new(___nl__im__572, ___nl__im__573));
#line 974
c_rt_lib0clear(&___nl__im__572);
#line 974
c_rt_lib0clear(&___nl__im__573);
#line 974
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__571));
#line 974
c_rt_lib0clear(&___nl__im__571);
#line 975
goto label_1743;
#line 975
label_1676:
;
#line 976
c_rt_lib0move(&___nl__im__575,___get_global_string_const(271));
#line 976
c_rt_lib0move(&___nl__im__577, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__559));
#line 976
c_rt_lib0move(&___nl__im__576, c_rt_lib0array_mk(1, ___nl__im__577));
#line 976
c_rt_lib0clear(&___nl__im__577);
#line 976
c_rt_lib0move(&___nl__im__574, generator_c_priv0get_fun_lib(___nl__im__575, ___nl__im__576));
#line 976
c_rt_lib0clear(&___nl__im__575);
#line 976
c_rt_lib0clear(&___nl__im__576);
#line 976
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__574));
#line 976
c_rt_lib0clear(&___nl__im__574);
#line 977
goto label_1743;
#line 977
label_1687:
;
#line 977
c_rt_lib0move(&___nl__im__579, c_rt_lib0priv_as(___nl__im__561, ___get_global_string_const(569)));
#line 977
c_rt_lib0copy(&___nl__im__578, ___nl__im__579);
#line 978
___nl__im_ptr__582 = &((*___ref___rec__0).mod_name0field);
#line 978
c_rt_lib0copy(&___nl__im__581, (*___nl__im_ptr__582));
#line 978
___nl__im_ptr__582 = NULL;
#line 978
c_rt_lib0move(&___nl__im__583, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__559));
#line 978
c_rt_lib0move(&___nl__im__580, generator_c_priv0get_clean_fun_call(___nl__im__578, ___nl__im__581, ___nl__im__583, ___nl__im__2));
#line 978
c_rt_lib0clear(&___nl__im__581);
#line 978
c_rt_lib0clear(&___nl__im__583);
#line 978
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__580));
#line 978
c_rt_lib0clear(&___nl__im__580);
#line 979
goto label_1743;
#line 979
label_1700:
;
#line 979
c_rt_lib0move(&___nl__im__585, c_rt_lib0priv_as(___nl__im__561, ___get_global_string_const(141)));
#line 979
c_rt_lib0copy(&___nl__im__584, ___nl__im__585);
#line 980
c_rt_lib0move(&___nl__im__587, string0lf());
#line 980
___nl__im_ptr__590 = &((*___ref___rec__0).mod_name0field);
#line 980
c_rt_lib0copy(&___nl__im__589, (*___nl__im_ptr__590));
#line 980
___nl__im_ptr__590 = NULL;
#line 980
c_rt_lib0move(&___nl__im__591, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__559));
#line 980
c_rt_lib0move(&___nl__im__588, generator_c_priv0get_clean_fun_call(___nl__im__584, ___nl__im__589, ___nl__im__591, ___nl__im__2));
#line 980
c_rt_lib0clear(&___nl__im__589);
#line 980
c_rt_lib0clear(&___nl__im__591);
#line 980
c_rt_lib0move(&___nl__im__586, c_rt_lib0concat_new(___nl__im__587, ___nl__im__588));
#line 980
c_rt_lib0clear(&___nl__im__587);
#line 980
c_rt_lib0clear(&___nl__im__588);
#line 980
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__586));
#line 980
c_rt_lib0clear(&___nl__im__586);
#line 981
goto label_1743;
#line 981
label_1717:
;
#line 981
c_rt_lib0move(&___nl__im__593, c_rt_lib0priv_as(___nl__im__561, ___get_global_string_const(573)));
#line 981
c_rt_lib0copy(&___nl__im__592, ___nl__im__593);
#line 982
___nl__im_ptr__596 = &((*___ref___rec__0).mod_name0field);
#line 982
c_rt_lib0copy(&___nl__im__595, (*___nl__im_ptr__596));
#line 982
___nl__im_ptr__596 = NULL;
#line 982
c_rt_lib0move(&___nl__im__597, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__559));
#line 982
c_rt_lib0move(&___nl__im__594, generator_c_priv0get_clean_fun_call(___nl__im__592, ___nl__im__595, ___nl__im__597, ___nl__im__2));
#line 982
c_rt_lib0clear(&___nl__im__595);
#line 982
c_rt_lib0clear(&___nl__im__597);
#line 982
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__594));
#line 982
c_rt_lib0clear(&___nl__im__594);
#line 983
goto label_1743;
#line 983
label_1730:
;
#line 983
c_rt_lib0move(&___nl__im__599, c_rt_lib0priv_as(___nl__im__561, ___get_global_string_const(142)));
#line 983
c_rt_lib0copy(&___nl__im__598, ___nl__im__599);
#line 984
___nl__im_ptr__602 = &((*___ref___rec__0).mod_name0field);
#line 984
c_rt_lib0copy(&___nl__im__601, (*___nl__im_ptr__602));
#line 984
___nl__im_ptr__602 = NULL;
#line 984
c_rt_lib0move(&___nl__im__603, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__559));
#line 984
c_rt_lib0move(&___nl__im__600, generator_c_priv0get_clean_fun_call(___nl__im__598, ___nl__im__601, ___nl__im__603, ___nl__im__2));
#line 984
c_rt_lib0clear(&___nl__im__601);
#line 984
c_rt_lib0clear(&___nl__im__603);
#line 984
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__600));
#line 984
c_rt_lib0clear(&___nl__im__600);
#line 985
goto label_1743;
#line 985
label_1743:
;
#line 986
goto label_1879;
#line 986
label_1745:
;
#line 986
c_rt_lib0move(&___nl__im__605, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(272)));
#line 986
c_rt_lib0copy(&___nl__im__604, ___nl__im__605);
#line 987
goto label_1879;
#line 987
label_1749:
;
#line 987
c_rt_lib0move(&___nl__im__607, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(273)));
#line 987
c_rt_lib0copy(&___nl__im__606, ___nl__im__607);
#line 988
c_rt_lib0delete(generator_c_priv0print_use_field(___ref___rec__0, ___nl__im__606));
#line 989
goto label_1879;
#line 989
label_1754:
;
#line 989
c_rt_lib0move(&___nl__im__609, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(274)));
#line 989
c_rt_lib0copy(&___nl__im__608, ___nl__im__609);
#line 990
c_rt_lib0move(&___nl__im__612, c_rt_lib0hash_get_value_dec(___nl__im__608, ___get_global_string_const(376)));
#line 990
c_rt_lib0move(&___nl__im__611, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__612));
#line 990
c_rt_lib0clear(&___nl__im__612);
#line 990
c_rt_lib0move(&___nl__im__613,___get_global_string_const(600));
#line 990
c_rt_lib0move(&___nl__im__610, c_rt_lib0concat_new(___nl__im__611, ___nl__im__613));
#line 990
c_rt_lib0clear(&___nl__im__611);
#line 990
c_rt_lib0clear(&___nl__im__613);
#line 990
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__610));
#line 990
c_rt_lib0clear(&___nl__im__610);
#line 991
goto label_1879;
#line 991
label_1767:
;
#line 991
c_rt_lib0move(&___nl__im__615, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(275)));
#line 991
c_rt_lib0copy(&___nl__im__614, ___nl__im__615);
#line 992
c_rt_lib0delete(generator_c_priv0print_use_index(___ref___rec__0, ___nl__im__614));
#line 993
goto label_1879;
#line 993
label_1772:
;
#line 993
c_rt_lib0move(&___nl__im__617, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(276)));
#line 993
c_rt_lib0copy(&___nl__im__616, ___nl__im__617);
#line 994
c_rt_lib0move(&___nl__im__620, c_rt_lib0hash_get_value_dec(___nl__im__616, ___get_global_string_const(376)));
#line 994
c_rt_lib0move(&___nl__im__619, c_rt_lib0hash_get_value_dec(___nl__im__620, ___get_global_string_const(110)));
#line 994
c_rt_lib0clear(&___nl__im__620);
#line 994
___nl__bool__618 = c_rt_lib0priv_is(___nl__im__619, ___get_global_string_const(145));
#line 994
c_rt_lib0clear(&___nl__im__619);
#line 994
___nl__bool__618 = !___nl__bool__618;
#line 994
if(___nl__bool__618){ goto label_1792;}
#line 995
c_rt_lib0move(&___nl__im__622,___get_global_string_const(601));
#line 995
c_rt_lib0move(&___nl__im__624, c_rt_lib0hash_get_value_dec(___nl__im__616, ___get_global_string_const(376)));
#line 995
c_rt_lib0move(&___nl__im__623, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__624));
#line 995
c_rt_lib0clear(&___nl__im__624);
#line 995
c_rt_lib0move(&___nl__im__621, c_rt_lib0concat_new(___nl__im__622, ___nl__im__623));
#line 995
c_rt_lib0clear(&___nl__im__622);
#line 995
c_rt_lib0clear(&___nl__im__623);
#line 995
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__621));
#line 995
c_rt_lib0clear(&___nl__im__621);
#line 996
goto label_1803;
#line 996
label_1792:
;
#line 997
c_rt_lib0move(&___nl__im__627, c_rt_lib0hash_get_value_dec(___nl__im__616, ___get_global_string_const(376)));
#line 997
c_rt_lib0move(&___nl__im__626, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__627));
#line 997
c_rt_lib0clear(&___nl__im__627);
#line 997
c_rt_lib0move(&___nl__im__628,___get_global_string_const(600));
#line 997
c_rt_lib0move(&___nl__im__625, c_rt_lib0concat_new(___nl__im__626, ___nl__im__628));
#line 997
c_rt_lib0clear(&___nl__im__626);
#line 997
c_rt_lib0clear(&___nl__im__628);
#line 997
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__625));
#line 997
c_rt_lib0clear(&___nl__im__625);
#line 998
goto label_1803;
#line 998
label_1803:
;
#line 998
//clear ___nl__bool__618;
#line 999
goto label_1879;
#line 999
label_1806:
;
#line 999
c_rt_lib0move(&___nl__im__630, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(277)));
#line 999
c_rt_lib0copy(&___nl__im__629, ___nl__im__630);
#line 1000
c_rt_lib0delete(generator_c_priv0print_use_hash_index(___ref___rec__0, ___nl__im__629));
#line 1001
goto label_1879;
#line 1001
label_1811:
;
#line 1001
c_rt_lib0move(&___nl__im__632, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(278)));
#line 1001
c_rt_lib0copy(&___nl__im__631, ___nl__im__632);
#line 1002
c_rt_lib0move(&___nl__im__635, c_rt_lib0hash_get_value_dec(___nl__im__631, ___get_global_string_const(376)));
#line 1002
c_rt_lib0move(&___nl__im__634, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__635));
#line 1002
c_rt_lib0clear(&___nl__im__635);
#line 1002
c_rt_lib0move(&___nl__im__636,___get_global_string_const(600));
#line 1002
c_rt_lib0move(&___nl__im__633, c_rt_lib0concat_new(___nl__im__634, ___nl__im__636));
#line 1002
c_rt_lib0clear(&___nl__im__634);
#line 1002
c_rt_lib0clear(&___nl__im__636);
#line 1002
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__633));
#line 1002
c_rt_lib0clear(&___nl__im__633);
#line 1003
goto label_1879;
#line 1003
label_1824:
;
#line 1003
c_rt_lib0move(&___nl__im__638, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(279)));
#line 1003
c_rt_lib0copy(&___nl__im__637, ___nl__im__638);
#line 1004
c_rt_lib0delete(generator_c_priv0print_use_variant(___ref___rec__0, ___nl__im__637));
#line 1005
goto label_1879;
#line 1005
label_1829:
;
#line 1005
c_rt_lib0move(&___nl__im__640, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(280)));
#line 1005
c_rt_lib0copy(&___nl__im__639, ___nl__im__640);
#line 1006
c_rt_lib0move(&___nl__im__643, c_rt_lib0hash_get_value_dec(___nl__im__639, ___get_global_string_const(376)));
#line 1006
c_rt_lib0move(&___nl__im__642, c_rt_lib0hash_get_value_dec(___nl__im__643, ___get_global_string_const(110)));
#line 1006
c_rt_lib0clear(&___nl__im__643);
#line 1006
___nl__bool__641 = c_rt_lib0priv_is(___nl__im__642, ___get_global_string_const(145));
#line 1006
c_rt_lib0clear(&___nl__im__642);
#line 1006
if(___nl__bool__641){ goto label_1843;}
#line 1006
c_rt_lib0move(&___nl__im__645, c_rt_lib0hash_get_value_dec(___nl__im__639, ___get_global_string_const(376)));
#line 1006
c_rt_lib0move(&___nl__im__644, c_rt_lib0hash_get_value_dec(___nl__im__645, ___get_global_string_const(367)));
#line 1006
c_rt_lib0clear(&___nl__im__645);
#line 1006
___nl__bool__641 = c_rt_lib0priv_is(___nl__im__644, ___get_global_string_const(434));
#line 1006
c_rt_lib0clear(&___nl__im__644);
#line 1006
label_1843:
;
#line 1006
___nl__bool__641 = !___nl__bool__641;
#line 1006
if(___nl__bool__641){ goto label_1856;}
#line 1007
c_rt_lib0move(&___nl__im__648, c_rt_lib0hash_get_value_dec(___nl__im__639, ___get_global_string_const(376)));
#line 1007
c_rt_lib0move(&___nl__im__647, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__648));
#line 1007
c_rt_lib0clear(&___nl__im__648);
#line 1007
c_rt_lib0move(&___nl__im__649,___get_global_string_const(600));
#line 1007
c_rt_lib0move(&___nl__im__646, c_rt_lib0concat_new(___nl__im__647, ___nl__im__649));
#line 1007
c_rt_lib0clear(&___nl__im__647);
#line 1007
c_rt_lib0clear(&___nl__im__649);
#line 1007
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__646));
#line 1007
c_rt_lib0clear(&___nl__im__646);
#line 1008
goto label_1856;
#line 1008
label_1856:
;
#line 1008
//clear ___nl__bool__641;
#line 1009
goto label_1879;
#line 1009
label_1859:
;
#line 1009
c_rt_lib0move(&___nl__im__651, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(281)));
#line 1009
c_rt_lib0copy(&___nl__im__650, ___nl__im__651);
#line 1010
c_rt_lib0delete(generator_c_priv0print_hash_init_iter(___ref___rec__0, ___nl__im__650));
#line 1011
goto label_1879;
#line 1011
label_1864:
;
#line 1011
c_rt_lib0move(&___nl__im__653, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(282)));
#line 1011
c_rt_lib0copy(&___nl__im__652, ___nl__im__653);
#line 1012
c_rt_lib0delete(generator_c_priv0print_hash_next_iter(___ref___rec__0, ___nl__im__652));
#line 1013
goto label_1879;
#line 1013
label_1869:
;
#line 1013
c_rt_lib0move(&___nl__im__655, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(283)));
#line 1013
c_rt_lib0copy(&___nl__im__654, ___nl__im__655);
#line 1014
c_rt_lib0delete(generator_c_priv0print_hash_get_key_iter(___ref___rec__0, ___nl__im__654));
#line 1015
goto label_1879;
#line 1015
label_1874:
;
#line 1015
c_rt_lib0move(&___nl__im__657, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(284)));
#line 1015
c_rt_lib0copy(&___nl__im__656, ___nl__im__657);
#line 1016
c_rt_lib0delete(generator_c_priv0print_hash_is_end(___ref___rec__0, ___nl__im__656));
#line 1017
goto label_1879;
#line 1017
label_1879:
;
#line 1018
___nl__bool__658 = ___nl__bool__13;
#line 1018
___nl__bool__658 = !___nl__bool__658;
#line 1018
___nl__bool__658 = !___nl__bool__658;
#line 1018
if(___nl__bool__658){ goto label_1892;}
#line 1018
c_rt_lib0move(&___nl__im__660,___get_global_string_const(454));
#line 1018
c_rt_lib0move(&___nl__im__661, string0lf());
#line 1018
c_rt_lib0move(&___nl__im__659, c_rt_lib0concat_new(___nl__im__660, ___nl__im__661));
#line 1018
c_rt_lib0clear(&___nl__im__660);
#line 1018
c_rt_lib0clear(&___nl__im__661);
#line 1018
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__659));
#line 1018
c_rt_lib0clear(&___nl__im__659);
#line 1018
goto label_1892;
#line 1018
label_1892:
;
#line 1018
//clear ___nl__bool__658;
#line 1018
c_rt_lib0clear(&___nl__im__1);
#line 1018
c_rt_lib0clear(&___nl__im__2);
#line 1018
//clear ___nl__bool__13;
#line 1018
c_rt_lib0clear(&___nl__im__14);
#line 1018
//clear ___nl__bool__15;
#line 1018
c_rt_lib0clear(&___nl__im__16);
#line 1018
c_rt_lib0clear(&___nl__im__17);
#line 1018
c_rt_lib0clear(&___nl__im__18);
#line 1018
c_rt_lib0clear(&___nl__im__69);
#line 1018
c_rt_lib0clear(&___nl__im__70);
#line 1018
c_rt_lib0clear(&___nl__im__113);
#line 1018
c_rt_lib0clear(&___nl__im__114);
#line 1018
c_rt_lib0clear(&___nl__im__115);
#line 1018
c_rt_lib0clear(&___nl__im__116);
#line 1018
c_rt_lib0clear(&___nl__im__117);
#line 1018
c_rt_lib0clear(&___nl__im__122);
#line 1018
c_rt_lib0clear(&___nl__im__123);
#line 1018
c_rt_lib0clear(&___nl__im__124);
#line 1018
c_rt_lib0clear(&___nl__im__125);
#line 1018
c_rt_lib0clear(&___nl__im__126);
#line 1018
c_rt_lib0clear(&___nl__im__129);
#line 1018
c_rt_lib0clear(&___nl__im__147);
#line 1018
c_rt_lib0clear(&___nl__im__148);
#line 1018
c_rt_lib0clear(&___nl__im__149);
#line 1018
c_rt_lib0clear(&___nl__im__150);
#line 1018
c_rt_lib0clear(&___nl__im__183);
#line 1018
c_rt_lib0clear(&___nl__im__184);
#line 1018
c_rt_lib0clear(&___nl__im__227);
#line 1018
c_rt_lib0clear(&___nl__im__228);
#line 1018
//clear ___nl__bool__229;
#line 1018
c_rt_lib0clear(&___nl__im__230);
#line 1018
c_rt_lib0clear(&___nl__im__231);
#line 1018
c_rt_lib0clear(&___nl__im__232);
#line 1018
c_rt_lib0clear(&___nl__im__239);
#line 1018
c_rt_lib0clear(&___nl__im__240);
#line 1018
c_rt_lib0clear(&___nl__im__246);
#line 1018
c_rt_lib0clear(&___nl__im__247);
#line 1018
c_rt_lib0clear(&___nl__im__250);
#line 1018
c_rt_lib0clear(&___nl__im__251);
#line 1018
c_rt_lib0clear(&___nl__im__255);
#line 1018
//clear ___nl__bool__257;
#line 1018
c_rt_lib0clear(&___nl__im__258);
#line 1018
c_rt_lib0clear(&___nl__im__295);
#line 1018
c_rt_lib0clear(&___nl__im__296);
#line 1018
c_rt_lib0clear(&___nl__im__297);
#line 1018
c_rt_lib0clear(&___nl__im__298);
#line 1018
c_rt_lib0clear(&___nl__im__299);
#line 1018
c_rt_lib0clear(&___nl__im__300);
#line 1018
c_rt_lib0clear(&___nl__im__301);
#line 1018
c_rt_lib0clear(&___nl__im__302);
#line 1018
c_rt_lib0clear(&___nl__im__303);
#line 1018
c_rt_lib0clear(&___nl__im__304);
#line 1018
c_rt_lib0clear(&___nl__im__305);
#line 1018
c_rt_lib0clear(&___nl__im__306);
#line 1018
c_rt_lib0clear(&___nl__im__307);
#line 1018
c_rt_lib0clear(&___nl__im__308);
#line 1018
c_rt_lib0clear(&___nl__im__309);
#line 1018
c_rt_lib0clear(&___nl__im__318);
#line 1018
c_rt_lib0clear(&___nl__im__319);
#line 1018
c_rt_lib0clear(&___nl__im__329);
#line 1018
c_rt_lib0clear(&___nl__im__330);
#line 1018
c_rt_lib0clear(&___nl__im__371);
#line 1018
c_rt_lib0clear(&___nl__im__372);
#line 1018
c_rt_lib0clear(&___nl__im__373);
#line 1018
c_rt_lib0clear(&___nl__im__410);
#line 1018
c_rt_lib0clear(&___nl__im__411);
#line 1018
c_rt_lib0clear(&___nl__im__412);
#line 1018
c_rt_lib0clear(&___nl__im__413);
#line 1018
//clear ___nl__bool__415;
#line 1018
c_rt_lib0clear(&___nl__im__416);
#line 1018
c_rt_lib0clear(&___nl__im__445);
#line 1018
c_rt_lib0clear(&___nl__im__446);
#line 1018
c_rt_lib0clear(&___nl__im__456);
#line 1018
c_rt_lib0clear(&___nl__im__457);
#line 1018
//clear ___nl__int__527;
#line 1018
c_rt_lib0clear(&___nl__im__528);
#line 1018
c_rt_lib0clear(&___nl__im__540);
#line 1018
c_rt_lib0clear(&___nl__im__541);
#line 1018
//clear ___nl__int__554;
#line 1018
c_rt_lib0clear(&___nl__im__555);
#line 1018
c_rt_lib0clear(&___nl__im__559);
#line 1018
c_rt_lib0clear(&___nl__im__560);
#line 1018
c_rt_lib0clear(&___nl__im__561);
#line 1018
//clear ___nl__bool__562;
#line 1018
c_rt_lib0clear(&___nl__im__563);
#line 1018
c_rt_lib0clear(&___nl__im__578);
#line 1018
c_rt_lib0clear(&___nl__im__579);
#line 1018
c_rt_lib0clear(&___nl__im__584);
#line 1018
c_rt_lib0clear(&___nl__im__585);
#line 1018
c_rt_lib0clear(&___nl__im__592);
#line 1018
c_rt_lib0clear(&___nl__im__593);
#line 1018
c_rt_lib0clear(&___nl__im__598);
#line 1018
c_rt_lib0clear(&___nl__im__599);
#line 1018
c_rt_lib0clear(&___nl__im__604);
#line 1018
c_rt_lib0clear(&___nl__im__605);
#line 1018
c_rt_lib0clear(&___nl__im__606);
#line 1018
c_rt_lib0clear(&___nl__im__607);
#line 1018
c_rt_lib0clear(&___nl__im__608);
#line 1018
c_rt_lib0clear(&___nl__im__609);
#line 1018
c_rt_lib0clear(&___nl__im__614);
#line 1018
c_rt_lib0clear(&___nl__im__615);
#line 1018
c_rt_lib0clear(&___nl__im__616);
#line 1018
c_rt_lib0clear(&___nl__im__617);
#line 1018
c_rt_lib0clear(&___nl__im__629);
#line 1018
c_rt_lib0clear(&___nl__im__630);
#line 1018
c_rt_lib0clear(&___nl__im__631);
#line 1018
c_rt_lib0clear(&___nl__im__632);
#line 1018
c_rt_lib0clear(&___nl__im__637);
#line 1018
c_rt_lib0clear(&___nl__im__638);
#line 1018
c_rt_lib0clear(&___nl__im__639);
#line 1018
c_rt_lib0clear(&___nl__im__640);
#line 1018
c_rt_lib0clear(&___nl__im__650);
#line 1018
c_rt_lib0clear(&___nl__im__651);
#line 1018
c_rt_lib0clear(&___nl__im__652);
#line 1018
c_rt_lib0clear(&___nl__im__653);
#line 1018
c_rt_lib0clear(&___nl__im__654);
#line 1018
c_rt_lib0clear(&___nl__im__655);
#line 1018
c_rt_lib0clear(&___nl__im__656);
#line 1018
c_rt_lib0clear(&___nl__im__657);
#line 1018
return NULL;

}

ImmT  generator_c_priv0print_declaration(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT * ___nl__im_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
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
#line 1025
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1025
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(145));
#line 1025
if(___nl__bool__6){ goto label_20;}
#line 1028
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(419));
#line 1028
if(___nl__bool__6){ goto label_24;}
#line 1031
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(33));
#line 1031
if(___nl__bool__6){ goto label_28;}
#line 1034
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(420));
#line 1034
if(___nl__bool__6){ goto label_32;}
#line 1037
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(569));
#line 1037
if(___nl__bool__6){ goto label_36;}
#line 1042
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(141));
#line 1042
if(___nl__bool__6){ goto label_54;}
#line 1050
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(573));
#line 1050
if(___nl__bool__6){ goto label_72;}
#line 1055
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(142));
#line 1055
if(___nl__bool__6){ goto label_90;}
#line 1055
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 1055
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 1055
nl_die_arg(___nl__im__7);
#line 1025
label_20:
;
#line 1026
c_rt_lib0move(&___nl__im__3, generator_c_priv0im_t());
#line 1027
c_rt_lib0move(&___nl__im__4,___get_global_string_const(593));
#line 1028
goto label_108;
#line 1028
label_24:
;
#line 1029
c_rt_lib0move(&___nl__im__3, generator_c_priv0int_t());
#line 1030
c_rt_lib0move(&___nl__im__4,___get_global_string_const(20));
#line 1031
goto label_108;
#line 1031
label_28:
;
#line 1032
c_rt_lib0move(&___nl__im__3, generator_c_priv0bool_t());
#line 1033
c_rt_lib0move(&___nl__im__4,___get_global_string_const(582));
#line 1034
goto label_108;
#line 1034
label_32:
;
#line 1035
c_rt_lib0move(&___nl__im__3, generator_c_priv0im_t());
#line 1036
c_rt_lib0move(&___nl__im__4,___get_global_string_const(593));
#line 1037
goto label_108;
#line 1037
label_36:
;
#line 1037
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(569)));
#line 1037
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1038
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_name(___nl__im__8));
#line 1039
c_rt_lib0move(&___nl__im__11,___get_global_string_const(602));
#line 1040
___nl__im_ptr__14 = &((*___ref___rec__0).mod_name0field);
#line 1040
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1040
___nl__im_ptr__14 = NULL;
#line 1040
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_own_to_im_fun(___nl__im__13, ___nl__im__8, ___nl__im__2));
#line 1040
c_rt_lib0clear(&___nl__im__13);
#line 1040
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 1040
c_rt_lib0clear(&___nl__im__11);
#line 1040
c_rt_lib0clear(&___nl__im__12);
#line 1040
c_rt_lib0move(&___nl__im__15,___get_global_string_const(603));
#line 1040
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__10, ___nl__im__15));
#line 1040
c_rt_lib0clear(&___nl__im__10);
#line 1040
c_rt_lib0clear(&___nl__im__15);
#line 1042
goto label_108;
#line 1042
label_54:
;
#line 1042
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(141)));
#line 1042
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1043
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_name(___nl__im__16));
#line 1044
c_rt_lib0move(&___nl__im__19,___get_global_string_const(602));
#line 1045
___nl__im_ptr__22 = &((*___ref___rec__0).mod_name0field);
#line 1045
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1045
___nl__im_ptr__22 = NULL;
#line 1045
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_own_to_im_fun(___nl__im__21, ___nl__im__16, ___nl__im__2));
#line 1045
c_rt_lib0clear(&___nl__im__21);
#line 1045
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 1045
c_rt_lib0clear(&___nl__im__19);
#line 1045
c_rt_lib0clear(&___nl__im__20);
#line 1045
c_rt_lib0move(&___nl__im__23,___get_global_string_const(604));
#line 1045
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__23));
#line 1045
c_rt_lib0clear(&___nl__im__18);
#line 1045
c_rt_lib0clear(&___nl__im__23);
#line 1050
goto label_108;
#line 1050
label_72:
;
#line 1050
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(573)));
#line 1050
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1051
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_name(___nl__im__24));
#line 1052
c_rt_lib0move(&___nl__im__27,___get_global_string_const(602));
#line 1053
___nl__im_ptr__30 = &((*___ref___rec__0).mod_name0field);
#line 1053
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1053
___nl__im_ptr__30 = NULL;
#line 1053
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_own_to_im_fun(___nl__im__29, ___nl__im__24, ___nl__im__2));
#line 1053
c_rt_lib0clear(&___nl__im__29);
#line 1053
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 1053
c_rt_lib0clear(&___nl__im__27);
#line 1053
c_rt_lib0clear(&___nl__im__28);
#line 1053
c_rt_lib0move(&___nl__im__31,___get_global_string_const(603));
#line 1053
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 1053
c_rt_lib0clear(&___nl__im__26);
#line 1053
c_rt_lib0clear(&___nl__im__31);
#line 1055
goto label_108;
#line 1055
label_90:
;
#line 1055
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(142)));
#line 1055
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 1056
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_name(___nl__im__32));
#line 1057
c_rt_lib0move(&___nl__im__35,___get_global_string_const(602));
#line 1058
___nl__im_ptr__38 = &((*___ref___rec__0).mod_name0field);
#line 1058
c_rt_lib0copy(&___nl__im__37, (*___nl__im_ptr__38));
#line 1058
___nl__im_ptr__38 = NULL;
#line 1058
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_own_to_im_fun(___nl__im__37, ___nl__im__32, ___nl__im__2));
#line 1058
c_rt_lib0clear(&___nl__im__37);
#line 1058
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 1058
c_rt_lib0clear(&___nl__im__35);
#line 1058
c_rt_lib0clear(&___nl__im__36);
#line 1058
c_rt_lib0move(&___nl__im__39,___get_global_string_const(605));
#line 1058
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__34, ___nl__im__39));
#line 1058
c_rt_lib0clear(&___nl__im__34);
#line 1058
c_rt_lib0clear(&___nl__im__39);
#line 1064
goto label_108;
#line 1064
label_108:
;
#line 1065
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(367)));
#line 1065
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(241));
#line 1065
if(___nl__bool__41){ goto label_117;}
#line 1066
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(434));
#line 1066
if(___nl__bool__41){ goto label_119;}
#line 1066
c_rt_lib0move(&___nl__im__42,___get_global_string_const(15));
#line 1066
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(2, ___nl__im__42, ___nl__im__40));
#line 1066
nl_die_arg(___nl__im__42);
#line 1065
label_117:
;
#line 1066
goto label_125;
#line 1066
label_119:
;
#line 1067
c_rt_lib0move(&___nl__im__43,___get_global_string_const(389));
#line 1067
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 1067
c_rt_lib0clear(&___nl__im__43);
#line 1068
c_rt_lib0move(&___nl__im__4,___get_global_string_const(593));
#line 1069
goto label_125;
#line 1069
label_125:
;
#line 1070
c_rt_lib0move(&___nl__im__49,___get_global_string_const(480));
#line 1070
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__3, ___nl__im__49));
#line 1070
c_rt_lib0clear(&___nl__im__49);
#line 1070
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1070
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__50));
#line 1070
c_rt_lib0clear(&___nl__im__48);
#line 1070
c_rt_lib0clear(&___nl__im__50);
#line 1070
c_rt_lib0move(&___nl__im__51,___get_global_string_const(514));
#line 1070
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__51));
#line 1070
c_rt_lib0clear(&___nl__im__47);
#line 1070
c_rt_lib0clear(&___nl__im__51);
#line 1070
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__4));
#line 1070
c_rt_lib0clear(&___nl__im__46);
#line 1070
c_rt_lib0move(&___nl__im__52,___get_global_string_const(454));
#line 1070
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__52));
#line 1070
c_rt_lib0clear(&___nl__im__45);
#line 1070
c_rt_lib0clear(&___nl__im__52);
#line 1070
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__44));
#line 1070
c_rt_lib0clear(&___nl__im__44);
#line 1070
c_rt_lib0clear(&___nl__im__1);
#line 1070
c_rt_lib0clear(&___nl__im__2);
#line 1070
c_rt_lib0clear(&___nl__im__3);
#line 1070
c_rt_lib0clear(&___nl__im__4);
#line 1070
c_rt_lib0clear(&___nl__im__5);
#line 1070
//clear ___nl__bool__6;
#line 1070
c_rt_lib0clear(&___nl__im__7);
#line 1070
c_rt_lib0clear(&___nl__im__8);
#line 1070
c_rt_lib0clear(&___nl__im__9);
#line 1070
c_rt_lib0clear(&___nl__im__16);
#line 1070
c_rt_lib0clear(&___nl__im__17);
#line 1070
c_rt_lib0clear(&___nl__im__24);
#line 1070
c_rt_lib0clear(&___nl__im__25);
#line 1070
c_rt_lib0clear(&___nl__im__32);
#line 1070
c_rt_lib0clear(&___nl__im__33);
#line 1070
c_rt_lib0clear(&___nl__im__40);
#line 1070
//clear ___nl__bool__41;
#line 1070
c_rt_lib0clear(&___nl__im__42);
#line 1070
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_own_to_im_fun(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
#line 1075
c_rt_lib0move(&___nl__im__4,___get_global_string_const(34));
#line 1075
c_rt_lib0move(&___nl__im__5, own_to_im_converter0get_function_name(___nl__im__1, ___nl__im__2));
#line 1075
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__4, ___nl__im__5));
#line 1075
c_rt_lib0clear(&___nl__im__4);
#line 1075
c_rt_lib0clear(&___nl__im__5);
#line 1076
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 1076
___nl__int__8 = 1;
#line 1076
___nl__bool__6 = ___nl__int__7 == ___nl__int__8;
#line 1076
//clear ___nl__int__7;
#line 1076
//clear ___nl__int__8;
#line 1076
___nl__bool__6 = !___nl__bool__6;
#line 1076
if(___nl__bool__6){ goto label_26;}
#line 1077
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
#line 1077
___nl__int__12 = 0;
#line 1077
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__3, ___nl__int__12));
#line 1077
//clear ___nl__int__12;
#line 1077
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_name(___nl__im__10, ___nl__im__11, ___nl__im__0));
#line 1077
c_rt_lib0clear(&___nl__im__10);
#line 1077
c_rt_lib0clear(&___nl__im__11);
#line 1077
c_rt_lib0clear(&___nl__im__0);
#line 1077
c_rt_lib0clear(&___nl__im__1);
#line 1077
c_rt_lib0clear(&___nl__im__2);
#line 1077
c_rt_lib0clear(&___nl__im__3);
#line 1077
//clear ___nl__bool__6;
#line 1077
return ___nl__im__9;
#line 1078
goto label_48;
#line 1078
label_26:
;
#line 1079
___nl__int__15 = 0;
#line 1079
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__3, ___nl__int__15));
#line 1079
//clear ___nl__int__15;
#line 1079
___nl__int__17 = 1;
#line 1079
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__3, ___nl__int__17));
#line 1079
//clear ___nl__int__17;
#line 1079
___nl__int__19 = 0;
#line 1079
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__3, ___nl__int__19));
#line 1079
//clear ___nl__int__19;
#line 1079
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_name(___nl__im__14, ___nl__im__16, ___nl__im__18));
#line 1079
c_rt_lib0clear(&___nl__im__14);
#line 1079
c_rt_lib0clear(&___nl__im__16);
#line 1079
c_rt_lib0clear(&___nl__im__18);
#line 1079
c_rt_lib0clear(&___nl__im__0);
#line 1079
c_rt_lib0clear(&___nl__im__1);
#line 1079
c_rt_lib0clear(&___nl__im__2);
#line 1079
c_rt_lib0clear(&___nl__im__3);
#line 1079
//clear ___nl__bool__6;
#line 1079
c_rt_lib0clear(&___nl__im__9);
#line 1079
return ___nl__im__13;
#line 1080
goto label_48;
#line 1080
label_48:
;
#line 1080
//clear ___nl__bool__6;
#line 1080
c_rt_lib0clear(&___nl__im__9);
#line 1080
c_rt_lib0clear(&___nl__im__13);
return NULL;

}

ImmT  generator_c_priv0print_move(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
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
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
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
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
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
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
#line 1084
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__2));
#line 1084
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 1084
c_rt_lib0clear(&___nl__im__4);
#line 1084
___nl__bool__3 = !___nl__bool__3;
#line 1084
if(___nl__bool__3){ goto label_10;}
#line 1084
c_rt_lib0clear(&___nl__im__1);
#line 1084
c_rt_lib0clear(&___nl__im__2);
#line 1084
//clear ___nl__bool__3;
#line 1084
return NULL;
#line 1084
goto label_10;
#line 1084
label_10:
;
#line 1084
//clear ___nl__bool__3;
#line 1085
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(367)));
#line 1085
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(434));
#line 1085
c_rt_lib0clear(&___nl__im__7);
#line 1085
___nl__bool__6 = !___nl__bool__5;
#line 1085
if(___nl__bool__6){ goto label_20;}
#line 1085
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(367)));
#line 1085
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(434));
#line 1085
c_rt_lib0clear(&___nl__im__8);
#line 1085
label_20:
;
#line 1085
//clear ___nl__bool__6;
#line 1085
___nl__bool__5 = !___nl__bool__5;
#line 1085
if(___nl__bool__5){ goto label_40;}
#line 1086
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__2));
#line 1086
c_rt_lib0move(&___nl__im__12,___get_global_string_const(514));
#line 1086
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 1086
c_rt_lib0clear(&___nl__im__11);
#line 1086
c_rt_lib0clear(&___nl__im__12);
#line 1086
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1086
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 1086
c_rt_lib0clear(&___nl__im__10);
#line 1086
c_rt_lib0clear(&___nl__im__13);
#line 1086
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1086
c_rt_lib0clear(&___nl__im__9);
#line 1087
c_rt_lib0clear(&___nl__im__1);
#line 1087
c_rt_lib0clear(&___nl__im__2);
#line 1087
//clear ___nl__bool__5;
#line 1087
return NULL;
#line 1088
goto label_40;
#line 1088
label_40:
;
#line 1088
//clear ___nl__bool__5;
#line 1089
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(110)));
#line 1089
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(145));
#line 1089
if(___nl__bool__15){ goto label_62;}
#line 1091
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(419));
#line 1091
if(___nl__bool__15){ goto label_65;}
#line 1097
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(420));
#line 1097
if(___nl__bool__15){ goto label_103;}
#line 1099
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(33));
#line 1099
if(___nl__bool__15){ goto label_106;}
#line 1105
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(569));
#line 1105
if(___nl__bool__15){ goto label_144;}
#line 1111
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(141));
#line 1111
if(___nl__bool__15){ goto label_172;}
#line 1117
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(573));
#line 1117
if(___nl__bool__15){ goto label_200;}
#line 1119
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(142));
#line 1119
if(___nl__bool__15){ goto label_206;}
#line 1119
c_rt_lib0move(&___nl__im__16,___get_global_string_const(15));
#line 1119
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1119
nl_die_arg(___nl__im__16);
#line 1089
label_62:
;
#line 1090
c_rt_lib0delete(generator_c_priv0print_move_to_im(___ref___rec__0, ___nl__im__1, ___nl__im__2));
#line 1091
goto label_212;
#line 1091
label_65:
;
#line 1092
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1092
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(145));
#line 1092
c_rt_lib0clear(&___nl__im__18);
#line 1092
___nl__bool__17 = !___nl__bool__17;
#line 1092
if(___nl__bool__17){ goto label_87;}
#line 1093
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1093
c_rt_lib0move(&___nl__im__23,___get_global_string_const(606));
#line 1093
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1093
c_rt_lib0clear(&___nl__im__22);
#line 1093
c_rt_lib0clear(&___nl__im__23);
#line 1093
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1093
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__24));
#line 1093
c_rt_lib0clear(&___nl__im__21);
#line 1093
c_rt_lib0clear(&___nl__im__24);
#line 1093
c_rt_lib0move(&___nl__im__25,___get_global_string_const(336));
#line 1093
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__25));
#line 1093
c_rt_lib0clear(&___nl__im__20);
#line 1093
c_rt_lib0clear(&___nl__im__25);
#line 1093
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 1093
c_rt_lib0clear(&___nl__im__19);
#line 1094
goto label_100;
#line 1094
label_87:
;
#line 1095
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1095
c_rt_lib0move(&___nl__im__29,___get_global_string_const(514));
#line 1095
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 1095
c_rt_lib0clear(&___nl__im__28);
#line 1095
c_rt_lib0clear(&___nl__im__29);
#line 1095
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1095
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 1095
c_rt_lib0clear(&___nl__im__27);
#line 1095
c_rt_lib0clear(&___nl__im__30);
#line 1095
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__26));
#line 1095
c_rt_lib0clear(&___nl__im__26);
#line 1096
goto label_100;
#line 1096
label_100:
;
#line 1096
//clear ___nl__bool__17;
#line 1097
goto label_212;
#line 1097
label_103:
;
#line 1098
c_rt_lib0delete(generator_c_priv0print_move_to_string(___ref___rec__0, ___nl__im__1, ___nl__im__2));
#line 1099
goto label_212;
#line 1099
label_106:
;
#line 1100
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1100
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(145));
#line 1100
c_rt_lib0clear(&___nl__im__32);
#line 1100
___nl__bool__31 = !___nl__bool__31;
#line 1100
if(___nl__bool__31){ goto label_128;}
#line 1101
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1101
c_rt_lib0move(&___nl__im__37,___get_global_string_const(607));
#line 1101
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 1101
c_rt_lib0clear(&___nl__im__36);
#line 1101
c_rt_lib0clear(&___nl__im__37);
#line 1101
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1101
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__38));
#line 1101
c_rt_lib0clear(&___nl__im__35);
#line 1101
c_rt_lib0clear(&___nl__im__38);
#line 1101
c_rt_lib0move(&___nl__im__39,___get_global_string_const(336));
#line 1101
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__39));
#line 1101
c_rt_lib0clear(&___nl__im__34);
#line 1101
c_rt_lib0clear(&___nl__im__39);
#line 1101
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__33));
#line 1101
c_rt_lib0clear(&___nl__im__33);
#line 1102
goto label_141;
#line 1102
label_128:
;
#line 1103
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1103
c_rt_lib0move(&___nl__im__43,___get_global_string_const(514));
#line 1103
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 1103
c_rt_lib0clear(&___nl__im__42);
#line 1103
c_rt_lib0clear(&___nl__im__43);
#line 1103
c_rt_lib0move(&___nl__im__44, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1103
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1103
c_rt_lib0clear(&___nl__im__41);
#line 1103
c_rt_lib0clear(&___nl__im__44);
#line 1103
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__40));
#line 1103
c_rt_lib0clear(&___nl__im__40);
#line 1104
goto label_141;
#line 1104
label_141:
;
#line 1104
//clear ___nl__bool__31;
#line 1105
goto label_212;
#line 1105
label_144:
;
#line 1105
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(569)));
#line 1105
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 1106
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1106
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(569));
#line 1106
c_rt_lib0clear(&___nl__im__48);
#line 1106
___nl__bool__47 = !___nl__bool__47;
#line 1106
if(___nl__bool__47){ goto label_164;}
#line 1107
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1107
c_rt_lib0move(&___nl__im__52,___get_global_string_const(514));
#line 1107
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 1107
c_rt_lib0clear(&___nl__im__51);
#line 1107
c_rt_lib0clear(&___nl__im__52);
#line 1107
c_rt_lib0move(&___nl__im__53, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1107
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 1107
c_rt_lib0clear(&___nl__im__50);
#line 1107
c_rt_lib0clear(&___nl__im__53);
#line 1107
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__49));
#line 1107
c_rt_lib0clear(&___nl__im__49);
#line 1108
goto label_168;
#line 1108
label_164:
;
#line 1109
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 1109
nl_die_arg(___nl__im__54);
#line 1110
goto label_168;
#line 1110
label_168:
;
#line 1110
//clear ___nl__bool__47;
#line 1110
c_rt_lib0clear(&___nl__im__54);
#line 1111
goto label_212;
#line 1111
label_172:
;
#line 1111
c_rt_lib0move(&___nl__im__56, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(141)));
#line 1111
c_rt_lib0copy(&___nl__im__55, ___nl__im__56);
#line 1112
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1112
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__58, ___get_global_string_const(141));
#line 1112
c_rt_lib0clear(&___nl__im__58);
#line 1112
___nl__bool__57 = !___nl__bool__57;
#line 1112
if(___nl__bool__57){ goto label_192;}
#line 1113
c_rt_lib0move(&___nl__im__61, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1113
c_rt_lib0move(&___nl__im__62,___get_global_string_const(514));
#line 1113
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__62));
#line 1113
c_rt_lib0clear(&___nl__im__61);
#line 1113
c_rt_lib0clear(&___nl__im__62);
#line 1113
c_rt_lib0move(&___nl__im__63, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1113
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 1113
c_rt_lib0clear(&___nl__im__60);
#line 1113
c_rt_lib0clear(&___nl__im__63);
#line 1113
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__59));
#line 1113
c_rt_lib0clear(&___nl__im__59);
#line 1114
goto label_196;
#line 1114
label_192:
;
#line 1115
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(0));
#line 1115
nl_die_arg(___nl__im__64);
#line 1116
goto label_196;
#line 1116
label_196:
;
#line 1116
//clear ___nl__bool__57;
#line 1116
c_rt_lib0clear(&___nl__im__64);
#line 1117
goto label_212;
#line 1117
label_200:
;
#line 1117
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(573)));
#line 1117
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 1118
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 1118
nl_die_arg(___nl__im__67);
#line 1119
goto label_212;
#line 1119
label_206:
;
#line 1119
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(142)));
#line 1119
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 1120
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 1120
nl_die_arg(___nl__im__70);
#line 1121
goto label_212;
#line 1121
label_212:
;
#line 1121
c_rt_lib0clear(&___nl__im__1);
#line 1121
c_rt_lib0clear(&___nl__im__2);
#line 1121
c_rt_lib0clear(&___nl__im__14);
#line 1121
//clear ___nl__bool__15;
#line 1121
c_rt_lib0clear(&___nl__im__16);
#line 1121
c_rt_lib0clear(&___nl__im__45);
#line 1121
c_rt_lib0clear(&___nl__im__46);
#line 1121
c_rt_lib0clear(&___nl__im__55);
#line 1121
c_rt_lib0clear(&___nl__im__56);
#line 1121
c_rt_lib0clear(&___nl__im__65);
#line 1121
c_rt_lib0clear(&___nl__im__66);
#line 1121
c_rt_lib0clear(&___nl__im__67);
#line 1121
c_rt_lib0clear(&___nl__im__68);
#line 1121
c_rt_lib0clear(&___nl__im__69);
#line 1121
c_rt_lib0clear(&___nl__im__70);
#line 1121
return NULL;
return NULL;

}

ImmT  generator_c_priv0print_move_to_im(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
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
#line 1125
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1125
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1125
if(___nl__bool__4){ goto label_20;}
#line 1128
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(419));
#line 1128
if(___nl__bool__4){ goto label_32;}
#line 1131
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 1131
if(___nl__bool__4){ goto label_44;}
#line 1134
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(420));
#line 1134
if(___nl__bool__4){ goto label_56;}
#line 1137
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(569));
#line 1137
if(___nl__bool__4){ goto label_68;}
#line 1139
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(141));
#line 1139
if(___nl__bool__4){ goto label_74;}
#line 1141
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(573));
#line 1141
if(___nl__bool__4){ goto label_80;}
#line 1143
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(142));
#line 1143
if(___nl__bool__4){ goto label_86;}
#line 1143
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 1143
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 1143
nl_die_arg(___nl__im__5);
#line 1125
label_20:
;
#line 1126
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1126
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1126
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 1126
c_rt_lib0clear(&___nl__im__7);
#line 1126
c_rt_lib0clear(&___nl__im__8);
#line 1127
c_rt_lib0move(&___nl__im__10,___get_global_string_const(467));
#line 1127
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__6));
#line 1127
c_rt_lib0clear(&___nl__im__10);
#line 1127
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1127
c_rt_lib0clear(&___nl__im__9);
#line 1128
goto label_92;
#line 1128
label_32:
;
#line 1129
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1129
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1129
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1129
c_rt_lib0clear(&___nl__im__12);
#line 1129
c_rt_lib0clear(&___nl__im__13);
#line 1130
c_rt_lib0move(&___nl__im__15,___get_global_string_const(258));
#line 1130
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_fun_lib(___nl__im__15, ___nl__im__11));
#line 1130
c_rt_lib0clear(&___nl__im__15);
#line 1130
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__14));
#line 1130
c_rt_lib0clear(&___nl__im__14);
#line 1131
goto label_92;
#line 1131
label_44:
;
#line 1132
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1132
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1132
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__18));
#line 1132
c_rt_lib0clear(&___nl__im__17);
#line 1132
c_rt_lib0clear(&___nl__im__18);
#line 1133
c_rt_lib0move(&___nl__im__20,___get_global_string_const(258));
#line 1133
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_fun_lib(___nl__im__20, ___nl__im__16));
#line 1133
c_rt_lib0clear(&___nl__im__20);
#line 1133
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 1133
c_rt_lib0clear(&___nl__im__19);
#line 1134
goto label_92;
#line 1134
label_56:
;
#line 1135
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1135
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1135
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__23));
#line 1135
c_rt_lib0clear(&___nl__im__22);
#line 1135
c_rt_lib0clear(&___nl__im__23);
#line 1136
c_rt_lib0move(&___nl__im__25,___get_global_string_const(467));
#line 1136
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_fun_lib(___nl__im__25, ___nl__im__21));
#line 1136
c_rt_lib0clear(&___nl__im__25);
#line 1136
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__24));
#line 1136
c_rt_lib0clear(&___nl__im__24);
#line 1137
goto label_92;
#line 1137
label_68:
;
#line 1137
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(569)));
#line 1137
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1138
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 1138
nl_die_arg(___nl__im__28);
#line 1139
goto label_92;
#line 1139
label_74:
;
#line 1139
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(141)));
#line 1139
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1140
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 1140
nl_die_arg(___nl__im__31);
#line 1141
goto label_92;
#line 1141
label_80:
;
#line 1141
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(573)));
#line 1141
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 1142
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 1142
nl_die_arg(___nl__im__34);
#line 1143
goto label_92;
#line 1143
label_86:
;
#line 1143
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(142)));
#line 1143
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1144
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 1144
nl_die_arg(___nl__im__37);
#line 1145
goto label_92;
#line 1145
label_92:
;
#line 1145
c_rt_lib0clear(&___nl__im__1);
#line 1145
c_rt_lib0clear(&___nl__im__2);
#line 1145
c_rt_lib0clear(&___nl__im__3);
#line 1145
//clear ___nl__bool__4;
#line 1145
c_rt_lib0clear(&___nl__im__5);
#line 1145
c_rt_lib0clear(&___nl__im__6);
#line 1145
c_rt_lib0clear(&___nl__im__11);
#line 1145
c_rt_lib0clear(&___nl__im__16);
#line 1145
c_rt_lib0clear(&___nl__im__21);
#line 1145
c_rt_lib0clear(&___nl__im__26);
#line 1145
c_rt_lib0clear(&___nl__im__27);
#line 1145
c_rt_lib0clear(&___nl__im__28);
#line 1145
c_rt_lib0clear(&___nl__im__29);
#line 1145
c_rt_lib0clear(&___nl__im__30);
#line 1145
c_rt_lib0clear(&___nl__im__31);
#line 1145
c_rt_lib0clear(&___nl__im__32);
#line 1145
c_rt_lib0clear(&___nl__im__33);
#line 1145
c_rt_lib0clear(&___nl__im__34);
#line 1145
c_rt_lib0clear(&___nl__im__35);
#line 1145
c_rt_lib0clear(&___nl__im__36);
#line 1145
c_rt_lib0clear(&___nl__im__37);
#line 1145
return NULL;
return NULL;

}

ImmT  generator_c_priv0print_move_to_string(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
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
#line 1149
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1149
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1149
if(___nl__bool__4){ goto label_20;}
#line 1152
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(419));
#line 1152
if(___nl__bool__4){ goto label_32;}
#line 1155
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 1155
if(___nl__bool__4){ goto label_50;}
#line 1157
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(420));
#line 1157
if(___nl__bool__4){ goto label_54;}
#line 1160
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(569));
#line 1160
if(___nl__bool__4){ goto label_66;}
#line 1162
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(141));
#line 1162
if(___nl__bool__4){ goto label_72;}
#line 1164
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(573));
#line 1164
if(___nl__bool__4){ goto label_78;}
#line 1166
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(142));
#line 1166
if(___nl__bool__4){ goto label_84;}
#line 1166
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 1166
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 1166
nl_die_arg(___nl__im__5);
#line 1149
label_20:
;
#line 1150
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1150
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1150
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 1150
c_rt_lib0clear(&___nl__im__7);
#line 1150
c_rt_lib0clear(&___nl__im__8);
#line 1151
c_rt_lib0move(&___nl__im__10,___get_global_string_const(467));
#line 1151
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__6));
#line 1151
c_rt_lib0clear(&___nl__im__10);
#line 1151
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1151
c_rt_lib0clear(&___nl__im__9);
#line 1152
goto label_90;
#line 1152
label_32:
;
#line 1153
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1153
c_rt_lib0move(&___nl__im__14,___get_global_string_const(608));
#line 1153
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1153
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(1, ___nl__im__16));
#line 1153
c_rt_lib0clear(&___nl__im__16);
#line 1153
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__14, ___nl__im__15));
#line 1153
c_rt_lib0clear(&___nl__im__14);
#line 1153
c_rt_lib0clear(&___nl__im__15);
#line 1153
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1153
c_rt_lib0clear(&___nl__im__12);
#line 1153
c_rt_lib0clear(&___nl__im__13);
#line 1154
c_rt_lib0move(&___nl__im__18,___get_global_string_const(258));
#line 1154
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_fun_lib(___nl__im__18, ___nl__im__11));
#line 1154
c_rt_lib0clear(&___nl__im__18);
#line 1154
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__17));
#line 1154
c_rt_lib0clear(&___nl__im__17);
#line 1155
goto label_90;
#line 1155
label_50:
;
#line 1156
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1156
nl_die_arg(___nl__im__19);
#line 1157
goto label_90;
#line 1157
label_54:
;
#line 1158
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1158
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1158
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__22));
#line 1158
c_rt_lib0clear(&___nl__im__21);
#line 1158
c_rt_lib0clear(&___nl__im__22);
#line 1159
c_rt_lib0move(&___nl__im__24,___get_global_string_const(258));
#line 1159
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_fun_lib(___nl__im__24, ___nl__im__20));
#line 1159
c_rt_lib0clear(&___nl__im__24);
#line 1159
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__23));
#line 1159
c_rt_lib0clear(&___nl__im__23);
#line 1160
goto label_90;
#line 1160
label_66:
;
#line 1160
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(569)));
#line 1160
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1161
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 1161
nl_die_arg(___nl__im__27);
#line 1162
goto label_90;
#line 1162
label_72:
;
#line 1162
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(141)));
#line 1162
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1163
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 1163
nl_die_arg(___nl__im__30);
#line 1164
goto label_90;
#line 1164
label_78:
;
#line 1164
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(573)));
#line 1164
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 1165
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(0));
#line 1165
nl_die_arg(___nl__im__33);
#line 1166
goto label_90;
#line 1166
label_84:
;
#line 1166
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(142)));
#line 1166
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 1167
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 1167
nl_die_arg(___nl__im__36);
#line 1168
goto label_90;
#line 1168
label_90:
;
#line 1168
c_rt_lib0clear(&___nl__im__1);
#line 1168
c_rt_lib0clear(&___nl__im__2);
#line 1168
c_rt_lib0clear(&___nl__im__3);
#line 1168
//clear ___nl__bool__4;
#line 1168
c_rt_lib0clear(&___nl__im__5);
#line 1168
c_rt_lib0clear(&___nl__im__6);
#line 1168
c_rt_lib0clear(&___nl__im__11);
#line 1168
c_rt_lib0clear(&___nl__im__19);
#line 1168
c_rt_lib0clear(&___nl__im__20);
#line 1168
c_rt_lib0clear(&___nl__im__25);
#line 1168
c_rt_lib0clear(&___nl__im__26);
#line 1168
c_rt_lib0clear(&___nl__im__27);
#line 1168
c_rt_lib0clear(&___nl__im__28);
#line 1168
c_rt_lib0clear(&___nl__im__29);
#line 1168
c_rt_lib0clear(&___nl__im__30);
#line 1168
c_rt_lib0clear(&___nl__im__31);
#line 1168
c_rt_lib0clear(&___nl__im__32);
#line 1168
c_rt_lib0clear(&___nl__im__33);
#line 1168
c_rt_lib0clear(&___nl__im__34);
#line 1168
c_rt_lib0clear(&___nl__im__35);
#line 1168
c_rt_lib0clear(&___nl__im__36);
#line 1168
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_im_from_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1172
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1172
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1172
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_im_from_value(___nl__im__3, ___nl__im__4));
#line 1172
c_rt_lib0clear(&___nl__im__3);
#line 1172
c_rt_lib0clear(&___nl__im__4);
#line 1172
c_rt_lib0clear(&___nl__im__1);
#line 1172
return ___nl__im__2;
return NULL;

}

ImmT  generator_c_priv0get_im_from_value(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
#line 1176
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(145));
#line 1176
if(___nl__bool__2){ goto label_19;}
#line 1178
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 1178
if(___nl__bool__2){ goto label_25;}
#line 1180
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1180
if(___nl__bool__2){ goto label_37;}
#line 1182
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(420));
#line 1182
if(___nl__bool__2){ goto label_50;}
#line 1184
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(569));
#line 1184
if(___nl__bool__2){ goto label_58;}
#line 1186
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(141));
#line 1186
if(___nl__bool__2){ goto label_64;}
#line 1188
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(573));
#line 1188
if(___nl__bool__2){ goto label_70;}
#line 1190
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(142));
#line 1190
if(___nl__bool__2){ goto label_76;}
#line 1190
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1190
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1190
nl_die_arg(___nl__im__3);
#line 1176
label_19:
;
#line 1177
c_rt_lib0clear(&___nl__im__0);
#line 1177
//clear ___nl__bool__2;
#line 1177
c_rt_lib0clear(&___nl__im__3);
#line 1177
return ___nl__im__1;
#line 1178
goto label_82;
#line 1178
label_25:
;
#line 1179
c_rt_lib0move(&___nl__im__5,___get_global_string_const(609));
#line 1179
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1179
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_fun_lib(___nl__im__5, ___nl__im__6));
#line 1179
c_rt_lib0clear(&___nl__im__5);
#line 1179
c_rt_lib0clear(&___nl__im__6);
#line 1179
c_rt_lib0clear(&___nl__im__0);
#line 1179
c_rt_lib0clear(&___nl__im__1);
#line 1179
//clear ___nl__bool__2;
#line 1179
c_rt_lib0clear(&___nl__im__3);
#line 1179
return ___nl__im__4;
#line 1180
goto label_82;
#line 1180
label_37:
;
#line 1181
c_rt_lib0move(&___nl__im__8,___get_global_string_const(610));
#line 1181
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1181
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_fun_lib(___nl__im__8, ___nl__im__9));
#line 1181
c_rt_lib0clear(&___nl__im__8);
#line 1181
c_rt_lib0clear(&___nl__im__9);
#line 1181
c_rt_lib0clear(&___nl__im__0);
#line 1181
c_rt_lib0clear(&___nl__im__1);
#line 1181
//clear ___nl__bool__2;
#line 1181
c_rt_lib0clear(&___nl__im__3);
#line 1181
c_rt_lib0clear(&___nl__im__4);
#line 1181
return ___nl__im__7;
#line 1182
goto label_82;
#line 1182
label_50:
;
#line 1183
c_rt_lib0clear(&___nl__im__0);
#line 1183
//clear ___nl__bool__2;
#line 1183
c_rt_lib0clear(&___nl__im__3);
#line 1183
c_rt_lib0clear(&___nl__im__4);
#line 1183
c_rt_lib0clear(&___nl__im__7);
#line 1183
return ___nl__im__1;
#line 1184
goto label_82;
#line 1184
label_58:
;
#line 1184
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(569)));
#line 1184
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1185
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 1185
nl_die_arg(___nl__im__12);
#line 1186
goto label_82;
#line 1186
label_64:
;
#line 1186
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(141)));
#line 1186
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1187
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1187
nl_die_arg(___nl__im__15);
#line 1188
goto label_82;
#line 1188
label_70:
;
#line 1188
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(573)));
#line 1188
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1189
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1189
nl_die_arg(___nl__im__18);
#line 1190
goto label_82;
#line 1190
label_76:
;
#line 1190
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(142)));
#line 1190
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1191
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 1191
nl_die_arg(___nl__im__21);
#line 1192
goto label_82;
#line 1192
label_82:
;
return NULL;

}

ImmT  generator_c_priv0get_value_from_im(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
#line 1196
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(145));
#line 1196
if(___nl__bool__2){ goto label_19;}
#line 1198
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 1198
if(___nl__bool__2){ goto label_25;}
#line 1200
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1200
if(___nl__bool__2){ goto label_39;}
#line 1202
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(420));
#line 1202
if(___nl__bool__2){ goto label_52;}
#line 1204
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(569));
#line 1204
if(___nl__bool__2){ goto label_60;}
#line 1206
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(141));
#line 1206
if(___nl__bool__2){ goto label_66;}
#line 1208
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(573));
#line 1208
if(___nl__bool__2){ goto label_72;}
#line 1210
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(142));
#line 1210
if(___nl__bool__2){ goto label_78;}
#line 1210
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1210
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1210
nl_die_arg(___nl__im__3);
#line 1196
label_19:
;
#line 1197
c_rt_lib0clear(&___nl__im__0);
#line 1197
//clear ___nl__bool__2;
#line 1197
c_rt_lib0clear(&___nl__im__3);
#line 1197
return ___nl__im__1;
#line 1198
goto label_84;
#line 1198
label_25:
;
#line 1199
c_rt_lib0move(&___nl__im__6,___get_global_string_const(611));
#line 1199
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 1199
c_rt_lib0clear(&___nl__im__6);
#line 1199
c_rt_lib0move(&___nl__im__7,___get_global_string_const(336));
#line 1199
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 1199
c_rt_lib0clear(&___nl__im__5);
#line 1199
c_rt_lib0clear(&___nl__im__7);
#line 1199
c_rt_lib0clear(&___nl__im__0);
#line 1199
c_rt_lib0clear(&___nl__im__1);
#line 1199
//clear ___nl__bool__2;
#line 1199
c_rt_lib0clear(&___nl__im__3);
#line 1199
return ___nl__im__4;
#line 1200
goto label_84;
#line 1200
label_39:
;
#line 1201
c_rt_lib0move(&___nl__im__9,___get_global_string_const(612));
#line 1201
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1201
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_fun_lib(___nl__im__9, ___nl__im__10));
#line 1201
c_rt_lib0clear(&___nl__im__9);
#line 1201
c_rt_lib0clear(&___nl__im__10);
#line 1201
c_rt_lib0clear(&___nl__im__0);
#line 1201
c_rt_lib0clear(&___nl__im__1);
#line 1201
//clear ___nl__bool__2;
#line 1201
c_rt_lib0clear(&___nl__im__3);
#line 1201
c_rt_lib0clear(&___nl__im__4);
#line 1201
return ___nl__im__8;
#line 1202
goto label_84;
#line 1202
label_52:
;
#line 1203
c_rt_lib0clear(&___nl__im__0);
#line 1203
//clear ___nl__bool__2;
#line 1203
c_rt_lib0clear(&___nl__im__3);
#line 1203
c_rt_lib0clear(&___nl__im__4);
#line 1203
c_rt_lib0clear(&___nl__im__8);
#line 1203
return ___nl__im__1;
#line 1204
goto label_84;
#line 1204
label_60:
;
#line 1204
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(569)));
#line 1204
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1205
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 1205
nl_die_arg(___nl__im__13);
#line 1206
goto label_84;
#line 1206
label_66:
;
#line 1206
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(141)));
#line 1206
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 1207
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1207
nl_die_arg(___nl__im__16);
#line 1208
goto label_84;
#line 1208
label_72:
;
#line 1208
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(573)));
#line 1208
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1209
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1209
nl_die_arg(___nl__im__19);
#line 1210
goto label_84;
#line 1210
label_78:
;
#line 1210
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(142)));
#line 1210
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 1211
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 1211
nl_die_arg(___nl__im__22);
#line 1212
goto label_84;
#line 1212
label_84:
;
return NULL;

}

ImmT  generator_c_priv0print_bin_op(generator_c0state_t0type* ___ref___rec__0,nlasm0bin_op0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
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
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
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
bool  ___nl__bool__45 = false;
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
#line 1216
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_bin_ops());
#line 1216
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(570)));
#line 1216
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__4));
#line 1216
c_rt_lib0clear(&___nl__im__3);
#line 1216
c_rt_lib0clear(&___nl__im__4);
#line 1217
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1217
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1217
___nl__bool__5 = nlasm0eq_reg(___nl__im__7, ___nl__im__8);
#line 1217
c_rt_lib0clear(&___nl__im__7);
#line 1217
c_rt_lib0clear(&___nl__im__8);
#line 1217
___nl__bool__6 = !___nl__bool__5;
#line 1217
if(___nl__bool__6){ goto label_17;}
#line 1217
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_bin_ops_mod());
#line 1217
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(570)));
#line 1217
___nl__bool__5 = hash0has_key(___nl__im__9, ___nl__im__10);
#line 1217
c_rt_lib0clear(&___nl__im__9);
#line 1217
c_rt_lib0clear(&___nl__im__10);
#line 1217
label_17:
;
#line 1217
//clear ___nl__bool__6;
#line 1217
___nl__bool__5 = !___nl__bool__5;
#line 1217
if(___nl__bool__5){ goto label_27;}
#line 1218
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_bin_ops_mod());
#line 1218
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(570)));
#line 1218
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__11, ___nl__im__12));
#line 1218
c_rt_lib0clear(&___nl__im__11);
#line 1218
c_rt_lib0clear(&___nl__im__12);
#line 1219
goto label_27;
#line 1219
label_27:
;
#line 1219
//clear ___nl__bool__5;
#line 1221
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(570)));
#line 1221
c_rt_lib0move(&___nl__im__16,___get_global_string_const(385));
#line 1221
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 1221
c_rt_lib0clear(&___nl__im__15);
#line 1221
c_rt_lib0clear(&___nl__im__16);
#line 1221
___nl__bool__14 = !___nl__bool__14;
#line 1221
if(___nl__bool__14){ goto label_74;}
#line 1222
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1222
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(110)));
#line 1222
c_rt_lib0clear(&___nl__im__19);
#line 1222
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(145));
#line 1222
c_rt_lib0clear(&___nl__im__18);
#line 1222
if(___nl__bool__17){ goto label_47;}
#line 1222
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1222
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(110)));
#line 1222
c_rt_lib0clear(&___nl__im__21);
#line 1222
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(420));
#line 1222
c_rt_lib0clear(&___nl__im__20);
#line 1222
label_47:
;
#line 1222
___nl__bool__17 = !___nl__bool__17;
#line 1222
if(___nl__bool__17){ goto label_62;}
#line 1223
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1223
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__24));
#line 1223
c_rt_lib0clear(&___nl__im__24);
#line 1223
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(292)));
#line 1223
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__26));
#line 1223
c_rt_lib0clear(&___nl__im__26);
#line 1223
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__25));
#line 1223
c_rt_lib0clear(&___nl__im__23);
#line 1223
c_rt_lib0clear(&___nl__im__25);
#line 1223
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__22));
#line 1223
c_rt_lib0clear(&___nl__im__22);
#line 1224
goto label_71;
#line 1224
label_62:
;
#line 1225
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1225
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(292)));
#line 1225
c_rt_lib0move(&___nl__im__29,___get_global_string_const(397));
#line 1225
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__27, ___nl__im__28, ___nl__im__29));
#line 1225
c_rt_lib0clear(&___nl__im__27);
#line 1225
c_rt_lib0clear(&___nl__im__28);
#line 1225
c_rt_lib0clear(&___nl__im__29);
#line 1226
goto label_71;
#line 1226
label_71:
;
#line 1226
//clear ___nl__bool__17;
#line 1227
goto label_159;
#line 1227
label_74:
;
#line 1227
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(570)));
#line 1227
c_rt_lib0move(&___nl__im__31,___get_global_string_const(386));
#line 1227
___nl__bool__14 = c_rt_lib0eq(___nl__im__30, ___nl__im__31);
#line 1227
c_rt_lib0clear(&___nl__im__30);
#line 1227
c_rt_lib0clear(&___nl__im__31);
#line 1227
___nl__bool__14 = !___nl__bool__14;
#line 1227
if(___nl__bool__14){ goto label_120;}
#line 1228
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1228
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(110)));
#line 1228
c_rt_lib0clear(&___nl__im__34);
#line 1228
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(145));
#line 1228
c_rt_lib0clear(&___nl__im__33);
#line 1228
if(___nl__bool__32){ goto label_93;}
#line 1228
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1228
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(110)));
#line 1228
c_rt_lib0clear(&___nl__im__36);
#line 1228
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(420));
#line 1228
c_rt_lib0clear(&___nl__im__35);
#line 1228
label_93:
;
#line 1228
___nl__bool__32 = !___nl__bool__32;
#line 1228
if(___nl__bool__32){ goto label_108;}
#line 1229
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1229
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__39));
#line 1229
c_rt_lib0clear(&___nl__im__39);
#line 1229
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(292)));
#line 1229
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__41));
#line 1229
c_rt_lib0clear(&___nl__im__41);
#line 1229
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__38, ___nl__im__40));
#line 1229
c_rt_lib0clear(&___nl__im__38);
#line 1229
c_rt_lib0clear(&___nl__im__40);
#line 1229
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__37));
#line 1229
c_rt_lib0clear(&___nl__im__37);
#line 1230
goto label_117;
#line 1230
label_108:
;
#line 1231
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1231
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(292)));
#line 1231
c_rt_lib0move(&___nl__im__44,___get_global_string_const(399));
#line 1231
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__42, ___nl__im__43, ___nl__im__44));
#line 1231
c_rt_lib0clear(&___nl__im__42);
#line 1231
c_rt_lib0clear(&___nl__im__43);
#line 1231
c_rt_lib0clear(&___nl__im__44);
#line 1232
goto label_117;
#line 1232
label_117:
;
#line 1232
//clear ___nl__bool__32;
#line 1233
goto label_159;
#line 1233
label_120:
;
#line 1234
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1234
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(110)));
#line 1234
c_rt_lib0clear(&___nl__im__47);
#line 1234
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__46, ___get_global_string_const(145));
#line 1234
c_rt_lib0clear(&___nl__im__46);
#line 1234
if(___nl__bool__45){ goto label_132;}
#line 1234
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1234
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(110)));
#line 1234
c_rt_lib0clear(&___nl__im__49);
#line 1234
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(420));
#line 1234
c_rt_lib0clear(&___nl__im__48);
#line 1234
label_132:
;
#line 1234
___nl__bool__45 = !___nl__bool__45;
#line 1234
if(___nl__bool__45){ goto label_147;}
#line 1235
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1235
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__52));
#line 1235
c_rt_lib0clear(&___nl__im__52);
#line 1235
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(292)));
#line 1235
c_rt_lib0move(&___nl__im__53, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__54));
#line 1235
c_rt_lib0clear(&___nl__im__54);
#line 1235
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(2, ___nl__im__51, ___nl__im__53));
#line 1235
c_rt_lib0clear(&___nl__im__51);
#line 1235
c_rt_lib0clear(&___nl__im__53);
#line 1235
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__50));
#line 1235
c_rt_lib0clear(&___nl__im__50);
#line 1236
goto label_156;
#line 1236
label_147:
;
#line 1237
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(291)));
#line 1237
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(292)));
#line 1237
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(570)));
#line 1237
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__55, ___nl__im__56, ___nl__im__57));
#line 1237
c_rt_lib0clear(&___nl__im__55);
#line 1237
c_rt_lib0clear(&___nl__im__56);
#line 1237
c_rt_lib0clear(&___nl__im__57);
#line 1238
goto label_156;
#line 1238
label_156:
;
#line 1238
//clear ___nl__bool__45;
#line 1239
goto label_159;
#line 1239
label_159:
;
#line 1239
//clear ___nl__bool__14;
#line 1240
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1240
c_rt_lib0move(&___nl__im__58, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__59, ___nl__im__13));
#line 1240
c_rt_lib0clear(&___nl__im__59);
#line 1240
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__58));
#line 1240
c_rt_lib0clear(&___nl__im__58);
#line 1240
c_rt_lib0clear(&___nl__im__1);
#line 1240
c_rt_lib0clear(&___nl__im__2);
#line 1240
c_rt_lib0clear(&___nl__im__13);
#line 1240
return NULL;

}

ImmT  generator_c_priv0print_hash_declaration(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_decl_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
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
bool  ___nl__bool__47 = false;
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
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
#line 1244
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1244
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1244
c_rt_lib0clear(&___nl__im__4);
#line 1244
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1244
c_rt_lib0clear(&___nl__im__3);
#line 1244
___nl__bool__2 = !___nl__bool__2;
#line 1244
if(___nl__bool__2){ goto label_60;}
#line 1245
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(78)));
#line 1245
___nl__int__7 = c_rt_lib0array_len(___nl__im__8);
#line 1245
c_rt_lib0clear(&___nl__im__8);
#line 1245
c_rt_lib0move(&___nl__im__6, ptd0int_to_string(___nl__int__7));
#line 1245
//clear ___nl__int__7;
#line 1245
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__6));
#line 1245
c_rt_lib0clear(&___nl__im__6);
#line 1246
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(78)));
#line 1246
___nl__int__11 = 0;
#line 1246
___nl__int__12 = 1;
#line 1246
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 1246
label_18:
;
#line 1246
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 1246
if(___nl__bool__14){ goto label_50;}
#line 1246
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 1246
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 1247
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(245)));
#line 1247
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(110)));
#line 1247
c_rt_lib0clear(&___nl__im__18);
#line 1247
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(145));
#line 1247
c_rt_lib0clear(&___nl__im__17);
#line 1247
___nl__bool__16 = !___nl__bool__16;
#line 1247
___nl__bool__16 = !___nl__bool__16;
#line 1247
if(___nl__bool__16){ goto label_34;}
#line 1247
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1247
nl_die_arg(___nl__im__19);
#line 1247
goto label_34;
#line 1247
label_34:
;
#line 1247
//clear ___nl__bool__16;
#line 1247
c_rt_lib0clear(&___nl__im__19);
#line 1248
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(587)));
#line 1248
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__21));
#line 1248
c_rt_lib0clear(&___nl__im__21);
#line 1248
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__20));
#line 1248
c_rt_lib0clear(&___nl__im__20);
#line 1249
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(245)));
#line 1249
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__23));
#line 1249
c_rt_lib0clear(&___nl__im__23);
#line 1249
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__22));
#line 1249
c_rt_lib0clear(&___nl__im__22);
#line 1249
c_rt_lib0clear(&___nl__im__10);
#line 1250
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1250
goto label_18;
#line 1250
label_50:
;
#line 1251
c_rt_lib0move(&___nl__im__25,___get_global_string_const(613));
#line 1251
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_fun_lib(___nl__im__25, ___nl__im__5));
#line 1251
c_rt_lib0clear(&___nl__im__25);
#line 1252
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1252
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__27, ___nl__im__24));
#line 1252
c_rt_lib0clear(&___nl__im__27);
#line 1252
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__26));
#line 1252
c_rt_lib0clear(&___nl__im__26);
#line 1253
goto label_151;
#line 1253
label_60:
;
#line 1253
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1253
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(110)));
#line 1253
c_rt_lib0clear(&___nl__im__29);
#line 1253
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(569));
#line 1253
c_rt_lib0clear(&___nl__im__28);
#line 1253
___nl__bool__2 = !___nl__bool__2;
#line 1253
if(___nl__bool__2){ goto label_147;}
#line 1254
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 1255
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(78)));
#line 1255
___nl__int__33 = 0;
#line 1255
___nl__int__34 = 1;
#line 1255
___nl__int__35 = c_rt_lib0array_len(___nl__im__31);
#line 1255
label_73:
;
#line 1255
___nl__bool__36 = ___nl__int__33 >= ___nl__int__35;
#line 1255
if(___nl__bool__36){ goto label_136;}
#line 1255
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__31, ___nl__int__33));
#line 1255
c_rt_lib0copy(&___nl__im__32, ___nl__im__37);
#line 1256
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1256
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__41));
#line 1256
c_rt_lib0clear(&___nl__im__41);
#line 1256
c_rt_lib0move(&___nl__im__42,___get_global_string_const(122));
#line 1256
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__42));
#line 1256
c_rt_lib0clear(&___nl__im__40);
#line 1256
c_rt_lib0clear(&___nl__im__42);
#line 1256
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(587)));
#line 1256
c_rt_lib0move(&___nl__im__43, generator_c_priv0get_field_name(___nl__im__44));
#line 1256
c_rt_lib0clear(&___nl__im__44);
#line 1256
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__43));
#line 1256
c_rt_lib0clear(&___nl__im__39);
#line 1256
c_rt_lib0clear(&___nl__im__43);
#line 1257
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(245)));
#line 1257
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__46));
#line 1257
c_rt_lib0clear(&___nl__im__46);
#line 1258
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(245)));
#line 1258
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(110)));
#line 1258
c_rt_lib0clear(&___nl__im__49);
#line 1258
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(145));
#line 1258
c_rt_lib0clear(&___nl__im__48);
#line 1258
___nl__bool__47 = !___nl__bool__47;
#line 1258
if(___nl__bool__47){ goto label_122;}
#line 1259
c_rt_lib0move(&___nl__im__51,___get_global_string_const(600));
#line 1259
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__38, ___nl__im__51));
#line 1259
c_rt_lib0clear(&___nl__im__51);
#line 1259
c_rt_lib0array_push(&___nl__im__30, ___nl__im__50);
#line 1259
c_rt_lib0clear(&___nl__im__50);
#line 1260
c_rt_lib0move(&___nl__im__53,___get_global_string_const(467));
#line 1260
c_rt_lib0move(&___nl__im__57,___get_global_string_const(614));
#line 1260
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__38));
#line 1260
c_rt_lib0clear(&___nl__im__57);
#line 1260
c_rt_lib0move(&___nl__im__58,___get_global_string_const(336));
#line 1260
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__58));
#line 1260
c_rt_lib0clear(&___nl__im__56);
#line 1260
c_rt_lib0clear(&___nl__im__58);
#line 1260
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(2, ___nl__im__55, ___nl__im__45));
#line 1260
c_rt_lib0clear(&___nl__im__55);
#line 1260
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_fun_lib(___nl__im__53, ___nl__im__54));
#line 1260
c_rt_lib0clear(&___nl__im__53);
#line 1260
c_rt_lib0clear(&___nl__im__54);
#line 1260
c_rt_lib0array_push(&___nl__im__30, ___nl__im__52);
#line 1260
c_rt_lib0clear(&___nl__im__52);
#line 1261
goto label_131;
#line 1261
label_122:
;
#line 1262
c_rt_lib0move(&___nl__im__61,___get_global_string_const(514));
#line 1262
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__38, ___nl__im__61));
#line 1262
c_rt_lib0clear(&___nl__im__61);
#line 1262
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__45));
#line 1262
c_rt_lib0clear(&___nl__im__60);
#line 1262
c_rt_lib0array_push(&___nl__im__30, ___nl__im__59);
#line 1262
c_rt_lib0clear(&___nl__im__59);
#line 1263
goto label_131;
#line 1263
label_131:
;
#line 1263
//clear ___nl__bool__47;
#line 1263
c_rt_lib0clear(&___nl__im__32);
#line 1264
___nl__int__33 = ___nl__int__33 + ___nl__int__34;
#line 1264
goto label_73;
#line 1264
label_136:
;
#line 1265
c_rt_lib0move(&___nl__im__64,___get_global_string_const(454));
#line 1265
c_rt_lib0move(&___nl__im__65, string0lf());
#line 1265
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__65));
#line 1265
c_rt_lib0clear(&___nl__im__64);
#line 1265
c_rt_lib0clear(&___nl__im__65);
#line 1265
c_rt_lib0move(&___nl__im__62, array0join(___nl__im__63, ___nl__im__30));
#line 1265
c_rt_lib0clear(&___nl__im__63);
#line 1265
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__62));
#line 1265
c_rt_lib0clear(&___nl__im__62);
#line 1266
goto label_151;
#line 1266
label_147:
;
#line 1267
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(0));
#line 1267
nl_die_arg(___nl__im__66);
#line 1268
goto label_151;
#line 1268
label_151:
;
#line 1268
//clear ___nl__bool__2;
#line 1268
c_rt_lib0clear(&___nl__im__5);
#line 1268
c_rt_lib0clear(&___nl__im__9);
#line 1268
c_rt_lib0clear(&___nl__im__10);
#line 1268
//clear ___nl__int__11;
#line 1268
//clear ___nl__int__12;
#line 1268
//clear ___nl__int__13;
#line 1268
//clear ___nl__bool__14;
#line 1268
c_rt_lib0clear(&___nl__im__15);
#line 1268
c_rt_lib0clear(&___nl__im__24);
#line 1268
c_rt_lib0clear(&___nl__im__30);
#line 1268
c_rt_lib0clear(&___nl__im__31);
#line 1268
c_rt_lib0clear(&___nl__im__32);
#line 1268
//clear ___nl__int__33;
#line 1268
//clear ___nl__int__34;
#line 1268
//clear ___nl__int__35;
#line 1268
//clear ___nl__bool__36;
#line 1268
c_rt_lib0clear(&___nl__im__37);
#line 1268
c_rt_lib0clear(&___nl__im__38);
#line 1268
c_rt_lib0clear(&___nl__im__45);
#line 1268
c_rt_lib0clear(&___nl__im__66);
#line 1268
c_rt_lib0clear(&___nl__im__1);
#line 1268
return NULL;

}

ImmT  generator_c_priv0print_use_field(generator_c0state_t0type* ___ref___rec__0,nlasm0use_field_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
bool  ___nl__bool__14 = false;
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
#line 1272
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1272
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1272
c_rt_lib0clear(&___nl__im__4);
#line 1272
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(569));
#line 1272
c_rt_lib0clear(&___nl__im__3);
#line 1272
___nl__bool__2 = !___nl__bool__2;
#line 1272
if(___nl__bool__2){ goto label_52;}
#line 1273
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(375)));
#line 1273
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__8));
#line 1273
c_rt_lib0clear(&___nl__im__8);
#line 1273
c_rt_lib0move(&___nl__im__9,___get_global_string_const(615));
#line 1273
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 1273
c_rt_lib0clear(&___nl__im__7);
#line 1273
c_rt_lib0clear(&___nl__im__9);
#line 1273
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1273
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__11));
#line 1273
c_rt_lib0clear(&___nl__im__11);
#line 1273
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 1273
c_rt_lib0clear(&___nl__im__6);
#line 1273
c_rt_lib0clear(&___nl__im__10);
#line 1274
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1274
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(367)));
#line 1274
c_rt_lib0clear(&___nl__im__13);
#line 1274
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(241));
#line 1274
if(___nl__bool__14){ goto label_30;}
#line 1276
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(434));
#line 1276
if(___nl__bool__14){ goto label_35;}
#line 1276
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 1276
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 1276
nl_die_arg(___nl__im__15);
#line 1274
label_30:
;
#line 1275
c_rt_lib0move(&___nl__im__16,___get_global_string_const(122));
#line 1275
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__16));
#line 1275
c_rt_lib0clear(&___nl__im__16);
#line 1276
goto label_40;
#line 1276
label_35:
;
#line 1277
c_rt_lib0move(&___nl__im__17,___get_global_string_const(588));
#line 1277
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__17));
#line 1277
c_rt_lib0clear(&___nl__im__17);
#line 1278
goto label_40;
#line 1278
label_40:
;
#line 1279
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(616)));
#line 1279
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_field_name(___nl__im__20));
#line 1279
c_rt_lib0clear(&___nl__im__20);
#line 1279
c_rt_lib0move(&___nl__im__21,___get_global_string_const(336));
#line 1279
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 1279
c_rt_lib0clear(&___nl__im__19);
#line 1279
c_rt_lib0clear(&___nl__im__21);
#line 1279
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__18));
#line 1279
c_rt_lib0clear(&___nl__im__18);
#line 1280
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__5));
#line 1281
goto label_72;
#line 1281
label_52:
;
#line 1281
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1281
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(110)));
#line 1281
c_rt_lib0clear(&___nl__im__23);
#line 1281
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(145));
#line 1281
c_rt_lib0clear(&___nl__im__22);
#line 1281
___nl__bool__2 = !___nl__bool__2;
#line 1281
if(___nl__bool__2){ goto label_68;}
#line 1282
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1282
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(375)));
#line 1282
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(616)));
#line 1282
c_rt_lib0delete(generator_c_priv0print_get_val(___ref___rec__0, ___nl__im__24, ___nl__im__25, ___nl__im__26));
#line 1282
c_rt_lib0clear(&___nl__im__24);
#line 1282
c_rt_lib0clear(&___nl__im__25);
#line 1282
c_rt_lib0clear(&___nl__im__26);
#line 1283
goto label_72;
#line 1283
label_68:
;
#line 1284
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 1284
nl_die_arg(___nl__im__27);
#line 1285
goto label_72;
#line 1285
label_72:
;
#line 1285
//clear ___nl__bool__2;
#line 1285
c_rt_lib0clear(&___nl__im__5);
#line 1285
c_rt_lib0clear(&___nl__im__12);
#line 1285
//clear ___nl__bool__14;
#line 1285
c_rt_lib0clear(&___nl__im__15);
#line 1285
c_rt_lib0clear(&___nl__im__27);
#line 1285
c_rt_lib0clear(&___nl__im__1);
#line 1285
return NULL;

}

ImmT  generator_c_priv0print_use_index(generator_c0state_t0type* ___ref___rec__0,nlasm0use_index_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
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
ImmT * ___nl__im_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
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
#line 1289
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1289
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1289
c_rt_lib0clear(&___nl__im__4);
#line 1289
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(141));
#line 1289
c_rt_lib0clear(&___nl__im__3);
#line 1289
___nl__bool__2 = !___nl__bool__2;
#line 1289
if(___nl__bool__2){ goto label_87;}
#line 1290
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1290
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(110)));
#line 1290
c_rt_lib0clear(&___nl__im__8);
#line 1290
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1290
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(110)));
#line 1290
c_rt_lib0clear(&___nl__im__10);
#line 1290
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(141)));
#line 1290
c_rt_lib0clear(&___nl__im__7);
#line 1290
c_rt_lib0clear(&___nl__im__9);
#line 1290
___nl__bool__5 = generator_c_priv0is_anon(___nl__im__6);
#line 1290
c_rt_lib0clear(&___nl__im__6);
#line 1291
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(375)));
#line 1291
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__15));
#line 1291
c_rt_lib0clear(&___nl__im__15);
#line 1291
c_rt_lib0move(&___nl__im__16,___get_global_string_const(514));
#line 1291
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 1291
c_rt_lib0clear(&___nl__im__14);
#line 1291
c_rt_lib0clear(&___nl__im__16);
#line 1292
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1292
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(110)));
#line 1292
c_rt_lib0clear(&___nl__im__21);
#line 1292
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1292
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(110)));
#line 1292
c_rt_lib0clear(&___nl__im__23);
#line 1292
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(141)));
#line 1292
c_rt_lib0clear(&___nl__im__20);
#line 1292
c_rt_lib0clear(&___nl__im__22);
#line 1292
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_type_name(___nl__im__19));
#line 1292
c_rt_lib0clear(&___nl__im__19);
#line 1292
___nl__im_ptr__25 = &((*___ref___rec__0).mod_name0field);
#line 1292
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1292
___nl__im_ptr__25 = NULL;
#line 1292
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_array_get_fun_name(___nl__im__18, ___nl__im__24, ___nl__bool__5));
#line 1292
c_rt_lib0clear(&___nl__im__18);
#line 1292
c_rt_lib0clear(&___nl__im__24);
#line 1292
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1292
c_rt_lib0clear(&___nl__im__13);
#line 1292
c_rt_lib0clear(&___nl__im__17);
#line 1293
c_rt_lib0move(&___nl__im__26,___get_global_string_const(469));
#line 1293
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__26));
#line 1293
c_rt_lib0clear(&___nl__im__12);
#line 1293
c_rt_lib0clear(&___nl__im__26);
#line 1294
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1294
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(367)));
#line 1294
c_rt_lib0clear(&___nl__im__28);
#line 1294
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(241));
#line 1294
if(___nl__bool__29){ goto label_59;}
#line 1296
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(434));
#line 1296
if(___nl__bool__29){ goto label_64;}
#line 1296
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 1296
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__27));
#line 1296
nl_die_arg(___nl__im__30);
#line 1294
label_59:
;
#line 1295
c_rt_lib0move(&___nl__im__31,___get_global_string_const(516));
#line 1295
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__31));
#line 1295
c_rt_lib0clear(&___nl__im__31);
#line 1296
goto label_66;
#line 1296
label_64:
;
#line 1297
goto label_66;
#line 1297
label_66:
;
#line 1298
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1298
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__34));
#line 1298
c_rt_lib0clear(&___nl__im__34);
#line 1298
c_rt_lib0move(&___nl__im__35,___get_global_string_const(343));
#line 1298
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 1298
c_rt_lib0clear(&___nl__im__33);
#line 1298
c_rt_lib0clear(&___nl__im__35);
#line 1298
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__32));
#line 1298
c_rt_lib0clear(&___nl__im__32);
#line 1299
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(377)));
#line 1299
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__38));
#line 1299
c_rt_lib0clear(&___nl__im__38);
#line 1299
c_rt_lib0move(&___nl__im__39,___get_global_string_const(336));
#line 1299
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 1299
c_rt_lib0clear(&___nl__im__37);
#line 1299
c_rt_lib0clear(&___nl__im__39);
#line 1299
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__36));
#line 1299
c_rt_lib0clear(&___nl__im__36);
#line 1300
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__11));
#line 1301
goto label_125;
#line 1301
label_87:
;
#line 1301
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1301
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(110)));
#line 1301
c_rt_lib0clear(&___nl__im__41);
#line 1301
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(145));
#line 1301
c_rt_lib0clear(&___nl__im__40);
#line 1301
___nl__bool__2 = !___nl__bool__2;
#line 1301
if(___nl__bool__2){ goto label_121;}
#line 1302
c_rt_lib0move(&___nl__im__43,___get_global_string_const(258));
#line 1302
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(375)));
#line 1302
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__46));
#line 1302
c_rt_lib0clear(&___nl__im__46);
#line 1303
c_rt_lib0move(&___nl__im__48,___get_global_string_const(584));
#line 1303
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1303
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__51));
#line 1303
c_rt_lib0clear(&___nl__im__51);
#line 1303
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(377)));
#line 1303
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__53));
#line 1303
c_rt_lib0clear(&___nl__im__53);
#line 1303
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__50, ___nl__im__52));
#line 1303
c_rt_lib0clear(&___nl__im__50);
#line 1303
c_rt_lib0clear(&___nl__im__52);
#line 1303
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_fun_lib(___nl__im__48, ___nl__im__49));
#line 1303
c_rt_lib0clear(&___nl__im__48);
#line 1303
c_rt_lib0clear(&___nl__im__49);
#line 1303
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(2, ___nl__im__45, ___nl__im__47));
#line 1303
c_rt_lib0clear(&___nl__im__45);
#line 1303
c_rt_lib0clear(&___nl__im__47);
#line 1303
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_fun_lib(___nl__im__43, ___nl__im__44));
#line 1303
c_rt_lib0clear(&___nl__im__43);
#line 1303
c_rt_lib0clear(&___nl__im__44);
#line 1303
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__42));
#line 1303
c_rt_lib0clear(&___nl__im__42);
#line 1305
goto label_125;
#line 1305
label_121:
;
#line 1306
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 1306
nl_die_arg(___nl__im__54);
#line 1307
goto label_125;
#line 1307
label_125:
;
#line 1307
//clear ___nl__bool__2;
#line 1307
//clear ___nl__bool__5;
#line 1307
c_rt_lib0clear(&___nl__im__11);
#line 1307
c_rt_lib0clear(&___nl__im__27);
#line 1307
//clear ___nl__bool__29;
#line 1307
c_rt_lib0clear(&___nl__im__30);
#line 1307
c_rt_lib0clear(&___nl__im__54);
#line 1307
c_rt_lib0clear(&___nl__im__1);
#line 1307
return NULL;

}

ImmT  generator_c_priv0print_use_hash_index(generator_c0state_t0type* ___ref___rec__0,nlasm0use_hash_index_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
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
ImmT * ___nl__im_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
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
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
#line 1311
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1311
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1311
c_rt_lib0clear(&___nl__im__4);
#line 1311
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(142));
#line 1311
c_rt_lib0clear(&___nl__im__3);
#line 1311
___nl__bool__2 = !___nl__bool__2;
#line 1311
if(___nl__bool__2){ goto label_103;}
#line 1312
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1312
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(110)));
#line 1312
c_rt_lib0clear(&___nl__im__8);
#line 1312
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1312
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(110)));
#line 1312
c_rt_lib0clear(&___nl__im__10);
#line 1312
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(142)));
#line 1312
c_rt_lib0clear(&___nl__im__7);
#line 1312
c_rt_lib0clear(&___nl__im__9);
#line 1312
___nl__bool__5 = generator_c_priv0is_anon(___nl__im__6);
#line 1312
c_rt_lib0clear(&___nl__im__6);
#line 1313
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(375)));
#line 1313
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__15));
#line 1313
c_rt_lib0clear(&___nl__im__15);
#line 1313
c_rt_lib0move(&___nl__im__16,___get_global_string_const(514));
#line 1313
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 1313
c_rt_lib0clear(&___nl__im__14);
#line 1313
c_rt_lib0clear(&___nl__im__16);
#line 1314
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1314
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(110)));
#line 1314
c_rt_lib0clear(&___nl__im__21);
#line 1314
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1314
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(110)));
#line 1314
c_rt_lib0clear(&___nl__im__23);
#line 1314
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(142)));
#line 1314
c_rt_lib0clear(&___nl__im__20);
#line 1314
c_rt_lib0clear(&___nl__im__22);
#line 1314
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_type_name(___nl__im__19));
#line 1314
c_rt_lib0clear(&___nl__im__19);
#line 1314
___nl__im_ptr__25 = &((*___ref___rec__0).mod_name0field);
#line 1314
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1314
___nl__im_ptr__25 = NULL;
#line 1314
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_hash_get_fun_name(___nl__im__18, ___nl__im__24, ___nl__bool__5));
#line 1314
c_rt_lib0clear(&___nl__im__18);
#line 1314
c_rt_lib0clear(&___nl__im__24);
#line 1314
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1314
c_rt_lib0clear(&___nl__im__13);
#line 1314
c_rt_lib0clear(&___nl__im__17);
#line 1315
c_rt_lib0move(&___nl__im__26,___get_global_string_const(469));
#line 1315
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__26));
#line 1315
c_rt_lib0clear(&___nl__im__12);
#line 1315
c_rt_lib0clear(&___nl__im__26);
#line 1316
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1316
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(367)));
#line 1316
c_rt_lib0clear(&___nl__im__28);
#line 1316
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(241));
#line 1316
if(___nl__bool__29){ goto label_59;}
#line 1318
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(434));
#line 1318
if(___nl__bool__29){ goto label_64;}
#line 1318
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 1318
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__27));
#line 1318
nl_die_arg(___nl__im__30);
#line 1316
label_59:
;
#line 1317
c_rt_lib0move(&___nl__im__31,___get_global_string_const(516));
#line 1317
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__31));
#line 1317
c_rt_lib0clear(&___nl__im__31);
#line 1318
goto label_66;
#line 1318
label_64:
;
#line 1319
goto label_66;
#line 1319
label_66:
;
#line 1320
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1320
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__34));
#line 1320
c_rt_lib0clear(&___nl__im__34);
#line 1320
c_rt_lib0move(&___nl__im__35,___get_global_string_const(343));
#line 1320
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 1320
c_rt_lib0clear(&___nl__im__33);
#line 1320
c_rt_lib0clear(&___nl__im__35);
#line 1320
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__32));
#line 1320
c_rt_lib0clear(&___nl__im__32);
#line 1321
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(377)));
#line 1321
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__38));
#line 1321
c_rt_lib0clear(&___nl__im__38);
#line 1321
c_rt_lib0move(&___nl__im__39,___get_global_string_const(343));
#line 1321
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 1321
c_rt_lib0clear(&___nl__im__37);
#line 1321
c_rt_lib0clear(&___nl__im__39);
#line 1321
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__36));
#line 1321
c_rt_lib0clear(&___nl__im__36);
#line 1322
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(617)));
#line 1322
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 1322
c_rt_lib0clear(&___nl__im__43);
#line 1322
if(___nl__bool__42){ goto label_91;}
#line 1322
c_rt_lib0move(&___nl__im__41,___get_global_string_const(582));
#line 1322
goto label_93;
#line 1322
label_91:
;
#line 1322
c_rt_lib0move(&___nl__im__41,___get_global_string_const(583));
#line 1322
label_93:
;
#line 1322
//clear ___nl__bool__42;
#line 1322
c_rt_lib0move(&___nl__im__44,___get_global_string_const(336));
#line 1322
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1322
c_rt_lib0clear(&___nl__im__41);
#line 1322
c_rt_lib0clear(&___nl__im__44);
#line 1322
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__40));
#line 1322
c_rt_lib0clear(&___nl__im__40);
#line 1323
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__11));
#line 1324
goto label_116;
#line 1324
label_103:
;
#line 1324
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1324
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(110)));
#line 1324
c_rt_lib0clear(&___nl__im__46);
#line 1324
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(145));
#line 1324
c_rt_lib0clear(&___nl__im__45);
#line 1324
___nl__bool__2 = !___nl__bool__2;
#line 1324
if(___nl__bool__2){ goto label_112;}
#line 1325
goto label_116;
#line 1325
label_112:
;
#line 1326
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(0));
#line 1326
nl_die_arg(___nl__im__47);
#line 1327
goto label_116;
#line 1327
label_116:
;
#line 1327
//clear ___nl__bool__2;
#line 1327
//clear ___nl__bool__5;
#line 1327
c_rt_lib0clear(&___nl__im__11);
#line 1327
c_rt_lib0clear(&___nl__im__27);
#line 1327
//clear ___nl__bool__29;
#line 1327
c_rt_lib0clear(&___nl__im__30);
#line 1327
c_rt_lib0clear(&___nl__im__47);
#line 1327
c_rt_lib0clear(&___nl__im__1);
#line 1327
return NULL;

}

ImmT  generator_c_priv0print_use_variant(generator_c0state_t0type* ___ref___rec__0,nlasm0use_variant_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
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
#line 1331
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1331
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_access_op(___nl__im__3));
#line 1331
c_rt_lib0clear(&___nl__im__3);
#line 1332
c_rt_lib0move(&___nl__im__10,___get_global_string_const(618));
#line 1332
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1332
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__12));
#line 1332
c_rt_lib0clear(&___nl__im__12);
#line 1332
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 1332
c_rt_lib0clear(&___nl__im__10);
#line 1332
c_rt_lib0clear(&___nl__im__11);
#line 1332
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__2));
#line 1332
c_rt_lib0clear(&___nl__im__9);
#line 1332
c_rt_lib0move(&___nl__im__13,___get_global_string_const(619));
#line 1332
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 1332
c_rt_lib0clear(&___nl__im__8);
#line 1332
c_rt_lib0clear(&___nl__im__13);
#line 1332
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(577)));
#line 1332
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1332
c_rt_lib0clear(&___nl__im__15);
#line 1332
c_rt_lib0move(&___nl__string__16, c_rt_lib0int_to_string(___nl__int__14));
#line 1332
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__16));
#line 1332
c_rt_lib0clear(&___nl__im__7);
#line 1332
//clear ___nl__int__14;
#line 1332
c_rt_lib0clear(&___nl__string__16);
#line 1333
c_rt_lib0move(&___nl__im__17,___get_global_string_const(620));
#line 1333
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__17));
#line 1333
c_rt_lib0clear(&___nl__im__6);
#line 1333
c_rt_lib0clear(&___nl__im__17);
#line 1333
c_rt_lib0move(&___nl__im__18, string0lf());
#line 1333
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__18));
#line 1333
c_rt_lib0clear(&___nl__im__5);
#line 1333
c_rt_lib0clear(&___nl__im__18);
#line 1334
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(375)));
#line 1334
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__23));
#line 1334
c_rt_lib0clear(&___nl__im__23);
#line 1334
c_rt_lib0move(&___nl__im__24,___get_global_string_const(514));
#line 1334
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 1334
c_rt_lib0clear(&___nl__im__22);
#line 1334
c_rt_lib0clear(&___nl__im__24);
#line 1334
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(374)));
#line 1334
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__26));
#line 1334
c_rt_lib0clear(&___nl__im__26);
#line 1334
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 1334
c_rt_lib0clear(&___nl__im__21);
#line 1334
c_rt_lib0clear(&___nl__im__25);
#line 1334
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__2));
#line 1334
c_rt_lib0clear(&___nl__im__20);
#line 1334
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__19));
#line 1334
c_rt_lib0clear(&___nl__im__19);
#line 1335
c_rt_lib0move(&___nl__im__28,___get_global_string_const(580));
#line 1335
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(572)));
#line 1335
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_case_name(___nl__im__30));
#line 1335
c_rt_lib0clear(&___nl__im__30);
#line 1335
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 1335
c_rt_lib0clear(&___nl__im__28);
#line 1335
c_rt_lib0clear(&___nl__im__29);
#line 1335
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__27));
#line 1335
c_rt_lib0clear(&___nl__im__27);
#line 1336
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__4));
#line 1336
c_rt_lib0clear(&___nl__im__1);
#line 1336
c_rt_lib0clear(&___nl__im__2);
#line 1336
c_rt_lib0clear(&___nl__im__4);
#line 1336
return NULL;

}

ImmT  generator_c_priv0print_hash_init_iter(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_iter_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
bool  ___nl__bool__12 = false;
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
ImmT * ___nl__im_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 1340
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1340
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1340
c_rt_lib0clear(&___nl__im__4);
#line 1340
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1340
c_rt_lib0clear(&___nl__im__3);
#line 1340
___nl__bool__2 = !___nl__bool__2;
#line 1340
if(___nl__bool__2){ goto label_23;}
#line 1342
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1343
c_rt_lib0move(&___nl__im__7,___get_global_string_const(286));
#line 1344
c_rt_lib0move(&___nl__im__8,___get_global_string_const(287));
#line 1345
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1345
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__11));
#line 1345
c_rt_lib0clear(&___nl__im__11);
#line 1345
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1345
c_rt_lib0clear(&___nl__im__10);
#line 1345
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__6, ___get_global_string_const(111), ___nl__im__7, ___get_global_string_const(226), ___nl__im__8, ___get_global_string_const(113), ___nl__im__9));
#line 1345
c_rt_lib0clear(&___nl__im__6);
#line 1345
c_rt_lib0clear(&___nl__im__7);
#line 1345
c_rt_lib0clear(&___nl__im__8);
#line 1345
c_rt_lib0clear(&___nl__im__9);
#line 1345
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1345
c_rt_lib0clear(&___nl__im__5);
#line 1347
goto label_72;
#line 1347
label_23:
;
#line 1348
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1348
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(110)));
#line 1348
c_rt_lib0clear(&___nl__im__15);
#line 1348
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1348
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 1348
c_rt_lib0clear(&___nl__im__17);
#line 1348
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(142)));
#line 1348
c_rt_lib0clear(&___nl__im__14);
#line 1348
c_rt_lib0clear(&___nl__im__16);
#line 1348
___nl__bool__12 = generator_c_priv0is_anon(___nl__im__13);
#line 1348
c_rt_lib0clear(&___nl__im__13);
#line 1349
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1349
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(110)));
#line 1349
c_rt_lib0clear(&___nl__im__25);
#line 1349
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1349
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(110)));
#line 1349
c_rt_lib0clear(&___nl__im__27);
#line 1349
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(142)));
#line 1349
c_rt_lib0clear(&___nl__im__24);
#line 1349
c_rt_lib0clear(&___nl__im__26);
#line 1349
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_type_name(___nl__im__23));
#line 1349
c_rt_lib0clear(&___nl__im__23);
#line 1349
___nl__im_ptr__29 = &((*___ref___rec__0).mod_name0field);
#line 1349
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1349
___nl__im_ptr__29 = NULL;
#line 1349
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__22, ___nl__im__28, ___nl__bool__12));
#line 1349
c_rt_lib0clear(&___nl__im__22);
#line 1349
c_rt_lib0clear(&___nl__im__28);
#line 1350
c_rt_lib0move(&___nl__im__30,___get_global_string_const(469));
#line 1350
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__30));
#line 1350
c_rt_lib0clear(&___nl__im__21);
#line 1350
c_rt_lib0clear(&___nl__im__30);
#line 1350
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1350
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__32));
#line 1350
c_rt_lib0clear(&___nl__im__32);
#line 1350
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__31));
#line 1350
c_rt_lib0clear(&___nl__im__20);
#line 1350
c_rt_lib0clear(&___nl__im__31);
#line 1350
c_rt_lib0move(&___nl__im__33,___get_global_string_const(621));
#line 1350
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__33));
#line 1350
c_rt_lib0clear(&___nl__im__19);
#line 1350
c_rt_lib0clear(&___nl__im__33);
#line 1351
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1351
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__35, ___nl__im__18));
#line 1351
c_rt_lib0clear(&___nl__im__35);
#line 1351
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__34));
#line 1351
c_rt_lib0clear(&___nl__im__34);
#line 1352
goto label_72;
#line 1352
label_72:
;
#line 1352
//clear ___nl__bool__2;
#line 1352
//clear ___nl__bool__12;
#line 1352
c_rt_lib0clear(&___nl__im__18);
#line 1352
c_rt_lib0clear(&___nl__im__1);
#line 1352
return NULL;

}

ImmT  generator_c_priv0print_hash_next_iter(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_iter_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
bool  ___nl__bool__12 = false;
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
ImmT * ___nl__im_ptr__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
#line 1356
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1356
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1356
c_rt_lib0clear(&___nl__im__4);
#line 1356
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1356
c_rt_lib0clear(&___nl__im__3);
#line 1356
___nl__bool__2 = !___nl__bool__2;
#line 1356
if(___nl__bool__2){ goto label_23;}
#line 1358
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1359
c_rt_lib0move(&___nl__im__7,___get_global_string_const(286));
#line 1360
c_rt_lib0move(&___nl__im__8,___get_global_string_const(290));
#line 1361
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1361
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__11));
#line 1361
c_rt_lib0clear(&___nl__im__11);
#line 1361
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1361
c_rt_lib0clear(&___nl__im__10);
#line 1361
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__6, ___get_global_string_const(111), ___nl__im__7, ___get_global_string_const(226), ___nl__im__8, ___get_global_string_const(113), ___nl__im__9));
#line 1361
c_rt_lib0clear(&___nl__im__6);
#line 1361
c_rt_lib0clear(&___nl__im__7);
#line 1361
c_rt_lib0clear(&___nl__im__8);
#line 1361
c_rt_lib0clear(&___nl__im__9);
#line 1361
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1361
c_rt_lib0clear(&___nl__im__5);
#line 1363
goto label_82;
#line 1363
label_23:
;
#line 1364
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1364
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(110)));
#line 1364
c_rt_lib0clear(&___nl__im__15);
#line 1364
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1364
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 1364
c_rt_lib0clear(&___nl__im__17);
#line 1364
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(142)));
#line 1364
c_rt_lib0clear(&___nl__im__14);
#line 1364
c_rt_lib0clear(&___nl__im__16);
#line 1364
___nl__bool__12 = generator_c_priv0is_anon(___nl__im__13);
#line 1364
c_rt_lib0clear(&___nl__im__13);
#line 1365
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1365
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(110)));
#line 1365
c_rt_lib0clear(&___nl__im__27);
#line 1365
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1365
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(110)));
#line 1365
c_rt_lib0clear(&___nl__im__29);
#line 1365
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(142)));
#line 1365
c_rt_lib0clear(&___nl__im__26);
#line 1365
c_rt_lib0clear(&___nl__im__28);
#line 1365
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_type_name(___nl__im__25));
#line 1365
c_rt_lib0clear(&___nl__im__25);
#line 1365
___nl__im_ptr__31 = &((*___ref___rec__0).mod_name0field);
#line 1365
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 1365
___nl__im_ptr__31 = NULL;
#line 1365
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__24, ___nl__im__30, ___nl__bool__12));
#line 1365
c_rt_lib0clear(&___nl__im__24);
#line 1365
c_rt_lib0clear(&___nl__im__30);
#line 1366
c_rt_lib0move(&___nl__im__32,___get_global_string_const(469));
#line 1366
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__32));
#line 1366
c_rt_lib0clear(&___nl__im__23);
#line 1366
c_rt_lib0clear(&___nl__im__32);
#line 1366
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1366
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__34));
#line 1366
c_rt_lib0clear(&___nl__im__34);
#line 1366
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__33));
#line 1366
c_rt_lib0clear(&___nl__im__22);
#line 1366
c_rt_lib0clear(&___nl__im__33);
#line 1366
c_rt_lib0move(&___nl__im__35,___get_global_string_const(343));
#line 1366
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__35));
#line 1366
c_rt_lib0clear(&___nl__im__21);
#line 1366
c_rt_lib0clear(&___nl__im__35);
#line 1367
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1367
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__37));
#line 1367
c_rt_lib0clear(&___nl__im__37);
#line 1367
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__36));
#line 1367
c_rt_lib0clear(&___nl__im__20);
#line 1367
c_rt_lib0clear(&___nl__im__36);
#line 1367
c_rt_lib0move(&___nl__im__38,___get_global_string_const(336));
#line 1367
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__38));
#line 1367
c_rt_lib0clear(&___nl__im__19);
#line 1367
c_rt_lib0clear(&___nl__im__38);
#line 1368
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1368
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__40, ___nl__im__18));
#line 1368
c_rt_lib0clear(&___nl__im__40);
#line 1368
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__39));
#line 1368
c_rt_lib0clear(&___nl__im__39);
#line 1369
goto label_82;
#line 1369
label_82:
;
#line 1369
//clear ___nl__bool__2;
#line 1369
//clear ___nl__bool__12;
#line 1369
c_rt_lib0clear(&___nl__im__18);
#line 1369
c_rt_lib0clear(&___nl__im__1);
#line 1369
return NULL;

}

ImmT  generator_c_priv0print_hash_get_key_iter(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_dest_iter_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
#line 1373
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1373
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1373
c_rt_lib0clear(&___nl__im__4);
#line 1373
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1373
c_rt_lib0clear(&___nl__im__3);
#line 1373
___nl__bool__2 = !___nl__bool__2;
#line 1373
if(___nl__bool__2){ goto label_23;}
#line 1375
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1376
c_rt_lib0move(&___nl__im__7,___get_global_string_const(286));
#line 1377
c_rt_lib0move(&___nl__im__8,___get_global_string_const(289));
#line 1378
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1378
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__11));
#line 1378
c_rt_lib0clear(&___nl__im__11);
#line 1378
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1378
c_rt_lib0clear(&___nl__im__10);
#line 1378
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__6, ___get_global_string_const(111), ___nl__im__7, ___get_global_string_const(226), ___nl__im__8, ___get_global_string_const(113), ___nl__im__9));
#line 1378
c_rt_lib0clear(&___nl__im__6);
#line 1378
c_rt_lib0clear(&___nl__im__7);
#line 1378
c_rt_lib0clear(&___nl__im__8);
#line 1378
c_rt_lib0clear(&___nl__im__9);
#line 1378
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1378
c_rt_lib0clear(&___nl__im__5);
#line 1380
goto label_53;
#line 1380
label_23:
;
#line 1381
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1381
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__16));
#line 1381
c_rt_lib0clear(&___nl__im__16);
#line 1381
c_rt_lib0move(&___nl__im__17,___get_global_string_const(622));
#line 1381
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__17));
#line 1381
c_rt_lib0clear(&___nl__im__15);
#line 1381
c_rt_lib0clear(&___nl__im__17);
#line 1381
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1381
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__19));
#line 1381
c_rt_lib0clear(&___nl__im__19);
#line 1381
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__18));
#line 1381
c_rt_lib0clear(&___nl__im__14);
#line 1381
c_rt_lib0clear(&___nl__im__18);
#line 1381
c_rt_lib0move(&___nl__im__20,___get_global_string_const(331));
#line 1381
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__20));
#line 1381
c_rt_lib0clear(&___nl__im__13);
#line 1381
c_rt_lib0clear(&___nl__im__20);
#line 1382
c_rt_lib0move(&___nl__im__22,___get_global_string_const(467));
#line 1382
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1382
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__25));
#line 1382
c_rt_lib0clear(&___nl__im__25);
#line 1382
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__12));
#line 1382
c_rt_lib0clear(&___nl__im__24);
#line 1382
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_fun_lib(___nl__im__22, ___nl__im__23));
#line 1382
c_rt_lib0clear(&___nl__im__22);
#line 1382
c_rt_lib0clear(&___nl__im__23);
#line 1382
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__21));
#line 1382
c_rt_lib0clear(&___nl__im__21);
#line 1383
goto label_53;
#line 1383
label_53:
;
#line 1383
//clear ___nl__bool__2;
#line 1383
c_rt_lib0clear(&___nl__im__12);
#line 1383
c_rt_lib0clear(&___nl__im__1);
#line 1383
return NULL;

}

ImmT  generator_c_priv0print_hash_is_end(generator_c0state_t0type* ___ref___rec__0,nlasm0hash_dest_iter_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
#line 1387
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(142)));
#line 1387
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 1387
c_rt_lib0clear(&___nl__im__4);
#line 1387
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(145));
#line 1387
c_rt_lib0clear(&___nl__im__3);
#line 1387
___nl__bool__2 = !___nl__bool__2;
#line 1387
if(___nl__bool__2){ goto label_23;}
#line 1389
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1390
c_rt_lib0move(&___nl__im__7,___get_global_string_const(286));
#line 1391
c_rt_lib0move(&___nl__im__8,___get_global_string_const(288));
#line 1392
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1392
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__11));
#line 1392
c_rt_lib0clear(&___nl__im__11);
#line 1392
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1392
c_rt_lib0clear(&___nl__im__10);
#line 1392
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__6, ___get_global_string_const(111), ___nl__im__7, ___get_global_string_const(226), ___nl__im__8, ___get_global_string_const(113), ___nl__im__9));
#line 1392
c_rt_lib0clear(&___nl__im__6);
#line 1392
c_rt_lib0clear(&___nl__im__7);
#line 1392
c_rt_lib0clear(&___nl__im__8);
#line 1392
c_rt_lib0clear(&___nl__im__9);
#line 1392
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1392
c_rt_lib0clear(&___nl__im__5);
#line 1394
goto label_37;
#line 1394
label_23:
;
#line 1395
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(378)));
#line 1395
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__14));
#line 1395
c_rt_lib0clear(&___nl__im__14);
#line 1395
c_rt_lib0move(&___nl__im__15,___get_global_string_const(623));
#line 1395
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1395
c_rt_lib0clear(&___nl__im__13);
#line 1395
c_rt_lib0clear(&___nl__im__15);
#line 1396
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1396
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__17, ___nl__im__12));
#line 1396
c_rt_lib0clear(&___nl__im__17);
#line 1396
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__16));
#line 1396
c_rt_lib0clear(&___nl__im__16);
#line 1397
goto label_37;
#line 1397
label_37:
;
#line 1397
//clear ___nl__bool__2;
#line 1397
c_rt_lib0clear(&___nl__im__12);
#line 1397
c_rt_lib0clear(&___nl__im__1);
#line 1397
return NULL;

}

ImmT  generator_c_priv0print_get_val(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
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
#line 1402
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(367)));
#line 1402
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(241));
#line 1402
if(___nl__bool__6){ goto label_8;}
#line 1405
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(434));
#line 1405
if(___nl__bool__6){ goto label_23;}
#line 1405
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 1405
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 1405
nl_die_arg(___nl__im__7);
#line 1402
label_8:
;
#line 1403
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(110)));
#line 1404
c_rt_lib0move(&___nl__im__10,___get_global_string_const(586));
#line 1404
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1404
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__3));
#line 1404
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1404
c_rt_lib0clear(&___nl__im__12);
#line 1404
c_rt_lib0clear(&___nl__im__13);
#line 1404
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__11));
#line 1404
c_rt_lib0clear(&___nl__im__10);
#line 1404
c_rt_lib0clear(&___nl__im__11);
#line 1404
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_value_from_im(___nl__im__8, ___nl__im__9));
#line 1404
c_rt_lib0clear(&___nl__im__8);
#line 1404
c_rt_lib0clear(&___nl__im__9);
#line 1405
goto label_71;
#line 1405
label_23:
;
#line 1406
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1406
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(569));
#line 1406
c_rt_lib0clear(&___nl__im__15);
#line 1406
___nl__bool__14 = !___nl__bool__14;
#line 1406
if(___nl__bool__14){ goto label_39;}
#line 1407
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1407
c_rt_lib0move(&___nl__im__18,___get_global_string_const(588));
#line 1407
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 1407
c_rt_lib0clear(&___nl__im__17);
#line 1407
c_rt_lib0clear(&___nl__im__18);
#line 1407
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_field_name(___nl__im__3));
#line 1407
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 1407
c_rt_lib0clear(&___nl__im__16);
#line 1407
c_rt_lib0clear(&___nl__im__19);
#line 1408
goto label_67;
#line 1408
label_39:
;
#line 1408
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1408
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(145));
#line 1408
c_rt_lib0clear(&___nl__im__20);
#line 1408
___nl__bool__14 = !___nl__bool__14;
#line 1408
if(___nl__bool__14){ goto label_63;}
#line 1409
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(110)));
#line 1410
c_rt_lib0move(&___nl__im__23,___get_global_string_const(586));
#line 1410
c_rt_lib0move(&___nl__im__26,___get_global_string_const(389));
#line 1410
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1410
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 1410
c_rt_lib0clear(&___nl__im__26);
#line 1410
c_rt_lib0clear(&___nl__im__27);
#line 1410
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__3));
#line 1410
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__28));
#line 1410
c_rt_lib0clear(&___nl__im__25);
#line 1410
c_rt_lib0clear(&___nl__im__28);
#line 1410
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_fun_lib(___nl__im__23, ___nl__im__24));
#line 1410
c_rt_lib0clear(&___nl__im__23);
#line 1410
c_rt_lib0clear(&___nl__im__24);
#line 1410
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_value_from_im(___nl__im__21, ___nl__im__22));
#line 1410
c_rt_lib0clear(&___nl__im__21);
#line 1410
c_rt_lib0clear(&___nl__im__22);
#line 1411
goto label_67;
#line 1411
label_63:
;
#line 1412
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1412
nl_die_arg(___nl__im__29);
#line 1413
goto label_67;
#line 1413
label_67:
;
#line 1413
//clear ___nl__bool__14;
#line 1413
c_rt_lib0clear(&___nl__im__29);
#line 1414
goto label_71;
#line 1414
label_71:
;
#line 1415
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__2, ___nl__im__4));
#line 1415
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__30));
#line 1415
c_rt_lib0clear(&___nl__im__30);
#line 1415
c_rt_lib0clear(&___nl__im__1);
#line 1415
c_rt_lib0clear(&___nl__im__2);
#line 1415
c_rt_lib0clear(&___nl__im__3);
#line 1415
c_rt_lib0clear(&___nl__im__4);
#line 1415
c_rt_lib0clear(&___nl__im__5);
#line 1415
//clear ___nl__bool__6;
#line 1415
c_rt_lib0clear(&___nl__im__7);
#line 1415
return NULL;

}

ImmT  generator_c_priv0get_assign(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
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
#line 1419
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__1));
#line 1419
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 1419
c_rt_lib0clear(&___nl__im__4);
#line 1419
___nl__bool__3 = !___nl__bool__3;
#line 1419
if(___nl__bool__3){ goto label_32;}
#line 1420
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1420
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(145));
#line 1420
c_rt_lib0clear(&___nl__im__6);
#line 1420
___nl__bool__5 = !___nl__bool__5;
#line 1420
if(___nl__bool__5){ goto label_21;}
#line 1421
c_rt_lib0move(&___nl__im__8,___get_global_string_const(188));
#line 1421
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__2));
#line 1421
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_fun_lib(___nl__im__8, ___nl__im__9));
#line 1421
c_rt_lib0clear(&___nl__im__8);
#line 1421
c_rt_lib0clear(&___nl__im__9);
#line 1421
c_rt_lib0clear(&___nl__im__1);
#line 1421
c_rt_lib0clear(&___nl__im__2);
#line 1421
//clear ___nl__bool__3;
#line 1421
//clear ___nl__bool__5;
#line 1421
return ___nl__im__7;
#line 1422
goto label_28;
#line 1422
label_21:
;
#line 1423
c_rt_lib0clear(&___nl__im__1);
#line 1423
//clear ___nl__bool__3;
#line 1423
//clear ___nl__bool__5;
#line 1423
c_rt_lib0clear(&___nl__im__7);
#line 1423
return ___nl__im__2;
#line 1424
goto label_28;
#line 1424
label_28:
;
#line 1424
//clear ___nl__bool__5;
#line 1424
c_rt_lib0clear(&___nl__im__7);
#line 1425
goto label_239;
#line 1425
label_32:
;
#line 1426
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1426
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(145));
#line 1426
if(___nl__bool__11){ goto label_53;}
#line 1428
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(419));
#line 1428
if(___nl__bool__11){ goto label_69;}
#line 1430
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(420));
#line 1430
if(___nl__bool__11){ goto label_86;}
#line 1432
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(33));
#line 1432
if(___nl__bool__11){ goto label_104;}
#line 1434
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(569));
#line 1434
if(___nl__bool__11){ goto label_123;}
#line 1436
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(141));
#line 1436
if(___nl__bool__11){ goto label_147;}
#line 1438
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(573));
#line 1438
if(___nl__bool__11){ goto label_174;}
#line 1440
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(142));
#line 1440
if(___nl__bool__11){ goto label_204;}
#line 1440
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 1440
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 1440
nl_die_arg(___nl__im__12);
#line 1426
label_53:
;
#line 1427
c_rt_lib0move(&___nl__im__14,___get_global_string_const(258));
#line 1427
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__1));
#line 1427
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__2));
#line 1427
c_rt_lib0clear(&___nl__im__16);
#line 1427
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__14, ___nl__im__15));
#line 1427
c_rt_lib0clear(&___nl__im__14);
#line 1427
c_rt_lib0clear(&___nl__im__15);
#line 1427
c_rt_lib0clear(&___nl__im__1);
#line 1427
c_rt_lib0clear(&___nl__im__2);
#line 1427
//clear ___nl__bool__3;
#line 1427
c_rt_lib0clear(&___nl__im__10);
#line 1427
//clear ___nl__bool__11;
#line 1427
c_rt_lib0clear(&___nl__im__12);
#line 1427
return ___nl__im__13;
#line 1428
goto label_237;
#line 1428
label_69:
;
#line 1429
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1429
c_rt_lib0move(&___nl__im__20,___get_global_string_const(514));
#line 1429
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 1429
c_rt_lib0clear(&___nl__im__19);
#line 1429
c_rt_lib0clear(&___nl__im__20);
#line 1429
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__2));
#line 1429
c_rt_lib0clear(&___nl__im__18);
#line 1429
c_rt_lib0clear(&___nl__im__1);
#line 1429
c_rt_lib0clear(&___nl__im__2);
#line 1429
//clear ___nl__bool__3;
#line 1429
c_rt_lib0clear(&___nl__im__10);
#line 1429
//clear ___nl__bool__11;
#line 1429
c_rt_lib0clear(&___nl__im__12);
#line 1429
c_rt_lib0clear(&___nl__im__13);
#line 1429
return ___nl__im__17;
#line 1430
goto label_237;
#line 1430
label_86:
;
#line 1431
c_rt_lib0move(&___nl__im__22,___get_global_string_const(258));
#line 1431
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__1));
#line 1431
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__2));
#line 1431
c_rt_lib0clear(&___nl__im__24);
#line 1431
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_fun_lib(___nl__im__22, ___nl__im__23));
#line 1431
c_rt_lib0clear(&___nl__im__22);
#line 1431
c_rt_lib0clear(&___nl__im__23);
#line 1431
c_rt_lib0clear(&___nl__im__1);
#line 1431
c_rt_lib0clear(&___nl__im__2);
#line 1431
//clear ___nl__bool__3;
#line 1431
c_rt_lib0clear(&___nl__im__10);
#line 1431
//clear ___nl__bool__11;
#line 1431
c_rt_lib0clear(&___nl__im__12);
#line 1431
c_rt_lib0clear(&___nl__im__13);
#line 1431
c_rt_lib0clear(&___nl__im__17);
#line 1431
return ___nl__im__21;
#line 1432
goto label_237;
#line 1432
label_104:
;
#line 1433
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1433
c_rt_lib0move(&___nl__im__28,___get_global_string_const(514));
#line 1433
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 1433
c_rt_lib0clear(&___nl__im__27);
#line 1433
c_rt_lib0clear(&___nl__im__28);
#line 1433
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__2));
#line 1433
c_rt_lib0clear(&___nl__im__26);
#line 1433
c_rt_lib0clear(&___nl__im__1);
#line 1433
c_rt_lib0clear(&___nl__im__2);
#line 1433
//clear ___nl__bool__3;
#line 1433
c_rt_lib0clear(&___nl__im__10);
#line 1433
//clear ___nl__bool__11;
#line 1433
c_rt_lib0clear(&___nl__im__12);
#line 1433
c_rt_lib0clear(&___nl__im__13);
#line 1433
c_rt_lib0clear(&___nl__im__17);
#line 1433
c_rt_lib0clear(&___nl__im__21);
#line 1433
return ___nl__im__25;
#line 1434
goto label_237;
#line 1434
label_123:
;
#line 1434
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(569)));
#line 1434
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1435
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1435
c_rt_lib0move(&___nl__im__34,___get_global_string_const(514));
#line 1435
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 1435
c_rt_lib0clear(&___nl__im__33);
#line 1435
c_rt_lib0clear(&___nl__im__34);
#line 1435
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__2));
#line 1435
c_rt_lib0clear(&___nl__im__32);
#line 1435
c_rt_lib0clear(&___nl__im__1);
#line 1435
c_rt_lib0clear(&___nl__im__2);
#line 1435
//clear ___nl__bool__3;
#line 1435
c_rt_lib0clear(&___nl__im__10);
#line 1435
//clear ___nl__bool__11;
#line 1435
c_rt_lib0clear(&___nl__im__12);
#line 1435
c_rt_lib0clear(&___nl__im__13);
#line 1435
c_rt_lib0clear(&___nl__im__17);
#line 1435
c_rt_lib0clear(&___nl__im__21);
#line 1435
c_rt_lib0clear(&___nl__im__25);
#line 1435
c_rt_lib0clear(&___nl__im__29);
#line 1435
c_rt_lib0clear(&___nl__im__30);
#line 1435
return ___nl__im__31;
#line 1436
goto label_237;
#line 1436
label_147:
;
#line 1436
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(141)));
#line 1436
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1437
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1437
c_rt_lib0move(&___nl__im__40,___get_global_string_const(514));
#line 1437
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__40));
#line 1437
c_rt_lib0clear(&___nl__im__39);
#line 1437
c_rt_lib0clear(&___nl__im__40);
#line 1437
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__2));
#line 1437
c_rt_lib0clear(&___nl__im__38);
#line 1437
c_rt_lib0clear(&___nl__im__1);
#line 1437
c_rt_lib0clear(&___nl__im__2);
#line 1437
//clear ___nl__bool__3;
#line 1437
c_rt_lib0clear(&___nl__im__10);
#line 1437
//clear ___nl__bool__11;
#line 1437
c_rt_lib0clear(&___nl__im__12);
#line 1437
c_rt_lib0clear(&___nl__im__13);
#line 1437
c_rt_lib0clear(&___nl__im__17);
#line 1437
c_rt_lib0clear(&___nl__im__21);
#line 1437
c_rt_lib0clear(&___nl__im__25);
#line 1437
c_rt_lib0clear(&___nl__im__29);
#line 1437
c_rt_lib0clear(&___nl__im__30);
#line 1437
c_rt_lib0clear(&___nl__im__31);
#line 1437
c_rt_lib0clear(&___nl__im__35);
#line 1437
c_rt_lib0clear(&___nl__im__36);
#line 1437
return ___nl__im__37;
#line 1438
goto label_237;
#line 1438
label_174:
;
#line 1438
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(573)));
#line 1438
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 1439
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1439
c_rt_lib0move(&___nl__im__46,___get_global_string_const(514));
#line 1439
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__46));
#line 1439
c_rt_lib0clear(&___nl__im__45);
#line 1439
c_rt_lib0clear(&___nl__im__46);
#line 1439
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__2));
#line 1439
c_rt_lib0clear(&___nl__im__44);
#line 1439
c_rt_lib0clear(&___nl__im__1);
#line 1439
c_rt_lib0clear(&___nl__im__2);
#line 1439
//clear ___nl__bool__3;
#line 1439
c_rt_lib0clear(&___nl__im__10);
#line 1439
//clear ___nl__bool__11;
#line 1439
c_rt_lib0clear(&___nl__im__12);
#line 1439
c_rt_lib0clear(&___nl__im__13);
#line 1439
c_rt_lib0clear(&___nl__im__17);
#line 1439
c_rt_lib0clear(&___nl__im__21);
#line 1439
c_rt_lib0clear(&___nl__im__25);
#line 1439
c_rt_lib0clear(&___nl__im__29);
#line 1439
c_rt_lib0clear(&___nl__im__30);
#line 1439
c_rt_lib0clear(&___nl__im__31);
#line 1439
c_rt_lib0clear(&___nl__im__35);
#line 1439
c_rt_lib0clear(&___nl__im__36);
#line 1439
c_rt_lib0clear(&___nl__im__37);
#line 1439
c_rt_lib0clear(&___nl__im__41);
#line 1439
c_rt_lib0clear(&___nl__im__42);
#line 1439
return ___nl__im__43;
#line 1440
goto label_237;
#line 1440
label_204:
;
#line 1440
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(142)));
#line 1440
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 1441
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1441
c_rt_lib0move(&___nl__im__52,___get_global_string_const(514));
#line 1441
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 1441
c_rt_lib0clear(&___nl__im__51);
#line 1441
c_rt_lib0clear(&___nl__im__52);
#line 1441
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__2));
#line 1441
c_rt_lib0clear(&___nl__im__50);
#line 1441
c_rt_lib0clear(&___nl__im__1);
#line 1441
c_rt_lib0clear(&___nl__im__2);
#line 1441
//clear ___nl__bool__3;
#line 1441
c_rt_lib0clear(&___nl__im__10);
#line 1441
//clear ___nl__bool__11;
#line 1441
c_rt_lib0clear(&___nl__im__12);
#line 1441
c_rt_lib0clear(&___nl__im__13);
#line 1441
c_rt_lib0clear(&___nl__im__17);
#line 1441
c_rt_lib0clear(&___nl__im__21);
#line 1441
c_rt_lib0clear(&___nl__im__25);
#line 1441
c_rt_lib0clear(&___nl__im__29);
#line 1441
c_rt_lib0clear(&___nl__im__30);
#line 1441
c_rt_lib0clear(&___nl__im__31);
#line 1441
c_rt_lib0clear(&___nl__im__35);
#line 1441
c_rt_lib0clear(&___nl__im__36);
#line 1441
c_rt_lib0clear(&___nl__im__37);
#line 1441
c_rt_lib0clear(&___nl__im__41);
#line 1441
c_rt_lib0clear(&___nl__im__42);
#line 1441
c_rt_lib0clear(&___nl__im__43);
#line 1441
c_rt_lib0clear(&___nl__im__47);
#line 1441
c_rt_lib0clear(&___nl__im__48);
#line 1441
return ___nl__im__49;
#line 1442
goto label_237;
#line 1442
label_237:
;
#line 1443
goto label_239;
#line 1443
label_239:
;
#line 1443
//clear ___nl__bool__3;
#line 1443
c_rt_lib0clear(&___nl__im__10);
#line 1443
//clear ___nl__bool__11;
#line 1443
c_rt_lib0clear(&___nl__im__12);
#line 1443
c_rt_lib0clear(&___nl__im__13);
#line 1443
c_rt_lib0clear(&___nl__im__17);
#line 1443
c_rt_lib0clear(&___nl__im__21);
#line 1443
c_rt_lib0clear(&___nl__im__25);
#line 1443
c_rt_lib0clear(&___nl__im__29);
#line 1443
c_rt_lib0clear(&___nl__im__30);
#line 1443
c_rt_lib0clear(&___nl__im__31);
#line 1443
c_rt_lib0clear(&___nl__im__35);
#line 1443
c_rt_lib0clear(&___nl__im__36);
#line 1443
c_rt_lib0clear(&___nl__im__37);
#line 1443
c_rt_lib0clear(&___nl__im__41);
#line 1443
c_rt_lib0clear(&___nl__im__42);
#line 1443
c_rt_lib0clear(&___nl__im__43);
#line 1443
c_rt_lib0clear(&___nl__im__47);
#line 1443
c_rt_lib0clear(&___nl__im__48);
#line 1443
c_rt_lib0clear(&___nl__im__49);
return NULL;

}

ImmT  generator_c_priv0generate_call(generator_c0state_t0type* ___ref___rec__0,nlasm0call_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
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
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
#line 1447
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(111)));
#line 1447
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(226)));
#line 1447
___nl__im_ptr__7 = &((*___ref___rec__0).mod_name0field);
#line 1447
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1447
___nl__im_ptr__7 = NULL;
#line 1447
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_fun_name(___nl__im__4, ___nl__im__5, ___nl__im__6));
#line 1447
c_rt_lib0clear(&___nl__im__4);
#line 1447
c_rt_lib0clear(&___nl__im__5);
#line 1447
c_rt_lib0clear(&___nl__im__6);
#line 1447
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 1447
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 1447
c_rt_lib0clear(&___nl__im__3);
#line 1447
c_rt_lib0clear(&___nl__im__8);
#line 1448
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(113)));
#line 1448
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 1448
c_rt_lib0clear(&___nl__im__10);
#line 1448
___nl__int__11 = 0;
#line 1448
___nl__int__12 = 1;
#line 1448
label_18:
;
#line 1448
___nl__bool__13 = ___nl__int__11 >= ___nl__int__9;
#line 1448
if(___nl__bool__13){ goto label_67;}
#line 1449
___nl__int__15 = 0;
#line 1449
___nl__bool__14 = ___nl__int__15 == ___nl__int__11;
#line 1449
//clear ___nl__int__15;
#line 1449
___nl__bool__14 = !___nl__bool__14;
#line 1449
___nl__bool__14 = !___nl__bool__14;
#line 1449
if(___nl__bool__14){ goto label_31;}
#line 1449
c_rt_lib0move(&___nl__im__16,___get_global_string_const(343));
#line 1449
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 1449
c_rt_lib0clear(&___nl__im__16);
#line 1449
goto label_31;
#line 1449
label_31:
;
#line 1449
//clear ___nl__bool__14;
#line 1450
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(113)));
#line 1450
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__11));
#line 1450
c_rt_lib0clear(&___nl__im__18);
#line 1450
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(245));
#line 1450
if(___nl__bool__19){ goto label_43;}
#line 1452
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(39));
#line 1452
if(___nl__bool__19){ goto label_50;}
#line 1452
c_rt_lib0move(&___nl__im__20,___get_global_string_const(15));
#line 1452
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(2, ___nl__im__20, ___nl__im__17));
#line 1452
nl_die_arg(___nl__im__20);
#line 1450
label_43:
;
#line 1450
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(245)));
#line 1450
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 1451
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__21));
#line 1451
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 1451
c_rt_lib0clear(&___nl__im__23);
#line 1452
goto label_57;
#line 1452
label_50:
;
#line 1452
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(39)));
#line 1452
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1453
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__24));
#line 1453
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 1453
c_rt_lib0clear(&___nl__im__26);
#line 1454
goto label_57;
#line 1454
label_57:
;
#line 1454
c_rt_lib0clear(&___nl__im__17);
#line 1454
//clear ___nl__bool__19;
#line 1454
c_rt_lib0clear(&___nl__im__20);
#line 1454
c_rt_lib0clear(&___nl__im__21);
#line 1454
c_rt_lib0clear(&___nl__im__22);
#line 1454
c_rt_lib0clear(&___nl__im__24);
#line 1454
c_rt_lib0clear(&___nl__im__25);
#line 1455
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1455
goto label_18;
#line 1455
label_67:
;
#line 1456
c_rt_lib0move(&___nl__im__27,___get_global_string_const(336));
#line 1456
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 1456
c_rt_lib0clear(&___nl__im__27);
#line 1457
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1457
c_rt_lib0move(&___nl__im__30, nlasm0is_empty(___nl__im__29));
#line 1457
___nl__bool__28 = c_rt_lib0check_true_native(___nl__im__30);
#line 1457
c_rt_lib0clear(&___nl__im__29);
#line 1457
c_rt_lib0clear(&___nl__im__30);
#line 1457
___nl__bool__28 = !___nl__bool__28;
#line 1457
if(___nl__bool__28){ goto label_84;}
#line 1458
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1458
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__32, ___nl__im__2));
#line 1458
c_rt_lib0clear(&___nl__im__32);
#line 1458
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__31));
#line 1458
c_rt_lib0clear(&___nl__im__31);
#line 1459
goto label_91;
#line 1459
label_84:
;
#line 1460
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(244)));
#line 1460
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__34, ___nl__im__2));
#line 1460
c_rt_lib0clear(&___nl__im__34);
#line 1460
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__33));
#line 1460
c_rt_lib0clear(&___nl__im__33);
#line 1461
goto label_91;
#line 1461
label_91:
;
#line 1461
//clear ___nl__bool__28;
#line 1461
c_rt_lib0clear(&___nl__im__1);
#line 1461
c_rt_lib0clear(&___nl__im__2);
#line 1461
//clear ___nl__int__9;
#line 1461
//clear ___nl__int__11;
#line 1461
//clear ___nl__int__12;
#line 1461
//clear ___nl__bool__13;
#line 1461
c_rt_lib0clear(&___nl__im__17);
#line 1461
//clear ___nl__bool__19;
#line 1461
c_rt_lib0clear(&___nl__im__20);
#line 1461
c_rt_lib0clear(&___nl__im__21);
#line 1461
c_rt_lib0clear(&___nl__im__22);
#line 1461
c_rt_lib0clear(&___nl__im__24);
#line 1461
c_rt_lib0clear(&___nl__im__25);
#line 1461
return NULL;

}

ImmT  generator_c_priv0create_int(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 1465
c_rt_lib0move(&___nl__im__5,___get_global_string_const(609));
#line 1465
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_lib_fun(___nl__im__5));
#line 1465
c_rt_lib0clear(&___nl__im__5);
#line 1465
c_rt_lib0move(&___nl__im__6,___get_global_string_const(469));
#line 1465
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 1465
c_rt_lib0clear(&___nl__im__4);
#line 1465
c_rt_lib0clear(&___nl__im__6);
#line 1465
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 1465
c_rt_lib0clear(&___nl__im__3);
#line 1465
c_rt_lib0move(&___nl__im__7,___get_global_string_const(336));
#line 1465
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__7));
#line 1465
c_rt_lib0clear(&___nl__im__2);
#line 1465
c_rt_lib0clear(&___nl__im__7);
#line 1465
c_rt_lib0clear(&___nl__im__0);
#line 1465
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0create_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
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
#line 1469
c_rt_lib0move(&___nl__im__1,___get_global_string_const(121));
#line 1469
c_rt_lib0move(&___nl__im__2,___get_global_string_const(340));
#line 1469
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 1469
c_rt_lib0clear(&___nl__im__1);
#line 1469
c_rt_lib0clear(&___nl__im__2);
#line 1470
c_rt_lib0move(&___nl__im__3, string0lf());
#line 1470
c_rt_lib0move(&___nl__im__4,___get_global_string_const(344));
#line 1470
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 1470
c_rt_lib0clear(&___nl__im__3);
#line 1470
c_rt_lib0clear(&___nl__im__4);
#line 1471
c_rt_lib0move(&___nl__im__5, string0r());
#line 1471
c_rt_lib0move(&___nl__im__6,___get_global_string_const(345));
#line 1471
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 1471
c_rt_lib0clear(&___nl__im__5);
#line 1471
c_rt_lib0clear(&___nl__im__6);
#line 1472
c_rt_lib0move(&___nl__im__7, string0tab());
#line 1472
c_rt_lib0move(&___nl__im__8,___get_global_string_const(624));
#line 1472
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 1472
c_rt_lib0clear(&___nl__im__7);
#line 1472
c_rt_lib0clear(&___nl__im__8);
#line 1473
c_rt_lib0move(&___nl__im__9,___get_global_string_const(296));
#line 1473
c_rt_lib0move(&___nl__im__10,___get_global_string_const(341));
#line 1473
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 1473
c_rt_lib0clear(&___nl__im__9);
#line 1473
c_rt_lib0clear(&___nl__im__10);
#line 1474
c_rt_lib0move(&___nl__im__11,___get_global_string_const(203));
#line 1474
c_rt_lib0move(&___nl__im__12,___get_global_string_const(625));
#line 1474
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 1474
c_rt_lib0clear(&___nl__im__11);
#line 1474
c_rt_lib0clear(&___nl__im__12);
#line 1475
c_rt_lib0move(&___nl__im__17,___get_global_string_const(626));
#line 1475
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_lib_fun(___nl__im__17));
#line 1475
c_rt_lib0clear(&___nl__im__17);
#line 1475
c_rt_lib0move(&___nl__im__18,___get_global_string_const(627));
#line 1475
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__18));
#line 1475
c_rt_lib0clear(&___nl__im__16);
#line 1475
c_rt_lib0clear(&___nl__im__18);
#line 1475
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__0));
#line 1475
c_rt_lib0clear(&___nl__im__15);
#line 1475
c_rt_lib0move(&___nl__im__19,___get_global_string_const(628));
#line 1475
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 1475
c_rt_lib0clear(&___nl__im__14);
#line 1475
c_rt_lib0clear(&___nl__im__19);
#line 1475
c_rt_lib0clear(&___nl__im__0);
#line 1475
return ___nl__im__13;
return NULL;

}

ImmT  generator_c_priv0create_int_to_memory(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
#line 1479
c_rt_lib0move(&___nl__im__8,___get_global_string_const(629));
#line 1479
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_lib_fun(___nl__im__8));
#line 1479
c_rt_lib0clear(&___nl__im__8);
#line 1479
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 1479
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 1479
c_rt_lib0clear(&___nl__im__7);
#line 1479
c_rt_lib0clear(&___nl__im__9);
#line 1479
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__0));
#line 1479
c_rt_lib0clear(&___nl__im__6);
#line 1479
c_rt_lib0move(&___nl__im__10,___get_global_string_const(328));
#line 1479
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 1479
c_rt_lib0clear(&___nl__im__5);
#line 1479
c_rt_lib0clear(&___nl__im__10);
#line 1479
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 1479
c_rt_lib0clear(&___nl__im__4);
#line 1479
c_rt_lib0move(&___nl__im__11,___get_global_string_const(336));
#line 1479
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__11));
#line 1479
c_rt_lib0clear(&___nl__im__3);
#line 1479
c_rt_lib0clear(&___nl__im__11);
#line 1479
c_rt_lib0clear(&___nl__im__0);
#line 1479
c_rt_lib0clear(&___nl__im__1);
#line 1479
return ___nl__im__2;
return NULL;

}

ImmT  generator_c_priv0create_string_to_memory(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
INT  ___nl__int__17 = 0;
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
#line 1483
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1483
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 1483
c_rt_lib0clear(&___nl__im__3);
#line 1484
c_rt_lib0move(&___nl__im__4,___get_global_string_const(121));
#line 1484
c_rt_lib0move(&___nl__im__5,___get_global_string_const(340));
#line 1484
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__4, ___nl__im__5));
#line 1484
c_rt_lib0clear(&___nl__im__4);
#line 1484
c_rt_lib0clear(&___nl__im__5);
#line 1485
c_rt_lib0move(&___nl__im__6, string0lf());
#line 1485
c_rt_lib0move(&___nl__im__7,___get_global_string_const(344));
#line 1485
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__6, ___nl__im__7));
#line 1485
c_rt_lib0clear(&___nl__im__6);
#line 1485
c_rt_lib0clear(&___nl__im__7);
#line 1486
c_rt_lib0move(&___nl__im__8, string0r());
#line 1486
c_rt_lib0move(&___nl__im__9,___get_global_string_const(345));
#line 1486
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__8, ___nl__im__9));
#line 1486
c_rt_lib0clear(&___nl__im__8);
#line 1486
c_rt_lib0clear(&___nl__im__9);
#line 1487
c_rt_lib0move(&___nl__im__10, string0tab());
#line 1487
c_rt_lib0move(&___nl__im__11,___get_global_string_const(624));
#line 1487
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__10, ___nl__im__11));
#line 1487
c_rt_lib0clear(&___nl__im__10);
#line 1487
c_rt_lib0clear(&___nl__im__11);
#line 1488
c_rt_lib0move(&___nl__im__12,___get_global_string_const(296));
#line 1488
c_rt_lib0move(&___nl__im__13,___get_global_string_const(341));
#line 1488
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__12, ___nl__im__13));
#line 1488
c_rt_lib0clear(&___nl__im__12);
#line 1488
c_rt_lib0clear(&___nl__im__13);
#line 1489
c_rt_lib0move(&___nl__im__14,___get_global_string_const(203));
#line 1489
c_rt_lib0move(&___nl__im__15,___get_global_string_const(625));
#line 1489
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__14, ___nl__im__15));
#line 1489
c_rt_lib0clear(&___nl__im__14);
#line 1489
c_rt_lib0clear(&___nl__im__15);
#line 1490
___nl__int__17 = 0;
#line 1490
c_rt_lib0move(&___nl__im__16, string0chr(___nl__int__17));
#line 1490
//clear ___nl__int__17;
#line 1490
c_rt_lib0move(&___nl__im__18,___get_global_string_const(630));
#line 1490
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__16, ___nl__im__18));
#line 1490
c_rt_lib0clear(&___nl__im__16);
#line 1490
c_rt_lib0clear(&___nl__im__18);
#line 1491
c_rt_lib0move(&___nl__im__25,___get_global_string_const(631));
#line 1491
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_lib_fun(___nl__im__25));
#line 1491
c_rt_lib0clear(&___nl__im__25);
#line 1491
c_rt_lib0move(&___nl__im__26,___get_global_string_const(627));
#line 1491
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__26));
#line 1491
c_rt_lib0clear(&___nl__im__24);
#line 1491
c_rt_lib0clear(&___nl__im__26);
#line 1491
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__2));
#line 1491
c_rt_lib0clear(&___nl__im__23);
#line 1491
c_rt_lib0move(&___nl__im__27,___get_global_string_const(632));
#line 1491
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__27));
#line 1491
c_rt_lib0clear(&___nl__im__22);
#line 1491
c_rt_lib0clear(&___nl__im__27);
#line 1491
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__1));
#line 1491
c_rt_lib0clear(&___nl__im__21);
#line 1491
c_rt_lib0move(&___nl__im__28,___get_global_string_const(336));
#line 1491
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__28));
#line 1491
c_rt_lib0clear(&___nl__im__20);
#line 1491
c_rt_lib0clear(&___nl__im__28);
#line 1491
c_rt_lib0clear(&___nl__im__0);
#line 1491
c_rt_lib0clear(&___nl__im__1);
#line 1491
c_rt_lib0clear(&___nl__im__2);
#line 1491
return ___nl__im__19;
return NULL;

}

ImmT  generator_c_priv0get_type_to_c(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
ImmT  ___nl__im__33 = NULL;
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
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
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
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
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
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
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
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
#line 1495
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1495
if(___nl__bool__2){ goto label_33;}
#line 1497
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1497
if(___nl__bool__2){ goto label_41;}
#line 1499
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1499
if(___nl__bool__2){ goto label_54;}
#line 1507
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1507
if(___nl__bool__2){ goto label_84;}
#line 1509
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1509
if(___nl__bool__2){ goto label_103;}
#line 1518
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1518
if(___nl__bool__2){ goto label_147;}
#line 1520
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1520
if(___nl__bool__2){ goto label_172;}
#line 1528
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1528
if(___nl__bool__2){ goto label_252;}
#line 1530
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1530
if(___nl__bool__2){ goto label_287;}
#line 1532
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1532
if(___nl__bool__2){ goto label_321;}
#line 1534
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1534
if(___nl__bool__2){ goto label_356;}
#line 1536
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1536
if(___nl__bool__2){ goto label_392;}
#line 1538
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1538
if(___nl__bool__2){ goto label_429;}
#line 1540
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1540
if(___nl__bool__2){ goto label_471;}
#line 1556
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1556
if(___nl__bool__2){ goto label_599;}
#line 1556
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1556
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1556
nl_die_arg(___nl__im__3);
#line 1495
label_33:
;
#line 1496
c_rt_lib0move(&___nl__im__4, generator_c_priv0im_t());
#line 1496
c_rt_lib0clear(&___nl__im__0);
#line 1496
c_rt_lib0clear(&___nl__im__1);
#line 1496
//clear ___nl__bool__2;
#line 1496
c_rt_lib0clear(&___nl__im__3);
#line 1496
return ___nl__im__4;
#line 1497
goto label_651;
#line 1497
label_41:
;
#line 1497
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1497
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 1498
c_rt_lib0move(&___nl__im__7, generator_c_priv0im_t());
#line 1498
c_rt_lib0clear(&___nl__im__0);
#line 1498
c_rt_lib0clear(&___nl__im__1);
#line 1498
//clear ___nl__bool__2;
#line 1498
c_rt_lib0clear(&___nl__im__3);
#line 1498
c_rt_lib0clear(&___nl__im__4);
#line 1498
c_rt_lib0clear(&___nl__im__5);
#line 1498
c_rt_lib0clear(&___nl__im__6);
#line 1498
return ___nl__im__7;
#line 1499
goto label_651;
#line 1499
label_54:
;
#line 1499
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1499
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1500
c_rt_lib0move(&___nl__im__14,___get_global_string_const(633));
#line 1500
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1500
c_rt_lib0clear(&___nl__im__14);
#line 1500
c_rt_lib0move(&___nl__im__15,___get_global_string_const(634));
#line 1500
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1500
c_rt_lib0clear(&___nl__im__13);
#line 1500
c_rt_lib0clear(&___nl__im__15);
#line 1504
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_type_name(___nl__im__8));
#line 1504
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 1504
c_rt_lib0clear(&___nl__im__12);
#line 1504
c_rt_lib0clear(&___nl__im__16);
#line 1504
c_rt_lib0move(&___nl__im__17,___get_global_string_const(635));
#line 1504
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__17));
#line 1504
c_rt_lib0clear(&___nl__im__11);
#line 1504
c_rt_lib0clear(&___nl__im__17);
#line 1506
c_rt_lib0clear(&___nl__im__0);
#line 1506
c_rt_lib0clear(&___nl__im__1);
#line 1506
//clear ___nl__bool__2;
#line 1506
c_rt_lib0clear(&___nl__im__3);
#line 1506
c_rt_lib0clear(&___nl__im__4);
#line 1506
c_rt_lib0clear(&___nl__im__5);
#line 1506
c_rt_lib0clear(&___nl__im__6);
#line 1506
c_rt_lib0clear(&___nl__im__7);
#line 1506
c_rt_lib0clear(&___nl__im__8);
#line 1506
c_rt_lib0clear(&___nl__im__9);
#line 1506
return ___nl__im__10;
#line 1507
goto label_651;
#line 1507
label_84:
;
#line 1507
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1507
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1508
c_rt_lib0move(&___nl__im__20, generator_c_priv0im_t());
#line 1508
c_rt_lib0clear(&___nl__im__0);
#line 1508
c_rt_lib0clear(&___nl__im__1);
#line 1508
//clear ___nl__bool__2;
#line 1508
c_rt_lib0clear(&___nl__im__3);
#line 1508
c_rt_lib0clear(&___nl__im__4);
#line 1508
c_rt_lib0clear(&___nl__im__5);
#line 1508
c_rt_lib0clear(&___nl__im__6);
#line 1508
c_rt_lib0clear(&___nl__im__7);
#line 1508
c_rt_lib0clear(&___nl__im__8);
#line 1508
c_rt_lib0clear(&___nl__im__9);
#line 1508
c_rt_lib0clear(&___nl__im__10);
#line 1508
c_rt_lib0clear(&___nl__im__18);
#line 1508
c_rt_lib0clear(&___nl__im__19);
#line 1508
return ___nl__im__20;
#line 1509
goto label_651;
#line 1509
label_103:
;
#line 1509
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1509
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 1510
c_rt_lib0move(&___nl__im__29,___get_global_string_const(633));
#line 1510
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__1));
#line 1510
c_rt_lib0clear(&___nl__im__29);
#line 1510
c_rt_lib0move(&___nl__im__30,___get_global_string_const(634));
#line 1510
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__30));
#line 1510
c_rt_lib0clear(&___nl__im__28);
#line 1510
c_rt_lib0clear(&___nl__im__30);
#line 1514
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_type_name(___nl__im__21));
#line 1514
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 1514
c_rt_lib0clear(&___nl__im__27);
#line 1514
c_rt_lib0clear(&___nl__im__31);
#line 1514
c_rt_lib0move(&___nl__im__32,___get_global_string_const(636));
#line 1514
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__32));
#line 1514
c_rt_lib0clear(&___nl__im__26);
#line 1514
c_rt_lib0clear(&___nl__im__32);
#line 1515
c_rt_lib0move(&___nl__im__33, generator_c_priv0im_t());
#line 1515
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__33));
#line 1515
c_rt_lib0clear(&___nl__im__25);
#line 1515
c_rt_lib0clear(&___nl__im__33);
#line 1515
c_rt_lib0move(&___nl__im__34,___get_global_string_const(637));
#line 1515
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__34));
#line 1515
c_rt_lib0clear(&___nl__im__24);
#line 1515
c_rt_lib0clear(&___nl__im__34);
#line 1517
c_rt_lib0clear(&___nl__im__0);
#line 1517
c_rt_lib0clear(&___nl__im__1);
#line 1517
//clear ___nl__bool__2;
#line 1517
c_rt_lib0clear(&___nl__im__3);
#line 1517
c_rt_lib0clear(&___nl__im__4);
#line 1517
c_rt_lib0clear(&___nl__im__5);
#line 1517
c_rt_lib0clear(&___nl__im__6);
#line 1517
c_rt_lib0clear(&___nl__im__7);
#line 1517
c_rt_lib0clear(&___nl__im__8);
#line 1517
c_rt_lib0clear(&___nl__im__9);
#line 1517
c_rt_lib0clear(&___nl__im__10);
#line 1517
c_rt_lib0clear(&___nl__im__18);
#line 1517
c_rt_lib0clear(&___nl__im__19);
#line 1517
c_rt_lib0clear(&___nl__im__20);
#line 1517
c_rt_lib0clear(&___nl__im__21);
#line 1517
c_rt_lib0clear(&___nl__im__22);
#line 1517
return ___nl__im__23;
#line 1518
goto label_651;
#line 1518
label_147:
;
#line 1518
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1518
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1519
c_rt_lib0move(&___nl__im__37, generator_c_priv0im_t());
#line 1519
c_rt_lib0clear(&___nl__im__0);
#line 1519
c_rt_lib0clear(&___nl__im__1);
#line 1519
//clear ___nl__bool__2;
#line 1519
c_rt_lib0clear(&___nl__im__3);
#line 1519
c_rt_lib0clear(&___nl__im__4);
#line 1519
c_rt_lib0clear(&___nl__im__5);
#line 1519
c_rt_lib0clear(&___nl__im__6);
#line 1519
c_rt_lib0clear(&___nl__im__7);
#line 1519
c_rt_lib0clear(&___nl__im__8);
#line 1519
c_rt_lib0clear(&___nl__im__9);
#line 1519
c_rt_lib0clear(&___nl__im__10);
#line 1519
c_rt_lib0clear(&___nl__im__18);
#line 1519
c_rt_lib0clear(&___nl__im__19);
#line 1519
c_rt_lib0clear(&___nl__im__20);
#line 1519
c_rt_lib0clear(&___nl__im__21);
#line 1519
c_rt_lib0clear(&___nl__im__22);
#line 1519
c_rt_lib0clear(&___nl__im__23);
#line 1519
c_rt_lib0clear(&___nl__im__35);
#line 1519
c_rt_lib0clear(&___nl__im__36);
#line 1519
return ___nl__im__37;
#line 1520
goto label_651;
#line 1520
label_172:
;
#line 1520
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1520
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 1521
c_rt_lib0move(&___nl__im__43,___get_global_string_const(633));
#line 1521
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__1));
#line 1521
c_rt_lib0clear(&___nl__im__43);
#line 1521
c_rt_lib0move(&___nl__im__44,___get_global_string_const(546));
#line 1521
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__44));
#line 1521
c_rt_lib0clear(&___nl__im__42);
#line 1521
c_rt_lib0clear(&___nl__im__44);
#line 1521
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1521
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__45));
#line 1521
c_rt_lib0clear(&___nl__im__41);
#line 1521
c_rt_lib0clear(&___nl__im__45);
#line 1522
c_rt_lib0move(&___nl__im__47,___get_global_string_const(638));
#line 1522
c_rt_lib0move(&___nl__im__48, string0lf());
#line 1522
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 1522
c_rt_lib0clear(&___nl__im__47);
#line 1522
c_rt_lib0clear(&___nl__im__48);
#line 1522
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__46));
#line 1522
c_rt_lib0clear(&___nl__im__46);
#line 1523
c_rt_lib0move(&___nl__im__52, c_rt_lib0init_iter(___nl__im__38));
#line 1523
label_194:
;
#line 1523
___nl__bool__50 = c_rt_lib0is_end_hash(___nl__im__52);
#line 1523
if(___nl__bool__50){ goto label_220;}
#line 1523
c_rt_lib0move(&___nl__im__49, c_rt_lib0get_key_iter(___nl__im__52));
#line 1523
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value(___nl__im__38, ___nl__im__49));
#line 1524
c_rt_lib0move(&___nl__im__57, generator_c_priv0get_type_name(___nl__im__51));
#line 1524
c_rt_lib0move(&___nl__im__58,___get_global_string_const(480));
#line 1524
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 1524
c_rt_lib0clear(&___nl__im__57);
#line 1524
c_rt_lib0clear(&___nl__im__58);
#line 1524
c_rt_lib0move(&___nl__im__59, generator_c_priv0get_field_name(___nl__im__49));
#line 1524
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__59));
#line 1524
c_rt_lib0clear(&___nl__im__56);
#line 1524
c_rt_lib0clear(&___nl__im__59);
#line 1524
c_rt_lib0move(&___nl__im__60,___get_global_string_const(454));
#line 1524
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__60));
#line 1524
c_rt_lib0clear(&___nl__im__55);
#line 1524
c_rt_lib0clear(&___nl__im__60);
#line 1524
c_rt_lib0move(&___nl__im__61, string0lf());
#line 1524
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 1524
c_rt_lib0clear(&___nl__im__54);
#line 1524
c_rt_lib0clear(&___nl__im__61);
#line 1524
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__53));
#line 1524
c_rt_lib0clear(&___nl__im__53);
#line 1525
c_rt_lib0move(&___nl__im__52, c_rt_lib0next_iter(___nl__im__52));
#line 1525
goto label_194;
#line 1525
label_220:
;
#line 1526
c_rt_lib0move(&___nl__im__62,___get_global_string_const(321));
#line 1526
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__62));
#line 1526
c_rt_lib0clear(&___nl__im__62);
#line 1527
c_rt_lib0clear(&___nl__im__0);
#line 1527
c_rt_lib0clear(&___nl__im__1);
#line 1527
//clear ___nl__bool__2;
#line 1527
c_rt_lib0clear(&___nl__im__3);
#line 1527
c_rt_lib0clear(&___nl__im__4);
#line 1527
c_rt_lib0clear(&___nl__im__5);
#line 1527
c_rt_lib0clear(&___nl__im__6);
#line 1527
c_rt_lib0clear(&___nl__im__7);
#line 1527
c_rt_lib0clear(&___nl__im__8);
#line 1527
c_rt_lib0clear(&___nl__im__9);
#line 1527
c_rt_lib0clear(&___nl__im__10);
#line 1527
c_rt_lib0clear(&___nl__im__18);
#line 1527
c_rt_lib0clear(&___nl__im__19);
#line 1527
c_rt_lib0clear(&___nl__im__20);
#line 1527
c_rt_lib0clear(&___nl__im__21);
#line 1527
c_rt_lib0clear(&___nl__im__22);
#line 1527
c_rt_lib0clear(&___nl__im__23);
#line 1527
c_rt_lib0clear(&___nl__im__35);
#line 1527
c_rt_lib0clear(&___nl__im__36);
#line 1527
c_rt_lib0clear(&___nl__im__37);
#line 1527
c_rt_lib0clear(&___nl__im__38);
#line 1527
c_rt_lib0clear(&___nl__im__39);
#line 1527
c_rt_lib0clear(&___nl__im__49);
#line 1527
//clear ___nl__bool__50;
#line 1527
c_rt_lib0clear(&___nl__im__51);
#line 1527
c_rt_lib0clear(&___nl__im__52);
#line 1527
return ___nl__im__40;
#line 1528
goto label_651;
#line 1528
label_252:
;
#line 1528
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1528
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 1529
c_rt_lib0move(&___nl__im__65, anon_naming0func_ref_to_struct_name(___nl__im__63));
#line 1529
c_rt_lib0clear(&___nl__im__0);
#line 1529
c_rt_lib0clear(&___nl__im__1);
#line 1529
//clear ___nl__bool__2;
#line 1529
c_rt_lib0clear(&___nl__im__3);
#line 1529
c_rt_lib0clear(&___nl__im__4);
#line 1529
c_rt_lib0clear(&___nl__im__5);
#line 1529
c_rt_lib0clear(&___nl__im__6);
#line 1529
c_rt_lib0clear(&___nl__im__7);
#line 1529
c_rt_lib0clear(&___nl__im__8);
#line 1529
c_rt_lib0clear(&___nl__im__9);
#line 1529
c_rt_lib0clear(&___nl__im__10);
#line 1529
c_rt_lib0clear(&___nl__im__18);
#line 1529
c_rt_lib0clear(&___nl__im__19);
#line 1529
c_rt_lib0clear(&___nl__im__20);
#line 1529
c_rt_lib0clear(&___nl__im__21);
#line 1529
c_rt_lib0clear(&___nl__im__22);
#line 1529
c_rt_lib0clear(&___nl__im__23);
#line 1529
c_rt_lib0clear(&___nl__im__35);
#line 1529
c_rt_lib0clear(&___nl__im__36);
#line 1529
c_rt_lib0clear(&___nl__im__37);
#line 1529
c_rt_lib0clear(&___nl__im__38);
#line 1529
c_rt_lib0clear(&___nl__im__39);
#line 1529
c_rt_lib0clear(&___nl__im__40);
#line 1529
c_rt_lib0clear(&___nl__im__49);
#line 1529
//clear ___nl__bool__50;
#line 1529
c_rt_lib0clear(&___nl__im__51);
#line 1529
c_rt_lib0clear(&___nl__im__52);
#line 1529
c_rt_lib0clear(&___nl__im__63);
#line 1529
c_rt_lib0clear(&___nl__im__64);
#line 1529
return ___nl__im__65;
#line 1530
goto label_651;
#line 1530
label_287:
;
#line 1531
c_rt_lib0move(&___nl__im__66, generator_c_priv0im_t());
#line 1531
c_rt_lib0clear(&___nl__im__0);
#line 1531
c_rt_lib0clear(&___nl__im__1);
#line 1531
//clear ___nl__bool__2;
#line 1531
c_rt_lib0clear(&___nl__im__3);
#line 1531
c_rt_lib0clear(&___nl__im__4);
#line 1531
c_rt_lib0clear(&___nl__im__5);
#line 1531
c_rt_lib0clear(&___nl__im__6);
#line 1531
c_rt_lib0clear(&___nl__im__7);
#line 1531
c_rt_lib0clear(&___nl__im__8);
#line 1531
c_rt_lib0clear(&___nl__im__9);
#line 1531
c_rt_lib0clear(&___nl__im__10);
#line 1531
c_rt_lib0clear(&___nl__im__18);
#line 1531
c_rt_lib0clear(&___nl__im__19);
#line 1531
c_rt_lib0clear(&___nl__im__20);
#line 1531
c_rt_lib0clear(&___nl__im__21);
#line 1531
c_rt_lib0clear(&___nl__im__22);
#line 1531
c_rt_lib0clear(&___nl__im__23);
#line 1531
c_rt_lib0clear(&___nl__im__35);
#line 1531
c_rt_lib0clear(&___nl__im__36);
#line 1531
c_rt_lib0clear(&___nl__im__37);
#line 1531
c_rt_lib0clear(&___nl__im__38);
#line 1531
c_rt_lib0clear(&___nl__im__39);
#line 1531
c_rt_lib0clear(&___nl__im__40);
#line 1531
c_rt_lib0clear(&___nl__im__49);
#line 1531
//clear ___nl__bool__50;
#line 1531
c_rt_lib0clear(&___nl__im__51);
#line 1531
c_rt_lib0clear(&___nl__im__52);
#line 1531
c_rt_lib0clear(&___nl__im__63);
#line 1531
c_rt_lib0clear(&___nl__im__64);
#line 1531
c_rt_lib0clear(&___nl__im__65);
#line 1531
return ___nl__im__66;
#line 1532
goto label_651;
#line 1532
label_321:
;
#line 1533
c_rt_lib0move(&___nl__im__67, generator_c_priv0int_t());
#line 1533
c_rt_lib0clear(&___nl__im__0);
#line 1533
c_rt_lib0clear(&___nl__im__1);
#line 1533
//clear ___nl__bool__2;
#line 1533
c_rt_lib0clear(&___nl__im__3);
#line 1533
c_rt_lib0clear(&___nl__im__4);
#line 1533
c_rt_lib0clear(&___nl__im__5);
#line 1533
c_rt_lib0clear(&___nl__im__6);
#line 1533
c_rt_lib0clear(&___nl__im__7);
#line 1533
c_rt_lib0clear(&___nl__im__8);
#line 1533
c_rt_lib0clear(&___nl__im__9);
#line 1533
c_rt_lib0clear(&___nl__im__10);
#line 1533
c_rt_lib0clear(&___nl__im__18);
#line 1533
c_rt_lib0clear(&___nl__im__19);
#line 1533
c_rt_lib0clear(&___nl__im__20);
#line 1533
c_rt_lib0clear(&___nl__im__21);
#line 1533
c_rt_lib0clear(&___nl__im__22);
#line 1533
c_rt_lib0clear(&___nl__im__23);
#line 1533
c_rt_lib0clear(&___nl__im__35);
#line 1533
c_rt_lib0clear(&___nl__im__36);
#line 1533
c_rt_lib0clear(&___nl__im__37);
#line 1533
c_rt_lib0clear(&___nl__im__38);
#line 1533
c_rt_lib0clear(&___nl__im__39);
#line 1533
c_rt_lib0clear(&___nl__im__40);
#line 1533
c_rt_lib0clear(&___nl__im__49);
#line 1533
//clear ___nl__bool__50;
#line 1533
c_rt_lib0clear(&___nl__im__51);
#line 1533
c_rt_lib0clear(&___nl__im__52);
#line 1533
c_rt_lib0clear(&___nl__im__63);
#line 1533
c_rt_lib0clear(&___nl__im__64);
#line 1533
c_rt_lib0clear(&___nl__im__65);
#line 1533
c_rt_lib0clear(&___nl__im__66);
#line 1533
return ___nl__im__67;
#line 1534
goto label_651;
#line 1534
label_356:
;
#line 1535
c_rt_lib0move(&___nl__im__68, generator_c_priv0im_t());
#line 1535
c_rt_lib0clear(&___nl__im__0);
#line 1535
c_rt_lib0clear(&___nl__im__1);
#line 1535
//clear ___nl__bool__2;
#line 1535
c_rt_lib0clear(&___nl__im__3);
#line 1535
c_rt_lib0clear(&___nl__im__4);
#line 1535
c_rt_lib0clear(&___nl__im__5);
#line 1535
c_rt_lib0clear(&___nl__im__6);
#line 1535
c_rt_lib0clear(&___nl__im__7);
#line 1535
c_rt_lib0clear(&___nl__im__8);
#line 1535
c_rt_lib0clear(&___nl__im__9);
#line 1535
c_rt_lib0clear(&___nl__im__10);
#line 1535
c_rt_lib0clear(&___nl__im__18);
#line 1535
c_rt_lib0clear(&___nl__im__19);
#line 1535
c_rt_lib0clear(&___nl__im__20);
#line 1535
c_rt_lib0clear(&___nl__im__21);
#line 1535
c_rt_lib0clear(&___nl__im__22);
#line 1535
c_rt_lib0clear(&___nl__im__23);
#line 1535
c_rt_lib0clear(&___nl__im__35);
#line 1535
c_rt_lib0clear(&___nl__im__36);
#line 1535
c_rt_lib0clear(&___nl__im__37);
#line 1535
c_rt_lib0clear(&___nl__im__38);
#line 1535
c_rt_lib0clear(&___nl__im__39);
#line 1535
c_rt_lib0clear(&___nl__im__40);
#line 1535
c_rt_lib0clear(&___nl__im__49);
#line 1535
//clear ___nl__bool__50;
#line 1535
c_rt_lib0clear(&___nl__im__51);
#line 1535
c_rt_lib0clear(&___nl__im__52);
#line 1535
c_rt_lib0clear(&___nl__im__63);
#line 1535
c_rt_lib0clear(&___nl__im__64);
#line 1535
c_rt_lib0clear(&___nl__im__65);
#line 1535
c_rt_lib0clear(&___nl__im__66);
#line 1535
c_rt_lib0clear(&___nl__im__67);
#line 1535
return ___nl__im__68;
#line 1536
goto label_651;
#line 1536
label_392:
;
#line 1537
c_rt_lib0move(&___nl__im__69, generator_c_priv0bool_t());
#line 1537
c_rt_lib0clear(&___nl__im__0);
#line 1537
c_rt_lib0clear(&___nl__im__1);
#line 1537
//clear ___nl__bool__2;
#line 1537
c_rt_lib0clear(&___nl__im__3);
#line 1537
c_rt_lib0clear(&___nl__im__4);
#line 1537
c_rt_lib0clear(&___nl__im__5);
#line 1537
c_rt_lib0clear(&___nl__im__6);
#line 1537
c_rt_lib0clear(&___nl__im__7);
#line 1537
c_rt_lib0clear(&___nl__im__8);
#line 1537
c_rt_lib0clear(&___nl__im__9);
#line 1537
c_rt_lib0clear(&___nl__im__10);
#line 1537
c_rt_lib0clear(&___nl__im__18);
#line 1537
c_rt_lib0clear(&___nl__im__19);
#line 1537
c_rt_lib0clear(&___nl__im__20);
#line 1537
c_rt_lib0clear(&___nl__im__21);
#line 1537
c_rt_lib0clear(&___nl__im__22);
#line 1537
c_rt_lib0clear(&___nl__im__23);
#line 1537
c_rt_lib0clear(&___nl__im__35);
#line 1537
c_rt_lib0clear(&___nl__im__36);
#line 1537
c_rt_lib0clear(&___nl__im__37);
#line 1537
c_rt_lib0clear(&___nl__im__38);
#line 1537
c_rt_lib0clear(&___nl__im__39);
#line 1537
c_rt_lib0clear(&___nl__im__40);
#line 1537
c_rt_lib0clear(&___nl__im__49);
#line 1537
//clear ___nl__bool__50;
#line 1537
c_rt_lib0clear(&___nl__im__51);
#line 1537
c_rt_lib0clear(&___nl__im__52);
#line 1537
c_rt_lib0clear(&___nl__im__63);
#line 1537
c_rt_lib0clear(&___nl__im__64);
#line 1537
c_rt_lib0clear(&___nl__im__65);
#line 1537
c_rt_lib0clear(&___nl__im__66);
#line 1537
c_rt_lib0clear(&___nl__im__67);
#line 1537
c_rt_lib0clear(&___nl__im__68);
#line 1537
return ___nl__im__69;
#line 1538
goto label_651;
#line 1538
label_429:
;
#line 1538
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 1538
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 1539
c_rt_lib0move(&___nl__im__72, generator_c_priv0im_t());
#line 1539
c_rt_lib0clear(&___nl__im__0);
#line 1539
c_rt_lib0clear(&___nl__im__1);
#line 1539
//clear ___nl__bool__2;
#line 1539
c_rt_lib0clear(&___nl__im__3);
#line 1539
c_rt_lib0clear(&___nl__im__4);
#line 1539
c_rt_lib0clear(&___nl__im__5);
#line 1539
c_rt_lib0clear(&___nl__im__6);
#line 1539
c_rt_lib0clear(&___nl__im__7);
#line 1539
c_rt_lib0clear(&___nl__im__8);
#line 1539
c_rt_lib0clear(&___nl__im__9);
#line 1539
c_rt_lib0clear(&___nl__im__10);
#line 1539
c_rt_lib0clear(&___nl__im__18);
#line 1539
c_rt_lib0clear(&___nl__im__19);
#line 1539
c_rt_lib0clear(&___nl__im__20);
#line 1539
c_rt_lib0clear(&___nl__im__21);
#line 1539
c_rt_lib0clear(&___nl__im__22);
#line 1539
c_rt_lib0clear(&___nl__im__23);
#line 1539
c_rt_lib0clear(&___nl__im__35);
#line 1539
c_rt_lib0clear(&___nl__im__36);
#line 1539
c_rt_lib0clear(&___nl__im__37);
#line 1539
c_rt_lib0clear(&___nl__im__38);
#line 1539
c_rt_lib0clear(&___nl__im__39);
#line 1539
c_rt_lib0clear(&___nl__im__40);
#line 1539
c_rt_lib0clear(&___nl__im__49);
#line 1539
//clear ___nl__bool__50;
#line 1539
c_rt_lib0clear(&___nl__im__51);
#line 1539
c_rt_lib0clear(&___nl__im__52);
#line 1539
c_rt_lib0clear(&___nl__im__63);
#line 1539
c_rt_lib0clear(&___nl__im__64);
#line 1539
c_rt_lib0clear(&___nl__im__65);
#line 1539
c_rt_lib0clear(&___nl__im__66);
#line 1539
c_rt_lib0clear(&___nl__im__67);
#line 1539
c_rt_lib0clear(&___nl__im__68);
#line 1539
c_rt_lib0clear(&___nl__im__69);
#line 1539
c_rt_lib0clear(&___nl__im__70);
#line 1539
c_rt_lib0clear(&___nl__im__71);
#line 1539
return ___nl__im__72;
#line 1540
goto label_651;
#line 1540
label_471:
;
#line 1540
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1540
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 1541
c_rt_lib0move(&___nl__im__80,___get_global_string_const(633));
#line 1541
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__1));
#line 1541
c_rt_lib0clear(&___nl__im__80);
#line 1541
c_rt_lib0move(&___nl__im__81,___get_global_string_const(639));
#line 1541
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__81));
#line 1541
c_rt_lib0clear(&___nl__im__79);
#line 1541
c_rt_lib0clear(&___nl__im__81);
#line 1543
c_rt_lib0move(&___nl__im__82, generator_c_priv0int_t());
#line 1543
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__82));
#line 1543
c_rt_lib0clear(&___nl__im__78);
#line 1543
c_rt_lib0clear(&___nl__im__82);
#line 1543
c_rt_lib0move(&___nl__im__83,___get_global_string_const(640));
#line 1543
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__83));
#line 1543
c_rt_lib0clear(&___nl__im__77);
#line 1543
c_rt_lib0clear(&___nl__im__83);
#line 1544
c_rt_lib0move(&___nl__im__84, string0lf());
#line 1544
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__84));
#line 1544
c_rt_lib0clear(&___nl__im__76);
#line 1544
c_rt_lib0clear(&___nl__im__84);
#line 1545
c_rt_lib0move(&___nl__im__88, c_rt_lib0init_iter(___nl__im__73));
#line 1545
label_494:
;
#line 1545
___nl__bool__86 = c_rt_lib0is_end_hash(___nl__im__88);
#line 1545
if(___nl__bool__86){ goto label_538;}
#line 1545
c_rt_lib0move(&___nl__im__85, c_rt_lib0get_key_iter(___nl__im__88));
#line 1545
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value(___nl__im__73, ___nl__im__85));
#line 1546
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(27));
#line 1546
if(___nl__bool__89){ goto label_506;}
#line 1548
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__87, ___get_global_string_const(28));
#line 1548
if(___nl__bool__89){ goto label_529;}
#line 1548
c_rt_lib0move(&___nl__im__90,___get_global_string_const(15));
#line 1548
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__90, ___nl__im__87));
#line 1548
nl_die_arg(___nl__im__90);
#line 1546
label_506:
;
#line 1546
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(27)));
#line 1546
c_rt_lib0copy(&___nl__im__91, ___nl__im__92);
#line 1547
c_rt_lib0move(&___nl__im__97, generator_c_priv0get_type_name(___nl__im__91));
#line 1547
c_rt_lib0move(&___nl__im__98,___get_global_string_const(641));
#line 1547
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__98));
#line 1547
c_rt_lib0clear(&___nl__im__97);
#line 1547
c_rt_lib0clear(&___nl__im__98);
#line 1547
c_rt_lib0move(&___nl__im__99, generator_c_priv0get_case_name(___nl__im__85));
#line 1547
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__99));
#line 1547
c_rt_lib0clear(&___nl__im__96);
#line 1547
c_rt_lib0clear(&___nl__im__99);
#line 1547
c_rt_lib0move(&___nl__im__100,___get_global_string_const(454));
#line 1547
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__100));
#line 1547
c_rt_lib0clear(&___nl__im__95);
#line 1547
c_rt_lib0clear(&___nl__im__100);
#line 1547
c_rt_lib0move(&___nl__im__101, string0lf());
#line 1547
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__101));
#line 1547
c_rt_lib0clear(&___nl__im__94);
#line 1547
c_rt_lib0clear(&___nl__im__101);
#line 1547
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_add(___nl__im__75, ___nl__im__93));
#line 1547
c_rt_lib0clear(&___nl__im__93);
#line 1548
goto label_531;
#line 1548
label_529:
;
#line 1549
goto label_531;
#line 1549
label_531:
;
#line 1549
//clear ___nl__bool__89;
#line 1549
c_rt_lib0clear(&___nl__im__90);
#line 1549
c_rt_lib0clear(&___nl__im__91);
#line 1549
c_rt_lib0clear(&___nl__im__92);
#line 1550
c_rt_lib0move(&___nl__im__88, c_rt_lib0next_iter(___nl__im__88));
#line 1550
goto label_494;
#line 1550
label_538:
;
#line 1551
c_rt_lib0move(&___nl__im__104,___get_global_string_const(642));
#line 1553
c_rt_lib0move(&___nl__im__105, generator_c_priv0int_t());
#line 1553
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__105));
#line 1553
c_rt_lib0clear(&___nl__im__104);
#line 1553
c_rt_lib0clear(&___nl__im__105);
#line 1553
c_rt_lib0move(&___nl__im__106,___get_global_string_const(643));
#line 1553
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__106));
#line 1553
c_rt_lib0clear(&___nl__im__103);
#line 1553
c_rt_lib0clear(&___nl__im__106);
#line 1553
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_add(___nl__im__75, ___nl__im__102));
#line 1553
c_rt_lib0clear(&___nl__im__102);
#line 1555
c_rt_lib0clear(&___nl__im__0);
#line 1555
c_rt_lib0clear(&___nl__im__1);
#line 1555
//clear ___nl__bool__2;
#line 1555
c_rt_lib0clear(&___nl__im__3);
#line 1555
c_rt_lib0clear(&___nl__im__4);
#line 1555
c_rt_lib0clear(&___nl__im__5);
#line 1555
c_rt_lib0clear(&___nl__im__6);
#line 1555
c_rt_lib0clear(&___nl__im__7);
#line 1555
c_rt_lib0clear(&___nl__im__8);
#line 1555
c_rt_lib0clear(&___nl__im__9);
#line 1555
c_rt_lib0clear(&___nl__im__10);
#line 1555
c_rt_lib0clear(&___nl__im__18);
#line 1555
c_rt_lib0clear(&___nl__im__19);
#line 1555
c_rt_lib0clear(&___nl__im__20);
#line 1555
c_rt_lib0clear(&___nl__im__21);
#line 1555
c_rt_lib0clear(&___nl__im__22);
#line 1555
c_rt_lib0clear(&___nl__im__23);
#line 1555
c_rt_lib0clear(&___nl__im__35);
#line 1555
c_rt_lib0clear(&___nl__im__36);
#line 1555
c_rt_lib0clear(&___nl__im__37);
#line 1555
c_rt_lib0clear(&___nl__im__38);
#line 1555
c_rt_lib0clear(&___nl__im__39);
#line 1555
c_rt_lib0clear(&___nl__im__40);
#line 1555
c_rt_lib0clear(&___nl__im__49);
#line 1555
//clear ___nl__bool__50;
#line 1555
c_rt_lib0clear(&___nl__im__51);
#line 1555
c_rt_lib0clear(&___nl__im__52);
#line 1555
c_rt_lib0clear(&___nl__im__63);
#line 1555
c_rt_lib0clear(&___nl__im__64);
#line 1555
c_rt_lib0clear(&___nl__im__65);
#line 1555
c_rt_lib0clear(&___nl__im__66);
#line 1555
c_rt_lib0clear(&___nl__im__67);
#line 1555
c_rt_lib0clear(&___nl__im__68);
#line 1555
c_rt_lib0clear(&___nl__im__69);
#line 1555
c_rt_lib0clear(&___nl__im__70);
#line 1555
c_rt_lib0clear(&___nl__im__71);
#line 1555
c_rt_lib0clear(&___nl__im__72);
#line 1555
c_rt_lib0clear(&___nl__im__73);
#line 1555
c_rt_lib0clear(&___nl__im__74);
#line 1555
c_rt_lib0clear(&___nl__im__85);
#line 1555
//clear ___nl__bool__86;
#line 1555
c_rt_lib0clear(&___nl__im__87);
#line 1555
c_rt_lib0clear(&___nl__im__88);
#line 1555
//clear ___nl__bool__89;
#line 1555
c_rt_lib0clear(&___nl__im__90);
#line 1555
c_rt_lib0clear(&___nl__im__91);
#line 1555
c_rt_lib0clear(&___nl__im__92);
#line 1555
return ___nl__im__75;
#line 1556
goto label_651;
#line 1556
label_599:
;
#line 1557
c_rt_lib0move(&___nl__im__107, generator_c_priv0im_t());
#line 1557
c_rt_lib0clear(&___nl__im__0);
#line 1557
c_rt_lib0clear(&___nl__im__1);
#line 1557
//clear ___nl__bool__2;
#line 1557
c_rt_lib0clear(&___nl__im__3);
#line 1557
c_rt_lib0clear(&___nl__im__4);
#line 1557
c_rt_lib0clear(&___nl__im__5);
#line 1557
c_rt_lib0clear(&___nl__im__6);
#line 1557
c_rt_lib0clear(&___nl__im__7);
#line 1557
c_rt_lib0clear(&___nl__im__8);
#line 1557
c_rt_lib0clear(&___nl__im__9);
#line 1557
c_rt_lib0clear(&___nl__im__10);
#line 1557
c_rt_lib0clear(&___nl__im__18);
#line 1557
c_rt_lib0clear(&___nl__im__19);
#line 1557
c_rt_lib0clear(&___nl__im__20);
#line 1557
c_rt_lib0clear(&___nl__im__21);
#line 1557
c_rt_lib0clear(&___nl__im__22);
#line 1557
c_rt_lib0clear(&___nl__im__23);
#line 1557
c_rt_lib0clear(&___nl__im__35);
#line 1557
c_rt_lib0clear(&___nl__im__36);
#line 1557
c_rt_lib0clear(&___nl__im__37);
#line 1557
c_rt_lib0clear(&___nl__im__38);
#line 1557
c_rt_lib0clear(&___nl__im__39);
#line 1557
c_rt_lib0clear(&___nl__im__40);
#line 1557
c_rt_lib0clear(&___nl__im__49);
#line 1557
//clear ___nl__bool__50;
#line 1557
c_rt_lib0clear(&___nl__im__51);
#line 1557
c_rt_lib0clear(&___nl__im__52);
#line 1557
c_rt_lib0clear(&___nl__im__63);
#line 1557
c_rt_lib0clear(&___nl__im__64);
#line 1557
c_rt_lib0clear(&___nl__im__65);
#line 1557
c_rt_lib0clear(&___nl__im__66);
#line 1557
c_rt_lib0clear(&___nl__im__67);
#line 1557
c_rt_lib0clear(&___nl__im__68);
#line 1557
c_rt_lib0clear(&___nl__im__69);
#line 1557
c_rt_lib0clear(&___nl__im__70);
#line 1557
c_rt_lib0clear(&___nl__im__71);
#line 1557
c_rt_lib0clear(&___nl__im__72);
#line 1557
c_rt_lib0clear(&___nl__im__73);
#line 1557
c_rt_lib0clear(&___nl__im__74);
#line 1557
c_rt_lib0clear(&___nl__im__75);
#line 1557
c_rt_lib0clear(&___nl__im__85);
#line 1557
//clear ___nl__bool__86;
#line 1557
c_rt_lib0clear(&___nl__im__87);
#line 1557
c_rt_lib0clear(&___nl__im__88);
#line 1557
//clear ___nl__bool__89;
#line 1557
c_rt_lib0clear(&___nl__im__90);
#line 1557
c_rt_lib0clear(&___nl__im__91);
#line 1557
c_rt_lib0clear(&___nl__im__92);
#line 1557
return ___nl__im__107;
#line 1558
goto label_651;
#line 1558
label_651:
;
return NULL;

}

ImmT  generator_c_priv0get_field_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 1562
c_rt_lib0move(&___nl__im__2,___get_global_string_const(644));
#line 1562
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 1562
c_rt_lib0clear(&___nl__im__2);
#line 1562
c_rt_lib0clear(&___nl__im__0);
#line 1562
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_case_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 1566
c_rt_lib0move(&___nl__im__2,___get_global_string_const(645));
#line 1566
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 1566
c_rt_lib0clear(&___nl__im__2);
#line 1566
c_rt_lib0clear(&___nl__im__0);
#line 1566
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_type_name(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1570
___nl__bool__1 = generator_c_priv0is_anon(___nl__im__0);
#line 1570
___nl__bool__1 = !___nl__bool__1;
#line 1570
if(___nl__bool__1){ goto label_8;}
#line 1571
c_rt_lib0move(&___nl__im__2, anon_naming0get_anon_name(___nl__im__0));
#line 1571
c_rt_lib0clear(&___nl__im__0);
#line 1571
//clear ___nl__bool__1;
#line 1571
return ___nl__im__2;
#line 1572
goto label_17;
#line 1572
label_8:
;
#line 1573
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1573
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_to_c(___nl__im__0, ___nl__im__4));
#line 1573
c_rt_lib0clear(&___nl__im__4);
#line 1573
c_rt_lib0clear(&___nl__im__0);
#line 1573
//clear ___nl__bool__1;
#line 1573
c_rt_lib0clear(&___nl__im__2);
#line 1573
return ___nl__im__3;
#line 1574
goto label_17;
#line 1574
label_17:
;
#line 1574
//clear ___nl__bool__1;
#line 1574
c_rt_lib0clear(&___nl__im__2);
#line 1574
c_rt_lib0clear(&___nl__im__3);
return NULL;

}

ImmT  generator_c_priv0print_func_type_struct_decl(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4,ImmT  ___nl__im__5) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__5);
generator_c_priv0__const__init();
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
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
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
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
#line 1579
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 1580
___nl__bool__7 = ___nl__bool__4;
#line 1580
___nl__bool__7 = !___nl__bool__7;
#line 1580
if(___nl__bool__7){ goto label_23;}
#line 1581
c_rt_lib0move(&___nl__im__10,___get_global_string_const(646));
#line 1581
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__1));
#line 1581
c_rt_lib0clear(&___nl__im__10);
#line 1581
c_rt_lib0move(&___nl__im__11, string0lf());
#line 1581
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__11));
#line 1581
c_rt_lib0clear(&___nl__im__9);
#line 1581
c_rt_lib0clear(&___nl__im__11);
#line 1581
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__8));
#line 1581
c_rt_lib0clear(&___nl__im__8);
#line 1582
c_rt_lib0move(&___nl__im__14,___get_global_string_const(647));
#line 1582
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1582
c_rt_lib0clear(&___nl__im__14);
#line 1582
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1582
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1582
c_rt_lib0clear(&___nl__im__13);
#line 1582
c_rt_lib0clear(&___nl__im__15);
#line 1582
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__12));
#line 1582
c_rt_lib0clear(&___nl__im__12);
#line 1583
goto label_23;
#line 1583
label_23:
;
#line 1583
//clear ___nl__bool__7;
#line 1584
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 1585
___nl__bool__17 = ___nl__bool__4;
#line 1585
___nl__bool__17 = !___nl__bool__17;
#line 1585
if(___nl__bool__17){ goto label_31;}
#line 1586
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 1587
goto label_38;
#line 1587
label_31:
;
#line 1588
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_fun_name(___nl__im__3, ___nl__im__1, ___nl__im__3));
#line 1588
c_rt_lib0move(&___nl__im__19,___get_global_string_const(35));
#line 1588
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1588
c_rt_lib0clear(&___nl__im__18);
#line 1588
c_rt_lib0clear(&___nl__im__19);
#line 1589
goto label_38;
#line 1589
label_38:
;
#line 1589
//clear ___nl__bool__17;
#line 1590
___nl__bool__20 = generator_c_struct_dependence_sort0is_divisible(___nl__im__2);
#line 1590
___nl__bool__20 = !___nl__bool__20;
#line 1590
if(___nl__bool__20){ goto label_63;}
#line 1591
c_rt_lib0move(&___nl__im__26,___get_global_string_const(648));
#line 1591
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__16));
#line 1591
c_rt_lib0clear(&___nl__im__26);
#line 1591
c_rt_lib0move(&___nl__im__27,___get_global_string_const(480));
#line 1591
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__27));
#line 1591
c_rt_lib0clear(&___nl__im__25);
#line 1591
c_rt_lib0clear(&___nl__im__27);
#line 1591
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__16));
#line 1591
c_rt_lib0clear(&___nl__im__24);
#line 1591
c_rt_lib0move(&___nl__im__28,___get_global_string_const(454));
#line 1591
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__28));
#line 1591
c_rt_lib0clear(&___nl__im__23);
#line 1591
c_rt_lib0clear(&___nl__im__28);
#line 1591
c_rt_lib0move(&___nl__im__29, string0lf());
#line 1591
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__29));
#line 1591
c_rt_lib0clear(&___nl__im__22);
#line 1591
c_rt_lib0clear(&___nl__im__29);
#line 1591
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__21));
#line 1591
c_rt_lib0clear(&___nl__im__21);
#line 1592
goto label_88;
#line 1592
label_63:
;
#line 1593
c_rt_lib0move(&___nl__im__35,___get_global_string_const(649));
#line 1593
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 1593
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_type_to_c(___nl__im__2, ___nl__im__37));
#line 1593
c_rt_lib0clear(&___nl__im__37);
#line 1593
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 1593
c_rt_lib0clear(&___nl__im__35);
#line 1593
c_rt_lib0clear(&___nl__im__36);
#line 1593
c_rt_lib0move(&___nl__im__38,___get_global_string_const(480));
#line 1593
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__38));
#line 1593
c_rt_lib0clear(&___nl__im__34);
#line 1593
c_rt_lib0clear(&___nl__im__38);
#line 1593
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__16));
#line 1593
c_rt_lib0clear(&___nl__im__33);
#line 1593
c_rt_lib0move(&___nl__im__39,___get_global_string_const(454));
#line 1593
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 1593
c_rt_lib0clear(&___nl__im__32);
#line 1593
c_rt_lib0clear(&___nl__im__39);
#line 1593
c_rt_lib0move(&___nl__im__40, string0lf());
#line 1593
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__40));
#line 1593
c_rt_lib0clear(&___nl__im__31);
#line 1593
c_rt_lib0clear(&___nl__im__40);
#line 1593
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__30));
#line 1593
c_rt_lib0clear(&___nl__im__30);
#line 1594
goto label_88;
#line 1594
label_88:
;
#line 1594
//clear ___nl__bool__20;
#line 1595
___nl__bool__41 = ___nl__bool__4;
#line 1595
___nl__bool__41 = !___nl__bool__41;
#line 1595
if(___nl__bool__41){ goto label_101;}
#line 1596
c_rt_lib0move(&___nl__im__43,___get_global_string_const(650));
#line 1596
c_rt_lib0move(&___nl__im__44, string0lf());
#line 1596
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__44));
#line 1596
c_rt_lib0clear(&___nl__im__43);
#line 1596
c_rt_lib0clear(&___nl__im__44);
#line 1596
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__42));
#line 1596
c_rt_lib0clear(&___nl__im__42);
#line 1597
goto label_101;
#line 1597
label_101:
;
#line 1597
//clear ___nl__bool__41;
#line 1598
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_additional_type_functions_decl(___nl__im__16, ___nl__im__2, ___ref___rec__0, ___nl__bool__4));
#line 1598
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__45));
#line 1598
c_rt_lib0clear(&___nl__im__45);
#line 1599
c_rt_lib0move(&___nl__im__47, string0lf());
#line 1599
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__6, ___nl__im__47));
#line 1599
c_rt_lib0clear(&___nl__im__47);
#line 1599
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__46));
#line 1599
c_rt_lib0clear(&___nl__im__46);
#line 1600
c_rt_lib0move(&___nl__im__48, generator_c_priv0get_additional_type_functions_def(___nl__im__16, ___nl__im__2, ___ref___rec__0, ___nl__im__5, ___nl__bool__4));
#line 1600
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__48));
#line 1600
c_rt_lib0clear(&___nl__im__48);
#line 1600
c_rt_lib0clear(&___nl__im__1);
#line 1600
c_rt_lib0clear(&___nl__im__2);
#line 1600
c_rt_lib0clear(&___nl__im__3);
#line 1600
//clear ___nl__bool__4;
#line 1600
c_rt_lib0clear(&___nl__im__5);
#line 1600
c_rt_lib0clear(&___nl__im__6);
#line 1600
c_rt_lib0clear(&___nl__im__16);
#line 1600
return NULL;
return NULL;

}

ImmT  generator_c_priv0print_func_type_struct_def(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
bool  ___nl__bool__5 = false;
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
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 1605
___nl__bool__5 = generator_c_struct_dependence_sort0is_divisible(___nl__im__2);
#line 1605
___nl__bool__5 = !___nl__bool__5;
#line 1605
___nl__bool__5 = !___nl__bool__5;
#line 1605
if(___nl__bool__5){ goto label_11;}
#line 1606
c_rt_lib0clear(&___nl__im__1);
#line 1606
c_rt_lib0clear(&___nl__im__2);
#line 1606
c_rt_lib0clear(&___nl__im__3);
#line 1606
//clear ___nl__bool__4;
#line 1606
//clear ___nl__bool__5;
#line 1606
return NULL;
#line 1607
goto label_11;
#line 1607
label_11:
;
#line 1607
//clear ___nl__bool__5;
#line 1608
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 1609
___nl__bool__7 = ___nl__bool__4;
#line 1609
___nl__bool__7 = !___nl__bool__7;
#line 1609
if(___nl__bool__7){ goto label_36;}
#line 1610
c_rt_lib0move(&___nl__im__10,___get_global_string_const(651));
#line 1610
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__1));
#line 1610
c_rt_lib0clear(&___nl__im__10);
#line 1610
c_rt_lib0move(&___nl__im__11, string0lf());
#line 1610
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__11));
#line 1610
c_rt_lib0clear(&___nl__im__9);
#line 1610
c_rt_lib0clear(&___nl__im__11);
#line 1610
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__8));
#line 1610
c_rt_lib0clear(&___nl__im__8);
#line 1611
c_rt_lib0move(&___nl__im__14,___get_global_string_const(652));
#line 1611
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1611
c_rt_lib0clear(&___nl__im__14);
#line 1611
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1611
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1611
c_rt_lib0clear(&___nl__im__13);
#line 1611
c_rt_lib0clear(&___nl__im__15);
#line 1611
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__12));
#line 1611
c_rt_lib0clear(&___nl__im__12);
#line 1612
goto label_36;
#line 1612
label_36:
;
#line 1612
//clear ___nl__bool__7;
#line 1613
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 1614
___nl__bool__17 = ___nl__bool__4;
#line 1614
___nl__bool__17 = !___nl__bool__17;
#line 1614
if(___nl__bool__17){ goto label_44;}
#line 1615
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 1616
goto label_51;
#line 1616
label_44:
;
#line 1617
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_fun_name(___nl__im__3, ___nl__im__1, ___nl__im__3));
#line 1617
c_rt_lib0move(&___nl__im__19,___get_global_string_const(35));
#line 1617
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1617
c_rt_lib0clear(&___nl__im__18);
#line 1617
c_rt_lib0clear(&___nl__im__19);
#line 1618
goto label_51;
#line 1618
label_51:
;
#line 1618
//clear ___nl__bool__17;
#line 1619
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_type_to_c(___nl__im__2, ___nl__im__16));
#line 1619
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__20));
#line 1619
c_rt_lib0clear(&___nl__im__20);
#line 1620
c_rt_lib0move(&___nl__im__22,___get_global_string_const(454));
#line 1620
c_rt_lib0move(&___nl__im__23, string0lf());
#line 1620
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1620
c_rt_lib0clear(&___nl__im__22);
#line 1620
c_rt_lib0clear(&___nl__im__23);
#line 1620
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__21));
#line 1620
c_rt_lib0clear(&___nl__im__21);
#line 1621
___nl__bool__24 = ___nl__bool__4;
#line 1621
___nl__bool__24 = !___nl__bool__24;
#line 1621
if(___nl__bool__24){ goto label_70;}
#line 1622
c_rt_lib0move(&___nl__im__25,___get_global_string_const(650));
#line 1622
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__25));
#line 1622
c_rt_lib0clear(&___nl__im__25);
#line 1623
goto label_70;
#line 1623
label_70:
;
#line 1623
//clear ___nl__bool__24;
#line 1624
c_rt_lib0move(&___nl__im__27, string0lf());
#line 1624
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__6, ___nl__im__27));
#line 1624
c_rt_lib0clear(&___nl__im__27);
#line 1624
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__26));
#line 1624
c_rt_lib0clear(&___nl__im__26);
#line 1624
c_rt_lib0clear(&___nl__im__1);
#line 1624
c_rt_lib0clear(&___nl__im__2);
#line 1624
c_rt_lib0clear(&___nl__im__3);
#line 1624
//clear ___nl__bool__4;
#line 1624
c_rt_lib0clear(&___nl__im__6);
#line 1624
c_rt_lib0clear(&___nl__im__16);
#line 1624
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_inline_bin_op(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 1628
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1628
c_rt_lib0move(&___nl__im__9,___get_global_string_const(480));
#line 1628
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1628
c_rt_lib0clear(&___nl__im__8);
#line 1628
c_rt_lib0clear(&___nl__im__9);
#line 1628
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__3));
#line 1628
c_rt_lib0clear(&___nl__im__7);
#line 1628
c_rt_lib0move(&___nl__im__10,___get_global_string_const(480));
#line 1628
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 1628
c_rt_lib0clear(&___nl__im__6);
#line 1628
c_rt_lib0clear(&___nl__im__10);
#line 1628
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1628
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__11));
#line 1628
c_rt_lib0clear(&___nl__im__5);
#line 1628
c_rt_lib0clear(&___nl__im__11);
#line 1628
c_rt_lib0clear(&___nl__im__1);
#line 1628
c_rt_lib0clear(&___nl__im__2);
#line 1628
c_rt_lib0clear(&___nl__im__3);
#line 1628
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0reg_suffix(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
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
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__string__21 = NULL;
#line 1633
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1633
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(145));
#line 1633
if(___nl__bool__3){ goto label_20;}
#line 1635
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(419));
#line 1635
if(___nl__bool__3){ goto label_23;}
#line 1637
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 1637
if(___nl__bool__3){ goto label_26;}
#line 1639
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(420));
#line 1639
if(___nl__bool__3){ goto label_29;}
#line 1641
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(569));
#line 1641
if(___nl__bool__3){ goto label_32;}
#line 1643
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(141));
#line 1643
if(___nl__bool__3){ goto label_37;}
#line 1645
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(573));
#line 1645
if(___nl__bool__3){ goto label_42;}
#line 1647
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(142));
#line 1647
if(___nl__bool__3){ goto label_47;}
#line 1647
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 1647
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1647
nl_die_arg(___nl__im__4);
#line 1633
label_20:
;
#line 1634
c_rt_lib0move(&___nl__im__1,___get_global_string_const(145));
#line 1635
goto label_52;
#line 1635
label_23:
;
#line 1636
c_rt_lib0move(&___nl__im__1,___get_global_string_const(419));
#line 1637
goto label_52;
#line 1637
label_26:
;
#line 1638
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 1639
goto label_52;
#line 1639
label_29:
;
#line 1640
c_rt_lib0move(&___nl__im__1,___get_global_string_const(420));
#line 1641
goto label_52;
#line 1641
label_32:
;
#line 1641
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(569)));
#line 1641
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 1642
c_rt_lib0move(&___nl__im__1,___get_global_string_const(569));
#line 1643
goto label_52;
#line 1643
label_37:
;
#line 1643
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(141)));
#line 1643
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1644
c_rt_lib0move(&___nl__im__1,___get_global_string_const(141));
#line 1645
goto label_52;
#line 1645
label_42:
;
#line 1645
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(573)));
#line 1645
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1646
c_rt_lib0move(&___nl__im__1,___get_global_string_const(517));
#line 1647
goto label_52;
#line 1647
label_47:
;
#line 1647
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(142)));
#line 1647
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1648
c_rt_lib0move(&___nl__im__1,___get_global_string_const(142));
#line 1649
goto label_52;
#line 1649
label_52:
;
#line 1650
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(367)));
#line 1650
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(241));
#line 1650
if(___nl__bool__14){ goto label_61;}
#line 1651
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(434));
#line 1651
if(___nl__bool__14){ goto label_63;}
#line 1651
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 1651
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 1651
nl_die_arg(___nl__im__15);
#line 1650
label_61:
;
#line 1651
goto label_68;
#line 1651
label_63:
;
#line 1652
c_rt_lib0move(&___nl__im__16,___get_global_string_const(653));
#line 1652
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 1652
c_rt_lib0clear(&___nl__im__16);
#line 1653
goto label_68;
#line 1653
label_68:
;
#line 1654
c_rt_lib0move(&___nl__im__18,___get_global_string_const(654));
#line 1654
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(240)));
#line 1654
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 1654
c_rt_lib0clear(&___nl__im__20);
#line 1654
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 1654
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 1654
c_rt_lib0clear(&___nl__im__18);
#line 1654
//clear ___nl__int__19;
#line 1654
c_rt_lib0clear(&___nl__string__21);
#line 1654
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 1654
c_rt_lib0clear(&___nl__im__17);
#line 1655
c_rt_lib0clear(&___nl__im__0);
#line 1655
c_rt_lib0clear(&___nl__im__2);
#line 1655
//clear ___nl__bool__3;
#line 1655
c_rt_lib0clear(&___nl__im__4);
#line 1655
c_rt_lib0clear(&___nl__im__5);
#line 1655
c_rt_lib0clear(&___nl__im__6);
#line 1655
c_rt_lib0clear(&___nl__im__7);
#line 1655
c_rt_lib0clear(&___nl__im__8);
#line 1655
c_rt_lib0clear(&___nl__im__9);
#line 1655
c_rt_lib0clear(&___nl__im__10);
#line 1655
c_rt_lib0clear(&___nl__im__11);
#line 1655
c_rt_lib0clear(&___nl__im__12);
#line 1655
c_rt_lib0clear(&___nl__im__13);
#line 1655
//clear ___nl__bool__14;
#line 1655
c_rt_lib0clear(&___nl__im__15);
#line 1655
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_empty_value(nlasm0reg_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
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
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 1659
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(145));
#line 1659
if(___nl__bool__1){ goto label_19;}
#line 1661
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 1661
if(___nl__bool__1){ goto label_26;}
#line 1663
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1663
if(___nl__bool__1){ goto label_34;}
#line 1665
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(420));
#line 1665
if(___nl__bool__1){ goto label_43;}
#line 1667
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(569));
#line 1667
if(___nl__bool__1){ goto label_53;}
#line 1669
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(141));
#line 1669
if(___nl__bool__1){ goto label_59;}
#line 1671
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(573));
#line 1671
if(___nl__bool__1){ goto label_65;}
#line 1673
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(142));
#line 1673
if(___nl__bool__1){ goto label_71;}
#line 1673
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 1673
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 1673
nl_die_arg(___nl__im__2);
#line 1659
label_19:
;
#line 1660
c_rt_lib0move(&___nl__im__3,___get_global_string_const(593));
#line 1660
c_rt_lib0clear(&___nl__im__0);
#line 1660
//clear ___nl__bool__1;
#line 1660
c_rt_lib0clear(&___nl__im__2);
#line 1660
return ___nl__im__3;
#line 1661
goto label_77;
#line 1661
label_26:
;
#line 1662
c_rt_lib0move(&___nl__im__4,___get_global_string_const(20));
#line 1662
c_rt_lib0clear(&___nl__im__0);
#line 1662
//clear ___nl__bool__1;
#line 1662
c_rt_lib0clear(&___nl__im__2);
#line 1662
c_rt_lib0clear(&___nl__im__3);
#line 1662
return ___nl__im__4;
#line 1663
goto label_77;
#line 1663
label_34:
;
#line 1664
c_rt_lib0move(&___nl__im__5,___get_global_string_const(582));
#line 1664
c_rt_lib0clear(&___nl__im__0);
#line 1664
//clear ___nl__bool__1;
#line 1664
c_rt_lib0clear(&___nl__im__2);
#line 1664
c_rt_lib0clear(&___nl__im__3);
#line 1664
c_rt_lib0clear(&___nl__im__4);
#line 1664
return ___nl__im__5;
#line 1665
goto label_77;
#line 1665
label_43:
;
#line 1666
c_rt_lib0move(&___nl__im__6,___get_global_string_const(593));
#line 1666
c_rt_lib0clear(&___nl__im__0);
#line 1666
//clear ___nl__bool__1;
#line 1666
c_rt_lib0clear(&___nl__im__2);
#line 1666
c_rt_lib0clear(&___nl__im__3);
#line 1666
c_rt_lib0clear(&___nl__im__4);
#line 1666
c_rt_lib0clear(&___nl__im__5);
#line 1666
return ___nl__im__6;
#line 1667
goto label_77;
#line 1667
label_53:
;
#line 1667
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(569)));
#line 1667
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1668
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1668
nl_die_arg(___nl__im__9);
#line 1669
goto label_77;
#line 1669
label_59:
;
#line 1669
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(141)));
#line 1669
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1670
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 1670
nl_die_arg(___nl__im__12);
#line 1671
goto label_77;
#line 1671
label_65:
;
#line 1671
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(573)));
#line 1671
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1672
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1672
nl_die_arg(___nl__im__15);
#line 1673
goto label_77;
#line 1673
label_71:
;
#line 1673
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(142)));
#line 1673
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1674
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1674
nl_die_arg(___nl__im__18);
#line 1675
goto label_77;
#line 1675
label_77:
;
return NULL;

}

ImmT  generator_c_priv0get_additional_type_functions_decl(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,generator_c0state_t0type* ___ref___rec__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT * ___nl__im_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT * ___nl__im_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT * ___nl__im_ptr__43 = NULL;
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
ImmT * ___nl__im_ptr__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT * ___nl__im_ptr__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT * ___nl__im_ptr__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT * ___nl__im_ptr__75 = NULL;
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
ImmT * ___nl__im_ptr__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT * ___nl__im_ptr__93 = NULL;
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
ImmT * ___nl__im_ptr__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT * ___nl__im_ptr__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT * ___nl__im_ptr__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
#line 1680
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1681
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 1681
if(___nl__bool__5){ goto label_34;}
#line 1682
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 1682
if(___nl__bool__5){ goto label_36;}
#line 1683
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1683
if(___nl__bool__5){ goto label_40;}
#line 1689
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 1689
if(___nl__bool__5){ goto label_119;}
#line 1690
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1690
if(___nl__bool__5){ goto label_123;}
#line 1695
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 1695
if(___nl__bool__5){ goto label_187;}
#line 1696
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1696
if(___nl__bool__5){ goto label_191;}
#line 1699
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 1699
if(___nl__bool__5){ goto label_225;}
#line 1700
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 1700
if(___nl__bool__5){ goto label_229;}
#line 1701
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1701
if(___nl__bool__5){ goto label_231;}
#line 1702
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1702
if(___nl__bool__5){ goto label_233;}
#line 1703
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1703
if(___nl__bool__5){ goto label_235;}
#line 1704
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1704
if(___nl__bool__5){ goto label_237;}
#line 1705
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1705
if(___nl__bool__5){ goto label_241;}
#line 1709
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1709
if(___nl__bool__5){ goto label_290;}
#line 1709
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1709
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__1));
#line 1709
nl_die_arg(___nl__im__6);
#line 1681
label_34:
;
#line 1682
goto label_292;
#line 1682
label_36:
;
#line 1682
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 1682
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1683
goto label_292;
#line 1683
label_40:
;
#line 1683
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 1683
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1684
___nl__im_ptr__15 = &((*___ref___rec__2).mod_name0field);
#line 1684
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1684
___nl__im_ptr__15 = NULL;
#line 1684
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_array_push_fun_header(___nl__im__0, ___nl__im__9, ___nl__im__14, ___nl__bool__3));
#line 1684
c_rt_lib0clear(&___nl__im__14);
#line 1684
c_rt_lib0move(&___nl__im__16,___get_global_string_const(454));
#line 1684
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 1684
c_rt_lib0clear(&___nl__im__13);
#line 1684
c_rt_lib0clear(&___nl__im__16);
#line 1684
c_rt_lib0move(&___nl__im__17, string0lf());
#line 1684
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 1684
c_rt_lib0clear(&___nl__im__12);
#line 1684
c_rt_lib0clear(&___nl__im__17);
#line 1684
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1684
c_rt_lib0clear(&___nl__im__11);
#line 1685
___nl__im_ptr__22 = &((*___ref___rec__2).mod_name0field);
#line 1685
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1685
___nl__im_ptr__22 = NULL;
#line 1685
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_array_get_fun_header(___nl__im__0, ___nl__im__9, ___nl__im__21, ___nl__bool__3));
#line 1685
c_rt_lib0clear(&___nl__im__21);
#line 1685
c_rt_lib0move(&___nl__im__23,___get_global_string_const(454));
#line 1685
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__23));
#line 1685
c_rt_lib0clear(&___nl__im__20);
#line 1685
c_rt_lib0clear(&___nl__im__23);
#line 1685
c_rt_lib0move(&___nl__im__24, string0lf());
#line 1685
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__24));
#line 1685
c_rt_lib0clear(&___nl__im__19);
#line 1685
c_rt_lib0clear(&___nl__im__24);
#line 1685
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__18));
#line 1685
c_rt_lib0clear(&___nl__im__18);
#line 1686
___nl__im_ptr__29 = &((*___ref___rec__2).mod_name0field);
#line 1686
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1686
___nl__im_ptr__29 = NULL;
#line 1686
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_array_len_fun_header(___nl__im__0, ___nl__im__28, ___nl__bool__3));
#line 1686
c_rt_lib0clear(&___nl__im__28);
#line 1686
c_rt_lib0move(&___nl__im__30,___get_global_string_const(454));
#line 1686
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 1686
c_rt_lib0clear(&___nl__im__27);
#line 1686
c_rt_lib0clear(&___nl__im__30);
#line 1686
c_rt_lib0move(&___nl__im__31, string0lf());
#line 1686
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 1686
c_rt_lib0clear(&___nl__im__26);
#line 1686
c_rt_lib0clear(&___nl__im__31);
#line 1686
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__25));
#line 1686
c_rt_lib0clear(&___nl__im__25);
#line 1687
___nl__im_ptr__36 = &((*___ref___rec__2).mod_name0field);
#line 1687
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 1687
___nl__im_ptr__36 = NULL;
#line 1687
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_array_clean_fun_header(___nl__im__0, ___nl__im__35, ___nl__bool__3));
#line 1687
c_rt_lib0clear(&___nl__im__35);
#line 1687
c_rt_lib0move(&___nl__im__37,___get_global_string_const(454));
#line 1687
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__37));
#line 1687
c_rt_lib0clear(&___nl__im__34);
#line 1687
c_rt_lib0clear(&___nl__im__37);
#line 1687
c_rt_lib0move(&___nl__im__38, string0lf());
#line 1687
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__38));
#line 1687
c_rt_lib0clear(&___nl__im__33);
#line 1687
c_rt_lib0clear(&___nl__im__38);
#line 1687
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__32));
#line 1687
c_rt_lib0clear(&___nl__im__32);
#line 1688
___nl__im_ptr__43 = &((*___ref___rec__2).mod_name0field);
#line 1688
c_rt_lib0copy(&___nl__im__42, (*___nl__im_ptr__43));
#line 1688
___nl__im_ptr__43 = NULL;
#line 1688
c_rt_lib0move(&___nl__im__41, generator_c_priv0get_array_free_fun_header(___nl__im__0, ___nl__im__42, ___nl__bool__3));
#line 1688
c_rt_lib0clear(&___nl__im__42);
#line 1688
c_rt_lib0move(&___nl__im__44,___get_global_string_const(454));
#line 1688
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1688
c_rt_lib0clear(&___nl__im__41);
#line 1688
c_rt_lib0clear(&___nl__im__44);
#line 1688
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1688
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__45));
#line 1688
c_rt_lib0clear(&___nl__im__40);
#line 1688
c_rt_lib0clear(&___nl__im__45);
#line 1688
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__39));
#line 1688
c_rt_lib0clear(&___nl__im__39);
#line 1689
goto label_292;
#line 1689
label_119:
;
#line 1689
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 1689
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 1690
goto label_292;
#line 1690
label_123:
;
#line 1690
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 1690
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 1691
___nl__im_ptr__54 = &((*___ref___rec__2).mod_name0field);
#line 1691
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 1691
___nl__im_ptr__54 = NULL;
#line 1691
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_hash_get_fun_header(___nl__im__0, ___nl__im__48, ___nl__im__53, ___nl__bool__3));
#line 1691
c_rt_lib0clear(&___nl__im__53);
#line 1691
c_rt_lib0move(&___nl__im__55,___get_global_string_const(454));
#line 1691
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__55));
#line 1691
c_rt_lib0clear(&___nl__im__52);
#line 1691
c_rt_lib0clear(&___nl__im__55);
#line 1691
c_rt_lib0move(&___nl__im__56, string0lf());
#line 1691
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__56));
#line 1691
c_rt_lib0clear(&___nl__im__51);
#line 1691
c_rt_lib0clear(&___nl__im__56);
#line 1691
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__50));
#line 1691
c_rt_lib0clear(&___nl__im__50);
#line 1692
___nl__im_ptr__61 = &((*___ref___rec__2).mod_name0field);
#line 1692
c_rt_lib0copy(&___nl__im__60, (*___nl__im_ptr__61));
#line 1692
___nl__im_ptr__61 = NULL;
#line 1692
c_rt_lib0move(&___nl__im__59, generator_c_priv0get_hash_next_iter_fun_header(___nl__im__0, ___nl__im__60, ___nl__bool__3));
#line 1692
c_rt_lib0clear(&___nl__im__60);
#line 1692
c_rt_lib0move(&___nl__im__62,___get_global_string_const(454));
#line 1692
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__62));
#line 1692
c_rt_lib0clear(&___nl__im__59);
#line 1692
c_rt_lib0clear(&___nl__im__62);
#line 1692
c_rt_lib0move(&___nl__im__63, string0lf());
#line 1692
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__63));
#line 1692
c_rt_lib0clear(&___nl__im__58);
#line 1692
c_rt_lib0clear(&___nl__im__63);
#line 1692
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__57));
#line 1692
c_rt_lib0clear(&___nl__im__57);
#line 1693
___nl__im_ptr__68 = &((*___ref___rec__2).mod_name0field);
#line 1693
c_rt_lib0copy(&___nl__im__67, (*___nl__im_ptr__68));
#line 1693
___nl__im_ptr__68 = NULL;
#line 1693
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_hash_clean_fun_header(___nl__im__0, ___nl__im__67, ___nl__bool__3));
#line 1693
c_rt_lib0clear(&___nl__im__67);
#line 1693
c_rt_lib0move(&___nl__im__69,___get_global_string_const(454));
#line 1693
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 1693
c_rt_lib0clear(&___nl__im__66);
#line 1693
c_rt_lib0clear(&___nl__im__69);
#line 1693
c_rt_lib0move(&___nl__im__70, string0lf());
#line 1693
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__70));
#line 1693
c_rt_lib0clear(&___nl__im__65);
#line 1693
c_rt_lib0clear(&___nl__im__70);
#line 1693
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__64));
#line 1693
c_rt_lib0clear(&___nl__im__64);
#line 1694
___nl__im_ptr__75 = &((*___ref___rec__2).mod_name0field);
#line 1694
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 1694
___nl__im_ptr__75 = NULL;
#line 1694
c_rt_lib0move(&___nl__im__73, generator_c_priv0get_hash_free_fun_header(___nl__im__0, ___nl__im__74, ___nl__bool__3));
#line 1694
c_rt_lib0clear(&___nl__im__74);
#line 1694
c_rt_lib0move(&___nl__im__76,___get_global_string_const(454));
#line 1694
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__76));
#line 1694
c_rt_lib0clear(&___nl__im__73);
#line 1694
c_rt_lib0clear(&___nl__im__76);
#line 1694
c_rt_lib0move(&___nl__im__77, string0lf());
#line 1694
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__77));
#line 1694
c_rt_lib0clear(&___nl__im__72);
#line 1694
c_rt_lib0clear(&___nl__im__77);
#line 1694
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__71));
#line 1694
c_rt_lib0clear(&___nl__im__71);
#line 1695
goto label_292;
#line 1695
label_187:
;
#line 1695
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 1695
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 1696
goto label_292;
#line 1696
label_191:
;
#line 1696
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 1696
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1697
___nl__im_ptr__86 = &((*___ref___rec__2).mod_name0field);
#line 1697
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 1697
___nl__im_ptr__86 = NULL;
#line 1697
c_rt_lib0move(&___nl__im__84, generator_c_priv0get_rec_clean_fun_header(___nl__im__0, ___nl__im__85, ___nl__bool__3));
#line 1697
c_rt_lib0clear(&___nl__im__85);
#line 1697
c_rt_lib0move(&___nl__im__87,___get_global_string_const(454));
#line 1697
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 1697
c_rt_lib0clear(&___nl__im__84);
#line 1697
c_rt_lib0clear(&___nl__im__87);
#line 1697
c_rt_lib0move(&___nl__im__88, string0lf());
#line 1697
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__88));
#line 1697
c_rt_lib0clear(&___nl__im__83);
#line 1697
c_rt_lib0clear(&___nl__im__88);
#line 1697
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__82));
#line 1697
c_rt_lib0clear(&___nl__im__82);
#line 1698
___nl__im_ptr__93 = &((*___ref___rec__2).mod_name0field);
#line 1698
c_rt_lib0copy(&___nl__im__92, (*___nl__im_ptr__93));
#line 1698
___nl__im_ptr__93 = NULL;
#line 1698
c_rt_lib0move(&___nl__im__91, generator_c_priv0get_rec_free_fun_header(___nl__im__0, ___nl__im__92, ___nl__bool__3));
#line 1698
c_rt_lib0clear(&___nl__im__92);
#line 1698
c_rt_lib0move(&___nl__im__94,___get_global_string_const(454));
#line 1698
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__94));
#line 1698
c_rt_lib0clear(&___nl__im__91);
#line 1698
c_rt_lib0clear(&___nl__im__94);
#line 1698
c_rt_lib0move(&___nl__im__95, string0lf());
#line 1698
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__95));
#line 1698
c_rt_lib0clear(&___nl__im__90);
#line 1698
c_rt_lib0clear(&___nl__im__95);
#line 1698
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__89));
#line 1698
c_rt_lib0clear(&___nl__im__89);
#line 1699
goto label_292;
#line 1699
label_225:
;
#line 1699
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 1699
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 1700
goto label_292;
#line 1700
label_229:
;
#line 1701
goto label_292;
#line 1701
label_231:
;
#line 1702
goto label_292;
#line 1702
label_233:
;
#line 1703
goto label_292;
#line 1703
label_235:
;
#line 1704
goto label_292;
#line 1704
label_237:
;
#line 1704
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(12)));
#line 1704
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 1705
goto label_292;
#line 1705
label_241:
;
#line 1705
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 1705
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 1706
___nl__im_ptr__106 = &((*___ref___rec__2).mod_name0field);
#line 1706
c_rt_lib0copy(&___nl__im__105, (*___nl__im_ptr__106));
#line 1706
___nl__im_ptr__106 = NULL;
#line 1706
c_rt_lib0move(&___nl__im__104, generator_c_priv0get_variant_make_fun_header(___nl__im__0, ___nl__im__105, ___nl__bool__3));
#line 1706
c_rt_lib0clear(&___nl__im__105);
#line 1706
c_rt_lib0move(&___nl__im__107,___get_global_string_const(454));
#line 1706
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__107));
#line 1706
c_rt_lib0clear(&___nl__im__104);
#line 1706
c_rt_lib0clear(&___nl__im__107);
#line 1706
c_rt_lib0move(&___nl__im__108, string0lf());
#line 1706
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__108));
#line 1706
c_rt_lib0clear(&___nl__im__103);
#line 1706
c_rt_lib0clear(&___nl__im__108);
#line 1706
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__102));
#line 1706
c_rt_lib0clear(&___nl__im__102);
#line 1707
___nl__im_ptr__113 = &((*___ref___rec__2).mod_name0field);
#line 1707
c_rt_lib0copy(&___nl__im__112, (*___nl__im_ptr__113));
#line 1707
___nl__im_ptr__113 = NULL;
#line 1707
c_rt_lib0move(&___nl__im__111, generator_c_priv0get_variant_clean_fun_header(___nl__im__0, ___nl__im__112, ___nl__bool__3));
#line 1707
c_rt_lib0clear(&___nl__im__112);
#line 1707
c_rt_lib0move(&___nl__im__114,___get_global_string_const(454));
#line 1707
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__114));
#line 1707
c_rt_lib0clear(&___nl__im__111);
#line 1707
c_rt_lib0clear(&___nl__im__114);
#line 1707
c_rt_lib0move(&___nl__im__115, string0lf());
#line 1707
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__115));
#line 1707
c_rt_lib0clear(&___nl__im__110);
#line 1707
c_rt_lib0clear(&___nl__im__115);
#line 1707
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__109));
#line 1707
c_rt_lib0clear(&___nl__im__109);
#line 1708
___nl__im_ptr__120 = &((*___ref___rec__2).mod_name0field);
#line 1708
c_rt_lib0copy(&___nl__im__119, (*___nl__im_ptr__120));
#line 1708
___nl__im_ptr__120 = NULL;
#line 1708
c_rt_lib0move(&___nl__im__118, generator_c_priv0get_variant_free_fun_header(___nl__im__0, ___nl__im__119, ___nl__bool__3));
#line 1708
c_rt_lib0clear(&___nl__im__119);
#line 1708
c_rt_lib0move(&___nl__im__121,___get_global_string_const(454));
#line 1708
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__121));
#line 1708
c_rt_lib0clear(&___nl__im__118);
#line 1708
c_rt_lib0clear(&___nl__im__121);
#line 1708
c_rt_lib0move(&___nl__im__122, string0lf());
#line 1708
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__122));
#line 1708
c_rt_lib0clear(&___nl__im__117);
#line 1708
c_rt_lib0clear(&___nl__im__122);
#line 1708
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__116));
#line 1708
c_rt_lib0clear(&___nl__im__116);
#line 1709
goto label_292;
#line 1709
label_290:
;
#line 1710
goto label_292;
#line 1710
label_292:
;
#line 1711
c_rt_lib0clear(&___nl__im__0);
#line 1711
c_rt_lib0clear(&___nl__im__1);
#line 1711
//clear ___nl__bool__3;
#line 1711
//clear ___nl__bool__5;
#line 1711
c_rt_lib0clear(&___nl__im__6);
#line 1711
c_rt_lib0clear(&___nl__im__7);
#line 1711
c_rt_lib0clear(&___nl__im__8);
#line 1711
c_rt_lib0clear(&___nl__im__9);
#line 1711
c_rt_lib0clear(&___nl__im__10);
#line 1711
c_rt_lib0clear(&___nl__im__46);
#line 1711
c_rt_lib0clear(&___nl__im__47);
#line 1711
c_rt_lib0clear(&___nl__im__48);
#line 1711
c_rt_lib0clear(&___nl__im__49);
#line 1711
c_rt_lib0clear(&___nl__im__78);
#line 1711
c_rt_lib0clear(&___nl__im__79);
#line 1711
c_rt_lib0clear(&___nl__im__80);
#line 1711
c_rt_lib0clear(&___nl__im__81);
#line 1711
c_rt_lib0clear(&___nl__im__96);
#line 1711
c_rt_lib0clear(&___nl__im__97);
#line 1711
c_rt_lib0clear(&___nl__im__98);
#line 1711
c_rt_lib0clear(&___nl__im__99);
#line 1711
c_rt_lib0clear(&___nl__im__100);
#line 1711
c_rt_lib0clear(&___nl__im__101);
#line 1711
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_additional_type_functions_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,generator_c0state_t0type* ___ref___rec__2,ImmT  ___nl__im__3,bool  ___nl__bool__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT * ___nl__im_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT * ___nl__im_ptr__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT * ___nl__im_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT * ___nl__im_ptr__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
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
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT * ___nl__im_ptr__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT * ___nl__im_ptr__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT * ___nl__im_ptr__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT * ___nl__im_ptr__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT * ___nl__im_ptr__94 = NULL;
ImmT  ___nl__im__95 = NULL;
#line 1716
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 1717
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 1717
if(___nl__bool__6){ goto label_34;}
#line 1718
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 1718
if(___nl__bool__6){ goto label_36;}
#line 1719
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1719
if(___nl__bool__6){ goto label_40;}
#line 1725
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 1725
if(___nl__bool__6){ goto label_99;}
#line 1726
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1726
if(___nl__bool__6){ goto label_103;}
#line 1731
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 1731
if(___nl__bool__6){ goto label_151;}
#line 1732
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1732
if(___nl__bool__6){ goto label_155;}
#line 1735
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 1735
if(___nl__bool__6){ goto label_181;}
#line 1736
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 1736
if(___nl__bool__6){ goto label_185;}
#line 1737
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1737
if(___nl__bool__6){ goto label_187;}
#line 1738
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1738
if(___nl__bool__6){ goto label_189;}
#line 1739
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1739
if(___nl__bool__6){ goto label_191;}
#line 1740
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1740
if(___nl__bool__6){ goto label_193;}
#line 1741
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1741
if(___nl__bool__6){ goto label_197;}
#line 1746
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1746
if(___nl__bool__6){ goto label_234;}
#line 1746
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 1746
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__1));
#line 1746
nl_die_arg(___nl__im__7);
#line 1717
label_34:
;
#line 1718
goto label_236;
#line 1718
label_36:
;
#line 1718
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 1718
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1719
goto label_236;
#line 1719
label_40:
;
#line 1719
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 1719
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1720
___nl__im_ptr__15 = &((*___ref___rec__2).mod_name0field);
#line 1720
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1720
___nl__im_ptr__15 = NULL;
#line 1720
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_array_push_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__14, ___nl__bool__4));
#line 1720
c_rt_lib0clear(&___nl__im__14);
#line 1720
c_rt_lib0move(&___nl__im__16, string0lf());
#line 1720
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 1720
c_rt_lib0clear(&___nl__im__13);
#line 1720
c_rt_lib0clear(&___nl__im__16);
#line 1720
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__12));
#line 1720
c_rt_lib0clear(&___nl__im__12);
#line 1721
___nl__im_ptr__20 = &((*___ref___rec__2).mod_name0field);
#line 1721
c_rt_lib0copy(&___nl__im__19, (*___nl__im_ptr__20));
#line 1721
___nl__im_ptr__20 = NULL;
#line 1721
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_array_get_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__19, ___nl__bool__4));
#line 1721
c_rt_lib0clear(&___nl__im__19);
#line 1721
c_rt_lib0move(&___nl__im__21, string0lf());
#line 1721
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__21));
#line 1721
c_rt_lib0clear(&___nl__im__18);
#line 1721
c_rt_lib0clear(&___nl__im__21);
#line 1721
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__17));
#line 1721
c_rt_lib0clear(&___nl__im__17);
#line 1722
___nl__im_ptr__25 = &((*___ref___rec__2).mod_name0field);
#line 1722
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1722
___nl__im_ptr__25 = NULL;
#line 1722
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_array_len_fun_def(___nl__im__0, ___nl__im__24, ___nl__bool__4));
#line 1722
c_rt_lib0clear(&___nl__im__24);
#line 1722
c_rt_lib0move(&___nl__im__26, string0lf());
#line 1722
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 1722
c_rt_lib0clear(&___nl__im__23);
#line 1722
c_rt_lib0clear(&___nl__im__26);
#line 1722
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__22));
#line 1722
c_rt_lib0clear(&___nl__im__22);
#line 1723
___nl__im_ptr__30 = &((*___ref___rec__2).mod_name0field);
#line 1723
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1723
___nl__im_ptr__30 = NULL;
#line 1723
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_array_clean_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__29, ___nl__im__3, ___nl__bool__4));
#line 1723
c_rt_lib0clear(&___nl__im__29);
#line 1723
c_rt_lib0move(&___nl__im__31, string0lf());
#line 1723
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__31));
#line 1723
c_rt_lib0clear(&___nl__im__28);
#line 1723
c_rt_lib0clear(&___nl__im__31);
#line 1723
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__27));
#line 1723
c_rt_lib0clear(&___nl__im__27);
#line 1724
___nl__im_ptr__35 = &((*___ref___rec__2).mod_name0field);
#line 1724
c_rt_lib0copy(&___nl__im__34, (*___nl__im_ptr__35));
#line 1724
___nl__im_ptr__35 = NULL;
#line 1724
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_array_free_fun_def(___nl__im__0, ___nl__im__34, ___nl__bool__4));
#line 1724
c_rt_lib0clear(&___nl__im__34);
#line 1724
c_rt_lib0move(&___nl__im__36, string0lf());
#line 1724
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 1724
c_rt_lib0clear(&___nl__im__33);
#line 1724
c_rt_lib0clear(&___nl__im__36);
#line 1724
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__32));
#line 1724
c_rt_lib0clear(&___nl__im__32);
#line 1725
goto label_236;
#line 1725
label_99:
;
#line 1725
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 1725
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 1726
goto label_236;
#line 1726
label_103:
;
#line 1726
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 1726
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 1727
___nl__im_ptr__44 = &((*___ref___rec__2).mod_name0field);
#line 1727
c_rt_lib0copy(&___nl__im__43, (*___nl__im_ptr__44));
#line 1727
___nl__im_ptr__44 = NULL;
#line 1727
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_hash_get_fun_def(___nl__im__0, ___nl__im__39, ___nl__im__43, ___nl__bool__4));
#line 1727
c_rt_lib0clear(&___nl__im__43);
#line 1727
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1727
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 1727
c_rt_lib0clear(&___nl__im__42);
#line 1727
c_rt_lib0clear(&___nl__im__45);
#line 1727
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__41));
#line 1727
c_rt_lib0clear(&___nl__im__41);
#line 1728
___nl__im_ptr__49 = &((*___ref___rec__2).mod_name0field);
#line 1728
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 1728
___nl__im_ptr__49 = NULL;
#line 1728
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_hash_next_iter_fun_def(___nl__im__0, ___nl__im__48, ___nl__bool__4));
#line 1728
c_rt_lib0clear(&___nl__im__48);
#line 1728
c_rt_lib0move(&___nl__im__50, string0lf());
#line 1728
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__50));
#line 1728
c_rt_lib0clear(&___nl__im__47);
#line 1728
c_rt_lib0clear(&___nl__im__50);
#line 1728
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__46));
#line 1728
c_rt_lib0clear(&___nl__im__46);
#line 1729
___nl__im_ptr__54 = &((*___ref___rec__2).mod_name0field);
#line 1729
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 1729
___nl__im_ptr__54 = NULL;
#line 1729
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_hash_clean_fun_def(___nl__im__0, ___nl__im__39, ___nl__im__53, ___nl__im__3, ___nl__bool__4));
#line 1729
c_rt_lib0clear(&___nl__im__53);
#line 1729
c_rt_lib0move(&___nl__im__55, string0lf());
#line 1729
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__55));
#line 1729
c_rt_lib0clear(&___nl__im__52);
#line 1729
c_rt_lib0clear(&___nl__im__55);
#line 1729
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__51));
#line 1729
c_rt_lib0clear(&___nl__im__51);
#line 1730
___nl__im_ptr__59 = &((*___ref___rec__2).mod_name0field);
#line 1730
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 1730
___nl__im_ptr__59 = NULL;
#line 1730
c_rt_lib0move(&___nl__im__57, generator_c_priv0get_hash_free_fun_def(___nl__im__0, ___nl__im__58, ___nl__bool__4));
#line 1730
c_rt_lib0clear(&___nl__im__58);
#line 1730
c_rt_lib0move(&___nl__im__60, string0lf());
#line 1730
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 1730
c_rt_lib0clear(&___nl__im__57);
#line 1730
c_rt_lib0clear(&___nl__im__60);
#line 1730
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__56));
#line 1730
c_rt_lib0clear(&___nl__im__56);
#line 1731
goto label_236;
#line 1731
label_151:
;
#line 1731
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 1731
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 1732
goto label_236;
#line 1732
label_155:
;
#line 1732
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 1732
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 1733
___nl__im_ptr__68 = &((*___ref___rec__2).mod_name0field);
#line 1733
c_rt_lib0copy(&___nl__im__67, (*___nl__im_ptr__68));
#line 1733
___nl__im_ptr__68 = NULL;
#line 1733
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_rec_clean_fun_def(___nl__im__0, ___nl__im__63, ___nl__im__67, ___nl__im__3, ___nl__bool__4));
#line 1733
c_rt_lib0clear(&___nl__im__67);
#line 1733
c_rt_lib0move(&___nl__im__69, string0lf());
#line 1733
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 1733
c_rt_lib0clear(&___nl__im__66);
#line 1733
c_rt_lib0clear(&___nl__im__69);
#line 1733
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__65));
#line 1733
c_rt_lib0clear(&___nl__im__65);
#line 1734
___nl__im_ptr__73 = &((*___ref___rec__2).mod_name0field);
#line 1734
c_rt_lib0copy(&___nl__im__72, (*___nl__im_ptr__73));
#line 1734
___nl__im_ptr__73 = NULL;
#line 1734
c_rt_lib0move(&___nl__im__71, generator_c_priv0get_rec_free_fun_def(___nl__im__0, ___nl__im__72, ___nl__bool__4));
#line 1734
c_rt_lib0clear(&___nl__im__72);
#line 1734
c_rt_lib0move(&___nl__im__74, string0lf());
#line 1734
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__74));
#line 1734
c_rt_lib0clear(&___nl__im__71);
#line 1734
c_rt_lib0clear(&___nl__im__74);
#line 1734
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__70));
#line 1734
c_rt_lib0clear(&___nl__im__70);
#line 1735
goto label_236;
#line 1735
label_181:
;
#line 1735
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 1735
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 1736
goto label_236;
#line 1736
label_185:
;
#line 1737
goto label_236;
#line 1737
label_187:
;
#line 1738
goto label_236;
#line 1738
label_189:
;
#line 1739
goto label_236;
#line 1739
label_191:
;
#line 1740
goto label_236;
#line 1740
label_193:
;
#line 1740
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(12)));
#line 1740
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1741
goto label_236;
#line 1741
label_197:
;
#line 1741
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 1741
c_rt_lib0copy(&___nl__im__79, ___nl__im__80);
#line 1742
___nl__im_ptr__84 = &((*___ref___rec__2).mod_name0field);
#line 1742
c_rt_lib0copy(&___nl__im__83, (*___nl__im_ptr__84));
#line 1742
___nl__im_ptr__84 = NULL;
#line 1742
c_rt_lib0move(&___nl__im__82, generator_c_priv0get_variant_make_fun_def(___nl__im__0, ___nl__im__83, ___nl__bool__4));
#line 1742
c_rt_lib0clear(&___nl__im__83);
#line 1742
c_rt_lib0move(&___nl__im__85, string0lf());
#line 1742
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__85));
#line 1742
c_rt_lib0clear(&___nl__im__82);
#line 1742
c_rt_lib0clear(&___nl__im__85);
#line 1742
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__81));
#line 1742
c_rt_lib0clear(&___nl__im__81);
#line 1743
___nl__im_ptr__89 = &((*___ref___rec__2).mod_name0field);
#line 1743
c_rt_lib0copy(&___nl__im__88, (*___nl__im_ptr__89));
#line 1743
___nl__im_ptr__89 = NULL;
#line 1743
c_rt_lib0move(&___nl__im__87, generator_c_priv0get_variant_clean_fun_def(___nl__im__0, ___nl__im__79, ___nl__im__88, ___nl__bool__4));
#line 1743
c_rt_lib0clear(&___nl__im__88);
#line 1744
c_rt_lib0move(&___nl__im__90, string0lf());
#line 1744
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__90));
#line 1744
c_rt_lib0clear(&___nl__im__87);
#line 1744
c_rt_lib0clear(&___nl__im__90);
#line 1744
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__86));
#line 1744
c_rt_lib0clear(&___nl__im__86);
#line 1745
___nl__im_ptr__94 = &((*___ref___rec__2).mod_name0field);
#line 1745
c_rt_lib0copy(&___nl__im__93, (*___nl__im_ptr__94));
#line 1745
___nl__im_ptr__94 = NULL;
#line 1745
c_rt_lib0move(&___nl__im__92, generator_c_priv0get_variant_free_fun_def(___nl__im__0, ___nl__im__93, ___nl__bool__4));
#line 1745
c_rt_lib0clear(&___nl__im__93);
#line 1745
c_rt_lib0move(&___nl__im__95, string0lf());
#line 1745
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__95));
#line 1745
c_rt_lib0clear(&___nl__im__92);
#line 1745
c_rt_lib0clear(&___nl__im__95);
#line 1745
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__91));
#line 1745
c_rt_lib0clear(&___nl__im__91);
#line 1746
goto label_236;
#line 1746
label_234:
;
#line 1747
goto label_236;
#line 1747
label_236:
;
#line 1748
c_rt_lib0clear(&___nl__im__0);
#line 1748
c_rt_lib0clear(&___nl__im__1);
#line 1748
c_rt_lib0clear(&___nl__im__3);
#line 1748
//clear ___nl__bool__4;
#line 1748
//clear ___nl__bool__6;
#line 1748
c_rt_lib0clear(&___nl__im__7);
#line 1748
c_rt_lib0clear(&___nl__im__8);
#line 1748
c_rt_lib0clear(&___nl__im__9);
#line 1748
c_rt_lib0clear(&___nl__im__10);
#line 1748
c_rt_lib0clear(&___nl__im__11);
#line 1748
c_rt_lib0clear(&___nl__im__37);
#line 1748
c_rt_lib0clear(&___nl__im__38);
#line 1748
c_rt_lib0clear(&___nl__im__39);
#line 1748
c_rt_lib0clear(&___nl__im__40);
#line 1748
c_rt_lib0clear(&___nl__im__61);
#line 1748
c_rt_lib0clear(&___nl__im__62);
#line 1748
c_rt_lib0clear(&___nl__im__63);
#line 1748
c_rt_lib0clear(&___nl__im__64);
#line 1748
c_rt_lib0clear(&___nl__im__75);
#line 1748
c_rt_lib0clear(&___nl__im__76);
#line 1748
c_rt_lib0clear(&___nl__im__77);
#line 1748
c_rt_lib0clear(&___nl__im__78);
#line 1748
c_rt_lib0clear(&___nl__im__79);
#line 1748
c_rt_lib0clear(&___nl__im__80);
#line 1748
return ___nl__im__5;
return NULL;

}

ImmT  generator_c_priv0get_spec_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 1753
if(___nl__bool__3){ goto label_3;}
#line 1753
c_rt_lib0move(&___nl__im__7,___get_global_string_const(36));
#line 1753
goto label_7;
#line 1753
label_3:
;
#line 1753
c_rt_lib0move(&___nl__im__8,___get_global_string_const(20));
#line 1753
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 1753
c_rt_lib0clear(&___nl__im__8);
#line 1753
label_7:
;
#line 1753
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 1753
c_rt_lib0clear(&___nl__im__7);
#line 1753
c_rt_lib0move(&___nl__im__9,___get_global_string_const(20));
#line 1753
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 1753
c_rt_lib0clear(&___nl__im__6);
#line 1753
c_rt_lib0clear(&___nl__im__9);
#line 1753
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__2));
#line 1753
c_rt_lib0clear(&___nl__im__5);
#line 1753
c_rt_lib0clear(&___nl__im__0);
#line 1753
c_rt_lib0clear(&___nl__im__1);
#line 1753
c_rt_lib0clear(&___nl__im__2);
#line 1753
//clear ___nl__bool__3;
#line 1753
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_array_push_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1757
if(___nl__bool__2){ goto label_3;}
#line 1757
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1757
goto label_5;
#line 1757
label_3:
;
#line 1757
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 1757
label_5:
;
#line 1757
c_rt_lib0move(&___nl__im__5,___get_global_string_const(655));
#line 1757
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__4, ___nl__im__5, ___nl__bool__2));
#line 1757
c_rt_lib0clear(&___nl__im__4);
#line 1757
c_rt_lib0clear(&___nl__im__5);
#line 1757
c_rt_lib0clear(&___nl__im__0);
#line 1757
c_rt_lib0clear(&___nl__im__1);
#line 1757
//clear ___nl__bool__2;
#line 1757
return ___nl__im__3;
#line 1757
c_rt_lib0clear(&___nl__im__0);
#line 1757
c_rt_lib0clear(&___nl__im__1);
#line 1757
//clear ___nl__bool__2;
#line 1757
c_rt_lib0clear(&___nl__im__3);
#line 1757
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_push_fun_header(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
#line 1762
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1763
c_rt_lib0move(&___nl__im__7,___get_global_string_const(495));
#line 1763
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_array_push_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1763
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 1763
c_rt_lib0clear(&___nl__im__7);
#line 1763
c_rt_lib0clear(&___nl__im__8);
#line 1763
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 1763
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 1763
c_rt_lib0clear(&___nl__im__6);
#line 1763
c_rt_lib0clear(&___nl__im__9);
#line 1763
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1763
c_rt_lib0clear(&___nl__im__5);
#line 1764
c_rt_lib0move(&___nl__im__11,___get_global_string_const(656));
#line 1764
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__0, ___nl__im__11));
#line 1764
c_rt_lib0clear(&___nl__im__11);
#line 1764
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__10));
#line 1764
c_rt_lib0clear(&___nl__im__10);
#line 1765
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_type_name(___nl__im__1));
#line 1765
c_rt_lib0move(&___nl__im__14,___get_global_string_const(657));
#line 1765
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 1765
c_rt_lib0clear(&___nl__im__13);
#line 1765
c_rt_lib0clear(&___nl__im__14);
#line 1765
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1765
c_rt_lib0clear(&___nl__im__12);
#line 1766
c_rt_lib0clear(&___nl__im__0);
#line 1766
c_rt_lib0clear(&___nl__im__1);
#line 1766
c_rt_lib0clear(&___nl__im__2);
#line 1766
//clear ___nl__bool__3;
#line 1766
return ___nl__im__4;
#line 1766
c_rt_lib0clear(&___nl__im__0);
#line 1766
c_rt_lib0clear(&___nl__im__1);
#line 1766
c_rt_lib0clear(&___nl__im__2);
#line 1766
//clear ___nl__bool__3;
#line 1766
c_rt_lib0clear(&___nl__im__4);
#line 1766
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_push_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
bool  ___nl__bool__29 = false;
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
#line 1771
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1772
c_rt_lib0move(&___nl__im__5,___get_global_string_const(658));
#line 1773
c_rt_lib0move(&___nl__im__8,___get_global_string_const(591));
#line 1773
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_type_name(___nl__im__1));
#line 1773
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1773
c_rt_lib0clear(&___nl__im__8);
#line 1773
c_rt_lib0clear(&___nl__im__9);
#line 1773
c_rt_lib0move(&___nl__im__10,___get_global_string_const(336));
#line 1773
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1773
c_rt_lib0clear(&___nl__im__7);
#line 1773
c_rt_lib0clear(&___nl__im__10);
#line 1774
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_array_push_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1774
c_rt_lib0move(&___nl__im__23,___get_global_string_const(659));
#line 1774
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1774
c_rt_lib0clear(&___nl__im__22);
#line 1774
c_rt_lib0clear(&___nl__im__23);
#line 1774
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__5));
#line 1774
c_rt_lib0clear(&___nl__im__21);
#line 1776
c_rt_lib0move(&___nl__im__24,___get_global_string_const(389));
#line 1776
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 1776
c_rt_lib0clear(&___nl__im__20);
#line 1776
c_rt_lib0clear(&___nl__im__24);
#line 1776
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 1776
c_rt_lib0clear(&___nl__im__19);
#line 1776
c_rt_lib0move(&___nl__im__25,___get_global_string_const(660));
#line 1776
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 1776
c_rt_lib0clear(&___nl__im__18);
#line 1776
c_rt_lib0clear(&___nl__im__25);
#line 1776
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__5));
#line 1776
c_rt_lib0clear(&___nl__im__17);
#line 1777
c_rt_lib0move(&___nl__im__26,___get_global_string_const(661));
#line 1777
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__26));
#line 1777
c_rt_lib0clear(&___nl__im__16);
#line 1777
c_rt_lib0clear(&___nl__im__26);
#line 1777
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__6));
#line 1777
c_rt_lib0clear(&___nl__im__15);
#line 1781
c_rt_lib0move(&___nl__im__27,___get_global_string_const(662));
#line 1781
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__27));
#line 1781
c_rt_lib0clear(&___nl__im__14);
#line 1781
c_rt_lib0clear(&___nl__im__27);
#line 1781
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 1781
c_rt_lib0clear(&___nl__im__13);
#line 1781
c_rt_lib0move(&___nl__im__28,___get_global_string_const(663));
#line 1781
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__28));
#line 1781
c_rt_lib0clear(&___nl__im__12);
#line 1781
c_rt_lib0clear(&___nl__im__28);
#line 1781
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1781
c_rt_lib0clear(&___nl__im__11);
#line 1785
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1785
if(___nl__bool__29){ goto label_51;}
#line 1785
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1785
label_51:
;
#line 1785
if(___nl__bool__29){ goto label_54;}
#line 1785
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1785
label_54:
;
#line 1785
if(___nl__bool__29){ goto label_57;}
#line 1786
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1786
label_57:
;
#line 1786
if(___nl__bool__29){ goto label_60;}
#line 1786
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1786
label_60:
;
#line 1786
if(___nl__bool__29){ goto label_63;}
#line 1786
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1786
label_63:
;
#line 1786
___nl__bool__29 = !___nl__bool__29;
#line 1786
if(___nl__bool__29){ goto label_70;}
#line 1787
c_rt_lib0move(&___nl__im__30,___get_global_string_const(664));
#line 1787
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__30));
#line 1787
c_rt_lib0clear(&___nl__im__30);
#line 1788
goto label_91;
#line 1788
label_70:
;
#line 1789
c_rt_lib0move(&___nl__im__33,___get_global_string_const(665));
#line 1790
c_rt_lib0move(&___nl__im__35,___get_global_string_const(467));
#line 1790
c_rt_lib0move(&___nl__im__37,___get_global_string_const(666));
#line 1790
c_rt_lib0move(&___nl__im__38,___get_global_string_const(294));
#line 1790
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__38));
#line 1790
c_rt_lib0clear(&___nl__im__37);
#line 1790
c_rt_lib0clear(&___nl__im__38);
#line 1790
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_fun_lib(___nl__im__35, ___nl__im__36));
#line 1790
c_rt_lib0clear(&___nl__im__35);
#line 1790
c_rt_lib0clear(&___nl__im__36);
#line 1790
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 1790
c_rt_lib0clear(&___nl__im__33);
#line 1790
c_rt_lib0clear(&___nl__im__34);
#line 1790
c_rt_lib0move(&___nl__im__39,___get_global_string_const(454));
#line 1790
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 1790
c_rt_lib0clear(&___nl__im__32);
#line 1790
c_rt_lib0clear(&___nl__im__39);
#line 1790
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__31));
#line 1790
c_rt_lib0clear(&___nl__im__31);
#line 1791
goto label_91;
#line 1791
label_91:
;
#line 1791
//clear ___nl__bool__29;
#line 1792
c_rt_lib0move(&___nl__im__40,___get_global_string_const(603));
#line 1792
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__40));
#line 1792
c_rt_lib0clear(&___nl__im__40);
#line 1794
c_rt_lib0clear(&___nl__im__0);
#line 1794
c_rt_lib0clear(&___nl__im__1);
#line 1794
c_rt_lib0clear(&___nl__im__2);
#line 1794
//clear ___nl__bool__3;
#line 1794
c_rt_lib0clear(&___nl__im__5);
#line 1794
c_rt_lib0clear(&___nl__im__6);
#line 1794
return ___nl__im__4;
#line 1794
c_rt_lib0clear(&___nl__im__0);
#line 1794
c_rt_lib0clear(&___nl__im__1);
#line 1794
c_rt_lib0clear(&___nl__im__2);
#line 1794
//clear ___nl__bool__3;
#line 1794
c_rt_lib0clear(&___nl__im__4);
#line 1794
c_rt_lib0clear(&___nl__im__5);
#line 1794
c_rt_lib0clear(&___nl__im__6);
#line 1794
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1798
c_rt_lib0move(&___nl__im__4,___get_global_string_const(667));
#line 1798
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1798
c_rt_lib0clear(&___nl__im__4);
#line 1798
c_rt_lib0clear(&___nl__im__0);
#line 1798
c_rt_lib0clear(&___nl__im__1);
#line 1798
//clear ___nl__bool__2;
#line 1798
return ___nl__im__3;
#line 1798
c_rt_lib0clear(&___nl__im__0);
#line 1798
c_rt_lib0clear(&___nl__im__1);
#line 1798
//clear ___nl__bool__2;
#line 1798
c_rt_lib0clear(&___nl__im__3);
#line 1798
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_get_fun_header(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
#line 1803
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1804
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_type_name(___nl__im__1));
#line 1804
c_rt_lib0move(&___nl__im__9,___get_global_string_const(641));
#line 1804
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1804
c_rt_lib0clear(&___nl__im__8);
#line 1804
c_rt_lib0clear(&___nl__im__9);
#line 1804
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_array_get_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1804
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1804
c_rt_lib0clear(&___nl__im__7);
#line 1804
c_rt_lib0clear(&___nl__im__10);
#line 1804
c_rt_lib0move(&___nl__im__11,___get_global_string_const(469));
#line 1804
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1804
c_rt_lib0clear(&___nl__im__6);
#line 1804
c_rt_lib0clear(&___nl__im__11);
#line 1804
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1804
c_rt_lib0clear(&___nl__im__5);
#line 1805
c_rt_lib0move(&___nl__im__13,___get_global_string_const(656));
#line 1805
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__0, ___nl__im__13));
#line 1805
c_rt_lib0clear(&___nl__im__13);
#line 1805
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1805
c_rt_lib0clear(&___nl__im__12);
#line 1806
c_rt_lib0move(&___nl__im__15, generator_c_priv0int_t());
#line 1806
c_rt_lib0move(&___nl__im__16,___get_global_string_const(668));
#line 1806
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1806
c_rt_lib0clear(&___nl__im__15);
#line 1806
c_rt_lib0clear(&___nl__im__16);
#line 1806
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__14));
#line 1806
c_rt_lib0clear(&___nl__im__14);
#line 1807
c_rt_lib0clear(&___nl__im__0);
#line 1807
c_rt_lib0clear(&___nl__im__1);
#line 1807
c_rt_lib0clear(&___nl__im__2);
#line 1807
//clear ___nl__bool__3;
#line 1807
return ___nl__im__4;
#line 1807
c_rt_lib0clear(&___nl__im__0);
#line 1807
c_rt_lib0clear(&___nl__im__1);
#line 1807
c_rt_lib0clear(&___nl__im__2);
#line 1807
//clear ___nl__bool__3;
#line 1807
c_rt_lib0clear(&___nl__im__4);
#line 1807
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_get_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 1812
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1813
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_array_get_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1813
c_rt_lib0move(&___nl__im__7,___get_global_string_const(669));
#line 1813
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1813
c_rt_lib0clear(&___nl__im__6);
#line 1813
c_rt_lib0clear(&___nl__im__7);
#line 1813
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1813
c_rt_lib0clear(&___nl__im__5);
#line 1819
c_rt_lib0clear(&___nl__im__0);
#line 1819
c_rt_lib0clear(&___nl__im__1);
#line 1819
c_rt_lib0clear(&___nl__im__2);
#line 1819
//clear ___nl__bool__3;
#line 1819
return ___nl__im__4;
#line 1819
c_rt_lib0clear(&___nl__im__0);
#line 1819
c_rt_lib0clear(&___nl__im__1);
#line 1819
c_rt_lib0clear(&___nl__im__2);
#line 1819
//clear ___nl__bool__3;
#line 1819
c_rt_lib0clear(&___nl__im__4);
#line 1819
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_len_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1823
c_rt_lib0move(&___nl__im__4,___get_global_string_const(300));
#line 1823
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1823
c_rt_lib0clear(&___nl__im__4);
#line 1823
c_rt_lib0clear(&___nl__im__0);
#line 1823
c_rt_lib0clear(&___nl__im__1);
#line 1823
//clear ___nl__bool__2;
#line 1823
return ___nl__im__3;
#line 1823
c_rt_lib0clear(&___nl__im__0);
#line 1823
c_rt_lib0clear(&___nl__im__1);
#line 1823
//clear ___nl__bool__2;
#line 1823
c_rt_lib0clear(&___nl__im__3);
#line 1823
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_len_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 1827
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1828
c_rt_lib0move(&___nl__im__6, generator_c_priv0int_t());
#line 1828
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_array_len_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1828
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1828
c_rt_lib0clear(&___nl__im__6);
#line 1828
c_rt_lib0clear(&___nl__im__7);
#line 1828
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 1828
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1828
c_rt_lib0clear(&___nl__im__5);
#line 1828
c_rt_lib0clear(&___nl__im__8);
#line 1828
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1828
c_rt_lib0clear(&___nl__im__4);
#line 1829
c_rt_lib0move(&___nl__im__10,___get_global_string_const(670));
#line 1829
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1829
c_rt_lib0clear(&___nl__im__10);
#line 1829
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1829
c_rt_lib0clear(&___nl__im__9);
#line 1830
c_rt_lib0clear(&___nl__im__0);
#line 1830
c_rt_lib0clear(&___nl__im__1);
#line 1830
//clear ___nl__bool__2;
#line 1830
return ___nl__im__3;
#line 1830
c_rt_lib0clear(&___nl__im__0);
#line 1830
c_rt_lib0clear(&___nl__im__1);
#line 1830
//clear ___nl__bool__2;
#line 1830
c_rt_lib0clear(&___nl__im__3);
#line 1830
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_len_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 1834
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1835
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_array_len_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1835
c_rt_lib0move(&___nl__im__6,___get_global_string_const(671));
#line 1835
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 1835
c_rt_lib0clear(&___nl__im__5);
#line 1835
c_rt_lib0clear(&___nl__im__6);
#line 1835
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1835
c_rt_lib0clear(&___nl__im__4);
#line 1838
c_rt_lib0clear(&___nl__im__0);
#line 1838
c_rt_lib0clear(&___nl__im__1);
#line 1838
//clear ___nl__bool__2;
#line 1838
return ___nl__im__3;
#line 1838
c_rt_lib0clear(&___nl__im__0);
#line 1838
c_rt_lib0clear(&___nl__im__1);
#line 1838
//clear ___nl__bool__2;
#line 1838
c_rt_lib0clear(&___nl__im__3);
#line 1838
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1842
c_rt_lib0move(&___nl__im__4,___get_global_string_const(667));
#line 1842
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1842
c_rt_lib0clear(&___nl__im__4);
#line 1842
c_rt_lib0clear(&___nl__im__0);
#line 1842
c_rt_lib0clear(&___nl__im__1);
#line 1842
//clear ___nl__bool__2;
#line 1842
return ___nl__im__3;
#line 1842
c_rt_lib0clear(&___nl__im__0);
#line 1842
c_rt_lib0clear(&___nl__im__1);
#line 1842
//clear ___nl__bool__2;
#line 1842
c_rt_lib0clear(&___nl__im__3);
#line 1842
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_get_fun_header(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
#line 1847
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1848
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_type_name(___nl__im__1));
#line 1848
c_rt_lib0move(&___nl__im__9,___get_global_string_const(641));
#line 1848
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1848
c_rt_lib0clear(&___nl__im__8);
#line 1848
c_rt_lib0clear(&___nl__im__9);
#line 1848
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_hash_get_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1848
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1848
c_rt_lib0clear(&___nl__im__7);
#line 1848
c_rt_lib0clear(&___nl__im__10);
#line 1848
c_rt_lib0move(&___nl__im__11,___get_global_string_const(469));
#line 1848
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1848
c_rt_lib0clear(&___nl__im__6);
#line 1848
c_rt_lib0clear(&___nl__im__11);
#line 1848
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1848
c_rt_lib0clear(&___nl__im__5);
#line 1849
c_rt_lib0move(&___nl__im__13,___get_global_string_const(672));
#line 1849
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__0, ___nl__im__13));
#line 1849
c_rt_lib0clear(&___nl__im__13);
#line 1849
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1849
c_rt_lib0clear(&___nl__im__12);
#line 1850
c_rt_lib0move(&___nl__im__15, generator_c_priv0im_t());
#line 1850
c_rt_lib0move(&___nl__im__16,___get_global_string_const(673));
#line 1850
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1850
c_rt_lib0clear(&___nl__im__15);
#line 1850
c_rt_lib0clear(&___nl__im__16);
#line 1850
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__14));
#line 1850
c_rt_lib0clear(&___nl__im__14);
#line 1851
c_rt_lib0move(&___nl__im__18, generator_c_priv0bool_t());
#line 1851
c_rt_lib0move(&___nl__im__19,___get_global_string_const(674));
#line 1851
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1851
c_rt_lib0clear(&___nl__im__18);
#line 1851
c_rt_lib0clear(&___nl__im__19);
#line 1851
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__17));
#line 1851
c_rt_lib0clear(&___nl__im__17);
#line 1852
c_rt_lib0clear(&___nl__im__0);
#line 1852
c_rt_lib0clear(&___nl__im__1);
#line 1852
c_rt_lib0clear(&___nl__im__2);
#line 1852
//clear ___nl__bool__3;
#line 1852
return ___nl__im__4;
#line 1852
c_rt_lib0clear(&___nl__im__0);
#line 1852
c_rt_lib0clear(&___nl__im__1);
#line 1852
c_rt_lib0clear(&___nl__im__2);
#line 1852
//clear ___nl__bool__3;
#line 1852
c_rt_lib0clear(&___nl__im__4);
#line 1852
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_get_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
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
ImmT  ___nl__im__33 = NULL;
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
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
#line 1857
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1858
c_rt_lib0move(&___nl__im__5,___get_global_string_const(658));
#line 1859
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_type_name(___nl__im__1));
#line 1860
c_rt_lib0move(&___nl__im__9,___get_global_string_const(591));
#line 1860
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__6));
#line 1860
c_rt_lib0clear(&___nl__im__9);
#line 1860
c_rt_lib0move(&___nl__im__10,___get_global_string_const(336));
#line 1860
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 1860
c_rt_lib0clear(&___nl__im__8);
#line 1860
c_rt_lib0clear(&___nl__im__10);
#line 1861
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_hash_get_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1861
c_rt_lib0move(&___nl__im__41,___get_global_string_const(675));
#line 1861
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 1861
c_rt_lib0clear(&___nl__im__40);
#line 1861
c_rt_lib0clear(&___nl__im__41);
#line 1861
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__5));
#line 1861
c_rt_lib0clear(&___nl__im__39);
#line 1863
c_rt_lib0move(&___nl__im__42,___get_global_string_const(676));
#line 1863
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__42));
#line 1863
c_rt_lib0clear(&___nl__im__38);
#line 1863
c_rt_lib0clear(&___nl__im__42);
#line 1863
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__7));
#line 1863
c_rt_lib0clear(&___nl__im__37);
#line 1865
c_rt_lib0move(&___nl__im__43,___get_global_string_const(677));
#line 1865
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 1865
c_rt_lib0clear(&___nl__im__36);
#line 1865
c_rt_lib0clear(&___nl__im__43);
#line 1866
c_rt_lib0move(&___nl__im__44, generator_c_priv0im_t());
#line 1866
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__44));
#line 1866
c_rt_lib0clear(&___nl__im__35);
#line 1866
c_rt_lib0clear(&___nl__im__44);
#line 1866
c_rt_lib0move(&___nl__im__45,___get_global_string_const(678));
#line 1866
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__45));
#line 1866
c_rt_lib0clear(&___nl__im__34);
#line 1866
c_rt_lib0clear(&___nl__im__45);
#line 1866
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__7));
#line 1866
c_rt_lib0clear(&___nl__im__33);
#line 1867
c_rt_lib0move(&___nl__im__46,___get_global_string_const(679));
#line 1867
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__46));
#line 1867
c_rt_lib0clear(&___nl__im__32);
#line 1867
c_rt_lib0clear(&___nl__im__46);
#line 1868
c_rt_lib0move(&___nl__im__47, generator_c_priv0im_t());
#line 1868
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__47));
#line 1868
c_rt_lib0clear(&___nl__im__31);
#line 1868
c_rt_lib0clear(&___nl__im__47);
#line 1868
c_rt_lib0move(&___nl__im__48,___get_global_string_const(680));
#line 1868
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__48));
#line 1868
c_rt_lib0clear(&___nl__im__30);
#line 1868
c_rt_lib0clear(&___nl__im__48);
#line 1870
c_rt_lib0move(&___nl__im__49, generator_c_priv0int_t());
#line 1870
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__49));
#line 1870
c_rt_lib0clear(&___nl__im__29);
#line 1870
c_rt_lib0clear(&___nl__im__49);
#line 1870
c_rt_lib0move(&___nl__im__50,___get_global_string_const(681));
#line 1870
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__50));
#line 1870
c_rt_lib0clear(&___nl__im__28);
#line 1870
c_rt_lib0clear(&___nl__im__50);
#line 1871
c_rt_lib0move(&___nl__im__51, generator_c_priv0im_t());
#line 1871
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__51));
#line 1871
c_rt_lib0clear(&___nl__im__27);
#line 1871
c_rt_lib0clear(&___nl__im__51);
#line 1871
c_rt_lib0move(&___nl__im__52,___get_global_string_const(682));
#line 1871
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__52));
#line 1871
c_rt_lib0clear(&___nl__im__26);
#line 1871
c_rt_lib0clear(&___nl__im__52);
#line 1871
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__6));
#line 1871
c_rt_lib0clear(&___nl__im__25);
#line 1872
c_rt_lib0move(&___nl__im__53,___get_global_string_const(683));
#line 1872
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__53));
#line 1872
c_rt_lib0clear(&___nl__im__24);
#line 1872
c_rt_lib0clear(&___nl__im__53);
#line 1872
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__7));
#line 1872
c_rt_lib0clear(&___nl__im__23);
#line 1874
c_rt_lib0move(&___nl__im__54,___get_global_string_const(677));
#line 1874
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__54));
#line 1874
c_rt_lib0clear(&___nl__im__22);
#line 1874
c_rt_lib0clear(&___nl__im__54);
#line 1875
c_rt_lib0move(&___nl__im__55, generator_c_priv0im_t());
#line 1875
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__55));
#line 1875
c_rt_lib0clear(&___nl__im__21);
#line 1875
c_rt_lib0clear(&___nl__im__55);
#line 1875
c_rt_lib0move(&___nl__im__56,___get_global_string_const(678));
#line 1875
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__56));
#line 1875
c_rt_lib0clear(&___nl__im__20);
#line 1875
c_rt_lib0clear(&___nl__im__56);
#line 1875
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__7));
#line 1875
c_rt_lib0clear(&___nl__im__19);
#line 1876
c_rt_lib0move(&___nl__im__57,___get_global_string_const(679));
#line 1876
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__57));
#line 1876
c_rt_lib0clear(&___nl__im__18);
#line 1876
c_rt_lib0clear(&___nl__im__57);
#line 1877
c_rt_lib0move(&___nl__im__58, generator_c_priv0im_t());
#line 1877
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__58));
#line 1877
c_rt_lib0clear(&___nl__im__17);
#line 1877
c_rt_lib0clear(&___nl__im__58);
#line 1877
c_rt_lib0move(&___nl__im__59,___get_global_string_const(684));
#line 1877
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__59));
#line 1877
c_rt_lib0clear(&___nl__im__16);
#line 1877
c_rt_lib0clear(&___nl__im__59);
#line 1888
c_rt_lib0move(&___nl__im__60, generator_c_priv0im_t());
#line 1888
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__60));
#line 1888
c_rt_lib0clear(&___nl__im__15);
#line 1888
c_rt_lib0clear(&___nl__im__60);
#line 1888
c_rt_lib0move(&___nl__im__61,___get_global_string_const(685));
#line 1888
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__61));
#line 1888
c_rt_lib0clear(&___nl__im__14);
#line 1888
c_rt_lib0clear(&___nl__im__61);
#line 1888
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 1888
c_rt_lib0clear(&___nl__im__13);
#line 1889
c_rt_lib0move(&___nl__im__62,___get_global_string_const(686));
#line 1889
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__62));
#line 1889
c_rt_lib0clear(&___nl__im__12);
#line 1889
c_rt_lib0clear(&___nl__im__62);
#line 1889
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1889
c_rt_lib0clear(&___nl__im__11);
#line 1905
c_rt_lib0clear(&___nl__im__0);
#line 1905
c_rt_lib0clear(&___nl__im__1);
#line 1905
c_rt_lib0clear(&___nl__im__2);
#line 1905
//clear ___nl__bool__3;
#line 1905
c_rt_lib0clear(&___nl__im__5);
#line 1905
c_rt_lib0clear(&___nl__im__6);
#line 1905
c_rt_lib0clear(&___nl__im__7);
#line 1905
return ___nl__im__4;
#line 1905
c_rt_lib0clear(&___nl__im__0);
#line 1905
c_rt_lib0clear(&___nl__im__1);
#line 1905
c_rt_lib0clear(&___nl__im__2);
#line 1905
//clear ___nl__bool__3;
#line 1905
c_rt_lib0clear(&___nl__im__4);
#line 1905
c_rt_lib0clear(&___nl__im__5);
#line 1905
c_rt_lib0clear(&___nl__im__6);
#line 1905
c_rt_lib0clear(&___nl__im__7);
#line 1905
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_next_iter_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1909
c_rt_lib0move(&___nl__im__4,___get_global_string_const(290));
#line 1909
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1909
c_rt_lib0clear(&___nl__im__4);
#line 1909
c_rt_lib0clear(&___nl__im__0);
#line 1909
c_rt_lib0clear(&___nl__im__1);
#line 1909
//clear ___nl__bool__2;
#line 1909
return ___nl__im__3;
#line 1909
c_rt_lib0clear(&___nl__im__0);
#line 1909
c_rt_lib0clear(&___nl__im__1);
#line 1909
//clear ___nl__bool__2;
#line 1909
c_rt_lib0clear(&___nl__im__3);
#line 1909
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_next_iter_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 1913
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1914
c_rt_lib0move(&___nl__im__6,___get_global_string_const(432));
#line 1914
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1914
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1914
c_rt_lib0clear(&___nl__im__6);
#line 1914
c_rt_lib0clear(&___nl__im__7);
#line 1914
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 1914
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1914
c_rt_lib0clear(&___nl__im__5);
#line 1914
c_rt_lib0clear(&___nl__im__8);
#line 1914
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1914
c_rt_lib0clear(&___nl__im__4);
#line 1915
c_rt_lib0move(&___nl__im__10,___get_global_string_const(672));
#line 1915
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1915
c_rt_lib0clear(&___nl__im__10);
#line 1915
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1915
c_rt_lib0clear(&___nl__im__9);
#line 1916
c_rt_lib0move(&___nl__im__11,___get_global_string_const(687));
#line 1916
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 1916
c_rt_lib0clear(&___nl__im__11);
#line 1917
c_rt_lib0clear(&___nl__im__0);
#line 1917
c_rt_lib0clear(&___nl__im__1);
#line 1917
//clear ___nl__bool__2;
#line 1917
return ___nl__im__3;
#line 1917
c_rt_lib0clear(&___nl__im__0);
#line 1917
c_rt_lib0clear(&___nl__im__1);
#line 1917
//clear ___nl__bool__2;
#line 1917
c_rt_lib0clear(&___nl__im__3);
#line 1917
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_next_iter_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1921
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_hash_next_iter_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1921
c_rt_lib0move(&___nl__im__5,___get_global_string_const(688));
#line 1921
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 1921
c_rt_lib0clear(&___nl__im__4);
#line 1921
c_rt_lib0clear(&___nl__im__5);
#line 1929
c_rt_lib0clear(&___nl__im__0);
#line 1929
c_rt_lib0clear(&___nl__im__1);
#line 1929
//clear ___nl__bool__2;
#line 1929
return ___nl__im__3;
#line 1929
c_rt_lib0clear(&___nl__im__0);
#line 1929
c_rt_lib0clear(&___nl__im__1);
#line 1929
//clear ___nl__bool__2;
#line 1929
c_rt_lib0clear(&___nl__im__3);
#line 1929
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_variant_make_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1934
c_rt_lib0move(&___nl__im__4,___get_global_string_const(265));
#line 1934
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1934
c_rt_lib0clear(&___nl__im__4);
#line 1934
c_rt_lib0clear(&___nl__im__0);
#line 1934
c_rt_lib0clear(&___nl__im__1);
#line 1934
//clear ___nl__bool__2;
#line 1934
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_variant_make_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
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
#line 1938
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1939
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 1939
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_variant_make_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1939
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1939
c_rt_lib0clear(&___nl__im__6);
#line 1939
c_rt_lib0clear(&___nl__im__7);
#line 1939
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 1939
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1939
c_rt_lib0clear(&___nl__im__5);
#line 1939
c_rt_lib0clear(&___nl__im__8);
#line 1939
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1939
c_rt_lib0clear(&___nl__im__4);
#line 1940
c_rt_lib0move(&___nl__im__10,___get_global_string_const(689));
#line 1940
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1940
c_rt_lib0clear(&___nl__im__10);
#line 1940
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1940
c_rt_lib0clear(&___nl__im__9);
#line 1941
c_rt_lib0move(&___nl__im__11,___get_global_string_const(690));
#line 1941
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 1941
c_rt_lib0clear(&___nl__im__11);
#line 1942
c_rt_lib0move(&___nl__im__12,___get_global_string_const(691));
#line 1942
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__12));
#line 1942
c_rt_lib0clear(&___nl__im__12);
#line 1943
c_rt_lib0move(&___nl__im__14, generator_c_priv0int_t());
#line 1943
c_rt_lib0move(&___nl__im__15,___get_global_string_const(692));
#line 1943
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 1943
c_rt_lib0clear(&___nl__im__14);
#line 1943
c_rt_lib0clear(&___nl__im__15);
#line 1943
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 1943
c_rt_lib0clear(&___nl__im__13);
#line 1944
c_rt_lib0clear(&___nl__im__0);
#line 1944
c_rt_lib0clear(&___nl__im__1);
#line 1944
//clear ___nl__bool__2;
#line 1944
return ___nl__im__3;
#line 1944
c_rt_lib0clear(&___nl__im__0);
#line 1944
c_rt_lib0clear(&___nl__im__1);
#line 1944
//clear ___nl__bool__2;
#line 1944
c_rt_lib0clear(&___nl__im__3);
#line 1944
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_variant_make_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 1948
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_make_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1948
c_rt_lib0move(&___nl__im__7,___get_global_string_const(693));
#line 1948
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1948
c_rt_lib0clear(&___nl__im__6);
#line 1948
c_rt_lib0clear(&___nl__im__7);
#line 1950
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1950
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1950
c_rt_lib0clear(&___nl__im__5);
#line 1950
c_rt_lib0clear(&___nl__im__8);
#line 1950
c_rt_lib0move(&___nl__im__9,___get_global_string_const(694));
#line 1950
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 1950
c_rt_lib0clear(&___nl__im__4);
#line 1950
c_rt_lib0clear(&___nl__im__9);
#line 1960
c_rt_lib0clear(&___nl__im__0);
#line 1960
c_rt_lib0clear(&___nl__im__1);
#line 1960
//clear ___nl__bool__2;
#line 1960
return ___nl__im__3;
#line 1960
c_rt_lib0clear(&___nl__im__0);
#line 1960
c_rt_lib0clear(&___nl__im__1);
#line 1960
//clear ___nl__bool__2;
#line 1960
c_rt_lib0clear(&___nl__im__3);
#line 1960
return NULL;
return NULL;

}

bool  generator_c_priv0takes_own_arg(nlasm0function_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
#line 1964
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 1964
___nl__int__3 = 0;
#line 1964
___nl__int__4 = 1;
#line 1964
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 1964
label_4:
;
#line 1964
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 1964
if(___nl__bool__6){ goto label_34;}
#line 1964
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 1964
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 1965
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(482)));
#line 1965
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(110)));
#line 1965
c_rt_lib0clear(&___nl__im__10);
#line 1965
___nl__bool__8 = generator_c_priv0is_own(___nl__im__9);
#line 1965
c_rt_lib0clear(&___nl__im__9);
#line 1965
___nl__bool__8 = !___nl__bool__8;
#line 1965
if(___nl__bool__8){ goto label_28;}
#line 1965
___nl__bool__11 = true;
#line 1965
c_rt_lib0clear(&___nl__im__0);
#line 1965
c_rt_lib0clear(&___nl__im__1);
#line 1965
c_rt_lib0clear(&___nl__im__2);
#line 1965
//clear ___nl__int__3;
#line 1965
//clear ___nl__int__4;
#line 1965
//clear ___nl__int__5;
#line 1965
//clear ___nl__bool__6;
#line 1965
c_rt_lib0clear(&___nl__im__7);
#line 1965
//clear ___nl__bool__8;
#line 1965
return ___nl__bool__11;
#line 1965
goto label_28;
#line 1965
label_28:
;
#line 1965
//clear ___nl__bool__8;
#line 1965
//clear ___nl__bool__11;
#line 1965
c_rt_lib0clear(&___nl__im__2);
#line 1966
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 1966
goto label_4;
#line 1966
label_34:
;
#line 1967
___nl__bool__12 = false;
#line 1967
c_rt_lib0clear(&___nl__im__0);
#line 1967
c_rt_lib0clear(&___nl__im__1);
#line 1967
c_rt_lib0clear(&___nl__im__2);
#line 1967
//clear ___nl__int__3;
#line 1967
//clear ___nl__int__4;
#line 1967
//clear ___nl__int__5;
#line 1967
//clear ___nl__bool__6;
#line 1967
c_rt_lib0clear(&___nl__im__7);
#line 1967
return ___nl__bool__12;
return false;

}

bool  generator_c_priv0is_own(nlasm0reg_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
#line 1971
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(145));
#line 1971
___nl__bool__1 = !___nl__bool__1;
#line 1971
if(___nl__bool__1){ goto label_8;}
#line 1971
___nl__bool__2 = false;
#line 1971
c_rt_lib0clear(&___nl__im__0);
#line 1971
//clear ___nl__bool__1;
#line 1971
return ___nl__bool__2;
#line 1971
goto label_8;
#line 1971
label_8:
;
#line 1971
//clear ___nl__bool__1;
#line 1971
//clear ___nl__bool__2;
#line 1972
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 1972
___nl__bool__3 = !___nl__bool__3;
#line 1972
if(___nl__bool__3){ goto label_19;}
#line 1972
___nl__bool__4 = false;
#line 1972
c_rt_lib0clear(&___nl__im__0);
#line 1972
//clear ___nl__bool__3;
#line 1972
return ___nl__bool__4;
#line 1972
goto label_19;
#line 1972
label_19:
;
#line 1972
//clear ___nl__bool__3;
#line 1972
//clear ___nl__bool__4;
#line 1973
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1973
___nl__bool__5 = !___nl__bool__5;
#line 1973
if(___nl__bool__5){ goto label_30;}
#line 1973
___nl__bool__6 = false;
#line 1973
c_rt_lib0clear(&___nl__im__0);
#line 1973
//clear ___nl__bool__5;
#line 1973
return ___nl__bool__6;
#line 1973
goto label_30;
#line 1973
label_30:
;
#line 1973
//clear ___nl__bool__5;
#line 1973
//clear ___nl__bool__6;
#line 1974
___nl__bool__7 = true;
#line 1974
c_rt_lib0clear(&___nl__im__0);
#line 1974
return ___nl__bool__7;
return false;

}

ImmT  generator_c_priv0get_access_op(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1978
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(367)));
#line 1978
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(241));
#line 1978
if(___nl__bool__2){ goto label_8;}
#line 1980
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(434));
#line 1980
if(___nl__bool__2){ goto label_16;}
#line 1980
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1980
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 1980
nl_die_arg(___nl__im__3);
#line 1978
label_8:
;
#line 1979
c_rt_lib0move(&___nl__im__4,___get_global_string_const(122));
#line 1979
c_rt_lib0clear(&___nl__im__0);
#line 1979
c_rt_lib0clear(&___nl__im__1);
#line 1979
//clear ___nl__bool__2;
#line 1979
c_rt_lib0clear(&___nl__im__3);
#line 1979
return ___nl__im__4;
#line 1980
goto label_25;
#line 1980
label_16:
;
#line 1981
c_rt_lib0move(&___nl__im__5,___get_global_string_const(588));
#line 1981
c_rt_lib0clear(&___nl__im__0);
#line 1981
c_rt_lib0clear(&___nl__im__1);
#line 1981
//clear ___nl__bool__2;
#line 1981
c_rt_lib0clear(&___nl__im__3);
#line 1981
c_rt_lib0clear(&___nl__im__4);
#line 1981
return ___nl__im__5;
#line 1982
goto label_25;
#line 1982
label_25:
;
return NULL;

}

ImmT  generator_c_priv0get_type_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
#line 1986
c_rt_lib0move(&___nl__im__2,___get_global_string_const(34));
#line 1986
c_rt_lib0move(&___nl__im__1, string0index2(___nl__im__0, ___nl__im__2));
#line 1986
c_rt_lib0clear(&___nl__im__2);
#line 1987
___nl__int__4 = 0;
#line 1987
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 1987
c_rt_lib0move(&___nl__im__3, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__5));
#line 1987
//clear ___nl__int__4;
#line 1987
//clear ___nl__int__5;
#line 1987
c_rt_lib0clear(&___nl__im__0);
#line 1987
c_rt_lib0clear(&___nl__im__1);
#line 1987
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_clean_fun_call(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
#line 1996
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 1996
___nl__bool__6 = generator_c_priv0is_anon(___nl__im__0);
#line 1996
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_clean_fun_call_exact(___nl__im__0, ___nl__im__5, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__bool__6));
#line 1996
c_rt_lib0clear(&___nl__im__5);
#line 1996
//clear ___nl__bool__6;
#line 1996
c_rt_lib0clear(&___nl__im__0);
#line 1996
c_rt_lib0clear(&___nl__im__1);
#line 1996
c_rt_lib0clear(&___nl__im__2);
#line 1996
c_rt_lib0clear(&___nl__im__3);
#line 1996
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_clean_fun_call_exact(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4,bool  ___nl__bool__5) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
generator_c_priv0__const__init();
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
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
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
#line 2001
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 2002
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 2002
___nl__bool__7 = c_rt_lib0eq(___nl__im__1, ___nl__im__8);
#line 2002
c_rt_lib0clear(&___nl__im__8);
#line 2002
if(___nl__bool__7){ goto label_7;}
#line 2002
c_rt_lib0copy(&___nl__im__1, ___nl__im__1);
#line 2002
goto label_9;
#line 2002
label_7:
;
#line 2002
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_type_name(___nl__im__0));
#line 2002
label_9:
;
#line 2002
//clear ___nl__bool__7;
#line 2003
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2003
if(___nl__bool__9){ goto label_44;}
#line 2005
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2005
if(___nl__bool__9){ goto label_59;}
#line 2007
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2007
if(___nl__bool__9){ goto label_74;}
#line 2009
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2009
if(___nl__bool__9){ goto label_89;}
#line 2011
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2011
if(___nl__bool__9){ goto label_104;}
#line 2013
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2013
if(___nl__bool__9){ goto label_111;}
#line 2015
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2015
if(___nl__bool__9){ goto label_120;}
#line 2017
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2017
if(___nl__bool__9){ goto label_129;}
#line 2019
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2019
if(___nl__bool__9){ goto label_138;}
#line 2021
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2021
if(___nl__bool__9){ goto label_147;}
#line 2022
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2022
if(___nl__bool__9){ goto label_149;}
#line 2030
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2030
if(___nl__bool__9){ goto label_192;}
#line 2032
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2032
if(___nl__bool__9){ goto label_199;}
#line 2033
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2033
if(___nl__bool__9){ goto label_201;}
#line 2034
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2034
if(___nl__bool__9){ goto label_203;}
#line 2034
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 2034
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__0));
#line 2034
nl_die_arg(___nl__im__10);
#line 2003
label_44:
;
#line 2003
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2003
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 2004
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 2004
c_rt_lib0move(&___nl__im__16,___get_global_string_const(469));
#line 2004
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 2004
c_rt_lib0clear(&___nl__im__15);
#line 2004
c_rt_lib0clear(&___nl__im__16);
#line 2004
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__3));
#line 2004
c_rt_lib0clear(&___nl__im__14);
#line 2004
c_rt_lib0move(&___nl__im__17,___get_global_string_const(518));
#line 2004
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 2004
c_rt_lib0clear(&___nl__im__13);
#line 2004
c_rt_lib0clear(&___nl__im__17);
#line 2005
goto label_205;
#line 2005
label_59:
;
#line 2005
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2005
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 2006
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 2006
c_rt_lib0move(&___nl__im__23,___get_global_string_const(469));
#line 2006
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 2006
c_rt_lib0clear(&___nl__im__22);
#line 2006
c_rt_lib0clear(&___nl__im__23);
#line 2006
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__3));
#line 2006
c_rt_lib0clear(&___nl__im__21);
#line 2006
c_rt_lib0move(&___nl__im__24,___get_global_string_const(518));
#line 2006
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 2006
c_rt_lib0clear(&___nl__im__20);
#line 2006
c_rt_lib0clear(&___nl__im__24);
#line 2007
goto label_205;
#line 2007
label_74:
;
#line 2007
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2007
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 2008
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 2008
c_rt_lib0move(&___nl__im__30,___get_global_string_const(469));
#line 2008
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 2008
c_rt_lib0clear(&___nl__im__29);
#line 2008
c_rt_lib0clear(&___nl__im__30);
#line 2008
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__3));
#line 2008
c_rt_lib0clear(&___nl__im__28);
#line 2008
c_rt_lib0move(&___nl__im__31,___get_global_string_const(518));
#line 2008
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 2008
c_rt_lib0clear(&___nl__im__27);
#line 2008
c_rt_lib0clear(&___nl__im__31);
#line 2009
goto label_205;
#line 2009
label_89:
;
#line 2009
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2009
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 2010
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 2010
c_rt_lib0move(&___nl__im__37,___get_global_string_const(469));
#line 2010
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 2010
c_rt_lib0clear(&___nl__im__36);
#line 2010
c_rt_lib0clear(&___nl__im__37);
#line 2010
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__3));
#line 2010
c_rt_lib0clear(&___nl__im__35);
#line 2010
c_rt_lib0move(&___nl__im__38,___get_global_string_const(518));
#line 2010
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__34, ___nl__im__38));
#line 2010
c_rt_lib0clear(&___nl__im__34);
#line 2010
c_rt_lib0clear(&___nl__im__38);
#line 2011
goto label_205;
#line 2011
label_104:
;
#line 2012
c_rt_lib0move(&___nl__im__39,___get_global_string_const(188));
#line 2012
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2012
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__39, ___nl__im__40));
#line 2012
c_rt_lib0clear(&___nl__im__39);
#line 2012
c_rt_lib0clear(&___nl__im__40);
#line 2013
goto label_205;
#line 2013
label_111:
;
#line 2013
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2013
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 2014
c_rt_lib0move(&___nl__im__43,___get_global_string_const(188));
#line 2014
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2014
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__43, ___nl__im__44));
#line 2014
c_rt_lib0clear(&___nl__im__43);
#line 2014
c_rt_lib0clear(&___nl__im__44);
#line 2015
goto label_205;
#line 2015
label_120:
;
#line 2015
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2015
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 2016
c_rt_lib0move(&___nl__im__47,___get_global_string_const(188));
#line 2016
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2016
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__47, ___nl__im__48));
#line 2016
c_rt_lib0clear(&___nl__im__47);
#line 2016
c_rt_lib0clear(&___nl__im__48);
#line 2017
goto label_205;
#line 2017
label_129:
;
#line 2017
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2017
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 2018
c_rt_lib0move(&___nl__im__51,___get_global_string_const(188));
#line 2018
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2018
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__51, ___nl__im__52));
#line 2018
c_rt_lib0clear(&___nl__im__51);
#line 2018
c_rt_lib0clear(&___nl__im__52);
#line 2019
goto label_205;
#line 2019
label_138:
;
#line 2019
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 2019
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 2020
c_rt_lib0move(&___nl__im__55,___get_global_string_const(188));
#line 2020
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2020
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__55, ___nl__im__56));
#line 2020
c_rt_lib0clear(&___nl__im__55);
#line 2020
c_rt_lib0clear(&___nl__im__56);
#line 2021
goto label_205;
#line 2021
label_147:
;
#line 2022
goto label_205;
#line 2022
label_149:
;
#line 2022
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2022
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 2023
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__57));
#line 2023
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(6));
#line 2023
c_rt_lib0clear(&___nl__im__60);
#line 2023
if(___nl__bool__59){ goto label_157;}
#line 2023
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2023
label_157:
;
#line 2023
if(___nl__bool__59){ goto label_160;}
#line 2023
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2023
label_160:
;
#line 2023
if(___nl__bool__59){ goto label_163;}
#line 2024
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2024
label_163:
;
#line 2024
___nl__bool__59 = !___nl__bool__59;
#line 2024
if(___nl__bool__59){ goto label_178;}
#line 2025
c_rt_lib0move(&___nl__im__63, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 2025
c_rt_lib0move(&___nl__im__64,___get_global_string_const(469));
#line 2025
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__64));
#line 2025
c_rt_lib0clear(&___nl__im__63);
#line 2025
c_rt_lib0clear(&___nl__im__64);
#line 2025
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__3));
#line 2025
c_rt_lib0clear(&___nl__im__62);
#line 2025
c_rt_lib0move(&___nl__im__65,___get_global_string_const(518));
#line 2025
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__61, ___nl__im__65));
#line 2025
c_rt_lib0clear(&___nl__im__61);
#line 2025
c_rt_lib0clear(&___nl__im__65);
#line 2026
goto label_189;
#line 2026
label_178:
;
#line 2027
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__57));
#line 2027
c_rt_lib0move(&___nl__im__67, generator_c_priv0get_type_name(___nl__im__0));
#line 2028
c_rt_lib0move(&___nl__im__68, generator_c_priv0get_type_module_name(___nl__im__57));
#line 2028
___nl__bool__69 = false;
#line 2028
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_clean_fun_call_exact(___nl__im__66, ___nl__im__67, ___nl__im__68, ___nl__im__3, ___nl__im__4, ___nl__bool__69));
#line 2028
c_rt_lib0clear(&___nl__im__66);
#line 2028
c_rt_lib0clear(&___nl__im__67);
#line 2028
c_rt_lib0clear(&___nl__im__68);
#line 2028
//clear ___nl__bool__69;
#line 2029
goto label_189;
#line 2029
label_189:
;
#line 2029
//clear ___nl__bool__59;
#line 2030
goto label_205;
#line 2030
label_192:
;
#line 2031
c_rt_lib0move(&___nl__im__70,___get_global_string_const(188));
#line 2031
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2031
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__70, ___nl__im__71));
#line 2031
c_rt_lib0clear(&___nl__im__70);
#line 2031
c_rt_lib0clear(&___nl__im__71);
#line 2032
goto label_205;
#line 2032
label_199:
;
#line 2033
goto label_205;
#line 2033
label_201:
;
#line 2034
goto label_205;
#line 2034
label_203:
;
#line 2035
goto label_205;
#line 2035
label_205:
;
#line 2036
c_rt_lib0clear(&___nl__im__0);
#line 2036
c_rt_lib0clear(&___nl__im__1);
#line 2036
c_rt_lib0clear(&___nl__im__2);
#line 2036
c_rt_lib0clear(&___nl__im__3);
#line 2036
c_rt_lib0clear(&___nl__im__4);
#line 2036
//clear ___nl__bool__5;
#line 2036
//clear ___nl__bool__9;
#line 2036
c_rt_lib0clear(&___nl__im__10);
#line 2036
c_rt_lib0clear(&___nl__im__11);
#line 2036
c_rt_lib0clear(&___nl__im__12);
#line 2036
c_rt_lib0clear(&___nl__im__18);
#line 2036
c_rt_lib0clear(&___nl__im__19);
#line 2036
c_rt_lib0clear(&___nl__im__25);
#line 2036
c_rt_lib0clear(&___nl__im__26);
#line 2036
c_rt_lib0clear(&___nl__im__32);
#line 2036
c_rt_lib0clear(&___nl__im__33);
#line 2036
c_rt_lib0clear(&___nl__im__41);
#line 2036
c_rt_lib0clear(&___nl__im__42);
#line 2036
c_rt_lib0clear(&___nl__im__45);
#line 2036
c_rt_lib0clear(&___nl__im__46);
#line 2036
c_rt_lib0clear(&___nl__im__49);
#line 2036
c_rt_lib0clear(&___nl__im__50);
#line 2036
c_rt_lib0clear(&___nl__im__53);
#line 2036
c_rt_lib0clear(&___nl__im__54);
#line 2036
c_rt_lib0clear(&___nl__im__57);
#line 2036
c_rt_lib0clear(&___nl__im__58);
#line 2036
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_clean_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 2040
c_rt_lib0move(&___nl__im__4,___get_global_string_const(695));
#line 2040
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 2040
c_rt_lib0clear(&___nl__im__4);
#line 2040
c_rt_lib0clear(&___nl__im__0);
#line 2040
c_rt_lib0clear(&___nl__im__1);
#line 2040
//clear ___nl__bool__2;
#line 2040
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_rec_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2044
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2045
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2045
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2045
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2045
c_rt_lib0clear(&___nl__im__6);
#line 2045
c_rt_lib0clear(&___nl__im__7);
#line 2045
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2045
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2045
c_rt_lib0clear(&___nl__im__5);
#line 2045
c_rt_lib0clear(&___nl__im__8);
#line 2045
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2045
c_rt_lib0clear(&___nl__im__4);
#line 2046
c_rt_lib0move(&___nl__im__10,___get_global_string_const(696));
#line 2046
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2046
c_rt_lib0clear(&___nl__im__10);
#line 2046
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2046
c_rt_lib0clear(&___nl__im__9);
#line 2047
c_rt_lib0clear(&___nl__im__0);
#line 2047
c_rt_lib0clear(&___nl__im__1);
#line 2047
//clear ___nl__bool__2;
#line 2047
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_rec_clean_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
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
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
#line 2052
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_rec_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2052
c_rt_lib0move(&___nl__im__8,___get_global_string_const(546));
#line 2052
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 2052
c_rt_lib0clear(&___nl__im__7);
#line 2052
c_rt_lib0clear(&___nl__im__8);
#line 2052
c_rt_lib0move(&___nl__im__9, string0lf());
#line 2052
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 2052
c_rt_lib0clear(&___nl__im__6);
#line 2052
c_rt_lib0clear(&___nl__im__9);
#line 2053
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 2053
label_10:
;
#line 2053
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 2053
if(___nl__bool__11){ goto label_34;}
#line 2053
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 2053
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 2054
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_field_name(___nl__im__10));
#line 2055
c_rt_lib0move(&___nl__im__19,___get_global_string_const(697));
#line 2055
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__14));
#line 2055
c_rt_lib0clear(&___nl__im__19);
#line 2055
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_clean_fun_call(___nl__im__12, ___nl__im__2, ___nl__im__18, ___nl__im__3));
#line 2055
c_rt_lib0clear(&___nl__im__18);
#line 2055
c_rt_lib0move(&___nl__im__20,___get_global_string_const(454));
#line 2055
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 2055
c_rt_lib0clear(&___nl__im__17);
#line 2055
c_rt_lib0clear(&___nl__im__20);
#line 2055
c_rt_lib0move(&___nl__im__21, string0lf());
#line 2055
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__21));
#line 2055
c_rt_lib0clear(&___nl__im__16);
#line 2055
c_rt_lib0clear(&___nl__im__21);
#line 2055
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__15));
#line 2055
c_rt_lib0clear(&___nl__im__15);
#line 2055
c_rt_lib0clear(&___nl__im__14);
#line 2056
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 2056
goto label_10;
#line 2056
label_34:
;
#line 2057
c_rt_lib0move(&___nl__im__22,___get_global_string_const(321));
#line 2057
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__22));
#line 2057
c_rt_lib0clear(&___nl__im__22);
#line 2058
c_rt_lib0clear(&___nl__im__0);
#line 2058
c_rt_lib0clear(&___nl__im__1);
#line 2058
c_rt_lib0clear(&___nl__im__2);
#line 2058
c_rt_lib0clear(&___nl__im__3);
#line 2058
//clear ___nl__bool__4;
#line 2058
c_rt_lib0clear(&___nl__im__10);
#line 2058
//clear ___nl__bool__11;
#line 2058
c_rt_lib0clear(&___nl__im__12);
#line 2058
c_rt_lib0clear(&___nl__im__13);
#line 2058
c_rt_lib0clear(&___nl__im__14);
#line 2058
return ___nl__im__5;
return NULL;

}

ImmT  generator_c_priv0get_hash_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2063
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2064
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2064
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2064
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2064
c_rt_lib0clear(&___nl__im__6);
#line 2064
c_rt_lib0clear(&___nl__im__7);
#line 2064
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2064
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2064
c_rt_lib0clear(&___nl__im__5);
#line 2064
c_rt_lib0clear(&___nl__im__8);
#line 2064
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2064
c_rt_lib0clear(&___nl__im__4);
#line 2065
c_rt_lib0move(&___nl__im__10,___get_global_string_const(698));
#line 2065
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2065
c_rt_lib0clear(&___nl__im__10);
#line 2065
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2065
c_rt_lib0clear(&___nl__im__9);
#line 2066
c_rt_lib0clear(&___nl__im__0);
#line 2066
c_rt_lib0clear(&___nl__im__1);
#line 2066
//clear ___nl__bool__2;
#line 2066
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_hash_clean_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
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
#line 2071
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_hash_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2071
c_rt_lib0move(&___nl__im__13,___get_global_string_const(699));
#line 2071
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 2071
c_rt_lib0clear(&___nl__im__12);
#line 2071
c_rt_lib0clear(&___nl__im__13);
#line 2074
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(10)));
#line 2074
c_rt_lib0move(&___nl__im__16,___get_global_string_const(700));
#line 2074
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_clean_fun_call(___nl__im__15, ___nl__im__2, ___nl__im__16, ___nl__im__3));
#line 2074
c_rt_lib0clear(&___nl__im__15);
#line 2074
c_rt_lib0clear(&___nl__im__16);
#line 2074
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 2074
c_rt_lib0clear(&___nl__im__11);
#line 2074
c_rt_lib0clear(&___nl__im__14);
#line 2074
c_rt_lib0move(&___nl__im__17,___get_global_string_const(701));
#line 2074
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 2074
c_rt_lib0clear(&___nl__im__10);
#line 2074
c_rt_lib0clear(&___nl__im__17);
#line 2075
c_rt_lib0move(&___nl__im__19,___get_global_string_const(702));
#line 2075
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_clean_fun_call(___nl__im__1, ___nl__im__2, ___nl__im__19, ___nl__im__3));
#line 2075
c_rt_lib0clear(&___nl__im__19);
#line 2075
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 2075
c_rt_lib0clear(&___nl__im__9);
#line 2075
c_rt_lib0clear(&___nl__im__18);
#line 2075
c_rt_lib0move(&___nl__im__20,___get_global_string_const(703));
#line 2075
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__20));
#line 2075
c_rt_lib0clear(&___nl__im__8);
#line 2075
c_rt_lib0clear(&___nl__im__20);
#line 2078
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_type_name(___nl__im__1));
#line 2078
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__21));
#line 2078
c_rt_lib0clear(&___nl__im__7);
#line 2078
c_rt_lib0clear(&___nl__im__21);
#line 2078
c_rt_lib0move(&___nl__im__22,___get_global_string_const(704));
#line 2078
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__22));
#line 2078
c_rt_lib0clear(&___nl__im__6);
#line 2078
c_rt_lib0clear(&___nl__im__22);
#line 2078
c_rt_lib0clear(&___nl__im__0);
#line 2078
c_rt_lib0clear(&___nl__im__1);
#line 2078
c_rt_lib0clear(&___nl__im__2);
#line 2078
c_rt_lib0clear(&___nl__im__3);
#line 2078
//clear ___nl__bool__4;
#line 2078
return ___nl__im__5;
return NULL;

}

ImmT  generator_c_priv0get_array_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2084
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2085
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2085
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2085
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2085
c_rt_lib0clear(&___nl__im__6);
#line 2085
c_rt_lib0clear(&___nl__im__7);
#line 2085
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2085
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2085
c_rt_lib0clear(&___nl__im__5);
#line 2085
c_rt_lib0clear(&___nl__im__8);
#line 2085
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2085
c_rt_lib0clear(&___nl__im__4);
#line 2086
c_rt_lib0move(&___nl__im__10,___get_global_string_const(705));
#line 2086
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2086
c_rt_lib0clear(&___nl__im__10);
#line 2086
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2086
c_rt_lib0clear(&___nl__im__9);
#line 2087
c_rt_lib0clear(&___nl__im__0);
#line 2087
c_rt_lib0clear(&___nl__im__1);
#line 2087
//clear ___nl__bool__2;
#line 2087
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_array_clean_fun_def(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,bool  ___nl__bool__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
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
#line 2092
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_array_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2092
c_rt_lib0move(&___nl__im__11,___get_global_string_const(706));
#line 2092
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 2092
c_rt_lib0clear(&___nl__im__10);
#line 2092
c_rt_lib0clear(&___nl__im__11);
#line 2095
c_rt_lib0move(&___nl__im__13,___get_global_string_const(707));
#line 2095
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_clean_fun_call(___nl__im__1, ___nl__im__2, ___nl__im__13, ___nl__im__3));
#line 2095
c_rt_lib0clear(&___nl__im__13);
#line 2095
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 2095
c_rt_lib0clear(&___nl__im__9);
#line 2095
c_rt_lib0clear(&___nl__im__12);
#line 2095
c_rt_lib0move(&___nl__im__14,___get_global_string_const(708));
#line 2095
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__14));
#line 2095
c_rt_lib0clear(&___nl__im__8);
#line 2095
c_rt_lib0clear(&___nl__im__14);
#line 2097
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_type_name(___nl__im__1));
#line 2097
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 2097
c_rt_lib0clear(&___nl__im__7);
#line 2097
c_rt_lib0clear(&___nl__im__15);
#line 2097
c_rt_lib0move(&___nl__im__16,___get_global_string_const(709));
#line 2097
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 2097
c_rt_lib0clear(&___nl__im__6);
#line 2097
c_rt_lib0clear(&___nl__im__16);
#line 2097
c_rt_lib0clear(&___nl__im__0);
#line 2097
c_rt_lib0clear(&___nl__im__1);
#line 2097
c_rt_lib0clear(&___nl__im__2);
#line 2097
c_rt_lib0clear(&___nl__im__3);
#line 2097
//clear ___nl__bool__4;
#line 2097
return ___nl__im__5;
return NULL;

}

ImmT  generator_c_priv0get_variant_clean_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2102
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2103
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2103
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2103
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2103
c_rt_lib0clear(&___nl__im__6);
#line 2103
c_rt_lib0clear(&___nl__im__7);
#line 2103
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2103
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2103
c_rt_lib0clear(&___nl__im__5);
#line 2103
c_rt_lib0clear(&___nl__im__8);
#line 2103
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2103
c_rt_lib0clear(&___nl__im__4);
#line 2104
c_rt_lib0move(&___nl__im__10,___get_global_string_const(710));
#line 2104
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2104
c_rt_lib0clear(&___nl__im__10);
#line 2104
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2104
c_rt_lib0clear(&___nl__im__9);
#line 2105
c_rt_lib0clear(&___nl__im__0);
#line 2105
c_rt_lib0clear(&___nl__im__1);
#line 2105
//clear ___nl__bool__2;
#line 2105
return ___nl__im__3;
#line 2105
c_rt_lib0clear(&___nl__im__0);
#line 2105
c_rt_lib0clear(&___nl__im__1);
#line 2105
//clear ___nl__bool__2;
#line 2105
c_rt_lib0clear(&___nl__im__3);
#line 2105
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_variant_clean_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
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
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
#line 2111
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 2111
c_rt_lib0move(&___nl__im__7,___get_global_string_const(711));
#line 2111
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2111
c_rt_lib0clear(&___nl__im__6);
#line 2111
c_rt_lib0clear(&___nl__im__7);
#line 2112
c_rt_lib0move(&___nl__im__8, string0lf());
#line 2112
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2112
c_rt_lib0clear(&___nl__im__5);
#line 2112
c_rt_lib0clear(&___nl__im__8);
#line 2113
___nl__int__9 = 0;
#line 2114
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 2114
label_11:
;
#line 2114
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 2114
if(___nl__bool__11){ goto label_68;}
#line 2114
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 2114
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 2115
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(28));
#line 2115
if(___nl__bool__14){ goto label_23;}
#line 2116
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(27));
#line 2116
if(___nl__bool__14){ goto label_25;}
#line 2116
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 2116
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 2116
nl_die_arg(___nl__im__15);
#line 2115
label_23:
;
#line 2116
goto label_58;
#line 2116
label_25:
;
#line 2116
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(27)));
#line 2116
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 2117
c_rt_lib0move(&___nl__im__23,___get_global_string_const(539));
#line 2117
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__9));
#line 2117
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__string__24));
#line 2117
c_rt_lib0clear(&___nl__im__23);
#line 2117
c_rt_lib0clear(&___nl__string__24);
#line 2117
c_rt_lib0move(&___nl__im__25,___get_global_string_const(712));
#line 2117
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 2117
c_rt_lib0clear(&___nl__im__22);
#line 2117
c_rt_lib0clear(&___nl__im__25);
#line 2118
c_rt_lib0move(&___nl__im__28,___get_global_string_const(713));
#line 2118
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_case_name(___nl__im__10));
#line 2118
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 2118
c_rt_lib0clear(&___nl__im__28);
#line 2118
c_rt_lib0clear(&___nl__im__29);
#line 2118
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_free_fun_call(___nl__im__16, ___nl__im__2, ___nl__im__27));
#line 2118
c_rt_lib0clear(&___nl__im__27);
#line 2118
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 2118
c_rt_lib0clear(&___nl__im__21);
#line 2118
c_rt_lib0clear(&___nl__im__26);
#line 2118
c_rt_lib0move(&___nl__im__30,___get_global_string_const(714));
#line 2118
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__30));
#line 2118
c_rt_lib0clear(&___nl__im__20);
#line 2118
c_rt_lib0clear(&___nl__im__30);
#line 2119
c_rt_lib0move(&___nl__im__31, string0lf());
#line 2119
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__31));
#line 2119
c_rt_lib0clear(&___nl__im__19);
#line 2119
c_rt_lib0clear(&___nl__im__31);
#line 2119
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__18));
#line 2119
c_rt_lib0clear(&___nl__im__18);
#line 2120
goto label_58;
#line 2120
label_58:
;
#line 2121
___nl__int__32 = 1;
#line 2121
___nl__int__9 = ___nl__int__9 + ___nl__int__32;
#line 2121
//clear ___nl__int__32;
#line 2121
//clear ___nl__bool__14;
#line 2121
c_rt_lib0clear(&___nl__im__15);
#line 2121
c_rt_lib0clear(&___nl__im__16);
#line 2121
c_rt_lib0clear(&___nl__im__17);
#line 2122
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 2122
goto label_11;
#line 2122
label_68:
;
#line 2123
c_rt_lib0move(&___nl__im__33,___get_global_string_const(715));
#line 2123
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__33));
#line 2123
c_rt_lib0clear(&___nl__im__33);
#line 2125
c_rt_lib0clear(&___nl__im__0);
#line 2125
c_rt_lib0clear(&___nl__im__1);
#line 2125
c_rt_lib0clear(&___nl__im__2);
#line 2125
//clear ___nl__bool__3;
#line 2125
//clear ___nl__int__9;
#line 2125
c_rt_lib0clear(&___nl__im__10);
#line 2125
//clear ___nl__bool__11;
#line 2125
c_rt_lib0clear(&___nl__im__12);
#line 2125
c_rt_lib0clear(&___nl__im__13);
#line 2125
//clear ___nl__bool__14;
#line 2125
c_rt_lib0clear(&___nl__im__15);
#line 2125
c_rt_lib0clear(&___nl__im__16);
#line 2125
c_rt_lib0clear(&___nl__im__17);
#line 2125
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_free_fun_call(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 2130
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 2130
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_free_fun_call_exact(___nl__im__0, ___nl__im__4, ___nl__im__1, ___nl__im__2));
#line 2130
c_rt_lib0clear(&___nl__im__4);
#line 2130
c_rt_lib0clear(&___nl__im__0);
#line 2130
c_rt_lib0clear(&___nl__im__1);
#line 2130
c_rt_lib0clear(&___nl__im__2);
#line 2130
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_free_fun_call_exact(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_c_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
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
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
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
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
#line 2135
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 2136
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 2136
___nl__bool__5 = c_rt_lib0eq(___nl__im__1, ___nl__im__6);
#line 2136
c_rt_lib0clear(&___nl__im__6);
#line 2136
if(___nl__bool__5){ goto label_7;}
#line 2136
c_rt_lib0copy(&___nl__im__1, ___nl__im__1);
#line 2136
goto label_9;
#line 2136
label_7:
;
#line 2136
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_type_name(___nl__im__0));
#line 2136
label_9:
;
#line 2136
//clear ___nl__bool__5;
#line 2137
___nl__bool__7 = generator_c_priv0is_anon(___nl__im__0);
#line 2138
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2138
if(___nl__bool__8){ goto label_45;}
#line 2140
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2140
if(___nl__bool__8){ goto label_60;}
#line 2142
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2142
if(___nl__bool__8){ goto label_75;}
#line 2144
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2144
if(___nl__bool__8){ goto label_90;}
#line 2146
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2146
if(___nl__bool__8){ goto label_105;}
#line 2149
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2149
if(___nl__bool__8){ goto label_116;}
#line 2152
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2152
if(___nl__bool__8){ goto label_129;}
#line 2155
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2155
if(___nl__bool__8){ goto label_142;}
#line 2158
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2158
if(___nl__bool__8){ goto label_155;}
#line 2161
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2161
if(___nl__bool__8){ goto label_168;}
#line 2163
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2163
if(___nl__bool__8){ goto label_177;}
#line 2165
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2165
if(___nl__bool__8){ goto label_192;}
#line 2168
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2168
if(___nl__bool__8){ goto label_203;}
#line 2170
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2170
if(___nl__bool__8){ goto label_212;}
#line 2171
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2171
if(___nl__bool__8){ goto label_214;}
#line 2171
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 2171
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__0));
#line 2171
nl_die_arg(___nl__im__9);
#line 2138
label_45:
;
#line 2138
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2138
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 2139
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2139
c_rt_lib0move(&___nl__im__15,___get_global_string_const(469));
#line 2139
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 2139
c_rt_lib0clear(&___nl__im__14);
#line 2139
c_rt_lib0clear(&___nl__im__15);
#line 2139
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__3));
#line 2139
c_rt_lib0clear(&___nl__im__13);
#line 2139
c_rt_lib0move(&___nl__im__16,___get_global_string_const(336));
#line 2139
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 2139
c_rt_lib0clear(&___nl__im__12);
#line 2139
c_rt_lib0clear(&___nl__im__16);
#line 2140
goto label_216;
#line 2140
label_60:
;
#line 2140
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2140
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 2141
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2141
c_rt_lib0move(&___nl__im__22,___get_global_string_const(469));
#line 2141
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 2141
c_rt_lib0clear(&___nl__im__21);
#line 2141
c_rt_lib0clear(&___nl__im__22);
#line 2141
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__3));
#line 2141
c_rt_lib0clear(&___nl__im__20);
#line 2141
c_rt_lib0move(&___nl__im__23,___get_global_string_const(336));
#line 2141
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 2141
c_rt_lib0clear(&___nl__im__19);
#line 2141
c_rt_lib0clear(&___nl__im__23);
#line 2142
goto label_216;
#line 2142
label_75:
;
#line 2142
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2142
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2143
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2143
c_rt_lib0move(&___nl__im__29,___get_global_string_const(469));
#line 2143
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 2143
c_rt_lib0clear(&___nl__im__28);
#line 2143
c_rt_lib0clear(&___nl__im__29);
#line 2143
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__3));
#line 2143
c_rt_lib0clear(&___nl__im__27);
#line 2143
c_rt_lib0move(&___nl__im__30,___get_global_string_const(336));
#line 2143
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 2143
c_rt_lib0clear(&___nl__im__26);
#line 2143
c_rt_lib0clear(&___nl__im__30);
#line 2144
goto label_216;
#line 2144
label_90:
;
#line 2144
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2144
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 2145
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2145
c_rt_lib0move(&___nl__im__36,___get_global_string_const(469));
#line 2145
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 2145
c_rt_lib0clear(&___nl__im__35);
#line 2145
c_rt_lib0clear(&___nl__im__36);
#line 2145
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__3));
#line 2145
c_rt_lib0clear(&___nl__im__34);
#line 2145
c_rt_lib0move(&___nl__im__37,___get_global_string_const(336));
#line 2145
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__33, ___nl__im__37));
#line 2145
c_rt_lib0clear(&___nl__im__33);
#line 2145
c_rt_lib0clear(&___nl__im__37);
#line 2146
goto label_216;
#line 2146
label_105:
;
#line 2147
c_rt_lib0move(&___nl__im__39,___get_global_string_const(271));
#line 2147
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2147
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_fun_lib(___nl__im__39, ___nl__im__40));
#line 2147
c_rt_lib0clear(&___nl__im__39);
#line 2147
c_rt_lib0clear(&___nl__im__40);
#line 2147
c_rt_lib0move(&___nl__im__41,___get_global_string_const(716));
#line 2147
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__41));
#line 2147
c_rt_lib0clear(&___nl__im__38);
#line 2147
c_rt_lib0clear(&___nl__im__41);
#line 2149
goto label_216;
#line 2149
label_116:
;
#line 2149
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2149
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 2150
c_rt_lib0move(&___nl__im__45,___get_global_string_const(271));
#line 2150
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2150
c_rt_lib0move(&___nl__im__44, generator_c_priv0get_fun_lib(___nl__im__45, ___nl__im__46));
#line 2150
c_rt_lib0clear(&___nl__im__45);
#line 2150
c_rt_lib0clear(&___nl__im__46);
#line 2150
c_rt_lib0move(&___nl__im__47,___get_global_string_const(716));
#line 2150
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__44, ___nl__im__47));
#line 2150
c_rt_lib0clear(&___nl__im__44);
#line 2150
c_rt_lib0clear(&___nl__im__47);
#line 2152
goto label_216;
#line 2152
label_129:
;
#line 2152
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2152
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 2153
c_rt_lib0move(&___nl__im__51,___get_global_string_const(271));
#line 2153
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2153
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_fun_lib(___nl__im__51, ___nl__im__52));
#line 2153
c_rt_lib0clear(&___nl__im__51);
#line 2153
c_rt_lib0clear(&___nl__im__52);
#line 2153
c_rt_lib0move(&___nl__im__53,___get_global_string_const(716));
#line 2153
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 2153
c_rt_lib0clear(&___nl__im__50);
#line 2153
c_rt_lib0clear(&___nl__im__53);
#line 2155
goto label_216;
#line 2155
label_142:
;
#line 2155
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2155
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 2156
c_rt_lib0move(&___nl__im__57,___get_global_string_const(271));
#line 2156
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2156
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_fun_lib(___nl__im__57, ___nl__im__58));
#line 2156
c_rt_lib0clear(&___nl__im__57);
#line 2156
c_rt_lib0clear(&___nl__im__58);
#line 2156
c_rt_lib0move(&___nl__im__59,___get_global_string_const(716));
#line 2156
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__56, ___nl__im__59));
#line 2156
c_rt_lib0clear(&___nl__im__56);
#line 2156
c_rt_lib0clear(&___nl__im__59);
#line 2158
goto label_216;
#line 2158
label_155:
;
#line 2158
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 2158
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 2159
c_rt_lib0move(&___nl__im__63,___get_global_string_const(271));
#line 2159
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2159
c_rt_lib0move(&___nl__im__62, generator_c_priv0get_fun_lib(___nl__im__63, ___nl__im__64));
#line 2159
c_rt_lib0clear(&___nl__im__63);
#line 2159
c_rt_lib0clear(&___nl__im__64);
#line 2159
c_rt_lib0move(&___nl__im__65,___get_global_string_const(716));
#line 2159
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__62, ___nl__im__65));
#line 2159
c_rt_lib0clear(&___nl__im__62);
#line 2159
c_rt_lib0clear(&___nl__im__65);
#line 2161
goto label_216;
#line 2161
label_168:
;
#line 2162
c_rt_lib0move(&___nl__im__67,___get_global_string_const(717));
#line 2162
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__3));
#line 2162
c_rt_lib0clear(&___nl__im__67);
#line 2162
c_rt_lib0move(&___nl__im__68,___get_global_string_const(718));
#line 2162
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__66, ___nl__im__68));
#line 2162
c_rt_lib0clear(&___nl__im__66);
#line 2162
c_rt_lib0clear(&___nl__im__68);
#line 2163
goto label_216;
#line 2163
label_177:
;
#line 2163
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2163
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 2164
c_rt_lib0move(&___nl__im__73, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2164
c_rt_lib0move(&___nl__im__74,___get_global_string_const(469));
#line 2164
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__74));
#line 2164
c_rt_lib0clear(&___nl__im__73);
#line 2164
c_rt_lib0clear(&___nl__im__74);
#line 2164
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__3));
#line 2164
c_rt_lib0clear(&___nl__im__72);
#line 2164
c_rt_lib0move(&___nl__im__75,___get_global_string_const(336));
#line 2164
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__71, ___nl__im__75));
#line 2164
c_rt_lib0clear(&___nl__im__71);
#line 2164
c_rt_lib0clear(&___nl__im__75);
#line 2165
goto label_216;
#line 2165
label_192:
;
#line 2166
c_rt_lib0move(&___nl__im__77,___get_global_string_const(271));
#line 2166
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2166
c_rt_lib0move(&___nl__im__76, generator_c_priv0get_fun_lib(___nl__im__77, ___nl__im__78));
#line 2166
c_rt_lib0clear(&___nl__im__77);
#line 2166
c_rt_lib0clear(&___nl__im__78);
#line 2166
c_rt_lib0move(&___nl__im__79,___get_global_string_const(716));
#line 2166
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__76, ___nl__im__79));
#line 2166
c_rt_lib0clear(&___nl__im__76);
#line 2166
c_rt_lib0clear(&___nl__im__79);
#line 2168
goto label_216;
#line 2168
label_203:
;
#line 2169
c_rt_lib0move(&___nl__im__81,___get_global_string_const(717));
#line 2169
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__3));
#line 2169
c_rt_lib0clear(&___nl__im__81);
#line 2169
c_rt_lib0move(&___nl__im__82,___get_global_string_const(719));
#line 2169
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__80, ___nl__im__82));
#line 2169
c_rt_lib0clear(&___nl__im__80);
#line 2169
c_rt_lib0clear(&___nl__im__82);
#line 2170
goto label_216;
#line 2170
label_212:
;
#line 2171
goto label_216;
#line 2171
label_214:
;
#line 2172
goto label_216;
#line 2172
label_216:
;
#line 2173
c_rt_lib0clear(&___nl__im__0);
#line 2173
c_rt_lib0clear(&___nl__im__1);
#line 2173
c_rt_lib0clear(&___nl__im__2);
#line 2173
c_rt_lib0clear(&___nl__im__3);
#line 2173
//clear ___nl__bool__7;
#line 2173
//clear ___nl__bool__8;
#line 2173
c_rt_lib0clear(&___nl__im__9);
#line 2173
c_rt_lib0clear(&___nl__im__10);
#line 2173
c_rt_lib0clear(&___nl__im__11);
#line 2173
c_rt_lib0clear(&___nl__im__17);
#line 2173
c_rt_lib0clear(&___nl__im__18);
#line 2173
c_rt_lib0clear(&___nl__im__24);
#line 2173
c_rt_lib0clear(&___nl__im__25);
#line 2173
c_rt_lib0clear(&___nl__im__31);
#line 2173
c_rt_lib0clear(&___nl__im__32);
#line 2173
c_rt_lib0clear(&___nl__im__42);
#line 2173
c_rt_lib0clear(&___nl__im__43);
#line 2173
c_rt_lib0clear(&___nl__im__48);
#line 2173
c_rt_lib0clear(&___nl__im__49);
#line 2173
c_rt_lib0clear(&___nl__im__54);
#line 2173
c_rt_lib0clear(&___nl__im__55);
#line 2173
c_rt_lib0clear(&___nl__im__60);
#line 2173
c_rt_lib0clear(&___nl__im__61);
#line 2173
c_rt_lib0clear(&___nl__im__69);
#line 2173
c_rt_lib0clear(&___nl__im__70);
#line 2173
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_free_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 2179
c_rt_lib0move(&___nl__im__4,___get_global_string_const(720));
#line 2179
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 2179
c_rt_lib0clear(&___nl__im__4);
#line 2179
c_rt_lib0clear(&___nl__im__0);
#line 2179
c_rt_lib0clear(&___nl__im__1);
#line 2179
//clear ___nl__bool__2;
#line 2179
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_rec_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2183
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2184
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2184
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2184
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2184
c_rt_lib0clear(&___nl__im__6);
#line 2184
c_rt_lib0clear(&___nl__im__7);
#line 2184
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2184
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2184
c_rt_lib0clear(&___nl__im__5);
#line 2184
c_rt_lib0clear(&___nl__im__8);
#line 2184
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2184
c_rt_lib0clear(&___nl__im__4);
#line 2185
c_rt_lib0move(&___nl__im__10,___get_global_string_const(721));
#line 2185
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2185
c_rt_lib0clear(&___nl__im__10);
#line 2185
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2185
c_rt_lib0clear(&___nl__im__9);
#line 2186
c_rt_lib0clear(&___nl__im__0);
#line 2186
c_rt_lib0clear(&___nl__im__1);
#line 2186
//clear ___nl__bool__2;
#line 2186
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_rec_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 2190
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_rec_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2190
c_rt_lib0move(&___nl__im__7,___get_global_string_const(722));
#line 2190
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2190
c_rt_lib0clear(&___nl__im__6);
#line 2190
c_rt_lib0clear(&___nl__im__7);
#line 2191
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2191
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2191
c_rt_lib0clear(&___nl__im__5);
#line 2191
c_rt_lib0clear(&___nl__im__8);
#line 2191
c_rt_lib0move(&___nl__im__9,___get_global_string_const(723));
#line 2191
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2191
c_rt_lib0clear(&___nl__im__4);
#line 2191
c_rt_lib0clear(&___nl__im__9);
#line 2191
c_rt_lib0clear(&___nl__im__0);
#line 2191
c_rt_lib0clear(&___nl__im__1);
#line 2191
//clear ___nl__bool__2;
#line 2191
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_hash_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2197
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2198
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2198
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2198
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2198
c_rt_lib0clear(&___nl__im__6);
#line 2198
c_rt_lib0clear(&___nl__im__7);
#line 2198
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2198
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2198
c_rt_lib0clear(&___nl__im__5);
#line 2198
c_rt_lib0clear(&___nl__im__8);
#line 2198
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2198
c_rt_lib0clear(&___nl__im__4);
#line 2199
c_rt_lib0move(&___nl__im__10,___get_global_string_const(724));
#line 2199
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2199
c_rt_lib0clear(&___nl__im__10);
#line 2199
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2199
c_rt_lib0clear(&___nl__im__9);
#line 2200
c_rt_lib0clear(&___nl__im__0);
#line 2200
c_rt_lib0clear(&___nl__im__1);
#line 2200
//clear ___nl__bool__2;
#line 2200
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_hash_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 2204
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_hash_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2204
c_rt_lib0move(&___nl__im__7,___get_global_string_const(722));
#line 2204
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2204
c_rt_lib0clear(&___nl__im__6);
#line 2204
c_rt_lib0clear(&___nl__im__7);
#line 2205
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2205
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2205
c_rt_lib0clear(&___nl__im__5);
#line 2205
c_rt_lib0clear(&___nl__im__8);
#line 2205
c_rt_lib0move(&___nl__im__9,___get_global_string_const(725));
#line 2205
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2205
c_rt_lib0clear(&___nl__im__4);
#line 2205
c_rt_lib0clear(&___nl__im__9);
#line 2205
c_rt_lib0clear(&___nl__im__0);
#line 2205
c_rt_lib0clear(&___nl__im__1);
#line 2205
//clear ___nl__bool__2;
#line 2205
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_array_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2212
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2213
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2213
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2213
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2213
c_rt_lib0clear(&___nl__im__6);
#line 2213
c_rt_lib0clear(&___nl__im__7);
#line 2213
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2213
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2213
c_rt_lib0clear(&___nl__im__5);
#line 2213
c_rt_lib0clear(&___nl__im__8);
#line 2213
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2213
c_rt_lib0clear(&___nl__im__4);
#line 2214
c_rt_lib0move(&___nl__im__10,___get_global_string_const(670));
#line 2214
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2214
c_rt_lib0clear(&___nl__im__10);
#line 2214
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2214
c_rt_lib0clear(&___nl__im__9);
#line 2215
c_rt_lib0clear(&___nl__im__0);
#line 2215
c_rt_lib0clear(&___nl__im__1);
#line 2215
//clear ___nl__bool__2;
#line 2215
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_array_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 2219
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_array_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2219
c_rt_lib0move(&___nl__im__7,___get_global_string_const(722));
#line 2219
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2219
c_rt_lib0clear(&___nl__im__6);
#line 2219
c_rt_lib0clear(&___nl__im__7);
#line 2220
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2220
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2220
c_rt_lib0clear(&___nl__im__5);
#line 2220
c_rt_lib0clear(&___nl__im__8);
#line 2220
c_rt_lib0move(&___nl__im__9,___get_global_string_const(726));
#line 2220
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2220
c_rt_lib0clear(&___nl__im__4);
#line 2220
c_rt_lib0clear(&___nl__im__9);
#line 2220
c_rt_lib0clear(&___nl__im__0);
#line 2220
c_rt_lib0clear(&___nl__im__1);
#line 2220
//clear ___nl__bool__2;
#line 2220
return ___nl__im__3;
return NULL;

}

ImmT  generator_c_priv0get_variant_free_fun_header(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 2227
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2228
c_rt_lib0move(&___nl__im__6,___get_global_string_const(495));
#line 2228
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2228
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2228
c_rt_lib0clear(&___nl__im__6);
#line 2228
c_rt_lib0clear(&___nl__im__7);
#line 2228
c_rt_lib0move(&___nl__im__8,___get_global_string_const(469));
#line 2228
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2228
c_rt_lib0clear(&___nl__im__5);
#line 2228
c_rt_lib0clear(&___nl__im__8);
#line 2228
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2228
c_rt_lib0clear(&___nl__im__4);
#line 2229
c_rt_lib0move(&___nl__im__10,___get_global_string_const(727));
#line 2229
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2229
c_rt_lib0clear(&___nl__im__10);
#line 2229
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2229
c_rt_lib0clear(&___nl__im__9);
#line 2230
c_rt_lib0clear(&___nl__im__0);
#line 2230
c_rt_lib0clear(&___nl__im__1);
#line 2230
//clear ___nl__bool__2;
#line 2230
return ___nl__im__3;
#line 2230
c_rt_lib0clear(&___nl__im__0);
#line 2230
c_rt_lib0clear(&___nl__im__1);
#line 2230
//clear ___nl__bool__2;
#line 2230
c_rt_lib0clear(&___nl__im__3);
#line 2230
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_variant_free_fun_def(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 2234
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2234
c_rt_lib0move(&___nl__im__7,___get_global_string_const(728));
#line 2234
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2234
c_rt_lib0clear(&___nl__im__6);
#line 2234
c_rt_lib0clear(&___nl__im__7);
#line 2235
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2235
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2235
c_rt_lib0clear(&___nl__im__5);
#line 2235
c_rt_lib0clear(&___nl__im__8);
#line 2235
c_rt_lib0move(&___nl__im__9,___get_global_string_const(729));
#line 2235
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2235
c_rt_lib0clear(&___nl__im__4);
#line 2235
c_rt_lib0clear(&___nl__im__9);
#line 2235
c_rt_lib0clear(&___nl__im__0);
#line 2235
c_rt_lib0clear(&___nl__im__1);
#line 2235
//clear ___nl__bool__2;
#line 2235
return ___nl__im__3;
return NULL;

}

bool  generator_c_priv0is_anon(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
bool  ___nl__bool__30 = false;
bool  ___nl__bool__31 = false;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
#line 2241
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2241
if(___nl__bool__1){ goto label_33;}
#line 2243
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2243
if(___nl__bool__1){ goto label_44;}
#line 2245
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2245
if(___nl__bool__1){ goto label_58;}
#line 2247
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2247
if(___nl__bool__1){ goto label_75;}
#line 2249
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2249
if(___nl__bool__1){ goto label_95;}
#line 2251
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2251
if(___nl__bool__1){ goto label_118;}
#line 2253
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2253
if(___nl__bool__1){ goto label_144;}
#line 2255
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2255
if(___nl__bool__1){ goto label_173;}
#line 2257
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2257
if(___nl__bool__1){ goto label_205;}
#line 2259
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2259
if(___nl__bool__1){ goto label_240;}
#line 2261
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2261
if(___nl__bool__1){ goto label_274;}
#line 2263
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2263
if(___nl__bool__1){ goto label_309;}
#line 2265
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2265
if(___nl__bool__1){ goto label_345;}
#line 2267
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2267
if(___nl__bool__1){ goto label_382;}
#line 2269
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2269
if(___nl__bool__1){ goto label_420;}
#line 2269
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 2269
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 2269
nl_die_arg(___nl__im__2);
#line 2241
label_33:
;
#line 2241
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2241
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 2242
___nl__bool__5 = false;
#line 2242
c_rt_lib0clear(&___nl__im__0);
#line 2242
//clear ___nl__bool__1;
#line 2242
c_rt_lib0clear(&___nl__im__2);
#line 2242
c_rt_lib0clear(&___nl__im__3);
#line 2242
c_rt_lib0clear(&___nl__im__4);
#line 2242
return ___nl__bool__5;
#line 2243
goto label_459;
#line 2243
label_44:
;
#line 2243
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2243
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 2244
___nl__bool__8 = true;
#line 2244
c_rt_lib0clear(&___nl__im__0);
#line 2244
//clear ___nl__bool__1;
#line 2244
c_rt_lib0clear(&___nl__im__2);
#line 2244
c_rt_lib0clear(&___nl__im__3);
#line 2244
c_rt_lib0clear(&___nl__im__4);
#line 2244
//clear ___nl__bool__5;
#line 2244
c_rt_lib0clear(&___nl__im__6);
#line 2244
c_rt_lib0clear(&___nl__im__7);
#line 2244
return ___nl__bool__8;
#line 2245
goto label_459;
#line 2245
label_58:
;
#line 2245
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2245
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 2246
___nl__bool__11 = false;
#line 2246
c_rt_lib0clear(&___nl__im__0);
#line 2246
//clear ___nl__bool__1;
#line 2246
c_rt_lib0clear(&___nl__im__2);
#line 2246
c_rt_lib0clear(&___nl__im__3);
#line 2246
c_rt_lib0clear(&___nl__im__4);
#line 2246
//clear ___nl__bool__5;
#line 2246
c_rt_lib0clear(&___nl__im__6);
#line 2246
c_rt_lib0clear(&___nl__im__7);
#line 2246
//clear ___nl__bool__8;
#line 2246
c_rt_lib0clear(&___nl__im__9);
#line 2246
c_rt_lib0clear(&___nl__im__10);
#line 2246
return ___nl__bool__11;
#line 2247
goto label_459;
#line 2247
label_75:
;
#line 2247
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2247
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 2248
___nl__bool__14 = true;
#line 2248
c_rt_lib0clear(&___nl__im__0);
#line 2248
//clear ___nl__bool__1;
#line 2248
c_rt_lib0clear(&___nl__im__2);
#line 2248
c_rt_lib0clear(&___nl__im__3);
#line 2248
c_rt_lib0clear(&___nl__im__4);
#line 2248
//clear ___nl__bool__5;
#line 2248
c_rt_lib0clear(&___nl__im__6);
#line 2248
c_rt_lib0clear(&___nl__im__7);
#line 2248
//clear ___nl__bool__8;
#line 2248
c_rt_lib0clear(&___nl__im__9);
#line 2248
c_rt_lib0clear(&___nl__im__10);
#line 2248
//clear ___nl__bool__11;
#line 2248
c_rt_lib0clear(&___nl__im__12);
#line 2248
c_rt_lib0clear(&___nl__im__13);
#line 2248
return ___nl__bool__14;
#line 2249
goto label_459;
#line 2249
label_95:
;
#line 2249
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2249
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 2250
___nl__bool__17 = false;
#line 2250
c_rt_lib0clear(&___nl__im__0);
#line 2250
//clear ___nl__bool__1;
#line 2250
c_rt_lib0clear(&___nl__im__2);
#line 2250
c_rt_lib0clear(&___nl__im__3);
#line 2250
c_rt_lib0clear(&___nl__im__4);
#line 2250
//clear ___nl__bool__5;
#line 2250
c_rt_lib0clear(&___nl__im__6);
#line 2250
c_rt_lib0clear(&___nl__im__7);
#line 2250
//clear ___nl__bool__8;
#line 2250
c_rt_lib0clear(&___nl__im__9);
#line 2250
c_rt_lib0clear(&___nl__im__10);
#line 2250
//clear ___nl__bool__11;
#line 2250
c_rt_lib0clear(&___nl__im__12);
#line 2250
c_rt_lib0clear(&___nl__im__13);
#line 2250
//clear ___nl__bool__14;
#line 2250
c_rt_lib0clear(&___nl__im__15);
#line 2250
c_rt_lib0clear(&___nl__im__16);
#line 2250
return ___nl__bool__17;
#line 2251
goto label_459;
#line 2251
label_118:
;
#line 2251
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2251
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 2252
___nl__bool__20 = true;
#line 2252
c_rt_lib0clear(&___nl__im__0);
#line 2252
//clear ___nl__bool__1;
#line 2252
c_rt_lib0clear(&___nl__im__2);
#line 2252
c_rt_lib0clear(&___nl__im__3);
#line 2252
c_rt_lib0clear(&___nl__im__4);
#line 2252
//clear ___nl__bool__5;
#line 2252
c_rt_lib0clear(&___nl__im__6);
#line 2252
c_rt_lib0clear(&___nl__im__7);
#line 2252
//clear ___nl__bool__8;
#line 2252
c_rt_lib0clear(&___nl__im__9);
#line 2252
c_rt_lib0clear(&___nl__im__10);
#line 2252
//clear ___nl__bool__11;
#line 2252
c_rt_lib0clear(&___nl__im__12);
#line 2252
c_rt_lib0clear(&___nl__im__13);
#line 2252
//clear ___nl__bool__14;
#line 2252
c_rt_lib0clear(&___nl__im__15);
#line 2252
c_rt_lib0clear(&___nl__im__16);
#line 2252
//clear ___nl__bool__17;
#line 2252
c_rt_lib0clear(&___nl__im__18);
#line 2252
c_rt_lib0clear(&___nl__im__19);
#line 2252
return ___nl__bool__20;
#line 2253
goto label_459;
#line 2253
label_144:
;
#line 2253
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 2253
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 2254
___nl__bool__23 = false;
#line 2254
c_rt_lib0clear(&___nl__im__0);
#line 2254
//clear ___nl__bool__1;
#line 2254
c_rt_lib0clear(&___nl__im__2);
#line 2254
c_rt_lib0clear(&___nl__im__3);
#line 2254
c_rt_lib0clear(&___nl__im__4);
#line 2254
//clear ___nl__bool__5;
#line 2254
c_rt_lib0clear(&___nl__im__6);
#line 2254
c_rt_lib0clear(&___nl__im__7);
#line 2254
//clear ___nl__bool__8;
#line 2254
c_rt_lib0clear(&___nl__im__9);
#line 2254
c_rt_lib0clear(&___nl__im__10);
#line 2254
//clear ___nl__bool__11;
#line 2254
c_rt_lib0clear(&___nl__im__12);
#line 2254
c_rt_lib0clear(&___nl__im__13);
#line 2254
//clear ___nl__bool__14;
#line 2254
c_rt_lib0clear(&___nl__im__15);
#line 2254
c_rt_lib0clear(&___nl__im__16);
#line 2254
//clear ___nl__bool__17;
#line 2254
c_rt_lib0clear(&___nl__im__18);
#line 2254
c_rt_lib0clear(&___nl__im__19);
#line 2254
//clear ___nl__bool__20;
#line 2254
c_rt_lib0clear(&___nl__im__21);
#line 2254
c_rt_lib0clear(&___nl__im__22);
#line 2254
return ___nl__bool__23;
#line 2255
goto label_459;
#line 2255
label_173:
;
#line 2255
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2255
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2256
___nl__bool__26 = true;
#line 2256
c_rt_lib0clear(&___nl__im__0);
#line 2256
//clear ___nl__bool__1;
#line 2256
c_rt_lib0clear(&___nl__im__2);
#line 2256
c_rt_lib0clear(&___nl__im__3);
#line 2256
c_rt_lib0clear(&___nl__im__4);
#line 2256
//clear ___nl__bool__5;
#line 2256
c_rt_lib0clear(&___nl__im__6);
#line 2256
c_rt_lib0clear(&___nl__im__7);
#line 2256
//clear ___nl__bool__8;
#line 2256
c_rt_lib0clear(&___nl__im__9);
#line 2256
c_rt_lib0clear(&___nl__im__10);
#line 2256
//clear ___nl__bool__11;
#line 2256
c_rt_lib0clear(&___nl__im__12);
#line 2256
c_rt_lib0clear(&___nl__im__13);
#line 2256
//clear ___nl__bool__14;
#line 2256
c_rt_lib0clear(&___nl__im__15);
#line 2256
c_rt_lib0clear(&___nl__im__16);
#line 2256
//clear ___nl__bool__17;
#line 2256
c_rt_lib0clear(&___nl__im__18);
#line 2256
c_rt_lib0clear(&___nl__im__19);
#line 2256
//clear ___nl__bool__20;
#line 2256
c_rt_lib0clear(&___nl__im__21);
#line 2256
c_rt_lib0clear(&___nl__im__22);
#line 2256
//clear ___nl__bool__23;
#line 2256
c_rt_lib0clear(&___nl__im__24);
#line 2256
c_rt_lib0clear(&___nl__im__25);
#line 2256
return ___nl__bool__26;
#line 2257
goto label_459;
#line 2257
label_205:
;
#line 2257
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2257
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 2258
___nl__bool__29 = false;
#line 2258
c_rt_lib0clear(&___nl__im__0);
#line 2258
//clear ___nl__bool__1;
#line 2258
c_rt_lib0clear(&___nl__im__2);
#line 2258
c_rt_lib0clear(&___nl__im__3);
#line 2258
c_rt_lib0clear(&___nl__im__4);
#line 2258
//clear ___nl__bool__5;
#line 2258
c_rt_lib0clear(&___nl__im__6);
#line 2258
c_rt_lib0clear(&___nl__im__7);
#line 2258
//clear ___nl__bool__8;
#line 2258
c_rt_lib0clear(&___nl__im__9);
#line 2258
c_rt_lib0clear(&___nl__im__10);
#line 2258
//clear ___nl__bool__11;
#line 2258
c_rt_lib0clear(&___nl__im__12);
#line 2258
c_rt_lib0clear(&___nl__im__13);
#line 2258
//clear ___nl__bool__14;
#line 2258
c_rt_lib0clear(&___nl__im__15);
#line 2258
c_rt_lib0clear(&___nl__im__16);
#line 2258
//clear ___nl__bool__17;
#line 2258
c_rt_lib0clear(&___nl__im__18);
#line 2258
c_rt_lib0clear(&___nl__im__19);
#line 2258
//clear ___nl__bool__20;
#line 2258
c_rt_lib0clear(&___nl__im__21);
#line 2258
c_rt_lib0clear(&___nl__im__22);
#line 2258
//clear ___nl__bool__23;
#line 2258
c_rt_lib0clear(&___nl__im__24);
#line 2258
c_rt_lib0clear(&___nl__im__25);
#line 2258
//clear ___nl__bool__26;
#line 2258
c_rt_lib0clear(&___nl__im__27);
#line 2258
c_rt_lib0clear(&___nl__im__28);
#line 2258
return ___nl__bool__29;
#line 2259
goto label_459;
#line 2259
label_240:
;
#line 2260
___nl__bool__30 = false;
#line 2260
c_rt_lib0clear(&___nl__im__0);
#line 2260
//clear ___nl__bool__1;
#line 2260
c_rt_lib0clear(&___nl__im__2);
#line 2260
c_rt_lib0clear(&___nl__im__3);
#line 2260
c_rt_lib0clear(&___nl__im__4);
#line 2260
//clear ___nl__bool__5;
#line 2260
c_rt_lib0clear(&___nl__im__6);
#line 2260
c_rt_lib0clear(&___nl__im__7);
#line 2260
//clear ___nl__bool__8;
#line 2260
c_rt_lib0clear(&___nl__im__9);
#line 2260
c_rt_lib0clear(&___nl__im__10);
#line 2260
//clear ___nl__bool__11;
#line 2260
c_rt_lib0clear(&___nl__im__12);
#line 2260
c_rt_lib0clear(&___nl__im__13);
#line 2260
//clear ___nl__bool__14;
#line 2260
c_rt_lib0clear(&___nl__im__15);
#line 2260
c_rt_lib0clear(&___nl__im__16);
#line 2260
//clear ___nl__bool__17;
#line 2260
c_rt_lib0clear(&___nl__im__18);
#line 2260
c_rt_lib0clear(&___nl__im__19);
#line 2260
//clear ___nl__bool__20;
#line 2260
c_rt_lib0clear(&___nl__im__21);
#line 2260
c_rt_lib0clear(&___nl__im__22);
#line 2260
//clear ___nl__bool__23;
#line 2260
c_rt_lib0clear(&___nl__im__24);
#line 2260
c_rt_lib0clear(&___nl__im__25);
#line 2260
//clear ___nl__bool__26;
#line 2260
c_rt_lib0clear(&___nl__im__27);
#line 2260
c_rt_lib0clear(&___nl__im__28);
#line 2260
//clear ___nl__bool__29;
#line 2260
return ___nl__bool__30;
#line 2261
goto label_459;
#line 2261
label_274:
;
#line 2262
___nl__bool__31 = false;
#line 2262
c_rt_lib0clear(&___nl__im__0);
#line 2262
//clear ___nl__bool__1;
#line 2262
c_rt_lib0clear(&___nl__im__2);
#line 2262
c_rt_lib0clear(&___nl__im__3);
#line 2262
c_rt_lib0clear(&___nl__im__4);
#line 2262
//clear ___nl__bool__5;
#line 2262
c_rt_lib0clear(&___nl__im__6);
#line 2262
c_rt_lib0clear(&___nl__im__7);
#line 2262
//clear ___nl__bool__8;
#line 2262
c_rt_lib0clear(&___nl__im__9);
#line 2262
c_rt_lib0clear(&___nl__im__10);
#line 2262
//clear ___nl__bool__11;
#line 2262
c_rt_lib0clear(&___nl__im__12);
#line 2262
c_rt_lib0clear(&___nl__im__13);
#line 2262
//clear ___nl__bool__14;
#line 2262
c_rt_lib0clear(&___nl__im__15);
#line 2262
c_rt_lib0clear(&___nl__im__16);
#line 2262
//clear ___nl__bool__17;
#line 2262
c_rt_lib0clear(&___nl__im__18);
#line 2262
c_rt_lib0clear(&___nl__im__19);
#line 2262
//clear ___nl__bool__20;
#line 2262
c_rt_lib0clear(&___nl__im__21);
#line 2262
c_rt_lib0clear(&___nl__im__22);
#line 2262
//clear ___nl__bool__23;
#line 2262
c_rt_lib0clear(&___nl__im__24);
#line 2262
c_rt_lib0clear(&___nl__im__25);
#line 2262
//clear ___nl__bool__26;
#line 2262
c_rt_lib0clear(&___nl__im__27);
#line 2262
c_rt_lib0clear(&___nl__im__28);
#line 2262
//clear ___nl__bool__29;
#line 2262
//clear ___nl__bool__30;
#line 2262
return ___nl__bool__31;
#line 2263
goto label_459;
#line 2263
label_309:
;
#line 2264
___nl__bool__32 = false;
#line 2264
c_rt_lib0clear(&___nl__im__0);
#line 2264
//clear ___nl__bool__1;
#line 2264
c_rt_lib0clear(&___nl__im__2);
#line 2264
c_rt_lib0clear(&___nl__im__3);
#line 2264
c_rt_lib0clear(&___nl__im__4);
#line 2264
//clear ___nl__bool__5;
#line 2264
c_rt_lib0clear(&___nl__im__6);
#line 2264
c_rt_lib0clear(&___nl__im__7);
#line 2264
//clear ___nl__bool__8;
#line 2264
c_rt_lib0clear(&___nl__im__9);
#line 2264
c_rt_lib0clear(&___nl__im__10);
#line 2264
//clear ___nl__bool__11;
#line 2264
c_rt_lib0clear(&___nl__im__12);
#line 2264
c_rt_lib0clear(&___nl__im__13);
#line 2264
//clear ___nl__bool__14;
#line 2264
c_rt_lib0clear(&___nl__im__15);
#line 2264
c_rt_lib0clear(&___nl__im__16);
#line 2264
//clear ___nl__bool__17;
#line 2264
c_rt_lib0clear(&___nl__im__18);
#line 2264
c_rt_lib0clear(&___nl__im__19);
#line 2264
//clear ___nl__bool__20;
#line 2264
c_rt_lib0clear(&___nl__im__21);
#line 2264
c_rt_lib0clear(&___nl__im__22);
#line 2264
//clear ___nl__bool__23;
#line 2264
c_rt_lib0clear(&___nl__im__24);
#line 2264
c_rt_lib0clear(&___nl__im__25);
#line 2264
//clear ___nl__bool__26;
#line 2264
c_rt_lib0clear(&___nl__im__27);
#line 2264
c_rt_lib0clear(&___nl__im__28);
#line 2264
//clear ___nl__bool__29;
#line 2264
//clear ___nl__bool__30;
#line 2264
//clear ___nl__bool__31;
#line 2264
return ___nl__bool__32;
#line 2265
goto label_459;
#line 2265
label_345:
;
#line 2266
___nl__bool__33 = false;
#line 2266
c_rt_lib0clear(&___nl__im__0);
#line 2266
//clear ___nl__bool__1;
#line 2266
c_rt_lib0clear(&___nl__im__2);
#line 2266
c_rt_lib0clear(&___nl__im__3);
#line 2266
c_rt_lib0clear(&___nl__im__4);
#line 2266
//clear ___nl__bool__5;
#line 2266
c_rt_lib0clear(&___nl__im__6);
#line 2266
c_rt_lib0clear(&___nl__im__7);
#line 2266
//clear ___nl__bool__8;
#line 2266
c_rt_lib0clear(&___nl__im__9);
#line 2266
c_rt_lib0clear(&___nl__im__10);
#line 2266
//clear ___nl__bool__11;
#line 2266
c_rt_lib0clear(&___nl__im__12);
#line 2266
c_rt_lib0clear(&___nl__im__13);
#line 2266
//clear ___nl__bool__14;
#line 2266
c_rt_lib0clear(&___nl__im__15);
#line 2266
c_rt_lib0clear(&___nl__im__16);
#line 2266
//clear ___nl__bool__17;
#line 2266
c_rt_lib0clear(&___nl__im__18);
#line 2266
c_rt_lib0clear(&___nl__im__19);
#line 2266
//clear ___nl__bool__20;
#line 2266
c_rt_lib0clear(&___nl__im__21);
#line 2266
c_rt_lib0clear(&___nl__im__22);
#line 2266
//clear ___nl__bool__23;
#line 2266
c_rt_lib0clear(&___nl__im__24);
#line 2266
c_rt_lib0clear(&___nl__im__25);
#line 2266
//clear ___nl__bool__26;
#line 2266
c_rt_lib0clear(&___nl__im__27);
#line 2266
c_rt_lib0clear(&___nl__im__28);
#line 2266
//clear ___nl__bool__29;
#line 2266
//clear ___nl__bool__30;
#line 2266
//clear ___nl__bool__31;
#line 2266
//clear ___nl__bool__32;
#line 2266
return ___nl__bool__33;
#line 2267
goto label_459;
#line 2267
label_382:
;
#line 2268
___nl__bool__34 = false;
#line 2268
c_rt_lib0clear(&___nl__im__0);
#line 2268
//clear ___nl__bool__1;
#line 2268
c_rt_lib0clear(&___nl__im__2);
#line 2268
c_rt_lib0clear(&___nl__im__3);
#line 2268
c_rt_lib0clear(&___nl__im__4);
#line 2268
//clear ___nl__bool__5;
#line 2268
c_rt_lib0clear(&___nl__im__6);
#line 2268
c_rt_lib0clear(&___nl__im__7);
#line 2268
//clear ___nl__bool__8;
#line 2268
c_rt_lib0clear(&___nl__im__9);
#line 2268
c_rt_lib0clear(&___nl__im__10);
#line 2268
//clear ___nl__bool__11;
#line 2268
c_rt_lib0clear(&___nl__im__12);
#line 2268
c_rt_lib0clear(&___nl__im__13);
#line 2268
//clear ___nl__bool__14;
#line 2268
c_rt_lib0clear(&___nl__im__15);
#line 2268
c_rt_lib0clear(&___nl__im__16);
#line 2268
//clear ___nl__bool__17;
#line 2268
c_rt_lib0clear(&___nl__im__18);
#line 2268
c_rt_lib0clear(&___nl__im__19);
#line 2268
//clear ___nl__bool__20;
#line 2268
c_rt_lib0clear(&___nl__im__21);
#line 2268
c_rt_lib0clear(&___nl__im__22);
#line 2268
//clear ___nl__bool__23;
#line 2268
c_rt_lib0clear(&___nl__im__24);
#line 2268
c_rt_lib0clear(&___nl__im__25);
#line 2268
//clear ___nl__bool__26;
#line 2268
c_rt_lib0clear(&___nl__im__27);
#line 2268
c_rt_lib0clear(&___nl__im__28);
#line 2268
//clear ___nl__bool__29;
#line 2268
//clear ___nl__bool__30;
#line 2268
//clear ___nl__bool__31;
#line 2268
//clear ___nl__bool__32;
#line 2268
//clear ___nl__bool__33;
#line 2268
return ___nl__bool__34;
#line 2269
goto label_459;
#line 2269
label_420:
;
#line 2270
___nl__bool__35 = false;
#line 2270
c_rt_lib0clear(&___nl__im__0);
#line 2270
//clear ___nl__bool__1;
#line 2270
c_rt_lib0clear(&___nl__im__2);
#line 2270
c_rt_lib0clear(&___nl__im__3);
#line 2270
c_rt_lib0clear(&___nl__im__4);
#line 2270
//clear ___nl__bool__5;
#line 2270
c_rt_lib0clear(&___nl__im__6);
#line 2270
c_rt_lib0clear(&___nl__im__7);
#line 2270
//clear ___nl__bool__8;
#line 2270
c_rt_lib0clear(&___nl__im__9);
#line 2270
c_rt_lib0clear(&___nl__im__10);
#line 2270
//clear ___nl__bool__11;
#line 2270
c_rt_lib0clear(&___nl__im__12);
#line 2270
c_rt_lib0clear(&___nl__im__13);
#line 2270
//clear ___nl__bool__14;
#line 2270
c_rt_lib0clear(&___nl__im__15);
#line 2270
c_rt_lib0clear(&___nl__im__16);
#line 2270
//clear ___nl__bool__17;
#line 2270
c_rt_lib0clear(&___nl__im__18);
#line 2270
c_rt_lib0clear(&___nl__im__19);
#line 2270
//clear ___nl__bool__20;
#line 2270
c_rt_lib0clear(&___nl__im__21);
#line 2270
c_rt_lib0clear(&___nl__im__22);
#line 2270
//clear ___nl__bool__23;
#line 2270
c_rt_lib0clear(&___nl__im__24);
#line 2270
c_rt_lib0clear(&___nl__im__25);
#line 2270
//clear ___nl__bool__26;
#line 2270
c_rt_lib0clear(&___nl__im__27);
#line 2270
c_rt_lib0clear(&___nl__im__28);
#line 2270
//clear ___nl__bool__29;
#line 2270
//clear ___nl__bool__30;
#line 2270
//clear ___nl__bool__31;
#line 2270
//clear ___nl__bool__32;
#line 2270
//clear ___nl__bool__33;
#line 2270
//clear ___nl__bool__34;
#line 2270
return ___nl__bool__35;
#line 2271
goto label_459;
#line 2271
label_459:
;
return false;

}

ImmT  generator_c0conv_to_im00const_t(generator_c0const_t0type* ___ref___rec__0) {
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 1
___nl__arr_ptr__3 = &((*___ref___rec__0).arr0field);
#line 1
c_rt_lib0move(&___nl__im__2, generator_c_priv0conv_to_im00ownarranon_type0000im(___nl__arr_ptr__3));
#line 1
___nl__arr_ptr__3 = NULL;
#line 1
___nl__im_ptr__5 = &((*___ref___rec__0).hash0field);
#line 1
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1
___nl__im_ptr__5 = NULL;
#line 1
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(141), ___nl__im__2, ___get_global_string_const(142), ___nl__im__4));
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
return ___nl__im__1;
#line 1
c_rt_lib0clear(&___nl__im__1);
#line 1
return NULL;
return NULL;

}

ImmT  generator_c_priv0conv_to_im00ownarranon_type0000im(anon_type00ownarranon_type00im* ___ref___arr__0) {
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
#line 2
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 2
___nl__int__3 = 0;
#line 2
___nl__int__4 = 1;
#line 2
___nl__int__5 = generator_c0anon_type00ownarranon_type00im0len(___ref___arr__0);
#line 2
label_4:
;
#line 2
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 2
if(___nl__bool__6){ goto label_13;}
#line 2
___nl__im_ptr__2 = generator_c0anon_type00ownarranon_type00im0get_ptr(&(*___ref___arr__0), ___nl__int__3);
#line 2
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__2));
#line 2
c_rt_lib0array_push(&___nl__im__1, ___nl__im__7);
#line 2
c_rt_lib0clear(&___nl__im__7);
#line 2
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 2
goto label_4;
#line 2
label_13:
;
#line 2
//clear ___nl__int__3;
#line 2
//clear ___nl__int__4;
#line 2
//clear ___nl__int__5;
#line 2
//clear ___nl__bool__6;
#line 2
return ___nl__im__1;
#line 2
c_rt_lib0clear(&___nl__im__1);
#line 2
//clear ___nl__int__3;
#line 2
//clear ___nl__int__4;
#line 2
//clear ___nl__int__5;
#line 2
//clear ___nl__bool__6;
#line 2
return NULL;
return NULL;

}

ImmT  generator_c0conv_to_im00state_t(generator_c0state_t0type* ___ref___rec__0) {
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT * ___nl__im_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT * ___nl__im_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT * ___nl__im_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT * ___nl__im_ptr__21 = NULL;
#line 3
___nl__im_ptr__3 = &((*___ref___rec__0).defined_types0field);
#line 3
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 3
___nl__im_ptr__3 = NULL;
#line 3
___nl__hash_ptr__5 = &((*___ref___rec__0).additional_imports0field);
#line 3
c_rt_lib0move(&___nl__im__4, generator_c_priv0conv_to_im00ownhashanon_type0000bool(___nl__hash_ptr__5));
#line 3
___nl__hash_ptr__5 = NULL;
#line 3
___nl__im_ptr__7 = &((*___ref___rec__0).ret_reg_type0field);
#line 3
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 3
___nl__im_ptr__7 = NULL;
#line 3
___nl__im_ptr__9 = &((*___ref___rec__0).header0field);
#line 3
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__9));
#line 3
___nl__im_ptr__9 = NULL;
#line 3
___nl__im_ptr__11 = &((*___ref___rec__0).global_string_const0field);
#line 3
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 3
___nl__im_ptr__11 = NULL;
#line 3
___nl__rec_ptr__13 = &((*___ref___rec__0).const0field);
#line 3
c_rt_lib0move(&___nl__im__12, generator_c_priv0conv_to_im00RBanon_type0000refgenerator_c00const_t00type00int00anon_type0000refgenerator_c00const_t00type00string00anon_type0000refgenerator_c00const_t00type00singleton00anon_type0000int00dynamic_nr00RE(___nl__rec_ptr__13));
#line 3
___nl__rec_ptr__13 = NULL;
#line 3
___nl__im_ptr__15 = &((*___ref___rec__0).mod_name0field);
#line 3
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 3
___nl__im_ptr__15 = NULL;
#line 3
___nl__im_ptr__17 = &((*___ref___rec__0).global_int_const0field);
#line 3
c_rt_lib0copy(&___nl__im__16, (*___nl__im_ptr__17));
#line 3
___nl__im_ptr__17 = NULL;
#line 3
___nl__im_ptr__19 = &((*___ref___rec__0).ret0field);
#line 3
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 3
___nl__im_ptr__19 = NULL;
#line 3
___nl__im_ptr__21 = &((*___ref___rec__0).fun_args0field);
#line 3
c_rt_lib0copy(&___nl__im__20, (*___nl__im_ptr__21));
#line 3
___nl__im_ptr__21 = NULL;
#line 3
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(430), ___nl__im__2, ___get_global_string_const(426), ___nl__im__4, ___get_global_string_const(429), ___nl__im__6, ___get_global_string_const(425), ___nl__im__8, ___get_global_string_const(424), ___nl__im__10, ___get_global_string_const(243), ___nl__im__12, ___get_global_string_const(427), ___nl__im__14, ___get_global_string_const(423), ___nl__im__16, ___get_global_string_const(112), ___nl__im__18, ___get_global_string_const(428), ___nl__im__20));
#line 3
c_rt_lib0clear(&___nl__im__2);
#line 3
c_rt_lib0clear(&___nl__im__4);
#line 3
c_rt_lib0clear(&___nl__im__6);
#line 3
c_rt_lib0clear(&___nl__im__8);
#line 3
c_rt_lib0clear(&___nl__im__10);
#line 3
c_rt_lib0clear(&___nl__im__12);
#line 3
c_rt_lib0clear(&___nl__im__14);
#line 3
c_rt_lib0clear(&___nl__im__16);
#line 3
c_rt_lib0clear(&___nl__im__18);
#line 3
c_rt_lib0clear(&___nl__im__20);
#line 3
return ___nl__im__1;
#line 3
c_rt_lib0clear(&___nl__im__1);
#line 3
return NULL;
return NULL;

}

ImmT  generator_c_priv0conv_to_im00ownhashanon_type0000bool(anon_type00ownhashanon_type00bool* ___ref___hash__0) {
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool * ___nl__bool_ptr__4 = NULL;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
#line 4
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 4
___nl__int__5 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___ref___hash__0, -1);
#line 4
label_2:
;
#line 4
___nl__bool__3 = ___nl__int__5 == -1;
#line 4
if(___nl__bool__3){ goto label_15;}
#line 4
c_rt_lib0copy(&___nl__im__2, (*___ref___hash__0).keys[___nl__int__5]);
#line 4
___nl__bool_ptr__4 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(&(*___ref___hash__0), ___nl__im__2, false);
#line 4
___nl__bool__6 = (*___nl__bool_ptr__4);
#line 4
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__6));
#line 4
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__1, ___nl__im__2, ___nl__im__7));
#line 4
//clear ___nl__bool__6;
#line 4
c_rt_lib0clear(&___nl__im__7);
#line 4
___nl__bool_ptr__4 = NULL;
#line 4
___nl__int__5 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___ref___hash__0, ___nl__int__5);
#line 4
goto label_2;
#line 4
label_15:
;
#line 4
c_rt_lib0clear(&___nl__im__2);
#line 4
//clear ___nl__bool__3;
#line 4
//clear ___nl__int__5;
#line 4
return ___nl__im__1;
#line 4
c_rt_lib0clear(&___nl__im__1);
#line 4
c_rt_lib0clear(&___nl__im__2);
#line 4
//clear ___nl__bool__3;
#line 4
//clear ___nl__int__5;
#line 4
return NULL;
return NULL;

}

ImmT  generator_c_priv0conv_to_im00RBanon_type0000refgenerator_c00const_t00type00int00anon_type0000refgenerator_c00const_t00type00string00anon_type0000refgenerator_c00const_t00type00singleton00anon_type0000int00dynamic_nr00RE(anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___ref___rec__0) {
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__7 = NULL;
INT  ___nl__int__8 = 0;
INT * ___nl__int_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 5
___nl__rec_ptr__3 = &((*___ref___rec__0).int0field);
#line 5
c_rt_lib0move(&___nl__im__2, generator_c0conv_to_im00const_t(___nl__rec_ptr__3));
#line 5
___nl__rec_ptr__3 = NULL;
#line 5
___nl__rec_ptr__5 = &((*___ref___rec__0).string0field);
#line 5
c_rt_lib0move(&___nl__im__4, generator_c0conv_to_im00const_t(___nl__rec_ptr__5));
#line 5
___nl__rec_ptr__5 = NULL;
#line 5
___nl__rec_ptr__7 = &((*___ref___rec__0).singleton0field);
#line 5
c_rt_lib0move(&___nl__im__6, generator_c0conv_to_im00const_t(___nl__rec_ptr__7));
#line 5
___nl__rec_ptr__7 = NULL;
#line 5
___nl__int_ptr__9 = &((*___ref___rec__0).dynamic_nr0field);
#line 5
___nl__int__8 = (*___nl__int_ptr__9);
#line 5
___nl__int_ptr__9 = NULL;
#line 5
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__8));
#line 5
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(419), ___nl__im__2, ___get_global_string_const(420), ___nl__im__4, ___get_global_string_const(421), ___nl__im__6, ___get_global_string_const(422), ___nl__im__10));
#line 5
c_rt_lib0clear(&___nl__im__2);
#line 5
c_rt_lib0clear(&___nl__im__4);
#line 5
c_rt_lib0clear(&___nl__im__6);
#line 5
//clear ___nl__int__8;
#line 5
c_rt_lib0clear(&___nl__im__10);
#line 5
return ___nl__im__1;
#line 5
c_rt_lib0clear(&___nl__im__1);
#line 5
return NULL;
return NULL;

}


static ImmT ___const__[18];
static int ___const_init__ = 1;
void generator_c_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[17];


for(int i=0;i<17;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 17);
}}
ImmT generator_c_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_c_priv0get_bin_ops0cal();
	break;
case 1:
	___const__[1] = generator_c_priv0get_bin_ops_mod0cal();
	break;
case 2:
	___const__[2] = generator_c_priv0get_unary_ops0cal();
	break;
case 3:
	___const__[3] = generator_c_priv0gen_unary_ops0cal();
	break;
case 4:
	___const__[4] = generator_c_priv0gen_bin_ops0cal();
	break;
case 5:
	___const__[5] = generator_c_priv0gen_bin_ops_mod0cal();
	break;
case 6:
	___const__[6] = generator_c0const_dict0cal();
	break;
case 7:
	___const__[7] = generator_c0fun_args_t0cal();
	break;
case 8:
	___const__[8] = generator_c0const_t0cal();
	break;
case 9:
	___const__[9] = generator_c0global_const_t0cal();
	break;
case 10:
	___const__[10] = generator_c0state_t0cal();
	break;
case 11:
	___const__[11] = generator_c_priv0im_t0cal();
	break;
case 12:
	___const__[12] = generator_c_priv0int_t0cal();
	break;
case 13:
	___const__[13] = generator_c_priv0bool_t0cal();
	break;
case 14:
	___const__[14] = generator_c0module_out_t0cal();
	break;
case 15:
	___const__[15] = generator_c0out_t0cal();
	break;
case 16:
	___const__[16] = generator_c_priv0get_cr0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
