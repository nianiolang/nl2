
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
ImmT  generator_c_priv0print_declaration(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1);
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
#line 20
c_rt_lib0move(&___nl__im__1, generator_c_priv0gen_bin_ops());
#line 20
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
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
#line 24
c_rt_lib0move(&___nl__im__1, generator_c_priv0gen_bin_ops_mod());
#line 24
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
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
#line 28
c_rt_lib0move(&___nl__im__1, generator_c_priv0gen_unary_ops());
#line 28
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
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
#line 32
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 33
c_rt_lib0move(&___nl__im__1,___get_global_string_const(365));
#line 33
c_rt_lib0move(&___nl__im__2,___get_global_string_const(366));
#line 33
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 34
c_rt_lib0move(&___nl__im__3,___get_global_string_const(367));
#line 34
c_rt_lib0move(&___nl__im__4,___get_global_string_const(368));
#line 34
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0move(&___nl__im__5,___get_global_string_const(369));
#line 35
c_rt_lib0move(&___nl__im__6,___get_global_string_const(370));
#line 35
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 36
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
#line 40
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 41
c_rt_lib0move(&___nl__im__1,___get_global_string_const(371));
#line 41
c_rt_lib0move(&___nl__im__2,___get_global_string_const(371));
#line 41
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0move(&___nl__im__3,___get_global_string_const(372));
#line 42
c_rt_lib0move(&___nl__im__4,___get_global_string_const(372));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 43
c_rt_lib0move(&___nl__im__5,___get_global_string_const(369));
#line 43
c_rt_lib0move(&___nl__im__6,___get_global_string_const(373));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 43
c_rt_lib0clear(&___nl__im__5);
#line 43
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0move(&___nl__im__7,___get_global_string_const(367));
#line 44
c_rt_lib0move(&___nl__im__8,___get_global_string_const(374));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0clear(&___nl__im__8);
#line 45
c_rt_lib0move(&___nl__im__9,___get_global_string_const(375));
#line 45
c_rt_lib0move(&___nl__im__10,___get_global_string_const(376));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 45
c_rt_lib0clear(&___nl__im__9);
#line 45
c_rt_lib0clear(&___nl__im__10);
#line 46
c_rt_lib0move(&___nl__im__11,___get_global_string_const(105));
#line 46
c_rt_lib0move(&___nl__im__12,___get_global_string_const(377));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 46
c_rt_lib0clear(&___nl__im__11);
#line 46
c_rt_lib0clear(&___nl__im__12);
#line 47
c_rt_lib0move(&___nl__im__13,___get_global_string_const(378));
#line 47
c_rt_lib0move(&___nl__im__14,___get_global_string_const(268));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__13, ___nl__im__14));
#line 47
c_rt_lib0clear(&___nl__im__13);
#line 47
c_rt_lib0clear(&___nl__im__14);
#line 48
c_rt_lib0move(&___nl__im__15,___get_global_string_const(379));
#line 48
c_rt_lib0move(&___nl__im__16,___get_global_string_const(380));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__15, ___nl__im__16));
#line 48
c_rt_lib0clear(&___nl__im__15);
#line 48
c_rt_lib0clear(&___nl__im__16);
#line 49
c_rt_lib0move(&___nl__im__17,___get_global_string_const(381));
#line 49
c_rt_lib0move(&___nl__im__18,___get_global_string_const(382));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__17, ___nl__im__18));
#line 49
c_rt_lib0clear(&___nl__im__17);
#line 49
c_rt_lib0clear(&___nl__im__18);
#line 50
c_rt_lib0move(&___nl__im__19,___get_global_string_const(383));
#line 50
c_rt_lib0move(&___nl__im__20,___get_global_string_const(384));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__19, ___nl__im__20));
#line 50
c_rt_lib0clear(&___nl__im__19);
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 51
c_rt_lib0move(&___nl__im__21,___get_global_string_const(385));
#line 51
c_rt_lib0move(&___nl__im__22,___get_global_string_const(386));
#line 51
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__21, ___nl__im__22));
#line 51
c_rt_lib0clear(&___nl__im__21);
#line 51
c_rt_lib0clear(&___nl__im__22);
#line 52
c_rt_lib0move(&___nl__im__23,___get_global_string_const(387));
#line 52
c_rt_lib0move(&___nl__im__24,___get_global_string_const(388));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__23, ___nl__im__24));
#line 52
c_rt_lib0clear(&___nl__im__23);
#line 52
c_rt_lib0clear(&___nl__im__24);
#line 53
c_rt_lib0move(&___nl__im__25,___get_global_string_const(389));
#line 53
c_rt_lib0move(&___nl__im__26,___get_global_string_const(390));
#line 53
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__25, ___nl__im__26));
#line 53
c_rt_lib0clear(&___nl__im__25);
#line 53
c_rt_lib0clear(&___nl__im__26);
#line 54
c_rt_lib0move(&___nl__im__27,___get_global_string_const(110));
#line 54
c_rt_lib0move(&___nl__im__28,___get_global_string_const(391));
#line 54
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__27, ___nl__im__28));
#line 54
c_rt_lib0clear(&___nl__im__27);
#line 54
c_rt_lib0clear(&___nl__im__28);
#line 55
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
#line 59
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__im__1,___get_global_string_const(369));
#line 60
c_rt_lib0move(&___nl__im__2,___get_global_string_const(392));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 61
c_rt_lib0move(&___nl__im__3,___get_global_string_const(367));
#line 61
c_rt_lib0move(&___nl__im__4,___get_global_string_const(393));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5,___get_global_string_const(375));
#line 62
c_rt_lib0move(&___nl__im__6,___get_global_string_const(394));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
c_rt_lib0clear(&___nl__im__6);
#line 63
c_rt_lib0move(&___nl__im__7,___get_global_string_const(105));
#line 63
c_rt_lib0move(&___nl__im__8,___get_global_string_const(395));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 63
c_rt_lib0clear(&___nl__im__7);
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 64
c_rt_lib0move(&___nl__im__9,___get_global_string_const(378));
#line 64
c_rt_lib0move(&___nl__im__10,___get_global_string_const(396));
#line 64
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 64
c_rt_lib0clear(&___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 65
c_rt_lib0move(&___nl__im__11,___get_global_string_const(110));
#line 65
c_rt_lib0move(&___nl__im__12,___get_global_string_const(397));
#line 65
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 66
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
#line 70
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 70
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 70
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__2, ___get_global_string_const(128), ___nl__im__4));
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
return ___nl__im__0;
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
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
#line 74
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_string_const(336), ___get_global_string_const(398)));
#line 74
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 74
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
return ___nl__im__0;
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
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
#line 78
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 78
c_rt_lib0move(&___nl__im__2, own0arr(___nl__im__3));
#line 78
c_rt_lib0clear(&___nl__im__3);
#line 78
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 78
c_rt_lib0clear(&___nl__im__5);
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__2, ___get_global_string_const(128), ___nl__im__4));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
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
#line 83
c_rt_lib0move(&___nl__im__5, ptd0ptd_im());
#line 83
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__5, ___get_global_string_const(399), ___nl__im__6));
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 84
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 85
c_rt_lib0move(&___nl__im__10, ptd0int());
#line 85
c_rt_lib0move(&___nl__im__9, ptd0arr(___nl__im__10));
#line 85
c_rt_lib0clear(&___nl__im__10);
#line 86
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 86
c_rt_lib0move(&___nl__im__12, ptd0hash(___nl__im__13));
#line 86
c_rt_lib0clear(&___nl__im__13);
#line 86
c_rt_lib0move(&___nl__im__11, ptd0hash(___nl__im__12));
#line 86
c_rt_lib0clear(&___nl__im__12);
#line 86
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(127), ___nl__im__2, ___get_global_string_const(128), ___nl__im__7, ___get_global_string_const(129), ___nl__im__9, ___get_global_string_const(130), ___nl__im__11));
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0clear(&___nl__im__9);
#line 86
c_rt_lib0clear(&___nl__im__11);
#line 86
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
return ___nl__im__0;
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
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
#line 92
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_string_const(400), ___get_global_string_const(401)));
#line 92
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 93
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_string_const(400), ___get_global_string_const(401)));
#line 93
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 94
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 95
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 96
c_rt_lib0move(&___nl__im__7, ptd0bool());
#line 96
c_rt_lib0move(&___nl__im__6, own0hash(___nl__im__7));
#line 96
c_rt_lib0clear(&___nl__im__7);
#line 97
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 98
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_string_const(400), ___get_global_string_const(402)));
#line 98
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__9));
#line 99
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_string_const(336), ___get_global_string_const(403)));
#line 99
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 101
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(400), ___get_global_string_const(404)));
#line 101
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 102
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(400), ___get_global_string_const(404)));
#line 102
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(400), ___get_global_string_const(404)));
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 104
c_rt_lib0move(&___nl__im__16, ptd0int());
#line 104
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(4, ___get_global_string_const(405), ___nl__im__13, ___get_global_string_const(406), ___nl__im__14, ___get_global_string_const(407), ___nl__im__15, ___get_global_string_const(408), ___nl__im__16));
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 104
c_rt_lib0clear(&___nl__im__15);
#line 104
c_rt_lib0clear(&___nl__im__16);
#line 104
c_rt_lib0move(&___nl__im__11, own0rec(___nl__im__12));
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 106
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 106
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__18));
#line 106
c_rt_lib0move(&___nl__im__17, ptd0hash(___nl__im__18));
#line 106
c_rt_lib0clear(&___nl__im__18);
#line 106
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(410), ___nl__im__2, ___get_global_string_const(411), ___nl__im__3, ___get_global_string_const(412), ___nl__im__4, ___get_global_string_const(413), ___nl__im__5, ___get_global_string_const(414), ___nl__im__6, ___get_global_string_const(415), ___nl__im__8, ___get_global_string_const(416), ___nl__im__9, ___get_global_string_const(417), ___nl__im__10, ___get_global_string_const(223), ___nl__im__11, ___get_global_string_const(418), ___nl__im__17));
#line 106
c_rt_lib0clear(&___nl__im__2);
#line 106
c_rt_lib0clear(&___nl__im__3);
#line 106
c_rt_lib0clear(&___nl__im__4);
#line 106
c_rt_lib0clear(&___nl__im__5);
#line 106
c_rt_lib0clear(&___nl__im__6);
#line 106
c_rt_lib0clear(&___nl__im__8);
#line 106
c_rt_lib0clear(&___nl__im__9);
#line 106
c_rt_lib0clear(&___nl__im__10);
#line 106
c_rt_lib0clear(&___nl__im__11);
#line 106
c_rt_lib0clear(&___nl__im__17);
#line 106
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
#line 106
c_rt_lib0clear(&___nl__im__1);
#line 106
return ___nl__im__0;
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
return NULL;
return NULL;

}

ImmT  generator_c_priv0print(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
#line 111
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 111
c_rt_lib0move(___nl__im_ptr__2, c_rt_lib0concat_add((*___nl__im_ptr__2), ___nl__im__1));
#line 111
___nl__im_ptr__2 = NULL;
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
return NULL;

}

ImmT  generator_c_priv0print_to_header(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
#line 115
___nl__im_ptr__2 = &((*___ref___rec__0).header0field);
#line 115
c_rt_lib0move(___nl__im_ptr__2, c_rt_lib0concat_add((*___nl__im_ptr__2), ___nl__im__1));
#line 115
___nl__im_ptr__2 = NULL;
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
return NULL;
return NULL;

}

ImmT  generator_c_priv0println_to_header(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 119
c_rt_lib0move(&___nl__im__3, string0lf());
#line 119
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__1, ___nl__im__3));
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
___nl__im_ptr__4 = &((*___ref___rec__0).header0field);
#line 119
c_rt_lib0move(___nl__im_ptr__4, c_rt_lib0concat_add((*___nl__im_ptr__4), ___nl__im__2));
#line 119
___nl__im_ptr__4 = NULL;
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__1);
#line 119
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
#line 123
c_rt_lib0move(&___nl__im__0,___get_global_string_const(419));
#line 123
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
#line 127
c_rt_lib0move(&___nl__im__0,___get_global_string_const(420));
#line 127
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
#line 131
c_rt_lib0move(&___nl__im__0,___get_global_string_const(421));
#line 131
return ___nl__im__0;
return NULL;

}

ImmT  generator_c_priv0println(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
#line 135
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 135
c_rt_lib0move(___nl__im_ptr__2, c_rt_lib0concat_add((*___nl__im_ptr__2), ___nl__im__1));
#line 135
___nl__im_ptr__2 = NULL;
#line 136
c_rt_lib0move(&___nl__im__3, string0lf());
#line 136
___nl__im_ptr__4 = &((*___ref___rec__0).ret0field);
#line 136
c_rt_lib0move(___nl__im_ptr__4, c_rt_lib0concat_add((*___nl__im_ptr__4), ___nl__im__3));
#line 136
___nl__im_ptr__4 = NULL;
#line 136
c_rt_lib0clear(&___nl__im__3);
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
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
#line 140
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 140
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 140
if(___nl__bool__3){ goto label_8;}
#line 142
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 142
if(___nl__bool__3){ goto label_16;}
#line 142
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 142
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 142
nl_die_arg(___nl__im__4);
#line 140
label_8:
;
#line 141
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
c_rt_lib0clear(&___nl__im__2);
#line 141
//clear ___nl__bool__3;
#line 141
c_rt_lib0clear(&___nl__im__4);
#line 141
return ___nl__im__5;
#line 142
goto label_33;
#line 142
label_16:
;
#line 143
c_rt_lib0move(&___nl__im__8,___get_global_string_const(423));
#line 143
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 143
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 143
c_rt_lib0clear(&___nl__im__8);
#line 143
c_rt_lib0clear(&___nl__im__9);
#line 143
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 143
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 143
c_rt_lib0clear(&___nl__im__7);
#line 143
c_rt_lib0clear(&___nl__im__10);
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
//clear ___nl__bool__3;
#line 143
c_rt_lib0clear(&___nl__im__4);
#line 143
c_rt_lib0clear(&___nl__im__5);
#line 143
return ___nl__im__6;
#line 144
goto label_33;
#line 144
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
#line 148
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 148
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 148
___nl__im_ptr__3 = NULL;
#line 149
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(219)));
#line 149
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 149
c_rt_lib0clear(&___nl__im__5);
#line 150
___nl__int__8 = c_rt_lib0array_len(___nl__im__2);
#line 150
___nl__bool__6 = ___nl__int__8 > ___nl__int__4;
#line 150
//clear ___nl__int__8;
#line 150
___nl__bool__7 = !___nl__bool__6;
#line 150
if(___nl__bool__7){ goto label_16;}
#line 150
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 150
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(355)));
#line 150
c_rt_lib0clear(&___nl__im__10);
#line 150
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(39));
#line 150
c_rt_lib0clear(&___nl__im__9);
#line 150
label_16:
;
#line 150
//clear ___nl__bool__7;
#line 150
___nl__bool__6 = !___nl__bool__6;
#line 150
if(___nl__bool__6){ goto label_35;}
#line 151
c_rt_lib0move(&___nl__im__13,___get_global_string_const(424));
#line 151
c_rt_lib0move(&___nl__im__14, generator_c_priv0reg_suffix(___nl__im__1));
#line 151
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 151
c_rt_lib0clear(&___nl__im__13);
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
c_rt_lib0move(&___nl__im__15,___get_global_string_const(322));
#line 151
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 151
c_rt_lib0clear(&___nl__im__12);
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
//clear ___nl__int__4;
#line 151
//clear ___nl__bool__6;
#line 151
return ___nl__im__11;
#line 152
goto label_48;
#line 152
label_35:
;
#line 153
c_rt_lib0move(&___nl__im__17,___get_global_string_const(425));
#line 153
c_rt_lib0move(&___nl__im__18, generator_c_priv0reg_suffix(___nl__im__1));
#line 153
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 153
c_rt_lib0clear(&___nl__im__17);
#line 153
c_rt_lib0clear(&___nl__im__18);
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
//clear ___nl__int__4;
#line 153
//clear ___nl__bool__6;
#line 153
c_rt_lib0clear(&___nl__im__11);
#line 153
return ___nl__im__16;
#line 154
goto label_48;
#line 154
label_48:
;
#line 154
//clear ___nl__bool__6;
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
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
#line 158
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 158
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 158
___nl__im_ptr__3 = NULL;
#line 159
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(219)));
#line 159
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 160
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 160
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(220));
#line 160
if(___nl__bool__7){ goto label_14;}
#line 166
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(422));
#line 166
if(___nl__bool__7){ goto label_64;}
#line 166
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 166
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 166
nl_die_arg(___nl__im__8);
#line 160
label_14:
;
#line 161
___nl__int__11 = c_rt_lib0array_len(___nl__im__2);
#line 161
___nl__bool__9 = ___nl__int__11 > ___nl__int__4;
#line 161
//clear ___nl__int__11;
#line 161
___nl__bool__10 = !___nl__bool__9;
#line 161
if(___nl__bool__10){ goto label_25;}
#line 161
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 161
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(355)));
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(39));
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
label_25:
;
#line 161
//clear ___nl__bool__10;
#line 161
___nl__bool__9 = !___nl__bool__9;
#line 161
if(___nl__bool__9){ goto label_43;}
#line 162
c_rt_lib0move(&___nl__im__15,___get_global_string_const(426));
#line 162
c_rt_lib0move(&___nl__im__16, generator_c_priv0reg_suffix(___nl__im__1));
#line 162
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 162
c_rt_lib0clear(&___nl__im__15);
#line 162
c_rt_lib0clear(&___nl__im__16);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
//clear ___nl__int__4;
#line 162
c_rt_lib0clear(&___nl__im__6);
#line 162
//clear ___nl__bool__7;
#line 162
c_rt_lib0clear(&___nl__im__8);
#line 162
//clear ___nl__bool__9;
#line 162
return ___nl__im__14;
#line 163
goto label_59;
#line 163
label_43:
;
#line 164
c_rt_lib0move(&___nl__im__18,___get_global_string_const(427));
#line 164
c_rt_lib0move(&___nl__im__19, generator_c_priv0reg_suffix(___nl__im__1));
#line 164
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 164
c_rt_lib0clear(&___nl__im__18);
#line 164
c_rt_lib0clear(&___nl__im__19);
#line 164
c_rt_lib0clear(&___nl__im__1);
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
//clear ___nl__int__4;
#line 164
c_rt_lib0clear(&___nl__im__6);
#line 164
//clear ___nl__bool__7;
#line 164
c_rt_lib0clear(&___nl__im__8);
#line 164
//clear ___nl__bool__9;
#line 164
c_rt_lib0clear(&___nl__im__14);
#line 164
return ___nl__im__17;
#line 165
goto label_59;
#line 165
label_59:
;
#line 165
//clear ___nl__bool__9;
#line 165
c_rt_lib0clear(&___nl__im__14);
#line 165
c_rt_lib0clear(&___nl__im__17);
#line 166
goto label_114;
#line 166
label_64:
;
#line 167
___nl__int__22 = c_rt_lib0array_len(___nl__im__2);
#line 167
___nl__bool__20 = ___nl__int__22 > ___nl__int__4;
#line 167
//clear ___nl__int__22;
#line 167
___nl__bool__21 = !___nl__bool__20;
#line 167
if(___nl__bool__21){ goto label_75;}
#line 167
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 167
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(355)));
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__23, ___get_global_string_const(39));
#line 167
c_rt_lib0clear(&___nl__im__23);
#line 167
label_75:
;
#line 167
//clear ___nl__bool__21;
#line 167
___nl__bool__20 = !___nl__bool__20;
#line 167
if(___nl__bool__20){ goto label_93;}
#line 168
c_rt_lib0move(&___nl__im__26,___get_global_string_const(428));
#line 168
c_rt_lib0move(&___nl__im__27, generator_c_priv0reg_suffix(___nl__im__1));
#line 168
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 168
c_rt_lib0clear(&___nl__im__26);
#line 168
c_rt_lib0clear(&___nl__im__27);
#line 168
c_rt_lib0clear(&___nl__im__1);
#line 168
c_rt_lib0clear(&___nl__im__2);
#line 168
//clear ___nl__int__4;
#line 168
c_rt_lib0clear(&___nl__im__6);
#line 168
//clear ___nl__bool__7;
#line 168
c_rt_lib0clear(&___nl__im__8);
#line 168
//clear ___nl__bool__20;
#line 168
return ___nl__im__25;
#line 169
goto label_109;
#line 169
label_93:
;
#line 170
c_rt_lib0move(&___nl__im__29,___get_global_string_const(425));
#line 170
c_rt_lib0move(&___nl__im__30, generator_c_priv0reg_suffix(___nl__im__1));
#line 170
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 170
c_rt_lib0clear(&___nl__im__29);
#line 170
c_rt_lib0clear(&___nl__im__30);
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
//clear ___nl__int__4;
#line 170
c_rt_lib0clear(&___nl__im__6);
#line 170
//clear ___nl__bool__7;
#line 170
c_rt_lib0clear(&___nl__im__8);
#line 170
//clear ___nl__bool__20;
#line 170
c_rt_lib0clear(&___nl__im__25);
#line 170
return ___nl__im__28;
#line 171
goto label_109;
#line 171
label_109:
;
#line 171
//clear ___nl__bool__20;
#line 171
c_rt_lib0clear(&___nl__im__25);
#line 171
c_rt_lib0clear(&___nl__im__28);
#line 172
goto label_114;
#line 172
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
#line 176
c_rt_lib0move(&___nl__im__3,___get_global_string_const(281));
#line 176
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 176
c_rt_lib0clear(&___nl__im__3);
#line 176
c_rt_lib0move(&___nl__im__4,___get_global_string_const(281));
#line 176
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 176
c_rt_lib0clear(&___nl__im__2);
#line 176
c_rt_lib0clear(&___nl__im__4);
#line 176
c_rt_lib0clear(&___nl__im__0);
#line 176
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
#line 180
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 180
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 180
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__2, ___get_global_string_const(70), ___nl__im__3));
#line 180
c_rt_lib0clear(&___nl__im__2);
#line 180
c_rt_lib0clear(&___nl__im__3);
#line 180
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 180
c_rt_lib0clear(&___nl__im__1);
#line 180
return ___nl__im__0;
#line 180
c_rt_lib0clear(&___nl__im__0);
#line 180
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
#line 184
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_string_const(400), ___get_global_string_const(429)));
#line 184
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 184
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 184
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_string_const(400), ___get_global_string_const(429)));
#line 184
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 184
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(183), ___nl__im__2, ___get_global_string_const(185), ___nl__im__4));
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 184
c_rt_lib0clear(&___nl__im__4);
#line 184
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
return ___nl__im__0;
#line 184
c_rt_lib0clear(&___nl__im__0);
#line 184
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
#line 188
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 189
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 190
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__0));
#line 190
label_3:
;
#line 190
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 190
if(___nl__bool__5){ goto label_11;}
#line 190
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 190
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__4));
#line 191
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__4));
#line 192
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 192
goto label_3;
#line 192
label_11:
;
#line 193
___nl__im_ptr__8 = &((*___ref___rec__1).defined_types0field);
#line 193
c_rt_lib0delete(generator_c_priv0gather_types(___nl__im__0, ___nl__im_ptr__8));
#line 193
___nl__im_ptr__8 = NULL;
#line 194
c_rt_lib0delete(array0sort(&___nl__im__3));
#line 195
___nl__int__10 = 0;
#line 195
___nl__int__11 = 1;
#line 195
___nl__int__12 = c_rt_lib0array_len(___nl__im__3);
#line 195
label_19:
;
#line 195
___nl__bool__13 = ___nl__int__10 >= ___nl__int__12;
#line 195
if(___nl__bool__13){ goto label_121;}
#line 195
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__3, ___nl__int__10));
#line 195
c_rt_lib0copy(&___nl__im__9, ___nl__im__14);
#line 196
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__0, ___nl__im__9));
#line 197
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___rec__1, ___nl__im__9));
#line 198
___nl__im_ptr__16 = &((*___ref___rec__1).global_int_const0field);
#line 198
c_rt_lib0move(&___nl__im__17,___get_global_string_const(130));
#line 198
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___nl__im_ptr__16), ___nl__im__17));
#line 198
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 198
c_rt_lib0delete(hash0set_value(&___nl__im__17, ___nl__im__9, ___nl__im__18));
#line 198
c_rt_lib0move(&___nl__string__19,___get_global_string_const(130));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__16, ___nl__string__19, ___nl__im__17));
#line 198
___nl__im_ptr__16 = NULL;
#line 198
c_rt_lib0clear(&___nl__im__17);
#line 198
c_rt_lib0clear(&___nl__im__18);
#line 198
c_rt_lib0clear(&___nl__string__19);
#line 199
___nl__im_ptr__20 = &((*___ref___rec__1).global_string_const0field);
#line 199
c_rt_lib0move(&___nl__im__21,___get_global_string_const(130));
#line 199
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___nl__im_ptr__20), ___nl__im__21));
#line 199
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 199
c_rt_lib0delete(hash0set_value(&___nl__im__21, ___nl__im__9, ___nl__im__22));
#line 199
c_rt_lib0move(&___nl__string__23,___get_global_string_const(130));
#line 199
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__20, ___nl__string__23, ___nl__im__21));
#line 199
___nl__im_ptr__20 = NULL;
#line 199
c_rt_lib0clear(&___nl__im__21);
#line 199
c_rt_lib0clear(&___nl__im__22);
#line 199
c_rt_lib0clear(&___nl__string__23);
#line 200
c_rt_lib0move(&___nl__im__24,___get_global_string_const(36));
#line 200
___nl__im_ptr__25 = &((*___ref___rec__1).ret0field);
#line 200
c_rt_lib0copy(___nl__im_ptr__25, ___nl__im__24);
#line 200
___nl__im_ptr__25 = NULL;
#line 200
c_rt_lib0clear(&___nl__im__24);
#line 201
c_rt_lib0move(&___nl__im__26,___get_global_string_const(36));
#line 201
___nl__im_ptr__27 = &((*___ref___rec__1).header0field);
#line 201
c_rt_lib0copy(___nl__im_ptr__27, ___nl__im__26);
#line 201
___nl__im_ptr__27 = NULL;
#line 201
c_rt_lib0clear(&___nl__im__26);
#line 202
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 202
___nl__im_ptr__29 = &((*___ref___rec__1).fun_args0field);
#line 202
c_rt_lib0copy(___nl__im_ptr__29, ___nl__im__28);
#line 202
___nl__im_ptr__29 = NULL;
#line 202
c_rt_lib0clear(&___nl__im__28);
#line 203
___nl__rec_ptr__30 = &((*___ref___rec__1).const0field);
#line 203
;
#line 203
___nl__int_ptr__31 = &(___nl__rec_ptr__30->dynamic_nr0field);
#line 204
(*___nl__int_ptr__31) = 0;
#line 204
___nl__int_ptr__31 = NULL;
#line 204
___nl__rec_ptr__32 = &(___nl__rec_ptr__30->int0field);
#line 205
;
#line 205
___nl__arr_ptr__33 = &(___nl__rec_ptr__32->arr0field);
#line 205
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__33));
(*___nl__arr_ptr__33).size = 0;
(*___nl__arr_ptr__33).capacity = 0;
(*___nl__arr_ptr__33).value = NULL;
#line 205
___nl__arr_ptr__33 = NULL;
#line 205
___nl__im_ptr__34 = &(___nl__rec_ptr__32->hash0field);
#line 205
c_rt_lib0move(___nl__im_ptr__34, c_rt_lib0hash_mk(0));
#line 205
___nl__im_ptr__34 = NULL;
#line 205
___nl__rec_ptr__32 = NULL;
#line 205
___nl__rec_ptr__35 = &(___nl__rec_ptr__30->string0field);
#line 206
;
#line 206
___nl__arr_ptr__36 = &(___nl__rec_ptr__35->arr0field);
#line 206
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__36));
(*___nl__arr_ptr__36).size = 0;
(*___nl__arr_ptr__36).capacity = 0;
(*___nl__arr_ptr__36).value = NULL;
#line 206
___nl__arr_ptr__36 = NULL;
#line 206
___nl__im_ptr__37 = &(___nl__rec_ptr__35->hash0field);
#line 206
c_rt_lib0move(___nl__im_ptr__37, c_rt_lib0hash_mk(0));
#line 206
___nl__im_ptr__37 = NULL;
#line 206
___nl__rec_ptr__35 = NULL;
#line 206
___nl__rec_ptr__38 = &(___nl__rec_ptr__30->singleton0field);
#line 207
;
#line 207
___nl__arr_ptr__39 = &(___nl__rec_ptr__38->arr0field);
#line 207
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__39));
(*___nl__arr_ptr__39).size = 0;
(*___nl__arr_ptr__39).capacity = 0;
(*___nl__arr_ptr__39).value = NULL;
#line 207
___nl__arr_ptr__39 = NULL;
#line 207
___nl__im_ptr__40 = &(___nl__rec_ptr__38->hash0field);
#line 207
c_rt_lib0move(___nl__im_ptr__40, c_rt_lib0hash_mk(0));
#line 207
___nl__im_ptr__40 = NULL;
#line 207
___nl__rec_ptr__38 = NULL;
#line 207
___nl__rec_ptr__30 = NULL;
#line 209
___nl__im_ptr__41 = &((*___ref___rec__1).mod_name0field);
#line 209
c_rt_lib0copy(___nl__im_ptr__41, ___nl__im__9);
#line 209
___nl__im_ptr__41 = NULL;
#line 210
___nl__hash_ptr__42 = &((*___ref___rec__1).additional_imports0field);
#line 210
generator_c0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__42));
(*___nl__hash_ptr__42).size = 0;
(*___nl__hash_ptr__42).capacity = 0;
(*___nl__hash_ptr__42).keys = NULL;
(*___nl__hash_ptr__42).values = NULL;
#line 210
___nl__hash_ptr__42 = NULL;
#line 211
___nl__im_ptr__44 = &((*___ref___rec__1).defined_types0field);
#line 211
c_rt_lib0copy(&___nl__im__43, (*___nl__im_ptr__44));
#line 211
___nl__im_ptr__44 = NULL;
#line 211
c_rt_lib0delete(generator_c_priv0print_mod(___ref___rec__1, ___nl__im__15, ___nl__im__43));
#line 211
c_rt_lib0clear(&___nl__im__43);
#line 212
___nl__im_ptr__47 = &((*___ref___rec__1).ret0field);
#line 212
c_rt_lib0copy(&___nl__im__46, (*___nl__im_ptr__47));
#line 212
___nl__im_ptr__47 = NULL;
#line 212
___nl__im_ptr__49 = &((*___ref___rec__1).header0field);
#line 212
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 212
___nl__im_ptr__49 = NULL;
#line 212
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__46, ___get_global_string_const(70), ___nl__im__48));
#line 212
c_rt_lib0clear(&___nl__im__46);
#line 212
c_rt_lib0clear(&___nl__im__48);
#line 212
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__9, ___nl__im__45));
#line 212
c_rt_lib0clear(&___nl__im__45);
#line 212
c_rt_lib0clear(&___nl__im__9);
#line 213
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 213
goto label_19;
#line 213
label_121:
;
#line 214
c_rt_lib0move(&___nl__im__51, generator_c_priv0generate_global_const_files(___ref___rec__1));
#line 214
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(2, ___get_global_string_const(183), ___nl__im__2, ___get_global_string_const(185), ___nl__im__51));
#line 214
c_rt_lib0clear(&___nl__im__51);
#line 214
c_rt_lib0clear(&___nl__im__0);
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
c_rt_lib0clear(&___nl__im__3);
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
//clear ___nl__bool__5;
#line 214
c_rt_lib0clear(&___nl__im__6);
#line 214
c_rt_lib0clear(&___nl__im__7);
#line 214
c_rt_lib0clear(&___nl__im__9);
#line 214
//clear ___nl__int__10;
#line 214
//clear ___nl__int__11;
#line 214
//clear ___nl__int__12;
#line 214
//clear ___nl__bool__13;
#line 214
c_rt_lib0clear(&___nl__im__14);
#line 214
c_rt_lib0clear(&___nl__im__15);
#line 214
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
#line 218
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 218
label_1:
;
#line 218
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 218
if(___nl__bool__3){ goto label_59;}
#line 218
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 218
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 219
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(209)));
#line 219
___nl__int__8 = 0;
#line 219
___nl__int__9 = 1;
#line 219
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 219
label_10:
;
#line 219
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 219
if(___nl__bool__11){ goto label_44;}
#line 219
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 219
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 220
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(167)));
#line 220
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(76));
#line 220
if(___nl__bool__14){ goto label_23;}
#line 221
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(75));
#line 221
if(___nl__bool__14){ goto label_25;}
#line 221
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 221
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 221
nl_die_arg(___nl__im__15);
#line 220
label_23:
;
#line 221
goto label_40;
#line 221
label_25:
;
#line 221
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(75)));
#line 221
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 222
c_rt_lib0move(&___nl__im__21,___get_global_string_const(34));
#line 222
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__2, ___nl__im__21));
#line 222
c_rt_lib0clear(&___nl__im__21);
#line 222
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(168)));
#line 222
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 222
c_rt_lib0clear(&___nl__im__20);
#line 222
c_rt_lib0clear(&___nl__im__22);
#line 222
c_rt_lib0copy(&___nl__im__18, ___nl__im__16);
#line 222
c_rt_lib0delete(c_rt_lib0hash_set_value(___ref___im__1, ___nl__im__19, ___nl__im__18));
#line 222
c_rt_lib0clear(&___nl__im__18);
#line 222
c_rt_lib0clear(&___nl__im__19);
#line 223
goto label_40;
#line 223
label_40:
;
#line 223
c_rt_lib0clear(&___nl__im__7);
#line 224
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 224
goto label_10;
#line 224
label_44:
;
#line 224
c_rt_lib0clear(&___nl__im__6);
#line 224
c_rt_lib0clear(&___nl__im__7);
#line 224
//clear ___nl__int__8;
#line 224
//clear ___nl__int__9;
#line 224
//clear ___nl__int__10;
#line 224
//clear ___nl__bool__11;
#line 224
c_rt_lib0clear(&___nl__im__12);
#line 224
c_rt_lib0clear(&___nl__im__13);
#line 224
//clear ___nl__bool__14;
#line 224
c_rt_lib0clear(&___nl__im__15);
#line 224
c_rt_lib0clear(&___nl__im__16);
#line 224
c_rt_lib0clear(&___nl__im__17);
#line 225
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 225
goto label_1;
#line 225
label_59:
;
#line 226
c_rt_lib0copy(&___nl__im__23, (*___ref___im__1));
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
c_rt_lib0clear(&___nl__im__2);
#line 226
//clear ___nl__bool__3;
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 226
c_rt_lib0clear(&___nl__im__7);
#line 226
//clear ___nl__int__8;
#line 226
//clear ___nl__int__9;
#line 226
//clear ___nl__int__10;
#line 226
//clear ___nl__bool__11;
#line 226
c_rt_lib0clear(&___nl__im__12);
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
//clear ___nl__bool__14;
#line 226
c_rt_lib0clear(&___nl__im__15);
#line 226
c_rt_lib0clear(&___nl__im__16);
#line 226
c_rt_lib0clear(&___nl__im__17);
#line 226
return ___nl__im__23;
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
c_rt_lib0clear(&___nl__im__2);
#line 226
//clear ___nl__bool__3;
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 226
c_rt_lib0clear(&___nl__im__7);
#line 226
//clear ___nl__int__8;
#line 226
//clear ___nl__int__9;
#line 226
//clear ___nl__int__10;
#line 226
//clear ___nl__bool__11;
#line 226
c_rt_lib0clear(&___nl__im__12);
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
//clear ___nl__bool__14;
#line 226
c_rt_lib0clear(&___nl__im__15);
#line 226
c_rt_lib0clear(&___nl__im__16);
#line 226
c_rt_lib0clear(&___nl__im__17);
#line 226
c_rt_lib0clear(&___nl__im__23);
#line 226
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
#line 230
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 230
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 230
c_rt_lib0copy(___nl__im_ptr__2, ___nl__im__1);
#line 230
___nl__im_ptr__2 = NULL;
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 231
___nl__im_ptr__4 = &((*___ref___rec__0).header0field);
#line 231
c_rt_lib0copy(___nl__im_ptr__4, ___nl__im__3);
#line 231
___nl__im_ptr__4 = NULL;
#line 231
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 232
___nl__im_ptr__6 = &((*___ref___rec__0).fun_args0field);
#line 232
c_rt_lib0copy(___nl__im_ptr__6, ___nl__im__5);
#line 232
___nl__im_ptr__6 = NULL;
#line 232
c_rt_lib0clear(&___nl__im__5);
#line 233
___nl__rec_ptr__7 = &((*___ref___rec__0).const0field);
#line 233
;
#line 233
___nl__int_ptr__8 = &(___nl__rec_ptr__7->dynamic_nr0field);
#line 234
(*___nl__int_ptr__8) = 0;
#line 234
___nl__int_ptr__8 = NULL;
#line 234
___nl__rec_ptr__9 = &(___nl__rec_ptr__7->int0field);
#line 235
;
#line 235
___nl__arr_ptr__10 = &(___nl__rec_ptr__9->arr0field);
#line 235
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__10));
(*___nl__arr_ptr__10).size = 0;
(*___nl__arr_ptr__10).capacity = 0;
(*___nl__arr_ptr__10).value = NULL;
#line 235
___nl__arr_ptr__10 = NULL;
#line 235
___nl__im_ptr__11 = &(___nl__rec_ptr__9->hash0field);
#line 235
c_rt_lib0move(___nl__im_ptr__11, c_rt_lib0hash_mk(0));
#line 235
___nl__im_ptr__11 = NULL;
#line 235
___nl__rec_ptr__9 = NULL;
#line 235
___nl__rec_ptr__12 = &(___nl__rec_ptr__7->string0field);
#line 236
;
#line 236
___nl__arr_ptr__13 = &(___nl__rec_ptr__12->arr0field);
#line 236
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__13));
(*___nl__arr_ptr__13).size = 0;
(*___nl__arr_ptr__13).capacity = 0;
(*___nl__arr_ptr__13).value = NULL;
#line 236
___nl__arr_ptr__13 = NULL;
#line 236
___nl__im_ptr__14 = &(___nl__rec_ptr__12->hash0field);
#line 236
c_rt_lib0move(___nl__im_ptr__14, c_rt_lib0hash_mk(0));
#line 236
___nl__im_ptr__14 = NULL;
#line 236
___nl__rec_ptr__12 = NULL;
#line 236
___nl__rec_ptr__15 = &(___nl__rec_ptr__7->singleton0field);
#line 237
;
#line 237
___nl__arr_ptr__16 = &(___nl__rec_ptr__15->arr0field);
#line 237
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__16));
(*___nl__arr_ptr__16).size = 0;
(*___nl__arr_ptr__16).capacity = 0;
(*___nl__arr_ptr__16).value = NULL;
#line 237
___nl__arr_ptr__16 = NULL;
#line 237
___nl__im_ptr__17 = &(___nl__rec_ptr__15->hash0field);
#line 237
c_rt_lib0move(___nl__im_ptr__17, c_rt_lib0hash_mk(0));
#line 237
___nl__im_ptr__17 = NULL;
#line 237
___nl__rec_ptr__15 = NULL;
#line 237
___nl__rec_ptr__7 = NULL;
#line 239
c_rt_lib0move(&___nl__im__18,___get_global_string_const(36));
#line 239
___nl__im_ptr__19 = &((*___ref___rec__0).mod_name0field);
#line 239
c_rt_lib0copy(___nl__im_ptr__19, ___nl__im__18);
#line 239
___nl__im_ptr__19 = NULL;
#line 239
c_rt_lib0clear(&___nl__im__18);
#line 240
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_cr());
#line 240
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__20));
#line 240
c_rt_lib0clear(&___nl__im__20);
#line 241
c_rt_lib0move(&___nl__im__21,___get_global_string_const(430));
#line 241
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__21));
#line 241
c_rt_lib0clear(&___nl__im__21);
#line 242
c_rt_lib0move(&___nl__im__23,___get_global_string_const(271));
#line 242
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_include(___nl__im__23));
#line 242
c_rt_lib0clear(&___nl__im__23);
#line 242
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__22));
#line 242
c_rt_lib0clear(&___nl__im__22);
#line 243
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_cr());
#line 243
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__24));
#line 243
c_rt_lib0clear(&___nl__im__24);
#line 244
c_rt_lib0move(&___nl__im__26,___get_global_string_const(431));
#line 244
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_include(___nl__im__26));
#line 244
c_rt_lib0clear(&___nl__im__26);
#line 244
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__25));
#line 244
c_rt_lib0clear(&___nl__im__25);
#line 245
___nl__im_ptr__29 = &((*___ref___rec__0).global_int_const0field);
#line 245
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 245
___nl__im_ptr__29 = NULL;
#line 245
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(127)));
#line 245
c_rt_lib0clear(&___nl__im__28);
#line 246
___nl__im_ptr__32 = &((*___ref___rec__0).global_string_const0field);
#line 246
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 246
___nl__im_ptr__32 = NULL;
#line 246
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(127)));
#line 246
c_rt_lib0clear(&___nl__im__31);
#line 247
___nl__int__33 = c_rt_lib0array_len(___nl__im__27);
#line 248
___nl__int__34 = c_rt_lib0array_len(___nl__im__30);
#line 249
c_rt_lib0move(&___nl__im__35,___get_global_string_const(432));
#line 249
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__35));
#line 249
c_rt_lib0clear(&___nl__im__35);
#line 250
c_rt_lib0move(&___nl__im__37, generator_c_priv0im_t());
#line 250
c_rt_lib0move(&___nl__im__38,___get_global_string_const(433));
#line 250
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 250
c_rt_lib0clear(&___nl__im__37);
#line 250
c_rt_lib0clear(&___nl__im__38);
#line 250
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__36));
#line 250
c_rt_lib0clear(&___nl__im__36);
#line 251
c_rt_lib0move(&___nl__im__40, generator_c_priv0im_t());
#line 251
c_rt_lib0move(&___nl__im__41,___get_global_string_const(434));
#line 251
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 251
c_rt_lib0clear(&___nl__im__40);
#line 251
c_rt_lib0clear(&___nl__im__41);
#line 251
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__39));
#line 251
c_rt_lib0clear(&___nl__im__39);
#line 252
c_rt_lib0move(&___nl__im__46,___get_global_string_const(435));
#line 253
c_rt_lib0move(&___nl__im__47, generator_c_priv0im_t());
#line 253
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__47));
#line 253
c_rt_lib0clear(&___nl__im__46);
#line 253
c_rt_lib0clear(&___nl__im__47);
#line 253
c_rt_lib0move(&___nl__im__48,___get_global_string_const(436));
#line 253
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__48));
#line 253
c_rt_lib0clear(&___nl__im__45);
#line 253
c_rt_lib0clear(&___nl__im__48);
#line 254
c_rt_lib0move(&___nl__im__49, generator_c_priv0im_t());
#line 254
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__49));
#line 254
c_rt_lib0clear(&___nl__im__44);
#line 254
c_rt_lib0clear(&___nl__im__49);
#line 254
c_rt_lib0move(&___nl__im__50,___get_global_string_const(437));
#line 254
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__50));
#line 254
c_rt_lib0clear(&___nl__im__43);
#line 254
c_rt_lib0clear(&___nl__im__50);
#line 254
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__42));
#line 254
c_rt_lib0clear(&___nl__im__42);
#line 257
c_rt_lib0move(&___nl__im__55,___get_global_string_const(438));
#line 257
c_rt_lib0move(&___nl__string__56, c_rt_lib0int_to_string(___nl__int__33));
#line 257
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__string__56));
#line 257
c_rt_lib0clear(&___nl__im__55);
#line 257
c_rt_lib0clear(&___nl__string__56);
#line 261
c_rt_lib0move(&___nl__im__57,___get_global_string_const(439));
#line 261
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__57));
#line 261
c_rt_lib0clear(&___nl__im__54);
#line 261
c_rt_lib0clear(&___nl__im__57);
#line 261
c_rt_lib0move(&___nl__string__58, c_rt_lib0int_to_string(___nl__int__34));
#line 261
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__string__58));
#line 261
c_rt_lib0clear(&___nl__im__53);
#line 261
c_rt_lib0clear(&___nl__string__58);
#line 262
c_rt_lib0move(&___nl__im__59,___get_global_string_const(440));
#line 262
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__59));
#line 262
c_rt_lib0clear(&___nl__im__52);
#line 262
c_rt_lib0clear(&___nl__im__59);
#line 262
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__51));
#line 262
c_rt_lib0clear(&___nl__im__51);
#line 264
___nl__int__60 = 0;
#line 264
___nl__int__61 = 1;
#line 264
label_141:
;
#line 264
___nl__bool__62 = ___nl__int__60 >= ___nl__int__33;
#line 264
if(___nl__bool__62){ goto label_163;}
#line 265
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_get(___nl__im__27, ___nl__int__60));
#line 265
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(220)));
#line 265
c_rt_lib0clear(&___nl__im__66);
#line 266
c_rt_lib0move(&___nl__im__68,___get_global_string_const(441));
#line 266
c_rt_lib0move(&___nl__string__69, c_rt_lib0int_to_string(___nl__int__60));
#line 266
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__string__69));
#line 266
c_rt_lib0clear(&___nl__im__68);
#line 266
c_rt_lib0clear(&___nl__string__69);
#line 266
c_rt_lib0move(&___nl__im__64, generator_c_priv0create_int_to_memory(___nl__im__65, ___nl__im__67));
#line 266
c_rt_lib0clear(&___nl__im__65);
#line 266
c_rt_lib0clear(&___nl__im__67);
#line 266
c_rt_lib0move(&___nl__im__70,___get_global_string_const(442));
#line 266
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__70));
#line 266
c_rt_lib0clear(&___nl__im__64);
#line 266
c_rt_lib0clear(&___nl__im__70);
#line 266
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__63));
#line 266
c_rt_lib0clear(&___nl__im__63);
#line 267
___nl__int__60 = ___nl__int__60 + ___nl__int__61;
#line 267
goto label_141;
#line 267
label_163:
;
#line 268
___nl__int__71 = 0;
#line 268
___nl__int__72 = 1;
#line 268
label_166:
;
#line 268
___nl__bool__73 = ___nl__int__71 >= ___nl__int__34;
#line 268
if(___nl__bool__73){ goto label_188;}
#line 269
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_get(___nl__im__30, ___nl__int__71));
#line 269
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__77, ___get_global_string_const(220)));
#line 269
c_rt_lib0clear(&___nl__im__77);
#line 270
c_rt_lib0move(&___nl__im__79,___get_global_string_const(443));
#line 270
c_rt_lib0move(&___nl__string__80, c_rt_lib0int_to_string(___nl__int__71));
#line 270
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__string__80));
#line 270
c_rt_lib0clear(&___nl__im__79);
#line 270
c_rt_lib0clear(&___nl__string__80);
#line 270
c_rt_lib0move(&___nl__im__75, generator_c_priv0create_string_to_memory(___nl__im__76, ___nl__im__78));
#line 270
c_rt_lib0clear(&___nl__im__76);
#line 270
c_rt_lib0clear(&___nl__im__78);
#line 270
c_rt_lib0move(&___nl__im__81,___get_global_string_const(442));
#line 270
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__81));
#line 270
c_rt_lib0clear(&___nl__im__75);
#line 270
c_rt_lib0clear(&___nl__im__81);
#line 270
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__74));
#line 270
c_rt_lib0clear(&___nl__im__74);
#line 271
___nl__int__71 = ___nl__int__71 + ___nl__int__72;
#line 271
goto label_166;
#line 271
label_188:
;
#line 272
c_rt_lib0move(&___nl__im__98,___get_global_string_const(444));
#line 273
c_rt_lib0move(&___nl__im__100,___get_global_string_const(445));
#line 273
c_rt_lib0move(&___nl__im__99, generator_c_priv0get_lib_fun(___nl__im__100));
#line 273
c_rt_lib0clear(&___nl__im__100);
#line 273
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__99));
#line 273
c_rt_lib0clear(&___nl__im__98);
#line 273
c_rt_lib0clear(&___nl__im__99);
#line 273
c_rt_lib0move(&___nl__im__101,___get_global_string_const(446));
#line 273
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__101));
#line 273
c_rt_lib0clear(&___nl__im__97);
#line 273
c_rt_lib0clear(&___nl__im__101);
#line 273
c_rt_lib0move(&___nl__im__102, generator_c_priv0im_t());
#line 273
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__102));
#line 273
c_rt_lib0clear(&___nl__im__96);
#line 273
c_rt_lib0clear(&___nl__im__102);
#line 273
c_rt_lib0move(&___nl__im__103,___get_global_string_const(447));
#line 273
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__103));
#line 273
c_rt_lib0clear(&___nl__im__95);
#line 273
c_rt_lib0clear(&___nl__im__103);
#line 273
c_rt_lib0move(&___nl__im__104, generator_c_priv0im_t());
#line 273
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__104));
#line 273
c_rt_lib0clear(&___nl__im__94);
#line 273
c_rt_lib0clear(&___nl__im__104);
#line 274
c_rt_lib0move(&___nl__im__105,___get_global_string_const(448));
#line 274
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__105));
#line 274
c_rt_lib0clear(&___nl__im__93);
#line 274
c_rt_lib0clear(&___nl__im__105);
#line 274
c_rt_lib0move(&___nl__string__106, c_rt_lib0int_to_string(___nl__int__33));
#line 274
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__string__106));
#line 274
c_rt_lib0clear(&___nl__im__92);
#line 274
c_rt_lib0clear(&___nl__string__106);
#line 274
c_rt_lib0move(&___nl__im__107,___get_global_string_const(440));
#line 274
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__107));
#line 274
c_rt_lib0clear(&___nl__im__91);
#line 274
c_rt_lib0clear(&___nl__im__107);
#line 275
c_rt_lib0move(&___nl__im__109,___get_global_string_const(449));
#line 275
c_rt_lib0move(&___nl__im__108, generator_c_priv0get_lib_fun(___nl__im__109));
#line 275
c_rt_lib0clear(&___nl__im__109);
#line 275
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__108));
#line 275
c_rt_lib0clear(&___nl__im__90);
#line 275
c_rt_lib0clear(&___nl__im__108);
#line 275
c_rt_lib0move(&___nl__im__110,___get_global_string_const(446));
#line 275
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__110));
#line 275
c_rt_lib0clear(&___nl__im__89);
#line 275
c_rt_lib0clear(&___nl__im__110);
#line 275
c_rt_lib0move(&___nl__im__111, generator_c_priv0im_t());
#line 275
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__111));
#line 275
c_rt_lib0clear(&___nl__im__88);
#line 275
c_rt_lib0clear(&___nl__im__111);
#line 275
c_rt_lib0move(&___nl__im__112,___get_global_string_const(450));
#line 275
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__112));
#line 275
c_rt_lib0clear(&___nl__im__87);
#line 275
c_rt_lib0clear(&___nl__im__112);
#line 275
c_rt_lib0move(&___nl__im__113, generator_c_priv0im_t());
#line 275
c_rt_lib0move(&___nl__im__85, c_rt_lib0concat_new(___nl__im__86, ___nl__im__113));
#line 275
c_rt_lib0clear(&___nl__im__86);
#line 275
c_rt_lib0clear(&___nl__im__113);
#line 276
c_rt_lib0move(&___nl__im__114,___get_global_string_const(451));
#line 276
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__im__114));
#line 276
c_rt_lib0clear(&___nl__im__85);
#line 276
c_rt_lib0clear(&___nl__im__114);
#line 276
c_rt_lib0move(&___nl__string__115, c_rt_lib0int_to_string(___nl__int__34));
#line 276
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__string__115));
#line 276
c_rt_lib0clear(&___nl__im__84);
#line 276
c_rt_lib0clear(&___nl__string__115);
#line 276
c_rt_lib0move(&___nl__im__116,___get_global_string_const(452));
#line 276
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__116));
#line 276
c_rt_lib0clear(&___nl__im__83);
#line 276
c_rt_lib0clear(&___nl__im__116);
#line 276
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__82));
#line 276
c_rt_lib0clear(&___nl__im__82);
#line 279
c_rt_lib0move(&___nl__im__122, generator_c_priv0im_t());
#line 279
c_rt_lib0move(&___nl__im__123,___get_global_string_const(453));
#line 279
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__im__123));
#line 279
c_rt_lib0clear(&___nl__im__122);
#line 279
c_rt_lib0clear(&___nl__im__123);
#line 280
c_rt_lib0move(&___nl__im__124, generator_c_priv0im_t());
#line 280
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__124));
#line 280
c_rt_lib0clear(&___nl__im__121);
#line 280
c_rt_lib0clear(&___nl__im__124);
#line 280
c_rt_lib0move(&___nl__im__125,___get_global_string_const(454));
#line 280
c_rt_lib0move(&___nl__im__119, c_rt_lib0concat_new(___nl__im__120, ___nl__im__125));
#line 280
c_rt_lib0clear(&___nl__im__120);
#line 280
c_rt_lib0clear(&___nl__im__125);
#line 281
c_rt_lib0move(&___nl__im__127,___get_global_string_const(455));
#line 281
c_rt_lib0move(&___nl__im__129,___get_global_string_const(456));
#line 281
c_rt_lib0move(&___nl__im__132,___get_global_string_const(457));
#line 281
c_rt_lib0move(&___nl__im__133, generator_c_priv0im_t());
#line 281
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__im__133));
#line 281
c_rt_lib0clear(&___nl__im__132);
#line 281
c_rt_lib0clear(&___nl__im__133);
#line 281
c_rt_lib0move(&___nl__im__134,___get_global_string_const(458));
#line 281
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__131, ___nl__im__134));
#line 281
c_rt_lib0clear(&___nl__im__131);
#line 281
c_rt_lib0clear(&___nl__im__134);
#line 281
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_mk(2, ___nl__im__129, ___nl__im__130));
#line 281
c_rt_lib0clear(&___nl__im__129);
#line 281
c_rt_lib0clear(&___nl__im__130);
#line 281
c_rt_lib0move(&___nl__im__126, generator_c_priv0get_fun_lib(___nl__im__127, ___nl__im__128));
#line 281
c_rt_lib0clear(&___nl__im__127);
#line 281
c_rt_lib0clear(&___nl__im__128);
#line 281
c_rt_lib0move(&___nl__im__118, c_rt_lib0concat_new(___nl__im__119, ___nl__im__126));
#line 281
c_rt_lib0clear(&___nl__im__119);
#line 281
c_rt_lib0clear(&___nl__im__126);
#line 281
c_rt_lib0move(&___nl__im__135,___get_global_string_const(459));
#line 281
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__135));
#line 281
c_rt_lib0clear(&___nl__im__118);
#line 281
c_rt_lib0clear(&___nl__im__135);
#line 281
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__117));
#line 281
c_rt_lib0clear(&___nl__im__117);
#line 284
c_rt_lib0move(&___nl__im__141, generator_c_priv0im_t());
#line 284
c_rt_lib0move(&___nl__im__142,___get_global_string_const(460));
#line 284
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__142));
#line 284
c_rt_lib0clear(&___nl__im__141);
#line 284
c_rt_lib0clear(&___nl__im__142);
#line 285
c_rt_lib0move(&___nl__im__143, generator_c_priv0im_t());
#line 285
c_rt_lib0move(&___nl__im__139, c_rt_lib0concat_new(___nl__im__140, ___nl__im__143));
#line 285
c_rt_lib0clear(&___nl__im__140);
#line 285
c_rt_lib0clear(&___nl__im__143);
#line 285
c_rt_lib0move(&___nl__im__144,___get_global_string_const(454));
#line 285
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__144));
#line 285
c_rt_lib0clear(&___nl__im__139);
#line 285
c_rt_lib0clear(&___nl__im__144);
#line 286
c_rt_lib0move(&___nl__im__146,___get_global_string_const(455));
#line 286
c_rt_lib0move(&___nl__im__148,___get_global_string_const(456));
#line 286
c_rt_lib0move(&___nl__im__151,___get_global_string_const(457));
#line 286
c_rt_lib0move(&___nl__im__152, generator_c_priv0im_t());
#line 286
c_rt_lib0move(&___nl__im__150, c_rt_lib0concat_new(___nl__im__151, ___nl__im__152));
#line 286
c_rt_lib0clear(&___nl__im__151);
#line 286
c_rt_lib0clear(&___nl__im__152);
#line 286
c_rt_lib0move(&___nl__im__153,___get_global_string_const(461));
#line 286
c_rt_lib0move(&___nl__im__149, c_rt_lib0concat_new(___nl__im__150, ___nl__im__153));
#line 286
c_rt_lib0clear(&___nl__im__150);
#line 286
c_rt_lib0clear(&___nl__im__153);
#line 286
c_rt_lib0move(&___nl__im__147, c_rt_lib0array_mk(2, ___nl__im__148, ___nl__im__149));
#line 286
c_rt_lib0clear(&___nl__im__148);
#line 286
c_rt_lib0clear(&___nl__im__149);
#line 286
c_rt_lib0move(&___nl__im__145, generator_c_priv0get_fun_lib(___nl__im__146, ___nl__im__147));
#line 286
c_rt_lib0clear(&___nl__im__146);
#line 286
c_rt_lib0clear(&___nl__im__147);
#line 286
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__145));
#line 286
c_rt_lib0clear(&___nl__im__138);
#line 286
c_rt_lib0clear(&___nl__im__145);
#line 286
c_rt_lib0move(&___nl__im__154,___get_global_string_const(459));
#line 286
c_rt_lib0move(&___nl__im__136, c_rt_lib0concat_new(___nl__im__137, ___nl__im__154));
#line 286
c_rt_lib0clear(&___nl__im__137);
#line 286
c_rt_lib0clear(&___nl__im__154);
#line 286
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__136));
#line 286
c_rt_lib0clear(&___nl__im__136);
#line 289
___nl__im_ptr__157 = &((*___ref___rec__0).ret0field);
#line 289
c_rt_lib0copy(&___nl__im__156, (*___nl__im_ptr__157));
#line 289
___nl__im_ptr__157 = NULL;
#line 289
___nl__im_ptr__159 = &((*___ref___rec__0).header0field);
#line 289
c_rt_lib0copy(&___nl__im__158, (*___nl__im_ptr__159));
#line 289
___nl__im_ptr__159 = NULL;
#line 289
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(2, ___get_global_string_const(65), ___nl__im__156, ___get_global_string_const(70), ___nl__im__158));
#line 289
c_rt_lib0clear(&___nl__im__156);
#line 289
c_rt_lib0clear(&___nl__im__158);
#line 289
c_rt_lib0clear(&___nl__im__27);
#line 289
c_rt_lib0clear(&___nl__im__30);
#line 289
//clear ___nl__int__33;
#line 289
//clear ___nl__int__34;
#line 289
//clear ___nl__int__60;
#line 289
//clear ___nl__int__61;
#line 289
//clear ___nl__bool__62;
#line 289
//clear ___nl__int__71;
#line 289
//clear ___nl__int__72;
#line 289
//clear ___nl__bool__73;
#line 289
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
#line 293
c_rt_lib0move(&___nl__im__3,___get_global_string_const(462));
#line 293
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 293
c_rt_lib0move(&___nl__im__4,___get_global_string_const(463));
#line 293
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 293
c_rt_lib0clear(&___nl__im__2);
#line 293
c_rt_lib0clear(&___nl__im__4);
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
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
#line 297
c_rt_lib0move(&___nl__im__3,___get_global_string_const(464));
#line 297
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
c_rt_lib0move(&___nl__im__4,___get_global_string_const(465));
#line 297
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 297
c_rt_lib0clear(&___nl__im__2);
#line 297
c_rt_lib0clear(&___nl__im__4);
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
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
#line 301
c_rt_lib0move(&___nl__im__0,___get_global_string_const(466));
#line 301
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
#line 310
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(210)));
#line 310
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(211));
#line 310
if(___nl__bool__4){ goto label_8;}
#line 312
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(467));
#line 312
if(___nl__bool__4){ goto label_11;}
#line 312
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 312
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 312
nl_die_arg(___nl__im__5);
#line 310
label_8:
;
#line 311
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 312
goto label_14;
#line 312
label_11:
;
#line 313
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 314
goto label_14;
#line 314
label_14:
;
#line 315
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 315
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_name(___nl__im__2, ___nl__im__7, ___nl__im__1));
#line 315
c_rt_lib0clear(&___nl__im__7);
#line 315
c_rt_lib0clear(&___nl__im__0);
#line 315
c_rt_lib0clear(&___nl__im__1);
#line 315
c_rt_lib0clear(&___nl__im__2);
#line 315
c_rt_lib0clear(&___nl__im__3);
#line 315
//clear ___nl__bool__4;
#line 315
c_rt_lib0clear(&___nl__im__5);
#line 315
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
#line 319
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 320
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 321
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(468)));
#line 321
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_type_name(___nl__im__8));
#line 321
c_rt_lib0clear(&___nl__im__8);
#line 321
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 321
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 321
c_rt_lib0clear(&___nl__im__7);
#line 321
c_rt_lib0clear(&___nl__im__9);
#line 321
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__3));
#line 321
c_rt_lib0clear(&___nl__im__6);
#line 321
c_rt_lib0move(&___nl__im__10,___get_global_string_const(457));
#line 321
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 321
c_rt_lib0clear(&___nl__im__5);
#line 321
c_rt_lib0clear(&___nl__im__10);
#line 321
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 321
c_rt_lib0clear(&___nl__im__4);
#line 322
___nl__int__11 = 0;
#line 323
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 323
___nl__int__14 = 0;
#line 323
___nl__int__15 = 1;
#line 323
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 323
label_22:
;
#line 323
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 323
if(___nl__bool__17){ goto label_88;}
#line 323
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 323
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 324
___nl__int__20 = 0;
#line 324
___nl__bool__19 = ___nl__int__20 == ___nl__int__11;
#line 324
//clear ___nl__int__20;
#line 324
___nl__bool__19 = !___nl__bool__19;
#line 324
___nl__bool__19 = !___nl__bool__19;
#line 324
if(___nl__bool__19){ goto label_37;}
#line 324
c_rt_lib0move(&___nl__im__21,___get_global_string_const(314));
#line 324
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__21));
#line 324
c_rt_lib0clear(&___nl__im__21);
#line 324
goto label_37;
#line 324
label_37:
;
#line 324
//clear ___nl__bool__19;
#line 325
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(355)));
#line 325
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(225));
#line 325
if(___nl__bool__23){ goto label_47;}
#line 327
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(39));
#line 327
if(___nl__bool__23){ goto label_64;}
#line 327
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 327
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__22));
#line 327
nl_die_arg(___nl__im__24);
#line 325
label_47:
;
#line 326
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(206)));
#line 326
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_type_name(___nl__im__28));
#line 326
c_rt_lib0clear(&___nl__im__28);
#line 326
c_rt_lib0move(&___nl__im__29,___get_global_string_const(470));
#line 326
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 326
c_rt_lib0clear(&___nl__im__27);
#line 326
c_rt_lib0clear(&___nl__im__29);
#line 326
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(471)));
#line 326
c_rt_lib0move(&___nl__im__30, generator_c_priv0reg_suffix(___nl__im__31));
#line 326
c_rt_lib0clear(&___nl__im__31);
#line 326
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 326
c_rt_lib0clear(&___nl__im__26);
#line 326
c_rt_lib0clear(&___nl__im__30);
#line 326
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 326
c_rt_lib0clear(&___nl__im__25);
#line 327
goto label_81;
#line 327
label_64:
;
#line 328
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(206)));
#line 328
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_type_name(___nl__im__35));
#line 328
c_rt_lib0clear(&___nl__im__35);
#line 328
c_rt_lib0move(&___nl__im__36,___get_global_string_const(472));
#line 328
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__36));
#line 328
c_rt_lib0clear(&___nl__im__34);
#line 328
c_rt_lib0clear(&___nl__im__36);
#line 328
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(471)));
#line 328
c_rt_lib0move(&___nl__im__37, generator_c_priv0reg_suffix(___nl__im__38));
#line 328
c_rt_lib0clear(&___nl__im__38);
#line 328
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__37));
#line 328
c_rt_lib0clear(&___nl__im__33);
#line 328
c_rt_lib0clear(&___nl__im__37);
#line 328
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__32));
#line 328
c_rt_lib0clear(&___nl__im__32);
#line 329
goto label_81;
#line 329
label_81:
;
#line 330
___nl__int__39 = 1;
#line 330
___nl__int__11 = ___nl__int__11 + ___nl__int__39;
#line 330
//clear ___nl__int__39;
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 331
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 331
goto label_22;
#line 331
label_88:
;
#line 332
c_rt_lib0move(&___nl__im__40,___get_global_string_const(322));
#line 332
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__40));
#line 332
c_rt_lib0clear(&___nl__im__40);
#line 333
c_rt_lib0clear(&___nl__im__0);
#line 333
c_rt_lib0clear(&___nl__im__1);
#line 333
c_rt_lib0clear(&___nl__im__3);
#line 333
//clear ___nl__int__11;
#line 333
c_rt_lib0clear(&___nl__im__12);
#line 333
c_rt_lib0clear(&___nl__im__13);
#line 333
//clear ___nl__int__14;
#line 333
//clear ___nl__int__15;
#line 333
//clear ___nl__int__16;
#line 333
//clear ___nl__bool__17;
#line 333
c_rt_lib0clear(&___nl__im__18);
#line 333
c_rt_lib0clear(&___nl__im__22);
#line 333
//clear ___nl__bool__23;
#line 333
c_rt_lib0clear(&___nl__im__24);
#line 333
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
#line 337
___nl__int__2 = 1;
#line 337
___nl__int__2 = -___nl__int__2;
#line 338
___nl__im_ptr__5 = &((*___ref___rec__0).hash0field);
#line 338
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 338
___nl__im_ptr__5 = NULL;
#line 338
___nl__bool__3 = hash0has_key(___nl__im__4, ___nl__im__1);
#line 338
c_rt_lib0clear(&___nl__im__4);
#line 338
___nl__bool__3 = !___nl__bool__3;
#line 338
___nl__bool__3 = !___nl__bool__3;
#line 338
if(___nl__bool__3){ goto label_22;}
#line 339
___nl__arr_ptr__6 = &((*___ref___rec__0).arr0field);
#line 339
___nl__int__2 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__6);
#line 339
___nl__arr_ptr__6 = NULL;
#line 340
___nl__arr_ptr__7 = &((*___ref___rec__0).arr0field);
#line 340
generator_c0anon_type00ownarranon_type00im0push(___nl__arr_ptr__7, ___nl__im__1);
#line 340
___nl__arr_ptr__7 = NULL;
#line 341
___nl__im_ptr__8 = &((*___ref___rec__0).hash0field);
#line 341
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 341
c_rt_lib0delete(hash0set_value(___nl__im_ptr__8, ___nl__im__1, ___nl__im__9));
#line 341
___nl__im_ptr__8 = NULL;
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 342
goto label_31;
#line 342
label_22:
;
#line 343
___nl__im_ptr__11 = &((*___ref___rec__0).hash0field);
#line 343
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 343
___nl__im_ptr__11 = NULL;
#line 343
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__10, ___nl__im__1));
#line 343
___nl__int__2 = getIntFromImm(___nl__im__12);
#line 343
c_rt_lib0clear(&___nl__im__10);
#line 343
c_rt_lib0clear(&___nl__im__12);
#line 344
goto label_31;
#line 344
label_31:
;
#line 344
//clear ___nl__bool__3;
#line 345
c_rt_lib0clear(&___nl__im__1);
#line 345
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
#line 349
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 349
c_rt_lib0move(&___nl__im__3, hash0get_value(___nl__im__4, ___nl__im__2));
#line 349
c_rt_lib0clear(&___nl__im__4);
#line 350
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 350
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__1, ___nl__im__5));
#line 350
c_rt_lib0clear(&___nl__im__5);
#line 351
c_rt_lib0move(&___nl__im__6,___get_global_string_const(130));
#line 351
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 351
c_rt_lib0delete(hash0set_value(&___nl__im__6, ___nl__im__2, ___nl__im__3));
#line 351
c_rt_lib0move(&___nl__string__7,___get_global_string_const(130));
#line 351
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__6));
#line 351
c_rt_lib0clear(&___nl__im__6);
#line 351
c_rt_lib0clear(&___nl__string__7);
#line 351
c_rt_lib0clear(&___nl__im__1);
#line 351
c_rt_lib0clear(&___nl__im__2);
#line 351
c_rt_lib0clear(&___nl__im__3);
#line 351
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
#line 356
___nl__int__4 = 1;
#line 356
___nl__int__4 = -___nl__int__4;
#line 357
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(128)));
#line 357
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__1);
#line 357
c_rt_lib0clear(&___nl__im__6);
#line 357
___nl__bool__5 = !___nl__bool__5;
#line 357
___nl__bool__5 = !___nl__bool__5;
#line 357
if(___nl__bool__5){ goto label_84;}
#line 358
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(129)));
#line 358
___nl__int__8 = c_rt_lib0array_len(___nl__im__9);
#line 358
c_rt_lib0clear(&___nl__im__9);
#line 358
___nl__int__10 = 0;
#line 358
___nl__bool__7 = ___nl__int__8 > ___nl__int__10;
#line 358
//clear ___nl__int__8;
#line 358
//clear ___nl__int__10;
#line 358
___nl__bool__7 = !___nl__bool__7;
#line 358
if(___nl__bool__7){ goto label_53;}
#line 359
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(129)));
#line 359
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(129)));
#line 359
___nl__int__13 = c_rt_lib0array_len(___nl__im__14);
#line 359
c_rt_lib0clear(&___nl__im__14);
#line 359
___nl__int__15 = 1;
#line 359
___nl__int__12 = ___nl__int__13 - ___nl__int__15;
#line 359
//clear ___nl__int__13;
#line 359
//clear ___nl__int__15;
#line 359
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__11, ___nl__int__12));
#line 359
___nl__int__4 = getIntFromImm(___nl__im__16);
#line 359
c_rt_lib0clear(&___nl__im__11);
#line 359
//clear ___nl__int__12;
#line 359
c_rt_lib0clear(&___nl__im__16);
#line 360
c_rt_lib0move(&___nl__im__17,___get_global_string_const(129));
#line 360
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__17));
#line 360
c_rt_lib0delete(array0pop(&___nl__im__17));
#line 360
c_rt_lib0move(&___nl__string__18,___get_global_string_const(129));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__18, ___nl__im__17));
#line 360
c_rt_lib0clear(&___nl__im__17);
#line 360
c_rt_lib0clear(&___nl__string__18);
#line 361
___nl__int__20 = 1;
#line 361
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__20));
#line 361
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__2, ___get_global_string_const(399), ___nl__im__21));
#line 361
//clear ___nl__int__20;
#line 361
c_rt_lib0clear(&___nl__im__21);
#line 361
c_rt_lib0move(&___nl__im__22,___get_global_string_const(127));
#line 361
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__22));
#line 361
c_rt_lib0copy(&___nl__im__23, ___nl__im__19);
#line 361
c_rt_lib0array_set(&___nl__im__22, ___nl__int__4, ___nl__im__23);
#line 361
c_rt_lib0move(&___nl__string__24,___get_global_string_const(127));
#line 361
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__24, ___nl__im__22));
#line 361
c_rt_lib0clear(&___nl__im__19);
#line 361
c_rt_lib0clear(&___nl__im__22);
#line 361
c_rt_lib0clear(&___nl__im__23);
#line 361
c_rt_lib0clear(&___nl__string__24);
#line 362
goto label_71;
#line 362
label_53:
;
#line 363
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(127)));
#line 363
___nl__int__4 = c_rt_lib0array_len(___nl__im__25);
#line 363
c_rt_lib0clear(&___nl__im__25);
#line 364
c_rt_lib0move(&___nl__im__26,___get_global_string_const(127));
#line 364
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__26));
#line 364
___nl__int__28 = 1;
#line 364
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__28));
#line 364
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__2, ___get_global_string_const(399), ___nl__im__29));
#line 364
//clear ___nl__int__28;
#line 364
c_rt_lib0clear(&___nl__im__29);
#line 364
c_rt_lib0delete(array0push(&___nl__im__26, ___nl__im__27));
#line 364
c_rt_lib0move(&___nl__string__30,___get_global_string_const(127));
#line 364
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__30, ___nl__im__26));
#line 364
c_rt_lib0clear(&___nl__im__26);
#line 364
c_rt_lib0clear(&___nl__im__27);
#line 364
c_rt_lib0clear(&___nl__string__30);
#line 365
goto label_71;
#line 365
label_71:
;
#line 365
//clear ___nl__bool__7;
#line 366
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 367
c_rt_lib0move(&___nl__im__31,___get_global_string_const(128));
#line 367
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__31));
#line 367
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__4));
#line 367
c_rt_lib0delete(hash0set_value(&___nl__im__31, ___nl__im__1, ___nl__im__32));
#line 367
c_rt_lib0move(&___nl__string__33,___get_global_string_const(128));
#line 367
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__33, ___nl__im__31));
#line 367
c_rt_lib0clear(&___nl__im__31);
#line 367
c_rt_lib0clear(&___nl__im__32);
#line 367
c_rt_lib0clear(&___nl__string__33);
#line 368
goto label_123;
#line 368
label_84:
;
#line 369
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(128)));
#line 369
c_rt_lib0move(&___nl__im__35, hash0get_value(___nl__im__34, ___nl__im__1));
#line 369
___nl__int__4 = getIntFromImm(___nl__im__35);
#line 369
c_rt_lib0clear(&___nl__im__34);
#line 369
c_rt_lib0clear(&___nl__im__35);
#line 370
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 370
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__37, ___nl__im__3));
#line 370
c_rt_lib0clear(&___nl__im__37);
#line 371
___nl__bool__38 = hash0has_key(___nl__im__36, ___nl__im__1);
#line 371
___nl__bool__38 = !___nl__bool__38;
#line 371
___nl__bool__38 = !___nl__bool__38;
#line 371
if(___nl__bool__38){ goto label_120;}
#line 372
c_rt_lib0move(&___nl__im__39,___get_global_string_const(127));
#line 372
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__39));
#line 372
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_arr(___nl__im__39, ___nl__int__4));
#line 372
c_rt_lib0move(&___nl__im__41,___get_global_string_const(399));
#line 372
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash(___nl__im__40, ___nl__im__41));
#line 372
___nl__int__42 = 1;
#line 372
___nl__int__43 = getIntFromImm(___nl__im__41);
#line 372
___nl__int__44 = ___nl__int__43 + ___nl__int__42;
#line 372
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__44));
#line 372
c_rt_lib0move(&___nl__string__45,___get_global_string_const(399));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__40, ___nl__string__45, ___nl__im__41));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__39, ___nl__int__4, ___nl__im__40));
#line 372
c_rt_lib0move(&___nl__string__45,___get_global_string_const(127));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__45, ___nl__im__39));
#line 372
c_rt_lib0clear(&___nl__im__39);
#line 372
c_rt_lib0clear(&___nl__im__40);
#line 372
c_rt_lib0clear(&___nl__im__41);
#line 372
//clear ___nl__int__42;
#line 372
//clear ___nl__int__43;
#line 372
//clear ___nl__int__44;
#line 372
c_rt_lib0clear(&___nl__string__45);
#line 373
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 374
goto label_120;
#line 374
label_120:
;
#line 374
//clear ___nl__bool__38;
#line 375
goto label_123;
#line 375
label_123:
;
#line 375
//clear ___nl__bool__5;
#line 375
c_rt_lib0clear(&___nl__im__36);
#line 376
c_rt_lib0clear(&___nl__im__1);
#line 376
c_rt_lib0clear(&___nl__im__2);
#line 376
c_rt_lib0clear(&___nl__im__3);
#line 376
return ___nl__int__4;
return 0;

}

ImmT  generator_c0clear_module_from_state(generator_c0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
#line 380
___nl__im_ptr__2 = &((*___ref___rec__0).global_int_const0field);
#line 380
c_rt_lib0delete(generator_c_priv0clear_module_from_const(___nl__im_ptr__2, ___nl__im__1));
#line 380
___nl__im_ptr__2 = NULL;
#line 381
___nl__im_ptr__3 = &((*___ref___rec__0).global_string_const0field);
#line 381
c_rt_lib0delete(generator_c_priv0clear_module_from_const(___nl__im_ptr__3, ___nl__im__1));
#line 381
___nl__im_ptr__3 = NULL;
#line 381
c_rt_lib0clear(&___nl__im__1);
#line 381
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
#line 385
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 385
___nl__bool__2 = hash0has_key(___nl__im__3, ___nl__im__1);
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
___nl__bool__2 = !___nl__bool__2;
#line 385
if(___nl__bool__2){ goto label_84;}
#line 386
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 386
c_rt_lib0move(&___nl__im__4, hash0get_value(___nl__im__5, ___nl__im__1));
#line 386
c_rt_lib0clear(&___nl__im__5);
#line 387
c_rt_lib0move(&___nl__im__9, c_rt_lib0init_iter(___nl__im__4));
#line 387
label_9:
;
#line 387
___nl__bool__7 = c_rt_lib0is_end_hash(___nl__im__9);
#line 387
if(___nl__bool__7){ goto label_75;}
#line 387
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 387
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__6));
#line 388
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(128)));
#line 388
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__11, ___nl__im__6));
#line 388
___nl__int__10 = getIntFromImm(___nl__im__12);
#line 388
c_rt_lib0clear(&___nl__im__11);
#line 388
c_rt_lib0clear(&___nl__im__12);
#line 389
c_rt_lib0move(&___nl__im__13,___get_global_string_const(127));
#line 389
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__13));
#line 389
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_arr(___nl__im__13, ___nl__int__10));
#line 389
c_rt_lib0move(&___nl__im__15,___get_global_string_const(399));
#line 389
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash(___nl__im__14, ___nl__im__15));
#line 389
___nl__int__16 = 1;
#line 389
___nl__int__17 = getIntFromImm(___nl__im__15);
#line 389
___nl__int__18 = ___nl__int__17 - ___nl__int__16;
#line 389
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__18));
#line 389
c_rt_lib0move(&___nl__string__19,___get_global_string_const(399));
#line 389
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__14, ___nl__string__19, ___nl__im__15));
#line 389
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__13, ___nl__int__10, ___nl__im__14));
#line 389
c_rt_lib0move(&___nl__string__19,___get_global_string_const(127));
#line 389
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__19, ___nl__im__13));
#line 389
c_rt_lib0clear(&___nl__im__13);
#line 389
c_rt_lib0clear(&___nl__im__14);
#line 389
c_rt_lib0clear(&___nl__im__15);
#line 389
//clear ___nl__int__16;
#line 389
//clear ___nl__int__17;
#line 389
//clear ___nl__int__18;
#line 389
c_rt_lib0clear(&___nl__string__19);
#line 390
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(127)));
#line 390
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__23, ___nl__int__10));
#line 390
c_rt_lib0clear(&___nl__im__23);
#line 390
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(399)));
#line 390
___nl__int__21 = getIntFromImm(___nl__im__24);
#line 390
c_rt_lib0clear(&___nl__im__22);
#line 390
c_rt_lib0clear(&___nl__im__24);
#line 390
___nl__int__25 = 0;
#line 390
___nl__bool__20 = ___nl__int__21 == ___nl__int__25;
#line 390
//clear ___nl__int__21;
#line 390
//clear ___nl__int__25;
#line 390
___nl__bool__20 = !___nl__bool__20;
#line 390
if(___nl__bool__20){ goto label_70;}
#line 391
c_rt_lib0move(&___nl__im__26,___get_global_string_const(128));
#line 391
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__26));
#line 391
c_rt_lib0delete(hash0delete(&___nl__im__26, ___nl__im__6));
#line 391
c_rt_lib0move(&___nl__string__27,___get_global_string_const(128));
#line 391
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__27, ___nl__im__26));
#line 391
c_rt_lib0clear(&___nl__im__26);
#line 391
c_rt_lib0clear(&___nl__string__27);
#line 392
c_rt_lib0move(&___nl__im__28,___get_global_string_const(129));
#line 392
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__28));
#line 392
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__10));
#line 392
c_rt_lib0delete(array0push(&___nl__im__28, ___nl__im__29));
#line 392
c_rt_lib0move(&___nl__string__30,___get_global_string_const(129));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__30, ___nl__im__28));
#line 392
c_rt_lib0clear(&___nl__im__28);
#line 392
c_rt_lib0clear(&___nl__im__29);
#line 392
c_rt_lib0clear(&___nl__string__30);
#line 393
goto label_70;
#line 393
label_70:
;
#line 393
//clear ___nl__bool__20;
#line 393
//clear ___nl__int__10;
#line 394
c_rt_lib0move(&___nl__im__9, c_rt_lib0next_iter(___nl__im__9));
#line 394
goto label_9;
#line 394
label_75:
;
#line 395
c_rt_lib0move(&___nl__im__31,___get_global_string_const(130));
#line 395
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__31));
#line 395
c_rt_lib0delete(hash0delete(&___nl__im__31, ___nl__im__1));
#line 395
c_rt_lib0move(&___nl__string__32,___get_global_string_const(130));
#line 395
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__32, ___nl__im__31));
#line 395
c_rt_lib0clear(&___nl__im__31);
#line 395
c_rt_lib0clear(&___nl__string__32);
#line 396
goto label_84;
#line 396
label_84:
;
#line 396
//clear ___nl__bool__2;
#line 396
c_rt_lib0clear(&___nl__im__4);
#line 396
c_rt_lib0clear(&___nl__im__6);
#line 396
//clear ___nl__bool__7;
#line 396
c_rt_lib0clear(&___nl__im__8);
#line 396
c_rt_lib0clear(&___nl__im__9);
#line 396
//clear ___nl__int__10;
#line 396
c_rt_lib0clear(&___nl__im__1);
#line 396
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
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__im__13 = NULL;
#line 400
___nl__im_ptr__3 = &((*___ref___rec__0).global_int_const0field);
#line 400
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__1));
#line 400
c_rt_lib0move(&___nl__im__4, ptd0int_to_string(___nl__im__5));
#line 400
c_rt_lib0clear(&___nl__im__5);
#line 400
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__1));
#line 400
___nl__im_ptr__8 = &((*___ref___rec__0).mod_name0field);
#line 400
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 400
___nl__im_ptr__8 = NULL;
#line 400
___nl__int__2 = generator_c_priv0get_global_const(___nl__im_ptr__3, ___nl__im__4, ___nl__im__6, ___nl__im__7);
#line 400
___nl__im_ptr__3 = NULL;
#line 400
c_rt_lib0clear(&___nl__im__4);
#line 400
c_rt_lib0clear(&___nl__im__6);
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 401
c_rt_lib0move(&___nl__im__11,___get_global_string_const(473));
#line 401
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__2));
#line 401
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__string__12));
#line 401
c_rt_lib0clear(&___nl__im__11);
#line 401
c_rt_lib0clear(&___nl__string__12);
#line 401
c_rt_lib0move(&___nl__im__13,___get_global_string_const(322));
#line 401
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 401
c_rt_lib0clear(&___nl__im__10);
#line 401
c_rt_lib0clear(&___nl__im__13);
#line 401
//clear ___nl__int__1;
#line 401
//clear ___nl__int__2;
#line 401
return ___nl__im__9;
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
#line 405
___nl__im_ptr__3 = &((*___ref___rec__0).global_string_const0field);
#line 405
___nl__im_ptr__5 = &((*___ref___rec__0).mod_name0field);
#line 405
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 405
___nl__im_ptr__5 = NULL;
#line 405
___nl__int__2 = generator_c_priv0get_global_const(___nl__im_ptr__3, ___nl__im__1, ___nl__im__1, ___nl__im__4);
#line 405
___nl__im_ptr__3 = NULL;
#line 405
c_rt_lib0clear(&___nl__im__4);
#line 406
c_rt_lib0move(&___nl__im__8,___get_global_string_const(474));
#line 406
c_rt_lib0move(&___nl__string__9, c_rt_lib0int_to_string(___nl__int__2));
#line 406
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__string__9));
#line 406
c_rt_lib0clear(&___nl__im__8);
#line 406
c_rt_lib0clear(&___nl__string__9);
#line 406
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 406
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 406
c_rt_lib0clear(&___nl__im__7);
#line 406
c_rt_lib0clear(&___nl__im__10);
#line 406
c_rt_lib0clear(&___nl__im__1);
#line 406
//clear ___nl__int__2;
#line 406
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
#line 410
___nl__rec_ptr__3 = &((*___ref___rec__0).const0field);
#line 410
___nl__rec_ptr__4 = &(___nl__rec_ptr__3->singleton0field);
#line 410
___nl__int__2 = generator_c_priv0get_const(___nl__rec_ptr__4, ___nl__im__1);
#line 410
___nl__rec_ptr__4 = NULL;
#line 410
___nl__rec_ptr__3 = NULL;
#line 411
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 411
c_rt_lib0move(&___nl__im__10,___get_global_string_const(475));
#line 411
___nl__im_ptr__12 = &((*___ref___rec__0).mod_name0field);
#line 411
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 411
___nl__im_ptr__12 = NULL;
#line 411
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_fun_name(___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 411
c_rt_lib0clear(&___nl__im__9);
#line 411
c_rt_lib0clear(&___nl__im__10);
#line 411
c_rt_lib0clear(&___nl__im__11);
#line 411
c_rt_lib0move(&___nl__im__13,___get_global_string_const(457));
#line 411
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 411
c_rt_lib0clear(&___nl__im__8);
#line 411
c_rt_lib0clear(&___nl__im__13);
#line 411
c_rt_lib0move(&___nl__string__14, c_rt_lib0int_to_string(___nl__int__2));
#line 411
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__14));
#line 411
c_rt_lib0clear(&___nl__im__7);
#line 411
c_rt_lib0clear(&___nl__string__14);
#line 411
c_rt_lib0move(&___nl__im__15,___get_global_string_const(322));
#line 411
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 411
c_rt_lib0clear(&___nl__im__6);
#line 411
c_rt_lib0clear(&___nl__im__15);
#line 411
c_rt_lib0clear(&___nl__im__1);
#line 411
//clear ___nl__int__2;
#line 411
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
#line 415
c_rt_lib0move(&___nl__im__5, generator_c_priv0im_t());
#line 415
c_rt_lib0move(&___nl__im__6,___get_global_string_const(469));
#line 415
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 415
c_rt_lib0clear(&___nl__im__5);
#line 415
c_rt_lib0clear(&___nl__im__6);
#line 415
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 415
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__7));
#line 415
c_rt_lib0clear(&___nl__im__4);
#line 415
c_rt_lib0clear(&___nl__im__7);
#line 415
c_rt_lib0move(&___nl__im__8,___get_global_string_const(476));
#line 415
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 415
c_rt_lib0clear(&___nl__im__3);
#line 415
c_rt_lib0clear(&___nl__im__8);
#line 415
c_rt_lib0clear(&___nl__im__0);
#line 415
c_rt_lib0clear(&___nl__im__1);
#line 415
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
ImmT  ___nl__im__195 = NULL;
INT  ___nl__int__196 = 0;
INT  ___nl__int__197 = 0;
bool  ___nl__bool__198 = false;
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
ImmT  ___nl__string__212 = NULL;
ImmT  ___nl__im__213 = NULL;
bool  ___nl__bool__214 = false;
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
ImmT  ___nl__string__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__string__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
INT  ___nl__int__245 = 0;
INT  ___nl__int__246 = 0;
bool  ___nl__bool__247 = false;
bool  ___nl__bool__248 = false;
INT  ___nl__int__249 = 0;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
bool  ___nl__bool__255 = false;
ImmT  ___nl__im__256 = NULL;
bool  ___nl__bool__257 = false;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
ImmT  ___nl__im__261 = NULL;
bool  ___nl__bool__262 = false;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__string__270 = NULL;
ImmT  ___nl__im__271 = NULL;
INT  ___nl__int__272 = 0;
INT  ___nl__int__273 = 0;
bool  ___nl__bool__274 = false;
bool  ___nl__bool__275 = false;
ImmT  ___nl__im__276 = NULL;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
ImmT  ___nl__im__280 = NULL;
ImmT  ___nl__im__281 = NULL;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__string__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
ImmT  ___nl__im__287 = NULL;
ImmT  ___nl__im__288 = NULL;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__string__292 = NULL;
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
ImmT  ___nl__im__305 = NULL;
bool  ___nl__bool__306 = false;
ImmT  ___nl__im__307 = NULL;
ImmT  ___nl__im__308 = NULL;
ImmT * ___nl__im_ptr__309 = NULL;
ImmT  ___nl__im__310 = NULL;
ImmT  ___nl__im__311 = NULL;
ImmT  ___nl__im__312 = NULL;
ImmT  ___nl__im__313 = NULL;
ImmT  ___nl__im__314 = NULL;
ImmT  ___nl__im__315 = NULL;
ImmT  ___nl__im__316 = NULL;
ImmT  ___nl__im__317 = NULL;
ImmT  ___nl__im__318 = NULL;
ImmT * ___nl__im_ptr__319 = NULL;
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
ImmT  ___nl__im__335 = NULL;
ImmT * ___nl__im_ptr__336 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__337 = NULL;
ImmT  ___nl__im__338 = NULL;
bool  ___nl__bool__339 = false;
bool * ___nl__bool_ptr__340 = NULL;
INT  ___nl__int__341 = 0;
ImmT  ___nl__im__342 = NULL;
ImmT  ___nl__im__343 = NULL;
ImmT  ___nl__im__344 = NULL;
ImmT  ___nl__im__345 = NULL;
ImmT  ___nl__im__346 = NULL;
ImmT * ___nl__im_ptr__347 = NULL;
ImmT * ___nl__im_ptr__348 = NULL;
#line 419
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_cr());
#line 419
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__3));
#line 419
c_rt_lib0clear(&___nl__im__3);
#line 420
c_rt_lib0move(&___nl__im__5,___get_global_string_const(430));
#line 420
c_rt_lib0move(&___nl__im__6, string0lf());
#line 420
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 420
c_rt_lib0clear(&___nl__im__5);
#line 420
c_rt_lib0clear(&___nl__im__6);
#line 420
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__4));
#line 420
c_rt_lib0clear(&___nl__im__4);
#line 421
c_rt_lib0move(&___nl__im__9,___get_global_string_const(271));
#line 421
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_include(___nl__im__9));
#line 421
c_rt_lib0clear(&___nl__im__9);
#line 421
c_rt_lib0move(&___nl__im__10, string0lf());
#line 421
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 421
c_rt_lib0clear(&___nl__im__8);
#line 421
c_rt_lib0clear(&___nl__im__10);
#line 421
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__7));
#line 421
c_rt_lib0clear(&___nl__im__7);
#line 422
c_rt_lib0move(&___nl__im__13,___get_global_string_const(477));
#line 422
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_system_include(___nl__im__13));
#line 422
c_rt_lib0clear(&___nl__im__13);
#line 422
c_rt_lib0move(&___nl__im__14, string0lf());
#line 422
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 422
c_rt_lib0clear(&___nl__im__12);
#line 422
c_rt_lib0clear(&___nl__im__14);
#line 422
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__11));
#line 422
c_rt_lib0clear(&___nl__im__11);
#line 423
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_cr());
#line 423
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__15));
#line 423
c_rt_lib0clear(&___nl__im__15);
#line 424
c_rt_lib0move(&___nl__im__17,___get_global_string_const(271));
#line 424
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_include(___nl__im__17));
#line 424
c_rt_lib0clear(&___nl__im__17);
#line 424
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__16));
#line 424
c_rt_lib0clear(&___nl__im__16);
#line 425
c_rt_lib0move(&___nl__im__19,___get_global_string_const(431));
#line 425
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_include(___nl__im__19));
#line 425
c_rt_lib0clear(&___nl__im__19);
#line 425
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__18));
#line 425
c_rt_lib0clear(&___nl__im__18);
#line 426
c_rt_lib0move(&___nl__im__21,___get_global_string_const(478));
#line 426
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_system_include(___nl__im__21));
#line 426
c_rt_lib0clear(&___nl__im__21);
#line 426
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__20));
#line 426
c_rt_lib0clear(&___nl__im__20);
#line 427
___nl__im_ptr__24 = &((*___ref___rec__0).mod_name0field);
#line 427
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 427
___nl__im_ptr__24 = NULL;
#line 427
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_include(___nl__im__23));
#line 427
c_rt_lib0clear(&___nl__im__23);
#line 427
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__22));
#line 427
c_rt_lib0clear(&___nl__im__22);
#line 428
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(479)));
#line 428
___nl__int__27 = 0;
#line 428
___nl__int__28 = 1;
#line 428
___nl__int__29 = c_rt_lib0array_len(___nl__im__25);
#line 428
label_57:
;
#line 428
___nl__bool__30 = ___nl__int__27 >= ___nl__int__29;
#line 428
if(___nl__bool__30){ goto label_75;}
#line 428
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 428
c_rt_lib0copy(&___nl__im__26, ___nl__im__31);
#line 429
c_rt_lib0move(&___nl__im__32, generator_c_priv0get_include(___nl__im__26));
#line 429
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__32));
#line 429
c_rt_lib0clear(&___nl__im__32);
#line 430
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_include(___nl__im__26));
#line 430
c_rt_lib0move(&___nl__im__35, string0lf());
#line 430
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 430
c_rt_lib0clear(&___nl__im__34);
#line 430
c_rt_lib0clear(&___nl__im__35);
#line 430
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__33));
#line 430
c_rt_lib0clear(&___nl__im__33);
#line 430
c_rt_lib0clear(&___nl__im__26);
#line 431
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 431
goto label_57;
#line 431
label_75:
;
#line 432
___nl__im_ptr__37 = &((*___ref___rec__0).ret0field);
#line 432
c_rt_lib0copy(&___nl__im__36, (*___nl__im_ptr__37));
#line 432
___nl__im_ptr__37 = NULL;
#line 433
c_rt_lib0move(&___nl__im__38,___get_global_string_const(36));
#line 433
___nl__im_ptr__39 = &((*___ref___rec__0).ret0field);
#line 433
c_rt_lib0copy(___nl__im_ptr__39, ___nl__im__38);
#line 433
___nl__im_ptr__39 = NULL;
#line 433
c_rt_lib0clear(&___nl__im__38);
#line 434
c_rt_lib0move(&___nl__im__43,___get_global_string_const(480));
#line 434
___nl__im_ptr__45 = &((*___ref___rec__0).mod_name0field);
#line 434
c_rt_lib0copy(&___nl__im__44, (*___nl__im_ptr__45));
#line 434
___nl__im_ptr__45 = NULL;
#line 434
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__44));
#line 434
c_rt_lib0clear(&___nl__im__43);
#line 434
c_rt_lib0clear(&___nl__im__44);
#line 434
c_rt_lib0move(&___nl__im__46,___get_global_string_const(481));
#line 434
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__46));
#line 434
c_rt_lib0clear(&___nl__im__42);
#line 434
c_rt_lib0clear(&___nl__im__46);
#line 434
c_rt_lib0move(&___nl__im__47, string0lf());
#line 434
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__47));
#line 434
c_rt_lib0clear(&___nl__im__41);
#line 434
c_rt_lib0clear(&___nl__im__47);
#line 434
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__40));
#line 434
c_rt_lib0clear(&___nl__im__40);
#line 435
c_rt_lib0move(&___nl__im__50,___get_global_string_const(482));
#line 435
c_rt_lib0move(&___nl__im__51, generator_c_priv0im_t());
#line 435
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 435
c_rt_lib0clear(&___nl__im__50);
#line 435
c_rt_lib0clear(&___nl__im__51);
#line 435
c_rt_lib0move(&___nl__im__52,___get_global_string_const(483));
#line 435
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 435
c_rt_lib0clear(&___nl__im__49);
#line 435
c_rt_lib0clear(&___nl__im__52);
#line 435
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__48));
#line 435
c_rt_lib0clear(&___nl__im__48);
#line 436
c_rt_lib0move(&___nl__im__55,___get_global_string_const(484));
#line 436
c_rt_lib0move(&___nl__im__57,___get_global_string_const(36));
#line 436
c_rt_lib0move(&___nl__im__58,___get_global_string_const(485));
#line 436
___nl__im_ptr__60 = &((*___ref___rec__0).mod_name0field);
#line 436
c_rt_lib0copy(&___nl__im__59, (*___nl__im_ptr__60));
#line 436
___nl__im_ptr__60 = NULL;
#line 436
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_fun_name(___nl__im__57, ___nl__im__58, ___nl__im__59));
#line 436
c_rt_lib0clear(&___nl__im__57);
#line 436
c_rt_lib0clear(&___nl__im__58);
#line 436
c_rt_lib0clear(&___nl__im__59);
#line 436
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__56));
#line 436
c_rt_lib0clear(&___nl__im__55);
#line 436
c_rt_lib0clear(&___nl__im__56);
#line 436
c_rt_lib0move(&___nl__im__61,___get_global_string_const(486));
#line 436
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 436
c_rt_lib0clear(&___nl__im__54);
#line 436
c_rt_lib0clear(&___nl__im__61);
#line 436
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__53));
#line 436
c_rt_lib0clear(&___nl__im__53);
#line 437
c_rt_lib0move(&___nl__im__64, generator_c_priv0im_t());
#line 437
c_rt_lib0move(&___nl__im__66,___get_global_string_const(36));
#line 437
c_rt_lib0move(&___nl__im__67,___get_global_string_const(487));
#line 437
___nl__im_ptr__69 = &((*___ref___rec__0).mod_name0field);
#line 437
c_rt_lib0copy(&___nl__im__68, (*___nl__im_ptr__69));
#line 437
___nl__im_ptr__69 = NULL;
#line 437
c_rt_lib0move(&___nl__im__65, generator_c_priv0get_fun_name(___nl__im__66, ___nl__im__67, ___nl__im__68));
#line 437
c_rt_lib0clear(&___nl__im__66);
#line 437
c_rt_lib0clear(&___nl__im__67);
#line 437
c_rt_lib0clear(&___nl__im__68);
#line 437
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__65));
#line 437
c_rt_lib0clear(&___nl__im__64);
#line 437
c_rt_lib0clear(&___nl__im__65);
#line 437
c_rt_lib0move(&___nl__im__70,___get_global_string_const(488));
#line 437
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__70));
#line 437
c_rt_lib0clear(&___nl__im__63);
#line 437
c_rt_lib0clear(&___nl__im__70);
#line 437
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__62));
#line 437
c_rt_lib0clear(&___nl__im__62);
#line 438
c_rt_lib0move(&___nl__im__74, generator_c_priv0im_t());
#line 438
c_rt_lib0move(&___nl__im__76,___get_global_string_const(36));
#line 438
c_rt_lib0move(&___nl__im__77,___get_global_string_const(475));
#line 438
___nl__im_ptr__79 = &((*___ref___rec__0).mod_name0field);
#line 438
c_rt_lib0copy(&___nl__im__78, (*___nl__im_ptr__79));
#line 438
___nl__im_ptr__79 = NULL;
#line 438
c_rt_lib0move(&___nl__im__75, generator_c_priv0get_fun_name(___nl__im__76, ___nl__im__77, ___nl__im__78));
#line 438
c_rt_lib0clear(&___nl__im__76);
#line 438
c_rt_lib0clear(&___nl__im__77);
#line 438
c_rt_lib0clear(&___nl__im__78);
#line 438
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__75));
#line 438
c_rt_lib0clear(&___nl__im__74);
#line 438
c_rt_lib0clear(&___nl__im__75);
#line 438
c_rt_lib0move(&___nl__im__80,___get_global_string_const(488));
#line 438
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__80));
#line 438
c_rt_lib0clear(&___nl__im__73);
#line 438
c_rt_lib0clear(&___nl__im__80);
#line 438
c_rt_lib0move(&___nl__im__81, string0lf());
#line 438
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__81));
#line 438
c_rt_lib0clear(&___nl__im__72);
#line 438
c_rt_lib0clear(&___nl__im__81);
#line 438
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__71));
#line 438
c_rt_lib0clear(&___nl__im__71);
#line 439
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(209)));
#line 439
___nl__im_ptr__85 = &((*___ref___rec__0).mod_name0field);
#line 439
c_rt_lib0copy(&___nl__im__84, (*___nl__im_ptr__85));
#line 439
___nl__im_ptr__85 = NULL;
#line 439
c_rt_lib0move(&___nl__im__82, generator_c_struct_dependence_sort0sort(___nl__im__83, ___nl__im__84));
#line 439
c_rt_lib0clear(&___nl__im__83);
#line 439
c_rt_lib0clear(&___nl__im__84);
#line 440
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(0));
#line 441
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(209)));
#line 441
___nl__int__89 = 0;
#line 441
___nl__int__90 = 1;
#line 441
___nl__int__91 = c_rt_lib0array_len(___nl__im__87);
#line 441
label_185:
;
#line 441
___nl__bool__92 = ___nl__int__89 >= ___nl__int__91;
#line 441
if(___nl__bool__92){ goto label_226;}
#line 441
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get(___nl__im__87, ___nl__int__89));
#line 441
c_rt_lib0copy(&___nl__im__88, ___nl__im__93);
#line 442
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(210)));
#line 442
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(211));
#line 442
if(___nl__bool__95){ goto label_198;}
#line 447
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(467));
#line 447
if(___nl__bool__95){ goto label_220;}
#line 447
c_rt_lib0move(&___nl__im__96,___get_global_string_const(15));
#line 447
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_mk(2, ___nl__im__96, ___nl__im__94));
#line 447
nl_die_arg(___nl__im__96);
#line 442
label_198:
;
#line 443
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(167)));
#line 443
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__97, ___get_global_string_const(75));
#line 443
if(___nl__bool__98){ goto label_207;}
#line 445
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__97, ___get_global_string_const(76));
#line 445
if(___nl__bool__98){ goto label_216;}
#line 445
c_rt_lib0move(&___nl__im__99,___get_global_string_const(15));
#line 445
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(2, ___nl__im__99, ___nl__im__97));
#line 445
nl_die_arg(___nl__im__99);
#line 443
label_207:
;
#line 443
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(75)));
#line 443
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 444
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(168)));
#line 444
c_rt_lib0move(&___nl__im__103,___get_global_string_const(36));
#line 444
c_rt_lib0delete(hash0set_value(&___nl__im__86, ___nl__im__102, ___nl__im__103));
#line 444
c_rt_lib0clear(&___nl__im__102);
#line 444
c_rt_lib0clear(&___nl__im__103);
#line 445
goto label_218;
#line 445
label_216:
;
#line 446
goto label_218;
#line 446
label_218:
;
#line 447
goto label_222;
#line 447
label_220:
;
#line 448
goto label_222;
#line 448
label_222:
;
#line 448
c_rt_lib0clear(&___nl__im__88);
#line 449
___nl__int__89 = ___nl__int__89 + ___nl__int__90;
#line 449
goto label_185;
#line 449
label_226:
;
#line 450
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__82, ___get_global_string_const(489));
#line 450
if(___nl__bool__104){ goto label_234;}
#line 462
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__82, ___get_global_string_const(490));
#line 462
if(___nl__bool__104){ goto label_307;}
#line 462
c_rt_lib0move(&___nl__im__105,___get_global_string_const(15));
#line 462
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__82));
#line 462
nl_die_arg(___nl__im__105);
#line 450
label_234:
;
#line 450
c_rt_lib0move(&___nl__im__107, c_rt_lib0priv_as(___nl__im__82, ___get_global_string_const(489)));
#line 450
c_rt_lib0copy(&___nl__im__106, ___nl__im__107);
#line 451
___nl__int__109 = 0;
#line 451
___nl__int__110 = 1;
#line 451
___nl__int__111 = c_rt_lib0array_len(___nl__im__106);
#line 451
label_240:
;
#line 451
___nl__bool__112 = ___nl__int__109 >= ___nl__int__111;
#line 451
if(___nl__bool__112){ goto label_305;}
#line 451
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_get(___nl__im__106, ___nl__int__109));
#line 451
c_rt_lib0copy(&___nl__im__108, ___nl__im__113);
#line 452
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(168)));
#line 452
___nl__bool__114 = hash0has_key(___nl__im__86, ___nl__im__115);
#line 452
c_rt_lib0clear(&___nl__im__115);
#line 452
___nl__bool__114 = !___nl__bool__114;
#line 453
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(491)));
#line 453
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(492));
#line 453
if(___nl__bool__117){ goto label_259;}
#line 455
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(493));
#line 455
if(___nl__bool__117){ goto label_270;}
#line 457
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(494));
#line 457
if(___nl__bool__117){ goto label_281;}
#line 457
c_rt_lib0move(&___nl__im__118,___get_global_string_const(15));
#line 457
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_mk(2, ___nl__im__118, ___nl__im__116));
#line 457
nl_die_arg(___nl__im__118);
#line 453
label_259:
;
#line 454
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(168)));
#line 454
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(495)));
#line 454
___nl__im_ptr__122 = &((*___ref___rec__0).mod_name0field);
#line 454
c_rt_lib0copy(&___nl__im__121, (*___nl__im_ptr__122));
#line 454
___nl__im_ptr__122 = NULL;
#line 454
c_rt_lib0delete(generator_c_priv0print_func_type_struct_def(___ref___rec__0, ___nl__im__119, ___nl__im__120, ___nl__im__121, ___nl__bool__114));
#line 454
c_rt_lib0clear(&___nl__im__119);
#line 454
c_rt_lib0clear(&___nl__im__120);
#line 454
c_rt_lib0clear(&___nl__im__121);
#line 455
goto label_301;
#line 455
label_270:
;
#line 456
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(168)));
#line 456
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(495)));
#line 456
___nl__im_ptr__126 = &((*___ref___rec__0).mod_name0field);
#line 456
c_rt_lib0copy(&___nl__im__125, (*___nl__im_ptr__126));
#line 456
___nl__im_ptr__126 = NULL;
#line 456
c_rt_lib0delete(generator_c_priv0print_func_type_struct_decl(___ref___rec__0, ___nl__im__123, ___nl__im__124, ___nl__im__125, ___nl__bool__114, ___nl__im__2));
#line 456
c_rt_lib0clear(&___nl__im__123);
#line 456
c_rt_lib0clear(&___nl__im__124);
#line 456
c_rt_lib0clear(&___nl__im__125);
#line 457
goto label_301;
#line 457
label_281:
;
#line 458
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(168)));
#line 458
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(495)));
#line 458
___nl__im_ptr__130 = &((*___ref___rec__0).mod_name0field);
#line 458
c_rt_lib0copy(&___nl__im__129, (*___nl__im_ptr__130));
#line 458
___nl__im_ptr__130 = NULL;
#line 458
c_rt_lib0delete(generator_c_priv0print_func_type_struct_def(___ref___rec__0, ___nl__im__127, ___nl__im__128, ___nl__im__129, ___nl__bool__114));
#line 458
c_rt_lib0clear(&___nl__im__127);
#line 458
c_rt_lib0clear(&___nl__im__128);
#line 458
c_rt_lib0clear(&___nl__im__129);
#line 459
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(168)));
#line 459
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(495)));
#line 459
___nl__im_ptr__134 = &((*___ref___rec__0).mod_name0field);
#line 459
c_rt_lib0copy(&___nl__im__133, (*___nl__im_ptr__134));
#line 459
___nl__im_ptr__134 = NULL;
#line 459
c_rt_lib0delete(generator_c_priv0print_func_type_struct_decl(___ref___rec__0, ___nl__im__131, ___nl__im__132, ___nl__im__133, ___nl__bool__114, ___nl__im__2));
#line 459
c_rt_lib0clear(&___nl__im__131);
#line 459
c_rt_lib0clear(&___nl__im__132);
#line 459
c_rt_lib0clear(&___nl__im__133);
#line 460
goto label_301;
#line 460
label_301:
;
#line 460
c_rt_lib0clear(&___nl__im__108);
#line 461
___nl__int__109 = ___nl__int__109 + ___nl__int__110;
#line 461
goto label_240;
#line 461
label_305:
;
#line 462
goto label_318;
#line 462
label_307:
;
#line 463
c_rt_lib0move(&___nl__im__136,___get_global_string_const(496));
#line 463
c_rt_lib0move(&___nl__im__137, string0lf());
#line 463
c_rt_lib0move(&___nl__im__135, c_rt_lib0concat_new(___nl__im__136, ___nl__im__137));
#line 463
c_rt_lib0clear(&___nl__im__136);
#line 463
c_rt_lib0clear(&___nl__im__137);
#line 463
c_rt_lib0delete(nl0print(___nl__im__135));
#line 463
c_rt_lib0clear(&___nl__im__135);
#line 464
c_rt_lib0move(&___nl__im__138, c_rt_lib0array_mk(0));
#line 464
nl_die_arg(___nl__im__138);
#line 465
goto label_318;
#line 465
label_318:
;
#line 466
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(209)));
#line 466
___nl__int__141 = 0;
#line 466
___nl__int__142 = 1;
#line 466
___nl__int__143 = c_rt_lib0array_len(___nl__im__139);
#line 466
label_323:
;
#line 466
___nl__bool__144 = ___nl__int__141 >= ___nl__int__143;
#line 466
if(___nl__bool__144){ goto label_385;}
#line 466
c_rt_lib0move(&___nl__im__145, c_rt_lib0array_get(___nl__im__139, ___nl__int__141));
#line 466
c_rt_lib0copy(&___nl__im__140, ___nl__im__145);
#line 467
___nl__im_ptr__148 = &((*___ref___rec__0).mod_name0field);
#line 467
c_rt_lib0copy(&___nl__im__147, (*___nl__im_ptr__148));
#line 467
___nl__im_ptr__148 = NULL;
#line 467
c_rt_lib0move(&___nl__im__146, generator_c_priv0get_function_header(___nl__im__140, ___nl__im__147));
#line 467
c_rt_lib0clear(&___nl__im__147);
#line 468
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_string_const(210)));
#line 468
___nl__bool__150 = c_rt_lib0priv_is(___nl__im__149, ___get_global_string_const(211));
#line 468
if(___nl__bool__150){ goto label_341;}
#line 473
___nl__bool__150 = c_rt_lib0priv_is(___nl__im__149, ___get_global_string_const(467));
#line 473
if(___nl__bool__150){ goto label_374;}
#line 473
c_rt_lib0move(&___nl__im__151,___get_global_string_const(15));
#line 473
c_rt_lib0move(&___nl__im__151, c_rt_lib0array_mk(2, ___nl__im__151, ___nl__im__149));
#line 473
nl_die_arg(___nl__im__151);
#line 468
label_341:
;
#line 469
c_rt_lib0move(&___nl__im__154,___get_global_string_const(442));
#line 469
c_rt_lib0move(&___nl__im__153, c_rt_lib0concat_new(___nl__im__146, ___nl__im__154));
#line 469
c_rt_lib0clear(&___nl__im__154);
#line 469
c_rt_lib0move(&___nl__im__155, string0lf());
#line 469
c_rt_lib0move(&___nl__im__152, c_rt_lib0concat_new(___nl__im__153, ___nl__im__155));
#line 469
c_rt_lib0clear(&___nl__im__153);
#line 469
c_rt_lib0clear(&___nl__im__155);
#line 469
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__152));
#line 469
c_rt_lib0clear(&___nl__im__152);
#line 470
___nl__bool__156 = generator_c_priv0takes_own_arg(___nl__im__140);
#line 470
___nl__bool__156 = !___nl__bool__156;
#line 470
___nl__bool__156 = !___nl__bool__156;
#line 470
if(___nl__bool__156){ goto label_371;}
#line 471
___nl__im_ptr__161 = &((*___ref___rec__0).mod_name0field);
#line 471
c_rt_lib0copy(&___nl__im__160, (*___nl__im_ptr__161));
#line 471
___nl__im_ptr__161 = NULL;
#line 471
c_rt_lib0move(&___nl__im__159, generator_c_priv0get_func_ptr_header(___nl__im__140, ___nl__im__160));
#line 471
c_rt_lib0clear(&___nl__im__160);
#line 471
c_rt_lib0move(&___nl__im__162,___get_global_string_const(442));
#line 471
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__162));
#line 471
c_rt_lib0clear(&___nl__im__159);
#line 471
c_rt_lib0clear(&___nl__im__162);
#line 471
c_rt_lib0move(&___nl__im__163, string0lf());
#line 471
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__158, ___nl__im__163));
#line 471
c_rt_lib0clear(&___nl__im__158);
#line 471
c_rt_lib0clear(&___nl__im__163);
#line 471
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__157));
#line 471
c_rt_lib0clear(&___nl__im__157);
#line 472
goto label_371;
#line 472
label_371:
;
#line 472
//clear ___nl__bool__156;
#line 473
goto label_381;
#line 473
label_374:
;
#line 474
c_rt_lib0move(&___nl__im__165,___get_global_string_const(442));
#line 474
c_rt_lib0move(&___nl__im__164, c_rt_lib0concat_new(___nl__im__146, ___nl__im__165));
#line 474
c_rt_lib0clear(&___nl__im__165);
#line 474
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__164));
#line 474
c_rt_lib0clear(&___nl__im__164);
#line 475
goto label_381;
#line 475
label_381:
;
#line 475
c_rt_lib0clear(&___nl__im__140);
#line 476
___nl__int__141 = ___nl__int__141 + ___nl__int__142;
#line 476
goto label_323;
#line 476
label_385:
;
#line 478
c_rt_lib0move(&___nl__im__166, string0lf());
#line 478
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__166));
#line 478
c_rt_lib0clear(&___nl__im__166);
#line 479
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(209)));
#line 479
___nl__int__169 = 0;
#line 479
___nl__int__170 = 1;
#line 479
___nl__int__171 = c_rt_lib0array_len(___nl__im__167);
#line 479
label_393:
;
#line 479
___nl__bool__172 = ___nl__int__169 >= ___nl__int__171;
#line 479
if(___nl__bool__172){ goto label_815;}
#line 479
c_rt_lib0move(&___nl__im__173, c_rt_lib0array_get(___nl__im__167, ___nl__int__169));
#line 479
c_rt_lib0copy(&___nl__im__168, ___nl__im__173);
#line 480
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(210)));
#line 480
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__176, ___get_global_string_const(211));
#line 480
c_rt_lib0clear(&___nl__im__176);
#line 480
___nl__bool__175 = !___nl__bool__174;
#line 480
if(___nl__bool__175){ goto label_405;}
#line 480
___nl__bool__174 = generator_c_priv0takes_own_arg(___nl__im__168);
#line 480
___nl__bool__174 = !___nl__bool__174;
#line 480
label_405:
;
#line 480
//clear ___nl__bool__175;
#line 480
___nl__bool__174 = !___nl__bool__174;
#line 480
if(___nl__bool__174){ goto label_719;}
#line 481
___nl__im_ptr__179 = &((*___ref___rec__0).mod_name0field);
#line 481
c_rt_lib0copy(&___nl__im__178, (*___nl__im_ptr__179));
#line 481
___nl__im_ptr__179 = NULL;
#line 481
c_rt_lib0move(&___nl__im__177, generator_c_priv0get_function_name(___nl__im__168, ___nl__im__178));
#line 481
c_rt_lib0clear(&___nl__im__178);
#line 482
___nl__im_ptr__183 = &((*___ref___rec__0).mod_name0field);
#line 482
c_rt_lib0copy(&___nl__im__182, (*___nl__im_ptr__183));
#line 482
___nl__im_ptr__183 = NULL;
#line 482
c_rt_lib0move(&___nl__im__181, generator_c_priv0get_func_ptr_header(___nl__im__168, ___nl__im__182));
#line 482
c_rt_lib0clear(&___nl__im__182);
#line 482
c_rt_lib0move(&___nl__im__184,___get_global_string_const(306));
#line 482
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__184));
#line 482
c_rt_lib0clear(&___nl__im__181);
#line 482
c_rt_lib0clear(&___nl__im__184);
#line 482
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__180));
#line 482
c_rt_lib0clear(&___nl__im__180);
#line 483
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 483
___nl__int__185 = c_rt_lib0array_len(___nl__im__186);
#line 483
c_rt_lib0clear(&___nl__im__186);
#line 484
c_rt_lib0move(&___nl__im__189,___get_global_string_const(497));
#line 484
c_rt_lib0move(&___nl__im__191,___get_global_string_const(498));
#line 484
c_rt_lib0move(&___nl__im__193, c_rt_lib0int_new(___nl__int__185));
#line 484
c_rt_lib0move(&___nl__im__192, ptd0int_to_string(___nl__im__193));
#line 484
c_rt_lib0clear(&___nl__im__193);
#line 484
c_rt_lib0move(&___nl__im__194, generator_c_priv0get_string(___nl__im__177));
#line 484
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(3, ___nl__im__191, ___nl__im__192, ___nl__im__194));
#line 484
c_rt_lib0clear(&___nl__im__191);
#line 484
c_rt_lib0clear(&___nl__im__192);
#line 484
c_rt_lib0clear(&___nl__im__194);
#line 484
c_rt_lib0move(&___nl__im__188, generator_c_priv0get_fun_lib(___nl__im__189, ___nl__im__190));
#line 484
c_rt_lib0clear(&___nl__im__189);
#line 484
c_rt_lib0clear(&___nl__im__190);
#line 484
c_rt_lib0move(&___nl__im__195,___get_global_string_const(442));
#line 484
c_rt_lib0move(&___nl__im__187, c_rt_lib0concat_new(___nl__im__188, ___nl__im__195));
#line 484
c_rt_lib0clear(&___nl__im__188);
#line 484
c_rt_lib0clear(&___nl__im__195);
#line 484
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__187));
#line 484
c_rt_lib0clear(&___nl__im__187);
#line 485
___nl__int__196 = 0;
#line 485
___nl__int__197 = 1;
#line 485
label_449:
;
#line 485
___nl__bool__198 = ___nl__int__196 >= ___nl__int__185;
#line 485
if(___nl__bool__198){ goto label_538;}
#line 486
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 486
c_rt_lib0move(&___nl__im__201, c_rt_lib0array_get(___nl__im__202, ___nl__int__196));
#line 486
c_rt_lib0clear(&___nl__im__202);
#line 486
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__201, ___get_global_string_const(206)));
#line 486
c_rt_lib0clear(&___nl__im__201);
#line 486
c_rt_lib0move(&___nl__im__203,___get_global_string_const(36));
#line 486
c_rt_lib0move(&___nl__im__199, generator_c_priv0get_type_to_c(___nl__im__200, ___nl__im__203));
#line 486
c_rt_lib0clear(&___nl__im__200);
#line 486
c_rt_lib0clear(&___nl__im__203);
#line 487
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 487
c_rt_lib0move(&___nl__im__207, c_rt_lib0array_get(___nl__im__208, ___nl__int__196));
#line 487
c_rt_lib0clear(&___nl__im__208);
#line 487
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__207, ___get_global_string_const(471)));
#line 487
c_rt_lib0clear(&___nl__im__207);
#line 487
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__206, ___get_global_string_const(206)));
#line 487
c_rt_lib0clear(&___nl__im__206);
#line 487
c_rt_lib0move(&___nl__im__211,___get_global_string_const(499));
#line 487
c_rt_lib0move(&___nl__string__212, c_rt_lib0int_to_string(___nl__int__196));
#line 487
c_rt_lib0move(&___nl__im__210, c_rt_lib0concat_new(___nl__im__211, ___nl__string__212));
#line 487
c_rt_lib0clear(&___nl__im__211);
#line 487
c_rt_lib0clear(&___nl__string__212);
#line 487
c_rt_lib0move(&___nl__im__213,___get_global_string_const(500));
#line 487
c_rt_lib0move(&___nl__im__209, c_rt_lib0concat_new(___nl__im__210, ___nl__im__213));
#line 487
c_rt_lib0clear(&___nl__im__210);
#line 487
c_rt_lib0clear(&___nl__im__213);
#line 487
c_rt_lib0move(&___nl__im__204, generator_c_priv0get_value_from_im(___nl__im__205, ___nl__im__209));
#line 487
c_rt_lib0clear(&___nl__im__205);
#line 487
c_rt_lib0clear(&___nl__im__209);
#line 488
c_rt_lib0move(&___nl__im__218, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 488
c_rt_lib0move(&___nl__im__217, c_rt_lib0array_get(___nl__im__218, ___nl__int__196));
#line 488
c_rt_lib0clear(&___nl__im__218);
#line 488
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(471)));
#line 488
c_rt_lib0clear(&___nl__im__217);
#line 488
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__216, ___get_global_string_const(206)));
#line 488
c_rt_lib0clear(&___nl__im__216);
#line 488
___nl__bool__214 = c_rt_lib0priv_is(___nl__im__215, ___get_global_string_const(131));
#line 488
c_rt_lib0clear(&___nl__im__215);
#line 488
___nl__bool__214 = !___nl__bool__214;
#line 488
if(___nl__bool__214){ goto label_511;}
#line 489
c_rt_lib0move(&___nl__im__224,___get_global_string_const(501));
#line 489
c_rt_lib0move(&___nl__im__223, c_rt_lib0concat_new(___nl__im__199, ___nl__im__224));
#line 489
c_rt_lib0clear(&___nl__im__224);
#line 489
c_rt_lib0move(&___nl__string__225, c_rt_lib0int_to_string(___nl__int__196));
#line 489
c_rt_lib0move(&___nl__im__222, c_rt_lib0concat_new(___nl__im__223, ___nl__string__225));
#line 489
c_rt_lib0clear(&___nl__im__223);
#line 489
c_rt_lib0clear(&___nl__string__225);
#line 489
c_rt_lib0move(&___nl__im__226,___get_global_string_const(502));
#line 489
c_rt_lib0move(&___nl__im__221, c_rt_lib0concat_new(___nl__im__222, ___nl__im__226));
#line 489
c_rt_lib0clear(&___nl__im__222);
#line 489
c_rt_lib0clear(&___nl__im__226);
#line 489
c_rt_lib0move(&___nl__im__220, c_rt_lib0concat_new(___nl__im__221, ___nl__im__204));
#line 489
c_rt_lib0clear(&___nl__im__221);
#line 489
c_rt_lib0move(&___nl__im__227,___get_global_string_const(442));
#line 489
c_rt_lib0move(&___nl__im__219, c_rt_lib0concat_new(___nl__im__220, ___nl__im__227));
#line 489
c_rt_lib0clear(&___nl__im__220);
#line 489
c_rt_lib0clear(&___nl__im__227);
#line 489
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__219));
#line 489
c_rt_lib0clear(&___nl__im__219);
#line 490
goto label_532;
#line 490
label_511:
;
#line 491
c_rt_lib0move(&___nl__im__233,___get_global_string_const(503));
#line 491
c_rt_lib0move(&___nl__im__232, c_rt_lib0concat_new(___nl__im__199, ___nl__im__233));
#line 491
c_rt_lib0clear(&___nl__im__233);
#line 491
c_rt_lib0move(&___nl__string__234, c_rt_lib0int_to_string(___nl__int__196));
#line 491
c_rt_lib0move(&___nl__im__231, c_rt_lib0concat_new(___nl__im__232, ___nl__string__234));
#line 491
c_rt_lib0clear(&___nl__im__232);
#line 491
c_rt_lib0clear(&___nl__string__234);
#line 491
c_rt_lib0move(&___nl__im__235,___get_global_string_const(504));
#line 491
c_rt_lib0move(&___nl__im__230, c_rt_lib0concat_new(___nl__im__231, ___nl__im__235));
#line 491
c_rt_lib0clear(&___nl__im__231);
#line 491
c_rt_lib0clear(&___nl__im__235);
#line 491
c_rt_lib0move(&___nl__im__229, c_rt_lib0concat_new(___nl__im__230, ___nl__im__204));
#line 491
c_rt_lib0clear(&___nl__im__230);
#line 491
c_rt_lib0move(&___nl__im__236,___get_global_string_const(442));
#line 491
c_rt_lib0move(&___nl__im__228, c_rt_lib0concat_new(___nl__im__229, ___nl__im__236));
#line 491
c_rt_lib0clear(&___nl__im__229);
#line 491
c_rt_lib0clear(&___nl__im__236);
#line 491
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__228));
#line 491
c_rt_lib0clear(&___nl__im__228);
#line 492
goto label_532;
#line 492
label_532:
;
#line 492
//clear ___nl__bool__214;
#line 492
c_rt_lib0clear(&___nl__im__199);
#line 492
c_rt_lib0clear(&___nl__im__204);
#line 493
___nl__int__196 = ___nl__int__196 + ___nl__int__197;
#line 493
goto label_449;
#line 493
label_538:
;
#line 494
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(468)));
#line 494
c_rt_lib0move(&___nl__im__242,___get_global_string_const(36));
#line 494
c_rt_lib0move(&___nl__im__240, generator_c_priv0get_type_to_c(___nl__im__241, ___nl__im__242));
#line 494
c_rt_lib0clear(&___nl__im__241);
#line 494
c_rt_lib0clear(&___nl__im__242);
#line 494
c_rt_lib0move(&___nl__im__243,___get_global_string_const(505));
#line 494
c_rt_lib0move(&___nl__im__239, c_rt_lib0concat_new(___nl__im__240, ___nl__im__243));
#line 494
c_rt_lib0clear(&___nl__im__240);
#line 494
c_rt_lib0clear(&___nl__im__243);
#line 494
c_rt_lib0move(&___nl__im__238, c_rt_lib0concat_new(___nl__im__239, ___nl__im__177));
#line 494
c_rt_lib0clear(&___nl__im__239);
#line 494
c_rt_lib0move(&___nl__im__244,___get_global_string_const(457));
#line 494
c_rt_lib0move(&___nl__im__237, c_rt_lib0concat_new(___nl__im__238, ___nl__im__244));
#line 494
c_rt_lib0clear(&___nl__im__238);
#line 494
c_rt_lib0clear(&___nl__im__244);
#line 494
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__237));
#line 494
c_rt_lib0clear(&___nl__im__237);
#line 495
___nl__int__245 = 0;
#line 495
___nl__int__246 = 1;
#line 495
label_558:
;
#line 495
___nl__bool__247 = ___nl__int__245 >= ___nl__int__185;
#line 495
if(___nl__bool__247){ goto label_636;}
#line 496
___nl__int__249 = 0;
#line 496
___nl__bool__248 = ___nl__int__245 > ___nl__int__249;
#line 496
//clear ___nl__int__249;
#line 496
___nl__bool__248 = !___nl__bool__248;
#line 496
if(___nl__bool__248){ goto label_570;}
#line 496
c_rt_lib0move(&___nl__im__250,___get_global_string_const(328));
#line 496
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__250));
#line 496
c_rt_lib0clear(&___nl__im__250);
#line 496
goto label_570;
#line 496
label_570:
;
#line 496
//clear ___nl__bool__248;
#line 497
c_rt_lib0move(&___nl__im__251,___get_global_string_const(36));
#line 498
c_rt_lib0move(&___nl__im__254, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 498
c_rt_lib0move(&___nl__im__253, c_rt_lib0array_get(___nl__im__254, ___nl__int__245));
#line 498
c_rt_lib0clear(&___nl__im__254);
#line 498
c_rt_lib0move(&___nl__im__252, c_rt_lib0hash_get_value_dec(___nl__im__253, ___get_global_string_const(355)));
#line 498
c_rt_lib0clear(&___nl__im__253);
#line 498
___nl__bool__255 = c_rt_lib0priv_is(___nl__im__252, ___get_global_string_const(39));
#line 498
if(___nl__bool__255){ goto label_585;}
#line 500
___nl__bool__255 = c_rt_lib0priv_is(___nl__im__252, ___get_global_string_const(225));
#line 500
if(___nl__bool__255){ goto label_603;}
#line 500
c_rt_lib0move(&___nl__im__256,___get_global_string_const(15));
#line 500
c_rt_lib0move(&___nl__im__256, c_rt_lib0array_mk(2, ___nl__im__256, ___nl__im__252));
#line 500
nl_die_arg(___nl__im__256);
#line 498
label_585:
;
#line 499
c_rt_lib0move(&___nl__im__261, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 499
c_rt_lib0move(&___nl__im__260, c_rt_lib0array_get(___nl__im__261, ___nl__int__245));
#line 499
c_rt_lib0clear(&___nl__im__261);
#line 499
c_rt_lib0move(&___nl__im__259, c_rt_lib0hash_get_value_dec(___nl__im__260, ___get_global_string_const(471)));
#line 499
c_rt_lib0clear(&___nl__im__260);
#line 499
c_rt_lib0move(&___nl__im__258, c_rt_lib0hash_get_value_dec(___nl__im__259, ___get_global_string_const(206)));
#line 499
c_rt_lib0clear(&___nl__im__259);
#line 499
___nl__bool__257 = c_rt_lib0priv_is(___nl__im__258, ___get_global_string_const(131));
#line 499
c_rt_lib0clear(&___nl__im__258);
#line 499
___nl__bool__257 = !___nl__bool__257;
#line 499
___nl__bool__257 = !___nl__bool__257;
#line 499
if(___nl__bool__257){ goto label_600;}
#line 499
c_rt_lib0move(&___nl__im__251,___get_global_string_const(506));
#line 499
goto label_600;
#line 499
label_600:
;
#line 499
//clear ___nl__bool__257;
#line 500
goto label_620;
#line 500
label_603:
;
#line 501
c_rt_lib0move(&___nl__im__266, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 501
c_rt_lib0move(&___nl__im__265, c_rt_lib0array_get(___nl__im__266, ___nl__int__245));
#line 501
c_rt_lib0clear(&___nl__im__266);
#line 501
c_rt_lib0move(&___nl__im__264, c_rt_lib0hash_get_value_dec(___nl__im__265, ___get_global_string_const(471)));
#line 501
c_rt_lib0clear(&___nl__im__265);
#line 501
c_rt_lib0move(&___nl__im__263, c_rt_lib0hash_get_value_dec(___nl__im__264, ___get_global_string_const(206)));
#line 501
c_rt_lib0clear(&___nl__im__264);
#line 501
___nl__bool__262 = c_rt_lib0priv_is(___nl__im__263, ___get_global_string_const(131));
#line 501
c_rt_lib0clear(&___nl__im__263);
#line 501
___nl__bool__262 = !___nl__bool__262;
#line 501
if(___nl__bool__262){ goto label_617;}
#line 501
c_rt_lib0move(&___nl__im__251,___get_global_string_const(375));
#line 501
goto label_617;
#line 501
label_617:
;
#line 501
//clear ___nl__bool__262;
#line 502
goto label_620;
#line 502
label_620:
;
#line 503
c_rt_lib0move(&___nl__im__269,___get_global_string_const(507));
#line 503
c_rt_lib0move(&___nl__im__268, c_rt_lib0concat_new(___nl__im__251, ___nl__im__269));
#line 503
c_rt_lib0clear(&___nl__im__269);
#line 503
c_rt_lib0move(&___nl__string__270, c_rt_lib0int_to_string(___nl__int__245));
#line 503
c_rt_lib0move(&___nl__im__267, c_rt_lib0concat_new(___nl__im__268, ___nl__string__270));
#line 503
c_rt_lib0clear(&___nl__im__268);
#line 503
c_rt_lib0clear(&___nl__string__270);
#line 503
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__267));
#line 503
c_rt_lib0clear(&___nl__im__267);
#line 503
c_rt_lib0clear(&___nl__im__251);
#line 503
c_rt_lib0clear(&___nl__im__252);
#line 503
//clear ___nl__bool__255;
#line 503
c_rt_lib0clear(&___nl__im__256);
#line 504
___nl__int__245 = ___nl__int__245 + ___nl__int__246;
#line 504
goto label_558;
#line 504
label_636:
;
#line 505
c_rt_lib0move(&___nl__im__271,___get_global_string_const(508));
#line 505
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__271));
#line 505
c_rt_lib0clear(&___nl__im__271);
#line 506
___nl__int__272 = 0;
#line 506
___nl__int__273 = 1;
#line 506
label_642:
;
#line 506
___nl__bool__274 = ___nl__int__272 >= ___nl__int__185;
#line 506
if(___nl__bool__274){ goto label_699;}
#line 507
c_rt_lib0move(&___nl__im__279, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 507
c_rt_lib0move(&___nl__im__278, c_rt_lib0array_get(___nl__im__279, ___nl__int__272));
#line 507
c_rt_lib0clear(&___nl__im__279);
#line 507
c_rt_lib0move(&___nl__im__277, c_rt_lib0hash_get_value_dec(___nl__im__278, ___get_global_string_const(471)));
#line 507
c_rt_lib0clear(&___nl__im__278);
#line 507
c_rt_lib0move(&___nl__im__276, c_rt_lib0hash_get_value_dec(___nl__im__277, ___get_global_string_const(206)));
#line 507
c_rt_lib0clear(&___nl__im__277);
#line 507
___nl__bool__275 = c_rt_lib0priv_is(___nl__im__276, ___get_global_string_const(131));
#line 507
c_rt_lib0clear(&___nl__im__276);
#line 507
___nl__bool__275 = !___nl__bool__275;
#line 507
___nl__bool__275 = !___nl__bool__275;
#line 507
if(___nl__bool__275){ goto label_693;}
#line 508
c_rt_lib0move(&___nl__im__282,___get_global_string_const(509));
#line 508
c_rt_lib0move(&___nl__string__283, c_rt_lib0int_to_string(___nl__int__272));
#line 508
c_rt_lib0move(&___nl__im__281, c_rt_lib0concat_new(___nl__im__282, ___nl__string__283));
#line 508
c_rt_lib0clear(&___nl__im__282);
#line 508
c_rt_lib0clear(&___nl__string__283);
#line 508
c_rt_lib0move(&___nl__im__284,___get_global_string_const(317));
#line 508
c_rt_lib0move(&___nl__im__280, c_rt_lib0concat_new(___nl__im__281, ___nl__im__284));
#line 508
c_rt_lib0clear(&___nl__im__281);
#line 508
c_rt_lib0clear(&___nl__im__284);
#line 509
c_rt_lib0move(&___nl__im__289, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(215)));
#line 509
c_rt_lib0move(&___nl__im__288, c_rt_lib0array_get(___nl__im__289, ___nl__int__272));
#line 509
c_rt_lib0clear(&___nl__im__289);
#line 509
c_rt_lib0move(&___nl__im__287, c_rt_lib0hash_get_value_dec(___nl__im__288, ___get_global_string_const(471)));
#line 509
c_rt_lib0clear(&___nl__im__288);
#line 509
c_rt_lib0move(&___nl__im__286, c_rt_lib0hash_get_value_dec(___nl__im__287, ___get_global_string_const(206)));
#line 509
c_rt_lib0clear(&___nl__im__287);
#line 509
c_rt_lib0move(&___nl__im__291,___get_global_string_const(507));
#line 509
c_rt_lib0move(&___nl__string__292, c_rt_lib0int_to_string(___nl__int__272));
#line 509
c_rt_lib0move(&___nl__im__290, c_rt_lib0concat_new(___nl__im__291, ___nl__string__292));
#line 509
c_rt_lib0clear(&___nl__im__291);
#line 509
c_rt_lib0clear(&___nl__string__292);
#line 509
c_rt_lib0move(&___nl__im__285, generator_c_priv0get_im_from_value(___nl__im__286, ___nl__im__290));
#line 509
c_rt_lib0clear(&___nl__im__286);
#line 509
c_rt_lib0clear(&___nl__im__290);
#line 510
c_rt_lib0move(&___nl__im__295,___get_global_string_const(240));
#line 510
c_rt_lib0move(&___nl__im__296, c_rt_lib0array_mk(2, ___nl__im__280, ___nl__im__285));
#line 510
c_rt_lib0move(&___nl__im__294, generator_c_priv0get_fun_lib(___nl__im__295, ___nl__im__296));
#line 510
c_rt_lib0clear(&___nl__im__295);
#line 510
c_rt_lib0clear(&___nl__im__296);
#line 510
c_rt_lib0move(&___nl__im__297,___get_global_string_const(442));
#line 510
c_rt_lib0move(&___nl__im__293, c_rt_lib0concat_new(___nl__im__294, ___nl__im__297));
#line 510
c_rt_lib0clear(&___nl__im__294);
#line 510
c_rt_lib0clear(&___nl__im__297);
#line 510
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__293));
#line 510
c_rt_lib0clear(&___nl__im__293);
#line 511
goto label_693;
#line 511
label_693:
;
#line 511
//clear ___nl__bool__275;
#line 511
c_rt_lib0clear(&___nl__im__280);
#line 511
c_rt_lib0clear(&___nl__im__285);
#line 512
___nl__int__272 = ___nl__int__272 + ___nl__int__273;
#line 512
goto label_642;
#line 512
label_699:
;
#line 513
c_rt_lib0move(&___nl__im__300,___get_global_string_const(510));
#line 513
c_rt_lib0move(&___nl__im__302, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(417)));
#line 513
c_rt_lib0move(&___nl__im__303,___get_global_string_const(511));
#line 513
c_rt_lib0move(&___nl__im__301, generator_c_priv0get_im_from_value(___nl__im__302, ___nl__im__303));
#line 513
c_rt_lib0clear(&___nl__im__302);
#line 513
c_rt_lib0clear(&___nl__im__303);
#line 513
c_rt_lib0move(&___nl__im__299, c_rt_lib0concat_new(___nl__im__300, ___nl__im__301));
#line 513
c_rt_lib0clear(&___nl__im__300);
#line 513
c_rt_lib0clear(&___nl__im__301);
#line 513
c_rt_lib0move(&___nl__im__304,___get_global_string_const(442));
#line 513
c_rt_lib0move(&___nl__im__298, c_rt_lib0concat_new(___nl__im__299, ___nl__im__304));
#line 513
c_rt_lib0clear(&___nl__im__299);
#line 513
c_rt_lib0clear(&___nl__im__304);
#line 513
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__298));
#line 513
c_rt_lib0clear(&___nl__im__298);
#line 514
c_rt_lib0move(&___nl__im__305,___get_global_string_const(307));
#line 514
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__305));
#line 514
c_rt_lib0clear(&___nl__im__305);
#line 515
goto label_719;
#line 515
label_719:
;
#line 515
//clear ___nl__bool__174;
#line 515
c_rt_lib0clear(&___nl__im__177);
#line 515
//clear ___nl__int__185;
#line 515
//clear ___nl__int__196;
#line 515
//clear ___nl__int__197;
#line 515
//clear ___nl__bool__198;
#line 515
c_rt_lib0clear(&___nl__im__199);
#line 515
c_rt_lib0clear(&___nl__im__204);
#line 515
//clear ___nl__int__245;
#line 515
//clear ___nl__int__246;
#line 515
//clear ___nl__bool__247;
#line 515
c_rt_lib0clear(&___nl__im__251);
#line 515
c_rt_lib0clear(&___nl__im__252);
#line 515
//clear ___nl__bool__255;
#line 515
c_rt_lib0clear(&___nl__im__256);
#line 515
//clear ___nl__int__272;
#line 515
//clear ___nl__int__273;
#line 515
//clear ___nl__bool__274;
#line 516
___nl__bool__306 = generator_c_priv0is_singleton_use_function(___nl__im__168);
#line 516
___nl__bool__306 = !___nl__bool__306;
#line 516
if(___nl__bool__306){ goto label_799;}
#line 517
___nl__im_ptr__309 = &((*___ref___rec__0).mod_name0field);
#line 517
c_rt_lib0copy(&___nl__im__308, (*___nl__im_ptr__309));
#line 517
___nl__im_ptr__309 = NULL;
#line 517
c_rt_lib0move(&___nl__im__307, generator_c_priv0get_function_name(___nl__im__168, ___nl__im__308));
#line 517
c_rt_lib0clear(&___nl__im__308);
#line 518
c_rt_lib0move(&___nl__im__312, generator_c_priv0im_t());
#line 518
c_rt_lib0move(&___nl__im__311, c_rt_lib0concat_new(___nl__im__312, ___nl__im__307));
#line 518
c_rt_lib0clear(&___nl__im__312);
#line 518
c_rt_lib0move(&___nl__im__313,___get_global_string_const(512));
#line 518
c_rt_lib0move(&___nl__im__310, c_rt_lib0concat_new(___nl__im__311, ___nl__im__313));
#line 518
c_rt_lib0clear(&___nl__im__311);
#line 518
c_rt_lib0clear(&___nl__im__313);
#line 518
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__310));
#line 518
c_rt_lib0clear(&___nl__im__310);
#line 519
c_rt_lib0move(&___nl__im__316,___get_global_string_const(36));
#line 519
c_rt_lib0move(&___nl__im__317,___get_global_string_const(485));
#line 519
___nl__im_ptr__319 = &((*___ref___rec__0).mod_name0field);
#line 519
c_rt_lib0copy(&___nl__im__318, (*___nl__im_ptr__319));
#line 519
___nl__im_ptr__319 = NULL;
#line 519
c_rt_lib0move(&___nl__im__315, generator_c_priv0get_fun_name(___nl__im__316, ___nl__im__317, ___nl__im__318));
#line 519
c_rt_lib0clear(&___nl__im__316);
#line 519
c_rt_lib0clear(&___nl__im__317);
#line 519
c_rt_lib0clear(&___nl__im__318);
#line 519
c_rt_lib0move(&___nl__im__320,___get_global_string_const(486));
#line 519
c_rt_lib0move(&___nl__im__314, c_rt_lib0concat_new(___nl__im__315, ___nl__im__320));
#line 519
c_rt_lib0clear(&___nl__im__315);
#line 519
c_rt_lib0clear(&___nl__im__320);
#line 519
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__314));
#line 519
c_rt_lib0clear(&___nl__im__314);
#line 520
c_rt_lib0move(&___nl__im__325,___get_global_string_const(510));
#line 520
c_rt_lib0move(&___nl__im__326, generator_c_priv0get_const_singleton(___ref___rec__0, ___nl__im__307));
#line 520
c_rt_lib0move(&___nl__im__324, c_rt_lib0concat_new(___nl__im__325, ___nl__im__326));
#line 520
c_rt_lib0clear(&___nl__im__325);
#line 520
c_rt_lib0clear(&___nl__im__326);
#line 520
c_rt_lib0move(&___nl__im__327,___get_global_string_const(442));
#line 520
c_rt_lib0move(&___nl__im__323, c_rt_lib0concat_new(___nl__im__324, ___nl__im__327));
#line 520
c_rt_lib0clear(&___nl__im__324);
#line 520
c_rt_lib0clear(&___nl__im__327);
#line 520
c_rt_lib0move(&___nl__im__328, string0lf());
#line 520
c_rt_lib0move(&___nl__im__322, c_rt_lib0concat_new(___nl__im__323, ___nl__im__328));
#line 520
c_rt_lib0clear(&___nl__im__323);
#line 520
c_rt_lib0clear(&___nl__im__328);
#line 520
c_rt_lib0move(&___nl__im__329,___get_global_string_const(307));
#line 520
c_rt_lib0move(&___nl__im__321, c_rt_lib0concat_new(___nl__im__322, ___nl__im__329));
#line 520
c_rt_lib0clear(&___nl__im__322);
#line 520
c_rt_lib0clear(&___nl__im__329);
#line 520
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__321));
#line 520
c_rt_lib0clear(&___nl__im__321);
#line 521
c_rt_lib0move(&___nl__im__332, generator_c_priv0im_t());
#line 521
c_rt_lib0move(&___nl__im__331, c_rt_lib0concat_new(___nl__im__332, ___nl__im__307));
#line 521
c_rt_lib0clear(&___nl__im__332);
#line 521
c_rt_lib0move(&___nl__im__333,___get_global_string_const(513));
#line 521
c_rt_lib0move(&___nl__im__330, c_rt_lib0concat_new(___nl__im__331, ___nl__im__333));
#line 521
c_rt_lib0clear(&___nl__im__331);
#line 521
c_rt_lib0clear(&___nl__im__333);
#line 521
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__330));
#line 521
c_rt_lib0clear(&___nl__im__330);
#line 522
goto label_808;
#line 522
label_799:
;
#line 523
___nl__im_ptr__336 = &((*___ref___rec__0).mod_name0field);
#line 523
c_rt_lib0copy(&___nl__im__335, (*___nl__im_ptr__336));
#line 523
___nl__im_ptr__336 = NULL;
#line 523
c_rt_lib0move(&___nl__im__334, generator_c_priv0get_function_header(___nl__im__168, ___nl__im__335));
#line 523
c_rt_lib0clear(&___nl__im__335);
#line 523
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__334));
#line 523
c_rt_lib0clear(&___nl__im__334);
#line 524
goto label_808;
#line 524
label_808:
;
#line 524
//clear ___nl__bool__306;
#line 524
c_rt_lib0clear(&___nl__im__307);
#line 525
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___rec__0, ___nl__im__168, ___nl__im__2));
#line 525
c_rt_lib0clear(&___nl__im__168);
#line 526
___nl__int__169 = ___nl__int__169 + ___nl__int__170;
#line 526
goto label_393;
#line 526
label_815:
;
#line 527
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___rec__0));
#line 528
___nl__hash_ptr__337 = &((*___ref___rec__0).additional_imports0field);
#line 528
___nl__int__341 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___nl__hash_ptr__337, -1);
#line 528
label_819:
;
#line 528
___nl__bool__339 = ___nl__int__341 == -1;
#line 528
if(___nl__bool__339){ goto label_834;}
#line 528
c_rt_lib0copy(&___nl__im__338, (*___nl__hash_ptr__337).keys[___nl__int__341]);
#line 528
___nl__bool_ptr__340 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(___nl__hash_ptr__337, ___nl__im__338, false);
#line 529
c_rt_lib0move(&___nl__im__343, generator_c_priv0get_include(___nl__im__338));
#line 529
c_rt_lib0move(&___nl__im__344, string0lf());
#line 529
c_rt_lib0move(&___nl__im__342, c_rt_lib0concat_new(___nl__im__343, ___nl__im__344));
#line 529
c_rt_lib0clear(&___nl__im__343);
#line 529
c_rt_lib0clear(&___nl__im__344);
#line 529
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_add(___nl__im__36, ___nl__im__342));
#line 529
c_rt_lib0clear(&___nl__im__342);
#line 529
___nl__bool_ptr__340 = NULL;
#line 530
___nl__int__341 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___nl__hash_ptr__337, ___nl__int__341);
#line 530
goto label_819;
#line 530
label_834:
;
#line 530
___nl__hash_ptr__337 = NULL;
#line 531
___nl__im_ptr__347 = &((*___ref___rec__0).ret0field);
#line 531
c_rt_lib0copy(&___nl__im__346, (*___nl__im_ptr__347));
#line 531
___nl__im_ptr__347 = NULL;
#line 531
c_rt_lib0move(&___nl__im__345, c_rt_lib0concat_new(___nl__im__36, ___nl__im__346));
#line 531
c_rt_lib0clear(&___nl__im__346);
#line 531
___nl__im_ptr__348 = &((*___ref___rec__0).ret0field);
#line 531
c_rt_lib0copy(___nl__im_ptr__348, ___nl__im__345);
#line 531
___nl__im_ptr__348 = NULL;
#line 531
c_rt_lib0clear(&___nl__im__345);
#line 531
c_rt_lib0clear(&___nl__im__1);
#line 531
c_rt_lib0clear(&___nl__im__2);
#line 531
c_rt_lib0clear(&___nl__im__25);
#line 531
c_rt_lib0clear(&___nl__im__26);
#line 531
//clear ___nl__int__27;
#line 531
//clear ___nl__int__28;
#line 531
//clear ___nl__int__29;
#line 531
//clear ___nl__bool__30;
#line 531
c_rt_lib0clear(&___nl__im__31);
#line 531
c_rt_lib0clear(&___nl__im__36);
#line 531
c_rt_lib0clear(&___nl__im__82);
#line 531
c_rt_lib0clear(&___nl__im__86);
#line 531
c_rt_lib0clear(&___nl__im__87);
#line 531
c_rt_lib0clear(&___nl__im__88);
#line 531
//clear ___nl__int__89;
#line 531
//clear ___nl__int__90;
#line 531
//clear ___nl__int__91;
#line 531
//clear ___nl__bool__92;
#line 531
c_rt_lib0clear(&___nl__im__93);
#line 531
c_rt_lib0clear(&___nl__im__94);
#line 531
//clear ___nl__bool__95;
#line 531
c_rt_lib0clear(&___nl__im__96);
#line 531
c_rt_lib0clear(&___nl__im__97);
#line 531
//clear ___nl__bool__98;
#line 531
c_rt_lib0clear(&___nl__im__99);
#line 531
c_rt_lib0clear(&___nl__im__100);
#line 531
c_rt_lib0clear(&___nl__im__101);
#line 531
//clear ___nl__bool__104;
#line 531
c_rt_lib0clear(&___nl__im__105);
#line 531
c_rt_lib0clear(&___nl__im__106);
#line 531
c_rt_lib0clear(&___nl__im__107);
#line 531
c_rt_lib0clear(&___nl__im__108);
#line 531
//clear ___nl__int__109;
#line 531
//clear ___nl__int__110;
#line 531
//clear ___nl__int__111;
#line 531
//clear ___nl__bool__112;
#line 531
c_rt_lib0clear(&___nl__im__113);
#line 531
//clear ___nl__bool__114;
#line 531
c_rt_lib0clear(&___nl__im__116);
#line 531
//clear ___nl__bool__117;
#line 531
c_rt_lib0clear(&___nl__im__118);
#line 531
c_rt_lib0clear(&___nl__im__138);
#line 531
c_rt_lib0clear(&___nl__im__139);
#line 531
c_rt_lib0clear(&___nl__im__140);
#line 531
//clear ___nl__int__141;
#line 531
//clear ___nl__int__142;
#line 531
//clear ___nl__int__143;
#line 531
//clear ___nl__bool__144;
#line 531
c_rt_lib0clear(&___nl__im__145);
#line 531
c_rt_lib0clear(&___nl__im__146);
#line 531
c_rt_lib0clear(&___nl__im__149);
#line 531
//clear ___nl__bool__150;
#line 531
c_rt_lib0clear(&___nl__im__151);
#line 531
c_rt_lib0clear(&___nl__im__167);
#line 531
c_rt_lib0clear(&___nl__im__168);
#line 531
//clear ___nl__int__169;
#line 531
//clear ___nl__int__170;
#line 531
//clear ___nl__int__171;
#line 531
//clear ___nl__bool__172;
#line 531
c_rt_lib0clear(&___nl__im__173);
#line 531
c_rt_lib0clear(&___nl__im__338);
#line 531
//clear ___nl__bool__339;
#line 531
//clear ___nl__int__341;
#line 531
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
#line 535
___nl__rec_ptr__2 = &((*___ref___rec__0).const0field);
#line 535
___nl__rec_ptr__3 = &(___nl__rec_ptr__2->int0field);
#line 535
___nl__arr_ptr__4 = &(___nl__rec_ptr__3->arr0field);
#line 535
___nl__int__1 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__4);
#line 535
___nl__arr_ptr__4 = NULL;
#line 535
___nl__rec_ptr__3 = NULL;
#line 535
___nl__rec_ptr__2 = NULL;
#line 536
___nl__rec_ptr__6 = &((*___ref___rec__0).const0field);
#line 536
___nl__rec_ptr__7 = &(___nl__rec_ptr__6->string0field);
#line 536
___nl__arr_ptr__8 = &(___nl__rec_ptr__7->arr0field);
#line 536
___nl__int__5 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__8);
#line 536
___nl__arr_ptr__8 = NULL;
#line 536
___nl__rec_ptr__7 = NULL;
#line 536
___nl__rec_ptr__6 = NULL;
#line 537
___nl__rec_ptr__10 = &((*___ref___rec__0).const0field);
#line 537
___nl__rec_ptr__11 = &(___nl__rec_ptr__10->singleton0field);
#line 537
___nl__arr_ptr__12 = &(___nl__rec_ptr__11->arr0field);
#line 537
___nl__int__9 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__12);
#line 537
___nl__arr_ptr__12 = NULL;
#line 537
___nl__rec_ptr__11 = NULL;
#line 537
___nl__rec_ptr__10 = NULL;
#line 538
___nl__rec_ptr__14 = &((*___ref___rec__0).const0field);
#line 538
___nl__int_ptr__15 = &(___nl__rec_ptr__14->dynamic_nr0field);
#line 538
___nl__int__13 = (*___nl__int_ptr__15);
#line 538
___nl__int_ptr__15 = NULL;
#line 538
___nl__rec_ptr__14 = NULL;
#line 539
___nl__int__18 = ___nl__int__1 + ___nl__int__5;
#line 539
___nl__int__17 = ___nl__int__18 + ___nl__int__9;
#line 539
//clear ___nl__int__18;
#line 539
___nl__int__16 = ___nl__int__17 + ___nl__int__13;
#line 539
//clear ___nl__int__17;
#line 540
c_rt_lib0move(&___nl__im__23,___get_global_string_const(435));
#line 541
c_rt_lib0move(&___nl__im__24, generator_c_priv0im_t());
#line 541
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 541
c_rt_lib0clear(&___nl__im__23);
#line 541
c_rt_lib0clear(&___nl__im__24);
#line 541
c_rt_lib0move(&___nl__im__25,___get_global_string_const(514));
#line 541
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 541
c_rt_lib0clear(&___nl__im__22);
#line 541
c_rt_lib0clear(&___nl__im__25);
#line 541
___nl__int__27 = 1;
#line 541
___nl__int__26 = ___nl__int__27 + ___nl__int__16;
#line 541
//clear ___nl__int__27;
#line 541
c_rt_lib0move(&___nl__string__28, c_rt_lib0int_to_string(___nl__int__26));
#line 541
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__28));
#line 541
c_rt_lib0clear(&___nl__im__21);
#line 541
//clear ___nl__int__26;
#line 541
c_rt_lib0clear(&___nl__string__28);
#line 541
c_rt_lib0move(&___nl__im__29,___get_global_string_const(515));
#line 541
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__29));
#line 541
c_rt_lib0clear(&___nl__im__20);
#line 541
c_rt_lib0clear(&___nl__im__29);
#line 541
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__19));
#line 541
c_rt_lib0clear(&___nl__im__19);
#line 543
c_rt_lib0move(&___nl__im__34,___get_global_string_const(484));
#line 543
c_rt_lib0move(&___nl__im__36,___get_global_string_const(36));
#line 543
c_rt_lib0move(&___nl__im__37,___get_global_string_const(485));
#line 543
___nl__im_ptr__39 = &((*___ref___rec__0).mod_name0field);
#line 543
c_rt_lib0copy(&___nl__im__38, (*___nl__im_ptr__39));
#line 543
___nl__im_ptr__39 = NULL;
#line 543
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_fun_name(___nl__im__36, ___nl__im__37, ___nl__im__38));
#line 543
c_rt_lib0clear(&___nl__im__36);
#line 543
c_rt_lib0clear(&___nl__im__37);
#line 543
c_rt_lib0clear(&___nl__im__38);
#line 543
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 543
c_rt_lib0clear(&___nl__im__34);
#line 543
c_rt_lib0clear(&___nl__im__35);
#line 543
c_rt_lib0move(&___nl__im__40,___get_global_string_const(516));
#line 543
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__40));
#line 543
c_rt_lib0clear(&___nl__im__33);
#line 543
c_rt_lib0clear(&___nl__im__40);
#line 546
___nl__int__42 = ___nl__int__1 + ___nl__int__5;
#line 546
___nl__int__41 = ___nl__int__42 + ___nl__int__9;
#line 546
//clear ___nl__int__42;
#line 546
c_rt_lib0move(&___nl__string__43, c_rt_lib0int_to_string(___nl__int__41));
#line 546
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__43));
#line 546
c_rt_lib0clear(&___nl__im__32);
#line 546
//clear ___nl__int__41;
#line 546
c_rt_lib0clear(&___nl__string__43);
#line 546
c_rt_lib0move(&___nl__im__44,___get_global_string_const(517));
#line 546
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__44));
#line 546
c_rt_lib0clear(&___nl__im__31);
#line 546
c_rt_lib0clear(&___nl__im__44);
#line 546
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__30));
#line 546
c_rt_lib0clear(&___nl__im__30);
#line 548
___nl__int__45 = 0;
#line 548
___nl__int__46 = 1;
#line 548
label_87:
;
#line 548
___nl__bool__47 = ___nl__int__45 >= ___nl__int__1;
#line 548
if(___nl__bool__47){ goto label_121;}
#line 549
c_rt_lib0move(&___nl__im__52,___get_global_string_const(514));
#line 549
c_rt_lib0move(&___nl__string__53, c_rt_lib0int_to_string(___nl__int__45));
#line 549
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__string__53));
#line 549
c_rt_lib0clear(&___nl__im__52);
#line 549
c_rt_lib0clear(&___nl__string__53);
#line 549
c_rt_lib0move(&___nl__im__54,___get_global_string_const(518));
#line 549
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__54));
#line 549
c_rt_lib0clear(&___nl__im__51);
#line 549
c_rt_lib0clear(&___nl__im__54);
#line 549
___nl__rec_ptr__57 = &((*___ref___rec__0).const0field);
#line 549
___nl__rec_ptr__58 = &(___nl__rec_ptr__57->int0field);
#line 549
___nl__arr_ptr__59 = &(___nl__rec_ptr__58->arr0field);
#line 549
___nl__im_ptr__60 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__59, ___nl__int__45);
#line 549
c_rt_lib0copy(&___nl__im__56, (*___nl__im_ptr__60));
#line 549
//release ___nl__im_ptr__60;
#line 549
___nl__arr_ptr__59 = NULL;
#line 549
___nl__rec_ptr__58 = NULL;
#line 549
___nl__rec_ptr__57 = NULL;
#line 549
c_rt_lib0move(&___nl__im__55, generator_c_priv0create_int(___nl__im__56));
#line 549
c_rt_lib0clear(&___nl__im__56);
#line 549
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__55));
#line 549
c_rt_lib0clear(&___nl__im__50);
#line 549
c_rt_lib0clear(&___nl__im__55);
#line 549
c_rt_lib0move(&___nl__im__61,___get_global_string_const(442));
#line 549
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__61));
#line 549
c_rt_lib0clear(&___nl__im__49);
#line 549
c_rt_lib0clear(&___nl__im__61);
#line 549
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__48));
#line 549
c_rt_lib0clear(&___nl__im__48);
#line 550
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 550
goto label_87;
#line 550
label_121:
;
#line 551
___nl__int__62 = 0;
#line 551
___nl__int__63 = 1;
#line 551
label_124:
;
#line 551
___nl__bool__64 = ___nl__int__62 >= ___nl__int__5;
#line 551
if(___nl__bool__64){ goto label_160;}
#line 552
c_rt_lib0move(&___nl__im__69,___get_global_string_const(514));
#line 552
___nl__int__70 = ___nl__int__62 + ___nl__int__1;
#line 552
c_rt_lib0move(&___nl__string__71, c_rt_lib0int_to_string(___nl__int__70));
#line 552
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__string__71));
#line 552
c_rt_lib0clear(&___nl__im__69);
#line 552
//clear ___nl__int__70;
#line 552
c_rt_lib0clear(&___nl__string__71);
#line 552
c_rt_lib0move(&___nl__im__72,___get_global_string_const(518));
#line 552
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__72));
#line 552
c_rt_lib0clear(&___nl__im__68);
#line 552
c_rt_lib0clear(&___nl__im__72);
#line 553
___nl__rec_ptr__75 = &((*___ref___rec__0).const0field);
#line 553
___nl__rec_ptr__76 = &(___nl__rec_ptr__75->string0field);
#line 553
___nl__arr_ptr__77 = &(___nl__rec_ptr__76->arr0field);
#line 553
___nl__im_ptr__78 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__77, ___nl__int__62);
#line 553
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__78));
#line 553
//release ___nl__im_ptr__78;
#line 553
___nl__arr_ptr__77 = NULL;
#line 553
___nl__rec_ptr__76 = NULL;
#line 553
___nl__rec_ptr__75 = NULL;
#line 553
c_rt_lib0move(&___nl__im__73, generator_c_priv0create_string(___nl__im__74));
#line 553
c_rt_lib0clear(&___nl__im__74);
#line 553
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__73));
#line 553
c_rt_lib0clear(&___nl__im__67);
#line 553
c_rt_lib0clear(&___nl__im__73);
#line 553
c_rt_lib0move(&___nl__im__79,___get_global_string_const(442));
#line 553
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__79));
#line 553
c_rt_lib0clear(&___nl__im__66);
#line 553
c_rt_lib0clear(&___nl__im__79);
#line 553
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__65));
#line 553
c_rt_lib0clear(&___nl__im__65);
#line 554
___nl__int__62 = ___nl__int__62 + ___nl__int__63;
#line 554
goto label_124;
#line 554
label_160:
;
#line 555
c_rt_lib0move(&___nl__im__88,___get_global_string_const(519));
#line 556
___nl__int__89 = ___nl__int__1 + ___nl__int__5;
#line 556
c_rt_lib0move(&___nl__string__90, c_rt_lib0int_to_string(___nl__int__89));
#line 556
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__string__90));
#line 556
c_rt_lib0clear(&___nl__im__88);
#line 556
//clear ___nl__int__89;
#line 556
c_rt_lib0clear(&___nl__string__90);
#line 556
c_rt_lib0move(&___nl__im__91,___get_global_string_const(520));
#line 556
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__91));
#line 556
c_rt_lib0clear(&___nl__im__87);
#line 556
c_rt_lib0clear(&___nl__im__91);
#line 556
c_rt_lib0move(&___nl__string__92, c_rt_lib0int_to_string(___nl__int__16));
#line 556
c_rt_lib0move(&___nl__im__85, c_rt_lib0concat_new(___nl__im__86, ___nl__string__92));
#line 556
c_rt_lib0clear(&___nl__im__86);
#line 556
c_rt_lib0clear(&___nl__string__92);
#line 556
c_rt_lib0move(&___nl__im__93,___get_global_string_const(521));
#line 556
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__im__93));
#line 556
c_rt_lib0clear(&___nl__im__85);
#line 556
c_rt_lib0clear(&___nl__im__93);
#line 557
c_rt_lib0move(&___nl__im__95,___get_global_string_const(522));
#line 557
c_rt_lib0move(&___nl__im__94, generator_c_priv0get_lib_fun(___nl__im__95));
#line 557
c_rt_lib0clear(&___nl__im__95);
#line 557
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__94));
#line 557
c_rt_lib0clear(&___nl__im__84);
#line 557
c_rt_lib0clear(&___nl__im__94);
#line 557
c_rt_lib0move(&___nl__im__96,___get_global_string_const(523));
#line 557
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__96));
#line 557
c_rt_lib0clear(&___nl__im__83);
#line 557
c_rt_lib0clear(&___nl__im__96);
#line 557
c_rt_lib0move(&___nl__string__97, c_rt_lib0int_to_string(___nl__int__16));
#line 557
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__string__97));
#line 557
c_rt_lib0clear(&___nl__im__82);
#line 557
c_rt_lib0clear(&___nl__string__97);
#line 557
c_rt_lib0move(&___nl__im__98,___get_global_string_const(524));
#line 557
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__98));
#line 557
c_rt_lib0clear(&___nl__im__81);
#line 557
c_rt_lib0clear(&___nl__im__98);
#line 557
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__80));
#line 557
c_rt_lib0clear(&___nl__im__80);
#line 559
c_rt_lib0move(&___nl__im__105, generator_c_priv0im_t());
#line 559
c_rt_lib0move(&___nl__im__107,___get_global_string_const(36));
#line 559
c_rt_lib0move(&___nl__im__108,___get_global_string_const(487));
#line 559
___nl__im_ptr__110 = &((*___ref___rec__0).mod_name0field);
#line 559
c_rt_lib0copy(&___nl__im__109, (*___nl__im_ptr__110));
#line 559
___nl__im_ptr__110 = NULL;
#line 559
c_rt_lib0move(&___nl__im__106, generator_c_priv0get_fun_name(___nl__im__107, ___nl__im__108, ___nl__im__109));
#line 559
c_rt_lib0clear(&___nl__im__107);
#line 559
c_rt_lib0clear(&___nl__im__108);
#line 559
c_rt_lib0clear(&___nl__im__109);
#line 559
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__106));
#line 559
c_rt_lib0clear(&___nl__im__105);
#line 559
c_rt_lib0clear(&___nl__im__106);
#line 559
c_rt_lib0move(&___nl__im__111,___get_global_string_const(525));
#line 559
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__111));
#line 559
c_rt_lib0clear(&___nl__im__104);
#line 559
c_rt_lib0clear(&___nl__im__111);
#line 560
c_rt_lib0move(&___nl__im__112, generator_c_priv0im_t());
#line 560
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__112));
#line 560
c_rt_lib0clear(&___nl__im__103);
#line 560
c_rt_lib0clear(&___nl__im__112);
#line 560
c_rt_lib0move(&___nl__im__113,___get_global_string_const(454));
#line 560
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__113));
#line 560
c_rt_lib0clear(&___nl__im__102);
#line 560
c_rt_lib0clear(&___nl__im__113);
#line 561
c_rt_lib0move(&___nl__im__115,___get_global_string_const(455));
#line 561
c_rt_lib0move(&___nl__im__117,___get_global_string_const(456));
#line 561
c_rt_lib0move(&___nl__im__118,___get_global_string_const(526));
#line 561
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_mk(2, ___nl__im__117, ___nl__im__118));
#line 561
c_rt_lib0clear(&___nl__im__117);
#line 561
c_rt_lib0clear(&___nl__im__118);
#line 561
c_rt_lib0move(&___nl__im__114, generator_c_priv0get_fun_lib(___nl__im__115, ___nl__im__116));
#line 561
c_rt_lib0clear(&___nl__im__115);
#line 561
c_rt_lib0clear(&___nl__im__116);
#line 561
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__114));
#line 561
c_rt_lib0clear(&___nl__im__101);
#line 561
c_rt_lib0clear(&___nl__im__114);
#line 561
c_rt_lib0move(&___nl__im__119,___get_global_string_const(459));
#line 561
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__im__119));
#line 561
c_rt_lib0clear(&___nl__im__100);
#line 561
c_rt_lib0clear(&___nl__im__119);
#line 561
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__99));
#line 561
c_rt_lib0clear(&___nl__im__99);
#line 564
c_rt_lib0move(&___nl__im__124, generator_c_priv0im_t());
#line 564
c_rt_lib0move(&___nl__im__126,___get_global_string_const(36));
#line 564
c_rt_lib0move(&___nl__im__127,___get_global_string_const(475));
#line 564
___nl__im_ptr__129 = &((*___ref___rec__0).mod_name0field);
#line 564
c_rt_lib0copy(&___nl__im__128, (*___nl__im_ptr__129));
#line 564
___nl__im_ptr__129 = NULL;
#line 564
c_rt_lib0move(&___nl__im__125, generator_c_priv0get_fun_name(___nl__im__126, ___nl__im__127, ___nl__im__128));
#line 564
c_rt_lib0clear(&___nl__im__126);
#line 564
c_rt_lib0clear(&___nl__im__127);
#line 564
c_rt_lib0clear(&___nl__im__128);
#line 564
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__125));
#line 564
c_rt_lib0clear(&___nl__im__124);
#line 564
c_rt_lib0clear(&___nl__im__125);
#line 564
c_rt_lib0move(&___nl__im__130,___get_global_string_const(527));
#line 564
c_rt_lib0move(&___nl__im__122, c_rt_lib0concat_new(___nl__im__123, ___nl__im__130));
#line 564
c_rt_lib0clear(&___nl__im__123);
#line 564
c_rt_lib0clear(&___nl__im__130);
#line 565
___nl__int__131 = ___nl__int__1 + ___nl__int__5;
#line 565
c_rt_lib0move(&___nl__string__132, c_rt_lib0int_to_string(___nl__int__131));
#line 565
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__string__132));
#line 565
c_rt_lib0clear(&___nl__im__122);
#line 565
//clear ___nl__int__131;
#line 565
c_rt_lib0clear(&___nl__string__132);
#line 565
c_rt_lib0move(&___nl__im__133,___get_global_string_const(528));
#line 565
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__133));
#line 565
c_rt_lib0clear(&___nl__im__121);
#line 565
c_rt_lib0clear(&___nl__im__133);
#line 565
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__120));
#line 565
c_rt_lib0clear(&___nl__im__120);
#line 567
___nl__int__134 = 0;
#line 567
___nl__int__135 = 1;
#line 567
label_274:
;
#line 567
___nl__bool__136 = ___nl__int__134 >= ___nl__int__9;
#line 567
if(___nl__bool__136){ goto label_324;}
#line 568
c_rt_lib0move(&___nl__im__139,___get_global_string_const(529));
#line 568
c_rt_lib0move(&___nl__string__140, c_rt_lib0int_to_string(___nl__int__134));
#line 568
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__string__140));
#line 568
c_rt_lib0clear(&___nl__im__139);
#line 568
c_rt_lib0clear(&___nl__string__140);
#line 568
c_rt_lib0move(&___nl__im__141,___get_global_string_const(530));
#line 568
c_rt_lib0move(&___nl__im__137, c_rt_lib0concat_new(___nl__im__138, ___nl__im__141));
#line 568
c_rt_lib0clear(&___nl__im__138);
#line 568
c_rt_lib0clear(&___nl__im__141);
#line 568
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__137));
#line 568
c_rt_lib0clear(&___nl__im__137);
#line 569
c_rt_lib0move(&___nl__im__146,___get_global_string_const(531));
#line 569
___nl__int__148 = ___nl__int__134 + ___nl__int__1;
#line 569
___nl__int__147 = ___nl__int__148 + ___nl__int__5;
#line 569
//clear ___nl__int__148;
#line 569
c_rt_lib0move(&___nl__string__149, c_rt_lib0int_to_string(___nl__int__147));
#line 569
c_rt_lib0move(&___nl__im__145, c_rt_lib0concat_new(___nl__im__146, ___nl__string__149));
#line 569
c_rt_lib0clear(&___nl__im__146);
#line 569
//clear ___nl__int__147;
#line 569
c_rt_lib0clear(&___nl__string__149);
#line 569
c_rt_lib0move(&___nl__im__150,___get_global_string_const(518));
#line 569
c_rt_lib0move(&___nl__im__144, c_rt_lib0concat_new(___nl__im__145, ___nl__im__150));
#line 569
c_rt_lib0clear(&___nl__im__145);
#line 569
c_rt_lib0clear(&___nl__im__150);
#line 570
___nl__rec_ptr__152 = &((*___ref___rec__0).const0field);
#line 570
___nl__rec_ptr__153 = &(___nl__rec_ptr__152->singleton0field);
#line 570
___nl__arr_ptr__154 = &(___nl__rec_ptr__153->arr0field);
#line 570
___nl__im_ptr__155 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__154, ___nl__int__134);
#line 570
c_rt_lib0copy(&___nl__im__151, (*___nl__im_ptr__155));
#line 570
//release ___nl__im_ptr__155;
#line 570
___nl__arr_ptr__154 = NULL;
#line 570
___nl__rec_ptr__153 = NULL;
#line 570
___nl__rec_ptr__152 = NULL;
#line 570
c_rt_lib0move(&___nl__im__143, c_rt_lib0concat_new(___nl__im__144, ___nl__im__151));
#line 570
c_rt_lib0clear(&___nl__im__144);
#line 570
c_rt_lib0clear(&___nl__im__151);
#line 570
c_rt_lib0move(&___nl__im__156,___get_global_string_const(532));
#line 570
c_rt_lib0move(&___nl__im__142, c_rt_lib0concat_new(___nl__im__143, ___nl__im__156));
#line 570
c_rt_lib0clear(&___nl__im__143);
#line 570
c_rt_lib0clear(&___nl__im__156);
#line 570
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__142));
#line 570
c_rt_lib0clear(&___nl__im__142);
#line 571
c_rt_lib0move(&___nl__im__157,___get_global_string_const(533));
#line 571
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__157));
#line 571
c_rt_lib0clear(&___nl__im__157);
#line 572
___nl__int__134 = ___nl__int__134 + ___nl__int__135;
#line 572
goto label_274;
#line 572
label_324:
;
#line 573
c_rt_lib0move(&___nl__im__162,___get_global_string_const(534));
#line 576
c_rt_lib0move(&___nl__im__163, generator_c_priv0im_t());
#line 576
c_rt_lib0move(&___nl__im__161, c_rt_lib0concat_new(___nl__im__162, ___nl__im__163));
#line 576
c_rt_lib0clear(&___nl__im__162);
#line 576
c_rt_lib0clear(&___nl__im__163);
#line 576
c_rt_lib0move(&___nl__im__164,___get_global_string_const(454));
#line 576
c_rt_lib0move(&___nl__im__160, c_rt_lib0concat_new(___nl__im__161, ___nl__im__164));
#line 576
c_rt_lib0clear(&___nl__im__161);
#line 576
c_rt_lib0clear(&___nl__im__164);
#line 577
c_rt_lib0move(&___nl__im__166,___get_global_string_const(455));
#line 577
c_rt_lib0move(&___nl__im__168,___get_global_string_const(456));
#line 577
c_rt_lib0move(&___nl__im__171,___get_global_string_const(535));
#line 577
___nl__int__172 = ___nl__int__1 + ___nl__int__5;
#line 577
c_rt_lib0move(&___nl__string__173, c_rt_lib0int_to_string(___nl__int__172));
#line 577
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__string__173));
#line 577
c_rt_lib0clear(&___nl__im__171);
#line 577
//clear ___nl__int__172;
#line 577
c_rt_lib0clear(&___nl__string__173);
#line 577
c_rt_lib0move(&___nl__im__174,___get_global_string_const(317));
#line 577
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_new(___nl__im__170, ___nl__im__174));
#line 577
c_rt_lib0clear(&___nl__im__170);
#line 577
c_rt_lib0clear(&___nl__im__174);
#line 577
c_rt_lib0move(&___nl__im__167, c_rt_lib0array_mk(2, ___nl__im__168, ___nl__im__169));
#line 577
c_rt_lib0clear(&___nl__im__168);
#line 577
c_rt_lib0clear(&___nl__im__169);
#line 577
c_rt_lib0move(&___nl__im__165, generator_c_priv0get_fun_lib(___nl__im__166, ___nl__im__167));
#line 577
c_rt_lib0clear(&___nl__im__166);
#line 577
c_rt_lib0clear(&___nl__im__167);
#line 577
c_rt_lib0move(&___nl__im__159, c_rt_lib0concat_new(___nl__im__160, ___nl__im__165));
#line 577
c_rt_lib0clear(&___nl__im__160);
#line 577
c_rt_lib0clear(&___nl__im__165);
#line 577
c_rt_lib0move(&___nl__im__175,___get_global_string_const(459));
#line 577
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__175));
#line 577
c_rt_lib0clear(&___nl__im__159);
#line 577
c_rt_lib0clear(&___nl__im__175);
#line 577
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__158));
#line 577
c_rt_lib0clear(&___nl__im__158);
#line 577
//clear ___nl__int__1;
#line 577
//clear ___nl__int__5;
#line 577
//clear ___nl__int__9;
#line 577
//clear ___nl__int__13;
#line 577
//clear ___nl__int__16;
#line 577
//clear ___nl__int__45;
#line 577
//clear ___nl__int__46;
#line 577
//clear ___nl__bool__47;
#line 577
//clear ___nl__int__62;
#line 577
//clear ___nl__int__63;
#line 577
//clear ___nl__bool__64;
#line 577
//clear ___nl__int__134;
#line 577
//clear ___nl__int__135;
#line 577
//clear ___nl__bool__136;
#line 577
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
#line 583
c_rt_lib0move(&___nl__im__3,___get_global_string_const(536));
#line 583
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__3));
#line 583
c_rt_lib0clear(&___nl__im__3);
#line 584
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 584
___nl__im_ptr__5 = &((*___ref___rec__0).fun_args0field);
#line 584
c_rt_lib0copy(___nl__im_ptr__5, ___nl__im__4);
#line 584
___nl__im_ptr__5 = NULL;
#line 584
c_rt_lib0clear(&___nl__im__4);
#line 585
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(417)));
#line 585
___nl__im_ptr__7 = &((*___ref___rec__0).ret_reg_type0field);
#line 585
c_rt_lib0copy(___nl__im_ptr__7, ___nl__im__6);
#line 585
___nl__im_ptr__7 = NULL;
#line 585
c_rt_lib0clear(&___nl__im__6);
#line 586
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___rec__0));
#line 587
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
#line 587
c_rt_lib0move(&___nl__im__11,___get_global_string_const(485));
#line 587
___nl__im_ptr__13 = &((*___ref___rec__0).mod_name0field);
#line 587
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 587
___nl__im_ptr__13 = NULL;
#line 587
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_name(___nl__im__10, ___nl__im__11, ___nl__im__12));
#line 587
c_rt_lib0clear(&___nl__im__10);
#line 587
c_rt_lib0clear(&___nl__im__11);
#line 587
c_rt_lib0clear(&___nl__im__12);
#line 587
c_rt_lib0move(&___nl__im__14,___get_global_string_const(486));
#line 587
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 587
c_rt_lib0clear(&___nl__im__9);
#line 587
c_rt_lib0clear(&___nl__im__14);
#line 587
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__8));
#line 587
c_rt_lib0clear(&___nl__im__8);
#line 589
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 589
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 589
c_rt_lib0clear(&___nl__im__16);
#line 589
label_32:
;
#line 589
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(216)));
#line 589
___nl__int__18 = c_rt_lib0array_len(___nl__im__19);
#line 589
c_rt_lib0clear(&___nl__im__19);
#line 589
___nl__bool__17 = ___nl__int__15 < ___nl__int__18;
#line 589
//clear ___nl__int__18;
#line 589
___nl__bool__17 = !___nl__bool__17;
#line 589
if(___nl__bool__17){ goto label_49;}
#line 590
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(216)));
#line 590
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__21, ___nl__int__15));
#line 590
c_rt_lib0clear(&___nl__im__21);
#line 590
c_rt_lib0delete(generator_c_priv0print_declaration(___ref___rec__0, ___nl__im__20));
#line 590
c_rt_lib0clear(&___nl__im__20);
#line 589
___nl__int__22 = 1;
#line 589
___nl__int__15 = ___nl__int__15 + ___nl__int__22;
#line 589
//clear ___nl__int__22;
#line 591
goto label_32;
#line 591
label_49:
;
#line 592
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(214)));
#line 592
___nl__int__25 = 0;
#line 592
___nl__int__26 = 1;
#line 592
___nl__int__27 = c_rt_lib0array_len(___nl__im__23);
#line 592
label_54:
;
#line 592
___nl__bool__28 = ___nl__int__25 >= ___nl__int__27;
#line 592
if(___nl__bool__28){ goto label_283;}
#line 592
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__23, ___nl__int__25));
#line 592
c_rt_lib0copy(&___nl__im__24, ___nl__im__29);
#line 593
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(227)));
#line 593
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(71));
#line 593
if(___nl__bool__31){ goto label_67;}
#line 595
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(223));
#line 595
if(___nl__bool__31){ goto label_70;}
#line 595
c_rt_lib0move(&___nl__im__32,___get_global_string_const(15));
#line 595
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__30));
#line 595
nl_die_arg(___nl__im__32);
#line 593
label_67:
;
#line 594
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 595
goto label_278;
#line 595
label_70:
;
#line 595
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__30, ___get_global_string_const(223)));
#line 595
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 596
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(228)));
#line 596
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_string_const(226));
#line 596
c_rt_lib0clear(&___nl__im__36);
#line 596
___nl__bool__35 = !___nl__bool__35;
#line 596
if(___nl__bool__35){ goto label_105;}
#line 597
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(228)));
#line 597
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(228)));
#line 597
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__40, ___get_global_string_const(226)));
#line 597
c_rt_lib0clear(&___nl__im__39);
#line 597
c_rt_lib0clear(&___nl__im__40);
#line 597
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(225)));
#line 597
c_rt_lib0clear(&___nl__im__38);
#line 598
___nl__bool__41 = nl0is_int(___nl__im__37);
#line 598
if(___nl__bool__41){ goto label_88;}
#line 598
___nl__bool__41 = nl0is_string(___nl__im__37);
#line 598
label_88:
;
#line 598
___nl__bool__41 = !___nl__bool__41;
#line 598
if(___nl__bool__41){ goto label_102;}
#line 599
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 600
c_rt_lib0clear(&___nl__im__30);
#line 600
//clear ___nl__bool__31;
#line 600
c_rt_lib0clear(&___nl__im__32);
#line 600
c_rt_lib0clear(&___nl__im__33);
#line 600
c_rt_lib0clear(&___nl__im__34);
#line 600
//clear ___nl__bool__35;
#line 600
c_rt_lib0clear(&___nl__im__37);
#line 600
//clear ___nl__bool__41;
#line 600
goto label_280;
#line 601
goto label_102;
#line 601
label_102:
;
#line 601
//clear ___nl__bool__41;
#line 602
goto label_105;
#line 602
label_105:
;
#line 602
//clear ___nl__bool__35;
#line 602
c_rt_lib0clear(&___nl__im__37);
#line 603
___nl__int__42 = c_rt_lib0array_len(___nl__im__33);
#line 604
___nl__bool__43 = true;
#line 605
___nl__int__45 = 0;
#line 605
___nl__int__46 = 1;
#line 605
___nl__int__47 = c_rt_lib0array_len(___nl__im__33);
#line 605
label_113:
;
#line 605
___nl__bool__48 = ___nl__int__45 >= ___nl__int__47;
#line 605
if(___nl__bool__48){ goto label_131;}
#line 605
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__33, ___nl__int__45));
#line 605
c_rt_lib0copy(&___nl__im__44, ___nl__im__49);
#line 606
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(206)));
#line 606
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_string_const(131));
#line 606
c_rt_lib0clear(&___nl__im__51);
#line 606
___nl__bool__50 = !___nl__bool__50;
#line 606
___nl__bool__50 = !___nl__bool__50;
#line 606
if(___nl__bool__50){ goto label_126;}
#line 606
___nl__bool__43 = false;
#line 606
goto label_126;
#line 606
label_126:
;
#line 606
//clear ___nl__bool__50;
#line 606
c_rt_lib0clear(&___nl__im__44);
#line 607
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 607
goto label_113;
#line 607
label_131:
;
#line 608
___nl__int__53 = 0;
#line 608
___nl__bool__52 = ___nl__int__42 == ___nl__int__53;
#line 608
//clear ___nl__int__53;
#line 608
if(___nl__bool__52){ goto label_138;}
#line 608
___nl__bool__52 = ___nl__bool__43;
#line 608
___nl__bool__52 = !___nl__bool__52;
#line 608
label_138:
;
#line 608
___nl__bool__52 = !___nl__bool__52;
#line 608
if(___nl__bool__52){ goto label_158;}
#line 609
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 610
c_rt_lib0clear(&___nl__im__30);
#line 610
//clear ___nl__bool__31;
#line 610
c_rt_lib0clear(&___nl__im__32);
#line 610
c_rt_lib0clear(&___nl__im__33);
#line 610
c_rt_lib0clear(&___nl__im__34);
#line 610
//clear ___nl__int__42;
#line 610
//clear ___nl__bool__43;
#line 610
c_rt_lib0clear(&___nl__im__44);
#line 610
//clear ___nl__int__45;
#line 610
//clear ___nl__int__46;
#line 610
//clear ___nl__int__47;
#line 610
//clear ___nl__bool__48;
#line 610
c_rt_lib0clear(&___nl__im__49);
#line 610
//clear ___nl__bool__52;
#line 610
goto label_280;
#line 611
goto label_262;
#line 611
label_158:
;
#line 612
___nl__rec_ptr__55 = &((*___ref___rec__0).const0field);
#line 612
___nl__int_ptr__56 = &(___nl__rec_ptr__55->dynamic_nr0field);
#line 612
___nl__int__54 = (*___nl__int_ptr__56);
#line 612
___nl__int_ptr__56 = NULL;
#line 612
___nl__rec_ptr__55 = NULL;
#line 613
c_rt_lib0move(&___nl__im__59,___get_global_string_const(537));
#line 613
c_rt_lib0move(&___nl__string__60, c_rt_lib0int_to_string(___nl__int__54));
#line 613
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__string__60));
#line 613
c_rt_lib0clear(&___nl__im__59);
#line 613
c_rt_lib0clear(&___nl__string__60);
#line 613
c_rt_lib0move(&___nl__im__61,___get_global_string_const(538));
#line 613
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__61));
#line 613
c_rt_lib0clear(&___nl__im__58);
#line 613
c_rt_lib0clear(&___nl__im__61);
#line 613
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__57));
#line 613
c_rt_lib0clear(&___nl__im__57);
#line 614
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__24, ___nl__im__2));
#line 615
___nl__int__63 = 0;
#line 615
___nl__int__64 = 1;
#line 615
___nl__int__65 = c_rt_lib0array_len(___nl__im__33);
#line 615
label_179:
;
#line 615
___nl__bool__66 = ___nl__int__63 >= ___nl__int__65;
#line 615
if(___nl__bool__66){ goto label_213;}
#line 615
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__33, ___nl__int__63));
#line 615
c_rt_lib0copy(&___nl__im__62, ___nl__im__67);
#line 616
c_rt_lib0move(&___nl__im__70,___get_global_string_const(455));
#line 616
c_rt_lib0move(&___nl__im__74,___get_global_string_const(539));
#line 616
c_rt_lib0move(&___nl__string__75, c_rt_lib0int_to_string(___nl__int__54));
#line 616
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__string__75));
#line 616
c_rt_lib0clear(&___nl__im__74);
#line 616
c_rt_lib0clear(&___nl__string__75);
#line 616
c_rt_lib0move(&___nl__im__76,___get_global_string_const(317));
#line 616
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__76));
#line 616
c_rt_lib0clear(&___nl__im__73);
#line 616
c_rt_lib0clear(&___nl__im__76);
#line 617
c_rt_lib0move(&___nl__im__77, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__62));
#line 617
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(2, ___nl__im__72, ___nl__im__77));
#line 617
c_rt_lib0clear(&___nl__im__72);
#line 617
c_rt_lib0clear(&___nl__im__77);
#line 617
c_rt_lib0move(&___nl__im__69, generator_c_priv0get_fun_lib(___nl__im__70, ___nl__im__71));
#line 617
c_rt_lib0clear(&___nl__im__70);
#line 617
c_rt_lib0clear(&___nl__im__71);
#line 617
c_rt_lib0move(&___nl__im__78,___get_global_string_const(442));
#line 617
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__78));
#line 617
c_rt_lib0clear(&___nl__im__69);
#line 617
c_rt_lib0clear(&___nl__im__78);
#line 617
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__68));
#line 617
c_rt_lib0clear(&___nl__im__68);
#line 618
___nl__int__79 = 1;
#line 618
___nl__int__54 = ___nl__int__54 + ___nl__int__79;
#line 618
//clear ___nl__int__79;
#line 618
c_rt_lib0clear(&___nl__im__62);
#line 619
___nl__int__63 = ___nl__int__63 + ___nl__int__64;
#line 619
goto label_179;
#line 619
label_213:
;
#line 620
c_rt_lib0move(&___nl__im__80,___get_global_string_const(307));
#line 620
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__80));
#line 620
c_rt_lib0clear(&___nl__im__80);
#line 621
___nl__int__54 = ___nl__int__54 - ___nl__int__42;
#line 622
___nl__int__82 = 0;
#line 622
___nl__int__83 = 1;
#line 622
___nl__int__84 = c_rt_lib0array_len(___nl__im__33);
#line 622
label_221:
;
#line 622
___nl__bool__85 = ___nl__int__82 >= ___nl__int__84;
#line 622
if(___nl__bool__85){ goto label_255;}
#line 622
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_get(___nl__im__33, ___nl__int__82));
#line 622
c_rt_lib0copy(&___nl__im__81, ___nl__im__86);
#line 623
c_rt_lib0move(&___nl__im__89,___get_global_string_const(455));
#line 623
c_rt_lib0move(&___nl__im__91, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__81));
#line 624
c_rt_lib0move(&___nl__im__94,___get_global_string_const(540));
#line 624
c_rt_lib0move(&___nl__string__95, c_rt_lib0int_to_string(___nl__int__54));
#line 624
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__string__95));
#line 624
c_rt_lib0clear(&___nl__im__94);
#line 624
c_rt_lib0clear(&___nl__string__95);
#line 624
c_rt_lib0move(&___nl__im__96,___get_global_string_const(317));
#line 624
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__96));
#line 624
c_rt_lib0clear(&___nl__im__93);
#line 624
c_rt_lib0clear(&___nl__im__96);
#line 624
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(2, ___nl__im__91, ___nl__im__92));
#line 624
c_rt_lib0clear(&___nl__im__91);
#line 624
c_rt_lib0clear(&___nl__im__92);
#line 624
c_rt_lib0move(&___nl__im__88, generator_c_priv0get_fun_lib(___nl__im__89, ___nl__im__90));
#line 624
c_rt_lib0clear(&___nl__im__89);
#line 624
c_rt_lib0clear(&___nl__im__90);
#line 624
c_rt_lib0move(&___nl__im__97,___get_global_string_const(442));
#line 624
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__97));
#line 624
c_rt_lib0clear(&___nl__im__88);
#line 624
c_rt_lib0clear(&___nl__im__97);
#line 624
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__87));
#line 624
c_rt_lib0clear(&___nl__im__87);
#line 625
___nl__int__98 = 1;
#line 625
___nl__int__54 = ___nl__int__54 + ___nl__int__98;
#line 625
//clear ___nl__int__98;
#line 625
c_rt_lib0clear(&___nl__im__81);
#line 626
___nl__int__82 = ___nl__int__82 + ___nl__int__83;
#line 626
goto label_221;
#line 626
label_255:
;
#line 627
___nl__rec_ptr__99 = &((*___ref___rec__0).const0field);
#line 627
___nl__int_ptr__100 = &(___nl__rec_ptr__99->dynamic_nr0field);
#line 627
(*___nl__int_ptr__100) = ___nl__int__54;
#line 627
___nl__int_ptr__100 = NULL;
#line 627
___nl__rec_ptr__99 = NULL;
#line 628
goto label_262;
#line 628
label_262:
;
#line 628
//clear ___nl__bool__52;
#line 628
//clear ___nl__int__54;
#line 628
c_rt_lib0clear(&___nl__im__62);
#line 628
//clear ___nl__int__63;
#line 628
//clear ___nl__int__64;
#line 628
//clear ___nl__int__65;
#line 628
//clear ___nl__bool__66;
#line 628
c_rt_lib0clear(&___nl__im__67);
#line 628
c_rt_lib0clear(&___nl__im__81);
#line 628
//clear ___nl__int__82;
#line 628
//clear ___nl__int__83;
#line 628
//clear ___nl__int__84;
#line 628
//clear ___nl__bool__85;
#line 628
c_rt_lib0clear(&___nl__im__86);
#line 629
goto label_278;
#line 629
label_278:
;
#line 629
c_rt_lib0clear(&___nl__im__24);
#line 629
label_280:
;
#line 630
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 630
goto label_54;
#line 630
label_283:
;
#line 631
___nl__im_ptr__103 = &((*___ref___rec__0).ret_reg_type0field);
#line 631
c_rt_lib0copy(&___nl__im__102, (*___nl__im_ptr__103));
#line 631
___nl__im_ptr__103 = NULL;
#line 631
c_rt_lib0move(&___nl__im__101, generator_c_priv0get_empty_value(___nl__im__102));
#line 631
c_rt_lib0clear(&___nl__im__102);
#line 632
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(468)));
#line 632
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__105, ___get_global_string_const(8));
#line 632
c_rt_lib0clear(&___nl__im__105);
#line 632
___nl__bool__104 = !___nl__bool__104;
#line 632
___nl__bool__104 = !___nl__bool__104;
#line 632
if(___nl__bool__104){ goto label_305;}
#line 632
c_rt_lib0move(&___nl__im__108,___get_global_string_const(510));
#line 632
c_rt_lib0move(&___nl__im__107, c_rt_lib0concat_new(___nl__im__108, ___nl__im__101));
#line 632
c_rt_lib0clear(&___nl__im__108);
#line 632
c_rt_lib0move(&___nl__im__109,___get_global_string_const(442));
#line 632
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 632
c_rt_lib0clear(&___nl__im__107);
#line 632
c_rt_lib0clear(&___nl__im__109);
#line 632
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__106));
#line 632
c_rt_lib0clear(&___nl__im__106);
#line 632
goto label_305;
#line 632
label_305:
;
#line 632
//clear ___nl__bool__104;
#line 633
c_rt_lib0move(&___nl__im__112, string0lf());
#line 633
c_rt_lib0move(&___nl__im__113,___get_global_string_const(307));
#line 633
c_rt_lib0move(&___nl__im__111, c_rt_lib0concat_new(___nl__im__112, ___nl__im__113));
#line 633
c_rt_lib0clear(&___nl__im__112);
#line 633
c_rt_lib0clear(&___nl__im__113);
#line 633
c_rt_lib0move(&___nl__im__114, string0lf());
#line 633
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__114));
#line 633
c_rt_lib0clear(&___nl__im__111);
#line 633
c_rt_lib0clear(&___nl__im__114);
#line 633
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__110));
#line 633
c_rt_lib0clear(&___nl__im__110);
#line 633
c_rt_lib0clear(&___nl__im__1);
#line 633
c_rt_lib0clear(&___nl__im__2);
#line 633
//clear ___nl__int__15;
#line 633
//clear ___nl__bool__17;
#line 633
c_rt_lib0clear(&___nl__im__23);
#line 633
c_rt_lib0clear(&___nl__im__24);
#line 633
//clear ___nl__int__25;
#line 633
//clear ___nl__int__26;
#line 633
//clear ___nl__int__27;
#line 633
//clear ___nl__bool__28;
#line 633
c_rt_lib0clear(&___nl__im__29);
#line 633
c_rt_lib0clear(&___nl__im__30);
#line 633
//clear ___nl__bool__31;
#line 633
c_rt_lib0clear(&___nl__im__32);
#line 633
c_rt_lib0clear(&___nl__im__33);
#line 633
c_rt_lib0clear(&___nl__im__34);
#line 633
//clear ___nl__int__42;
#line 633
//clear ___nl__bool__43;
#line 633
c_rt_lib0clear(&___nl__im__44);
#line 633
//clear ___nl__int__45;
#line 633
//clear ___nl__int__46;
#line 633
//clear ___nl__int__47;
#line 633
//clear ___nl__bool__48;
#line 633
c_rt_lib0clear(&___nl__im__49);
#line 633
c_rt_lib0clear(&___nl__im__101);
#line 633
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
#line 637
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 637
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 637
c_rt_lib0clear(&___nl__im__3);
#line 637
___nl__int__4 = 0;
#line 637
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 637
//clear ___nl__int__2;
#line 637
//clear ___nl__int__4;
#line 637
if(___nl__bool__1){ goto label_12;}
#line 637
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(417)));
#line 637
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(131));
#line 637
c_rt_lib0clear(&___nl__im__5);
#line 637
___nl__bool__1 = !___nl__bool__1;
#line 637
label_12:
;
#line 637
___nl__bool__1 = !___nl__bool__1;
#line 637
if(___nl__bool__1){ goto label_20;}
#line 637
___nl__bool__6 = false;
#line 637
c_rt_lib0clear(&___nl__im__0);
#line 637
//clear ___nl__bool__1;
#line 637
return ___nl__bool__6;
#line 637
goto label_20;
#line 637
label_20:
;
#line 637
//clear ___nl__bool__1;
#line 637
//clear ___nl__bool__6;
#line 638
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(227)));
#line 638
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(194));
#line 638
c_rt_lib0clear(&___nl__im__8);
#line 639
___nl__bool__9 = false;
#line 640
___nl__int__10 = 1;
#line 640
___nl__int__10 = -___nl__int__10;
#line 641
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 641
___nl__int__13 = 0;
#line 641
___nl__int__14 = 1;
#line 641
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 641
label_33:
;
#line 641
___nl__bool__16 = ___nl__int__13 >= ___nl__int__15;
#line 641
if(___nl__bool__16){ goto label_235;}
#line 641
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 641
c_rt_lib0copy(&___nl__im__12, ___nl__im__17);
#line 642
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(228)));
#line 643
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(234));
#line 643
___nl__bool__19 = !___nl__bool__19;
#line 643
if(___nl__bool__19){ goto label_82;}
#line 644
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(234)));
#line 645
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(270)));
#line 645
c_rt_lib0move(&___nl__im__23,___get_global_string_const(541));
#line 645
___nl__bool__21 = c_rt_lib0eq(___nl__im__22, ___nl__im__23);
#line 645
c_rt_lib0clear(&___nl__im__22);
#line 645
c_rt_lib0clear(&___nl__im__23);
#line 645
___nl__bool__21 = !___nl__bool__21;
#line 645
___nl__bool__21 = !___nl__bool__21;
#line 645
if(___nl__bool__21){ goto label_57;}
#line 645
c_rt_lib0clear(&___nl__im__18);
#line 645
//clear ___nl__bool__19;
#line 645
c_rt_lib0clear(&___nl__im__20);
#line 645
//clear ___nl__bool__21;
#line 645
goto label_232;
#line 645
goto label_57;
#line 645
label_57:
;
#line 645
//clear ___nl__bool__21;
#line 646
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(268)));
#line 646
c_rt_lib0move(&___nl__im__26,___get_global_string_const(407));
#line 646
___nl__bool__24 = c_rt_lib0eq(___nl__im__25, ___nl__im__26);
#line 646
c_rt_lib0clear(&___nl__im__25);
#line 646
c_rt_lib0clear(&___nl__im__26);
#line 646
___nl__bool__24 = !___nl__bool__24;
#line 646
___nl__bool__24 = !___nl__bool__24;
#line 646
if(___nl__bool__24){ goto label_73;}
#line 646
c_rt_lib0clear(&___nl__im__18);
#line 646
//clear ___nl__bool__19;
#line 646
c_rt_lib0clear(&___nl__im__20);
#line 646
//clear ___nl__bool__24;
#line 646
goto label_232;
#line 646
goto label_73;
#line 646
label_73:
;
#line 646
//clear ___nl__bool__24;
#line 647
___nl__bool__9 = true;
#line 648
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(224)));
#line 648
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(219)));
#line 648
___nl__int__10 = getIntFromImm(___nl__im__28);
#line 648
c_rt_lib0clear(&___nl__im__27);
#line 648
c_rt_lib0clear(&___nl__im__28);
#line 649
goto label_226;
#line 649
label_82:
;
#line 649
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(248));
#line 649
___nl__bool__19 = !___nl__bool__19;
#line 649
if(___nl__bool__19){ goto label_188;}
#line 650
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(248)));
#line 651
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__29, ___get_global_string_const(225));
#line 651
___nl__bool__30 = !___nl__bool__30;
#line 651
___nl__bool__30 = !___nl__bool__30;
#line 651
if(___nl__bool__30){ goto label_110;}
#line 651
___nl__bool__31 = false;
#line 651
c_rt_lib0clear(&___nl__im__0);
#line 651
//clear ___nl__bool__7;
#line 651
//clear ___nl__bool__9;
#line 651
//clear ___nl__int__10;
#line 651
c_rt_lib0clear(&___nl__im__11);
#line 651
c_rt_lib0clear(&___nl__im__12);
#line 651
//clear ___nl__int__13;
#line 651
//clear ___nl__int__14;
#line 651
//clear ___nl__int__15;
#line 651
//clear ___nl__bool__16;
#line 651
c_rt_lib0clear(&___nl__im__17);
#line 651
c_rt_lib0clear(&___nl__im__18);
#line 651
//clear ___nl__bool__19;
#line 651
c_rt_lib0clear(&___nl__im__20);
#line 651
c_rt_lib0clear(&___nl__im__29);
#line 651
//clear ___nl__bool__30;
#line 651
return ___nl__bool__31;
#line 651
goto label_110;
#line 651
label_110:
;
#line 651
//clear ___nl__bool__30;
#line 651
//clear ___nl__bool__31;
#line 652
___nl__bool__32 = ___nl__bool__7;
#line 652
___nl__bool__32 = !___nl__bool__32;
#line 652
if(___nl__bool__32){ goto label_135;}
#line 652
___nl__bool__33 = true;
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
//clear ___nl__bool__32;
#line 652
return ___nl__bool__33;
#line 652
goto label_135;
#line 652
label_135:
;
#line 652
//clear ___nl__bool__32;
#line 652
//clear ___nl__bool__33;
#line 653
___nl__bool__34 = ___nl__bool__9;
#line 653
___nl__bool__34 = !___nl__bool__34;
#line 653
___nl__bool__34 = !___nl__bool__34;
#line 653
if(___nl__bool__34){ goto label_161;}
#line 653
___nl__bool__35 = false;
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
//clear ___nl__bool__34;
#line 653
return ___nl__bool__35;
#line 653
goto label_161;
#line 653
label_161:
;
#line 653
//clear ___nl__bool__34;
#line 653
//clear ___nl__bool__35;
#line 654
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__29, ___get_global_string_const(225)));
#line 654
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(219)));
#line 654
___nl__int__37 = getIntFromImm(___nl__im__39);
#line 654
c_rt_lib0clear(&___nl__im__38);
#line 654
c_rt_lib0clear(&___nl__im__39);
#line 654
___nl__bool__36 = ___nl__int__37 == ___nl__int__10;
#line 654
//clear ___nl__int__37;
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
return ___nl__bool__36;
#line 655
goto label_226;
#line 655
label_188:
;
#line 655
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(250));
#line 655
___nl__bool__19 = !___nl__bool__19;
#line 655
if(___nl__bool__19){ goto label_193;}
#line 656
goto label_226;
#line 656
label_193:
;
#line 656
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(253));
#line 656
___nl__bool__19 = !___nl__bool__19;
#line 656
if(___nl__bool__19){ goto label_198;}
#line 657
goto label_226;
#line 657
label_198:
;
#line 658
___nl__bool__40 = ___nl__bool__9;
#line 658
___nl__bool__40 = !___nl__bool__40;
#line 658
if(___nl__bool__40){ goto label_222;}
#line 658
___nl__bool__41 = false;
#line 658
c_rt_lib0clear(&___nl__im__0);
#line 658
//clear ___nl__bool__7;
#line 658
//clear ___nl__bool__9;
#line 658
//clear ___nl__int__10;
#line 658
c_rt_lib0clear(&___nl__im__11);
#line 658
c_rt_lib0clear(&___nl__im__12);
#line 658
//clear ___nl__int__13;
#line 658
//clear ___nl__int__14;
#line 658
//clear ___nl__int__15;
#line 658
//clear ___nl__bool__16;
#line 658
c_rt_lib0clear(&___nl__im__17);
#line 658
c_rt_lib0clear(&___nl__im__18);
#line 658
//clear ___nl__bool__19;
#line 658
c_rt_lib0clear(&___nl__im__20);
#line 658
c_rt_lib0clear(&___nl__im__29);
#line 658
//clear ___nl__bool__36;
#line 658
//clear ___nl__bool__40;
#line 658
return ___nl__bool__41;
#line 658
goto label_222;
#line 658
label_222:
;
#line 658
//clear ___nl__bool__40;
#line 658
//clear ___nl__bool__41;
#line 659
goto label_226;
#line 659
label_226:
;
#line 659
//clear ___nl__bool__19;
#line 659
c_rt_lib0clear(&___nl__im__20);
#line 659
c_rt_lib0clear(&___nl__im__29);
#line 659
//clear ___nl__bool__36;
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
label_232:
;
#line 660
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 660
goto label_33;
#line 660
label_235:
;
#line 661
___nl__bool__42 = false;
#line 661
c_rt_lib0clear(&___nl__im__0);
#line 661
//clear ___nl__bool__7;
#line 661
//clear ___nl__bool__9;
#line 661
//clear ___nl__int__10;
#line 661
c_rt_lib0clear(&___nl__im__11);
#line 661
c_rt_lib0clear(&___nl__im__12);
#line 661
//clear ___nl__int__13;
#line 661
//clear ___nl__int__14;
#line 661
//clear ___nl__int__15;
#line 661
//clear ___nl__bool__16;
#line 661
c_rt_lib0clear(&___nl__im__17);
#line 661
c_rt_lib0clear(&___nl__im__18);
#line 661
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
#line 665
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 665
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 665
___nl__im_ptr__3 = NULL;
#line 665
___nl__int__1 = c_rt_lib0array_len(___nl__im__2);
#line 665
c_rt_lib0clear(&___nl__im__2);
#line 665
___nl__int__4 = 0;
#line 665
___nl__int__5 = 1;
#line 665
label_7:
;
#line 665
___nl__bool__6 = ___nl__int__4 >= ___nl__int__1;
#line 665
if(___nl__bool__6){ goto label_70;}
#line 666
___nl__im_ptr__10 = &((*___ref___rec__0).fun_args0field);
#line 666
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 666
___nl__im_ptr__10 = NULL;
#line 666
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__9, ___nl__int__4));
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(355)));
#line 666
c_rt_lib0clear(&___nl__im__8);
#line 666
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(225));
#line 666
if(___nl__bool__11){ goto label_24;}
#line 671
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(39));
#line 671
if(___nl__bool__11){ goto label_62;}
#line 671
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 671
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__7));
#line 671
nl_die_arg(___nl__im__12);
#line 666
label_24:
;
#line 667
___nl__im_ptr__18 = &((*___ref___rec__0).fun_args0field);
#line 667
c_rt_lib0copy(&___nl__im__17, (*___nl__im_ptr__18));
#line 667
___nl__im_ptr__18 = NULL;
#line 667
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__17, ___nl__int__4));
#line 667
c_rt_lib0clear(&___nl__im__17);
#line 667
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(471)));
#line 667
c_rt_lib0clear(&___nl__im__16);
#line 667
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(206)));
#line 667
c_rt_lib0clear(&___nl__im__15);
#line 667
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(131));
#line 667
c_rt_lib0clear(&___nl__im__14);
#line 667
___nl__bool__13 = !___nl__bool__13;
#line 667
if(___nl__bool__13){ goto label_59;}
#line 668
c_rt_lib0move(&___nl__im__20,___get_global_string_const(542));
#line 668
___nl__im_ptr__26 = &((*___ref___rec__0).fun_args0field);
#line 668
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 668
___nl__im_ptr__26 = NULL;
#line 668
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__25, ___nl__int__4));
#line 668
c_rt_lib0clear(&___nl__im__25);
#line 668
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(471)));
#line 668
c_rt_lib0clear(&___nl__im__24);
#line 668
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__23));
#line 668
c_rt_lib0clear(&___nl__im__23);
#line 668
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(1, ___nl__im__22));
#line 668
c_rt_lib0clear(&___nl__im__22);
#line 668
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_fun_lib(___nl__im__20, ___nl__im__21));
#line 668
c_rt_lib0clear(&___nl__im__20);
#line 668
c_rt_lib0clear(&___nl__im__21);
#line 668
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 668
c_rt_lib0clear(&___nl__im__19);
#line 669
c_rt_lib0move(&___nl__im__27,___get_global_string_const(442));
#line 669
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__27));
#line 669
c_rt_lib0clear(&___nl__im__27);
#line 670
goto label_59;
#line 670
label_59:
;
#line 670
//clear ___nl__bool__13;
#line 671
goto label_64;
#line 671
label_62:
;
#line 672
goto label_64;
#line 672
label_64:
;
#line 672
c_rt_lib0clear(&___nl__im__7);
#line 672
//clear ___nl__bool__11;
#line 672
c_rt_lib0clear(&___nl__im__12);
#line 673
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 673
goto label_7;
#line 673
label_70:
;
#line 673
//clear ___nl__int__1;
#line 673
//clear ___nl__int__4;
#line 673
//clear ___nl__int__5;
#line 673
//clear ___nl__bool__6;
#line 673
c_rt_lib0clear(&___nl__im__7);
#line 673
//clear ___nl__bool__11;
#line 673
c_rt_lib0clear(&___nl__im__12);
#line 673
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
#line 677
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_lib_fun(___nl__im__0));
#line 677
c_rt_lib0move(&___nl__im__4,___get_global_string_const(457));
#line 677
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 677
c_rt_lib0clear(&___nl__im__3);
#line 677
c_rt_lib0clear(&___nl__im__4);
#line 678
___nl__int__5 = 0;
#line 679
___nl__int__7 = 0;
#line 679
___nl__int__8 = 1;
#line 679
___nl__int__9 = c_rt_lib0array_len(___nl__im__1);
#line 679
label_9:
;
#line 679
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 679
if(___nl__bool__10){ goto label_33;}
#line 679
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__7));
#line 679
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 680
___nl__int__13 = 0;
#line 680
___nl__bool__12 = ___nl__int__13 == ___nl__int__5;
#line 680
//clear ___nl__int__13;
#line 680
___nl__bool__12 = !___nl__bool__12;
#line 680
___nl__bool__12 = !___nl__bool__12;
#line 680
if(___nl__bool__12){ goto label_24;}
#line 680
c_rt_lib0move(&___nl__im__14,___get_global_string_const(328));
#line 680
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 680
c_rt_lib0clear(&___nl__im__14);
#line 680
goto label_24;
#line 680
label_24:
;
#line 680
//clear ___nl__bool__12;
#line 681
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__6));
#line 682
___nl__int__15 = 1;
#line 682
___nl__int__5 = ___nl__int__5 + ___nl__int__15;
#line 682
//clear ___nl__int__15;
#line 682
c_rt_lib0clear(&___nl__im__6);
#line 683
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 683
goto label_9;
#line 683
label_33:
;
#line 684
c_rt_lib0move(&___nl__im__17,___get_global_string_const(322));
#line 684
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 684
c_rt_lib0clear(&___nl__im__17);
#line 684
c_rt_lib0clear(&___nl__im__0);
#line 684
c_rt_lib0clear(&___nl__im__1);
#line 684
c_rt_lib0clear(&___nl__im__2);
#line 684
//clear ___nl__int__5;
#line 684
c_rt_lib0clear(&___nl__im__6);
#line 684
//clear ___nl__int__7;
#line 684
//clear ___nl__int__8;
#line 684
//clear ___nl__int__9;
#line 684
//clear ___nl__bool__10;
#line 684
c_rt_lib0clear(&___nl__im__11);
#line 684
return ___nl__im__16;
return NULL;

}

ImmT  generator_c_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 688
c_rt_lib0move(&___nl__im__2,___get_global_string_const(20));
#line 688
c_rt_lib0move(&___nl__im__3,___get_global_string_const(543));
#line 688
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__0, ___nl__im__2, ___nl__im__3));
#line 688
c_rt_lib0clear(&___nl__im__2);
#line 688
c_rt_lib0clear(&___nl__im__3);
#line 688
c_rt_lib0clear(&___nl__im__0);
#line 688
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
#line 692
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 692
___nl__bool__3 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 692
c_rt_lib0clear(&___nl__im__4);
#line 692
___nl__bool__3 = !___nl__bool__3;
#line 692
if(___nl__bool__3){ goto label_9;}
#line 692
c_rt_lib0move(&___nl__im__5,___get_global_string_const(269));
#line 692
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 692
c_rt_lib0clear(&___nl__im__5);
#line 692
goto label_9;
#line 692
label_9:
;
#line 692
//clear ___nl__bool__3;
#line 693
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_module_name(___nl__im__0));
#line 693
c_rt_lib0move(&___nl__im__9,___get_global_string_const(20));
#line 693
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 693
c_rt_lib0clear(&___nl__im__8);
#line 693
c_rt_lib0clear(&___nl__im__9);
#line 693
c_rt_lib0move(&___nl__im__11,___get_global_string_const(20));
#line 693
c_rt_lib0move(&___nl__im__12,___get_global_string_const(543));
#line 693
c_rt_lib0move(&___nl__im__10, string0replace(___nl__im__1, ___nl__im__11, ___nl__im__12));
#line 693
c_rt_lib0clear(&___nl__im__11);
#line 693
c_rt_lib0clear(&___nl__im__12);
#line 693
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 693
c_rt_lib0clear(&___nl__im__7);
#line 693
c_rt_lib0clear(&___nl__im__10);
#line 693
c_rt_lib0clear(&___nl__im__0);
#line 693
c_rt_lib0clear(&___nl__im__1);
#line 693
c_rt_lib0clear(&___nl__im__2);
#line 693
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_lib_fun(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 697
c_rt_lib0move(&___nl__im__2,___get_global_string_const(271));
#line 697
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 697
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_fun_name(___nl__im__2, ___nl__im__0, ___nl__im__3));
#line 697
c_rt_lib0clear(&___nl__im__2);
#line 697
c_rt_lib0clear(&___nl__im__3);
#line 697
c_rt_lib0clear(&___nl__im__0);
#line 697
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
#line 701
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 701
___nl__bool__2 = !___nl__bool__2;
#line 701
if(___nl__bool__2){ goto label_41;}
#line 702
c_rt_lib0move(&___nl__im__6,___get_global_string_const(544));
#line 702
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_lib_fun(___nl__im__6));
#line 702
c_rt_lib0clear(&___nl__im__6);
#line 702
c_rt_lib0move(&___nl__im__7,___get_global_string_const(457));
#line 702
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 702
c_rt_lib0clear(&___nl__im__5);
#line 702
c_rt_lib0clear(&___nl__im__7);
#line 702
___nl__int__8 = hash0size(___nl__im__1);
#line 702
c_rt_lib0move(&___nl__string__9, c_rt_lib0int_to_string(___nl__int__8));
#line 702
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__string__9));
#line 702
c_rt_lib0clear(&___nl__im__4);
#line 702
//clear ___nl__int__8;
#line 702
c_rt_lib0clear(&___nl__string__9);
#line 702
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__3));
#line 702
c_rt_lib0clear(&___nl__im__3);
#line 703
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 703
label_19:
;
#line 703
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 703
if(___nl__bool__11){ goto label_36;}
#line 703
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 703
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 704
c_rt_lib0move(&___nl__im__14,___get_global_string_const(328));
#line 704
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__14));
#line 704
c_rt_lib0clear(&___nl__im__14);
#line 705
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__10));
#line 705
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__15));
#line 705
c_rt_lib0clear(&___nl__im__15);
#line 706
c_rt_lib0move(&___nl__im__16,___get_global_string_const(328));
#line 706
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__16));
#line 706
c_rt_lib0clear(&___nl__im__16);
#line 707
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__12));
#line 708
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 708
goto label_19;
#line 708
label_36:
;
#line 709
c_rt_lib0move(&___nl__im__17,___get_global_string_const(322));
#line 709
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__17));
#line 709
c_rt_lib0clear(&___nl__im__17);
#line 710
goto label_237;
#line 710
label_41:
;
#line 710
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 710
___nl__bool__2 = !___nl__bool__2;
#line 710
if(___nl__bool__2){ goto label_80;}
#line 711
c_rt_lib0move(&___nl__im__21,___get_global_string_const(545));
#line 711
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_lib_fun(___nl__im__21));
#line 711
c_rt_lib0clear(&___nl__im__21);
#line 711
c_rt_lib0move(&___nl__im__22,___get_global_string_const(457));
#line 711
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 711
c_rt_lib0clear(&___nl__im__20);
#line 711
c_rt_lib0clear(&___nl__im__22);
#line 711
___nl__int__23 = c_rt_lib0array_len(___nl__im__1);
#line 711
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__23));
#line 711
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__24));
#line 711
c_rt_lib0clear(&___nl__im__19);
#line 711
//clear ___nl__int__23;
#line 711
c_rt_lib0clear(&___nl__string__24);
#line 711
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__18));
#line 711
c_rt_lib0clear(&___nl__im__18);
#line 712
___nl__int__26 = 0;
#line 712
___nl__int__27 = 1;
#line 712
___nl__int__28 = c_rt_lib0array_len(___nl__im__1);
#line 712
label_63:
;
#line 712
___nl__bool__29 = ___nl__int__26 >= ___nl__int__28;
#line 712
if(___nl__bool__29){ goto label_75;}
#line 712
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__1, ___nl__int__26));
#line 712
c_rt_lib0copy(&___nl__im__25, ___nl__im__30);
#line 713
c_rt_lib0move(&___nl__im__31,___get_global_string_const(328));
#line 713
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__31));
#line 713
c_rt_lib0clear(&___nl__im__31);
#line 714
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__25));
#line 714
c_rt_lib0clear(&___nl__im__25);
#line 715
___nl__int__26 = ___nl__int__26 + ___nl__int__27;
#line 715
goto label_63;
#line 715
label_75:
;
#line 716
c_rt_lib0move(&___nl__im__32,___get_global_string_const(322));
#line 716
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__32));
#line 716
c_rt_lib0clear(&___nl__im__32);
#line 717
goto label_237;
#line 717
label_80:
;
#line 717
___nl__bool__2 = nl0is_variant(___nl__im__1);
#line 717
___nl__bool__2 = !___nl__bool__2;
#line 717
if(___nl__bool__2){ goto label_207;}
#line 719
c_rt_lib0move(&___nl__im__35, ptd0string());
#line 719
c_rt_lib0move(&___nl__im__36, ov0get_element(___nl__im__1));
#line 719
c_rt_lib0move(&___nl__im__34, ptd0ensure(___nl__im__35, ___nl__im__36));
#line 719
c_rt_lib0clear(&___nl__im__35);
#line 719
c_rt_lib0clear(&___nl__im__36);
#line 719
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__34));
#line 719
c_rt_lib0clear(&___nl__im__34);
#line 720
c_rt_lib0move(&___nl__im__38, ov0has_value(___nl__im__1));
#line 720
___nl__bool__37 = c_rt_lib0check_true_native(___nl__im__38);
#line 720
c_rt_lib0clear(&___nl__im__38);
#line 720
___nl__bool__37 = !___nl__bool__37;
#line 720
if(___nl__bool__37){ goto label_186;}
#line 721
c_rt_lib0move(&___nl__im__43,___get_global_string_const(546));
#line 721
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_lib_fun(___nl__im__43));
#line 721
c_rt_lib0clear(&___nl__im__43);
#line 721
c_rt_lib0move(&___nl__im__44,___get_global_string_const(457));
#line 721
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__44));
#line 721
c_rt_lib0clear(&___nl__im__42);
#line 721
c_rt_lib0clear(&___nl__im__44);
#line 721
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__33));
#line 721
c_rt_lib0clear(&___nl__im__41);
#line 721
c_rt_lib0move(&___nl__im__45,___get_global_string_const(328));
#line 721
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__45));
#line 721
c_rt_lib0clear(&___nl__im__40);
#line 721
c_rt_lib0clear(&___nl__im__45);
#line 721
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__39));
#line 721
c_rt_lib0clear(&___nl__im__39);
#line 723
c_rt_lib0move(&___nl__im__46, ov0get_value(___nl__im__1));
#line 724
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(39));
#line 724
___nl__bool__51 = !___nl__bool__47;
#line 724
if(___nl__bool__51){ goto label_116;}
#line 724
___nl__bool__47 = nl0is_hash(___nl__im__46);
#line 724
label_116:
;
#line 724
//clear ___nl__bool__51;
#line 724
___nl__bool__50 = !___nl__bool__47;
#line 724
if(___nl__bool__50){ goto label_125;}
#line 724
___nl__int__52 = hash0size(___nl__im__46);
#line 724
___nl__int__53 = 2;
#line 724
___nl__bool__47 = ___nl__int__52 == ___nl__int__53;
#line 724
//clear ___nl__int__52;
#line 724
//clear ___nl__int__53;
#line 724
label_125:
;
#line 724
//clear ___nl__bool__50;
#line 724
___nl__bool__49 = !___nl__bool__47;
#line 724
if(___nl__bool__49){ goto label_132;}
#line 724
c_rt_lib0move(&___nl__im__54,___get_global_string_const(168));
#line 724
___nl__bool__47 = hash0has_key(___nl__im__46, ___nl__im__54);
#line 724
c_rt_lib0clear(&___nl__im__54);
#line 724
label_132:
;
#line 724
//clear ___nl__bool__49;
#line 724
___nl__bool__48 = !___nl__bool__47;
#line 724
if(___nl__bool__48){ goto label_139;}
#line 724
c_rt_lib0move(&___nl__im__55,___get_global_string_const(152));
#line 724
___nl__bool__47 = hash0has_key(___nl__im__46, ___nl__im__55);
#line 724
c_rt_lib0clear(&___nl__im__55);
#line 724
label_139:
;
#line 724
//clear ___nl__bool__48;
#line 724
___nl__bool__47 = !___nl__bool__47;
#line 724
if(___nl__bool__47){ goto label_177;}
#line 725
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(168)));
#line 725
___nl__bool__56 = nl0is_string(___nl__im__58);
#line 725
c_rt_lib0clear(&___nl__im__58);
#line 725
___nl__bool__57 = !___nl__bool__56;
#line 725
if(___nl__bool__57){ goto label_151;}
#line 725
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(152)));
#line 725
___nl__bool__56 = nl0is_string(___nl__im__59);
#line 725
c_rt_lib0clear(&___nl__im__59);
#line 725
label_151:
;
#line 725
//clear ___nl__bool__57;
#line 725
___nl__bool__56 = !___nl__bool__56;
#line 725
if(___nl__bool__56){ goto label_171;}
#line 726
c_rt_lib0move(&___nl__im__62, ptd0string());
#line 726
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(152)));
#line 726
c_rt_lib0move(&___nl__im__61, ptd0ensure(___nl__im__62, ___nl__im__63));
#line 726
c_rt_lib0clear(&___nl__im__62);
#line 726
c_rt_lib0clear(&___nl__im__63);
#line 726
c_rt_lib0move(&___nl__im__65, ptd0string());
#line 726
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(168)));
#line 726
c_rt_lib0move(&___nl__im__64, ptd0ensure(___nl__im__65, ___nl__im__66));
#line 726
c_rt_lib0clear(&___nl__im__65);
#line 726
c_rt_lib0clear(&___nl__im__66);
#line 726
c_rt_lib0move(&___nl__im__60, generator_c_priv0get_func_pointer(___ref___rec__0, ___nl__im__61, ___nl__im__64));
#line 726
c_rt_lib0clear(&___nl__im__61);
#line 726
c_rt_lib0clear(&___nl__im__64);
#line 726
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__60));
#line 726
c_rt_lib0clear(&___nl__im__60);
#line 727
goto label_174;
#line 727
label_171:
;
#line 728
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__46));
#line 729
goto label_174;
#line 729
label_174:
;
#line 729
//clear ___nl__bool__56;
#line 730
goto label_180;
#line 730
label_177:
;
#line 731
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__46));
#line 732
goto label_180;
#line 732
label_180:
;
#line 732
//clear ___nl__bool__47;
#line 734
c_rt_lib0move(&___nl__im__67,___get_global_string_const(322));
#line 734
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__67));
#line 734
c_rt_lib0clear(&___nl__im__67);
#line 735
goto label_203;
#line 735
label_186:
;
#line 736
c_rt_lib0move(&___nl__im__72,___get_global_string_const(547));
#line 736
c_rt_lib0move(&___nl__im__71, generator_c_priv0get_lib_fun(___nl__im__72));
#line 736
c_rt_lib0clear(&___nl__im__72);
#line 736
c_rt_lib0move(&___nl__im__73,___get_global_string_const(457));
#line 736
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 736
c_rt_lib0clear(&___nl__im__71);
#line 736
c_rt_lib0clear(&___nl__im__73);
#line 736
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__33));
#line 736
c_rt_lib0clear(&___nl__im__70);
#line 736
c_rt_lib0move(&___nl__im__74,___get_global_string_const(322));
#line 736
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 736
c_rt_lib0clear(&___nl__im__69);
#line 736
c_rt_lib0clear(&___nl__im__74);
#line 736
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__68));
#line 736
c_rt_lib0clear(&___nl__im__68);
#line 737
goto label_203;
#line 737
label_203:
;
#line 737
//clear ___nl__bool__37;
#line 737
c_rt_lib0clear(&___nl__im__46);
#line 738
goto label_237;
#line 738
label_207:
;
#line 738
___nl__bool__2 = nl0is_string(___nl__im__1);
#line 738
___nl__bool__2 = !___nl__bool__2;
#line 738
if(___nl__bool__2){ goto label_219;}
#line 739
c_rt_lib0move(&___nl__im__77, ptd0string());
#line 739
c_rt_lib0move(&___nl__im__76, ptd0ensure(___nl__im__77, ___nl__im__1));
#line 739
c_rt_lib0clear(&___nl__im__77);
#line 739
c_rt_lib0move(&___nl__im__75, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__76));
#line 739
c_rt_lib0clear(&___nl__im__76);
#line 739
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__75));
#line 739
c_rt_lib0clear(&___nl__im__75);
#line 740
goto label_237;
#line 740
label_219:
;
#line 740
___nl__bool__2 = nl0is_int(___nl__im__1);
#line 740
___nl__bool__2 = !___nl__bool__2;
#line 740
if(___nl__bool__2){ goto label_233;}
#line 741
c_rt_lib0move(&___nl__im__80, ptd0int());
#line 741
c_rt_lib0move(&___nl__im__79, ptd0ensure(___nl__im__80, ___nl__im__1));
#line 741
c_rt_lib0clear(&___nl__im__80);
#line 741
___nl__int__81 = getIntFromImm(___nl__im__79);
#line 741
c_rt_lib0move(&___nl__im__78, generator_c_priv0get_const_int(___ref___rec__0, ___nl__int__81));
#line 741
c_rt_lib0clear(&___nl__im__79);
#line 741
//clear ___nl__int__81;
#line 741
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__78));
#line 741
c_rt_lib0clear(&___nl__im__78);
#line 742
goto label_237;
#line 742
label_233:
;
#line 743
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 743
nl_die_arg(___nl__im__82);
#line 744
goto label_237;
#line 744
label_237:
;
#line 744
//clear ___nl__bool__2;
#line 744
c_rt_lib0clear(&___nl__im__10);
#line 744
//clear ___nl__bool__11;
#line 744
c_rt_lib0clear(&___nl__im__12);
#line 744
c_rt_lib0clear(&___nl__im__13);
#line 744
c_rt_lib0clear(&___nl__im__25);
#line 744
//clear ___nl__int__26;
#line 744
//clear ___nl__int__27;
#line 744
//clear ___nl__int__28;
#line 744
//clear ___nl__bool__29;
#line 744
c_rt_lib0clear(&___nl__im__30);
#line 744
c_rt_lib0clear(&___nl__im__33);
#line 744
c_rt_lib0clear(&___nl__im__82);
#line 744
c_rt_lib0clear(&___nl__im__1);
#line 744
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
#line 749
___nl__bool__3 = true;
#line 749
___nl__hash_ptr__4 = &((*___ref___rec__0).additional_imports0field);
#line 749
___nl__bool_ptr__5 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(___nl__hash_ptr__4, ___nl__im__1, true);
#line 749
(*___nl__bool_ptr__5) = ___nl__bool__3;
#line 749
___nl__bool_ptr__5 = NULL;
#line 749
___nl__hash_ptr__4 = NULL;
#line 749
//clear ___nl__bool__3;
#line 750
c_rt_lib0move(&___nl__im__7,___get_global_string_const(548));
#line 751
___nl__im_ptr__12 = &((*___ref___rec__0).mod_name0field);
#line 751
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 751
___nl__im_ptr__12 = NULL;
#line 751
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_fun_name(___nl__im__1, ___nl__im__2, ___nl__im__11));
#line 751
c_rt_lib0clear(&___nl__im__11);
#line 751
c_rt_lib0move(&___nl__im__13,___get_global_string_const(549));
#line 751
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 751
c_rt_lib0clear(&___nl__im__10);
#line 751
c_rt_lib0clear(&___nl__im__13);
#line 752
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__1));
#line 753
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__2));
#line 753
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__14, ___nl__im__15));
#line 753
c_rt_lib0clear(&___nl__im__9);
#line 753
c_rt_lib0clear(&___nl__im__14);
#line 753
c_rt_lib0clear(&___nl__im__15);
#line 753
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__7, ___nl__im__8));
#line 753
c_rt_lib0clear(&___nl__im__7);
#line 753
c_rt_lib0clear(&___nl__im__8);
#line 753
c_rt_lib0clear(&___nl__im__1);
#line 753
c_rt_lib0clear(&___nl__im__2);
#line 753
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
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
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
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT * ___nl__im_ptr__48 = NULL;
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
bool  ___nl__bool__72 = false;
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
ImmT * ___nl__im_ptr__84 = NULL;
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
ImmT  ___nl__im__130 = NULL;
bool  ___nl__bool__131 = false;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
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
bool  ___nl__bool__152 = false;
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
ImmT  ___nl__im__178 = NULL;
INT  ___nl__int__179 = 0;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__string__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
bool  ___nl__bool__186 = false;
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
ImmT  ___nl__im__213 = NULL;
bool  ___nl__bool__214 = false;
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
ImmT  ___nl__im__229 = NULL;
bool  ___nl__bool__230 = false;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT * ___nl__im_ptr__239 = NULL;
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
ImmT  ___nl__im__252 = NULL;
bool  ___nl__bool__253 = false;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
bool  ___nl__bool__258 = false;
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
ImmT  ___nl__im__294 = NULL;
bool  ___nl__bool__295 = false;
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
ImmT  ___nl__im__331 = NULL;
bool  ___nl__bool__332 = false;
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
ImmT  ___nl__im__347 = NULL;
ImmT * ___nl__im_ptr__348 = NULL;
bool  ___nl__bool__349 = false;
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
ImmT  ___nl__im__374 = NULL;
bool  ___nl__bool__375 = false;
ImmT  ___nl__im__376 = NULL;
ImmT  ___nl__im__377 = NULL;
ImmT  ___nl__im__378 = NULL;
ImmT  ___nl__im__379 = NULL;
ImmT  ___nl__im__380 = NULL;
ImmT  ___nl__im__381 = NULL;
ImmT  ___nl__im__382 = NULL;
ImmT  ___nl__im__383 = NULL;
bool  ___nl__bool__384 = false;
ImmT  ___nl__im__385 = NULL;
ImmT  ___nl__im__386 = NULL;
ImmT  ___nl__im__387 = NULL;
ImmT  ___nl__im__388 = NULL;
ImmT  ___nl__im__389 = NULL;
ImmT  ___nl__im__390 = NULL;
ImmT  ___nl__im__391 = NULL;
ImmT  ___nl__im__392 = NULL;
ImmT  ___nl__im__393 = NULL;
ImmT * ___nl__im_ptr__394 = NULL;
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
ImmT  ___nl__im__415 = NULL;
bool  ___nl__bool__416 = false;
ImmT  ___nl__im__417 = NULL;
ImmT  ___nl__im__418 = NULL;
ImmT  ___nl__im__419 = NULL;
ImmT  ___nl__im__420 = NULL;
ImmT  ___nl__im__421 = NULL;
ImmT  ___nl__im__422 = NULL;
ImmT  ___nl__im__423 = NULL;
bool  ___nl__bool__424 = false;
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
ImmT  ___nl__im__458 = NULL;
bool  ___nl__bool__459 = false;
ImmT  ___nl__im__460 = NULL;
ImmT  ___nl__im__461 = NULL;
ImmT  ___nl__im__462 = NULL;
ImmT  ___nl__im__463 = NULL;
bool  ___nl__bool__464 = false;
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
ImmT  ___nl__im__486 = NULL;
bool  ___nl__bool__487 = false;
ImmT  ___nl__im__488 = NULL;
ImmT  ___nl__im__489 = NULL;
ImmT  ___nl__im__490 = NULL;
ImmT  ___nl__im__491 = NULL;
ImmT  ___nl__im__492 = NULL;
ImmT  ___nl__im__493 = NULL;
ImmT  ___nl__im__494 = NULL;
ImmT  ___nl__im__495 = NULL;
bool  ___nl__bool__496 = false;
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
ImmT  ___nl__im__515 = NULL;
ImmT * ___nl__im_ptr__516 = NULL;
ImmT  ___nl__im__517 = NULL;
ImmT  ___nl__im__518 = NULL;
ImmT  ___nl__im__519 = NULL;
ImmT  ___nl__im__520 = NULL;
INT  ___nl__int__521 = 0;
ImmT  ___nl__im__522 = NULL;
ImmT  ___nl__string__523 = NULL;
ImmT  ___nl__im__524 = NULL;
ImmT  ___nl__im__525 = NULL;
ImmT  ___nl__im__526 = NULL;
ImmT  ___nl__im__527 = NULL;
INT  ___nl__int__528 = 0;
ImmT  ___nl__im__529 = NULL;
ImmT  ___nl__im__530 = NULL;
ImmT  ___nl__im__531 = NULL;
ImmT  ___nl__im__532 = NULL;
ImmT  ___nl__im__533 = NULL;
ImmT  ___nl__im__534 = NULL;
ImmT  ___nl__im__535 = NULL;
ImmT  ___nl__string__536 = NULL;
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
ImmT  ___nl__im__549 = NULL;
INT  ___nl__int__550 = 0;
ImmT  ___nl__im__551 = NULL;
ImmT  ___nl__string__552 = NULL;
ImmT  ___nl__im__553 = NULL;
ImmT  ___nl__im__554 = NULL;
INT  ___nl__int__555 = 0;
ImmT  ___nl__im__556 = NULL;
ImmT  ___nl__im__557 = NULL;
ImmT  ___nl__im__558 = NULL;
ImmT  ___nl__string__559 = NULL;
ImmT  ___nl__im__560 = NULL;
ImmT  ___nl__im__561 = NULL;
ImmT  ___nl__im__562 = NULL;
bool  ___nl__bool__563 = false;
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
ImmT  ___nl__im__582 = NULL;
ImmT * ___nl__im_ptr__583 = NULL;
ImmT  ___nl__im__584 = NULL;
ImmT  ___nl__im__585 = NULL;
ImmT  ___nl__im__586 = NULL;
ImmT  ___nl__im__587 = NULL;
ImmT  ___nl__im__588 = NULL;
ImmT  ___nl__im__589 = NULL;
ImmT  ___nl__im__590 = NULL;
ImmT * ___nl__im_ptr__591 = NULL;
ImmT  ___nl__im__592 = NULL;
ImmT  ___nl__im__593 = NULL;
ImmT  ___nl__im__594 = NULL;
ImmT  ___nl__im__595 = NULL;
ImmT  ___nl__im__596 = NULL;
ImmT * ___nl__im_ptr__597 = NULL;
ImmT  ___nl__im__598 = NULL;
ImmT  ___nl__im__599 = NULL;
ImmT  ___nl__im__600 = NULL;
ImmT  ___nl__im__601 = NULL;
ImmT  ___nl__im__602 = NULL;
ImmT * ___nl__im_ptr__603 = NULL;
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
ImmT  ___nl__im__618 = NULL;
bool  ___nl__bool__619 = false;
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
ImmT  ___nl__im__641 = NULL;
bool  ___nl__bool__642 = false;
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
ImmT  ___nl__im__658 = NULL;
bool  ___nl__bool__659 = false;
ImmT  ___nl__im__660 = NULL;
ImmT  ___nl__im__661 = NULL;
ImmT  ___nl__im__662 = NULL;
#line 758
c_rt_lib0move(&___nl__im__5,___get_global_string_const(550));
#line 758
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(222)));
#line 758
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(551)));
#line 758
c_rt_lib0clear(&___nl__im__9);
#line 758
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(552)));
#line 758
c_rt_lib0clear(&___nl__im__8);
#line 758
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(154)));
#line 758
___nl__int__6 = getIntFromImm(___nl__im__10);
#line 758
c_rt_lib0clear(&___nl__im__7);
#line 758
c_rt_lib0clear(&___nl__im__10);
#line 758
c_rt_lib0move(&___nl__string__11, c_rt_lib0int_to_string(___nl__int__6));
#line 758
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__string__11));
#line 758
c_rt_lib0clear(&___nl__im__5);
#line 758
//clear ___nl__int__6;
#line 758
c_rt_lib0clear(&___nl__string__11);
#line 758
c_rt_lib0move(&___nl__im__12, string0lf());
#line 758
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__12));
#line 758
c_rt_lib0clear(&___nl__im__4);
#line 758
c_rt_lib0clear(&___nl__im__12);
#line 758
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__3));
#line 758
c_rt_lib0clear(&___nl__im__3);
#line 759
___nl__bool__13 = false;
#line 760
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(228)));
#line 760
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(231));
#line 760
if(___nl__bool__15){ goto label_100;}
#line 776
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(232));
#line 776
if(___nl__bool__15){ goto label_230;}
#line 791
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(233));
#line 791
if(___nl__bool__15){ goto label_341;}
#line 792
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(239));
#line 792
if(___nl__bool__15){ goto label_345;}
#line 795
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(234));
#line 795
if(___nl__bool__15){ goto label_359;}
#line 797
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(235));
#line 797
if(___nl__bool__15){ goto label_364;}
#line 808
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(236));
#line 808
if(___nl__bool__15){ goto label_425;}
#line 810
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(237));
#line 810
if(___nl__bool__15){ goto label_430;}
#line 820
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(238));
#line 820
if(___nl__bool__15){ goto label_512;}
#line 838
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(248));
#line 838
if(___nl__bool__15){ goto label_621;}
#line 846
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(249));
#line 846
if(___nl__bool__15){ goto label_655;}
#line 848
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(240));
#line 848
if(___nl__bool__15){ goto label_670;}
#line 850
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(226));
#line 850
if(___nl__bool__15){ goto label_679;}
#line 873
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(241));
#line 873
if(___nl__bool__15){ goto label_874;}
#line 876
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(242));
#line 876
if(___nl__bool__15){ goto label_896;}
#line 882
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(243));
#line 882
if(___nl__bool__15){ goto label_919;}
#line 896
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(244));
#line 896
if(___nl__bool__15){ goto label_1017;}
#line 909
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(245));
#line 909
if(___nl__bool__15){ goto label_1108;}
#line 924
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(246));
#line 924
if(___nl__bool__15){ goto label_1199;}
#line 930
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(247));
#line 930
if(___nl__bool__15){ goto label_1222;}
#line 957
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(250));
#line 957
if(___nl__bool__15){ goto label_1401;}
#line 960
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(251));
#line 960
if(___nl__bool__15){ goto label_1505;}
#line 965
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(252));
#line 965
if(___nl__bool__15){ goto label_1615;}
#line 967
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(253));
#line 967
if(___nl__bool__15){ goto label_1626;}
#line 985
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(254));
#line 985
if(___nl__bool__15){ goto label_1747;}
#line 986
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(255));
#line 986
if(___nl__bool__15){ goto label_1751;}
#line 988
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(256));
#line 988
if(___nl__bool__15){ goto label_1756;}
#line 990
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(257));
#line 990
if(___nl__bool__15){ goto label_1769;}
#line 992
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(258));
#line 992
if(___nl__bool__15){ goto label_1774;}
#line 998
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(259));
#line 998
if(___nl__bool__15){ goto label_1808;}
#line 1000
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(260));
#line 1000
if(___nl__bool__15){ goto label_1813;}
#line 1002
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(261));
#line 1002
if(___nl__bool__15){ goto label_1826;}
#line 1004
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(262));
#line 1004
if(___nl__bool__15){ goto label_1831;}
#line 1008
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(263));
#line 1008
if(___nl__bool__15){ goto label_1861;}
#line 1010
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(264));
#line 1010
if(___nl__bool__15){ goto label_1866;}
#line 1012
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(265));
#line 1012
if(___nl__bool__15){ goto label_1871;}
#line 1014
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(266));
#line 1014
if(___nl__bool__15){ goto label_1876;}
#line 1014
c_rt_lib0move(&___nl__im__16,___get_global_string_const(15));
#line 1014
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1014
nl_die_arg(___nl__im__16);
#line 760
label_100:
;
#line 760
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(231)));
#line 760
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 761
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 761
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 761
c_rt_lib0clear(&___nl__im__21);
#line 761
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(131));
#line 761
c_rt_lib0clear(&___nl__im__20);
#line 761
___nl__bool__19 = !___nl__bool__19;
#line 761
if(___nl__bool__19){ goto label_144;}
#line 762
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(73)));
#line 762
___nl__int__24 = c_rt_lib0array_len(___nl__im__25);
#line 762
c_rt_lib0clear(&___nl__im__25);
#line 762
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__24));
#line 762
c_rt_lib0move(&___nl__im__23, ptd0int_to_string(___nl__im__26));
#line 762
//clear ___nl__int__24;
#line 762
c_rt_lib0clear(&___nl__im__26);
#line 762
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(1, ___nl__im__23));
#line 762
c_rt_lib0clear(&___nl__im__23);
#line 763
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(73)));
#line 763
___nl__int__29 = 0;
#line 763
___nl__int__30 = 1;
#line 763
___nl__int__31 = c_rt_lib0array_len(___nl__im__27);
#line 763
label_123:
;
#line 763
___nl__bool__32 = ___nl__int__29 >= ___nl__int__31;
#line 763
if(___nl__bool__32){ goto label_134;}
#line 763
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__27, ___nl__int__29));
#line 763
c_rt_lib0copy(&___nl__im__28, ___nl__im__33);
#line 763
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__28));
#line 763
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__34));
#line 763
c_rt_lib0clear(&___nl__im__34);
#line 763
c_rt_lib0clear(&___nl__im__28);
#line 763
___nl__int__29 = ___nl__int__29 + ___nl__int__30;
#line 763
goto label_123;
#line 763
label_134:
;
#line 764
c_rt_lib0move(&___nl__im__36,___get_global_string_const(553));
#line 764
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_fun_lib(___nl__im__36, ___nl__im__22));
#line 764
c_rt_lib0clear(&___nl__im__36);
#line 765
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 765
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__38, ___nl__im__35));
#line 765
c_rt_lib0clear(&___nl__im__38);
#line 765
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__37));
#line 765
c_rt_lib0clear(&___nl__im__37);
#line 766
goto label_216;
#line 766
label_144:
;
#line 766
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 766
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(206)));
#line 766
c_rt_lib0clear(&___nl__im__40);
#line 766
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(127));
#line 766
c_rt_lib0clear(&___nl__im__39);
#line 766
___nl__bool__19 = !___nl__bool__19;
#line 766
if(___nl__bool__19){ goto label_212;}
#line 767
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 767
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(206)));
#line 767
c_rt_lib0clear(&___nl__im__44);
#line 767
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 767
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(206)));
#line 767
c_rt_lib0clear(&___nl__im__46);
#line 767
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__45, ___get_global_string_const(127)));
#line 767
c_rt_lib0clear(&___nl__im__43);
#line 767
c_rt_lib0clear(&___nl__im__45);
#line 767
___nl__im_ptr__48 = &((*___ref___rec__0).mod_name0field);
#line 767
c_rt_lib0copy(&___nl__im__47, (*___nl__im_ptr__48));
#line 767
___nl__im_ptr__48 = NULL;
#line 767
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 767
c_rt_lib0move(&___nl__im__49, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__50));
#line 767
c_rt_lib0clear(&___nl__im__50);
#line 767
c_rt_lib0move(&___nl__im__41, generator_c_priv0get_clean_fun_call(___nl__im__42, ___nl__im__47, ___nl__im__49, ___nl__im__2));
#line 767
c_rt_lib0clear(&___nl__im__42);
#line 767
c_rt_lib0clear(&___nl__im__47);
#line 767
c_rt_lib0clear(&___nl__im__49);
#line 769
c_rt_lib0move(&___nl__im__52, string0lf());
#line 769
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 769
c_rt_lib0clear(&___nl__im__52);
#line 769
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__51));
#line 769
c_rt_lib0clear(&___nl__im__51);
#line 770
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 770
c_rt_lib0move(&___nl__im__55, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__56));
#line 770
c_rt_lib0clear(&___nl__im__56);
#line 770
c_rt_lib0move(&___nl__im__57,___get_global_string_const(554));
#line 770
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__57));
#line 770
c_rt_lib0clear(&___nl__im__55);
#line 770
c_rt_lib0clear(&___nl__im__57);
#line 770
c_rt_lib0move(&___nl__im__58, string0lf());
#line 770
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__58));
#line 770
c_rt_lib0clear(&___nl__im__54);
#line 770
c_rt_lib0clear(&___nl__im__58);
#line 770
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__53));
#line 770
c_rt_lib0clear(&___nl__im__53);
#line 771
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 771
c_rt_lib0move(&___nl__im__61, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__62));
#line 771
c_rt_lib0clear(&___nl__im__62);
#line 771
c_rt_lib0move(&___nl__im__63,___get_global_string_const(555));
#line 771
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__63));
#line 771
c_rt_lib0clear(&___nl__im__61);
#line 771
c_rt_lib0clear(&___nl__im__63);
#line 771
c_rt_lib0move(&___nl__im__64, string0lf());
#line 771
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__64));
#line 771
c_rt_lib0clear(&___nl__im__60);
#line 771
c_rt_lib0clear(&___nl__im__64);
#line 771
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__59));
#line 771
c_rt_lib0clear(&___nl__im__59);
#line 772
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(224)));
#line 772
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__67));
#line 772
c_rt_lib0clear(&___nl__im__67);
#line 772
c_rt_lib0move(&___nl__im__68,___get_global_string_const(556));
#line 772
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__68));
#line 772
c_rt_lib0clear(&___nl__im__66);
#line 772
c_rt_lib0clear(&___nl__im__68);
#line 772
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__65));
#line 772
c_rt_lib0clear(&___nl__im__65);
#line 773
goto label_216;
#line 773
label_212:
;
#line 774
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_mk(0));
#line 774
nl_die_arg(___nl__im__69);
#line 775
goto label_216;
#line 775
label_216:
;
#line 775
//clear ___nl__bool__19;
#line 775
c_rt_lib0clear(&___nl__im__22);
#line 775
c_rt_lib0clear(&___nl__im__27);
#line 775
c_rt_lib0clear(&___nl__im__28);
#line 775
//clear ___nl__int__29;
#line 775
//clear ___nl__int__30;
#line 775
//clear ___nl__int__31;
#line 775
//clear ___nl__bool__32;
#line 775
c_rt_lib0clear(&___nl__im__33);
#line 775
c_rt_lib0clear(&___nl__im__35);
#line 775
c_rt_lib0clear(&___nl__im__41);
#line 775
c_rt_lib0clear(&___nl__im__69);
#line 776
goto label_1881;
#line 776
label_230:
;
#line 776
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(232)));
#line 776
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 777
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 777
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(206)));
#line 777
c_rt_lib0clear(&___nl__im__74);
#line 777
___nl__bool__72 = c_rt_lib0priv_is(___nl__im__73, ___get_global_string_const(131));
#line 777
c_rt_lib0clear(&___nl__im__73);
#line 777
___nl__bool__72 = !___nl__bool__72;
#line 777
if(___nl__bool__72){ goto label_242;}
#line 778
c_rt_lib0delete(generator_c_priv0print_hash_declaration(___ref___rec__0, ___nl__im__70));
#line 779
goto label_336;
#line 779
label_242:
;
#line 779
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 779
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_string_const(206)));
#line 779
c_rt_lib0clear(&___nl__im__76);
#line 779
___nl__bool__72 = c_rt_lib0priv_is(___nl__im__75, ___get_global_string_const(128));
#line 779
c_rt_lib0clear(&___nl__im__75);
#line 779
___nl__bool__72 = !___nl__bool__72;
#line 779
if(___nl__bool__72){ goto label_323;}
#line 780
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 780
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(206)));
#line 780
c_rt_lib0clear(&___nl__im__80);
#line 780
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 780
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(206)));
#line 780
c_rt_lib0clear(&___nl__im__82);
#line 780
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__81, ___get_global_string_const(128)));
#line 780
c_rt_lib0clear(&___nl__im__79);
#line 780
c_rt_lib0clear(&___nl__im__81);
#line 780
___nl__im_ptr__84 = &((*___ref___rec__0).mod_name0field);
#line 780
c_rt_lib0copy(&___nl__im__83, (*___nl__im_ptr__84));
#line 780
___nl__im_ptr__84 = NULL;
#line 780
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 780
c_rt_lib0move(&___nl__im__85, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__86));
#line 780
c_rt_lib0clear(&___nl__im__86);
#line 780
c_rt_lib0move(&___nl__im__77, generator_c_priv0get_clean_fun_call(___nl__im__78, ___nl__im__83, ___nl__im__85, ___nl__im__2));
#line 780
c_rt_lib0clear(&___nl__im__78);
#line 780
c_rt_lib0clear(&___nl__im__83);
#line 780
c_rt_lib0clear(&___nl__im__85);
#line 782
c_rt_lib0move(&___nl__im__88, string0lf());
#line 782
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__77, ___nl__im__88));
#line 782
c_rt_lib0clear(&___nl__im__88);
#line 782
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__87));
#line 782
c_rt_lib0clear(&___nl__im__87);
#line 783
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 783
c_rt_lib0move(&___nl__im__91, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__92));
#line 783
c_rt_lib0clear(&___nl__im__92);
#line 783
c_rt_lib0move(&___nl__im__93,___get_global_string_const(554));
#line 783
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__93));
#line 783
c_rt_lib0clear(&___nl__im__91);
#line 783
c_rt_lib0clear(&___nl__im__93);
#line 783
c_rt_lib0move(&___nl__im__94, string0lf());
#line 783
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__94));
#line 783
c_rt_lib0clear(&___nl__im__90);
#line 783
c_rt_lib0clear(&___nl__im__94);
#line 783
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__89));
#line 783
c_rt_lib0clear(&___nl__im__89);
#line 784
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 784
c_rt_lib0move(&___nl__im__97, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__98));
#line 784
c_rt_lib0clear(&___nl__im__98);
#line 784
c_rt_lib0move(&___nl__im__99,___get_global_string_const(555));
#line 784
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__99));
#line 784
c_rt_lib0clear(&___nl__im__97);
#line 784
c_rt_lib0clear(&___nl__im__99);
#line 784
c_rt_lib0move(&___nl__im__100, string0lf());
#line 784
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__100));
#line 784
c_rt_lib0clear(&___nl__im__96);
#line 784
c_rt_lib0clear(&___nl__im__100);
#line 784
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__95));
#line 784
c_rt_lib0clear(&___nl__im__95);
#line 785
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 785
c_rt_lib0move(&___nl__im__103, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__104));
#line 785
c_rt_lib0clear(&___nl__im__104);
#line 785
c_rt_lib0move(&___nl__im__105,___get_global_string_const(557));
#line 785
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__105));
#line 785
c_rt_lib0clear(&___nl__im__103);
#line 785
c_rt_lib0clear(&___nl__im__105);
#line 785
c_rt_lib0move(&___nl__im__106, string0lf());
#line 785
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__106));
#line 785
c_rt_lib0clear(&___nl__im__102);
#line 785
c_rt_lib0clear(&___nl__im__106);
#line 785
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__101));
#line 785
c_rt_lib0clear(&___nl__im__101);
#line 786
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 786
c_rt_lib0move(&___nl__im__108, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__109));
#line 786
c_rt_lib0clear(&___nl__im__109);
#line 786
c_rt_lib0move(&___nl__im__110,___get_global_string_const(558));
#line 786
c_rt_lib0move(&___nl__im__107, c_rt_lib0concat_new(___nl__im__108, ___nl__im__110));
#line 786
c_rt_lib0clear(&___nl__im__108);
#line 786
c_rt_lib0clear(&___nl__im__110);
#line 786
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__107));
#line 786
c_rt_lib0clear(&___nl__im__107);
#line 787
goto label_336;
#line 787
label_323:
;
#line 787
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(224)));
#line 787
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(206)));
#line 787
c_rt_lib0clear(&___nl__im__112);
#line 787
___nl__bool__72 = c_rt_lib0priv_is(___nl__im__111, ___get_global_string_const(559));
#line 787
c_rt_lib0clear(&___nl__im__111);
#line 787
___nl__bool__72 = !___nl__bool__72;
#line 787
if(___nl__bool__72){ goto label_332;}
#line 788
goto label_336;
#line 788
label_332:
;
#line 789
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_mk(0));
#line 789
nl_die_arg(___nl__im__113);
#line 790
goto label_336;
#line 790
label_336:
;
#line 790
//clear ___nl__bool__72;
#line 790
c_rt_lib0clear(&___nl__im__77);
#line 790
c_rt_lib0clear(&___nl__im__113);
#line 791
goto label_1881;
#line 791
label_341:
;
#line 791
c_rt_lib0move(&___nl__im__115, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(233)));
#line 791
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 792
goto label_1881;
#line 792
label_345:
;
#line 792
c_rt_lib0move(&___nl__im__117, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(239)));
#line 792
c_rt_lib0copy(&___nl__im__116, ___nl__im__117);
#line 793
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(152)));
#line 793
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(168)));
#line 793
c_rt_lib0move(&___nl__im__118, generator_c_priv0get_func_pointer(___ref___rec__0, ___nl__im__119, ___nl__im__120));
#line 793
c_rt_lib0clear(&___nl__im__119);
#line 793
c_rt_lib0clear(&___nl__im__120);
#line 794
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(224)));
#line 794
c_rt_lib0move(&___nl__im__121, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__122, ___nl__im__118));
#line 794
c_rt_lib0clear(&___nl__im__122);
#line 794
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__121));
#line 794
c_rt_lib0clear(&___nl__im__121);
#line 795
goto label_1881;
#line 795
label_359:
;
#line 795
c_rt_lib0move(&___nl__im__124, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(234)));
#line 795
c_rt_lib0copy(&___nl__im__123, ___nl__im__124);
#line 796
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__123));
#line 797
goto label_1881;
#line 797
label_364:
;
#line 797
c_rt_lib0move(&___nl__im__126, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(235)));
#line 797
c_rt_lib0copy(&___nl__im__125, ___nl__im__126);
#line 798
c_rt_lib0move(&___nl__im__128, generator_c_priv0get_unary_ops());
#line 798
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(560)));
#line 798
c_rt_lib0move(&___nl__im__127, hash0get_value(___nl__im__128, ___nl__im__129));
#line 798
c_rt_lib0clear(&___nl__im__128);
#line 798
c_rt_lib0clear(&___nl__im__129);
#line 800
c_rt_lib0move(&___nl__im__132,___get_global_string_const(366));
#line 800
___nl__bool__131 = c_rt_lib0eq(___nl__im__127, ___nl__im__132);
#line 800
c_rt_lib0clear(&___nl__im__132);
#line 800
___nl__bool__131 = !___nl__bool__131;
#line 800
if(___nl__bool__131){ goto label_385;}
#line 801
c_rt_lib0move(&___nl__im__133,___get_global_string_const(365));
#line 801
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(73)));
#line 801
c_rt_lib0move(&___nl__im__134, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__135));
#line 801
c_rt_lib0clear(&___nl__im__135);
#line 801
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__133, ___nl__im__134));
#line 801
c_rt_lib0clear(&___nl__im__133);
#line 801
c_rt_lib0clear(&___nl__im__134);
#line 802
goto label_417;
#line 802
label_385:
;
#line 802
c_rt_lib0move(&___nl__im__137,___get_global_string_const(368));
#line 802
___nl__bool__131 = c_rt_lib0eq(___nl__im__127, ___nl__im__137);
#line 802
c_rt_lib0clear(&___nl__im__137);
#line 802
___nl__bool__136 = !___nl__bool__131;
#line 802
if(___nl__bool__136){ goto label_396;}
#line 802
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(73)));
#line 802
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__139, ___get_global_string_const(206)));
#line 802
c_rt_lib0clear(&___nl__im__139);
#line 802
___nl__bool__131 = c_rt_lib0priv_is(___nl__im__138, ___get_global_string_const(405));
#line 802
c_rt_lib0clear(&___nl__im__138);
#line 802
label_396:
;
#line 802
//clear ___nl__bool__136;
#line 802
___nl__bool__131 = !___nl__bool__131;
#line 802
if(___nl__bool__131){ goto label_408;}
#line 803
c_rt_lib0move(&___nl__im__140,___get_global_string_const(367));
#line 803
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(73)));
#line 803
c_rt_lib0move(&___nl__im__141, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__142));
#line 803
c_rt_lib0clear(&___nl__im__142);
#line 803
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__140, ___nl__im__141));
#line 803
c_rt_lib0clear(&___nl__im__140);
#line 803
c_rt_lib0clear(&___nl__im__141);
#line 804
goto label_417;
#line 804
label_408:
;
#line 805
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(73)));
#line 805
c_rt_lib0move(&___nl__im__144, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__145));
#line 805
c_rt_lib0clear(&___nl__im__145);
#line 805
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_mk(1, ___nl__im__144));
#line 805
c_rt_lib0clear(&___nl__im__144);
#line 805
c_rt_lib0move(&___nl__im__130, generator_c_priv0get_fun_lib(___nl__im__127, ___nl__im__143));
#line 805
c_rt_lib0clear(&___nl__im__143);
#line 806
goto label_417;
#line 806
label_417:
;
#line 806
//clear ___nl__bool__131;
#line 807
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(224)));
#line 807
c_rt_lib0move(&___nl__im__146, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__147, ___nl__im__130));
#line 807
c_rt_lib0clear(&___nl__im__147);
#line 807
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__146));
#line 807
c_rt_lib0clear(&___nl__im__146);
#line 808
goto label_1881;
#line 808
label_425:
;
#line 808
c_rt_lib0move(&___nl__im__149, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(236)));
#line 808
c_rt_lib0copy(&___nl__im__148, ___nl__im__149);
#line 809
c_rt_lib0delete(generator_c_priv0print_bin_op(___ref___rec__0, ___nl__im__148));
#line 810
goto label_1881;
#line 810
label_430:
;
#line 810
c_rt_lib0move(&___nl__im__151, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(237)));
#line 810
c_rt_lib0copy(&___nl__im__150, ___nl__im__151);
#line 811
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(73)));
#line 811
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(206)));
#line 811
c_rt_lib0clear(&___nl__im__154);
#line 811
___nl__bool__152 = c_rt_lib0priv_is(___nl__im__153, ___get_global_string_const(131));
#line 811
c_rt_lib0clear(&___nl__im__153);
#line 811
___nl__bool__152 = !___nl__bool__152;
#line 811
if(___nl__bool__152){ goto label_459;}
#line 812
c_rt_lib0move(&___nl__im__156,___get_global_string_const(561));
#line 812
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(73)));
#line 812
c_rt_lib0move(&___nl__im__158, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__159));
#line 812
c_rt_lib0clear(&___nl__im__159);
#line 812
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(562)));
#line 812
c_rt_lib0move(&___nl__im__160, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__161));
#line 812
c_rt_lib0clear(&___nl__im__161);
#line 812
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_mk(2, ___nl__im__158, ___nl__im__160));
#line 812
c_rt_lib0clear(&___nl__im__158);
#line 812
c_rt_lib0clear(&___nl__im__160);
#line 812
c_rt_lib0move(&___nl__im__155, generator_c_priv0get_fun_lib(___nl__im__156, ___nl__im__157));
#line 812
c_rt_lib0clear(&___nl__im__156);
#line 812
c_rt_lib0clear(&___nl__im__157);
#line 813
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(224)));
#line 813
c_rt_lib0move(&___nl__im__162, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__163, ___nl__im__155));
#line 813
c_rt_lib0clear(&___nl__im__163);
#line 813
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__162));
#line 813
c_rt_lib0clear(&___nl__im__162);
#line 814
goto label_507;
#line 814
label_459:
;
#line 814
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(73)));
#line 814
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__165, ___get_global_string_const(206)));
#line 814
c_rt_lib0clear(&___nl__im__165);
#line 814
___nl__bool__152 = c_rt_lib0priv_is(___nl__im__164, ___get_global_string_const(563));
#line 814
c_rt_lib0clear(&___nl__im__164);
#line 814
___nl__bool__152 = !___nl__bool__152;
#line 814
if(___nl__bool__152){ goto label_503;}
#line 815
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(224)));
#line 815
c_rt_lib0move(&___nl__im__172, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__173));
#line 815
c_rt_lib0clear(&___nl__im__173);
#line 815
c_rt_lib0move(&___nl__im__174,___get_global_string_const(564));
#line 815
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__174));
#line 815
c_rt_lib0clear(&___nl__im__172);
#line 815
c_rt_lib0clear(&___nl__im__174);
#line 816
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(73)));
#line 816
c_rt_lib0move(&___nl__im__175, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__176));
#line 816
c_rt_lib0clear(&___nl__im__176);
#line 816
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__175));
#line 816
c_rt_lib0clear(&___nl__im__171);
#line 816
c_rt_lib0clear(&___nl__im__175);
#line 816
c_rt_lib0move(&___nl__im__177,___get_global_string_const(565));
#line 816
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_new(___nl__im__170, ___nl__im__177));
#line 816
c_rt_lib0clear(&___nl__im__170);
#line 816
c_rt_lib0clear(&___nl__im__177);
#line 816
c_rt_lib0move(&___nl__im__178,___get_global_string_const(566));
#line 816
c_rt_lib0move(&___nl__im__168, c_rt_lib0concat_new(___nl__im__169, ___nl__im__178));
#line 816
c_rt_lib0clear(&___nl__im__169);
#line 816
c_rt_lib0clear(&___nl__im__178);
#line 816
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(567)));
#line 816
___nl__int__179 = getIntFromImm(___nl__im__180);
#line 816
c_rt_lib0clear(&___nl__im__180);
#line 816
c_rt_lib0move(&___nl__string__181, c_rt_lib0int_to_string(___nl__int__179));
#line 816
c_rt_lib0move(&___nl__im__167, c_rt_lib0concat_new(___nl__im__168, ___nl__string__181));
#line 816
c_rt_lib0clear(&___nl__im__168);
#line 816
//clear ___nl__int__179;
#line 816
c_rt_lib0clear(&___nl__string__181);
#line 816
c_rt_lib0move(&___nl__im__182,___get_global_string_const(322));
#line 816
c_rt_lib0move(&___nl__im__166, c_rt_lib0concat_new(___nl__im__167, ___nl__im__182));
#line 816
c_rt_lib0clear(&___nl__im__167);
#line 816
c_rt_lib0clear(&___nl__im__182);
#line 816
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__166));
#line 816
c_rt_lib0clear(&___nl__im__166);
#line 817
goto label_507;
#line 817
label_503:
;
#line 818
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_mk(0));
#line 818
nl_die_arg(___nl__im__183);
#line 819
goto label_507;
#line 819
label_507:
;
#line 819
//clear ___nl__bool__152;
#line 819
c_rt_lib0clear(&___nl__im__155);
#line 819
c_rt_lib0clear(&___nl__im__183);
#line 820
goto label_1881;
#line 820
label_512:
;
#line 820
c_rt_lib0move(&___nl__im__185, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(238)));
#line 820
c_rt_lib0copy(&___nl__im__184, ___nl__im__185);
#line 821
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(73)));
#line 821
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_string_const(206)));
#line 821
c_rt_lib0clear(&___nl__im__188);
#line 821
___nl__bool__186 = c_rt_lib0priv_is(___nl__im__187, ___get_global_string_const(131));
#line 821
c_rt_lib0clear(&___nl__im__187);
#line 821
___nl__bool__186 = !___nl__bool__186;
#line 821
if(___nl__bool__186){ goto label_541;}
#line 822
c_rt_lib0move(&___nl__im__190,___get_global_string_const(568));
#line 823
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(73)));
#line 823
c_rt_lib0move(&___nl__im__192, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__193));
#line 823
c_rt_lib0clear(&___nl__im__193);
#line 823
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(562)));
#line 823
c_rt_lib0move(&___nl__im__194, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__195));
#line 823
c_rt_lib0clear(&___nl__im__195);
#line 823
c_rt_lib0move(&___nl__im__191, c_rt_lib0array_mk(2, ___nl__im__192, ___nl__im__194));
#line 823
c_rt_lib0clear(&___nl__im__192);
#line 823
c_rt_lib0clear(&___nl__im__194);
#line 823
c_rt_lib0move(&___nl__im__189, generator_c_priv0get_fun_lib(___nl__im__190, ___nl__im__191));
#line 823
c_rt_lib0clear(&___nl__im__190);
#line 823
c_rt_lib0clear(&___nl__im__191);
#line 824
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(224)));
#line 824
c_rt_lib0move(&___nl__im__196, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__197, ___nl__im__189));
#line 824
c_rt_lib0clear(&___nl__im__197);
#line 824
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__196));
#line 824
c_rt_lib0clear(&___nl__im__196);
#line 825
goto label_614;
#line 825
label_541:
;
#line 825
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(73)));
#line 825
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__199, ___get_global_string_const(206)));
#line 825
c_rt_lib0clear(&___nl__im__199);
#line 825
___nl__bool__186 = c_rt_lib0priv_is(___nl__im__198, ___get_global_string_const(563));
#line 825
c_rt_lib0clear(&___nl__im__198);
#line 825
___nl__bool__186 = !___nl__bool__186;
#line 825
if(___nl__bool__186){ goto label_610;}
#line 826
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(73)));
#line 826
c_rt_lib0move(&___nl__im__200, generator_c_priv0get_access_op(___nl__im__201));
#line 826
c_rt_lib0clear(&___nl__im__201);
#line 827
c_rt_lib0move(&___nl__im__207,___get_global_string_const(569));
#line 827
c_rt_lib0move(&___nl__im__209, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(73)));
#line 827
c_rt_lib0move(&___nl__im__208, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__209));
#line 827
c_rt_lib0clear(&___nl__im__209);
#line 827
c_rt_lib0move(&___nl__im__206, c_rt_lib0concat_new(___nl__im__207, ___nl__im__208));
#line 827
c_rt_lib0clear(&___nl__im__207);
#line 827
c_rt_lib0clear(&___nl__im__208);
#line 827
c_rt_lib0move(&___nl__im__205, c_rt_lib0concat_new(___nl__im__206, ___nl__im__200));
#line 827
c_rt_lib0clear(&___nl__im__206);
#line 827
c_rt_lib0move(&___nl__im__210,___get_global_string_const(570));
#line 827
c_rt_lib0move(&___nl__im__204, c_rt_lib0concat_new(___nl__im__205, ___nl__im__210));
#line 827
c_rt_lib0clear(&___nl__im__205);
#line 827
c_rt_lib0clear(&___nl__im__210);
#line 827
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(562)));
#line 827
c_rt_lib0move(&___nl__im__211, generator_c_priv0get_case_name(___nl__im__212));
#line 827
c_rt_lib0clear(&___nl__im__212);
#line 827
c_rt_lib0move(&___nl__im__203, c_rt_lib0concat_new(___nl__im__204, ___nl__im__211));
#line 827
c_rt_lib0clear(&___nl__im__204);
#line 827
c_rt_lib0clear(&___nl__im__211);
#line 827
c_rt_lib0move(&___nl__im__213,___get_global_string_const(322));
#line 827
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__213));
#line 827
c_rt_lib0clear(&___nl__im__203);
#line 827
c_rt_lib0clear(&___nl__im__213);
#line 828
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(224)));
#line 828
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__216, ___get_global_string_const(206)));
#line 828
c_rt_lib0clear(&___nl__im__216);
#line 828
___nl__bool__214 = c_rt_lib0priv_is(___nl__im__215, ___get_global_string_const(131));
#line 828
c_rt_lib0clear(&___nl__im__215);
#line 828
___nl__bool__214 = !___nl__bool__214;
#line 828
if(___nl__bool__214){ goto label_593;}
#line 829
c_rt_lib0move(&___nl__im__218, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(224)));
#line 829
c_rt_lib0move(&___nl__im__217, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__218));
#line 829
c_rt_lib0clear(&___nl__im__218);
#line 830
c_rt_lib0move(&___nl__im__220,___get_global_string_const(455));
#line 830
c_rt_lib0move(&___nl__im__221, c_rt_lib0array_mk(2, ___nl__im__217, ___nl__im__202));
#line 830
c_rt_lib0move(&___nl__im__219, generator_c_priv0get_fun_lib(___nl__im__220, ___nl__im__221));
#line 830
c_rt_lib0clear(&___nl__im__220);
#line 830
c_rt_lib0clear(&___nl__im__221);
#line 830
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__219));
#line 830
c_rt_lib0clear(&___nl__im__219);
#line 831
goto label_605;
#line 831
label_593:
;
#line 832
c_rt_lib0move(&___nl__im__223, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_string_const(224)));
#line 832
c_rt_lib0move(&___nl__im__222, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__223));
#line 832
c_rt_lib0clear(&___nl__im__223);
#line 833
c_rt_lib0move(&___nl__im__226,___get_global_string_const(504));
#line 833
c_rt_lib0move(&___nl__im__225, c_rt_lib0concat_new(___nl__im__222, ___nl__im__226));
#line 833
c_rt_lib0clear(&___nl__im__226);
#line 833
c_rt_lib0move(&___nl__im__224, c_rt_lib0concat_new(___nl__im__225, ___nl__im__202));
#line 833
c_rt_lib0clear(&___nl__im__225);
#line 833
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__224));
#line 833
c_rt_lib0clear(&___nl__im__224);
#line 834
goto label_605;
#line 834
label_605:
;
#line 834
//clear ___nl__bool__214;
#line 834
c_rt_lib0clear(&___nl__im__217);
#line 834
c_rt_lib0clear(&___nl__im__222);
#line 835
goto label_614;
#line 835
label_610:
;
#line 836
c_rt_lib0move(&___nl__im__227, c_rt_lib0array_mk(0));
#line 836
nl_die_arg(___nl__im__227);
#line 837
goto label_614;
#line 837
label_614:
;
#line 837
//clear ___nl__bool__186;
#line 837
c_rt_lib0clear(&___nl__im__189);
#line 837
c_rt_lib0clear(&___nl__im__200);
#line 837
c_rt_lib0clear(&___nl__im__202);
#line 837
c_rt_lib0clear(&___nl__im__227);
#line 838
goto label_1881;
#line 838
label_621:
;
#line 838
c_rt_lib0move(&___nl__im__229, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(248)));
#line 838
c_rt_lib0copy(&___nl__im__228, ___nl__im__229);
#line 839
___nl__bool__230 = c_rt_lib0priv_is(___nl__im__228, ___get_global_string_const(225));
#line 839
if(___nl__bool__230){ goto label_631;}
#line 842
___nl__bool__230 = c_rt_lib0priv_is(___nl__im__228, ___get_global_string_const(352));
#line 842
if(___nl__bool__230){ goto label_641;}
#line 842
c_rt_lib0move(&___nl__im__231,___get_global_string_const(15));
#line 842
c_rt_lib0move(&___nl__im__231, c_rt_lib0array_mk(2, ___nl__im__231, ___nl__im__228));
#line 842
nl_die_arg(___nl__im__231);
#line 839
label_631:
;
#line 839
c_rt_lib0move(&___nl__im__233, c_rt_lib0priv_as(___nl__im__228, ___get_global_string_const(225)));
#line 839
c_rt_lib0copy(&___nl__im__232, ___nl__im__233);
#line 840
c_rt_lib0move(&___nl__im__234,___get_global_string_const(510));
#line 840
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__234));
#line 840
c_rt_lib0clear(&___nl__im__234);
#line 841
c_rt_lib0move(&___nl__im__235, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__232));
#line 841
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__235));
#line 841
c_rt_lib0clear(&___nl__im__235);
#line 842
goto label_653;
#line 842
label_641:
;
#line 843
c_rt_lib0move(&___nl__im__236,___get_global_string_const(510));
#line 843
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__236));
#line 843
c_rt_lib0clear(&___nl__im__236);
#line 844
___nl__im_ptr__239 = &((*___ref___rec__0).ret_reg_type0field);
#line 844
c_rt_lib0copy(&___nl__im__238, (*___nl__im_ptr__239));
#line 844
___nl__im_ptr__239 = NULL;
#line 844
c_rt_lib0move(&___nl__im__237, generator_c_priv0get_empty_value(___nl__im__238));
#line 844
c_rt_lib0clear(&___nl__im__238);
#line 844
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__237));
#line 844
c_rt_lib0clear(&___nl__im__237);
#line 845
goto label_653;
#line 845
label_653:
;
#line 846
goto label_1881;
#line 846
label_655:
;
#line 846
c_rt_lib0move(&___nl__im__241, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(249)));
#line 846
c_rt_lib0copy(&___nl__im__240, ___nl__im__241);
#line 847
c_rt_lib0move(&___nl__im__244,___get_global_string_const(571));
#line 847
c_rt_lib0move(&___nl__im__245, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__240));
#line 847
c_rt_lib0move(&___nl__im__243, c_rt_lib0concat_new(___nl__im__244, ___nl__im__245));
#line 847
c_rt_lib0clear(&___nl__im__244);
#line 847
c_rt_lib0clear(&___nl__im__245);
#line 847
c_rt_lib0move(&___nl__im__246,___get_global_string_const(322));
#line 847
c_rt_lib0move(&___nl__im__242, c_rt_lib0concat_new(___nl__im__243, ___nl__im__246));
#line 847
c_rt_lib0clear(&___nl__im__243);
#line 847
c_rt_lib0clear(&___nl__im__246);
#line 847
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__242));
#line 847
c_rt_lib0clear(&___nl__im__242);
#line 848
goto label_1881;
#line 848
label_670:
;
#line 848
c_rt_lib0move(&___nl__im__248, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(240)));
#line 848
c_rt_lib0copy(&___nl__im__247, ___nl__im__248);
#line 849
c_rt_lib0move(&___nl__im__249, c_rt_lib0hash_get_value_dec(___nl__im__247, ___get_global_string_const(73)));
#line 849
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__247, ___get_global_string_const(224)));
#line 849
c_rt_lib0delete(generator_c_priv0print_move(___ref___rec__0, ___nl__im__249, ___nl__im__250));
#line 849
c_rt_lib0clear(&___nl__im__249);
#line 849
c_rt_lib0clear(&___nl__im__250);
#line 850
goto label_1881;
#line 850
label_679:
;
#line 850
c_rt_lib0move(&___nl__im__252, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(226)));
#line 850
c_rt_lib0copy(&___nl__im__251, ___nl__im__252);
#line 851
c_rt_lib0move(&___nl__im__254, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(224)));
#line 851
c_rt_lib0move(&___nl__im__255, nlasm0is_empty(___nl__im__254));
#line 851
___nl__bool__253 = c_rt_lib0check_true_native(___nl__im__255);
#line 851
c_rt_lib0clear(&___nl__im__254);
#line 851
c_rt_lib0clear(&___nl__im__255);
#line 851
___nl__bool__253 = !___nl__bool__253;
#line 851
if(___nl__bool__253){ goto label_731;}
#line 851
c_rt_lib0clear(&___nl__im__1);
#line 851
c_rt_lib0clear(&___nl__im__2);
#line 851
//clear ___nl__bool__13;
#line 851
c_rt_lib0clear(&___nl__im__14);
#line 851
//clear ___nl__bool__15;
#line 851
c_rt_lib0clear(&___nl__im__16);
#line 851
c_rt_lib0clear(&___nl__im__17);
#line 851
c_rt_lib0clear(&___nl__im__18);
#line 851
c_rt_lib0clear(&___nl__im__70);
#line 851
c_rt_lib0clear(&___nl__im__71);
#line 851
c_rt_lib0clear(&___nl__im__114);
#line 851
c_rt_lib0clear(&___nl__im__115);
#line 851
c_rt_lib0clear(&___nl__im__116);
#line 851
c_rt_lib0clear(&___nl__im__117);
#line 851
c_rt_lib0clear(&___nl__im__118);
#line 851
c_rt_lib0clear(&___nl__im__123);
#line 851
c_rt_lib0clear(&___nl__im__124);
#line 851
c_rt_lib0clear(&___nl__im__125);
#line 851
c_rt_lib0clear(&___nl__im__126);
#line 851
c_rt_lib0clear(&___nl__im__127);
#line 851
c_rt_lib0clear(&___nl__im__130);
#line 851
c_rt_lib0clear(&___nl__im__148);
#line 851
c_rt_lib0clear(&___nl__im__149);
#line 851
c_rt_lib0clear(&___nl__im__150);
#line 851
c_rt_lib0clear(&___nl__im__151);
#line 851
c_rt_lib0clear(&___nl__im__184);
#line 851
c_rt_lib0clear(&___nl__im__185);
#line 851
c_rt_lib0clear(&___nl__im__228);
#line 851
c_rt_lib0clear(&___nl__im__229);
#line 851
//clear ___nl__bool__230;
#line 851
c_rt_lib0clear(&___nl__im__231);
#line 851
c_rt_lib0clear(&___nl__im__232);
#line 851
c_rt_lib0clear(&___nl__im__233);
#line 851
c_rt_lib0clear(&___nl__im__240);
#line 851
c_rt_lib0clear(&___nl__im__241);
#line 851
c_rt_lib0clear(&___nl__im__247);
#line 851
c_rt_lib0clear(&___nl__im__248);
#line 851
c_rt_lib0clear(&___nl__im__251);
#line 851
c_rt_lib0clear(&___nl__im__252);
#line 851
//clear ___nl__bool__253;
#line 851
return NULL;
#line 851
goto label_731;
#line 851
label_731:
;
#line 851
//clear ___nl__bool__253;
#line 852
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(224)));
#line 852
c_rt_lib0move(&___nl__im__256, c_rt_lib0hash_get_value_dec(___nl__im__257, ___get_global_string_const(206)));
#line 852
c_rt_lib0clear(&___nl__im__257);
#line 852
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(131));
#line 852
if(___nl__bool__258){ goto label_755;}
#line 856
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(405));
#line 856
if(___nl__bool__258){ goto label_782;}
#line 858
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(406));
#line 858
if(___nl__bool__258){ goto label_797;}
#line 862
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(33));
#line 862
if(___nl__bool__258){ goto label_824;}
#line 864
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(559));
#line 864
if(___nl__bool__258){ goto label_848;}
#line 866
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(127));
#line 866
if(___nl__bool__258){ goto label_854;}
#line 868
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(563));
#line 868
if(___nl__bool__258){ goto label_860;}
#line 870
___nl__bool__258 = c_rt_lib0priv_is(___nl__im__256, ___get_global_string_const(128));
#line 870
if(___nl__bool__258){ goto label_866;}
#line 870
c_rt_lib0move(&___nl__im__259,___get_global_string_const(15));
#line 870
c_rt_lib0move(&___nl__im__259, c_rt_lib0array_mk(2, ___nl__im__259, ___nl__im__256));
#line 870
nl_die_arg(___nl__im__259);
#line 852
label_755:
;
#line 853
c_rt_lib0move(&___nl__im__264,___get_global_string_const(240));
#line 853
c_rt_lib0move(&___nl__im__263, generator_c_priv0get_lib_fun(___nl__im__264));
#line 853
c_rt_lib0clear(&___nl__im__264);
#line 853
c_rt_lib0move(&___nl__im__265,___get_global_string_const(457));
#line 853
c_rt_lib0move(&___nl__im__262, c_rt_lib0concat_new(___nl__im__263, ___nl__im__265));
#line 853
c_rt_lib0clear(&___nl__im__263);
#line 853
c_rt_lib0clear(&___nl__im__265);
#line 853
c_rt_lib0move(&___nl__im__267, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(224)));
#line 853
c_rt_lib0move(&___nl__im__266, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__267));
#line 853
c_rt_lib0clear(&___nl__im__267);
#line 853
c_rt_lib0move(&___nl__im__261, c_rt_lib0concat_new(___nl__im__262, ___nl__im__266));
#line 853
c_rt_lib0clear(&___nl__im__262);
#line 853
c_rt_lib0clear(&___nl__im__266);
#line 853
c_rt_lib0move(&___nl__im__268,___get_global_string_const(314));
#line 853
c_rt_lib0move(&___nl__im__260, c_rt_lib0concat_new(___nl__im__261, ___nl__im__268));
#line 853
c_rt_lib0clear(&___nl__im__261);
#line 853
c_rt_lib0clear(&___nl__im__268);
#line 853
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__260));
#line 853
c_rt_lib0clear(&___nl__im__260);
#line 854
c_rt_lib0move(&___nl__im__269, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(225)));
#line 854
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__269));
#line 854
c_rt_lib0clear(&___nl__im__269);
#line 855
c_rt_lib0move(&___nl__im__270,___get_global_string_const(322));
#line 855
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__270));
#line 855
c_rt_lib0clear(&___nl__im__270);
#line 856
goto label_872;
#line 856
label_782:
;
#line 857
c_rt_lib0move(&___nl__im__274, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(224)));
#line 857
c_rt_lib0move(&___nl__im__273, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__274));
#line 857
c_rt_lib0clear(&___nl__im__274);
#line 857
c_rt_lib0move(&___nl__im__275,___get_global_string_const(504));
#line 857
c_rt_lib0move(&___nl__im__272, c_rt_lib0concat_new(___nl__im__273, ___nl__im__275));
#line 857
c_rt_lib0clear(&___nl__im__273);
#line 857
c_rt_lib0clear(&___nl__im__275);
#line 857
c_rt_lib0move(&___nl__im__276, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(225)));
#line 857
c_rt_lib0move(&___nl__im__271, c_rt_lib0concat_new(___nl__im__272, ___nl__im__276));
#line 857
c_rt_lib0clear(&___nl__im__272);
#line 857
c_rt_lib0clear(&___nl__im__276);
#line 857
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__271));
#line 857
c_rt_lib0clear(&___nl__im__271);
#line 858
goto label_872;
#line 858
label_797:
;
#line 859
c_rt_lib0move(&___nl__im__281,___get_global_string_const(240));
#line 859
c_rt_lib0move(&___nl__im__280, generator_c_priv0get_lib_fun(___nl__im__281));
#line 859
c_rt_lib0clear(&___nl__im__281);
#line 859
c_rt_lib0move(&___nl__im__282,___get_global_string_const(457));
#line 859
c_rt_lib0move(&___nl__im__279, c_rt_lib0concat_new(___nl__im__280, ___nl__im__282));
#line 859
c_rt_lib0clear(&___nl__im__280);
#line 859
c_rt_lib0clear(&___nl__im__282);
#line 859
c_rt_lib0move(&___nl__im__284, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(224)));
#line 859
c_rt_lib0move(&___nl__im__283, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__284));
#line 859
c_rt_lib0clear(&___nl__im__284);
#line 859
c_rt_lib0move(&___nl__im__278, c_rt_lib0concat_new(___nl__im__279, ___nl__im__283));
#line 859
c_rt_lib0clear(&___nl__im__279);
#line 859
c_rt_lib0clear(&___nl__im__283);
#line 859
c_rt_lib0move(&___nl__im__285,___get_global_string_const(314));
#line 859
c_rt_lib0move(&___nl__im__277, c_rt_lib0concat_new(___nl__im__278, ___nl__im__285));
#line 859
c_rt_lib0clear(&___nl__im__278);
#line 859
c_rt_lib0clear(&___nl__im__285);
#line 859
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__277));
#line 859
c_rt_lib0clear(&___nl__im__277);
#line 860
c_rt_lib0move(&___nl__im__286, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(225)));
#line 860
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__286));
#line 860
c_rt_lib0clear(&___nl__im__286);
#line 861
c_rt_lib0move(&___nl__im__287,___get_global_string_const(322));
#line 861
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__287));
#line 861
c_rt_lib0clear(&___nl__im__287);
#line 862
goto label_872;
#line 862
label_824:
;
#line 863
c_rt_lib0move(&___nl__im__291, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(224)));
#line 863
c_rt_lib0move(&___nl__im__290, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__291));
#line 863
c_rt_lib0clear(&___nl__im__291);
#line 863
c_rt_lib0move(&___nl__im__292,___get_global_string_const(504));
#line 863
c_rt_lib0move(&___nl__im__289, c_rt_lib0concat_new(___nl__im__290, ___nl__im__292));
#line 863
c_rt_lib0clear(&___nl__im__290);
#line 863
c_rt_lib0clear(&___nl__im__292);
#line 863
c_rt_lib0move(&___nl__im__294, c_rt_lib0hash_get_value_dec(___nl__im__251, ___get_global_string_const(225)));
#line 863
___nl__bool__295 = c_rt_lib0check_true_native(___nl__im__294);
#line 863
if(___nl__bool__295){ goto label_837;}
#line 863
c_rt_lib0move(&___nl__im__293,___get_global_string_const(572));
#line 863
goto label_839;
#line 863
label_837:
;
#line 863
c_rt_lib0move(&___nl__im__293,___get_global_string_const(573));
#line 863
label_839:
;
#line 863
c_rt_lib0clear(&___nl__im__294);
#line 863
//clear ___nl__bool__295;
#line 863
c_rt_lib0move(&___nl__im__288, c_rt_lib0concat_new(___nl__im__289, ___nl__im__293));
#line 863
c_rt_lib0clear(&___nl__im__289);
#line 863
c_rt_lib0clear(&___nl__im__293);
#line 863
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__288));
#line 863
c_rt_lib0clear(&___nl__im__288);
#line 864
goto label_872;
#line 864
label_848:
;
#line 864
c_rt_lib0move(&___nl__im__297, c_rt_lib0priv_as(___nl__im__256, ___get_global_string_const(559)));
#line 864
c_rt_lib0copy(&___nl__im__296, ___nl__im__297);
#line 865
c_rt_lib0move(&___nl__im__298, c_rt_lib0array_mk(0));
#line 865
nl_die_arg(___nl__im__298);
#line 866
goto label_872;
#line 866
label_854:
;
#line 866
c_rt_lib0move(&___nl__im__300, c_rt_lib0priv_as(___nl__im__256, ___get_global_string_const(127)));
#line 866
c_rt_lib0copy(&___nl__im__299, ___nl__im__300);
#line 867
c_rt_lib0move(&___nl__im__301, c_rt_lib0array_mk(0));
#line 867
nl_die_arg(___nl__im__301);
#line 868
goto label_872;
#line 868
label_860:
;
#line 868
c_rt_lib0move(&___nl__im__303, c_rt_lib0priv_as(___nl__im__256, ___get_global_string_const(563)));
#line 868
c_rt_lib0copy(&___nl__im__302, ___nl__im__303);
#line 869
c_rt_lib0move(&___nl__im__304, c_rt_lib0array_mk(0));
#line 869
nl_die_arg(___nl__im__304);
#line 870
goto label_872;
#line 870
label_866:
;
#line 870
c_rt_lib0move(&___nl__im__306, c_rt_lib0priv_as(___nl__im__256, ___get_global_string_const(128)));
#line 870
c_rt_lib0copy(&___nl__im__305, ___nl__im__306);
#line 871
c_rt_lib0move(&___nl__im__307, c_rt_lib0array_mk(0));
#line 871
nl_die_arg(___nl__im__307);
#line 872
goto label_872;
#line 872
label_872:
;
#line 873
goto label_1881;
#line 873
label_874:
;
#line 873
c_rt_lib0move(&___nl__im__309, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(241)));
#line 873
c_rt_lib0copy(&___nl__im__308, ___nl__im__309);
#line 874
c_rt_lib0move(&___nl__im__311,___get_global_string_const(574));
#line 874
c_rt_lib0move(&___nl__im__314, c_rt_lib0hash_get_value_dec(___nl__im__308, ___get_global_string_const(73)));
#line 874
c_rt_lib0move(&___nl__im__313, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__314));
#line 874
c_rt_lib0clear(&___nl__im__314);
#line 874
c_rt_lib0move(&___nl__im__316, c_rt_lib0hash_get_value_dec(___nl__im__308, ___get_global_string_const(278)));
#line 874
c_rt_lib0move(&___nl__im__315, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__316));
#line 874
c_rt_lib0clear(&___nl__im__316);
#line 874
c_rt_lib0move(&___nl__im__312, c_rt_lib0array_mk(2, ___nl__im__313, ___nl__im__315));
#line 874
c_rt_lib0clear(&___nl__im__313);
#line 874
c_rt_lib0clear(&___nl__im__315);
#line 874
c_rt_lib0move(&___nl__im__310, generator_c_priv0get_fun_lib(___nl__im__311, ___nl__im__312));
#line 874
c_rt_lib0clear(&___nl__im__311);
#line 874
c_rt_lib0clear(&___nl__im__312);
#line 875
c_rt_lib0move(&___nl__im__318, c_rt_lib0hash_get_value_dec(___nl__im__308, ___get_global_string_const(224)));
#line 875
c_rt_lib0move(&___nl__im__317, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__318, ___nl__im__310));
#line 875
c_rt_lib0clear(&___nl__im__318);
#line 875
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__317));
#line 875
c_rt_lib0clear(&___nl__im__317);
#line 876
goto label_1881;
#line 876
label_896:
;
#line 876
c_rt_lib0move(&___nl__im__320, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(242)));
#line 876
c_rt_lib0copy(&___nl__im__319, ___nl__im__320);
#line 877
c_rt_lib0move(&___nl__im__322,___get_global_string_const(575));
#line 878
c_rt_lib0move(&___nl__im__325, c_rt_lib0hash_get_value_dec(___nl__im__319, ___get_global_string_const(73)));
#line 878
c_rt_lib0move(&___nl__im__324, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__325));
#line 878
c_rt_lib0clear(&___nl__im__325);
#line 879
c_rt_lib0move(&___nl__im__327, c_rt_lib0hash_get_value_dec(___nl__im__319, ___get_global_string_const(278)));
#line 879
c_rt_lib0move(&___nl__im__326, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__327));
#line 879
c_rt_lib0clear(&___nl__im__327);
#line 880
c_rt_lib0move(&___nl__im__329, c_rt_lib0hash_get_value_dec(___nl__im__319, ___get_global_string_const(225)));
#line 880
c_rt_lib0move(&___nl__im__328, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__329));
#line 880
c_rt_lib0clear(&___nl__im__329);
#line 880
c_rt_lib0move(&___nl__im__323, c_rt_lib0array_mk(3, ___nl__im__324, ___nl__im__326, ___nl__im__328));
#line 880
c_rt_lib0clear(&___nl__im__324);
#line 880
c_rt_lib0clear(&___nl__im__326);
#line 880
c_rt_lib0clear(&___nl__im__328);
#line 880
c_rt_lib0move(&___nl__im__321, generator_c_priv0get_fun_lib(___nl__im__322, ___nl__im__323));
#line 880
c_rt_lib0clear(&___nl__im__322);
#line 880
c_rt_lib0clear(&___nl__im__323);
#line 880
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__321));
#line 880
c_rt_lib0clear(&___nl__im__321);
#line 882
goto label_1881;
#line 882
label_919:
;
#line 882
c_rt_lib0move(&___nl__im__331, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(243)));
#line 882
c_rt_lib0copy(&___nl__im__330, ___nl__im__331);
#line 883
c_rt_lib0move(&___nl__im__334, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 883
c_rt_lib0move(&___nl__im__333, c_rt_lib0hash_get_value_dec(___nl__im__334, ___get_global_string_const(206)));
#line 883
c_rt_lib0clear(&___nl__im__334);
#line 883
___nl__bool__332 = c_rt_lib0priv_is(___nl__im__333, ___get_global_string_const(127));
#line 883
c_rt_lib0clear(&___nl__im__333);
#line 883
___nl__bool__332 = !___nl__bool__332;
#line 883
if(___nl__bool__332){ goto label_984;}
#line 884
c_rt_lib0move(&___nl__im__338, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 884
c_rt_lib0move(&___nl__im__337, c_rt_lib0hash_get_value_dec(___nl__im__338, ___get_global_string_const(206)));
#line 884
c_rt_lib0clear(&___nl__im__338);
#line 884
c_rt_lib0move(&___nl__im__340, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 884
c_rt_lib0move(&___nl__im__339, c_rt_lib0hash_get_value_dec(___nl__im__340, ___get_global_string_const(206)));
#line 884
c_rt_lib0clear(&___nl__im__340);
#line 884
c_rt_lib0move(&___nl__im__336, c_rt_lib0priv_as(___nl__im__339, ___get_global_string_const(127)));
#line 884
c_rt_lib0clear(&___nl__im__337);
#line 884
c_rt_lib0clear(&___nl__im__339);
#line 884
c_rt_lib0move(&___nl__im__335, generator_c_priv0get_type_name(___nl__im__336));
#line 884
c_rt_lib0clear(&___nl__im__336);
#line 885
___nl__im_ptr__348 = &((*___ref___rec__0).mod_name0field);
#line 885
c_rt_lib0copy(&___nl__im__347, (*___nl__im_ptr__348));
#line 885
___nl__im_ptr__348 = NULL;
#line 885
c_rt_lib0move(&___nl__im__352, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 885
c_rt_lib0move(&___nl__im__351, c_rt_lib0hash_get_value_dec(___nl__im__352, ___get_global_string_const(206)));
#line 885
c_rt_lib0clear(&___nl__im__352);
#line 885
c_rt_lib0move(&___nl__im__354, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 885
c_rt_lib0move(&___nl__im__353, c_rt_lib0hash_get_value_dec(___nl__im__354, ___get_global_string_const(206)));
#line 885
c_rt_lib0clear(&___nl__im__354);
#line 885
c_rt_lib0move(&___nl__im__350, c_rt_lib0priv_as(___nl__im__353, ___get_global_string_const(127)));
#line 885
c_rt_lib0clear(&___nl__im__351);
#line 885
c_rt_lib0clear(&___nl__im__353);
#line 885
___nl__bool__349 = generator_c_priv0is_anon(___nl__im__350);
#line 885
c_rt_lib0clear(&___nl__im__350);
#line 885
c_rt_lib0move(&___nl__im__346, generator_c_priv0get_array_push_fun_name(___nl__im__335, ___nl__im__347, ___nl__bool__349));
#line 885
c_rt_lib0clear(&___nl__im__347);
#line 885
//clear ___nl__bool__349;
#line 885
c_rt_lib0move(&___nl__im__355,___get_global_string_const(457));
#line 885
c_rt_lib0move(&___nl__im__345, c_rt_lib0concat_new(___nl__im__346, ___nl__im__355));
#line 885
c_rt_lib0clear(&___nl__im__346);
#line 885
c_rt_lib0clear(&___nl__im__355);
#line 886
c_rt_lib0move(&___nl__im__357, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 886
c_rt_lib0move(&___nl__im__356, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__357));
#line 886
c_rt_lib0clear(&___nl__im__357);
#line 886
c_rt_lib0move(&___nl__im__344, c_rt_lib0concat_new(___nl__im__345, ___nl__im__356));
#line 886
c_rt_lib0clear(&___nl__im__345);
#line 886
c_rt_lib0clear(&___nl__im__356);
#line 886
c_rt_lib0move(&___nl__im__358,___get_global_string_const(328));
#line 886
c_rt_lib0move(&___nl__im__343, c_rt_lib0concat_new(___nl__im__344, ___nl__im__358));
#line 886
c_rt_lib0clear(&___nl__im__344);
#line 886
c_rt_lib0clear(&___nl__im__358);
#line 887
c_rt_lib0move(&___nl__im__360, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(225)));
#line 887
c_rt_lib0move(&___nl__im__359, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__360));
#line 887
c_rt_lib0clear(&___nl__im__360);
#line 887
c_rt_lib0move(&___nl__im__342, c_rt_lib0concat_new(___nl__im__343, ___nl__im__359));
#line 887
c_rt_lib0clear(&___nl__im__343);
#line 887
c_rt_lib0clear(&___nl__im__359);
#line 887
c_rt_lib0move(&___nl__im__361,___get_global_string_const(322));
#line 887
c_rt_lib0move(&___nl__im__341, c_rt_lib0concat_new(___nl__im__342, ___nl__im__361));
#line 887
c_rt_lib0clear(&___nl__im__342);
#line 887
c_rt_lib0clear(&___nl__im__361);
#line 887
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__341));
#line 887
c_rt_lib0clear(&___nl__im__341);
#line 888
goto label_1012;
#line 888
label_984:
;
#line 888
c_rt_lib0move(&___nl__im__363, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 888
c_rt_lib0move(&___nl__im__362, c_rt_lib0hash_get_value_dec(___nl__im__363, ___get_global_string_const(206)));
#line 888
c_rt_lib0clear(&___nl__im__363);
#line 888
___nl__bool__332 = c_rt_lib0priv_is(___nl__im__362, ___get_global_string_const(131));
#line 888
c_rt_lib0clear(&___nl__im__362);
#line 888
___nl__bool__332 = !___nl__bool__332;
#line 888
if(___nl__bool__332){ goto label_1008;}
#line 889
c_rt_lib0move(&___nl__im__365,___get_global_string_const(243));
#line 890
c_rt_lib0move(&___nl__im__368, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(224)));
#line 890
c_rt_lib0move(&___nl__im__367, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__368));
#line 890
c_rt_lib0clear(&___nl__im__368);
#line 891
c_rt_lib0move(&___nl__im__370, c_rt_lib0hash_get_value_dec(___nl__im__330, ___get_global_string_const(225)));
#line 891
c_rt_lib0move(&___nl__im__369, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__370));
#line 891
c_rt_lib0clear(&___nl__im__370);
#line 891
c_rt_lib0move(&___nl__im__366, c_rt_lib0array_mk(2, ___nl__im__367, ___nl__im__369));
#line 891
c_rt_lib0clear(&___nl__im__367);
#line 891
c_rt_lib0clear(&___nl__im__369);
#line 891
c_rt_lib0move(&___nl__im__364, generator_c_priv0get_fun_lib(___nl__im__365, ___nl__im__366));
#line 891
c_rt_lib0clear(&___nl__im__365);
#line 891
c_rt_lib0clear(&___nl__im__366);
#line 891
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__364));
#line 891
c_rt_lib0clear(&___nl__im__364);
#line 893
goto label_1012;
#line 893
label_1008:
;
#line 894
c_rt_lib0move(&___nl__im__371, c_rt_lib0array_mk(0));
#line 894
nl_die_arg(___nl__im__371);
#line 895
goto label_1012;
#line 895
label_1012:
;
#line 895
//clear ___nl__bool__332;
#line 895
c_rt_lib0clear(&___nl__im__335);
#line 895
c_rt_lib0clear(&___nl__im__371);
#line 896
goto label_1881;
#line 896
label_1017:
;
#line 896
c_rt_lib0move(&___nl__im__373, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(244)));
#line 896
c_rt_lib0copy(&___nl__im__372, ___nl__im__373);
#line 898
c_rt_lib0move(&___nl__im__377, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 898
c_rt_lib0move(&___nl__im__376, c_rt_lib0hash_get_value_dec(___nl__im__377, ___get_global_string_const(206)));
#line 898
c_rt_lib0clear(&___nl__im__377);
#line 898
___nl__bool__375 = c_rt_lib0priv_is(___nl__im__376, ___get_global_string_const(127));
#line 898
c_rt_lib0clear(&___nl__im__376);
#line 898
___nl__bool__375 = !___nl__bool__375;
#line 898
if(___nl__bool__375){ goto label_1069;}
#line 899
c_rt_lib0move(&___nl__im__381, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 899
c_rt_lib0move(&___nl__im__380, c_rt_lib0hash_get_value_dec(___nl__im__381, ___get_global_string_const(206)));
#line 899
c_rt_lib0clear(&___nl__im__381);
#line 899
c_rt_lib0move(&___nl__im__383, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 899
c_rt_lib0move(&___nl__im__382, c_rt_lib0hash_get_value_dec(___nl__im__383, ___get_global_string_const(206)));
#line 899
c_rt_lib0clear(&___nl__im__383);
#line 899
c_rt_lib0move(&___nl__im__379, c_rt_lib0priv_as(___nl__im__382, ___get_global_string_const(127)));
#line 899
c_rt_lib0clear(&___nl__im__380);
#line 899
c_rt_lib0clear(&___nl__im__382);
#line 899
c_rt_lib0move(&___nl__im__378, generator_c_priv0get_type_name(___nl__im__379));
#line 899
c_rt_lib0clear(&___nl__im__379);
#line 900
c_rt_lib0move(&___nl__im__387, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 900
c_rt_lib0move(&___nl__im__386, c_rt_lib0hash_get_value_dec(___nl__im__387, ___get_global_string_const(206)));
#line 900
c_rt_lib0clear(&___nl__im__387);
#line 900
c_rt_lib0move(&___nl__im__389, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 900
c_rt_lib0move(&___nl__im__388, c_rt_lib0hash_get_value_dec(___nl__im__389, ___get_global_string_const(206)));
#line 900
c_rt_lib0clear(&___nl__im__389);
#line 900
c_rt_lib0move(&___nl__im__385, c_rt_lib0priv_as(___nl__im__388, ___get_global_string_const(127)));
#line 900
c_rt_lib0clear(&___nl__im__386);
#line 900
c_rt_lib0clear(&___nl__im__388);
#line 900
___nl__bool__384 = generator_c_priv0is_anon(___nl__im__385);
#line 900
c_rt_lib0clear(&___nl__im__385);
#line 901
___nl__im_ptr__394 = &((*___ref___rec__0).mod_name0field);
#line 901
c_rt_lib0copy(&___nl__im__393, (*___nl__im_ptr__394));
#line 901
___nl__im_ptr__394 = NULL;
#line 901
c_rt_lib0move(&___nl__im__392, generator_c_priv0get_array_len_fun_name(___nl__im__378, ___nl__im__393, ___nl__bool__384));
#line 901
c_rt_lib0clear(&___nl__im__393);
#line 901
c_rt_lib0move(&___nl__im__395,___get_global_string_const(457));
#line 901
c_rt_lib0move(&___nl__im__391, c_rt_lib0concat_new(___nl__im__392, ___nl__im__395));
#line 901
c_rt_lib0clear(&___nl__im__392);
#line 901
c_rt_lib0clear(&___nl__im__395);
#line 902
c_rt_lib0move(&___nl__im__397, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 902
c_rt_lib0move(&___nl__im__396, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__397));
#line 902
c_rt_lib0clear(&___nl__im__397);
#line 902
c_rt_lib0move(&___nl__im__390, c_rt_lib0concat_new(___nl__im__391, ___nl__im__396));
#line 902
c_rt_lib0clear(&___nl__im__391);
#line 902
c_rt_lib0clear(&___nl__im__396);
#line 902
c_rt_lib0move(&___nl__im__398,___get_global_string_const(322));
#line 902
c_rt_lib0move(&___nl__im__374, c_rt_lib0concat_new(___nl__im__390, ___nl__im__398));
#line 902
c_rt_lib0clear(&___nl__im__390);
#line 902
c_rt_lib0clear(&___nl__im__398);
#line 903
goto label_1091;
#line 903
label_1069:
;
#line 903
c_rt_lib0move(&___nl__im__400, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 903
c_rt_lib0move(&___nl__im__399, c_rt_lib0hash_get_value_dec(___nl__im__400, ___get_global_string_const(206)));
#line 903
c_rt_lib0clear(&___nl__im__400);
#line 903
___nl__bool__375 = c_rt_lib0priv_is(___nl__im__399, ___get_global_string_const(131));
#line 903
c_rt_lib0clear(&___nl__im__399);
#line 903
___nl__bool__375 = !___nl__bool__375;
#line 903
if(___nl__bool__375){ goto label_1087;}
#line 904
c_rt_lib0move(&___nl__im__401,___get_global_string_const(244));
#line 904
c_rt_lib0move(&___nl__im__404, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(73)));
#line 904
c_rt_lib0move(&___nl__im__403, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__404));
#line 904
c_rt_lib0clear(&___nl__im__404);
#line 904
c_rt_lib0move(&___nl__im__402, c_rt_lib0array_mk(1, ___nl__im__403));
#line 904
c_rt_lib0clear(&___nl__im__403);
#line 904
c_rt_lib0move(&___nl__im__374, generator_c_priv0get_fun_lib(___nl__im__401, ___nl__im__402));
#line 904
c_rt_lib0clear(&___nl__im__401);
#line 904
c_rt_lib0clear(&___nl__im__402);
#line 905
goto label_1091;
#line 905
label_1087:
;
#line 906
c_rt_lib0move(&___nl__im__405, c_rt_lib0array_mk(0));
#line 906
nl_die_arg(___nl__im__405);
#line 907
goto label_1091;
#line 907
label_1091:
;
#line 907
//clear ___nl__bool__375;
#line 907
c_rt_lib0clear(&___nl__im__378);
#line 907
//clear ___nl__bool__384;
#line 907
c_rt_lib0clear(&___nl__im__405);
#line 908
c_rt_lib0move(&___nl__im__409, c_rt_lib0hash_get_value_dec(___nl__im__372, ___get_global_string_const(224)));
#line 908
c_rt_lib0move(&___nl__im__408, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__409));
#line 908
c_rt_lib0clear(&___nl__im__409);
#line 908
c_rt_lib0move(&___nl__im__410,___get_global_string_const(504));
#line 908
c_rt_lib0move(&___nl__im__407, c_rt_lib0concat_new(___nl__im__408, ___nl__im__410));
#line 908
c_rt_lib0clear(&___nl__im__408);
#line 908
c_rt_lib0clear(&___nl__im__410);
#line 908
c_rt_lib0move(&___nl__im__406, c_rt_lib0concat_new(___nl__im__407, ___nl__im__374));
#line 908
c_rt_lib0clear(&___nl__im__407);
#line 908
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__406));
#line 908
c_rt_lib0clear(&___nl__im__406);
#line 909
goto label_1881;
#line 909
label_1108:
;
#line 909
c_rt_lib0move(&___nl__im__412, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(245)));
#line 909
c_rt_lib0copy(&___nl__im__411, ___nl__im__412);
#line 911
c_rt_lib0move(&___nl__im__415, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(73)));
#line 911
c_rt_lib0move(&___nl__im__414, c_rt_lib0hash_get_value_dec(___nl__im__415, ___get_global_string_const(353)));
#line 911
c_rt_lib0clear(&___nl__im__415);
#line 911
___nl__bool__416 = c_rt_lib0priv_is(___nl__im__414, ___get_global_string_const(220));
#line 911
if(___nl__bool__416){ goto label_1121;}
#line 913
___nl__bool__416 = c_rt_lib0priv_is(___nl__im__414, ___get_global_string_const(422));
#line 913
if(___nl__bool__416){ goto label_1136;}
#line 913
c_rt_lib0move(&___nl__im__417,___get_global_string_const(15));
#line 913
c_rt_lib0move(&___nl__im__417, c_rt_lib0array_mk(2, ___nl__im__417, ___nl__im__414));
#line 913
nl_die_arg(___nl__im__417);
#line 911
label_1121:
;
#line 912
c_rt_lib0move(&___nl__im__418,___get_global_string_const(576));
#line 912
c_rt_lib0move(&___nl__im__421, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(73)));
#line 912
c_rt_lib0move(&___nl__im__420, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__421));
#line 912
c_rt_lib0clear(&___nl__im__421);
#line 912
c_rt_lib0move(&___nl__im__423, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(577)));
#line 912
c_rt_lib0move(&___nl__im__422, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__423));
#line 912
c_rt_lib0clear(&___nl__im__423);
#line 912
c_rt_lib0move(&___nl__im__419, c_rt_lib0array_mk(2, ___nl__im__420, ___nl__im__422));
#line 912
c_rt_lib0clear(&___nl__im__420);
#line 912
c_rt_lib0clear(&___nl__im__422);
#line 912
c_rt_lib0move(&___nl__im__413, generator_c_priv0get_fun_lib(___nl__im__418, ___nl__im__419));
#line 912
c_rt_lib0clear(&___nl__im__418);
#line 912
c_rt_lib0clear(&___nl__im__419);
#line 913
goto label_1192;
#line 913
label_1136:
;
#line 914
c_rt_lib0move(&___nl__im__426, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(73)));
#line 914
c_rt_lib0move(&___nl__im__425, c_rt_lib0hash_get_value_dec(___nl__im__426, ___get_global_string_const(206)));
#line 914
c_rt_lib0clear(&___nl__im__426);
#line 914
___nl__bool__424 = c_rt_lib0priv_is(___nl__im__425, ___get_global_string_const(559));
#line 914
c_rt_lib0clear(&___nl__im__425);
#line 914
___nl__bool__424 = !___nl__bool__424;
#line 914
if(___nl__bool__424){ goto label_1158;}
#line 915
c_rt_lib0move(&___nl__im__429, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(73)));
#line 915
c_rt_lib0move(&___nl__im__428, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__429));
#line 915
c_rt_lib0clear(&___nl__im__429);
#line 915
c_rt_lib0move(&___nl__im__430,___get_global_string_const(578));
#line 915
c_rt_lib0move(&___nl__im__427, c_rt_lib0concat_new(___nl__im__428, ___nl__im__430));
#line 915
c_rt_lib0clear(&___nl__im__428);
#line 915
c_rt_lib0clear(&___nl__im__430);
#line 915
c_rt_lib0move(&___nl__im__432, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(577)));
#line 915
c_rt_lib0move(&___nl__im__431, generator_c_priv0get_field_name(___nl__im__432));
#line 915
c_rt_lib0clear(&___nl__im__432);
#line 915
c_rt_lib0move(&___nl__im__413, c_rt_lib0concat_new(___nl__im__427, ___nl__im__431));
#line 915
c_rt_lib0clear(&___nl__im__427);
#line 915
c_rt_lib0clear(&___nl__im__431);
#line 916
goto label_1188;
#line 916
label_1158:
;
#line 916
c_rt_lib0move(&___nl__im__434, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(73)));
#line 916
c_rt_lib0move(&___nl__im__433, c_rt_lib0hash_get_value_dec(___nl__im__434, ___get_global_string_const(206)));
#line 916
c_rt_lib0clear(&___nl__im__434);
#line 916
___nl__bool__424 = c_rt_lib0priv_is(___nl__im__433, ___get_global_string_const(131));
#line 916
c_rt_lib0clear(&___nl__im__433);
#line 916
___nl__bool__424 = !___nl__bool__424;
#line 916
if(___nl__bool__424){ goto label_1184;}
#line 917
c_rt_lib0move(&___nl__im__435,___get_global_string_const(576));
#line 918
c_rt_lib0move(&___nl__im__438,___get_global_string_const(375));
#line 918
c_rt_lib0move(&___nl__im__440, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(73)));
#line 918
c_rt_lib0move(&___nl__im__439, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__440));
#line 918
c_rt_lib0clear(&___nl__im__440);
#line 918
c_rt_lib0move(&___nl__im__437, c_rt_lib0concat_new(___nl__im__438, ___nl__im__439));
#line 918
c_rt_lib0clear(&___nl__im__438);
#line 918
c_rt_lib0clear(&___nl__im__439);
#line 918
c_rt_lib0move(&___nl__im__442, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(577)));
#line 918
c_rt_lib0move(&___nl__im__441, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__442));
#line 918
c_rt_lib0clear(&___nl__im__442);
#line 918
c_rt_lib0move(&___nl__im__436, c_rt_lib0array_mk(2, ___nl__im__437, ___nl__im__441));
#line 918
c_rt_lib0clear(&___nl__im__437);
#line 918
c_rt_lib0clear(&___nl__im__441);
#line 918
c_rt_lib0move(&___nl__im__413, generator_c_priv0get_fun_lib(___nl__im__435, ___nl__im__436));
#line 918
c_rt_lib0clear(&___nl__im__435);
#line 918
c_rt_lib0clear(&___nl__im__436);
#line 919
goto label_1188;
#line 919
label_1184:
;
#line 920
c_rt_lib0move(&___nl__im__443, c_rt_lib0array_mk(0));
#line 920
nl_die_arg(___nl__im__443);
#line 921
goto label_1188;
#line 921
label_1188:
;
#line 921
//clear ___nl__bool__424;
#line 921
c_rt_lib0clear(&___nl__im__443);
#line 922
goto label_1192;
#line 922
label_1192:
;
#line 923
c_rt_lib0move(&___nl__im__445, c_rt_lib0hash_get_value_dec(___nl__im__411, ___get_global_string_const(224)));
#line 923
c_rt_lib0move(&___nl__im__444, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__445, ___nl__im__413));
#line 923
c_rt_lib0clear(&___nl__im__445);
#line 923
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__444));
#line 923
c_rt_lib0clear(&___nl__im__444);
#line 924
goto label_1881;
#line 924
label_1199:
;
#line 924
c_rt_lib0move(&___nl__im__447, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(246)));
#line 924
c_rt_lib0copy(&___nl__im__446, ___nl__im__447);
#line 925
c_rt_lib0move(&___nl__im__449,___get_global_string_const(579));
#line 926
c_rt_lib0move(&___nl__im__452, c_rt_lib0hash_get_value_dec(___nl__im__446, ___get_global_string_const(73)));
#line 926
c_rt_lib0move(&___nl__im__451, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__452));
#line 926
c_rt_lib0clear(&___nl__im__452);
#line 927
c_rt_lib0move(&___nl__im__454, c_rt_lib0hash_get_value_dec(___nl__im__446, ___get_global_string_const(577)));
#line 927
c_rt_lib0move(&___nl__im__453, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__454));
#line 927
c_rt_lib0clear(&___nl__im__454);
#line 928
c_rt_lib0move(&___nl__im__456, c_rt_lib0hash_get_value_dec(___nl__im__446, ___get_global_string_const(225)));
#line 928
c_rt_lib0move(&___nl__im__455, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__456));
#line 928
c_rt_lib0clear(&___nl__im__456);
#line 928
c_rt_lib0move(&___nl__im__450, c_rt_lib0array_mk(3, ___nl__im__451, ___nl__im__453, ___nl__im__455));
#line 928
c_rt_lib0clear(&___nl__im__451);
#line 928
c_rt_lib0clear(&___nl__im__453);
#line 928
c_rt_lib0clear(&___nl__im__455);
#line 928
c_rt_lib0move(&___nl__im__448, generator_c_priv0get_fun_lib(___nl__im__449, ___nl__im__450));
#line 928
c_rt_lib0clear(&___nl__im__449);
#line 928
c_rt_lib0clear(&___nl__im__450);
#line 928
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__448));
#line 928
c_rt_lib0clear(&___nl__im__448);
#line 930
goto label_1881;
#line 930
label_1222:
;
#line 930
c_rt_lib0move(&___nl__im__458, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(247)));
#line 930
c_rt_lib0copy(&___nl__im__457, ___nl__im__458);
#line 931
c_rt_lib0move(&___nl__im__461, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 931
c_rt_lib0move(&___nl__im__460, c_rt_lib0hash_get_value_dec(___nl__im__461, ___get_global_string_const(206)));
#line 931
c_rt_lib0clear(&___nl__im__461);
#line 931
___nl__bool__459 = c_rt_lib0priv_is(___nl__im__460, ___get_global_string_const(131));
#line 931
c_rt_lib0clear(&___nl__im__460);
#line 931
___nl__bool__459 = !___nl__bool__459;
#line 931
if(___nl__bool__459){ goto label_1273;}
#line 933
c_rt_lib0move(&___nl__im__463, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(73)));
#line 933
___nl__bool__464 = c_rt_lib0priv_is(___nl__im__463, ___get_global_string_const(279));
#line 933
if(___nl__bool__464){ goto label_1240;}
#line 935
___nl__bool__464 = c_rt_lib0priv_is(___nl__im__463, ___get_global_string_const(352));
#line 935
if(___nl__bool__464){ goto label_1255;}
#line 935
c_rt_lib0move(&___nl__im__465,___get_global_string_const(15));
#line 935
c_rt_lib0move(&___nl__im__465, c_rt_lib0array_mk(2, ___nl__im__465, ___nl__im__463));
#line 935
nl_die_arg(___nl__im__465);
#line 933
label_1240:
;
#line 933
c_rt_lib0move(&___nl__im__467, c_rt_lib0priv_as(___nl__im__463, ___get_global_string_const(279)));
#line 933
c_rt_lib0copy(&___nl__im__466, ___nl__im__467);
#line 934
c_rt_lib0move(&___nl__im__468,___get_global_string_const(580));
#line 934
c_rt_lib0move(&___nl__im__471, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(562)));
#line 934
c_rt_lib0move(&___nl__im__470, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__471));
#line 934
c_rt_lib0clear(&___nl__im__471);
#line 934
c_rt_lib0move(&___nl__im__472, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__466));
#line 934
c_rt_lib0move(&___nl__im__469, c_rt_lib0array_mk(2, ___nl__im__470, ___nl__im__472));
#line 934
c_rt_lib0clear(&___nl__im__470);
#line 934
c_rt_lib0clear(&___nl__im__472);
#line 934
c_rt_lib0move(&___nl__im__462, generator_c_priv0get_fun_lib(___nl__im__468, ___nl__im__469));
#line 934
c_rt_lib0clear(&___nl__im__468);
#line 934
c_rt_lib0clear(&___nl__im__469);
#line 935
goto label_1266;
#line 935
label_1255:
;
#line 936
c_rt_lib0move(&___nl__im__473,___get_global_string_const(547));
#line 936
c_rt_lib0move(&___nl__im__476, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(562)));
#line 936
c_rt_lib0move(&___nl__im__475, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__476));
#line 936
c_rt_lib0clear(&___nl__im__476);
#line 936
c_rt_lib0move(&___nl__im__474, c_rt_lib0array_mk(1, ___nl__im__475));
#line 936
c_rt_lib0clear(&___nl__im__475);
#line 936
c_rt_lib0move(&___nl__im__462, generator_c_priv0get_fun_lib(___nl__im__473, ___nl__im__474));
#line 936
c_rt_lib0clear(&___nl__im__473);
#line 936
c_rt_lib0clear(&___nl__im__474);
#line 937
goto label_1266;
#line 937
label_1266:
;
#line 938
c_rt_lib0move(&___nl__im__478, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 938
c_rt_lib0move(&___nl__im__477, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__478, ___nl__im__462));
#line 938
c_rt_lib0clear(&___nl__im__478);
#line 938
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__477));
#line 938
c_rt_lib0clear(&___nl__im__477);
#line 939
goto label_1382;
#line 939
label_1273:
;
#line 939
c_rt_lib0move(&___nl__im__480, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 939
c_rt_lib0move(&___nl__im__479, c_rt_lib0hash_get_value_dec(___nl__im__480, ___get_global_string_const(206)));
#line 939
c_rt_lib0clear(&___nl__im__480);
#line 939
___nl__bool__459 = c_rt_lib0priv_is(___nl__im__479, ___get_global_string_const(563));
#line 939
c_rt_lib0clear(&___nl__im__479);
#line 939
___nl__bool__459 = !___nl__bool__459;
#line 939
if(___nl__bool__459){ goto label_1378;}
#line 940
c_rt_lib0move(&___nl__im__484, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 940
c_rt_lib0move(&___nl__im__483, c_rt_lib0hash_get_value_dec(___nl__im__484, ___get_global_string_const(206)));
#line 940
c_rt_lib0clear(&___nl__im__484);
#line 940
c_rt_lib0move(&___nl__im__486, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 940
c_rt_lib0move(&___nl__im__485, c_rt_lib0hash_get_value_dec(___nl__im__486, ___get_global_string_const(206)));
#line 940
c_rt_lib0clear(&___nl__im__486);
#line 940
c_rt_lib0move(&___nl__im__482, c_rt_lib0priv_as(___nl__im__485, ___get_global_string_const(563)));
#line 940
c_rt_lib0clear(&___nl__im__483);
#line 940
c_rt_lib0clear(&___nl__im__485);
#line 940
c_rt_lib0move(&___nl__im__481, generator_c_priv0get_type_name(___nl__im__482));
#line 940
c_rt_lib0clear(&___nl__im__482);
#line 941
c_rt_lib0move(&___nl__im__490, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 941
c_rt_lib0move(&___nl__im__489, c_rt_lib0hash_get_value_dec(___nl__im__490, ___get_global_string_const(206)));
#line 941
c_rt_lib0clear(&___nl__im__490);
#line 941
c_rt_lib0move(&___nl__im__492, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 941
c_rt_lib0move(&___nl__im__491, c_rt_lib0hash_get_value_dec(___nl__im__492, ___get_global_string_const(206)));
#line 941
c_rt_lib0clear(&___nl__im__492);
#line 941
c_rt_lib0move(&___nl__im__488, c_rt_lib0priv_as(___nl__im__491, ___get_global_string_const(563)));
#line 941
c_rt_lib0clear(&___nl__im__489);
#line 941
c_rt_lib0clear(&___nl__im__491);
#line 941
___nl__bool__487 = generator_c_priv0is_anon(___nl__im__488);
#line 941
c_rt_lib0clear(&___nl__im__488);
#line 944
c_rt_lib0move(&___nl__im__495, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(73)));
#line 944
___nl__bool__496 = c_rt_lib0priv_is(___nl__im__495, ___get_global_string_const(279));
#line 944
if(___nl__bool__496){ goto label_1311;}
#line 947
___nl__bool__496 = c_rt_lib0priv_is(___nl__im__495, ___get_global_string_const(352));
#line 947
if(___nl__bool__496){ goto label_1327;}
#line 947
c_rt_lib0move(&___nl__im__497,___get_global_string_const(15));
#line 947
c_rt_lib0move(&___nl__im__497, c_rt_lib0array_mk(2, ___nl__im__497, ___nl__im__495));
#line 947
nl_die_arg(___nl__im__497);
#line 944
label_1311:
;
#line 944
c_rt_lib0move(&___nl__im__499, c_rt_lib0priv_as(___nl__im__495, ___get_global_string_const(279)));
#line 944
c_rt_lib0copy(&___nl__im__498, ___nl__im__499);
#line 945
c_rt_lib0move(&___nl__im__493, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__498));
#line 946
c_rt_lib0move(&___nl__im__501,___get_global_string_const(581));
#line 946
c_rt_lib0move(&___nl__im__503, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(582)));
#line 946
c_rt_lib0move(&___nl__im__502, generator_c_priv0get_type_name(___nl__im__503));
#line 946
c_rt_lib0clear(&___nl__im__503);
#line 946
c_rt_lib0move(&___nl__im__500, c_rt_lib0concat_new(___nl__im__501, ___nl__im__502));
#line 946
c_rt_lib0clear(&___nl__im__501);
#line 946
c_rt_lib0clear(&___nl__im__502);
#line 946
c_rt_lib0move(&___nl__im__504,___get_global_string_const(322));
#line 946
c_rt_lib0move(&___nl__im__494, c_rt_lib0concat_new(___nl__im__500, ___nl__im__504));
#line 946
c_rt_lib0clear(&___nl__im__500);
#line 946
c_rt_lib0clear(&___nl__im__504);
#line 947
goto label_1331;
#line 947
label_1327:
;
#line 948
c_rt_lib0move(&___nl__im__493,___get_global_string_const(583));
#line 949
c_rt_lib0move(&___nl__im__494,___get_global_string_const(20));
#line 950
goto label_1331;
#line 950
label_1331:
;
#line 951
___nl__im_ptr__516 = &((*___ref___rec__0).mod_name0field);
#line 951
c_rt_lib0copy(&___nl__im__515, (*___nl__im_ptr__516));
#line 951
___nl__im_ptr__516 = NULL;
#line 951
c_rt_lib0move(&___nl__im__514, generator_c_priv0get_variant_make_fun_name(___nl__im__481, ___nl__im__515, ___nl__bool__487));
#line 951
c_rt_lib0clear(&___nl__im__515);
#line 951
c_rt_lib0move(&___nl__im__517,___get_global_string_const(457));
#line 951
c_rt_lib0move(&___nl__im__513, c_rt_lib0concat_new(___nl__im__514, ___nl__im__517));
#line 951
c_rt_lib0clear(&___nl__im__514);
#line 951
c_rt_lib0clear(&___nl__im__517);
#line 952
c_rt_lib0move(&___nl__im__519, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(224)));
#line 952
c_rt_lib0move(&___nl__im__518, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__519));
#line 952
c_rt_lib0clear(&___nl__im__519);
#line 952
c_rt_lib0move(&___nl__im__512, c_rt_lib0concat_new(___nl__im__513, ___nl__im__518));
#line 952
c_rt_lib0clear(&___nl__im__513);
#line 952
c_rt_lib0clear(&___nl__im__518);
#line 952
c_rt_lib0move(&___nl__im__520,___get_global_string_const(328));
#line 952
c_rt_lib0move(&___nl__im__511, c_rt_lib0concat_new(___nl__im__512, ___nl__im__520));
#line 952
c_rt_lib0clear(&___nl__im__512);
#line 952
c_rt_lib0clear(&___nl__im__520);
#line 952
c_rt_lib0move(&___nl__im__522, c_rt_lib0hash_get_value_dec(___nl__im__457, ___get_global_string_const(567)));
#line 952
___nl__int__521 = getIntFromImm(___nl__im__522);
#line 952
c_rt_lib0clear(&___nl__im__522);
#line 952
c_rt_lib0move(&___nl__string__523, c_rt_lib0int_to_string(___nl__int__521));
#line 952
c_rt_lib0move(&___nl__im__510, c_rt_lib0concat_new(___nl__im__511, ___nl__string__523));
#line 952
c_rt_lib0clear(&___nl__im__511);
#line 952
//clear ___nl__int__521;
#line 952
c_rt_lib0clear(&___nl__string__523);
#line 952
c_rt_lib0move(&___nl__im__524,___get_global_string_const(328));
#line 952
c_rt_lib0move(&___nl__im__509, c_rt_lib0concat_new(___nl__im__510, ___nl__im__524));
#line 952
c_rt_lib0clear(&___nl__im__510);
#line 952
c_rt_lib0clear(&___nl__im__524);
#line 952
c_rt_lib0move(&___nl__im__508, c_rt_lib0concat_new(___nl__im__509, ___nl__im__493));
#line 952
c_rt_lib0clear(&___nl__im__509);
#line 953
c_rt_lib0move(&___nl__im__525,___get_global_string_const(328));
#line 953
c_rt_lib0move(&___nl__im__507, c_rt_lib0concat_new(___nl__im__508, ___nl__im__525));
#line 953
c_rt_lib0clear(&___nl__im__508);
#line 953
c_rt_lib0clear(&___nl__im__525);
#line 953
c_rt_lib0move(&___nl__im__506, c_rt_lib0concat_new(___nl__im__507, ___nl__im__494));
#line 953
c_rt_lib0clear(&___nl__im__507);
#line 953
c_rt_lib0move(&___nl__im__526,___get_global_string_const(322));
#line 953
c_rt_lib0move(&___nl__im__505, c_rt_lib0concat_new(___nl__im__506, ___nl__im__526));
#line 953
c_rt_lib0clear(&___nl__im__506);
#line 953
c_rt_lib0clear(&___nl__im__526);
#line 953
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__505));
#line 953
c_rt_lib0clear(&___nl__im__505);
#line 954
goto label_1382;
#line 954
label_1378:
;
#line 955
c_rt_lib0move(&___nl__im__527, c_rt_lib0array_mk(0));
#line 955
nl_die_arg(___nl__im__527);
#line 956
goto label_1382;
#line 956
label_1382:
;
#line 956
//clear ___nl__bool__459;
#line 956
c_rt_lib0clear(&___nl__im__462);
#line 956
c_rt_lib0clear(&___nl__im__463);
#line 956
//clear ___nl__bool__464;
#line 956
c_rt_lib0clear(&___nl__im__465);
#line 956
c_rt_lib0clear(&___nl__im__466);
#line 956
c_rt_lib0clear(&___nl__im__467);
#line 956
c_rt_lib0clear(&___nl__im__481);
#line 956
//clear ___nl__bool__487;
#line 956
c_rt_lib0clear(&___nl__im__493);
#line 956
c_rt_lib0clear(&___nl__im__494);
#line 956
c_rt_lib0clear(&___nl__im__495);
#line 956
//clear ___nl__bool__496;
#line 956
c_rt_lib0clear(&___nl__im__497);
#line 956
c_rt_lib0clear(&___nl__im__498);
#line 956
c_rt_lib0clear(&___nl__im__499);
#line 956
c_rt_lib0clear(&___nl__im__527);
#line 957
goto label_1881;
#line 957
label_1401:
;
#line 957
c_rt_lib0move(&___nl__im__529, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(250)));
#line 957
___nl__int__528 = getIntFromImm(___nl__im__529);
#line 958
c_rt_lib0move(&___nl__im__535,___get_global_string_const(584));
#line 958
c_rt_lib0move(&___nl__string__536, c_rt_lib0int_to_string(___nl__int__528));
#line 958
c_rt_lib0move(&___nl__im__534, c_rt_lib0concat_new(___nl__im__535, ___nl__string__536));
#line 958
c_rt_lib0clear(&___nl__im__535);
#line 958
c_rt_lib0clear(&___nl__string__536);
#line 958
c_rt_lib0move(&___nl__im__537,___get_global_string_const(530));
#line 958
c_rt_lib0move(&___nl__im__533, c_rt_lib0concat_new(___nl__im__534, ___nl__im__537));
#line 958
c_rt_lib0clear(&___nl__im__534);
#line 958
c_rt_lib0clear(&___nl__im__537);
#line 958
c_rt_lib0move(&___nl__im__538, string0lf());
#line 958
c_rt_lib0move(&___nl__im__532, c_rt_lib0concat_new(___nl__im__533, ___nl__im__538));
#line 958
c_rt_lib0clear(&___nl__im__533);
#line 958
c_rt_lib0clear(&___nl__im__538);
#line 958
c_rt_lib0move(&___nl__im__539,___get_global_string_const(442));
#line 958
c_rt_lib0move(&___nl__im__531, c_rt_lib0concat_new(___nl__im__532, ___nl__im__539));
#line 958
c_rt_lib0clear(&___nl__im__532);
#line 958
c_rt_lib0clear(&___nl__im__539);
#line 958
c_rt_lib0move(&___nl__im__540, string0lf());
#line 958
c_rt_lib0move(&___nl__im__530, c_rt_lib0concat_new(___nl__im__531, ___nl__im__540));
#line 958
c_rt_lib0clear(&___nl__im__531);
#line 958
c_rt_lib0clear(&___nl__im__540);
#line 958
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__530));
#line 958
c_rt_lib0clear(&___nl__im__530);
#line 959
c_rt_lib0clear(&___nl__im__1);
#line 959
c_rt_lib0clear(&___nl__im__2);
#line 959
//clear ___nl__bool__13;
#line 959
c_rt_lib0clear(&___nl__im__14);
#line 959
//clear ___nl__bool__15;
#line 959
c_rt_lib0clear(&___nl__im__16);
#line 959
c_rt_lib0clear(&___nl__im__17);
#line 959
c_rt_lib0clear(&___nl__im__18);
#line 959
c_rt_lib0clear(&___nl__im__70);
#line 959
c_rt_lib0clear(&___nl__im__71);
#line 959
c_rt_lib0clear(&___nl__im__114);
#line 959
c_rt_lib0clear(&___nl__im__115);
#line 959
c_rt_lib0clear(&___nl__im__116);
#line 959
c_rt_lib0clear(&___nl__im__117);
#line 959
c_rt_lib0clear(&___nl__im__118);
#line 959
c_rt_lib0clear(&___nl__im__123);
#line 959
c_rt_lib0clear(&___nl__im__124);
#line 959
c_rt_lib0clear(&___nl__im__125);
#line 959
c_rt_lib0clear(&___nl__im__126);
#line 959
c_rt_lib0clear(&___nl__im__127);
#line 959
c_rt_lib0clear(&___nl__im__130);
#line 959
c_rt_lib0clear(&___nl__im__148);
#line 959
c_rt_lib0clear(&___nl__im__149);
#line 959
c_rt_lib0clear(&___nl__im__150);
#line 959
c_rt_lib0clear(&___nl__im__151);
#line 959
c_rt_lib0clear(&___nl__im__184);
#line 959
c_rt_lib0clear(&___nl__im__185);
#line 959
c_rt_lib0clear(&___nl__im__228);
#line 959
c_rt_lib0clear(&___nl__im__229);
#line 959
//clear ___nl__bool__230;
#line 959
c_rt_lib0clear(&___nl__im__231);
#line 959
c_rt_lib0clear(&___nl__im__232);
#line 959
c_rt_lib0clear(&___nl__im__233);
#line 959
c_rt_lib0clear(&___nl__im__240);
#line 959
c_rt_lib0clear(&___nl__im__241);
#line 959
c_rt_lib0clear(&___nl__im__247);
#line 959
c_rt_lib0clear(&___nl__im__248);
#line 959
c_rt_lib0clear(&___nl__im__251);
#line 959
c_rt_lib0clear(&___nl__im__252);
#line 959
c_rt_lib0clear(&___nl__im__256);
#line 959
//clear ___nl__bool__258;
#line 959
c_rt_lib0clear(&___nl__im__259);
#line 959
c_rt_lib0clear(&___nl__im__296);
#line 959
c_rt_lib0clear(&___nl__im__297);
#line 959
c_rt_lib0clear(&___nl__im__298);
#line 959
c_rt_lib0clear(&___nl__im__299);
#line 959
c_rt_lib0clear(&___nl__im__300);
#line 959
c_rt_lib0clear(&___nl__im__301);
#line 959
c_rt_lib0clear(&___nl__im__302);
#line 959
c_rt_lib0clear(&___nl__im__303);
#line 959
c_rt_lib0clear(&___nl__im__304);
#line 959
c_rt_lib0clear(&___nl__im__305);
#line 959
c_rt_lib0clear(&___nl__im__306);
#line 959
c_rt_lib0clear(&___nl__im__307);
#line 959
c_rt_lib0clear(&___nl__im__308);
#line 959
c_rt_lib0clear(&___nl__im__309);
#line 959
c_rt_lib0clear(&___nl__im__310);
#line 959
c_rt_lib0clear(&___nl__im__319);
#line 959
c_rt_lib0clear(&___nl__im__320);
#line 959
c_rt_lib0clear(&___nl__im__330);
#line 959
c_rt_lib0clear(&___nl__im__331);
#line 959
c_rt_lib0clear(&___nl__im__372);
#line 959
c_rt_lib0clear(&___nl__im__373);
#line 959
c_rt_lib0clear(&___nl__im__374);
#line 959
c_rt_lib0clear(&___nl__im__411);
#line 959
c_rt_lib0clear(&___nl__im__412);
#line 959
c_rt_lib0clear(&___nl__im__413);
#line 959
c_rt_lib0clear(&___nl__im__414);
#line 959
//clear ___nl__bool__416;
#line 959
c_rt_lib0clear(&___nl__im__417);
#line 959
c_rt_lib0clear(&___nl__im__446);
#line 959
c_rt_lib0clear(&___nl__im__447);
#line 959
c_rt_lib0clear(&___nl__im__457);
#line 959
c_rt_lib0clear(&___nl__im__458);
#line 959
//clear ___nl__int__528;
#line 959
c_rt_lib0clear(&___nl__im__529);
#line 959
return NULL;
#line 960
goto label_1881;
#line 960
label_1505:
;
#line 960
c_rt_lib0move(&___nl__im__542, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(251)));
#line 960
c_rt_lib0copy(&___nl__im__541, ___nl__im__542);
#line 961
c_rt_lib0move(&___nl__im__543,___get_global_string_const(585));
#line 961
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__543));
#line 961
c_rt_lib0clear(&___nl__im__543);
#line 962
c_rt_lib0move(&___nl__im__545, c_rt_lib0hash_get_value_dec(___nl__im__541, ___get_global_string_const(73)));
#line 962
c_rt_lib0move(&___nl__im__544, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__545));
#line 962
c_rt_lib0clear(&___nl__im__545);
#line 962
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__544));
#line 962
c_rt_lib0clear(&___nl__im__544);
#line 963
c_rt_lib0move(&___nl__im__549,___get_global_string_const(586));
#line 963
c_rt_lib0move(&___nl__im__551, c_rt_lib0hash_get_value_dec(___nl__im__541, ___get_global_string_const(224)));
#line 963
___nl__int__550 = getIntFromImm(___nl__im__551);
#line 963
c_rt_lib0clear(&___nl__im__551);
#line 963
c_rt_lib0move(&___nl__string__552, c_rt_lib0int_to_string(___nl__int__550));
#line 963
c_rt_lib0move(&___nl__im__548, c_rt_lib0concat_new(___nl__im__549, ___nl__string__552));
#line 963
c_rt_lib0clear(&___nl__im__549);
#line 963
//clear ___nl__int__550;
#line 963
c_rt_lib0clear(&___nl__string__552);
#line 963
c_rt_lib0move(&___nl__im__553,___get_global_string_const(587));
#line 963
c_rt_lib0move(&___nl__im__547, c_rt_lib0concat_new(___nl__im__548, ___nl__im__553));
#line 963
c_rt_lib0clear(&___nl__im__548);
#line 963
c_rt_lib0clear(&___nl__im__553);
#line 963
c_rt_lib0move(&___nl__im__554, string0lf());
#line 963
c_rt_lib0move(&___nl__im__546, c_rt_lib0concat_new(___nl__im__547, ___nl__im__554));
#line 963
c_rt_lib0clear(&___nl__im__547);
#line 963
c_rt_lib0clear(&___nl__im__554);
#line 963
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__546));
#line 963
c_rt_lib0clear(&___nl__im__546);
#line 964
c_rt_lib0clear(&___nl__im__1);
#line 964
c_rt_lib0clear(&___nl__im__2);
#line 964
//clear ___nl__bool__13;
#line 964
c_rt_lib0clear(&___nl__im__14);
#line 964
//clear ___nl__bool__15;
#line 964
c_rt_lib0clear(&___nl__im__16);
#line 964
c_rt_lib0clear(&___nl__im__17);
#line 964
c_rt_lib0clear(&___nl__im__18);
#line 964
c_rt_lib0clear(&___nl__im__70);
#line 964
c_rt_lib0clear(&___nl__im__71);
#line 964
c_rt_lib0clear(&___nl__im__114);
#line 964
c_rt_lib0clear(&___nl__im__115);
#line 964
c_rt_lib0clear(&___nl__im__116);
#line 964
c_rt_lib0clear(&___nl__im__117);
#line 964
c_rt_lib0clear(&___nl__im__118);
#line 964
c_rt_lib0clear(&___nl__im__123);
#line 964
c_rt_lib0clear(&___nl__im__124);
#line 964
c_rt_lib0clear(&___nl__im__125);
#line 964
c_rt_lib0clear(&___nl__im__126);
#line 964
c_rt_lib0clear(&___nl__im__127);
#line 964
c_rt_lib0clear(&___nl__im__130);
#line 964
c_rt_lib0clear(&___nl__im__148);
#line 964
c_rt_lib0clear(&___nl__im__149);
#line 964
c_rt_lib0clear(&___nl__im__150);
#line 964
c_rt_lib0clear(&___nl__im__151);
#line 964
c_rt_lib0clear(&___nl__im__184);
#line 964
c_rt_lib0clear(&___nl__im__185);
#line 964
c_rt_lib0clear(&___nl__im__228);
#line 964
c_rt_lib0clear(&___nl__im__229);
#line 964
//clear ___nl__bool__230;
#line 964
c_rt_lib0clear(&___nl__im__231);
#line 964
c_rt_lib0clear(&___nl__im__232);
#line 964
c_rt_lib0clear(&___nl__im__233);
#line 964
c_rt_lib0clear(&___nl__im__240);
#line 964
c_rt_lib0clear(&___nl__im__241);
#line 964
c_rt_lib0clear(&___nl__im__247);
#line 964
c_rt_lib0clear(&___nl__im__248);
#line 964
c_rt_lib0clear(&___nl__im__251);
#line 964
c_rt_lib0clear(&___nl__im__252);
#line 964
c_rt_lib0clear(&___nl__im__256);
#line 964
//clear ___nl__bool__258;
#line 964
c_rt_lib0clear(&___nl__im__259);
#line 964
c_rt_lib0clear(&___nl__im__296);
#line 964
c_rt_lib0clear(&___nl__im__297);
#line 964
c_rt_lib0clear(&___nl__im__298);
#line 964
c_rt_lib0clear(&___nl__im__299);
#line 964
c_rt_lib0clear(&___nl__im__300);
#line 964
c_rt_lib0clear(&___nl__im__301);
#line 964
c_rt_lib0clear(&___nl__im__302);
#line 964
c_rt_lib0clear(&___nl__im__303);
#line 964
c_rt_lib0clear(&___nl__im__304);
#line 964
c_rt_lib0clear(&___nl__im__305);
#line 964
c_rt_lib0clear(&___nl__im__306);
#line 964
c_rt_lib0clear(&___nl__im__307);
#line 964
c_rt_lib0clear(&___nl__im__308);
#line 964
c_rt_lib0clear(&___nl__im__309);
#line 964
c_rt_lib0clear(&___nl__im__310);
#line 964
c_rt_lib0clear(&___nl__im__319);
#line 964
c_rt_lib0clear(&___nl__im__320);
#line 964
c_rt_lib0clear(&___nl__im__330);
#line 964
c_rt_lib0clear(&___nl__im__331);
#line 964
c_rt_lib0clear(&___nl__im__372);
#line 964
c_rt_lib0clear(&___nl__im__373);
#line 964
c_rt_lib0clear(&___nl__im__374);
#line 964
c_rt_lib0clear(&___nl__im__411);
#line 964
c_rt_lib0clear(&___nl__im__412);
#line 964
c_rt_lib0clear(&___nl__im__413);
#line 964
c_rt_lib0clear(&___nl__im__414);
#line 964
//clear ___nl__bool__416;
#line 964
c_rt_lib0clear(&___nl__im__417);
#line 964
c_rt_lib0clear(&___nl__im__446);
#line 964
c_rt_lib0clear(&___nl__im__447);
#line 964
c_rt_lib0clear(&___nl__im__457);
#line 964
c_rt_lib0clear(&___nl__im__458);
#line 964
//clear ___nl__int__528;
#line 964
c_rt_lib0clear(&___nl__im__529);
#line 964
c_rt_lib0clear(&___nl__im__541);
#line 964
c_rt_lib0clear(&___nl__im__542);
#line 964
return NULL;
#line 965
goto label_1881;
#line 965
label_1615:
;
#line 965
c_rt_lib0move(&___nl__im__556, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(252)));
#line 965
___nl__int__555 = getIntFromImm(___nl__im__556);
#line 966
c_rt_lib0move(&___nl__im__558,___get_global_string_const(588));
#line 966
c_rt_lib0move(&___nl__string__559, c_rt_lib0int_to_string(___nl__int__555));
#line 966
c_rt_lib0move(&___nl__im__557, c_rt_lib0concat_new(___nl__im__558, ___nl__string__559));
#line 966
c_rt_lib0clear(&___nl__im__558);
#line 966
c_rt_lib0clear(&___nl__string__559);
#line 966
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__557));
#line 966
c_rt_lib0clear(&___nl__im__557);
#line 967
goto label_1881;
#line 967
label_1626:
;
#line 967
c_rt_lib0move(&___nl__im__561, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(253)));
#line 967
c_rt_lib0copy(&___nl__im__560, ___nl__im__561);
#line 968
c_rt_lib0move(&___nl__im__562, c_rt_lib0hash_get_value_dec(___nl__im__560, ___get_global_string_const(206)));
#line 968
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(131));
#line 968
if(___nl__bool__563){ goto label_1649;}
#line 970
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(405));
#line 970
if(___nl__bool__563){ goto label_1660;}
#line 972
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(33));
#line 972
if(___nl__bool__563){ goto label_1669;}
#line 974
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(406));
#line 974
if(___nl__bool__563){ goto label_1678;}
#line 976
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(559));
#line 976
if(___nl__bool__563){ goto label_1689;}
#line 978
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(127));
#line 978
if(___nl__bool__563){ goto label_1702;}
#line 980
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(563));
#line 980
if(___nl__bool__563){ goto label_1719;}
#line 982
___nl__bool__563 = c_rt_lib0priv_is(___nl__im__562, ___get_global_string_const(128));
#line 982
if(___nl__bool__563){ goto label_1732;}
#line 982
c_rt_lib0move(&___nl__im__564,___get_global_string_const(15));
#line 982
c_rt_lib0move(&___nl__im__564, c_rt_lib0array_mk(2, ___nl__im__564, ___nl__im__562));
#line 982
nl_die_arg(___nl__im__564);
#line 968
label_1649:
;
#line 969
c_rt_lib0move(&___nl__im__566,___get_global_string_const(253));
#line 969
c_rt_lib0move(&___nl__im__568, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__560));
#line 969
c_rt_lib0move(&___nl__im__567, c_rt_lib0array_mk(1, ___nl__im__568));
#line 969
c_rt_lib0clear(&___nl__im__568);
#line 969
c_rt_lib0move(&___nl__im__565, generator_c_priv0get_fun_lib(___nl__im__566, ___nl__im__567));
#line 969
c_rt_lib0clear(&___nl__im__566);
#line 969
c_rt_lib0clear(&___nl__im__567);
#line 969
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__565));
#line 969
c_rt_lib0clear(&___nl__im__565);
#line 970
goto label_1745;
#line 970
label_1660:
;
#line 971
c_rt_lib0move(&___nl__im__570,___get_global_string_const(589));
#line 971
c_rt_lib0move(&___nl__im__571, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__560));
#line 971
c_rt_lib0move(&___nl__im__569, c_rt_lib0concat_new(___nl__im__570, ___nl__im__571));
#line 971
c_rt_lib0clear(&___nl__im__570);
#line 971
c_rt_lib0clear(&___nl__im__571);
#line 971
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__569));
#line 971
c_rt_lib0clear(&___nl__im__569);
#line 972
goto label_1745;
#line 972
label_1669:
;
#line 973
c_rt_lib0move(&___nl__im__573,___get_global_string_const(589));
#line 973
c_rt_lib0move(&___nl__im__574, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__560));
#line 973
c_rt_lib0move(&___nl__im__572, c_rt_lib0concat_new(___nl__im__573, ___nl__im__574));
#line 973
c_rt_lib0clear(&___nl__im__573);
#line 973
c_rt_lib0clear(&___nl__im__574);
#line 973
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__572));
#line 973
c_rt_lib0clear(&___nl__im__572);
#line 974
goto label_1745;
#line 974
label_1678:
;
#line 975
c_rt_lib0move(&___nl__im__576,___get_global_string_const(253));
#line 975
c_rt_lib0move(&___nl__im__578, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__560));
#line 975
c_rt_lib0move(&___nl__im__577, c_rt_lib0array_mk(1, ___nl__im__578));
#line 975
c_rt_lib0clear(&___nl__im__578);
#line 975
c_rt_lib0move(&___nl__im__575, generator_c_priv0get_fun_lib(___nl__im__576, ___nl__im__577));
#line 975
c_rt_lib0clear(&___nl__im__576);
#line 975
c_rt_lib0clear(&___nl__im__577);
#line 975
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__575));
#line 975
c_rt_lib0clear(&___nl__im__575);
#line 976
goto label_1745;
#line 976
label_1689:
;
#line 976
c_rt_lib0move(&___nl__im__580, c_rt_lib0priv_as(___nl__im__562, ___get_global_string_const(559)));
#line 976
c_rt_lib0copy(&___nl__im__579, ___nl__im__580);
#line 977
___nl__im_ptr__583 = &((*___ref___rec__0).mod_name0field);
#line 977
c_rt_lib0copy(&___nl__im__582, (*___nl__im_ptr__583));
#line 977
___nl__im_ptr__583 = NULL;
#line 977
c_rt_lib0move(&___nl__im__584, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__560));
#line 977
c_rt_lib0move(&___nl__im__581, generator_c_priv0get_clean_fun_call(___nl__im__579, ___nl__im__582, ___nl__im__584, ___nl__im__2));
#line 977
c_rt_lib0clear(&___nl__im__582);
#line 977
c_rt_lib0clear(&___nl__im__584);
#line 977
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__581));
#line 977
c_rt_lib0clear(&___nl__im__581);
#line 978
goto label_1745;
#line 978
label_1702:
;
#line 978
c_rt_lib0move(&___nl__im__586, c_rt_lib0priv_as(___nl__im__562, ___get_global_string_const(127)));
#line 978
c_rt_lib0copy(&___nl__im__585, ___nl__im__586);
#line 979
c_rt_lib0move(&___nl__im__588, string0lf());
#line 979
___nl__im_ptr__591 = &((*___ref___rec__0).mod_name0field);
#line 979
c_rt_lib0copy(&___nl__im__590, (*___nl__im_ptr__591));
#line 979
___nl__im_ptr__591 = NULL;
#line 979
c_rt_lib0move(&___nl__im__592, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__560));
#line 979
c_rt_lib0move(&___nl__im__589, generator_c_priv0get_clean_fun_call(___nl__im__585, ___nl__im__590, ___nl__im__592, ___nl__im__2));
#line 979
c_rt_lib0clear(&___nl__im__590);
#line 979
c_rt_lib0clear(&___nl__im__592);
#line 979
c_rt_lib0move(&___nl__im__587, c_rt_lib0concat_new(___nl__im__588, ___nl__im__589));
#line 979
c_rt_lib0clear(&___nl__im__588);
#line 979
c_rt_lib0clear(&___nl__im__589);
#line 979
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__587));
#line 979
c_rt_lib0clear(&___nl__im__587);
#line 980
goto label_1745;
#line 980
label_1719:
;
#line 980
c_rt_lib0move(&___nl__im__594, c_rt_lib0priv_as(___nl__im__562, ___get_global_string_const(563)));
#line 980
c_rt_lib0copy(&___nl__im__593, ___nl__im__594);
#line 981
___nl__im_ptr__597 = &((*___ref___rec__0).mod_name0field);
#line 981
c_rt_lib0copy(&___nl__im__596, (*___nl__im_ptr__597));
#line 981
___nl__im_ptr__597 = NULL;
#line 981
c_rt_lib0move(&___nl__im__598, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__560));
#line 981
c_rt_lib0move(&___nl__im__595, generator_c_priv0get_clean_fun_call(___nl__im__593, ___nl__im__596, ___nl__im__598, ___nl__im__2));
#line 981
c_rt_lib0clear(&___nl__im__596);
#line 981
c_rt_lib0clear(&___nl__im__598);
#line 981
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__595));
#line 981
c_rt_lib0clear(&___nl__im__595);
#line 982
goto label_1745;
#line 982
label_1732:
;
#line 982
c_rt_lib0move(&___nl__im__600, c_rt_lib0priv_as(___nl__im__562, ___get_global_string_const(128)));
#line 982
c_rt_lib0copy(&___nl__im__599, ___nl__im__600);
#line 983
___nl__im_ptr__603 = &((*___ref___rec__0).mod_name0field);
#line 983
c_rt_lib0copy(&___nl__im__602, (*___nl__im_ptr__603));
#line 983
___nl__im_ptr__603 = NULL;
#line 983
c_rt_lib0move(&___nl__im__604, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__560));
#line 983
c_rt_lib0move(&___nl__im__601, generator_c_priv0get_clean_fun_call(___nl__im__599, ___nl__im__602, ___nl__im__604, ___nl__im__2));
#line 983
c_rt_lib0clear(&___nl__im__602);
#line 983
c_rt_lib0clear(&___nl__im__604);
#line 983
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__601));
#line 983
c_rt_lib0clear(&___nl__im__601);
#line 984
goto label_1745;
#line 984
label_1745:
;
#line 985
goto label_1881;
#line 985
label_1747:
;
#line 985
c_rt_lib0move(&___nl__im__606, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(254)));
#line 985
c_rt_lib0copy(&___nl__im__605, ___nl__im__606);
#line 986
goto label_1881;
#line 986
label_1751:
;
#line 986
c_rt_lib0move(&___nl__im__608, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(255)));
#line 986
c_rt_lib0copy(&___nl__im__607, ___nl__im__608);
#line 987
c_rt_lib0delete(generator_c_priv0print_use_field(___ref___rec__0, ___nl__im__607));
#line 988
goto label_1881;
#line 988
label_1756:
;
#line 988
c_rt_lib0move(&___nl__im__610, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(256)));
#line 988
c_rt_lib0copy(&___nl__im__609, ___nl__im__610);
#line 989
c_rt_lib0move(&___nl__im__613, c_rt_lib0hash_get_value_dec(___nl__im__609, ___get_global_string_const(362)));
#line 989
c_rt_lib0move(&___nl__im__612, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__613));
#line 989
c_rt_lib0clear(&___nl__im__613);
#line 989
c_rt_lib0move(&___nl__im__614,___get_global_string_const(590));
#line 989
c_rt_lib0move(&___nl__im__611, c_rt_lib0concat_new(___nl__im__612, ___nl__im__614));
#line 989
c_rt_lib0clear(&___nl__im__612);
#line 989
c_rt_lib0clear(&___nl__im__614);
#line 989
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__611));
#line 989
c_rt_lib0clear(&___nl__im__611);
#line 990
goto label_1881;
#line 990
label_1769:
;
#line 990
c_rt_lib0move(&___nl__im__616, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(257)));
#line 990
c_rt_lib0copy(&___nl__im__615, ___nl__im__616);
#line 991
c_rt_lib0delete(generator_c_priv0print_use_index(___ref___rec__0, ___nl__im__615));
#line 992
goto label_1881;
#line 992
label_1774:
;
#line 992
c_rt_lib0move(&___nl__im__618, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(258)));
#line 992
c_rt_lib0copy(&___nl__im__617, ___nl__im__618);
#line 993
c_rt_lib0move(&___nl__im__621, c_rt_lib0hash_get_value_dec(___nl__im__617, ___get_global_string_const(362)));
#line 993
c_rt_lib0move(&___nl__im__620, c_rt_lib0hash_get_value_dec(___nl__im__621, ___get_global_string_const(206)));
#line 993
c_rt_lib0clear(&___nl__im__621);
#line 993
___nl__bool__619 = c_rt_lib0priv_is(___nl__im__620, ___get_global_string_const(131));
#line 993
c_rt_lib0clear(&___nl__im__620);
#line 993
___nl__bool__619 = !___nl__bool__619;
#line 993
if(___nl__bool__619){ goto label_1794;}
#line 994
c_rt_lib0move(&___nl__im__623,___get_global_string_const(591));
#line 994
c_rt_lib0move(&___nl__im__625, c_rt_lib0hash_get_value_dec(___nl__im__617, ___get_global_string_const(362)));
#line 994
c_rt_lib0move(&___nl__im__624, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__625));
#line 994
c_rt_lib0clear(&___nl__im__625);
#line 994
c_rt_lib0move(&___nl__im__622, c_rt_lib0concat_new(___nl__im__623, ___nl__im__624));
#line 994
c_rt_lib0clear(&___nl__im__623);
#line 994
c_rt_lib0clear(&___nl__im__624);
#line 994
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__622));
#line 994
c_rt_lib0clear(&___nl__im__622);
#line 995
goto label_1805;
#line 995
label_1794:
;
#line 996
c_rt_lib0move(&___nl__im__628, c_rt_lib0hash_get_value_dec(___nl__im__617, ___get_global_string_const(362)));
#line 996
c_rt_lib0move(&___nl__im__627, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__628));
#line 996
c_rt_lib0clear(&___nl__im__628);
#line 996
c_rt_lib0move(&___nl__im__629,___get_global_string_const(590));
#line 996
c_rt_lib0move(&___nl__im__626, c_rt_lib0concat_new(___nl__im__627, ___nl__im__629));
#line 996
c_rt_lib0clear(&___nl__im__627);
#line 996
c_rt_lib0clear(&___nl__im__629);
#line 996
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__626));
#line 996
c_rt_lib0clear(&___nl__im__626);
#line 997
goto label_1805;
#line 997
label_1805:
;
#line 997
//clear ___nl__bool__619;
#line 998
goto label_1881;
#line 998
label_1808:
;
#line 998
c_rt_lib0move(&___nl__im__631, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(259)));
#line 998
c_rt_lib0copy(&___nl__im__630, ___nl__im__631);
#line 999
c_rt_lib0delete(generator_c_priv0print_use_hash_index(___ref___rec__0, ___nl__im__630));
#line 1000
goto label_1881;
#line 1000
label_1813:
;
#line 1000
c_rt_lib0move(&___nl__im__633, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(260)));
#line 1000
c_rt_lib0copy(&___nl__im__632, ___nl__im__633);
#line 1001
c_rt_lib0move(&___nl__im__636, c_rt_lib0hash_get_value_dec(___nl__im__632, ___get_global_string_const(362)));
#line 1001
c_rt_lib0move(&___nl__im__635, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__636));
#line 1001
c_rt_lib0clear(&___nl__im__636);
#line 1001
c_rt_lib0move(&___nl__im__637,___get_global_string_const(590));
#line 1001
c_rt_lib0move(&___nl__im__634, c_rt_lib0concat_new(___nl__im__635, ___nl__im__637));
#line 1001
c_rt_lib0clear(&___nl__im__635);
#line 1001
c_rt_lib0clear(&___nl__im__637);
#line 1001
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__634));
#line 1001
c_rt_lib0clear(&___nl__im__634);
#line 1002
goto label_1881;
#line 1002
label_1826:
;
#line 1002
c_rt_lib0move(&___nl__im__639, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(261)));
#line 1002
c_rt_lib0copy(&___nl__im__638, ___nl__im__639);
#line 1003
c_rt_lib0delete(generator_c_priv0print_use_variant(___ref___rec__0, ___nl__im__638));
#line 1004
goto label_1881;
#line 1004
label_1831:
;
#line 1004
c_rt_lib0move(&___nl__im__641, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(262)));
#line 1004
c_rt_lib0copy(&___nl__im__640, ___nl__im__641);
#line 1005
c_rt_lib0move(&___nl__im__644, c_rt_lib0hash_get_value_dec(___nl__im__640, ___get_global_string_const(362)));
#line 1005
c_rt_lib0move(&___nl__im__643, c_rt_lib0hash_get_value_dec(___nl__im__644, ___get_global_string_const(206)));
#line 1005
c_rt_lib0clear(&___nl__im__644);
#line 1005
___nl__bool__642 = c_rt_lib0priv_is(___nl__im__643, ___get_global_string_const(131));
#line 1005
c_rt_lib0clear(&___nl__im__643);
#line 1005
if(___nl__bool__642){ goto label_1845;}
#line 1005
c_rt_lib0move(&___nl__im__646, c_rt_lib0hash_get_value_dec(___nl__im__640, ___get_global_string_const(362)));
#line 1005
c_rt_lib0move(&___nl__im__645, c_rt_lib0hash_get_value_dec(___nl__im__646, ___get_global_string_const(353)));
#line 1005
c_rt_lib0clear(&___nl__im__646);
#line 1005
___nl__bool__642 = c_rt_lib0priv_is(___nl__im__645, ___get_global_string_const(422));
#line 1005
c_rt_lib0clear(&___nl__im__645);
#line 1005
label_1845:
;
#line 1005
___nl__bool__642 = !___nl__bool__642;
#line 1005
if(___nl__bool__642){ goto label_1858;}
#line 1006
c_rt_lib0move(&___nl__im__649, c_rt_lib0hash_get_value_dec(___nl__im__640, ___get_global_string_const(362)));
#line 1006
c_rt_lib0move(&___nl__im__648, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__649));
#line 1006
c_rt_lib0clear(&___nl__im__649);
#line 1006
c_rt_lib0move(&___nl__im__650,___get_global_string_const(590));
#line 1006
c_rt_lib0move(&___nl__im__647, c_rt_lib0concat_new(___nl__im__648, ___nl__im__650));
#line 1006
c_rt_lib0clear(&___nl__im__648);
#line 1006
c_rt_lib0clear(&___nl__im__650);
#line 1006
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__647));
#line 1006
c_rt_lib0clear(&___nl__im__647);
#line 1007
goto label_1858;
#line 1007
label_1858:
;
#line 1007
//clear ___nl__bool__642;
#line 1008
goto label_1881;
#line 1008
label_1861:
;
#line 1008
c_rt_lib0move(&___nl__im__652, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(263)));
#line 1008
c_rt_lib0copy(&___nl__im__651, ___nl__im__652);
#line 1009
c_rt_lib0delete(generator_c_priv0print_hash_init_iter(___ref___rec__0, ___nl__im__651));
#line 1010
goto label_1881;
#line 1010
label_1866:
;
#line 1010
c_rt_lib0move(&___nl__im__654, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(264)));
#line 1010
c_rt_lib0copy(&___nl__im__653, ___nl__im__654);
#line 1011
c_rt_lib0delete(generator_c_priv0print_hash_next_iter(___ref___rec__0, ___nl__im__653));
#line 1012
goto label_1881;
#line 1012
label_1871:
;
#line 1012
c_rt_lib0move(&___nl__im__656, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(265)));
#line 1012
c_rt_lib0copy(&___nl__im__655, ___nl__im__656);
#line 1013
c_rt_lib0delete(generator_c_priv0print_hash_get_key_iter(___ref___rec__0, ___nl__im__655));
#line 1014
goto label_1881;
#line 1014
label_1876:
;
#line 1014
c_rt_lib0move(&___nl__im__658, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(266)));
#line 1014
c_rt_lib0copy(&___nl__im__657, ___nl__im__658);
#line 1015
c_rt_lib0delete(generator_c_priv0print_hash_is_end(___ref___rec__0, ___nl__im__657));
#line 1016
goto label_1881;
#line 1016
label_1881:
;
#line 1017
___nl__bool__659 = ___nl__bool__13;
#line 1017
___nl__bool__659 = !___nl__bool__659;
#line 1017
___nl__bool__659 = !___nl__bool__659;
#line 1017
if(___nl__bool__659){ goto label_1894;}
#line 1017
c_rt_lib0move(&___nl__im__661,___get_global_string_const(442));
#line 1017
c_rt_lib0move(&___nl__im__662, string0lf());
#line 1017
c_rt_lib0move(&___nl__im__660, c_rt_lib0concat_new(___nl__im__661, ___nl__im__662));
#line 1017
c_rt_lib0clear(&___nl__im__661);
#line 1017
c_rt_lib0clear(&___nl__im__662);
#line 1017
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__660));
#line 1017
c_rt_lib0clear(&___nl__im__660);
#line 1017
goto label_1894;
#line 1017
label_1894:
;
#line 1017
//clear ___nl__bool__659;
#line 1017
c_rt_lib0clear(&___nl__im__1);
#line 1017
c_rt_lib0clear(&___nl__im__2);
#line 1017
//clear ___nl__bool__13;
#line 1017
c_rt_lib0clear(&___nl__im__14);
#line 1017
//clear ___nl__bool__15;
#line 1017
c_rt_lib0clear(&___nl__im__16);
#line 1017
c_rt_lib0clear(&___nl__im__17);
#line 1017
c_rt_lib0clear(&___nl__im__18);
#line 1017
c_rt_lib0clear(&___nl__im__70);
#line 1017
c_rt_lib0clear(&___nl__im__71);
#line 1017
c_rt_lib0clear(&___nl__im__114);
#line 1017
c_rt_lib0clear(&___nl__im__115);
#line 1017
c_rt_lib0clear(&___nl__im__116);
#line 1017
c_rt_lib0clear(&___nl__im__117);
#line 1017
c_rt_lib0clear(&___nl__im__118);
#line 1017
c_rt_lib0clear(&___nl__im__123);
#line 1017
c_rt_lib0clear(&___nl__im__124);
#line 1017
c_rt_lib0clear(&___nl__im__125);
#line 1017
c_rt_lib0clear(&___nl__im__126);
#line 1017
c_rt_lib0clear(&___nl__im__127);
#line 1017
c_rt_lib0clear(&___nl__im__130);
#line 1017
c_rt_lib0clear(&___nl__im__148);
#line 1017
c_rt_lib0clear(&___nl__im__149);
#line 1017
c_rt_lib0clear(&___nl__im__150);
#line 1017
c_rt_lib0clear(&___nl__im__151);
#line 1017
c_rt_lib0clear(&___nl__im__184);
#line 1017
c_rt_lib0clear(&___nl__im__185);
#line 1017
c_rt_lib0clear(&___nl__im__228);
#line 1017
c_rt_lib0clear(&___nl__im__229);
#line 1017
//clear ___nl__bool__230;
#line 1017
c_rt_lib0clear(&___nl__im__231);
#line 1017
c_rt_lib0clear(&___nl__im__232);
#line 1017
c_rt_lib0clear(&___nl__im__233);
#line 1017
c_rt_lib0clear(&___nl__im__240);
#line 1017
c_rt_lib0clear(&___nl__im__241);
#line 1017
c_rt_lib0clear(&___nl__im__247);
#line 1017
c_rt_lib0clear(&___nl__im__248);
#line 1017
c_rt_lib0clear(&___nl__im__251);
#line 1017
c_rt_lib0clear(&___nl__im__252);
#line 1017
c_rt_lib0clear(&___nl__im__256);
#line 1017
//clear ___nl__bool__258;
#line 1017
c_rt_lib0clear(&___nl__im__259);
#line 1017
c_rt_lib0clear(&___nl__im__296);
#line 1017
c_rt_lib0clear(&___nl__im__297);
#line 1017
c_rt_lib0clear(&___nl__im__298);
#line 1017
c_rt_lib0clear(&___nl__im__299);
#line 1017
c_rt_lib0clear(&___nl__im__300);
#line 1017
c_rt_lib0clear(&___nl__im__301);
#line 1017
c_rt_lib0clear(&___nl__im__302);
#line 1017
c_rt_lib0clear(&___nl__im__303);
#line 1017
c_rt_lib0clear(&___nl__im__304);
#line 1017
c_rt_lib0clear(&___nl__im__305);
#line 1017
c_rt_lib0clear(&___nl__im__306);
#line 1017
c_rt_lib0clear(&___nl__im__307);
#line 1017
c_rt_lib0clear(&___nl__im__308);
#line 1017
c_rt_lib0clear(&___nl__im__309);
#line 1017
c_rt_lib0clear(&___nl__im__310);
#line 1017
c_rt_lib0clear(&___nl__im__319);
#line 1017
c_rt_lib0clear(&___nl__im__320);
#line 1017
c_rt_lib0clear(&___nl__im__330);
#line 1017
c_rt_lib0clear(&___nl__im__331);
#line 1017
c_rt_lib0clear(&___nl__im__372);
#line 1017
c_rt_lib0clear(&___nl__im__373);
#line 1017
c_rt_lib0clear(&___nl__im__374);
#line 1017
c_rt_lib0clear(&___nl__im__411);
#line 1017
c_rt_lib0clear(&___nl__im__412);
#line 1017
c_rt_lib0clear(&___nl__im__413);
#line 1017
c_rt_lib0clear(&___nl__im__414);
#line 1017
//clear ___nl__bool__416;
#line 1017
c_rt_lib0clear(&___nl__im__417);
#line 1017
c_rt_lib0clear(&___nl__im__446);
#line 1017
c_rt_lib0clear(&___nl__im__447);
#line 1017
c_rt_lib0clear(&___nl__im__457);
#line 1017
c_rt_lib0clear(&___nl__im__458);
#line 1017
//clear ___nl__int__528;
#line 1017
c_rt_lib0clear(&___nl__im__529);
#line 1017
c_rt_lib0clear(&___nl__im__541);
#line 1017
c_rt_lib0clear(&___nl__im__542);
#line 1017
//clear ___nl__int__555;
#line 1017
c_rt_lib0clear(&___nl__im__556);
#line 1017
c_rt_lib0clear(&___nl__im__560);
#line 1017
c_rt_lib0clear(&___nl__im__561);
#line 1017
c_rt_lib0clear(&___nl__im__562);
#line 1017
//clear ___nl__bool__563;
#line 1017
c_rt_lib0clear(&___nl__im__564);
#line 1017
c_rt_lib0clear(&___nl__im__579);
#line 1017
c_rt_lib0clear(&___nl__im__580);
#line 1017
c_rt_lib0clear(&___nl__im__585);
#line 1017
c_rt_lib0clear(&___nl__im__586);
#line 1017
c_rt_lib0clear(&___nl__im__593);
#line 1017
c_rt_lib0clear(&___nl__im__594);
#line 1017
c_rt_lib0clear(&___nl__im__599);
#line 1017
c_rt_lib0clear(&___nl__im__600);
#line 1017
c_rt_lib0clear(&___nl__im__605);
#line 1017
c_rt_lib0clear(&___nl__im__606);
#line 1017
c_rt_lib0clear(&___nl__im__607);
#line 1017
c_rt_lib0clear(&___nl__im__608);
#line 1017
c_rt_lib0clear(&___nl__im__609);
#line 1017
c_rt_lib0clear(&___nl__im__610);
#line 1017
c_rt_lib0clear(&___nl__im__615);
#line 1017
c_rt_lib0clear(&___nl__im__616);
#line 1017
c_rt_lib0clear(&___nl__im__617);
#line 1017
c_rt_lib0clear(&___nl__im__618);
#line 1017
c_rt_lib0clear(&___nl__im__630);
#line 1017
c_rt_lib0clear(&___nl__im__631);
#line 1017
c_rt_lib0clear(&___nl__im__632);
#line 1017
c_rt_lib0clear(&___nl__im__633);
#line 1017
c_rt_lib0clear(&___nl__im__638);
#line 1017
c_rt_lib0clear(&___nl__im__639);
#line 1017
c_rt_lib0clear(&___nl__im__640);
#line 1017
c_rt_lib0clear(&___nl__im__641);
#line 1017
c_rt_lib0clear(&___nl__im__651);
#line 1017
c_rt_lib0clear(&___nl__im__652);
#line 1017
c_rt_lib0clear(&___nl__im__653);
#line 1017
c_rt_lib0clear(&___nl__im__654);
#line 1017
c_rt_lib0clear(&___nl__im__655);
#line 1017
c_rt_lib0clear(&___nl__im__656);
#line 1017
c_rt_lib0clear(&___nl__im__657);
#line 1017
c_rt_lib0clear(&___nl__im__658);
#line 1017
return NULL;

}

ImmT  generator_c_priv0print_declaration(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
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
#line 1023
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1023
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(131));
#line 1023
if(___nl__bool__5){ goto label_20;}
#line 1026
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(405));
#line 1026
if(___nl__bool__5){ goto label_24;}
#line 1029
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(33));
#line 1029
if(___nl__bool__5){ goto label_28;}
#line 1032
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(406));
#line 1032
if(___nl__bool__5){ goto label_32;}
#line 1035
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(559));
#line 1035
if(___nl__bool__5){ goto label_36;}
#line 1038
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(127));
#line 1038
if(___nl__bool__5){ goto label_42;}
#line 1045
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(563));
#line 1045
if(___nl__bool__5){ goto label_48;}
#line 1048
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(128));
#line 1048
if(___nl__bool__5){ goto label_54;}
#line 1048
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1048
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 1048
nl_die_arg(___nl__im__6);
#line 1023
label_20:
;
#line 1024
c_rt_lib0move(&___nl__im__2, generator_c_priv0im_t());
#line 1025
c_rt_lib0move(&___nl__im__3,___get_global_string_const(583));
#line 1026
goto label_60;
#line 1026
label_24:
;
#line 1027
c_rt_lib0move(&___nl__im__2, generator_c_priv0int_t());
#line 1028
c_rt_lib0move(&___nl__im__3,___get_global_string_const(20));
#line 1029
goto label_60;
#line 1029
label_28:
;
#line 1030
c_rt_lib0move(&___nl__im__2, generator_c_priv0bool_t());
#line 1031
c_rt_lib0move(&___nl__im__3,___get_global_string_const(572));
#line 1032
goto label_60;
#line 1032
label_32:
;
#line 1033
c_rt_lib0move(&___nl__im__2, generator_c_priv0im_t());
#line 1034
c_rt_lib0move(&___nl__im__3,___get_global_string_const(583));
#line 1035
goto label_60;
#line 1035
label_36:
;
#line 1035
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(559)));
#line 1035
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1036
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__7));
#line 1037
c_rt_lib0move(&___nl__im__3,___get_global_string_const(592));
#line 1038
goto label_60;
#line 1038
label_42:
;
#line 1038
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(127)));
#line 1038
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1039
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__9));
#line 1040
c_rt_lib0move(&___nl__im__3,___get_global_string_const(593));
#line 1045
goto label_60;
#line 1045
label_48:
;
#line 1045
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(563)));
#line 1045
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1046
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__11));
#line 1047
c_rt_lib0move(&___nl__im__3,___get_global_string_const(592));
#line 1048
goto label_60;
#line 1048
label_54:
;
#line 1048
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(128)));
#line 1048
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1049
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__13));
#line 1050
c_rt_lib0move(&___nl__im__3,___get_global_string_const(594));
#line 1056
goto label_60;
#line 1056
label_60:
;
#line 1057
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 1057
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(220));
#line 1057
if(___nl__bool__16){ goto label_69;}
#line 1058
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(422));
#line 1058
if(___nl__bool__16){ goto label_71;}
#line 1058
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 1058
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1058
nl_die_arg(___nl__im__17);
#line 1057
label_69:
;
#line 1058
goto label_77;
#line 1058
label_71:
;
#line 1059
c_rt_lib0move(&___nl__im__18,___get_global_string_const(375));
#line 1059
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 1059
c_rt_lib0clear(&___nl__im__18);
#line 1060
c_rt_lib0move(&___nl__im__3,___get_global_string_const(583));
#line 1061
goto label_77;
#line 1061
label_77:
;
#line 1062
c_rt_lib0move(&___nl__im__24,___get_global_string_const(469));
#line 1062
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__2, ___nl__im__24));
#line 1062
c_rt_lib0clear(&___nl__im__24);
#line 1062
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1062
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 1062
c_rt_lib0clear(&___nl__im__23);
#line 1062
c_rt_lib0clear(&___nl__im__25);
#line 1062
c_rt_lib0move(&___nl__im__26,___get_global_string_const(504));
#line 1062
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 1062
c_rt_lib0clear(&___nl__im__22);
#line 1062
c_rt_lib0clear(&___nl__im__26);
#line 1062
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__3));
#line 1062
c_rt_lib0clear(&___nl__im__21);
#line 1062
c_rt_lib0move(&___nl__im__27,___get_global_string_const(442));
#line 1062
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 1062
c_rt_lib0clear(&___nl__im__20);
#line 1062
c_rt_lib0clear(&___nl__im__27);
#line 1062
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__19));
#line 1062
c_rt_lib0clear(&___nl__im__19);
#line 1062
c_rt_lib0clear(&___nl__im__1);
#line 1062
c_rt_lib0clear(&___nl__im__2);
#line 1062
c_rt_lib0clear(&___nl__im__3);
#line 1062
c_rt_lib0clear(&___nl__im__4);
#line 1062
//clear ___nl__bool__5;
#line 1062
c_rt_lib0clear(&___nl__im__6);
#line 1062
c_rt_lib0clear(&___nl__im__7);
#line 1062
c_rt_lib0clear(&___nl__im__8);
#line 1062
c_rt_lib0clear(&___nl__im__9);
#line 1062
c_rt_lib0clear(&___nl__im__10);
#line 1062
c_rt_lib0clear(&___nl__im__11);
#line 1062
c_rt_lib0clear(&___nl__im__12);
#line 1062
c_rt_lib0clear(&___nl__im__13);
#line 1062
c_rt_lib0clear(&___nl__im__14);
#line 1062
c_rt_lib0clear(&___nl__im__15);
#line 1062
//clear ___nl__bool__16;
#line 1062
c_rt_lib0clear(&___nl__im__17);
#line 1062
return NULL;
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
#line 1066
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__2));
#line 1066
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 1066
c_rt_lib0clear(&___nl__im__4);
#line 1066
___nl__bool__3 = !___nl__bool__3;
#line 1066
if(___nl__bool__3){ goto label_10;}
#line 1066
c_rt_lib0clear(&___nl__im__1);
#line 1066
c_rt_lib0clear(&___nl__im__2);
#line 1066
//clear ___nl__bool__3;
#line 1066
return NULL;
#line 1066
goto label_10;
#line 1066
label_10:
;
#line 1066
//clear ___nl__bool__3;
#line 1067
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 1067
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(422));
#line 1067
c_rt_lib0clear(&___nl__im__7);
#line 1067
___nl__bool__6 = !___nl__bool__5;
#line 1067
if(___nl__bool__6){ goto label_20;}
#line 1067
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(353)));
#line 1067
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(422));
#line 1067
c_rt_lib0clear(&___nl__im__8);
#line 1067
label_20:
;
#line 1067
//clear ___nl__bool__6;
#line 1067
___nl__bool__5 = !___nl__bool__5;
#line 1067
if(___nl__bool__5){ goto label_40;}
#line 1068
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__2));
#line 1068
c_rt_lib0move(&___nl__im__12,___get_global_string_const(504));
#line 1068
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 1068
c_rt_lib0clear(&___nl__im__11);
#line 1068
c_rt_lib0clear(&___nl__im__12);
#line 1068
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1068
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 1068
c_rt_lib0clear(&___nl__im__10);
#line 1068
c_rt_lib0clear(&___nl__im__13);
#line 1068
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1068
c_rt_lib0clear(&___nl__im__9);
#line 1069
c_rt_lib0clear(&___nl__im__1);
#line 1069
c_rt_lib0clear(&___nl__im__2);
#line 1069
//clear ___nl__bool__5;
#line 1069
return NULL;
#line 1070
goto label_40;
#line 1070
label_40:
;
#line 1070
//clear ___nl__bool__5;
#line 1071
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(206)));
#line 1071
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(131));
#line 1071
if(___nl__bool__15){ goto label_62;}
#line 1073
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(405));
#line 1073
if(___nl__bool__15){ goto label_65;}
#line 1079
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(406));
#line 1079
if(___nl__bool__15){ goto label_103;}
#line 1081
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(33));
#line 1081
if(___nl__bool__15){ goto label_106;}
#line 1087
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(559));
#line 1087
if(___nl__bool__15){ goto label_144;}
#line 1093
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(127));
#line 1093
if(___nl__bool__15){ goto label_172;}
#line 1099
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(563));
#line 1099
if(___nl__bool__15){ goto label_200;}
#line 1101
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(128));
#line 1101
if(___nl__bool__15){ goto label_206;}
#line 1101
c_rt_lib0move(&___nl__im__16,___get_global_string_const(15));
#line 1101
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1101
nl_die_arg(___nl__im__16);
#line 1071
label_62:
;
#line 1072
c_rt_lib0delete(generator_c_priv0print_move_to_im(___ref___rec__0, ___nl__im__1, ___nl__im__2));
#line 1073
goto label_212;
#line 1073
label_65:
;
#line 1074
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1074
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(131));
#line 1074
c_rt_lib0clear(&___nl__im__18);
#line 1074
___nl__bool__17 = !___nl__bool__17;
#line 1074
if(___nl__bool__17){ goto label_87;}
#line 1075
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1075
c_rt_lib0move(&___nl__im__23,___get_global_string_const(595));
#line 1075
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1075
c_rt_lib0clear(&___nl__im__22);
#line 1075
c_rt_lib0clear(&___nl__im__23);
#line 1075
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1075
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__24));
#line 1075
c_rt_lib0clear(&___nl__im__21);
#line 1075
c_rt_lib0clear(&___nl__im__24);
#line 1075
c_rt_lib0move(&___nl__im__25,___get_global_string_const(322));
#line 1075
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__25));
#line 1075
c_rt_lib0clear(&___nl__im__20);
#line 1075
c_rt_lib0clear(&___nl__im__25);
#line 1075
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 1075
c_rt_lib0clear(&___nl__im__19);
#line 1076
goto label_100;
#line 1076
label_87:
;
#line 1077
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1077
c_rt_lib0move(&___nl__im__29,___get_global_string_const(504));
#line 1077
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 1077
c_rt_lib0clear(&___nl__im__28);
#line 1077
c_rt_lib0clear(&___nl__im__29);
#line 1077
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1077
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 1077
c_rt_lib0clear(&___nl__im__27);
#line 1077
c_rt_lib0clear(&___nl__im__30);
#line 1077
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__26));
#line 1077
c_rt_lib0clear(&___nl__im__26);
#line 1078
goto label_100;
#line 1078
label_100:
;
#line 1078
//clear ___nl__bool__17;
#line 1079
goto label_212;
#line 1079
label_103:
;
#line 1080
c_rt_lib0delete(generator_c_priv0print_move_to_string(___ref___rec__0, ___nl__im__1, ___nl__im__2));
#line 1081
goto label_212;
#line 1081
label_106:
;
#line 1082
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1082
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(131));
#line 1082
c_rt_lib0clear(&___nl__im__32);
#line 1082
___nl__bool__31 = !___nl__bool__31;
#line 1082
if(___nl__bool__31){ goto label_128;}
#line 1083
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1083
c_rt_lib0move(&___nl__im__37,___get_global_string_const(596));
#line 1083
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 1083
c_rt_lib0clear(&___nl__im__36);
#line 1083
c_rt_lib0clear(&___nl__im__37);
#line 1083
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1083
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__38));
#line 1083
c_rt_lib0clear(&___nl__im__35);
#line 1083
c_rt_lib0clear(&___nl__im__38);
#line 1083
c_rt_lib0move(&___nl__im__39,___get_global_string_const(322));
#line 1083
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__39));
#line 1083
c_rt_lib0clear(&___nl__im__34);
#line 1083
c_rt_lib0clear(&___nl__im__39);
#line 1083
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__33));
#line 1083
c_rt_lib0clear(&___nl__im__33);
#line 1084
goto label_141;
#line 1084
label_128:
;
#line 1085
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1085
c_rt_lib0move(&___nl__im__43,___get_global_string_const(504));
#line 1085
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 1085
c_rt_lib0clear(&___nl__im__42);
#line 1085
c_rt_lib0clear(&___nl__im__43);
#line 1085
c_rt_lib0move(&___nl__im__44, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1085
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1085
c_rt_lib0clear(&___nl__im__41);
#line 1085
c_rt_lib0clear(&___nl__im__44);
#line 1085
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__40));
#line 1085
c_rt_lib0clear(&___nl__im__40);
#line 1086
goto label_141;
#line 1086
label_141:
;
#line 1086
//clear ___nl__bool__31;
#line 1087
goto label_212;
#line 1087
label_144:
;
#line 1087
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(559)));
#line 1087
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 1088
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1088
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(559));
#line 1088
c_rt_lib0clear(&___nl__im__48);
#line 1088
___nl__bool__47 = !___nl__bool__47;
#line 1088
if(___nl__bool__47){ goto label_164;}
#line 1089
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1089
c_rt_lib0move(&___nl__im__52,___get_global_string_const(504));
#line 1089
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 1089
c_rt_lib0clear(&___nl__im__51);
#line 1089
c_rt_lib0clear(&___nl__im__52);
#line 1089
c_rt_lib0move(&___nl__im__53, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1089
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 1089
c_rt_lib0clear(&___nl__im__50);
#line 1089
c_rt_lib0clear(&___nl__im__53);
#line 1089
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__49));
#line 1089
c_rt_lib0clear(&___nl__im__49);
#line 1090
goto label_168;
#line 1090
label_164:
;
#line 1091
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 1091
nl_die_arg(___nl__im__54);
#line 1092
goto label_168;
#line 1092
label_168:
;
#line 1092
//clear ___nl__bool__47;
#line 1092
c_rt_lib0clear(&___nl__im__54);
#line 1093
goto label_212;
#line 1093
label_172:
;
#line 1093
c_rt_lib0move(&___nl__im__56, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(127)));
#line 1093
c_rt_lib0copy(&___nl__im__55, ___nl__im__56);
#line 1094
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1094
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__58, ___get_global_string_const(127));
#line 1094
c_rt_lib0clear(&___nl__im__58);
#line 1094
___nl__bool__57 = !___nl__bool__57;
#line 1094
if(___nl__bool__57){ goto label_192;}
#line 1095
c_rt_lib0move(&___nl__im__61, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1095
c_rt_lib0move(&___nl__im__62,___get_global_string_const(504));
#line 1095
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__62));
#line 1095
c_rt_lib0clear(&___nl__im__61);
#line 1095
c_rt_lib0clear(&___nl__im__62);
#line 1095
c_rt_lib0move(&___nl__im__63, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1095
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 1095
c_rt_lib0clear(&___nl__im__60);
#line 1095
c_rt_lib0clear(&___nl__im__63);
#line 1095
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__59));
#line 1095
c_rt_lib0clear(&___nl__im__59);
#line 1096
goto label_196;
#line 1096
label_192:
;
#line 1097
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(0));
#line 1097
nl_die_arg(___nl__im__64);
#line 1098
goto label_196;
#line 1098
label_196:
;
#line 1098
//clear ___nl__bool__57;
#line 1098
c_rt_lib0clear(&___nl__im__64);
#line 1099
goto label_212;
#line 1099
label_200:
;
#line 1099
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(563)));
#line 1099
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 1100
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 1100
nl_die_arg(___nl__im__67);
#line 1101
goto label_212;
#line 1101
label_206:
;
#line 1101
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(128)));
#line 1101
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 1102
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 1102
nl_die_arg(___nl__im__70);
#line 1103
goto label_212;
#line 1103
label_212:
;
#line 1103
c_rt_lib0clear(&___nl__im__1);
#line 1103
c_rt_lib0clear(&___nl__im__2);
#line 1103
c_rt_lib0clear(&___nl__im__14);
#line 1103
//clear ___nl__bool__15;
#line 1103
c_rt_lib0clear(&___nl__im__16);
#line 1103
c_rt_lib0clear(&___nl__im__45);
#line 1103
c_rt_lib0clear(&___nl__im__46);
#line 1103
c_rt_lib0clear(&___nl__im__55);
#line 1103
c_rt_lib0clear(&___nl__im__56);
#line 1103
c_rt_lib0clear(&___nl__im__65);
#line 1103
c_rt_lib0clear(&___nl__im__66);
#line 1103
c_rt_lib0clear(&___nl__im__67);
#line 1103
c_rt_lib0clear(&___nl__im__68);
#line 1103
c_rt_lib0clear(&___nl__im__69);
#line 1103
c_rt_lib0clear(&___nl__im__70);
#line 1103
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
#line 1107
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1107
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1107
if(___nl__bool__4){ goto label_20;}
#line 1110
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(405));
#line 1110
if(___nl__bool__4){ goto label_32;}
#line 1113
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 1113
if(___nl__bool__4){ goto label_44;}
#line 1116
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(406));
#line 1116
if(___nl__bool__4){ goto label_56;}
#line 1119
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 1119
if(___nl__bool__4){ goto label_68;}
#line 1121
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 1121
if(___nl__bool__4){ goto label_74;}
#line 1123
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(563));
#line 1123
if(___nl__bool__4){ goto label_80;}
#line 1125
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 1125
if(___nl__bool__4){ goto label_86;}
#line 1125
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 1125
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 1125
nl_die_arg(___nl__im__5);
#line 1107
label_20:
;
#line 1108
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1108
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1108
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 1108
c_rt_lib0clear(&___nl__im__7);
#line 1108
c_rt_lib0clear(&___nl__im__8);
#line 1109
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
#line 1109
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__6));
#line 1109
c_rt_lib0clear(&___nl__im__10);
#line 1109
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1109
c_rt_lib0clear(&___nl__im__9);
#line 1110
goto label_92;
#line 1110
label_32:
;
#line 1111
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1111
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1111
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1111
c_rt_lib0clear(&___nl__im__12);
#line 1111
c_rt_lib0clear(&___nl__im__13);
#line 1112
c_rt_lib0move(&___nl__im__15,___get_global_string_const(240));
#line 1112
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_fun_lib(___nl__im__15, ___nl__im__11));
#line 1112
c_rt_lib0clear(&___nl__im__15);
#line 1112
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__14));
#line 1112
c_rt_lib0clear(&___nl__im__14);
#line 1113
goto label_92;
#line 1113
label_44:
;
#line 1114
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1114
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1114
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__18));
#line 1114
c_rt_lib0clear(&___nl__im__17);
#line 1114
c_rt_lib0clear(&___nl__im__18);
#line 1115
c_rt_lib0move(&___nl__im__20,___get_global_string_const(240));
#line 1115
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_fun_lib(___nl__im__20, ___nl__im__16));
#line 1115
c_rt_lib0clear(&___nl__im__20);
#line 1115
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 1115
c_rt_lib0clear(&___nl__im__19);
#line 1116
goto label_92;
#line 1116
label_56:
;
#line 1117
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1117
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1117
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__23));
#line 1117
c_rt_lib0clear(&___nl__im__22);
#line 1117
c_rt_lib0clear(&___nl__im__23);
#line 1118
c_rt_lib0move(&___nl__im__25,___get_global_string_const(455));
#line 1118
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_fun_lib(___nl__im__25, ___nl__im__21));
#line 1118
c_rt_lib0clear(&___nl__im__25);
#line 1118
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__24));
#line 1118
c_rt_lib0clear(&___nl__im__24);
#line 1119
goto label_92;
#line 1119
label_68:
;
#line 1119
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(559)));
#line 1119
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1120
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 1120
nl_die_arg(___nl__im__28);
#line 1121
goto label_92;
#line 1121
label_74:
;
#line 1121
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(127)));
#line 1121
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1122
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 1122
nl_die_arg(___nl__im__31);
#line 1123
goto label_92;
#line 1123
label_80:
;
#line 1123
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(563)));
#line 1123
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 1124
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 1124
nl_die_arg(___nl__im__34);
#line 1125
goto label_92;
#line 1125
label_86:
;
#line 1125
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 1125
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1126
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 1126
nl_die_arg(___nl__im__37);
#line 1127
goto label_92;
#line 1127
label_92:
;
#line 1127
c_rt_lib0clear(&___nl__im__1);
#line 1127
c_rt_lib0clear(&___nl__im__2);
#line 1127
c_rt_lib0clear(&___nl__im__3);
#line 1127
//clear ___nl__bool__4;
#line 1127
c_rt_lib0clear(&___nl__im__5);
#line 1127
c_rt_lib0clear(&___nl__im__6);
#line 1127
c_rt_lib0clear(&___nl__im__11);
#line 1127
c_rt_lib0clear(&___nl__im__16);
#line 1127
c_rt_lib0clear(&___nl__im__21);
#line 1127
c_rt_lib0clear(&___nl__im__26);
#line 1127
c_rt_lib0clear(&___nl__im__27);
#line 1127
c_rt_lib0clear(&___nl__im__28);
#line 1127
c_rt_lib0clear(&___nl__im__29);
#line 1127
c_rt_lib0clear(&___nl__im__30);
#line 1127
c_rt_lib0clear(&___nl__im__31);
#line 1127
c_rt_lib0clear(&___nl__im__32);
#line 1127
c_rt_lib0clear(&___nl__im__33);
#line 1127
c_rt_lib0clear(&___nl__im__34);
#line 1127
c_rt_lib0clear(&___nl__im__35);
#line 1127
c_rt_lib0clear(&___nl__im__36);
#line 1127
c_rt_lib0clear(&___nl__im__37);
#line 1127
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
#line 1131
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1131
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1131
if(___nl__bool__4){ goto label_20;}
#line 1134
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(405));
#line 1134
if(___nl__bool__4){ goto label_32;}
#line 1137
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 1137
if(___nl__bool__4){ goto label_50;}
#line 1139
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(406));
#line 1139
if(___nl__bool__4){ goto label_54;}
#line 1142
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 1142
if(___nl__bool__4){ goto label_66;}
#line 1144
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 1144
if(___nl__bool__4){ goto label_72;}
#line 1146
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(563));
#line 1146
if(___nl__bool__4){ goto label_78;}
#line 1148
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 1148
if(___nl__bool__4){ goto label_84;}
#line 1148
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 1148
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 1148
nl_die_arg(___nl__im__5);
#line 1131
label_20:
;
#line 1132
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1132
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1132
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 1132
c_rt_lib0clear(&___nl__im__7);
#line 1132
c_rt_lib0clear(&___nl__im__8);
#line 1133
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
#line 1133
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__6));
#line 1133
c_rt_lib0clear(&___nl__im__10);
#line 1133
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1133
c_rt_lib0clear(&___nl__im__9);
#line 1134
goto label_90;
#line 1134
label_32:
;
#line 1135
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1135
c_rt_lib0move(&___nl__im__14,___get_global_string_const(597));
#line 1135
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1135
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(1, ___nl__im__16));
#line 1135
c_rt_lib0clear(&___nl__im__16);
#line 1135
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__14, ___nl__im__15));
#line 1135
c_rt_lib0clear(&___nl__im__14);
#line 1135
c_rt_lib0clear(&___nl__im__15);
#line 1135
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1135
c_rt_lib0clear(&___nl__im__12);
#line 1135
c_rt_lib0clear(&___nl__im__13);
#line 1136
c_rt_lib0move(&___nl__im__18,___get_global_string_const(240));
#line 1136
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_fun_lib(___nl__im__18, ___nl__im__11));
#line 1136
c_rt_lib0clear(&___nl__im__18);
#line 1136
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__17));
#line 1136
c_rt_lib0clear(&___nl__im__17);
#line 1137
goto label_90;
#line 1137
label_50:
;
#line 1138
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1138
nl_die_arg(___nl__im__19);
#line 1139
goto label_90;
#line 1139
label_54:
;
#line 1140
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1140
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1140
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__22));
#line 1140
c_rt_lib0clear(&___nl__im__21);
#line 1140
c_rt_lib0clear(&___nl__im__22);
#line 1141
c_rt_lib0move(&___nl__im__24,___get_global_string_const(240));
#line 1141
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_fun_lib(___nl__im__24, ___nl__im__20));
#line 1141
c_rt_lib0clear(&___nl__im__24);
#line 1141
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__23));
#line 1141
c_rt_lib0clear(&___nl__im__23);
#line 1142
goto label_90;
#line 1142
label_66:
;
#line 1142
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(559)));
#line 1142
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1143
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 1143
nl_die_arg(___nl__im__27);
#line 1144
goto label_90;
#line 1144
label_72:
;
#line 1144
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(127)));
#line 1144
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1145
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 1145
nl_die_arg(___nl__im__30);
#line 1146
goto label_90;
#line 1146
label_78:
;
#line 1146
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(563)));
#line 1146
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 1147
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(0));
#line 1147
nl_die_arg(___nl__im__33);
#line 1148
goto label_90;
#line 1148
label_84:
;
#line 1148
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 1148
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 1149
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 1149
nl_die_arg(___nl__im__36);
#line 1150
goto label_90;
#line 1150
label_90:
;
#line 1150
c_rt_lib0clear(&___nl__im__1);
#line 1150
c_rt_lib0clear(&___nl__im__2);
#line 1150
c_rt_lib0clear(&___nl__im__3);
#line 1150
//clear ___nl__bool__4;
#line 1150
c_rt_lib0clear(&___nl__im__5);
#line 1150
c_rt_lib0clear(&___nl__im__6);
#line 1150
c_rt_lib0clear(&___nl__im__11);
#line 1150
c_rt_lib0clear(&___nl__im__19);
#line 1150
c_rt_lib0clear(&___nl__im__20);
#line 1150
c_rt_lib0clear(&___nl__im__25);
#line 1150
c_rt_lib0clear(&___nl__im__26);
#line 1150
c_rt_lib0clear(&___nl__im__27);
#line 1150
c_rt_lib0clear(&___nl__im__28);
#line 1150
c_rt_lib0clear(&___nl__im__29);
#line 1150
c_rt_lib0clear(&___nl__im__30);
#line 1150
c_rt_lib0clear(&___nl__im__31);
#line 1150
c_rt_lib0clear(&___nl__im__32);
#line 1150
c_rt_lib0clear(&___nl__im__33);
#line 1150
c_rt_lib0clear(&___nl__im__34);
#line 1150
c_rt_lib0clear(&___nl__im__35);
#line 1150
c_rt_lib0clear(&___nl__im__36);
#line 1150
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_im_from_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1154
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1154
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1154
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_im_from_value(___nl__im__3, ___nl__im__4));
#line 1154
c_rt_lib0clear(&___nl__im__3);
#line 1154
c_rt_lib0clear(&___nl__im__4);
#line 1154
c_rt_lib0clear(&___nl__im__1);
#line 1154
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
#line 1158
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 1158
if(___nl__bool__2){ goto label_19;}
#line 1160
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 1160
if(___nl__bool__2){ goto label_25;}
#line 1162
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1162
if(___nl__bool__2){ goto label_37;}
#line 1164
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 1164
if(___nl__bool__2){ goto label_50;}
#line 1166
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 1166
if(___nl__bool__2){ goto label_58;}
#line 1168
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 1168
if(___nl__bool__2){ goto label_64;}
#line 1170
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 1170
if(___nl__bool__2){ goto label_70;}
#line 1172
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 1172
if(___nl__bool__2){ goto label_76;}
#line 1172
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1172
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1172
nl_die_arg(___nl__im__3);
#line 1158
label_19:
;
#line 1159
c_rt_lib0clear(&___nl__im__0);
#line 1159
//clear ___nl__bool__2;
#line 1159
c_rt_lib0clear(&___nl__im__3);
#line 1159
return ___nl__im__1;
#line 1160
goto label_82;
#line 1160
label_25:
;
#line 1161
c_rt_lib0move(&___nl__im__5,___get_global_string_const(598));
#line 1161
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1161
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_fun_lib(___nl__im__5, ___nl__im__6));
#line 1161
c_rt_lib0clear(&___nl__im__5);
#line 1161
c_rt_lib0clear(&___nl__im__6);
#line 1161
c_rt_lib0clear(&___nl__im__0);
#line 1161
c_rt_lib0clear(&___nl__im__1);
#line 1161
//clear ___nl__bool__2;
#line 1161
c_rt_lib0clear(&___nl__im__3);
#line 1161
return ___nl__im__4;
#line 1162
goto label_82;
#line 1162
label_37:
;
#line 1163
c_rt_lib0move(&___nl__im__8,___get_global_string_const(599));
#line 1163
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1163
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_fun_lib(___nl__im__8, ___nl__im__9));
#line 1163
c_rt_lib0clear(&___nl__im__8);
#line 1163
c_rt_lib0clear(&___nl__im__9);
#line 1163
c_rt_lib0clear(&___nl__im__0);
#line 1163
c_rt_lib0clear(&___nl__im__1);
#line 1163
//clear ___nl__bool__2;
#line 1163
c_rt_lib0clear(&___nl__im__3);
#line 1163
c_rt_lib0clear(&___nl__im__4);
#line 1163
return ___nl__im__7;
#line 1164
goto label_82;
#line 1164
label_50:
;
#line 1165
c_rt_lib0clear(&___nl__im__0);
#line 1165
//clear ___nl__bool__2;
#line 1165
c_rt_lib0clear(&___nl__im__3);
#line 1165
c_rt_lib0clear(&___nl__im__4);
#line 1165
c_rt_lib0clear(&___nl__im__7);
#line 1165
return ___nl__im__1;
#line 1166
goto label_82;
#line 1166
label_58:
;
#line 1166
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 1166
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1167
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 1167
nl_die_arg(___nl__im__12);
#line 1168
goto label_82;
#line 1168
label_64:
;
#line 1168
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 1168
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1169
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1169
nl_die_arg(___nl__im__15);
#line 1170
goto label_82;
#line 1170
label_70:
;
#line 1170
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 1170
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1171
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1171
nl_die_arg(___nl__im__18);
#line 1172
goto label_82;
#line 1172
label_76:
;
#line 1172
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 1172
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1173
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 1173
nl_die_arg(___nl__im__21);
#line 1174
goto label_82;
#line 1174
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
#line 1178
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 1178
if(___nl__bool__2){ goto label_19;}
#line 1180
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 1180
if(___nl__bool__2){ goto label_25;}
#line 1182
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1182
if(___nl__bool__2){ goto label_39;}
#line 1184
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 1184
if(___nl__bool__2){ goto label_52;}
#line 1186
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 1186
if(___nl__bool__2){ goto label_60;}
#line 1188
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 1188
if(___nl__bool__2){ goto label_66;}
#line 1190
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 1190
if(___nl__bool__2){ goto label_72;}
#line 1192
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 1192
if(___nl__bool__2){ goto label_78;}
#line 1192
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1192
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1192
nl_die_arg(___nl__im__3);
#line 1178
label_19:
;
#line 1179
c_rt_lib0clear(&___nl__im__0);
#line 1179
//clear ___nl__bool__2;
#line 1179
c_rt_lib0clear(&___nl__im__3);
#line 1179
return ___nl__im__1;
#line 1180
goto label_84;
#line 1180
label_25:
;
#line 1181
c_rt_lib0move(&___nl__im__6,___get_global_string_const(600));
#line 1181
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 1181
c_rt_lib0clear(&___nl__im__6);
#line 1181
c_rt_lib0move(&___nl__im__7,___get_global_string_const(322));
#line 1181
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 1181
c_rt_lib0clear(&___nl__im__5);
#line 1181
c_rt_lib0clear(&___nl__im__7);
#line 1181
c_rt_lib0clear(&___nl__im__0);
#line 1181
c_rt_lib0clear(&___nl__im__1);
#line 1181
//clear ___nl__bool__2;
#line 1181
c_rt_lib0clear(&___nl__im__3);
#line 1181
return ___nl__im__4;
#line 1182
goto label_84;
#line 1182
label_39:
;
#line 1183
c_rt_lib0move(&___nl__im__9,___get_global_string_const(601));
#line 1183
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1183
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_fun_lib(___nl__im__9, ___nl__im__10));
#line 1183
c_rt_lib0clear(&___nl__im__9);
#line 1183
c_rt_lib0clear(&___nl__im__10);
#line 1183
c_rt_lib0clear(&___nl__im__0);
#line 1183
c_rt_lib0clear(&___nl__im__1);
#line 1183
//clear ___nl__bool__2;
#line 1183
c_rt_lib0clear(&___nl__im__3);
#line 1183
c_rt_lib0clear(&___nl__im__4);
#line 1183
return ___nl__im__8;
#line 1184
goto label_84;
#line 1184
label_52:
;
#line 1185
c_rt_lib0clear(&___nl__im__0);
#line 1185
//clear ___nl__bool__2;
#line 1185
c_rt_lib0clear(&___nl__im__3);
#line 1185
c_rt_lib0clear(&___nl__im__4);
#line 1185
c_rt_lib0clear(&___nl__im__8);
#line 1185
return ___nl__im__1;
#line 1186
goto label_84;
#line 1186
label_60:
;
#line 1186
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 1186
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1187
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 1187
nl_die_arg(___nl__im__13);
#line 1188
goto label_84;
#line 1188
label_66:
;
#line 1188
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 1188
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 1189
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1189
nl_die_arg(___nl__im__16);
#line 1190
goto label_84;
#line 1190
label_72:
;
#line 1190
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 1190
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1191
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1191
nl_die_arg(___nl__im__19);
#line 1192
goto label_84;
#line 1192
label_78:
;
#line 1192
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 1192
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 1193
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 1193
nl_die_arg(___nl__im__22);
#line 1194
goto label_84;
#line 1194
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
#line 1198
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_bin_ops());
#line 1198
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(560)));
#line 1198
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__4));
#line 1198
c_rt_lib0clear(&___nl__im__3);
#line 1198
c_rt_lib0clear(&___nl__im__4);
#line 1199
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1199
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1199
___nl__bool__5 = nlasm0eq_reg(___nl__im__7, ___nl__im__8);
#line 1199
c_rt_lib0clear(&___nl__im__7);
#line 1199
c_rt_lib0clear(&___nl__im__8);
#line 1199
___nl__bool__6 = !___nl__bool__5;
#line 1199
if(___nl__bool__6){ goto label_17;}
#line 1199
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_bin_ops_mod());
#line 1199
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(560)));
#line 1199
___nl__bool__5 = hash0has_key(___nl__im__9, ___nl__im__10);
#line 1199
c_rt_lib0clear(&___nl__im__9);
#line 1199
c_rt_lib0clear(&___nl__im__10);
#line 1199
label_17:
;
#line 1199
//clear ___nl__bool__6;
#line 1199
___nl__bool__5 = !___nl__bool__5;
#line 1199
if(___nl__bool__5){ goto label_27;}
#line 1200
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_bin_ops_mod());
#line 1200
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(560)));
#line 1200
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__11, ___nl__im__12));
#line 1200
c_rt_lib0clear(&___nl__im__11);
#line 1200
c_rt_lib0clear(&___nl__im__12);
#line 1201
goto label_27;
#line 1201
label_27:
;
#line 1201
//clear ___nl__bool__5;
#line 1203
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(560)));
#line 1203
c_rt_lib0move(&___nl__im__16,___get_global_string_const(371));
#line 1203
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 1203
c_rt_lib0clear(&___nl__im__15);
#line 1203
c_rt_lib0clear(&___nl__im__16);
#line 1203
___nl__bool__14 = !___nl__bool__14;
#line 1203
if(___nl__bool__14){ goto label_74;}
#line 1204
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1204
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(206)));
#line 1204
c_rt_lib0clear(&___nl__im__19);
#line 1204
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(131));
#line 1204
c_rt_lib0clear(&___nl__im__18);
#line 1204
if(___nl__bool__17){ goto label_47;}
#line 1204
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1204
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 1204
c_rt_lib0clear(&___nl__im__21);
#line 1204
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(406));
#line 1204
c_rt_lib0clear(&___nl__im__20);
#line 1204
label_47:
;
#line 1204
___nl__bool__17 = !___nl__bool__17;
#line 1204
if(___nl__bool__17){ goto label_62;}
#line 1205
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1205
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__24));
#line 1205
c_rt_lib0clear(&___nl__im__24);
#line 1205
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(277)));
#line 1205
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__26));
#line 1205
c_rt_lib0clear(&___nl__im__26);
#line 1205
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__25));
#line 1205
c_rt_lib0clear(&___nl__im__23);
#line 1205
c_rt_lib0clear(&___nl__im__25);
#line 1205
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__22));
#line 1205
c_rt_lib0clear(&___nl__im__22);
#line 1206
goto label_71;
#line 1206
label_62:
;
#line 1207
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1207
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(277)));
#line 1207
c_rt_lib0move(&___nl__im__29,___get_global_string_const(383));
#line 1207
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__27, ___nl__im__28, ___nl__im__29));
#line 1207
c_rt_lib0clear(&___nl__im__27);
#line 1207
c_rt_lib0clear(&___nl__im__28);
#line 1207
c_rt_lib0clear(&___nl__im__29);
#line 1208
goto label_71;
#line 1208
label_71:
;
#line 1208
//clear ___nl__bool__17;
#line 1209
goto label_159;
#line 1209
label_74:
;
#line 1209
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(560)));
#line 1209
c_rt_lib0move(&___nl__im__31,___get_global_string_const(372));
#line 1209
___nl__bool__14 = c_rt_lib0eq(___nl__im__30, ___nl__im__31);
#line 1209
c_rt_lib0clear(&___nl__im__30);
#line 1209
c_rt_lib0clear(&___nl__im__31);
#line 1209
___nl__bool__14 = !___nl__bool__14;
#line 1209
if(___nl__bool__14){ goto label_120;}
#line 1210
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1210
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(206)));
#line 1210
c_rt_lib0clear(&___nl__im__34);
#line 1210
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(131));
#line 1210
c_rt_lib0clear(&___nl__im__33);
#line 1210
if(___nl__bool__32){ goto label_93;}
#line 1210
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1210
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(206)));
#line 1210
c_rt_lib0clear(&___nl__im__36);
#line 1210
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(406));
#line 1210
c_rt_lib0clear(&___nl__im__35);
#line 1210
label_93:
;
#line 1210
___nl__bool__32 = !___nl__bool__32;
#line 1210
if(___nl__bool__32){ goto label_108;}
#line 1211
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1211
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__39));
#line 1211
c_rt_lib0clear(&___nl__im__39);
#line 1211
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(277)));
#line 1211
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__41));
#line 1211
c_rt_lib0clear(&___nl__im__41);
#line 1211
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__38, ___nl__im__40));
#line 1211
c_rt_lib0clear(&___nl__im__38);
#line 1211
c_rt_lib0clear(&___nl__im__40);
#line 1211
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__37));
#line 1211
c_rt_lib0clear(&___nl__im__37);
#line 1212
goto label_117;
#line 1212
label_108:
;
#line 1213
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1213
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(277)));
#line 1213
c_rt_lib0move(&___nl__im__44,___get_global_string_const(385));
#line 1213
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__42, ___nl__im__43, ___nl__im__44));
#line 1213
c_rt_lib0clear(&___nl__im__42);
#line 1213
c_rt_lib0clear(&___nl__im__43);
#line 1213
c_rt_lib0clear(&___nl__im__44);
#line 1214
goto label_117;
#line 1214
label_117:
;
#line 1214
//clear ___nl__bool__32;
#line 1215
goto label_159;
#line 1215
label_120:
;
#line 1216
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1216
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(206)));
#line 1216
c_rt_lib0clear(&___nl__im__47);
#line 1216
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__46, ___get_global_string_const(131));
#line 1216
c_rt_lib0clear(&___nl__im__46);
#line 1216
if(___nl__bool__45){ goto label_132;}
#line 1216
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1216
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(206)));
#line 1216
c_rt_lib0clear(&___nl__im__49);
#line 1216
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(406));
#line 1216
c_rt_lib0clear(&___nl__im__48);
#line 1216
label_132:
;
#line 1216
___nl__bool__45 = !___nl__bool__45;
#line 1216
if(___nl__bool__45){ goto label_147;}
#line 1217
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1217
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__52));
#line 1217
c_rt_lib0clear(&___nl__im__52);
#line 1217
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(277)));
#line 1217
c_rt_lib0move(&___nl__im__53, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__54));
#line 1217
c_rt_lib0clear(&___nl__im__54);
#line 1217
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(2, ___nl__im__51, ___nl__im__53));
#line 1217
c_rt_lib0clear(&___nl__im__51);
#line 1217
c_rt_lib0clear(&___nl__im__53);
#line 1217
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__50));
#line 1217
c_rt_lib0clear(&___nl__im__50);
#line 1218
goto label_156;
#line 1218
label_147:
;
#line 1219
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(276)));
#line 1219
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(277)));
#line 1219
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(560)));
#line 1219
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__55, ___nl__im__56, ___nl__im__57));
#line 1219
c_rt_lib0clear(&___nl__im__55);
#line 1219
c_rt_lib0clear(&___nl__im__56);
#line 1219
c_rt_lib0clear(&___nl__im__57);
#line 1220
goto label_156;
#line 1220
label_156:
;
#line 1220
//clear ___nl__bool__45;
#line 1221
goto label_159;
#line 1221
label_159:
;
#line 1221
//clear ___nl__bool__14;
#line 1222
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1222
c_rt_lib0move(&___nl__im__58, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__59, ___nl__im__13));
#line 1222
c_rt_lib0clear(&___nl__im__59);
#line 1222
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__58));
#line 1222
c_rt_lib0clear(&___nl__im__58);
#line 1222
c_rt_lib0clear(&___nl__im__1);
#line 1222
c_rt_lib0clear(&___nl__im__2);
#line 1222
c_rt_lib0clear(&___nl__im__13);
#line 1222
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
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
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
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
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
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
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
#line 1226
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1226
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1226
c_rt_lib0clear(&___nl__im__4);
#line 1226
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1226
c_rt_lib0clear(&___nl__im__3);
#line 1226
___nl__bool__2 = !___nl__bool__2;
#line 1226
if(___nl__bool__2){ goto label_62;}
#line 1227
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(73)));
#line 1227
___nl__int__7 = c_rt_lib0array_len(___nl__im__8);
#line 1227
c_rt_lib0clear(&___nl__im__8);
#line 1227
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__7));
#line 1227
c_rt_lib0move(&___nl__im__6, ptd0int_to_string(___nl__im__9));
#line 1227
//clear ___nl__int__7;
#line 1227
c_rt_lib0clear(&___nl__im__9);
#line 1227
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__6));
#line 1227
c_rt_lib0clear(&___nl__im__6);
#line 1228
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(73)));
#line 1228
___nl__int__12 = 0;
#line 1228
___nl__int__13 = 1;
#line 1228
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 1228
label_20:
;
#line 1228
___nl__bool__15 = ___nl__int__12 >= ___nl__int__14;
#line 1228
if(___nl__bool__15){ goto label_52;}
#line 1228
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 1228
c_rt_lib0copy(&___nl__im__11, ___nl__im__16);
#line 1229
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(225)));
#line 1229
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(206)));
#line 1229
c_rt_lib0clear(&___nl__im__19);
#line 1229
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(131));
#line 1229
c_rt_lib0clear(&___nl__im__18);
#line 1229
___nl__bool__17 = !___nl__bool__17;
#line 1229
___nl__bool__17 = !___nl__bool__17;
#line 1229
if(___nl__bool__17){ goto label_36;}
#line 1229
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1229
nl_die_arg(___nl__im__20);
#line 1229
goto label_36;
#line 1229
label_36:
;
#line 1229
//clear ___nl__bool__17;
#line 1229
c_rt_lib0clear(&___nl__im__20);
#line 1230
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(577)));
#line 1230
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__22));
#line 1230
c_rt_lib0clear(&___nl__im__22);
#line 1230
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__21));
#line 1230
c_rt_lib0clear(&___nl__im__21);
#line 1231
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(225)));
#line 1231
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__24));
#line 1231
c_rt_lib0clear(&___nl__im__24);
#line 1231
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__23));
#line 1231
c_rt_lib0clear(&___nl__im__23);
#line 1231
c_rt_lib0clear(&___nl__im__11);
#line 1232
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 1232
goto label_20;
#line 1232
label_52:
;
#line 1233
c_rt_lib0move(&___nl__im__26,___get_global_string_const(602));
#line 1233
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_fun_lib(___nl__im__26, ___nl__im__5));
#line 1233
c_rt_lib0clear(&___nl__im__26);
#line 1234
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1234
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__28, ___nl__im__25));
#line 1234
c_rt_lib0clear(&___nl__im__28);
#line 1234
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__27));
#line 1234
c_rt_lib0clear(&___nl__im__27);
#line 1235
goto label_153;
#line 1235
label_62:
;
#line 1235
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1235
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(206)));
#line 1235
c_rt_lib0clear(&___nl__im__30);
#line 1235
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__29, ___get_global_string_const(559));
#line 1235
c_rt_lib0clear(&___nl__im__29);
#line 1235
___nl__bool__2 = !___nl__bool__2;
#line 1235
if(___nl__bool__2){ goto label_149;}
#line 1236
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 1237
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(73)));
#line 1237
___nl__int__34 = 0;
#line 1237
___nl__int__35 = 1;
#line 1237
___nl__int__36 = c_rt_lib0array_len(___nl__im__32);
#line 1237
label_75:
;
#line 1237
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 1237
if(___nl__bool__37){ goto label_138;}
#line 1237
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__32, ___nl__int__34));
#line 1237
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 1238
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1238
c_rt_lib0move(&___nl__im__41, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__42));
#line 1238
c_rt_lib0clear(&___nl__im__42);
#line 1238
c_rt_lib0move(&___nl__im__43,___get_global_string_const(110));
#line 1238
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__43));
#line 1238
c_rt_lib0clear(&___nl__im__41);
#line 1238
c_rt_lib0clear(&___nl__im__43);
#line 1238
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(577)));
#line 1238
c_rt_lib0move(&___nl__im__44, generator_c_priv0get_field_name(___nl__im__45));
#line 1238
c_rt_lib0clear(&___nl__im__45);
#line 1238
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__44));
#line 1238
c_rt_lib0clear(&___nl__im__40);
#line 1238
c_rt_lib0clear(&___nl__im__44);
#line 1239
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(225)));
#line 1239
c_rt_lib0move(&___nl__im__46, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__47));
#line 1239
c_rt_lib0clear(&___nl__im__47);
#line 1240
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(225)));
#line 1240
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_string_const(206)));
#line 1240
c_rt_lib0clear(&___nl__im__50);
#line 1240
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__49, ___get_global_string_const(131));
#line 1240
c_rt_lib0clear(&___nl__im__49);
#line 1240
___nl__bool__48 = !___nl__bool__48;
#line 1240
if(___nl__bool__48){ goto label_124;}
#line 1241
c_rt_lib0move(&___nl__im__52,___get_global_string_const(590));
#line 1241
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__39, ___nl__im__52));
#line 1241
c_rt_lib0clear(&___nl__im__52);
#line 1241
c_rt_lib0array_push(&___nl__im__31, ___nl__im__51);
#line 1241
c_rt_lib0clear(&___nl__im__51);
#line 1242
c_rt_lib0move(&___nl__im__54,___get_global_string_const(455));
#line 1242
c_rt_lib0move(&___nl__im__58,___get_global_string_const(603));
#line 1242
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__39));
#line 1242
c_rt_lib0clear(&___nl__im__58);
#line 1242
c_rt_lib0move(&___nl__im__59,___get_global_string_const(322));
#line 1242
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__59));
#line 1242
c_rt_lib0clear(&___nl__im__57);
#line 1242
c_rt_lib0clear(&___nl__im__59);
#line 1242
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(2, ___nl__im__56, ___nl__im__46));
#line 1242
c_rt_lib0clear(&___nl__im__56);
#line 1242
c_rt_lib0move(&___nl__im__53, generator_c_priv0get_fun_lib(___nl__im__54, ___nl__im__55));
#line 1242
c_rt_lib0clear(&___nl__im__54);
#line 1242
c_rt_lib0clear(&___nl__im__55);
#line 1242
c_rt_lib0array_push(&___nl__im__31, ___nl__im__53);
#line 1242
c_rt_lib0clear(&___nl__im__53);
#line 1243
goto label_133;
#line 1243
label_124:
;
#line 1244
c_rt_lib0move(&___nl__im__62,___get_global_string_const(504));
#line 1244
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__39, ___nl__im__62));
#line 1244
c_rt_lib0clear(&___nl__im__62);
#line 1244
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__46));
#line 1244
c_rt_lib0clear(&___nl__im__61);
#line 1244
c_rt_lib0array_push(&___nl__im__31, ___nl__im__60);
#line 1244
c_rt_lib0clear(&___nl__im__60);
#line 1245
goto label_133;
#line 1245
label_133:
;
#line 1245
//clear ___nl__bool__48;
#line 1245
c_rt_lib0clear(&___nl__im__33);
#line 1246
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 1246
goto label_75;
#line 1246
label_138:
;
#line 1247
c_rt_lib0move(&___nl__im__65,___get_global_string_const(442));
#line 1247
c_rt_lib0move(&___nl__im__66, string0lf());
#line 1247
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 1247
c_rt_lib0clear(&___nl__im__65);
#line 1247
c_rt_lib0clear(&___nl__im__66);
#line 1247
c_rt_lib0move(&___nl__im__63, array0join(___nl__im__64, ___nl__im__31));
#line 1247
c_rt_lib0clear(&___nl__im__64);
#line 1247
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__63));
#line 1247
c_rt_lib0clear(&___nl__im__63);
#line 1248
goto label_153;
#line 1248
label_149:
;
#line 1249
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 1249
nl_die_arg(___nl__im__67);
#line 1250
goto label_153;
#line 1250
label_153:
;
#line 1250
//clear ___nl__bool__2;
#line 1250
c_rt_lib0clear(&___nl__im__5);
#line 1250
c_rt_lib0clear(&___nl__im__10);
#line 1250
c_rt_lib0clear(&___nl__im__11);
#line 1250
//clear ___nl__int__12;
#line 1250
//clear ___nl__int__13;
#line 1250
//clear ___nl__int__14;
#line 1250
//clear ___nl__bool__15;
#line 1250
c_rt_lib0clear(&___nl__im__16);
#line 1250
c_rt_lib0clear(&___nl__im__25);
#line 1250
c_rt_lib0clear(&___nl__im__31);
#line 1250
c_rt_lib0clear(&___nl__im__32);
#line 1250
c_rt_lib0clear(&___nl__im__33);
#line 1250
//clear ___nl__int__34;
#line 1250
//clear ___nl__int__35;
#line 1250
//clear ___nl__int__36;
#line 1250
//clear ___nl__bool__37;
#line 1250
c_rt_lib0clear(&___nl__im__38);
#line 1250
c_rt_lib0clear(&___nl__im__39);
#line 1250
c_rt_lib0clear(&___nl__im__46);
#line 1250
c_rt_lib0clear(&___nl__im__67);
#line 1250
c_rt_lib0clear(&___nl__im__1);
#line 1250
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
#line 1254
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1254
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1254
c_rt_lib0clear(&___nl__im__4);
#line 1254
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(559));
#line 1254
c_rt_lib0clear(&___nl__im__3);
#line 1254
___nl__bool__2 = !___nl__bool__2;
#line 1254
if(___nl__bool__2){ goto label_52;}
#line 1255
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1255
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__8));
#line 1255
c_rt_lib0clear(&___nl__im__8);
#line 1255
c_rt_lib0move(&___nl__im__9,___get_global_string_const(604));
#line 1255
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 1255
c_rt_lib0clear(&___nl__im__7);
#line 1255
c_rt_lib0clear(&___nl__im__9);
#line 1255
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1255
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__11));
#line 1255
c_rt_lib0clear(&___nl__im__11);
#line 1255
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 1255
c_rt_lib0clear(&___nl__im__6);
#line 1255
c_rt_lib0clear(&___nl__im__10);
#line 1256
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1256
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(353)));
#line 1256
c_rt_lib0clear(&___nl__im__13);
#line 1256
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(220));
#line 1256
if(___nl__bool__14){ goto label_30;}
#line 1258
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(422));
#line 1258
if(___nl__bool__14){ goto label_35;}
#line 1258
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 1258
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 1258
nl_die_arg(___nl__im__15);
#line 1256
label_30:
;
#line 1257
c_rt_lib0move(&___nl__im__16,___get_global_string_const(110));
#line 1257
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__16));
#line 1257
c_rt_lib0clear(&___nl__im__16);
#line 1258
goto label_40;
#line 1258
label_35:
;
#line 1259
c_rt_lib0move(&___nl__im__17,___get_global_string_const(578));
#line 1259
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__17));
#line 1259
c_rt_lib0clear(&___nl__im__17);
#line 1260
goto label_40;
#line 1260
label_40:
;
#line 1261
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(605)));
#line 1261
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_field_name(___nl__im__20));
#line 1261
c_rt_lib0clear(&___nl__im__20);
#line 1261
c_rt_lib0move(&___nl__im__21,___get_global_string_const(322));
#line 1261
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 1261
c_rt_lib0clear(&___nl__im__19);
#line 1261
c_rt_lib0clear(&___nl__im__21);
#line 1261
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__18));
#line 1261
c_rt_lib0clear(&___nl__im__18);
#line 1262
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__5));
#line 1263
goto label_72;
#line 1263
label_52:
;
#line 1263
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1263
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(206)));
#line 1263
c_rt_lib0clear(&___nl__im__23);
#line 1263
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(131));
#line 1263
c_rt_lib0clear(&___nl__im__22);
#line 1263
___nl__bool__2 = !___nl__bool__2;
#line 1263
if(___nl__bool__2){ goto label_68;}
#line 1264
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1264
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1264
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(605)));
#line 1264
c_rt_lib0delete(generator_c_priv0print_get_val(___ref___rec__0, ___nl__im__24, ___nl__im__25, ___nl__im__26));
#line 1264
c_rt_lib0clear(&___nl__im__24);
#line 1264
c_rt_lib0clear(&___nl__im__25);
#line 1264
c_rt_lib0clear(&___nl__im__26);
#line 1265
goto label_72;
#line 1265
label_68:
;
#line 1266
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 1266
nl_die_arg(___nl__im__27);
#line 1267
goto label_72;
#line 1267
label_72:
;
#line 1267
//clear ___nl__bool__2;
#line 1267
c_rt_lib0clear(&___nl__im__5);
#line 1267
c_rt_lib0clear(&___nl__im__12);
#line 1267
//clear ___nl__bool__14;
#line 1267
c_rt_lib0clear(&___nl__im__15);
#line 1267
c_rt_lib0clear(&___nl__im__27);
#line 1267
c_rt_lib0clear(&___nl__im__1);
#line 1267
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
#line 1271
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1271
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1271
c_rt_lib0clear(&___nl__im__4);
#line 1271
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(127));
#line 1271
c_rt_lib0clear(&___nl__im__3);
#line 1271
___nl__bool__2 = !___nl__bool__2;
#line 1271
if(___nl__bool__2){ goto label_87;}
#line 1272
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1272
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(206)));
#line 1272
c_rt_lib0clear(&___nl__im__8);
#line 1272
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1272
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 1272
c_rt_lib0clear(&___nl__im__10);
#line 1272
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(127)));
#line 1272
c_rt_lib0clear(&___nl__im__7);
#line 1272
c_rt_lib0clear(&___nl__im__9);
#line 1272
___nl__bool__5 = generator_c_priv0is_anon(___nl__im__6);
#line 1272
c_rt_lib0clear(&___nl__im__6);
#line 1273
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1273
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__15));
#line 1273
c_rt_lib0clear(&___nl__im__15);
#line 1273
c_rt_lib0move(&___nl__im__16,___get_global_string_const(504));
#line 1273
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 1273
c_rt_lib0clear(&___nl__im__14);
#line 1273
c_rt_lib0clear(&___nl__im__16);
#line 1274
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1274
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 1274
c_rt_lib0clear(&___nl__im__21);
#line 1274
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1274
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(206)));
#line 1274
c_rt_lib0clear(&___nl__im__23);
#line 1274
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(127)));
#line 1274
c_rt_lib0clear(&___nl__im__20);
#line 1274
c_rt_lib0clear(&___nl__im__22);
#line 1274
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_type_name(___nl__im__19));
#line 1274
c_rt_lib0clear(&___nl__im__19);
#line 1274
___nl__im_ptr__25 = &((*___ref___rec__0).mod_name0field);
#line 1274
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1274
___nl__im_ptr__25 = NULL;
#line 1274
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_array_get_fun_name(___nl__im__18, ___nl__im__24, ___nl__bool__5));
#line 1274
c_rt_lib0clear(&___nl__im__18);
#line 1274
c_rt_lib0clear(&___nl__im__24);
#line 1274
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1274
c_rt_lib0clear(&___nl__im__13);
#line 1274
c_rt_lib0clear(&___nl__im__17);
#line 1275
c_rt_lib0move(&___nl__im__26,___get_global_string_const(457));
#line 1275
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__26));
#line 1275
c_rt_lib0clear(&___nl__im__12);
#line 1275
c_rt_lib0clear(&___nl__im__26);
#line 1276
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1276
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(353)));
#line 1276
c_rt_lib0clear(&___nl__im__28);
#line 1276
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(220));
#line 1276
if(___nl__bool__29){ goto label_59;}
#line 1278
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(422));
#line 1278
if(___nl__bool__29){ goto label_64;}
#line 1278
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 1278
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__27));
#line 1278
nl_die_arg(___nl__im__30);
#line 1276
label_59:
;
#line 1277
c_rt_lib0move(&___nl__im__31,___get_global_string_const(506));
#line 1277
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__31));
#line 1277
c_rt_lib0clear(&___nl__im__31);
#line 1278
goto label_66;
#line 1278
label_64:
;
#line 1279
goto label_66;
#line 1279
label_66:
;
#line 1280
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1280
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__34));
#line 1280
c_rt_lib0clear(&___nl__im__34);
#line 1280
c_rt_lib0move(&___nl__im__35,___get_global_string_const(328));
#line 1280
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 1280
c_rt_lib0clear(&___nl__im__33);
#line 1280
c_rt_lib0clear(&___nl__im__35);
#line 1280
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__32));
#line 1280
c_rt_lib0clear(&___nl__im__32);
#line 1281
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(363)));
#line 1281
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__38));
#line 1281
c_rt_lib0clear(&___nl__im__38);
#line 1281
c_rt_lib0move(&___nl__im__39,___get_global_string_const(322));
#line 1281
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 1281
c_rt_lib0clear(&___nl__im__37);
#line 1281
c_rt_lib0clear(&___nl__im__39);
#line 1281
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__36));
#line 1281
c_rt_lib0clear(&___nl__im__36);
#line 1282
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__11));
#line 1283
goto label_125;
#line 1283
label_87:
;
#line 1283
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1283
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(206)));
#line 1283
c_rt_lib0clear(&___nl__im__41);
#line 1283
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(131));
#line 1283
c_rt_lib0clear(&___nl__im__40);
#line 1283
___nl__bool__2 = !___nl__bool__2;
#line 1283
if(___nl__bool__2){ goto label_121;}
#line 1284
c_rt_lib0move(&___nl__im__43,___get_global_string_const(240));
#line 1284
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1284
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__46));
#line 1284
c_rt_lib0clear(&___nl__im__46);
#line 1285
c_rt_lib0move(&___nl__im__48,___get_global_string_const(574));
#line 1285
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1285
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__51));
#line 1285
c_rt_lib0clear(&___nl__im__51);
#line 1285
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(363)));
#line 1285
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__53));
#line 1285
c_rt_lib0clear(&___nl__im__53);
#line 1285
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__50, ___nl__im__52));
#line 1285
c_rt_lib0clear(&___nl__im__50);
#line 1285
c_rt_lib0clear(&___nl__im__52);
#line 1285
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_fun_lib(___nl__im__48, ___nl__im__49));
#line 1285
c_rt_lib0clear(&___nl__im__48);
#line 1285
c_rt_lib0clear(&___nl__im__49);
#line 1285
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(2, ___nl__im__45, ___nl__im__47));
#line 1285
c_rt_lib0clear(&___nl__im__45);
#line 1285
c_rt_lib0clear(&___nl__im__47);
#line 1285
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_fun_lib(___nl__im__43, ___nl__im__44));
#line 1285
c_rt_lib0clear(&___nl__im__43);
#line 1285
c_rt_lib0clear(&___nl__im__44);
#line 1285
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__42));
#line 1285
c_rt_lib0clear(&___nl__im__42);
#line 1287
goto label_125;
#line 1287
label_121:
;
#line 1288
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 1288
nl_die_arg(___nl__im__54);
#line 1289
goto label_125;
#line 1289
label_125:
;
#line 1289
//clear ___nl__bool__2;
#line 1289
//clear ___nl__bool__5;
#line 1289
c_rt_lib0clear(&___nl__im__11);
#line 1289
c_rt_lib0clear(&___nl__im__27);
#line 1289
//clear ___nl__bool__29;
#line 1289
c_rt_lib0clear(&___nl__im__30);
#line 1289
c_rt_lib0clear(&___nl__im__54);
#line 1289
c_rt_lib0clear(&___nl__im__1);
#line 1289
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
#line 1293
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1293
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1293
c_rt_lib0clear(&___nl__im__4);
#line 1293
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 1293
c_rt_lib0clear(&___nl__im__3);
#line 1293
___nl__bool__2 = !___nl__bool__2;
#line 1293
if(___nl__bool__2){ goto label_103;}
#line 1294
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1294
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(206)));
#line 1294
c_rt_lib0clear(&___nl__im__8);
#line 1294
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1294
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 1294
c_rt_lib0clear(&___nl__im__10);
#line 1294
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(128)));
#line 1294
c_rt_lib0clear(&___nl__im__7);
#line 1294
c_rt_lib0clear(&___nl__im__9);
#line 1294
___nl__bool__5 = generator_c_priv0is_anon(___nl__im__6);
#line 1294
c_rt_lib0clear(&___nl__im__6);
#line 1295
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1295
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__15));
#line 1295
c_rt_lib0clear(&___nl__im__15);
#line 1295
c_rt_lib0move(&___nl__im__16,___get_global_string_const(504));
#line 1295
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 1295
c_rt_lib0clear(&___nl__im__14);
#line 1295
c_rt_lib0clear(&___nl__im__16);
#line 1296
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1296
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 1296
c_rt_lib0clear(&___nl__im__21);
#line 1296
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1296
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(206)));
#line 1296
c_rt_lib0clear(&___nl__im__23);
#line 1296
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(128)));
#line 1296
c_rt_lib0clear(&___nl__im__20);
#line 1296
c_rt_lib0clear(&___nl__im__22);
#line 1296
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_type_name(___nl__im__19));
#line 1296
c_rt_lib0clear(&___nl__im__19);
#line 1296
___nl__im_ptr__25 = &((*___ref___rec__0).mod_name0field);
#line 1296
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1296
___nl__im_ptr__25 = NULL;
#line 1296
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_hash_get_fun_name(___nl__im__18, ___nl__im__24, ___nl__bool__5));
#line 1296
c_rt_lib0clear(&___nl__im__18);
#line 1296
c_rt_lib0clear(&___nl__im__24);
#line 1296
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1296
c_rt_lib0clear(&___nl__im__13);
#line 1296
c_rt_lib0clear(&___nl__im__17);
#line 1297
c_rt_lib0move(&___nl__im__26,___get_global_string_const(457));
#line 1297
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__26));
#line 1297
c_rt_lib0clear(&___nl__im__12);
#line 1297
c_rt_lib0clear(&___nl__im__26);
#line 1298
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1298
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(353)));
#line 1298
c_rt_lib0clear(&___nl__im__28);
#line 1298
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(220));
#line 1298
if(___nl__bool__29){ goto label_59;}
#line 1300
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(422));
#line 1300
if(___nl__bool__29){ goto label_64;}
#line 1300
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 1300
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__27));
#line 1300
nl_die_arg(___nl__im__30);
#line 1298
label_59:
;
#line 1299
c_rt_lib0move(&___nl__im__31,___get_global_string_const(506));
#line 1299
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__31));
#line 1299
c_rt_lib0clear(&___nl__im__31);
#line 1300
goto label_66;
#line 1300
label_64:
;
#line 1301
goto label_66;
#line 1301
label_66:
;
#line 1302
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1302
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__34));
#line 1302
c_rt_lib0clear(&___nl__im__34);
#line 1302
c_rt_lib0move(&___nl__im__35,___get_global_string_const(328));
#line 1302
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 1302
c_rt_lib0clear(&___nl__im__33);
#line 1302
c_rt_lib0clear(&___nl__im__35);
#line 1302
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__32));
#line 1302
c_rt_lib0clear(&___nl__im__32);
#line 1303
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(363)));
#line 1303
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__38));
#line 1303
c_rt_lib0clear(&___nl__im__38);
#line 1303
c_rt_lib0move(&___nl__im__39,___get_global_string_const(328));
#line 1303
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 1303
c_rt_lib0clear(&___nl__im__37);
#line 1303
c_rt_lib0clear(&___nl__im__39);
#line 1303
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__36));
#line 1303
c_rt_lib0clear(&___nl__im__36);
#line 1304
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(606)));
#line 1304
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 1304
c_rt_lib0clear(&___nl__im__43);
#line 1304
if(___nl__bool__42){ goto label_91;}
#line 1304
c_rt_lib0move(&___nl__im__41,___get_global_string_const(572));
#line 1304
goto label_93;
#line 1304
label_91:
;
#line 1304
c_rt_lib0move(&___nl__im__41,___get_global_string_const(573));
#line 1304
label_93:
;
#line 1304
//clear ___nl__bool__42;
#line 1304
c_rt_lib0move(&___nl__im__44,___get_global_string_const(322));
#line 1304
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1304
c_rt_lib0clear(&___nl__im__41);
#line 1304
c_rt_lib0clear(&___nl__im__44);
#line 1304
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__40));
#line 1304
c_rt_lib0clear(&___nl__im__40);
#line 1305
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__11));
#line 1306
goto label_116;
#line 1306
label_103:
;
#line 1306
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1306
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(206)));
#line 1306
c_rt_lib0clear(&___nl__im__46);
#line 1306
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(131));
#line 1306
c_rt_lib0clear(&___nl__im__45);
#line 1306
___nl__bool__2 = !___nl__bool__2;
#line 1306
if(___nl__bool__2){ goto label_112;}
#line 1307
goto label_116;
#line 1307
label_112:
;
#line 1308
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(0));
#line 1308
nl_die_arg(___nl__im__47);
#line 1309
goto label_116;
#line 1309
label_116:
;
#line 1309
//clear ___nl__bool__2;
#line 1309
//clear ___nl__bool__5;
#line 1309
c_rt_lib0clear(&___nl__im__11);
#line 1309
c_rt_lib0clear(&___nl__im__27);
#line 1309
//clear ___nl__bool__29;
#line 1309
c_rt_lib0clear(&___nl__im__30);
#line 1309
c_rt_lib0clear(&___nl__im__47);
#line 1309
c_rt_lib0clear(&___nl__im__1);
#line 1309
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
#line 1313
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1313
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_access_op(___nl__im__3));
#line 1313
c_rt_lib0clear(&___nl__im__3);
#line 1314
c_rt_lib0move(&___nl__im__10,___get_global_string_const(607));
#line 1314
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1314
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__12));
#line 1314
c_rt_lib0clear(&___nl__im__12);
#line 1314
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 1314
c_rt_lib0clear(&___nl__im__10);
#line 1314
c_rt_lib0clear(&___nl__im__11);
#line 1314
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__2));
#line 1314
c_rt_lib0clear(&___nl__im__9);
#line 1314
c_rt_lib0move(&___nl__im__13,___get_global_string_const(608));
#line 1314
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 1314
c_rt_lib0clear(&___nl__im__8);
#line 1314
c_rt_lib0clear(&___nl__im__13);
#line 1314
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(567)));
#line 1314
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1314
c_rt_lib0clear(&___nl__im__15);
#line 1314
c_rt_lib0move(&___nl__string__16, c_rt_lib0int_to_string(___nl__int__14));
#line 1314
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__16));
#line 1314
c_rt_lib0clear(&___nl__im__7);
#line 1314
//clear ___nl__int__14;
#line 1314
c_rt_lib0clear(&___nl__string__16);
#line 1315
c_rt_lib0move(&___nl__im__17,___get_global_string_const(609));
#line 1315
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__17));
#line 1315
c_rt_lib0clear(&___nl__im__6);
#line 1315
c_rt_lib0clear(&___nl__im__17);
#line 1315
c_rt_lib0move(&___nl__im__18, string0lf());
#line 1315
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__18));
#line 1315
c_rt_lib0clear(&___nl__im__5);
#line 1315
c_rt_lib0clear(&___nl__im__18);
#line 1316
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1316
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__23));
#line 1316
c_rt_lib0clear(&___nl__im__23);
#line 1316
c_rt_lib0move(&___nl__im__24,___get_global_string_const(504));
#line 1316
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 1316
c_rt_lib0clear(&___nl__im__22);
#line 1316
c_rt_lib0clear(&___nl__im__24);
#line 1316
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(360)));
#line 1316
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__26));
#line 1316
c_rt_lib0clear(&___nl__im__26);
#line 1316
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 1316
c_rt_lib0clear(&___nl__im__21);
#line 1316
c_rt_lib0clear(&___nl__im__25);
#line 1316
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__2));
#line 1316
c_rt_lib0clear(&___nl__im__20);
#line 1316
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__19));
#line 1316
c_rt_lib0clear(&___nl__im__19);
#line 1317
c_rt_lib0move(&___nl__im__28,___get_global_string_const(570));
#line 1317
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(562)));
#line 1317
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_case_name(___nl__im__30));
#line 1317
c_rt_lib0clear(&___nl__im__30);
#line 1317
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 1317
c_rt_lib0clear(&___nl__im__28);
#line 1317
c_rt_lib0clear(&___nl__im__29);
#line 1317
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__27));
#line 1317
c_rt_lib0clear(&___nl__im__27);
#line 1318
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__4));
#line 1318
c_rt_lib0clear(&___nl__im__1);
#line 1318
c_rt_lib0clear(&___nl__im__2);
#line 1318
c_rt_lib0clear(&___nl__im__4);
#line 1318
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
#line 1322
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1322
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1322
c_rt_lib0clear(&___nl__im__4);
#line 1322
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1322
c_rt_lib0clear(&___nl__im__3);
#line 1322
___nl__bool__2 = !___nl__bool__2;
#line 1322
if(___nl__bool__2){ goto label_23;}
#line 1324
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1325
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 1326
c_rt_lib0move(&___nl__im__8,___get_global_string_const(272));
#line 1327
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1327
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__11));
#line 1327
c_rt_lib0clear(&___nl__im__11);
#line 1327
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1327
c_rt_lib0clear(&___nl__im__10);
#line 1327
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__6, ___get_global_string_const(268), ___nl__im__7, ___get_global_string_const(270), ___nl__im__8, ___get_global_string_const(267), ___nl__im__9));
#line 1327
c_rt_lib0clear(&___nl__im__6);
#line 1327
c_rt_lib0clear(&___nl__im__7);
#line 1327
c_rt_lib0clear(&___nl__im__8);
#line 1327
c_rt_lib0clear(&___nl__im__9);
#line 1327
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1327
c_rt_lib0clear(&___nl__im__5);
#line 1329
goto label_72;
#line 1329
label_23:
;
#line 1330
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1330
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(206)));
#line 1330
c_rt_lib0clear(&___nl__im__15);
#line 1330
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1330
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 1330
c_rt_lib0clear(&___nl__im__17);
#line 1330
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(128)));
#line 1330
c_rt_lib0clear(&___nl__im__14);
#line 1330
c_rt_lib0clear(&___nl__im__16);
#line 1330
___nl__bool__12 = generator_c_priv0is_anon(___nl__im__13);
#line 1330
c_rt_lib0clear(&___nl__im__13);
#line 1331
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1331
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(206)));
#line 1331
c_rt_lib0clear(&___nl__im__25);
#line 1331
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1331
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(206)));
#line 1331
c_rt_lib0clear(&___nl__im__27);
#line 1331
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(128)));
#line 1331
c_rt_lib0clear(&___nl__im__24);
#line 1331
c_rt_lib0clear(&___nl__im__26);
#line 1331
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_type_name(___nl__im__23));
#line 1331
c_rt_lib0clear(&___nl__im__23);
#line 1331
___nl__im_ptr__29 = &((*___ref___rec__0).mod_name0field);
#line 1331
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1331
___nl__im_ptr__29 = NULL;
#line 1331
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__22, ___nl__im__28, ___nl__bool__12));
#line 1331
c_rt_lib0clear(&___nl__im__22);
#line 1331
c_rt_lib0clear(&___nl__im__28);
#line 1332
c_rt_lib0move(&___nl__im__30,___get_global_string_const(457));
#line 1332
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__30));
#line 1332
c_rt_lib0clear(&___nl__im__21);
#line 1332
c_rt_lib0clear(&___nl__im__30);
#line 1332
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1332
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__32));
#line 1332
c_rt_lib0clear(&___nl__im__32);
#line 1332
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__31));
#line 1332
c_rt_lib0clear(&___nl__im__20);
#line 1332
c_rt_lib0clear(&___nl__im__31);
#line 1332
c_rt_lib0move(&___nl__im__33,___get_global_string_const(610));
#line 1332
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__33));
#line 1332
c_rt_lib0clear(&___nl__im__19);
#line 1332
c_rt_lib0clear(&___nl__im__33);
#line 1333
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1333
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__35, ___nl__im__18));
#line 1333
c_rt_lib0clear(&___nl__im__35);
#line 1333
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__34));
#line 1333
c_rt_lib0clear(&___nl__im__34);
#line 1334
goto label_72;
#line 1334
label_72:
;
#line 1334
//clear ___nl__bool__2;
#line 1334
//clear ___nl__bool__12;
#line 1334
c_rt_lib0clear(&___nl__im__18);
#line 1334
c_rt_lib0clear(&___nl__im__1);
#line 1334
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
#line 1338
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1338
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1338
c_rt_lib0clear(&___nl__im__4);
#line 1338
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1338
c_rt_lib0clear(&___nl__im__3);
#line 1338
___nl__bool__2 = !___nl__bool__2;
#line 1338
if(___nl__bool__2){ goto label_23;}
#line 1340
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1341
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 1342
c_rt_lib0move(&___nl__im__8,___get_global_string_const(275));
#line 1343
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1343
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__11));
#line 1343
c_rt_lib0clear(&___nl__im__11);
#line 1343
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1343
c_rt_lib0clear(&___nl__im__10);
#line 1343
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__6, ___get_global_string_const(268), ___nl__im__7, ___get_global_string_const(270), ___nl__im__8, ___get_global_string_const(267), ___nl__im__9));
#line 1343
c_rt_lib0clear(&___nl__im__6);
#line 1343
c_rt_lib0clear(&___nl__im__7);
#line 1343
c_rt_lib0clear(&___nl__im__8);
#line 1343
c_rt_lib0clear(&___nl__im__9);
#line 1343
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1343
c_rt_lib0clear(&___nl__im__5);
#line 1345
goto label_82;
#line 1345
label_23:
;
#line 1346
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1346
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(206)));
#line 1346
c_rt_lib0clear(&___nl__im__15);
#line 1346
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1346
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(206)));
#line 1346
c_rt_lib0clear(&___nl__im__17);
#line 1346
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(128)));
#line 1346
c_rt_lib0clear(&___nl__im__14);
#line 1346
c_rt_lib0clear(&___nl__im__16);
#line 1346
___nl__bool__12 = generator_c_priv0is_anon(___nl__im__13);
#line 1346
c_rt_lib0clear(&___nl__im__13);
#line 1347
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1347
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(206)));
#line 1347
c_rt_lib0clear(&___nl__im__27);
#line 1347
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1347
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(206)));
#line 1347
c_rt_lib0clear(&___nl__im__29);
#line 1347
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(128)));
#line 1347
c_rt_lib0clear(&___nl__im__26);
#line 1347
c_rt_lib0clear(&___nl__im__28);
#line 1347
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_type_name(___nl__im__25));
#line 1347
c_rt_lib0clear(&___nl__im__25);
#line 1347
___nl__im_ptr__31 = &((*___ref___rec__0).mod_name0field);
#line 1347
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 1347
___nl__im_ptr__31 = NULL;
#line 1347
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__24, ___nl__im__30, ___nl__bool__12));
#line 1347
c_rt_lib0clear(&___nl__im__24);
#line 1347
c_rt_lib0clear(&___nl__im__30);
#line 1348
c_rt_lib0move(&___nl__im__32,___get_global_string_const(457));
#line 1348
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__32));
#line 1348
c_rt_lib0clear(&___nl__im__23);
#line 1348
c_rt_lib0clear(&___nl__im__32);
#line 1348
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1348
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__34));
#line 1348
c_rt_lib0clear(&___nl__im__34);
#line 1348
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__33));
#line 1348
c_rt_lib0clear(&___nl__im__22);
#line 1348
c_rt_lib0clear(&___nl__im__33);
#line 1348
c_rt_lib0move(&___nl__im__35,___get_global_string_const(328));
#line 1348
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__35));
#line 1348
c_rt_lib0clear(&___nl__im__21);
#line 1348
c_rt_lib0clear(&___nl__im__35);
#line 1349
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1349
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__37));
#line 1349
c_rt_lib0clear(&___nl__im__37);
#line 1349
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__36));
#line 1349
c_rt_lib0clear(&___nl__im__20);
#line 1349
c_rt_lib0clear(&___nl__im__36);
#line 1349
c_rt_lib0move(&___nl__im__38,___get_global_string_const(322));
#line 1349
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__38));
#line 1349
c_rt_lib0clear(&___nl__im__19);
#line 1349
c_rt_lib0clear(&___nl__im__38);
#line 1350
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1350
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__40, ___nl__im__18));
#line 1350
c_rt_lib0clear(&___nl__im__40);
#line 1350
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__39));
#line 1350
c_rt_lib0clear(&___nl__im__39);
#line 1351
goto label_82;
#line 1351
label_82:
;
#line 1351
//clear ___nl__bool__2;
#line 1351
//clear ___nl__bool__12;
#line 1351
c_rt_lib0clear(&___nl__im__18);
#line 1351
c_rt_lib0clear(&___nl__im__1);
#line 1351
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
#line 1355
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1355
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1355
c_rt_lib0clear(&___nl__im__4);
#line 1355
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1355
c_rt_lib0clear(&___nl__im__3);
#line 1355
___nl__bool__2 = !___nl__bool__2;
#line 1355
if(___nl__bool__2){ goto label_23;}
#line 1357
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1358
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 1359
c_rt_lib0move(&___nl__im__8,___get_global_string_const(274));
#line 1360
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1360
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__11));
#line 1360
c_rt_lib0clear(&___nl__im__11);
#line 1360
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1360
c_rt_lib0clear(&___nl__im__10);
#line 1360
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__6, ___get_global_string_const(268), ___nl__im__7, ___get_global_string_const(270), ___nl__im__8, ___get_global_string_const(267), ___nl__im__9));
#line 1360
c_rt_lib0clear(&___nl__im__6);
#line 1360
c_rt_lib0clear(&___nl__im__7);
#line 1360
c_rt_lib0clear(&___nl__im__8);
#line 1360
c_rt_lib0clear(&___nl__im__9);
#line 1360
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1360
c_rt_lib0clear(&___nl__im__5);
#line 1362
goto label_53;
#line 1362
label_23:
;
#line 1363
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1363
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__16));
#line 1363
c_rt_lib0clear(&___nl__im__16);
#line 1363
c_rt_lib0move(&___nl__im__17,___get_global_string_const(611));
#line 1363
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__17));
#line 1363
c_rt_lib0clear(&___nl__im__15);
#line 1363
c_rt_lib0clear(&___nl__im__17);
#line 1363
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1363
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__19));
#line 1363
c_rt_lib0clear(&___nl__im__19);
#line 1363
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__18));
#line 1363
c_rt_lib0clear(&___nl__im__14);
#line 1363
c_rt_lib0clear(&___nl__im__18);
#line 1363
c_rt_lib0move(&___nl__im__20,___get_global_string_const(317));
#line 1363
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__20));
#line 1363
c_rt_lib0clear(&___nl__im__13);
#line 1363
c_rt_lib0clear(&___nl__im__20);
#line 1364
c_rt_lib0move(&___nl__im__22,___get_global_string_const(455));
#line 1364
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1364
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__25));
#line 1364
c_rt_lib0clear(&___nl__im__25);
#line 1364
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__12));
#line 1364
c_rt_lib0clear(&___nl__im__24);
#line 1364
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_fun_lib(___nl__im__22, ___nl__im__23));
#line 1364
c_rt_lib0clear(&___nl__im__22);
#line 1364
c_rt_lib0clear(&___nl__im__23);
#line 1364
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__21));
#line 1364
c_rt_lib0clear(&___nl__im__21);
#line 1365
goto label_53;
#line 1365
label_53:
;
#line 1365
//clear ___nl__bool__2;
#line 1365
c_rt_lib0clear(&___nl__im__12);
#line 1365
c_rt_lib0clear(&___nl__im__1);
#line 1365
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
#line 1369
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(128)));
#line 1369
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 1369
c_rt_lib0clear(&___nl__im__4);
#line 1369
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(131));
#line 1369
c_rt_lib0clear(&___nl__im__3);
#line 1369
___nl__bool__2 = !___nl__bool__2;
#line 1369
if(___nl__bool__2){ goto label_23;}
#line 1371
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1372
c_rt_lib0move(&___nl__im__7,___get_global_string_const(271));
#line 1373
c_rt_lib0move(&___nl__im__8,___get_global_string_const(273));
#line 1374
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1374
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__11));
#line 1374
c_rt_lib0clear(&___nl__im__11);
#line 1374
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1374
c_rt_lib0clear(&___nl__im__10);
#line 1374
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__6, ___get_global_string_const(268), ___nl__im__7, ___get_global_string_const(270), ___nl__im__8, ___get_global_string_const(267), ___nl__im__9));
#line 1374
c_rt_lib0clear(&___nl__im__6);
#line 1374
c_rt_lib0clear(&___nl__im__7);
#line 1374
c_rt_lib0clear(&___nl__im__8);
#line 1374
c_rt_lib0clear(&___nl__im__9);
#line 1374
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1374
c_rt_lib0clear(&___nl__im__5);
#line 1376
goto label_37;
#line 1376
label_23:
;
#line 1377
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(364)));
#line 1377
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__14));
#line 1377
c_rt_lib0clear(&___nl__im__14);
#line 1377
c_rt_lib0move(&___nl__im__15,___get_global_string_const(612));
#line 1377
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1377
c_rt_lib0clear(&___nl__im__13);
#line 1377
c_rt_lib0clear(&___nl__im__15);
#line 1378
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1378
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__17, ___nl__im__12));
#line 1378
c_rt_lib0clear(&___nl__im__17);
#line 1378
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__16));
#line 1378
c_rt_lib0clear(&___nl__im__16);
#line 1379
goto label_37;
#line 1379
label_37:
;
#line 1379
//clear ___nl__bool__2;
#line 1379
c_rt_lib0clear(&___nl__im__12);
#line 1379
c_rt_lib0clear(&___nl__im__1);
#line 1379
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
#line 1384
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(353)));
#line 1384
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(220));
#line 1384
if(___nl__bool__6){ goto label_8;}
#line 1387
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(422));
#line 1387
if(___nl__bool__6){ goto label_23;}
#line 1387
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 1387
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 1387
nl_die_arg(___nl__im__7);
#line 1384
label_8:
;
#line 1385
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(206)));
#line 1386
c_rt_lib0move(&___nl__im__10,___get_global_string_const(576));
#line 1386
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1386
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__3));
#line 1386
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1386
c_rt_lib0clear(&___nl__im__12);
#line 1386
c_rt_lib0clear(&___nl__im__13);
#line 1386
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__11));
#line 1386
c_rt_lib0clear(&___nl__im__10);
#line 1386
c_rt_lib0clear(&___nl__im__11);
#line 1386
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_value_from_im(___nl__im__8, ___nl__im__9));
#line 1386
c_rt_lib0clear(&___nl__im__8);
#line 1386
c_rt_lib0clear(&___nl__im__9);
#line 1387
goto label_71;
#line 1387
label_23:
;
#line 1388
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1388
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(559));
#line 1388
c_rt_lib0clear(&___nl__im__15);
#line 1388
___nl__bool__14 = !___nl__bool__14;
#line 1388
if(___nl__bool__14){ goto label_39;}
#line 1389
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1389
c_rt_lib0move(&___nl__im__18,___get_global_string_const(578));
#line 1389
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 1389
c_rt_lib0clear(&___nl__im__17);
#line 1389
c_rt_lib0clear(&___nl__im__18);
#line 1389
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_field_name(___nl__im__3));
#line 1389
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 1389
c_rt_lib0clear(&___nl__im__16);
#line 1389
c_rt_lib0clear(&___nl__im__19);
#line 1390
goto label_67;
#line 1390
label_39:
;
#line 1390
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1390
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(131));
#line 1390
c_rt_lib0clear(&___nl__im__20);
#line 1390
___nl__bool__14 = !___nl__bool__14;
#line 1390
if(___nl__bool__14){ goto label_63;}
#line 1391
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(206)));
#line 1392
c_rt_lib0move(&___nl__im__23,___get_global_string_const(576));
#line 1392
c_rt_lib0move(&___nl__im__26,___get_global_string_const(375));
#line 1392
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1392
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 1392
c_rt_lib0clear(&___nl__im__26);
#line 1392
c_rt_lib0clear(&___nl__im__27);
#line 1392
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__3));
#line 1392
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__28));
#line 1392
c_rt_lib0clear(&___nl__im__25);
#line 1392
c_rt_lib0clear(&___nl__im__28);
#line 1392
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_fun_lib(___nl__im__23, ___nl__im__24));
#line 1392
c_rt_lib0clear(&___nl__im__23);
#line 1392
c_rt_lib0clear(&___nl__im__24);
#line 1392
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_value_from_im(___nl__im__21, ___nl__im__22));
#line 1392
c_rt_lib0clear(&___nl__im__21);
#line 1392
c_rt_lib0clear(&___nl__im__22);
#line 1393
goto label_67;
#line 1393
label_63:
;
#line 1394
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1394
nl_die_arg(___nl__im__29);
#line 1395
goto label_67;
#line 1395
label_67:
;
#line 1395
//clear ___nl__bool__14;
#line 1395
c_rt_lib0clear(&___nl__im__29);
#line 1396
goto label_71;
#line 1396
label_71:
;
#line 1397
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__2, ___nl__im__4));
#line 1397
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__30));
#line 1397
c_rt_lib0clear(&___nl__im__30);
#line 1397
c_rt_lib0clear(&___nl__im__1);
#line 1397
c_rt_lib0clear(&___nl__im__2);
#line 1397
c_rt_lib0clear(&___nl__im__3);
#line 1397
c_rt_lib0clear(&___nl__im__4);
#line 1397
c_rt_lib0clear(&___nl__im__5);
#line 1397
//clear ___nl__bool__6;
#line 1397
c_rt_lib0clear(&___nl__im__7);
#line 1397
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
#line 1401
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__1));
#line 1401
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 1401
c_rt_lib0clear(&___nl__im__4);
#line 1401
___nl__bool__3 = !___nl__bool__3;
#line 1401
if(___nl__bool__3){ goto label_32;}
#line 1402
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1402
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 1402
c_rt_lib0clear(&___nl__im__6);
#line 1402
___nl__bool__5 = !___nl__bool__5;
#line 1402
if(___nl__bool__5){ goto label_21;}
#line 1403
c_rt_lib0move(&___nl__im__8,___get_global_string_const(175));
#line 1403
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__2));
#line 1403
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_fun_lib(___nl__im__8, ___nl__im__9));
#line 1403
c_rt_lib0clear(&___nl__im__8);
#line 1403
c_rt_lib0clear(&___nl__im__9);
#line 1403
c_rt_lib0clear(&___nl__im__1);
#line 1403
c_rt_lib0clear(&___nl__im__2);
#line 1403
//clear ___nl__bool__3;
#line 1403
//clear ___nl__bool__5;
#line 1403
return ___nl__im__7;
#line 1404
goto label_28;
#line 1404
label_21:
;
#line 1405
c_rt_lib0clear(&___nl__im__1);
#line 1405
//clear ___nl__bool__3;
#line 1405
//clear ___nl__bool__5;
#line 1405
c_rt_lib0clear(&___nl__im__7);
#line 1405
return ___nl__im__2;
#line 1406
goto label_28;
#line 1406
label_28:
;
#line 1406
//clear ___nl__bool__5;
#line 1406
c_rt_lib0clear(&___nl__im__7);
#line 1407
goto label_239;
#line 1407
label_32:
;
#line 1408
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1408
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(131));
#line 1408
if(___nl__bool__11){ goto label_53;}
#line 1410
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(405));
#line 1410
if(___nl__bool__11){ goto label_69;}
#line 1412
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(406));
#line 1412
if(___nl__bool__11){ goto label_86;}
#line 1414
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(33));
#line 1414
if(___nl__bool__11){ goto label_104;}
#line 1416
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(559));
#line 1416
if(___nl__bool__11){ goto label_123;}
#line 1418
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(127));
#line 1418
if(___nl__bool__11){ goto label_147;}
#line 1420
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(563));
#line 1420
if(___nl__bool__11){ goto label_174;}
#line 1422
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(128));
#line 1422
if(___nl__bool__11){ goto label_204;}
#line 1422
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 1422
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 1422
nl_die_arg(___nl__im__12);
#line 1408
label_53:
;
#line 1409
c_rt_lib0move(&___nl__im__14,___get_global_string_const(240));
#line 1409
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__1));
#line 1409
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__2));
#line 1409
c_rt_lib0clear(&___nl__im__16);
#line 1409
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__14, ___nl__im__15));
#line 1409
c_rt_lib0clear(&___nl__im__14);
#line 1409
c_rt_lib0clear(&___nl__im__15);
#line 1409
c_rt_lib0clear(&___nl__im__1);
#line 1409
c_rt_lib0clear(&___nl__im__2);
#line 1409
//clear ___nl__bool__3;
#line 1409
c_rt_lib0clear(&___nl__im__10);
#line 1409
//clear ___nl__bool__11;
#line 1409
c_rt_lib0clear(&___nl__im__12);
#line 1409
return ___nl__im__13;
#line 1410
goto label_237;
#line 1410
label_69:
;
#line 1411
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1411
c_rt_lib0move(&___nl__im__20,___get_global_string_const(504));
#line 1411
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 1411
c_rt_lib0clear(&___nl__im__19);
#line 1411
c_rt_lib0clear(&___nl__im__20);
#line 1411
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__2));
#line 1411
c_rt_lib0clear(&___nl__im__18);
#line 1411
c_rt_lib0clear(&___nl__im__1);
#line 1411
c_rt_lib0clear(&___nl__im__2);
#line 1411
//clear ___nl__bool__3;
#line 1411
c_rt_lib0clear(&___nl__im__10);
#line 1411
//clear ___nl__bool__11;
#line 1411
c_rt_lib0clear(&___nl__im__12);
#line 1411
c_rt_lib0clear(&___nl__im__13);
#line 1411
return ___nl__im__17;
#line 1412
goto label_237;
#line 1412
label_86:
;
#line 1413
c_rt_lib0move(&___nl__im__22,___get_global_string_const(240));
#line 1413
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__1));
#line 1413
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__2));
#line 1413
c_rt_lib0clear(&___nl__im__24);
#line 1413
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_fun_lib(___nl__im__22, ___nl__im__23));
#line 1413
c_rt_lib0clear(&___nl__im__22);
#line 1413
c_rt_lib0clear(&___nl__im__23);
#line 1413
c_rt_lib0clear(&___nl__im__1);
#line 1413
c_rt_lib0clear(&___nl__im__2);
#line 1413
//clear ___nl__bool__3;
#line 1413
c_rt_lib0clear(&___nl__im__10);
#line 1413
//clear ___nl__bool__11;
#line 1413
c_rt_lib0clear(&___nl__im__12);
#line 1413
c_rt_lib0clear(&___nl__im__13);
#line 1413
c_rt_lib0clear(&___nl__im__17);
#line 1413
return ___nl__im__21;
#line 1414
goto label_237;
#line 1414
label_104:
;
#line 1415
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1415
c_rt_lib0move(&___nl__im__28,___get_global_string_const(504));
#line 1415
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 1415
c_rt_lib0clear(&___nl__im__27);
#line 1415
c_rt_lib0clear(&___nl__im__28);
#line 1415
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__2));
#line 1415
c_rt_lib0clear(&___nl__im__26);
#line 1415
c_rt_lib0clear(&___nl__im__1);
#line 1415
c_rt_lib0clear(&___nl__im__2);
#line 1415
//clear ___nl__bool__3;
#line 1415
c_rt_lib0clear(&___nl__im__10);
#line 1415
//clear ___nl__bool__11;
#line 1415
c_rt_lib0clear(&___nl__im__12);
#line 1415
c_rt_lib0clear(&___nl__im__13);
#line 1415
c_rt_lib0clear(&___nl__im__17);
#line 1415
c_rt_lib0clear(&___nl__im__21);
#line 1415
return ___nl__im__25;
#line 1416
goto label_237;
#line 1416
label_123:
;
#line 1416
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(559)));
#line 1416
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1417
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1417
c_rt_lib0move(&___nl__im__34,___get_global_string_const(504));
#line 1417
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 1417
c_rt_lib0clear(&___nl__im__33);
#line 1417
c_rt_lib0clear(&___nl__im__34);
#line 1417
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__2));
#line 1417
c_rt_lib0clear(&___nl__im__32);
#line 1417
c_rt_lib0clear(&___nl__im__1);
#line 1417
c_rt_lib0clear(&___nl__im__2);
#line 1417
//clear ___nl__bool__3;
#line 1417
c_rt_lib0clear(&___nl__im__10);
#line 1417
//clear ___nl__bool__11;
#line 1417
c_rt_lib0clear(&___nl__im__12);
#line 1417
c_rt_lib0clear(&___nl__im__13);
#line 1417
c_rt_lib0clear(&___nl__im__17);
#line 1417
c_rt_lib0clear(&___nl__im__21);
#line 1417
c_rt_lib0clear(&___nl__im__25);
#line 1417
c_rt_lib0clear(&___nl__im__29);
#line 1417
c_rt_lib0clear(&___nl__im__30);
#line 1417
return ___nl__im__31;
#line 1418
goto label_237;
#line 1418
label_147:
;
#line 1418
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(127)));
#line 1418
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1419
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1419
c_rt_lib0move(&___nl__im__40,___get_global_string_const(504));
#line 1419
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__40));
#line 1419
c_rt_lib0clear(&___nl__im__39);
#line 1419
c_rt_lib0clear(&___nl__im__40);
#line 1419
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__2));
#line 1419
c_rt_lib0clear(&___nl__im__38);
#line 1419
c_rt_lib0clear(&___nl__im__1);
#line 1419
c_rt_lib0clear(&___nl__im__2);
#line 1419
//clear ___nl__bool__3;
#line 1419
c_rt_lib0clear(&___nl__im__10);
#line 1419
//clear ___nl__bool__11;
#line 1419
c_rt_lib0clear(&___nl__im__12);
#line 1419
c_rt_lib0clear(&___nl__im__13);
#line 1419
c_rt_lib0clear(&___nl__im__17);
#line 1419
c_rt_lib0clear(&___nl__im__21);
#line 1419
c_rt_lib0clear(&___nl__im__25);
#line 1419
c_rt_lib0clear(&___nl__im__29);
#line 1419
c_rt_lib0clear(&___nl__im__30);
#line 1419
c_rt_lib0clear(&___nl__im__31);
#line 1419
c_rt_lib0clear(&___nl__im__35);
#line 1419
c_rt_lib0clear(&___nl__im__36);
#line 1419
return ___nl__im__37;
#line 1420
goto label_237;
#line 1420
label_174:
;
#line 1420
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(563)));
#line 1420
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 1421
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1421
c_rt_lib0move(&___nl__im__46,___get_global_string_const(504));
#line 1421
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__46));
#line 1421
c_rt_lib0clear(&___nl__im__45);
#line 1421
c_rt_lib0clear(&___nl__im__46);
#line 1421
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__2));
#line 1421
c_rt_lib0clear(&___nl__im__44);
#line 1421
c_rt_lib0clear(&___nl__im__1);
#line 1421
c_rt_lib0clear(&___nl__im__2);
#line 1421
//clear ___nl__bool__3;
#line 1421
c_rt_lib0clear(&___nl__im__10);
#line 1421
//clear ___nl__bool__11;
#line 1421
c_rt_lib0clear(&___nl__im__12);
#line 1421
c_rt_lib0clear(&___nl__im__13);
#line 1421
c_rt_lib0clear(&___nl__im__17);
#line 1421
c_rt_lib0clear(&___nl__im__21);
#line 1421
c_rt_lib0clear(&___nl__im__25);
#line 1421
c_rt_lib0clear(&___nl__im__29);
#line 1421
c_rt_lib0clear(&___nl__im__30);
#line 1421
c_rt_lib0clear(&___nl__im__31);
#line 1421
c_rt_lib0clear(&___nl__im__35);
#line 1421
c_rt_lib0clear(&___nl__im__36);
#line 1421
c_rt_lib0clear(&___nl__im__37);
#line 1421
c_rt_lib0clear(&___nl__im__41);
#line 1421
c_rt_lib0clear(&___nl__im__42);
#line 1421
return ___nl__im__43;
#line 1422
goto label_237;
#line 1422
label_204:
;
#line 1422
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(128)));
#line 1422
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 1423
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1423
c_rt_lib0move(&___nl__im__52,___get_global_string_const(504));
#line 1423
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 1423
c_rt_lib0clear(&___nl__im__51);
#line 1423
c_rt_lib0clear(&___nl__im__52);
#line 1423
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__2));
#line 1423
c_rt_lib0clear(&___nl__im__50);
#line 1423
c_rt_lib0clear(&___nl__im__1);
#line 1423
c_rt_lib0clear(&___nl__im__2);
#line 1423
//clear ___nl__bool__3;
#line 1423
c_rt_lib0clear(&___nl__im__10);
#line 1423
//clear ___nl__bool__11;
#line 1423
c_rt_lib0clear(&___nl__im__12);
#line 1423
c_rt_lib0clear(&___nl__im__13);
#line 1423
c_rt_lib0clear(&___nl__im__17);
#line 1423
c_rt_lib0clear(&___nl__im__21);
#line 1423
c_rt_lib0clear(&___nl__im__25);
#line 1423
c_rt_lib0clear(&___nl__im__29);
#line 1423
c_rt_lib0clear(&___nl__im__30);
#line 1423
c_rt_lib0clear(&___nl__im__31);
#line 1423
c_rt_lib0clear(&___nl__im__35);
#line 1423
c_rt_lib0clear(&___nl__im__36);
#line 1423
c_rt_lib0clear(&___nl__im__37);
#line 1423
c_rt_lib0clear(&___nl__im__41);
#line 1423
c_rt_lib0clear(&___nl__im__42);
#line 1423
c_rt_lib0clear(&___nl__im__43);
#line 1423
c_rt_lib0clear(&___nl__im__47);
#line 1423
c_rt_lib0clear(&___nl__im__48);
#line 1423
return ___nl__im__49;
#line 1424
goto label_237;
#line 1424
label_237:
;
#line 1425
goto label_239;
#line 1425
label_239:
;
#line 1425
//clear ___nl__bool__3;
#line 1425
c_rt_lib0clear(&___nl__im__10);
#line 1425
//clear ___nl__bool__11;
#line 1425
c_rt_lib0clear(&___nl__im__12);
#line 1425
c_rt_lib0clear(&___nl__im__13);
#line 1425
c_rt_lib0clear(&___nl__im__17);
#line 1425
c_rt_lib0clear(&___nl__im__21);
#line 1425
c_rt_lib0clear(&___nl__im__25);
#line 1425
c_rt_lib0clear(&___nl__im__29);
#line 1425
c_rt_lib0clear(&___nl__im__30);
#line 1425
c_rt_lib0clear(&___nl__im__31);
#line 1425
c_rt_lib0clear(&___nl__im__35);
#line 1425
c_rt_lib0clear(&___nl__im__36);
#line 1425
c_rt_lib0clear(&___nl__im__37);
#line 1425
c_rt_lib0clear(&___nl__im__41);
#line 1425
c_rt_lib0clear(&___nl__im__42);
#line 1425
c_rt_lib0clear(&___nl__im__43);
#line 1425
c_rt_lib0clear(&___nl__im__47);
#line 1425
c_rt_lib0clear(&___nl__im__48);
#line 1425
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
#line 1429
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(268)));
#line 1429
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(270)));
#line 1429
___nl__im_ptr__7 = &((*___ref___rec__0).mod_name0field);
#line 1429
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1429
___nl__im_ptr__7 = NULL;
#line 1429
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_fun_name(___nl__im__4, ___nl__im__5, ___nl__im__6));
#line 1429
c_rt_lib0clear(&___nl__im__4);
#line 1429
c_rt_lib0clear(&___nl__im__5);
#line 1429
c_rt_lib0clear(&___nl__im__6);
#line 1429
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 1429
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 1429
c_rt_lib0clear(&___nl__im__3);
#line 1429
c_rt_lib0clear(&___nl__im__8);
#line 1430
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(267)));
#line 1430
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 1430
c_rt_lib0clear(&___nl__im__10);
#line 1430
___nl__int__11 = 0;
#line 1430
___nl__int__12 = 1;
#line 1430
label_18:
;
#line 1430
___nl__bool__13 = ___nl__int__11 >= ___nl__int__9;
#line 1430
if(___nl__bool__13){ goto label_67;}
#line 1431
___nl__int__15 = 0;
#line 1431
___nl__bool__14 = ___nl__int__15 == ___nl__int__11;
#line 1431
//clear ___nl__int__15;
#line 1431
___nl__bool__14 = !___nl__bool__14;
#line 1431
___nl__bool__14 = !___nl__bool__14;
#line 1431
if(___nl__bool__14){ goto label_31;}
#line 1431
c_rt_lib0move(&___nl__im__16,___get_global_string_const(328));
#line 1431
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 1431
c_rt_lib0clear(&___nl__im__16);
#line 1431
goto label_31;
#line 1431
label_31:
;
#line 1431
//clear ___nl__bool__14;
#line 1432
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(267)));
#line 1432
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__11));
#line 1432
c_rt_lib0clear(&___nl__im__18);
#line 1432
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(225));
#line 1432
if(___nl__bool__19){ goto label_43;}
#line 1434
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(39));
#line 1434
if(___nl__bool__19){ goto label_50;}
#line 1434
c_rt_lib0move(&___nl__im__20,___get_global_string_const(15));
#line 1434
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(2, ___nl__im__20, ___nl__im__17));
#line 1434
nl_die_arg(___nl__im__20);
#line 1432
label_43:
;
#line 1432
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(225)));
#line 1432
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 1433
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__21));
#line 1433
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 1433
c_rt_lib0clear(&___nl__im__23);
#line 1434
goto label_57;
#line 1434
label_50:
;
#line 1434
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(39)));
#line 1434
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1435
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__24));
#line 1435
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 1435
c_rt_lib0clear(&___nl__im__26);
#line 1436
goto label_57;
#line 1436
label_57:
;
#line 1436
c_rt_lib0clear(&___nl__im__17);
#line 1436
//clear ___nl__bool__19;
#line 1436
c_rt_lib0clear(&___nl__im__20);
#line 1436
c_rt_lib0clear(&___nl__im__21);
#line 1436
c_rt_lib0clear(&___nl__im__22);
#line 1436
c_rt_lib0clear(&___nl__im__24);
#line 1436
c_rt_lib0clear(&___nl__im__25);
#line 1437
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1437
goto label_18;
#line 1437
label_67:
;
#line 1438
c_rt_lib0move(&___nl__im__27,___get_global_string_const(322));
#line 1438
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 1438
c_rt_lib0clear(&___nl__im__27);
#line 1439
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1439
c_rt_lib0move(&___nl__im__30, nlasm0is_empty(___nl__im__29));
#line 1439
___nl__bool__28 = c_rt_lib0check_true_native(___nl__im__30);
#line 1439
c_rt_lib0clear(&___nl__im__29);
#line 1439
c_rt_lib0clear(&___nl__im__30);
#line 1439
___nl__bool__28 = !___nl__bool__28;
#line 1439
if(___nl__bool__28){ goto label_84;}
#line 1440
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1440
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__32, ___nl__im__2));
#line 1440
c_rt_lib0clear(&___nl__im__32);
#line 1440
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__31));
#line 1440
c_rt_lib0clear(&___nl__im__31);
#line 1441
goto label_91;
#line 1441
label_84:
;
#line 1442
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(224)));
#line 1442
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__34, ___nl__im__2));
#line 1442
c_rt_lib0clear(&___nl__im__34);
#line 1442
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__33));
#line 1442
c_rt_lib0clear(&___nl__im__33);
#line 1443
goto label_91;
#line 1443
label_91:
;
#line 1443
//clear ___nl__bool__28;
#line 1443
c_rt_lib0clear(&___nl__im__1);
#line 1443
c_rt_lib0clear(&___nl__im__2);
#line 1443
//clear ___nl__int__9;
#line 1443
//clear ___nl__int__11;
#line 1443
//clear ___nl__int__12;
#line 1443
//clear ___nl__bool__13;
#line 1443
c_rt_lib0clear(&___nl__im__17);
#line 1443
//clear ___nl__bool__19;
#line 1443
c_rt_lib0clear(&___nl__im__20);
#line 1443
c_rt_lib0clear(&___nl__im__21);
#line 1443
c_rt_lib0clear(&___nl__im__22);
#line 1443
c_rt_lib0clear(&___nl__im__24);
#line 1443
c_rt_lib0clear(&___nl__im__25);
#line 1443
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
#line 1447
c_rt_lib0move(&___nl__im__5,___get_global_string_const(598));
#line 1447
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_lib_fun(___nl__im__5));
#line 1447
c_rt_lib0clear(&___nl__im__5);
#line 1447
c_rt_lib0move(&___nl__im__6,___get_global_string_const(457));
#line 1447
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 1447
c_rt_lib0clear(&___nl__im__4);
#line 1447
c_rt_lib0clear(&___nl__im__6);
#line 1447
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 1447
c_rt_lib0clear(&___nl__im__3);
#line 1447
c_rt_lib0move(&___nl__im__7,___get_global_string_const(322));
#line 1447
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__7));
#line 1447
c_rt_lib0clear(&___nl__im__2);
#line 1447
c_rt_lib0clear(&___nl__im__7);
#line 1447
c_rt_lib0clear(&___nl__im__0);
#line 1447
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
#line 1451
c_rt_lib0move(&___nl__im__1,___get_global_string_const(109));
#line 1451
c_rt_lib0move(&___nl__im__2,___get_global_string_const(325));
#line 1451
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 1451
c_rt_lib0clear(&___nl__im__1);
#line 1451
c_rt_lib0clear(&___nl__im__2);
#line 1452
c_rt_lib0move(&___nl__im__3, string0lf());
#line 1452
c_rt_lib0move(&___nl__im__4,___get_global_string_const(329));
#line 1452
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 1452
c_rt_lib0clear(&___nl__im__3);
#line 1452
c_rt_lib0clear(&___nl__im__4);
#line 1453
c_rt_lib0move(&___nl__im__5, string0r());
#line 1453
c_rt_lib0move(&___nl__im__6,___get_global_string_const(330));
#line 1453
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 1453
c_rt_lib0clear(&___nl__im__5);
#line 1453
c_rt_lib0clear(&___nl__im__6);
#line 1454
c_rt_lib0move(&___nl__im__7, string0tab());
#line 1454
c_rt_lib0move(&___nl__im__8,___get_global_string_const(613));
#line 1454
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 1454
c_rt_lib0clear(&___nl__im__7);
#line 1454
c_rt_lib0clear(&___nl__im__8);
#line 1455
c_rt_lib0move(&___nl__im__9,___get_global_string_const(281));
#line 1455
c_rt_lib0move(&___nl__im__10,___get_global_string_const(326));
#line 1455
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 1455
c_rt_lib0clear(&___nl__im__9);
#line 1455
c_rt_lib0clear(&___nl__im__10);
#line 1456
c_rt_lib0move(&___nl__im__11,___get_global_string_const(140));
#line 1456
c_rt_lib0move(&___nl__im__12,___get_global_string_const(614));
#line 1456
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 1456
c_rt_lib0clear(&___nl__im__11);
#line 1456
c_rt_lib0clear(&___nl__im__12);
#line 1457
c_rt_lib0move(&___nl__im__17,___get_global_string_const(615));
#line 1457
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_lib_fun(___nl__im__17));
#line 1457
c_rt_lib0clear(&___nl__im__17);
#line 1457
c_rt_lib0move(&___nl__im__18,___get_global_string_const(616));
#line 1457
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__18));
#line 1457
c_rt_lib0clear(&___nl__im__16);
#line 1457
c_rt_lib0clear(&___nl__im__18);
#line 1457
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__0));
#line 1457
c_rt_lib0clear(&___nl__im__15);
#line 1457
c_rt_lib0move(&___nl__im__19,___get_global_string_const(617));
#line 1457
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 1457
c_rt_lib0clear(&___nl__im__14);
#line 1457
c_rt_lib0clear(&___nl__im__19);
#line 1457
c_rt_lib0clear(&___nl__im__0);
#line 1457
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
#line 1461
c_rt_lib0move(&___nl__im__8,___get_global_string_const(618));
#line 1461
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_lib_fun(___nl__im__8));
#line 1461
c_rt_lib0clear(&___nl__im__8);
#line 1461
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 1461
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 1461
c_rt_lib0clear(&___nl__im__7);
#line 1461
c_rt_lib0clear(&___nl__im__9);
#line 1461
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__0));
#line 1461
c_rt_lib0clear(&___nl__im__6);
#line 1461
c_rt_lib0move(&___nl__im__10,___get_global_string_const(314));
#line 1461
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 1461
c_rt_lib0clear(&___nl__im__5);
#line 1461
c_rt_lib0clear(&___nl__im__10);
#line 1461
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__1));
#line 1461
c_rt_lib0clear(&___nl__im__4);
#line 1461
c_rt_lib0move(&___nl__im__11,___get_global_string_const(322));
#line 1461
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__11));
#line 1461
c_rt_lib0clear(&___nl__im__3);
#line 1461
c_rt_lib0clear(&___nl__im__11);
#line 1461
c_rt_lib0clear(&___nl__im__0);
#line 1461
c_rt_lib0clear(&___nl__im__1);
#line 1461
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
#line 1465
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1465
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 1465
c_rt_lib0clear(&___nl__im__3);
#line 1466
c_rt_lib0move(&___nl__im__4,___get_global_string_const(109));
#line 1466
c_rt_lib0move(&___nl__im__5,___get_global_string_const(325));
#line 1466
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__4, ___nl__im__5));
#line 1466
c_rt_lib0clear(&___nl__im__4);
#line 1466
c_rt_lib0clear(&___nl__im__5);
#line 1467
c_rt_lib0move(&___nl__im__6, string0lf());
#line 1467
c_rt_lib0move(&___nl__im__7,___get_global_string_const(329));
#line 1467
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__6, ___nl__im__7));
#line 1467
c_rt_lib0clear(&___nl__im__6);
#line 1467
c_rt_lib0clear(&___nl__im__7);
#line 1468
c_rt_lib0move(&___nl__im__8, string0r());
#line 1468
c_rt_lib0move(&___nl__im__9,___get_global_string_const(330));
#line 1468
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__8, ___nl__im__9));
#line 1468
c_rt_lib0clear(&___nl__im__8);
#line 1468
c_rt_lib0clear(&___nl__im__9);
#line 1469
c_rt_lib0move(&___nl__im__10, string0tab());
#line 1469
c_rt_lib0move(&___nl__im__11,___get_global_string_const(613));
#line 1469
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__10, ___nl__im__11));
#line 1469
c_rt_lib0clear(&___nl__im__10);
#line 1469
c_rt_lib0clear(&___nl__im__11);
#line 1470
c_rt_lib0move(&___nl__im__12,___get_global_string_const(281));
#line 1470
c_rt_lib0move(&___nl__im__13,___get_global_string_const(326));
#line 1470
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__12, ___nl__im__13));
#line 1470
c_rt_lib0clear(&___nl__im__12);
#line 1470
c_rt_lib0clear(&___nl__im__13);
#line 1471
c_rt_lib0move(&___nl__im__14,___get_global_string_const(140));
#line 1471
c_rt_lib0move(&___nl__im__15,___get_global_string_const(614));
#line 1471
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__14, ___nl__im__15));
#line 1471
c_rt_lib0clear(&___nl__im__14);
#line 1471
c_rt_lib0clear(&___nl__im__15);
#line 1472
___nl__int__17 = 0;
#line 1472
c_rt_lib0move(&___nl__im__16, string0chr(___nl__int__17));
#line 1472
//clear ___nl__int__17;
#line 1472
c_rt_lib0move(&___nl__im__18,___get_global_string_const(619));
#line 1472
c_rt_lib0move(&___nl__im__2, string0replace(___nl__im__2, ___nl__im__16, ___nl__im__18));
#line 1472
c_rt_lib0clear(&___nl__im__16);
#line 1472
c_rt_lib0clear(&___nl__im__18);
#line 1473
c_rt_lib0move(&___nl__im__25,___get_global_string_const(620));
#line 1473
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_lib_fun(___nl__im__25));
#line 1473
c_rt_lib0clear(&___nl__im__25);
#line 1473
c_rt_lib0move(&___nl__im__26,___get_global_string_const(616));
#line 1473
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__26));
#line 1473
c_rt_lib0clear(&___nl__im__24);
#line 1473
c_rt_lib0clear(&___nl__im__26);
#line 1473
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__2));
#line 1473
c_rt_lib0clear(&___nl__im__23);
#line 1473
c_rt_lib0move(&___nl__im__27,___get_global_string_const(621));
#line 1473
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__27));
#line 1473
c_rt_lib0clear(&___nl__im__22);
#line 1473
c_rt_lib0clear(&___nl__im__27);
#line 1473
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__1));
#line 1473
c_rt_lib0clear(&___nl__im__21);
#line 1473
c_rt_lib0move(&___nl__im__28,___get_global_string_const(322));
#line 1473
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__28));
#line 1473
c_rt_lib0clear(&___nl__im__20);
#line 1473
c_rt_lib0clear(&___nl__im__28);
#line 1473
c_rt_lib0clear(&___nl__im__0);
#line 1473
c_rt_lib0clear(&___nl__im__1);
#line 1473
c_rt_lib0clear(&___nl__im__2);
#line 1473
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
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
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
#line 1477
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1477
if(___nl__bool__2){ goto label_33;}
#line 1479
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1479
if(___nl__bool__2){ goto label_41;}
#line 1481
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1481
if(___nl__bool__2){ goto label_54;}
#line 1488
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1488
if(___nl__bool__2){ goto label_84;}
#line 1490
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1490
if(___nl__bool__2){ goto label_103;}
#line 1498
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1498
if(___nl__bool__2){ goto label_147;}
#line 1500
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1500
if(___nl__bool__2){ goto label_172;}
#line 1507
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1507
if(___nl__bool__2){ goto label_245;}
#line 1509
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1509
if(___nl__bool__2){ goto label_280;}
#line 1511
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1511
if(___nl__bool__2){ goto label_314;}
#line 1513
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1513
if(___nl__bool__2){ goto label_349;}
#line 1515
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1515
if(___nl__bool__2){ goto label_385;}
#line 1517
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1517
if(___nl__bool__2){ goto label_422;}
#line 1519
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1519
if(___nl__bool__2){ goto label_464;}
#line 1534
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1534
if(___nl__bool__2){ goto label_592;}
#line 1534
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1534
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1534
nl_die_arg(___nl__im__3);
#line 1477
label_33:
;
#line 1478
c_rt_lib0move(&___nl__im__4, generator_c_priv0im_t());
#line 1478
c_rt_lib0clear(&___nl__im__0);
#line 1478
c_rt_lib0clear(&___nl__im__1);
#line 1478
//clear ___nl__bool__2;
#line 1478
c_rt_lib0clear(&___nl__im__3);
#line 1478
return ___nl__im__4;
#line 1479
goto label_644;
#line 1479
label_41:
;
#line 1479
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1479
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 1480
c_rt_lib0move(&___nl__im__7, generator_c_priv0im_t());
#line 1480
c_rt_lib0clear(&___nl__im__0);
#line 1480
c_rt_lib0clear(&___nl__im__1);
#line 1480
//clear ___nl__bool__2;
#line 1480
c_rt_lib0clear(&___nl__im__3);
#line 1480
c_rt_lib0clear(&___nl__im__4);
#line 1480
c_rt_lib0clear(&___nl__im__5);
#line 1480
c_rt_lib0clear(&___nl__im__6);
#line 1480
return ___nl__im__7;
#line 1481
goto label_644;
#line 1481
label_54:
;
#line 1481
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1481
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1482
c_rt_lib0move(&___nl__im__14,___get_global_string_const(622));
#line 1482
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1482
c_rt_lib0clear(&___nl__im__14);
#line 1482
c_rt_lib0move(&___nl__im__15,___get_global_string_const(623));
#line 1482
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1482
c_rt_lib0clear(&___nl__im__13);
#line 1482
c_rt_lib0clear(&___nl__im__15);
#line 1485
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_type_name(___nl__im__8));
#line 1485
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 1485
c_rt_lib0clear(&___nl__im__12);
#line 1485
c_rt_lib0clear(&___nl__im__16);
#line 1485
c_rt_lib0move(&___nl__im__17,___get_global_string_const(624));
#line 1485
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__17));
#line 1485
c_rt_lib0clear(&___nl__im__11);
#line 1485
c_rt_lib0clear(&___nl__im__17);
#line 1487
c_rt_lib0clear(&___nl__im__0);
#line 1487
c_rt_lib0clear(&___nl__im__1);
#line 1487
//clear ___nl__bool__2;
#line 1487
c_rt_lib0clear(&___nl__im__3);
#line 1487
c_rt_lib0clear(&___nl__im__4);
#line 1487
c_rt_lib0clear(&___nl__im__5);
#line 1487
c_rt_lib0clear(&___nl__im__6);
#line 1487
c_rt_lib0clear(&___nl__im__7);
#line 1487
c_rt_lib0clear(&___nl__im__8);
#line 1487
c_rt_lib0clear(&___nl__im__9);
#line 1487
return ___nl__im__10;
#line 1488
goto label_644;
#line 1488
label_84:
;
#line 1488
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1488
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1489
c_rt_lib0move(&___nl__im__20, generator_c_priv0im_t());
#line 1489
c_rt_lib0clear(&___nl__im__0);
#line 1489
c_rt_lib0clear(&___nl__im__1);
#line 1489
//clear ___nl__bool__2;
#line 1489
c_rt_lib0clear(&___nl__im__3);
#line 1489
c_rt_lib0clear(&___nl__im__4);
#line 1489
c_rt_lib0clear(&___nl__im__5);
#line 1489
c_rt_lib0clear(&___nl__im__6);
#line 1489
c_rt_lib0clear(&___nl__im__7);
#line 1489
c_rt_lib0clear(&___nl__im__8);
#line 1489
c_rt_lib0clear(&___nl__im__9);
#line 1489
c_rt_lib0clear(&___nl__im__10);
#line 1489
c_rt_lib0clear(&___nl__im__18);
#line 1489
c_rt_lib0clear(&___nl__im__19);
#line 1489
return ___nl__im__20;
#line 1490
goto label_644;
#line 1490
label_103:
;
#line 1490
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1490
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 1491
c_rt_lib0move(&___nl__im__29,___get_global_string_const(622));
#line 1491
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__1));
#line 1491
c_rt_lib0clear(&___nl__im__29);
#line 1491
c_rt_lib0move(&___nl__im__30,___get_global_string_const(623));
#line 1491
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__30));
#line 1491
c_rt_lib0clear(&___nl__im__28);
#line 1491
c_rt_lib0clear(&___nl__im__30);
#line 1494
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_type_name(___nl__im__21));
#line 1494
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 1494
c_rt_lib0clear(&___nl__im__27);
#line 1494
c_rt_lib0clear(&___nl__im__31);
#line 1494
c_rt_lib0move(&___nl__im__32,___get_global_string_const(625));
#line 1494
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__32));
#line 1494
c_rt_lib0clear(&___nl__im__26);
#line 1494
c_rt_lib0clear(&___nl__im__32);
#line 1495
c_rt_lib0move(&___nl__im__33, generator_c_priv0im_t());
#line 1495
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__33));
#line 1495
c_rt_lib0clear(&___nl__im__25);
#line 1495
c_rt_lib0clear(&___nl__im__33);
#line 1495
c_rt_lib0move(&___nl__im__34,___get_global_string_const(626));
#line 1495
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__34));
#line 1495
c_rt_lib0clear(&___nl__im__24);
#line 1495
c_rt_lib0clear(&___nl__im__34);
#line 1497
c_rt_lib0clear(&___nl__im__0);
#line 1497
c_rt_lib0clear(&___nl__im__1);
#line 1497
//clear ___nl__bool__2;
#line 1497
c_rt_lib0clear(&___nl__im__3);
#line 1497
c_rt_lib0clear(&___nl__im__4);
#line 1497
c_rt_lib0clear(&___nl__im__5);
#line 1497
c_rt_lib0clear(&___nl__im__6);
#line 1497
c_rt_lib0clear(&___nl__im__7);
#line 1497
c_rt_lib0clear(&___nl__im__8);
#line 1497
c_rt_lib0clear(&___nl__im__9);
#line 1497
c_rt_lib0clear(&___nl__im__10);
#line 1497
c_rt_lib0clear(&___nl__im__18);
#line 1497
c_rt_lib0clear(&___nl__im__19);
#line 1497
c_rt_lib0clear(&___nl__im__20);
#line 1497
c_rt_lib0clear(&___nl__im__21);
#line 1497
c_rt_lib0clear(&___nl__im__22);
#line 1497
return ___nl__im__23;
#line 1498
goto label_644;
#line 1498
label_147:
;
#line 1498
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1498
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1499
c_rt_lib0move(&___nl__im__37, generator_c_priv0im_t());
#line 1499
c_rt_lib0clear(&___nl__im__0);
#line 1499
c_rt_lib0clear(&___nl__im__1);
#line 1499
//clear ___nl__bool__2;
#line 1499
c_rt_lib0clear(&___nl__im__3);
#line 1499
c_rt_lib0clear(&___nl__im__4);
#line 1499
c_rt_lib0clear(&___nl__im__5);
#line 1499
c_rt_lib0clear(&___nl__im__6);
#line 1499
c_rt_lib0clear(&___nl__im__7);
#line 1499
c_rt_lib0clear(&___nl__im__8);
#line 1499
c_rt_lib0clear(&___nl__im__9);
#line 1499
c_rt_lib0clear(&___nl__im__10);
#line 1499
c_rt_lib0clear(&___nl__im__18);
#line 1499
c_rt_lib0clear(&___nl__im__19);
#line 1499
c_rt_lib0clear(&___nl__im__20);
#line 1499
c_rt_lib0clear(&___nl__im__21);
#line 1499
c_rt_lib0clear(&___nl__im__22);
#line 1499
c_rt_lib0clear(&___nl__im__23);
#line 1499
c_rt_lib0clear(&___nl__im__35);
#line 1499
c_rt_lib0clear(&___nl__im__36);
#line 1499
return ___nl__im__37;
#line 1500
goto label_644;
#line 1500
label_172:
;
#line 1500
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1500
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 1501
c_rt_lib0move(&___nl__im__43,___get_global_string_const(622));
#line 1501
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__1));
#line 1501
c_rt_lib0clear(&___nl__im__43);
#line 1501
c_rt_lib0move(&___nl__im__44,___get_global_string_const(536));
#line 1501
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__44));
#line 1501
c_rt_lib0clear(&___nl__im__42);
#line 1501
c_rt_lib0clear(&___nl__im__44);
#line 1501
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1501
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__45));
#line 1501
c_rt_lib0clear(&___nl__im__41);
#line 1501
c_rt_lib0clear(&___nl__im__45);
#line 1502
c_rt_lib0move(&___nl__im__49, c_rt_lib0init_iter(___nl__im__38));
#line 1502
label_187:
;
#line 1502
___nl__bool__47 = c_rt_lib0is_end_hash(___nl__im__49);
#line 1502
if(___nl__bool__47){ goto label_213;}
#line 1502
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_key_iter(___nl__im__49));
#line 1502
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value(___nl__im__38, ___nl__im__46));
#line 1503
c_rt_lib0move(&___nl__im__54, generator_c_priv0get_type_name(___nl__im__48));
#line 1503
c_rt_lib0move(&___nl__im__55,___get_global_string_const(469));
#line 1503
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__55));
#line 1503
c_rt_lib0clear(&___nl__im__54);
#line 1503
c_rt_lib0clear(&___nl__im__55);
#line 1503
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_field_name(___nl__im__46));
#line 1503
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__56));
#line 1503
c_rt_lib0clear(&___nl__im__53);
#line 1503
c_rt_lib0clear(&___nl__im__56);
#line 1503
c_rt_lib0move(&___nl__im__57,___get_global_string_const(442));
#line 1503
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__57));
#line 1503
c_rt_lib0clear(&___nl__im__52);
#line 1503
c_rt_lib0clear(&___nl__im__57);
#line 1503
c_rt_lib0move(&___nl__im__58, string0lf());
#line 1503
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__58));
#line 1503
c_rt_lib0clear(&___nl__im__51);
#line 1503
c_rt_lib0clear(&___nl__im__58);
#line 1503
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__50));
#line 1503
c_rt_lib0clear(&___nl__im__50);
#line 1504
c_rt_lib0move(&___nl__im__49, c_rt_lib0next_iter(___nl__im__49));
#line 1504
goto label_187;
#line 1504
label_213:
;
#line 1505
c_rt_lib0move(&___nl__im__59,___get_global_string_const(307));
#line 1505
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__59));
#line 1505
c_rt_lib0clear(&___nl__im__59);
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
c_rt_lib0clear(&___nl__im__10);
#line 1506
c_rt_lib0clear(&___nl__im__18);
#line 1506
c_rt_lib0clear(&___nl__im__19);
#line 1506
c_rt_lib0clear(&___nl__im__20);
#line 1506
c_rt_lib0clear(&___nl__im__21);
#line 1506
c_rt_lib0clear(&___nl__im__22);
#line 1506
c_rt_lib0clear(&___nl__im__23);
#line 1506
c_rt_lib0clear(&___nl__im__35);
#line 1506
c_rt_lib0clear(&___nl__im__36);
#line 1506
c_rt_lib0clear(&___nl__im__37);
#line 1506
c_rt_lib0clear(&___nl__im__38);
#line 1506
c_rt_lib0clear(&___nl__im__39);
#line 1506
c_rt_lib0clear(&___nl__im__46);
#line 1506
//clear ___nl__bool__47;
#line 1506
c_rt_lib0clear(&___nl__im__48);
#line 1506
c_rt_lib0clear(&___nl__im__49);
#line 1506
return ___nl__im__40;
#line 1507
goto label_644;
#line 1507
label_245:
;
#line 1507
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1507
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 1508
c_rt_lib0move(&___nl__im__62, anon_naming0func_ref_to_struct_name(___nl__im__60));
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
c_rt_lib0clear(&___nl__im__20);
#line 1508
c_rt_lib0clear(&___nl__im__21);
#line 1508
c_rt_lib0clear(&___nl__im__22);
#line 1508
c_rt_lib0clear(&___nl__im__23);
#line 1508
c_rt_lib0clear(&___nl__im__35);
#line 1508
c_rt_lib0clear(&___nl__im__36);
#line 1508
c_rt_lib0clear(&___nl__im__37);
#line 1508
c_rt_lib0clear(&___nl__im__38);
#line 1508
c_rt_lib0clear(&___nl__im__39);
#line 1508
c_rt_lib0clear(&___nl__im__40);
#line 1508
c_rt_lib0clear(&___nl__im__46);
#line 1508
//clear ___nl__bool__47;
#line 1508
c_rt_lib0clear(&___nl__im__48);
#line 1508
c_rt_lib0clear(&___nl__im__49);
#line 1508
c_rt_lib0clear(&___nl__im__60);
#line 1508
c_rt_lib0clear(&___nl__im__61);
#line 1508
return ___nl__im__62;
#line 1509
goto label_644;
#line 1509
label_280:
;
#line 1510
c_rt_lib0move(&___nl__im__63, generator_c_priv0im_t());
#line 1510
c_rt_lib0clear(&___nl__im__0);
#line 1510
c_rt_lib0clear(&___nl__im__1);
#line 1510
//clear ___nl__bool__2;
#line 1510
c_rt_lib0clear(&___nl__im__3);
#line 1510
c_rt_lib0clear(&___nl__im__4);
#line 1510
c_rt_lib0clear(&___nl__im__5);
#line 1510
c_rt_lib0clear(&___nl__im__6);
#line 1510
c_rt_lib0clear(&___nl__im__7);
#line 1510
c_rt_lib0clear(&___nl__im__8);
#line 1510
c_rt_lib0clear(&___nl__im__9);
#line 1510
c_rt_lib0clear(&___nl__im__10);
#line 1510
c_rt_lib0clear(&___nl__im__18);
#line 1510
c_rt_lib0clear(&___nl__im__19);
#line 1510
c_rt_lib0clear(&___nl__im__20);
#line 1510
c_rt_lib0clear(&___nl__im__21);
#line 1510
c_rt_lib0clear(&___nl__im__22);
#line 1510
c_rt_lib0clear(&___nl__im__23);
#line 1510
c_rt_lib0clear(&___nl__im__35);
#line 1510
c_rt_lib0clear(&___nl__im__36);
#line 1510
c_rt_lib0clear(&___nl__im__37);
#line 1510
c_rt_lib0clear(&___nl__im__38);
#line 1510
c_rt_lib0clear(&___nl__im__39);
#line 1510
c_rt_lib0clear(&___nl__im__40);
#line 1510
c_rt_lib0clear(&___nl__im__46);
#line 1510
//clear ___nl__bool__47;
#line 1510
c_rt_lib0clear(&___nl__im__48);
#line 1510
c_rt_lib0clear(&___nl__im__49);
#line 1510
c_rt_lib0clear(&___nl__im__60);
#line 1510
c_rt_lib0clear(&___nl__im__61);
#line 1510
c_rt_lib0clear(&___nl__im__62);
#line 1510
return ___nl__im__63;
#line 1511
goto label_644;
#line 1511
label_314:
;
#line 1512
c_rt_lib0move(&___nl__im__64, generator_c_priv0int_t());
#line 1512
c_rt_lib0clear(&___nl__im__0);
#line 1512
c_rt_lib0clear(&___nl__im__1);
#line 1512
//clear ___nl__bool__2;
#line 1512
c_rt_lib0clear(&___nl__im__3);
#line 1512
c_rt_lib0clear(&___nl__im__4);
#line 1512
c_rt_lib0clear(&___nl__im__5);
#line 1512
c_rt_lib0clear(&___nl__im__6);
#line 1512
c_rt_lib0clear(&___nl__im__7);
#line 1512
c_rt_lib0clear(&___nl__im__8);
#line 1512
c_rt_lib0clear(&___nl__im__9);
#line 1512
c_rt_lib0clear(&___nl__im__10);
#line 1512
c_rt_lib0clear(&___nl__im__18);
#line 1512
c_rt_lib0clear(&___nl__im__19);
#line 1512
c_rt_lib0clear(&___nl__im__20);
#line 1512
c_rt_lib0clear(&___nl__im__21);
#line 1512
c_rt_lib0clear(&___nl__im__22);
#line 1512
c_rt_lib0clear(&___nl__im__23);
#line 1512
c_rt_lib0clear(&___nl__im__35);
#line 1512
c_rt_lib0clear(&___nl__im__36);
#line 1512
c_rt_lib0clear(&___nl__im__37);
#line 1512
c_rt_lib0clear(&___nl__im__38);
#line 1512
c_rt_lib0clear(&___nl__im__39);
#line 1512
c_rt_lib0clear(&___nl__im__40);
#line 1512
c_rt_lib0clear(&___nl__im__46);
#line 1512
//clear ___nl__bool__47;
#line 1512
c_rt_lib0clear(&___nl__im__48);
#line 1512
c_rt_lib0clear(&___nl__im__49);
#line 1512
c_rt_lib0clear(&___nl__im__60);
#line 1512
c_rt_lib0clear(&___nl__im__61);
#line 1512
c_rt_lib0clear(&___nl__im__62);
#line 1512
c_rt_lib0clear(&___nl__im__63);
#line 1512
return ___nl__im__64;
#line 1513
goto label_644;
#line 1513
label_349:
;
#line 1514
c_rt_lib0move(&___nl__im__65, generator_c_priv0im_t());
#line 1514
c_rt_lib0clear(&___nl__im__0);
#line 1514
c_rt_lib0clear(&___nl__im__1);
#line 1514
//clear ___nl__bool__2;
#line 1514
c_rt_lib0clear(&___nl__im__3);
#line 1514
c_rt_lib0clear(&___nl__im__4);
#line 1514
c_rt_lib0clear(&___nl__im__5);
#line 1514
c_rt_lib0clear(&___nl__im__6);
#line 1514
c_rt_lib0clear(&___nl__im__7);
#line 1514
c_rt_lib0clear(&___nl__im__8);
#line 1514
c_rt_lib0clear(&___nl__im__9);
#line 1514
c_rt_lib0clear(&___nl__im__10);
#line 1514
c_rt_lib0clear(&___nl__im__18);
#line 1514
c_rt_lib0clear(&___nl__im__19);
#line 1514
c_rt_lib0clear(&___nl__im__20);
#line 1514
c_rt_lib0clear(&___nl__im__21);
#line 1514
c_rt_lib0clear(&___nl__im__22);
#line 1514
c_rt_lib0clear(&___nl__im__23);
#line 1514
c_rt_lib0clear(&___nl__im__35);
#line 1514
c_rt_lib0clear(&___nl__im__36);
#line 1514
c_rt_lib0clear(&___nl__im__37);
#line 1514
c_rt_lib0clear(&___nl__im__38);
#line 1514
c_rt_lib0clear(&___nl__im__39);
#line 1514
c_rt_lib0clear(&___nl__im__40);
#line 1514
c_rt_lib0clear(&___nl__im__46);
#line 1514
//clear ___nl__bool__47;
#line 1514
c_rt_lib0clear(&___nl__im__48);
#line 1514
c_rt_lib0clear(&___nl__im__49);
#line 1514
c_rt_lib0clear(&___nl__im__60);
#line 1514
c_rt_lib0clear(&___nl__im__61);
#line 1514
c_rt_lib0clear(&___nl__im__62);
#line 1514
c_rt_lib0clear(&___nl__im__63);
#line 1514
c_rt_lib0clear(&___nl__im__64);
#line 1514
return ___nl__im__65;
#line 1515
goto label_644;
#line 1515
label_385:
;
#line 1516
c_rt_lib0move(&___nl__im__66, generator_c_priv0bool_t());
#line 1516
c_rt_lib0clear(&___nl__im__0);
#line 1516
c_rt_lib0clear(&___nl__im__1);
#line 1516
//clear ___nl__bool__2;
#line 1516
c_rt_lib0clear(&___nl__im__3);
#line 1516
c_rt_lib0clear(&___nl__im__4);
#line 1516
c_rt_lib0clear(&___nl__im__5);
#line 1516
c_rt_lib0clear(&___nl__im__6);
#line 1516
c_rt_lib0clear(&___nl__im__7);
#line 1516
c_rt_lib0clear(&___nl__im__8);
#line 1516
c_rt_lib0clear(&___nl__im__9);
#line 1516
c_rt_lib0clear(&___nl__im__10);
#line 1516
c_rt_lib0clear(&___nl__im__18);
#line 1516
c_rt_lib0clear(&___nl__im__19);
#line 1516
c_rt_lib0clear(&___nl__im__20);
#line 1516
c_rt_lib0clear(&___nl__im__21);
#line 1516
c_rt_lib0clear(&___nl__im__22);
#line 1516
c_rt_lib0clear(&___nl__im__23);
#line 1516
c_rt_lib0clear(&___nl__im__35);
#line 1516
c_rt_lib0clear(&___nl__im__36);
#line 1516
c_rt_lib0clear(&___nl__im__37);
#line 1516
c_rt_lib0clear(&___nl__im__38);
#line 1516
c_rt_lib0clear(&___nl__im__39);
#line 1516
c_rt_lib0clear(&___nl__im__40);
#line 1516
c_rt_lib0clear(&___nl__im__46);
#line 1516
//clear ___nl__bool__47;
#line 1516
c_rt_lib0clear(&___nl__im__48);
#line 1516
c_rt_lib0clear(&___nl__im__49);
#line 1516
c_rt_lib0clear(&___nl__im__60);
#line 1516
c_rt_lib0clear(&___nl__im__61);
#line 1516
c_rt_lib0clear(&___nl__im__62);
#line 1516
c_rt_lib0clear(&___nl__im__63);
#line 1516
c_rt_lib0clear(&___nl__im__64);
#line 1516
c_rt_lib0clear(&___nl__im__65);
#line 1516
return ___nl__im__66;
#line 1517
goto label_644;
#line 1517
label_422:
;
#line 1517
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 1517
c_rt_lib0copy(&___nl__im__67, ___nl__im__68);
#line 1518
c_rt_lib0move(&___nl__im__69, generator_c_priv0im_t());
#line 1518
c_rt_lib0clear(&___nl__im__0);
#line 1518
c_rt_lib0clear(&___nl__im__1);
#line 1518
//clear ___nl__bool__2;
#line 1518
c_rt_lib0clear(&___nl__im__3);
#line 1518
c_rt_lib0clear(&___nl__im__4);
#line 1518
c_rt_lib0clear(&___nl__im__5);
#line 1518
c_rt_lib0clear(&___nl__im__6);
#line 1518
c_rt_lib0clear(&___nl__im__7);
#line 1518
c_rt_lib0clear(&___nl__im__8);
#line 1518
c_rt_lib0clear(&___nl__im__9);
#line 1518
c_rt_lib0clear(&___nl__im__10);
#line 1518
c_rt_lib0clear(&___nl__im__18);
#line 1518
c_rt_lib0clear(&___nl__im__19);
#line 1518
c_rt_lib0clear(&___nl__im__20);
#line 1518
c_rt_lib0clear(&___nl__im__21);
#line 1518
c_rt_lib0clear(&___nl__im__22);
#line 1518
c_rt_lib0clear(&___nl__im__23);
#line 1518
c_rt_lib0clear(&___nl__im__35);
#line 1518
c_rt_lib0clear(&___nl__im__36);
#line 1518
c_rt_lib0clear(&___nl__im__37);
#line 1518
c_rt_lib0clear(&___nl__im__38);
#line 1518
c_rt_lib0clear(&___nl__im__39);
#line 1518
c_rt_lib0clear(&___nl__im__40);
#line 1518
c_rt_lib0clear(&___nl__im__46);
#line 1518
//clear ___nl__bool__47;
#line 1518
c_rt_lib0clear(&___nl__im__48);
#line 1518
c_rt_lib0clear(&___nl__im__49);
#line 1518
c_rt_lib0clear(&___nl__im__60);
#line 1518
c_rt_lib0clear(&___nl__im__61);
#line 1518
c_rt_lib0clear(&___nl__im__62);
#line 1518
c_rt_lib0clear(&___nl__im__63);
#line 1518
c_rt_lib0clear(&___nl__im__64);
#line 1518
c_rt_lib0clear(&___nl__im__65);
#line 1518
c_rt_lib0clear(&___nl__im__66);
#line 1518
c_rt_lib0clear(&___nl__im__67);
#line 1518
c_rt_lib0clear(&___nl__im__68);
#line 1518
return ___nl__im__69;
#line 1519
goto label_644;
#line 1519
label_464:
;
#line 1519
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1519
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 1520
c_rt_lib0move(&___nl__im__77,___get_global_string_const(622));
#line 1520
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__1));
#line 1520
c_rt_lib0clear(&___nl__im__77);
#line 1520
c_rt_lib0move(&___nl__im__78,___get_global_string_const(627));
#line 1520
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 1520
c_rt_lib0clear(&___nl__im__76);
#line 1520
c_rt_lib0clear(&___nl__im__78);
#line 1521
c_rt_lib0move(&___nl__im__79, generator_c_priv0int_t());
#line 1521
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__79));
#line 1521
c_rt_lib0clear(&___nl__im__75);
#line 1521
c_rt_lib0clear(&___nl__im__79);
#line 1521
c_rt_lib0move(&___nl__im__80,___get_global_string_const(628));
#line 1521
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__80));
#line 1521
c_rt_lib0clear(&___nl__im__74);
#line 1521
c_rt_lib0clear(&___nl__im__80);
#line 1522
c_rt_lib0move(&___nl__im__81, string0lf());
#line 1522
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__81));
#line 1522
c_rt_lib0clear(&___nl__im__73);
#line 1522
c_rt_lib0clear(&___nl__im__81);
#line 1523
c_rt_lib0move(&___nl__im__85, c_rt_lib0init_iter(___nl__im__70));
#line 1523
label_487:
;
#line 1523
___nl__bool__83 = c_rt_lib0is_end_hash(___nl__im__85);
#line 1523
if(___nl__bool__83){ goto label_531;}
#line 1523
c_rt_lib0move(&___nl__im__82, c_rt_lib0get_key_iter(___nl__im__85));
#line 1523
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value(___nl__im__70, ___nl__im__82));
#line 1524
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_string_const(27));
#line 1524
if(___nl__bool__86){ goto label_499;}
#line 1526
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_string_const(28));
#line 1526
if(___nl__bool__86){ goto label_522;}
#line 1526
c_rt_lib0move(&___nl__im__87,___get_global_string_const(15));
#line 1526
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(2, ___nl__im__87, ___nl__im__84));
#line 1526
nl_die_arg(___nl__im__87);
#line 1524
label_499:
;
#line 1524
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__84, ___get_global_string_const(27)));
#line 1524
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 1525
c_rt_lib0move(&___nl__im__94, generator_c_priv0get_type_name(___nl__im__88));
#line 1525
c_rt_lib0move(&___nl__im__95,___get_global_string_const(629));
#line 1525
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__95));
#line 1525
c_rt_lib0clear(&___nl__im__94);
#line 1525
c_rt_lib0clear(&___nl__im__95);
#line 1525
c_rt_lib0move(&___nl__im__96, generator_c_priv0get_case_name(___nl__im__82));
#line 1525
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__96));
#line 1525
c_rt_lib0clear(&___nl__im__93);
#line 1525
c_rt_lib0clear(&___nl__im__96);
#line 1525
c_rt_lib0move(&___nl__im__97,___get_global_string_const(442));
#line 1525
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__97));
#line 1525
c_rt_lib0clear(&___nl__im__92);
#line 1525
c_rt_lib0clear(&___nl__im__97);
#line 1525
c_rt_lib0move(&___nl__im__98, string0lf());
#line 1525
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__98));
#line 1525
c_rt_lib0clear(&___nl__im__91);
#line 1525
c_rt_lib0clear(&___nl__im__98);
#line 1525
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_add(___nl__im__72, ___nl__im__90));
#line 1525
c_rt_lib0clear(&___nl__im__90);
#line 1526
goto label_524;
#line 1526
label_522:
;
#line 1527
goto label_524;
#line 1527
label_524:
;
#line 1527
//clear ___nl__bool__86;
#line 1527
c_rt_lib0clear(&___nl__im__87);
#line 1527
c_rt_lib0clear(&___nl__im__88);
#line 1527
c_rt_lib0clear(&___nl__im__89);
#line 1528
c_rt_lib0move(&___nl__im__85, c_rt_lib0next_iter(___nl__im__85));
#line 1528
goto label_487;
#line 1528
label_531:
;
#line 1529
c_rt_lib0move(&___nl__im__101,___get_global_string_const(630));
#line 1531
c_rt_lib0move(&___nl__im__102, generator_c_priv0int_t());
#line 1531
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__102));
#line 1531
c_rt_lib0clear(&___nl__im__101);
#line 1531
c_rt_lib0clear(&___nl__im__102);
#line 1531
c_rt_lib0move(&___nl__im__103,___get_global_string_const(631));
#line 1531
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__im__103));
#line 1531
c_rt_lib0clear(&___nl__im__100);
#line 1531
c_rt_lib0clear(&___nl__im__103);
#line 1531
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_add(___nl__im__72, ___nl__im__99));
#line 1531
c_rt_lib0clear(&___nl__im__99);
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
c_rt_lib0clear(&___nl__im__46);
#line 1533
//clear ___nl__bool__47;
#line 1533
c_rt_lib0clear(&___nl__im__48);
#line 1533
c_rt_lib0clear(&___nl__im__49);
#line 1533
c_rt_lib0clear(&___nl__im__60);
#line 1533
c_rt_lib0clear(&___nl__im__61);
#line 1533
c_rt_lib0clear(&___nl__im__62);
#line 1533
c_rt_lib0clear(&___nl__im__63);
#line 1533
c_rt_lib0clear(&___nl__im__64);
#line 1533
c_rt_lib0clear(&___nl__im__65);
#line 1533
c_rt_lib0clear(&___nl__im__66);
#line 1533
c_rt_lib0clear(&___nl__im__67);
#line 1533
c_rt_lib0clear(&___nl__im__68);
#line 1533
c_rt_lib0clear(&___nl__im__69);
#line 1533
c_rt_lib0clear(&___nl__im__70);
#line 1533
c_rt_lib0clear(&___nl__im__71);
#line 1533
c_rt_lib0clear(&___nl__im__82);
#line 1533
//clear ___nl__bool__83;
#line 1533
c_rt_lib0clear(&___nl__im__84);
#line 1533
c_rt_lib0clear(&___nl__im__85);
#line 1533
//clear ___nl__bool__86;
#line 1533
c_rt_lib0clear(&___nl__im__87);
#line 1533
c_rt_lib0clear(&___nl__im__88);
#line 1533
c_rt_lib0clear(&___nl__im__89);
#line 1533
return ___nl__im__72;
#line 1534
goto label_644;
#line 1534
label_592:
;
#line 1535
c_rt_lib0move(&___nl__im__104, generator_c_priv0im_t());
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
c_rt_lib0clear(&___nl__im__46);
#line 1535
//clear ___nl__bool__47;
#line 1535
c_rt_lib0clear(&___nl__im__48);
#line 1535
c_rt_lib0clear(&___nl__im__49);
#line 1535
c_rt_lib0clear(&___nl__im__60);
#line 1535
c_rt_lib0clear(&___nl__im__61);
#line 1535
c_rt_lib0clear(&___nl__im__62);
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
c_rt_lib0clear(&___nl__im__68);
#line 1535
c_rt_lib0clear(&___nl__im__69);
#line 1535
c_rt_lib0clear(&___nl__im__70);
#line 1535
c_rt_lib0clear(&___nl__im__71);
#line 1535
c_rt_lib0clear(&___nl__im__72);
#line 1535
c_rt_lib0clear(&___nl__im__82);
#line 1535
//clear ___nl__bool__83;
#line 1535
c_rt_lib0clear(&___nl__im__84);
#line 1535
c_rt_lib0clear(&___nl__im__85);
#line 1535
//clear ___nl__bool__86;
#line 1535
c_rt_lib0clear(&___nl__im__87);
#line 1535
c_rt_lib0clear(&___nl__im__88);
#line 1535
c_rt_lib0clear(&___nl__im__89);
#line 1535
return ___nl__im__104;
#line 1536
goto label_644;
#line 1536
label_644:
;
return NULL;

}

ImmT  generator_c_priv0get_field_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 1540
c_rt_lib0move(&___nl__im__2,___get_global_string_const(632));
#line 1540
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 1540
c_rt_lib0clear(&___nl__im__2);
#line 1540
c_rt_lib0clear(&___nl__im__0);
#line 1540
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_case_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 1544
c_rt_lib0move(&___nl__im__2,___get_global_string_const(633));
#line 1544
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 1544
c_rt_lib0clear(&___nl__im__2);
#line 1544
c_rt_lib0clear(&___nl__im__0);
#line 1544
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
#line 1548
___nl__bool__1 = generator_c_priv0is_anon(___nl__im__0);
#line 1548
___nl__bool__1 = !___nl__bool__1;
#line 1548
if(___nl__bool__1){ goto label_8;}
#line 1549
c_rt_lib0move(&___nl__im__2, anon_naming0get_anon_name(___nl__im__0));
#line 1549
c_rt_lib0clear(&___nl__im__0);
#line 1549
//clear ___nl__bool__1;
#line 1549
return ___nl__im__2;
#line 1550
goto label_17;
#line 1550
label_8:
;
#line 1551
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1551
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_to_c(___nl__im__0, ___nl__im__4));
#line 1551
c_rt_lib0clear(&___nl__im__4);
#line 1551
c_rt_lib0clear(&___nl__im__0);
#line 1551
//clear ___nl__bool__1;
#line 1551
c_rt_lib0clear(&___nl__im__2);
#line 1551
return ___nl__im__3;
#line 1552
goto label_17;
#line 1552
label_17:
;
#line 1552
//clear ___nl__bool__1;
#line 1552
c_rt_lib0clear(&___nl__im__2);
#line 1552
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
#line 1557
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 1558
___nl__bool__7 = ___nl__bool__4;
#line 1558
___nl__bool__7 = !___nl__bool__7;
#line 1558
if(___nl__bool__7){ goto label_23;}
#line 1559
c_rt_lib0move(&___nl__im__10,___get_global_string_const(634));
#line 1559
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__1));
#line 1559
c_rt_lib0clear(&___nl__im__10);
#line 1559
c_rt_lib0move(&___nl__im__11, string0lf());
#line 1559
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__11));
#line 1559
c_rt_lib0clear(&___nl__im__9);
#line 1559
c_rt_lib0clear(&___nl__im__11);
#line 1559
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__8));
#line 1559
c_rt_lib0clear(&___nl__im__8);
#line 1560
c_rt_lib0move(&___nl__im__14,___get_global_string_const(635));
#line 1560
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1560
c_rt_lib0clear(&___nl__im__14);
#line 1560
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1560
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1560
c_rt_lib0clear(&___nl__im__13);
#line 1560
c_rt_lib0clear(&___nl__im__15);
#line 1560
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__12));
#line 1560
c_rt_lib0clear(&___nl__im__12);
#line 1561
goto label_23;
#line 1561
label_23:
;
#line 1561
//clear ___nl__bool__7;
#line 1562
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 1563
___nl__bool__17 = ___nl__bool__4;
#line 1563
___nl__bool__17 = !___nl__bool__17;
#line 1563
if(___nl__bool__17){ goto label_31;}
#line 1564
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 1565
goto label_38;
#line 1565
label_31:
;
#line 1566
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_fun_name(___nl__im__3, ___nl__im__1, ___nl__im__3));
#line 1566
c_rt_lib0move(&___nl__im__19,___get_global_string_const(35));
#line 1566
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1566
c_rt_lib0clear(&___nl__im__18);
#line 1566
c_rt_lib0clear(&___nl__im__19);
#line 1567
goto label_38;
#line 1567
label_38:
;
#line 1567
//clear ___nl__bool__17;
#line 1568
___nl__bool__20 = generator_c_struct_dependence_sort0is_divisible(___nl__im__2);
#line 1568
___nl__bool__20 = !___nl__bool__20;
#line 1568
if(___nl__bool__20){ goto label_63;}
#line 1569
c_rt_lib0move(&___nl__im__26,___get_global_string_const(636));
#line 1569
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__16));
#line 1569
c_rt_lib0clear(&___nl__im__26);
#line 1569
c_rt_lib0move(&___nl__im__27,___get_global_string_const(469));
#line 1569
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__27));
#line 1569
c_rt_lib0clear(&___nl__im__25);
#line 1569
c_rt_lib0clear(&___nl__im__27);
#line 1569
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__16));
#line 1569
c_rt_lib0clear(&___nl__im__24);
#line 1569
c_rt_lib0move(&___nl__im__28,___get_global_string_const(442));
#line 1569
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__28));
#line 1569
c_rt_lib0clear(&___nl__im__23);
#line 1569
c_rt_lib0clear(&___nl__im__28);
#line 1569
c_rt_lib0move(&___nl__im__29, string0lf());
#line 1569
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__29));
#line 1569
c_rt_lib0clear(&___nl__im__22);
#line 1569
c_rt_lib0clear(&___nl__im__29);
#line 1569
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__21));
#line 1569
c_rt_lib0clear(&___nl__im__21);
#line 1570
goto label_88;
#line 1570
label_63:
;
#line 1571
c_rt_lib0move(&___nl__im__35,___get_global_string_const(637));
#line 1571
c_rt_lib0move(&___nl__im__37,___get_global_string_const(36));
#line 1571
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_type_to_c(___nl__im__2, ___nl__im__37));
#line 1571
c_rt_lib0clear(&___nl__im__37);
#line 1571
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 1571
c_rt_lib0clear(&___nl__im__35);
#line 1571
c_rt_lib0clear(&___nl__im__36);
#line 1571
c_rt_lib0move(&___nl__im__38,___get_global_string_const(469));
#line 1571
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__38));
#line 1571
c_rt_lib0clear(&___nl__im__34);
#line 1571
c_rt_lib0clear(&___nl__im__38);
#line 1571
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__16));
#line 1571
c_rt_lib0clear(&___nl__im__33);
#line 1571
c_rt_lib0move(&___nl__im__39,___get_global_string_const(442));
#line 1571
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 1571
c_rt_lib0clear(&___nl__im__32);
#line 1571
c_rt_lib0clear(&___nl__im__39);
#line 1571
c_rt_lib0move(&___nl__im__40, string0lf());
#line 1571
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__40));
#line 1571
c_rt_lib0clear(&___nl__im__31);
#line 1571
c_rt_lib0clear(&___nl__im__40);
#line 1571
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__30));
#line 1571
c_rt_lib0clear(&___nl__im__30);
#line 1572
goto label_88;
#line 1572
label_88:
;
#line 1572
//clear ___nl__bool__20;
#line 1573
___nl__bool__41 = ___nl__bool__4;
#line 1573
___nl__bool__41 = !___nl__bool__41;
#line 1573
if(___nl__bool__41){ goto label_101;}
#line 1574
c_rt_lib0move(&___nl__im__43,___get_global_string_const(638));
#line 1574
c_rt_lib0move(&___nl__im__44, string0lf());
#line 1574
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__44));
#line 1574
c_rt_lib0clear(&___nl__im__43);
#line 1574
c_rt_lib0clear(&___nl__im__44);
#line 1574
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__42));
#line 1574
c_rt_lib0clear(&___nl__im__42);
#line 1575
goto label_101;
#line 1575
label_101:
;
#line 1575
//clear ___nl__bool__41;
#line 1576
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_additional_type_functions_decl(___nl__im__16, ___nl__im__2, ___ref___rec__0, ___nl__bool__4));
#line 1576
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__45));
#line 1576
c_rt_lib0clear(&___nl__im__45);
#line 1577
c_rt_lib0move(&___nl__im__47, string0lf());
#line 1577
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__6, ___nl__im__47));
#line 1577
c_rt_lib0clear(&___nl__im__47);
#line 1577
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__46));
#line 1577
c_rt_lib0clear(&___nl__im__46);
#line 1578
c_rt_lib0move(&___nl__im__48, generator_c_priv0get_additional_type_functions_def(___nl__im__16, ___nl__im__2, ___ref___rec__0, ___nl__im__5, ___nl__bool__4));
#line 1578
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__48));
#line 1578
c_rt_lib0clear(&___nl__im__48);
#line 1578
c_rt_lib0clear(&___nl__im__1);
#line 1578
c_rt_lib0clear(&___nl__im__2);
#line 1578
c_rt_lib0clear(&___nl__im__3);
#line 1578
//clear ___nl__bool__4;
#line 1578
c_rt_lib0clear(&___nl__im__5);
#line 1578
c_rt_lib0clear(&___nl__im__6);
#line 1578
c_rt_lib0clear(&___nl__im__16);
#line 1578
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
#line 1583
___nl__bool__5 = generator_c_struct_dependence_sort0is_divisible(___nl__im__2);
#line 1583
___nl__bool__5 = !___nl__bool__5;
#line 1583
___nl__bool__5 = !___nl__bool__5;
#line 1583
if(___nl__bool__5){ goto label_11;}
#line 1584
c_rt_lib0clear(&___nl__im__1);
#line 1584
c_rt_lib0clear(&___nl__im__2);
#line 1584
c_rt_lib0clear(&___nl__im__3);
#line 1584
//clear ___nl__bool__4;
#line 1584
//clear ___nl__bool__5;
#line 1584
return NULL;
#line 1585
goto label_11;
#line 1585
label_11:
;
#line 1585
//clear ___nl__bool__5;
#line 1586
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 1587
___nl__bool__7 = ___nl__bool__4;
#line 1587
___nl__bool__7 = !___nl__bool__7;
#line 1587
if(___nl__bool__7){ goto label_36;}
#line 1588
c_rt_lib0move(&___nl__im__10,___get_global_string_const(639));
#line 1588
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__1));
#line 1588
c_rt_lib0clear(&___nl__im__10);
#line 1588
c_rt_lib0move(&___nl__im__11, string0lf());
#line 1588
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__11));
#line 1588
c_rt_lib0clear(&___nl__im__9);
#line 1588
c_rt_lib0clear(&___nl__im__11);
#line 1588
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__8));
#line 1588
c_rt_lib0clear(&___nl__im__8);
#line 1589
c_rt_lib0move(&___nl__im__14,___get_global_string_const(640));
#line 1589
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1589
c_rt_lib0clear(&___nl__im__14);
#line 1589
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1589
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1589
c_rt_lib0clear(&___nl__im__13);
#line 1589
c_rt_lib0clear(&___nl__im__15);
#line 1589
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__12));
#line 1589
c_rt_lib0clear(&___nl__im__12);
#line 1590
goto label_36;
#line 1590
label_36:
;
#line 1590
//clear ___nl__bool__7;
#line 1591
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 1592
___nl__bool__17 = ___nl__bool__4;
#line 1592
___nl__bool__17 = !___nl__bool__17;
#line 1592
if(___nl__bool__17){ goto label_44;}
#line 1593
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 1594
goto label_51;
#line 1594
label_44:
;
#line 1595
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_fun_name(___nl__im__3, ___nl__im__1, ___nl__im__3));
#line 1595
c_rt_lib0move(&___nl__im__19,___get_global_string_const(35));
#line 1595
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1595
c_rt_lib0clear(&___nl__im__18);
#line 1595
c_rt_lib0clear(&___nl__im__19);
#line 1596
goto label_51;
#line 1596
label_51:
;
#line 1596
//clear ___nl__bool__17;
#line 1597
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_type_to_c(___nl__im__2, ___nl__im__16));
#line 1597
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__20));
#line 1597
c_rt_lib0clear(&___nl__im__20);
#line 1598
c_rt_lib0move(&___nl__im__22,___get_global_string_const(442));
#line 1598
c_rt_lib0move(&___nl__im__23, string0lf());
#line 1598
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1598
c_rt_lib0clear(&___nl__im__22);
#line 1598
c_rt_lib0clear(&___nl__im__23);
#line 1598
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__21));
#line 1598
c_rt_lib0clear(&___nl__im__21);
#line 1599
___nl__bool__24 = ___nl__bool__4;
#line 1599
___nl__bool__24 = !___nl__bool__24;
#line 1599
if(___nl__bool__24){ goto label_70;}
#line 1600
c_rt_lib0move(&___nl__im__25,___get_global_string_const(638));
#line 1600
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__25));
#line 1600
c_rt_lib0clear(&___nl__im__25);
#line 1601
goto label_70;
#line 1601
label_70:
;
#line 1601
//clear ___nl__bool__24;
#line 1602
c_rt_lib0move(&___nl__im__27, string0lf());
#line 1602
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__6, ___nl__im__27));
#line 1602
c_rt_lib0clear(&___nl__im__27);
#line 1602
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__26));
#line 1602
c_rt_lib0clear(&___nl__im__26);
#line 1602
c_rt_lib0clear(&___nl__im__1);
#line 1602
c_rt_lib0clear(&___nl__im__2);
#line 1602
c_rt_lib0clear(&___nl__im__3);
#line 1602
//clear ___nl__bool__4;
#line 1602
c_rt_lib0clear(&___nl__im__6);
#line 1602
c_rt_lib0clear(&___nl__im__16);
#line 1602
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
#line 1606
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1606
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 1606
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1606
c_rt_lib0clear(&___nl__im__8);
#line 1606
c_rt_lib0clear(&___nl__im__9);
#line 1606
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__3));
#line 1606
c_rt_lib0clear(&___nl__im__7);
#line 1606
c_rt_lib0move(&___nl__im__10,___get_global_string_const(469));
#line 1606
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 1606
c_rt_lib0clear(&___nl__im__6);
#line 1606
c_rt_lib0clear(&___nl__im__10);
#line 1606
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1606
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__11));
#line 1606
c_rt_lib0clear(&___nl__im__5);
#line 1606
c_rt_lib0clear(&___nl__im__11);
#line 1606
c_rt_lib0clear(&___nl__im__1);
#line 1606
c_rt_lib0clear(&___nl__im__2);
#line 1606
c_rt_lib0clear(&___nl__im__3);
#line 1606
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
#line 1611
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1611
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(131));
#line 1611
if(___nl__bool__3){ goto label_20;}
#line 1613
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(405));
#line 1613
if(___nl__bool__3){ goto label_23;}
#line 1615
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 1615
if(___nl__bool__3){ goto label_26;}
#line 1617
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(406));
#line 1617
if(___nl__bool__3){ goto label_29;}
#line 1619
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(559));
#line 1619
if(___nl__bool__3){ goto label_32;}
#line 1621
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(127));
#line 1621
if(___nl__bool__3){ goto label_37;}
#line 1623
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(563));
#line 1623
if(___nl__bool__3){ goto label_42;}
#line 1625
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 1625
if(___nl__bool__3){ goto label_47;}
#line 1625
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 1625
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1625
nl_die_arg(___nl__im__4);
#line 1611
label_20:
;
#line 1612
c_rt_lib0move(&___nl__im__1,___get_global_string_const(131));
#line 1613
goto label_52;
#line 1613
label_23:
;
#line 1614
c_rt_lib0move(&___nl__im__1,___get_global_string_const(405));
#line 1615
goto label_52;
#line 1615
label_26:
;
#line 1616
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 1617
goto label_52;
#line 1617
label_29:
;
#line 1618
c_rt_lib0move(&___nl__im__1,___get_global_string_const(406));
#line 1619
goto label_52;
#line 1619
label_32:
;
#line 1619
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(559)));
#line 1619
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 1620
c_rt_lib0move(&___nl__im__1,___get_global_string_const(559));
#line 1621
goto label_52;
#line 1621
label_37:
;
#line 1621
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(127)));
#line 1621
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1622
c_rt_lib0move(&___nl__im__1,___get_global_string_const(127));
#line 1623
goto label_52;
#line 1623
label_42:
;
#line 1623
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(563)));
#line 1623
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1624
c_rt_lib0move(&___nl__im__1,___get_global_string_const(507));
#line 1625
goto label_52;
#line 1625
label_47:
;
#line 1625
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 1625
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1626
c_rt_lib0move(&___nl__im__1,___get_global_string_const(128));
#line 1627
goto label_52;
#line 1627
label_52:
;
#line 1628
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 1628
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(220));
#line 1628
if(___nl__bool__14){ goto label_61;}
#line 1629
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(422));
#line 1629
if(___nl__bool__14){ goto label_63;}
#line 1629
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 1629
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 1629
nl_die_arg(___nl__im__15);
#line 1628
label_61:
;
#line 1629
goto label_68;
#line 1629
label_63:
;
#line 1630
c_rt_lib0move(&___nl__im__16,___get_global_string_const(641));
#line 1630
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 1630
c_rt_lib0clear(&___nl__im__16);
#line 1631
goto label_68;
#line 1631
label_68:
;
#line 1632
c_rt_lib0move(&___nl__im__18,___get_global_string_const(642));
#line 1632
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 1632
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 1632
c_rt_lib0clear(&___nl__im__20);
#line 1632
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 1632
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 1632
c_rt_lib0clear(&___nl__im__18);
#line 1632
//clear ___nl__int__19;
#line 1632
c_rt_lib0clear(&___nl__string__21);
#line 1632
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 1632
c_rt_lib0clear(&___nl__im__17);
#line 1633
c_rt_lib0clear(&___nl__im__0);
#line 1633
c_rt_lib0clear(&___nl__im__2);
#line 1633
//clear ___nl__bool__3;
#line 1633
c_rt_lib0clear(&___nl__im__4);
#line 1633
c_rt_lib0clear(&___nl__im__5);
#line 1633
c_rt_lib0clear(&___nl__im__6);
#line 1633
c_rt_lib0clear(&___nl__im__7);
#line 1633
c_rt_lib0clear(&___nl__im__8);
#line 1633
c_rt_lib0clear(&___nl__im__9);
#line 1633
c_rt_lib0clear(&___nl__im__10);
#line 1633
c_rt_lib0clear(&___nl__im__11);
#line 1633
c_rt_lib0clear(&___nl__im__12);
#line 1633
c_rt_lib0clear(&___nl__im__13);
#line 1633
//clear ___nl__bool__14;
#line 1633
c_rt_lib0clear(&___nl__im__15);
#line 1633
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
#line 1637
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 1637
if(___nl__bool__1){ goto label_19;}
#line 1639
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 1639
if(___nl__bool__1){ goto label_26;}
#line 1641
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1641
if(___nl__bool__1){ goto label_34;}
#line 1643
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(406));
#line 1643
if(___nl__bool__1){ goto label_43;}
#line 1645
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(559));
#line 1645
if(___nl__bool__1){ goto label_53;}
#line 1647
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(127));
#line 1647
if(___nl__bool__1){ goto label_59;}
#line 1649
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(563));
#line 1649
if(___nl__bool__1){ goto label_65;}
#line 1651
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 1651
if(___nl__bool__1){ goto label_71;}
#line 1651
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 1651
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 1651
nl_die_arg(___nl__im__2);
#line 1637
label_19:
;
#line 1638
c_rt_lib0move(&___nl__im__3,___get_global_string_const(583));
#line 1638
c_rt_lib0clear(&___nl__im__0);
#line 1638
//clear ___nl__bool__1;
#line 1638
c_rt_lib0clear(&___nl__im__2);
#line 1638
return ___nl__im__3;
#line 1639
goto label_77;
#line 1639
label_26:
;
#line 1640
c_rt_lib0move(&___nl__im__4,___get_global_string_const(20));
#line 1640
c_rt_lib0clear(&___nl__im__0);
#line 1640
//clear ___nl__bool__1;
#line 1640
c_rt_lib0clear(&___nl__im__2);
#line 1640
c_rt_lib0clear(&___nl__im__3);
#line 1640
return ___nl__im__4;
#line 1641
goto label_77;
#line 1641
label_34:
;
#line 1642
c_rt_lib0move(&___nl__im__5,___get_global_string_const(572));
#line 1642
c_rt_lib0clear(&___nl__im__0);
#line 1642
//clear ___nl__bool__1;
#line 1642
c_rt_lib0clear(&___nl__im__2);
#line 1642
c_rt_lib0clear(&___nl__im__3);
#line 1642
c_rt_lib0clear(&___nl__im__4);
#line 1642
return ___nl__im__5;
#line 1643
goto label_77;
#line 1643
label_43:
;
#line 1644
c_rt_lib0move(&___nl__im__6,___get_global_string_const(583));
#line 1644
c_rt_lib0clear(&___nl__im__0);
#line 1644
//clear ___nl__bool__1;
#line 1644
c_rt_lib0clear(&___nl__im__2);
#line 1644
c_rt_lib0clear(&___nl__im__3);
#line 1644
c_rt_lib0clear(&___nl__im__4);
#line 1644
c_rt_lib0clear(&___nl__im__5);
#line 1644
return ___nl__im__6;
#line 1645
goto label_77;
#line 1645
label_53:
;
#line 1645
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(559)));
#line 1645
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1646
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1646
nl_die_arg(___nl__im__9);
#line 1647
goto label_77;
#line 1647
label_59:
;
#line 1647
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(127)));
#line 1647
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1648
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 1648
nl_die_arg(___nl__im__12);
#line 1649
goto label_77;
#line 1649
label_65:
;
#line 1649
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(563)));
#line 1649
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1650
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1650
nl_die_arg(___nl__im__15);
#line 1651
goto label_77;
#line 1651
label_71:
;
#line 1651
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 1651
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1652
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1652
nl_die_arg(___nl__im__18);
#line 1653
goto label_77;
#line 1653
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
#line 1658
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1659
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 1659
if(___nl__bool__5){ goto label_34;}
#line 1660
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 1660
if(___nl__bool__5){ goto label_36;}
#line 1661
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1661
if(___nl__bool__5){ goto label_40;}
#line 1667
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 1667
if(___nl__bool__5){ goto label_119;}
#line 1668
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1668
if(___nl__bool__5){ goto label_123;}
#line 1673
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 1673
if(___nl__bool__5){ goto label_187;}
#line 1674
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1674
if(___nl__bool__5){ goto label_191;}
#line 1677
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 1677
if(___nl__bool__5){ goto label_225;}
#line 1678
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 1678
if(___nl__bool__5){ goto label_229;}
#line 1679
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1679
if(___nl__bool__5){ goto label_231;}
#line 1680
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1680
if(___nl__bool__5){ goto label_233;}
#line 1681
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1681
if(___nl__bool__5){ goto label_235;}
#line 1682
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1682
if(___nl__bool__5){ goto label_237;}
#line 1683
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1683
if(___nl__bool__5){ goto label_241;}
#line 1687
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1687
if(___nl__bool__5){ goto label_290;}
#line 1687
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1687
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__1));
#line 1687
nl_die_arg(___nl__im__6);
#line 1659
label_34:
;
#line 1660
goto label_292;
#line 1660
label_36:
;
#line 1660
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 1660
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1661
goto label_292;
#line 1661
label_40:
;
#line 1661
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 1661
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1662
___nl__im_ptr__15 = &((*___ref___rec__2).mod_name0field);
#line 1662
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1662
___nl__im_ptr__15 = NULL;
#line 1662
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_array_push_fun_header(___nl__im__0, ___nl__im__9, ___nl__im__14, ___nl__bool__3));
#line 1662
c_rt_lib0clear(&___nl__im__14);
#line 1662
c_rt_lib0move(&___nl__im__16,___get_global_string_const(442));
#line 1662
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 1662
c_rt_lib0clear(&___nl__im__13);
#line 1662
c_rt_lib0clear(&___nl__im__16);
#line 1662
c_rt_lib0move(&___nl__im__17, string0lf());
#line 1662
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 1662
c_rt_lib0clear(&___nl__im__12);
#line 1662
c_rt_lib0clear(&___nl__im__17);
#line 1662
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1662
c_rt_lib0clear(&___nl__im__11);
#line 1663
___nl__im_ptr__22 = &((*___ref___rec__2).mod_name0field);
#line 1663
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1663
___nl__im_ptr__22 = NULL;
#line 1663
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_array_get_fun_header(___nl__im__0, ___nl__im__9, ___nl__im__21, ___nl__bool__3));
#line 1663
c_rt_lib0clear(&___nl__im__21);
#line 1663
c_rt_lib0move(&___nl__im__23,___get_global_string_const(442));
#line 1663
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__23));
#line 1663
c_rt_lib0clear(&___nl__im__20);
#line 1663
c_rt_lib0clear(&___nl__im__23);
#line 1663
c_rt_lib0move(&___nl__im__24, string0lf());
#line 1663
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__24));
#line 1663
c_rt_lib0clear(&___nl__im__19);
#line 1663
c_rt_lib0clear(&___nl__im__24);
#line 1663
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__18));
#line 1663
c_rt_lib0clear(&___nl__im__18);
#line 1664
___nl__im_ptr__29 = &((*___ref___rec__2).mod_name0field);
#line 1664
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1664
___nl__im_ptr__29 = NULL;
#line 1664
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_array_len_fun_header(___nl__im__0, ___nl__im__28, ___nl__bool__3));
#line 1664
c_rt_lib0clear(&___nl__im__28);
#line 1664
c_rt_lib0move(&___nl__im__30,___get_global_string_const(442));
#line 1664
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 1664
c_rt_lib0clear(&___nl__im__27);
#line 1664
c_rt_lib0clear(&___nl__im__30);
#line 1664
c_rt_lib0move(&___nl__im__31, string0lf());
#line 1664
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 1664
c_rt_lib0clear(&___nl__im__26);
#line 1664
c_rt_lib0clear(&___nl__im__31);
#line 1664
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__25));
#line 1664
c_rt_lib0clear(&___nl__im__25);
#line 1665
___nl__im_ptr__36 = &((*___ref___rec__2).mod_name0field);
#line 1665
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 1665
___nl__im_ptr__36 = NULL;
#line 1665
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_array_clean_fun_header(___nl__im__0, ___nl__im__35, ___nl__bool__3));
#line 1665
c_rt_lib0clear(&___nl__im__35);
#line 1665
c_rt_lib0move(&___nl__im__37,___get_global_string_const(442));
#line 1665
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__37));
#line 1665
c_rt_lib0clear(&___nl__im__34);
#line 1665
c_rt_lib0clear(&___nl__im__37);
#line 1665
c_rt_lib0move(&___nl__im__38, string0lf());
#line 1665
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__38));
#line 1665
c_rt_lib0clear(&___nl__im__33);
#line 1665
c_rt_lib0clear(&___nl__im__38);
#line 1665
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__32));
#line 1665
c_rt_lib0clear(&___nl__im__32);
#line 1666
___nl__im_ptr__43 = &((*___ref___rec__2).mod_name0field);
#line 1666
c_rt_lib0copy(&___nl__im__42, (*___nl__im_ptr__43));
#line 1666
___nl__im_ptr__43 = NULL;
#line 1666
c_rt_lib0move(&___nl__im__41, generator_c_priv0get_array_free_fun_header(___nl__im__0, ___nl__im__42, ___nl__bool__3));
#line 1666
c_rt_lib0clear(&___nl__im__42);
#line 1666
c_rt_lib0move(&___nl__im__44,___get_global_string_const(442));
#line 1666
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1666
c_rt_lib0clear(&___nl__im__41);
#line 1666
c_rt_lib0clear(&___nl__im__44);
#line 1666
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1666
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__45));
#line 1666
c_rt_lib0clear(&___nl__im__40);
#line 1666
c_rt_lib0clear(&___nl__im__45);
#line 1666
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__39));
#line 1666
c_rt_lib0clear(&___nl__im__39);
#line 1667
goto label_292;
#line 1667
label_119:
;
#line 1667
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 1667
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 1668
goto label_292;
#line 1668
label_123:
;
#line 1668
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 1668
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 1669
___nl__im_ptr__54 = &((*___ref___rec__2).mod_name0field);
#line 1669
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 1669
___nl__im_ptr__54 = NULL;
#line 1669
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_hash_get_fun_header(___nl__im__0, ___nl__im__48, ___nl__im__53, ___nl__bool__3));
#line 1669
c_rt_lib0clear(&___nl__im__53);
#line 1669
c_rt_lib0move(&___nl__im__55,___get_global_string_const(442));
#line 1669
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__55));
#line 1669
c_rt_lib0clear(&___nl__im__52);
#line 1669
c_rt_lib0clear(&___nl__im__55);
#line 1669
c_rt_lib0move(&___nl__im__56, string0lf());
#line 1669
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__56));
#line 1669
c_rt_lib0clear(&___nl__im__51);
#line 1669
c_rt_lib0clear(&___nl__im__56);
#line 1669
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__50));
#line 1669
c_rt_lib0clear(&___nl__im__50);
#line 1670
___nl__im_ptr__61 = &((*___ref___rec__2).mod_name0field);
#line 1670
c_rt_lib0copy(&___nl__im__60, (*___nl__im_ptr__61));
#line 1670
___nl__im_ptr__61 = NULL;
#line 1670
c_rt_lib0move(&___nl__im__59, generator_c_priv0get_hash_next_iter_fun_header(___nl__im__0, ___nl__im__60, ___nl__bool__3));
#line 1670
c_rt_lib0clear(&___nl__im__60);
#line 1670
c_rt_lib0move(&___nl__im__62,___get_global_string_const(442));
#line 1670
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__62));
#line 1670
c_rt_lib0clear(&___nl__im__59);
#line 1670
c_rt_lib0clear(&___nl__im__62);
#line 1670
c_rt_lib0move(&___nl__im__63, string0lf());
#line 1670
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__63));
#line 1670
c_rt_lib0clear(&___nl__im__58);
#line 1670
c_rt_lib0clear(&___nl__im__63);
#line 1670
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__57));
#line 1670
c_rt_lib0clear(&___nl__im__57);
#line 1671
___nl__im_ptr__68 = &((*___ref___rec__2).mod_name0field);
#line 1671
c_rt_lib0copy(&___nl__im__67, (*___nl__im_ptr__68));
#line 1671
___nl__im_ptr__68 = NULL;
#line 1671
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_hash_clean_fun_header(___nl__im__0, ___nl__im__67, ___nl__bool__3));
#line 1671
c_rt_lib0clear(&___nl__im__67);
#line 1671
c_rt_lib0move(&___nl__im__69,___get_global_string_const(442));
#line 1671
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 1671
c_rt_lib0clear(&___nl__im__66);
#line 1671
c_rt_lib0clear(&___nl__im__69);
#line 1671
c_rt_lib0move(&___nl__im__70, string0lf());
#line 1671
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__70));
#line 1671
c_rt_lib0clear(&___nl__im__65);
#line 1671
c_rt_lib0clear(&___nl__im__70);
#line 1671
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__64));
#line 1671
c_rt_lib0clear(&___nl__im__64);
#line 1672
___nl__im_ptr__75 = &((*___ref___rec__2).mod_name0field);
#line 1672
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 1672
___nl__im_ptr__75 = NULL;
#line 1672
c_rt_lib0move(&___nl__im__73, generator_c_priv0get_hash_free_fun_header(___nl__im__0, ___nl__im__74, ___nl__bool__3));
#line 1672
c_rt_lib0clear(&___nl__im__74);
#line 1672
c_rt_lib0move(&___nl__im__76,___get_global_string_const(442));
#line 1672
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__76));
#line 1672
c_rt_lib0clear(&___nl__im__73);
#line 1672
c_rt_lib0clear(&___nl__im__76);
#line 1672
c_rt_lib0move(&___nl__im__77, string0lf());
#line 1672
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__77));
#line 1672
c_rt_lib0clear(&___nl__im__72);
#line 1672
c_rt_lib0clear(&___nl__im__77);
#line 1672
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__71));
#line 1672
c_rt_lib0clear(&___nl__im__71);
#line 1673
goto label_292;
#line 1673
label_187:
;
#line 1673
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 1673
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 1674
goto label_292;
#line 1674
label_191:
;
#line 1674
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 1674
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1675
___nl__im_ptr__86 = &((*___ref___rec__2).mod_name0field);
#line 1675
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 1675
___nl__im_ptr__86 = NULL;
#line 1675
c_rt_lib0move(&___nl__im__84, generator_c_priv0get_rec_clean_fun_header(___nl__im__0, ___nl__im__85, ___nl__bool__3));
#line 1675
c_rt_lib0clear(&___nl__im__85);
#line 1675
c_rt_lib0move(&___nl__im__87,___get_global_string_const(442));
#line 1675
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 1675
c_rt_lib0clear(&___nl__im__84);
#line 1675
c_rt_lib0clear(&___nl__im__87);
#line 1675
c_rt_lib0move(&___nl__im__88, string0lf());
#line 1675
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__88));
#line 1675
c_rt_lib0clear(&___nl__im__83);
#line 1675
c_rt_lib0clear(&___nl__im__88);
#line 1675
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__82));
#line 1675
c_rt_lib0clear(&___nl__im__82);
#line 1676
___nl__im_ptr__93 = &((*___ref___rec__2).mod_name0field);
#line 1676
c_rt_lib0copy(&___nl__im__92, (*___nl__im_ptr__93));
#line 1676
___nl__im_ptr__93 = NULL;
#line 1676
c_rt_lib0move(&___nl__im__91, generator_c_priv0get_rec_free_fun_header(___nl__im__0, ___nl__im__92, ___nl__bool__3));
#line 1676
c_rt_lib0clear(&___nl__im__92);
#line 1676
c_rt_lib0move(&___nl__im__94,___get_global_string_const(442));
#line 1676
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__94));
#line 1676
c_rt_lib0clear(&___nl__im__91);
#line 1676
c_rt_lib0clear(&___nl__im__94);
#line 1676
c_rt_lib0move(&___nl__im__95, string0lf());
#line 1676
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__95));
#line 1676
c_rt_lib0clear(&___nl__im__90);
#line 1676
c_rt_lib0clear(&___nl__im__95);
#line 1676
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__89));
#line 1676
c_rt_lib0clear(&___nl__im__89);
#line 1677
goto label_292;
#line 1677
label_225:
;
#line 1677
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 1677
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 1678
goto label_292;
#line 1678
label_229:
;
#line 1679
goto label_292;
#line 1679
label_231:
;
#line 1680
goto label_292;
#line 1680
label_233:
;
#line 1681
goto label_292;
#line 1681
label_235:
;
#line 1682
goto label_292;
#line 1682
label_237:
;
#line 1682
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(12)));
#line 1682
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 1683
goto label_292;
#line 1683
label_241:
;
#line 1683
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 1683
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 1684
___nl__im_ptr__106 = &((*___ref___rec__2).mod_name0field);
#line 1684
c_rt_lib0copy(&___nl__im__105, (*___nl__im_ptr__106));
#line 1684
___nl__im_ptr__106 = NULL;
#line 1684
c_rt_lib0move(&___nl__im__104, generator_c_priv0get_variant_make_fun_header(___nl__im__0, ___nl__im__105, ___nl__bool__3));
#line 1684
c_rt_lib0clear(&___nl__im__105);
#line 1684
c_rt_lib0move(&___nl__im__107,___get_global_string_const(442));
#line 1684
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__107));
#line 1684
c_rt_lib0clear(&___nl__im__104);
#line 1684
c_rt_lib0clear(&___nl__im__107);
#line 1684
c_rt_lib0move(&___nl__im__108, string0lf());
#line 1684
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__108));
#line 1684
c_rt_lib0clear(&___nl__im__103);
#line 1684
c_rt_lib0clear(&___nl__im__108);
#line 1684
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__102));
#line 1684
c_rt_lib0clear(&___nl__im__102);
#line 1685
___nl__im_ptr__113 = &((*___ref___rec__2).mod_name0field);
#line 1685
c_rt_lib0copy(&___nl__im__112, (*___nl__im_ptr__113));
#line 1685
___nl__im_ptr__113 = NULL;
#line 1685
c_rt_lib0move(&___nl__im__111, generator_c_priv0get_variant_clean_fun_header(___nl__im__0, ___nl__im__112, ___nl__bool__3));
#line 1685
c_rt_lib0clear(&___nl__im__112);
#line 1685
c_rt_lib0move(&___nl__im__114,___get_global_string_const(442));
#line 1685
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__114));
#line 1685
c_rt_lib0clear(&___nl__im__111);
#line 1685
c_rt_lib0clear(&___nl__im__114);
#line 1685
c_rt_lib0move(&___nl__im__115, string0lf());
#line 1685
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__115));
#line 1685
c_rt_lib0clear(&___nl__im__110);
#line 1685
c_rt_lib0clear(&___nl__im__115);
#line 1685
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__109));
#line 1685
c_rt_lib0clear(&___nl__im__109);
#line 1686
___nl__im_ptr__120 = &((*___ref___rec__2).mod_name0field);
#line 1686
c_rt_lib0copy(&___nl__im__119, (*___nl__im_ptr__120));
#line 1686
___nl__im_ptr__120 = NULL;
#line 1686
c_rt_lib0move(&___nl__im__118, generator_c_priv0get_variant_free_fun_header(___nl__im__0, ___nl__im__119, ___nl__bool__3));
#line 1686
c_rt_lib0clear(&___nl__im__119);
#line 1686
c_rt_lib0move(&___nl__im__121,___get_global_string_const(442));
#line 1686
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__121));
#line 1686
c_rt_lib0clear(&___nl__im__118);
#line 1686
c_rt_lib0clear(&___nl__im__121);
#line 1686
c_rt_lib0move(&___nl__im__122, string0lf());
#line 1686
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__122));
#line 1686
c_rt_lib0clear(&___nl__im__117);
#line 1686
c_rt_lib0clear(&___nl__im__122);
#line 1686
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__116));
#line 1686
c_rt_lib0clear(&___nl__im__116);
#line 1687
goto label_292;
#line 1687
label_290:
;
#line 1688
goto label_292;
#line 1688
label_292:
;
#line 1689
c_rt_lib0clear(&___nl__im__0);
#line 1689
c_rt_lib0clear(&___nl__im__1);
#line 1689
//clear ___nl__bool__3;
#line 1689
//clear ___nl__bool__5;
#line 1689
c_rt_lib0clear(&___nl__im__6);
#line 1689
c_rt_lib0clear(&___nl__im__7);
#line 1689
c_rt_lib0clear(&___nl__im__8);
#line 1689
c_rt_lib0clear(&___nl__im__9);
#line 1689
c_rt_lib0clear(&___nl__im__10);
#line 1689
c_rt_lib0clear(&___nl__im__46);
#line 1689
c_rt_lib0clear(&___nl__im__47);
#line 1689
c_rt_lib0clear(&___nl__im__48);
#line 1689
c_rt_lib0clear(&___nl__im__49);
#line 1689
c_rt_lib0clear(&___nl__im__78);
#line 1689
c_rt_lib0clear(&___nl__im__79);
#line 1689
c_rt_lib0clear(&___nl__im__80);
#line 1689
c_rt_lib0clear(&___nl__im__81);
#line 1689
c_rt_lib0clear(&___nl__im__96);
#line 1689
c_rt_lib0clear(&___nl__im__97);
#line 1689
c_rt_lib0clear(&___nl__im__98);
#line 1689
c_rt_lib0clear(&___nl__im__99);
#line 1689
c_rt_lib0clear(&___nl__im__100);
#line 1689
c_rt_lib0clear(&___nl__im__101);
#line 1689
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
#line 1694
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 1695
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 1695
if(___nl__bool__6){ goto label_34;}
#line 1696
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 1696
if(___nl__bool__6){ goto label_36;}
#line 1697
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1697
if(___nl__bool__6){ goto label_40;}
#line 1703
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 1703
if(___nl__bool__6){ goto label_99;}
#line 1704
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1704
if(___nl__bool__6){ goto label_103;}
#line 1709
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 1709
if(___nl__bool__6){ goto label_151;}
#line 1710
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1710
if(___nl__bool__6){ goto label_155;}
#line 1713
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 1713
if(___nl__bool__6){ goto label_181;}
#line 1714
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 1714
if(___nl__bool__6){ goto label_185;}
#line 1715
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1715
if(___nl__bool__6){ goto label_187;}
#line 1716
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1716
if(___nl__bool__6){ goto label_189;}
#line 1717
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1717
if(___nl__bool__6){ goto label_191;}
#line 1718
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1718
if(___nl__bool__6){ goto label_193;}
#line 1719
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1719
if(___nl__bool__6){ goto label_197;}
#line 1724
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1724
if(___nl__bool__6){ goto label_234;}
#line 1724
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 1724
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__1));
#line 1724
nl_die_arg(___nl__im__7);
#line 1695
label_34:
;
#line 1696
goto label_236;
#line 1696
label_36:
;
#line 1696
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 1696
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1697
goto label_236;
#line 1697
label_40:
;
#line 1697
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 1697
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1698
___nl__im_ptr__15 = &((*___ref___rec__2).mod_name0field);
#line 1698
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1698
___nl__im_ptr__15 = NULL;
#line 1698
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_array_push_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__14, ___nl__bool__4));
#line 1698
c_rt_lib0clear(&___nl__im__14);
#line 1698
c_rt_lib0move(&___nl__im__16, string0lf());
#line 1698
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 1698
c_rt_lib0clear(&___nl__im__13);
#line 1698
c_rt_lib0clear(&___nl__im__16);
#line 1698
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__12));
#line 1698
c_rt_lib0clear(&___nl__im__12);
#line 1699
___nl__im_ptr__20 = &((*___ref___rec__2).mod_name0field);
#line 1699
c_rt_lib0copy(&___nl__im__19, (*___nl__im_ptr__20));
#line 1699
___nl__im_ptr__20 = NULL;
#line 1699
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_array_get_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__19, ___nl__bool__4));
#line 1699
c_rt_lib0clear(&___nl__im__19);
#line 1699
c_rt_lib0move(&___nl__im__21, string0lf());
#line 1699
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__21));
#line 1699
c_rt_lib0clear(&___nl__im__18);
#line 1699
c_rt_lib0clear(&___nl__im__21);
#line 1699
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__17));
#line 1699
c_rt_lib0clear(&___nl__im__17);
#line 1700
___nl__im_ptr__25 = &((*___ref___rec__2).mod_name0field);
#line 1700
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1700
___nl__im_ptr__25 = NULL;
#line 1700
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_array_len_fun_def(___nl__im__0, ___nl__im__24, ___nl__bool__4));
#line 1700
c_rt_lib0clear(&___nl__im__24);
#line 1700
c_rt_lib0move(&___nl__im__26, string0lf());
#line 1700
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 1700
c_rt_lib0clear(&___nl__im__23);
#line 1700
c_rt_lib0clear(&___nl__im__26);
#line 1700
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__22));
#line 1700
c_rt_lib0clear(&___nl__im__22);
#line 1701
___nl__im_ptr__30 = &((*___ref___rec__2).mod_name0field);
#line 1701
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1701
___nl__im_ptr__30 = NULL;
#line 1701
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_array_clean_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__29, ___nl__im__3, ___nl__bool__4));
#line 1701
c_rt_lib0clear(&___nl__im__29);
#line 1701
c_rt_lib0move(&___nl__im__31, string0lf());
#line 1701
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__31));
#line 1701
c_rt_lib0clear(&___nl__im__28);
#line 1701
c_rt_lib0clear(&___nl__im__31);
#line 1701
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__27));
#line 1701
c_rt_lib0clear(&___nl__im__27);
#line 1702
___nl__im_ptr__35 = &((*___ref___rec__2).mod_name0field);
#line 1702
c_rt_lib0copy(&___nl__im__34, (*___nl__im_ptr__35));
#line 1702
___nl__im_ptr__35 = NULL;
#line 1702
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_array_free_fun_def(___nl__im__0, ___nl__im__34, ___nl__bool__4));
#line 1702
c_rt_lib0clear(&___nl__im__34);
#line 1702
c_rt_lib0move(&___nl__im__36, string0lf());
#line 1702
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 1702
c_rt_lib0clear(&___nl__im__33);
#line 1702
c_rt_lib0clear(&___nl__im__36);
#line 1702
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__32));
#line 1702
c_rt_lib0clear(&___nl__im__32);
#line 1703
goto label_236;
#line 1703
label_99:
;
#line 1703
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 1703
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 1704
goto label_236;
#line 1704
label_103:
;
#line 1704
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 1704
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 1705
___nl__im_ptr__44 = &((*___ref___rec__2).mod_name0field);
#line 1705
c_rt_lib0copy(&___nl__im__43, (*___nl__im_ptr__44));
#line 1705
___nl__im_ptr__44 = NULL;
#line 1705
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_hash_get_fun_def(___nl__im__0, ___nl__im__39, ___nl__im__43, ___nl__bool__4));
#line 1705
c_rt_lib0clear(&___nl__im__43);
#line 1705
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1705
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 1705
c_rt_lib0clear(&___nl__im__42);
#line 1705
c_rt_lib0clear(&___nl__im__45);
#line 1705
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__41));
#line 1705
c_rt_lib0clear(&___nl__im__41);
#line 1706
___nl__im_ptr__49 = &((*___ref___rec__2).mod_name0field);
#line 1706
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 1706
___nl__im_ptr__49 = NULL;
#line 1706
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_hash_next_iter_fun_def(___nl__im__0, ___nl__im__48, ___nl__bool__4));
#line 1706
c_rt_lib0clear(&___nl__im__48);
#line 1706
c_rt_lib0move(&___nl__im__50, string0lf());
#line 1706
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__50));
#line 1706
c_rt_lib0clear(&___nl__im__47);
#line 1706
c_rt_lib0clear(&___nl__im__50);
#line 1706
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__46));
#line 1706
c_rt_lib0clear(&___nl__im__46);
#line 1707
___nl__im_ptr__54 = &((*___ref___rec__2).mod_name0field);
#line 1707
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 1707
___nl__im_ptr__54 = NULL;
#line 1707
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_hash_clean_fun_def(___nl__im__0, ___nl__im__39, ___nl__im__53, ___nl__im__3, ___nl__bool__4));
#line 1707
c_rt_lib0clear(&___nl__im__53);
#line 1707
c_rt_lib0move(&___nl__im__55, string0lf());
#line 1707
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__55));
#line 1707
c_rt_lib0clear(&___nl__im__52);
#line 1707
c_rt_lib0clear(&___nl__im__55);
#line 1707
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__51));
#line 1707
c_rt_lib0clear(&___nl__im__51);
#line 1708
___nl__im_ptr__59 = &((*___ref___rec__2).mod_name0field);
#line 1708
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 1708
___nl__im_ptr__59 = NULL;
#line 1708
c_rt_lib0move(&___nl__im__57, generator_c_priv0get_hash_free_fun_def(___nl__im__0, ___nl__im__58, ___nl__bool__4));
#line 1708
c_rt_lib0clear(&___nl__im__58);
#line 1708
c_rt_lib0move(&___nl__im__60, string0lf());
#line 1708
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 1708
c_rt_lib0clear(&___nl__im__57);
#line 1708
c_rt_lib0clear(&___nl__im__60);
#line 1708
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__56));
#line 1708
c_rt_lib0clear(&___nl__im__56);
#line 1709
goto label_236;
#line 1709
label_151:
;
#line 1709
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 1709
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 1710
goto label_236;
#line 1710
label_155:
;
#line 1710
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 1710
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 1711
___nl__im_ptr__68 = &((*___ref___rec__2).mod_name0field);
#line 1711
c_rt_lib0copy(&___nl__im__67, (*___nl__im_ptr__68));
#line 1711
___nl__im_ptr__68 = NULL;
#line 1711
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_rec_clean_fun_def(___nl__im__0, ___nl__im__63, ___nl__im__67, ___nl__im__3, ___nl__bool__4));
#line 1711
c_rt_lib0clear(&___nl__im__67);
#line 1711
c_rt_lib0move(&___nl__im__69, string0lf());
#line 1711
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 1711
c_rt_lib0clear(&___nl__im__66);
#line 1711
c_rt_lib0clear(&___nl__im__69);
#line 1711
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__65));
#line 1711
c_rt_lib0clear(&___nl__im__65);
#line 1712
___nl__im_ptr__73 = &((*___ref___rec__2).mod_name0field);
#line 1712
c_rt_lib0copy(&___nl__im__72, (*___nl__im_ptr__73));
#line 1712
___nl__im_ptr__73 = NULL;
#line 1712
c_rt_lib0move(&___nl__im__71, generator_c_priv0get_rec_free_fun_def(___nl__im__0, ___nl__im__72, ___nl__bool__4));
#line 1712
c_rt_lib0clear(&___nl__im__72);
#line 1712
c_rt_lib0move(&___nl__im__74, string0lf());
#line 1712
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__74));
#line 1712
c_rt_lib0clear(&___nl__im__71);
#line 1712
c_rt_lib0clear(&___nl__im__74);
#line 1712
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__70));
#line 1712
c_rt_lib0clear(&___nl__im__70);
#line 1713
goto label_236;
#line 1713
label_181:
;
#line 1713
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 1713
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 1714
goto label_236;
#line 1714
label_185:
;
#line 1715
goto label_236;
#line 1715
label_187:
;
#line 1716
goto label_236;
#line 1716
label_189:
;
#line 1717
goto label_236;
#line 1717
label_191:
;
#line 1718
goto label_236;
#line 1718
label_193:
;
#line 1718
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(12)));
#line 1718
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1719
goto label_236;
#line 1719
label_197:
;
#line 1719
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 1719
c_rt_lib0copy(&___nl__im__79, ___nl__im__80);
#line 1720
___nl__im_ptr__84 = &((*___ref___rec__2).mod_name0field);
#line 1720
c_rt_lib0copy(&___nl__im__83, (*___nl__im_ptr__84));
#line 1720
___nl__im_ptr__84 = NULL;
#line 1720
c_rt_lib0move(&___nl__im__82, generator_c_priv0get_variant_make_fun_def(___nl__im__0, ___nl__im__83, ___nl__bool__4));
#line 1720
c_rt_lib0clear(&___nl__im__83);
#line 1720
c_rt_lib0move(&___nl__im__85, string0lf());
#line 1720
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__85));
#line 1720
c_rt_lib0clear(&___nl__im__82);
#line 1720
c_rt_lib0clear(&___nl__im__85);
#line 1720
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__81));
#line 1720
c_rt_lib0clear(&___nl__im__81);
#line 1721
___nl__im_ptr__89 = &((*___ref___rec__2).mod_name0field);
#line 1721
c_rt_lib0copy(&___nl__im__88, (*___nl__im_ptr__89));
#line 1721
___nl__im_ptr__89 = NULL;
#line 1721
c_rt_lib0move(&___nl__im__87, generator_c_priv0get_variant_clean_fun_def(___nl__im__0, ___nl__im__79, ___nl__im__88, ___nl__bool__4));
#line 1721
c_rt_lib0clear(&___nl__im__88);
#line 1722
c_rt_lib0move(&___nl__im__90, string0lf());
#line 1722
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__90));
#line 1722
c_rt_lib0clear(&___nl__im__87);
#line 1722
c_rt_lib0clear(&___nl__im__90);
#line 1722
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__86));
#line 1722
c_rt_lib0clear(&___nl__im__86);
#line 1723
___nl__im_ptr__94 = &((*___ref___rec__2).mod_name0field);
#line 1723
c_rt_lib0copy(&___nl__im__93, (*___nl__im_ptr__94));
#line 1723
___nl__im_ptr__94 = NULL;
#line 1723
c_rt_lib0move(&___nl__im__92, generator_c_priv0get_variant_free_fun_def(___nl__im__0, ___nl__im__93, ___nl__bool__4));
#line 1723
c_rt_lib0clear(&___nl__im__93);
#line 1723
c_rt_lib0move(&___nl__im__95, string0lf());
#line 1723
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__95));
#line 1723
c_rt_lib0clear(&___nl__im__92);
#line 1723
c_rt_lib0clear(&___nl__im__95);
#line 1723
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__91));
#line 1723
c_rt_lib0clear(&___nl__im__91);
#line 1724
goto label_236;
#line 1724
label_234:
;
#line 1725
goto label_236;
#line 1725
label_236:
;
#line 1726
c_rt_lib0clear(&___nl__im__0);
#line 1726
c_rt_lib0clear(&___nl__im__1);
#line 1726
c_rt_lib0clear(&___nl__im__3);
#line 1726
//clear ___nl__bool__4;
#line 1726
//clear ___nl__bool__6;
#line 1726
c_rt_lib0clear(&___nl__im__7);
#line 1726
c_rt_lib0clear(&___nl__im__8);
#line 1726
c_rt_lib0clear(&___nl__im__9);
#line 1726
c_rt_lib0clear(&___nl__im__10);
#line 1726
c_rt_lib0clear(&___nl__im__11);
#line 1726
c_rt_lib0clear(&___nl__im__37);
#line 1726
c_rt_lib0clear(&___nl__im__38);
#line 1726
c_rt_lib0clear(&___nl__im__39);
#line 1726
c_rt_lib0clear(&___nl__im__40);
#line 1726
c_rt_lib0clear(&___nl__im__61);
#line 1726
c_rt_lib0clear(&___nl__im__62);
#line 1726
c_rt_lib0clear(&___nl__im__63);
#line 1726
c_rt_lib0clear(&___nl__im__64);
#line 1726
c_rt_lib0clear(&___nl__im__75);
#line 1726
c_rt_lib0clear(&___nl__im__76);
#line 1726
c_rt_lib0clear(&___nl__im__77);
#line 1726
c_rt_lib0clear(&___nl__im__78);
#line 1726
c_rt_lib0clear(&___nl__im__79);
#line 1726
c_rt_lib0clear(&___nl__im__80);
#line 1726
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
#line 1731
if(___nl__bool__3){ goto label_3;}
#line 1731
c_rt_lib0move(&___nl__im__7,___get_global_string_const(36));
#line 1731
goto label_7;
#line 1731
label_3:
;
#line 1731
c_rt_lib0move(&___nl__im__8,___get_global_string_const(20));
#line 1731
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 1731
c_rt_lib0clear(&___nl__im__8);
#line 1731
label_7:
;
#line 1731
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 1731
c_rt_lib0clear(&___nl__im__7);
#line 1731
c_rt_lib0move(&___nl__im__9,___get_global_string_const(20));
#line 1731
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 1731
c_rt_lib0clear(&___nl__im__6);
#line 1731
c_rt_lib0clear(&___nl__im__9);
#line 1731
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__2));
#line 1731
c_rt_lib0clear(&___nl__im__5);
#line 1731
c_rt_lib0clear(&___nl__im__0);
#line 1731
c_rt_lib0clear(&___nl__im__1);
#line 1731
c_rt_lib0clear(&___nl__im__2);
#line 1731
//clear ___nl__bool__3;
#line 1731
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
#line 1735
if(___nl__bool__2){ goto label_3;}
#line 1735
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1735
goto label_5;
#line 1735
label_3:
;
#line 1735
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 1735
label_5:
;
#line 1735
c_rt_lib0move(&___nl__im__5,___get_global_string_const(643));
#line 1735
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__4, ___nl__im__5, ___nl__bool__2));
#line 1735
c_rt_lib0clear(&___nl__im__4);
#line 1735
c_rt_lib0clear(&___nl__im__5);
#line 1735
c_rt_lib0clear(&___nl__im__0);
#line 1735
c_rt_lib0clear(&___nl__im__1);
#line 1735
//clear ___nl__bool__2;
#line 1735
return ___nl__im__3;
#line 1735
c_rt_lib0clear(&___nl__im__0);
#line 1735
c_rt_lib0clear(&___nl__im__1);
#line 1735
//clear ___nl__bool__2;
#line 1735
c_rt_lib0clear(&___nl__im__3);
#line 1735
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
#line 1740
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1741
c_rt_lib0move(&___nl__im__7,___get_global_string_const(484));
#line 1741
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_array_push_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1741
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 1741
c_rt_lib0clear(&___nl__im__7);
#line 1741
c_rt_lib0clear(&___nl__im__8);
#line 1741
c_rt_lib0move(&___nl__im__9,___get_global_string_const(457));
#line 1741
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 1741
c_rt_lib0clear(&___nl__im__6);
#line 1741
c_rt_lib0clear(&___nl__im__9);
#line 1741
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1741
c_rt_lib0clear(&___nl__im__5);
#line 1742
c_rt_lib0move(&___nl__im__11,___get_global_string_const(644));
#line 1742
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__0, ___nl__im__11));
#line 1742
c_rt_lib0clear(&___nl__im__11);
#line 1742
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__10));
#line 1742
c_rt_lib0clear(&___nl__im__10);
#line 1743
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_type_name(___nl__im__1));
#line 1743
c_rt_lib0move(&___nl__im__14,___get_global_string_const(645));
#line 1743
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 1743
c_rt_lib0clear(&___nl__im__13);
#line 1743
c_rt_lib0clear(&___nl__im__14);
#line 1743
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1743
c_rt_lib0clear(&___nl__im__12);
#line 1744
c_rt_lib0clear(&___nl__im__0);
#line 1744
c_rt_lib0clear(&___nl__im__1);
#line 1744
c_rt_lib0clear(&___nl__im__2);
#line 1744
//clear ___nl__bool__3;
#line 1744
return ___nl__im__4;
#line 1744
c_rt_lib0clear(&___nl__im__0);
#line 1744
c_rt_lib0clear(&___nl__im__1);
#line 1744
c_rt_lib0clear(&___nl__im__2);
#line 1744
//clear ___nl__bool__3;
#line 1744
c_rt_lib0clear(&___nl__im__4);
#line 1744
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
#line 1749
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1750
c_rt_lib0move(&___nl__im__5,___get_global_string_const(646));
#line 1751
c_rt_lib0move(&___nl__im__8,___get_global_string_const(581));
#line 1751
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_type_name(___nl__im__1));
#line 1751
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1751
c_rt_lib0clear(&___nl__im__8);
#line 1751
c_rt_lib0clear(&___nl__im__9);
#line 1751
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 1751
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1751
c_rt_lib0clear(&___nl__im__7);
#line 1751
c_rt_lib0clear(&___nl__im__10);
#line 1752
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_array_push_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1752
c_rt_lib0move(&___nl__im__23,___get_global_string_const(647));
#line 1752
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1752
c_rt_lib0clear(&___nl__im__22);
#line 1752
c_rt_lib0clear(&___nl__im__23);
#line 1752
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__5));
#line 1752
c_rt_lib0clear(&___nl__im__21);
#line 1754
c_rt_lib0move(&___nl__im__24,___get_global_string_const(375));
#line 1754
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 1754
c_rt_lib0clear(&___nl__im__20);
#line 1754
c_rt_lib0clear(&___nl__im__24);
#line 1754
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 1754
c_rt_lib0clear(&___nl__im__19);
#line 1754
c_rt_lib0move(&___nl__im__25,___get_global_string_const(648));
#line 1754
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 1754
c_rt_lib0clear(&___nl__im__18);
#line 1754
c_rt_lib0clear(&___nl__im__25);
#line 1754
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__5));
#line 1754
c_rt_lib0clear(&___nl__im__17);
#line 1755
c_rt_lib0move(&___nl__im__26,___get_global_string_const(649));
#line 1755
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__26));
#line 1755
c_rt_lib0clear(&___nl__im__16);
#line 1755
c_rt_lib0clear(&___nl__im__26);
#line 1755
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__6));
#line 1755
c_rt_lib0clear(&___nl__im__15);
#line 1759
c_rt_lib0move(&___nl__im__27,___get_global_string_const(650));
#line 1759
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__27));
#line 1759
c_rt_lib0clear(&___nl__im__14);
#line 1759
c_rt_lib0clear(&___nl__im__27);
#line 1759
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 1759
c_rt_lib0clear(&___nl__im__13);
#line 1759
c_rt_lib0move(&___nl__im__28,___get_global_string_const(651));
#line 1759
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__28));
#line 1759
c_rt_lib0clear(&___nl__im__12);
#line 1759
c_rt_lib0clear(&___nl__im__28);
#line 1759
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1759
c_rt_lib0clear(&___nl__im__11);
#line 1763
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1763
if(___nl__bool__29){ goto label_51;}
#line 1763
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1763
label_51:
;
#line 1763
if(___nl__bool__29){ goto label_54;}
#line 1763
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1763
label_54:
;
#line 1763
if(___nl__bool__29){ goto label_57;}
#line 1764
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1764
label_57:
;
#line 1764
if(___nl__bool__29){ goto label_60;}
#line 1764
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1764
label_60:
;
#line 1764
if(___nl__bool__29){ goto label_63;}
#line 1764
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1764
label_63:
;
#line 1764
___nl__bool__29 = !___nl__bool__29;
#line 1764
if(___nl__bool__29){ goto label_70;}
#line 1765
c_rt_lib0move(&___nl__im__30,___get_global_string_const(652));
#line 1765
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__30));
#line 1765
c_rt_lib0clear(&___nl__im__30);
#line 1766
goto label_91;
#line 1766
label_70:
;
#line 1767
c_rt_lib0move(&___nl__im__33,___get_global_string_const(653));
#line 1768
c_rt_lib0move(&___nl__im__35,___get_global_string_const(455));
#line 1768
c_rt_lib0move(&___nl__im__37,___get_global_string_const(654));
#line 1768
c_rt_lib0move(&___nl__im__38,___get_global_string_const(279));
#line 1768
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__38));
#line 1768
c_rt_lib0clear(&___nl__im__37);
#line 1768
c_rt_lib0clear(&___nl__im__38);
#line 1768
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_fun_lib(___nl__im__35, ___nl__im__36));
#line 1768
c_rt_lib0clear(&___nl__im__35);
#line 1768
c_rt_lib0clear(&___nl__im__36);
#line 1768
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 1768
c_rt_lib0clear(&___nl__im__33);
#line 1768
c_rt_lib0clear(&___nl__im__34);
#line 1768
c_rt_lib0move(&___nl__im__39,___get_global_string_const(442));
#line 1768
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 1768
c_rt_lib0clear(&___nl__im__32);
#line 1768
c_rt_lib0clear(&___nl__im__39);
#line 1768
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__31));
#line 1768
c_rt_lib0clear(&___nl__im__31);
#line 1769
goto label_91;
#line 1769
label_91:
;
#line 1769
//clear ___nl__bool__29;
#line 1770
c_rt_lib0move(&___nl__im__40,___get_global_string_const(655));
#line 1770
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__40));
#line 1770
c_rt_lib0clear(&___nl__im__40);
#line 1772
c_rt_lib0clear(&___nl__im__0);
#line 1772
c_rt_lib0clear(&___nl__im__1);
#line 1772
c_rt_lib0clear(&___nl__im__2);
#line 1772
//clear ___nl__bool__3;
#line 1772
c_rt_lib0clear(&___nl__im__5);
#line 1772
c_rt_lib0clear(&___nl__im__6);
#line 1772
return ___nl__im__4;
#line 1772
c_rt_lib0clear(&___nl__im__0);
#line 1772
c_rt_lib0clear(&___nl__im__1);
#line 1772
c_rt_lib0clear(&___nl__im__2);
#line 1772
//clear ___nl__bool__3;
#line 1772
c_rt_lib0clear(&___nl__im__4);
#line 1772
c_rt_lib0clear(&___nl__im__5);
#line 1772
c_rt_lib0clear(&___nl__im__6);
#line 1772
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1776
c_rt_lib0move(&___nl__im__4,___get_global_string_const(656));
#line 1776
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1776
c_rt_lib0clear(&___nl__im__4);
#line 1776
c_rt_lib0clear(&___nl__im__0);
#line 1776
c_rt_lib0clear(&___nl__im__1);
#line 1776
//clear ___nl__bool__2;
#line 1776
return ___nl__im__3;
#line 1776
c_rt_lib0clear(&___nl__im__0);
#line 1776
c_rt_lib0clear(&___nl__im__1);
#line 1776
//clear ___nl__bool__2;
#line 1776
c_rt_lib0clear(&___nl__im__3);
#line 1776
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
#line 1781
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1782
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_type_name(___nl__im__1));
#line 1782
c_rt_lib0move(&___nl__im__9,___get_global_string_const(629));
#line 1782
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1782
c_rt_lib0clear(&___nl__im__8);
#line 1782
c_rt_lib0clear(&___nl__im__9);
#line 1782
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_array_get_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1782
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1782
c_rt_lib0clear(&___nl__im__7);
#line 1782
c_rt_lib0clear(&___nl__im__10);
#line 1782
c_rt_lib0move(&___nl__im__11,___get_global_string_const(457));
#line 1782
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1782
c_rt_lib0clear(&___nl__im__6);
#line 1782
c_rt_lib0clear(&___nl__im__11);
#line 1782
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1782
c_rt_lib0clear(&___nl__im__5);
#line 1783
c_rt_lib0move(&___nl__im__13,___get_global_string_const(644));
#line 1783
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__0, ___nl__im__13));
#line 1783
c_rt_lib0clear(&___nl__im__13);
#line 1783
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1783
c_rt_lib0clear(&___nl__im__12);
#line 1784
c_rt_lib0move(&___nl__im__15, generator_c_priv0int_t());
#line 1784
c_rt_lib0move(&___nl__im__16,___get_global_string_const(657));
#line 1784
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1784
c_rt_lib0clear(&___nl__im__15);
#line 1784
c_rt_lib0clear(&___nl__im__16);
#line 1784
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__14));
#line 1784
c_rt_lib0clear(&___nl__im__14);
#line 1785
c_rt_lib0clear(&___nl__im__0);
#line 1785
c_rt_lib0clear(&___nl__im__1);
#line 1785
c_rt_lib0clear(&___nl__im__2);
#line 1785
//clear ___nl__bool__3;
#line 1785
return ___nl__im__4;
#line 1785
c_rt_lib0clear(&___nl__im__0);
#line 1785
c_rt_lib0clear(&___nl__im__1);
#line 1785
c_rt_lib0clear(&___nl__im__2);
#line 1785
//clear ___nl__bool__3;
#line 1785
c_rt_lib0clear(&___nl__im__4);
#line 1785
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
#line 1790
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1791
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_array_get_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1791
c_rt_lib0move(&___nl__im__7,___get_global_string_const(658));
#line 1791
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1791
c_rt_lib0clear(&___nl__im__6);
#line 1791
c_rt_lib0clear(&___nl__im__7);
#line 1791
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1791
c_rt_lib0clear(&___nl__im__5);
#line 1797
c_rt_lib0clear(&___nl__im__0);
#line 1797
c_rt_lib0clear(&___nl__im__1);
#line 1797
c_rt_lib0clear(&___nl__im__2);
#line 1797
//clear ___nl__bool__3;
#line 1797
return ___nl__im__4;
#line 1797
c_rt_lib0clear(&___nl__im__0);
#line 1797
c_rt_lib0clear(&___nl__im__1);
#line 1797
c_rt_lib0clear(&___nl__im__2);
#line 1797
//clear ___nl__bool__3;
#line 1797
c_rt_lib0clear(&___nl__im__4);
#line 1797
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_len_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1801
c_rt_lib0move(&___nl__im__4,___get_global_string_const(285));
#line 1801
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1801
c_rt_lib0clear(&___nl__im__4);
#line 1801
c_rt_lib0clear(&___nl__im__0);
#line 1801
c_rt_lib0clear(&___nl__im__1);
#line 1801
//clear ___nl__bool__2;
#line 1801
return ___nl__im__3;
#line 1801
c_rt_lib0clear(&___nl__im__0);
#line 1801
c_rt_lib0clear(&___nl__im__1);
#line 1801
//clear ___nl__bool__2;
#line 1801
c_rt_lib0clear(&___nl__im__3);
#line 1801
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
#line 1805
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1806
c_rt_lib0move(&___nl__im__6, generator_c_priv0int_t());
#line 1806
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_array_len_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1806
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1806
c_rt_lib0clear(&___nl__im__6);
#line 1806
c_rt_lib0clear(&___nl__im__7);
#line 1806
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 1806
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1806
c_rt_lib0clear(&___nl__im__5);
#line 1806
c_rt_lib0clear(&___nl__im__8);
#line 1806
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1806
c_rt_lib0clear(&___nl__im__4);
#line 1807
c_rt_lib0move(&___nl__im__10,___get_global_string_const(659));
#line 1807
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1807
c_rt_lib0clear(&___nl__im__10);
#line 1807
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1807
c_rt_lib0clear(&___nl__im__9);
#line 1808
c_rt_lib0clear(&___nl__im__0);
#line 1808
c_rt_lib0clear(&___nl__im__1);
#line 1808
//clear ___nl__bool__2;
#line 1808
return ___nl__im__3;
#line 1808
c_rt_lib0clear(&___nl__im__0);
#line 1808
c_rt_lib0clear(&___nl__im__1);
#line 1808
//clear ___nl__bool__2;
#line 1808
c_rt_lib0clear(&___nl__im__3);
#line 1808
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
#line 1812
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1813
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_array_len_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1813
c_rt_lib0move(&___nl__im__6,___get_global_string_const(660));
#line 1813
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 1813
c_rt_lib0clear(&___nl__im__5);
#line 1813
c_rt_lib0clear(&___nl__im__6);
#line 1813
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1813
c_rt_lib0clear(&___nl__im__4);
#line 1816
c_rt_lib0clear(&___nl__im__0);
#line 1816
c_rt_lib0clear(&___nl__im__1);
#line 1816
//clear ___nl__bool__2;
#line 1816
return ___nl__im__3;
#line 1816
c_rt_lib0clear(&___nl__im__0);
#line 1816
c_rt_lib0clear(&___nl__im__1);
#line 1816
//clear ___nl__bool__2;
#line 1816
c_rt_lib0clear(&___nl__im__3);
#line 1816
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1820
c_rt_lib0move(&___nl__im__4,___get_global_string_const(656));
#line 1820
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1820
c_rt_lib0clear(&___nl__im__4);
#line 1820
c_rt_lib0clear(&___nl__im__0);
#line 1820
c_rt_lib0clear(&___nl__im__1);
#line 1820
//clear ___nl__bool__2;
#line 1820
return ___nl__im__3;
#line 1820
c_rt_lib0clear(&___nl__im__0);
#line 1820
c_rt_lib0clear(&___nl__im__1);
#line 1820
//clear ___nl__bool__2;
#line 1820
c_rt_lib0clear(&___nl__im__3);
#line 1820
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
#line 1825
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1826
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_type_name(___nl__im__1));
#line 1826
c_rt_lib0move(&___nl__im__9,___get_global_string_const(629));
#line 1826
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1826
c_rt_lib0clear(&___nl__im__8);
#line 1826
c_rt_lib0clear(&___nl__im__9);
#line 1826
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_hash_get_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1826
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1826
c_rt_lib0clear(&___nl__im__7);
#line 1826
c_rt_lib0clear(&___nl__im__10);
#line 1826
c_rt_lib0move(&___nl__im__11,___get_global_string_const(457));
#line 1826
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1826
c_rt_lib0clear(&___nl__im__6);
#line 1826
c_rt_lib0clear(&___nl__im__11);
#line 1826
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1826
c_rt_lib0clear(&___nl__im__5);
#line 1827
c_rt_lib0move(&___nl__im__13,___get_global_string_const(661));
#line 1827
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__0, ___nl__im__13));
#line 1827
c_rt_lib0clear(&___nl__im__13);
#line 1827
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1827
c_rt_lib0clear(&___nl__im__12);
#line 1828
c_rt_lib0move(&___nl__im__15, generator_c_priv0im_t());
#line 1828
c_rt_lib0move(&___nl__im__16,___get_global_string_const(662));
#line 1828
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1828
c_rt_lib0clear(&___nl__im__15);
#line 1828
c_rt_lib0clear(&___nl__im__16);
#line 1828
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__14));
#line 1828
c_rt_lib0clear(&___nl__im__14);
#line 1829
c_rt_lib0move(&___nl__im__18, generator_c_priv0bool_t());
#line 1829
c_rt_lib0move(&___nl__im__19,___get_global_string_const(663));
#line 1829
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1829
c_rt_lib0clear(&___nl__im__18);
#line 1829
c_rt_lib0clear(&___nl__im__19);
#line 1829
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__17));
#line 1829
c_rt_lib0clear(&___nl__im__17);
#line 1830
c_rt_lib0clear(&___nl__im__0);
#line 1830
c_rt_lib0clear(&___nl__im__1);
#line 1830
c_rt_lib0clear(&___nl__im__2);
#line 1830
//clear ___nl__bool__3;
#line 1830
return ___nl__im__4;
#line 1830
c_rt_lib0clear(&___nl__im__0);
#line 1830
c_rt_lib0clear(&___nl__im__1);
#line 1830
c_rt_lib0clear(&___nl__im__2);
#line 1830
//clear ___nl__bool__3;
#line 1830
c_rt_lib0clear(&___nl__im__4);
#line 1830
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
#line 1835
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 1836
c_rt_lib0move(&___nl__im__5,___get_global_string_const(646));
#line 1837
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_type_name(___nl__im__1));
#line 1838
c_rt_lib0move(&___nl__im__9,___get_global_string_const(581));
#line 1838
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__6));
#line 1838
c_rt_lib0clear(&___nl__im__9);
#line 1838
c_rt_lib0move(&___nl__im__10,___get_global_string_const(322));
#line 1838
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 1838
c_rt_lib0clear(&___nl__im__8);
#line 1838
c_rt_lib0clear(&___nl__im__10);
#line 1839
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_hash_get_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1839
c_rt_lib0move(&___nl__im__41,___get_global_string_const(664));
#line 1839
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 1839
c_rt_lib0clear(&___nl__im__40);
#line 1839
c_rt_lib0clear(&___nl__im__41);
#line 1839
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__5));
#line 1839
c_rt_lib0clear(&___nl__im__39);
#line 1841
c_rt_lib0move(&___nl__im__42,___get_global_string_const(665));
#line 1841
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__42));
#line 1841
c_rt_lib0clear(&___nl__im__38);
#line 1841
c_rt_lib0clear(&___nl__im__42);
#line 1841
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__7));
#line 1841
c_rt_lib0clear(&___nl__im__37);
#line 1843
c_rt_lib0move(&___nl__im__43,___get_global_string_const(666));
#line 1843
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 1843
c_rt_lib0clear(&___nl__im__36);
#line 1843
c_rt_lib0clear(&___nl__im__43);
#line 1844
c_rt_lib0move(&___nl__im__44, generator_c_priv0im_t());
#line 1844
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__44));
#line 1844
c_rt_lib0clear(&___nl__im__35);
#line 1844
c_rt_lib0clear(&___nl__im__44);
#line 1844
c_rt_lib0move(&___nl__im__45,___get_global_string_const(667));
#line 1844
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__45));
#line 1844
c_rt_lib0clear(&___nl__im__34);
#line 1844
c_rt_lib0clear(&___nl__im__45);
#line 1844
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__7));
#line 1844
c_rt_lib0clear(&___nl__im__33);
#line 1845
c_rt_lib0move(&___nl__im__46,___get_global_string_const(668));
#line 1845
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__46));
#line 1845
c_rt_lib0clear(&___nl__im__32);
#line 1845
c_rt_lib0clear(&___nl__im__46);
#line 1846
c_rt_lib0move(&___nl__im__47, generator_c_priv0im_t());
#line 1846
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__47));
#line 1846
c_rt_lib0clear(&___nl__im__31);
#line 1846
c_rt_lib0clear(&___nl__im__47);
#line 1846
c_rt_lib0move(&___nl__im__48,___get_global_string_const(669));
#line 1846
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__48));
#line 1846
c_rt_lib0clear(&___nl__im__30);
#line 1846
c_rt_lib0clear(&___nl__im__48);
#line 1848
c_rt_lib0move(&___nl__im__49, generator_c_priv0int_t());
#line 1848
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__49));
#line 1848
c_rt_lib0clear(&___nl__im__29);
#line 1848
c_rt_lib0clear(&___nl__im__49);
#line 1848
c_rt_lib0move(&___nl__im__50,___get_global_string_const(670));
#line 1848
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__50));
#line 1848
c_rt_lib0clear(&___nl__im__28);
#line 1848
c_rt_lib0clear(&___nl__im__50);
#line 1849
c_rt_lib0move(&___nl__im__51, generator_c_priv0im_t());
#line 1849
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__51));
#line 1849
c_rt_lib0clear(&___nl__im__27);
#line 1849
c_rt_lib0clear(&___nl__im__51);
#line 1849
c_rt_lib0move(&___nl__im__52,___get_global_string_const(671));
#line 1849
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__52));
#line 1849
c_rt_lib0clear(&___nl__im__26);
#line 1849
c_rt_lib0clear(&___nl__im__52);
#line 1849
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__6));
#line 1849
c_rt_lib0clear(&___nl__im__25);
#line 1850
c_rt_lib0move(&___nl__im__53,___get_global_string_const(672));
#line 1850
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__53));
#line 1850
c_rt_lib0clear(&___nl__im__24);
#line 1850
c_rt_lib0clear(&___nl__im__53);
#line 1850
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__7));
#line 1850
c_rt_lib0clear(&___nl__im__23);
#line 1852
c_rt_lib0move(&___nl__im__54,___get_global_string_const(666));
#line 1852
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__54));
#line 1852
c_rt_lib0clear(&___nl__im__22);
#line 1852
c_rt_lib0clear(&___nl__im__54);
#line 1853
c_rt_lib0move(&___nl__im__55, generator_c_priv0im_t());
#line 1853
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__55));
#line 1853
c_rt_lib0clear(&___nl__im__21);
#line 1853
c_rt_lib0clear(&___nl__im__55);
#line 1853
c_rt_lib0move(&___nl__im__56,___get_global_string_const(667));
#line 1853
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__56));
#line 1853
c_rt_lib0clear(&___nl__im__20);
#line 1853
c_rt_lib0clear(&___nl__im__56);
#line 1853
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__7));
#line 1853
c_rt_lib0clear(&___nl__im__19);
#line 1854
c_rt_lib0move(&___nl__im__57,___get_global_string_const(668));
#line 1854
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__57));
#line 1854
c_rt_lib0clear(&___nl__im__18);
#line 1854
c_rt_lib0clear(&___nl__im__57);
#line 1855
c_rt_lib0move(&___nl__im__58, generator_c_priv0im_t());
#line 1855
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__58));
#line 1855
c_rt_lib0clear(&___nl__im__17);
#line 1855
c_rt_lib0clear(&___nl__im__58);
#line 1855
c_rt_lib0move(&___nl__im__59,___get_global_string_const(673));
#line 1855
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__59));
#line 1855
c_rt_lib0clear(&___nl__im__16);
#line 1855
c_rt_lib0clear(&___nl__im__59);
#line 1866
c_rt_lib0move(&___nl__im__60, generator_c_priv0im_t());
#line 1866
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__60));
#line 1866
c_rt_lib0clear(&___nl__im__15);
#line 1866
c_rt_lib0clear(&___nl__im__60);
#line 1866
c_rt_lib0move(&___nl__im__61,___get_global_string_const(674));
#line 1866
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__61));
#line 1866
c_rt_lib0clear(&___nl__im__14);
#line 1866
c_rt_lib0clear(&___nl__im__61);
#line 1866
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 1866
c_rt_lib0clear(&___nl__im__13);
#line 1867
c_rt_lib0move(&___nl__im__62,___get_global_string_const(675));
#line 1867
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__62));
#line 1867
c_rt_lib0clear(&___nl__im__12);
#line 1867
c_rt_lib0clear(&___nl__im__62);
#line 1867
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1867
c_rt_lib0clear(&___nl__im__11);
#line 1883
c_rt_lib0clear(&___nl__im__0);
#line 1883
c_rt_lib0clear(&___nl__im__1);
#line 1883
c_rt_lib0clear(&___nl__im__2);
#line 1883
//clear ___nl__bool__3;
#line 1883
c_rt_lib0clear(&___nl__im__5);
#line 1883
c_rt_lib0clear(&___nl__im__6);
#line 1883
c_rt_lib0clear(&___nl__im__7);
#line 1883
return ___nl__im__4;
#line 1883
c_rt_lib0clear(&___nl__im__0);
#line 1883
c_rt_lib0clear(&___nl__im__1);
#line 1883
c_rt_lib0clear(&___nl__im__2);
#line 1883
//clear ___nl__bool__3;
#line 1883
c_rt_lib0clear(&___nl__im__4);
#line 1883
c_rt_lib0clear(&___nl__im__5);
#line 1883
c_rt_lib0clear(&___nl__im__6);
#line 1883
c_rt_lib0clear(&___nl__im__7);
#line 1883
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_next_iter_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1887
c_rt_lib0move(&___nl__im__4,___get_global_string_const(275));
#line 1887
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1887
c_rt_lib0clear(&___nl__im__4);
#line 1887
c_rt_lib0clear(&___nl__im__0);
#line 1887
c_rt_lib0clear(&___nl__im__1);
#line 1887
//clear ___nl__bool__2;
#line 1887
return ___nl__im__3;
#line 1887
c_rt_lib0clear(&___nl__im__0);
#line 1887
c_rt_lib0clear(&___nl__im__1);
#line 1887
//clear ___nl__bool__2;
#line 1887
c_rt_lib0clear(&___nl__im__3);
#line 1887
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
#line 1891
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1892
c_rt_lib0move(&___nl__im__6,___get_global_string_const(420));
#line 1892
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1892
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1892
c_rt_lib0clear(&___nl__im__6);
#line 1892
c_rt_lib0clear(&___nl__im__7);
#line 1892
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 1892
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1892
c_rt_lib0clear(&___nl__im__5);
#line 1892
c_rt_lib0clear(&___nl__im__8);
#line 1892
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1892
c_rt_lib0clear(&___nl__im__4);
#line 1893
c_rt_lib0move(&___nl__im__10,___get_global_string_const(661));
#line 1893
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1893
c_rt_lib0clear(&___nl__im__10);
#line 1893
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1893
c_rt_lib0clear(&___nl__im__9);
#line 1894
c_rt_lib0move(&___nl__im__11,___get_global_string_const(676));
#line 1894
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 1894
c_rt_lib0clear(&___nl__im__11);
#line 1895
c_rt_lib0clear(&___nl__im__0);
#line 1895
c_rt_lib0clear(&___nl__im__1);
#line 1895
//clear ___nl__bool__2;
#line 1895
return ___nl__im__3;
#line 1895
c_rt_lib0clear(&___nl__im__0);
#line 1895
c_rt_lib0clear(&___nl__im__1);
#line 1895
//clear ___nl__bool__2;
#line 1895
c_rt_lib0clear(&___nl__im__3);
#line 1895
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
#line 1899
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_hash_next_iter_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1899
c_rt_lib0move(&___nl__im__5,___get_global_string_const(677));
#line 1899
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 1899
c_rt_lib0clear(&___nl__im__4);
#line 1899
c_rt_lib0clear(&___nl__im__5);
#line 1907
c_rt_lib0clear(&___nl__im__0);
#line 1907
c_rt_lib0clear(&___nl__im__1);
#line 1907
//clear ___nl__bool__2;
#line 1907
return ___nl__im__3;
#line 1907
c_rt_lib0clear(&___nl__im__0);
#line 1907
c_rt_lib0clear(&___nl__im__1);
#line 1907
//clear ___nl__bool__2;
#line 1907
c_rt_lib0clear(&___nl__im__3);
#line 1907
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_variant_make_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1912
c_rt_lib0move(&___nl__im__4,___get_global_string_const(247));
#line 1912
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1912
c_rt_lib0clear(&___nl__im__4);
#line 1912
c_rt_lib0clear(&___nl__im__0);
#line 1912
c_rt_lib0clear(&___nl__im__1);
#line 1912
//clear ___nl__bool__2;
#line 1912
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
#line 1916
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 1917
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 1917
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_variant_make_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1917
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1917
c_rt_lib0clear(&___nl__im__6);
#line 1917
c_rt_lib0clear(&___nl__im__7);
#line 1917
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 1917
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1917
c_rt_lib0clear(&___nl__im__5);
#line 1917
c_rt_lib0clear(&___nl__im__8);
#line 1917
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1917
c_rt_lib0clear(&___nl__im__4);
#line 1918
c_rt_lib0move(&___nl__im__10,___get_global_string_const(678));
#line 1918
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1918
c_rt_lib0clear(&___nl__im__10);
#line 1918
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1918
c_rt_lib0clear(&___nl__im__9);
#line 1919
c_rt_lib0move(&___nl__im__11,___get_global_string_const(679));
#line 1919
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 1919
c_rt_lib0clear(&___nl__im__11);
#line 1920
c_rt_lib0move(&___nl__im__12,___get_global_string_const(680));
#line 1920
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__12));
#line 1920
c_rt_lib0clear(&___nl__im__12);
#line 1921
c_rt_lib0move(&___nl__im__14, generator_c_priv0int_t());
#line 1921
c_rt_lib0move(&___nl__im__15,___get_global_string_const(681));
#line 1921
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 1921
c_rt_lib0clear(&___nl__im__14);
#line 1921
c_rt_lib0clear(&___nl__im__15);
#line 1921
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 1921
c_rt_lib0clear(&___nl__im__13);
#line 1922
c_rt_lib0clear(&___nl__im__0);
#line 1922
c_rt_lib0clear(&___nl__im__1);
#line 1922
//clear ___nl__bool__2;
#line 1922
return ___nl__im__3;
#line 1922
c_rt_lib0clear(&___nl__im__0);
#line 1922
c_rt_lib0clear(&___nl__im__1);
#line 1922
//clear ___nl__bool__2;
#line 1922
c_rt_lib0clear(&___nl__im__3);
#line 1922
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
#line 1926
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_make_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1926
c_rt_lib0move(&___nl__im__7,___get_global_string_const(682));
#line 1926
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1926
c_rt_lib0clear(&___nl__im__6);
#line 1926
c_rt_lib0clear(&___nl__im__7);
#line 1928
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1928
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1928
c_rt_lib0clear(&___nl__im__5);
#line 1928
c_rt_lib0clear(&___nl__im__8);
#line 1928
c_rt_lib0move(&___nl__im__9,___get_global_string_const(683));
#line 1928
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 1928
c_rt_lib0clear(&___nl__im__4);
#line 1928
c_rt_lib0clear(&___nl__im__9);
#line 1938
c_rt_lib0clear(&___nl__im__0);
#line 1938
c_rt_lib0clear(&___nl__im__1);
#line 1938
//clear ___nl__bool__2;
#line 1938
return ___nl__im__3;
#line 1938
c_rt_lib0clear(&___nl__im__0);
#line 1938
c_rt_lib0clear(&___nl__im__1);
#line 1938
//clear ___nl__bool__2;
#line 1938
c_rt_lib0clear(&___nl__im__3);
#line 1938
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
#line 1942
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 1942
___nl__int__3 = 0;
#line 1942
___nl__int__4 = 1;
#line 1942
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 1942
label_4:
;
#line 1942
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 1942
if(___nl__bool__6){ goto label_34;}
#line 1942
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 1942
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 1943
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(471)));
#line 1943
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(206)));
#line 1943
c_rt_lib0clear(&___nl__im__10);
#line 1943
___nl__bool__8 = generator_c_priv0is_own(___nl__im__9);
#line 1943
c_rt_lib0clear(&___nl__im__9);
#line 1943
___nl__bool__8 = !___nl__bool__8;
#line 1943
if(___nl__bool__8){ goto label_28;}
#line 1943
___nl__bool__11 = true;
#line 1943
c_rt_lib0clear(&___nl__im__0);
#line 1943
c_rt_lib0clear(&___nl__im__1);
#line 1943
c_rt_lib0clear(&___nl__im__2);
#line 1943
//clear ___nl__int__3;
#line 1943
//clear ___nl__int__4;
#line 1943
//clear ___nl__int__5;
#line 1943
//clear ___nl__bool__6;
#line 1943
c_rt_lib0clear(&___nl__im__7);
#line 1943
//clear ___nl__bool__8;
#line 1943
return ___nl__bool__11;
#line 1943
goto label_28;
#line 1943
label_28:
;
#line 1943
//clear ___nl__bool__8;
#line 1943
//clear ___nl__bool__11;
#line 1943
c_rt_lib0clear(&___nl__im__2);
#line 1944
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 1944
goto label_4;
#line 1944
label_34:
;
#line 1945
___nl__bool__12 = false;
#line 1945
c_rt_lib0clear(&___nl__im__0);
#line 1945
c_rt_lib0clear(&___nl__im__1);
#line 1945
c_rt_lib0clear(&___nl__im__2);
#line 1945
//clear ___nl__int__3;
#line 1945
//clear ___nl__int__4;
#line 1945
//clear ___nl__int__5;
#line 1945
//clear ___nl__bool__6;
#line 1945
c_rt_lib0clear(&___nl__im__7);
#line 1945
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
#line 1949
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(131));
#line 1949
___nl__bool__1 = !___nl__bool__1;
#line 1949
if(___nl__bool__1){ goto label_8;}
#line 1949
___nl__bool__2 = false;
#line 1949
c_rt_lib0clear(&___nl__im__0);
#line 1949
//clear ___nl__bool__1;
#line 1949
return ___nl__bool__2;
#line 1949
goto label_8;
#line 1949
label_8:
;
#line 1949
//clear ___nl__bool__1;
#line 1949
//clear ___nl__bool__2;
#line 1950
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(405));
#line 1950
___nl__bool__3 = !___nl__bool__3;
#line 1950
if(___nl__bool__3){ goto label_19;}
#line 1950
___nl__bool__4 = false;
#line 1950
c_rt_lib0clear(&___nl__im__0);
#line 1950
//clear ___nl__bool__3;
#line 1950
return ___nl__bool__4;
#line 1950
goto label_19;
#line 1950
label_19:
;
#line 1950
//clear ___nl__bool__3;
#line 1950
//clear ___nl__bool__4;
#line 1951
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 1951
___nl__bool__5 = !___nl__bool__5;
#line 1951
if(___nl__bool__5){ goto label_30;}
#line 1951
___nl__bool__6 = false;
#line 1951
c_rt_lib0clear(&___nl__im__0);
#line 1951
//clear ___nl__bool__5;
#line 1951
return ___nl__bool__6;
#line 1951
goto label_30;
#line 1951
label_30:
;
#line 1951
//clear ___nl__bool__5;
#line 1951
//clear ___nl__bool__6;
#line 1952
___nl__bool__7 = true;
#line 1952
c_rt_lib0clear(&___nl__im__0);
#line 1952
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
#line 1956
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 1956
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(220));
#line 1956
if(___nl__bool__2){ goto label_8;}
#line 1958
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(422));
#line 1958
if(___nl__bool__2){ goto label_16;}
#line 1958
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1958
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 1958
nl_die_arg(___nl__im__3);
#line 1956
label_8:
;
#line 1957
c_rt_lib0move(&___nl__im__4,___get_global_string_const(110));
#line 1957
c_rt_lib0clear(&___nl__im__0);
#line 1957
c_rt_lib0clear(&___nl__im__1);
#line 1957
//clear ___nl__bool__2;
#line 1957
c_rt_lib0clear(&___nl__im__3);
#line 1957
return ___nl__im__4;
#line 1958
goto label_25;
#line 1958
label_16:
;
#line 1959
c_rt_lib0move(&___nl__im__5,___get_global_string_const(578));
#line 1959
c_rt_lib0clear(&___nl__im__0);
#line 1959
c_rt_lib0clear(&___nl__im__1);
#line 1959
//clear ___nl__bool__2;
#line 1959
c_rt_lib0clear(&___nl__im__3);
#line 1959
c_rt_lib0clear(&___nl__im__4);
#line 1959
return ___nl__im__5;
#line 1960
goto label_25;
#line 1960
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
#line 1964
c_rt_lib0move(&___nl__im__2,___get_global_string_const(34));
#line 1964
c_rt_lib0move(&___nl__im__1, string0index2(___nl__im__0, ___nl__im__2));
#line 1964
c_rt_lib0clear(&___nl__im__2);
#line 1965
___nl__int__4 = 0;
#line 1965
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 1965
c_rt_lib0move(&___nl__im__3, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__5));
#line 1965
//clear ___nl__int__4;
#line 1965
//clear ___nl__int__5;
#line 1965
c_rt_lib0clear(&___nl__im__0);
#line 1965
c_rt_lib0clear(&___nl__im__1);
#line 1965
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
#line 1974
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 1974
___nl__bool__6 = generator_c_priv0is_anon(___nl__im__0);
#line 1974
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_clean_fun_call_exact(___nl__im__0, ___nl__im__5, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__bool__6));
#line 1974
c_rt_lib0clear(&___nl__im__5);
#line 1974
//clear ___nl__bool__6;
#line 1974
c_rt_lib0clear(&___nl__im__0);
#line 1974
c_rt_lib0clear(&___nl__im__1);
#line 1974
c_rt_lib0clear(&___nl__im__2);
#line 1974
c_rt_lib0clear(&___nl__im__3);
#line 1974
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
#line 1979
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 1980
c_rt_lib0move(&___nl__im__8,___get_global_string_const(36));
#line 1980
___nl__bool__7 = c_rt_lib0eq(___nl__im__1, ___nl__im__8);
#line 1980
c_rt_lib0clear(&___nl__im__8);
#line 1980
if(___nl__bool__7){ goto label_7;}
#line 1980
c_rt_lib0copy(&___nl__im__1, ___nl__im__1);
#line 1980
goto label_9;
#line 1980
label_7:
;
#line 1980
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_type_name(___nl__im__0));
#line 1980
label_9:
;
#line 1980
//clear ___nl__bool__7;
#line 1981
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1981
if(___nl__bool__9){ goto label_44;}
#line 1983
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1983
if(___nl__bool__9){ goto label_59;}
#line 1985
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1985
if(___nl__bool__9){ goto label_74;}
#line 1987
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1987
if(___nl__bool__9){ goto label_89;}
#line 1989
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1989
if(___nl__bool__9){ goto label_104;}
#line 1991
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1991
if(___nl__bool__9){ goto label_111;}
#line 1993
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1993
if(___nl__bool__9){ goto label_120;}
#line 1995
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1995
if(___nl__bool__9){ goto label_129;}
#line 1997
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1997
if(___nl__bool__9){ goto label_138;}
#line 1999
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1999
if(___nl__bool__9){ goto label_147;}
#line 2000
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2000
if(___nl__bool__9){ goto label_149;}
#line 2008
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2008
if(___nl__bool__9){ goto label_192;}
#line 2010
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2010
if(___nl__bool__9){ goto label_199;}
#line 2011
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2011
if(___nl__bool__9){ goto label_201;}
#line 2012
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2012
if(___nl__bool__9){ goto label_203;}
#line 2012
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 2012
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__0));
#line 2012
nl_die_arg(___nl__im__10);
#line 1981
label_44:
;
#line 1981
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1981
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1982
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1982
c_rt_lib0move(&___nl__im__16,___get_global_string_const(457));
#line 1982
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1982
c_rt_lib0clear(&___nl__im__15);
#line 1982
c_rt_lib0clear(&___nl__im__16);
#line 1982
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__3));
#line 1982
c_rt_lib0clear(&___nl__im__14);
#line 1982
c_rt_lib0move(&___nl__im__17,___get_global_string_const(508));
#line 1982
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1982
c_rt_lib0clear(&___nl__im__13);
#line 1982
c_rt_lib0clear(&___nl__im__17);
#line 1983
goto label_205;
#line 1983
label_59:
;
#line 1983
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1983
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1984
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1984
c_rt_lib0move(&___nl__im__23,___get_global_string_const(457));
#line 1984
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1984
c_rt_lib0clear(&___nl__im__22);
#line 1984
c_rt_lib0clear(&___nl__im__23);
#line 1984
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__3));
#line 1984
c_rt_lib0clear(&___nl__im__21);
#line 1984
c_rt_lib0move(&___nl__im__24,___get_global_string_const(508));
#line 1984
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 1984
c_rt_lib0clear(&___nl__im__20);
#line 1984
c_rt_lib0clear(&___nl__im__24);
#line 1985
goto label_205;
#line 1985
label_74:
;
#line 1985
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1985
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1986
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1986
c_rt_lib0move(&___nl__im__30,___get_global_string_const(457));
#line 1986
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 1986
c_rt_lib0clear(&___nl__im__29);
#line 1986
c_rt_lib0clear(&___nl__im__30);
#line 1986
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__3));
#line 1986
c_rt_lib0clear(&___nl__im__28);
#line 1986
c_rt_lib0move(&___nl__im__31,___get_global_string_const(508));
#line 1986
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 1986
c_rt_lib0clear(&___nl__im__27);
#line 1986
c_rt_lib0clear(&___nl__im__31);
#line 1987
goto label_205;
#line 1987
label_89:
;
#line 1987
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1987
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 1988
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1988
c_rt_lib0move(&___nl__im__37,___get_global_string_const(457));
#line 1988
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 1988
c_rt_lib0clear(&___nl__im__36);
#line 1988
c_rt_lib0clear(&___nl__im__37);
#line 1988
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__3));
#line 1988
c_rt_lib0clear(&___nl__im__35);
#line 1988
c_rt_lib0move(&___nl__im__38,___get_global_string_const(508));
#line 1988
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__34, ___nl__im__38));
#line 1988
c_rt_lib0clear(&___nl__im__34);
#line 1988
c_rt_lib0clear(&___nl__im__38);
#line 1989
goto label_205;
#line 1989
label_104:
;
#line 1990
c_rt_lib0move(&___nl__im__39,___get_global_string_const(175));
#line 1990
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1990
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__39, ___nl__im__40));
#line 1990
c_rt_lib0clear(&___nl__im__39);
#line 1990
c_rt_lib0clear(&___nl__im__40);
#line 1991
goto label_205;
#line 1991
label_111:
;
#line 1991
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1991
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 1992
c_rt_lib0move(&___nl__im__43,___get_global_string_const(175));
#line 1992
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1992
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__43, ___nl__im__44));
#line 1992
c_rt_lib0clear(&___nl__im__43);
#line 1992
c_rt_lib0clear(&___nl__im__44);
#line 1993
goto label_205;
#line 1993
label_120:
;
#line 1993
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1993
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 1994
c_rt_lib0move(&___nl__im__47,___get_global_string_const(175));
#line 1994
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1994
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__47, ___nl__im__48));
#line 1994
c_rt_lib0clear(&___nl__im__47);
#line 1994
c_rt_lib0clear(&___nl__im__48);
#line 1995
goto label_205;
#line 1995
label_129:
;
#line 1995
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1995
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 1996
c_rt_lib0move(&___nl__im__51,___get_global_string_const(175));
#line 1996
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1996
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__51, ___nl__im__52));
#line 1996
c_rt_lib0clear(&___nl__im__51);
#line 1996
c_rt_lib0clear(&___nl__im__52);
#line 1997
goto label_205;
#line 1997
label_138:
;
#line 1997
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 1997
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 1998
c_rt_lib0move(&___nl__im__55,___get_global_string_const(175));
#line 1998
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1998
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__55, ___nl__im__56));
#line 1998
c_rt_lib0clear(&___nl__im__55);
#line 1998
c_rt_lib0clear(&___nl__im__56);
#line 1999
goto label_205;
#line 1999
label_147:
;
#line 2000
goto label_205;
#line 2000
label_149:
;
#line 2000
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2000
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 2001
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__57));
#line 2001
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(6));
#line 2001
c_rt_lib0clear(&___nl__im__60);
#line 2001
if(___nl__bool__59){ goto label_157;}
#line 2001
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2001
label_157:
;
#line 2001
if(___nl__bool__59){ goto label_160;}
#line 2001
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2001
label_160:
;
#line 2001
if(___nl__bool__59){ goto label_163;}
#line 2002
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2002
label_163:
;
#line 2002
___nl__bool__59 = !___nl__bool__59;
#line 2002
if(___nl__bool__59){ goto label_178;}
#line 2003
c_rt_lib0move(&___nl__im__63, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 2003
c_rt_lib0move(&___nl__im__64,___get_global_string_const(457));
#line 2003
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__64));
#line 2003
c_rt_lib0clear(&___nl__im__63);
#line 2003
c_rt_lib0clear(&___nl__im__64);
#line 2003
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__3));
#line 2003
c_rt_lib0clear(&___nl__im__62);
#line 2003
c_rt_lib0move(&___nl__im__65,___get_global_string_const(508));
#line 2003
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__61, ___nl__im__65));
#line 2003
c_rt_lib0clear(&___nl__im__61);
#line 2003
c_rt_lib0clear(&___nl__im__65);
#line 2004
goto label_189;
#line 2004
label_178:
;
#line 2005
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__57));
#line 2005
c_rt_lib0move(&___nl__im__67, generator_c_priv0get_type_name(___nl__im__0));
#line 2006
c_rt_lib0move(&___nl__im__68, generator_c_priv0get_type_module_name(___nl__im__57));
#line 2006
___nl__bool__69 = false;
#line 2006
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_clean_fun_call_exact(___nl__im__66, ___nl__im__67, ___nl__im__68, ___nl__im__3, ___nl__im__4, ___nl__bool__69));
#line 2006
c_rt_lib0clear(&___nl__im__66);
#line 2006
c_rt_lib0clear(&___nl__im__67);
#line 2006
c_rt_lib0clear(&___nl__im__68);
#line 2006
//clear ___nl__bool__69;
#line 2007
goto label_189;
#line 2007
label_189:
;
#line 2007
//clear ___nl__bool__59;
#line 2008
goto label_205;
#line 2008
label_192:
;
#line 2009
c_rt_lib0move(&___nl__im__70,___get_global_string_const(175));
#line 2009
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2009
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__70, ___nl__im__71));
#line 2009
c_rt_lib0clear(&___nl__im__70);
#line 2009
c_rt_lib0clear(&___nl__im__71);
#line 2010
goto label_205;
#line 2010
label_199:
;
#line 2011
goto label_205;
#line 2011
label_201:
;
#line 2012
goto label_205;
#line 2012
label_203:
;
#line 2013
goto label_205;
#line 2013
label_205:
;
#line 2014
c_rt_lib0clear(&___nl__im__0);
#line 2014
c_rt_lib0clear(&___nl__im__1);
#line 2014
c_rt_lib0clear(&___nl__im__2);
#line 2014
c_rt_lib0clear(&___nl__im__3);
#line 2014
c_rt_lib0clear(&___nl__im__4);
#line 2014
//clear ___nl__bool__5;
#line 2014
//clear ___nl__bool__9;
#line 2014
c_rt_lib0clear(&___nl__im__10);
#line 2014
c_rt_lib0clear(&___nl__im__11);
#line 2014
c_rt_lib0clear(&___nl__im__12);
#line 2014
c_rt_lib0clear(&___nl__im__18);
#line 2014
c_rt_lib0clear(&___nl__im__19);
#line 2014
c_rt_lib0clear(&___nl__im__25);
#line 2014
c_rt_lib0clear(&___nl__im__26);
#line 2014
c_rt_lib0clear(&___nl__im__32);
#line 2014
c_rt_lib0clear(&___nl__im__33);
#line 2014
c_rt_lib0clear(&___nl__im__41);
#line 2014
c_rt_lib0clear(&___nl__im__42);
#line 2014
c_rt_lib0clear(&___nl__im__45);
#line 2014
c_rt_lib0clear(&___nl__im__46);
#line 2014
c_rt_lib0clear(&___nl__im__49);
#line 2014
c_rt_lib0clear(&___nl__im__50);
#line 2014
c_rt_lib0clear(&___nl__im__53);
#line 2014
c_rt_lib0clear(&___nl__im__54);
#line 2014
c_rt_lib0clear(&___nl__im__57);
#line 2014
c_rt_lib0clear(&___nl__im__58);
#line 2014
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_clean_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 2018
c_rt_lib0move(&___nl__im__4,___get_global_string_const(684));
#line 2018
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 2018
c_rt_lib0clear(&___nl__im__4);
#line 2018
c_rt_lib0clear(&___nl__im__0);
#line 2018
c_rt_lib0clear(&___nl__im__1);
#line 2018
//clear ___nl__bool__2;
#line 2018
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
#line 2022
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2023
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2023
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2023
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2023
c_rt_lib0clear(&___nl__im__6);
#line 2023
c_rt_lib0clear(&___nl__im__7);
#line 2023
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2023
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2023
c_rt_lib0clear(&___nl__im__5);
#line 2023
c_rt_lib0clear(&___nl__im__8);
#line 2023
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2023
c_rt_lib0clear(&___nl__im__4);
#line 2024
c_rt_lib0move(&___nl__im__10,___get_global_string_const(685));
#line 2024
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2024
c_rt_lib0clear(&___nl__im__10);
#line 2024
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2024
c_rt_lib0clear(&___nl__im__9);
#line 2025
c_rt_lib0clear(&___nl__im__0);
#line 2025
c_rt_lib0clear(&___nl__im__1);
#line 2025
//clear ___nl__bool__2;
#line 2025
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
#line 2030
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_rec_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2030
c_rt_lib0move(&___nl__im__8,___get_global_string_const(536));
#line 2030
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 2030
c_rt_lib0clear(&___nl__im__7);
#line 2030
c_rt_lib0clear(&___nl__im__8);
#line 2030
c_rt_lib0move(&___nl__im__9, string0lf());
#line 2030
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 2030
c_rt_lib0clear(&___nl__im__6);
#line 2030
c_rt_lib0clear(&___nl__im__9);
#line 2031
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 2031
label_10:
;
#line 2031
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 2031
if(___nl__bool__11){ goto label_34;}
#line 2031
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 2031
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 2032
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_field_name(___nl__im__10));
#line 2033
c_rt_lib0move(&___nl__im__19,___get_global_string_const(686));
#line 2033
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__14));
#line 2033
c_rt_lib0clear(&___nl__im__19);
#line 2033
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_clean_fun_call(___nl__im__12, ___nl__im__2, ___nl__im__18, ___nl__im__3));
#line 2033
c_rt_lib0clear(&___nl__im__18);
#line 2033
c_rt_lib0move(&___nl__im__20,___get_global_string_const(442));
#line 2033
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 2033
c_rt_lib0clear(&___nl__im__17);
#line 2033
c_rt_lib0clear(&___nl__im__20);
#line 2033
c_rt_lib0move(&___nl__im__21, string0lf());
#line 2033
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__21));
#line 2033
c_rt_lib0clear(&___nl__im__16);
#line 2033
c_rt_lib0clear(&___nl__im__21);
#line 2033
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__15));
#line 2033
c_rt_lib0clear(&___nl__im__15);
#line 2033
c_rt_lib0clear(&___nl__im__14);
#line 2034
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 2034
goto label_10;
#line 2034
label_34:
;
#line 2035
c_rt_lib0move(&___nl__im__22,___get_global_string_const(307));
#line 2035
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__22));
#line 2035
c_rt_lib0clear(&___nl__im__22);
#line 2036
c_rt_lib0clear(&___nl__im__0);
#line 2036
c_rt_lib0clear(&___nl__im__1);
#line 2036
c_rt_lib0clear(&___nl__im__2);
#line 2036
c_rt_lib0clear(&___nl__im__3);
#line 2036
//clear ___nl__bool__4;
#line 2036
c_rt_lib0clear(&___nl__im__10);
#line 2036
//clear ___nl__bool__11;
#line 2036
c_rt_lib0clear(&___nl__im__12);
#line 2036
c_rt_lib0clear(&___nl__im__13);
#line 2036
c_rt_lib0clear(&___nl__im__14);
#line 2036
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
#line 2041
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2042
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2042
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2042
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2042
c_rt_lib0clear(&___nl__im__6);
#line 2042
c_rt_lib0clear(&___nl__im__7);
#line 2042
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2042
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2042
c_rt_lib0clear(&___nl__im__5);
#line 2042
c_rt_lib0clear(&___nl__im__8);
#line 2042
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2042
c_rt_lib0clear(&___nl__im__4);
#line 2043
c_rt_lib0move(&___nl__im__10,___get_global_string_const(687));
#line 2043
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2043
c_rt_lib0clear(&___nl__im__10);
#line 2043
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2043
c_rt_lib0clear(&___nl__im__9);
#line 2044
c_rt_lib0clear(&___nl__im__0);
#line 2044
c_rt_lib0clear(&___nl__im__1);
#line 2044
//clear ___nl__bool__2;
#line 2044
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
#line 2049
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_hash_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2049
c_rt_lib0move(&___nl__im__13,___get_global_string_const(688));
#line 2049
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 2049
c_rt_lib0clear(&___nl__im__12);
#line 2049
c_rt_lib0clear(&___nl__im__13);
#line 2052
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(10)));
#line 2052
c_rt_lib0move(&___nl__im__16,___get_global_string_const(689));
#line 2052
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_clean_fun_call(___nl__im__15, ___nl__im__2, ___nl__im__16, ___nl__im__3));
#line 2052
c_rt_lib0clear(&___nl__im__15);
#line 2052
c_rt_lib0clear(&___nl__im__16);
#line 2052
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 2052
c_rt_lib0clear(&___nl__im__11);
#line 2052
c_rt_lib0clear(&___nl__im__14);
#line 2052
c_rt_lib0move(&___nl__im__17,___get_global_string_const(690));
#line 2052
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 2052
c_rt_lib0clear(&___nl__im__10);
#line 2052
c_rt_lib0clear(&___nl__im__17);
#line 2053
c_rt_lib0move(&___nl__im__19,___get_global_string_const(691));
#line 2053
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_clean_fun_call(___nl__im__1, ___nl__im__2, ___nl__im__19, ___nl__im__3));
#line 2053
c_rt_lib0clear(&___nl__im__19);
#line 2053
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 2053
c_rt_lib0clear(&___nl__im__9);
#line 2053
c_rt_lib0clear(&___nl__im__18);
#line 2053
c_rt_lib0move(&___nl__im__20,___get_global_string_const(692));
#line 2053
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__20));
#line 2053
c_rt_lib0clear(&___nl__im__8);
#line 2053
c_rt_lib0clear(&___nl__im__20);
#line 2056
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_type_name(___nl__im__1));
#line 2056
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__21));
#line 2056
c_rt_lib0clear(&___nl__im__7);
#line 2056
c_rt_lib0clear(&___nl__im__21);
#line 2056
c_rt_lib0move(&___nl__im__22,___get_global_string_const(693));
#line 2056
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__22));
#line 2056
c_rt_lib0clear(&___nl__im__6);
#line 2056
c_rt_lib0clear(&___nl__im__22);
#line 2056
c_rt_lib0clear(&___nl__im__0);
#line 2056
c_rt_lib0clear(&___nl__im__1);
#line 2056
c_rt_lib0clear(&___nl__im__2);
#line 2056
c_rt_lib0clear(&___nl__im__3);
#line 2056
//clear ___nl__bool__4;
#line 2056
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
#line 2062
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2063
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2063
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2063
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2063
c_rt_lib0clear(&___nl__im__6);
#line 2063
c_rt_lib0clear(&___nl__im__7);
#line 2063
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2063
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2063
c_rt_lib0clear(&___nl__im__5);
#line 2063
c_rt_lib0clear(&___nl__im__8);
#line 2063
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2063
c_rt_lib0clear(&___nl__im__4);
#line 2064
c_rt_lib0move(&___nl__im__10,___get_global_string_const(694));
#line 2064
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2064
c_rt_lib0clear(&___nl__im__10);
#line 2064
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2064
c_rt_lib0clear(&___nl__im__9);
#line 2065
c_rt_lib0clear(&___nl__im__0);
#line 2065
c_rt_lib0clear(&___nl__im__1);
#line 2065
//clear ___nl__bool__2;
#line 2065
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
#line 2070
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_array_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2070
c_rt_lib0move(&___nl__im__11,___get_global_string_const(695));
#line 2070
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 2070
c_rt_lib0clear(&___nl__im__10);
#line 2070
c_rt_lib0clear(&___nl__im__11);
#line 2073
c_rt_lib0move(&___nl__im__13,___get_global_string_const(696));
#line 2073
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_clean_fun_call(___nl__im__1, ___nl__im__2, ___nl__im__13, ___nl__im__3));
#line 2073
c_rt_lib0clear(&___nl__im__13);
#line 2073
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 2073
c_rt_lib0clear(&___nl__im__9);
#line 2073
c_rt_lib0clear(&___nl__im__12);
#line 2073
c_rt_lib0move(&___nl__im__14,___get_global_string_const(697));
#line 2073
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__14));
#line 2073
c_rt_lib0clear(&___nl__im__8);
#line 2073
c_rt_lib0clear(&___nl__im__14);
#line 2075
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_type_name(___nl__im__1));
#line 2075
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 2075
c_rt_lib0clear(&___nl__im__7);
#line 2075
c_rt_lib0clear(&___nl__im__15);
#line 2075
c_rt_lib0move(&___nl__im__16,___get_global_string_const(698));
#line 2075
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 2075
c_rt_lib0clear(&___nl__im__6);
#line 2075
c_rt_lib0clear(&___nl__im__16);
#line 2075
c_rt_lib0clear(&___nl__im__0);
#line 2075
c_rt_lib0clear(&___nl__im__1);
#line 2075
c_rt_lib0clear(&___nl__im__2);
#line 2075
c_rt_lib0clear(&___nl__im__3);
#line 2075
//clear ___nl__bool__4;
#line 2075
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
#line 2080
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2081
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2081
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2081
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2081
c_rt_lib0clear(&___nl__im__6);
#line 2081
c_rt_lib0clear(&___nl__im__7);
#line 2081
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2081
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2081
c_rt_lib0clear(&___nl__im__5);
#line 2081
c_rt_lib0clear(&___nl__im__8);
#line 2081
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2081
c_rt_lib0clear(&___nl__im__4);
#line 2082
c_rt_lib0move(&___nl__im__10,___get_global_string_const(699));
#line 2082
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2082
c_rt_lib0clear(&___nl__im__10);
#line 2082
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2082
c_rt_lib0clear(&___nl__im__9);
#line 2083
c_rt_lib0clear(&___nl__im__0);
#line 2083
c_rt_lib0clear(&___nl__im__1);
#line 2083
//clear ___nl__bool__2;
#line 2083
return ___nl__im__3;
#line 2083
c_rt_lib0clear(&___nl__im__0);
#line 2083
c_rt_lib0clear(&___nl__im__1);
#line 2083
//clear ___nl__bool__2;
#line 2083
c_rt_lib0clear(&___nl__im__3);
#line 2083
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
#line 2089
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 2089
c_rt_lib0move(&___nl__im__7,___get_global_string_const(700));
#line 2089
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2089
c_rt_lib0clear(&___nl__im__6);
#line 2089
c_rt_lib0clear(&___nl__im__7);
#line 2090
c_rt_lib0move(&___nl__im__8, string0lf());
#line 2090
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2090
c_rt_lib0clear(&___nl__im__5);
#line 2090
c_rt_lib0clear(&___nl__im__8);
#line 2091
___nl__int__9 = 0;
#line 2092
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 2092
label_11:
;
#line 2092
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 2092
if(___nl__bool__11){ goto label_68;}
#line 2092
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 2092
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 2093
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(28));
#line 2093
if(___nl__bool__14){ goto label_23;}
#line 2094
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(27));
#line 2094
if(___nl__bool__14){ goto label_25;}
#line 2094
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 2094
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 2094
nl_die_arg(___nl__im__15);
#line 2093
label_23:
;
#line 2094
goto label_58;
#line 2094
label_25:
;
#line 2094
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(27)));
#line 2094
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 2095
c_rt_lib0move(&___nl__im__23,___get_global_string_const(529));
#line 2095
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__9));
#line 2095
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__string__24));
#line 2095
c_rt_lib0clear(&___nl__im__23);
#line 2095
c_rt_lib0clear(&___nl__string__24);
#line 2095
c_rt_lib0move(&___nl__im__25,___get_global_string_const(701));
#line 2095
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 2095
c_rt_lib0clear(&___nl__im__22);
#line 2095
c_rt_lib0clear(&___nl__im__25);
#line 2096
c_rt_lib0move(&___nl__im__28,___get_global_string_const(702));
#line 2096
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_case_name(___nl__im__10));
#line 2096
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 2096
c_rt_lib0clear(&___nl__im__28);
#line 2096
c_rt_lib0clear(&___nl__im__29);
#line 2096
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_free_fun_call(___nl__im__16, ___nl__im__2, ___nl__im__27));
#line 2096
c_rt_lib0clear(&___nl__im__27);
#line 2096
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 2096
c_rt_lib0clear(&___nl__im__21);
#line 2096
c_rt_lib0clear(&___nl__im__26);
#line 2096
c_rt_lib0move(&___nl__im__30,___get_global_string_const(703));
#line 2096
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__30));
#line 2096
c_rt_lib0clear(&___nl__im__20);
#line 2096
c_rt_lib0clear(&___nl__im__30);
#line 2097
c_rt_lib0move(&___nl__im__31, string0lf());
#line 2097
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__31));
#line 2097
c_rt_lib0clear(&___nl__im__19);
#line 2097
c_rt_lib0clear(&___nl__im__31);
#line 2097
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__18));
#line 2097
c_rt_lib0clear(&___nl__im__18);
#line 2098
goto label_58;
#line 2098
label_58:
;
#line 2099
___nl__int__32 = 1;
#line 2099
___nl__int__9 = ___nl__int__9 + ___nl__int__32;
#line 2099
//clear ___nl__int__32;
#line 2099
//clear ___nl__bool__14;
#line 2099
c_rt_lib0clear(&___nl__im__15);
#line 2099
c_rt_lib0clear(&___nl__im__16);
#line 2099
c_rt_lib0clear(&___nl__im__17);
#line 2100
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 2100
goto label_11;
#line 2100
label_68:
;
#line 2101
c_rt_lib0move(&___nl__im__33,___get_global_string_const(704));
#line 2101
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__33));
#line 2101
c_rt_lib0clear(&___nl__im__33);
#line 2103
c_rt_lib0clear(&___nl__im__0);
#line 2103
c_rt_lib0clear(&___nl__im__1);
#line 2103
c_rt_lib0clear(&___nl__im__2);
#line 2103
//clear ___nl__bool__3;
#line 2103
//clear ___nl__int__9;
#line 2103
c_rt_lib0clear(&___nl__im__10);
#line 2103
//clear ___nl__bool__11;
#line 2103
c_rt_lib0clear(&___nl__im__12);
#line 2103
c_rt_lib0clear(&___nl__im__13);
#line 2103
//clear ___nl__bool__14;
#line 2103
c_rt_lib0clear(&___nl__im__15);
#line 2103
c_rt_lib0clear(&___nl__im__16);
#line 2103
c_rt_lib0clear(&___nl__im__17);
#line 2103
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
#line 2108
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 2108
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_free_fun_call_exact(___nl__im__0, ___nl__im__4, ___nl__im__1, ___nl__im__2));
#line 2108
c_rt_lib0clear(&___nl__im__4);
#line 2108
c_rt_lib0clear(&___nl__im__0);
#line 2108
c_rt_lib0clear(&___nl__im__1);
#line 2108
c_rt_lib0clear(&___nl__im__2);
#line 2108
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
#line 2113
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 2114
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 2114
___nl__bool__5 = c_rt_lib0eq(___nl__im__1, ___nl__im__6);
#line 2114
c_rt_lib0clear(&___nl__im__6);
#line 2114
if(___nl__bool__5){ goto label_7;}
#line 2114
c_rt_lib0copy(&___nl__im__1, ___nl__im__1);
#line 2114
goto label_9;
#line 2114
label_7:
;
#line 2114
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_type_name(___nl__im__0));
#line 2114
label_9:
;
#line 2114
//clear ___nl__bool__5;
#line 2115
___nl__bool__7 = generator_c_priv0is_anon(___nl__im__0);
#line 2116
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2116
if(___nl__bool__8){ goto label_45;}
#line 2118
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2118
if(___nl__bool__8){ goto label_60;}
#line 2120
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2120
if(___nl__bool__8){ goto label_75;}
#line 2122
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2122
if(___nl__bool__8){ goto label_90;}
#line 2124
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2124
if(___nl__bool__8){ goto label_105;}
#line 2127
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2127
if(___nl__bool__8){ goto label_116;}
#line 2130
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2130
if(___nl__bool__8){ goto label_129;}
#line 2133
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2133
if(___nl__bool__8){ goto label_142;}
#line 2136
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2136
if(___nl__bool__8){ goto label_155;}
#line 2139
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2139
if(___nl__bool__8){ goto label_168;}
#line 2141
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2141
if(___nl__bool__8){ goto label_177;}
#line 2143
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2143
if(___nl__bool__8){ goto label_192;}
#line 2146
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2146
if(___nl__bool__8){ goto label_203;}
#line 2148
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2148
if(___nl__bool__8){ goto label_212;}
#line 2149
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2149
if(___nl__bool__8){ goto label_214;}
#line 2149
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 2149
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__0));
#line 2149
nl_die_arg(___nl__im__9);
#line 2116
label_45:
;
#line 2116
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2116
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 2117
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2117
c_rt_lib0move(&___nl__im__15,___get_global_string_const(457));
#line 2117
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 2117
c_rt_lib0clear(&___nl__im__14);
#line 2117
c_rt_lib0clear(&___nl__im__15);
#line 2117
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__3));
#line 2117
c_rt_lib0clear(&___nl__im__13);
#line 2117
c_rt_lib0move(&___nl__im__16,___get_global_string_const(322));
#line 2117
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 2117
c_rt_lib0clear(&___nl__im__12);
#line 2117
c_rt_lib0clear(&___nl__im__16);
#line 2118
goto label_216;
#line 2118
label_60:
;
#line 2118
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2118
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 2119
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2119
c_rt_lib0move(&___nl__im__22,___get_global_string_const(457));
#line 2119
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 2119
c_rt_lib0clear(&___nl__im__21);
#line 2119
c_rt_lib0clear(&___nl__im__22);
#line 2119
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__3));
#line 2119
c_rt_lib0clear(&___nl__im__20);
#line 2119
c_rt_lib0move(&___nl__im__23,___get_global_string_const(322));
#line 2119
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 2119
c_rt_lib0clear(&___nl__im__19);
#line 2119
c_rt_lib0clear(&___nl__im__23);
#line 2120
goto label_216;
#line 2120
label_75:
;
#line 2120
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2120
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2121
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2121
c_rt_lib0move(&___nl__im__29,___get_global_string_const(457));
#line 2121
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 2121
c_rt_lib0clear(&___nl__im__28);
#line 2121
c_rt_lib0clear(&___nl__im__29);
#line 2121
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__3));
#line 2121
c_rt_lib0clear(&___nl__im__27);
#line 2121
c_rt_lib0move(&___nl__im__30,___get_global_string_const(322));
#line 2121
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 2121
c_rt_lib0clear(&___nl__im__26);
#line 2121
c_rt_lib0clear(&___nl__im__30);
#line 2122
goto label_216;
#line 2122
label_90:
;
#line 2122
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2122
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 2123
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2123
c_rt_lib0move(&___nl__im__36,___get_global_string_const(457));
#line 2123
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 2123
c_rt_lib0clear(&___nl__im__35);
#line 2123
c_rt_lib0clear(&___nl__im__36);
#line 2123
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__3));
#line 2123
c_rt_lib0clear(&___nl__im__34);
#line 2123
c_rt_lib0move(&___nl__im__37,___get_global_string_const(322));
#line 2123
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__33, ___nl__im__37));
#line 2123
c_rt_lib0clear(&___nl__im__33);
#line 2123
c_rt_lib0clear(&___nl__im__37);
#line 2124
goto label_216;
#line 2124
label_105:
;
#line 2125
c_rt_lib0move(&___nl__im__39,___get_global_string_const(253));
#line 2125
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2125
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_fun_lib(___nl__im__39, ___nl__im__40));
#line 2125
c_rt_lib0clear(&___nl__im__39);
#line 2125
c_rt_lib0clear(&___nl__im__40);
#line 2125
c_rt_lib0move(&___nl__im__41,___get_global_string_const(705));
#line 2125
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__41));
#line 2125
c_rt_lib0clear(&___nl__im__38);
#line 2125
c_rt_lib0clear(&___nl__im__41);
#line 2127
goto label_216;
#line 2127
label_116:
;
#line 2127
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2127
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 2128
c_rt_lib0move(&___nl__im__45,___get_global_string_const(253));
#line 2128
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2128
c_rt_lib0move(&___nl__im__44, generator_c_priv0get_fun_lib(___nl__im__45, ___nl__im__46));
#line 2128
c_rt_lib0clear(&___nl__im__45);
#line 2128
c_rt_lib0clear(&___nl__im__46);
#line 2128
c_rt_lib0move(&___nl__im__47,___get_global_string_const(705));
#line 2128
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__44, ___nl__im__47));
#line 2128
c_rt_lib0clear(&___nl__im__44);
#line 2128
c_rt_lib0clear(&___nl__im__47);
#line 2130
goto label_216;
#line 2130
label_129:
;
#line 2130
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2130
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 2131
c_rt_lib0move(&___nl__im__51,___get_global_string_const(253));
#line 2131
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2131
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_fun_lib(___nl__im__51, ___nl__im__52));
#line 2131
c_rt_lib0clear(&___nl__im__51);
#line 2131
c_rt_lib0clear(&___nl__im__52);
#line 2131
c_rt_lib0move(&___nl__im__53,___get_global_string_const(705));
#line 2131
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 2131
c_rt_lib0clear(&___nl__im__50);
#line 2131
c_rt_lib0clear(&___nl__im__53);
#line 2133
goto label_216;
#line 2133
label_142:
;
#line 2133
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2133
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 2134
c_rt_lib0move(&___nl__im__57,___get_global_string_const(253));
#line 2134
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2134
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_fun_lib(___nl__im__57, ___nl__im__58));
#line 2134
c_rt_lib0clear(&___nl__im__57);
#line 2134
c_rt_lib0clear(&___nl__im__58);
#line 2134
c_rt_lib0move(&___nl__im__59,___get_global_string_const(705));
#line 2134
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__56, ___nl__im__59));
#line 2134
c_rt_lib0clear(&___nl__im__56);
#line 2134
c_rt_lib0clear(&___nl__im__59);
#line 2136
goto label_216;
#line 2136
label_155:
;
#line 2136
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 2136
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 2137
c_rt_lib0move(&___nl__im__63,___get_global_string_const(253));
#line 2137
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2137
c_rt_lib0move(&___nl__im__62, generator_c_priv0get_fun_lib(___nl__im__63, ___nl__im__64));
#line 2137
c_rt_lib0clear(&___nl__im__63);
#line 2137
c_rt_lib0clear(&___nl__im__64);
#line 2137
c_rt_lib0move(&___nl__im__65,___get_global_string_const(705));
#line 2137
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__62, ___nl__im__65));
#line 2137
c_rt_lib0clear(&___nl__im__62);
#line 2137
c_rt_lib0clear(&___nl__im__65);
#line 2139
goto label_216;
#line 2139
label_168:
;
#line 2140
c_rt_lib0move(&___nl__im__67,___get_global_string_const(706));
#line 2140
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__3));
#line 2140
c_rt_lib0clear(&___nl__im__67);
#line 2140
c_rt_lib0move(&___nl__im__68,___get_global_string_const(707));
#line 2140
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__66, ___nl__im__68));
#line 2140
c_rt_lib0clear(&___nl__im__66);
#line 2140
c_rt_lib0clear(&___nl__im__68);
#line 2141
goto label_216;
#line 2141
label_177:
;
#line 2141
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2141
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 2142
c_rt_lib0move(&___nl__im__73, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2142
c_rt_lib0move(&___nl__im__74,___get_global_string_const(457));
#line 2142
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__74));
#line 2142
c_rt_lib0clear(&___nl__im__73);
#line 2142
c_rt_lib0clear(&___nl__im__74);
#line 2142
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__3));
#line 2142
c_rt_lib0clear(&___nl__im__72);
#line 2142
c_rt_lib0move(&___nl__im__75,___get_global_string_const(322));
#line 2142
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__71, ___nl__im__75));
#line 2142
c_rt_lib0clear(&___nl__im__71);
#line 2142
c_rt_lib0clear(&___nl__im__75);
#line 2143
goto label_216;
#line 2143
label_192:
;
#line 2144
c_rt_lib0move(&___nl__im__77,___get_global_string_const(253));
#line 2144
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2144
c_rt_lib0move(&___nl__im__76, generator_c_priv0get_fun_lib(___nl__im__77, ___nl__im__78));
#line 2144
c_rt_lib0clear(&___nl__im__77);
#line 2144
c_rt_lib0clear(&___nl__im__78);
#line 2144
c_rt_lib0move(&___nl__im__79,___get_global_string_const(705));
#line 2144
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__76, ___nl__im__79));
#line 2144
c_rt_lib0clear(&___nl__im__76);
#line 2144
c_rt_lib0clear(&___nl__im__79);
#line 2146
goto label_216;
#line 2146
label_203:
;
#line 2147
c_rt_lib0move(&___nl__im__81,___get_global_string_const(706));
#line 2147
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__im__3));
#line 2147
c_rt_lib0clear(&___nl__im__81);
#line 2147
c_rt_lib0move(&___nl__im__82,___get_global_string_const(708));
#line 2147
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__80, ___nl__im__82));
#line 2147
c_rt_lib0clear(&___nl__im__80);
#line 2147
c_rt_lib0clear(&___nl__im__82);
#line 2148
goto label_216;
#line 2148
label_212:
;
#line 2149
goto label_216;
#line 2149
label_214:
;
#line 2150
goto label_216;
#line 2150
label_216:
;
#line 2151
c_rt_lib0clear(&___nl__im__0);
#line 2151
c_rt_lib0clear(&___nl__im__1);
#line 2151
c_rt_lib0clear(&___nl__im__2);
#line 2151
c_rt_lib0clear(&___nl__im__3);
#line 2151
//clear ___nl__bool__7;
#line 2151
//clear ___nl__bool__8;
#line 2151
c_rt_lib0clear(&___nl__im__9);
#line 2151
c_rt_lib0clear(&___nl__im__10);
#line 2151
c_rt_lib0clear(&___nl__im__11);
#line 2151
c_rt_lib0clear(&___nl__im__17);
#line 2151
c_rt_lib0clear(&___nl__im__18);
#line 2151
c_rt_lib0clear(&___nl__im__24);
#line 2151
c_rt_lib0clear(&___nl__im__25);
#line 2151
c_rt_lib0clear(&___nl__im__31);
#line 2151
c_rt_lib0clear(&___nl__im__32);
#line 2151
c_rt_lib0clear(&___nl__im__42);
#line 2151
c_rt_lib0clear(&___nl__im__43);
#line 2151
c_rt_lib0clear(&___nl__im__48);
#line 2151
c_rt_lib0clear(&___nl__im__49);
#line 2151
c_rt_lib0clear(&___nl__im__54);
#line 2151
c_rt_lib0clear(&___nl__im__55);
#line 2151
c_rt_lib0clear(&___nl__im__60);
#line 2151
c_rt_lib0clear(&___nl__im__61);
#line 2151
c_rt_lib0clear(&___nl__im__69);
#line 2151
c_rt_lib0clear(&___nl__im__70);
#line 2151
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_free_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 2157
c_rt_lib0move(&___nl__im__4,___get_global_string_const(709));
#line 2157
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 2157
c_rt_lib0clear(&___nl__im__4);
#line 2157
c_rt_lib0clear(&___nl__im__0);
#line 2157
c_rt_lib0clear(&___nl__im__1);
#line 2157
//clear ___nl__bool__2;
#line 2157
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
#line 2161
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2162
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2162
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2162
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2162
c_rt_lib0clear(&___nl__im__6);
#line 2162
c_rt_lib0clear(&___nl__im__7);
#line 2162
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2162
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2162
c_rt_lib0clear(&___nl__im__5);
#line 2162
c_rt_lib0clear(&___nl__im__8);
#line 2162
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2162
c_rt_lib0clear(&___nl__im__4);
#line 2163
c_rt_lib0move(&___nl__im__10,___get_global_string_const(710));
#line 2163
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2163
c_rt_lib0clear(&___nl__im__10);
#line 2163
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2163
c_rt_lib0clear(&___nl__im__9);
#line 2164
c_rt_lib0clear(&___nl__im__0);
#line 2164
c_rt_lib0clear(&___nl__im__1);
#line 2164
//clear ___nl__bool__2;
#line 2164
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
#line 2168
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_rec_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2168
c_rt_lib0move(&___nl__im__7,___get_global_string_const(627));
#line 2168
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2168
c_rt_lib0clear(&___nl__im__6);
#line 2168
c_rt_lib0clear(&___nl__im__7);
#line 2169
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2169
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2169
c_rt_lib0clear(&___nl__im__5);
#line 2169
c_rt_lib0clear(&___nl__im__8);
#line 2169
c_rt_lib0move(&___nl__im__9,___get_global_string_const(711));
#line 2169
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2169
c_rt_lib0clear(&___nl__im__4);
#line 2169
c_rt_lib0clear(&___nl__im__9);
#line 2169
c_rt_lib0clear(&___nl__im__0);
#line 2169
c_rt_lib0clear(&___nl__im__1);
#line 2169
//clear ___nl__bool__2;
#line 2169
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
#line 2175
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2176
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2176
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2176
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2176
c_rt_lib0clear(&___nl__im__6);
#line 2176
c_rt_lib0clear(&___nl__im__7);
#line 2176
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2176
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2176
c_rt_lib0clear(&___nl__im__5);
#line 2176
c_rt_lib0clear(&___nl__im__8);
#line 2176
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2176
c_rt_lib0clear(&___nl__im__4);
#line 2177
c_rt_lib0move(&___nl__im__10,___get_global_string_const(712));
#line 2177
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2177
c_rt_lib0clear(&___nl__im__10);
#line 2177
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2177
c_rt_lib0clear(&___nl__im__9);
#line 2178
c_rt_lib0clear(&___nl__im__0);
#line 2178
c_rt_lib0clear(&___nl__im__1);
#line 2178
//clear ___nl__bool__2;
#line 2178
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
#line 2182
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_hash_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2182
c_rt_lib0move(&___nl__im__7,___get_global_string_const(627));
#line 2182
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2182
c_rt_lib0clear(&___nl__im__6);
#line 2182
c_rt_lib0clear(&___nl__im__7);
#line 2183
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2183
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2183
c_rt_lib0clear(&___nl__im__5);
#line 2183
c_rt_lib0clear(&___nl__im__8);
#line 2183
c_rt_lib0move(&___nl__im__9,___get_global_string_const(713));
#line 2183
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2183
c_rt_lib0clear(&___nl__im__4);
#line 2183
c_rt_lib0clear(&___nl__im__9);
#line 2183
c_rt_lib0clear(&___nl__im__0);
#line 2183
c_rt_lib0clear(&___nl__im__1);
#line 2183
//clear ___nl__bool__2;
#line 2183
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
#line 2190
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2191
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2191
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2191
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2191
c_rt_lib0clear(&___nl__im__6);
#line 2191
c_rt_lib0clear(&___nl__im__7);
#line 2191
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2191
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2191
c_rt_lib0clear(&___nl__im__5);
#line 2191
c_rt_lib0clear(&___nl__im__8);
#line 2191
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2191
c_rt_lib0clear(&___nl__im__4);
#line 2192
c_rt_lib0move(&___nl__im__10,___get_global_string_const(659));
#line 2192
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2192
c_rt_lib0clear(&___nl__im__10);
#line 2192
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2192
c_rt_lib0clear(&___nl__im__9);
#line 2193
c_rt_lib0clear(&___nl__im__0);
#line 2193
c_rt_lib0clear(&___nl__im__1);
#line 2193
//clear ___nl__bool__2;
#line 2193
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
#line 2197
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_array_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2197
c_rt_lib0move(&___nl__im__7,___get_global_string_const(627));
#line 2197
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2197
c_rt_lib0clear(&___nl__im__6);
#line 2197
c_rt_lib0clear(&___nl__im__7);
#line 2198
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2198
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2198
c_rt_lib0clear(&___nl__im__5);
#line 2198
c_rt_lib0clear(&___nl__im__8);
#line 2198
c_rt_lib0move(&___nl__im__9,___get_global_string_const(714));
#line 2198
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2198
c_rt_lib0clear(&___nl__im__4);
#line 2198
c_rt_lib0clear(&___nl__im__9);
#line 2198
c_rt_lib0clear(&___nl__im__0);
#line 2198
c_rt_lib0clear(&___nl__im__1);
#line 2198
//clear ___nl__bool__2;
#line 2198
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
#line 2205
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 2206
c_rt_lib0move(&___nl__im__6,___get_global_string_const(484));
#line 2206
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2206
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2206
c_rt_lib0clear(&___nl__im__6);
#line 2206
c_rt_lib0clear(&___nl__im__7);
#line 2206
c_rt_lib0move(&___nl__im__8,___get_global_string_const(457));
#line 2206
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2206
c_rt_lib0clear(&___nl__im__5);
#line 2206
c_rt_lib0clear(&___nl__im__8);
#line 2206
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2206
c_rt_lib0clear(&___nl__im__4);
#line 2207
c_rt_lib0move(&___nl__im__10,___get_global_string_const(715));
#line 2207
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2207
c_rt_lib0clear(&___nl__im__10);
#line 2207
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2207
c_rt_lib0clear(&___nl__im__9);
#line 2208
c_rt_lib0clear(&___nl__im__0);
#line 2208
c_rt_lib0clear(&___nl__im__1);
#line 2208
//clear ___nl__bool__2;
#line 2208
return ___nl__im__3;
#line 2208
c_rt_lib0clear(&___nl__im__0);
#line 2208
c_rt_lib0clear(&___nl__im__1);
#line 2208
//clear ___nl__bool__2;
#line 2208
c_rt_lib0clear(&___nl__im__3);
#line 2208
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
#line 2212
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2212
c_rt_lib0move(&___nl__im__7,___get_global_string_const(716));
#line 2212
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2212
c_rt_lib0clear(&___nl__im__6);
#line 2212
c_rt_lib0clear(&___nl__im__7);
#line 2213
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2213
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2213
c_rt_lib0clear(&___nl__im__5);
#line 2213
c_rt_lib0clear(&___nl__im__8);
#line 2213
c_rt_lib0move(&___nl__im__9,___get_global_string_const(717));
#line 2213
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2213
c_rt_lib0clear(&___nl__im__4);
#line 2213
c_rt_lib0clear(&___nl__im__9);
#line 2213
c_rt_lib0clear(&___nl__im__0);
#line 2213
c_rt_lib0clear(&___nl__im__1);
#line 2213
//clear ___nl__bool__2;
#line 2213
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
#line 2219
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2219
if(___nl__bool__1){ goto label_33;}
#line 2221
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2221
if(___nl__bool__1){ goto label_44;}
#line 2223
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2223
if(___nl__bool__1){ goto label_58;}
#line 2225
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2225
if(___nl__bool__1){ goto label_75;}
#line 2227
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2227
if(___nl__bool__1){ goto label_95;}
#line 2229
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2229
if(___nl__bool__1){ goto label_118;}
#line 2231
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2231
if(___nl__bool__1){ goto label_144;}
#line 2233
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2233
if(___nl__bool__1){ goto label_173;}
#line 2235
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2235
if(___nl__bool__1){ goto label_205;}
#line 2237
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2237
if(___nl__bool__1){ goto label_240;}
#line 2239
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2239
if(___nl__bool__1){ goto label_274;}
#line 2241
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2241
if(___nl__bool__1){ goto label_309;}
#line 2243
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2243
if(___nl__bool__1){ goto label_345;}
#line 2245
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2245
if(___nl__bool__1){ goto label_382;}
#line 2247
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2247
if(___nl__bool__1){ goto label_420;}
#line 2247
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 2247
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 2247
nl_die_arg(___nl__im__2);
#line 2219
label_33:
;
#line 2219
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2219
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 2220
___nl__bool__5 = false;
#line 2220
c_rt_lib0clear(&___nl__im__0);
#line 2220
//clear ___nl__bool__1;
#line 2220
c_rt_lib0clear(&___nl__im__2);
#line 2220
c_rt_lib0clear(&___nl__im__3);
#line 2220
c_rt_lib0clear(&___nl__im__4);
#line 2220
return ___nl__bool__5;
#line 2221
goto label_459;
#line 2221
label_44:
;
#line 2221
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2221
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 2222
___nl__bool__8 = true;
#line 2222
c_rt_lib0clear(&___nl__im__0);
#line 2222
//clear ___nl__bool__1;
#line 2222
c_rt_lib0clear(&___nl__im__2);
#line 2222
c_rt_lib0clear(&___nl__im__3);
#line 2222
c_rt_lib0clear(&___nl__im__4);
#line 2222
//clear ___nl__bool__5;
#line 2222
c_rt_lib0clear(&___nl__im__6);
#line 2222
c_rt_lib0clear(&___nl__im__7);
#line 2222
return ___nl__bool__8;
#line 2223
goto label_459;
#line 2223
label_58:
;
#line 2223
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2223
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 2224
___nl__bool__11 = false;
#line 2224
c_rt_lib0clear(&___nl__im__0);
#line 2224
//clear ___nl__bool__1;
#line 2224
c_rt_lib0clear(&___nl__im__2);
#line 2224
c_rt_lib0clear(&___nl__im__3);
#line 2224
c_rt_lib0clear(&___nl__im__4);
#line 2224
//clear ___nl__bool__5;
#line 2224
c_rt_lib0clear(&___nl__im__6);
#line 2224
c_rt_lib0clear(&___nl__im__7);
#line 2224
//clear ___nl__bool__8;
#line 2224
c_rt_lib0clear(&___nl__im__9);
#line 2224
c_rt_lib0clear(&___nl__im__10);
#line 2224
return ___nl__bool__11;
#line 2225
goto label_459;
#line 2225
label_75:
;
#line 2225
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2225
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 2226
___nl__bool__14 = true;
#line 2226
c_rt_lib0clear(&___nl__im__0);
#line 2226
//clear ___nl__bool__1;
#line 2226
c_rt_lib0clear(&___nl__im__2);
#line 2226
c_rt_lib0clear(&___nl__im__3);
#line 2226
c_rt_lib0clear(&___nl__im__4);
#line 2226
//clear ___nl__bool__5;
#line 2226
c_rt_lib0clear(&___nl__im__6);
#line 2226
c_rt_lib0clear(&___nl__im__7);
#line 2226
//clear ___nl__bool__8;
#line 2226
c_rt_lib0clear(&___nl__im__9);
#line 2226
c_rt_lib0clear(&___nl__im__10);
#line 2226
//clear ___nl__bool__11;
#line 2226
c_rt_lib0clear(&___nl__im__12);
#line 2226
c_rt_lib0clear(&___nl__im__13);
#line 2226
return ___nl__bool__14;
#line 2227
goto label_459;
#line 2227
label_95:
;
#line 2227
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2227
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 2228
___nl__bool__17 = false;
#line 2228
c_rt_lib0clear(&___nl__im__0);
#line 2228
//clear ___nl__bool__1;
#line 2228
c_rt_lib0clear(&___nl__im__2);
#line 2228
c_rt_lib0clear(&___nl__im__3);
#line 2228
c_rt_lib0clear(&___nl__im__4);
#line 2228
//clear ___nl__bool__5;
#line 2228
c_rt_lib0clear(&___nl__im__6);
#line 2228
c_rt_lib0clear(&___nl__im__7);
#line 2228
//clear ___nl__bool__8;
#line 2228
c_rt_lib0clear(&___nl__im__9);
#line 2228
c_rt_lib0clear(&___nl__im__10);
#line 2228
//clear ___nl__bool__11;
#line 2228
c_rt_lib0clear(&___nl__im__12);
#line 2228
c_rt_lib0clear(&___nl__im__13);
#line 2228
//clear ___nl__bool__14;
#line 2228
c_rt_lib0clear(&___nl__im__15);
#line 2228
c_rt_lib0clear(&___nl__im__16);
#line 2228
return ___nl__bool__17;
#line 2229
goto label_459;
#line 2229
label_118:
;
#line 2229
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2229
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 2230
___nl__bool__20 = true;
#line 2230
c_rt_lib0clear(&___nl__im__0);
#line 2230
//clear ___nl__bool__1;
#line 2230
c_rt_lib0clear(&___nl__im__2);
#line 2230
c_rt_lib0clear(&___nl__im__3);
#line 2230
c_rt_lib0clear(&___nl__im__4);
#line 2230
//clear ___nl__bool__5;
#line 2230
c_rt_lib0clear(&___nl__im__6);
#line 2230
c_rt_lib0clear(&___nl__im__7);
#line 2230
//clear ___nl__bool__8;
#line 2230
c_rt_lib0clear(&___nl__im__9);
#line 2230
c_rt_lib0clear(&___nl__im__10);
#line 2230
//clear ___nl__bool__11;
#line 2230
c_rt_lib0clear(&___nl__im__12);
#line 2230
c_rt_lib0clear(&___nl__im__13);
#line 2230
//clear ___nl__bool__14;
#line 2230
c_rt_lib0clear(&___nl__im__15);
#line 2230
c_rt_lib0clear(&___nl__im__16);
#line 2230
//clear ___nl__bool__17;
#line 2230
c_rt_lib0clear(&___nl__im__18);
#line 2230
c_rt_lib0clear(&___nl__im__19);
#line 2230
return ___nl__bool__20;
#line 2231
goto label_459;
#line 2231
label_144:
;
#line 2231
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 2231
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 2232
___nl__bool__23 = false;
#line 2232
c_rt_lib0clear(&___nl__im__0);
#line 2232
//clear ___nl__bool__1;
#line 2232
c_rt_lib0clear(&___nl__im__2);
#line 2232
c_rt_lib0clear(&___nl__im__3);
#line 2232
c_rt_lib0clear(&___nl__im__4);
#line 2232
//clear ___nl__bool__5;
#line 2232
c_rt_lib0clear(&___nl__im__6);
#line 2232
c_rt_lib0clear(&___nl__im__7);
#line 2232
//clear ___nl__bool__8;
#line 2232
c_rt_lib0clear(&___nl__im__9);
#line 2232
c_rt_lib0clear(&___nl__im__10);
#line 2232
//clear ___nl__bool__11;
#line 2232
c_rt_lib0clear(&___nl__im__12);
#line 2232
c_rt_lib0clear(&___nl__im__13);
#line 2232
//clear ___nl__bool__14;
#line 2232
c_rt_lib0clear(&___nl__im__15);
#line 2232
c_rt_lib0clear(&___nl__im__16);
#line 2232
//clear ___nl__bool__17;
#line 2232
c_rt_lib0clear(&___nl__im__18);
#line 2232
c_rt_lib0clear(&___nl__im__19);
#line 2232
//clear ___nl__bool__20;
#line 2232
c_rt_lib0clear(&___nl__im__21);
#line 2232
c_rt_lib0clear(&___nl__im__22);
#line 2232
return ___nl__bool__23;
#line 2233
goto label_459;
#line 2233
label_173:
;
#line 2233
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2233
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2234
___nl__bool__26 = true;
#line 2234
c_rt_lib0clear(&___nl__im__0);
#line 2234
//clear ___nl__bool__1;
#line 2234
c_rt_lib0clear(&___nl__im__2);
#line 2234
c_rt_lib0clear(&___nl__im__3);
#line 2234
c_rt_lib0clear(&___nl__im__4);
#line 2234
//clear ___nl__bool__5;
#line 2234
c_rt_lib0clear(&___nl__im__6);
#line 2234
c_rt_lib0clear(&___nl__im__7);
#line 2234
//clear ___nl__bool__8;
#line 2234
c_rt_lib0clear(&___nl__im__9);
#line 2234
c_rt_lib0clear(&___nl__im__10);
#line 2234
//clear ___nl__bool__11;
#line 2234
c_rt_lib0clear(&___nl__im__12);
#line 2234
c_rt_lib0clear(&___nl__im__13);
#line 2234
//clear ___nl__bool__14;
#line 2234
c_rt_lib0clear(&___nl__im__15);
#line 2234
c_rt_lib0clear(&___nl__im__16);
#line 2234
//clear ___nl__bool__17;
#line 2234
c_rt_lib0clear(&___nl__im__18);
#line 2234
c_rt_lib0clear(&___nl__im__19);
#line 2234
//clear ___nl__bool__20;
#line 2234
c_rt_lib0clear(&___nl__im__21);
#line 2234
c_rt_lib0clear(&___nl__im__22);
#line 2234
//clear ___nl__bool__23;
#line 2234
c_rt_lib0clear(&___nl__im__24);
#line 2234
c_rt_lib0clear(&___nl__im__25);
#line 2234
return ___nl__bool__26;
#line 2235
goto label_459;
#line 2235
label_205:
;
#line 2235
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2235
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 2236
___nl__bool__29 = false;
#line 2236
c_rt_lib0clear(&___nl__im__0);
#line 2236
//clear ___nl__bool__1;
#line 2236
c_rt_lib0clear(&___nl__im__2);
#line 2236
c_rt_lib0clear(&___nl__im__3);
#line 2236
c_rt_lib0clear(&___nl__im__4);
#line 2236
//clear ___nl__bool__5;
#line 2236
c_rt_lib0clear(&___nl__im__6);
#line 2236
c_rt_lib0clear(&___nl__im__7);
#line 2236
//clear ___nl__bool__8;
#line 2236
c_rt_lib0clear(&___nl__im__9);
#line 2236
c_rt_lib0clear(&___nl__im__10);
#line 2236
//clear ___nl__bool__11;
#line 2236
c_rt_lib0clear(&___nl__im__12);
#line 2236
c_rt_lib0clear(&___nl__im__13);
#line 2236
//clear ___nl__bool__14;
#line 2236
c_rt_lib0clear(&___nl__im__15);
#line 2236
c_rt_lib0clear(&___nl__im__16);
#line 2236
//clear ___nl__bool__17;
#line 2236
c_rt_lib0clear(&___nl__im__18);
#line 2236
c_rt_lib0clear(&___nl__im__19);
#line 2236
//clear ___nl__bool__20;
#line 2236
c_rt_lib0clear(&___nl__im__21);
#line 2236
c_rt_lib0clear(&___nl__im__22);
#line 2236
//clear ___nl__bool__23;
#line 2236
c_rt_lib0clear(&___nl__im__24);
#line 2236
c_rt_lib0clear(&___nl__im__25);
#line 2236
//clear ___nl__bool__26;
#line 2236
c_rt_lib0clear(&___nl__im__27);
#line 2236
c_rt_lib0clear(&___nl__im__28);
#line 2236
return ___nl__bool__29;
#line 2237
goto label_459;
#line 2237
label_240:
;
#line 2238
___nl__bool__30 = false;
#line 2238
c_rt_lib0clear(&___nl__im__0);
#line 2238
//clear ___nl__bool__1;
#line 2238
c_rt_lib0clear(&___nl__im__2);
#line 2238
c_rt_lib0clear(&___nl__im__3);
#line 2238
c_rt_lib0clear(&___nl__im__4);
#line 2238
//clear ___nl__bool__5;
#line 2238
c_rt_lib0clear(&___nl__im__6);
#line 2238
c_rt_lib0clear(&___nl__im__7);
#line 2238
//clear ___nl__bool__8;
#line 2238
c_rt_lib0clear(&___nl__im__9);
#line 2238
c_rt_lib0clear(&___nl__im__10);
#line 2238
//clear ___nl__bool__11;
#line 2238
c_rt_lib0clear(&___nl__im__12);
#line 2238
c_rt_lib0clear(&___nl__im__13);
#line 2238
//clear ___nl__bool__14;
#line 2238
c_rt_lib0clear(&___nl__im__15);
#line 2238
c_rt_lib0clear(&___nl__im__16);
#line 2238
//clear ___nl__bool__17;
#line 2238
c_rt_lib0clear(&___nl__im__18);
#line 2238
c_rt_lib0clear(&___nl__im__19);
#line 2238
//clear ___nl__bool__20;
#line 2238
c_rt_lib0clear(&___nl__im__21);
#line 2238
c_rt_lib0clear(&___nl__im__22);
#line 2238
//clear ___nl__bool__23;
#line 2238
c_rt_lib0clear(&___nl__im__24);
#line 2238
c_rt_lib0clear(&___nl__im__25);
#line 2238
//clear ___nl__bool__26;
#line 2238
c_rt_lib0clear(&___nl__im__27);
#line 2238
c_rt_lib0clear(&___nl__im__28);
#line 2238
//clear ___nl__bool__29;
#line 2238
return ___nl__bool__30;
#line 2239
goto label_459;
#line 2239
label_274:
;
#line 2240
___nl__bool__31 = false;
#line 2240
c_rt_lib0clear(&___nl__im__0);
#line 2240
//clear ___nl__bool__1;
#line 2240
c_rt_lib0clear(&___nl__im__2);
#line 2240
c_rt_lib0clear(&___nl__im__3);
#line 2240
c_rt_lib0clear(&___nl__im__4);
#line 2240
//clear ___nl__bool__5;
#line 2240
c_rt_lib0clear(&___nl__im__6);
#line 2240
c_rt_lib0clear(&___nl__im__7);
#line 2240
//clear ___nl__bool__8;
#line 2240
c_rt_lib0clear(&___nl__im__9);
#line 2240
c_rt_lib0clear(&___nl__im__10);
#line 2240
//clear ___nl__bool__11;
#line 2240
c_rt_lib0clear(&___nl__im__12);
#line 2240
c_rt_lib0clear(&___nl__im__13);
#line 2240
//clear ___nl__bool__14;
#line 2240
c_rt_lib0clear(&___nl__im__15);
#line 2240
c_rt_lib0clear(&___nl__im__16);
#line 2240
//clear ___nl__bool__17;
#line 2240
c_rt_lib0clear(&___nl__im__18);
#line 2240
c_rt_lib0clear(&___nl__im__19);
#line 2240
//clear ___nl__bool__20;
#line 2240
c_rt_lib0clear(&___nl__im__21);
#line 2240
c_rt_lib0clear(&___nl__im__22);
#line 2240
//clear ___nl__bool__23;
#line 2240
c_rt_lib0clear(&___nl__im__24);
#line 2240
c_rt_lib0clear(&___nl__im__25);
#line 2240
//clear ___nl__bool__26;
#line 2240
c_rt_lib0clear(&___nl__im__27);
#line 2240
c_rt_lib0clear(&___nl__im__28);
#line 2240
//clear ___nl__bool__29;
#line 2240
//clear ___nl__bool__30;
#line 2240
return ___nl__bool__31;
#line 2241
goto label_459;
#line 2241
label_309:
;
#line 2242
___nl__bool__32 = false;
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
//clear ___nl__bool__5;
#line 2242
c_rt_lib0clear(&___nl__im__6);
#line 2242
c_rt_lib0clear(&___nl__im__7);
#line 2242
//clear ___nl__bool__8;
#line 2242
c_rt_lib0clear(&___nl__im__9);
#line 2242
c_rt_lib0clear(&___nl__im__10);
#line 2242
//clear ___nl__bool__11;
#line 2242
c_rt_lib0clear(&___nl__im__12);
#line 2242
c_rt_lib0clear(&___nl__im__13);
#line 2242
//clear ___nl__bool__14;
#line 2242
c_rt_lib0clear(&___nl__im__15);
#line 2242
c_rt_lib0clear(&___nl__im__16);
#line 2242
//clear ___nl__bool__17;
#line 2242
c_rt_lib0clear(&___nl__im__18);
#line 2242
c_rt_lib0clear(&___nl__im__19);
#line 2242
//clear ___nl__bool__20;
#line 2242
c_rt_lib0clear(&___nl__im__21);
#line 2242
c_rt_lib0clear(&___nl__im__22);
#line 2242
//clear ___nl__bool__23;
#line 2242
c_rt_lib0clear(&___nl__im__24);
#line 2242
c_rt_lib0clear(&___nl__im__25);
#line 2242
//clear ___nl__bool__26;
#line 2242
c_rt_lib0clear(&___nl__im__27);
#line 2242
c_rt_lib0clear(&___nl__im__28);
#line 2242
//clear ___nl__bool__29;
#line 2242
//clear ___nl__bool__30;
#line 2242
//clear ___nl__bool__31;
#line 2242
return ___nl__bool__32;
#line 2243
goto label_459;
#line 2243
label_345:
;
#line 2244
___nl__bool__33 = false;
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
//clear ___nl__bool__8;
#line 2244
c_rt_lib0clear(&___nl__im__9);
#line 2244
c_rt_lib0clear(&___nl__im__10);
#line 2244
//clear ___nl__bool__11;
#line 2244
c_rt_lib0clear(&___nl__im__12);
#line 2244
c_rt_lib0clear(&___nl__im__13);
#line 2244
//clear ___nl__bool__14;
#line 2244
c_rt_lib0clear(&___nl__im__15);
#line 2244
c_rt_lib0clear(&___nl__im__16);
#line 2244
//clear ___nl__bool__17;
#line 2244
c_rt_lib0clear(&___nl__im__18);
#line 2244
c_rt_lib0clear(&___nl__im__19);
#line 2244
//clear ___nl__bool__20;
#line 2244
c_rt_lib0clear(&___nl__im__21);
#line 2244
c_rt_lib0clear(&___nl__im__22);
#line 2244
//clear ___nl__bool__23;
#line 2244
c_rt_lib0clear(&___nl__im__24);
#line 2244
c_rt_lib0clear(&___nl__im__25);
#line 2244
//clear ___nl__bool__26;
#line 2244
c_rt_lib0clear(&___nl__im__27);
#line 2244
c_rt_lib0clear(&___nl__im__28);
#line 2244
//clear ___nl__bool__29;
#line 2244
//clear ___nl__bool__30;
#line 2244
//clear ___nl__bool__31;
#line 2244
//clear ___nl__bool__32;
#line 2244
return ___nl__bool__33;
#line 2245
goto label_459;
#line 2245
label_382:
;
#line 2246
___nl__bool__34 = false;
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
//clear ___nl__bool__11;
#line 2246
c_rt_lib0clear(&___nl__im__12);
#line 2246
c_rt_lib0clear(&___nl__im__13);
#line 2246
//clear ___nl__bool__14;
#line 2246
c_rt_lib0clear(&___nl__im__15);
#line 2246
c_rt_lib0clear(&___nl__im__16);
#line 2246
//clear ___nl__bool__17;
#line 2246
c_rt_lib0clear(&___nl__im__18);
#line 2246
c_rt_lib0clear(&___nl__im__19);
#line 2246
//clear ___nl__bool__20;
#line 2246
c_rt_lib0clear(&___nl__im__21);
#line 2246
c_rt_lib0clear(&___nl__im__22);
#line 2246
//clear ___nl__bool__23;
#line 2246
c_rt_lib0clear(&___nl__im__24);
#line 2246
c_rt_lib0clear(&___nl__im__25);
#line 2246
//clear ___nl__bool__26;
#line 2246
c_rt_lib0clear(&___nl__im__27);
#line 2246
c_rt_lib0clear(&___nl__im__28);
#line 2246
//clear ___nl__bool__29;
#line 2246
//clear ___nl__bool__30;
#line 2246
//clear ___nl__bool__31;
#line 2246
//clear ___nl__bool__32;
#line 2246
//clear ___nl__bool__33;
#line 2246
return ___nl__bool__34;
#line 2247
goto label_459;
#line 2247
label_420:
;
#line 2248
___nl__bool__35 = false;
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
//clear ___nl__bool__14;
#line 2248
c_rt_lib0clear(&___nl__im__15);
#line 2248
c_rt_lib0clear(&___nl__im__16);
#line 2248
//clear ___nl__bool__17;
#line 2248
c_rt_lib0clear(&___nl__im__18);
#line 2248
c_rt_lib0clear(&___nl__im__19);
#line 2248
//clear ___nl__bool__20;
#line 2248
c_rt_lib0clear(&___nl__im__21);
#line 2248
c_rt_lib0clear(&___nl__im__22);
#line 2248
//clear ___nl__bool__23;
#line 2248
c_rt_lib0clear(&___nl__im__24);
#line 2248
c_rt_lib0clear(&___nl__im__25);
#line 2248
//clear ___nl__bool__26;
#line 2248
c_rt_lib0clear(&___nl__im__27);
#line 2248
c_rt_lib0clear(&___nl__im__28);
#line 2248
//clear ___nl__bool__29;
#line 2248
//clear ___nl__bool__30;
#line 2248
//clear ___nl__bool__31;
#line 2248
//clear ___nl__bool__32;
#line 2248
//clear ___nl__bool__33;
#line 2248
//clear ___nl__bool__34;
#line 2248
return ___nl__bool__35;
#line 2249
goto label_459;
#line 2249
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__2, ___get_global_string_const(128), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(418), ___nl__im__2, ___get_global_string_const(414), ___nl__im__4, ___get_global_string_const(417), ___nl__im__6, ___get_global_string_const(412), ___nl__im__8, ___get_global_string_const(411), ___nl__im__10, ___get_global_string_const(223), ___nl__im__12, ___get_global_string_const(415), ___nl__im__14, ___get_global_string_const(410), ___nl__im__16, ___get_global_string_const(413), ___nl__im__18, ___get_global_string_const(416), ___nl__im__20));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(405), ___nl__im__2, ___get_global_string_const(406), ___nl__im__4, ___get_global_string_const(407), ___nl__im__6, ___get_global_string_const(408), ___nl__im__10));
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
